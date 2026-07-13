#include "recomp.h"

/* FUN_10001000 @ 0x115e1000 (18 bytes, 7 insns) */
void f_115e1000(void) {
  FTRACE(0x115e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e1005 jne 0x115e100c */
  if (!C.zf) goto L_115e100c;
  /* 115e1007 call 0x115e1164 */
  push32(0x115e100cu); f_115e1164();
L_115e100c:;
  /* 115e100c push 1 */
  push32((uint32_t)(0x1u));
  /* 115e100e pop eax */
  EAX = (pop32());
  /* 115e100f ret 0xc */
  ESPCHK(0x115e1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x115e1012 (122 bytes, 46 insns) */
void f_115e1012(void) {
  FTRACE(0x115e1012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e1012 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115e1014 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e101au);
  /* 115e101a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e101c pop ecx */
  ECX = (pop32());
  /* 115e101d je 0x115e1026 */
  if (C.zf) goto L_115e1026;
  /* 115e101f push 0x115e60a4 */
  push32((uint32_t)(0x115e60a4u));
  /* 115e1024 jmp 0x115e102b */
  goto L_115e102b;
L_115e1026:;
  /* 115e1026 push 0x115e6098 */
  push32((uint32_t)(0x115e6098u));
L_115e102b:;
  /* 115e102b call dword ptr [0x115e5150] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5150))), 0x115e1031u);
  /* 115e1031 pop ecx */
  ECX = (pop32());
  /* 115e1032 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1033 push esi */
  push32((uint32_t)(ESI));
  /* 115e1034 mov esi, dword ptr [0x115e5160] */
  ESI = (r32((uint32_t)(0x115e5160)));
  /* 115e103a push edi */
  push32((uint32_t)(EDI));
  /* 115e103b mov edi, 0x115e6090 */
  EDI = (0x115e6090u);
  /* 115e1040 push 0x115e6078 */
  push32((uint32_t)(0x115e6078u));
  /* 115e1045 push edi */
  push32((uint32_t)(EDI));
  /* 115e1046 call esi */
  call_ind((uint32_t)(ESI), 0x115e1048u);
  /* 115e1048 mov ebx, 0x115e6060 */
  EBX = (0x115e6060u);
  /* 115e104d push ebx */
  push32((uint32_t)(EBX));
  /* 115e104e push edi */
  push32((uint32_t)(EDI));
  /* 115e104f call esi */
  call_ind((uint32_t)(ESI), 0x115e1051u);
  /* 115e1051 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1052 push edi */
  push32((uint32_t)(EDI));
  /* 115e1053 call esi */
  call_ind((uint32_t)(ESI), 0x115e1055u);
  /* 115e1055 mov esi, dword ptr [0x115e5164] */
  ESI = (r32((uint32_t)(0x115e5164)));
  /* 115e105b mov ebx, 0x115e6998 */
  EBX = (0x115e6998u);
  /* 115e1060 push 0x115e6048 */
  push32((uint32_t)(0x115e6048u));
  /* 115e1065 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1066 call esi */
  call_ind((uint32_t)(ESI), 0x115e1068u);
  /* 115e1068 mov edi, 0x115e6988 */
  EDI = (0x115e6988u);
  /* 115e106d push 0x115e6030 */
  push32((uint32_t)(0x115e6030u));
  /* 115e1072 push edi */
  push32((uint32_t)(EDI));
  /* 115e1073 call esi */
  call_ind((uint32_t)(ESI), 0x115e1075u);
  /* 115e1075 mov esi, dword ptr [0x115e515c] */
  ESI = (r32((uint32_t)(0x115e515c)));
  /* 115e107b push ebx */
  push32((uint32_t)(EBX));
  /* 115e107c push 0 */
  push32((uint32_t)(0x0u));
  /* 115e107e call esi */
  call_ind((uint32_t)(ESI), 0x115e1080u);
  /* 115e1080 push edi */
  push32((uint32_t)(EDI));
  /* 115e1081 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1083 call esi */
  call_ind((uint32_t)(ESI), 0x115e1085u);
  /* 115e1085 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1088 pop edi */
  EDI = (pop32());
  /* 115e1089 pop esi */
  ESI = (pop32());
  /* 115e108a pop ebx */
  EBX = (pop32());
  /* 115e108b ret  */
  ESPCHK(0x115e1012u, _esp0);
  ESP += 4; return;
}

/* FUN_1000108c @ 0x115e108c (30 bytes, 15 insns) */
void f_115e108c(void) {
  FTRACE(0x115e108cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e108c push esi */
  push32((uint32_t)(ESI));
  /* 115e108d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_115e108f:;
  /* 115e108f push esi */
  push32((uint32_t)(ESI));
  /* 115e1090 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 115e1094 call dword ptr [0x115e5154] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5154))), 0x115e109au);
  /* 115e109a pop ecx */
  ECX = (pop32());
  /* 115e109b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e109d pop ecx */
  ECX = (pop32());
  /* 115e109e jg 0x115e10a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_115e10a6;
  /* 115e10a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e10a1 cmp esi, 7 */
  { uint32_t _a=(ESI),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e10a4 jl 0x115e108f */
  if ((C.sf!=C.of)) goto L_115e108f;
L_115e10a6:;
  /* 115e10a6 mov eax, esi */
  EAX = (ESI);
  /* 115e10a8 pop esi */
  ESI = (pop32());
  /* 115e10a9 ret  */
  ESPCHK(0x115e108cu, _esp0);
  ESP += 4; return;
}

/* FUN_100010aa @ 0x115e10aa (49 bytes, 19 insns) */
void f_115e10aa(void) {
  FTRACE(0x115e10aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e10aa push ebp */
  push32((uint32_t)(EBP));
  /* 115e10ab mov ebp, esp */
  EBP = (ESP);
  /* 115e10ad push esi */
  push32((uint32_t)(ESI));
  /* 115e10ae push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e10b1 call 0x115e108c */
  push32(0x115e10b6u); f_115e108c();
  /* 115e10b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e10b8 mov esi, eax */
  ESI = (EAX);
  /* 115e10ba push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e10bd call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e10c3u);
  /* 115e10c3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e10c6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e10c9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e10cc push esi */
  push32((uint32_t)(ESI));
  /* 115e10cd call dword ptr [0x115e5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5144))), 0x115e10d3u);
  /* 115e10d3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e10d6 mov eax, esi */
  EAX = (ESI);
  /* 115e10d8 pop esi */
  ESI = (pop32());
  /* 115e10d9 pop ebp */
  EBP = (pop32());
  /* 115e10da ret  */
  ESPCHK(0x115e10aau, _esp0);
  ESP += 4; return;
}

/* FUN_100010db @ 0x115e10db (24 bytes, 7 insns) */
void f_115e10db(void) {
  FTRACE(0x115e10dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e10db push 0 */
  push32((uint32_t)(0x0u));
  /* 115e10dd push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 115e10e2 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115e10e6 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115e10ea call 0x115e10aa */
  push32(0x115e10efu); f_115e10aa();
  /* 115e10ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e10f2 ret  */
  ESPCHK(0x115e10dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100010f3 @ 0x115e10f3 (39 bytes, 13 insns) */
void f_115e10f3(void) {
  FTRACE(0x115e10f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e10f3 push ebp */
  push32((uint32_t)(EBP));
  /* 115e10f4 mov ebp, esp */
  EBP = (ESP);
  /* 115e10f6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115e10fb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e10fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e1101 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e1104 push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1109 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e110c call dword ptr [0x115e5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5148))), 0x115e1112u);
  /* 115e1112 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115e1115 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1118 pop ebp */
  EBP = (pop32());
  /* 115e1119 ret  */
  ESPCHK(0x115e10f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000111a @ 0x115e111a (74 bytes, 28 insns) */
void f_115e111a(void) {
  FTRACE(0x115e111au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e111a push ebx */
  push32((uint32_t)(EBX));
  /* 115e111b push edi */
  push32((uint32_t)(EDI));
  /* 115e111c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 115e1120 call 0x115e108c */
  push32(0x115e1125u); f_115e108c();
  /* 115e1125 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e1127 pop ecx */
  ECX = (pop32());
  /* 115e1128 cmp dword ptr [0x115e6938], edi */
  { uint32_t _a=(r32((uint32_t)(0x115e6938))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e112e mov ebx, eax */
  EBX = (EAX);
  /* 115e1130 jle 0x115e115f */
  if ((C.zf||C.sf!=C.of)) goto L_115e115f;
  /* 115e1132 push esi */
  push32((uint32_t)(ESI));
  /* 115e1133 mov esi, 0x115e6878 */
  ESI = (0x115e6878u);
L_115e1138:;
  /* 115e1138 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1139 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 115e113d push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 115e1141 push esi */
  push32((uint32_t)(ESI));
  /* 115e1142 call 0x115e10f3 */
  push32(0x115e1147u); f_115e10f3();
  /* 115e1147 push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 115e114b push esi */
  push32((uint32_t)(ESI));
  /* 115e114c call dword ptr [0x115e5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5134))), 0x115e1152u);
  /* 115e1152 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1155 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e1156 cmp edi, dword ptr [0x115e6938] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x115e6938))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e115c jl 0x115e1138 */
  if ((C.sf!=C.of)) goto L_115e1138;
  /* 115e115e pop esi */
  ESI = (pop32());
L_115e115f:;
  /* 115e115f mov eax, ebx */
  EAX = (EBX);
  /* 115e1161 pop edi */
  EDI = (pop32());
  /* 115e1162 pop ebx */
  EBX = (pop32());
  /* 115e1163 ret  */
  ESPCHK(0x115e111au, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x115e1164 (683 bytes, 204 insns) */
void f_115e1164(void) {
  FTRACE(0x115e1164u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e1164 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1165 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1166 push esi */
  push32((uint32_t)(ESI));
  /* 115e1167 push edi */
  push32((uint32_t)(EDI));
  /* 115e1168 mov edi, dword ptr [0x115e5108] */
  EDI = (r32((uint32_t)(0x115e5108)));
  /* 115e116e push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1170 pop ebp */
  EBP = (pop32());
  /* 115e1171 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1172 push 0x115e6850 */
  push32((uint32_t)(0x115e6850u));
  /* 115e1177 call edi */
  call_ind((uint32_t)(EDI), 0x115e1179u);
  /* 115e1179 push ebp */
  push32((uint32_t)(EBP));
  /* 115e117a push 0x115e6938 */
  push32((uint32_t)(0x115e6938u));
  /* 115e117f call edi */
  call_ind((uint32_t)(EDI), 0x115e1181u);
  /* 115e1181 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1182 push 0x115e693c */
  push32((uint32_t)(0x115e693cu));
  /* 115e1187 call edi */
  call_ind((uint32_t)(EDI), 0x115e1189u);
  /* 115e1189 push ebp */
  push32((uint32_t)(EBP));
  /* 115e118a push 0x115e6820 */
  push32((uint32_t)(0x115e6820u));
  /* 115e118f call edi */
  call_ind((uint32_t)(EDI), 0x115e1191u);
  /* 115e1191 mov esi, dword ptr [0x115e5118] */
  ESI = (r32((uint32_t)(0x115e5118)));
  /* 115e1197 mov ebx, 0x115e61b0 */
  EBX = (0x115e61b0u);
  /* 115e119c push ebx */
  push32((uint32_t)(EBX));
  /* 115e119d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e119f call esi */
  call_ind((uint32_t)(ESI), 0x115e11a1u);
  /* 115e11a1 push ebx */
  push32((uint32_t)(EBX));
  /* 115e11a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e11a4 call esi */
  call_ind((uint32_t)(ESI), 0x115e11a6u);
  /* 115e11a6 push ebx */
  push32((uint32_t)(EBX));
  /* 115e11a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e11a9 call esi */
  call_ind((uint32_t)(ESI), 0x115e11abu);
  /* 115e11ab push 0x115e61a8 */
  push32((uint32_t)(0x115e61a8u));
  /* 115e11b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115e11b1 call esi */
  call_ind((uint32_t)(ESI), 0x115e11b3u);
  /* 115e11b3 mov esi, dword ptr [0x115e511c] */
  ESI = (r32((uint32_t)(0x115e511c)));
  /* 115e11b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e11bc push 0x115e61a4 */
  push32((uint32_t)(0x115e61a4u));
  /* 115e11c1 push 0x115e68a8 */
  push32((uint32_t)(0x115e68a8u));
  /* 115e11c6 call esi */
  call_ind((uint32_t)(ESI), 0x115e11c8u);
  /* 115e11c8 push 0x115e61a0 */
  push32((uint32_t)(0x115e61a0u));
  /* 115e11cd push 0x115e68b0 */
  push32((uint32_t)(0x115e68b0u));
  /* 115e11d2 call esi */
  call_ind((uint32_t)(ESI), 0x115e11d4u);
  /* 115e11d4 push 0x115e619c */
  push32((uint32_t)(0x115e619cu));
  /* 115e11d9 push 0x115e68c0 */
  push32((uint32_t)(0x115e68c0u));
  /* 115e11de call esi */
  call_ind((uint32_t)(ESI), 0x115e11e0u);
  /* 115e11e0 push 0x115e6198 */
  push32((uint32_t)(0x115e6198u));
  /* 115e11e5 push 0x115e6958 */
  push32((uint32_t)(0x115e6958u));
  /* 115e11ea call esi */
  call_ind((uint32_t)(ESI), 0x115e11ecu);
  /* 115e11ec push 0x115e6194 */
  push32((uint32_t)(0x115e6194u));
  /* 115e11f1 push 0x115e6960 */
  push32((uint32_t)(0x115e6960u));
  /* 115e11f6 call esi */
  call_ind((uint32_t)(ESI), 0x115e11f8u);
  /* 115e11f8 push 0x115e6190 */
  push32((uint32_t)(0x115e6190u));
  /* 115e11fd push 0x115e6968 */
  push32((uint32_t)(0x115e6968u));
  /* 115e1202 call esi */
  call_ind((uint32_t)(ESI), 0x115e1204u);
  /* 115e1204 push 0x115e6188 */
  push32((uint32_t)(0x115e6188u));
  /* 115e1209 push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e120e call esi */
  call_ind((uint32_t)(ESI), 0x115e1210u);
  /* 115e1210 push 0x115e6184 */
  push32((uint32_t)(0x115e6184u));
  /* 115e1215 push 0x115e6970 */
  push32((uint32_t)(0x115e6970u));
  /* 115e121a call esi */
  call_ind((uint32_t)(ESI), 0x115e121cu);
  /* 115e121c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e121f push 0x115e6180 */
  push32((uint32_t)(0x115e6180u));
  /* 115e1224 push 0x115e6978 */
  push32((uint32_t)(0x115e6978u));
  /* 115e1229 call esi */
  call_ind((uint32_t)(ESI), 0x115e122bu);
  /* 115e122b push 0x115e617c */
  push32((uint32_t)(0x115e617cu));
  /* 115e1230 push 0x115e6980 */
  push32((uint32_t)(0x115e6980u));
  /* 115e1235 call esi */
  call_ind((uint32_t)(ESI), 0x115e1237u);
  /* 115e1237 push 0x115e6178 */
  push32((uint32_t)(0x115e6178u));
  /* 115e123c push 0x115e6940 */
  push32((uint32_t)(0x115e6940u));
  /* 115e1241 call esi */
  call_ind((uint32_t)(ESI), 0x115e1243u);
  /* 115e1243 push 0x115e6174 */
  push32((uint32_t)(0x115e6174u));
  /* 115e1248 push 0x115e6948 */
  push32((uint32_t)(0x115e6948u));
  /* 115e124d call esi */
  call_ind((uint32_t)(ESI), 0x115e124fu);
  /* 115e124f push 0x115e6170 */
  push32((uint32_t)(0x115e6170u));
  /* 115e1254 push 0x115e6950 */
  push32((uint32_t)(0x115e6950u));
  /* 115e1259 call esi */
  call_ind((uint32_t)(ESI), 0x115e125bu);
  /* 115e125b push 0x115e6168 */
  push32((uint32_t)(0x115e6168u));
  /* 115e1260 push 0x115e6858 */
  push32((uint32_t)(0x115e6858u));
  /* 115e1265 call esi */
  call_ind((uint32_t)(ESI), 0x115e1267u);
  /* 115e1267 push 0x115e6160 */
  push32((uint32_t)(0x115e6160u));
  /* 115e126c push 0x115e6860 */
  push32((uint32_t)(0x115e6860u));
  /* 115e1271 call esi */
  call_ind((uint32_t)(ESI), 0x115e1273u);
  /* 115e1273 mov esi, dword ptr [0x115e5114] */
  ESI = (r32((uint32_t)(0x115e5114)));
  /* 115e1279 push 0x115e615c */
  push32((uint32_t)(0x115e615cu));
  /* 115e127e push 0x115e6918 */
  push32((uint32_t)(0x115e6918u));
  /* 115e1283 call esi */
  call_ind((uint32_t)(ESI), 0x115e1285u);
  /* 115e1285 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1288 push 0x115e6158 */
  push32((uint32_t)(0x115e6158u));
  /* 115e128d push 0x115e6928 */
  push32((uint32_t)(0x115e6928u));
  /* 115e1292 call esi */
  call_ind((uint32_t)(ESI), 0x115e1294u);
  /* 115e1294 push 0x115e6154 */
  push32((uint32_t)(0x115e6154u));
  /* 115e1299 push 0x115e68e8 */
  push32((uint32_t)(0x115e68e8u));
  /* 115e129e call esi */
  call_ind((uint32_t)(ESI), 0x115e12a0u);
  /* 115e12a0 push 0x115e6090 */
  push32((uint32_t)(0x115e6090u));
  /* 115e12a5 push 0x115e6870 */
  push32((uint32_t)(0x115e6870u));
  /* 115e12aa call esi */
  call_ind((uint32_t)(ESI), 0x115e12acu);
  /* 115e12ac push 0x115e6150 */
  push32((uint32_t)(0x115e6150u));
  /* 115e12b1 push 0x115e68f8 */
  push32((uint32_t)(0x115e68f8u));
  /* 115e12b6 call esi */
  call_ind((uint32_t)(ESI), 0x115e12b8u);
  /* 115e12b8 push 0x115e614c */
  push32((uint32_t)(0x115e614cu));
  /* 115e12bd push 0x115e6900 */
  push32((uint32_t)(0x115e6900u));
  /* 115e12c2 call esi */
  call_ind((uint32_t)(ESI), 0x115e12c4u);
  /* 115e12c4 push 0x115e6148 */
  push32((uint32_t)(0x115e6148u));
  /* 115e12c9 push 0x115e6908 */
  push32((uint32_t)(0x115e6908u));
  /* 115e12ce call esi */
  call_ind((uint32_t)(ESI), 0x115e12d0u);
  /* 115e12d0 push 0x115e6144 */
  push32((uint32_t)(0x115e6144u));
  /* 115e12d5 push 0x115e68d0 */
  push32((uint32_t)(0x115e68d0u));
  /* 115e12da call esi */
  call_ind((uint32_t)(ESI), 0x115e12dcu);
  /* 115e12dc push 0x115e6140 */
  push32((uint32_t)(0x115e6140u));
  /* 115e12e1 push 0x115e68d8 */
  push32((uint32_t)(0x115e68d8u));
  /* 115e12e6 call esi */
  call_ind((uint32_t)(ESI), 0x115e12e8u);
  /* 115e12e8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e12eb push 0x115e613c */
  push32((uint32_t)(0x115e613cu));
  /* 115e12f0 push 0x115e68e0 */
  push32((uint32_t)(0x115e68e0u));
  /* 115e12f5 call esi */
  call_ind((uint32_t)(ESI), 0x115e12f7u);
  /* 115e12f7 mov esi, dword ptr [0x115e5124] */
  ESI = (r32((uint32_t)(0x115e5124)));
  /* 115e12fd push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1302 call esi */
  call_ind((uint32_t)(ESI), 0x115e1304u);
  /* 115e1304 push 0x115e6880 */
  push32((uint32_t)(0x115e6880u));
  /* 115e1309 call esi */
  call_ind((uint32_t)(ESI), 0x115e130bu);
  /* 115e130b push 0x115e6888 */
  push32((uint32_t)(0x115e6888u));
  /* 115e1310 call esi */
  call_ind((uint32_t)(ESI), 0x115e1312u);
  /* 115e1312 push 0x115e6890 */
  push32((uint32_t)(0x115e6890u));
  /* 115e1317 call esi */
  call_ind((uint32_t)(ESI), 0x115e1319u);
  /* 115e1319 push 0x115e6898 */
  push32((uint32_t)(0x115e6898u));
  /* 115e131e call esi */
  call_ind((uint32_t)(ESI), 0x115e1320u);
  /* 115e1320 push 0x115e68c8 */
  push32((uint32_t)(0x115e68c8u));
  /* 115e1325 call esi */
  call_ind((uint32_t)(ESI), 0x115e1327u);
  /* 115e1327 push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e132c call esi */
  call_ind((uint32_t)(ESI), 0x115e132eu);
  /* 115e132e push 0x115e6828 */
  push32((uint32_t)(0x115e6828u));
  /* 115e1333 call esi */
  call_ind((uint32_t)(ESI), 0x115e1335u);
  /* 115e1335 push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e133a call esi */
  call_ind((uint32_t)(ESI), 0x115e133cu);
  /* 115e133c mov ebp, 0x115e6930 */
  EBP = (0x115e6930u);
  /* 115e1341 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1342 call esi */
  call_ind((uint32_t)(ESI), 0x115e1344u);
  /* 115e1344 mov ebx, 0x115e6848 */
  EBX = (0x115e6848u);
  /* 115e1349 push ebx */
  push32((uint32_t)(EBX));
  /* 115e134a call esi */
  call_ind((uint32_t)(ESI), 0x115e134cu);
  /* 115e134c push 8 */
  push32((uint32_t)(0x8u));
  /* 115e134e pop esi */
  ESI = (pop32());
  /* 115e134f push esi */
  push32((uint32_t)(ESI));
  /* 115e1350 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1355 call edi */
  call_ind((uint32_t)(EDI), 0x115e1357u);
  /* 115e1357 push esi */
  push32((uint32_t)(ESI));
  /* 115e1358 push 0x115e6880 */
  push32((uint32_t)(0x115e6880u));
  /* 115e135d call edi */
  call_ind((uint32_t)(EDI), 0x115e135fu);
  /* 115e135f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1362 push esi */
  push32((uint32_t)(ESI));
  /* 115e1363 push 0x115e6888 */
  push32((uint32_t)(0x115e6888u));
  /* 115e1368 call edi */
  call_ind((uint32_t)(EDI), 0x115e136au);
  /* 115e136a push esi */
  push32((uint32_t)(ESI));
  /* 115e136b push 0x115e6890 */
  push32((uint32_t)(0x115e6890u));
  /* 115e1370 call edi */
  call_ind((uint32_t)(EDI), 0x115e1372u);
  /* 115e1372 push esi */
  push32((uint32_t)(ESI));
  /* 115e1373 push 0x115e6898 */
  push32((uint32_t)(0x115e6898u));
  /* 115e1378 call edi */
  call_ind((uint32_t)(EDI), 0x115e137au);
  /* 115e137a push esi */
  push32((uint32_t)(ESI));
  /* 115e137b push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1380 call edi */
  call_ind((uint32_t)(EDI), 0x115e1382u);
  /* 115e1382 push esi */
  push32((uint32_t)(ESI));
  /* 115e1383 push 0x115e6828 */
  push32((uint32_t)(0x115e6828u));
  /* 115e1388 call edi */
  call_ind((uint32_t)(EDI), 0x115e138au);
  /* 115e138a push esi */
  push32((uint32_t)(ESI));
  /* 115e138b push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e1390 call edi */
  call_ind((uint32_t)(EDI), 0x115e1392u);
  /* 115e1392 push esi */
  push32((uint32_t)(ESI));
  /* 115e1393 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1394 call edi */
  call_ind((uint32_t)(EDI), 0x115e1396u);
  /* 115e1396 push esi */
  push32((uint32_t)(ESI));
  /* 115e1397 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1398 call edi */
  call_ind((uint32_t)(EDI), 0x115e139au);
  /* 115e139a mov esi, dword ptr [0x115e5128] */
  ESI = (r32((uint32_t)(0x115e5128)));
  /* 115e13a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e13a3 push 0x115e6128 */
  push32((uint32_t)(0x115e6128u));
  /* 115e13a8 push 0x115e6830 */
  push32((uint32_t)(0x115e6830u));
  /* 115e13ad call esi */
  call_ind((uint32_t)(ESI), 0x115e13afu);
  /* 115e13af push 0x115e6114 */
  push32((uint32_t)(0x115e6114u));
  /* 115e13b4 push 0x115e6838 */
  push32((uint32_t)(0x115e6838u));
  /* 115e13b9 call esi */
  call_ind((uint32_t)(ESI), 0x115e13bbu);
  /* 115e13bb push 0x115e6104 */
  push32((uint32_t)(0x115e6104u));
  /* 115e13c0 push 0x115e69a8 */
  push32((uint32_t)(0x115e69a8u));
  /* 115e13c5 call esi */
  call_ind((uint32_t)(ESI), 0x115e13c7u);
  /* 115e13c7 push 0x115e60f0 */
  push32((uint32_t)(0x115e60f0u));
  /* 115e13cc push 0x115e6840 */
  push32((uint32_t)(0x115e6840u));
  /* 115e13d1 call esi */
  call_ind((uint32_t)(ESI), 0x115e13d3u);
  /* 115e13d3 push 0x115e60dc */
  push32((uint32_t)(0x115e60dcu));
  /* 115e13d8 push 0x115e6910 */
  push32((uint32_t)(0x115e6910u));
  /* 115e13dd call esi */
  call_ind((uint32_t)(ESI), 0x115e13dfu);
  /* 115e13df push 0x115e60d0 */
  push32((uint32_t)(0x115e60d0u));
  /* 115e13e4 push 0x115e69a0 */
  push32((uint32_t)(0x115e69a0u));
  /* 115e13e9 call esi */
  call_ind((uint32_t)(ESI), 0x115e13ebu);
  /* 115e13eb push 0x115e60b8 */
  push32((uint32_t)(0x115e60b8u));
  /* 115e13f0 push 0x115e68a0 */
  push32((uint32_t)(0x115e68a0u));
  /* 115e13f5 call esi */
  call_ind((uint32_t)(ESI), 0x115e13f7u);
  /* 115e13f7 push 0x115e60b0 */
  push32((uint32_t)(0x115e60b0u));
  /* 115e13fc push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1401 call dword ptr [0x115e5120] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5120))), 0x115e1407u);
  /* 115e1407 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e140a pop edi */
  EDI = (pop32());
  /* 115e140b pop esi */
  ESI = (pop32());
  /* 115e140c pop ebp */
  EBP = (pop32());
  /* 115e140d pop ebx */
  EBX = (pop32());
  /* 115e140e ret  */
  ESPCHK(0x115e1164u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x115e140f (3723 bytes, 1273 insns) */
void f_115e140f(void) {
  FTRACE(0x115e140fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e140f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e1412 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1413 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1414 push esi */
  push32((uint32_t)(ESI));
  /* 115e1415 push edi */
  push32((uint32_t)(EDI));
  /* 115e1416 mov edi, dword ptr [0x115e5158] */
  EDI = (r32((uint32_t)(0x115e5158)));
  /* 115e141c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115e141e call edi */
  call_ind((uint32_t)(EDI), 0x115e1420u);
  /* 115e1420 mov esi, dword ptr [0x115e5160] */
  ESI = (r32((uint32_t)(0x115e5160)));
  /* 115e1426 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e1428 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e142a pop ecx */
  ECX = (pop32());
  /* 115e142b mov ebp, 0x115e6090 */
  EBP = (0x115e6090u);
  /* 115e1430 je 0x115e17e6 */
  if (C.zf) goto L_115e17e6;
  /* 115e1436 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1437 call dword ptr [0x115e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50b0))), 0x115e143du);
  /* 115e143d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e143f mov dword ptr [0x115e6850], eax */
  w32((uint32_t)(0x115e6850), (EAX));
  /* 115e1444 pop ebx */
  EBX = (pop32());
  /* 115e1445 lea eax, [eax + eax*4 + 0xa] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0xa));
  /* 115e1449 mov dword ptr [0x115e6938], eax */
  w32((uint32_t)(0x115e6938), (EAX));
  /* 115e144e mov dword ptr [0x115e6820], ebx */
  w32((uint32_t)(0x115e6820), (EBX));
  /* 115e1454 mov dword ptr [0x115e693c], ebx */
  w32((uint32_t)(0x115e693c), (EBX));
  /* 115e145a mov dword ptr [esp], 0x115e6918 */
  w32((uint32_t)(ESP), (0x115e6918u));
  /* 115e1461 call dword ptr [0x115e50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50b8))), 0x115e1467u);
  /* 115e1467 mov edi, 0x115e615c */
  EDI = (0x115e615cu);
  /* 115e146c mov dword ptr [esp], 0x115e64e8 */
  w32((uint32_t)(ESP), (0x115e64e8u));
  /* 115e1473 push edi */
  push32((uint32_t)(EDI));
  /* 115e1474 call esi */
  call_ind((uint32_t)(ESI), 0x115e1476u);
  /* 115e1476 push 0x115e64e0 */
  push32((uint32_t)(0x115e64e0u));
  /* 115e147b push edi */
  push32((uint32_t)(EDI));
  /* 115e147c call esi */
  call_ind((uint32_t)(ESI), 0x115e147eu);
  /* 115e147e push 0x115e64d8 */
  push32((uint32_t)(0x115e64d8u));
  /* 115e1483 push edi */
  push32((uint32_t)(EDI));
  /* 115e1484 call esi */
  call_ind((uint32_t)(ESI), 0x115e1486u);
  /* 115e1486 push 0x115e64d0 */
  push32((uint32_t)(0x115e64d0u));
  /* 115e148b push edi */
  push32((uint32_t)(EDI));
  /* 115e148c call esi */
  call_ind((uint32_t)(ESI), 0x115e148eu);
  /* 115e148e push 0x115e64c8 */
  push32((uint32_t)(0x115e64c8u));
  /* 115e1493 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1494 call esi */
  call_ind((uint32_t)(ESI), 0x115e1496u);
  /* 115e1496 push 0x115e6078 */
  push32((uint32_t)(0x115e6078u));
  /* 115e149b push ebp */
  push32((uint32_t)(EBP));
  /* 115e149c call esi */
  call_ind((uint32_t)(ESI), 0x115e149eu);
  /* 115e149e push 0x115e6048 */
  push32((uint32_t)(0x115e6048u));
  /* 115e14a3 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14a4 call esi */
  call_ind((uint32_t)(ESI), 0x115e14a6u);
  /* 115e14a6 push 0x115e64b0 */
  push32((uint32_t)(0x115e64b0u));
  /* 115e14ab push ebp */
  push32((uint32_t)(EBP));
  /* 115e14ac call esi */
  call_ind((uint32_t)(ESI), 0x115e14aeu);
  /* 115e14ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e14b1 push 0x115e6498 */
  push32((uint32_t)(0x115e6498u));
  /* 115e14b6 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14b7 call esi */
  call_ind((uint32_t)(ESI), 0x115e14b9u);
  /* 115e14b9 push 0x115e6480 */
  push32((uint32_t)(0x115e6480u));
  /* 115e14be push ebp */
  push32((uint32_t)(EBP));
  /* 115e14bf call esi */
  call_ind((uint32_t)(ESI), 0x115e14c1u);
  /* 115e14c1 mov edi, 0x115e6468 */
  EDI = (0x115e6468u);
  /* 115e14c6 push edi */
  push32((uint32_t)(EDI));
  /* 115e14c7 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14c8 call esi */
  call_ind((uint32_t)(ESI), 0x115e14cau);
  /* 115e14ca push edi */
  push32((uint32_t)(EDI));
  /* 115e14cb push ebp */
  push32((uint32_t)(EBP));
  /* 115e14cc call esi */
  call_ind((uint32_t)(ESI), 0x115e14ceu);
  /* 115e14ce push 0x115e6060 */
  push32((uint32_t)(0x115e6060u));
  /* 115e14d3 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14d4 call esi */
  call_ind((uint32_t)(ESI), 0x115e14d6u);
  /* 115e14d6 mov edi, 0x115e6030 */
  EDI = (0x115e6030u);
  /* 115e14db push edi */
  push32((uint32_t)(EDI));
  /* 115e14dc push ebp */
  push32((uint32_t)(EBP));
  /* 115e14dd call esi */
  call_ind((uint32_t)(ESI), 0x115e14dfu);
  /* 115e14df push edi */
  push32((uint32_t)(EDI));
  /* 115e14e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14e1 call esi */
  call_ind((uint32_t)(ESI), 0x115e14e3u);
  /* 115e14e3 push 0x115e6450 */
  push32((uint32_t)(0x115e6450u));
  /* 115e14e8 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14e9 call esi */
  call_ind((uint32_t)(ESI), 0x115e14ebu);
  /* 115e14eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e14ee push 0x115e6438 */
  push32((uint32_t)(0x115e6438u));
  /* 115e14f3 push ebp */
  push32((uint32_t)(EBP));
  /* 115e14f4 call esi */
  call_ind((uint32_t)(ESI), 0x115e14f6u);
  /* 115e14f6 push 0x115e6420 */
  push32((uint32_t)(0x115e6420u));
  /* 115e14fb push ebp */
  push32((uint32_t)(EBP));
  /* 115e14fc call esi */
  call_ind((uint32_t)(ESI), 0x115e14feu);
  /* 115e14fe mov edi, 0x115e6408 */
  EDI = (0x115e6408u);
  /* 115e1503 push edi */
  push32((uint32_t)(EDI));
  /* 115e1504 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1505 call esi */
  call_ind((uint32_t)(ESI), 0x115e1507u);
  /* 115e1507 push edi */
  push32((uint32_t)(EDI));
  /* 115e1508 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1509 call esi */
  call_ind((uint32_t)(ESI), 0x115e150bu);
  /* 115e150b push 0x115e63ec */
  push32((uint32_t)(0x115e63ecu));
  /* 115e1510 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1511 call esi */
  call_ind((uint32_t)(ESI), 0x115e1513u);
  /* 115e1513 push 0x115e63d0 */
  push32((uint32_t)(0x115e63d0u));
  /* 115e1518 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1519 call esi */
  call_ind((uint32_t)(ESI), 0x115e151bu);
  /* 115e151b push 0x115e63b8 */
  push32((uint32_t)(0x115e63b8u));
  /* 115e1520 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1521 call esi */
  call_ind((uint32_t)(ESI), 0x115e1523u);
  /* 115e1523 push 0x115e639c */
  push32((uint32_t)(0x115e639cu));
  /* 115e1528 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1529 call esi */
  call_ind((uint32_t)(ESI), 0x115e152bu);
  /* 115e152b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e152e push 0x115e6384 */
  push32((uint32_t)(0x115e6384u));
  /* 115e1533 push ebp */
  push32((uint32_t)(EBP));
  /* 115e1534 call esi */
  call_ind((uint32_t)(ESI), 0x115e1536u);
  /* 115e1536 push 0x115e6368 */
  push32((uint32_t)(0x115e6368u));
  /* 115e153b push ebp */
  push32((uint32_t)(EBP));
  /* 115e153c call esi */
  call_ind((uint32_t)(ESI), 0x115e153eu);
  /* 115e153e push 0x115e6360 */
  push32((uint32_t)(0x115e6360u));
  /* 115e1543 push 0x115e6140 */
  push32((uint32_t)(0x115e6140u));
  /* 115e1548 call esi */
  call_ind((uint32_t)(ESI), 0x115e154au);
  /* 115e154a mov edi, 0x115e6144 */
  EDI = (0x115e6144u);
  /* 115e154f push 0x115e6358 */
  push32((uint32_t)(0x115e6358u));
  /* 115e1554 push edi */
  push32((uint32_t)(EDI));
  /* 115e1555 call esi */
  call_ind((uint32_t)(ESI), 0x115e1557u);
  /* 115e1557 push 0x115e6350 */
  push32((uint32_t)(0x115e6350u));
  /* 115e155c push edi */
  push32((uint32_t)(EDI));
  /* 115e155d call esi */
  call_ind((uint32_t)(ESI), 0x115e155fu);
  /* 115e155f mov edi, dword ptr [0x115e50bc] */
  EDI = (r32((uint32_t)(0x115e50bc)));
  /* 115e1565 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1567 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1568 call edi */
  call_ind((uint32_t)(EDI), 0x115e156au);
  /* 115e156a push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e156c push 2 */
  push32((uint32_t)(0x2u));
  /* 115e156e call edi */
  call_ind((uint32_t)(EDI), 0x115e1570u);
  /* 115e1570 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1572 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1574 call edi */
  call_ind((uint32_t)(EDI), 0x115e1576u);
  /* 115e1576 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1579 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115e157b push 4 */
  push32((uint32_t)(0x4u));
  /* 115e157d call edi */
  call_ind((uint32_t)(EDI), 0x115e157fu);
  /* 115e157f push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1581 mov edi, dword ptr [0x115e50b4] */
  EDI = (r32((uint32_t)(0x115e50b4)));
  /* 115e1587 pop eax */
  EAX = (pop32());
  /* 115e1588 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e158a sub eax, dword ptr [0x115e6850] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115e6850))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e1590 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e1596 push eax */
  push32((uint32_t)(EAX));
  /* 115e1597 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1598 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1599 call edi */
  call_ind((uint32_t)(EDI), 0x115e159bu);
  /* 115e159b push ebx */
  push32((uint32_t)(EBX));
  /* 115e159c push ebx */
  push32((uint32_t)(EBX));
  /* 115e159d mov ebx, dword ptr [0x115e50c4] */
  EBX = (r32((uint32_t)(0x115e50c4)));
  /* 115e15a3 call ebx */
  call_ind((uint32_t)(EBX), 0x115e15a5u);
  /* 115e15a5 push eax */
  push32((uint32_t)(EAX));
  /* 115e15a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e15a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15aa call edi */
  call_ind((uint32_t)(EDI), 0x115e15acu);
  /* 115e15ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15ae push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15b0 call ebx */
  call_ind((uint32_t)(EBX), 0x115e15b2u);
  /* 115e15b2 push eax */
  push32((uint32_t)(EAX));
  /* 115e15b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e15b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15b7 call edi */
  call_ind((uint32_t)(EDI), 0x115e15b9u);
  /* 115e15b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15bb push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15bd call ebx */
  call_ind((uint32_t)(EBX), 0x115e15bfu);
  /* 115e15bf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e15c2 push eax */
  push32((uint32_t)(EAX));
  /* 115e15c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e15c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15c7 call edi */
  call_ind((uint32_t)(EDI), 0x115e15c9u);
  /* 115e15c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15cb push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15cd call ebx */
  call_ind((uint32_t)(EBX), 0x115e15cfu);
  /* 115e15cf push eax */
  push32((uint32_t)(EAX));
  /* 115e15d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e15d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15d4 call edi */
  call_ind((uint32_t)(EDI), 0x115e15d6u);
  /* 115e15d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15da call ebx */
  call_ind((uint32_t)(EBX), 0x115e15dcu);
  /* 115e15dc push eax */
  push32((uint32_t)(EAX));
  /* 115e15dd push 5 */
  push32((uint32_t)(0x5u));
  /* 115e15df push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15e1 call edi */
  call_ind((uint32_t)(EDI), 0x115e15e3u);
  /* 115e15e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15e7 call ebx */
  call_ind((uint32_t)(EBX), 0x115e15e9u);
  /* 115e15e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e15eb pop ecx */
  ECX = (pop32());
  /* 115e15ec sub ecx, dword ptr [0x115e6850] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115e6850))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e15f2 imul ecx, ecx, 0xc350 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xc350u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e15f8 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e15fa push eax */
  push32((uint32_t)(EAX));
  /* 115e15fb push 0 */
  push32((uint32_t)(0x0u));
  /* 115e15fd push 2 */
  push32((uint32_t)(0x2u));
  /* 115e15ff call edi */
  call_ind((uint32_t)(EDI), 0x115e1601u);
  /* 115e1601 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1604 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1606 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1608 call ebx */
  call_ind((uint32_t)(EBX), 0x115e160au);
  /* 115e160a push eax */
  push32((uint32_t)(EAX));
  /* 115e160b push 3 */
  push32((uint32_t)(0x3u));
  /* 115e160d push 2 */
  push32((uint32_t)(0x2u));
  /* 115e160f call edi */
  call_ind((uint32_t)(EDI), 0x115e1611u);
  /* 115e1611 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1613 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1615 call ebx */
  call_ind((uint32_t)(EBX), 0x115e1617u);
  /* 115e1617 push eax */
  push32((uint32_t)(EAX));
  /* 115e1618 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e161a push 2 */
  push32((uint32_t)(0x2u));
  /* 115e161c call edi */
  call_ind((uint32_t)(EDI), 0x115e161eu);
  /* 115e161e push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1620 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1622 call ebx */
  call_ind((uint32_t)(EBX), 0x115e1624u);
  /* 115e1624 push eax */
  push32((uint32_t)(EAX));
  /* 115e1625 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1627 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1629 call edi */
  call_ind((uint32_t)(EDI), 0x115e162bu);
  /* 115e162b push 0 */
  push32((uint32_t)(0x0u));
  /* 115e162d push 2 */
  push32((uint32_t)(0x2u));
  /* 115e162f call ebx */
  call_ind((uint32_t)(EBX), 0x115e1631u);
  /* 115e1631 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1634 push eax */
  push32((uint32_t)(EAX));
  /* 115e1635 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1637 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1639 call edi */
  call_ind((uint32_t)(EDI), 0x115e163bu);
  /* 115e163b push 0 */
  push32((uint32_t)(0x0u));
  /* 115e163d push 2 */
  push32((uint32_t)(0x2u));
  /* 115e163f call ebx */
  call_ind((uint32_t)(EBX), 0x115e1641u);
  /* 115e1641 push eax */
  push32((uint32_t)(EAX));
  /* 115e1642 push 5 */
  push32((uint32_t)(0x5u));
  /* 115e1644 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1646 call edi */
  call_ind((uint32_t)(EDI), 0x115e1648u);
  /* 115e1648 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e164a push 0 */
  push32((uint32_t)(0x0u));
  /* 115e164c call ebx */
  call_ind((uint32_t)(EBX), 0x115e164eu);
  /* 115e164e push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1650 pop ecx */
  ECX = (pop32());
  /* 115e1651 sub ecx, dword ptr [0x115e6850] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115e6850))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e1657 imul ecx, ecx, 0xc350 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xc350u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e165d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e165f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115e1661 push eax */
  push32((uint32_t)(EAX));
  /* 115e1662 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1664 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1666 call edi */
  call_ind((uint32_t)(EDI), 0x115e1668u);
  /* 115e1668 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e166a push 1 */
  push32((uint32_t)(0x1u));
  /* 115e166c call ebx */
  call_ind((uint32_t)(EBX), 0x115e166eu);
  /* 115e166e push eax */
  push32((uint32_t)(EAX));
  /* 115e166f push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1671 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1673 call edi */
  call_ind((uint32_t)(EDI), 0x115e1675u);
  /* 115e1675 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1678 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e167a push 1 */
  push32((uint32_t)(0x1u));
  /* 115e167c call ebx */
  call_ind((uint32_t)(EBX), 0x115e167eu);
  /* 115e167e push eax */
  push32((uint32_t)(EAX));
  /* 115e167f push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1681 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1683 call edi */
  call_ind((uint32_t)(EDI), 0x115e1685u);
  /* 115e1685 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1687 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1689 call ebx */
  call_ind((uint32_t)(EBX), 0x115e168bu);
  /* 115e168b push eax */
  push32((uint32_t)(EAX));
  /* 115e168c push 1 */
  push32((uint32_t)(0x1u));
  /* 115e168e push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1690 call edi */
  call_ind((uint32_t)(EDI), 0x115e1692u);
  /* 115e1692 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1694 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1696 call ebx */
  call_ind((uint32_t)(EBX), 0x115e1698u);
  /* 115e1698 push eax */
  push32((uint32_t)(EAX));
  /* 115e1699 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e169b push 1 */
  push32((uint32_t)(0x1u));
  /* 115e169d call edi */
  call_ind((uint32_t)(EDI), 0x115e169fu);
  /* 115e169f push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16a3 call ebx */
  call_ind((uint32_t)(EBX), 0x115e16a5u);
  /* 115e16a5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e16a8 push eax */
  push32((uint32_t)(EAX));
  /* 115e16a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 115e16ab push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16ad call edi */
  call_ind((uint32_t)(EDI), 0x115e16afu);
  /* 115e16af push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16b3 call ebx */
  call_ind((uint32_t)(EBX), 0x115e16b5u);
  /* 115e16b5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115e16b8 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115e16ba push eax */
  push32((uint32_t)(EAX));
  /* 115e16bb push 3 */
  push32((uint32_t)(0x3u));
  /* 115e16bd push 3 */
  push32((uint32_t)(0x3u));
  /* 115e16bf call edi */
  call_ind((uint32_t)(EDI), 0x115e16c1u);
  /* 115e16c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16c5 call ebx */
  call_ind((uint32_t)(EBX), 0x115e16c7u);
  /* 115e16c7 push eax */
  push32((uint32_t)(EAX));
  /* 115e16c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16ca push 3 */
  push32((uint32_t)(0x3u));
  /* 115e16cc call edi */
  call_ind((uint32_t)(EDI), 0x115e16ceu);
  /* 115e16ce push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16d2 call ebx */
  call_ind((uint32_t)(EBX), 0x115e16d4u);
  /* 115e16d4 push eax */
  push32((uint32_t)(EAX));
  /* 115e16d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e16d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e16d9 call edi */
  call_ind((uint32_t)(EDI), 0x115e16dbu);
  /* 115e16db add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e16de push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16e2 call ebx */
  call_ind((uint32_t)(EBX), 0x115e16e4u);
  /* 115e16e4 push eax */
  push32((uint32_t)(EAX));
  /* 115e16e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e16e9 call edi */
  call_ind((uint32_t)(EDI), 0x115e16ebu);
  /* 115e16eb push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16ed push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16ef call ebx */
  call_ind((uint32_t)(EBX), 0x115e16f1u);
  /* 115e16f1 push eax */
  push32((uint32_t)(EAX));
  /* 115e16f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e16f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e16f6 call edi */
  call_ind((uint32_t)(EDI), 0x115e16f8u);
  /* 115e16f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e16fa push 1 */
  push32((uint32_t)(0x1u));
  /* 115e16fc call ebx */
  call_ind((uint32_t)(EBX), 0x115e16feu);
  /* 115e16fe push eax */
  push32((uint32_t)(EAX));
  /* 115e16ff push 5 */
  push32((uint32_t)(0x5u));
  /* 115e1701 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1703 call edi */
  call_ind((uint32_t)(EDI), 0x115e1705u);
  /* 115e1705 mov edi, dword ptr [0x115e5134] */
  EDI = (r32((uint32_t)(0x115e5134)));
  /* 115e170b push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1710 push 0x115e68d0 */
  push32((uint32_t)(0x115e68d0u));
  /* 115e1715 call edi */
  call_ind((uint32_t)(EDI), 0x115e1717u);
  /* 115e1717 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e171a push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e171f push 0x115e68d8 */
  push32((uint32_t)(0x115e68d8u));
  /* 115e1724 call edi */
  call_ind((uint32_t)(EDI), 0x115e1726u);
  /* 115e1726 mov ebx, 0x115e6930 */
  EBX = (0x115e6930u);
  /* 115e172b push ebx */
  push32((uint32_t)(EBX));
  /* 115e172c push 0x115e68e0 */
  push32((uint32_t)(0x115e68e0u));
  /* 115e1731 call edi */
  call_ind((uint32_t)(EDI), 0x115e1733u);
  /* 115e1733 push 0x115e6848 */
  push32((uint32_t)(0x115e6848u));
  /* 115e1738 push 0x115e6870 */
  push32((uint32_t)(0x115e6870u));
  /* 115e173d call edi */
  call_ind((uint32_t)(EDI), 0x115e173fu);
  /* 115e173f mov edi, 0x115e68f0 */
  EDI = (0x115e68f0u);
  /* 115e1744 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e1746 push edi */
  push32((uint32_t)(EDI));
  /* 115e1747 call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e174du);
  /* 115e174d push edi */
  push32((uint32_t)(EDI));
  /* 115e174e call 0x115e108c */
  push32(0x115e1753u); f_115e108c();
  /* 115e1753 push eax */
  push32((uint32_t)(EAX));
  /* 115e1754 call dword ptr [0x115e50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50c8))), 0x115e175au);
  /* 115e175a push edi */
  push32((uint32_t)(EDI));
  /* 115e175b call 0x115e108c */
  push32(0x115e1760u); f_115e108c();
  /* 115e1760 mov edi, dword ptr [0x115e513c] */
  EDI = (r32((uint32_t)(0x115e513c)));
  /* 115e1766 push eax */
  push32((uint32_t)(EAX));
  /* 115e1767 call edi */
  call_ind((uint32_t)(EDI), 0x115e1769u);
  /* 115e1769 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e176b push ebx */
  push32((uint32_t)(EBX));
  /* 115e176c call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e1772u);
  /* 115e1772 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1773 call 0x115e108c */
  push32(0x115e1778u); f_115e108c();
  /* 115e1778 push eax */
  push32((uint32_t)(EAX));
  /* 115e1779 call dword ptr [0x115e50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50c8))), 0x115e177fu);
  /* 115e177f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1782 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1783 call 0x115e108c */
  push32(0x115e1788u); f_115e108c();
  /* 115e1788 push eax */
  push32((uint32_t)(EAX));
  /* 115e1789 call edi */
  call_ind((uint32_t)(EDI), 0x115e178bu);
  /* 115e178b push 1 */
  push32((uint32_t)(0x1u));
  /* 115e178d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e178f push 0x115e6958 */
  push32((uint32_t)(0x115e6958u));
  /* 115e1794 call dword ptr [0x115e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50c0))), 0x115e179au);
  /* 115e179a push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115e179c call dword ptr [0x115e50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d0))), 0x115e17a2u);
  /* 115e17a2 mov edi, dword ptr [0x115e50d4] */
  EDI = (r32((uint32_t)(0x115e50d4)));
  /* 115e17a8 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115e17aa call edi */
  call_ind((uint32_t)(EDI), 0x115e17acu);
  /* 115e17ac push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115e17ae call edi */
  call_ind((uint32_t)(EDI), 0x115e17b0u);
  /* 115e17b0 mov edi, dword ptr [0x115e5150] */
  EDI = (r32((uint32_t)(0x115e5150)));
  /* 115e17b6 push 0x115e6348 */
  push32((uint32_t)(0x115e6348u));
  /* 115e17bb call edi */
  call_ind((uint32_t)(EDI), 0x115e17bdu);
  /* 115e17bd push 0x115e6340 */
  push32((uint32_t)(0x115e6340u));
  /* 115e17c2 call edi */
  call_ind((uint32_t)(EDI), 0x115e17c4u);
  /* 115e17c4 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 115e17c9 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e17cb call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e17d1u);
  /* 115e17d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e17d3 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115e17d5 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e17dbu);
  /* 115e17db mov edi, dword ptr [0x115e5158] */
  EDI = (r32((uint32_t)(0x115e5158)));
  /* 115e17e1 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e17e4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115e17e6:;
  /* 115e17e6 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e17e8 call edi */
  call_ind((uint32_t)(EDI), 0x115e17eau);
  /* 115e17ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e17ec pop ecx */
  ECX = (pop32());
  /* 115e17ed jne 0x115e1917 */
  if (!C.zf) goto L_115e1917;
  /* 115e17f3 push 0xa */
  push32((uint32_t)(0xau));
  /* 115e17f5 call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e17fbu);
  /* 115e17fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e17fd pop ecx */
  ECX = (pop32());
  /* 115e17fe je 0x115e1917 */
  if (C.zf) goto L_115e1917;
  /* 115e1804 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 115e1806 call edi */
  call_ind((uint32_t)(EDI), 0x115e1808u);
  /* 115e1808 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e180a pop ecx */
  ECX = (pop32());
  /* 115e180b je 0x115e1837 */
  if (C.zf) goto L_115e1837;
  /* 115e180d mov eax, dword ptr [0x115e68a8] */
  EAX = (r32((uint32_t)(0x115e68a8)));
  /* 115e1812 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1813 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 115e1817 mov eax, dword ptr [0x115e68ac] */
  EAX = (r32((uint32_t)(0x115e68ac)));
  /* 115e181c push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 115e181e mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 115e1822 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1828u);
  /* 115e1828 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e182a push 0x20 */
  push32((uint32_t)(0x20u));
L_115e182c:;
  /* 115e182c call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1832u);
  /* 115e1832 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1835 jmp 0x115e1888 */
  goto L_115e1888;
L_115e1837:;
  /* 115e1837 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115e1839 call edi */
  call_ind((uint32_t)(EDI), 0x115e183bu);
  /* 115e183b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e183d pop ecx */
  ECX = (pop32());
  /* 115e183e je 0x115e1861 */
  if (C.zf) goto L_115e1861;
  /* 115e1840 mov eax, dword ptr [0x115e68b0] */
  EAX = (r32((uint32_t)(0x115e68b0)));
  /* 115e1845 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1846 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 115e184a mov eax, dword ptr [0x115e68b4] */
  EAX = (r32((uint32_t)(0x115e68b4)));
  /* 115e184f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115e1851 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 115e1855 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e185bu);
  /* 115e185b push 1 */
  push32((uint32_t)(0x1u));
  /* 115e185d push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115e185f jmp 0x115e182c */
  goto L_115e182c;
L_115e1861:;
  /* 115e1861 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115e1863 call edi */
  call_ind((uint32_t)(EDI), 0x115e1865u);
  /* 115e1865 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1867 pop ecx */
  ECX = (pop32());
  /* 115e1868 je 0x115e1888 */
  if (C.zf) goto L_115e1888;
  /* 115e186a mov eax, dword ptr [0x115e68c0] */
  EAX = (r32((uint32_t)(0x115e68c0)));
  /* 115e186f push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1871 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 115e1875 mov eax, dword ptr [0x115e68c4] */
  EAX = (r32((uint32_t)(0x115e68c4)));
  /* 115e187a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 115e187c mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 115e1880 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1886u);
  /* 115e1886 pop ecx */
  ECX = (pop32());
  /* 115e1887 pop ecx */
  ECX = (pop32());
L_115e1888:;
  /* 115e1888 mov eax, dword ptr [0x115e6938] */
  EAX = (r32((uint32_t)(0x115e6938)));
  /* 115e188d mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 115e1891 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e1893 jle 0x115e18f3 */
  if ((C.zf||C.sf!=C.of)) goto L_115e18f3;
L_115e1895:;
  /* 115e1895 lea eax, [esp + 0x14] */
  EAX = ((uint32_t)(ESP + 0x14));
  /* 115e1899 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e189b push eax */
  push32((uint32_t)(EAX));
  /* 115e189c push 0x115e68a0 */
  push32((uint32_t)(0x115e68a0u));
  /* 115e18a1 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e18a6 call 0x115e10f3 */
  push32(0x115e18abu); f_115e10f3();
  /* 115e18ab push 0x115e6890 */
  push32((uint32_t)(0x115e6890u));
  /* 115e18b0 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e18b5 call dword ptr [0x115e5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5134))), 0x115e18bbu);
  /* 115e18bb lea eax, [esp + 0x2c] */
  EAX = ((uint32_t)(ESP + 0x2c));
  /* 115e18bf push 3 */
  push32((uint32_t)(0x3u));
  /* 115e18c1 push eax */
  push32((uint32_t)(EAX));
  /* 115e18c2 push 0x115e69a0 */
  push32((uint32_t)(0x115e69a0u));
  /* 115e18c7 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e18cc call 0x115e10f3 */
  push32(0x115e18d1u); f_115e10f3();
  /* 115e18d1 push 0x115e6898 */
  push32((uint32_t)(0x115e6898u));
  /* 115e18d6 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e18db call dword ptr [0x115e5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5134))), 0x115e18e1u);
  /* 115e18e1 mov eax, dword ptr [0x115e6938] */
  EAX = (r32((uint32_t)(0x115e6938)));
  /* 115e18e6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e18e9 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 115e18ed cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e18f1 jl 0x115e1895 */
  if ((C.sf!=C.of)) goto L_115e1895;
L_115e18f3:;
  /* 115e18f3 add eax, dword ptr [0x115e6850] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115e6850))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e18f9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115e18fe push 0xa */
  push32((uint32_t)(0xau));
  /* 115e1900 mov dword ptr [0x115e6938], eax */
  w32((uint32_t)(0x115e6938), (EAX));
  /* 115e1905 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e190bu);
  /* 115e190b push ebx */
  push32((uint32_t)(EBX));
  /* 115e190c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 115e190e call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1914u);
  /* 115e1914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1917:;
  /* 115e1917 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1919 call edi */
  call_ind((uint32_t)(EDI), 0x115e191bu);
  /* 115e191b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e191d pop ecx */
  ECX = (pop32());
  /* 115e191e jne 0x115e1944 */
  if (!C.zf) goto L_115e1944;
  /* 115e1920 push 0x115e6890 */
  push32((uint32_t)(0x115e6890u));
  /* 115e1925 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e192bu);
  /* 115e192b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e192d pop ecx */
  ECX = (pop32());
  /* 115e192e je 0x115e1944 */
  if (C.zf) goto L_115e1944;
  /* 115e1930 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1931 push 0x115e6958 */
  push32((uint32_t)(0x115e6958u));
  /* 115e1936 push 0x115e6890 */
  push32((uint32_t)(0x115e6890u));
  /* 115e193b call dword ptr [0x115e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e8))), 0x115e1941u);
  /* 115e1941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1944:;
  /* 115e1944 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1946 call edi */
  call_ind((uint32_t)(EDI), 0x115e1948u);
  /* 115e1948 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e194a pop ecx */
  ECX = (pop32());
  /* 115e194b jne 0x115e1971 */
  if (!C.zf) goto L_115e1971;
  /* 115e194d push 0x115e6898 */
  push32((uint32_t)(0x115e6898u));
  /* 115e1952 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e1958u);
  /* 115e1958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e195a pop ecx */
  ECX = (pop32());
  /* 115e195b je 0x115e1971 */
  if (C.zf) goto L_115e1971;
  /* 115e195d push ebx */
  push32((uint32_t)(EBX));
  /* 115e195e push 0x115e6958 */
  push32((uint32_t)(0x115e6958u));
  /* 115e1963 push 0x115e6898 */
  push32((uint32_t)(0x115e6898u));
  /* 115e1968 call dword ptr [0x115e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e8))), 0x115e196eu);
  /* 115e196e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1971:;
  /* 115e1971 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1973 call edi */
  call_ind((uint32_t)(EDI), 0x115e1975u);
  /* 115e1975 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1977 pop ecx */
  ECX = (pop32());
  /* 115e1978 je 0x115e1a7b */
  if (C.zf) goto L_115e1a7b;
  /* 115e197e push 0x115e6930 */
  push32((uint32_t)(0x115e6930u));
  /* 115e1983 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e1989u);
  /* 115e1989 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e198c pop ecx */
  ECX = (pop32());
  /* 115e198d jl 0x115e19c2 */
  if ((C.sf!=C.of)) goto L_115e19c2;
  /* 115e198f mov edi, dword ptr [0x115e5130] */
  EDI = (r32((uint32_t)(0x115e5130)));
  /* 115e1995 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1996 push 0x115e6940 */
  push32((uint32_t)(0x115e6940u));
  /* 115e199b call edi */
  call_ind((uint32_t)(EDI), 0x115e199du);
  /* 115e199d mov edx, eax */
  EDX = (EAX);
  /* 115e199f push ebx */
  push32((uint32_t)(EBX));
  /* 115e19a0 push 0x115e6970 */
  push32((uint32_t)(0x115e6970u));
  /* 115e19a5 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115e19a9 call edi */
  call_ind((uint32_t)(EDI), 0x115e19abu);
  /* 115e19ab mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 115e19af mov edi, dword ptr [0x115e5158] */
  EDI = (r32((uint32_t)(0x115e5158)));
  /* 115e19b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e19b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e19ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e19bc jle 0x115e1a7b */
  if ((C.zf||C.sf!=C.of)) goto L_115e1a7b;
L_115e19c2:;
  /* 115e19c2 push ebx */
  push32((uint32_t)(EBX));
  /* 115e19c3 push 0x115e6970 */
  push32((uint32_t)(0x115e6970u));
  /* 115e19c8 call dword ptr [0x115e5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5130))), 0x115e19ceu);
  /* 115e19ce pop ecx */
  ECX = (pop32());
  /* 115e19cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e19d1 pop ecx */
  ECX = (pop32());
  /* 115e19d2 jle 0x115e19eb */
  if ((C.zf||C.sf!=C.of)) goto L_115e19eb;
  /* 115e19d4 push 0x115e6970 */
  push32((uint32_t)(0x115e6970u));
  /* 115e19d9 push 0x115e6910 */
  push32((uint32_t)(0x115e6910u));
  /* 115e19de push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e19e3 call 0x115e111a */
  push32(0x115e19e8u); f_115e111a();
  /* 115e19e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e19eb:;
  /* 115e19eb push ebx */
  push32((uint32_t)(EBX));
  /* 115e19ec push 0x115e6970 */
  push32((uint32_t)(0x115e6970u));
  /* 115e19f1 call dword ptr [0x115e5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5130))), 0x115e19f7u);
  /* 115e19f7 pop ecx */
  ECX = (pop32());
  /* 115e19f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e19fa pop ecx */
  ECX = (pop32());
  /* 115e19fb jle 0x115e1a14 */
  if ((C.zf||C.sf!=C.of)) goto L_115e1a14;
  /* 115e19fd push 0x115e6970 */
  push32((uint32_t)(0x115e6970u));
  /* 115e1a02 push 0x115e69a0 */
  push32((uint32_t)(0x115e69a0u));
  /* 115e1a07 push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1a0c call 0x115e111a */
  push32(0x115e1a11u); f_115e111a();
  /* 115e1a11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1a14:;
  /* 115e1a14 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1a15 push 0x115e6940 */
  push32((uint32_t)(0x115e6940u));
  /* 115e1a1a call dword ptr [0x115e5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5130))), 0x115e1a20u);
  /* 115e1a20 pop ecx */
  ECX = (pop32());
  /* 115e1a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e1a23 pop ecx */
  ECX = (pop32());
  /* 115e1a24 jle 0x115e1a3d */
  if ((C.zf||C.sf!=C.of)) goto L_115e1a3d;
  /* 115e1a26 push 0x115e6940 */
  push32((uint32_t)(0x115e6940u));
  /* 115e1a2b push 0x115e6910 */
  push32((uint32_t)(0x115e6910u));
  /* 115e1a30 push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1a35 call 0x115e111a */
  push32(0x115e1a3au); f_115e111a();
  /* 115e1a3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1a3d:;
  /* 115e1a3d push ebx */
  push32((uint32_t)(EBX));
  /* 115e1a3e push 0x115e6940 */
  push32((uint32_t)(0x115e6940u));
  /* 115e1a43 call dword ptr [0x115e5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5130))), 0x115e1a49u);
  /* 115e1a49 pop ecx */
  ECX = (pop32());
  /* 115e1a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e1a4c pop ecx */
  ECX = (pop32());
  /* 115e1a4d jle 0x115e1a66 */
  if ((C.zf||C.sf!=C.of)) goto L_115e1a66;
  /* 115e1a4f push 0x115e6940 */
  push32((uint32_t)(0x115e6940u));
  /* 115e1a54 push 0x115e69a0 */
  push32((uint32_t)(0x115e69a0u));
  /* 115e1a59 push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1a5e call 0x115e111a */
  push32(0x115e1a63u); f_115e111a();
  /* 115e1a63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1a66:;
  /* 115e1a66 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1a69 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1a6fu);
  /* 115e1a6f push ebx */
  push32((uint32_t)(EBX));
  /* 115e1a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1a72 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1a78u);
  /* 115e1a78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1a7b:;
  /* 115e1a7b push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1a7d call edi */
  call_ind((uint32_t)(EDI), 0x115e1a7fu);
  /* 115e1a7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1a81 pop ecx */
  ECX = (pop32());
  /* 115e1a82 jne 0x115e1ab6 */
  if (!C.zf) goto L_115e1ab6;
  /* 115e1a84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115e1a86 call edi */
  call_ind((uint32_t)(EDI), 0x115e1a88u);
  /* 115e1a88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1a8a pop ecx */
  ECX = (pop32());
  /* 115e1a8b je 0x115e1ab6 */
  if (C.zf) goto L_115e1ab6;
  /* 115e1a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1a8f call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e1a95u);
  /* 115e1a95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1a97 pop ecx */
  ECX = (pop32());
  /* 115e1a98 je 0x115e1ab6 */
  if (C.zf) goto L_115e1ab6;
  /* 115e1a9a push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e1a9f push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1aa4 call 0x115e10db */
  push32(0x115e1aa9u); f_115e10db();
  /* 115e1aa9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115e1aab push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1aad call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1ab3u);
  /* 115e1ab3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1ab6:;
  /* 115e1ab6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115e1ab8 call edi */
  call_ind((uint32_t)(EDI), 0x115e1abau);
  /* 115e1aba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1abc pop ecx */
  ECX = (pop32());
  /* 115e1abd je 0x115e1ada */
  if (C.zf) goto L_115e1ada;
  /* 115e1abf push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1ac4 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e1acau);
  /* 115e1aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e1acc pop ecx */
  ECX = (pop32());
  /* 115e1acd jne 0x115e1ada */
  if (!C.zf) goto L_115e1ada;
  /* 115e1acf push ebx */
  push32((uint32_t)(EBX));
  /* 115e1ad0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115e1ad2 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1ad8u);
  /* 115e1ad8 pop ecx */
  ECX = (pop32());
  /* 115e1ad9 pop ecx */
  ECX = (pop32());
L_115e1ada:;
  /* 115e1ada push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1adc call edi */
  call_ind((uint32_t)(EDI), 0x115e1adeu);
  /* 115e1ade test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1ae0 pop ecx */
  ECX = (pop32());
  /* 115e1ae1 je 0x115e1b60 */
  if (C.zf) goto L_115e1b60;
  /* 115e1ae3 push 0x115e68f0 */
  push32((uint32_t)(0x115e68f0u));
  /* 115e1ae8 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e1aeeu);
  /* 115e1aee cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e1af1 pop ecx */
  ECX = (pop32());
  /* 115e1af2 jl 0x115e1b23 */
  if ((C.sf!=C.of)) goto L_115e1b23;
  /* 115e1af4 mov edi, dword ptr [0x115e5130] */
  EDI = (r32((uint32_t)(0x115e5130)));
  /* 115e1afa push ebx */
  push32((uint32_t)(EBX));
  /* 115e1afb push 0x115e6948 */
  push32((uint32_t)(0x115e6948u));
  /* 115e1b00 call edi */
  call_ind((uint32_t)(EDI), 0x115e1b02u);
  /* 115e1b02 mov edx, eax */
  EDX = (EAX);
  /* 115e1b04 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1b05 push 0x115e6978 */
  push32((uint32_t)(0x115e6978u));
  /* 115e1b0a mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115e1b0e call edi */
  call_ind((uint32_t)(EDI), 0x115e1b10u);
  /* 115e1b10 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 115e1b14 mov edi, dword ptr [0x115e5158] */
  EDI = (r32((uint32_t)(0x115e5158)));
  /* 115e1b1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1b1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e1b21 jle 0x115e1b60 */
  if ((C.zf||C.sf!=C.of)) goto L_115e1b60;
L_115e1b23:;
  /* 115e1b23 push 0x115e6948 */
  push32((uint32_t)(0x115e6948u));
  /* 115e1b28 push 0x115e69a8 */
  push32((uint32_t)(0x115e69a8u));
  /* 115e1b2d push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e1b32 call 0x115e111a */
  push32(0x115e1b37u); f_115e111a();
  /* 115e1b37 push 0x115e6980 */
  push32((uint32_t)(0x115e6980u));
  /* 115e1b3c push 0x115e69a8 */
  push32((uint32_t)(0x115e69a8u));
  /* 115e1b41 push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e1b46 call 0x115e111a */
  push32(0x115e1b4bu); f_115e111a();
  /* 115e1b4b push ebx */
  push32((uint32_t)(EBX));
  /* 115e1b4c push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1b4e call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1b54u);
  /* 115e1b54 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1b55 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1b57 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1b5du);
  /* 115e1b5d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1b60:;
  /* 115e1b60 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1b62 call edi */
  call_ind((uint32_t)(EDI), 0x115e1b64u);
  /* 115e1b64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1b66 pop ecx */
  ECX = (pop32());
  /* 115e1b67 jne 0x115e1b9b */
  if (!C.zf) goto L_115e1b9b;
  /* 115e1b69 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115e1b6b call edi */
  call_ind((uint32_t)(EDI), 0x115e1b6du);
  /* 115e1b6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1b6f pop ecx */
  ECX = (pop32());
  /* 115e1b70 je 0x115e1b9b */
  if (C.zf) goto L_115e1b9b;
  /* 115e1b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1b74 call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e1b7au);
  /* 115e1b7a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1b7c pop ecx */
  ECX = (pop32());
  /* 115e1b7d je 0x115e1b9b */
  if (C.zf) goto L_115e1b9b;
  /* 115e1b7f push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e1b84 push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e1b89 call 0x115e10db */
  push32(0x115e1b8eu); f_115e10db();
  /* 115e1b8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115e1b90 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1b92 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1b98u);
  /* 115e1b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1b9b:;
  /* 115e1b9b push 0xc */
  push32((uint32_t)(0xcu));
  /* 115e1b9d call edi */
  call_ind((uint32_t)(EDI), 0x115e1b9fu);
  /* 115e1b9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1ba1 pop ecx */
  ECX = (pop32());
  /* 115e1ba2 je 0x115e1bbf */
  if (C.zf) goto L_115e1bbf;
  /* 115e1ba4 push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e1ba9 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e1bafu);
  /* 115e1baf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e1bb1 pop ecx */
  ECX = (pop32());
  /* 115e1bb2 jne 0x115e1bbf */
  if (!C.zf) goto L_115e1bbf;
  /* 115e1bb4 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1bb5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115e1bb7 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1bbdu);
  /* 115e1bbd pop ecx */
  ECX = (pop32());
  /* 115e1bbe pop ecx */
  ECX = (pop32());
L_115e1bbf:;
  /* 115e1bbf push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1bc1 call edi */
  call_ind((uint32_t)(EDI), 0x115e1bc3u);
  /* 115e1bc3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1bc5 pop ecx */
  ECX = (pop32());
  /* 115e1bc6 je 0x115e1c3f */
  if (C.zf) goto L_115e1c3f;
  /* 115e1bc8 mov edi, dword ptr [0x115e5130] */
  EDI = (r32((uint32_t)(0x115e5130)));
  /* 115e1bce push ebx */
  push32((uint32_t)(EBX));
  /* 115e1bcf push 0x115e6860 */
  push32((uint32_t)(0x115e6860u));
  /* 115e1bd4 call edi */
  call_ind((uint32_t)(EDI), 0x115e1bd6u);
  /* 115e1bd6 mov edx, eax */
  EDX = (EAX);
  /* 115e1bd8 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1bd9 push 0x115e6858 */
  push32((uint32_t)(0x115e6858u));
  /* 115e1bde mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115e1be2 call edi */
  call_ind((uint32_t)(EDI), 0x115e1be4u);
  /* 115e1be4 mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 115e1be8 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1be9 push 0x115e6950 */
  push32((uint32_t)(0x115e6950u));
  /* 115e1bee add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1bf0 call dword ptr [0x115e5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5130))), 0x115e1bf6u);
  /* 115e1bf6 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1bf8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1bfb test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e1bfd jle 0x115e1c39 */
  if ((C.zf||C.sf!=C.of)) goto L_115e1c39;
  /* 115e1bff mov edi, 0x115e6840 */
  EDI = (0x115e6840u);
  /* 115e1c04 push 0x115e6950 */
  push32((uint32_t)(0x115e6950u));
  /* 115e1c09 push edi */
  push32((uint32_t)(EDI));
  /* 115e1c0a push 0x115e6930 */
  push32((uint32_t)(0x115e6930u));
  /* 115e1c0f call 0x115e111a */
  push32(0x115e1c14u); f_115e111a();
  /* 115e1c14 push 0x115e6860 */
  push32((uint32_t)(0x115e6860u));
  /* 115e1c19 push edi */
  push32((uint32_t)(EDI));
  /* 115e1c1a push 0x115e6930 */
  push32((uint32_t)(0x115e6930u));
  /* 115e1c1f call 0x115e111a */
  push32(0x115e1c24u); f_115e111a();
  /* 115e1c24 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1c25 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1c27 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1c2du);
  /* 115e1c2d push ebx */
  push32((uint32_t)(EBX));
  /* 115e1c2e push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1c30 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1c36u);
  /* 115e1c36 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1c39:;
  /* 115e1c39 mov edi, dword ptr [0x115e5158] */
  EDI = (r32((uint32_t)(0x115e5158)));
L_115e1c3f:;
  /* 115e1c3f push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1c41 call edi */
  call_ind((uint32_t)(EDI), 0x115e1c43u);
  /* 115e1c43 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1c45 pop ecx */
  ECX = (pop32());
  /* 115e1c46 jne 0x115e1cba */
  if (!C.zf) goto L_115e1cba;
  /* 115e1c48 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e1c4a call edi */
  call_ind((uint32_t)(EDI), 0x115e1c4cu);
  /* 115e1c4c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1c4e pop ecx */
  ECX = (pop32());
  /* 115e1c4f je 0x115e1cba */
  if (C.zf) goto L_115e1cba;
  /* 115e1c51 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1c53 call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e1c59u);
  /* 115e1c59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1c5b pop ecx */
  ECX = (pop32());
  /* 115e1c5c je 0x115e1cba */
  if (C.zf) goto L_115e1cba;
  /* 115e1c5e push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e1c63 push 0x115e6930 */
  push32((uint32_t)(0x115e6930u));
  /* 115e1c68 call 0x115e10db */
  push32(0x115e1c6du); f_115e10db();
  /* 115e1c6d push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e1c72 push 0x115e6908 */
  push32((uint32_t)(0x115e6908u));
  /* 115e1c77 call 0x115e10db */
  push32(0x115e1c7cu); f_115e10db();
  /* 115e1c7c push 0x115e6900 */
  push32((uint32_t)(0x115e6900u));
  /* 115e1c81 push 0x115e6908 */
  push32((uint32_t)(0x115e6908u));
  /* 115e1c86 call dword ptr [0x115e5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5134))), 0x115e1c8cu);
  /* 115e1c8c push 5 */
  push32((uint32_t)(0x5u));
  /* 115e1c8e call edi */
  call_ind((uint32_t)(EDI), 0x115e1c90u);
  /* 115e1c90 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1c93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1c95 je 0x115e1cae */
  if (C.zf) goto L_115e1cae;
  /* 115e1c97 push 0x115e6338 */
  push32((uint32_t)(0x115e6338u));
  /* 115e1c9c call dword ptr [0x115e5150] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5150))), 0x115e1ca2u);
  /* 115e1ca2 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1ca3 push 5 */
  push32((uint32_t)(0x5u));
  /* 115e1ca5 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1cabu);
  /* 115e1cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1cae:;
  /* 115e1cae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115e1cb0 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1cb2 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1cb8u);
  /* 115e1cb8 pop ecx */
  ECX = (pop32());
  /* 115e1cb9 pop ecx */
  ECX = (pop32());
L_115e1cba:;
  /* 115e1cba push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e1cbc call edi */
  call_ind((uint32_t)(EDI), 0x115e1cbeu);
  /* 115e1cbe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1cc0 pop ecx */
  ECX = (pop32());
  /* 115e1cc1 je 0x115e1cde */
  if (C.zf) goto L_115e1cde;
  /* 115e1cc3 push 0x115e6930 */
  push32((uint32_t)(0x115e6930u));
  /* 115e1cc8 call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e1cceu);
  /* 115e1cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e1cd0 pop ecx */
  ECX = (pop32());
  /* 115e1cd1 jne 0x115e1cde */
  if (!C.zf) goto L_115e1cde;
  /* 115e1cd3 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1cd4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e1cd6 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1cdcu);
  /* 115e1cdc pop ecx */
  ECX = (pop32());
  /* 115e1cdd pop ecx */
  ECX = (pop32());
L_115e1cde:;
  /* 115e1cde push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1ce0 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e1ce6u);
  /* 115e1ce6 mov edi, dword ptr [0x115e50ec] */
  EDI = (r32((uint32_t)(0x115e50ec)));
  /* 115e1cec pop ecx */
  ECX = (pop32());
  /* 115e1ced test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1cef je 0x115e1f49 */
  if (C.zf) goto L_115e1f49;
  /* 115e1cf5 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1cf6 push 0x115e6958 */
  push32((uint32_t)(0x115e6958u));
  /* 115e1cfb call dword ptr [0x115e5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5130))), 0x115e1d01u);
  /* 115e1d01 pop ecx */
  ECX = (pop32());
  /* 115e1d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e1d04 pop ecx */
  ECX = (pop32());
  /* 115e1d05 jle 0x115e1f49 */
  if ((C.zf||C.sf!=C.of)) goto L_115e1f49;
  /* 115e1d0b push 0x115e6330 */
  push32((uint32_t)(0x115e6330u));
  /* 115e1d10 call dword ptr [0x115e5150] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5150))), 0x115e1d16u);
  /* 115e1d16 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115e1d18 call dword ptr [0x115e50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d4))), 0x115e1d1eu);
  /* 115e1d1e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115e1d20 call dword ptr [0x115e50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d0))), 0x115e1d26u);
  /* 115e1d26 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115e1d28 call dword ptr [0x115e50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d0))), 0x115e1d2eu);
  /* 115e1d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1d30 call dword ptr [0x115e50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e4))), 0x115e1d36u);
  /* 115e1d36 push 0x115e6958 */
  push32((uint32_t)(0x115e6958u));
  /* 115e1d3b push 0x115e6868 */
  push32((uint32_t)(0x115e6868u));
  /* 115e1d40 call 0x115e10db */
  push32(0x115e1d45u); f_115e10db();
  /* 115e1d45 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1d46 push 0x115e68c8 */
  push32((uint32_t)(0x115e68c8u));
  /* 115e1d4b push ebx */
  push32((uint32_t)(EBX));
  /* 115e1d4c call dword ptr [0x115e512c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e512c))), 0x115e1d52u);
  /* 115e1d52 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1d53 call dword ptr [0x115e513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e513c))), 0x115e1d59u);
  /* 115e1d59 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1d5a push 0x115e6918 */
  push32((uint32_t)(0x115e6918u));
  /* 115e1d5f call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e1d65u);
  /* 115e1d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1d67 push 0x115e6928 */
  push32((uint32_t)(0x115e6928u));
  /* 115e1d6c call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e1d72u);
  /* 115e1d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1d74 push 0x115e68e8 */
  push32((uint32_t)(0x115e68e8u));
  /* 115e1d79 call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e1d7fu);
  /* 115e1d7f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1d82 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1d84 push 0x115e68f8 */
  push32((uint32_t)(0x115e68f8u));
  /* 115e1d89 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1d8b call edi */
  call_ind((uint32_t)(EDI), 0x115e1d8du);
  /* 115e1d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1d8f push 0x115e6900 */
  push32((uint32_t)(0x115e6900u));
  /* 115e1d94 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1d96 call edi */
  call_ind((uint32_t)(EDI), 0x115e1d98u);
  /* 115e1d98 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1d9a push 0x115e6908 */
  push32((uint32_t)(0x115e6908u));
  /* 115e1d9f push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1da1 call edi */
  call_ind((uint32_t)(EDI), 0x115e1da3u);
  /* 115e1da3 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1da4 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1da6 call dword ptr [0x115e50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50f4))), 0x115e1dacu);
  /* 115e1dac push ebx */
  push32((uint32_t)(EBX));
  /* 115e1dad push 0x115e68c8 */
  push32((uint32_t)(0x115e68c8u));
  /* 115e1db2 call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e1db8u);
  /* 115e1db8 mov eax, dword ptr [0x115e6938] */
  EAX = (r32((uint32_t)(0x115e6938)));
  /* 115e1dbd add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1dc0 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 115e1dc4 lea ecx, [eax + eax] */
  ECX = ((uint32_t)(EAX + EAX*1));
  /* 115e1dc7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e1dc9 jle 0x115e1e37 */
  if ((C.zf||C.sf!=C.of)) goto L_115e1e37;
L_115e1dcb:;
  /* 115e1dcb push ebx */
  push32((uint32_t)(EBX));
  /* 115e1dcc push 0x115e6960 */
  push32((uint32_t)(0x115e6960u));
  /* 115e1dd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1dd3 push 0x115e6910 */
  push32((uint32_t)(0x115e6910u));
  /* 115e1dd8 push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1ddd push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1de2 call dword ptr [0x115e5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5148))), 0x115e1de8u);
  /* 115e1de8 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1de9 push 0x115e6960 */
  push32((uint32_t)(0x115e6960u));
  /* 115e1dee push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1df0 push 0x115e69a0 */
  push32((uint32_t)(0x115e69a0u));
  /* 115e1df5 push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1dfa push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1dff call dword ptr [0x115e5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5148))), 0x115e1e05u);
  /* 115e1e05 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1e06 push 0x115e6968 */
  push32((uint32_t)(0x115e6968u));
  /* 115e1e0b push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1e0d push 0x115e6840 */
  push32((uint32_t)(0x115e6840u));
  /* 115e1e12 push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1e17 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1e1c call dword ptr [0x115e5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5148))), 0x115e1e22u);
  /* 115e1e22 mov eax, dword ptr [0x115e6938] */
  EAX = (r32((uint32_t)(0x115e6938)));
  /* 115e1e27 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1e2a inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 115e1e2e lea ecx, [eax + eax] */
  ECX = ((uint32_t)(EAX + EAX*1));
  /* 115e1e31 cmp dword ptr [esp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e1e35 jl 0x115e1dcb */
  if ((C.sf!=C.of)) goto L_115e1dcb;
L_115e1e37:;
  /* 115e1e37 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e1e39 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 115e1e3d jle 0x115e1e8c */
  if ((C.zf||C.sf!=C.of)) goto L_115e1e8c;
L_115e1e3f:;
  /* 115e1e3f push ebx */
  push32((uint32_t)(EBX));
  /* 115e1e40 push 0x115e6960 */
  push32((uint32_t)(0x115e6960u));
  /* 115e1e45 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1e47 push 0x115e6830 */
  push32((uint32_t)(0x115e6830u));
  /* 115e1e4c push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1e51 push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1e56 call dword ptr [0x115e5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5148))), 0x115e1e5cu);
  /* 115e1e5c push ebx */
  push32((uint32_t)(EBX));
  /* 115e1e5d push 0x115e6968 */
  push32((uint32_t)(0x115e6968u));
  /* 115e1e62 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1e64 push 0x115e6838 */
  push32((uint32_t)(0x115e6838u));
  /* 115e1e69 push 0x115e68b8 */
  push32((uint32_t)(0x115e68b8u));
  /* 115e1e6e push 0x115e6878 */
  push32((uint32_t)(0x115e6878u));
  /* 115e1e73 call dword ptr [0x115e5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5148))), 0x115e1e79u);
  /* 115e1e79 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1e7c inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 115e1e80 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115e1e84 cmp eax, dword ptr [0x115e6938] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115e6938))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e1e8a jl 0x115e1e3f */
  if ((C.sf!=C.of)) goto L_115e1e3f;
L_115e1e8c:;
  /* 115e1e8c push dword ptr [0x115e6850] */
  push32((uint32_t)(r32((uint32_t)(0x115e6850))));
  /* 115e1e92 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1e94 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1e96 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1e97 push 0x115e6324 */
  push32((uint32_t)(0x115e6324u));
  /* 115e1e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1e9e call dword ptr [0x115e50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50f8))), 0x115e1ea4u);
  /* 115e1ea4 push dword ptr [0x115e6850] */
  push32((uint32_t)(r32((uint32_t)(0x115e6850))));
  /* 115e1eaa push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1eac push 3 */
  push32((uint32_t)(0x3u));
  /* 115e1eae push ebx */
  push32((uint32_t)(EBX));
  /* 115e1eaf push 0x115e6318 */
  push32((uint32_t)(0x115e6318u));
  /* 115e1eb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e1eb6 call dword ptr [0x115e50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50f8))), 0x115e1ebcu);
  /* 115e1ebc mov eax, dword ptr [0x115e6850] */
  EAX = (r32((uint32_t)(0x115e6850)));
  /* 115e1ec1 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 115e1ec6 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1ec9 push 0xa */
  push32((uint32_t)(0xau));
  /* 115e1ecb mov dword ptr [0x115e6938], eax */
  w32((uint32_t)(0x115e6938), (EAX));
  /* 115e1ed0 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1ed6u);
  /* 115e1ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1ed7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115e1ed9 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1edfu);
  /* 115e1edf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1ee2 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1ee3 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115e1ee5 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1eebu);
  /* 115e1eeb push ebx */
  push32((uint32_t)(EBX));
  /* 115e1eec push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115e1eee call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1ef4u);
  /* 115e1ef4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115e1ef6 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e1efcu);
  /* 115e1efc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1eff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1f01 jne 0x115e1f22 */
  if (!C.zf) goto L_115e1f22;
  /* 115e1f03 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115e1f05 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e1f0bu);
  /* 115e1f0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1f0d pop ecx */
  ECX = (pop32());
  /* 115e1f0e jne 0x115e1f22 */
  if (!C.zf) goto L_115e1f22;
  /* 115e1f10 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e1f12 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e1f18u);
  /* 115e1f18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1f1a pop ecx */
  ECX = (pop32());
  /* 115e1f1b jne 0x115e1f22 */
  if (!C.zf) goto L_115e1f22;
  /* 115e1f1d call 0x115e1012 */
  push32(0x115e1f22u); f_115e1012();
L_115e1f22:;
  /* 115e1f22 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f23 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115e1f25 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1f2bu);
  /* 115e1f2b push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f2c push 0xc */
  push32((uint32_t)(0xcu));
  /* 115e1f2e call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1f34u);
  /* 115e1f34 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f35 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e1f37 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1f3du);
  /* 115e1f3d push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f3e push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1f40 call dword ptr [0x115e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50dc))), 0x115e1f46u);
  /* 115e1f46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1f49:;
  /* 115e1f49 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1f4b call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e1f51u);
  /* 115e1f51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1f53 pop ecx */
  ECX = (pop32());
  /* 115e1f54 je 0x115e1ff0 */
  if (C.zf) goto L_115e1ff0;
  /* 115e1f5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1f5c call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e1f62u);
  /* 115e1f62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1f64 pop ecx */
  ECX = (pop32());
  /* 115e1f65 je 0x115e1ff0 */
  if (C.zf) goto L_115e1ff0;
  /* 115e1f6b push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 115e1f70 push 0x115e6848 */
  push32((uint32_t)(0x115e6848u));
  /* 115e1f75 push 0x115e6858 */
  push32((uint32_t)(0x115e6858u));
  /* 115e1f7a push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e1f7f call dword ptr [0x115e5138] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5138))), 0x115e1f85u);
  /* 115e1f85 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f86 push 0x115e68c8 */
  push32((uint32_t)(0x115e68c8u));
  /* 115e1f8b push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f8c call dword ptr [0x115e512c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e512c))), 0x115e1f92u);
  /* 115e1f92 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f93 call dword ptr [0x115e513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e513c))), 0x115e1f99u);
  /* 115e1f99 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1f9a push 0x115e68f8 */
  push32((uint32_t)(0x115e68f8u));
  /* 115e1f9f push ebx */
  push32((uint32_t)(EBX));
  /* 115e1fa0 call edi */
  call_ind((uint32_t)(EDI), 0x115e1fa2u);
  /* 115e1fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1fa4 push 0x115e6900 */
  push32((uint32_t)(0x115e6900u));
  /* 115e1fa9 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1faa call edi */
  call_ind((uint32_t)(EDI), 0x115e1facu);
  /* 115e1fac push 1 */
  push32((uint32_t)(0x1u));
  /* 115e1fae push 0x115e6908 */
  push32((uint32_t)(0x115e6908u));
  /* 115e1fb3 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1fb4 call edi */
  call_ind((uint32_t)(EDI), 0x115e1fb6u);
  /* 115e1fb6 mov edi, dword ptr [0x115e50f4] */
  EDI = (r32((uint32_t)(0x115e50f4)));
  /* 115e1fbc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e1fbf push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1fc1 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1fc2 call edi */
  call_ind((uint32_t)(EDI), 0x115e1fc4u);
  /* 115e1fc4 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1fc5 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1fc7 push 0x115e6990 */
  push32((uint32_t)(0x115e6990u));
  /* 115e1fcc call dword ptr [0x115e5140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5140))), 0x115e1fd2u);
  /* 115e1fd2 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1fd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e1fd5 call edi */
  call_ind((uint32_t)(EDI), 0x115e1fd7u);
  /* 115e1fd7 push ebx */
  push32((uint32_t)(EBX));
  /* 115e1fd8 push 0x115e68c8 */
  push32((uint32_t)(0x115e68c8u));
  /* 115e1fdd call dword ptr [0x115e514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e514c))), 0x115e1fe3u);
  /* 115e1fe3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115e1fe5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e1fe7 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e1fedu);
  /* 115e1fed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e1ff0:;
  /* 115e1ff0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115e1ff2 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e1ff8u);
  /* 115e1ff8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e1ffa pop ecx */
  ECX = (pop32());
  /* 115e1ffb je 0x115e2025 */
  if (C.zf) goto L_115e2025;
  /* 115e1ffd push 0x115e6848 */
  push32((uint32_t)(0x115e6848u));
  /* 115e2002 call dword ptr [0x115e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50f0))), 0x115e2008u);
  /* 115e2008 cmp eax, dword ptr [0x115e6938] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115e6938))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e200e pop ecx */
  ECX = (pop32());
  /* 115e200f jl 0x115e2025 */
  if ((C.sf!=C.of)) goto L_115e2025;
  /* 115e2011 call 0x115e1012 */
  push32(0x115e2016u); f_115e1012();
  /* 115e2016 mov edi, dword ptr [0x115e50dc] */
  EDI = (r32((uint32_t)(0x115e50dc)));
  /* 115e201c push ebx */
  push32((uint32_t)(EBX));
  /* 115e201d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115e201f call edi */
  call_ind((uint32_t)(EDI), 0x115e2021u);
  /* 115e2021 pop ecx */
  ECX = (pop32());
  /* 115e2022 pop ecx */
  ECX = (pop32());
  /* 115e2023 jmp 0x115e202b */
  goto L_115e202b;
L_115e2025:;
  /* 115e2025 mov edi, dword ptr [0x115e50dc] */
  EDI = (r32((uint32_t)(0x115e50dc)));
L_115e202b:;
  /* 115e202b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115e202d call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e2033u);
  /* 115e2033 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e2035 pop ecx */
  ECX = (pop32());
  /* 115e2036 je 0x115e20e3 */
  if (C.zf) goto L_115e20e3;
  /* 115e203c push 0x115e68f8 */
  push32((uint32_t)(0x115e68f8u));
  /* 115e2041 call dword ptr [0x115e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50f0))), 0x115e2047u);
  /* 115e2047 mov edx, dword ptr [0x115e6850] */
  EDX = (r32((uint32_t)(0x115e6850)));
  /* 115e204d pop ecx */
  ECX = (pop32());
  /* 115e204e mov ecx, dword ptr [0x115e6820] */
  ECX = (r32((uint32_t)(0x115e6820)));
  /* 115e2054 lea edx, [edx + ecx*4] */
  EDX = ((uint32_t)(EDX + ECX*4));
  /* 115e2057 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2059 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115e205b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e205d jl 0x115e20e3 */
  if ((C.sf!=C.of)) goto L_115e20e3;
  /* 115e2063 mov eax, dword ptr [0x115e6820] */
  EAX = (r32((uint32_t)(0x115e6820)));
  /* 115e2068 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e2069 je 0x115e20b2 */
  if (C.zf) goto L_115e20b2;
  /* 115e206b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e206c je 0x115e20a3 */
  if (C.zf) goto L_115e20a3;
  /* 115e206e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e206f je 0x115e2094 */
  if (C.zf) goto L_115e2094;
  /* 115e2071 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e2072 jne 0x115e20c5 */
  if (!C.zf) goto L_115e20c5;
  /* 115e2074 push 0x115e62f8 */
  push32((uint32_t)(0x115e62f8u));
  /* 115e2079 push ebp */
  push32((uint32_t)(EBP));
  /* 115e207a call esi */
  call_ind((uint32_t)(ESI), 0x115e207cu);
  /* 115e207c push 0x115e62d8 */
  push32((uint32_t)(0x115e62d8u));
  /* 115e2081 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2082 call esi */
  call_ind((uint32_t)(ESI), 0x115e2084u);
  /* 115e2084 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2085 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115e2087 mov dword ptr [0x115e6820], ebx */
  w32((uint32_t)(0x115e6820), (EBX));
  /* 115e208d call edi */
  call_ind((uint32_t)(EDI), 0x115e208fu);
  /* 115e208f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2092 jmp 0x115e20c5 */
  goto L_115e20c5;
L_115e2094:;
  /* 115e2094 push 0x115e62b8 */
  push32((uint32_t)(0x115e62b8u));
  /* 115e2099 push ebp */
  push32((uint32_t)(EBP));
  /* 115e209a call esi */
  call_ind((uint32_t)(ESI), 0x115e209cu);
  /* 115e209c push 0x115e6298 */
  push32((uint32_t)(0x115e6298u));
  /* 115e20a1 jmp 0x115e20bf */
  goto L_115e20bf;
L_115e20a3:;
  /* 115e20a3 push 0x115e6278 */
  push32((uint32_t)(0x115e6278u));
  /* 115e20a8 push ebp */
  push32((uint32_t)(EBP));
  /* 115e20a9 call esi */
  call_ind((uint32_t)(ESI), 0x115e20abu);
  /* 115e20ab push 0x115e6258 */
  push32((uint32_t)(0x115e6258u));
  /* 115e20b0 jmp 0x115e20bf */
  goto L_115e20bf;
L_115e20b2:;
  /* 115e20b2 push 0x115e63ec */
  push32((uint32_t)(0x115e63ecu));
  /* 115e20b7 push ebp */
  push32((uint32_t)(EBP));
  /* 115e20b8 call esi */
  call_ind((uint32_t)(ESI), 0x115e20bau);
  /* 115e20ba push 0x115e63d0 */
  push32((uint32_t)(0x115e63d0u));
L_115e20bf:;
  /* 115e20bf push ebp */
  push32((uint32_t)(EBP));
  /* 115e20c0 call esi */
  call_ind((uint32_t)(ESI), 0x115e20c2u);
  /* 115e20c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e20c5:;
  /* 115e20c5 mov eax, dword ptr [0x115e6820] */
  EAX = (r32((uint32_t)(0x115e6820)));
  /* 115e20ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e20cb mov dword ptr [0x115e6820], eax */
  w32((uint32_t)(0x115e6820), (EAX));
  /* 115e20d0 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 115e20d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115e20d4 push eax */
  push32((uint32_t)(EAX));
  /* 115e20d5 push 0x115e6250 */
  push32((uint32_t)(0x115e6250u));
  /* 115e20da call dword ptr [0x115e5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5100))), 0x115e20e0u);
  /* 115e20e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e20e3:;
  /* 115e20e3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115e20e5 call dword ptr [0x115e5158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5158))), 0x115e20ebu);
  /* 115e20eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e20ed pop ecx */
  ECX = (pop32());
  /* 115e20ee je 0x115e219d */
  if (C.zf) goto L_115e219d;
  /* 115e20f4 push 0x115e6900 */
  push32((uint32_t)(0x115e6900u));
  /* 115e20f9 call dword ptr [0x115e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50f0))), 0x115e20ffu);
  /* 115e20ff mov edx, dword ptr [0x115e6850] */
  EDX = (r32((uint32_t)(0x115e6850)));
  /* 115e2105 pop ecx */
  ECX = (pop32());
  /* 115e2106 mov ecx, dword ptr [0x115e693c] */
  ECX = (r32((uint32_t)(0x115e693c)));
  /* 115e210c lea edx, [edx + ecx*4] */
  EDX = ((uint32_t)(EDX + ECX*4));
  /* 115e210f add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2111 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115e2113 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2115 jl 0x115e219d */
  if ((C.sf!=C.of)) goto L_115e219d;
  /* 115e211b mov eax, dword ptr [0x115e693c] */
  EAX = (r32((uint32_t)(0x115e693c)));
  /* 115e2120 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e2121 je 0x115e216e */
  if (C.zf) goto L_115e216e;
  /* 115e2123 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e2124 je 0x115e215f */
  if (C.zf) goto L_115e215f;
  /* 115e2126 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e2127 je 0x115e2150 */
  if (C.zf) goto L_115e2150;
  /* 115e2129 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e212a jne 0x115e2181 */
  if (!C.zf) goto L_115e2181;
  /* 115e212c push 0x115e6234 */
  push32((uint32_t)(0x115e6234u));
  /* 115e2131 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2132 call esi */
  call_ind((uint32_t)(ESI), 0x115e2134u);
  /* 115e2134 push 0x115e6218 */
  push32((uint32_t)(0x115e6218u));
  /* 115e2139 push ebp */
  push32((uint32_t)(EBP));
  /* 115e213a call esi */
  call_ind((uint32_t)(ESI), 0x115e213cu);
  /* 115e213c push ebx */
  push32((uint32_t)(EBX));
  /* 115e213d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115e213f mov dword ptr [0x115e693c], 1 */
  w32((uint32_t)(0x115e693c), (0x1u));
  /* 115e2149 call edi */
  call_ind((uint32_t)(EDI), 0x115e214bu);
  /* 115e214b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e214e jmp 0x115e2181 */
  goto L_115e2181;
L_115e2150:;
  /* 115e2150 push 0x115e61fc */
  push32((uint32_t)(0x115e61fcu));
  /* 115e2155 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2156 call esi */
  call_ind((uint32_t)(ESI), 0x115e2158u);
  /* 115e2158 push 0x115e61e0 */
  push32((uint32_t)(0x115e61e0u));
  /* 115e215d jmp 0x115e217b */
  goto L_115e217b;
L_115e215f:;
  /* 115e215f push 0x115e639c */
  push32((uint32_t)(0x115e639cu));
  /* 115e2164 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2165 call esi */
  call_ind((uint32_t)(ESI), 0x115e2167u);
  /* 115e2167 push 0x115e6368 */
  push32((uint32_t)(0x115e6368u));
  /* 115e216c jmp 0x115e217b */
  goto L_115e217b;
L_115e216e:;
  /* 115e216e push 0x115e63b8 */
  push32((uint32_t)(0x115e63b8u));
  /* 115e2173 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2174 call esi */
  call_ind((uint32_t)(ESI), 0x115e2176u);
  /* 115e2176 push 0x115e6384 */
  push32((uint32_t)(0x115e6384u));
L_115e217b:;
  /* 115e217b push ebp */
  push32((uint32_t)(EBP));
  /* 115e217c call esi */
  call_ind((uint32_t)(ESI), 0x115e217eu);
  /* 115e217e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e2181:;
  /* 115e2181 mov eax, dword ptr [0x115e693c] */
  EAX = (r32((uint32_t)(0x115e693c)));
  /* 115e2186 inc dword ptr [0x115e693c] */
  { uint32_t _r=(r32((uint32_t)(0x115e693c)))+1; w32((uint32_t)(0x115e693c), (_r)); fl_inc(_r,32); }
  /* 115e218c push 1 */
  push32((uint32_t)(0x1u));
  /* 115e218e push eax */
  push32((uint32_t)(EAX));
  /* 115e218f push 0x115e61d8 */
  push32((uint32_t)(0x115e61d8u));
  /* 115e2194 call dword ptr [0x115e5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5100))), 0x115e219au);
  /* 115e219a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e219d:;
  /* 115e219d mov esi, dword ptr [0x115e5158] */
  ESI = (r32((uint32_t)(0x115e5158)));
  /* 115e21a3 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e21a5 call esi */
  call_ind((uint32_t)(ESI), 0x115e21a7u);
  /* 115e21a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e21a9 pop ecx */
  ECX = (pop32());
  /* 115e21aa jne 0x115e21de */
  if (!C.zf) goto L_115e21de;
  /* 115e21ac push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115e21ae call esi */
  call_ind((uint32_t)(ESI), 0x115e21b0u);
  /* 115e21b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e21b2 pop ecx */
  ECX = (pop32());
  /* 115e21b3 je 0x115e21de */
  if (C.zf) goto L_115e21de;
  /* 115e21b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e21b7 call dword ptr [0x115e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5104))), 0x115e21bdu);
  /* 115e21bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e21bf pop ecx */
  ECX = (pop32());
  /* 115e21c0 je 0x115e21de */
  if (C.zf) goto L_115e21de;
  /* 115e21c2 mov ebp, dword ptr [0x115e5150] */
  EBP = (r32((uint32_t)(0x115e5150)));
  /* 115e21c8 push 0x115e61d0 */
  push32((uint32_t)(0x115e61d0u));
  /* 115e21cd call ebp */
  call_ind((uint32_t)(EBP), 0x115e21cfu);
  /* 115e21cf call 0x115e1012 */
  push32(0x115e21d4u); f_115e1012();
  /* 115e21d4 push ebx */
  push32((uint32_t)(EBX));
  /* 115e21d5 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115e21d7 call edi */
  call_ind((uint32_t)(EDI), 0x115e21d9u);
  /* 115e21d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e21dc jmp 0x115e21e4 */
  goto L_115e21e4;
L_115e21de:;
  /* 115e21de mov ebp, dword ptr [0x115e5150] */
  EBP = (r32((uint32_t)(0x115e5150)));
L_115e21e4:;
  /* 115e21e4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115e21e6 call esi */
  call_ind((uint32_t)(ESI), 0x115e21e8u);
  /* 115e21e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e21ea pop ecx */
  ECX = (pop32());
  /* 115e21eb jne 0x115e2217 */
  if (!C.zf) goto L_115e2217;
  /* 115e21ed push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115e21ef call esi */
  call_ind((uint32_t)(ESI), 0x115e21f1u);
  /* 115e21f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e21f3 pop ecx */
  ECX = (pop32());
  /* 115e21f4 je 0x115e2217 */
  if (C.zf) goto L_115e2217;
  /* 115e21f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e21f8 call dword ptr [0x115e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5104))), 0x115e21feu);
  /* 115e21fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e2200 pop ecx */
  ECX = (pop32());
  /* 115e2201 je 0x115e2217 */
  if (C.zf) goto L_115e2217;
  /* 115e2203 push 0x115e61c8 */
  push32((uint32_t)(0x115e61c8u));
  /* 115e2208 call ebp */
  call_ind((uint32_t)(EBP), 0x115e220au);
  /* 115e220a call 0x115e1012 */
  push32(0x115e220fu); f_115e1012();
  /* 115e220f push ebx */
  push32((uint32_t)(EBX));
  /* 115e2210 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115e2212 call edi */
  call_ind((uint32_t)(EDI), 0x115e2214u);
  /* 115e2214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e2217:;
  /* 115e2217 push 0x115e6848 */
  push32((uint32_t)(0x115e6848u));
  /* 115e221c call dword ptr [0x115e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50d8))), 0x115e2222u);
  /* 115e2222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2224 pop ecx */
  ECX = (pop32());
  /* 115e2225 jne 0x115e2255 */
  if (!C.zf) goto L_115e2255;
  /* 115e2227 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2229 pop edi */
  EDI = (pop32());
L_115e222a:;
  /* 115e222a push edi */
  push32((uint32_t)(EDI));
  /* 115e222b call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e2231u);
  /* 115e2231 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e2233 pop ecx */
  ECX = (pop32());
  /* 115e2234 jne 0x115e2241 */
  if (!C.zf) goto L_115e2241;
  /* 115e2236 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2238 push edi */
  push32((uint32_t)(EDI));
  /* 115e2239 call dword ptr [0x115e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50cc))), 0x115e223fu);
  /* 115e223f pop ecx */
  ECX = (pop32());
  /* 115e2240 pop ecx */
  ECX = (pop32());
L_115e2241:;
  /* 115e2241 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e2242 cmp edi, 0x1e */
  { uint32_t _a=(EDI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2245 jl 0x115e222a */
  if ((C.sf!=C.of)) goto L_115e222a;
  /* 115e2247 push 0x115e61c0 */
  push32((uint32_t)(0x115e61c0u));
  /* 115e224c call ebp */
  call_ind((uint32_t)(EBP), 0x115e224eu);
  /* 115e224e pop ecx */
  ECX = (pop32());
  /* 115e224f call dword ptr [0x115e50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50fc))), 0x115e2255u);
L_115e2255:;
  /* 115e2255 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115e2257 call esi */
  call_ind((uint32_t)(ESI), 0x115e2259u);
  /* 115e2259 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e225b pop ecx */
  ECX = (pop32());
  /* 115e225c jne 0x115e2292 */
  if (!C.zf) goto L_115e2292;
  /* 115e225e push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115e2260 call esi */
  call_ind((uint32_t)(ESI), 0x115e2262u);
  /* 115e2262 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e2264 pop ecx */
  ECX = (pop32());
  /* 115e2265 jne 0x115e2292 */
  if (!C.zf) goto L_115e2292;
  /* 115e2267 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2269 pop esi */
  ESI = (pop32());
L_115e226a:;
  /* 115e226a push esi */
  push32((uint32_t)(ESI));
  /* 115e226b call dword ptr [0x115e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50e0))), 0x115e2271u);
  /* 115e2271 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e2273 pop ecx */
  ECX = (pop32());
  /* 115e2274 jne 0x115e227e */
  if (!C.zf) goto L_115e227e;
  /* 115e2276 push esi */
  push32((uint32_t)(ESI));
  /* 115e2277 call dword ptr [0x115e510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e510c))), 0x115e227du);
  /* 115e227d pop ecx */
  ECX = (pop32());
L_115e227e:;
  /* 115e227e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e227f cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2282 jl 0x115e226a */
  if ((C.sf!=C.of)) goto L_115e226a;
  /* 115e2284 push 0x115e61b8 */
  push32((uint32_t)(0x115e61b8u));
  /* 115e2289 call ebp */
  call_ind((uint32_t)(EBP), 0x115e228bu);
  /* 115e228b pop ecx */
  ECX = (pop32());
  /* 115e228c call dword ptr [0x115e5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5110))), 0x115e2292u);
L_115e2292:;
  /* 115e2292 pop edi */
  EDI = (pop32());
  /* 115e2293 pop esi */
  ESI = (pop32());
  /* 115e2294 pop ebp */
  EBP = (pop32());
  /* 115e2295 pop ebx */
  EBX = (pop32());
  /* 115e2296 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2299 ret  */
  ESPCHK(0x115e140fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000229a @ 0x115e229a (217 bytes, 57 insns) */
void f_115e229a(void) {
  FTRACE(0x115e229au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e229a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e229e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e22a1 jne 0x115e232f */
  if (!C.zf) goto L_115e232f;
  /* 115e22a7 call dword ptr [0x115e5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5000))), 0x115e22adu);
  /* 115e22ad push 1 */
  push32((uint32_t)(0x1u));
  /* 115e22af mov dword ptr [0x115e69cc], eax */
  w32((uint32_t)(0x115e69cc), (EAX));
  /* 115e22b4 call 0x115e2cce */
  push32(0x115e22b9u); f_115e2cce();
  /* 115e22b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e22bb pop ecx */
  ECX = (pop32());
  /* 115e22bc je 0x115e22fa */
  if (C.zf) goto L_115e22fa;
  /* 115e22be mov eax, dword ptr [0x115e69cc] */
  EAX = (r32((uint32_t)(0x115e69cc)));
  /* 115e22c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115e22c5 mov cl, byte ptr [0x115e69cd] */
  CL = (r8((uint32_t)(0x115e69cd)));
  /* 115e22cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e22d0 shr dword ptr [0x115e69cc], 0x10 */
  w32((uint32_t)(0x115e69cc), (sh_shr((uint32_t)(r32((uint32_t)(0x115e69cc))), (0x10u)&0x1f, 32)));
  /* 115e22d7 mov dword ptr [0x115e69d4], eax */
  w32((uint32_t)(0x115e69d4), (EAX));
  /* 115e22dc mov dword ptr [0x115e69d8], ecx */
  w32((uint32_t)(0x115e69d8), (ECX));
  /* 115e22e2 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115e22e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e22e7 mov dword ptr [0x115e69d0], eax */
  w32((uint32_t)(0x115e69d0), (EAX));
  /* 115e22ec call 0x115e2561 */
  push32(0x115e22f1u); f_115e2561();
  /* 115e22f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e22f3 jne 0x115e22fe */
  if (!C.zf) goto L_115e22fe;
  /* 115e22f5 call 0x115e2d0a */
  push32(0x115e22fau); f_115e2d0a();
L_115e22fa:;
  /* 115e22fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e22fc jmp 0x115e2370 */
  goto L_115e2370;
L_115e22fe:;
  /* 115e22fe call dword ptr [0x115e509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e509c))), 0x115e2304u);
  /* 115e2304 mov dword ptr [0x115e6f38], eax */
  w32((uint32_t)(0x115e6f38), (EAX));
  /* 115e2309 call 0x115e2b9c */
  push32(0x115e230eu); f_115e2b9c();
  /* 115e230e mov dword ptr [0x115e69b8], eax */
  w32((uint32_t)(0x115e69b8), (EAX));
  /* 115e2313 call 0x115e2686 */
  push32(0x115e2318u); f_115e2686();
  /* 115e2318 call 0x115e294f */
  push32(0x115e231du); f_115e294f();
  /* 115e231d call 0x115e2896 */
  push32(0x115e2322u); f_115e2896();
  /* 115e2322 call 0x115e2443 */
  push32(0x115e2327u); f_115e2443();
  /* 115e2327 inc dword ptr [0x115e69b4] */
  { uint32_t _r=(r32((uint32_t)(0x115e69b4)))+1; w32((uint32_t)(0x115e69b4), (_r)); fl_inc(_r,32); }
  /* 115e232d jmp 0x115e236d */
  goto L_115e236d;
L_115e232f:;
  /* 115e232f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115e2331 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2333 jne 0x115e2361 */
  if (!C.zf) goto L_115e2361;
  /* 115e2335 cmp dword ptr [0x115e69b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x115e69b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e233b jle 0x115e22fa */
  if ((C.zf||C.sf!=C.of)) goto L_115e22fa;
  /* 115e233d dec dword ptr [0x115e69b4] */
  { uint32_t _r=(r32((uint32_t)(0x115e69b4)))-1; w32((uint32_t)(0x115e69b4), (_r)); fl_dec(_r,32); }
  /* 115e2343 cmp dword ptr [0x115e6a04], ecx */
  { uint32_t _a=(r32((uint32_t)(0x115e6a04))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2349 jne 0x115e2350 */
  if (!C.zf) goto L_115e2350;
  /* 115e234b call 0x115e2481 */
  push32(0x115e2350u); f_115e2481();
L_115e2350:;
  /* 115e2350 call 0x115e2842 */
  push32(0x115e2355u); f_115e2842();
  /* 115e2355 call 0x115e25b5 */
  push32(0x115e235au); f_115e25b5();
  /* 115e235a call 0x115e2d0a */
  push32(0x115e235fu); f_115e2d0a();
  /* 115e235f jmp 0x115e236d */
  goto L_115e236d;
L_115e2361:;
  /* 115e2361 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2364 jne 0x115e236d */
  if (!C.zf) goto L_115e236d;
  /* 115e2366 push ecx */
  push32((uint32_t)(ECX));
  /* 115e2367 call 0x115e25e6 */
  push32(0x115e236cu); f_115e25e6();
  /* 115e236c pop ecx */
  ECX = (pop32());
L_115e236d:;
  /* 115e236d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e236f pop eax */
  EAX = (pop32());
L_115e2370:;
  /* 115e2370 ret 0xc */
  ESPCHK(0x115e229au, _esp0);
  ESP += 16; return;
}

/* entry @ 0x115e2373 (157 bytes, 73 insns) */
void f_115e2373(void) {
  FTRACE(0x115e2373u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2373 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2374 mov ebp, esp */
  EBP = (ESP);
  /* 115e2376 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2377 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e237a push esi */
  push32((uint32_t)(ESI));
  /* 115e237b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115e237e push edi */
  push32((uint32_t)(EDI));
  /* 115e237f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 115e2382 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2384 jne 0x115e238f */
  if (!C.zf) goto L_115e238f;
  /* 115e2386 cmp dword ptr [0x115e69b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115e69b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e238d jmp 0x115e23b5 */
  goto L_115e23b5;
L_115e238f:;
  /* 115e238f cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2392 je 0x115e2399 */
  if (C.zf) goto L_115e2399;
  /* 115e2394 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2397 jne 0x115e23bb */
  if (!C.zf) goto L_115e23bb;
L_115e2399:;
  /* 115e2399 mov eax, dword ptr [0x115e6f3c] */
  EAX = (r32((uint32_t)(0x115e6f3c)));
  /* 115e239e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e23a0 je 0x115e23ab */
  if (C.zf) goto L_115e23ab;
  /* 115e23a2 push edi */
  push32((uint32_t)(EDI));
  /* 115e23a3 push esi */
  push32((uint32_t)(ESI));
  /* 115e23a4 push ebx */
  push32((uint32_t)(EBX));
  /* 115e23a5 call eax */
  call_ind((uint32_t)(EAX), 0x115e23a7u);
  /* 115e23a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e23a9 je 0x115e23b7 */
  if (C.zf) goto L_115e23b7;
L_115e23ab:;
  /* 115e23ab push edi */
  push32((uint32_t)(EDI));
  /* 115e23ac push esi */
  push32((uint32_t)(ESI));
  /* 115e23ad push ebx */
  push32((uint32_t)(EBX));
  /* 115e23ae call 0x115e229a */
  push32(0x115e23b3u); f_115e229a();
  /* 115e23b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_115e23b5:;
  /* 115e23b5 jne 0x115e23bb */
  if (!C.zf) goto L_115e23bb;
L_115e23b7:;
  /* 115e23b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e23b9 jmp 0x115e2409 */
  goto L_115e2409;
L_115e23bb:;
  /* 115e23bb push edi */
  push32((uint32_t)(EDI));
  /* 115e23bc push esi */
  push32((uint32_t)(ESI));
  /* 115e23bd push ebx */
  push32((uint32_t)(EBX));
  /* 115e23be call 0x115e1000 */
  push32(0x115e23c3u); f_115e1000();
  /* 115e23c3 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e23c6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 115e23c9 jne 0x115e23d7 */
  if (!C.zf) goto L_115e23d7;
  /* 115e23cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e23cd jne 0x115e2406 */
  if (!C.zf) goto L_115e2406;
  /* 115e23cf push edi */
  push32((uint32_t)(EDI));
  /* 115e23d0 push eax */
  push32((uint32_t)(EAX));
  /* 115e23d1 push ebx */
  push32((uint32_t)(EBX));
  /* 115e23d2 call 0x115e229a */
  push32(0x115e23d7u); f_115e229a();
L_115e23d7:;
  /* 115e23d7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e23d9 je 0x115e23e0 */
  if (C.zf) goto L_115e23e0;
  /* 115e23db cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e23de jne 0x115e2406 */
  if (!C.zf) goto L_115e2406;
L_115e23e0:;
  /* 115e23e0 push edi */
  push32((uint32_t)(EDI));
  /* 115e23e1 push esi */
  push32((uint32_t)(ESI));
  /* 115e23e2 push ebx */
  push32((uint32_t)(EBX));
  /* 115e23e3 call 0x115e229a */
  push32(0x115e23e8u); f_115e229a();
  /* 115e23e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e23ea jne 0x115e23ef */
  if (!C.zf) goto L_115e23ef;
  /* 115e23ec and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_115e23ef:;
  /* 115e23ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e23f3 je 0x115e2406 */
  if (C.zf) goto L_115e2406;
  /* 115e23f5 mov eax, dword ptr [0x115e6f3c] */
  EAX = (r32((uint32_t)(0x115e6f3c)));
  /* 115e23fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e23fc je 0x115e2406 */
  if (C.zf) goto L_115e2406;
  /* 115e23fe push edi */
  push32((uint32_t)(EDI));
  /* 115e23ff push esi */
  push32((uint32_t)(ESI));
  /* 115e2400 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2401 call eax */
  call_ind((uint32_t)(EAX), 0x115e2403u);
  /* 115e2403 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_115e2406:;
  /* 115e2406 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_115e2409:;
  /* 115e2409 pop edi */
  EDI = (pop32());
  /* 115e240a pop esi */
  ESI = (pop32());
  /* 115e240b pop ebx */
  EBX = (pop32());
  /* 115e240c pop ebp */
  EBP = (pop32());
  /* 115e240d ret 0xc */
  ESPCHK(0x115e2373u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x115e2410 (48 bytes, 15 insns) */
void f_115e2410(void) {
  FTRACE(0x115e2410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2410 mov eax, dword ptr [0x115e69c0] */
  EAX = (r32((uint32_t)(0x115e69c0)));
  /* 115e2415 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2418 je 0x115e2427 */
  if (C.zf) goto L_115e2427;
  /* 115e241a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e241c jne 0x115e242c */
  if (!C.zf) goto L_115e242c;
  /* 115e241e cmp dword ptr [0x115e69c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115e69c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2425 jne 0x115e242c */
  if (!C.zf) goto L_115e242c;
L_115e2427:;
  /* 115e2427 call 0x115e2d7f */
  push32(0x115e242cu); f_115e2d7f();
L_115e242c:;
  /* 115e242c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115e2430 call 0x115e2db8 */
  push32(0x115e2435u); f_115e2db8();
  /* 115e2435 push 0xff */
  push32((uint32_t)(0xffu));
  /* 115e243a call dword ptr [0x115e64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e64f0))), 0x115e2440u);
  /* 115e2440 pop ecx */
  ECX = (pop32());
  /* 115e2441 pop ecx */
  ECX = (pop32());
  /* 115e2442 ret  */
  ESPCHK(0x115e2410u, _esp0);
  ESP += 4; return;
}

/* FUN_10002443 @ 0x115e2443 (45 bytes, 12 insns) */
void f_115e2443(void) {
  FTRACE(0x115e2443u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2443 mov eax, dword ptr [0x115e6f34] */
  EAX = (r32((uint32_t)(0x115e6f34)));
  /* 115e2448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e244a je 0x115e244e */
  if (C.zf) goto L_115e244e;
  /* 115e244c call eax */
  call_ind((uint32_t)(EAX), 0x115e244eu);
L_115e244e:;
  /* 115e244e push 0x115e6010 */
  push32((uint32_t)(0x115e6010u));
  /* 115e2453 push 0x115e6008 */
  push32((uint32_t)(0x115e6008u));
  /* 115e2458 call 0x115e2547 */
  push32(0x115e245du); f_115e2547();
  /* 115e245d push 0x115e6004 */
  push32((uint32_t)(0x115e6004u));
  /* 115e2462 push 0x115e6000 */
  push32((uint32_t)(0x115e6000u));
  /* 115e2467 call 0x115e2547 */
  push32(0x115e246cu); f_115e2547();
  /* 115e246c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e246f ret  */
  ESPCHK(0x115e2443u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x115e2470 (17 bytes, 6 insns) */
void f_115e2470(void) {
  FTRACE(0x115e2470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2470 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2472 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2474 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 115e2478 call 0x115e2490 */
  push32(0x115e247du); f_115e2490();
  /* 115e247d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2480 ret  */
  ESPCHK(0x115e2470u, _esp0);
  ESP += 4; return;
}

/* FUN_10002481 @ 0x115e2481 (15 bytes, 6 insns) */
void f_115e2481(void) {
  FTRACE(0x115e2481u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2481 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2483 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2485 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2487 call 0x115e2490 */
  push32(0x115e248cu); f_115e2490();
  /* 115e248c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e248f ret  */
  ESPCHK(0x115e2481u, _esp0);
  ESP += 4; return;
}

/* FUN_10002490 @ 0x115e2490 (163 bytes, 53 insns) */
void f_115e2490(void) {
  FTRACE(0x115e2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2490 push edi */
  push32((uint32_t)(EDI));
  /* 115e2491 call 0x115e2535 */
  push32(0x115e2496u); f_115e2535();
  /* 115e2496 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2498 pop edi */
  EDI = (pop32());
  /* 115e2499 cmp dword ptr [0x115e6a08], edi */
  { uint32_t _a=(r32((uint32_t)(0x115e6a08))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e249f jne 0x115e24b2 */
  if (!C.zf) goto L_115e24b2;
  /* 115e24a1 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115e24a5 call dword ptr [0x115e5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5094))), 0x115e24abu);
  /* 115e24ab push eax */
  push32((uint32_t)(EAX));
  /* 115e24ac call dword ptr [0x115e5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5098))), 0x115e24b2u);
L_115e24b2:;
  /* 115e24b2 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e24b7 push ebx */
  push32((uint32_t)(EBX));
  /* 115e24b8 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 115e24bc mov dword ptr [0x115e6a04], edi */
  w32((uint32_t)(0x115e6a04), (EDI));
  /* 115e24c2 mov byte ptr [0x115e6a00], bl */
  w8((uint32_t)(0x115e6a00), (BL));
  /* 115e24c8 jne 0x115e2506 */
  if (!C.zf) goto L_115e2506;
  /* 115e24ca mov eax, dword ptr [0x115e6f30] */
  EAX = (r32((uint32_t)(0x115e6f30)));
  /* 115e24cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e24d1 je 0x115e24f5 */
  if (C.zf) goto L_115e24f5;
  /* 115e24d3 mov ecx, dword ptr [0x115e6f2c] */
  ECX = (r32((uint32_t)(0x115e6f2c)));
  /* 115e24d9 push esi */
  push32((uint32_t)(ESI));
  /* 115e24da lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 115e24dd cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e24df jb 0x115e24f4 */
  if (C.cf) goto L_115e24f4;
L_115e24e1:;
  /* 115e24e1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115e24e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e24e5 je 0x115e24e9 */
  if (C.zf) goto L_115e24e9;
  /* 115e24e7 call eax */
  call_ind((uint32_t)(EAX), 0x115e24e9u);
L_115e24e9:;
  /* 115e24e9 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e24ec cmp esi, dword ptr [0x115e6f30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x115e6f30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e24f2 jae 0x115e24e1 */
  if (!C.cf) goto L_115e24e1;
L_115e24f4:;
  /* 115e24f4 pop esi */
  ESI = (pop32());
L_115e24f5:;
  /* 115e24f5 push 0x115e6018 */
  push32((uint32_t)(0x115e6018u));
  /* 115e24fa push 0x115e6014 */
  push32((uint32_t)(0x115e6014u));
  /* 115e24ff call 0x115e2547 */
  push32(0x115e2504u); f_115e2547();
  /* 115e2504 pop ecx */
  ECX = (pop32());
  /* 115e2505 pop ecx */
  ECX = (pop32());
L_115e2506:;
  /* 115e2506 push 0x115e6020 */
  push32((uint32_t)(0x115e6020u));
  /* 115e250b push 0x115e601c */
  push32((uint32_t)(0x115e601cu));
  /* 115e2510 call 0x115e2547 */
  push32(0x115e2515u); f_115e2547();
  /* 115e2515 pop ecx */
  ECX = (pop32());
  /* 115e2516 pop ecx */
  ECX = (pop32());
  /* 115e2517 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115e2519 pop ebx */
  EBX = (pop32());
  /* 115e251a je 0x115e2523 */
  if (C.zf) goto L_115e2523;
  /* 115e251c call 0x115e253e */
  push32(0x115e2521u); f_115e253e();
  /* 115e2521 pop edi */
  EDI = (pop32());
  /* 115e2522 ret  */
  ESPCHK(0x115e2490u, _esp0);
  ESP += 4; return;
L_115e2523:;
  /* 115e2523 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115e2527 mov dword ptr [0x115e6a08], edi */
  w32((uint32_t)(0x115e6a08), (EDI));
  /* 115e252d call dword ptr [0x115e5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5004))), 0x115e2533u);
  /* 115e2533 pop edi */
  EDI = (pop32());
  /* 115e2534 ret  */
  ESPCHK(0x115e2490u, _esp0);
  ESP += 4; return;
}

/* FUN_10002535 @ 0x115e2535 (9 bytes, 4 insns) */
void f_115e2535(void) {
  FTRACE(0x115e2535u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2535 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e2537 call 0x115e2fa0 */
  push32(0x115e253cu); f_115e2fa0();
  /* 115e253c pop ecx */
  ECX = (pop32());
  /* 115e253d ret  */
  ESPCHK(0x115e2535u, _esp0);
  ESP += 4; return;
}

/* FUN_1000253e @ 0x115e253e (9 bytes, 4 insns) */
void f_115e253e(void) {
  FTRACE(0x115e253eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e253e push 0xd */
  push32((uint32_t)(0xdu));
  /* 115e2540 call 0x115e3001 */
  push32(0x115e2545u); f_115e3001();
  /* 115e2545 pop ecx */
  ECX = (pop32());
  /* 115e2546 ret  */
  ESPCHK(0x115e253eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002547 @ 0x115e2547 (26 bytes, 12 insns) */
void f_115e2547(void) {
  FTRACE(0x115e2547u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2547 push esi */
  push32((uint32_t)(ESI));
  /* 115e2548 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_115e254c:;
  /* 115e254c cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2550 jae 0x115e255f */
  if (!C.cf) goto L_115e255f;
  /* 115e2552 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115e2554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2556 je 0x115e255a */
  if (C.zf) goto L_115e255a;
  /* 115e2558 call eax */
  call_ind((uint32_t)(EAX), 0x115e255au);
L_115e255a:;
  /* 115e255a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e255d jmp 0x115e254c */
  goto L_115e254c;
L_115e255f:;
  /* 115e255f pop esi */
  ESI = (pop32());
  /* 115e2560 ret  */
  ESPCHK(0x115e2547u, _esp0);
  ESP += 4; return;
}

/* FUN_10002561 @ 0x115e2561 (84 bytes, 32 insns) */
void f_115e2561(void) {
  FTRACE(0x115e2561u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2561 push esi */
  push32((uint32_t)(ESI));
  /* 115e2562 call 0x115e2f0b */
  push32(0x115e2567u); f_115e2f0b();
  /* 115e2567 call dword ptr [0x115e50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50a4))), 0x115e256du);
  /* 115e256d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2570 mov dword ptr [0x115e64f4], eax */
  w32((uint32_t)(0x115e64f4), (EAX));
  /* 115e2575 je 0x115e25b1 */
  if (C.zf) goto L_115e25b1;
  /* 115e2577 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 115e2579 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e257b call 0x115e3016 */
  push32(0x115e2580u); f_115e3016();
  /* 115e2580 mov esi, eax */
  ESI = (EAX);
  /* 115e2582 pop ecx */
  ECX = (pop32());
  /* 115e2583 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2585 pop ecx */
  ECX = (pop32());
  /* 115e2586 je 0x115e25b1 */
  if (C.zf) goto L_115e25b1;
  /* 115e2588 push esi */
  push32((uint32_t)(ESI));
  /* 115e2589 push dword ptr [0x115e64f4] */
  push32((uint32_t)(r32((uint32_t)(0x115e64f4))));
  /* 115e258f call dword ptr [0x115e50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50a0))), 0x115e2595u);
  /* 115e2595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2597 je 0x115e25b1 */
  if (C.zf) goto L_115e25b1;
  /* 115e2599 push esi */
  push32((uint32_t)(ESI));
  /* 115e259a call 0x115e25d3 */
  push32(0x115e259fu); f_115e25d3();
  /* 115e259f pop ecx */
  ECX = (pop32());
  /* 115e25a0 call dword ptr [0x115e50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50a8))), 0x115e25a6u);
  /* 115e25a6 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 115e25aa push 1 */
  push32((uint32_t)(0x1u));
  /* 115e25ac mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 115e25ae pop eax */
  EAX = (pop32());
  /* 115e25af pop esi */
  ESI = (pop32());
  /* 115e25b0 ret  */
  ESPCHK(0x115e2561u, _esp0);
  ESP += 4; return;
L_115e25b1:;
  /* 115e25b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e25b3 pop esi */
  ESI = (pop32());
  /* 115e25b4 ret  */
  ESPCHK(0x115e2561u, _esp0);
  ESP += 4; return;
}

/* FUN_100025b5 @ 0x115e25b5 (30 bytes, 8 insns) */
void f_115e25b5(void) {
  FTRACE(0x115e25b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e25b5 call 0x115e2f34 */
  push32(0x115e25bau); f_115e2f34();
  /* 115e25ba mov eax, dword ptr [0x115e64f4] */
  EAX = (r32((uint32_t)(0x115e64f4)));
  /* 115e25bf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e25c2 je 0x115e25d2 */
  if (C.zf) goto L_115e25d2;
  /* 115e25c4 push eax */
  push32((uint32_t)(EAX));
  /* 115e25c5 call dword ptr [0x115e508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e508c))), 0x115e25cbu);
  /* 115e25cb or dword ptr [0x115e64f4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x115e64f4)))|(0xffffffffu); w32((uint32_t)(0x115e64f4), (_r)); fl_logic(_r,32); }
L_115e25d2:;
  /* 115e25d2 ret  */
  ESPCHK(0x115e25b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100025d3 @ 0x115e25d3 (19 bytes, 4 insns) */
void f_115e25d3(void) {
  FTRACE(0x115e25d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e25d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e25d7 mov dword ptr [eax + 0x50], 0x115e6670 */
  w32((uint32_t)(EAX + 0x50), (0x115e6670u));
  /* 115e25de mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 115e25e5 ret  */
  ESPCHK(0x115e25d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100025e6 @ 0x115e25e6 (160 bytes, 62 insns) */
void f_115e25e6(void) {
  FTRACE(0x115e25e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e25e6 mov eax, dword ptr [0x115e64f4] */
  EAX = (r32((uint32_t)(0x115e64f4)));
  /* 115e25eb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e25ee je 0x115e2685 */
  if (C.zf) goto L_115e2685;
  /* 115e25f4 push esi */
  push32((uint32_t)(ESI));
  /* 115e25f5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115e25f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e25fb jne 0x115e260a */
  if (!C.zf) goto L_115e260a;
  /* 115e25fd push eax */
  push32((uint32_t)(EAX));
  /* 115e25fe call dword ptr [0x115e5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5090))), 0x115e2604u);
  /* 115e2604 mov esi, eax */
  ESI = (EAX);
  /* 115e2606 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2608 je 0x115e2676 */
  if (C.zf) goto L_115e2676;
L_115e260a:;
  /* 115e260a mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 115e260d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e260f je 0x115e2618 */
  if (C.zf) goto L_115e2618;
  /* 115e2611 push eax */
  push32((uint32_t)(EAX));
  /* 115e2612 call 0x115e30a3 */
  push32(0x115e2617u); f_115e30a3();
  /* 115e2617 pop ecx */
  ECX = (pop32());
L_115e2618:;
  /* 115e2618 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 115e261b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e261d je 0x115e2626 */
  if (C.zf) goto L_115e2626;
  /* 115e261f push eax */
  push32((uint32_t)(EAX));
  /* 115e2620 call 0x115e30a3 */
  push32(0x115e2625u); f_115e30a3();
  /* 115e2625 pop ecx */
  ECX = (pop32());
L_115e2626:;
  /* 115e2626 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 115e2629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e262b je 0x115e2634 */
  if (C.zf) goto L_115e2634;
  /* 115e262d push eax */
  push32((uint32_t)(EAX));
  /* 115e262e call 0x115e30a3 */
  push32(0x115e2633u); f_115e30a3();
  /* 115e2633 pop ecx */
  ECX = (pop32());
L_115e2634:;
  /* 115e2634 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 115e2637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2639 je 0x115e2642 */
  if (C.zf) goto L_115e2642;
  /* 115e263b push eax */
  push32((uint32_t)(EAX));
  /* 115e263c call 0x115e30a3 */
  push32(0x115e2641u); f_115e30a3();
  /* 115e2641 pop ecx */
  ECX = (pop32());
L_115e2642:;
  /* 115e2642 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 115e2645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2647 je 0x115e2650 */
  if (C.zf) goto L_115e2650;
  /* 115e2649 push eax */
  push32((uint32_t)(EAX));
  /* 115e264a call 0x115e30a3 */
  push32(0x115e264fu); f_115e30a3();
  /* 115e264f pop ecx */
  ECX = (pop32());
L_115e2650:;
  /* 115e2650 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 115e2653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2655 je 0x115e265e */
  if (C.zf) goto L_115e265e;
  /* 115e2657 push eax */
  push32((uint32_t)(EAX));
  /* 115e2658 call 0x115e30a3 */
  push32(0x115e265du); f_115e30a3();
  /* 115e265d pop ecx */
  ECX = (pop32());
L_115e265e:;
  /* 115e265e mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 115e2661 cmp eax, 0x115e6670 */
  { uint32_t _a=(EAX),_b=(0x115e6670u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2666 je 0x115e266f */
  if (C.zf) goto L_115e266f;
  /* 115e2668 push eax */
  push32((uint32_t)(EAX));
  /* 115e2669 call 0x115e30a3 */
  push32(0x115e266eu); f_115e30a3();
  /* 115e266e pop ecx */
  ECX = (pop32());
L_115e266f:;
  /* 115e266f push esi */
  push32((uint32_t)(ESI));
  /* 115e2670 call 0x115e30a3 */
  push32(0x115e2675u); f_115e30a3();
  /* 115e2675 pop ecx */
  ECX = (pop32());
L_115e2676:;
  /* 115e2676 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2678 push dword ptr [0x115e64f4] */
  push32((uint32_t)(r32((uint32_t)(0x115e64f4))));
  /* 115e267e call dword ptr [0x115e50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e50a0))), 0x115e2684u);
  /* 115e2684 pop esi */
  ESI = (pop32());
L_115e2685:;
  /* 115e2685 ret  */
  ESPCHK(0x115e25e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002686 @ 0x115e2686 (444 bytes, 150 insns) */
void f_115e2686(void) {
  FTRACE(0x115e2686u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2686 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2687 mov ebp, esp */
  EBP = (ESP);
  /* 115e2689 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e268c push ebx */
  push32((uint32_t)(EBX));
  /* 115e268d push esi */
  push32((uint32_t)(ESI));
  /* 115e268e push edi */
  push32((uint32_t)(EDI));
  /* 115e268f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115e2694 call 0x115e30eb */
  push32(0x115e2699u); f_115e30eb();
  /* 115e2699 mov esi, eax */
  ESI = (EAX);
  /* 115e269b pop ecx */
  ECX = (pop32());
  /* 115e269c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e269e jne 0x115e26a8 */
  if (!C.zf) goto L_115e26a8;
  /* 115e26a0 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 115e26a2 call 0x115e2410 */
  push32(0x115e26a7u); f_115e2410();
  /* 115e26a7 pop ecx */
  ECX = (pop32());
L_115e26a8:;
  /* 115e26a8 mov dword ptr [0x115e6e20], esi */
  w32((uint32_t)(0x115e6e20), (ESI));
  /* 115e26ae mov dword ptr [0x115e6f20], 0x20 */
  w32((uint32_t)(0x115e6f20), (0x20u));
  /* 115e26b8 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_115e26be:;
  /* 115e26be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e26c0 jae 0x115e26e0 */
  if (!C.cf) goto L_115e26e0;
  /* 115e26c2 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 115e26c6 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 115e26c9 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 115e26cd mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 115e26d1 mov eax, dword ptr [0x115e6e20] */
  EAX = (r32((uint32_t)(0x115e6e20)));
  /* 115e26d6 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e26d9 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e26de jmp 0x115e26be */
  goto L_115e26be;
L_115e26e0:;
  /* 115e26e0 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 115e26e3 push eax */
  push32((uint32_t)(EAX));
  /* 115e26e4 call dword ptr [0x115e5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5084))), 0x115e26eau);
  /* 115e26ea cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115e26ef je 0x115e27c6 */
  if (C.zf) goto L_115e27c6;
  /* 115e26f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115e26f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e26fa je 0x115e27c6 */
  if (C.zf) goto L_115e27c6;
  /* 115e2700 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 115e2702 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 115e2705 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 115e2708 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115e270b mov eax, 0x800 */
  EAX = (0x800u);
  /* 115e2710 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2712 jl 0x115e2716 */
  if ((C.sf!=C.of)) goto L_115e2716;
  /* 115e2714 mov edi, eax */
  EDI = (EAX);
L_115e2716:;
  /* 115e2716 cmp dword ptr [0x115e6f20], edi */
  { uint32_t _a=(r32((uint32_t)(0x115e6f20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e271c jge 0x115e2774 */
  if ((C.sf==C.of)) goto L_115e2774;
  /* 115e271e mov esi, 0x115e6e24 */
  ESI = (0x115e6e24u);
L_115e2723:;
  /* 115e2723 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115e2728 call 0x115e30eb */
  push32(0x115e272du); f_115e30eb();
  /* 115e272d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e272f pop ecx */
  ECX = (pop32());
  /* 115e2730 je 0x115e276e */
  if (C.zf) goto L_115e276e;
  /* 115e2732 add dword ptr [0x115e6f20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x115e6f20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x115e6f20), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e2739 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 115e273b lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_115e2741:;
  /* 115e2741 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2743 jae 0x115e2761 */
  if (!C.cf) goto L_115e2761;
  /* 115e2745 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 115e2749 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115e274c and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115e2750 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 115e2754 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 115e2756 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2759 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e275f jmp 0x115e2741 */
  goto L_115e2741;
L_115e2761:;
  /* 115e2761 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2764 cmp dword ptr [0x115e6f20], edi */
  { uint32_t _a=(r32((uint32_t)(0x115e6f20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e276a jl 0x115e2723 */
  if ((C.sf!=C.of)) goto L_115e2723;
  /* 115e276c jmp 0x115e2774 */
  goto L_115e2774;
L_115e276e:;
  /* 115e276e mov edi, dword ptr [0x115e6f20] */
  EDI = (r32((uint32_t)(0x115e6f20)));
L_115e2774:;
  /* 115e2774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115e2776 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e2778 jle 0x115e27c6 */
  if ((C.zf||C.sf!=C.of)) goto L_115e27c6;
L_115e277a:;
  /* 115e277a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e277d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115e277f cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2782 je 0x115e27bc */
  if (C.zf) goto L_115e27bc;
  /* 115e2784 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 115e2786 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 115e2788 je 0x115e27bc */
  if (C.zf) goto L_115e27bc;
  /* 115e278a test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 115e278c jne 0x115e2799 */
  if (!C.zf) goto L_115e2799;
  /* 115e278e push ecx */
  push32((uint32_t)(ECX));
  /* 115e278f call dword ptr [0x115e507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e507c))), 0x115e2795u);
  /* 115e2795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2797 je 0x115e27bc */
  if (C.zf) goto L_115e27bc;
L_115e2799:;
  /* 115e2799 mov ecx, esi */
  ECX = (ESI);
  /* 115e279b mov eax, esi */
  EAX = (ESI);
  /* 115e279d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115e27a0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115e27a3 mov ecx, dword ptr [ecx*4 + 0x115e6e20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x115e6e20)));
  /* 115e27aa lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 115e27ad lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 115e27b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e27b3 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 115e27b5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115e27b7 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 115e27b9 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_115e27bc:;
  /* 115e27bc add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e27c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e27c1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115e27c2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e27c4 jl 0x115e277a */
  if ((C.sf!=C.of)) goto L_115e277a;
L_115e27c6:;
  /* 115e27c6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115e27c8:;
  /* 115e27c8 mov ecx, dword ptr [0x115e6e20] */
  ECX = (r32((uint32_t)(0x115e6e20)));
  /* 115e27ce lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 115e27d1 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e27d5 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 115e27d8 jne 0x115e2827 */
  if (!C.zf) goto L_115e2827;
  /* 115e27da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115e27dc mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 115e27e0 jne 0x115e27e7 */
  if (!C.zf) goto L_115e27e7;
  /* 115e27e2 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 115e27e4 pop eax */
  EAX = (pop32());
  /* 115e27e5 jmp 0x115e27f1 */
  goto L_115e27f1;
L_115e27e7:;
  /* 115e27e7 mov eax, ebx */
  EAX = (EBX);
  /* 115e27e9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e27ea neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115e27ec sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e27ee add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115e27f1:;
  /* 115e27f1 push eax */
  push32((uint32_t)(EAX));
  /* 115e27f2 call dword ptr [0x115e5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5080))), 0x115e27f8u);
  /* 115e27f8 mov edi, eax */
  EDI = (EAX);
  /* 115e27fa cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e27fd je 0x115e2816 */
  if (C.zf) goto L_115e2816;
  /* 115e27ff push edi */
  push32((uint32_t)(EDI));
  /* 115e2800 call dword ptr [0x115e507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e507c))), 0x115e2806u);
  /* 115e2806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2808 je 0x115e2816 */
  if (C.zf) goto L_115e2816;
  /* 115e280a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e280f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115e2811 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2814 jne 0x115e281c */
  if (!C.zf) goto L_115e281c;
L_115e2816:;
  /* 115e2816 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 115e281a jmp 0x115e282b */
  goto L_115e282b;
L_115e281c:;
  /* 115e281c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e281f jne 0x115e282b */
  if (!C.zf) goto L_115e282b;
  /* 115e2821 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 115e2825 jmp 0x115e282b */
  goto L_115e282b;
L_115e2827:;
  /* 115e2827 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_115e282b:;
  /* 115e282b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115e282c cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e282f jl 0x115e27c8 */
  if ((C.sf!=C.of)) goto L_115e27c8;
  /* 115e2831 push dword ptr [0x115e6f20] */
  push32((uint32_t)(r32((uint32_t)(0x115e6f20))));
  /* 115e2837 call dword ptr [0x115e5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5088))), 0x115e283du);
  /* 115e283d pop edi */
  EDI = (pop32());
  /* 115e283e pop esi */
  ESI = (pop32());
  /* 115e283f pop ebx */
  EBX = (pop32());
  /* 115e2840 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e2841 ret  */
  ESPCHK(0x115e2686u, _esp0);
  ESP += 4; return;
}

/* FUN_10002842 @ 0x115e2842 (84 bytes, 33 insns) */
void f_115e2842(void) {
  FTRACE(0x115e2842u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2842 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2843 push esi */
  push32((uint32_t)(ESI));
  /* 115e2844 push edi */
  push32((uint32_t)(EDI));
  /* 115e2845 mov esi, 0x115e6e20 */
  ESI = (0x115e6e20u);
L_115e284a:;
  /* 115e284a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115e284c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e284e je 0x115e2887 */
  if (C.zf) goto L_115e2887;
  /* 115e2850 mov edi, eax */
  EDI = (EAX);
  /* 115e2852 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2857 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2859 jae 0x115e287c */
  if (!C.cf) goto L_115e287c;
  /* 115e285b lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_115e285e:;
  /* 115e285e cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2862 je 0x115e286b */
  if (C.zf) goto L_115e286b;
  /* 115e2864 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2865 call dword ptr [0x115e5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5074))), 0x115e286bu);
L_115e286b:;
  /* 115e286b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115e286d add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2870 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2875 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2878 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e287a jb 0x115e285e */
  if (C.cf) goto L_115e285e;
L_115e287c:;
  /* 115e287c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e287e call 0x115e30a3 */
  push32(0x115e2883u); f_115e30a3();
  /* 115e2883 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 115e2886 pop ecx */
  ECX = (pop32());
L_115e2887:;
  /* 115e2887 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e288a cmp esi, 0x115e6f20 */
  { uint32_t _a=(ESI),_b=(0x115e6f20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2890 jl 0x115e284a */
  if ((C.sf!=C.of)) goto L_115e284a;
  /* 115e2892 pop edi */
  EDI = (pop32());
  /* 115e2893 pop esi */
  ESI = (pop32());
  /* 115e2894 pop ebx */
  EBX = (pop32());
  /* 115e2895 ret  */
  ESPCHK(0x115e2842u, _esp0);
  ESP += 4; return;
}

/* FUN_10002896 @ 0x115e2896 (185 bytes, 71 insns) */
void f_115e2896(void) {
  FTRACE(0x115e2896u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2896 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2897 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e2899 cmp dword ptr [0x115e6f28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115e6f28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e289f push esi */
  push32((uint32_t)(ESI));
  /* 115e28a0 push edi */
  push32((uint32_t)(EDI));
  /* 115e28a1 jne 0x115e28a8 */
  if (!C.zf) goto L_115e28a8;
  /* 115e28a3 call 0x115e36c3 */
  push32(0x115e28a8u); f_115e36c3();
L_115e28a8:;
  /* 115e28a8 mov esi, dword ptr [0x115e69b8] */
  ESI = (r32((uint32_t)(0x115e69b8)));
  /* 115e28ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_115e28b0:;
  /* 115e28b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e28b2 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e28b4 je 0x115e28c8 */
  if (C.zf) goto L_115e28c8;
  /* 115e28b6 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e28b8 je 0x115e28bb */
  if (C.zf) goto L_115e28bb;
  /* 115e28ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_115e28bb:;
  /* 115e28bb push esi */
  push32((uint32_t)(ESI));
  /* 115e28bc call 0x115e3270 */
  push32(0x115e28c1u); f_115e3270();
  /* 115e28c1 pop ecx */
  ECX = (pop32());
  /* 115e28c2 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 115e28c6 jmp 0x115e28b0 */
  goto L_115e28b0;
L_115e28c8:;
  /* 115e28c8 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 115e28cf push eax */
  push32((uint32_t)(EAX));
  /* 115e28d0 call 0x115e30eb */
  push32(0x115e28d5u); f_115e30eb();
  /* 115e28d5 mov esi, eax */
  ESI = (EAX);
  /* 115e28d7 pop ecx */
  ECX = (pop32());
  /* 115e28d8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e28da mov dword ptr [0x115e69e8], esi */
  w32((uint32_t)(0x115e69e8), (ESI));
  /* 115e28e0 jne 0x115e28ea */
  if (!C.zf) goto L_115e28ea;
  /* 115e28e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e28e4 call 0x115e2410 */
  push32(0x115e28e9u); f_115e2410();
  /* 115e28e9 pop ecx */
  ECX = (pop32());
L_115e28ea:;
  /* 115e28ea mov edi, dword ptr [0x115e69b8] */
  EDI = (r32((uint32_t)(0x115e69b8)));
  /* 115e28f0 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e28f2 je 0x115e292d */
  if (C.zf) goto L_115e292d;
  /* 115e28f4 push ebp */
  push32((uint32_t)(EBP));
L_115e28f5:;
  /* 115e28f5 push edi */
  push32((uint32_t)(EDI));
  /* 115e28f6 call 0x115e3270 */
  push32(0x115e28fbu); f_115e3270();
  /* 115e28fb mov ebp, eax */
  EBP = (EAX);
  /* 115e28fd pop ecx */
  ECX = (pop32());
  /* 115e28fe inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 115e28ff cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2902 je 0x115e2926 */
  if (C.zf) goto L_115e2926;
  /* 115e2904 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2905 call 0x115e30eb */
  push32(0x115e290au); f_115e30eb();
  /* 115e290a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e290c pop ecx */
  ECX = (pop32());
  /* 115e290d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 115e290f jne 0x115e2919 */
  if (!C.zf) goto L_115e2919;
  /* 115e2911 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e2913 call 0x115e2410 */
  push32(0x115e2918u); f_115e2410();
  /* 115e2918 pop ecx */
  ECX = (pop32());
L_115e2919:;
  /* 115e2919 push edi */
  push32((uint32_t)(EDI));
  /* 115e291a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e291c call 0x115e3180 */
  push32(0x115e2921u); f_115e3180();
  /* 115e2921 pop ecx */
  ECX = (pop32());
  /* 115e2922 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2925 pop ecx */
  ECX = (pop32());
L_115e2926:;
  /* 115e2926 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2928 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e292a jne 0x115e28f5 */
  if (!C.zf) goto L_115e28f5;
  /* 115e292c pop ebp */
  EBP = (pop32());
L_115e292d:;
  /* 115e292d push dword ptr [0x115e69b8] */
  push32((uint32_t)(r32((uint32_t)(0x115e69b8))));
  /* 115e2933 call 0x115e30a3 */
  push32(0x115e2938u); f_115e30a3();
  /* 115e2938 pop ecx */
  ECX = (pop32());
  /* 115e2939 mov dword ptr [0x115e69b8], ebx */
  w32((uint32_t)(0x115e69b8), (EBX));
  /* 115e293f mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 115e2941 pop edi */
  EDI = (pop32());
  /* 115e2942 pop esi */
  ESI = (pop32());
  /* 115e2943 mov dword ptr [0x115e6f24], 1 */
  w32((uint32_t)(0x115e6f24), (0x1u));
  /* 115e294d pop ebx */
  EBX = (pop32());
  /* 115e294e ret  */
  ESPCHK(0x115e2896u, _esp0);
  ESP += 4; return;
}

/* FUN_1000294f @ 0x115e294f (153 bytes, 62 insns) */
void f_115e294f(void) {
  FTRACE(0x115e294fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e294f push ebp */
  push32((uint32_t)(EBP));
  /* 115e2950 mov ebp, esp */
  EBP = (ESP);
  /* 115e2952 push ecx */
  push32((uint32_t)(ECX));
  /* 115e2953 push ecx */
  push32((uint32_t)(ECX));
  /* 115e2954 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2955 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e2957 cmp dword ptr [0x115e6f28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115e6f28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e295d push esi */
  push32((uint32_t)(ESI));
  /* 115e295e push edi */
  push32((uint32_t)(EDI));
  /* 115e295f jne 0x115e2966 */
  if (!C.zf) goto L_115e2966;
  /* 115e2961 call 0x115e36c3 */
  push32(0x115e2966u); f_115e36c3();
L_115e2966:;
  /* 115e2966 mov esi, 0x115e6a0c */
  ESI = (0x115e6a0cu);
  /* 115e296b push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115e2970 push esi */
  push32((uint32_t)(ESI));
  /* 115e2971 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2972 call dword ptr [0x115e5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5070))), 0x115e2978u);
  /* 115e2978 mov eax, dword ptr [0x115e6f38] */
  EAX = (r32((uint32_t)(0x115e6f38)));
  /* 115e297d mov dword ptr [0x115e69f8], esi */
  w32((uint32_t)(0x115e69f8), (ESI));
  /* 115e2983 mov edi, esi */
  EDI = (ESI);
  /* 115e2985 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2987 je 0x115e298b */
  if (C.zf) goto L_115e298b;
  /* 115e2989 mov edi, eax */
  EDI = (EAX);
L_115e298b:;
  /* 115e298b lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115e298e push eax */
  push32((uint32_t)(EAX));
  /* 115e298f lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 115e2992 push eax */
  push32((uint32_t)(EAX));
  /* 115e2993 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2994 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2995 push edi */
  push32((uint32_t)(EDI));
  /* 115e2996 call 0x115e29e8 */
  push32(0x115e299bu); f_115e29e8();
  /* 115e299b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115e299e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e29a1 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 115e29a4 push eax */
  push32((uint32_t)(EAX));
  /* 115e29a5 call 0x115e30eb */
  push32(0x115e29aau); f_115e30eb();
  /* 115e29aa mov esi, eax */
  ESI = (EAX);
  /* 115e29ac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e29af cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e29b1 jne 0x115e29bb */
  if (!C.zf) goto L_115e29bb;
  /* 115e29b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 115e29b5 call 0x115e2410 */
  push32(0x115e29bau); f_115e2410();
  /* 115e29ba pop ecx */
  ECX = (pop32());
L_115e29bb:;
  /* 115e29bb lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115e29be push eax */
  push32((uint32_t)(EAX));
  /* 115e29bf lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 115e29c2 push eax */
  push32((uint32_t)(EAX));
  /* 115e29c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e29c6 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 115e29c9 push eax */
  push32((uint32_t)(EAX));
  /* 115e29ca push esi */
  push32((uint32_t)(ESI));
  /* 115e29cb push edi */
  push32((uint32_t)(EDI));
  /* 115e29cc call 0x115e29e8 */
  push32(0x115e29d1u); f_115e29e8();
  /* 115e29d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e29d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e29d7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e29d8 mov dword ptr [0x115e69e0], esi */
  w32((uint32_t)(0x115e69e0), (ESI));
  /* 115e29de pop edi */
  EDI = (pop32());
  /* 115e29df pop esi */
  ESI = (pop32());
  /* 115e29e0 mov dword ptr [0x115e69dc], eax */
  w32((uint32_t)(0x115e69dc), (EAX));
  /* 115e29e5 pop ebx */
  EBX = (pop32());
  /* 115e29e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e29e7 ret  */
  ESPCHK(0x115e294fu, _esp0);
  ESP += 4; return;
}

/* FUN_100029e8 @ 0x115e29e8 (436 bytes, 187 insns) */
void f_115e29e8(void) {
  FTRACE(0x115e29e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e29e8 push ebp */
  push32((uint32_t)(EBP));
  /* 115e29e9 mov ebp, esp */
  EBP = (ESP);
  /* 115e29eb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115e29ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115e29f1 push ebx */
  push32((uint32_t)(EBX));
  /* 115e29f2 push esi */
  push32((uint32_t)(ESI));
  /* 115e29f3 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115e29f6 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 115e29f9 push edi */
  push32((uint32_t)(EDI));
  /* 115e29fa mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 115e29fd mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 115e2a03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e2a06 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e2a08 je 0x115e2a12 */
  if (C.zf) goto L_115e2a12;
  /* 115e2a0a mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 115e2a0c add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2a0f mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_115e2a12:;
  /* 115e2a12 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2a15 jne 0x115e2a5b */
  if (!C.zf) goto L_115e2a5b;
L_115e2a17:;
  /* 115e2a17 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 115e2a1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2a1b cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2a1e je 0x115e2a49 */
  if (C.zf) goto L_115e2a49;
  /* 115e2a20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e2a22 je 0x115e2a49 */
  if (C.zf) goto L_115e2a49;
  /* 115e2a24 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 115e2a27 test byte ptr [edx + 0x115e6d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x115e6d01)))&(0x4u); fl_logic(_r,8); }
  /* 115e2a2e je 0x115e2a3c */
  if (C.zf) goto L_115e2a3c;
  /* 115e2a30 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2a32 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2a34 je 0x115e2a3c */
  if (C.zf) goto L_115e2a3c;
  /* 115e2a36 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2a38 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115e2a3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e2a3b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115e2a3c:;
  /* 115e2a3c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2a3e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2a40 je 0x115e2a17 */
  if (C.zf) goto L_115e2a17;
  /* 115e2a42 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2a44 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115e2a46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e2a47 jmp 0x115e2a17 */
  goto L_115e2a17;
L_115e2a49:;
  /* 115e2a49 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2a4b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2a4d je 0x115e2a53 */
  if (C.zf) goto L_115e2a53;
  /* 115e2a4f and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 115e2a52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115e2a53:;
  /* 115e2a53 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2a56 jne 0x115e2a9e */
  if (!C.zf) goto L_115e2a9e;
  /* 115e2a58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2a59 jmp 0x115e2a9e */
  goto L_115e2a9e;
L_115e2a5b:;
  /* 115e2a5b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2a5d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2a5f je 0x115e2a66 */
  if (C.zf) goto L_115e2a66;
  /* 115e2a61 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2a63 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115e2a65 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115e2a66:;
  /* 115e2a66 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2a68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2a69 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 115e2a6c test byte ptr [ebx + 0x115e6d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x115e6d01)))&(0x4u); fl_logic(_r,8); }
  /* 115e2a73 je 0x115e2a81 */
  if (C.zf) goto L_115e2a81;
  /* 115e2a75 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2a77 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2a79 je 0x115e2a80 */
  if (C.zf) goto L_115e2a80;
  /* 115e2a7b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 115e2a7d mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 115e2a7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115e2a80:;
  /* 115e2a80 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115e2a81:;
  /* 115e2a81 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2a84 je 0x115e2a8f */
  if (C.zf) goto L_115e2a8f;
  /* 115e2a86 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e2a88 je 0x115e2a93 */
  if (C.zf) goto L_115e2a93;
  /* 115e2a8a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2a8d jne 0x115e2a5b */
  if (!C.zf) goto L_115e2a5b;
L_115e2a8f:;
  /* 115e2a8f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e2a91 jne 0x115e2a96 */
  if (!C.zf) goto L_115e2a96;
L_115e2a93:;
  /* 115e2a93 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e2a94 jmp 0x115e2a9e */
  goto L_115e2a9e;
L_115e2a96:;
  /* 115e2a96 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2a98 je 0x115e2a9e */
  if (C.zf) goto L_115e2a9e;
  /* 115e2a9a and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_115e2a9e:;
  /* 115e2a9e and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_115e2aa2:;
  /* 115e2aa2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2aa5 je 0x115e2b8b */
  if (C.zf) goto L_115e2b8b;
L_115e2aab:;
  /* 115e2aab mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2aad cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2ab0 je 0x115e2ab7 */
  if (C.zf) goto L_115e2ab7;
  /* 115e2ab2 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2ab5 jne 0x115e2aba */
  if (!C.zf) goto L_115e2aba;
L_115e2ab7:;
  /* 115e2ab7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2ab8 jmp 0x115e2aab */
  goto L_115e2aab;
L_115e2aba:;
  /* 115e2aba cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2abd je 0x115e2b8b */
  if (C.zf) goto L_115e2b8b;
  /* 115e2ac3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e2ac5 je 0x115e2acf */
  if (C.zf) goto L_115e2acf;
  /* 115e2ac7 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 115e2ac9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2acc mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_115e2acf:;
  /* 115e2acf mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115e2ad2 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_115e2ad4:;
  /* 115e2ad4 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 115e2adb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115e2add:;
  /* 115e2add cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2ae0 jne 0x115e2ae6 */
  if (!C.zf) goto L_115e2ae6;
  /* 115e2ae2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2ae3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115e2ae4 jmp 0x115e2add */
  goto L_115e2add;
L_115e2ae6:;
  /* 115e2ae6 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2ae9 jne 0x115e2b17 */
  if (!C.zf) goto L_115e2b17;
  /* 115e2aeb test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 115e2aee jne 0x115e2b15 */
  if (!C.zf) goto L_115e2b15;
  /* 115e2af0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e2af2 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2af5 je 0x115e2b04 */
  if (C.zf) goto L_115e2b04;
  /* 115e2af7 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2afb lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 115e2afe jne 0x115e2b04 */
  if (!C.zf) goto L_115e2b04;
  /* 115e2b00 mov eax, edx */
  EAX = (EDX);
  /* 115e2b02 jmp 0x115e2b07 */
  goto L_115e2b07;
L_115e2b04:;
  /* 115e2b04 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_115e2b07:;
  /* 115e2b07 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 115e2b0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115e2b0c cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2b0f sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 115e2b12 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_115e2b15:;
  /* 115e2b15 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_115e2b17:;
  /* 115e2b17 mov edx, ebx */
  EDX = (EBX);
  /* 115e2b19 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115e2b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115e2b1c je 0x115e2b2c */
  if (C.zf) goto L_115e2b2c;
  /* 115e2b1e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_115e2b1f:;
  /* 115e2b1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2b21 je 0x115e2b27 */
  if (C.zf) goto L_115e2b27;
  /* 115e2b23 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 115e2b26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115e2b27:;
  /* 115e2b27 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2b29 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115e2b2a jne 0x115e2b1f */
  if (!C.zf) goto L_115e2b1f;
L_115e2b2c:;
  /* 115e2b2c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2b2e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e2b30 je 0x115e2b7c */
  if (C.zf) goto L_115e2b7c;
  /* 115e2b32 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2b36 jne 0x115e2b42 */
  if (!C.zf) goto L_115e2b42;
  /* 115e2b38 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2b3b je 0x115e2b7c */
  if (C.zf) goto L_115e2b7c;
  /* 115e2b3d cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2b40 je 0x115e2b7c */
  if (C.zf) goto L_115e2b7c;
L_115e2b42:;
  /* 115e2b42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2b46 je 0x115e2b76 */
  if (C.zf) goto L_115e2b76;
  /* 115e2b48 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2b4a je 0x115e2b65 */
  if (C.zf) goto L_115e2b65;
  /* 115e2b4c movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 115e2b4f test byte ptr [ebx + 0x115e6d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x115e6d01)))&(0x4u); fl_logic(_r,8); }
  /* 115e2b56 je 0x115e2b5e */
  if (C.zf) goto L_115e2b5e;
  /* 115e2b58 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115e2b5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e2b5b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2b5c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115e2b5e:;
  /* 115e2b5e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115e2b60 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115e2b62 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e2b63 jmp 0x115e2b74 */
  goto L_115e2b74;
L_115e2b65:;
  /* 115e2b65 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 115e2b68 test byte ptr [edx + 0x115e6d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x115e6d01)))&(0x4u); fl_logic(_r,8); }
  /* 115e2b6f je 0x115e2b74 */
  if (C.zf) goto L_115e2b74;
  /* 115e2b71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2b72 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115e2b74:;
  /* 115e2b74 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115e2b76:;
  /* 115e2b76 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2b77 jmp 0x115e2ad4 */
  goto L_115e2ad4;
L_115e2b7c:;
  /* 115e2b7c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e2b7e je 0x115e2b84 */
  if (C.zf) goto L_115e2b84;
  /* 115e2b80 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 115e2b83 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115e2b84:;
  /* 115e2b84 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115e2b86 jmp 0x115e2aa2 */
  goto L_115e2aa2;
L_115e2b8b:;
  /* 115e2b8b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e2b8d je 0x115e2b92 */
  if (C.zf) goto L_115e2b92;
  /* 115e2b8f and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_115e2b92:;
  /* 115e2b92 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115e2b95 pop edi */
  EDI = (pop32());
  /* 115e2b96 pop esi */
  ESI = (pop32());
  /* 115e2b97 pop ebx */
  EBX = (pop32());
  /* 115e2b98 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 115e2b9a pop ebp */
  EBP = (pop32());
  /* 115e2b9b ret  */
  ESPCHK(0x115e29e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b9c @ 0x115e2b9c (306 bytes, 132 insns) */
void f_115e2b9c(void) {
  FTRACE(0x115e2b9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2b9c push ecx */
  push32((uint32_t)(ECX));
  /* 115e2b9d push ecx */
  push32((uint32_t)(ECX));
  /* 115e2b9e mov eax, dword ptr [0x115e6b10] */
  EAX = (r32((uint32_t)(0x115e6b10)));
  /* 115e2ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2ba4 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2ba5 mov ebp, dword ptr [0x115e505c] */
  EBP = (r32((uint32_t)(0x115e505c)));
  /* 115e2bab push esi */
  push32((uint32_t)(ESI));
  /* 115e2bac push edi */
  push32((uint32_t)(EDI));
  /* 115e2bad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e2baf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115e2bb1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e2bb3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2bb5 jne 0x115e2bea */
  if (!C.zf) goto L_115e2bea;
  /* 115e2bb7 call ebp */
  call_ind((uint32_t)(EBP), 0x115e2bb9u);
  /* 115e2bb9 mov esi, eax */
  ESI = (EAX);
  /* 115e2bbb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2bbd je 0x115e2bcb */
  if (C.zf) goto L_115e2bcb;
  /* 115e2bbf mov dword ptr [0x115e6b10], 1 */
  w32((uint32_t)(0x115e6b10), (0x1u));
  /* 115e2bc9 jmp 0x115e2bf3 */
  goto L_115e2bf3;
L_115e2bcb:;
  /* 115e2bcb call dword ptr [0x115e506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e506c))), 0x115e2bd1u);
  /* 115e2bd1 mov edi, eax */
  EDI = (EAX);
  /* 115e2bd3 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2bd5 je 0x115e2cc5 */
  if (C.zf) goto L_115e2cc5;
  /* 115e2bdb mov dword ptr [0x115e6b10], 2 */
  w32((uint32_t)(0x115e6b10), (0x2u));
  /* 115e2be5 jmp 0x115e2c79 */
  goto L_115e2c79;
L_115e2bea:;
  /* 115e2bea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2bed jne 0x115e2c74 */
  if (!C.zf) goto L_115e2c74;
L_115e2bf3:;
  /* 115e2bf3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2bf5 jne 0x115e2c03 */
  if (!C.zf) goto L_115e2c03;
  /* 115e2bf7 call ebp */
  call_ind((uint32_t)(EBP), 0x115e2bf9u);
  /* 115e2bf9 mov esi, eax */
  ESI = (EAX);
  /* 115e2bfb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2bfd je 0x115e2cc5 */
  if (C.zf) goto L_115e2cc5;
L_115e2c03:;
  /* 115e2c03 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115e2c06 mov eax, esi */
  EAX = (ESI);
  /* 115e2c08 je 0x115e2c18 */
  if (C.zf) goto L_115e2c18;
L_115e2c0a:;
  /* 115e2c0a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c0b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c0c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115e2c0f jne 0x115e2c0a */
  if (!C.zf) goto L_115e2c0a;
  /* 115e2c11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c12 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c13 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115e2c16 jne 0x115e2c0a */
  if (!C.zf) goto L_115e2c0a;
L_115e2c18:;
  /* 115e2c18 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e2c1a mov edi, dword ptr [0x115e5064] */
  EDI = (r32((uint32_t)(0x115e5064)));
  /* 115e2c20 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115e2c22 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c23 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c25 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c26 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c27 push eax */
  push32((uint32_t)(EAX));
  /* 115e2c28 push esi */
  push32((uint32_t)(ESI));
  /* 115e2c29 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c2a push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c2b mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 115e2c2f call edi */
  call_ind((uint32_t)(EDI), 0x115e2c31u);
  /* 115e2c31 mov ebp, eax */
  EBP = (EAX);
  /* 115e2c33 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2c35 je 0x115e2c69 */
  if (C.zf) goto L_115e2c69;
  /* 115e2c37 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2c38 call 0x115e30eb */
  push32(0x115e2c3du); f_115e30eb();
  /* 115e2c3d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2c3f pop ecx */
  ECX = (pop32());
  /* 115e2c40 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 115e2c44 je 0x115e2c69 */
  if (C.zf) goto L_115e2c69;
  /* 115e2c46 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c47 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c48 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2c49 push eax */
  push32((uint32_t)(EAX));
  /* 115e2c4a push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 115e2c4e push esi */
  push32((uint32_t)(ESI));
  /* 115e2c4f push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c50 push ebx */
  push32((uint32_t)(EBX));
  /* 115e2c51 call edi */
  call_ind((uint32_t)(EDI), 0x115e2c53u);
  /* 115e2c53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2c55 jne 0x115e2c65 */
  if (!C.zf) goto L_115e2c65;
  /* 115e2c57 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115e2c5b call 0x115e30a3 */
  push32(0x115e2c60u); f_115e30a3();
  /* 115e2c60 pop ecx */
  ECX = (pop32());
  /* 115e2c61 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_115e2c65:;
  /* 115e2c65 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_115e2c69:;
  /* 115e2c69 push esi */
  push32((uint32_t)(ESI));
  /* 115e2c6a call dword ptr [0x115e5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5068))), 0x115e2c70u);
  /* 115e2c70 mov eax, ebx */
  EAX = (EBX);
  /* 115e2c72 jmp 0x115e2cc7 */
  goto L_115e2cc7;
L_115e2c74:;
  /* 115e2c74 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2c77 jne 0x115e2cc5 */
  if (!C.zf) goto L_115e2cc5;
L_115e2c79:;
  /* 115e2c79 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2c7b jne 0x115e2c89 */
  if (!C.zf) goto L_115e2c89;
  /* 115e2c7d call dword ptr [0x115e506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e506c))), 0x115e2c83u);
  /* 115e2c83 mov edi, eax */
  EDI = (EAX);
  /* 115e2c85 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2c87 je 0x115e2cc5 */
  if (C.zf) goto L_115e2cc5;
L_115e2c89:;
  /* 115e2c89 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2c8b mov eax, edi */
  EAX = (EDI);
  /* 115e2c8d je 0x115e2c99 */
  if (C.zf) goto L_115e2c99;
L_115e2c8f:;
  /* 115e2c8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c90 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2c92 jne 0x115e2c8f */
  if (!C.zf) goto L_115e2c8f;
  /* 115e2c94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c95 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e2c97 jne 0x115e2c8f */
  if (!C.zf) goto L_115e2c8f;
L_115e2c99:;
  /* 115e2c99 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e2c9b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2c9c mov ebp, eax */
  EBP = (EAX);
  /* 115e2c9e push ebp */
  push32((uint32_t)(EBP));
  /* 115e2c9f call 0x115e30eb */
  push32(0x115e2ca4u); f_115e30eb();
  /* 115e2ca4 mov esi, eax */
  ESI = (EAX);
  /* 115e2ca6 pop ecx */
  ECX = (pop32());
  /* 115e2ca7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2ca9 jne 0x115e2caf */
  if (!C.zf) goto L_115e2caf;
  /* 115e2cab xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115e2cad jmp 0x115e2cba */
  goto L_115e2cba;
L_115e2caf:;
  /* 115e2caf push ebp */
  push32((uint32_t)(EBP));
  /* 115e2cb0 push edi */
  push32((uint32_t)(EDI));
  /* 115e2cb1 push esi */
  push32((uint32_t)(ESI));
  /* 115e2cb2 call 0x115e36e0 */
  push32(0x115e2cb7u); f_115e36e0();
  /* 115e2cb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e2cba:;
  /* 115e2cba push edi */
  push32((uint32_t)(EDI));
  /* 115e2cbb call dword ptr [0x115e5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5078))), 0x115e2cc1u);
  /* 115e2cc1 mov eax, esi */
  EAX = (ESI);
  /* 115e2cc3 jmp 0x115e2cc7 */
  goto L_115e2cc7;
L_115e2cc5:;
  /* 115e2cc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115e2cc7:;
  /* 115e2cc7 pop edi */
  EDI = (pop32());
  /* 115e2cc8 pop esi */
  ESI = (pop32());
  /* 115e2cc9 pop ebp */
  EBP = (pop32());
  /* 115e2cca pop ebx */
  EBX = (pop32());
  /* 115e2ccb pop ecx */
  ECX = (pop32());
  /* 115e2ccc pop ecx */
  ECX = (pop32());
  /* 115e2ccd ret  */
  ESPCHK(0x115e2b9cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002cce @ 0x115e2cce (60 bytes, 20 insns) */
void f_115e2cce(void) {
  FTRACE(0x115e2cceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2cce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e2cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2cd2 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2cd6 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115e2cdb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 115e2cde push eax */
  push32((uint32_t)(EAX));
  /* 115e2cdf call dword ptr [0x115e5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5060))), 0x115e2ce5u);
  /* 115e2ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2ce7 mov dword ptr [0x115e6e08], eax */
  w32((uint32_t)(0x115e6e08), (EAX));
  /* 115e2cec je 0x115e2d03 */
  if (C.zf) goto L_115e2d03;
  /* 115e2cee call 0x115e3a15 */
  push32(0x115e2cf3u); f_115e3a15();
  /* 115e2cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2cf5 jne 0x115e2d06 */
  if (!C.zf) goto L_115e2d06;
  /* 115e2cf7 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e2cfd call dword ptr [0x115e5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5058))), 0x115e2d03u);
L_115e2d03:;
  /* 115e2d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e2d05 ret  */
  ESPCHK(0x115e2cceu, _esp0);
  ESP += 4; return;
L_115e2d06:;
  /* 115e2d06 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e2d08 pop eax */
  EAX = (pop32());
  /* 115e2d09 ret  */
  ESPCHK(0x115e2cceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d0a @ 0x115e2d0a (117 bytes, 38 insns) */
void f_115e2d0a(void) {
  FTRACE(0x115e2d0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2d0a push ebx */
  push32((uint32_t)(EBX));
  /* 115e2d0b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e2d0d cmp dword ptr [0x115e6bc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115e6bc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2d13 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2d14 mov ebp, dword ptr [0x115e504c] */
  EBP = (r32((uint32_t)(0x115e504c)));
  /* 115e2d1a jle 0x115e2d60 */
  if ((C.zf||C.sf!=C.of)) goto L_115e2d60;
  /* 115e2d1c mov eax, dword ptr [0x115e6bcc] */
  EAX = (r32((uint32_t)(0x115e6bcc)));
  /* 115e2d21 push esi */
  push32((uint32_t)(ESI));
  /* 115e2d22 push edi */
  push32((uint32_t)(EDI));
  /* 115e2d23 mov edi, dword ptr [0x115e5050] */
  EDI = (r32((uint32_t)(0x115e5050)));
  /* 115e2d29 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_115e2d2c:;
  /* 115e2d2c push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115e2d31 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115e2d36 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e2d38 call edi */
  call_ind((uint32_t)(EDI), 0x115e2d3au);
  /* 115e2d3a push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115e2d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2d41 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e2d43 call edi */
  call_ind((uint32_t)(EDI), 0x115e2d45u);
  /* 115e2d45 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 115e2d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2d4a push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e2d50 call ebp */
  call_ind((uint32_t)(EBP), 0x115e2d52u);
  /* 115e2d52 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2d55 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115e2d56 cmp ebx, dword ptr [0x115e6bc8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115e6bc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2d5c jl 0x115e2d2c */
  if ((C.sf!=C.of)) goto L_115e2d2c;
  /* 115e2d5e pop edi */
  EDI = (pop32());
  /* 115e2d5f pop esi */
  ESI = (pop32());
L_115e2d60:;
  /* 115e2d60 push dword ptr [0x115e6bcc] */
  push32((uint32_t)(r32((uint32_t)(0x115e6bcc))));
  /* 115e2d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2d68 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e2d6e call ebp */
  call_ind((uint32_t)(EBP), 0x115e2d70u);
  /* 115e2d70 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e2d76 call dword ptr [0x115e5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5058))), 0x115e2d7cu);
  /* 115e2d7c pop ebp */
  EBP = (pop32());
  /* 115e2d7d pop ebx */
  EBX = (pop32());
  /* 115e2d7e ret  */
  ESPCHK(0x115e2d0au, _esp0);
  ESP += 4; return;
}

/* FUN_10002d7f @ 0x115e2d7f (57 bytes, 18 insns) */
void f_115e2d7f(void) {
  FTRACE(0x115e2d7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2d7f mov eax, dword ptr [0x115e69c0] */
  EAX = (r32((uint32_t)(0x115e69c0)));
  /* 115e2d84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2d87 je 0x115e2d96 */
  if (C.zf) goto L_115e2d96;
  /* 115e2d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2d8b jne 0x115e2db7 */
  if (!C.zf) goto L_115e2db7;
  /* 115e2d8d cmp dword ptr [0x115e69c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115e69c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2d94 jne 0x115e2db7 */
  if (!C.zf) goto L_115e2db7;
L_115e2d96:;
  /* 115e2d96 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 115e2d9b call 0x115e2db8 */
  push32(0x115e2da0u); f_115e2db8();
  /* 115e2da0 mov eax, dword ptr [0x115e6b14] */
  EAX = (r32((uint32_t)(0x115e6b14)));
  /* 115e2da5 pop ecx */
  ECX = (pop32());
  /* 115e2da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2da8 je 0x115e2dac */
  if (C.zf) goto L_115e2dac;
  /* 115e2daa call eax */
  call_ind((uint32_t)(EAX), 0x115e2dacu);
L_115e2dac:;
  /* 115e2dac push 0xff */
  push32((uint32_t)(0xffu));
  /* 115e2db1 call 0x115e2db8 */
  push32(0x115e2db6u); f_115e2db8();
  /* 115e2db6 pop ecx */
  ECX = (pop32());
L_115e2db7:;
  /* 115e2db7 ret  */
  ESPCHK(0x115e2d7fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002db8 @ 0x115e2db8 (339 bytes, 100 insns) */
void f_115e2db8(void) {
  FTRACE(0x115e2db8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2db8 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2db9 mov ebp, esp */
  EBP = (ESP);
  /* 115e2dbb sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e2dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e2dc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115e2dc6 mov eax, 0x115e6520 */
  EAX = (0x115e6520u);
L_115e2dcb:;
  /* 115e2dcb cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2dcd je 0x115e2dda */
  if (C.zf) goto L_115e2dda;
  /* 115e2dcf add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2dd2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e2dd3 cmp eax, 0x115e65b0 */
  { uint32_t _a=(EAX),_b=(0x115e65b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2dd8 jl 0x115e2dcb */
  if ((C.sf!=C.of)) goto L_115e2dcb;
L_115e2dda:;
  /* 115e2dda push esi */
  push32((uint32_t)(ESI));
  /* 115e2ddb mov esi, ecx */
  ESI = (ECX);
  /* 115e2ddd shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 115e2de0 cmp edx, dword ptr [esi + 0x115e6520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x115e6520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2de6 jne 0x115e2f08 */
  if (!C.zf) goto L_115e2f08;
  /* 115e2dec mov eax, dword ptr [0x115e69c0] */
  EAX = (r32((uint32_t)(0x115e69c0)));
  /* 115e2df1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2df4 je 0x115e2ee2 */
  if (C.zf) goto L_115e2ee2;
  /* 115e2dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2dfc jne 0x115e2e0b */
  if (!C.zf) goto L_115e2e0b;
  /* 115e2dfe cmp dword ptr [0x115e69c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115e69c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2e05 je 0x115e2ee2 */
  if (C.zf) goto L_115e2ee2;
L_115e2e0b:;
  /* 115e2e0b cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2e11 je 0x115e2f08 */
  if (C.zf) goto L_115e2f08;
  /* 115e2e17 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115e2e1d push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115e2e22 push eax */
  push32((uint32_t)(EAX));
  /* 115e2e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2e25 call dword ptr [0x115e5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5070))), 0x115e2e2bu);
  /* 115e2e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2e2d jne 0x115e2e42 */
  if (!C.zf) goto L_115e2e42;
  /* 115e2e2f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115e2e35 push 0x115e5448 */
  push32((uint32_t)(0x115e5448u));
  /* 115e2e3a push eax */
  push32((uint32_t)(EAX));
  /* 115e2e3b call 0x115e3180 */
  push32(0x115e2e40u); f_115e3180();
  /* 115e2e40 pop ecx */
  ECX = (pop32());
  /* 115e2e41 pop ecx */
  ECX = (pop32());
L_115e2e42:;
  /* 115e2e42 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115e2e48 push edi */
  push32((uint32_t)(EDI));
  /* 115e2e49 push eax */
  push32((uint32_t)(EAX));
  /* 115e2e4a lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 115e2e50 call 0x115e3270 */
  push32(0x115e2e55u); f_115e3270();
  /* 115e2e55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e2e56 pop ecx */
  ECX = (pop32());
  /* 115e2e57 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2e5a jbe 0x115e2e85 */
  if ((C.cf||C.zf)) goto L_115e2e85;
  /* 115e2e5c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115e2e62 push eax */
  push32((uint32_t)(EAX));
  /* 115e2e63 call 0x115e3270 */
  push32(0x115e2e68u); f_115e3270();
  /* 115e2e68 mov edi, eax */
  EDI = (EAX);
  /* 115e2e6a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115e2e70 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e2e73 push 3 */
  push32((uint32_t)(0x3u));
  /* 115e2e75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2e77 push 0x115e5444 */
  push32((uint32_t)(0x115e5444u));
  /* 115e2e7c push edi */
  push32((uint32_t)(EDI));
  /* 115e2e7d call 0x115e42f0 */
  push32(0x115e2e82u); f_115e42f0();
  /* 115e2e82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e2e85:;
  /* 115e2e85 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115e2e8b push 0x115e5428 */
  push32((uint32_t)(0x115e5428u));
  /* 115e2e90 push eax */
  push32((uint32_t)(EAX));
  /* 115e2e91 call 0x115e3180 */
  push32(0x115e2e96u); f_115e3180();
  /* 115e2e96 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115e2e9c push edi */
  push32((uint32_t)(EDI));
  /* 115e2e9d push eax */
  push32((uint32_t)(EAX));
  /* 115e2e9e call 0x115e3190 */
  push32(0x115e2ea3u); f_115e3190();
  /* 115e2ea3 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115e2ea9 push 0x115e5424 */
  push32((uint32_t)(0x115e5424u));
  /* 115e2eae push eax */
  push32((uint32_t)(EAX));
  /* 115e2eaf call 0x115e3190 */
  push32(0x115e2eb4u); f_115e3190();
  /* 115e2eb4 push dword ptr [esi + 0x115e6524] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x115e6524))));
  /* 115e2eba lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115e2ec0 push eax */
  push32((uint32_t)(EAX));
  /* 115e2ec1 call 0x115e3190 */
  push32(0x115e2ec6u); f_115e3190();
  /* 115e2ec6 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 115e2ecb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115e2ed1 push 0x115e53fc */
  push32((uint32_t)(0x115e53fcu));
  /* 115e2ed6 push eax */
  push32((uint32_t)(EAX));
  /* 115e2ed7 call 0x115e425e */
  push32(0x115e2edcu); f_115e425e();
  /* 115e2edc add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2edf pop edi */
  EDI = (pop32());
  /* 115e2ee0 jmp 0x115e2f08 */
  goto L_115e2f08;
L_115e2ee2:;
  /* 115e2ee2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 115e2ee5 lea esi, [esi + 0x115e6524] */
  ESI = ((uint32_t)(ESI + 0x115e6524));
  /* 115e2eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 115e2eed push eax */
  push32((uint32_t)(EAX));
  /* 115e2eee push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e2ef0 call 0x115e3270 */
  push32(0x115e2ef5u); f_115e3270();
  /* 115e2ef5 pop ecx */
  ECX = (pop32());
  /* 115e2ef6 push eax */
  push32((uint32_t)(EAX));
  /* 115e2ef7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e2ef9 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 115e2efb call dword ptr [0x115e5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5080))), 0x115e2f01u);
  /* 115e2f01 push eax */
  push32((uint32_t)(EAX));
  /* 115e2f02 call dword ptr [0x115e5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5054))), 0x115e2f08u);
L_115e2f08:;
  /* 115e2f08 pop esi */
  ESI = (pop32());
  /* 115e2f09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e2f0a ret  */
  ESPCHK(0x115e2db8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f0b @ 0x115e2f0b (41 bytes, 12 insns) */
void f_115e2f0b(void) {
  FTRACE(0x115e2f0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2f0b push esi */
  push32((uint32_t)(ESI));
  /* 115e2f0c mov esi, dword ptr [0x115e5044] */
  ESI = (r32((uint32_t)(0x115e5044)));
  /* 115e2f12 push dword ptr [0x115e65f4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65f4))));
  /* 115e2f18 call esi */
  call_ind((uint32_t)(ESI), 0x115e2f1au);
  /* 115e2f1a push dword ptr [0x115e65e4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65e4))));
  /* 115e2f20 call esi */
  call_ind((uint32_t)(ESI), 0x115e2f22u);
  /* 115e2f22 push dword ptr [0x115e65d4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65d4))));
  /* 115e2f28 call esi */
  call_ind((uint32_t)(ESI), 0x115e2f2au);
  /* 115e2f2a push dword ptr [0x115e65b4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65b4))));
  /* 115e2f30 call esi */
  call_ind((uint32_t)(ESI), 0x115e2f32u);
  /* 115e2f32 pop esi */
  ESI = (pop32());
  /* 115e2f33 ret  */
  ESPCHK(0x115e2f0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f34 @ 0x115e2f34 (108 bytes, 34 insns) */
void f_115e2f34(void) {
  FTRACE(0x115e2f34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2f34 push esi */
  push32((uint32_t)(ESI));
  /* 115e2f35 push edi */
  push32((uint32_t)(EDI));
  /* 115e2f36 mov edi, dword ptr [0x115e5074] */
  EDI = (r32((uint32_t)(0x115e5074)));
  /* 115e2f3c mov esi, 0x115e65b0 */
  ESI = (0x115e65b0u);
L_115e2f41:;
  /* 115e2f41 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115e2f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e2f45 je 0x115e2f72 */
  if (C.zf) goto L_115e2f72;
  /* 115e2f47 cmp esi, 0x115e65f4 */
  { uint32_t _a=(ESI),_b=(0x115e65f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2f4d je 0x115e2f72 */
  if (C.zf) goto L_115e2f72;
  /* 115e2f4f cmp esi, 0x115e65e4 */
  { uint32_t _a=(ESI),_b=(0x115e65e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2f55 je 0x115e2f72 */
  if (C.zf) goto L_115e2f72;
  /* 115e2f57 cmp esi, 0x115e65d4 */
  { uint32_t _a=(ESI),_b=(0x115e65d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2f5d je 0x115e2f72 */
  if (C.zf) goto L_115e2f72;
  /* 115e2f5f cmp esi, 0x115e65b4 */
  { uint32_t _a=(ESI),_b=(0x115e65b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2f65 je 0x115e2f72 */
  if (C.zf) goto L_115e2f72;
  /* 115e2f67 push eax */
  push32((uint32_t)(EAX));
  /* 115e2f68 call edi */
  call_ind((uint32_t)(EDI), 0x115e2f6au);
  /* 115e2f6a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e2f6c call 0x115e30a3 */
  push32(0x115e2f71u); f_115e30a3();
  /* 115e2f71 pop ecx */
  ECX = (pop32());
L_115e2f72:;
  /* 115e2f72 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e2f75 cmp esi, 0x115e6670 */
  { uint32_t _a=(ESI),_b=(0x115e6670u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2f7b jl 0x115e2f41 */
  if ((C.sf!=C.of)) goto L_115e2f41;
  /* 115e2f7d push dword ptr [0x115e65d4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65d4))));
  /* 115e2f83 call edi */
  call_ind((uint32_t)(EDI), 0x115e2f85u);
  /* 115e2f85 push dword ptr [0x115e65e4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65e4))));
  /* 115e2f8b call edi */
  call_ind((uint32_t)(EDI), 0x115e2f8du);
  /* 115e2f8d push dword ptr [0x115e65f4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65f4))));
  /* 115e2f93 call edi */
  call_ind((uint32_t)(EDI), 0x115e2f95u);
  /* 115e2f95 push dword ptr [0x115e65b4] */
  push32((uint32_t)(r32((uint32_t)(0x115e65b4))));
  /* 115e2f9b call edi */
  call_ind((uint32_t)(EDI), 0x115e2f9du);
  /* 115e2f9d pop edi */
  EDI = (pop32());
  /* 115e2f9e pop esi */
  ESI = (pop32());
  /* 115e2f9f ret  */
  ESPCHK(0x115e2f34u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa0 @ 0x115e2fa0 (97 bytes, 37 insns) */
void f_115e2fa0(void) {
  FTRACE(0x115e2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 115e2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 115e2fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e2fa6 push esi */
  push32((uint32_t)(ESI));
  /* 115e2fa7 cmp dword ptr [eax*4 + 0x115e65b0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x115e65b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2faf lea esi, [eax*4 + 0x115e65b0] */
  ESI = ((uint32_t)(EAX*4 + 0x115e65b0));
  /* 115e2fb6 jne 0x115e2ff6 */
  if (!C.zf) goto L_115e2ff6;
  /* 115e2fb8 push edi */
  push32((uint32_t)(EDI));
  /* 115e2fb9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115e2fbb call 0x115e30eb */
  push32(0x115e2fc0u); f_115e30eb();
  /* 115e2fc0 mov edi, eax */
  EDI = (EAX);
  /* 115e2fc2 pop ecx */
  ECX = (pop32());
  /* 115e2fc3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e2fc5 jne 0x115e2fcf */
  if (!C.zf) goto L_115e2fcf;
  /* 115e2fc7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115e2fc9 call 0x115e2410 */
  push32(0x115e2fceu); f_115e2410();
  /* 115e2fce pop ecx */
  ECX = (pop32());
L_115e2fcf:;
  /* 115e2fcf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115e2fd1 call 0x115e2fa0 */
  push32(0x115e2fd6u); f_115e2fa0();
  /* 115e2fd6 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e2fd9 pop ecx */
  ECX = (pop32());
  /* 115e2fda push edi */
  push32((uint32_t)(EDI));
  /* 115e2fdb jne 0x115e2fe7 */
  if (!C.zf) goto L_115e2fe7;
  /* 115e2fdd call dword ptr [0x115e5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5044))), 0x115e2fe3u);
  /* 115e2fe3 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115e2fe5 jmp 0x115e2fed */
  goto L_115e2fed;
L_115e2fe7:;
  /* 115e2fe7 call 0x115e30a3 */
  push32(0x115e2fecu); f_115e30a3();
  /* 115e2fec pop ecx */
  ECX = (pop32());
L_115e2fed:;
  /* 115e2fed push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115e2fef call 0x115e3001 */
  push32(0x115e2ff4u); f_115e3001();
  /* 115e2ff4 pop ecx */
  ECX = (pop32());
  /* 115e2ff5 pop edi */
  EDI = (pop32());
L_115e2ff6:;
  /* 115e2ff6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115e2ff8 call dword ptr [0x115e5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5040))), 0x115e2ffeu);
  /* 115e2ffe pop esi */
  ESI = (pop32());
  /* 115e2fff pop ebp */
  EBP = (pop32());
  /* 115e3000 ret  */
  ESPCHK(0x115e2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003001 @ 0x115e3001 (21 bytes, 7 insns) */
void f_115e3001(void) {
  FTRACE(0x115e3001u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3001 push ebp */
  push32((uint32_t)(EBP));
  /* 115e3002 mov ebp, esp */
  EBP = (ESP);
  /* 115e3004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3007 push dword ptr [eax*4 + 0x115e65b0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x115e65b0))));
  /* 115e300e call dword ptr [0x115e5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5048))), 0x115e3014u);
  /* 115e3014 pop ebp */
  EBP = (pop32());
  /* 115e3015 ret  */
  ESPCHK(0x115e3001u, _esp0);
  ESP += 4; return;
}

/* FUN_10003016 @ 0x115e3016 (141 bytes, 56 insns) */
void f_115e3016(void) {
  FTRACE(0x115e3016u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3016 push ebx */
  push32((uint32_t)(EBX));
  /* 115e3017 push esi */
  push32((uint32_t)(ESI));
  /* 115e3018 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 115e301c push edi */
  push32((uint32_t)(EDI));
  /* 115e301d imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e3022 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3025 mov ebx, esi */
  EBX = (ESI);
  /* 115e3027 ja 0x115e3036 */
  if ((!C.cf&&!C.zf)) goto L_115e3036;
  /* 115e3029 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e302b jne 0x115e3030 */
  if (!C.zf) goto L_115e3030;
  /* 115e302d push 1 */
  push32((uint32_t)(0x1u));
  /* 115e302f pop esi */
  ESI = (pop32());
L_115e3030:;
  /* 115e3030 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3033 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_115e3036:;
  /* 115e3036 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e3038 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e303b ja 0x115e3077 */
  if ((!C.cf&&!C.zf)) goto L_115e3077;
  /* 115e303d cmp ebx, dword ptr [0x115e6800] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115e6800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3043 ja 0x115e3062 */
  if ((!C.cf&&!C.zf)) goto L_115e3062;
  /* 115e3045 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e3047 call 0x115e2fa0 */
  push32(0x115e304cu); f_115e2fa0();
  /* 115e304c push ebx */
  push32((uint32_t)(EBX));
  /* 115e304d call 0x115e3da9 */
  push32(0x115e3052u); f_115e3da9();
  /* 115e3052 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e3054 mov edi, eax */
  EDI = (EAX);
  /* 115e3056 call 0x115e3001 */
  push32(0x115e305bu); f_115e3001();
  /* 115e305b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e305e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e3060 jne 0x115e308d */
  if (!C.zf) goto L_115e308d;
L_115e3062:;
  /* 115e3062 push esi */
  push32((uint32_t)(ESI));
  /* 115e3063 push 8 */
  push32((uint32_t)(0x8u));
  /* 115e3065 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e306b call dword ptr [0x115e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e503c))), 0x115e3071u);
  /* 115e3071 mov edi, eax */
  EDI = (EAX);
  /* 115e3073 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e3075 jne 0x115e3099 */
  if (!C.zf) goto L_115e3099;
L_115e3077:;
  /* 115e3077 cmp dword ptr [0x115e6b8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115e6b8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e307e je 0x115e3099 */
  if (C.zf) goto L_115e3099;
  /* 115e3080 push esi */
  push32((uint32_t)(ESI));
  /* 115e3081 call 0x115e4448 */
  push32(0x115e3086u); f_115e4448();
  /* 115e3086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e3088 pop ecx */
  ECX = (pop32());
  /* 115e3089 je 0x115e309f */
  if (C.zf) goto L_115e309f;
  /* 115e308b jmp 0x115e3036 */
  goto L_115e3036;
L_115e308d:;
  /* 115e308d push ebx */
  push32((uint32_t)(EBX));
  /* 115e308e push 0 */
  push32((uint32_t)(0x0u));
  /* 115e3090 push edi */
  push32((uint32_t)(EDI));
  /* 115e3091 call 0x115e43f0 */
  push32(0x115e3096u); f_115e43f0();
  /* 115e3096 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115e3099:;
  /* 115e3099 mov eax, edi */
  EAX = (EDI);
L_115e309b:;
  /* 115e309b pop edi */
  EDI = (pop32());
  /* 115e309c pop esi */
  ESI = (pop32());
  /* 115e309d pop ebx */
  EBX = (pop32());
  /* 115e309e ret  */
  ESPCHK(0x115e3016u, _esp0);
  ESP += 4; return;
L_115e309f:;
  /* 115e309f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e30a1 jmp 0x115e309b */
  goto L_115e309b;
}

/* FUN_100030a3 @ 0x115e30a3 (72 bytes, 29 insns) */
void f_115e30a3(void) {
  FTRACE(0x115e30a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e30a3 push esi */
  push32((uint32_t)(ESI));
  /* 115e30a4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115e30a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e30aa je 0x115e30e9 */
  if (C.zf) goto L_115e30e9;
  /* 115e30ac push 9 */
  push32((uint32_t)(0x9u));
  /* 115e30ae call 0x115e2fa0 */
  push32(0x115e30b3u); f_115e2fa0();
  /* 115e30b3 push esi */
  push32((uint32_t)(ESI));
  /* 115e30b4 call 0x115e3a53 */
  push32(0x115e30b9u); f_115e3a53();
  /* 115e30b9 pop ecx */
  ECX = (pop32());
  /* 115e30ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e30bc pop ecx */
  ECX = (pop32());
  /* 115e30bd je 0x115e30d2 */
  if (C.zf) goto L_115e30d2;
  /* 115e30bf push esi */
  push32((uint32_t)(ESI));
  /* 115e30c0 push eax */
  push32((uint32_t)(EAX));
  /* 115e30c1 call 0x115e3a7e */
  push32(0x115e30c6u); f_115e3a7e();
  /* 115e30c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e30c8 call 0x115e3001 */
  push32(0x115e30cdu); f_115e3001();
  /* 115e30cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e30d0 pop esi */
  ESI = (pop32());
  /* 115e30d1 ret  */
  ESPCHK(0x115e30a3u, _esp0);
  ESP += 4; return;
L_115e30d2:;
  /* 115e30d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e30d4 call 0x115e3001 */
  push32(0x115e30d9u); f_115e3001();
  /* 115e30d9 pop ecx */
  ECX = (pop32());
  /* 115e30da push esi */
  push32((uint32_t)(ESI));
  /* 115e30db push 0 */
  push32((uint32_t)(0x0u));
  /* 115e30dd push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e30e3 call dword ptr [0x115e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e504c))), 0x115e30e9u);
L_115e30e9:;
  /* 115e30e9 pop esi */
  ESI = (pop32());
  /* 115e30ea ret  */
  ESPCHK(0x115e30a3u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x115e30eb (18 bytes, 6 insns) */
void f_115e30eb(void) {
  FTRACE(0x115e30ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e30eb push dword ptr [0x115e6b8c] */
  push32((uint32_t)(r32((uint32_t)(0x115e6b8c))));
  /* 115e30f1 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115e30f5 call 0x115e30fd */
  push32(0x115e30fau); f_115e30fd();
  /* 115e30fa pop ecx */
  ECX = (pop32());
  /* 115e30fb pop ecx */
  ECX = (pop32());
  /* 115e30fc ret  */
  ESPCHK(0x115e30ebu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x115e30fd (44 bytes, 16 insns) */
void f_115e30fd(void) {
  FTRACE(0x115e30fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e30fd cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3102 ja 0x115e3126 */
  if ((!C.cf&&!C.zf)) goto L_115e3126;
L_115e3104:;
  /* 115e3104 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115e3108 call 0x115e3129 */
  push32(0x115e310du); f_115e3129();
  /* 115e310d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e310f pop ecx */
  ECX = (pop32());
  /* 115e3110 jne 0x115e3128 */
  if (!C.zf) goto L_115e3128;
  /* 115e3112 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3116 je 0x115e3128 */
  if (C.zf) goto L_115e3128;
  /* 115e3118 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115e311c call 0x115e4448 */
  push32(0x115e3121u); f_115e4448();
  /* 115e3121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e3123 pop ecx */
  ECX = (pop32());
  /* 115e3124 jne 0x115e3104 */
  if (!C.zf) goto L_115e3104;
L_115e3126:;
  /* 115e3126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115e3128:;
  /* 115e3128 ret  */
  ESPCHK(0x115e30fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10003129 @ 0x115e3129 (78 bytes, 30 insns) */
void f_115e3129(void) {
  FTRACE(0x115e3129u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3129 push esi */
  push32((uint32_t)(ESI));
  /* 115e312a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115e312e cmp esi, dword ptr [0x115e6800] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x115e6800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3134 push edi */
  push32((uint32_t)(EDI));
  /* 115e3135 ja 0x115e3158 */
  if ((!C.cf&&!C.zf)) goto L_115e3158;
  /* 115e3137 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e3139 call 0x115e2fa0 */
  push32(0x115e313eu); f_115e2fa0();
  /* 115e313e push esi */
  push32((uint32_t)(ESI));
  /* 115e313f call 0x115e3da9 */
  push32(0x115e3144u); f_115e3da9();
  /* 115e3144 push 9 */
  push32((uint32_t)(0x9u));
  /* 115e3146 mov edi, eax */
  EDI = (EAX);
  /* 115e3148 call 0x115e3001 */
  push32(0x115e314du); f_115e3001();
  /* 115e314d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3150 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115e3152 je 0x115e3158 */
  if (C.zf) goto L_115e3158;
  /* 115e3154 mov eax, edi */
  EAX = (EDI);
  /* 115e3156 jmp 0x115e3174 */
  goto L_115e3174;
L_115e3158:;
  /* 115e3158 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e315a jne 0x115e315f */
  if (!C.zf) goto L_115e315f;
  /* 115e315c push 1 */
  push32((uint32_t)(0x1u));
  /* 115e315e pop esi */
  ESI = (pop32());
L_115e315f:;
  /* 115e315f add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3162 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 115e3165 push esi */
  push32((uint32_t)(ESI));
  /* 115e3166 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e3168 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e316e call dword ptr [0x115e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e503c))), 0x115e3174u);
L_115e3174:;
  /* 115e3174 pop edi */
  EDI = (pop32());
  /* 115e3175 pop esi */
  ESI = (pop32());
  /* 115e3176 ret  */
  ESPCHK(0x115e3129u, _esp0);
  ESP += 4; return;
}

/* FUN_10003180 @ 0x115e3180 (7 bytes, 3 insns) */
void f_115e3180(void) {
  FTRACE(0x115e3180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3180 push edi */
  push32((uint32_t)(EDI));
  /* 115e3181 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 115e3185 jmp 0x115e31f1 */
  jmp_ind(0x115e31f1u); return;
}

/* FUN_10003190 @ 0x115e3190 (224 bytes, 84 insns) */
void f_115e3190(void) {
  FTRACE(0x115e3190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3190 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e3194 push edi */
  push32((uint32_t)(EDI));
  /* 115e3195 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115e319b je 0x115e31ac */
  if (C.zf) goto L_115e31ac;
L_115e319d:;
  /* 115e319d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115e319f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e31a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e31a2 je 0x115e31df */
  if (C.zf) goto L_115e31df;
  /* 115e31a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115e31aa jne 0x115e319d */
  if (!C.zf) goto L_115e319d;
L_115e31ac:;
  /* 115e31ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115e31ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115e31b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e31b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e31b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115e31ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e31bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115e31c2 je 0x115e31ac */
  if (C.zf) goto L_115e31ac;
  /* 115e31c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115e31c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e31c9 je 0x115e31ee */
  if (C.zf) goto L_115e31ee;
  /* 115e31cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115e31cd je 0x115e31e9 */
  if (C.zf) goto L_115e31e9;
  /* 115e31cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 115e31d4 je 0x115e31e4 */
  if (C.zf) goto L_115e31e4;
  /* 115e31d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 115e31db je 0x115e31df */
  if (C.zf) goto L_115e31df;
  /* 115e31dd jmp 0x115e31ac */
  goto L_115e31ac;
L_115e31df:;
  /* 115e31df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 115e31e2 jmp 0x115e31f1 */
  goto L_115e31f1;
L_115e31e4:;
  /* 115e31e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 115e31e7 jmp 0x115e31f1 */
  goto L_115e31f1;
L_115e31e9:;
  /* 115e31e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 115e31ec jmp 0x115e31f1 */
  goto L_115e31f1;
L_115e31ee:;
  /* 115e31ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_115e31f1:;
  /* 115e31f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115e31f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115e31fb je 0x115e3216 */
  if (C.zf) goto L_115e3216;
L_115e31fd:;
  /* 115e31fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115e31ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e3200 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e3202 je 0x115e3268 */
  if (C.zf) goto L_115e3268;
  /* 115e3204 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 115e3206 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e3207 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115e320d jne 0x115e31fd */
  if (!C.zf) goto L_115e31fd;
  /* 115e320f jmp 0x115e3216 */
  goto L_115e3216;
L_115e3211:;
  /* 115e3211 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115e3213 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115e3216:;
  /* 115e3216 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115e321b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115e321d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e321f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e3222 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3224 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115e3226 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3229 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115e322e je 0x115e3211 */
  if (C.zf) goto L_115e3211;
  /* 115e3230 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e3232 je 0x115e3268 */
  if (C.zf) goto L_115e3268;
  /* 115e3234 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 115e3236 je 0x115e325f */
  if (C.zf) goto L_115e325f;
  /* 115e3238 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 115e323e je 0x115e3252 */
  if (C.zf) goto L_115e3252;
  /* 115e3240 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 115e3246 je 0x115e324a */
  if (C.zf) goto L_115e324a;
  /* 115e3248 jmp 0x115e3211 */
  goto L_115e3211;
L_115e324a:;
  /* 115e324a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115e324c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e3250 pop edi */
  EDI = (pop32());
  /* 115e3251 ret  */
  ESPCHK(0x115e3190u, _esp0);
  ESP += 4; return;
L_115e3252:;
  /* 115e3252 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 115e3255 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e3259 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 115e325d pop edi */
  EDI = (pop32());
  /* 115e325e ret  */
  ESPCHK(0x115e3190u, _esp0);
  ESP += 4; return;
L_115e325f:;
  /* 115e325f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 115e3262 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e3266 pop edi */
  EDI = (pop32());
  /* 115e3267 ret  */
  ESPCHK(0x115e3190u, _esp0);
  ESP += 4; return;
L_115e3268:;
  /* 115e3268 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 115e326a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e326e pop edi */
  EDI = (pop32());
  /* 115e326f ret  */
  ESPCHK(0x115e3190u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x115e3270 (123 bytes, 44 insns) */
void f_115e3270(void) {
  FTRACE(0x115e3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3270 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e3274 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115e327a je 0x115e3290 */
  if (C.zf) goto L_115e3290;
L_115e327c:;
  /* 115e327c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115e327e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e327f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e3281 je 0x115e32c3 */
  if (C.zf) goto L_115e32c3;
  /* 115e3283 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115e3289 jne 0x115e327c */
  if (!C.zf) goto L_115e327c;
  /* 115e328b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115e3290:;
  /* 115e3290 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115e3292 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115e3297 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3299 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e329c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115e329e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e32a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115e32a6 je 0x115e3290 */
  if (C.zf) goto L_115e3290;
  /* 115e32a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115e32ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e32ad je 0x115e32e1 */
  if (C.zf) goto L_115e32e1;
  /* 115e32af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115e32b1 je 0x115e32d7 */
  if (C.zf) goto L_115e32d7;
  /* 115e32b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 115e32b8 je 0x115e32cd */
  if (C.zf) goto L_115e32cd;
  /* 115e32ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 115e32bf je 0x115e32c3 */
  if (C.zf) goto L_115e32c3;
  /* 115e32c1 jmp 0x115e3290 */
  goto L_115e3290;
L_115e32c3:;
  /* 115e32c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 115e32c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e32ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e32cc ret  */
  ESPCHK(0x115e3270u, _esp0);
  ESP += 4; return;
L_115e32cd:;
  /* 115e32cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 115e32d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e32d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e32d6 ret  */
  ESPCHK(0x115e3270u, _esp0);
  ESP += 4; return;
L_115e32d7:;
  /* 115e32d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 115e32da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e32de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e32e0 ret  */
  ESPCHK(0x115e3270u, _esp0);
  ESP += 4; return;
L_115e32e1:;
  /* 115e32e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 115e32e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e32e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e32ea ret  */
  ESPCHK(0x115e3270u, _esp0);
  ESP += 4; return;
}

/* FUN_100032eb @ 0x115e32eb (429 bytes, 143 insns) */
void f_115e32eb(void) {
  FTRACE(0x115e32ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e32eb push ebp */
  push32((uint32_t)(EBP));
  /* 115e32ec mov ebp, esp */
  EBP = (ESP);
  /* 115e32ee sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e32f1 push ebx */
  push32((uint32_t)(EBX));
  /* 115e32f2 push esi */
  push32((uint32_t)(ESI));
  /* 115e32f3 push edi */
  push32((uint32_t)(EDI));
  /* 115e32f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115e32f6 call 0x115e2fa0 */
  push32(0x115e32fbu); f_115e2fa0();
  /* 115e32fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e32fe call 0x115e3498 */
  push32(0x115e3303u); f_115e3498();
  /* 115e3303 mov ebx, eax */
  EBX = (EAX);
  /* 115e3305 pop ecx */
  ECX = (pop32());
  /* 115e3306 cmp ebx, dword ptr [0x115e6bd0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115e6bd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e330c pop ecx */
  ECX = (pop32());
  /* 115e330d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3310 jne 0x115e3319 */
  if (!C.zf) goto L_115e3319;
L_115e3312:;
  /* 115e3312 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115e3314 jmp 0x115e3489 */
  goto L_115e3489;
L_115e3319:;
  /* 115e3319 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115e331b je 0x115e3477 */
  if (C.zf) goto L_115e3477;
  /* 115e3321 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115e3323 mov eax, 0x115e6708 */
  EAX = (0x115e6708u);
L_115e3328:;
  /* 115e3328 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e332a je 0x115e33a0 */
  if (C.zf) goto L_115e33a0;
  /* 115e332c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e332f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115e3330 cmp eax, 0x115e67f8 */
  { uint32_t _a=(EAX),_b=(0x115e67f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3335 jl 0x115e3328 */
  if ((C.sf!=C.of)) goto L_115e3328;
  /* 115e3337 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 115e333a push eax */
  push32((uint32_t)(EAX));
  /* 115e333b push ebx */
  push32((uint32_t)(EBX));
  /* 115e333c call dword ptr [0x115e5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5034))), 0x115e3342u);
  /* 115e3342 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e3344 pop esi */
  ESI = (pop32());
  /* 115e3345 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3347 jne 0x115e346e */
  if (!C.zf) goto L_115e346e;
  /* 115e334d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115e334f and dword ptr [0x115e6e04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115e6e04)))&(0x0u); w32((uint32_t)(0x115e6e04), (_r)); fl_logic(_r,32); }
  /* 115e3356 pop ecx */
  ECX = (pop32());
  /* 115e3357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3359 mov edi, 0x115e6d00 */
  EDI = (0x115e6d00u);
  /* 115e335e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3361 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115e3363 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115e3364 mov dword ptr [0x115e6bd0], ebx */
  w32((uint32_t)(0x115e6bd0), (EBX));
  /* 115e336a jbe 0x115e345b */
  if ((C.cf||C.zf)) goto L_115e345b;
  /* 115e3370 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e3374 je 0x115e3436 */
  if (C.zf) goto L_115e3436;
  /* 115e337a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_115e337d:;
  /* 115e337d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115e337f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e3381 je 0x115e3436 */
  if (C.zf) goto L_115e3436;
  /* 115e3387 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 115e338b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_115e338e:;
  /* 115e338e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3390 ja 0x115e342a */
  if ((!C.cf&&!C.zf)) goto L_115e342a;
  /* 115e3396 or byte ptr [eax + 0x115e6d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(0x4u); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e339d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e339e jmp 0x115e338e */
  goto L_115e338e;
L_115e33a0:;
  /* 115e33a0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e33a4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115e33a6 pop ecx */
  ECX = (pop32());
  /* 115e33a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e33a9 mov edi, 0x115e6d00 */
  EDI = (0x115e6d00u);
  /* 115e33ae lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 115e33b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115e33b3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 115e33b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115e33b7 lea ebx, [esi + 0x115e6718] */
  EBX = ((uint32_t)(ESI + 0x115e6718));
L_115e33bd:;
  /* 115e33bd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e33c0 mov ecx, ebx */
  ECX = (EBX);
  /* 115e33c2 je 0x115e33f0 */
  if (C.zf) goto L_115e33f0;
L_115e33c4:;
  /* 115e33c4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 115e33c7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e33c9 je 0x115e33f0 */
  if (C.zf) goto L_115e33f0;
  /* 115e33cb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 115e33ce movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 115e33d1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e33d3 ja 0x115e33e9 */
  if ((!C.cf&&!C.zf)) goto L_115e33e9;
  /* 115e33d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e33d8 mov dl, byte ptr [edx + 0x115e6700] */
  DL = (r8((uint32_t)(EDX + 0x115e6700)));
L_115e33de:;
  /* 115e33de or byte ptr [eax + 0x115e6d01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(DL); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e33e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e33e5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e33e7 jbe 0x115e33de */
  if ((C.cf||C.zf)) goto L_115e33de;
L_115e33e9:;
  /* 115e33e9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e33ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e33eb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e33ee jne 0x115e33c4 */
  if (!C.zf) goto L_115e33c4;
L_115e33f0:;
  /* 115e33f0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 115e33f3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e33f6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e33fa jb 0x115e33bd */
  if (C.cf) goto L_115e33bd;
  /* 115e33fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e33ff mov dword ptr [0x115e6bec], 1 */
  w32((uint32_t)(0x115e6bec), (0x1u));
  /* 115e3409 push eax */
  push32((uint32_t)(EAX));
  /* 115e340a mov dword ptr [0x115e6bd0], eax */
  w32((uint32_t)(0x115e6bd0), (EAX));
  /* 115e340f call 0x115e34e2 */
  push32(0x115e3414u); f_115e34e2();
  /* 115e3414 lea esi, [esi + 0x115e670c] */
  ESI = ((uint32_t)(ESI + 0x115e670c));
  /* 115e341a mov edi, 0x115e6be0 */
  EDI = (0x115e6be0u);
  /* 115e341f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 115e3420 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 115e3421 pop ecx */
  ECX = (pop32());
  /* 115e3422 mov dword ptr [0x115e6e04], eax */
  w32((uint32_t)(0x115e6e04), (EAX));
  /* 115e3427 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 115e3428 jmp 0x115e347c */
  goto L_115e347c;
L_115e342a:;
  /* 115e342a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e342b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e342c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e3430 jne 0x115e337d */
  if (!C.zf) goto L_115e337d;
L_115e3436:;
  /* 115e3436 mov eax, esi */
  EAX = (ESI);
L_115e3438:;
  /* 115e3438 or byte ptr [eax + 0x115e6d01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(0x8u); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e343f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e3440 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3445 jb 0x115e3438 */
  if (C.cf) goto L_115e3438;
  /* 115e3447 push ebx */
  push32((uint32_t)(EBX));
  /* 115e3448 call 0x115e34e2 */
  push32(0x115e344du); f_115e34e2();
  /* 115e344d pop ecx */
  ECX = (pop32());
  /* 115e344e mov dword ptr [0x115e6e04], eax */
  w32((uint32_t)(0x115e6e04), (EAX));
  /* 115e3453 mov dword ptr [0x115e6bec], esi */
  w32((uint32_t)(0x115e6bec), (ESI));
  /* 115e3459 jmp 0x115e3462 */
  goto L_115e3462;
L_115e345b:;
  /* 115e345b and dword ptr [0x115e6bec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115e6bec)))&(0x0u); w32((uint32_t)(0x115e6bec), (_r)); fl_logic(_r,32); }
L_115e3462:;
  /* 115e3462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3464 mov edi, 0x115e6be0 */
  EDI = (0x115e6be0u);
  /* 115e3469 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115e346a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115e346b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115e346c jmp 0x115e347c */
  goto L_115e347c;
L_115e346e:;
  /* 115e346e cmp dword ptr [0x115e6b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115e6b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3475 je 0x115e3486 */
  if (C.zf) goto L_115e3486;
L_115e3477:;
  /* 115e3477 call 0x115e3515 */
  push32(0x115e347cu); f_115e3515();
L_115e347c:;
  /* 115e347c call 0x115e353e */
  push32(0x115e3481u); f_115e353e();
  /* 115e3481 jmp 0x115e3312 */
  goto L_115e3312;
L_115e3486:;
  /* 115e3486 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_115e3489:;
  /* 115e3489 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115e348b call 0x115e3001 */
  push32(0x115e3490u); f_115e3001();
  /* 115e3490 pop ecx */
  ECX = (pop32());
  /* 115e3491 mov eax, esi */
  EAX = (ESI);
  /* 115e3493 pop edi */
  EDI = (pop32());
  /* 115e3494 pop esi */
  ESI = (pop32());
  /* 115e3495 pop ebx */
  EBX = (pop32());
  /* 115e3496 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e3497 ret  */
  ESPCHK(0x115e32ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10003498 @ 0x115e3498 (74 bytes, 15 insns) */
void f_115e3498(void) {
  FTRACE(0x115e3498u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3498 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e349c and dword ptr [0x115e6b78], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115e6b78)))&(0x0u); w32((uint32_t)(0x115e6b78), (_r)); fl_logic(_r,32); }
  /* 115e34a3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e34a6 jne 0x115e34b8 */
  if (!C.zf) goto L_115e34b8;
  /* 115e34a8 mov dword ptr [0x115e6b78], 1 */
  w32((uint32_t)(0x115e6b78), (0x1u));
  /* 115e34b2 jmp dword ptr [0x115e5038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115e5038)))); return;
L_115e34b8:;
  /* 115e34b8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e34bb jne 0x115e34cd */
  if (!C.zf) goto L_115e34cd;
  /* 115e34bd mov dword ptr [0x115e6b78], 1 */
  w32((uint32_t)(0x115e6b78), (0x1u));
  /* 115e34c7 jmp dword ptr [0x115e5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115e5030)))); return;
L_115e34cd:;
  /* 115e34cd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e34d0 jne 0x115e34e1 */
  if (!C.zf) goto L_115e34e1;
  /* 115e34d2 mov eax, dword ptr [0x115e6ba8] */
  EAX = (r32((uint32_t)(0x115e6ba8)));
  /* 115e34d7 mov dword ptr [0x115e6b78], 1 */
  w32((uint32_t)(0x115e6b78), (0x1u));
L_115e34e1:;
  /* 115e34e1 ret  */
  ESPCHK(0x115e3498u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e2 @ 0x115e34e2 (51 bytes, 19 insns) */
void f_115e34e2(void) {
  FTRACE(0x115e34e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e34e2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e34e6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e34eb je 0x115e350f */
  if (C.zf) goto L_115e350f;
  /* 115e34ed sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e34f0 je 0x115e3509 */
  if (C.zf) goto L_115e3509;
  /* 115e34f2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e34f5 je 0x115e3503 */
  if (C.zf) goto L_115e3503;
  /* 115e34f7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115e34f8 je 0x115e34fd */
  if (C.zf) goto L_115e34fd;
  /* 115e34fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e34fc ret  */
  ESPCHK(0x115e34e2u, _esp0);
  ESP += 4; return;
L_115e34fd:;
  /* 115e34fd mov eax, 0x404 */
  EAX = (0x404u);
  /* 115e3502 ret  */
  ESPCHK(0x115e34e2u, _esp0);
  ESP += 4; return;
L_115e3503:;
  /* 115e3503 mov eax, 0x412 */
  EAX = (0x412u);
  /* 115e3508 ret  */
  ESPCHK(0x115e34e2u, _esp0);
  ESP += 4; return;
L_115e3509:;
  /* 115e3509 mov eax, 0x804 */
  EAX = (0x804u);
  /* 115e350e ret  */
  ESPCHK(0x115e34e2u, _esp0);
  ESP += 4; return;
L_115e350f:;
  /* 115e350f mov eax, 0x411 */
  EAX = (0x411u);
  /* 115e3514 ret  */
  ESPCHK(0x115e34e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003515 @ 0x115e3515 (41 bytes, 17 insns) */
void f_115e3515(void) {
  FTRACE(0x115e3515u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3515 push edi */
  push32((uint32_t)(EDI));
  /* 115e3516 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115e3518 pop ecx */
  ECX = (pop32());
  /* 115e3519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e351b mov edi, 0x115e6d00 */
  EDI = (0x115e6d00u);
  /* 115e3520 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115e3522 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115e3523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3525 mov edi, 0x115e6be0 */
  EDI = (0x115e6be0u);
  /* 115e352a mov dword ptr [0x115e6bd0], eax */
  w32((uint32_t)(0x115e6bd0), (EAX));
  /* 115e352f mov dword ptr [0x115e6bec], eax */
  w32((uint32_t)(0x115e6bec), (EAX));
  /* 115e3534 mov dword ptr [0x115e6e04], eax */
  w32((uint32_t)(0x115e6e04), (EAX));
  /* 115e3539 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115e353a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115e353b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115e353c pop edi */
  EDI = (pop32());
  /* 115e353d ret  */
  ESPCHK(0x115e3515u, _esp0);
  ESP += 4; return;
}

/* FUN_1000353e @ 0x115e353e (389 bytes, 124 insns) */
void f_115e353e(void) {
  FTRACE(0x115e353eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e353e push ebp */
  push32((uint32_t)(EBP));
  /* 115e353f mov ebp, esp */
  EBP = (ESP);
  /* 115e3541 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3547 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 115e354a push esi */
  push32((uint32_t)(ESI));
  /* 115e354b push eax */
  push32((uint32_t)(EAX));
  /* 115e354c push dword ptr [0x115e6bd0] */
  push32((uint32_t)(r32((uint32_t)(0x115e6bd0))));
  /* 115e3552 call dword ptr [0x115e5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5034))), 0x115e3558u);
  /* 115e3558 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e355b jne 0x115e3677 */
  if (!C.zf) goto L_115e3677;
  /* 115e3561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3563 mov esi, 0x100 */
  ESI = (0x100u);
L_115e3568:;
  /* 115e3568 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 115e356f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e3570 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3572 jb 0x115e3568 */
  if (C.cf) goto L_115e3568;
  /* 115e3574 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 115e3577 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 115e357e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e3580 je 0x115e35b9 */
  if (C.zf) goto L_115e35b9;
  /* 115e3582 push ebx */
  push32((uint32_t)(EBX));
  /* 115e3583 push edi */
  push32((uint32_t)(EDI));
  /* 115e3584 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_115e3587:;
  /* 115e3587 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 115e358a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 115e358d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e358f ja 0x115e35ae */
  if ((!C.cf&&!C.zf)) goto L_115e35ae;
  /* 115e3591 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3593 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 115e359a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e359b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 115e35a0 mov ebx, ecx */
  EBX = (ECX);
  /* 115e35a2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e35a5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115e35a7 mov ecx, ebx */
  ECX = (EBX);
  /* 115e35a9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 115e35ac rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_115e35ae:;
  /* 115e35ae inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115e35af inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115e35b0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 115e35b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e35b5 jne 0x115e3587 */
  if (!C.zf) goto L_115e3587;
  /* 115e35b7 pop edi */
  EDI = (pop32());
  /* 115e35b8 pop ebx */
  EBX = (pop32());
L_115e35b9:;
  /* 115e35b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e35bb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 115e35c1 push dword ptr [0x115e6e04] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e04))));
  /* 115e35c7 push dword ptr [0x115e6bd0] */
  push32((uint32_t)(r32((uint32_t)(0x115e6bd0))));
  /* 115e35cd push eax */
  push32((uint32_t)(EAX));
  /* 115e35ce lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 115e35d4 push esi */
  push32((uint32_t)(ESI));
  /* 115e35d5 push eax */
  push32((uint32_t)(EAX));
  /* 115e35d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e35d8 call 0x115e46b2 */
  push32(0x115e35ddu); f_115e46b2();
  /* 115e35dd push 0 */
  push32((uint32_t)(0x0u));
  /* 115e35df lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 115e35e5 push dword ptr [0x115e6bd0] */
  push32((uint32_t)(r32((uint32_t)(0x115e6bd0))));
  /* 115e35eb push esi */
  push32((uint32_t)(ESI));
  /* 115e35ec push eax */
  push32((uint32_t)(EAX));
  /* 115e35ed lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 115e35f3 push esi */
  push32((uint32_t)(ESI));
  /* 115e35f4 push eax */
  push32((uint32_t)(EAX));
  /* 115e35f5 push esi */
  push32((uint32_t)(ESI));
  /* 115e35f6 push dword ptr [0x115e6e04] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e04))));
  /* 115e35fc call 0x115e4463 */
  push32(0x115e3601u); f_115e4463();
  /* 115e3601 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e3603 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 115e3609 push dword ptr [0x115e6bd0] */
  push32((uint32_t)(r32((uint32_t)(0x115e6bd0))));
  /* 115e360f push esi */
  push32((uint32_t)(ESI));
  /* 115e3610 push eax */
  push32((uint32_t)(EAX));
  /* 115e3611 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 115e3617 push esi */
  push32((uint32_t)(ESI));
  /* 115e3618 push eax */
  push32((uint32_t)(EAX));
  /* 115e3619 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 115e361e push dword ptr [0x115e6e04] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e04))));
  /* 115e3624 call 0x115e4463 */
  push32(0x115e3629u); f_115e4463();
  /* 115e3629 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e362c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e362e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_115e3634:;
  /* 115e3634 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115e3637 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 115e363a je 0x115e3652 */
  if (C.zf) goto L_115e3652;
  /* 115e363c or byte ptr [eax + 0x115e6d01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(0x10u); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e3643 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_115e364a:;
  /* 115e364a mov byte ptr [eax + 0x115e6c00], dl */
  w8((uint32_t)(EAX + 0x115e6c00), (DL));
  /* 115e3650 jmp 0x115e366e */
  goto L_115e366e;
L_115e3652:;
  /* 115e3652 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 115e3655 je 0x115e3667 */
  if (C.zf) goto L_115e3667;
  /* 115e3657 or byte ptr [eax + 0x115e6d01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(0x20u); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e365e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 115e3665 jmp 0x115e364a */
  goto L_115e364a;
L_115e3667:;
  /* 115e3667 and byte ptr [eax + 0x115e6c00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6c00)))&(0x0u); w8((uint32_t)(EAX + 0x115e6c00), (_r)); fl_logic(_r,8); }
L_115e366e:;
  /* 115e366e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e366f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e3670 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115e3671 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3673 jb 0x115e3634 */
  if (C.cf) goto L_115e3634;
  /* 115e3675 jmp 0x115e36c0 */
  goto L_115e36c0;
L_115e3677:;
  /* 115e3677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3679 mov esi, 0x100 */
  ESI = (0x100u);
L_115e367e:;
  /* 115e367e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3681 jb 0x115e369c */
  if (C.cf) goto L_115e369c;
  /* 115e3683 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3686 ja 0x115e369c */
  if ((!C.cf&&!C.zf)) goto L_115e369c;
  /* 115e3688 or byte ptr [eax + 0x115e6d01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(0x10u); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e368f mov cl, al */
  CL = (AL);
  /* 115e3691 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_115e3694:;
  /* 115e3694 mov byte ptr [eax + 0x115e6c00], cl */
  w8((uint32_t)(EAX + 0x115e6c00), (CL));
  /* 115e369a jmp 0x115e36bb */
  goto L_115e36bb;
L_115e369c:;
  /* 115e369c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e369f jb 0x115e36b4 */
  if (C.cf) goto L_115e36b4;
  /* 115e36a1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e36a4 ja 0x115e36b4 */
  if ((!C.cf&&!C.zf)) goto L_115e36b4;
  /* 115e36a6 or byte ptr [eax + 0x115e6d01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6d01)))|(0x20u); w8((uint32_t)(EAX + 0x115e6d01), (_r)); fl_logic(_r,8); }
  /* 115e36ad mov cl, al */
  CL = (AL);
  /* 115e36af sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115e36b2 jmp 0x115e3694 */
  goto L_115e3694;
L_115e36b4:;
  /* 115e36b4 and byte ptr [eax + 0x115e6c00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115e6c00)))&(0x0u); w8((uint32_t)(EAX + 0x115e6c00), (_r)); fl_logic(_r,8); }
L_115e36bb:;
  /* 115e36bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e36bc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e36be jb 0x115e367e */
  if (C.cf) goto L_115e367e;
L_115e36c0:;
  /* 115e36c0 pop esi */
  ESI = (pop32());
  /* 115e36c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e36c2 ret  */
  ESPCHK(0x115e353eu, _esp0);
  ESP += 4; return;
}

/* FUN_100036c3 @ 0x115e36c3 (28 bytes, 7 insns) */
void f_115e36c3(void) {
  FTRACE(0x115e36c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e36c3 cmp dword ptr [0x115e6f28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115e6f28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e36ca jne 0x115e36de */
  if (!C.zf) goto L_115e36de;
  /* 115e36cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 115e36ce call 0x115e32eb */
  push32(0x115e36d3u); f_115e32eb();
  /* 115e36d3 pop ecx */
  ECX = (pop32());
  /* 115e36d4 mov dword ptr [0x115e6f28], 1 */
  w32((uint32_t)(0x115e6f28), (0x1u));
L_115e36de:;
  /* 115e36de ret  */
  ESPCHK(0x115e36c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x115e36e0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_115e36e0(void) {
  FTRACE(0x115e36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115e36e1 mov ebp, esp */
  EBP = (ESP);
  /* 115e36e3 push edi */
  push32((uint32_t)(EDI));
  /* 115e36e4 push esi */
  push32((uint32_t)(ESI));
  /* 115e36e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115e36e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115e36eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115e36ee mov eax, ecx */
  EAX = (ECX);
  /* 115e36f0 mov edx, ecx */
  EDX = (ECX);
  /* 115e36f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e36f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e36f6 jbe 0x115e3700 */
  if ((C.cf||C.zf)) goto L_115e3700;
  /* 115e36f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e36fa jb 0x115e3878 */
  if (C.cf) goto L_115e3878;
L_115e3700:;
  /* 115e3700 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115e3706 jne 0x115e371c */
  if (!C.zf) goto L_115e371c;
  /* 115e3708 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e370b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115e370e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3711 jb 0x115e373c */
  if (C.cf) goto L_115e373c;
  /* 115e3713 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e3715 jmp dword ptr [edx*4 + 0x115e3828] */
  switch (EDX) {
    case 0: goto L_115e3838;
    case 1: goto L_115e3840;
    case 2: goto L_115e384c;
    case 3: goto L_115e3860;
    default: x86_unimpl("switch@0x115e3715 out of table"); return;
  }
L_115e371c:;
  /* 115e371c mov eax, edi */
  EAX = (EDI);
  /* 115e371e mov edx, 3 */
  EDX = (0x3u);
  /* 115e3723 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3726 jb 0x115e3734 */
  if (C.cf) goto L_115e3734;
  /* 115e3728 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115e372b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e372d jmp dword ptr [eax*4 + 0x115e3740] */
  switch (EAX) {
    case 1: goto L_115e3750;
    case 2: goto L_115e377c;
    case 3: goto L_115e37a0;
    default: x86_unimpl("switch@0x115e372d out of table"); return;
  }
L_115e3734:;
  /* 115e3734 jmp dword ptr [ecx*4 + 0x115e3838] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115e3838)))); return;
  /* 115e373b nop  */
  /* nop */
L_115e373c:;
  /* 115e373c jmp dword ptr [ecx*4 + 0x115e37bc] */
  switch (ECX) {
    case 0: goto L_115e381f;
    case 1: goto L_115e380c;
    case 2: goto L_115e3804;
    case 3: goto L_115e37fc;
    case 4: goto L_115e37f4;
    case 5: goto L_115e37ec;
    case 6: goto L_115e37e4;
    case 7: goto L_115e37dc;
    default: x86_unimpl("switch@0x115e373c out of table"); return;
  }
  /* 115e3743 nop  */
  /* nop */
L_115e3750:;
  /* 115e3750 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e3752 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e3754 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e3756 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e3759 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e375c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e375f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e3762 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e3765 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3768 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e376b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e376e jb 0x115e373c */
  if (C.cf) goto L_115e373c;
  /* 115e3770 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e3772 jmp dword ptr [edx*4 + 0x115e3828] */
  switch (EDX) {
    case 0: goto L_115e3838;
    case 1: goto L_115e3840;
    case 2: goto L_115e384c;
    case 3: goto L_115e3860;
    default: x86_unimpl("switch@0x115e3772 out of table"); return;
  }
  /* 115e3779 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e377c:;
  /* 115e377c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e377e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e3780 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e3782 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e3785 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e3788 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e378b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e378e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3791 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3794 jb 0x115e373c */
  if (C.cf) goto L_115e373c;
  /* 115e3796 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e3798 jmp dword ptr [edx*4 + 0x115e3828] */
  switch (EDX) {
    case 0: goto L_115e3838;
    case 1: goto L_115e3840;
    case 2: goto L_115e384c;
    case 3: goto L_115e3860;
    default: x86_unimpl("switch@0x115e3798 out of table"); return;
  }
  /* 115e379f nop  */
  /* nop */
L_115e37a0:;
  /* 115e37a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e37a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e37a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e37a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e37a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e37aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e37ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e37ae jb 0x115e373c */
  if (C.cf) goto L_115e373c;
  /* 115e37b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e37b2 jmp dword ptr [edx*4 + 0x115e3828] */
  switch (EDX) {
    case 0: goto L_115e3838;
    case 1: goto L_115e3840;
    case 2: goto L_115e384c;
    case 3: goto L_115e3860;
    default: x86_unimpl("switch@0x115e37b2 out of table"); return;
  }
  /* 115e37b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e37dc:;
  /* 115e37dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 115e37e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_115e37e4:;
  /* 115e37e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 115e37e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_115e37ec:;
  /* 115e37ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 115e37f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_115e37f4:;
  /* 115e37f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 115e37f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_115e37fc:;
  /* 115e37fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 115e3800 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_115e3804:;
  /* 115e3804 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 115e3808 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_115e380c:;
  /* 115e380c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 115e3810 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 115e3814 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115e381b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e381d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115e381f:;
  /* 115e381f jmp dword ptr [edx*4 + 0x115e3828] */
  switch (EDX) {
    case 0: goto L_115e3838;
    case 1: goto L_115e3840;
    case 2: goto L_115e384c;
    case 3: goto L_115e3860;
    default: x86_unimpl("switch@0x115e381f out of table"); return;
  }
  /* 115e3826 mov edi, edi */
  EDI = (EDI);
L_115e3838:;
  /* 115e3838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e383b pop esi */
  ESI = (pop32());
  /* 115e383c pop edi */
  EDI = (pop32());
  /* 115e383d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e383e ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e383f nop  */
  /* nop */
L_115e3840:;
  /* 115e3840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e3842 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e3844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3847 pop esi */
  ESI = (pop32());
  /* 115e3848 pop edi */
  EDI = (pop32());
  /* 115e3849 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e384a ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e384b nop  */
  /* nop */
L_115e384c:;
  /* 115e384c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e384e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e3850 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e3853 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e3856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3859 pop esi */
  ESI = (pop32());
  /* 115e385a pop edi */
  EDI = (pop32());
  /* 115e385b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e385c ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e385d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e3860:;
  /* 115e3860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e3862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e3864 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e3867 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e386a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e386d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e3870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3873 pop esi */
  ESI = (pop32());
  /* 115e3874 pop edi */
  EDI = (pop32());
  /* 115e3875 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e3876 ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e3877 nop  */
  /* nop */
L_115e3878:;
  /* 115e3878 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115e387c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115e3880 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115e3886 jne 0x115e38ac */
  if (!C.zf) goto L_115e38ac;
  /* 115e3888 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e388b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115e388e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3891 jb 0x115e38a0 */
  if (C.cf) goto L_115e38a0;
  /* 115e3893 std  */
  C.df=1;
  /* 115e3894 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e3896 cld  */
  C.df=0;
  /* 115e3897 jmp dword ptr [edx*4 + 0x115e39c0] */
  switch (EDX) {
    case 0: goto L_115e39d0;
    case 1: goto L_115e39d8;
    case 2: goto L_115e39e8;
    case 3: goto L_115e39fc;
    default: x86_unimpl("switch@0x115e3897 out of table"); return;
  }
  /* 115e389e mov edi, edi */
  EDI = (EDI);
L_115e38a0:;
  /* 115e38a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115e38a2 jmp dword ptr [ecx*4 + 0x115e3970] */
  switch (ECX) {
    case 0: goto L_115e39b7;
    default: x86_unimpl("switch@0x115e38a2 out of table"); return;
  }
  /* 115e38a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e38ac:;
  /* 115e38ac mov eax, edi */
  EAX = (EDI);
  /* 115e38ae mov edx, 3 */
  EDX = (0x3u);
  /* 115e38b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e38b6 jb 0x115e38c4 */
  if (C.cf) goto L_115e38c4;
  /* 115e38b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115e38bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e38bd jmp dword ptr [eax*4 + 0x115e38c8] */
  switch (EAX) {
    case 1: goto L_115e38d8;
    case 2: goto L_115e38f8;
    case 3: goto L_115e3920;
    default: x86_unimpl("switch@0x115e38bd out of table"); return;
  }
L_115e38c4:;
  /* 115e38c4 jmp dword ptr [ecx*4 + 0x115e39c0] */
  switch (ECX) {
    case 0: goto L_115e39d0;
    case 1: goto L_115e39d8;
    case 2: goto L_115e39e8;
    case 3: goto L_115e39fc;
    default: x86_unimpl("switch@0x115e38c4 out of table"); return;
  }
  /* 115e38cb nop  */
  /* nop */
L_115e38d8:;
  /* 115e38d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e38db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e38dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e38e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115e38e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e38e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115e38e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e38e8 jb 0x115e38a0 */
  if (C.cf) goto L_115e38a0;
  /* 115e38ea std  */
  C.df=1;
  /* 115e38eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e38ed cld  */
  C.df=0;
  /* 115e38ee jmp dword ptr [edx*4 + 0x115e39c0] */
  switch (EDX) {
    case 0: goto L_115e39d0;
    case 1: goto L_115e39d8;
    case 2: goto L_115e39e8;
    case 3: goto L_115e39fc;
    default: x86_unimpl("switch@0x115e38ee out of table"); return;
  }
  /* 115e38f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e38f8:;
  /* 115e38f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e38fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e38fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e3900 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e3903 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e3906 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e3909 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e390c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e390f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3912 jb 0x115e38a0 */
  if (C.cf) goto L_115e38a0;
  /* 115e3914 std  */
  C.df=1;
  /* 115e3915 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e3917 cld  */
  C.df=0;
  /* 115e3918 jmp dword ptr [edx*4 + 0x115e39c0] */
  switch (EDX) {
    case 0: goto L_115e39d0;
    case 1: goto L_115e39d8;
    case 2: goto L_115e39e8;
    case 3: goto L_115e39fc;
    default: x86_unimpl("switch@0x115e3918 out of table"); return;
  }
  /* 115e391f nop  */
  /* nop */
L_115e3920:;
  /* 115e3920 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e3923 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e3925 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e3928 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e392b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e392e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e3931 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e3934 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e3937 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e393a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e393d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3940 jb 0x115e38a0 */
  if (C.cf) goto L_115e38a0;
  /* 115e3946 std  */
  C.df=1;
  /* 115e3947 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e3949 cld  */
  C.df=0;
  /* 115e394a jmp dword ptr [edx*4 + 0x115e39c0] */
  switch (EDX) {
    case 0: goto L_115e39d0;
    case 1: goto L_115e39d8;
    case 2: goto L_115e39e8;
    case 3: goto L_115e39fc;
    default: x86_unimpl("switch@0x115e394a out of table"); return;
  }
  /* 115e3951 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115e3954 je 0x115e398f */
  if (C.zf) goto L_115e398f;
  /* 115e3956 pop esi */
  ESI = (pop32());
  /* 115e3957 adc dword ptr [ecx + edi + 0x5e], edi */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*1 + 0x5e))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*1 + 0x5e), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e395b adc dword ptr [ecx + edi + 0x398c115e], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*1 + 0x398c115e))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*1 + 0x398c115e), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e3962 pop esi */
  ESI = (pop32());
  /* 115e3963 adc dword ptr [ecx + edi + 0x399c115e], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*1 + 0x399c115e))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*1 + 0x399c115e), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e396a pop esi */
  ESI = (pop32());
  /* 115e396c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 115e396d cmp dword ptr [esi + 0x11], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x11))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3974 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115e3978 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115e397c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115e3980 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115e3984 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115e3988 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115e398c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115e3990 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115e3994 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115e3998 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115e399c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115e39a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115e39a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115e39a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 115e39ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115e39b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e39b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115e39b7:;
  /* 115e39b7 jmp dword ptr [edx*4 + 0x115e39c0] */
  switch (EDX) {
    case 0: goto L_115e39d0;
    case 1: goto L_115e39d8;
    case 2: goto L_115e39e8;
    case 3: goto L_115e39fc;
    default: x86_unimpl("switch@0x115e39b7 out of table"); return;
  }
  /* 115e39be mov edi, edi */
  EDI = (EDI);
L_115e39d0:;
  /* 115e39d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e39d3 pop esi */
  ESI = (pop32());
  /* 115e39d4 pop edi */
  EDI = (pop32());
  /* 115e39d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e39d6 ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e39d7 nop  */
  /* nop */
L_115e39d8:;
  /* 115e39d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e39db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e39de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e39e1 pop esi */
  ESI = (pop32());
  /* 115e39e2 pop edi */
  EDI = (pop32());
  /* 115e39e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e39e4 ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e39e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e39e8:;
  /* 115e39e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e39eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e39ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e39f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e39f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e39f7 pop esi */
  ESI = (pop32());
  /* 115e39f8 pop edi */
  EDI = (pop32());
  /* 115e39f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e39fa ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
  /* 115e39fb nop  */
  /* nop */
L_115e39fc:;
  /* 115e39fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e39ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e3a02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e3a05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e3a08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e3a0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e3a0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3a11 pop esi */
  ESI = (pop32());
  /* 115e3a12 pop edi */
  EDI = (pop32());
  /* 115e3a13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e3a14 ret  */
  ESPCHK(0x115e36e0u, _esp0);
  ESP += 4; return;
L_115e398f: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x115e398f (unresolved jump table)"); return;
}

/* FUN_10003a15 @ 0x115e3a15 (62 bytes, 15 insns) */
void f_115e3a15(void) {
  FTRACE(0x115e3a15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3a15 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 115e3a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 115e3a1c push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e3a22 call dword ptr [0x115e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e503c))), 0x115e3a28u);
  /* 115e3a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e3a2a mov dword ptr [0x115e6bcc], eax */
  w32((uint32_t)(0x115e6bcc), (EAX));
  /* 115e3a2f jne 0x115e3a32 */
  if (!C.zf) goto L_115e3a32;
  /* 115e3a31 ret  */
  ESPCHK(0x115e3a15u, _esp0);
  ESP += 4; return;
L_115e3a32:;
  /* 115e3a32 and dword ptr [0x115e6bc4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115e6bc4)))&(0x0u); w32((uint32_t)(0x115e6bc4), (_r)); fl_logic(_r,32); }
  /* 115e3a39 and dword ptr [0x115e6bc8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115e6bc8)))&(0x0u); w32((uint32_t)(0x115e6bc8), (_r)); fl_logic(_r,32); }
  /* 115e3a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e3a42 mov dword ptr [0x115e6bc0], eax */
  w32((uint32_t)(0x115e6bc0), (EAX));
  /* 115e3a47 mov dword ptr [0x115e6bb8], 0x10 */
  w32((uint32_t)(0x115e6bb8), (0x10u));
  /* 115e3a51 pop eax */
  EAX = (pop32());
  /* 115e3a52 ret  */
  ESPCHK(0x115e3a15u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a53 @ 0x115e3a53 (43 bytes, 14 insns) */
void f_115e3a53(void) {
  FTRACE(0x115e3a53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3a53 mov eax, dword ptr [0x115e6bc8] */
  EAX = (r32((uint32_t)(0x115e6bc8)));
  /* 115e3a58 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 115e3a5b mov eax, dword ptr [0x115e6bcc] */
  EAX = (r32((uint32_t)(0x115e6bcc)));
  /* 115e3a60 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_115e3a63:;
  /* 115e3a63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3a65 jae 0x115e3a7b */
  if (!C.cf) goto L_115e3a7b;
  /* 115e3a67 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e3a6b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3a6e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3a74 jb 0x115e3a7d */
  if (C.cf) goto L_115e3a7d;
  /* 115e3a76 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3a79 jmp 0x115e3a63 */
  goto L_115e3a63;
L_115e3a7b:;
  /* 115e3a7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115e3a7d:;
  /* 115e3a7d ret  */
  ESPCHK(0x115e3a53u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a7e @ 0x115e3a7e (811 bytes, 264 insns) */
void f_115e3a7e(void) {
  FTRACE(0x115e3a7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3a7e push ebp */
  push32((uint32_t)(EBP));
  /* 115e3a7f mov ebp, esp */
  EBP = (ESP);
  /* 115e3a81 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3a84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115e3a87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3a8a push ebx */
  push32((uint32_t)(EBX));
  /* 115e3a8b push esi */
  push32((uint32_t)(ESI));
  /* 115e3a8c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 115e3a8f mov esi, edx */
  ESI = (EDX);
  /* 115e3a91 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3a94 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 115e3a97 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3a9a push edi */
  push32((uint32_t)(EDI));
  /* 115e3a9b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 115e3a9e mov ecx, esi */
  ECX = (ESI);
  /* 115e3aa0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 115e3aa3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e3aa9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115e3aaa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115e3aad lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115e3ab4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 115e3ab7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115e3aba mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 115e3abd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 115e3ac0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115e3ac3 jne 0x115e3b44 */
  if (!C.zf) goto L_115e3b44;
  /* 115e3ac5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115e3ac8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115e3aca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e3acb pop edi */
  EDI = (pop32());
  /* 115e3acc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115e3acf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3ad1 jbe 0x115e3ad6 */
  if ((C.cf||C.zf)) goto L_115e3ad6;
  /* 115e3ad3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_115e3ad6:;
  /* 115e3ad6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 115e3ada cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3ade jne 0x115e3b28 */
  if (!C.zf) goto L_115e3b28;
  /* 115e3ae0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115e3ae3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3ae6 jae 0x115e3b04 */
  if (!C.cf) goto L_115e3b04;
  /* 115e3ae8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115e3aed shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115e3aef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115e3af3 not edi */
  EDI = (~(EDI));
  /* 115e3af5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115e3af9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115e3afb jne 0x115e3b28 */
  if (!C.zf) goto L_115e3b28;
  /* 115e3afd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3b00 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115e3b02 jmp 0x115e3b28 */
  goto L_115e3b28;
L_115e3b04:;
  /* 115e3b04 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3b07 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115e3b0c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115e3b0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115e3b11 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115e3b15 not edi */
  EDI = (~(EDI));
  /* 115e3b17 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 115e3b1e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115e3b20 jne 0x115e3b28 */
  if (!C.zf) goto L_115e3b28;
  /* 115e3b22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3b25 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115e3b28:;
  /* 115e3b28 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 115e3b2c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 115e3b30 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 115e3b33 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 115e3b37 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 115e3b3b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3b3e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 115e3b41 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_115e3b44:;
  /* 115e3b44 mov edi, ebx */
  EDI = (EBX);
  /* 115e3b46 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 115e3b49 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115e3b4a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3b4d jbe 0x115e3b52 */
  if ((C.cf||C.zf)) goto L_115e3b52;
  /* 115e3b4f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115e3b51 pop edi */
  EDI = (pop32());
L_115e3b52:;
  /* 115e3b52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e3b55 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115e3b58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115e3b5b jne 0x115e3c01 */
  if (!C.zf) goto L_115e3c01;
  /* 115e3b61 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e3b67 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115e3b6a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115e3b6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115e3b6f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e3b70 pop edx */
  EDX = (pop32());
  /* 115e3b71 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3b73 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115e3b76 jbe 0x115e3b7d */
  if ((C.cf||C.zf)) goto L_115e3b7d;
  /* 115e3b78 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 115e3b7b mov ecx, edx */
  ECX = (EDX);
L_115e3b7d:;
  /* 115e3b7d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3b80 mov edi, ebx */
  EDI = (EBX);
  /* 115e3b82 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 115e3b85 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 115e3b88 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115e3b89 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3b8b jbe 0x115e3b8f */
  if ((C.cf||C.zf)) goto L_115e3b8f;
  /* 115e3b8d mov edi, edx */
  EDI = (EDX);
L_115e3b8f:;
  /* 115e3b8f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3b91 je 0x115e3bfe */
  if (C.zf) goto L_115e3bfe;
  /* 115e3b93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115e3b96 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115e3b99 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3b9c jne 0x115e3be6 */
  if (!C.zf) goto L_115e3be6;
  /* 115e3b9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115e3ba1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3ba4 jae 0x115e3bc2 */
  if (!C.cf) goto L_115e3bc2;
  /* 115e3ba6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115e3bab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115e3bad lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115e3bb1 not edx */
  EDX = (~(EDX));
  /* 115e3bb3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115e3bb7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115e3bb9 jne 0x115e3be6 */
  if (!C.zf) goto L_115e3be6;
  /* 115e3bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3bbe and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115e3bc0 jmp 0x115e3be6 */
  goto L_115e3be6;
L_115e3bc2:;
  /* 115e3bc2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3bc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115e3bca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115e3bcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115e3bcf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115e3bd3 not edx */
  EDX = (~(EDX));
  /* 115e3bd5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 115e3bdc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115e3bde jne 0x115e3be6 */
  if (!C.zf) goto L_115e3be6;
  /* 115e3be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3be3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115e3be6:;
  /* 115e3be6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115e3be9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115e3bec mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 115e3bef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115e3bf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115e3bf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115e3bf8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 115e3bfb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_115e3bfe:;
  /* 115e3bfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_115e3c01:;
  /* 115e3c01 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3c05 jne 0x115e3c10 */
  if (!C.zf) goto L_115e3c10;
  /* 115e3c07 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3c0a je 0x115e3c99 */
  if (C.zf) goto L_115e3c99;
L_115e3c10:;
  /* 115e3c10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115e3c13 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 115e3c16 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 115e3c19 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115e3c1c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115e3c1f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 115e3c22 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115e3c25 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115e3c28 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3c2b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115e3c2e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3c31 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3c34 jne 0x115e3c99 */
  if (!C.zf) goto L_115e3c99;
  /* 115e3c36 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 115e3c3a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3c3d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 115e3c40 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115e3c42 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 115e3c46 jae 0x115e3c6d */
  if (!C.cf) goto L_115e3c6d;
  /* 115e3c48 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e3c4c jne 0x115e3c5c */
  if (!C.zf) goto L_115e3c5c;
  /* 115e3c4e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115e3c53 mov ecx, edi */
  ECX = (EDI);
  /* 115e3c55 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115e3c57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3c5a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_115e3c5c:;
  /* 115e3c5c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115e3c61 mov ecx, edi */
  ECX = (EDI);
  /* 115e3c63 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115e3c65 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 115e3c69 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115e3c6b jmp 0x115e3c96 */
  goto L_115e3c96;
L_115e3c6d:;
  /* 115e3c6d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e3c71 jne 0x115e3c83 */
  if (!C.zf) goto L_115e3c83;
  /* 115e3c73 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115e3c76 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115e3c7b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115e3c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3c80 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115e3c83:;
  /* 115e3c83 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115e3c86 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115e3c8b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115e3c8d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 115e3c94 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_115e3c96:;
  /* 115e3c96 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_115e3c99:;
  /* 115e3c99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115e3c9c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 115e3c9e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 115e3ca2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 115e3ca4 jne 0x115e3da4 */
  if (!C.zf) goto L_115e3da4;
  /* 115e3caa mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e3cb1 je 0x115e3d96 */
  if (C.zf) goto L_115e3d96;
  /* 115e3cb7 mov ecx, dword ptr [0x115e6bbc] */
  ECX = (r32((uint32_t)(0x115e6bbc)));
  /* 115e3cbd mov edi, dword ptr [0x115e5050] */
  EDI = (r32((uint32_t)(0x115e5050)));
  /* 115e3cc3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 115e3cc6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3cc9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 115e3cce push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115e3cd3 push ebx */
  push32((uint32_t)(EBX));
  /* 115e3cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 115e3cd5 call edi */
  call_ind((uint32_t)(EDI), 0x115e3cd7u);
  /* 115e3cd7 mov ecx, dword ptr [0x115e6bbc] */
  ECX = (r32((uint32_t)(0x115e6bbc)));
  /* 115e3cdd mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3ce2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115e3ce7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115e3ce9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115e3cec mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3cf1 mov ecx, dword ptr [0x115e6bbc] */
  ECX = (r32((uint32_t)(0x115e6bbc)));
  /* 115e3cf7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 115e3cfa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 115e3d02 mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3d07 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 115e3d0a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 115e3d0d mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3d12 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115e3d15 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e3d19 jne 0x115e3d24 */
  if (!C.zf) goto L_115e3d24;
  /* 115e3d1b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 115e3d1f mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
L_115e3d24:;
  /* 115e3d24 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3d28 jne 0x115e3d96 */
  if (!C.zf) goto L_115e3d96;
  /* 115e3d2a push ebx */
  push32((uint32_t)(EBX));
  /* 115e3d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 115e3d2d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 115e3d30 call edi */
  call_ind((uint32_t)(EDI), 0x115e3d32u);
  /* 115e3d32 mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3d37 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 115e3d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 115e3d3c push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e3d42 call dword ptr [0x115e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e504c))), 0x115e3d48u);
  /* 115e3d48 mov eax, dword ptr [0x115e6bc8] */
  EAX = (r32((uint32_t)(0x115e6bc8)));
  /* 115e3d4d mov edx, dword ptr [0x115e6bcc] */
  EDX = (r32((uint32_t)(0x115e6bcc)));
  /* 115e3d53 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115e3d56 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115e3d59 mov ecx, eax */
  ECX = (EAX);
  /* 115e3d5b mov eax, dword ptr [0x115e6bc4] */
  EAX = (r32((uint32_t)(0x115e6bc4)));
  /* 115e3d60 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3d62 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 115e3d66 push ecx */
  push32((uint32_t)(ECX));
  /* 115e3d67 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 115e3d6a push ecx */
  push32((uint32_t)(ECX));
  /* 115e3d6b push eax */
  push32((uint32_t)(EAX));
  /* 115e3d6c call 0x115e4800 */
  push32(0x115e3d71u); f_115e4800();
  /* 115e3d71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3d74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3d77 dec dword ptr [0x115e6bc8] */
  { uint32_t _r=(r32((uint32_t)(0x115e6bc8)))-1; w32((uint32_t)(0x115e6bc8), (_r)); fl_dec(_r,32); }
  /* 115e3d7d cmp eax, dword ptr [0x115e6bc4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115e6bc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3d83 jbe 0x115e3d88 */
  if ((C.cf||C.zf)) goto L_115e3d88;
  /* 115e3d85 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115e3d88:;
  /* 115e3d88 mov ecx, dword ptr [0x115e6bcc] */
  ECX = (r32((uint32_t)(0x115e6bcc)));
  /* 115e3d8e mov dword ptr [0x115e6bc0], ecx */
  w32((uint32_t)(0x115e6bc0), (ECX));
  /* 115e3d94 jmp 0x115e3d99 */
  goto L_115e3d99;
L_115e3d96:;
  /* 115e3d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_115e3d99:;
  /* 115e3d99 mov dword ptr [0x115e6bc4], eax */
  w32((uint32_t)(0x115e6bc4), (EAX));
  /* 115e3d9e mov dword ptr [0x115e6bbc], esi */
  w32((uint32_t)(0x115e6bbc), (ESI));
L_115e3da4:;
  /* 115e3da4 pop edi */
  EDI = (pop32());
  /* 115e3da5 pop esi */
  ESI = (pop32());
  /* 115e3da6 pop ebx */
  EBX = (pop32());
  /* 115e3da7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e3da8 ret  */
  ESPCHK(0x115e3a7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003da9 @ 0x115e3da9 (777 bytes, 275 insns) */
void f_115e3da9(void) {
  FTRACE(0x115e3da9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e3da9 push ebp */
  push32((uint32_t)(EBP));
  /* 115e3daa mov ebp, esp */
  EBP = (ESP);
  /* 115e3dac sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3daf mov eax, dword ptr [0x115e6bc8] */
  EAX = (r32((uint32_t)(0x115e6bc8)));
  /* 115e3db4 mov edx, dword ptr [0x115e6bcc] */
  EDX = (r32((uint32_t)(0x115e6bcc)));
  /* 115e3dba push ebx */
  push32((uint32_t)(EBX));
  /* 115e3dbb push esi */
  push32((uint32_t)(ESI));
  /* 115e3dbc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115e3dbf push edi */
  push32((uint32_t)(EDI));
  /* 115e3dc0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 115e3dc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3dc6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115e3dc9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 115e3dcc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 115e3dcf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115e3dd2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115e3dd5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e3dd6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3dd9 jge 0x115e3de9 */
  if ((C.sf==C.of)) goto L_115e3de9;
  /* 115e3ddb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 115e3dde shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 115e3de0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 115e3de4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 115e3de7 jmp 0x115e3df9 */
  goto L_115e3df9;
L_115e3de9:;
  /* 115e3de9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3dec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e3def xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115e3df1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115e3df3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 115e3df6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115e3df9:;
  /* 115e3df9 mov eax, dword ptr [0x115e6bc0] */
  EAX = (r32((uint32_t)(0x115e6bc0)));
  /* 115e3dfe mov ebx, eax */
  EBX = (EAX);
  /* 115e3e00 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e02 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3e05 jae 0x115e3e20 */
  if (!C.cf) goto L_115e3e20;
L_115e3e07:;
  /* 115e3e07 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 115e3e0a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 115e3e0c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115e3e0f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 115e3e11 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115e3e13 jne 0x115e3e20 */
  if (!C.zf) goto L_115e3e20;
  /* 115e3e15 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3e18 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e1b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3e1e jb 0x115e3e07 */
  if (C.cf) goto L_115e3e07;
L_115e3e20:;
  /* 115e3e20 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e23 jne 0x115e3e9e */
  if (!C.zf) goto L_115e3e9e;
  /* 115e3e25 mov ebx, edx */
  EBX = (EDX);
L_115e3e27:;
  /* 115e3e27 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e29 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3e2c jae 0x115e3e43 */
  if (!C.cf) goto L_115e3e43;
  /* 115e3e2e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 115e3e31 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 115e3e33 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115e3e36 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 115e3e38 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115e3e3a jne 0x115e3e41 */
  if (!C.zf) goto L_115e3e41;
  /* 115e3e3c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3e3f jmp 0x115e3e27 */
  goto L_115e3e27;
L_115e3e41:;
  /* 115e3e41 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115e3e43:;
  /* 115e3e43 jne 0x115e3e9e */
  if (!C.zf) goto L_115e3e9e;
L_115e3e45:;
  /* 115e3e45 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e48 jae 0x115e3e5b */
  if (!C.cf) goto L_115e3e5b;
  /* 115e3e4a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e4e jne 0x115e3e58 */
  if (!C.zf) goto L_115e3e58;
  /* 115e3e50 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3e53 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3e56 jmp 0x115e3e45 */
  goto L_115e3e45;
L_115e3e58:;
  /* 115e3e58 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115e3e5b:;
  /* 115e3e5b jne 0x115e3e83 */
  if (!C.zf) goto L_115e3e83;
  /* 115e3e5d mov ebx, edx */
  EBX = (EDX);
L_115e3e5f:;
  /* 115e3e5f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e61 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3e64 jae 0x115e3e73 */
  if (!C.cf) goto L_115e3e73;
  /* 115e3e66 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e6a jne 0x115e3e71 */
  if (!C.zf) goto L_115e3e71;
  /* 115e3e6c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3e6f jmp 0x115e3e5f */
  goto L_115e3e5f;
L_115e3e71:;
  /* 115e3e71 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115e3e73:;
  /* 115e3e73 jne 0x115e3e83 */
  if (!C.zf) goto L_115e3e83;
  /* 115e3e75 call 0x115e40b2 */
  push32(0x115e3e7au); f_115e40b2();
  /* 115e3e7a mov ebx, eax */
  EBX = (EAX);
  /* 115e3e7c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115e3e7e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115e3e81 je 0x115e3e97 */
  if (C.zf) goto L_115e3e97;
L_115e3e83:;
  /* 115e3e83 push ebx */
  push32((uint32_t)(EBX));
  /* 115e3e84 call 0x115e4163 */
  push32(0x115e3e89u); f_115e4163();
  /* 115e3e89 pop ecx */
  ECX = (pop32());
  /* 115e3e8a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 115e3e8d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115e3e8f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 115e3e92 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3e95 jne 0x115e3e9e */
  if (!C.zf) goto L_115e3e9e;
L_115e3e97:;
  /* 115e3e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e3e99 jmp 0x115e40ad */
  goto L_115e40ad;
L_115e3e9e:;
  /* 115e3e9e mov dword ptr [0x115e6bc0], ebx */
  w32((uint32_t)(0x115e6bc0), (EBX));
  /* 115e3ea4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 115e3ea7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 115e3ea9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3eac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115e3eaf je 0x115e3ec5 */
  if (C.zf) goto L_115e3ec5;
  /* 115e3eb1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 115e3eb8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 115e3ebc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115e3ebf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 115e3ec1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115e3ec3 jne 0x115e3efc */
  if (!C.zf) goto L_115e3efc;
L_115e3ec5:;
  /* 115e3ec5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 115e3ecb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 115e3ece and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 115e3ed1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 115e3ed4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e3ed8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 115e3edb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 115e3edd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115e3ee0 jne 0x115e3ef9 */
  if (!C.zf) goto L_115e3ef9;
L_115e3ee2:;
  /* 115e3ee2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 115e3ee8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 115e3eeb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 115e3eee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e3ef1 mov edi, esi */
  EDI = (ESI);
  /* 115e3ef3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 115e3ef5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 115e3ef7 je 0x115e3ee2 */
  if (C.zf) goto L_115e3ee2;
L_115e3ef9:;
  /* 115e3ef9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_115e3efc:;
  /* 115e3efc mov ecx, edx */
  ECX = (EDX);
  /* 115e3efe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e3f00 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e3f06 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115e3f0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115e3f10 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 115e3f14 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 115e3f16 jne 0x115e3f25 */
  if (!C.zf) goto L_115e3f25;
  /* 115e3f18 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 115e3f1f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115e3f21 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115e3f24 pop edi */
  EDI = (pop32());
L_115e3f25:;
  /* 115e3f25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e3f27 jl 0x115e3f2e */
  if ((C.sf!=C.of)) goto L_115e3f2e;
  /* 115e3f29 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115e3f2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e3f2c jmp 0x115e3f25 */
  goto L_115e3f25;
L_115e3f2e:;
  /* 115e3f2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115e3f31 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 115e3f35 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 115e3f37 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e3f3a mov esi, ecx */
  ESI = (ECX);
  /* 115e3f3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115e3f3f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 115e3f42 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115e3f43 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3f46 jle 0x115e3f4b */
  if ((C.zf||C.sf!=C.of)) goto L_115e3f4b;
  /* 115e3f48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115e3f4a pop esi */
  ESI = (pop32());
L_115e3f4b:;
  /* 115e3f4b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3f4d je 0x115e4060 */
  if (C.zf) goto L_115e4060;
  /* 115e3f53 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3f56 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3f59 jne 0x115e3fbc */
  if (!C.zf) goto L_115e3fbc;
  /* 115e3f5b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3f5e jge 0x115e3f8b */
  if ((C.sf==C.of)) goto L_115e3f8b;
  /* 115e3f60 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115e3f65 mov ecx, edi */
  ECX = (EDI);
  /* 115e3f67 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115e3f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e3f6c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 115e3f70 not ebx */
  EBX = (~(EBX));
  /* 115e3f72 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 115e3f75 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 115e3f79 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 115e3f7d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 115e3f7f jne 0x115e3fb9 */
  if (!C.zf) goto L_115e3fb9;
  /* 115e3f81 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3f84 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115e3f87 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 115e3f89 jmp 0x115e3fbc */
  goto L_115e3fbc;
L_115e3f8b:;
  /* 115e3f8b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115e3f8e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115e3f93 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115e3f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e3f98 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 115e3f9c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 115e3fa3 not ebx */
  EBX = (~(EBX));
  /* 115e3fa5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115e3fa7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 115e3fa9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 115e3fac jne 0x115e3fb9 */
  if (!C.zf) goto L_115e3fb9;
  /* 115e3fae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e3fb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115e3fb4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 115e3fb7 jmp 0x115e3fbc */
  goto L_115e3fbc;
L_115e3fb9:;
  /* 115e3fb9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_115e3fbc:;
  /* 115e3fbc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 115e3fbf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3fc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3fc6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 115e3fc9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3fcc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 115e3fcf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 115e3fd2 je 0x115e406c */
  if (C.zf) goto L_115e406c;
  /* 115e3fd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115e3fdb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 115e3fdf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 115e3fe2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 115e3fe5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115e3fe8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115e3feb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3fee mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115e3ff1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115e3ff4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e3ff7 jne 0x115e405d */
  if (!C.zf) goto L_115e405d;
  /* 115e3ff9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 115e3ffd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4000 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 115e4003 jge 0x115e402e */
  if ((C.sf==C.of)) goto L_115e402e;
  /* 115e4005 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115e4007 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e400b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 115e400f jne 0x115e401c */
  if (!C.zf) goto L_115e401c;
  /* 115e4011 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115e4016 mov ecx, esi */
  ECX = (ESI);
  /* 115e4018 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115e401a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_115e401c:;
  /* 115e401c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115e4021 mov ecx, esi */
  ECX = (ESI);
  /* 115e4023 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115e4025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e4028 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115e402c jmp 0x115e405d */
  goto L_115e405d;
L_115e402e:;
  /* 115e402e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115e4030 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e4034 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 115e4038 jne 0x115e4047 */
  if (!C.zf) goto L_115e4047;
  /* 115e403a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 115e403d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115e4042 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115e4044 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_115e4047:;
  /* 115e4047 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e404a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 115e4051 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 115e4054 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 115e4059 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 115e405b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_115e405d:;
  /* 115e405d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_115e4060:;
  /* 115e4060 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e4062 je 0x115e406f */
  if (C.zf) goto L_115e406f;
  /* 115e4064 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115e4066 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 115e406a jmp 0x115e406f */
  goto L_115e406f;
L_115e406c:;
  /* 115e406c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_115e406f:;
  /* 115e406f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 115e4072 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4074 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 115e4077 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115e4079 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 115e407d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115e4080 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 115e4082 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e4084 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 115e4087 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115e4089 jne 0x115e40a5 */
  if (!C.zf) goto L_115e40a5;
  /* 115e408b cmp ebx, dword ptr [0x115e6bc4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115e6bc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4091 jne 0x115e40a5 */
  if (!C.zf) goto L_115e40a5;
  /* 115e4093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e4096 cmp ecx, dword ptr [0x115e6bbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115e6bbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e409c jne 0x115e40a5 */
  if (!C.zf) goto L_115e40a5;
  /* 115e409e and dword ptr [0x115e6bc4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115e6bc4)))&(0x0u); w32((uint32_t)(0x115e6bc4), (_r)); fl_logic(_r,32); }
L_115e40a5:;
  /* 115e40a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e40a8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115e40aa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_115e40ad:;
  /* 115e40ad pop edi */
  EDI = (pop32());
  /* 115e40ae pop esi */
  ESI = (pop32());
  /* 115e40af pop ebx */
  EBX = (pop32());
  /* 115e40b0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e40b1 ret  */
  ESPCHK(0x115e3da9u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b2 @ 0x115e40b2 (177 bytes, 53 insns) */
void f_115e40b2(void) {
  FTRACE(0x115e40b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e40b2 mov eax, dword ptr [0x115e6bc8] */
  EAX = (r32((uint32_t)(0x115e6bc8)));
  /* 115e40b7 mov ecx, dword ptr [0x115e6bb8] */
  ECX = (r32((uint32_t)(0x115e6bb8)));
  /* 115e40bd push esi */
  push32((uint32_t)(ESI));
  /* 115e40be push edi */
  push32((uint32_t)(EDI));
  /* 115e40bf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e40c1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e40c3 jne 0x115e40f5 */
  if (!C.zf) goto L_115e40f5;
  /* 115e40c5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 115e40c9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115e40cc push eax */
  push32((uint32_t)(EAX));
  /* 115e40cd push dword ptr [0x115e6bcc] */
  push32((uint32_t)(r32((uint32_t)(0x115e6bcc))));
  /* 115e40d3 push edi */
  push32((uint32_t)(EDI));
  /* 115e40d4 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e40da call dword ptr [0x115e5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5028))), 0x115e40e0u);
  /* 115e40e0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e40e2 je 0x115e4145 */
  if (C.zf) goto L_115e4145;
  /* 115e40e4 add dword ptr [0x115e6bb8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x115e6bb8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x115e6bb8), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e40eb mov dword ptr [0x115e6bcc], eax */
  w32((uint32_t)(0x115e6bcc), (EAX));
  /* 115e40f0 mov eax, dword ptr [0x115e6bc8] */
  EAX = (r32((uint32_t)(0x115e6bc8)));
L_115e40f5:;
  /* 115e40f5 mov ecx, dword ptr [0x115e6bcc] */
  ECX = (r32((uint32_t)(0x115e6bcc)));
  /* 115e40fb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 115e4100 push 8 */
  push32((uint32_t)(0x8u));
  /* 115e4102 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115e4105 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e410b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 115e410e call dword ptr [0x115e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e503c))), 0x115e4114u);
  /* 115e4114 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4116 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 115e4119 je 0x115e4145 */
  if (C.zf) goto L_115e4145;
  /* 115e411b push 4 */
  push32((uint32_t)(0x4u));
  /* 115e411d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 115e4122 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115e4127 push edi */
  push32((uint32_t)(EDI));
  /* 115e4128 call dword ptr [0x115e502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e502c))), 0x115e412eu);
  /* 115e412e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4130 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 115e4133 jne 0x115e4149 */
  if (!C.zf) goto L_115e4149;
  /* 115e4135 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 115e4138 push edi */
  push32((uint32_t)(EDI));
  /* 115e4139 push dword ptr [0x115e6e08] */
  push32((uint32_t)(r32((uint32_t)(0x115e6e08))));
  /* 115e413f call dword ptr [0x115e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e504c))), 0x115e4145u);
L_115e4145:;
  /* 115e4145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e4147 jmp 0x115e4160 */
  goto L_115e4160;
L_115e4149:;
  /* 115e4149 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 115e414d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115e414f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 115e4152 inc dword ptr [0x115e6bc8] */
  { uint32_t _r=(r32((uint32_t)(0x115e6bc8)))+1; w32((uint32_t)(0x115e6bc8), (_r)); fl_inc(_r,32); }
  /* 115e4158 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 115e415b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115e415e mov eax, esi */
  EAX = (ESI);
L_115e4160:;
  /* 115e4160 pop edi */
  EDI = (pop32());
  /* 115e4161 pop esi */
  ESI = (pop32());
  /* 115e4162 ret  */
  ESPCHK(0x115e40b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004163 @ 0x115e4163 (251 bytes, 85 insns) */
void f_115e4163(void) {
  FTRACE(0x115e4163u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4163 push ebp */
  push32((uint32_t)(EBP));
  /* 115e4164 mov ebp, esp */
  EBP = (ESP);
  /* 115e4166 push ecx */
  push32((uint32_t)(ECX));
  /* 115e4167 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e416a push ebx */
  push32((uint32_t)(EBX));
  /* 115e416b push esi */
  push32((uint32_t)(ESI));
  /* 115e416c push edi */
  push32((uint32_t)(EDI));
  /* 115e416d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 115e4170 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 115e4173 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115e4175:;
  /* 115e4175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e4177 jl 0x115e417e */
  if ((C.sf!=C.of)) goto L_115e417e;
  /* 115e4179 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115e417b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115e417c jmp 0x115e4175 */
  goto L_115e4175;
L_115e417e:;
  /* 115e417e mov eax, ebx */
  EAX = (EBX);
  /* 115e4180 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115e4182 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115e4188 pop edx */
  EDX = (pop32());
  /* 115e4189 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 115e4190 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115e4193:;
  /* 115e4193 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 115e4196 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 115e4199 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e419c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115e419d jne 0x115e4193 */
  if (!C.zf) goto L_115e4193;
  /* 115e419f mov edi, ebx */
  EDI = (EBX);
  /* 115e41a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 115e41a3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 115e41a6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e41a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115e41ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115e41b3 push edi */
  push32((uint32_t)(EDI));
  /* 115e41b4 call dword ptr [0x115e502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e502c))), 0x115e41bau);
  /* 115e41ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e41bc jne 0x115e41c6 */
  if (!C.zf) goto L_115e41c6;
  /* 115e41be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e41c1 jmp 0x115e4259 */
  goto L_115e4259;
L_115e41c6:;
  /* 115e41c6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 115e41cc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e41ce ja 0x115e420c */
  if ((!C.cf&&!C.zf)) goto L_115e420c;
  /* 115e41d0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_115e41d3:;
  /* 115e41d3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 115e41d7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 115e41de lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 115e41e4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 115e41eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115e41ed lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 115e41f3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115e41f6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 115e4200 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4205 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 115e4208 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e420a jbe 0x115e41d3 */
  if ((C.cf||C.zf)) goto L_115e41d3;
L_115e420c:;
  /* 115e420c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115e420f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 115e4212 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4217 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e4219 pop edi */
  EDI = (pop32());
  /* 115e421a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115e421d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115e4220 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 115e4223 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 115e4226 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115e4229 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115e422e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 115e4235 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 115e4238 mov cl, al */
  CL = (AL);
  /* 115e423a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115e423c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e423e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4241 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 115e4244 jne 0x115e4249 */
  if (!C.zf) goto L_115e4249;
  /* 115e4246 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_115e4249:;
  /* 115e4249 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115e424e mov ecx, ebx */
  ECX = (EBX);
  /* 115e4250 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115e4252 not edx */
  EDX = (~(EDX));
  /* 115e4254 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115e4257 mov eax, ebx */
  EAX = (EBX);
L_115e4259:;
  /* 115e4259 pop edi */
  EDI = (pop32());
  /* 115e425a pop esi */
  ESI = (pop32());
  /* 115e425b pop ebx */
  EBX = (pop32());
  /* 115e425c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e425d ret  */
  ESPCHK(0x115e4163u, _esp0);
  ESP += 4; return;
}

/* FUN_1000425e @ 0x115e425e (137 bytes, 50 insns) */
void f_115e425e(void) {
  FTRACE(0x115e425eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e425e push ebx */
  push32((uint32_t)(EBX));
  /* 115e425f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e4261 cmp dword ptr [0x115e6b7c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115e6b7c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4267 push esi */
  push32((uint32_t)(ESI));
  /* 115e4268 push edi */
  push32((uint32_t)(EDI));
  /* 115e4269 jne 0x115e42ad */
  if (!C.zf) goto L_115e42ad;
  /* 115e426b push 0x115e5490 */
  push32((uint32_t)(0x115e5490u));
  /* 115e4270 call dword ptr [0x115e501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e501c))), 0x115e4276u);
  /* 115e4276 mov edi, eax */
  EDI = (EAX);
  /* 115e4278 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e427a je 0x115e42e3 */
  if (C.zf) goto L_115e42e3;
  /* 115e427c mov esi, dword ptr [0x115e5020] */
  ESI = (r32((uint32_t)(0x115e5020)));
  /* 115e4282 push 0x115e5484 */
  push32((uint32_t)(0x115e5484u));
  /* 115e4287 push edi */
  push32((uint32_t)(EDI));
  /* 115e4288 call esi */
  call_ind((uint32_t)(ESI), 0x115e428au);
  /* 115e428a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e428c mov dword ptr [0x115e6b7c], eax */
  w32((uint32_t)(0x115e6b7c), (EAX));
  /* 115e4291 je 0x115e42e3 */
  if (C.zf) goto L_115e42e3;
  /* 115e4293 push 0x115e5474 */
  push32((uint32_t)(0x115e5474u));
  /* 115e4298 push edi */
  push32((uint32_t)(EDI));
  /* 115e4299 call esi */
  call_ind((uint32_t)(ESI), 0x115e429bu);
  /* 115e429b push 0x115e5460 */
  push32((uint32_t)(0x115e5460u));
  /* 115e42a0 push edi */
  push32((uint32_t)(EDI));
  /* 115e42a1 mov dword ptr [0x115e6b80], eax */
  w32((uint32_t)(0x115e6b80), (EAX));
  /* 115e42a6 call esi */
  call_ind((uint32_t)(ESI), 0x115e42a8u);
  /* 115e42a8 mov dword ptr [0x115e6b84], eax */
  w32((uint32_t)(0x115e6b84), (EAX));
L_115e42ad:;
  /* 115e42ad mov eax, dword ptr [0x115e6b80] */
  EAX = (r32((uint32_t)(0x115e6b80)));
  /* 115e42b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e42b4 je 0x115e42cc */
  if (C.zf) goto L_115e42cc;
  /* 115e42b6 call eax */
  call_ind((uint32_t)(EAX), 0x115e42b8u);
  /* 115e42b8 mov ebx, eax */
  EBX = (EAX);
  /* 115e42ba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115e42bc je 0x115e42cc */
  if (C.zf) goto L_115e42cc;
  /* 115e42be mov eax, dword ptr [0x115e6b84] */
  EAX = (r32((uint32_t)(0x115e6b84)));
  /* 115e42c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e42c5 je 0x115e42cc */
  if (C.zf) goto L_115e42cc;
  /* 115e42c7 push ebx */
  push32((uint32_t)(EBX));
  /* 115e42c8 call eax */
  call_ind((uint32_t)(EAX), 0x115e42cau);
  /* 115e42ca mov ebx, eax */
  EBX = (EAX);
L_115e42cc:;
  /* 115e42cc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 115e42d0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 115e42d4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 115e42d8 push ebx */
  push32((uint32_t)(EBX));
  /* 115e42d9 call dword ptr [0x115e6b7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e6b7c))), 0x115e42dfu);
L_115e42df:;
  /* 115e42df pop edi */
  EDI = (pop32());
  /* 115e42e0 pop esi */
  ESI = (pop32());
  /* 115e42e1 pop ebx */
  EBX = (pop32());
  /* 115e42e2 ret  */
  ESPCHK(0x115e425eu, _esp0);
  ESP += 4; return;
L_115e42e3:;
  /* 115e42e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e42e5 jmp 0x115e42df */
  goto L_115e42df;
}

/* _strncpy @ 0x115e42f0 (254 bytes, 109 insns) */
void f_115e42f0(void) {
  FTRACE(0x115e42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e42f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115e42f4 push edi */
  push32((uint32_t)(EDI));
  /* 115e42f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115e42f7 je 0x115e4373 */
  if (C.zf) goto L_115e4373;
  /* 115e42f9 push esi */
  push32((uint32_t)(ESI));
  /* 115e42fa push ebx */
  push32((uint32_t)(EBX));
  /* 115e42fb mov ebx, ecx */
  EBX = (ECX);
  /* 115e42fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 115e4301 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 115e4307 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 115e430b jne 0x115e4314 */
  if (!C.zf) goto L_115e4314;
  /* 115e430d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e4310 jne 0x115e4381 */
  if (!C.zf) goto L_115e4381;
  /* 115e4312 jmp 0x115e4335 */
  goto L_115e4335;
L_115e4314:;
  /* 115e4314 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e4316 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e4317 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4319 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e431a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e431b je 0x115e4342 */
  if (C.zf) goto L_115e4342;
  /* 115e431d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e431f je 0x115e434a */
  if (C.zf) goto L_115e434a;
  /* 115e4321 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 115e4327 jne 0x115e4314 */
  if (!C.zf) goto L_115e4314;
  /* 115e4329 mov ebx, ecx */
  EBX = (ECX);
  /* 115e432b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e432e jne 0x115e4381 */
  if (!C.zf) goto L_115e4381;
L_115e4330:;
  /* 115e4330 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115e4333 je 0x115e4342 */
  if (C.zf) goto L_115e4342;
L_115e4335:;
  /* 115e4335 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e4337 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e4338 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e433a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e433b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115e433d je 0x115e436e */
  if (C.zf) goto L_115e436e;
  /* 115e433f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115e4340 jne 0x115e4335 */
  if (!C.zf) goto L_115e4335;
L_115e4342:;
  /* 115e4342 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115e4346 pop ebx */
  EBX = (pop32());
  /* 115e4347 pop esi */
  ESI = (pop32());
  /* 115e4348 pop edi */
  EDI = (pop32());
  /* 115e4349 ret  */
  ESPCHK(0x115e42f0u, _esp0);
  ESP += 4; return;
L_115e434a:;
  /* 115e434a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115e4350 je 0x115e4364 */
  if (C.zf) goto L_115e4364;
L_115e4352:;
  /* 115e4352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4354 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e4355 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e4356 je 0x115e43e6 */
  if (C.zf) goto L_115e43e6;
  /* 115e435c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115e4362 jne 0x115e4352 */
  if (!C.zf) goto L_115e4352;
L_115e4364:;
  /* 115e4364 mov ebx, ecx */
  EBX = (ECX);
  /* 115e4366 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e4369 jne 0x115e43d7 */
  if (!C.zf) goto L_115e43d7;
L_115e436b:;
  /* 115e436b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e436d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_115e436e:;
  /* 115e436e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115e436f jne 0x115e436b */
  if (!C.zf) goto L_115e436b;
  /* 115e4371 pop ebx */
  EBX = (pop32());
  /* 115e4372 pop esi */
  ESI = (pop32());
L_115e4373:;
  /* 115e4373 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e4377 pop edi */
  EDI = (pop32());
  /* 115e4378 ret  */
  ESPCHK(0x115e42f0u, _esp0);
  ESP += 4; return;
L_115e4379:;
  /* 115e4379 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115e437b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e437e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e437f je 0x115e4330 */
  if (C.zf) goto L_115e4330;
L_115e4381:;
  /* 115e4381 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115e4386 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115e4388 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e438a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115e438d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115e438f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 115e4391 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4394 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115e4399 je 0x115e4379 */
  if (C.zf) goto L_115e4379;
  /* 115e439b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115e439d je 0x115e43cb */
  if (C.zf) goto L_115e43cb;
  /* 115e439f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 115e43a1 je 0x115e43c1 */
  if (C.zf) goto L_115e43c1;
  /* 115e43a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 115e43a9 je 0x115e43b7 */
  if (C.zf) goto L_115e43b7;
  /* 115e43ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 115e43b1 jne 0x115e4379 */
  if (!C.zf) goto L_115e4379;
  /* 115e43b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115e43b5 jmp 0x115e43cf */
  goto L_115e43cf;
L_115e43b7:;
  /* 115e43b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115e43bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115e43bf jmp 0x115e43cf */
  goto L_115e43cf;
L_115e43c1:;
  /* 115e43c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115e43c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115e43c9 jmp 0x115e43cf */
  goto L_115e43cf;
L_115e43cb:;
  /* 115e43cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115e43cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_115e43cf:;
  /* 115e43cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e43d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e43d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e43d5 je 0x115e43e1 */
  if (C.zf) goto L_115e43e1;
L_115e43d7:;
  /* 115e43d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115e43d9:;
  /* 115e43d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 115e43db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e43de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e43df jne 0x115e43d9 */
  if (!C.zf) goto L_115e43d9;
L_115e43e1:;
  /* 115e43e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115e43e4 jne 0x115e436b */
  if (!C.zf) goto L_115e436b;
L_115e43e6:;
  /* 115e43e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115e43ea pop ebx */
  EBX = (pop32());
  /* 115e43eb pop esi */
  ESI = (pop32());
  /* 115e43ec pop edi */
  EDI = (pop32());
  /* 115e43ed ret  */
  ESPCHK(0x115e42f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x115e43f0 (88 bytes, 40 insns) */
void f_115e43f0(void) {
  FTRACE(0x115e43f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e43f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 115e43f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e43f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115e43fa je 0x115e4443 */
  if (C.zf) goto L_115e4443;
  /* 115e43fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e43fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 115e4402 push edi */
  push32((uint32_t)(EDI));
  /* 115e4403 mov edi, ecx */
  EDI = (ECX);
  /* 115e4405 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4408 jb 0x115e4437 */
  if (C.cf) goto L_115e4437;
  /* 115e440a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115e440c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 115e440f je 0x115e4419 */
  if (C.zf) goto L_115e4419;
  /* 115e4411 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_115e4413:;
  /* 115e4413 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4415 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e4416 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e4417 jne 0x115e4413 */
  if (!C.zf) goto L_115e4413;
L_115e4419:;
  /* 115e4419 mov ecx, eax */
  ECX = (EAX);
  /* 115e441b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115e441e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4420 mov ecx, eax */
  ECX = (EAX);
  /* 115e4422 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115e4425 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4427 mov ecx, edx */
  ECX = (EDX);
  /* 115e4429 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115e442c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e442f je 0x115e4437 */
  if (C.zf) goto L_115e4437;
  /* 115e4431 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115e4433 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115e4435 je 0x115e443d */
  if (C.zf) goto L_115e443d;
L_115e4437:;
  /* 115e4437 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4439 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e443a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115e443b jne 0x115e4437 */
  if (!C.zf) goto L_115e4437;
L_115e443d:;
  /* 115e443d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e4441 pop edi */
  EDI = (pop32());
  /* 115e4442 ret  */
  ESPCHK(0x115e43f0u, _esp0);
  ESP += 4; return;
L_115e4443:;
  /* 115e4443 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e4447 ret  */
  ESPCHK(0x115e43f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004448 @ 0x115e4448 (27 bytes, 13 insns) */
void f_115e4448(void) {
  FTRACE(0x115e4448u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4448 mov eax, dword ptr [0x115e6b88] */
  EAX = (r32((uint32_t)(0x115e6b88)));
  /* 115e444d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e444f je 0x115e4460 */
  if (C.zf) goto L_115e4460;
  /* 115e4451 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115e4455 call eax */
  call_ind((uint32_t)(EAX), 0x115e4457u);
  /* 115e4457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e4459 pop ecx */
  ECX = (pop32());
  /* 115e445a je 0x115e4460 */
  if (C.zf) goto L_115e4460;
  /* 115e445c push 1 */
  push32((uint32_t)(0x1u));
  /* 115e445e pop eax */
  EAX = (pop32());
  /* 115e445f ret  */
  ESPCHK(0x115e4448u, _esp0);
  ESP += 4; return;
L_115e4460:;
  /* 115e4460 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115e4462 ret  */
  ESPCHK(0x115e4448u, _esp0);
  ESP += 4; return;
}

/* FUN_10004463 @ 0x115e4463 (511 bytes, 193 insns) */
void f_115e4463(void) {
  FTRACE(0x115e4463u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4463 push ebp */
  push32((uint32_t)(EBP));
  /* 115e4464 mov ebp, esp */
  EBP = (ESP);
  /* 115e4466 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115e4468 push 0x115e54a8 */
  push32((uint32_t)(0x115e54a8u));
  /* 115e446d push 0x115e4c30 */
  push32((uint32_t)(0x115e4c30u));
  /* 115e4472 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115e4478 push eax */
  push32((uint32_t)(EAX));
  /* 115e4479 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115e4480 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4483 push ebx */
  push32((uint32_t)(EBX));
  /* 115e4484 push esi */
  push32((uint32_t)(ESI));
  /* 115e4485 push edi */
  push32((uint32_t)(EDI));
  /* 115e4486 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115e4489 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e448b cmp dword ptr [0x115e6bb0], edi */
  { uint32_t _a=(r32((uint32_t)(0x115e6bb0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4491 jne 0x115e44d9 */
  if (!C.zf) goto L_115e44d9;
  /* 115e4493 push edi */
  push32((uint32_t)(EDI));
  /* 115e4494 push edi */
  push32((uint32_t)(EDI));
  /* 115e4495 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e4497 pop ebx */
  EBX = (pop32());
  /* 115e4498 push ebx */
  push32((uint32_t)(EBX));
  /* 115e4499 push 0x115e54a0 */
  push32((uint32_t)(0x115e54a0u));
  /* 115e449e mov esi, 0x100 */
  ESI = (0x100u);
  /* 115e44a3 push esi */
  push32((uint32_t)(ESI));
  /* 115e44a4 push edi */
  push32((uint32_t)(EDI));
  /* 115e44a5 call dword ptr [0x115e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5010))), 0x115e44abu);
  /* 115e44ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e44ad je 0x115e44b7 */
  if (C.zf) goto L_115e44b7;
  /* 115e44af mov dword ptr [0x115e6bb0], ebx */
  w32((uint32_t)(0x115e6bb0), (EBX));
  /* 115e44b5 jmp 0x115e44d9 */
  goto L_115e44d9;
L_115e44b7:;
  /* 115e44b7 push edi */
  push32((uint32_t)(EDI));
  /* 115e44b8 push edi */
  push32((uint32_t)(EDI));
  /* 115e44b9 push ebx */
  push32((uint32_t)(EBX));
  /* 115e44ba push 0x115e549c */
  push32((uint32_t)(0x115e549cu));
  /* 115e44bf push esi */
  push32((uint32_t)(ESI));
  /* 115e44c0 push edi */
  push32((uint32_t)(EDI));
  /* 115e44c1 call dword ptr [0x115e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5014))), 0x115e44c7u);
  /* 115e44c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e44c9 je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e44cf mov dword ptr [0x115e6bb0], 2 */
  w32((uint32_t)(0x115e6bb0), (0x2u));
L_115e44d9:;
  /* 115e44d9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e44dc jle 0x115e44ee */
  if ((C.zf||C.sf!=C.of)) goto L_115e44ee;
  /* 115e44de push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e44e1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e44e4 call 0x115e4687 */
  push32(0x115e44e9u); f_115e4687();
  /* 115e44e9 pop ecx */
  ECX = (pop32());
  /* 115e44ea pop ecx */
  ECX = (pop32());
  /* 115e44eb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_115e44ee:;
  /* 115e44ee mov eax, dword ptr [0x115e6bb0] */
  EAX = (r32((uint32_t)(0x115e6bb0)));
  /* 115e44f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e44f6 jne 0x115e4515 */
  if (!C.zf) goto L_115e4515;
  /* 115e44f8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 115e44fb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115e44fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e4501 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e4504 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e4507 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e450a call dword ptr [0x115e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5014))), 0x115e4510u);
  /* 115e4510 jmp 0x115e45f3 */
  goto L_115e45f3;
L_115e4515:;
  /* 115e4515 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4518 jne 0x115e45f1 */
  if (!C.zf) goto L_115e45f1;
  /* 115e451e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4521 jne 0x115e452b */
  if (!C.zf) goto L_115e452b;
  /* 115e4523 mov eax, dword ptr [0x115e6ba8] */
  EAX = (r32((uint32_t)(0x115e6ba8)));
  /* 115e4528 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_115e452b:;
  /* 115e452b push edi */
  push32((uint32_t)(EDI));
  /* 115e452c push edi */
  push32((uint32_t)(EDI));
  /* 115e452d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e4530 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e4533 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 115e4536 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115e4538 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e453a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115e453d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e453e push eax */
  push32((uint32_t)(EAX));
  /* 115e453f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 115e4542 call dword ptr [0x115e5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5024))), 0x115e4548u);
  /* 115e4548 mov ebx, eax */
  EBX = (EAX);
  /* 115e454a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 115e454d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e454f je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e4555 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115e4558 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 115e455b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e455e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115e4560 call 0x115e4d10 */
  push32(0x115e4565u); f_115e4d10();
  /* 115e4565 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115e4568 mov eax, esp */
  EAX = (ESP);
  /* 115e456a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115e456d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e4571 jmp 0x115e4586 */
  goto L_115e4586;
  /* 115e4573 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e4575 pop eax */
  EAX = (pop32());
  /* 115e4576 ret  */
  ESPCHK(0x115e4463u, _esp0);
  ESP += 4; return;
  /* 115e4577 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115e457a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e457c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 115e457f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e4583 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_115e4586:;
  /* 115e4586 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4589 je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e458b push ebx */
  push32((uint32_t)(EBX));
  /* 115e458c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115e458f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e4592 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e4595 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e4597 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 115e459a call dword ptr [0x115e5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5024))), 0x115e45a0u);
  /* 115e45a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e45a2 je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e45a4 push edi */
  push32((uint32_t)(EDI));
  /* 115e45a5 push edi */
  push32((uint32_t)(EDI));
  /* 115e45a6 push ebx */
  push32((uint32_t)(EBX));
  /* 115e45a7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115e45aa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e45ad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e45b0 call dword ptr [0x115e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5010))), 0x115e45b6u);
  /* 115e45b6 mov esi, eax */
  ESI = (EAX);
  /* 115e45b8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 115e45bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e45bd je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e45bf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 115e45c3 je 0x115e4605 */
  if (C.zf) goto L_115e4605;
  /* 115e45c5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e45c8 je 0x115e4680 */
  if (C.zf) goto L_115e4680;
  /* 115e45ce cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e45d1 jg 0x115e45f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_115e45f1;
  /* 115e45d3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 115e45d6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115e45d9 push ebx */
  push32((uint32_t)(EBX));
  /* 115e45da push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115e45dd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e45e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e45e3 call dword ptr [0x115e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5010))), 0x115e45e9u);
  /* 115e45e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e45eb jne 0x115e4680 */
  if (!C.zf) goto L_115e4680;
L_115e45f1:;
  /* 115e45f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115e45f3:;
  /* 115e45f3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 115e45f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115e45f9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115e4600 pop edi */
  EDI = (pop32());
  /* 115e4601 pop esi */
  ESI = (pop32());
  /* 115e4602 pop ebx */
  EBX = (pop32());
  /* 115e4603 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e4604 ret  */
  ESPCHK(0x115e4463u, _esp0);
  ESP += 4; return;
L_115e4605:;
  /* 115e4605 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115e460c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 115e460f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4612 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115e4614 call 0x115e4d10 */
  push32(0x115e4619u); f_115e4d10();
  /* 115e4619 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115e461c mov ebx, esp */
  EBX = (ESP);
  /* 115e461e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 115e4621 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e4625 jmp 0x115e4639 */
  goto L_115e4639;
  /* 115e4627 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e4629 pop eax */
  EAX = (pop32());
  /* 115e462a ret  */
  ESPCHK(0x115e4463u, _esp0);
  ESP += 4; return;
  /* 115e462b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115e462e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115e4630 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e4632 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e4636 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_115e4639:;
  /* 115e4639 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e463b je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e463d push esi */
  push32((uint32_t)(ESI));
  /* 115e463e push ebx */
  push32((uint32_t)(EBX));
  /* 115e463f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 115e4642 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115e4645 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e4648 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e464b call dword ptr [0x115e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5010))), 0x115e4651u);
  /* 115e4651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e4653 je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
  /* 115e4655 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4658 push edi */
  push32((uint32_t)(EDI));
  /* 115e4659 push edi */
  push32((uint32_t)(EDI));
  /* 115e465a jne 0x115e4660 */
  if (!C.zf) goto L_115e4660;
  /* 115e465c push edi */
  push32((uint32_t)(EDI));
  /* 115e465d push edi */
  push32((uint32_t)(EDI));
  /* 115e465e jmp 0x115e4666 */
  goto L_115e4666;
L_115e4660:;
  /* 115e4660 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 115e4663 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_115e4666:;
  /* 115e4666 push esi */
  push32((uint32_t)(ESI));
  /* 115e4667 push ebx */
  push32((uint32_t)(EBX));
  /* 115e4668 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115e466d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 115e4670 call dword ptr [0x115e5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5064))), 0x115e4676u);
  /* 115e4676 mov esi, eax */
  ESI = (EAX);
  /* 115e4678 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e467a je 0x115e45f1 */
  if (C.zf) goto L_115e45f1;
L_115e4680:;
  /* 115e4680 mov eax, esi */
  EAX = (ESI);
  /* 115e4682 jmp 0x115e45f3 */
  goto L_115e45f3;
}

/* FUN_10004687 @ 0x115e4687 (43 bytes, 20 insns) */
void f_115e4687(void) {
  FTRACE(0x115e4687u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4687 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e468b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115e468f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115e4691 push esi */
  push32((uint32_t)(ESI));
  /* 115e4692 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 115e4695 je 0x115e46a4 */
  if (C.zf) goto L_115e46a4;
L_115e4697:;
  /* 115e4697 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e469a je 0x115e46a4 */
  if (C.zf) goto L_115e46a4;
  /* 115e469c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e469d mov esi, ecx */
  ESI = (ECX);
  /* 115e469f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115e46a0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115e46a2 jne 0x115e4697 */
  if (!C.zf) goto L_115e4697;
L_115e46a4:;
  /* 115e46a4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115e46a7 pop esi */
  ESI = (pop32());
  /* 115e46a8 jne 0x115e46af */
  if (!C.zf) goto L_115e46af;
  /* 115e46aa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e46ae ret  */
  ESPCHK(0x115e4687u, _esp0);
  ESP += 4; return;
L_115e46af:;
  /* 115e46af mov eax, edx */
  EAX = (EDX);
  /* 115e46b1 ret  */
  ESPCHK(0x115e4687u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b2 @ 0x115e46b2 (318 bytes, 123 insns) */
void f_115e46b2(void) {
  FTRACE(0x115e46b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e46b2 push ebp */
  push32((uint32_t)(EBP));
  /* 115e46b3 mov ebp, esp */
  EBP = (ESP);
  /* 115e46b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115e46b7 push 0x115e54c0 */
  push32((uint32_t)(0x115e54c0u));
  /* 115e46bc push 0x115e4c30 */
  push32((uint32_t)(0x115e4c30u));
  /* 115e46c1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115e46c7 push eax */
  push32((uint32_t)(EAX));
  /* 115e46c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115e46cf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e46d2 push ebx */
  push32((uint32_t)(EBX));
  /* 115e46d3 push esi */
  push32((uint32_t)(ESI));
  /* 115e46d4 push edi */
  push32((uint32_t)(EDI));
  /* 115e46d5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115e46d8 mov eax, dword ptr [0x115e6bb4] */
  EAX = (r32((uint32_t)(0x115e6bb4)));
  /* 115e46dd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e46df cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e46e1 jne 0x115e4721 */
  if (!C.zf) goto L_115e4721;
  /* 115e46e3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115e46e6 push eax */
  push32((uint32_t)(EAX));
  /* 115e46e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e46e9 pop esi */
  ESI = (pop32());
  /* 115e46ea push esi */
  push32((uint32_t)(ESI));
  /* 115e46eb push 0x115e54a0 */
  push32((uint32_t)(0x115e54a0u));
  /* 115e46f0 push esi */
  push32((uint32_t)(ESI));
  /* 115e46f1 call dword ptr [0x115e500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e500c))), 0x115e46f7u);
  /* 115e46f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e46f9 je 0x115e46ff */
  if (C.zf) goto L_115e46ff;
  /* 115e46fb mov eax, esi */
  EAX = (ESI);
  /* 115e46fd jmp 0x115e471c */
  goto L_115e471c;
L_115e46ff:;
  /* 115e46ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115e4702 push eax */
  push32((uint32_t)(EAX));
  /* 115e4703 push esi */
  push32((uint32_t)(ESI));
  /* 115e4704 push 0x115e549c */
  push32((uint32_t)(0x115e549cu));
  /* 115e4709 push esi */
  push32((uint32_t)(ESI));
  /* 115e470a push ebx */
  push32((uint32_t)(EBX));
  /* 115e470b call dword ptr [0x115e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5018))), 0x115e4711u);
  /* 115e4711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115e4713 je 0x115e47e7 */
  if (C.zf) goto L_115e47e7;
  /* 115e4719 push 2 */
  push32((uint32_t)(0x2u));
  /* 115e471b pop eax */
  EAX = (pop32());
L_115e471c:;
  /* 115e471c mov dword ptr [0x115e6bb4], eax */
  w32((uint32_t)(0x115e6bb4), (EAX));
L_115e4721:;
  /* 115e4721 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4724 jne 0x115e474a */
  if (!C.zf) goto L_115e474a;
  /* 115e4726 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115e4729 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e472b jne 0x115e4732 */
  if (!C.zf) goto L_115e4732;
  /* 115e472d mov eax, dword ptr [0x115e6b98] */
  EAX = (r32((uint32_t)(0x115e6b98)));
L_115e4732:;
  /* 115e4732 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e4735 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e4738 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e473b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e473e push eax */
  push32((uint32_t)(EAX));
  /* 115e473f call dword ptr [0x115e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5018))), 0x115e4745u);
  /* 115e4745 jmp 0x115e47e9 */
  goto L_115e47e9;
L_115e474a:;
  /* 115e474a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e474d jne 0x115e47e7 */
  if (!C.zf) goto L_115e47e7;
  /* 115e4753 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4756 jne 0x115e4760 */
  if (!C.zf) goto L_115e4760;
  /* 115e4758 mov eax, dword ptr [0x115e6ba8] */
  EAX = (r32((uint32_t)(0x115e6ba8)));
  /* 115e475d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_115e4760:;
  /* 115e4760 push ebx */
  push32((uint32_t)(EBX));
  /* 115e4761 push ebx */
  push32((uint32_t)(EBX));
  /* 115e4762 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e4765 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e4768 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115e476b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115e476d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e476f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115e4772 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115e4773 push eax */
  push32((uint32_t)(EAX));
  /* 115e4774 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115e4777 call dword ptr [0x115e5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5024))), 0x115e477du);
  /* 115e477d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115e4780 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4782 je 0x115e47e7 */
  if (C.zf) goto L_115e47e7;
  /* 115e4784 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 115e4787 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 115e478a mov eax, edi */
  EAX = (EDI);
  /* 115e478c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e478f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115e4791 call 0x115e4d10 */
  push32(0x115e4796u); f_115e4d10();
  /* 115e4796 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115e4799 mov esi, esp */
  ESI = (ESP);
  /* 115e479b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 115e479e push edi */
  push32((uint32_t)(EDI));
  /* 115e479f push ebx */
  push32((uint32_t)(EBX));
  /* 115e47a0 push esi */
  push32((uint32_t)(ESI));
  /* 115e47a1 call 0x115e43f0 */
  push32(0x115e47a6u); f_115e43f0();
  /* 115e47a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e47a9 jmp 0x115e47b6 */
  goto L_115e47b6;
  /* 115e47ab push 1 */
  push32((uint32_t)(0x1u));
  /* 115e47ad pop eax */
  EAX = (pop32());
  /* 115e47ae ret  */
  ESPCHK(0x115e46b2u, _esp0);
  ESP += 4; return;
  /* 115e47af mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115e47b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115e47b4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_115e47b6:;
  /* 115e47b6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115e47ba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e47bc je 0x115e47e7 */
  if (C.zf) goto L_115e47e7;
  /* 115e47be push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 115e47c1 push esi */
  push32((uint32_t)(ESI));
  /* 115e47c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115e47c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115e47c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115e47ca push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115e47cd call dword ptr [0x115e5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e5024))), 0x115e47d3u);
  /* 115e47d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e47d5 je 0x115e47e7 */
  if (C.zf) goto L_115e47e7;
  /* 115e47d7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115e47da push eax */
  push32((uint32_t)(EAX));
  /* 115e47db push esi */
  push32((uint32_t)(ESI));
  /* 115e47dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e47df call dword ptr [0x115e500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115e500c))), 0x115e47e5u);
  /* 115e47e5 jmp 0x115e47e9 */
  goto L_115e47e9;
L_115e47e7:;
  /* 115e47e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115e47e9:;
  /* 115e47e9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 115e47ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115e47ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115e47f6 pop edi */
  EDI = (pop32());
  /* 115e47f7 pop esi */
  ESI = (pop32());
  /* 115e47f8 pop ebx */
  EBX = (pop32());
  /* 115e47f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e47fa ret  */
  ESPCHK(0x115e46b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x115e4800 (664 bytes, 260 insns) [15 switch table(s)] */
void f_115e4800(void) {
  FTRACE(0x115e4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4800 push ebp */
  push32((uint32_t)(EBP));
  /* 115e4801 mov ebp, esp */
  EBP = (ESP);
  /* 115e4803 push edi */
  push32((uint32_t)(EDI));
  /* 115e4804 push esi */
  push32((uint32_t)(ESI));
  /* 115e4805 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115e4808 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115e480b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115e480e mov eax, ecx */
  EAX = (ECX);
  /* 115e4810 mov edx, ecx */
  EDX = (ECX);
  /* 115e4812 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4814 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4816 jbe 0x115e4820 */
  if ((C.cf||C.zf)) goto L_115e4820;
  /* 115e4818 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e481a jb 0x115e4998 */
  if (C.cf) goto L_115e4998;
L_115e4820:;
  /* 115e4820 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115e4826 jne 0x115e483c */
  if (!C.zf) goto L_115e483c;
  /* 115e4828 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e482b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115e482e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4831 jb 0x115e485c */
  if (C.cf) goto L_115e485c;
  /* 115e4833 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e4835 jmp dword ptr [edx*4 + 0x115e4948] */
  switch (EDX) {
    case 0: goto L_115e4958;
    case 1: goto L_115e4960;
    case 2: goto L_115e496c;
    case 3: goto L_115e4980;
    default: x86_unimpl("switch@0x115e4835 out of table"); return;
  }
L_115e483c:;
  /* 115e483c mov eax, edi */
  EAX = (EDI);
  /* 115e483e mov edx, 3 */
  EDX = (0x3u);
  /* 115e4843 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4846 jb 0x115e4854 */
  if (C.cf) goto L_115e4854;
  /* 115e4848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115e484b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115e484d jmp dword ptr [eax*4 + 0x115e4860] */
  switch (EAX) {
    case 1: goto L_115e4870;
    case 2: goto L_115e489c;
    case 3: goto L_115e48c0;
    default: x86_unimpl("switch@0x115e484d out of table"); return;
  }
L_115e4854:;
  /* 115e4854 jmp dword ptr [ecx*4 + 0x115e4958] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115e4958)))); return;
  /* 115e485b nop  */
  /* nop */
L_115e485c:;
  /* 115e485c jmp dword ptr [ecx*4 + 0x115e48dc] */
  switch (ECX) {
    case 0: goto L_115e493f;
    case 1: goto L_115e492c;
    case 2: goto L_115e4924;
    case 3: goto L_115e491c;
    case 4: goto L_115e4914;
    case 5: goto L_115e490c;
    case 6: goto L_115e4904;
    case 7: goto L_115e48fc;
    default: x86_unimpl("switch@0x115e485c out of table"); return;
  }
  /* 115e4863 nop  */
  /* nop */
L_115e4870:;
  /* 115e4870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e4872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e4874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4876 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e4879 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e487c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e487f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e4882 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e4885 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4888 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e488b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e488e jb 0x115e485c */
  if (C.cf) goto L_115e485c;
  /* 115e4890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e4892 jmp dword ptr [edx*4 + 0x115e4948] */
  switch (EDX) {
    case 0: goto L_115e4958;
    case 1: goto L_115e4960;
    case 2: goto L_115e496c;
    case 3: goto L_115e4980;
    default: x86_unimpl("switch@0x115e4892 out of table"); return;
  }
  /* 115e4899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e489c:;
  /* 115e489c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e489e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e48a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e48a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e48a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e48a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e48ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e48ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e48b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e48b4 jb 0x115e485c */
  if (C.cf) goto L_115e485c;
  /* 115e48b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e48b8 jmp dword ptr [edx*4 + 0x115e4948] */
  switch (EDX) {
    case 0: goto L_115e4958;
    case 1: goto L_115e4960;
    case 2: goto L_115e496c;
    case 3: goto L_115e4980;
    default: x86_unimpl("switch@0x115e48b8 out of table"); return;
  }
  /* 115e48bf nop  */
  /* nop */
L_115e48c0:;
  /* 115e48c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e48c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e48c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e48c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115e48c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e48ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115e48cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e48ce jb 0x115e485c */
  if (C.cf) goto L_115e485c;
  /* 115e48d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e48d2 jmp dword ptr [edx*4 + 0x115e4948] */
  switch (EDX) {
    case 0: goto L_115e4958;
    case 1: goto L_115e4960;
    case 2: goto L_115e496c;
    case 3: goto L_115e4980;
    default: x86_unimpl("switch@0x115e48d2 out of table"); return;
  }
  /* 115e48d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e48fc:;
  /* 115e48fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 115e4900 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_115e4904:;
  /* 115e4904 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 115e4908 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_115e490c:;
  /* 115e490c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 115e4910 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_115e4914:;
  /* 115e4914 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 115e4918 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_115e491c:;
  /* 115e491c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 115e4920 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_115e4924:;
  /* 115e4924 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 115e4928 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_115e492c:;
  /* 115e492c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 115e4930 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 115e4934 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115e493b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e493d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115e493f:;
  /* 115e493f jmp dword ptr [edx*4 + 0x115e4948] */
  switch (EDX) {
    case 0: goto L_115e4958;
    case 1: goto L_115e4960;
    case 2: goto L_115e496c;
    case 3: goto L_115e4980;
    default: x86_unimpl("switch@0x115e493f out of table"); return;
  }
  /* 115e4946 mov edi, edi */
  EDI = (EDI);
L_115e4958:;
  /* 115e4958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e495b pop esi */
  ESI = (pop32());
  /* 115e495c pop edi */
  EDI = (pop32());
  /* 115e495d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e495e ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e495f nop  */
  /* nop */
L_115e4960:;
  /* 115e4960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e4962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4967 pop esi */
  ESI = (pop32());
  /* 115e4968 pop edi */
  EDI = (pop32());
  /* 115e4969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e496a ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e496b nop  */
  /* nop */
L_115e496c:;
  /* 115e496c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e496e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4970 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e4973 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e4976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4979 pop esi */
  ESI = (pop32());
  /* 115e497a pop edi */
  EDI = (pop32());
  /* 115e497b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e497c ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e497d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e4980:;
  /* 115e4980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115e4982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115e4984 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e4987 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e498a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e498d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e4990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4993 pop esi */
  ESI = (pop32());
  /* 115e4994 pop edi */
  EDI = (pop32());
  /* 115e4995 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e4996 ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e4997 nop  */
  /* nop */
L_115e4998:;
  /* 115e4998 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115e499c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115e49a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115e49a6 jne 0x115e49cc */
  if (!C.zf) goto L_115e49cc;
  /* 115e49a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e49ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115e49ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e49b1 jb 0x115e49c0 */
  if (C.cf) goto L_115e49c0;
  /* 115e49b3 std  */
  C.df=1;
  /* 115e49b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e49b6 cld  */
  C.df=0;
  /* 115e49b7 jmp dword ptr [edx*4 + 0x115e4ae0] */
  switch (EDX) {
    case 0: goto L_115e4af0;
    case 1: goto L_115e4af8;
    case 2: goto L_115e4b08;
    case 3: goto L_115e4b1c;
    default: x86_unimpl("switch@0x115e49b7 out of table"); return;
  }
  /* 115e49be mov edi, edi */
  EDI = (EDI);
L_115e49c0:;
  /* 115e49c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115e49c2 jmp dword ptr [ecx*4 + 0x115e4a90] */
  switch (ECX) {
    case 0: goto L_115e4ad7;
    default: x86_unimpl("switch@0x115e49c2 out of table"); return;
  }
  /* 115e49c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e49cc:;
  /* 115e49cc mov eax, edi */
  EAX = (EDI);
  /* 115e49ce mov edx, 3 */
  EDX = (0x3u);
  /* 115e49d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e49d6 jb 0x115e49e4 */
  if (C.cf) goto L_115e49e4;
  /* 115e49d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115e49db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e49dd jmp dword ptr [eax*4 + 0x115e49e8] */
  switch (EAX) {
    case 1: goto L_115e49f8;
    case 2: goto L_115e4a18;
    case 3: goto L_115e4a40;
    default: x86_unimpl("switch@0x115e49dd out of table"); return;
  }
L_115e49e4:;
  /* 115e49e4 jmp dword ptr [ecx*4 + 0x115e4ae0] */
  switch (ECX) {
    case 0: goto L_115e4af0;
    case 1: goto L_115e4af8;
    case 2: goto L_115e4b08;
    case 3: goto L_115e4b1c;
    default: x86_unimpl("switch@0x115e49e4 out of table"); return;
  }
  /* 115e49eb nop  */
  /* nop */
L_115e49f8:;
  /* 115e49f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e49fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e49fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e4a00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115e4a01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e4a04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115e4a05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4a08 jb 0x115e49c0 */
  if (C.cf) goto L_115e49c0;
  /* 115e4a0a std  */
  C.df=1;
  /* 115e4a0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e4a0d cld  */
  C.df=0;
  /* 115e4a0e jmp dword ptr [edx*4 + 0x115e4ae0] */
  switch (EDX) {
    case 0: goto L_115e4af0;
    case 1: goto L_115e4af8;
    case 2: goto L_115e4b08;
    case 3: goto L_115e4b1c;
    default: x86_unimpl("switch@0x115e4a0e out of table"); return;
  }
  /* 115e4a15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e4a18:;
  /* 115e4a18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e4a1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e4a1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e4a20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e4a23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e4a26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e4a29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4a2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4a2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4a32 jb 0x115e49c0 */
  if (C.cf) goto L_115e49c0;
  /* 115e4a34 std  */
  C.df=1;
  /* 115e4a35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e4a37 cld  */
  C.df=0;
  /* 115e4a38 jmp dword ptr [edx*4 + 0x115e4ae0] */
  switch (EDX) {
    case 0: goto L_115e4af0;
    case 1: goto L_115e4af8;
    case 2: goto L_115e4b08;
    case 3: goto L_115e4b1c;
    default: x86_unimpl("switch@0x115e4a38 out of table"); return;
  }
  /* 115e4a3f nop  */
  /* nop */
L_115e4a40:;
  /* 115e4a40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e4a43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115e4a45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e4a48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e4a4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e4a4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e4a51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115e4a54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e4a57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4a5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4a5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4a60 jb 0x115e49c0 */
  if (C.cf) goto L_115e49c0;
  /* 115e4a66 std  */
  C.df=1;
  /* 115e4a67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115e4a69 cld  */
  C.df=0;
  /* 115e4a6a jmp dword ptr [edx*4 + 0x115e4ae0] */
  switch (EDX) {
    case 0: goto L_115e4af0;
    case 1: goto L_115e4af8;
    case 2: goto L_115e4b08;
    case 3: goto L_115e4b1c;
    default: x86_unimpl("switch@0x115e4a6a out of table"); return;
  }
  /* 115e4a71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115e4a74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 115e4a75 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115e4a76 pop esi */
  ESI = (pop32());
  /* 115e4a77 adc dword ptr [edx + ecx*2 + 0x4aa4115e], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*2 + 0x4aa4115e))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*2 + 0x4aa4115e), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e4a7e pop esi */
  ESI = (pop32());
  /* 115e4a7f adc dword ptr [edx + ecx*2 + 0x4ab4115e], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*2 + 0x4ab4115e))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*2 + 0x4ab4115e), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e4a86 pop esi */
  ESI = (pop32());
  /* 115e4a87 adc dword ptr [edx + ecx*2 + 0x4ac4115e], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*2 + 0x4ac4115e))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*2 + 0x4ac4115e), (_r)); fl_add(_a,_b,_r,32); }
  /* 115e4a8e pop esi */
  ESI = (pop32());
  /* 115e4a94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115e4a98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115e4a9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115e4aa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115e4aa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115e4aa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115e4aac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115e4ab0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115e4ab4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115e4ab8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115e4abc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115e4ac0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115e4ac4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115e4ac8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 115e4acc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115e4ad3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4ad5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115e4ad7:;
  /* 115e4ad7 jmp dword ptr [edx*4 + 0x115e4ae0] */
  switch (EDX) {
    case 0: goto L_115e4af0;
    case 1: goto L_115e4af8;
    case 2: goto L_115e4b08;
    case 3: goto L_115e4b1c;
    default: x86_unimpl("switch@0x115e4ad7 out of table"); return;
  }
  /* 115e4ade mov edi, edi */
  EDI = (EDI);
L_115e4af0:;
  /* 115e4af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4af3 pop esi */
  ESI = (pop32());
  /* 115e4af4 pop edi */
  EDI = (pop32());
  /* 115e4af5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e4af6 ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e4af7 nop  */
  /* nop */
L_115e4af8:;
  /* 115e4af8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e4afb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e4afe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4b01 pop esi */
  ESI = (pop32());
  /* 115e4b02 pop edi */
  EDI = (pop32());
  /* 115e4b03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e4b04 ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e4b05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115e4b08:;
  /* 115e4b08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e4b0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e4b0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e4b11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e4b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4b17 pop esi */
  ESI = (pop32());
  /* 115e4b18 pop edi */
  EDI = (pop32());
  /* 115e4b19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e4b1a ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
  /* 115e4b1b nop  */
  /* nop */
L_115e4b1c:;
  /* 115e4b1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115e4b1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115e4b22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115e4b25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115e4b28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115e4b2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115e4b2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4b31 pop esi */
  ESI = (pop32());
  /* 115e4b32 pop edi */
  EDI = (pop32());
  /* 115e4b33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115e4b34 ret  */
  ESPCHK(0x115e4800u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x115e4b38 (32 bytes, 18 insns) */
void f_115e4b38(void) {
  FTRACE(0x115e4b38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4b38 push ebp */
  push32((uint32_t)(EBP));
  /* 115e4b39 mov ebp, esp */
  EBP = (ESP);
  /* 115e4b3b push ebx */
  push32((uint32_t)(EBX));
  /* 115e4b3c push esi */
  push32((uint32_t)(ESI));
  /* 115e4b3d push edi */
  push32((uint32_t)(EDI));
  /* 115e4b3e push ebp */
  push32((uint32_t)(EBP));
  /* 115e4b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 115e4b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 115e4b43 push 0x115e4b50 */
  push32((uint32_t)(0x115e4b50u));
  /* 115e4b48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115e4b4b call 0x115e4d40 */
  push32(0x115e4b50u); f_115e4d40();
  /* 115e4b50 pop ebp */
  EBP = (pop32());
  /* 115e4b51 pop edi */
  EDI = (pop32());
  /* 115e4b52 pop esi */
  ESI = (pop32());
  /* 115e4b53 pop ebx */
  EBX = (pop32());
  /* 115e4b54 mov esp, ebp */
  ESP = (EBP);
  /* 115e4b56 pop ebp */
  EBP = (pop32());
  /* 115e4b57 ret  */
  ESPCHK(0x115e4b38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x115e4b7a (104 bytes, 33 insns) */
void f_115e4b7a(void) {
  FTRACE(0x115e4b7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4b7a push ebx */
  push32((uint32_t)(EBX));
  /* 115e4b7b push esi */
  push32((uint32_t)(ESI));
  /* 115e4b7c push edi */
  push32((uint32_t)(EDI));
  /* 115e4b7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115e4b81 push eax */
  push32((uint32_t)(EAX));
  /* 115e4b82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 115e4b84 push 0x115e4b58 */
  push32((uint32_t)(0x115e4b58u));
  /* 115e4b89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 115e4b90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_115e4b97:;
  /* 115e4b97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 115e4b9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 115e4b9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 115e4ba1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4ba4 je 0x115e4bd4 */
  if (C.zf) goto L_115e4bd4;
  /* 115e4ba6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4baa je 0x115e4bd4 */
  if (C.zf) goto L_115e4bd4;
  /* 115e4bac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 115e4baf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 115e4bb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 115e4bb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 115e4bb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4bbe jne 0x115e4bd2 */
  if (!C.zf) goto L_115e4bd2;
  /* 115e4bc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 115e4bc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 115e4bc9 call 0x115e4c0e */
  push32(0x115e4bceu); f_115e4c0e();
  /* 115e4bce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x115e4bd2u);
L_115e4bd2:;
  /* 115e4bd2 jmp 0x115e4b97 */
  goto L_115e4b97;
L_115e4bd4:;
  /* 115e4bd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 115e4bdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4bde pop edi */
  EDI = (pop32());
  /* 115e4bdf pop esi */
  ESI = (pop32());
  /* 115e4be0 pop ebx */
  EBX = (pop32());
  /* 115e4be1 ret  */
  ESPCHK(0x115e4b7au, _esp0);
  ESP += 4; return;
}

/* FUN_10004c0e @ 0x115e4c0e (24 bytes, 10 insns) */
void f_115e4c0e(void) {
  FTRACE(0x115e4c0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4c0e push ebx */
  push32((uint32_t)(EBX));
  /* 115e4c0f push ecx */
  push32((uint32_t)(ECX));
  /* 115e4c10 mov ebx, 0x115e6810 */
  EBX = (0x115e6810u);
  /* 115e4c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115e4c18 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 115e4c1b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 115e4c1e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 115e4c21 pop ecx */
  ECX = (pop32());
  /* 115e4c22 pop ebx */
  EBX = (pop32());
  /* 115e4c23 ret 4 */
  ESPCHK(0x115e4c0eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004ced @ 0x115e4ced (27 bytes, 11 insns) */
void f_115e4ced(void) {
  FTRACE(0x115e4cedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4ced push ebp */
  push32((uint32_t)(EBP));
  /* 115e4cee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 115e4cf2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 115e4cf4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115e4cf7 push eax */
  push32((uint32_t)(EAX));
  /* 115e4cf8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 115e4cfb push eax */
  push32((uint32_t)(EAX));
  /* 115e4cfc call 0x115e4b7a */
  push32(0x115e4d01u); f_115e4b7a();
  /* 115e4d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115e4d04 pop ebp */
  EBP = (pop32());
  /* 115e4d05 ret 4 */
  ESPCHK(0x115e4cedu, _esp0);
  ESP += 8; return;
}

/* FUN_10004d10 @ 0x115e4d10 (47 bytes, 17 insns) */
void f_115e4d10(void) {
  FTRACE(0x115e4d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4d10 push ecx */
  push32((uint32_t)(ECX));
  /* 115e4d11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4d16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 115e4d1a jb 0x115e4d30 */
  if (C.cf) goto L_115e4d30;
L_115e4d1c:;
  /* 115e4d1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4d22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4d27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115e4d29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115e4d2e jae 0x115e4d1c */
  if (!C.cf) goto L_115e4d1c;
L_115e4d30:;
  /* 115e4d30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115e4d32 mov eax, esp */
  EAX = (ESP);
  /* 115e4d34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115e4d36 mov esp, ecx */
  ESP = (ECX);
  /* 115e4d38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115e4d3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 115e4d3d push eax */
  push32((uint32_t)(EAX));
  /* 115e4d3e ret  */
  ESPCHK(0x115e4d10u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x115e4d40 (6 bytes, 1 insns) */
void f_115e4d40(void) {
  FTRACE(0x115e4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115e4d40 jmp dword ptr [0x115e5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115e5008)))); return;
}

