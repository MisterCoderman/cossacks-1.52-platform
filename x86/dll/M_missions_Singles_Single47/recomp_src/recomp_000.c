#include "recomp.h"

/* FUN_10001000 @ 0x117d1000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_117d1000(void) {
  FTRACE(0x117d1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1000 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1002 call dword ptr [0x117d511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d511c))), 0x117d1008u);
  /* 117d1008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d100e ja 0x117d102f */
  if ((!C.cf&&!C.zf)) goto L_117d102f;
  /* 117d1010 jmp dword ptr [eax*4 + 0x117d1038] */
  switch (EAX) {
    case 0: goto L_117d1017;
    case 1: goto L_117d101d;
    case 2: goto L_117d1023;
    case 3: goto L_117d1029;
    default: x86_unimpl("switch@0x117d1010 out of table"); return;
  }
L_117d1017:;
  /* 117d1017 mov eax, 0x1388 */
  EAX = (0x1388u);
  /* 117d101c ret  */
  ESPCHK(0x117d1000u, _esp0);
  ESP += 4; return;
L_117d101d:;
  /* 117d101d mov eax, 0xfa0 */
  EAX = (0xfa0u);
  /* 117d1022 ret  */
  ESPCHK(0x117d1000u, _esp0);
  ESP += 4; return;
L_117d1023:;
  /* 117d1023 mov eax, 0xdac */
  EAX = (0xdacu);
  /* 117d1028 ret  */
  ESPCHK(0x117d1000u, _esp0);
  ESP += 4; return;
L_117d1029:;
  /* 117d1029 mov eax, 0x7d0 */
  EAX = (0x7d0u);
  /* 117d102e ret  */
  ESPCHK(0x117d1000u, _esp0);
  ESP += 4; return;
