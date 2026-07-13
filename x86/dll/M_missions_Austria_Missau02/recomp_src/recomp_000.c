#include "recomp.h"

/* FUN_10001000 @ 0x102e1000 (20 bytes, 6 insns) */
void f_102e1000(void) {
  FTRACE(0x102e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102e1005 jne 0x102e100c */
  if (!C.zf) goto L_102e100c;
  /* 102e1007 call 0x102e1020 */
  push32(0x102e100cu); f_102e1020();
L_102e100c:;
  /* 102e100c mov eax, 1 */
  EAX = (0x1u);
  /* 102e1011 ret 0xc */
  ESPCHK(0x102e1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x102e1020 (784 bytes, 198 insns) */
void f_102e1020(void) {
  FTRACE(0x102e1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e1020 push esi */
  push32((uint32_t)(ESI));
  /* 102e1021 mov esi, dword ptr [0x102e511c] */
  ESI = (r32((uint32_t)(0x102e511c)));
  /* 102e1027 push 0x102e6150 */
  push32((uint32_t)(0x102e6150u));
  /* 102e102c push 0x102e64d8 */
  push32((uint32_t)(0x102e64d8u));
  /* 102e1031 call esi */
  call_ind((uint32_t)(ESI), 0x102e1033u);
  /* 102e1033 push 0x102e614c */
  push32((uint32_t)(0x102e614cu));
  /* 102e1038 push 0x102e64e0 */
  push32((uint32_t)(0x102e64e0u));
  /* 102e103d call esi */
  call_ind((uint32_t)(ESI), 0x102e103fu);
  /* 102e103f push 0x102e6148 */
  push32((uint32_t)(0x102e6148u));
  /* 102e1044 push 0x102e64e8 */
  push32((uint32_t)(0x102e64e8u));
  /* 102e1049 call esi */
  call_ind((uint32_t)(ESI), 0x102e104bu);
  /* 102e104b push 0x102e6144 */
  push32((uint32_t)(0x102e6144u));
  /* 102e1050 push 0x102e64f0 */
  push32((uint32_t)(0x102e64f0u));
  /* 102e1055 call esi */
  call_ind((uint32_t)(ESI), 0x102e1057u);
  /* 102e1057 push 0x102e6140 */
  push32((uint32_t)(0x102e6140u));
  /* 102e105c push 0x102e64f8 */
  push32((uint32_t)(0x102e64f8u));
  /* 102e1061 call esi */
  call_ind((uint32_t)(ESI), 0x102e1063u);
  /* 102e1063 push 0x102e613c */
  push32((uint32_t)(0x102e613cu));
  /* 102e1068 push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e106d call esi */
  call_ind((uint32_t)(ESI), 0x102e106fu);
  /* 102e106f push 0x102e6138 */
  push32((uint32_t)(0x102e6138u));
  /* 102e1074 push 0x102e6508 */
  push32((uint32_t)(0x102e6508u));
  /* 102e1079 call esi */
  call_ind((uint32_t)(ESI), 0x102e107bu);
  /* 102e107b push 0x102e6134 */
  push32((uint32_t)(0x102e6134u));
  /* 102e1080 push 0x102e6510 */
  push32((uint32_t)(0x102e6510u));
  /* 102e1085 call esi */
  call_ind((uint32_t)(ESI), 0x102e1087u);
  /* 102e1087 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e108a push 0x102e6130 */
  push32((uint32_t)(0x102e6130u));
  /* 102e108f push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1094 call esi */
  call_ind((uint32_t)(ESI), 0x102e1096u);
  /* 102e1096 push 0x102e612c */
  push32((uint32_t)(0x102e612cu));
  /* 102e109b push 0x102e6608 */
  push32((uint32_t)(0x102e6608u));
  /* 102e10a0 call esi */
  call_ind((uint32_t)(ESI), 0x102e10a2u);
  /* 102e10a2 push 0x102e6128 */
  push32((uint32_t)(0x102e6128u));
  /* 102e10a7 push 0x102e6528 */
  push32((uint32_t)(0x102e6528u));
  /* 102e10ac call esi */
  call_ind((uint32_t)(ESI), 0x102e10aeu);
  /* 102e10ae push 0x102e6124 */
  push32((uint32_t)(0x102e6124u));
  /* 102e10b3 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e10b8 call esi */
  call_ind((uint32_t)(ESI), 0x102e10bau);
  /* 102e10ba push 0x102e6120 */
  push32((uint32_t)(0x102e6120u));
  /* 102e10bf push 0x102e6538 */
  push32((uint32_t)(0x102e6538u));
  /* 102e10c4 call esi */
  call_ind((uint32_t)(ESI), 0x102e10c6u);
  /* 102e10c6 push 0x102e611c */
  push32((uint32_t)(0x102e611cu));
  /* 102e10cb push 0x102e6540 */
  push32((uint32_t)(0x102e6540u));
  /* 102e10d0 call esi */
  call_ind((uint32_t)(ESI), 0x102e10d2u);
  /* 102e10d2 push 0x102e6118 */
  push32((uint32_t)(0x102e6118u));
  /* 102e10d7 push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e10dc call esi */
  call_ind((uint32_t)(ESI), 0x102e10deu);
  /* 102e10de push 0x102e6114 */
  push32((uint32_t)(0x102e6114u));
  /* 102e10e3 push 0x102e6560 */
  push32((uint32_t)(0x102e6560u));
  /* 102e10e8 call esi */
  call_ind((uint32_t)(ESI), 0x102e10eau);
  /* 102e10ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e10ed push 0x102e6110 */
  push32((uint32_t)(0x102e6110u));
  /* 102e10f2 push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e10f7 call esi */
  call_ind((uint32_t)(ESI), 0x102e10f9u);
  /* 102e10f9 push 0x102e6108 */
  push32((uint32_t)(0x102e6108u));
  /* 102e10fe push 0x102e6690 */
  push32((uint32_t)(0x102e6690u));
  /* 102e1103 call esi */
  call_ind((uint32_t)(ESI), 0x102e1105u);
  /* 102e1105 push 0x102e6104 */
  push32((uint32_t)(0x102e6104u));
  /* 102e110a push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e110f call esi */
  call_ind((uint32_t)(ESI), 0x102e1111u);
  /* 102e1111 push 0x102e6100 */
  push32((uint32_t)(0x102e6100u));
  /* 102e1116 push 0x102e6590 */
  push32((uint32_t)(0x102e6590u));
  /* 102e111b call esi */
  call_ind((uint32_t)(ESI), 0x102e111du);
  /* 102e111d push 0x102e60fc */
  push32((uint32_t)(0x102e60fcu));
  /* 102e1122 push 0x102e65a0 */
  push32((uint32_t)(0x102e65a0u));
  /* 102e1127 call esi */
  call_ind((uint32_t)(ESI), 0x102e1129u);
  /* 102e1129 push 0x102e60f8 */
  push32((uint32_t)(0x102e60f8u));
  /* 102e112e push 0x102e6548 */
  push32((uint32_t)(0x102e6548u));
  /* 102e1133 call esi */
  call_ind((uint32_t)(ESI), 0x102e1135u);
  /* 102e1135 push 0x102e60f4 */
  push32((uint32_t)(0x102e60f4u));
  /* 102e113a push 0x102e6558 */
  push32((uint32_t)(0x102e6558u));
  /* 102e113f call esi */
  call_ind((uint32_t)(ESI), 0x102e1141u);
  /* 102e1141 push 0x102e60f0 */
  push32((uint32_t)(0x102e60f0u));
  /* 102e1146 push 0x102e6568 */
  push32((uint32_t)(0x102e6568u));
  /* 102e114b call esi */
  call_ind((uint32_t)(ESI), 0x102e114du);
  /* 102e114d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1150 push 0x102e60ec */
  push32((uint32_t)(0x102e60ecu));
  /* 102e1155 push 0x102e6578 */
  push32((uint32_t)(0x102e6578u));
  /* 102e115a call esi */
  call_ind((uint32_t)(ESI), 0x102e115cu);
  /* 102e115c push 0x102e60e8 */
  push32((uint32_t)(0x102e60e8u));
  /* 102e1161 push 0x102e6588 */
  push32((uint32_t)(0x102e6588u));
  /* 102e1166 call esi */
  call_ind((uint32_t)(ESI), 0x102e1168u);
  /* 102e1168 push 0x102e60e4 */
  push32((uint32_t)(0x102e60e4u));
  /* 102e116d push 0x102e6598 */
  push32((uint32_t)(0x102e6598u));
  /* 102e1172 call esi */
  call_ind((uint32_t)(ESI), 0x102e1174u);
  /* 102e1174 push 0x102e60e0 */
  push32((uint32_t)(0x102e60e0u));
  /* 102e1179 push 0x102e65a8 */
  push32((uint32_t)(0x102e65a8u));
  /* 102e117e call esi */
  call_ind((uint32_t)(ESI), 0x102e1180u);
  /* 102e1180 push 0x102e60dc */
  push32((uint32_t)(0x102e60dcu));
  /* 102e1185 push 0x102e65b0 */
  push32((uint32_t)(0x102e65b0u));
  /* 102e118a call esi */
  call_ind((uint32_t)(ESI), 0x102e118cu);
  /* 102e118c push 0x102e60d8 */
  push32((uint32_t)(0x102e60d8u));
  /* 102e1191 push 0x102e65b8 */
  push32((uint32_t)(0x102e65b8u));
  /* 102e1196 call esi */
  call_ind((uint32_t)(ESI), 0x102e1198u);
  /* 102e1198 mov esi, dword ptr [0x102e5120] */
  ESI = (r32((uint32_t)(0x102e5120)));
  /* 102e119e push 0x102e60d4 */
  push32((uint32_t)(0x102e60d4u));
  /* 102e11a3 push 0x102e65c0 */
  push32((uint32_t)(0x102e65c0u));
  /* 102e11a8 call esi */
  call_ind((uint32_t)(ESI), 0x102e11aau);
  /* 102e11aa push 0x102e60d0 */
  push32((uint32_t)(0x102e60d0u));
  /* 102e11af push 0x102e65c8 */
  push32((uint32_t)(0x102e65c8u));
  /* 102e11b4 call esi */
  call_ind((uint32_t)(ESI), 0x102e11b6u);
  /* 102e11b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e11b9 push 0x102e60cc */
  push32((uint32_t)(0x102e60ccu));
  /* 102e11be push 0x102e65d0 */
  push32((uint32_t)(0x102e65d0u));
  /* 102e11c3 call esi */
  call_ind((uint32_t)(ESI), 0x102e11c5u);
  /* 102e11c5 push 0x102e60c8 */
  push32((uint32_t)(0x102e60c8u));
  /* 102e11ca push 0x102e65d8 */
  push32((uint32_t)(0x102e65d8u));
  /* 102e11cf call esi */
  call_ind((uint32_t)(ESI), 0x102e11d1u);
  /* 102e11d1 push 0x102e60c4 */
  push32((uint32_t)(0x102e60c4u));
  /* 102e11d6 push 0x102e65e0 */
  push32((uint32_t)(0x102e65e0u));
  /* 102e11db call esi */
  call_ind((uint32_t)(ESI), 0x102e11ddu);
  /* 102e11dd push 0x102e60c0 */
  push32((uint32_t)(0x102e60c0u));
  /* 102e11e2 push 0x102e65e8 */
  push32((uint32_t)(0x102e65e8u));
  /* 102e11e7 call esi */
  call_ind((uint32_t)(ESI), 0x102e11e9u);
  /* 102e11e9 push 0x102e60bc */
  push32((uint32_t)(0x102e60bcu));
  /* 102e11ee push 0x102e65f0 */
  push32((uint32_t)(0x102e65f0u));
  /* 102e11f3 call esi */
  call_ind((uint32_t)(ESI), 0x102e11f5u);
  /* 102e11f5 push 0x102e60b8 */
  push32((uint32_t)(0x102e60b8u));
  /* 102e11fa push 0x102e65f8 */
  push32((uint32_t)(0x102e65f8u));
  /* 102e11ff call esi */
  call_ind((uint32_t)(ESI), 0x102e1201u);
  /* 102e1201 push 0x102e60b4 */
  push32((uint32_t)(0x102e60b4u));
  /* 102e1206 push 0x102e6600 */
  push32((uint32_t)(0x102e6600u));
  /* 102e120b call esi */
  call_ind((uint32_t)(ESI), 0x102e120du);
  /* 102e120d push 0x102e60b0 */
  push32((uint32_t)(0x102e60b0u));
  /* 102e1212 push 0x102e6628 */
  push32((uint32_t)(0x102e6628u));
  /* 102e1217 call esi */
  call_ind((uint32_t)(ESI), 0x102e1219u);
  /* 102e1219 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e121c push 0x102e60ac */
  push32((uint32_t)(0x102e60acu));
  /* 102e1221 push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e1226 call esi */
  call_ind((uint32_t)(ESI), 0x102e1228u);
  /* 102e1228 push 0x102e60a8 */
  push32((uint32_t)(0x102e60a8u));
  /* 102e122d push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1232 call esi */
  call_ind((uint32_t)(ESI), 0x102e1234u);
  /* 102e1234 push 0x102e60a4 */
  push32((uint32_t)(0x102e60a4u));
  /* 102e1239 push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e123e call esi */
  call_ind((uint32_t)(ESI), 0x102e1240u);
  /* 102e1240 push 0x102e60a0 */
  push32((uint32_t)(0x102e60a0u));
  /* 102e1245 push 0x102e6650 */
  push32((uint32_t)(0x102e6650u));
  /* 102e124a call esi */
  call_ind((uint32_t)(ESI), 0x102e124cu);
  /* 102e124c push 0x102e609c */
  push32((uint32_t)(0x102e609cu));
  /* 102e1251 push 0x102e6660 */
  push32((uint32_t)(0x102e6660u));
  /* 102e1256 call esi */
  call_ind((uint32_t)(ESI), 0x102e1258u);
  /* 102e1258 push 0x102e6098 */
  push32((uint32_t)(0x102e6098u));
  /* 102e125d push 0x102e6670 */
  push32((uint32_t)(0x102e6670u));
  /* 102e1262 call esi */
  call_ind((uint32_t)(ESI), 0x102e1264u);
  /* 102e1264 push 0x102e6094 */
  push32((uint32_t)(0x102e6094u));
  /* 102e1269 push 0x102e6678 */
  push32((uint32_t)(0x102e6678u));
  /* 102e126e call esi */
  call_ind((uint32_t)(ESI), 0x102e1270u);
  /* 102e1270 push 0x102e6090 */
  push32((uint32_t)(0x102e6090u));
  /* 102e1275 push 0x102e6680 */
  push32((uint32_t)(0x102e6680u));
  /* 102e127a call esi */
  call_ind((uint32_t)(ESI), 0x102e127cu);
  /* 102e127c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e127f push 0x102e608c */
  push32((uint32_t)(0x102e608cu));
  /* 102e1284 push 0x102e6688 */
  push32((uint32_t)(0x102e6688u));
  /* 102e1289 call esi */
  call_ind((uint32_t)(ESI), 0x102e128bu);
  /* 102e128b push 0x102e6088 */
  push32((uint32_t)(0x102e6088u));
  /* 102e1290 push 0x102e6648 */
  push32((uint32_t)(0x102e6648u));
  /* 102e1295 call esi */
  call_ind((uint32_t)(ESI), 0x102e1297u);
  /* 102e1297 push 0x102e6084 */
  push32((uint32_t)(0x102e6084u));
  /* 102e129c push 0x102e6658 */
  push32((uint32_t)(0x102e6658u));
  /* 102e12a1 call esi */
  call_ind((uint32_t)(ESI), 0x102e12a3u);
  /* 102e12a3 push 0x102e6080 */
  push32((uint32_t)(0x102e6080u));
  /* 102e12a8 push 0x102e6668 */
  push32((uint32_t)(0x102e6668u));
  /* 102e12ad call esi */
  call_ind((uint32_t)(ESI), 0x102e12afu);
  /* 102e12af push 0x102e6520 */
  push32((uint32_t)(0x102e6520u));
  /* 102e12b4 call dword ptr [0x102e5124] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5124))), 0x102e12bau);
  /* 102e12ba mov esi, dword ptr [0x102e5128] */
  ESI = (r32((uint32_t)(0x102e5128)));
  /* 102e12c0 push 0x102e606c */
  push32((uint32_t)(0x102e606cu));
  /* 102e12c5 push 0x102e6610 */
  push32((uint32_t)(0x102e6610u));
  /* 102e12ca call esi */
  call_ind((uint32_t)(ESI), 0x102e12ccu);
  /* 102e12cc push 0x102e6058 */
  push32((uint32_t)(0x102e6058u));
  /* 102e12d1 push 0x102e6620 */
  push32((uint32_t)(0x102e6620u));
  /* 102e12d6 call esi */
  call_ind((uint32_t)(ESI), 0x102e12d8u);
  /* 102e12d8 push 0x102e6044 */
  push32((uint32_t)(0x102e6044u));
  /* 102e12dd push 0x102e64c0 */
  push32((uint32_t)(0x102e64c0u));
  /* 102e12e2 call esi */
  call_ind((uint32_t)(ESI), 0x102e12e4u);
  /* 102e12e4 push 0x102e6038 */
  push32((uint32_t)(0x102e6038u));
  /* 102e12e9 push 0x102e6618 */
  push32((uint32_t)(0x102e6618u));
  /* 102e12ee call dword ptr [0x102e512c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e512c))), 0x102e12f4u);
  /* 102e12f4 mov esi, dword ptr [0x102e5130] */
  ESI = (r32((uint32_t)(0x102e5130)));
  /* 102e12fa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e12fd push 8 */
  push32((uint32_t)(0x8u));
  /* 102e12ff push 0x102e64c8 */
  push32((uint32_t)(0x102e64c8u));
  /* 102e1304 call esi */
  call_ind((uint32_t)(ESI), 0x102e1306u);
  /* 102e1306 push 8 */
  push32((uint32_t)(0x8u));
  /* 102e1308 push 0x102e64d0 */
  push32((uint32_t)(0x102e64d0u));
  /* 102e130d call esi */
  call_ind((uint32_t)(ESI), 0x102e130fu);
  /* 102e130f push 0x102e6030 */
  push32((uint32_t)(0x102e6030u));
  /* 102e1314 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1316 call dword ptr [0x102e5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5134))), 0x102e131cu);
  /* 102e131c push 0 */
  push32((uint32_t)(0x0u));
  /* 102e131e push 0x102e6610 */
  push32((uint32_t)(0x102e6610u));
  /* 102e1323 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1325 call dword ptr [0x102e5138] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5138))), 0x102e132bu);
  /* 102e132b add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e132e pop esi */
  ESI = (pop32());
  /* 102e132f ret  */
  ESPCHK(0x102e1020u, _esp0);
  ESP += 4; return;
}

/* FUN_10001330 @ 0x102e1330 (233 bytes, 84 insns) */
void f_102e1330(void) {
  FTRACE(0x102e1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e1330 push esi */
  push32((uint32_t)(ESI));
  /* 102e1331 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102e1335 push edi */
  push32((uint32_t)(EDI));
  /* 102e1336 mov edi, dword ptr [0x102e5104] */
  EDI = (r32((uint32_t)(0x102e5104)));
  /* 102e133c push esi */
  push32((uint32_t)(ESI));
  /* 102e133d call edi */
  call_ind((uint32_t)(EDI), 0x102e133fu);
  /* 102e133f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1344 jle 0x102e1416 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1416;
  /* 102e134a push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e134f call edi */
  call_ind((uint32_t)(EDI), 0x102e1351u);
  /* 102e1351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1356 je 0x102e136a */
  if (C.zf) goto L_102e136a;
  /* 102e1358 push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e135d call edi */
  call_ind((uint32_t)(EDI), 0x102e135fu);
  /* 102e135f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1364 jne 0x102e1416 */
  if (!C.zf) goto L_102e1416;
L_102e136a:;
  /* 102e136a mov edi, dword ptr [0x102e5108] */
  EDI = (r32((uint32_t)(0x102e5108)));
  /* 102e1370 push esi */
  push32((uint32_t)(ESI));
  /* 102e1371 push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e1376 call edi */
  call_ind((uint32_t)(EDI), 0x102e1378u);
  /* 102e1378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e137b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e137d jg 0x102e13bd */
  if ((!C.zf&&C.sf==C.of)) goto L_102e13bd;
  /* 102e137f push esi */
  push32((uint32_t)(ESI));
  /* 102e1380 push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1385 call edi */
  call_ind((uint32_t)(EDI), 0x102e1387u);
  /* 102e1387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e138a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e138c jg 0x102e13bd */
  if ((!C.zf&&C.sf==C.of)) goto L_102e13bd;
  /* 102e138e push esi */
  push32((uint32_t)(ESI));
  /* 102e138f push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1394 call edi */
  call_ind((uint32_t)(EDI), 0x102e1396u);
  /* 102e1396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e139b jg 0x102e13bd */
  if ((!C.zf&&C.sf==C.of)) goto L_102e13bd;
  /* 102e139d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e139f push esi */
  push32((uint32_t)(ESI));
  /* 102e13a0 call dword ptr [0x102e510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e510c))), 0x102e13a6u);
  /* 102e13a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e13a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e13aa push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e13af push 1 */
  push32((uint32_t)(0x1u));
  /* 102e13b1 call dword ptr [0x102e5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5110))), 0x102e13b7u);
  /* 102e13b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e13ba pop edi */
  EDI = (pop32());
  /* 102e13bb pop esi */
  ESI = (pop32());
  /* 102e13bc ret  */
  ESPCHK(0x102e1330u, _esp0);
  ESP += 4; return;
L_102e13bd:;
  /* 102e13bd mov edi, dword ptr [0x102e5114] */
  EDI = (r32((uint32_t)(0x102e5114)));
  /* 102e13c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e13c5 push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e13ca call edi */
  call_ind((uint32_t)(EDI), 0x102e13ccu);
  /* 102e13cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e13cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e13d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e13d3 jle 0x102e13e7 */
  if ((C.zf||C.sf!=C.of)) goto L_102e13e7;
  /* 102e13d5 push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e13da push esi */
  push32((uint32_t)(ESI));
  /* 102e13db call dword ptr [0x102e5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5118))), 0x102e13e1u);
  /* 102e13e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e13e4 pop edi */
  EDI = (pop32());
  /* 102e13e5 pop esi */
  ESI = (pop32());
  /* 102e13e6 ret  */
  ESPCHK(0x102e1330u, _esp0);
  ESP += 4; return;
L_102e13e7:;
  /* 102e13e7 push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e13ec call edi */
  call_ind((uint32_t)(EDI), 0x102e13eeu);
  /* 102e13ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e13f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e13f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e13f5 push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e13fa jg 0x102e140c */
  if ((!C.zf&&C.sf==C.of)) goto L_102e140c;
  /* 102e13fc call edi */
  call_ind((uint32_t)(EDI), 0x102e13feu);
  /* 102e13fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1403 jle 0x102e1416 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1416;
  /* 102e1405 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1407 push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
L_102e140c:;
  /* 102e140c push esi */
  push32((uint32_t)(ESI));
  /* 102e140d call dword ptr [0x102e5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5118))), 0x102e1413u);
  /* 102e1413 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1416:;
  /* 102e1416 pop edi */
  EDI = (pop32());
  /* 102e1417 pop esi */
  ESI = (pop32());
  /* 102e1418 ret  */
  ESPCHK(0x102e1330u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x102e1420 (3568 bytes, 1129 insns) */
void f_102e1420(void) {
  FTRACE(0x102e1420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e1420 push ebx */
  push32((uint32_t)(EBX));
  /* 102e1421 push ebp */
  push32((uint32_t)(EBP));
  /* 102e1422 push esi */
  push32((uint32_t)(ESI));
  /* 102e1423 push edi */
  push32((uint32_t)(EDI));
  /* 102e1424 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102e1426 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e142cu);
  /* 102e142c mov ebp, dword ptr [0x102e50b4] */
  EBP = (r32((uint32_t)(0x102e50b4)));
  /* 102e1432 mov edi, dword ptr [0x102e510c] */
  EDI = (r32((uint32_t)(0x102e510c)));
  /* 102e1438 mov esi, dword ptr [0x102e5110] */
  ESI = (r32((uint32_t)(0x102e5110)));
  /* 102e143e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1441 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1443 je 0x102e1654 */
  if (C.zf) goto L_102e1654;
  /* 102e1449 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e144b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102e144d call dword ptr [0x102e50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b8))), 0x102e1453u);
  /* 102e1453 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1455 call ebp */
  call_ind((uint32_t)(EBP), 0x102e1457u);
  /* 102e1457 lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 102e145e mov ebx, dword ptr [0x102e50bc] */
  EBX = (r32((uint32_t)(0x102e50bc)));
  /* 102e1464 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e1466 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102e1469 mov ecx, 0x7a120 */
  ECX = (0x7a120u);
  /* 102e146e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e1471 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e1474 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e1477 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 102e147a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e147c push ecx */
  push32((uint32_t)(ECX));
  /* 102e147d push 3 */
  push32((uint32_t)(0x3u));
  /* 102e147f push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1481 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1483u);
  /* 102e1483 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1485 call ebp */
  call_ind((uint32_t)(EBP), 0x102e1487u);
  /* 102e1487 mov ecx, 5 */
  ECX = (0x5u);
  /* 102e148c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e148e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102e1491 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e1494 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102e1497 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e149a lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102e149d shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 102e14a0 push edx */
  push32((uint32_t)(EDX));
  /* 102e14a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e14a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14a5 call ebx */
  call_ind((uint32_t)(EBX), 0x102e14a7u);
  /* 102e14a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14ab push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14ad call ebx */
  call_ind((uint32_t)(EBX), 0x102e14afu);
  /* 102e14af push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e14b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14b5 call ebx */
  call_ind((uint32_t)(EBX), 0x102e14b7u);
  /* 102e14b7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e14ba push 1 */
  push32((uint32_t)(0x1u));
  /* 102e14bc call ebp */
  call_ind((uint32_t)(EBP), 0x102e14beu);
  /* 102e14be mov ecx, 9 */
  ECX = (0x9u);
  /* 102e14c3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e14c5 imul ecx, ecx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2710u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e14cb push ecx */
  push32((uint32_t)(ECX));
  /* 102e14cc push 5 */
  push32((uint32_t)(0x5u));
  /* 102e14ce push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14d0 call ebx */
  call_ind((uint32_t)(EBX), 0x102e14d2u);
  /* 102e14d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e14d4 call ebp */
  call_ind((uint32_t)(EBP), 0x102e14d6u);
  /* 102e14d6 mov edx, 9 */
  EDX = (0x9u);
  /* 102e14db sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e14dd imul edx, edx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2710u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e14e3 push edx */
  push32((uint32_t)(EDX));
  /* 102e14e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102e14e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14e8 call ebx */
  call_ind((uint32_t)(EBX), 0x102e14eau);
  /* 102e14ea push 0x102e6184 */
  push32((uint32_t)(0x102e6184u));
  /* 102e14ef call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e14f5u);
  /* 102e14f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e14f7 call ebp */
  call_ind((uint32_t)(EBP), 0x102e14f9u);
  /* 102e14f9 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e14fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e14fe jne 0x102e151e */
  if (!C.zf) goto L_102e151e;
  /* 102e1500 push eax */
  push32((uint32_t)(EAX));
  /* 102e1501 push 0x102e65b8 */
  push32((uint32_t)(0x102e65b8u));
  /* 102e1506 call edi */
  call_ind((uint32_t)(EDI), 0x102e1508u);
  /* 102e1508 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e150a call dword ptr [0x102e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c4))), 0x102e1510u);
  /* 102e1510 push 0x102e617c */
  push32((uint32_t)(0x102e617cu));
  /* 102e1515 call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e151bu);
  /* 102e151b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e151e:;
  /* 102e151e push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1520 push 0x102e64f0 */
  push32((uint32_t)(0x102e64f0u));
  /* 102e1525 call edi */
  call_ind((uint32_t)(EDI), 0x102e1527u);
  /* 102e1527 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1529 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e152b push 0x102e65c0 */
  push32((uint32_t)(0x102e65c0u));
  /* 102e1530 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1532 call esi */
  call_ind((uint32_t)(ESI), 0x102e1534u);
  /* 102e1534 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1536 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1538 push 0x102e65c8 */
  push32((uint32_t)(0x102e65c8u));
  /* 102e153d push 1 */
  push32((uint32_t)(0x1u));
  /* 102e153f call esi */
  call_ind((uint32_t)(ESI), 0x102e1541u);
  /* 102e1541 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1543 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1545 push 0x102e65d0 */
  push32((uint32_t)(0x102e65d0u));
  /* 102e154a push 1 */
  push32((uint32_t)(0x1u));
  /* 102e154c call esi */
  call_ind((uint32_t)(ESI), 0x102e154eu);
  /* 102e154e push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1550 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1552 push 0x102e65d8 */
  push32((uint32_t)(0x102e65d8u));
  /* 102e1557 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1559 call esi */
  call_ind((uint32_t)(ESI), 0x102e155bu);
  /* 102e155b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e155e push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1560 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1562 push 0x102e65e0 */
  push32((uint32_t)(0x102e65e0u));
  /* 102e1567 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1569 call esi */
  call_ind((uint32_t)(ESI), 0x102e156bu);
  /* 102e156b push 2 */
  push32((uint32_t)(0x2u));
  /* 102e156d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e156f push 0x102e65e8 */
  push32((uint32_t)(0x102e65e8u));
  /* 102e1574 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1576 call esi */
  call_ind((uint32_t)(ESI), 0x102e1578u);
  /* 102e1578 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e157a push 0x102e64f8 */
  push32((uint32_t)(0x102e64f8u));
  /* 102e157f call edi */
  call_ind((uint32_t)(EDI), 0x102e1581u);
  /* 102e1581 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1583 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1585 push 0x102e65f0 */
  push32((uint32_t)(0x102e65f0u));
  /* 102e158a push 1 */
  push32((uint32_t)(0x1u));
  /* 102e158c call esi */
  call_ind((uint32_t)(ESI), 0x102e158eu);
  /* 102e158e push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1590 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1592 push 0x102e65f8 */
  push32((uint32_t)(0x102e65f8u));
  /* 102e1597 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1599 call esi */
  call_ind((uint32_t)(ESI), 0x102e159bu);
  /* 102e159b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e159e push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15a0 push 0x102e6548 */
  push32((uint32_t)(0x102e6548u));
  /* 102e15a5 call edi */
  call_ind((uint32_t)(EDI), 0x102e15a7u);
  /* 102e15a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15ab push 0x102e6660 */
  push32((uint32_t)(0x102e6660u));
  /* 102e15b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e15b2 call esi */
  call_ind((uint32_t)(ESI), 0x102e15b4u);
  /* 102e15b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15b6 push 0x102e6588 */
  push32((uint32_t)(0x102e6588u));
  /* 102e15bb call edi */
  call_ind((uint32_t)(EDI), 0x102e15bdu);
  /* 102e15bd push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15bf push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15c1 push 0x102e65f0 */
  push32((uint32_t)(0x102e65f0u));
  /* 102e15c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e15c8 call esi */
  call_ind((uint32_t)(ESI), 0x102e15cau);
  /* 102e15ca push 2 */
  push32((uint32_t)(0x2u));
  /* 102e15cc push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15ce push 0x102e65f8 */
  push32((uint32_t)(0x102e65f8u));
  /* 102e15d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e15d5 call esi */
  call_ind((uint32_t)(ESI), 0x102e15d7u);
  /* 102e15d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e15da push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15dc push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e15e1 call edi */
  call_ind((uint32_t)(EDI), 0x102e15e3u);
  /* 102e15e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15e7 push 0x102e6600 */
  push32((uint32_t)(0x102e6600u));
  /* 102e15ec push 1 */
  push32((uint32_t)(0x1u));
  /* 102e15ee call esi */
  call_ind((uint32_t)(ESI), 0x102e15f0u);
  /* 102e15f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e15f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15f4 push 0x102e6628 */
  push32((uint32_t)(0x102e6628u));
  /* 102e15f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e15fb call esi */
  call_ind((uint32_t)(ESI), 0x102e15fdu);
  /* 102e15fd push 0 */
  push32((uint32_t)(0x0u));
  /* 102e15ff push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1604 call edi */
  call_ind((uint32_t)(EDI), 0x102e1606u);
  /* 102e1606 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1608 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e160a push 0x102e6650 */
  push32((uint32_t)(0x102e6650u));
  /* 102e160f push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1611 call esi */
  call_ind((uint32_t)(ESI), 0x102e1613u);
  /* 102e1613 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1616 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1618 push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e161d call edi */
  call_ind((uint32_t)(EDI), 0x102e161fu);
  /* 102e161f push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1621 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1623 push 0x102e6670 */
  push32((uint32_t)(0x102e6670u));
  /* 102e1628 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e162a call esi */
  call_ind((uint32_t)(ESI), 0x102e162cu);
  /* 102e162c push 2 */
  push32((uint32_t)(0x2u));
  /* 102e162e push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1630 push 0x102e6678 */
  push32((uint32_t)(0x102e6678u));
  /* 102e1635 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1637 call esi */
  call_ind((uint32_t)(ESI), 0x102e1639u);
  /* 102e1639 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102e163b push 1 */
  push32((uint32_t)(0x1u));
  /* 102e163d call dword ptr [0x102e50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c8))), 0x102e1643u);
  /* 102e1643 mov ebx, dword ptr [0x102e50cc] */
  EBX = (r32((uint32_t)(0x102e50cc)));
  /* 102e1649 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 102e164b call ebx */
  call_ind((uint32_t)(EBX), 0x102e164du);
  /* 102e164d push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102e164f call ebx */
  call_ind((uint32_t)(EBX), 0x102e1651u);
  /* 102e1651 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1654:;
  /* 102e1654 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1656 push 0x102e64d8 */
  push32((uint32_t)(0x102e64d8u));
  /* 102e165b call dword ptr [0x102e50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d0))), 0x102e1661u);
  /* 102e1661 mov ebx, dword ptr [0x102e50d4] */
  EBX = (r32((uint32_t)(0x102e50d4)));
  /* 102e1667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e166a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e166c jle 0x102e168c */
  if ((C.zf||C.sf!=C.of)) goto L_102e168c;
  /* 102e166e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1670 call dword ptr [0x102e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d8))), 0x102e1676u);
  /* 102e1676 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1678 push 0x102e64d8 */
  push32((uint32_t)(0x102e64d8u));
  /* 102e167d push 1 */
  push32((uint32_t)(0x1u));
  /* 102e167f call ebx */
  call_ind((uint32_t)(EBX), 0x102e1681u);
  /* 102e1681 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1683 call dword ptr [0x102e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c4))), 0x102e1689u);
  /* 102e1689 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e168c:;
  /* 102e168c push 0 */
  push32((uint32_t)(0x0u));
  /* 102e168e push 0x102e64e0 */
  push32((uint32_t)(0x102e64e0u));
  /* 102e1693 call dword ptr [0x102e50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d0))), 0x102e1699u);
  /* 102e1699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e169c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e169e jle 0x102e16d6 */
  if ((C.zf||C.sf!=C.of)) goto L_102e16d6;
  /* 102e16a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16a2 push 0x102e6520 */
  push32((uint32_t)(0x102e6520u));
  /* 102e16a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16a9 call dword ptr [0x102e50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50dc))), 0x102e16afu);
  /* 102e16af push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16b1 call dword ptr [0x102e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d8))), 0x102e16b7u);
  /* 102e16b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16b9 push 0x102e64e0 */
  push32((uint32_t)(0x102e64e0u));
  /* 102e16be push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16c0 call ebx */
  call_ind((uint32_t)(EBX), 0x102e16c2u);
  /* 102e16c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16c4 call dword ptr [0x102e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c4))), 0x102e16cau);
  /* 102e16ca push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16cc push 0x102e6520 */
  push32((uint32_t)(0x102e6520u));
  /* 102e16d1 call edi */
  call_ind((uint32_t)(EDI), 0x102e16d3u);
  /* 102e16d3 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e16d6:;
  /* 102e16d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e16d8 push 0x102e64e8 */
  push32((uint32_t)(0x102e64e8u));
  /* 102e16dd call dword ptr [0x102e50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d0))), 0x102e16e3u);
  /* 102e16e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e16e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e16e8 jle 0x102e1708 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1708;
  /* 102e16ea push 1 */
  push32((uint32_t)(0x1u));
  /* 102e16ec call dword ptr [0x102e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d8))), 0x102e16f2u);
  /* 102e16f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e16f4 push 0x102e64e8 */
  push32((uint32_t)(0x102e64e8u));
  /* 102e16f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e16fb call ebx */
  call_ind((uint32_t)(EBX), 0x102e16fdu);
  /* 102e16fd push 1 */
  push32((uint32_t)(0x1u));
  /* 102e16ff call dword ptr [0x102e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c4))), 0x102e1705u);
  /* 102e1705 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1708:;
  /* 102e1708 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e170a call dword ptr [0x102e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e0))), 0x102e1710u);
  /* 102e1710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1713 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1715 je 0x102e18bc */
  if (C.zf) goto L_102e18bc;
  /* 102e171b push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e1720 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1726u);
  /* 102e1726 mov ebx, dword ptr [0x102e50e4] */
  EBX = (r32((uint32_t)(0x102e50e4)));
  /* 102e172c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e172f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1731 jle 0x102e1773 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1773;
  /* 102e1733 push 0x102e6508 */
  push32((uint32_t)(0x102e6508u));
  /* 102e1738 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e173eu);
  /* 102e173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1741 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1743 jle 0x102e1773 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1773;
  /* 102e1745 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102e1747 push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e174c push 0x102e6628 */
  push32((uint32_t)(0x102e6628u));
  /* 102e1751 push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e1756 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1758u);
  /* 102e1758 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e175a push 0x102e6508 */
  push32((uint32_t)(0x102e6508u));
  /* 102e175f call edi */
  call_ind((uint32_t)(EDI), 0x102e1761u);
  /* 102e1761 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1763 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1765 push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e176a push 1 */
  push32((uint32_t)(0x1u));
  /* 102e176c call esi */
  call_ind((uint32_t)(ESI), 0x102e176eu);
  /* 102e176e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1771 jmp 0x102e1780 */
  goto L_102e1780;
L_102e1773:;
  /* 102e1773 push 0x102e6508 */
  push32((uint32_t)(0x102e6508u));
  /* 102e1778 call 0x102e1330 */
  push32(0x102e177du); f_102e1330();
  /* 102e177d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1780:;
  /* 102e1780 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1785 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e178bu);
  /* 102e178b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e178e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1790 jle 0x102e17d2 */
  if ((C.zf||C.sf!=C.of)) goto L_102e17d2;
  /* 102e1792 push 0x102e6538 */
  push32((uint32_t)(0x102e6538u));
  /* 102e1797 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e179du);
  /* 102e179d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e17a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e17a2 jle 0x102e17d2 */
  if ((C.zf||C.sf!=C.of)) goto L_102e17d2;
  /* 102e17a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102e17a6 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e17ab push 0x102e6650 */
  push32((uint32_t)(0x102e6650u));
  /* 102e17b0 push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e17b5 call ebx */
  call_ind((uint32_t)(EBX), 0x102e17b7u);
  /* 102e17b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e17b9 push 0x102e6538 */
  push32((uint32_t)(0x102e6538u));
  /* 102e17be call edi */
  call_ind((uint32_t)(EDI), 0x102e17c0u);
  /* 102e17c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e17c2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102e17c4 push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e17c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e17cb call esi */
  call_ind((uint32_t)(ESI), 0x102e17cdu);
  /* 102e17cd add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e17d0 jmp 0x102e17df */
  goto L_102e17df;
L_102e17d2:;
  /* 102e17d2 push 0x102e6538 */
  push32((uint32_t)(0x102e6538u));
  /* 102e17d7 call 0x102e1330 */
  push32(0x102e17dcu); f_102e1330();
  /* 102e17dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e17df:;
  /* 102e17df push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e17e4 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e17eau);
  /* 102e17ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e17ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e17ef jle 0x102e1831 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1831;
  /* 102e17f1 push 0x102e6560 */
  push32((uint32_t)(0x102e6560u));
  /* 102e17f6 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e17fcu);
  /* 102e17fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e17ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1801 jle 0x102e1831 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1831;
  /* 102e1803 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102e1805 push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e180a push 0x102e6678 */
  push32((uint32_t)(0x102e6678u));
  /* 102e180f push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e1814 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1816u);
  /* 102e1816 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1818 push 0x102e6560 */
  push32((uint32_t)(0x102e6560u));
  /* 102e181d call edi */
  call_ind((uint32_t)(EDI), 0x102e181fu);
  /* 102e181f push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1821 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1823 push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e1828 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e182a call esi */
  call_ind((uint32_t)(ESI), 0x102e182cu);
  /* 102e182c add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e182f jmp 0x102e183e */
  goto L_102e183e;
L_102e1831:;
  /* 102e1831 push 0x102e6560 */
  push32((uint32_t)(0x102e6560u));
  /* 102e1836 call 0x102e1330 */
  push32(0x102e183bu); f_102e1330();
  /* 102e183b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e183e:;
  /* 102e183e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1840 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1846u);
  /* 102e1846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1849 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e184b jne 0x102e189f */
  if (!C.zf) goto L_102e189f;
  /* 102e184d push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1852 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1858u);
  /* 102e1858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e185b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e185d jle 0x102e189f */
  if ((C.zf||C.sf!=C.of)) goto L_102e189f;
  /* 102e185f push 0x102e6590 */
  push32((uint32_t)(0x102e6590u));
  /* 102e1864 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e186au);
  /* 102e186a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e186d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e186f jle 0x102e189f */
  if ((C.zf||C.sf!=C.of)) goto L_102e189f;
  /* 102e1871 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102e1873 push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1878 push 0x102e6680 */
  push32((uint32_t)(0x102e6680u));
  /* 102e187d push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e1882 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1884u);
  /* 102e1884 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1886 push 0x102e6590 */
  push32((uint32_t)(0x102e6590u));
  /* 102e188b call edi */
  call_ind((uint32_t)(EDI), 0x102e188du);
  /* 102e188d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e188f push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1891 push 0x102e6698 */
  push32((uint32_t)(0x102e6698u));
  /* 102e1896 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1898 call esi */
  call_ind((uint32_t)(ESI), 0x102e189au);
  /* 102e189a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e189d jmp 0x102e18ac */
  goto L_102e18ac;
L_102e189f:;
  /* 102e189f push 0x102e6590 */
  push32((uint32_t)(0x102e6590u));
  /* 102e18a4 call 0x102e1330 */
  push32(0x102e18a9u); f_102e1330();
  /* 102e18a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e18ac:;
  /* 102e18ac push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 102e18b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e18b3 call dword ptr [0x102e50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c8))), 0x102e18b9u);
  /* 102e18b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e18bc:;
  /* 102e18bc push 2 */
  push32((uint32_t)(0x2u));
  /* 102e18be call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e18c4u);
  /* 102e18c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e18c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e18c9 je 0x102e18f3 */
  if (C.zf) goto L_102e18f3;
  /* 102e18cb push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e18d0 push 0x102e6628 */
  push32((uint32_t)(0x102e6628u));
  /* 102e18d5 call dword ptr [0x102e5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5108))), 0x102e18dbu);
  /* 102e18db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e18de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e18e0 jle 0x102e18f3 */
  if ((C.zf||C.sf!=C.of)) goto L_102e18f3;
  /* 102e18e2 mov ebx, dword ptr [0x102e50b8] */
  EBX = (r32((uint32_t)(0x102e50b8)));
  /* 102e18e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e18ea push 2 */
  push32((uint32_t)(0x2u));
  /* 102e18ec call ebx */
  call_ind((uint32_t)(EBX), 0x102e18eeu);
  /* 102e18ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e18f1 jmp 0x102e18f9 */
  goto L_102e18f9;
L_102e18f3:;
  /* 102e18f3 mov ebx, dword ptr [0x102e50b8] */
  EBX = (r32((uint32_t)(0x102e50b8)));
L_102e18f9:;
  /* 102e18f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e18fb call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1901u);
  /* 102e1901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1904 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1906 jne 0x102e19d4 */
  if (!C.zf) goto L_102e19d4;
  /* 102e190c push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e1911 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1917u);
  /* 102e1917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e191a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e191c jle 0x102e19d4 */
  if ((C.zf||C.sf!=C.of)) goto L_102e19d4;
  /* 102e1922 push 0x102e6510 */
  push32((uint32_t)(0x102e6510u));
  /* 102e1927 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e192du);
  /* 102e192d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1932 jle 0x102e195b */
  if ((C.zf||C.sf!=C.of)) goto L_102e195b;
  /* 102e1934 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1936 call ebp */
  call_ind((uint32_t)(EBP), 0x102e1938u);
  /* 102e1938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e193b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e193e jle 0x102e195b */
  if ((C.zf||C.sf!=C.of)) goto L_102e195b;
  /* 102e1940 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1942 push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e1947 call edi */
  call_ind((uint32_t)(EDI), 0x102e1949u);
  /* 102e1949 push 0x102e6510 */
  push32((uint32_t)(0x102e6510u));
  /* 102e194e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1950 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1956u);
  /* 102e1956 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1959 jmp 0x102e19d4 */
  goto L_102e19d4;
L_102e195b:;
  /* 102e195b push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1960 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1966u);
  /* 102e1966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e196b jle 0x102e1988 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1988;
  /* 102e196d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e196f push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e1974 call edi */
  call_ind((uint32_t)(EDI), 0x102e1976u);
  /* 102e1976 push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e197b push 1 */
  push32((uint32_t)(0x1u));
  /* 102e197d call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1983u);
  /* 102e1983 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1986 jmp 0x102e19d4 */
  goto L_102e19d4;
L_102e1988:;
  /* 102e1988 push 0x102e6528 */
  push32((uint32_t)(0x102e6528u));
  /* 102e198d call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1993u);
  /* 102e1993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1996 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1998 jle 0x102e19b5 */
  if ((C.zf||C.sf!=C.of)) goto L_102e19b5;
  /* 102e199a push 0 */
  push32((uint32_t)(0x0u));
  /* 102e199c push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e19a1 call edi */
  call_ind((uint32_t)(EDI), 0x102e19a3u);
  /* 102e19a3 push 0x102e6528 */
  push32((uint32_t)(0x102e6528u));
  /* 102e19a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e19aa call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e19b0u);
  /* 102e19b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e19b3 jmp 0x102e19d4 */
  goto L_102e19d4;
L_102e19b5:;
  /* 102e19b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e19b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e19b9 call ebx */
  call_ind((uint32_t)(EBX), 0x102e19bbu);
  /* 102e19bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102e19bd push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e19c2 call edi */
  call_ind((uint32_t)(EDI), 0x102e19c4u);
  /* 102e19c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e19c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e19c8 push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e19cd push 1 */
  push32((uint32_t)(0x1u));
  /* 102e19cf call esi */
  call_ind((uint32_t)(ESI), 0x102e19d1u);
  /* 102e19d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e19d4:;
  /* 102e19d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 102e19d6 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e19dcu);
  /* 102e19dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e19df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e19e1 je 0x102e1a03 */
  if (C.zf) goto L_102e1a03;
  /* 102e19e3 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e19e8 push 0x102e6650 */
  push32((uint32_t)(0x102e6650u));
  /* 102e19ed call dword ptr [0x102e5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5108))), 0x102e19f3u);
  /* 102e19f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e19f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e19f8 jle 0x102e1a03 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1a03;
  /* 102e19fa push 0 */
  push32((uint32_t)(0x0u));
  /* 102e19fc push 6 */
  push32((uint32_t)(0x6u));
  /* 102e19fe call ebx */
  call_ind((uint32_t)(EBX), 0x102e1a00u);
  /* 102e1a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1a03:;
  /* 102e1a03 push 6 */
  push32((uint32_t)(0x6u));
  /* 102e1a05 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1a0bu);
  /* 102e1a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1a10 jne 0x102e1b1a */
  if (!C.zf) goto L_102e1b1a;
  /* 102e1a16 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1a1b call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1a21u);
  /* 102e1a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1a26 jle 0x102e1b1a */
  if ((C.zf||C.sf!=C.of)) goto L_102e1b1a;
  /* 102e1a2c push 0x102e6540 */
  push32((uint32_t)(0x102e6540u));
  /* 102e1a31 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1a37u);
  /* 102e1a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1a3c jle 0x102e1a68 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1a68;
  /* 102e1a3e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1a40 call ebp */
  call_ind((uint32_t)(EBP), 0x102e1a42u);
  /* 102e1a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e1a48 jle 0x102e1a68 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1a68;
  /* 102e1a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1a4c push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1a51 call edi */
  call_ind((uint32_t)(EDI), 0x102e1a53u);
  /* 102e1a53 push 0x102e6540 */
  push32((uint32_t)(0x102e6540u));
  /* 102e1a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1a5a call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1a60u);
  /* 102e1a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a63 jmp 0x102e1b1a */
  goto L_102e1b1a;
L_102e1a68:;
  /* 102e1a68 push 0x102e6510 */
  push32((uint32_t)(0x102e6510u));
  /* 102e1a6d call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1a73u);
  /* 102e1a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1a78 jle 0x102e1aa1 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1aa1;
  /* 102e1a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1a7c call ebp */
  call_ind((uint32_t)(EBP), 0x102e1a7eu);
  /* 102e1a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e1a84 jle 0x102e1aa1 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1aa1;
  /* 102e1a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1a88 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1a8d call edi */
  call_ind((uint32_t)(EDI), 0x102e1a8fu);
  /* 102e1a8f push 0x102e6510 */
  push32((uint32_t)(0x102e6510u));
  /* 102e1a94 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1a96 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1a9cu);
  /* 102e1a9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1a9f jmp 0x102e1b1a */
  goto L_102e1b1a;
L_102e1aa1:;
  /* 102e1aa1 push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1aa6 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1aacu);
  /* 102e1aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1aaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1ab1 jle 0x102e1ace */
  if ((C.zf||C.sf!=C.of)) goto L_102e1ace;
  /* 102e1ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1ab5 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1aba call edi */
  call_ind((uint32_t)(EDI), 0x102e1abcu);
  /* 102e1abc push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1ac3 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1ac9u);
  /* 102e1ac9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1acc jmp 0x102e1b1a */
  goto L_102e1b1a;
L_102e1ace:;
  /* 102e1ace push 0x102e6528 */
  push32((uint32_t)(0x102e6528u));
  /* 102e1ad3 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1ad9u);
  /* 102e1ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1ade jle 0x102e1afb */
  if ((C.zf||C.sf!=C.of)) goto L_102e1afb;
  /* 102e1ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1ae2 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1ae7 call edi */
  call_ind((uint32_t)(EDI), 0x102e1ae9u);
  /* 102e1ae9 push 0x102e6528 */
  push32((uint32_t)(0x102e6528u));
  /* 102e1aee push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1af0 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1af6u);
  /* 102e1af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1af9 jmp 0x102e1b1a */
  goto L_102e1b1a;
L_102e1afb:;
  /* 102e1afb push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1afd push 6 */
  push32((uint32_t)(0x6u));
  /* 102e1aff call ebx */
  call_ind((uint32_t)(EBX), 0x102e1b01u);
  /* 102e1b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1b03 push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e1b08 call edi */
  call_ind((uint32_t)(EDI), 0x102e1b0au);
  /* 102e1b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1b0e push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e1b13 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1b15 call esi */
  call_ind((uint32_t)(ESI), 0x102e1b17u);
  /* 102e1b17 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1b1a:;
  /* 102e1b1a push 7 */
  push32((uint32_t)(0x7u));
  /* 102e1b1c call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1b22u);
  /* 102e1b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1b25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1b27 je 0x102e1b49 */
  if (C.zf) goto L_102e1b49;
  /* 102e1b29 push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e1b2e push 0x102e6678 */
  push32((uint32_t)(0x102e6678u));
  /* 102e1b33 call dword ptr [0x102e5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5108))), 0x102e1b39u);
  /* 102e1b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1b3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1b3e jle 0x102e1b49 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1b49;
  /* 102e1b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1b42 push 7 */
  push32((uint32_t)(0x7u));
  /* 102e1b44 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1b46u);
  /* 102e1b46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1b49:;
  /* 102e1b49 push 7 */
  push32((uint32_t)(0x7u));
  /* 102e1b4b call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1b51u);
  /* 102e1b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1b54 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1b56 jne 0x102e1be7 */
  if (!C.zf) goto L_102e1be7;
  /* 102e1b5c push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e1b61 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1b67u);
  /* 102e1b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1b6c jle 0x102e1be7 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1be7;
  /* 102e1b6e push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e1b73 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1b79u);
  /* 102e1b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1b7e jle 0x102e1b9b */
  if ((C.zf||C.sf!=C.of)) goto L_102e1b9b;
  /* 102e1b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1b82 push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e1b87 call edi */
  call_ind((uint32_t)(EDI), 0x102e1b89u);
  /* 102e1b89 push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e1b8e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1b90 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1b96u);
  /* 102e1b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1b99 jmp 0x102e1be7 */
  goto L_102e1be7;
L_102e1b9b:;
  /* 102e1b9b push 0x102e6598 */
  push32((uint32_t)(0x102e6598u));
  /* 102e1ba0 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1ba6u);
  /* 102e1ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1bab jle 0x102e1bc8 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1bc8;
  /* 102e1bad push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1baf push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e1bb4 call edi */
  call_ind((uint32_t)(EDI), 0x102e1bb6u);
  /* 102e1bb6 push 0x102e6598 */
  push32((uint32_t)(0x102e6598u));
  /* 102e1bbb push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1bbd call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1bc3u);
  /* 102e1bc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1bc6 jmp 0x102e1be7 */
  goto L_102e1be7;
L_102e1bc8:;
  /* 102e1bc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1bca push 7 */
  push32((uint32_t)(0x7u));
  /* 102e1bcc call ebx */
  call_ind((uint32_t)(EBX), 0x102e1bceu);
  /* 102e1bce push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1bd0 push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e1bd5 call edi */
  call_ind((uint32_t)(EDI), 0x102e1bd7u);
  /* 102e1bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1bdb push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e1be0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1be2 call esi */
  call_ind((uint32_t)(ESI), 0x102e1be4u);
  /* 102e1be4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1be7:;
  /* 102e1be7 push 3 */
  push32((uint32_t)(0x3u));
  /* 102e1be9 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1befu);
  /* 102e1bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1bf2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1bf4 je 0x102e1c83 */
  if (C.zf) goto L_102e1c83;
  /* 102e1bfa push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1bff call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1c05u);
  /* 102e1c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1c0a je 0x102e1c1b */
  if (C.zf) goto L_102e1c1b;
  /* 102e1c0c push 3 */
  push32((uint32_t)(0x3u));
  /* 102e1c0e call dword ptr [0x102e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e0))), 0x102e1c14u);
  /* 102e1c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1c17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1c19 je 0x102e1c83 */
  if (C.zf) goto L_102e1c83;
L_102e1c1b:;
  /* 102e1c1b push 0x102e6558 */
  push32((uint32_t)(0x102e6558u));
  /* 102e1c20 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1c26u);
  /* 102e1c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1c2b jle 0x102e1c83 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1c83;
  /* 102e1c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c2f push 3 */
  push32((uint32_t)(0x3u));
  /* 102e1c31 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1c33u);
  /* 102e1c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c35 push 0x102e6558 */
  push32((uint32_t)(0x102e6558u));
  /* 102e1c3a call edi */
  call_ind((uint32_t)(EDI), 0x102e1c3cu);
  /* 102e1c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c40 push 0x102e6600 */
  push32((uint32_t)(0x102e6600u));
  /* 102e1c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1c47 call esi */
  call_ind((uint32_t)(ESI), 0x102e1c49u);
  /* 102e1c49 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c4d push 0x102e6628 */
  push32((uint32_t)(0x102e6628u));
  /* 102e1c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1c54 call esi */
  call_ind((uint32_t)(ESI), 0x102e1c56u);
  /* 102e1c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c5a push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e1c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1c61 call esi */
  call_ind((uint32_t)(ESI), 0x102e1c63u);
  /* 102e1c63 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1c66 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c6a push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1c71 call esi */
  call_ind((uint32_t)(ESI), 0x102e1c73u);
  /* 102e1c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1c77 push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e1c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1c7e call esi */
  call_ind((uint32_t)(ESI), 0x102e1c80u);
  /* 102e1c80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1c83:;
  /* 102e1c83 push 8 */
  push32((uint32_t)(0x8u));
  /* 102e1c85 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1c8bu);
  /* 102e1c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1c8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1c90 je 0x102e1d30 */
  if (C.zf) goto L_102e1d30;
  /* 102e1c96 push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1c9b call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1ca1u);
  /* 102e1ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1ca6 je 0x102e1cb7 */
  if (C.zf) goto L_102e1cb7;
  /* 102e1ca8 push 3 */
  push32((uint32_t)(0x3u));
  /* 102e1caa call dword ptr [0x102e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e0))), 0x102e1cb0u);
  /* 102e1cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1cb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1cb5 je 0x102e1d30 */
  if (C.zf) goto L_102e1d30;
L_102e1cb7:;
  /* 102e1cb7 push 0x102e6568 */
  push32((uint32_t)(0x102e6568u));
  /* 102e1cbc call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1cc2u);
  /* 102e1cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1cc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1cc7 jle 0x102e1d30 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1d30;
  /* 102e1cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1ccb push 8 */
  push32((uint32_t)(0x8u));
  /* 102e1ccd call ebx */
  call_ind((uint32_t)(EBX), 0x102e1ccfu);
  /* 102e1ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1cd1 push 0x102e6568 */
  push32((uint32_t)(0x102e6568u));
  /* 102e1cd6 call edi */
  call_ind((uint32_t)(EDI), 0x102e1cd8u);
  /* 102e1cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1cda push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1cdc push 0x102e6650 */
  push32((uint32_t)(0x102e6650u));
  /* 102e1ce1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1ce3 call esi */
  call_ind((uint32_t)(ESI), 0x102e1ce5u);
  /* 102e1ce5 push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1cea call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1cf0u);
  /* 102e1cf0 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1cf5 jne 0x102e1d06 */
  if (!C.zf) goto L_102e1d06;
  /* 102e1cf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1cf9 push eax */
  push32((uint32_t)(EAX));
  /* 102e1cfa push 0x102e6628 */
  push32((uint32_t)(0x102e6628u));
  /* 102e1cff push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1d01 call esi */
  call_ind((uint32_t)(ESI), 0x102e1d03u);
  /* 102e1d03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1d06:;
  /* 102e1d06 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d0a push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e1d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1d11 call esi */
  call_ind((uint32_t)(ESI), 0x102e1d13u);
  /* 102e1d13 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d17 push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1d1e call esi */
  call_ind((uint32_t)(ESI), 0x102e1d20u);
  /* 102e1d20 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d24 push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e1d29 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1d2b call esi */
  call_ind((uint32_t)(ESI), 0x102e1d2du);
  /* 102e1d2d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1d30:;
  /* 102e1d30 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e1d32 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1d38u);
  /* 102e1d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1d3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1d3d je 0x102e1dcc */
  if (C.zf) goto L_102e1dcc;
  /* 102e1d43 push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e1d48 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1d4eu);
  /* 102e1d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1d53 je 0x102e1d64 */
  if (C.zf) goto L_102e1d64;
  /* 102e1d55 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1d57 call dword ptr [0x102e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e0))), 0x102e1d5du);
  /* 102e1d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1d60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1d62 je 0x102e1dcc */
  if (C.zf) goto L_102e1dcc;
L_102e1d64:;
  /* 102e1d64 push 0x102e6578 */
  push32((uint32_t)(0x102e6578u));
  /* 102e1d69 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1d6fu);
  /* 102e1d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1d74 jle 0x102e1dcc */
  if ((C.zf||C.sf!=C.of)) goto L_102e1dcc;
  /* 102e1d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d78 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e1d7a call ebx */
  call_ind((uint32_t)(EBX), 0x102e1d7cu);
  /* 102e1d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d7e push 0x102e6578 */
  push32((uint32_t)(0x102e6578u));
  /* 102e1d83 call edi */
  call_ind((uint32_t)(EDI), 0x102e1d85u);
  /* 102e1d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d89 push 0x102e6670 */
  push32((uint32_t)(0x102e6670u));
  /* 102e1d8e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1d90 call esi */
  call_ind((uint32_t)(ESI), 0x102e1d92u);
  /* 102e1d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1d96 push 0x102e6678 */
  push32((uint32_t)(0x102e6678u));
  /* 102e1d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1d9d call esi */
  call_ind((uint32_t)(ESI), 0x102e1d9fu);
  /* 102e1d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1da3 push 0x102e6630 */
  push32((uint32_t)(0x102e6630u));
  /* 102e1da8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1daa call esi */
  call_ind((uint32_t)(ESI), 0x102e1dacu);
  /* 102e1dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1daf push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1db3 push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1db8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1dba call esi */
  call_ind((uint32_t)(ESI), 0x102e1dbcu);
  /* 102e1dbc push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1dc0 push 0x102e6640 */
  push32((uint32_t)(0x102e6640u));
  /* 102e1dc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1dc7 call esi */
  call_ind((uint32_t)(ESI), 0x102e1dc9u);
  /* 102e1dc9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1dcc:;
  /* 102e1dcc push 4 */
  push32((uint32_t)(0x4u));
  /* 102e1dce call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1dd4u);
  /* 102e1dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1dd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1dd9 je 0x102e1e3b */
  if (C.zf) goto L_102e1e3b;
  /* 102e1ddb push 0x102e6518 */
  push32((uint32_t)(0x102e6518u));
  /* 102e1de0 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1de6u);
  /* 102e1de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1deb jne 0x102e1e3b */
  if (!C.zf) goto L_102e1e3b;
  /* 102e1ded push eax */
  push32((uint32_t)(EAX));
  /* 102e1dee push 4 */
  push32((uint32_t)(0x4u));
  /* 102e1df0 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1df2u);
  /* 102e1df2 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 102e1df7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e1df9 call dword ptr [0x102e50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c8))), 0x102e1dffu);
  /* 102e1dff push 0x102e6608 */
  push32((uint32_t)(0x102e6608u));
  /* 102e1e04 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1e0au);
  /* 102e1e0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1e0f jle 0x102e1e2d */
  if ((C.zf||C.sf!=C.of)) goto L_102e1e2d;
  /* 102e1e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1e13 call dword ptr [0x102e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d8))), 0x102e1e19u);
  /* 102e1e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1e1b push 0x102e6608 */
  push32((uint32_t)(0x102e6608u));
  /* 102e1e20 call edi */
  call_ind((uint32_t)(EDI), 0x102e1e22u);
  /* 102e1e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1e24 call dword ptr [0x102e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c4))), 0x102e1e2au);
  /* 102e1e2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1e2d:;
  /* 102e1e2d push 0x102e6174 */
  push32((uint32_t)(0x102e6174u));
  /* 102e1e32 call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e1e38u);
  /* 102e1e38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1e3b:;
  /* 102e1e3b push 5 */
  push32((uint32_t)(0x5u));
  /* 102e1e3d call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1e43u);
  /* 102e1e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1e46 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1e48 je 0x102e1eaa */
  if (C.zf) goto L_102e1eaa;
  /* 102e1e4a push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e1e4f call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1e55u);
  /* 102e1e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1e5a jne 0x102e1eaa */
  if (!C.zf) goto L_102e1eaa;
  /* 102e1e5c push eax */
  push32((uint32_t)(EAX));
  /* 102e1e5d push 5 */
  push32((uint32_t)(0x5u));
  /* 102e1e5f call ebx */
  call_ind((uint32_t)(EBX), 0x102e1e61u);
  /* 102e1e61 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 102e1e66 push 3 */
  push32((uint32_t)(0x3u));
  /* 102e1e68 call dword ptr [0x102e50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c8))), 0x102e1e6eu);
  /* 102e1e6e push 0x102e6690 */
  push32((uint32_t)(0x102e6690u));
  /* 102e1e73 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1e79u);
  /* 102e1e79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1e7e jle 0x102e1e9c */
  if ((C.zf||C.sf!=C.of)) goto L_102e1e9c;
  /* 102e1e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1e82 call dword ptr [0x102e50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50d8))), 0x102e1e88u);
  /* 102e1e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1e8a push 0x102e6690 */
  push32((uint32_t)(0x102e6690u));
  /* 102e1e8f call edi */
  call_ind((uint32_t)(EDI), 0x102e1e91u);
  /* 102e1e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1e93 call dword ptr [0x102e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c4))), 0x102e1e99u);
  /* 102e1e99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1e9c:;
  /* 102e1e9c push 0x102e616c */
  push32((uint32_t)(0x102e616cu));
  /* 102e1ea1 call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e1ea7u);
  /* 102e1ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1eaa:;
  /* 102e1eaa push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1eac call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1eb2u);
  /* 102e1eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1eb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1eb7 je 0x102e1ee5 */
  if (C.zf) goto L_102e1ee5;
  /* 102e1eb9 call dword ptr [0x102e50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50ec))), 0x102e1ebfu);
  /* 102e1ebf cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e1ec4 jle 0x102e1ee5 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1ee5;
  /* 102e1ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1ec8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1eca call ebx */
  call_ind((uint32_t)(EBX), 0x102e1eccu);
  /* 102e1ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1ece push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1ed3 call edi */
  call_ind((uint32_t)(EDI), 0x102e1ed5u);
  /* 102e1ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1ed7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102e1ed9 push 0x102e6680 */
  push32((uint32_t)(0x102e6680u));
  /* 102e1ede push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1ee0 call esi */
  call_ind((uint32_t)(ESI), 0x102e1ee2u);
  /* 102e1ee2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1ee5:;
  /* 102e1ee5 push 0xa */
  push32((uint32_t)(0xau));
  /* 102e1ee7 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1eedu);
  /* 102e1eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1ef0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1ef2 je 0x102e1f14 */
  if (C.zf) goto L_102e1f14;
  /* 102e1ef4 push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1ef9 push 0x102e6680 */
  push32((uint32_t)(0x102e6680u));
  /* 102e1efe call dword ptr [0x102e5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5108))), 0x102e1f04u);
  /* 102e1f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1f09 jle 0x102e1f14 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1f14;
  /* 102e1f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1f0d push 0xa */
  push32((uint32_t)(0xau));
  /* 102e1f0f call ebx */
  call_ind((uint32_t)(EBX), 0x102e1f11u);
  /* 102e1f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1f14:;
  /* 102e1f14 push 0xa */
  push32((uint32_t)(0xau));
  /* 102e1f16 call dword ptr [0x102e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50b0))), 0x102e1f1cu);
  /* 102e1f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1f21 jne 0x102e1fef */
  if (!C.zf) goto L_102e1fef;
  /* 102e1f27 push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1f2c call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1f32u);
  /* 102e1f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1f37 jle 0x102e1fef */
  if ((C.zf||C.sf!=C.of)) goto L_102e1fef;
  /* 102e1f3d push 0x102e65a0 */
  push32((uint32_t)(0x102e65a0u));
  /* 102e1f42 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1f48u);
  /* 102e1f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1f4d jle 0x102e1f76 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1f76;
  /* 102e1f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1f51 call ebp */
  call_ind((uint32_t)(EBP), 0x102e1f53u);
  /* 102e1f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e1f59 jle 0x102e1f76 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1f76;
  /* 102e1f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1f5d push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1f62 call edi */
  call_ind((uint32_t)(EDI), 0x102e1f64u);
  /* 102e1f64 push 0x102e65a0 */
  push32((uint32_t)(0x102e65a0u));
  /* 102e1f69 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1f6b call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1f71u);
  /* 102e1f71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f74 jmp 0x102e1fef */
  goto L_102e1fef;
L_102e1f76:;
  /* 102e1f76 push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e1f7b call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1f81u);
  /* 102e1f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1f86 jle 0x102e1fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1fa3;
  /* 102e1f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1f8a push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1f8f call edi */
  call_ind((uint32_t)(EDI), 0x102e1f91u);
  /* 102e1f91 push 0x102e6570 */
  push32((uint32_t)(0x102e6570u));
  /* 102e1f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1f98 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1f9eu);
  /* 102e1f9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1fa1 jmp 0x102e1fef */
  goto L_102e1fef;
L_102e1fa3:;
  /* 102e1fa3 push 0x102e6598 */
  push32((uint32_t)(0x102e6598u));
  /* 102e1fa8 call dword ptr [0x102e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5104))), 0x102e1faeu);
  /* 102e1fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e1fb3 jle 0x102e1fd0 */
  if ((C.zf||C.sf!=C.of)) goto L_102e1fd0;
  /* 102e1fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1fb7 push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1fbc call edi */
  call_ind((uint32_t)(EDI), 0x102e1fbeu);
  /* 102e1fbe push 0x102e6598 */
  push32((uint32_t)(0x102e6598u));
  /* 102e1fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1fc5 call dword ptr [0x102e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50e8))), 0x102e1fcbu);
  /* 102e1fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1fce jmp 0x102e1fef */
  goto L_102e1fef;
L_102e1fd0:;
  /* 102e1fd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1fd2 push 0xa */
  push32((uint32_t)(0xau));
  /* 102e1fd4 call ebx */
  call_ind((uint32_t)(EBX), 0x102e1fd6u);
  /* 102e1fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1fd8 push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e1fdd call edi */
  call_ind((uint32_t)(EDI), 0x102e1fdfu);
  /* 102e1fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e1fe3 push 0x102e6638 */
  push32((uint32_t)(0x102e6638u));
  /* 102e1fe8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e1fea call esi */
  call_ind((uint32_t)(ESI), 0x102e1fecu);
  /* 102e1fec add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e1fef:;
  /* 102e1fef mov edi, dword ptr [0x102e50b0] */
  EDI = (r32((uint32_t)(0x102e50b0)));
  /* 102e1ff5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102e1ff7 call edi */
  call_ind((uint32_t)(EDI), 0x102e1ff9u);
  /* 102e1ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e1ffc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e1ffe je 0x102e2031 */
  if (C.zf) goto L_102e2031;
  /* 102e2000 mov esi, dword ptr [0x102e5104] */
  ESI = (r32((uint32_t)(0x102e5104)));
  /* 102e2006 push 0x102e64d8 */
  push32((uint32_t)(0x102e64d8u));
  /* 102e200b call esi */
  call_ind((uint32_t)(ESI), 0x102e200du);
  /* 102e200d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2010 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2013 jge 0x102e2037 */
  if ((C.sf==C.of)) goto L_102e2037;
  /* 102e2015 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2017 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102e2019 call ebx */
  call_ind((uint32_t)(EBX), 0x102e201bu);
  /* 102e201b push 0x102e6164 */
  push32((uint32_t)(0x102e6164u));
  /* 102e2020 call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e2026u);
  /* 102e2026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2029 call dword ptr [0x102e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50f0))), 0x102e202fu);
  /* 102e202f jmp 0x102e2037 */
  goto L_102e2037;
L_102e2031:;
  /* 102e2031 mov esi, dword ptr [0x102e5104] */
  ESI = (r32((uint32_t)(0x102e5104)));
L_102e2037:;
  /* 102e2037 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102e2039 call edi */
  call_ind((uint32_t)(EDI), 0x102e203bu);
  /* 102e203b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e203e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e2040 je 0x102e21c1 */
  if (C.zf) goto L_102e21c1;
  /* 102e2046 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2048 call ebp */
  call_ind((uint32_t)(EBP), 0x102e204au);
  /* 102e204a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e204d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2050 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e2053 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102e2056 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e2059 lea edi, [eax*8 + 0x2710] */
  EDI = ((uint32_t)(EAX*8 + 0x2710));
  /* 102e2060 call dword ptr [0x102e50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50ec))), 0x102e2066u);
  /* 102e2066 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2068 jg 0x102e20d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_102e20d6;
  /* 102e206a push 0x102e6500 */
  push32((uint32_t)(0x102e6500u));
  /* 102e206f call esi */
  call_ind((uint32_t)(ESI), 0x102e2071u);
  /* 102e2071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2076 jne 0x102e21bb */
  if (!C.zf) goto L_102e21bb;
  /* 102e207c push 0x102e6530 */
  push32((uint32_t)(0x102e6530u));
  /* 102e2081 call esi */
  call_ind((uint32_t)(ESI), 0x102e2083u);
  /* 102e2083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2088 jne 0x102e21bb */
  if (!C.zf) goto L_102e21bb;
  /* 102e208e push 0x102e6550 */
  push32((uint32_t)(0x102e6550u));
  /* 102e2093 call esi */
  call_ind((uint32_t)(ESI), 0x102e2095u);
  /* 102e2095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e209a jne 0x102e21bb */
  if (!C.zf) goto L_102e21bb;
  /* 102e20a0 push 0x102e6580 */
  push32((uint32_t)(0x102e6580u));
  /* 102e20a5 call esi */
  call_ind((uint32_t)(ESI), 0x102e20a7u);
  /* 102e20a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e20aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e20ac jne 0x102e21bb */
  if (!C.zf) goto L_102e21bb;
  /* 102e20b2 mov edi, dword ptr [0x102e50b0] */
  EDI = (r32((uint32_t)(0x102e50b0)));
  /* 102e20b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 102e20ba call edi */
  call_ind((uint32_t)(EDI), 0x102e20bcu);
  /* 102e20bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e20bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e20c1 je 0x102e21c1 */
  if (C.zf) goto L_102e21c1;
  /* 102e20c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 102e20c9 call edi */
  call_ind((uint32_t)(EDI), 0x102e20cbu);
  /* 102e20cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e20ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e20d0 je 0x102e21c1 */
  if (C.zf) goto L_102e21c1;
L_102e20d6:;
  /* 102e20d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e20d8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102e20da call ebx */
  call_ind((uint32_t)(EBX), 0x102e20dcu);
  /* 102e20dc push 0x42 */
  push32((uint32_t)(0x42u));
  /* 102e20de call dword ptr [0x102e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50cc))), 0x102e20e4u);
  /* 102e20e4 mov esi, dword ptr [0x102e50f4] */
  ESI = (r32((uint32_t)(0x102e50f4)));
  /* 102e20ea push 0x43 */
  push32((uint32_t)(0x43u));
  /* 102e20ec call esi */
  call_ind((uint32_t)(ESI), 0x102e20eeu);
  /* 102e20ee push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102e20f0 call esi */
  call_ind((uint32_t)(ESI), 0x102e20f2u);
  /* 102e20f2 push 0x102e615c */
  push32((uint32_t)(0x102e615cu));
  /* 102e20f7 call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e20fdu);
  /* 102e20fd mov esi, dword ptr [0x102e50f8] */
  ESI = (r32((uint32_t)(0x102e50f8)));
  /* 102e2103 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 102e2108 push 0x102e6658 */
  push32((uint32_t)(0x102e6658u));
  /* 102e210d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e210f push 0x102e6620 */
  push32((uint32_t)(0x102e6620u));
  /* 102e2114 push 0x102e6618 */
  push32((uint32_t)(0x102e6618u));
  /* 102e2119 push 0x102e64c8 */
  push32((uint32_t)(0x102e64c8u));
  /* 102e211e call esi */
  call_ind((uint32_t)(ESI), 0x102e2120u);
  /* 102e2120 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 102e2125 push 0x102e6668 */
  push32((uint32_t)(0x102e6668u));
  /* 102e212a push 0 */
  push32((uint32_t)(0x0u));
  /* 102e212c push 0x102e64c0 */
  push32((uint32_t)(0x102e64c0u));
  /* 102e2131 push 0x102e6618 */
  push32((uint32_t)(0x102e6618u));
  /* 102e2136 push 0x102e64d0 */
  push32((uint32_t)(0x102e64d0u));
  /* 102e213b call esi */
  call_ind((uint32_t)(ESI), 0x102e213du);
  /* 102e213d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2140 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2142 call ebp */
  call_ind((uint32_t)(EBP), 0x102e2144u);
  /* 102e2144 mov ecx, 0xf */
  ECX = (0xfu);
  /* 102e2149 mov esi, dword ptr [0x102e50fc] */
  ESI = (r32((uint32_t)(0x102e50fc)));
  /* 102e214f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2151 imul ecx, ecx, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7d0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e2157 push ecx */
  push32((uint32_t)(ECX));
  /* 102e2158 push 3 */
  push32((uint32_t)(0x3u));
  /* 102e215a push 0 */
  push32((uint32_t)(0x0u));
  /* 102e215c call esi */
  call_ind((uint32_t)(ESI), 0x102e215eu);
  /* 102e215e push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2160 call ebp */
  call_ind((uint32_t)(EBP), 0x102e2162u);
  /* 102e2162 mov edx, 0xa */
  EDX = (0xau);
  /* 102e2167 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2169 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e216f push edx */
  push32((uint32_t)(EDX));
  /* 102e2170 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2172 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2174 call esi */
  call_ind((uint32_t)(ESI), 0x102e2176u);
  /* 102e2176 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2178 call ebp */
  call_ind((uint32_t)(EBP), 0x102e217au);
  /* 102e217a mov ecx, 0xa */
  ECX = (0xau);
  /* 102e217f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2181 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102e2184 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e2187 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102e218a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e218d shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 102e2190 push eax */
  push32((uint32_t)(EAX));
  /* 102e2191 push 5 */
  push32((uint32_t)(0x5u));
  /* 102e2193 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2195 call esi */
  call_ind((uint32_t)(ESI), 0x102e2197u);
  /* 102e2197 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2199 call ebp */
  call_ind((uint32_t)(EBP), 0x102e219bu);
  /* 102e219b mov ecx, 0xa */
  ECX = (0xau);
  /* 102e21a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e21a2 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102e21a5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e21a8 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102e21ab lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102e21ae shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 102e21b1 push ecx */
  push32((uint32_t)(ECX));
  /* 102e21b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 102e21b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e21b6 call esi */
  call_ind((uint32_t)(ESI), 0x102e21b8u);
  /* 102e21b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e21bb:;
  /* 102e21bb mov edi, dword ptr [0x102e50b0] */
  EDI = (r32((uint32_t)(0x102e50b0)));
L_102e21c1:;
  /* 102e21c1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102e21c3 call edi */
  call_ind((uint32_t)(EDI), 0x102e21c5u);
  /* 102e21c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e21c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e21ca je 0x102e220b */
  if (C.zf) goto L_102e220b;
  /* 102e21cc mov esi, dword ptr [0x102e50d0] */
  ESI = (r32((uint32_t)(0x102e50d0)));
  /* 102e21d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e21d4 push 0x102e65a8 */
  push32((uint32_t)(0x102e65a8u));
  /* 102e21d9 call esi */
  call_ind((uint32_t)(ESI), 0x102e21dbu);
  /* 102e21db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e21de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e21e0 jne 0x102e220b */
  if (!C.zf) goto L_102e220b;
  /* 102e21e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e21e4 push 0x102e65b0 */
  push32((uint32_t)(0x102e65b0u));
  /* 102e21e9 call esi */
  call_ind((uint32_t)(ESI), 0x102e21ebu);
  /* 102e21eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e21ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e21f0 jne 0x102e220b */
  if (!C.zf) goto L_102e220b;
  /* 102e21f2 push eax */
  push32((uint32_t)(EAX));
  /* 102e21f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102e21f5 call ebx */
  call_ind((uint32_t)(EBX), 0x102e21f7u);
  /* 102e21f7 push 0x102e6154 */
  push32((uint32_t)(0x102e6154u));
  /* 102e21fc call dword ptr [0x102e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50c0))), 0x102e2202u);
  /* 102e2202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2205 call dword ptr [0x102e5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5100))), 0x102e220bu);
L_102e220b:;
  /* 102e220b pop edi */
  EDI = (pop32());
  /* 102e220c pop esi */
  ESI = (pop32());
  /* 102e220d pop ebp */
  EBP = (pop32());
  /* 102e220e pop ebx */
  EBX = (pop32());
  /* 102e220f ret  */
  ESPCHK(0x102e1420u, _esp0);
  ESP += 4; return;
}

/* FUN_10002210 @ 0x102e2210 (217 bytes, 57 insns) */
void f_102e2210(void) {
  FTRACE(0x102e2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2210 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e2214 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2217 jne 0x102e22a5 */
  if (!C.zf) goto L_102e22a5;
  /* 102e221d call dword ptr [0x102e5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5084))), 0x102e2223u);
  /* 102e2223 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2225 mov dword ptr [0x102e66bc], eax */
  w32((uint32_t)(0x102e66bc), (EAX));
  /* 102e222a call 0x102e2c44 */
  push32(0x102e222fu); f_102e2c44();
  /* 102e222f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2231 pop ecx */
  ECX = (pop32());
  /* 102e2232 je 0x102e2270 */
  if (C.zf) goto L_102e2270;
  /* 102e2234 mov eax, dword ptr [0x102e66bc] */
  EAX = (r32((uint32_t)(0x102e66bc)));
  /* 102e2239 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102e223b mov cl, byte ptr [0x102e66bd] */
  CL = (r8((uint32_t)(0x102e66bd)));
  /* 102e2241 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e2246 shr dword ptr [0x102e66bc], 0x10 */
  w32((uint32_t)(0x102e66bc), (sh_shr((uint32_t)(r32((uint32_t)(0x102e66bc))), (0x10u)&0x1f, 32)));
  /* 102e224d mov dword ptr [0x102e66c4], eax */
  w32((uint32_t)(0x102e66c4), (EAX));
  /* 102e2252 mov dword ptr [0x102e66c8], ecx */
  w32((uint32_t)(0x102e66c8), (ECX));
  /* 102e2258 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102e225b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e225d mov dword ptr [0x102e66c0], eax */
  w32((uint32_t)(0x102e66c0), (EAX));
  /* 102e2262 call 0x102e24d7 */
  push32(0x102e2267u); f_102e24d7();
  /* 102e2267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2269 jne 0x102e2274 */
  if (!C.zf) goto L_102e2274;
  /* 102e226b call 0x102e2c80 */
  push32(0x102e2270u); f_102e2c80();
L_102e2270:;
  /* 102e2270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e2272 jmp 0x102e22e6 */
  goto L_102e22e6;
L_102e2274:;
  /* 102e2274 call dword ptr [0x102e5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5080))), 0x102e227au);
  /* 102e227a mov dword ptr [0x102e6c18], eax */
  w32((uint32_t)(0x102e6c18), (EAX));
  /* 102e227f call 0x102e2b12 */
  push32(0x102e2284u); f_102e2b12();
  /* 102e2284 mov dword ptr [0x102e66a8], eax */
  w32((uint32_t)(0x102e66a8), (EAX));
  /* 102e2289 call 0x102e25fc */
  push32(0x102e228eu); f_102e25fc();
  /* 102e228e call 0x102e28c5 */
  push32(0x102e2293u); f_102e28c5();
  /* 102e2293 call 0x102e280c */
  push32(0x102e2298u); f_102e280c();
  /* 102e2298 call 0x102e23b9 */
  push32(0x102e229du); f_102e23b9();
  /* 102e229d inc dword ptr [0x102e66a4] */
  { uint32_t _r=(r32((uint32_t)(0x102e66a4)))+1; w32((uint32_t)(0x102e66a4), (_r)); fl_inc(_r,32); }
  /* 102e22a3 jmp 0x102e22e3 */
  goto L_102e22e3;
L_102e22a5:;
  /* 102e22a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102e22a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e22a9 jne 0x102e22d7 */
  if (!C.zf) goto L_102e22d7;
  /* 102e22ab cmp dword ptr [0x102e66a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102e66a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e22b1 jle 0x102e2270 */
  if ((C.zf||C.sf!=C.of)) goto L_102e2270;
  /* 102e22b3 dec dword ptr [0x102e66a4] */
  { uint32_t _r=(r32((uint32_t)(0x102e66a4)))-1; w32((uint32_t)(0x102e66a4), (_r)); fl_dec(_r,32); }
  /* 102e22b9 cmp dword ptr [0x102e66f4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102e66f4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e22bf jne 0x102e22c6 */
  if (!C.zf) goto L_102e22c6;
  /* 102e22c1 call 0x102e23f7 */
  push32(0x102e22c6u); f_102e23f7();
L_102e22c6:;
  /* 102e22c6 call 0x102e27b8 */
  push32(0x102e22cbu); f_102e27b8();
  /* 102e22cb call 0x102e252b */
  push32(0x102e22d0u); f_102e252b();
  /* 102e22d0 call 0x102e2c80 */
  push32(0x102e22d5u); f_102e2c80();
  /* 102e22d5 jmp 0x102e22e3 */
  goto L_102e22e3;
L_102e22d7:;
  /* 102e22d7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e22da jne 0x102e22e3 */
  if (!C.zf) goto L_102e22e3;
  /* 102e22dc push ecx */
  push32((uint32_t)(ECX));
  /* 102e22dd call 0x102e255c */
  push32(0x102e22e2u); f_102e255c();
  /* 102e22e2 pop ecx */
  ECX = (pop32());
L_102e22e3:;
  /* 102e22e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e22e5 pop eax */
  EAX = (pop32());
L_102e22e6:;
  /* 102e22e6 ret 0xc */
  ESPCHK(0x102e2210u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102e22e9 (157 bytes, 73 insns) */
void f_102e22e9(void) {
  FTRACE(0x102e22e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e22e9 push ebp */
  push32((uint32_t)(EBP));
  /* 102e22ea mov ebp, esp */
  EBP = (ESP);
  /* 102e22ec push ebx */
  push32((uint32_t)(EBX));
  /* 102e22ed mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e22f0 push esi */
  push32((uint32_t)(ESI));
  /* 102e22f1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102e22f4 push edi */
  push32((uint32_t)(EDI));
  /* 102e22f5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102e22f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e22fa jne 0x102e2305 */
  if (!C.zf) goto L_102e2305;
  /* 102e22fc cmp dword ptr [0x102e66a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102e66a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2303 jmp 0x102e232b */
  goto L_102e232b;
L_102e2305:;
  /* 102e2305 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2308 je 0x102e230f */
  if (C.zf) goto L_102e230f;
  /* 102e230a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e230d jne 0x102e2331 */
  if (!C.zf) goto L_102e2331;
L_102e230f:;
  /* 102e230f mov eax, dword ptr [0x102e6c1c] */
  EAX = (r32((uint32_t)(0x102e6c1c)));
  /* 102e2314 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2316 je 0x102e2321 */
  if (C.zf) goto L_102e2321;
  /* 102e2318 push edi */
  push32((uint32_t)(EDI));
  /* 102e2319 push esi */
  push32((uint32_t)(ESI));
  /* 102e231a push ebx */
  push32((uint32_t)(EBX));
  /* 102e231b call eax */
  call_ind((uint32_t)(EAX), 0x102e231du);
  /* 102e231d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e231f je 0x102e232d */
  if (C.zf) goto L_102e232d;
L_102e2321:;
  /* 102e2321 push edi */
  push32((uint32_t)(EDI));
  /* 102e2322 push esi */
  push32((uint32_t)(ESI));
  /* 102e2323 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2324 call 0x102e2210 */
  push32(0x102e2329u); f_102e2210();
  /* 102e2329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102e232b:;
  /* 102e232b jne 0x102e2331 */
  if (!C.zf) goto L_102e2331;
L_102e232d:;
  /* 102e232d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e232f jmp 0x102e237f */
  goto L_102e237f;
L_102e2331:;
  /* 102e2331 push edi */
  push32((uint32_t)(EDI));
  /* 102e2332 push esi */
  push32((uint32_t)(ESI));
  /* 102e2333 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2334 call 0x102e1000 */
  push32(0x102e2339u); f_102e1000();
  /* 102e2339 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e233c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102e233f jne 0x102e234d */
  if (!C.zf) goto L_102e234d;
  /* 102e2341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2343 jne 0x102e237c */
  if (!C.zf) goto L_102e237c;
  /* 102e2345 push edi */
  push32((uint32_t)(EDI));
  /* 102e2346 push eax */
  push32((uint32_t)(EAX));
  /* 102e2347 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2348 call 0x102e2210 */
  push32(0x102e234du); f_102e2210();
L_102e234d:;
  /* 102e234d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e234f je 0x102e2356 */
  if (C.zf) goto L_102e2356;
  /* 102e2351 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2354 jne 0x102e237c */
  if (!C.zf) goto L_102e237c;
L_102e2356:;
  /* 102e2356 push edi */
  push32((uint32_t)(EDI));
  /* 102e2357 push esi */
  push32((uint32_t)(ESI));
  /* 102e2358 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2359 call 0x102e2210 */
  push32(0x102e235eu); f_102e2210();
  /* 102e235e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2360 jne 0x102e2365 */
  if (!C.zf) goto L_102e2365;
  /* 102e2362 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_102e2365:;
  /* 102e2365 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2369 je 0x102e237c */
  if (C.zf) goto L_102e237c;
  /* 102e236b mov eax, dword ptr [0x102e6c1c] */
  EAX = (r32((uint32_t)(0x102e6c1c)));
  /* 102e2370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2372 je 0x102e237c */
  if (C.zf) goto L_102e237c;
  /* 102e2374 push edi */
  push32((uint32_t)(EDI));
  /* 102e2375 push esi */
  push32((uint32_t)(ESI));
  /* 102e2376 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2377 call eax */
  call_ind((uint32_t)(EAX), 0x102e2379u);
  /* 102e2379 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102e237c:;
  /* 102e237c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102e237f:;
  /* 102e237f pop edi */
  EDI = (pop32());
  /* 102e2380 pop esi */
  ESI = (pop32());
  /* 102e2381 pop ebx */
  EBX = (pop32());
  /* 102e2382 pop ebp */
  EBP = (pop32());
  /* 102e2383 ret 0xc */
  ESPCHK(0x102e22e9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x102e2386 (48 bytes, 15 insns) */
void f_102e2386(void) {
  FTRACE(0x102e2386u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2386 mov eax, dword ptr [0x102e66b0] */
  EAX = (r32((uint32_t)(0x102e66b0)));
  /* 102e238b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e238e je 0x102e239d */
  if (C.zf) goto L_102e239d;
  /* 102e2390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2392 jne 0x102e23a2 */
  if (!C.zf) goto L_102e23a2;
  /* 102e2394 cmp dword ptr [0x102e66b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102e66b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e239b jne 0x102e23a2 */
  if (!C.zf) goto L_102e23a2;
L_102e239d:;
  /* 102e239d call 0x102e2cf5 */
  push32(0x102e23a2u); f_102e2cf5();
L_102e23a2:;
  /* 102e23a2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102e23a6 call 0x102e2d2e */
  push32(0x102e23abu); f_102e2d2e();
  /* 102e23ab push 0xff */
  push32((uint32_t)(0xffu));
  /* 102e23b0 call dword ptr [0x102e618c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e618c))), 0x102e23b6u);
  /* 102e23b6 pop ecx */
  ECX = (pop32());
  /* 102e23b7 pop ecx */
  ECX = (pop32());
  /* 102e23b8 ret  */
  ESPCHK(0x102e2386u, _esp0);
  ESP += 4; return;
}

/* FUN_100023b9 @ 0x102e23b9 (45 bytes, 12 insns) */
void f_102e23b9(void) {
  FTRACE(0x102e23b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e23b9 mov eax, dword ptr [0x102e6c14] */
  EAX = (r32((uint32_t)(0x102e6c14)));
  /* 102e23be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e23c0 je 0x102e23c4 */
  if (C.zf) goto L_102e23c4;
  /* 102e23c2 call eax */
  call_ind((uint32_t)(EAX), 0x102e23c4u);
L_102e23c4:;
  /* 102e23c4 push 0x102e6010 */
  push32((uint32_t)(0x102e6010u));
  /* 102e23c9 push 0x102e6008 */
  push32((uint32_t)(0x102e6008u));
  /* 102e23ce call 0x102e24bd */
  push32(0x102e23d3u); f_102e24bd();
  /* 102e23d3 push 0x102e6004 */
  push32((uint32_t)(0x102e6004u));
  /* 102e23d8 push 0x102e6000 */
  push32((uint32_t)(0x102e6000u));
  /* 102e23dd call 0x102e24bd */
  push32(0x102e23e2u); f_102e24bd();
  /* 102e23e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e23e5 ret  */
  ESPCHK(0x102e23b9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x102e23e6 (17 bytes, 6 insns) */
void f_102e23e6(void) {
  FTRACE(0x102e23e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e23e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e23e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e23ea push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102e23ee call 0x102e2406 */
  push32(0x102e23f3u); f_102e2406();
  /* 102e23f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e23f6 ret  */
  ESPCHK(0x102e23e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f7 @ 0x102e23f7 (15 bytes, 6 insns) */
void f_102e23f7(void) {
  FTRACE(0x102e23f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e23f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e23f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e23fb push 0 */
  push32((uint32_t)(0x0u));
  /* 102e23fd call 0x102e2406 */
  push32(0x102e2402u); f_102e2406();
  /* 102e2402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2405 ret  */
  ESPCHK(0x102e23f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002406 @ 0x102e2406 (163 bytes, 53 insns) */
void f_102e2406(void) {
  FTRACE(0x102e2406u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2406 push edi */
  push32((uint32_t)(EDI));
  /* 102e2407 call 0x102e24ab */
  push32(0x102e240cu); f_102e24ab();
  /* 102e240c push 1 */
  push32((uint32_t)(0x1u));
  /* 102e240e pop edi */
  EDI = (pop32());
  /* 102e240f cmp dword ptr [0x102e66f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x102e66f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2415 jne 0x102e2428 */
  if (!C.zf) goto L_102e2428;
  /* 102e2417 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102e241b call dword ptr [0x102e5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5090))), 0x102e2421u);
  /* 102e2421 push eax */
  push32((uint32_t)(EAX));
  /* 102e2422 call dword ptr [0x102e508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e508c))), 0x102e2428u);
L_102e2428:;
  /* 102e2428 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e242d push ebx */
  push32((uint32_t)(EBX));
  /* 102e242e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102e2432 mov dword ptr [0x102e66f4], edi */
  w32((uint32_t)(0x102e66f4), (EDI));
  /* 102e2438 mov byte ptr [0x102e66f0], bl */
  w8((uint32_t)(0x102e66f0), (BL));
  /* 102e243e jne 0x102e247c */
  if (!C.zf) goto L_102e247c;
  /* 102e2440 mov eax, dword ptr [0x102e6c10] */
  EAX = (r32((uint32_t)(0x102e6c10)));
  /* 102e2445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2447 je 0x102e246b */
  if (C.zf) goto L_102e246b;
  /* 102e2449 mov ecx, dword ptr [0x102e6c0c] */
  ECX = (r32((uint32_t)(0x102e6c0c)));
  /* 102e244f push esi */
  push32((uint32_t)(ESI));
  /* 102e2450 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 102e2453 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2455 jb 0x102e246a */
  if (C.cf) goto L_102e246a;
L_102e2457:;
  /* 102e2457 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102e2459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e245b je 0x102e245f */
  if (C.zf) goto L_102e245f;
  /* 102e245d call eax */
  call_ind((uint32_t)(EAX), 0x102e245fu);
L_102e245f:;
  /* 102e245f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2462 cmp esi, dword ptr [0x102e6c10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102e6c10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2468 jae 0x102e2457 */
  if (!C.cf) goto L_102e2457;
L_102e246a:;
  /* 102e246a pop esi */
  ESI = (pop32());
L_102e246b:;
  /* 102e246b push 0x102e6018 */
  push32((uint32_t)(0x102e6018u));
  /* 102e2470 push 0x102e6014 */
  push32((uint32_t)(0x102e6014u));
  /* 102e2475 call 0x102e24bd */
  push32(0x102e247au); f_102e24bd();
  /* 102e247a pop ecx */
  ECX = (pop32());
  /* 102e247b pop ecx */
  ECX = (pop32());
L_102e247c:;
  /* 102e247c push 0x102e6020 */
  push32((uint32_t)(0x102e6020u));
  /* 102e2481 push 0x102e601c */
  push32((uint32_t)(0x102e601cu));
  /* 102e2486 call 0x102e24bd */
  push32(0x102e248bu); f_102e24bd();
  /* 102e248b pop ecx */
  ECX = (pop32());
  /* 102e248c pop ecx */
  ECX = (pop32());
  /* 102e248d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102e248f pop ebx */
  EBX = (pop32());
  /* 102e2490 je 0x102e2499 */
  if (C.zf) goto L_102e2499;
  /* 102e2492 call 0x102e24b4 */
  push32(0x102e2497u); f_102e24b4();
  /* 102e2497 pop edi */
  EDI = (pop32());
  /* 102e2498 ret  */
  ESPCHK(0x102e2406u, _esp0);
  ESP += 4; return;
L_102e2499:;
  /* 102e2499 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102e249d mov dword ptr [0x102e66f8], edi */
  w32((uint32_t)(0x102e66f8), (EDI));
  /* 102e24a3 call dword ptr [0x102e5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5088))), 0x102e24a9u);
  /* 102e24a9 pop edi */
  EDI = (pop32());
  /* 102e24aa ret  */
  ESPCHK(0x102e2406u, _esp0);
  ESP += 4; return;
}

/* FUN_100024ab @ 0x102e24ab (9 bytes, 4 insns) */
void f_102e24ab(void) {
  FTRACE(0x102e24abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e24ab push 0xd */
  push32((uint32_t)(0xdu));
  /* 102e24ad call 0x102e2f16 */
  push32(0x102e24b2u); f_102e2f16();
  /* 102e24b2 pop ecx */
  ECX = (pop32());
  /* 102e24b3 ret  */
  ESPCHK(0x102e24abu, _esp0);
  ESP += 4; return;
}

/* FUN_100024b4 @ 0x102e24b4 (9 bytes, 4 insns) */
void f_102e24b4(void) {
  FTRACE(0x102e24b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e24b4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102e24b6 call 0x102e2f77 */
  push32(0x102e24bbu); f_102e2f77();
  /* 102e24bb pop ecx */
  ECX = (pop32());
  /* 102e24bc ret  */
  ESPCHK(0x102e24b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100024bd @ 0x102e24bd (26 bytes, 12 insns) */
void f_102e24bd(void) {
  FTRACE(0x102e24bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e24bd push esi */
  push32((uint32_t)(ESI));
  /* 102e24be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_102e24c2:;
  /* 102e24c2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e24c6 jae 0x102e24d5 */
  if (!C.cf) goto L_102e24d5;
  /* 102e24c8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102e24ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e24cc je 0x102e24d0 */
  if (C.zf) goto L_102e24d0;
  /* 102e24ce call eax */
  call_ind((uint32_t)(EAX), 0x102e24d0u);
L_102e24d0:;
  /* 102e24d0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e24d3 jmp 0x102e24c2 */
  goto L_102e24c2;
L_102e24d5:;
  /* 102e24d5 pop esi */
  ESI = (pop32());
  /* 102e24d6 ret  */
  ESPCHK(0x102e24bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100024d7 @ 0x102e24d7 (84 bytes, 32 insns) */
void f_102e24d7(void) {
  FTRACE(0x102e24d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e24d7 push esi */
  push32((uint32_t)(ESI));
  /* 102e24d8 call 0x102e2e81 */
  push32(0x102e24ddu); f_102e2e81();
  /* 102e24dd call dword ptr [0x102e5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5000))), 0x102e24e3u);
  /* 102e24e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e24e6 mov dword ptr [0x102e6190], eax */
  w32((uint32_t)(0x102e6190), (EAX));
  /* 102e24eb je 0x102e2527 */
  if (C.zf) goto L_102e2527;
  /* 102e24ed push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102e24ef push 1 */
  push32((uint32_t)(0x1u));
  /* 102e24f1 call 0x102e2f8c */
  push32(0x102e24f6u); f_102e2f8c();
  /* 102e24f6 mov esi, eax */
  ESI = (EAX);
  /* 102e24f8 pop ecx */
  ECX = (pop32());
  /* 102e24f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e24fb pop ecx */
  ECX = (pop32());
  /* 102e24fc je 0x102e2527 */
  if (C.zf) goto L_102e2527;
  /* 102e24fe push esi */
  push32((uint32_t)(ESI));
  /* 102e24ff push dword ptr [0x102e6190] */
  push32((uint32_t)(r32((uint32_t)(0x102e6190))));
  /* 102e2505 call dword ptr [0x102e5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5004))), 0x102e250bu);
  /* 102e250b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e250d je 0x102e2527 */
  if (C.zf) goto L_102e2527;
  /* 102e250f push esi */
  push32((uint32_t)(ESI));
  /* 102e2510 call 0x102e2549 */
  push32(0x102e2515u); f_102e2549();
  /* 102e2515 pop ecx */
  ECX = (pop32());
  /* 102e2516 call dword ptr [0x102e5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5094))), 0x102e251cu);
  /* 102e251c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102e2520 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2522 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102e2524 pop eax */
  EAX = (pop32());
  /* 102e2525 pop esi */
  ESI = (pop32());
  /* 102e2526 ret  */
  ESPCHK(0x102e24d7u, _esp0);
  ESP += 4; return;
L_102e2527:;
  /* 102e2527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e2529 pop esi */
  ESI = (pop32());
  /* 102e252a ret  */
  ESPCHK(0x102e24d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000252b @ 0x102e252b (30 bytes, 8 insns) */
void f_102e252b(void) {
  FTRACE(0x102e252bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e252b call 0x102e2eaa */
  push32(0x102e2530u); f_102e2eaa();
  /* 102e2530 mov eax, dword ptr [0x102e6190] */
  EAX = (r32((uint32_t)(0x102e6190)));
  /* 102e2535 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2538 je 0x102e2548 */
  if (C.zf) goto L_102e2548;
  /* 102e253a push eax */
  push32((uint32_t)(EAX));
  /* 102e253b call dword ptr [0x102e50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50a0))), 0x102e2541u);
  /* 102e2541 or dword ptr [0x102e6190], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x102e6190)))|(0xffffffffu); w32((uint32_t)(0x102e6190), (_r)); fl_logic(_r,32); }
L_102e2548:;
  /* 102e2548 ret  */
  ESPCHK(0x102e252bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002549 @ 0x102e2549 (19 bytes, 4 insns) */
void f_102e2549(void) {
  FTRACE(0x102e2549u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2549 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e254d mov dword ptr [eax + 0x50], 0x102e6310 */
  w32((uint32_t)(EAX + 0x50), (0x102e6310u));
  /* 102e2554 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 102e255b ret  */
  ESPCHK(0x102e2549u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255c @ 0x102e255c (160 bytes, 62 insns) */
void f_102e255c(void) {
  FTRACE(0x102e255cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e255c mov eax, dword ptr [0x102e6190] */
  EAX = (r32((uint32_t)(0x102e6190)));
  /* 102e2561 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2564 je 0x102e25fb */
  if (C.zf) goto L_102e25fb;
  /* 102e256a push esi */
  push32((uint32_t)(ESI));
  /* 102e256b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102e256f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2571 jne 0x102e2580 */
  if (!C.zf) goto L_102e2580;
  /* 102e2573 push eax */
  push32((uint32_t)(EAX));
  /* 102e2574 call dword ptr [0x102e50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50a4))), 0x102e257au);
  /* 102e257a mov esi, eax */
  ESI = (EAX);
  /* 102e257c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e257e je 0x102e25ec */
  if (C.zf) goto L_102e25ec;
L_102e2580:;
  /* 102e2580 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 102e2583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2585 je 0x102e258e */
  if (C.zf) goto L_102e258e;
  /* 102e2587 push eax */
  push32((uint32_t)(EAX));
  /* 102e2588 call 0x102e3019 */
  push32(0x102e258du); f_102e3019();
  /* 102e258d pop ecx */
  ECX = (pop32());
L_102e258e:;
  /* 102e258e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 102e2591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2593 je 0x102e259c */
  if (C.zf) goto L_102e259c;
  /* 102e2595 push eax */
  push32((uint32_t)(EAX));
  /* 102e2596 call 0x102e3019 */
  push32(0x102e259bu); f_102e3019();
  /* 102e259b pop ecx */
  ECX = (pop32());
L_102e259c:;
  /* 102e259c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 102e259f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e25a1 je 0x102e25aa */
  if (C.zf) goto L_102e25aa;
  /* 102e25a3 push eax */
  push32((uint32_t)(EAX));
  /* 102e25a4 call 0x102e3019 */
  push32(0x102e25a9u); f_102e3019();
  /* 102e25a9 pop ecx */
  ECX = (pop32());
L_102e25aa:;
  /* 102e25aa mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 102e25ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e25af je 0x102e25b8 */
  if (C.zf) goto L_102e25b8;
  /* 102e25b1 push eax */
  push32((uint32_t)(EAX));
  /* 102e25b2 call 0x102e3019 */
  push32(0x102e25b7u); f_102e3019();
  /* 102e25b7 pop ecx */
  ECX = (pop32());
L_102e25b8:;
  /* 102e25b8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 102e25bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e25bd je 0x102e25c6 */
  if (C.zf) goto L_102e25c6;
  /* 102e25bf push eax */
  push32((uint32_t)(EAX));
  /* 102e25c0 call 0x102e3019 */
  push32(0x102e25c5u); f_102e3019();
  /* 102e25c5 pop ecx */
  ECX = (pop32());
L_102e25c6:;
  /* 102e25c6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 102e25c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e25cb je 0x102e25d4 */
  if (C.zf) goto L_102e25d4;
  /* 102e25cd push eax */
  push32((uint32_t)(EAX));
  /* 102e25ce call 0x102e3019 */
  push32(0x102e25d3u); f_102e3019();
  /* 102e25d3 pop ecx */
  ECX = (pop32());
L_102e25d4:;
  /* 102e25d4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 102e25d7 cmp eax, 0x102e6310 */
  { uint32_t _a=(EAX),_b=(0x102e6310u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e25dc je 0x102e25e5 */
  if (C.zf) goto L_102e25e5;
  /* 102e25de push eax */
  push32((uint32_t)(EAX));
  /* 102e25df call 0x102e3019 */
  push32(0x102e25e4u); f_102e3019();
  /* 102e25e4 pop ecx */
  ECX = (pop32());
L_102e25e5:;
  /* 102e25e5 push esi */
  push32((uint32_t)(ESI));
  /* 102e25e6 call 0x102e3019 */
  push32(0x102e25ebu); f_102e3019();
  /* 102e25eb pop ecx */
  ECX = (pop32());
L_102e25ec:;
  /* 102e25ec push 0 */
  push32((uint32_t)(0x0u));
  /* 102e25ee push dword ptr [0x102e6190] */
  push32((uint32_t)(r32((uint32_t)(0x102e6190))));
  /* 102e25f4 call dword ptr [0x102e5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5004))), 0x102e25fau);
  /* 102e25fa pop esi */
  ESI = (pop32());
L_102e25fb:;
  /* 102e25fb ret  */
  ESPCHK(0x102e255cu, _esp0);
  ESP += 4; return;
}

/* FUN_100025fc @ 0x102e25fc (444 bytes, 150 insns) */
void f_102e25fc(void) {
  FTRACE(0x102e25fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e25fc push ebp */
  push32((uint32_t)(EBP));
  /* 102e25fd mov ebp, esp */
  EBP = (ESP);
  /* 102e25ff sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2602 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2603 push esi */
  push32((uint32_t)(ESI));
  /* 102e2604 push edi */
  push32((uint32_t)(EDI));
  /* 102e2605 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102e260a call 0x102e3061 */
  push32(0x102e260fu); f_102e3061();
  /* 102e260f mov esi, eax */
  ESI = (EAX);
  /* 102e2611 pop ecx */
  ECX = (pop32());
  /* 102e2612 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2614 jne 0x102e261e */
  if (!C.zf) goto L_102e261e;
  /* 102e2616 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102e2618 call 0x102e2386 */
  push32(0x102e261du); f_102e2386();
  /* 102e261d pop ecx */
  ECX = (pop32());
L_102e261e:;
  /* 102e261e mov dword ptr [0x102e6b00], esi */
  w32((uint32_t)(0x102e6b00), (ESI));
  /* 102e2624 mov dword ptr [0x102e6c00], 0x20 */
  w32((uint32_t)(0x102e6c00), (0x20u));
  /* 102e262e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102e2634:;
  /* 102e2634 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2636 jae 0x102e2656 */
  if (!C.cf) goto L_102e2656;
  /* 102e2638 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102e263c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102e263f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102e2643 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102e2647 mov eax, dword ptr [0x102e6b00] */
  EAX = (r32((uint32_t)(0x102e6b00)));
  /* 102e264c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e264f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2654 jmp 0x102e2634 */
  goto L_102e2634;
L_102e2656:;
  /* 102e2656 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102e2659 push eax */
  push32((uint32_t)(EAX));
  /* 102e265a call dword ptr [0x102e507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e507c))), 0x102e2660u);
  /* 102e2660 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102e2665 je 0x102e273c */
  if (C.zf) goto L_102e273c;
  /* 102e266b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102e266e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2670 je 0x102e273c */
  if (C.zf) goto L_102e273c;
  /* 102e2676 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 102e2678 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 102e267b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 102e267e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102e2681 mov eax, 0x800 */
  EAX = (0x800u);
  /* 102e2686 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2688 jl 0x102e268c */
  if ((C.sf!=C.of)) goto L_102e268c;
  /* 102e268a mov edi, eax */
  EDI = (EAX);
L_102e268c:;
  /* 102e268c cmp dword ptr [0x102e6c00], edi */
  { uint32_t _a=(r32((uint32_t)(0x102e6c00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2692 jge 0x102e26ea */
  if ((C.sf==C.of)) goto L_102e26ea;
  /* 102e2694 mov esi, 0x102e6b04 */
  ESI = (0x102e6b04u);
L_102e2699:;
  /* 102e2699 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102e269e call 0x102e3061 */
  push32(0x102e26a3u); f_102e3061();
  /* 102e26a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e26a5 pop ecx */
  ECX = (pop32());
  /* 102e26a6 je 0x102e26e4 */
  if (C.zf) goto L_102e26e4;
  /* 102e26a8 add dword ptr [0x102e6c00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x102e6c00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x102e6c00), (_r)); fl_add(_a,_b,_r,32); }
  /* 102e26af mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102e26b1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_102e26b7:;
  /* 102e26b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e26b9 jae 0x102e26d7 */
  if (!C.cf) goto L_102e26d7;
  /* 102e26bb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 102e26bf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102e26c2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102e26c6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 102e26ca mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102e26cc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e26cf add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e26d5 jmp 0x102e26b7 */
  goto L_102e26b7;
L_102e26d7:;
  /* 102e26d7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e26da cmp dword ptr [0x102e6c00], edi */
  { uint32_t _a=(r32((uint32_t)(0x102e6c00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e26e0 jl 0x102e2699 */
  if ((C.sf!=C.of)) goto L_102e2699;
  /* 102e26e2 jmp 0x102e26ea */
  goto L_102e26ea;
L_102e26e4:;
  /* 102e26e4 mov edi, dword ptr [0x102e6c00] */
  EDI = (r32((uint32_t)(0x102e6c00)));
L_102e26ea:;
  /* 102e26ea xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102e26ec test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e26ee jle 0x102e273c */
  if ((C.zf||C.sf!=C.of)) goto L_102e273c;
L_102e26f0:;
  /* 102e26f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e26f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102e26f5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e26f8 je 0x102e2732 */
  if (C.zf) goto L_102e2732;
  /* 102e26fa mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102e26fc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102e26fe je 0x102e2732 */
  if (C.zf) goto L_102e2732;
  /* 102e2700 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102e2702 jne 0x102e270f */
  if (!C.zf) goto L_102e270f;
  /* 102e2704 push ecx */
  push32((uint32_t)(ECX));
  /* 102e2705 call dword ptr [0x102e509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e509c))), 0x102e270bu);
  /* 102e270b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e270d je 0x102e2732 */
  if (C.zf) goto L_102e2732;
L_102e270f:;
  /* 102e270f mov ecx, esi */
  ECX = (ESI);
  /* 102e2711 mov eax, esi */
  EAX = (ESI);
  /* 102e2713 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102e2716 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102e2719 mov ecx, dword ptr [ecx*4 + 0x102e6b00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x102e6b00)));
  /* 102e2720 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102e2723 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102e2726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e2729 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 102e272b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102e272d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 102e272f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_102e2732:;
  /* 102e2732 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102e2736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e2737 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102e2738 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e273a jl 0x102e26f0 */
  if ((C.sf!=C.of)) goto L_102e26f0;
L_102e273c:;
  /* 102e273c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102e273e:;
  /* 102e273e mov ecx, dword ptr [0x102e6b00] */
  ECX = (r32((uint32_t)(0x102e6b00)));
  /* 102e2744 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102e2747 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e274b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102e274e jne 0x102e279d */
  if (!C.zf) goto L_102e279d;
  /* 102e2750 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102e2752 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102e2756 jne 0x102e275d */
  if (!C.zf) goto L_102e275d;
  /* 102e2758 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102e275a pop eax */
  EAX = (pop32());
  /* 102e275b jmp 0x102e2767 */
  goto L_102e2767;
L_102e275d:;
  /* 102e275d mov eax, ebx */
  EAX = (EBX);
  /* 102e275f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102e2760 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102e2762 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2764 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102e2767:;
  /* 102e2767 push eax */
  push32((uint32_t)(EAX));
  /* 102e2768 call dword ptr [0x102e5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5098))), 0x102e276eu);
  /* 102e276e mov edi, eax */
  EDI = (EAX);
  /* 102e2770 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2773 je 0x102e278c */
  if (C.zf) goto L_102e278c;
  /* 102e2775 push edi */
  push32((uint32_t)(EDI));
  /* 102e2776 call dword ptr [0x102e509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e509c))), 0x102e277cu);
  /* 102e277c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e277e je 0x102e278c */
  if (C.zf) goto L_102e278c;
  /* 102e2780 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e2785 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102e2787 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e278a jne 0x102e2792 */
  if (!C.zf) goto L_102e2792;
L_102e278c:;
  /* 102e278c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102e2790 jmp 0x102e27a1 */
  goto L_102e27a1;
L_102e2792:;
  /* 102e2792 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2795 jne 0x102e27a1 */
  if (!C.zf) goto L_102e27a1;
  /* 102e2797 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102e279b jmp 0x102e27a1 */
  goto L_102e27a1;
L_102e279d:;
  /* 102e279d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102e27a1:;
  /* 102e27a1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102e27a2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e27a5 jl 0x102e273e */
  if ((C.sf!=C.of)) goto L_102e273e;
  /* 102e27a7 push dword ptr [0x102e6c00] */
  push32((uint32_t)(r32((uint32_t)(0x102e6c00))));
  /* 102e27ad call dword ptr [0x102e50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e50a8))), 0x102e27b3u);
  /* 102e27b3 pop edi */
  EDI = (pop32());
  /* 102e27b4 pop esi */
  ESI = (pop32());
  /* 102e27b5 pop ebx */
  EBX = (pop32());
  /* 102e27b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e27b7 ret  */
  ESPCHK(0x102e25fcu, _esp0);
  ESP += 4; return;
}

/* FUN_100027b8 @ 0x102e27b8 (84 bytes, 33 insns) */
void f_102e27b8(void) {
  FTRACE(0x102e27b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e27b8 push ebx */
  push32((uint32_t)(EBX));
  /* 102e27b9 push esi */
  push32((uint32_t)(ESI));
  /* 102e27ba push edi */
  push32((uint32_t)(EDI));
  /* 102e27bb mov esi, 0x102e6b00 */
  ESI = (0x102e6b00u);
L_102e27c0:;
  /* 102e27c0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102e27c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e27c4 je 0x102e27fd */
  if (C.zf) goto L_102e27fd;
  /* 102e27c6 mov edi, eax */
  EDI = (EAX);
  /* 102e27c8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e27cd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e27cf jae 0x102e27f2 */
  if (!C.cf) goto L_102e27f2;
  /* 102e27d1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_102e27d4:;
  /* 102e27d4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e27d8 je 0x102e27e1 */
  if (C.zf) goto L_102e27e1;
  /* 102e27da push ebx */
  push32((uint32_t)(EBX));
  /* 102e27db call dword ptr [0x102e5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5078))), 0x102e27e1u);
L_102e27e1:;
  /* 102e27e1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102e27e3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e27e6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e27eb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e27ee cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e27f0 jb 0x102e27d4 */
  if (C.cf) goto L_102e27d4;
L_102e27f2:;
  /* 102e27f2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e27f4 call 0x102e3019 */
  push32(0x102e27f9u); f_102e3019();
  /* 102e27f9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102e27fc pop ecx */
  ECX = (pop32());
L_102e27fd:;
  /* 102e27fd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2800 cmp esi, 0x102e6c00 */
  { uint32_t _a=(ESI),_b=(0x102e6c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2806 jl 0x102e27c0 */
  if ((C.sf!=C.of)) goto L_102e27c0;
  /* 102e2808 pop edi */
  EDI = (pop32());
  /* 102e2809 pop esi */
  ESI = (pop32());
  /* 102e280a pop ebx */
  EBX = (pop32());
  /* 102e280b ret  */
  ESPCHK(0x102e27b8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000280c @ 0x102e280c (185 bytes, 71 insns) */
void f_102e280c(void) {
  FTRACE(0x102e280cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e280c push ebx */
  push32((uint32_t)(EBX));
  /* 102e280d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e280f cmp dword ptr [0x102e6c08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102e6c08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2815 push esi */
  push32((uint32_t)(ESI));
  /* 102e2816 push edi */
  push32((uint32_t)(EDI));
  /* 102e2817 jne 0x102e281e */
  if (!C.zf) goto L_102e281e;
  /* 102e2819 call 0x102e3633 */
  push32(0x102e281eu); f_102e3633();
L_102e281e:;
  /* 102e281e mov esi, dword ptr [0x102e66a8] */
  ESI = (r32((uint32_t)(0x102e66a8)));
  /* 102e2824 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_102e2826:;
  /* 102e2826 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e2828 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e282a je 0x102e283e */
  if (C.zf) goto L_102e283e;
  /* 102e282c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e282e je 0x102e2831 */
  if (C.zf) goto L_102e2831;
  /* 102e2830 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102e2831:;
  /* 102e2831 push esi */
  push32((uint32_t)(ESI));
  /* 102e2832 call 0x102e31e0 */
  push32(0x102e2837u); f_102e31e0();
  /* 102e2837 pop ecx */
  ECX = (pop32());
  /* 102e2838 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 102e283c jmp 0x102e2826 */
  goto L_102e2826;
L_102e283e:;
  /* 102e283e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102e2845 push eax */
  push32((uint32_t)(EAX));
  /* 102e2846 call 0x102e3061 */
  push32(0x102e284bu); f_102e3061();
  /* 102e284b mov esi, eax */
  ESI = (EAX);
  /* 102e284d pop ecx */
  ECX = (pop32());
  /* 102e284e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2850 mov dword ptr [0x102e66d8], esi */
  w32((uint32_t)(0x102e66d8), (ESI));
  /* 102e2856 jne 0x102e2860 */
  if (!C.zf) goto L_102e2860;
  /* 102e2858 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e285a call 0x102e2386 */
  push32(0x102e285fu); f_102e2386();
  /* 102e285f pop ecx */
  ECX = (pop32());
L_102e2860:;
  /* 102e2860 mov edi, dword ptr [0x102e66a8] */
  EDI = (r32((uint32_t)(0x102e66a8)));
  /* 102e2866 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2868 je 0x102e28a3 */
  if (C.zf) goto L_102e28a3;
  /* 102e286a push ebp */
  push32((uint32_t)(EBP));
L_102e286b:;
  /* 102e286b push edi */
  push32((uint32_t)(EDI));
  /* 102e286c call 0x102e31e0 */
  push32(0x102e2871u); f_102e31e0();
  /* 102e2871 mov ebp, eax */
  EBP = (EAX);
  /* 102e2873 pop ecx */
  ECX = (pop32());
  /* 102e2874 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102e2875 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2878 je 0x102e289c */
  if (C.zf) goto L_102e289c;
  /* 102e287a push ebp */
  push32((uint32_t)(EBP));
  /* 102e287b call 0x102e3061 */
  push32(0x102e2880u); f_102e3061();
  /* 102e2880 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2882 pop ecx */
  ECX = (pop32());
  /* 102e2883 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102e2885 jne 0x102e288f */
  if (!C.zf) goto L_102e288f;
  /* 102e2887 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e2889 call 0x102e2386 */
  push32(0x102e288eu); f_102e2386();
  /* 102e288e pop ecx */
  ECX = (pop32());
L_102e288f:;
  /* 102e288f push edi */
  push32((uint32_t)(EDI));
  /* 102e2890 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2892 call 0x102e30f0 */
  push32(0x102e2897u); f_102e30f0();
  /* 102e2897 pop ecx */
  ECX = (pop32());
  /* 102e2898 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e289b pop ecx */
  ECX = (pop32());
L_102e289c:;
  /* 102e289c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e289e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e28a0 jne 0x102e286b */
  if (!C.zf) goto L_102e286b;
  /* 102e28a2 pop ebp */
  EBP = (pop32());
L_102e28a3:;
  /* 102e28a3 push dword ptr [0x102e66a8] */
  push32((uint32_t)(r32((uint32_t)(0x102e66a8))));
  /* 102e28a9 call 0x102e3019 */
  push32(0x102e28aeu); f_102e3019();
  /* 102e28ae pop ecx */
  ECX = (pop32());
  /* 102e28af mov dword ptr [0x102e66a8], ebx */
  w32((uint32_t)(0x102e66a8), (EBX));
  /* 102e28b5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 102e28b7 pop edi */
  EDI = (pop32());
  /* 102e28b8 pop esi */
  ESI = (pop32());
  /* 102e28b9 mov dword ptr [0x102e6c04], 1 */
  w32((uint32_t)(0x102e6c04), (0x1u));
  /* 102e28c3 pop ebx */
  EBX = (pop32());
  /* 102e28c4 ret  */
  ESPCHK(0x102e280cu, _esp0);
  ESP += 4; return;
}

/* FUN_100028c5 @ 0x102e28c5 (153 bytes, 62 insns) */
void f_102e28c5(void) {
  FTRACE(0x102e28c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e28c5 push ebp */
  push32((uint32_t)(EBP));
  /* 102e28c6 mov ebp, esp */
  EBP = (ESP);
  /* 102e28c8 push ecx */
  push32((uint32_t)(ECX));
  /* 102e28c9 push ecx */
  push32((uint32_t)(ECX));
  /* 102e28ca push ebx */
  push32((uint32_t)(EBX));
  /* 102e28cb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e28cd cmp dword ptr [0x102e6c08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102e6c08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e28d3 push esi */
  push32((uint32_t)(ESI));
  /* 102e28d4 push edi */
  push32((uint32_t)(EDI));
  /* 102e28d5 jne 0x102e28dc */
  if (!C.zf) goto L_102e28dc;
  /* 102e28d7 call 0x102e3633 */
  push32(0x102e28dcu); f_102e3633();
L_102e28dc:;
  /* 102e28dc mov esi, 0x102e66fc */
  ESI = (0x102e66fcu);
  /* 102e28e1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102e28e6 push esi */
  push32((uint32_t)(ESI));
  /* 102e28e7 push ebx */
  push32((uint32_t)(EBX));
  /* 102e28e8 call dword ptr [0x102e5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5074))), 0x102e28eeu);
  /* 102e28ee mov eax, dword ptr [0x102e6c18] */
  EAX = (r32((uint32_t)(0x102e6c18)));
  /* 102e28f3 mov dword ptr [0x102e66e8], esi */
  w32((uint32_t)(0x102e66e8), (ESI));
  /* 102e28f9 mov edi, esi */
  EDI = (ESI);
  /* 102e28fb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e28fd je 0x102e2901 */
  if (C.zf) goto L_102e2901;
  /* 102e28ff mov edi, eax */
  EDI = (EAX);
L_102e2901:;
  /* 102e2901 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102e2904 push eax */
  push32((uint32_t)(EAX));
  /* 102e2905 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102e2908 push eax */
  push32((uint32_t)(EAX));
  /* 102e2909 push ebx */
  push32((uint32_t)(EBX));
  /* 102e290a push ebx */
  push32((uint32_t)(EBX));
  /* 102e290b push edi */
  push32((uint32_t)(EDI));
  /* 102e290c call 0x102e295e */
  push32(0x102e2911u); f_102e295e();
  /* 102e2911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102e2914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e2917 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102e291a push eax */
  push32((uint32_t)(EAX));
  /* 102e291b call 0x102e3061 */
  push32(0x102e2920u); f_102e3061();
  /* 102e2920 mov esi, eax */
  ESI = (EAX);
  /* 102e2922 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2925 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2927 jne 0x102e2931 */
  if (!C.zf) goto L_102e2931;
  /* 102e2929 push 8 */
  push32((uint32_t)(0x8u));
  /* 102e292b call 0x102e2386 */
  push32(0x102e2930u); f_102e2386();
  /* 102e2930 pop ecx */
  ECX = (pop32());
L_102e2931:;
  /* 102e2931 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102e2934 push eax */
  push32((uint32_t)(EAX));
  /* 102e2935 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102e2938 push eax */
  push32((uint32_t)(EAX));
  /* 102e2939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e293c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 102e293f push eax */
  push32((uint32_t)(EAX));
  /* 102e2940 push esi */
  push32((uint32_t)(ESI));
  /* 102e2941 push edi */
  push32((uint32_t)(EDI));
  /* 102e2942 call 0x102e295e */
  push32(0x102e2947u); f_102e295e();
  /* 102e2947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e294a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e294d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102e294e mov dword ptr [0x102e66d0], esi */
  w32((uint32_t)(0x102e66d0), (ESI));
  /* 102e2954 pop edi */
  EDI = (pop32());
  /* 102e2955 pop esi */
  ESI = (pop32());
  /* 102e2956 mov dword ptr [0x102e66cc], eax */
  w32((uint32_t)(0x102e66cc), (EAX));
  /* 102e295b pop ebx */
  EBX = (pop32());
  /* 102e295c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e295d ret  */
  ESPCHK(0x102e28c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000295e @ 0x102e295e (436 bytes, 187 insns) */
void f_102e295e(void) {
  FTRACE(0x102e295eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e295e push ebp */
  push32((uint32_t)(EBP));
  /* 102e295f mov ebp, esp */
  EBP = (ESP);
  /* 102e2961 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102e2964 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102e2967 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2968 push esi */
  push32((uint32_t)(ESI));
  /* 102e2969 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102e296c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102e296f push edi */
  push32((uint32_t)(EDI));
  /* 102e2970 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102e2973 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102e2979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e297c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e297e je 0x102e2988 */
  if (C.zf) goto L_102e2988;
  /* 102e2980 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102e2982 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2985 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102e2988:;
  /* 102e2988 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e298b jne 0x102e29d1 */
  if (!C.zf) goto L_102e29d1;
L_102e298d:;
  /* 102e298d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102e2990 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2991 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2994 je 0x102e29bf */
  if (C.zf) goto L_102e29bf;
  /* 102e2996 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e2998 je 0x102e29bf */
  if (C.zf) goto L_102e29bf;
  /* 102e299a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102e299d test byte ptr [edx + 0x102e69e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102e69e1)))&(0x4u); fl_logic(_r,8); }
  /* 102e29a4 je 0x102e29b2 */
  if (C.zf) goto L_102e29b2;
  /* 102e29a6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e29a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e29aa je 0x102e29b2 */
  if (C.zf) goto L_102e29b2;
  /* 102e29ac mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e29ae mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102e29b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e29b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102e29b2:;
  /* 102e29b2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e29b4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e29b6 je 0x102e298d */
  if (C.zf) goto L_102e298d;
  /* 102e29b8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e29ba mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102e29bc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e29bd jmp 0x102e298d */
  goto L_102e298d;
L_102e29bf:;
  /* 102e29bf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e29c1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e29c3 je 0x102e29c9 */
  if (C.zf) goto L_102e29c9;
  /* 102e29c5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102e29c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102e29c9:;
  /* 102e29c9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e29cc jne 0x102e2a14 */
  if (!C.zf) goto L_102e2a14;
  /* 102e29ce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e29cf jmp 0x102e2a14 */
  goto L_102e2a14;
L_102e29d1:;
  /* 102e29d1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e29d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e29d5 je 0x102e29dc */
  if (C.zf) goto L_102e29dc;
  /* 102e29d7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e29d9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102e29db inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102e29dc:;
  /* 102e29dc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e29de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e29df movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102e29e2 test byte ptr [ebx + 0x102e69e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102e69e1)))&(0x4u); fl_logic(_r,8); }
  /* 102e29e9 je 0x102e29f7 */
  if (C.zf) goto L_102e29f7;
  /* 102e29eb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e29ed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e29ef je 0x102e29f6 */
  if (C.zf) goto L_102e29f6;
  /* 102e29f1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 102e29f3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 102e29f5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102e29f6:;
  /* 102e29f6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102e29f7:;
  /* 102e29f7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e29fa je 0x102e2a05 */
  if (C.zf) goto L_102e2a05;
  /* 102e29fc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e29fe je 0x102e2a09 */
  if (C.zf) goto L_102e2a09;
  /* 102e2a00 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a03 jne 0x102e29d1 */
  if (!C.zf) goto L_102e29d1;
L_102e2a05:;
  /* 102e2a05 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e2a07 jne 0x102e2a0c */
  if (!C.zf) goto L_102e2a0c;
L_102e2a09:;
  /* 102e2a09 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102e2a0a jmp 0x102e2a14 */
  goto L_102e2a14;
L_102e2a0c:;
  /* 102e2a0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2a0e je 0x102e2a14 */
  if (C.zf) goto L_102e2a14;
  /* 102e2a10 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_102e2a14:;
  /* 102e2a14 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_102e2a18:;
  /* 102e2a18 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a1b je 0x102e2b01 */
  if (C.zf) goto L_102e2b01;
L_102e2a21:;
  /* 102e2a21 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e2a23 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a26 je 0x102e2a2d */
  if (C.zf) goto L_102e2a2d;
  /* 102e2a28 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a2b jne 0x102e2a30 */
  if (!C.zf) goto L_102e2a30;
L_102e2a2d:;
  /* 102e2a2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2a2e jmp 0x102e2a21 */
  goto L_102e2a21;
L_102e2a30:;
  /* 102e2a30 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a33 je 0x102e2b01 */
  if (C.zf) goto L_102e2b01;
  /* 102e2a39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e2a3b je 0x102e2a45 */
  if (C.zf) goto L_102e2a45;
  /* 102e2a3d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102e2a3f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2a42 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102e2a45:;
  /* 102e2a45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102e2a48 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_102e2a4a:;
  /* 102e2a4a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102e2a51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102e2a53:;
  /* 102e2a53 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a56 jne 0x102e2a5c */
  if (!C.zf) goto L_102e2a5c;
  /* 102e2a58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2a59 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102e2a5a jmp 0x102e2a53 */
  goto L_102e2a53;
L_102e2a5c:;
  /* 102e2a5c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a5f jne 0x102e2a8d */
  if (!C.zf) goto L_102e2a8d;
  /* 102e2a61 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102e2a64 jne 0x102e2a8b */
  if (!C.zf) goto L_102e2a8b;
  /* 102e2a66 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e2a68 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2a6b je 0x102e2a7a */
  if (C.zf) goto L_102e2a7a;
  /* 102e2a6d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2a71 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102e2a74 jne 0x102e2a7a */
  if (!C.zf) goto L_102e2a7a;
  /* 102e2a76 mov eax, edx */
  EAX = (EDX);
  /* 102e2a78 jmp 0x102e2a7d */
  goto L_102e2a7d;
L_102e2a7a:;
  /* 102e2a7a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102e2a7d:;
  /* 102e2a7d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102e2a80 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102e2a82 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2a85 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102e2a88 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102e2a8b:;
  /* 102e2a8b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102e2a8d:;
  /* 102e2a8d mov edx, ebx */
  EDX = (EBX);
  /* 102e2a8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102e2a90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102e2a92 je 0x102e2aa2 */
  if (C.zf) goto L_102e2aa2;
  /* 102e2a94 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102e2a95:;
  /* 102e2a95 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2a97 je 0x102e2a9d */
  if (C.zf) goto L_102e2a9d;
  /* 102e2a99 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102e2a9c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102e2a9d:;
  /* 102e2a9d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e2a9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102e2aa0 jne 0x102e2a95 */
  if (!C.zf) goto L_102e2a95;
L_102e2aa2:;
  /* 102e2aa2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e2aa4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e2aa6 je 0x102e2af2 */
  if (C.zf) goto L_102e2af2;
  /* 102e2aa8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2aac jne 0x102e2ab8 */
  if (!C.zf) goto L_102e2ab8;
  /* 102e2aae cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2ab1 je 0x102e2af2 */
  if (C.zf) goto L_102e2af2;
  /* 102e2ab3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2ab6 je 0x102e2af2 */
  if (C.zf) goto L_102e2af2;
L_102e2ab8:;
  /* 102e2ab8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2abc je 0x102e2aec */
  if (C.zf) goto L_102e2aec;
  /* 102e2abe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2ac0 je 0x102e2adb */
  if (C.zf) goto L_102e2adb;
  /* 102e2ac2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102e2ac5 test byte ptr [ebx + 0x102e69e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102e69e1)))&(0x4u); fl_logic(_r,8); }
  /* 102e2acc je 0x102e2ad4 */
  if (C.zf) goto L_102e2ad4;
  /* 102e2ace mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102e2ad0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e2ad1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2ad2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102e2ad4:;
  /* 102e2ad4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102e2ad6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102e2ad8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e2ad9 jmp 0x102e2aea */
  goto L_102e2aea;
L_102e2adb:;
  /* 102e2adb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102e2ade test byte ptr [edx + 0x102e69e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102e69e1)))&(0x4u); fl_logic(_r,8); }
  /* 102e2ae5 je 0x102e2aea */
  if (C.zf) goto L_102e2aea;
  /* 102e2ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2ae8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102e2aea:;
  /* 102e2aea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102e2aec:;
  /* 102e2aec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2aed jmp 0x102e2a4a */
  goto L_102e2a4a;
L_102e2af2:;
  /* 102e2af2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2af4 je 0x102e2afa */
  if (C.zf) goto L_102e2afa;
  /* 102e2af6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102e2af9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102e2afa:;
  /* 102e2afa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102e2afc jmp 0x102e2a18 */
  goto L_102e2a18;
L_102e2b01:;
  /* 102e2b01 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e2b03 je 0x102e2b08 */
  if (C.zf) goto L_102e2b08;
  /* 102e2b05 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102e2b08:;
  /* 102e2b08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102e2b0b pop edi */
  EDI = (pop32());
  /* 102e2b0c pop esi */
  ESI = (pop32());
  /* 102e2b0d pop ebx */
  EBX = (pop32());
  /* 102e2b0e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 102e2b10 pop ebp */
  EBP = (pop32());
  /* 102e2b11 ret  */
  ESPCHK(0x102e295eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b12 @ 0x102e2b12 (306 bytes, 132 insns) */
void f_102e2b12(void) {
  FTRACE(0x102e2b12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2b12 push ecx */
  push32((uint32_t)(ECX));
  /* 102e2b13 push ecx */
  push32((uint32_t)(ECX));
  /* 102e2b14 mov eax, dword ptr [0x102e6800] */
  EAX = (r32((uint32_t)(0x102e6800)));
  /* 102e2b19 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2b1a push ebp */
  push32((uint32_t)(EBP));
  /* 102e2b1b mov ebp, dword ptr [0x102e5060] */
  EBP = (r32((uint32_t)(0x102e5060)));
  /* 102e2b21 push esi */
  push32((uint32_t)(ESI));
  /* 102e2b22 push edi */
  push32((uint32_t)(EDI));
  /* 102e2b23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e2b25 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102e2b27 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e2b29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2b2b jne 0x102e2b60 */
  if (!C.zf) goto L_102e2b60;
  /* 102e2b2d call ebp */
  call_ind((uint32_t)(EBP), 0x102e2b2fu);
  /* 102e2b2f mov esi, eax */
  ESI = (EAX);
  /* 102e2b31 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2b33 je 0x102e2b41 */
  if (C.zf) goto L_102e2b41;
  /* 102e2b35 mov dword ptr [0x102e6800], 1 */
  w32((uint32_t)(0x102e6800), (0x1u));
  /* 102e2b3f jmp 0x102e2b69 */
  goto L_102e2b69;
L_102e2b41:;
  /* 102e2b41 call dword ptr [0x102e5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5064))), 0x102e2b47u);
  /* 102e2b47 mov edi, eax */
  EDI = (EAX);
  /* 102e2b49 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2b4b je 0x102e2c3b */
  if (C.zf) goto L_102e2c3b;
  /* 102e2b51 mov dword ptr [0x102e6800], 2 */
  w32((uint32_t)(0x102e6800), (0x2u));
  /* 102e2b5b jmp 0x102e2bef */
  goto L_102e2bef;
L_102e2b60:;
  /* 102e2b60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2b63 jne 0x102e2bea */
  if (!C.zf) goto L_102e2bea;
L_102e2b69:;
  /* 102e2b69 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2b6b jne 0x102e2b79 */
  if (!C.zf) goto L_102e2b79;
  /* 102e2b6d call ebp */
  call_ind((uint32_t)(EBP), 0x102e2b6fu);
  /* 102e2b6f mov esi, eax */
  ESI = (EAX);
  /* 102e2b71 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2b73 je 0x102e2c3b */
  if (C.zf) goto L_102e2c3b;
L_102e2b79:;
  /* 102e2b79 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102e2b7c mov eax, esi */
  EAX = (ESI);
  /* 102e2b7e je 0x102e2b8e */
  if (C.zf) goto L_102e2b8e;
L_102e2b80:;
  /* 102e2b80 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2b81 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2b82 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102e2b85 jne 0x102e2b80 */
  if (!C.zf) goto L_102e2b80;
  /* 102e2b87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2b88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2b89 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102e2b8c jne 0x102e2b80 */
  if (!C.zf) goto L_102e2b80;
L_102e2b8e:;
  /* 102e2b8e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2b90 mov edi, dword ptr [0x102e5068] */
  EDI = (r32((uint32_t)(0x102e5068)));
  /* 102e2b96 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102e2b98 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2b99 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2b9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2b9b push ebx */
  push32((uint32_t)(EBX));
  /* 102e2b9c push ebx */
  push32((uint32_t)(EBX));
  /* 102e2b9d push eax */
  push32((uint32_t)(EAX));
  /* 102e2b9e push esi */
  push32((uint32_t)(ESI));
  /* 102e2b9f push ebx */
  push32((uint32_t)(EBX));
  /* 102e2ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2ba1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 102e2ba5 call edi */
  call_ind((uint32_t)(EDI), 0x102e2ba7u);
  /* 102e2ba7 mov ebp, eax */
  EBP = (EAX);
  /* 102e2ba9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2bab je 0x102e2bdf */
  if (C.zf) goto L_102e2bdf;
  /* 102e2bad push ebp */
  push32((uint32_t)(EBP));
  /* 102e2bae call 0x102e3061 */
  push32(0x102e2bb3u); f_102e3061();
  /* 102e2bb3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2bb5 pop ecx */
  ECX = (pop32());
  /* 102e2bb6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102e2bba je 0x102e2bdf */
  if (C.zf) goto L_102e2bdf;
  /* 102e2bbc push ebx */
  push32((uint32_t)(EBX));
  /* 102e2bbd push ebx */
  push32((uint32_t)(EBX));
  /* 102e2bbe push ebp */
  push32((uint32_t)(EBP));
  /* 102e2bbf push eax */
  push32((uint32_t)(EAX));
  /* 102e2bc0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 102e2bc4 push esi */
  push32((uint32_t)(ESI));
  /* 102e2bc5 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2bc7 call edi */
  call_ind((uint32_t)(EDI), 0x102e2bc9u);
  /* 102e2bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2bcb jne 0x102e2bdb */
  if (!C.zf) goto L_102e2bdb;
  /* 102e2bcd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102e2bd1 call 0x102e3019 */
  push32(0x102e2bd6u); f_102e3019();
  /* 102e2bd6 pop ecx */
  ECX = (pop32());
  /* 102e2bd7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_102e2bdb:;
  /* 102e2bdb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_102e2bdf:;
  /* 102e2bdf push esi */
  push32((uint32_t)(ESI));
  /* 102e2be0 call dword ptr [0x102e506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e506c))), 0x102e2be6u);
  /* 102e2be6 mov eax, ebx */
  EAX = (EBX);
  /* 102e2be8 jmp 0x102e2c3d */
  goto L_102e2c3d;
L_102e2bea:;
  /* 102e2bea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2bed jne 0x102e2c3b */
  if (!C.zf) goto L_102e2c3b;
L_102e2bef:;
  /* 102e2bef cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2bf1 jne 0x102e2bff */
  if (!C.zf) goto L_102e2bff;
  /* 102e2bf3 call dword ptr [0x102e5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5064))), 0x102e2bf9u);
  /* 102e2bf9 mov edi, eax */
  EDI = (EAX);
  /* 102e2bfb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2bfd je 0x102e2c3b */
  if (C.zf) goto L_102e2c3b;
L_102e2bff:;
  /* 102e2bff cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2c01 mov eax, edi */
  EAX = (EDI);
  /* 102e2c03 je 0x102e2c0f */
  if (C.zf) goto L_102e2c0f;
L_102e2c05:;
  /* 102e2c05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2c06 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2c08 jne 0x102e2c05 */
  if (!C.zf) goto L_102e2c05;
  /* 102e2c0a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2c0b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e2c0d jne 0x102e2c05 */
  if (!C.zf) goto L_102e2c05;
L_102e2c0f:;
  /* 102e2c0f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2c11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2c12 mov ebp, eax */
  EBP = (EAX);
  /* 102e2c14 push ebp */
  push32((uint32_t)(EBP));
  /* 102e2c15 call 0x102e3061 */
  push32(0x102e2c1au); f_102e3061();
  /* 102e2c1a mov esi, eax */
  ESI = (EAX);
  /* 102e2c1c pop ecx */
  ECX = (pop32());
  /* 102e2c1d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2c1f jne 0x102e2c25 */
  if (!C.zf) goto L_102e2c25;
  /* 102e2c21 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102e2c23 jmp 0x102e2c30 */
  goto L_102e2c30;
L_102e2c25:;
  /* 102e2c25 push ebp */
  push32((uint32_t)(EBP));
  /* 102e2c26 push edi */
  push32((uint32_t)(EDI));
  /* 102e2c27 push esi */
  push32((uint32_t)(ESI));
  /* 102e2c28 call 0x102e3650 */
  push32(0x102e2c2du); f_102e3650();
  /* 102e2c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e2c30:;
  /* 102e2c30 push edi */
  push32((uint32_t)(EDI));
  /* 102e2c31 call dword ptr [0x102e5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5070))), 0x102e2c37u);
  /* 102e2c37 mov eax, esi */
  EAX = (ESI);
  /* 102e2c39 jmp 0x102e2c3d */
  goto L_102e2c3d;
L_102e2c3b:;
  /* 102e2c3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102e2c3d:;
  /* 102e2c3d pop edi */
  EDI = (pop32());
  /* 102e2c3e pop esi */
  ESI = (pop32());
  /* 102e2c3f pop ebp */
  EBP = (pop32());
  /* 102e2c40 pop ebx */
  EBX = (pop32());
  /* 102e2c41 pop ecx */
  ECX = (pop32());
  /* 102e2c42 pop ecx */
  ECX = (pop32());
  /* 102e2c43 ret  */
  ESPCHK(0x102e2b12u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c44 @ 0x102e2c44 (60 bytes, 20 insns) */
void f_102e2c44(void) {
  FTRACE(0x102e2c44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e2c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2c48 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2c4c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102e2c51 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102e2c54 push eax */
  push32((uint32_t)(EAX));
  /* 102e2c55 call dword ptr [0x102e5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5058))), 0x102e2c5bu);
  /* 102e2c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2c5d mov dword ptr [0x102e6ae8], eax */
  w32((uint32_t)(0x102e6ae8), (EAX));
  /* 102e2c62 je 0x102e2c79 */
  if (C.zf) goto L_102e2c79;
  /* 102e2c64 call 0x102e3985 */
  push32(0x102e2c69u); f_102e3985();
  /* 102e2c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2c6b jne 0x102e2c7c */
  if (!C.zf) goto L_102e2c7c;
  /* 102e2c6d push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e2c73 call dword ptr [0x102e505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e505c))), 0x102e2c79u);
L_102e2c79:;
  /* 102e2c79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e2c7b ret  */
  ESPCHK(0x102e2c44u, _esp0);
  ESP += 4; return;
L_102e2c7c:;
  /* 102e2c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2c7e pop eax */
  EAX = (pop32());
  /* 102e2c7f ret  */
  ESPCHK(0x102e2c44u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c80 @ 0x102e2c80 (117 bytes, 38 insns) */
void f_102e2c80(void) {
  FTRACE(0x102e2c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2c80 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2c81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e2c83 cmp dword ptr [0x102e68b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102e68b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2c89 push ebp */
  push32((uint32_t)(EBP));
  /* 102e2c8a mov ebp, dword ptr [0x102e5050] */
  EBP = (r32((uint32_t)(0x102e5050)));
  /* 102e2c90 jle 0x102e2cd6 */
  if ((C.zf||C.sf!=C.of)) goto L_102e2cd6;
  /* 102e2c92 mov eax, dword ptr [0x102e68bc] */
  EAX = (r32((uint32_t)(0x102e68bc)));
  /* 102e2c97 push esi */
  push32((uint32_t)(ESI));
  /* 102e2c98 push edi */
  push32((uint32_t)(EDI));
  /* 102e2c99 mov edi, dword ptr [0x102e5054] */
  EDI = (r32((uint32_t)(0x102e5054)));
  /* 102e2c9f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_102e2ca2:;
  /* 102e2ca2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102e2ca7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102e2cac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2cae call edi */
  call_ind((uint32_t)(EDI), 0x102e2cb0u);
  /* 102e2cb0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102e2cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2cb7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2cb9 call edi */
  call_ind((uint32_t)(EDI), 0x102e2cbbu);
  /* 102e2cbb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 102e2cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2cc0 push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e2cc6 call ebp */
  call_ind((uint32_t)(EBP), 0x102e2cc8u);
  /* 102e2cc8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2ccb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102e2ccc cmp ebx, dword ptr [0x102e68b8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102e68b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2cd2 jl 0x102e2ca2 */
  if ((C.sf!=C.of)) goto L_102e2ca2;
  /* 102e2cd4 pop edi */
  EDI = (pop32());
  /* 102e2cd5 pop esi */
  ESI = (pop32());
L_102e2cd6:;
  /* 102e2cd6 push dword ptr [0x102e68bc] */
  push32((uint32_t)(r32((uint32_t)(0x102e68bc))));
  /* 102e2cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2cde push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e2ce4 call ebp */
  call_ind((uint32_t)(EBP), 0x102e2ce6u);
  /* 102e2ce6 push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e2cec call dword ptr [0x102e505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e505c))), 0x102e2cf2u);
  /* 102e2cf2 pop ebp */
  EBP = (pop32());
  /* 102e2cf3 pop ebx */
  EBX = (pop32());
  /* 102e2cf4 ret  */
  ESPCHK(0x102e2c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf5 @ 0x102e2cf5 (57 bytes, 18 insns) */
void f_102e2cf5(void) {
  FTRACE(0x102e2cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2cf5 mov eax, dword ptr [0x102e66b0] */
  EAX = (r32((uint32_t)(0x102e66b0)));
  /* 102e2cfa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2cfd je 0x102e2d0c */
  if (C.zf) goto L_102e2d0c;
  /* 102e2cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2d01 jne 0x102e2d2d */
  if (!C.zf) goto L_102e2d2d;
  /* 102e2d03 cmp dword ptr [0x102e66b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102e66b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d0a jne 0x102e2d2d */
  if (!C.zf) goto L_102e2d2d;
L_102e2d0c:;
  /* 102e2d0c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 102e2d11 call 0x102e2d2e */
  push32(0x102e2d16u); f_102e2d2e();
  /* 102e2d16 mov eax, dword ptr [0x102e6804] */
  EAX = (r32((uint32_t)(0x102e6804)));
  /* 102e2d1b pop ecx */
  ECX = (pop32());
  /* 102e2d1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2d1e je 0x102e2d22 */
  if (C.zf) goto L_102e2d22;
  /* 102e2d20 call eax */
  call_ind((uint32_t)(EAX), 0x102e2d22u);
L_102e2d22:;
  /* 102e2d22 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102e2d27 call 0x102e2d2e */
  push32(0x102e2d2cu); f_102e2d2e();
  /* 102e2d2c pop ecx */
  ECX = (pop32());
L_102e2d2d:;
  /* 102e2d2d ret  */
  ESPCHK(0x102e2cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d2e @ 0x102e2d2e (339 bytes, 100 insns) */
void f_102e2d2e(void) {
  FTRACE(0x102e2d2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2d2e push ebp */
  push32((uint32_t)(EBP));
  /* 102e2d2f mov ebp, esp */
  EBP = (ESP);
  /* 102e2d31 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2d37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e2d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102e2d3c mov eax, 0x102e61c0 */
  EAX = (0x102e61c0u);
L_102e2d41:;
  /* 102e2d41 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d43 je 0x102e2d50 */
  if (C.zf) goto L_102e2d50;
  /* 102e2d45 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2d48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e2d49 cmp eax, 0x102e6250 */
  { uint32_t _a=(EAX),_b=(0x102e6250u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d4e jl 0x102e2d41 */
  if ((C.sf!=C.of)) goto L_102e2d41;
L_102e2d50:;
  /* 102e2d50 push esi */
  push32((uint32_t)(ESI));
  /* 102e2d51 mov esi, ecx */
  ESI = (ECX);
  /* 102e2d53 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 102e2d56 cmp edx, dword ptr [esi + 0x102e61c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x102e61c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d5c jne 0x102e2e7e */
  if (!C.zf) goto L_102e2e7e;
  /* 102e2d62 mov eax, dword ptr [0x102e66b0] */
  EAX = (r32((uint32_t)(0x102e66b0)));
  /* 102e2d67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d6a je 0x102e2e58 */
  if (C.zf) goto L_102e2e58;
  /* 102e2d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2d72 jne 0x102e2d81 */
  if (!C.zf) goto L_102e2d81;
  /* 102e2d74 cmp dword ptr [0x102e66b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102e66b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d7b je 0x102e2e58 */
  if (C.zf) goto L_102e2e58;
L_102e2d81:;
  /* 102e2d81 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2d87 je 0x102e2e7e */
  if (C.zf) goto L_102e2e7e;
  /* 102e2d8d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102e2d93 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102e2d98 push eax */
  push32((uint32_t)(EAX));
  /* 102e2d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2d9b call dword ptr [0x102e5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5074))), 0x102e2da1u);
  /* 102e2da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2da3 jne 0x102e2db8 */
  if (!C.zf) goto L_102e2db8;
  /* 102e2da5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102e2dab push 0x102e5418 */
  push32((uint32_t)(0x102e5418u));
  /* 102e2db0 push eax */
  push32((uint32_t)(EAX));
  /* 102e2db1 call 0x102e30f0 */
  push32(0x102e2db6u); f_102e30f0();
  /* 102e2db6 pop ecx */
  ECX = (pop32());
  /* 102e2db7 pop ecx */
  ECX = (pop32());
L_102e2db8:;
  /* 102e2db8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102e2dbe push edi */
  push32((uint32_t)(EDI));
  /* 102e2dbf push eax */
  push32((uint32_t)(EAX));
  /* 102e2dc0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 102e2dc6 call 0x102e31e0 */
  push32(0x102e2dcbu); f_102e31e0();
  /* 102e2dcb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e2dcc pop ecx */
  ECX = (pop32());
  /* 102e2dcd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2dd0 jbe 0x102e2dfb */
  if ((C.cf||C.zf)) goto L_102e2dfb;
  /* 102e2dd2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102e2dd8 push eax */
  push32((uint32_t)(EAX));
  /* 102e2dd9 call 0x102e31e0 */
  push32(0x102e2ddeu); f_102e31e0();
  /* 102e2dde mov edi, eax */
  EDI = (EAX);
  /* 102e2de0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102e2de6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e2de9 push 3 */
  push32((uint32_t)(0x3u));
  /* 102e2deb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2ded push 0x102e5414 */
  push32((uint32_t)(0x102e5414u));
  /* 102e2df2 push edi */
  push32((uint32_t)(EDI));
  /* 102e2df3 call 0x102e4260 */
  push32(0x102e2df8u); f_102e4260();
  /* 102e2df8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e2dfb:;
  /* 102e2dfb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102e2e01 push 0x102e53f8 */
  push32((uint32_t)(0x102e53f8u));
  /* 102e2e06 push eax */
  push32((uint32_t)(EAX));
  /* 102e2e07 call 0x102e30f0 */
  push32(0x102e2e0cu); f_102e30f0();
  /* 102e2e0c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102e2e12 push edi */
  push32((uint32_t)(EDI));
  /* 102e2e13 push eax */
  push32((uint32_t)(EAX));
  /* 102e2e14 call 0x102e3100 */
  push32(0x102e2e19u); f_102e3100();
  /* 102e2e19 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102e2e1f push 0x102e53f4 */
  push32((uint32_t)(0x102e53f4u));
  /* 102e2e24 push eax */
  push32((uint32_t)(EAX));
  /* 102e2e25 call 0x102e3100 */
  push32(0x102e2e2au); f_102e3100();
  /* 102e2e2a push dword ptr [esi + 0x102e61c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x102e61c4))));
  /* 102e2e30 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102e2e36 push eax */
  push32((uint32_t)(EAX));
  /* 102e2e37 call 0x102e3100 */
  push32(0x102e2e3cu); f_102e3100();
  /* 102e2e3c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 102e2e41 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102e2e47 push 0x102e53cc */
  push32((uint32_t)(0x102e53ccu));
  /* 102e2e4c push eax */
  push32((uint32_t)(EAX));
  /* 102e2e4d call 0x102e41ce */
  push32(0x102e2e52u); f_102e41ce();
  /* 102e2e52 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2e55 pop edi */
  EDI = (pop32());
  /* 102e2e56 jmp 0x102e2e7e */
  goto L_102e2e7e;
L_102e2e58:;
  /* 102e2e58 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102e2e5b lea esi, [esi + 0x102e61c4] */
  ESI = ((uint32_t)(ESI + 0x102e61c4));
  /* 102e2e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e2e63 push eax */
  push32((uint32_t)(EAX));
  /* 102e2e64 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2e66 call 0x102e31e0 */
  push32(0x102e2e6bu); f_102e31e0();
  /* 102e2e6b pop ecx */
  ECX = (pop32());
  /* 102e2e6c push eax */
  push32((uint32_t)(EAX));
  /* 102e2e6d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2e6f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102e2e71 call dword ptr [0x102e5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5098))), 0x102e2e77u);
  /* 102e2e77 push eax */
  push32((uint32_t)(EAX));
  /* 102e2e78 call dword ptr [0x102e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e504c))), 0x102e2e7eu);
L_102e2e7e:;
  /* 102e2e7e pop esi */
  ESI = (pop32());
  /* 102e2e7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e2e80 ret  */
  ESPCHK(0x102e2d2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e81 @ 0x102e2e81 (41 bytes, 12 insns) */
void f_102e2e81(void) {
  FTRACE(0x102e2e81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2e81 push esi */
  push32((uint32_t)(ESI));
  /* 102e2e82 mov esi, dword ptr [0x102e5048] */
  ESI = (r32((uint32_t)(0x102e5048)));
  /* 102e2e88 push dword ptr [0x102e6294] */
  push32((uint32_t)(r32((uint32_t)(0x102e6294))));
  /* 102e2e8e call esi */
  call_ind((uint32_t)(ESI), 0x102e2e90u);
  /* 102e2e90 push dword ptr [0x102e6284] */
  push32((uint32_t)(r32((uint32_t)(0x102e6284))));
  /* 102e2e96 call esi */
  call_ind((uint32_t)(ESI), 0x102e2e98u);
  /* 102e2e98 push dword ptr [0x102e6274] */
  push32((uint32_t)(r32((uint32_t)(0x102e6274))));
  /* 102e2e9e call esi */
  call_ind((uint32_t)(ESI), 0x102e2ea0u);
  /* 102e2ea0 push dword ptr [0x102e6254] */
  push32((uint32_t)(r32((uint32_t)(0x102e6254))));
  /* 102e2ea6 call esi */
  call_ind((uint32_t)(ESI), 0x102e2ea8u);
  /* 102e2ea8 pop esi */
  ESI = (pop32());
  /* 102e2ea9 ret  */
  ESPCHK(0x102e2e81u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eaa @ 0x102e2eaa (108 bytes, 34 insns) */
void f_102e2eaa(void) {
  FTRACE(0x102e2eaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2eaa push esi */
  push32((uint32_t)(ESI));
  /* 102e2eab push edi */
  push32((uint32_t)(EDI));
  /* 102e2eac mov edi, dword ptr [0x102e5078] */
  EDI = (r32((uint32_t)(0x102e5078)));
  /* 102e2eb2 mov esi, 0x102e6250 */
  ESI = (0x102e6250u);
L_102e2eb7:;
  /* 102e2eb7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102e2eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2ebb je 0x102e2ee8 */
  if (C.zf) goto L_102e2ee8;
  /* 102e2ebd cmp esi, 0x102e6294 */
  { uint32_t _a=(ESI),_b=(0x102e6294u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2ec3 je 0x102e2ee8 */
  if (C.zf) goto L_102e2ee8;
  /* 102e2ec5 cmp esi, 0x102e6284 */
  { uint32_t _a=(ESI),_b=(0x102e6284u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2ecb je 0x102e2ee8 */
  if (C.zf) goto L_102e2ee8;
  /* 102e2ecd cmp esi, 0x102e6274 */
  { uint32_t _a=(ESI),_b=(0x102e6274u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2ed3 je 0x102e2ee8 */
  if (C.zf) goto L_102e2ee8;
  /* 102e2ed5 cmp esi, 0x102e6254 */
  { uint32_t _a=(ESI),_b=(0x102e6254u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2edb je 0x102e2ee8 */
  if (C.zf) goto L_102e2ee8;
  /* 102e2edd push eax */
  push32((uint32_t)(EAX));
  /* 102e2ede call edi */
  call_ind((uint32_t)(EDI), 0x102e2ee0u);
  /* 102e2ee0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2ee2 call 0x102e3019 */
  push32(0x102e2ee7u); f_102e3019();
  /* 102e2ee7 pop ecx */
  ECX = (pop32());
L_102e2ee8:;
  /* 102e2ee8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2eeb cmp esi, 0x102e6310 */
  { uint32_t _a=(ESI),_b=(0x102e6310u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2ef1 jl 0x102e2eb7 */
  if ((C.sf!=C.of)) goto L_102e2eb7;
  /* 102e2ef3 push dword ptr [0x102e6274] */
  push32((uint32_t)(r32((uint32_t)(0x102e6274))));
  /* 102e2ef9 call edi */
  call_ind((uint32_t)(EDI), 0x102e2efbu);
  /* 102e2efb push dword ptr [0x102e6284] */
  push32((uint32_t)(r32((uint32_t)(0x102e6284))));
  /* 102e2f01 call edi */
  call_ind((uint32_t)(EDI), 0x102e2f03u);
  /* 102e2f03 push dword ptr [0x102e6294] */
  push32((uint32_t)(r32((uint32_t)(0x102e6294))));
  /* 102e2f09 call edi */
  call_ind((uint32_t)(EDI), 0x102e2f0bu);
  /* 102e2f0b push dword ptr [0x102e6254] */
  push32((uint32_t)(r32((uint32_t)(0x102e6254))));
  /* 102e2f11 call edi */
  call_ind((uint32_t)(EDI), 0x102e2f13u);
  /* 102e2f13 pop edi */
  EDI = (pop32());
  /* 102e2f14 pop esi */
  ESI = (pop32());
  /* 102e2f15 ret  */
  ESPCHK(0x102e2eaau, _esp0);
  ESP += 4; return;
}

/* FUN_10002f16 @ 0x102e2f16 (97 bytes, 37 insns) */
void f_102e2f16(void) {
  FTRACE(0x102e2f16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2f16 push ebp */
  push32((uint32_t)(EBP));
  /* 102e2f17 mov ebp, esp */
  EBP = (ESP);
  /* 102e2f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e2f1c push esi */
  push32((uint32_t)(ESI));
  /* 102e2f1d cmp dword ptr [eax*4 + 0x102e6250], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x102e6250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2f25 lea esi, [eax*4 + 0x102e6250] */
  ESI = ((uint32_t)(EAX*4 + 0x102e6250));
  /* 102e2f2c jne 0x102e2f6c */
  if (!C.zf) goto L_102e2f6c;
  /* 102e2f2e push edi */
  push32((uint32_t)(EDI));
  /* 102e2f2f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102e2f31 call 0x102e3061 */
  push32(0x102e2f36u); f_102e3061();
  /* 102e2f36 mov edi, eax */
  EDI = (EAX);
  /* 102e2f38 pop ecx */
  ECX = (pop32());
  /* 102e2f39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e2f3b jne 0x102e2f45 */
  if (!C.zf) goto L_102e2f45;
  /* 102e2f3d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102e2f3f call 0x102e2386 */
  push32(0x102e2f44u); f_102e2386();
  /* 102e2f44 pop ecx */
  ECX = (pop32());
L_102e2f45:;
  /* 102e2f45 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102e2f47 call 0x102e2f16 */
  push32(0x102e2f4cu); f_102e2f16();
  /* 102e2f4c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2f4f pop ecx */
  ECX = (pop32());
  /* 102e2f50 push edi */
  push32((uint32_t)(EDI));
  /* 102e2f51 jne 0x102e2f5d */
  if (!C.zf) goto L_102e2f5d;
  /* 102e2f53 call dword ptr [0x102e5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5048))), 0x102e2f59u);
  /* 102e2f59 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102e2f5b jmp 0x102e2f63 */
  goto L_102e2f63;
L_102e2f5d:;
  /* 102e2f5d call 0x102e3019 */
  push32(0x102e2f62u); f_102e3019();
  /* 102e2f62 pop ecx */
  ECX = (pop32());
L_102e2f63:;
  /* 102e2f63 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102e2f65 call 0x102e2f77 */
  push32(0x102e2f6au); f_102e2f77();
  /* 102e2f6a pop ecx */
  ECX = (pop32());
  /* 102e2f6b pop edi */
  EDI = (pop32());
L_102e2f6c:;
  /* 102e2f6c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102e2f6e call dword ptr [0x102e5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5044))), 0x102e2f74u);
  /* 102e2f74 pop esi */
  ESI = (pop32());
  /* 102e2f75 pop ebp */
  EBP = (pop32());
  /* 102e2f76 ret  */
  ESPCHK(0x102e2f16u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f77 @ 0x102e2f77 (21 bytes, 7 insns) */
void f_102e2f77(void) {
  FTRACE(0x102e2f77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2f77 push ebp */
  push32((uint32_t)(EBP));
  /* 102e2f78 mov ebp, esp */
  EBP = (ESP);
  /* 102e2f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e2f7d push dword ptr [eax*4 + 0x102e6250] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x102e6250))));
  /* 102e2f84 call dword ptr [0x102e5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5040))), 0x102e2f8au);
  /* 102e2f8a pop ebp */
  EBP = (pop32());
  /* 102e2f8b ret  */
  ESPCHK(0x102e2f77u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f8c @ 0x102e2f8c (141 bytes, 56 insns) */
void f_102e2f8c(void) {
  FTRACE(0x102e2f8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e2f8c push ebx */
  push32((uint32_t)(EBX));
  /* 102e2f8d push esi */
  push32((uint32_t)(ESI));
  /* 102e2f8e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102e2f92 push edi */
  push32((uint32_t)(EDI));
  /* 102e2f93 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e2f98 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2f9b mov ebx, esi */
  EBX = (ESI);
  /* 102e2f9d ja 0x102e2fac */
  if ((!C.cf&&!C.zf)) goto L_102e2fac;
  /* 102e2f9f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e2fa1 jne 0x102e2fa6 */
  if (!C.zf) goto L_102e2fa6;
  /* 102e2fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e2fa5 pop esi */
  ESI = (pop32());
L_102e2fa6:;
  /* 102e2fa6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2fa9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_102e2fac:;
  /* 102e2fac xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e2fae cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2fb1 ja 0x102e2fed */
  if ((!C.cf&&!C.zf)) goto L_102e2fed;
  /* 102e2fb3 cmp ebx, dword ptr [0x102e64a0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102e64a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2fb9 ja 0x102e2fd8 */
  if ((!C.cf&&!C.zf)) goto L_102e2fd8;
  /* 102e2fbb push 9 */
  push32((uint32_t)(0x9u));
  /* 102e2fbd call 0x102e2f16 */
  push32(0x102e2fc2u); f_102e2f16();
  /* 102e2fc2 push ebx */
  push32((uint32_t)(EBX));
  /* 102e2fc3 call 0x102e3d19 */
  push32(0x102e2fc8u); f_102e3d19();
  /* 102e2fc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e2fca mov edi, eax */
  EDI = (EAX);
  /* 102e2fcc call 0x102e2f77 */
  push32(0x102e2fd1u); f_102e2f77();
  /* 102e2fd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e2fd4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e2fd6 jne 0x102e3003 */
  if (!C.zf) goto L_102e3003;
L_102e2fd8:;
  /* 102e2fd8 push esi */
  push32((uint32_t)(ESI));
  /* 102e2fd9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102e2fdb push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e2fe1 call dword ptr [0x102e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e503c))), 0x102e2fe7u);
  /* 102e2fe7 mov edi, eax */
  EDI = (EAX);
  /* 102e2fe9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e2feb jne 0x102e300f */
  if (!C.zf) goto L_102e300f;
L_102e2fed:;
  /* 102e2fed cmp dword ptr [0x102e687c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102e687c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e2ff4 je 0x102e300f */
  if (C.zf) goto L_102e300f;
  /* 102e2ff6 push esi */
  push32((uint32_t)(ESI));
  /* 102e2ff7 call 0x102e43b8 */
  push32(0x102e2ffcu); f_102e43b8();
  /* 102e2ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e2ffe pop ecx */
  ECX = (pop32());
  /* 102e2fff je 0x102e3015 */
  if (C.zf) goto L_102e3015;
  /* 102e3001 jmp 0x102e2fac */
  goto L_102e2fac;
L_102e3003:;
  /* 102e3003 push ebx */
  push32((uint32_t)(EBX));
  /* 102e3004 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e3006 push edi */
  push32((uint32_t)(EDI));
  /* 102e3007 call 0x102e4360 */
  push32(0x102e300cu); f_102e4360();
  /* 102e300c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102e300f:;
  /* 102e300f mov eax, edi */
  EAX = (EDI);
L_102e3011:;
  /* 102e3011 pop edi */
  EDI = (pop32());
  /* 102e3012 pop esi */
  ESI = (pop32());
  /* 102e3013 pop ebx */
  EBX = (pop32());
  /* 102e3014 ret  */
  ESPCHK(0x102e2f8cu, _esp0);
  ESP += 4; return;
L_102e3015:;
  /* 102e3015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e3017 jmp 0x102e3011 */
  goto L_102e3011;
}

/* FUN_10003019 @ 0x102e3019 (72 bytes, 29 insns) */
void f_102e3019(void) {
  FTRACE(0x102e3019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3019 push esi */
  push32((uint32_t)(ESI));
  /* 102e301a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102e301e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e3020 je 0x102e305f */
  if (C.zf) goto L_102e305f;
  /* 102e3022 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e3024 call 0x102e2f16 */
  push32(0x102e3029u); f_102e2f16();
  /* 102e3029 push esi */
  push32((uint32_t)(ESI));
  /* 102e302a call 0x102e39c3 */
  push32(0x102e302fu); f_102e39c3();
  /* 102e302f pop ecx */
  ECX = (pop32());
  /* 102e3030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e3032 pop ecx */
  ECX = (pop32());
  /* 102e3033 je 0x102e3048 */
  if (C.zf) goto L_102e3048;
  /* 102e3035 push esi */
  push32((uint32_t)(ESI));
  /* 102e3036 push eax */
  push32((uint32_t)(EAX));
  /* 102e3037 call 0x102e39ee */
  push32(0x102e303cu); f_102e39ee();
  /* 102e303c push 9 */
  push32((uint32_t)(0x9u));
  /* 102e303e call 0x102e2f77 */
  push32(0x102e3043u); f_102e2f77();
  /* 102e3043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3046 pop esi */
  ESI = (pop32());
  /* 102e3047 ret  */
  ESPCHK(0x102e3019u, _esp0);
  ESP += 4; return;
L_102e3048:;
  /* 102e3048 push 9 */
  push32((uint32_t)(0x9u));
  /* 102e304a call 0x102e2f77 */
  push32(0x102e304fu); f_102e2f77();
  /* 102e304f pop ecx */
  ECX = (pop32());
  /* 102e3050 push esi */
  push32((uint32_t)(ESI));
  /* 102e3051 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e3053 push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e3059 call dword ptr [0x102e5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5050))), 0x102e305fu);
L_102e305f:;
  /* 102e305f pop esi */
  ESI = (pop32());
  /* 102e3060 ret  */
  ESPCHK(0x102e3019u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x102e3061 (18 bytes, 6 insns) */
void f_102e3061(void) {
  FTRACE(0x102e3061u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3061 push dword ptr [0x102e687c] */
  push32((uint32_t)(r32((uint32_t)(0x102e687c))));
  /* 102e3067 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102e306b call 0x102e3073 */
  push32(0x102e3070u); f_102e3073();
  /* 102e3070 pop ecx */
  ECX = (pop32());
  /* 102e3071 pop ecx */
  ECX = (pop32());
  /* 102e3072 ret  */
  ESPCHK(0x102e3061u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x102e3073 (44 bytes, 16 insns) */
void f_102e3073(void) {
  FTRACE(0x102e3073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3073 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3078 ja 0x102e309c */
  if ((!C.cf&&!C.zf)) goto L_102e309c;
L_102e307a:;
  /* 102e307a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102e307e call 0x102e309f */
  push32(0x102e3083u); f_102e309f();
  /* 102e3083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e3085 pop ecx */
  ECX = (pop32());
  /* 102e3086 jne 0x102e309e */
  if (!C.zf) goto L_102e309e;
  /* 102e3088 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e308c je 0x102e309e */
  if (C.zf) goto L_102e309e;
  /* 102e308e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102e3092 call 0x102e43b8 */
  push32(0x102e3097u); f_102e43b8();
  /* 102e3097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e3099 pop ecx */
  ECX = (pop32());
  /* 102e309a jne 0x102e307a */
  if (!C.zf) goto L_102e307a;
L_102e309c:;
  /* 102e309c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102e309e:;
  /* 102e309e ret  */
  ESPCHK(0x102e3073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000309f @ 0x102e309f (78 bytes, 30 insns) */
void f_102e309f(void) {
  FTRACE(0x102e309fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e309f push esi */
  push32((uint32_t)(ESI));
  /* 102e30a0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102e30a4 cmp esi, dword ptr [0x102e64a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102e64a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e30aa push edi */
  push32((uint32_t)(EDI));
  /* 102e30ab ja 0x102e30ce */
  if ((!C.cf&&!C.zf)) goto L_102e30ce;
  /* 102e30ad push 9 */
  push32((uint32_t)(0x9u));
  /* 102e30af call 0x102e2f16 */
  push32(0x102e30b4u); f_102e2f16();
  /* 102e30b4 push esi */
  push32((uint32_t)(ESI));
  /* 102e30b5 call 0x102e3d19 */
  push32(0x102e30bau); f_102e3d19();
  /* 102e30ba push 9 */
  push32((uint32_t)(0x9u));
  /* 102e30bc mov edi, eax */
  EDI = (EAX);
  /* 102e30be call 0x102e2f77 */
  push32(0x102e30c3u); f_102e2f77();
  /* 102e30c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e30c6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102e30c8 je 0x102e30ce */
  if (C.zf) goto L_102e30ce;
  /* 102e30ca mov eax, edi */
  EAX = (EDI);
  /* 102e30cc jmp 0x102e30ea */
  goto L_102e30ea;
L_102e30ce:;
  /* 102e30ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e30d0 jne 0x102e30d5 */
  if (!C.zf) goto L_102e30d5;
  /* 102e30d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e30d4 pop esi */
  ESI = (pop32());
L_102e30d5:;
  /* 102e30d5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e30d8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 102e30db push esi */
  push32((uint32_t)(ESI));
  /* 102e30dc push 0 */
  push32((uint32_t)(0x0u));
  /* 102e30de push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e30e4 call dword ptr [0x102e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e503c))), 0x102e30eau);
L_102e30ea:;
  /* 102e30ea pop edi */
  EDI = (pop32());
  /* 102e30eb pop esi */
  ESI = (pop32());
  /* 102e30ec ret  */
  ESPCHK(0x102e309fu, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x102e30f0 (7 bytes, 3 insns) */
void f_102e30f0(void) {
  FTRACE(0x102e30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e30f0 push edi */
  push32((uint32_t)(EDI));
  /* 102e30f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102e30f5 jmp 0x102e3161 */
  jmp_ind(0x102e3161u); return;
}

/* FUN_10003100 @ 0x102e3100 (224 bytes, 84 insns) */
void f_102e3100(void) {
  FTRACE(0x102e3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3100 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e3104 push edi */
  push32((uint32_t)(EDI));
  /* 102e3105 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102e310b je 0x102e311c */
  if (C.zf) goto L_102e311c;
L_102e310d:;
  /* 102e310d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102e310f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e3110 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e3112 je 0x102e314f */
  if (C.zf) goto L_102e314f;
  /* 102e3114 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102e311a jne 0x102e310d */
  if (!C.zf) goto L_102e310d;
L_102e311c:;
  /* 102e311c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102e311e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102e3123 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3125 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e3128 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102e312a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e312d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102e3132 je 0x102e311c */
  if (C.zf) goto L_102e311c;
  /* 102e3134 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102e3137 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e3139 je 0x102e315e */
  if (C.zf) goto L_102e315e;
  /* 102e313b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102e313d je 0x102e3159 */
  if (C.zf) goto L_102e3159;
  /* 102e313f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102e3144 je 0x102e3154 */
  if (C.zf) goto L_102e3154;
  /* 102e3146 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102e314b je 0x102e314f */
  if (C.zf) goto L_102e314f;
  /* 102e314d jmp 0x102e311c */
  goto L_102e311c;
L_102e314f:;
  /* 102e314f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 102e3152 jmp 0x102e3161 */
  goto L_102e3161;
L_102e3154:;
  /* 102e3154 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 102e3157 jmp 0x102e3161 */
  goto L_102e3161;
L_102e3159:;
  /* 102e3159 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 102e315c jmp 0x102e3161 */
  goto L_102e3161;
L_102e315e:;
  /* 102e315e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_102e3161:;
  /* 102e3161 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102e3165 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102e316b je 0x102e3186 */
  if (C.zf) goto L_102e3186;
L_102e316d:;
  /* 102e316d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102e316f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e3170 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e3172 je 0x102e31d8 */
  if (C.zf) goto L_102e31d8;
  /* 102e3174 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102e3176 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e3177 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102e317d jne 0x102e316d */
  if (!C.zf) goto L_102e316d;
  /* 102e317f jmp 0x102e3186 */
  goto L_102e3186;
L_102e3181:;
  /* 102e3181 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102e3183 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102e3186:;
  /* 102e3186 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102e318b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102e318d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e318f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e3192 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102e3194 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102e3196 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3199 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102e319e je 0x102e3181 */
  if (C.zf) goto L_102e3181;
  /* 102e31a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e31a2 je 0x102e31d8 */
  if (C.zf) goto L_102e31d8;
  /* 102e31a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102e31a6 je 0x102e31cf */
  if (C.zf) goto L_102e31cf;
  /* 102e31a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102e31ae je 0x102e31c2 */
  if (C.zf) goto L_102e31c2;
  /* 102e31b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102e31b6 je 0x102e31ba */
  if (C.zf) goto L_102e31ba;
  /* 102e31b8 jmp 0x102e3181 */
  goto L_102e3181;
L_102e31ba:;
  /* 102e31ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102e31bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e31c0 pop edi */
  EDI = (pop32());
  /* 102e31c1 ret  */
  ESPCHK(0x102e3100u, _esp0);
  ESP += 4; return;
L_102e31c2:;
  /* 102e31c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102e31c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e31c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 102e31cd pop edi */
  EDI = (pop32());
  /* 102e31ce ret  */
  ESPCHK(0x102e3100u, _esp0);
  ESP += 4; return;
L_102e31cf:;
  /* 102e31cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102e31d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e31d6 pop edi */
  EDI = (pop32());
  /* 102e31d7 ret  */
  ESPCHK(0x102e3100u, _esp0);
  ESP += 4; return;
L_102e31d8:;
  /* 102e31d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102e31da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e31de pop edi */
  EDI = (pop32());
  /* 102e31df ret  */
  ESPCHK(0x102e3100u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102e31e0 (123 bytes, 44 insns) */
void f_102e31e0(void) {
  FTRACE(0x102e31e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e31e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e31e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102e31ea je 0x102e3200 */
  if (C.zf) goto L_102e3200;
L_102e31ec:;
  /* 102e31ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102e31ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e31ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e31f1 je 0x102e3233 */
  if (C.zf) goto L_102e3233;
  /* 102e31f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102e31f9 jne 0x102e31ec */
  if (!C.zf) goto L_102e31ec;
  /* 102e31fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102e3200:;
  /* 102e3200 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102e3202 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102e3207 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3209 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e320c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102e320e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3211 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102e3216 je 0x102e3200 */
  if (C.zf) goto L_102e3200;
  /* 102e3218 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102e321b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e321d je 0x102e3251 */
  if (C.zf) goto L_102e3251;
  /* 102e321f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102e3221 je 0x102e3247 */
  if (C.zf) goto L_102e3247;
  /* 102e3223 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102e3228 je 0x102e323d */
  if (C.zf) goto L_102e323d;
  /* 102e322a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102e322f je 0x102e3233 */
  if (C.zf) goto L_102e3233;
  /* 102e3231 jmp 0x102e3200 */
  goto L_102e3200;
L_102e3233:;
  /* 102e3233 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102e3236 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e323a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e323c ret  */
  ESPCHK(0x102e31e0u, _esp0);
  ESP += 4; return;
L_102e323d:;
  /* 102e323d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102e3240 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e3244 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3246 ret  */
  ESPCHK(0x102e31e0u, _esp0);
  ESP += 4; return;
L_102e3247:;
  /* 102e3247 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102e324a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e324e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3250 ret  */
  ESPCHK(0x102e31e0u, _esp0);
  ESP += 4; return;
L_102e3251:;
  /* 102e3251 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102e3254 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e3258 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e325a ret  */
  ESPCHK(0x102e31e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000325b @ 0x102e325b (429 bytes, 143 insns) */
void f_102e325b(void) {
  FTRACE(0x102e325bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e325b push ebp */
  push32((uint32_t)(EBP));
  /* 102e325c mov ebp, esp */
  EBP = (ESP);
  /* 102e325e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3261 push ebx */
  push32((uint32_t)(EBX));
  /* 102e3262 push esi */
  push32((uint32_t)(ESI));
  /* 102e3263 push edi */
  push32((uint32_t)(EDI));
  /* 102e3264 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102e3266 call 0x102e2f16 */
  push32(0x102e326bu); f_102e2f16();
  /* 102e326b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e326e call 0x102e3408 */
  push32(0x102e3273u); f_102e3408();
  /* 102e3273 mov ebx, eax */
  EBX = (EAX);
  /* 102e3275 pop ecx */
  ECX = (pop32());
  /* 102e3276 cmp ebx, dword ptr [0x102e68c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102e68c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e327c pop ecx */
  ECX = (pop32());
  /* 102e327d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3280 jne 0x102e3289 */
  if (!C.zf) goto L_102e3289;
L_102e3282:;
  /* 102e3282 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102e3284 jmp 0x102e33f9 */
  goto L_102e33f9;
L_102e3289:;
  /* 102e3289 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102e328b je 0x102e33e7 */
  if (C.zf) goto L_102e33e7;
  /* 102e3291 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102e3293 mov eax, 0x102e63a8 */
  EAX = (0x102e63a8u);
L_102e3298:;
  /* 102e3298 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e329a je 0x102e3310 */
  if (C.zf) goto L_102e3310;
  /* 102e329c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e329f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102e32a0 cmp eax, 0x102e6498 */
  { uint32_t _a=(EAX),_b=(0x102e6498u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e32a5 jl 0x102e3298 */
  if ((C.sf!=C.of)) goto L_102e3298;
  /* 102e32a7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102e32aa push eax */
  push32((uint32_t)(EAX));
  /* 102e32ab push ebx */
  push32((uint32_t)(EBX));
  /* 102e32ac call dword ptr [0x102e5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5038))), 0x102e32b2u);
  /* 102e32b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e32b4 pop esi */
  ESI = (pop32());
  /* 102e32b5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e32b7 jne 0x102e33de */
  if (!C.zf) goto L_102e33de;
  /* 102e32bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102e32bf and dword ptr [0x102e6ae4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102e6ae4)))&(0x0u); w32((uint32_t)(0x102e6ae4), (_r)); fl_logic(_r,32); }
  /* 102e32c6 pop ecx */
  ECX = (pop32());
  /* 102e32c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e32c9 mov edi, 0x102e69e0 */
  EDI = (0x102e69e0u);
  /* 102e32ce cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e32d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102e32d3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102e32d4 mov dword ptr [0x102e68c0], ebx */
  w32((uint32_t)(0x102e68c0), (EBX));
  /* 102e32da jbe 0x102e33cb */
  if ((C.cf||C.zf)) goto L_102e33cb;
  /* 102e32e0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e32e4 je 0x102e33a6 */
  if (C.zf) goto L_102e33a6;
  /* 102e32ea lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102e32ed:;
  /* 102e32ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102e32ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e32f1 je 0x102e33a6 */
  if (C.zf) goto L_102e33a6;
  /* 102e32f7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102e32fb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102e32fe:;
  /* 102e32fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3300 ja 0x102e339a */
  if ((!C.cf&&!C.zf)) goto L_102e339a;
  /* 102e3306 or byte ptr [eax + 0x102e69e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(0x4u); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e330d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e330e jmp 0x102e32fe */
  goto L_102e32fe;
L_102e3310:;
  /* 102e3310 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e3314 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102e3316 pop ecx */
  ECX = (pop32());
  /* 102e3317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e3319 mov edi, 0x102e69e0 */
  EDI = (0x102e69e0u);
  /* 102e331e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102e3321 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102e3323 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102e3326 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102e3327 lea ebx, [esi + 0x102e63b8] */
  EBX = ((uint32_t)(ESI + 0x102e63b8));
L_102e332d:;
  /* 102e332d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e3330 mov ecx, ebx */
  ECX = (EBX);
  /* 102e3332 je 0x102e3360 */
  if (C.zf) goto L_102e3360;
L_102e3334:;
  /* 102e3334 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102e3337 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e3339 je 0x102e3360 */
  if (C.zf) goto L_102e3360;
  /* 102e333b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102e333e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102e3341 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3343 ja 0x102e3359 */
  if ((!C.cf&&!C.zf)) goto L_102e3359;
  /* 102e3345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3348 mov dl, byte ptr [edx + 0x102e63a0] */
  DL = (r8((uint32_t)(EDX + 0x102e63a0)));
L_102e334e:;
  /* 102e334e or byte ptr [eax + 0x102e69e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(DL); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e3354 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e3355 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3357 jbe 0x102e334e */
  if ((C.cf||C.zf)) goto L_102e334e;
L_102e3359:;
  /* 102e3359 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e335a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e335b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e335e jne 0x102e3334 */
  if (!C.zf) goto L_102e3334;
L_102e3360:;
  /* 102e3360 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102e3363 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3366 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e336a jb 0x102e332d */
  if (C.cf) goto L_102e332d;
  /* 102e336c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e336f mov dword ptr [0x102e68dc], 1 */
  w32((uint32_t)(0x102e68dc), (0x1u));
  /* 102e3379 push eax */
  push32((uint32_t)(EAX));
  /* 102e337a mov dword ptr [0x102e68c0], eax */
  w32((uint32_t)(0x102e68c0), (EAX));
  /* 102e337f call 0x102e3452 */
  push32(0x102e3384u); f_102e3452();
  /* 102e3384 lea esi, [esi + 0x102e63ac] */
  ESI = ((uint32_t)(ESI + 0x102e63ac));
  /* 102e338a mov edi, 0x102e68d0 */
  EDI = (0x102e68d0u);
  /* 102e338f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102e3390 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102e3391 pop ecx */
  ECX = (pop32());
  /* 102e3392 mov dword ptr [0x102e6ae4], eax */
  w32((uint32_t)(0x102e6ae4), (EAX));
  /* 102e3397 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102e3398 jmp 0x102e33ec */
  goto L_102e33ec;
L_102e339a:;
  /* 102e339a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e339b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e339c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e33a0 jne 0x102e32ed */
  if (!C.zf) goto L_102e32ed;
L_102e33a6:;
  /* 102e33a6 mov eax, esi */
  EAX = (ESI);
L_102e33a8:;
  /* 102e33a8 or byte ptr [eax + 0x102e69e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(0x8u); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e33af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e33b0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e33b5 jb 0x102e33a8 */
  if (C.cf) goto L_102e33a8;
  /* 102e33b7 push ebx */
  push32((uint32_t)(EBX));
  /* 102e33b8 call 0x102e3452 */
  push32(0x102e33bdu); f_102e3452();
  /* 102e33bd pop ecx */
  ECX = (pop32());
  /* 102e33be mov dword ptr [0x102e6ae4], eax */
  w32((uint32_t)(0x102e6ae4), (EAX));
  /* 102e33c3 mov dword ptr [0x102e68dc], esi */
  w32((uint32_t)(0x102e68dc), (ESI));
  /* 102e33c9 jmp 0x102e33d2 */
  goto L_102e33d2;
L_102e33cb:;
  /* 102e33cb and dword ptr [0x102e68dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102e68dc)))&(0x0u); w32((uint32_t)(0x102e68dc), (_r)); fl_logic(_r,32); }
L_102e33d2:;
  /* 102e33d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e33d4 mov edi, 0x102e68d0 */
  EDI = (0x102e68d0u);
  /* 102e33d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102e33da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102e33db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102e33dc jmp 0x102e33ec */
  goto L_102e33ec;
L_102e33de:;
  /* 102e33de cmp dword ptr [0x102e6868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102e6868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e33e5 je 0x102e33f6 */
  if (C.zf) goto L_102e33f6;
L_102e33e7:;
  /* 102e33e7 call 0x102e3485 */
  push32(0x102e33ecu); f_102e3485();
L_102e33ec:;
  /* 102e33ec call 0x102e34ae */
  push32(0x102e33f1u); f_102e34ae();
  /* 102e33f1 jmp 0x102e3282 */
  goto L_102e3282;
L_102e33f6:;
  /* 102e33f6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102e33f9:;
  /* 102e33f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102e33fb call 0x102e2f77 */
  push32(0x102e3400u); f_102e2f77();
  /* 102e3400 pop ecx */
  ECX = (pop32());
  /* 102e3401 mov eax, esi */
  EAX = (ESI);
  /* 102e3403 pop edi */
  EDI = (pop32());
  /* 102e3404 pop esi */
  ESI = (pop32());
  /* 102e3405 pop ebx */
  EBX = (pop32());
  /* 102e3406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e3407 ret  */
  ESPCHK(0x102e325bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003408 @ 0x102e3408 (74 bytes, 15 insns) */
void f_102e3408(void) {
  FTRACE(0x102e3408u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3408 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e340c and dword ptr [0x102e6868], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102e6868)))&(0x0u); w32((uint32_t)(0x102e6868), (_r)); fl_logic(_r,32); }
  /* 102e3413 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3416 jne 0x102e3428 */
  if (!C.zf) goto L_102e3428;
  /* 102e3418 mov dword ptr [0x102e6868], 1 */
  w32((uint32_t)(0x102e6868), (0x1u));
  /* 102e3422 jmp dword ptr [0x102e5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102e5030)))); return;
L_102e3428:;
  /* 102e3428 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e342b jne 0x102e343d */
  if (!C.zf) goto L_102e343d;
  /* 102e342d mov dword ptr [0x102e6868], 1 */
  w32((uint32_t)(0x102e6868), (0x1u));
  /* 102e3437 jmp dword ptr [0x102e5034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102e5034)))); return;
L_102e343d:;
  /* 102e343d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3440 jne 0x102e3451 */
  if (!C.zf) goto L_102e3451;
  /* 102e3442 mov eax, dword ptr [0x102e6898] */
  EAX = (r32((uint32_t)(0x102e6898)));
  /* 102e3447 mov dword ptr [0x102e6868], 1 */
  w32((uint32_t)(0x102e6868), (0x1u));
L_102e3451:;
  /* 102e3451 ret  */
  ESPCHK(0x102e3408u, _esp0);
  ESP += 4; return;
}

/* FUN_10003452 @ 0x102e3452 (51 bytes, 19 insns) */
void f_102e3452(void) {
  FTRACE(0x102e3452u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3452 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e3456 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e345b je 0x102e347f */
  if (C.zf) goto L_102e347f;
  /* 102e345d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3460 je 0x102e3479 */
  if (C.zf) goto L_102e3479;
  /* 102e3462 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3465 je 0x102e3473 */
  if (C.zf) goto L_102e3473;
  /* 102e3467 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102e3468 je 0x102e346d */
  if (C.zf) goto L_102e346d;
  /* 102e346a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e346c ret  */
  ESPCHK(0x102e3452u, _esp0);
  ESP += 4; return;
L_102e346d:;
  /* 102e346d mov eax, 0x404 */
  EAX = (0x404u);
  /* 102e3472 ret  */
  ESPCHK(0x102e3452u, _esp0);
  ESP += 4; return;
L_102e3473:;
  /* 102e3473 mov eax, 0x412 */
  EAX = (0x412u);
  /* 102e3478 ret  */
  ESPCHK(0x102e3452u, _esp0);
  ESP += 4; return;
L_102e3479:;
  /* 102e3479 mov eax, 0x804 */
  EAX = (0x804u);
  /* 102e347e ret  */
  ESPCHK(0x102e3452u, _esp0);
  ESP += 4; return;
L_102e347f:;
  /* 102e347f mov eax, 0x411 */
  EAX = (0x411u);
  /* 102e3484 ret  */
  ESPCHK(0x102e3452u, _esp0);
  ESP += 4; return;
}

/* FUN_10003485 @ 0x102e3485 (41 bytes, 17 insns) */
void f_102e3485(void) {
  FTRACE(0x102e3485u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3485 push edi */
  push32((uint32_t)(EDI));
  /* 102e3486 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102e3488 pop ecx */
  ECX = (pop32());
  /* 102e3489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e348b mov edi, 0x102e69e0 */
  EDI = (0x102e69e0u);
  /* 102e3490 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102e3492 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102e3493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e3495 mov edi, 0x102e68d0 */
  EDI = (0x102e68d0u);
  /* 102e349a mov dword ptr [0x102e68c0], eax */
  w32((uint32_t)(0x102e68c0), (EAX));
  /* 102e349f mov dword ptr [0x102e68dc], eax */
  w32((uint32_t)(0x102e68dc), (EAX));
  /* 102e34a4 mov dword ptr [0x102e6ae4], eax */
  w32((uint32_t)(0x102e6ae4), (EAX));
  /* 102e34a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102e34aa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102e34ab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102e34ac pop edi */
  EDI = (pop32());
  /* 102e34ad ret  */
  ESPCHK(0x102e3485u, _esp0);
  ESP += 4; return;
}

/* FUN_100034ae @ 0x102e34ae (389 bytes, 124 insns) */
void f_102e34ae(void) {
  FTRACE(0x102e34aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e34ae push ebp */
  push32((uint32_t)(EBP));
  /* 102e34af mov ebp, esp */
  EBP = (ESP);
  /* 102e34b1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e34b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102e34ba push esi */
  push32((uint32_t)(ESI));
  /* 102e34bb push eax */
  push32((uint32_t)(EAX));
  /* 102e34bc push dword ptr [0x102e68c0] */
  push32((uint32_t)(r32((uint32_t)(0x102e68c0))));
  /* 102e34c2 call dword ptr [0x102e5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5038))), 0x102e34c8u);
  /* 102e34c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e34cb jne 0x102e35e7 */
  if (!C.zf) goto L_102e35e7;
  /* 102e34d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e34d3 mov esi, 0x100 */
  ESI = (0x100u);
L_102e34d8:;
  /* 102e34d8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 102e34df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e34e0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e34e2 jb 0x102e34d8 */
  if (C.cf) goto L_102e34d8;
  /* 102e34e4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 102e34e7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102e34ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e34f0 je 0x102e3529 */
  if (C.zf) goto L_102e3529;
  /* 102e34f2 push ebx */
  push32((uint32_t)(EBX));
  /* 102e34f3 push edi */
  push32((uint32_t)(EDI));
  /* 102e34f4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102e34f7:;
  /* 102e34f7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102e34fa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102e34fd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e34ff ja 0x102e351e */
  if ((!C.cf&&!C.zf)) goto L_102e351e;
  /* 102e3501 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3503 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102e350a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e350b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102e3510 mov ebx, ecx */
  EBX = (ECX);
  /* 102e3512 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e3515 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102e3517 mov ecx, ebx */
  ECX = (EBX);
  /* 102e3519 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102e351c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102e351e:;
  /* 102e351e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102e351f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102e3520 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102e3523 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e3525 jne 0x102e34f7 */
  if (!C.zf) goto L_102e34f7;
  /* 102e3527 pop edi */
  EDI = (pop32());
  /* 102e3528 pop ebx */
  EBX = (pop32());
L_102e3529:;
  /* 102e3529 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e352b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102e3531 push dword ptr [0x102e6ae4] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae4))));
  /* 102e3537 push dword ptr [0x102e68c0] */
  push32((uint32_t)(r32((uint32_t)(0x102e68c0))));
  /* 102e353d push eax */
  push32((uint32_t)(EAX));
  /* 102e353e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102e3544 push esi */
  push32((uint32_t)(ESI));
  /* 102e3545 push eax */
  push32((uint32_t)(EAX));
  /* 102e3546 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e3548 call 0x102e4622 */
  push32(0x102e354du); f_102e4622();
  /* 102e354d push 0 */
  push32((uint32_t)(0x0u));
  /* 102e354f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 102e3555 push dword ptr [0x102e68c0] */
  push32((uint32_t)(r32((uint32_t)(0x102e68c0))));
  /* 102e355b push esi */
  push32((uint32_t)(ESI));
  /* 102e355c push eax */
  push32((uint32_t)(EAX));
  /* 102e355d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102e3563 push esi */
  push32((uint32_t)(ESI));
  /* 102e3564 push eax */
  push32((uint32_t)(EAX));
  /* 102e3565 push esi */
  push32((uint32_t)(ESI));
  /* 102e3566 push dword ptr [0x102e6ae4] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae4))));
  /* 102e356c call 0x102e43d3 */
  push32(0x102e3571u); f_102e43d3();
  /* 102e3571 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e3573 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 102e3579 push dword ptr [0x102e68c0] */
  push32((uint32_t)(r32((uint32_t)(0x102e68c0))));
  /* 102e357f push esi */
  push32((uint32_t)(ESI));
  /* 102e3580 push eax */
  push32((uint32_t)(EAX));
  /* 102e3581 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102e3587 push esi */
  push32((uint32_t)(ESI));
  /* 102e3588 push eax */
  push32((uint32_t)(EAX));
  /* 102e3589 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 102e358e push dword ptr [0x102e6ae4] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae4))));
  /* 102e3594 call 0x102e43d3 */
  push32(0x102e3599u); f_102e43d3();
  /* 102e3599 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e359c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e359e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_102e35a4:;
  /* 102e35a4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102e35a7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 102e35aa je 0x102e35c2 */
  if (C.zf) goto L_102e35c2;
  /* 102e35ac or byte ptr [eax + 0x102e69e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(0x10u); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e35b3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_102e35ba:;
  /* 102e35ba mov byte ptr [eax + 0x102e68e0], dl */
  w8((uint32_t)(EAX + 0x102e68e0), (DL));
  /* 102e35c0 jmp 0x102e35de */
  goto L_102e35de;
L_102e35c2:;
  /* 102e35c2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 102e35c5 je 0x102e35d7 */
  if (C.zf) goto L_102e35d7;
  /* 102e35c7 or byte ptr [eax + 0x102e69e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(0x20u); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e35ce mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 102e35d5 jmp 0x102e35ba */
  goto L_102e35ba;
L_102e35d7:;
  /* 102e35d7 and byte ptr [eax + 0x102e68e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e68e0)))&(0x0u); w8((uint32_t)(EAX + 0x102e68e0), (_r)); fl_logic(_r,8); }
L_102e35de:;
  /* 102e35de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e35df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e35e0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102e35e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e35e3 jb 0x102e35a4 */
  if (C.cf) goto L_102e35a4;
  /* 102e35e5 jmp 0x102e3630 */
  goto L_102e3630;
L_102e35e7:;
  /* 102e35e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e35e9 mov esi, 0x100 */
  ESI = (0x100u);
L_102e35ee:;
  /* 102e35ee cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e35f1 jb 0x102e360c */
  if (C.cf) goto L_102e360c;
  /* 102e35f3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e35f6 ja 0x102e360c */
  if ((!C.cf&&!C.zf)) goto L_102e360c;
  /* 102e35f8 or byte ptr [eax + 0x102e69e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(0x10u); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e35ff mov cl, al */
  CL = (AL);
  /* 102e3601 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102e3604:;
  /* 102e3604 mov byte ptr [eax + 0x102e68e0], cl */
  w8((uint32_t)(EAX + 0x102e68e0), (CL));
  /* 102e360a jmp 0x102e362b */
  goto L_102e362b;
L_102e360c:;
  /* 102e360c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e360f jb 0x102e3624 */
  if (C.cf) goto L_102e3624;
  /* 102e3611 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3614 ja 0x102e3624 */
  if ((!C.cf&&!C.zf)) goto L_102e3624;
  /* 102e3616 or byte ptr [eax + 0x102e69e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e69e1)))|(0x20u); w8((uint32_t)(EAX + 0x102e69e1), (_r)); fl_logic(_r,8); }
  /* 102e361d mov cl, al */
  CL = (AL);
  /* 102e361f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102e3622 jmp 0x102e3604 */
  goto L_102e3604;
L_102e3624:;
  /* 102e3624 and byte ptr [eax + 0x102e68e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102e68e0)))&(0x0u); w8((uint32_t)(EAX + 0x102e68e0), (_r)); fl_logic(_r,8); }
L_102e362b:;
  /* 102e362b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e362c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e362e jb 0x102e35ee */
  if (C.cf) goto L_102e35ee;
L_102e3630:;
  /* 102e3630 pop esi */
  ESI = (pop32());
  /* 102e3631 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e3632 ret  */
  ESPCHK(0x102e34aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003633 @ 0x102e3633 (28 bytes, 7 insns) */
void f_102e3633(void) {
  FTRACE(0x102e3633u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3633 cmp dword ptr [0x102e6c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102e6c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e363a jne 0x102e364e */
  if (!C.zf) goto L_102e364e;
  /* 102e363c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102e363e call 0x102e325b */
  push32(0x102e3643u); f_102e325b();
  /* 102e3643 pop ecx */
  ECX = (pop32());
  /* 102e3644 mov dword ptr [0x102e6c08], 1 */
  w32((uint32_t)(0x102e6c08), (0x1u));
L_102e364e:;
  /* 102e364e ret  */
  ESPCHK(0x102e3633u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x102e3650 (664 bytes, 261 insns) [15 switch table(s)] */
void f_102e3650(void) {
  FTRACE(0x102e3650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3650 push ebp */
  push32((uint32_t)(EBP));
  /* 102e3651 mov ebp, esp */
  EBP = (ESP);
  /* 102e3653 push edi */
  push32((uint32_t)(EDI));
  /* 102e3654 push esi */
  push32((uint32_t)(ESI));
  /* 102e3655 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102e3658 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102e365b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102e365e mov eax, ecx */
  EAX = (ECX);
  /* 102e3660 mov edx, ecx */
  EDX = (ECX);
  /* 102e3662 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3664 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3666 jbe 0x102e3670 */
  if ((C.cf||C.zf)) goto L_102e3670;
  /* 102e3668 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e366a jb 0x102e37e8 */
  if (C.cf) goto L_102e37e8;
L_102e3670:;
  /* 102e3670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102e3676 jne 0x102e368c */
  if (!C.zf) goto L_102e368c;
  /* 102e3678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e367b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102e367e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3681 jb 0x102e36ac */
  if (C.cf) goto L_102e36ac;
  /* 102e3683 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e3685 jmp dword ptr [edx*4 + 0x102e3798] */
  switch (EDX) {
    case 0: goto L_102e37a8;
    case 1: goto L_102e37b0;
    case 2: goto L_102e37bc;
    case 3: goto L_102e37d0;
    default: x86_unimpl("switch@0x102e3685 out of table"); return;
  }
L_102e368c:;
  /* 102e368c mov eax, edi */
  EAX = (EDI);
  /* 102e368e mov edx, 3 */
  EDX = (0x3u);
  /* 102e3693 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3696 jb 0x102e36a4 */
  if (C.cf) goto L_102e36a4;
  /* 102e3698 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102e369b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e369d jmp dword ptr [eax*4 + 0x102e36b0] */
  switch (EAX) {
    case 1: goto L_102e36c0;
    case 2: goto L_102e36ec;
    case 3: goto L_102e3710;
    default: x86_unimpl("switch@0x102e369d out of table"); return;
  }
L_102e36a4:;
  /* 102e36a4 jmp dword ptr [ecx*4 + 0x102e37a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102e37a8)))); return;
  /* 102e36ab nop  */
  /* nop */
L_102e36ac:;
  /* 102e36ac jmp dword ptr [ecx*4 + 0x102e372c] */
  switch (ECX) {
    case 0: goto L_102e378f;
    case 1: goto L_102e377c;
    case 2: goto L_102e3774;
    case 3: goto L_102e376c;
    case 4: goto L_102e3764;
    case 5: goto L_102e375c;
    case 6: goto L_102e3754;
    case 7: goto L_102e374c;
    default: x86_unimpl("switch@0x102e36ac out of table"); return;
  }
  /* 102e36b3 nop  */
  /* nop */
L_102e36c0:;
  /* 102e36c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e36c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e36c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e36c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e36c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e36cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e36cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e36d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e36d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e36d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e36db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e36de jb 0x102e36ac */
  if (C.cf) goto L_102e36ac;
  /* 102e36e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e36e2 jmp dword ptr [edx*4 + 0x102e3798] */
  switch (EDX) {
    case 0: goto L_102e37a8;
    case 1: goto L_102e37b0;
    case 2: goto L_102e37bc;
    case 3: goto L_102e37d0;
    default: x86_unimpl("switch@0x102e36e2 out of table"); return;
  }
  /* 102e36e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e36ec:;
  /* 102e36ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e36ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e36f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e36f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e36f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e36f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e36fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e36fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3701 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3704 jb 0x102e36ac */
  if (C.cf) goto L_102e36ac;
  /* 102e3706 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e3708 jmp dword ptr [edx*4 + 0x102e3798] */
  switch (EDX) {
    case 0: goto L_102e37a8;
    case 1: goto L_102e37b0;
    case 2: goto L_102e37bc;
    case 3: goto L_102e37d0;
    default: x86_unimpl("switch@0x102e3708 out of table"); return;
  }
  /* 102e370f nop  */
  /* nop */
L_102e3710:;
  /* 102e3710 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e3712 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e3714 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e3716 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e3717 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e371a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e371b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e371e jb 0x102e36ac */
  if (C.cf) goto L_102e36ac;
  /* 102e3720 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e3722 jmp dword ptr [edx*4 + 0x102e3798] */
  switch (EDX) {
    case 0: goto L_102e37a8;
    case 1: goto L_102e37b0;
    case 2: goto L_102e37bc;
    case 3: goto L_102e37d0;
    default: x86_unimpl("switch@0x102e3722 out of table"); return;
  }
  /* 102e3729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e374c:;
  /* 102e374c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102e3750 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102e3754:;
  /* 102e3754 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102e3758 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102e375c:;
  /* 102e375c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102e3760 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102e3764:;
  /* 102e3764 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102e3768 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102e376c:;
  /* 102e376c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102e3770 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102e3774:;
  /* 102e3774 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102e3778 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102e377c:;
  /* 102e377c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102e3780 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102e3784 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102e378b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e378d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102e378f:;
  /* 102e378f jmp dword ptr [edx*4 + 0x102e3798] */
  switch (EDX) {
    case 0: goto L_102e37a8;
    case 1: goto L_102e37b0;
    case 2: goto L_102e37bc;
    case 3: goto L_102e37d0;
    default: x86_unimpl("switch@0x102e378f out of table"); return;
  }
  /* 102e3796 mov edi, edi */
  EDI = (EDI);
L_102e37a8:;
  /* 102e37a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e37ab pop esi */
  ESI = (pop32());
  /* 102e37ac pop edi */
  EDI = (pop32());
  /* 102e37ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e37ae ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e37af nop  */
  /* nop */
L_102e37b0:;
  /* 102e37b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e37b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e37b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e37b7 pop esi */
  ESI = (pop32());
  /* 102e37b8 pop edi */
  EDI = (pop32());
  /* 102e37b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e37ba ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e37bb nop  */
  /* nop */
L_102e37bc:;
  /* 102e37bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e37be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e37c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e37c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e37c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e37c9 pop esi */
  ESI = (pop32());
  /* 102e37ca pop edi */
  EDI = (pop32());
  /* 102e37cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e37cc ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e37cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e37d0:;
  /* 102e37d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e37d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e37d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e37d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e37da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e37dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e37e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e37e3 pop esi */
  ESI = (pop32());
  /* 102e37e4 pop edi */
  EDI = (pop32());
  /* 102e37e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e37e6 ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e37e7 nop  */
  /* nop */
L_102e37e8:;
  /* 102e37e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102e37ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102e37f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102e37f6 jne 0x102e381c */
  if (!C.zf) goto L_102e381c;
  /* 102e37f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e37fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102e37fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3801 jb 0x102e3810 */
  if (C.cf) goto L_102e3810;
  /* 102e3803 std  */
  C.df=1;
  /* 102e3804 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e3806 cld  */
  C.df=0;
  /* 102e3807 jmp dword ptr [edx*4 + 0x102e3930] */
  switch (EDX) {
    case 0: goto L_102e3940;
    case 1: goto L_102e3948;
    case 2: goto L_102e3958;
    case 3: goto L_102e396c;
    default: x86_unimpl("switch@0x102e3807 out of table"); return;
  }
  /* 102e380e mov edi, edi */
  EDI = (EDI);
L_102e3810:;
  /* 102e3810 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102e3812 jmp dword ptr [ecx*4 + 0x102e38e0] */
  switch (ECX) {
    case 0: goto L_102e3927;
    default: x86_unimpl("switch@0x102e3812 out of table"); return;
  }
  /* 102e3819 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e381c:;
  /* 102e381c mov eax, edi */
  EAX = (EDI);
  /* 102e381e mov edx, 3 */
  EDX = (0x3u);
  /* 102e3823 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3826 jb 0x102e3834 */
  if (C.cf) goto L_102e3834;
  /* 102e3828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102e382b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e382d jmp dword ptr [eax*4 + 0x102e3838] */
  switch (EAX) {
    case 1: goto L_102e3848;
    case 2: goto L_102e3868;
    case 3: goto L_102e3890;
    default: x86_unimpl("switch@0x102e382d out of table"); return;
  }
L_102e3834:;
  /* 102e3834 jmp dword ptr [ecx*4 + 0x102e3930] */
  switch (ECX) {
    case 0: goto L_102e3940;
    case 1: goto L_102e3948;
    case 2: goto L_102e3958;
    case 3: goto L_102e396c;
    default: x86_unimpl("switch@0x102e3834 out of table"); return;
  }
  /* 102e383b nop  */
  /* nop */
L_102e3848:;
  /* 102e3848 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e384b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e384d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e3850 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102e3851 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e3854 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102e3855 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3858 jb 0x102e3810 */
  if (C.cf) goto L_102e3810;
  /* 102e385a std  */
  C.df=1;
  /* 102e385b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e385d cld  */
  C.df=0;
  /* 102e385e jmp dword ptr [edx*4 + 0x102e3930] */
  switch (EDX) {
    case 0: goto L_102e3940;
    case 1: goto L_102e3948;
    case 2: goto L_102e3958;
    case 3: goto L_102e396c;
    default: x86_unimpl("switch@0x102e385e out of table"); return;
  }
  /* 102e3865 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e3868:;
  /* 102e3868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e386b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e386d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e3870 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e3873 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e3876 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e3879 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e387c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e387f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3882 jb 0x102e3810 */
  if (C.cf) goto L_102e3810;
  /* 102e3884 std  */
  C.df=1;
  /* 102e3885 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e3887 cld  */
  C.df=0;
  /* 102e3888 jmp dword ptr [edx*4 + 0x102e3930] */
  switch (EDX) {
    case 0: goto L_102e3940;
    case 1: goto L_102e3948;
    case 2: goto L_102e3958;
    case 3: goto L_102e396c;
    default: x86_unimpl("switch@0x102e3888 out of table"); return;
  }
  /* 102e388f nop  */
  /* nop */
L_102e3890:;
  /* 102e3890 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e3893 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e3895 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e3898 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e389b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e389e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e38a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e38a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e38a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e38aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e38ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e38b0 jb 0x102e3810 */
  if (C.cf) goto L_102e3810;
  /* 102e38b6 std  */
  C.df=1;
  /* 102e38b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e38b9 cld  */
  C.df=0;
  /* 102e38ba jmp dword ptr [edx*4 + 0x102e3930] */
  switch (EDX) {
    case 0: goto L_102e3940;
    case 1: goto L_102e3948;
    case 2: goto L_102e3958;
    case 3: goto L_102e396c;
    default: x86_unimpl("switch@0x102e38ba out of table"); return;
  }
  /* 102e38c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102e38c4 in al, 0x38 */
  x86_unimpl("in @ 0x102e38c4");
  /* 102e38c6 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102e38c9 cmp byte ptr [esi], ch */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(C.c.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e38cb adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102e38cd cmp byte ptr [esi], ch */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(C.c.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e38cf adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102e38d1 cmp byte ptr [esi], ch */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(C.c.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e38d3 adc byte ptr [ecx + edi], al */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e38d6 adc byte ptr cs:[ecx + edi], cl */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e38da adc byte ptr cs:[ecx + edi], dl */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e38e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102e38e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102e38ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102e38f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102e38f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102e38f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102e38fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102e3900 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102e3904 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102e3908 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102e390c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102e3910 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102e3914 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102e3918 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102e391c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102e3923 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3925 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102e3927:;
  /* 102e3927 jmp dword ptr [edx*4 + 0x102e3930] */
  switch (EDX) {
    case 0: goto L_102e3940;
    case 1: goto L_102e3948;
    case 2: goto L_102e3958;
    case 3: goto L_102e396c;
    default: x86_unimpl("switch@0x102e3927 out of table"); return;
  }
  /* 102e392e mov edi, edi */
  EDI = (EDI);
L_102e3940:;
  /* 102e3940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3943 pop esi */
  ESI = (pop32());
  /* 102e3944 pop edi */
  EDI = (pop32());
  /* 102e3945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e3946 ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e3947 nop  */
  /* nop */
L_102e3948:;
  /* 102e3948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e394b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e394e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3951 pop esi */
  ESI = (pop32());
  /* 102e3952 pop edi */
  EDI = (pop32());
  /* 102e3953 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e3954 ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e3955 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e3958:;
  /* 102e3958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e395b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e395e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e3961 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e3964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3967 pop esi */
  ESI = (pop32());
  /* 102e3968 pop edi */
  EDI = (pop32());
  /* 102e3969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e396a ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
  /* 102e396b nop  */
  /* nop */
L_102e396c:;
  /* 102e396c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e396f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e3972 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e3975 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e3978 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e397b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e397e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3981 pop esi */
  ESI = (pop32());
  /* 102e3982 pop edi */
  EDI = (pop32());
  /* 102e3983 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e3984 ret  */
  ESPCHK(0x102e3650u, _esp0);
  ESP += 4; return;
}

/* FUN_10003985 @ 0x102e3985 (62 bytes, 15 insns) */
void f_102e3985(void) {
  FTRACE(0x102e3985u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3985 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 102e398a push 0 */
  push32((uint32_t)(0x0u));
  /* 102e398c push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e3992 call dword ptr [0x102e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e503c))), 0x102e3998u);
  /* 102e3998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e399a mov dword ptr [0x102e68bc], eax */
  w32((uint32_t)(0x102e68bc), (EAX));
  /* 102e399f jne 0x102e39a2 */
  if (!C.zf) goto L_102e39a2;
  /* 102e39a1 ret  */
  ESPCHK(0x102e3985u, _esp0);
  ESP += 4; return;
L_102e39a2:;
  /* 102e39a2 and dword ptr [0x102e68b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102e68b4)))&(0x0u); w32((uint32_t)(0x102e68b4), (_r)); fl_logic(_r,32); }
  /* 102e39a9 and dword ptr [0x102e68b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102e68b8)))&(0x0u); w32((uint32_t)(0x102e68b8), (_r)); fl_logic(_r,32); }
  /* 102e39b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e39b2 mov dword ptr [0x102e68b0], eax */
  w32((uint32_t)(0x102e68b0), (EAX));
  /* 102e39b7 mov dword ptr [0x102e68a8], 0x10 */
  w32((uint32_t)(0x102e68a8), (0x10u));
  /* 102e39c1 pop eax */
  EAX = (pop32());
  /* 102e39c2 ret  */
  ESPCHK(0x102e3985u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c3 @ 0x102e39c3 (43 bytes, 14 insns) */
void f_102e39c3(void) {
  FTRACE(0x102e39c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e39c3 mov eax, dword ptr [0x102e68b8] */
  EAX = (r32((uint32_t)(0x102e68b8)));
  /* 102e39c8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102e39cb mov eax, dword ptr [0x102e68bc] */
  EAX = (r32((uint32_t)(0x102e68bc)));
  /* 102e39d0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_102e39d3:;
  /* 102e39d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e39d5 jae 0x102e39eb */
  if (!C.cf) goto L_102e39eb;
  /* 102e39d7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e39db sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e39de cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e39e4 jb 0x102e39ed */
  if (C.cf) goto L_102e39ed;
  /* 102e39e6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e39e9 jmp 0x102e39d3 */
  goto L_102e39d3;
L_102e39eb:;
  /* 102e39eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102e39ed:;
  /* 102e39ed ret  */
  ESPCHK(0x102e39c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100039ee @ 0x102e39ee (811 bytes, 264 insns) */
void f_102e39ee(void) {
  FTRACE(0x102e39eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e39ee push ebp */
  push32((uint32_t)(EBP));
  /* 102e39ef mov ebp, esp */
  EBP = (ESP);
  /* 102e39f1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e39f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102e39f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e39fa push ebx */
  push32((uint32_t)(EBX));
  /* 102e39fb push esi */
  push32((uint32_t)(ESI));
  /* 102e39fc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 102e39ff mov esi, edx */
  ESI = (EDX);
  /* 102e3a01 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3a04 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 102e3a07 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3a0a push edi */
  push32((uint32_t)(EDI));
  /* 102e3a0b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 102e3a0e mov ecx, esi */
  ECX = (ESI);
  /* 102e3a10 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 102e3a13 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e3a19 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102e3a1a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102e3a1d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102e3a24 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102e3a27 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102e3a2a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 102e3a2d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 102e3a30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102e3a33 jne 0x102e3ab4 */
  if (!C.zf) goto L_102e3ab4;
  /* 102e3a35 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102e3a38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102e3a3a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e3a3b pop edi */
  EDI = (pop32());
  /* 102e3a3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102e3a3f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3a41 jbe 0x102e3a46 */
  if ((C.cf||C.zf)) goto L_102e3a46;
  /* 102e3a43 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102e3a46:;
  /* 102e3a46 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102e3a4a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3a4e jne 0x102e3a98 */
  if (!C.zf) goto L_102e3a98;
  /* 102e3a50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102e3a53 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3a56 jae 0x102e3a74 */
  if (!C.cf) goto L_102e3a74;
  /* 102e3a58 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102e3a5d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102e3a5f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102e3a63 not edi */
  EDI = (~(EDI));
  /* 102e3a65 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102e3a69 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102e3a6b jne 0x102e3a98 */
  if (!C.zf) goto L_102e3a98;
  /* 102e3a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3a70 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102e3a72 jmp 0x102e3a98 */
  goto L_102e3a98;
L_102e3a74:;
  /* 102e3a74 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3a77 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102e3a7c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102e3a7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102e3a81 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102e3a85 not edi */
  EDI = (~(EDI));
  /* 102e3a87 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102e3a8e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102e3a90 jne 0x102e3a98 */
  if (!C.zf) goto L_102e3a98;
  /* 102e3a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3a95 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102e3a98:;
  /* 102e3a98 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102e3a9c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102e3aa0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102e3aa3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102e3aa7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102e3aab add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3aae mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102e3ab1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_102e3ab4:;
  /* 102e3ab4 mov edi, ebx */
  EDI = (EBX);
  /* 102e3ab6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102e3ab9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102e3aba cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3abd jbe 0x102e3ac2 */
  if ((C.cf||C.zf)) goto L_102e3ac2;
  /* 102e3abf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102e3ac1 pop edi */
  EDI = (pop32());
L_102e3ac2:;
  /* 102e3ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3ac5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102e3ac8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 102e3acb jne 0x102e3b71 */
  if (!C.zf) goto L_102e3b71;
  /* 102e3ad1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3ad4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3ad7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102e3ada push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102e3adc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102e3adf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e3ae0 pop edx */
  EDX = (pop32());
  /* 102e3ae1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3ae3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102e3ae6 jbe 0x102e3aed */
  if ((C.cf||C.zf)) goto L_102e3aed;
  /* 102e3ae8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102e3aeb mov ecx, edx */
  ECX = (EDX);
L_102e3aed:;
  /* 102e3aed add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3af0 mov edi, ebx */
  EDI = (EBX);
  /* 102e3af2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102e3af5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102e3af8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102e3af9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3afb jbe 0x102e3aff */
  if ((C.cf||C.zf)) goto L_102e3aff;
  /* 102e3afd mov edi, edx */
  EDI = (EDX);
L_102e3aff:;
  /* 102e3aff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3b01 je 0x102e3b6e */
  if (C.zf) goto L_102e3b6e;
  /* 102e3b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102e3b06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102e3b09 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3b0c jne 0x102e3b56 */
  if (!C.zf) goto L_102e3b56;
  /* 102e3b0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102e3b11 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3b14 jae 0x102e3b32 */
  if (!C.cf) goto L_102e3b32;
  /* 102e3b16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102e3b1b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102e3b1d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102e3b21 not edx */
  EDX = (~(EDX));
  /* 102e3b23 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102e3b27 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102e3b29 jne 0x102e3b56 */
  if (!C.zf) goto L_102e3b56;
  /* 102e3b2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3b2e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102e3b30 jmp 0x102e3b56 */
  goto L_102e3b56;
L_102e3b32:;
  /* 102e3b32 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3b35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102e3b3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102e3b3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102e3b3f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102e3b43 not edx */
  EDX = (~(EDX));
  /* 102e3b45 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102e3b4c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102e3b4e jne 0x102e3b56 */
  if (!C.zf) goto L_102e3b56;
  /* 102e3b50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3b53 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102e3b56:;
  /* 102e3b56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102e3b59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 102e3b5c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102e3b5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102e3b62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102e3b65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102e3b68 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 102e3b6b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_102e3b6e:;
  /* 102e3b6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_102e3b71:;
  /* 102e3b71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3b75 jne 0x102e3b80 */
  if (!C.zf) goto L_102e3b80;
  /* 102e3b77 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3b7a je 0x102e3c09 */
  if (C.zf) goto L_102e3c09;
L_102e3b80:;
  /* 102e3b80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102e3b83 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102e3b86 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102e3b89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102e3b8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102e3b8f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102e3b92 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102e3b95 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102e3b98 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3b9b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102e3b9e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3ba1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3ba4 jne 0x102e3c09 */
  if (!C.zf) goto L_102e3c09;
  /* 102e3ba6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 102e3baa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3bad mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 102e3bb0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102e3bb2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 102e3bb6 jae 0x102e3bdd */
  if (!C.cf) goto L_102e3bdd;
  /* 102e3bb8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e3bbc jne 0x102e3bcc */
  if (!C.zf) goto L_102e3bcc;
  /* 102e3bbe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102e3bc3 mov ecx, edi */
  ECX = (EDI);
  /* 102e3bc5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102e3bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3bca or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_102e3bcc:;
  /* 102e3bcc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102e3bd1 mov ecx, edi */
  ECX = (EDI);
  /* 102e3bd3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102e3bd5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 102e3bd9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102e3bdb jmp 0x102e3c06 */
  goto L_102e3c06;
L_102e3bdd:;
  /* 102e3bdd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e3be1 jne 0x102e3bf3 */
  if (!C.zf) goto L_102e3bf3;
  /* 102e3be3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102e3be6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102e3beb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102e3bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3bf0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102e3bf3:;
  /* 102e3bf3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102e3bf6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102e3bfb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102e3bfd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 102e3c04 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_102e3c06:;
  /* 102e3c06 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_102e3c09:;
  /* 102e3c09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102e3c0c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 102e3c0e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 102e3c12 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 102e3c14 jne 0x102e3d14 */
  if (!C.zf) goto L_102e3d14;
  /* 102e3c1a mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e3c21 je 0x102e3d06 */
  if (C.zf) goto L_102e3d06;
  /* 102e3c27 mov ecx, dword ptr [0x102e68ac] */
  ECX = (r32((uint32_t)(0x102e68ac)));
  /* 102e3c2d mov edi, dword ptr [0x102e5054] */
  EDI = (r32((uint32_t)(0x102e5054)));
  /* 102e3c33 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 102e3c36 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3c39 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 102e3c3e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102e3c43 push ebx */
  push32((uint32_t)(EBX));
  /* 102e3c44 push ecx */
  push32((uint32_t)(ECX));
  /* 102e3c45 call edi */
  call_ind((uint32_t)(EDI), 0x102e3c47u);
  /* 102e3c47 mov ecx, dword ptr [0x102e68ac] */
  ECX = (r32((uint32_t)(0x102e68ac)));
  /* 102e3c4d mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3c52 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102e3c57 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102e3c59 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102e3c5c mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3c61 mov ecx, dword ptr [0x102e68ac] */
  ECX = (r32((uint32_t)(0x102e68ac)));
  /* 102e3c67 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102e3c6a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102e3c72 mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3c77 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102e3c7a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 102e3c7d mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3c82 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102e3c85 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e3c89 jne 0x102e3c94 */
  if (!C.zf) goto L_102e3c94;
  /* 102e3c8b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102e3c8f mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
L_102e3c94:;
  /* 102e3c94 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3c98 jne 0x102e3d06 */
  if (!C.zf) goto L_102e3d06;
  /* 102e3c9a push ebx */
  push32((uint32_t)(EBX));
  /* 102e3c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 102e3c9d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 102e3ca0 call edi */
  call_ind((uint32_t)(EDI), 0x102e3ca2u);
  /* 102e3ca2 mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3ca7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 102e3caa push 0 */
  push32((uint32_t)(0x0u));
  /* 102e3cac push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e3cb2 call dword ptr [0x102e5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5050))), 0x102e3cb8u);
  /* 102e3cb8 mov eax, dword ptr [0x102e68b8] */
  EAX = (r32((uint32_t)(0x102e68b8)));
  /* 102e3cbd mov edx, dword ptr [0x102e68bc] */
  EDX = (r32((uint32_t)(0x102e68bc)));
  /* 102e3cc3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e3cc6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102e3cc9 mov ecx, eax */
  ECX = (EAX);
  /* 102e3ccb mov eax, dword ptr [0x102e68b4] */
  EAX = (r32((uint32_t)(0x102e68b4)));
  /* 102e3cd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3cd2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 102e3cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 102e3cd7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 102e3cda push ecx */
  push32((uint32_t)(ECX));
  /* 102e3cdb push eax */
  push32((uint32_t)(EAX));
  /* 102e3cdc call 0x102e4770 */
  push32(0x102e3ce1u); f_102e4770();
  /* 102e3ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3ce4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3ce7 dec dword ptr [0x102e68b8] */
  { uint32_t _r=(r32((uint32_t)(0x102e68b8)))-1; w32((uint32_t)(0x102e68b8), (_r)); fl_dec(_r,32); }
  /* 102e3ced cmp eax, dword ptr [0x102e68b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102e68b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3cf3 jbe 0x102e3cf8 */
  if ((C.cf||C.zf)) goto L_102e3cf8;
  /* 102e3cf5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102e3cf8:;
  /* 102e3cf8 mov ecx, dword ptr [0x102e68bc] */
  ECX = (r32((uint32_t)(0x102e68bc)));
  /* 102e3cfe mov dword ptr [0x102e68b0], ecx */
  w32((uint32_t)(0x102e68b0), (ECX));
  /* 102e3d04 jmp 0x102e3d09 */
  goto L_102e3d09;
L_102e3d06:;
  /* 102e3d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_102e3d09:;
  /* 102e3d09 mov dword ptr [0x102e68b4], eax */
  w32((uint32_t)(0x102e68b4), (EAX));
  /* 102e3d0e mov dword ptr [0x102e68ac], esi */
  w32((uint32_t)(0x102e68ac), (ESI));
L_102e3d14:;
  /* 102e3d14 pop edi */
  EDI = (pop32());
  /* 102e3d15 pop esi */
  ESI = (pop32());
  /* 102e3d16 pop ebx */
  EBX = (pop32());
  /* 102e3d17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e3d18 ret  */
  ESPCHK(0x102e39eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d19 @ 0x102e3d19 (777 bytes, 275 insns) */
void f_102e3d19(void) {
  FTRACE(0x102e3d19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e3d19 push ebp */
  push32((uint32_t)(EBP));
  /* 102e3d1a mov ebp, esp */
  EBP = (ESP);
  /* 102e3d1c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3d1f mov eax, dword ptr [0x102e68b8] */
  EAX = (r32((uint32_t)(0x102e68b8)));
  /* 102e3d24 mov edx, dword ptr [0x102e68bc] */
  EDX = (r32((uint32_t)(0x102e68bc)));
  /* 102e3d2a push ebx */
  push32((uint32_t)(EBX));
  /* 102e3d2b push esi */
  push32((uint32_t)(ESI));
  /* 102e3d2c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e3d2f push edi */
  push32((uint32_t)(EDI));
  /* 102e3d30 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102e3d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3d36 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102e3d39 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 102e3d3c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 102e3d3f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102e3d42 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102e3d45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e3d46 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3d49 jge 0x102e3d59 */
  if ((C.sf==C.of)) goto L_102e3d59;
  /* 102e3d4b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102e3d4e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102e3d50 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 102e3d54 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102e3d57 jmp 0x102e3d69 */
  goto L_102e3d69;
L_102e3d59:;
  /* 102e3d59 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3d5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e3d5f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102e3d61 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102e3d63 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102e3d66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102e3d69:;
  /* 102e3d69 mov eax, dword ptr [0x102e68b0] */
  EAX = (r32((uint32_t)(0x102e68b0)));
  /* 102e3d6e mov ebx, eax */
  EBX = (EAX);
  /* 102e3d70 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3d72 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3d75 jae 0x102e3d90 */
  if (!C.cf) goto L_102e3d90;
L_102e3d77:;
  /* 102e3d77 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102e3d7a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102e3d7c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102e3d7f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102e3d81 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102e3d83 jne 0x102e3d90 */
  if (!C.zf) goto L_102e3d90;
  /* 102e3d85 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3d88 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3d8b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3d8e jb 0x102e3d77 */
  if (C.cf) goto L_102e3d77;
L_102e3d90:;
  /* 102e3d90 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3d93 jne 0x102e3e0e */
  if (!C.zf) goto L_102e3e0e;
  /* 102e3d95 mov ebx, edx */
  EBX = (EDX);
L_102e3d97:;
  /* 102e3d97 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3d99 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3d9c jae 0x102e3db3 */
  if (!C.cf) goto L_102e3db3;
  /* 102e3d9e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102e3da1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102e3da3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102e3da6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102e3da8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102e3daa jne 0x102e3db1 */
  if (!C.zf) goto L_102e3db1;
  /* 102e3dac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3daf jmp 0x102e3d97 */
  goto L_102e3d97;
L_102e3db1:;
  /* 102e3db1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102e3db3:;
  /* 102e3db3 jne 0x102e3e0e */
  if (!C.zf) goto L_102e3e0e;
L_102e3db5:;
  /* 102e3db5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3db8 jae 0x102e3dcb */
  if (!C.cf) goto L_102e3dcb;
  /* 102e3dba cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3dbe jne 0x102e3dc8 */
  if (!C.zf) goto L_102e3dc8;
  /* 102e3dc0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3dc3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3dc6 jmp 0x102e3db5 */
  goto L_102e3db5;
L_102e3dc8:;
  /* 102e3dc8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102e3dcb:;
  /* 102e3dcb jne 0x102e3df3 */
  if (!C.zf) goto L_102e3df3;
  /* 102e3dcd mov ebx, edx */
  EBX = (EDX);
L_102e3dcf:;
  /* 102e3dcf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3dd1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3dd4 jae 0x102e3de3 */
  if (!C.cf) goto L_102e3de3;
  /* 102e3dd6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3dda jne 0x102e3de1 */
  if (!C.zf) goto L_102e3de1;
  /* 102e3ddc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3ddf jmp 0x102e3dcf */
  goto L_102e3dcf;
L_102e3de1:;
  /* 102e3de1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102e3de3:;
  /* 102e3de3 jne 0x102e3df3 */
  if (!C.zf) goto L_102e3df3;
  /* 102e3de5 call 0x102e4022 */
  push32(0x102e3deau); f_102e4022();
  /* 102e3dea mov ebx, eax */
  EBX = (EAX);
  /* 102e3dec test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102e3dee mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102e3df1 je 0x102e3e07 */
  if (C.zf) goto L_102e3e07;
L_102e3df3:;
  /* 102e3df3 push ebx */
  push32((uint32_t)(EBX));
  /* 102e3df4 call 0x102e40d3 */
  push32(0x102e3df9u); f_102e40d3();
  /* 102e3df9 pop ecx */
  ECX = (pop32());
  /* 102e3dfa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 102e3dfd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 102e3dff mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102e3e02 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3e05 jne 0x102e3e0e */
  if (!C.zf) goto L_102e3e0e;
L_102e3e07:;
  /* 102e3e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e3e09 jmp 0x102e401d */
  goto L_102e401d;
L_102e3e0e:;
  /* 102e3e0e mov dword ptr [0x102e68b0], ebx */
  w32((uint32_t)(0x102e68b0), (EBX));
  /* 102e3e14 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102e3e17 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102e3e19 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3e1c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102e3e1f je 0x102e3e35 */
  if (C.zf) goto L_102e3e35;
  /* 102e3e21 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102e3e28 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102e3e2c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102e3e2f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102e3e31 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102e3e33 jne 0x102e3e6c */
  if (!C.zf) goto L_102e3e6c;
L_102e3e35:;
  /* 102e3e35 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 102e3e3b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 102e3e3e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102e3e41 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102e3e44 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e3e48 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 102e3e4b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102e3e4d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102e3e50 jne 0x102e3e69 */
  if (!C.zf) goto L_102e3e69;
L_102e3e52:;
  /* 102e3e52 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 102e3e58 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102e3e5b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102e3e5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3e61 mov edi, esi */
  EDI = (ESI);
  /* 102e3e63 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 102e3e65 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 102e3e67 je 0x102e3e52 */
  if (C.zf) goto L_102e3e52;
L_102e3e69:;
  /* 102e3e69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_102e3e6c:;
  /* 102e3e6c mov ecx, edx */
  ECX = (EDX);
  /* 102e3e6e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e3e70 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e3e76 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102e3e7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102e3e80 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102e3e84 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102e3e86 jne 0x102e3e95 */
  if (!C.zf) goto L_102e3e95;
  /* 102e3e88 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102e3e8f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102e3e91 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102e3e94 pop edi */
  EDI = (pop32());
L_102e3e95:;
  /* 102e3e95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102e3e97 jl 0x102e3e9e */
  if ((C.sf!=C.of)) goto L_102e3e9e;
  /* 102e3e99 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102e3e9b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e3e9c jmp 0x102e3e95 */
  goto L_102e3e95;
L_102e3e9e:;
  /* 102e3e9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102e3ea1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 102e3ea5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 102e3ea7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e3eaa mov esi, ecx */
  ESI = (ECX);
  /* 102e3eac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102e3eaf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102e3eb2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102e3eb3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3eb6 jle 0x102e3ebb */
  if ((C.zf||C.sf!=C.of)) goto L_102e3ebb;
  /* 102e3eb8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102e3eba pop esi */
  ESI = (pop32());
L_102e3ebb:;
  /* 102e3ebb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3ebd je 0x102e3fd0 */
  if (C.zf) goto L_102e3fd0;
  /* 102e3ec3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3ec6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3ec9 jne 0x102e3f2c */
  if (!C.zf) goto L_102e3f2c;
  /* 102e3ecb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3ece jge 0x102e3efb */
  if ((C.sf==C.of)) goto L_102e3efb;
  /* 102e3ed0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102e3ed5 mov ecx, edi */
  ECX = (EDI);
  /* 102e3ed7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102e3ed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3edc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102e3ee0 not ebx */
  EBX = (~(EBX));
  /* 102e3ee2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102e3ee5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 102e3ee9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 102e3eed dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102e3eef jne 0x102e3f29 */
  if (!C.zf) goto L_102e3f29;
  /* 102e3ef1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3ef4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102e3ef7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102e3ef9 jmp 0x102e3f2c */
  goto L_102e3f2c;
L_102e3efb:;
  /* 102e3efb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102e3efe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102e3f03 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102e3f05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3f08 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102e3f0c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102e3f13 not ebx */
  EBX = (~(EBX));
  /* 102e3f15 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102e3f17 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102e3f19 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102e3f1c jne 0x102e3f29 */
  if (!C.zf) goto L_102e3f29;
  /* 102e3f1e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e3f21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102e3f24 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102e3f27 jmp 0x102e3f2c */
  goto L_102e3f2c;
L_102e3f29:;
  /* 102e3f29 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102e3f2c:;
  /* 102e3f2c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102e3f2f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3f32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3f36 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102e3f39 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3f3c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102e3f3f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102e3f42 je 0x102e3fdc */
  if (C.zf) goto L_102e3fdc;
  /* 102e3f48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102e3f4b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 102e3f4f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 102e3f52 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 102e3f55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102e3f58 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102e3f5b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3f5e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102e3f61 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102e3f64 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3f67 jne 0x102e3fcd */
  if (!C.zf) goto L_102e3fcd;
  /* 102e3f69 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 102e3f6d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e3f70 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 102e3f73 jge 0x102e3f9e */
  if ((C.sf==C.of)) goto L_102e3f9e;
  /* 102e3f75 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102e3f77 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e3f7b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102e3f7f jne 0x102e3f8c */
  if (!C.zf) goto L_102e3f8c;
  /* 102e3f81 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102e3f86 mov ecx, esi */
  ECX = (ESI);
  /* 102e3f88 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102e3f8a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_102e3f8c:;
  /* 102e3f8c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102e3f91 mov ecx, esi */
  ECX = (ESI);
  /* 102e3f93 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102e3f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3f98 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102e3f9c jmp 0x102e3fcd */
  goto L_102e3fcd;
L_102e3f9e:;
  /* 102e3f9e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102e3fa0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e3fa4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102e3fa8 jne 0x102e3fb7 */
  if (!C.zf) goto L_102e3fb7;
  /* 102e3faa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102e3fad mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102e3fb2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102e3fb4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_102e3fb7:;
  /* 102e3fb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e3fba lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102e3fc1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102e3fc4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102e3fc9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102e3fcb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102e3fcd:;
  /* 102e3fcd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102e3fd0:;
  /* 102e3fd0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102e3fd2 je 0x102e3fdf */
  if (C.zf) goto L_102e3fdf;
  /* 102e3fd4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102e3fd6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 102e3fda jmp 0x102e3fdf */
  goto L_102e3fdf;
L_102e3fdc:;
  /* 102e3fdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102e3fdf:;
  /* 102e3fdf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102e3fe2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e3fe4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 102e3fe7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102e3fe9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 102e3fed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102e3ff0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102e3ff2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102e3ff4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102e3ff7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102e3ff9 jne 0x102e4015 */
  if (!C.zf) goto L_102e4015;
  /* 102e3ffb cmp ebx, dword ptr [0x102e68b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102e68b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4001 jne 0x102e4015 */
  if (!C.zf) goto L_102e4015;
  /* 102e4003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e4006 cmp ecx, dword ptr [0x102e68ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102e68ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e400c jne 0x102e4015 */
  if (!C.zf) goto L_102e4015;
  /* 102e400e and dword ptr [0x102e68b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102e68b4)))&(0x0u); w32((uint32_t)(0x102e68b4), (_r)); fl_logic(_r,32); }
L_102e4015:;
  /* 102e4015 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e4018 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102e401a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102e401d:;
  /* 102e401d pop edi */
  EDI = (pop32());
  /* 102e401e pop esi */
  ESI = (pop32());
  /* 102e401f pop ebx */
  EBX = (pop32());
  /* 102e4020 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4021 ret  */
  ESPCHK(0x102e3d19u, _esp0);
  ESP += 4; return;
}

/* FUN_10004022 @ 0x102e4022 (177 bytes, 53 insns) */
void f_102e4022(void) {
  FTRACE(0x102e4022u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4022 mov eax, dword ptr [0x102e68b8] */
  EAX = (r32((uint32_t)(0x102e68b8)));
  /* 102e4027 mov ecx, dword ptr [0x102e68a8] */
  ECX = (r32((uint32_t)(0x102e68a8)));
  /* 102e402d push esi */
  push32((uint32_t)(ESI));
  /* 102e402e push edi */
  push32((uint32_t)(EDI));
  /* 102e402f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e4031 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4033 jne 0x102e4065 */
  if (!C.zf) goto L_102e4065;
  /* 102e4035 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102e4039 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102e403c push eax */
  push32((uint32_t)(EAX));
  /* 102e403d push dword ptr [0x102e68bc] */
  push32((uint32_t)(r32((uint32_t)(0x102e68bc))));
  /* 102e4043 push edi */
  push32((uint32_t)(EDI));
  /* 102e4044 push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e404a call dword ptr [0x102e5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5028))), 0x102e4050u);
  /* 102e4050 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4052 je 0x102e40b5 */
  if (C.zf) goto L_102e40b5;
  /* 102e4054 add dword ptr [0x102e68a8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102e68a8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102e68a8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102e405b mov dword ptr [0x102e68bc], eax */
  w32((uint32_t)(0x102e68bc), (EAX));
  /* 102e4060 mov eax, dword ptr [0x102e68b8] */
  EAX = (r32((uint32_t)(0x102e68b8)));
L_102e4065:;
  /* 102e4065 mov ecx, dword ptr [0x102e68bc] */
  ECX = (r32((uint32_t)(0x102e68bc)));
  /* 102e406b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 102e4070 push 8 */
  push32((uint32_t)(0x8u));
  /* 102e4072 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102e4075 push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e407b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102e407e call dword ptr [0x102e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e503c))), 0x102e4084u);
  /* 102e4084 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4086 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 102e4089 je 0x102e40b5 */
  if (C.zf) goto L_102e40b5;
  /* 102e408b push 4 */
  push32((uint32_t)(0x4u));
  /* 102e408d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 102e4092 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102e4097 push edi */
  push32((uint32_t)(EDI));
  /* 102e4098 call dword ptr [0x102e502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e502c))), 0x102e409eu);
  /* 102e409e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e40a0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102e40a3 jne 0x102e40b9 */
  if (!C.zf) goto L_102e40b9;
  /* 102e40a5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 102e40a8 push edi */
  push32((uint32_t)(EDI));
  /* 102e40a9 push dword ptr [0x102e6ae8] */
  push32((uint32_t)(r32((uint32_t)(0x102e6ae8))));
  /* 102e40af call dword ptr [0x102e5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5050))), 0x102e40b5u);
L_102e40b5:;
  /* 102e40b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e40b7 jmp 0x102e40d0 */
  goto L_102e40d0;
L_102e40b9:;
  /* 102e40b9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102e40bd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102e40bf mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 102e40c2 inc dword ptr [0x102e68b8] */
  { uint32_t _r=(r32((uint32_t)(0x102e68b8)))+1; w32((uint32_t)(0x102e68b8), (_r)); fl_inc(_r,32); }
  /* 102e40c8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 102e40cb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102e40ce mov eax, esi */
  EAX = (ESI);
L_102e40d0:;
  /* 102e40d0 pop edi */
  EDI = (pop32());
  /* 102e40d1 pop esi */
  ESI = (pop32());
  /* 102e40d2 ret  */
  ESPCHK(0x102e4022u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d3 @ 0x102e40d3 (251 bytes, 85 insns) */
void f_102e40d3(void) {
  FTRACE(0x102e40d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e40d3 push ebp */
  push32((uint32_t)(EBP));
  /* 102e40d4 mov ebp, esp */
  EBP = (ESP);
  /* 102e40d6 push ecx */
  push32((uint32_t)(ECX));
  /* 102e40d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e40da push ebx */
  push32((uint32_t)(EBX));
  /* 102e40db push esi */
  push32((uint32_t)(ESI));
  /* 102e40dc push edi */
  push32((uint32_t)(EDI));
  /* 102e40dd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102e40e0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102e40e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102e40e5:;
  /* 102e40e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e40e7 jl 0x102e40ee */
  if ((C.sf!=C.of)) goto L_102e40ee;
  /* 102e40e9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102e40eb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102e40ec jmp 0x102e40e5 */
  goto L_102e40e5;
L_102e40ee:;
  /* 102e40ee mov eax, ebx */
  EAX = (EBX);
  /* 102e40f0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102e40f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102e40f8 pop edx */
  EDX = (pop32());
  /* 102e40f9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102e4100 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102e4103:;
  /* 102e4103 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102e4106 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102e4109 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e410c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102e410d jne 0x102e4103 */
  if (!C.zf) goto L_102e4103;
  /* 102e410f mov edi, ebx */
  EDI = (EBX);
  /* 102e4111 push 4 */
  push32((uint32_t)(0x4u));
  /* 102e4113 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102e4116 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4119 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102e411e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102e4123 push edi */
  push32((uint32_t)(EDI));
  /* 102e4124 call dword ptr [0x102e502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e502c))), 0x102e412au);
  /* 102e412a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e412c jne 0x102e4136 */
  if (!C.zf) goto L_102e4136;
  /* 102e412e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e4131 jmp 0x102e41c9 */
  goto L_102e41c9;
L_102e4136:;
  /* 102e4136 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102e413c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e413e ja 0x102e417c */
  if ((!C.cf&&!C.zf)) goto L_102e417c;
  /* 102e4140 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_102e4143:;
  /* 102e4143 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 102e4147 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 102e414e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 102e4154 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 102e415b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102e415d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 102e4163 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102e4166 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 102e4170 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4175 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 102e4178 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e417a jbe 0x102e4143 */
  if ((C.cf||C.zf)) goto L_102e4143;
L_102e417c:;
  /* 102e417c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102e417f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 102e4182 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4187 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e4189 pop edi */
  EDI = (pop32());
  /* 102e418a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102e418d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 102e4190 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 102e4193 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 102e4196 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 102e4199 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102e419e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 102e41a5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 102e41a8 mov cl, al */
  CL = (AL);
  /* 102e41aa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102e41ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e41ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e41b1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 102e41b4 jne 0x102e41b9 */
  if (!C.zf) goto L_102e41b9;
  /* 102e41b6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_102e41b9:;
  /* 102e41b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102e41be mov ecx, ebx */
  ECX = (EBX);
  /* 102e41c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102e41c2 not edx */
  EDX = (~(EDX));
  /* 102e41c4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102e41c7 mov eax, ebx */
  EAX = (EBX);
L_102e41c9:;
  /* 102e41c9 pop edi */
  EDI = (pop32());
  /* 102e41ca pop esi */
  ESI = (pop32());
  /* 102e41cb pop ebx */
  EBX = (pop32());
  /* 102e41cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e41cd ret  */
  ESPCHK(0x102e40d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100041ce @ 0x102e41ce (137 bytes, 50 insns) */
void f_102e41ce(void) {
  FTRACE(0x102e41ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e41ce push ebx */
  push32((uint32_t)(EBX));
  /* 102e41cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e41d1 cmp dword ptr [0x102e686c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102e686c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e41d7 push esi */
  push32((uint32_t)(ESI));
  /* 102e41d8 push edi */
  push32((uint32_t)(EDI));
  /* 102e41d9 jne 0x102e421d */
  if (!C.zf) goto L_102e421d;
  /* 102e41db push 0x102e5460 */
  push32((uint32_t)(0x102e5460u));
  /* 102e41e0 call dword ptr [0x102e5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5020))), 0x102e41e6u);
  /* 102e41e6 mov edi, eax */
  EDI = (EAX);
  /* 102e41e8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e41ea je 0x102e4253 */
  if (C.zf) goto L_102e4253;
  /* 102e41ec mov esi, dword ptr [0x102e5024] */
  ESI = (r32((uint32_t)(0x102e5024)));
  /* 102e41f2 push 0x102e5454 */
  push32((uint32_t)(0x102e5454u));
  /* 102e41f7 push edi */
  push32((uint32_t)(EDI));
  /* 102e41f8 call esi */
  call_ind((uint32_t)(ESI), 0x102e41fau);
  /* 102e41fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e41fc mov dword ptr [0x102e686c], eax */
  w32((uint32_t)(0x102e686c), (EAX));
  /* 102e4201 je 0x102e4253 */
  if (C.zf) goto L_102e4253;
  /* 102e4203 push 0x102e5444 */
  push32((uint32_t)(0x102e5444u));
  /* 102e4208 push edi */
  push32((uint32_t)(EDI));
  /* 102e4209 call esi */
  call_ind((uint32_t)(ESI), 0x102e420bu);
  /* 102e420b push 0x102e5430 */
  push32((uint32_t)(0x102e5430u));
  /* 102e4210 push edi */
  push32((uint32_t)(EDI));
  /* 102e4211 mov dword ptr [0x102e6870], eax */
  w32((uint32_t)(0x102e6870), (EAX));
  /* 102e4216 call esi */
  call_ind((uint32_t)(ESI), 0x102e4218u);
  /* 102e4218 mov dword ptr [0x102e6874], eax */
  w32((uint32_t)(0x102e6874), (EAX));
L_102e421d:;
  /* 102e421d mov eax, dword ptr [0x102e6870] */
  EAX = (r32((uint32_t)(0x102e6870)));
  /* 102e4222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e4224 je 0x102e423c */
  if (C.zf) goto L_102e423c;
  /* 102e4226 call eax */
  call_ind((uint32_t)(EAX), 0x102e4228u);
  /* 102e4228 mov ebx, eax */
  EBX = (EAX);
  /* 102e422a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102e422c je 0x102e423c */
  if (C.zf) goto L_102e423c;
  /* 102e422e mov eax, dword ptr [0x102e6874] */
  EAX = (r32((uint32_t)(0x102e6874)));
  /* 102e4233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e4235 je 0x102e423c */
  if (C.zf) goto L_102e423c;
  /* 102e4237 push ebx */
  push32((uint32_t)(EBX));
  /* 102e4238 call eax */
  call_ind((uint32_t)(EAX), 0x102e423au);
  /* 102e423a mov ebx, eax */
  EBX = (EAX);
L_102e423c:;
  /* 102e423c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102e4240 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102e4244 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102e4248 push ebx */
  push32((uint32_t)(EBX));
  /* 102e4249 call dword ptr [0x102e686c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e686c))), 0x102e424fu);
L_102e424f:;
  /* 102e424f pop edi */
  EDI = (pop32());
  /* 102e4250 pop esi */
  ESI = (pop32());
  /* 102e4251 pop ebx */
  EBX = (pop32());
  /* 102e4252 ret  */
  ESPCHK(0x102e41ceu, _esp0);
  ESP += 4; return;
L_102e4253:;
  /* 102e4253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e4255 jmp 0x102e424f */
  goto L_102e424f;
}

/* _strncpy @ 0x102e4260 (254 bytes, 109 insns) */
void f_102e4260(void) {
  FTRACE(0x102e4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4260 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102e4264 push edi */
  push32((uint32_t)(EDI));
  /* 102e4265 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102e4267 je 0x102e42e3 */
  if (C.zf) goto L_102e42e3;
  /* 102e4269 push esi */
  push32((uint32_t)(ESI));
  /* 102e426a push ebx */
  push32((uint32_t)(EBX));
  /* 102e426b mov ebx, ecx */
  EBX = (ECX);
  /* 102e426d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 102e4271 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102e4277 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 102e427b jne 0x102e4284 */
  if (!C.zf) goto L_102e4284;
  /* 102e427d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e4280 jne 0x102e42f1 */
  if (!C.zf) goto L_102e42f1;
  /* 102e4282 jmp 0x102e42a5 */
  goto L_102e42a5;
L_102e4284:;
  /* 102e4284 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e4286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e4287 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e4289 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e428a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e428b je 0x102e42b2 */
  if (C.zf) goto L_102e42b2;
  /* 102e428d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e428f je 0x102e42ba */
  if (C.zf) goto L_102e42ba;
  /* 102e4291 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102e4297 jne 0x102e4284 */
  if (!C.zf) goto L_102e4284;
  /* 102e4299 mov ebx, ecx */
  EBX = (ECX);
  /* 102e429b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e429e jne 0x102e42f1 */
  if (!C.zf) goto L_102e42f1;
L_102e42a0:;
  /* 102e42a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102e42a3 je 0x102e42b2 */
  if (C.zf) goto L_102e42b2;
L_102e42a5:;
  /* 102e42a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e42a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e42a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e42aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e42ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102e42ad je 0x102e42de */
  if (C.zf) goto L_102e42de;
  /* 102e42af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102e42b0 jne 0x102e42a5 */
  if (!C.zf) goto L_102e42a5;
L_102e42b2:;
  /* 102e42b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102e42b6 pop ebx */
  EBX = (pop32());
  /* 102e42b7 pop esi */
  ESI = (pop32());
  /* 102e42b8 pop edi */
  EDI = (pop32());
  /* 102e42b9 ret  */
  ESPCHK(0x102e4260u, _esp0);
  ESP += 4; return;
L_102e42ba:;
  /* 102e42ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102e42c0 je 0x102e42d4 */
  if (C.zf) goto L_102e42d4;
L_102e42c2:;
  /* 102e42c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e42c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e42c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e42c6 je 0x102e4356 */
  if (C.zf) goto L_102e4356;
  /* 102e42cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102e42d2 jne 0x102e42c2 */
  if (!C.zf) goto L_102e42c2;
L_102e42d4:;
  /* 102e42d4 mov ebx, ecx */
  EBX = (ECX);
  /* 102e42d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e42d9 jne 0x102e4347 */
  if (!C.zf) goto L_102e4347;
L_102e42db:;
  /* 102e42db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e42dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102e42de:;
  /* 102e42de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102e42df jne 0x102e42db */
  if (!C.zf) goto L_102e42db;
  /* 102e42e1 pop ebx */
  EBX = (pop32());
  /* 102e42e2 pop esi */
  ESI = (pop32());
L_102e42e3:;
  /* 102e42e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e42e7 pop edi */
  EDI = (pop32());
  /* 102e42e8 ret  */
  ESPCHK(0x102e4260u, _esp0);
  ESP += 4; return;
L_102e42e9:;
  /* 102e42e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102e42eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e42ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e42ef je 0x102e42a0 */
  if (C.zf) goto L_102e42a0;
L_102e42f1:;
  /* 102e42f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102e42f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102e42f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e42fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102e42fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102e42ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102e4301 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4304 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102e4309 je 0x102e42e9 */
  if (C.zf) goto L_102e42e9;
  /* 102e430b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102e430d je 0x102e433b */
  if (C.zf) goto L_102e433b;
  /* 102e430f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102e4311 je 0x102e4331 */
  if (C.zf) goto L_102e4331;
  /* 102e4313 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102e4319 je 0x102e4327 */
  if (C.zf) goto L_102e4327;
  /* 102e431b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102e4321 jne 0x102e42e9 */
  if (!C.zf) goto L_102e42e9;
  /* 102e4323 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102e4325 jmp 0x102e433f */
  goto L_102e433f;
L_102e4327:;
  /* 102e4327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102e432d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102e432f jmp 0x102e433f */
  goto L_102e433f;
L_102e4331:;
  /* 102e4331 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102e4337 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102e4339 jmp 0x102e433f */
  goto L_102e433f;
L_102e433b:;
  /* 102e433b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102e433d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102e433f:;
  /* 102e433f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e4344 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e4345 je 0x102e4351 */
  if (C.zf) goto L_102e4351;
L_102e4347:;
  /* 102e4347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102e4349:;
  /* 102e4349 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102e434b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e434e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e434f jne 0x102e4349 */
  if (!C.zf) goto L_102e4349;
L_102e4351:;
  /* 102e4351 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102e4354 jne 0x102e42db */
  if (!C.zf) goto L_102e42db;
L_102e4356:;
  /* 102e4356 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102e435a pop ebx */
  EBX = (pop32());
  /* 102e435b pop esi */
  ESI = (pop32());
  /* 102e435c pop edi */
  EDI = (pop32());
  /* 102e435d ret  */
  ESPCHK(0x102e4260u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102e4360 (88 bytes, 40 insns) */
void f_102e4360(void) {
  FTRACE(0x102e4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4360 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102e4364 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e4368 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102e436a je 0x102e43b3 */
  if (C.zf) goto L_102e43b3;
  /* 102e436c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e436e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102e4372 push edi */
  push32((uint32_t)(EDI));
  /* 102e4373 mov edi, ecx */
  EDI = (ECX);
  /* 102e4375 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4378 jb 0x102e43a7 */
  if (C.cf) goto L_102e43a7;
  /* 102e437a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102e437c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102e437f je 0x102e4389 */
  if (C.zf) goto L_102e4389;
  /* 102e4381 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102e4383:;
  /* 102e4383 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e4385 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e4386 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e4387 jne 0x102e4383 */
  if (!C.zf) goto L_102e4383;
L_102e4389:;
  /* 102e4389 mov ecx, eax */
  ECX = (EAX);
  /* 102e438b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102e438e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4390 mov ecx, eax */
  ECX = (EAX);
  /* 102e4392 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102e4395 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4397 mov ecx, edx */
  ECX = (EDX);
  /* 102e4399 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102e439c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e439f je 0x102e43a7 */
  if (C.zf) goto L_102e43a7;
  /* 102e43a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102e43a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102e43a5 je 0x102e43ad */
  if (C.zf) goto L_102e43ad;
L_102e43a7:;
  /* 102e43a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e43a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e43aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102e43ab jne 0x102e43a7 */
  if (!C.zf) goto L_102e43a7;
L_102e43ad:;
  /* 102e43ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e43b1 pop edi */
  EDI = (pop32());
  /* 102e43b2 ret  */
  ESPCHK(0x102e4360u, _esp0);
  ESP += 4; return;
L_102e43b3:;
  /* 102e43b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e43b7 ret  */
  ESPCHK(0x102e4360u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b8 @ 0x102e43b8 (27 bytes, 13 insns) */
void f_102e43b8(void) {
  FTRACE(0x102e43b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e43b8 mov eax, dword ptr [0x102e6878] */
  EAX = (r32((uint32_t)(0x102e6878)));
  /* 102e43bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e43bf je 0x102e43d0 */
  if (C.zf) goto L_102e43d0;
  /* 102e43c1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102e43c5 call eax */
  call_ind((uint32_t)(EAX), 0x102e43c7u);
  /* 102e43c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e43c9 pop ecx */
  ECX = (pop32());
  /* 102e43ca je 0x102e43d0 */
  if (C.zf) goto L_102e43d0;
  /* 102e43cc push 1 */
  push32((uint32_t)(0x1u));
  /* 102e43ce pop eax */
  EAX = (pop32());
  /* 102e43cf ret  */
  ESPCHK(0x102e43b8u, _esp0);
  ESP += 4; return;
L_102e43d0:;
  /* 102e43d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102e43d2 ret  */
  ESPCHK(0x102e43b8u, _esp0);
  ESP += 4; return;
}

/* FUN_100043d3 @ 0x102e43d3 (511 bytes, 193 insns) */
void f_102e43d3(void) {
  FTRACE(0x102e43d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e43d3 push ebp */
  push32((uint32_t)(EBP));
  /* 102e43d4 mov ebp, esp */
  EBP = (ESP);
  /* 102e43d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102e43d8 push 0x102e5478 */
  push32((uint32_t)(0x102e5478u));
  /* 102e43dd push 0x102e4ba0 */
  push32((uint32_t)(0x102e4ba0u));
  /* 102e43e2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102e43e8 push eax */
  push32((uint32_t)(EAX));
  /* 102e43e9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102e43f0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e43f3 push ebx */
  push32((uint32_t)(EBX));
  /* 102e43f4 push esi */
  push32((uint32_t)(ESI));
  /* 102e43f5 push edi */
  push32((uint32_t)(EDI));
  /* 102e43f6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102e43f9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e43fb cmp dword ptr [0x102e68a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x102e68a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4401 jne 0x102e4449 */
  if (!C.zf) goto L_102e4449;
  /* 102e4403 push edi */
  push32((uint32_t)(EDI));
  /* 102e4404 push edi */
  push32((uint32_t)(EDI));
  /* 102e4405 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e4407 pop ebx */
  EBX = (pop32());
  /* 102e4408 push ebx */
  push32((uint32_t)(EBX));
  /* 102e4409 push 0x102e5470 */
  push32((uint32_t)(0x102e5470u));
  /* 102e440e mov esi, 0x100 */
  ESI = (0x100u);
  /* 102e4413 push esi */
  push32((uint32_t)(ESI));
  /* 102e4414 push edi */
  push32((uint32_t)(EDI));
  /* 102e4415 call dword ptr [0x102e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5014))), 0x102e441bu);
  /* 102e441b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e441d je 0x102e4427 */
  if (C.zf) goto L_102e4427;
  /* 102e441f mov dword ptr [0x102e68a0], ebx */
  w32((uint32_t)(0x102e68a0), (EBX));
  /* 102e4425 jmp 0x102e4449 */
  goto L_102e4449;
L_102e4427:;
  /* 102e4427 push edi */
  push32((uint32_t)(EDI));
  /* 102e4428 push edi */
  push32((uint32_t)(EDI));
  /* 102e4429 push ebx */
  push32((uint32_t)(EBX));
  /* 102e442a push 0x102e546c */
  push32((uint32_t)(0x102e546cu));
  /* 102e442f push esi */
  push32((uint32_t)(ESI));
  /* 102e4430 push edi */
  push32((uint32_t)(EDI));
  /* 102e4431 call dword ptr [0x102e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5018))), 0x102e4437u);
  /* 102e4437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e4439 je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e443f mov dword ptr [0x102e68a0], 2 */
  w32((uint32_t)(0x102e68a0), (0x2u));
L_102e4449:;
  /* 102e4449 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e444c jle 0x102e445e */
  if ((C.zf||C.sf!=C.of)) goto L_102e445e;
  /* 102e444e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102e4451 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e4454 call 0x102e45f7 */
  push32(0x102e4459u); f_102e45f7();
  /* 102e4459 pop ecx */
  ECX = (pop32());
  /* 102e445a pop ecx */
  ECX = (pop32());
  /* 102e445b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_102e445e:;
  /* 102e445e mov eax, dword ptr [0x102e68a0] */
  EAX = (r32((uint32_t)(0x102e68a0)));
  /* 102e4463 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4466 jne 0x102e4485 */
  if (!C.zf) goto L_102e4485;
  /* 102e4468 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102e446b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102e446e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102e4471 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e4474 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e4477 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e447a call dword ptr [0x102e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5018))), 0x102e4480u);
  /* 102e4480 jmp 0x102e4563 */
  goto L_102e4563;
L_102e4485:;
  /* 102e4485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4488 jne 0x102e4561 */
  if (!C.zf) goto L_102e4561;
  /* 102e448e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4491 jne 0x102e449b */
  if (!C.zf) goto L_102e449b;
  /* 102e4493 mov eax, dword ptr [0x102e6898] */
  EAX = (r32((uint32_t)(0x102e6898)));
  /* 102e4498 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_102e449b:;
  /* 102e449b push edi */
  push32((uint32_t)(EDI));
  /* 102e449c push edi */
  push32((uint32_t)(EDI));
  /* 102e449d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102e44a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e44a3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 102e44a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102e44a8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e44aa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102e44ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e44ae push eax */
  push32((uint32_t)(EAX));
  /* 102e44af push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102e44b2 call dword ptr [0x102e501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e501c))), 0x102e44b8u);
  /* 102e44b8 mov ebx, eax */
  EBX = (EAX);
  /* 102e44ba mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 102e44bd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e44bf je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e44c5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102e44c8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 102e44cb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e44ce and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102e44d0 call 0x102e4c80 */
  push32(0x102e44d5u); f_102e4c80();
  /* 102e44d5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102e44d8 mov eax, esp */
  EAX = (ESP);
  /* 102e44da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102e44dd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e44e1 jmp 0x102e44f6 */
  goto L_102e44f6;
  /* 102e44e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e44e5 pop eax */
  EAX = (pop32());
  /* 102e44e6 ret  */
  ESPCHK(0x102e43d3u, _esp0);
  ESP += 4; return;
  /* 102e44e7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102e44ea xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e44ec mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 102e44ef or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e44f3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102e44f6:;
  /* 102e44f6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e44f9 je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e44fb push ebx */
  push32((uint32_t)(EBX));
  /* 102e44fc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102e44ff push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102e4502 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e4505 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e4507 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102e450a call dword ptr [0x102e501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e501c))), 0x102e4510u);
  /* 102e4510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e4512 je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e4514 push edi */
  push32((uint32_t)(EDI));
  /* 102e4515 push edi */
  push32((uint32_t)(EDI));
  /* 102e4516 push ebx */
  push32((uint32_t)(EBX));
  /* 102e4517 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102e451a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e451d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e4520 call dword ptr [0x102e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5014))), 0x102e4526u);
  /* 102e4526 mov esi, eax */
  ESI = (EAX);
  /* 102e4528 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102e452b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e452d je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e452f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102e4533 je 0x102e4575 */
  if (C.zf) goto L_102e4575;
  /* 102e4535 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4538 je 0x102e45f0 */
  if (C.zf) goto L_102e45f0;
  /* 102e453e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4541 jg 0x102e4561 */
  if ((!C.zf&&C.sf==C.of)) goto L_102e4561;
  /* 102e4543 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102e4546 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102e4549 push ebx */
  push32((uint32_t)(EBX));
  /* 102e454a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102e454d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e4550 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e4553 call dword ptr [0x102e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5014))), 0x102e4559u);
  /* 102e4559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e455b jne 0x102e45f0 */
  if (!C.zf) goto L_102e45f0;
L_102e4561:;
  /* 102e4561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102e4563:;
  /* 102e4563 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 102e4566 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102e4569 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102e4570 pop edi */
  EDI = (pop32());
  /* 102e4571 pop esi */
  ESI = (pop32());
  /* 102e4572 pop ebx */
  EBX = (pop32());
  /* 102e4573 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4574 ret  */
  ESPCHK(0x102e43d3u, _esp0);
  ESP += 4; return;
L_102e4575:;
  /* 102e4575 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102e457c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 102e457f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4582 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102e4584 call 0x102e4c80 */
  push32(0x102e4589u); f_102e4c80();
  /* 102e4589 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102e458c mov ebx, esp */
  EBX = (ESP);
  /* 102e458e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 102e4591 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e4595 jmp 0x102e45a9 */
  goto L_102e45a9;
  /* 102e4597 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e4599 pop eax */
  EAX = (pop32());
  /* 102e459a ret  */
  ESPCHK(0x102e43d3u, _esp0);
  ESP += 4; return;
  /* 102e459b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102e459e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102e45a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e45a2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e45a6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_102e45a9:;
  /* 102e45a9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e45ab je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e45ad push esi */
  push32((uint32_t)(ESI));
  /* 102e45ae push ebx */
  push32((uint32_t)(EBX));
  /* 102e45af push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 102e45b2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102e45b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e45b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e45bb call dword ptr [0x102e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5014))), 0x102e45c1u);
  /* 102e45c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e45c3 je 0x102e4561 */
  if (C.zf) goto L_102e4561;
  /* 102e45c5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e45c8 push edi */
  push32((uint32_t)(EDI));
  /* 102e45c9 push edi */
  push32((uint32_t)(EDI));
  /* 102e45ca jne 0x102e45d0 */
  if (!C.zf) goto L_102e45d0;
  /* 102e45cc push edi */
  push32((uint32_t)(EDI));
  /* 102e45cd push edi */
  push32((uint32_t)(EDI));
  /* 102e45ce jmp 0x102e45d6 */
  goto L_102e45d6;
L_102e45d0:;
  /* 102e45d0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102e45d3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_102e45d6:;
  /* 102e45d6 push esi */
  push32((uint32_t)(ESI));
  /* 102e45d7 push ebx */
  push32((uint32_t)(EBX));
  /* 102e45d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102e45dd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102e45e0 call dword ptr [0x102e5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5068))), 0x102e45e6u);
  /* 102e45e6 mov esi, eax */
  ESI = (EAX);
  /* 102e45e8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e45ea je 0x102e4561 */
  if (C.zf) goto L_102e4561;
L_102e45f0:;
  /* 102e45f0 mov eax, esi */
  EAX = (ESI);
  /* 102e45f2 jmp 0x102e4563 */
  goto L_102e4563;
}

/* FUN_100045f7 @ 0x102e45f7 (43 bytes, 20 insns) */
void f_102e45f7(void) {
  FTRACE(0x102e45f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e45f7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e45fb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102e45ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102e4601 push esi */
  push32((uint32_t)(ESI));
  /* 102e4602 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102e4605 je 0x102e4614 */
  if (C.zf) goto L_102e4614;
L_102e4607:;
  /* 102e4607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e460a je 0x102e4614 */
  if (C.zf) goto L_102e4614;
  /* 102e460c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e460d mov esi, ecx */
  ESI = (ECX);
  /* 102e460f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102e4610 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102e4612 jne 0x102e4607 */
  if (!C.zf) goto L_102e4607;
L_102e4614:;
  /* 102e4614 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102e4617 pop esi */
  ESI = (pop32());
  /* 102e4618 jne 0x102e461f */
  if (!C.zf) goto L_102e461f;
  /* 102e461a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e461e ret  */
  ESPCHK(0x102e45f7u, _esp0);
  ESP += 4; return;
L_102e461f:;
  /* 102e461f mov eax, edx */
  EAX = (EDX);
  /* 102e4621 ret  */
  ESPCHK(0x102e45f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004622 @ 0x102e4622 (318 bytes, 123 insns) */
void f_102e4622(void) {
  FTRACE(0x102e4622u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4622 push ebp */
  push32((uint32_t)(EBP));
  /* 102e4623 mov ebp, esp */
  EBP = (ESP);
  /* 102e4625 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102e4627 push 0x102e5490 */
  push32((uint32_t)(0x102e5490u));
  /* 102e462c push 0x102e4ba0 */
  push32((uint32_t)(0x102e4ba0u));
  /* 102e4631 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102e4637 push eax */
  push32((uint32_t)(EAX));
  /* 102e4638 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102e463f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e4642 push ebx */
  push32((uint32_t)(EBX));
  /* 102e4643 push esi */
  push32((uint32_t)(ESI));
  /* 102e4644 push edi */
  push32((uint32_t)(EDI));
  /* 102e4645 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102e4648 mov eax, dword ptr [0x102e68a4] */
  EAX = (r32((uint32_t)(0x102e68a4)));
  /* 102e464d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e464f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4651 jne 0x102e4691 */
  if (!C.zf) goto L_102e4691;
  /* 102e4653 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102e4656 push eax */
  push32((uint32_t)(EAX));
  /* 102e4657 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e4659 pop esi */
  ESI = (pop32());
  /* 102e465a push esi */
  push32((uint32_t)(ESI));
  /* 102e465b push 0x102e5470 */
  push32((uint32_t)(0x102e5470u));
  /* 102e4660 push esi */
  push32((uint32_t)(ESI));
  /* 102e4661 call dword ptr [0x102e500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e500c))), 0x102e4667u);
  /* 102e4667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e4669 je 0x102e466f */
  if (C.zf) goto L_102e466f;
  /* 102e466b mov eax, esi */
  EAX = (ESI);
  /* 102e466d jmp 0x102e468c */
  goto L_102e468c;
L_102e466f:;
  /* 102e466f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102e4672 push eax */
  push32((uint32_t)(EAX));
  /* 102e4673 push esi */
  push32((uint32_t)(ESI));
  /* 102e4674 push 0x102e546c */
  push32((uint32_t)(0x102e546cu));
  /* 102e4679 push esi */
  push32((uint32_t)(ESI));
  /* 102e467a push ebx */
  push32((uint32_t)(EBX));
  /* 102e467b call dword ptr [0x102e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5010))), 0x102e4681u);
  /* 102e4681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102e4683 je 0x102e4757 */
  if (C.zf) goto L_102e4757;
  /* 102e4689 push 2 */
  push32((uint32_t)(0x2u));
  /* 102e468b pop eax */
  EAX = (pop32());
L_102e468c:;
  /* 102e468c mov dword ptr [0x102e68a4], eax */
  w32((uint32_t)(0x102e68a4), (EAX));
L_102e4691:;
  /* 102e4691 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4694 jne 0x102e46ba */
  if (!C.zf) goto L_102e46ba;
  /* 102e4696 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102e4699 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e469b jne 0x102e46a2 */
  if (!C.zf) goto L_102e46a2;
  /* 102e469d mov eax, dword ptr [0x102e6888] */
  EAX = (r32((uint32_t)(0x102e6888)));
L_102e46a2:;
  /* 102e46a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102e46a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e46a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e46ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e46ae push eax */
  push32((uint32_t)(EAX));
  /* 102e46af call dword ptr [0x102e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e5010))), 0x102e46b5u);
  /* 102e46b5 jmp 0x102e4759 */
  goto L_102e4759;
L_102e46ba:;
  /* 102e46ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e46bd jne 0x102e4757 */
  if (!C.zf) goto L_102e4757;
  /* 102e46c3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e46c6 jne 0x102e46d0 */
  if (!C.zf) goto L_102e46d0;
  /* 102e46c8 mov eax, dword ptr [0x102e6898] */
  EAX = (r32((uint32_t)(0x102e6898)));
  /* 102e46cd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_102e46d0:;
  /* 102e46d0 push ebx */
  push32((uint32_t)(EBX));
  /* 102e46d1 push ebx */
  push32((uint32_t)(EBX));
  /* 102e46d2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e46d5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e46d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 102e46db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102e46dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e46df and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102e46e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102e46e3 push eax */
  push32((uint32_t)(EAX));
  /* 102e46e4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102e46e7 call dword ptr [0x102e501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e501c))), 0x102e46edu);
  /* 102e46ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102e46f0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e46f2 je 0x102e4757 */
  if (C.zf) goto L_102e4757;
  /* 102e46f4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 102e46f7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 102e46fa mov eax, edi */
  EAX = (EDI);
  /* 102e46fc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e46ff and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102e4701 call 0x102e4c80 */
  push32(0x102e4706u); f_102e4c80();
  /* 102e4706 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102e4709 mov esi, esp */
  ESI = (ESP);
  /* 102e470b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 102e470e push edi */
  push32((uint32_t)(EDI));
  /* 102e470f push ebx */
  push32((uint32_t)(EBX));
  /* 102e4710 push esi */
  push32((uint32_t)(ESI));
  /* 102e4711 call 0x102e4360 */
  push32(0x102e4716u); f_102e4360();
  /* 102e4716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4719 jmp 0x102e4726 */
  goto L_102e4726;
  /* 102e471b push 1 */
  push32((uint32_t)(0x1u));
  /* 102e471d pop eax */
  EAX = (pop32());
  /* 102e471e ret  */
  ESPCHK(0x102e4622u, _esp0);
  ESP += 4; return;
  /* 102e471f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102e4722 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102e4724 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102e4726:;
  /* 102e4726 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102e472a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e472c je 0x102e4757 */
  if (C.zf) goto L_102e4757;
  /* 102e472e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 102e4731 push esi */
  push32((uint32_t)(ESI));
  /* 102e4732 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102e4735 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102e4738 push 1 */
  push32((uint32_t)(0x1u));
  /* 102e473a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102e473d call dword ptr [0x102e501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e501c))), 0x102e4743u);
  /* 102e4743 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4745 je 0x102e4757 */
  if (C.zf) goto L_102e4757;
  /* 102e4747 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102e474a push eax */
  push32((uint32_t)(EAX));
  /* 102e474b push esi */
  push32((uint32_t)(ESI));
  /* 102e474c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e474f call dword ptr [0x102e500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102e500c))), 0x102e4755u);
  /* 102e4755 jmp 0x102e4759 */
  goto L_102e4759;
L_102e4757:;
  /* 102e4757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102e4759:;
  /* 102e4759 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 102e475c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102e475f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102e4766 pop edi */
  EDI = (pop32());
  /* 102e4767 pop esi */
  ESI = (pop32());
  /* 102e4768 pop ebx */
  EBX = (pop32());
  /* 102e4769 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e476a ret  */
  ESPCHK(0x102e4622u, _esp0);
  ESP += 4; return;
}

/* FUN_10004770 @ 0x102e4770 (664 bytes, 258 insns) [15 switch table(s)] */
void f_102e4770(void) {
  FTRACE(0x102e4770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4770 push ebp */
  push32((uint32_t)(EBP));
  /* 102e4771 mov ebp, esp */
  EBP = (ESP);
  /* 102e4773 push edi */
  push32((uint32_t)(EDI));
  /* 102e4774 push esi */
  push32((uint32_t)(ESI));
  /* 102e4775 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102e4778 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102e477b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102e477e mov eax, ecx */
  EAX = (ECX);
  /* 102e4780 mov edx, ecx */
  EDX = (ECX);
  /* 102e4782 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4784 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4786 jbe 0x102e4790 */
  if ((C.cf||C.zf)) goto L_102e4790;
  /* 102e4788 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e478a jb 0x102e4908 */
  if (C.cf) goto L_102e4908;
L_102e4790:;
  /* 102e4790 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102e4796 jne 0x102e47ac */
  if (!C.zf) goto L_102e47ac;
  /* 102e4798 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e479b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102e479e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e47a1 jb 0x102e47cc */
  if (C.cf) goto L_102e47cc;
  /* 102e47a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e47a5 jmp dword ptr [edx*4 + 0x102e48b8] */
  switch (EDX) {
    case 0: goto L_102e48c8;
    case 1: goto L_102e48d0;
    case 2: goto L_102e48dc;
    case 3: goto L_102e48f0;
    default: x86_unimpl("switch@0x102e47a5 out of table"); return;
  }
L_102e47ac:;
  /* 102e47ac mov eax, edi */
  EAX = (EDI);
  /* 102e47ae mov edx, 3 */
  EDX = (0x3u);
  /* 102e47b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e47b6 jb 0x102e47c4 */
  if (C.cf) goto L_102e47c4;
  /* 102e47b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102e47bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102e47bd jmp dword ptr [eax*4 + 0x102e47d0] */
  switch (EAX) {
    case 1: goto L_102e47e0;
    case 2: goto L_102e480c;
    case 3: goto L_102e4830;
    default: x86_unimpl("switch@0x102e47bd out of table"); return;
  }
L_102e47c4:;
  /* 102e47c4 jmp dword ptr [ecx*4 + 0x102e48c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102e48c8)))); return;
  /* 102e47cb nop  */
  /* nop */
L_102e47cc:;
  /* 102e47cc jmp dword ptr [ecx*4 + 0x102e484c] */
  switch (ECX) {
    case 0: goto L_102e48af;
    case 1: goto L_102e489c;
    case 2: goto L_102e4894;
    case 3: goto L_102e488c;
    case 4: goto L_102e4884;
    case 5: goto L_102e487c;
    case 6: goto L_102e4874;
    case 7: goto L_102e486c;
    default: x86_unimpl("switch@0x102e47cc out of table"); return;
  }
  /* 102e47d3 nop  */
  /* nop */
L_102e47e0:;
  /* 102e47e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e47e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e47e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e47e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e47e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e47ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e47ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e47f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e47f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e47f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e47fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e47fe jb 0x102e47cc */
  if (C.cf) goto L_102e47cc;
  /* 102e4800 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e4802 jmp dword ptr [edx*4 + 0x102e48b8] */
  switch (EDX) {
    case 0: goto L_102e48c8;
    case 1: goto L_102e48d0;
    case 2: goto L_102e48dc;
    case 3: goto L_102e48f0;
    default: x86_unimpl("switch@0x102e4802 out of table"); return;
  }
  /* 102e4809 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e480c:;
  /* 102e480c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e480e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e4810 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e4812 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e4815 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e4818 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e481b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e481e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4821 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4824 jb 0x102e47cc */
  if (C.cf) goto L_102e47cc;
  /* 102e4826 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e4828 jmp dword ptr [edx*4 + 0x102e48b8] */
  switch (EDX) {
    case 0: goto L_102e48c8;
    case 1: goto L_102e48d0;
    case 2: goto L_102e48dc;
    case 3: goto L_102e48f0;
    default: x86_unimpl("switch@0x102e4828 out of table"); return;
  }
  /* 102e482f nop  */
  /* nop */
L_102e4830:;
  /* 102e4830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e4832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e4834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e4836 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102e4837 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e483a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102e483b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e483e jb 0x102e47cc */
  if (C.cf) goto L_102e47cc;
  /* 102e4840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e4842 jmp dword ptr [edx*4 + 0x102e48b8] */
  switch (EDX) {
    case 0: goto L_102e48c8;
    case 1: goto L_102e48d0;
    case 2: goto L_102e48dc;
    case 3: goto L_102e48f0;
    default: x86_unimpl("switch@0x102e4842 out of table"); return;
  }
  /* 102e4849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e486c:;
  /* 102e486c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102e4870 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102e4874:;
  /* 102e4874 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102e4878 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102e487c:;
  /* 102e487c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102e4880 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102e4884:;
  /* 102e4884 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102e4888 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102e488c:;
  /* 102e488c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102e4890 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102e4894:;
  /* 102e4894 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102e4898 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102e489c:;
  /* 102e489c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102e48a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102e48a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102e48ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e48ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102e48af:;
  /* 102e48af jmp dword ptr [edx*4 + 0x102e48b8] */
  switch (EDX) {
    case 0: goto L_102e48c8;
    case 1: goto L_102e48d0;
    case 2: goto L_102e48dc;
    case 3: goto L_102e48f0;
    default: x86_unimpl("switch@0x102e48af out of table"); return;
  }
  /* 102e48b6 mov edi, edi */
  EDI = (EDI);
L_102e48c8:;
  /* 102e48c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e48cb pop esi */
  ESI = (pop32());
  /* 102e48cc pop edi */
  EDI = (pop32());
  /* 102e48cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e48ce ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e48cf nop  */
  /* nop */
L_102e48d0:;
  /* 102e48d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e48d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e48d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e48d7 pop esi */
  ESI = (pop32());
  /* 102e48d8 pop edi */
  EDI = (pop32());
  /* 102e48d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e48da ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e48db nop  */
  /* nop */
L_102e48dc:;
  /* 102e48dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e48de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e48e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e48e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e48e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e48e9 pop esi */
  ESI = (pop32());
  /* 102e48ea pop edi */
  EDI = (pop32());
  /* 102e48eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e48ec ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e48ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e48f0:;
  /* 102e48f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102e48f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102e48f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e48f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e48fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e48fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e4900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e4903 pop esi */
  ESI = (pop32());
  /* 102e4904 pop edi */
  EDI = (pop32());
  /* 102e4905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4906 ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e4907 nop  */
  /* nop */
L_102e4908:;
  /* 102e4908 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102e490c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102e4910 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102e4916 jne 0x102e493c */
  if (!C.zf) goto L_102e493c;
  /* 102e4918 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e491b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102e491e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4921 jb 0x102e4930 */
  if (C.cf) goto L_102e4930;
  /* 102e4923 std  */
  C.df=1;
  /* 102e4924 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e4926 cld  */
  C.df=0;
  /* 102e4927 jmp dword ptr [edx*4 + 0x102e4a50] */
  switch (EDX) {
    case 0: goto L_102e4a60;
    case 1: goto L_102e4a68;
    case 2: goto L_102e4a78;
    case 3: goto L_102e4a8c;
    default: x86_unimpl("switch@0x102e4927 out of table"); return;
  }
  /* 102e492e mov edi, edi */
  EDI = (EDI);
L_102e4930:;
  /* 102e4930 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102e4932 jmp dword ptr [ecx*4 + 0x102e4a00] */
  switch (ECX) {
    case 0: goto L_102e4a47;
    default: x86_unimpl("switch@0x102e4932 out of table"); return;
  }
  /* 102e4939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e493c:;
  /* 102e493c mov eax, edi */
  EAX = (EDI);
  /* 102e493e mov edx, 3 */
  EDX = (0x3u);
  /* 102e4943 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4946 jb 0x102e4954 */
  if (C.cf) goto L_102e4954;
  /* 102e4948 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102e494b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e494d jmp dword ptr [eax*4 + 0x102e4958] */
  switch (EAX) {
    case 1: goto L_102e4968;
    case 2: goto L_102e4988;
    case 3: goto L_102e49b0;
    default: x86_unimpl("switch@0x102e494d out of table"); return;
  }
L_102e4954:;
  /* 102e4954 jmp dword ptr [ecx*4 + 0x102e4a50] */
  switch (ECX) {
    case 0: goto L_102e4a60;
    case 1: goto L_102e4a68;
    case 2: goto L_102e4a78;
    case 3: goto L_102e4a8c;
    default: x86_unimpl("switch@0x102e4954 out of table"); return;
  }
  /* 102e495b nop  */
  /* nop */
L_102e4968:;
  /* 102e4968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e496b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e496d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e4970 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102e4971 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e4974 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102e4975 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4978 jb 0x102e4930 */
  if (C.cf) goto L_102e4930;
  /* 102e497a std  */
  C.df=1;
  /* 102e497b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e497d cld  */
  C.df=0;
  /* 102e497e jmp dword ptr [edx*4 + 0x102e4a50] */
  switch (EDX) {
    case 0: goto L_102e4a60;
    case 1: goto L_102e4a68;
    case 2: goto L_102e4a78;
    case 3: goto L_102e4a8c;
    default: x86_unimpl("switch@0x102e497e out of table"); return;
  }
  /* 102e4985 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e4988:;
  /* 102e4988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e498b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e498d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e4990 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e4993 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e4996 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e4999 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e499c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e499f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e49a2 jb 0x102e4930 */
  if (C.cf) goto L_102e4930;
  /* 102e49a4 std  */
  C.df=1;
  /* 102e49a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e49a7 cld  */
  C.df=0;
  /* 102e49a8 jmp dword ptr [edx*4 + 0x102e4a50] */
  switch (EDX) {
    case 0: goto L_102e4a60;
    case 1: goto L_102e4a68;
    case 2: goto L_102e4a78;
    case 3: goto L_102e4a8c;
    default: x86_unimpl("switch@0x102e49a8 out of table"); return;
  }
  /* 102e49af nop  */
  /* nop */
L_102e49b0:;
  /* 102e49b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e49b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102e49b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e49b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e49bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e49be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e49c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102e49c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e49c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e49ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e49cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e49d0 jb 0x102e4930 */
  if (C.cf) goto L_102e4930;
  /* 102e49d6 std  */
  C.df=1;
  /* 102e49d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102e49d9 cld  */
  C.df=0;
  /* 102e49da jmp dword ptr [edx*4 + 0x102e4a50] */
  switch (EDX) {
    case 0: goto L_102e4a60;
    case 1: goto L_102e4a68;
    case 2: goto L_102e4a78;
    case 3: goto L_102e4a8c;
    default: x86_unimpl("switch@0x102e49da out of table"); return;
  }
  /* 102e49e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102e49e4 add al, 0x4a */
  { uint32_t _a=(AL),_b=(0x4au),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102e49e6 adc byte ptr cs:[edx + ecx*2], cl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e49ea adc byte ptr cs:[edx + ecx*2], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e49ee adc byte ptr cs:[edx + ecx*2], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e49f2 adc byte ptr cs:[edx + ecx*2], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e49f6 adc byte ptr cs:[edx + ecx*2], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e49fa adc byte ptr cs:[edx + ecx*2], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 102e4a04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102e4a08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102e4a0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102e4a10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102e4a14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102e4a18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102e4a1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102e4a20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102e4a24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102e4a28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102e4a2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102e4a30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102e4a34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102e4a38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102e4a3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102e4a43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4a45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102e4a47:;
  /* 102e4a47 jmp dword ptr [edx*4 + 0x102e4a50] */
  switch (EDX) {
    case 0: goto L_102e4a60;
    case 1: goto L_102e4a68;
    case 2: goto L_102e4a78;
    case 3: goto L_102e4a8c;
    default: x86_unimpl("switch@0x102e4a47 out of table"); return;
  }
  /* 102e4a4e mov edi, edi */
  EDI = (EDI);
L_102e4a60:;
  /* 102e4a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e4a63 pop esi */
  ESI = (pop32());
  /* 102e4a64 pop edi */
  EDI = (pop32());
  /* 102e4a65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4a66 ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e4a67 nop  */
  /* nop */
L_102e4a68:;
  /* 102e4a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e4a6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e4a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e4a71 pop esi */
  ESI = (pop32());
  /* 102e4a72 pop edi */
  EDI = (pop32());
  /* 102e4a73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4a74 ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e4a75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102e4a78:;
  /* 102e4a78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e4a7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e4a7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e4a81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e4a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e4a87 pop esi */
  ESI = (pop32());
  /* 102e4a88 pop edi */
  EDI = (pop32());
  /* 102e4a89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4a8a ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
  /* 102e4a8b nop  */
  /* nop */
L_102e4a8c:;
  /* 102e4a8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102e4a8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102e4a92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102e4a95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102e4a98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102e4a9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102e4a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e4aa1 pop esi */
  ESI = (pop32());
  /* 102e4aa2 pop edi */
  EDI = (pop32());
  /* 102e4aa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102e4aa4 ret  */
  ESPCHK(0x102e4770u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x102e4aa8 (32 bytes, 18 insns) */
void f_102e4aa8(void) {
  FTRACE(0x102e4aa8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4aa8 push ebp */
  push32((uint32_t)(EBP));
  /* 102e4aa9 mov ebp, esp */
  EBP = (ESP);
  /* 102e4aab push ebx */
  push32((uint32_t)(EBX));
  /* 102e4aac push esi */
  push32((uint32_t)(ESI));
  /* 102e4aad push edi */
  push32((uint32_t)(EDI));
  /* 102e4aae push ebp */
  push32((uint32_t)(EBP));
  /* 102e4aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 102e4ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102e4ab3 push 0x102e4ac0 */
  push32((uint32_t)(0x102e4ac0u));
  /* 102e4ab8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102e4abb call 0x102e4cb0 */
  push32(0x102e4ac0u); f_102e4cb0();
  /* 102e4ac0 pop ebp */
  EBP = (pop32());
  /* 102e4ac1 pop edi */
  EDI = (pop32());
  /* 102e4ac2 pop esi */
  ESI = (pop32());
  /* 102e4ac3 pop ebx */
  EBX = (pop32());
  /* 102e4ac4 mov esp, ebp */
  ESP = (EBP);
  /* 102e4ac6 pop ebp */
  EBP = (pop32());
  /* 102e4ac7 ret  */
  ESPCHK(0x102e4aa8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x102e4aea (104 bytes, 33 insns) */
void f_102e4aea(void) {
  FTRACE(0x102e4aeau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4aea push ebx */
  push32((uint32_t)(EBX));
  /* 102e4aeb push esi */
  push32((uint32_t)(ESI));
  /* 102e4aec push edi */
  push32((uint32_t)(EDI));
  /* 102e4aed mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102e4af1 push eax */
  push32((uint32_t)(EAX));
  /* 102e4af2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 102e4af4 push 0x102e4ac8 */
  push32((uint32_t)(0x102e4ac8u));
  /* 102e4af9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 102e4b00 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_102e4b07:;
  /* 102e4b07 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102e4b0b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 102e4b0e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 102e4b11 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4b14 je 0x102e4b44 */
  if (C.zf) goto L_102e4b44;
  /* 102e4b16 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4b1a je 0x102e4b44 */
  if (C.zf) goto L_102e4b44;
  /* 102e4b1c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 102e4b1f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 102e4b22 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 102e4b26 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 102e4b29 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4b2e jne 0x102e4b42 */
  if (!C.zf) goto L_102e4b42;
  /* 102e4b30 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102e4b35 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 102e4b39 call 0x102e4b7e */
  push32(0x102e4b3eu); f_102e4b7e();
  /* 102e4b3e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x102e4b42u);
L_102e4b42:;
  /* 102e4b42 jmp 0x102e4b07 */
  goto L_102e4b07;
L_102e4b44:;
  /* 102e4b44 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 102e4b4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4b4e pop edi */
  EDI = (pop32());
  /* 102e4b4f pop esi */
  ESI = (pop32());
  /* 102e4b50 pop ebx */
  EBX = (pop32());
  /* 102e4b51 ret  */
  ESPCHK(0x102e4aeau, _esp0);
  ESP += 4; return;
}

/* FUN_10004b7e @ 0x102e4b7e (24 bytes, 10 insns) */
void f_102e4b7e(void) {
  FTRACE(0x102e4b7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4b7e push ebx */
  push32((uint32_t)(EBX));
  /* 102e4b7f push ecx */
  push32((uint32_t)(ECX));
  /* 102e4b80 mov ebx, 0x102e64b0 */
  EBX = (0x102e64b0u);
  /* 102e4b85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102e4b88 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 102e4b8b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 102e4b8e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 102e4b91 pop ecx */
  ECX = (pop32());
  /* 102e4b92 pop ebx */
  EBX = (pop32());
  /* 102e4b93 ret 4 */
  ESPCHK(0x102e4b7eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004c5d @ 0x102e4c5d (27 bytes, 11 insns) */
void f_102e4c5d(void) {
  FTRACE(0x102e4c5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4c5d push ebp */
  push32((uint32_t)(EBP));
  /* 102e4c5e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102e4c62 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 102e4c64 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 102e4c67 push eax */
  push32((uint32_t)(EAX));
  /* 102e4c68 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 102e4c6b push eax */
  push32((uint32_t)(EAX));
  /* 102e4c6c call 0x102e4aea */
  push32(0x102e4c71u); f_102e4aea();
  /* 102e4c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102e4c74 pop ebp */
  EBP = (pop32());
  /* 102e4c75 ret 4 */
  ESPCHK(0x102e4c5du, _esp0);
  ESP += 8; return;
}

/* FUN_10004c80 @ 0x102e4c80 (47 bytes, 17 insns) */
void f_102e4c80(void) {
  FTRACE(0x102e4c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4c80 push ecx */
  push32((uint32_t)(ECX));
  /* 102e4c81 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4c86 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 102e4c8a jb 0x102e4ca0 */
  if (C.cf) goto L_102e4ca0;
L_102e4c8c:;
  /* 102e4c8c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e4c92 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e4c97 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102e4c99 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102e4c9e jae 0x102e4c8c */
  if (!C.cf) goto L_102e4c8c;
L_102e4ca0:;
  /* 102e4ca0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102e4ca2 mov eax, esp */
  EAX = (ESP);
  /* 102e4ca4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102e4ca6 mov esp, ecx */
  ESP = (ECX);
  /* 102e4ca8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102e4caa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 102e4cad push eax */
  push32((uint32_t)(EAX));
  /* 102e4cae ret  */
  ESPCHK(0x102e4c80u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x102e4cb0 (6 bytes, 1 insns) */
void f_102e4cb0(void) {
  FTRACE(0x102e4cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102e4cb0 jmp dword ptr [0x102e5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102e5008)))); return;
}

