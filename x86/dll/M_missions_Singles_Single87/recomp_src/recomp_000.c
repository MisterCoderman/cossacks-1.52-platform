#include "recomp.h"

/* FUN_10001000 @ 0x11ea1000 (18 bytes, 7 insns) */
void f_11ea1000(void) {
  FTRACE(0x11ea1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea1005 jne 0x11ea100c */
  if (!C.zf) goto L_11ea100c;
  /* 11ea1007 call 0x11ea116c */
  push32(0x11ea100cu); f_11ea116c();
L_11ea100c:;
  /* 11ea100c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea100e pop eax */
  EAX = (pop32());
  /* 11ea100f ret 0xc */
  ESPCHK(0x11ea1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x11ea1012 (30 bytes, 15 insns) */
void f_11ea1012(void) {
  FTRACE(0x11ea1012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea1012 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1013 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11ea1015:;
  /* 11ea1015 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1016 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11ea101a call dword ptr [0x11ea6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6158))), 0x11ea1020u);
  /* 11ea1020 pop ecx */
  ECX = (pop32());
  /* 11ea1021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1023 pop ecx */
  ECX = (pop32());
  /* 11ea1024 jg 0x11ea102c */
  if ((!C.zf&&C.sf==C.of)) goto L_11ea102c;
  /* 11ea1026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea1027 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea102a jl 0x11ea1015 */
  if ((C.sf!=C.of)) goto L_11ea1015;
L_11ea102c:;
  /* 11ea102c mov eax, esi */
  EAX = (ESI);
  /* 11ea102e pop esi */
  ESI = (pop32());
  /* 11ea102f ret  */
  ESPCHK(0x11ea1012u, _esp0);
  ESP += 4; return;
}

/* FUN_10001030 @ 0x11ea1030 (67 bytes, 26 insns) */
void f_11ea1030(void) {
  FTRACE(0x11ea1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea1030 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea1031 mov ebp, esp */
  EBP = (ESP);
  /* 11ea1033 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1034 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea1037 call 0x11ea1012 */
  push32(0x11ea103cu); f_11ea1012();
  /* 11ea103c mov esi, eax */
  ESI = (EAX);
  /* 11ea103e push esi */
  push32((uint32_t)(ESI));
  /* 11ea103f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea1042 call dword ptr [0x11ea6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6158))), 0x11ea1048u);
  /* 11ea1048 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea104b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea104d je 0x11ea106e */
  if (C.zf) goto L_11ea106e;
  /* 11ea104f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1051 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea1054 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1055 call dword ptr [0x11ea6150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6150))), 0x11ea105bu);
  /* 11ea105b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea105e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea1061 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea1064 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1065 call dword ptr [0x11ea6154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6154))), 0x11ea106bu);
  /* 11ea106b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea106e:;
  /* 11ea106e mov eax, esi */
  EAX = (ESI);
  /* 11ea1070 pop esi */
  ESI = (pop32());
  /* 11ea1071 pop ebp */
  EBP = (pop32());
  /* 11ea1072 ret  */
  ESPCHK(0x11ea1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001073 @ 0x11ea1073 (24 bytes, 7 insns) */
void f_11ea1073(void) {
  FTRACE(0x11ea1073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea1073 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1075 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11ea107a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea107e push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea1082 call 0x11ea1030 */
  push32(0x11ea1087u); f_11ea1030();
  /* 11ea1087 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea108a ret  */
  ESPCHK(0x11ea1073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000108b @ 0x11ea108b (23 bytes, 7 insns) */
void f_11ea108b(void) {
  FTRACE(0x11ea108bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea108b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea108d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea1091 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea1095 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea1099 call 0x11ea1030 */
  push32(0x11ea109eu); f_11ea1030();
  /* 11ea109e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea10a1 ret  */
  ESPCHK(0x11ea108bu, _esp0);
  ESP += 4; return;
}

/* FUN_100010a2 @ 0x11ea10a2 (24 bytes, 7 insns) */
void f_11ea10a2(void) {
  FTRACE(0x11ea10a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea10a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea10a4 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11ea10a9 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea10ad push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea10b1 call 0x11ea1030 */
  push32(0x11ea10b6u); f_11ea1030();
  /* 11ea10b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea10b9 ret  */
  ESPCHK(0x11ea10a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100010ba @ 0x11ea10ba (23 bytes, 7 insns) */
void f_11ea10ba(void) {
  FTRACE(0x11ea10bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea10ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea10bc push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea10c0 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea10c4 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea10c8 call 0x11ea1030 */
  push32(0x11ea10cdu); f_11ea1030();
  /* 11ea10cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea10d0 ret  */
  ESPCHK(0x11ea10bau, _esp0);
  ESP += 4; return;
}

/* FUN_100010d1 @ 0x11ea10d1 (37 bytes, 13 insns) */
void f_11ea10d1(void) {
  FTRACE(0x11ea10d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea10d1 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea10d2 mov ebp, esp */
  EBP = (ESP);
  /* 11ea10d4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ea10d7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea10da push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea10dd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea10e0 push 0x11ea7628 */
  push32((uint32_t)(0x11ea7628u));
  /* 11ea10e5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea10e8 call dword ptr [0x11ea614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea614c))), 0x11ea10eeu);
  /* 11ea10ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ea10f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea10f4 pop ebp */
  EBP = (pop32());
  /* 11ea10f5 ret  */
  ESPCHK(0x11ea10d1u, _esp0);
  ESP += 4; return;
}

/* FUN_100010f6 @ 0x11ea10f6 (118 bytes, 40 insns) */
void f_11ea10f6(void) {
  FTRACE(0x11ea10f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea10f6 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea10f7 mov ebp, esp */
  EBP = (ESP);
  /* 11ea10f9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea10fc call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea1102u);
  /* 11ea1102 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1104 pop ecx */
  ECX = (pop32());
  /* 11ea1105 je 0x11ea116a */
  if (C.zf) goto L_11ea116a;
  /* 11ea1107 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea110a call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1110u);
  /* 11ea1110 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1113 pop ecx */
  ECX = (pop32());
  /* 11ea1114 jge 0x11ea115a */
  if ((C.sf==C.of)) goto L_11ea115a;
  /* 11ea1116 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1117 mov esi, 0x11ea75f0 */
  ESI = (0x11ea75f0u);
  /* 11ea111c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea111f push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1121 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea1124 push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea1129 push esi */
  push32((uint32_t)(ESI));
  /* 11ea112a call 0x11ea10d1 */
  push32(0x11ea112fu); f_11ea10d1();
  /* 11ea112f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea1132 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1133 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1139u);
  /* 11ea1139 push 0x11ea7740 */
  push32((uint32_t)(0x11ea7740u));
  /* 11ea113e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea1141 call 0x11ea10a2 */
  push32(0x11ea1146u); f_11ea10a2();
  /* 11ea1146 push 0x10e */
  push32((uint32_t)(0x10eu));
  /* 11ea114b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea114e call dword ptr [0x11ea6144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6144))), 0x11ea1154u);
  /* 11ea1154 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1157 pop esi */
  ESI = (pop32());
  /* 11ea1158 pop ebp */
  EBP = (pop32());
  /* 11ea1159 ret  */
  ESPCHK(0x11ea10f6u, _esp0);
  ESP += 4; return;
L_11ea115a:;
  /* 11ea115a push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 11ea115f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea1162 call dword ptr [0x11ea6144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6144))), 0x11ea1168u);
  /* 11ea1168 pop ecx */
  ECX = (pop32());
  /* 11ea1169 pop ecx */
  ECX = (pop32());
L_11ea116a:;
  /* 11ea116a pop ebp */
  EBP = (pop32());
  /* 11ea116b ret  */
  ESPCHK(0x11ea10f6u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11ea116c (824 bytes, 225 insns) */
void f_11ea116c(void) {
  FTRACE(0x11ea116cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea116c push ebx */
  push32((uint32_t)(EBX));
  /* 11ea116d push ebp */
  push32((uint32_t)(EBP));
  /* 11ea116e push esi */
  push32((uint32_t)(ESI));
  /* 11ea116f push edi */
  push32((uint32_t)(EDI));
  /* 11ea1170 mov edi, dword ptr [0x11ea611c] */
  EDI = (r32((uint32_t)(0x11ea611c)));
  /* 11ea1176 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea1178 pop esi */
  ESI = (pop32());
  /* 11ea1179 push esi */
  push32((uint32_t)(ESI));
  /* 11ea117a push 0x11ea75a0 */
  push32((uint32_t)(0x11ea75a0u));
  /* 11ea117f call edi */
  call_ind((uint32_t)(EDI), 0x11ea1181u);
  /* 11ea1181 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1182 push 0x11ea75a4 */
  push32((uint32_t)(0x11ea75a4u));
  /* 11ea1187 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1189u);
  /* 11ea1189 push esi */
  push32((uint32_t)(ESI));
  /* 11ea118a push 0x11ea7770 */
  push32((uint32_t)(0x11ea7770u));
  /* 11ea118f call edi */
  call_ind((uint32_t)(EDI), 0x11ea1191u);
  /* 11ea1191 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1192 push 0x11ea76d8 */
  push32((uint32_t)(0x11ea76d8u));
  /* 11ea1197 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1199u);
  /* 11ea1199 mov esi, dword ptr [0x11ea6120] */
  ESI = (r32((uint32_t)(0x11ea6120)));
  /* 11ea119f push 0x11ea7188 */
  push32((uint32_t)(0x11ea7188u));
  /* 11ea11a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea11a6 call esi */
  call_ind((uint32_t)(ESI), 0x11ea11a8u);
  /* 11ea11a8 push 0x11ea7180 */
  push32((uint32_t)(0x11ea7180u));
  /* 11ea11ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea11af call esi */
  call_ind((uint32_t)(ESI), 0x11ea11b1u);
  /* 11ea11b1 push 0x11ea7178 */
  push32((uint32_t)(0x11ea7178u));
  /* 11ea11b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea11b8 call esi */
  call_ind((uint32_t)(ESI), 0x11ea11bau);
  /* 11ea11ba mov ebp, dword ptr [0x11ea6124] */
  EBP = (r32((uint32_t)(0x11ea6124)));
  /* 11ea11c0 push 0x11ea7170 */
  push32((uint32_t)(0x11ea7170u));
  /* 11ea11c5 push 0x11ea7698 */
  push32((uint32_t)(0x11ea7698u));
  /* 11ea11ca call ebp */
  call_ind((uint32_t)(EBP), 0x11ea11ccu);
  /* 11ea11cc mov esi, dword ptr [0x11ea6128] */
  ESI = (r32((uint32_t)(0x11ea6128)));
  /* 11ea11d2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea11d5 push 0x11ea716c */
  push32((uint32_t)(0x11ea716cu));
  /* 11ea11da push 0x11ea7610 */
  push32((uint32_t)(0x11ea7610u));
  /* 11ea11df call esi */
  call_ind((uint32_t)(ESI), 0x11ea11e1u);
  /* 11ea11e1 push 0x11ea7168 */
  push32((uint32_t)(0x11ea7168u));
  /* 11ea11e6 push 0x11ea7618 */
  push32((uint32_t)(0x11ea7618u));
  /* 11ea11eb call esi */
  call_ind((uint32_t)(ESI), 0x11ea11edu);
  /* 11ea11ed push 0x11ea7164 */
  push32((uint32_t)(0x11ea7164u));
  /* 11ea11f2 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea11f7 call esi */
  call_ind((uint32_t)(ESI), 0x11ea11f9u);
  /* 11ea11f9 push 0x11ea7160 */
  push32((uint32_t)(0x11ea7160u));
  /* 11ea11fe push 0x11ea7740 */
  push32((uint32_t)(0x11ea7740u));
  /* 11ea1203 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1205u);
  /* 11ea1205 push 0x11ea715c */
  push32((uint32_t)(0x11ea715cu));
  /* 11ea120a push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea120f call esi */
  call_ind((uint32_t)(ESI), 0x11ea1211u);
  /* 11ea1211 push 0x11ea7154 */
  push32((uint32_t)(0x11ea7154u));
  /* 11ea1216 push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea121b call esi */
  call_ind((uint32_t)(ESI), 0x11ea121du);
  /* 11ea121d push 0x11ea714c */
  push32((uint32_t)(0x11ea714cu));
  /* 11ea1222 push 0x11ea7648 */
  push32((uint32_t)(0x11ea7648u));
  /* 11ea1227 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1229u);
  /* 11ea1229 push 0x11ea7148 */
  push32((uint32_t)(0x11ea7148u));
  /* 11ea122e push 0x11ea76c0 */
  push32((uint32_t)(0x11ea76c0u));
  /* 11ea1233 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea1235u);
  /* 11ea1235 mov ebx, dword ptr [0x11ea612c] */
  EBX = (r32((uint32_t)(0x11ea612c)));
  /* 11ea123b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea123e push 0x11ea75f0 */
  push32((uint32_t)(0x11ea75f0u));
  /* 11ea1243 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1245u);
  /* 11ea1245 mov dword ptr [esp], 0x11ea76a0 */
  w32((uint32_t)(ESP), (0x11ea76a0u));
  /* 11ea124c call ebx */
  call_ind((uint32_t)(EBX), 0x11ea124eu);
  /* 11ea124e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1250 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea1255 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1257u);
  /* 11ea1257 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea125c call ebx */
  call_ind((uint32_t)(EBX), 0x11ea125eu);
  /* 11ea125e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1260 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea1265 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1267u);
  /* 11ea1267 push 0x11ea76b0 */
  push32((uint32_t)(0x11ea76b0u));
  /* 11ea126c call ebx */
  call_ind((uint32_t)(EBX), 0x11ea126eu);
  /* 11ea126e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1270 push 0x11ea76b0 */
  push32((uint32_t)(0x11ea76b0u));
  /* 11ea1275 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1277u);
  /* 11ea1277 push 0x11ea76b8 */
  push32((uint32_t)(0x11ea76b8u));
  /* 11ea127c call ebx */
  call_ind((uint32_t)(EBX), 0x11ea127eu);
  /* 11ea127e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1280 push 0x11ea76b8 */
  push32((uint32_t)(0x11ea76b8u));
  /* 11ea1285 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1287u);
  /* 11ea1287 push 0x11ea7778 */
  push32((uint32_t)(0x11ea7778u));
  /* 11ea128c call ebx */
  call_ind((uint32_t)(EBX), 0x11ea128eu);
  /* 11ea128e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1290 push 0x11ea7778 */
  push32((uint32_t)(0x11ea7778u));
  /* 11ea1295 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1297u);
  /* 11ea1297 push 0x11ea7140 */
  push32((uint32_t)(0x11ea7140u));
  /* 11ea129c push 0x11ea7750 */
  push32((uint32_t)(0x11ea7750u));
  /* 11ea12a1 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea12a3u);
  /* 11ea12a3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea12a6 push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea12ab push 0x11ea7720 */
  push32((uint32_t)(0x11ea7720u));
  /* 11ea12b0 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea12b2u);
  /* 11ea12b2 push 0x11ea7130 */
  push32((uint32_t)(0x11ea7130u));
  /* 11ea12b7 push 0x11ea76c8 */
  push32((uint32_t)(0x11ea76c8u));
  /* 11ea12bc call ebp */
  call_ind((uint32_t)(EBP), 0x11ea12beu);
  /* 11ea12be push 0x11ea7124 */
  push32((uint32_t)(0x11ea7124u));
  /* 11ea12c3 push 0x11ea7650 */
  push32((uint32_t)(0x11ea7650u));
  /* 11ea12c8 call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea12ceu);
  /* 11ea12ce push 0x11ea710c */
  push32((uint32_t)(0x11ea710cu));
  /* 11ea12d3 push 0x11ea7598 */
  push32((uint32_t)(0x11ea7598u));
  /* 11ea12d8 call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea12deu);
  /* 11ea12de push 0x11ea7104 */
  push32((uint32_t)(0x11ea7104u));
  /* 11ea12e3 push 0x11ea7768 */
  push32((uint32_t)(0x11ea7768u));
  /* 11ea12e8 call dword ptr [0x11ea6134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6134))), 0x11ea12eeu);
  /* 11ea12ee push 0x11ea70f8 */
  push32((uint32_t)(0x11ea70f8u));
  /* 11ea12f3 push 0x11ea7730 */
  push32((uint32_t)(0x11ea7730u));
  /* 11ea12f8 call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea12feu);
  /* 11ea12fe push 0x11ea70ec */
  push32((uint32_t)(0x11ea70ecu));
  /* 11ea1303 push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea1308 call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea130eu);
  /* 11ea130e push 0x11ea70e0 */
  push32((uint32_t)(0x11ea70e0u));
  /* 11ea1313 push 0x11ea7588 */
  push32((uint32_t)(0x11ea7588u));
  /* 11ea1318 call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea131eu);
  /* 11ea131e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1321 push 0x11ea70d0 */
  push32((uint32_t)(0x11ea70d0u));
  /* 11ea1326 push 0x11ea7788 */
  push32((uint32_t)(0x11ea7788u));
  /* 11ea132b call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea1331u);
  /* 11ea1331 push 0x11ea70c0 */
  push32((uint32_t)(0x11ea70c0u));
  /* 11ea1336 push 0x11ea75a8 */
  push32((uint32_t)(0x11ea75a8u));
  /* 11ea133b call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea1341u);
  /* 11ea1341 push 0x11ea70b8 */
  push32((uint32_t)(0x11ea70b8u));
  /* 11ea1346 push 0x11ea7628 */
  push32((uint32_t)(0x11ea7628u));
  /* 11ea134b call dword ptr [0x11ea6138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6138))), 0x11ea1351u);
  /* 11ea1351 push 0x11ea70b4 */
  push32((uint32_t)(0x11ea70b4u));
  /* 11ea1356 push 0x11ea76e0 */
  push32((uint32_t)(0x11ea76e0u));
  /* 11ea135b call esi */
  call_ind((uint32_t)(ESI), 0x11ea135du);
  /* 11ea135d push 0x11ea70b0 */
  push32((uint32_t)(0x11ea70b0u));
  /* 11ea1362 push 0x11ea76e8 */
  push32((uint32_t)(0x11ea76e8u));
  /* 11ea1367 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1369u);
  /* 11ea1369 push 0x11ea70a8 */
  push32((uint32_t)(0x11ea70a8u));
  /* 11ea136e push 0x11ea7758 */
  push32((uint32_t)(0x11ea7758u));
  /* 11ea1373 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1375u);
  /* 11ea1375 push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea137a call ebx */
  call_ind((uint32_t)(EBX), 0x11ea137cu);
  /* 11ea137c push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea137e push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea1383 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1385u);
  /* 11ea1385 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea138a call ebx */
  call_ind((uint32_t)(EBX), 0x11ea138cu);
  /* 11ea138c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea138f push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1391 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea1396 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1398u);
  /* 11ea1398 push 0x11ea7658 */
  push32((uint32_t)(0x11ea7658u));
  /* 11ea139d call ebx */
  call_ind((uint32_t)(EBX), 0x11ea139fu);
  /* 11ea139f push 0x11ea70a4 */
  push32((uint32_t)(0x11ea70a4u));
  /* 11ea13a4 push 0x11ea76f8 */
  push32((uint32_t)(0x11ea76f8u));
  /* 11ea13a9 call esi */
  call_ind((uint32_t)(ESI), 0x11ea13abu);
  /* 11ea13ab push 0x11ea70a0 */
  push32((uint32_t)(0x11ea70a0u));
  /* 11ea13b0 push 0x11ea7700 */
  push32((uint32_t)(0x11ea7700u));
  /* 11ea13b5 call esi */
  call_ind((uint32_t)(ESI), 0x11ea13b7u);
  /* 11ea13b7 push 0x11ea709c */
  push32((uint32_t)(0x11ea709cu));
  /* 11ea13bc push 0x11ea7708 */
  push32((uint32_t)(0x11ea7708u));
  /* 11ea13c1 call esi */
  call_ind((uint32_t)(ESI), 0x11ea13c3u);
  /* 11ea13c3 push 0x11ea7098 */
  push32((uint32_t)(0x11ea7098u));
  /* 11ea13c8 push 0x11ea7710 */
  push32((uint32_t)(0x11ea7710u));
  /* 11ea13cd call esi */
  call_ind((uint32_t)(ESI), 0x11ea13cfu);
  /* 11ea13cf push 0x11ea7094 */
  push32((uint32_t)(0x11ea7094u));
  /* 11ea13d4 push 0x11ea7718 */
  push32((uint32_t)(0x11ea7718u));
  /* 11ea13d9 call esi */
  call_ind((uint32_t)(ESI), 0x11ea13dbu);
  /* 11ea13db push 0x11ea708c */
  push32((uint32_t)(0x11ea708cu));
  /* 11ea13e0 push 0x11ea75c8 */
  push32((uint32_t)(0x11ea75c8u));
  /* 11ea13e5 call esi */
  call_ind((uint32_t)(ESI), 0x11ea13e7u);
  /* 11ea13e7 push 0x11ea7084 */
  push32((uint32_t)(0x11ea7084u));
  /* 11ea13ec push 0x11ea75d0 */
  push32((uint32_t)(0x11ea75d0u));
  /* 11ea13f1 call esi */
  call_ind((uint32_t)(ESI), 0x11ea13f3u);
  /* 11ea13f3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea13f6 push 0x11ea707c */
  push32((uint32_t)(0x11ea707cu));
  /* 11ea13fb push 0x11ea75d8 */
  push32((uint32_t)(0x11ea75d8u));
  /* 11ea1400 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1402u);
  /* 11ea1402 push 0x11ea7074 */
  push32((uint32_t)(0x11ea7074u));
  /* 11ea1407 push 0x11ea75e0 */
  push32((uint32_t)(0x11ea75e0u));
  /* 11ea140c call esi */
  call_ind((uint32_t)(ESI), 0x11ea140eu);
  /* 11ea140e push 0x11ea706c */
  push32((uint32_t)(0x11ea706cu));
  /* 11ea1413 push 0x11ea75e8 */
  push32((uint32_t)(0x11ea75e8u));
  /* 11ea1418 call esi */
  call_ind((uint32_t)(ESI), 0x11ea141au);
  /* 11ea141a mov esi, 0x11ea7780 */
  ESI = (0x11ea7780u);
  /* 11ea141f push esi */
  push32((uint32_t)(ESI));
  /* 11ea1420 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1422u);
  /* 11ea1422 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1424 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1425 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1427u);
  /* 11ea1427 push 0x11ea7060 */
  push32((uint32_t)(0x11ea7060u));
  /* 11ea142c push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1431 call dword ptr [0x11ea6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6130))), 0x11ea1437u);
  /* 11ea1437 push 0x11ea7058 */
  push32((uint32_t)(0x11ea7058u));
  /* 11ea143c push 0x11ea7670 */
  push32((uint32_t)(0x11ea7670u));
  /* 11ea1441 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea1443u);
  /* 11ea1443 push 0x11ea7050 */
  push32((uint32_t)(0x11ea7050u));
  /* 11ea1448 push 0x11ea7680 */
  push32((uint32_t)(0x11ea7680u));
  /* 11ea144d call ebp */
  call_ind((uint32_t)(EBP), 0x11ea144fu);
  /* 11ea144f push 0x11ea7048 */
  push32((uint32_t)(0x11ea7048u));
  /* 11ea1454 push 0x11ea7678 */
  push32((uint32_t)(0x11ea7678u));
  /* 11ea1459 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea145bu);
  /* 11ea145b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea145e push 0x11ea7040 */
  push32((uint32_t)(0x11ea7040u));
  /* 11ea1463 push 0x11ea7690 */
  push32((uint32_t)(0x11ea7690u));
  /* 11ea1468 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea146au);
  /* 11ea146a push 0x11ea7038 */
  push32((uint32_t)(0x11ea7038u));
  /* 11ea146f push 0x11ea7688 */
  push32((uint32_t)(0x11ea7688u));
  /* 11ea1474 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea1476u);
  /* 11ea1476 mov esi, 0x11ea7798 */
  ESI = (0x11ea7798u);
  /* 11ea147b push esi */
  push32((uint32_t)(ESI));
  /* 11ea147c call ebx */
  call_ind((uint32_t)(EBX), 0x11ea147eu);
  /* 11ea147e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea1480 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1481 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1483u);
  /* 11ea1483 mov esi, 0x11ea7790 */
  ESI = (0x11ea7790u);
  /* 11ea1488 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1489 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea148bu);
  /* 11ea148b push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea148d push esi */
  push32((uint32_t)(ESI));
  /* 11ea148e call edi */
  call_ind((uint32_t)(EDI), 0x11ea1490u);
  /* 11ea1490 push 0x11ea7030 */
  push32((uint32_t)(0x11ea7030u));
  /* 11ea1495 push 0x11ea76f0 */
  push32((uint32_t)(0x11ea76f0u));
  /* 11ea149a call ebp */
  call_ind((uint32_t)(EBP), 0x11ea149cu);
  /* 11ea149c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea149f pop edi */
  EDI = (pop32());
  /* 11ea14a0 pop esi */
  ESI = (pop32());
  /* 11ea14a1 pop ebp */
  EBP = (pop32());
  /* 11ea14a2 pop ebx */
  EBX = (pop32());
  /* 11ea14a3 ret  */
  ESPCHK(0x11ea116cu, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11ea14a4 (4603 bytes, 1465 insns) */
void f_11ea14a4(void) {
  FTRACE(0x11ea14a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea14a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea14a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea14a6 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea14a7 mov ebx, dword ptr [0x11ea60b0] */
  EBX = (r32((uint32_t)(0x11ea60b0)));
  /* 11ea14ad push esi */
  push32((uint32_t)(ESI));
  /* 11ea14ae push edi */
  push32((uint32_t)(EDI));
  /* 11ea14af push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea14b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea14b3 pop edi */
  EDI = (pop32());
  /* 11ea14b4 push edi */
  push32((uint32_t)(EDI));
  /* 11ea14b5 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea14b7u);
  /* 11ea14b7 pop ecx */
  ECX = (pop32());
  /* 11ea14b8 mov esi, dword ptr [0x11ea60b4] */
  ESI = (r32((uint32_t)(0x11ea60b4)));
  /* 11ea14be pop ecx */
  ECX = (pop32());
  /* 11ea14bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea14c1 pop ebp */
  EBP = (pop32());
  /* 11ea14c2 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea14c4 jge 0x11ea14cf */
  if ((C.sf==C.of)) goto L_11ea14cf;
  /* 11ea14c6 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea14c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea14c9 push edi */
  push32((uint32_t)(EDI));
  /* 11ea14ca call esi */
  call_ind((uint32_t)(ESI), 0x11ea14ccu);
  /* 11ea14cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea14cf:;
  /* 11ea14cf push edi */
  push32((uint32_t)(EDI));
  /* 11ea14d0 push edi */
  push32((uint32_t)(EDI));
  /* 11ea14d1 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea14d3u);
  /* 11ea14d3 pop ecx */
  ECX = (pop32());
  /* 11ea14d4 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea14d6 pop ecx */
  ECX = (pop32());
  /* 11ea14d7 jge 0x11ea14e1 */
  if ((C.sf==C.of)) goto L_11ea14e1;
  /* 11ea14d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea14da push edi */
  push32((uint32_t)(EDI));
  /* 11ea14db push edi */
  push32((uint32_t)(EDI));
  /* 11ea14dc call esi */
  call_ind((uint32_t)(ESI), 0x11ea14deu);
  /* 11ea14de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea14e1:;
  /* 11ea14e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea14e3 push edi */
  push32((uint32_t)(EDI));
  /* 11ea14e4 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea14e6u);
  /* 11ea14e6 pop ecx */
  ECX = (pop32());
  /* 11ea14e7 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea14e9 pop ecx */
  ECX = (pop32());
  /* 11ea14ea jge 0x11ea14f5 */
  if ((C.sf==C.of)) goto L_11ea14f5;
  /* 11ea14ec push ebp */
  push32((uint32_t)(EBP));
  /* 11ea14ed push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea14ef push edi */
  push32((uint32_t)(EDI));
  /* 11ea14f0 call esi */
  call_ind((uint32_t)(ESI), 0x11ea14f2u);
  /* 11ea14f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea14f5:;
  /* 11ea14f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea14f7 push edi */
  push32((uint32_t)(EDI));
  /* 11ea14f8 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea14fau);
  /* 11ea14fa pop ecx */
  ECX = (pop32());
  /* 11ea14fb cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea14fd pop ecx */
  ECX = (pop32());
  /* 11ea14fe jge 0x11ea1509 */
  if ((C.sf==C.of)) goto L_11ea1509;
  /* 11ea1500 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea1501 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1503 push edi */
  push32((uint32_t)(EDI));
  /* 11ea1504 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1506u);
  /* 11ea1506 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1509:;
  /* 11ea1509 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ea150b call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea1511u);
  /* 11ea1511 mov edi, dword ptr [0x11ea6144] */
  EDI = (r32((uint32_t)(0x11ea6144)));
  /* 11ea1517 pop ecx */
  ECX = (pop32());
  /* 11ea1518 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea151a mov ebp, 0x2710 */
  EBP = (0x2710u);
  /* 11ea151f je 0x11ea1600 */
  if (C.zf) goto L_11ea1600;
  /* 11ea1525 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea1527 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1529 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea152bu);
  /* 11ea152b pop ecx */
  ECX = (pop32());
  /* 11ea152c cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea152e pop ecx */
  ECX = (pop32());
  /* 11ea152f jge 0x11ea153f */
  if ((C.sf==C.of)) goto L_11ea153f;
  /* 11ea1531 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea1536 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea1538 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea153a call esi */
  call_ind((uint32_t)(ESI), 0x11ea153cu);
  /* 11ea153c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea153f:;
  /* 11ea153f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1541 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1543 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1545u);
  /* 11ea1545 pop ecx */
  ECX = (pop32());
  /* 11ea1546 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1548 pop ecx */
  ECX = (pop32());
  /* 11ea1549 jge 0x11ea1559 */
  if ((C.sf==C.of)) goto L_11ea1559;
  /* 11ea154b push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea1550 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1552 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1554 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1556u);
  /* 11ea1556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1559:;
  /* 11ea1559 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea155b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea155d call ebx */
  call_ind((uint32_t)(EBX), 0x11ea155fu);
  /* 11ea155f pop ecx */
  ECX = (pop32());
  /* 11ea1560 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1562 pop ecx */
  ECX = (pop32());
  /* 11ea1563 jge 0x11ea1573 */
  if ((C.sf==C.of)) goto L_11ea1573;
  /* 11ea1565 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea156a push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea156c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea156e call esi */
  call_ind((uint32_t)(ESI), 0x11ea1570u);
  /* 11ea1570 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1573:;
  /* 11ea1573 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1575 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1577 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1579u);
  /* 11ea1579 pop ecx */
  ECX = (pop32());
  /* 11ea157a cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea157c pop ecx */
  ECX = (pop32());
  /* 11ea157d jge 0x11ea158d */
  if ((C.sf==C.of)) goto L_11ea158d;
  /* 11ea157f push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea1584 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1586 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1588 call esi */
  call_ind((uint32_t)(ESI), 0x11ea158au);
  /* 11ea158a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea158d:;
  /* 11ea158d push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea158f push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1591 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1593u);
  /* 11ea1593 pop ecx */
  ECX = (pop32());
  /* 11ea1594 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1596 pop ecx */
  ECX = (pop32());
  /* 11ea1597 jge 0x11ea15a7 */
  if ((C.sf==C.of)) goto L_11ea15a7;
  /* 11ea1599 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea159e push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea15a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15a2 call esi */
  call_ind((uint32_t)(ESI), 0x11ea15a4u);
  /* 11ea15a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea15a7:;
  /* 11ea15a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea15a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15ab call ebx */
  call_ind((uint32_t)(EBX), 0x11ea15adu);
  /* 11ea15ad pop ecx */
  ECX = (pop32());
  /* 11ea15ae cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea15b0 pop ecx */
  ECX = (pop32());
  /* 11ea15b1 jge 0x11ea15c1 */
  if ((C.sf==C.of)) goto L_11ea15c1;
  /* 11ea15b3 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea15b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea15ba push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15bc call esi */
  call_ind((uint32_t)(ESI), 0x11ea15beu);
  /* 11ea15be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea15c1:;
  /* 11ea15c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea15c3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15c5 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea15c7u);
  /* 11ea15c7 pop ecx */
  ECX = (pop32());
  /* 11ea15c8 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea15ca pop ecx */
  ECX = (pop32());
  /* 11ea15cb jge 0x11ea15db */
  if ((C.sf==C.of)) goto L_11ea15db;
  /* 11ea15cd push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea15d2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea15d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15d6 call esi */
  call_ind((uint32_t)(ESI), 0x11ea15d8u);
  /* 11ea15d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea15db:;
  /* 11ea15db push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15dd push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15df call ebx */
  call_ind((uint32_t)(EBX), 0x11ea15e1u);
  /* 11ea15e1 pop ecx */
  ECX = (pop32());
  /* 11ea15e2 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea15e4 pop ecx */
  ECX = (pop32());
  /* 11ea15e5 jge 0x11ea15f5 */
  if ((C.sf==C.of)) goto L_11ea15f5;
  /* 11ea15e7 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11ea15ec push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15ee push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea15f0 call esi */
  call_ind((uint32_t)(ESI), 0x11ea15f2u);
  /* 11ea15f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea15f5:;
  /* 11ea15f5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11ea15fa push 0xa */
  push32((uint32_t)(0xau));
  /* 11ea15fc call edi */
  call_ind((uint32_t)(EDI), 0x11ea15feu);
  /* 11ea15fe pop ecx */
  ECX = (pop32());
  /* 11ea15ff pop ecx */
  ECX = (pop32());
L_11ea1600:;
  /* 11ea1600 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ea1602 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea1608u);
  /* 11ea1608 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea160a pop ecx */
  ECX = (pop32());
  /* 11ea160b je 0x11ea1630 */
  if (C.zf) goto L_11ea1630;
  /* 11ea160d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea160f push 0x11ea7650 */
  push32((uint32_t)(0x11ea7650u));
  /* 11ea1614 call dword ptr [0x11ea60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60b8))), 0x11ea161au);
  /* 11ea161a imul eax, eax, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x32u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea161d push eax */
  push32((uint32_t)(EAX));
  /* 11ea161e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1620 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1622 call esi */
  call_ind((uint32_t)(ESI), 0x11ea1624u);
  /* 11ea1624 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11ea1629 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ea162b call edi */
  call_ind((uint32_t)(EDI), 0x11ea162du);
  /* 11ea162d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1630:;
  /* 11ea1630 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11ea1632 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1638u);
  /* 11ea1638 mov ebp, dword ptr [0x11ea60c0] */
  EBP = (r32((uint32_t)(0x11ea60c0)));
  /* 11ea163e pop ecx */
  ECX = (pop32());
  /* 11ea163f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1641 mov esi, 0x11ea75f0 */
  ESI = (0x11ea75f0u);
  /* 11ea1646 je 0x11ea1bf1 */
  if (C.zf) goto L_11ea1bf1;
  /* 11ea164c push 0x11ea76f0 */
  push32((uint32_t)(0x11ea76f0u));
  /* 11ea1651 call dword ptr [0x11ea60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c4))), 0x11ea1657u);
  /* 11ea1657 mov dword ptr [esp], 0x11ea7250 */
  w32((uint32_t)(ESP), (0x11ea7250u));
  /* 11ea165e push 0x11ea7030 */
  push32((uint32_t)(0x11ea7030u));
  /* 11ea1663 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1669u);
  /* 11ea1669 push 0x11ea7248 */
  push32((uint32_t)(0x11ea7248u));
  /* 11ea166e push 0x11ea7030 */
  push32((uint32_t)(0x11ea7030u));
  /* 11ea1673 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1679u);
  /* 11ea1679 push 0x11ea7240 */
  push32((uint32_t)(0x11ea7240u));
  /* 11ea167e push 0x11ea7030 */
  push32((uint32_t)(0x11ea7030u));
  /* 11ea1683 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1689u);
  /* 11ea1689 push 0x11ea7720 */
  push32((uint32_t)(0x11ea7720u));
  /* 11ea168e call dword ptr [0x11ea60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c4))), 0x11ea1694u);
  /* 11ea1694 push 0x11ea7750 */
  push32((uint32_t)(0x11ea7750u));
  /* 11ea1699 call dword ptr [0x11ea60cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60cc))), 0x11ea169fu);
  /* 11ea169f push 0x11ea76c8 */
  push32((uint32_t)(0x11ea76c8u));
  /* 11ea16a4 call dword ptr [0x11ea60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60d0))), 0x11ea16aau);
  /* 11ea16aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea16ac push 0x11ea7650 */
  push32((uint32_t)(0x11ea7650u));
  /* 11ea16b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea16b3 call dword ptr [0x11ea60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60d4))), 0x11ea16b9u);
  /* 11ea16b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea16bb push 0x11ea7598 */
  push32((uint32_t)(0x11ea7598u));
  /* 11ea16c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea16c2 call dword ptr [0x11ea60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60d4))), 0x11ea16c8u);
  /* 11ea16c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea16ca call dword ptr [0x11ea60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60d8))), 0x11ea16d0u);
  /* 11ea16d0 lea ecx, [eax + eax*4 + 1] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x1));
  /* 11ea16d4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea16d7 mov dword ptr [0x11ea76d8], ecx */
  w32((uint32_t)(0x11ea76d8), (ECX));
  /* 11ea16dd mov dword ptr [0x11ea75a4], eax */
  w32((uint32_t)(0x11ea75a4), (EAX));
  /* 11ea16e2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11ea16e5 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea16e8 mov dword ptr [0x11ea7770], ecx */
  w32((uint32_t)(0x11ea7770), (ECX));
  /* 11ea16ee je 0x11ea16f5 */
  if (C.zf) goto L_11ea16f5;
  /* 11ea16f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea16f1 je 0x11ea1718 */
  if (C.zf) goto L_11ea1718;
  /* 11ea16f3 jmp 0x11ea174b */
  goto L_11ea174b;
L_11ea16f5:;
  /* 11ea16f5 push 0x11ea7238 */
  push32((uint32_t)(0x11ea7238u));
  /* 11ea16fa push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea16ff call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1705u);
  /* 11ea1705 push 0x11ea7230 */
  push32((uint32_t)(0x11ea7230u));
  /* 11ea170a push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea170f call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1715u);
  /* 11ea1715 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1718:;
  /* 11ea1718 push 0x11ea7228 */
  push32((uint32_t)(0x11ea7228u));
  /* 11ea171d push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea1722 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1728u);
  /* 11ea1728 push 0x11ea7220 */
  push32((uint32_t)(0x11ea7220u));
  /* 11ea172d push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea1732 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1738u);
  /* 11ea1738 push 0x11ea7218 */
  push32((uint32_t)(0x11ea7218u));
  /* 11ea173d push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea1742 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1748u);
  /* 11ea1748 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea174b:;
  /* 11ea174b push 0x11ea7104 */
  push32((uint32_t)(0x11ea7104u));
  /* 11ea1750 push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea1755 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea175bu);
  /* 11ea175b push 0x11ea7210 */
  push32((uint32_t)(0x11ea7210u));
  /* 11ea1760 push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea1765 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea176bu);
  /* 11ea176b push 0x11ea7208 */
  push32((uint32_t)(0x11ea7208u));
  /* 11ea1770 push 0x11ea7138 */
  push32((uint32_t)(0x11ea7138u));
  /* 11ea1775 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea177bu);
  /* 11ea177b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11ea177d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea177f call dword ptr [0x11ea60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60dc))), 0x11ea1785u);
  /* 11ea1785 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11ea1787 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1789 call dword ptr [0x11ea60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60dc))), 0x11ea178fu);
  /* 11ea178f push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11ea1791 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1793 call dword ptr [0x11ea60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60dc))), 0x11ea1799u);
  /* 11ea1799 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea179b pop eax */
  EAX = (pop32());
  /* 11ea179c sub eax, dword ptr [0x11ea75a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ea75a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea17a2 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea17a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ea17a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17ad call ebp */
  call_ind((uint32_t)(EBP), 0x11ea17afu);
  /* 11ea17af push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17b3 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea17b5u);
  /* 11ea17b5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea17b8 push eax */
  push32((uint32_t)(EAX));
  /* 11ea17b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea17bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17bd call ebp */
  call_ind((uint32_t)(EBP), 0x11ea17bfu);
  /* 11ea17bf push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17c3 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea17c5u);
  /* 11ea17c5 push eax */
  push32((uint32_t)(EAX));
  /* 11ea17c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea17c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17ca call ebp */
  call_ind((uint32_t)(EBP), 0x11ea17ccu);
  /* 11ea17cc push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17d0 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea17d2u);
  /* 11ea17d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ea17d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea17d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17d7 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea17d9u);
  /* 11ea17d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17db push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17dd call ebx */
  call_ind((uint32_t)(EBX), 0x11ea17dfu);
  /* 11ea17df push eax */
  push32((uint32_t)(EAX));
  /* 11ea17e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17e4 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea17e6u);
  /* 11ea17e6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea17e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17ed call ebx */
  call_ind((uint32_t)(EBX), 0x11ea17efu);
  /* 11ea17ef push eax */
  push32((uint32_t)(EAX));
  /* 11ea17f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea17f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17f4 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea17f6u);
  /* 11ea17f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea17f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea17fa call ebx */
  call_ind((uint32_t)(EBX), 0x11ea17fcu);
  /* 11ea17fc mov ecx, dword ptr [0x11ea75a4] */
  ECX = (r32((uint32_t)(0x11ea75a4)));
  /* 11ea1802 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea1803 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea1806 push eax */
  push32((uint32_t)(EAX));
  /* 11ea1807 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1809 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea180b call ebp */
  call_ind((uint32_t)(EBP), 0x11ea180du);
  /* 11ea180d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea180f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1811 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1813u);
  /* 11ea1813 push eax */
  push32((uint32_t)(EAX));
  /* 11ea1814 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea1816 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1818 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea181au);
  /* 11ea181a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea181c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea181e call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1820u);
  /* 11ea1820 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1823 push eax */
  push32((uint32_t)(EAX));
  /* 11ea1824 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1826 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1828 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea182au);
  /* 11ea182a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea182c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea182e call ebx */
  call_ind((uint32_t)(EBX), 0x11ea1830u);
  /* 11ea1830 push eax */
  push32((uint32_t)(EAX));
  /* 11ea1831 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1833 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1835 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea1837u);
  /* 11ea1837 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1839 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea183b call ebx */
  call_ind((uint32_t)(EBX), 0x11ea183du);
  /* 11ea183d push eax */
  push32((uint32_t)(EAX));
  /* 11ea183e push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea1840 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1842 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea1844u);
  /* 11ea1844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1846 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1848 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea184au);
  /* 11ea184a push eax */
  push32((uint32_t)(EAX));
  /* 11ea184b push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea184d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea184f call ebp */
  call_ind((uint32_t)(EBP), 0x11ea1851u);
  /* 11ea1851 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1856 call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea185cu);
  /* 11ea185c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea185e call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea1864u);
  /* 11ea1864 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1866 call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea186cu);
  /* 11ea186c push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea186e call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea1874u);
  /* 11ea1874 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1876 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1878 push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea187d call dword ptr [0x11ea60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e4))), 0x11ea1883u);
  /* 11ea1883 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1886 cmp dword ptr [0x11ea75a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea188d je 0x11ea18b3 */
  if (C.zf) goto L_11ea18b3;
  /* 11ea188f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1891 push 0x11ea7658 */
  push32((uint32_t)(0x11ea7658u));
  /* 11ea1896 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1898 call dword ptr [0x11ea60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e8))), 0x11ea189eu);
  /* 11ea189e push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea18a3 push 0x11ea7658 */
  push32((uint32_t)(0x11ea7658u));
  /* 11ea18a8 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea18aeu);
  /* 11ea18ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea18b1 jmp 0x11ea18bc */
  goto L_11ea18bc;
L_11ea18b3:;
  /* 11ea18b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea18b5 call dword ptr [0x11ea60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60ec))), 0x11ea18bbu);
  /* 11ea18bb pop ecx */
  ECX = (pop32());
L_11ea18bc:;
  /* 11ea18bc push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea18be call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea18c4u);
  /* 11ea18c4 cmp dword ptr [0x11ea75a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea18cb pop ecx */
  ECX = (pop32());
  /* 11ea18cc jne 0x11ea1906 */
  if (!C.zf) goto L_11ea1906;
  /* 11ea18ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea18d0 call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea18d6u);
  /* 11ea18d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea18d8 call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea18deu);
  /* 11ea18de push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea18e0 call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea18e6u);
  /* 11ea18e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea18e8 push 0x11ea7698 */
  push32((uint32_t)(0x11ea7698u));
  /* 11ea18ed call dword ptr [0x11ea60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f0))), 0x11ea18f3u);
  /* 11ea18f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea18f5 call dword ptr [0x11ea60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60ec))), 0x11ea18fbu);
  /* 11ea18fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea18fd call dword ptr [0x11ea60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60e0))), 0x11ea1903u);
  /* 11ea1903 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1906:;
  /* 11ea1906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea1908 cmp dword ptr [0x11ea75a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea190f setge al */
  AL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11ea1912 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea1913 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea1914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1916 jle 0x11ea19be */
  if ((C.zf||C.sf!=C.of)) goto L_11ea19be;
  /* 11ea191c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
L_11ea1920:;
  /* 11ea1920 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11ea1925 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1927 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea192c push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea1931 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1932 call 0x11ea10d1 */
  push32(0x11ea1937u); f_11ea10d1();
  /* 11ea1937 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea193c push esi */
  push32((uint32_t)(ESI));
  /* 11ea193d call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1943u);
  /* 11ea1943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1945 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1947 push 0x11ea7740 */
  push32((uint32_t)(0x11ea7740u));
  /* 11ea194c push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea1951 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1952 call 0x11ea10d1 */
  push32(0x11ea1957u); f_11ea10d1();
  /* 11ea1957 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea195c push esi */
  push32((uint32_t)(ESI));
  /* 11ea195d call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1963u);
  /* 11ea1963 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1965 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1967 push 0x11ea7740 */
  push32((uint32_t)(0x11ea7740u));
  /* 11ea196c push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea1971 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1972 call 0x11ea10d1 */
  push32(0x11ea1977u); f_11ea10d1();
  /* 11ea1977 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea197a push 0x11ea76b8 */
  push32((uint32_t)(0x11ea76b8u));
  /* 11ea197f push esi */
  push32((uint32_t)(ESI));
  /* 11ea1980 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1986u);
  /* 11ea1986 cmp dword ptr [0x11ea75a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea198d pop ecx */
  ECX = (pop32());
  /* 11ea198e pop ecx */
  ECX = (pop32());
  /* 11ea198f jle 0x11ea19b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea19b4;
  /* 11ea1991 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ea1993 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1995 push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea199a push 0x11ea7588 */
  push32((uint32_t)(0x11ea7588u));
  /* 11ea199f push esi */
  push32((uint32_t)(ESI));
  /* 11ea19a0 call 0x11ea10d1 */
  push32(0x11ea19a5u); f_11ea10d1();
  /* 11ea19a5 push 0x11ea76b0 */
  push32((uint32_t)(0x11ea76b0u));
  /* 11ea19aa push esi */
  push32((uint32_t)(ESI));
  /* 11ea19ab call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea19b1u);
  /* 11ea19b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea19b4:;
  /* 11ea19b4 dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11ea19b8 jne 0x11ea1920 */
  if (!C.zf) goto L_11ea1920;
L_11ea19be:;
  /* 11ea19be mov eax, dword ptr [0x11ea75a4] */
  EAX = (r32((uint32_t)(0x11ea75a4)));
  /* 11ea19c3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea19c4 je 0x11ea1a12 */
  if (C.zf) goto L_11ea1a12;
  /* 11ea19c6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea19c7 je 0x11ea19ef */
  if (C.zf) goto L_11ea19ef;
  /* 11ea19c9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea19ca jne 0x11ea1a24 */
  if (!C.zf) goto L_11ea1a24;
  /* 11ea19cc push 0x11ea7200 */
  push32((uint32_t)(0x11ea7200u));
  /* 11ea19d1 push 0x11ea7148 */
  push32((uint32_t)(0x11ea7148u));
  /* 11ea19d6 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea19dcu);
  /* 11ea19dc push 0x11ea71f8 */
  push32((uint32_t)(0x11ea71f8u));
  /* 11ea19e1 push 0x11ea7148 */
  push32((uint32_t)(0x11ea7148u));
  /* 11ea19e6 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea19ecu);
  /* 11ea19ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea19ef:;
  /* 11ea19ef push 0x11ea71f0 */
  push32((uint32_t)(0x11ea71f0u));
  /* 11ea19f4 push 0x11ea7148 */
  push32((uint32_t)(0x11ea7148u));
  /* 11ea19f9 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea19ffu);
  /* 11ea19ff push 0x11ea71e8 */
  push32((uint32_t)(0x11ea71e8u));
  /* 11ea1a04 push 0x11ea7148 */
  push32((uint32_t)(0x11ea7148u));
  /* 11ea1a09 call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1a0fu);
  /* 11ea1a0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1a12:;
  /* 11ea1a12 push 0x11ea71e0 */
  push32((uint32_t)(0x11ea71e0u));
  /* 11ea1a17 push 0x11ea7148 */
  push32((uint32_t)(0x11ea7148u));
  /* 11ea1a1c call dword ptr [0x11ea60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60c8))), 0x11ea1a22u);
  /* 11ea1a22 pop ecx */
  ECX = (pop32());
  /* 11ea1a23 pop ecx */
  ECX = (pop32());
L_11ea1a24:;
  /* 11ea1a24 and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11ea1a29 cmp dword ptr [0x11ea76d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea76d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1a30 jle 0x11ea1a65 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1a65;
L_11ea1a32:;
  /* 11ea1a32 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ea1a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1a36 push 0x11ea7618 */
  push32((uint32_t)(0x11ea7618u));
  /* 11ea1a3b push 0x11ea7730 */
  push32((uint32_t)(0x11ea7730u));
  /* 11ea1a40 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1a41 call 0x11ea10d1 */
  push32(0x11ea1a46u); f_11ea10d1();
  /* 11ea1a46 push 0x11ea7778 */
  push32((uint32_t)(0x11ea7778u));
  /* 11ea1a4b push esi */
  push32((uint32_t)(ESI));
  /* 11ea1a4c call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1a52u);
  /* 11ea1a52 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1a55 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11ea1a59 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ea1a5d cmp eax, dword ptr [0x11ea76d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ea76d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1a63 jl 0x11ea1a32 */
  if ((C.sf!=C.of)) goto L_11ea1a32;
L_11ea1a65:;
  /* 11ea1a65 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11ea1a6a push 0x11ea7618 */
  push32((uint32_t)(0x11ea7618u));
  /* 11ea1a6f push 0x11ea7778 */
  push32((uint32_t)(0x11ea7778u));
  /* 11ea1a74 call 0x11ea108b */
  push32(0x11ea1a79u); f_11ea108b();
  /* 11ea1a79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1a7c and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
L_11ea1a81:;
  /* 11ea1a81 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11ea1a86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1a88 push 0x11ea76e8 */
  push32((uint32_t)(0x11ea76e8u));
  /* 11ea1a8d push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea1a92 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1a93 call 0x11ea10d1 */
  push32(0x11ea1a98u); f_11ea10d1();
  /* 11ea1a98 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea1a9d push esi */
  push32((uint32_t)(ESI));
  /* 11ea1a9e call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1aa4u);
  /* 11ea1aa4 mov eax, dword ptr [0x11ea75a4] */
  EAX = (r32((uint32_t)(0x11ea75a4)));
  /* 11ea1aa9 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1aae jne 0x11ea1abf */
  if (!C.zf) goto L_11ea1abf;
  /* 11ea1ab0 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1ab5 jne 0x11ea1abf */
  if (!C.zf) goto L_11ea1abf;
  /* 11ea1ab7 mov dword ptr [esp + 0x10], 2 */
  w32((uint32_t)(ESP + 0x10), (0x2u));
L_11ea1abf:;
  /* 11ea1abf inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11ea1ac3 cmp dword ptr [esp + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1ac8 jl 0x11ea1a81 */
  if ((C.sf!=C.of)) goto L_11ea1a81;
  /* 11ea1aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1acc jle 0x11ea1af4 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1af4;
  /* 11ea1ace push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11ea1ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1ad5 push 0x11ea76e0 */
  push32((uint32_t)(0x11ea76e0u));
  /* 11ea1ada push 0x11ea7788 */
  push32((uint32_t)(0x11ea7788u));
  /* 11ea1adf push esi */
  push32((uint32_t)(ESI));
  /* 11ea1ae0 call 0x11ea10d1 */
  push32(0x11ea1ae5u); f_11ea10d1();
  /* 11ea1ae5 push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea1aea push esi */
  push32((uint32_t)(ESI));
  /* 11ea1aeb call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1af1u);
  /* 11ea1af1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1af4:;
  /* 11ea1af4 cmp dword ptr [0x11ea75a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1afb jle 0x11ea1b23 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1b23;
  /* 11ea1afd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11ea1b02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1b04 push 0x11ea76e0 */
  push32((uint32_t)(0x11ea76e0u));
  /* 11ea1b09 push 0x11ea7788 */
  push32((uint32_t)(0x11ea7788u));
  /* 11ea1b0e push esi */
  push32((uint32_t)(ESI));
  /* 11ea1b0f call 0x11ea10d1 */
  push32(0x11ea1b14u); f_11ea10d1();
  /* 11ea1b14 push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea1b19 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1b1a call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1b20u);
  /* 11ea1b20 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1b23:;
  /* 11ea1b23 cmp dword ptr [0x11ea75a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1b2a je 0x11ea1b52 */
  if (C.zf) goto L_11ea1b52;
  /* 11ea1b2c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11ea1b31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1b33 push 0x11ea76e0 */
  push32((uint32_t)(0x11ea76e0u));
  /* 11ea1b38 push 0x11ea75a8 */
  push32((uint32_t)(0x11ea75a8u));
  /* 11ea1b3d push esi */
  push32((uint32_t)(ESI));
  /* 11ea1b3e call 0x11ea10d1 */
  push32(0x11ea1b43u); f_11ea10d1();
  /* 11ea1b43 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea1b48 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1b49 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1b4fu);
  /* 11ea1b4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1b52:;
  /* 11ea1b52 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11ea1b57 push 0x11ea76e0 */
  push32((uint32_t)(0x11ea76e0u));
  /* 11ea1b5c push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea1b61 call 0x11ea10ba */
  push32(0x11ea1b66u); f_11ea10ba();
  /* 11ea1b66 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11ea1b6b push 0x11ea76e8 */
  push32((uint32_t)(0x11ea76e8u));
  /* 11ea1b70 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea1b75 call 0x11ea10ba */
  push32(0x11ea1b7au); f_11ea10ba();
  /* 11ea1b7a push 0x6f */
  push32((uint32_t)(0x6fu));
  /* 11ea1b7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea1b7e call edi */
  call_ind((uint32_t)(EDI), 0x11ea1b80u);
  /* 11ea1b80 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 11ea1b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea1b87 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1b89u);
  /* 11ea1b89 push 0x137 */
  push32((uint32_t)(0x137u));
  /* 11ea1b8e push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea1b90 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1b92u);
  /* 11ea1b92 push 0x19b */
  push32((uint32_t)(0x19bu));
  /* 11ea1b97 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea1b99 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1b9bu);
  /* 11ea1b9b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea1b9d push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1b9f call edi */
  call_ind((uint32_t)(EDI), 0x11ea1ba1u);
  /* 11ea1ba1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1ba4 push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 11ea1ba9 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1bab call edi */
  call_ind((uint32_t)(EDI), 0x11ea1badu);
  /* 11ea1bad push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11ea1bb2 push 7 */
  push32((uint32_t)(0x7u));
  /* 11ea1bb4 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1bb6u);
  /* 11ea1bb6 push 0x6f */
  push32((uint32_t)(0x6fu));
  /* 11ea1bb8 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ea1bba call edi */
  call_ind((uint32_t)(EDI), 0x11ea1bbcu);
  /* 11ea1bbc push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11ea1bc1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ea1bc3 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1bc5u);
  /* 11ea1bc5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11ea1bca push 0xf */
  push32((uint32_t)(0xfu));
  /* 11ea1bcc call edi */
  call_ind((uint32_t)(EDI), 0x11ea1bceu);
  /* 11ea1bce push 0x11ea71d8 */
  push32((uint32_t)(0x11ea71d8u));
  /* 11ea1bd3 call dword ptr [0x11ea60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f4))), 0x11ea1bd9u);
  /* 11ea1bd9 push 0x11ea71d0 */
  push32((uint32_t)(0x11ea71d0u));
  /* 11ea1bde call dword ptr [0x11ea60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f4))), 0x11ea1be4u);
  /* 11ea1be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1be6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11ea1be8 call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea1beeu);
  /* 11ea1bee add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1bf1:;
  /* 11ea1bf1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ea1bf3 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1bf9u);
  /* 11ea1bf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1bfb pop ecx */
  ECX = (pop32());
  /* 11ea1bfc je 0x11ea1d6c */
  if (C.zf) goto L_11ea1d6c;
  /* 11ea1c02 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1c04 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea1c0au);
  /* 11ea1c0a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1c0c pop ecx */
  ECX = (pop32());
  /* 11ea1c0d je 0x11ea1d6c */
  if (C.zf) goto L_11ea1d6c;
  /* 11ea1c13 and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11ea1c18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea1c1a cmp dword ptr [0x11ea75a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1c21 setge al */
  AL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11ea1c24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea1c25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1c27 jle 0x11ea1d47 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1d47;
L_11ea1c2d:;
  /* 11ea1c2d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11ea1c32 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1c34 push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea1c39 push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1c3e push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c3f call 0x11ea10d1 */
  push32(0x11ea1c44u); f_11ea10d1();
  /* 11ea1c44 push 0x11ea76f8 */
  push32((uint32_t)(0x11ea76f8u));
  /* 11ea1c49 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c4a call 0x11ea1073 */
  push32(0x11ea1c4fu); f_11ea1073();
  /* 11ea1c4f push 0x11ea7700 */
  push32((uint32_t)(0x11ea7700u));
  /* 11ea1c54 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c55 call 0x11ea1073 */
  push32(0x11ea1c5au); f_11ea1073();
  /* 11ea1c5a push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1c5f push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c60 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1c66u);
  /* 11ea1c66 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11ea1c6b push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1c6d push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea1c72 push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1c77 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c78 call 0x11ea10d1 */
  push32(0x11ea1c7du); f_11ea10d1();
  /* 11ea1c7d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1c80 push 0x11ea7700 */
  push32((uint32_t)(0x11ea7700u));
  /* 11ea1c85 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c86 call 0x11ea1073 */
  push32(0x11ea1c8bu); f_11ea1073();
  /* 11ea1c8b push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1c90 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1c91 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1c97u);
  /* 11ea1c97 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11ea1c9c push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1c9e push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea1ca3 push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1ca8 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1ca9 call 0x11ea10d1 */
  push32(0x11ea1caeu); f_11ea10d1();
  /* 11ea1cae push 0x11ea7718 */
  push32((uint32_t)(0x11ea7718u));
  /* 11ea1cb3 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1cb4 call 0x11ea1073 */
  push32(0x11ea1cb9u); f_11ea1073();
  /* 11ea1cb9 push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1cbe push esi */
  push32((uint32_t)(ESI));
  /* 11ea1cbf call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1cc5u);
  /* 11ea1cc5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ea1cc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1cc9 push 0x11ea7648 */
  push32((uint32_t)(0x11ea7648u));
  /* 11ea1cce push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1cd3 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1cd4 call 0x11ea10d1 */
  push32(0x11ea1cd9u); f_11ea10d1();
  /* 11ea1cd9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1cdc push 0x11ea7708 */
  push32((uint32_t)(0x11ea7708u));
  /* 11ea1ce1 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1ce2 call 0x11ea1073 */
  push32(0x11ea1ce7u); f_11ea1073();
  /* 11ea1ce7 push 0x11ea7710 */
  push32((uint32_t)(0x11ea7710u));
  /* 11ea1cec push esi */
  push32((uint32_t)(ESI));
  /* 11ea1ced call 0x11ea1073 */
  push32(0x11ea1cf2u); f_11ea1073();
  /* 11ea1cf2 push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1cf8 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1cfeu);
  /* 11ea1cfe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ea1d00 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1d02 push 0x11ea7648 */
  push32((uint32_t)(0x11ea7648u));
  /* 11ea1d07 push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1d0c push esi */
  push32((uint32_t)(ESI));
  /* 11ea1d0d call 0x11ea10d1 */
  push32(0x11ea1d12u); f_11ea10d1();
  /* 11ea1d12 push 0x11ea7710 */
  push32((uint32_t)(0x11ea7710u));
  /* 11ea1d17 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1d18 call 0x11ea1073 */
  push32(0x11ea1d1du); f_11ea1073();
  /* 11ea1d1d push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1d22 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1d23 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1d29u);
  /* 11ea1d29 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1d2c inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11ea1d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea1d32 cmp dword ptr [0x11ea75a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1d39 setge al */
  AL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11ea1d3c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea1d3d cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1d41 jl 0x11ea1c2d */
  if ((C.sf!=C.of)) goto L_11ea1c2d;
L_11ea1d47:;
  /* 11ea1d47 push 0x11ea7610 */
  push32((uint32_t)(0x11ea7610u));
  /* 11ea1d4c push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1d51 call 0x11ea1073 */
  push32(0x11ea1d56u); f_11ea1073();
  /* 11ea1d56 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11ea1d5b push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1d5d call edi */
  call_ind((uint32_t)(EDI), 0x11ea1d5fu);
  /* 11ea1d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1d61 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ea1d63 call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea1d69u);
  /* 11ea1d69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1d6c:;
  /* 11ea1d6c push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ea1d6e call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1d74u);
  /* 11ea1d74 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1d76 pop ecx */
  ECX = (pop32());
  /* 11ea1d77 jne 0x11ea1dbb */
  if (!C.zf) goto L_11ea1dbb;
  /* 11ea1d79 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1d7b push 0x11ea75c8 */
  push32((uint32_t)(0x11ea75c8u));
  /* 11ea1d80 call dword ptr [0x11ea60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60fc))), 0x11ea1d86u);
  /* 11ea1d86 pop ecx */
  ECX = (pop32());
  /* 11ea1d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1d89 pop ecx */
  ECX = (pop32());
  /* 11ea1d8a jle 0x11ea1dbb */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1dbb;
  /* 11ea1d8c push 0x11ea7670 */
  push32((uint32_t)(0x11ea7670u));
  /* 11ea1d91 call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1d97u);
  /* 11ea1d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1d99 pop ecx */
  ECX = (pop32());
  /* 11ea1d9a jle 0x11ea1dbb */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1dbb;
  /* 11ea1d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1d9e push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1da0 push 0x11ea75c8 */
  push32((uint32_t)(0x11ea75c8u));
  /* 11ea1da5 call dword ptr [0x11ea6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6100))), 0x11ea1dabu);
  /* 11ea1dab push 0x11ea7670 */
  push32((uint32_t)(0x11ea7670u));
  /* 11ea1db0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1db2 call dword ptr [0x11ea6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6104))), 0x11ea1db8u);
  /* 11ea1db8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1dbb:;
  /* 11ea1dbb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ea1dbd call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1dc3u);
  /* 11ea1dc3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1dc5 pop ecx */
  ECX = (pop32());
  /* 11ea1dc6 jne 0x11ea1e0a */
  if (!C.zf) goto L_11ea1e0a;
  /* 11ea1dc8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1dca push 0x11ea75d0 */
  push32((uint32_t)(0x11ea75d0u));
  /* 11ea1dcf call dword ptr [0x11ea60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60fc))), 0x11ea1dd5u);
  /* 11ea1dd5 pop ecx */
  ECX = (pop32());
  /* 11ea1dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1dd8 pop ecx */
  ECX = (pop32());
  /* 11ea1dd9 jle 0x11ea1e0a */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1e0a;
  /* 11ea1ddb push 0x11ea7680 */
  push32((uint32_t)(0x11ea7680u));
  /* 11ea1de0 call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1de6u);
  /* 11ea1de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1de8 pop ecx */
  ECX = (pop32());
  /* 11ea1de9 jle 0x11ea1e0a */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1e0a;
  /* 11ea1deb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1ded push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1def push 0x11ea75d0 */
  push32((uint32_t)(0x11ea75d0u));
  /* 11ea1df4 call dword ptr [0x11ea6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6100))), 0x11ea1dfau);
  /* 11ea1dfa push 0x11ea7680 */
  push32((uint32_t)(0x11ea7680u));
  /* 11ea1dff push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e01 call dword ptr [0x11ea6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6104))), 0x11ea1e07u);
  /* 11ea1e07 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1e0a:;
  /* 11ea1e0a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ea1e0c call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1e12u);
  /* 11ea1e12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1e14 pop ecx */
  ECX = (pop32());
  /* 11ea1e15 jne 0x11ea1e59 */
  if (!C.zf) goto L_11ea1e59;
  /* 11ea1e17 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e19 push 0x11ea75d8 */
  push32((uint32_t)(0x11ea75d8u));
  /* 11ea1e1e call dword ptr [0x11ea60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60fc))), 0x11ea1e24u);
  /* 11ea1e24 pop ecx */
  ECX = (pop32());
  /* 11ea1e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1e27 pop ecx */
  ECX = (pop32());
  /* 11ea1e28 jle 0x11ea1e59 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1e59;
  /* 11ea1e2a push 0x11ea7678 */
  push32((uint32_t)(0x11ea7678u));
  /* 11ea1e2f call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1e35u);
  /* 11ea1e35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1e37 pop ecx */
  ECX = (pop32());
  /* 11ea1e38 jle 0x11ea1e59 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1e59;
  /* 11ea1e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1e3c push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e3e push 0x11ea75d8 */
  push32((uint32_t)(0x11ea75d8u));
  /* 11ea1e43 call dword ptr [0x11ea6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6100))), 0x11ea1e49u);
  /* 11ea1e49 push 0x11ea7678 */
  push32((uint32_t)(0x11ea7678u));
  /* 11ea1e4e push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e50 call dword ptr [0x11ea6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6104))), 0x11ea1e56u);
  /* 11ea1e56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1e59:;
  /* 11ea1e59 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ea1e5b call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1e61u);
  /* 11ea1e61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1e63 pop ecx */
  ECX = (pop32());
  /* 11ea1e64 jne 0x11ea1ea8 */
  if (!C.zf) goto L_11ea1ea8;
  /* 11ea1e66 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e68 push 0x11ea75e0 */
  push32((uint32_t)(0x11ea75e0u));
  /* 11ea1e6d call dword ptr [0x11ea60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60fc))), 0x11ea1e73u);
  /* 11ea1e73 pop ecx */
  ECX = (pop32());
  /* 11ea1e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1e76 pop ecx */
  ECX = (pop32());
  /* 11ea1e77 jle 0x11ea1ea8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1ea8;
  /* 11ea1e79 push 0x11ea7690 */
  push32((uint32_t)(0x11ea7690u));
  /* 11ea1e7e call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1e84u);
  /* 11ea1e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1e86 pop ecx */
  ECX = (pop32());
  /* 11ea1e87 jle 0x11ea1ea8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1ea8;
  /* 11ea1e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1e8b push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e8d push 0x11ea75e0 */
  push32((uint32_t)(0x11ea75e0u));
  /* 11ea1e92 call dword ptr [0x11ea6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6100))), 0x11ea1e98u);
  /* 11ea1e98 push 0x11ea7690 */
  push32((uint32_t)(0x11ea7690u));
  /* 11ea1e9d push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1e9f call dword ptr [0x11ea6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6104))), 0x11ea1ea5u);
  /* 11ea1ea5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1ea8:;
  /* 11ea1ea8 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ea1eaa call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1eb0u);
  /* 11ea1eb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1eb2 pop ecx */
  ECX = (pop32());
  /* 11ea1eb3 jne 0x11ea1ef7 */
  if (!C.zf) goto L_11ea1ef7;
  /* 11ea1eb5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1eb7 push 0x11ea75e8 */
  push32((uint32_t)(0x11ea75e8u));
  /* 11ea1ebc call dword ptr [0x11ea60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60fc))), 0x11ea1ec2u);
  /* 11ea1ec2 pop ecx */
  ECX = (pop32());
  /* 11ea1ec3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1ec5 pop ecx */
  ECX = (pop32());
  /* 11ea1ec6 jle 0x11ea1ef7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1ef7;
  /* 11ea1ec8 push 0x11ea7688 */
  push32((uint32_t)(0x11ea7688u));
  /* 11ea1ecd call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1ed3u);
  /* 11ea1ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1ed5 pop ecx */
  ECX = (pop32());
  /* 11ea1ed6 jle 0x11ea1ef7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1ef7;
  /* 11ea1ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea1eda push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1edc push 0x11ea75e8 */
  push32((uint32_t)(0x11ea75e8u));
  /* 11ea1ee1 call dword ptr [0x11ea6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6100))), 0x11ea1ee7u);
  /* 11ea1ee7 push 0x11ea7688 */
  push32((uint32_t)(0x11ea7688u));
  /* 11ea1eec push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1eee call dword ptr [0x11ea6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6104))), 0x11ea1ef4u);
  /* 11ea1ef4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea1ef7:;
  /* 11ea1ef7 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ea1ef9 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1effu);
  /* 11ea1eff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1f01 pop ecx */
  ECX = (pop32());
  /* 11ea1f02 je 0x11ea20f7 */
  if (C.zf) goto L_11ea20f7;
  /* 11ea1f08 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1f0a call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea1f10u);
  /* 11ea1f10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1f12 pop ecx */
  ECX = (pop32());
  /* 11ea1f13 je 0x11ea20f7 */
  if (C.zf) goto L_11ea20f7;
  /* 11ea1f19 push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1f1e call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1f24u);
  /* 11ea1f24 cmp eax, dword ptr [0x11ea7770] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ea7770))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea1f2a pop ecx */
  ECX = (pop32());
  /* 11ea1f2b push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1f2d jg 0x11ea1f9b */
  if ((!C.zf&&C.sf==C.of)) goto L_11ea1f9b;
  /* 11ea1f2f call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1f35u);
  /* 11ea1f35 pop ecx */
  ECX = (pop32());
  /* 11ea1f36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1f38 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11ea1f3d push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea1f3f je 0x11ea1f48 */
  if (C.zf) goto L_11ea1f48;
  /* 11ea1f41 push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea1f46 jmp 0x11ea1f4d */
  goto L_11ea1f4d;
L_11ea1f48:;
  /* 11ea1f48 push 0x11ea7648 */
  push32((uint32_t)(0x11ea7648u));
L_11ea1f4d:;
  /* 11ea1f4d push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea1f52 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1f53 call 0x11ea10d1 */
  push32(0x11ea1f58u); f_11ea10d1();
  /* 11ea1f58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1f5b push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1f60 push esi */
  push32((uint32_t)(ESI));
  /* 11ea1f61 call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea1f67u);
  /* 11ea1f67 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1f69 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1f6fu);
  /* 11ea1f6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea1f72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1f74 je 0x11ea1f7d */
  if (C.zf) goto L_11ea1f7d;
  /* 11ea1f76 push 0x11ea76f8 */
  push32((uint32_t)(0x11ea76f8u));
  /* 11ea1f7b jmp 0x11ea1f82 */
  goto L_11ea1f82;
L_11ea1f7d:;
  /* 11ea1f7d push 0x11ea7708 */
  push32((uint32_t)(0x11ea7708u));
L_11ea1f82:;
  /* 11ea1f82 push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1f87 call 0x11ea10a2 */
  push32(0x11ea1f8cu); f_11ea10a2();
  /* 11ea1f8c pop ecx */
  ECX = (pop32());
  /* 11ea1f8d pop ecx */
  ECX = (pop32());
  /* 11ea1f8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea1f90 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea1f92 call edi */
  call_ind((uint32_t)(EDI), 0x11ea1f94u);
  /* 11ea1f94 pop ecx */
  ECX = (pop32());
  /* 11ea1f95 pop ecx */
  ECX = (pop32());
  /* 11ea1f96 jmp 0x11ea20f7 */
  goto L_11ea20f7;
L_11ea1f9b:;
  /* 11ea1f9b call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea1fa1u);
  /* 11ea1fa1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea1fa3 pop ecx */
  ECX = (pop32());
  /* 11ea1fa4 je 0x11ea2024 */
  if (C.zf) goto L_11ea2024;
  /* 11ea1fa6 push 0x11ea7680 */
  push32((uint32_t)(0x11ea7680u));
  /* 11ea1fab call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1fb1u);
  /* 11ea1fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1fb3 pop ecx */
  ECX = (pop32());
  /* 11ea1fb4 jle 0x11ea1fc7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1fc7;
  /* 11ea1fb6 push 0x11ea7700 */
  push32((uint32_t)(0x11ea7700u));
  /* 11ea1fbb push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1fc0 call 0x11ea1073 */
  push32(0x11ea1fc5u); f_11ea1073();
  /* 11ea1fc5 pop ecx */
  ECX = (pop32());
  /* 11ea1fc6 pop ecx */
  ECX = (pop32());
L_11ea1fc7:;
  /* 11ea1fc7 push 0x11ea7688 */
  push32((uint32_t)(0x11ea7688u));
  /* 11ea1fcc call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1fd2u);
  /* 11ea1fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1fd4 pop ecx */
  ECX = (pop32());
  /* 11ea1fd5 jle 0x11ea1fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea1fe8;
  /* 11ea1fd7 push 0x11ea7718 */
  push32((uint32_t)(0x11ea7718u));
  /* 11ea1fdc push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea1fe1 call 0x11ea1073 */
  push32(0x11ea1fe6u); f_11ea1073();
  /* 11ea1fe6 pop ecx */
  ECX = (pop32());
  /* 11ea1fe7 pop ecx */
  ECX = (pop32());
L_11ea1fe8:;
  /* 11ea1fe8 push 0x11ea7678 */
  push32((uint32_t)(0x11ea7678u));
  /* 11ea1fed call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea1ff3u);
  /* 11ea1ff3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea1ff5 pop ecx */
  ECX = (pop32());
  /* 11ea1ff6 jle 0x11ea2009 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea2009;
  /* 11ea1ff8 push 0x11ea7708 */
  push32((uint32_t)(0x11ea7708u));
  /* 11ea1ffd push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea2002 call 0x11ea1073 */
  push32(0x11ea2007u); f_11ea1073();
  /* 11ea2007 pop ecx */
  ECX = (pop32());
  /* 11ea2008 pop ecx */
  ECX = (pop32());
L_11ea2009:;
  /* 11ea2009 push 0x11ea7690 */
  push32((uint32_t)(0x11ea7690u));
  /* 11ea200e call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea2014u);
  /* 11ea2014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2016 pop ecx */
  ECX = (pop32());
  /* 11ea2017 jle 0x11ea20a8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea20a8;
  /* 11ea201d push 0x11ea7710 */
  push32((uint32_t)(0x11ea7710u));
  /* 11ea2022 jmp 0x11ea209c */
  goto L_11ea209c;
L_11ea2024:;
  /* 11ea2024 push 0x11ea7690 */
  push32((uint32_t)(0x11ea7690u));
  /* 11ea2029 call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea202fu);
  /* 11ea202f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2031 pop ecx */
  ECX = (pop32());
  /* 11ea2032 jle 0x11ea2045 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea2045;
  /* 11ea2034 push 0x11ea7710 */
  push32((uint32_t)(0x11ea7710u));
  /* 11ea2039 push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea203e call 0x11ea1073 */
  push32(0x11ea2043u); f_11ea1073();
  /* 11ea2043 pop ecx */
  ECX = (pop32());
  /* 11ea2044 pop ecx */
  ECX = (pop32());
L_11ea2045:;
  /* 11ea2045 push 0x11ea7688 */
  push32((uint32_t)(0x11ea7688u));
  /* 11ea204a call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea2050u);
  /* 11ea2050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2052 pop ecx */
  ECX = (pop32());
  /* 11ea2053 jle 0x11ea2066 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea2066;
  /* 11ea2055 push 0x11ea7718 */
  push32((uint32_t)(0x11ea7718u));
  /* 11ea205a push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea205f call 0x11ea1073 */
  push32(0x11ea2064u); f_11ea1073();
  /* 11ea2064 pop ecx */
  ECX = (pop32());
  /* 11ea2065 pop ecx */
  ECX = (pop32());
L_11ea2066:;
  /* 11ea2066 push 0x11ea7670 */
  push32((uint32_t)(0x11ea7670u));
  /* 11ea206b call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea2071u);
  /* 11ea2071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2073 pop ecx */
  ECX = (pop32());
  /* 11ea2074 jle 0x11ea2087 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea2087;
  /* 11ea2076 push 0x11ea76f8 */
  push32((uint32_t)(0x11ea76f8u));
  /* 11ea207b push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea2080 call 0x11ea1073 */
  push32(0x11ea2085u); f_11ea1073();
  /* 11ea2085 pop ecx */
  ECX = (pop32());
  /* 11ea2086 pop ecx */
  ECX = (pop32());
L_11ea2087:;
  /* 11ea2087 push 0x11ea7680 */
  push32((uint32_t)(0x11ea7680u));
  /* 11ea208c call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea2092u);
  /* 11ea2092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2094 pop ecx */
  ECX = (pop32());
  /* 11ea2095 jle 0x11ea20a8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea20a8;
  /* 11ea2097 push 0x11ea7700 */
  push32((uint32_t)(0x11ea7700u));
L_11ea209c:;
  /* 11ea209c push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea20a1 call 0x11ea1073 */
  push32(0x11ea20a6u); f_11ea1073();
  /* 11ea20a6 pop ecx */
  ECX = (pop32());
  /* 11ea20a7 pop ecx */
  ECX = (pop32());
L_11ea20a8:;
  /* 11ea20a8 push 0x11ea7610 */
  push32((uint32_t)(0x11ea7610u));
  /* 11ea20ad push 0x11ea7780 */
  push32((uint32_t)(0x11ea7780u));
  /* 11ea20b2 call 0x11ea1073 */
  push32(0x11ea20b7u); f_11ea1073();
  /* 11ea20b7 pop ecx */
  ECX = (pop32());
  /* 11ea20b8 pop ecx */
  ECX = (pop32());
  /* 11ea20b9 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea20bb call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea20c1u);
  /* 11ea20c1 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11ea20c3 sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ea20c5 inc al */
  { uint32_t _r=(AL)+1; AL = (_r); fl_inc(_r,8); }
  /* 11ea20c7 push eax */
  push32((uint32_t)(EAX));
  /* 11ea20c8 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea20ca call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea20d0u);
  /* 11ea20d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea20d2 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ea20d4 call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea20dau);
  /* 11ea20da push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea20dc pop eax */
  EAX = (pop32());
  /* 11ea20dd sub eax, dword ptr [0x11ea75a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ea75a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea20e3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea20e9 push eax */
  push32((uint32_t)(EAX));
  /* 11ea20ea push 6 */
  push32((uint32_t)(0x6u));
  /* 11ea20ec call edi */
  call_ind((uint32_t)(EDI), 0x11ea20eeu);
  /* 11ea20ee push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11ea20f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea20f2 call edi */
  call_ind((uint32_t)(EDI), 0x11ea20f4u);
  /* 11ea20f4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea20f7:;
  /* 11ea20f7 push 7 */
  push32((uint32_t)(0x7u));
  /* 11ea20f9 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea20ffu);
  /* 11ea20ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2101 pop ecx */
  ECX = (pop32());
  /* 11ea2102 je 0x11ea214f */
  if (C.zf) goto L_11ea214f;
  /* 11ea2104 push 7 */
  push32((uint32_t)(0x7u));
  /* 11ea2106 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea210cu);
  /* 11ea210c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea210e pop ecx */
  ECX = (pop32());
  /* 11ea210f je 0x11ea214f */
  if (C.zf) goto L_11ea214f;
  /* 11ea2111 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11ea2116 push 0x11ea7610 */
  push32((uint32_t)(0x11ea7610u));
  /* 11ea211b push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea2120 call 0x11ea108b */
  push32(0x11ea2125u); f_11ea108b();
  /* 11ea2125 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ea2127 pop eax */
  EAX = (pop32());
  /* 11ea2128 sub eax, dword ptr [0x11ea75a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ea75a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea212e imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea2134 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2135 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea2137 call edi */
  call_ind((uint32_t)(EDI), 0x11ea2139u);
  /* 11ea2139 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea213b push 7 */
  push32((uint32_t)(0x7u));
  /* 11ea213d call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea2143u);
  /* 11ea2143 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11ea2148 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea214a call edi */
  call_ind((uint32_t)(EDI), 0x11ea214cu);
  /* 11ea214c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea214f:;
  /* 11ea214f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea2151 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea2157u);
  /* 11ea2157 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2159 pop ecx */
  ECX = (pop32());
  /* 11ea215a je 0x11ea219e */
  if (C.zf) goto L_11ea219e;
  /* 11ea215c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea215e call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea2164u);
  /* 11ea2164 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2166 pop ecx */
  ECX = (pop32());
  /* 11ea2167 je 0x11ea219e */
  if (C.zf) goto L_11ea219e;
  /* 11ea2169 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11ea216e push 0x11ea7758 */
  push32((uint32_t)(0x11ea7758u));
  /* 11ea2173 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea2178 call 0x11ea10ba */
  push32(0x11ea217du); f_11ea10ba();
  /* 11ea217d push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11ea2182 push 0x11ea7610 */
  push32((uint32_t)(0x11ea7610u));
  /* 11ea2187 push 0x11ea75b0 */
  push32((uint32_t)(0x11ea75b0u));
  /* 11ea218c call 0x11ea108b */
  push32(0x11ea2191u); f_11ea108b();
  /* 11ea2191 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea2193 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea2195 call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea219bu);
  /* 11ea219b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea219e:;
  /* 11ea219e push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea21a0 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea21a6u);
  /* 11ea21a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea21a8 pop ecx */
  ECX = (pop32());
  /* 11ea21a9 je 0x11ea2215 */
  if (C.zf) goto L_11ea2215;
  /* 11ea21ab push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea21ad call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea21b3u);
  /* 11ea21b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea21b5 pop ecx */
  ECX = (pop32());
  /* 11ea21b6 je 0x11ea2215 */
  if (C.zf) goto L_11ea2215;
  /* 11ea21b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea21ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21bc call ebx */
  call_ind((uint32_t)(EBX), 0x11ea21beu);
  /* 11ea21be push eax */
  push32((uint32_t)(EAX));
  /* 11ea21bf push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea21c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21c3 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea21c5u);
  /* 11ea21c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea21c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21c9 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea21cbu);
  /* 11ea21cb push eax */
  push32((uint32_t)(EAX));
  /* 11ea21cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21d0 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea21d2u);
  /* 11ea21d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea21d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21d6 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea21d8u);
  /* 11ea21d8 push eax */
  push32((uint32_t)(EAX));
  /* 11ea21d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea21db push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21dd call ebp */
  call_ind((uint32_t)(EBP), 0x11ea21dfu);
  /* 11ea21df push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea21e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21e3 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea21e5u);
  /* 11ea21e5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea21e8 push eax */
  push32((uint32_t)(EAX));
  /* 11ea21e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea21eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21ed call ebp */
  call_ind((uint32_t)(EBP), 0x11ea21efu);
  /* 11ea21ef push dword ptr [0x11ea75a4] */
  push32((uint32_t)(r32((uint32_t)(0x11ea75a4))));
  /* 11ea21f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea21f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea21f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea21fb push 0x11ea71c8 */
  push32((uint32_t)(0x11ea71c8u));
  /* 11ea2200 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2202 call dword ptr [0x11ea6108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6108))), 0x11ea2208u);
  /* 11ea2208 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea220a push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea220c call dword ptr [0x11ea60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60f8))), 0x11ea2212u);
  /* 11ea2212 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea2215:;
  /* 11ea2215 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ea2217 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea221du);
  /* 11ea221d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea221f pop ecx */
  ECX = (pop32());
  /* 11ea2220 je 0x11ea22ff */
  if (C.zf) goto L_11ea22ff;
  /* 11ea2226 cmp dword ptr [0x11ea75a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea222d je 0x11ea22ff */
  if (C.zf) goto L_11ea22ff;
  /* 11ea2233 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea2235 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea223bu);
  /* 11ea223b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea223d pop ecx */
  ECX = (pop32());
  /* 11ea223e mov ebp, 0xc8 */
  EBP = (0xc8u);
  /* 11ea2243 je 0x11ea22bb */
  if (C.zf) goto L_11ea22bb;
  /* 11ea2245 mov ebx, 0x11ea76b0 */
  EBX = (0x11ea76b0u);
  /* 11ea224a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea224b call dword ptr [0x11ea6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6140))), 0x11ea2251u);
  /* 11ea2251 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2254 pop ecx */
  ECX = (pop32());
  /* 11ea2255 jge 0x11ea22a9 */
  if ((C.sf==C.of)) goto L_11ea22a9;
  /* 11ea2257 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2258 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea225a push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea225f push 0x11ea7588 */
  push32((uint32_t)(0x11ea7588u));
  /* 11ea2264 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2265 call 0x11ea10d1 */
  push32(0x11ea226au); f_11ea10d1();
  /* 11ea226a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea226b push esi */
  push32((uint32_t)(ESI));
  /* 11ea226c call dword ptr [0x11ea6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6148))), 0x11ea2272u);
  /* 11ea2272 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea2277 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2278 call 0x11ea10a2 */
  push32(0x11ea227du); f_11ea10a2();
  /* 11ea227d mov esi, 0x11ea7740 */
  ESI = (0x11ea7740u);
  /* 11ea2282 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2283 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2284 call 0x11ea1073 */
  push32(0x11ea2289u); f_11ea1073();
  /* 11ea2289 push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea228e push ebx */
  push32((uint32_t)(EBX));
  /* 11ea228f call 0x11ea1073 */
  push32(0x11ea2294u); f_11ea1073();
  /* 11ea2294 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2295 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2296 call 0x11ea1073 */
  push32(0x11ea229bu); f_11ea1073();
  /* 11ea229b push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 11ea22a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea22a2 call edi */
  call_ind((uint32_t)(EDI), 0x11ea22a4u);
  /* 11ea22a4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea22a7 jmp 0x11ea22c5 */
  goto L_11ea22c5;
L_11ea22a9:;
  /* 11ea22a9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11ea22ae push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea22b0 call edi */
  call_ind((uint32_t)(EDI), 0x11ea22b2u);
  /* 11ea22b2 pop ecx */
  ECX = (pop32());
  /* 11ea22b3 mov esi, 0x11ea7740 */
  ESI = (0x11ea7740u);
  /* 11ea22b8 pop ecx */
  ECX = (pop32());
  /* 11ea22b9 jmp 0x11ea22c5 */
  goto L_11ea22c5;
L_11ea22bb:;
  /* 11ea22bb mov esi, 0x11ea7740 */
  ESI = (0x11ea7740u);
  /* 11ea22c0 mov ebx, 0x11ea76b0 */
  EBX = (0x11ea76b0u);
L_11ea22c5:;
  /* 11ea22c5 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea22c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea22c8 push 0x11ea7630 */
  push32((uint32_t)(0x11ea7630u));
  /* 11ea22cd push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea22d2 call 0x11ea10f6 */
  push32(0x11ea22d7u); f_11ea10f6();
  /* 11ea22d7 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea22d8 mov ebp, 0x11ea7648 */
  EBP = (0x11ea7648u);
  /* 11ea22dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea22df push ebp */
  push32((uint32_t)(EBP));
  /* 11ea22e0 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea22e5 call 0x11ea10f6 */
  push32(0x11ea22eau); f_11ea10f6();
  /* 11ea22ea push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ea22ec push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea22ee push ebp */
  push32((uint32_t)(EBP));
  /* 11ea22ef mov ebp, 0x11ea76b8 */
  EBP = (0x11ea76b8u);
  /* 11ea22f4 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea22f5 call 0x11ea10f6 */
  push32(0x11ea22fau); f_11ea10f6();
  /* 11ea22fa add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea22fd jmp 0x11ea230e */
  goto L_11ea230e;
L_11ea22ff:;
  /* 11ea22ff mov esi, 0x11ea7740 */
  ESI = (0x11ea7740u);
  /* 11ea2304 mov ebp, 0x11ea76b8 */
  EBP = (0x11ea76b8u);
  /* 11ea2309 mov ebx, 0x11ea76b0 */
  EBX = (0x11ea76b0u);
L_11ea230e:;
  /* 11ea230e push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ea2310 call dword ptr [0x11ea60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60bc))), 0x11ea2316u);
  /* 11ea2316 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2318 pop ecx */
  ECX = (pop32());
  /* 11ea2319 je 0x11ea24a5 */
  if (C.zf) goto L_11ea24a5;
  /* 11ea231f push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea2321 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea2327u);
  /* 11ea2327 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2329 pop ecx */
  ECX = (pop32());
  /* 11ea232a je 0x11ea24a5 */
  if (C.zf) goto L_11ea24a5;
  /* 11ea2330 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea2335 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea233a call 0x11ea10a2 */
  push32(0x11ea233fu); f_11ea10a2();
  /* 11ea233f push esi */
  push32((uint32_t)(ESI));
  /* 11ea2340 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea2345 call 0x11ea1073 */
  push32(0x11ea234au); f_11ea1073();
  /* 11ea234a push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea234f push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea2354 call 0x11ea1073 */
  push32(0x11ea2359u); f_11ea1073();
  /* 11ea2359 push esi */
  push32((uint32_t)(ESI));
  /* 11ea235a push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea235f call 0x11ea1073 */
  push32(0x11ea2364u); f_11ea1073();
  /* 11ea2364 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea2369 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea236e call 0x11ea1073 */
  push32(0x11ea2373u); f_11ea1073();
  /* 11ea2373 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2374 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea2379 call 0x11ea1073 */
  push32(0x11ea237eu); f_11ea1073();
  /* 11ea237e push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea2383 push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea2388 call 0x11ea1073 */
  push32(0x11ea238du); f_11ea1073();
  /* 11ea238d push esi */
  push32((uint32_t)(ESI));
  /* 11ea238e push 0x11ea76a0 */
  push32((uint32_t)(0x11ea76a0u));
  /* 11ea2393 call 0x11ea1073 */
  push32(0x11ea2398u); f_11ea1073();
  /* 11ea2398 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea239b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea239d push esi */
  push32((uint32_t)(ESI));
  /* 11ea239e push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23a3 call 0x11ea10ba */
  push32(0x11ea23a8u); f_11ea10ba();
  /* 11ea23a8 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea23ad push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23b2 call 0x11ea1073 */
  push32(0x11ea23b7u); f_11ea1073();
  /* 11ea23b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ea23b8 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23bd call 0x11ea1073 */
  push32(0x11ea23c2u); f_11ea1073();
  /* 11ea23c2 push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea23c7 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23cc call 0x11ea1073 */
  push32(0x11ea23d1u); f_11ea1073();
  /* 11ea23d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea23d3 push esi */
  push32((uint32_t)(ESI));
  /* 11ea23d4 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23d9 call 0x11ea108b */
  push32(0x11ea23deu); f_11ea108b();
  /* 11ea23de push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea23e3 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23e8 call 0x11ea1073 */
  push32(0x11ea23edu); f_11ea1073();
  /* 11ea23ed push esi */
  push32((uint32_t)(ESI));
  /* 11ea23ee push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea23f3 call 0x11ea1073 */
  push32(0x11ea23f8u); f_11ea1073();
  /* 11ea23f8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea23fb push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea2400 push 0x11ea76a8 */
  push32((uint32_t)(0x11ea76a8u));
  /* 11ea2405 call 0x11ea1073 */
  push32(0x11ea240au); f_11ea1073();
  /* 11ea240a push esi */
  push32((uint32_t)(ESI));
  /* 11ea240b push ebp */
  push32((uint32_t)(EBP));
  /* 11ea240c call 0x11ea10a2 */
  push32(0x11ea2411u); f_11ea10a2();
  /* 11ea2411 push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea2416 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2417 call 0x11ea1073 */
  push32(0x11ea241cu); f_11ea1073();
  /* 11ea241c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea241e push esi */
  push32((uint32_t)(ESI));
  /* 11ea241f push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2420 call 0x11ea108b */
  push32(0x11ea2425u); f_11ea108b();
  /* 11ea2425 push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea242a push ebp */
  push32((uint32_t)(EBP));
  /* 11ea242b call 0x11ea1073 */
  push32(0x11ea2430u); f_11ea1073();
  /* 11ea2430 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2431 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2432 call 0x11ea1073 */
  push32(0x11ea2437u); f_11ea1073();
  /* 11ea2437 push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea243c push ebp */
  push32((uint32_t)(EBP));
  /* 11ea243d call 0x11ea1073 */
  push32(0x11ea2442u); f_11ea1073();
  /* 11ea2442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea2444 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2445 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2446 call 0x11ea108b */
  push32(0x11ea244bu); f_11ea108b();
  /* 11ea244b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea244e push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea2453 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2454 call 0x11ea1073 */
  push32(0x11ea2459u); f_11ea1073();
  /* 11ea2459 push 0x11ea7748 */
  push32((uint32_t)(0x11ea7748u));
  /* 11ea245e push ebx */
  push32((uint32_t)(EBX));
  /* 11ea245f call 0x11ea10a2 */
  push32(0x11ea2464u); f_11ea10a2();
  /* 11ea2464 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ea2466 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2467 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2468 call 0x11ea108b */
  push32(0x11ea246du); f_11ea108b();
  /* 11ea246d push 0x11ea7738 */
  push32((uint32_t)(0x11ea7738u));
  /* 11ea2472 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2473 call 0x11ea1073 */
  push32(0x11ea2478u); f_11ea1073();
  /* 11ea2478 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2479 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea247a call 0x11ea1073 */
  push32(0x11ea247fu); f_11ea1073();
  /* 11ea247f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2482 cmp dword ptr [0x11ea75a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea75a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2489 je 0x11ea249a */
  if (C.zf) goto L_11ea249a;
  /* 11ea248b cmp dword ptr [0x11ea7770], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x11ea7770))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2492 jge 0x11ea249a */
  if ((C.sf==C.of)) goto L_11ea249a;
  /* 11ea2494 inc dword ptr [0x11ea7770] */
  { uint32_t _r=(r32((uint32_t)(0x11ea7770)))+1; w32((uint32_t)(0x11ea7770), (_r)); fl_inc(_r,32); }
L_11ea249a:;
  /* 11ea249a push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11ea249f push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea24a1 call edi */
  call_ind((uint32_t)(EDI), 0x11ea24a3u);
  /* 11ea24a3 pop ecx */
  ECX = (pop32());
  /* 11ea24a4 pop ecx */
  ECX = (pop32());
L_11ea24a5:;
  /* 11ea24a5 mov ebp, dword ptr [0x11ea60bc] */
  EBP = (r32((uint32_t)(0x11ea60bc)));
  /* 11ea24ab push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11ea24ad call ebp */
  call_ind((uint32_t)(EBP), 0x11ea24afu);
  /* 11ea24af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea24b1 pop ecx */
  ECX = (pop32());
  /* 11ea24b2 je 0x11ea24e8 */
  if (C.zf) goto L_11ea24e8;
  /* 11ea24b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea24b6 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea24b8u);
  /* 11ea24b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea24ba pop ecx */
  ECX = (pop32());
  /* 11ea24bb jne 0x11ea24e8 */
  if (!C.zf) goto L_11ea24e8;
  /* 11ea24bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea24bf call dword ptr [0x11ea610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea610c))), 0x11ea24c5u);
  /* 11ea24c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea24c7 pop ecx */
  ECX = (pop32());
  /* 11ea24c8 je 0x11ea24e8 */
  if (C.zf) goto L_11ea24e8;
  /* 11ea24ca mov ebx, dword ptr [0x11ea60f4] */
  EBX = (r32((uint32_t)(0x11ea60f4)));
  /* 11ea24d0 push 0x11ea71c0 */
  push32((uint32_t)(0x11ea71c0u));
  /* 11ea24d5 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea24d7u);
  /* 11ea24d7 mov esi, dword ptr [0x11ea60f8] */
  ESI = (r32((uint32_t)(0x11ea60f8)));
  /* 11ea24dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea24df push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11ea24e1 call esi */
  call_ind((uint32_t)(ESI), 0x11ea24e3u);
  /* 11ea24e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea24e6 jmp 0x11ea24f4 */
  goto L_11ea24f4;
L_11ea24e8:;
  /* 11ea24e8 mov esi, dword ptr [0x11ea60f8] */
  ESI = (r32((uint32_t)(0x11ea60f8)));
  /* 11ea24ee mov ebx, dword ptr [0x11ea60f4] */
  EBX = (r32((uint32_t)(0x11ea60f4)));
L_11ea24f4:;
  /* 11ea24f4 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11ea24f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea24f8u);
  /* 11ea24f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea24fa pop ecx */
  ECX = (pop32());
  /* 11ea24fb je 0x11ea2538 */
  if (C.zf) goto L_11ea2538;
  /* 11ea24fd mov ebp, dword ptr [0x11ea6140] */
  EBP = (r32((uint32_t)(0x11ea6140)));
  /* 11ea2503 push 0x11ea75c0 */
  push32((uint32_t)(0x11ea75c0u));
  /* 11ea2508 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea250au);
  /* 11ea250a mov edx, eax */
  EDX = (EAX);
  /* 11ea250c mov dword ptr [esp], 0x11ea75b0 */
  w32((uint32_t)(ESP), (0x11ea75b0u));
  /* 11ea2513 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11ea2517 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea2519u);
  /* 11ea2519 pop ecx */
  ECX = (pop32());
  /* 11ea251a mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ea251e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2520 jne 0x11ea2532 */
  if (!C.zf) goto L_11ea2532;
  /* 11ea2522 push 0x11ea71b8 */
  push32((uint32_t)(0x11ea71b8u));
  /* 11ea2527 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea2529u);
  /* 11ea2529 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea252b push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11ea252d call esi */
  call_ind((uint32_t)(ESI), 0x11ea252fu);
  /* 11ea252f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea2532:;
  /* 11ea2532 mov ebp, dword ptr [0x11ea60bc] */
  EBP = (r32((uint32_t)(0x11ea60bc)));
L_11ea2538:;
  /* 11ea2538 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ea253a call ebp */
  call_ind((uint32_t)(EBP), 0x11ea253cu);
  /* 11ea253c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea253e pop ecx */
  ECX = (pop32());
  /* 11ea253f je 0x11ea259f */
  if (C.zf) goto L_11ea259f;
  /* 11ea2541 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11ea2543 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea2549u);
  /* 11ea2549 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea254b pop ecx */
  ECX = (pop32());
  /* 11ea254c je 0x11ea259f */
  if (C.zf) goto L_11ea259f;
  /* 11ea254e mov ebp, dword ptr [0x11ea60b8] */
  EBP = (r32((uint32_t)(0x11ea60b8)));
  /* 11ea2554 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea2556 push 0x11ea7580 */
  push32((uint32_t)(0x11ea7580u));
  /* 11ea255b call ebp */
  call_ind((uint32_t)(EBP), 0x11ea255du);
  /* 11ea255d mov edx, eax */
  EDX = (EAX);
  /* 11ea255f push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea2561 push 0x11ea7588 */
  push32((uint32_t)(0x11ea7588u));
  /* 11ea2566 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11ea256a call ebp */
  call_ind((uint32_t)(EBP), 0x11ea256cu);
  /* 11ea256c mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11ea2570 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ea2572 push 0x11ea76d0 */
  push32((uint32_t)(0x11ea76d0u));
  /* 11ea2577 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2579 call dword ptr [0x11ea60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60b8))), 0x11ea257fu);
  /* 11ea257f add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2581 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2584 cmp ebp, 5 */
  { uint32_t _a=(EBP),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2587 jge 0x11ea2599 */
  if ((C.sf==C.of)) goto L_11ea2599;
  /* 11ea2589 push 0x11ea71b0 */
  push32((uint32_t)(0x11ea71b0u));
  /* 11ea258e call ebx */
  call_ind((uint32_t)(EBX), 0x11ea2590u);
  /* 11ea2590 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea2592 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ea2594 call esi */
  call_ind((uint32_t)(ESI), 0x11ea2596u);
  /* 11ea2596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea2599:;
  /* 11ea2599 mov ebp, dword ptr [0x11ea60bc] */
  EBP = (r32((uint32_t)(0x11ea60bc)));
L_11ea259f:;
  /* 11ea259f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11ea25a1 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea25a3u);
  /* 11ea25a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea25a5 pop ecx */
  ECX = (pop32());
  /* 11ea25a6 je 0x11ea25fe */
  if (C.zf) goto L_11ea25fe;
  /* 11ea25a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea25aa push 0x11ea7650 */
  push32((uint32_t)(0x11ea7650u));
  /* 11ea25af call dword ptr [0x11ea60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60b8))), 0x11ea25b5u);
  /* 11ea25b5 pop ecx */
  ECX = (pop32());
  /* 11ea25b6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea25b9 pop ecx */
  ECX = (pop32());
  /* 11ea25ba jge 0x11ea25fe */
  if ((C.sf==C.of)) goto L_11ea25fe;
  /* 11ea25bc mov dword ptr [esp + 0x10], 1 */
  w32((uint32_t)(ESP + 0x10), (0x1u));
L_11ea25c4:;
  /* 11ea25c4 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea25c8 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea25ceu);
  /* 11ea25ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea25d0 pop ecx */
  ECX = (pop32());
  /* 11ea25d1 jne 0x11ea25dd */
  if (!C.zf) goto L_11ea25dd;
  /* 11ea25d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea25d5 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11ea25d9 call edi */
  call_ind((uint32_t)(EDI), 0x11ea25dbu);
  /* 11ea25db pop ecx */
  ECX = (pop32());
  /* 11ea25dc pop ecx */
  ECX = (pop32());
L_11ea25dd:;
  /* 11ea25dd inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11ea25e1 cmp dword ptr [esp + 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea25e6 jl 0x11ea25c4 */
  if ((C.sf!=C.of)) goto L_11ea25c4;
  /* 11ea25e8 push 0x11ea71a8 */
  push32((uint32_t)(0x11ea71a8u));
  /* 11ea25ed call ebx */
  call_ind((uint32_t)(EBX), 0x11ea25efu);
  /* 11ea25ef call dword ptr [0x11ea6110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6110))), 0x11ea25f5u);
  /* 11ea25f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea25f7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11ea25f9 call esi */
  call_ind((uint32_t)(ESI), 0x11ea25fbu);
  /* 11ea25fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea25fe:;
  /* 11ea25fe push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11ea2600 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea2602u);
  /* 11ea2602 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2604 pop ecx */
  ECX = (pop32());
  /* 11ea2605 je 0x11ea265c */
  if (C.zf) goto L_11ea265c;
  /* 11ea2607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea2609 push 0x11ea7598 */
  push32((uint32_t)(0x11ea7598u));
  /* 11ea260e call dword ptr [0x11ea60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60b8))), 0x11ea2614u);
  /* 11ea2614 pop ecx */
  ECX = (pop32());
  /* 11ea2615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2617 pop ecx */
  ECX = (pop32());
  /* 11ea2618 jne 0x11ea265c */
  if (!C.zf) goto L_11ea265c;
  /* 11ea261a mov dword ptr [esp + 0x10], 1 */
  w32((uint32_t)(ESP + 0x10), (0x1u));
L_11ea2622:;
  /* 11ea2622 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea2626 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea262cu);
  /* 11ea262c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea262e pop ecx */
  ECX = (pop32());
  /* 11ea262f jne 0x11ea263b */
  if (!C.zf) goto L_11ea263b;
  /* 11ea2631 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2633 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11ea2637 call edi */
  call_ind((uint32_t)(EDI), 0x11ea2639u);
  /* 11ea2639 pop ecx */
  ECX = (pop32());
  /* 11ea263a pop ecx */
  ECX = (pop32());
L_11ea263b:;
  /* 11ea263b inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11ea263f cmp dword ptr [esp + 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2644 jl 0x11ea2622 */
  if ((C.sf!=C.of)) goto L_11ea2622;
  /* 11ea2646 push 0x11ea719c */
  push32((uint32_t)(0x11ea719cu));
  /* 11ea264b call ebx */
  call_ind((uint32_t)(EBX), 0x11ea264du);
  /* 11ea264d call dword ptr [0x11ea6110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6110))), 0x11ea2653u);
  /* 11ea2653 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea2655 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11ea2657 call esi */
  call_ind((uint32_t)(ESI), 0x11ea2659u);
  /* 11ea2659 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea265c:;
  /* 11ea265c push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11ea265e call ebp */
  call_ind((uint32_t)(EBP), 0x11ea2660u);
  /* 11ea2660 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea2662 pop ecx */
  ECX = (pop32());
  /* 11ea2663 jne 0x11ea2699 */
  if (!C.zf) goto L_11ea2699;
  /* 11ea2665 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ea2667 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea2669u);
  /* 11ea2669 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea266b pop ecx */
  ECX = (pop32());
  /* 11ea266c jne 0x11ea2699 */
  if (!C.zf) goto L_11ea2699;
  /* 11ea266e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2670 pop esi */
  ESI = (pop32());
L_11ea2671:;
  /* 11ea2671 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2672 call dword ptr [0x11ea613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea613c))), 0x11ea2678u);
  /* 11ea2678 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea267a pop ecx */
  ECX = (pop32());
  /* 11ea267b jne 0x11ea2685 */
  if (!C.zf) goto L_11ea2685;
  /* 11ea267d push esi */
  push32((uint32_t)(ESI));
  /* 11ea267e call dword ptr [0x11ea6114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6114))), 0x11ea2684u);
  /* 11ea2684 pop ecx */
  ECX = (pop32());
L_11ea2685:;
  /* 11ea2685 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea2686 cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2689 jl 0x11ea2671 */
  if ((C.sf!=C.of)) goto L_11ea2671;
  /* 11ea268b push 0x11ea7194 */
  push32((uint32_t)(0x11ea7194u));
  /* 11ea2690 call ebx */
  call_ind((uint32_t)(EBX), 0x11ea2692u);
  /* 11ea2692 pop ecx */
  ECX = (pop32());
  /* 11ea2693 call dword ptr [0x11ea6118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6118))), 0x11ea2699u);
L_11ea2699:;
  /* 11ea2699 pop edi */
  EDI = (pop32());
  /* 11ea269a pop esi */
  ESI = (pop32());
  /* 11ea269b pop ebp */
  EBP = (pop32());
  /* 11ea269c pop ebx */
  EBX = (pop32());
  /* 11ea269d pop ecx */
  ECX = (pop32());
  /* 11ea269e ret  */
  ESPCHK(0x11ea14a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000269f @ 0x11ea269f (217 bytes, 57 insns) */
void f_11ea269f(void) {
  FTRACE(0x11ea269fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea269f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea26a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea26a6 jne 0x11ea2734 */
  if (!C.zf) goto L_11ea2734;
  /* 11ea26ac call dword ptr [0x11ea6094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6094))), 0x11ea26b2u);
  /* 11ea26b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea26b4 mov dword ptr [0x11ea77bc], eax */
  w32((uint32_t)(0x11ea77bc), (EAX));
  /* 11ea26b9 call 0x11ea30d3 */
  push32(0x11ea26beu); f_11ea30d3();
  /* 11ea26be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea26c0 pop ecx */
  ECX = (pop32());
  /* 11ea26c1 je 0x11ea26ff */
  if (C.zf) goto L_11ea26ff;
  /* 11ea26c3 mov eax, dword ptr [0x11ea77bc] */
  EAX = (r32((uint32_t)(0x11ea77bc)));
  /* 11ea26c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ea26ca mov cl, byte ptr [0x11ea77bd] */
  CL = (r8((uint32_t)(0x11ea77bd)));
  /* 11ea26d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea26d5 shr dword ptr [0x11ea77bc], 0x10 */
  w32((uint32_t)(0x11ea77bc), (sh_shr((uint32_t)(r32((uint32_t)(0x11ea77bc))), (0x10u)&0x1f, 32)));
  /* 11ea26dc mov dword ptr [0x11ea77c4], eax */
  w32((uint32_t)(0x11ea77c4), (EAX));
  /* 11ea26e1 mov dword ptr [0x11ea77c8], ecx */
  w32((uint32_t)(0x11ea77c8), (ECX));
  /* 11ea26e7 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ea26ea add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea26ec mov dword ptr [0x11ea77c0], eax */
  w32((uint32_t)(0x11ea77c0), (EAX));
  /* 11ea26f1 call 0x11ea2966 */
  push32(0x11ea26f6u); f_11ea2966();
  /* 11ea26f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea26f8 jne 0x11ea2703 */
  if (!C.zf) goto L_11ea2703;
  /* 11ea26fa call 0x11ea310f */
  push32(0x11ea26ffu); f_11ea310f();
L_11ea26ff:;
  /* 11ea26ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea2701 jmp 0x11ea2775 */
  goto L_11ea2775;
L_11ea2703:;
  /* 11ea2703 call dword ptr [0x11ea6090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6090))), 0x11ea2709u);
  /* 11ea2709 mov dword ptr [0x11ea7d18], eax */
  w32((uint32_t)(0x11ea7d18), (EAX));
  /* 11ea270e call 0x11ea2fa1 */
  push32(0x11ea2713u); f_11ea2fa1();
  /* 11ea2713 mov dword ptr [0x11ea77a8], eax */
  w32((uint32_t)(0x11ea77a8), (EAX));
  /* 11ea2718 call 0x11ea2a8b */
  push32(0x11ea271du); f_11ea2a8b();
  /* 11ea271d call 0x11ea2d54 */
  push32(0x11ea2722u); f_11ea2d54();
  /* 11ea2722 call 0x11ea2c9b */
  push32(0x11ea2727u); f_11ea2c9b();
  /* 11ea2727 call 0x11ea2848 */
  push32(0x11ea272cu); f_11ea2848();
  /* 11ea272c inc dword ptr [0x11ea77a4] */
  { uint32_t _r=(r32((uint32_t)(0x11ea77a4)))+1; w32((uint32_t)(0x11ea77a4), (_r)); fl_inc(_r,32); }
  /* 11ea2732 jmp 0x11ea2772 */
  goto L_11ea2772;
L_11ea2734:;
  /* 11ea2734 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ea2736 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2738 jne 0x11ea2766 */
  if (!C.zf) goto L_11ea2766;
  /* 11ea273a cmp dword ptr [0x11ea77a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11ea77a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2740 jle 0x11ea26ff */
  if ((C.zf||C.sf!=C.of)) goto L_11ea26ff;
  /* 11ea2742 dec dword ptr [0x11ea77a4] */
  { uint32_t _r=(r32((uint32_t)(0x11ea77a4)))-1; w32((uint32_t)(0x11ea77a4), (_r)); fl_dec(_r,32); }
  /* 11ea2748 cmp dword ptr [0x11ea77f4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11ea77f4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea274e jne 0x11ea2755 */
  if (!C.zf) goto L_11ea2755;
  /* 11ea2750 call 0x11ea2886 */
  push32(0x11ea2755u); f_11ea2886();
L_11ea2755:;
  /* 11ea2755 call 0x11ea2c47 */
  push32(0x11ea275au); f_11ea2c47();
  /* 11ea275a call 0x11ea29ba */
  push32(0x11ea275fu); f_11ea29ba();
  /* 11ea275f call 0x11ea310f */
  push32(0x11ea2764u); f_11ea310f();
  /* 11ea2764 jmp 0x11ea2772 */
  goto L_11ea2772;
L_11ea2766:;
  /* 11ea2766 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2769 jne 0x11ea2772 */
  if (!C.zf) goto L_11ea2772;
  /* 11ea276b push ecx */
  push32((uint32_t)(ECX));
  /* 11ea276c call 0x11ea29eb */
  push32(0x11ea2771u); f_11ea29eb();
  /* 11ea2771 pop ecx */
  ECX = (pop32());
L_11ea2772:;
  /* 11ea2772 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2774 pop eax */
  EAX = (pop32());
L_11ea2775:;
  /* 11ea2775 ret 0xc */
  ESPCHK(0x11ea269fu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11ea2778 (157 bytes, 73 insns) */
void f_11ea2778(void) {
  FTRACE(0x11ea2778u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2778 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2779 mov ebp, esp */
  EBP = (ESP);
  /* 11ea277b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea277c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea277f push esi */
  push32((uint32_t)(ESI));
  /* 11ea2780 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea2783 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2784 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11ea2787 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2789 jne 0x11ea2794 */
  if (!C.zf) goto L_11ea2794;
  /* 11ea278b cmp dword ptr [0x11ea77a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea77a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2792 jmp 0x11ea27ba */
  goto L_11ea27ba;
L_11ea2794:;
  /* 11ea2794 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2797 je 0x11ea279e */
  if (C.zf) goto L_11ea279e;
  /* 11ea2799 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea279c jne 0x11ea27c0 */
  if (!C.zf) goto L_11ea27c0;
L_11ea279e:;
  /* 11ea279e mov eax, dword ptr [0x11ea7d1c] */
  EAX = (r32((uint32_t)(0x11ea7d1c)));
  /* 11ea27a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea27a5 je 0x11ea27b0 */
  if (C.zf) goto L_11ea27b0;
  /* 11ea27a7 push edi */
  push32((uint32_t)(EDI));
  /* 11ea27a8 push esi */
  push32((uint32_t)(ESI));
  /* 11ea27a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea27aa call eax */
  call_ind((uint32_t)(EAX), 0x11ea27acu);
  /* 11ea27ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea27ae je 0x11ea27bc */
  if (C.zf) goto L_11ea27bc;
L_11ea27b0:;
  /* 11ea27b0 push edi */
  push32((uint32_t)(EDI));
  /* 11ea27b1 push esi */
  push32((uint32_t)(ESI));
  /* 11ea27b2 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea27b3 call 0x11ea269f */
  push32(0x11ea27b8u); f_11ea269f();
  /* 11ea27b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11ea27ba:;
  /* 11ea27ba jne 0x11ea27c0 */
  if (!C.zf) goto L_11ea27c0;
L_11ea27bc:;
  /* 11ea27bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea27be jmp 0x11ea280e */
  goto L_11ea280e;
L_11ea27c0:;
  /* 11ea27c0 push edi */
  push32((uint32_t)(EDI));
  /* 11ea27c1 push esi */
  push32((uint32_t)(ESI));
  /* 11ea27c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea27c3 call 0x11ea1000 */
  push32(0x11ea27c8u); f_11ea1000();
  /* 11ea27c8 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea27cb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ea27ce jne 0x11ea27dc */
  if (!C.zf) goto L_11ea27dc;
  /* 11ea27d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea27d2 jne 0x11ea280b */
  if (!C.zf) goto L_11ea280b;
  /* 11ea27d4 push edi */
  push32((uint32_t)(EDI));
  /* 11ea27d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ea27d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea27d7 call 0x11ea269f */
  push32(0x11ea27dcu); f_11ea269f();
L_11ea27dc:;
  /* 11ea27dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea27de je 0x11ea27e5 */
  if (C.zf) goto L_11ea27e5;
  /* 11ea27e0 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea27e3 jne 0x11ea280b */
  if (!C.zf) goto L_11ea280b;
L_11ea27e5:;
  /* 11ea27e5 push edi */
  push32((uint32_t)(EDI));
  /* 11ea27e6 push esi */
  push32((uint32_t)(ESI));
  /* 11ea27e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea27e8 call 0x11ea269f */
  push32(0x11ea27edu); f_11ea269f();
  /* 11ea27ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea27ef jne 0x11ea27f4 */
  if (!C.zf) goto L_11ea27f4;
  /* 11ea27f1 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11ea27f4:;
  /* 11ea27f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea27f8 je 0x11ea280b */
  if (C.zf) goto L_11ea280b;
  /* 11ea27fa mov eax, dword ptr [0x11ea7d1c] */
  EAX = (r32((uint32_t)(0x11ea7d1c)));
  /* 11ea27ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2801 je 0x11ea280b */
  if (C.zf) goto L_11ea280b;
  /* 11ea2803 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2804 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2805 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2806 call eax */
  call_ind((uint32_t)(EAX), 0x11ea2808u);
  /* 11ea2808 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11ea280b:;
  /* 11ea280b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ea280e:;
  /* 11ea280e pop edi */
  EDI = (pop32());
  /* 11ea280f pop esi */
  ESI = (pop32());
  /* 11ea2810 pop ebx */
  EBX = (pop32());
  /* 11ea2811 pop ebp */
  EBP = (pop32());
  /* 11ea2812 ret 0xc */
  ESPCHK(0x11ea2778u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11ea2815 (48 bytes, 15 insns) */
void f_11ea2815(void) {
  FTRACE(0x11ea2815u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2815 mov eax, dword ptr [0x11ea77b0] */
  EAX = (r32((uint32_t)(0x11ea77b0)));
  /* 11ea281a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea281d je 0x11ea282c */
  if (C.zf) goto L_11ea282c;
  /* 11ea281f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2821 jne 0x11ea2831 */
  if (!C.zf) goto L_11ea2831;
  /* 11ea2823 cmp dword ptr [0x11ea77b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ea77b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea282a jne 0x11ea2831 */
  if (!C.zf) goto L_11ea2831;
L_11ea282c:;
  /* 11ea282c call 0x11ea3184 */
  push32(0x11ea2831u); f_11ea3184();
L_11ea2831:;
  /* 11ea2831 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ea2835 call 0x11ea31bd */
  push32(0x11ea283au); f_11ea31bd();
  /* 11ea283a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11ea283f call dword ptr [0x11ea7258] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea7258))), 0x11ea2845u);
  /* 11ea2845 pop ecx */
  ECX = (pop32());
  /* 11ea2846 pop ecx */
  ECX = (pop32());
  /* 11ea2847 ret  */
  ESPCHK(0x11ea2815u, _esp0);
  ESP += 4; return;
}

/* FUN_10002848 @ 0x11ea2848 (45 bytes, 12 insns) */
void f_11ea2848(void) {
  FTRACE(0x11ea2848u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2848 mov eax, dword ptr [0x11ea7d14] */
  EAX = (r32((uint32_t)(0x11ea7d14)));
  /* 11ea284d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea284f je 0x11ea2853 */
  if (C.zf) goto L_11ea2853;
  /* 11ea2851 call eax */
  call_ind((uint32_t)(EAX), 0x11ea2853u);
L_11ea2853:;
  /* 11ea2853 push 0x11ea7010 */
  push32((uint32_t)(0x11ea7010u));
  /* 11ea2858 push 0x11ea7008 */
  push32((uint32_t)(0x11ea7008u));
  /* 11ea285d call 0x11ea294c */
  push32(0x11ea2862u); f_11ea294c();
  /* 11ea2862 push 0x11ea7004 */
  push32((uint32_t)(0x11ea7004u));
  /* 11ea2867 push 0x11ea7000 */
  push32((uint32_t)(0x11ea7000u));
  /* 11ea286c call 0x11ea294c */
  push32(0x11ea2871u); f_11ea294c();
  /* 11ea2871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2874 ret  */
  ESPCHK(0x11ea2848u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11ea2875 (17 bytes, 6 insns) */
void f_11ea2875(void) {
  FTRACE(0x11ea2875u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2875 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea2877 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2879 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11ea287d call 0x11ea2895 */
  push32(0x11ea2882u); f_11ea2895();
  /* 11ea2882 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2885 ret  */
  ESPCHK(0x11ea2875u, _esp0);
  ESP += 4; return;
}

/* FUN_10002886 @ 0x11ea2886 (15 bytes, 6 insns) */
void f_11ea2886(void) {
  FTRACE(0x11ea2886u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2886 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2888 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea288a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea288c call 0x11ea2895 */
  push32(0x11ea2891u); f_11ea2895();
  /* 11ea2891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2894 ret  */
  ESPCHK(0x11ea2886u, _esp0);
  ESP += 4; return;
}

/* FUN_10002895 @ 0x11ea2895 (163 bytes, 53 insns) */
void f_11ea2895(void) {
  FTRACE(0x11ea2895u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2895 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2896 call 0x11ea293a */
  push32(0x11ea289bu); f_11ea293a();
  /* 11ea289b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea289d pop edi */
  EDI = (pop32());
  /* 11ea289e cmp dword ptr [0x11ea77f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11ea77f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea28a4 jne 0x11ea28b7 */
  if (!C.zf) goto L_11ea28b7;
  /* 11ea28a6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11ea28aa call dword ptr [0x11ea60a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60a0))), 0x11ea28b0u);
  /* 11ea28b0 push eax */
  push32((uint32_t)(EAX));
  /* 11ea28b1 call dword ptr [0x11ea6000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6000))), 0x11ea28b7u);
L_11ea28b7:;
  /* 11ea28b7 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea28bc push ebx */
  push32((uint32_t)(EBX));
  /* 11ea28bd mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ea28c1 mov dword ptr [0x11ea77f4], edi */
  w32((uint32_t)(0x11ea77f4), (EDI));
  /* 11ea28c7 mov byte ptr [0x11ea77f0], bl */
  w8((uint32_t)(0x11ea77f0), (BL));
  /* 11ea28cd jne 0x11ea290b */
  if (!C.zf) goto L_11ea290b;
  /* 11ea28cf mov eax, dword ptr [0x11ea7d10] */
  EAX = (r32((uint32_t)(0x11ea7d10)));
  /* 11ea28d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea28d6 je 0x11ea28fa */
  if (C.zf) goto L_11ea28fa;
  /* 11ea28d8 mov ecx, dword ptr [0x11ea7d0c] */
  ECX = (r32((uint32_t)(0x11ea7d0c)));
  /* 11ea28de push esi */
  push32((uint32_t)(ESI));
  /* 11ea28df lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11ea28e2 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea28e4 jb 0x11ea28f9 */
  if (C.cf) goto L_11ea28f9;
L_11ea28e6:;
  /* 11ea28e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ea28e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea28ea je 0x11ea28ee */
  if (C.zf) goto L_11ea28ee;
  /* 11ea28ec call eax */
  call_ind((uint32_t)(EAX), 0x11ea28eeu);
L_11ea28ee:;
  /* 11ea28ee sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea28f1 cmp esi, dword ptr [0x11ea7d10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11ea7d10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea28f7 jae 0x11ea28e6 */
  if (!C.cf) goto L_11ea28e6;
L_11ea28f9:;
  /* 11ea28f9 pop esi */
  ESI = (pop32());
L_11ea28fa:;
  /* 11ea28fa push 0x11ea7018 */
  push32((uint32_t)(0x11ea7018u));
  /* 11ea28ff push 0x11ea7014 */
  push32((uint32_t)(0x11ea7014u));
  /* 11ea2904 call 0x11ea294c */
  push32(0x11ea2909u); f_11ea294c();
  /* 11ea2909 pop ecx */
  ECX = (pop32());
  /* 11ea290a pop ecx */
  ECX = (pop32());
L_11ea290b:;
  /* 11ea290b push 0x11ea7020 */
  push32((uint32_t)(0x11ea7020u));
  /* 11ea2910 push 0x11ea701c */
  push32((uint32_t)(0x11ea701cu));
  /* 11ea2915 call 0x11ea294c */
  push32(0x11ea291au); f_11ea294c();
  /* 11ea291a pop ecx */
  ECX = (pop32());
  /* 11ea291b pop ecx */
  ECX = (pop32());
  /* 11ea291c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ea291e pop ebx */
  EBX = (pop32());
  /* 11ea291f je 0x11ea2928 */
  if (C.zf) goto L_11ea2928;
  /* 11ea2921 call 0x11ea2943 */
  push32(0x11ea2926u); f_11ea2943();
  /* 11ea2926 pop edi */
  EDI = (pop32());
  /* 11ea2927 ret  */
  ESPCHK(0x11ea2895u, _esp0);
  ESP += 4; return;
L_11ea2928:;
  /* 11ea2928 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11ea292c mov dword ptr [0x11ea77f8], edi */
  w32((uint32_t)(0x11ea77f8), (EDI));
  /* 11ea2932 call dword ptr [0x11ea6004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6004))), 0x11ea2938u);
  /* 11ea2938 pop edi */
  EDI = (pop32());
  /* 11ea2939 ret  */
  ESPCHK(0x11ea2895u, _esp0);
  ESP += 4; return;
}

/* FUN_1000293a @ 0x11ea293a (9 bytes, 4 insns) */
void f_11ea293a(void) {
  FTRACE(0x11ea293au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea293a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11ea293c call 0x11ea33a5 */
  push32(0x11ea2941u); f_11ea33a5();
  /* 11ea2941 pop ecx */
  ECX = (pop32());
  /* 11ea2942 ret  */
  ESPCHK(0x11ea293au, _esp0);
  ESP += 4; return;
}

/* FUN_10002943 @ 0x11ea2943 (9 bytes, 4 insns) */
void f_11ea2943(void) {
  FTRACE(0x11ea2943u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2943 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11ea2945 call 0x11ea3406 */
  push32(0x11ea294au); f_11ea3406();
  /* 11ea294a pop ecx */
  ECX = (pop32());
  /* 11ea294b ret  */
  ESPCHK(0x11ea2943u, _esp0);
  ESP += 4; return;
}

/* FUN_1000294c @ 0x11ea294c (26 bytes, 12 insns) */
void f_11ea294c(void) {
  FTRACE(0x11ea294cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea294c push esi */
  push32((uint32_t)(ESI));
  /* 11ea294d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11ea2951:;
  /* 11ea2951 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2955 jae 0x11ea2964 */
  if (!C.cf) goto L_11ea2964;
  /* 11ea2957 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ea2959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea295b je 0x11ea295f */
  if (C.zf) goto L_11ea295f;
  /* 11ea295d call eax */
  call_ind((uint32_t)(EAX), 0x11ea295fu);
L_11ea295f:;
  /* 11ea295f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2962 jmp 0x11ea2951 */
  goto L_11ea2951;
L_11ea2964:;
  /* 11ea2964 pop esi */
  ESI = (pop32());
  /* 11ea2965 ret  */
  ESPCHK(0x11ea294cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002966 @ 0x11ea2966 (84 bytes, 32 insns) */
void f_11ea2966(void) {
  FTRACE(0x11ea2966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2966 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2967 call 0x11ea3310 */
  push32(0x11ea296cu); f_11ea3310();
  /* 11ea296c call dword ptr [0x11ea60a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60a8))), 0x11ea2972u);
  /* 11ea2972 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2975 mov dword ptr [0x11ea725c], eax */
  w32((uint32_t)(0x11ea725c), (EAX));
  /* 11ea297a je 0x11ea29b6 */
  if (C.zf) goto L_11ea29b6;
  /* 11ea297c push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11ea297e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea2980 call 0x11ea341b */
  push32(0x11ea2985u); f_11ea341b();
  /* 11ea2985 mov esi, eax */
  ESI = (EAX);
  /* 11ea2987 pop ecx */
  ECX = (pop32());
  /* 11ea2988 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea298a pop ecx */
  ECX = (pop32());
  /* 11ea298b je 0x11ea29b6 */
  if (C.zf) goto L_11ea29b6;
  /* 11ea298d push esi */
  push32((uint32_t)(ESI));
  /* 11ea298e push dword ptr [0x11ea725c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea725c))));
  /* 11ea2994 call dword ptr [0x11ea609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea609c))), 0x11ea299au);
  /* 11ea299a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea299c je 0x11ea29b6 */
  if (C.zf) goto L_11ea29b6;
  /* 11ea299e push esi */
  push32((uint32_t)(ESI));
  /* 11ea299f call 0x11ea29d8 */
  push32(0x11ea29a4u); f_11ea29d8();
  /* 11ea29a4 pop ecx */
  ECX = (pop32());
  /* 11ea29a5 call dword ptr [0x11ea60a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea60a4))), 0x11ea29abu);
  /* 11ea29ab or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ea29af push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea29b1 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ea29b3 pop eax */
  EAX = (pop32());
  /* 11ea29b4 pop esi */
  ESI = (pop32());
  /* 11ea29b5 ret  */
  ESPCHK(0x11ea2966u, _esp0);
  ESP += 4; return;
L_11ea29b6:;
  /* 11ea29b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea29b8 pop esi */
  ESI = (pop32());
  /* 11ea29b9 ret  */
  ESPCHK(0x11ea2966u, _esp0);
  ESP += 4; return;
}

/* FUN_100029ba @ 0x11ea29ba (30 bytes, 8 insns) */
void f_11ea29ba(void) {
  FTRACE(0x11ea29bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea29ba call 0x11ea3339 */
  push32(0x11ea29bfu); f_11ea3339();
  /* 11ea29bf mov eax, dword ptr [0x11ea725c] */
  EAX = (r32((uint32_t)(0x11ea725c)));
  /* 11ea29c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea29c7 je 0x11ea29d7 */
  if (C.zf) goto L_11ea29d7;
  /* 11ea29c9 push eax */
  push32((uint32_t)(EAX));
  /* 11ea29ca call dword ptr [0x11ea6098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6098))), 0x11ea29d0u);
  /* 11ea29d0 or dword ptr [0x11ea725c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11ea725c)))|(0xffffffffu); w32((uint32_t)(0x11ea725c), (_r)); fl_logic(_r,32); }
L_11ea29d7:;
  /* 11ea29d7 ret  */
  ESPCHK(0x11ea29bau, _esp0);
  ESP += 4; return;
}

/* FUN_100029d8 @ 0x11ea29d8 (19 bytes, 4 insns) */
void f_11ea29d8(void) {
  FTRACE(0x11ea29d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea29d8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea29dc mov dword ptr [eax + 0x50], 0x11ea73d8 */
  w32((uint32_t)(EAX + 0x50), (0x11ea73d8u));
  /* 11ea29e3 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11ea29ea ret  */
  ESPCHK(0x11ea29d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100029eb @ 0x11ea29eb (160 bytes, 62 insns) */
void f_11ea29eb(void) {
  FTRACE(0x11ea29ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea29eb mov eax, dword ptr [0x11ea725c] */
  EAX = (r32((uint32_t)(0x11ea725c)));
  /* 11ea29f0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea29f3 je 0x11ea2a8a */
  if (C.zf) goto L_11ea2a8a;
  /* 11ea29f9 push esi */
  push32((uint32_t)(ESI));
  /* 11ea29fa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea29fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2a00 jne 0x11ea2a0f */
  if (!C.zf) goto L_11ea2a0f;
  /* 11ea2a02 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a03 call dword ptr [0x11ea608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea608c))), 0x11ea2a09u);
  /* 11ea2a09 mov esi, eax */
  ESI = (EAX);
  /* 11ea2a0b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2a0d je 0x11ea2a7b */
  if (C.zf) goto L_11ea2a7b;
L_11ea2a0f:;
  /* 11ea2a0f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11ea2a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2a14 je 0x11ea2a1d */
  if (C.zf) goto L_11ea2a1d;
  /* 11ea2a16 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a17 call 0x11ea34a8 */
  push32(0x11ea2a1cu); f_11ea34a8();
  /* 11ea2a1c pop ecx */
  ECX = (pop32());
L_11ea2a1d:;
  /* 11ea2a1d mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11ea2a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2a22 je 0x11ea2a2b */
  if (C.zf) goto L_11ea2a2b;
  /* 11ea2a24 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a25 call 0x11ea34a8 */
  push32(0x11ea2a2au); f_11ea34a8();
  /* 11ea2a2a pop ecx */
  ECX = (pop32());
L_11ea2a2b:;
  /* 11ea2a2b mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11ea2a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2a30 je 0x11ea2a39 */
  if (C.zf) goto L_11ea2a39;
  /* 11ea2a32 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a33 call 0x11ea34a8 */
  push32(0x11ea2a38u); f_11ea34a8();
  /* 11ea2a38 pop ecx */
  ECX = (pop32());
L_11ea2a39:;
  /* 11ea2a39 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11ea2a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2a3e je 0x11ea2a47 */
  if (C.zf) goto L_11ea2a47;
  /* 11ea2a40 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a41 call 0x11ea34a8 */
  push32(0x11ea2a46u); f_11ea34a8();
  /* 11ea2a46 pop ecx */
  ECX = (pop32());
L_11ea2a47:;
  /* 11ea2a47 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11ea2a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2a4c je 0x11ea2a55 */
  if (C.zf) goto L_11ea2a55;
  /* 11ea2a4e push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a4f call 0x11ea34a8 */
  push32(0x11ea2a54u); f_11ea34a8();
  /* 11ea2a54 pop ecx */
  ECX = (pop32());
L_11ea2a55:;
  /* 11ea2a55 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11ea2a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2a5a je 0x11ea2a63 */
  if (C.zf) goto L_11ea2a63;
  /* 11ea2a5c push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a5d call 0x11ea34a8 */
  push32(0x11ea2a62u); f_11ea34a8();
  /* 11ea2a62 pop ecx */
  ECX = (pop32());
L_11ea2a63:;
  /* 11ea2a63 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11ea2a66 cmp eax, 0x11ea73d8 */
  { uint32_t _a=(EAX),_b=(0x11ea73d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2a6b je 0x11ea2a74 */
  if (C.zf) goto L_11ea2a74;
  /* 11ea2a6d push eax */
  push32((uint32_t)(EAX));
  /* 11ea2a6e call 0x11ea34a8 */
  push32(0x11ea2a73u); f_11ea34a8();
  /* 11ea2a73 pop ecx */
  ECX = (pop32());
L_11ea2a74:;
  /* 11ea2a74 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2a75 call 0x11ea34a8 */
  push32(0x11ea2a7au); f_11ea34a8();
  /* 11ea2a7a pop ecx */
  ECX = (pop32());
L_11ea2a7b:;
  /* 11ea2a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea2a7d push dword ptr [0x11ea725c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea725c))));
  /* 11ea2a83 call dword ptr [0x11ea609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea609c))), 0x11ea2a89u);
  /* 11ea2a89 pop esi */
  ESI = (pop32());
L_11ea2a8a:;
  /* 11ea2a8a ret  */
  ESPCHK(0x11ea29ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a8b @ 0x11ea2a8b (444 bytes, 150 insns) */
void f_11ea2a8b(void) {
  FTRACE(0x11ea2a8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2a8b push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2a8c mov ebp, esp */
  EBP = (ESP);
  /* 11ea2a8e sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea2a91 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2a92 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2a93 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2a94 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ea2a99 call 0x11ea34f0 */
  push32(0x11ea2a9eu); f_11ea34f0();
  /* 11ea2a9e mov esi, eax */
  ESI = (EAX);
  /* 11ea2aa0 pop ecx */
  ECX = (pop32());
  /* 11ea2aa1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2aa3 jne 0x11ea2aad */
  if (!C.zf) goto L_11ea2aad;
  /* 11ea2aa5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11ea2aa7 call 0x11ea2815 */
  push32(0x11ea2aacu); f_11ea2815();
  /* 11ea2aac pop ecx */
  ECX = (pop32());
L_11ea2aad:;
  /* 11ea2aad mov dword ptr [0x11ea7c00], esi */
  w32((uint32_t)(0x11ea7c00), (ESI));
  /* 11ea2ab3 mov dword ptr [0x11ea7d00], 0x20 */
  w32((uint32_t)(0x11ea7d00), (0x20u));
  /* 11ea2abd lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11ea2ac3:;
  /* 11ea2ac3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2ac5 jae 0x11ea2ae5 */
  if (!C.cf) goto L_11ea2ae5;
  /* 11ea2ac7 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ea2acb or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11ea2ace and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ea2ad2 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11ea2ad6 mov eax, dword ptr [0x11ea7c00] */
  EAX = (r32((uint32_t)(0x11ea7c00)));
  /* 11ea2adb add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2ade add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2ae3 jmp 0x11ea2ac3 */
  goto L_11ea2ac3;
L_11ea2ae5:;
  /* 11ea2ae5 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11ea2ae8 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2ae9 call dword ptr [0x11ea607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea607c))), 0x11ea2aefu);
  /* 11ea2aef cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ea2af4 je 0x11ea2bcb */
  if (C.zf) goto L_11ea2bcb;
  /* 11ea2afa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ea2afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2aff je 0x11ea2bcb */
  if (C.zf) goto L_11ea2bcb;
  /* 11ea2b05 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11ea2b07 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11ea2b0a lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11ea2b0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ea2b10 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11ea2b15 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2b17 jl 0x11ea2b1b */
  if ((C.sf!=C.of)) goto L_11ea2b1b;
  /* 11ea2b19 mov edi, eax */
  EDI = (EAX);
L_11ea2b1b:;
  /* 11ea2b1b cmp dword ptr [0x11ea7d00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11ea7d00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2b21 jge 0x11ea2b79 */
  if ((C.sf==C.of)) goto L_11ea2b79;
  /* 11ea2b23 mov esi, 0x11ea7c04 */
  ESI = (0x11ea7c04u);
L_11ea2b28:;
  /* 11ea2b28 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ea2b2d call 0x11ea34f0 */
  push32(0x11ea2b32u); f_11ea34f0();
  /* 11ea2b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2b34 pop ecx */
  ECX = (pop32());
  /* 11ea2b35 je 0x11ea2b73 */
  if (C.zf) goto L_11ea2b73;
  /* 11ea2b37 add dword ptr [0x11ea7d00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11ea7d00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11ea7d00), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ea2b3e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ea2b40 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11ea2b46:;
  /* 11ea2b46 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2b48 jae 0x11ea2b66 */
  if (!C.cf) goto L_11ea2b66;
  /* 11ea2b4a and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ea2b4e or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11ea2b51 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ea2b55 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11ea2b59 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11ea2b5b add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2b5e add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2b64 jmp 0x11ea2b46 */
  goto L_11ea2b46;
L_11ea2b66:;
  /* 11ea2b66 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2b69 cmp dword ptr [0x11ea7d00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11ea7d00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2b6f jl 0x11ea2b28 */
  if ((C.sf!=C.of)) goto L_11ea2b28;
  /* 11ea2b71 jmp 0x11ea2b79 */
  goto L_11ea2b79;
L_11ea2b73:;
  /* 11ea2b73 mov edi, dword ptr [0x11ea7d00] */
  EDI = (r32((uint32_t)(0x11ea7d00)));
L_11ea2b79:;
  /* 11ea2b79 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ea2b7b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea2b7d jle 0x11ea2bcb */
  if ((C.zf||C.sf!=C.of)) goto L_11ea2bcb;
L_11ea2b7f:;
  /* 11ea2b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea2b82 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ea2b84 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2b87 je 0x11ea2bc1 */
  if (C.zf) goto L_11ea2bc1;
  /* 11ea2b89 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11ea2b8b test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11ea2b8d je 0x11ea2bc1 */
  if (C.zf) goto L_11ea2bc1;
  /* 11ea2b8f test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11ea2b91 jne 0x11ea2b9e */
  if (!C.zf) goto L_11ea2b9e;
  /* 11ea2b93 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea2b94 call dword ptr [0x11ea6080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6080))), 0x11ea2b9au);
  /* 11ea2b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2b9c je 0x11ea2bc1 */
  if (C.zf) goto L_11ea2bc1;
L_11ea2b9e:;
  /* 11ea2b9e mov ecx, esi */
  ECX = (ESI);
  /* 11ea2ba0 mov eax, esi */
  EAX = (ESI);
  /* 11ea2ba2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ea2ba5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea2ba8 mov ecx, dword ptr [ecx*4 + 0x11ea7c00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11ea7c00)));
  /* 11ea2baf lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11ea2bb2 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11ea2bb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea2bb8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11ea2bba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ea2bbc mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11ea2bbe mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11ea2bc1:;
  /* 11ea2bc1 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ea2bc5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea2bc6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ea2bc7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2bc9 jl 0x11ea2b7f */
  if ((C.sf!=C.of)) goto L_11ea2b7f;
L_11ea2bcb:;
  /* 11ea2bcb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ea2bcd:;
  /* 11ea2bcd mov ecx, dword ptr [0x11ea7c00] */
  ECX = (r32((uint32_t)(0x11ea7c00)));
  /* 11ea2bd3 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11ea2bd6 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2bda lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11ea2bdd jne 0x11ea2c2c */
  if (!C.zf) goto L_11ea2c2c;
  /* 11ea2bdf test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ea2be1 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11ea2be5 jne 0x11ea2bec */
  if (!C.zf) goto L_11ea2bec;
  /* 11ea2be7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ea2be9 pop eax */
  EAX = (pop32());
  /* 11ea2bea jmp 0x11ea2bf6 */
  goto L_11ea2bf6;
L_11ea2bec:;
  /* 11ea2bec mov eax, ebx */
  EAX = (EBX);
  /* 11ea2bee dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea2bef neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ea2bf1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea2bf3 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ea2bf6:;
  /* 11ea2bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2bf7 call dword ptr [0x11ea6084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6084))), 0x11ea2bfdu);
  /* 11ea2bfd mov edi, eax */
  EDI = (EAX);
  /* 11ea2bff cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c02 je 0x11ea2c1b */
  if (C.zf) goto L_11ea2c1b;
  /* 11ea2c04 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2c05 call dword ptr [0x11ea6080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6080))), 0x11ea2c0bu);
  /* 11ea2c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2c0d je 0x11ea2c1b */
  if (C.zf) goto L_11ea2c1b;
  /* 11ea2c0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea2c14 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ea2c16 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c19 jne 0x11ea2c21 */
  if (!C.zf) goto L_11ea2c21;
L_11ea2c1b:;
  /* 11ea2c1b or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ea2c1f jmp 0x11ea2c30 */
  goto L_11ea2c30;
L_11ea2c21:;
  /* 11ea2c21 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c24 jne 0x11ea2c30 */
  if (!C.zf) goto L_11ea2c30;
  /* 11ea2c26 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11ea2c2a jmp 0x11ea2c30 */
  goto L_11ea2c30;
L_11ea2c2c:;
  /* 11ea2c2c or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11ea2c30:;
  /* 11ea2c30 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ea2c31 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c34 jl 0x11ea2bcd */
  if ((C.sf!=C.of)) goto L_11ea2bcd;
  /* 11ea2c36 push dword ptr [0x11ea7d00] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7d00))));
  /* 11ea2c3c call dword ptr [0x11ea6088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6088))), 0x11ea2c42u);
  /* 11ea2c42 pop edi */
  EDI = (pop32());
  /* 11ea2c43 pop esi */
  ESI = (pop32());
  /* 11ea2c44 pop ebx */
  EBX = (pop32());
  /* 11ea2c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea2c46 ret  */
  ESPCHK(0x11ea2a8bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c47 @ 0x11ea2c47 (84 bytes, 33 insns) */
void f_11ea2c47(void) {
  FTRACE(0x11ea2c47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2c47 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2c48 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2c49 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2c4a mov esi, 0x11ea7c00 */
  ESI = (0x11ea7c00u);
L_11ea2c4f:;
  /* 11ea2c4f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ea2c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea2c53 je 0x11ea2c8c */
  if (C.zf) goto L_11ea2c8c;
  /* 11ea2c55 mov edi, eax */
  EDI = (EAX);
  /* 11ea2c57 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2c5c cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c5e jae 0x11ea2c81 */
  if (!C.cf) goto L_11ea2c81;
  /* 11ea2c60 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11ea2c63:;
  /* 11ea2c63 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c67 je 0x11ea2c70 */
  if (C.zf) goto L_11ea2c70;
  /* 11ea2c69 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2c6a call dword ptr [0x11ea6078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6078))), 0x11ea2c70u);
L_11ea2c70:;
  /* 11ea2c70 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ea2c72 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2c75 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2c7a add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2c7d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c7f jb 0x11ea2c63 */
  if (C.cf) goto L_11ea2c63;
L_11ea2c81:;
  /* 11ea2c81 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea2c83 call 0x11ea34a8 */
  push32(0x11ea2c88u); f_11ea34a8();
  /* 11ea2c88 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11ea2c8b pop ecx */
  ECX = (pop32());
L_11ea2c8c:;
  /* 11ea2c8c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2c8f cmp esi, 0x11ea7d00 */
  { uint32_t _a=(ESI),_b=(0x11ea7d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2c95 jl 0x11ea2c4f */
  if ((C.sf!=C.of)) goto L_11ea2c4f;
  /* 11ea2c97 pop edi */
  EDI = (pop32());
  /* 11ea2c98 pop esi */
  ESI = (pop32());
  /* 11ea2c99 pop ebx */
  EBX = (pop32());
  /* 11ea2c9a ret  */
  ESPCHK(0x11ea2c47u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c9b @ 0x11ea2c9b (185 bytes, 71 insns) */
void f_11ea2c9b(void) {
  FTRACE(0x11ea2c9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2c9b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2c9c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea2c9e cmp dword ptr [0x11ea7d08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11ea7d08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2ca4 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2ca5 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2ca6 jne 0x11ea2cad */
  if (!C.zf) goto L_11ea2cad;
  /* 11ea2ca8 call 0x11ea3ac3 */
  push32(0x11ea2cadu); f_11ea3ac3();
L_11ea2cad:;
  /* 11ea2cad mov esi, dword ptr [0x11ea77a8] */
  ESI = (r32((uint32_t)(0x11ea77a8)));
  /* 11ea2cb3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11ea2cb5:;
  /* 11ea2cb5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea2cb7 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2cb9 je 0x11ea2ccd */
  if (C.zf) goto L_11ea2ccd;
  /* 11ea2cbb cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2cbd je 0x11ea2cc0 */
  if (C.zf) goto L_11ea2cc0;
  /* 11ea2cbf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11ea2cc0:;
  /* 11ea2cc0 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2cc1 call 0x11ea3670 */
  push32(0x11ea2cc6u); f_11ea3670();
  /* 11ea2cc6 pop ecx */
  ECX = (pop32());
  /* 11ea2cc7 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11ea2ccb jmp 0x11ea2cb5 */
  goto L_11ea2cb5;
L_11ea2ccd:;
  /* 11ea2ccd lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11ea2cd4 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2cd5 call 0x11ea34f0 */
  push32(0x11ea2cdau); f_11ea34f0();
  /* 11ea2cda mov esi, eax */
  ESI = (EAX);
  /* 11ea2cdc pop ecx */
  ECX = (pop32());
  /* 11ea2cdd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2cdf mov dword ptr [0x11ea77d8], esi */
  w32((uint32_t)(0x11ea77d8), (ESI));
  /* 11ea2ce5 jne 0x11ea2cef */
  if (!C.zf) goto L_11ea2cef;
  /* 11ea2ce7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea2ce9 call 0x11ea2815 */
  push32(0x11ea2ceeu); f_11ea2815();
  /* 11ea2cee pop ecx */
  ECX = (pop32());
L_11ea2cef:;
  /* 11ea2cef mov edi, dword ptr [0x11ea77a8] */
  EDI = (r32((uint32_t)(0x11ea77a8)));
  /* 11ea2cf5 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2cf7 je 0x11ea2d32 */
  if (C.zf) goto L_11ea2d32;
  /* 11ea2cf9 push ebp */
  push32((uint32_t)(EBP));
L_11ea2cfa:;
  /* 11ea2cfa push edi */
  push32((uint32_t)(EDI));
  /* 11ea2cfb call 0x11ea3670 */
  push32(0x11ea2d00u); f_11ea3670();
  /* 11ea2d00 mov ebp, eax */
  EBP = (EAX);
  /* 11ea2d02 pop ecx */
  ECX = (pop32());
  /* 11ea2d03 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11ea2d04 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2d07 je 0x11ea2d2b */
  if (C.zf) goto L_11ea2d2b;
  /* 11ea2d09 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2d0a call 0x11ea34f0 */
  push32(0x11ea2d0fu); f_11ea34f0();
  /* 11ea2d0f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2d11 pop ecx */
  ECX = (pop32());
  /* 11ea2d12 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11ea2d14 jne 0x11ea2d1e */
  if (!C.zf) goto L_11ea2d1e;
  /* 11ea2d16 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea2d18 call 0x11ea2815 */
  push32(0x11ea2d1du); f_11ea2815();
  /* 11ea2d1d pop ecx */
  ECX = (pop32());
L_11ea2d1e:;
  /* 11ea2d1e push edi */
  push32((uint32_t)(EDI));
  /* 11ea2d1f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea2d21 call 0x11ea3580 */
  push32(0x11ea2d26u); f_11ea3580();
  /* 11ea2d26 pop ecx */
  ECX = (pop32());
  /* 11ea2d27 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2d2a pop ecx */
  ECX = (pop32());
L_11ea2d2b:;
  /* 11ea2d2b add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2d2d cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2d2f jne 0x11ea2cfa */
  if (!C.zf) goto L_11ea2cfa;
  /* 11ea2d31 pop ebp */
  EBP = (pop32());
L_11ea2d32:;
  /* 11ea2d32 push dword ptr [0x11ea77a8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea77a8))));
  /* 11ea2d38 call 0x11ea34a8 */
  push32(0x11ea2d3du); f_11ea34a8();
  /* 11ea2d3d pop ecx */
  ECX = (pop32());
  /* 11ea2d3e mov dword ptr [0x11ea77a8], ebx */
  w32((uint32_t)(0x11ea77a8), (EBX));
  /* 11ea2d44 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11ea2d46 pop edi */
  EDI = (pop32());
  /* 11ea2d47 pop esi */
  ESI = (pop32());
  /* 11ea2d48 mov dword ptr [0x11ea7d04], 1 */
  w32((uint32_t)(0x11ea7d04), (0x1u));
  /* 11ea2d52 pop ebx */
  EBX = (pop32());
  /* 11ea2d53 ret  */
  ESPCHK(0x11ea2c9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d54 @ 0x11ea2d54 (153 bytes, 62 insns) */
void f_11ea2d54(void) {
  FTRACE(0x11ea2d54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2d54 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2d55 mov ebp, esp */
  EBP = (ESP);
  /* 11ea2d57 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea2d58 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea2d59 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2d5a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea2d5c cmp dword ptr [0x11ea7d08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11ea7d08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2d62 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2d63 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2d64 jne 0x11ea2d6b */
  if (!C.zf) goto L_11ea2d6b;
  /* 11ea2d66 call 0x11ea3ac3 */
  push32(0x11ea2d6bu); f_11ea3ac3();
L_11ea2d6b:;
  /* 11ea2d6b mov esi, 0x11ea77fc */
  ESI = (0x11ea77fcu);
  /* 11ea2d70 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ea2d75 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2d76 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2d77 call dword ptr [0x11ea6074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6074))), 0x11ea2d7du);
  /* 11ea2d7d mov eax, dword ptr [0x11ea7d18] */
  EAX = (r32((uint32_t)(0x11ea7d18)));
  /* 11ea2d82 mov dword ptr [0x11ea77e8], esi */
  w32((uint32_t)(0x11ea77e8), (ESI));
  /* 11ea2d88 mov edi, esi */
  EDI = (ESI);
  /* 11ea2d8a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2d8c je 0x11ea2d90 */
  if (C.zf) goto L_11ea2d90;
  /* 11ea2d8e mov edi, eax */
  EDI = (EAX);
L_11ea2d90:;
  /* 11ea2d90 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ea2d93 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2d94 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ea2d97 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2d98 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2d99 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2d9a push edi */
  push32((uint32_t)(EDI));
  /* 11ea2d9b call 0x11ea2ded */
  push32(0x11ea2da0u); f_11ea2ded();
  /* 11ea2da0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ea2da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea2da6 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11ea2da9 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2daa call 0x11ea34f0 */
  push32(0x11ea2dafu); f_11ea34f0();
  /* 11ea2daf mov esi, eax */
  ESI = (EAX);
  /* 11ea2db1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2db4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2db6 jne 0x11ea2dc0 */
  if (!C.zf) goto L_11ea2dc0;
  /* 11ea2db8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea2dba call 0x11ea2815 */
  push32(0x11ea2dbfu); f_11ea2815();
  /* 11ea2dbf pop ecx */
  ECX = (pop32());
L_11ea2dc0:;
  /* 11ea2dc0 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ea2dc3 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2dc4 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11ea2dc7 push eax */
  push32((uint32_t)(EAX));
  /* 11ea2dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea2dcb lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11ea2dce push eax */
  push32((uint32_t)(EAX));
  /* 11ea2dcf push esi */
  push32((uint32_t)(ESI));
  /* 11ea2dd0 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2dd1 call 0x11ea2ded */
  push32(0x11ea2dd6u); f_11ea2ded();
  /* 11ea2dd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea2dd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2ddc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea2ddd mov dword ptr [0x11ea77d0], esi */
  w32((uint32_t)(0x11ea77d0), (ESI));
  /* 11ea2de3 pop edi */
  EDI = (pop32());
  /* 11ea2de4 pop esi */
  ESI = (pop32());
  /* 11ea2de5 mov dword ptr [0x11ea77cc], eax */
  w32((uint32_t)(0x11ea77cc), (EAX));
  /* 11ea2dea pop ebx */
  EBX = (pop32());
  /* 11ea2deb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea2dec ret  */
  ESPCHK(0x11ea2d54u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ded @ 0x11ea2ded (436 bytes, 187 insns) */
void f_11ea2ded(void) {
  FTRACE(0x11ea2dedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2ded push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2dee mov ebp, esp */
  EBP = (ESP);
  /* 11ea2df0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ea2df3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ea2df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2df7 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2df8 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ea2dfb mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11ea2dfe push edi */
  push32((uint32_t)(EDI));
  /* 11ea2dff mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea2e02 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11ea2e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea2e0b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea2e0d je 0x11ea2e17 */
  if (C.zf) goto L_11ea2e17;
  /* 11ea2e0f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11ea2e11 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2e14 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11ea2e17:;
  /* 11ea2e17 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2e1a jne 0x11ea2e60 */
  if (!C.zf) goto L_11ea2e60;
L_11ea2e1c:;
  /* 11ea2e1c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ea2e1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2e20 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2e23 je 0x11ea2e4e */
  if (C.zf) goto L_11ea2e4e;
  /* 11ea2e25 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea2e27 je 0x11ea2e4e */
  if (C.zf) goto L_11ea2e4e;
  /* 11ea2e29 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11ea2e2c test byte ptr [edx + 0x11ea7ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11ea7ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11ea2e33 je 0x11ea2e41 */
  if (C.zf) goto L_11ea2e41;
  /* 11ea2e35 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2e37 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2e39 je 0x11ea2e41 */
  if (C.zf) goto L_11ea2e41;
  /* 11ea2e3b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2e3d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ea2e3f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea2e40 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ea2e41:;
  /* 11ea2e41 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2e43 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2e45 je 0x11ea2e1c */
  if (C.zf) goto L_11ea2e1c;
  /* 11ea2e47 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2e49 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ea2e4b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea2e4c jmp 0x11ea2e1c */
  goto L_11ea2e1c;
L_11ea2e4e:;
  /* 11ea2e4e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2e50 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2e52 je 0x11ea2e58 */
  if (C.zf) goto L_11ea2e58;
  /* 11ea2e54 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11ea2e57 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ea2e58:;
  /* 11ea2e58 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2e5b jne 0x11ea2ea3 */
  if (!C.zf) goto L_11ea2ea3;
  /* 11ea2e5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2e5e jmp 0x11ea2ea3 */
  goto L_11ea2ea3;
L_11ea2e60:;
  /* 11ea2e60 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2e62 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2e64 je 0x11ea2e6b */
  if (C.zf) goto L_11ea2e6b;
  /* 11ea2e66 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2e68 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ea2e6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ea2e6b:;
  /* 11ea2e6b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2e6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2e6e movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11ea2e71 test byte ptr [ebx + 0x11ea7ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11ea7ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11ea2e78 je 0x11ea2e86 */
  if (C.zf) goto L_11ea2e86;
  /* 11ea2e7a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2e7c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2e7e je 0x11ea2e85 */
  if (C.zf) goto L_11ea2e85;
  /* 11ea2e80 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11ea2e82 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11ea2e84 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ea2e85:;
  /* 11ea2e85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ea2e86:;
  /* 11ea2e86 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2e89 je 0x11ea2e94 */
  if (C.zf) goto L_11ea2e94;
  /* 11ea2e8b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea2e8d je 0x11ea2e98 */
  if (C.zf) goto L_11ea2e98;
  /* 11ea2e8f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2e92 jne 0x11ea2e60 */
  if (!C.zf) goto L_11ea2e60;
L_11ea2e94:;
  /* 11ea2e94 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea2e96 jne 0x11ea2e9b */
  if (!C.zf) goto L_11ea2e9b;
L_11ea2e98:;
  /* 11ea2e98 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea2e99 jmp 0x11ea2ea3 */
  goto L_11ea2ea3;
L_11ea2e9b:;
  /* 11ea2e9b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2e9d je 0x11ea2ea3 */
  if (C.zf) goto L_11ea2ea3;
  /* 11ea2e9f and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11ea2ea3:;
  /* 11ea2ea3 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11ea2ea7:;
  /* 11ea2ea7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2eaa je 0x11ea2f90 */
  if (C.zf) goto L_11ea2f90;
L_11ea2eb0:;
  /* 11ea2eb0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2eb2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2eb5 je 0x11ea2ebc */
  if (C.zf) goto L_11ea2ebc;
  /* 11ea2eb7 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2eba jne 0x11ea2ebf */
  if (!C.zf) goto L_11ea2ebf;
L_11ea2ebc:;
  /* 11ea2ebc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2ebd jmp 0x11ea2eb0 */
  goto L_11ea2eb0;
L_11ea2ebf:;
  /* 11ea2ebf cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2ec2 je 0x11ea2f90 */
  if (C.zf) goto L_11ea2f90;
  /* 11ea2ec8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea2eca je 0x11ea2ed4 */
  if (C.zf) goto L_11ea2ed4;
  /* 11ea2ecc mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11ea2ece add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea2ed1 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11ea2ed4:;
  /* 11ea2ed4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ea2ed7 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11ea2ed9:;
  /* 11ea2ed9 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11ea2ee0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ea2ee2:;
  /* 11ea2ee2 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2ee5 jne 0x11ea2eeb */
  if (!C.zf) goto L_11ea2eeb;
  /* 11ea2ee7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2ee8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ea2ee9 jmp 0x11ea2ee2 */
  goto L_11ea2ee2;
L_11ea2eeb:;
  /* 11ea2eeb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2eee jne 0x11ea2f1c */
  if (!C.zf) goto L_11ea2f1c;
  /* 11ea2ef0 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11ea2ef3 jne 0x11ea2f1a */
  if (!C.zf) goto L_11ea2f1a;
  /* 11ea2ef5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea2ef7 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2efa je 0x11ea2f09 */
  if (C.zf) goto L_11ea2f09;
  /* 11ea2efc cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2f00 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11ea2f03 jne 0x11ea2f09 */
  if (!C.zf) goto L_11ea2f09;
  /* 11ea2f05 mov eax, edx */
  EAX = (EDX);
  /* 11ea2f07 jmp 0x11ea2f0c */
  goto L_11ea2f0c;
L_11ea2f09:;
  /* 11ea2f09 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11ea2f0c:;
  /* 11ea2f0c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea2f0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea2f11 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2f14 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11ea2f17 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11ea2f1a:;
  /* 11ea2f1a shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11ea2f1c:;
  /* 11ea2f1c mov edx, ebx */
  EDX = (EBX);
  /* 11ea2f1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ea2f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ea2f21 je 0x11ea2f31 */
  if (C.zf) goto L_11ea2f31;
  /* 11ea2f23 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11ea2f24:;
  /* 11ea2f24 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2f26 je 0x11ea2f2c */
  if (C.zf) goto L_11ea2f2c;
  /* 11ea2f28 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11ea2f2b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ea2f2c:;
  /* 11ea2f2c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2f2e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ea2f2f jne 0x11ea2f24 */
  if (!C.zf) goto L_11ea2f24;
L_11ea2f31:;
  /* 11ea2f31 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2f33 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea2f35 je 0x11ea2f81 */
  if (C.zf) goto L_11ea2f81;
  /* 11ea2f37 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2f3b jne 0x11ea2f47 */
  if (!C.zf) goto L_11ea2f47;
  /* 11ea2f3d cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2f40 je 0x11ea2f81 */
  if (C.zf) goto L_11ea2f81;
  /* 11ea2f42 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea2f45 je 0x11ea2f81 */
  if (C.zf) goto L_11ea2f81;
L_11ea2f47:;
  /* 11ea2f47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2f4b je 0x11ea2f7b */
  if (C.zf) goto L_11ea2f7b;
  /* 11ea2f4d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2f4f je 0x11ea2f6a */
  if (C.zf) goto L_11ea2f6a;
  /* 11ea2f51 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11ea2f54 test byte ptr [ebx + 0x11ea7ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11ea7ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11ea2f5b je 0x11ea2f63 */
  if (C.zf) goto L_11ea2f63;
  /* 11ea2f5d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ea2f5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea2f60 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2f61 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11ea2f63:;
  /* 11ea2f63 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11ea2f65 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11ea2f67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea2f68 jmp 0x11ea2f79 */
  goto L_11ea2f79;
L_11ea2f6a:;
  /* 11ea2f6a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11ea2f6d test byte ptr [edx + 0x11ea7ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11ea7ae1)))&(0x4u); fl_logic(_r,8); }
  /* 11ea2f74 je 0x11ea2f79 */
  if (C.zf) goto L_11ea2f79;
  /* 11ea2f76 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2f77 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11ea2f79:;
  /* 11ea2f79 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11ea2f7b:;
  /* 11ea2f7b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea2f7c jmp 0x11ea2ed9 */
  goto L_11ea2ed9;
L_11ea2f81:;
  /* 11ea2f81 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea2f83 je 0x11ea2f89 */
  if (C.zf) goto L_11ea2f89;
  /* 11ea2f85 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11ea2f88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11ea2f89:;
  /* 11ea2f89 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11ea2f8b jmp 0x11ea2ea7 */
  goto L_11ea2ea7;
L_11ea2f90:;
  /* 11ea2f90 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea2f92 je 0x11ea2f97 */
  if (C.zf) goto L_11ea2f97;
  /* 11ea2f94 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11ea2f97:;
  /* 11ea2f97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ea2f9a pop edi */
  EDI = (pop32());
  /* 11ea2f9b pop esi */
  ESI = (pop32());
  /* 11ea2f9c pop ebx */
  EBX = (pop32());
  /* 11ea2f9d inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11ea2f9f pop ebp */
  EBP = (pop32());
  /* 11ea2fa0 ret  */
  ESPCHK(0x11ea2dedu, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa1 @ 0x11ea2fa1 (306 bytes, 132 insns) */
void f_11ea2fa1(void) {
  FTRACE(0x11ea2fa1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea2fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea2fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea2fa3 mov eax, dword ptr [0x11ea7900] */
  EAX = (r32((uint32_t)(0x11ea7900)));
  /* 11ea2fa8 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea2fa9 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea2faa mov ebp, dword ptr [0x11ea6060] */
  EBP = (r32((uint32_t)(0x11ea6060)));
  /* 11ea2fb0 push esi */
  push32((uint32_t)(ESI));
  /* 11ea2fb1 push edi */
  push32((uint32_t)(EDI));
  /* 11ea2fb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea2fb4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ea2fb6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea2fb8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2fba jne 0x11ea2fef */
  if (!C.zf) goto L_11ea2fef;
  /* 11ea2fbc call ebp */
  call_ind((uint32_t)(EBP), 0x11ea2fbeu);
  /* 11ea2fbe mov esi, eax */
  ESI = (EAX);
  /* 11ea2fc0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2fc2 je 0x11ea2fd0 */
  if (C.zf) goto L_11ea2fd0;
  /* 11ea2fc4 mov dword ptr [0x11ea7900], 1 */
  w32((uint32_t)(0x11ea7900), (0x1u));
  /* 11ea2fce jmp 0x11ea2ff8 */
  goto L_11ea2ff8;
L_11ea2fd0:;
  /* 11ea2fd0 call dword ptr [0x11ea6064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6064))), 0x11ea2fd6u);
  /* 11ea2fd6 mov edi, eax */
  EDI = (EAX);
  /* 11ea2fd8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2fda je 0x11ea30ca */
  if (C.zf) goto L_11ea30ca;
  /* 11ea2fe0 mov dword ptr [0x11ea7900], 2 */
  w32((uint32_t)(0x11ea7900), (0x2u));
  /* 11ea2fea jmp 0x11ea307e */
  goto L_11ea307e;
L_11ea2fef:;
  /* 11ea2fef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2ff2 jne 0x11ea3079 */
  if (!C.zf) goto L_11ea3079;
L_11ea2ff8:;
  /* 11ea2ff8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea2ffa jne 0x11ea3008 */
  if (!C.zf) goto L_11ea3008;
  /* 11ea2ffc call ebp */
  call_ind((uint32_t)(EBP), 0x11ea2ffeu);
  /* 11ea2ffe mov esi, eax */
  ESI = (EAX);
  /* 11ea3000 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3002 je 0x11ea30ca */
  if (C.zf) goto L_11ea30ca;
L_11ea3008:;
  /* 11ea3008 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ea300b mov eax, esi */
  EAX = (ESI);
  /* 11ea300d je 0x11ea301d */
  if (C.zf) goto L_11ea301d;
L_11ea300f:;
  /* 11ea300f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3010 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3011 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ea3014 jne 0x11ea300f */
  if (!C.zf) goto L_11ea300f;
  /* 11ea3016 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3017 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3018 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ea301b jne 0x11ea300f */
  if (!C.zf) goto L_11ea300f;
L_11ea301d:;
  /* 11ea301d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea301f mov edi, dword ptr [0x11ea6068] */
  EDI = (r32((uint32_t)(0x11ea6068)));
  /* 11ea3025 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ea3027 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3028 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3029 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea302a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea302b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea302c push eax */
  push32((uint32_t)(EAX));
  /* 11ea302d push esi */
  push32((uint32_t)(ESI));
  /* 11ea302e push ebx */
  push32((uint32_t)(EBX));
  /* 11ea302f push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3030 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11ea3034 call edi */
  call_ind((uint32_t)(EDI), 0x11ea3036u);
  /* 11ea3036 mov ebp, eax */
  EBP = (EAX);
  /* 11ea3038 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea303a je 0x11ea306e */
  if (C.zf) goto L_11ea306e;
  /* 11ea303c push ebp */
  push32((uint32_t)(EBP));
  /* 11ea303d call 0x11ea34f0 */
  push32(0x11ea3042u); f_11ea34f0();
  /* 11ea3042 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3044 pop ecx */
  ECX = (pop32());
  /* 11ea3045 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11ea3049 je 0x11ea306e */
  if (C.zf) goto L_11ea306e;
  /* 11ea304b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea304c push ebx */
  push32((uint32_t)(EBX));
  /* 11ea304d push ebp */
  push32((uint32_t)(EBP));
  /* 11ea304e push eax */
  push32((uint32_t)(EAX));
  /* 11ea304f push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11ea3053 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3054 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3055 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3056 call edi */
  call_ind((uint32_t)(EDI), 0x11ea3058u);
  /* 11ea3058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea305a jne 0x11ea306a */
  if (!C.zf) goto L_11ea306a;
  /* 11ea305c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11ea3060 call 0x11ea34a8 */
  push32(0x11ea3065u); f_11ea34a8();
  /* 11ea3065 pop ecx */
  ECX = (pop32());
  /* 11ea3066 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11ea306a:;
  /* 11ea306a mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11ea306e:;
  /* 11ea306e push esi */
  push32((uint32_t)(ESI));
  /* 11ea306f call dword ptr [0x11ea606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea606c))), 0x11ea3075u);
  /* 11ea3075 mov eax, ebx */
  EAX = (EBX);
  /* 11ea3077 jmp 0x11ea30cc */
  goto L_11ea30cc;
L_11ea3079:;
  /* 11ea3079 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea307c jne 0x11ea30ca */
  if (!C.zf) goto L_11ea30ca;
L_11ea307e:;
  /* 11ea307e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3080 jne 0x11ea308e */
  if (!C.zf) goto L_11ea308e;
  /* 11ea3082 call dword ptr [0x11ea6064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6064))), 0x11ea3088u);
  /* 11ea3088 mov edi, eax */
  EDI = (EAX);
  /* 11ea308a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea308c je 0x11ea30ca */
  if (C.zf) goto L_11ea30ca;
L_11ea308e:;
  /* 11ea308e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea3090 mov eax, edi */
  EAX = (EDI);
  /* 11ea3092 je 0x11ea309e */
  if (C.zf) goto L_11ea309e;
L_11ea3094:;
  /* 11ea3094 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3095 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea3097 jne 0x11ea3094 */
  if (!C.zf) goto L_11ea3094;
  /* 11ea3099 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea309a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea309c jne 0x11ea3094 */
  if (!C.zf) goto L_11ea3094;
L_11ea309e:;
  /* 11ea309e sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea30a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea30a1 mov ebp, eax */
  EBP = (EAX);
  /* 11ea30a3 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea30a4 call 0x11ea34f0 */
  push32(0x11ea30a9u); f_11ea34f0();
  /* 11ea30a9 mov esi, eax */
  ESI = (EAX);
  /* 11ea30ab pop ecx */
  ECX = (pop32());
  /* 11ea30ac cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea30ae jne 0x11ea30b4 */
  if (!C.zf) goto L_11ea30b4;
  /* 11ea30b0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ea30b2 jmp 0x11ea30bf */
  goto L_11ea30bf;
L_11ea30b4:;
  /* 11ea30b4 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea30b5 push edi */
  push32((uint32_t)(EDI));
  /* 11ea30b6 push esi */
  push32((uint32_t)(ESI));
  /* 11ea30b7 call 0x11ea3ae0 */
  push32(0x11ea30bcu); f_11ea3ae0();
  /* 11ea30bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea30bf:;
  /* 11ea30bf push edi */
  push32((uint32_t)(EDI));
  /* 11ea30c0 call dword ptr [0x11ea6070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6070))), 0x11ea30c6u);
  /* 11ea30c6 mov eax, esi */
  EAX = (ESI);
  /* 11ea30c8 jmp 0x11ea30cc */
  goto L_11ea30cc;
L_11ea30ca:;
  /* 11ea30ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ea30cc:;
  /* 11ea30cc pop edi */
  EDI = (pop32());
  /* 11ea30cd pop esi */
  ESI = (pop32());
  /* 11ea30ce pop ebp */
  EBP = (pop32());
  /* 11ea30cf pop ebx */
  EBX = (pop32());
  /* 11ea30d0 pop ecx */
  ECX = (pop32());
  /* 11ea30d1 pop ecx */
  ECX = (pop32());
  /* 11ea30d2 ret  */
  ESPCHK(0x11ea2fa1u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d3 @ 0x11ea30d3 (60 bytes, 20 insns) */
void f_11ea30d3(void) {
  FTRACE(0x11ea30d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea30d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea30d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea30d7 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea30db push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ea30e0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ea30e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ea30e4 call dword ptr [0x11ea6058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6058))), 0x11ea30eau);
  /* 11ea30ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea30ec mov dword ptr [0x11ea7be8], eax */
  w32((uint32_t)(0x11ea7be8), (EAX));
  /* 11ea30f1 je 0x11ea3108 */
  if (C.zf) goto L_11ea3108;
  /* 11ea30f3 call 0x11ea3e15 */
  push32(0x11ea30f8u); f_11ea3e15();
  /* 11ea30f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea30fa jne 0x11ea310b */
  if (!C.zf) goto L_11ea310b;
  /* 11ea30fc push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea3102 call dword ptr [0x11ea605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea605c))), 0x11ea3108u);
L_11ea3108:;
  /* 11ea3108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea310a ret  */
  ESPCHK(0x11ea30d3u, _esp0);
  ESP += 4; return;
L_11ea310b:;
  /* 11ea310b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea310d pop eax */
  EAX = (pop32());
  /* 11ea310e ret  */
  ESPCHK(0x11ea30d3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000310f @ 0x11ea310f (117 bytes, 38 insns) */
void f_11ea310f(void) {
  FTRACE(0x11ea310fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea310f push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3110 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea3112 cmp dword ptr [0x11ea79b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11ea79b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3118 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea3119 mov ebp, dword ptr [0x11ea6050] */
  EBP = (r32((uint32_t)(0x11ea6050)));
  /* 11ea311f jle 0x11ea3165 */
  if ((C.zf||C.sf!=C.of)) goto L_11ea3165;
  /* 11ea3121 mov eax, dword ptr [0x11ea79bc] */
  EAX = (r32((uint32_t)(0x11ea79bc)));
  /* 11ea3126 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3127 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3128 mov edi, dword ptr [0x11ea6054] */
  EDI = (r32((uint32_t)(0x11ea6054)));
  /* 11ea312e lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11ea3131:;
  /* 11ea3131 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ea3136 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ea313b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea313d call edi */
  call_ind((uint32_t)(EDI), 0x11ea313fu);
  /* 11ea313f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ea3144 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea3146 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea3148 call edi */
  call_ind((uint32_t)(EDI), 0x11ea314au);
  /* 11ea314a push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11ea314d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea314f push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea3155 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea3157u);
  /* 11ea3157 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea315a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ea315b cmp ebx, dword ptr [0x11ea79b8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11ea79b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3161 jl 0x11ea3131 */
  if ((C.sf!=C.of)) goto L_11ea3131;
  /* 11ea3163 pop edi */
  EDI = (pop32());
  /* 11ea3164 pop esi */
  ESI = (pop32());
L_11ea3165:;
  /* 11ea3165 push dword ptr [0x11ea79bc] */
  push32((uint32_t)(r32((uint32_t)(0x11ea79bc))));
  /* 11ea316b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea316d push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea3173 call ebp */
  call_ind((uint32_t)(EBP), 0x11ea3175u);
  /* 11ea3175 push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea317b call dword ptr [0x11ea605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea605c))), 0x11ea3181u);
  /* 11ea3181 pop ebp */
  EBP = (pop32());
  /* 11ea3182 pop ebx */
  EBX = (pop32());
  /* 11ea3183 ret  */
  ESPCHK(0x11ea310fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003184 @ 0x11ea3184 (57 bytes, 18 insns) */
void f_11ea3184(void) {
  FTRACE(0x11ea3184u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3184 mov eax, dword ptr [0x11ea77b0] */
  EAX = (r32((uint32_t)(0x11ea77b0)));
  /* 11ea3189 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea318c je 0x11ea319b */
  if (C.zf) goto L_11ea319b;
  /* 11ea318e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea3190 jne 0x11ea31bc */
  if (!C.zf) goto L_11ea31bc;
  /* 11ea3192 cmp dword ptr [0x11ea77b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ea77b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3199 jne 0x11ea31bc */
  if (!C.zf) goto L_11ea31bc;
L_11ea319b:;
  /* 11ea319b push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11ea31a0 call 0x11ea31bd */
  push32(0x11ea31a5u); f_11ea31bd();
  /* 11ea31a5 mov eax, dword ptr [0x11ea7904] */
  EAX = (r32((uint32_t)(0x11ea7904)));
  /* 11ea31aa pop ecx */
  ECX = (pop32());
  /* 11ea31ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea31ad je 0x11ea31b1 */
  if (C.zf) goto L_11ea31b1;
  /* 11ea31af call eax */
  call_ind((uint32_t)(EAX), 0x11ea31b1u);
L_11ea31b1:;
  /* 11ea31b1 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11ea31b6 call 0x11ea31bd */
  push32(0x11ea31bbu); f_11ea31bd();
  /* 11ea31bb pop ecx */
  ECX = (pop32());
L_11ea31bc:;
  /* 11ea31bc ret  */
  ESPCHK(0x11ea3184u, _esp0);
  ESP += 4; return;
}

/* FUN_100031bd @ 0x11ea31bd (339 bytes, 100 insns) */
void f_11ea31bd(void) {
  FTRACE(0x11ea31bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea31bd push ebp */
  push32((uint32_t)(EBP));
  /* 11ea31be mov ebp, esp */
  EBP = (ESP);
  /* 11ea31c0 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea31c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea31c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ea31cb mov eax, 0x11ea7288 */
  EAX = (0x11ea7288u);
L_11ea31d0:;
  /* 11ea31d0 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea31d2 je 0x11ea31df */
  if (C.zf) goto L_11ea31df;
  /* 11ea31d4 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea31d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea31d8 cmp eax, 0x11ea7318 */
  { uint32_t _a=(EAX),_b=(0x11ea7318u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea31dd jl 0x11ea31d0 */
  if ((C.sf!=C.of)) goto L_11ea31d0;
L_11ea31df:;
  /* 11ea31df push esi */
  push32((uint32_t)(ESI));
  /* 11ea31e0 mov esi, ecx */
  ESI = (ECX);
  /* 11ea31e2 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11ea31e5 cmp edx, dword ptr [esi + 0x11ea7288] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11ea7288))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea31eb jne 0x11ea330d */
  if (!C.zf) goto L_11ea330d;
  /* 11ea31f1 mov eax, dword ptr [0x11ea77b0] */
  EAX = (r32((uint32_t)(0x11ea77b0)));
  /* 11ea31f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea31f9 je 0x11ea32e7 */
  if (C.zf) goto L_11ea32e7;
  /* 11ea31ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea3201 jne 0x11ea3210 */
  if (!C.zf) goto L_11ea3210;
  /* 11ea3203 cmp dword ptr [0x11ea77b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ea77b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea320a je 0x11ea32e7 */
  if (C.zf) goto L_11ea32e7;
L_11ea3210:;
  /* 11ea3210 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3216 je 0x11ea330d */
  if (C.zf) goto L_11ea330d;
  /* 11ea321c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ea3222 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ea3227 push eax */
  push32((uint32_t)(EAX));
  /* 11ea3228 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea322a call dword ptr [0x11ea6074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6074))), 0x11ea3230u);
  /* 11ea3230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea3232 jne 0x11ea3247 */
  if (!C.zf) goto L_11ea3247;
  /* 11ea3234 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ea323a push 0x11ea6438 */
  push32((uint32_t)(0x11ea6438u));
  /* 11ea323f push eax */
  push32((uint32_t)(EAX));
  /* 11ea3240 call 0x11ea3580 */
  push32(0x11ea3245u); f_11ea3580();
  /* 11ea3245 pop ecx */
  ECX = (pop32());
  /* 11ea3246 pop ecx */
  ECX = (pop32());
L_11ea3247:;
  /* 11ea3247 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ea324d push edi */
  push32((uint32_t)(EDI));
  /* 11ea324e push eax */
  push32((uint32_t)(EAX));
  /* 11ea324f lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11ea3255 call 0x11ea3670 */
  push32(0x11ea325au); f_11ea3670();
  /* 11ea325a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea325b pop ecx */
  ECX = (pop32());
  /* 11ea325c cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea325f jbe 0x11ea328a */
  if ((C.cf||C.zf)) goto L_11ea328a;
  /* 11ea3261 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ea3267 push eax */
  push32((uint32_t)(EAX));
  /* 11ea3268 call 0x11ea3670 */
  push32(0x11ea326du); f_11ea3670();
  /* 11ea326d mov edi, eax */
  EDI = (EAX);
  /* 11ea326f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11ea3275 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3278 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ea327a add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea327c push 0x11ea6434 */
  push32((uint32_t)(0x11ea6434u));
  /* 11ea3281 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3282 call 0x11ea46f0 */
  push32(0x11ea3287u); f_11ea46f0();
  /* 11ea3287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea328a:;
  /* 11ea328a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ea3290 push 0x11ea6418 */
  push32((uint32_t)(0x11ea6418u));
  /* 11ea3295 push eax */
  push32((uint32_t)(EAX));
  /* 11ea3296 call 0x11ea3580 */
  push32(0x11ea329bu); f_11ea3580();
  /* 11ea329b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ea32a1 push edi */
  push32((uint32_t)(EDI));
  /* 11ea32a2 push eax */
  push32((uint32_t)(EAX));
  /* 11ea32a3 call 0x11ea3590 */
  push32(0x11ea32a8u); f_11ea3590();
  /* 11ea32a8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ea32ae push 0x11ea6414 */
  push32((uint32_t)(0x11ea6414u));
  /* 11ea32b3 push eax */
  push32((uint32_t)(EAX));
  /* 11ea32b4 call 0x11ea3590 */
  push32(0x11ea32b9u); f_11ea3590();
  /* 11ea32b9 push dword ptr [esi + 0x11ea728c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11ea728c))));
  /* 11ea32bf lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ea32c5 push eax */
  push32((uint32_t)(EAX));
  /* 11ea32c6 call 0x11ea3590 */
  push32(0x11ea32cbu); f_11ea3590();
  /* 11ea32cb push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11ea32d0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11ea32d6 push 0x11ea63ec */
  push32((uint32_t)(0x11ea63ecu));
  /* 11ea32db push eax */
  push32((uint32_t)(EAX));
  /* 11ea32dc call 0x11ea465e */
  push32(0x11ea32e1u); f_11ea465e();
  /* 11ea32e1 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea32e4 pop edi */
  EDI = (pop32());
  /* 11ea32e5 jmp 0x11ea330d */
  goto L_11ea330d;
L_11ea32e7:;
  /* 11ea32e7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ea32ea lea esi, [esi + 0x11ea728c] */
  ESI = ((uint32_t)(ESI + 0x11ea728c));
  /* 11ea32f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea32f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ea32f3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea32f5 call 0x11ea3670 */
  push32(0x11ea32fau); f_11ea3670();
  /* 11ea32fa pop ecx */
  ECX = (pop32());
  /* 11ea32fb push eax */
  push32((uint32_t)(EAX));
  /* 11ea32fc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea32fe push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ea3300 call dword ptr [0x11ea6084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6084))), 0x11ea3306u);
  /* 11ea3306 push eax */
  push32((uint32_t)(EAX));
  /* 11ea3307 call dword ptr [0x11ea604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea604c))), 0x11ea330du);
L_11ea330d:;
  /* 11ea330d pop esi */
  ESI = (pop32());
  /* 11ea330e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea330f ret  */
  ESPCHK(0x11ea31bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x11ea3310 (41 bytes, 12 insns) */
void f_11ea3310(void) {
  FTRACE(0x11ea3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3310 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3311 mov esi, dword ptr [0x11ea6048] */
  ESI = (r32((uint32_t)(0x11ea6048)));
  /* 11ea3317 push dword ptr [0x11ea735c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea735c))));
  /* 11ea331d call esi */
  call_ind((uint32_t)(ESI), 0x11ea331fu);
  /* 11ea331f push dword ptr [0x11ea734c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea734c))));
  /* 11ea3325 call esi */
  call_ind((uint32_t)(ESI), 0x11ea3327u);
  /* 11ea3327 push dword ptr [0x11ea733c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea733c))));
  /* 11ea332d call esi */
  call_ind((uint32_t)(ESI), 0x11ea332fu);
  /* 11ea332f push dword ptr [0x11ea731c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea731c))));
  /* 11ea3335 call esi */
  call_ind((uint32_t)(ESI), 0x11ea3337u);
  /* 11ea3337 pop esi */
  ESI = (pop32());
  /* 11ea3338 ret  */
  ESPCHK(0x11ea3310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003339 @ 0x11ea3339 (108 bytes, 34 insns) */
void f_11ea3339(void) {
  FTRACE(0x11ea3339u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3339 push esi */
  push32((uint32_t)(ESI));
  /* 11ea333a push edi */
  push32((uint32_t)(EDI));
  /* 11ea333b mov edi, dword ptr [0x11ea6078] */
  EDI = (r32((uint32_t)(0x11ea6078)));
  /* 11ea3341 mov esi, 0x11ea7318 */
  ESI = (0x11ea7318u);
L_11ea3346:;
  /* 11ea3346 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ea3348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea334a je 0x11ea3377 */
  if (C.zf) goto L_11ea3377;
  /* 11ea334c cmp esi, 0x11ea735c */
  { uint32_t _a=(ESI),_b=(0x11ea735cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3352 je 0x11ea3377 */
  if (C.zf) goto L_11ea3377;
  /* 11ea3354 cmp esi, 0x11ea734c */
  { uint32_t _a=(ESI),_b=(0x11ea734cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea335a je 0x11ea3377 */
  if (C.zf) goto L_11ea3377;
  /* 11ea335c cmp esi, 0x11ea733c */
  { uint32_t _a=(ESI),_b=(0x11ea733cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3362 je 0x11ea3377 */
  if (C.zf) goto L_11ea3377;
  /* 11ea3364 cmp esi, 0x11ea731c */
  { uint32_t _a=(ESI),_b=(0x11ea731cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea336a je 0x11ea3377 */
  if (C.zf) goto L_11ea3377;
  /* 11ea336c push eax */
  push32((uint32_t)(EAX));
  /* 11ea336d call edi */
  call_ind((uint32_t)(EDI), 0x11ea336fu);
  /* 11ea336f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea3371 call 0x11ea34a8 */
  push32(0x11ea3376u); f_11ea34a8();
  /* 11ea3376 pop ecx */
  ECX = (pop32());
L_11ea3377:;
  /* 11ea3377 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea337a cmp esi, 0x11ea73d8 */
  { uint32_t _a=(ESI),_b=(0x11ea73d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3380 jl 0x11ea3346 */
  if ((C.sf!=C.of)) goto L_11ea3346;
  /* 11ea3382 push dword ptr [0x11ea733c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea733c))));
  /* 11ea3388 call edi */
  call_ind((uint32_t)(EDI), 0x11ea338au);
  /* 11ea338a push dword ptr [0x11ea734c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea734c))));
  /* 11ea3390 call edi */
  call_ind((uint32_t)(EDI), 0x11ea3392u);
  /* 11ea3392 push dword ptr [0x11ea735c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea735c))));
  /* 11ea3398 call edi */
  call_ind((uint32_t)(EDI), 0x11ea339au);
  /* 11ea339a push dword ptr [0x11ea731c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea731c))));
  /* 11ea33a0 call edi */
  call_ind((uint32_t)(EDI), 0x11ea33a2u);
  /* 11ea33a2 pop edi */
  EDI = (pop32());
  /* 11ea33a3 pop esi */
  ESI = (pop32());
  /* 11ea33a4 ret  */
  ESPCHK(0x11ea3339u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a5 @ 0x11ea33a5 (97 bytes, 37 insns) */
void f_11ea33a5(void) {
  FTRACE(0x11ea33a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea33a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea33a6 mov ebp, esp */
  EBP = (ESP);
  /* 11ea33a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea33ab push esi */
  push32((uint32_t)(ESI));
  /* 11ea33ac cmp dword ptr [eax*4 + 0x11ea7318], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11ea7318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea33b4 lea esi, [eax*4 + 0x11ea7318] */
  ESI = ((uint32_t)(EAX*4 + 0x11ea7318));
  /* 11ea33bb jne 0x11ea33fb */
  if (!C.zf) goto L_11ea33fb;
  /* 11ea33bd push edi */
  push32((uint32_t)(EDI));
  /* 11ea33be push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11ea33c0 call 0x11ea34f0 */
  push32(0x11ea33c5u); f_11ea34f0();
  /* 11ea33c5 mov edi, eax */
  EDI = (EAX);
  /* 11ea33c7 pop ecx */
  ECX = (pop32());
  /* 11ea33c8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea33ca jne 0x11ea33d4 */
  if (!C.zf) goto L_11ea33d4;
  /* 11ea33cc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea33ce call 0x11ea2815 */
  push32(0x11ea33d3u); f_11ea2815();
  /* 11ea33d3 pop ecx */
  ECX = (pop32());
L_11ea33d4:;
  /* 11ea33d4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea33d6 call 0x11ea33a5 */
  push32(0x11ea33dbu); f_11ea33a5();
  /* 11ea33db cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea33de pop ecx */
  ECX = (pop32());
  /* 11ea33df push edi */
  push32((uint32_t)(EDI));
  /* 11ea33e0 jne 0x11ea33ec */
  if (!C.zf) goto L_11ea33ec;
  /* 11ea33e2 call dword ptr [0x11ea6048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6048))), 0x11ea33e8u);
  /* 11ea33e8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ea33ea jmp 0x11ea33f2 */
  goto L_11ea33f2;
L_11ea33ec:;
  /* 11ea33ec call 0x11ea34a8 */
  push32(0x11ea33f1u); f_11ea34a8();
  /* 11ea33f1 pop ecx */
  ECX = (pop32());
L_11ea33f2:;
  /* 11ea33f2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ea33f4 call 0x11ea3406 */
  push32(0x11ea33f9u); f_11ea3406();
  /* 11ea33f9 pop ecx */
  ECX = (pop32());
  /* 11ea33fa pop edi */
  EDI = (pop32());
L_11ea33fb:;
  /* 11ea33fb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11ea33fd call dword ptr [0x11ea6044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6044))), 0x11ea3403u);
  /* 11ea3403 pop esi */
  ESI = (pop32());
  /* 11ea3404 pop ebp */
  EBP = (pop32());
  /* 11ea3405 ret  */
  ESPCHK(0x11ea33a5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003406 @ 0x11ea3406 (21 bytes, 7 insns) */
void f_11ea3406(void) {
  FTRACE(0x11ea3406u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3406 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea3407 mov ebp, esp */
  EBP = (ESP);
  /* 11ea3409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea340c push dword ptr [eax*4 + 0x11ea7318] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11ea7318))));
  /* 11ea3413 call dword ptr [0x11ea6040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6040))), 0x11ea3419u);
  /* 11ea3419 pop ebp */
  EBP = (pop32());
  /* 11ea341a ret  */
  ESPCHK(0x11ea3406u, _esp0);
  ESP += 4; return;
}

/* FUN_1000341b @ 0x11ea341b (141 bytes, 56 insns) */
void f_11ea341b(void) {
  FTRACE(0x11ea341bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea341b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea341c push esi */
  push32((uint32_t)(ESI));
  /* 11ea341d mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11ea3421 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3422 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea3427 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea342a mov ebx, esi */
  EBX = (ESI);
  /* 11ea342c ja 0x11ea343b */
  if ((!C.cf&&!C.zf)) goto L_11ea343b;
  /* 11ea342e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea3430 jne 0x11ea3435 */
  if (!C.zf) goto L_11ea3435;
  /* 11ea3432 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea3434 pop esi */
  ESI = (pop32());
L_11ea3435:;
  /* 11ea3435 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3438 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11ea343b:;
  /* 11ea343b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea343d cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3440 ja 0x11ea347c */
  if ((!C.cf&&!C.zf)) goto L_11ea347c;
  /* 11ea3442 cmp ebx, dword ptr [0x11ea7560] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11ea7560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3448 ja 0x11ea3467 */
  if ((!C.cf&&!C.zf)) goto L_11ea3467;
  /* 11ea344a push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea344c call 0x11ea33a5 */
  push32(0x11ea3451u); f_11ea33a5();
  /* 11ea3451 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3452 call 0x11ea41a9 */
  push32(0x11ea3457u); f_11ea41a9();
  /* 11ea3457 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea3459 mov edi, eax */
  EDI = (EAX);
  /* 11ea345b call 0x11ea3406 */
  push32(0x11ea3460u); f_11ea3406();
  /* 11ea3460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3463 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea3465 jne 0x11ea3492 */
  if (!C.zf) goto L_11ea3492;
L_11ea3467:;
  /* 11ea3467 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3468 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea346a push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea3470 call dword ptr [0x11ea603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea603c))), 0x11ea3476u);
  /* 11ea3476 mov edi, eax */
  EDI = (EAX);
  /* 11ea3478 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea347a jne 0x11ea349e */
  if (!C.zf) goto L_11ea349e;
L_11ea347c:;
  /* 11ea347c cmp dword ptr [0x11ea797c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea797c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3483 je 0x11ea349e */
  if (C.zf) goto L_11ea349e;
  /* 11ea3485 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3486 call 0x11ea4848 */
  push32(0x11ea348bu); f_11ea4848();
  /* 11ea348b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea348d pop ecx */
  ECX = (pop32());
  /* 11ea348e je 0x11ea34a4 */
  if (C.zf) goto L_11ea34a4;
  /* 11ea3490 jmp 0x11ea343b */
  goto L_11ea343b;
L_11ea3492:;
  /* 11ea3492 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3493 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea3495 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3496 call 0x11ea47f0 */
  push32(0x11ea349bu); f_11ea47f0();
  /* 11ea349b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ea349e:;
  /* 11ea349e mov eax, edi */
  EAX = (EDI);
L_11ea34a0:;
  /* 11ea34a0 pop edi */
  EDI = (pop32());
  /* 11ea34a1 pop esi */
  ESI = (pop32());
  /* 11ea34a2 pop ebx */
  EBX = (pop32());
  /* 11ea34a3 ret  */
  ESPCHK(0x11ea341bu, _esp0);
  ESP += 4; return;
L_11ea34a4:;
  /* 11ea34a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea34a6 jmp 0x11ea34a0 */
  goto L_11ea34a0;
}

/* FUN_100034a8 @ 0x11ea34a8 (72 bytes, 29 insns) */
void f_11ea34a8(void) {
  FTRACE(0x11ea34a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea34a8 push esi */
  push32((uint32_t)(ESI));
  /* 11ea34a9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea34ad test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea34af je 0x11ea34ee */
  if (C.zf) goto L_11ea34ee;
  /* 11ea34b1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea34b3 call 0x11ea33a5 */
  push32(0x11ea34b8u); f_11ea33a5();
  /* 11ea34b8 push esi */
  push32((uint32_t)(ESI));
  /* 11ea34b9 call 0x11ea3e53 */
  push32(0x11ea34beu); f_11ea3e53();
  /* 11ea34be pop ecx */
  ECX = (pop32());
  /* 11ea34bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea34c1 pop ecx */
  ECX = (pop32());
  /* 11ea34c2 je 0x11ea34d7 */
  if (C.zf) goto L_11ea34d7;
  /* 11ea34c4 push esi */
  push32((uint32_t)(ESI));
  /* 11ea34c5 push eax */
  push32((uint32_t)(EAX));
  /* 11ea34c6 call 0x11ea3e7e */
  push32(0x11ea34cbu); f_11ea3e7e();
  /* 11ea34cb push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea34cd call 0x11ea3406 */
  push32(0x11ea34d2u); f_11ea3406();
  /* 11ea34d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea34d5 pop esi */
  ESI = (pop32());
  /* 11ea34d6 ret  */
  ESPCHK(0x11ea34a8u, _esp0);
  ESP += 4; return;
L_11ea34d7:;
  /* 11ea34d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea34d9 call 0x11ea3406 */
  push32(0x11ea34deu); f_11ea3406();
  /* 11ea34de pop ecx */
  ECX = (pop32());
  /* 11ea34df push esi */
  push32((uint32_t)(ESI));
  /* 11ea34e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea34e2 push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea34e8 call dword ptr [0x11ea6050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6050))), 0x11ea34eeu);
L_11ea34ee:;
  /* 11ea34ee pop esi */
  ESI = (pop32());
  /* 11ea34ef ret  */
  ESPCHK(0x11ea34a8u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11ea34f0 (18 bytes, 6 insns) */
void f_11ea34f0(void) {
  FTRACE(0x11ea34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea34f0 push dword ptr [0x11ea797c] */
  push32((uint32_t)(r32((uint32_t)(0x11ea797c))));
  /* 11ea34f6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11ea34fa call 0x11ea3502 */
  push32(0x11ea34ffu); f_11ea3502();
  /* 11ea34ff pop ecx */
  ECX = (pop32());
  /* 11ea3500 pop ecx */
  ECX = (pop32());
  /* 11ea3501 ret  */
  ESPCHK(0x11ea34f0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11ea3502 (44 bytes, 16 insns) */
void f_11ea3502(void) {
  FTRACE(0x11ea3502u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3502 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3507 ja 0x11ea352b */
  if ((!C.cf&&!C.zf)) goto L_11ea352b;
L_11ea3509:;
  /* 11ea3509 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ea350d call 0x11ea352e */
  push32(0x11ea3512u); f_11ea352e();
  /* 11ea3512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea3514 pop ecx */
  ECX = (pop32());
  /* 11ea3515 jne 0x11ea352d */
  if (!C.zf) goto L_11ea352d;
  /* 11ea3517 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea351b je 0x11ea352d */
  if (C.zf) goto L_11ea352d;
  /* 11ea351d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ea3521 call 0x11ea4848 */
  push32(0x11ea3526u); f_11ea4848();
  /* 11ea3526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea3528 pop ecx */
  ECX = (pop32());
  /* 11ea3529 jne 0x11ea3509 */
  if (!C.zf) goto L_11ea3509;
L_11ea352b:;
  /* 11ea352b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ea352d:;
  /* 11ea352d ret  */
  ESPCHK(0x11ea3502u, _esp0);
  ESP += 4; return;
}

/* FUN_1000352e @ 0x11ea352e (78 bytes, 30 insns) */
void f_11ea352e(void) {
  FTRACE(0x11ea352eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea352e push esi */
  push32((uint32_t)(ESI));
  /* 11ea352f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea3533 cmp esi, dword ptr [0x11ea7560] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11ea7560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3539 push edi */
  push32((uint32_t)(EDI));
  /* 11ea353a ja 0x11ea355d */
  if ((!C.cf&&!C.zf)) goto L_11ea355d;
  /* 11ea353c push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea353e call 0x11ea33a5 */
  push32(0x11ea3543u); f_11ea33a5();
  /* 11ea3543 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3544 call 0x11ea41a9 */
  push32(0x11ea3549u); f_11ea41a9();
  /* 11ea3549 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ea354b mov edi, eax */
  EDI = (EAX);
  /* 11ea354d call 0x11ea3406 */
  push32(0x11ea3552u); f_11ea3406();
  /* 11ea3552 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3555 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11ea3557 je 0x11ea355d */
  if (C.zf) goto L_11ea355d;
  /* 11ea3559 mov eax, edi */
  EAX = (EDI);
  /* 11ea355b jmp 0x11ea3579 */
  goto L_11ea3579;
L_11ea355d:;
  /* 11ea355d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea355f jne 0x11ea3564 */
  if (!C.zf) goto L_11ea3564;
  /* 11ea3561 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea3563 pop esi */
  ESI = (pop32());
L_11ea3564:;
  /* 11ea3564 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3567 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11ea356a push esi */
  push32((uint32_t)(ESI));
  /* 11ea356b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea356d push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea3573 call dword ptr [0x11ea603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea603c))), 0x11ea3579u);
L_11ea3579:;
  /* 11ea3579 pop edi */
  EDI = (pop32());
  /* 11ea357a pop esi */
  ESI = (pop32());
  /* 11ea357b ret  */
  ESPCHK(0x11ea352eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003580 @ 0x11ea3580 (7 bytes, 3 insns) */
void f_11ea3580(void) {
  FTRACE(0x11ea3580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3580 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3581 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea3585 jmp 0x11ea35f1 */
  jmp_ind(0x11ea35f1u); return;
}

/* FUN_10003590 @ 0x11ea3590 (224 bytes, 84 insns) */
void f_11ea3590(void) {
  FTRACE(0x11ea3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3590 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea3594 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3595 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ea359b je 0x11ea35ac */
  if (C.zf) goto L_11ea35ac;
L_11ea359d:;
  /* 11ea359d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ea359f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea35a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea35a2 je 0x11ea35df */
  if (C.zf) goto L_11ea35df;
  /* 11ea35a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ea35aa jne 0x11ea359d */
  if (!C.zf) goto L_11ea359d;
L_11ea35ac:;
  /* 11ea35ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ea35ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ea35b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea35b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea35b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea35ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea35bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ea35c2 je 0x11ea35ac */
  if (C.zf) goto L_11ea35ac;
  /* 11ea35c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ea35c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea35c9 je 0x11ea35ee */
  if (C.zf) goto L_11ea35ee;
  /* 11ea35cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ea35cd je 0x11ea35e9 */
  if (C.zf) goto L_11ea35e9;
  /* 11ea35cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ea35d4 je 0x11ea35e4 */
  if (C.zf) goto L_11ea35e4;
  /* 11ea35d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ea35db je 0x11ea35df */
  if (C.zf) goto L_11ea35df;
  /* 11ea35dd jmp 0x11ea35ac */
  goto L_11ea35ac;
L_11ea35df:;
  /* 11ea35df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11ea35e2 jmp 0x11ea35f1 */
  goto L_11ea35f1;
L_11ea35e4:;
  /* 11ea35e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11ea35e7 jmp 0x11ea35f1 */
  goto L_11ea35f1;
L_11ea35e9:;
  /* 11ea35e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11ea35ec jmp 0x11ea35f1 */
  goto L_11ea35f1;
L_11ea35ee:;
  /* 11ea35ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11ea35f1:;
  /* 11ea35f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ea35f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ea35fb je 0x11ea3616 */
  if (C.zf) goto L_11ea3616;
L_11ea35fd:;
  /* 11ea35fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ea35ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea3600 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea3602 je 0x11ea3668 */
  if (C.zf) goto L_11ea3668;
  /* 11ea3604 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ea3606 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea3607 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ea360d jne 0x11ea35fd */
  if (!C.zf) goto L_11ea35fd;
  /* 11ea360f jmp 0x11ea3616 */
  goto L_11ea3616;
L_11ea3611:;
  /* 11ea3611 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ea3613 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ea3616:;
  /* 11ea3616 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ea361b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ea361d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea361f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3622 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3624 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ea3626 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3629 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ea362e je 0x11ea3611 */
  if (C.zf) goto L_11ea3611;
  /* 11ea3630 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea3632 je 0x11ea3668 */
  if (C.zf) goto L_11ea3668;
  /* 11ea3634 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ea3636 je 0x11ea365f */
  if (C.zf) goto L_11ea365f;
  /* 11ea3638 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ea363e je 0x11ea3652 */
  if (C.zf) goto L_11ea3652;
  /* 11ea3640 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ea3646 je 0x11ea364a */
  if (C.zf) goto L_11ea364a;
  /* 11ea3648 jmp 0x11ea3611 */
  goto L_11ea3611;
L_11ea364a:;
  /* 11ea364a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ea364c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea3650 pop edi */
  EDI = (pop32());
  /* 11ea3651 ret  */
  ESPCHK(0x11ea3590u, _esp0);
  ESP += 4; return;
L_11ea3652:;
  /* 11ea3652 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11ea3655 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea3659 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11ea365d pop edi */
  EDI = (pop32());
  /* 11ea365e ret  */
  ESPCHK(0x11ea3590u, _esp0);
  ESP += 4; return;
L_11ea365f:;
  /* 11ea365f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11ea3662 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea3666 pop edi */
  EDI = (pop32());
  /* 11ea3667 ret  */
  ESPCHK(0x11ea3590u, _esp0);
  ESP += 4; return;
L_11ea3668:;
  /* 11ea3668 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ea366a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea366e pop edi */
  EDI = (pop32());
  /* 11ea366f ret  */
  ESPCHK(0x11ea3590u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11ea3670 (123 bytes, 44 insns) */
void f_11ea3670(void) {
  FTRACE(0x11ea3670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3670 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea3674 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ea367a je 0x11ea3690 */
  if (C.zf) goto L_11ea3690;
L_11ea367c:;
  /* 11ea367c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ea367e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea367f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea3681 je 0x11ea36c3 */
  if (C.zf) goto L_11ea36c3;
  /* 11ea3683 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ea3689 jne 0x11ea367c */
  if (!C.zf) goto L_11ea367c;
  /* 11ea368b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ea3690:;
  /* 11ea3690 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ea3692 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ea3697 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3699 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea369c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea369e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea36a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ea36a6 je 0x11ea3690 */
  if (C.zf) goto L_11ea3690;
  /* 11ea36a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ea36ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea36ad je 0x11ea36e1 */
  if (C.zf) goto L_11ea36e1;
  /* 11ea36af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ea36b1 je 0x11ea36d7 */
  if (C.zf) goto L_11ea36d7;
  /* 11ea36b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ea36b8 je 0x11ea36cd */
  if (C.zf) goto L_11ea36cd;
  /* 11ea36ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ea36bf je 0x11ea36c3 */
  if (C.zf) goto L_11ea36c3;
  /* 11ea36c1 jmp 0x11ea3690 */
  goto L_11ea3690;
L_11ea36c3:;
  /* 11ea36c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11ea36c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea36ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea36cc ret  */
  ESPCHK(0x11ea3670u, _esp0);
  ESP += 4; return;
L_11ea36cd:;
  /* 11ea36cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11ea36d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea36d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea36d6 ret  */
  ESPCHK(0x11ea3670u, _esp0);
  ESP += 4; return;
L_11ea36d7:;
  /* 11ea36d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11ea36da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea36de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea36e0 ret  */
  ESPCHK(0x11ea3670u, _esp0);
  ESP += 4; return;
L_11ea36e1:;
  /* 11ea36e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11ea36e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea36e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea36ea ret  */
  ESPCHK(0x11ea3670u, _esp0);
  ESP += 4; return;
}

/* FUN_100036eb @ 0x11ea36eb (429 bytes, 143 insns) */
void f_11ea36eb(void) {
  FTRACE(0x11ea36ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea36eb push ebp */
  push32((uint32_t)(EBP));
  /* 11ea36ec mov ebp, esp */
  EBP = (ESP);
  /* 11ea36ee sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea36f1 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea36f2 push esi */
  push32((uint32_t)(ESI));
  /* 11ea36f3 push edi */
  push32((uint32_t)(EDI));
  /* 11ea36f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ea36f6 call 0x11ea33a5 */
  push32(0x11ea36fbu); f_11ea33a5();
  /* 11ea36fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea36fe call 0x11ea3898 */
  push32(0x11ea3703u); f_11ea3898();
  /* 11ea3703 mov ebx, eax */
  EBX = (EAX);
  /* 11ea3705 pop ecx */
  ECX = (pop32());
  /* 11ea3706 cmp ebx, dword ptr [0x11ea79c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11ea79c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea370c pop ecx */
  ECX = (pop32());
  /* 11ea370d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea3710 jne 0x11ea3719 */
  if (!C.zf) goto L_11ea3719;
L_11ea3712:;
  /* 11ea3712 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ea3714 jmp 0x11ea3889 */
  goto L_11ea3889;
L_11ea3719:;
  /* 11ea3719 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ea371b je 0x11ea3877 */
  if (C.zf) goto L_11ea3877;
  /* 11ea3721 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3723 mov eax, 0x11ea7468 */
  EAX = (0x11ea7468u);
L_11ea3728:;
  /* 11ea3728 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea372a je 0x11ea37a0 */
  if (C.zf) goto L_11ea37a0;
  /* 11ea372c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea372f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ea3730 cmp eax, 0x11ea7558 */
  { uint32_t _a=(EAX),_b=(0x11ea7558u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3735 jl 0x11ea3728 */
  if ((C.sf!=C.of)) goto L_11ea3728;
  /* 11ea3737 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ea373a push eax */
  push32((uint32_t)(EAX));
  /* 11ea373b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea373c call dword ptr [0x11ea6038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6038))), 0x11ea3742u);
  /* 11ea3742 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea3744 pop esi */
  ESI = (pop32());
  /* 11ea3745 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3747 jne 0x11ea386e */
  if (!C.zf) goto L_11ea386e;
  /* 11ea374d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ea374f and dword ptr [0x11ea7be4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11ea7be4)))&(0x0u); w32((uint32_t)(0x11ea7be4), (_r)); fl_logic(_r,32); }
  /* 11ea3756 pop ecx */
  ECX = (pop32());
  /* 11ea3757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3759 mov edi, 0x11ea7ae0 */
  EDI = (0x11ea7ae0u);
  /* 11ea375e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3761 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ea3763 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ea3764 mov dword ptr [0x11ea79c0], ebx */
  w32((uint32_t)(0x11ea79c0), (EBX));
  /* 11ea376a jbe 0x11ea385b */
  if ((C.cf||C.zf)) goto L_11ea385b;
  /* 11ea3770 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea3774 je 0x11ea3836 */
  if (C.zf) goto L_11ea3836;
  /* 11ea377a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11ea377d:;
  /* 11ea377d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ea377f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea3781 je 0x11ea3836 */
  if (C.zf) goto L_11ea3836;
  /* 11ea3787 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11ea378b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11ea378e:;
  /* 11ea378e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3790 ja 0x11ea382a */
  if ((!C.cf&&!C.zf)) goto L_11ea382a;
  /* 11ea3796 or byte ptr [eax + 0x11ea7ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(0x4u); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea379d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea379e jmp 0x11ea378e */
  goto L_11ea378e;
L_11ea37a0:;
  /* 11ea37a0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea37a4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ea37a6 pop ecx */
  ECX = (pop32());
  /* 11ea37a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea37a9 mov edi, 0x11ea7ae0 */
  EDI = (0x11ea7ae0u);
  /* 11ea37ae lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11ea37b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ea37b3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ea37b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ea37b7 lea ebx, [esi + 0x11ea7478] */
  EBX = ((uint32_t)(ESI + 0x11ea7478));
L_11ea37bd:;
  /* 11ea37bd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea37c0 mov ecx, ebx */
  ECX = (EBX);
  /* 11ea37c2 je 0x11ea37f0 */
  if (C.zf) goto L_11ea37f0;
L_11ea37c4:;
  /* 11ea37c4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ea37c7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea37c9 je 0x11ea37f0 */
  if (C.zf) goto L_11ea37f0;
  /* 11ea37cb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11ea37ce movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11ea37d1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea37d3 ja 0x11ea37e9 */
  if ((!C.cf&&!C.zf)) goto L_11ea37e9;
  /* 11ea37d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea37d8 mov dl, byte ptr [edx + 0x11ea7460] */
  DL = (r8((uint32_t)(EDX + 0x11ea7460)));
L_11ea37de:;
  /* 11ea37de or byte ptr [eax + 0x11ea7ae1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(DL); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea37e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea37e5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea37e7 jbe 0x11ea37de */
  if ((C.cf||C.zf)) goto L_11ea37de;
L_11ea37e9:;
  /* 11ea37e9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea37ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea37eb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea37ee jne 0x11ea37c4 */
  if (!C.zf) goto L_11ea37c4;
L_11ea37f0:;
  /* 11ea37f0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ea37f3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea37f6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea37fa jb 0x11ea37bd */
  if (C.cf) goto L_11ea37bd;
  /* 11ea37fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea37ff mov dword ptr [0x11ea79dc], 1 */
  w32((uint32_t)(0x11ea79dc), (0x1u));
  /* 11ea3809 push eax */
  push32((uint32_t)(EAX));
  /* 11ea380a mov dword ptr [0x11ea79c0], eax */
  w32((uint32_t)(0x11ea79c0), (EAX));
  /* 11ea380f call 0x11ea38e2 */
  push32(0x11ea3814u); f_11ea38e2();
  /* 11ea3814 lea esi, [esi + 0x11ea746c] */
  ESI = ((uint32_t)(ESI + 0x11ea746c));
  /* 11ea381a mov edi, 0x11ea79d0 */
  EDI = (0x11ea79d0u);
  /* 11ea381f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ea3820 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ea3821 pop ecx */
  ECX = (pop32());
  /* 11ea3822 mov dword ptr [0x11ea7be4], eax */
  w32((uint32_t)(0x11ea7be4), (EAX));
  /* 11ea3827 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11ea3828 jmp 0x11ea387c */
  goto L_11ea387c;
L_11ea382a:;
  /* 11ea382a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea382b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea382c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea3830 jne 0x11ea377d */
  if (!C.zf) goto L_11ea377d;
L_11ea3836:;
  /* 11ea3836 mov eax, esi */
  EAX = (ESI);
L_11ea3838:;
  /* 11ea3838 or byte ptr [eax + 0x11ea7ae1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(0x8u); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea383f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3840 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3845 jb 0x11ea3838 */
  if (C.cf) goto L_11ea3838;
  /* 11ea3847 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3848 call 0x11ea38e2 */
  push32(0x11ea384du); f_11ea38e2();
  /* 11ea384d pop ecx */
  ECX = (pop32());
  /* 11ea384e mov dword ptr [0x11ea7be4], eax */
  w32((uint32_t)(0x11ea7be4), (EAX));
  /* 11ea3853 mov dword ptr [0x11ea79dc], esi */
  w32((uint32_t)(0x11ea79dc), (ESI));
  /* 11ea3859 jmp 0x11ea3862 */
  goto L_11ea3862;
L_11ea385b:;
  /* 11ea385b and dword ptr [0x11ea79dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11ea79dc)))&(0x0u); w32((uint32_t)(0x11ea79dc), (_r)); fl_logic(_r,32); }
L_11ea3862:;
  /* 11ea3862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3864 mov edi, 0x11ea79d0 */
  EDI = (0x11ea79d0u);
  /* 11ea3869 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ea386a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ea386b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ea386c jmp 0x11ea387c */
  goto L_11ea387c;
L_11ea386e:;
  /* 11ea386e cmp dword ptr [0x11ea7968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea7968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3875 je 0x11ea3886 */
  if (C.zf) goto L_11ea3886;
L_11ea3877:;
  /* 11ea3877 call 0x11ea3915 */
  push32(0x11ea387cu); f_11ea3915();
L_11ea387c:;
  /* 11ea387c call 0x11ea393e */
  push32(0x11ea3881u); f_11ea393e();
  /* 11ea3881 jmp 0x11ea3712 */
  goto L_11ea3712;
L_11ea3886:;
  /* 11ea3886 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11ea3889:;
  /* 11ea3889 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ea388b call 0x11ea3406 */
  push32(0x11ea3890u); f_11ea3406();
  /* 11ea3890 pop ecx */
  ECX = (pop32());
  /* 11ea3891 mov eax, esi */
  EAX = (ESI);
  /* 11ea3893 pop edi */
  EDI = (pop32());
  /* 11ea3894 pop esi */
  ESI = (pop32());
  /* 11ea3895 pop ebx */
  EBX = (pop32());
  /* 11ea3896 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3897 ret  */
  ESPCHK(0x11ea36ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10003898 @ 0x11ea3898 (74 bytes, 15 insns) */
void f_11ea3898(void) {
  FTRACE(0x11ea3898u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3898 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea389c and dword ptr [0x11ea7968], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11ea7968)))&(0x0u); w32((uint32_t)(0x11ea7968), (_r)); fl_logic(_r,32); }
  /* 11ea38a3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea38a6 jne 0x11ea38b8 */
  if (!C.zf) goto L_11ea38b8;
  /* 11ea38a8 mov dword ptr [0x11ea7968], 1 */
  w32((uint32_t)(0x11ea7968), (0x1u));
  /* 11ea38b2 jmp dword ptr [0x11ea6030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ea6030)))); return;
L_11ea38b8:;
  /* 11ea38b8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea38bb jne 0x11ea38cd */
  if (!C.zf) goto L_11ea38cd;
  /* 11ea38bd mov dword ptr [0x11ea7968], 1 */
  w32((uint32_t)(0x11ea7968), (0x1u));
  /* 11ea38c7 jmp dword ptr [0x11ea6034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ea6034)))); return;
L_11ea38cd:;
  /* 11ea38cd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea38d0 jne 0x11ea38e1 */
  if (!C.zf) goto L_11ea38e1;
  /* 11ea38d2 mov eax, dword ptr [0x11ea7998] */
  EAX = (r32((uint32_t)(0x11ea7998)));
  /* 11ea38d7 mov dword ptr [0x11ea7968], 1 */
  w32((uint32_t)(0x11ea7968), (0x1u));
L_11ea38e1:;
  /* 11ea38e1 ret  */
  ESPCHK(0x11ea3898u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e2 @ 0x11ea38e2 (51 bytes, 19 insns) */
void f_11ea38e2(void) {
  FTRACE(0x11ea38e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea38e2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea38e6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea38eb je 0x11ea390f */
  if (C.zf) goto L_11ea390f;
  /* 11ea38ed sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea38f0 je 0x11ea3909 */
  if (C.zf) goto L_11ea3909;
  /* 11ea38f2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea38f5 je 0x11ea3903 */
  if (C.zf) goto L_11ea3903;
  /* 11ea38f7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ea38f8 je 0x11ea38fd */
  if (C.zf) goto L_11ea38fd;
  /* 11ea38fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea38fc ret  */
  ESPCHK(0x11ea38e2u, _esp0);
  ESP += 4; return;
L_11ea38fd:;
  /* 11ea38fd mov eax, 0x404 */
  EAX = (0x404u);
  /* 11ea3902 ret  */
  ESPCHK(0x11ea38e2u, _esp0);
  ESP += 4; return;
L_11ea3903:;
  /* 11ea3903 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11ea3908 ret  */
  ESPCHK(0x11ea38e2u, _esp0);
  ESP += 4; return;
L_11ea3909:;
  /* 11ea3909 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11ea390e ret  */
  ESPCHK(0x11ea38e2u, _esp0);
  ESP += 4; return;
L_11ea390f:;
  /* 11ea390f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11ea3914 ret  */
  ESPCHK(0x11ea38e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003915 @ 0x11ea3915 (41 bytes, 17 insns) */
void f_11ea3915(void) {
  FTRACE(0x11ea3915u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3915 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3916 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ea3918 pop ecx */
  ECX = (pop32());
  /* 11ea3919 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea391b mov edi, 0x11ea7ae0 */
  EDI = (0x11ea7ae0u);
  /* 11ea3920 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ea3922 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ea3923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3925 mov edi, 0x11ea79d0 */
  EDI = (0x11ea79d0u);
  /* 11ea392a mov dword ptr [0x11ea79c0], eax */
  w32((uint32_t)(0x11ea79c0), (EAX));
  /* 11ea392f mov dword ptr [0x11ea79dc], eax */
  w32((uint32_t)(0x11ea79dc), (EAX));
  /* 11ea3934 mov dword ptr [0x11ea7be4], eax */
  w32((uint32_t)(0x11ea7be4), (EAX));
  /* 11ea3939 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ea393a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ea393b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11ea393c pop edi */
  EDI = (pop32());
  /* 11ea393d ret  */
  ESPCHK(0x11ea3915u, _esp0);
  ESP += 4; return;
}

/* FUN_1000393e @ 0x11ea393e (389 bytes, 124 insns) */
void f_11ea393e(void) {
  FTRACE(0x11ea393eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea393e push ebp */
  push32((uint32_t)(EBP));
  /* 11ea393f mov ebp, esp */
  EBP = (ESP);
  /* 11ea3941 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3947 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ea394a push esi */
  push32((uint32_t)(ESI));
  /* 11ea394b push eax */
  push32((uint32_t)(EAX));
  /* 11ea394c push dword ptr [0x11ea79c0] */
  push32((uint32_t)(r32((uint32_t)(0x11ea79c0))));
  /* 11ea3952 call dword ptr [0x11ea6038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6038))), 0x11ea3958u);
  /* 11ea3958 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea395b jne 0x11ea3a77 */
  if (!C.zf) goto L_11ea3a77;
  /* 11ea3961 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3963 mov esi, 0x100 */
  ESI = (0x100u);
L_11ea3968:;
  /* 11ea3968 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11ea396f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3970 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3972 jb 0x11ea3968 */
  if (C.cf) goto L_11ea3968;
  /* 11ea3974 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11ea3977 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11ea397e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea3980 je 0x11ea39b9 */
  if (C.zf) goto L_11ea39b9;
  /* 11ea3982 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3983 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3984 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11ea3987:;
  /* 11ea3987 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11ea398a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11ea398d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea398f ja 0x11ea39ae */
  if ((!C.cf&&!C.zf)) goto L_11ea39ae;
  /* 11ea3991 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3993 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11ea399a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea399b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11ea39a0 mov ebx, ecx */
  EBX = (ECX);
  /* 11ea39a2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea39a5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ea39a7 mov ecx, ebx */
  ECX = (EBX);
  /* 11ea39a9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ea39ac rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11ea39ae:;
  /* 11ea39ae inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ea39af inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ea39b0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11ea39b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea39b5 jne 0x11ea3987 */
  if (!C.zf) goto L_11ea3987;
  /* 11ea39b7 pop edi */
  EDI = (pop32());
  /* 11ea39b8 pop ebx */
  EBX = (pop32());
L_11ea39b9:;
  /* 11ea39b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea39bb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11ea39c1 push dword ptr [0x11ea7be4] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be4))));
  /* 11ea39c7 push dword ptr [0x11ea79c0] */
  push32((uint32_t)(r32((uint32_t)(0x11ea79c0))));
  /* 11ea39cd push eax */
  push32((uint32_t)(EAX));
  /* 11ea39ce lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11ea39d4 push esi */
  push32((uint32_t)(ESI));
  /* 11ea39d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ea39d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea39d8 call 0x11ea4ab2 */
  push32(0x11ea39ddu); f_11ea4ab2();
  /* 11ea39dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea39df lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11ea39e5 push dword ptr [0x11ea79c0] */
  push32((uint32_t)(r32((uint32_t)(0x11ea79c0))));
  /* 11ea39eb push esi */
  push32((uint32_t)(ESI));
  /* 11ea39ec push eax */
  push32((uint32_t)(EAX));
  /* 11ea39ed lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11ea39f3 push esi */
  push32((uint32_t)(ESI));
  /* 11ea39f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ea39f5 push esi */
  push32((uint32_t)(ESI));
  /* 11ea39f6 push dword ptr [0x11ea7be4] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be4))));
  /* 11ea39fc call 0x11ea4863 */
  push32(0x11ea3a01u); f_11ea4863();
  /* 11ea3a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea3a03 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11ea3a09 push dword ptr [0x11ea79c0] */
  push32((uint32_t)(r32((uint32_t)(0x11ea79c0))));
  /* 11ea3a0f push esi */
  push32((uint32_t)(ESI));
  /* 11ea3a10 push eax */
  push32((uint32_t)(EAX));
  /* 11ea3a11 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11ea3a17 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3a18 push eax */
  push32((uint32_t)(EAX));
  /* 11ea3a19 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11ea3a1e push dword ptr [0x11ea7be4] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be4))));
  /* 11ea3a24 call 0x11ea4863 */
  push32(0x11ea3a29u); f_11ea4863();
  /* 11ea3a29 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3a2e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11ea3a34:;
  /* 11ea3a34 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11ea3a37 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11ea3a3a je 0x11ea3a52 */
  if (C.zf) goto L_11ea3a52;
  /* 11ea3a3c or byte ptr [eax + 0x11ea7ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(0x10u); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea3a43 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11ea3a4a:;
  /* 11ea3a4a mov byte ptr [eax + 0x11ea79e0], dl */
  w8((uint32_t)(EAX + 0x11ea79e0), (DL));
  /* 11ea3a50 jmp 0x11ea3a6e */
  goto L_11ea3a6e;
L_11ea3a52:;
  /* 11ea3a52 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11ea3a55 je 0x11ea3a67 */
  if (C.zf) goto L_11ea3a67;
  /* 11ea3a57 or byte ptr [eax + 0x11ea7ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(0x20u); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea3a5e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11ea3a65 jmp 0x11ea3a4a */
  goto L_11ea3a4a;
L_11ea3a67:;
  /* 11ea3a67 and byte ptr [eax + 0x11ea79e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea79e0)))&(0x0u); w8((uint32_t)(EAX + 0x11ea79e0), (_r)); fl_logic(_r,8); }
L_11ea3a6e:;
  /* 11ea3a6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3a6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea3a70 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ea3a71 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3a73 jb 0x11ea3a34 */
  if (C.cf) goto L_11ea3a34;
  /* 11ea3a75 jmp 0x11ea3ac0 */
  goto L_11ea3ac0;
L_11ea3a77:;
  /* 11ea3a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3a79 mov esi, 0x100 */
  ESI = (0x100u);
L_11ea3a7e:;
  /* 11ea3a7e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3a81 jb 0x11ea3a9c */
  if (C.cf) goto L_11ea3a9c;
  /* 11ea3a83 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3a86 ja 0x11ea3a9c */
  if ((!C.cf&&!C.zf)) goto L_11ea3a9c;
  /* 11ea3a88 or byte ptr [eax + 0x11ea7ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(0x10u); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea3a8f mov cl, al */
  CL = (AL);
  /* 11ea3a91 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11ea3a94:;
  /* 11ea3a94 mov byte ptr [eax + 0x11ea79e0], cl */
  w8((uint32_t)(EAX + 0x11ea79e0), (CL));
  /* 11ea3a9a jmp 0x11ea3abb */
  goto L_11ea3abb;
L_11ea3a9c:;
  /* 11ea3a9c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3a9f jb 0x11ea3ab4 */
  if (C.cf) goto L_11ea3ab4;
  /* 11ea3aa1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3aa4 ja 0x11ea3ab4 */
  if ((!C.cf&&!C.zf)) goto L_11ea3ab4;
  /* 11ea3aa6 or byte ptr [eax + 0x11ea7ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea7ae1)))|(0x20u); w8((uint32_t)(EAX + 0x11ea7ae1), (_r)); fl_logic(_r,8); }
  /* 11ea3aad mov cl, al */
  CL = (AL);
  /* 11ea3aaf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ea3ab2 jmp 0x11ea3a94 */
  goto L_11ea3a94;
L_11ea3ab4:;
  /* 11ea3ab4 and byte ptr [eax + 0x11ea79e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11ea79e0)))&(0x0u); w8((uint32_t)(EAX + 0x11ea79e0), (_r)); fl_logic(_r,8); }
L_11ea3abb:;
  /* 11ea3abb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea3abc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3abe jb 0x11ea3a7e */
  if (C.cf) goto L_11ea3a7e;
L_11ea3ac0:;
  /* 11ea3ac0 pop esi */
  ESI = (pop32());
  /* 11ea3ac1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3ac2 ret  */
  ESPCHK(0x11ea393eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac3 @ 0x11ea3ac3 (28 bytes, 7 insns) */
void f_11ea3ac3(void) {
  FTRACE(0x11ea3ac3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3ac3 cmp dword ptr [0x11ea7d08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ea7d08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3aca jne 0x11ea3ade */
  if (!C.zf) goto L_11ea3ade;
  /* 11ea3acc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11ea3ace call 0x11ea36eb */
  push32(0x11ea3ad3u); f_11ea36eb();
  /* 11ea3ad3 pop ecx */
  ECX = (pop32());
  /* 11ea3ad4 mov dword ptr [0x11ea7d08], 1 */
  w32((uint32_t)(0x11ea7d08), (0x1u));
L_11ea3ade:;
  /* 11ea3ade ret  */
  ESPCHK(0x11ea3ac3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x11ea3ae0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_11ea3ae0(void) {
  FTRACE(0x11ea3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11ea3ae3 push edi */
  push32((uint32_t)(EDI));
  /* 11ea3ae4 push esi */
  push32((uint32_t)(ESI));
  /* 11ea3ae5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea3ae8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ea3aeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3aee mov eax, ecx */
  EAX = (ECX);
  /* 11ea3af0 mov edx, ecx */
  EDX = (ECX);
  /* 11ea3af2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3af4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3af6 jbe 0x11ea3b00 */
  if ((C.cf||C.zf)) goto L_11ea3b00;
  /* 11ea3af8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3afa jb 0x11ea3c78 */
  if (C.cf) goto L_11ea3c78;
L_11ea3b00:;
  /* 11ea3b00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ea3b06 jne 0x11ea3b1c */
  if (!C.zf) goto L_11ea3b1c;
  /* 11ea3b08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3b0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3b0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3b11 jb 0x11ea3b3c */
  if (C.cf) goto L_11ea3b3c;
  /* 11ea3b13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3b15 jmp dword ptr [edx*4 + 0x11ea3c28] */
  switch (EDX) {
    case 0: goto L_11ea3c38;
    case 1: goto L_11ea3c40;
    case 2: goto L_11ea3c4c;
    case 3: goto L_11ea3c60;
    default: x86_unimpl("switch@0x11ea3b15 out of table"); return;
  }
L_11ea3b1c:;
  /* 11ea3b1c mov eax, edi */
  EAX = (EDI);
  /* 11ea3b1e mov edx, 3 */
  EDX = (0x3u);
  /* 11ea3b23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3b26 jb 0x11ea3b34 */
  if (C.cf) goto L_11ea3b34;
  /* 11ea3b28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3b2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3b2d jmp dword ptr [eax*4 + 0x11ea3b40] */
  switch (EAX) {
    case 1: goto L_11ea3b50;
    case 2: goto L_11ea3b7c;
    case 3: goto L_11ea3ba0;
    default: x86_unimpl("switch@0x11ea3b2d out of table"); return;
  }
L_11ea3b34:;
  /* 11ea3b34 jmp dword ptr [ecx*4 + 0x11ea3c38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ea3c38)))); return;
  /* 11ea3b3b nop  */
  /* nop */
L_11ea3b3c:;
  /* 11ea3b3c jmp dword ptr [ecx*4 + 0x11ea3bbc] */
  switch (ECX) {
    case 0: goto L_11ea3c1f;
    case 1: goto L_11ea3c0c;
    case 2: goto L_11ea3c04;
    case 3: goto L_11ea3bfc;
    case 4: goto L_11ea3bf4;
    case 5: goto L_11ea3bec;
    case 6: goto L_11ea3be4;
    case 7: goto L_11ea3bdc;
    default: x86_unimpl("switch@0x11ea3b3c out of table"); return;
  }
  /* 11ea3b43 nop  */
  /* nop */
L_11ea3b50:;
  /* 11ea3b50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3b52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea3b54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea3b56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea3b59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea3b5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea3b5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3b62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea3b65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3b68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3b6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3b6e jb 0x11ea3b3c */
  if (C.cf) goto L_11ea3b3c;
  /* 11ea3b70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3b72 jmp dword ptr [edx*4 + 0x11ea3c28] */
  switch (EDX) {
    case 0: goto L_11ea3c38;
    case 1: goto L_11ea3c40;
    case 2: goto L_11ea3c4c;
    case 3: goto L_11ea3c60;
    default: x86_unimpl("switch@0x11ea3b72 out of table"); return;
  }
  /* 11ea3b79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea3b7c:;
  /* 11ea3b7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3b7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea3b80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea3b82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea3b85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3b88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea3b8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3b8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3b91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3b94 jb 0x11ea3b3c */
  if (C.cf) goto L_11ea3b3c;
  /* 11ea3b96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3b98 jmp dword ptr [edx*4 + 0x11ea3c28] */
  switch (EDX) {
    case 0: goto L_11ea3c38;
    case 1: goto L_11ea3c40;
    case 2: goto L_11ea3c4c;
    case 3: goto L_11ea3c60;
    default: x86_unimpl("switch@0x11ea3b98 out of table"); return;
  }
  /* 11ea3b9f nop  */
  /* nop */
L_11ea3ba0:;
  /* 11ea3ba0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3ba2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea3ba4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea3ba6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea3ba7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3baa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea3bab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3bae jb 0x11ea3b3c */
  if (C.cf) goto L_11ea3b3c;
  /* 11ea3bb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3bb2 jmp dword ptr [edx*4 + 0x11ea3c28] */
  switch (EDX) {
    case 0: goto L_11ea3c38;
    case 1: goto L_11ea3c40;
    case 2: goto L_11ea3c4c;
    case 3: goto L_11ea3c60;
    default: x86_unimpl("switch@0x11ea3bb2 out of table"); return;
  }
  /* 11ea3bb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea3bdc:;
  /* 11ea3bdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ea3be0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ea3be4:;
  /* 11ea3be4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ea3be8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ea3bec:;
  /* 11ea3bec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ea3bf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ea3bf4:;
  /* 11ea3bf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ea3bf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ea3bfc:;
  /* 11ea3bfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ea3c00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ea3c04:;
  /* 11ea3c04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ea3c08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ea3c0c:;
  /* 11ea3c0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ea3c10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ea3c14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ea3c1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3c1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ea3c1f:;
  /* 11ea3c1f jmp dword ptr [edx*4 + 0x11ea3c28] */
  switch (EDX) {
    case 0: goto L_11ea3c38;
    case 1: goto L_11ea3c40;
    case 2: goto L_11ea3c4c;
    case 3: goto L_11ea3c60;
    default: x86_unimpl("switch@0x11ea3c1f out of table"); return;
  }
  /* 11ea3c26 mov edi, edi */
  EDI = (EDI);
L_11ea3c38:;
  /* 11ea3c38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3c3b pop esi */
  ESI = (pop32());
  /* 11ea3c3c pop edi */
  EDI = (pop32());
  /* 11ea3c3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3c3e ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3c3f nop  */
  /* nop */
L_11ea3c40:;
  /* 11ea3c40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea3c42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea3c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3c47 pop esi */
  ESI = (pop32());
  /* 11ea3c48 pop edi */
  EDI = (pop32());
  /* 11ea3c49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3c4a ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3c4b nop  */
  /* nop */
L_11ea3c4c:;
  /* 11ea3c4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea3c4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea3c50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea3c53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea3c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3c59 pop esi */
  ESI = (pop32());
  /* 11ea3c5a pop edi */
  EDI = (pop32());
  /* 11ea3c5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3c5c ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3c5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea3c60:;
  /* 11ea3c60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea3c62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea3c64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea3c67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea3c6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea3c6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea3c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3c73 pop esi */
  ESI = (pop32());
  /* 11ea3c74 pop edi */
  EDI = (pop32());
  /* 11ea3c75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3c76 ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3c77 nop  */
  /* nop */
L_11ea3c78:;
  /* 11ea3c78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ea3c7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ea3c80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ea3c86 jne 0x11ea3cac */
  if (!C.zf) goto L_11ea3cac;
  /* 11ea3c88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3c8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3c8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3c91 jb 0x11ea3ca0 */
  if (C.cf) goto L_11ea3ca0;
  /* 11ea3c93 std  */
  C.df=1;
  /* 11ea3c94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3c96 cld  */
  C.df=0;
  /* 11ea3c97 jmp dword ptr [edx*4 + 0x11ea3dc0] */
  switch (EDX) {
    case 0: goto L_11ea3dd0;
    case 1: goto L_11ea3dd8;
    case 2: goto L_11ea3de8;
    case 3: goto L_11ea3dfc;
    default: x86_unimpl("switch@0x11ea3c97 out of table"); return;
  }
  /* 11ea3c9e mov edi, edi */
  EDI = (EDI);
L_11ea3ca0:;
  /* 11ea3ca0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ea3ca2 jmp dword ptr [ecx*4 + 0x11ea3d70] */
  switch (ECX) {
    case 0: goto L_11ea3db7;
    default: x86_unimpl("switch@0x11ea3ca2 out of table"); return;
  }
  /* 11ea3ca9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea3cac:;
  /* 11ea3cac mov eax, edi */
  EAX = (EDI);
  /* 11ea3cae mov edx, 3 */
  EDX = (0x3u);
  /* 11ea3cb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3cb6 jb 0x11ea3cc4 */
  if (C.cf) goto L_11ea3cc4;
  /* 11ea3cb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ea3cbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3cbd jmp dword ptr [eax*4 + 0x11ea3cc8] */
  switch (EAX) {
    case 1: goto L_11ea3cd8;
    case 2: goto L_11ea3cf8;
    case 3: goto L_11ea3d20;
    default: x86_unimpl("switch@0x11ea3cbd out of table"); return;
  }
L_11ea3cc4:;
  /* 11ea3cc4 jmp dword ptr [ecx*4 + 0x11ea3dc0] */
  switch (ECX) {
    case 0: goto L_11ea3dd0;
    case 1: goto L_11ea3dd8;
    case 2: goto L_11ea3de8;
    case 3: goto L_11ea3dfc;
    default: x86_unimpl("switch@0x11ea3cc4 out of table"); return;
  }
  /* 11ea3ccb nop  */
  /* nop */
L_11ea3cd8:;
  /* 11ea3cd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea3cdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3cdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea3ce0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea3ce1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3ce4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ea3ce5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3ce8 jb 0x11ea3ca0 */
  if (C.cf) goto L_11ea3ca0;
  /* 11ea3cea std  */
  C.df=1;
  /* 11ea3ceb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3ced cld  */
  C.df=0;
  /* 11ea3cee jmp dword ptr [edx*4 + 0x11ea3dc0] */
  switch (EDX) {
    case 0: goto L_11ea3dd0;
    case 1: goto L_11ea3dd8;
    case 2: goto L_11ea3de8;
    case 3: goto L_11ea3dfc;
    default: x86_unimpl("switch@0x11ea3cee out of table"); return;
  }
  /* 11ea3cf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea3cf8:;
  /* 11ea3cf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea3cfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3cfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea3d00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea3d03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3d06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea3d09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3d0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3d0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3d12 jb 0x11ea3ca0 */
  if (C.cf) goto L_11ea3ca0;
  /* 11ea3d14 std  */
  C.df=1;
  /* 11ea3d15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3d17 cld  */
  C.df=0;
  /* 11ea3d18 jmp dword ptr [edx*4 + 0x11ea3dc0] */
  switch (EDX) {
    case 0: goto L_11ea3dd0;
    case 1: goto L_11ea3dd8;
    case 2: goto L_11ea3de8;
    case 3: goto L_11ea3dfc;
    default: x86_unimpl("switch@0x11ea3d18 out of table"); return;
  }
  /* 11ea3d1f nop  */
  /* nop */
L_11ea3d20:;
  /* 11ea3d20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea3d23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea3d25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea3d28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea3d2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea3d2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea3d31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea3d34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea3d37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3d3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3d3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3d40 jb 0x11ea3ca0 */
  if (C.cf) goto L_11ea3ca0;
  /* 11ea3d46 std  */
  C.df=1;
  /* 11ea3d47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea3d49 cld  */
  C.df=0;
  /* 11ea3d4a jmp dword ptr [edx*4 + 0x11ea3dc0] */
  switch (EDX) {
    case 0: goto L_11ea3dd0;
    case 1: goto L_11ea3dd8;
    case 2: goto L_11ea3de8;
    case 3: goto L_11ea3dfc;
    default: x86_unimpl("switch@0x11ea3d4a out of table"); return;
  }
  /* 11ea3d51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ea3d54 je 0x11ea3d93 */
  if (C.zf) goto L_11ea3d93;
  /* 11ea3d56 ljmp 0x8411:0xea3d7c11 */
  x86_unimpl("ljmp @ 0x11ea3d56");
  /* 11ea3d5d cmp eax, 0x3d8c11ea */
  { uint32_t _a=(EAX),_b=(0x3d8c11eau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3d62 ljmp 0x9c11:0xea3d9411 */
  x86_unimpl("ljmp @ 0x11ea3d62");
  /* 11ea3d69 cmp eax, 0x3da411ea */
  { uint32_t _a=(EAX),_b=(0x3da411eau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3d74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ea3d78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ea3d7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ea3d80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ea3d84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ea3d88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ea3d8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ea3d90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ea3d94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ea3d98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ea3d9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ea3da0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ea3da4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ea3da8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ea3dac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ea3db3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3db5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ea3db7:;
  /* 11ea3db7 jmp dword ptr [edx*4 + 0x11ea3dc0] */
  switch (EDX) {
    case 0: goto L_11ea3dd0;
    case 1: goto L_11ea3dd8;
    case 2: goto L_11ea3de8;
    case 3: goto L_11ea3dfc;
    default: x86_unimpl("switch@0x11ea3db7 out of table"); return;
  }
  /* 11ea3dbe mov edi, edi */
  EDI = (EDI);
L_11ea3dd0:;
  /* 11ea3dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3dd3 pop esi */
  ESI = (pop32());
  /* 11ea3dd4 pop edi */
  EDI = (pop32());
  /* 11ea3dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3dd6 ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3dd7 nop  */
  /* nop */
L_11ea3dd8:;
  /* 11ea3dd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea3ddb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea3dde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3de1 pop esi */
  ESI = (pop32());
  /* 11ea3de2 pop edi */
  EDI = (pop32());
  /* 11ea3de3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3de4 ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3de5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea3de8:;
  /* 11ea3de8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea3deb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea3dee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea3df1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea3df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3df7 pop esi */
  ESI = (pop32());
  /* 11ea3df8 pop edi */
  EDI = (pop32());
  /* 11ea3df9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3dfa ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
  /* 11ea3dfb nop  */
  /* nop */
L_11ea3dfc:;
  /* 11ea3dfc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea3dff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea3e02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea3e05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea3e08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea3e0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea3e0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3e11 pop esi */
  ESI = (pop32());
  /* 11ea3e12 pop edi */
  EDI = (pop32());
  /* 11ea3e13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea3e14 ret  */
  ESPCHK(0x11ea3ae0u, _esp0);
  ESP += 4; return;
L_11ea3d93: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11ea3d93 (unresolved jump table)"); return;
}

/* FUN_10003e15 @ 0x11ea3e15 (62 bytes, 15 insns) */
void f_11ea3e15(void) {
  FTRACE(0x11ea3e15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3e15 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11ea3e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea3e1c push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea3e22 call dword ptr [0x11ea603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea603c))), 0x11ea3e28u);
  /* 11ea3e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea3e2a mov dword ptr [0x11ea79bc], eax */
  w32((uint32_t)(0x11ea79bc), (EAX));
  /* 11ea3e2f jne 0x11ea3e32 */
  if (!C.zf) goto L_11ea3e32;
  /* 11ea3e31 ret  */
  ESPCHK(0x11ea3e15u, _esp0);
  ESP += 4; return;
L_11ea3e32:;
  /* 11ea3e32 and dword ptr [0x11ea79b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11ea79b4)))&(0x0u); w32((uint32_t)(0x11ea79b4), (_r)); fl_logic(_r,32); }
  /* 11ea3e39 and dword ptr [0x11ea79b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11ea79b8)))&(0x0u); w32((uint32_t)(0x11ea79b8), (_r)); fl_logic(_r,32); }
  /* 11ea3e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea3e42 mov dword ptr [0x11ea79b0], eax */
  w32((uint32_t)(0x11ea79b0), (EAX));
  /* 11ea3e47 mov dword ptr [0x11ea79a8], 0x10 */
  w32((uint32_t)(0x11ea79a8), (0x10u));
  /* 11ea3e51 pop eax */
  EAX = (pop32());
  /* 11ea3e52 ret  */
  ESPCHK(0x11ea3e15u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e53 @ 0x11ea3e53 (43 bytes, 14 insns) */
void f_11ea3e53(void) {
  FTRACE(0x11ea3e53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3e53 mov eax, dword ptr [0x11ea79b8] */
  EAX = (r32((uint32_t)(0x11ea79b8)));
  /* 11ea3e58 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11ea3e5b mov eax, dword ptr [0x11ea79bc] */
  EAX = (r32((uint32_t)(0x11ea79bc)));
  /* 11ea3e60 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11ea3e63:;
  /* 11ea3e63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3e65 jae 0x11ea3e7b */
  if (!C.cf) goto L_11ea3e7b;
  /* 11ea3e67 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea3e6b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3e6e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3e74 jb 0x11ea3e7d */
  if (C.cf) goto L_11ea3e7d;
  /* 11ea3e76 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3e79 jmp 0x11ea3e63 */
  goto L_11ea3e63;
L_11ea3e7b:;
  /* 11ea3e7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ea3e7d:;
  /* 11ea3e7d ret  */
  ESPCHK(0x11ea3e53u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e7e @ 0x11ea3e7e (811 bytes, 264 insns) */
void f_11ea3e7e(void) {
  FTRACE(0x11ea3e7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea3e7e push ebp */
  push32((uint32_t)(EBP));
  /* 11ea3e7f mov ebp, esp */
  EBP = (ESP);
  /* 11ea3e81 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3e84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea3e87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3e8a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea3e8b push esi */
  push32((uint32_t)(ESI));
  /* 11ea3e8c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ea3e8f mov esi, edx */
  ESI = (EDX);
  /* 11ea3e91 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3e94 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11ea3e97 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3e9a push edi */
  push32((uint32_t)(EDI));
  /* 11ea3e9b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11ea3e9e mov ecx, esi */
  ECX = (ESI);
  /* 11ea3ea0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11ea3ea3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea3ea9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ea3eaa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ea3ead lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ea3eb4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11ea3eb7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ea3eba mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11ea3ebd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11ea3ec0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ea3ec3 jne 0x11ea3f44 */
  if (!C.zf) goto L_11ea3f44;
  /* 11ea3ec5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ea3ec8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ea3eca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea3ecb pop edi */
  EDI = (pop32());
  /* 11ea3ecc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ea3ecf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3ed1 jbe 0x11ea3ed6 */
  if ((C.cf||C.zf)) goto L_11ea3ed6;
  /* 11ea3ed3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11ea3ed6:;
  /* 11ea3ed6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11ea3eda cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3ede jne 0x11ea3f28 */
  if (!C.zf) goto L_11ea3f28;
  /* 11ea3ee0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea3ee3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3ee6 jae 0x11ea3f04 */
  if (!C.cf) goto L_11ea3f04;
  /* 11ea3ee8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ea3eed shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ea3eef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11ea3ef3 not edi */
  EDI = (~(EDI));
  /* 11ea3ef5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ea3ef9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ea3efb jne 0x11ea3f28 */
  if (!C.zf) goto L_11ea3f28;
  /* 11ea3efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3f00 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ea3f02 jmp 0x11ea3f28 */
  goto L_11ea3f28;
L_11ea3f04:;
  /* 11ea3f04 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3f07 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ea3f0c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ea3f0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea3f11 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11ea3f15 not edi */
  EDI = (~(EDI));
  /* 11ea3f17 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ea3f1e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ea3f20 jne 0x11ea3f28 */
  if (!C.zf) goto L_11ea3f28;
  /* 11ea3f22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3f25 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ea3f28:;
  /* 11ea3f28 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11ea3f2c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11ea3f30 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11ea3f33 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11ea3f37 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11ea3f3b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3f3e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11ea3f41 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11ea3f44:;
  /* 11ea3f44 mov edi, ebx */
  EDI = (EBX);
  /* 11ea3f46 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11ea3f49 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ea3f4a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3f4d jbe 0x11ea3f52 */
  if ((C.cf||C.zf)) goto L_11ea3f52;
  /* 11ea3f4f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ea3f51 pop edi */
  EDI = (pop32());
L_11ea3f52:;
  /* 11ea3f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea3f55 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ea3f58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ea3f5b jne 0x11ea4001 */
  if (!C.zf) goto L_11ea4001;
  /* 11ea3f61 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea3f64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea3f67 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ea3f6a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ea3f6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ea3f6f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea3f70 pop edx */
  EDX = (pop32());
  /* 11ea3f71 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3f73 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ea3f76 jbe 0x11ea3f7d */
  if ((C.cf||C.zf)) goto L_11ea3f7d;
  /* 11ea3f78 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11ea3f7b mov ecx, edx */
  ECX = (EDX);
L_11ea3f7d:;
  /* 11ea3f7d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3f80 mov edi, ebx */
  EDI = (EBX);
  /* 11ea3f82 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11ea3f85 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11ea3f88 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ea3f89 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3f8b jbe 0x11ea3f8f */
  if ((C.cf||C.zf)) goto L_11ea3f8f;
  /* 11ea3f8d mov edi, edx */
  EDI = (EDX);
L_11ea3f8f:;
  /* 11ea3f8f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3f91 je 0x11ea3ffe */
  if (C.zf) goto L_11ea3ffe;
  /* 11ea3f93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ea3f96 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ea3f99 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3f9c jne 0x11ea3fe6 */
  if (!C.zf) goto L_11ea3fe6;
  /* 11ea3f9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea3fa1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea3fa4 jae 0x11ea3fc2 */
  if (!C.cf) goto L_11ea3fc2;
  /* 11ea3fa6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ea3fab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ea3fad lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11ea3fb1 not edx */
  EDX = (~(EDX));
  /* 11ea3fb3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ea3fb7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ea3fb9 jne 0x11ea3fe6 */
  if (!C.zf) goto L_11ea3fe6;
  /* 11ea3fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3fbe and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ea3fc0 jmp 0x11ea3fe6 */
  goto L_11ea3fe6;
L_11ea3fc2:;
  /* 11ea3fc2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea3fc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ea3fca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ea3fcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea3fcf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11ea3fd3 not edx */
  EDX = (~(EDX));
  /* 11ea3fd5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ea3fdc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11ea3fde jne 0x11ea3fe6 */
  if (!C.zf) goto L_11ea3fe6;
  /* 11ea3fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea3fe3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ea3fe6:;
  /* 11ea3fe6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ea3fe9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ea3fec mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ea3fef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ea3ff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ea3ff5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ea3ff8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ea3ffb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ea3ffe:;
  /* 11ea3ffe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11ea4001:;
  /* 11ea4001 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4005 jne 0x11ea4010 */
  if (!C.zf) goto L_11ea4010;
  /* 11ea4007 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea400a je 0x11ea4099 */
  if (C.zf) goto L_11ea4099;
L_11ea4010:;
  /* 11ea4010 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ea4013 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11ea4016 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ea4019 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ea401c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ea401f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11ea4022 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ea4025 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ea4028 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea402b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ea402e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea4031 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4034 jne 0x11ea4099 */
  if (!C.zf) goto L_11ea4099;
  /* 11ea4036 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11ea403a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea403d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11ea4040 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ea4042 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11ea4046 jae 0x11ea406d */
  if (!C.cf) goto L_11ea406d;
  /* 11ea4048 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea404c jne 0x11ea405c */
  if (!C.zf) goto L_11ea405c;
  /* 11ea404e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ea4053 mov ecx, edi */
  ECX = (EDI);
  /* 11ea4055 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ea4057 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea405a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11ea405c:;
  /* 11ea405c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ea4061 mov ecx, edi */
  ECX = (EDI);
  /* 11ea4063 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ea4065 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11ea4069 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11ea406b jmp 0x11ea4096 */
  goto L_11ea4096;
L_11ea406d:;
  /* 11ea406d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea4071 jne 0x11ea4083 */
  if (!C.zf) goto L_11ea4083;
  /* 11ea4073 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11ea4076 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ea407b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ea407d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4080 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11ea4083:;
  /* 11ea4083 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11ea4086 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ea408b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ea408d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11ea4094 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11ea4096:;
  /* 11ea4096 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11ea4099:;
  /* 11ea4099 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ea409c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11ea409e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11ea40a2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11ea40a4 jne 0x11ea41a4 */
  if (!C.zf) goto L_11ea41a4;
  /* 11ea40aa mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea40af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea40b1 je 0x11ea4196 */
  if (C.zf) goto L_11ea4196;
  /* 11ea40b7 mov ecx, dword ptr [0x11ea79ac] */
  ECX = (r32((uint32_t)(0x11ea79ac)));
  /* 11ea40bd mov edi, dword ptr [0x11ea6054] */
  EDI = (r32((uint32_t)(0x11ea6054)));
  /* 11ea40c3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11ea40c6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea40c9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11ea40ce push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ea40d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea40d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea40d5 call edi */
  call_ind((uint32_t)(EDI), 0x11ea40d7u);
  /* 11ea40d7 mov ecx, dword ptr [0x11ea79ac] */
  ECX = (r32((uint32_t)(0x11ea79ac)));
  /* 11ea40dd mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea40e2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ea40e7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ea40e9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ea40ec mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea40f1 mov ecx, dword ptr [0x11ea79ac] */
  ECX = (r32((uint32_t)(0x11ea79ac)));
  /* 11ea40f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ea40fa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11ea4102 mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea4107 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ea410a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11ea410d mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea4112 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ea4115 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea4119 jne 0x11ea4124 */
  if (!C.zf) goto L_11ea4124;
  /* 11ea411b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ea411f mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
L_11ea4124:;
  /* 11ea4124 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4128 jne 0x11ea4196 */
  if (!C.zf) goto L_11ea4196;
  /* 11ea412a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea412b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea412d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11ea4130 call edi */
  call_ind((uint32_t)(EDI), 0x11ea4132u);
  /* 11ea4132 mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea4137 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11ea413a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea413c push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea4142 call dword ptr [0x11ea6050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6050))), 0x11ea4148u);
  /* 11ea4148 mov eax, dword ptr [0x11ea79b8] */
  EAX = (r32((uint32_t)(0x11ea79b8)));
  /* 11ea414d mov edx, dword ptr [0x11ea79bc] */
  EDX = (r32((uint32_t)(0x11ea79bc)));
  /* 11ea4153 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ea4156 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ea4159 mov ecx, eax */
  ECX = (EAX);
  /* 11ea415b mov eax, dword ptr [0x11ea79b4] */
  EAX = (r32((uint32_t)(0x11ea79b4)));
  /* 11ea4160 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4162 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11ea4166 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea4167 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11ea416a push ecx */
  push32((uint32_t)(ECX));
  /* 11ea416b push eax */
  push32((uint32_t)(EAX));
  /* 11ea416c call 0x11ea4c00 */
  push32(0x11ea4171u); f_11ea4c00();
  /* 11ea4171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4174 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4177 dec dword ptr [0x11ea79b8] */
  { uint32_t _r=(r32((uint32_t)(0x11ea79b8)))-1; w32((uint32_t)(0x11ea79b8), (_r)); fl_dec(_r,32); }
  /* 11ea417d cmp eax, dword ptr [0x11ea79b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ea79b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4183 jbe 0x11ea4188 */
  if ((C.cf||C.zf)) goto L_11ea4188;
  /* 11ea4185 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ea4188:;
  /* 11ea4188 mov ecx, dword ptr [0x11ea79bc] */
  ECX = (r32((uint32_t)(0x11ea79bc)));
  /* 11ea418e mov dword ptr [0x11ea79b0], ecx */
  w32((uint32_t)(0x11ea79b0), (ECX));
  /* 11ea4194 jmp 0x11ea4199 */
  goto L_11ea4199;
L_11ea4196:;
  /* 11ea4196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ea4199:;
  /* 11ea4199 mov dword ptr [0x11ea79b4], eax */
  w32((uint32_t)(0x11ea79b4), (EAX));
  /* 11ea419e mov dword ptr [0x11ea79ac], esi */
  w32((uint32_t)(0x11ea79ac), (ESI));
L_11ea41a4:;
  /* 11ea41a4 pop edi */
  EDI = (pop32());
  /* 11ea41a5 pop esi */
  ESI = (pop32());
  /* 11ea41a6 pop ebx */
  EBX = (pop32());
  /* 11ea41a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea41a8 ret  */
  ESPCHK(0x11ea3e7eu, _esp0);
  ESP += 4; return;
}

/* FUN_100041a9 @ 0x11ea41a9 (777 bytes, 275 insns) */
void f_11ea41a9(void) {
  FTRACE(0x11ea41a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea41a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea41aa mov ebp, esp */
  EBP = (ESP);
  /* 11ea41ac sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea41af mov eax, dword ptr [0x11ea79b8] */
  EAX = (r32((uint32_t)(0x11ea79b8)));
  /* 11ea41b4 mov edx, dword ptr [0x11ea79bc] */
  EDX = (r32((uint32_t)(0x11ea79bc)));
  /* 11ea41ba push ebx */
  push32((uint32_t)(EBX));
  /* 11ea41bb push esi */
  push32((uint32_t)(ESI));
  /* 11ea41bc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ea41bf push edi */
  push32((uint32_t)(EDI));
  /* 11ea41c0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11ea41c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea41c6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ea41c9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11ea41cc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ea41cf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ea41d2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ea41d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea41d6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea41d9 jge 0x11ea41e9 */
  if ((C.sf==C.of)) goto L_11ea41e9;
  /* 11ea41db or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11ea41de shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11ea41e0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ea41e4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11ea41e7 jmp 0x11ea41f9 */
  goto L_11ea41f9;
L_11ea41e9:;
  /* 11ea41e9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea41ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea41ef xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11ea41f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ea41f3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11ea41f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ea41f9:;
  /* 11ea41f9 mov eax, dword ptr [0x11ea79b0] */
  EAX = (r32((uint32_t)(0x11ea79b0)));
  /* 11ea41fe mov ebx, eax */
  EBX = (EAX);
  /* 11ea4200 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4202 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea4205 jae 0x11ea4220 */
  if (!C.cf) goto L_11ea4220;
L_11ea4207:;
  /* 11ea4207 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ea420a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11ea420c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ea420f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea4211 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ea4213 jne 0x11ea4220 */
  if (!C.zf) goto L_11ea4220;
  /* 11ea4215 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4218 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea421b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea421e jb 0x11ea4207 */
  if (C.cf) goto L_11ea4207;
L_11ea4220:;
  /* 11ea4220 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4223 jne 0x11ea429e */
  if (!C.zf) goto L_11ea429e;
  /* 11ea4225 mov ebx, edx */
  EBX = (EDX);
L_11ea4227:;
  /* 11ea4227 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4229 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea422c jae 0x11ea4243 */
  if (!C.cf) goto L_11ea4243;
  /* 11ea422e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11ea4231 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11ea4233 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ea4236 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea4238 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ea423a jne 0x11ea4241 */
  if (!C.zf) goto L_11ea4241;
  /* 11ea423c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea423f jmp 0x11ea4227 */
  goto L_11ea4227;
L_11ea4241:;
  /* 11ea4241 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ea4243:;
  /* 11ea4243 jne 0x11ea429e */
  if (!C.zf) goto L_11ea429e;
L_11ea4245:;
  /* 11ea4245 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4248 jae 0x11ea425b */
  if (!C.cf) goto L_11ea425b;
  /* 11ea424a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea424e jne 0x11ea4258 */
  if (!C.zf) goto L_11ea4258;
  /* 11ea4250 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4253 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea4256 jmp 0x11ea4245 */
  goto L_11ea4245;
L_11ea4258:;
  /* 11ea4258 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ea425b:;
  /* 11ea425b jne 0x11ea4283 */
  if (!C.zf) goto L_11ea4283;
  /* 11ea425d mov ebx, edx */
  EBX = (EDX);
L_11ea425f:;
  /* 11ea425f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4261 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea4264 jae 0x11ea4273 */
  if (!C.cf) goto L_11ea4273;
  /* 11ea4266 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea426a jne 0x11ea4271 */
  if (!C.zf) goto L_11ea4271;
  /* 11ea426c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea426f jmp 0x11ea425f */
  goto L_11ea425f;
L_11ea4271:;
  /* 11ea4271 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11ea4273:;
  /* 11ea4273 jne 0x11ea4283 */
  if (!C.zf) goto L_11ea4283;
  /* 11ea4275 call 0x11ea44b2 */
  push32(0x11ea427au); f_11ea44b2();
  /* 11ea427a mov ebx, eax */
  EBX = (EAX);
  /* 11ea427c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ea427e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11ea4281 je 0x11ea4297 */
  if (C.zf) goto L_11ea4297;
L_11ea4283:;
  /* 11ea4283 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4284 call 0x11ea4563 */
  push32(0x11ea4289u); f_11ea4563();
  /* 11ea4289 pop ecx */
  ECX = (pop32());
  /* 11ea428a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11ea428d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ea428f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11ea4292 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4295 jne 0x11ea429e */
  if (!C.zf) goto L_11ea429e;
L_11ea4297:;
  /* 11ea4297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea4299 jmp 0x11ea44ad */
  goto L_11ea44ad;
L_11ea429e:;
  /* 11ea429e mov dword ptr [0x11ea79b0], ebx */
  w32((uint32_t)(0x11ea79b0), (EBX));
  /* 11ea42a4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11ea42a7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ea42a9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea42ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ea42af je 0x11ea42c5 */
  if (C.zf) goto L_11ea42c5;
  /* 11ea42b1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11ea42b8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11ea42bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ea42bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea42c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ea42c3 jne 0x11ea42fc */
  if (!C.zf) goto L_11ea42fc;
L_11ea42c5:;
  /* 11ea42c5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11ea42cb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11ea42ce and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ea42d1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11ea42d4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea42d8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11ea42db or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11ea42dd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11ea42e0 jne 0x11ea42f9 */
  if (!C.zf) goto L_11ea42f9;
L_11ea42e2:;
  /* 11ea42e2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11ea42e8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11ea42eb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ea42ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea42f1 mov edi, esi */
  EDI = (ESI);
  /* 11ea42f3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11ea42f5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11ea42f7 je 0x11ea42e2 */
  if (C.zf) goto L_11ea42e2;
L_11ea42f9:;
  /* 11ea42f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11ea42fc:;
  /* 11ea42fc mov ecx, edx */
  ECX = (EDX);
  /* 11ea42fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea4300 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea4306 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ea430d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ea4310 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11ea4314 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11ea4316 jne 0x11ea4325 */
  if (!C.zf) goto L_11ea4325;
  /* 11ea4318 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11ea431f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ea4321 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11ea4324 pop edi */
  EDI = (pop32());
L_11ea4325:;
  /* 11ea4325 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ea4327 jl 0x11ea432e */
  if ((C.sf!=C.of)) goto L_11ea432e;
  /* 11ea4329 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ea432b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea432c jmp 0x11ea4325 */
  goto L_11ea4325;
L_11ea432e:;
  /* 11ea432e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ea4331 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11ea4335 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ea4337 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea433a mov esi, ecx */
  ESI = (ECX);
  /* 11ea433c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ea433f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11ea4342 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea4343 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4346 jle 0x11ea434b */
  if ((C.zf||C.sf!=C.of)) goto L_11ea434b;
  /* 11ea4348 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ea434a pop esi */
  ESI = (pop32());
L_11ea434b:;
  /* 11ea434b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea434d je 0x11ea4460 */
  if (C.zf) goto L_11ea4460;
  /* 11ea4353 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea4356 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4359 jne 0x11ea43bc */
  if (!C.zf) goto L_11ea43bc;
  /* 11ea435b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea435e jge 0x11ea438b */
  if ((C.sf==C.of)) goto L_11ea438b;
  /* 11ea4360 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ea4365 mov ecx, edi */
  ECX = (EDI);
  /* 11ea4367 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ea4369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea436c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11ea4370 not ebx */
  EBX = (~(EBX));
  /* 11ea4372 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11ea4375 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11ea4379 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11ea437d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11ea437f jne 0x11ea43b9 */
  if (!C.zf) goto L_11ea43b9;
  /* 11ea4381 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4384 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ea4387 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11ea4389 jmp 0x11ea43bc */
  goto L_11ea43bc;
L_11ea438b:;
  /* 11ea438b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11ea438e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11ea4393 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11ea4395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea4398 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11ea439c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11ea43a3 not ebx */
  EBX = (~(EBX));
  /* 11ea43a5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11ea43a7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11ea43a9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11ea43ac jne 0x11ea43b9 */
  if (!C.zf) goto L_11ea43b9;
  /* 11ea43ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea43b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ea43b4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11ea43b7 jmp 0x11ea43bc */
  goto L_11ea43bc;
L_11ea43b9:;
  /* 11ea43b9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11ea43bc:;
  /* 11ea43bc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ea43bf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea43c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea43c6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11ea43c9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea43cc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11ea43cf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11ea43d2 je 0x11ea446c */
  if (C.zf) goto L_11ea446c;
  /* 11ea43d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ea43db mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11ea43df lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11ea43e2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11ea43e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ea43e8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ea43eb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea43ee mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ea43f1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ea43f4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea43f7 jne 0x11ea445d */
  if (!C.zf) goto L_11ea445d;
  /* 11ea43f9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11ea43fd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4400 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11ea4403 jge 0x11ea442e */
  if ((C.sf==C.of)) goto L_11ea442e;
  /* 11ea4405 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ea4407 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea440b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11ea440f jne 0x11ea441c */
  if (!C.zf) goto L_11ea441c;
  /* 11ea4411 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ea4416 mov ecx, esi */
  ECX = (ESI);
  /* 11ea4418 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ea441a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11ea441c:;
  /* 11ea441c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ea4421 mov ecx, esi */
  ECX = (ESI);
  /* 11ea4423 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ea4425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea4428 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ea442c jmp 0x11ea445d */
  goto L_11ea445d;
L_11ea442e:;
  /* 11ea442e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ea4430 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea4434 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11ea4438 jne 0x11ea4447 */
  if (!C.zf) goto L_11ea4447;
  /* 11ea443a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ea443d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11ea4442 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11ea4444 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11ea4447:;
  /* 11ea4447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea444a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11ea4451 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11ea4454 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11ea4459 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11ea445b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11ea445d:;
  /* 11ea445d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11ea4460:;
  /* 11ea4460 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ea4462 je 0x11ea446f */
  if (C.zf) goto L_11ea446f;
  /* 11ea4464 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ea4466 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11ea446a jmp 0x11ea446f */
  goto L_11ea446f;
L_11ea446c:;
  /* 11ea446c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11ea446f:;
  /* 11ea446f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11ea4472 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4474 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11ea4477 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ea4479 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11ea447d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11ea4480 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11ea4482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ea4484 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11ea4487 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ea4489 jne 0x11ea44a5 */
  if (!C.zf) goto L_11ea44a5;
  /* 11ea448b cmp ebx, dword ptr [0x11ea79b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11ea79b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4491 jne 0x11ea44a5 */
  if (!C.zf) goto L_11ea44a5;
  /* 11ea4493 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea4496 cmp ecx, dword ptr [0x11ea79ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ea79ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea449c jne 0x11ea44a5 */
  if (!C.zf) goto L_11ea44a5;
  /* 11ea449e and dword ptr [0x11ea79b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11ea79b4)))&(0x0u); w32((uint32_t)(0x11ea79b4), (_r)); fl_logic(_r,32); }
L_11ea44a5:;
  /* 11ea44a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea44a8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ea44aa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11ea44ad:;
  /* 11ea44ad pop edi */
  EDI = (pop32());
  /* 11ea44ae pop esi */
  ESI = (pop32());
  /* 11ea44af pop ebx */
  EBX = (pop32());
  /* 11ea44b0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea44b1 ret  */
  ESPCHK(0x11ea41a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b2 @ 0x11ea44b2 (177 bytes, 53 insns) */
void f_11ea44b2(void) {
  FTRACE(0x11ea44b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea44b2 mov eax, dword ptr [0x11ea79b8] */
  EAX = (r32((uint32_t)(0x11ea79b8)));
  /* 11ea44b7 mov ecx, dword ptr [0x11ea79a8] */
  ECX = (r32((uint32_t)(0x11ea79a8)));
  /* 11ea44bd push esi */
  push32((uint32_t)(ESI));
  /* 11ea44be push edi */
  push32((uint32_t)(EDI));
  /* 11ea44bf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea44c1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea44c3 jne 0x11ea44f5 */
  if (!C.zf) goto L_11ea44f5;
  /* 11ea44c5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11ea44c9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ea44cc push eax */
  push32((uint32_t)(EAX));
  /* 11ea44cd push dword ptr [0x11ea79bc] */
  push32((uint32_t)(r32((uint32_t)(0x11ea79bc))));
  /* 11ea44d3 push edi */
  push32((uint32_t)(EDI));
  /* 11ea44d4 push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea44da call dword ptr [0x11ea6028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6028))), 0x11ea44e0u);
  /* 11ea44e0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea44e2 je 0x11ea4545 */
  if (C.zf) goto L_11ea4545;
  /* 11ea44e4 add dword ptr [0x11ea79a8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11ea79a8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11ea79a8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ea44eb mov dword ptr [0x11ea79bc], eax */
  w32((uint32_t)(0x11ea79bc), (EAX));
  /* 11ea44f0 mov eax, dword ptr [0x11ea79b8] */
  EAX = (r32((uint32_t)(0x11ea79b8)));
L_11ea44f5:;
  /* 11ea44f5 mov ecx, dword ptr [0x11ea79bc] */
  ECX = (r32((uint32_t)(0x11ea79bc)));
  /* 11ea44fb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ea4500 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ea4502 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11ea4505 push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea450b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11ea450e call dword ptr [0x11ea603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea603c))), 0x11ea4514u);
  /* 11ea4514 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4516 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11ea4519 je 0x11ea4545 */
  if (C.zf) goto L_11ea4545;
  /* 11ea451b push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea451d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11ea4522 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ea4527 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4528 call dword ptr [0x11ea602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea602c))), 0x11ea452eu);
  /* 11ea452e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4530 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11ea4533 jne 0x11ea4549 */
  if (!C.zf) goto L_11ea4549;
  /* 11ea4535 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11ea4538 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4539 push dword ptr [0x11ea7be8] */
  push32((uint32_t)(r32((uint32_t)(0x11ea7be8))));
  /* 11ea453f call dword ptr [0x11ea6050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6050))), 0x11ea4545u);
L_11ea4545:;
  /* 11ea4545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea4547 jmp 0x11ea4560 */
  goto L_11ea4560;
L_11ea4549:;
  /* 11ea4549 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ea454d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11ea454f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11ea4552 inc dword ptr [0x11ea79b8] */
  { uint32_t _r=(r32((uint32_t)(0x11ea79b8)))+1; w32((uint32_t)(0x11ea79b8), (_r)); fl_inc(_r,32); }
  /* 11ea4558 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11ea455b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11ea455e mov eax, esi */
  EAX = (ESI);
L_11ea4560:;
  /* 11ea4560 pop edi */
  EDI = (pop32());
  /* 11ea4561 pop esi */
  ESI = (pop32());
  /* 11ea4562 ret  */
  ESPCHK(0x11ea44b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004563 @ 0x11ea4563 (251 bytes, 85 insns) */
void f_11ea4563(void) {
  FTRACE(0x11ea4563u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4563 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea4564 mov ebp, esp */
  EBP = (ESP);
  /* 11ea4566 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea4567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea456a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea456b push esi */
  push32((uint32_t)(ESI));
  /* 11ea456c push edi */
  push32((uint32_t)(EDI));
  /* 11ea456d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11ea4570 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ea4573 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11ea4575:;
  /* 11ea4575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea4577 jl 0x11ea457e */
  if ((C.sf!=C.of)) goto L_11ea457e;
  /* 11ea4579 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ea457b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11ea457c jmp 0x11ea4575 */
  goto L_11ea4575;
L_11ea457e:;
  /* 11ea457e mov eax, ebx */
  EAX = (EBX);
  /* 11ea4580 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ea4582 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ea4588 pop edx */
  EDX = (pop32());
  /* 11ea4589 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11ea4590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ea4593:;
  /* 11ea4593 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11ea4596 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11ea4599 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea459c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ea459d jne 0x11ea4593 */
  if (!C.zf) goto L_11ea4593;
  /* 11ea459f mov edi, ebx */
  EDI = (EBX);
  /* 11ea45a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ea45a3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11ea45a6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea45a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ea45ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ea45b3 push edi */
  push32((uint32_t)(EDI));
  /* 11ea45b4 call dword ptr [0x11ea602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea602c))), 0x11ea45bau);
  /* 11ea45ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea45bc jne 0x11ea45c6 */
  if (!C.zf) goto L_11ea45c6;
  /* 11ea45be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea45c1 jmp 0x11ea4659 */
  goto L_11ea4659;
L_11ea45c6:;
  /* 11ea45c6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11ea45cc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea45ce ja 0x11ea460c */
  if ((!C.cf&&!C.zf)) goto L_11ea460c;
  /* 11ea45d0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11ea45d3:;
  /* 11ea45d3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11ea45d7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11ea45de lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11ea45e4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11ea45eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ea45ed lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11ea45f3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ea45f6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11ea4600 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4605 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11ea4608 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea460a jbe 0x11ea45d3 */
  if ((C.cf||C.zf)) goto L_11ea45d3;
L_11ea460c:;
  /* 11ea460c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ea460f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11ea4612 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4617 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4619 pop edi */
  EDI = (pop32());
  /* 11ea461a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ea461d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ea4620 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11ea4623 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ea4626 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ea4629 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11ea462e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11ea4635 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11ea4638 mov cl, al */
  CL = (AL);
  /* 11ea463a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11ea463c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea463e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4641 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11ea4644 jne 0x11ea4649 */
  if (!C.zf) goto L_11ea4649;
  /* 11ea4646 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11ea4649:;
  /* 11ea4649 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ea464e mov ecx, ebx */
  ECX = (EBX);
  /* 11ea4650 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ea4652 not edx */
  EDX = (~(EDX));
  /* 11ea4654 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11ea4657 mov eax, ebx */
  EAX = (EBX);
L_11ea4659:;
  /* 11ea4659 pop edi */
  EDI = (pop32());
  /* 11ea465a pop esi */
  ESI = (pop32());
  /* 11ea465b pop ebx */
  EBX = (pop32());
  /* 11ea465c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea465d ret  */
  ESPCHK(0x11ea4563u, _esp0);
  ESP += 4; return;
}

/* FUN_1000465e @ 0x11ea465e (137 bytes, 50 insns) */
void f_11ea465e(void) {
  FTRACE(0x11ea465eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea465e push ebx */
  push32((uint32_t)(EBX));
  /* 11ea465f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea4661 cmp dword ptr [0x11ea796c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11ea796c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4667 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4668 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4669 jne 0x11ea46ad */
  if (!C.zf) goto L_11ea46ad;
  /* 11ea466b push 0x11ea6480 */
  push32((uint32_t)(0x11ea6480u));
  /* 11ea4670 call dword ptr [0x11ea6020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6020))), 0x11ea4676u);
  /* 11ea4676 mov edi, eax */
  EDI = (EAX);
  /* 11ea4678 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea467a je 0x11ea46e3 */
  if (C.zf) goto L_11ea46e3;
  /* 11ea467c mov esi, dword ptr [0x11ea6024] */
  ESI = (r32((uint32_t)(0x11ea6024)));
  /* 11ea4682 push 0x11ea6474 */
  push32((uint32_t)(0x11ea6474u));
  /* 11ea4687 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4688 call esi */
  call_ind((uint32_t)(ESI), 0x11ea468au);
  /* 11ea468a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea468c mov dword ptr [0x11ea796c], eax */
  w32((uint32_t)(0x11ea796c), (EAX));
  /* 11ea4691 je 0x11ea46e3 */
  if (C.zf) goto L_11ea46e3;
  /* 11ea4693 push 0x11ea6464 */
  push32((uint32_t)(0x11ea6464u));
  /* 11ea4698 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4699 call esi */
  call_ind((uint32_t)(ESI), 0x11ea469bu);
  /* 11ea469b push 0x11ea6450 */
  push32((uint32_t)(0x11ea6450u));
  /* 11ea46a0 push edi */
  push32((uint32_t)(EDI));
  /* 11ea46a1 mov dword ptr [0x11ea7970], eax */
  w32((uint32_t)(0x11ea7970), (EAX));
  /* 11ea46a6 call esi */
  call_ind((uint32_t)(ESI), 0x11ea46a8u);
  /* 11ea46a8 mov dword ptr [0x11ea7974], eax */
  w32((uint32_t)(0x11ea7974), (EAX));
L_11ea46ad:;
  /* 11ea46ad mov eax, dword ptr [0x11ea7970] */
  EAX = (r32((uint32_t)(0x11ea7970)));
  /* 11ea46b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea46b4 je 0x11ea46cc */
  if (C.zf) goto L_11ea46cc;
  /* 11ea46b6 call eax */
  call_ind((uint32_t)(EAX), 0x11ea46b8u);
  /* 11ea46b8 mov ebx, eax */
  EBX = (EAX);
  /* 11ea46ba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11ea46bc je 0x11ea46cc */
  if (C.zf) goto L_11ea46cc;
  /* 11ea46be mov eax, dword ptr [0x11ea7974] */
  EAX = (r32((uint32_t)(0x11ea7974)));
  /* 11ea46c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea46c5 je 0x11ea46cc */
  if (C.zf) goto L_11ea46cc;
  /* 11ea46c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea46c8 call eax */
  call_ind((uint32_t)(EAX), 0x11ea46cau);
  /* 11ea46ca mov ebx, eax */
  EBX = (EAX);
L_11ea46cc:;
  /* 11ea46cc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11ea46d0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11ea46d4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11ea46d8 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea46d9 call dword ptr [0x11ea796c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea796c))), 0x11ea46dfu);
L_11ea46df:;
  /* 11ea46df pop edi */
  EDI = (pop32());
  /* 11ea46e0 pop esi */
  ESI = (pop32());
  /* 11ea46e1 pop ebx */
  EBX = (pop32());
  /* 11ea46e2 ret  */
  ESPCHK(0x11ea465eu, _esp0);
  ESP += 4; return;
L_11ea46e3:;
  /* 11ea46e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea46e5 jmp 0x11ea46df */
  goto L_11ea46df;
}

/* _strncpy @ 0x11ea46f0 (254 bytes, 109 insns) */
void f_11ea46f0(void) {
  FTRACE(0x11ea46f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea46f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ea46f4 push edi */
  push32((uint32_t)(EDI));
  /* 11ea46f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ea46f7 je 0x11ea4773 */
  if (C.zf) goto L_11ea4773;
  /* 11ea46f9 push esi */
  push32((uint32_t)(ESI));
  /* 11ea46fa push ebx */
  push32((uint32_t)(EBX));
  /* 11ea46fb mov ebx, ecx */
  EBX = (ECX);
  /* 11ea46fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11ea4701 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11ea4707 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ea470b jne 0x11ea4714 */
  if (!C.zf) goto L_11ea4714;
  /* 11ea470d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4710 jne 0x11ea4781 */
  if (!C.zf) goto L_11ea4781;
  /* 11ea4712 jmp 0x11ea4735 */
  goto L_11ea4735;
L_11ea4714:;
  /* 11ea4714 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4716 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea4717 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4719 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea471a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea471b je 0x11ea4742 */
  if (C.zf) goto L_11ea4742;
  /* 11ea471d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea471f je 0x11ea474a */
  if (C.zf) goto L_11ea474a;
  /* 11ea4721 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11ea4727 jne 0x11ea4714 */
  if (!C.zf) goto L_11ea4714;
  /* 11ea4729 mov ebx, ecx */
  EBX = (ECX);
  /* 11ea472b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea472e jne 0x11ea4781 */
  if (!C.zf) goto L_11ea4781;
L_11ea4730:;
  /* 11ea4730 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11ea4733 je 0x11ea4742 */
  if (C.zf) goto L_11ea4742;
L_11ea4735:;
  /* 11ea4735 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4737 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea4738 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea473a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea473b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ea473d je 0x11ea476e */
  if (C.zf) goto L_11ea476e;
  /* 11ea473f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ea4740 jne 0x11ea4735 */
  if (!C.zf) goto L_11ea4735;
L_11ea4742:;
  /* 11ea4742 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ea4746 pop ebx */
  EBX = (pop32());
  /* 11ea4747 pop esi */
  ESI = (pop32());
  /* 11ea4748 pop edi */
  EDI = (pop32());
  /* 11ea4749 ret  */
  ESPCHK(0x11ea46f0u, _esp0);
  ESP += 4; return;
L_11ea474a:;
  /* 11ea474a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ea4750 je 0x11ea4764 */
  if (C.zf) goto L_11ea4764;
L_11ea4752:;
  /* 11ea4752 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4754 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea4755 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea4756 je 0x11ea47e6 */
  if (C.zf) goto L_11ea47e6;
  /* 11ea475c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ea4762 jne 0x11ea4752 */
  if (!C.zf) goto L_11ea4752;
L_11ea4764:;
  /* 11ea4764 mov ebx, ecx */
  EBX = (ECX);
  /* 11ea4766 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4769 jne 0x11ea47d7 */
  if (!C.zf) goto L_11ea47d7;
L_11ea476b:;
  /* 11ea476b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea476d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11ea476e:;
  /* 11ea476e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ea476f jne 0x11ea476b */
  if (!C.zf) goto L_11ea476b;
  /* 11ea4771 pop ebx */
  EBX = (pop32());
  /* 11ea4772 pop esi */
  ESI = (pop32());
L_11ea4773:;
  /* 11ea4773 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea4777 pop edi */
  EDI = (pop32());
  /* 11ea4778 ret  */
  ESPCHK(0x11ea46f0u, _esp0);
  ESP += 4; return;
L_11ea4779:;
  /* 11ea4779 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ea477b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea477e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea477f je 0x11ea4730 */
  if (C.zf) goto L_11ea4730;
L_11ea4781:;
  /* 11ea4781 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ea4786 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ea4788 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea478a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ea478d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea478f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11ea4791 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4794 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ea4799 je 0x11ea4779 */
  if (C.zf) goto L_11ea4779;
  /* 11ea479b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ea479d je 0x11ea47cb */
  if (C.zf) goto L_11ea47cb;
  /* 11ea479f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ea47a1 je 0x11ea47c1 */
  if (C.zf) goto L_11ea47c1;
  /* 11ea47a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ea47a9 je 0x11ea47b7 */
  if (C.zf) goto L_11ea47b7;
  /* 11ea47ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ea47b1 jne 0x11ea4779 */
  if (!C.zf) goto L_11ea4779;
  /* 11ea47b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ea47b5 jmp 0x11ea47cf */
  goto L_11ea47cf;
L_11ea47b7:;
  /* 11ea47b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ea47bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ea47bf jmp 0x11ea47cf */
  goto L_11ea47cf;
L_11ea47c1:;
  /* 11ea47c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ea47c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ea47c9 jmp 0x11ea47cf */
  goto L_11ea47cf;
L_11ea47cb:;
  /* 11ea47cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea47cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11ea47cf:;
  /* 11ea47cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea47d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea47d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea47d5 je 0x11ea47e1 */
  if (C.zf) goto L_11ea47e1;
L_11ea47d7:;
  /* 11ea47d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ea47d9:;
  /* 11ea47d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11ea47db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea47de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea47df jne 0x11ea47d9 */
  if (!C.zf) goto L_11ea47d9;
L_11ea47e1:;
  /* 11ea47e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11ea47e4 jne 0x11ea476b */
  if (!C.zf) goto L_11ea476b;
L_11ea47e6:;
  /* 11ea47e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ea47ea pop ebx */
  EBX = (pop32());
  /* 11ea47eb pop esi */
  ESI = (pop32());
  /* 11ea47ec pop edi */
  EDI = (pop32());
  /* 11ea47ed ret  */
  ESPCHK(0x11ea46f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11ea47f0 (88 bytes, 40 insns) */
void f_11ea47f0(void) {
  FTRACE(0x11ea47f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea47f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ea47f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea47f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ea47fa je 0x11ea4843 */
  if (C.zf) goto L_11ea4843;
  /* 11ea47fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea47fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ea4802 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4803 mov edi, ecx */
  EDI = (ECX);
  /* 11ea4805 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4808 jb 0x11ea4837 */
  if (C.cf) goto L_11ea4837;
  /* 11ea480a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ea480c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ea480f je 0x11ea4819 */
  if (C.zf) goto L_11ea4819;
  /* 11ea4811 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ea4813:;
  /* 11ea4813 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4815 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea4816 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea4817 jne 0x11ea4813 */
  if (!C.zf) goto L_11ea4813;
L_11ea4819:;
  /* 11ea4819 mov ecx, eax */
  ECX = (EAX);
  /* 11ea481b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ea481e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4820 mov ecx, eax */
  ECX = (EAX);
  /* 11ea4822 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ea4825 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4827 mov ecx, edx */
  ECX = (EDX);
  /* 11ea4829 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ea482c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea482f je 0x11ea4837 */
  if (C.zf) goto L_11ea4837;
  /* 11ea4831 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ea4833 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ea4835 je 0x11ea483d */
  if (C.zf) goto L_11ea483d;
L_11ea4837:;
  /* 11ea4837 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4839 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea483a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ea483b jne 0x11ea4837 */
  if (!C.zf) goto L_11ea4837;
L_11ea483d:;
  /* 11ea483d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea4841 pop edi */
  EDI = (pop32());
  /* 11ea4842 ret  */
  ESPCHK(0x11ea47f0u, _esp0);
  ESP += 4; return;
L_11ea4843:;
  /* 11ea4843 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea4847 ret  */
  ESPCHK(0x11ea47f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004848 @ 0x11ea4848 (27 bytes, 13 insns) */
void f_11ea4848(void) {
  FTRACE(0x11ea4848u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4848 mov eax, dword ptr [0x11ea7978] */
  EAX = (r32((uint32_t)(0x11ea7978)));
  /* 11ea484d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea484f je 0x11ea4860 */
  if (C.zf) goto L_11ea4860;
  /* 11ea4851 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11ea4855 call eax */
  call_ind((uint32_t)(EAX), 0x11ea4857u);
  /* 11ea4857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea4859 pop ecx */
  ECX = (pop32());
  /* 11ea485a je 0x11ea4860 */
  if (C.zf) goto L_11ea4860;
  /* 11ea485c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea485e pop eax */
  EAX = (pop32());
  /* 11ea485f ret  */
  ESPCHK(0x11ea4848u, _esp0);
  ESP += 4; return;
L_11ea4860:;
  /* 11ea4860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ea4862 ret  */
  ESPCHK(0x11ea4848u, _esp0);
  ESP += 4; return;
}

/* FUN_10004863 @ 0x11ea4863 (511 bytes, 193 insns) */
void f_11ea4863(void) {
  FTRACE(0x11ea4863u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4863 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea4864 mov ebp, esp */
  EBP = (ESP);
  /* 11ea4866 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ea4868 push 0x11ea6498 */
  push32((uint32_t)(0x11ea6498u));
  /* 11ea486d push 0x11ea5030 */
  push32((uint32_t)(0x11ea5030u));
  /* 11ea4872 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ea4878 push eax */
  push32((uint32_t)(EAX));
  /* 11ea4879 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ea4880 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4883 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4884 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4885 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4886 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ea4889 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea488b cmp dword ptr [0x11ea79a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11ea79a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4891 jne 0x11ea48d9 */
  if (!C.zf) goto L_11ea48d9;
  /* 11ea4893 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4894 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4895 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4897 pop ebx */
  EBX = (pop32());
  /* 11ea4898 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4899 push 0x11ea6490 */
  push32((uint32_t)(0x11ea6490u));
  /* 11ea489e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11ea48a3 push esi */
  push32((uint32_t)(ESI));
  /* 11ea48a4 push edi */
  push32((uint32_t)(EDI));
  /* 11ea48a5 call dword ptr [0x11ea6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6014))), 0x11ea48abu);
  /* 11ea48ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea48ad je 0x11ea48b7 */
  if (C.zf) goto L_11ea48b7;
  /* 11ea48af mov dword ptr [0x11ea79a0], ebx */
  w32((uint32_t)(0x11ea79a0), (EBX));
  /* 11ea48b5 jmp 0x11ea48d9 */
  goto L_11ea48d9;
L_11ea48b7:;
  /* 11ea48b7 push edi */
  push32((uint32_t)(EDI));
  /* 11ea48b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ea48b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea48ba push 0x11ea648c */
  push32((uint32_t)(0x11ea648cu));
  /* 11ea48bf push esi */
  push32((uint32_t)(ESI));
  /* 11ea48c0 push edi */
  push32((uint32_t)(EDI));
  /* 11ea48c1 call dword ptr [0x11ea6018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6018))), 0x11ea48c7u);
  /* 11ea48c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea48c9 je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea48cf mov dword ptr [0x11ea79a0], 2 */
  w32((uint32_t)(0x11ea79a0), (0x2u));
L_11ea48d9:;
  /* 11ea48d9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea48dc jle 0x11ea48ee */
  if ((C.zf||C.sf!=C.of)) goto L_11ea48ee;
  /* 11ea48de push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea48e1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea48e4 call 0x11ea4a87 */
  push32(0x11ea48e9u); f_11ea4a87();
  /* 11ea48e9 pop ecx */
  ECX = (pop32());
  /* 11ea48ea pop ecx */
  ECX = (pop32());
  /* 11ea48eb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11ea48ee:;
  /* 11ea48ee mov eax, dword ptr [0x11ea79a0] */
  EAX = (r32((uint32_t)(0x11ea79a0)));
  /* 11ea48f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea48f6 jne 0x11ea4915 */
  if (!C.zf) goto L_11ea4915;
  /* 11ea48f8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ea48fb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ea48fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea4901 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea4904 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea4907 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea490a call dword ptr [0x11ea6018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6018))), 0x11ea4910u);
  /* 11ea4910 jmp 0x11ea49f3 */
  goto L_11ea49f3;
L_11ea4915:;
  /* 11ea4915 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4918 jne 0x11ea49f1 */
  if (!C.zf) goto L_11ea49f1;
  /* 11ea491e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4921 jne 0x11ea492b */
  if (!C.zf) goto L_11ea492b;
  /* 11ea4923 mov eax, dword ptr [0x11ea7998] */
  EAX = (r32((uint32_t)(0x11ea7998)));
  /* 11ea4928 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11ea492b:;
  /* 11ea492b push edi */
  push32((uint32_t)(EDI));
  /* 11ea492c push edi */
  push32((uint32_t)(EDI));
  /* 11ea492d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea4930 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea4933 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ea4936 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ea4938 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea493a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ea493d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea493e push eax */
  push32((uint32_t)(EAX));
  /* 11ea493f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ea4942 call dword ptr [0x11ea601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea601c))), 0x11ea4948u);
  /* 11ea4948 mov ebx, eax */
  EBX = (EAX);
  /* 11ea494a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11ea494d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea494f je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea4955 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11ea4958 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11ea495b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea495e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ea4960 call 0x11ea5110 */
  push32(0x11ea4965u); f_11ea5110();
  /* 11ea4965 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ea4968 mov eax, esp */
  EAX = (ESP);
  /* 11ea496a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ea496d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea4971 jmp 0x11ea4986 */
  goto L_11ea4986;
  /* 11ea4973 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4975 pop eax */
  EAX = (pop32());
  /* 11ea4976 ret  */
  ESPCHK(0x11ea4863u, _esp0);
  ESP += 4; return;
  /* 11ea4977 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ea497a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea497c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11ea497f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea4983 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11ea4986:;
  /* 11ea4986 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4989 je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea498b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea498c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ea498f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea4992 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea4995 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4997 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ea499a call dword ptr [0x11ea601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea601c))), 0x11ea49a0u);
  /* 11ea49a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea49a2 je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea49a4 push edi */
  push32((uint32_t)(EDI));
  /* 11ea49a5 push edi */
  push32((uint32_t)(EDI));
  /* 11ea49a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea49a7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ea49aa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea49ad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea49b0 call dword ptr [0x11ea6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6014))), 0x11ea49b6u);
  /* 11ea49b6 mov esi, eax */
  ESI = (EAX);
  /* 11ea49b8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11ea49bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea49bd je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea49bf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11ea49c3 je 0x11ea4a05 */
  if (C.zf) goto L_11ea4a05;
  /* 11ea49c5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea49c8 je 0x11ea4a80 */
  if (C.zf) goto L_11ea4a80;
  /* 11ea49ce cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea49d1 jg 0x11ea49f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ea49f1;
  /* 11ea49d3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ea49d6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ea49d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea49da push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ea49dd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea49e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea49e3 call dword ptr [0x11ea6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6014))), 0x11ea49e9u);
  /* 11ea49e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea49eb jne 0x11ea4a80 */
  if (!C.zf) goto L_11ea4a80;
L_11ea49f1:;
  /* 11ea49f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ea49f3:;
  /* 11ea49f3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11ea49f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ea49f9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ea4a00 pop edi */
  EDI = (pop32());
  /* 11ea4a01 pop esi */
  ESI = (pop32());
  /* 11ea4a02 pop ebx */
  EBX = (pop32());
  /* 11ea4a03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4a04 ret  */
  ESPCHK(0x11ea4863u, _esp0);
  ESP += 4; return;
L_11ea4a05:;
  /* 11ea4a05 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ea4a0c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11ea4a0f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4a12 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ea4a14 call 0x11ea5110 */
  push32(0x11ea4a19u); f_11ea5110();
  /* 11ea4a19 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ea4a1c mov ebx, esp */
  EBX = (ESP);
  /* 11ea4a1e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11ea4a21 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea4a25 jmp 0x11ea4a39 */
  goto L_11ea4a39;
  /* 11ea4a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4a29 pop eax */
  EAX = (pop32());
  /* 11ea4a2a ret  */
  ESPCHK(0x11ea4863u, _esp0);
  ESP += 4; return;
  /* 11ea4a2b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ea4a2e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ea4a30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea4a32 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea4a36 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11ea4a39:;
  /* 11ea4a39 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4a3b je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea4a3d push esi */
  push32((uint32_t)(ESI));
  /* 11ea4a3e push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4a3f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11ea4a42 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11ea4a45 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea4a48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea4a4b call dword ptr [0x11ea6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6014))), 0x11ea4a51u);
  /* 11ea4a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea4a53 je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
  /* 11ea4a55 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4a58 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4a59 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4a5a jne 0x11ea4a60 */
  if (!C.zf) goto L_11ea4a60;
  /* 11ea4a5c push edi */
  push32((uint32_t)(EDI));
  /* 11ea4a5d push edi */
  push32((uint32_t)(EDI));
  /* 11ea4a5e jmp 0x11ea4a66 */
  goto L_11ea4a66;
L_11ea4a60:;
  /* 11ea4a60 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11ea4a63 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11ea4a66:;
  /* 11ea4a66 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4a67 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4a68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ea4a6d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11ea4a70 call dword ptr [0x11ea6068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6068))), 0x11ea4a76u);
  /* 11ea4a76 mov esi, eax */
  ESI = (EAX);
  /* 11ea4a78 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4a7a je 0x11ea49f1 */
  if (C.zf) goto L_11ea49f1;
L_11ea4a80:;
  /* 11ea4a80 mov eax, esi */
  EAX = (ESI);
  /* 11ea4a82 jmp 0x11ea49f3 */
  goto L_11ea49f3;
}

/* FUN_10004a87 @ 0x11ea4a87 (43 bytes, 20 insns) */
void f_11ea4a87(void) {
  FTRACE(0x11ea4a87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4a87 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea4a8b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ea4a8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ea4a91 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4a92 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11ea4a95 je 0x11ea4aa4 */
  if (C.zf) goto L_11ea4aa4;
L_11ea4a97:;
  /* 11ea4a97 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea4a9a je 0x11ea4aa4 */
  if (C.zf) goto L_11ea4aa4;
  /* 11ea4a9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea4a9d mov esi, ecx */
  ESI = (ECX);
  /* 11ea4a9f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ea4aa0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ea4aa2 jne 0x11ea4a97 */
  if (!C.zf) goto L_11ea4a97;
L_11ea4aa4:;
  /* 11ea4aa4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ea4aa7 pop esi */
  ESI = (pop32());
  /* 11ea4aa8 jne 0x11ea4aaf */
  if (!C.zf) goto L_11ea4aaf;
  /* 11ea4aaa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4aae ret  */
  ESPCHK(0x11ea4a87u, _esp0);
  ESP += 4; return;
L_11ea4aaf:;
  /* 11ea4aaf mov eax, edx */
  EAX = (EDX);
  /* 11ea4ab1 ret  */
  ESPCHK(0x11ea4a87u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab2 @ 0x11ea4ab2 (318 bytes, 123 insns) */
void f_11ea4ab2(void) {
  FTRACE(0x11ea4ab2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4ab2 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea4ab3 mov ebp, esp */
  EBP = (ESP);
  /* 11ea4ab5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ea4ab7 push 0x11ea64b0 */
  push32((uint32_t)(0x11ea64b0u));
  /* 11ea4abc push 0x11ea5030 */
  push32((uint32_t)(0x11ea5030u));
  /* 11ea4ac1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ea4ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11ea4ac8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ea4acf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4ad2 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4ad3 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4ad4 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4ad5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ea4ad8 mov eax, dword ptr [0x11ea79a4] */
  EAX = (r32((uint32_t)(0x11ea79a4)));
  /* 11ea4add xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea4adf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4ae1 jne 0x11ea4b21 */
  if (!C.zf) goto L_11ea4b21;
  /* 11ea4ae3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ea4ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11ea4ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4ae9 pop esi */
  ESI = (pop32());
  /* 11ea4aea push esi */
  push32((uint32_t)(ESI));
  /* 11ea4aeb push 0x11ea6490 */
  push32((uint32_t)(0x11ea6490u));
  /* 11ea4af0 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4af1 call dword ptr [0x11ea600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea600c))), 0x11ea4af7u);
  /* 11ea4af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea4af9 je 0x11ea4aff */
  if (C.zf) goto L_11ea4aff;
  /* 11ea4afb mov eax, esi */
  EAX = (ESI);
  /* 11ea4afd jmp 0x11ea4b1c */
  goto L_11ea4b1c;
L_11ea4aff:;
  /* 11ea4aff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ea4b02 push eax */
  push32((uint32_t)(EAX));
  /* 11ea4b03 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4b04 push 0x11ea648c */
  push32((uint32_t)(0x11ea648cu));
  /* 11ea4b09 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4b0a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4b0b call dword ptr [0x11ea6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6010))), 0x11ea4b11u);
  /* 11ea4b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ea4b13 je 0x11ea4be7 */
  if (C.zf) goto L_11ea4be7;
  /* 11ea4b19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ea4b1b pop eax */
  EAX = (pop32());
L_11ea4b1c:;
  /* 11ea4b1c mov dword ptr [0x11ea79a4], eax */
  w32((uint32_t)(0x11ea79a4), (EAX));
L_11ea4b21:;
  /* 11ea4b21 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4b24 jne 0x11ea4b4a */
  if (!C.zf) goto L_11ea4b4a;
  /* 11ea4b26 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ea4b29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4b2b jne 0x11ea4b32 */
  if (!C.zf) goto L_11ea4b32;
  /* 11ea4b2d mov eax, dword ptr [0x11ea7988] */
  EAX = (r32((uint32_t)(0x11ea7988)));
L_11ea4b32:;
  /* 11ea4b32 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea4b35 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea4b38 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea4b3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea4b3e push eax */
  push32((uint32_t)(EAX));
  /* 11ea4b3f call dword ptr [0x11ea6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea6010))), 0x11ea4b45u);
  /* 11ea4b45 jmp 0x11ea4be9 */
  goto L_11ea4be9;
L_11ea4b4a:;
  /* 11ea4b4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4b4d jne 0x11ea4be7 */
  if (!C.zf) goto L_11ea4be7;
  /* 11ea4b53 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4b56 jne 0x11ea4b60 */
  if (!C.zf) goto L_11ea4b60;
  /* 11ea4b58 mov eax, dword ptr [0x11ea7998] */
  EAX = (r32((uint32_t)(0x11ea7998)));
  /* 11ea4b5d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11ea4b60:;
  /* 11ea4b60 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4b61 push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4b62 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea4b65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea4b68 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ea4b6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ea4b6d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4b6f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ea4b72 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ea4b73 push eax */
  push32((uint32_t)(EAX));
  /* 11ea4b74 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ea4b77 call dword ptr [0x11ea601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea601c))), 0x11ea4b7du);
  /* 11ea4b7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ea4b80 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4b82 je 0x11ea4be7 */
  if (C.zf) goto L_11ea4be7;
  /* 11ea4b84 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11ea4b87 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11ea4b8a mov eax, edi */
  EAX = (EDI);
  /* 11ea4b8c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4b8f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ea4b91 call 0x11ea5110 */
  push32(0x11ea4b96u); f_11ea5110();
  /* 11ea4b96 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ea4b99 mov esi, esp */
  ESI = (ESP);
  /* 11ea4b9b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11ea4b9e push edi */
  push32((uint32_t)(EDI));
  /* 11ea4b9f push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4ba0 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4ba1 call 0x11ea47f0 */
  push32(0x11ea4ba6u); f_11ea47f0();
  /* 11ea4ba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4ba9 jmp 0x11ea4bb6 */
  goto L_11ea4bb6;
  /* 11ea4bab push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4bad pop eax */
  EAX = (pop32());
  /* 11ea4bae ret  */
  ESPCHK(0x11ea4ab2u, _esp0);
  ESP += 4; return;
  /* 11ea4baf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ea4bb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ea4bb4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11ea4bb6:;
  /* 11ea4bb6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11ea4bba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4bbc je 0x11ea4be7 */
  if (C.zf) goto L_11ea4be7;
  /* 11ea4bbe push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11ea4bc1 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4bc2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11ea4bc5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ea4bc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ea4bca push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11ea4bcd call dword ptr [0x11ea601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea601c))), 0x11ea4bd3u);
  /* 11ea4bd3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4bd5 je 0x11ea4be7 */
  if (C.zf) goto L_11ea4be7;
  /* 11ea4bd7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11ea4bda push eax */
  push32((uint32_t)(EAX));
  /* 11ea4bdb push esi */
  push32((uint32_t)(ESI));
  /* 11ea4bdc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea4bdf call dword ptr [0x11ea600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ea600c))), 0x11ea4be5u);
  /* 11ea4be5 jmp 0x11ea4be9 */
  goto L_11ea4be9;
L_11ea4be7:;
  /* 11ea4be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ea4be9:;
  /* 11ea4be9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11ea4bec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ea4bef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ea4bf6 pop edi */
  EDI = (pop32());
  /* 11ea4bf7 pop esi */
  ESI = (pop32());
  /* 11ea4bf8 pop ebx */
  EBX = (pop32());
  /* 11ea4bf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4bfa ret  */
  ESPCHK(0x11ea4ab2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x11ea4c00 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11ea4c00(void) {
  FTRACE(0x11ea4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea4c01 mov ebp, esp */
  EBP = (ESP);
  /* 11ea4c03 push edi */
  push32((uint32_t)(EDI));
  /* 11ea4c04 push esi */
  push32((uint32_t)(ESI));
  /* 11ea4c05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ea4c08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ea4c0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4c0e mov eax, ecx */
  EAX = (ECX);
  /* 11ea4c10 mov edx, ecx */
  EDX = (ECX);
  /* 11ea4c12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4c14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4c16 jbe 0x11ea4c20 */
  if ((C.cf||C.zf)) goto L_11ea4c20;
  /* 11ea4c18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4c1a jb 0x11ea4d98 */
  if (C.cf) goto L_11ea4d98;
L_11ea4c20:;
  /* 11ea4c20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ea4c26 jne 0x11ea4c3c */
  if (!C.zf) goto L_11ea4c3c;
  /* 11ea4c28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4c2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4c2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4c31 jb 0x11ea4c5c */
  if (C.cf) goto L_11ea4c5c;
  /* 11ea4c33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4c35 jmp dword ptr [edx*4 + 0x11ea4d48] */
  switch (EDX) {
    case 0: goto L_11ea4d58;
    case 1: goto L_11ea4d60;
    case 2: goto L_11ea4d6c;
    case 3: goto L_11ea4d80;
    default: x86_unimpl("switch@0x11ea4c35 out of table"); return;
  }
L_11ea4c3c:;
  /* 11ea4c3c mov eax, edi */
  EAX = (EDI);
  /* 11ea4c3e mov edx, 3 */
  EDX = (0x3u);
  /* 11ea4c43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4c46 jb 0x11ea4c54 */
  if (C.cf) goto L_11ea4c54;
  /* 11ea4c48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ea4c4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4c4d jmp dword ptr [eax*4 + 0x11ea4c60] */
  switch (EAX) {
    case 1: goto L_11ea4c70;
    case 2: goto L_11ea4c9c;
    case 3: goto L_11ea4cc0;
    default: x86_unimpl("switch@0x11ea4c4d out of table"); return;
  }
L_11ea4c54:;
  /* 11ea4c54 jmp dword ptr [ecx*4 + 0x11ea4d58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ea4d58)))); return;
  /* 11ea4c5b nop  */
  /* nop */
L_11ea4c5c:;
  /* 11ea4c5c jmp dword ptr [ecx*4 + 0x11ea4cdc] */
  switch (ECX) {
    case 0: goto L_11ea4d3f;
    case 1: goto L_11ea4d2c;
    case 2: goto L_11ea4d24;
    case 3: goto L_11ea4d1c;
    case 4: goto L_11ea4d14;
    case 5: goto L_11ea4d0c;
    case 6: goto L_11ea4d04;
    case 7: goto L_11ea4cfc;
    default: x86_unimpl("switch@0x11ea4c5c out of table"); return;
  }
  /* 11ea4c63 nop  */
  /* nop */
L_11ea4c70:;
  /* 11ea4c70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4c72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4c74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4c76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea4c79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea4c7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea4c7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4c82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea4c85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4c88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4c8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4c8e jb 0x11ea4c5c */
  if (C.cf) goto L_11ea4c5c;
  /* 11ea4c90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4c92 jmp dword ptr [edx*4 + 0x11ea4d48] */
  switch (EDX) {
    case 0: goto L_11ea4d58;
    case 1: goto L_11ea4d60;
    case 2: goto L_11ea4d6c;
    case 3: goto L_11ea4d80;
    default: x86_unimpl("switch@0x11ea4c92 out of table"); return;
  }
  /* 11ea4c99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea4c9c:;
  /* 11ea4c9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4c9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4ca0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4ca2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea4ca5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4ca8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea4cab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4cae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4cb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4cb4 jb 0x11ea4c5c */
  if (C.cf) goto L_11ea4c5c;
  /* 11ea4cb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4cb8 jmp dword ptr [edx*4 + 0x11ea4d48] */
  switch (EDX) {
    case 0: goto L_11ea4d58;
    case 1: goto L_11ea4d60;
    case 2: goto L_11ea4d6c;
    case 3: goto L_11ea4d80;
    default: x86_unimpl("switch@0x11ea4cb8 out of table"); return;
  }
  /* 11ea4cbf nop  */
  /* nop */
L_11ea4cc0:;
  /* 11ea4cc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4cc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4cc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4cc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ea4cc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4cca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ea4ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4cce jb 0x11ea4c5c */
  if (C.cf) goto L_11ea4c5c;
  /* 11ea4cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4cd2 jmp dword ptr [edx*4 + 0x11ea4d48] */
  switch (EDX) {
    case 0: goto L_11ea4d58;
    case 1: goto L_11ea4d60;
    case 2: goto L_11ea4d6c;
    case 3: goto L_11ea4d80;
    default: x86_unimpl("switch@0x11ea4cd2 out of table"); return;
  }
  /* 11ea4cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea4cfc:;
  /* 11ea4cfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ea4d00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ea4d04:;
  /* 11ea4d04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ea4d08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ea4d0c:;
  /* 11ea4d0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ea4d10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ea4d14:;
  /* 11ea4d14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ea4d18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ea4d1c:;
  /* 11ea4d1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ea4d20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ea4d24:;
  /* 11ea4d24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ea4d28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ea4d2c:;
  /* 11ea4d2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ea4d30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ea4d34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ea4d3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4d3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ea4d3f:;
  /* 11ea4d3f jmp dword ptr [edx*4 + 0x11ea4d48] */
  switch (EDX) {
    case 0: goto L_11ea4d58;
    case 1: goto L_11ea4d60;
    case 2: goto L_11ea4d6c;
    case 3: goto L_11ea4d80;
    default: x86_unimpl("switch@0x11ea4d3f out of table"); return;
  }
  /* 11ea4d46 mov edi, edi */
  EDI = (EDI);
L_11ea4d58:;
  /* 11ea4d58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4d5b pop esi */
  ESI = (pop32());
  /* 11ea4d5c pop edi */
  EDI = (pop32());
  /* 11ea4d5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4d5e ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4d5f nop  */
  /* nop */
L_11ea4d60:;
  /* 11ea4d60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4d62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4d67 pop esi */
  ESI = (pop32());
  /* 11ea4d68 pop edi */
  EDI = (pop32());
  /* 11ea4d69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4d6a ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4d6b nop  */
  /* nop */
L_11ea4d6c:;
  /* 11ea4d6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4d6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4d70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea4d73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea4d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4d79 pop esi */
  ESI = (pop32());
  /* 11ea4d7a pop edi */
  EDI = (pop32());
  /* 11ea4d7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4d7c ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4d7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea4d80:;
  /* 11ea4d80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ea4d82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ea4d84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea4d87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea4d8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea4d8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea4d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4d93 pop esi */
  ESI = (pop32());
  /* 11ea4d94 pop edi */
  EDI = (pop32());
  /* 11ea4d95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4d96 ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4d97 nop  */
  /* nop */
L_11ea4d98:;
  /* 11ea4d98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ea4d9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ea4da0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ea4da6 jne 0x11ea4dcc */
  if (!C.zf) goto L_11ea4dcc;
  /* 11ea4da8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4dab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4dae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4db1 jb 0x11ea4dc0 */
  if (C.cf) goto L_11ea4dc0;
  /* 11ea4db3 std  */
  C.df=1;
  /* 11ea4db4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4db6 cld  */
  C.df=0;
  /* 11ea4db7 jmp dword ptr [edx*4 + 0x11ea4ee0] */
  switch (EDX) {
    case 0: goto L_11ea4ef0;
    case 1: goto L_11ea4ef8;
    case 2: goto L_11ea4f08;
    case 3: goto L_11ea4f1c;
    default: x86_unimpl("switch@0x11ea4db7 out of table"); return;
  }
  /* 11ea4dbe mov edi, edi */
  EDI = (EDI);
L_11ea4dc0:;
  /* 11ea4dc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ea4dc2 jmp dword ptr [ecx*4 + 0x11ea4e90] */
  switch (ECX) {
    case 0: goto L_11ea4ed7;
    default: x86_unimpl("switch@0x11ea4dc2 out of table"); return;
  }
  /* 11ea4dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea4dcc:;
  /* 11ea4dcc mov eax, edi */
  EAX = (EDI);
  /* 11ea4dce mov edx, 3 */
  EDX = (0x3u);
  /* 11ea4dd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4dd6 jb 0x11ea4de4 */
  if (C.cf) goto L_11ea4de4;
  /* 11ea4dd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ea4ddb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4ddd jmp dword ptr [eax*4 + 0x11ea4de8] */
  switch (EAX) {
    case 1: goto L_11ea4df8;
    case 2: goto L_11ea4e18;
    case 3: goto L_11ea4e40;
    default: x86_unimpl("switch@0x11ea4ddd out of table"); return;
  }
L_11ea4de4:;
  /* 11ea4de4 jmp dword ptr [ecx*4 + 0x11ea4ee0] */
  switch (ECX) {
    case 0: goto L_11ea4ef0;
    case 1: goto L_11ea4ef8;
    case 2: goto L_11ea4f08;
    case 3: goto L_11ea4f1c;
    default: x86_unimpl("switch@0x11ea4de4 out of table"); return;
  }
  /* 11ea4deb nop  */
  /* nop */
L_11ea4df8:;
  /* 11ea4df8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea4dfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4dfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea4e00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea4e01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4e04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ea4e05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4e08 jb 0x11ea4dc0 */
  if (C.cf) goto L_11ea4dc0;
  /* 11ea4e0a std  */
  C.df=1;
  /* 11ea4e0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4e0d cld  */
  C.df=0;
  /* 11ea4e0e jmp dword ptr [edx*4 + 0x11ea4ee0] */
  switch (EDX) {
    case 0: goto L_11ea4ef0;
    case 1: goto L_11ea4ef8;
    case 2: goto L_11ea4f08;
    case 3: goto L_11ea4f1c;
    default: x86_unimpl("switch@0x11ea4e0e out of table"); return;
  }
  /* 11ea4e15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea4e18:;
  /* 11ea4e18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea4e1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4e1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea4e20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea4e23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4e26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea4e29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4e2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4e2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4e32 jb 0x11ea4dc0 */
  if (C.cf) goto L_11ea4dc0;
  /* 11ea4e34 std  */
  C.df=1;
  /* 11ea4e35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4e37 cld  */
  C.df=0;
  /* 11ea4e38 jmp dword ptr [edx*4 + 0x11ea4ee0] */
  switch (EDX) {
    case 0: goto L_11ea4ef0;
    case 1: goto L_11ea4ef8;
    case 2: goto L_11ea4f08;
    case 3: goto L_11ea4f1c;
    default: x86_unimpl("switch@0x11ea4e38 out of table"); return;
  }
  /* 11ea4e3f nop  */
  /* nop */
L_11ea4e40:;
  /* 11ea4e40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea4e43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ea4e45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea4e48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea4e4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea4e4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea4e51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ea4e54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea4e57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4e5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea4e5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4e60 jb 0x11ea4dc0 */
  if (C.cf) goto L_11ea4dc0;
  /* 11ea4e66 std  */
  C.df=1;
  /* 11ea4e67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ea4e69 cld  */
  C.df=0;
  /* 11ea4e6a jmp dword ptr [edx*4 + 0x11ea4ee0] */
  switch (EDX) {
    case 0: goto L_11ea4ef0;
    case 1: goto L_11ea4ef8;
    case 2: goto L_11ea4f08;
    case 3: goto L_11ea4f1c;
    default: x86_unimpl("switch@0x11ea4e6a out of table"); return;
  }
  /* 11ea4e71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ea4e74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11ea4e75 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea4e76 ljmp 0xa411:0xea4e9c11 */
  x86_unimpl("ljmp @ 0x11ea4e76");
  /* 11ea4e7d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea4e7e ljmp 0xb411:0xea4eac11 */
  x86_unimpl("ljmp @ 0x11ea4e7e");
  /* 11ea4e85 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea4e86 ljmp 0xc411:0xea4ebc11 */
  x86_unimpl("ljmp @ 0x11ea4e86");
  /* 11ea4e8d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ea4e94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ea4e98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ea4e9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ea4ea0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ea4ea4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ea4ea8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ea4eac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ea4eb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ea4eb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ea4eb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ea4ebc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ea4ec0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ea4ec4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ea4ec8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ea4ecc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ea4ed3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4ed5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ea4ed7:;
  /* 11ea4ed7 jmp dword ptr [edx*4 + 0x11ea4ee0] */
  switch (EDX) {
    case 0: goto L_11ea4ef0;
    case 1: goto L_11ea4ef8;
    case 2: goto L_11ea4f08;
    case 3: goto L_11ea4f1c;
    default: x86_unimpl("switch@0x11ea4ed7 out of table"); return;
  }
  /* 11ea4ede mov edi, edi */
  EDI = (EDI);
L_11ea4ef0:;
  /* 11ea4ef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4ef3 pop esi */
  ESI = (pop32());
  /* 11ea4ef4 pop edi */
  EDI = (pop32());
  /* 11ea4ef5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4ef6 ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4ef7 nop  */
  /* nop */
L_11ea4ef8:;
  /* 11ea4ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea4efb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea4efe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4f01 pop esi */
  ESI = (pop32());
  /* 11ea4f02 pop edi */
  EDI = (pop32());
  /* 11ea4f03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4f04 ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4f05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ea4f08:;
  /* 11ea4f08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea4f0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea4f0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea4f11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea4f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4f17 pop esi */
  ESI = (pop32());
  /* 11ea4f18 pop edi */
  EDI = (pop32());
  /* 11ea4f19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4f1a ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
  /* 11ea4f1b nop  */
  /* nop */
L_11ea4f1c:;
  /* 11ea4f1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ea4f1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ea4f22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ea4f25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ea4f28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ea4f2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ea4f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea4f31 pop esi */
  ESI = (pop32());
  /* 11ea4f32 pop edi */
  EDI = (pop32());
  /* 11ea4f33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ea4f34 ret  */
  ESPCHK(0x11ea4c00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11ea4f38 (32 bytes, 18 insns) */
void f_11ea4f38(void) {
  FTRACE(0x11ea4f38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4f38 push ebp */
  push32((uint32_t)(EBP));
  /* 11ea4f39 mov ebp, esp */
  EBP = (ESP);
  /* 11ea4f3b push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4f3c push esi */
  push32((uint32_t)(ESI));
  /* 11ea4f3d push edi */
  push32((uint32_t)(EDI));
  /* 11ea4f3e push ebp */
  push32((uint32_t)(EBP));
  /* 11ea4f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea4f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ea4f43 push 0x11ea4f50 */
  push32((uint32_t)(0x11ea4f50u));
  /* 11ea4f48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ea4f4b call 0x11ea5140 */
  push32(0x11ea4f50u); f_11ea5140();
  /* 11ea4f50 pop ebp */
  EBP = (pop32());
  /* 11ea4f51 pop edi */
  EDI = (pop32());
  /* 11ea4f52 pop esi */
  ESI = (pop32());
  /* 11ea4f53 pop ebx */
  EBX = (pop32());
  /* 11ea4f54 mov esp, ebp */
  ESP = (EBP);
  /* 11ea4f56 pop ebp */
  EBP = (pop32());
  /* 11ea4f57 ret  */
  ESPCHK(0x11ea4f38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11ea4f7a (104 bytes, 33 insns) */
void f_11ea4f7a(void) {
  FTRACE(0x11ea4f7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea4f7a push ebx */
  push32((uint32_t)(EBX));
  /* 11ea4f7b push esi */
  push32((uint32_t)(ESI));
  /* 11ea4f7c push edi */
  push32((uint32_t)(EDI));
  /* 11ea4f7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ea4f81 push eax */
  push32((uint32_t)(EAX));
  /* 11ea4f82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11ea4f84 push 0x11ea4f58 */
  push32((uint32_t)(0x11ea4f58u));
  /* 11ea4f89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11ea4f90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11ea4f97:;
  /* 11ea4f97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11ea4f9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ea4f9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11ea4fa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4fa4 je 0x11ea4fd4 */
  if (C.zf) goto L_11ea4fd4;
  /* 11ea4fa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4faa je 0x11ea4fd4 */
  if (C.zf) goto L_11ea4fd4;
  /* 11ea4fac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11ea4faf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11ea4fb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11ea4fb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ea4fb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea4fbe jne 0x11ea4fd2 */
  if (!C.zf) goto L_11ea4fd2;
  /* 11ea4fc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ea4fc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11ea4fc9 call 0x11ea500e */
  push32(0x11ea4fceu); f_11ea500e();
  /* 11ea4fce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11ea4fd2u);
L_11ea4fd2:;
  /* 11ea4fd2 jmp 0x11ea4f97 */
  goto L_11ea4f97;
L_11ea4fd4:;
  /* 11ea4fd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11ea4fdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea4fde pop edi */
  EDI = (pop32());
  /* 11ea4fdf pop esi */
  ESI = (pop32());
  /* 11ea4fe0 pop ebx */
  EBX = (pop32());
  /* 11ea4fe1 ret  */
  ESPCHK(0x11ea4f7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000500e @ 0x11ea500e (24 bytes, 10 insns) */
void f_11ea500e(void) {
  FTRACE(0x11ea500eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea500e push ebx */
  push32((uint32_t)(EBX));
  /* 11ea500f push ecx */
  push32((uint32_t)(ECX));
  /* 11ea5010 mov ebx, 0x11ea7570 */
  EBX = (0x11ea7570u);
  /* 11ea5015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ea5018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ea501b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11ea501e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11ea5021 pop ecx */
  ECX = (pop32());
  /* 11ea5022 pop ebx */
  EBX = (pop32());
  /* 11ea5023 ret 4 */
  ESPCHK(0x11ea500eu, _esp0);
  ESP += 8; return;
}

/* FUN_100050ed @ 0x11ea50ed (27 bytes, 11 insns) */
void f_11ea50ed(void) {
  FTRACE(0x11ea50edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea50ed push ebp */
  push32((uint32_t)(EBP));
  /* 11ea50ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ea50f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11ea50f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ea50f7 push eax */
  push32((uint32_t)(EAX));
  /* 11ea50f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ea50fb push eax */
  push32((uint32_t)(EAX));
  /* 11ea50fc call 0x11ea4f7a */
  push32(0x11ea5101u); f_11ea4f7a();
  /* 11ea5101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ea5104 pop ebp */
  EBP = (pop32());
  /* 11ea5105 ret 4 */
  ESPCHK(0x11ea50edu, _esp0);
  ESP += 8; return;
}

/* FUN_10005110 @ 0x11ea5110 (47 bytes, 17 insns) */
void f_11ea5110(void) {
  FTRACE(0x11ea5110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea5110 push ecx */
  push32((uint32_t)(ECX));
  /* 11ea5111 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea5116 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11ea511a jb 0x11ea5130 */
  if (C.cf) goto L_11ea5130;
L_11ea511c:;
  /* 11ea511c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea5122 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea5127 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11ea5129 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ea512e jae 0x11ea511c */
  if (!C.cf) goto L_11ea511c;
L_11ea5130:;
  /* 11ea5130 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ea5132 mov eax, esp */
  EAX = (ESP);
  /* 11ea5134 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11ea5136 mov esp, ecx */
  ESP = (ECX);
  /* 11ea5138 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ea513a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ea513d push eax */
  push32((uint32_t)(EAX));
  /* 11ea513e ret  */
  ESPCHK(0x11ea5110u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11ea5140 (6 bytes, 1 insns) */
void f_11ea5140(void) {
  FTRACE(0x11ea5140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ea5140 jmp dword ptr [0x11ea6008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ea6008)))); return;
}

