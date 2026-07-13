#include "recomp.h"

/* FUN_10001000 @ 0x115f1000 (18 bytes, 7 insns) */
void f_115f1000(void) {
  FTRACE(0x115f1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f1005 jne 0x115f100c */
  if (!C.zf) goto L_115f100c;
  /* 115f1007 call 0x115f1173 */
  push32(0x115f100cu); f_115f1173();
L_115f100c:;
  /* 115f100c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f100e pop eax */
  EAX = (pop32());
  /* 115f100f ret 0xc */
  ESPCHK(0x115f1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x115f1012 (30 bytes, 15 insns) */
void f_115f1012(void) {
  FTRACE(0x115f1012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f1012 push esi */
  push32((uint32_t)(ESI));
  /* 115f1013 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_115f1015:;
  /* 115f1015 push esi */
  push32((uint32_t)(ESI));
  /* 115f1016 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 115f101a call dword ptr [0x115f6154] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6154))), 0x115f1020u);
  /* 115f1020 pop ecx */
  ECX = (pop32());
  /* 115f1021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1023 pop ecx */
  ECX = (pop32());
  /* 115f1024 jg 0x115f102c */
  if ((!C.zf&&C.sf==C.of)) goto L_115f102c;
  /* 115f1026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f1027 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f102a jl 0x115f1015 */
  if ((C.sf!=C.of)) goto L_115f1015;
L_115f102c:;
  /* 115f102c mov eax, esi */
  EAX = (ESI);
  /* 115f102e pop esi */
  ESI = (pop32());
  /* 115f102f ret  */
  ESPCHK(0x115f1012u, _esp0);
  ESP += 4; return;
}

/* FUN_10001030 @ 0x115f1030 (46 bytes, 16 insns) */
void f_115f1030(void) {
  FTRACE(0x115f1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f1030 push esi */
  push32((uint32_t)(ESI));
  /* 115f1031 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f1035 call 0x115f1012 */
  push32(0x115f103au); f_115f1012();
  /* 115f103a push 0 */
  push32((uint32_t)(0x0u));
  /* 115f103c mov esi, eax */
  ESI = (EAX);
  /* 115f103e push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115f1042 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1048u);
  /* 115f1048 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f104a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f104c push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 115f1050 push esi */
  push32((uint32_t)(ESI));
  /* 115f1051 call dword ptr [0x115f615c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f615c))), 0x115f1057u);
  /* 115f1057 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f105a mov eax, esi */
  EAX = (ESI);
  /* 115f105c pop esi */
  ESI = (pop32());
  /* 115f105d ret  */
  ESPCHK(0x115f1030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000105e @ 0x115f105e (48 bytes, 16 insns) */
void f_115f105e(void) {
  FTRACE(0x115f105eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f105e push esi */
  push32((uint32_t)(ESI));
  /* 115f105f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f1063 call 0x115f1012 */
  push32(0x115f1068u); f_115f1012();
  /* 115f1068 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f106a mov esi, eax */
  ESI = (EAX);
  /* 115f106c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115f1070 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1076u);
  /* 115f1076 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1078 push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 115f107c push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 115f1080 push esi */
  push32((uint32_t)(ESI));
  /* 115f1081 call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f1087u);
  /* 115f1087 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f108a mov eax, esi */
  EAX = (ESI);
  /* 115f108c pop esi */
  ESI = (pop32());
  /* 115f108d ret  */
  ESPCHK(0x115f105eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000108e @ 0x115f108e (46 bytes, 16 insns) */
void f_115f108e(void) {
  FTRACE(0x115f108eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f108e push esi */
  push32((uint32_t)(ESI));
  /* 115f108f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f1093 call 0x115f1012 */
  push32(0x115f1098u); f_115f1012();
  /* 115f1098 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f109a mov esi, eax */
  ESI = (EAX);
  /* 115f109c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115f10a0 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f10a6u);
  /* 115f10a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f10a8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f10aa push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 115f10ae push esi */
  push32((uint32_t)(ESI));
  /* 115f10af call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f10b5u);
  /* 115f10b5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f10b8 mov eax, esi */
  EAX = (ESI);
  /* 115f10ba pop esi */
  ESI = (pop32());
  /* 115f10bb ret  */
  ESPCHK(0x115f108eu, _esp0);
  ESP += 4; return;
}

/* FUN_100010bc @ 0x115f10bc (36 bytes, 13 insns) */
void f_115f10bc(void) {
  FTRACE(0x115f10bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f10bc push ebp */
  push32((uint32_t)(EBP));
  /* 115f10bd mov ebp, esp */
  EBP = (ESP);
  /* 115f10bf push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f10c1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f10c4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f10c7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f10ca push 0x115f77d0 */
  push32((uint32_t)(0x115f77d0u));
  /* 115f10cf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f10d2 call dword ptr [0x115f6150] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6150))), 0x115f10d8u);
  /* 115f10d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115f10db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f10de pop ebp */
  EBP = (pop32());
  /* 115f10df ret  */
  ESPCHK(0x115f10bcu, _esp0);
  ESP += 4; return;
}

/* FUN_100010e0 @ 0x115f10e0 (36 bytes, 13 insns) */
void f_115f10e0(void) {
  FTRACE(0x115f10e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f10e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115f10e1 mov ebp, esp */
  EBP = (ESP);
  /* 115f10e3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f10e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f10e8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f10eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f10ee push 0x115f7718 */
  push32((uint32_t)(0x115f7718u));
  /* 115f10f3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f10f6 call dword ptr [0x115f6150] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6150))), 0x115f10fcu);
  /* 115f10fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115f10ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1102 pop ebp */
  EBP = (pop32());
  /* 115f1103 ret  */
  ESPCHK(0x115f10e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001104 @ 0x115f1104 (111 bytes, 36 insns) */
void f_115f1104(void) {
  FTRACE(0x115f1104u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f1104 cmp dword ptr [0x115f7668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115f7668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f110b jle 0x115f1172 */
  if ((C.zf||C.sf!=C.of)) goto L_115f1172;
  /* 115f110d push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1112 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f1116 call 0x115f108e */
  push32(0x115f111bu); f_115f108e();
  /* 115f111b push 0x22 */
  push32((uint32_t)(0x22u));
  /* 115f111d call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f1123u);
  /* 115f1123 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1126 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1128 je 0x115f1172 */
  if (C.zf) goto L_115f1172;
  /* 115f112a push esi */
  push32((uint32_t)(ESI));
  /* 115f112b push edi */
  push32((uint32_t)(EDI));
  /* 115f112c mov edi, dword ptr [0x115f6144] */
  EDI = (r32((uint32_t)(0x115f6144)));
  /* 115f1132 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1134 call edi */
  call_ind((uint32_t)(EDI), 0x115f1136u);
  /* 115f1136 mov esi, dword ptr [0x115f6158] */
  ESI = (r32((uint32_t)(0x115f6158)));
  /* 115f113c push 0 */
  push32((uint32_t)(0x0u));
  /* 115f113e push 0x115f7678 */
  push32((uint32_t)(0x115f7678u));
  /* 115f1143 call esi */
  call_ind((uint32_t)(ESI), 0x115f1145u);
  /* 115f1145 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1147 push 0x115f7670 */
  push32((uint32_t)(0x115f7670u));
  /* 115f114c call esi */
  call_ind((uint32_t)(ESI), 0x115f114eu);
  /* 115f114e push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1150 push 0x115f7680 */
  push32((uint32_t)(0x115f7680u));
  /* 115f1155 call esi */
  call_ind((uint32_t)(ESI), 0x115f1157u);
  /* 115f1157 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1159 call dword ptr [0x115f613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f613c))), 0x115f115fu);
  /* 115f115f push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1161 call edi */
  call_ind((uint32_t)(EDI), 0x115f1163u);
  /* 115f1163 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f1165 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 115f1167 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f116du);
  /* 115f116d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1170 pop edi */
  EDI = (pop32());
  /* 115f1171 pop esi */
  ESI = (pop32());
L_115f1172:;
  /* 115f1172 ret  */
  ESPCHK(0x115f1104u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x115f1173 (950 bytes, 277 insns) */
void f_115f1173(void) {
  FTRACE(0x115f1173u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f1173 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1174 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1175 push esi */
  push32((uint32_t)(ESI));
  /* 115f1176 push edi */
  push32((uint32_t)(EDI));
  /* 115f1177 mov edi, dword ptr [0x115f611c] */
  EDI = (r32((uint32_t)(0x115f611c)));
  /* 115f117d push 4 */
  push32((uint32_t)(0x4u));
  /* 115f117f pop ebp */
  EBP = (pop32());
  /* 115f1180 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1181 push 0x115f7788 */
  push32((uint32_t)(0x115f7788u));
  /* 115f1186 call edi */
  call_ind((uint32_t)(EDI), 0x115f1188u);
  /* 115f1188 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1189 push 0x115f7668 */
  push32((uint32_t)(0x115f7668u));
  /* 115f118e call edi */
  call_ind((uint32_t)(EDI), 0x115f1190u);
  /* 115f1190 mov esi, dword ptr [0x115f6120] */
  ESI = (r32((uint32_t)(0x115f6120)));
  /* 115f1196 mov ebx, 0x115f71fc */
  EBX = (0x115f71fcu);
  /* 115f119b push ebx */
  push32((uint32_t)(EBX));
  /* 115f119c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f119e call esi */
  call_ind((uint32_t)(ESI), 0x115f11a0u);
  /* 115f11a0 push ebx */
  push32((uint32_t)(EBX));
  /* 115f11a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f11a3 call esi */
  call_ind((uint32_t)(ESI), 0x115f11a5u);
  /* 115f11a5 push ebx */
  push32((uint32_t)(EBX));
  /* 115f11a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f11a8 call esi */
  call_ind((uint32_t)(ESI), 0x115f11aau);
  /* 115f11aa push 0x115f71f4 */
  push32((uint32_t)(0x115f71f4u));
  /* 115f11af push ebp */
  push32((uint32_t)(EBP));
  /* 115f11b0 call esi */
  call_ind((uint32_t)(ESI), 0x115f11b2u);
  /* 115f11b2 mov esi, dword ptr [0x115f6118] */
  ESI = (r32((uint32_t)(0x115f6118)));
  /* 115f11b8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115f11ba push 1 */
  push32((uint32_t)(0x1u));
  /* 115f11bc call esi */
  call_ind((uint32_t)(ESI), 0x115f11beu);
  /* 115f11be push 0xe */
  push32((uint32_t)(0xeu));
  /* 115f11c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f11c2 call esi */
  call_ind((uint32_t)(ESI), 0x115f11c4u);
  /* 115f11c4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f11c7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115f11c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f11cb call esi */
  call_ind((uint32_t)(ESI), 0x115f11cdu);
  /* 115f11cd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115f11cf push ebp */
  push32((uint32_t)(EBP));
  /* 115f11d0 call esi */
  call_ind((uint32_t)(ESI), 0x115f11d2u);
  /* 115f11d2 mov esi, dword ptr [0x115f6128] */
  ESI = (r32((uint32_t)(0x115f6128)));
  /* 115f11d8 push 0x115f71f0 */
  push32((uint32_t)(0x115f71f0u));
  /* 115f11dd push 0x115f76e8 */
  push32((uint32_t)(0x115f76e8u));
  /* 115f11e2 call esi */
  call_ind((uint32_t)(ESI), 0x115f11e4u);
  /* 115f11e4 push 0x115f71ec */
  push32((uint32_t)(0x115f71ecu));
  /* 115f11e9 push 0x115f76f0 */
  push32((uint32_t)(0x115f76f0u));
  /* 115f11ee call esi */
  call_ind((uint32_t)(ESI), 0x115f11f0u);
  /* 115f11f0 push 0x115f71e4 */
  push32((uint32_t)(0x115f71e4u));
  /* 115f11f5 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f11fa call esi */
  call_ind((uint32_t)(ESI), 0x115f11fcu);
  /* 115f11fc push 0x115f71d8 */
  push32((uint32_t)(0x115f71d8u));
  /* 115f1201 push 0x115f77e8 */
  push32((uint32_t)(0x115f77e8u));
  /* 115f1206 call esi */
  call_ind((uint32_t)(ESI), 0x115f1208u);
  /* 115f1208 push 0x115f71d0 */
  push32((uint32_t)(0x115f71d0u));
  /* 115f120d push 0x115f7750 */
  push32((uint32_t)(0x115f7750u));
  /* 115f1212 call esi */
  call_ind((uint32_t)(ESI), 0x115f1214u);
  /* 115f1214 push 0x115f71c4 */
  push32((uint32_t)(0x115f71c4u));
  /* 115f1219 push 0x115f7698 */
  push32((uint32_t)(0x115f7698u));
  /* 115f121e call esi */
  call_ind((uint32_t)(ESI), 0x115f1220u);
  /* 115f1220 mov ebx, dword ptr [0x115f612c] */
  EBX = (r32((uint32_t)(0x115f612c)));
  /* 115f1226 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1229 mov ebp, 0x115f7780 */
  EBP = (0x115f7780u);
  /* 115f122e push ebp */
  push32((uint32_t)(EBP));
  /* 115f122f call ebx */
  call_ind((uint32_t)(EBX), 0x115f1231u);
  /* 115f1231 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1233 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1234 call edi */
  call_ind((uint32_t)(EDI), 0x115f1236u);
  /* 115f1236 mov ebp, 0x115f7658 */
  EBP = (0x115f7658u);
  /* 115f123b push ebp */
  push32((uint32_t)(EBP));
  /* 115f123c call ebx */
  call_ind((uint32_t)(EBX), 0x115f123eu);
  /* 115f123e push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1240 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1241 call edi */
  call_ind((uint32_t)(EDI), 0x115f1243u);
  /* 115f1243 push 0x115f71c0 */
  push32((uint32_t)(0x115f71c0u));
  /* 115f1248 push 0x115f76a8 */
  push32((uint32_t)(0x115f76a8u));
  /* 115f124d call esi */
  call_ind((uint32_t)(ESI), 0x115f124fu);
  /* 115f124f push 0x115f71bc */
  push32((uint32_t)(0x115f71bcu));
  /* 115f1254 push 0x115f76b0 */
  push32((uint32_t)(0x115f76b0u));
  /* 115f1259 call esi */
  call_ind((uint32_t)(ESI), 0x115f125bu);
  /* 115f125b push 0x115f71b8 */
  push32((uint32_t)(0x115f71b8u));
  /* 115f1260 push 0x115f76b8 */
  push32((uint32_t)(0x115f76b8u));
  /* 115f1265 call esi */
  call_ind((uint32_t)(ESI), 0x115f1267u);
  /* 115f1267 push 0x115f71b4 */
  push32((uint32_t)(0x115f71b4u));
  /* 115f126c push 0x115f76c0 */
  push32((uint32_t)(0x115f76c0u));
  /* 115f1271 call esi */
  call_ind((uint32_t)(ESI), 0x115f1273u);
  /* 115f1273 push 0x115f71b0 */
  push32((uint32_t)(0x115f71b0u));
  /* 115f1278 push 0x115f76c8 */
  push32((uint32_t)(0x115f76c8u));
  /* 115f127d call esi */
  call_ind((uint32_t)(ESI), 0x115f127fu);
  /* 115f127f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1282 push 0x115f71ac */
  push32((uint32_t)(0x115f71acu));
  /* 115f1287 push 0x115f76d0 */
  push32((uint32_t)(0x115f76d0u));
  /* 115f128c call esi */
  call_ind((uint32_t)(ESI), 0x115f128eu);
  /* 115f128e push 0x115f71a8 */
  push32((uint32_t)(0x115f71a8u));
  /* 115f1293 push 0x115f76d8 */
  push32((uint32_t)(0x115f76d8u));
  /* 115f1298 call esi */
  call_ind((uint32_t)(ESI), 0x115f129au);
  /* 115f129a push 0x115f71a0 */
  push32((uint32_t)(0x115f71a0u));
  /* 115f129f push 0x115f7838 */
  push32((uint32_t)(0x115f7838u));
  /* 115f12a4 call esi */
  call_ind((uint32_t)(ESI), 0x115f12a6u);
  /* 115f12a6 push 0x115f7198 */
  push32((uint32_t)(0x115f7198u));
  /* 115f12ab push 0x115f7848 */
  push32((uint32_t)(0x115f7848u));
  /* 115f12b0 call esi */
  call_ind((uint32_t)(ESI), 0x115f12b2u);
  /* 115f12b2 push 0x115f7190 */
  push32((uint32_t)(0x115f7190u));
  /* 115f12b7 push 0x115f7840 */
  push32((uint32_t)(0x115f7840u));
  /* 115f12bc call esi */
  call_ind((uint32_t)(ESI), 0x115f12beu);
  /* 115f12be push 0x115f7188 */
  push32((uint32_t)(0x115f7188u));
  /* 115f12c3 push 0x115f7850 */
  push32((uint32_t)(0x115f7850u));
  /* 115f12c8 call esi */
  call_ind((uint32_t)(ESI), 0x115f12cau);
  /* 115f12ca push 0x115f7180 */
  push32((uint32_t)(0x115f7180u));
  /* 115f12cf push 0x115f7678 */
  push32((uint32_t)(0x115f7678u));
  /* 115f12d4 call esi */
  call_ind((uint32_t)(ESI), 0x115f12d6u);
  /* 115f12d6 push 0x115f7178 */
  push32((uint32_t)(0x115f7178u));
  /* 115f12db push 0x115f7670 */
  push32((uint32_t)(0x115f7670u));
  /* 115f12e0 call esi */
  call_ind((uint32_t)(ESI), 0x115f12e2u);
  /* 115f12e2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f12e5 push 0x115f7170 */
  push32((uint32_t)(0x115f7170u));
  /* 115f12ea push 0x115f7680 */
  push32((uint32_t)(0x115f7680u));
  /* 115f12ef call esi */
  call_ind((uint32_t)(ESI), 0x115f12f1u);
  /* 115f12f1 push 0x115f7168 */
  push32((uint32_t)(0x115f7168u));
  /* 115f12f6 push 0x115f7688 */
  push32((uint32_t)(0x115f7688u));
  /* 115f12fb call esi */
  call_ind((uint32_t)(ESI), 0x115f12fdu);
  /* 115f12fd push 0x115f7164 */
  push32((uint32_t)(0x115f7164u));
  /* 115f1302 push 0x115f77a8 */
  push32((uint32_t)(0x115f77a8u));
  /* 115f1307 call esi */
  call_ind((uint32_t)(ESI), 0x115f1309u);
  /* 115f1309 push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f130e push 0x115f7758 */
  push32((uint32_t)(0x115f7758u));
  /* 115f1313 call esi */
  call_ind((uint32_t)(ESI), 0x115f1315u);
  /* 115f1315 mov ebp, 0x115f7818 */
  EBP = (0x115f7818u);
  /* 115f131a push ebp */
  push32((uint32_t)(EBP));
  /* 115f131b call ebx */
  call_ind((uint32_t)(EBX), 0x115f131du);
  /* 115f131d push 8 */
  push32((uint32_t)(0x8u));
  /* 115f131f push ebp */
  push32((uint32_t)(EBP));
  /* 115f1320 call edi */
  call_ind((uint32_t)(EDI), 0x115f1322u);
  /* 115f1322 push 0x115f715c */
  push32((uint32_t)(0x115f715cu));
  /* 115f1327 push 0x115f7768 */
  push32((uint32_t)(0x115f7768u));
  /* 115f132c call esi */
  call_ind((uint32_t)(ESI), 0x115f132eu);
  /* 115f132e mov ebp, 0x115f7860 */
  EBP = (0x115f7860u);
  /* 115f1333 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1334 call ebx */
  call_ind((uint32_t)(EBX), 0x115f1336u);
  /* 115f1336 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1338 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1339 call edi */
  call_ind((uint32_t)(EDI), 0x115f133bu);
  /* 115f133b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f133e push 0x115f7158 */
  push32((uint32_t)(0x115f7158u));
  /* 115f1343 push 0x115f7760 */
  push32((uint32_t)(0x115f7760u));
  /* 115f1348 call esi */
  call_ind((uint32_t)(ESI), 0x115f134au);
  /* 115f134a mov esi, 0x115f76a0 */
  ESI = (0x115f76a0u);
  /* 115f134f push esi */
  push32((uint32_t)(ESI));
  /* 115f1350 call ebx */
  call_ind((uint32_t)(EBX), 0x115f1352u);
  /* 115f1352 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1354 push esi */
  push32((uint32_t)(ESI));
  /* 115f1355 call edi */
  call_ind((uint32_t)(EDI), 0x115f1357u);
  /* 115f1357 mov esi, 0x115f76e0 */
  ESI = (0x115f76e0u);
  /* 115f135c push esi */
  push32((uint32_t)(ESI));
  /* 115f135d call ebx */
  call_ind((uint32_t)(EBX), 0x115f135fu);
  /* 115f135f push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1361 push esi */
  push32((uint32_t)(ESI));
  /* 115f1362 call edi */
  call_ind((uint32_t)(EDI), 0x115f1364u);
  /* 115f1364 mov esi, 0x115f76f8 */
  ESI = (0x115f76f8u);
  /* 115f1369 push esi */
  push32((uint32_t)(ESI));
  /* 115f136a call ebx */
  call_ind((uint32_t)(EBX), 0x115f136cu);
  /* 115f136c push 8 */
  push32((uint32_t)(0x8u));
  /* 115f136e push esi */
  push32((uint32_t)(ESI));
  /* 115f136f call edi */
  call_ind((uint32_t)(EDI), 0x115f1371u);
  /* 115f1371 mov esi, dword ptr [0x115f6124] */
  ESI = (r32((uint32_t)(0x115f6124)));
  /* 115f1377 push 0x115f7154 */
  push32((uint32_t)(0x115f7154u));
  /* 115f137c push 0x115f7700 */
  push32((uint32_t)(0x115f7700u));
  /* 115f1381 call esi */
  call_ind((uint32_t)(ESI), 0x115f1383u);
  /* 115f1383 push 0x115f714c */
  push32((uint32_t)(0x115f714cu));
  /* 115f1388 push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f138d call esi */
  call_ind((uint32_t)(ESI), 0x115f138fu);
  /* 115f138f push 0x115f7148 */
  push32((uint32_t)(0x115f7148u));
  /* 115f1394 push 0x115f7708 */
  push32((uint32_t)(0x115f7708u));
  /* 115f1399 call esi */
  call_ind((uint32_t)(ESI), 0x115f139bu);
  /* 115f139b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f139e push 0x115f7144 */
  push32((uint32_t)(0x115f7144u));
  /* 115f13a3 push 0x115f7710 */
  push32((uint32_t)(0x115f7710u));
  /* 115f13a8 call esi */
  call_ind((uint32_t)(ESI), 0x115f13aau);
  /* 115f13aa push 0x115f7140 */
  push32((uint32_t)(0x115f7140u));
  /* 115f13af push 0x115f7720 */
  push32((uint32_t)(0x115f7720u));
  /* 115f13b4 call esi */
  call_ind((uint32_t)(ESI), 0x115f13b6u);
  /* 115f13b6 push 0x115f713c */
  push32((uint32_t)(0x115f713cu));
  /* 115f13bb push 0x115f7728 */
  push32((uint32_t)(0x115f7728u));
  /* 115f13c0 call esi */
  call_ind((uint32_t)(ESI), 0x115f13c2u);
  /* 115f13c2 push 0x115f7138 */
  push32((uint32_t)(0x115f7138u));
  /* 115f13c7 push 0x115f7730 */
  push32((uint32_t)(0x115f7730u));
  /* 115f13cc call esi */
  call_ind((uint32_t)(ESI), 0x115f13ceu);
  /* 115f13ce push 0x115f7134 */
  push32((uint32_t)(0x115f7134u));
  /* 115f13d3 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f13d8 call esi */
  call_ind((uint32_t)(ESI), 0x115f13dau);
  /* 115f13da push 0x115f7130 */
  push32((uint32_t)(0x115f7130u));
  /* 115f13df push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f13e4 call esi */
  call_ind((uint32_t)(ESI), 0x115f13e6u);
  /* 115f13e6 push 0x115f712c */
  push32((uint32_t)(0x115f712cu));
  /* 115f13eb push 0x115f7740 */
  push32((uint32_t)(0x115f7740u));
  /* 115f13f0 call esi */
  call_ind((uint32_t)(ESI), 0x115f13f2u);
  /* 115f13f2 push 0x115f7128 */
  push32((uint32_t)(0x115f7128u));
  /* 115f13f7 push 0x115f7830 */
  push32((uint32_t)(0x115f7830u));
  /* 115f13fc call esi */
  call_ind((uint32_t)(ESI), 0x115f13feu);
  /* 115f13fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1401 push 0x115f7124 */
  push32((uint32_t)(0x115f7124u));
  /* 115f1406 push 0x115f77f8 */
  push32((uint32_t)(0x115f77f8u));
  /* 115f140b call esi */
  call_ind((uint32_t)(ESI), 0x115f140du);
  /* 115f140d push 0x115f7120 */
  push32((uint32_t)(0x115f7120u));
  /* 115f1412 push 0x115f7800 */
  push32((uint32_t)(0x115f7800u));
  /* 115f1417 call esi */
  call_ind((uint32_t)(ESI), 0x115f1419u);
  /* 115f1419 push 0x115f711c */
  push32((uint32_t)(0x115f711cu));
  /* 115f141e push 0x115f7808 */
  push32((uint32_t)(0x115f7808u));
  /* 115f1423 call esi */
  call_ind((uint32_t)(ESI), 0x115f1425u);
  /* 115f1425 push 0x115f7118 */
  push32((uint32_t)(0x115f7118u));
  /* 115f142a push 0x115f7810 */
  push32((uint32_t)(0x115f7810u));
  /* 115f142f call esi */
  call_ind((uint32_t)(ESI), 0x115f1431u);
  /* 115f1431 push 0x115f7114 */
  push32((uint32_t)(0x115f7114u));
  /* 115f1436 push 0x115f7820 */
  push32((uint32_t)(0x115f7820u));
  /* 115f143b call esi */
  call_ind((uint32_t)(ESI), 0x115f143du);
  /* 115f143d push 0x115f7110 */
  push32((uint32_t)(0x115f7110u));
  /* 115f1442 push 0x115f7748 */
  push32((uint32_t)(0x115f7748u));
  /* 115f1447 call esi */
  call_ind((uint32_t)(ESI), 0x115f1449u);
  /* 115f1449 mov esi, dword ptr [0x115f6134] */
  ESI = (r32((uint32_t)(0x115f6134)));
  /* 115f144f push 0x115f7108 */
  push32((uint32_t)(0x115f7108u));
  /* 115f1454 push 0x115f7718 */
  push32((uint32_t)(0x115f7718u));
  /* 115f1459 call esi */
  call_ind((uint32_t)(ESI), 0x115f145bu);
  /* 115f145b push 0x115f70fc */
  push32((uint32_t)(0x115f70fcu));
  /* 115f1460 push 0x115f77d0 */
  push32((uint32_t)(0x115f77d0u));
  /* 115f1465 call esi */
  call_ind((uint32_t)(ESI), 0x115f1467u);
  /* 115f1467 mov esi, dword ptr [0x115f6138] */
  ESI = (r32((uint32_t)(0x115f6138)));
  /* 115f146d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1470 push 0x115f70ec */
  push32((uint32_t)(0x115f70ecu));
  /* 115f1475 push 0x115f77c8 */
  push32((uint32_t)(0x115f77c8u));
  /* 115f147a call esi */
  call_ind((uint32_t)(ESI), 0x115f147cu);
  /* 115f147c push 0x115f70dc */
  push32((uint32_t)(0x115f70dcu));
  /* 115f1481 push 0x115f77e0 */
  push32((uint32_t)(0x115f77e0u));
  /* 115f1486 call esi */
  call_ind((uint32_t)(ESI), 0x115f1488u);
  /* 115f1488 push 0x115f70d0 */
  push32((uint32_t)(0x115f70d0u));
  /* 115f148d push 0x115f7660 */
  push32((uint32_t)(0x115f7660u));
  /* 115f1492 call esi */
  call_ind((uint32_t)(ESI), 0x115f1494u);
  /* 115f1494 push 0x115f70b8 */
  push32((uint32_t)(0x115f70b8u));
  /* 115f1499 push 0x115f77f0 */
  push32((uint32_t)(0x115f77f0u));
  /* 115f149e call esi */
  call_ind((uint32_t)(ESI), 0x115f14a0u);
  /* 115f14a0 push 0x115f70ac */
  push32((uint32_t)(0x115f70acu));
  /* 115f14a5 push 0x115f77b8 */
  push32((uint32_t)(0x115f77b8u));
  /* 115f14aa call esi */
  call_ind((uint32_t)(ESI), 0x115f14acu);
  /* 115f14ac push 0x115f70a0 */
  push32((uint32_t)(0x115f70a0u));
  /* 115f14b1 push 0x115f77d8 */
  push32((uint32_t)(0x115f77d8u));
  /* 115f14b6 call esi */
  call_ind((uint32_t)(ESI), 0x115f14b8u);
  /* 115f14b8 push 0x115f7094 */
  push32((uint32_t)(0x115f7094u));
  /* 115f14bd push 0x115f7650 */
  push32((uint32_t)(0x115f7650u));
  /* 115f14c2 call esi */
  call_ind((uint32_t)(ESI), 0x115f14c4u);
  /* 115f14c4 push 0x115f7084 */
  push32((uint32_t)(0x115f7084u));
  /* 115f14c9 push 0x115f77c0 */
  push32((uint32_t)(0x115f77c0u));
  /* 115f14ce call esi */
  call_ind((uint32_t)(ESI), 0x115f14d0u);
  /* 115f14d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f14d3 push 0x115f7070 */
  push32((uint32_t)(0x115f7070u));
  /* 115f14d8 push 0x115f77b0 */
  push32((uint32_t)(0x115f77b0u));
  /* 115f14dd call esi */
  call_ind((uint32_t)(ESI), 0x115f14dfu);
  /* 115f14df push 0x115f7064 */
  push32((uint32_t)(0x115f7064u));
  /* 115f14e4 push 0x115f7868 */
  push32((uint32_t)(0x115f7868u));
  /* 115f14e9 call esi */
  call_ind((uint32_t)(ESI), 0x115f14ebu);
  /* 115f14eb push 0x115f7054 */
  push32((uint32_t)(0x115f7054u));
  /* 115f14f0 push 0x115f7770 */
  push32((uint32_t)(0x115f7770u));
  /* 115f14f5 call esi */
  call_ind((uint32_t)(ESI), 0x115f14f7u);
  /* 115f14f7 push 0x115f7040 */
  push32((uint32_t)(0x115f7040u));
  /* 115f14fc push 0x115f7778 */
  push32((uint32_t)(0x115f7778u));
  /* 115f1501 call esi */
  call_ind((uint32_t)(ESI), 0x115f1503u);
  /* 115f1503 mov esi, dword ptr [0x115f6130] */
  ESI = (r32((uint32_t)(0x115f6130)));
  /* 115f1509 push 0x115f7038 */
  push32((uint32_t)(0x115f7038u));
  /* 115f150e push 0x115f7690 */
  push32((uint32_t)(0x115f7690u));
  /* 115f1513 call esi */
  call_ind((uint32_t)(ESI), 0x115f1515u);
  /* 115f1515 push 0x115f7030 */
  push32((uint32_t)(0x115f7030u));
  /* 115f151a push 0x115f7798 */
  push32((uint32_t)(0x115f7798u));
  /* 115f151f call esi */
  call_ind((uint32_t)(ESI), 0x115f1521u);
  /* 115f1521 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1524 pop edi */
  EDI = (pop32());
  /* 115f1525 pop esi */
  ESI = (pop32());
  /* 115f1526 pop ebp */
  EBP = (pop32());
  /* 115f1527 pop ebx */
  EBX = (pop32());
  /* 115f1528 ret  */
  ESPCHK(0x115f1173u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x115f1529 (4752 bytes, 1643 insns) */
void f_115f1529(void) {
  FTRACE(0x115f1529u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f1529 push ecx */
  push32((uint32_t)(ECX));
  /* 115f152a push ebx */
  push32((uint32_t)(EBX));
  /* 115f152b push ebp */
  push32((uint32_t)(EBP));
  /* 115f152c push esi */
  push32((uint32_t)(ESI));
  /* 115f152d push edi */
  push32((uint32_t)(EDI));
  /* 115f152e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115f1530 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f1536u);
  /* 115f1536 mov esi, dword ptr [0x115f60b4] */
  ESI = (r32((uint32_t)(0x115f60b4)));
  /* 115f153c mov edi, dword ptr [0x115f60b0] */
  EDI = (r32((uint32_t)(0x115f60b0)));
  /* 115f1542 mov ebp, dword ptr [0x115f60bc] */
  EBP = (r32((uint32_t)(0x115f60bc)));
  /* 115f1548 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f154a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f154c pop ecx */
  ECX = (pop32());
  /* 115f154d je 0x115f17b9 */
  if (C.zf) goto L_115f17b9;
  /* 115f1553 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1554 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1559 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f155fu);
  /* 115f155f push ebx */
  push32((uint32_t)(EBX));
  /* 115f1560 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1562 call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1568u);
  /* 115f1568 push 0x115f7700 */
  push32((uint32_t)(0x115f7700u));
  /* 115f156d call dword ptr [0x115f60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60b8))), 0x115f1573u);
  /* 115f1573 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1574 call dword ptr [0x115f60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c8))), 0x115f157au);
  /* 115f157a push ebx */
  push32((uint32_t)(EBX));
  /* 115f157b push ebx */
  push32((uint32_t)(EBX));
  /* 115f157c push ebx */
  push32((uint32_t)(EBX));
  /* 115f157d mov dword ptr [0x115f7668], eax */
  w32((uint32_t)(0x115f7668), (EAX));
  /* 115f1582 mov dword ptr [0x115f7788], ebx */
  w32((uint32_t)(0x115f7788), (EBX));
  /* 115f1588 call esi */
  call_ind((uint32_t)(ESI), 0x115f158au);
  /* 115f158a push ebx */
  push32((uint32_t)(EBX));
  /* 115f158b push 2 */
  push32((uint32_t)(0x2u));
  /* 115f158d push ebx */
  push32((uint32_t)(EBX));
  /* 115f158e call esi */
  call_ind((uint32_t)(ESI), 0x115f1590u);
  /* 115f1590 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 115f1595 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1597 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1598 call esi */
  call_ind((uint32_t)(ESI), 0x115f159au);
  /* 115f159a push 3 */
  push32((uint32_t)(0x3u));
  /* 115f159c push ebx */
  push32((uint32_t)(EBX));
  /* 115f159d call edi */
  call_ind((uint32_t)(EDI), 0x115f159fu);
  /* 115f159f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f15a2 push eax */
  push32((uint32_t)(EAX));
  /* 115f15a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15a5 push ebx */
  push32((uint32_t)(EBX));
  /* 115f15a6 call esi */
  call_ind((uint32_t)(ESI), 0x115f15a8u);
  /* 115f15a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15aa push ebx */
  push32((uint32_t)(EBX));
  /* 115f15ab call edi */
  call_ind((uint32_t)(EDI), 0x115f15adu);
  /* 115f15ad push eax */
  push32((uint32_t)(EAX));
  /* 115f15ae push 4 */
  push32((uint32_t)(0x4u));
  /* 115f15b0 push ebx */
  push32((uint32_t)(EBX));
  /* 115f15b1 call esi */
  call_ind((uint32_t)(ESI), 0x115f15b3u);
  /* 115f15b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15b5 push ebx */
  push32((uint32_t)(EBX));
  /* 115f15b6 call edi */
  call_ind((uint32_t)(EDI), 0x115f15b8u);
  /* 115f15b8 push eax */
  push32((uint32_t)(EAX));
  /* 115f15b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f15bb push ebx */
  push32((uint32_t)(EBX));
  /* 115f15bc call esi */
  call_ind((uint32_t)(ESI), 0x115f15beu);
  /* 115f15be push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f15c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15c7 call esi */
  call_ind((uint32_t)(ESI), 0x115f15c9u);
  /* 115f15c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f15cc push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15ce push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15d0 call edi */
  call_ind((uint32_t)(EDI), 0x115f15d2u);
  /* 115f15d2 push eax */
  push32((uint32_t)(EAX));
  /* 115f15d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15d7 call esi */
  call_ind((uint32_t)(ESI), 0x115f15d9u);
  /* 115f15d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15db push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15dd call edi */
  call_ind((uint32_t)(EDI), 0x115f15dfu);
  /* 115f15df push eax */
  push32((uint32_t)(EAX));
  /* 115f15e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f15e4 call esi */
  call_ind((uint32_t)(ESI), 0x115f15e6u);
  /* 115f15e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15ea call edi */
  call_ind((uint32_t)(EDI), 0x115f15ecu);
  /* 115f15ec push eax */
  push32((uint32_t)(EAX));
  /* 115f15ed push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15ef push 2 */
  push32((uint32_t)(0x2u));
  /* 115f15f1 call esi */
  call_ind((uint32_t)(ESI), 0x115f15f3u);
  /* 115f15f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f15f7 call edi */
  call_ind((uint32_t)(EDI), 0x115f15f9u);
  /* 115f15f9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f15fc push eax */
  push32((uint32_t)(EAX));
  /* 115f15fd push 3 */
  push32((uint32_t)(0x3u));
  /* 115f15ff push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1601 call esi */
  call_ind((uint32_t)(ESI), 0x115f1603u);
  /* 115f1603 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1605 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1607 call edi */
  call_ind((uint32_t)(EDI), 0x115f1609u);
  /* 115f1609 push eax */
  push32((uint32_t)(EAX));
  /* 115f160a push 1 */
  push32((uint32_t)(0x1u));
  /* 115f160c push 3 */
  push32((uint32_t)(0x3u));
  /* 115f160e call esi */
  call_ind((uint32_t)(ESI), 0x115f1610u);
  /* 115f1610 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1612 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1614 call edi */
  call_ind((uint32_t)(EDI), 0x115f1616u);
  /* 115f1616 push eax */
  push32((uint32_t)(EAX));
  /* 115f1617 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1619 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f161b call esi */
  call_ind((uint32_t)(ESI), 0x115f161du);
  /* 115f161d push 3 */
  push32((uint32_t)(0x3u));
  /* 115f161f push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1621 call edi */
  call_ind((uint32_t)(EDI), 0x115f1623u);
  /* 115f1623 push eax */
  push32((uint32_t)(EAX));
  /* 115f1624 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1626 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1628 call esi */
  call_ind((uint32_t)(ESI), 0x115f162au);
  /* 115f162a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f162d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115f162f call dword ptr [0x115f60cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60cc))), 0x115f1635u);
  /* 115f1635 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115f1637 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1639u);
  /* 115f1639 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115f163b call ebp */
  call_ind((uint32_t)(EBP), 0x115f163du);
  /* 115f163d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 115f163f call ebp */
  call_ind((uint32_t)(EBP), 0x115f1641u);
  /* 115f1641 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 115f1643 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1645u);
  /* 115f1645 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 115f1647 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1649u);
  /* 115f1649 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 115f164b call ebp */
  call_ind((uint32_t)(EBP), 0x115f164du);
  /* 115f164d push 0x115f7818 */
  push32((uint32_t)(0x115f7818u));
  /* 115f1652 push 0x115f7758 */
  push32((uint32_t)(0x115f7758u));
  /* 115f1657 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f165du);
  /* 115f165d push 0x115f7860 */
  push32((uint32_t)(0x115f7860u));
  /* 115f1662 push 0x115f7768 */
  push32((uint32_t)(0x115f7768u));
  /* 115f1667 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f166du);
  /* 115f166d push 0x115f76a0 */
  push32((uint32_t)(0x115f76a0u));
  /* 115f1672 push 0x115f7760 */
  push32((uint32_t)(0x115f7760u));
  /* 115f1677 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f167du);
  /* 115f167d push 0x115f7314 */
  push32((uint32_t)(0x115f7314u));
  /* 115f1682 push 0x115f71f0 */
  push32((uint32_t)(0x115f71f0u));
  /* 115f1687 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f168du);
  /* 115f168d push 0x115f730c */
  push32((uint32_t)(0x115f730cu));
  /* 115f1692 push 0x115f71ec */
  push32((uint32_t)(0x115f71ecu));
  /* 115f1697 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f169du);
  /* 115f169d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f16a0 push 0x115f7304 */
  push32((uint32_t)(0x115f7304u));
  /* 115f16a5 push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f16aa call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f16b0u);
  /* 115f16b0 push 0x115f72fc */
  push32((uint32_t)(0x115f72fcu));
  /* 115f16b5 push 0x115f71e4 */
  push32((uint32_t)(0x115f71e4u));
  /* 115f16ba call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f16c0u);
  /* 115f16c0 mov eax, dword ptr [0x115f7668] */
  EAX = (r32((uint32_t)(0x115f7668)));
  /* 115f16c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f16c8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f16c9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f16ca je 0x115f16f6 */
  if (C.zf) goto L_115f16f6;
  /* 115f16cc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f16cd jne 0x115f1779 */
  if (!C.zf) goto L_115f1779;
  /* 115f16d3 push 0x115f72f4 */
  push32((uint32_t)(0x115f72f4u));
  /* 115f16d8 push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f16dd call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f16e3u);
  /* 115f16e3 push 0x115f72ec */
  push32((uint32_t)(0x115f72ecu));
  /* 115f16e8 push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f16ed call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f16f3u);
  /* 115f16f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f16f6:;
  /* 115f16f6 push 0x115f72d4 */
  push32((uint32_t)(0x115f72d4u));
  /* 115f16fb push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1700 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1706u);
  /* 115f1706 push 0x115f72bc */
  push32((uint32_t)(0x115f72bcu));
  /* 115f170b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1710 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1716u);
  /* 115f1716 push 0x115f72b4 */
  push32((uint32_t)(0x115f72b4u));
  /* 115f171b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1720 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1726u);
  /* 115f1726 push 0x115f72ac */
  push32((uint32_t)(0x115f72acu));
  /* 115f172b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1730 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1736u);
  /* 115f1736 push 0x115f72a4 */
  push32((uint32_t)(0x115f72a4u));
  /* 115f173b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1740 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1746u);
  /* 115f1746 push 0x115f729c */
  push32((uint32_t)(0x115f729cu));
  /* 115f174b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1750 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1756u);
  /* 115f1756 push 0x115f7294 */
  push32((uint32_t)(0x115f7294u));
  /* 115f175b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1760 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1766u);
  /* 115f1766 push 0x115f728c */
  push32((uint32_t)(0x115f728cu));
  /* 115f176b push 0x115f7160 */
  push32((uint32_t)(0x115f7160u));
  /* 115f1770 call dword ptr [0x115f60d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d4))), 0x115f1776u);
  /* 115f1776 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1779:;
  /* 115f1779 push 0x115f7284 */
  push32((uint32_t)(0x115f7284u));
  /* 115f177e call dword ptr [0x115f60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d8))), 0x115f1784u);
  /* 115f1784 mov dword ptr [esp], 0x12c */
  w32((uint32_t)(ESP), (0x12cu));
  /* 115f178b push 1 */
  push32((uint32_t)(0x1u));
  /* 115f178d call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f1793u);
  /* 115f1793 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 115f1798 push 6 */
  push32((uint32_t)(0x6u));
  /* 115f179a call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f17a0u);
  /* 115f17a0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115f17a5 push 0xa */
  push32((uint32_t)(0xau));
  /* 115f17a7 call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f17adu);
  /* 115f17ad push ebx */
  push32((uint32_t)(EBX));
  /* 115f17ae push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115f17b0 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f17b6u);
  /* 115f17b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f17b9:;
  /* 115f17b9 push 0xa */
  push32((uint32_t)(0xau));
  /* 115f17bb call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f17c1u);
  /* 115f17c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f17c3 pop ecx */
  ECX = (pop32());
  /* 115f17c4 je 0x115f18c2 */
  if (C.zf) goto L_115f18c2;
  /* 115f17ca push 2 */
  push32((uint32_t)(0x2u));
  /* 115f17cc push 3 */
  push32((uint32_t)(0x3u));
  /* 115f17ce call edi */
  call_ind((uint32_t)(EDI), 0x115f17d0u);
  /* 115f17d0 pop ecx */
  ECX = (pop32());
  /* 115f17d1 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f17d6 pop ecx */
  ECX = (pop32());
  /* 115f17d7 jge 0x115f17eb */
  if ((C.sf==C.of)) goto L_115f17eb;
  /* 115f17d9 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 115f17de push 2 */
  push32((uint32_t)(0x2u));
  /* 115f17e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f17e2 call dword ptr [0x115f60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e4))), 0x115f17e8u);
  /* 115f17e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f17eb:;
  /* 115f17eb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115f17ed call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f17f3u);
  /* 115f17f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f17f5 pop ecx */
  ECX = (pop32());
  /* 115f17f6 je 0x115f1832 */
  if (C.zf) goto L_115f1832;
  /* 115f17f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f17fa push 1 */
  push32((uint32_t)(0x1u));
  /* 115f17fc call edi */
  call_ind((uint32_t)(EDI), 0x115f17feu);
  /* 115f17fe pop ecx */
  ECX = (pop32());
  /* 115f17ff cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1804 pop ecx */
  ECX = (pop32());
  /* 115f1805 jge 0x115f1815 */
  if ((C.sf==C.of)) goto L_115f1815;
  /* 115f1807 push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f180c push 3 */
  push32((uint32_t)(0x3u));
  /* 115f180e push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1810 call esi */
  call_ind((uint32_t)(ESI), 0x115f1812u);
  /* 115f1812 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1815:;
  /* 115f1815 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1817 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1819 call edi */
  call_ind((uint32_t)(EDI), 0x115f181bu);
  /* 115f181b pop ecx */
  ECX = (pop32());
  /* 115f181c cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1821 pop ecx */
  ECX = (pop32());
  /* 115f1822 jge 0x115f1832 */
  if ((C.sf==C.of)) goto L_115f1832;
  /* 115f1824 push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f1829 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f182b push 2 */
  push32((uint32_t)(0x2u));
  /* 115f182d call esi */
  call_ind((uint32_t)(ESI), 0x115f182fu);
  /* 115f182f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1832:;
  /* 115f1832 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115f1834 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f183au);
  /* 115f183a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f183c pop ecx */
  ECX = (pop32());
  /* 115f183d je 0x115f18b3 */
  if (C.zf) goto L_115f18b3;
  /* 115f183f push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1841 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1843 call edi */
  call_ind((uint32_t)(EDI), 0x115f1845u);
  /* 115f1845 pop ecx */
  ECX = (pop32());
  /* 115f1846 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f184b pop ecx */
  ECX = (pop32());
  /* 115f184c jge 0x115f185c */
  if ((C.sf==C.of)) goto L_115f185c;
  /* 115f184e push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f1853 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1855 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1857 call esi */
  call_ind((uint32_t)(ESI), 0x115f1859u);
  /* 115f1859 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f185c:;
  /* 115f185c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f185e push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1860 call edi */
  call_ind((uint32_t)(EDI), 0x115f1862u);
  /* 115f1862 pop ecx */
  ECX = (pop32());
  /* 115f1863 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1868 pop ecx */
  ECX = (pop32());
  /* 115f1869 jge 0x115f1879 */
  if ((C.sf==C.of)) goto L_115f1879;
  /* 115f186b push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f1870 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1872 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1874 call esi */
  call_ind((uint32_t)(ESI), 0x115f1876u);
  /* 115f1876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1879:;
  /* 115f1879 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f187b push 3 */
  push32((uint32_t)(0x3u));
  /* 115f187d call edi */
  call_ind((uint32_t)(EDI), 0x115f187fu);
  /* 115f187f pop ecx */
  ECX = (pop32());
  /* 115f1880 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1885 pop ecx */
  ECX = (pop32());
  /* 115f1886 jge 0x115f1896 */
  if ((C.sf==C.of)) goto L_115f1896;
  /* 115f1888 push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f188d push 4 */
  push32((uint32_t)(0x4u));
  /* 115f188f push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1891 call esi */
  call_ind((uint32_t)(ESI), 0x115f1893u);
  /* 115f1893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1896:;
  /* 115f1896 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f1898 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f189a call edi */
  call_ind((uint32_t)(EDI), 0x115f189cu);
  /* 115f189c pop ecx */
  ECX = (pop32());
  /* 115f189d cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f18a2 pop ecx */
  ECX = (pop32());
  /* 115f18a3 jge 0x115f18b3 */
  if ((C.sf==C.of)) goto L_115f18b3;
  /* 115f18a5 push 0x5f5e0ff */
  push32((uint32_t)(0x5f5e0ffu));
  /* 115f18aa push 5 */
  push32((uint32_t)(0x5u));
  /* 115f18ac push 3 */
  push32((uint32_t)(0x3u));
  /* 115f18ae call esi */
  call_ind((uint32_t)(ESI), 0x115f18b0u);
  /* 115f18b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f18b3:;
  /* 115f18b3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 115f18b8 push 0xa */
  push32((uint32_t)(0xau));
  /* 115f18ba call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f18c0u);
  /* 115f18c0 pop ecx */
  ECX = (pop32());
  /* 115f18c1 pop ecx */
  ECX = (pop32());
L_115f18c2:;
  /* 115f18c2 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115f18c4 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f18cau);
  /* 115f18ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f18cc pop ecx */
  ECX = (pop32());
  /* 115f18cd je 0x115f19ab */
  if (C.zf) goto L_115f19ab;
  /* 115f18d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f18d5 call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f18dbu);
  /* 115f18db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f18dd pop ecx */
  ECX = (pop32());
  /* 115f18de jne 0x115f18f1 */
  if (!C.zf) goto L_115f18f1;
  /* 115f18e0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f18e2 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f18e8u);
  /* 115f18e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f18ea pop ecx */
  ECX = (pop32());
  /* 115f18eb jne 0x115f19ab */
  if (!C.zf) goto L_115f19ab;
L_115f18f1:;
  /* 115f18f1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f18f3 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f18f9u);
  /* 115f18f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f18fb pop ecx */
  ECX = (pop32());
  /* 115f18fc je 0x115f191b */
  if (C.zf) goto L_115f191b;
  /* 115f18fe push 0x115f727c */
  push32((uint32_t)(0x115f727cu));
  /* 115f1903 call dword ptr [0x115f60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d8))), 0x115f1909u);
  /* 115f1909 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f190b push 1 */
  push32((uint32_t)(0x1u));
  /* 115f190d push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1912 call dword ptr [0x115f60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60dc))), 0x115f1918u);
  /* 115f1918 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f191b:;
  /* 115f191b push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1920 push 0x115f7838 */
  push32((uint32_t)(0x115f7838u));
  /* 115f1925 call 0x115f108e */
  push32(0x115f192au); f_115f108e();
  /* 115f192a push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f192f push 0x115f7848 */
  push32((uint32_t)(0x115f7848u));
  /* 115f1934 call 0x115f108e */
  push32(0x115f1939u); f_115f108e();
  /* 115f1939 push 0x115f7810 */
  push32((uint32_t)(0x115f7810u));
  /* 115f193e push 0x115f7840 */
  push32((uint32_t)(0x115f7840u));
  /* 115f1943 call 0x115f1030 */
  push32(0x115f1948u); f_115f1030();
  /* 115f1948 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f194b push 2 */
  push32((uint32_t)(0x2u));
  /* 115f194d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f194f push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1954 push 0x115f7820 */
  push32((uint32_t)(0x115f7820u));
  /* 115f1959 push 0x115f7840 */
  push32((uint32_t)(0x115f7840u));
  /* 115f195e call 0x115f1030 */
  push32(0x115f1963u); f_115f1030();
  /* 115f1963 pop ecx */
  ECX = (pop32());
  /* 115f1964 pop ecx */
  ECX = (pop32());
  /* 115f1965 push eax */
  push32((uint32_t)(EAX));
  /* 115f1966 call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f196cu);
  /* 115f196c push 0x115f7810 */
  push32((uint32_t)(0x115f7810u));
  /* 115f1971 push 0x115f7850 */
  push32((uint32_t)(0x115f7850u));
  /* 115f1976 call 0x115f1030 */
  push32(0x115f197bu); f_115f1030();
  /* 115f197b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f197e push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1980 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f1982 push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1987 push 0x115f7820 */
  push32((uint32_t)(0x115f7820u));
  /* 115f198c push 0x115f7850 */
  push32((uint32_t)(0x115f7850u));
  /* 115f1991 call 0x115f1030 */
  push32(0x115f1996u); f_115f1030();
  /* 115f1996 pop ecx */
  ECX = (pop32());
  /* 115f1997 pop ecx */
  ECX = (pop32());
  /* 115f1998 push eax */
  push32((uint32_t)(EAX));
  /* 115f1999 call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f199fu);
  /* 115f199f push ebx */
  push32((uint32_t)(EBX));
  /* 115f19a0 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115f19a2 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f19a8u);
  /* 115f19a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f19ab:;
  /* 115f19ab push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f19ad call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f19b3u);
  /* 115f19b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f19b5 pop ecx */
  ECX = (pop32());
  /* 115f19b6 je 0x115f1a1b */
  if (C.zf) goto L_115f1a1b;
  /* 115f19b8 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f19bd push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f19c2 call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f19c8u);
  /* 115f19c8 pop ecx */
  ECX = (pop32());
  /* 115f19c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f19cb pop ecx */
  ECX = (pop32());
  /* 115f19cc jle 0x115f1a1b */
  if ((C.zf||C.sf!=C.of)) goto L_115f1a1b;
  /* 115f19ce push 0x115f7274 */
  push32((uint32_t)(0x115f7274u));
  /* 115f19d3 call dword ptr [0x115f60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d8))), 0x115f19d9u);
  /* 115f19d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f19db call dword ptr [0x115f60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60f0))), 0x115f19e1u);
  /* 115f19e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f19e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f19e5 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f19ea call dword ptr [0x115f60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60dc))), 0x115f19f0u);
  /* 115f19f0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115f19f2 call ebp */
  call_ind((uint32_t)(EBP), 0x115f19f4u);
  /* 115f19f4 mov ebp, dword ptr [0x115f60cc] */
  EBP = (r32((uint32_t)(0x115f60cc)));
  /* 115f19fa push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115f19fc call ebp */
  call_ind((uint32_t)(EBP), 0x115f19feu);
  /* 115f19fe push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115f1a00 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1a02u);
  /* 115f1a02 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 115f1a07 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1a09 call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f1a0fu);
  /* 115f1a0f push ebx */
  push32((uint32_t)(EBX));
  /* 115f1a10 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1a12 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1a18u);
  /* 115f1a18 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1a1b:;
  /* 115f1a1b mov ebp, dword ptr [0x115f6140] */
  EBP = (r32((uint32_t)(0x115f6140)));
  /* 115f1a21 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1a23 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1a25u);
  /* 115f1a25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1a27 pop ecx */
  ECX = (pop32());
  /* 115f1a28 jne 0x115f1aa6 */
  if (!C.zf) goto L_115f1aa6;
  /* 115f1a2a push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1a2c call ebp */
  call_ind((uint32_t)(EBP), 0x115f1a2eu);
  /* 115f1a2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1a30 pop ecx */
  ECX = (pop32());
  /* 115f1a31 je 0x115f1aa6 */
  if (C.zf) goto L_115f1aa6;
  /* 115f1a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1a35 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1a37u);
  /* 115f1a37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1a39 pop ecx */
  ECX = (pop32());
  /* 115f1a3a je 0x115f1aa6 */
  if (C.zf) goto L_115f1aa6;
  /* 115f1a3c push 0xb */
  push32((uint32_t)(0xbu));
  /* 115f1a3e call ebp */
  call_ind((uint32_t)(EBP), 0x115f1a40u);
  /* 115f1a40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1a42 pop ecx */
  ECX = (pop32());
  /* 115f1a43 je 0x115f1aa6 */
  if (C.zf) goto L_115f1aa6;
  /* 115f1a45 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1a4a push 0x115f7708 */
  push32((uint32_t)(0x115f7708u));
  /* 115f1a4f call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1a55u);
  /* 115f1a55 pop ecx */
  ECX = (pop32());
  /* 115f1a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1a58 pop ecx */
  ECX = (pop32());
  /* 115f1a59 jle 0x115f1aa6 */
  if ((C.zf||C.sf!=C.of)) goto L_115f1aa6;
  /* 115f1a5b cmp dword ptr [0x115f7788], 3 */
  { uint32_t _a=(r32((uint32_t)(0x115f7788))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1a62 jge 0x115f1aa6 */
  if ((C.sf==C.of)) goto L_115f1aa6;
  /* 115f1a64 push 0x115f726c */
  push32((uint32_t)(0x115f726cu));
  /* 115f1a69 call dword ptr [0x115f60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e8))), 0x115f1a6fu);
  /* 115f1a6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1a71 pop ecx */
  ECX = (pop32());
  /* 115f1a72 je 0x115f1a9b */
  if (C.zf) goto L_115f1a9b;
  /* 115f1a74 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1a75 push 0x115f76a8 */
  push32((uint32_t)(0x115f76a8u));
  /* 115f1a7a call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1a80u);
  /* 115f1a80 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1a81 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1a83 call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1a89u);
  /* 115f1a89 inc dword ptr [0x115f7788] */
  { uint32_t _r=(r32((uint32_t)(0x115f7788)))+1; w32((uint32_t)(0x115f7788), (_r)); fl_inc(_r,32); }
  /* 115f1a8f push ebx */
  push32((uint32_t)(EBX));
  /* 115f1a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1a92 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1a98u);
  /* 115f1a98 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1a9b:;
  /* 115f1a9b push ebx */
  push32((uint32_t)(EBX));
  /* 115f1a9c push 0xb */
  push32((uint32_t)(0xbu));
  /* 115f1a9e call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1aa4u);
  /* 115f1aa4 pop ecx */
  ECX = (pop32());
  /* 115f1aa5 pop ecx */
  ECX = (pop32());
L_115f1aa6:;
  /* 115f1aa6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1aa8 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1aaau);
  /* 115f1aaa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1aac pop ecx */
  ECX = (pop32());
  /* 115f1aad jne 0x115f1ae3 */
  if (!C.zf) goto L_115f1ae3;
  /* 115f1aaf push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1ab1 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1ab3u);
  /* 115f1ab3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1ab5 pop ecx */
  ECX = (pop32());
  /* 115f1ab6 je 0x115f1ae3 */
  if (C.zf) goto L_115f1ae3;
  /* 115f1ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1aba call ebp */
  call_ind((uint32_t)(EBP), 0x115f1abcu);
  /* 115f1abc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1abe pop ecx */
  ECX = (pop32());
  /* 115f1abf je 0x115f1ae3 */
  if (C.zf) goto L_115f1ae3;
  /* 115f1ac1 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1ac6 push 0x115f7708 */
  push32((uint32_t)(0x115f7708u));
  /* 115f1acb call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1ad1u);
  /* 115f1ad1 pop ecx */
  ECX = (pop32());
  /* 115f1ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1ad4 pop ecx */
  ECX = (pop32());
  /* 115f1ad5 jne 0x115f1ae3 */
  if (!C.zf) goto L_115f1ae3;
  /* 115f1ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1ad9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115f1adb call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1ae1u);
  /* 115f1ae1 pop ecx */
  ECX = (pop32());
  /* 115f1ae2 pop ecx */
  ECX = (pop32());
L_115f1ae3:;
  /* 115f1ae3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1ae5 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1ae7u);
  /* 115f1ae7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1ae9 pop ecx */
  ECX = (pop32());
  /* 115f1aea jne 0x115f1b5f */
  if (!C.zf) goto L_115f1b5f;
  /* 115f1aec push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1aee call ebp */
  call_ind((uint32_t)(EBP), 0x115f1af0u);
  /* 115f1af0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1af2 pop ecx */
  ECX = (pop32());
  /* 115f1af3 je 0x115f1b5f */
  if (C.zf) goto L_115f1b5f;
  /* 115f1af5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115f1af7 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1af9u);
  /* 115f1af9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1afb pop ecx */
  ECX = (pop32());
  /* 115f1afc je 0x115f1b5f */
  if (C.zf) goto L_115f1b5f;
  /* 115f1afe push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1b03 push 0x115f7710 */
  push32((uint32_t)(0x115f7710u));
  /* 115f1b08 call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1b0eu);
  /* 115f1b0e pop ecx */
  ECX = (pop32());
  /* 115f1b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1b11 pop ecx */
  ECX = (pop32());
  /* 115f1b12 jle 0x115f1b5f */
  if ((C.zf||C.sf!=C.of)) goto L_115f1b5f;
  /* 115f1b14 cmp dword ptr [0x115f7788], 3 */
  { uint32_t _a=(r32((uint32_t)(0x115f7788))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1b1b jge 0x115f1b5f */
  if ((C.sf==C.of)) goto L_115f1b5f;
  /* 115f1b1d push 0x115f726c */
  push32((uint32_t)(0x115f726cu));
  /* 115f1b22 call dword ptr [0x115f60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e8))), 0x115f1b28u);
  /* 115f1b28 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1b2a pop ecx */
  ECX = (pop32());
  /* 115f1b2b je 0x115f1b54 */
  if (C.zf) goto L_115f1b54;
  /* 115f1b2d push ebx */
  push32((uint32_t)(EBX));
  /* 115f1b2e push 0x115f76b0 */
  push32((uint32_t)(0x115f76b0u));
  /* 115f1b33 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1b39u);
  /* 115f1b39 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1b3a push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1b3c call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1b42u);
  /* 115f1b42 inc dword ptr [0x115f7788] */
  { uint32_t _r=(r32((uint32_t)(0x115f7788)))+1; w32((uint32_t)(0x115f7788), (_r)); fl_inc(_r,32); }
  /* 115f1b48 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1b49 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1b4b call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1b51u);
  /* 115f1b51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1b54:;
  /* 115f1b54 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1b55 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115f1b57 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1b5du);
  /* 115f1b5d pop ecx */
  ECX = (pop32());
  /* 115f1b5e pop ecx */
  ECX = (pop32());
L_115f1b5f:;
  /* 115f1b5f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1b61 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1b63u);
  /* 115f1b63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1b65 pop ecx */
  ECX = (pop32());
  /* 115f1b66 jne 0x115f1b9c */
  if (!C.zf) goto L_115f1b9c;
  /* 115f1b68 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1b6a call ebp */
  call_ind((uint32_t)(EBP), 0x115f1b6cu);
  /* 115f1b6c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1b6e pop ecx */
  ECX = (pop32());
  /* 115f1b6f je 0x115f1b9c */
  if (C.zf) goto L_115f1b9c;
  /* 115f1b71 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1b73 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1b75u);
  /* 115f1b75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1b77 pop ecx */
  ECX = (pop32());
  /* 115f1b78 je 0x115f1b9c */
  if (C.zf) goto L_115f1b9c;
  /* 115f1b7a push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1b7f push 0x115f7710 */
  push32((uint32_t)(0x115f7710u));
  /* 115f1b84 call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1b8au);
  /* 115f1b8a pop ecx */
  ECX = (pop32());
  /* 115f1b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1b8d pop ecx */
  ECX = (pop32());
  /* 115f1b8e jne 0x115f1b9c */
  if (!C.zf) goto L_115f1b9c;
  /* 115f1b90 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1b92 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115f1b94 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1b9au);
  /* 115f1b9a pop ecx */
  ECX = (pop32());
  /* 115f1b9b pop ecx */
  ECX = (pop32());
L_115f1b9c:;
  /* 115f1b9c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1b9e call ebp */
  call_ind((uint32_t)(EBP), 0x115f1ba0u);
  /* 115f1ba0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1ba2 pop ecx */
  ECX = (pop32());
  /* 115f1ba3 jne 0x115f1c21 */
  if (!C.zf) goto L_115f1c21;
  /* 115f1ba5 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1ba7 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1ba9u);
  /* 115f1ba9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1bab pop ecx */
  ECX = (pop32());
  /* 115f1bac je 0x115f1c21 */
  if (C.zf) goto L_115f1c21;
  /* 115f1bae push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1bb0 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1bb2u);
  /* 115f1bb2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1bb4 pop ecx */
  ECX = (pop32());
  /* 115f1bb5 je 0x115f1c21 */
  if (C.zf) goto L_115f1c21;
  /* 115f1bb7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115f1bb9 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1bbbu);
  /* 115f1bbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1bbd pop ecx */
  ECX = (pop32());
  /* 115f1bbe je 0x115f1c21 */
  if (C.zf) goto L_115f1c21;
  /* 115f1bc0 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1bc5 push 0x115f7720 */
  push32((uint32_t)(0x115f7720u));
  /* 115f1bca call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1bd0u);
  /* 115f1bd0 pop ecx */
  ECX = (pop32());
  /* 115f1bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1bd3 pop ecx */
  ECX = (pop32());
  /* 115f1bd4 jle 0x115f1c21 */
  if ((C.zf||C.sf!=C.of)) goto L_115f1c21;
  /* 115f1bd6 cmp dword ptr [0x115f7788], 3 */
  { uint32_t _a=(r32((uint32_t)(0x115f7788))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1bdd jge 0x115f1c21 */
  if ((C.sf==C.of)) goto L_115f1c21;
  /* 115f1bdf push 0x115f726c */
  push32((uint32_t)(0x115f726cu));
  /* 115f1be4 call dword ptr [0x115f60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e8))), 0x115f1beau);
  /* 115f1bea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1bec pop ecx */
  ECX = (pop32());
  /* 115f1bed je 0x115f1c16 */
  if (C.zf) goto L_115f1c16;
  /* 115f1bef push ebx */
  push32((uint32_t)(EBX));
  /* 115f1bf0 push 0x115f76b8 */
  push32((uint32_t)(0x115f76b8u));
  /* 115f1bf5 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1bfbu);
  /* 115f1bfb push ebx */
  push32((uint32_t)(EBX));
  /* 115f1bfc push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1bfe call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1c04u);
  /* 115f1c04 inc dword ptr [0x115f7788] */
  { uint32_t _r=(r32((uint32_t)(0x115f7788)))+1; w32((uint32_t)(0x115f7788), (_r)); fl_inc(_r,32); }
  /* 115f1c0a push ebx */
  push32((uint32_t)(EBX));
  /* 115f1c0b push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1c0d call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1c13u);
  /* 115f1c13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1c16:;
  /* 115f1c16 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1c17 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115f1c19 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1c1fu);
  /* 115f1c1f pop ecx */
  ECX = (pop32());
  /* 115f1c20 pop ecx */
  ECX = (pop32());
L_115f1c21:;
  /* 115f1c21 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1c23 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c25u);
  /* 115f1c25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c27 pop ecx */
  ECX = (pop32());
  /* 115f1c28 jne 0x115f1c5e */
  if (!C.zf) goto L_115f1c5e;
  /* 115f1c2a push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1c2c call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c2eu);
  /* 115f1c2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c30 pop ecx */
  ECX = (pop32());
  /* 115f1c31 je 0x115f1c5e */
  if (C.zf) goto L_115f1c5e;
  /* 115f1c33 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1c35 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c37u);
  /* 115f1c37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c39 pop ecx */
  ECX = (pop32());
  /* 115f1c3a je 0x115f1c5e */
  if (C.zf) goto L_115f1c5e;
  /* 115f1c3c push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1c41 push 0x115f7720 */
  push32((uint32_t)(0x115f7720u));
  /* 115f1c46 call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1c4cu);
  /* 115f1c4c pop ecx */
  ECX = (pop32());
  /* 115f1c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1c4f pop ecx */
  ECX = (pop32());
  /* 115f1c50 jne 0x115f1c5e */
  if (!C.zf) goto L_115f1c5e;
  /* 115f1c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1c54 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115f1c56 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1c5cu);
  /* 115f1c5c pop ecx */
  ECX = (pop32());
  /* 115f1c5d pop ecx */
  ECX = (pop32());
L_115f1c5e:;
  /* 115f1c5e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1c60 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c62u);
  /* 115f1c62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c64 pop ecx */
  ECX = (pop32());
  /* 115f1c65 jne 0x115f1ce3 */
  if (!C.zf) goto L_115f1ce3;
  /* 115f1c67 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1c69 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c6bu);
  /* 115f1c6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c6d pop ecx */
  ECX = (pop32());
  /* 115f1c6e je 0x115f1ce3 */
  if (C.zf) goto L_115f1ce3;
  /* 115f1c70 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1c72 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c74u);
  /* 115f1c74 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c76 pop ecx */
  ECX = (pop32());
  /* 115f1c77 je 0x115f1ce3 */
  if (C.zf) goto L_115f1ce3;
  /* 115f1c79 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115f1c7b call ebp */
  call_ind((uint32_t)(EBP), 0x115f1c7du);
  /* 115f1c7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1c7f pop ecx */
  ECX = (pop32());
  /* 115f1c80 je 0x115f1ce3 */
  if (C.zf) goto L_115f1ce3;
  /* 115f1c82 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1c87 push 0x115f7728 */
  push32((uint32_t)(0x115f7728u));
  /* 115f1c8c call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1c92u);
  /* 115f1c92 pop ecx */
  ECX = (pop32());
  /* 115f1c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1c95 pop ecx */
  ECX = (pop32());
  /* 115f1c96 jle 0x115f1ce3 */
  if ((C.zf||C.sf!=C.of)) goto L_115f1ce3;
  /* 115f1c98 cmp dword ptr [0x115f7788], 3 */
  { uint32_t _a=(r32((uint32_t)(0x115f7788))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1c9f jge 0x115f1ce3 */
  if ((C.sf==C.of)) goto L_115f1ce3;
  /* 115f1ca1 push 0x115f726c */
  push32((uint32_t)(0x115f726cu));
  /* 115f1ca6 call dword ptr [0x115f60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e8))), 0x115f1cacu);
  /* 115f1cac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1cae pop ecx */
  ECX = (pop32());
  /* 115f1caf je 0x115f1cd8 */
  if (C.zf) goto L_115f1cd8;
  /* 115f1cb1 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1cb2 push 0x115f76c0 */
  push32((uint32_t)(0x115f76c0u));
  /* 115f1cb7 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1cbdu);
  /* 115f1cbd push ebx */
  push32((uint32_t)(EBX));
  /* 115f1cbe push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1cc0 call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1cc6u);
  /* 115f1cc6 inc dword ptr [0x115f7788] */
  { uint32_t _r=(r32((uint32_t)(0x115f7788)))+1; w32((uint32_t)(0x115f7788), (_r)); fl_inc(_r,32); }
  /* 115f1ccc push ebx */
  push32((uint32_t)(EBX));
  /* 115f1ccd push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1ccf call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1cd5u);
  /* 115f1cd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1cd8:;
  /* 115f1cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1cd9 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115f1cdb call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1ce1u);
  /* 115f1ce1 pop ecx */
  ECX = (pop32());
  /* 115f1ce2 pop ecx */
  ECX = (pop32());
L_115f1ce3:;
  /* 115f1ce3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1ce5 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1ce7u);
  /* 115f1ce7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1ce9 pop ecx */
  ECX = (pop32());
  /* 115f1cea jne 0x115f1d20 */
  if (!C.zf) goto L_115f1d20;
  /* 115f1cec push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1cee call ebp */
  call_ind((uint32_t)(EBP), 0x115f1cf0u);
  /* 115f1cf0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1cf2 pop ecx */
  ECX = (pop32());
  /* 115f1cf3 je 0x115f1d20 */
  if (C.zf) goto L_115f1d20;
  /* 115f1cf5 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1cf7 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1cf9u);
  /* 115f1cf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1cfb pop ecx */
  ECX = (pop32());
  /* 115f1cfc je 0x115f1d20 */
  if (C.zf) goto L_115f1d20;
  /* 115f1cfe push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1d03 push 0x115f7728 */
  push32((uint32_t)(0x115f7728u));
  /* 115f1d08 call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1d0eu);
  /* 115f1d0e pop ecx */
  ECX = (pop32());
  /* 115f1d0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1d11 pop ecx */
  ECX = (pop32());
  /* 115f1d12 jne 0x115f1d20 */
  if (!C.zf) goto L_115f1d20;
  /* 115f1d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1d16 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115f1d18 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1d1eu);
  /* 115f1d1e pop ecx */
  ECX = (pop32());
  /* 115f1d1f pop ecx */
  ECX = (pop32());
L_115f1d20:;
  /* 115f1d20 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1d22 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1d24u);
  /* 115f1d24 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1d26 pop ecx */
  ECX = (pop32());
  /* 115f1d27 jne 0x115f1da5 */
  if (!C.zf) goto L_115f1da5;
  /* 115f1d29 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1d2b call ebp */
  call_ind((uint32_t)(EBP), 0x115f1d2du);
  /* 115f1d2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1d2f pop ecx */
  ECX = (pop32());
  /* 115f1d30 je 0x115f1da5 */
  if (C.zf) goto L_115f1da5;
  /* 115f1d32 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f1d34 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1d36u);
  /* 115f1d36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1d38 pop ecx */
  ECX = (pop32());
  /* 115f1d39 je 0x115f1da5 */
  if (C.zf) goto L_115f1da5;
  /* 115f1d3b push 0xf */
  push32((uint32_t)(0xfu));
  /* 115f1d3d call ebp */
  call_ind((uint32_t)(EBP), 0x115f1d3fu);
  /* 115f1d3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1d41 pop ecx */
  ECX = (pop32());
  /* 115f1d42 je 0x115f1da5 */
  if (C.zf) goto L_115f1da5;
  /* 115f1d44 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1d49 push 0x115f7730 */
  push32((uint32_t)(0x115f7730u));
  /* 115f1d4e call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1d54u);
  /* 115f1d54 pop ecx */
  ECX = (pop32());
  /* 115f1d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1d57 pop ecx */
  ECX = (pop32());
  /* 115f1d58 jle 0x115f1da5 */
  if ((C.zf||C.sf!=C.of)) goto L_115f1da5;
  /* 115f1d5a cmp dword ptr [0x115f7788], 3 */
  { uint32_t _a=(r32((uint32_t)(0x115f7788))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f1d61 jge 0x115f1da5 */
  if ((C.sf==C.of)) goto L_115f1da5;
  /* 115f1d63 push 0x115f726c */
  push32((uint32_t)(0x115f726cu));
  /* 115f1d68 call dword ptr [0x115f60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e8))), 0x115f1d6eu);
  /* 115f1d6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1d70 pop ecx */
  ECX = (pop32());
  /* 115f1d71 je 0x115f1d9a */
  if (C.zf) goto L_115f1d9a;
  /* 115f1d73 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1d74 push 0x115f76c8 */
  push32((uint32_t)(0x115f76c8u));
  /* 115f1d79 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1d7fu);
  /* 115f1d7f push ebx */
  push32((uint32_t)(EBX));
  /* 115f1d80 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1d82 call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1d88u);
  /* 115f1d88 inc dword ptr [0x115f7788] */
  { uint32_t _r=(r32((uint32_t)(0x115f7788)))+1; w32((uint32_t)(0x115f7788), (_r)); fl_inc(_r,32); }
  /* 115f1d8e push ebx */
  push32((uint32_t)(EBX));
  /* 115f1d8f push 5 */
  push32((uint32_t)(0x5u));
  /* 115f1d91 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1d97u);
  /* 115f1d97 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1d9a:;
  /* 115f1d9a push ebx */
  push32((uint32_t)(EBX));
  /* 115f1d9b push 0xf */
  push32((uint32_t)(0xfu));
  /* 115f1d9d call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1da3u);
  /* 115f1da3 pop ecx */
  ECX = (pop32());
  /* 115f1da4 pop ecx */
  ECX = (pop32());
L_115f1da5:;
  /* 115f1da5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1da7 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1da9u);
  /* 115f1da9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1dab pop ecx */
  ECX = (pop32());
  /* 115f1dac jne 0x115f1de2 */
  if (!C.zf) goto L_115f1de2;
  /* 115f1dae push 9 */
  push32((uint32_t)(0x9u));
  /* 115f1db0 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1db2u);
  /* 115f1db2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1db4 pop ecx */
  ECX = (pop32());
  /* 115f1db5 je 0x115f1de2 */
  if (C.zf) goto L_115f1de2;
  /* 115f1db7 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f1db9 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1dbbu);
  /* 115f1dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1dbd pop ecx */
  ECX = (pop32());
  /* 115f1dbe je 0x115f1de2 */
  if (C.zf) goto L_115f1de2;
  /* 115f1dc0 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1dc5 push 0x115f7730 */
  push32((uint32_t)(0x115f7730u));
  /* 115f1dca call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1dd0u);
  /* 115f1dd0 pop ecx */
  ECX = (pop32());
  /* 115f1dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1dd3 pop ecx */
  ECX = (pop32());
  /* 115f1dd4 jne 0x115f1de2 */
  if (!C.zf) goto L_115f1de2;
  /* 115f1dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f1dd8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 115f1dda call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1de0u);
  /* 115f1de0 pop ecx */
  ECX = (pop32());
  /* 115f1de1 pop ecx */
  ECX = (pop32());
L_115f1de2:;
  /* 115f1de2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115f1de4 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1de6u);
  /* 115f1de6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1de8 pop ecx */
  ECX = (pop32());
  /* 115f1de9 jne 0x115f1e49 */
  if (!C.zf) goto L_115f1e49;
  /* 115f1deb push 6 */
  push32((uint32_t)(0x6u));
  /* 115f1ded call ebp */
  call_ind((uint32_t)(EBP), 0x115f1defu);
  /* 115f1def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1df1 pop ecx */
  ECX = (pop32());
  /* 115f1df2 je 0x115f1e49 */
  if (C.zf) goto L_115f1e49;
  /* 115f1df4 push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f1df9 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f1dfe call dword ptr [0x115f60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60ec))), 0x115f1e04u);
  /* 115f1e04 pop ecx */
  ECX = (pop32());
  /* 115f1e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f1e07 pop ecx */
  ECX = (pop32());
  /* 115f1e08 jle 0x115f1e49 */
  if ((C.zf||C.sf!=C.of)) goto L_115f1e49;
  /* 115f1e0a push ebx */
  push32((uint32_t)(EBX));
  /* 115f1e0b push 0x115f76d0 */
  push32((uint32_t)(0x115f76d0u));
  /* 115f1e10 call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f1e16u);
  /* 115f1e16 push ebx */
  push32((uint32_t)(EBX));
  /* 115f1e17 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1e19 call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f1e1fu);
  /* 115f1e1f push 0x115f77f8 */
  push32((uint32_t)(0x115f77f8u));
  /* 115f1e24 push 0x115f76d8 */
  push32((uint32_t)(0x115f76d8u));
  /* 115f1e29 call 0x115f108e */
  push32(0x115f1e2eu); f_115f108e();
  /* 115f1e2e push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f1e33 push 0x115f76d8 */
  push32((uint32_t)(0x115f76d8u));
  /* 115f1e38 call 0x115f108e */
  push32(0x115f1e3du); f_115f108e();
  /* 115f1e3d push ebx */
  push32((uint32_t)(EBX));
  /* 115f1e3e push 6 */
  push32((uint32_t)(0x6u));
  /* 115f1e40 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1e46u);
  /* 115f1e46 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1e49:;
  /* 115f1e49 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115f1e4b call ebp */
  call_ind((uint32_t)(EBP), 0x115f1e4du);
  /* 115f1e4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1e4f pop ecx */
  ECX = (pop32());
  /* 115f1e50 jne 0x115f1fa4 */
  if (!C.zf) goto L_115f1fa4;
  /* 115f1e56 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115f1e58 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1e5au);
  /* 115f1e5a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1e5c pop ecx */
  ECX = (pop32());
  /* 115f1e5d je 0x115f1fa4 */
  if (C.zf) goto L_115f1fa4;
  /* 115f1e63 push 6 */
  push32((uint32_t)(0x6u));
  /* 115f1e65 call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f1e6bu);
  /* 115f1e6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1e6d pop ecx */
  ECX = (pop32());
  /* 115f1e6e je 0x115f1fa4 */
  if (C.zf) goto L_115f1fa4;
  /* 115f1e74 push 7 */
  push32((uint32_t)(0x7u));
  /* 115f1e76 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1e78u);
  /* 115f1e78 pop ecx */
  ECX = (pop32());
  /* 115f1e79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1e7b push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1e7d push 0x115f77f8 */
  push32((uint32_t)(0x115f77f8u));
  /* 115f1e82 je 0x115f1efb */
  if (C.zf) goto L_115f1efb;
  /* 115f1e84 push 0x115f77c8 */
  push32((uint32_t)(0x115f77c8u));
  /* 115f1e89 push 0x115f76e0 */
  push32((uint32_t)(0x115f76e0u));
  /* 115f1e8e call 0x115f10bc */
  push32(0x115f1e93u); f_115f10bc();
  /* 115f1e93 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1e95 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1e97u);
  /* 115f1e97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1e9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1e9c je 0x115f1eaf */
  if (C.zf) goto L_115f1eaf;
  /* 115f1e9e push 0x115f7808 */
  push32((uint32_t)(0x115f7808u));
  /* 115f1ea3 push 0x115f76e0 */
  push32((uint32_t)(0x115f76e0u));
  /* 115f1ea8 call 0x115f108e */
  push32(0x115f1eadu); f_115f108e();
  /* 115f1ead pop ecx */
  ECX = (pop32());
  /* 115f1eae pop ecx */
  ECX = (pop32());
L_115f1eaf:;
  /* 115f1eaf push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1eb4 push 0x115f76e0 */
  push32((uint32_t)(0x115f76e0u));
  /* 115f1eb9 call 0x115f108e */
  push32(0x115f1ebeu); f_115f108e();
  /* 115f1ebe push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1ec0 push 0x115f77f8 */
  push32((uint32_t)(0x115f77f8u));
  /* 115f1ec5 push 0x115f77c8 */
  push32((uint32_t)(0x115f77c8u));
  /* 115f1eca push 0x115f76e0 */
  push32((uint32_t)(0x115f76e0u));
  /* 115f1ecf call 0x115f10bc */
  push32(0x115f1ed4u); f_115f10bc();
  /* 115f1ed4 push 0x115f7810 */
  push32((uint32_t)(0x115f7810u));
  /* 115f1ed9 push 0x115f76e0 */
  push32((uint32_t)(0x115f76e0u));
  /* 115f1ede call 0x115f1030 */
  push32(0x115f1ee3u); f_115f1030();
  /* 115f1ee3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1ee8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f1eea push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1eef push 0x115f7820 */
  push32((uint32_t)(0x115f7820u));
  /* 115f1ef4 push 0x115f76e0 */
  push32((uint32_t)(0x115f76e0u));
  /* 115f1ef9 jmp 0x115f1f70 */
  goto L_115f1f70;
L_115f1efb:;
  /* 115f1efb push 0x115f7660 */
  push32((uint32_t)(0x115f7660u));
  /* 115f1f00 push 0x115f76f8 */
  push32((uint32_t)(0x115f76f8u));
  /* 115f1f05 call 0x115f10bc */
  push32(0x115f1f0au); f_115f10bc();
  /* 115f1f0a push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1f0c call ebp */
  call_ind((uint32_t)(EBP), 0x115f1f0eu);
  /* 115f1f0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1f11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1f13 je 0x115f1f26 */
  if (C.zf) goto L_115f1f26;
  /* 115f1f15 push 0x115f7808 */
  push32((uint32_t)(0x115f7808u));
  /* 115f1f1a push 0x115f76f8 */
  push32((uint32_t)(0x115f76f8u));
  /* 115f1f1f call 0x115f108e */
  push32(0x115f1f24u); f_115f108e();
  /* 115f1f24 pop ecx */
  ECX = (pop32());
  /* 115f1f25 pop ecx */
  ECX = (pop32());
L_115f1f26:;
  /* 115f1f26 push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1f2b push 0x115f76f8 */
  push32((uint32_t)(0x115f76f8u));
  /* 115f1f30 call 0x115f108e */
  push32(0x115f1f35u); f_115f108e();
  /* 115f1f35 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f1f37 push 0x115f77f8 */
  push32((uint32_t)(0x115f77f8u));
  /* 115f1f3c push 0x115f77c8 */
  push32((uint32_t)(0x115f77c8u));
  /* 115f1f41 push 0x115f76f8 */
  push32((uint32_t)(0x115f76f8u));
  /* 115f1f46 call 0x115f10bc */
  push32(0x115f1f4bu); f_115f10bc();
  /* 115f1f4b push 0x115f7810 */
  push32((uint32_t)(0x115f7810u));
  /* 115f1f50 push 0x115f76f8 */
  push32((uint32_t)(0x115f76f8u));
  /* 115f1f55 call 0x115f1030 */
  push32(0x115f1f5au); f_115f1030();
  /* 115f1f5a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 115f1f5f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f1f61 push 0x115f7790 */
  push32((uint32_t)(0x115f7790u));
  /* 115f1f66 push 0x115f7820 */
  push32((uint32_t)(0x115f7820u));
  /* 115f1f6b push 0x115f76f8 */
  push32((uint32_t)(0x115f76f8u));
L_115f1f70:;
  /* 115f1f70 call 0x115f1030 */
  push32(0x115f1f75u); f_115f1030();
  /* 115f1f75 pop ecx */
  ECX = (pop32());
  /* 115f1f76 pop ecx */
  ECX = (pop32());
  /* 115f1f77 push eax */
  push32((uint32_t)(EAX));
  /* 115f1f78 call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f1f7eu);
  /* 115f1f7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f1f81 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 115f1f86 push 6 */
  push32((uint32_t)(0x6u));
  /* 115f1f88 call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f1f8eu);
  /* 115f1f8e push 7 */
  push32((uint32_t)(0x7u));
  /* 115f1f90 call ebp */
  call_ind((uint32_t)(EBP), 0x115f1f92u);
  /* 115f1f92 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 115f1f94 sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115f1f96 inc al */
  { uint32_t _r=(AL)+1; AL = (_r); fl_inc(_r,8); }
  /* 115f1f98 push eax */
  push32((uint32_t)(EAX));
  /* 115f1f99 push 7 */
  push32((uint32_t)(0x7u));
  /* 115f1f9b call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f1fa1u);
  /* 115f1fa1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f1fa4:;
  /* 115f1fa4 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1fa6 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f1facu);
  /* 115f1fac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1fae pop ecx */
  ECX = (pop32());
  /* 115f1faf mov ebp, 0x115f7658 */
  EBP = (0x115f7658u);
  /* 115f1fb4 je 0x115f2186 */
  if (C.zf) goto L_115f2186;
  /* 115f1fba push 8 */
  push32((uint32_t)(0x8u));
  /* 115f1fbc call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f1fc2u);
  /* 115f1fc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f1fc4 pop ecx */
  ECX = (pop32());
  /* 115f1fc5 je 0x115f2186 */
  if (C.zf) goto L_115f2186;
  /* 115f1fcb mov dword ptr [esp + 0x10], 5 */
  w32((uint32_t)(ESP + 0x10), (0x5u));
L_115f1fd3:;
  /* 115f1fd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1fd5 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f1fda push 0x115f77c0 */
  push32((uint32_t)(0x115f77c0u));
  /* 115f1fdf push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f1fe4 call 0x115f10bc */
  push32(0x115f1fe9u); f_115f10bc();
  /* 115f1fe9 push ebp */
  push32((uint32_t)(EBP));
  /* 115f1fea push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f1fef call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f1ff5u);
  /* 115f1ff5 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f1ff7 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f1ffc push 0x115f7650 */
  push32((uint32_t)(0x115f7650u));
  /* 115f2001 push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2006 call 0x115f10e0 */
  push32(0x115f200bu); f_115f10e0();
  /* 115f200b push ebp */
  push32((uint32_t)(EBP));
  /* 115f200c push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2011 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f2017u);
  /* 115f2017 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f201a dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 115f201e jne 0x115f1fd3 */
  if (!C.zf) goto L_115f1fd3;
  /* 115f2020 mov dword ptr [esp + 0x10], 2 */
  w32((uint32_t)(ESP + 0x10), (0x2u));
L_115f2028:;
  /* 115f2028 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f202a push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f202f push 0x115f77b0 */
  push32((uint32_t)(0x115f77b0u));
  /* 115f2034 push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2039 call 0x115f10bc */
  push32(0x115f203eu); f_115f10bc();
  /* 115f203e push ebp */
  push32((uint32_t)(EBP));
  /* 115f203f push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2044 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f204au);
  /* 115f204a push 4 */
  push32((uint32_t)(0x4u));
  /* 115f204c push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2051 push 0x115f7868 */
  push32((uint32_t)(0x115f7868u));
  /* 115f2056 push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f205b call 0x115f10bc */
  push32(0x115f2060u); f_115f10bc();
  /* 115f2060 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2061 push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2066 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f206cu);
  /* 115f206c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f206f dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 115f2073 jne 0x115f2028 */
  if (!C.zf) goto L_115f2028;
  /* 115f2075 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f2077 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f207c push 0x115f7770 */
  push32((uint32_t)(0x115f7770u));
  /* 115f2081 push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2086 call 0x115f10bc */
  push32(0x115f208bu); f_115f10bc();
  /* 115f208b push ebp */
  push32((uint32_t)(EBP));
  /* 115f208c push 0x115f7780 */
  push32((uint32_t)(0x115f7780u));
  /* 115f2091 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f2097u);
  /* 115f2097 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f209c push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f20a1 push ebp */
  push32((uint32_t)(EBP));
  /* 115f20a2 call 0x115f105e */
  push32(0x115f20a7u); f_115f105e();
  /* 115f20a7 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f20ac push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f20b1 push 0x115f76a8 */
  push32((uint32_t)(0x115f76a8u));
  /* 115f20b6 call 0x115f105e */
  push32(0x115f20bbu); f_115f105e();
  /* 115f20bb push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f20c0 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f20c5 push 0x115f76b0 */
  push32((uint32_t)(0x115f76b0u));
  /* 115f20ca call 0x115f105e */
  push32(0x115f20cfu); f_115f105e();
  /* 115f20cf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f20d4 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f20d9 push 0x115f76b8 */
  push32((uint32_t)(0x115f76b8u));
  /* 115f20de call 0x115f105e */
  push32(0x115f20e3u); f_115f105e();
  /* 115f20e3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f20e6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f20eb push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f20f0 push 0x115f76c0 */
  push32((uint32_t)(0x115f76c0u));
  /* 115f20f5 call 0x115f105e */
  push32(0x115f20fau); f_115f105e();
  /* 115f20fa push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f20ff push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f2104 push 0x115f76c8 */
  push32((uint32_t)(0x115f76c8u));
  /* 115f2109 call 0x115f105e */
  push32(0x115f210eu); f_115f105e();
  /* 115f210e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f2113 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f2118 push 0x115f7698 */
  push32((uint32_t)(0x115f7698u));
  /* 115f211d call 0x115f105e */
  push32(0x115f2122u); f_115f105e();
  /* 115f2122 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2123 push 0x115f76a8 */
  push32((uint32_t)(0x115f76a8u));
  /* 115f2128 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f212eu);
  /* 115f212e push ebp */
  push32((uint32_t)(EBP));
  /* 115f212f push 0x115f76c0 */
  push32((uint32_t)(0x115f76c0u));
  /* 115f2134 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f213au);
  /* 115f213a push ebp */
  push32((uint32_t)(EBP));
  /* 115f213b push 0x115f76b0 */
  push32((uint32_t)(0x115f76b0u));
  /* 115f2140 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f2146u);
  /* 115f2146 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2147 push 0x115f76c8 */
  push32((uint32_t)(0x115f76c8u));
  /* 115f214c call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f2152u);
  /* 115f2152 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2155 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2156 push 0x115f76b8 */
  push32((uint32_t)(0x115f76b8u));
  /* 115f215b call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f2161u);
  /* 115f2161 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2162 push 0x115f7698 */
  push32((uint32_t)(0x115f7698u));
  /* 115f2167 call dword ptr [0x115f60c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c4))), 0x115f216du);
  /* 115f216d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 115f2172 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f2174 call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f217au);
  /* 115f217a push ebx */
  push32((uint32_t)(EBX));
  /* 115f217b push 8 */
  push32((uint32_t)(0x8u));
  /* 115f217d call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f2183u);
  /* 115f2183 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f2186:;
  /* 115f2186 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f2188 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f218eu);
  /* 115f218e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f2190 pop ecx */
  ECX = (pop32());
  /* 115f2191 jne 0x115f2202 */
  if (!C.zf) goto L_115f2202;
  /* 115f2193 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f2195 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f219bu);
  /* 115f219b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f219d pop ecx */
  ECX = (pop32());
  /* 115f219e je 0x115f2202 */
  if (C.zf) goto L_115f2202;
  /* 115f21a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f21a2 call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f21a8u);
  /* 115f21a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f21aa pop ecx */
  ECX = (pop32());
  /* 115f21ab je 0x115f2202 */
  if (C.zf) goto L_115f2202;
  /* 115f21ad push 0x115f7264 */
  push32((uint32_t)(0x115f7264u));
  /* 115f21b2 call dword ptr [0x115f60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d8))), 0x115f21b8u);
  /* 115f21b8 push ebx */
  push32((uint32_t)(EBX));
  /* 115f21b9 push ebp */
  push32((uint32_t)(EBP));
  /* 115f21ba call dword ptr [0x115f6158] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6158))), 0x115f21c0u);
  /* 115f21c0 push ebx */
  push32((uint32_t)(EBX));
  /* 115f21c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f21c3 call dword ptr [0x115f60c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60c0))), 0x115f21c9u);
  /* 115f21c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f21cb call dword ptr [0x115f60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60f0))), 0x115f21d1u);
  /* 115f21d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f21d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f21d5 push 0x115f7748 */
  push32((uint32_t)(0x115f7748u));
  /* 115f21da call dword ptr [0x115f60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60dc))), 0x115f21e0u);
  /* 115f21e0 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115f21e2 call dword ptr [0x115f60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60bc))), 0x115f21e8u);
  /* 115f21e8 mov ebp, dword ptr [0x115f60cc] */
  EBP = (r32((uint32_t)(0x115f60cc)));
  /* 115f21ee push 0x45 */
  push32((uint32_t)(0x45u));
  /* 115f21f0 call ebp */
  call_ind((uint32_t)(EBP), 0x115f21f2u);
  /* 115f21f2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 115f21f4 call ebp */
  call_ind((uint32_t)(EBP), 0x115f21f6u);
  /* 115f21f6 push ebx */
  push32((uint32_t)(EBX));
  /* 115f21f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f21f9 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f21ffu);
  /* 115f21ff add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f2202:;
  /* 115f2202 mov ebp, dword ptr [0x115f6140] */
  EBP = (r32((uint32_t)(0x115f6140)));
  /* 115f2208 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f220a call ebp */
  call_ind((uint32_t)(EBP), 0x115f220cu);
  /* 115f220c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f220e pop ecx */
  ECX = (pop32());
  /* 115f220f jne 0x115f2521 */
  if (!C.zf) goto L_115f2521;
  /* 115f2215 push 0xa */
  push32((uint32_t)(0xau));
  /* 115f2217 call ebp */
  call_ind((uint32_t)(EBP), 0x115f2219u);
  /* 115f2219 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f221b pop ecx */
  ECX = (pop32());
  /* 115f221c je 0x115f2521 */
  if (C.zf) goto L_115f2521;
  /* 115f2222 mov ebp, dword ptr [0x115f60f8] */
  EBP = (r32((uint32_t)(0x115f60f8)));
  /* 115f2228 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f222a push 0x115f77f0 */
  push32((uint32_t)(0x115f77f0u));
  /* 115f222f call ebp */
  call_ind((uint32_t)(EBP), 0x115f2231u);
  /* 115f2231 mov edx, eax */
  EDX = (EAX);
  /* 115f2233 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f2235 push 0x115f77b8 */
  push32((uint32_t)(0x115f77b8u));
  /* 115f223a mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115f223e call ebp */
  call_ind((uint32_t)(EBP), 0x115f2240u);
  /* 115f2240 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 115f2244 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f2246 push 0x115f77d8 */
  push32((uint32_t)(0x115f77d8u));
  /* 115f224b add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f224d call dword ptr [0x115f60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60f8))), 0x115f2253u);
  /* 115f2253 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2256 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2258 jne 0x115f2521 */
  if (!C.zf) goto L_115f2521;
  /* 115f225e mov dword ptr [esp + 0x10], 5 */
  w32((uint32_t)(ESP + 0x10), (0x5u));
  /* 115f2266 mov ebp, 0x115f7780 */
  EBP = (0x115f7780u);
L_115f226b:;
  /* 115f226b push ebx */
  push32((uint32_t)(EBX));
  /* 115f226c push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2271 push 0x115f77c0 */
  push32((uint32_t)(0x115f77c0u));
  /* 115f2276 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2277 call 0x115f10bc */
  push32(0x115f227cu); f_115f10bc();
  /* 115f227c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f227f mov eax, 0x80 */
  EAX = (0x80u);
  /* 115f2284 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2286 push eax */
  push32((uint32_t)(EAX));
  /* 115f2287 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f228c push eax */
  push32((uint32_t)(EAX));
  /* 115f228d push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2292 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2293 call 0x115f105e */
  push32(0x115f2298u); f_115f105e();
  /* 115f2298 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f229b push eax */
  push32((uint32_t)(EAX));
  /* 115f229c call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f22a2u);
  /* 115f22a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f22a5 dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 115f22a9 jne 0x115f226b */
  if (!C.zf) goto L_115f226b;
  /* 115f22ab mov dword ptr [esp + 0x10], 2 */
  w32((uint32_t)(ESP + 0x10), (0x2u));
L_115f22b3:;
  /* 115f22b3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f22b4 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f22b9 push 0x115f77b0 */
  push32((uint32_t)(0x115f77b0u));
  /* 115f22be push ebp */
  push32((uint32_t)(EBP));
  /* 115f22bf call 0x115f10bc */
  push32(0x115f22c4u); f_115f10bc();
  /* 115f22c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f22c7 mov eax, 0x80 */
  EAX = (0x80u);
  /* 115f22cc push 2 */
  push32((uint32_t)(0x2u));
  /* 115f22ce push eax */
  push32((uint32_t)(EAX));
  /* 115f22cf push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f22d4 push eax */
  push32((uint32_t)(EAX));
  /* 115f22d5 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f22da push ebp */
  push32((uint32_t)(EBP));
  /* 115f22db call 0x115f105e */
  push32(0x115f22e0u); f_115f105e();
  /* 115f22e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f22e3 push eax */
  push32((uint32_t)(EAX));
  /* 115f22e4 call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f22eau);
  /* 115f22ea push ebx */
  push32((uint32_t)(EBX));
  /* 115f22eb push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f22f0 push 0x115f7868 */
  push32((uint32_t)(0x115f7868u));
  /* 115f22f5 push ebp */
  push32((uint32_t)(EBP));
  /* 115f22f6 call 0x115f10bc */
  push32(0x115f22fbu); f_115f10bc();
  /* 115f22fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f22fe mov eax, 0x80 */
  EAX = (0x80u);
  /* 115f2303 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2305 push eax */
  push32((uint32_t)(EAX));
  /* 115f2306 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f230b push eax */
  push32((uint32_t)(EAX));
  /* 115f230c push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2311 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2312 call 0x115f105e */
  push32(0x115f2317u); f_115f105e();
  /* 115f2317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f231a push eax */
  push32((uint32_t)(EAX));
  /* 115f231b call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f2321u);
  /* 115f2321 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2324 dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 115f2328 jne 0x115f22b3 */
  if (!C.zf) goto L_115f22b3;
  /* 115f232a push ebx */
  push32((uint32_t)(EBX));
  /* 115f232b push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2330 push 0x115f7770 */
  push32((uint32_t)(0x115f7770u));
  /* 115f2335 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2336 call 0x115f10bc */
  push32(0x115f233bu); f_115f10bc();
  /* 115f233b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f233e mov eax, 0x80 */
  EAX = (0x80u);
  /* 115f2343 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2345 push eax */
  push32((uint32_t)(EAX));
  /* 115f2346 push 0x115f7828 */
  push32((uint32_t)(0x115f7828u));
  /* 115f234b push eax */
  push32((uint32_t)(EAX));
  /* 115f234c push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2351 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2352 call 0x115f105e */
  push32(0x115f2357u); f_115f105e();
  /* 115f2357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f235a push eax */
  push32((uint32_t)(EAX));
  /* 115f235b call dword ptr [0x115f6148] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6148))), 0x115f2361u);
  /* 115f2361 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2362 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f2367 push 0x115f7778 */
  push32((uint32_t)(0x115f7778u));
  /* 115f236c push ebp */
  push32((uint32_t)(EBP));
  /* 115f236d call 0x115f10bc */
  push32(0x115f2372u); f_115f10bc();
  /* 115f2372 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115f2377 push 0x115f7738 */
  push32((uint32_t)(0x115f7738u));
  /* 115f237c push ebp */
  push32((uint32_t)(EBP));
  /* 115f237d call 0x115f105e */
  push32(0x115f2382u); f_115f105e();
  /* 115f2382 mov ebp, 0x186a0 */
  EBP = (0x186a0u);
  /* 115f2387 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2388 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2389 push ebx */
  push32((uint32_t)(EBX));
  /* 115f238a call esi */
  call_ind((uint32_t)(ESI), 0x115f238cu);
  /* 115f238c push ebp */
  push32((uint32_t)(EBP));
  /* 115f238d push 2 */
  push32((uint32_t)(0x2u));
  /* 115f238f push ebx */
  push32((uint32_t)(EBX));
  /* 115f2390 call esi */
  call_ind((uint32_t)(ESI), 0x115f2392u);
  /* 115f2392 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2395 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2396 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f2398 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2399 call esi */
  call_ind((uint32_t)(ESI), 0x115f239bu);
  /* 115f239b push ebp */
  push32((uint32_t)(EBP));
  /* 115f239c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f239e push ebx */
  push32((uint32_t)(EBX));
  /* 115f239f call esi */
  call_ind((uint32_t)(ESI), 0x115f23a1u);
  /* 115f23a1 push ebp */
  push32((uint32_t)(EBP));
  /* 115f23a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f23a4 push ebx */
  push32((uint32_t)(EBX));
  /* 115f23a5 call esi */
  call_ind((uint32_t)(ESI), 0x115f23a7u);
  /* 115f23a7 push ebp */
  push32((uint32_t)(EBP));
  /* 115f23a8 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f23aa push ebx */
  push32((uint32_t)(EBX));
  /* 115f23ab call esi */
  call_ind((uint32_t)(ESI), 0x115f23adu);
  /* 115f23ad push ebp */
  push32((uint32_t)(EBP));
  /* 115f23ae push ebx */
  push32((uint32_t)(EBX));
  /* 115f23af push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23b1 call esi */
  call_ind((uint32_t)(ESI), 0x115f23b3u);
  /* 115f23b3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f23b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23b6 call edi */
  call_ind((uint32_t)(EDI), 0x115f23b8u);
  /* 115f23b8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f23bb push eax */
  push32((uint32_t)(EAX));
  /* 115f23bc push 3 */
  push32((uint32_t)(0x3u));
  /* 115f23be push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23c0 call esi */
  call_ind((uint32_t)(ESI), 0x115f23c2u);
  /* 115f23c2 push ebx */
  push32((uint32_t)(EBX));
  /* 115f23c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23c5 call edi */
  call_ind((uint32_t)(EDI), 0x115f23c7u);
  /* 115f23c7 push eax */
  push32((uint32_t)(EAX));
  /* 115f23c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f23ca push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23cc call esi */
  call_ind((uint32_t)(ESI), 0x115f23ceu);
  /* 115f23ce push ebx */
  push32((uint32_t)(EBX));
  /* 115f23cf push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23d1 call edi */
  call_ind((uint32_t)(EDI), 0x115f23d3u);
  /* 115f23d3 push eax */
  push32((uint32_t)(EAX));
  /* 115f23d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23d8 call esi */
  call_ind((uint32_t)(ESI), 0x115f23dau);
  /* 115f23da push ebx */
  push32((uint32_t)(EBX));
  /* 115f23db push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23dd call edi */
  call_ind((uint32_t)(EDI), 0x115f23dfu);
  /* 115f23df push eax */
  push32((uint32_t)(EAX));
  /* 115f23e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f23e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23e4 call esi */
  call_ind((uint32_t)(ESI), 0x115f23e6u);
  /* 115f23e6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f23e9 push ebx */
  push32((uint32_t)(EBX));
  /* 115f23ea push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23ec call edi */
  call_ind((uint32_t)(EDI), 0x115f23eeu);
  /* 115f23ee push eax */
  push32((uint32_t)(EAX));
  /* 115f23ef push 5 */
  push32((uint32_t)(0x5u));
  /* 115f23f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23f3 call esi */
  call_ind((uint32_t)(ESI), 0x115f23f5u);
  /* 115f23f5 push ebp */
  push32((uint32_t)(EBP));
  /* 115f23f6 push ebx */
  push32((uint32_t)(EBX));
  /* 115f23f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f23f9 call esi */
  call_ind((uint32_t)(ESI), 0x115f23fbu);
  /* 115f23fb push ebx */
  push32((uint32_t)(EBX));
  /* 115f23fc push 1 */
  push32((uint32_t)(0x1u));
  /* 115f23fe call edi */
  call_ind((uint32_t)(EDI), 0x115f2400u);
  /* 115f2400 push eax */
  push32((uint32_t)(EAX));
  /* 115f2401 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f2403 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2405 call esi */
  call_ind((uint32_t)(ESI), 0x115f2407u);
  /* 115f2407 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2408 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f240a call edi */
  call_ind((uint32_t)(EDI), 0x115f240cu);
  /* 115f240c push eax */
  push32((uint32_t)(EAX));
  /* 115f240d push 2 */
  push32((uint32_t)(0x2u));
  /* 115f240f push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2411 call esi */
  call_ind((uint32_t)(ESI), 0x115f2413u);
  /* 115f2413 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2416 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2417 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2419 call edi */
  call_ind((uint32_t)(EDI), 0x115f241bu);
  /* 115f241b push eax */
  push32((uint32_t)(EAX));
  /* 115f241c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f241e push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2420 call esi */
  call_ind((uint32_t)(ESI), 0x115f2422u);
  /* 115f2422 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2423 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2425 call edi */
  call_ind((uint32_t)(EDI), 0x115f2427u);
  /* 115f2427 push eax */
  push32((uint32_t)(EAX));
  /* 115f2428 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f242a push 2 */
  push32((uint32_t)(0x2u));
  /* 115f242c call esi */
  call_ind((uint32_t)(ESI), 0x115f242eu);
  /* 115f242e push ebx */
  push32((uint32_t)(EBX));
  /* 115f242f push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2431 call edi */
  call_ind((uint32_t)(EDI), 0x115f2433u);
  /* 115f2433 push eax */
  push32((uint32_t)(EAX));
  /* 115f2434 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f2436 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2438 call esi */
  call_ind((uint32_t)(ESI), 0x115f243au);
  /* 115f243a push ebp */
  push32((uint32_t)(EBP));
  /* 115f243b push ebx */
  push32((uint32_t)(EBX));
  /* 115f243c push 3 */
  push32((uint32_t)(0x3u));
  /* 115f243e pop ebp */
  EBP = (pop32());
  /* 115f243f push ebp */
  push32((uint32_t)(EBP));
  /* 115f2440 call esi */
  call_ind((uint32_t)(ESI), 0x115f2442u);
  /* 115f2442 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2445 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2446 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2448 call edi */
  call_ind((uint32_t)(EDI), 0x115f244au);
  /* 115f244a push eax */
  push32((uint32_t)(EAX));
  /* 115f244b push ebp */
  push32((uint32_t)(EBP));
  /* 115f244c push ebp */
  push32((uint32_t)(EBP));
  /* 115f244d call esi */
  call_ind((uint32_t)(ESI), 0x115f244fu);
  /* 115f244f push ebx */
  push32((uint32_t)(EBX));
  /* 115f2450 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2452 call edi */
  call_ind((uint32_t)(EDI), 0x115f2454u);
  /* 115f2454 push eax */
  push32((uint32_t)(EAX));
  /* 115f2455 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2457 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2458 call esi */
  call_ind((uint32_t)(ESI), 0x115f245au);
  /* 115f245a push ebx */
  push32((uint32_t)(EBX));
  /* 115f245b push 1 */
  push32((uint32_t)(0x1u));
  /* 115f245d call edi */
  call_ind((uint32_t)(EDI), 0x115f245fu);
  /* 115f245f push eax */
  push32((uint32_t)(EAX));
  /* 115f2460 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2462 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2463 call esi */
  call_ind((uint32_t)(ESI), 0x115f2465u);
  /* 115f2465 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2466 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2468 call edi */
  call_ind((uint32_t)(EDI), 0x115f246au);
  /* 115f246a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f246d push eax */
  push32((uint32_t)(EAX));
  /* 115f246e push 4 */
  push32((uint32_t)(0x4u));
  /* 115f2470 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2471 call esi */
  call_ind((uint32_t)(ESI), 0x115f2473u);
  /* 115f2473 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2474 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2476 call edi */
  call_ind((uint32_t)(EDI), 0x115f2478u);
  /* 115f2478 push eax */
  push32((uint32_t)(EAX));
  /* 115f2479 push 5 */
  push32((uint32_t)(0x5u));
  /* 115f247b push ebp */
  push32((uint32_t)(EBP));
  /* 115f247c call esi */
  call_ind((uint32_t)(ESI), 0x115f247eu);
  /* 115f247e push ebx */
  push32((uint32_t)(EBX));
  /* 115f247f push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2481 call edi */
  call_ind((uint32_t)(EDI), 0x115f2483u);
  /* 115f2483 push eax */
  push32((uint32_t)(EAX));
  /* 115f2484 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2485 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f2487 call esi */
  call_ind((uint32_t)(ESI), 0x115f2489u);
  /* 115f2489 mov edi, dword ptr [0x115f6144] */
  EDI = (r32((uint32_t)(0x115f6144)));
  /* 115f248f push ebp */
  push32((uint32_t)(EBP));
  /* 115f2490 call edi */
  call_ind((uint32_t)(EDI), 0x115f2492u);
  /* 115f2492 mov esi, dword ptr [0x115f6158] */
  ESI = (r32((uint32_t)(0x115f6158)));
  /* 115f2498 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2499 push 0x115f7678 */
  push32((uint32_t)(0x115f7678u));
  /* 115f249e call esi */
  call_ind((uint32_t)(ESI), 0x115f24a0u);
  /* 115f24a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f24a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f24a5 push 0x115f7670 */
  push32((uint32_t)(0x115f7670u));
  /* 115f24aa call esi */
  call_ind((uint32_t)(ESI), 0x115f24acu);
  /* 115f24ac push 1 */
  push32((uint32_t)(0x1u));
  /* 115f24ae push 0x115f7680 */
  push32((uint32_t)(0x115f7680u));
  /* 115f24b3 call esi */
  call_ind((uint32_t)(ESI), 0x115f24b5u);
  /* 115f24b5 push ebp */
  push32((uint32_t)(EBP));
  /* 115f24b6 call dword ptr [0x115f613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f613c))), 0x115f24bcu);
  /* 115f24bc push ebp */
  push32((uint32_t)(EBP));
  /* 115f24bd call edi */
  call_ind((uint32_t)(EDI), 0x115f24bfu);
  /* 115f24bf push 0x115f725c */
  push32((uint32_t)(0x115f725cu));
  /* 115f24c4 call dword ptr [0x115f60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d8))), 0x115f24cau);
  /* 115f24ca push ebp */
  push32((uint32_t)(EBP));
  /* 115f24cb call dword ptr [0x115f60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60f0))), 0x115f24d1u);
  /* 115f24d1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 115f24d3 call dword ptr [0x115f60bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60bc))), 0x115f24d9u);
  /* 115f24d9 mov esi, dword ptr [0x115f60cc] */
  ESI = (r32((uint32_t)(0x115f60cc)));
  /* 115f24df push 0x47 */
  push32((uint32_t)(0x47u));
  /* 115f24e1 call esi */
  call_ind((uint32_t)(ESI), 0x115f24e3u);
  /* 115f24e3 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 115f24e5 call esi */
  call_ind((uint32_t)(ESI), 0x115f24e7u);
  /* 115f24e7 push dword ptr [0x115f7668] */
  push32((uint32_t)(r32((uint32_t)(0x115f7668))));
  /* 115f24ed push 1 */
  push32((uint32_t)(0x1u));
  /* 115f24ef push ebp */
  push32((uint32_t)(EBP));
  /* 115f24f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f24f2 push 0x115f7250 */
  push32((uint32_t)(0x115f7250u));
  /* 115f24f7 push ebp */
  push32((uint32_t)(EBP));
  /* 115f24f8 call dword ptr [0x115f60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60fc))), 0x115f24feu);
  /* 115f24fe add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2501 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 115f2506 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115f2508 call dword ptr [0x115f60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60d0))), 0x115f250eu);
  /* 115f250e mov esi, dword ptr [0x115f614c] */
  ESI = (r32((uint32_t)(0x115f614c)));
  /* 115f2514 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2515 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115f2517 call esi */
  call_ind((uint32_t)(ESI), 0x115f2519u);
  /* 115f2519 push ebx */
  push32((uint32_t)(EBX));
  /* 115f251a push 0xa */
  push32((uint32_t)(0xau));
  /* 115f251c call esi */
  call_ind((uint32_t)(ESI), 0x115f251eu);
  /* 115f251e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f2521:;
  /* 115f2521 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115f2523 call dword ptr [0x115f6140] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6140))), 0x115f2529u);
  /* 115f2529 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f252b pop ecx */
  ECX = (pop32());
  /* 115f252c je 0x115f2599 */
  if (C.zf) goto L_115f2599;
  /* 115f252e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115f2530 call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f2536u);
  /* 115f2536 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f2538 pop ecx */
  ECX = (pop32());
  /* 115f2539 jne 0x115f255d */
  if (!C.zf) goto L_115f255d;
  /* 115f253b mov esi, dword ptr [0x115f60f4] */
  ESI = (r32((uint32_t)(0x115f60f4)));
  /* 115f2541 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2542 push 0x115f7798 */
  push32((uint32_t)(0x115f7798u));
  /* 115f2547 call esi */
  call_ind((uint32_t)(ESI), 0x115f2549u);
  /* 115f2549 pop ecx */
  ECX = (pop32());
  /* 115f254a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f254c pop ecx */
  ECX = (pop32());
  /* 115f254d jne 0x115f255d */
  if (!C.zf) goto L_115f255d;
  /* 115f254f push ebx */
  push32((uint32_t)(EBX));
  /* 115f2550 push 0x115f7690 */
  push32((uint32_t)(0x115f7690u));
  /* 115f2555 call esi */
  call_ind((uint32_t)(ESI), 0x115f2557u);
  /* 115f2557 pop ecx */
  ECX = (pop32());
  /* 115f2558 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f255a pop ecx */
  ECX = (pop32());
  /* 115f255b je 0x115f2599 */
  if (C.zf) goto L_115f2599;
L_115f255d:;
  /* 115f255d push dword ptr [0x115f7668] */
  push32((uint32_t)(r32((uint32_t)(0x115f7668))));
  /* 115f2563 mov esi, dword ptr [0x115f60fc] */
  ESI = (r32((uint32_t)(0x115f60fc)));
  /* 115f2569 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f256b push 3 */
  push32((uint32_t)(0x3u));
  /* 115f256d push 2 */
  push32((uint32_t)(0x2u));
  /* 115f256f push 0x115f7248 */
  push32((uint32_t)(0x115f7248u));
  /* 115f2574 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2576 call esi */
  call_ind((uint32_t)(ESI), 0x115f2578u);
  /* 115f2578 push dword ptr [0x115f7668] */
  push32((uint32_t)(r32((uint32_t)(0x115f7668))));
  /* 115f257e push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2580 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f2582 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f2584 push 0x115f723c */
  push32((uint32_t)(0x115f723cu));
  /* 115f2589 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f258b call esi */
  call_ind((uint32_t)(ESI), 0x115f258du);
  /* 115f258d push ebx */
  push32((uint32_t)(EBX));
  /* 115f258e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115f2590 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f2596u);
  /* 115f2596 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f2599:;
  /* 115f2599 mov edi, dword ptr [0x115f6140] */
  EDI = (r32((uint32_t)(0x115f6140)));
  /* 115f259f push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115f25a1 call edi */
  call_ind((uint32_t)(EDI), 0x115f25a3u);
  /* 115f25a3 mov esi, dword ptr [0x115f6104] */
  ESI = (r32((uint32_t)(0x115f6104)));
  /* 115f25a9 pop ecx */
  ECX = (pop32());
  /* 115f25aa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f25ac mov ebp, 0x115f7688 */
  EBP = (0x115f7688u);
  /* 115f25b1 je 0x115f2604 */
  if (C.zf) goto L_115f2604;
  /* 115f25b3 push 0x115f7818 */
  push32((uint32_t)(0x115f7818u));
  /* 115f25b8 call dword ptr [0x115f6108] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6108))), 0x115f25beu);
  /* 115f25be pop ecx */
  ECX = (pop32());
  /* 115f25bf mov ecx, dword ptr [0x115f7668] */
  ECX = (r32((uint32_t)(0x115f7668)));
  /* 115f25c5 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 115f25c8 lea edx, [edx + edx + 0x2a] */
  EDX = ((uint32_t)(EDX + EDX*1 + 0x2a));
  /* 115f25cc cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f25ce jge 0x115f2604 */
  if ((C.sf==C.of)) goto L_115f2604;
  /* 115f25d0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f25d2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f25d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115f25d5 jle 0x115f25f3 */
  if ((C.zf||C.sf!=C.of)) goto L_115f25f3;
L_115f25d7:;
  /* 115f25d7 push ebx */
  push32((uint32_t)(EBX));
  /* 115f25d8 push 0x115f7818 */
  push32((uint32_t)(0x115f7818u));
  /* 115f25dd push 0x115f77c8 */
  push32((uint32_t)(0x115f77c8u));
  /* 115f25e2 push ebp */
  push32((uint32_t)(EBP));
  /* 115f25e3 call esi */
  call_ind((uint32_t)(ESI), 0x115f25e5u);
  /* 115f25e5 mov eax, dword ptr [0x115f7668] */
  EAX = (r32((uint32_t)(0x115f7668)));
  /* 115f25ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f25ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f25ee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f25ef cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f25f1 jl 0x115f25d7 */
  if ((C.sf!=C.of)) goto L_115f25d7;
L_115f25f3:;
  /* 115f25f3 push 0x115f7818 */
  push32((uint32_t)(0x115f7818u));
  /* 115f25f8 call 0x115f1104 */
  push32(0x115f25fdu); f_115f1104();
  /* 115f25fd mov edi, dword ptr [0x115f6140] */
  EDI = (r32((uint32_t)(0x115f6140)));
  /* 115f2603 pop ecx */
  ECX = (pop32());
L_115f2604:;
  /* 115f2604 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115f2606 call edi */
  call_ind((uint32_t)(EDI), 0x115f2608u);
  /* 115f2608 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f260a pop ecx */
  ECX = (pop32());
  /* 115f260b je 0x115f2658 */
  if (C.zf) goto L_115f2658;
  /* 115f260d push 0x115f7860 */
  push32((uint32_t)(0x115f7860u));
  /* 115f2612 call dword ptr [0x115f6108] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6108))), 0x115f2618u);
  /* 115f2618 pop ecx */
  ECX = (pop32());
  /* 115f2619 mov ecx, dword ptr [0x115f7668] */
  ECX = (r32((uint32_t)(0x115f7668)));
  /* 115f261f lea edx, [ecx + ecx*4 + 0x15] */
  EDX = ((uint32_t)(ECX + ECX*4 + 0x15));
  /* 115f2623 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2625 jge 0x115f2658 */
  if ((C.sf==C.of)) goto L_115f2658;
  /* 115f2627 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f2629 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f262b jle 0x115f2647 */
  if ((C.zf||C.sf!=C.of)) goto L_115f2647;
L_115f262d:;
  /* 115f262d push ebx */
  push32((uint32_t)(EBX));
  /* 115f262e push 0x115f7860 */
  push32((uint32_t)(0x115f7860u));
  /* 115f2633 push 0x115f77e0 */
  push32((uint32_t)(0x115f77e0u));
  /* 115f2638 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2639 call esi */
  call_ind((uint32_t)(ESI), 0x115f263bu);
  /* 115f263b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f263e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f263f cmp edi, dword ptr [0x115f7668] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x115f7668))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2645 jl 0x115f262d */
  if ((C.sf!=C.of)) goto L_115f262d;
L_115f2647:;
  /* 115f2647 push 0x115f7860 */
  push32((uint32_t)(0x115f7860u));
  /* 115f264c call 0x115f1104 */
  push32(0x115f2651u); f_115f1104();
  /* 115f2651 mov edi, dword ptr [0x115f6140] */
  EDI = (r32((uint32_t)(0x115f6140)));
  /* 115f2657 pop ecx */
  ECX = (pop32());
L_115f2658:;
  /* 115f2658 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 115f265a call edi */
  call_ind((uint32_t)(EDI), 0x115f265cu);
  /* 115f265c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f265e pop ecx */
  ECX = (pop32());
  /* 115f265f je 0x115f26b2 */
  if (C.zf) goto L_115f26b2;
  /* 115f2661 push 0x115f76a0 */
  push32((uint32_t)(0x115f76a0u));
  /* 115f2666 call dword ptr [0x115f6108] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6108))), 0x115f266cu);
  /* 115f266c pop ecx */
  ECX = (pop32());
  /* 115f266d mov ecx, dword ptr [0x115f7668] */
  ECX = (r32((uint32_t)(0x115f7668)));
  /* 115f2673 lea edx, [ecx + ecx*4 + 0x14] */
  EDX = ((uint32_t)(ECX + ECX*4 + 0x14));
  /* 115f2677 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 115f2679 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f267b jge 0x115f26b2 */
  if ((C.sf==C.of)) goto L_115f26b2;
  /* 115f267d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f267f cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2681 jle 0x115f26a1 */
  if ((C.zf||C.sf!=C.of)) goto L_115f26a1;
L_115f2683:;
  /* 115f2683 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2684 push 0x115f76a0 */
  push32((uint32_t)(0x115f76a0u));
  /* 115f2689 push 0x115f7660 */
  push32((uint32_t)(0x115f7660u));
  /* 115f268e push 0x115f77a8 */
  push32((uint32_t)(0x115f77a8u));
  /* 115f2693 call esi */
  call_ind((uint32_t)(ESI), 0x115f2695u);
  /* 115f2695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2698 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f2699 cmp edi, dword ptr [0x115f7668] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x115f7668))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f269f jl 0x115f2683 */
  if ((C.sf!=C.of)) goto L_115f2683;
L_115f26a1:;
  /* 115f26a1 push 0x115f76a0 */
  push32((uint32_t)(0x115f76a0u));
  /* 115f26a6 call 0x115f1104 */
  push32(0x115f26abu); f_115f1104();
  /* 115f26ab mov edi, dword ptr [0x115f6140] */
  EDI = (r32((uint32_t)(0x115f6140)));
  /* 115f26b1 pop ecx */
  ECX = (pop32());
L_115f26b2:;
  /* 115f26b2 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115f26b4 call edi */
  call_ind((uint32_t)(EDI), 0x115f26b6u);
  /* 115f26b6 mov ebp, dword ptr [0x115f6100] */
  EBP = (r32((uint32_t)(0x115f6100)));
  /* 115f26bc pop ecx */
  ECX = (pop32());
  /* 115f26bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f26bf je 0x115f26e5 */
  if (C.zf) goto L_115f26e5;
  /* 115f26c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f26c3 call ebp */
  call_ind((uint32_t)(EBP), 0x115f26c5u);
  /* 115f26c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f26c7 pop ecx */
  ECX = (pop32());
  /* 115f26c8 je 0x115f26e5 */
  if (C.zf) goto L_115f26e5;
  /* 115f26ca mov esi, dword ptr [0x115f60d8] */
  ESI = (r32((uint32_t)(0x115f60d8)));
  /* 115f26d0 push 0x115f7234 */
  push32((uint32_t)(0x115f7234u));
  /* 115f26d5 call esi */
  call_ind((uint32_t)(ESI), 0x115f26d7u);
  /* 115f26d7 push ebx */
  push32((uint32_t)(EBX));
  /* 115f26d8 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115f26da call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f26e0u);
  /* 115f26e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f26e3 jmp 0x115f26eb */
  goto L_115f26eb;
L_115f26e5:;
  /* 115f26e5 mov esi, dword ptr [0x115f60d8] */
  ESI = (r32((uint32_t)(0x115f60d8)));
L_115f26eb:;
  /* 115f26eb push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115f26ed call edi */
  call_ind((uint32_t)(EDI), 0x115f26efu);
  /* 115f26ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f26f1 pop ecx */
  ECX = (pop32());
  /* 115f26f2 je 0x115f2710 */
  if (C.zf) goto L_115f2710;
  /* 115f26f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f26f6 call ebp */
  call_ind((uint32_t)(EBP), 0x115f26f8u);
  /* 115f26f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f26fa pop ecx */
  ECX = (pop32());
  /* 115f26fb je 0x115f2710 */
  if (C.zf) goto L_115f2710;
  /* 115f26fd push 0x115f722c */
  push32((uint32_t)(0x115f722cu));
  /* 115f2702 call esi */
  call_ind((uint32_t)(ESI), 0x115f2704u);
  /* 115f2704 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2705 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115f2707 call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f270du);
  /* 115f270d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f2710:;
  /* 115f2710 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115f2712 call edi */
  call_ind((uint32_t)(EDI), 0x115f2714u);
  /* 115f2714 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f2716 pop ecx */
  ECX = (pop32());
  /* 115f2717 je 0x115f2735 */
  if (C.zf) goto L_115f2735;
  /* 115f2719 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f271b call ebp */
  call_ind((uint32_t)(EBP), 0x115f271du);
  /* 115f271d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f271f pop ecx */
  ECX = (pop32());
  /* 115f2720 je 0x115f2735 */
  if (C.zf) goto L_115f2735;
  /* 115f2722 push 0x115f7224 */
  push32((uint32_t)(0x115f7224u));
  /* 115f2727 call esi */
  call_ind((uint32_t)(ESI), 0x115f2729u);
  /* 115f2729 push ebx */
  push32((uint32_t)(EBX));
  /* 115f272a push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115f272c call dword ptr [0x115f614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f614c))), 0x115f2732u);
  /* 115f2732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f2735:;
  /* 115f2735 mov ebp, dword ptr [0x115f6108] */
  EBP = (r32((uint32_t)(0x115f6108)));
  /* 115f273b push 0x115f7858 */
  push32((uint32_t)(0x115f7858u));
  /* 115f2740 call ebp */
  call_ind((uint32_t)(EBP), 0x115f2742u);
  /* 115f2742 mov ebx, dword ptr [0x115f6110] */
  EBX = (r32((uint32_t)(0x115f6110)));
  /* 115f2748 pop ecx */
  ECX = (pop32());
  /* 115f2749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f274b jne 0x115f2757 */
  if (!C.zf) goto L_115f2757;
  /* 115f274d push 0x115f7218 */
  push32((uint32_t)(0x115f7218u));
  /* 115f2752 call esi */
  call_ind((uint32_t)(ESI), 0x115f2754u);
  /* 115f2754 pop ecx */
  ECX = (pop32());
  /* 115f2755 call ebx */
  call_ind((uint32_t)(EBX), 0x115f2757u);
L_115f2757:;
  /* 115f2757 push 0x115f77e8 */
  push32((uint32_t)(0x115f77e8u));
  /* 115f275c call ebp */
  call_ind((uint32_t)(EBP), 0x115f275eu);
  /* 115f275e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2760 pop ecx */
  ECX = (pop32());
  /* 115f2761 jne 0x115f276d */
  if (!C.zf) goto L_115f276d;
  /* 115f2763 push 0x115f720c */
  push32((uint32_t)(0x115f720cu));
  /* 115f2768 call esi */
  call_ind((uint32_t)(ESI), 0x115f276au);
  /* 115f276a pop ecx */
  ECX = (pop32());
  /* 115f276b call ebx */
  call_ind((uint32_t)(EBX), 0x115f276du);
L_115f276d:;
  /* 115f276d push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115f276f call edi */
  call_ind((uint32_t)(EDI), 0x115f2771u);
  /* 115f2771 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f2773 pop ecx */
  ECX = (pop32());
  /* 115f2774 jne 0x115f27b3 */
  if (!C.zf) goto L_115f27b3;
  /* 115f2776 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115f2778 call edi */
  call_ind((uint32_t)(EDI), 0x115f277au);
  /* 115f277a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f277c pop ecx */
  ECX = (pop32());
  /* 115f277d jne 0x115f27b3 */
  if (!C.zf) goto L_115f27b3;
  /* 115f277f push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115f2781 call edi */
  call_ind((uint32_t)(EDI), 0x115f2783u);
  /* 115f2783 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f2785 pop ecx */
  ECX = (pop32());
  /* 115f2786 jne 0x115f27b3 */
  if (!C.zf) goto L_115f27b3;
  /* 115f2788 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f278a pop edi */
  EDI = (pop32());
L_115f278b:;
  /* 115f278b push edi */
  push32((uint32_t)(EDI));
  /* 115f278c call dword ptr [0x115f60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60e0))), 0x115f2792u);
  /* 115f2792 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f2794 pop ecx */
  ECX = (pop32());
  /* 115f2795 jne 0x115f279f */
  if (!C.zf) goto L_115f279f;
  /* 115f2797 push edi */
  push32((uint32_t)(EDI));
  /* 115f2798 call dword ptr [0x115f6114] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6114))), 0x115f279eu);
  /* 115f279e pop ecx */
  ECX = (pop32());
L_115f279f:;
  /* 115f279f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f27a0 cmp edi, 0x1e */
  { uint32_t _a=(EDI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f27a3 jl 0x115f278b */
  if ((C.sf!=C.of)) goto L_115f278b;
  /* 115f27a5 push 0x115f7204 */
  push32((uint32_t)(0x115f7204u));
  /* 115f27aa call esi */
  call_ind((uint32_t)(ESI), 0x115f27acu);
  /* 115f27ac pop ecx */
  ECX = (pop32());
  /* 115f27ad call dword ptr [0x115f610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f610c))), 0x115f27b3u);
L_115f27b3:;
  /* 115f27b3 pop edi */
  EDI = (pop32());
  /* 115f27b4 pop esi */
  ESI = (pop32());
  /* 115f27b5 pop ebp */
  EBP = (pop32());
  /* 115f27b6 pop ebx */
  EBX = (pop32());
  /* 115f27b7 pop ecx */
  ECX = (pop32());
  /* 115f27b8 ret  */
  ESPCHK(0x115f1529u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b9 @ 0x115f27b9 (217 bytes, 57 insns) */
void f_115f27b9(void) {
  FTRACE(0x115f27b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f27b9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f27bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f27c0 jne 0x115f284e */
  if (!C.zf) goto L_115f284e;
  /* 115f27c6 call dword ptr [0x115f6098] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6098))), 0x115f27ccu);
  /* 115f27cc push 1 */
  push32((uint32_t)(0x1u));
  /* 115f27ce mov dword ptr [0x115f788c], eax */
  w32((uint32_t)(0x115f788c), (EAX));
  /* 115f27d3 call 0x115f31ed */
  push32(0x115f27d8u); f_115f31ed();
  /* 115f27d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f27da pop ecx */
  ECX = (pop32());
  /* 115f27db je 0x115f2819 */
  if (C.zf) goto L_115f2819;
  /* 115f27dd mov eax, dword ptr [0x115f788c] */
  EAX = (r32((uint32_t)(0x115f788c)));
  /* 115f27e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115f27e4 mov cl, byte ptr [0x115f788d] */
  CL = (r8((uint32_t)(0x115f788d)));
  /* 115f27ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f27ef shr dword ptr [0x115f788c], 0x10 */
  w32((uint32_t)(0x115f788c), (sh_shr((uint32_t)(r32((uint32_t)(0x115f788c))), (0x10u)&0x1f, 32)));
  /* 115f27f6 mov dword ptr [0x115f7894], eax */
  w32((uint32_t)(0x115f7894), (EAX));
  /* 115f27fb mov dword ptr [0x115f7898], ecx */
  w32((uint32_t)(0x115f7898), (ECX));
  /* 115f2801 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115f2804 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2806 mov dword ptr [0x115f7890], eax */
  w32((uint32_t)(0x115f7890), (EAX));
  /* 115f280b call 0x115f2a80 */
  push32(0x115f2810u); f_115f2a80();
  /* 115f2810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2812 jne 0x115f281d */
  if (!C.zf) goto L_115f281d;
  /* 115f2814 call 0x115f3229 */
  push32(0x115f2819u); f_115f3229();
L_115f2819:;
  /* 115f2819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f281b jmp 0x115f288f */
  goto L_115f288f;
L_115f281d:;
  /* 115f281d call dword ptr [0x115f6094] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6094))), 0x115f2823u);
  /* 115f2823 mov dword ptr [0x115f7df8], eax */
  w32((uint32_t)(0x115f7df8), (EAX));
  /* 115f2828 call 0x115f30bb */
  push32(0x115f282du); f_115f30bb();
  /* 115f282d mov dword ptr [0x115f7878], eax */
  w32((uint32_t)(0x115f7878), (EAX));
  /* 115f2832 call 0x115f2ba5 */
  push32(0x115f2837u); f_115f2ba5();
  /* 115f2837 call 0x115f2e6e */
  push32(0x115f283cu); f_115f2e6e();
  /* 115f283c call 0x115f2db5 */
  push32(0x115f2841u); f_115f2db5();
  /* 115f2841 call 0x115f2962 */
  push32(0x115f2846u); f_115f2962();
  /* 115f2846 inc dword ptr [0x115f7874] */
  { uint32_t _r=(r32((uint32_t)(0x115f7874)))+1; w32((uint32_t)(0x115f7874), (_r)); fl_inc(_r,32); }
  /* 115f284c jmp 0x115f288c */
  goto L_115f288c;
L_115f284e:;
  /* 115f284e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115f2850 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2852 jne 0x115f2880 */
  if (!C.zf) goto L_115f2880;
  /* 115f2854 cmp dword ptr [0x115f7874], ecx */
  { uint32_t _a=(r32((uint32_t)(0x115f7874))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f285a jle 0x115f2819 */
  if ((C.zf||C.sf!=C.of)) goto L_115f2819;
  /* 115f285c dec dword ptr [0x115f7874] */
  { uint32_t _r=(r32((uint32_t)(0x115f7874)))-1; w32((uint32_t)(0x115f7874), (_r)); fl_dec(_r,32); }
  /* 115f2862 cmp dword ptr [0x115f78c4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x115f78c4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2868 jne 0x115f286f */
  if (!C.zf) goto L_115f286f;
  /* 115f286a call 0x115f29a0 */
  push32(0x115f286fu); f_115f29a0();
L_115f286f:;
  /* 115f286f call 0x115f2d61 */
  push32(0x115f2874u); f_115f2d61();
  /* 115f2874 call 0x115f2ad4 */
  push32(0x115f2879u); f_115f2ad4();
  /* 115f2879 call 0x115f3229 */
  push32(0x115f287eu); f_115f3229();
  /* 115f287e jmp 0x115f288c */
  goto L_115f288c;
L_115f2880:;
  /* 115f2880 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2883 jne 0x115f288c */
  if (!C.zf) goto L_115f288c;
  /* 115f2885 push ecx */
  push32((uint32_t)(ECX));
  /* 115f2886 call 0x115f2b05 */
  push32(0x115f288bu); f_115f2b05();
  /* 115f288b pop ecx */
  ECX = (pop32());
L_115f288c:;
  /* 115f288c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f288e pop eax */
  EAX = (pop32());
L_115f288f:;
  /* 115f288f ret 0xc */
  ESPCHK(0x115f27b9u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x115f2892 (157 bytes, 73 insns) */
void f_115f2892(void) {
  FTRACE(0x115f2892u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2892 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2893 mov ebp, esp */
  EBP = (ESP);
  /* 115f2895 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2896 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f2899 push esi */
  push32((uint32_t)(ESI));
  /* 115f289a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115f289d push edi */
  push32((uint32_t)(EDI));
  /* 115f289e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 115f28a1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f28a3 jne 0x115f28ae */
  if (!C.zf) goto L_115f28ae;
  /* 115f28a5 cmp dword ptr [0x115f7874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115f7874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f28ac jmp 0x115f28d4 */
  goto L_115f28d4;
L_115f28ae:;
  /* 115f28ae cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f28b1 je 0x115f28b8 */
  if (C.zf) goto L_115f28b8;
  /* 115f28b3 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f28b6 jne 0x115f28da */
  if (!C.zf) goto L_115f28da;
L_115f28b8:;
  /* 115f28b8 mov eax, dword ptr [0x115f7dfc] */
  EAX = (r32((uint32_t)(0x115f7dfc)));
  /* 115f28bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f28bf je 0x115f28ca */
  if (C.zf) goto L_115f28ca;
  /* 115f28c1 push edi */
  push32((uint32_t)(EDI));
  /* 115f28c2 push esi */
  push32((uint32_t)(ESI));
  /* 115f28c3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f28c4 call eax */
  call_ind((uint32_t)(EAX), 0x115f28c6u);
  /* 115f28c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f28c8 je 0x115f28d6 */
  if (C.zf) goto L_115f28d6;
L_115f28ca:;
  /* 115f28ca push edi */
  push32((uint32_t)(EDI));
  /* 115f28cb push esi */
  push32((uint32_t)(ESI));
  /* 115f28cc push ebx */
  push32((uint32_t)(EBX));
  /* 115f28cd call 0x115f27b9 */
  push32(0x115f28d2u); f_115f27b9();
  /* 115f28d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_115f28d4:;
  /* 115f28d4 jne 0x115f28da */
  if (!C.zf) goto L_115f28da;
L_115f28d6:;
  /* 115f28d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f28d8 jmp 0x115f2928 */
  goto L_115f2928;
L_115f28da:;
  /* 115f28da push edi */
  push32((uint32_t)(EDI));
  /* 115f28db push esi */
  push32((uint32_t)(ESI));
  /* 115f28dc push ebx */
  push32((uint32_t)(EBX));
  /* 115f28dd call 0x115f1000 */
  push32(0x115f28e2u); f_115f1000();
  /* 115f28e2 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f28e5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 115f28e8 jne 0x115f28f6 */
  if (!C.zf) goto L_115f28f6;
  /* 115f28ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f28ec jne 0x115f2925 */
  if (!C.zf) goto L_115f2925;
  /* 115f28ee push edi */
  push32((uint32_t)(EDI));
  /* 115f28ef push eax */
  push32((uint32_t)(EAX));
  /* 115f28f0 push ebx */
  push32((uint32_t)(EBX));
  /* 115f28f1 call 0x115f27b9 */
  push32(0x115f28f6u); f_115f27b9();
L_115f28f6:;
  /* 115f28f6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f28f8 je 0x115f28ff */
  if (C.zf) goto L_115f28ff;
  /* 115f28fa cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f28fd jne 0x115f2925 */
  if (!C.zf) goto L_115f2925;
L_115f28ff:;
  /* 115f28ff push edi */
  push32((uint32_t)(EDI));
  /* 115f2900 push esi */
  push32((uint32_t)(ESI));
  /* 115f2901 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2902 call 0x115f27b9 */
  push32(0x115f2907u); f_115f27b9();
  /* 115f2907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2909 jne 0x115f290e */
  if (!C.zf) goto L_115f290e;
  /* 115f290b and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_115f290e:;
  /* 115f290e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2912 je 0x115f2925 */
  if (C.zf) goto L_115f2925;
  /* 115f2914 mov eax, dword ptr [0x115f7dfc] */
  EAX = (r32((uint32_t)(0x115f7dfc)));
  /* 115f2919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f291b je 0x115f2925 */
  if (C.zf) goto L_115f2925;
  /* 115f291d push edi */
  push32((uint32_t)(EDI));
  /* 115f291e push esi */
  push32((uint32_t)(ESI));
  /* 115f291f push ebx */
  push32((uint32_t)(EBX));
  /* 115f2920 call eax */
  call_ind((uint32_t)(EAX), 0x115f2922u);
  /* 115f2922 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_115f2925:;
  /* 115f2925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_115f2928:;
  /* 115f2928 pop edi */
  EDI = (pop32());
  /* 115f2929 pop esi */
  ESI = (pop32());
  /* 115f292a pop ebx */
  EBX = (pop32());
  /* 115f292b pop ebp */
  EBP = (pop32());
  /* 115f292c ret 0xc */
  ESPCHK(0x115f2892u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x115f292f (48 bytes, 15 insns) */
void f_115f292f(void) {
  FTRACE(0x115f292fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f292f mov eax, dword ptr [0x115f7880] */
  EAX = (r32((uint32_t)(0x115f7880)));
  /* 115f2934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2937 je 0x115f2946 */
  if (C.zf) goto L_115f2946;
  /* 115f2939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f293b jne 0x115f294b */
  if (!C.zf) goto L_115f294b;
  /* 115f293d cmp dword ptr [0x115f7884], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115f7884))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2944 jne 0x115f294b */
  if (!C.zf) goto L_115f294b;
L_115f2946:;
  /* 115f2946 call 0x115f329e */
  push32(0x115f294bu); f_115f329e();
L_115f294b:;
  /* 115f294b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115f294f call 0x115f32d7 */
  push32(0x115f2954u); f_115f32d7();
  /* 115f2954 push 0xff */
  push32((uint32_t)(0xffu));
  /* 115f2959 call dword ptr [0x115f731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f731c))), 0x115f295fu);
  /* 115f295f pop ecx */
  ECX = (pop32());
  /* 115f2960 pop ecx */
  ECX = (pop32());
  /* 115f2961 ret  */
  ESPCHK(0x115f292fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002962 @ 0x115f2962 (45 bytes, 12 insns) */
void f_115f2962(void) {
  FTRACE(0x115f2962u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2962 mov eax, dword ptr [0x115f7df4] */
  EAX = (r32((uint32_t)(0x115f7df4)));
  /* 115f2967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2969 je 0x115f296d */
  if (C.zf) goto L_115f296d;
  /* 115f296b call eax */
  call_ind((uint32_t)(EAX), 0x115f296du);
L_115f296d:;
  /* 115f296d push 0x115f7010 */
  push32((uint32_t)(0x115f7010u));
  /* 115f2972 push 0x115f7008 */
  push32((uint32_t)(0x115f7008u));
  /* 115f2977 call 0x115f2a66 */
  push32(0x115f297cu); f_115f2a66();
  /* 115f297c push 0x115f7004 */
  push32((uint32_t)(0x115f7004u));
  /* 115f2981 push 0x115f7000 */
  push32((uint32_t)(0x115f7000u));
  /* 115f2986 call 0x115f2a66 */
  push32(0x115f298bu); f_115f2a66();
  /* 115f298b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f298e ret  */
  ESPCHK(0x115f2962u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x115f298f (17 bytes, 6 insns) */
void f_115f298f(void) {
  FTRACE(0x115f298fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f298f push 0 */
  push32((uint32_t)(0x0u));
  /* 115f2991 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2993 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 115f2997 call 0x115f29af */
  push32(0x115f299cu); f_115f29af();
  /* 115f299c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f299f ret  */
  ESPCHK(0x115f298fu, _esp0);
  ESP += 4; return;
}

/* FUN_100029a0 @ 0x115f29a0 (15 bytes, 6 insns) */
void f_115f29a0(void) {
  FTRACE(0x115f29a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f29a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f29a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f29a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f29a6 call 0x115f29af */
  push32(0x115f29abu); f_115f29af();
  /* 115f29ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f29ae ret  */
  ESPCHK(0x115f29a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029af @ 0x115f29af (163 bytes, 53 insns) */
void f_115f29af(void) {
  FTRACE(0x115f29afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f29af push edi */
  push32((uint32_t)(EDI));
  /* 115f29b0 call 0x115f2a54 */
  push32(0x115f29b5u); f_115f2a54();
  /* 115f29b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f29b7 pop edi */
  EDI = (pop32());
  /* 115f29b8 cmp dword ptr [0x115f78c8], edi */
  { uint32_t _a=(r32((uint32_t)(0x115f78c8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f29be jne 0x115f29d1 */
  if (!C.zf) goto L_115f29d1;
  /* 115f29c0 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f29c4 call dword ptr [0x115f60a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60a4))), 0x115f29cau);
  /* 115f29ca push eax */
  push32((uint32_t)(EAX));
  /* 115f29cb call dword ptr [0x115f6004] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6004))), 0x115f29d1u);
L_115f29d1:;
  /* 115f29d1 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f29d6 push ebx */
  push32((uint32_t)(EBX));
  /* 115f29d7 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 115f29db mov dword ptr [0x115f78c4], edi */
  w32((uint32_t)(0x115f78c4), (EDI));
  /* 115f29e1 mov byte ptr [0x115f78c0], bl */
  w8((uint32_t)(0x115f78c0), (BL));
  /* 115f29e7 jne 0x115f2a25 */
  if (!C.zf) goto L_115f2a25;
  /* 115f29e9 mov eax, dword ptr [0x115f7df0] */
  EAX = (r32((uint32_t)(0x115f7df0)));
  /* 115f29ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f29f0 je 0x115f2a14 */
  if (C.zf) goto L_115f2a14;
  /* 115f29f2 mov ecx, dword ptr [0x115f7dec] */
  ECX = (r32((uint32_t)(0x115f7dec)));
  /* 115f29f8 push esi */
  push32((uint32_t)(ESI));
  /* 115f29f9 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 115f29fc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f29fe jb 0x115f2a13 */
  if (C.cf) goto L_115f2a13;
L_115f2a00:;
  /* 115f2a00 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115f2a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2a04 je 0x115f2a08 */
  if (C.zf) goto L_115f2a08;
  /* 115f2a06 call eax */
  call_ind((uint32_t)(EAX), 0x115f2a08u);
L_115f2a08:;
  /* 115f2a08 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f2a0b cmp esi, dword ptr [0x115f7df0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x115f7df0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2a11 jae 0x115f2a00 */
  if (!C.cf) goto L_115f2a00;
L_115f2a13:;
  /* 115f2a13 pop esi */
  ESI = (pop32());
L_115f2a14:;
  /* 115f2a14 push 0x115f7018 */
  push32((uint32_t)(0x115f7018u));
  /* 115f2a19 push 0x115f7014 */
  push32((uint32_t)(0x115f7014u));
  /* 115f2a1e call 0x115f2a66 */
  push32(0x115f2a23u); f_115f2a66();
  /* 115f2a23 pop ecx */
  ECX = (pop32());
  /* 115f2a24 pop ecx */
  ECX = (pop32());
L_115f2a25:;
  /* 115f2a25 push 0x115f7020 */
  push32((uint32_t)(0x115f7020u));
  /* 115f2a2a push 0x115f701c */
  push32((uint32_t)(0x115f701cu));
  /* 115f2a2f call 0x115f2a66 */
  push32(0x115f2a34u); f_115f2a66();
  /* 115f2a34 pop ecx */
  ECX = (pop32());
  /* 115f2a35 pop ecx */
  ECX = (pop32());
  /* 115f2a36 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115f2a38 pop ebx */
  EBX = (pop32());
  /* 115f2a39 je 0x115f2a42 */
  if (C.zf) goto L_115f2a42;
  /* 115f2a3b call 0x115f2a5d */
  push32(0x115f2a40u); f_115f2a5d();
  /* 115f2a40 pop edi */
  EDI = (pop32());
  /* 115f2a41 ret  */
  ESPCHK(0x115f29afu, _esp0);
  ESP += 4; return;
L_115f2a42:;
  /* 115f2a42 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f2a46 mov dword ptr [0x115f78c8], edi */
  w32((uint32_t)(0x115f78c8), (EDI));
  /* 115f2a4c call dword ptr [0x115f6000] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6000))), 0x115f2a52u);
  /* 115f2a52 pop edi */
  EDI = (pop32());
  /* 115f2a53 ret  */
  ESPCHK(0x115f29afu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a54 @ 0x115f2a54 (9 bytes, 4 insns) */
void f_115f2a54(void) {
  FTRACE(0x115f2a54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2a54 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115f2a56 call 0x115f34bf */
  push32(0x115f2a5bu); f_115f34bf();
  /* 115f2a5b pop ecx */
  ECX = (pop32());
  /* 115f2a5c ret  */
  ESPCHK(0x115f2a54u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a5d @ 0x115f2a5d (9 bytes, 4 insns) */
void f_115f2a5d(void) {
  FTRACE(0x115f2a5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2a5d push 0xd */
  push32((uint32_t)(0xdu));
  /* 115f2a5f call 0x115f3520 */
  push32(0x115f2a64u); f_115f3520();
  /* 115f2a64 pop ecx */
  ECX = (pop32());
  /* 115f2a65 ret  */
  ESPCHK(0x115f2a5du, _esp0);
  ESP += 4; return;
}

/* FUN_10002a66 @ 0x115f2a66 (26 bytes, 12 insns) */
void f_115f2a66(void) {
  FTRACE(0x115f2a66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2a66 push esi */
  push32((uint32_t)(ESI));
  /* 115f2a67 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_115f2a6b:;
  /* 115f2a6b cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2a6f jae 0x115f2a7e */
  if (!C.cf) goto L_115f2a7e;
  /* 115f2a71 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115f2a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2a75 je 0x115f2a79 */
  if (C.zf) goto L_115f2a79;
  /* 115f2a77 call eax */
  call_ind((uint32_t)(EAX), 0x115f2a79u);
L_115f2a79:;
  /* 115f2a79 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2a7c jmp 0x115f2a6b */
  goto L_115f2a6b;
L_115f2a7e:;
  /* 115f2a7e pop esi */
  ESI = (pop32());
  /* 115f2a7f ret  */
  ESPCHK(0x115f2a66u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a80 @ 0x115f2a80 (84 bytes, 32 insns) */
void f_115f2a80(void) {
  FTRACE(0x115f2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2a80 push esi */
  push32((uint32_t)(ESI));
  /* 115f2a81 call 0x115f342a */
  push32(0x115f2a86u); f_115f342a();
  /* 115f2a86 call dword ptr [0x115f60a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60a8))), 0x115f2a8cu);
  /* 115f2a8c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2a8f mov dword ptr [0x115f7320], eax */
  w32((uint32_t)(0x115f7320), (EAX));
  /* 115f2a94 je 0x115f2ad0 */
  if (C.zf) goto L_115f2ad0;
  /* 115f2a96 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 115f2a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2a9a call 0x115f3535 */
  push32(0x115f2a9fu); f_115f3535();
  /* 115f2a9f mov esi, eax */
  ESI = (EAX);
  /* 115f2aa1 pop ecx */
  ECX = (pop32());
  /* 115f2aa2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2aa4 pop ecx */
  ECX = (pop32());
  /* 115f2aa5 je 0x115f2ad0 */
  if (C.zf) goto L_115f2ad0;
  /* 115f2aa7 push esi */
  push32((uint32_t)(ESI));
  /* 115f2aa8 push dword ptr [0x115f7320] */
  push32((uint32_t)(r32((uint32_t)(0x115f7320))));
  /* 115f2aae call dword ptr [0x115f609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f609c))), 0x115f2ab4u);
  /* 115f2ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2ab6 je 0x115f2ad0 */
  if (C.zf) goto L_115f2ad0;
  /* 115f2ab8 push esi */
  push32((uint32_t)(ESI));
  /* 115f2ab9 call 0x115f2af2 */
  push32(0x115f2abeu); f_115f2af2();
  /* 115f2abe pop ecx */
  ECX = (pop32());
  /* 115f2abf call dword ptr [0x115f60a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f60a0))), 0x115f2ac5u);
  /* 115f2ac5 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 115f2ac9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f2acb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 115f2acd pop eax */
  EAX = (pop32());
  /* 115f2ace pop esi */
  ESI = (pop32());
  /* 115f2acf ret  */
  ESPCHK(0x115f2a80u, _esp0);
  ESP += 4; return;
L_115f2ad0:;
  /* 115f2ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f2ad2 pop esi */
  ESI = (pop32());
  /* 115f2ad3 ret  */
  ESPCHK(0x115f2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad4 @ 0x115f2ad4 (30 bytes, 8 insns) */
void f_115f2ad4(void) {
  FTRACE(0x115f2ad4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2ad4 call 0x115f3453 */
  push32(0x115f2ad9u); f_115f3453();
  /* 115f2ad9 mov eax, dword ptr [0x115f7320] */
  EAX = (r32((uint32_t)(0x115f7320)));
  /* 115f2ade cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2ae1 je 0x115f2af1 */
  if (C.zf) goto L_115f2af1;
  /* 115f2ae3 push eax */
  push32((uint32_t)(EAX));
  /* 115f2ae4 call dword ptr [0x115f608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f608c))), 0x115f2aeau);
  /* 115f2aea or dword ptr [0x115f7320], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x115f7320)))|(0xffffffffu); w32((uint32_t)(0x115f7320), (_r)); fl_logic(_r,32); }
L_115f2af1:;
  /* 115f2af1 ret  */
  ESPCHK(0x115f2ad4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002af2 @ 0x115f2af2 (19 bytes, 4 insns) */
void f_115f2af2(void) {
  FTRACE(0x115f2af2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2af2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f2af6 mov dword ptr [eax + 0x50], 0x115f74a0 */
  w32((uint32_t)(EAX + 0x50), (0x115f74a0u));
  /* 115f2afd mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 115f2b04 ret  */
  ESPCHK(0x115f2af2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b05 @ 0x115f2b05 (160 bytes, 62 insns) */
void f_115f2b05(void) {
  FTRACE(0x115f2b05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2b05 mov eax, dword ptr [0x115f7320] */
  EAX = (r32((uint32_t)(0x115f7320)));
  /* 115f2b0a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2b0d je 0x115f2ba4 */
  if (C.zf) goto L_115f2ba4;
  /* 115f2b13 push esi */
  push32((uint32_t)(ESI));
  /* 115f2b14 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115f2b18 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2b1a jne 0x115f2b29 */
  if (!C.zf) goto L_115f2b29;
  /* 115f2b1c push eax */
  push32((uint32_t)(EAX));
  /* 115f2b1d call dword ptr [0x115f6090] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6090))), 0x115f2b23u);
  /* 115f2b23 mov esi, eax */
  ESI = (EAX);
  /* 115f2b25 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2b27 je 0x115f2b95 */
  if (C.zf) goto L_115f2b95;
L_115f2b29:;
  /* 115f2b29 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 115f2b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2b2e je 0x115f2b37 */
  if (C.zf) goto L_115f2b37;
  /* 115f2b30 push eax */
  push32((uint32_t)(EAX));
  /* 115f2b31 call 0x115f35c2 */
  push32(0x115f2b36u); f_115f35c2();
  /* 115f2b36 pop ecx */
  ECX = (pop32());
L_115f2b37:;
  /* 115f2b37 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 115f2b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2b3c je 0x115f2b45 */
  if (C.zf) goto L_115f2b45;
  /* 115f2b3e push eax */
  push32((uint32_t)(EAX));
  /* 115f2b3f call 0x115f35c2 */
  push32(0x115f2b44u); f_115f35c2();
  /* 115f2b44 pop ecx */
  ECX = (pop32());
L_115f2b45:;
  /* 115f2b45 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 115f2b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2b4a je 0x115f2b53 */
  if (C.zf) goto L_115f2b53;
  /* 115f2b4c push eax */
  push32((uint32_t)(EAX));
  /* 115f2b4d call 0x115f35c2 */
  push32(0x115f2b52u); f_115f35c2();
  /* 115f2b52 pop ecx */
  ECX = (pop32());
L_115f2b53:;
  /* 115f2b53 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 115f2b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2b58 je 0x115f2b61 */
  if (C.zf) goto L_115f2b61;
  /* 115f2b5a push eax */
  push32((uint32_t)(EAX));
  /* 115f2b5b call 0x115f35c2 */
  push32(0x115f2b60u); f_115f35c2();
  /* 115f2b60 pop ecx */
  ECX = (pop32());
L_115f2b61:;
  /* 115f2b61 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 115f2b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2b66 je 0x115f2b6f */
  if (C.zf) goto L_115f2b6f;
  /* 115f2b68 push eax */
  push32((uint32_t)(EAX));
  /* 115f2b69 call 0x115f35c2 */
  push32(0x115f2b6eu); f_115f35c2();
  /* 115f2b6e pop ecx */
  ECX = (pop32());
L_115f2b6f:;
  /* 115f2b6f mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 115f2b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2b74 je 0x115f2b7d */
  if (C.zf) goto L_115f2b7d;
  /* 115f2b76 push eax */
  push32((uint32_t)(EAX));
  /* 115f2b77 call 0x115f35c2 */
  push32(0x115f2b7cu); f_115f35c2();
  /* 115f2b7c pop ecx */
  ECX = (pop32());
L_115f2b7d:;
  /* 115f2b7d mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 115f2b80 cmp eax, 0x115f74a0 */
  { uint32_t _a=(EAX),_b=(0x115f74a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2b85 je 0x115f2b8e */
  if (C.zf) goto L_115f2b8e;
  /* 115f2b87 push eax */
  push32((uint32_t)(EAX));
  /* 115f2b88 call 0x115f35c2 */
  push32(0x115f2b8du); f_115f35c2();
  /* 115f2b8d pop ecx */
  ECX = (pop32());
L_115f2b8e:;
  /* 115f2b8e push esi */
  push32((uint32_t)(ESI));
  /* 115f2b8f call 0x115f35c2 */
  push32(0x115f2b94u); f_115f35c2();
  /* 115f2b94 pop ecx */
  ECX = (pop32());
L_115f2b95:;
  /* 115f2b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f2b97 push dword ptr [0x115f7320] */
  push32((uint32_t)(r32((uint32_t)(0x115f7320))));
  /* 115f2b9d call dword ptr [0x115f609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f609c))), 0x115f2ba3u);
  /* 115f2ba3 pop esi */
  ESI = (pop32());
L_115f2ba4:;
  /* 115f2ba4 ret  */
  ESPCHK(0x115f2b05u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba5 @ 0x115f2ba5 (444 bytes, 150 insns) */
void f_115f2ba5(void) {
  FTRACE(0x115f2ba5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2ba5 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2ba6 mov ebp, esp */
  EBP = (ESP);
  /* 115f2ba8 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f2bab push ebx */
  push32((uint32_t)(EBX));
  /* 115f2bac push esi */
  push32((uint32_t)(ESI));
  /* 115f2bad push edi */
  push32((uint32_t)(EDI));
  /* 115f2bae push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115f2bb3 call 0x115f360a */
  push32(0x115f2bb8u); f_115f360a();
  /* 115f2bb8 mov esi, eax */
  ESI = (EAX);
  /* 115f2bba pop ecx */
  ECX = (pop32());
  /* 115f2bbb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2bbd jne 0x115f2bc7 */
  if (!C.zf) goto L_115f2bc7;
  /* 115f2bbf push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 115f2bc1 call 0x115f292f */
  push32(0x115f2bc6u); f_115f292f();
  /* 115f2bc6 pop ecx */
  ECX = (pop32());
L_115f2bc7:;
  /* 115f2bc7 mov dword ptr [0x115f7ce0], esi */
  w32((uint32_t)(0x115f7ce0), (ESI));
  /* 115f2bcd mov dword ptr [0x115f7de0], 0x20 */
  w32((uint32_t)(0x115f7de0), (0x20u));
  /* 115f2bd7 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_115f2bdd:;
  /* 115f2bdd cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2bdf jae 0x115f2bff */
  if (!C.cf) goto L_115f2bff;
  /* 115f2be1 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 115f2be5 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 115f2be8 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 115f2bec mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 115f2bf0 mov eax, dword ptr [0x115f7ce0] */
  EAX = (r32((uint32_t)(0x115f7ce0)));
  /* 115f2bf5 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2bf8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2bfd jmp 0x115f2bdd */
  goto L_115f2bdd;
L_115f2bff:;
  /* 115f2bff lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 115f2c02 push eax */
  push32((uint32_t)(EAX));
  /* 115f2c03 call dword ptr [0x115f6084] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6084))), 0x115f2c09u);
  /* 115f2c09 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115f2c0e je 0x115f2ce5 */
  if (C.zf) goto L_115f2ce5;
  /* 115f2c14 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115f2c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2c19 je 0x115f2ce5 */
  if (C.zf) goto L_115f2ce5;
  /* 115f2c1f mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 115f2c21 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 115f2c24 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 115f2c27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115f2c2a mov eax, 0x800 */
  EAX = (0x800u);
  /* 115f2c2f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2c31 jl 0x115f2c35 */
  if ((C.sf!=C.of)) goto L_115f2c35;
  /* 115f2c33 mov edi, eax */
  EDI = (EAX);
L_115f2c35:;
  /* 115f2c35 cmp dword ptr [0x115f7de0], edi */
  { uint32_t _a=(r32((uint32_t)(0x115f7de0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2c3b jge 0x115f2c93 */
  if ((C.sf==C.of)) goto L_115f2c93;
  /* 115f2c3d mov esi, 0x115f7ce4 */
  ESI = (0x115f7ce4u);
L_115f2c42:;
  /* 115f2c42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115f2c47 call 0x115f360a */
  push32(0x115f2c4cu); f_115f360a();
  /* 115f2c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2c4e pop ecx */
  ECX = (pop32());
  /* 115f2c4f je 0x115f2c8d */
  if (C.zf) goto L_115f2c8d;
  /* 115f2c51 add dword ptr [0x115f7de0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x115f7de0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x115f7de0), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f2c58 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 115f2c5a lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_115f2c60:;
  /* 115f2c60 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2c62 jae 0x115f2c80 */
  if (!C.cf) goto L_115f2c80;
  /* 115f2c64 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 115f2c68 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115f2c6b and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115f2c6f mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 115f2c73 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 115f2c75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2c78 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2c7e jmp 0x115f2c60 */
  goto L_115f2c60;
L_115f2c80:;
  /* 115f2c80 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2c83 cmp dword ptr [0x115f7de0], edi */
  { uint32_t _a=(r32((uint32_t)(0x115f7de0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2c89 jl 0x115f2c42 */
  if ((C.sf!=C.of)) goto L_115f2c42;
  /* 115f2c8b jmp 0x115f2c93 */
  goto L_115f2c93;
L_115f2c8d:;
  /* 115f2c8d mov edi, dword ptr [0x115f7de0] */
  EDI = (r32((uint32_t)(0x115f7de0)));
L_115f2c93:;
  /* 115f2c93 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115f2c95 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f2c97 jle 0x115f2ce5 */
  if ((C.zf||C.sf!=C.of)) goto L_115f2ce5;
L_115f2c99:;
  /* 115f2c99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f2c9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115f2c9e cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2ca1 je 0x115f2cdb */
  if (C.zf) goto L_115f2cdb;
  /* 115f2ca3 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 115f2ca5 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 115f2ca7 je 0x115f2cdb */
  if (C.zf) goto L_115f2cdb;
  /* 115f2ca9 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 115f2cab jne 0x115f2cb8 */
  if (!C.zf) goto L_115f2cb8;
  /* 115f2cad push ecx */
  push32((uint32_t)(ECX));
  /* 115f2cae call dword ptr [0x115f607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f607c))), 0x115f2cb4u);
  /* 115f2cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2cb6 je 0x115f2cdb */
  if (C.zf) goto L_115f2cdb;
L_115f2cb8:;
  /* 115f2cb8 mov ecx, esi */
  ECX = (ESI);
  /* 115f2cba mov eax, esi */
  EAX = (ESI);
  /* 115f2cbc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115f2cbf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115f2cc2 mov ecx, dword ptr [ecx*4 + 0x115f7ce0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x115f7ce0)));
  /* 115f2cc9 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 115f2ccc lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 115f2ccf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f2cd2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 115f2cd4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115f2cd6 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 115f2cd8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_115f2cdb:;
  /* 115f2cdb add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f2cdf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f2ce0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115f2ce1 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2ce3 jl 0x115f2c99 */
  if ((C.sf!=C.of)) goto L_115f2c99;
L_115f2ce5:;
  /* 115f2ce5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115f2ce7:;
  /* 115f2ce7 mov ecx, dword ptr [0x115f7ce0] */
  ECX = (r32((uint32_t)(0x115f7ce0)));
  /* 115f2ced lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 115f2cf0 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2cf4 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 115f2cf7 jne 0x115f2d46 */
  if (!C.zf) goto L_115f2d46;
  /* 115f2cf9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115f2cfb mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 115f2cff jne 0x115f2d06 */
  if (!C.zf) goto L_115f2d06;
  /* 115f2d01 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 115f2d03 pop eax */
  EAX = (pop32());
  /* 115f2d04 jmp 0x115f2d10 */
  goto L_115f2d10;
L_115f2d06:;
  /* 115f2d06 mov eax, ebx */
  EAX = (EBX);
  /* 115f2d08 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f2d09 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115f2d0b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f2d0d add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115f2d10:;
  /* 115f2d10 push eax */
  push32((uint32_t)(EAX));
  /* 115f2d11 call dword ptr [0x115f6080] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6080))), 0x115f2d17u);
  /* 115f2d17 mov edi, eax */
  EDI = (EAX);
  /* 115f2d19 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d1c je 0x115f2d35 */
  if (C.zf) goto L_115f2d35;
  /* 115f2d1e push edi */
  push32((uint32_t)(EDI));
  /* 115f2d1f call dword ptr [0x115f607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f607c))), 0x115f2d25u);
  /* 115f2d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2d27 je 0x115f2d35 */
  if (C.zf) goto L_115f2d35;
  /* 115f2d29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f2d2e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115f2d30 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d33 jne 0x115f2d3b */
  if (!C.zf) goto L_115f2d3b;
L_115f2d35:;
  /* 115f2d35 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 115f2d39 jmp 0x115f2d4a */
  goto L_115f2d4a;
L_115f2d3b:;
  /* 115f2d3b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d3e jne 0x115f2d4a */
  if (!C.zf) goto L_115f2d4a;
  /* 115f2d40 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 115f2d44 jmp 0x115f2d4a */
  goto L_115f2d4a;
L_115f2d46:;
  /* 115f2d46 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_115f2d4a:;
  /* 115f2d4a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115f2d4b cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d4e jl 0x115f2ce7 */
  if ((C.sf!=C.of)) goto L_115f2ce7;
  /* 115f2d50 push dword ptr [0x115f7de0] */
  push32((uint32_t)(r32((uint32_t)(0x115f7de0))));
  /* 115f2d56 call dword ptr [0x115f6088] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6088))), 0x115f2d5cu);
  /* 115f2d5c pop edi */
  EDI = (pop32());
  /* 115f2d5d pop esi */
  ESI = (pop32());
  /* 115f2d5e pop ebx */
  EBX = (pop32());
  /* 115f2d5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f2d60 ret  */
  ESPCHK(0x115f2ba5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d61 @ 0x115f2d61 (84 bytes, 33 insns) */
void f_115f2d61(void) {
  FTRACE(0x115f2d61u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2d61 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2d62 push esi */
  push32((uint32_t)(ESI));
  /* 115f2d63 push edi */
  push32((uint32_t)(EDI));
  /* 115f2d64 mov esi, 0x115f7ce0 */
  ESI = (0x115f7ce0u);
L_115f2d69:;
  /* 115f2d69 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115f2d6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f2d6d je 0x115f2da6 */
  if (C.zf) goto L_115f2da6;
  /* 115f2d6f mov edi, eax */
  EDI = (EAX);
  /* 115f2d71 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2d76 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d78 jae 0x115f2d9b */
  if (!C.cf) goto L_115f2d9b;
  /* 115f2d7a lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_115f2d7d:;
  /* 115f2d7d cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d81 je 0x115f2d8a */
  if (C.zf) goto L_115f2d8a;
  /* 115f2d83 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2d84 call dword ptr [0x115f6074] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6074))), 0x115f2d8au);
L_115f2d8a:;
  /* 115f2d8a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115f2d8c add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2d8f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2d94 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2d97 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2d99 jb 0x115f2d7d */
  if (C.cf) goto L_115f2d7d;
L_115f2d9b:;
  /* 115f2d9b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f2d9d call 0x115f35c2 */
  push32(0x115f2da2u); f_115f35c2();
  /* 115f2da2 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 115f2da5 pop ecx */
  ECX = (pop32());
L_115f2da6:;
  /* 115f2da6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2da9 cmp esi, 0x115f7de0 */
  { uint32_t _a=(ESI),_b=(0x115f7de0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2daf jl 0x115f2d69 */
  if ((C.sf!=C.of)) goto L_115f2d69;
  /* 115f2db1 pop edi */
  EDI = (pop32());
  /* 115f2db2 pop esi */
  ESI = (pop32());
  /* 115f2db3 pop ebx */
  EBX = (pop32());
  /* 115f2db4 ret  */
  ESPCHK(0x115f2d61u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db5 @ 0x115f2db5 (185 bytes, 71 insns) */
void f_115f2db5(void) {
  FTRACE(0x115f2db5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2db5 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2db6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f2db8 cmp dword ptr [0x115f7de8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115f7de8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2dbe push esi */
  push32((uint32_t)(ESI));
  /* 115f2dbf push edi */
  push32((uint32_t)(EDI));
  /* 115f2dc0 jne 0x115f2dc7 */
  if (!C.zf) goto L_115f2dc7;
  /* 115f2dc2 call 0x115f3be3 */
  push32(0x115f2dc7u); f_115f3be3();
L_115f2dc7:;
  /* 115f2dc7 mov esi, dword ptr [0x115f7878] */
  ESI = (r32((uint32_t)(0x115f7878)));
  /* 115f2dcd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_115f2dcf:;
  /* 115f2dcf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f2dd1 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2dd3 je 0x115f2de7 */
  if (C.zf) goto L_115f2de7;
  /* 115f2dd5 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2dd7 je 0x115f2dda */
  if (C.zf) goto L_115f2dda;
  /* 115f2dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_115f2dda:;
  /* 115f2dda push esi */
  push32((uint32_t)(ESI));
  /* 115f2ddb call 0x115f3790 */
  push32(0x115f2de0u); f_115f3790();
  /* 115f2de0 pop ecx */
  ECX = (pop32());
  /* 115f2de1 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 115f2de5 jmp 0x115f2dcf */
  goto L_115f2dcf;
L_115f2de7:;
  /* 115f2de7 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 115f2dee push eax */
  push32((uint32_t)(EAX));
  /* 115f2def call 0x115f360a */
  push32(0x115f2df4u); f_115f360a();
  /* 115f2df4 mov esi, eax */
  ESI = (EAX);
  /* 115f2df6 pop ecx */
  ECX = (pop32());
  /* 115f2df7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2df9 mov dword ptr [0x115f78a8], esi */
  w32((uint32_t)(0x115f78a8), (ESI));
  /* 115f2dff jne 0x115f2e09 */
  if (!C.zf) goto L_115f2e09;
  /* 115f2e01 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f2e03 call 0x115f292f */
  push32(0x115f2e08u); f_115f292f();
  /* 115f2e08 pop ecx */
  ECX = (pop32());
L_115f2e09:;
  /* 115f2e09 mov edi, dword ptr [0x115f7878] */
  EDI = (r32((uint32_t)(0x115f7878)));
  /* 115f2e0f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2e11 je 0x115f2e4c */
  if (C.zf) goto L_115f2e4c;
  /* 115f2e13 push ebp */
  push32((uint32_t)(EBP));
L_115f2e14:;
  /* 115f2e14 push edi */
  push32((uint32_t)(EDI));
  /* 115f2e15 call 0x115f3790 */
  push32(0x115f2e1au); f_115f3790();
  /* 115f2e1a mov ebp, eax */
  EBP = (EAX);
  /* 115f2e1c pop ecx */
  ECX = (pop32());
  /* 115f2e1d inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 115f2e1e cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2e21 je 0x115f2e45 */
  if (C.zf) goto L_115f2e45;
  /* 115f2e23 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2e24 call 0x115f360a */
  push32(0x115f2e29u); f_115f360a();
  /* 115f2e29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2e2b pop ecx */
  ECX = (pop32());
  /* 115f2e2c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 115f2e2e jne 0x115f2e38 */
  if (!C.zf) goto L_115f2e38;
  /* 115f2e30 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f2e32 call 0x115f292f */
  push32(0x115f2e37u); f_115f292f();
  /* 115f2e37 pop ecx */
  ECX = (pop32());
L_115f2e38:;
  /* 115f2e38 push edi */
  push32((uint32_t)(EDI));
  /* 115f2e39 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f2e3b call 0x115f36a0 */
  push32(0x115f2e40u); f_115f36a0();
  /* 115f2e40 pop ecx */
  ECX = (pop32());
  /* 115f2e41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2e44 pop ecx */
  ECX = (pop32());
L_115f2e45:;
  /* 115f2e45 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2e47 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2e49 jne 0x115f2e14 */
  if (!C.zf) goto L_115f2e14;
  /* 115f2e4b pop ebp */
  EBP = (pop32());
L_115f2e4c:;
  /* 115f2e4c push dword ptr [0x115f7878] */
  push32((uint32_t)(r32((uint32_t)(0x115f7878))));
  /* 115f2e52 call 0x115f35c2 */
  push32(0x115f2e57u); f_115f35c2();
  /* 115f2e57 pop ecx */
  ECX = (pop32());
  /* 115f2e58 mov dword ptr [0x115f7878], ebx */
  w32((uint32_t)(0x115f7878), (EBX));
  /* 115f2e5e mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 115f2e60 pop edi */
  EDI = (pop32());
  /* 115f2e61 pop esi */
  ESI = (pop32());
  /* 115f2e62 mov dword ptr [0x115f7de4], 1 */
  w32((uint32_t)(0x115f7de4), (0x1u));
  /* 115f2e6c pop ebx */
  EBX = (pop32());
  /* 115f2e6d ret  */
  ESPCHK(0x115f2db5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e6e @ 0x115f2e6e (153 bytes, 62 insns) */
void f_115f2e6e(void) {
  FTRACE(0x115f2e6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2e6e push ebp */
  push32((uint32_t)(EBP));
  /* 115f2e6f mov ebp, esp */
  EBP = (ESP);
  /* 115f2e71 push ecx */
  push32((uint32_t)(ECX));
  /* 115f2e72 push ecx */
  push32((uint32_t)(ECX));
  /* 115f2e73 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2e74 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f2e76 cmp dword ptr [0x115f7de8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115f7de8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2e7c push esi */
  push32((uint32_t)(ESI));
  /* 115f2e7d push edi */
  push32((uint32_t)(EDI));
  /* 115f2e7e jne 0x115f2e85 */
  if (!C.zf) goto L_115f2e85;
  /* 115f2e80 call 0x115f3be3 */
  push32(0x115f2e85u); f_115f3be3();
L_115f2e85:;
  /* 115f2e85 mov esi, 0x115f78cc */
  ESI = (0x115f78ccu);
  /* 115f2e8a push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115f2e8f push esi */
  push32((uint32_t)(ESI));
  /* 115f2e90 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2e91 call dword ptr [0x115f6070] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6070))), 0x115f2e97u);
  /* 115f2e97 mov eax, dword ptr [0x115f7df8] */
  EAX = (r32((uint32_t)(0x115f7df8)));
  /* 115f2e9c mov dword ptr [0x115f78b8], esi */
  w32((uint32_t)(0x115f78b8), (ESI));
  /* 115f2ea2 mov edi, esi */
  EDI = (ESI);
  /* 115f2ea4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2ea6 je 0x115f2eaa */
  if (C.zf) goto L_115f2eaa;
  /* 115f2ea8 mov edi, eax */
  EDI = (EAX);
L_115f2eaa:;
  /* 115f2eaa lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115f2ead push eax */
  push32((uint32_t)(EAX));
  /* 115f2eae lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 115f2eb1 push eax */
  push32((uint32_t)(EAX));
  /* 115f2eb2 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2eb3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2eb4 push edi */
  push32((uint32_t)(EDI));
  /* 115f2eb5 call 0x115f2f07 */
  push32(0x115f2ebau); f_115f2f07();
  /* 115f2eba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115f2ebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f2ec0 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 115f2ec3 push eax */
  push32((uint32_t)(EAX));
  /* 115f2ec4 call 0x115f360a */
  push32(0x115f2ec9u); f_115f360a();
  /* 115f2ec9 mov esi, eax */
  ESI = (EAX);
  /* 115f2ecb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2ece cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f2ed0 jne 0x115f2eda */
  if (!C.zf) goto L_115f2eda;
  /* 115f2ed2 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f2ed4 call 0x115f292f */
  push32(0x115f2ed9u); f_115f292f();
  /* 115f2ed9 pop ecx */
  ECX = (pop32());
L_115f2eda:;
  /* 115f2eda lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115f2edd push eax */
  push32((uint32_t)(EAX));
  /* 115f2ede lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 115f2ee1 push eax */
  push32((uint32_t)(EAX));
  /* 115f2ee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f2ee5 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 115f2ee8 push eax */
  push32((uint32_t)(EAX));
  /* 115f2ee9 push esi */
  push32((uint32_t)(ESI));
  /* 115f2eea push edi */
  push32((uint32_t)(EDI));
  /* 115f2eeb call 0x115f2f07 */
  push32(0x115f2ef0u); f_115f2f07();
  /* 115f2ef0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f2ef3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2ef6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f2ef7 mov dword ptr [0x115f78a0], esi */
  w32((uint32_t)(0x115f78a0), (ESI));
  /* 115f2efd pop edi */
  EDI = (pop32());
  /* 115f2efe pop esi */
  ESI = (pop32());
  /* 115f2eff mov dword ptr [0x115f789c], eax */
  w32((uint32_t)(0x115f789c), (EAX));
  /* 115f2f04 pop ebx */
  EBX = (pop32());
  /* 115f2f05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f2f06 ret  */
  ESPCHK(0x115f2e6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f07 @ 0x115f2f07 (436 bytes, 187 insns) */
void f_115f2f07(void) {
  FTRACE(0x115f2f07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f2f07 push ebp */
  push32((uint32_t)(EBP));
  /* 115f2f08 mov ebp, esp */
  EBP = (ESP);
  /* 115f2f0a mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115f2f0d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115f2f10 push ebx */
  push32((uint32_t)(EBX));
  /* 115f2f11 push esi */
  push32((uint32_t)(ESI));
  /* 115f2f12 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115f2f15 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 115f2f18 push edi */
  push32((uint32_t)(EDI));
  /* 115f2f19 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 115f2f1c mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 115f2f22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f2f25 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f2f27 je 0x115f2f31 */
  if (C.zf) goto L_115f2f31;
  /* 115f2f29 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 115f2f2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2f2e mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_115f2f31:;
  /* 115f2f31 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2f34 jne 0x115f2f7a */
  if (!C.zf) goto L_115f2f7a;
L_115f2f36:;
  /* 115f2f36 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 115f2f39 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f2f3a cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2f3d je 0x115f2f68 */
  if (C.zf) goto L_115f2f68;
  /* 115f2f3f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f2f41 je 0x115f2f68 */
  if (C.zf) goto L_115f2f68;
  /* 115f2f43 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 115f2f46 test byte ptr [edx + 0x115f7bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x115f7bc1)))&(0x4u); fl_logic(_r,8); }
  /* 115f2f4d je 0x115f2f5b */
  if (C.zf) goto L_115f2f5b;
  /* 115f2f4f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f2f51 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2f53 je 0x115f2f5b */
  if (C.zf) goto L_115f2f5b;
  /* 115f2f55 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f2f57 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115f2f59 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f2f5a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115f2f5b:;
  /* 115f2f5b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f2f5d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2f5f je 0x115f2f36 */
  if (C.zf) goto L_115f2f36;
  /* 115f2f61 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f2f63 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115f2f65 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f2f66 jmp 0x115f2f36 */
  goto L_115f2f36;
L_115f2f68:;
  /* 115f2f68 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f2f6a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2f6c je 0x115f2f72 */
  if (C.zf) goto L_115f2f72;
  /* 115f2f6e and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 115f2f71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115f2f72:;
  /* 115f2f72 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2f75 jne 0x115f2fbd */
  if (!C.zf) goto L_115f2fbd;
  /* 115f2f77 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f2f78 jmp 0x115f2fbd */
  goto L_115f2fbd;
L_115f2f7a:;
  /* 115f2f7a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f2f7c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2f7e je 0x115f2f85 */
  if (C.zf) goto L_115f2f85;
  /* 115f2f80 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f2f82 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115f2f84 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115f2f85:;
  /* 115f2f85 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f2f87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f2f88 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 115f2f8b test byte ptr [ebx + 0x115f7bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x115f7bc1)))&(0x4u); fl_logic(_r,8); }
  /* 115f2f92 je 0x115f2fa0 */
  if (C.zf) goto L_115f2fa0;
  /* 115f2f94 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f2f96 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2f98 je 0x115f2f9f */
  if (C.zf) goto L_115f2f9f;
  /* 115f2f9a mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 115f2f9c mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 115f2f9e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115f2f9f:;
  /* 115f2f9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115f2fa0:;
  /* 115f2fa0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fa3 je 0x115f2fae */
  if (C.zf) goto L_115f2fae;
  /* 115f2fa5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f2fa7 je 0x115f2fb2 */
  if (C.zf) goto L_115f2fb2;
  /* 115f2fa9 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fac jne 0x115f2f7a */
  if (!C.zf) goto L_115f2f7a;
L_115f2fae:;
  /* 115f2fae test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f2fb0 jne 0x115f2fb5 */
  if (!C.zf) goto L_115f2fb5;
L_115f2fb2:;
  /* 115f2fb2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f2fb3 jmp 0x115f2fbd */
  goto L_115f2fbd;
L_115f2fb5:;
  /* 115f2fb5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f2fb7 je 0x115f2fbd */
  if (C.zf) goto L_115f2fbd;
  /* 115f2fb9 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_115f2fbd:;
  /* 115f2fbd and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_115f2fc1:;
  /* 115f2fc1 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fc4 je 0x115f30aa */
  if (C.zf) goto L_115f30aa;
L_115f2fca:;
  /* 115f2fca mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f2fcc cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fcf je 0x115f2fd6 */
  if (C.zf) goto L_115f2fd6;
  /* 115f2fd1 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fd4 jne 0x115f2fd9 */
  if (!C.zf) goto L_115f2fd9;
L_115f2fd6:;
  /* 115f2fd6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f2fd7 jmp 0x115f2fca */
  goto L_115f2fca;
L_115f2fd9:;
  /* 115f2fd9 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fdc je 0x115f30aa */
  if (C.zf) goto L_115f30aa;
  /* 115f2fe2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f2fe4 je 0x115f2fee */
  if (C.zf) goto L_115f2fee;
  /* 115f2fe6 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 115f2fe8 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f2feb mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_115f2fee:;
  /* 115f2fee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115f2ff1 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_115f2ff3:;
  /* 115f2ff3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 115f2ffa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115f2ffc:;
  /* 115f2ffc cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f2fff jne 0x115f3005 */
  if (!C.zf) goto L_115f3005;
  /* 115f3001 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3002 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115f3003 jmp 0x115f2ffc */
  goto L_115f2ffc;
L_115f3005:;
  /* 115f3005 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f3008 jne 0x115f3036 */
  if (!C.zf) goto L_115f3036;
  /* 115f300a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 115f300d jne 0x115f3034 */
  if (!C.zf) goto L_115f3034;
  /* 115f300f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f3011 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3014 je 0x115f3023 */
  if (C.zf) goto L_115f3023;
  /* 115f3016 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f301a lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 115f301d jne 0x115f3023 */
  if (!C.zf) goto L_115f3023;
  /* 115f301f mov eax, edx */
  EAX = (EDX);
  /* 115f3021 jmp 0x115f3026 */
  goto L_115f3026;
L_115f3023:;
  /* 115f3023 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_115f3026:;
  /* 115f3026 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 115f3029 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115f302b cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f302e sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 115f3031 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_115f3034:;
  /* 115f3034 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_115f3036:;
  /* 115f3036 mov edx, ebx */
  EDX = (EBX);
  /* 115f3038 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115f3039 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115f303b je 0x115f304b */
  if (C.zf) goto L_115f304b;
  /* 115f303d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_115f303e:;
  /* 115f303e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f3040 je 0x115f3046 */
  if (C.zf) goto L_115f3046;
  /* 115f3042 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 115f3045 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115f3046:;
  /* 115f3046 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f3048 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115f3049 jne 0x115f303e */
  if (!C.zf) goto L_115f303e;
L_115f304b:;
  /* 115f304b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f304d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f304f je 0x115f309b */
  if (C.zf) goto L_115f309b;
  /* 115f3051 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3055 jne 0x115f3061 */
  if (!C.zf) goto L_115f3061;
  /* 115f3057 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f305a je 0x115f309b */
  if (C.zf) goto L_115f309b;
  /* 115f305c cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f305f je 0x115f309b */
  if (C.zf) goto L_115f309b;
L_115f3061:;
  /* 115f3061 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3065 je 0x115f3095 */
  if (C.zf) goto L_115f3095;
  /* 115f3067 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f3069 je 0x115f3084 */
  if (C.zf) goto L_115f3084;
  /* 115f306b movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 115f306e test byte ptr [ebx + 0x115f7bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x115f7bc1)))&(0x4u); fl_logic(_r,8); }
  /* 115f3075 je 0x115f307d */
  if (C.zf) goto L_115f307d;
  /* 115f3077 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115f3079 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f307a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f307b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115f307d:;
  /* 115f307d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115f307f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115f3081 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f3082 jmp 0x115f3093 */
  goto L_115f3093;
L_115f3084:;
  /* 115f3084 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 115f3087 test byte ptr [edx + 0x115f7bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x115f7bc1)))&(0x4u); fl_logic(_r,8); }
  /* 115f308e je 0x115f3093 */
  if (C.zf) goto L_115f3093;
  /* 115f3090 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3091 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115f3093:;
  /* 115f3093 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115f3095:;
  /* 115f3095 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3096 jmp 0x115f2ff3 */
  goto L_115f2ff3;
L_115f309b:;
  /* 115f309b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f309d je 0x115f30a3 */
  if (C.zf) goto L_115f30a3;
  /* 115f309f and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 115f30a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115f30a3:;
  /* 115f30a3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115f30a5 jmp 0x115f2fc1 */
  goto L_115f2fc1;
L_115f30aa:;
  /* 115f30aa test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f30ac je 0x115f30b1 */
  if (C.zf) goto L_115f30b1;
  /* 115f30ae and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_115f30b1:;
  /* 115f30b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115f30b4 pop edi */
  EDI = (pop32());
  /* 115f30b5 pop esi */
  ESI = (pop32());
  /* 115f30b6 pop ebx */
  EBX = (pop32());
  /* 115f30b7 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 115f30b9 pop ebp */
  EBP = (pop32());
  /* 115f30ba ret  */
  ESPCHK(0x115f2f07u, _esp0);
  ESP += 4; return;
}

/* FUN_100030bb @ 0x115f30bb (306 bytes, 132 insns) */
void f_115f30bb(void) {
  FTRACE(0x115f30bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f30bb push ecx */
  push32((uint32_t)(ECX));
  /* 115f30bc push ecx */
  push32((uint32_t)(ECX));
  /* 115f30bd mov eax, dword ptr [0x115f79d0] */
  EAX = (r32((uint32_t)(0x115f79d0)));
  /* 115f30c2 push ebx */
  push32((uint32_t)(EBX));
  /* 115f30c3 push ebp */
  push32((uint32_t)(EBP));
  /* 115f30c4 mov ebp, dword ptr [0x115f605c] */
  EBP = (r32((uint32_t)(0x115f605c)));
  /* 115f30ca push esi */
  push32((uint32_t)(ESI));
  /* 115f30cb push edi */
  push32((uint32_t)(EDI));
  /* 115f30cc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f30ce xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115f30d0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f30d2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f30d4 jne 0x115f3109 */
  if (!C.zf) goto L_115f3109;
  /* 115f30d6 call ebp */
  call_ind((uint32_t)(EBP), 0x115f30d8u);
  /* 115f30d8 mov esi, eax */
  ESI = (EAX);
  /* 115f30da cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f30dc je 0x115f30ea */
  if (C.zf) goto L_115f30ea;
  /* 115f30de mov dword ptr [0x115f79d0], 1 */
  w32((uint32_t)(0x115f79d0), (0x1u));
  /* 115f30e8 jmp 0x115f3112 */
  goto L_115f3112;
L_115f30ea:;
  /* 115f30ea call dword ptr [0x115f606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f606c))), 0x115f30f0u);
  /* 115f30f0 mov edi, eax */
  EDI = (EAX);
  /* 115f30f2 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f30f4 je 0x115f31e4 */
  if (C.zf) goto L_115f31e4;
  /* 115f30fa mov dword ptr [0x115f79d0], 2 */
  w32((uint32_t)(0x115f79d0), (0x2u));
  /* 115f3104 jmp 0x115f3198 */
  goto L_115f3198;
L_115f3109:;
  /* 115f3109 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f310c jne 0x115f3193 */
  if (!C.zf) goto L_115f3193;
L_115f3112:;
  /* 115f3112 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3114 jne 0x115f3122 */
  if (!C.zf) goto L_115f3122;
  /* 115f3116 call ebp */
  call_ind((uint32_t)(EBP), 0x115f3118u);
  /* 115f3118 mov esi, eax */
  ESI = (EAX);
  /* 115f311a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f311c je 0x115f31e4 */
  if (C.zf) goto L_115f31e4;
L_115f3122:;
  /* 115f3122 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115f3125 mov eax, esi */
  EAX = (ESI);
  /* 115f3127 je 0x115f3137 */
  if (C.zf) goto L_115f3137;
L_115f3129:;
  /* 115f3129 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f312a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f312b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115f312e jne 0x115f3129 */
  if (!C.zf) goto L_115f3129;
  /* 115f3130 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3131 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3132 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 115f3135 jne 0x115f3129 */
  if (!C.zf) goto L_115f3129;
L_115f3137:;
  /* 115f3137 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3139 mov edi, dword ptr [0x115f6064] */
  EDI = (r32((uint32_t)(0x115f6064)));
  /* 115f313f sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115f3141 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3142 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3143 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3144 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3145 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3146 push eax */
  push32((uint32_t)(EAX));
  /* 115f3147 push esi */
  push32((uint32_t)(ESI));
  /* 115f3148 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3149 push ebx */
  push32((uint32_t)(EBX));
  /* 115f314a mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 115f314e call edi */
  call_ind((uint32_t)(EDI), 0x115f3150u);
  /* 115f3150 mov ebp, eax */
  EBP = (EAX);
  /* 115f3152 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3154 je 0x115f3188 */
  if (C.zf) goto L_115f3188;
  /* 115f3156 push ebp */
  push32((uint32_t)(EBP));
  /* 115f3157 call 0x115f360a */
  push32(0x115f315cu); f_115f360a();
  /* 115f315c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f315e pop ecx */
  ECX = (pop32());
  /* 115f315f mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 115f3163 je 0x115f3188 */
  if (C.zf) goto L_115f3188;
  /* 115f3165 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3166 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3167 push ebp */
  push32((uint32_t)(EBP));
  /* 115f3168 push eax */
  push32((uint32_t)(EAX));
  /* 115f3169 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 115f316d push esi */
  push32((uint32_t)(ESI));
  /* 115f316e push ebx */
  push32((uint32_t)(EBX));
  /* 115f316f push ebx */
  push32((uint32_t)(EBX));
  /* 115f3170 call edi */
  call_ind((uint32_t)(EDI), 0x115f3172u);
  /* 115f3172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f3174 jne 0x115f3184 */
  if (!C.zf) goto L_115f3184;
  /* 115f3176 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115f317a call 0x115f35c2 */
  push32(0x115f317fu); f_115f35c2();
  /* 115f317f pop ecx */
  ECX = (pop32());
  /* 115f3180 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_115f3184:;
  /* 115f3184 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_115f3188:;
  /* 115f3188 push esi */
  push32((uint32_t)(ESI));
  /* 115f3189 call dword ptr [0x115f6068] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6068))), 0x115f318fu);
  /* 115f318f mov eax, ebx */
  EAX = (EBX);
  /* 115f3191 jmp 0x115f31e6 */
  goto L_115f31e6;
L_115f3193:;
  /* 115f3193 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3196 jne 0x115f31e4 */
  if (!C.zf) goto L_115f31e4;
L_115f3198:;
  /* 115f3198 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f319a jne 0x115f31a8 */
  if (!C.zf) goto L_115f31a8;
  /* 115f319c call dword ptr [0x115f606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f606c))), 0x115f31a2u);
  /* 115f31a2 mov edi, eax */
  EDI = (EAX);
  /* 115f31a4 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f31a6 je 0x115f31e4 */
  if (C.zf) goto L_115f31e4;
L_115f31a8:;
  /* 115f31a8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f31aa mov eax, edi */
  EAX = (EDI);
  /* 115f31ac je 0x115f31b8 */
  if (C.zf) goto L_115f31b8;
L_115f31ae:;
  /* 115f31ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f31af cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f31b1 jne 0x115f31ae */
  if (!C.zf) goto L_115f31ae;
  /* 115f31b3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f31b4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f31b6 jne 0x115f31ae */
  if (!C.zf) goto L_115f31ae;
L_115f31b8:;
  /* 115f31b8 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f31ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f31bb mov ebp, eax */
  EBP = (EAX);
  /* 115f31bd push ebp */
  push32((uint32_t)(EBP));
  /* 115f31be call 0x115f360a */
  push32(0x115f31c3u); f_115f360a();
  /* 115f31c3 mov esi, eax */
  ESI = (EAX);
  /* 115f31c5 pop ecx */
  ECX = (pop32());
  /* 115f31c6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f31c8 jne 0x115f31ce */
  if (!C.zf) goto L_115f31ce;
  /* 115f31ca xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115f31cc jmp 0x115f31d9 */
  goto L_115f31d9;
L_115f31ce:;
  /* 115f31ce push ebp */
  push32((uint32_t)(EBP));
  /* 115f31cf push edi */
  push32((uint32_t)(EDI));
  /* 115f31d0 push esi */
  push32((uint32_t)(ESI));
  /* 115f31d1 call 0x115f3c00 */
  push32(0x115f31d6u); f_115f3c00();
  /* 115f31d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f31d9:;
  /* 115f31d9 push edi */
  push32((uint32_t)(EDI));
  /* 115f31da call dword ptr [0x115f6078] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6078))), 0x115f31e0u);
  /* 115f31e0 mov eax, esi */
  EAX = (ESI);
  /* 115f31e2 jmp 0x115f31e6 */
  goto L_115f31e6;
L_115f31e4:;
  /* 115f31e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115f31e6:;
  /* 115f31e6 pop edi */
  EDI = (pop32());
  /* 115f31e7 pop esi */
  ESI = (pop32());
  /* 115f31e8 pop ebp */
  EBP = (pop32());
  /* 115f31e9 pop ebx */
  EBX = (pop32());
  /* 115f31ea pop ecx */
  ECX = (pop32());
  /* 115f31eb pop ecx */
  ECX = (pop32());
  /* 115f31ec ret  */
  ESPCHK(0x115f30bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100031ed @ 0x115f31ed (60 bytes, 20 insns) */
void f_115f31ed(void) {
  FTRACE(0x115f31edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f31ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f31ef push 0 */
  push32((uint32_t)(0x0u));
  /* 115f31f1 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f31f5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115f31fa sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 115f31fd push eax */
  push32((uint32_t)(EAX));
  /* 115f31fe call dword ptr [0x115f6060] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6060))), 0x115f3204u);
  /* 115f3204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f3206 mov dword ptr [0x115f7cc8], eax */
  w32((uint32_t)(0x115f7cc8), (EAX));
  /* 115f320b je 0x115f3222 */
  if (C.zf) goto L_115f3222;
  /* 115f320d call 0x115f3f35 */
  push32(0x115f3212u); f_115f3f35();
  /* 115f3212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f3214 jne 0x115f3225 */
  if (!C.zf) goto L_115f3225;
  /* 115f3216 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f321c call dword ptr [0x115f6058] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6058))), 0x115f3222u);
L_115f3222:;
  /* 115f3222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3224 ret  */
  ESPCHK(0x115f31edu, _esp0);
  ESP += 4; return;
L_115f3225:;
  /* 115f3225 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f3227 pop eax */
  EAX = (pop32());
  /* 115f3228 ret  */
  ESPCHK(0x115f31edu, _esp0);
  ESP += 4; return;
}

/* FUN_10003229 @ 0x115f3229 (117 bytes, 38 insns) */
void f_115f3229(void) {
  FTRACE(0x115f3229u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3229 push ebx */
  push32((uint32_t)(EBX));
  /* 115f322a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f322c cmp dword ptr [0x115f7a88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115f7a88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3232 push ebp */
  push32((uint32_t)(EBP));
  /* 115f3233 mov ebp, dword ptr [0x115f604c] */
  EBP = (r32((uint32_t)(0x115f604c)));
  /* 115f3239 jle 0x115f327f */
  if ((C.zf||C.sf!=C.of)) goto L_115f327f;
  /* 115f323b mov eax, dword ptr [0x115f7a8c] */
  EAX = (r32((uint32_t)(0x115f7a8c)));
  /* 115f3240 push esi */
  push32((uint32_t)(ESI));
  /* 115f3241 push edi */
  push32((uint32_t)(EDI));
  /* 115f3242 mov edi, dword ptr [0x115f6050] */
  EDI = (r32((uint32_t)(0x115f6050)));
  /* 115f3248 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_115f324b:;
  /* 115f324b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115f3250 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115f3255 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f3257 call edi */
  call_ind((uint32_t)(EDI), 0x115f3259u);
  /* 115f3259 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115f325e push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3260 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f3262 call edi */
  call_ind((uint32_t)(EDI), 0x115f3264u);
  /* 115f3264 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 115f3267 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3269 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f326f call ebp */
  call_ind((uint32_t)(EBP), 0x115f3271u);
  /* 115f3271 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3274 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115f3275 cmp ebx, dword ptr [0x115f7a88] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115f7a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f327b jl 0x115f324b */
  if ((C.sf!=C.of)) goto L_115f324b;
  /* 115f327d pop edi */
  EDI = (pop32());
  /* 115f327e pop esi */
  ESI = (pop32());
L_115f327f:;
  /* 115f327f push dword ptr [0x115f7a8c] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a8c))));
  /* 115f3285 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3287 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f328d call ebp */
  call_ind((uint32_t)(EBP), 0x115f328fu);
  /* 115f328f push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f3295 call dword ptr [0x115f6058] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6058))), 0x115f329bu);
  /* 115f329b pop ebp */
  EBP = (pop32());
  /* 115f329c pop ebx */
  EBX = (pop32());
  /* 115f329d ret  */
  ESPCHK(0x115f3229u, _esp0);
  ESP += 4; return;
}

/* FUN_1000329e @ 0x115f329e (57 bytes, 18 insns) */
void f_115f329e(void) {
  FTRACE(0x115f329eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f329e mov eax, dword ptr [0x115f7880] */
  EAX = (r32((uint32_t)(0x115f7880)));
  /* 115f32a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f32a6 je 0x115f32b5 */
  if (C.zf) goto L_115f32b5;
  /* 115f32a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f32aa jne 0x115f32d6 */
  if (!C.zf) goto L_115f32d6;
  /* 115f32ac cmp dword ptr [0x115f7884], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115f7884))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f32b3 jne 0x115f32d6 */
  if (!C.zf) goto L_115f32d6;
L_115f32b5:;
  /* 115f32b5 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 115f32ba call 0x115f32d7 */
  push32(0x115f32bfu); f_115f32d7();
  /* 115f32bf mov eax, dword ptr [0x115f79d4] */
  EAX = (r32((uint32_t)(0x115f79d4)));
  /* 115f32c4 pop ecx */
  ECX = (pop32());
  /* 115f32c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f32c7 je 0x115f32cb */
  if (C.zf) goto L_115f32cb;
  /* 115f32c9 call eax */
  call_ind((uint32_t)(EAX), 0x115f32cbu);
L_115f32cb:;
  /* 115f32cb push 0xff */
  push32((uint32_t)(0xffu));
  /* 115f32d0 call 0x115f32d7 */
  push32(0x115f32d5u); f_115f32d7();
  /* 115f32d5 pop ecx */
  ECX = (pop32());
L_115f32d6:;
  /* 115f32d6 ret  */
  ESPCHK(0x115f329eu, _esp0);
  ESP += 4; return;
}

/* FUN_100032d7 @ 0x115f32d7 (339 bytes, 100 insns) */
void f_115f32d7(void) {
  FTRACE(0x115f32d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f32d7 push ebp */
  push32((uint32_t)(EBP));
  /* 115f32d8 mov ebp, esp */
  EBP = (ESP);
  /* 115f32da sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f32e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f32e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115f32e5 mov eax, 0x115f7350 */
  EAX = (0x115f7350u);
L_115f32ea:;
  /* 115f32ea cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f32ec je 0x115f32f9 */
  if (C.zf) goto L_115f32f9;
  /* 115f32ee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f32f1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f32f2 cmp eax, 0x115f73e0 */
  { uint32_t _a=(EAX),_b=(0x115f73e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f32f7 jl 0x115f32ea */
  if ((C.sf!=C.of)) goto L_115f32ea;
L_115f32f9:;
  /* 115f32f9 push esi */
  push32((uint32_t)(ESI));
  /* 115f32fa mov esi, ecx */
  ESI = (ECX);
  /* 115f32fc shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 115f32ff cmp edx, dword ptr [esi + 0x115f7350] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x115f7350))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3305 jne 0x115f3427 */
  if (!C.zf) goto L_115f3427;
  /* 115f330b mov eax, dword ptr [0x115f7880] */
  EAX = (r32((uint32_t)(0x115f7880)));
  /* 115f3310 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3313 je 0x115f3401 */
  if (C.zf) goto L_115f3401;
  /* 115f3319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f331b jne 0x115f332a */
  if (!C.zf) goto L_115f332a;
  /* 115f331d cmp dword ptr [0x115f7884], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115f7884))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3324 je 0x115f3401 */
  if (C.zf) goto L_115f3401;
L_115f332a:;
  /* 115f332a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3330 je 0x115f3427 */
  if (C.zf) goto L_115f3427;
  /* 115f3336 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115f333c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115f3341 push eax */
  push32((uint32_t)(EAX));
  /* 115f3342 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3344 call dword ptr [0x115f6070] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6070))), 0x115f334au);
  /* 115f334a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f334c jne 0x115f3361 */
  if (!C.zf) goto L_115f3361;
  /* 115f334e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115f3354 push 0x115f6440 */
  push32((uint32_t)(0x115f6440u));
  /* 115f3359 push eax */
  push32((uint32_t)(EAX));
  /* 115f335a call 0x115f36a0 */
  push32(0x115f335fu); f_115f36a0();
  /* 115f335f pop ecx */
  ECX = (pop32());
  /* 115f3360 pop ecx */
  ECX = (pop32());
L_115f3361:;
  /* 115f3361 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115f3367 push edi */
  push32((uint32_t)(EDI));
  /* 115f3368 push eax */
  push32((uint32_t)(EAX));
  /* 115f3369 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 115f336f call 0x115f3790 */
  push32(0x115f3374u); f_115f3790();
  /* 115f3374 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3375 pop ecx */
  ECX = (pop32());
  /* 115f3376 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3379 jbe 0x115f33a4 */
  if ((C.cf||C.zf)) goto L_115f33a4;
  /* 115f337b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115f3381 push eax */
  push32((uint32_t)(EAX));
  /* 115f3382 call 0x115f3790 */
  push32(0x115f3387u); f_115f3790();
  /* 115f3387 mov edi, eax */
  EDI = (EAX);
  /* 115f3389 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115f338f sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3392 push 3 */
  push32((uint32_t)(0x3u));
  /* 115f3394 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3396 push 0x115f643c */
  push32((uint32_t)(0x115f643cu));
  /* 115f339b push edi */
  push32((uint32_t)(EDI));
  /* 115f339c call 0x115f4810 */
  push32(0x115f33a1u); f_115f4810();
  /* 115f33a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f33a4:;
  /* 115f33a4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115f33aa push 0x115f6420 */
  push32((uint32_t)(0x115f6420u));
  /* 115f33af push eax */
  push32((uint32_t)(EAX));
  /* 115f33b0 call 0x115f36a0 */
  push32(0x115f33b5u); f_115f36a0();
  /* 115f33b5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115f33bb push edi */
  push32((uint32_t)(EDI));
  /* 115f33bc push eax */
  push32((uint32_t)(EAX));
  /* 115f33bd call 0x115f36b0 */
  push32(0x115f33c2u); f_115f36b0();
  /* 115f33c2 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115f33c8 push 0x115f641c */
  push32((uint32_t)(0x115f641cu));
  /* 115f33cd push eax */
  push32((uint32_t)(EAX));
  /* 115f33ce call 0x115f36b0 */
  push32(0x115f33d3u); f_115f36b0();
  /* 115f33d3 push dword ptr [esi + 0x115f7354] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x115f7354))));
  /* 115f33d9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115f33df push eax */
  push32((uint32_t)(EAX));
  /* 115f33e0 call 0x115f36b0 */
  push32(0x115f33e5u); f_115f36b0();
  /* 115f33e5 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 115f33ea lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115f33f0 push 0x115f63f4 */
  push32((uint32_t)(0x115f63f4u));
  /* 115f33f5 push eax */
  push32((uint32_t)(EAX));
  /* 115f33f6 call 0x115f477e */
  push32(0x115f33fbu); f_115f477e();
  /* 115f33fb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f33fe pop edi */
  EDI = (pop32());
  /* 115f33ff jmp 0x115f3427 */
  goto L_115f3427;
L_115f3401:;
  /* 115f3401 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 115f3404 lea esi, [esi + 0x115f7354] */
  ESI = ((uint32_t)(ESI + 0x115f7354));
  /* 115f340a push 0 */
  push32((uint32_t)(0x0u));
  /* 115f340c push eax */
  push32((uint32_t)(EAX));
  /* 115f340d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f340f call 0x115f3790 */
  push32(0x115f3414u); f_115f3790();
  /* 115f3414 pop ecx */
  ECX = (pop32());
  /* 115f3415 push eax */
  push32((uint32_t)(EAX));
  /* 115f3416 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f3418 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 115f341a call dword ptr [0x115f6080] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6080))), 0x115f3420u);
  /* 115f3420 push eax */
  push32((uint32_t)(EAX));
  /* 115f3421 call dword ptr [0x115f6054] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6054))), 0x115f3427u);
L_115f3427:;
  /* 115f3427 pop esi */
  ESI = (pop32());
  /* 115f3428 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3429 ret  */
  ESPCHK(0x115f32d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000342a @ 0x115f342a (41 bytes, 12 insns) */
void f_115f342a(void) {
  FTRACE(0x115f342au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f342a push esi */
  push32((uint32_t)(ESI));
  /* 115f342b mov esi, dword ptr [0x115f6044] */
  ESI = (r32((uint32_t)(0x115f6044)));
  /* 115f3431 push dword ptr [0x115f7424] */
  push32((uint32_t)(r32((uint32_t)(0x115f7424))));
  /* 115f3437 call esi */
  call_ind((uint32_t)(ESI), 0x115f3439u);
  /* 115f3439 push dword ptr [0x115f7414] */
  push32((uint32_t)(r32((uint32_t)(0x115f7414))));
  /* 115f343f call esi */
  call_ind((uint32_t)(ESI), 0x115f3441u);
  /* 115f3441 push dword ptr [0x115f7404] */
  push32((uint32_t)(r32((uint32_t)(0x115f7404))));
  /* 115f3447 call esi */
  call_ind((uint32_t)(ESI), 0x115f3449u);
  /* 115f3449 push dword ptr [0x115f73e4] */
  push32((uint32_t)(r32((uint32_t)(0x115f73e4))));
  /* 115f344f call esi */
  call_ind((uint32_t)(ESI), 0x115f3451u);
  /* 115f3451 pop esi */
  ESI = (pop32());
  /* 115f3452 ret  */
  ESPCHK(0x115f342au, _esp0);
  ESP += 4; return;
}

/* FUN_10003453 @ 0x115f3453 (108 bytes, 34 insns) */
void f_115f3453(void) {
  FTRACE(0x115f3453u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3453 push esi */
  push32((uint32_t)(ESI));
  /* 115f3454 push edi */
  push32((uint32_t)(EDI));
  /* 115f3455 mov edi, dword ptr [0x115f6074] */
  EDI = (r32((uint32_t)(0x115f6074)));
  /* 115f345b mov esi, 0x115f73e0 */
  ESI = (0x115f73e0u);
L_115f3460:;
  /* 115f3460 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115f3462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f3464 je 0x115f3491 */
  if (C.zf) goto L_115f3491;
  /* 115f3466 cmp esi, 0x115f7424 */
  { uint32_t _a=(ESI),_b=(0x115f7424u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f346c je 0x115f3491 */
  if (C.zf) goto L_115f3491;
  /* 115f346e cmp esi, 0x115f7414 */
  { uint32_t _a=(ESI),_b=(0x115f7414u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3474 je 0x115f3491 */
  if (C.zf) goto L_115f3491;
  /* 115f3476 cmp esi, 0x115f7404 */
  { uint32_t _a=(ESI),_b=(0x115f7404u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f347c je 0x115f3491 */
  if (C.zf) goto L_115f3491;
  /* 115f347e cmp esi, 0x115f73e4 */
  { uint32_t _a=(ESI),_b=(0x115f73e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3484 je 0x115f3491 */
  if (C.zf) goto L_115f3491;
  /* 115f3486 push eax */
  push32((uint32_t)(EAX));
  /* 115f3487 call edi */
  call_ind((uint32_t)(EDI), 0x115f3489u);
  /* 115f3489 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f348b call 0x115f35c2 */
  push32(0x115f3490u); f_115f35c2();
  /* 115f3490 pop ecx */
  ECX = (pop32());
L_115f3491:;
  /* 115f3491 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3494 cmp esi, 0x115f74a0 */
  { uint32_t _a=(ESI),_b=(0x115f74a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f349a jl 0x115f3460 */
  if ((C.sf!=C.of)) goto L_115f3460;
  /* 115f349c push dword ptr [0x115f7404] */
  push32((uint32_t)(r32((uint32_t)(0x115f7404))));
  /* 115f34a2 call edi */
  call_ind((uint32_t)(EDI), 0x115f34a4u);
  /* 115f34a4 push dword ptr [0x115f7414] */
  push32((uint32_t)(r32((uint32_t)(0x115f7414))));
  /* 115f34aa call edi */
  call_ind((uint32_t)(EDI), 0x115f34acu);
  /* 115f34ac push dword ptr [0x115f7424] */
  push32((uint32_t)(r32((uint32_t)(0x115f7424))));
  /* 115f34b2 call edi */
  call_ind((uint32_t)(EDI), 0x115f34b4u);
  /* 115f34b4 push dword ptr [0x115f73e4] */
  push32((uint32_t)(r32((uint32_t)(0x115f73e4))));
  /* 115f34ba call edi */
  call_ind((uint32_t)(EDI), 0x115f34bcu);
  /* 115f34bc pop edi */
  EDI = (pop32());
  /* 115f34bd pop esi */
  ESI = (pop32());
  /* 115f34be ret  */
  ESPCHK(0x115f3453u, _esp0);
  ESP += 4; return;
}

/* FUN_100034bf @ 0x115f34bf (97 bytes, 37 insns) */
void f_115f34bf(void) {
  FTRACE(0x115f34bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f34bf push ebp */
  push32((uint32_t)(EBP));
  /* 115f34c0 mov ebp, esp */
  EBP = (ESP);
  /* 115f34c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f34c5 push esi */
  push32((uint32_t)(ESI));
  /* 115f34c6 cmp dword ptr [eax*4 + 0x115f73e0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x115f73e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f34ce lea esi, [eax*4 + 0x115f73e0] */
  ESI = ((uint32_t)(EAX*4 + 0x115f73e0));
  /* 115f34d5 jne 0x115f3515 */
  if (!C.zf) goto L_115f3515;
  /* 115f34d7 push edi */
  push32((uint32_t)(EDI));
  /* 115f34d8 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115f34da call 0x115f360a */
  push32(0x115f34dfu); f_115f360a();
  /* 115f34df mov edi, eax */
  EDI = (EAX);
  /* 115f34e1 pop ecx */
  ECX = (pop32());
  /* 115f34e2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f34e4 jne 0x115f34ee */
  if (!C.zf) goto L_115f34ee;
  /* 115f34e6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115f34e8 call 0x115f292f */
  push32(0x115f34edu); f_115f292f();
  /* 115f34ed pop ecx */
  ECX = (pop32());
L_115f34ee:;
  /* 115f34ee push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115f34f0 call 0x115f34bf */
  push32(0x115f34f5u); f_115f34bf();
  /* 115f34f5 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f34f8 pop ecx */
  ECX = (pop32());
  /* 115f34f9 push edi */
  push32((uint32_t)(EDI));
  /* 115f34fa jne 0x115f3506 */
  if (!C.zf) goto L_115f3506;
  /* 115f34fc call dword ptr [0x115f6044] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6044))), 0x115f3502u);
  /* 115f3502 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115f3504 jmp 0x115f350c */
  goto L_115f350c;
L_115f3506:;
  /* 115f3506 call 0x115f35c2 */
  push32(0x115f350bu); f_115f35c2();
  /* 115f350b pop ecx */
  ECX = (pop32());
L_115f350c:;
  /* 115f350c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115f350e call 0x115f3520 */
  push32(0x115f3513u); f_115f3520();
  /* 115f3513 pop ecx */
  ECX = (pop32());
  /* 115f3514 pop edi */
  EDI = (pop32());
L_115f3515:;
  /* 115f3515 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115f3517 call dword ptr [0x115f6040] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6040))), 0x115f351du);
  /* 115f351d pop esi */
  ESI = (pop32());
  /* 115f351e pop ebp */
  EBP = (pop32());
  /* 115f351f ret  */
  ESPCHK(0x115f34bfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x115f3520 (21 bytes, 7 insns) */
void f_115f3520(void) {
  FTRACE(0x115f3520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3520 push ebp */
  push32((uint32_t)(EBP));
  /* 115f3521 mov ebp, esp */
  EBP = (ESP);
  /* 115f3523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3526 push dword ptr [eax*4 + 0x115f73e0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x115f73e0))));
  /* 115f352d call dword ptr [0x115f6048] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6048))), 0x115f3533u);
  /* 115f3533 pop ebp */
  EBP = (pop32());
  /* 115f3534 ret  */
  ESPCHK(0x115f3520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003535 @ 0x115f3535 (141 bytes, 56 insns) */
void f_115f3535(void) {
  FTRACE(0x115f3535u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3535 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3536 push esi */
  push32((uint32_t)(ESI));
  /* 115f3537 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 115f353b push edi */
  push32((uint32_t)(EDI));
  /* 115f353c imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115f3541 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3544 mov ebx, esi */
  EBX = (ESI);
  /* 115f3546 ja 0x115f3555 */
  if ((!C.cf&&!C.zf)) goto L_115f3555;
  /* 115f3548 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f354a jne 0x115f354f */
  if (!C.zf) goto L_115f354f;
  /* 115f354c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f354e pop esi */
  ESI = (pop32());
L_115f354f:;
  /* 115f354f add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3552 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_115f3555:;
  /* 115f3555 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f3557 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f355a ja 0x115f3596 */
  if ((!C.cf&&!C.zf)) goto L_115f3596;
  /* 115f355c cmp ebx, dword ptr [0x115f7630] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115f7630))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3562 ja 0x115f3581 */
  if ((!C.cf&&!C.zf)) goto L_115f3581;
  /* 115f3564 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f3566 call 0x115f34bf */
  push32(0x115f356bu); f_115f34bf();
  /* 115f356b push ebx */
  push32((uint32_t)(EBX));
  /* 115f356c call 0x115f42c9 */
  push32(0x115f3571u); f_115f42c9();
  /* 115f3571 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f3573 mov edi, eax */
  EDI = (EAX);
  /* 115f3575 call 0x115f3520 */
  push32(0x115f357au); f_115f3520();
  /* 115f357a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f357d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f357f jne 0x115f35ac */
  if (!C.zf) goto L_115f35ac;
L_115f3581:;
  /* 115f3581 push esi */
  push32((uint32_t)(ESI));
  /* 115f3582 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f3584 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f358a call dword ptr [0x115f603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f603c))), 0x115f3590u);
  /* 115f3590 mov edi, eax */
  EDI = (EAX);
  /* 115f3592 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f3594 jne 0x115f35b8 */
  if (!C.zf) goto L_115f35b8;
L_115f3596:;
  /* 115f3596 cmp dword ptr [0x115f7a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115f7a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f359d je 0x115f35b8 */
  if (C.zf) goto L_115f35b8;
  /* 115f359f push esi */
  push32((uint32_t)(ESI));
  /* 115f35a0 call 0x115f4968 */
  push32(0x115f35a5u); f_115f4968();
  /* 115f35a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f35a7 pop ecx */
  ECX = (pop32());
  /* 115f35a8 je 0x115f35be */
  if (C.zf) goto L_115f35be;
  /* 115f35aa jmp 0x115f3555 */
  goto L_115f3555;
L_115f35ac:;
  /* 115f35ac push ebx */
  push32((uint32_t)(EBX));
  /* 115f35ad push 0 */
  push32((uint32_t)(0x0u));
  /* 115f35af push edi */
  push32((uint32_t)(EDI));
  /* 115f35b0 call 0x115f4910 */
  push32(0x115f35b5u); f_115f4910();
  /* 115f35b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115f35b8:;
  /* 115f35b8 mov eax, edi */
  EAX = (EDI);
L_115f35ba:;
  /* 115f35ba pop edi */
  EDI = (pop32());
  /* 115f35bb pop esi */
  ESI = (pop32());
  /* 115f35bc pop ebx */
  EBX = (pop32());
  /* 115f35bd ret  */
  ESPCHK(0x115f3535u, _esp0);
  ESP += 4; return;
L_115f35be:;
  /* 115f35be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f35c0 jmp 0x115f35ba */
  goto L_115f35ba;
}

/* FUN_100035c2 @ 0x115f35c2 (72 bytes, 29 insns) */
void f_115f35c2(void) {
  FTRACE(0x115f35c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f35c2 push esi */
  push32((uint32_t)(ESI));
  /* 115f35c3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115f35c7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f35c9 je 0x115f3608 */
  if (C.zf) goto L_115f3608;
  /* 115f35cb push 9 */
  push32((uint32_t)(0x9u));
  /* 115f35cd call 0x115f34bf */
  push32(0x115f35d2u); f_115f34bf();
  /* 115f35d2 push esi */
  push32((uint32_t)(ESI));
  /* 115f35d3 call 0x115f3f73 */
  push32(0x115f35d8u); f_115f3f73();
  /* 115f35d8 pop ecx */
  ECX = (pop32());
  /* 115f35d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f35db pop ecx */
  ECX = (pop32());
  /* 115f35dc je 0x115f35f1 */
  if (C.zf) goto L_115f35f1;
  /* 115f35de push esi */
  push32((uint32_t)(ESI));
  /* 115f35df push eax */
  push32((uint32_t)(EAX));
  /* 115f35e0 call 0x115f3f9e */
  push32(0x115f35e5u); f_115f3f9e();
  /* 115f35e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f35e7 call 0x115f3520 */
  push32(0x115f35ecu); f_115f3520();
  /* 115f35ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f35ef pop esi */
  ESI = (pop32());
  /* 115f35f0 ret  */
  ESPCHK(0x115f35c2u, _esp0);
  ESP += 4; return;
L_115f35f1:;
  /* 115f35f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f35f3 call 0x115f3520 */
  push32(0x115f35f8u); f_115f3520();
  /* 115f35f8 pop ecx */
  ECX = (pop32());
  /* 115f35f9 push esi */
  push32((uint32_t)(ESI));
  /* 115f35fa push 0 */
  push32((uint32_t)(0x0u));
  /* 115f35fc push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f3602 call dword ptr [0x115f604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f604c))), 0x115f3608u);
L_115f3608:;
  /* 115f3608 pop esi */
  ESI = (pop32());
  /* 115f3609 ret  */
  ESPCHK(0x115f35c2u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x115f360a (18 bytes, 6 insns) */
void f_115f360a(void) {
  FTRACE(0x115f360au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f360a push dword ptr [0x115f7a4c] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a4c))));
  /* 115f3610 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 115f3614 call 0x115f361c */
  push32(0x115f3619u); f_115f361c();
  /* 115f3619 pop ecx */
  ECX = (pop32());
  /* 115f361a pop ecx */
  ECX = (pop32());
  /* 115f361b ret  */
  ESPCHK(0x115f360au, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x115f361c (44 bytes, 16 insns) */
void f_115f361c(void) {
  FTRACE(0x115f361cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f361c cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3621 ja 0x115f3645 */
  if ((!C.cf&&!C.zf)) goto L_115f3645;
L_115f3623:;
  /* 115f3623 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115f3627 call 0x115f3648 */
  push32(0x115f362cu); f_115f3648();
  /* 115f362c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f362e pop ecx */
  ECX = (pop32());
  /* 115f362f jne 0x115f3647 */
  if (!C.zf) goto L_115f3647;
  /* 115f3631 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3635 je 0x115f3647 */
  if (C.zf) goto L_115f3647;
  /* 115f3637 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115f363b call 0x115f4968 */
  push32(0x115f3640u); f_115f4968();
  /* 115f3640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f3642 pop ecx */
  ECX = (pop32());
  /* 115f3643 jne 0x115f3623 */
  if (!C.zf) goto L_115f3623;
L_115f3645:;
  /* 115f3645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115f3647:;
  /* 115f3647 ret  */
  ESPCHK(0x115f361cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003648 @ 0x115f3648 (78 bytes, 30 insns) */
void f_115f3648(void) {
  FTRACE(0x115f3648u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3648 push esi */
  push32((uint32_t)(ESI));
  /* 115f3649 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115f364d cmp esi, dword ptr [0x115f7630] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x115f7630))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3653 push edi */
  push32((uint32_t)(EDI));
  /* 115f3654 ja 0x115f3677 */
  if ((!C.cf&&!C.zf)) goto L_115f3677;
  /* 115f3656 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f3658 call 0x115f34bf */
  push32(0x115f365du); f_115f34bf();
  /* 115f365d push esi */
  push32((uint32_t)(ESI));
  /* 115f365e call 0x115f42c9 */
  push32(0x115f3663u); f_115f42c9();
  /* 115f3663 push 9 */
  push32((uint32_t)(0x9u));
  /* 115f3665 mov edi, eax */
  EDI = (EAX);
  /* 115f3667 call 0x115f3520 */
  push32(0x115f366cu); f_115f3520();
  /* 115f366c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f366f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115f3671 je 0x115f3677 */
  if (C.zf) goto L_115f3677;
  /* 115f3673 mov eax, edi */
  EAX = (EDI);
  /* 115f3675 jmp 0x115f3693 */
  goto L_115f3693;
L_115f3677:;
  /* 115f3677 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f3679 jne 0x115f367e */
  if (!C.zf) goto L_115f367e;
  /* 115f367b push 1 */
  push32((uint32_t)(0x1u));
  /* 115f367d pop esi */
  ESI = (pop32());
L_115f367e:;
  /* 115f367e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3681 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 115f3684 push esi */
  push32((uint32_t)(ESI));
  /* 115f3685 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3687 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f368d call dword ptr [0x115f603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f603c))), 0x115f3693u);
L_115f3693:;
  /* 115f3693 pop edi */
  EDI = (pop32());
  /* 115f3694 pop esi */
  ESI = (pop32());
  /* 115f3695 ret  */
  ESPCHK(0x115f3648u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a0 @ 0x115f36a0 (7 bytes, 3 insns) */
void f_115f36a0(void) {
  FTRACE(0x115f36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f36a0 push edi */
  push32((uint32_t)(EDI));
  /* 115f36a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 115f36a5 jmp 0x115f3711 */
  jmp_ind(0x115f3711u); return;
}

/* FUN_100036b0 @ 0x115f36b0 (224 bytes, 84 insns) */
void f_115f36b0(void) {
  FTRACE(0x115f36b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f36b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f36b4 push edi */
  push32((uint32_t)(EDI));
  /* 115f36b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115f36bb je 0x115f36cc */
  if (C.zf) goto L_115f36cc;
L_115f36bd:;
  /* 115f36bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115f36bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f36c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f36c2 je 0x115f36ff */
  if (C.zf) goto L_115f36ff;
  /* 115f36c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115f36ca jne 0x115f36bd */
  if (!C.zf) goto L_115f36bd;
L_115f36cc:;
  /* 115f36cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115f36ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115f36d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f36d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f36d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115f36da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f36dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115f36e2 je 0x115f36cc */
  if (C.zf) goto L_115f36cc;
  /* 115f36e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115f36e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f36e9 je 0x115f370e */
  if (C.zf) goto L_115f370e;
  /* 115f36eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115f36ed je 0x115f3709 */
  if (C.zf) goto L_115f3709;
  /* 115f36ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 115f36f4 je 0x115f3704 */
  if (C.zf) goto L_115f3704;
  /* 115f36f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 115f36fb je 0x115f36ff */
  if (C.zf) goto L_115f36ff;
  /* 115f36fd jmp 0x115f36cc */
  goto L_115f36cc;
L_115f36ff:;
  /* 115f36ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 115f3702 jmp 0x115f3711 */
  goto L_115f3711;
L_115f3704:;
  /* 115f3704 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 115f3707 jmp 0x115f3711 */
  goto L_115f3711;
L_115f3709:;
  /* 115f3709 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 115f370c jmp 0x115f3711 */
  goto L_115f3711;
L_115f370e:;
  /* 115f370e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_115f3711:;
  /* 115f3711 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115f3715 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115f371b je 0x115f3736 */
  if (C.zf) goto L_115f3736;
L_115f371d:;
  /* 115f371d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115f371f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f3720 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f3722 je 0x115f3788 */
  if (C.zf) goto L_115f3788;
  /* 115f3724 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 115f3726 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f3727 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115f372d jne 0x115f371d */
  if (!C.zf) goto L_115f371d;
  /* 115f372f jmp 0x115f3736 */
  goto L_115f3736;
L_115f3731:;
  /* 115f3731 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115f3733 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115f3736:;
  /* 115f3736 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115f373b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115f373d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f373f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f3742 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3744 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115f3746 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3749 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115f374e je 0x115f3731 */
  if (C.zf) goto L_115f3731;
  /* 115f3750 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f3752 je 0x115f3788 */
  if (C.zf) goto L_115f3788;
  /* 115f3754 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 115f3756 je 0x115f377f */
  if (C.zf) goto L_115f377f;
  /* 115f3758 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 115f375e je 0x115f3772 */
  if (C.zf) goto L_115f3772;
  /* 115f3760 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 115f3766 je 0x115f376a */
  if (C.zf) goto L_115f376a;
  /* 115f3768 jmp 0x115f3731 */
  goto L_115f3731;
L_115f376a:;
  /* 115f376a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115f376c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f3770 pop edi */
  EDI = (pop32());
  /* 115f3771 ret  */
  ESPCHK(0x115f36b0u, _esp0);
  ESP += 4; return;
L_115f3772:;
  /* 115f3772 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 115f3775 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f3779 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 115f377d pop edi */
  EDI = (pop32());
  /* 115f377e ret  */
  ESPCHK(0x115f36b0u, _esp0);
  ESP += 4; return;
L_115f377f:;
  /* 115f377f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 115f3782 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f3786 pop edi */
  EDI = (pop32());
  /* 115f3787 ret  */
  ESPCHK(0x115f36b0u, _esp0);
  ESP += 4; return;
L_115f3788:;
  /* 115f3788 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 115f378a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f378e pop edi */
  EDI = (pop32());
  /* 115f378f ret  */
  ESPCHK(0x115f36b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x115f3790 (123 bytes, 44 insns) */
void f_115f3790(void) {
  FTRACE(0x115f3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3790 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f3794 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115f379a je 0x115f37b0 */
  if (C.zf) goto L_115f37b0;
L_115f379c:;
  /* 115f379c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115f379e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f379f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f37a1 je 0x115f37e3 */
  if (C.zf) goto L_115f37e3;
  /* 115f37a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115f37a9 jne 0x115f379c */
  if (!C.zf) goto L_115f379c;
  /* 115f37ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115f37b0:;
  /* 115f37b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115f37b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115f37b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f37b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f37bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115f37be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f37c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115f37c6 je 0x115f37b0 */
  if (C.zf) goto L_115f37b0;
  /* 115f37c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115f37cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f37cd je 0x115f3801 */
  if (C.zf) goto L_115f3801;
  /* 115f37cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115f37d1 je 0x115f37f7 */
  if (C.zf) goto L_115f37f7;
  /* 115f37d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 115f37d8 je 0x115f37ed */
  if (C.zf) goto L_115f37ed;
  /* 115f37da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 115f37df je 0x115f37e3 */
  if (C.zf) goto L_115f37e3;
  /* 115f37e1 jmp 0x115f37b0 */
  goto L_115f37b0;
L_115f37e3:;
  /* 115f37e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 115f37e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f37ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f37ec ret  */
  ESPCHK(0x115f3790u, _esp0);
  ESP += 4; return;
L_115f37ed:;
  /* 115f37ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 115f37f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f37f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f37f6 ret  */
  ESPCHK(0x115f3790u, _esp0);
  ESP += 4; return;
L_115f37f7:;
  /* 115f37f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 115f37fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f37fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3800 ret  */
  ESPCHK(0x115f3790u, _esp0);
  ESP += 4; return;
L_115f3801:;
  /* 115f3801 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 115f3804 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f3808 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f380a ret  */
  ESPCHK(0x115f3790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000380b @ 0x115f380b (429 bytes, 143 insns) */
void f_115f380b(void) {
  FTRACE(0x115f380bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f380b push ebp */
  push32((uint32_t)(EBP));
  /* 115f380c mov ebp, esp */
  EBP = (ESP);
  /* 115f380e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3811 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3812 push esi */
  push32((uint32_t)(ESI));
  /* 115f3813 push edi */
  push32((uint32_t)(EDI));
  /* 115f3814 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115f3816 call 0x115f34bf */
  push32(0x115f381bu); f_115f34bf();
  /* 115f381b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f381e call 0x115f39b8 */
  push32(0x115f3823u); f_115f39b8();
  /* 115f3823 mov ebx, eax */
  EBX = (EAX);
  /* 115f3825 pop ecx */
  ECX = (pop32());
  /* 115f3826 cmp ebx, dword ptr [0x115f7a90] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115f7a90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f382c pop ecx */
  ECX = (pop32());
  /* 115f382d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f3830 jne 0x115f3839 */
  if (!C.zf) goto L_115f3839;
L_115f3832:;
  /* 115f3832 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115f3834 jmp 0x115f39a9 */
  goto L_115f39a9;
L_115f3839:;
  /* 115f3839 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115f383b je 0x115f3997 */
  if (C.zf) goto L_115f3997;
  /* 115f3841 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3843 mov eax, 0x115f7538 */
  EAX = (0x115f7538u);
L_115f3848:;
  /* 115f3848 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f384a je 0x115f38c0 */
  if (C.zf) goto L_115f38c0;
  /* 115f384c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f384f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115f3850 cmp eax, 0x115f7628 */
  { uint32_t _a=(EAX),_b=(0x115f7628u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3855 jl 0x115f3848 */
  if ((C.sf!=C.of)) goto L_115f3848;
  /* 115f3857 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 115f385a push eax */
  push32((uint32_t)(EAX));
  /* 115f385b push ebx */
  push32((uint32_t)(EBX));
  /* 115f385c call dword ptr [0x115f6034] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6034))), 0x115f3862u);
  /* 115f3862 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f3864 pop esi */
  ESI = (pop32());
  /* 115f3865 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3867 jne 0x115f398e */
  if (!C.zf) goto L_115f398e;
  /* 115f386d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f386f and dword ptr [0x115f7cc4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115f7cc4)))&(0x0u); w32((uint32_t)(0x115f7cc4), (_r)); fl_logic(_r,32); }
  /* 115f3876 pop ecx */
  ECX = (pop32());
  /* 115f3877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3879 mov edi, 0x115f7bc0 */
  EDI = (0x115f7bc0u);
  /* 115f387e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3881 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115f3883 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115f3884 mov dword ptr [0x115f7a90], ebx */
  w32((uint32_t)(0x115f7a90), (EBX));
  /* 115f388a jbe 0x115f397b */
  if ((C.cf||C.zf)) goto L_115f397b;
  /* 115f3890 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f3894 je 0x115f3956 */
  if (C.zf) goto L_115f3956;
  /* 115f389a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_115f389d:;
  /* 115f389d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115f389f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f38a1 je 0x115f3956 */
  if (C.zf) goto L_115f3956;
  /* 115f38a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 115f38ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_115f38ae:;
  /* 115f38ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f38b0 ja 0x115f394a */
  if ((!C.cf&&!C.zf)) goto L_115f394a;
  /* 115f38b6 or byte ptr [eax + 0x115f7bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(0x4u); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f38bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f38be jmp 0x115f38ae */
  goto L_115f38ae;
L_115f38c0:;
  /* 115f38c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f38c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f38c6 pop ecx */
  ECX = (pop32());
  /* 115f38c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f38c9 mov edi, 0x115f7bc0 */
  EDI = (0x115f7bc0u);
  /* 115f38ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 115f38d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115f38d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 115f38d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115f38d7 lea ebx, [esi + 0x115f7548] */
  EBX = ((uint32_t)(ESI + 0x115f7548));
L_115f38dd:;
  /* 115f38dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f38e0 mov ecx, ebx */
  ECX = (EBX);
  /* 115f38e2 je 0x115f3910 */
  if (C.zf) goto L_115f3910;
L_115f38e4:;
  /* 115f38e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 115f38e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f38e9 je 0x115f3910 */
  if (C.zf) goto L_115f3910;
  /* 115f38eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 115f38ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 115f38f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f38f3 ja 0x115f3909 */
  if ((!C.cf&&!C.zf)) goto L_115f3909;
  /* 115f38f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f38f8 mov dl, byte ptr [edx + 0x115f7530] */
  DL = (r8((uint32_t)(EDX + 0x115f7530)));
L_115f38fe:;
  /* 115f38fe or byte ptr [eax + 0x115f7bc1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(DL); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f3904 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3905 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3907 jbe 0x115f38fe */
  if ((C.cf||C.zf)) goto L_115f38fe;
L_115f3909:;
  /* 115f3909 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f390a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f390b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f390e jne 0x115f38e4 */
  if (!C.zf) goto L_115f38e4;
L_115f3910:;
  /* 115f3910 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 115f3913 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3916 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f391a jb 0x115f38dd */
  if (C.cf) goto L_115f38dd;
  /* 115f391c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f391f mov dword ptr [0x115f7aac], 1 */
  w32((uint32_t)(0x115f7aac), (0x1u));
  /* 115f3929 push eax */
  push32((uint32_t)(EAX));
  /* 115f392a mov dword ptr [0x115f7a90], eax */
  w32((uint32_t)(0x115f7a90), (EAX));
  /* 115f392f call 0x115f3a02 */
  push32(0x115f3934u); f_115f3a02();
  /* 115f3934 lea esi, [esi + 0x115f753c] */
  ESI = ((uint32_t)(ESI + 0x115f753c));
  /* 115f393a mov edi, 0x115f7aa0 */
  EDI = (0x115f7aa0u);
  /* 115f393f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 115f3940 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 115f3941 pop ecx */
  ECX = (pop32());
  /* 115f3942 mov dword ptr [0x115f7cc4], eax */
  w32((uint32_t)(0x115f7cc4), (EAX));
  /* 115f3947 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 115f3948 jmp 0x115f399c */
  goto L_115f399c;
L_115f394a:;
  /* 115f394a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f394b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f394c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f3950 jne 0x115f389d */
  if (!C.zf) goto L_115f389d;
L_115f3956:;
  /* 115f3956 mov eax, esi */
  EAX = (ESI);
L_115f3958:;
  /* 115f3958 or byte ptr [eax + 0x115f7bc1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(0x8u); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f395f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3960 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3965 jb 0x115f3958 */
  if (C.cf) goto L_115f3958;
  /* 115f3967 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3968 call 0x115f3a02 */
  push32(0x115f396du); f_115f3a02();
  /* 115f396d pop ecx */
  ECX = (pop32());
  /* 115f396e mov dword ptr [0x115f7cc4], eax */
  w32((uint32_t)(0x115f7cc4), (EAX));
  /* 115f3973 mov dword ptr [0x115f7aac], esi */
  w32((uint32_t)(0x115f7aac), (ESI));
  /* 115f3979 jmp 0x115f3982 */
  goto L_115f3982;
L_115f397b:;
  /* 115f397b and dword ptr [0x115f7aac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115f7aac)))&(0x0u); w32((uint32_t)(0x115f7aac), (_r)); fl_logic(_r,32); }
L_115f3982:;
  /* 115f3982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3984 mov edi, 0x115f7aa0 */
  EDI = (0x115f7aa0u);
  /* 115f3989 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115f398a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115f398b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115f398c jmp 0x115f399c */
  goto L_115f399c;
L_115f398e:;
  /* 115f398e cmp dword ptr [0x115f7a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115f7a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3995 je 0x115f39a6 */
  if (C.zf) goto L_115f39a6;
L_115f3997:;
  /* 115f3997 call 0x115f3a35 */
  push32(0x115f399cu); f_115f3a35();
L_115f399c:;
  /* 115f399c call 0x115f3a5e */
  push32(0x115f39a1u); f_115f3a5e();
  /* 115f39a1 jmp 0x115f3832 */
  goto L_115f3832;
L_115f39a6:;
  /* 115f39a6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_115f39a9:;
  /* 115f39a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115f39ab call 0x115f3520 */
  push32(0x115f39b0u); f_115f3520();
  /* 115f39b0 pop ecx */
  ECX = (pop32());
  /* 115f39b1 mov eax, esi */
  EAX = (ESI);
  /* 115f39b3 pop edi */
  EDI = (pop32());
  /* 115f39b4 pop esi */
  ESI = (pop32());
  /* 115f39b5 pop ebx */
  EBX = (pop32());
  /* 115f39b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f39b7 ret  */
  ESPCHK(0x115f380bu, _esp0);
  ESP += 4; return;
}

/* FUN_100039b8 @ 0x115f39b8 (74 bytes, 15 insns) */
void f_115f39b8(void) {
  FTRACE(0x115f39b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f39b8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f39bc and dword ptr [0x115f7a38], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115f7a38)))&(0x0u); w32((uint32_t)(0x115f7a38), (_r)); fl_logic(_r,32); }
  /* 115f39c3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f39c6 jne 0x115f39d8 */
  if (!C.zf) goto L_115f39d8;
  /* 115f39c8 mov dword ptr [0x115f7a38], 1 */
  w32((uint32_t)(0x115f7a38), (0x1u));
  /* 115f39d2 jmp dword ptr [0x115f6038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115f6038)))); return;
L_115f39d8:;
  /* 115f39d8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f39db jne 0x115f39ed */
  if (!C.zf) goto L_115f39ed;
  /* 115f39dd mov dword ptr [0x115f7a38], 1 */
  w32((uint32_t)(0x115f7a38), (0x1u));
  /* 115f39e7 jmp dword ptr [0x115f6030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115f6030)))); return;
L_115f39ed:;
  /* 115f39ed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f39f0 jne 0x115f3a01 */
  if (!C.zf) goto L_115f3a01;
  /* 115f39f2 mov eax, dword ptr [0x115f7a68] */
  EAX = (r32((uint32_t)(0x115f7a68)));
  /* 115f39f7 mov dword ptr [0x115f7a38], 1 */
  w32((uint32_t)(0x115f7a38), (0x1u));
L_115f3a01:;
  /* 115f3a01 ret  */
  ESPCHK(0x115f39b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a02 @ 0x115f3a02 (51 bytes, 19 insns) */
void f_115f3a02(void) {
  FTRACE(0x115f3a02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3a02 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f3a06 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3a0b je 0x115f3a2f */
  if (C.zf) goto L_115f3a2f;
  /* 115f3a0d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3a10 je 0x115f3a29 */
  if (C.zf) goto L_115f3a29;
  /* 115f3a12 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3a15 je 0x115f3a23 */
  if (C.zf) goto L_115f3a23;
  /* 115f3a17 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115f3a18 je 0x115f3a1d */
  if (C.zf) goto L_115f3a1d;
  /* 115f3a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3a1c ret  */
  ESPCHK(0x115f3a02u, _esp0);
  ESP += 4; return;
L_115f3a1d:;
  /* 115f3a1d mov eax, 0x404 */
  EAX = (0x404u);
  /* 115f3a22 ret  */
  ESPCHK(0x115f3a02u, _esp0);
  ESP += 4; return;
L_115f3a23:;
  /* 115f3a23 mov eax, 0x412 */
  EAX = (0x412u);
  /* 115f3a28 ret  */
  ESPCHK(0x115f3a02u, _esp0);
  ESP += 4; return;
L_115f3a29:;
  /* 115f3a29 mov eax, 0x804 */
  EAX = (0x804u);
  /* 115f3a2e ret  */
  ESPCHK(0x115f3a02u, _esp0);
  ESP += 4; return;
L_115f3a2f:;
  /* 115f3a2f mov eax, 0x411 */
  EAX = (0x411u);
  /* 115f3a34 ret  */
  ESPCHK(0x115f3a02u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a35 @ 0x115f3a35 (41 bytes, 17 insns) */
void f_115f3a35(void) {
  FTRACE(0x115f3a35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3a35 push edi */
  push32((uint32_t)(EDI));
  /* 115f3a36 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115f3a38 pop ecx */
  ECX = (pop32());
  /* 115f3a39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3a3b mov edi, 0x115f7bc0 */
  EDI = (0x115f7bc0u);
  /* 115f3a40 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115f3a42 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115f3a43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3a45 mov edi, 0x115f7aa0 */
  EDI = (0x115f7aa0u);
  /* 115f3a4a mov dword ptr [0x115f7a90], eax */
  w32((uint32_t)(0x115f7a90), (EAX));
  /* 115f3a4f mov dword ptr [0x115f7aac], eax */
  w32((uint32_t)(0x115f7aac), (EAX));
  /* 115f3a54 mov dword ptr [0x115f7cc4], eax */
  w32((uint32_t)(0x115f7cc4), (EAX));
  /* 115f3a59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115f3a5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115f3a5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 115f3a5c pop edi */
  EDI = (pop32());
  /* 115f3a5d ret  */
  ESPCHK(0x115f3a35u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a5e @ 0x115f3a5e (389 bytes, 124 insns) */
void f_115f3a5e(void) {
  FTRACE(0x115f3a5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3a5e push ebp */
  push32((uint32_t)(EBP));
  /* 115f3a5f mov ebp, esp */
  EBP = (ESP);
  /* 115f3a61 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3a67 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 115f3a6a push esi */
  push32((uint32_t)(ESI));
  /* 115f3a6b push eax */
  push32((uint32_t)(EAX));
  /* 115f3a6c push dword ptr [0x115f7a90] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a90))));
  /* 115f3a72 call dword ptr [0x115f6034] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6034))), 0x115f3a78u);
  /* 115f3a78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3a7b jne 0x115f3b97 */
  if (!C.zf) goto L_115f3b97;
  /* 115f3a81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3a83 mov esi, 0x100 */
  ESI = (0x100u);
L_115f3a88:;
  /* 115f3a88 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 115f3a8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3a90 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3a92 jb 0x115f3a88 */
  if (C.cf) goto L_115f3a88;
  /* 115f3a94 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 115f3a97 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 115f3a9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f3aa0 je 0x115f3ad9 */
  if (C.zf) goto L_115f3ad9;
  /* 115f3aa2 push ebx */
  push32((uint32_t)(EBX));
  /* 115f3aa3 push edi */
  push32((uint32_t)(EDI));
  /* 115f3aa4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_115f3aa7:;
  /* 115f3aa7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 115f3aaa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 115f3aad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3aaf ja 0x115f3ace */
  if ((!C.cf&&!C.zf)) goto L_115f3ace;
  /* 115f3ab1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3ab3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 115f3aba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f3abb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 115f3ac0 mov ebx, ecx */
  EBX = (ECX);
  /* 115f3ac2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3ac5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115f3ac7 mov ecx, ebx */
  ECX = (EBX);
  /* 115f3ac9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 115f3acc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_115f3ace:;
  /* 115f3ace inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115f3acf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115f3ad0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 115f3ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f3ad5 jne 0x115f3aa7 */
  if (!C.zf) goto L_115f3aa7;
  /* 115f3ad7 pop edi */
  EDI = (pop32());
  /* 115f3ad8 pop ebx */
  EBX = (pop32());
L_115f3ad9:;
  /* 115f3ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3adb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 115f3ae1 push dword ptr [0x115f7cc4] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc4))));
  /* 115f3ae7 push dword ptr [0x115f7a90] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a90))));
  /* 115f3aed push eax */
  push32((uint32_t)(EAX));
  /* 115f3aee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 115f3af4 push esi */
  push32((uint32_t)(ESI));
  /* 115f3af5 push eax */
  push32((uint32_t)(EAX));
  /* 115f3af6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f3af8 call 0x115f4bd2 */
  push32(0x115f3afdu); f_115f4bd2();
  /* 115f3afd push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3aff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 115f3b05 push dword ptr [0x115f7a90] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a90))));
  /* 115f3b0b push esi */
  push32((uint32_t)(ESI));
  /* 115f3b0c push eax */
  push32((uint32_t)(EAX));
  /* 115f3b0d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 115f3b13 push esi */
  push32((uint32_t)(ESI));
  /* 115f3b14 push eax */
  push32((uint32_t)(EAX));
  /* 115f3b15 push esi */
  push32((uint32_t)(ESI));
  /* 115f3b16 push dword ptr [0x115f7cc4] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc4))));
  /* 115f3b1c call 0x115f4983 */
  push32(0x115f3b21u); f_115f4983();
  /* 115f3b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3b23 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 115f3b29 push dword ptr [0x115f7a90] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a90))));
  /* 115f3b2f push esi */
  push32((uint32_t)(ESI));
  /* 115f3b30 push eax */
  push32((uint32_t)(EAX));
  /* 115f3b31 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 115f3b37 push esi */
  push32((uint32_t)(ESI));
  /* 115f3b38 push eax */
  push32((uint32_t)(EAX));
  /* 115f3b39 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 115f3b3e push dword ptr [0x115f7cc4] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc4))));
  /* 115f3b44 call 0x115f4983 */
  push32(0x115f3b49u); f_115f4983();
  /* 115f3b49 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3b4e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_115f3b54:;
  /* 115f3b54 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115f3b57 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 115f3b5a je 0x115f3b72 */
  if (C.zf) goto L_115f3b72;
  /* 115f3b5c or byte ptr [eax + 0x115f7bc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(0x10u); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f3b63 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_115f3b6a:;
  /* 115f3b6a mov byte ptr [eax + 0x115f7ac0], dl */
  w8((uint32_t)(EAX + 0x115f7ac0), (DL));
  /* 115f3b70 jmp 0x115f3b8e */
  goto L_115f3b8e;
L_115f3b72:;
  /* 115f3b72 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 115f3b75 je 0x115f3b87 */
  if (C.zf) goto L_115f3b87;
  /* 115f3b77 or byte ptr [eax + 0x115f7bc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(0x20u); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f3b7e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 115f3b85 jmp 0x115f3b6a */
  goto L_115f3b6a;
L_115f3b87:;
  /* 115f3b87 and byte ptr [eax + 0x115f7ac0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7ac0)))&(0x0u); w8((uint32_t)(EAX + 0x115f7ac0), (_r)); fl_logic(_r,8); }
L_115f3b8e:;
  /* 115f3b8e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3b8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f3b90 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115f3b91 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3b93 jb 0x115f3b54 */
  if (C.cf) goto L_115f3b54;
  /* 115f3b95 jmp 0x115f3be0 */
  goto L_115f3be0;
L_115f3b97:;
  /* 115f3b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f3b99 mov esi, 0x100 */
  ESI = (0x100u);
L_115f3b9e:;
  /* 115f3b9e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3ba1 jb 0x115f3bbc */
  if (C.cf) goto L_115f3bbc;
  /* 115f3ba3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3ba6 ja 0x115f3bbc */
  if ((!C.cf&&!C.zf)) goto L_115f3bbc;
  /* 115f3ba8 or byte ptr [eax + 0x115f7bc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(0x10u); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f3baf mov cl, al */
  CL = (AL);
  /* 115f3bb1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_115f3bb4:;
  /* 115f3bb4 mov byte ptr [eax + 0x115f7ac0], cl */
  w8((uint32_t)(EAX + 0x115f7ac0), (CL));
  /* 115f3bba jmp 0x115f3bdb */
  goto L_115f3bdb;
L_115f3bbc:;
  /* 115f3bbc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3bbf jb 0x115f3bd4 */
  if (C.cf) goto L_115f3bd4;
  /* 115f3bc1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3bc4 ja 0x115f3bd4 */
  if ((!C.cf&&!C.zf)) goto L_115f3bd4;
  /* 115f3bc6 or byte ptr [eax + 0x115f7bc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7bc1)))|(0x20u); w8((uint32_t)(EAX + 0x115f7bc1), (_r)); fl_logic(_r,8); }
  /* 115f3bcd mov cl, al */
  CL = (AL);
  /* 115f3bcf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115f3bd2 jmp 0x115f3bb4 */
  goto L_115f3bb4;
L_115f3bd4:;
  /* 115f3bd4 and byte ptr [eax + 0x115f7ac0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x115f7ac0)))&(0x0u); w8((uint32_t)(EAX + 0x115f7ac0), (_r)); fl_logic(_r,8); }
L_115f3bdb:;
  /* 115f3bdb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f3bdc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3bde jb 0x115f3b9e */
  if (C.cf) goto L_115f3b9e;
L_115f3be0:;
  /* 115f3be0 pop esi */
  ESI = (pop32());
  /* 115f3be1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3be2 ret  */
  ESPCHK(0x115f3a5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003be3 @ 0x115f3be3 (28 bytes, 7 insns) */
void f_115f3be3(void) {
  FTRACE(0x115f3be3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3be3 cmp dword ptr [0x115f7de8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115f7de8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3bea jne 0x115f3bfe */
  if (!C.zf) goto L_115f3bfe;
  /* 115f3bec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 115f3bee call 0x115f380b */
  push32(0x115f3bf3u); f_115f380b();
  /* 115f3bf3 pop ecx */
  ECX = (pop32());
  /* 115f3bf4 mov dword ptr [0x115f7de8], 1 */
  w32((uint32_t)(0x115f7de8), (0x1u));
L_115f3bfe:;
  /* 115f3bfe ret  */
  ESPCHK(0x115f3be3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c00 @ 0x115f3c00 (664 bytes, 259 insns) [15 switch table(s)] */
void f_115f3c00(void) {
  FTRACE(0x115f3c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3c00 push ebp */
  push32((uint32_t)(EBP));
  /* 115f3c01 mov ebp, esp */
  EBP = (ESP);
  /* 115f3c03 push edi */
  push32((uint32_t)(EDI));
  /* 115f3c04 push esi */
  push32((uint32_t)(ESI));
  /* 115f3c05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115f3c08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115f3c0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3c0e mov eax, ecx */
  EAX = (ECX);
  /* 115f3c10 mov edx, ecx */
  EDX = (ECX);
  /* 115f3c12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3c14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3c16 jbe 0x115f3c20 */
  if ((C.cf||C.zf)) goto L_115f3c20;
  /* 115f3c18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3c1a jb 0x115f3d98 */
  if (C.cf) goto L_115f3d98;
L_115f3c20:;
  /* 115f3c20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115f3c26 jne 0x115f3c3c */
  if (!C.zf) goto L_115f3c3c;
  /* 115f3c28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3c2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115f3c2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3c31 jb 0x115f3c5c */
  if (C.cf) goto L_115f3c5c;
  /* 115f3c33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3c35 jmp dword ptr [edx*4 + 0x115f3d48] */
  switch (EDX) {
    case 0: goto L_115f3d58;
    case 1: goto L_115f3d60;
    case 2: goto L_115f3d6c;
    case 3: goto L_115f3d80;
    default: x86_unimpl("switch@0x115f3c35 out of table"); return;
  }
L_115f3c3c:;
  /* 115f3c3c mov eax, edi */
  EAX = (EDI);
  /* 115f3c3e mov edx, 3 */
  EDX = (0x3u);
  /* 115f3c43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3c46 jb 0x115f3c54 */
  if (C.cf) goto L_115f3c54;
  /* 115f3c48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115f3c4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3c4d jmp dword ptr [eax*4 + 0x115f3c60] */
  switch (EAX) {
    case 1: goto L_115f3c70;
    case 2: goto L_115f3c9c;
    case 3: goto L_115f3cc0;
    default: x86_unimpl("switch@0x115f3c4d out of table"); return;
  }
L_115f3c54:;
  /* 115f3c54 jmp dword ptr [ecx*4 + 0x115f3d58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115f3d58)))); return;
  /* 115f3c5b nop  */
  /* nop */
L_115f3c5c:;
  /* 115f3c5c jmp dword ptr [ecx*4 + 0x115f3cdc] */
  switch (ECX) {
    case 0: goto L_115f3d3f;
    case 1: goto L_115f3d2c;
    case 2: goto L_115f3d24;
    case 3: goto L_115f3d1c;
    case 4: goto L_115f3d14;
    case 5: goto L_115f3d0c;
    case 6: goto L_115f3d04;
    case 7: goto L_115f3cfc;
    default: x86_unimpl("switch@0x115f3c5c out of table"); return;
  }
  /* 115f3c63 nop  */
  /* nop */
L_115f3c70:;
  /* 115f3c70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3c72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f3c74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f3c76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f3c79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f3c7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f3c7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3c82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f3c85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3c88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3c8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3c8e jb 0x115f3c5c */
  if (C.cf) goto L_115f3c5c;
  /* 115f3c90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3c92 jmp dword ptr [edx*4 + 0x115f3d48] */
  switch (EDX) {
    case 0: goto L_115f3d58;
    case 1: goto L_115f3d60;
    case 2: goto L_115f3d6c;
    case 3: goto L_115f3d80;
    default: x86_unimpl("switch@0x115f3c92 out of table"); return;
  }
  /* 115f3c99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f3c9c:;
  /* 115f3c9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3c9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f3ca0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f3ca2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f3ca5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3ca8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f3cab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3cae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3cb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3cb4 jb 0x115f3c5c */
  if (C.cf) goto L_115f3c5c;
  /* 115f3cb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3cb8 jmp dword ptr [edx*4 + 0x115f3d48] */
  switch (EDX) {
    case 0: goto L_115f3d58;
    case 1: goto L_115f3d60;
    case 2: goto L_115f3d6c;
    case 3: goto L_115f3d80;
    default: x86_unimpl("switch@0x115f3cb8 out of table"); return;
  }
  /* 115f3cbf nop  */
  /* nop */
L_115f3cc0:;
  /* 115f3cc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3cc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f3cc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f3cc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f3cc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3cca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f3ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3cce jb 0x115f3c5c */
  if (C.cf) goto L_115f3c5c;
  /* 115f3cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3cd2 jmp dword ptr [edx*4 + 0x115f3d48] */
  switch (EDX) {
    case 0: goto L_115f3d58;
    case 1: goto L_115f3d60;
    case 2: goto L_115f3d6c;
    case 3: goto L_115f3d80;
    default: x86_unimpl("switch@0x115f3cd2 out of table"); return;
  }
  /* 115f3cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f3cfc:;
  /* 115f3cfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 115f3d00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_115f3d04:;
  /* 115f3d04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 115f3d08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_115f3d0c:;
  /* 115f3d0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 115f3d10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_115f3d14:;
  /* 115f3d14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 115f3d18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_115f3d1c:;
  /* 115f3d1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 115f3d20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_115f3d24:;
  /* 115f3d24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 115f3d28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_115f3d2c:;
  /* 115f3d2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 115f3d30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 115f3d34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115f3d3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3d3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115f3d3f:;
  /* 115f3d3f jmp dword ptr [edx*4 + 0x115f3d48] */
  switch (EDX) {
    case 0: goto L_115f3d58;
    case 1: goto L_115f3d60;
    case 2: goto L_115f3d6c;
    case 3: goto L_115f3d80;
    default: x86_unimpl("switch@0x115f3d3f out of table"); return;
  }
  /* 115f3d46 mov edi, edi */
  EDI = (EDI);
L_115f3d58:;
  /* 115f3d58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3d5b pop esi */
  ESI = (pop32());
  /* 115f3d5c pop edi */
  EDI = (pop32());
  /* 115f3d5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3d5e ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3d5f nop  */
  /* nop */
L_115f3d60:;
  /* 115f3d60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f3d62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f3d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3d67 pop esi */
  ESI = (pop32());
  /* 115f3d68 pop edi */
  EDI = (pop32());
  /* 115f3d69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3d6a ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3d6b nop  */
  /* nop */
L_115f3d6c:;
  /* 115f3d6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f3d6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f3d70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f3d73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f3d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3d79 pop esi */
  ESI = (pop32());
  /* 115f3d7a pop edi */
  EDI = (pop32());
  /* 115f3d7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3d7c ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3d7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f3d80:;
  /* 115f3d80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f3d82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f3d84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f3d87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f3d8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f3d8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f3d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3d93 pop esi */
  ESI = (pop32());
  /* 115f3d94 pop edi */
  EDI = (pop32());
  /* 115f3d95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3d96 ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3d97 nop  */
  /* nop */
L_115f3d98:;
  /* 115f3d98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115f3d9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115f3da0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115f3da6 jne 0x115f3dcc */
  if (!C.zf) goto L_115f3dcc;
  /* 115f3da8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3dab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115f3dae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3db1 jb 0x115f3dc0 */
  if (C.cf) goto L_115f3dc0;
  /* 115f3db3 std  */
  C.df=1;
  /* 115f3db4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3db6 cld  */
  C.df=0;
  /* 115f3db7 jmp dword ptr [edx*4 + 0x115f3ee0] */
  switch (EDX) {
    case 0: goto L_115f3ef0;
    case 1: goto L_115f3ef8;
    case 2: goto L_115f3f08;
    case 3: goto L_115f3f1c;
    default: x86_unimpl("switch@0x115f3db7 out of table"); return;
  }
  /* 115f3dbe mov edi, edi */
  EDI = (EDI);
L_115f3dc0:;
  /* 115f3dc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115f3dc2 jmp dword ptr [ecx*4 + 0x115f3e90] */
  switch (ECX) {
    case 0: goto L_115f3ed7;
    default: x86_unimpl("switch@0x115f3dc2 out of table"); return;
  }
  /* 115f3dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f3dcc:;
  /* 115f3dcc mov eax, edi */
  EAX = (EDI);
  /* 115f3dce mov edx, 3 */
  EDX = (0x3u);
  /* 115f3dd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3dd6 jb 0x115f3de4 */
  if (C.cf) goto L_115f3de4;
  /* 115f3dd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115f3ddb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3ddd jmp dword ptr [eax*4 + 0x115f3de8] */
  switch (EAX) {
    case 1: goto L_115f3df8;
    case 2: goto L_115f3e18;
    case 3: goto L_115f3e40;
    default: x86_unimpl("switch@0x115f3ddd out of table"); return;
  }
L_115f3de4:;
  /* 115f3de4 jmp dword ptr [ecx*4 + 0x115f3ee0] */
  switch (ECX) {
    case 0: goto L_115f3ef0;
    case 1: goto L_115f3ef8;
    case 2: goto L_115f3f08;
    case 3: goto L_115f3f1c;
    default: x86_unimpl("switch@0x115f3de4 out of table"); return;
  }
  /* 115f3deb nop  */
  /* nop */
L_115f3df8:;
  /* 115f3df8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f3dfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3dfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f3e00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115f3e01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3e04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f3e05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3e08 jb 0x115f3dc0 */
  if (C.cf) goto L_115f3dc0;
  /* 115f3e0a std  */
  C.df=1;
  /* 115f3e0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3e0d cld  */
  C.df=0;
  /* 115f3e0e jmp dword ptr [edx*4 + 0x115f3ee0] */
  switch (EDX) {
    case 0: goto L_115f3ef0;
    case 1: goto L_115f3ef8;
    case 2: goto L_115f3f08;
    case 3: goto L_115f3f1c;
    default: x86_unimpl("switch@0x115f3e0e out of table"); return;
  }
  /* 115f3e15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f3e18:;
  /* 115f3e18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f3e1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3e1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f3e20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f3e23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3e26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f3e29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3e2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3e2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3e32 jb 0x115f3dc0 */
  if (C.cf) goto L_115f3dc0;
  /* 115f3e34 std  */
  C.df=1;
  /* 115f3e35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3e37 cld  */
  C.df=0;
  /* 115f3e38 jmp dword ptr [edx*4 + 0x115f3ee0] */
  switch (EDX) {
    case 0: goto L_115f3ef0;
    case 1: goto L_115f3ef8;
    case 2: goto L_115f3f08;
    case 3: goto L_115f3f1c;
    default: x86_unimpl("switch@0x115f3e38 out of table"); return;
  }
  /* 115f3e3f nop  */
  /* nop */
L_115f3e40:;
  /* 115f3e40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f3e43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f3e45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f3e48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f3e4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f3e4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f3e51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f3e54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f3e57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3e5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3e5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3e60 jb 0x115f3dc0 */
  if (C.cf) goto L_115f3dc0;
  /* 115f3e66 std  */
  C.df=1;
  /* 115f3e67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f3e69 cld  */
  C.df=0;
  /* 115f3e6a jmp dword ptr [edx*4 + 0x115f3ee0] */
  switch (EDX) {
    case 0: goto L_115f3ef0;
    case 1: goto L_115f3ef8;
    case 2: goto L_115f3f08;
    case 3: goto L_115f3f1c;
    default: x86_unimpl("switch@0x115f3e6a out of table"); return;
  }
  /* 115f3e71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115f3e74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 115f3e75 pop edi */
  EDI = (pop32());
  /* 115f3e77 adc dword ptr [esi + edi + 0x3ea4115f], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0x3ea4115f))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0x3ea4115f), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f3e7e pop edi */
  EDI = (pop32());
  /* 115f3e7f adc dword ptr [esi + edi + 0x3eb4115f], ebp */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0x3eb4115f))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0x3eb4115f), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f3e86 pop edi */
  EDI = (pop32());
  /* 115f3e87 adc dword ptr [esi + edi + 0x3ec4115f], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0x3ec4115f))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0x3ec4115f), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f3e8e pop edi */
  EDI = (pop32());
  /* 115f3e94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115f3e98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115f3e9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115f3ea0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115f3ea4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115f3ea8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115f3eac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115f3eb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115f3eb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115f3eb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115f3ebc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115f3ec0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115f3ec4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115f3ec8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 115f3ecc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115f3ed3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3ed5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115f3ed7:;
  /* 115f3ed7 jmp dword ptr [edx*4 + 0x115f3ee0] */
  switch (EDX) {
    case 0: goto L_115f3ef0;
    case 1: goto L_115f3ef8;
    case 2: goto L_115f3f08;
    case 3: goto L_115f3f1c;
    default: x86_unimpl("switch@0x115f3ed7 out of table"); return;
  }
  /* 115f3ede mov edi, edi */
  EDI = (EDI);
L_115f3ef0:;
  /* 115f3ef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3ef3 pop esi */
  ESI = (pop32());
  /* 115f3ef4 pop edi */
  EDI = (pop32());
  /* 115f3ef5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3ef6 ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3ef7 nop  */
  /* nop */
L_115f3ef8:;
  /* 115f3ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f3efb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f3efe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3f01 pop esi */
  ESI = (pop32());
  /* 115f3f02 pop edi */
  EDI = (pop32());
  /* 115f3f03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3f04 ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3f05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f3f08:;
  /* 115f3f08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f3f0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f3f0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f3f11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f3f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3f17 pop esi */
  ESI = (pop32());
  /* 115f3f18 pop edi */
  EDI = (pop32());
  /* 115f3f19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3f1a ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
  /* 115f3f1b nop  */
  /* nop */
L_115f3f1c:;
  /* 115f3f1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f3f1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f3f22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f3f25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f3f28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f3f2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f3f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3f31 pop esi */
  ESI = (pop32());
  /* 115f3f32 pop edi */
  EDI = (pop32());
  /* 115f3f33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f3f34 ret  */
  ESPCHK(0x115f3c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f35 @ 0x115f3f35 (62 bytes, 15 insns) */
void f_115f3f35(void) {
  FTRACE(0x115f3f35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3f35 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 115f3f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 115f3f3c push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f3f42 call dword ptr [0x115f603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f603c))), 0x115f3f48u);
  /* 115f3f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f3f4a mov dword ptr [0x115f7a8c], eax */
  w32((uint32_t)(0x115f7a8c), (EAX));
  /* 115f3f4f jne 0x115f3f52 */
  if (!C.zf) goto L_115f3f52;
  /* 115f3f51 ret  */
  ESPCHK(0x115f3f35u, _esp0);
  ESP += 4; return;
L_115f3f52:;
  /* 115f3f52 and dword ptr [0x115f7a84], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115f7a84)))&(0x0u); w32((uint32_t)(0x115f7a84), (_r)); fl_logic(_r,32); }
  /* 115f3f59 and dword ptr [0x115f7a88], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115f7a88)))&(0x0u); w32((uint32_t)(0x115f7a88), (_r)); fl_logic(_r,32); }
  /* 115f3f60 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f3f62 mov dword ptr [0x115f7a80], eax */
  w32((uint32_t)(0x115f7a80), (EAX));
  /* 115f3f67 mov dword ptr [0x115f7a78], 0x10 */
  w32((uint32_t)(0x115f7a78), (0x10u));
  /* 115f3f71 pop eax */
  EAX = (pop32());
  /* 115f3f72 ret  */
  ESPCHK(0x115f3f35u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f73 @ 0x115f3f73 (43 bytes, 14 insns) */
void f_115f3f73(void) {
  FTRACE(0x115f3f73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3f73 mov eax, dword ptr [0x115f7a88] */
  EAX = (r32((uint32_t)(0x115f7a88)));
  /* 115f3f78 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 115f3f7b mov eax, dword ptr [0x115f7a8c] */
  EAX = (r32((uint32_t)(0x115f7a8c)));
  /* 115f3f80 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_115f3f83:;
  /* 115f3f83 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3f85 jae 0x115f3f9b */
  if (!C.cf) goto L_115f3f9b;
  /* 115f3f87 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f3f8b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3f8e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3f94 jb 0x115f3f9d */
  if (C.cf) goto L_115f3f9d;
  /* 115f3f96 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3f99 jmp 0x115f3f83 */
  goto L_115f3f83;
L_115f3f9b:;
  /* 115f3f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115f3f9d:;
  /* 115f3f9d ret  */
  ESPCHK(0x115f3f73u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f9e @ 0x115f3f9e (811 bytes, 264 insns) */
void f_115f3f9e(void) {
  FTRACE(0x115f3f9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f3f9e push ebp */
  push32((uint32_t)(EBP));
  /* 115f3f9f mov ebp, esp */
  EBP = (ESP);
  /* 115f3fa1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3fa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115f3fa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f3faa push ebx */
  push32((uint32_t)(EBX));
  /* 115f3fab push esi */
  push32((uint32_t)(ESI));
  /* 115f3fac mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 115f3faf mov esi, edx */
  ESI = (EDX);
  /* 115f3fb1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f3fb4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 115f3fb7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f3fba push edi */
  push32((uint32_t)(EDI));
  /* 115f3fbb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 115f3fbe mov ecx, esi */
  ECX = (ESI);
  /* 115f3fc0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 115f3fc3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115f3fc9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115f3fca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115f3fcd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115f3fd4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 115f3fd7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115f3fda mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 115f3fdd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 115f3fe0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115f3fe3 jne 0x115f4064 */
  if (!C.zf) goto L_115f4064;
  /* 115f3fe5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115f3fe8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115f3fea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f3feb pop edi */
  EDI = (pop32());
  /* 115f3fec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115f3fef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3ff1 jbe 0x115f3ff6 */
  if ((C.cf||C.zf)) goto L_115f3ff6;
  /* 115f3ff3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_115f3ff6:;
  /* 115f3ff6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 115f3ffa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f3ffe jne 0x115f4048 */
  if (!C.zf) goto L_115f4048;
  /* 115f4000 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115f4003 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4006 jae 0x115f4024 */
  if (!C.cf) goto L_115f4024;
  /* 115f4008 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115f400d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115f400f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115f4013 not edi */
  EDI = (~(EDI));
  /* 115f4015 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115f4019 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115f401b jne 0x115f4048 */
  if (!C.zf) goto L_115f4048;
  /* 115f401d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4020 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115f4022 jmp 0x115f4048 */
  goto L_115f4048;
L_115f4024:;
  /* 115f4024 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4027 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115f402c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115f402e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115f4031 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115f4035 not edi */
  EDI = (~(EDI));
  /* 115f4037 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 115f403e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115f4040 jne 0x115f4048 */
  if (!C.zf) goto L_115f4048;
  /* 115f4042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4045 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115f4048:;
  /* 115f4048 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 115f404c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 115f4050 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 115f4053 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 115f4057 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 115f405b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f405e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 115f4061 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_115f4064:;
  /* 115f4064 mov edi, ebx */
  EDI = (EBX);
  /* 115f4066 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 115f4069 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f406a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f406d jbe 0x115f4072 */
  if ((C.cf||C.zf)) goto L_115f4072;
  /* 115f406f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115f4071 pop edi */
  EDI = (pop32());
L_115f4072:;
  /* 115f4072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f4075 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115f4078 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115f407b jne 0x115f4121 */
  if (!C.zf) goto L_115f4121;
  /* 115f4081 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4084 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f4087 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115f408a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115f408c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115f408f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f4090 pop edx */
  EDX = (pop32());
  /* 115f4091 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4093 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115f4096 jbe 0x115f409d */
  if ((C.cf||C.zf)) goto L_115f409d;
  /* 115f4098 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 115f409b mov ecx, edx */
  ECX = (EDX);
L_115f409d:;
  /* 115f409d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f40a0 mov edi, ebx */
  EDI = (EBX);
  /* 115f40a2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 115f40a5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 115f40a8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f40a9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f40ab jbe 0x115f40af */
  if ((C.cf||C.zf)) goto L_115f40af;
  /* 115f40ad mov edi, edx */
  EDI = (EDX);
L_115f40af:;
  /* 115f40af cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f40b1 je 0x115f411e */
  if (C.zf) goto L_115f411e;
  /* 115f40b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115f40b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115f40b9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f40bc jne 0x115f4106 */
  if (!C.zf) goto L_115f4106;
  /* 115f40be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115f40c1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f40c4 jae 0x115f40e2 */
  if (!C.cf) goto L_115f40e2;
  /* 115f40c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115f40cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115f40cd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115f40d1 not edx */
  EDX = (~(EDX));
  /* 115f40d3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115f40d7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115f40d9 jne 0x115f4106 */
  if (!C.zf) goto L_115f4106;
  /* 115f40db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f40de and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115f40e0 jmp 0x115f4106 */
  goto L_115f4106;
L_115f40e2:;
  /* 115f40e2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f40e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115f40ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115f40ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115f40ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 115f40f3 not edx */
  EDX = (~(EDX));
  /* 115f40f5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 115f40fc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 115f40fe jne 0x115f4106 */
  if (!C.zf) goto L_115f4106;
  /* 115f4100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4103 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115f4106:;
  /* 115f4106 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115f4109 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115f410c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 115f410f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115f4112 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115f4115 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115f4118 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 115f411b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_115f411e:;
  /* 115f411e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_115f4121:;
  /* 115f4121 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4125 jne 0x115f4130 */
  if (!C.zf) goto L_115f4130;
  /* 115f4127 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f412a je 0x115f41b9 */
  if (C.zf) goto L_115f41b9;
L_115f4130:;
  /* 115f4130 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115f4133 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 115f4136 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 115f4139 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115f413c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115f413f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 115f4142 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115f4145 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115f4148 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115f414b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115f414e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115f4151 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4154 jne 0x115f41b9 */
  if (!C.zf) goto L_115f41b9;
  /* 115f4156 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 115f415a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f415d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 115f4160 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115f4162 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 115f4166 jae 0x115f418d */
  if (!C.cf) goto L_115f418d;
  /* 115f4168 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f416c jne 0x115f417c */
  if (!C.zf) goto L_115f417c;
  /* 115f416e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115f4173 mov ecx, edi */
  ECX = (EDI);
  /* 115f4175 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115f4177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f417a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_115f417c:;
  /* 115f417c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115f4181 mov ecx, edi */
  ECX = (EDI);
  /* 115f4183 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115f4185 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 115f4189 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115f418b jmp 0x115f41b6 */
  goto L_115f41b6;
L_115f418d:;
  /* 115f418d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f4191 jne 0x115f41a3 */
  if (!C.zf) goto L_115f41a3;
  /* 115f4193 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115f4196 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115f419b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115f419d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f41a0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115f41a3:;
  /* 115f41a3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115f41a6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115f41ab shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115f41ad lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 115f41b4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_115f41b6:;
  /* 115f41b6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_115f41b9:;
  /* 115f41b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115f41bc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 115f41be mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 115f41c2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 115f41c4 jne 0x115f42c4 */
  if (!C.zf) goto L_115f42c4;
  /* 115f41ca mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f41cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f41d1 je 0x115f42b6 */
  if (C.zf) goto L_115f42b6;
  /* 115f41d7 mov ecx, dword ptr [0x115f7a7c] */
  ECX = (r32((uint32_t)(0x115f7a7c)));
  /* 115f41dd mov edi, dword ptr [0x115f6050] */
  EDI = (r32((uint32_t)(0x115f6050)));
  /* 115f41e3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 115f41e6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f41e9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 115f41ee push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115f41f3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f41f4 push ecx */
  push32((uint32_t)(ECX));
  /* 115f41f5 call edi */
  call_ind((uint32_t)(EDI), 0x115f41f7u);
  /* 115f41f7 mov ecx, dword ptr [0x115f7a7c] */
  ECX = (r32((uint32_t)(0x115f7a7c)));
  /* 115f41fd mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f4202 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115f4207 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115f4209 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115f420c mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f4211 mov ecx, dword ptr [0x115f7a7c] */
  ECX = (r32((uint32_t)(0x115f7a7c)));
  /* 115f4217 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 115f421a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 115f4222 mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f4227 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 115f422a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 115f422d mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f4232 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115f4235 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f4239 jne 0x115f4244 */
  if (!C.zf) goto L_115f4244;
  /* 115f423b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 115f423f mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
L_115f4244:;
  /* 115f4244 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4248 jne 0x115f42b6 */
  if (!C.zf) goto L_115f42b6;
  /* 115f424a push ebx */
  push32((uint32_t)(EBX));
  /* 115f424b push 0 */
  push32((uint32_t)(0x0u));
  /* 115f424d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 115f4250 call edi */
  call_ind((uint32_t)(EDI), 0x115f4252u);
  /* 115f4252 mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f4257 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 115f425a push 0 */
  push32((uint32_t)(0x0u));
  /* 115f425c push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f4262 call dword ptr [0x115f604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f604c))), 0x115f4268u);
  /* 115f4268 mov eax, dword ptr [0x115f7a88] */
  EAX = (r32((uint32_t)(0x115f7a88)));
  /* 115f426d mov edx, dword ptr [0x115f7a8c] */
  EDX = (r32((uint32_t)(0x115f7a8c)));
  /* 115f4273 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115f4276 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115f4279 mov ecx, eax */
  ECX = (EAX);
  /* 115f427b mov eax, dword ptr [0x115f7a84] */
  EAX = (r32((uint32_t)(0x115f7a84)));
  /* 115f4280 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4282 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 115f4286 push ecx */
  push32((uint32_t)(ECX));
  /* 115f4287 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 115f428a push ecx */
  push32((uint32_t)(ECX));
  /* 115f428b push eax */
  push32((uint32_t)(EAX));
  /* 115f428c call 0x115f4d20 */
  push32(0x115f4291u); f_115f4d20();
  /* 115f4291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4294 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4297 dec dword ptr [0x115f7a88] */
  { uint32_t _r=(r32((uint32_t)(0x115f7a88)))-1; w32((uint32_t)(0x115f7a88), (_r)); fl_dec(_r,32); }
  /* 115f429d cmp eax, dword ptr [0x115f7a84] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115f7a84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f42a3 jbe 0x115f42a8 */
  if ((C.cf||C.zf)) goto L_115f42a8;
  /* 115f42a5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115f42a8:;
  /* 115f42a8 mov ecx, dword ptr [0x115f7a8c] */
  ECX = (r32((uint32_t)(0x115f7a8c)));
  /* 115f42ae mov dword ptr [0x115f7a80], ecx */
  w32((uint32_t)(0x115f7a80), (ECX));
  /* 115f42b4 jmp 0x115f42b9 */
  goto L_115f42b9;
L_115f42b6:;
  /* 115f42b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_115f42b9:;
  /* 115f42b9 mov dword ptr [0x115f7a84], eax */
  w32((uint32_t)(0x115f7a84), (EAX));
  /* 115f42be mov dword ptr [0x115f7a7c], esi */
  w32((uint32_t)(0x115f7a7c), (ESI));
L_115f42c4:;
  /* 115f42c4 pop edi */
  EDI = (pop32());
  /* 115f42c5 pop esi */
  ESI = (pop32());
  /* 115f42c6 pop ebx */
  EBX = (pop32());
  /* 115f42c7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f42c8 ret  */
  ESPCHK(0x115f3f9eu, _esp0);
  ESP += 4; return;
}

/* FUN_100042c9 @ 0x115f42c9 (777 bytes, 275 insns) */
void f_115f42c9(void) {
  FTRACE(0x115f42c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f42c9 push ebp */
  push32((uint32_t)(EBP));
  /* 115f42ca mov ebp, esp */
  EBP = (ESP);
  /* 115f42cc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f42cf mov eax, dword ptr [0x115f7a88] */
  EAX = (r32((uint32_t)(0x115f7a88)));
  /* 115f42d4 mov edx, dword ptr [0x115f7a8c] */
  EDX = (r32((uint32_t)(0x115f7a8c)));
  /* 115f42da push ebx */
  push32((uint32_t)(EBX));
  /* 115f42db push esi */
  push32((uint32_t)(ESI));
  /* 115f42dc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115f42df push edi */
  push32((uint32_t)(EDI));
  /* 115f42e0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 115f42e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f42e6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115f42e9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 115f42ec and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 115f42ef mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115f42f2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115f42f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f42f6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f42f9 jge 0x115f4309 */
  if ((C.sf==C.of)) goto L_115f4309;
  /* 115f42fb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 115f42fe shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 115f4300 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 115f4304 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 115f4307 jmp 0x115f4319 */
  goto L_115f4319;
L_115f4309:;
  /* 115f4309 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f430c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f430f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115f4311 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115f4313 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 115f4316 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115f4319:;
  /* 115f4319 mov eax, dword ptr [0x115f7a80] */
  EAX = (r32((uint32_t)(0x115f7a80)));
  /* 115f431e mov ebx, eax */
  EBX = (EAX);
  /* 115f4320 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4322 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f4325 jae 0x115f4340 */
  if (!C.cf) goto L_115f4340;
L_115f4327:;
  /* 115f4327 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 115f432a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 115f432c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115f432f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 115f4331 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115f4333 jne 0x115f4340 */
  if (!C.zf) goto L_115f4340;
  /* 115f4335 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4338 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f433b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f433e jb 0x115f4327 */
  if (C.cf) goto L_115f4327;
L_115f4340:;
  /* 115f4340 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4343 jne 0x115f43be */
  if (!C.zf) goto L_115f43be;
  /* 115f4345 mov ebx, edx */
  EBX = (EDX);
L_115f4347:;
  /* 115f4347 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4349 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f434c jae 0x115f4363 */
  if (!C.cf) goto L_115f4363;
  /* 115f434e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 115f4351 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 115f4353 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115f4356 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 115f4358 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115f435a jne 0x115f4361 */
  if (!C.zf) goto L_115f4361;
  /* 115f435c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f435f jmp 0x115f4347 */
  goto L_115f4347;
L_115f4361:;
  /* 115f4361 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115f4363:;
  /* 115f4363 jne 0x115f43be */
  if (!C.zf) goto L_115f43be;
L_115f4365:;
  /* 115f4365 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4368 jae 0x115f437b */
  if (!C.cf) goto L_115f437b;
  /* 115f436a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f436e jne 0x115f4378 */
  if (!C.zf) goto L_115f4378;
  /* 115f4370 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4373 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f4376 jmp 0x115f4365 */
  goto L_115f4365;
L_115f4378:;
  /* 115f4378 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115f437b:;
  /* 115f437b jne 0x115f43a3 */
  if (!C.zf) goto L_115f43a3;
  /* 115f437d mov ebx, edx */
  EBX = (EDX);
L_115f437f:;
  /* 115f437f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4381 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f4384 jae 0x115f4393 */
  if (!C.cf) goto L_115f4393;
  /* 115f4386 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f438a jne 0x115f4391 */
  if (!C.zf) goto L_115f4391;
  /* 115f438c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f438f jmp 0x115f437f */
  goto L_115f437f;
L_115f4391:;
  /* 115f4391 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115f4393:;
  /* 115f4393 jne 0x115f43a3 */
  if (!C.zf) goto L_115f43a3;
  /* 115f4395 call 0x115f45d2 */
  push32(0x115f439au); f_115f45d2();
  /* 115f439a mov ebx, eax */
  EBX = (EAX);
  /* 115f439c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115f439e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115f43a1 je 0x115f43b7 */
  if (C.zf) goto L_115f43b7;
L_115f43a3:;
  /* 115f43a3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f43a4 call 0x115f4683 */
  push32(0x115f43a9u); f_115f4683();
  /* 115f43a9 pop ecx */
  ECX = (pop32());
  /* 115f43aa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 115f43ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115f43af mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 115f43b2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f43b5 jne 0x115f43be */
  if (!C.zf) goto L_115f43be;
L_115f43b7:;
  /* 115f43b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f43b9 jmp 0x115f45cd */
  goto L_115f45cd;
L_115f43be:;
  /* 115f43be mov dword ptr [0x115f7a80], ebx */
  w32((uint32_t)(0x115f7a80), (EBX));
  /* 115f43c4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 115f43c7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 115f43c9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f43cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115f43cf je 0x115f43e5 */
  if (C.zf) goto L_115f43e5;
  /* 115f43d1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 115f43d8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 115f43dc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115f43df and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 115f43e1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115f43e3 jne 0x115f441c */
  if (!C.zf) goto L_115f441c;
L_115f43e5:;
  /* 115f43e5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 115f43eb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 115f43ee and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 115f43f1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 115f43f4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f43f8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 115f43fb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 115f43fd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115f4400 jne 0x115f4419 */
  if (!C.zf) goto L_115f4419;
L_115f4402:;
  /* 115f4402 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 115f4408 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 115f440b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 115f440e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4411 mov edi, esi */
  EDI = (ESI);
  /* 115f4413 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 115f4415 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 115f4417 je 0x115f4402 */
  if (C.zf) goto L_115f4402;
L_115f4419:;
  /* 115f4419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_115f441c:;
  /* 115f441c mov ecx, edx */
  ECX = (EDX);
  /* 115f441e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f4420 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115f4426 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115f442d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115f4430 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 115f4434 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 115f4436 jne 0x115f4445 */
  if (!C.zf) goto L_115f4445;
  /* 115f4438 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 115f443f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115f4441 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 115f4444 pop edi */
  EDI = (pop32());
L_115f4445:;
  /* 115f4445 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115f4447 jl 0x115f444e */
  if ((C.sf!=C.of)) goto L_115f444e;
  /* 115f4449 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115f444b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f444c jmp 0x115f4445 */
  goto L_115f4445;
L_115f444e:;
  /* 115f444e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115f4451 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 115f4455 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 115f4457 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f445a mov esi, ecx */
  ESI = (ECX);
  /* 115f445c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115f445f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 115f4462 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115f4463 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4466 jle 0x115f446b */
  if ((C.zf||C.sf!=C.of)) goto L_115f446b;
  /* 115f4468 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115f446a pop esi */
  ESI = (pop32());
L_115f446b:;
  /* 115f446b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f446d je 0x115f4580 */
  if (C.zf) goto L_115f4580;
  /* 115f4473 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115f4476 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4479 jne 0x115f44dc */
  if (!C.zf) goto L_115f44dc;
  /* 115f447b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f447e jge 0x115f44ab */
  if ((C.sf==C.of)) goto L_115f44ab;
  /* 115f4480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115f4485 mov ecx, edi */
  ECX = (EDI);
  /* 115f4487 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115f4489 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f448c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 115f4490 not ebx */
  EBX = (~(EBX));
  /* 115f4492 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 115f4495 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 115f4499 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 115f449d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 115f449f jne 0x115f44d9 */
  if (!C.zf) goto L_115f44d9;
  /* 115f44a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f44a4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115f44a7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 115f44a9 jmp 0x115f44dc */
  goto L_115f44dc;
L_115f44ab:;
  /* 115f44ab lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115f44ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115f44b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115f44b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f44b8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 115f44bc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 115f44c3 not ebx */
  EBX = (~(EBX));
  /* 115f44c5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115f44c7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 115f44c9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 115f44cc jne 0x115f44d9 */
  if (!C.zf) goto L_115f44d9;
  /* 115f44ce mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f44d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115f44d4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 115f44d7 jmp 0x115f44dc */
  goto L_115f44dc;
L_115f44d9:;
  /* 115f44d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_115f44dc:;
  /* 115f44dc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 115f44df mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 115f44e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f44e6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 115f44e9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115f44ec mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 115f44ef mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 115f44f2 je 0x115f458c */
  if (C.zf) goto L_115f458c;
  /* 115f44f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115f44fb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 115f44ff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 115f4502 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 115f4505 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115f4508 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115f450b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115f450e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115f4511 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115f4514 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4517 jne 0x115f457d */
  if (!C.zf) goto L_115f457d;
  /* 115f4519 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 115f451d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4520 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 115f4523 jge 0x115f454e */
  if ((C.sf==C.of)) goto L_115f454e;
  /* 115f4525 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115f4527 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f452b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 115f452f jne 0x115f453c */
  if (!C.zf) goto L_115f453c;
  /* 115f4531 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115f4536 mov ecx, esi */
  ECX = (ESI);
  /* 115f4538 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115f453a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_115f453c:;
  /* 115f453c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115f4541 mov ecx, esi */
  ECX = (ESI);
  /* 115f4543 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115f4545 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f4548 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115f454c jmp 0x115f457d */
  goto L_115f457d;
L_115f454e:;
  /* 115f454e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115f4550 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f4554 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 115f4558 jne 0x115f4567 */
  if (!C.zf) goto L_115f4567;
  /* 115f455a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 115f455d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115f4562 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115f4564 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_115f4567:;
  /* 115f4567 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f456a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 115f4571 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 115f4574 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 115f4579 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 115f457b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_115f457d:;
  /* 115f457d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_115f4580:;
  /* 115f4580 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115f4582 je 0x115f458f */
  if (C.zf) goto L_115f458f;
  /* 115f4584 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115f4586 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 115f458a jmp 0x115f458f */
  goto L_115f458f;
L_115f458c:;
  /* 115f458c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_115f458f:;
  /* 115f458f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 115f4592 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4594 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 115f4597 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115f4599 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 115f459d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115f45a0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 115f45a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115f45a4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 115f45a7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115f45a9 jne 0x115f45c5 */
  if (!C.zf) goto L_115f45c5;
  /* 115f45ab cmp ebx, dword ptr [0x115f7a84] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x115f7a84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f45b1 jne 0x115f45c5 */
  if (!C.zf) goto L_115f45c5;
  /* 115f45b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f45b6 cmp ecx, dword ptr [0x115f7a7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115f7a7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f45bc jne 0x115f45c5 */
  if (!C.zf) goto L_115f45c5;
  /* 115f45be and dword ptr [0x115f7a84], 0 */
  { uint32_t _r=(r32((uint32_t)(0x115f7a84)))&(0x0u); w32((uint32_t)(0x115f7a84), (_r)); fl_logic(_r,32); }
L_115f45c5:;
  /* 115f45c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f45c8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115f45ca lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_115f45cd:;
  /* 115f45cd pop edi */
  EDI = (pop32());
  /* 115f45ce pop esi */
  ESI = (pop32());
  /* 115f45cf pop ebx */
  EBX = (pop32());
  /* 115f45d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f45d1 ret  */
  ESPCHK(0x115f42c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100045d2 @ 0x115f45d2 (177 bytes, 53 insns) */
void f_115f45d2(void) {
  FTRACE(0x115f45d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f45d2 mov eax, dword ptr [0x115f7a88] */
  EAX = (r32((uint32_t)(0x115f7a88)));
  /* 115f45d7 mov ecx, dword ptr [0x115f7a78] */
  ECX = (r32((uint32_t)(0x115f7a78)));
  /* 115f45dd push esi */
  push32((uint32_t)(ESI));
  /* 115f45de push edi */
  push32((uint32_t)(EDI));
  /* 115f45df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f45e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f45e3 jne 0x115f4615 */
  if (!C.zf) goto L_115f4615;
  /* 115f45e5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 115f45e9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115f45ec push eax */
  push32((uint32_t)(EAX));
  /* 115f45ed push dword ptr [0x115f7a8c] */
  push32((uint32_t)(r32((uint32_t)(0x115f7a8c))));
  /* 115f45f3 push edi */
  push32((uint32_t)(EDI));
  /* 115f45f4 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f45fa call dword ptr [0x115f6028] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6028))), 0x115f4600u);
  /* 115f4600 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4602 je 0x115f4665 */
  if (C.zf) goto L_115f4665;
  /* 115f4604 add dword ptr [0x115f7a78], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x115f7a78))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x115f7a78), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f460b mov dword ptr [0x115f7a8c], eax */
  w32((uint32_t)(0x115f7a8c), (EAX));
  /* 115f4610 mov eax, dword ptr [0x115f7a88] */
  EAX = (r32((uint32_t)(0x115f7a88)));
L_115f4615:;
  /* 115f4615 mov ecx, dword ptr [0x115f7a8c] */
  ECX = (r32((uint32_t)(0x115f7a8c)));
  /* 115f461b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 115f4620 push 8 */
  push32((uint32_t)(0x8u));
  /* 115f4622 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115f4625 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f462b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 115f462e call dword ptr [0x115f603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f603c))), 0x115f4634u);
  /* 115f4634 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4636 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 115f4639 je 0x115f4665 */
  if (C.zf) goto L_115f4665;
  /* 115f463b push 4 */
  push32((uint32_t)(0x4u));
  /* 115f463d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 115f4642 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115f4647 push edi */
  push32((uint32_t)(EDI));
  /* 115f4648 call dword ptr [0x115f602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f602c))), 0x115f464eu);
  /* 115f464e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4650 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 115f4653 jne 0x115f4669 */
  if (!C.zf) goto L_115f4669;
  /* 115f4655 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 115f4658 push edi */
  push32((uint32_t)(EDI));
  /* 115f4659 push dword ptr [0x115f7cc8] */
  push32((uint32_t)(r32((uint32_t)(0x115f7cc8))));
  /* 115f465f call dword ptr [0x115f604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f604c))), 0x115f4665u);
L_115f4665:;
  /* 115f4665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f4667 jmp 0x115f4680 */
  goto L_115f4680;
L_115f4669:;
  /* 115f4669 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 115f466d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115f466f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 115f4672 inc dword ptr [0x115f7a88] */
  { uint32_t _r=(r32((uint32_t)(0x115f7a88)))+1; w32((uint32_t)(0x115f7a88), (_r)); fl_inc(_r,32); }
  /* 115f4678 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 115f467b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115f467e mov eax, esi */
  EAX = (ESI);
L_115f4680:;
  /* 115f4680 pop edi */
  EDI = (pop32());
  /* 115f4681 pop esi */
  ESI = (pop32());
  /* 115f4682 ret  */
  ESPCHK(0x115f45d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004683 @ 0x115f4683 (251 bytes, 85 insns) */
void f_115f4683(void) {
  FTRACE(0x115f4683u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4683 push ebp */
  push32((uint32_t)(EBP));
  /* 115f4684 mov ebp, esp */
  EBP = (ESP);
  /* 115f4686 push ecx */
  push32((uint32_t)(ECX));
  /* 115f4687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f468a push ebx */
  push32((uint32_t)(EBX));
  /* 115f468b push esi */
  push32((uint32_t)(ESI));
  /* 115f468c push edi */
  push32((uint32_t)(EDI));
  /* 115f468d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 115f4690 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 115f4693 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115f4695:;
  /* 115f4695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4697 jl 0x115f469e */
  if ((C.sf!=C.of)) goto L_115f469e;
  /* 115f4699 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115f469b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115f469c jmp 0x115f4695 */
  goto L_115f4695;
L_115f469e:;
  /* 115f469e mov eax, ebx */
  EAX = (EBX);
  /* 115f46a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115f46a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115f46a8 pop edx */
  EDX = (pop32());
  /* 115f46a9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 115f46b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115f46b3:;
  /* 115f46b3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 115f46b6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 115f46b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f46bc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115f46bd jne 0x115f46b3 */
  if (!C.zf) goto L_115f46b3;
  /* 115f46bf mov edi, ebx */
  EDI = (EBX);
  /* 115f46c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 115f46c3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 115f46c6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f46c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115f46ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115f46d3 push edi */
  push32((uint32_t)(EDI));
  /* 115f46d4 call dword ptr [0x115f602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f602c))), 0x115f46dau);
  /* 115f46da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f46dc jne 0x115f46e6 */
  if (!C.zf) goto L_115f46e6;
  /* 115f46de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f46e1 jmp 0x115f4779 */
  goto L_115f4779;
L_115f46e6:;
  /* 115f46e6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 115f46ec cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f46ee ja 0x115f472c */
  if ((!C.cf&&!C.zf)) goto L_115f472c;
  /* 115f46f0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_115f46f3:;
  /* 115f46f3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 115f46f7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 115f46fe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 115f4704 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 115f470b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115f470d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 115f4713 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115f4716 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 115f4720 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4725 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 115f4728 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f472a jbe 0x115f46f3 */
  if ((C.cf||C.zf)) goto L_115f46f3;
L_115f472c:;
  /* 115f472c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115f472f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 115f4732 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4737 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4739 pop edi */
  EDI = (pop32());
  /* 115f473a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115f473d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115f4740 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 115f4743 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 115f4746 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115f4749 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 115f474e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 115f4755 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 115f4758 mov cl, al */
  CL = (AL);
  /* 115f475a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 115f475c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f475e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4761 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 115f4764 jne 0x115f4769 */
  if (!C.zf) goto L_115f4769;
  /* 115f4766 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_115f4769:;
  /* 115f4769 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115f476e mov ecx, ebx */
  ECX = (EBX);
  /* 115f4770 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115f4772 not edx */
  EDX = (~(EDX));
  /* 115f4774 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115f4777 mov eax, ebx */
  EAX = (EBX);
L_115f4779:;
  /* 115f4779 pop edi */
  EDI = (pop32());
  /* 115f477a pop esi */
  ESI = (pop32());
  /* 115f477b pop ebx */
  EBX = (pop32());
  /* 115f477c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f477d ret  */
  ESPCHK(0x115f4683u, _esp0);
  ESP += 4; return;
}

/* FUN_1000477e @ 0x115f477e (137 bytes, 50 insns) */
void f_115f477e(void) {
  FTRACE(0x115f477eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f477e push ebx */
  push32((uint32_t)(EBX));
  /* 115f477f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f4781 cmp dword ptr [0x115f7a3c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x115f7a3c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4787 push esi */
  push32((uint32_t)(ESI));
  /* 115f4788 push edi */
  push32((uint32_t)(EDI));
  /* 115f4789 jne 0x115f47cd */
  if (!C.zf) goto L_115f47cd;
  /* 115f478b push 0x115f6488 */
  push32((uint32_t)(0x115f6488u));
  /* 115f4790 call dword ptr [0x115f601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f601c))), 0x115f4796u);
  /* 115f4796 mov edi, eax */
  EDI = (EAX);
  /* 115f4798 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f479a je 0x115f4803 */
  if (C.zf) goto L_115f4803;
  /* 115f479c mov esi, dword ptr [0x115f6020] */
  ESI = (r32((uint32_t)(0x115f6020)));
  /* 115f47a2 push 0x115f647c */
  push32((uint32_t)(0x115f647cu));
  /* 115f47a7 push edi */
  push32((uint32_t)(EDI));
  /* 115f47a8 call esi */
  call_ind((uint32_t)(ESI), 0x115f47aau);
  /* 115f47aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f47ac mov dword ptr [0x115f7a3c], eax */
  w32((uint32_t)(0x115f7a3c), (EAX));
  /* 115f47b1 je 0x115f4803 */
  if (C.zf) goto L_115f4803;
  /* 115f47b3 push 0x115f646c */
  push32((uint32_t)(0x115f646cu));
  /* 115f47b8 push edi */
  push32((uint32_t)(EDI));
  /* 115f47b9 call esi */
  call_ind((uint32_t)(ESI), 0x115f47bbu);
  /* 115f47bb push 0x115f6458 */
  push32((uint32_t)(0x115f6458u));
  /* 115f47c0 push edi */
  push32((uint32_t)(EDI));
  /* 115f47c1 mov dword ptr [0x115f7a40], eax */
  w32((uint32_t)(0x115f7a40), (EAX));
  /* 115f47c6 call esi */
  call_ind((uint32_t)(ESI), 0x115f47c8u);
  /* 115f47c8 mov dword ptr [0x115f7a44], eax */
  w32((uint32_t)(0x115f7a44), (EAX));
L_115f47cd:;
  /* 115f47cd mov eax, dword ptr [0x115f7a40] */
  EAX = (r32((uint32_t)(0x115f7a40)));
  /* 115f47d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f47d4 je 0x115f47ec */
  if (C.zf) goto L_115f47ec;
  /* 115f47d6 call eax */
  call_ind((uint32_t)(EAX), 0x115f47d8u);
  /* 115f47d8 mov ebx, eax */
  EBX = (EAX);
  /* 115f47da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115f47dc je 0x115f47ec */
  if (C.zf) goto L_115f47ec;
  /* 115f47de mov eax, dword ptr [0x115f7a44] */
  EAX = (r32((uint32_t)(0x115f7a44)));
  /* 115f47e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f47e5 je 0x115f47ec */
  if (C.zf) goto L_115f47ec;
  /* 115f47e7 push ebx */
  push32((uint32_t)(EBX));
  /* 115f47e8 call eax */
  call_ind((uint32_t)(EAX), 0x115f47eau);
  /* 115f47ea mov ebx, eax */
  EBX = (EAX);
L_115f47ec:;
  /* 115f47ec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 115f47f0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 115f47f4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 115f47f8 push ebx */
  push32((uint32_t)(EBX));
  /* 115f47f9 call dword ptr [0x115f7a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f7a3c))), 0x115f47ffu);
L_115f47ff:;
  /* 115f47ff pop edi */
  EDI = (pop32());
  /* 115f4800 pop esi */
  ESI = (pop32());
  /* 115f4801 pop ebx */
  EBX = (pop32());
  /* 115f4802 ret  */
  ESPCHK(0x115f477eu, _esp0);
  ESP += 4; return;
L_115f4803:;
  /* 115f4803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f4805 jmp 0x115f47ff */
  goto L_115f47ff;
}

/* _strncpy @ 0x115f4810 (254 bytes, 109 insns) */
void f_115f4810(void) {
  FTRACE(0x115f4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4810 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115f4814 push edi */
  push32((uint32_t)(EDI));
  /* 115f4815 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115f4817 je 0x115f4893 */
  if (C.zf) goto L_115f4893;
  /* 115f4819 push esi */
  push32((uint32_t)(ESI));
  /* 115f481a push ebx */
  push32((uint32_t)(EBX));
  /* 115f481b mov ebx, ecx */
  EBX = (ECX);
  /* 115f481d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 115f4821 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 115f4827 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 115f482b jne 0x115f4834 */
  if (!C.zf) goto L_115f4834;
  /* 115f482d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4830 jne 0x115f48a1 */
  if (!C.zf) goto L_115f48a1;
  /* 115f4832 jmp 0x115f4855 */
  goto L_115f4855;
L_115f4834:;
  /* 115f4834 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4836 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f4837 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4839 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f483a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f483b je 0x115f4862 */
  if (C.zf) goto L_115f4862;
  /* 115f483d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f483f je 0x115f486a */
  if (C.zf) goto L_115f486a;
  /* 115f4841 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 115f4847 jne 0x115f4834 */
  if (!C.zf) goto L_115f4834;
  /* 115f4849 mov ebx, ecx */
  EBX = (ECX);
  /* 115f484b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f484e jne 0x115f48a1 */
  if (!C.zf) goto L_115f48a1;
L_115f4850:;
  /* 115f4850 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115f4853 je 0x115f4862 */
  if (C.zf) goto L_115f4862;
L_115f4855:;
  /* 115f4855 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4857 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f4858 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f485a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f485b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115f485d je 0x115f488e */
  if (C.zf) goto L_115f488e;
  /* 115f485f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115f4860 jne 0x115f4855 */
  if (!C.zf) goto L_115f4855;
L_115f4862:;
  /* 115f4862 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115f4866 pop ebx */
  EBX = (pop32());
  /* 115f4867 pop esi */
  ESI = (pop32());
  /* 115f4868 pop edi */
  EDI = (pop32());
  /* 115f4869 ret  */
  ESPCHK(0x115f4810u, _esp0);
  ESP += 4; return;
L_115f486a:;
  /* 115f486a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115f4870 je 0x115f4884 */
  if (C.zf) goto L_115f4884;
L_115f4872:;
  /* 115f4872 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4874 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f4875 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f4876 je 0x115f4906 */
  if (C.zf) goto L_115f4906;
  /* 115f487c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115f4882 jne 0x115f4872 */
  if (!C.zf) goto L_115f4872;
L_115f4884:;
  /* 115f4884 mov ebx, ecx */
  EBX = (ECX);
  /* 115f4886 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4889 jne 0x115f48f7 */
  if (!C.zf) goto L_115f48f7;
L_115f488b:;
  /* 115f488b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f488d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_115f488e:;
  /* 115f488e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115f488f jne 0x115f488b */
  if (!C.zf) goto L_115f488b;
  /* 115f4891 pop ebx */
  EBX = (pop32());
  /* 115f4892 pop esi */
  ESI = (pop32());
L_115f4893:;
  /* 115f4893 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f4897 pop edi */
  EDI = (pop32());
  /* 115f4898 ret  */
  ESPCHK(0x115f4810u, _esp0);
  ESP += 4; return;
L_115f4899:;
  /* 115f4899 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115f489b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f489e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f489f je 0x115f4850 */
  if (C.zf) goto L_115f4850;
L_115f48a1:;
  /* 115f48a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115f48a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115f48a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f48aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115f48ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115f48af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 115f48b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f48b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115f48b9 je 0x115f4899 */
  if (C.zf) goto L_115f4899;
  /* 115f48bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115f48bd je 0x115f48eb */
  if (C.zf) goto L_115f48eb;
  /* 115f48bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 115f48c1 je 0x115f48e1 */
  if (C.zf) goto L_115f48e1;
  /* 115f48c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 115f48c9 je 0x115f48d7 */
  if (C.zf) goto L_115f48d7;
  /* 115f48cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 115f48d1 jne 0x115f4899 */
  if (!C.zf) goto L_115f4899;
  /* 115f48d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115f48d5 jmp 0x115f48ef */
  goto L_115f48ef;
L_115f48d7:;
  /* 115f48d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115f48dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115f48df jmp 0x115f48ef */
  goto L_115f48ef;
L_115f48e1:;
  /* 115f48e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115f48e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115f48e9 jmp 0x115f48ef */
  goto L_115f48ef;
L_115f48eb:;
  /* 115f48eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115f48ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_115f48ef:;
  /* 115f48ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f48f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f48f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f48f5 je 0x115f4901 */
  if (C.zf) goto L_115f4901;
L_115f48f7:;
  /* 115f48f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115f48f9:;
  /* 115f48f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 115f48fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f48fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f48ff jne 0x115f48f9 */
  if (!C.zf) goto L_115f48f9;
L_115f4901:;
  /* 115f4901 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115f4904 jne 0x115f488b */
  if (!C.zf) goto L_115f488b;
L_115f4906:;
  /* 115f4906 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115f490a pop ebx */
  EBX = (pop32());
  /* 115f490b pop esi */
  ESI = (pop32());
  /* 115f490c pop edi */
  EDI = (pop32());
  /* 115f490d ret  */
  ESPCHK(0x115f4810u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x115f4910 (88 bytes, 40 insns) */
void f_115f4910(void) {
  FTRACE(0x115f4910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4910 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 115f4914 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f4918 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115f491a je 0x115f4963 */
  if (C.zf) goto L_115f4963;
  /* 115f491c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f491e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 115f4922 push edi */
  push32((uint32_t)(EDI));
  /* 115f4923 mov edi, ecx */
  EDI = (ECX);
  /* 115f4925 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4928 jb 0x115f4957 */
  if (C.cf) goto L_115f4957;
  /* 115f492a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115f492c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 115f492f je 0x115f4939 */
  if (C.zf) goto L_115f4939;
  /* 115f4931 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_115f4933:;
  /* 115f4933 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4935 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f4936 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f4937 jne 0x115f4933 */
  if (!C.zf) goto L_115f4933;
L_115f4939:;
  /* 115f4939 mov ecx, eax */
  ECX = (EAX);
  /* 115f493b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115f493e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4940 mov ecx, eax */
  ECX = (EAX);
  /* 115f4942 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115f4945 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4947 mov ecx, edx */
  ECX = (EDX);
  /* 115f4949 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115f494c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f494f je 0x115f4957 */
  if (C.zf) goto L_115f4957;
  /* 115f4951 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115f4953 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115f4955 je 0x115f495d */
  if (C.zf) goto L_115f495d;
L_115f4957:;
  /* 115f4957 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4959 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f495a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115f495b jne 0x115f4957 */
  if (!C.zf) goto L_115f4957;
L_115f495d:;
  /* 115f495d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f4961 pop edi */
  EDI = (pop32());
  /* 115f4962 ret  */
  ESPCHK(0x115f4910u, _esp0);
  ESP += 4; return;
L_115f4963:;
  /* 115f4963 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f4967 ret  */
  ESPCHK(0x115f4910u, _esp0);
  ESP += 4; return;
}

/* FUN_10004968 @ 0x115f4968 (27 bytes, 13 insns) */
void f_115f4968(void) {
  FTRACE(0x115f4968u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4968 mov eax, dword ptr [0x115f7a48] */
  EAX = (r32((uint32_t)(0x115f7a48)));
  /* 115f496d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f496f je 0x115f4980 */
  if (C.zf) goto L_115f4980;
  /* 115f4971 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 115f4975 call eax */
  call_ind((uint32_t)(EAX), 0x115f4977u);
  /* 115f4977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4979 pop ecx */
  ECX = (pop32());
  /* 115f497a je 0x115f4980 */
  if (C.zf) goto L_115f4980;
  /* 115f497c push 1 */
  push32((uint32_t)(0x1u));
  /* 115f497e pop eax */
  EAX = (pop32());
  /* 115f497f ret  */
  ESPCHK(0x115f4968u, _esp0);
  ESP += 4; return;
L_115f4980:;
  /* 115f4980 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115f4982 ret  */
  ESPCHK(0x115f4968u, _esp0);
  ESP += 4; return;
}

/* FUN_10004983 @ 0x115f4983 (511 bytes, 193 insns) */
void f_115f4983(void) {
  FTRACE(0x115f4983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4983 push ebp */
  push32((uint32_t)(EBP));
  /* 115f4984 mov ebp, esp */
  EBP = (ESP);
  /* 115f4986 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115f4988 push 0x115f64a0 */
  push32((uint32_t)(0x115f64a0u));
  /* 115f498d push 0x115f5150 */
  push32((uint32_t)(0x115f5150u));
  /* 115f4992 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115f4998 push eax */
  push32((uint32_t)(EAX));
  /* 115f4999 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115f49a0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f49a3 push ebx */
  push32((uint32_t)(EBX));
  /* 115f49a4 push esi */
  push32((uint32_t)(ESI));
  /* 115f49a5 push edi */
  push32((uint32_t)(EDI));
  /* 115f49a6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115f49a9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f49ab cmp dword ptr [0x115f7a70], edi */
  { uint32_t _a=(r32((uint32_t)(0x115f7a70))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f49b1 jne 0x115f49f9 */
  if (!C.zf) goto L_115f49f9;
  /* 115f49b3 push edi */
  push32((uint32_t)(EDI));
  /* 115f49b4 push edi */
  push32((uint32_t)(EDI));
  /* 115f49b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f49b7 pop ebx */
  EBX = (pop32());
  /* 115f49b8 push ebx */
  push32((uint32_t)(EBX));
  /* 115f49b9 push 0x115f6498 */
  push32((uint32_t)(0x115f6498u));
  /* 115f49be mov esi, 0x100 */
  ESI = (0x100u);
  /* 115f49c3 push esi */
  push32((uint32_t)(ESI));
  /* 115f49c4 push edi */
  push32((uint32_t)(EDI));
  /* 115f49c5 call dword ptr [0x115f6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6010))), 0x115f49cbu);
  /* 115f49cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f49cd je 0x115f49d7 */
  if (C.zf) goto L_115f49d7;
  /* 115f49cf mov dword ptr [0x115f7a70], ebx */
  w32((uint32_t)(0x115f7a70), (EBX));
  /* 115f49d5 jmp 0x115f49f9 */
  goto L_115f49f9;
L_115f49d7:;
  /* 115f49d7 push edi */
  push32((uint32_t)(EDI));
  /* 115f49d8 push edi */
  push32((uint32_t)(EDI));
  /* 115f49d9 push ebx */
  push32((uint32_t)(EBX));
  /* 115f49da push 0x115f6494 */
  push32((uint32_t)(0x115f6494u));
  /* 115f49df push esi */
  push32((uint32_t)(ESI));
  /* 115f49e0 push edi */
  push32((uint32_t)(EDI));
  /* 115f49e1 call dword ptr [0x115f6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6014))), 0x115f49e7u);
  /* 115f49e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f49e9 je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f49ef mov dword ptr [0x115f7a70], 2 */
  w32((uint32_t)(0x115f7a70), (0x2u));
L_115f49f9:;
  /* 115f49f9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f49fc jle 0x115f4a0e */
  if ((C.zf||C.sf!=C.of)) goto L_115f4a0e;
  /* 115f49fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f4a01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4a04 call 0x115f4ba7 */
  push32(0x115f4a09u); f_115f4ba7();
  /* 115f4a09 pop ecx */
  ECX = (pop32());
  /* 115f4a0a pop ecx */
  ECX = (pop32());
  /* 115f4a0b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_115f4a0e:;
  /* 115f4a0e mov eax, dword ptr [0x115f7a70] */
  EAX = (r32((uint32_t)(0x115f7a70)));
  /* 115f4a13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4a16 jne 0x115f4a35 */
  if (!C.zf) goto L_115f4a35;
  /* 115f4a18 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 115f4a1b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115f4a1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f4a21 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4a24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4a27 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f4a2a call dword ptr [0x115f6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6014))), 0x115f4a30u);
  /* 115f4a30 jmp 0x115f4b13 */
  goto L_115f4b13;
L_115f4a35:;
  /* 115f4a35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4a38 jne 0x115f4b11 */
  if (!C.zf) goto L_115f4b11;
  /* 115f4a3e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4a41 jne 0x115f4a4b */
  if (!C.zf) goto L_115f4a4b;
  /* 115f4a43 mov eax, dword ptr [0x115f7a68] */
  EAX = (r32((uint32_t)(0x115f7a68)));
  /* 115f4a48 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_115f4a4b:;
  /* 115f4a4b push edi */
  push32((uint32_t)(EDI));
  /* 115f4a4c push edi */
  push32((uint32_t)(EDI));
  /* 115f4a4d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f4a50 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4a53 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 115f4a56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115f4a58 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4a5a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115f4a5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f4a5e push eax */
  push32((uint32_t)(EAX));
  /* 115f4a5f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 115f4a62 call dword ptr [0x115f6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6024))), 0x115f4a68u);
  /* 115f4a68 mov ebx, eax */
  EBX = (EAX);
  /* 115f4a6a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 115f4a6d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4a6f je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f4a75 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115f4a78 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 115f4a7b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4a7e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115f4a80 call 0x115f5230 */
  push32(0x115f4a85u); f_115f5230();
  /* 115f4a85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115f4a88 mov eax, esp */
  EAX = (ESP);
  /* 115f4a8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115f4a8d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f4a91 jmp 0x115f4aa6 */
  goto L_115f4aa6;
  /* 115f4a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4a95 pop eax */
  EAX = (pop32());
  /* 115f4a96 ret  */
  ESPCHK(0x115f4983u, _esp0);
  ESP += 4; return;
  /* 115f4a97 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115f4a9a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f4a9c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 115f4a9f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f4aa3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_115f4aa6:;
  /* 115f4aa6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4aa9 je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f4aab push ebx */
  push32((uint32_t)(EBX));
  /* 115f4aac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115f4aaf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f4ab2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4ab7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 115f4aba call dword ptr [0x115f6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6024))), 0x115f4ac0u);
  /* 115f4ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4ac2 je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f4ac4 push edi */
  push32((uint32_t)(EDI));
  /* 115f4ac5 push edi */
  push32((uint32_t)(EDI));
  /* 115f4ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 115f4ac7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115f4aca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4acd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f4ad0 call dword ptr [0x115f6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6010))), 0x115f4ad6u);
  /* 115f4ad6 mov esi, eax */
  ESI = (EAX);
  /* 115f4ad8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 115f4adb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4add je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f4adf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 115f4ae3 je 0x115f4b25 */
  if (C.zf) goto L_115f4b25;
  /* 115f4ae5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4ae8 je 0x115f4ba0 */
  if (C.zf) goto L_115f4ba0;
  /* 115f4aee cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4af1 jg 0x115f4b11 */
  if ((!C.zf&&C.sf==C.of)) goto L_115f4b11;
  /* 115f4af3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 115f4af6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115f4af9 push ebx */
  push32((uint32_t)(EBX));
  /* 115f4afa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115f4afd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4b00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f4b03 call dword ptr [0x115f6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6010))), 0x115f4b09u);
  /* 115f4b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4b0b jne 0x115f4ba0 */
  if (!C.zf) goto L_115f4ba0;
L_115f4b11:;
  /* 115f4b11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115f4b13:;
  /* 115f4b13 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 115f4b16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115f4b19 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115f4b20 pop edi */
  EDI = (pop32());
  /* 115f4b21 pop esi */
  ESI = (pop32());
  /* 115f4b22 pop ebx */
  EBX = (pop32());
  /* 115f4b23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f4b24 ret  */
  ESPCHK(0x115f4983u, _esp0);
  ESP += 4; return;
L_115f4b25:;
  /* 115f4b25 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115f4b2c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 115f4b2f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4b32 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115f4b34 call 0x115f5230 */
  push32(0x115f4b39u); f_115f5230();
  /* 115f4b39 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115f4b3c mov ebx, esp */
  EBX = (ESP);
  /* 115f4b3e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 115f4b41 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f4b45 jmp 0x115f4b59 */
  goto L_115f4b59;
  /* 115f4b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4b49 pop eax */
  EAX = (pop32());
  /* 115f4b4a ret  */
  ESPCHK(0x115f4983u, _esp0);
  ESP += 4; return;
  /* 115f4b4b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115f4b4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115f4b50 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f4b52 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f4b56 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_115f4b59:;
  /* 115f4b59 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4b5b je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f4b5d push esi */
  push32((uint32_t)(ESI));
  /* 115f4b5e push ebx */
  push32((uint32_t)(EBX));
  /* 115f4b5f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 115f4b62 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 115f4b65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4b68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f4b6b call dword ptr [0x115f6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6010))), 0x115f4b71u);
  /* 115f4b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4b73 je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
  /* 115f4b75 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4b78 push edi */
  push32((uint32_t)(EDI));
  /* 115f4b79 push edi */
  push32((uint32_t)(EDI));
  /* 115f4b7a jne 0x115f4b80 */
  if (!C.zf) goto L_115f4b80;
  /* 115f4b7c push edi */
  push32((uint32_t)(EDI));
  /* 115f4b7d push edi */
  push32((uint32_t)(EDI));
  /* 115f4b7e jmp 0x115f4b86 */
  goto L_115f4b86;
L_115f4b80:;
  /* 115f4b80 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 115f4b83 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_115f4b86:;
  /* 115f4b86 push esi */
  push32((uint32_t)(ESI));
  /* 115f4b87 push ebx */
  push32((uint32_t)(EBX));
  /* 115f4b88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115f4b8d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 115f4b90 call dword ptr [0x115f6064] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6064))), 0x115f4b96u);
  /* 115f4b96 mov esi, eax */
  ESI = (EAX);
  /* 115f4b98 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4b9a je 0x115f4b11 */
  if (C.zf) goto L_115f4b11;
L_115f4ba0:;
  /* 115f4ba0 mov eax, esi */
  EAX = (ESI);
  /* 115f4ba2 jmp 0x115f4b13 */
  goto L_115f4b13;
}

/* FUN_10004ba7 @ 0x115f4ba7 (43 bytes, 20 insns) */
void f_115f4ba7(void) {
  FTRACE(0x115f4ba7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4ba7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f4bab mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115f4baf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115f4bb1 push esi */
  push32((uint32_t)(ESI));
  /* 115f4bb2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 115f4bb5 je 0x115f4bc4 */
  if (C.zf) goto L_115f4bc4;
L_115f4bb7:;
  /* 115f4bb7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f4bba je 0x115f4bc4 */
  if (C.zf) goto L_115f4bc4;
  /* 115f4bbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f4bbd mov esi, ecx */
  ESI = (ECX);
  /* 115f4bbf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115f4bc0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115f4bc2 jne 0x115f4bb7 */
  if (!C.zf) goto L_115f4bb7;
L_115f4bc4:;
  /* 115f4bc4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115f4bc7 pop esi */
  ESI = (pop32());
  /* 115f4bc8 jne 0x115f4bcf */
  if (!C.zf) goto L_115f4bcf;
  /* 115f4bca sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4bce ret  */
  ESPCHK(0x115f4ba7u, _esp0);
  ESP += 4; return;
L_115f4bcf:;
  /* 115f4bcf mov eax, edx */
  EAX = (EDX);
  /* 115f4bd1 ret  */
  ESPCHK(0x115f4ba7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd2 @ 0x115f4bd2 (318 bytes, 123 insns) */
void f_115f4bd2(void) {
  FTRACE(0x115f4bd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4bd2 push ebp */
  push32((uint32_t)(EBP));
  /* 115f4bd3 mov ebp, esp */
  EBP = (ESP);
  /* 115f4bd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115f4bd7 push 0x115f64b8 */
  push32((uint32_t)(0x115f64b8u));
  /* 115f4bdc push 0x115f5150 */
  push32((uint32_t)(0x115f5150u));
  /* 115f4be1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115f4be7 push eax */
  push32((uint32_t)(EAX));
  /* 115f4be8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115f4bef sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4bf2 push ebx */
  push32((uint32_t)(EBX));
  /* 115f4bf3 push esi */
  push32((uint32_t)(ESI));
  /* 115f4bf4 push edi */
  push32((uint32_t)(EDI));
  /* 115f4bf5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115f4bf8 mov eax, dword ptr [0x115f7a74] */
  EAX = (r32((uint32_t)(0x115f7a74)));
  /* 115f4bfd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f4bff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4c01 jne 0x115f4c41 */
  if (!C.zf) goto L_115f4c41;
  /* 115f4c03 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115f4c06 push eax */
  push32((uint32_t)(EAX));
  /* 115f4c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4c09 pop esi */
  ESI = (pop32());
  /* 115f4c0a push esi */
  push32((uint32_t)(ESI));
  /* 115f4c0b push 0x115f6498 */
  push32((uint32_t)(0x115f6498u));
  /* 115f4c10 push esi */
  push32((uint32_t)(ESI));
  /* 115f4c11 call dword ptr [0x115f600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f600c))), 0x115f4c17u);
  /* 115f4c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4c19 je 0x115f4c1f */
  if (C.zf) goto L_115f4c1f;
  /* 115f4c1b mov eax, esi */
  EAX = (ESI);
  /* 115f4c1d jmp 0x115f4c3c */
  goto L_115f4c3c;
L_115f4c1f:;
  /* 115f4c1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115f4c22 push eax */
  push32((uint32_t)(EAX));
  /* 115f4c23 push esi */
  push32((uint32_t)(ESI));
  /* 115f4c24 push 0x115f6494 */
  push32((uint32_t)(0x115f6494u));
  /* 115f4c29 push esi */
  push32((uint32_t)(ESI));
  /* 115f4c2a push ebx */
  push32((uint32_t)(EBX));
  /* 115f4c2b call dword ptr [0x115f6018] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6018))), 0x115f4c31u);
  /* 115f4c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115f4c33 je 0x115f4d07 */
  if (C.zf) goto L_115f4d07;
  /* 115f4c39 push 2 */
  push32((uint32_t)(0x2u));
  /* 115f4c3b pop eax */
  EAX = (pop32());
L_115f4c3c:;
  /* 115f4c3c mov dword ptr [0x115f7a74], eax */
  w32((uint32_t)(0x115f7a74), (EAX));
L_115f4c41:;
  /* 115f4c41 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4c44 jne 0x115f4c6a */
  if (!C.zf) goto L_115f4c6a;
  /* 115f4c46 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115f4c49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4c4b jne 0x115f4c52 */
  if (!C.zf) goto L_115f4c52;
  /* 115f4c4d mov eax, dword ptr [0x115f7a58] */
  EAX = (r32((uint32_t)(0x115f7a58)));
L_115f4c52:;
  /* 115f4c52 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f4c55 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4c58 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4c5b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f4c5e push eax */
  push32((uint32_t)(EAX));
  /* 115f4c5f call dword ptr [0x115f6018] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6018))), 0x115f4c65u);
  /* 115f4c65 jmp 0x115f4d09 */
  goto L_115f4d09;
L_115f4c6a:;
  /* 115f4c6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4c6d jne 0x115f4d07 */
  if (!C.zf) goto L_115f4d07;
  /* 115f4c73 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4c76 jne 0x115f4c80 */
  if (!C.zf) goto L_115f4c80;
  /* 115f4c78 mov eax, dword ptr [0x115f7a68] */
  EAX = (r32((uint32_t)(0x115f7a68)));
  /* 115f4c7d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_115f4c80:;
  /* 115f4c80 push ebx */
  push32((uint32_t)(EBX));
  /* 115f4c81 push ebx */
  push32((uint32_t)(EBX));
  /* 115f4c82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4c85 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4c88 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115f4c8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115f4c8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4c8f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115f4c92 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115f4c93 push eax */
  push32((uint32_t)(EAX));
  /* 115f4c94 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115f4c97 call dword ptr [0x115f6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6024))), 0x115f4c9du);
  /* 115f4c9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115f4ca0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4ca2 je 0x115f4d07 */
  if (C.zf) goto L_115f4d07;
  /* 115f4ca4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 115f4ca7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 115f4caa mov eax, edi */
  EAX = (EDI);
  /* 115f4cac add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4caf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115f4cb1 call 0x115f5230 */
  push32(0x115f4cb6u); f_115f5230();
  /* 115f4cb6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115f4cb9 mov esi, esp */
  ESI = (ESP);
  /* 115f4cbb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 115f4cbe push edi */
  push32((uint32_t)(EDI));
  /* 115f4cbf push ebx */
  push32((uint32_t)(EBX));
  /* 115f4cc0 push esi */
  push32((uint32_t)(ESI));
  /* 115f4cc1 call 0x115f4910 */
  push32(0x115f4cc6u); f_115f4910();
  /* 115f4cc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4cc9 jmp 0x115f4cd6 */
  goto L_115f4cd6;
  /* 115f4ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4ccd pop eax */
  EAX = (pop32());
  /* 115f4cce ret  */
  ESPCHK(0x115f4bd2u, _esp0);
  ESP += 4; return;
  /* 115f4ccf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115f4cd2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115f4cd4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_115f4cd6:;
  /* 115f4cd6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 115f4cda cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4cdc je 0x115f4d07 */
  if (C.zf) goto L_115f4d07;
  /* 115f4cde push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 115f4ce1 push esi */
  push32((uint32_t)(ESI));
  /* 115f4ce2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 115f4ce5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 115f4ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115f4cea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 115f4ced call dword ptr [0x115f6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f6024))), 0x115f4cf3u);
  /* 115f4cf3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4cf5 je 0x115f4d07 */
  if (C.zf) goto L_115f4d07;
  /* 115f4cf7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 115f4cfa push eax */
  push32((uint32_t)(EAX));
  /* 115f4cfb push esi */
  push32((uint32_t)(ESI));
  /* 115f4cfc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f4cff call dword ptr [0x115f600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115f600c))), 0x115f4d05u);
  /* 115f4d05 jmp 0x115f4d09 */
  goto L_115f4d09;
L_115f4d07:;
  /* 115f4d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115f4d09:;
  /* 115f4d09 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 115f4d0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115f4d0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115f4d16 pop edi */
  EDI = (pop32());
  /* 115f4d17 pop esi */
  ESI = (pop32());
  /* 115f4d18 pop ebx */
  EBX = (pop32());
  /* 115f4d19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f4d1a ret  */
  ESPCHK(0x115f4bd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x115f4d20 (664 bytes, 267 insns) [15 switch table(s)] */
void f_115f4d20(void) {
  FTRACE(0x115f4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 115f4d21 mov ebp, esp */
  EBP = (ESP);
  /* 115f4d23 push edi */
  push32((uint32_t)(EDI));
  /* 115f4d24 push esi */
  push32((uint32_t)(ESI));
  /* 115f4d25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115f4d28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115f4d2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4d2e mov eax, ecx */
  EAX = (ECX);
  /* 115f4d30 mov edx, ecx */
  EDX = (ECX);
  /* 115f4d32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4d34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4d36 jbe 0x115f4d40 */
  if ((C.cf||C.zf)) goto L_115f4d40;
  /* 115f4d38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4d3a jb 0x115f4eb8 */
  if (C.cf) goto L_115f4eb8;
L_115f4d40:;
  /* 115f4d40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115f4d46 jne 0x115f4d5c */
  if (!C.zf) goto L_115f4d5c;
  /* 115f4d48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4d4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115f4d4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4d51 jb 0x115f4d7c */
  if (C.cf) goto L_115f4d7c;
  /* 115f4d53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4d55 jmp dword ptr [edx*4 + 0x115f4e68] */
  switch (EDX) {
    case 0: goto L_115f4e78;
    case 1: goto L_115f4e80;
    case 2: goto L_115f4e8c;
    case 3: goto L_115f4ea0;
    default: x86_unimpl("switch@0x115f4d55 out of table"); return;
  }
L_115f4d5c:;
  /* 115f4d5c mov eax, edi */
  EAX = (EDI);
  /* 115f4d5e mov edx, 3 */
  EDX = (0x3u);
  /* 115f4d63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4d66 jb 0x115f4d74 */
  if (C.cf) goto L_115f4d74;
  /* 115f4d68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115f4d6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4d6d jmp dword ptr [eax*4 + 0x115f4d80] */
  switch (EAX) {
    case 1: goto L_115f4d90;
    case 2: goto L_115f4dbc;
    case 3: goto L_115f4de0;
    default: x86_unimpl("switch@0x115f4d6d out of table"); return;
  }
L_115f4d74:;
  /* 115f4d74 jmp dword ptr [ecx*4 + 0x115f4e78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115f4e78)))); return;
  /* 115f4d7b nop  */
  /* nop */
L_115f4d7c:;
  /* 115f4d7c jmp dword ptr [ecx*4 + 0x115f4dfc] */
  switch (ECX) {
    case 0: goto L_115f4e5f;
    case 1: goto L_115f4e4c;
    case 2: goto L_115f4e44;
    case 3: goto L_115f4e3c;
    case 4: goto L_115f4e34;
    case 5: goto L_115f4e2c;
    case 6: goto L_115f4e24;
    case 7: goto L_115f4e1c;
    default: x86_unimpl("switch@0x115f4d7c out of table"); return;
  }
  /* 115f4d83 nop  */
  /* nop */
L_115f4d90:;
  /* 115f4d90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f4d92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4d94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4d96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f4d99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f4d9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f4d9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4da2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f4da5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4da8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4dab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4dae jb 0x115f4d7c */
  if (C.cf) goto L_115f4d7c;
  /* 115f4db0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4db2 jmp dword ptr [edx*4 + 0x115f4e68] */
  switch (EDX) {
    case 0: goto L_115f4e78;
    case 1: goto L_115f4e80;
    case 2: goto L_115f4e8c;
    case 3: goto L_115f4ea0;
    default: x86_unimpl("switch@0x115f4db2 out of table"); return;
  }
  /* 115f4db9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f4dbc:;
  /* 115f4dbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f4dbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4dc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4dc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f4dc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4dc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f4dcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4dce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4dd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4dd4 jb 0x115f4d7c */
  if (C.cf) goto L_115f4d7c;
  /* 115f4dd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4dd8 jmp dword ptr [edx*4 + 0x115f4e68] */
  switch (EDX) {
    case 0: goto L_115f4e78;
    case 1: goto L_115f4e80;
    case 2: goto L_115f4e8c;
    case 3: goto L_115f4ea0;
    default: x86_unimpl("switch@0x115f4dd8 out of table"); return;
  }
  /* 115f4ddf nop  */
  /* nop */
L_115f4de0:;
  /* 115f4de0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f4de2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4de4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115f4de7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4dea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115f4deb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4dee jb 0x115f4d7c */
  if (C.cf) goto L_115f4d7c;
  /* 115f4df0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4df2 jmp dword ptr [edx*4 + 0x115f4e68] */
  switch (EDX) {
    case 0: goto L_115f4e78;
    case 1: goto L_115f4e80;
    case 2: goto L_115f4e8c;
    case 3: goto L_115f4ea0;
    default: x86_unimpl("switch@0x115f4df2 out of table"); return;
  }
  /* 115f4df9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f4e1c:;
  /* 115f4e1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 115f4e20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_115f4e24:;
  /* 115f4e24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 115f4e28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_115f4e2c:;
  /* 115f4e2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 115f4e30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_115f4e34:;
  /* 115f4e34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 115f4e38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_115f4e3c:;
  /* 115f4e3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 115f4e40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_115f4e44:;
  /* 115f4e44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 115f4e48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_115f4e4c:;
  /* 115f4e4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 115f4e50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 115f4e54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115f4e5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4e5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115f4e5f:;
  /* 115f4e5f jmp dword ptr [edx*4 + 0x115f4e68] */
  switch (EDX) {
    case 0: goto L_115f4e78;
    case 1: goto L_115f4e80;
    case 2: goto L_115f4e8c;
    case 3: goto L_115f4ea0;
    default: x86_unimpl("switch@0x115f4e5f out of table"); return;
  }
  /* 115f4e66 mov edi, edi */
  EDI = (EDI);
L_115f4e78:;
  /* 115f4e78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4e7b pop esi */
  ESI = (pop32());
  /* 115f4e7c pop edi */
  EDI = (pop32());
  /* 115f4e7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f4e7e ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f4e7f nop  */
  /* nop */
L_115f4e80:;
  /* 115f4e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4e87 pop esi */
  ESI = (pop32());
  /* 115f4e88 pop edi */
  EDI = (pop32());
  /* 115f4e89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f4e8a ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f4e8b nop  */
  /* nop */
L_115f4e8c:;
  /* 115f4e8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4e8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4e90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f4e93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f4e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4e99 pop esi */
  ESI = (pop32());
  /* 115f4e9a pop edi */
  EDI = (pop32());
  /* 115f4e9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f4e9c ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f4e9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f4ea0:;
  /* 115f4ea0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115f4ea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115f4ea4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f4ea7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f4eaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f4ead mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f4eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f4eb3 pop esi */
  ESI = (pop32());
  /* 115f4eb4 pop edi */
  EDI = (pop32());
  /* 115f4eb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f4eb6 ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f4eb7 nop  */
  /* nop */
L_115f4eb8:;
  /* 115f4eb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115f4ebc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115f4ec0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115f4ec6 jne 0x115f4eec */
  if (!C.zf) goto L_115f4eec;
  /* 115f4ec8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4ecb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115f4ece cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4ed1 jb 0x115f4ee0 */
  if (C.cf) goto L_115f4ee0;
  /* 115f4ed3 std  */
  C.df=1;
  /* 115f4ed4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4ed6 cld  */
  C.df=0;
  /* 115f4ed7 jmp dword ptr [edx*4 + 0x115f5000] */
  switch (EDX) {
    case 0: goto L_115f5010;
    case 1: goto L_115f5018;
    case 2: goto L_115f5028;
    case 3: goto L_115f503c;
    default: x86_unimpl("switch@0x115f4ed7 out of table"); return;
  }
  /* 115f4ede mov edi, edi */
  EDI = (EDI);
L_115f4ee0:;
  /* 115f4ee0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115f4ee2 jmp dword ptr [ecx*4 + 0x115f4fb0] */
  switch (ECX) {
    case 0: goto L_115f4ff7;
    default: x86_unimpl("switch@0x115f4ee2 out of table"); return;
  }
  /* 115f4ee9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f4eec:;
  /* 115f4eec mov eax, edi */
  EAX = (EDI);
  /* 115f4eee mov edx, 3 */
  EDX = (0x3u);
  /* 115f4ef3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4ef6 jb 0x115f4f04 */
  if (C.cf) goto L_115f4f04;
  /* 115f4ef8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115f4efb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4efd jmp dword ptr [eax*4 + 0x115f4f08] */
  switch (EAX) {
    case 1: goto L_115f4f18;
    case 2: goto L_115f4f38;
    case 3: goto L_115f4f60;
    default: x86_unimpl("switch@0x115f4efd out of table"); return;
  }
L_115f4f04:;
  /* 115f4f04 jmp dword ptr [ecx*4 + 0x115f5000] */
  switch (ECX) {
    case 0: goto L_115f5010;
    case 1: goto L_115f5018;
    case 2: goto L_115f5028;
    case 3: goto L_115f503c;
    default: x86_unimpl("switch@0x115f4f04 out of table"); return;
  }
  /* 115f4f0b nop  */
  /* nop */
L_115f4f18:;
  /* 115f4f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f4f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f4f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f4f20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115f4f21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4f24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f4f25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4f28 jb 0x115f4ee0 */
  if (C.cf) goto L_115f4ee0;
  /* 115f4f2a std  */
  C.df=1;
  /* 115f4f2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4f2d cld  */
  C.df=0;
  /* 115f4f2e jmp dword ptr [edx*4 + 0x115f5000] */
  switch (EDX) {
    case 0: goto L_115f5010;
    case 1: goto L_115f5018;
    case 2: goto L_115f5028;
    case 3: goto L_115f503c;
    default: x86_unimpl("switch@0x115f4f2e out of table"); return;
  }
  /* 115f4f35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f4f38:;
  /* 115f4f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f4f3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f4f3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f4f40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f4f43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4f46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f4f49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4f4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4f4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4f52 jb 0x115f4ee0 */
  if (C.cf) goto L_115f4ee0;
  /* 115f4f54 std  */
  C.df=1;
  /* 115f4f55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4f57 cld  */
  C.df=0;
  /* 115f4f58 jmp dword ptr [edx*4 + 0x115f5000] */
  switch (EDX) {
    case 0: goto L_115f5010;
    case 1: goto L_115f5018;
    case 2: goto L_115f5028;
    case 3: goto L_115f503c;
    default: x86_unimpl("switch@0x115f4f58 out of table"); return;
  }
  /* 115f4f5f nop  */
  /* nop */
L_115f4f60:;
  /* 115f4f60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f4f63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115f4f65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f4f68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f4f6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f4f6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f4f71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115f4f74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f4f77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4f7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f4f7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f4f80 jb 0x115f4ee0 */
  if (C.cf) goto L_115f4ee0;
  /* 115f4f86 std  */
  C.df=1;
  /* 115f4f87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115f4f89 cld  */
  C.df=0;
  /* 115f4f8a jmp dword ptr [edx*4 + 0x115f5000] */
  switch (EDX) {
    case 0: goto L_115f5010;
    case 1: goto L_115f5018;
    case 2: goto L_115f5028;
    case 3: goto L_115f503c;
    default: x86_unimpl("switch@0x115f4f8a out of table"); return;
  }
  /* 115f4f91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115f4f94 mov ah, 0x4f */
  AH = (0x4fu);
  /* 115f4f96 pop edi */
  EDI = (pop32());
  /* 115f4f97 adc dword ptr [edi + ecx*2 + 0x4fc4115f], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*2 + 0x4fc4115f))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*2 + 0x4fc4115f), (_r)); fl_add(_a,_b,_r,32); }
  /* 115f4f9e pop edi */
  EDI = (pop32());
  /* 115f4f9f adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4fa1 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f4fa2 pop edi */
  EDI = (pop32());
  /* 115f4fa3 adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4fa5 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f4fa6 pop edi */
  EDI = (pop32());
  /* 115f4fa7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4fa9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f4faa pop edi */
  EDI = (pop32());
  /* 115f4fab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4fad dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115f4fae pop edi */
  EDI = (pop32());
  /* 115f4fb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115f4fb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115f4fbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115f4fc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115f4fc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115f4fc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115f4fcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115f4fd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115f4fd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115f4fd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115f4fdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115f4fe0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115f4fe4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115f4fe8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 115f4fec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115f4ff3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115f4ff5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115f4ff7:;
  /* 115f4ff7 jmp dword ptr [edx*4 + 0x115f5000] */
  switch (EDX) {
    case 0: goto L_115f5010;
    case 1: goto L_115f5018;
    case 2: goto L_115f5028;
    case 3: goto L_115f503c;
    default: x86_unimpl("switch@0x115f4ff7 out of table"); return;
  }
  /* 115f4ffe mov edi, edi */
  EDI = (EDI);
L_115f5010:;
  /* 115f5010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f5013 pop esi */
  ESI = (pop32());
  /* 115f5014 pop edi */
  EDI = (pop32());
  /* 115f5015 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f5016 ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f5017 nop  */
  /* nop */
L_115f5018:;
  /* 115f5018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f501b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f501e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f5021 pop esi */
  ESI = (pop32());
  /* 115f5022 pop edi */
  EDI = (pop32());
  /* 115f5023 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f5024 ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f5025 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115f5028:;
  /* 115f5028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f502b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f502e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f5031 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f5034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f5037 pop esi */
  ESI = (pop32());
  /* 115f5038 pop edi */
  EDI = (pop32());
  /* 115f5039 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f503a ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
  /* 115f503b nop  */
  /* nop */
L_115f503c:;
  /* 115f503c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115f503f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115f5042 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115f5045 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115f5048 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115f504b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115f504e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f5051 pop esi */
  ESI = (pop32());
  /* 115f5052 pop edi */
  EDI = (pop32());
  /* 115f5053 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115f5054 ret  */
  ESPCHK(0x115f4d20u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x115f5058 (32 bytes, 18 insns) */
void f_115f5058(void) {
  FTRACE(0x115f5058u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f5058 push ebp */
  push32((uint32_t)(EBP));
  /* 115f5059 mov ebp, esp */
  EBP = (ESP);
  /* 115f505b push ebx */
  push32((uint32_t)(EBX));
  /* 115f505c push esi */
  push32((uint32_t)(ESI));
  /* 115f505d push edi */
  push32((uint32_t)(EDI));
  /* 115f505e push ebp */
  push32((uint32_t)(EBP));
  /* 115f505f push 0 */
  push32((uint32_t)(0x0u));
  /* 115f5061 push 0 */
  push32((uint32_t)(0x0u));
  /* 115f5063 push 0x115f5070 */
  push32((uint32_t)(0x115f5070u));
  /* 115f5068 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115f506b call 0x115f5260 */
  push32(0x115f5070u); f_115f5260();
  /* 115f5070 pop ebp */
  EBP = (pop32());
  /* 115f5071 pop edi */
  EDI = (pop32());
  /* 115f5072 pop esi */
  ESI = (pop32());
  /* 115f5073 pop ebx */
  EBX = (pop32());
  /* 115f5074 mov esp, ebp */
  ESP = (EBP);
  /* 115f5076 pop ebp */
  EBP = (pop32());
  /* 115f5077 ret  */
  ESPCHK(0x115f5058u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x115f509a (104 bytes, 33 insns) */
void f_115f509a(void) {
  FTRACE(0x115f509au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f509a push ebx */
  push32((uint32_t)(EBX));
  /* 115f509b push esi */
  push32((uint32_t)(ESI));
  /* 115f509c push edi */
  push32((uint32_t)(EDI));
  /* 115f509d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115f50a1 push eax */
  push32((uint32_t)(EAX));
  /* 115f50a2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 115f50a4 push 0x115f5078 */
  push32((uint32_t)(0x115f5078u));
  /* 115f50a9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 115f50b0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_115f50b7:;
  /* 115f50b7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 115f50bb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 115f50be mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 115f50c1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f50c4 je 0x115f50f4 */
  if (C.zf) goto L_115f50f4;
  /* 115f50c6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f50ca je 0x115f50f4 */
  if (C.zf) goto L_115f50f4;
  /* 115f50cc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 115f50cf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 115f50d2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 115f50d6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 115f50d9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f50de jne 0x115f50f2 */
  if (!C.zf) goto L_115f50f2;
  /* 115f50e0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 115f50e5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 115f50e9 call 0x115f512e */
  push32(0x115f50eeu); f_115f512e();
  /* 115f50ee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x115f50f2u);
L_115f50f2:;
  /* 115f50f2 jmp 0x115f50b7 */
  goto L_115f50b7;
L_115f50f4:;
  /* 115f50f4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 115f50fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f50fe pop edi */
  EDI = (pop32());
  /* 115f50ff pop esi */
  ESI = (pop32());
  /* 115f5100 pop ebx */
  EBX = (pop32());
  /* 115f5101 ret  */
  ESPCHK(0x115f509au, _esp0);
  ESP += 4; return;
}

/* FUN_1000512e @ 0x115f512e (24 bytes, 10 insns) */
void f_115f512e(void) {
  FTRACE(0x115f512eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f512e push ebx */
  push32((uint32_t)(EBX));
  /* 115f512f push ecx */
  push32((uint32_t)(ECX));
  /* 115f5130 mov ebx, 0x115f7640 */
  EBX = (0x115f7640u);
  /* 115f5135 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115f5138 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 115f513b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 115f513e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 115f5141 pop ecx */
  ECX = (pop32());
  /* 115f5142 pop ebx */
  EBX = (pop32());
  /* 115f5143 ret 4 */
  ESPCHK(0x115f512eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000520d @ 0x115f520d (27 bytes, 11 insns) */
void f_115f520d(void) {
  FTRACE(0x115f520du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f520d push ebp */
  push32((uint32_t)(EBP));
  /* 115f520e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 115f5212 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 115f5214 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115f5217 push eax */
  push32((uint32_t)(EAX));
  /* 115f5218 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 115f521b push eax */
  push32((uint32_t)(EAX));
  /* 115f521c call 0x115f509a */
  push32(0x115f5221u); f_115f509a();
  /* 115f5221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115f5224 pop ebp */
  EBP = (pop32());
  /* 115f5225 ret 4 */
  ESPCHK(0x115f520du, _esp0);
  ESP += 8; return;
}

/* FUN_10005230 @ 0x115f5230 (47 bytes, 17 insns) */
void f_115f5230(void) {
  FTRACE(0x115f5230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f5230 push ecx */
  push32((uint32_t)(ECX));
  /* 115f5231 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f5236 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 115f523a jb 0x115f5250 */
  if (C.cf) goto L_115f5250;
L_115f523c:;
  /* 115f523c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f5242 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f5247 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115f5249 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115f524e jae 0x115f523c */
  if (!C.cf) goto L_115f523c;
L_115f5250:;
  /* 115f5250 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115f5252 mov eax, esp */
  EAX = (ESP);
  /* 115f5254 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115f5256 mov esp, ecx */
  ESP = (ECX);
  /* 115f5258 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115f525a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 115f525d push eax */
  push32((uint32_t)(EAX));
  /* 115f525e ret  */
  ESPCHK(0x115f5230u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x115f5260 (6 bytes, 1 insns) */
void f_115f5260(void) {
  FTRACE(0x115f5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115f5260 jmp dword ptr [0x115f6008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x115f6008)))); return;
}