L_117d102f:;
  /* 117d102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 117d1034 ret  */
  ESPCHK(0x117d1000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x117d1050 (242 bytes, 62 insns) */
void f_117d1050(void) {
  FTRACE(0x117d1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1050 push esi */
  push32((uint32_t)(ESI));
  /* 117d1051 mov esi, dword ptr [0x117d510c] */
  ESI = (r32((uint32_t)(0x117d510c)));
  /* 117d1057 push 0x117d6078 */
  push32((uint32_t)(0x117d6078u));
  /* 117d105c push 0x117d6430 */
  push32((uint32_t)(0x117d6430u));
  /* 117d1061 call esi */
  call_ind((uint32_t)(ESI), 0x117d1063u);
  /* 117d1063 push 0x117d6074 */
  push32((uint32_t)(0x117d6074u));
  /* 117d1068 push 0x117d6440 */
  push32((uint32_t)(0x117d6440u));
  /* 117d106d call esi */
  call_ind((uint32_t)(ESI), 0x117d106fu);
  /* 117d106f push 0x117d6070 */
  push32((uint32_t)(0x117d6070u));
  /* 117d1074 push 0x117d6448 */
  push32((uint32_t)(0x117d6448u));
  /* 117d1079 call esi */
  call_ind((uint32_t)(ESI), 0x117d107bu);
  /* 117d107b push 0x117d606c */
  push32((uint32_t)(0x117d606cu));
  /* 117d1080 push 0x117d6450 */
  push32((uint32_t)(0x117d6450u));
  /* 117d1085 call esi */
  call_ind((uint32_t)(ESI), 0x117d1087u);
  /* 117d1087 push 0x117d6068 */
  push32((uint32_t)(0x117d6068u));
  /* 117d108c push 0x117d6458 */
  push32((uint32_t)(0x117d6458u));
  /* 117d1091 call esi */
  call_ind((uint32_t)(ESI), 0x117d1093u);
  /* 117d1093 mov esi, dword ptr [0x117d5104] */
  ESI = (r32((uint32_t)(0x117d5104)));
  /* 117d1099 push 0x117d6060 */
  push32((uint32_t)(0x117d6060u));
  /* 117d109e push 0x117d6438 */
  push32((uint32_t)(0x117d6438u));
  /* 117d10a3 call esi */
  call_ind((uint32_t)(ESI), 0x117d10a5u);
  /* 117d10a5 push 0x117d605c */
  push32((uint32_t)(0x117d605cu));
  /* 117d10aa push 0x117d6470 */
  push32((uint32_t)(0x117d6470u));
  /* 117d10af call esi */
  call_ind((uint32_t)(ESI), 0x117d10b1u);
  /* 117d10b1 push 0x117d6058 */
  push32((uint32_t)(0x117d6058u));
  /* 117d10b6 push 0x117d6478 */
  push32((uint32_t)(0x117d6478u));
  /* 117d10bb call esi */
  call_ind((uint32_t)(ESI), 0x117d10bdu);
  /* 117d10bd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d10c0 push 0x117d6054 */
  push32((uint32_t)(0x117d6054u));
  /* 117d10c5 push 0x117d6480 */
  push32((uint32_t)(0x117d6480u));
  /* 117d10ca call esi */
  call_ind((uint32_t)(ESI), 0x117d10ccu);
  /* 117d10cc push 0x117d6050 */
  push32((uint32_t)(0x117d6050u));
  /* 117d10d1 push 0x117d6420 */
  push32((uint32_t)(0x117d6420u));
  /* 117d10d6 call esi */
  call_ind((uint32_t)(ESI), 0x117d10d8u);
  /* 117d10d8 push 0x117d6048 */
  push32((uint32_t)(0x117d6048u));
  /* 117d10dd push 0x117d6428 */
  push32((uint32_t)(0x117d6428u));
  /* 117d10e2 call dword ptr [0x117d5114] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5114))), 0x117d10e8u);
  /* 117d10e8 push 0x117d6038 */
  push32((uint32_t)(0x117d6038u));
  /* 117d10ed push 0x117d6468 */
  push32((uint32_t)(0x117d6468u));
  /* 117d10f2 call dword ptr [0x117d5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5118))), 0x117d10f8u);
  /* 117d10f8 push 0x117d6460 */
  push32((uint32_t)(0x117d6460u));
  /* 117d10fd call dword ptr [0x117d5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5110))), 0x117d1103u);
  /* 117d1103 push 8 */
  push32((uint32_t)(0x8u));
  /* 117d1105 push 0x117d6460 */
  push32((uint32_t)(0x117d6460u));
  /* 117d110a call dword ptr [0x117d5120] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5120))), 0x117d1110u);
  /* 117d1110 mov esi, dword ptr [0x117d5124] */
  ESI = (r32((uint32_t)(0x117d5124)));
  /* 117d1116 push 0x117d6030 */
  push32((uint32_t)(0x117d6030u));
  /* 117d111b push 1 */
  push32((uint32_t)(0x1u));
  /* 117d111d call esi */
  call_ind((uint32_t)(ESI), 0x117d111fu);
  /* 117d111f push 0x117d6030 */
  push32((uint32_t)(0x117d6030u));
  /* 117d1124 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1126 call esi */
  call_ind((uint32_t)(ESI), 0x117d1128u);
  /* 117d1128 push 0x117d6030 */
  push32((uint32_t)(0x117d6030u));
  /* 117d112d push 3 */
  push32((uint32_t)(0x3u));
  /* 117d112f call esi */
  call_ind((uint32_t)(ESI), 0x117d1131u);
  /* 117d1131 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1134 push 0x117d6030 */
  push32((uint32_t)(0x117d6030u));
  /* 117d1139 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d113b call esi */
  call_ind((uint32_t)(ESI), 0x117d113du);
  /* 117d113d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1140 pop esi */
  ESI = (pop32());
  /* 117d1141 ret  */
  ESPCHK(0x117d1050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x117d1150 (1813 bytes, 636 insns) */
void f_117d1150(void) {
  FTRACE(0x117d1150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1150 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d1153 push ebx */
  push32((uint32_t)(EBX));
  /* 117d1154 push ebp */
  push32((uint32_t)(EBP));
  /* 117d1155 push esi */
  push32((uint32_t)(ESI));
  /* 117d1156 push edi */
  push32((uint32_t)(EDI));
  /* 117d1157 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1159 call dword ptr [0x117d50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50b4))), 0x117d115fu);
  /* 117d115f mov ebx, dword ptr [0x117d50b8] */
  EBX = (r32((uint32_t)(0x117d50b8)));
  /* 117d1165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1168 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d116a je 0x117d14f8 */
  if (C.zf) goto L_117d14f8;
  /* 117d1170 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1172 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1174 call ebx */
  call_ind((uint32_t)(EBX), 0x117d1176u);
  /* 117d1176 mov esi, dword ptr [0x117d50b0] */
  ESI = (r32((uint32_t)(0x117d50b0)));
  /* 117d117c push 0x117d60e8 */
  push32((uint32_t)(0x117d60e8u));
  /* 117d1181 call esi */
  call_ind((uint32_t)(ESI), 0x117d1183u);
  /* 117d1183 push 0x117d60e0 */
  push32((uint32_t)(0x117d60e0u));
  /* 117d1188 call esi */
  call_ind((uint32_t)(ESI), 0x117d118au);
  /* 117d118a mov esi, dword ptr [0x117d50c0] */
  ESI = (r32((uint32_t)(0x117d50c0)));
  /* 117d1190 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1195 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1197 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1199 call esi */
  call_ind((uint32_t)(ESI), 0x117d119bu);
  /* 117d119b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11a4 call esi */
  call_ind((uint32_t)(ESI), 0x117d11a6u);
  /* 117d11a6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11ab push 4 */
  push32((uint32_t)(0x4u));
  /* 117d11ad push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11af call esi */
  call_ind((uint32_t)(ESI), 0x117d11b1u);
  /* 117d11b1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d11b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11ba call esi */
  call_ind((uint32_t)(ESI), 0x117d11bcu);
  /* 117d11bc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d11bf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d11c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11c8 call esi */
  call_ind((uint32_t)(ESI), 0x117d11cau);
  /* 117d11ca push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11cf push 2 */
  push32((uint32_t)(0x2u));
  /* 117d11d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11d3 call esi */
  call_ind((uint32_t)(ESI), 0x117d11d5u);
  /* 117d11d5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11da push 3 */
  push32((uint32_t)(0x3u));
  /* 117d11dc push 2 */
  push32((uint32_t)(0x2u));
  /* 117d11de call esi */
  call_ind((uint32_t)(ESI), 0x117d11e0u);
  /* 117d11e0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d11e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d11e9 call esi */
  call_ind((uint32_t)(ESI), 0x117d11ebu);
  /* 117d11eb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117d11f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d11f4 call esi */
  call_ind((uint32_t)(ESI), 0x117d11f6u);
  /* 117d11f6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d11fb push 5 */
  push32((uint32_t)(0x5u));
  /* 117d11fd push 2 */
  push32((uint32_t)(0x2u));
  /* 117d11ff call esi */
  call_ind((uint32_t)(ESI), 0x117d1201u);
  /* 117d1201 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1204 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1209 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d120b push 2 */
  push32((uint32_t)(0x2u));
  /* 117d120d call esi */
  call_ind((uint32_t)(ESI), 0x117d120fu);
  /* 117d120f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1214 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1216 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1218 call esi */
  call_ind((uint32_t)(ESI), 0x117d121au);
  /* 117d121a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d121f push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1221 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1223 call esi */
  call_ind((uint32_t)(ESI), 0x117d1225u);
  /* 117d1225 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d122a push 1 */
  push32((uint32_t)(0x1u));
  /* 117d122c push 3 */
  push32((uint32_t)(0x3u));
  /* 117d122e call esi */
  call_ind((uint32_t)(ESI), 0x117d1230u);
  /* 117d1230 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1235 push 4 */
  push32((uint32_t)(0x4u));
  /* 117d1237 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1239 call esi */
  call_ind((uint32_t)(ESI), 0x117d123bu);
  /* 117d123b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1240 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d1242 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1244 call esi */
  call_ind((uint32_t)(ESI), 0x117d1246u);
  /* 117d1246 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1249 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d124e push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1250 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1252 call esi */
  call_ind((uint32_t)(ESI), 0x117d1254u);
  /* 117d1254 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1259 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d125b push 3 */
  push32((uint32_t)(0x3u));
  /* 117d125d call esi */
  call_ind((uint32_t)(ESI), 0x117d125fu);
  /* 117d125f mov ebp, dword ptr [0x117d50c4] */
  EBP = (r32((uint32_t)(0x117d50c4)));
  /* 117d1265 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1267 push 0x117d6440 */
  push32((uint32_t)(0x117d6440u));
  /* 117d126c call ebp */
  call_ind((uint32_t)(EBP), 0x117d126eu);
  /* 117d126e mov edi, dword ptr [0x117d50bc] */
  EDI = (r32((uint32_t)(0x117d50bc)));
  /* 117d1274 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 117d1279 push 0x117d6470 */
  push32((uint32_t)(0x117d6470u));
  /* 117d127e push 5 */
  push32((uint32_t)(0x5u));
  /* 117d1280 call edi */
  call_ind((uint32_t)(EDI), 0x117d1282u);
  /* 117d1282 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1284 push 0x117d6448 */
  push32((uint32_t)(0x117d6448u));
  /* 117d1289 call ebp */
  call_ind((uint32_t)(EBP), 0x117d128bu);
  /* 117d128b push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 117d1290 push 0x117d6478 */
  push32((uint32_t)(0x117d6478u));
  /* 117d1295 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d1297 call edi */
  call_ind((uint32_t)(EDI), 0x117d1299u);
  /* 117d1299 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d129c push 0 */
  push32((uint32_t)(0x0u));
  /* 117d129e push 0x117d6450 */
  push32((uint32_t)(0x117d6450u));
  /* 117d12a3 call ebp */
  call_ind((uint32_t)(EBP), 0x117d12a5u);
  /* 117d12a5 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 117d12aa push 0x117d6480 */
  push32((uint32_t)(0x117d6480u));
  /* 117d12af push 5 */
  push32((uint32_t)(0x5u));
  /* 117d12b1 call edi */
  call_ind((uint32_t)(EDI), 0x117d12b3u);
  /* 117d12b3 call 0x117d1000 */
  push32(0x117d12b8u); f_117d1000();
  /* 117d12b8 mov edi, dword ptr [0x117d50cc] */
  EDI = (r32((uint32_t)(0x117d50cc)));
  /* 117d12be push eax */
  push32((uint32_t)(EAX));
  /* 117d12bf push 1 */
  push32((uint32_t)(0x1u));
  /* 117d12c1 call edi */
  call_ind((uint32_t)(EDI), 0x117d12c3u);
  /* 117d12c3 call 0x117d1000 */
  push32(0x117d12c8u); f_117d1000();
  /* 117d12c8 add eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d12cd push eax */
  push32((uint32_t)(EAX));
  /* 117d12ce push 2 */
  push32((uint32_t)(0x2u));
  /* 117d12d0 call edi */
  call_ind((uint32_t)(EDI), 0x117d12d2u);
  /* 117d12d2 mov ebp, dword ptr [0x117d511c] */
  EBP = (r32((uint32_t)(0x117d511c)));
  /* 117d12d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d12da call ebp */
  call_ind((uint32_t)(EBP), 0x117d12dcu);
  /* 117d12dc mov edi, dword ptr [0x117d50d0] */
  EDI = (r32((uint32_t)(0x117d50d0)));
  /* 117d12e2 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d12e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d12e7 jne 0x117d1364 */
  if (!C.zf) goto L_117d1364;
  /* 117d12e9 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117d12ee push 3 */
  push32((uint32_t)(0x3u));
  /* 117d12f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d12f2 call esi */
  call_ind((uint32_t)(ESI), 0x117d12f4u);
  /* 117d12f4 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117d12f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d12fb push 0 */
  push32((uint32_t)(0x0u));
  /* 117d12fd call esi */
  call_ind((uint32_t)(ESI), 0x117d12ffu);
  /* 117d12ff push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117d1304 push 4 */
  push32((uint32_t)(0x4u));
  /* 117d1306 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1308 call esi */
  call_ind((uint32_t)(ESI), 0x117d130au);
  /* 117d130a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117d130f push 5 */
  push32((uint32_t)(0x5u));
  /* 117d1311 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1313 call esi */
  call_ind((uint32_t)(ESI), 0x117d1315u);
  /* 117d1315 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117d131a push 0 */
  push32((uint32_t)(0x0u));
  /* 117d131c push 0 */
  push32((uint32_t)(0x0u));
  /* 117d131e call esi */
  call_ind((uint32_t)(ESI), 0x117d1320u);
  /* 117d1320 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117d1325 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1327 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1329 call esi */
  call_ind((uint32_t)(ESI), 0x117d132bu);
  /* 117d132b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d132e push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1330 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1332 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1334 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1336 push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d133b push 1 */
  push32((uint32_t)(0x1u));
  /* 117d133d call edi */
  call_ind((uint32_t)(EDI), 0x117d133fu);
  /* 117d133f push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1341 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1343 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1345 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1347 push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d134c push 2 */
  push32((uint32_t)(0x2u));
  /* 117d134e call edi */
  call_ind((uint32_t)(EDI), 0x117d1350u);
  /* 117d1350 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1352 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1354 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1356 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1358 push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d135d push 3 */
  push32((uint32_t)(0x3u));
  /* 117d135f call edi */
  call_ind((uint32_t)(EDI), 0x117d1361u);
  /* 117d1361 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d1364:;
  /* 117d1364 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1366 call ebp */
  call_ind((uint32_t)(EBP), 0x117d1368u);
  /* 117d1368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d136b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d136e jne 0x117d13eb */
  if (!C.zf) goto L_117d13eb;
  /* 117d1370 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117d1375 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1377 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1379 call esi */
  call_ind((uint32_t)(ESI), 0x117d137bu);
  /* 117d137b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117d1380 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1382 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1384 call esi */
  call_ind((uint32_t)(ESI), 0x117d1386u);
  /* 117d1386 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117d138b push 4 */
  push32((uint32_t)(0x4u));
  /* 117d138d push 0 */
  push32((uint32_t)(0x0u));
  /* 117d138f call esi */
  call_ind((uint32_t)(ESI), 0x117d1391u);
  /* 117d1391 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117d1396 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d1398 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d139a call esi */
  call_ind((uint32_t)(ESI), 0x117d139cu);
  /* 117d139c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117d13a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d13a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d13a5 call esi */
  call_ind((uint32_t)(ESI), 0x117d13a7u);
  /* 117d13a7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117d13ac push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13ae push 0 */
  push32((uint32_t)(0x0u));
  /* 117d13b0 call esi */
  call_ind((uint32_t)(ESI), 0x117d13b2u);
  /* 117d13b2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d13b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d13bb push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13bd push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d13c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d13c4 call edi */
  call_ind((uint32_t)(EDI), 0x117d13c6u);
  /* 117d13c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13ca push 1 */
  push32((uint32_t)(0x1u));
  /* 117d13cc push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13ce push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d13d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13d5 call edi */
  call_ind((uint32_t)(EDI), 0x117d13d7u);
  /* 117d13d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13db push 1 */
  push32((uint32_t)(0x1u));
  /* 117d13dd push 2 */
  push32((uint32_t)(0x2u));
  /* 117d13df push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d13e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d13e6 call edi */
  call_ind((uint32_t)(EDI), 0x117d13e8u);
  /* 117d13e8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d13eb:;
  /* 117d13eb push 0 */
  push32((uint32_t)(0x0u));
  /* 117d13ed call ebp */
  call_ind((uint32_t)(EBP), 0x117d13efu);
  /* 117d13ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d13f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d13f5 jne 0x117d1472 */
  if (!C.zf) goto L_117d1472;
  /* 117d13f7 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117d13fc push 3 */
  push32((uint32_t)(0x3u));
  /* 117d13fe push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1400 call esi */
  call_ind((uint32_t)(ESI), 0x117d1402u);
  /* 117d1402 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117d1407 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1409 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d140b call esi */
  call_ind((uint32_t)(ESI), 0x117d140du);
  /* 117d140d push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117d1412 push 4 */
  push32((uint32_t)(0x4u));
  /* 117d1414 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1416 call esi */
  call_ind((uint32_t)(ESI), 0x117d1418u);
  /* 117d1418 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117d141d push 5 */
  push32((uint32_t)(0x5u));
  /* 117d141f push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1421 call esi */
  call_ind((uint32_t)(ESI), 0x117d1423u);
  /* 117d1423 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117d1428 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d142a push 0 */
  push32((uint32_t)(0x0u));
  /* 117d142c call esi */
  call_ind((uint32_t)(ESI), 0x117d142eu);
  /* 117d142e push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117d1433 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1435 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1437 call esi */
  call_ind((uint32_t)(ESI), 0x117d1439u);
  /* 117d1439 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d143c push 3 */
  push32((uint32_t)(0x3u));
  /* 117d143e push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1440 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1442 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1444 push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d1449 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d144b call edi */
  call_ind((uint32_t)(EDI), 0x117d144du);
  /* 117d144d push 3 */
  push32((uint32_t)(0x3u));
  /* 117d144f push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1451 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1453 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1455 push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d145a push 2 */
  push32((uint32_t)(0x2u));
  /* 117d145c call edi */
  call_ind((uint32_t)(EDI), 0x117d145eu);
  /* 117d145e push 3 */
  push32((uint32_t)(0x3u));
  /* 117d1460 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1462 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1464 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1466 push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d146b push 3 */
  push32((uint32_t)(0x3u));
  /* 117d146d call edi */
  call_ind((uint32_t)(EDI), 0x117d146fu);
  /* 117d146f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d1472:;
  /* 117d1472 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1474 call ebp */
  call_ind((uint32_t)(EBP), 0x117d1476u);
  /* 117d1476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1479 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d147c jne 0x117d14f8 */
  if (!C.zf) goto L_117d14f8;
  /* 117d147e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1483 push eax */
  push32((uint32_t)(EAX));
  /* 117d1484 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1486 call esi */
  call_ind((uint32_t)(ESI), 0x117d1488u);
  /* 117d1488 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d148d push 1 */
  push32((uint32_t)(0x1u));
  /* 117d148f push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1491 call esi */
  call_ind((uint32_t)(ESI), 0x117d1493u);
  /* 117d1493 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d1498 push 4 */
  push32((uint32_t)(0x4u));
  /* 117d149a push 0 */
  push32((uint32_t)(0x0u));
  /* 117d149c call esi */
  call_ind((uint32_t)(ESI), 0x117d149eu);
  /* 117d149e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d14a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d14a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d14a7 call esi */
  call_ind((uint32_t)(ESI), 0x117d14a9u);
  /* 117d14a9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d14ae push 0 */
  push32((uint32_t)(0x0u));
  /* 117d14b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d14b2 call esi */
  call_ind((uint32_t)(ESI), 0x117d14b4u);
  /* 117d14b4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d14b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117d14bd call esi */
  call_ind((uint32_t)(ESI), 0x117d14bfu);
  /* 117d14bf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d14c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d14c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d14c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14ca push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d14cf push 1 */
  push32((uint32_t)(0x1u));
  /* 117d14d1 call edi */
  call_ind((uint32_t)(EDI), 0x117d14d3u);
  /* 117d14d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d14d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d14d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14db push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d14e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14e2 call edi */
  call_ind((uint32_t)(EDI), 0x117d14e4u);
  /* 117d14e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d14e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d14ea push 2 */
  push32((uint32_t)(0x2u));
  /* 117d14ec push 0x117d60d4 */
  push32((uint32_t)(0x117d60d4u));
  /* 117d14f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d14f3 call edi */
  call_ind((uint32_t)(EDI), 0x117d14f5u);
  /* 117d14f5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d14f8:;
  /* 117d14f8 push 6 */
  push32((uint32_t)(0x6u));
  /* 117d14fa call dword ptr [0x117d50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50b4))), 0x117d1500u);
  /* 117d1500 mov ebp, dword ptr [0x117d50c8] */
  EBP = (r32((uint32_t)(0x117d50c8)));
  /* 117d1506 mov esi, dword ptr [0x117d50d8] */
  ESI = (r32((uint32_t)(0x117d50d8)));
  /* 117d150c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d150f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1511 je 0x117d1538 */
  if (C.zf) goto L_117d1538;
  /* 117d1513 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1515 call ebp */
  call_ind((uint32_t)(EBP), 0x117d1517u);
  /* 117d1517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d151a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d151c je 0x117d1538 */
  if (C.zf) goto L_117d1538;
  /* 117d151e push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1520 push 6 */
  push32((uint32_t)(0x6u));
  /* 117d1522 call ebx */
  call_ind((uint32_t)(EBX), 0x117d1524u);
  /* 117d1524 mov edi, dword ptr [0x117d50b0] */
  EDI = (r32((uint32_t)(0x117d50b0)));
  /* 117d152a push 0x117d60cc */
  push32((uint32_t)(0x117d60ccu));
  /* 117d152f call edi */
  call_ind((uint32_t)(EDI), 0x117d1531u);
  /* 117d1531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1534 call esi */
  call_ind((uint32_t)(ESI), 0x117d1536u);
  /* 117d1536 jmp 0x117d153e */
  goto L_117d153e;
L_117d1538:;
  /* 117d1538 mov edi, dword ptr [0x117d50b0] */
  EDI = (r32((uint32_t)(0x117d50b0)));
L_117d153e:;
  /* 117d153e push 7 */
  push32((uint32_t)(0x7u));
  /* 117d1540 call dword ptr [0x117d50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50b4))), 0x117d1546u);
  /* 117d1546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1549 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d154b je 0x117d1570 */
  if (C.zf) goto L_117d1570;
  /* 117d154d push 0x117d6430 */
  push32((uint32_t)(0x117d6430u));
  /* 117d1552 call dword ptr [0x117d50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50dc))), 0x117d1558u);
  /* 117d1558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d155b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d155d jne 0x117d1570 */
  if (!C.zf) goto L_117d1570;
  /* 117d155f push eax */
  push32((uint32_t)(EAX));
  /* 117d1560 push 7 */
  push32((uint32_t)(0x7u));
  /* 117d1562 call ebx */
  call_ind((uint32_t)(EBX), 0x117d1564u);
  /* 117d1564 push 0x117d60c4 */
  push32((uint32_t)(0x117d60c4u));
  /* 117d1569 call edi */
  call_ind((uint32_t)(EDI), 0x117d156bu);
  /* 117d156b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d156e call esi */
  call_ind((uint32_t)(ESI), 0x117d1570u);
L_117d1570:;
  /* 117d1570 mov esi, dword ptr [0x117d50b4] */
  ESI = (r32((uint32_t)(0x117d50b4)));
  /* 117d1576 push 8 */
  push32((uint32_t)(0x8u));
  /* 117d1578 call esi */
  call_ind((uint32_t)(ESI), 0x117d157au);
  /* 117d157a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d157d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d157f je 0x117d159c */
  if (C.zf) goto L_117d159c;
  /* 117d1581 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1583 call ebp */
  call_ind((uint32_t)(EBP), 0x117d1585u);
  /* 117d1585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1588 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d158a je 0x117d159c */
  if (C.zf) goto L_117d159c;
  /* 117d158c push 0 */
  push32((uint32_t)(0x0u));
  /* 117d158e push 8 */
  push32((uint32_t)(0x8u));
  /* 117d1590 call ebx */
  call_ind((uint32_t)(EBX), 0x117d1592u);
  /* 117d1592 push 0x117d60bc */
  push32((uint32_t)(0x117d60bcu));
  /* 117d1597 call edi */
  call_ind((uint32_t)(EDI), 0x117d1599u);
  /* 117d1599 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d159c:;
  /* 117d159c push 9 */
  push32((uint32_t)(0x9u));
  /* 117d159e call esi */
  call_ind((uint32_t)(ESI), 0x117d15a0u);
  /* 117d15a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d15a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d15a5 je 0x117d15c2 */
  if (C.zf) goto L_117d15c2;
  /* 117d15a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d15a9 call ebp */
  call_ind((uint32_t)(EBP), 0x117d15abu);
  /* 117d15ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d15ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d15b0 je 0x117d15c2 */
  if (C.zf) goto L_117d15c2;
  /* 117d15b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d15b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 117d15b6 call ebx */
  call_ind((uint32_t)(EBX), 0x117d15b8u);
  /* 117d15b8 push 0x117d60b4 */
  push32((uint32_t)(0x117d60b4u));
  /* 117d15bd call edi */
  call_ind((uint32_t)(EDI), 0x117d15bfu);
  /* 117d15bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d15c2:;
  /* 117d15c2 push 0xa */
  push32((uint32_t)(0xau));
  /* 117d15c4 call esi */
  call_ind((uint32_t)(ESI), 0x117d15c6u);
  /* 117d15c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d15c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d15cb je 0x117d15e8 */
  if (C.zf) goto L_117d15e8;
  /* 117d15cd push 3 */
  push32((uint32_t)(0x3u));
  /* 117d15cf call ebp */
  call_ind((uint32_t)(EBP), 0x117d15d1u);
  /* 117d15d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d15d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d15d6 je 0x117d15e8 */
  if (C.zf) goto L_117d15e8;
  /* 117d15d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d15da push 0xa */
  push32((uint32_t)(0xau));
  /* 117d15dc call ebx */
  call_ind((uint32_t)(EBX), 0x117d15deu);
  /* 117d15de push 0x117d60ac */
  push32((uint32_t)(0x117d60acu));
  /* 117d15e3 call edi */
  call_ind((uint32_t)(EDI), 0x117d15e5u);
  /* 117d15e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d15e8:;
  /* 117d15e8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117d15ea call esi */
  call_ind((uint32_t)(ESI), 0x117d15ecu);
  /* 117d15ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d15ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d15f1 je 0x117d162a */
  if (C.zf) goto L_117d162a;
  /* 117d15f3 push 0xa */
  push32((uint32_t)(0xau));
  /* 117d15f5 call esi */
  call_ind((uint32_t)(ESI), 0x117d15f7u);
  /* 117d15f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d15fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d15fc jne 0x117d162a */
  if (!C.zf) goto L_117d162a;
  /* 117d15fe push 9 */
  push32((uint32_t)(0x9u));
  /* 117d1600 call esi */
  call_ind((uint32_t)(ESI), 0x117d1602u);
  /* 117d1602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1605 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1607 jne 0x117d162a */
  if (!C.zf) goto L_117d162a;
  /* 117d1609 push 8 */
  push32((uint32_t)(0x8u));
  /* 117d160b call esi */
  call_ind((uint32_t)(ESI), 0x117d160du);
  /* 117d160d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1610 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1612 jne 0x117d162a */
  if (!C.zf) goto L_117d162a;
  /* 117d1614 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1616 push 5 */
  push32((uint32_t)(0x5u));
  /* 117d1618 call ebx */
  call_ind((uint32_t)(EBX), 0x117d161au);
  /* 117d161a push 0x117d60a4 */
  push32((uint32_t)(0x117d60a4u));
  /* 117d161f call edi */
  call_ind((uint32_t)(EDI), 0x117d1621u);
  /* 117d1621 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1624 call dword ptr [0x117d50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50d4))), 0x117d162au);
L_117d162a:;
  /* 117d162a push 0xd */
  push32((uint32_t)(0xdu));
  /* 117d162c call esi */
  call_ind((uint32_t)(ESI), 0x117d162eu);
  /* 117d162e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1631 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1633 je 0x117d170f */
  if (C.zf) goto L_117d170f;
  /* 117d1639 push 0x117d6430 */
  push32((uint32_t)(0x117d6430u));
  /* 117d163e push 0x117d6438 */
  push32((uint32_t)(0x117d6438u));
  /* 117d1643 call dword ptr [0x117d50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50e4))), 0x117d1649u);
  /* 117d1649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d164c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d164e je 0x117d170f */
  if (C.zf) goto L_117d170f;
  /* 117d1654 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1656 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117d1658 call ebx */
  call_ind((uint32_t)(EBX), 0x117d165au);
  /* 117d165a push 1 */
  push32((uint32_t)(0x1u));
  /* 117d165c push 0xe */
  push32((uint32_t)(0xeu));
  /* 117d165e call ebx */
  call_ind((uint32_t)(EBX), 0x117d1660u);
  /* 117d1660 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 117d1664 push eax */
  push32((uint32_t)(EAX));
  /* 117d1665 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1667 push 0x117d6430 */
  push32((uint32_t)(0x117d6430u));
  /* 117d166c call dword ptr [0x117d50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50e8))), 0x117d1672u);
  /* 117d1672 mov cx, word ptr [esp + 0x30] */
  CX = (r16((uint32_t)(ESP + 0x30)));
  /* 117d1677 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d167a cmp cx, word ptr [esp + 0x16] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(ESP + 0x16))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117d167f jae 0x117d170f */
  if (!C.cf) goto L_117d170f;
  /* 117d1685 push 0x117d609c */
  push32((uint32_t)(0x117d609cu));
  /* 117d168a call dword ptr [0x117d50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50e0))), 0x117d1690u);
  /* 117d1690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1693 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1695 je 0x117d170f */
  if (C.zf) goto L_117d170f;
  /* 117d1697 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1699 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d169b call dword ptr [0x117d50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50f0))), 0x117d16a1u);
  /* 117d16a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d16a4 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d16a9 jle 0x117d1705 */
  if ((C.zf||C.sf!=C.of)) goto L_117d1705;
  /* 117d16ab push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 117d16b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d16b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d16b4 call dword ptr [0x117d50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50f4))), 0x117d16bau);
  /* 117d16ba mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 117d16be mov eax, dword ptr [esp + 0x22] */
  EAX = (r32((uint32_t)(ESP + 0x22)));
  /* 117d16c2 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117d16c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d16cd add edx, 0x1996 */
  { uint32_t _a=(EDX),_b=(0x1996u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d16d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d16d6 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d16d8 jl 0x117d16f1 */
  if ((C.sf!=C.of)) goto L_117d16f1;
  /* 117d16da mov cx, word ptr [esp + 0x16] */
  CX = (r16((uint32_t)(ESP + 0x16)));
  /* 117d16df lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 117d16e3 push edx */
  push32((uint32_t)(EDX));
  /* 117d16e4 mov word ptr [esp + 0x18], cx */
  w16((uint32_t)(ESP + 0x18), (CX));
  /* 117d16e9 call dword ptr [0x117d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50ec))), 0x117d16efu);
  /* 117d16ef jmp 0x117d170c */
  goto L_117d170c;
L_117d16f1:;
  /* 117d16f1 add word ptr [esp + 0x14], 0x1996 */
  { uint32_t _a=(r16((uint32_t)(ESP + 0x14))),_b=(0x1996u),_r=_a+_b; w16((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,16); }
  /* 117d16f8 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 117d16fc push edx */
  push32((uint32_t)(EDX));
  /* 117d16fd call dword ptr [0x117d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50ec))), 0x117d1703u);
  /* 117d1703 jmp 0x117d170c */
  goto L_117d170c;
L_117d1705:;
  /* 117d1705 push 0x117d6094 */
  push32((uint32_t)(0x117d6094u));
  /* 117d170a call edi */
  call_ind((uint32_t)(EDI), 0x117d170cu);
L_117d170c:;
  /* 117d170c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d170f:;
  /* 117d170f push 0xe */
  push32((uint32_t)(0xeu));
  /* 117d1711 call esi */
  call_ind((uint32_t)(ESI), 0x117d1713u);
  /* 117d1713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1716 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1718 je 0x117d173f */
  if (C.zf) goto L_117d173f;
  /* 117d171a push 0x117d6430 */
  push32((uint32_t)(0x117d6430u));
  /* 117d171f push 0x117d6438 */
  push32((uint32_t)(0x117d6438u));
  /* 117d1724 call dword ptr [0x117d50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50e4))), 0x117d172au);
  /* 117d172a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d172d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d172f jne 0x117d173f */
  if (!C.zf) goto L_117d173f;
  /* 117d1731 push eax */
  push32((uint32_t)(EAX));
  /* 117d1732 push 0xe */
  push32((uint32_t)(0xeu));
  /* 117d1734 call ebx */
  call_ind((uint32_t)(EBX), 0x117d1736u);
  /* 117d1736 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1738 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117d173a call ebx */
  call_ind((uint32_t)(EBX), 0x117d173cu);
  /* 117d173c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d173f:;
  /* 117d173f push 0xf */
  push32((uint32_t)(0xfu));
  /* 117d1741 call esi */
  call_ind((uint32_t)(ESI), 0x117d1743u);
  /* 117d1743 mov esi, dword ptr [0x117d50fc] */
  ESI = (r32((uint32_t)(0x117d50fc)));
  /* 117d1749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d174c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d174e je 0x117d1785 */
  if (C.zf) goto L_117d1785;
  /* 117d1750 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1752 call esi */
  call_ind((uint32_t)(ESI), 0x117d1754u);
  /* 117d1754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1757 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1759 je 0x117d1785 */
  if (C.zf) goto L_117d1785;
  /* 117d175b push 0 */
  push32((uint32_t)(0x0u));
  /* 117d175d push 0xf */
  push32((uint32_t)(0xfu));
  /* 117d175f call ebx */
  call_ind((uint32_t)(EBX), 0x117d1761u);
  /* 117d1761 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1763 push 0x117d6458 */
  push32((uint32_t)(0x117d6458u));
  /* 117d1768 call dword ptr [0x117d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50c4))), 0x117d176eu);
  /* 117d176e push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1770 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 117d1775 push 0x117d6438 */
  push32((uint32_t)(0x117d6438u));
  /* 117d177a push 5 */
  push32((uint32_t)(0x5u));
  /* 117d177c call dword ptr [0x117d5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5100))), 0x117d1782u);
  /* 117d1782 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d1785:;
  /* 117d1785 mov ebp, dword ptr [0x117d50b4] */
  EBP = (r32((uint32_t)(0x117d50b4)));
  /* 117d178b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117d178d call ebp */
  call_ind((uint32_t)(EBP), 0x117d178fu);
  /* 117d178f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1792 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1794 je 0x117d17e8 */
  if (C.zf) goto L_117d17e8;
  /* 117d1796 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d1798 call esi */
  call_ind((uint32_t)(ESI), 0x117d179au);
  /* 117d179a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d179d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d179f je 0x117d17e8 */
  if (C.zf) goto L_117d17e8;
  /* 117d17a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d17a3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117d17a5 call ebx */
  call_ind((uint32_t)(EBX), 0x117d17a7u);
  /* 117d17a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d17a9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117d17ab call ebx */
  call_ind((uint32_t)(EBX), 0x117d17adu);
  /* 117d17ad push 0 */
  push32((uint32_t)(0x0u));
  /* 117d17af push 0x117d6420 */
  push32((uint32_t)(0x117d6420u));
  /* 117d17b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d17b6 push 0x117d6468 */
  push32((uint32_t)(0x117d6468u));
  /* 117d17bb push 0x117d6428 */
  push32((uint32_t)(0x117d6428u));
  /* 117d17c0 push 0x117d6460 */
  push32((uint32_t)(0x117d6460u));
  /* 117d17c5 call dword ptr [0x117d50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50f8))), 0x117d17cbu);
  /* 117d17cb push 0x117d608c */
  push32((uint32_t)(0x117d608cu));
  /* 117d17d0 call edi */
  call_ind((uint32_t)(EDI), 0x117d17d2u);
  /* 117d17d2 call 0x117d1000 */
  push32(0x117d17d7u); f_117d1000();
  /* 117d17d7 add eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d17dc push eax */
  push32((uint32_t)(EAX));
  /* 117d17dd push 2 */
  push32((uint32_t)(0x2u));
  /* 117d17df call dword ptr [0x117d50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50cc))), 0x117d17e5u);
  /* 117d17e5 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d17e8:;
  /* 117d17e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117d17ea call ebp */
  call_ind((uint32_t)(EBP), 0x117d17ecu);
  /* 117d17ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d17ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d17f1 je 0x117d180d */
  if (C.zf) goto L_117d180d;
  /* 117d17f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d17f5 call esi */
  call_ind((uint32_t)(ESI), 0x117d17f7u);
  /* 117d17f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d17fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d17fc je 0x117d180d */
  if (C.zf) goto L_117d180d;
  /* 117d17fe push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1800 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117d1802 call ebx */
  call_ind((uint32_t)(EBX), 0x117d1804u);
  /* 117d1804 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1806 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117d1808 call ebx */
  call_ind((uint32_t)(EBX), 0x117d180au);
  /* 117d180a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d180d:;
  /* 117d180d push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117d180f call ebp */
  call_ind((uint32_t)(EBP), 0x117d1811u);
  /* 117d1811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1814 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d1816 je 0x117d185d */
  if (C.zf) goto L_117d185d;
  /* 117d1818 push 0x117d6460 */
  push32((uint32_t)(0x117d6460u));
  /* 117d181d push 0x117d6438 */
  push32((uint32_t)(0x117d6438u));
  /* 117d1822 call dword ptr [0x117d50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50e4))), 0x117d1828u);
  /* 117d1828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d182b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d182d je 0x117d185d */
  if (C.zf) goto L_117d185d;
  /* 117d182f push 0x117d6084 */
  push32((uint32_t)(0x117d6084u));
  /* 117d1834 call edi */
  call_ind((uint32_t)(EDI), 0x117d1836u);
  /* 117d1836 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117d183b push 1 */
  push32((uint32_t)(0x1u));
  /* 117d183d push 0 */
  push32((uint32_t)(0x0u));
  /* 117d183f call dword ptr [0x117d50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50f4))), 0x117d1845u);
  /* 117d1845 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1847 push 0x117d6460 */
  push32((uint32_t)(0x117d6460u));
  /* 117d184c call dword ptr [0x117d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50c4))), 0x117d1852u);
  /* 117d1852 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1854 call dword ptr [0x117d5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5108))), 0x117d185au);
  /* 117d185a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d185d:;
  /* 117d185d pop edi */
  EDI = (pop32());
  /* 117d185e pop esi */
  ESI = (pop32());
  /* 117d185f pop ebp */
  EBP = (pop32());
  /* 117d1860 pop ebx */
  EBX = (pop32());
  /* 117d1861 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1864 ret  */
  ESPCHK(0x117d1150u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x117d1870 (20 bytes, 6 insns) */
void f_117d1870(void) {
  FTRACE(0x117d1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1870 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d1874 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117d1875 jne 0x117d187c */
  if (!C.zf) goto L_117d187c;
  /* 117d1877 call 0x117d1050 */
  push32(0x117d187cu); f_117d1050();
L_117d187c:;
  /* 117d187c mov eax, 1 */
  EAX = (0x1u);
  /* 117d1881 ret 0xc */
  ESPCHK(0x117d1870u, _esp0);
  ESP += 16; return;
}

/* FUN_10001890 @ 0x117d1890 (217 bytes, 57 insns) */
void f_117d1890(void) {
  FTRACE(0x117d1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1890 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d1894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1897 jne 0x117d1925 */
  if (!C.zf) goto L_117d1925;
  /* 117d189d call dword ptr [0x117d506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d506c))), 0x117d18a3u);
  /* 117d18a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d18a5 mov dword ptr [0x117d64a4], eax */
  w32((uint32_t)(0x117d64a4), (EAX));
  /* 117d18aa call 0x117d22c4 */
  push32(0x117d18afu); f_117d22c4();
  /* 117d18af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d18b1 pop ecx */
  ECX = (pop32());
  /* 117d18b2 je 0x117d18f0 */
  if (C.zf) goto L_117d18f0;
  /* 117d18b4 mov eax, dword ptr [0x117d64a4] */
  EAX = (r32((uint32_t)(0x117d64a4)));
  /* 117d18b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117d18bb mov cl, byte ptr [0x117d64a5] */
  CL = (r8((uint32_t)(0x117d64a5)));
  /* 117d18c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d18c6 shr dword ptr [0x117d64a4], 0x10 */
  w32((uint32_t)(0x117d64a4), (sh_shr((uint32_t)(r32((uint32_t)(0x117d64a4))), (0x10u)&0x1f, 32)));
  /* 117d18cd mov dword ptr [0x117d64ac], eax */
  w32((uint32_t)(0x117d64ac), (EAX));
  /* 117d18d2 mov dword ptr [0x117d64b0], ecx */
  w32((uint32_t)(0x117d64b0), (ECX));
  /* 117d18d8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117d18db add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d18dd mov dword ptr [0x117d64a8], eax */
  w32((uint32_t)(0x117d64a8), (EAX));
  /* 117d18e2 call 0x117d1b57 */
  push32(0x117d18e7u); f_117d1b57();
  /* 117d18e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d18e9 jne 0x117d18f4 */
  if (!C.zf) goto L_117d18f4;
  /* 117d18eb call 0x117d2300 */
  push32(0x117d18f0u); f_117d2300();
L_117d18f0:;
  /* 117d18f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d18f2 jmp 0x117d1966 */
  goto L_117d1966;
L_117d18f4:;
  /* 117d18f4 call dword ptr [0x117d5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5068))), 0x117d18fau);
  /* 117d18fa mov dword ptr [0x117d69f8], eax */
  w32((uint32_t)(0x117d69f8), (EAX));
  /* 117d18ff call 0x117d2192 */
  push32(0x117d1904u); f_117d2192();
  /* 117d1904 mov dword ptr [0x117d6490], eax */
  w32((uint32_t)(0x117d6490), (EAX));
  /* 117d1909 call 0x117d1c7c */
  push32(0x117d190eu); f_117d1c7c();
  /* 117d190e call 0x117d1f45 */
  push32(0x117d1913u); f_117d1f45();
  /* 117d1913 call 0x117d1e8c */
  push32(0x117d1918u); f_117d1e8c();
  /* 117d1918 call 0x117d1a39 */
  push32(0x117d191du); f_117d1a39();
  /* 117d191d inc dword ptr [0x117d648c] */
  { uint32_t _r=(r32((uint32_t)(0x117d648c)))+1; w32((uint32_t)(0x117d648c), (_r)); fl_inc(_r,32); }
  /* 117d1923 jmp 0x117d1963 */
  goto L_117d1963;
L_117d1925:;
  /* 117d1925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117d1927 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1929 jne 0x117d1957 */
  if (!C.zf) goto L_117d1957;
  /* 117d192b cmp dword ptr [0x117d648c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x117d648c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1931 jle 0x117d18f0 */
  if ((C.zf||C.sf!=C.of)) goto L_117d18f0;
  /* 117d1933 dec dword ptr [0x117d648c] */
  { uint32_t _r=(r32((uint32_t)(0x117d648c)))-1; w32((uint32_t)(0x117d648c), (_r)); fl_dec(_r,32); }
  /* 117d1939 cmp dword ptr [0x117d64dc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x117d64dc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d193f jne 0x117d1946 */
  if (!C.zf) goto L_117d1946;
  /* 117d1941 call 0x117d1a77 */
  push32(0x117d1946u); f_117d1a77();
L_117d1946:;
  /* 117d1946 call 0x117d1e38 */
  push32(0x117d194bu); f_117d1e38();
  /* 117d194b call 0x117d1bab */
  push32(0x117d1950u); f_117d1bab();
  /* 117d1950 call 0x117d2300 */
  push32(0x117d1955u); f_117d2300();
  /* 117d1955 jmp 0x117d1963 */
  goto L_117d1963;
L_117d1957:;
  /* 117d1957 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d195a jne 0x117d1963 */
  if (!C.zf) goto L_117d1963;
  /* 117d195c push ecx */
  push32((uint32_t)(ECX));
  /* 117d195d call 0x117d1bdc */
  push32(0x117d1962u); f_117d1bdc();
  /* 117d1962 pop ecx */
  ECX = (pop32());
L_117d1963:;
  /* 117d1963 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1965 pop eax */
  EAX = (pop32());
L_117d1966:;
  /* 117d1966 ret 0xc */
  ESPCHK(0x117d1890u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x117d1969 (157 bytes, 73 insns) */
void f_117d1969(void) {
  FTRACE(0x117d1969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1969 push ebp */
  push32((uint32_t)(EBP));
  /* 117d196a mov ebp, esp */
  EBP = (ESP);
  /* 117d196c push ebx */
  push32((uint32_t)(EBX));
  /* 117d196d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d1970 push esi */
  push32((uint32_t)(ESI));
  /* 117d1971 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117d1974 push edi */
  push32((uint32_t)(EDI));
  /* 117d1975 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 117d1978 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d197a jne 0x117d1985 */
  if (!C.zf) goto L_117d1985;
  /* 117d197c cmp dword ptr [0x117d648c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117d648c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1983 jmp 0x117d19ab */
  goto L_117d19ab;
L_117d1985:;
  /* 117d1985 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1988 je 0x117d198f */
  if (C.zf) goto L_117d198f;
  /* 117d198a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d198d jne 0x117d19b1 */
  if (!C.zf) goto L_117d19b1;
L_117d198f:;
  /* 117d198f mov eax, dword ptr [0x117d69fc] */
  EAX = (r32((uint32_t)(0x117d69fc)));
  /* 117d1994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1996 je 0x117d19a1 */
  if (C.zf) goto L_117d19a1;
  /* 117d1998 push edi */
  push32((uint32_t)(EDI));
  /* 117d1999 push esi */
  push32((uint32_t)(ESI));
  /* 117d199a push ebx */
  push32((uint32_t)(EBX));
  /* 117d199b call eax */
  call_ind((uint32_t)(EAX), 0x117d199du);
  /* 117d199d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d199f je 0x117d19ad */
  if (C.zf) goto L_117d19ad;
L_117d19a1:;
  /* 117d19a1 push edi */
  push32((uint32_t)(EDI));
  /* 117d19a2 push esi */
  push32((uint32_t)(ESI));
  /* 117d19a3 push ebx */
  push32((uint32_t)(EBX));
  /* 117d19a4 call 0x117d1890 */
  push32(0x117d19a9u); f_117d1890();
  /* 117d19a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_117d19ab:;
  /* 117d19ab jne 0x117d19b1 */
  if (!C.zf) goto L_117d19b1;
L_117d19ad:;
  /* 117d19ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d19af jmp 0x117d19ff */
  goto L_117d19ff;
L_117d19b1:;
  /* 117d19b1 push edi */
  push32((uint32_t)(EDI));
  /* 117d19b2 push esi */
  push32((uint32_t)(ESI));
  /* 117d19b3 push ebx */
  push32((uint32_t)(EBX));
  /* 117d19b4 call 0x117d1870 */
  push32(0x117d19b9u); f_117d1870();
  /* 117d19b9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d19bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117d19bf jne 0x117d19cd */
  if (!C.zf) goto L_117d19cd;
  /* 117d19c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d19c3 jne 0x117d19fc */
  if (!C.zf) goto L_117d19fc;
  /* 117d19c5 push edi */
  push32((uint32_t)(EDI));
  /* 117d19c6 push eax */
  push32((uint32_t)(EAX));
  /* 117d19c7 push ebx */
  push32((uint32_t)(EBX));
  /* 117d19c8 call 0x117d1890 */
  push32(0x117d19cdu); f_117d1890();
L_117d19cd:;
  /* 117d19cd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d19cf je 0x117d19d6 */
  if (C.zf) goto L_117d19d6;
  /* 117d19d1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d19d4 jne 0x117d19fc */
  if (!C.zf) goto L_117d19fc;
L_117d19d6:;
  /* 117d19d6 push edi */
  push32((uint32_t)(EDI));
  /* 117d19d7 push esi */
  push32((uint32_t)(ESI));
  /* 117d19d8 push ebx */
  push32((uint32_t)(EBX));
  /* 117d19d9 call 0x117d1890 */
  push32(0x117d19deu); f_117d1890();
  /* 117d19de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d19e0 jne 0x117d19e5 */
  if (!C.zf) goto L_117d19e5;
  /* 117d19e2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_117d19e5:;
  /* 117d19e5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d19e9 je 0x117d19fc */
  if (C.zf) goto L_117d19fc;
  /* 117d19eb mov eax, dword ptr [0x117d69fc] */
  EAX = (r32((uint32_t)(0x117d69fc)));
  /* 117d19f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d19f2 je 0x117d19fc */
  if (C.zf) goto L_117d19fc;
  /* 117d19f4 push edi */
  push32((uint32_t)(EDI));
  /* 117d19f5 push esi */
  push32((uint32_t)(ESI));
  /* 117d19f6 push ebx */
  push32((uint32_t)(EBX));
  /* 117d19f7 call eax */
  call_ind((uint32_t)(EAX), 0x117d19f9u);
  /* 117d19f9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_117d19fc:;
  /* 117d19fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_117d19ff:;
  /* 117d19ff pop edi */
  EDI = (pop32());
  /* 117d1a00 pop esi */
  ESI = (pop32());
  /* 117d1a01 pop ebx */
  EBX = (pop32());
  /* 117d1a02 pop ebp */
  EBP = (pop32());
  /* 117d1a03 ret 0xc */
  ESPCHK(0x117d1969u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x117d1a06 (48 bytes, 15 insns) */
void f_117d1a06(void) {
  FTRACE(0x117d1a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1a06 mov eax, dword ptr [0x117d6498] */
  EAX = (r32((uint32_t)(0x117d6498)));
  /* 117d1a0b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1a0e je 0x117d1a1d */
  if (C.zf) goto L_117d1a1d;
  /* 117d1a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1a12 jne 0x117d1a22 */
  if (!C.zf) goto L_117d1a22;
  /* 117d1a14 cmp dword ptr [0x117d649c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117d649c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1a1b jne 0x117d1a22 */
  if (!C.zf) goto L_117d1a22;
L_117d1a1d:;
  /* 117d1a1d call 0x117d2375 */
  push32(0x117d1a22u); f_117d2375();
L_117d1a22:;
  /* 117d1a22 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117d1a26 call 0x117d23ae */
  push32(0x117d1a2bu); f_117d23ae();
  /* 117d1a2b push 0xff */
  push32((uint32_t)(0xffu));
  /* 117d1a30 call dword ptr [0x117d60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d60f0))), 0x117d1a36u);
  /* 117d1a36 pop ecx */
  ECX = (pop32());
  /* 117d1a37 pop ecx */
  ECX = (pop32());
  /* 117d1a38 ret  */
  ESPCHK(0x117d1a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a39 @ 0x117d1a39 (45 bytes, 12 insns) */
void f_117d1a39(void) {
  FTRACE(0x117d1a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1a39 mov eax, dword ptr [0x117d69f4] */
  EAX = (r32((uint32_t)(0x117d69f4)));
  /* 117d1a3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1a40 je 0x117d1a44 */
  if (C.zf) goto L_117d1a44;
  /* 117d1a42 call eax */
  call_ind((uint32_t)(EAX), 0x117d1a44u);
L_117d1a44:;
  /* 117d1a44 push 0x117d6010 */
  push32((uint32_t)(0x117d6010u));
  /* 117d1a49 push 0x117d6008 */
  push32((uint32_t)(0x117d6008u));
  /* 117d1a4e call 0x117d1b3d */
  push32(0x117d1a53u); f_117d1b3d();
  /* 117d1a53 push 0x117d6004 */
  push32((uint32_t)(0x117d6004u));
  /* 117d1a58 push 0x117d6000 */
  push32((uint32_t)(0x117d6000u));
  /* 117d1a5d call 0x117d1b3d */
  push32(0x117d1a62u); f_117d1b3d();
  /* 117d1a62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1a65 ret  */
  ESPCHK(0x117d1a39u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x117d1a66 (17 bytes, 6 insns) */
void f_117d1a66(void) {
  FTRACE(0x117d1a66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1a6a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 117d1a6e call 0x117d1a86 */
  push32(0x117d1a73u); f_117d1a86();
  /* 117d1a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1a76 ret  */
  ESPCHK(0x117d1a66u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a77 @ 0x117d1a77 (15 bytes, 6 insns) */
void f_117d1a77(void) {
  FTRACE(0x117d1a77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1a7d call 0x117d1a86 */
  push32(0x117d1a82u); f_117d1a86();
  /* 117d1a82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1a85 ret  */
  ESPCHK(0x117d1a77u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a86 @ 0x117d1a86 (163 bytes, 53 insns) */
void f_117d1a86(void) {
  FTRACE(0x117d1a86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1a86 push edi */
  push32((uint32_t)(EDI));
  /* 117d1a87 call 0x117d1b2b */
  push32(0x117d1a8cu); f_117d1b2b();
  /* 117d1a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1a8e pop edi */
  EDI = (pop32());
  /* 117d1a8f cmp dword ptr [0x117d64e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x117d64e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1a95 jne 0x117d1aa8 */
  if (!C.zf) goto L_117d1aa8;
  /* 117d1a97 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117d1a9b call dword ptr [0x117d5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5078))), 0x117d1aa1u);
  /* 117d1aa1 push eax */
  push32((uint32_t)(EAX));
  /* 117d1aa2 call dword ptr [0x117d5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5074))), 0x117d1aa8u);
L_117d1aa8:;
  /* 117d1aa8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1aad push ebx */
  push32((uint32_t)(EBX));
  /* 117d1aae mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 117d1ab2 mov dword ptr [0x117d64dc], edi */
  w32((uint32_t)(0x117d64dc), (EDI));
  /* 117d1ab8 mov byte ptr [0x117d64d8], bl */
  w8((uint32_t)(0x117d64d8), (BL));
  /* 117d1abe jne 0x117d1afc */
  if (!C.zf) goto L_117d1afc;
  /* 117d1ac0 mov eax, dword ptr [0x117d69f0] */
  EAX = (r32((uint32_t)(0x117d69f0)));
  /* 117d1ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1ac7 je 0x117d1aeb */
  if (C.zf) goto L_117d1aeb;
  /* 117d1ac9 mov ecx, dword ptr [0x117d69ec] */
  ECX = (r32((uint32_t)(0x117d69ec)));
  /* 117d1acf push esi */
  push32((uint32_t)(ESI));
  /* 117d1ad0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 117d1ad3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1ad5 jb 0x117d1aea */
  if (C.cf) goto L_117d1aea;
L_117d1ad7:;
  /* 117d1ad7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117d1ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1adb je 0x117d1adf */
  if (C.zf) goto L_117d1adf;
  /* 117d1add call eax */
  call_ind((uint32_t)(EAX), 0x117d1adfu);
L_117d1adf:;
  /* 117d1adf sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d1ae2 cmp esi, dword ptr [0x117d69f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x117d69f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1ae8 jae 0x117d1ad7 */
  if (!C.cf) goto L_117d1ad7;
L_117d1aea:;
  /* 117d1aea pop esi */
  ESI = (pop32());
L_117d1aeb:;
  /* 117d1aeb push 0x117d6018 */
  push32((uint32_t)(0x117d6018u));
  /* 117d1af0 push 0x117d6014 */
  push32((uint32_t)(0x117d6014u));
  /* 117d1af5 call 0x117d1b3d */
  push32(0x117d1afau); f_117d1b3d();
  /* 117d1afa pop ecx */
  ECX = (pop32());
  /* 117d1afb pop ecx */
  ECX = (pop32());
L_117d1afc:;
  /* 117d1afc push 0x117d6020 */
  push32((uint32_t)(0x117d6020u));
  /* 117d1b01 push 0x117d601c */
  push32((uint32_t)(0x117d601cu));
  /* 117d1b06 call 0x117d1b3d */
  push32(0x117d1b0bu); f_117d1b3d();
  /* 117d1b0b pop ecx */
  ECX = (pop32());
  /* 117d1b0c pop ecx */
  ECX = (pop32());
  /* 117d1b0d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117d1b0f pop ebx */
  EBX = (pop32());
  /* 117d1b10 je 0x117d1b19 */
  if (C.zf) goto L_117d1b19;
  /* 117d1b12 call 0x117d1b34 */
  push32(0x117d1b17u); f_117d1b34();
  /* 117d1b17 pop edi */
  EDI = (pop32());
  /* 117d1b18 ret  */
  ESPCHK(0x117d1a86u, _esp0);
  ESP += 4; return;
L_117d1b19:;
  /* 117d1b19 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117d1b1d mov dword ptr [0x117d64e0], edi */
  w32((uint32_t)(0x117d64e0), (EDI));
  /* 117d1b23 call dword ptr [0x117d5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5070))), 0x117d1b29u);
  /* 117d1b29 pop edi */
  EDI = (pop32());
  /* 117d1b2a ret  */
  ESPCHK(0x117d1a86u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b2b @ 0x117d1b2b (9 bytes, 4 insns) */
void f_117d1b2b(void) {
  FTRACE(0x117d1b2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1b2b push 0xd */
  push32((uint32_t)(0xdu));
  /* 117d1b2d call 0x117d2596 */
  push32(0x117d1b32u); f_117d2596();
  /* 117d1b32 pop ecx */
  ECX = (pop32());
  /* 117d1b33 ret  */
  ESPCHK(0x117d1b2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b34 @ 0x117d1b34 (9 bytes, 4 insns) */
void f_117d1b34(void) {
  FTRACE(0x117d1b34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1b34 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117d1b36 call 0x117d25f7 */
  push32(0x117d1b3bu); f_117d25f7();
  /* 117d1b3b pop ecx */
  ECX = (pop32());
  /* 117d1b3c ret  */
  ESPCHK(0x117d1b34u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b3d @ 0x117d1b3d (26 bytes, 12 insns) */
void f_117d1b3d(void) {
  FTRACE(0x117d1b3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1b3d push esi */
  push32((uint32_t)(ESI));
  /* 117d1b3e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_117d1b42:;
  /* 117d1b42 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1b46 jae 0x117d1b55 */
  if (!C.cf) goto L_117d1b55;
  /* 117d1b48 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117d1b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1b4c je 0x117d1b50 */
  if (C.zf) goto L_117d1b50;
  /* 117d1b4e call eax */
  call_ind((uint32_t)(EAX), 0x117d1b50u);
L_117d1b50:;
  /* 117d1b50 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1b53 jmp 0x117d1b42 */
  goto L_117d1b42;
L_117d1b55:;
  /* 117d1b55 pop esi */
  ESI = (pop32());
  /* 117d1b56 ret  */
  ESPCHK(0x117d1b3du, _esp0);
  ESP += 4; return;
}

/* FUN_10001b57 @ 0x117d1b57 (84 bytes, 32 insns) */
void f_117d1b57(void) {
  FTRACE(0x117d1b57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1b57 push esi */
  push32((uint32_t)(ESI));
  /* 117d1b58 call 0x117d2501 */
  push32(0x117d1b5du); f_117d2501();
  /* 117d1b5d call dword ptr [0x117d5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5084))), 0x117d1b63u);
  /* 117d1b63 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1b66 mov dword ptr [0x117d60f4], eax */
  w32((uint32_t)(0x117d60f4), (EAX));
  /* 117d1b6b je 0x117d1ba7 */
  if (C.zf) goto L_117d1ba7;
  /* 117d1b6d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 117d1b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1b71 call 0x117d260c */
  push32(0x117d1b76u); f_117d260c();
  /* 117d1b76 mov esi, eax */
  ESI = (EAX);
  /* 117d1b78 pop ecx */
  ECX = (pop32());
  /* 117d1b79 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d1b7b pop ecx */
  ECX = (pop32());
  /* 117d1b7c je 0x117d1ba7 */
  if (C.zf) goto L_117d1ba7;
  /* 117d1b7e push esi */
  push32((uint32_t)(ESI));
  /* 117d1b7f push dword ptr [0x117d60f4] */
  push32((uint32_t)(r32((uint32_t)(0x117d60f4))));
  /* 117d1b85 call dword ptr [0x117d5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5080))), 0x117d1b8bu);
  /* 117d1b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1b8d je 0x117d1ba7 */
  if (C.zf) goto L_117d1ba7;
  /* 117d1b8f push esi */
  push32((uint32_t)(ESI));
  /* 117d1b90 call 0x117d1bc9 */
  push32(0x117d1b95u); f_117d1bc9();
  /* 117d1b95 pop ecx */
  ECX = (pop32());
  /* 117d1b96 call dword ptr [0x117d507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d507c))), 0x117d1b9cu);
  /* 117d1b9c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 117d1ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d1ba2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 117d1ba4 pop eax */
  EAX = (pop32());
  /* 117d1ba5 pop esi */
  ESI = (pop32());
  /* 117d1ba6 ret  */
  ESPCHK(0x117d1b57u, _esp0);
  ESP += 4; return;
L_117d1ba7:;
  /* 117d1ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d1ba9 pop esi */
  ESI = (pop32());
  /* 117d1baa ret  */
  ESPCHK(0x117d1b57u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bab @ 0x117d1bab (30 bytes, 8 insns) */
void f_117d1bab(void) {
  FTRACE(0x117d1babu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1bab call 0x117d252a */
  push32(0x117d1bb0u); f_117d252a();
  /* 117d1bb0 mov eax, dword ptr [0x117d60f4] */
  EAX = (r32((uint32_t)(0x117d60f4)));
  /* 117d1bb5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1bb8 je 0x117d1bc8 */
  if (C.zf) goto L_117d1bc8;
  /* 117d1bba push eax */
  push32((uint32_t)(EAX));
  /* 117d1bbb call dword ptr [0x117d5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5088))), 0x117d1bc1u);
  /* 117d1bc1 or dword ptr [0x117d60f4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x117d60f4)))|(0xffffffffu); w32((uint32_t)(0x117d60f4), (_r)); fl_logic(_r,32); }
L_117d1bc8:;
  /* 117d1bc8 ret  */
  ESPCHK(0x117d1babu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bc9 @ 0x117d1bc9 (19 bytes, 4 insns) */
void f_117d1bc9(void) {
  FTRACE(0x117d1bc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1bc9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d1bcd mov dword ptr [eax + 0x50], 0x117d6270 */
  w32((uint32_t)(EAX + 0x50), (0x117d6270u));
  /* 117d1bd4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 117d1bdb ret  */
  ESPCHK(0x117d1bc9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bdc @ 0x117d1bdc (160 bytes, 62 insns) */
void f_117d1bdc(void) {
  FTRACE(0x117d1bdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1bdc mov eax, dword ptr [0x117d60f4] */
  EAX = (r32((uint32_t)(0x117d60f4)));
  /* 117d1be1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1be4 je 0x117d1c7b */
  if (C.zf) goto L_117d1c7b;
  /* 117d1bea push esi */
  push32((uint32_t)(ESI));
  /* 117d1beb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117d1bef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d1bf1 jne 0x117d1c00 */
  if (!C.zf) goto L_117d1c00;
  /* 117d1bf3 push eax */
  push32((uint32_t)(EAX));
  /* 117d1bf4 call dword ptr [0x117d5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5000))), 0x117d1bfau);
  /* 117d1bfa mov esi, eax */
  ESI = (EAX);
  /* 117d1bfc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d1bfe je 0x117d1c6c */
  if (C.zf) goto L_117d1c6c;
L_117d1c00:;
  /* 117d1c00 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 117d1c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1c05 je 0x117d1c0e */
  if (C.zf) goto L_117d1c0e;
  /* 117d1c07 push eax */
  push32((uint32_t)(EAX));
  /* 117d1c08 call 0x117d2699 */
  push32(0x117d1c0du); f_117d2699();
  /* 117d1c0d pop ecx */
  ECX = (pop32());
L_117d1c0e:;
  /* 117d1c0e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 117d1c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1c13 je 0x117d1c1c */
  if (C.zf) goto L_117d1c1c;
  /* 117d1c15 push eax */
  push32((uint32_t)(EAX));
  /* 117d1c16 call 0x117d2699 */
  push32(0x117d1c1bu); f_117d2699();
  /* 117d1c1b pop ecx */
  ECX = (pop32());
L_117d1c1c:;
  /* 117d1c1c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 117d1c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1c21 je 0x117d1c2a */
  if (C.zf) goto L_117d1c2a;
  /* 117d1c23 push eax */
  push32((uint32_t)(EAX));
  /* 117d1c24 call 0x117d2699 */
  push32(0x117d1c29u); f_117d2699();
  /* 117d1c29 pop ecx */
  ECX = (pop32());
L_117d1c2a:;
  /* 117d1c2a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 117d1c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1c2f je 0x117d1c38 */
  if (C.zf) goto L_117d1c38;
  /* 117d1c31 push eax */
  push32((uint32_t)(EAX));
  /* 117d1c32 call 0x117d2699 */
  push32(0x117d1c37u); f_117d2699();
  /* 117d1c37 pop ecx */
  ECX = (pop32());
L_117d1c38:;
  /* 117d1c38 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 117d1c3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1c3d je 0x117d1c46 */
  if (C.zf) goto L_117d1c46;
  /* 117d1c3f push eax */
  push32((uint32_t)(EAX));
  /* 117d1c40 call 0x117d2699 */
  push32(0x117d1c45u); f_117d2699();
  /* 117d1c45 pop ecx */
  ECX = (pop32());
L_117d1c46:;
  /* 117d1c46 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 117d1c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1c4b je 0x117d1c54 */
  if (C.zf) goto L_117d1c54;
  /* 117d1c4d push eax */
  push32((uint32_t)(EAX));
  /* 117d1c4e call 0x117d2699 */
  push32(0x117d1c53u); f_117d2699();
  /* 117d1c53 pop ecx */
  ECX = (pop32());
L_117d1c54:;
  /* 117d1c54 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 117d1c57 cmp eax, 0x117d6270 */
  { uint32_t _a=(EAX),_b=(0x117d6270u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1c5c je 0x117d1c65 */
  if (C.zf) goto L_117d1c65;
  /* 117d1c5e push eax */
  push32((uint32_t)(EAX));
  /* 117d1c5f call 0x117d2699 */
  push32(0x117d1c64u); f_117d2699();
  /* 117d1c64 pop ecx */
  ECX = (pop32());
L_117d1c65:;
  /* 117d1c65 push esi */
  push32((uint32_t)(ESI));
  /* 117d1c66 call 0x117d2699 */
  push32(0x117d1c6bu); f_117d2699();
  /* 117d1c6b pop ecx */
  ECX = (pop32());
L_117d1c6c:;
  /* 117d1c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 117d1c6e push dword ptr [0x117d60f4] */
  push32((uint32_t)(r32((uint32_t)(0x117d60f4))));
  /* 117d1c74 call dword ptr [0x117d5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5080))), 0x117d1c7au);
  /* 117d1c7a pop esi */
  ESI = (pop32());
L_117d1c7b:;
  /* 117d1c7b ret  */
  ESPCHK(0x117d1bdcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001c7c @ 0x117d1c7c (444 bytes, 150 insns) */
void f_117d1c7c(void) {
  FTRACE(0x117d1c7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1c7c push ebp */
  push32((uint32_t)(EBP));
  /* 117d1c7d mov ebp, esp */
  EBP = (ESP);
  /* 117d1c7f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d1c82 push ebx */
  push32((uint32_t)(EBX));
  /* 117d1c83 push esi */
  push32((uint32_t)(ESI));
  /* 117d1c84 push edi */
  push32((uint32_t)(EDI));
  /* 117d1c85 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117d1c8a call 0x117d26e1 */
  push32(0x117d1c8fu); f_117d26e1();
  /* 117d1c8f mov esi, eax */
  ESI = (EAX);
  /* 117d1c91 pop ecx */
  ECX = (pop32());
  /* 117d1c92 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d1c94 jne 0x117d1c9e */
  if (!C.zf) goto L_117d1c9e;
  /* 117d1c96 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 117d1c98 call 0x117d1a06 */
  push32(0x117d1c9du); f_117d1a06();
  /* 117d1c9d pop ecx */
  ECX = (pop32());
L_117d1c9e:;
  /* 117d1c9e mov dword ptr [0x117d68e0], esi */
  w32((uint32_t)(0x117d68e0), (ESI));
  /* 117d1ca4 mov dword ptr [0x117d69e0], 0x20 */
  w32((uint32_t)(0x117d69e0), (0x20u));
  /* 117d1cae lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_117d1cb4:;
  /* 117d1cb4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1cb6 jae 0x117d1cd6 */
  if (!C.cf) goto L_117d1cd6;
  /* 117d1cb8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117d1cbc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 117d1cbf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 117d1cc3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 117d1cc7 mov eax, dword ptr [0x117d68e0] */
  EAX = (r32((uint32_t)(0x117d68e0)));
  /* 117d1ccc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1ccf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1cd4 jmp 0x117d1cb4 */
  goto L_117d1cb4;
L_117d1cd6:;
  /* 117d1cd6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 117d1cd9 push eax */
  push32((uint32_t)(EAX));
  /* 117d1cda call dword ptr [0x117d509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d509c))), 0x117d1ce0u);
  /* 117d1ce0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117d1ce5 je 0x117d1dbc */
  if (C.zf) goto L_117d1dbc;
  /* 117d1ceb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117d1cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1cf0 je 0x117d1dbc */
  if (C.zf) goto L_117d1dbc;
  /* 117d1cf6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 117d1cf8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 117d1cfb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 117d1cfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117d1d01 mov eax, 0x800 */
  EAX = (0x800u);
  /* 117d1d06 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1d08 jl 0x117d1d0c */
  if ((C.sf!=C.of)) goto L_117d1d0c;
  /* 117d1d0a mov edi, eax */
  EDI = (EAX);
L_117d1d0c:;
  /* 117d1d0c cmp dword ptr [0x117d69e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x117d69e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1d12 jge 0x117d1d6a */
  if ((C.sf==C.of)) goto L_117d1d6a;
  /* 117d1d14 mov esi, 0x117d68e4 */
  ESI = (0x117d68e4u);
L_117d1d19:;
  /* 117d1d19 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117d1d1e call 0x117d26e1 */
  push32(0x117d1d23u); f_117d26e1();
  /* 117d1d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1d25 pop ecx */
  ECX = (pop32());
  /* 117d1d26 je 0x117d1d64 */
  if (C.zf) goto L_117d1d64;
  /* 117d1d28 add dword ptr [0x117d69e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x117d69e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x117d69e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 117d1d2f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 117d1d31 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_117d1d37:;
  /* 117d1d37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1d39 jae 0x117d1d57 */
  if (!C.cf) goto L_117d1d57;
  /* 117d1d3b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 117d1d3f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117d1d42 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117d1d46 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 117d1d4a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 117d1d4c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1d4f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1d55 jmp 0x117d1d37 */
  goto L_117d1d37;
L_117d1d57:;
  /* 117d1d57 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1d5a cmp dword ptr [0x117d69e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x117d69e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1d60 jl 0x117d1d19 */
  if ((C.sf!=C.of)) goto L_117d1d19;
  /* 117d1d62 jmp 0x117d1d6a */
  goto L_117d1d6a;
L_117d1d64:;
  /* 117d1d64 mov edi, dword ptr [0x117d69e0] */
  EDI = (r32((uint32_t)(0x117d69e0)));
L_117d1d6a:;
  /* 117d1d6a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117d1d6c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d1d6e jle 0x117d1dbc */
  if ((C.zf||C.sf!=C.of)) goto L_117d1dbc;
L_117d1d70:;
  /* 117d1d70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d1d73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117d1d75 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1d78 je 0x117d1db2 */
  if (C.zf) goto L_117d1db2;
  /* 117d1d7a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 117d1d7c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 117d1d7e je 0x117d1db2 */
  if (C.zf) goto L_117d1db2;
  /* 117d1d80 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 117d1d82 jne 0x117d1d8f */
  if (!C.zf) goto L_117d1d8f;
  /* 117d1d84 push ecx */
  push32((uint32_t)(ECX));
  /* 117d1d85 call dword ptr [0x117d5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5098))), 0x117d1d8bu);
  /* 117d1d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1d8d je 0x117d1db2 */
  if (C.zf) goto L_117d1db2;
L_117d1d8f:;
  /* 117d1d8f mov ecx, esi */
  ECX = (ESI);
  /* 117d1d91 mov eax, esi */
  EAX = (ESI);
  /* 117d1d93 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117d1d96 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117d1d99 mov ecx, dword ptr [ecx*4 + 0x117d68e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x117d68e0)));
  /* 117d1da0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 117d1da3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 117d1da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d1da9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 117d1dab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117d1dad mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 117d1daf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_117d1db2:;
  /* 117d1db2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 117d1db6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d1db7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117d1db8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1dba jl 0x117d1d70 */
  if ((C.sf!=C.of)) goto L_117d1d70;
L_117d1dbc:;
  /* 117d1dbc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117d1dbe:;
  /* 117d1dbe mov ecx, dword ptr [0x117d68e0] */
  ECX = (r32((uint32_t)(0x117d68e0)));
  /* 117d1dc4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 117d1dc7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1dcb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 117d1dce jne 0x117d1e1d */
  if (!C.zf) goto L_117d1e1d;
  /* 117d1dd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117d1dd2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 117d1dd6 jne 0x117d1ddd */
  if (!C.zf) goto L_117d1ddd;
  /* 117d1dd8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117d1dda pop eax */
  EAX = (pop32());
  /* 117d1ddb jmp 0x117d1de7 */
  goto L_117d1de7;
L_117d1ddd:;
  /* 117d1ddd mov eax, ebx */
  EAX = (EBX);
  /* 117d1ddf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117d1de0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117d1de2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d1de4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117d1de7:;
  /* 117d1de7 push eax */
  push32((uint32_t)(EAX));
  /* 117d1de8 call dword ptr [0x117d508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d508c))), 0x117d1deeu);
  /* 117d1dee mov edi, eax */
  EDI = (EAX);
  /* 117d1df0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1df3 je 0x117d1e0c */
  if (C.zf) goto L_117d1e0c;
  /* 117d1df5 push edi */
  push32((uint32_t)(EDI));
  /* 117d1df6 call dword ptr [0x117d5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5098))), 0x117d1dfcu);
  /* 117d1dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1dfe je 0x117d1e0c */
  if (C.zf) goto L_117d1e0c;
  /* 117d1e00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d1e05 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117d1e07 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e0a jne 0x117d1e12 */
  if (!C.zf) goto L_117d1e12;
L_117d1e0c:;
  /* 117d1e0c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117d1e10 jmp 0x117d1e21 */
  goto L_117d1e21;
L_117d1e12:;
  /* 117d1e12 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e15 jne 0x117d1e21 */
  if (!C.zf) goto L_117d1e21;
  /* 117d1e17 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117d1e1b jmp 0x117d1e21 */
  goto L_117d1e21;
L_117d1e1d:;
  /* 117d1e1d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_117d1e21:;
  /* 117d1e21 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117d1e22 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e25 jl 0x117d1dbe */
  if ((C.sf!=C.of)) goto L_117d1dbe;
  /* 117d1e27 push dword ptr [0x117d69e0] */
  push32((uint32_t)(r32((uint32_t)(0x117d69e0))));
  /* 117d1e2d call dword ptr [0x117d5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5094))), 0x117d1e33u);
  /* 117d1e33 pop edi */
  EDI = (pop32());
  /* 117d1e34 pop esi */
  ESI = (pop32());
  /* 117d1e35 pop ebx */
  EBX = (pop32());
  /* 117d1e36 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d1e37 ret  */
  ESPCHK(0x117d1c7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e38 @ 0x117d1e38 (84 bytes, 33 insns) */
void f_117d1e38(void) {
  FTRACE(0x117d1e38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1e38 push ebx */
  push32((uint32_t)(EBX));
  /* 117d1e39 push esi */
  push32((uint32_t)(ESI));
  /* 117d1e3a push edi */
  push32((uint32_t)(EDI));
  /* 117d1e3b mov esi, 0x117d68e0 */
  ESI = (0x117d68e0u);
L_117d1e40:;
  /* 117d1e40 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117d1e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d1e44 je 0x117d1e7d */
  if (C.zf) goto L_117d1e7d;
  /* 117d1e46 mov edi, eax */
  EDI = (EAX);
  /* 117d1e48 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1e4d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e4f jae 0x117d1e72 */
  if (!C.cf) goto L_117d1e72;
  /* 117d1e51 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_117d1e54:;
  /* 117d1e54 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e58 je 0x117d1e61 */
  if (C.zf) goto L_117d1e61;
  /* 117d1e5a push ebx */
  push32((uint32_t)(EBX));
  /* 117d1e5b call dword ptr [0x117d50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50a0))), 0x117d1e61u);
L_117d1e61:;
  /* 117d1e61 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117d1e63 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1e66 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1e6b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1e6e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e70 jb 0x117d1e54 */
  if (C.cf) goto L_117d1e54;
L_117d1e72:;
  /* 117d1e72 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d1e74 call 0x117d2699 */
  push32(0x117d1e79u); f_117d2699();
  /* 117d1e79 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 117d1e7c pop ecx */
  ECX = (pop32());
L_117d1e7d:;
  /* 117d1e7d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1e80 cmp esi, 0x117d69e0 */
  { uint32_t _a=(ESI),_b=(0x117d69e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e86 jl 0x117d1e40 */
  if ((C.sf!=C.of)) goto L_117d1e40;
  /* 117d1e88 pop edi */
  EDI = (pop32());
  /* 117d1e89 pop esi */
  ESI = (pop32());
  /* 117d1e8a pop ebx */
  EBX = (pop32());
  /* 117d1e8b ret  */
  ESPCHK(0x117d1e38u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e8c @ 0x117d1e8c (185 bytes, 71 insns) */
void f_117d1e8c(void) {
  FTRACE(0x117d1e8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1e8c push ebx */
  push32((uint32_t)(EBX));
  /* 117d1e8d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d1e8f cmp dword ptr [0x117d69e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117d69e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1e95 push esi */
  push32((uint32_t)(ESI));
  /* 117d1e96 push edi */
  push32((uint32_t)(EDI));
  /* 117d1e97 jne 0x117d1e9e */
  if (!C.zf) goto L_117d1e9e;
  /* 117d1e99 call 0x117d2cb3 */
  push32(0x117d1e9eu); f_117d2cb3();
L_117d1e9e:;
  /* 117d1e9e mov esi, dword ptr [0x117d6490] */
  ESI = (r32((uint32_t)(0x117d6490)));
  /* 117d1ea4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_117d1ea6:;
  /* 117d1ea6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d1ea8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d1eaa je 0x117d1ebe */
  if (C.zf) goto L_117d1ebe;
  /* 117d1eac cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d1eae je 0x117d1eb1 */
  if (C.zf) goto L_117d1eb1;
  /* 117d1eb0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117d1eb1:;
  /* 117d1eb1 push esi */
  push32((uint32_t)(ESI));
  /* 117d1eb2 call 0x117d2860 */
  push32(0x117d1eb7u); f_117d2860();
  /* 117d1eb7 pop ecx */
  ECX = (pop32());
  /* 117d1eb8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 117d1ebc jmp 0x117d1ea6 */
  goto L_117d1ea6;
L_117d1ebe:;
  /* 117d1ebe lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 117d1ec5 push eax */
  push32((uint32_t)(EAX));
  /* 117d1ec6 call 0x117d26e1 */
  push32(0x117d1ecbu); f_117d26e1();
  /* 117d1ecb mov esi, eax */
  ESI = (EAX);
  /* 117d1ecd pop ecx */
  ECX = (pop32());
  /* 117d1ece cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1ed0 mov dword ptr [0x117d64c0], esi */
  w32((uint32_t)(0x117d64c0), (ESI));
  /* 117d1ed6 jne 0x117d1ee0 */
  if (!C.zf) goto L_117d1ee0;
  /* 117d1ed8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117d1eda call 0x117d1a06 */
  push32(0x117d1edfu); f_117d1a06();
  /* 117d1edf pop ecx */
  ECX = (pop32());
L_117d1ee0:;
  /* 117d1ee0 mov edi, dword ptr [0x117d6490] */
  EDI = (r32((uint32_t)(0x117d6490)));
  /* 117d1ee6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d1ee8 je 0x117d1f23 */
  if (C.zf) goto L_117d1f23;
  /* 117d1eea push ebp */
  push32((uint32_t)(EBP));
L_117d1eeb:;
  /* 117d1eeb push edi */
  push32((uint32_t)(EDI));
  /* 117d1eec call 0x117d2860 */
  push32(0x117d1ef1u); f_117d2860();
  /* 117d1ef1 mov ebp, eax */
  EBP = (EAX);
  /* 117d1ef3 pop ecx */
  ECX = (pop32());
  /* 117d1ef4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 117d1ef5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d1ef8 je 0x117d1f1c */
  if (C.zf) goto L_117d1f1c;
  /* 117d1efa push ebp */
  push32((uint32_t)(EBP));
  /* 117d1efb call 0x117d26e1 */
  push32(0x117d1f00u); f_117d26e1();
  /* 117d1f00 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1f02 pop ecx */
  ECX = (pop32());
  /* 117d1f03 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 117d1f05 jne 0x117d1f0f */
  if (!C.zf) goto L_117d1f0f;
  /* 117d1f07 push 9 */
  push32((uint32_t)(0x9u));
  /* 117d1f09 call 0x117d1a06 */
  push32(0x117d1f0eu); f_117d1a06();
  /* 117d1f0e pop ecx */
  ECX = (pop32());
L_117d1f0f:;
  /* 117d1f0f push edi */
  push32((uint32_t)(EDI));
  /* 117d1f10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d1f12 call 0x117d2770 */
  push32(0x117d1f17u); f_117d2770();
  /* 117d1f17 pop ecx */
  ECX = (pop32());
  /* 117d1f18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1f1b pop ecx */
  ECX = (pop32());
L_117d1f1c:;
  /* 117d1f1c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1f1e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d1f20 jne 0x117d1eeb */
  if (!C.zf) goto L_117d1eeb;
  /* 117d1f22 pop ebp */
  EBP = (pop32());
L_117d1f23:;
  /* 117d1f23 push dword ptr [0x117d6490] */
  push32((uint32_t)(r32((uint32_t)(0x117d6490))));
  /* 117d1f29 call 0x117d2699 */
  push32(0x117d1f2eu); f_117d2699();
  /* 117d1f2e pop ecx */
  ECX = (pop32());
  /* 117d1f2f mov dword ptr [0x117d6490], ebx */
  w32((uint32_t)(0x117d6490), (EBX));
  /* 117d1f35 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 117d1f37 pop edi */
  EDI = (pop32());
  /* 117d1f38 pop esi */
  ESI = (pop32());
  /* 117d1f39 mov dword ptr [0x117d69e4], 1 */
  w32((uint32_t)(0x117d69e4), (0x1u));
  /* 117d1f43 pop ebx */
  EBX = (pop32());
  /* 117d1f44 ret  */
  ESPCHK(0x117d1e8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f45 @ 0x117d1f45 (153 bytes, 62 insns) */
void f_117d1f45(void) {
  FTRACE(0x117d1f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1f45 push ebp */
  push32((uint32_t)(EBP));
  /* 117d1f46 mov ebp, esp */
  EBP = (ESP);
  /* 117d1f48 push ecx */
  push32((uint32_t)(ECX));
  /* 117d1f49 push ecx */
  push32((uint32_t)(ECX));
  /* 117d1f4a push ebx */
  push32((uint32_t)(EBX));
  /* 117d1f4b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d1f4d cmp dword ptr [0x117d69e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117d69e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1f53 push esi */
  push32((uint32_t)(ESI));
  /* 117d1f54 push edi */
  push32((uint32_t)(EDI));
  /* 117d1f55 jne 0x117d1f5c */
  if (!C.zf) goto L_117d1f5c;
  /* 117d1f57 call 0x117d2cb3 */
  push32(0x117d1f5cu); f_117d2cb3();
L_117d1f5c:;
  /* 117d1f5c mov esi, 0x117d64e4 */
  ESI = (0x117d64e4u);
  /* 117d1f61 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117d1f66 push esi */
  push32((uint32_t)(ESI));
  /* 117d1f67 push ebx */
  push32((uint32_t)(EBX));
  /* 117d1f68 call dword ptr [0x117d50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50a4))), 0x117d1f6eu);
  /* 117d1f6e mov eax, dword ptr [0x117d69f8] */
  EAX = (r32((uint32_t)(0x117d69f8)));
  /* 117d1f73 mov dword ptr [0x117d64d0], esi */
  w32((uint32_t)(0x117d64d0), (ESI));
  /* 117d1f79 mov edi, esi */
  EDI = (ESI);
  /* 117d1f7b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d1f7d je 0x117d1f81 */
  if (C.zf) goto L_117d1f81;
  /* 117d1f7f mov edi, eax */
  EDI = (EAX);
L_117d1f81:;
  /* 117d1f81 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117d1f84 push eax */
  push32((uint32_t)(EAX));
  /* 117d1f85 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 117d1f88 push eax */
  push32((uint32_t)(EAX));
  /* 117d1f89 push ebx */
  push32((uint32_t)(EBX));
  /* 117d1f8a push ebx */
  push32((uint32_t)(EBX));
  /* 117d1f8b push edi */
  push32((uint32_t)(EDI));
  /* 117d1f8c call 0x117d1fde */
  push32(0x117d1f91u); f_117d1fde();
  /* 117d1f91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117d1f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d1f97 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 117d1f9a push eax */
  push32((uint32_t)(EAX));
  /* 117d1f9b call 0x117d26e1 */
  push32(0x117d1fa0u); f_117d26e1();
  /* 117d1fa0 mov esi, eax */
  ESI = (EAX);
  /* 117d1fa2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1fa5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d1fa7 jne 0x117d1fb1 */
  if (!C.zf) goto L_117d1fb1;
  /* 117d1fa9 push 8 */
  push32((uint32_t)(0x8u));
  /* 117d1fab call 0x117d1a06 */
  push32(0x117d1fb0u); f_117d1a06();
  /* 117d1fb0 pop ecx */
  ECX = (pop32());
L_117d1fb1:;
  /* 117d1fb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117d1fb4 push eax */
  push32((uint32_t)(EAX));
  /* 117d1fb5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 117d1fb8 push eax */
  push32((uint32_t)(EAX));
  /* 117d1fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d1fbc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 117d1fbf push eax */
  push32((uint32_t)(EAX));
  /* 117d1fc0 push esi */
  push32((uint32_t)(ESI));
  /* 117d1fc1 push edi */
  push32((uint32_t)(EDI));
  /* 117d1fc2 call 0x117d1fde */
  push32(0x117d1fc7u); f_117d1fde();
  /* 117d1fc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d1fca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d1fcd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117d1fce mov dword ptr [0x117d64b8], esi */
  w32((uint32_t)(0x117d64b8), (ESI));
  /* 117d1fd4 pop edi */
  EDI = (pop32());
  /* 117d1fd5 pop esi */
  ESI = (pop32());
  /* 117d1fd6 mov dword ptr [0x117d64b4], eax */
  w32((uint32_t)(0x117d64b4), (EAX));
  /* 117d1fdb pop ebx */
  EBX = (pop32());
  /* 117d1fdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d1fdd ret  */
  ESPCHK(0x117d1f45u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fde @ 0x117d1fde (436 bytes, 187 insns) */
void f_117d1fde(void) {
  FTRACE(0x117d1fdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d1fde push ebp */
  push32((uint32_t)(EBP));
  /* 117d1fdf mov ebp, esp */
  EBP = (ESP);
  /* 117d1fe1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117d1fe4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117d1fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 117d1fe8 push esi */
  push32((uint32_t)(ESI));
  /* 117d1fe9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117d1fec mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 117d1fef push edi */
  push32((uint32_t)(EDI));
  /* 117d1ff0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 117d1ff3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 117d1ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d1ffc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d1ffe je 0x117d2008 */
  if (C.zf) goto L_117d2008;
  /* 117d2000 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 117d2002 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2005 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117d2008:;
  /* 117d2008 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d200b jne 0x117d2051 */
  if (!C.zf) goto L_117d2051;
L_117d200d:;
  /* 117d200d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 117d2010 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2011 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2014 je 0x117d203f */
  if (C.zf) goto L_117d203f;
  /* 117d2016 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d2018 je 0x117d203f */
  if (C.zf) goto L_117d203f;
  /* 117d201a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 117d201d test byte ptr [edx + 0x117d67c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x117d67c1)))&(0x4u); fl_logic(_r,8); }
  /* 117d2024 je 0x117d2032 */
  if (C.zf) goto L_117d2032;
  /* 117d2026 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d2028 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d202a je 0x117d2032 */
  if (C.zf) goto L_117d2032;
  /* 117d202c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d202e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117d2030 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d2031 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117d2032:;
  /* 117d2032 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d2034 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2036 je 0x117d200d */
  if (C.zf) goto L_117d200d;
  /* 117d2038 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d203a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117d203c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d203d jmp 0x117d200d */
  goto L_117d200d;
L_117d203f:;
  /* 117d203f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d2041 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2043 je 0x117d2049 */
  if (C.zf) goto L_117d2049;
  /* 117d2045 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 117d2048 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117d2049:;
  /* 117d2049 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d204c jne 0x117d2094 */
  if (!C.zf) goto L_117d2094;
  /* 117d204e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d204f jmp 0x117d2094 */
  goto L_117d2094;
L_117d2051:;
  /* 117d2051 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d2053 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2055 je 0x117d205c */
  if (C.zf) goto L_117d205c;
  /* 117d2057 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d2059 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117d205b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117d205c:;
  /* 117d205c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d205e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d205f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 117d2062 test byte ptr [ebx + 0x117d67c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x117d67c1)))&(0x4u); fl_logic(_r,8); }
  /* 117d2069 je 0x117d2077 */
  if (C.zf) goto L_117d2077;
  /* 117d206b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d206d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d206f je 0x117d2076 */
  if (C.zf) goto L_117d2076;
  /* 117d2071 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 117d2073 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 117d2075 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117d2076:;
  /* 117d2076 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117d2077:;
  /* 117d2077 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d207a je 0x117d2085 */
  if (C.zf) goto L_117d2085;
  /* 117d207c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d207e je 0x117d2089 */
  if (C.zf) goto L_117d2089;
  /* 117d2080 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2083 jne 0x117d2051 */
  if (!C.zf) goto L_117d2051;
L_117d2085:;
  /* 117d2085 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d2087 jne 0x117d208c */
  if (!C.zf) goto L_117d208c;
L_117d2089:;
  /* 117d2089 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117d208a jmp 0x117d2094 */
  goto L_117d2094;
L_117d208c:;
  /* 117d208c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d208e je 0x117d2094 */
  if (C.zf) goto L_117d2094;
  /* 117d2090 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_117d2094:;
  /* 117d2094 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_117d2098:;
  /* 117d2098 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d209b je 0x117d2181 */
  if (C.zf) goto L_117d2181;
L_117d20a1:;
  /* 117d20a1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d20a3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d20a6 je 0x117d20ad */
  if (C.zf) goto L_117d20ad;
  /* 117d20a8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d20ab jne 0x117d20b0 */
  if (!C.zf) goto L_117d20b0;
L_117d20ad:;
  /* 117d20ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d20ae jmp 0x117d20a1 */
  goto L_117d20a1;
L_117d20b0:;
  /* 117d20b0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d20b3 je 0x117d2181 */
  if (C.zf) goto L_117d2181;
  /* 117d20b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d20bb je 0x117d20c5 */
  if (C.zf) goto L_117d20c5;
  /* 117d20bd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 117d20bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d20c2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117d20c5:;
  /* 117d20c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117d20c8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_117d20ca:;
  /* 117d20ca mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 117d20d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117d20d3:;
  /* 117d20d3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d20d6 jne 0x117d20dc */
  if (!C.zf) goto L_117d20dc;
  /* 117d20d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d20d9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117d20da jmp 0x117d20d3 */
  goto L_117d20d3;
L_117d20dc:;
  /* 117d20dc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d20df jne 0x117d210d */
  if (!C.zf) goto L_117d210d;
  /* 117d20e1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 117d20e4 jne 0x117d210b */
  if (!C.zf) goto L_117d210b;
  /* 117d20e6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d20e8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d20eb je 0x117d20fa */
  if (C.zf) goto L_117d20fa;
  /* 117d20ed cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d20f1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 117d20f4 jne 0x117d20fa */
  if (!C.zf) goto L_117d20fa;
  /* 117d20f6 mov eax, edx */
  EAX = (EDX);
  /* 117d20f8 jmp 0x117d20fd */
  goto L_117d20fd;
L_117d20fa:;
  /* 117d20fa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_117d20fd:;
  /* 117d20fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 117d2100 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2102 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2105 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 117d2108 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_117d210b:;
  /* 117d210b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_117d210d:;
  /* 117d210d mov edx, ebx */
  EDX = (EBX);
  /* 117d210f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117d2110 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117d2112 je 0x117d2122 */
  if (C.zf) goto L_117d2122;
  /* 117d2114 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_117d2115:;
  /* 117d2115 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2117 je 0x117d211d */
  if (C.zf) goto L_117d211d;
  /* 117d2119 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 117d211c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117d211d:;
  /* 117d211d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d211f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117d2120 jne 0x117d2115 */
  if (!C.zf) goto L_117d2115;
L_117d2122:;
  /* 117d2122 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d2124 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d2126 je 0x117d2172 */
  if (C.zf) goto L_117d2172;
  /* 117d2128 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d212c jne 0x117d2138 */
  if (!C.zf) goto L_117d2138;
  /* 117d212e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2131 je 0x117d2172 */
  if (C.zf) goto L_117d2172;
  /* 117d2133 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2136 je 0x117d2172 */
  if (C.zf) goto L_117d2172;
L_117d2138:;
  /* 117d2138 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d213c je 0x117d216c */
  if (C.zf) goto L_117d216c;
  /* 117d213e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2140 je 0x117d215b */
  if (C.zf) goto L_117d215b;
  /* 117d2142 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 117d2145 test byte ptr [ebx + 0x117d67c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x117d67c1)))&(0x4u); fl_logic(_r,8); }
  /* 117d214c je 0x117d2154 */
  if (C.zf) goto L_117d2154;
  /* 117d214e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117d2150 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d2151 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2152 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_117d2154:;
  /* 117d2154 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117d2156 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117d2158 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d2159 jmp 0x117d216a */
  goto L_117d216a;
L_117d215b:;
  /* 117d215b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 117d215e test byte ptr [edx + 0x117d67c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x117d67c1)))&(0x4u); fl_logic(_r,8); }
  /* 117d2165 je 0x117d216a */
  if (C.zf) goto L_117d216a;
  /* 117d2167 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2168 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_117d216a:;
  /* 117d216a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_117d216c:;
  /* 117d216c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d216d jmp 0x117d20ca */
  goto L_117d20ca;
L_117d2172:;
  /* 117d2172 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2174 je 0x117d217a */
  if (C.zf) goto L_117d217a;
  /* 117d2176 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 117d2179 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117d217a:;
  /* 117d217a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117d217c jmp 0x117d2098 */
  goto L_117d2098;
L_117d2181:;
  /* 117d2181 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d2183 je 0x117d2188 */
  if (C.zf) goto L_117d2188;
  /* 117d2185 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_117d2188:;
  /* 117d2188 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117d218b pop edi */
  EDI = (pop32());
  /* 117d218c pop esi */
  ESI = (pop32());
  /* 117d218d pop ebx */
  EBX = (pop32());
  /* 117d218e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 117d2190 pop ebp */
  EBP = (pop32());
  /* 117d2191 ret  */
  ESPCHK(0x117d1fdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002192 @ 0x117d2192 (306 bytes, 132 insns) */
void f_117d2192(void) {
  FTRACE(0x117d2192u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2192 push ecx */
  push32((uint32_t)(ECX));
  /* 117d2193 push ecx */
  push32((uint32_t)(ECX));
  /* 117d2194 mov eax, dword ptr [0x117d65e8] */
  EAX = (r32((uint32_t)(0x117d65e8)));
  /* 117d2199 push ebx */
  push32((uint32_t)(EBX));
  /* 117d219a push ebp */
  push32((uint32_t)(EBP));
  /* 117d219b mov ebp, dword ptr [0x117d5058] */
  EBP = (r32((uint32_t)(0x117d5058)));
  /* 117d21a1 push esi */
  push32((uint32_t)(ESI));
  /* 117d21a2 push edi */
  push32((uint32_t)(EDI));
  /* 117d21a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d21a5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117d21a7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d21a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d21ab jne 0x117d21e0 */
  if (!C.zf) goto L_117d21e0;
  /* 117d21ad call ebp */
  call_ind((uint32_t)(EBP), 0x117d21afu);
  /* 117d21af mov esi, eax */
  ESI = (EAX);
  /* 117d21b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d21b3 je 0x117d21c1 */
  if (C.zf) goto L_117d21c1;
  /* 117d21b5 mov dword ptr [0x117d65e8], 1 */
  w32((uint32_t)(0x117d65e8), (0x1u));
  /* 117d21bf jmp 0x117d21e9 */
  goto L_117d21e9;
L_117d21c1:;
  /* 117d21c1 call dword ptr [0x117d5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5090))), 0x117d21c7u);
  /* 117d21c7 mov edi, eax */
  EDI = (EAX);
  /* 117d21c9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d21cb je 0x117d22bb */
  if (C.zf) goto L_117d22bb;
  /* 117d21d1 mov dword ptr [0x117d65e8], 2 */
  w32((uint32_t)(0x117d65e8), (0x2u));
  /* 117d21db jmp 0x117d226f */
  goto L_117d226f;
L_117d21e0:;
  /* 117d21e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d21e3 jne 0x117d226a */
  if (!C.zf) goto L_117d226a;
L_117d21e9:;
  /* 117d21e9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d21eb jne 0x117d21f9 */
  if (!C.zf) goto L_117d21f9;
  /* 117d21ed call ebp */
  call_ind((uint32_t)(EBP), 0x117d21efu);
  /* 117d21ef mov esi, eax */
  ESI = (EAX);
  /* 117d21f1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d21f3 je 0x117d22bb */
  if (C.zf) goto L_117d22bb;
L_117d21f9:;
  /* 117d21f9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117d21fc mov eax, esi */
  EAX = (ESI);
  /* 117d21fe je 0x117d220e */
  if (C.zf) goto L_117d220e;
L_117d2200:;
  /* 117d2200 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2201 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2202 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117d2205 jne 0x117d2200 */
  if (!C.zf) goto L_117d2200;
  /* 117d2207 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2208 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2209 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117d220c jne 0x117d2200 */
  if (!C.zf) goto L_117d2200;
L_117d220e:;
  /* 117d220e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2210 mov edi, dword ptr [0x117d5060] */
  EDI = (r32((uint32_t)(0x117d5060)));
  /* 117d2216 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117d2218 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2219 push ebx */
  push32((uint32_t)(EBX));
  /* 117d221a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d221b push ebx */
  push32((uint32_t)(EBX));
  /* 117d221c push ebx */
  push32((uint32_t)(EBX));
  /* 117d221d push eax */
  push32((uint32_t)(EAX));
  /* 117d221e push esi */
  push32((uint32_t)(ESI));
  /* 117d221f push ebx */
  push32((uint32_t)(EBX));
  /* 117d2220 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2221 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 117d2225 call edi */
  call_ind((uint32_t)(EDI), 0x117d2227u);
  /* 117d2227 mov ebp, eax */
  EBP = (EAX);
  /* 117d2229 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d222b je 0x117d225f */
  if (C.zf) goto L_117d225f;
  /* 117d222d push ebp */
  push32((uint32_t)(EBP));
  /* 117d222e call 0x117d26e1 */
  push32(0x117d2233u); f_117d26e1();
  /* 117d2233 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2235 pop ecx */
  ECX = (pop32());
  /* 117d2236 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 117d223a je 0x117d225f */
  if (C.zf) goto L_117d225f;
  /* 117d223c push ebx */
  push32((uint32_t)(EBX));
  /* 117d223d push ebx */
  push32((uint32_t)(EBX));
  /* 117d223e push ebp */
  push32((uint32_t)(EBP));
  /* 117d223f push eax */
  push32((uint32_t)(EAX));
  /* 117d2240 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 117d2244 push esi */
  push32((uint32_t)(ESI));
  /* 117d2245 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2246 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2247 call edi */
  call_ind((uint32_t)(EDI), 0x117d2249u);
  /* 117d2249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d224b jne 0x117d225b */
  if (!C.zf) goto L_117d225b;
  /* 117d224d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 117d2251 call 0x117d2699 */
  push32(0x117d2256u); f_117d2699();
  /* 117d2256 pop ecx */
  ECX = (pop32());
  /* 117d2257 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_117d225b:;
  /* 117d225b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_117d225f:;
  /* 117d225f push esi */
  push32((uint32_t)(ESI));
  /* 117d2260 call dword ptr [0x117d5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5064))), 0x117d2266u);
  /* 117d2266 mov eax, ebx */
  EAX = (EBX);
  /* 117d2268 jmp 0x117d22bd */
  goto L_117d22bd;
L_117d226a:;
  /* 117d226a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d226d jne 0x117d22bb */
  if (!C.zf) goto L_117d22bb;
L_117d226f:;
  /* 117d226f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2271 jne 0x117d227f */
  if (!C.zf) goto L_117d227f;
  /* 117d2273 call dword ptr [0x117d5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5090))), 0x117d2279u);
  /* 117d2279 mov edi, eax */
  EDI = (EAX);
  /* 117d227b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d227d je 0x117d22bb */
  if (C.zf) goto L_117d22bb;
L_117d227f:;
  /* 117d227f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2281 mov eax, edi */
  EAX = (EDI);
  /* 117d2283 je 0x117d228f */
  if (C.zf) goto L_117d228f;
L_117d2285:;
  /* 117d2285 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2286 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2288 jne 0x117d2285 */
  if (!C.zf) goto L_117d2285;
  /* 117d228a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d228b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d228d jne 0x117d2285 */
  if (!C.zf) goto L_117d2285;
L_117d228f:;
  /* 117d228f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2291 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2292 mov ebp, eax */
  EBP = (EAX);
  /* 117d2294 push ebp */
  push32((uint32_t)(EBP));
  /* 117d2295 call 0x117d26e1 */
  push32(0x117d229au); f_117d26e1();
  /* 117d229a mov esi, eax */
  ESI = (EAX);
  /* 117d229c pop ecx */
  ECX = (pop32());
  /* 117d229d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d229f jne 0x117d22a5 */
  if (!C.zf) goto L_117d22a5;
  /* 117d22a1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117d22a3 jmp 0x117d22b0 */
  goto L_117d22b0;
L_117d22a5:;
  /* 117d22a5 push ebp */
  push32((uint32_t)(EBP));
  /* 117d22a6 push edi */
  push32((uint32_t)(EDI));
  /* 117d22a7 push esi */
  push32((uint32_t)(ESI));
  /* 117d22a8 call 0x117d2cd0 */
  push32(0x117d22adu); f_117d2cd0();
  /* 117d22ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d22b0:;
  /* 117d22b0 push edi */
  push32((uint32_t)(EDI));
  /* 117d22b1 call dword ptr [0x117d50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50a8))), 0x117d22b7u);
  /* 117d22b7 mov eax, esi */
  EAX = (ESI);
  /* 117d22b9 jmp 0x117d22bd */
  goto L_117d22bd;
L_117d22bb:;
  /* 117d22bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117d22bd:;
  /* 117d22bd pop edi */
  EDI = (pop32());
  /* 117d22be pop esi */
  ESI = (pop32());
  /* 117d22bf pop ebp */
  EBP = (pop32());
  /* 117d22c0 pop ebx */
  EBX = (pop32());
  /* 117d22c1 pop ecx */
  ECX = (pop32());
  /* 117d22c2 pop ecx */
  ECX = (pop32());
  /* 117d22c3 ret  */
  ESPCHK(0x117d2192u, _esp0);
  ESP += 4; return;
}

/* FUN_100022c4 @ 0x117d22c4 (60 bytes, 20 insns) */
void f_117d22c4(void) {
  FTRACE(0x117d22c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d22c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d22c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d22c8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d22cc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117d22d1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 117d22d4 push eax */
  push32((uint32_t)(EAX));
  /* 117d22d5 call dword ptr [0x117d505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d505c))), 0x117d22dbu);
  /* 117d22db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d22dd mov dword ptr [0x117d68c8], eax */
  w32((uint32_t)(0x117d68c8), (EAX));
  /* 117d22e2 je 0x117d22f9 */
  if (C.zf) goto L_117d22f9;
  /* 117d22e4 call 0x117d3005 */
  push32(0x117d22e9u); f_117d3005();
  /* 117d22e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d22eb jne 0x117d22fc */
  if (!C.zf) goto L_117d22fc;
  /* 117d22ed push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d22f3 call dword ptr [0x117d5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5054))), 0x117d22f9u);
L_117d22f9:;
  /* 117d22f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d22fb ret  */
  ESPCHK(0x117d22c4u, _esp0);
  ESP += 4; return;
L_117d22fc:;
  /* 117d22fc push 1 */
  push32((uint32_t)(0x1u));
  /* 117d22fe pop eax */
  EAX = (pop32());
  /* 117d22ff ret  */
  ESPCHK(0x117d22c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002300 @ 0x117d2300 (117 bytes, 38 insns) */
void f_117d2300(void) {
  FTRACE(0x117d2300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2300 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2301 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d2303 cmp dword ptr [0x117d66a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117d66a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2309 push ebp */
  push32((uint32_t)(EBP));
  /* 117d230a mov ebp, dword ptr [0x117d5048] */
  EBP = (r32((uint32_t)(0x117d5048)));
  /* 117d2310 jle 0x117d2356 */
  if ((C.zf||C.sf!=C.of)) goto L_117d2356;
  /* 117d2312 mov eax, dword ptr [0x117d66a4] */
  EAX = (r32((uint32_t)(0x117d66a4)));
  /* 117d2317 push esi */
  push32((uint32_t)(ESI));
  /* 117d2318 push edi */
  push32((uint32_t)(EDI));
  /* 117d2319 mov edi, dword ptr [0x117d504c] */
  EDI = (r32((uint32_t)(0x117d504c)));
  /* 117d231f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_117d2322:;
  /* 117d2322 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117d2327 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117d232c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d232e call edi */
  call_ind((uint32_t)(EDI), 0x117d2330u);
  /* 117d2330 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117d2335 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d2337 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d2339 call edi */
  call_ind((uint32_t)(EDI), 0x117d233bu);
  /* 117d233b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 117d233e push 0 */
  push32((uint32_t)(0x0u));
  /* 117d2340 push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d2346 call ebp */
  call_ind((uint32_t)(EBP), 0x117d2348u);
  /* 117d2348 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d234b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117d234c cmp ebx, dword ptr [0x117d66a0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117d66a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2352 jl 0x117d2322 */
  if ((C.sf!=C.of)) goto L_117d2322;
  /* 117d2354 pop edi */
  EDI = (pop32());
  /* 117d2355 pop esi */
  ESI = (pop32());
L_117d2356:;
  /* 117d2356 push dword ptr [0x117d66a4] */
  push32((uint32_t)(r32((uint32_t)(0x117d66a4))));
  /* 117d235c push 0 */
  push32((uint32_t)(0x0u));
  /* 117d235e push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d2364 call ebp */
  call_ind((uint32_t)(EBP), 0x117d2366u);
  /* 117d2366 push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d236c call dword ptr [0x117d5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5054))), 0x117d2372u);
  /* 117d2372 pop ebp */
  EBP = (pop32());
  /* 117d2373 pop ebx */
  EBX = (pop32());
  /* 117d2374 ret  */
  ESPCHK(0x117d2300u, _esp0);
  ESP += 4; return;
}

/* FUN_10002375 @ 0x117d2375 (57 bytes, 18 insns) */
void f_117d2375(void) {
  FTRACE(0x117d2375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2375 mov eax, dword ptr [0x117d6498] */
  EAX = (r32((uint32_t)(0x117d6498)));
  /* 117d237a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d237d je 0x117d238c */
  if (C.zf) goto L_117d238c;
  /* 117d237f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d2381 jne 0x117d23ad */
  if (!C.zf) goto L_117d23ad;
  /* 117d2383 cmp dword ptr [0x117d649c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117d649c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d238a jne 0x117d23ad */
  if (!C.zf) goto L_117d23ad;
L_117d238c:;
  /* 117d238c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 117d2391 call 0x117d23ae */
  push32(0x117d2396u); f_117d23ae();
  /* 117d2396 mov eax, dword ptr [0x117d65ec] */
  EAX = (r32((uint32_t)(0x117d65ec)));
  /* 117d239b pop ecx */
  ECX = (pop32());
  /* 117d239c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d239e je 0x117d23a2 */
  if (C.zf) goto L_117d23a2;
  /* 117d23a0 call eax */
  call_ind((uint32_t)(EAX), 0x117d23a2u);
L_117d23a2:;
  /* 117d23a2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 117d23a7 call 0x117d23ae */
  push32(0x117d23acu); f_117d23ae();
  /* 117d23ac pop ecx */
  ECX = (pop32());
L_117d23ad:;
  /* 117d23ad ret  */
  ESPCHK(0x117d2375u, _esp0);
  ESP += 4; return;
}

/* FUN_100023ae @ 0x117d23ae (339 bytes, 100 insns) */
void f_117d23ae(void) {
  FTRACE(0x117d23aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d23ae push ebp */
  push32((uint32_t)(EBP));
  /* 117d23af mov ebp, esp */
  EBP = (ESP);
  /* 117d23b1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d23b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d23ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117d23bc mov eax, 0x117d6120 */
  EAX = (0x117d6120u);
L_117d23c1:;
  /* 117d23c1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d23c3 je 0x117d23d0 */
  if (C.zf) goto L_117d23d0;
  /* 117d23c5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d23c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d23c9 cmp eax, 0x117d61b0 */
  { uint32_t _a=(EAX),_b=(0x117d61b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d23ce jl 0x117d23c1 */
  if ((C.sf!=C.of)) goto L_117d23c1;
L_117d23d0:;
  /* 117d23d0 push esi */
  push32((uint32_t)(ESI));
  /* 117d23d1 mov esi, ecx */
  ESI = (ECX);
  /* 117d23d3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 117d23d6 cmp edx, dword ptr [esi + 0x117d6120] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x117d6120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d23dc jne 0x117d24fe */
  if (!C.zf) goto L_117d24fe;
  /* 117d23e2 mov eax, dword ptr [0x117d6498] */
  EAX = (r32((uint32_t)(0x117d6498)));
  /* 117d23e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d23ea je 0x117d24d8 */
  if (C.zf) goto L_117d24d8;
  /* 117d23f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d23f2 jne 0x117d2401 */
  if (!C.zf) goto L_117d2401;
  /* 117d23f4 cmp dword ptr [0x117d649c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117d649c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d23fb je 0x117d24d8 */
  if (C.zf) goto L_117d24d8;
L_117d2401:;
  /* 117d2401 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2407 je 0x117d24fe */
  if (C.zf) goto L_117d24fe;
  /* 117d240d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117d2413 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117d2418 push eax */
  push32((uint32_t)(EAX));
  /* 117d2419 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d241b call dword ptr [0x117d50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d50a4))), 0x117d2421u);
  /* 117d2421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d2423 jne 0x117d2438 */
  if (!C.zf) goto L_117d2438;
  /* 117d2425 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117d242b push 0x117d5408 */
  push32((uint32_t)(0x117d5408u));
  /* 117d2430 push eax */
  push32((uint32_t)(EAX));
  /* 117d2431 call 0x117d2770 */
  push32(0x117d2436u); f_117d2770();
  /* 117d2436 pop ecx */
  ECX = (pop32());
  /* 117d2437 pop ecx */
  ECX = (pop32());
L_117d2438:;
  /* 117d2438 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117d243e push edi */
  push32((uint32_t)(EDI));
  /* 117d243f push eax */
  push32((uint32_t)(EAX));
  /* 117d2440 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 117d2446 call 0x117d2860 */
  push32(0x117d244bu); f_117d2860();
  /* 117d244b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d244c pop ecx */
  ECX = (pop32());
  /* 117d244d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2450 jbe 0x117d247b */
  if ((C.cf||C.zf)) goto L_117d247b;
  /* 117d2452 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117d2458 push eax */
  push32((uint32_t)(EAX));
  /* 117d2459 call 0x117d2860 */
  push32(0x117d245eu); f_117d2860();
  /* 117d245e mov edi, eax */
  EDI = (EAX);
  /* 117d2460 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117d2466 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2469 push 3 */
  push32((uint32_t)(0x3u));
  /* 117d246b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d246d push 0x117d5404 */
  push32((uint32_t)(0x117d5404u));
  /* 117d2472 push edi */
  push32((uint32_t)(EDI));
  /* 117d2473 call 0x117d38e0 */
  push32(0x117d2478u); f_117d38e0();
  /* 117d2478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d247b:;
  /* 117d247b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117d2481 push 0x117d53e8 */
  push32((uint32_t)(0x117d53e8u));
  /* 117d2486 push eax */
  push32((uint32_t)(EAX));
  /* 117d2487 call 0x117d2770 */
  push32(0x117d248cu); f_117d2770();
  /* 117d248c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117d2492 push edi */
  push32((uint32_t)(EDI));
  /* 117d2493 push eax */
  push32((uint32_t)(EAX));
  /* 117d2494 call 0x117d2780 */
  push32(0x117d2499u); f_117d2780();
  /* 117d2499 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117d249f push 0x117d53e4 */
  push32((uint32_t)(0x117d53e4u));
  /* 117d24a4 push eax */
  push32((uint32_t)(EAX));
  /* 117d24a5 call 0x117d2780 */
  push32(0x117d24aau); f_117d2780();
  /* 117d24aa push dword ptr [esi + 0x117d6124] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x117d6124))));
  /* 117d24b0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117d24b6 push eax */
  push32((uint32_t)(EAX));
  /* 117d24b7 call 0x117d2780 */
  push32(0x117d24bcu); f_117d2780();
  /* 117d24bc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 117d24c1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117d24c7 push 0x117d53bc */
  push32((uint32_t)(0x117d53bcu));
  /* 117d24cc push eax */
  push32((uint32_t)(EAX));
  /* 117d24cd call 0x117d384e */
  push32(0x117d24d2u); f_117d384e();
  /* 117d24d2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d24d5 pop edi */
  EDI = (pop32());
  /* 117d24d6 jmp 0x117d24fe */
  goto L_117d24fe;
L_117d24d8:;
  /* 117d24d8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 117d24db lea esi, [esi + 0x117d6124] */
  ESI = ((uint32_t)(ESI + 0x117d6124));
  /* 117d24e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d24e3 push eax */
  push32((uint32_t)(EAX));
  /* 117d24e4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d24e6 call 0x117d2860 */
  push32(0x117d24ebu); f_117d2860();
  /* 117d24eb pop ecx */
  ECX = (pop32());
  /* 117d24ec push eax */
  push32((uint32_t)(EAX));
  /* 117d24ed push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d24ef push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117d24f1 call dword ptr [0x117d508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d508c))), 0x117d24f7u);
  /* 117d24f7 push eax */
  push32((uint32_t)(EAX));
  /* 117d24f8 call dword ptr [0x117d5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5050))), 0x117d24feu);
L_117d24fe:;
  /* 117d24fe pop esi */
  ESI = (pop32());
  /* 117d24ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2500 ret  */
  ESPCHK(0x117d23aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002501 @ 0x117d2501 (41 bytes, 12 insns) */
void f_117d2501(void) {
  FTRACE(0x117d2501u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2501 push esi */
  push32((uint32_t)(ESI));
  /* 117d2502 mov esi, dword ptr [0x117d5040] */
  ESI = (r32((uint32_t)(0x117d5040)));
  /* 117d2508 push dword ptr [0x117d61f4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61f4))));
  /* 117d250e call esi */
  call_ind((uint32_t)(ESI), 0x117d2510u);
  /* 117d2510 push dword ptr [0x117d61e4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61e4))));
  /* 117d2516 call esi */
  call_ind((uint32_t)(ESI), 0x117d2518u);
  /* 117d2518 push dword ptr [0x117d61d4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61d4))));
  /* 117d251e call esi */
  call_ind((uint32_t)(ESI), 0x117d2520u);
  /* 117d2520 push dword ptr [0x117d61b4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61b4))));
  /* 117d2526 call esi */
  call_ind((uint32_t)(ESI), 0x117d2528u);
  /* 117d2528 pop esi */
  ESI = (pop32());
  /* 117d2529 ret  */
  ESPCHK(0x117d2501u, _esp0);
  ESP += 4; return;
}

/* FUN_1000252a @ 0x117d252a (108 bytes, 34 insns) */
void f_117d252a(void) {
  FTRACE(0x117d252au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d252a push esi */
  push32((uint32_t)(ESI));
  /* 117d252b push edi */
  push32((uint32_t)(EDI));
  /* 117d252c mov edi, dword ptr [0x117d50a0] */
  EDI = (r32((uint32_t)(0x117d50a0)));
  /* 117d2532 mov esi, 0x117d61b0 */
  ESI = (0x117d61b0u);
L_117d2537:;
  /* 117d2537 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117d2539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d253b je 0x117d2568 */
  if (C.zf) goto L_117d2568;
  /* 117d253d cmp esi, 0x117d61f4 */
  { uint32_t _a=(ESI),_b=(0x117d61f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2543 je 0x117d2568 */
  if (C.zf) goto L_117d2568;
  /* 117d2545 cmp esi, 0x117d61e4 */
  { uint32_t _a=(ESI),_b=(0x117d61e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d254b je 0x117d2568 */
  if (C.zf) goto L_117d2568;
  /* 117d254d cmp esi, 0x117d61d4 */
  { uint32_t _a=(ESI),_b=(0x117d61d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2553 je 0x117d2568 */
  if (C.zf) goto L_117d2568;
  /* 117d2555 cmp esi, 0x117d61b4 */
  { uint32_t _a=(ESI),_b=(0x117d61b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d255b je 0x117d2568 */
  if (C.zf) goto L_117d2568;
  /* 117d255d push eax */
  push32((uint32_t)(EAX));
  /* 117d255e call edi */
  call_ind((uint32_t)(EDI), 0x117d2560u);
  /* 117d2560 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d2562 call 0x117d2699 */
  push32(0x117d2567u); f_117d2699();
  /* 117d2567 pop ecx */
  ECX = (pop32());
L_117d2568:;
  /* 117d2568 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d256b cmp esi, 0x117d6270 */
  { uint32_t _a=(ESI),_b=(0x117d6270u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2571 jl 0x117d2537 */
  if ((C.sf!=C.of)) goto L_117d2537;
  /* 117d2573 push dword ptr [0x117d61d4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61d4))));
  /* 117d2579 call edi */
  call_ind((uint32_t)(EDI), 0x117d257bu);
  /* 117d257b push dword ptr [0x117d61e4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61e4))));
  /* 117d2581 call edi */
  call_ind((uint32_t)(EDI), 0x117d2583u);
  /* 117d2583 push dword ptr [0x117d61f4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61f4))));
  /* 117d2589 call edi */
  call_ind((uint32_t)(EDI), 0x117d258bu);
  /* 117d258b push dword ptr [0x117d61b4] */
  push32((uint32_t)(r32((uint32_t)(0x117d61b4))));
  /* 117d2591 call edi */
  call_ind((uint32_t)(EDI), 0x117d2593u);
  /* 117d2593 pop edi */
  EDI = (pop32());
  /* 117d2594 pop esi */
  ESI = (pop32());
  /* 117d2595 ret  */
  ESPCHK(0x117d252au, _esp0);
  ESP += 4; return;
}

/* FUN_10002596 @ 0x117d2596 (97 bytes, 37 insns) */
void f_117d2596(void) {
  FTRACE(0x117d2596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2596 push ebp */
  push32((uint32_t)(EBP));
  /* 117d2597 mov ebp, esp */
  EBP = (ESP);
  /* 117d2599 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d259c push esi */
  push32((uint32_t)(ESI));
  /* 117d259d cmp dword ptr [eax*4 + 0x117d61b0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x117d61b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d25a5 lea esi, [eax*4 + 0x117d61b0] */
  ESI = ((uint32_t)(EAX*4 + 0x117d61b0));
  /* 117d25ac jne 0x117d25ec */
  if (!C.zf) goto L_117d25ec;
  /* 117d25ae push edi */
  push32((uint32_t)(EDI));
  /* 117d25af push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117d25b1 call 0x117d26e1 */
  push32(0x117d25b6u); f_117d26e1();
  /* 117d25b6 mov edi, eax */
  EDI = (EAX);
  /* 117d25b8 pop ecx */
  ECX = (pop32());
  /* 117d25b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d25bb jne 0x117d25c5 */
  if (!C.zf) goto L_117d25c5;
  /* 117d25bd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117d25bf call 0x117d1a06 */
  push32(0x117d25c4u); f_117d1a06();
  /* 117d25c4 pop ecx */
  ECX = (pop32());
L_117d25c5:;
  /* 117d25c5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117d25c7 call 0x117d2596 */
  push32(0x117d25ccu); f_117d2596();
  /* 117d25cc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d25cf pop ecx */
  ECX = (pop32());
  /* 117d25d0 push edi */
  push32((uint32_t)(EDI));
  /* 117d25d1 jne 0x117d25dd */
  if (!C.zf) goto L_117d25dd;
  /* 117d25d3 call dword ptr [0x117d5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5040))), 0x117d25d9u);
  /* 117d25d9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117d25db jmp 0x117d25e3 */
  goto L_117d25e3;
L_117d25dd:;
  /* 117d25dd call 0x117d2699 */
  push32(0x117d25e2u); f_117d2699();
  /* 117d25e2 pop ecx */
  ECX = (pop32());
L_117d25e3:;
  /* 117d25e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117d25e5 call 0x117d25f7 */
  push32(0x117d25eau); f_117d25f7();
  /* 117d25ea pop ecx */
  ECX = (pop32());
  /* 117d25eb pop edi */
  EDI = (pop32());
L_117d25ec:;
  /* 117d25ec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117d25ee call dword ptr [0x117d503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d503c))), 0x117d25f4u);
  /* 117d25f4 pop esi */
  ESI = (pop32());
  /* 117d25f5 pop ebp */
  EBP = (pop32());
  /* 117d25f6 ret  */
  ESPCHK(0x117d2596u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f7 @ 0x117d25f7 (21 bytes, 7 insns) */
void f_117d25f7(void) {
  FTRACE(0x117d25f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d25f7 push ebp */
  push32((uint32_t)(EBP));
  /* 117d25f8 mov ebp, esp */
  EBP = (ESP);
  /* 117d25fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d25fd push dword ptr [eax*4 + 0x117d61b0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x117d61b0))));
  /* 117d2604 call dword ptr [0x117d5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5044))), 0x117d260au);
  /* 117d260a pop ebp */
  EBP = (pop32());
  /* 117d260b ret  */
  ESPCHK(0x117d25f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000260c @ 0x117d260c (141 bytes, 56 insns) */
void f_117d260c(void) {
  FTRACE(0x117d260cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d260c push ebx */
  push32((uint32_t)(EBX));
  /* 117d260d push esi */
  push32((uint32_t)(ESI));
  /* 117d260e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 117d2612 push edi */
  push32((uint32_t)(EDI));
  /* 117d2613 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117d2618 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d261b mov ebx, esi */
  EBX = (ESI);
  /* 117d261d ja 0x117d262c */
  if ((!C.cf&&!C.zf)) goto L_117d262c;
  /* 117d261f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2621 jne 0x117d2626 */
  if (!C.zf) goto L_117d2626;
  /* 117d2623 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d2625 pop esi */
  ESI = (pop32());
L_117d2626:;
  /* 117d2626 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2629 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_117d262c:;
  /* 117d262c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d262e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2631 ja 0x117d266d */
  if ((!C.cf&&!C.zf)) goto L_117d266d;
  /* 117d2633 cmp ebx, dword ptr [0x117d6400] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117d6400))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2639 ja 0x117d2658 */
  if ((!C.cf&&!C.zf)) goto L_117d2658;
  /* 117d263b push 9 */
  push32((uint32_t)(0x9u));
  /* 117d263d call 0x117d2596 */
  push32(0x117d2642u); f_117d2596();
  /* 117d2642 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2643 call 0x117d3399 */
  push32(0x117d2648u); f_117d3399();
  /* 117d2648 push 9 */
  push32((uint32_t)(0x9u));
  /* 117d264a mov edi, eax */
  EDI = (EAX);
  /* 117d264c call 0x117d25f7 */
  push32(0x117d2651u); f_117d25f7();
  /* 117d2651 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d2656 jne 0x117d2683 */
  if (!C.zf) goto L_117d2683;
L_117d2658:;
  /* 117d2658 push esi */
  push32((uint32_t)(ESI));
  /* 117d2659 push 8 */
  push32((uint32_t)(0x8u));
  /* 117d265b push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d2661 call dword ptr [0x117d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5038))), 0x117d2667u);
  /* 117d2667 mov edi, eax */
  EDI = (EAX);
  /* 117d2669 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d266b jne 0x117d268f */
  if (!C.zf) goto L_117d268f;
L_117d266d:;
  /* 117d266d cmp dword ptr [0x117d6664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117d6664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2674 je 0x117d268f */
  if (C.zf) goto L_117d268f;
  /* 117d2676 push esi */
  push32((uint32_t)(ESI));
  /* 117d2677 call 0x117d3a38 */
  push32(0x117d267cu); f_117d3a38();
  /* 117d267c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d267e pop ecx */
  ECX = (pop32());
  /* 117d267f je 0x117d2695 */
  if (C.zf) goto L_117d2695;
  /* 117d2681 jmp 0x117d262c */
  goto L_117d262c;
L_117d2683:;
  /* 117d2683 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2684 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d2686 push edi */
  push32((uint32_t)(EDI));
  /* 117d2687 call 0x117d39e0 */
  push32(0x117d268cu); f_117d39e0();
  /* 117d268c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117d268f:;
  /* 117d268f mov eax, edi */
  EAX = (EDI);
L_117d2691:;
  /* 117d2691 pop edi */
  EDI = (pop32());
  /* 117d2692 pop esi */
  ESI = (pop32());
  /* 117d2693 pop ebx */
  EBX = (pop32());
  /* 117d2694 ret  */
  ESPCHK(0x117d260cu, _esp0);
  ESP += 4; return;
L_117d2695:;
  /* 117d2695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2697 jmp 0x117d2691 */
  goto L_117d2691;
}

/* FUN_10002699 @ 0x117d2699 (72 bytes, 29 insns) */
void f_117d2699(void) {
  FTRACE(0x117d2699u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2699 push esi */
  push32((uint32_t)(ESI));
  /* 117d269a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117d269e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d26a0 je 0x117d26df */
  if (C.zf) goto L_117d26df;
  /* 117d26a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117d26a4 call 0x117d2596 */
  push32(0x117d26a9u); f_117d2596();
  /* 117d26a9 push esi */
  push32((uint32_t)(ESI));
  /* 117d26aa call 0x117d3043 */
  push32(0x117d26afu); f_117d3043();
  /* 117d26af pop ecx */
  ECX = (pop32());
  /* 117d26b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d26b2 pop ecx */
  ECX = (pop32());
  /* 117d26b3 je 0x117d26c8 */
  if (C.zf) goto L_117d26c8;
  /* 117d26b5 push esi */
  push32((uint32_t)(ESI));
  /* 117d26b6 push eax */
  push32((uint32_t)(EAX));
  /* 117d26b7 call 0x117d306e */
  push32(0x117d26bcu); f_117d306e();
  /* 117d26bc push 9 */
  push32((uint32_t)(0x9u));
  /* 117d26be call 0x117d25f7 */
  push32(0x117d26c3u); f_117d25f7();
  /* 117d26c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d26c6 pop esi */
  ESI = (pop32());
  /* 117d26c7 ret  */
  ESPCHK(0x117d2699u, _esp0);
  ESP += 4; return;
L_117d26c8:;
  /* 117d26c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117d26ca call 0x117d25f7 */
  push32(0x117d26cfu); f_117d25f7();
  /* 117d26cf pop ecx */
  ECX = (pop32());
  /* 117d26d0 push esi */
  push32((uint32_t)(ESI));
  /* 117d26d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d26d3 push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d26d9 call dword ptr [0x117d5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5048))), 0x117d26dfu);
L_117d26df:;
  /* 117d26df pop esi */
  ESI = (pop32());
  /* 117d26e0 ret  */
  ESPCHK(0x117d2699u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x117d26e1 (18 bytes, 6 insns) */
void f_117d26e1(void) {
  FTRACE(0x117d26e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d26e1 push dword ptr [0x117d6664] */
  push32((uint32_t)(r32((uint32_t)(0x117d6664))));
  /* 117d26e7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117d26eb call 0x117d26f3 */
  push32(0x117d26f0u); f_117d26f3();
  /* 117d26f0 pop ecx */
  ECX = (pop32());
  /* 117d26f1 pop ecx */
  ECX = (pop32());
  /* 117d26f2 ret  */
  ESPCHK(0x117d26e1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x117d26f3 (44 bytes, 16 insns) */
void f_117d26f3(void) {
  FTRACE(0x117d26f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d26f3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d26f8 ja 0x117d271c */
  if ((!C.cf&&!C.zf)) goto L_117d271c;
L_117d26fa:;
  /* 117d26fa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117d26fe call 0x117d271f */
  push32(0x117d2703u); f_117d271f();
  /* 117d2703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d2705 pop ecx */
  ECX = (pop32());
  /* 117d2706 jne 0x117d271e */
  if (!C.zf) goto L_117d271e;
  /* 117d2708 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d270c je 0x117d271e */
  if (C.zf) goto L_117d271e;
  /* 117d270e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117d2712 call 0x117d3a38 */
  push32(0x117d2717u); f_117d3a38();
  /* 117d2717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d2719 pop ecx */
  ECX = (pop32());
  /* 117d271a jne 0x117d26fa */
  if (!C.zf) goto L_117d26fa;
L_117d271c:;
  /* 117d271c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117d271e:;
  /* 117d271e ret  */
  ESPCHK(0x117d26f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000271f @ 0x117d271f (78 bytes, 30 insns) */
void f_117d271f(void) {
  FTRACE(0x117d271fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d271f push esi */
  push32((uint32_t)(ESI));
  /* 117d2720 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117d2724 cmp esi, dword ptr [0x117d6400] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x117d6400))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d272a push edi */
  push32((uint32_t)(EDI));
  /* 117d272b ja 0x117d274e */
  if ((!C.cf&&!C.zf)) goto L_117d274e;
  /* 117d272d push 9 */
  push32((uint32_t)(0x9u));
  /* 117d272f call 0x117d2596 */
  push32(0x117d2734u); f_117d2596();
  /* 117d2734 push esi */
  push32((uint32_t)(ESI));
  /* 117d2735 call 0x117d3399 */
  push32(0x117d273au); f_117d3399();
  /* 117d273a push 9 */
  push32((uint32_t)(0x9u));
  /* 117d273c mov edi, eax */
  EDI = (EAX);
  /* 117d273e call 0x117d25f7 */
  push32(0x117d2743u); f_117d25f7();
  /* 117d2743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2746 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117d2748 je 0x117d274e */
  if (C.zf) goto L_117d274e;
  /* 117d274a mov eax, edi */
  EAX = (EDI);
  /* 117d274c jmp 0x117d276a */
  goto L_117d276a;
L_117d274e:;
  /* 117d274e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d2750 jne 0x117d2755 */
  if (!C.zf) goto L_117d2755;
  /* 117d2752 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d2754 pop esi */
  ESI = (pop32());
L_117d2755:;
  /* 117d2755 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2758 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 117d275b push esi */
  push32((uint32_t)(ESI));
  /* 117d275c push 0 */
  push32((uint32_t)(0x0u));
  /* 117d275e push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d2764 call dword ptr [0x117d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5038))), 0x117d276au);
L_117d276a:;
  /* 117d276a pop edi */
  EDI = (pop32());
  /* 117d276b pop esi */
  ESI = (pop32());
  /* 117d276c ret  */
  ESPCHK(0x117d271fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x117d2770 (7 bytes, 3 insns) */
void f_117d2770(void) {
  FTRACE(0x117d2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2770 push edi */
  push32((uint32_t)(EDI));
  /* 117d2771 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 117d2775 jmp 0x117d27e1 */
  jmp_ind(0x117d27e1u); return;
}

/* FUN_10002780 @ 0x117d2780 (224 bytes, 84 insns) */
void f_117d2780(void) {
  FTRACE(0x117d2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2780 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d2784 push edi */
  push32((uint32_t)(EDI));
  /* 117d2785 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117d278b je 0x117d279c */
  if (C.zf) goto L_117d279c;
L_117d278d:;
  /* 117d278d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117d278f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d2790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d2792 je 0x117d27cf */
  if (C.zf) goto L_117d27cf;
  /* 117d2794 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117d279a jne 0x117d278d */
  if (!C.zf) goto L_117d278d;
L_117d279c:;
  /* 117d279c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117d279e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117d27a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d27a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d27a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117d27aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d27ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117d27b2 je 0x117d279c */
  if (C.zf) goto L_117d279c;
  /* 117d27b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117d27b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d27b9 je 0x117d27de */
  if (C.zf) goto L_117d27de;
  /* 117d27bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117d27bd je 0x117d27d9 */
  if (C.zf) goto L_117d27d9;
  /* 117d27bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117d27c4 je 0x117d27d4 */
  if (C.zf) goto L_117d27d4;
  /* 117d27c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117d27cb je 0x117d27cf */
  if (C.zf) goto L_117d27cf;
  /* 117d27cd jmp 0x117d279c */
  goto L_117d279c;
L_117d27cf:;
  /* 117d27cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 117d27d2 jmp 0x117d27e1 */
  goto L_117d27e1;
L_117d27d4:;
  /* 117d27d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 117d27d7 jmp 0x117d27e1 */
  goto L_117d27e1;
L_117d27d9:;
  /* 117d27d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 117d27dc jmp 0x117d27e1 */
  goto L_117d27e1;
L_117d27de:;
  /* 117d27de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_117d27e1:;
  /* 117d27e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117d27e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117d27eb je 0x117d2806 */
  if (C.zf) goto L_117d2806;
L_117d27ed:;
  /* 117d27ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117d27ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d27f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d27f2 je 0x117d2858 */
  if (C.zf) goto L_117d2858;
  /* 117d27f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117d27f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d27f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117d27fd jne 0x117d27ed */
  if (!C.zf) goto L_117d27ed;
  /* 117d27ff jmp 0x117d2806 */
  goto L_117d2806;
L_117d2801:;
  /* 117d2801 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117d2803 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117d2806:;
  /* 117d2806 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117d280b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117d280d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d280f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d2812 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2814 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117d2816 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2819 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117d281e je 0x117d2801 */
  if (C.zf) goto L_117d2801;
  /* 117d2820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d2822 je 0x117d2858 */
  if (C.zf) goto L_117d2858;
  /* 117d2824 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117d2826 je 0x117d284f */
  if (C.zf) goto L_117d284f;
  /* 117d2828 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117d282e je 0x117d2842 */
  if (C.zf) goto L_117d2842;
  /* 117d2830 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117d2836 je 0x117d283a */
  if (C.zf) goto L_117d283a;
  /* 117d2838 jmp 0x117d2801 */
  goto L_117d2801;
L_117d283a:;
  /* 117d283a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117d283c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d2840 pop edi */
  EDI = (pop32());
  /* 117d2841 ret  */
  ESPCHK(0x117d2780u, _esp0);
  ESP += 4; return;
L_117d2842:;
  /* 117d2842 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117d2845 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d2849 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 117d284d pop edi */
  EDI = (pop32());
  /* 117d284e ret  */
  ESPCHK(0x117d2780u, _esp0);
  ESP += 4; return;
L_117d284f:;
  /* 117d284f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117d2852 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d2856 pop edi */
  EDI = (pop32());
  /* 117d2857 ret  */
  ESPCHK(0x117d2780u, _esp0);
  ESP += 4; return;
L_117d2858:;
  /* 117d2858 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117d285a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d285e pop edi */
  EDI = (pop32());
  /* 117d285f ret  */
  ESPCHK(0x117d2780u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x117d2860 (123 bytes, 44 insns) */
void f_117d2860(void) {
  FTRACE(0x117d2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2860 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d2864 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117d286a je 0x117d2880 */
  if (C.zf) goto L_117d2880;
L_117d286c:;
  /* 117d286c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117d286e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d286f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d2871 je 0x117d28b3 */
  if (C.zf) goto L_117d28b3;
  /* 117d2873 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117d2879 jne 0x117d286c */
  if (!C.zf) goto L_117d286c;
  /* 117d287b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117d2880:;
  /* 117d2880 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117d2882 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117d2887 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2889 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d288c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117d288e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2891 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117d2896 je 0x117d2880 */
  if (C.zf) goto L_117d2880;
  /* 117d2898 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117d289b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d289d je 0x117d28d1 */
  if (C.zf) goto L_117d28d1;
  /* 117d289f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117d28a1 je 0x117d28c7 */
  if (C.zf) goto L_117d28c7;
  /* 117d28a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117d28a8 je 0x117d28bd */
  if (C.zf) goto L_117d28bd;
  /* 117d28aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117d28af je 0x117d28b3 */
  if (C.zf) goto L_117d28b3;
  /* 117d28b1 jmp 0x117d2880 */
  goto L_117d2880;
L_117d28b3:;
  /* 117d28b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 117d28b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d28ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d28bc ret  */
  ESPCHK(0x117d2860u, _esp0);
  ESP += 4; return;
L_117d28bd:;
  /* 117d28bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 117d28c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d28c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d28c6 ret  */
  ESPCHK(0x117d2860u, _esp0);
  ESP += 4; return;
L_117d28c7:;
  /* 117d28c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 117d28ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d28ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d28d0 ret  */
  ESPCHK(0x117d2860u, _esp0);
  ESP += 4; return;
L_117d28d1:;
  /* 117d28d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 117d28d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d28d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d28da ret  */
  ESPCHK(0x117d2860u, _esp0);
  ESP += 4; return;
}

/* FUN_100028db @ 0x117d28db (429 bytes, 143 insns) */
void f_117d28db(void) {
  FTRACE(0x117d28dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d28db push ebp */
  push32((uint32_t)(EBP));
  /* 117d28dc mov ebp, esp */
  EBP = (ESP);
  /* 117d28de sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d28e1 push ebx */
  push32((uint32_t)(EBX));
  /* 117d28e2 push esi */
  push32((uint32_t)(ESI));
  /* 117d28e3 push edi */
  push32((uint32_t)(EDI));
  /* 117d28e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117d28e6 call 0x117d2596 */
  push32(0x117d28ebu); f_117d2596();
  /* 117d28eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d28ee call 0x117d2a88 */
  push32(0x117d28f3u); f_117d2a88();
  /* 117d28f3 mov ebx, eax */
  EBX = (EAX);
  /* 117d28f5 pop ecx */
  ECX = (pop32());
  /* 117d28f6 cmp ebx, dword ptr [0x117d66a8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117d66a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d28fc pop ecx */
  ECX = (pop32());
  /* 117d28fd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d2900 jne 0x117d2909 */
  if (!C.zf) goto L_117d2909;
L_117d2902:;
  /* 117d2902 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117d2904 jmp 0x117d2a79 */
  goto L_117d2a79;
L_117d2909:;
  /* 117d2909 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117d290b je 0x117d2a67 */
  if (C.zf) goto L_117d2a67;
  /* 117d2911 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2913 mov eax, 0x117d6308 */
  EAX = (0x117d6308u);
L_117d2918:;
  /* 117d2918 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d291a je 0x117d2990 */
  if (C.zf) goto L_117d2990;
  /* 117d291c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d291f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117d2920 cmp eax, 0x117d63f8 */
  { uint32_t _a=(EAX),_b=(0x117d63f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2925 jl 0x117d2918 */
  if ((C.sf!=C.of)) goto L_117d2918;
  /* 117d2927 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 117d292a push eax */
  push32((uint32_t)(EAX));
  /* 117d292b push ebx */
  push32((uint32_t)(EBX));
  /* 117d292c call dword ptr [0x117d5030] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5030))), 0x117d2932u);
  /* 117d2932 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d2934 pop esi */
  ESI = (pop32());
  /* 117d2935 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2937 jne 0x117d2a5e */
  if (!C.zf) goto L_117d2a5e;
  /* 117d293d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117d293f and dword ptr [0x117d68c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117d68c4)))&(0x0u); w32((uint32_t)(0x117d68c4), (_r)); fl_logic(_r,32); }
  /* 117d2946 pop ecx */
  ECX = (pop32());
  /* 117d2947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2949 mov edi, 0x117d67c0 */
  EDI = (0x117d67c0u);
  /* 117d294e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2951 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117d2953 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117d2954 mov dword ptr [0x117d66a8], ebx */
  w32((uint32_t)(0x117d66a8), (EBX));
  /* 117d295a jbe 0x117d2a4b */
  if ((C.cf||C.zf)) goto L_117d2a4b;
  /* 117d2960 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2964 je 0x117d2a26 */
  if (C.zf) goto L_117d2a26;
  /* 117d296a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_117d296d:;
  /* 117d296d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117d296f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d2971 je 0x117d2a26 */
  if (C.zf) goto L_117d2a26;
  /* 117d2977 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 117d297b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_117d297e:;
  /* 117d297e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2980 ja 0x117d2a1a */
  if ((!C.cf&&!C.zf)) goto L_117d2a1a;
  /* 117d2986 or byte ptr [eax + 0x117d67c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(0x4u); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d298d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d298e jmp 0x117d297e */
  goto L_117d297e;
L_117d2990:;
  /* 117d2990 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d2994 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117d2996 pop ecx */
  ECX = (pop32());
  /* 117d2997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2999 mov edi, 0x117d67c0 */
  EDI = (0x117d67c0u);
  /* 117d299e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 117d29a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117d29a3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 117d29a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117d29a7 lea ebx, [esi + 0x117d6318] */
  EBX = ((uint32_t)(ESI + 0x117d6318));
L_117d29ad:;
  /* 117d29ad cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d29b0 mov ecx, ebx */
  ECX = (EBX);
  /* 117d29b2 je 0x117d29e0 */
  if (C.zf) goto L_117d29e0;
L_117d29b4:;
  /* 117d29b4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117d29b7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d29b9 je 0x117d29e0 */
  if (C.zf) goto L_117d29e0;
  /* 117d29bb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 117d29be movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 117d29c1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d29c3 ja 0x117d29d9 */
  if ((!C.cf&&!C.zf)) goto L_117d29d9;
  /* 117d29c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d29c8 mov dl, byte ptr [edx + 0x117d6300] */
  DL = (r8((uint32_t)(EDX + 0x117d6300)));
L_117d29ce:;
  /* 117d29ce or byte ptr [eax + 0x117d67c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(DL); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d29d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d29d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d29d7 jbe 0x117d29ce */
  if ((C.cf||C.zf)) goto L_117d29ce;
L_117d29d9:;
  /* 117d29d9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d29da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d29db cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d29de jne 0x117d29b4 */
  if (!C.zf) goto L_117d29b4;
L_117d29e0:;
  /* 117d29e0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 117d29e3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d29e6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d29ea jb 0x117d29ad */
  if (C.cf) goto L_117d29ad;
  /* 117d29ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d29ef mov dword ptr [0x117d66bc], 1 */
  w32((uint32_t)(0x117d66bc), (0x1u));
  /* 117d29f9 push eax */
  push32((uint32_t)(EAX));
  /* 117d29fa mov dword ptr [0x117d66a8], eax */
  w32((uint32_t)(0x117d66a8), (EAX));
  /* 117d29ff call 0x117d2ad2 */
  push32(0x117d2a04u); f_117d2ad2();
  /* 117d2a04 lea esi, [esi + 0x117d630c] */
  ESI = ((uint32_t)(ESI + 0x117d630c));
  /* 117d2a0a mov edi, 0x117d66b0 */
  EDI = (0x117d66b0u);
  /* 117d2a0f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117d2a10 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117d2a11 pop ecx */
  ECX = (pop32());
  /* 117d2a12 mov dword ptr [0x117d68c4], eax */
  w32((uint32_t)(0x117d68c4), (EAX));
  /* 117d2a17 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117d2a18 jmp 0x117d2a6c */
  goto L_117d2a6c;
L_117d2a1a:;
  /* 117d2a1a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d2a1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d2a1c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d2a20 jne 0x117d296d */
  if (!C.zf) goto L_117d296d;
L_117d2a26:;
  /* 117d2a26 mov eax, esi */
  EAX = (ESI);
L_117d2a28:;
  /* 117d2a28 or byte ptr [eax + 0x117d67c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(0x8u); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d2a2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2a30 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2a35 jb 0x117d2a28 */
  if (C.cf) goto L_117d2a28;
  /* 117d2a37 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2a38 call 0x117d2ad2 */
  push32(0x117d2a3du); f_117d2ad2();
  /* 117d2a3d pop ecx */
  ECX = (pop32());
  /* 117d2a3e mov dword ptr [0x117d68c4], eax */
  w32((uint32_t)(0x117d68c4), (EAX));
  /* 117d2a43 mov dword ptr [0x117d66bc], esi */
  w32((uint32_t)(0x117d66bc), (ESI));
  /* 117d2a49 jmp 0x117d2a52 */
  goto L_117d2a52;
L_117d2a4b:;
  /* 117d2a4b and dword ptr [0x117d66bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117d66bc)))&(0x0u); w32((uint32_t)(0x117d66bc), (_r)); fl_logic(_r,32); }
L_117d2a52:;
  /* 117d2a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2a54 mov edi, 0x117d66b0 */
  EDI = (0x117d66b0u);
  /* 117d2a59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117d2a5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117d2a5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117d2a5c jmp 0x117d2a6c */
  goto L_117d2a6c;
L_117d2a5e:;
  /* 117d2a5e cmp dword ptr [0x117d6650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117d6650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2a65 je 0x117d2a76 */
  if (C.zf) goto L_117d2a76;
L_117d2a67:;
  /* 117d2a67 call 0x117d2b05 */
  push32(0x117d2a6cu); f_117d2b05();
L_117d2a6c:;
  /* 117d2a6c call 0x117d2b2e */
  push32(0x117d2a71u); f_117d2b2e();
  /* 117d2a71 jmp 0x117d2902 */
  goto L_117d2902;
L_117d2a76:;
  /* 117d2a76 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_117d2a79:;
  /* 117d2a79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117d2a7b call 0x117d25f7 */
  push32(0x117d2a80u); f_117d25f7();
  /* 117d2a80 pop ecx */
  ECX = (pop32());
  /* 117d2a81 mov eax, esi */
  EAX = (ESI);
  /* 117d2a83 pop edi */
  EDI = (pop32());
  /* 117d2a84 pop esi */
  ESI = (pop32());
  /* 117d2a85 pop ebx */
  EBX = (pop32());
  /* 117d2a86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2a87 ret  */
  ESPCHK(0x117d28dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a88 @ 0x117d2a88 (74 bytes, 15 insns) */
void f_117d2a88(void) {
  FTRACE(0x117d2a88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2a88 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d2a8c and dword ptr [0x117d6650], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117d6650)))&(0x0u); w32((uint32_t)(0x117d6650), (_r)); fl_logic(_r,32); }
  /* 117d2a93 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2a96 jne 0x117d2aa8 */
  if (!C.zf) goto L_117d2aa8;
  /* 117d2a98 mov dword ptr [0x117d6650], 1 */
  w32((uint32_t)(0x117d6650), (0x1u));
  /* 117d2aa2 jmp dword ptr [0x117d5034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117d5034)))); return;
L_117d2aa8:;
  /* 117d2aa8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2aab jne 0x117d2abd */
  if (!C.zf) goto L_117d2abd;
  /* 117d2aad mov dword ptr [0x117d6650], 1 */
  w32((uint32_t)(0x117d6650), (0x1u));
  /* 117d2ab7 jmp dword ptr [0x117d502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117d502c)))); return;
L_117d2abd:;
  /* 117d2abd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2ac0 jne 0x117d2ad1 */
  if (!C.zf) goto L_117d2ad1;
  /* 117d2ac2 mov eax, dword ptr [0x117d6680] */
  EAX = (r32((uint32_t)(0x117d6680)));
  /* 117d2ac7 mov dword ptr [0x117d6650], 1 */
  w32((uint32_t)(0x117d6650), (0x1u));
L_117d2ad1:;
  /* 117d2ad1 ret  */
  ESPCHK(0x117d2a88u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad2 @ 0x117d2ad2 (51 bytes, 19 insns) */
void f_117d2ad2(void) {
  FTRACE(0x117d2ad2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2ad2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d2ad6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2adb je 0x117d2aff */
  if (C.zf) goto L_117d2aff;
  /* 117d2add sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2ae0 je 0x117d2af9 */
  if (C.zf) goto L_117d2af9;
  /* 117d2ae2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2ae5 je 0x117d2af3 */
  if (C.zf) goto L_117d2af3;
  /* 117d2ae7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117d2ae8 je 0x117d2aed */
  if (C.zf) goto L_117d2aed;
  /* 117d2aea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2aec ret  */
  ESPCHK(0x117d2ad2u, _esp0);
  ESP += 4; return;
L_117d2aed:;
  /* 117d2aed mov eax, 0x404 */
  EAX = (0x404u);
  /* 117d2af2 ret  */
  ESPCHK(0x117d2ad2u, _esp0);
  ESP += 4; return;
L_117d2af3:;
  /* 117d2af3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 117d2af8 ret  */
  ESPCHK(0x117d2ad2u, _esp0);
  ESP += 4; return;
L_117d2af9:;
  /* 117d2af9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 117d2afe ret  */
  ESPCHK(0x117d2ad2u, _esp0);
  ESP += 4; return;
L_117d2aff:;
  /* 117d2aff mov eax, 0x411 */
  EAX = (0x411u);
  /* 117d2b04 ret  */
  ESPCHK(0x117d2ad2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b05 @ 0x117d2b05 (41 bytes, 17 insns) */
void f_117d2b05(void) {
  FTRACE(0x117d2b05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2b05 push edi */
  push32((uint32_t)(EDI));
  /* 117d2b06 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117d2b08 pop ecx */
  ECX = (pop32());
  /* 117d2b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2b0b mov edi, 0x117d67c0 */
  EDI = (0x117d67c0u);
  /* 117d2b10 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117d2b12 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117d2b13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2b15 mov edi, 0x117d66b0 */
  EDI = (0x117d66b0u);
  /* 117d2b1a mov dword ptr [0x117d66a8], eax */
  w32((uint32_t)(0x117d66a8), (EAX));
  /* 117d2b1f mov dword ptr [0x117d66bc], eax */
  w32((uint32_t)(0x117d66bc), (EAX));
  /* 117d2b24 mov dword ptr [0x117d68c4], eax */
  w32((uint32_t)(0x117d68c4), (EAX));
  /* 117d2b29 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117d2b2a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117d2b2b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117d2b2c pop edi */
  EDI = (pop32());
  /* 117d2b2d ret  */
  ESPCHK(0x117d2b05u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b2e @ 0x117d2b2e (389 bytes, 124 insns) */
void f_117d2b2e(void) {
  FTRACE(0x117d2b2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2b2e push ebp */
  push32((uint32_t)(EBP));
  /* 117d2b2f mov ebp, esp */
  EBP = (ESP);
  /* 117d2b31 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2b37 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 117d2b3a push esi */
  push32((uint32_t)(ESI));
  /* 117d2b3b push eax */
  push32((uint32_t)(EAX));
  /* 117d2b3c push dword ptr [0x117d66a8] */
  push32((uint32_t)(r32((uint32_t)(0x117d66a8))));
  /* 117d2b42 call dword ptr [0x117d5030] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5030))), 0x117d2b48u);
  /* 117d2b48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2b4b jne 0x117d2c67 */
  if (!C.zf) goto L_117d2c67;
  /* 117d2b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2b53 mov esi, 0x100 */
  ESI = (0x100u);
L_117d2b58:;
  /* 117d2b58 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 117d2b5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2b60 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2b62 jb 0x117d2b58 */
  if (C.cf) goto L_117d2b58;
  /* 117d2b64 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 117d2b67 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 117d2b6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d2b70 je 0x117d2ba9 */
  if (C.zf) goto L_117d2ba9;
  /* 117d2b72 push ebx */
  push32((uint32_t)(EBX));
  /* 117d2b73 push edi */
  push32((uint32_t)(EDI));
  /* 117d2b74 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_117d2b77:;
  /* 117d2b77 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 117d2b7a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 117d2b7d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2b7f ja 0x117d2b9e */
  if ((!C.cf&&!C.zf)) goto L_117d2b9e;
  /* 117d2b81 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2b83 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 117d2b8a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d2b8b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 117d2b90 mov ebx, ecx */
  EBX = (ECX);
  /* 117d2b92 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2b95 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117d2b97 mov ecx, ebx */
  ECX = (EBX);
  /* 117d2b99 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 117d2b9c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_117d2b9e:;
  /* 117d2b9e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117d2b9f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117d2ba0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 117d2ba3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d2ba5 jne 0x117d2b77 */
  if (!C.zf) goto L_117d2b77;
  /* 117d2ba7 pop edi */
  EDI = (pop32());
  /* 117d2ba8 pop ebx */
  EBX = (pop32());
L_117d2ba9:;
  /* 117d2ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d2bab lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 117d2bb1 push dword ptr [0x117d68c4] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c4))));
  /* 117d2bb7 push dword ptr [0x117d66a8] */
  push32((uint32_t)(r32((uint32_t)(0x117d66a8))));
  /* 117d2bbd push eax */
  push32((uint32_t)(EAX));
  /* 117d2bbe lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 117d2bc4 push esi */
  push32((uint32_t)(ESI));
  /* 117d2bc5 push eax */
  push32((uint32_t)(EAX));
  /* 117d2bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d2bc8 call 0x117d3ca2 */
  push32(0x117d2bcdu); f_117d3ca2();
  /* 117d2bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 117d2bcf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 117d2bd5 push dword ptr [0x117d66a8] */
  push32((uint32_t)(r32((uint32_t)(0x117d66a8))));
  /* 117d2bdb push esi */
  push32((uint32_t)(ESI));
  /* 117d2bdc push eax */
  push32((uint32_t)(EAX));
  /* 117d2bdd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 117d2be3 push esi */
  push32((uint32_t)(ESI));
  /* 117d2be4 push eax */
  push32((uint32_t)(EAX));
  /* 117d2be5 push esi */
  push32((uint32_t)(ESI));
  /* 117d2be6 push dword ptr [0x117d68c4] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c4))));
  /* 117d2bec call 0x117d3a53 */
  push32(0x117d2bf1u); f_117d3a53();
  /* 117d2bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d2bf3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 117d2bf9 push dword ptr [0x117d66a8] */
  push32((uint32_t)(r32((uint32_t)(0x117d66a8))));
  /* 117d2bff push esi */
  push32((uint32_t)(ESI));
  /* 117d2c00 push eax */
  push32((uint32_t)(EAX));
  /* 117d2c01 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 117d2c07 push esi */
  push32((uint32_t)(ESI));
  /* 117d2c08 push eax */
  push32((uint32_t)(EAX));
  /* 117d2c09 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 117d2c0e push dword ptr [0x117d68c4] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c4))));
  /* 117d2c14 call 0x117d3a53 */
  push32(0x117d2c19u); f_117d3a53();
  /* 117d2c19 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2c1e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_117d2c24:;
  /* 117d2c24 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117d2c27 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 117d2c2a je 0x117d2c42 */
  if (C.zf) goto L_117d2c42;
  /* 117d2c2c or byte ptr [eax + 0x117d67c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(0x10u); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d2c33 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_117d2c3a:;
  /* 117d2c3a mov byte ptr [eax + 0x117d66c0], dl */
  w8((uint32_t)(EAX + 0x117d66c0), (DL));
  /* 117d2c40 jmp 0x117d2c5e */
  goto L_117d2c5e;
L_117d2c42:;
  /* 117d2c42 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 117d2c45 je 0x117d2c57 */
  if (C.zf) goto L_117d2c57;
  /* 117d2c47 or byte ptr [eax + 0x117d67c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(0x20u); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d2c4e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 117d2c55 jmp 0x117d2c3a */
  goto L_117d2c3a;
L_117d2c57:;
  /* 117d2c57 and byte ptr [eax + 0x117d66c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d66c0)))&(0x0u); w8((uint32_t)(EAX + 0x117d66c0), (_r)); fl_logic(_r,8); }
L_117d2c5e:;
  /* 117d2c5e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2c5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d2c60 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117d2c61 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2c63 jb 0x117d2c24 */
  if (C.cf) goto L_117d2c24;
  /* 117d2c65 jmp 0x117d2cb0 */
  goto L_117d2cb0;
L_117d2c67:;
  /* 117d2c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d2c69 mov esi, 0x100 */
  ESI = (0x100u);
L_117d2c6e:;
  /* 117d2c6e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2c71 jb 0x117d2c8c */
  if (C.cf) goto L_117d2c8c;
  /* 117d2c73 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2c76 ja 0x117d2c8c */
  if ((!C.cf&&!C.zf)) goto L_117d2c8c;
  /* 117d2c78 or byte ptr [eax + 0x117d67c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(0x10u); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d2c7f mov cl, al */
  CL = (AL);
  /* 117d2c81 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_117d2c84:;
  /* 117d2c84 mov byte ptr [eax + 0x117d66c0], cl */
  w8((uint32_t)(EAX + 0x117d66c0), (CL));
  /* 117d2c8a jmp 0x117d2cab */
  goto L_117d2cab;
L_117d2c8c:;
  /* 117d2c8c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2c8f jb 0x117d2ca4 */
  if (C.cf) goto L_117d2ca4;
  /* 117d2c91 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2c94 ja 0x117d2ca4 */
  if ((!C.cf&&!C.zf)) goto L_117d2ca4;
  /* 117d2c96 or byte ptr [eax + 0x117d67c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d67c1)))|(0x20u); w8((uint32_t)(EAX + 0x117d67c1), (_r)); fl_logic(_r,8); }
  /* 117d2c9d mov cl, al */
  CL = (AL);
  /* 117d2c9f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117d2ca2 jmp 0x117d2c84 */
  goto L_117d2c84;
L_117d2ca4:;
  /* 117d2ca4 and byte ptr [eax + 0x117d66c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117d66c0)))&(0x0u); w8((uint32_t)(EAX + 0x117d66c0), (_r)); fl_logic(_r,8); }
L_117d2cab:;
  /* 117d2cab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d2cac cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2cae jb 0x117d2c6e */
  if (C.cf) goto L_117d2c6e;
L_117d2cb0:;
  /* 117d2cb0 pop esi */
  ESI = (pop32());
  /* 117d2cb1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2cb2 ret  */
  ESPCHK(0x117d2b2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb3 @ 0x117d2cb3 (28 bytes, 7 insns) */
void f_117d2cb3(void) {
  FTRACE(0x117d2cb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2cb3 cmp dword ptr [0x117d69e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117d69e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2cba jne 0x117d2cce */
  if (!C.zf) goto L_117d2cce;
  /* 117d2cbc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 117d2cbe call 0x117d28db */
  push32(0x117d2cc3u); f_117d28db();
  /* 117d2cc3 pop ecx */
  ECX = (pop32());
  /* 117d2cc4 mov dword ptr [0x117d69e8], 1 */
  w32((uint32_t)(0x117d69e8), (0x1u));
L_117d2cce:;
  /* 117d2cce ret  */
  ESPCHK(0x117d2cb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cd0 @ 0x117d2cd0 (664 bytes, 267 insns) [15 switch table(s)] */
void f_117d2cd0(void) {
  FTRACE(0x117d2cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d2cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 117d2cd1 mov ebp, esp */
  EBP = (ESP);
  /* 117d2cd3 push edi */
  push32((uint32_t)(EDI));
  /* 117d2cd4 push esi */
  push32((uint32_t)(ESI));
  /* 117d2cd5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117d2cd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117d2cdb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2cde mov eax, ecx */
  EAX = (ECX);
  /* 117d2ce0 mov edx, ecx */
  EDX = (ECX);
  /* 117d2ce2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2ce4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2ce6 jbe 0x117d2cf0 */
  if ((C.cf||C.zf)) goto L_117d2cf0;
  /* 117d2ce8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2cea jb 0x117d2e68 */
  if (C.cf) goto L_117d2e68;
L_117d2cf0:;
  /* 117d2cf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117d2cf6 jne 0x117d2d0c */
  if (!C.zf) goto L_117d2d0c;
  /* 117d2cf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2cfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117d2cfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2d01 jb 0x117d2d2c */
  if (C.cf) goto L_117d2d2c;
  /* 117d2d03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2d05 jmp dword ptr [edx*4 + 0x117d2e18] */
  switch (EDX) {
    case 0: goto L_117d2e28;
    case 1: goto L_117d2e30;
    case 2: goto L_117d2e3c;
    case 3: goto L_117d2e50;
    default: x86_unimpl("switch@0x117d2d05 out of table"); return;
  }
L_117d2d0c:;
  /* 117d2d0c mov eax, edi */
  EAX = (EDI);
  /* 117d2d0e mov edx, 3 */
  EDX = (0x3u);
  /* 117d2d13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2d16 jb 0x117d2d24 */
  if (C.cf) goto L_117d2d24;
  /* 117d2d18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117d2d1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2d1d jmp dword ptr [eax*4 + 0x117d2d30] */
  switch (EAX) {
    case 1: goto L_117d2d40;
    case 2: goto L_117d2d6c;
    case 3: goto L_117d2d90;
    default: x86_unimpl("switch@0x117d2d1d out of table"); return;
  }
L_117d2d24:;
  /* 117d2d24 jmp dword ptr [ecx*4 + 0x117d2e28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117d2e28)))); return;
  /* 117d2d2b nop  */
  /* nop */
L_117d2d2c:;
  /* 117d2d2c jmp dword ptr [ecx*4 + 0x117d2dac] */
  switch (ECX) {
    case 0: goto L_117d2e0f;
    case 1: goto L_117d2dfc;
    case 2: goto L_117d2df4;
    case 3: goto L_117d2dec;
    case 4: goto L_117d2de4;
    case 5: goto L_117d2ddc;
    case 6: goto L_117d2dd4;
    case 7: goto L_117d2dcc;
    default: x86_unimpl("switch@0x117d2d2c out of table"); return;
  }
  /* 117d2d33 nop  */
  /* nop */
L_117d2d40:;
  /* 117d2d40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2d42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d2d44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d2d46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d2d49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d2d4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d2d4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2d52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d2d55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2d58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2d5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2d5e jb 0x117d2d2c */
  if (C.cf) goto L_117d2d2c;
  /* 117d2d60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2d62 jmp dword ptr [edx*4 + 0x117d2e18] */
  switch (EDX) {
    case 0: goto L_117d2e28;
    case 1: goto L_117d2e30;
    case 2: goto L_117d2e3c;
    case 3: goto L_117d2e50;
    default: x86_unimpl("switch@0x117d2d62 out of table"); return;
  }
  /* 117d2d69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d2d6c:;
  /* 117d2d6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2d6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d2d70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d2d72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d2d75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2d78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d2d7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2d7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2d81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2d84 jb 0x117d2d2c */
  if (C.cf) goto L_117d2d2c;
  /* 117d2d86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2d88 jmp dword ptr [edx*4 + 0x117d2e18] */
  switch (EDX) {
    case 0: goto L_117d2e28;
    case 1: goto L_117d2e30;
    case 2: goto L_117d2e3c;
    case 3: goto L_117d2e50;
    default: x86_unimpl("switch@0x117d2d88 out of table"); return;
  }
  /* 117d2d8f nop  */
  /* nop */
L_117d2d90:;
  /* 117d2d90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2d92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d2d94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d2d96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d2d97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2d9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d2d9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2d9e jb 0x117d2d2c */
  if (C.cf) goto L_117d2d2c;
  /* 117d2da0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2da2 jmp dword ptr [edx*4 + 0x117d2e18] */
  switch (EDX) {
    case 0: goto L_117d2e28;
    case 1: goto L_117d2e30;
    case 2: goto L_117d2e3c;
    case 3: goto L_117d2e50;
    default: x86_unimpl("switch@0x117d2da2 out of table"); return;
  }
  /* 117d2da9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d2dcc:;
  /* 117d2dcc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117d2dd0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117d2dd4:;
  /* 117d2dd4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117d2dd8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117d2ddc:;
  /* 117d2ddc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117d2de0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117d2de4:;
  /* 117d2de4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117d2de8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117d2dec:;
  /* 117d2dec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117d2df0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117d2df4:;
  /* 117d2df4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117d2df8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117d2dfc:;
  /* 117d2dfc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117d2e00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117d2e04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117d2e0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2e0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117d2e0f:;
  /* 117d2e0f jmp dword ptr [edx*4 + 0x117d2e18] */
  switch (EDX) {
    case 0: goto L_117d2e28;
    case 1: goto L_117d2e30;
    case 2: goto L_117d2e3c;
    case 3: goto L_117d2e50;
    default: x86_unimpl("switch@0x117d2e0f out of table"); return;
  }
  /* 117d2e16 mov edi, edi */
  EDI = (EDI);
L_117d2e28:;
  /* 117d2e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2e2b pop esi */
  ESI = (pop32());
  /* 117d2e2c pop edi */
  EDI = (pop32());
  /* 117d2e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2e2e ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2e2f nop  */
  /* nop */
L_117d2e30:;
  /* 117d2e30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d2e32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d2e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2e37 pop esi */
  ESI = (pop32());
  /* 117d2e38 pop edi */
  EDI = (pop32());
  /* 117d2e39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2e3a ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2e3b nop  */
  /* nop */
L_117d2e3c:;
  /* 117d2e3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d2e3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d2e40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d2e43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d2e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2e49 pop esi */
  ESI = (pop32());
  /* 117d2e4a pop edi */
  EDI = (pop32());
  /* 117d2e4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2e4c ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2e4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d2e50:;
  /* 117d2e50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d2e52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d2e54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d2e57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d2e5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d2e5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d2e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2e63 pop esi */
  ESI = (pop32());
  /* 117d2e64 pop edi */
  EDI = (pop32());
  /* 117d2e65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2e66 ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2e67 nop  */
  /* nop */
L_117d2e68:;
  /* 117d2e68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117d2e6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117d2e70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117d2e76 jne 0x117d2e9c */
  if (!C.zf) goto L_117d2e9c;
  /* 117d2e78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2e7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117d2e7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2e81 jb 0x117d2e90 */
  if (C.cf) goto L_117d2e90;
  /* 117d2e83 std  */
  C.df=1;
  /* 117d2e84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2e86 cld  */
  C.df=0;
  /* 117d2e87 jmp dword ptr [edx*4 + 0x117d2fb0] */
  switch (EDX) {
    case 0: goto L_117d2fc0;
    case 1: goto L_117d2fc8;
    case 2: goto L_117d2fd8;
    case 3: goto L_117d2fec;
    default: x86_unimpl("switch@0x117d2e87 out of table"); return;
  }
  /* 117d2e8e mov edi, edi */
  EDI = (EDI);
L_117d2e90:;
  /* 117d2e90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117d2e92 jmp dword ptr [ecx*4 + 0x117d2f60] */
  switch (ECX) {
    case 0: goto L_117d2fa7;
    default: x86_unimpl("switch@0x117d2e92 out of table"); return;
  }
  /* 117d2e99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d2e9c:;
  /* 117d2e9c mov eax, edi */
  EAX = (EDI);
  /* 117d2e9e mov edx, 3 */
  EDX = (0x3u);
  /* 117d2ea3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2ea6 jb 0x117d2eb4 */
  if (C.cf) goto L_117d2eb4;
  /* 117d2ea8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117d2eab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2ead jmp dword ptr [eax*4 + 0x117d2eb8] */
  switch (EAX) {
    case 1: goto L_117d2ec8;
    case 2: goto L_117d2ee8;
    case 3: goto L_117d2f10;
    default: x86_unimpl("switch@0x117d2ead out of table"); return;
  }
L_117d2eb4:;
  /* 117d2eb4 jmp dword ptr [ecx*4 + 0x117d2fb0] */
  switch (ECX) {
    case 0: goto L_117d2fc0;
    case 1: goto L_117d2fc8;
    case 2: goto L_117d2fd8;
    case 3: goto L_117d2fec;
    default: x86_unimpl("switch@0x117d2eb4 out of table"); return;
  }
  /* 117d2ebb nop  */
  /* nop */
L_117d2ec8:;
  /* 117d2ec8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d2ecb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2ecd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d2ed0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117d2ed1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2ed4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117d2ed5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2ed8 jb 0x117d2e90 */
  if (C.cf) goto L_117d2e90;
  /* 117d2eda std  */
  C.df=1;
  /* 117d2edb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2edd cld  */
  C.df=0;
  /* 117d2ede jmp dword ptr [edx*4 + 0x117d2fb0] */
  switch (EDX) {
    case 0: goto L_117d2fc0;
    case 1: goto L_117d2fc8;
    case 2: goto L_117d2fd8;
    case 3: goto L_117d2fec;
    default: x86_unimpl("switch@0x117d2ede out of table"); return;
  }
  /* 117d2ee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d2ee8:;
  /* 117d2ee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d2eeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2eed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d2ef0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d2ef3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2ef6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d2ef9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2efc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2eff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2f02 jb 0x117d2e90 */
  if (C.cf) goto L_117d2e90;
  /* 117d2f04 std  */
  C.df=1;
  /* 117d2f05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2f07 cld  */
  C.df=0;
  /* 117d2f08 jmp dword ptr [edx*4 + 0x117d2fb0] */
  switch (EDX) {
    case 0: goto L_117d2fc0;
    case 1: goto L_117d2fc8;
    case 2: goto L_117d2fd8;
    case 3: goto L_117d2fec;
    default: x86_unimpl("switch@0x117d2f08 out of table"); return;
  }
  /* 117d2f0f nop  */
  /* nop */
L_117d2f10:;
  /* 117d2f10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d2f13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d2f15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d2f18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d2f1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d2f1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d2f21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d2f24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d2f27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2f2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d2f2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d2f30 jb 0x117d2e90 */
  if (C.cf) goto L_117d2e90;
  /* 117d2f36 std  */
  C.df=1;
  /* 117d2f37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d2f39 cld  */
  C.df=0;
  /* 117d2f3a jmp dword ptr [edx*4 + 0x117d2fb0] */
  switch (EDX) {
    case 0: goto L_117d2fc0;
    case 1: goto L_117d2fc8;
    case 2: goto L_117d2fd8;
    case 3: goto L_117d2fec;
    default: x86_unimpl("switch@0x117d2f3a out of table"); return;
  }
  /* 117d2f41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117d2f44 das  */
  x86_unimpl("das @ 0x117d2f44");
  /* 117d2f46 jge 0x117d2f59 */
  if ((C.sf==C.of)) goto L_117d2f59;
  /* 117d2f48 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x117d2f48");
  /* 117d2f49 das  */
  x86_unimpl("das @ 0x117d2f49");
  /* 117d2f4a jge 0x117d2f5d */
  if ((C.sf==C.of)) goto L_117d2f5d;
  /* 117d2f4c je 0x117d2f7d */
  if (C.zf) goto L_117d2f7d;
  /* 117d2f4e jge 0x117d2f61 */
  if ((C.sf==C.of)) goto L_117d2f61;
  /* 117d2f50 jl 0x117d2f81 */
  if ((C.sf!=C.of)) goto L_117d2f81;
  /* 117d2f52 jge 0x117d2f65 */
  if ((C.sf==C.of)) goto L_117d2f65;
  /* 117d2f54 test byte ptr [edi], ch */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(C.c.b.h); fl_logic(_r,8); }
  /* 117d2f56 jge 0x117d2f69 */
  if ((C.sf==C.of)) goto L_117d2f69;
  /* 117d2f58 mov word ptr [edi], gs */
  w16((uint32_t)(EDI), (C.seg_gs));
  /* 117d2f5a jge 0x117d2f6d */
  if ((C.sf==C.of)) goto L_117d2f6d;
  /* 117d2f5c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
L_117d2f5d:;
  /* 117d2f5d das  */
  x86_unimpl("das @ 0x117d2f5d");
  /* 117d2f5e jge 0x117d2f71 */
  if ((C.sf==C.of)) goto L_117d2f71;
  /* 117d2f64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117d2f68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117d2f6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117d2f70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117d2f74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117d2f78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117d2f7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117d2f80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117d2f84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117d2f88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117d2f8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117d2f90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117d2f94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117d2f98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117d2f9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117d2fa3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d2fa5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117d2fa7:;
  /* 117d2fa7 jmp dword ptr [edx*4 + 0x117d2fb0] */
  switch (EDX) {
    case 0: goto L_117d2fc0;
    case 1: goto L_117d2fc8;
    case 2: goto L_117d2fd8;
    case 3: goto L_117d2fec;
    default: x86_unimpl("switch@0x117d2fa7 out of table"); return;
  }
  /* 117d2fae mov edi, edi */
  EDI = (EDI);
L_117d2fc0:;
  /* 117d2fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2fc3 pop esi */
  ESI = (pop32());
  /* 117d2fc4 pop edi */
  EDI = (pop32());
  /* 117d2fc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2fc6 ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2fc7 nop  */
  /* nop */
L_117d2fc8:;
  /* 117d2fc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d2fcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d2fce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2fd1 pop esi */
  ESI = (pop32());
  /* 117d2fd2 pop edi */
  EDI = (pop32());
  /* 117d2fd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2fd4 ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2fd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d2fd8:;
  /* 117d2fd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d2fdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d2fde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d2fe1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d2fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d2fe7 pop esi */
  ESI = (pop32());
  /* 117d2fe8 pop edi */
  EDI = (pop32());
  /* 117d2fe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d2fea ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
  /* 117d2feb nop  */
  /* nop */
L_117d2fec:;
  /* 117d2fec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d2fef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d2ff2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d2ff5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d2ff8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d2ffb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d2ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3001 pop esi */
  ESI = (pop32());
  /* 117d3002 pop edi */
  EDI = (pop32());
  /* 117d3003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3004 ret  */
  ESPCHK(0x117d2cd0u, _esp0);
  ESP += 4; return;
L_117d2f59: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f59 (unresolved jump table)"); return;
L_117d2f61: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f61 (unresolved jump table)"); return;
L_117d2f65: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f65 (unresolved jump table)"); return;
L_117d2f69: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f69 (unresolved jump table)"); return;
L_117d2f6d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f6d (unresolved jump table)"); return;
L_117d2f71: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f71 (unresolved jump table)"); return;
L_117d2f7d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f7d (unresolved jump table)"); return;
L_117d2f81: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d2f81 (unresolved jump table)"); return;
}

/* FUN_10003005 @ 0x117d3005 (62 bytes, 15 insns) */
void f_117d3005(void) {
  FTRACE(0x117d3005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3005 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 117d300a push 0 */
  push32((uint32_t)(0x0u));
  /* 117d300c push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d3012 call dword ptr [0x117d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5038))), 0x117d3018u);
  /* 117d3018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d301a mov dword ptr [0x117d66a4], eax */
  w32((uint32_t)(0x117d66a4), (EAX));
  /* 117d301f jne 0x117d3022 */
  if (!C.zf) goto L_117d3022;
  /* 117d3021 ret  */
  ESPCHK(0x117d3005u, _esp0);
  ESP += 4; return;
L_117d3022:;
  /* 117d3022 and dword ptr [0x117d669c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117d669c)))&(0x0u); w32((uint32_t)(0x117d669c), (_r)); fl_logic(_r,32); }
  /* 117d3029 and dword ptr [0x117d66a0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117d66a0)))&(0x0u); w32((uint32_t)(0x117d66a0), (_r)); fl_logic(_r,32); }
  /* 117d3030 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3032 mov dword ptr [0x117d6698], eax */
  w32((uint32_t)(0x117d6698), (EAX));
  /* 117d3037 mov dword ptr [0x117d6690], 0x10 */
  w32((uint32_t)(0x117d6690), (0x10u));
  /* 117d3041 pop eax */
  EAX = (pop32());
  /* 117d3042 ret  */
  ESPCHK(0x117d3005u, _esp0);
  ESP += 4; return;
}

/* FUN_10003043 @ 0x117d3043 (43 bytes, 14 insns) */
void f_117d3043(void) {
  FTRACE(0x117d3043u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3043 mov eax, dword ptr [0x117d66a0] */
  EAX = (r32((uint32_t)(0x117d66a0)));
  /* 117d3048 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 117d304b mov eax, dword ptr [0x117d66a4] */
  EAX = (r32((uint32_t)(0x117d66a4)));
  /* 117d3050 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_117d3053:;
  /* 117d3053 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3055 jae 0x117d306b */
  if (!C.cf) goto L_117d306b;
  /* 117d3057 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d305b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d305e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3064 jb 0x117d306d */
  if (C.cf) goto L_117d306d;
  /* 117d3066 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3069 jmp 0x117d3053 */
  goto L_117d3053;
L_117d306b:;
  /* 117d306b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117d306d:;
  /* 117d306d ret  */
  ESPCHK(0x117d3043u, _esp0);
  ESP += 4; return;
}

/* FUN_1000306e @ 0x117d306e (811 bytes, 264 insns) */
void f_117d306e(void) {
  FTRACE(0x117d306eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d306e push ebp */
  push32((uint32_t)(EBP));
  /* 117d306f mov ebp, esp */
  EBP = (ESP);
  /* 117d3071 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3074 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117d3077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d307a push ebx */
  push32((uint32_t)(EBX));
  /* 117d307b push esi */
  push32((uint32_t)(ESI));
  /* 117d307c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 117d307f mov esi, edx */
  ESI = (EDX);
  /* 117d3081 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3084 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 117d3087 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d308a push edi */
  push32((uint32_t)(EDI));
  /* 117d308b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 117d308e mov ecx, esi */
  ECX = (ESI);
  /* 117d3090 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 117d3093 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117d3099 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117d309a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117d309d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117d30a4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117d30a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117d30aa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 117d30ad test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 117d30b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117d30b3 jne 0x117d3134 */
  if (!C.zf) goto L_117d3134;
  /* 117d30b5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117d30b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117d30ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d30bb pop edi */
  EDI = (pop32());
  /* 117d30bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117d30bf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d30c1 jbe 0x117d30c6 */
  if ((C.cf||C.zf)) goto L_117d30c6;
  /* 117d30c3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117d30c6:;
  /* 117d30c6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117d30ca cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d30ce jne 0x117d3118 */
  if (!C.zf) goto L_117d3118;
  /* 117d30d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117d30d3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d30d6 jae 0x117d30f4 */
  if (!C.cf) goto L_117d30f4;
  /* 117d30d8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117d30dd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117d30df lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117d30e3 not edi */
  EDI = (~(EDI));
  /* 117d30e5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117d30e9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117d30eb jne 0x117d3118 */
  if (!C.zf) goto L_117d3118;
  /* 117d30ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d30f0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117d30f2 jmp 0x117d3118 */
  goto L_117d3118;
L_117d30f4:;
  /* 117d30f4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d30f7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117d30fc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117d30fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117d3101 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117d3105 not edi */
  EDI = (~(EDI));
  /* 117d3107 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117d310e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117d3110 jne 0x117d3118 */
  if (!C.zf) goto L_117d3118;
  /* 117d3112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3115 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117d3118:;
  /* 117d3118 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 117d311c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117d3120 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 117d3123 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117d3127 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 117d312b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d312e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 117d3131 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_117d3134:;
  /* 117d3134 mov edi, ebx */
  EDI = (EBX);
  /* 117d3136 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 117d3139 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117d313a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d313d jbe 0x117d3142 */
  if ((C.cf||C.zf)) goto L_117d3142;
  /* 117d313f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117d3141 pop edi */
  EDI = (pop32());
L_117d3142:;
  /* 117d3142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d3145 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117d3148 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117d314b jne 0x117d31f1 */
  if (!C.zf) goto L_117d31f1;
  /* 117d3151 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3154 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d3157 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117d315a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117d315c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117d315f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d3160 pop edx */
  EDX = (pop32());
  /* 117d3161 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3163 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117d3166 jbe 0x117d316d */
  if ((C.cf||C.zf)) goto L_117d316d;
  /* 117d3168 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 117d316b mov ecx, edx */
  ECX = (EDX);
L_117d316d:;
  /* 117d316d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3170 mov edi, ebx */
  EDI = (EBX);
  /* 117d3172 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117d3175 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 117d3178 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117d3179 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d317b jbe 0x117d317f */
  if ((C.cf||C.zf)) goto L_117d317f;
  /* 117d317d mov edi, edx */
  EDI = (EDX);
L_117d317f:;
  /* 117d317f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3181 je 0x117d31ee */
  if (C.zf) goto L_117d31ee;
  /* 117d3183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117d3186 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117d3189 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d318c jne 0x117d31d6 */
  if (!C.zf) goto L_117d31d6;
  /* 117d318e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117d3191 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3194 jae 0x117d31b2 */
  if (!C.cf) goto L_117d31b2;
  /* 117d3196 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117d319b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117d319d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117d31a1 not edx */
  EDX = (~(EDX));
  /* 117d31a3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117d31a7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117d31a9 jne 0x117d31d6 */
  if (!C.zf) goto L_117d31d6;
  /* 117d31ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d31ae and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117d31b0 jmp 0x117d31d6 */
  goto L_117d31d6;
L_117d31b2:;
  /* 117d31b2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d31b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117d31ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117d31bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117d31bf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117d31c3 not edx */
  EDX = (~(EDX));
  /* 117d31c5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117d31cc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117d31ce jne 0x117d31d6 */
  if (!C.zf) goto L_117d31d6;
  /* 117d31d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d31d3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117d31d6:;
  /* 117d31d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117d31d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117d31dc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 117d31df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117d31e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117d31e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117d31e8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 117d31eb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117d31ee:;
  /* 117d31ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_117d31f1:;
  /* 117d31f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d31f5 jne 0x117d3200 */
  if (!C.zf) goto L_117d3200;
  /* 117d31f7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d31fa je 0x117d3289 */
  if (C.zf) goto L_117d3289;
L_117d3200:;
  /* 117d3200 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117d3203 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 117d3206 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 117d3209 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117d320c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117d320f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 117d3212 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117d3215 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117d3218 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117d321b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117d321e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117d3221 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3224 jne 0x117d3289 */
  if (!C.zf) goto L_117d3289;
  /* 117d3226 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 117d322a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d322d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 117d3230 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117d3232 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 117d3236 jae 0x117d325d */
  if (!C.cf) goto L_117d325d;
  /* 117d3238 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d323c jne 0x117d324c */
  if (!C.zf) goto L_117d324c;
  /* 117d323e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117d3243 mov ecx, edi */
  ECX = (EDI);
  /* 117d3245 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117d3247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d324a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_117d324c:;
  /* 117d324c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117d3251 mov ecx, edi */
  ECX = (EDI);
  /* 117d3253 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117d3255 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 117d3259 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117d325b jmp 0x117d3286 */
  goto L_117d3286;
L_117d325d:;
  /* 117d325d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d3261 jne 0x117d3273 */
  if (!C.zf) goto L_117d3273;
  /* 117d3263 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117d3266 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117d326b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117d326d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3270 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117d3273:;
  /* 117d3273 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117d3276 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117d327b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117d327d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 117d3284 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_117d3286:;
  /* 117d3286 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_117d3289:;
  /* 117d3289 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117d328c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 117d328e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 117d3292 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 117d3294 jne 0x117d3394 */
  if (!C.zf) goto L_117d3394;
  /* 117d329a mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d329f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d32a1 je 0x117d3386 */
  if (C.zf) goto L_117d3386;
  /* 117d32a7 mov ecx, dword ptr [0x117d6694] */
  ECX = (r32((uint32_t)(0x117d6694)));
  /* 117d32ad mov edi, dword ptr [0x117d504c] */
  EDI = (r32((uint32_t)(0x117d504c)));
  /* 117d32b3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 117d32b6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d32b9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 117d32be push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117d32c3 push ebx */
  push32((uint32_t)(EBX));
  /* 117d32c4 push ecx */
  push32((uint32_t)(ECX));
  /* 117d32c5 call edi */
  call_ind((uint32_t)(EDI), 0x117d32c7u);
  /* 117d32c7 mov ecx, dword ptr [0x117d6694] */
  ECX = (r32((uint32_t)(0x117d6694)));
  /* 117d32cd mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d32d2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117d32d7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117d32d9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117d32dc mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d32e1 mov ecx, dword ptr [0x117d6694] */
  ECX = (r32((uint32_t)(0x117d6694)));
  /* 117d32e7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 117d32ea and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117d32f2 mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d32f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 117d32fa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 117d32fd mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d3302 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117d3305 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d3309 jne 0x117d3314 */
  if (!C.zf) goto L_117d3314;
  /* 117d330b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117d330f mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
L_117d3314:;
  /* 117d3314 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3318 jne 0x117d3386 */
  if (!C.zf) goto L_117d3386;
  /* 117d331a push ebx */
  push32((uint32_t)(EBX));
  /* 117d331b push 0 */
  push32((uint32_t)(0x0u));
  /* 117d331d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 117d3320 call edi */
  call_ind((uint32_t)(EDI), 0x117d3322u);
  /* 117d3322 mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d3327 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 117d332a push 0 */
  push32((uint32_t)(0x0u));
  /* 117d332c push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d3332 call dword ptr [0x117d5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5048))), 0x117d3338u);
  /* 117d3338 mov eax, dword ptr [0x117d66a0] */
  EAX = (r32((uint32_t)(0x117d66a0)));
  /* 117d333d mov edx, dword ptr [0x117d66a4] */
  EDX = (r32((uint32_t)(0x117d66a4)));
  /* 117d3343 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117d3346 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117d3349 mov ecx, eax */
  ECX = (EAX);
  /* 117d334b mov eax, dword ptr [0x117d669c] */
  EAX = (r32((uint32_t)(0x117d669c)));
  /* 117d3350 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3352 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 117d3356 push ecx */
  push32((uint32_t)(ECX));
  /* 117d3357 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 117d335a push ecx */
  push32((uint32_t)(ECX));
  /* 117d335b push eax */
  push32((uint32_t)(EAX));
  /* 117d335c call 0x117d3df0 */
  push32(0x117d3361u); f_117d3df0();
  /* 117d3361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3367 dec dword ptr [0x117d66a0] */
  { uint32_t _r=(r32((uint32_t)(0x117d66a0)))-1; w32((uint32_t)(0x117d66a0), (_r)); fl_dec(_r,32); }
  /* 117d336d cmp eax, dword ptr [0x117d669c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117d669c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3373 jbe 0x117d3378 */
  if ((C.cf||C.zf)) goto L_117d3378;
  /* 117d3375 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117d3378:;
  /* 117d3378 mov ecx, dword ptr [0x117d66a4] */
  ECX = (r32((uint32_t)(0x117d66a4)));
  /* 117d337e mov dword ptr [0x117d6698], ecx */
  w32((uint32_t)(0x117d6698), (ECX));
  /* 117d3384 jmp 0x117d3389 */
  goto L_117d3389;
L_117d3386:;
  /* 117d3386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_117d3389:;
  /* 117d3389 mov dword ptr [0x117d669c], eax */
  w32((uint32_t)(0x117d669c), (EAX));
  /* 117d338e mov dword ptr [0x117d6694], esi */
  w32((uint32_t)(0x117d6694), (ESI));
L_117d3394:;
  /* 117d3394 pop edi */
  EDI = (pop32());
  /* 117d3395 pop esi */
  ESI = (pop32());
  /* 117d3396 pop ebx */
  EBX = (pop32());
  /* 117d3397 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3398 ret  */
  ESPCHK(0x117d306eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003399 @ 0x117d3399 (777 bytes, 275 insns) */
void f_117d3399(void) {
  FTRACE(0x117d3399u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3399 push ebp */
  push32((uint32_t)(EBP));
  /* 117d339a mov ebp, esp */
  EBP = (ESP);
  /* 117d339c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d339f mov eax, dword ptr [0x117d66a0] */
  EAX = (r32((uint32_t)(0x117d66a0)));
  /* 117d33a4 mov edx, dword ptr [0x117d66a4] */
  EDX = (r32((uint32_t)(0x117d66a4)));
  /* 117d33aa push ebx */
  push32((uint32_t)(EBX));
  /* 117d33ab push esi */
  push32((uint32_t)(ESI));
  /* 117d33ac lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117d33af push edi */
  push32((uint32_t)(EDI));
  /* 117d33b0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 117d33b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d33b6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117d33b9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 117d33bc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 117d33bf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117d33c2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117d33c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d33c6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d33c9 jge 0x117d33d9 */
  if ((C.sf==C.of)) goto L_117d33d9;
  /* 117d33cb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 117d33ce shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 117d33d0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 117d33d4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 117d33d7 jmp 0x117d33e9 */
  goto L_117d33e9;
L_117d33d9:;
  /* 117d33d9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d33dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d33df xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117d33e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117d33e3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 117d33e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117d33e9:;
  /* 117d33e9 mov eax, dword ptr [0x117d6698] */
  EAX = (r32((uint32_t)(0x117d6698)));
  /* 117d33ee mov ebx, eax */
  EBX = (EAX);
  /* 117d33f0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d33f2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d33f5 jae 0x117d3410 */
  if (!C.cf) goto L_117d3410;
L_117d33f7:;
  /* 117d33f7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 117d33fa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 117d33fc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117d33ff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117d3401 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117d3403 jne 0x117d3410 */
  if (!C.zf) goto L_117d3410;
  /* 117d3405 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3408 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d340b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d340e jb 0x117d33f7 */
  if (C.cf) goto L_117d33f7;
L_117d3410:;
  /* 117d3410 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3413 jne 0x117d348e */
  if (!C.zf) goto L_117d348e;
  /* 117d3415 mov ebx, edx */
  EBX = (EDX);
L_117d3417:;
  /* 117d3417 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3419 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d341c jae 0x117d3433 */
  if (!C.cf) goto L_117d3433;
  /* 117d341e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 117d3421 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 117d3423 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117d3426 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117d3428 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117d342a jne 0x117d3431 */
  if (!C.zf) goto L_117d3431;
  /* 117d342c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d342f jmp 0x117d3417 */
  goto L_117d3417;
L_117d3431:;
  /* 117d3431 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117d3433:;
  /* 117d3433 jne 0x117d348e */
  if (!C.zf) goto L_117d348e;
L_117d3435:;
  /* 117d3435 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3438 jae 0x117d344b */
  if (!C.cf) goto L_117d344b;
  /* 117d343a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d343e jne 0x117d3448 */
  if (!C.zf) goto L_117d3448;
  /* 117d3440 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3443 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d3446 jmp 0x117d3435 */
  goto L_117d3435;
L_117d3448:;
  /* 117d3448 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117d344b:;
  /* 117d344b jne 0x117d3473 */
  if (!C.zf) goto L_117d3473;
  /* 117d344d mov ebx, edx */
  EBX = (EDX);
L_117d344f:;
  /* 117d344f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3451 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d3454 jae 0x117d3463 */
  if (!C.cf) goto L_117d3463;
  /* 117d3456 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d345a jne 0x117d3461 */
  if (!C.zf) goto L_117d3461;
  /* 117d345c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d345f jmp 0x117d344f */
  goto L_117d344f;
L_117d3461:;
  /* 117d3461 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117d3463:;
  /* 117d3463 jne 0x117d3473 */
  if (!C.zf) goto L_117d3473;
  /* 117d3465 call 0x117d36a2 */
  push32(0x117d346au); f_117d36a2();
  /* 117d346a mov ebx, eax */
  EBX = (EAX);
  /* 117d346c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117d346e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117d3471 je 0x117d3487 */
  if (C.zf) goto L_117d3487;
L_117d3473:;
  /* 117d3473 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3474 call 0x117d3753 */
  push32(0x117d3479u); f_117d3753();
  /* 117d3479 pop ecx */
  ECX = (pop32());
  /* 117d347a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 117d347d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117d347f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117d3482 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3485 jne 0x117d348e */
  if (!C.zf) goto L_117d348e;
L_117d3487:;
  /* 117d3487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d3489 jmp 0x117d369d */
  goto L_117d369d;
L_117d348e:;
  /* 117d348e mov dword ptr [0x117d6698], ebx */
  w32((uint32_t)(0x117d6698), (EBX));
  /* 117d3494 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117d3497 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 117d3499 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d349c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117d349f je 0x117d34b5 */
  if (C.zf) goto L_117d34b5;
  /* 117d34a1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117d34a8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117d34ac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117d34af and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117d34b1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117d34b3 jne 0x117d34ec */
  if (!C.zf) goto L_117d34ec;
L_117d34b5:;
  /* 117d34b5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 117d34bb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 117d34be and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117d34c1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 117d34c4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d34c8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 117d34cb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 117d34cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117d34d0 jne 0x117d34e9 */
  if (!C.zf) goto L_117d34e9;
L_117d34d2:;
  /* 117d34d2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 117d34d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 117d34db and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117d34de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d34e1 mov edi, esi */
  EDI = (ESI);
  /* 117d34e3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 117d34e5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 117d34e7 je 0x117d34d2 */
  if (C.zf) goto L_117d34d2;
L_117d34e9:;
  /* 117d34e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_117d34ec:;
  /* 117d34ec mov ecx, edx */
  ECX = (EDX);
  /* 117d34ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d34f0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117d34f6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117d34fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117d3500 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117d3504 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 117d3506 jne 0x117d3515 */
  if (!C.zf) goto L_117d3515;
  /* 117d3508 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117d350f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117d3511 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117d3514 pop edi */
  EDI = (pop32());
L_117d3515:;
  /* 117d3515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117d3517 jl 0x117d351e */
  if ((C.sf!=C.of)) goto L_117d351e;
  /* 117d3519 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117d351b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d351c jmp 0x117d3515 */
  goto L_117d3515;
L_117d351e:;
  /* 117d351e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117d3521 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 117d3525 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 117d3527 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d352a mov esi, ecx */
  ESI = (ECX);
  /* 117d352c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117d352f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 117d3532 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117d3533 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3536 jle 0x117d353b */
  if ((C.zf||C.sf!=C.of)) goto L_117d353b;
  /* 117d3538 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117d353a pop esi */
  ESI = (pop32());
L_117d353b:;
  /* 117d353b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d353d je 0x117d3650 */
  if (C.zf) goto L_117d3650;
  /* 117d3543 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117d3546 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3549 jne 0x117d35ac */
  if (!C.zf) goto L_117d35ac;
  /* 117d354b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d354e jge 0x117d357b */
  if ((C.sf==C.of)) goto L_117d357b;
  /* 117d3550 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117d3555 mov ecx, edi */
  ECX = (EDI);
  /* 117d3557 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117d3559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d355c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 117d3560 not ebx */
  EBX = (~(EBX));
  /* 117d3562 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 117d3565 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 117d3569 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 117d356d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 117d356f jne 0x117d35a9 */
  if (!C.zf) goto L_117d35a9;
  /* 117d3571 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3574 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117d3577 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 117d3579 jmp 0x117d35ac */
  goto L_117d35ac;
L_117d357b:;
  /* 117d357b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117d357e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117d3583 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117d3585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d3588 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 117d358c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117d3593 not ebx */
  EBX = (~(EBX));
  /* 117d3595 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117d3597 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 117d3599 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 117d359c jne 0x117d35a9 */
  if (!C.zf) goto L_117d35a9;
  /* 117d359e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d35a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117d35a4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117d35a7 jmp 0x117d35ac */
  goto L_117d35ac;
L_117d35a9:;
  /* 117d35a9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_117d35ac:;
  /* 117d35ac mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 117d35af mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 117d35b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d35b6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 117d35b9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117d35bc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 117d35bf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 117d35c2 je 0x117d365c */
  if (C.zf) goto L_117d365c;
  /* 117d35c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117d35cb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 117d35cf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 117d35d2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 117d35d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117d35d8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117d35db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117d35de mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117d35e1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117d35e4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d35e7 jne 0x117d364d */
  if (!C.zf) goto L_117d364d;
  /* 117d35e9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 117d35ed cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d35f0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 117d35f3 jge 0x117d361e */
  if ((C.sf==C.of)) goto L_117d361e;
  /* 117d35f5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117d35f7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d35fb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 117d35ff jne 0x117d360c */
  if (!C.zf) goto L_117d360c;
  /* 117d3601 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117d3606 mov ecx, esi */
  ECX = (ESI);
  /* 117d3608 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117d360a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_117d360c:;
  /* 117d360c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117d3611 mov ecx, esi */
  ECX = (ESI);
  /* 117d3613 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117d3615 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d3618 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117d361c jmp 0x117d364d */
  goto L_117d364d;
L_117d361e:;
  /* 117d361e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117d3620 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d3624 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 117d3628 jne 0x117d3637 */
  if (!C.zf) goto L_117d3637;
  /* 117d362a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 117d362d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117d3632 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117d3634 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_117d3637:;
  /* 117d3637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d363a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117d3641 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 117d3644 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 117d3649 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 117d364b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_117d364d:;
  /* 117d364d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_117d3650:;
  /* 117d3650 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117d3652 je 0x117d365f */
  if (C.zf) goto L_117d365f;
  /* 117d3654 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117d3656 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 117d365a jmp 0x117d365f */
  goto L_117d365f;
L_117d365c:;
  /* 117d365c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_117d365f:;
  /* 117d365f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 117d3662 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3664 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 117d3667 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117d3669 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 117d366d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117d3670 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 117d3672 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117d3674 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 117d3677 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117d3679 jne 0x117d3695 */
  if (!C.zf) goto L_117d3695;
  /* 117d367b cmp ebx, dword ptr [0x117d669c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117d669c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3681 jne 0x117d3695 */
  if (!C.zf) goto L_117d3695;
  /* 117d3683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d3686 cmp ecx, dword ptr [0x117d6694] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117d6694))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d368c jne 0x117d3695 */
  if (!C.zf) goto L_117d3695;
  /* 117d368e and dword ptr [0x117d669c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117d669c)))&(0x0u); w32((uint32_t)(0x117d669c), (_r)); fl_logic(_r,32); }
L_117d3695:;
  /* 117d3695 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d3698 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117d369a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_117d369d:;
  /* 117d369d pop edi */
  EDI = (pop32());
  /* 117d369e pop esi */
  ESI = (pop32());
  /* 117d369f pop ebx */
  EBX = (pop32());
  /* 117d36a0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d36a1 ret  */
  ESPCHK(0x117d3399u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a2 @ 0x117d36a2 (177 bytes, 53 insns) */
void f_117d36a2(void) {
  FTRACE(0x117d36a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d36a2 mov eax, dword ptr [0x117d66a0] */
  EAX = (r32((uint32_t)(0x117d66a0)));
  /* 117d36a7 mov ecx, dword ptr [0x117d6690] */
  ECX = (r32((uint32_t)(0x117d6690)));
  /* 117d36ad push esi */
  push32((uint32_t)(ESI));
  /* 117d36ae push edi */
  push32((uint32_t)(EDI));
  /* 117d36af xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d36b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d36b3 jne 0x117d36e5 */
  if (!C.zf) goto L_117d36e5;
  /* 117d36b5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 117d36b9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117d36bc push eax */
  push32((uint32_t)(EAX));
  /* 117d36bd push dword ptr [0x117d66a4] */
  push32((uint32_t)(r32((uint32_t)(0x117d66a4))));
  /* 117d36c3 push edi */
  push32((uint32_t)(EDI));
  /* 117d36c4 push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d36ca call dword ptr [0x117d5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5024))), 0x117d36d0u);
  /* 117d36d0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d36d2 je 0x117d3735 */
  if (C.zf) goto L_117d3735;
  /* 117d36d4 add dword ptr [0x117d6690], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x117d6690))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x117d6690), (_r)); fl_add(_a,_b,_r,32); }
  /* 117d36db mov dword ptr [0x117d66a4], eax */
  w32((uint32_t)(0x117d66a4), (EAX));
  /* 117d36e0 mov eax, dword ptr [0x117d66a0] */
  EAX = (r32((uint32_t)(0x117d66a0)));
L_117d36e5:;
  /* 117d36e5 mov ecx, dword ptr [0x117d66a4] */
  ECX = (r32((uint32_t)(0x117d66a4)));
  /* 117d36eb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 117d36f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 117d36f2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117d36f5 push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d36fb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 117d36fe call dword ptr [0x117d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5038))), 0x117d3704u);
  /* 117d3704 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3706 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 117d3709 je 0x117d3735 */
  if (C.zf) goto L_117d3735;
  /* 117d370b push 4 */
  push32((uint32_t)(0x4u));
  /* 117d370d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 117d3712 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117d3717 push edi */
  push32((uint32_t)(EDI));
  /* 117d3718 call dword ptr [0x117d5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5028))), 0x117d371eu);
  /* 117d371e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3720 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 117d3723 jne 0x117d3739 */
  if (!C.zf) goto L_117d3739;
  /* 117d3725 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 117d3728 push edi */
  push32((uint32_t)(EDI));
  /* 117d3729 push dword ptr [0x117d68c8] */
  push32((uint32_t)(r32((uint32_t)(0x117d68c8))));
  /* 117d372f call dword ptr [0x117d5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5048))), 0x117d3735u);
L_117d3735:;
  /* 117d3735 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d3737 jmp 0x117d3750 */
  goto L_117d3750;
L_117d3739:;
  /* 117d3739 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 117d373d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117d373f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 117d3742 inc dword ptr [0x117d66a0] */
  { uint32_t _r=(r32((uint32_t)(0x117d66a0)))+1; w32((uint32_t)(0x117d66a0), (_r)); fl_inc(_r,32); }
  /* 117d3748 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 117d374b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117d374e mov eax, esi */
  EAX = (ESI);
L_117d3750:;
  /* 117d3750 pop edi */
  EDI = (pop32());
  /* 117d3751 pop esi */
  ESI = (pop32());
  /* 117d3752 ret  */
  ESPCHK(0x117d36a2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003753 @ 0x117d3753 (251 bytes, 85 insns) */
void f_117d3753(void) {
  FTRACE(0x117d3753u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3753 push ebp */
  push32((uint32_t)(EBP));
  /* 117d3754 mov ebp, esp */
  EBP = (ESP);
  /* 117d3756 push ecx */
  push32((uint32_t)(ECX));
  /* 117d3757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d375a push ebx */
  push32((uint32_t)(EBX));
  /* 117d375b push esi */
  push32((uint32_t)(ESI));
  /* 117d375c push edi */
  push32((uint32_t)(EDI));
  /* 117d375d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 117d3760 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 117d3763 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117d3765:;
  /* 117d3765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3767 jl 0x117d376e */
  if ((C.sf!=C.of)) goto L_117d376e;
  /* 117d3769 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117d376b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117d376c jmp 0x117d3765 */
  goto L_117d3765;
L_117d376e:;
  /* 117d376e mov eax, ebx */
  EAX = (EBX);
  /* 117d3770 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117d3772 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117d3778 pop edx */
  EDX = (pop32());
  /* 117d3779 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 117d3780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117d3783:;
  /* 117d3783 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 117d3786 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 117d3789 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d378c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117d378d jne 0x117d3783 */
  if (!C.zf) goto L_117d3783;
  /* 117d378f mov edi, ebx */
  EDI = (EBX);
  /* 117d3791 push 4 */
  push32((uint32_t)(0x4u));
  /* 117d3793 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 117d3796 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3799 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117d379e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117d37a3 push edi */
  push32((uint32_t)(EDI));
  /* 117d37a4 call dword ptr [0x117d5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5028))), 0x117d37aau);
  /* 117d37aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d37ac jne 0x117d37b6 */
  if (!C.zf) goto L_117d37b6;
  /* 117d37ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d37b1 jmp 0x117d3849 */
  goto L_117d3849;
L_117d37b6:;
  /* 117d37b6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 117d37bc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d37be ja 0x117d37fc */
  if ((!C.cf&&!C.zf)) goto L_117d37fc;
  /* 117d37c0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_117d37c3:;
  /* 117d37c3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 117d37c7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 117d37ce lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 117d37d4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 117d37db mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117d37dd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 117d37e3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117d37e6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 117d37f0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d37f5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 117d37f8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d37fa jbe 0x117d37c3 */
  if ((C.cf||C.zf)) goto L_117d37c3;
L_117d37fc:;
  /* 117d37fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117d37ff lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 117d3802 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3807 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3809 pop edi */
  EDI = (pop32());
  /* 117d380a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117d380d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117d3810 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 117d3813 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 117d3816 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117d3819 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117d381e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 117d3825 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 117d3828 mov cl, al */
  CL = (AL);
  /* 117d382a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117d382c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d382e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3831 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 117d3834 jne 0x117d3839 */
  if (!C.zf) goto L_117d3839;
  /* 117d3836 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_117d3839:;
  /* 117d3839 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117d383e mov ecx, ebx */
  ECX = (EBX);
  /* 117d3840 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117d3842 not edx */
  EDX = (~(EDX));
  /* 117d3844 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117d3847 mov eax, ebx */
  EAX = (EBX);
L_117d3849:;
  /* 117d3849 pop edi */
  EDI = (pop32());
  /* 117d384a pop esi */
  ESI = (pop32());
  /* 117d384b pop ebx */
  EBX = (pop32());
  /* 117d384c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d384d ret  */
  ESPCHK(0x117d3753u, _esp0);
  ESP += 4; return;
}

/* FUN_1000384e @ 0x117d384e (137 bytes, 50 insns) */
void f_117d384e(void) {
  FTRACE(0x117d384eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d384e push ebx */
  push32((uint32_t)(EBX));
  /* 117d384f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d3851 cmp dword ptr [0x117d6654], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117d6654))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3857 push esi */
  push32((uint32_t)(ESI));
  /* 117d3858 push edi */
  push32((uint32_t)(EDI));
  /* 117d3859 jne 0x117d389d */
  if (!C.zf) goto L_117d389d;
  /* 117d385b push 0x117d5450 */
  push32((uint32_t)(0x117d5450u));
  /* 117d3860 call dword ptr [0x117d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5018))), 0x117d3866u);
  /* 117d3866 mov edi, eax */
  EDI = (EAX);
  /* 117d3868 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d386a je 0x117d38d3 */
  if (C.zf) goto L_117d38d3;
  /* 117d386c mov esi, dword ptr [0x117d501c] */
  ESI = (r32((uint32_t)(0x117d501c)));
  /* 117d3872 push 0x117d5444 */
  push32((uint32_t)(0x117d5444u));
  /* 117d3877 push edi */
  push32((uint32_t)(EDI));
  /* 117d3878 call esi */
  call_ind((uint32_t)(ESI), 0x117d387au);
  /* 117d387a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d387c mov dword ptr [0x117d6654], eax */
  w32((uint32_t)(0x117d6654), (EAX));
  /* 117d3881 je 0x117d38d3 */
  if (C.zf) goto L_117d38d3;
  /* 117d3883 push 0x117d5434 */
  push32((uint32_t)(0x117d5434u));
  /* 117d3888 push edi */
  push32((uint32_t)(EDI));
  /* 117d3889 call esi */
  call_ind((uint32_t)(ESI), 0x117d388bu);
  /* 117d388b push 0x117d5420 */
  push32((uint32_t)(0x117d5420u));
  /* 117d3890 push edi */
  push32((uint32_t)(EDI));
  /* 117d3891 mov dword ptr [0x117d6658], eax */
  w32((uint32_t)(0x117d6658), (EAX));
  /* 117d3896 call esi */
  call_ind((uint32_t)(ESI), 0x117d3898u);
  /* 117d3898 mov dword ptr [0x117d665c], eax */
  w32((uint32_t)(0x117d665c), (EAX));
L_117d389d:;
  /* 117d389d mov eax, dword ptr [0x117d6658] */
  EAX = (r32((uint32_t)(0x117d6658)));
  /* 117d38a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d38a4 je 0x117d38bc */
  if (C.zf) goto L_117d38bc;
  /* 117d38a6 call eax */
  call_ind((uint32_t)(EAX), 0x117d38a8u);
  /* 117d38a8 mov ebx, eax */
  EBX = (EAX);
  /* 117d38aa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117d38ac je 0x117d38bc */
  if (C.zf) goto L_117d38bc;
  /* 117d38ae mov eax, dword ptr [0x117d665c] */
  EAX = (r32((uint32_t)(0x117d665c)));
  /* 117d38b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d38b5 je 0x117d38bc */
  if (C.zf) goto L_117d38bc;
  /* 117d38b7 push ebx */
  push32((uint32_t)(EBX));
  /* 117d38b8 call eax */
  call_ind((uint32_t)(EAX), 0x117d38bau);
  /* 117d38ba mov ebx, eax */
  EBX = (EAX);
L_117d38bc:;
  /* 117d38bc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117d38c0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117d38c4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117d38c8 push ebx */
  push32((uint32_t)(EBX));
  /* 117d38c9 call dword ptr [0x117d6654] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d6654))), 0x117d38cfu);
L_117d38cf:;
  /* 117d38cf pop edi */
  EDI = (pop32());
  /* 117d38d0 pop esi */
  ESI = (pop32());
  /* 117d38d1 pop ebx */
  EBX = (pop32());
  /* 117d38d2 ret  */
  ESPCHK(0x117d384eu, _esp0);
  ESP += 4; return;
L_117d38d3:;
  /* 117d38d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d38d5 jmp 0x117d38cf */
  goto L_117d38cf;
}

/* _strncpy @ 0x117d38e0 (254 bytes, 109 insns) */
void f_117d38e0(void) {
  FTRACE(0x117d38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d38e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117d38e4 push edi */
  push32((uint32_t)(EDI));
  /* 117d38e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117d38e7 je 0x117d3963 */
  if (C.zf) goto L_117d3963;
  /* 117d38e9 push esi */
  push32((uint32_t)(ESI));
  /* 117d38ea push ebx */
  push32((uint32_t)(EBX));
  /* 117d38eb mov ebx, ecx */
  EBX = (ECX);
  /* 117d38ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 117d38f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117d38f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 117d38fb jne 0x117d3904 */
  if (!C.zf) goto L_117d3904;
  /* 117d38fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3900 jne 0x117d3971 */
  if (!C.zf) goto L_117d3971;
  /* 117d3902 jmp 0x117d3925 */
  goto L_117d3925;
L_117d3904:;
  /* 117d3904 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3906 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d3907 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d390a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d390b je 0x117d3932 */
  if (C.zf) goto L_117d3932;
  /* 117d390d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d390f je 0x117d393a */
  if (C.zf) goto L_117d393a;
  /* 117d3911 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117d3917 jne 0x117d3904 */
  if (!C.zf) goto L_117d3904;
  /* 117d3919 mov ebx, ecx */
  EBX = (ECX);
  /* 117d391b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d391e jne 0x117d3971 */
  if (!C.zf) goto L_117d3971;
L_117d3920:;
  /* 117d3920 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117d3923 je 0x117d3932 */
  if (C.zf) goto L_117d3932;
L_117d3925:;
  /* 117d3925 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3927 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d3928 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d392a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d392b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117d392d je 0x117d395e */
  if (C.zf) goto L_117d395e;
  /* 117d392f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117d3930 jne 0x117d3925 */
  if (!C.zf) goto L_117d3925;
L_117d3932:;
  /* 117d3932 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117d3936 pop ebx */
  EBX = (pop32());
  /* 117d3937 pop esi */
  ESI = (pop32());
  /* 117d3938 pop edi */
  EDI = (pop32());
  /* 117d3939 ret  */
  ESPCHK(0x117d38e0u, _esp0);
  ESP += 4; return;
L_117d393a:;
  /* 117d393a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117d3940 je 0x117d3954 */
  if (C.zf) goto L_117d3954;
L_117d3942:;
  /* 117d3942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3944 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d3945 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d3946 je 0x117d39d6 */
  if (C.zf) goto L_117d39d6;
  /* 117d394c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117d3952 jne 0x117d3942 */
  if (!C.zf) goto L_117d3942;
L_117d3954:;
  /* 117d3954 mov ebx, ecx */
  EBX = (ECX);
  /* 117d3956 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3959 jne 0x117d39c7 */
  if (!C.zf) goto L_117d39c7;
L_117d395b:;
  /* 117d395b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d395d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117d395e:;
  /* 117d395e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117d395f jne 0x117d395b */
  if (!C.zf) goto L_117d395b;
  /* 117d3961 pop ebx */
  EBX = (pop32());
  /* 117d3962 pop esi */
  ESI = (pop32());
L_117d3963:;
  /* 117d3963 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d3967 pop edi */
  EDI = (pop32());
  /* 117d3968 ret  */
  ESPCHK(0x117d38e0u, _esp0);
  ESP += 4; return;
L_117d3969:;
  /* 117d3969 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117d396b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d396e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d396f je 0x117d3920 */
  if (C.zf) goto L_117d3920;
L_117d3971:;
  /* 117d3971 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117d3976 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117d3978 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d397a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117d397d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117d397f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 117d3981 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3984 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117d3989 je 0x117d3969 */
  if (C.zf) goto L_117d3969;
  /* 117d398b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117d398d je 0x117d39bb */
  if (C.zf) goto L_117d39bb;
  /* 117d398f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117d3991 je 0x117d39b1 */
  if (C.zf) goto L_117d39b1;
  /* 117d3993 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117d3999 je 0x117d39a7 */
  if (C.zf) goto L_117d39a7;
  /* 117d399b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117d39a1 jne 0x117d3969 */
  if (!C.zf) goto L_117d3969;
  /* 117d39a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117d39a5 jmp 0x117d39bf */
  goto L_117d39bf;
L_117d39a7:;
  /* 117d39a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117d39ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117d39af jmp 0x117d39bf */
  goto L_117d39bf;
L_117d39b1:;
  /* 117d39b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117d39b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117d39b9 jmp 0x117d39bf */
  goto L_117d39bf;
L_117d39bb:;
  /* 117d39bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117d39bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_117d39bf:;
  /* 117d39bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d39c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d39c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d39c5 je 0x117d39d1 */
  if (C.zf) goto L_117d39d1;
L_117d39c7:;
  /* 117d39c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117d39c9:;
  /* 117d39c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 117d39cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d39ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d39cf jne 0x117d39c9 */
  if (!C.zf) goto L_117d39c9;
L_117d39d1:;
  /* 117d39d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117d39d4 jne 0x117d395b */
  if (!C.zf) goto L_117d395b;
L_117d39d6:;
  /* 117d39d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117d39da pop ebx */
  EBX = (pop32());
  /* 117d39db pop esi */
  ESI = (pop32());
  /* 117d39dc pop edi */
  EDI = (pop32());
  /* 117d39dd ret  */
  ESPCHK(0x117d38e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x117d39e0 (88 bytes, 40 insns) */
void f_117d39e0(void) {
  FTRACE(0x117d39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d39e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 117d39e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d39e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117d39ea je 0x117d3a33 */
  if (C.zf) goto L_117d3a33;
  /* 117d39ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d39ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 117d39f2 push edi */
  push32((uint32_t)(EDI));
  /* 117d39f3 mov edi, ecx */
  EDI = (ECX);
  /* 117d39f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d39f8 jb 0x117d3a27 */
  if (C.cf) goto L_117d3a27;
  /* 117d39fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117d39fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 117d39ff je 0x117d3a09 */
  if (C.zf) goto L_117d3a09;
  /* 117d3a01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117d3a03:;
  /* 117d3a03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3a05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d3a06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d3a07 jne 0x117d3a03 */
  if (!C.zf) goto L_117d3a03;
L_117d3a09:;
  /* 117d3a09 mov ecx, eax */
  ECX = (EAX);
  /* 117d3a0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117d3a0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3a10 mov ecx, eax */
  ECX = (EAX);
  /* 117d3a12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117d3a15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3a17 mov ecx, edx */
  ECX = (EDX);
  /* 117d3a19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117d3a1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3a1f je 0x117d3a27 */
  if (C.zf) goto L_117d3a27;
  /* 117d3a21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117d3a23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117d3a25 je 0x117d3a2d */
  if (C.zf) goto L_117d3a2d;
L_117d3a27:;
  /* 117d3a27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3a29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d3a2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117d3a2b jne 0x117d3a27 */
  if (!C.zf) goto L_117d3a27;
L_117d3a2d:;
  /* 117d3a2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d3a31 pop edi */
  EDI = (pop32());
  /* 117d3a32 ret  */
  ESPCHK(0x117d39e0u, _esp0);
  ESP += 4; return;
L_117d3a33:;
  /* 117d3a33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d3a37 ret  */
  ESPCHK(0x117d39e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a38 @ 0x117d3a38 (27 bytes, 13 insns) */
void f_117d3a38(void) {
  FTRACE(0x117d3a38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3a38 mov eax, dword ptr [0x117d6660] */
  EAX = (r32((uint32_t)(0x117d6660)));
  /* 117d3a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3a3f je 0x117d3a50 */
  if (C.zf) goto L_117d3a50;
  /* 117d3a41 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117d3a45 call eax */
  call_ind((uint32_t)(EAX), 0x117d3a47u);
  /* 117d3a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3a49 pop ecx */
  ECX = (pop32());
  /* 117d3a4a je 0x117d3a50 */
  if (C.zf) goto L_117d3a50;
  /* 117d3a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3a4e pop eax */
  EAX = (pop32());
  /* 117d3a4f ret  */
  ESPCHK(0x117d3a38u, _esp0);
  ESP += 4; return;
L_117d3a50:;
  /* 117d3a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117d3a52 ret  */
  ESPCHK(0x117d3a38u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a53 @ 0x117d3a53 (511 bytes, 193 insns) */
void f_117d3a53(void) {
  FTRACE(0x117d3a53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3a53 push ebp */
  push32((uint32_t)(EBP));
  /* 117d3a54 mov ebp, esp */
  EBP = (ESP);
  /* 117d3a56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117d3a58 push 0x117d5468 */
  push32((uint32_t)(0x117d5468u));
  /* 117d3a5d push 0x117d4220 */
  push32((uint32_t)(0x117d4220u));
  /* 117d3a62 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117d3a68 push eax */
  push32((uint32_t)(EAX));
  /* 117d3a69 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117d3a70 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3a73 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3a74 push esi */
  push32((uint32_t)(ESI));
  /* 117d3a75 push edi */
  push32((uint32_t)(EDI));
  /* 117d3a76 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117d3a79 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d3a7b cmp dword ptr [0x117d6688], edi */
  { uint32_t _a=(r32((uint32_t)(0x117d6688))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3a81 jne 0x117d3ac9 */
  if (!C.zf) goto L_117d3ac9;
  /* 117d3a83 push edi */
  push32((uint32_t)(EDI));
  /* 117d3a84 push edi */
  push32((uint32_t)(EDI));
  /* 117d3a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3a87 pop ebx */
  EBX = (pop32());
  /* 117d3a88 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3a89 push 0x117d5460 */
  push32((uint32_t)(0x117d5460u));
  /* 117d3a8e mov esi, 0x100 */
  ESI = (0x100u);
  /* 117d3a93 push esi */
  push32((uint32_t)(ESI));
  /* 117d3a94 push edi */
  push32((uint32_t)(EDI));
  /* 117d3a95 call dword ptr [0x117d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d500c))), 0x117d3a9bu);
  /* 117d3a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3a9d je 0x117d3aa7 */
  if (C.zf) goto L_117d3aa7;
  /* 117d3a9f mov dword ptr [0x117d6688], ebx */
  w32((uint32_t)(0x117d6688), (EBX));
  /* 117d3aa5 jmp 0x117d3ac9 */
  goto L_117d3ac9;
L_117d3aa7:;
  /* 117d3aa7 push edi */
  push32((uint32_t)(EDI));
  /* 117d3aa8 push edi */
  push32((uint32_t)(EDI));
  /* 117d3aa9 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3aaa push 0x117d545c */
  push32((uint32_t)(0x117d545cu));
  /* 117d3aaf push esi */
  push32((uint32_t)(ESI));
  /* 117d3ab0 push edi */
  push32((uint32_t)(EDI));
  /* 117d3ab1 call dword ptr [0x117d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5010))), 0x117d3ab7u);
  /* 117d3ab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3ab9 je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3abf mov dword ptr [0x117d6688], 2 */
  w32((uint32_t)(0x117d6688), (0x2u));
L_117d3ac9:;
  /* 117d3ac9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3acc jle 0x117d3ade */
  if ((C.zf||C.sf!=C.of)) goto L_117d3ade;
  /* 117d3ace push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117d3ad1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3ad4 call 0x117d3c77 */
  push32(0x117d3ad9u); f_117d3c77();
  /* 117d3ad9 pop ecx */
  ECX = (pop32());
  /* 117d3ada pop ecx */
  ECX = (pop32());
  /* 117d3adb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_117d3ade:;
  /* 117d3ade mov eax, dword ptr [0x117d6688] */
  EAX = (r32((uint32_t)(0x117d6688)));
  /* 117d3ae3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3ae6 jne 0x117d3b05 */
  if (!C.zf) goto L_117d3b05;
  /* 117d3ae8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 117d3aeb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117d3aee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117d3af1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3af4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3af7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d3afa call dword ptr [0x117d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5010))), 0x117d3b00u);
  /* 117d3b00 jmp 0x117d3be3 */
  goto L_117d3be3;
L_117d3b05:;
  /* 117d3b05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3b08 jne 0x117d3be1 */
  if (!C.zf) goto L_117d3be1;
  /* 117d3b0e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3b11 jne 0x117d3b1b */
  if (!C.zf) goto L_117d3b1b;
  /* 117d3b13 mov eax, dword ptr [0x117d6680] */
  EAX = (r32((uint32_t)(0x117d6680)));
  /* 117d3b18 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_117d3b1b:;
  /* 117d3b1b push edi */
  push32((uint32_t)(EDI));
  /* 117d3b1c push edi */
  push32((uint32_t)(EDI));
  /* 117d3b1d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117d3b20 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3b23 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 117d3b26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117d3b28 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3b2a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117d3b2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d3b2e push eax */
  push32((uint32_t)(EAX));
  /* 117d3b2f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117d3b32 call dword ptr [0x117d5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5020))), 0x117d3b38u);
  /* 117d3b38 mov ebx, eax */
  EBX = (EAX);
  /* 117d3b3a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 117d3b3d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3b3f je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3b45 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117d3b48 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 117d3b4b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3b4e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117d3b50 call 0x117d4300 */
  push32(0x117d3b55u); f_117d4300();
  /* 117d3b55 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117d3b58 mov eax, esp */
  EAX = (ESP);
  /* 117d3b5a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117d3b5d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d3b61 jmp 0x117d3b76 */
  goto L_117d3b76;
  /* 117d3b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3b65 pop eax */
  EAX = (pop32());
  /* 117d3b66 ret  */
  ESPCHK(0x117d3a53u, _esp0);
  ESP += 4; return;
  /* 117d3b67 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117d3b6a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d3b6c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 117d3b6f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d3b73 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_117d3b76:;
  /* 117d3b76 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3b79 je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3b7b push ebx */
  push32((uint32_t)(EBX));
  /* 117d3b7c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117d3b7f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117d3b82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3b85 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3b87 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117d3b8a call dword ptr [0x117d5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5020))), 0x117d3b90u);
  /* 117d3b90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3b92 je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3b94 push edi */
  push32((uint32_t)(EDI));
  /* 117d3b95 push edi */
  push32((uint32_t)(EDI));
  /* 117d3b96 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3b97 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117d3b9a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3b9d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d3ba0 call dword ptr [0x117d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d500c))), 0x117d3ba6u);
  /* 117d3ba6 mov esi, eax */
  ESI = (EAX);
  /* 117d3ba8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 117d3bab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3bad je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3baf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 117d3bb3 je 0x117d3bf5 */
  if (C.zf) goto L_117d3bf5;
  /* 117d3bb5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3bb8 je 0x117d3c70 */
  if (C.zf) goto L_117d3c70;
  /* 117d3bbe cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3bc1 jg 0x117d3be1 */
  if ((!C.zf&&C.sf==C.of)) goto L_117d3be1;
  /* 117d3bc3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 117d3bc6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117d3bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3bca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117d3bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3bd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d3bd3 call dword ptr [0x117d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d500c))), 0x117d3bd9u);
  /* 117d3bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3bdb jne 0x117d3c70 */
  if (!C.zf) goto L_117d3c70;
L_117d3be1:;
  /* 117d3be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117d3be3:;
  /* 117d3be3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 117d3be6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117d3be9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117d3bf0 pop edi */
  EDI = (pop32());
  /* 117d3bf1 pop esi */
  ESI = (pop32());
  /* 117d3bf2 pop ebx */
  EBX = (pop32());
  /* 117d3bf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3bf4 ret  */
  ESPCHK(0x117d3a53u, _esp0);
  ESP += 4; return;
L_117d3bf5:;
  /* 117d3bf5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117d3bfc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 117d3bff add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3c02 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117d3c04 call 0x117d4300 */
  push32(0x117d3c09u); f_117d4300();
  /* 117d3c09 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117d3c0c mov ebx, esp */
  EBX = (ESP);
  /* 117d3c0e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 117d3c11 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d3c15 jmp 0x117d3c29 */
  goto L_117d3c29;
  /* 117d3c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3c19 pop eax */
  EAX = (pop32());
  /* 117d3c1a ret  */
  ESPCHK(0x117d3a53u, _esp0);
  ESP += 4; return;
  /* 117d3c1b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117d3c1e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117d3c20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d3c22 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d3c26 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_117d3c29:;
  /* 117d3c29 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3c2b je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3c2d push esi */
  push32((uint32_t)(ESI));
  /* 117d3c2e push ebx */
  push32((uint32_t)(EBX));
  /* 117d3c2f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 117d3c32 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117d3c35 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3c38 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d3c3b call dword ptr [0x117d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d500c))), 0x117d3c41u);
  /* 117d3c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3c43 je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
  /* 117d3c45 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3c48 push edi */
  push32((uint32_t)(EDI));
  /* 117d3c49 push edi */
  push32((uint32_t)(EDI));
  /* 117d3c4a jne 0x117d3c50 */
  if (!C.zf) goto L_117d3c50;
  /* 117d3c4c push edi */
  push32((uint32_t)(EDI));
  /* 117d3c4d push edi */
  push32((uint32_t)(EDI));
  /* 117d3c4e jmp 0x117d3c56 */
  goto L_117d3c56;
L_117d3c50:;
  /* 117d3c50 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 117d3c53 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_117d3c56:;
  /* 117d3c56 push esi */
  push32((uint32_t)(ESI));
  /* 117d3c57 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3c58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117d3c5d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117d3c60 call dword ptr [0x117d5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5060))), 0x117d3c66u);
  /* 117d3c66 mov esi, eax */
  ESI = (EAX);
  /* 117d3c68 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3c6a je 0x117d3be1 */
  if (C.zf) goto L_117d3be1;
L_117d3c70:;
  /* 117d3c70 mov eax, esi */
  EAX = (ESI);
  /* 117d3c72 jmp 0x117d3be3 */
  goto L_117d3be3;
}

/* FUN_10003c77 @ 0x117d3c77 (43 bytes, 20 insns) */
void f_117d3c77(void) {
  FTRACE(0x117d3c77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3c77 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d3c7b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117d3c7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117d3c81 push esi */
  push32((uint32_t)(ESI));
  /* 117d3c82 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 117d3c85 je 0x117d3c94 */
  if (C.zf) goto L_117d3c94;
L_117d3c87:;
  /* 117d3c87 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d3c8a je 0x117d3c94 */
  if (C.zf) goto L_117d3c94;
  /* 117d3c8c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d3c8d mov esi, ecx */
  ESI = (ECX);
  /* 117d3c8f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117d3c90 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117d3c92 jne 0x117d3c87 */
  if (!C.zf) goto L_117d3c87;
L_117d3c94:;
  /* 117d3c94 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117d3c97 pop esi */
  ESI = (pop32());
  /* 117d3c98 jne 0x117d3c9f */
  if (!C.zf) goto L_117d3c9f;
  /* 117d3c9a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3c9e ret  */
  ESPCHK(0x117d3c77u, _esp0);
  ESP += 4; return;
L_117d3c9f:;
  /* 117d3c9f mov eax, edx */
  EAX = (EDX);
  /* 117d3ca1 ret  */
  ESPCHK(0x117d3c77u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca2 @ 0x117d3ca2 (318 bytes, 123 insns) */
void f_117d3ca2(void) {
  FTRACE(0x117d3ca2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3ca2 push ebp */
  push32((uint32_t)(EBP));
  /* 117d3ca3 mov ebp, esp */
  EBP = (ESP);
  /* 117d3ca5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117d3ca7 push 0x117d5480 */
  push32((uint32_t)(0x117d5480u));
  /* 117d3cac push 0x117d4220 */
  push32((uint32_t)(0x117d4220u));
  /* 117d3cb1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117d3cb7 push eax */
  push32((uint32_t)(EAX));
  /* 117d3cb8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117d3cbf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3cc2 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3cc3 push esi */
  push32((uint32_t)(ESI));
  /* 117d3cc4 push edi */
  push32((uint32_t)(EDI));
  /* 117d3cc5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117d3cc8 mov eax, dword ptr [0x117d668c] */
  EAX = (r32((uint32_t)(0x117d668c)));
  /* 117d3ccd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d3ccf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3cd1 jne 0x117d3d11 */
  if (!C.zf) goto L_117d3d11;
  /* 117d3cd3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117d3cd6 push eax */
  push32((uint32_t)(EAX));
  /* 117d3cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3cd9 pop esi */
  ESI = (pop32());
  /* 117d3cda push esi */
  push32((uint32_t)(ESI));
  /* 117d3cdb push 0x117d5460 */
  push32((uint32_t)(0x117d5460u));
  /* 117d3ce0 push esi */
  push32((uint32_t)(ESI));
  /* 117d3ce1 call dword ptr [0x117d5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5008))), 0x117d3ce7u);
  /* 117d3ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3ce9 je 0x117d3cef */
  if (C.zf) goto L_117d3cef;
  /* 117d3ceb mov eax, esi */
  EAX = (ESI);
  /* 117d3ced jmp 0x117d3d0c */
  goto L_117d3d0c;
L_117d3cef:;
  /* 117d3cef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117d3cf2 push eax */
  push32((uint32_t)(EAX));
  /* 117d3cf3 push esi */
  push32((uint32_t)(ESI));
  /* 117d3cf4 push 0x117d545c */
  push32((uint32_t)(0x117d545cu));
  /* 117d3cf9 push esi */
  push32((uint32_t)(ESI));
  /* 117d3cfa push ebx */
  push32((uint32_t)(EBX));
  /* 117d3cfb call dword ptr [0x117d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5014))), 0x117d3d01u);
  /* 117d3d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117d3d03 je 0x117d3dd7 */
  if (C.zf) goto L_117d3dd7;
  /* 117d3d09 push 2 */
  push32((uint32_t)(0x2u));
  /* 117d3d0b pop eax */
  EAX = (pop32());
L_117d3d0c:;
  /* 117d3d0c mov dword ptr [0x117d668c], eax */
  w32((uint32_t)(0x117d668c), (EAX));
L_117d3d11:;
  /* 117d3d11 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3d14 jne 0x117d3d3a */
  if (!C.zf) goto L_117d3d3a;
  /* 117d3d16 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117d3d19 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3d1b jne 0x117d3d22 */
  if (!C.zf) goto L_117d3d22;
  /* 117d3d1d mov eax, dword ptr [0x117d6670] */
  EAX = (r32((uint32_t)(0x117d6670)));
L_117d3d22:;
  /* 117d3d22 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117d3d25 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3d28 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3d2b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d3d2e push eax */
  push32((uint32_t)(EAX));
  /* 117d3d2f call dword ptr [0x117d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5014))), 0x117d3d35u);
  /* 117d3d35 jmp 0x117d3dd9 */
  goto L_117d3dd9;
L_117d3d3a:;
  /* 117d3d3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3d3d jne 0x117d3dd7 */
  if (!C.zf) goto L_117d3dd7;
  /* 117d3d43 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3d46 jne 0x117d3d50 */
  if (!C.zf) goto L_117d3d50;
  /* 117d3d48 mov eax, dword ptr [0x117d6680] */
  EAX = (r32((uint32_t)(0x117d6680)));
  /* 117d3d4d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_117d3d50:;
  /* 117d3d50 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3d51 push ebx */
  push32((uint32_t)(EBX));
  /* 117d3d52 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3d55 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3d58 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117d3d5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117d3d5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3d5f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117d3d62 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d3d63 push eax */
  push32((uint32_t)(EAX));
  /* 117d3d64 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117d3d67 call dword ptr [0x117d5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5020))), 0x117d3d6du);
  /* 117d3d6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117d3d70 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3d72 je 0x117d3dd7 */
  if (C.zf) goto L_117d3dd7;
  /* 117d3d74 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 117d3d77 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 117d3d7a mov eax, edi */
  EAX = (EDI);
  /* 117d3d7c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3d7f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117d3d81 call 0x117d4300 */
  push32(0x117d3d86u); f_117d4300();
  /* 117d3d86 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117d3d89 mov esi, esp */
  ESI = (ESP);
  /* 117d3d8b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 117d3d8e push edi */
  push32((uint32_t)(EDI));
  /* 117d3d8f push ebx */
  push32((uint32_t)(EBX));
  /* 117d3d90 push esi */
  push32((uint32_t)(ESI));
  /* 117d3d91 call 0x117d39e0 */
  push32(0x117d3d96u); f_117d39e0();
  /* 117d3d96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3d99 jmp 0x117d3da6 */
  goto L_117d3da6;
  /* 117d3d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3d9d pop eax */
  EAX = (pop32());
  /* 117d3d9e ret  */
  ESPCHK(0x117d3ca2u, _esp0);
  ESP += 4; return;
  /* 117d3d9f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117d3da2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117d3da4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_117d3da6:;
  /* 117d3da6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117d3daa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3dac je 0x117d3dd7 */
  if (C.zf) goto L_117d3dd7;
  /* 117d3dae push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 117d3db1 push esi */
  push32((uint32_t)(ESI));
  /* 117d3db2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117d3db5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117d3db8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117d3dba push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117d3dbd call dword ptr [0x117d5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5020))), 0x117d3dc3u);
  /* 117d3dc3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3dc5 je 0x117d3dd7 */
  if (C.zf) goto L_117d3dd7;
  /* 117d3dc7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117d3dca push eax */
  push32((uint32_t)(EAX));
  /* 117d3dcb push esi */
  push32((uint32_t)(ESI));
  /* 117d3dcc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d3dcf call dword ptr [0x117d5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x117d5008))), 0x117d3dd5u);
  /* 117d3dd5 jmp 0x117d3dd9 */
  goto L_117d3dd9;
L_117d3dd7:;
  /* 117d3dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117d3dd9:;
  /* 117d3dd9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 117d3ddc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117d3ddf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117d3de6 pop edi */
  EDI = (pop32());
  /* 117d3de7 pop esi */
  ESI = (pop32());
  /* 117d3de8 pop ebx */
  EBX = (pop32());
  /* 117d3de9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3dea ret  */
  ESPCHK(0x117d3ca2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x117d3df0 (664 bytes, 265 insns) [15 switch table(s)] */
void f_117d3df0(void) {
  FTRACE(0x117d3df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d3df0 push ebp */
  push32((uint32_t)(EBP));
  /* 117d3df1 mov ebp, esp */
  EBP = (ESP);
  /* 117d3df3 push edi */
  push32((uint32_t)(EDI));
  /* 117d3df4 push esi */
  push32((uint32_t)(ESI));
  /* 117d3df5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117d3df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117d3dfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3dfe mov eax, ecx */
  EAX = (ECX);
  /* 117d3e00 mov edx, ecx */
  EDX = (ECX);
  /* 117d3e02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3e04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3e06 jbe 0x117d3e10 */
  if ((C.cf||C.zf)) goto L_117d3e10;
  /* 117d3e08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3e0a jb 0x117d3f88 */
  if (C.cf) goto L_117d3f88;
L_117d3e10:;
  /* 117d3e10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117d3e16 jne 0x117d3e2c */
  if (!C.zf) goto L_117d3e2c;
  /* 117d3e18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3e1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117d3e1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3e21 jb 0x117d3e4c */
  if (C.cf) goto L_117d3e4c;
  /* 117d3e23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d3e25 jmp dword ptr [edx*4 + 0x117d3f38] */
  switch (EDX) {
    case 0: goto L_117d3f48;
    case 1: goto L_117d3f50;
    case 2: goto L_117d3f5c;
    case 3: goto L_117d3f70;
    default: x86_unimpl("switch@0x117d3e25 out of table"); return;
  }
L_117d3e2c:;
  /* 117d3e2c mov eax, edi */
  EAX = (EDI);
  /* 117d3e2e mov edx, 3 */
  EDX = (0x3u);
  /* 117d3e33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3e36 jb 0x117d3e44 */
  if (C.cf) goto L_117d3e44;
  /* 117d3e38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117d3e3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3e3d jmp dword ptr [eax*4 + 0x117d3e50] */
  switch (EAX) {
    case 1: goto L_117d3e60;
    case 2: goto L_117d3e8c;
    case 3: goto L_117d3eb0;
    default: x86_unimpl("switch@0x117d3e3d out of table"); return;
  }
L_117d3e44:;
  /* 117d3e44 jmp dword ptr [ecx*4 + 0x117d3f48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117d3f48)))); return;
  /* 117d3e4b nop  */
  /* nop */
L_117d3e4c:;
  /* 117d3e4c jmp dword ptr [ecx*4 + 0x117d3ecc] */
  switch (ECX) {
    case 0: goto L_117d3f2f;
    case 1: goto L_117d3f1c;
    case 2: goto L_117d3f14;
    case 3: goto L_117d3f0c;
    case 4: goto L_117d3f04;
    case 5: goto L_117d3efc;
    case 6: goto L_117d3ef4;
    case 7: goto L_117d3eec;
    default: x86_unimpl("switch@0x117d3e4c out of table"); return;
  }
  /* 117d3e53 nop  */
  /* nop */
L_117d3e60:;
  /* 117d3e60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d3e62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3e64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3e66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d3e69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d3e6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d3e6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3e72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d3e75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3e78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3e7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3e7e jb 0x117d3e4c */
  if (C.cf) goto L_117d3e4c;
  /* 117d3e80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d3e82 jmp dword ptr [edx*4 + 0x117d3f38] */
  switch (EDX) {
    case 0: goto L_117d3f48;
    case 1: goto L_117d3f50;
    case 2: goto L_117d3f5c;
    case 3: goto L_117d3f70;
    default: x86_unimpl("switch@0x117d3e82 out of table"); return;
  }
  /* 117d3e89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d3e8c:;
  /* 117d3e8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d3e8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3e90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3e92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d3e95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3e98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d3e9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3e9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3ea1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3ea4 jb 0x117d3e4c */
  if (C.cf) goto L_117d3e4c;
  /* 117d3ea6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d3ea8 jmp dword ptr [edx*4 + 0x117d3f38] */
  switch (EDX) {
    case 0: goto L_117d3f48;
    case 1: goto L_117d3f50;
    case 2: goto L_117d3f5c;
    case 3: goto L_117d3f70;
    default: x86_unimpl("switch@0x117d3ea8 out of table"); return;
  }
  /* 117d3eaf nop  */
  /* nop */
L_117d3eb0:;
  /* 117d3eb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d3eb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3eb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117d3eb7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3eba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117d3ebb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3ebe jb 0x117d3e4c */
  if (C.cf) goto L_117d3e4c;
  /* 117d3ec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d3ec2 jmp dword ptr [edx*4 + 0x117d3f38] */
  switch (EDX) {
    case 0: goto L_117d3f48;
    case 1: goto L_117d3f50;
    case 2: goto L_117d3f5c;
    case 3: goto L_117d3f70;
    default: x86_unimpl("switch@0x117d3ec2 out of table"); return;
  }
  /* 117d3ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d3eec:;
  /* 117d3eec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117d3ef0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117d3ef4:;
  /* 117d3ef4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117d3ef8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117d3efc:;
  /* 117d3efc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117d3f00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117d3f04:;
  /* 117d3f04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117d3f08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117d3f0c:;
  /* 117d3f0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117d3f10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117d3f14:;
  /* 117d3f14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117d3f18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117d3f1c:;
  /* 117d3f1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117d3f20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117d3f24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117d3f2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d3f2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117d3f2f:;
  /* 117d3f2f jmp dword ptr [edx*4 + 0x117d3f38] */
  switch (EDX) {
    case 0: goto L_117d3f48;
    case 1: goto L_117d3f50;
    case 2: goto L_117d3f5c;
    case 3: goto L_117d3f70;
    default: x86_unimpl("switch@0x117d3f2f out of table"); return;
  }
  /* 117d3f36 mov edi, edi */
  EDI = (EDI);
L_117d3f48:;
  /* 117d3f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3f4b pop esi */
  ESI = (pop32());
  /* 117d3f4c pop edi */
  EDI = (pop32());
  /* 117d3f4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3f4e ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d3f4f nop  */
  /* nop */
L_117d3f50:;
  /* 117d3f50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3f52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3f57 pop esi */
  ESI = (pop32());
  /* 117d3f58 pop edi */
  EDI = (pop32());
  /* 117d3f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3f5a ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d3f5b nop  */
  /* nop */
L_117d3f5c:;
  /* 117d3f5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3f5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3f60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d3f63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d3f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3f69 pop esi */
  ESI = (pop32());
  /* 117d3f6a pop edi */
  EDI = (pop32());
  /* 117d3f6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3f6c ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d3f6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d3f70:;
  /* 117d3f70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117d3f72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117d3f74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d3f77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d3f7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d3f7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d3f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d3f83 pop esi */
  ESI = (pop32());
  /* 117d3f84 pop edi */
  EDI = (pop32());
  /* 117d3f85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d3f86 ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d3f87 nop  */
  /* nop */
L_117d3f88:;
  /* 117d3f88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117d3f8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117d3f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117d3f96 jne 0x117d3fbc */
  if (!C.zf) goto L_117d3fbc;
  /* 117d3f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117d3f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3fa1 jb 0x117d3fb0 */
  if (C.cf) goto L_117d3fb0;
  /* 117d3fa3 std  */
  C.df=1;
  /* 117d3fa4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d3fa6 cld  */
  C.df=0;
  /* 117d3fa7 jmp dword ptr [edx*4 + 0x117d40d0] */
  switch (EDX) {
    case 0: goto L_117d40e0;
    case 1: goto L_117d40e8;
    case 2: goto L_117d40f8;
    case 3: goto L_117d410c;
    default: x86_unimpl("switch@0x117d3fa7 out of table"); return;
  }
  /* 117d3fae mov edi, edi */
  EDI = (EDI);
L_117d3fb0:;
  /* 117d3fb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117d3fb2 jmp dword ptr [ecx*4 + 0x117d4080] */
  switch (ECX) {
    case 0: goto L_117d40c7;
    default: x86_unimpl("switch@0x117d3fb2 out of table"); return;
  }
  /* 117d3fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d3fbc:;
  /* 117d3fbc mov eax, edi */
  EAX = (EDI);
  /* 117d3fbe mov edx, 3 */
  EDX = (0x3u);
  /* 117d3fc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3fc6 jb 0x117d3fd4 */
  if (C.cf) goto L_117d3fd4;
  /* 117d3fc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117d3fcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d3fcd jmp dword ptr [eax*4 + 0x117d3fd8] */
  switch (EAX) {
    case 1: goto L_117d3fe8;
    case 2: goto L_117d4008;
    case 3: goto L_117d4030;
    default: x86_unimpl("switch@0x117d3fcd out of table"); return;
  }
L_117d3fd4:;
  /* 117d3fd4 jmp dword ptr [ecx*4 + 0x117d40d0] */
  switch (ECX) {
    case 0: goto L_117d40e0;
    case 1: goto L_117d40e8;
    case 2: goto L_117d40f8;
    case 3: goto L_117d410c;
    default: x86_unimpl("switch@0x117d3fd4 out of table"); return;
  }
  /* 117d3fdb nop  */
  /* nop */
L_117d3fe8:;
  /* 117d3fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d3feb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d3fed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d3ff0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117d3ff1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d3ff4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117d3ff5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d3ff8 jb 0x117d3fb0 */
  if (C.cf) goto L_117d3fb0;
  /* 117d3ffa std  */
  C.df=1;
  /* 117d3ffb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d3ffd cld  */
  C.df=0;
  /* 117d3ffe jmp dword ptr [edx*4 + 0x117d40d0] */
  switch (EDX) {
    case 0: goto L_117d40e0;
    case 1: goto L_117d40e8;
    case 2: goto L_117d40f8;
    case 3: goto L_117d410c;
    default: x86_unimpl("switch@0x117d3ffe out of table"); return;
  }
  /* 117d4005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d4008:;
  /* 117d4008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d400b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d400d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d4010 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d4013 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d4016 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d4019 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d401c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d401f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d4022 jb 0x117d3fb0 */
  if (C.cf) goto L_117d3fb0;
  /* 117d4024 std  */
  C.df=1;
  /* 117d4025 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d4027 cld  */
  C.df=0;
  /* 117d4028 jmp dword ptr [edx*4 + 0x117d40d0] */
  switch (EDX) {
    case 0: goto L_117d40e0;
    case 1: goto L_117d40e8;
    case 2: goto L_117d40f8;
    case 3: goto L_117d410c;
    default: x86_unimpl("switch@0x117d4028 out of table"); return;
  }
  /* 117d402f nop  */
  /* nop */
L_117d4030:;
  /* 117d4030 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d4033 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117d4035 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d4038 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d403b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d403e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d4041 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117d4044 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d4047 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d404a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d404d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d4050 jb 0x117d3fb0 */
  if (C.cf) goto L_117d3fb0;
  /* 117d4056 std  */
  C.df=1;
  /* 117d4057 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117d4059 cld  */
  C.df=0;
  /* 117d405a jmp dword ptr [edx*4 + 0x117d40d0] */
  switch (EDX) {
    case 0: goto L_117d40e0;
    case 1: goto L_117d40e8;
    case 2: goto L_117d40f8;
    case 3: goto L_117d410c;
    default: x86_unimpl("switch@0x117d405a out of table"); return;
  }
  /* 117d4061 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117d4064 test byte ptr [eax + 0x7d], al */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x7d)))&(AL); fl_logic(_r,8); }
  /* 117d4067 adc dword ptr [eax + eax*2 + 0x4094117d], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + EAX*2 + 0x4094117d))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EAX*2 + 0x4094117d), (_r)); fl_add(_a,_b,_r,32); }
  /* 117d406e jge 0x117d4081 */
  if ((C.sf==C.of)) goto L_117d4081;
  /* 117d4070 pushfd  */
  x86_unimpl("pushfd @ 0x117d4070");
  /* 117d4071 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d4072 jge 0x117d4085 */
  if ((C.sf==C.of)) goto L_117d4085;
  /* 117d4074 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 117d4075 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d4076 jge 0x117d4089 */
  if ((C.sf==C.of)) goto L_117d4089;
  /* 117d4078 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 117d4079 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117d407a jge 0x117d408d */
  if ((C.sf==C.of)) goto L_117d408d;
  /* 117d407c mov ah, 0x40 */
  AH = (0x40u);
  /* 117d407e jge 0x117d4091 */
  if ((C.sf==C.of)) goto L_117d4091;
  /* 117d4084 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117d4088 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117d408c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117d4090 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117d4094 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117d4098 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117d409c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117d40a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117d40a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117d40a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117d40ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117d40b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117d40b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117d40b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117d40bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117d40c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117d40c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117d40c7:;
  /* 117d40c7 jmp dword ptr [edx*4 + 0x117d40d0] */
  switch (EDX) {
    case 0: goto L_117d40e0;
    case 1: goto L_117d40e8;
    case 2: goto L_117d40f8;
    case 3: goto L_117d410c;
    default: x86_unimpl("switch@0x117d40c7 out of table"); return;
  }
  /* 117d40ce mov edi, edi */
  EDI = (EDI);
L_117d40e0:;
  /* 117d40e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d40e3 pop esi */
  ESI = (pop32());
  /* 117d40e4 pop edi */
  EDI = (pop32());
  /* 117d40e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d40e6 ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d40e7 nop  */
  /* nop */
L_117d40e8:;
  /* 117d40e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d40eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d40ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d40f1 pop esi */
  ESI = (pop32());
  /* 117d40f2 pop edi */
  EDI = (pop32());
  /* 117d40f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d40f4 ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d40f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117d40f8:;
  /* 117d40f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d40fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d40fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d4101 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d4104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d4107 pop esi */
  ESI = (pop32());
  /* 117d4108 pop edi */
  EDI = (pop32());
  /* 117d4109 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d410a ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
  /* 117d410b nop  */
  /* nop */
L_117d410c:;
  /* 117d410c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117d410f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117d4112 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117d4115 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117d4118 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117d411b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117d411e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d4121 pop esi */
  ESI = (pop32());
  /* 117d4122 pop edi */
  EDI = (pop32());
  /* 117d4123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117d4124 ret  */
  ESPCHK(0x117d3df0u, _esp0);
  ESP += 4; return;
L_117d4081: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d4081 (unresolved jump table)"); return;
L_117d4085: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d4085 (unresolved jump table)"); return;
L_117d4089: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d4089 (unresolved jump table)"); return;
L_117d408d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d408d (unresolved jump table)"); return;
L_117d4091: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117d4091 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x117d4128 (32 bytes, 18 insns) */
void f_117d4128(void) {
  FTRACE(0x117d4128u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d4128 push ebp */
  push32((uint32_t)(EBP));
  /* 117d4129 mov ebp, esp */
  EBP = (ESP);
  /* 117d412b push ebx */
  push32((uint32_t)(EBX));
  /* 117d412c push esi */
  push32((uint32_t)(ESI));
  /* 117d412d push edi */
  push32((uint32_t)(EDI));
  /* 117d412e push ebp */
  push32((uint32_t)(EBP));
  /* 117d412f push 0 */
  push32((uint32_t)(0x0u));
  /* 117d4131 push 0 */
  push32((uint32_t)(0x0u));
  /* 117d4133 push 0x117d4140 */
  push32((uint32_t)(0x117d4140u));
  /* 117d4138 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117d413b call 0x117d4330 */
  push32(0x117d4140u); f_117d4330();
  /* 117d4140 pop ebp */
  EBP = (pop32());
  /* 117d4141 pop edi */
  EDI = (pop32());
  /* 117d4142 pop esi */
  ESI = (pop32());
  /* 117d4143 pop ebx */
  EBX = (pop32());
  /* 117d4144 mov esp, ebp */
  ESP = (EBP);
  /* 117d4146 pop ebp */
  EBP = (pop32());
  /* 117d4147 ret  */
  ESPCHK(0x117d4128u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x117d416a (104 bytes, 33 insns) */
void f_117d416a(void) {
  FTRACE(0x117d416au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d416a push ebx */
  push32((uint32_t)(EBX));
  /* 117d416b push esi */
  push32((uint32_t)(ESI));
  /* 117d416c push edi */
  push32((uint32_t)(EDI));
  /* 117d416d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117d4171 push eax */
  push32((uint32_t)(EAX));
  /* 117d4172 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 117d4174 push 0x117d4148 */
  push32((uint32_t)(0x117d4148u));
  /* 117d4179 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 117d4180 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_117d4187:;
  /* 117d4187 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 117d418b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 117d418e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 117d4191 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d4194 je 0x117d41c4 */
  if (C.zf) goto L_117d41c4;
  /* 117d4196 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d419a je 0x117d41c4 */
  if (C.zf) goto L_117d41c4;
  /* 117d419c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 117d419f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 117d41a2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 117d41a6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 117d41a9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d41ae jne 0x117d41c2 */
  if (!C.zf) goto L_117d41c2;
  /* 117d41b0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117d41b5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 117d41b9 call 0x117d41fe */
  push32(0x117d41beu); f_117d41fe();
  /* 117d41be call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x117d41c2u);
L_117d41c2:;
  /* 117d41c2 jmp 0x117d4187 */
  goto L_117d4187;
L_117d41c4:;
  /* 117d41c4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 117d41cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d41ce pop edi */
  EDI = (pop32());
  /* 117d41cf pop esi */
  ESI = (pop32());
  /* 117d41d0 pop ebx */
  EBX = (pop32());
  /* 117d41d1 ret  */
  ESPCHK(0x117d416au, _esp0);
  ESP += 4; return;
}

/* FUN_100041fe @ 0x117d41fe (24 bytes, 10 insns) */
void f_117d41fe(void) {
  FTRACE(0x117d41feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d41fe push ebx */
  push32((uint32_t)(EBX));
  /* 117d41ff push ecx */
  push32((uint32_t)(ECX));
  /* 117d4200 mov ebx, 0x117d6410 */
  EBX = (0x117d6410u);
  /* 117d4205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117d4208 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 117d420b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 117d420e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 117d4211 pop ecx */
  ECX = (pop32());
  /* 117d4212 pop ebx */
  EBX = (pop32());
  /* 117d4213 ret 4 */
  ESPCHK(0x117d41feu, _esp0);
  ESP += 8; return;
}

/* FUN_100042dd @ 0x117d42dd (27 bytes, 11 insns) */
void f_117d42dd(void) {
  FTRACE(0x117d42ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d42dd push ebp */
  push32((uint32_t)(EBP));
  /* 117d42de mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 117d42e2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 117d42e4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117d42e7 push eax */
  push32((uint32_t)(EAX));
  /* 117d42e8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 117d42eb push eax */
  push32((uint32_t)(EAX));
  /* 117d42ec call 0x117d416a */
  push32(0x117d42f1u); f_117d416a();
  /* 117d42f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117d42f4 pop ebp */
  EBP = (pop32());
  /* 117d42f5 ret 4 */
  ESPCHK(0x117d42ddu, _esp0);
  ESP += 8; return;
}

/* FUN_10004300 @ 0x117d4300 (47 bytes, 17 insns) */
void f_117d4300(void) {
  FTRACE(0x117d4300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d4300 push ecx */
  push32((uint32_t)(ECX));
  /* 117d4301 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d4306 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 117d430a jb 0x117d4320 */
  if (C.cf) goto L_117d4320;
L_117d430c:;
  /* 117d430c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d4312 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d4317 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117d4319 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117d431e jae 0x117d430c */
  if (!C.cf) goto L_117d430c;
L_117d4320:;
  /* 117d4320 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117d4322 mov eax, esp */
  EAX = (ESP);
  /* 117d4324 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117d4326 mov esp, ecx */
  ESP = (ECX);
  /* 117d4328 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117d432a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 117d432d push eax */
  push32((uint32_t)(EAX));
  /* 117d432e ret  */
  ESPCHK(0x117d4300u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x117d4330 (6 bytes, 1 insns) */
void f_117d4330(void) {
  FTRACE(0x117d4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117d4330 jmp dword ptr [0x117d5004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117d5004)))); return;
}

