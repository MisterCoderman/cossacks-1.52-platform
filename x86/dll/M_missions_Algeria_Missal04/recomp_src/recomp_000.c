#include "recomp.h"

/* FUN_10001000 @ 0x102b1000 (20 bytes, 6 insns) */
void f_102b1000(void) {
  FTRACE(0x102b1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102b1005 jne 0x102b100c */
  if (!C.zf) goto L_102b100c;
  /* 102b1007 call 0x102b1020 */
  push32(0x102b100cu); f_102b1020();
L_102b100c:;
  /* 102b100c mov eax, 1 */
  EAX = (0x1u);
  /* 102b1011 ret 0xc */
  ESPCHK(0x102b1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x102b1020 (902 bytes, 253 insns) */
void f_102b1020(void) {
  FTRACE(0x102b1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b1020 push esi */
  push32((uint32_t)(ESI));
  /* 102b1021 mov esi, dword ptr [0x102b5138] */
  ESI = (r32((uint32_t)(0x102b5138)));
  /* 102b1027 push 0x102b61e0 */
  push32((uint32_t)(0x102b61e0u));
  /* 102b102c push 0x102b66f0 */
  push32((uint32_t)(0x102b66f0u));
  /* 102b1031 call esi */
  call_ind((uint32_t)(ESI), 0x102b1033u);
  /* 102b1033 push 0x102b61dc */
  push32((uint32_t)(0x102b61dcu));
  /* 102b1038 push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b103d call esi */
  call_ind((uint32_t)(ESI), 0x102b103fu);
  /* 102b103f push 0x102b61d8 */
  push32((uint32_t)(0x102b61d8u));
  /* 102b1044 push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b1049 call esi */
  call_ind((uint32_t)(ESI), 0x102b104bu);
  /* 102b104b push 0x102b61d4 */
  push32((uint32_t)(0x102b61d4u));
  /* 102b1050 push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b1055 call esi */
  call_ind((uint32_t)(ESI), 0x102b1057u);
  /* 102b1057 push 0x102b61d0 */
  push32((uint32_t)(0x102b61d0u));
  /* 102b105c push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b1061 call esi */
  call_ind((uint32_t)(ESI), 0x102b1063u);
  /* 102b1063 push 0x102b61cc */
  push32((uint32_t)(0x102b61ccu));
  /* 102b1068 push 0x102b6718 */
  push32((uint32_t)(0x102b6718u));
  /* 102b106d call esi */
  call_ind((uint32_t)(ESI), 0x102b106fu);
  /* 102b106f push 0x102b61c8 */
  push32((uint32_t)(0x102b61c8u));
  /* 102b1074 push 0x102b6720 */
  push32((uint32_t)(0x102b6720u));
  /* 102b1079 call esi */
  call_ind((uint32_t)(ESI), 0x102b107bu);
  /* 102b107b push 0x102b61c4 */
  push32((uint32_t)(0x102b61c4u));
  /* 102b1080 push 0x102b6728 */
  push32((uint32_t)(0x102b6728u));
  /* 102b1085 call esi */
  call_ind((uint32_t)(ESI), 0x102b1087u);
  /* 102b1087 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b108a push 0x102b61c0 */
  push32((uint32_t)(0x102b61c0u));
  /* 102b108f push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1094 call esi */
  call_ind((uint32_t)(ESI), 0x102b1096u);
  /* 102b1096 push 0x102b61bc */
  push32((uint32_t)(0x102b61bcu));
  /* 102b109b push 0x102b67d0 */
  push32((uint32_t)(0x102b67d0u));
  /* 102b10a0 call esi */
  call_ind((uint32_t)(ESI), 0x102b10a2u);
  /* 102b10a2 push 0x102b61b8 */
  push32((uint32_t)(0x102b61b8u));
  /* 102b10a7 push 0x102b67d8 */
  push32((uint32_t)(0x102b67d8u));
  /* 102b10ac call esi */
  call_ind((uint32_t)(ESI), 0x102b10aeu);
  /* 102b10ae push 0x102b61b4 */
  push32((uint32_t)(0x102b61b4u));
  /* 102b10b3 push 0x102b6748 */
  push32((uint32_t)(0x102b6748u));
  /* 102b10b8 call esi */
  call_ind((uint32_t)(ESI), 0x102b10bau);
  /* 102b10ba push 0x102b61b0 */
  push32((uint32_t)(0x102b61b0u));
  /* 102b10bf push 0x102b6750 */
  push32((uint32_t)(0x102b6750u));
  /* 102b10c4 call esi */
  call_ind((uint32_t)(ESI), 0x102b10c6u);
  /* 102b10c6 push 0x102b61ac */
  push32((uint32_t)(0x102b61acu));
  /* 102b10cb push 0x102b6758 */
  push32((uint32_t)(0x102b6758u));
  /* 102b10d0 call esi */
  call_ind((uint32_t)(ESI), 0x102b10d2u);
  /* 102b10d2 push 0x102b61a8 */
  push32((uint32_t)(0x102b61a8u));
  /* 102b10d7 push 0x102b6760 */
  push32((uint32_t)(0x102b6760u));
  /* 102b10dc call esi */
  call_ind((uint32_t)(ESI), 0x102b10deu);
  /* 102b10de push 0x102b61a4 */
  push32((uint32_t)(0x102b61a4u));
  /* 102b10e3 push 0x102b6768 */
  push32((uint32_t)(0x102b6768u));
  /* 102b10e8 call esi */
  call_ind((uint32_t)(ESI), 0x102b10eau);
  /* 102b10ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b10ed push 0x102b61a0 */
  push32((uint32_t)(0x102b61a0u));
  /* 102b10f2 push 0x102b6770 */
  push32((uint32_t)(0x102b6770u));
  /* 102b10f7 call esi */
  call_ind((uint32_t)(ESI), 0x102b10f9u);
  /* 102b10f9 push 0x102b619c */
  push32((uint32_t)(0x102b619cu));
  /* 102b10fe push 0x102b6778 */
  push32((uint32_t)(0x102b6778u));
  /* 102b1103 call esi */
  call_ind((uint32_t)(ESI), 0x102b1105u);
  /* 102b1105 push 0x102b6198 */
  push32((uint32_t)(0x102b6198u));
  /* 102b110a push 0x102b6780 */
  push32((uint32_t)(0x102b6780u));
  /* 102b110f call esi */
  call_ind((uint32_t)(ESI), 0x102b1111u);
  /* 102b1111 mov esi, dword ptr [0x102b513c] */
  ESI = (r32((uint32_t)(0x102b513c)));
  /* 102b1117 push 0x102b6194 */
  push32((uint32_t)(0x102b6194u));
  /* 102b111c push 0x102b6788 */
  push32((uint32_t)(0x102b6788u));
  /* 102b1121 call esi */
  call_ind((uint32_t)(ESI), 0x102b1123u);
  /* 102b1123 push 0x102b6190 */
  push32((uint32_t)(0x102b6190u));
  /* 102b1128 push 0x102b6790 */
  push32((uint32_t)(0x102b6790u));
  /* 102b112d call esi */
  call_ind((uint32_t)(ESI), 0x102b112fu);
  /* 102b112f push 0x102b618c */
  push32((uint32_t)(0x102b618cu));
  /* 102b1134 push 0x102b6798 */
  push32((uint32_t)(0x102b6798u));
  /* 102b1139 call esi */
  call_ind((uint32_t)(ESI), 0x102b113bu);
  /* 102b113b push 0x102b6188 */
  push32((uint32_t)(0x102b6188u));
  /* 102b1140 push 0x102b67a0 */
  push32((uint32_t)(0x102b67a0u));
  /* 102b1145 call esi */
  call_ind((uint32_t)(ESI), 0x102b1147u);
  /* 102b1147 push 0x102b6184 */
  push32((uint32_t)(0x102b6184u));
  /* 102b114c push 0x102b67a8 */
  push32((uint32_t)(0x102b67a8u));
  /* 102b1151 call esi */
  call_ind((uint32_t)(ESI), 0x102b1153u);
  /* 102b1153 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1156 push 0x102b6180 */
  push32((uint32_t)(0x102b6180u));
  /* 102b115b push 0x102b67b0 */
  push32((uint32_t)(0x102b67b0u));
  /* 102b1160 call esi */
  call_ind((uint32_t)(ESI), 0x102b1162u);
  /* 102b1162 push 0x102b617c */
  push32((uint32_t)(0x102b617cu));
  /* 102b1167 push 0x102b67b8 */
  push32((uint32_t)(0x102b67b8u));
  /* 102b116c call esi */
  call_ind((uint32_t)(ESI), 0x102b116eu);
  /* 102b116e push 0x102b6178 */
  push32((uint32_t)(0x102b6178u));
  /* 102b1173 push 0x102b67c0 */
  push32((uint32_t)(0x102b67c0u));
  /* 102b1178 call esi */
  call_ind((uint32_t)(ESI), 0x102b117au);
  /* 102b117a push 0x102b6174 */
  push32((uint32_t)(0x102b6174u));
  /* 102b117f push 0x102b67c8 */
  push32((uint32_t)(0x102b67c8u));
  /* 102b1184 call esi */
  call_ind((uint32_t)(ESI), 0x102b1186u);
  /* 102b1186 push 0x102b6170 */
  push32((uint32_t)(0x102b6170u));
  /* 102b118b push 0x102b6800 */
  push32((uint32_t)(0x102b6800u));
  /* 102b1190 call esi */
  call_ind((uint32_t)(ESI), 0x102b1192u);
  /* 102b1192 push 0x102b616c */
  push32((uint32_t)(0x102b616cu));
  /* 102b1197 push 0x102b6808 */
  push32((uint32_t)(0x102b6808u));
  /* 102b119c call esi */
  call_ind((uint32_t)(ESI), 0x102b119eu);
  /* 102b119e mov esi, dword ptr [0x102b5134] */
  ESI = (r32((uint32_t)(0x102b5134)));
  /* 102b11a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 102b11a6 push 0x102b6738 */
  push32((uint32_t)(0x102b6738u));
  /* 102b11ab call esi */
  call_ind((uint32_t)(ESI), 0x102b11adu);
  /* 102b11ad push 8 */
  push32((uint32_t)(0x8u));
  /* 102b11af push 0x102b6740 */
  push32((uint32_t)(0x102b6740u));
  /* 102b11b4 call esi */
  call_ind((uint32_t)(ESI), 0x102b11b6u);
  /* 102b11b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b11b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102b11bb push 0x102b6818 */
  push32((uint32_t)(0x102b6818u));
  /* 102b11c0 call esi */
  call_ind((uint32_t)(ESI), 0x102b11c2u);
  /* 102b11c2 mov esi, dword ptr [0x102b5144] */
  ESI = (r32((uint32_t)(0x102b5144)));
  /* 102b11c8 push 0x102b6158 */
  push32((uint32_t)(0x102b6158u));
  /* 102b11cd push 0x102b66a8 */
  push32((uint32_t)(0x102b66a8u));
  /* 102b11d2 call esi */
  call_ind((uint32_t)(ESI), 0x102b11d4u);
  /* 102b11d4 push 0x102b6148 */
  push32((uint32_t)(0x102b6148u));
  /* 102b11d9 push 0x102b66b0 */
  push32((uint32_t)(0x102b66b0u));
  /* 102b11de call esi */
  call_ind((uint32_t)(ESI), 0x102b11e0u);
  /* 102b11e0 push 0x102b6138 */
  push32((uint32_t)(0x102b6138u));
  /* 102b11e5 push 0x102b66b8 */
  push32((uint32_t)(0x102b66b8u));
  /* 102b11ea call esi */
  call_ind((uint32_t)(ESI), 0x102b11ecu);
  /* 102b11ec push 0x102b6124 */
  push32((uint32_t)(0x102b6124u));
  /* 102b11f1 push 0x102b66c0 */
  push32((uint32_t)(0x102b66c0u));
  /* 102b11f6 call esi */
  call_ind((uint32_t)(ESI), 0x102b11f8u);
  /* 102b11f8 push 0x102b6110 */
  push32((uint32_t)(0x102b6110u));
  /* 102b11fd push 0x102b66c8 */
  push32((uint32_t)(0x102b66c8u));
  /* 102b1202 call esi */
  call_ind((uint32_t)(ESI), 0x102b1204u);
  /* 102b1204 push 0x102b6104 */
  push32((uint32_t)(0x102b6104u));
  /* 102b1209 push 0x102b66d0 */
  push32((uint32_t)(0x102b66d0u));
  /* 102b120e call esi */
  call_ind((uint32_t)(ESI), 0x102b1210u);
  /* 102b1210 push 0x102b60ec */
  push32((uint32_t)(0x102b60ecu));
  /* 102b1215 push 0x102b66d8 */
  push32((uint32_t)(0x102b66d8u));
  /* 102b121a call esi */
  call_ind((uint32_t)(ESI), 0x102b121cu);
  /* 102b121c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b121f push 0x102b60d8 */
  push32((uint32_t)(0x102b60d8u));
  /* 102b1224 push 0x102b66e0 */
  push32((uint32_t)(0x102b66e0u));
  /* 102b1229 call esi */
  call_ind((uint32_t)(ESI), 0x102b122bu);
  /* 102b122b push 0x102b60c4 */
  push32((uint32_t)(0x102b60c4u));
  /* 102b1230 push 0x102b66e8 */
  push32((uint32_t)(0x102b66e8u));
  /* 102b1235 call esi */
  call_ind((uint32_t)(ESI), 0x102b1237u);
  /* 102b1237 push 0x102b60b0 */
  push32((uint32_t)(0x102b60b0u));
  /* 102b123c push 0x102b6678 */
  push32((uint32_t)(0x102b6678u));
  /* 102b1241 call esi */
  call_ind((uint32_t)(ESI), 0x102b1243u);
  /* 102b1243 push 0x102b60a0 */
  push32((uint32_t)(0x102b60a0u));
  /* 102b1248 push 0x102b6680 */
  push32((uint32_t)(0x102b6680u));
  /* 102b124d call esi */
  call_ind((uint32_t)(ESI), 0x102b124fu);
  /* 102b124f push 0x102b6094 */
  push32((uint32_t)(0x102b6094u));
  /* 102b1254 push 0x102b6688 */
  push32((uint32_t)(0x102b6688u));
  /* 102b1259 call esi */
  call_ind((uint32_t)(ESI), 0x102b125bu);
  /* 102b125b push 0x102b6084 */
  push32((uint32_t)(0x102b6084u));
  /* 102b1260 push 0x102b6690 */
  push32((uint32_t)(0x102b6690u));
  /* 102b1265 call esi */
  call_ind((uint32_t)(ESI), 0x102b1267u);
  /* 102b1267 push 0x102b6078 */
  push32((uint32_t)(0x102b6078u));
  /* 102b126c push 0x102b6698 */
  push32((uint32_t)(0x102b6698u));
  /* 102b1271 call esi */
  call_ind((uint32_t)(ESI), 0x102b1273u);
  /* 102b1273 push 0x102b6068 */
  push32((uint32_t)(0x102b6068u));
  /* 102b1278 push 0x102b66a0 */
  push32((uint32_t)(0x102b66a0u));
  /* 102b127d call esi */
  call_ind((uint32_t)(ESI), 0x102b127fu);
  /* 102b127f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1282 push 0x102b6058 */
  push32((uint32_t)(0x102b6058u));
  /* 102b1287 push 0x102b67e8 */
  push32((uint32_t)(0x102b67e8u));
  /* 102b128c call esi */
  call_ind((uint32_t)(ESI), 0x102b128eu);
  /* 102b128e push 0x102b6048 */
  push32((uint32_t)(0x102b6048u));
  /* 102b1293 push 0x102b67f8 */
  push32((uint32_t)(0x102b67f8u));
  /* 102b1298 call esi */
  call_ind((uint32_t)(ESI), 0x102b129au);
  /* 102b129a push 0x102b6040 */
  push32((uint32_t)(0x102b6040u));
  /* 102b129f push 0x102b67f0 */
  push32((uint32_t)(0x102b67f0u));
  /* 102b12a4 call dword ptr [0x102b5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5148))), 0x102b12aau);
  /* 102b12aa mov esi, dword ptr [0x102b5140] */
  ESI = (r32((uint32_t)(0x102b5140)));
  /* 102b12b0 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 102b12b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b12b4 call esi */
  call_ind((uint32_t)(ESI), 0x102b12b6u);
  /* 102b12b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b12b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b12ba call esi */
  call_ind((uint32_t)(ESI), 0x102b12bcu);
  /* 102b12bc push 0x22 */
  push32((uint32_t)(0x22u));
  /* 102b12be push 5 */
  push32((uint32_t)(0x5u));
  /* 102b12c0 call esi */
  call_ind((uint32_t)(ESI), 0x102b12c2u);
  /* 102b12c2 mov esi, dword ptr [0x102b5150] */
  ESI = (r32((uint32_t)(0x102b5150)));
  /* 102b12c8 push 0x102b6038 */
  push32((uint32_t)(0x102b6038u));
  /* 102b12cd push 1 */
  push32((uint32_t)(0x1u));
  /* 102b12cf call esi */
  call_ind((uint32_t)(ESI), 0x102b12d1u);
  /* 102b12d1 push 0x102b6030 */
  push32((uint32_t)(0x102b6030u));
  /* 102b12d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b12d8 call esi */
  call_ind((uint32_t)(ESI), 0x102b12dau);
  /* 102b12da add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b12dd push 0 */
  push32((uint32_t)(0x0u));
  /* 102b12df call dword ptr [0x102b5154] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5154))), 0x102b12e5u);
  /* 102b12e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b12e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b12ea jle 0x102b13a4 */
  if ((C.zf||C.sf!=C.of)) goto L_102b13a4;
  /* 102b12f0 mov esi, dword ptr [0x102b514c] */
  ESI = (r32((uint32_t)(0x102b514c)));
  /* 102b12f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b12f8 push 0x102b66a8 */
  push32((uint32_t)(0x102b66a8u));
  /* 102b12fd push 0 */
  push32((uint32_t)(0x0u));
  /* 102b12ff call esi */
  call_ind((uint32_t)(ESI), 0x102b1301u);
  /* 102b1301 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1303 push 0x102b66b0 */
  push32((uint32_t)(0x102b66b0u));
  /* 102b1308 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b130a call esi */
  call_ind((uint32_t)(ESI), 0x102b130cu);
  /* 102b130c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b130e push 0x102b66b8 */
  push32((uint32_t)(0x102b66b8u));
  /* 102b1313 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1315 call esi */
  call_ind((uint32_t)(ESI), 0x102b1317u);
  /* 102b1317 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1319 push 0x102b66c0 */
  push32((uint32_t)(0x102b66c0u));
  /* 102b131e push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1320 call esi */
  call_ind((uint32_t)(ESI), 0x102b1322u);
  /* 102b1322 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1324 push 0x102b66c8 */
  push32((uint32_t)(0x102b66c8u));
  /* 102b1329 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b132b call esi */
  call_ind((uint32_t)(ESI), 0x102b132du);
  /* 102b132d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b132f push 0x102b66d0 */
  push32((uint32_t)(0x102b66d0u));
  /* 102b1334 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1336 call esi */
  call_ind((uint32_t)(ESI), 0x102b1338u);
  /* 102b1338 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b133b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b133d push 0x102b66d8 */
  push32((uint32_t)(0x102b66d8u));
  /* 102b1342 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1344 call esi */
  call_ind((uint32_t)(ESI), 0x102b1346u);
  /* 102b1346 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1348 push 0x102b66e0 */
  push32((uint32_t)(0x102b66e0u));
  /* 102b134d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b134f call esi */
  call_ind((uint32_t)(ESI), 0x102b1351u);
  /* 102b1351 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1353 push 0x102b66e8 */
  push32((uint32_t)(0x102b66e8u));
  /* 102b1358 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b135a call esi */
  call_ind((uint32_t)(ESI), 0x102b135cu);
  /* 102b135c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b135e push 0x102b6678 */
  push32((uint32_t)(0x102b6678u));
  /* 102b1363 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1365 call esi */
  call_ind((uint32_t)(ESI), 0x102b1367u);
  /* 102b1367 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1369 push 0x102b6680 */
  push32((uint32_t)(0x102b6680u));
  /* 102b136e push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1370 call esi */
  call_ind((uint32_t)(ESI), 0x102b1372u);
  /* 102b1372 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1374 push 0x102b6688 */
  push32((uint32_t)(0x102b6688u));
  /* 102b1379 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b137b call esi */
  call_ind((uint32_t)(ESI), 0x102b137du);
  /* 102b137d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1380 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1382 push 0x102b6690 */
  push32((uint32_t)(0x102b6690u));
  /* 102b1387 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1389 call esi */
  call_ind((uint32_t)(ESI), 0x102b138bu);
  /* 102b138b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b138d push 0x102b6698 */
  push32((uint32_t)(0x102b6698u));
  /* 102b1392 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1394 call esi */
  call_ind((uint32_t)(ESI), 0x102b1396u);
  /* 102b1396 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1398 push 0x102b66a0 */
  push32((uint32_t)(0x102b66a0u));
  /* 102b139d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b139f call esi */
  call_ind((uint32_t)(ESI), 0x102b13a1u);
  /* 102b13a1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b13a4:;
  /* 102b13a4 pop esi */
  ESI = (pop32());
  /* 102b13a5 ret  */
  ESPCHK(0x102b1020u, _esp0);
  ESP += 4; return;
}

/* FUN_100013b0 @ 0x102b13b0 (539 bytes, 177 insns) */
void f_102b13b0(void) {
  FTRACE(0x102b13b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b13b0 push ebx */
  push32((uint32_t)(EBX));
  /* 102b13b1 push esi */
  push32((uint32_t)(ESI));
  /* 102b13b2 push edi */
  push32((uint32_t)(EDI));
  /* 102b13b3 mov edi, dword ptr [0x102b511c] */
  EDI = (r32((uint32_t)(0x102b511c)));
  /* 102b13b9 push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b13be call edi */
  call_ind((uint32_t)(EDI), 0x102b13c0u);
  /* 102b13c0 mov esi, dword ptr [0x102b512c] */
  ESI = (r32((uint32_t)(0x102b512c)));
  /* 102b13c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b13c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b13cb jle 0x102b1442 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1442;
  /* 102b13cd push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b13d2 call esi */
  call_ind((uint32_t)(ESI), 0x102b13d4u);
  /* 102b13d4 push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b13d9 mov ebx, eax */
  EBX = (EAX);
  /* 102b13db call esi */
  call_ind((uint32_t)(ESI), 0x102b13ddu);
  /* 102b13dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b13e0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b13e2 jl 0x102b1442 */
  if ((C.sf!=C.of)) goto L_102b1442;
  /* 102b13e4 push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b13e9 call esi */
  call_ind((uint32_t)(ESI), 0x102b13ebu);
  /* 102b13eb push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b13f0 mov ebx, eax */
  EBX = (EAX);
  /* 102b13f2 call esi */
  call_ind((uint32_t)(ESI), 0x102b13f4u);
  /* 102b13f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b13f7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b13f9 jl 0x102b1442 */
  if ((C.sf!=C.of)) goto L_102b1442;
  /* 102b13fb push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b1400 call esi */
  call_ind((uint32_t)(ESI), 0x102b1402u);
  /* 102b1402 push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b1407 mov ebx, eax */
  EBX = (EAX);
  /* 102b1409 call esi */
  call_ind((uint32_t)(ESI), 0x102b140bu);
  /* 102b140b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b140e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1410 jle 0x102b1442 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1442;
  /* 102b1412 push 0x102b62ac */
  push32((uint32_t)(0x102b62acu));
  /* 102b1417 call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b141du);
  /* 102b141d mov esi, dword ptr [0x102b5128] */
  ESI = (r32((uint32_t)(0x102b5128)));
  /* 102b1423 push 0x102b6294 */
  push32((uint32_t)(0x102b6294u));
  /* 102b1428 push 0x102b61dc */
  push32((uint32_t)(0x102b61dcu));
  /* 102b142d call esi */
  call_ind((uint32_t)(ESI), 0x102b142fu);
  /* 102b142f push 0x102b627c */
  push32((uint32_t)(0x102b627cu));
  /* 102b1434 push 0x102b61dc */
  push32((uint32_t)(0x102b61dcu));
  /* 102b1439 call esi */
  call_ind((uint32_t)(ESI), 0x102b143bu);
  /* 102b143b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b143e pop edi */
  EDI = (pop32());
  /* 102b143f pop esi */
  ESI = (pop32());
  /* 102b1440 pop ebx */
  EBX = (pop32());
  /* 102b1441 ret  */
  ESPCHK(0x102b13b0u, _esp0);
  ESP += 4; return;
L_102b1442:;
  /* 102b1442 push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b1447 call edi */
  call_ind((uint32_t)(EDI), 0x102b1449u);
  /* 102b1449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b144c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b144e jle 0x102b14c5 */
  if ((C.zf||C.sf!=C.of)) goto L_102b14c5;
  /* 102b1450 push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b1455 call esi */
  call_ind((uint32_t)(ESI), 0x102b1457u);
  /* 102b1457 push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b145c mov ebx, eax */
  EBX = (EAX);
  /* 102b145e call esi */
  call_ind((uint32_t)(ESI), 0x102b1460u);
  /* 102b1460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1463 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1465 jl 0x102b14c5 */
  if ((C.sf!=C.of)) goto L_102b14c5;
  /* 102b1467 push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b146c call esi */
  call_ind((uint32_t)(ESI), 0x102b146eu);
  /* 102b146e push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b1473 mov ebx, eax */
  EBX = (EAX);
  /* 102b1475 call esi */
  call_ind((uint32_t)(ESI), 0x102b1477u);
  /* 102b1477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b147a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b147c jl 0x102b14c5 */
  if ((C.sf!=C.of)) goto L_102b14c5;
  /* 102b147e push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b1483 call esi */
  call_ind((uint32_t)(ESI), 0x102b1485u);
  /* 102b1485 push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b148a mov ebx, eax */
  EBX = (EAX);
  /* 102b148c call esi */
  call_ind((uint32_t)(ESI), 0x102b148eu);
  /* 102b148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1491 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1493 jle 0x102b14c5 */
  if ((C.zf||C.sf!=C.of)) goto L_102b14c5;
  /* 102b1495 push 0x102b6274 */
  push32((uint32_t)(0x102b6274u));
  /* 102b149a call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b14a0u);
  /* 102b14a0 mov esi, dword ptr [0x102b5128] */
  ESI = (r32((uint32_t)(0x102b5128)));
  /* 102b14a6 push 0x102b625c */
  push32((uint32_t)(0x102b625cu));
  /* 102b14ab push 0x102b61d8 */
  push32((uint32_t)(0x102b61d8u));
  /* 102b14b0 call esi */
  call_ind((uint32_t)(ESI), 0x102b14b2u);
  /* 102b14b2 push 0x102b6244 */
  push32((uint32_t)(0x102b6244u));
  /* 102b14b7 push 0x102b61d8 */
  push32((uint32_t)(0x102b61d8u));
  /* 102b14bc call esi */
  call_ind((uint32_t)(ESI), 0x102b14beu);
  /* 102b14be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b14c1 pop edi */
  EDI = (pop32());
  /* 102b14c2 pop esi */
  ESI = (pop32());
  /* 102b14c3 pop ebx */
  EBX = (pop32());
  /* 102b14c4 ret  */
  ESPCHK(0x102b13b0u, _esp0);
  ESP += 4; return;
L_102b14c5:;
  /* 102b14c5 push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b14ca call edi */
  call_ind((uint32_t)(EDI), 0x102b14ccu);
  /* 102b14cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b14cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b14d1 jle 0x102b1548 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1548;
  /* 102b14d3 push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b14d8 call esi */
  call_ind((uint32_t)(ESI), 0x102b14dau);
  /* 102b14da push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b14df mov ebx, eax */
  EBX = (EAX);
  /* 102b14e1 call esi */
  call_ind((uint32_t)(ESI), 0x102b14e3u);
  /* 102b14e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b14e6 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b14e8 jl 0x102b1548 */
  if ((C.sf!=C.of)) goto L_102b1548;
  /* 102b14ea push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b14ef call esi */
  call_ind((uint32_t)(ESI), 0x102b14f1u);
  /* 102b14f1 push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b14f6 mov ebx, eax */
  EBX = (EAX);
  /* 102b14f8 call esi */
  call_ind((uint32_t)(ESI), 0x102b14fau);
  /* 102b14fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b14fd cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b14ff jl 0x102b1548 */
  if ((C.sf!=C.of)) goto L_102b1548;
  /* 102b1501 push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b1506 call esi */
  call_ind((uint32_t)(ESI), 0x102b1508u);
  /* 102b1508 push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b150d mov ebx, eax */
  EBX = (EAX);
  /* 102b150f call esi */
  call_ind((uint32_t)(ESI), 0x102b1511u);
  /* 102b1511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1514 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1516 jle 0x102b1548 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1548;
  /* 102b1518 push 0x102b623c */
  push32((uint32_t)(0x102b623cu));
  /* 102b151d call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b1523u);
  /* 102b1523 mov esi, dword ptr [0x102b5128] */
  ESI = (r32((uint32_t)(0x102b5128)));
  /* 102b1529 push 0x102b6228 */
  push32((uint32_t)(0x102b6228u));
  /* 102b152e push 0x102b61d4 */
  push32((uint32_t)(0x102b61d4u));
  /* 102b1533 call esi */
  call_ind((uint32_t)(ESI), 0x102b1535u);
  /* 102b1535 push 0x102b6214 */
  push32((uint32_t)(0x102b6214u));
  /* 102b153a push 0x102b61d4 */
  push32((uint32_t)(0x102b61d4u));
  /* 102b153f call esi */
  call_ind((uint32_t)(ESI), 0x102b1541u);
  /* 102b1541 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1544 pop edi */
  EDI = (pop32());
  /* 102b1545 pop esi */
  ESI = (pop32());
  /* 102b1546 pop ebx */
  EBX = (pop32());
  /* 102b1547 ret  */
  ESPCHK(0x102b13b0u, _esp0);
  ESP += 4; return;
L_102b1548:;
  /* 102b1548 push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b154d call edi */
  call_ind((uint32_t)(EDI), 0x102b154fu);
  /* 102b154f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1554 jle 0x102b15c7 */
  if ((C.zf||C.sf!=C.of)) goto L_102b15c7;
  /* 102b1556 push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b155b call esi */
  call_ind((uint32_t)(ESI), 0x102b155du);
  /* 102b155d push 0x102b66f8 */
  push32((uint32_t)(0x102b66f8u));
  /* 102b1562 mov edi, eax */
  EDI = (EAX);
  /* 102b1564 call esi */
  call_ind((uint32_t)(ESI), 0x102b1566u);
  /* 102b1566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1569 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b156b jl 0x102b15c7 */
  if ((C.sf!=C.of)) goto L_102b15c7;
  /* 102b156d push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b1572 call esi */
  call_ind((uint32_t)(ESI), 0x102b1574u);
  /* 102b1574 push 0x102b6700 */
  push32((uint32_t)(0x102b6700u));
  /* 102b1579 mov edi, eax */
  EDI = (EAX);
  /* 102b157b call esi */
  call_ind((uint32_t)(ESI), 0x102b157du);
  /* 102b157d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1580 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1582 jl 0x102b15c7 */
  if ((C.sf!=C.of)) goto L_102b15c7;
  /* 102b1584 push 0x102b6710 */
  push32((uint32_t)(0x102b6710u));
  /* 102b1589 call esi */
  call_ind((uint32_t)(ESI), 0x102b158bu);
  /* 102b158b push 0x102b6708 */
  push32((uint32_t)(0x102b6708u));
  /* 102b1590 mov edi, eax */
  EDI = (EAX);
  /* 102b1592 call esi */
  call_ind((uint32_t)(ESI), 0x102b1594u);
  /* 102b1594 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1597 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1599 jle 0x102b15c7 */
  if ((C.zf||C.sf!=C.of)) goto L_102b15c7;
  /* 102b159b push 0x102b620c */
  push32((uint32_t)(0x102b620cu));
  /* 102b15a0 call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b15a6u);
  /* 102b15a6 mov esi, dword ptr [0x102b5128] */
  ESI = (r32((uint32_t)(0x102b5128)));
  /* 102b15ac push 0x102b61f8 */
  push32((uint32_t)(0x102b61f8u));
  /* 102b15b1 push 0x102b61d0 */
  push32((uint32_t)(0x102b61d0u));
  /* 102b15b6 call esi */
  call_ind((uint32_t)(ESI), 0x102b15b8u);
  /* 102b15b8 push 0x102b61e4 */
  push32((uint32_t)(0x102b61e4u));
  /* 102b15bd push 0x102b61d0 */
  push32((uint32_t)(0x102b61d0u));
  /* 102b15c2 call esi */
  call_ind((uint32_t)(ESI), 0x102b15c4u);
  /* 102b15c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b15c7:;
  /* 102b15c7 pop edi */
  EDI = (pop32());
  /* 102b15c8 pop esi */
  ESI = (pop32());
  /* 102b15c9 pop ebx */
  EBX = (pop32());
  /* 102b15ca ret  */
  ESPCHK(0x102b13b0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x102b15d0 (2158 bytes, 684 insns) */
void f_102b15d0(void) {
  FTRACE(0x102b15d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b15d0 push ebx */
  push32((uint32_t)(EBX));
  /* 102b15d1 push ebp */
  push32((uint32_t)(EBP));
  /* 102b15d2 push esi */
  push32((uint32_t)(ESI));
  /* 102b15d3 push edi */
  push32((uint32_t)(EDI));
  /* 102b15d4 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102b15d6 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b15dcu);
  /* 102b15dc mov ebx, dword ptr [0x102b50b8] */
  EBX = (r32((uint32_t)(0x102b50b8)));
  /* 102b15e2 mov edi, dword ptr [0x102b5154] */
  EDI = (r32((uint32_t)(0x102b5154)));
  /* 102b15e8 mov ebp, dword ptr [0x102b50b0] */
  EBP = (r32((uint32_t)(0x102b50b0)));
  /* 102b15ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b15f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b15f3 je 0x102b1773 */
  if (C.zf) goto L_102b1773;
  /* 102b15f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b15fb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102b15fd call ebx */
  call_ind((uint32_t)(EBX), 0x102b15ffu);
  /* 102b15ff push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1601 push 0x102b67a8 */
  push32((uint32_t)(0x102b67a8u));
  /* 102b1606 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1608 push 0x102b67e8 */
  push32((uint32_t)(0x102b67e8u));
  /* 102b160d push 0x102b67f0 */
  push32((uint32_t)(0x102b67f0u));
  /* 102b1612 push 0x102b6738 */
  push32((uint32_t)(0x102b6738u));
  /* 102b1617 call dword ptr [0x102b50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50c0))), 0x102b161du);
  /* 102b161d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b161f call edi */
  call_ind((uint32_t)(EDI), 0x102b1621u);
  /* 102b1621 mov ecx, 0xa */
  ECX = (0xau);
  /* 102b1626 mov esi, dword ptr [0x102b50c4] */
  ESI = (r32((uint32_t)(0x102b50c4)));
  /* 102b162c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b162e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102b1631 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b1634 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b1637 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 102b163a push eax */
  push32((uint32_t)(EAX));
  /* 102b163b push 3 */
  push32((uint32_t)(0x3u));
  /* 102b163d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b163f call esi */
  call_ind((uint32_t)(ESI), 0x102b1641u);
  /* 102b1641 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1643 call edi */
  call_ind((uint32_t)(EDI), 0x102b1645u);
  /* 102b1645 mov ecx, 5 */
  ECX = (0x5u);
  /* 102b164a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b164c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102b164f lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102b1652 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 102b1655 push ecx */
  push32((uint32_t)(ECX));
  /* 102b1656 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1658 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b165a call esi */
  call_ind((uint32_t)(ESI), 0x102b165cu);
  /* 102b165c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b165f push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1661 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1663 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1665 call esi */
  call_ind((uint32_t)(ESI), 0x102b1667u);
  /* 102b1667 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1669 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b166b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b166d call esi */
  call_ind((uint32_t)(ESI), 0x102b166fu);
  /* 102b166f push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1671 call edi */
  call_ind((uint32_t)(EDI), 0x102b1673u);
  /* 102b1673 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102b1676 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b1679 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102b167c mov eax, 0x7d0 */
  EAX = (0x7d0u);
  /* 102b1681 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102b1684 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1686 push eax */
  push32((uint32_t)(EAX));
  /* 102b1687 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1689 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b168b call esi */
  call_ind((uint32_t)(ESI), 0x102b168du);
  /* 102b168d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b168f call edi */
  call_ind((uint32_t)(EDI), 0x102b1691u);
  /* 102b1691 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102b1694 mov edx, 0x7d0 */
  EDX = (0x7d0u);
  /* 102b1699 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b169c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102b169f shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b16a2 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b16a4 push edx */
  push32((uint32_t)(EDX));
  /* 102b16a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 102b16a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16a9 call esi */
  call_ind((uint32_t)(ESI), 0x102b16abu);
  /* 102b16ab push 0x102b6340 */
  push32((uint32_t)(0x102b6340u));
  /* 102b16b0 call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b16b6u);
  /* 102b16b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16b8 call edi */
  call_ind((uint32_t)(EDI), 0x102b16bau);
  /* 102b16ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b16bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b16bf jne 0x102b1740 */
  if (!C.zf) goto L_102b1740;
  /* 102b16c1 push eax */
  push32((uint32_t)(EAX));
  /* 102b16c2 push 0x102b6780 */
  push32((uint32_t)(0x102b6780u));
  /* 102b16c7 call ebp */
  call_ind((uint32_t)(EBP), 0x102b16c9u);
  /* 102b16c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b16cb call dword ptr [0x102b50bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50bc))), 0x102b16d1u);
  /* 102b16d1 push 0xea60 */
  push32((uint32_t)(0xea60u));
  /* 102b16d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102b16d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16da call esi */
  call_ind((uint32_t)(ESI), 0x102b16dcu);
  /* 102b16dc push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 102b16e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b16e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16e5 call esi */
  call_ind((uint32_t)(ESI), 0x102b16e7u);
  /* 102b16e7 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 102b16ec push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16ee push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16f0 call esi */
  call_ind((uint32_t)(ESI), 0x102b16f2u);
  /* 102b16f2 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 102b16f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b16f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b16fb call esi */
  call_ind((uint32_t)(ESI), 0x102b16fdu);
  /* 102b16fd push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 102b1702 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1704 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1706 call esi */
  call_ind((uint32_t)(ESI), 0x102b1708u);
  /* 102b1708 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b170b push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 102b1710 push 4 */
  push32((uint32_t)(0x4u));
  /* 102b1712 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1714 call esi */
  call_ind((uint32_t)(ESI), 0x102b1716u);
  /* 102b1716 mov esi, dword ptr [0x102b50cc] */
  ESI = (r32((uint32_t)(0x102b50cc)));
  /* 102b171c push 2 */
  push32((uint32_t)(0x2u));
  /* 102b171e push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1720 push 0x102b67c0 */
  push32((uint32_t)(0x102b67c0u));
  /* 102b1725 call esi */
  call_ind((uint32_t)(ESI), 0x102b1727u);
  /* 102b1727 push 3 */
  push32((uint32_t)(0x3u));
  /* 102b1729 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b172b push 0x102b67c8 */
  push32((uint32_t)(0x102b67c8u));
  /* 102b1730 call esi */
  call_ind((uint32_t)(ESI), 0x102b1732u);
  /* 102b1732 push 4 */
  push32((uint32_t)(0x4u));
  /* 102b1734 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1736 push 0x102b6800 */
  push32((uint32_t)(0x102b6800u));
  /* 102b173b call esi */
  call_ind((uint32_t)(ESI), 0x102b173du);
  /* 102b173d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1740:;
  /* 102b1740 push 0x102b6768 */
  push32((uint32_t)(0x102b6768u));
  /* 102b1745 call dword ptr [0x102b50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d0))), 0x102b174bu);
  /* 102b174b push 0x102b6770 */
  push32((uint32_t)(0x102b6770u));
  /* 102b1750 call dword ptr [0x102b50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50c8))), 0x102b1756u);
  /* 102b1756 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1758 push 0x102b67d8 */
  push32((uint32_t)(0x102b67d8u));
  /* 102b175d call ebp */
  call_ind((uint32_t)(EBP), 0x102b175fu);
  /* 102b175f push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1761 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1763 push 0x102b67a0 */
  push32((uint32_t)(0x102b67a0u));
  /* 102b1768 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b176a call dword ptr [0x102b50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d8))), 0x102b1770u);
  /* 102b1770 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1773:;
  /* 102b1773 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1775 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b177bu);
  /* 102b177b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b177e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1780 je 0x102b17f3 */
  if (C.zf) goto L_102b17f3;
  /* 102b1782 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1784 push 0x102b6718 */
  push32((uint32_t)(0x102b6718u));
  /* 102b1789 call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b178fu);
  /* 102b178f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1794 jle 0x102b17f3 */
  if ((C.zf||C.sf!=C.of)) goto L_102b17f3;
  /* 102b1796 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1798 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b179a call ebx */
  call_ind((uint32_t)(EBX), 0x102b179cu);
  /* 102b179c mov esi, dword ptr [0x102b5130] */
  ESI = (r32((uint32_t)(0x102b5130)));
  /* 102b17a2 push 0x102b6338 */
  push32((uint32_t)(0x102b6338u));
  /* 102b17a7 call esi */
  call_ind((uint32_t)(ESI), 0x102b17a9u);
  /* 102b17a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b17ab call dword ptr [0x102b50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d4))), 0x102b17b1u);
  /* 102b17b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b17b3 push 0x102b6720 */
  push32((uint32_t)(0x102b6720u));
  /* 102b17b8 call ebp */
  call_ind((uint32_t)(EBP), 0x102b17bau);
  /* 102b17ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102b17bc push 1 */
  push32((uint32_t)(0x1u));
  /* 102b17be call dword ptr [0x102b50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e4))), 0x102b17c4u);
  /* 102b17c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b17c6 push 0x102b6728 */
  push32((uint32_t)(0x102b6728u));
  /* 102b17cb call ebp */
  call_ind((uint32_t)(EBP), 0x102b17cdu);
  /* 102b17cd push 0 */
  push32((uint32_t)(0x0u));
  /* 102b17cf push 1 */
  push32((uint32_t)(0x1u));
  /* 102b17d1 call dword ptr [0x102b50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e4))), 0x102b17d7u);
  /* 102b17d7 call 0x102b13b0 */
  push32(0x102b17dcu); f_102b13b0();
  /* 102b17dc push 0 */
  push32((uint32_t)(0x0u));
  /* 102b17de call edi */
  call_ind((uint32_t)(EDI), 0x102b17e0u);
  /* 102b17e0 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b17e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b17e5 jne 0x102b17f9 */
  if (!C.zf) goto L_102b17f9;
  /* 102b17e7 push 0x102b6330 */
  push32((uint32_t)(0x102b6330u));
  /* 102b17ec call esi */
  call_ind((uint32_t)(ESI), 0x102b17eeu);
  /* 102b17ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b17f1 jmp 0x102b17f9 */
  goto L_102b17f9;
L_102b17f3:;
  /* 102b17f3 mov esi, dword ptr [0x102b5130] */
  ESI = (r32((uint32_t)(0x102b5130)));
L_102b17f9:;
  /* 102b17f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b17fb call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1801u);
  /* 102b1801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1804 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1806 je 0x102b1829 */
  if (C.zf) goto L_102b1829;
  /* 102b1808 push 0x102b6718 */
  push32((uint32_t)(0x102b6718u));
  /* 102b180d call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1813u);
  /* 102b1813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1818 jne 0x102b1829 */
  if (!C.zf) goto L_102b1829;
  /* 102b181a push eax */
  push32((uint32_t)(EAX));
  /* 102b181b push 1 */
  push32((uint32_t)(0x1u));
  /* 102b181d call ebx */
  call_ind((uint32_t)(EBX), 0x102b181fu);
  /* 102b181f push 0x102b6328 */
  push32((uint32_t)(0x102b6328u));
  /* 102b1824 call esi */
  call_ind((uint32_t)(ESI), 0x102b1826u);
  /* 102b1826 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1829:;
  /* 102b1829 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b182b call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1831u);
  /* 102b1831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1834 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1836 je 0x102b187c */
  if (C.zf) goto L_102b187c;
  /* 102b1838 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b183a push 0x102b6748 */
  push32((uint32_t)(0x102b6748u));
  /* 102b183f call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b1845u);
  /* 102b1845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b184a jle 0x102b187c */
  if ((C.zf||C.sf!=C.of)) goto L_102b187c;
  /* 102b184c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b184e push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1850 call ebx */
  call_ind((uint32_t)(EBX), 0x102b1852u);
  /* 102b1852 push 0x102b6320 */
  push32((uint32_t)(0x102b6320u));
  /* 102b1857 call esi */
  call_ind((uint32_t)(ESI), 0x102b1859u);
  /* 102b1859 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b185b call dword ptr [0x102b50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d4))), 0x102b1861u);
  /* 102b1861 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1863 push 0x102b6750 */
  push32((uint32_t)(0x102b6750u));
  /* 102b1868 call ebp */
  call_ind((uint32_t)(EBP), 0x102b186au);
  /* 102b186a push 0 */
  push32((uint32_t)(0x0u));
  /* 102b186c push 1 */
  push32((uint32_t)(0x1u));
  /* 102b186e call dword ptr [0x102b50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e4))), 0x102b1874u);
  /* 102b1874 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1877 call 0x102b13b0 */
  push32(0x102b187cu); f_102b13b0();
L_102b187c:;
  /* 102b187c push 2 */
  push32((uint32_t)(0x2u));
  /* 102b187e call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1884u);
  /* 102b1884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1887 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1889 je 0x102b18ac */
  if (C.zf) goto L_102b18ac;
  /* 102b188b push 0x102b6748 */
  push32((uint32_t)(0x102b6748u));
  /* 102b1890 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1896u);
  /* 102b1896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b189b jne 0x102b18ac */
  if (!C.zf) goto L_102b18ac;
  /* 102b189d push eax */
  push32((uint32_t)(EAX));
  /* 102b189e push 2 */
  push32((uint32_t)(0x2u));
  /* 102b18a0 call ebx */
  call_ind((uint32_t)(EBX), 0x102b18a2u);
  /* 102b18a2 push 0x102b6318 */
  push32((uint32_t)(0x102b6318u));
  /* 102b18a7 call esi */
  call_ind((uint32_t)(ESI), 0x102b18a9u);
  /* 102b18a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b18ac:;
  /* 102b18ac push 3 */
  push32((uint32_t)(0x3u));
  /* 102b18ae call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b18b4u);
  /* 102b18b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b18b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b18b9 je 0x102b18ff */
  if (C.zf) goto L_102b18ff;
  /* 102b18bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102b18bd push 0x102b6758 */
  push32((uint32_t)(0x102b6758u));
  /* 102b18c2 call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b18c8u);
  /* 102b18c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b18cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b18cd jle 0x102b18ff */
  if ((C.zf||C.sf!=C.of)) goto L_102b18ff;
  /* 102b18cf push 0 */
  push32((uint32_t)(0x0u));
  /* 102b18d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 102b18d3 call ebx */
  call_ind((uint32_t)(EBX), 0x102b18d5u);
  /* 102b18d5 push 0x102b6310 */
  push32((uint32_t)(0x102b6310u));
  /* 102b18da call esi */
  call_ind((uint32_t)(ESI), 0x102b18dcu);
  /* 102b18dc push 1 */
  push32((uint32_t)(0x1u));
  /* 102b18de call dword ptr [0x102b50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d4))), 0x102b18e4u);
  /* 102b18e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b18e6 push 0x102b6760 */
  push32((uint32_t)(0x102b6760u));
  /* 102b18eb call ebp */
  call_ind((uint32_t)(EBP), 0x102b18edu);
  /* 102b18ed push 0 */
  push32((uint32_t)(0x0u));
  /* 102b18ef push 1 */
  push32((uint32_t)(0x1u));
  /* 102b18f1 call dword ptr [0x102b50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e4))), 0x102b18f7u);
  /* 102b18f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b18fa call 0x102b13b0 */
  push32(0x102b18ffu); f_102b13b0();
L_102b18ff:;
  /* 102b18ff push 3 */
  push32((uint32_t)(0x3u));
  /* 102b1901 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1907u);
  /* 102b1907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b190a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b190c je 0x102b192f */
  if (C.zf) goto L_102b192f;
  /* 102b190e push 0x102b6758 */
  push32((uint32_t)(0x102b6758u));
  /* 102b1913 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1919u);
  /* 102b1919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b191c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b191e jne 0x102b192f */
  if (!C.zf) goto L_102b192f;
  /* 102b1920 push eax */
  push32((uint32_t)(EAX));
  /* 102b1921 push 3 */
  push32((uint32_t)(0x3u));
  /* 102b1923 call ebx */
  call_ind((uint32_t)(EBX), 0x102b1925u);
  /* 102b1925 push 0x102b6308 */
  push32((uint32_t)(0x102b6308u));
  /* 102b192a call esi */
  call_ind((uint32_t)(ESI), 0x102b192cu);
  /* 102b192c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b192f:;
  /* 102b192f push 4 */
  push32((uint32_t)(0x4u));
  /* 102b1931 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1937u);
  /* 102b1937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b193a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b193c je 0x102b1965 */
  if (C.zf) goto L_102b1965;
  /* 102b193e push 0x102b66f0 */
  push32((uint32_t)(0x102b66f0u));
  /* 102b1943 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1949u);
  /* 102b1949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b194c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b194e jne 0x102b1965 */
  if (!C.zf) goto L_102b1965;
  /* 102b1950 push eax */
  push32((uint32_t)(EAX));
  /* 102b1951 push 4 */
  push32((uint32_t)(0x4u));
  /* 102b1953 call ebx */
  call_ind((uint32_t)(EBX), 0x102b1955u);
  /* 102b1955 push 0x102b6300 */
  push32((uint32_t)(0x102b6300u));
  /* 102b195a call esi */
  call_ind((uint32_t)(ESI), 0x102b195cu);
  /* 102b195c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b195f call dword ptr [0x102b50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e8))), 0x102b1965u);
L_102b1965:;
  /* 102b1965 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1967 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b196du);
  /* 102b196d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1970 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1972 je 0x102b19b7 */
  if (C.zf) goto L_102b19b7;
  /* 102b1974 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1976 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b197cu);
  /* 102b197c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b197f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1981 jne 0x102b19b7 */
  if (!C.zf) goto L_102b19b7;
  /* 102b1983 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1985 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b198bu);
  /* 102b198b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b198e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1990 jne 0x102b19b7 */
  if (!C.zf) goto L_102b19b7;
  /* 102b1992 push 3 */
  push32((uint32_t)(0x3u));
  /* 102b1994 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b199au);
  /* 102b199a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b199d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b199f jne 0x102b19b7 */
  if (!C.zf) goto L_102b19b7;
  /* 102b19a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b19a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b19a5 call ebx */
  call_ind((uint32_t)(EBX), 0x102b19a7u);
  /* 102b19a7 push 0x102b62f8 */
  push32((uint32_t)(0x102b62f8u));
  /* 102b19ac call esi */
  call_ind((uint32_t)(ESI), 0x102b19aeu);
  /* 102b19ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b19b1 call dword ptr [0x102b50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e0))), 0x102b19b7u);
L_102b19b7:;
  /* 102b19b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 102b19b9 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b19bfu);
  /* 102b19bf mov esi, dword ptr [0x102b50f0] */
  ESI = (r32((uint32_t)(0x102b50f0)));
  /* 102b19c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b19c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b19ca je 0x102b1a4b */
  if (C.zf) goto L_102b1a4b;
  /* 102b19cc push 0 */
  push32((uint32_t)(0x0u));
  /* 102b19ce push 0x102b67b0 */
  push32((uint32_t)(0x102b67b0u));
  /* 102b19d3 call dword ptr [0x102b50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50f4))), 0x102b19d9u);
  /* 102b19d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b19dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b19de jle 0x102b1a4b */
  if ((C.zf||C.sf!=C.of)) goto L_102b1a4b;
  /* 102b19e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b19e2 push 6 */
  push32((uint32_t)(0x6u));
  /* 102b19e4 call ebx */
  call_ind((uint32_t)(EBX), 0x102b19e6u);
  /* 102b19e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b19e8 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b19ed call ebp */
  call_ind((uint32_t)(EBP), 0x102b19efu);
  /* 102b19ef push 0 */
  push32((uint32_t)(0x0u));
  /* 102b19f1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 102b19f6 push 0x102b6788 */
  push32((uint32_t)(0x102b6788u));
  /* 102b19fb push 1 */
  push32((uint32_t)(0x1u));
  /* 102b19fd call dword ptr [0x102b50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d8))), 0x102b1a03u);
  /* 102b1a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1a05 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 102b1a0a push 0x102b6790 */
  push32((uint32_t)(0x102b6790u));
  /* 102b1a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1a11 call dword ptr [0x102b50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d8))), 0x102b1a17u);
  /* 102b1a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1a19 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 102b1a1e push 0x102b6798 */
  push32((uint32_t)(0x102b6798u));
  /* 102b1a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1a25 call dword ptr [0x102b50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d8))), 0x102b1a2bu);
  /* 102b1a2b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1a2e push 2 */
  push32((uint32_t)(0x2u));
  /* 102b1a30 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 102b1a35 push 0x102b67a0 */
  push32((uint32_t)(0x102b67a0u));
  /* 102b1a3a push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1a3c call dword ptr [0x102b50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d8))), 0x102b1a42u);
  /* 102b1a42 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1a44 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1a46 call esi */
  call_ind((uint32_t)(ESI), 0x102b1a48u);
  /* 102b1a48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1a4b:;
  /* 102b1a4b push 7 */
  push32((uint32_t)(0x7u));
  /* 102b1a4d call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1a53u);
  /* 102b1a53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1a56 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1a58 je 0x102b1aca */
  if (C.zf) goto L_102b1aca;
  /* 102b1a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1a5c call dword ptr [0x102b50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50ec))), 0x102b1a62u);
  /* 102b1a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1a65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1a67 je 0x102b1aca */
  if (C.zf) goto L_102b1aca;
  /* 102b1a69 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1a6e call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1a74u);
  /* 102b1a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1a79 jle 0x102b1aca */
  if ((C.zf||C.sf!=C.of)) goto L_102b1aca;
  /* 102b1a7b push 0x102b67d0 */
  push32((uint32_t)(0x102b67d0u));
  /* 102b1a80 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1a86u);
  /* 102b1a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1a8b jle 0x102b1aca */
  if ((C.zf||C.sf!=C.of)) goto L_102b1aca;
  /* 102b1a8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102b1a8f push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1a94 push 0x102b67b0 */
  push32((uint32_t)(0x102b67b0u));
  /* 102b1a99 push 0x102b6818 */
  push32((uint32_t)(0x102b6818u));
  /* 102b1a9e call dword ptr [0x102b50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50fc))), 0x102b1aa4u);
  /* 102b1aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1aa6 push 0x102b67d0 */
  push32((uint32_t)(0x102b67d0u));
  /* 102b1aab call ebp */
  call_ind((uint32_t)(EBP), 0x102b1aadu);
  /* 102b1aad push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1aaf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 102b1ab4 push 0x102b6818 */
  push32((uint32_t)(0x102b6818u));
  /* 102b1ab9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1abb call dword ptr [0x102b5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5100))), 0x102b1ac1u);
  /* 102b1ac1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102b1ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1ac5 call esi */
  call_ind((uint32_t)(ESI), 0x102b1ac7u);
  /* 102b1ac7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1aca:;
  /* 102b1aca push 7 */
  push32((uint32_t)(0x7u));
  /* 102b1acc call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1ad2u);
  /* 102b1ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1ad5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1ad7 je 0x102b1b48 */
  if (C.zf) goto L_102b1b48;
  /* 102b1ad9 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1ade push 0x102b67a0 */
  push32((uint32_t)(0x102b67a0u));
  /* 102b1ae3 call dword ptr [0x102b50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50f8))), 0x102b1ae9u);
  /* 102b1ae9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1aeb push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1af0 mov esi, eax */
  ESI = (EAX);
  /* 102b1af2 call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b1af8u);
  /* 102b1af8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1afb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1afd jne 0x102b1b48 */
  if (!C.zf) goto L_102b1b48;
  /* 102b1aff push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1b01 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1b06 call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b1b0cu);
  /* 102b1b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1b11 jle 0x102b1b48 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1b48;
  /* 102b1b13 push 0x102b67d8 */
  push32((uint32_t)(0x102b67d8u));
  /* 102b1b18 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1b1eu);
  /* 102b1b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1b23 jle 0x102b1b48 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1b48;
  /* 102b1b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b27 push 7 */
  push32((uint32_t)(0x7u));
  /* 102b1b29 call ebx */
  call_ind((uint32_t)(EBX), 0x102b1b2bu);
  /* 102b1b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b2d push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1b32 call ebp */
  call_ind((uint32_t)(EBP), 0x102b1b34u);
  /* 102b1b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1b36 push 0x102b67d8 */
  push32((uint32_t)(0x102b67d8u));
  /* 102b1b3b call ebp */
  call_ind((uint32_t)(EBP), 0x102b1b3du);
  /* 102b1b3d push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1b3f call dword ptr [0x102b5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5108))), 0x102b1b45u);
  /* 102b1b45 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1b48:;
  /* 102b1b48 mov esi, dword ptr [0x102b50b4] */
  ESI = (r32((uint32_t)(0x102b50b4)));
  /* 102b1b4e push 8 */
  push32((uint32_t)(0x8u));
  /* 102b1b50 call esi */
  call_ind((uint32_t)(ESI), 0x102b1b52u);
  /* 102b1b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1b55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1b57 je 0x102b1bae */
  if (C.zf) goto L_102b1bae;
  /* 102b1b59 push 7 */
  push32((uint32_t)(0x7u));
  /* 102b1b5b call esi */
  call_ind((uint32_t)(ESI), 0x102b1b5du);
  /* 102b1b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1b60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1b62 jne 0x102b1bae */
  if (!C.zf) goto L_102b1bae;
  /* 102b1b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b66 push 0x102b67d8 */
  push32((uint32_t)(0x102b67d8u));
  /* 102b1b6b call ebp */
  call_ind((uint32_t)(EBP), 0x102b1b6du);
  /* 102b1b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1b6f push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1b74 call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b1b7au);
  /* 102b1b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1b7c mov esi, eax */
  ESI = (EAX);
  /* 102b1b7e call dword ptr [0x102b510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b510c))), 0x102b1b84u);
  /* 102b1b84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1b87 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1b89 jne 0x102b1bae */
  if (!C.zf) goto L_102b1bae;
  /* 102b1b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b8d push 8 */
  push32((uint32_t)(0x8u));
  /* 102b1b8f call ebx */
  call_ind((uint32_t)(EBX), 0x102b1b91u);
  /* 102b1b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b93 push 0x102b67d8 */
  push32((uint32_t)(0x102b67d8u));
  /* 102b1b98 call ebp */
  call_ind((uint32_t)(EBP), 0x102b1b9au);
  /* 102b1b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1b9e push 0x102b67b8 */
  push32((uint32_t)(0x102b67b8u));
  /* 102b1ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1ba5 call dword ptr [0x102b50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50d8))), 0x102b1babu);
  /* 102b1bab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1bae:;
  /* 102b1bae push 0xa */
  push32((uint32_t)(0xau));
  /* 102b1bb0 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1bb6u);
  /* 102b1bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1bb9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1bbb je 0x102b1be9 */
  if (C.zf) goto L_102b1be9;
  /* 102b1bbd mov esi, dword ptr [0x102b50dc] */
  ESI = (r32((uint32_t)(0x102b50dc)));
  /* 102b1bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1bc5 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1bca call esi */
  call_ind((uint32_t)(ESI), 0x102b1bccu);
  /* 102b1bcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1bd1 jle 0x102b1bef */
  if ((C.zf||C.sf!=C.of)) goto L_102b1bef;
  /* 102b1bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1bd5 push 0xa */
  push32((uint32_t)(0xau));
  /* 102b1bd7 call ebx */
  call_ind((uint32_t)(EBX), 0x102b1bd9u);
  /* 102b1bd9 push 0x102b62f0 */
  push32((uint32_t)(0x102b62f0u));
  /* 102b1bde call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b1be4u);
  /* 102b1be4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1be7 jmp 0x102b1bef */
  goto L_102b1bef;
L_102b1be9:;
  /* 102b1be9 mov esi, dword ptr [0x102b50dc] */
  ESI = (r32((uint32_t)(0x102b50dc)));
L_102b1bef:;
  /* 102b1bef push 0xb */
  push32((uint32_t)(0xbu));
  /* 102b1bf1 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1bf7u);
  /* 102b1bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1bfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1bfc je 0x102b1caa */
  if (C.zf) goto L_102b1caa;
  /* 102b1c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c04 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1c09 call esi */
  call_ind((uint32_t)(ESI), 0x102b1c0bu);
  /* 102b1c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1c10 jle 0x102b1caa */
  if ((C.zf||C.sf!=C.of)) goto L_102b1caa;
  /* 102b1c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c18 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1c1d call esi */
  call_ind((uint32_t)(ESI), 0x102b1c1fu);
  /* 102b1c1f push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1c24 mov esi, eax */
  ESI = (EAX);
  /* 102b1c26 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1c2cu);
  /* 102b1c2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1c2f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1c31 je 0x102b1c42 */
  if (C.zf) goto L_102b1c42;
  /* 102b1c33 push 8 */
  push32((uint32_t)(0x8u));
  /* 102b1c35 call dword ptr [0x102b50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50b4))), 0x102b1c3bu);
  /* 102b1c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1c3e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1c40 jne 0x102b1caa */
  if (!C.zf) goto L_102b1caa;
L_102b1c42:;
  /* 102b1c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c44 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102b1c46 call ebx */
  call_ind((uint32_t)(EBX), 0x102b1c48u);
  /* 102b1c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c4a call edi */
  call_ind((uint32_t)(EDI), 0x102b1c4cu);
  /* 102b1c4c mov esi, 5 */
  ESI = (0x5u);
  /* 102b1c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c53 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1c58 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1c5a call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b1c60u);
  /* 102b1c60 imul esi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102b1c63 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102b1c66 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b1c69 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 102b1c6c push eax */
  push32((uint32_t)(EAX));
  /* 102b1c6d push 0x102b62e8 */
  push32((uint32_t)(0x102b62e8u));
  /* 102b1c72 call dword ptr [0x102b5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5104))), 0x102b1c78u);
  /* 102b1c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c7a call edi */
  call_ind((uint32_t)(EDI), 0x102b1c7cu);
  /* 102b1c7c mov esi, 5 */
  ESI = (0x5u);
  /* 102b1c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1c83 push 0x102b6730 */
  push32((uint32_t)(0x102b6730u));
  /* 102b1c88 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1c8a call dword ptr [0x102b50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50dc))), 0x102b1c90u);
  /* 102b1c90 imul esi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102b1c93 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102b1c96 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102b1c99 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 102b1c9c push ecx */
  push32((uint32_t)(ECX));
  /* 102b1c9d push 4 */
  push32((uint32_t)(0x4u));
  /* 102b1c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1ca1 call dword ptr [0x102b5114] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5114))), 0x102b1ca7u);
  /* 102b1ca7 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1caa:;
  /* 102b1caa mov esi, dword ptr [0x102b50b4] */
  ESI = (r32((uint32_t)(0x102b50b4)));
  /* 102b1cb0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102b1cb2 call esi */
  call_ind((uint32_t)(ESI), 0x102b1cb4u);
  /* 102b1cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1cb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1cb9 je 0x102b1d5e */
  if (C.zf) goto L_102b1d5e;
  /* 102b1cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1cc1 push 0x102b67a8 */
  push32((uint32_t)(0x102b67a8u));
  /* 102b1cc6 call dword ptr [0x102b50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50f4))), 0x102b1cccu);
  /* 102b1ccc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1cd1 jle 0x102b1d5e */
  if ((C.zf||C.sf!=C.of)) goto L_102b1d5e;
  /* 102b1cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1cd9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102b1cdb call ebx */
  call_ind((uint32_t)(EBX), 0x102b1cddu);
  /* 102b1cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1cdf call edi */
  call_ind((uint32_t)(EDI), 0x102b1ce1u);
  /* 102b1ce1 lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 102b1ce8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1cea lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102b1ced lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102b1cf0 mov eax, 0x7d0 */
  EAX = (0x7d0u);
  /* 102b1cf5 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 102b1cf7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1cf9 push eax */
  push32((uint32_t)(EAX));
  /* 102b1cfa push 0x102b62e0 */
  push32((uint32_t)(0x102b62e0u));
  /* 102b1cff call dword ptr [0x102b5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5104))), 0x102b1d05u);
  /* 102b1d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1d07 call edi */
  call_ind((uint32_t)(EDI), 0x102b1d09u);
  /* 102b1d09 lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 102b1d10 mov edx, 0x7d0 */
  EDX = (0x7d0u);
  /* 102b1d15 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1d17 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102b1d1a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102b1d1d shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102b1d1f sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b1d21 push edx */
  push32((uint32_t)(EDX));
  /* 102b1d22 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1d26 call dword ptr [0x102b5114] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5114))), 0x102b1d2cu);
  /* 102b1d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1d2e push 0x102b6738 */
  push32((uint32_t)(0x102b6738u));
  /* 102b1d33 call ebp */
  call_ind((uint32_t)(EBP), 0x102b1d35u);
  /* 102b1d35 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1d37 call dword ptr [0x102b5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5118))), 0x102b1d3du);
  /* 102b1d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1d3f push 0x102b67a8 */
  push32((uint32_t)(0x102b67a8u));
  /* 102b1d44 push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1d46 push 0x102b67f8 */
  push32((uint32_t)(0x102b67f8u));
  /* 102b1d4b push 0x102b67f0 */
  push32((uint32_t)(0x102b67f0u));
  /* 102b1d50 push 0x102b6740 */
  push32((uint32_t)(0x102b6740u));
  /* 102b1d55 call dword ptr [0x102b50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50c0))), 0x102b1d5bu);
  /* 102b1d5b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1d5e:;
  /* 102b1d5e push 0xd */
  push32((uint32_t)(0xdu));
  /* 102b1d60 call esi */
  call_ind((uint32_t)(ESI), 0x102b1d62u);
  /* 102b1d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1d65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1d67 je 0x102b1e39 */
  if (C.zf) goto L_102b1e39;
  /* 102b1d6d push 0x102b6778 */
  push32((uint32_t)(0x102b6778u));
  /* 102b1d72 call dword ptr [0x102b511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b511c))), 0x102b1d78u);
  /* 102b1d78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1d7d jle 0x102b1e39 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1e39;
  /* 102b1d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1d85 push 0x102b6808 */
  push32((uint32_t)(0x102b6808u));
  /* 102b1d8a call dword ptr [0x102b50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50f4))), 0x102b1d90u);
  /* 102b1d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1d95 jle 0x102b1e39 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1e39;
  /* 102b1d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1d9d push 0xd */
  push32((uint32_t)(0xdu));
  /* 102b1d9f call ebx */
  call_ind((uint32_t)(EBX), 0x102b1da1u);
  /* 102b1da1 push 0x102b62d8 */
  push32((uint32_t)(0x102b62d8u));
  /* 102b1da6 call dword ptr [0x102b5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5110))), 0x102b1dacu);
  /* 102b1dac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1daf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b1db1 je 0x102b1e2b */
  if (C.zf) goto L_102b1e2b;
  /* 102b1db3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1db7 call dword ptr [0x102b5120] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5120))), 0x102b1dbdu);
  /* 102b1dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1dc0 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1dc5 jl 0x102b1dfc */
  if ((C.sf!=C.of)) goto L_102b1dfc;
  /* 102b1dc7 push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 102b1dcc push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1dce push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1dd0 call dword ptr [0x102b5114] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5114))), 0x102b1dd6u);
  /* 102b1dd6 push 0x102b62cc */
  push32((uint32_t)(0x102b62ccu));
  /* 102b1ddb call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b1de1u);
  /* 102b1de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1de3 push 0x102b6778 */
  push32((uint32_t)(0x102b6778u));
  /* 102b1de8 call ebp */
  call_ind((uint32_t)(EBP), 0x102b1deau);
  /* 102b1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1dec push 5 */
  push32((uint32_t)(0x5u));
  /* 102b1dee call dword ptr [0x102b50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50e4))), 0x102b1df4u);
  /* 102b1df4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1df7 pop edi */
  EDI = (pop32());
  /* 102b1df8 pop esi */
  ESI = (pop32());
  /* 102b1df9 pop ebp */
  EBP = (pop32());
  /* 102b1dfa pop ebx */
  EBX = (pop32());
  /* 102b1dfb ret  */
  ESPCHK(0x102b15d0u, _esp0);
  ESP += 4; return;
L_102b1dfc:;
  /* 102b1dfc push 0x102b62c0 */
  push32((uint32_t)(0x102b62c0u));
  /* 102b1e01 call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b1e07u);
  /* 102b1e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1e0b call dword ptr [0x102b5140] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5140))), 0x102b1e11u);
  /* 102b1e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b1e13 push 0x102b6808 */
  push32((uint32_t)(0x102b6808u));
  /* 102b1e18 push 0x102b6778 */
  push32((uint32_t)(0x102b6778u));
  /* 102b1e1d call dword ptr [0x102b5124] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5124))), 0x102b1e23u);
  /* 102b1e23 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1e26 pop edi */
  EDI = (pop32());
  /* 102b1e27 pop esi */
  ESI = (pop32());
  /* 102b1e28 pop ebp */
  EBP = (pop32());
  /* 102b1e29 pop ebx */
  EBX = (pop32());
  /* 102b1e2a ret  */
  ESPCHK(0x102b15d0u, _esp0);
  ESP += 4; return;
L_102b1e2b:;
  /* 102b1e2b push 0x102b62b4 */
  push32((uint32_t)(0x102b62b4u));
  /* 102b1e30 call dword ptr [0x102b5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5130))), 0x102b1e36u);
  /* 102b1e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b1e39:;
  /* 102b1e39 pop edi */
  EDI = (pop32());
  /* 102b1e3a pop esi */
  ESI = (pop32());
  /* 102b1e3b pop ebp */
  EBP = (pop32());
  /* 102b1e3c pop ebx */
  EBX = (pop32());
  /* 102b1e3d ret  */
  ESPCHK(0x102b15d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e40 @ 0x102b1e40 (217 bytes, 57 insns) */
void f_102b1e40(void) {
  FTRACE(0x102b1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b1e40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b1e44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1e47 jne 0x102b1ed5 */
  if (!C.zf) goto L_102b1ed5;
  /* 102b1e4d call dword ptr [0x102b5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5094))), 0x102b1e53u);
  /* 102b1e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1e55 mov dword ptr [0x102b683c], eax */
  w32((uint32_t)(0x102b683c), (EAX));
  /* 102b1e5a call 0x102b2874 */
  push32(0x102b1e5fu); f_102b2874();
  /* 102b1e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1e61 pop ecx */
  ECX = (pop32());
  /* 102b1e62 je 0x102b1ea0 */
  if (C.zf) goto L_102b1ea0;
  /* 102b1e64 mov eax, dword ptr [0x102b683c] */
  EAX = (r32((uint32_t)(0x102b683c)));
  /* 102b1e69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102b1e6b mov cl, byte ptr [0x102b683d] */
  CL = (r8((uint32_t)(0x102b683d)));
  /* 102b1e71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b1e76 shr dword ptr [0x102b683c], 0x10 */
  w32((uint32_t)(0x102b683c), (sh_shr((uint32_t)(r32((uint32_t)(0x102b683c))), (0x10u)&0x1f, 32)));
  /* 102b1e7d mov dword ptr [0x102b6844], eax */
  w32((uint32_t)(0x102b6844), (EAX));
  /* 102b1e82 mov dword ptr [0x102b6848], ecx */
  w32((uint32_t)(0x102b6848), (ECX));
  /* 102b1e88 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102b1e8b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b1e8d mov dword ptr [0x102b6840], eax */
  w32((uint32_t)(0x102b6840), (EAX));
  /* 102b1e92 call 0x102b2107 */
  push32(0x102b1e97u); f_102b2107();
  /* 102b1e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1e99 jne 0x102b1ea4 */
  if (!C.zf) goto L_102b1ea4;
  /* 102b1e9b call 0x102b28b0 */
  push32(0x102b1ea0u); f_102b28b0();
L_102b1ea0:;
  /* 102b1ea0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b1ea2 jmp 0x102b1f16 */
  goto L_102b1f16;
L_102b1ea4:;
  /* 102b1ea4 call dword ptr [0x102b5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5090))), 0x102b1eaau);
  /* 102b1eaa mov dword ptr [0x102b6d98], eax */
  w32((uint32_t)(0x102b6d98), (EAX));
  /* 102b1eaf call 0x102b2742 */
  push32(0x102b1eb4u); f_102b2742();
  /* 102b1eb4 mov dword ptr [0x102b6828], eax */
  w32((uint32_t)(0x102b6828), (EAX));
  /* 102b1eb9 call 0x102b222c */
  push32(0x102b1ebeu); f_102b222c();
  /* 102b1ebe call 0x102b24f5 */
  push32(0x102b1ec3u); f_102b24f5();
  /* 102b1ec3 call 0x102b243c */
  push32(0x102b1ec8u); f_102b243c();
  /* 102b1ec8 call 0x102b1fe9 */
  push32(0x102b1ecdu); f_102b1fe9();
  /* 102b1ecd inc dword ptr [0x102b6824] */
  { uint32_t _r=(r32((uint32_t)(0x102b6824)))+1; w32((uint32_t)(0x102b6824), (_r)); fl_inc(_r,32); }
  /* 102b1ed3 jmp 0x102b1f13 */
  goto L_102b1f13;
L_102b1ed5:;
  /* 102b1ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102b1ed7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1ed9 jne 0x102b1f07 */
  if (!C.zf) goto L_102b1f07;
  /* 102b1edb cmp dword ptr [0x102b6824], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102b6824))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1ee1 jle 0x102b1ea0 */
  if ((C.zf||C.sf!=C.of)) goto L_102b1ea0;
  /* 102b1ee3 dec dword ptr [0x102b6824] */
  { uint32_t _r=(r32((uint32_t)(0x102b6824)))-1; w32((uint32_t)(0x102b6824), (_r)); fl_dec(_r,32); }
  /* 102b1ee9 cmp dword ptr [0x102b6874], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102b6874))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1eef jne 0x102b1ef6 */
  if (!C.zf) goto L_102b1ef6;
  /* 102b1ef1 call 0x102b2027 */
  push32(0x102b1ef6u); f_102b2027();
L_102b1ef6:;
  /* 102b1ef6 call 0x102b23e8 */
  push32(0x102b1efbu); f_102b23e8();
  /* 102b1efb call 0x102b215b */
  push32(0x102b1f00u); f_102b215b();
  /* 102b1f00 call 0x102b28b0 */
  push32(0x102b1f05u); f_102b28b0();
  /* 102b1f05 jmp 0x102b1f13 */
  goto L_102b1f13;
L_102b1f07:;
  /* 102b1f07 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f0a jne 0x102b1f13 */
  if (!C.zf) goto L_102b1f13;
  /* 102b1f0c push ecx */
  push32((uint32_t)(ECX));
  /* 102b1f0d call 0x102b218c */
  push32(0x102b1f12u); f_102b218c();
  /* 102b1f12 pop ecx */
  ECX = (pop32());
L_102b1f13:;
  /* 102b1f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b1f15 pop eax */
  EAX = (pop32());
L_102b1f16:;
  /* 102b1f16 ret 0xc */
  ESPCHK(0x102b1e40u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102b1f19 (157 bytes, 73 insns) */
void f_102b1f19(void) {
  FTRACE(0x102b1f19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b1f19 push ebp */
  push32((uint32_t)(EBP));
  /* 102b1f1a mov ebp, esp */
  EBP = (ESP);
  /* 102b1f1c push ebx */
  push32((uint32_t)(EBX));
  /* 102b1f1d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b1f20 push esi */
  push32((uint32_t)(ESI));
  /* 102b1f21 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102b1f24 push edi */
  push32((uint32_t)(EDI));
  /* 102b1f25 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102b1f28 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b1f2a jne 0x102b1f35 */
  if (!C.zf) goto L_102b1f35;
  /* 102b1f2c cmp dword ptr [0x102b6824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102b6824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f33 jmp 0x102b1f5b */
  goto L_102b1f5b;
L_102b1f35:;
  /* 102b1f35 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f38 je 0x102b1f3f */
  if (C.zf) goto L_102b1f3f;
  /* 102b1f3a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f3d jne 0x102b1f61 */
  if (!C.zf) goto L_102b1f61;
L_102b1f3f:;
  /* 102b1f3f mov eax, dword ptr [0x102b6d9c] */
  EAX = (r32((uint32_t)(0x102b6d9c)));
  /* 102b1f44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1f46 je 0x102b1f51 */
  if (C.zf) goto L_102b1f51;
  /* 102b1f48 push edi */
  push32((uint32_t)(EDI));
  /* 102b1f49 push esi */
  push32((uint32_t)(ESI));
  /* 102b1f4a push ebx */
  push32((uint32_t)(EBX));
  /* 102b1f4b call eax */
  call_ind((uint32_t)(EAX), 0x102b1f4du);
  /* 102b1f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1f4f je 0x102b1f5d */
  if (C.zf) goto L_102b1f5d;
L_102b1f51:;
  /* 102b1f51 push edi */
  push32((uint32_t)(EDI));
  /* 102b1f52 push esi */
  push32((uint32_t)(ESI));
  /* 102b1f53 push ebx */
  push32((uint32_t)(EBX));
  /* 102b1f54 call 0x102b1e40 */
  push32(0x102b1f59u); f_102b1e40();
  /* 102b1f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102b1f5b:;
  /* 102b1f5b jne 0x102b1f61 */
  if (!C.zf) goto L_102b1f61;
L_102b1f5d:;
  /* 102b1f5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b1f5f jmp 0x102b1faf */
  goto L_102b1faf;
L_102b1f61:;
  /* 102b1f61 push edi */
  push32((uint32_t)(EDI));
  /* 102b1f62 push esi */
  push32((uint32_t)(ESI));
  /* 102b1f63 push ebx */
  push32((uint32_t)(EBX));
  /* 102b1f64 call 0x102b1000 */
  push32(0x102b1f69u); f_102b1000();
  /* 102b1f69 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f6c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102b1f6f jne 0x102b1f7d */
  if (!C.zf) goto L_102b1f7d;
  /* 102b1f71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1f73 jne 0x102b1fac */
  if (!C.zf) goto L_102b1fac;
  /* 102b1f75 push edi */
  push32((uint32_t)(EDI));
  /* 102b1f76 push eax */
  push32((uint32_t)(EAX));
  /* 102b1f77 push ebx */
  push32((uint32_t)(EBX));
  /* 102b1f78 call 0x102b1e40 */
  push32(0x102b1f7du); f_102b1e40();
L_102b1f7d:;
  /* 102b1f7d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b1f7f je 0x102b1f86 */
  if (C.zf) goto L_102b1f86;
  /* 102b1f81 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f84 jne 0x102b1fac */
  if (!C.zf) goto L_102b1fac;
L_102b1f86:;
  /* 102b1f86 push edi */
  push32((uint32_t)(EDI));
  /* 102b1f87 push esi */
  push32((uint32_t)(ESI));
  /* 102b1f88 push ebx */
  push32((uint32_t)(EBX));
  /* 102b1f89 call 0x102b1e40 */
  push32(0x102b1f8eu); f_102b1e40();
  /* 102b1f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1f90 jne 0x102b1f95 */
  if (!C.zf) goto L_102b1f95;
  /* 102b1f92 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_102b1f95:;
  /* 102b1f95 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1f99 je 0x102b1fac */
  if (C.zf) goto L_102b1fac;
  /* 102b1f9b mov eax, dword ptr [0x102b6d9c] */
  EAX = (r32((uint32_t)(0x102b6d9c)));
  /* 102b1fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1fa2 je 0x102b1fac */
  if (C.zf) goto L_102b1fac;
  /* 102b1fa4 push edi */
  push32((uint32_t)(EDI));
  /* 102b1fa5 push esi */
  push32((uint32_t)(ESI));
  /* 102b1fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 102b1fa7 call eax */
  call_ind((uint32_t)(EAX), 0x102b1fa9u);
  /* 102b1fa9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102b1fac:;
  /* 102b1fac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102b1faf:;
  /* 102b1faf pop edi */
  EDI = (pop32());
  /* 102b1fb0 pop esi */
  ESI = (pop32());
  /* 102b1fb1 pop ebx */
  EBX = (pop32());
  /* 102b1fb2 pop ebp */
  EBP = (pop32());
  /* 102b1fb3 ret 0xc */
  ESPCHK(0x102b1f19u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x102b1fb6 (48 bytes, 15 insns) */
void f_102b1fb6(void) {
  FTRACE(0x102b1fb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b1fb6 mov eax, dword ptr [0x102b6830] */
  EAX = (r32((uint32_t)(0x102b6830)));
  /* 102b1fbb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1fbe je 0x102b1fcd */
  if (C.zf) goto L_102b1fcd;
  /* 102b1fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1fc2 jne 0x102b1fd2 */
  if (!C.zf) goto L_102b1fd2;
  /* 102b1fc4 cmp dword ptr [0x102b6834], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102b6834))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b1fcb jne 0x102b1fd2 */
  if (!C.zf) goto L_102b1fd2;
L_102b1fcd:;
  /* 102b1fcd call 0x102b2925 */
  push32(0x102b1fd2u); f_102b2925();
L_102b1fd2:;
  /* 102b1fd2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102b1fd6 call 0x102b295e */
  push32(0x102b1fdbu); f_102b295e();
  /* 102b1fdb push 0xff */
  push32((uint32_t)(0xffu));
  /* 102b1fe0 call dword ptr [0x102b6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b6348))), 0x102b1fe6u);
  /* 102b1fe6 pop ecx */
  ECX = (pop32());
  /* 102b1fe7 pop ecx */
  ECX = (pop32());
  /* 102b1fe8 ret  */
  ESPCHK(0x102b1fb6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fe9 @ 0x102b1fe9 (45 bytes, 12 insns) */
void f_102b1fe9(void) {
  FTRACE(0x102b1fe9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b1fe9 mov eax, dword ptr [0x102b6d94] */
  EAX = (r32((uint32_t)(0x102b6d94)));
  /* 102b1fee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b1ff0 je 0x102b1ff4 */
  if (C.zf) goto L_102b1ff4;
  /* 102b1ff2 call eax */
  call_ind((uint32_t)(EAX), 0x102b1ff4u);
L_102b1ff4:;
  /* 102b1ff4 push 0x102b6010 */
  push32((uint32_t)(0x102b6010u));
  /* 102b1ff9 push 0x102b6008 */
  push32((uint32_t)(0x102b6008u));
  /* 102b1ffe call 0x102b20ed */
  push32(0x102b2003u); f_102b20ed();
  /* 102b2003 push 0x102b6004 */
  push32((uint32_t)(0x102b6004u));
  /* 102b2008 push 0x102b6000 */
  push32((uint32_t)(0x102b6000u));
  /* 102b200d call 0x102b20ed */
  push32(0x102b2012u); f_102b20ed();
  /* 102b2012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2015 ret  */
  ESPCHK(0x102b1fe9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x102b2016 (17 bytes, 6 insns) */
void f_102b2016(void) {
  FTRACE(0x102b2016u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2016 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b2018 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b201a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102b201e call 0x102b2036 */
  push32(0x102b2023u); f_102b2036();
  /* 102b2023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2026 ret  */
  ESPCHK(0x102b2016u, _esp0);
  ESP += 4; return;
}

/* FUN_10002027 @ 0x102b2027 (15 bytes, 6 insns) */
void f_102b2027(void) {
  FTRACE(0x102b2027u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2027 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b2029 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b202b push 0 */
  push32((uint32_t)(0x0u));
  /* 102b202d call 0x102b2036 */
  push32(0x102b2032u); f_102b2036();
  /* 102b2032 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2035 ret  */
  ESPCHK(0x102b2027u, _esp0);
  ESP += 4; return;
}

/* FUN_10002036 @ 0x102b2036 (163 bytes, 53 insns) */
void f_102b2036(void) {
  FTRACE(0x102b2036u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2036 push edi */
  push32((uint32_t)(EDI));
  /* 102b2037 call 0x102b20db */
  push32(0x102b203cu); f_102b20db();
  /* 102b203c push 1 */
  push32((uint32_t)(0x1u));
  /* 102b203e pop edi */
  EDI = (pop32());
  /* 102b203f cmp dword ptr [0x102b6878], edi */
  { uint32_t _a=(r32((uint32_t)(0x102b6878))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2045 jne 0x102b2058 */
  if (!C.zf) goto L_102b2058;
  /* 102b2047 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102b204b call dword ptr [0x102b5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5004))), 0x102b2051u);
  /* 102b2051 push eax */
  push32((uint32_t)(EAX));
  /* 102b2052 call dword ptr [0x102b5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5000))), 0x102b2058u);
L_102b2058:;
  /* 102b2058 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b205d push ebx */
  push32((uint32_t)(EBX));
  /* 102b205e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102b2062 mov dword ptr [0x102b6874], edi */
  w32((uint32_t)(0x102b6874), (EDI));
  /* 102b2068 mov byte ptr [0x102b6870], bl */
  w8((uint32_t)(0x102b6870), (BL));
  /* 102b206e jne 0x102b20ac */
  if (!C.zf) goto L_102b20ac;
  /* 102b2070 mov eax, dword ptr [0x102b6d90] */
  EAX = (r32((uint32_t)(0x102b6d90)));
  /* 102b2075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2077 je 0x102b209b */
  if (C.zf) goto L_102b209b;
  /* 102b2079 mov ecx, dword ptr [0x102b6d8c] */
  ECX = (r32((uint32_t)(0x102b6d8c)));
  /* 102b207f push esi */
  push32((uint32_t)(ESI));
  /* 102b2080 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 102b2083 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2085 jb 0x102b209a */
  if (C.cf) goto L_102b209a;
L_102b2087:;
  /* 102b2087 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102b2089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b208b je 0x102b208f */
  if (C.zf) goto L_102b208f;
  /* 102b208d call eax */
  call_ind((uint32_t)(EAX), 0x102b208fu);
L_102b208f:;
  /* 102b208f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2092 cmp esi, dword ptr [0x102b6d90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102b6d90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2098 jae 0x102b2087 */
  if (!C.cf) goto L_102b2087;
L_102b209a:;
  /* 102b209a pop esi */
  ESI = (pop32());
L_102b209b:;
  /* 102b209b push 0x102b6018 */
  push32((uint32_t)(0x102b6018u));
  /* 102b20a0 push 0x102b6014 */
  push32((uint32_t)(0x102b6014u));
  /* 102b20a5 call 0x102b20ed */
  push32(0x102b20aau); f_102b20ed();
  /* 102b20aa pop ecx */
  ECX = (pop32());
  /* 102b20ab pop ecx */
  ECX = (pop32());
L_102b20ac:;
  /* 102b20ac push 0x102b6020 */
  push32((uint32_t)(0x102b6020u));
  /* 102b20b1 push 0x102b601c */
  push32((uint32_t)(0x102b601cu));
  /* 102b20b6 call 0x102b20ed */
  push32(0x102b20bbu); f_102b20ed();
  /* 102b20bb pop ecx */
  ECX = (pop32());
  /* 102b20bc pop ecx */
  ECX = (pop32());
  /* 102b20bd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102b20bf pop ebx */
  EBX = (pop32());
  /* 102b20c0 je 0x102b20c9 */
  if (C.zf) goto L_102b20c9;
  /* 102b20c2 call 0x102b20e4 */
  push32(0x102b20c7u); f_102b20e4();
  /* 102b20c7 pop edi */
  EDI = (pop32());
  /* 102b20c8 ret  */
  ESPCHK(0x102b2036u, _esp0);
  ESP += 4; return;
L_102b20c9:;
  /* 102b20c9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102b20cd mov dword ptr [0x102b6878], edi */
  w32((uint32_t)(0x102b6878), (EDI));
  /* 102b20d3 call dword ptr [0x102b5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5098))), 0x102b20d9u);
  /* 102b20d9 pop edi */
  EDI = (pop32());
  /* 102b20da ret  */
  ESPCHK(0x102b2036u, _esp0);
  ESP += 4; return;
}

/* FUN_100020db @ 0x102b20db (9 bytes, 4 insns) */
void f_102b20db(void) {
  FTRACE(0x102b20dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b20db push 0xd */
  push32((uint32_t)(0xdu));
  /* 102b20dd call 0x102b2b46 */
  push32(0x102b20e2u); f_102b2b46();
  /* 102b20e2 pop ecx */
  ECX = (pop32());
  /* 102b20e3 ret  */
  ESPCHK(0x102b20dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100020e4 @ 0x102b20e4 (9 bytes, 4 insns) */
void f_102b20e4(void) {
  FTRACE(0x102b20e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b20e4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102b20e6 call 0x102b2ba7 */
  push32(0x102b20ebu); f_102b2ba7();
  /* 102b20eb pop ecx */
  ECX = (pop32());
  /* 102b20ec ret  */
  ESPCHK(0x102b20e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100020ed @ 0x102b20ed (26 bytes, 12 insns) */
void f_102b20ed(void) {
  FTRACE(0x102b20edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b20ed push esi */
  push32((uint32_t)(ESI));
  /* 102b20ee mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_102b20f2:;
  /* 102b20f2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b20f6 jae 0x102b2105 */
  if (!C.cf) goto L_102b2105;
  /* 102b20f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102b20fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b20fc je 0x102b2100 */
  if (C.zf) goto L_102b2100;
  /* 102b20fe call eax */
  call_ind((uint32_t)(EAX), 0x102b2100u);
L_102b2100:;
  /* 102b2100 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2103 jmp 0x102b20f2 */
  goto L_102b20f2;
L_102b2105:;
  /* 102b2105 pop esi */
  ESI = (pop32());
  /* 102b2106 ret  */
  ESPCHK(0x102b20edu, _esp0);
  ESP += 4; return;
}

/* FUN_10002107 @ 0x102b2107 (84 bytes, 32 insns) */
void f_102b2107(void) {
  FTRACE(0x102b2107u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2107 push esi */
  push32((uint32_t)(ESI));
  /* 102b2108 call 0x102b2ab1 */
  push32(0x102b210du); f_102b2ab1();
  /* 102b210d call dword ptr [0x102b50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50a8))), 0x102b2113u);
  /* 102b2113 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2116 mov dword ptr [0x102b634c], eax */
  w32((uint32_t)(0x102b634c), (EAX));
  /* 102b211b je 0x102b2157 */
  if (C.zf) goto L_102b2157;
  /* 102b211d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102b211f push 1 */
  push32((uint32_t)(0x1u));
  /* 102b2121 call 0x102b2bbc */
  push32(0x102b2126u); f_102b2bbc();
  /* 102b2126 mov esi, eax */
  ESI = (EAX);
  /* 102b2128 pop ecx */
  ECX = (pop32());
  /* 102b2129 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b212b pop ecx */
  ECX = (pop32());
  /* 102b212c je 0x102b2157 */
  if (C.zf) goto L_102b2157;
  /* 102b212e push esi */
  push32((uint32_t)(ESI));
  /* 102b212f push dword ptr [0x102b634c] */
  push32((uint32_t)(r32((uint32_t)(0x102b634c))));
  /* 102b2135 call dword ptr [0x102b50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50a4))), 0x102b213bu);
  /* 102b213b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b213d je 0x102b2157 */
  if (C.zf) goto L_102b2157;
  /* 102b213f push esi */
  push32((uint32_t)(ESI));
  /* 102b2140 call 0x102b2179 */
  push32(0x102b2145u); f_102b2179();
  /* 102b2145 pop ecx */
  ECX = (pop32());
  /* 102b2146 call dword ptr [0x102b50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50a0))), 0x102b214cu);
  /* 102b214c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102b2150 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b2152 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102b2154 pop eax */
  EAX = (pop32());
  /* 102b2155 pop esi */
  ESI = (pop32());
  /* 102b2156 ret  */
  ESPCHK(0x102b2107u, _esp0);
  ESP += 4; return;
L_102b2157:;
  /* 102b2157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2159 pop esi */
  ESI = (pop32());
  /* 102b215a ret  */
  ESPCHK(0x102b2107u, _esp0);
  ESP += 4; return;
}

/* FUN_1000215b @ 0x102b215b (30 bytes, 8 insns) */
void f_102b215b(void) {
  FTRACE(0x102b215bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b215b call 0x102b2ada */
  push32(0x102b2160u); f_102b2ada();
  /* 102b2160 mov eax, dword ptr [0x102b634c] */
  EAX = (r32((uint32_t)(0x102b634c)));
  /* 102b2165 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2168 je 0x102b2178 */
  if (C.zf) goto L_102b2178;
  /* 102b216a push eax */
  push32((uint32_t)(EAX));
  /* 102b216b call dword ptr [0x102b508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b508c))), 0x102b2171u);
  /* 102b2171 or dword ptr [0x102b634c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x102b634c)))|(0xffffffffu); w32((uint32_t)(0x102b634c), (_r)); fl_logic(_r,32); }
L_102b2178:;
  /* 102b2178 ret  */
  ESPCHK(0x102b215bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002179 @ 0x102b2179 (19 bytes, 4 insns) */
void f_102b2179(void) {
  FTRACE(0x102b2179u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2179 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b217d mov dword ptr [eax + 0x50], 0x102b64c8 */
  w32((uint32_t)(EAX + 0x50), (0x102b64c8u));
  /* 102b2184 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 102b218b ret  */
  ESPCHK(0x102b2179u, _esp0);
  ESP += 4; return;
}

/* FUN_1000218c @ 0x102b218c (160 bytes, 62 insns) */
void f_102b218c(void) {
  FTRACE(0x102b218cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b218c mov eax, dword ptr [0x102b634c] */
  EAX = (r32((uint32_t)(0x102b634c)));
  /* 102b2191 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2194 je 0x102b222b */
  if (C.zf) goto L_102b222b;
  /* 102b219a push esi */
  push32((uint32_t)(ESI));
  /* 102b219b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102b219f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b21a1 jne 0x102b21b0 */
  if (!C.zf) goto L_102b21b0;
  /* 102b21a3 push eax */
  push32((uint32_t)(EAX));
  /* 102b21a4 call dword ptr [0x102b509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b509c))), 0x102b21aau);
  /* 102b21aa mov esi, eax */
  ESI = (EAX);
  /* 102b21ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b21ae je 0x102b221c */
  if (C.zf) goto L_102b221c;
L_102b21b0:;
  /* 102b21b0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 102b21b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b21b5 je 0x102b21be */
  if (C.zf) goto L_102b21be;
  /* 102b21b7 push eax */
  push32((uint32_t)(EAX));
  /* 102b21b8 call 0x102b2c49 */
  push32(0x102b21bdu); f_102b2c49();
  /* 102b21bd pop ecx */
  ECX = (pop32());
L_102b21be:;
  /* 102b21be mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 102b21c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b21c3 je 0x102b21cc */
  if (C.zf) goto L_102b21cc;
  /* 102b21c5 push eax */
  push32((uint32_t)(EAX));
  /* 102b21c6 call 0x102b2c49 */
  push32(0x102b21cbu); f_102b2c49();
  /* 102b21cb pop ecx */
  ECX = (pop32());
L_102b21cc:;
  /* 102b21cc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 102b21cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b21d1 je 0x102b21da */
  if (C.zf) goto L_102b21da;
  /* 102b21d3 push eax */
  push32((uint32_t)(EAX));
  /* 102b21d4 call 0x102b2c49 */
  push32(0x102b21d9u); f_102b2c49();
  /* 102b21d9 pop ecx */
  ECX = (pop32());
L_102b21da:;
  /* 102b21da mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 102b21dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b21df je 0x102b21e8 */
  if (C.zf) goto L_102b21e8;
  /* 102b21e1 push eax */
  push32((uint32_t)(EAX));
  /* 102b21e2 call 0x102b2c49 */
  push32(0x102b21e7u); f_102b2c49();
  /* 102b21e7 pop ecx */
  ECX = (pop32());
L_102b21e8:;
  /* 102b21e8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 102b21eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b21ed je 0x102b21f6 */
  if (C.zf) goto L_102b21f6;
  /* 102b21ef push eax */
  push32((uint32_t)(EAX));
  /* 102b21f0 call 0x102b2c49 */
  push32(0x102b21f5u); f_102b2c49();
  /* 102b21f5 pop ecx */
  ECX = (pop32());
L_102b21f6:;
  /* 102b21f6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 102b21f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b21fb je 0x102b2204 */
  if (C.zf) goto L_102b2204;
  /* 102b21fd push eax */
  push32((uint32_t)(EAX));
  /* 102b21fe call 0x102b2c49 */
  push32(0x102b2203u); f_102b2c49();
  /* 102b2203 pop ecx */
  ECX = (pop32());
L_102b2204:;
  /* 102b2204 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 102b2207 cmp eax, 0x102b64c8 */
  { uint32_t _a=(EAX),_b=(0x102b64c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b220c je 0x102b2215 */
  if (C.zf) goto L_102b2215;
  /* 102b220e push eax */
  push32((uint32_t)(EAX));
  /* 102b220f call 0x102b2c49 */
  push32(0x102b2214u); f_102b2c49();
  /* 102b2214 pop ecx */
  ECX = (pop32());
L_102b2215:;
  /* 102b2215 push esi */
  push32((uint32_t)(ESI));
  /* 102b2216 call 0x102b2c49 */
  push32(0x102b221bu); f_102b2c49();
  /* 102b221b pop ecx */
  ECX = (pop32());
L_102b221c:;
  /* 102b221c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b221e push dword ptr [0x102b634c] */
  push32((uint32_t)(r32((uint32_t)(0x102b634c))));
  /* 102b2224 call dword ptr [0x102b50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b50a4))), 0x102b222au);
  /* 102b222a pop esi */
  ESI = (pop32());
L_102b222b:;
  /* 102b222b ret  */
  ESPCHK(0x102b218cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000222c @ 0x102b222c (444 bytes, 150 insns) */
void f_102b222c(void) {
  FTRACE(0x102b222cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b222c push ebp */
  push32((uint32_t)(EBP));
  /* 102b222d mov ebp, esp */
  EBP = (ESP);
  /* 102b222f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2232 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2233 push esi */
  push32((uint32_t)(ESI));
  /* 102b2234 push edi */
  push32((uint32_t)(EDI));
  /* 102b2235 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102b223a call 0x102b2c91 */
  push32(0x102b223fu); f_102b2c91();
  /* 102b223f mov esi, eax */
  ESI = (EAX);
  /* 102b2241 pop ecx */
  ECX = (pop32());
  /* 102b2242 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b2244 jne 0x102b224e */
  if (!C.zf) goto L_102b224e;
  /* 102b2246 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102b2248 call 0x102b1fb6 */
  push32(0x102b224du); f_102b1fb6();
  /* 102b224d pop ecx */
  ECX = (pop32());
L_102b224e:;
  /* 102b224e mov dword ptr [0x102b6c80], esi */
  w32((uint32_t)(0x102b6c80), (ESI));
  /* 102b2254 mov dword ptr [0x102b6d80], 0x20 */
  w32((uint32_t)(0x102b6d80), (0x20u));
  /* 102b225e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102b2264:;
  /* 102b2264 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2266 jae 0x102b2286 */
  if (!C.cf) goto L_102b2286;
  /* 102b2268 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102b226c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102b226f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102b2273 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102b2277 mov eax, dword ptr [0x102b6c80] */
  EAX = (r32((uint32_t)(0x102b6c80)));
  /* 102b227c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b227f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2284 jmp 0x102b2264 */
  goto L_102b2264;
L_102b2286:;
  /* 102b2286 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102b2289 push eax */
  push32((uint32_t)(EAX));
  /* 102b228a call dword ptr [0x102b5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5084))), 0x102b2290u);
  /* 102b2290 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102b2295 je 0x102b236c */
  if (C.zf) goto L_102b236c;
  /* 102b229b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102b229e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b22a0 je 0x102b236c */
  if (C.zf) goto L_102b236c;
  /* 102b22a6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 102b22a8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 102b22ab lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 102b22ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102b22b1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 102b22b6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b22b8 jl 0x102b22bc */
  if ((C.sf!=C.of)) goto L_102b22bc;
  /* 102b22ba mov edi, eax */
  EDI = (EAX);
L_102b22bc:;
  /* 102b22bc cmp dword ptr [0x102b6d80], edi */
  { uint32_t _a=(r32((uint32_t)(0x102b6d80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b22c2 jge 0x102b231a */
  if ((C.sf==C.of)) goto L_102b231a;
  /* 102b22c4 mov esi, 0x102b6c84 */
  ESI = (0x102b6c84u);
L_102b22c9:;
  /* 102b22c9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102b22ce call 0x102b2c91 */
  push32(0x102b22d3u); f_102b2c91();
  /* 102b22d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b22d5 pop ecx */
  ECX = (pop32());
  /* 102b22d6 je 0x102b2314 */
  if (C.zf) goto L_102b2314;
  /* 102b22d8 add dword ptr [0x102b6d80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x102b6d80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x102b6d80), (_r)); fl_add(_a,_b,_r,32); }
  /* 102b22df mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102b22e1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_102b22e7:;
  /* 102b22e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b22e9 jae 0x102b2307 */
  if (!C.cf) goto L_102b2307;
  /* 102b22eb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 102b22ef or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102b22f2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102b22f6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 102b22fa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102b22fc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b22ff add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2305 jmp 0x102b22e7 */
  goto L_102b22e7;
L_102b2307:;
  /* 102b2307 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b230a cmp dword ptr [0x102b6d80], edi */
  { uint32_t _a=(r32((uint32_t)(0x102b6d80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2310 jl 0x102b22c9 */
  if ((C.sf!=C.of)) goto L_102b22c9;
  /* 102b2312 jmp 0x102b231a */
  goto L_102b231a;
L_102b2314:;
  /* 102b2314 mov edi, dword ptr [0x102b6d80] */
  EDI = (r32((uint32_t)(0x102b6d80)));
L_102b231a:;
  /* 102b231a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102b231c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b231e jle 0x102b236c */
  if ((C.zf||C.sf!=C.of)) goto L_102b236c;
L_102b2320:;
  /* 102b2320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b2323 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102b2325 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2328 je 0x102b2362 */
  if (C.zf) goto L_102b2362;
  /* 102b232a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102b232c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102b232e je 0x102b2362 */
  if (C.zf) goto L_102b2362;
  /* 102b2330 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102b2332 jne 0x102b233f */
  if (!C.zf) goto L_102b233f;
  /* 102b2334 push ecx */
  push32((uint32_t)(ECX));
  /* 102b2335 call dword ptr [0x102b507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b507c))), 0x102b233bu);
  /* 102b233b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b233d je 0x102b2362 */
  if (C.zf) goto L_102b2362;
L_102b233f:;
  /* 102b233f mov ecx, esi */
  ECX = (ESI);
  /* 102b2341 mov eax, esi */
  EAX = (ESI);
  /* 102b2343 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102b2346 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102b2349 mov ecx, dword ptr [ecx*4 + 0x102b6c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x102b6c80)));
  /* 102b2350 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102b2353 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102b2356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b2359 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 102b235b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102b235d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 102b235f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_102b2362:;
  /* 102b2362 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102b2366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b2367 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102b2368 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b236a jl 0x102b2320 */
  if ((C.sf!=C.of)) goto L_102b2320;
L_102b236c:;
  /* 102b236c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102b236e:;
  /* 102b236e mov ecx, dword ptr [0x102b6c80] */
  ECX = (r32((uint32_t)(0x102b6c80)));
  /* 102b2374 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102b2377 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b237b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102b237e jne 0x102b23cd */
  if (!C.zf) goto L_102b23cd;
  /* 102b2380 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102b2382 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102b2386 jne 0x102b238d */
  if (!C.zf) goto L_102b238d;
  /* 102b2388 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102b238a pop eax */
  EAX = (pop32());
  /* 102b238b jmp 0x102b2397 */
  goto L_102b2397;
L_102b238d:;
  /* 102b238d mov eax, ebx */
  EAX = (EBX);
  /* 102b238f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102b2390 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102b2392 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2394 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102b2397:;
  /* 102b2397 push eax */
  push32((uint32_t)(EAX));
  /* 102b2398 call dword ptr [0x102b5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5080))), 0x102b239eu);
  /* 102b239e mov edi, eax */
  EDI = (EAX);
  /* 102b23a0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b23a3 je 0x102b23bc */
  if (C.zf) goto L_102b23bc;
  /* 102b23a5 push edi */
  push32((uint32_t)(EDI));
  /* 102b23a6 call dword ptr [0x102b507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b507c))), 0x102b23acu);
  /* 102b23ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b23ae je 0x102b23bc */
  if (C.zf) goto L_102b23bc;
  /* 102b23b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b23b5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102b23b7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b23ba jne 0x102b23c2 */
  if (!C.zf) goto L_102b23c2;
L_102b23bc:;
  /* 102b23bc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102b23c0 jmp 0x102b23d1 */
  goto L_102b23d1;
L_102b23c2:;
  /* 102b23c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b23c5 jne 0x102b23d1 */
  if (!C.zf) goto L_102b23d1;
  /* 102b23c7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102b23cb jmp 0x102b23d1 */
  goto L_102b23d1;
L_102b23cd:;
  /* 102b23cd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102b23d1:;
  /* 102b23d1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102b23d2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b23d5 jl 0x102b236e */
  if ((C.sf!=C.of)) goto L_102b236e;
  /* 102b23d7 push dword ptr [0x102b6d80] */
  push32((uint32_t)(r32((uint32_t)(0x102b6d80))));
  /* 102b23dd call dword ptr [0x102b5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5088))), 0x102b23e3u);
  /* 102b23e3 pop edi */
  EDI = (pop32());
  /* 102b23e4 pop esi */
  ESI = (pop32());
  /* 102b23e5 pop ebx */
  EBX = (pop32());
  /* 102b23e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b23e7 ret  */
  ESPCHK(0x102b222cu, _esp0);
  ESP += 4; return;
}

/* FUN_100023e8 @ 0x102b23e8 (84 bytes, 33 insns) */
void f_102b23e8(void) {
  FTRACE(0x102b23e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b23e8 push ebx */
  push32((uint32_t)(EBX));
  /* 102b23e9 push esi */
  push32((uint32_t)(ESI));
  /* 102b23ea push edi */
  push32((uint32_t)(EDI));
  /* 102b23eb mov esi, 0x102b6c80 */
  ESI = (0x102b6c80u);
L_102b23f0:;
  /* 102b23f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102b23f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b23f4 je 0x102b242d */
  if (C.zf) goto L_102b242d;
  /* 102b23f6 mov edi, eax */
  EDI = (EAX);
  /* 102b23f8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b23fd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b23ff jae 0x102b2422 */
  if (!C.cf) goto L_102b2422;
  /* 102b2401 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_102b2404:;
  /* 102b2404 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2408 je 0x102b2411 */
  if (C.zf) goto L_102b2411;
  /* 102b240a push ebx */
  push32((uint32_t)(EBX));
  /* 102b240b call dword ptr [0x102b5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5074))), 0x102b2411u);
L_102b2411:;
  /* 102b2411 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102b2413 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2416 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b241b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b241e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2420 jb 0x102b2404 */
  if (C.cf) goto L_102b2404;
L_102b2422:;
  /* 102b2422 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b2424 call 0x102b2c49 */
  push32(0x102b2429u); f_102b2c49();
  /* 102b2429 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102b242c pop ecx */
  ECX = (pop32());
L_102b242d:;
  /* 102b242d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2430 cmp esi, 0x102b6d80 */
  { uint32_t _a=(ESI),_b=(0x102b6d80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2436 jl 0x102b23f0 */
  if ((C.sf!=C.of)) goto L_102b23f0;
  /* 102b2438 pop edi */
  EDI = (pop32());
  /* 102b2439 pop esi */
  ESI = (pop32());
  /* 102b243a pop ebx */
  EBX = (pop32());
  /* 102b243b ret  */
  ESPCHK(0x102b23e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000243c @ 0x102b243c (185 bytes, 71 insns) */
void f_102b243c(void) {
  FTRACE(0x102b243cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b243c push ebx */
  push32((uint32_t)(EBX));
  /* 102b243d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b243f cmp dword ptr [0x102b6d88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102b6d88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2445 push esi */
  push32((uint32_t)(ESI));
  /* 102b2446 push edi */
  push32((uint32_t)(EDI));
  /* 102b2447 jne 0x102b244e */
  if (!C.zf) goto L_102b244e;
  /* 102b2449 call 0x102b3263 */
  push32(0x102b244eu); f_102b3263();
L_102b244e:;
  /* 102b244e mov esi, dword ptr [0x102b6828] */
  ESI = (r32((uint32_t)(0x102b6828)));
  /* 102b2454 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_102b2456:;
  /* 102b2456 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b2458 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b245a je 0x102b246e */
  if (C.zf) goto L_102b246e;
  /* 102b245c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b245e je 0x102b2461 */
  if (C.zf) goto L_102b2461;
  /* 102b2460 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102b2461:;
  /* 102b2461 push esi */
  push32((uint32_t)(ESI));
  /* 102b2462 call 0x102b2e10 */
  push32(0x102b2467u); f_102b2e10();
  /* 102b2467 pop ecx */
  ECX = (pop32());
  /* 102b2468 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 102b246c jmp 0x102b2456 */
  goto L_102b2456;
L_102b246e:;
  /* 102b246e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102b2475 push eax */
  push32((uint32_t)(EAX));
  /* 102b2476 call 0x102b2c91 */
  push32(0x102b247bu); f_102b2c91();
  /* 102b247b mov esi, eax */
  ESI = (EAX);
  /* 102b247d pop ecx */
  ECX = (pop32());
  /* 102b247e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2480 mov dword ptr [0x102b6858], esi */
  w32((uint32_t)(0x102b6858), (ESI));
  /* 102b2486 jne 0x102b2490 */
  if (!C.zf) goto L_102b2490;
  /* 102b2488 push 9 */
  push32((uint32_t)(0x9u));
  /* 102b248a call 0x102b1fb6 */
  push32(0x102b248fu); f_102b1fb6();
  /* 102b248f pop ecx */
  ECX = (pop32());
L_102b2490:;
  /* 102b2490 mov edi, dword ptr [0x102b6828] */
  EDI = (r32((uint32_t)(0x102b6828)));
  /* 102b2496 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2498 je 0x102b24d3 */
  if (C.zf) goto L_102b24d3;
  /* 102b249a push ebp */
  push32((uint32_t)(EBP));
L_102b249b:;
  /* 102b249b push edi */
  push32((uint32_t)(EDI));
  /* 102b249c call 0x102b2e10 */
  push32(0x102b24a1u); f_102b2e10();
  /* 102b24a1 mov ebp, eax */
  EBP = (EAX);
  /* 102b24a3 pop ecx */
  ECX = (pop32());
  /* 102b24a4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102b24a5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b24a8 je 0x102b24cc */
  if (C.zf) goto L_102b24cc;
  /* 102b24aa push ebp */
  push32((uint32_t)(EBP));
  /* 102b24ab call 0x102b2c91 */
  push32(0x102b24b0u); f_102b2c91();
  /* 102b24b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b24b2 pop ecx */
  ECX = (pop32());
  /* 102b24b3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102b24b5 jne 0x102b24bf */
  if (!C.zf) goto L_102b24bf;
  /* 102b24b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 102b24b9 call 0x102b1fb6 */
  push32(0x102b24beu); f_102b1fb6();
  /* 102b24be pop ecx */
  ECX = (pop32());
L_102b24bf:;
  /* 102b24bf push edi */
  push32((uint32_t)(EDI));
  /* 102b24c0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b24c2 call 0x102b2d20 */
  push32(0x102b24c7u); f_102b2d20();
  /* 102b24c7 pop ecx */
  ECX = (pop32());
  /* 102b24c8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b24cb pop ecx */
  ECX = (pop32());
L_102b24cc:;
  /* 102b24cc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b24ce cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b24d0 jne 0x102b249b */
  if (!C.zf) goto L_102b249b;
  /* 102b24d2 pop ebp */
  EBP = (pop32());
L_102b24d3:;
  /* 102b24d3 push dword ptr [0x102b6828] */
  push32((uint32_t)(r32((uint32_t)(0x102b6828))));
  /* 102b24d9 call 0x102b2c49 */
  push32(0x102b24deu); f_102b2c49();
  /* 102b24de pop ecx */
  ECX = (pop32());
  /* 102b24df mov dword ptr [0x102b6828], ebx */
  w32((uint32_t)(0x102b6828), (EBX));
  /* 102b24e5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 102b24e7 pop edi */
  EDI = (pop32());
  /* 102b24e8 pop esi */
  ESI = (pop32());
  /* 102b24e9 mov dword ptr [0x102b6d84], 1 */
  w32((uint32_t)(0x102b6d84), (0x1u));
  /* 102b24f3 pop ebx */
  EBX = (pop32());
  /* 102b24f4 ret  */
  ESPCHK(0x102b243cu, _esp0);
  ESP += 4; return;
}

/* FUN_100024f5 @ 0x102b24f5 (153 bytes, 62 insns) */
void f_102b24f5(void) {
  FTRACE(0x102b24f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b24f5 push ebp */
  push32((uint32_t)(EBP));
  /* 102b24f6 mov ebp, esp */
  EBP = (ESP);
  /* 102b24f8 push ecx */
  push32((uint32_t)(ECX));
  /* 102b24f9 push ecx */
  push32((uint32_t)(ECX));
  /* 102b24fa push ebx */
  push32((uint32_t)(EBX));
  /* 102b24fb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b24fd cmp dword ptr [0x102b6d88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102b6d88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2503 push esi */
  push32((uint32_t)(ESI));
  /* 102b2504 push edi */
  push32((uint32_t)(EDI));
  /* 102b2505 jne 0x102b250c */
  if (!C.zf) goto L_102b250c;
  /* 102b2507 call 0x102b3263 */
  push32(0x102b250cu); f_102b3263();
L_102b250c:;
  /* 102b250c mov esi, 0x102b687c */
  ESI = (0x102b687cu);
  /* 102b2511 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102b2516 push esi */
  push32((uint32_t)(ESI));
  /* 102b2517 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2518 call dword ptr [0x102b5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5070))), 0x102b251eu);
  /* 102b251e mov eax, dword ptr [0x102b6d98] */
  EAX = (r32((uint32_t)(0x102b6d98)));
  /* 102b2523 mov dword ptr [0x102b6868], esi */
  w32((uint32_t)(0x102b6868), (ESI));
  /* 102b2529 mov edi, esi */
  EDI = (ESI);
  /* 102b252b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b252d je 0x102b2531 */
  if (C.zf) goto L_102b2531;
  /* 102b252f mov edi, eax */
  EDI = (EAX);
L_102b2531:;
  /* 102b2531 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102b2534 push eax */
  push32((uint32_t)(EAX));
  /* 102b2535 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102b2538 push eax */
  push32((uint32_t)(EAX));
  /* 102b2539 push ebx */
  push32((uint32_t)(EBX));
  /* 102b253a push ebx */
  push32((uint32_t)(EBX));
  /* 102b253b push edi */
  push32((uint32_t)(EDI));
  /* 102b253c call 0x102b258e */
  push32(0x102b2541u); f_102b258e();
  /* 102b2541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102b2544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b2547 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102b254a push eax */
  push32((uint32_t)(EAX));
  /* 102b254b call 0x102b2c91 */
  push32(0x102b2550u); f_102b2c91();
  /* 102b2550 mov esi, eax */
  ESI = (EAX);
  /* 102b2552 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2555 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2557 jne 0x102b2561 */
  if (!C.zf) goto L_102b2561;
  /* 102b2559 push 8 */
  push32((uint32_t)(0x8u));
  /* 102b255b call 0x102b1fb6 */
  push32(0x102b2560u); f_102b1fb6();
  /* 102b2560 pop ecx */
  ECX = (pop32());
L_102b2561:;
  /* 102b2561 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102b2564 push eax */
  push32((uint32_t)(EAX));
  /* 102b2565 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102b2568 push eax */
  push32((uint32_t)(EAX));
  /* 102b2569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b256c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 102b256f push eax */
  push32((uint32_t)(EAX));
  /* 102b2570 push esi */
  push32((uint32_t)(ESI));
  /* 102b2571 push edi */
  push32((uint32_t)(EDI));
  /* 102b2572 call 0x102b258e */
  push32(0x102b2577u); f_102b258e();
  /* 102b2577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b257a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b257d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102b257e mov dword ptr [0x102b6850], esi */
  w32((uint32_t)(0x102b6850), (ESI));
  /* 102b2584 pop edi */
  EDI = (pop32());
  /* 102b2585 pop esi */
  ESI = (pop32());
  /* 102b2586 mov dword ptr [0x102b684c], eax */
  w32((uint32_t)(0x102b684c), (EAX));
  /* 102b258b pop ebx */
  EBX = (pop32());
  /* 102b258c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b258d ret  */
  ESPCHK(0x102b24f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000258e @ 0x102b258e (436 bytes, 187 insns) */
void f_102b258e(void) {
  FTRACE(0x102b258eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b258e push ebp */
  push32((uint32_t)(EBP));
  /* 102b258f mov ebp, esp */
  EBP = (ESP);
  /* 102b2591 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102b2594 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102b2597 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2598 push esi */
  push32((uint32_t)(ESI));
  /* 102b2599 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102b259c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102b259f push edi */
  push32((uint32_t)(EDI));
  /* 102b25a0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102b25a3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102b25a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b25ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b25ae je 0x102b25b8 */
  if (C.zf) goto L_102b25b8;
  /* 102b25b0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102b25b2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b25b5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102b25b8:;
  /* 102b25b8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b25bb jne 0x102b2601 */
  if (!C.zf) goto L_102b2601;
L_102b25bd:;
  /* 102b25bd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102b25c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b25c1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b25c4 je 0x102b25ef */
  if (C.zf) goto L_102b25ef;
  /* 102b25c6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b25c8 je 0x102b25ef */
  if (C.zf) goto L_102b25ef;
  /* 102b25ca movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102b25cd test byte ptr [edx + 0x102b6b61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102b6b61)))&(0x4u); fl_logic(_r,8); }
  /* 102b25d4 je 0x102b25e2 */
  if (C.zf) goto L_102b25e2;
  /* 102b25d6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b25d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b25da je 0x102b25e2 */
  if (C.zf) goto L_102b25e2;
  /* 102b25dc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b25de mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102b25e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b25e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102b25e2:;
  /* 102b25e2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b25e4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b25e6 je 0x102b25bd */
  if (C.zf) goto L_102b25bd;
  /* 102b25e8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b25ea mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102b25ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b25ed jmp 0x102b25bd */
  goto L_102b25bd;
L_102b25ef:;
  /* 102b25ef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b25f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b25f3 je 0x102b25f9 */
  if (C.zf) goto L_102b25f9;
  /* 102b25f5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102b25f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102b25f9:;
  /* 102b25f9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b25fc jne 0x102b2644 */
  if (!C.zf) goto L_102b2644;
  /* 102b25fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b25ff jmp 0x102b2644 */
  goto L_102b2644;
L_102b2601:;
  /* 102b2601 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b2603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b2605 je 0x102b260c */
  if (C.zf) goto L_102b260c;
  /* 102b2607 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b2609 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102b260b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102b260c:;
  /* 102b260c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b260e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b260f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102b2612 test byte ptr [ebx + 0x102b6b61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102b6b61)))&(0x4u); fl_logic(_r,8); }
  /* 102b2619 je 0x102b2627 */
  if (C.zf) goto L_102b2627;
  /* 102b261b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b261d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b261f je 0x102b2626 */
  if (C.zf) goto L_102b2626;
  /* 102b2621 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 102b2623 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 102b2625 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102b2626:;
  /* 102b2626 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102b2627:;
  /* 102b2627 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b262a je 0x102b2635 */
  if (C.zf) goto L_102b2635;
  /* 102b262c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b262e je 0x102b2639 */
  if (C.zf) goto L_102b2639;
  /* 102b2630 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2633 jne 0x102b2601 */
  if (!C.zf) goto L_102b2601;
L_102b2635:;
  /* 102b2635 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b2637 jne 0x102b263c */
  if (!C.zf) goto L_102b263c;
L_102b2639:;
  /* 102b2639 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102b263a jmp 0x102b2644 */
  goto L_102b2644;
L_102b263c:;
  /* 102b263c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b263e je 0x102b2644 */
  if (C.zf) goto L_102b2644;
  /* 102b2640 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_102b2644:;
  /* 102b2644 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_102b2648:;
  /* 102b2648 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b264b je 0x102b2731 */
  if (C.zf) goto L_102b2731;
L_102b2651:;
  /* 102b2651 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b2653 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2656 je 0x102b265d */
  if (C.zf) goto L_102b265d;
  /* 102b2658 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b265b jne 0x102b2660 */
  if (!C.zf) goto L_102b2660;
L_102b265d:;
  /* 102b265d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b265e jmp 0x102b2651 */
  goto L_102b2651;
L_102b2660:;
  /* 102b2660 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2663 je 0x102b2731 */
  if (C.zf) goto L_102b2731;
  /* 102b2669 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b266b je 0x102b2675 */
  if (C.zf) goto L_102b2675;
  /* 102b266d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102b266f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2672 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102b2675:;
  /* 102b2675 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102b2678 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_102b267a:;
  /* 102b267a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102b2681 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102b2683:;
  /* 102b2683 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2686 jne 0x102b268c */
  if (!C.zf) goto L_102b268c;
  /* 102b2688 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2689 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102b268a jmp 0x102b2683 */
  goto L_102b2683;
L_102b268c:;
  /* 102b268c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b268f jne 0x102b26bd */
  if (!C.zf) goto L_102b26bd;
  /* 102b2691 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102b2694 jne 0x102b26bb */
  if (!C.zf) goto L_102b26bb;
  /* 102b2696 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b2698 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b269b je 0x102b26aa */
  if (C.zf) goto L_102b26aa;
  /* 102b269d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b26a1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102b26a4 jne 0x102b26aa */
  if (!C.zf) goto L_102b26aa;
  /* 102b26a6 mov eax, edx */
  EAX = (EDX);
  /* 102b26a8 jmp 0x102b26ad */
  goto L_102b26ad;
L_102b26aa:;
  /* 102b26aa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102b26ad:;
  /* 102b26ad mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102b26b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102b26b2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b26b5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102b26b8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102b26bb:;
  /* 102b26bb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102b26bd:;
  /* 102b26bd mov edx, ebx */
  EDX = (EBX);
  /* 102b26bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102b26c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102b26c2 je 0x102b26d2 */
  if (C.zf) goto L_102b26d2;
  /* 102b26c4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102b26c5:;
  /* 102b26c5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b26c7 je 0x102b26cd */
  if (C.zf) goto L_102b26cd;
  /* 102b26c9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102b26cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102b26cd:;
  /* 102b26cd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b26cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102b26d0 jne 0x102b26c5 */
  if (!C.zf) goto L_102b26c5;
L_102b26d2:;
  /* 102b26d2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b26d4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b26d6 je 0x102b2722 */
  if (C.zf) goto L_102b2722;
  /* 102b26d8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b26dc jne 0x102b26e8 */
  if (!C.zf) goto L_102b26e8;
  /* 102b26de cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b26e1 je 0x102b2722 */
  if (C.zf) goto L_102b2722;
  /* 102b26e3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b26e6 je 0x102b2722 */
  if (C.zf) goto L_102b2722;
L_102b26e8:;
  /* 102b26e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b26ec je 0x102b271c */
  if (C.zf) goto L_102b271c;
  /* 102b26ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b26f0 je 0x102b270b */
  if (C.zf) goto L_102b270b;
  /* 102b26f2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102b26f5 test byte ptr [ebx + 0x102b6b61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102b6b61)))&(0x4u); fl_logic(_r,8); }
  /* 102b26fc je 0x102b2704 */
  if (C.zf) goto L_102b2704;
  /* 102b26fe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102b2700 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b2701 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2702 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102b2704:;
  /* 102b2704 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102b2706 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102b2708 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b2709 jmp 0x102b271a */
  goto L_102b271a;
L_102b270b:;
  /* 102b270b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102b270e test byte ptr [edx + 0x102b6b61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102b6b61)))&(0x4u); fl_logic(_r,8); }
  /* 102b2715 je 0x102b271a */
  if (C.zf) goto L_102b271a;
  /* 102b2717 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2718 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102b271a:;
  /* 102b271a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102b271c:;
  /* 102b271c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b271d jmp 0x102b267a */
  goto L_102b267a;
L_102b2722:;
  /* 102b2722 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b2724 je 0x102b272a */
  if (C.zf) goto L_102b272a;
  /* 102b2726 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102b2729 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102b272a:;
  /* 102b272a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102b272c jmp 0x102b2648 */
  goto L_102b2648;
L_102b2731:;
  /* 102b2731 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b2733 je 0x102b2738 */
  if (C.zf) goto L_102b2738;
  /* 102b2735 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102b2738:;
  /* 102b2738 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102b273b pop edi */
  EDI = (pop32());
  /* 102b273c pop esi */
  ESI = (pop32());
  /* 102b273d pop ebx */
  EBX = (pop32());
  /* 102b273e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 102b2740 pop ebp */
  EBP = (pop32());
  /* 102b2741 ret  */
  ESPCHK(0x102b258eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002742 @ 0x102b2742 (306 bytes, 132 insns) */
void f_102b2742(void) {
  FTRACE(0x102b2742u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2742 push ecx */
  push32((uint32_t)(ECX));
  /* 102b2743 push ecx */
  push32((uint32_t)(ECX));
  /* 102b2744 mov eax, dword ptr [0x102b6980] */
  EAX = (r32((uint32_t)(0x102b6980)));
  /* 102b2749 push ebx */
  push32((uint32_t)(EBX));
  /* 102b274a push ebp */
  push32((uint32_t)(EBP));
  /* 102b274b mov ebp, dword ptr [0x102b505c] */
  EBP = (r32((uint32_t)(0x102b505c)));
  /* 102b2751 push esi */
  push32((uint32_t)(ESI));
  /* 102b2752 push edi */
  push32((uint32_t)(EDI));
  /* 102b2753 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b2755 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102b2757 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b2759 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b275b jne 0x102b2790 */
  if (!C.zf) goto L_102b2790;
  /* 102b275d call ebp */
  call_ind((uint32_t)(EBP), 0x102b275fu);
  /* 102b275f mov esi, eax */
  ESI = (EAX);
  /* 102b2761 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2763 je 0x102b2771 */
  if (C.zf) goto L_102b2771;
  /* 102b2765 mov dword ptr [0x102b6980], 1 */
  w32((uint32_t)(0x102b6980), (0x1u));
  /* 102b276f jmp 0x102b2799 */
  goto L_102b2799;
L_102b2771:;
  /* 102b2771 call dword ptr [0x102b506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b506c))), 0x102b2777u);
  /* 102b2777 mov edi, eax */
  EDI = (EAX);
  /* 102b2779 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b277b je 0x102b286b */
  if (C.zf) goto L_102b286b;
  /* 102b2781 mov dword ptr [0x102b6980], 2 */
  w32((uint32_t)(0x102b6980), (0x2u));
  /* 102b278b jmp 0x102b281f */
  goto L_102b281f;
L_102b2790:;
  /* 102b2790 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2793 jne 0x102b281a */
  if (!C.zf) goto L_102b281a;
L_102b2799:;
  /* 102b2799 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b279b jne 0x102b27a9 */
  if (!C.zf) goto L_102b27a9;
  /* 102b279d call ebp */
  call_ind((uint32_t)(EBP), 0x102b279fu);
  /* 102b279f mov esi, eax */
  ESI = (EAX);
  /* 102b27a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b27a3 je 0x102b286b */
  if (C.zf) goto L_102b286b;
L_102b27a9:;
  /* 102b27a9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102b27ac mov eax, esi */
  EAX = (ESI);
  /* 102b27ae je 0x102b27be */
  if (C.zf) goto L_102b27be;
L_102b27b0:;
  /* 102b27b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b27b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b27b2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102b27b5 jne 0x102b27b0 */
  if (!C.zf) goto L_102b27b0;
  /* 102b27b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b27b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b27b9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102b27bc jne 0x102b27b0 */
  if (!C.zf) goto L_102b27b0;
L_102b27be:;
  /* 102b27be sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b27c0 mov edi, dword ptr [0x102b5064] */
  EDI = (r32((uint32_t)(0x102b5064)));
  /* 102b27c6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102b27c8 push ebx */
  push32((uint32_t)(EBX));
  /* 102b27c9 push ebx */
  push32((uint32_t)(EBX));
  /* 102b27ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b27cb push ebx */
  push32((uint32_t)(EBX));
  /* 102b27cc push ebx */
  push32((uint32_t)(EBX));
  /* 102b27cd push eax */
  push32((uint32_t)(EAX));
  /* 102b27ce push esi */
  push32((uint32_t)(ESI));
  /* 102b27cf push ebx */
  push32((uint32_t)(EBX));
  /* 102b27d0 push ebx */
  push32((uint32_t)(EBX));
  /* 102b27d1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 102b27d5 call edi */
  call_ind((uint32_t)(EDI), 0x102b27d7u);
  /* 102b27d7 mov ebp, eax */
  EBP = (EAX);
  /* 102b27d9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b27db je 0x102b280f */
  if (C.zf) goto L_102b280f;
  /* 102b27dd push ebp */
  push32((uint32_t)(EBP));
  /* 102b27de call 0x102b2c91 */
  push32(0x102b27e3u); f_102b2c91();
  /* 102b27e3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b27e5 pop ecx */
  ECX = (pop32());
  /* 102b27e6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102b27ea je 0x102b280f */
  if (C.zf) goto L_102b280f;
  /* 102b27ec push ebx */
  push32((uint32_t)(EBX));
  /* 102b27ed push ebx */
  push32((uint32_t)(EBX));
  /* 102b27ee push ebp */
  push32((uint32_t)(EBP));
  /* 102b27ef push eax */
  push32((uint32_t)(EAX));
  /* 102b27f0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 102b27f4 push esi */
  push32((uint32_t)(ESI));
  /* 102b27f5 push ebx */
  push32((uint32_t)(EBX));
  /* 102b27f6 push ebx */
  push32((uint32_t)(EBX));
  /* 102b27f7 call edi */
  call_ind((uint32_t)(EDI), 0x102b27f9u);
  /* 102b27f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b27fb jne 0x102b280b */
  if (!C.zf) goto L_102b280b;
  /* 102b27fd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102b2801 call 0x102b2c49 */
  push32(0x102b2806u); f_102b2c49();
  /* 102b2806 pop ecx */
  ECX = (pop32());
  /* 102b2807 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_102b280b:;
  /* 102b280b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_102b280f:;
  /* 102b280f push esi */
  push32((uint32_t)(ESI));
  /* 102b2810 call dword ptr [0x102b5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5068))), 0x102b2816u);
  /* 102b2816 mov eax, ebx */
  EAX = (EBX);
  /* 102b2818 jmp 0x102b286d */
  goto L_102b286d;
L_102b281a:;
  /* 102b281a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b281d jne 0x102b286b */
  if (!C.zf) goto L_102b286b;
L_102b281f:;
  /* 102b281f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2821 jne 0x102b282f */
  if (!C.zf) goto L_102b282f;
  /* 102b2823 call dword ptr [0x102b506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b506c))), 0x102b2829u);
  /* 102b2829 mov edi, eax */
  EDI = (EAX);
  /* 102b282b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b282d je 0x102b286b */
  if (C.zf) goto L_102b286b;
L_102b282f:;
  /* 102b282f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2831 mov eax, edi */
  EAX = (EDI);
  /* 102b2833 je 0x102b283f */
  if (C.zf) goto L_102b283f;
L_102b2835:;
  /* 102b2835 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2836 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2838 jne 0x102b2835 */
  if (!C.zf) goto L_102b2835;
  /* 102b283a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b283b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b283d jne 0x102b2835 */
  if (!C.zf) goto L_102b2835;
L_102b283f:;
  /* 102b283f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2841 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2842 mov ebp, eax */
  EBP = (EAX);
  /* 102b2844 push ebp */
  push32((uint32_t)(EBP));
  /* 102b2845 call 0x102b2c91 */
  push32(0x102b284au); f_102b2c91();
  /* 102b284a mov esi, eax */
  ESI = (EAX);
  /* 102b284c pop ecx */
  ECX = (pop32());
  /* 102b284d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b284f jne 0x102b2855 */
  if (!C.zf) goto L_102b2855;
  /* 102b2851 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102b2853 jmp 0x102b2860 */
  goto L_102b2860;
L_102b2855:;
  /* 102b2855 push ebp */
  push32((uint32_t)(EBP));
  /* 102b2856 push edi */
  push32((uint32_t)(EDI));
  /* 102b2857 push esi */
  push32((uint32_t)(ESI));
  /* 102b2858 call 0x102b3280 */
  push32(0x102b285du); f_102b3280();
  /* 102b285d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b2860:;
  /* 102b2860 push edi */
  push32((uint32_t)(EDI));
  /* 102b2861 call dword ptr [0x102b5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5078))), 0x102b2867u);
  /* 102b2867 mov eax, esi */
  EAX = (ESI);
  /* 102b2869 jmp 0x102b286d */
  goto L_102b286d;
L_102b286b:;
  /* 102b286b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102b286d:;
  /* 102b286d pop edi */
  EDI = (pop32());
  /* 102b286e pop esi */
  ESI = (pop32());
  /* 102b286f pop ebp */
  EBP = (pop32());
  /* 102b2870 pop ebx */
  EBX = (pop32());
  /* 102b2871 pop ecx */
  ECX = (pop32());
  /* 102b2872 pop ecx */
  ECX = (pop32());
  /* 102b2873 ret  */
  ESPCHK(0x102b2742u, _esp0);
  ESP += 4; return;
}

/* FUN_10002874 @ 0x102b2874 (60 bytes, 20 insns) */
void f_102b2874(void) {
  FTRACE(0x102b2874u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2876 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b2878 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b287c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102b2881 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102b2884 push eax */
  push32((uint32_t)(EAX));
  /* 102b2885 call dword ptr [0x102b5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5060))), 0x102b288bu);
  /* 102b288b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b288d mov dword ptr [0x102b6c68], eax */
  w32((uint32_t)(0x102b6c68), (EAX));
  /* 102b2892 je 0x102b28a9 */
  if (C.zf) goto L_102b28a9;
  /* 102b2894 call 0x102b35b5 */
  push32(0x102b2899u); f_102b35b5();
  /* 102b2899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b289b jne 0x102b28ac */
  if (!C.zf) goto L_102b28ac;
  /* 102b289d push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b28a3 call dword ptr [0x102b5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5058))), 0x102b28a9u);
L_102b28a9:;
  /* 102b28a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b28ab ret  */
  ESPCHK(0x102b2874u, _esp0);
  ESP += 4; return;
L_102b28ac:;
  /* 102b28ac push 1 */
  push32((uint32_t)(0x1u));
  /* 102b28ae pop eax */
  EAX = (pop32());
  /* 102b28af ret  */
  ESPCHK(0x102b2874u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x102b28b0 (117 bytes, 38 insns) */
void f_102b28b0(void) {
  FTRACE(0x102b28b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b28b0 push ebx */
  push32((uint32_t)(EBX));
  /* 102b28b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b28b3 cmp dword ptr [0x102b6a38], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102b6a38))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b28b9 push ebp */
  push32((uint32_t)(EBP));
  /* 102b28ba mov ebp, dword ptr [0x102b504c] */
  EBP = (r32((uint32_t)(0x102b504c)));
  /* 102b28c0 jle 0x102b2906 */
  if ((C.zf||C.sf!=C.of)) goto L_102b2906;
  /* 102b28c2 mov eax, dword ptr [0x102b6a3c] */
  EAX = (r32((uint32_t)(0x102b6a3c)));
  /* 102b28c7 push esi */
  push32((uint32_t)(ESI));
  /* 102b28c8 push edi */
  push32((uint32_t)(EDI));
  /* 102b28c9 mov edi, dword ptr [0x102b5050] */
  EDI = (r32((uint32_t)(0x102b5050)));
  /* 102b28cf lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_102b28d2:;
  /* 102b28d2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102b28d7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102b28dc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b28de call edi */
  call_ind((uint32_t)(EDI), 0x102b28e0u);
  /* 102b28e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102b28e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b28e7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b28e9 call edi */
  call_ind((uint32_t)(EDI), 0x102b28ebu);
  /* 102b28eb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 102b28ee push 0 */
  push32((uint32_t)(0x0u));
  /* 102b28f0 push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b28f6 call ebp */
  call_ind((uint32_t)(EBP), 0x102b28f8u);
  /* 102b28f8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b28fb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102b28fc cmp ebx, dword ptr [0x102b6a38] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102b6a38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2902 jl 0x102b28d2 */
  if ((C.sf!=C.of)) goto L_102b28d2;
  /* 102b2904 pop edi */
  EDI = (pop32());
  /* 102b2905 pop esi */
  ESI = (pop32());
L_102b2906:;
  /* 102b2906 push dword ptr [0x102b6a3c] */
  push32((uint32_t)(r32((uint32_t)(0x102b6a3c))));
  /* 102b290c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b290e push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b2914 call ebp */
  call_ind((uint32_t)(EBP), 0x102b2916u);
  /* 102b2916 push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b291c call dword ptr [0x102b5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5058))), 0x102b2922u);
  /* 102b2922 pop ebp */
  EBP = (pop32());
  /* 102b2923 pop ebx */
  EBX = (pop32());
  /* 102b2924 ret  */
  ESPCHK(0x102b28b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002925 @ 0x102b2925 (57 bytes, 18 insns) */
void f_102b2925(void) {
  FTRACE(0x102b2925u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2925 mov eax, dword ptr [0x102b6830] */
  EAX = (r32((uint32_t)(0x102b6830)));
  /* 102b292a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b292d je 0x102b293c */
  if (C.zf) goto L_102b293c;
  /* 102b292f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2931 jne 0x102b295d */
  if (!C.zf) goto L_102b295d;
  /* 102b2933 cmp dword ptr [0x102b6834], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102b6834))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b293a jne 0x102b295d */
  if (!C.zf) goto L_102b295d;
L_102b293c:;
  /* 102b293c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 102b2941 call 0x102b295e */
  push32(0x102b2946u); f_102b295e();
  /* 102b2946 mov eax, dword ptr [0x102b6984] */
  EAX = (r32((uint32_t)(0x102b6984)));
  /* 102b294b pop ecx */
  ECX = (pop32());
  /* 102b294c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b294e je 0x102b2952 */
  if (C.zf) goto L_102b2952;
  /* 102b2950 call eax */
  call_ind((uint32_t)(EAX), 0x102b2952u);
L_102b2952:;
  /* 102b2952 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102b2957 call 0x102b295e */
  push32(0x102b295cu); f_102b295e();
  /* 102b295c pop ecx */
  ECX = (pop32());
L_102b295d:;
  /* 102b295d ret  */
  ESPCHK(0x102b2925u, _esp0);
  ESP += 4; return;
}

/* FUN_1000295e @ 0x102b295e (339 bytes, 100 insns) */
void f_102b295e(void) {
  FTRACE(0x102b295eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b295e push ebp */
  push32((uint32_t)(EBP));
  /* 102b295f mov ebp, esp */
  EBP = (ESP);
  /* 102b2961 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b296a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102b296c mov eax, 0x102b6378 */
  EAX = (0x102b6378u);
L_102b2971:;
  /* 102b2971 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2973 je 0x102b2980 */
  if (C.zf) goto L_102b2980;
  /* 102b2975 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2978 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2979 cmp eax, 0x102b6408 */
  { uint32_t _a=(EAX),_b=(0x102b6408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b297e jl 0x102b2971 */
  if ((C.sf!=C.of)) goto L_102b2971;
L_102b2980:;
  /* 102b2980 push esi */
  push32((uint32_t)(ESI));
  /* 102b2981 mov esi, ecx */
  ESI = (ECX);
  /* 102b2983 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 102b2986 cmp edx, dword ptr [esi + 0x102b6378] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x102b6378))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b298c jne 0x102b2aae */
  if (!C.zf) goto L_102b2aae;
  /* 102b2992 mov eax, dword ptr [0x102b6830] */
  EAX = (r32((uint32_t)(0x102b6830)));
  /* 102b2997 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b299a je 0x102b2a88 */
  if (C.zf) goto L_102b2a88;
  /* 102b29a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b29a2 jne 0x102b29b1 */
  if (!C.zf) goto L_102b29b1;
  /* 102b29a4 cmp dword ptr [0x102b6834], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102b6834))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b29ab je 0x102b2a88 */
  if (C.zf) goto L_102b2a88;
L_102b29b1:;
  /* 102b29b1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b29b7 je 0x102b2aae */
  if (C.zf) goto L_102b2aae;
  /* 102b29bd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102b29c3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102b29c8 push eax */
  push32((uint32_t)(EAX));
  /* 102b29c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b29cb call dword ptr [0x102b5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5070))), 0x102b29d1u);
  /* 102b29d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b29d3 jne 0x102b29e8 */
  if (!C.zf) goto L_102b29e8;
  /* 102b29d5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102b29db push 0x102b5438 */
  push32((uint32_t)(0x102b5438u));
  /* 102b29e0 push eax */
  push32((uint32_t)(EAX));
  /* 102b29e1 call 0x102b2d20 */
  push32(0x102b29e6u); f_102b2d20();
  /* 102b29e6 pop ecx */
  ECX = (pop32());
  /* 102b29e7 pop ecx */
  ECX = (pop32());
L_102b29e8:;
  /* 102b29e8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102b29ee push edi */
  push32((uint32_t)(EDI));
  /* 102b29ef push eax */
  push32((uint32_t)(EAX));
  /* 102b29f0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 102b29f6 call 0x102b2e10 */
  push32(0x102b29fbu); f_102b2e10();
  /* 102b29fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b29fc pop ecx */
  ECX = (pop32());
  /* 102b29fd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2a00 jbe 0x102b2a2b */
  if ((C.cf||C.zf)) goto L_102b2a2b;
  /* 102b2a02 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102b2a08 push eax */
  push32((uint32_t)(EAX));
  /* 102b2a09 call 0x102b2e10 */
  push32(0x102b2a0eu); f_102b2e10();
  /* 102b2a0e mov edi, eax */
  EDI = (EAX);
  /* 102b2a10 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102b2a16 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2a19 push 3 */
  push32((uint32_t)(0x3u));
  /* 102b2a1b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2a1d push 0x102b5434 */
  push32((uint32_t)(0x102b5434u));
  /* 102b2a22 push edi */
  push32((uint32_t)(EDI));
  /* 102b2a23 call 0x102b3e90 */
  push32(0x102b2a28u); f_102b3e90();
  /* 102b2a28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b2a2b:;
  /* 102b2a2b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102b2a31 push 0x102b5418 */
  push32((uint32_t)(0x102b5418u));
  /* 102b2a36 push eax */
  push32((uint32_t)(EAX));
  /* 102b2a37 call 0x102b2d20 */
  push32(0x102b2a3cu); f_102b2d20();
  /* 102b2a3c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102b2a42 push edi */
  push32((uint32_t)(EDI));
  /* 102b2a43 push eax */
  push32((uint32_t)(EAX));
  /* 102b2a44 call 0x102b2d30 */
  push32(0x102b2a49u); f_102b2d30();
  /* 102b2a49 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102b2a4f push 0x102b5414 */
  push32((uint32_t)(0x102b5414u));
  /* 102b2a54 push eax */
  push32((uint32_t)(EAX));
  /* 102b2a55 call 0x102b2d30 */
  push32(0x102b2a5au); f_102b2d30();
  /* 102b2a5a push dword ptr [esi + 0x102b637c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x102b637c))));
  /* 102b2a60 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102b2a66 push eax */
  push32((uint32_t)(EAX));
  /* 102b2a67 call 0x102b2d30 */
  push32(0x102b2a6cu); f_102b2d30();
  /* 102b2a6c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 102b2a71 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102b2a77 push 0x102b53ec */
  push32((uint32_t)(0x102b53ecu));
  /* 102b2a7c push eax */
  push32((uint32_t)(EAX));
  /* 102b2a7d call 0x102b3dfe */
  push32(0x102b2a82u); f_102b3dfe();
  /* 102b2a82 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2a85 pop edi */
  EDI = (pop32());
  /* 102b2a86 jmp 0x102b2aae */
  goto L_102b2aae;
L_102b2a88:;
  /* 102b2a88 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102b2a8b lea esi, [esi + 0x102b637c] */
  ESI = ((uint32_t)(ESI + 0x102b637c));
  /* 102b2a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b2a93 push eax */
  push32((uint32_t)(EAX));
  /* 102b2a94 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b2a96 call 0x102b2e10 */
  push32(0x102b2a9bu); f_102b2e10();
  /* 102b2a9b pop ecx */
  ECX = (pop32());
  /* 102b2a9c push eax */
  push32((uint32_t)(EAX));
  /* 102b2a9d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b2a9f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102b2aa1 call dword ptr [0x102b5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5080))), 0x102b2aa7u);
  /* 102b2aa7 push eax */
  push32((uint32_t)(EAX));
  /* 102b2aa8 call dword ptr [0x102b5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5054))), 0x102b2aaeu);
L_102b2aae:;
  /* 102b2aae pop esi */
  ESI = (pop32());
  /* 102b2aaf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b2ab0 ret  */
  ESPCHK(0x102b295eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab1 @ 0x102b2ab1 (41 bytes, 12 insns) */
void f_102b2ab1(void) {
  FTRACE(0x102b2ab1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2ab1 push esi */
  push32((uint32_t)(ESI));
  /* 102b2ab2 mov esi, dword ptr [0x102b5044] */
  ESI = (r32((uint32_t)(0x102b5044)));
  /* 102b2ab8 push dword ptr [0x102b644c] */
  push32((uint32_t)(r32((uint32_t)(0x102b644c))));
  /* 102b2abe call esi */
  call_ind((uint32_t)(ESI), 0x102b2ac0u);
  /* 102b2ac0 push dword ptr [0x102b643c] */
  push32((uint32_t)(r32((uint32_t)(0x102b643c))));
  /* 102b2ac6 call esi */
  call_ind((uint32_t)(ESI), 0x102b2ac8u);
  /* 102b2ac8 push dword ptr [0x102b642c] */
  push32((uint32_t)(r32((uint32_t)(0x102b642c))));
  /* 102b2ace call esi */
  call_ind((uint32_t)(ESI), 0x102b2ad0u);
  /* 102b2ad0 push dword ptr [0x102b640c] */
  push32((uint32_t)(r32((uint32_t)(0x102b640c))));
  /* 102b2ad6 call esi */
  call_ind((uint32_t)(ESI), 0x102b2ad8u);
  /* 102b2ad8 pop esi */
  ESI = (pop32());
  /* 102b2ad9 ret  */
  ESPCHK(0x102b2ab1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ada @ 0x102b2ada (108 bytes, 34 insns) */
void f_102b2ada(void) {
  FTRACE(0x102b2adau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2ada push esi */
  push32((uint32_t)(ESI));
  /* 102b2adb push edi */
  push32((uint32_t)(EDI));
  /* 102b2adc mov edi, dword ptr [0x102b5074] */
  EDI = (r32((uint32_t)(0x102b5074)));
  /* 102b2ae2 mov esi, 0x102b6408 */
  ESI = (0x102b6408u);
L_102b2ae7:;
  /* 102b2ae7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102b2ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2aeb je 0x102b2b18 */
  if (C.zf) goto L_102b2b18;
  /* 102b2aed cmp esi, 0x102b644c */
  { uint32_t _a=(ESI),_b=(0x102b644cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2af3 je 0x102b2b18 */
  if (C.zf) goto L_102b2b18;
  /* 102b2af5 cmp esi, 0x102b643c */
  { uint32_t _a=(ESI),_b=(0x102b643cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2afb je 0x102b2b18 */
  if (C.zf) goto L_102b2b18;
  /* 102b2afd cmp esi, 0x102b642c */
  { uint32_t _a=(ESI),_b=(0x102b642cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2b03 je 0x102b2b18 */
  if (C.zf) goto L_102b2b18;
  /* 102b2b05 cmp esi, 0x102b640c */
  { uint32_t _a=(ESI),_b=(0x102b640cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2b0b je 0x102b2b18 */
  if (C.zf) goto L_102b2b18;
  /* 102b2b0d push eax */
  push32((uint32_t)(EAX));
  /* 102b2b0e call edi */
  call_ind((uint32_t)(EDI), 0x102b2b10u);
  /* 102b2b10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b2b12 call 0x102b2c49 */
  push32(0x102b2b17u); f_102b2c49();
  /* 102b2b17 pop ecx */
  ECX = (pop32());
L_102b2b18:;
  /* 102b2b18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2b1b cmp esi, 0x102b64c8 */
  { uint32_t _a=(ESI),_b=(0x102b64c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2b21 jl 0x102b2ae7 */
  if ((C.sf!=C.of)) goto L_102b2ae7;
  /* 102b2b23 push dword ptr [0x102b642c] */
  push32((uint32_t)(r32((uint32_t)(0x102b642c))));
  /* 102b2b29 call edi */
  call_ind((uint32_t)(EDI), 0x102b2b2bu);
  /* 102b2b2b push dword ptr [0x102b643c] */
  push32((uint32_t)(r32((uint32_t)(0x102b643c))));
  /* 102b2b31 call edi */
  call_ind((uint32_t)(EDI), 0x102b2b33u);
  /* 102b2b33 push dword ptr [0x102b644c] */
  push32((uint32_t)(r32((uint32_t)(0x102b644c))));
  /* 102b2b39 call edi */
  call_ind((uint32_t)(EDI), 0x102b2b3bu);
  /* 102b2b3b push dword ptr [0x102b640c] */
  push32((uint32_t)(r32((uint32_t)(0x102b640c))));
  /* 102b2b41 call edi */
  call_ind((uint32_t)(EDI), 0x102b2b43u);
  /* 102b2b43 pop edi */
  EDI = (pop32());
  /* 102b2b44 pop esi */
  ESI = (pop32());
  /* 102b2b45 ret  */
  ESPCHK(0x102b2adau, _esp0);
  ESP += 4; return;
}

/* FUN_10002b46 @ 0x102b2b46 (97 bytes, 37 insns) */
void f_102b2b46(void) {
  FTRACE(0x102b2b46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2b46 push ebp */
  push32((uint32_t)(EBP));
  /* 102b2b47 mov ebp, esp */
  EBP = (ESP);
  /* 102b2b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b2b4c push esi */
  push32((uint32_t)(ESI));
  /* 102b2b4d cmp dword ptr [eax*4 + 0x102b6408], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x102b6408))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2b55 lea esi, [eax*4 + 0x102b6408] */
  ESI = ((uint32_t)(EAX*4 + 0x102b6408));
  /* 102b2b5c jne 0x102b2b9c */
  if (!C.zf) goto L_102b2b9c;
  /* 102b2b5e push edi */
  push32((uint32_t)(EDI));
  /* 102b2b5f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102b2b61 call 0x102b2c91 */
  push32(0x102b2b66u); f_102b2c91();
  /* 102b2b66 mov edi, eax */
  EDI = (EAX);
  /* 102b2b68 pop ecx */
  ECX = (pop32());
  /* 102b2b69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b2b6b jne 0x102b2b75 */
  if (!C.zf) goto L_102b2b75;
  /* 102b2b6d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102b2b6f call 0x102b1fb6 */
  push32(0x102b2b74u); f_102b1fb6();
  /* 102b2b74 pop ecx */
  ECX = (pop32());
L_102b2b75:;
  /* 102b2b75 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102b2b77 call 0x102b2b46 */
  push32(0x102b2b7cu); f_102b2b46();
  /* 102b2b7c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2b7f pop ecx */
  ECX = (pop32());
  /* 102b2b80 push edi */
  push32((uint32_t)(EDI));
  /* 102b2b81 jne 0x102b2b8d */
  if (!C.zf) goto L_102b2b8d;
  /* 102b2b83 call dword ptr [0x102b5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5044))), 0x102b2b89u);
  /* 102b2b89 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102b2b8b jmp 0x102b2b93 */
  goto L_102b2b93;
L_102b2b8d:;
  /* 102b2b8d call 0x102b2c49 */
  push32(0x102b2b92u); f_102b2c49();
  /* 102b2b92 pop ecx */
  ECX = (pop32());
L_102b2b93:;
  /* 102b2b93 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102b2b95 call 0x102b2ba7 */
  push32(0x102b2b9au); f_102b2ba7();
  /* 102b2b9a pop ecx */
  ECX = (pop32());
  /* 102b2b9b pop edi */
  EDI = (pop32());
L_102b2b9c:;
  /* 102b2b9c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102b2b9e call dword ptr [0x102b5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5040))), 0x102b2ba4u);
  /* 102b2ba4 pop esi */
  ESI = (pop32());
  /* 102b2ba5 pop ebp */
  EBP = (pop32());
  /* 102b2ba6 ret  */
  ESPCHK(0x102b2b46u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba7 @ 0x102b2ba7 (21 bytes, 7 insns) */
void f_102b2ba7(void) {
  FTRACE(0x102b2ba7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2ba7 push ebp */
  push32((uint32_t)(EBP));
  /* 102b2ba8 mov ebp, esp */
  EBP = (ESP);
  /* 102b2baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b2bad push dword ptr [eax*4 + 0x102b6408] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x102b6408))));
  /* 102b2bb4 call dword ptr [0x102b5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5048))), 0x102b2bbau);
  /* 102b2bba pop ebp */
  EBP = (pop32());
  /* 102b2bbb ret  */
  ESPCHK(0x102b2ba7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bbc @ 0x102b2bbc (141 bytes, 56 insns) */
void f_102b2bbc(void) {
  FTRACE(0x102b2bbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2bbc push ebx */
  push32((uint32_t)(EBX));
  /* 102b2bbd push esi */
  push32((uint32_t)(ESI));
  /* 102b2bbe mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102b2bc2 push edi */
  push32((uint32_t)(EDI));
  /* 102b2bc3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102b2bc8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2bcb mov ebx, esi */
  EBX = (ESI);
  /* 102b2bcd ja 0x102b2bdc */
  if ((!C.cf&&!C.zf)) goto L_102b2bdc;
  /* 102b2bcf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b2bd1 jne 0x102b2bd6 */
  if (!C.zf) goto L_102b2bd6;
  /* 102b2bd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b2bd5 pop esi */
  ESI = (pop32());
L_102b2bd6:;
  /* 102b2bd6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2bd9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_102b2bdc:;
  /* 102b2bdc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b2bde cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2be1 ja 0x102b2c1d */
  if ((!C.cf&&!C.zf)) goto L_102b2c1d;
  /* 102b2be3 cmp ebx, dword ptr [0x102b6650] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102b6650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2be9 ja 0x102b2c08 */
  if ((!C.cf&&!C.zf)) goto L_102b2c08;
  /* 102b2beb push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2bed call 0x102b2b46 */
  push32(0x102b2bf2u); f_102b2b46();
  /* 102b2bf2 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2bf3 call 0x102b3949 */
  push32(0x102b2bf8u); f_102b3949();
  /* 102b2bf8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2bfa mov edi, eax */
  EDI = (EAX);
  /* 102b2bfc call 0x102b2ba7 */
  push32(0x102b2c01u); f_102b2ba7();
  /* 102b2c01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2c04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b2c06 jne 0x102b2c33 */
  if (!C.zf) goto L_102b2c33;
L_102b2c08:;
  /* 102b2c08 push esi */
  push32((uint32_t)(ESI));
  /* 102b2c09 push 8 */
  push32((uint32_t)(0x8u));
  /* 102b2c0b push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b2c11 call dword ptr [0x102b503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b503c))), 0x102b2c17u);
  /* 102b2c17 mov edi, eax */
  EDI = (EAX);
  /* 102b2c19 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b2c1b jne 0x102b2c3f */
  if (!C.zf) goto L_102b2c3f;
L_102b2c1d:;
  /* 102b2c1d cmp dword ptr [0x102b69fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102b69fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2c24 je 0x102b2c3f */
  if (C.zf) goto L_102b2c3f;
  /* 102b2c26 push esi */
  push32((uint32_t)(ESI));
  /* 102b2c27 call 0x102b3fe8 */
  push32(0x102b2c2cu); f_102b3fe8();
  /* 102b2c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2c2e pop ecx */
  ECX = (pop32());
  /* 102b2c2f je 0x102b2c45 */
  if (C.zf) goto L_102b2c45;
  /* 102b2c31 jmp 0x102b2bdc */
  goto L_102b2bdc;
L_102b2c33:;
  /* 102b2c33 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b2c36 push edi */
  push32((uint32_t)(EDI));
  /* 102b2c37 call 0x102b3f90 */
  push32(0x102b2c3cu); f_102b3f90();
  /* 102b2c3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102b2c3f:;
  /* 102b2c3f mov eax, edi */
  EAX = (EDI);
L_102b2c41:;
  /* 102b2c41 pop edi */
  EDI = (pop32());
  /* 102b2c42 pop esi */
  ESI = (pop32());
  /* 102b2c43 pop ebx */
  EBX = (pop32());
  /* 102b2c44 ret  */
  ESPCHK(0x102b2bbcu, _esp0);
  ESP += 4; return;
L_102b2c45:;
  /* 102b2c45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2c47 jmp 0x102b2c41 */
  goto L_102b2c41;
}

/* FUN_10002c49 @ 0x102b2c49 (72 bytes, 29 insns) */
void f_102b2c49(void) {
  FTRACE(0x102b2c49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2c49 push esi */
  push32((uint32_t)(ESI));
  /* 102b2c4a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2c4e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b2c50 je 0x102b2c8f */
  if (C.zf) goto L_102b2c8f;
  /* 102b2c52 push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2c54 call 0x102b2b46 */
  push32(0x102b2c59u); f_102b2b46();
  /* 102b2c59 push esi */
  push32((uint32_t)(ESI));
  /* 102b2c5a call 0x102b35f3 */
  push32(0x102b2c5fu); f_102b35f3();
  /* 102b2c5f pop ecx */
  ECX = (pop32());
  /* 102b2c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2c62 pop ecx */
  ECX = (pop32());
  /* 102b2c63 je 0x102b2c78 */
  if (C.zf) goto L_102b2c78;
  /* 102b2c65 push esi */
  push32((uint32_t)(ESI));
  /* 102b2c66 push eax */
  push32((uint32_t)(EAX));
  /* 102b2c67 call 0x102b361e */
  push32(0x102b2c6cu); f_102b361e();
  /* 102b2c6c push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2c6e call 0x102b2ba7 */
  push32(0x102b2c73u); f_102b2ba7();
  /* 102b2c73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2c76 pop esi */
  ESI = (pop32());
  /* 102b2c77 ret  */
  ESPCHK(0x102b2c49u, _esp0);
  ESP += 4; return;
L_102b2c78:;
  /* 102b2c78 push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2c7a call 0x102b2ba7 */
  push32(0x102b2c7fu); f_102b2ba7();
  /* 102b2c7f pop ecx */
  ECX = (pop32());
  /* 102b2c80 push esi */
  push32((uint32_t)(ESI));
  /* 102b2c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b2c83 push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b2c89 call dword ptr [0x102b504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b504c))), 0x102b2c8fu);
L_102b2c8f:;
  /* 102b2c8f pop esi */
  ESI = (pop32());
  /* 102b2c90 ret  */
  ESPCHK(0x102b2c49u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x102b2c91 (18 bytes, 6 insns) */
void f_102b2c91(void) {
  FTRACE(0x102b2c91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2c91 push dword ptr [0x102b69fc] */
  push32((uint32_t)(r32((uint32_t)(0x102b69fc))));
  /* 102b2c97 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102b2c9b call 0x102b2ca3 */
  push32(0x102b2ca0u); f_102b2ca3();
  /* 102b2ca0 pop ecx */
  ECX = (pop32());
  /* 102b2ca1 pop ecx */
  ECX = (pop32());
  /* 102b2ca2 ret  */
  ESPCHK(0x102b2c91u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x102b2ca3 (44 bytes, 16 insns) */
void f_102b2ca3(void) {
  FTRACE(0x102b2ca3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2ca3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2ca8 ja 0x102b2ccc */
  if ((!C.cf&&!C.zf)) goto L_102b2ccc;
L_102b2caa:;
  /* 102b2caa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102b2cae call 0x102b2ccf */
  push32(0x102b2cb3u); f_102b2ccf();
  /* 102b2cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2cb5 pop ecx */
  ECX = (pop32());
  /* 102b2cb6 jne 0x102b2cce */
  if (!C.zf) goto L_102b2cce;
  /* 102b2cb8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2cbc je 0x102b2cce */
  if (C.zf) goto L_102b2cce;
  /* 102b2cbe push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102b2cc2 call 0x102b3fe8 */
  push32(0x102b2cc7u); f_102b3fe8();
  /* 102b2cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b2cc9 pop ecx */
  ECX = (pop32());
  /* 102b2cca jne 0x102b2caa */
  if (!C.zf) goto L_102b2caa;
L_102b2ccc:;
  /* 102b2ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102b2cce:;
  /* 102b2cce ret  */
  ESPCHK(0x102b2ca3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ccf @ 0x102b2ccf (78 bytes, 30 insns) */
void f_102b2ccf(void) {
  FTRACE(0x102b2ccfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2ccf push esi */
  push32((uint32_t)(ESI));
  /* 102b2cd0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2cd4 cmp esi, dword ptr [0x102b6650] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102b6650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2cda push edi */
  push32((uint32_t)(EDI));
  /* 102b2cdb ja 0x102b2cfe */
  if ((!C.cf&&!C.zf)) goto L_102b2cfe;
  /* 102b2cdd push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2cdf call 0x102b2b46 */
  push32(0x102b2ce4u); f_102b2b46();
  /* 102b2ce4 push esi */
  push32((uint32_t)(ESI));
  /* 102b2ce5 call 0x102b3949 */
  push32(0x102b2ceau); f_102b3949();
  /* 102b2cea push 9 */
  push32((uint32_t)(0x9u));
  /* 102b2cec mov edi, eax */
  EDI = (EAX);
  /* 102b2cee call 0x102b2ba7 */
  push32(0x102b2cf3u); f_102b2ba7();
  /* 102b2cf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2cf6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102b2cf8 je 0x102b2cfe */
  if (C.zf) goto L_102b2cfe;
  /* 102b2cfa mov eax, edi */
  EAX = (EDI);
  /* 102b2cfc jmp 0x102b2d1a */
  goto L_102b2d1a;
L_102b2cfe:;
  /* 102b2cfe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b2d00 jne 0x102b2d05 */
  if (!C.zf) goto L_102b2d05;
  /* 102b2d02 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b2d04 pop esi */
  ESI = (pop32());
L_102b2d05:;
  /* 102b2d05 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2d08 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 102b2d0b push esi */
  push32((uint32_t)(ESI));
  /* 102b2d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 102b2d0e push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b2d14 call dword ptr [0x102b503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b503c))), 0x102b2d1au);
L_102b2d1a:;
  /* 102b2d1a pop edi */
  EDI = (pop32());
  /* 102b2d1b pop esi */
  ESI = (pop32());
  /* 102b2d1c ret  */
  ESPCHK(0x102b2ccfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d20 @ 0x102b2d20 (7 bytes, 3 insns) */
void f_102b2d20(void) {
  FTRACE(0x102b2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2d20 push edi */
  push32((uint32_t)(EDI));
  /* 102b2d21 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2d25 jmp 0x102b2d91 */
  jmp_ind(0x102b2d91u); return;
}

/* FUN_10002d30 @ 0x102b2d30 (224 bytes, 84 insns) */
void f_102b2d30(void) {
  FTRACE(0x102b2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2d30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b2d34 push edi */
  push32((uint32_t)(EDI));
  /* 102b2d35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102b2d3b je 0x102b2d4c */
  if (C.zf) goto L_102b2d4c;
L_102b2d3d:;
  /* 102b2d3d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102b2d3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2d40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b2d42 je 0x102b2d7f */
  if (C.zf) goto L_102b2d7f;
  /* 102b2d44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102b2d4a jne 0x102b2d3d */
  if (!C.zf) goto L_102b2d3d;
L_102b2d4c:;
  /* 102b2d4c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102b2d4e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102b2d53 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2d55 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b2d58 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2d5a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2d5d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102b2d62 je 0x102b2d4c */
  if (C.zf) goto L_102b2d4c;
  /* 102b2d64 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102b2d67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b2d69 je 0x102b2d8e */
  if (C.zf) goto L_102b2d8e;
  /* 102b2d6b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102b2d6d je 0x102b2d89 */
  if (C.zf) goto L_102b2d89;
  /* 102b2d6f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102b2d74 je 0x102b2d84 */
  if (C.zf) goto L_102b2d84;
  /* 102b2d76 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102b2d7b je 0x102b2d7f */
  if (C.zf) goto L_102b2d7f;
  /* 102b2d7d jmp 0x102b2d4c */
  goto L_102b2d4c;
L_102b2d7f:;
  /* 102b2d7f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 102b2d82 jmp 0x102b2d91 */
  goto L_102b2d91;
L_102b2d84:;
  /* 102b2d84 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 102b2d87 jmp 0x102b2d91 */
  goto L_102b2d91;
L_102b2d89:;
  /* 102b2d89 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 102b2d8c jmp 0x102b2d91 */
  goto L_102b2d91;
L_102b2d8e:;
  /* 102b2d8e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_102b2d91:;
  /* 102b2d91 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102b2d95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102b2d9b je 0x102b2db6 */
  if (C.zf) goto L_102b2db6;
L_102b2d9d:;
  /* 102b2d9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102b2d9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2da0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b2da2 je 0x102b2e08 */
  if (C.zf) goto L_102b2e08;
  /* 102b2da4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102b2da6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b2da7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102b2dad jne 0x102b2d9d */
  if (!C.zf) goto L_102b2d9d;
  /* 102b2daf jmp 0x102b2db6 */
  goto L_102b2db6;
L_102b2db1:;
  /* 102b2db1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102b2db3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102b2db6:;
  /* 102b2db6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102b2dbb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102b2dbd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2dbf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b2dc2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2dc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102b2dc6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2dc9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102b2dce je 0x102b2db1 */
  if (C.zf) goto L_102b2db1;
  /* 102b2dd0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b2dd2 je 0x102b2e08 */
  if (C.zf) goto L_102b2e08;
  /* 102b2dd4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102b2dd6 je 0x102b2dff */
  if (C.zf) goto L_102b2dff;
  /* 102b2dd8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102b2dde je 0x102b2df2 */
  if (C.zf) goto L_102b2df2;
  /* 102b2de0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102b2de6 je 0x102b2dea */
  if (C.zf) goto L_102b2dea;
  /* 102b2de8 jmp 0x102b2db1 */
  goto L_102b2db1;
L_102b2dea:;
  /* 102b2dea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102b2dec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2df0 pop edi */
  EDI = (pop32());
  /* 102b2df1 ret  */
  ESPCHK(0x102b2d30u, _esp0);
  ESP += 4; return;
L_102b2df2:;
  /* 102b2df2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102b2df5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2df9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 102b2dfd pop edi */
  EDI = (pop32());
  /* 102b2dfe ret  */
  ESPCHK(0x102b2d30u, _esp0);
  ESP += 4; return;
L_102b2dff:;
  /* 102b2dff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102b2e02 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2e06 pop edi */
  EDI = (pop32());
  /* 102b2e07 ret  */
  ESPCHK(0x102b2d30u, _esp0);
  ESP += 4; return;
L_102b2e08:;
  /* 102b2e08 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102b2e0a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b2e0e pop edi */
  EDI = (pop32());
  /* 102b2e0f ret  */
  ESPCHK(0x102b2d30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102b2e10 (123 bytes, 44 insns) */
void f_102b2e10(void) {
  FTRACE(0x102b2e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2e10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b2e14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102b2e1a je 0x102b2e30 */
  if (C.zf) goto L_102b2e30;
L_102b2e1c:;
  /* 102b2e1c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102b2e1e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2e1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b2e21 je 0x102b2e63 */
  if (C.zf) goto L_102b2e63;
  /* 102b2e23 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102b2e29 jne 0x102b2e1c */
  if (!C.zf) goto L_102b2e1c;
  /* 102b2e2b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102b2e30:;
  /* 102b2e30 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102b2e32 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102b2e37 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2e39 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b2e3c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2e3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2e41 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102b2e46 je 0x102b2e30 */
  if (C.zf) goto L_102b2e30;
  /* 102b2e48 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102b2e4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b2e4d je 0x102b2e81 */
  if (C.zf) goto L_102b2e81;
  /* 102b2e4f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102b2e51 je 0x102b2e77 */
  if (C.zf) goto L_102b2e77;
  /* 102b2e53 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102b2e58 je 0x102b2e6d */
  if (C.zf) goto L_102b2e6d;
  /* 102b2e5a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102b2e5f je 0x102b2e63 */
  if (C.zf) goto L_102b2e63;
  /* 102b2e61 jmp 0x102b2e30 */
  goto L_102b2e30;
L_102b2e63:;
  /* 102b2e63 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102b2e66 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b2e6a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2e6c ret  */
  ESPCHK(0x102b2e10u, _esp0);
  ESP += 4; return;
L_102b2e6d:;
  /* 102b2e6d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102b2e70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b2e74 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2e76 ret  */
  ESPCHK(0x102b2e10u, _esp0);
  ESP += 4; return;
L_102b2e77:;
  /* 102b2e77 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102b2e7a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b2e7e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2e80 ret  */
  ESPCHK(0x102b2e10u, _esp0);
  ESP += 4; return;
L_102b2e81:;
  /* 102b2e81 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102b2e84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b2e88 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2e8a ret  */
  ESPCHK(0x102b2e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e8b @ 0x102b2e8b (429 bytes, 143 insns) */
void f_102b2e8b(void) {
  FTRACE(0x102b2e8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b2e8b push ebp */
  push32((uint32_t)(EBP));
  /* 102b2e8c mov ebp, esp */
  EBP = (ESP);
  /* 102b2e8e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b2e91 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2e92 push esi */
  push32((uint32_t)(ESI));
  /* 102b2e93 push edi */
  push32((uint32_t)(EDI));
  /* 102b2e94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102b2e96 call 0x102b2b46 */
  push32(0x102b2e9bu); f_102b2b46();
  /* 102b2e9b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b2e9e call 0x102b3038 */
  push32(0x102b2ea3u); f_102b3038();
  /* 102b2ea3 mov ebx, eax */
  EBX = (EAX);
  /* 102b2ea5 pop ecx */
  ECX = (pop32());
  /* 102b2ea6 cmp ebx, dword ptr [0x102b6a40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102b6a40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2eac pop ecx */
  ECX = (pop32());
  /* 102b2ead mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b2eb0 jne 0x102b2eb9 */
  if (!C.zf) goto L_102b2eb9;
L_102b2eb2:;
  /* 102b2eb2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102b2eb4 jmp 0x102b3029 */
  goto L_102b3029;
L_102b2eb9:;
  /* 102b2eb9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102b2ebb je 0x102b3017 */
  if (C.zf) goto L_102b3017;
  /* 102b2ec1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102b2ec3 mov eax, 0x102b6558 */
  EAX = (0x102b6558u);
L_102b2ec8:;
  /* 102b2ec8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2eca je 0x102b2f40 */
  if (C.zf) goto L_102b2f40;
  /* 102b2ecc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2ecf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102b2ed0 cmp eax, 0x102b6648 */
  { uint32_t _a=(EAX),_b=(0x102b6648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2ed5 jl 0x102b2ec8 */
  if ((C.sf!=C.of)) goto L_102b2ec8;
  /* 102b2ed7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102b2eda push eax */
  push32((uint32_t)(EAX));
  /* 102b2edb push ebx */
  push32((uint32_t)(EBX));
  /* 102b2edc call dword ptr [0x102b5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5034))), 0x102b2ee2u);
  /* 102b2ee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b2ee4 pop esi */
  ESI = (pop32());
  /* 102b2ee5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2ee7 jne 0x102b300e */
  if (!C.zf) goto L_102b300e;
  /* 102b2eed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102b2eef and dword ptr [0x102b6c64], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102b6c64)))&(0x0u); w32((uint32_t)(0x102b6c64), (_r)); fl_logic(_r,32); }
  /* 102b2ef6 pop ecx */
  ECX = (pop32());
  /* 102b2ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2ef9 mov edi, 0x102b6b60 */
  EDI = (0x102b6b60u);
  /* 102b2efe cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2f01 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102b2f03 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102b2f04 mov dword ptr [0x102b6a40], ebx */
  w32((uint32_t)(0x102b6a40), (EBX));
  /* 102b2f0a jbe 0x102b2ffb */
  if ((C.cf||C.zf)) goto L_102b2ffb;
  /* 102b2f10 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2f14 je 0x102b2fd6 */
  if (C.zf) goto L_102b2fd6;
  /* 102b2f1a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102b2f1d:;
  /* 102b2f1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102b2f1f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b2f21 je 0x102b2fd6 */
  if (C.zf) goto L_102b2fd6;
  /* 102b2f27 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102b2f2b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102b2f2e:;
  /* 102b2f2e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2f30 ja 0x102b2fca */
  if ((!C.cf&&!C.zf)) goto L_102b2fca;
  /* 102b2f36 or byte ptr [eax + 0x102b6b61], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(0x4u); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b2f3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2f3e jmp 0x102b2f2e */
  goto L_102b2f2e;
L_102b2f40:;
  /* 102b2f40 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b2f44 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102b2f46 pop ecx */
  ECX = (pop32());
  /* 102b2f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b2f49 mov edi, 0x102b6b60 */
  EDI = (0x102b6b60u);
  /* 102b2f4e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102b2f51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102b2f53 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102b2f56 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102b2f57 lea ebx, [esi + 0x102b6568] */
  EBX = ((uint32_t)(ESI + 0x102b6568));
L_102b2f5d:;
  /* 102b2f5d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2f60 mov ecx, ebx */
  ECX = (EBX);
  /* 102b2f62 je 0x102b2f90 */
  if (C.zf) goto L_102b2f90;
L_102b2f64:;
  /* 102b2f64 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102b2f67 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b2f69 je 0x102b2f90 */
  if (C.zf) goto L_102b2f90;
  /* 102b2f6b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102b2f6e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102b2f71 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2f73 ja 0x102b2f89 */
  if ((!C.cf&&!C.zf)) goto L_102b2f89;
  /* 102b2f75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b2f78 mov dl, byte ptr [edx + 0x102b6550] */
  DL = (r8((uint32_t)(EDX + 0x102b6550)));
L_102b2f7e:;
  /* 102b2f7e or byte ptr [eax + 0x102b6b61], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(DL); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b2f84 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2f85 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2f87 jbe 0x102b2f7e */
  if ((C.cf||C.zf)) goto L_102b2f7e;
L_102b2f89:;
  /* 102b2f89 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2f8a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2f8b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2f8e jne 0x102b2f64 */
  if (!C.zf) goto L_102b2f64;
L_102b2f90:;
  /* 102b2f90 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102b2f93 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b2f96 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2f9a jb 0x102b2f5d */
  if (C.cf) goto L_102b2f5d;
  /* 102b2f9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b2f9f mov dword ptr [0x102b6a5c], 1 */
  w32((uint32_t)(0x102b6a5c), (0x1u));
  /* 102b2fa9 push eax */
  push32((uint32_t)(EAX));
  /* 102b2faa mov dword ptr [0x102b6a40], eax */
  w32((uint32_t)(0x102b6a40), (EAX));
  /* 102b2faf call 0x102b3082 */
  push32(0x102b2fb4u); f_102b3082();
  /* 102b2fb4 lea esi, [esi + 0x102b655c] */
  ESI = ((uint32_t)(ESI + 0x102b655c));
  /* 102b2fba mov edi, 0x102b6a50 */
  EDI = (0x102b6a50u);
  /* 102b2fbf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102b2fc0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102b2fc1 pop ecx */
  ECX = (pop32());
  /* 102b2fc2 mov dword ptr [0x102b6c64], eax */
  w32((uint32_t)(0x102b6c64), (EAX));
  /* 102b2fc7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102b2fc8 jmp 0x102b301c */
  goto L_102b301c;
L_102b2fca:;
  /* 102b2fca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2fcb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b2fcc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b2fd0 jne 0x102b2f1d */
  if (!C.zf) goto L_102b2f1d;
L_102b2fd6:;
  /* 102b2fd6 mov eax, esi */
  EAX = (ESI);
L_102b2fd8:;
  /* 102b2fd8 or byte ptr [eax + 0x102b6b61], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(0x8u); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b2fdf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b2fe0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b2fe5 jb 0x102b2fd8 */
  if (C.cf) goto L_102b2fd8;
  /* 102b2fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 102b2fe8 call 0x102b3082 */
  push32(0x102b2fedu); f_102b3082();
  /* 102b2fed pop ecx */
  ECX = (pop32());
  /* 102b2fee mov dword ptr [0x102b6c64], eax */
  w32((uint32_t)(0x102b6c64), (EAX));
  /* 102b2ff3 mov dword ptr [0x102b6a5c], esi */
  w32((uint32_t)(0x102b6a5c), (ESI));
  /* 102b2ff9 jmp 0x102b3002 */
  goto L_102b3002;
L_102b2ffb:;
  /* 102b2ffb and dword ptr [0x102b6a5c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102b6a5c)))&(0x0u); w32((uint32_t)(0x102b6a5c), (_r)); fl_logic(_r,32); }
L_102b3002:;
  /* 102b3002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3004 mov edi, 0x102b6a50 */
  EDI = (0x102b6a50u);
  /* 102b3009 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102b300a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102b300b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102b300c jmp 0x102b301c */
  goto L_102b301c;
L_102b300e:;
  /* 102b300e cmp dword ptr [0x102b69e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102b69e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3015 je 0x102b3026 */
  if (C.zf) goto L_102b3026;
L_102b3017:;
  /* 102b3017 call 0x102b30b5 */
  push32(0x102b301cu); f_102b30b5();
L_102b301c:;
  /* 102b301c call 0x102b30de */
  push32(0x102b3021u); f_102b30de();
  /* 102b3021 jmp 0x102b2eb2 */
  goto L_102b2eb2;
L_102b3026:;
  /* 102b3026 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102b3029:;
  /* 102b3029 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102b302b call 0x102b2ba7 */
  push32(0x102b3030u); f_102b2ba7();
  /* 102b3030 pop ecx */
  ECX = (pop32());
  /* 102b3031 mov eax, esi */
  EAX = (ESI);
  /* 102b3033 pop edi */
  EDI = (pop32());
  /* 102b3034 pop esi */
  ESI = (pop32());
  /* 102b3035 pop ebx */
  EBX = (pop32());
  /* 102b3036 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3037 ret  */
  ESPCHK(0x102b2e8bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003038 @ 0x102b3038 (74 bytes, 15 insns) */
void f_102b3038(void) {
  FTRACE(0x102b3038u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3038 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b303c and dword ptr [0x102b69e8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102b69e8)))&(0x0u); w32((uint32_t)(0x102b69e8), (_r)); fl_logic(_r,32); }
  /* 102b3043 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3046 jne 0x102b3058 */
  if (!C.zf) goto L_102b3058;
  /* 102b3048 mov dword ptr [0x102b69e8], 1 */
  w32((uint32_t)(0x102b69e8), (0x1u));
  /* 102b3052 jmp dword ptr [0x102b5038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102b5038)))); return;
L_102b3058:;
  /* 102b3058 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b305b jne 0x102b306d */
  if (!C.zf) goto L_102b306d;
  /* 102b305d mov dword ptr [0x102b69e8], 1 */
  w32((uint32_t)(0x102b69e8), (0x1u));
  /* 102b3067 jmp dword ptr [0x102b5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102b5030)))); return;
L_102b306d:;
  /* 102b306d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3070 jne 0x102b3081 */
  if (!C.zf) goto L_102b3081;
  /* 102b3072 mov eax, dword ptr [0x102b6a18] */
  EAX = (r32((uint32_t)(0x102b6a18)));
  /* 102b3077 mov dword ptr [0x102b69e8], 1 */
  w32((uint32_t)(0x102b69e8), (0x1u));
L_102b3081:;
  /* 102b3081 ret  */
  ESPCHK(0x102b3038u, _esp0);
  ESP += 4; return;
}

/* FUN_10003082 @ 0x102b3082 (51 bytes, 19 insns) */
void f_102b3082(void) {
  FTRACE(0x102b3082u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3082 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b3086 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b308b je 0x102b30af */
  if (C.zf) goto L_102b30af;
  /* 102b308d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3090 je 0x102b30a9 */
  if (C.zf) goto L_102b30a9;
  /* 102b3092 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3095 je 0x102b30a3 */
  if (C.zf) goto L_102b30a3;
  /* 102b3097 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102b3098 je 0x102b309d */
  if (C.zf) goto L_102b309d;
  /* 102b309a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b309c ret  */
  ESPCHK(0x102b3082u, _esp0);
  ESP += 4; return;
L_102b309d:;
  /* 102b309d mov eax, 0x404 */
  EAX = (0x404u);
  /* 102b30a2 ret  */
  ESPCHK(0x102b3082u, _esp0);
  ESP += 4; return;
L_102b30a3:;
  /* 102b30a3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 102b30a8 ret  */
  ESPCHK(0x102b3082u, _esp0);
  ESP += 4; return;
L_102b30a9:;
  /* 102b30a9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 102b30ae ret  */
  ESPCHK(0x102b3082u, _esp0);
  ESP += 4; return;
L_102b30af:;
  /* 102b30af mov eax, 0x411 */
  EAX = (0x411u);
  /* 102b30b4 ret  */
  ESPCHK(0x102b3082u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b5 @ 0x102b30b5 (41 bytes, 17 insns) */
void f_102b30b5(void) {
  FTRACE(0x102b30b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b30b5 push edi */
  push32((uint32_t)(EDI));
  /* 102b30b6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102b30b8 pop ecx */
  ECX = (pop32());
  /* 102b30b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b30bb mov edi, 0x102b6b60 */
  EDI = (0x102b6b60u);
  /* 102b30c0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102b30c2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102b30c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b30c5 mov edi, 0x102b6a50 */
  EDI = (0x102b6a50u);
  /* 102b30ca mov dword ptr [0x102b6a40], eax */
  w32((uint32_t)(0x102b6a40), (EAX));
  /* 102b30cf mov dword ptr [0x102b6a5c], eax */
  w32((uint32_t)(0x102b6a5c), (EAX));
  /* 102b30d4 mov dword ptr [0x102b6c64], eax */
  w32((uint32_t)(0x102b6c64), (EAX));
  /* 102b30d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102b30da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102b30db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102b30dc pop edi */
  EDI = (pop32());
  /* 102b30dd ret  */
  ESPCHK(0x102b30b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100030de @ 0x102b30de (389 bytes, 124 insns) */
void f_102b30de(void) {
  FTRACE(0x102b30deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b30de push ebp */
  push32((uint32_t)(EBP));
  /* 102b30df mov ebp, esp */
  EBP = (ESP);
  /* 102b30e1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b30e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102b30ea push esi */
  push32((uint32_t)(ESI));
  /* 102b30eb push eax */
  push32((uint32_t)(EAX));
  /* 102b30ec push dword ptr [0x102b6a40] */
  push32((uint32_t)(r32((uint32_t)(0x102b6a40))));
  /* 102b30f2 call dword ptr [0x102b5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5034))), 0x102b30f8u);
  /* 102b30f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b30fb jne 0x102b3217 */
  if (!C.zf) goto L_102b3217;
  /* 102b3101 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3103 mov esi, 0x100 */
  ESI = (0x100u);
L_102b3108:;
  /* 102b3108 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 102b310f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b3110 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3112 jb 0x102b3108 */
  if (C.cf) goto L_102b3108;
  /* 102b3114 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 102b3117 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102b311e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b3120 je 0x102b3159 */
  if (C.zf) goto L_102b3159;
  /* 102b3122 push ebx */
  push32((uint32_t)(EBX));
  /* 102b3123 push edi */
  push32((uint32_t)(EDI));
  /* 102b3124 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102b3127:;
  /* 102b3127 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102b312a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102b312d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b312f ja 0x102b314e */
  if ((!C.cf&&!C.zf)) goto L_102b314e;
  /* 102b3131 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3133 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102b313a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b313b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102b3140 mov ebx, ecx */
  EBX = (ECX);
  /* 102b3142 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3145 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102b3147 mov ecx, ebx */
  ECX = (EBX);
  /* 102b3149 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102b314c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102b314e:;
  /* 102b314e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102b314f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102b3150 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102b3153 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b3155 jne 0x102b3127 */
  if (!C.zf) goto L_102b3127;
  /* 102b3157 pop edi */
  EDI = (pop32());
  /* 102b3158 pop ebx */
  EBX = (pop32());
L_102b3159:;
  /* 102b3159 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b315b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102b3161 push dword ptr [0x102b6c64] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c64))));
  /* 102b3167 push dword ptr [0x102b6a40] */
  push32((uint32_t)(r32((uint32_t)(0x102b6a40))));
  /* 102b316d push eax */
  push32((uint32_t)(EAX));
  /* 102b316e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102b3174 push esi */
  push32((uint32_t)(ESI));
  /* 102b3175 push eax */
  push32((uint32_t)(EAX));
  /* 102b3176 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b3178 call 0x102b4252 */
  push32(0x102b317du); f_102b4252();
  /* 102b317d push 0 */
  push32((uint32_t)(0x0u));
  /* 102b317f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 102b3185 push dword ptr [0x102b6a40] */
  push32((uint32_t)(r32((uint32_t)(0x102b6a40))));
  /* 102b318b push esi */
  push32((uint32_t)(ESI));
  /* 102b318c push eax */
  push32((uint32_t)(EAX));
  /* 102b318d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102b3193 push esi */
  push32((uint32_t)(ESI));
  /* 102b3194 push eax */
  push32((uint32_t)(EAX));
  /* 102b3195 push esi */
  push32((uint32_t)(ESI));
  /* 102b3196 push dword ptr [0x102b6c64] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c64))));
  /* 102b319c call 0x102b4003 */
  push32(0x102b31a1u); f_102b4003();
  /* 102b31a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b31a3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 102b31a9 push dword ptr [0x102b6a40] */
  push32((uint32_t)(r32((uint32_t)(0x102b6a40))));
  /* 102b31af push esi */
  push32((uint32_t)(ESI));
  /* 102b31b0 push eax */
  push32((uint32_t)(EAX));
  /* 102b31b1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102b31b7 push esi */
  push32((uint32_t)(ESI));
  /* 102b31b8 push eax */
  push32((uint32_t)(EAX));
  /* 102b31b9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 102b31be push dword ptr [0x102b6c64] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c64))));
  /* 102b31c4 call 0x102b4003 */
  push32(0x102b31c9u); f_102b4003();
  /* 102b31c9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b31cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b31ce lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_102b31d4:;
  /* 102b31d4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102b31d7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 102b31da je 0x102b31f2 */
  if (C.zf) goto L_102b31f2;
  /* 102b31dc or byte ptr [eax + 0x102b6b61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(0x10u); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b31e3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_102b31ea:;
  /* 102b31ea mov byte ptr [eax + 0x102b6a60], dl */
  w8((uint32_t)(EAX + 0x102b6a60), (DL));
  /* 102b31f0 jmp 0x102b320e */
  goto L_102b320e;
L_102b31f2:;
  /* 102b31f2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 102b31f5 je 0x102b3207 */
  if (C.zf) goto L_102b3207;
  /* 102b31f7 or byte ptr [eax + 0x102b6b61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(0x20u); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b31fe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 102b3205 jmp 0x102b31ea */
  goto L_102b31ea;
L_102b3207:;
  /* 102b3207 and byte ptr [eax + 0x102b6a60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6a60)))&(0x0u); w8((uint32_t)(EAX + 0x102b6a60), (_r)); fl_logic(_r,8); }
L_102b320e:;
  /* 102b320e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b320f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b3210 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102b3211 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3213 jb 0x102b31d4 */
  if (C.cf) goto L_102b31d4;
  /* 102b3215 jmp 0x102b3260 */
  goto L_102b3260;
L_102b3217:;
  /* 102b3217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3219 mov esi, 0x100 */
  ESI = (0x100u);
L_102b321e:;
  /* 102b321e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3221 jb 0x102b323c */
  if (C.cf) goto L_102b323c;
  /* 102b3223 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3226 ja 0x102b323c */
  if ((!C.cf&&!C.zf)) goto L_102b323c;
  /* 102b3228 or byte ptr [eax + 0x102b6b61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(0x10u); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b322f mov cl, al */
  CL = (AL);
  /* 102b3231 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102b3234:;
  /* 102b3234 mov byte ptr [eax + 0x102b6a60], cl */
  w8((uint32_t)(EAX + 0x102b6a60), (CL));
  /* 102b323a jmp 0x102b325b */
  goto L_102b325b;
L_102b323c:;
  /* 102b323c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b323f jb 0x102b3254 */
  if (C.cf) goto L_102b3254;
  /* 102b3241 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3244 ja 0x102b3254 */
  if ((!C.cf&&!C.zf)) goto L_102b3254;
  /* 102b3246 or byte ptr [eax + 0x102b6b61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6b61)))|(0x20u); w8((uint32_t)(EAX + 0x102b6b61), (_r)); fl_logic(_r,8); }
  /* 102b324d mov cl, al */
  CL = (AL);
  /* 102b324f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102b3252 jmp 0x102b3234 */
  goto L_102b3234;
L_102b3254:;
  /* 102b3254 and byte ptr [eax + 0x102b6a60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102b6a60)))&(0x0u); w8((uint32_t)(EAX + 0x102b6a60), (_r)); fl_logic(_r,8); }
L_102b325b:;
  /* 102b325b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b325c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b325e jb 0x102b321e */
  if (C.cf) goto L_102b321e;
L_102b3260:;
  /* 102b3260 pop esi */
  ESI = (pop32());
  /* 102b3261 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3262 ret  */
  ESPCHK(0x102b30deu, _esp0);
  ESP += 4; return;
}

/* FUN_10003263 @ 0x102b3263 (28 bytes, 7 insns) */
void f_102b3263(void) {
  FTRACE(0x102b3263u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3263 cmp dword ptr [0x102b6d88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102b6d88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b326a jne 0x102b327e */
  if (!C.zf) goto L_102b327e;
  /* 102b326c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102b326e call 0x102b2e8b */
  push32(0x102b3273u); f_102b2e8b();
  /* 102b3273 pop ecx */
  ECX = (pop32());
  /* 102b3274 mov dword ptr [0x102b6d88], 1 */
  w32((uint32_t)(0x102b6d88), (0x1u));
L_102b327e:;
  /* 102b327e ret  */
  ESPCHK(0x102b3263u, _esp0);
  ESP += 4; return;
}

/* FUN_10003280 @ 0x102b3280 (664 bytes, 265 insns) [15 switch table(s)] */
void f_102b3280(void) {
  FTRACE(0x102b3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3280 push ebp */
  push32((uint32_t)(EBP));
  /* 102b3281 mov ebp, esp */
  EBP = (ESP);
  /* 102b3283 push edi */
  push32((uint32_t)(EDI));
  /* 102b3284 push esi */
  push32((uint32_t)(ESI));
  /* 102b3285 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102b3288 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102b328b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102b328e mov eax, ecx */
  EAX = (ECX);
  /* 102b3290 mov edx, ecx */
  EDX = (ECX);
  /* 102b3292 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3294 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3296 jbe 0x102b32a0 */
  if ((C.cf||C.zf)) goto L_102b32a0;
  /* 102b3298 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b329a jb 0x102b3418 */
  if (C.cf) goto L_102b3418;
L_102b32a0:;
  /* 102b32a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102b32a6 jne 0x102b32bc */
  if (!C.zf) goto L_102b32bc;
  /* 102b32a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b32ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102b32ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b32b1 jb 0x102b32dc */
  if (C.cf) goto L_102b32dc;
  /* 102b32b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b32b5 jmp dword ptr [edx*4 + 0x102b33c8] */
  switch (EDX) {
    case 0: goto L_102b33d8;
    case 1: goto L_102b33e0;
    case 2: goto L_102b33ec;
    case 3: goto L_102b3400;
    default: x86_unimpl("switch@0x102b32b5 out of table"); return;
  }
L_102b32bc:;
  /* 102b32bc mov eax, edi */
  EAX = (EDI);
  /* 102b32be mov edx, 3 */
  EDX = (0x3u);
  /* 102b32c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b32c6 jb 0x102b32d4 */
  if (C.cf) goto L_102b32d4;
  /* 102b32c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102b32cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b32cd jmp dword ptr [eax*4 + 0x102b32e0] */
  switch (EAX) {
    case 1: goto L_102b32f0;
    case 2: goto L_102b331c;
    case 3: goto L_102b3340;
    default: x86_unimpl("switch@0x102b32cd out of table"); return;
  }
L_102b32d4:;
  /* 102b32d4 jmp dword ptr [ecx*4 + 0x102b33d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102b33d8)))); return;
  /* 102b32db nop  */
  /* nop */
L_102b32dc:;
  /* 102b32dc jmp dword ptr [ecx*4 + 0x102b335c] */
  switch (ECX) {
    case 0: goto L_102b33bf;
    case 1: goto L_102b33ac;
    case 2: goto L_102b33a4;
    case 3: goto L_102b339c;
    case 4: goto L_102b3394;
    case 5: goto L_102b338c;
    case 6: goto L_102b3384;
    case 7: goto L_102b337c;
    default: x86_unimpl("switch@0x102b32dc out of table"); return;
  }
  /* 102b32e3 nop  */
  /* nop */
L_102b32f0:;
  /* 102b32f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b32f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b32f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b32f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b32f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b32fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b32ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3302 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b3305 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3308 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b330b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b330e jb 0x102b32dc */
  if (C.cf) goto L_102b32dc;
  /* 102b3310 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b3312 jmp dword ptr [edx*4 + 0x102b33c8] */
  switch (EDX) {
    case 0: goto L_102b33d8;
    case 1: goto L_102b33e0;
    case 2: goto L_102b33ec;
    case 3: goto L_102b3400;
    default: x86_unimpl("switch@0x102b3312 out of table"); return;
  }
  /* 102b3319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b331c:;
  /* 102b331c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b331e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b3320 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3322 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b3325 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3328 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b332b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b332e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3331 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3334 jb 0x102b32dc */
  if (C.cf) goto L_102b32dc;
  /* 102b3336 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b3338 jmp dword ptr [edx*4 + 0x102b33c8] */
  switch (EDX) {
    case 0: goto L_102b33d8;
    case 1: goto L_102b33e0;
    case 2: goto L_102b33ec;
    case 3: goto L_102b3400;
    default: x86_unimpl("switch@0x102b3338 out of table"); return;
  }
  /* 102b333f nop  */
  /* nop */
L_102b3340:;
  /* 102b3340 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b3342 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b3344 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3346 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b3347 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b334a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b334b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b334e jb 0x102b32dc */
  if (C.cf) goto L_102b32dc;
  /* 102b3350 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b3352 jmp dword ptr [edx*4 + 0x102b33c8] */
  switch (EDX) {
    case 0: goto L_102b33d8;
    case 1: goto L_102b33e0;
    case 2: goto L_102b33ec;
    case 3: goto L_102b3400;
    default: x86_unimpl("switch@0x102b3352 out of table"); return;
  }
  /* 102b3359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b337c:;
  /* 102b337c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102b3380 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102b3384:;
  /* 102b3384 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102b3388 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102b338c:;
  /* 102b338c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102b3390 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102b3394:;
  /* 102b3394 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102b3398 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102b339c:;
  /* 102b339c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102b33a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102b33a4:;
  /* 102b33a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102b33a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102b33ac:;
  /* 102b33ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102b33b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102b33b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102b33bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b33bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102b33bf:;
  /* 102b33bf jmp dword ptr [edx*4 + 0x102b33c8] */
  switch (EDX) {
    case 0: goto L_102b33d8;
    case 1: goto L_102b33e0;
    case 2: goto L_102b33ec;
    case 3: goto L_102b3400;
    default: x86_unimpl("switch@0x102b33bf out of table"); return;
  }
  /* 102b33c6 mov edi, edi */
  EDI = (EDI);
L_102b33d8:;
  /* 102b33d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b33db pop esi */
  ESI = (pop32());
  /* 102b33dc pop edi */
  EDI = (pop32());
  /* 102b33dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b33de ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b33df nop  */
  /* nop */
L_102b33e0:;
  /* 102b33e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b33e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b33e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b33e7 pop esi */
  ESI = (pop32());
  /* 102b33e8 pop edi */
  EDI = (pop32());
  /* 102b33e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b33ea ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b33eb nop  */
  /* nop */
L_102b33ec:;
  /* 102b33ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b33ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b33f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b33f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b33f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b33f9 pop esi */
  ESI = (pop32());
  /* 102b33fa pop edi */
  EDI = (pop32());
  /* 102b33fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b33fc ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b33fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b3400:;
  /* 102b3400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b3402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3404 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b3407 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b340a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b340d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b3410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3413 pop esi */
  ESI = (pop32());
  /* 102b3414 pop edi */
  EDI = (pop32());
  /* 102b3415 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3416 ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b3417 nop  */
  /* nop */
L_102b3418:;
  /* 102b3418 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102b341c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102b3420 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102b3426 jne 0x102b344c */
  if (!C.zf) goto L_102b344c;
  /* 102b3428 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b342b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102b342e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3431 jb 0x102b3440 */
  if (C.cf) goto L_102b3440;
  /* 102b3433 std  */
  C.df=1;
  /* 102b3434 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b3436 cld  */
  C.df=0;
  /* 102b3437 jmp dword ptr [edx*4 + 0x102b3560] */
  switch (EDX) {
    case 0: goto L_102b3570;
    case 1: goto L_102b3578;
    case 2: goto L_102b3588;
    case 3: goto L_102b359c;
    default: x86_unimpl("switch@0x102b3437 out of table"); return;
  }
  /* 102b343e mov edi, edi */
  EDI = (EDI);
L_102b3440:;
  /* 102b3440 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102b3442 jmp dword ptr [ecx*4 + 0x102b3510] */
  switch (ECX) {
    case 0: goto L_102b3557;
    default: x86_unimpl("switch@0x102b3442 out of table"); return;
  }
  /* 102b3449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b344c:;
  /* 102b344c mov eax, edi */
  EAX = (EDI);
  /* 102b344e mov edx, 3 */
  EDX = (0x3u);
  /* 102b3453 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3456 jb 0x102b3464 */
  if (C.cf) goto L_102b3464;
  /* 102b3458 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102b345b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b345d jmp dword ptr [eax*4 + 0x102b3468] */
  switch (EAX) {
    case 1: goto L_102b3478;
    case 2: goto L_102b3498;
    case 3: goto L_102b34c0;
    default: x86_unimpl("switch@0x102b345d out of table"); return;
  }
L_102b3464:;
  /* 102b3464 jmp dword ptr [ecx*4 + 0x102b3560] */
  switch (ECX) {
    case 0: goto L_102b3570;
    case 1: goto L_102b3578;
    case 2: goto L_102b3588;
    case 3: goto L_102b359c;
    default: x86_unimpl("switch@0x102b3464 out of table"); return;
  }
  /* 102b346b nop  */
  /* nop */
L_102b3478:;
  /* 102b3478 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b347b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b347d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b3480 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102b3481 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3484 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102b3485 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3488 jb 0x102b3440 */
  if (C.cf) goto L_102b3440;
  /* 102b348a std  */
  C.df=1;
  /* 102b348b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b348d cld  */
  C.df=0;
  /* 102b348e jmp dword ptr [edx*4 + 0x102b3560] */
  switch (EDX) {
    case 0: goto L_102b3570;
    case 1: goto L_102b3578;
    case 2: goto L_102b3588;
    case 3: goto L_102b359c;
    default: x86_unimpl("switch@0x102b348e out of table"); return;
  }
  /* 102b3495 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b3498:;
  /* 102b3498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b349b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b349d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b34a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b34a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b34a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b34a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b34ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b34af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b34b2 jb 0x102b3440 */
  if (C.cf) goto L_102b3440;
  /* 102b34b4 std  */
  C.df=1;
  /* 102b34b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b34b7 cld  */
  C.df=0;
  /* 102b34b8 jmp dword ptr [edx*4 + 0x102b3560] */
  switch (EDX) {
    case 0: goto L_102b3570;
    case 1: goto L_102b3578;
    case 2: goto L_102b3588;
    case 3: goto L_102b359c;
    default: x86_unimpl("switch@0x102b34b8 out of table"); return;
  }
  /* 102b34bf nop  */
  /* nop */
L_102b34c0:;
  /* 102b34c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b34c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b34c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b34c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b34cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b34ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b34d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b34d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b34d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b34da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b34dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b34e0 jb 0x102b3440 */
  if (C.cf) goto L_102b3440;
  /* 102b34e6 std  */
  C.df=1;
  /* 102b34e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b34e9 cld  */
  C.df=0;
  /* 102b34ea jmp dword ptr [edx*4 + 0x102b3560] */
  switch (EDX) {
    case 0: goto L_102b3570;
    case 1: goto L_102b3578;
    case 2: goto L_102b3588;
    case 3: goto L_102b359c;
    default: x86_unimpl("switch@0x102b34ea out of table"); return;
  }
  /* 102b34f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102b34f4 adc al, 0x35 */
  { uint32_t _a=(AL),_b=(0x35u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102b34f6 sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b34f8 sbb al, 0x35 */
  { uint32_t _a=(AL),_b=(0x35u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102b34fa sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b34fc and al, 0x35 */
  { uint32_t _r=(AL)&(0x35u); AL = (_r); fl_logic(_r,8); }
  /* 102b34fe sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3500 sub al, 0x35 */
  { uint32_t _a=(AL),_b=(0x35u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102b3502 sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3504 xor al, 0x35 */
  { uint32_t _r=(AL)^(0x35u); AL = (_r); fl_logic(_r,8); }
  /* 102b3506 sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3508 cmp al, 0x35 */
  { uint32_t _a=(AL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b350a sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b350c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 102b350e sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3514 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102b3518 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102b351c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102b3520 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102b3524 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102b3528 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102b352c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102b3530 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102b3534 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102b3538 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102b353c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102b3540 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102b3544 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102b3548 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102b354c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102b3553 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3555 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102b3557:;
  /* 102b3557 jmp dword ptr [edx*4 + 0x102b3560] */
  switch (EDX) {
    case 0: goto L_102b3570;
    case 1: goto L_102b3578;
    case 2: goto L_102b3588;
    case 3: goto L_102b359c;
    default: x86_unimpl("switch@0x102b3557 out of table"); return;
  }
  /* 102b355e mov edi, edi */
  EDI = (EDI);
L_102b3570:;
  /* 102b3570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3573 pop esi */
  ESI = (pop32());
  /* 102b3574 pop edi */
  EDI = (pop32());
  /* 102b3575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3576 ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b3577 nop  */
  /* nop */
L_102b3578:;
  /* 102b3578 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b357b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b357e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3581 pop esi */
  ESI = (pop32());
  /* 102b3582 pop edi */
  EDI = (pop32());
  /* 102b3583 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3584 ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b3585 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b3588:;
  /* 102b3588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b358b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b358e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b3591 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b3594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3597 pop esi */
  ESI = (pop32());
  /* 102b3598 pop edi */
  EDI = (pop32());
  /* 102b3599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b359a ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
  /* 102b359b nop  */
  /* nop */
L_102b359c:;
  /* 102b359c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b359f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b35a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b35a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b35a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b35ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b35ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b35b1 pop esi */
  ESI = (pop32());
  /* 102b35b2 pop edi */
  EDI = (pop32());
  /* 102b35b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b35b4 ret  */
  ESPCHK(0x102b3280u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b5 @ 0x102b35b5 (62 bytes, 15 insns) */
void f_102b35b5(void) {
  FTRACE(0x102b35b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b35b5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 102b35ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102b35bc push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b35c2 call dword ptr [0x102b503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b503c))), 0x102b35c8u);
  /* 102b35c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b35ca mov dword ptr [0x102b6a3c], eax */
  w32((uint32_t)(0x102b6a3c), (EAX));
  /* 102b35cf jne 0x102b35d2 */
  if (!C.zf) goto L_102b35d2;
  /* 102b35d1 ret  */
  ESPCHK(0x102b35b5u, _esp0);
  ESP += 4; return;
L_102b35d2:;
  /* 102b35d2 and dword ptr [0x102b6a34], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102b6a34)))&(0x0u); w32((uint32_t)(0x102b6a34), (_r)); fl_logic(_r,32); }
  /* 102b35d9 and dword ptr [0x102b6a38], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102b6a38)))&(0x0u); w32((uint32_t)(0x102b6a38), (_r)); fl_logic(_r,32); }
  /* 102b35e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b35e2 mov dword ptr [0x102b6a30], eax */
  w32((uint32_t)(0x102b6a30), (EAX));
  /* 102b35e7 mov dword ptr [0x102b6a28], 0x10 */
  w32((uint32_t)(0x102b6a28), (0x10u));
  /* 102b35f1 pop eax */
  EAX = (pop32());
  /* 102b35f2 ret  */
  ESPCHK(0x102b35b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f3 @ 0x102b35f3 (43 bytes, 14 insns) */
void f_102b35f3(void) {
  FTRACE(0x102b35f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b35f3 mov eax, dword ptr [0x102b6a38] */
  EAX = (r32((uint32_t)(0x102b6a38)));
  /* 102b35f8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102b35fb mov eax, dword ptr [0x102b6a3c] */
  EAX = (r32((uint32_t)(0x102b6a3c)));
  /* 102b3600 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_102b3603:;
  /* 102b3603 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3605 jae 0x102b361b */
  if (!C.cf) goto L_102b361b;
  /* 102b3607 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b360b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b360e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3614 jb 0x102b361d */
  if (C.cf) goto L_102b361d;
  /* 102b3616 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3619 jmp 0x102b3603 */
  goto L_102b3603;
L_102b361b:;
  /* 102b361b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102b361d:;
  /* 102b361d ret  */
  ESPCHK(0x102b35f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000361e @ 0x102b361e (811 bytes, 264 insns) */
void f_102b361e(void) {
  FTRACE(0x102b361eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b361e push ebp */
  push32((uint32_t)(EBP));
  /* 102b361f mov ebp, esp */
  EBP = (ESP);
  /* 102b3621 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3624 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102b3627 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b362a push ebx */
  push32((uint32_t)(EBX));
  /* 102b362b push esi */
  push32((uint32_t)(ESI));
  /* 102b362c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 102b362f mov esi, edx */
  ESI = (EDX);
  /* 102b3631 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3634 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 102b3637 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b363a push edi */
  push32((uint32_t)(EDI));
  /* 102b363b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 102b363e mov ecx, esi */
  ECX = (ESI);
  /* 102b3640 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 102b3643 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102b3649 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102b364a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102b364d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102b3654 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102b3657 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102b365a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 102b365d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 102b3660 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102b3663 jne 0x102b36e4 */
  if (!C.zf) goto L_102b36e4;
  /* 102b3665 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102b3668 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102b366a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b366b pop edi */
  EDI = (pop32());
  /* 102b366c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102b366f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3671 jbe 0x102b3676 */
  if ((C.cf||C.zf)) goto L_102b3676;
  /* 102b3673 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102b3676:;
  /* 102b3676 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102b367a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b367e jne 0x102b36c8 */
  if (!C.zf) goto L_102b36c8;
  /* 102b3680 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102b3683 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3686 jae 0x102b36a4 */
  if (!C.cf) goto L_102b36a4;
  /* 102b3688 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102b368d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102b368f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102b3693 not edi */
  EDI = (~(EDI));
  /* 102b3695 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102b3699 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102b369b jne 0x102b36c8 */
  if (!C.zf) goto L_102b36c8;
  /* 102b369d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b36a0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102b36a2 jmp 0x102b36c8 */
  goto L_102b36c8;
L_102b36a4:;
  /* 102b36a4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b36a7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102b36ac shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102b36ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102b36b1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102b36b5 not edi */
  EDI = (~(EDI));
  /* 102b36b7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102b36be dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102b36c0 jne 0x102b36c8 */
  if (!C.zf) goto L_102b36c8;
  /* 102b36c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b36c5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102b36c8:;
  /* 102b36c8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102b36cc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102b36d0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102b36d3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102b36d7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102b36db add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b36de mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102b36e1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_102b36e4:;
  /* 102b36e4 mov edi, ebx */
  EDI = (EBX);
  /* 102b36e6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102b36e9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102b36ea cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b36ed jbe 0x102b36f2 */
  if ((C.cf||C.zf)) goto L_102b36f2;
  /* 102b36ef push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102b36f1 pop edi */
  EDI = (pop32());
L_102b36f2:;
  /* 102b36f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b36f5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102b36f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 102b36fb jne 0x102b37a1 */
  if (!C.zf) goto L_102b37a1;
  /* 102b3701 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3704 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3707 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102b370a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102b370c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102b370f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3710 pop edx */
  EDX = (pop32());
  /* 102b3711 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3713 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102b3716 jbe 0x102b371d */
  if ((C.cf||C.zf)) goto L_102b371d;
  /* 102b3718 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102b371b mov ecx, edx */
  ECX = (EDX);
L_102b371d:;
  /* 102b371d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3720 mov edi, ebx */
  EDI = (EBX);
  /* 102b3722 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102b3725 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102b3728 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102b3729 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b372b jbe 0x102b372f */
  if ((C.cf||C.zf)) goto L_102b372f;
  /* 102b372d mov edi, edx */
  EDI = (EDX);
L_102b372f:;
  /* 102b372f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3731 je 0x102b379e */
  if (C.zf) goto L_102b379e;
  /* 102b3733 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102b3736 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102b3739 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b373c jne 0x102b3786 */
  if (!C.zf) goto L_102b3786;
  /* 102b373e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102b3741 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3744 jae 0x102b3762 */
  if (!C.cf) goto L_102b3762;
  /* 102b3746 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102b374b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102b374d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102b3751 not edx */
  EDX = (~(EDX));
  /* 102b3753 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102b3757 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102b3759 jne 0x102b3786 */
  if (!C.zf) goto L_102b3786;
  /* 102b375b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b375e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102b3760 jmp 0x102b3786 */
  goto L_102b3786;
L_102b3762:;
  /* 102b3762 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3765 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102b376a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102b376c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102b376f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102b3773 not edx */
  EDX = (~(EDX));
  /* 102b3775 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102b377c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102b377e jne 0x102b3786 */
  if (!C.zf) goto L_102b3786;
  /* 102b3780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3783 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102b3786:;
  /* 102b3786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102b3789 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 102b378c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102b378f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102b3792 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102b3795 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102b3798 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 102b379b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_102b379e:;
  /* 102b379e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_102b37a1:;
  /* 102b37a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b37a5 jne 0x102b37b0 */
  if (!C.zf) goto L_102b37b0;
  /* 102b37a7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b37aa je 0x102b3839 */
  if (C.zf) goto L_102b3839;
L_102b37b0:;
  /* 102b37b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102b37b3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102b37b6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102b37b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102b37bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102b37bf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102b37c2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102b37c5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102b37c8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102b37cb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102b37ce mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102b37d1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b37d4 jne 0x102b3839 */
  if (!C.zf) goto L_102b3839;
  /* 102b37d6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 102b37da cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b37dd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 102b37e0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102b37e2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 102b37e6 jae 0x102b380d */
  if (!C.cf) goto L_102b380d;
  /* 102b37e8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b37ec jne 0x102b37fc */
  if (!C.zf) goto L_102b37fc;
  /* 102b37ee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102b37f3 mov ecx, edi */
  ECX = (EDI);
  /* 102b37f5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102b37f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b37fa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_102b37fc:;
  /* 102b37fc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102b3801 mov ecx, edi */
  ECX = (EDI);
  /* 102b3803 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102b3805 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 102b3809 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102b380b jmp 0x102b3836 */
  goto L_102b3836;
L_102b380d:;
  /* 102b380d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b3811 jne 0x102b3823 */
  if (!C.zf) goto L_102b3823;
  /* 102b3813 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102b3816 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102b381b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102b381d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3820 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102b3823:;
  /* 102b3823 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102b3826 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102b382b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102b382d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 102b3834 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_102b3836:;
  /* 102b3836 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_102b3839:;
  /* 102b3839 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102b383c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 102b383e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 102b3842 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 102b3844 jne 0x102b3944 */
  if (!C.zf) goto L_102b3944;
  /* 102b384a mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b384f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3851 je 0x102b3936 */
  if (C.zf) goto L_102b3936;
  /* 102b3857 mov ecx, dword ptr [0x102b6a2c] */
  ECX = (r32((uint32_t)(0x102b6a2c)));
  /* 102b385d mov edi, dword ptr [0x102b5050] */
  EDI = (r32((uint32_t)(0x102b5050)));
  /* 102b3863 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 102b3866 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3869 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 102b386e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102b3873 push ebx */
  push32((uint32_t)(EBX));
  /* 102b3874 push ecx */
  push32((uint32_t)(ECX));
  /* 102b3875 call edi */
  call_ind((uint32_t)(EDI), 0x102b3877u);
  /* 102b3877 mov ecx, dword ptr [0x102b6a2c] */
  ECX = (r32((uint32_t)(0x102b6a2c)));
  /* 102b387d mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b3882 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102b3887 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102b3889 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102b388c mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b3891 mov ecx, dword ptr [0x102b6a2c] */
  ECX = (r32((uint32_t)(0x102b6a2c)));
  /* 102b3897 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102b389a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102b38a2 mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b38a7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102b38aa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 102b38ad mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b38b2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102b38b5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b38b9 jne 0x102b38c4 */
  if (!C.zf) goto L_102b38c4;
  /* 102b38bb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102b38bf mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
L_102b38c4:;
  /* 102b38c4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b38c8 jne 0x102b3936 */
  if (!C.zf) goto L_102b3936;
  /* 102b38ca push ebx */
  push32((uint32_t)(EBX));
  /* 102b38cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102b38cd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 102b38d0 call edi */
  call_ind((uint32_t)(EDI), 0x102b38d2u);
  /* 102b38d2 mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b38d7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 102b38da push 0 */
  push32((uint32_t)(0x0u));
  /* 102b38dc push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b38e2 call dword ptr [0x102b504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b504c))), 0x102b38e8u);
  /* 102b38e8 mov eax, dword ptr [0x102b6a38] */
  EAX = (r32((uint32_t)(0x102b6a38)));
  /* 102b38ed mov edx, dword ptr [0x102b6a3c] */
  EDX = (r32((uint32_t)(0x102b6a3c)));
  /* 102b38f3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b38f6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102b38f9 mov ecx, eax */
  ECX = (EAX);
  /* 102b38fb mov eax, dword ptr [0x102b6a34] */
  EAX = (r32((uint32_t)(0x102b6a34)));
  /* 102b3900 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3902 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 102b3906 push ecx */
  push32((uint32_t)(ECX));
  /* 102b3907 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 102b390a push ecx */
  push32((uint32_t)(ECX));
  /* 102b390b push eax */
  push32((uint32_t)(EAX));
  /* 102b390c call 0x102b43a0 */
  push32(0x102b3911u); f_102b43a0();
  /* 102b3911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3917 dec dword ptr [0x102b6a38] */
  { uint32_t _r=(r32((uint32_t)(0x102b6a38)))-1; w32((uint32_t)(0x102b6a38), (_r)); fl_dec(_r,32); }
  /* 102b391d cmp eax, dword ptr [0x102b6a34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102b6a34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3923 jbe 0x102b3928 */
  if ((C.cf||C.zf)) goto L_102b3928;
  /* 102b3925 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102b3928:;
  /* 102b3928 mov ecx, dword ptr [0x102b6a3c] */
  ECX = (r32((uint32_t)(0x102b6a3c)));
  /* 102b392e mov dword ptr [0x102b6a30], ecx */
  w32((uint32_t)(0x102b6a30), (ECX));
  /* 102b3934 jmp 0x102b3939 */
  goto L_102b3939;
L_102b3936:;
  /* 102b3936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_102b3939:;
  /* 102b3939 mov dword ptr [0x102b6a34], eax */
  w32((uint32_t)(0x102b6a34), (EAX));
  /* 102b393e mov dword ptr [0x102b6a2c], esi */
  w32((uint32_t)(0x102b6a2c), (ESI));
L_102b3944:;
  /* 102b3944 pop edi */
  EDI = (pop32());
  /* 102b3945 pop esi */
  ESI = (pop32());
  /* 102b3946 pop ebx */
  EBX = (pop32());
  /* 102b3947 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3948 ret  */
  ESPCHK(0x102b361eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003949 @ 0x102b3949 (777 bytes, 275 insns) */
void f_102b3949(void) {
  FTRACE(0x102b3949u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3949 push ebp */
  push32((uint32_t)(EBP));
  /* 102b394a mov ebp, esp */
  EBP = (ESP);
  /* 102b394c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b394f mov eax, dword ptr [0x102b6a38] */
  EAX = (r32((uint32_t)(0x102b6a38)));
  /* 102b3954 mov edx, dword ptr [0x102b6a3c] */
  EDX = (r32((uint32_t)(0x102b6a3c)));
  /* 102b395a push ebx */
  push32((uint32_t)(EBX));
  /* 102b395b push esi */
  push32((uint32_t)(ESI));
  /* 102b395c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b395f push edi */
  push32((uint32_t)(EDI));
  /* 102b3960 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102b3963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3966 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102b3969 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 102b396c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 102b396f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102b3972 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102b3975 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3976 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3979 jge 0x102b3989 */
  if ((C.sf==C.of)) goto L_102b3989;
  /* 102b397b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102b397e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102b3980 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 102b3984 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102b3987 jmp 0x102b3999 */
  goto L_102b3999;
L_102b3989:;
  /* 102b3989 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b398c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b398f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102b3991 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102b3993 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102b3996 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102b3999:;
  /* 102b3999 mov eax, dword ptr [0x102b6a30] */
  EAX = (r32((uint32_t)(0x102b6a30)));
  /* 102b399e mov ebx, eax */
  EBX = (EAX);
  /* 102b39a0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b39a2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b39a5 jae 0x102b39c0 */
  if (!C.cf) goto L_102b39c0;
L_102b39a7:;
  /* 102b39a7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102b39aa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102b39ac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102b39af and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102b39b1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102b39b3 jne 0x102b39c0 */
  if (!C.zf) goto L_102b39c0;
  /* 102b39b5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b39b8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b39bb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b39be jb 0x102b39a7 */
  if (C.cf) goto L_102b39a7;
L_102b39c0:;
  /* 102b39c0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b39c3 jne 0x102b3a3e */
  if (!C.zf) goto L_102b3a3e;
  /* 102b39c5 mov ebx, edx */
  EBX = (EDX);
L_102b39c7:;
  /* 102b39c7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b39c9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b39cc jae 0x102b39e3 */
  if (!C.cf) goto L_102b39e3;
  /* 102b39ce mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102b39d1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102b39d3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102b39d6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102b39d8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102b39da jne 0x102b39e1 */
  if (!C.zf) goto L_102b39e1;
  /* 102b39dc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b39df jmp 0x102b39c7 */
  goto L_102b39c7;
L_102b39e1:;
  /* 102b39e1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102b39e3:;
  /* 102b39e3 jne 0x102b3a3e */
  if (!C.zf) goto L_102b3a3e;
L_102b39e5:;
  /* 102b39e5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b39e8 jae 0x102b39fb */
  if (!C.cf) goto L_102b39fb;
  /* 102b39ea cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b39ee jne 0x102b39f8 */
  if (!C.zf) goto L_102b39f8;
  /* 102b39f0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b39f3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b39f6 jmp 0x102b39e5 */
  goto L_102b39e5;
L_102b39f8:;
  /* 102b39f8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102b39fb:;
  /* 102b39fb jne 0x102b3a23 */
  if (!C.zf) goto L_102b3a23;
  /* 102b39fd mov ebx, edx */
  EBX = (EDX);
L_102b39ff:;
  /* 102b39ff cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3a01 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b3a04 jae 0x102b3a13 */
  if (!C.cf) goto L_102b3a13;
  /* 102b3a06 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3a0a jne 0x102b3a11 */
  if (!C.zf) goto L_102b3a11;
  /* 102b3a0c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3a0f jmp 0x102b39ff */
  goto L_102b39ff;
L_102b3a11:;
  /* 102b3a11 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102b3a13:;
  /* 102b3a13 jne 0x102b3a23 */
  if (!C.zf) goto L_102b3a23;
  /* 102b3a15 call 0x102b3c52 */
  push32(0x102b3a1au); f_102b3c52();
  /* 102b3a1a mov ebx, eax */
  EBX = (EAX);
  /* 102b3a1c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102b3a1e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102b3a21 je 0x102b3a37 */
  if (C.zf) goto L_102b3a37;
L_102b3a23:;
  /* 102b3a23 push ebx */
  push32((uint32_t)(EBX));
  /* 102b3a24 call 0x102b3d03 */
  push32(0x102b3a29u); f_102b3d03();
  /* 102b3a29 pop ecx */
  ECX = (pop32());
  /* 102b3a2a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 102b3a2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 102b3a2f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102b3a32 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3a35 jne 0x102b3a3e */
  if (!C.zf) goto L_102b3a3e;
L_102b3a37:;
  /* 102b3a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3a39 jmp 0x102b3c4d */
  goto L_102b3c4d;
L_102b3a3e:;
  /* 102b3a3e mov dword ptr [0x102b6a30], ebx */
  w32((uint32_t)(0x102b6a30), (EBX));
  /* 102b3a44 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102b3a47 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102b3a49 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3a4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102b3a4f je 0x102b3a65 */
  if (C.zf) goto L_102b3a65;
  /* 102b3a51 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102b3a58 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102b3a5c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102b3a5f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102b3a61 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102b3a63 jne 0x102b3a9c */
  if (!C.zf) goto L_102b3a9c;
L_102b3a65:;
  /* 102b3a65 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 102b3a6b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 102b3a6e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102b3a71 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102b3a74 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b3a78 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 102b3a7b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102b3a7d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102b3a80 jne 0x102b3a99 */
  if (!C.zf) goto L_102b3a99;
L_102b3a82:;
  /* 102b3a82 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 102b3a88 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102b3a8b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102b3a8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3a91 mov edi, esi */
  EDI = (ESI);
  /* 102b3a93 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 102b3a95 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 102b3a97 je 0x102b3a82 */
  if (C.zf) goto L_102b3a82;
L_102b3a99:;
  /* 102b3a99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_102b3a9c:;
  /* 102b3a9c mov ecx, edx */
  ECX = (EDX);
  /* 102b3a9e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b3aa0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102b3aa6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102b3aad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102b3ab0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102b3ab4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102b3ab6 jne 0x102b3ac5 */
  if (!C.zf) goto L_102b3ac5;
  /* 102b3ab8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102b3abf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102b3ac1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102b3ac4 pop edi */
  EDI = (pop32());
L_102b3ac5:;
  /* 102b3ac5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102b3ac7 jl 0x102b3ace */
  if ((C.sf!=C.of)) goto L_102b3ace;
  /* 102b3ac9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102b3acb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b3acc jmp 0x102b3ac5 */
  goto L_102b3ac5;
L_102b3ace:;
  /* 102b3ace mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102b3ad1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 102b3ad5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 102b3ad7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b3ada mov esi, ecx */
  ESI = (ECX);
  /* 102b3adc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102b3adf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102b3ae2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102b3ae3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3ae6 jle 0x102b3aeb */
  if ((C.zf||C.sf!=C.of)) goto L_102b3aeb;
  /* 102b3ae8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102b3aea pop esi */
  ESI = (pop32());
L_102b3aeb:;
  /* 102b3aeb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3aed je 0x102b3c00 */
  if (C.zf) goto L_102b3c00;
  /* 102b3af3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102b3af6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3af9 jne 0x102b3b5c */
  if (!C.zf) goto L_102b3b5c;
  /* 102b3afb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3afe jge 0x102b3b2b */
  if ((C.sf==C.of)) goto L_102b3b2b;
  /* 102b3b00 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102b3b05 mov ecx, edi */
  ECX = (EDI);
  /* 102b3b07 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102b3b09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3b0c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102b3b10 not ebx */
  EBX = (~(EBX));
  /* 102b3b12 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102b3b15 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 102b3b19 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 102b3b1d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102b3b1f jne 0x102b3b59 */
  if (!C.zf) goto L_102b3b59;
  /* 102b3b21 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3b24 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102b3b27 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102b3b29 jmp 0x102b3b5c */
  goto L_102b3b5c;
L_102b3b2b:;
  /* 102b3b2b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102b3b2e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102b3b33 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102b3b35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3b38 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102b3b3c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102b3b43 not ebx */
  EBX = (~(EBX));
  /* 102b3b45 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102b3b47 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102b3b49 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102b3b4c jne 0x102b3b59 */
  if (!C.zf) goto L_102b3b59;
  /* 102b3b4e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3b51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102b3b54 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102b3b57 jmp 0x102b3b5c */
  goto L_102b3b5c;
L_102b3b59:;
  /* 102b3b59 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102b3b5c:;
  /* 102b3b5c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102b3b5f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102b3b62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3b66 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102b3b69 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102b3b6c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102b3b6f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102b3b72 je 0x102b3c0c */
  if (C.zf) goto L_102b3c0c;
  /* 102b3b78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102b3b7b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 102b3b7f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 102b3b82 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 102b3b85 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102b3b88 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102b3b8b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102b3b8e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102b3b91 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102b3b94 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3b97 jne 0x102b3bfd */
  if (!C.zf) goto L_102b3bfd;
  /* 102b3b99 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 102b3b9d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3ba0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 102b3ba3 jge 0x102b3bce */
  if ((C.sf==C.of)) goto L_102b3bce;
  /* 102b3ba5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102b3ba7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b3bab mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102b3baf jne 0x102b3bbc */
  if (!C.zf) goto L_102b3bbc;
  /* 102b3bb1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102b3bb6 mov ecx, esi */
  ECX = (ESI);
  /* 102b3bb8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102b3bba or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_102b3bbc:;
  /* 102b3bbc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102b3bc1 mov ecx, esi */
  ECX = (ESI);
  /* 102b3bc3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102b3bc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3bc8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102b3bcc jmp 0x102b3bfd */
  goto L_102b3bfd;
L_102b3bce:;
  /* 102b3bce inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102b3bd0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b3bd4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102b3bd8 jne 0x102b3be7 */
  if (!C.zf) goto L_102b3be7;
  /* 102b3bda lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102b3bdd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102b3be2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102b3be4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_102b3be7:;
  /* 102b3be7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3bea lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102b3bf1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102b3bf4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102b3bf9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102b3bfb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102b3bfd:;
  /* 102b3bfd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102b3c00:;
  /* 102b3c00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102b3c02 je 0x102b3c0f */
  if (C.zf) goto L_102b3c0f;
  /* 102b3c04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102b3c06 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 102b3c0a jmp 0x102b3c0f */
  goto L_102b3c0f;
L_102b3c0c:;
  /* 102b3c0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102b3c0f:;
  /* 102b3c0f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102b3c12 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3c14 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 102b3c17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102b3c19 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 102b3c1d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102b3c20 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102b3c22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102b3c24 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102b3c27 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102b3c29 jne 0x102b3c45 */
  if (!C.zf) goto L_102b3c45;
  /* 102b3c2b cmp ebx, dword ptr [0x102b6a34] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102b6a34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3c31 jne 0x102b3c45 */
  if (!C.zf) goto L_102b3c45;
  /* 102b3c33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3c36 cmp ecx, dword ptr [0x102b6a2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102b6a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3c3c jne 0x102b3c45 */
  if (!C.zf) goto L_102b3c45;
  /* 102b3c3e and dword ptr [0x102b6a34], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102b6a34)))&(0x0u); w32((uint32_t)(0x102b6a34), (_r)); fl_logic(_r,32); }
L_102b3c45:;
  /* 102b3c45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3c48 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102b3c4a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102b3c4d:;
  /* 102b3c4d pop edi */
  EDI = (pop32());
  /* 102b3c4e pop esi */
  ESI = (pop32());
  /* 102b3c4f pop ebx */
  EBX = (pop32());
  /* 102b3c50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3c51 ret  */
  ESPCHK(0x102b3949u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c52 @ 0x102b3c52 (177 bytes, 53 insns) */
void f_102b3c52(void) {
  FTRACE(0x102b3c52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3c52 mov eax, dword ptr [0x102b6a38] */
  EAX = (r32((uint32_t)(0x102b6a38)));
  /* 102b3c57 mov ecx, dword ptr [0x102b6a28] */
  ECX = (r32((uint32_t)(0x102b6a28)));
  /* 102b3c5d push esi */
  push32((uint32_t)(ESI));
  /* 102b3c5e push edi */
  push32((uint32_t)(EDI));
  /* 102b3c5f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b3c61 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3c63 jne 0x102b3c95 */
  if (!C.zf) goto L_102b3c95;
  /* 102b3c65 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102b3c69 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102b3c6c push eax */
  push32((uint32_t)(EAX));
  /* 102b3c6d push dword ptr [0x102b6a3c] */
  push32((uint32_t)(r32((uint32_t)(0x102b6a3c))));
  /* 102b3c73 push edi */
  push32((uint32_t)(EDI));
  /* 102b3c74 push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b3c7a call dword ptr [0x102b5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5028))), 0x102b3c80u);
  /* 102b3c80 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3c82 je 0x102b3ce5 */
  if (C.zf) goto L_102b3ce5;
  /* 102b3c84 add dword ptr [0x102b6a28], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102b6a28))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102b6a28), (_r)); fl_add(_a,_b,_r,32); }
  /* 102b3c8b mov dword ptr [0x102b6a3c], eax */
  w32((uint32_t)(0x102b6a3c), (EAX));
  /* 102b3c90 mov eax, dword ptr [0x102b6a38] */
  EAX = (r32((uint32_t)(0x102b6a38)));
L_102b3c95:;
  /* 102b3c95 mov ecx, dword ptr [0x102b6a3c] */
  ECX = (r32((uint32_t)(0x102b6a3c)));
  /* 102b3c9b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 102b3ca0 push 8 */
  push32((uint32_t)(0x8u));
  /* 102b3ca2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102b3ca5 push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b3cab lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102b3cae call dword ptr [0x102b503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b503c))), 0x102b3cb4u);
  /* 102b3cb4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3cb6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 102b3cb9 je 0x102b3ce5 */
  if (C.zf) goto L_102b3ce5;
  /* 102b3cbb push 4 */
  push32((uint32_t)(0x4u));
  /* 102b3cbd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 102b3cc2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102b3cc7 push edi */
  push32((uint32_t)(EDI));
  /* 102b3cc8 call dword ptr [0x102b502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b502c))), 0x102b3cceu);
  /* 102b3cce cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3cd0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102b3cd3 jne 0x102b3ce9 */
  if (!C.zf) goto L_102b3ce9;
  /* 102b3cd5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 102b3cd8 push edi */
  push32((uint32_t)(EDI));
  /* 102b3cd9 push dword ptr [0x102b6c68] */
  push32((uint32_t)(r32((uint32_t)(0x102b6c68))));
  /* 102b3cdf call dword ptr [0x102b504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b504c))), 0x102b3ce5u);
L_102b3ce5:;
  /* 102b3ce5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3ce7 jmp 0x102b3d00 */
  goto L_102b3d00;
L_102b3ce9:;
  /* 102b3ce9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102b3ced mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102b3cef mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 102b3cf2 inc dword ptr [0x102b6a38] */
  { uint32_t _r=(r32((uint32_t)(0x102b6a38)))+1; w32((uint32_t)(0x102b6a38), (_r)); fl_inc(_r,32); }
  /* 102b3cf8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 102b3cfb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102b3cfe mov eax, esi */
  EAX = (ESI);
L_102b3d00:;
  /* 102b3d00 pop edi */
  EDI = (pop32());
  /* 102b3d01 pop esi */
  ESI = (pop32());
  /* 102b3d02 ret  */
  ESPCHK(0x102b3c52u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d03 @ 0x102b3d03 (251 bytes, 85 insns) */
void f_102b3d03(void) {
  FTRACE(0x102b3d03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3d03 push ebp */
  push32((uint32_t)(EBP));
  /* 102b3d04 mov ebp, esp */
  EBP = (ESP);
  /* 102b3d06 push ecx */
  push32((uint32_t)(ECX));
  /* 102b3d07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3d0a push ebx */
  push32((uint32_t)(EBX));
  /* 102b3d0b push esi */
  push32((uint32_t)(ESI));
  /* 102b3d0c push edi */
  push32((uint32_t)(EDI));
  /* 102b3d0d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102b3d10 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102b3d13 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102b3d15:;
  /* 102b3d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3d17 jl 0x102b3d1e */
  if ((C.sf!=C.of)) goto L_102b3d1e;
  /* 102b3d19 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102b3d1b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102b3d1c jmp 0x102b3d15 */
  goto L_102b3d15;
L_102b3d1e:;
  /* 102b3d1e mov eax, ebx */
  EAX = (EBX);
  /* 102b3d20 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102b3d22 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102b3d28 pop edx */
  EDX = (pop32());
  /* 102b3d29 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102b3d30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102b3d33:;
  /* 102b3d33 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102b3d36 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102b3d39 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3d3c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102b3d3d jne 0x102b3d33 */
  if (!C.zf) goto L_102b3d33;
  /* 102b3d3f mov edi, ebx */
  EDI = (EBX);
  /* 102b3d41 push 4 */
  push32((uint32_t)(0x4u));
  /* 102b3d43 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102b3d46 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3d49 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102b3d4e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102b3d53 push edi */
  push32((uint32_t)(EDI));
  /* 102b3d54 call dword ptr [0x102b502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b502c))), 0x102b3d5au);
  /* 102b3d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3d5c jne 0x102b3d66 */
  if (!C.zf) goto L_102b3d66;
  /* 102b3d5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b3d61 jmp 0x102b3df9 */
  goto L_102b3df9;
L_102b3d66:;
  /* 102b3d66 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102b3d6c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3d6e ja 0x102b3dac */
  if ((!C.cf&&!C.zf)) goto L_102b3dac;
  /* 102b3d70 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_102b3d73:;
  /* 102b3d73 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 102b3d77 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 102b3d7e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 102b3d84 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 102b3d8b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102b3d8d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 102b3d93 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102b3d96 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 102b3da0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3da5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 102b3da8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3daa jbe 0x102b3d73 */
  if ((C.cf||C.zf)) goto L_102b3d73;
L_102b3dac:;
  /* 102b3dac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102b3daf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 102b3db2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b3db9 pop edi */
  EDI = (pop32());
  /* 102b3dba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102b3dbd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 102b3dc0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 102b3dc3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 102b3dc6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 102b3dc9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102b3dce mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 102b3dd5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 102b3dd8 mov cl, al */
  CL = (AL);
  /* 102b3dda inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102b3ddc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b3dde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b3de1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 102b3de4 jne 0x102b3de9 */
  if (!C.zf) goto L_102b3de9;
  /* 102b3de6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_102b3de9:;
  /* 102b3de9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102b3dee mov ecx, ebx */
  ECX = (EBX);
  /* 102b3df0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102b3df2 not edx */
  EDX = (~(EDX));
  /* 102b3df4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102b3df7 mov eax, ebx */
  EAX = (EBX);
L_102b3df9:;
  /* 102b3df9 pop edi */
  EDI = (pop32());
  /* 102b3dfa pop esi */
  ESI = (pop32());
  /* 102b3dfb pop ebx */
  EBX = (pop32());
  /* 102b3dfc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b3dfd ret  */
  ESPCHK(0x102b3d03u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dfe @ 0x102b3dfe (137 bytes, 50 insns) */
void f_102b3dfe(void) {
  FTRACE(0x102b3dfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3dfe push ebx */
  push32((uint32_t)(EBX));
  /* 102b3dff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b3e01 cmp dword ptr [0x102b69ec], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102b69ec))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3e07 push esi */
  push32((uint32_t)(ESI));
  /* 102b3e08 push edi */
  push32((uint32_t)(EDI));
  /* 102b3e09 jne 0x102b3e4d */
  if (!C.zf) goto L_102b3e4d;
  /* 102b3e0b push 0x102b5480 */
  push32((uint32_t)(0x102b5480u));
  /* 102b3e10 call dword ptr [0x102b501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b501c))), 0x102b3e16u);
  /* 102b3e16 mov edi, eax */
  EDI = (EAX);
  /* 102b3e18 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3e1a je 0x102b3e83 */
  if (C.zf) goto L_102b3e83;
  /* 102b3e1c mov esi, dword ptr [0x102b5020] */
  ESI = (r32((uint32_t)(0x102b5020)));
  /* 102b3e22 push 0x102b5474 */
  push32((uint32_t)(0x102b5474u));
  /* 102b3e27 push edi */
  push32((uint32_t)(EDI));
  /* 102b3e28 call esi */
  call_ind((uint32_t)(ESI), 0x102b3e2au);
  /* 102b3e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3e2c mov dword ptr [0x102b69ec], eax */
  w32((uint32_t)(0x102b69ec), (EAX));
  /* 102b3e31 je 0x102b3e83 */
  if (C.zf) goto L_102b3e83;
  /* 102b3e33 push 0x102b5464 */
  push32((uint32_t)(0x102b5464u));
  /* 102b3e38 push edi */
  push32((uint32_t)(EDI));
  /* 102b3e39 call esi */
  call_ind((uint32_t)(ESI), 0x102b3e3bu);
  /* 102b3e3b push 0x102b5450 */
  push32((uint32_t)(0x102b5450u));
  /* 102b3e40 push edi */
  push32((uint32_t)(EDI));
  /* 102b3e41 mov dword ptr [0x102b69f0], eax */
  w32((uint32_t)(0x102b69f0), (EAX));
  /* 102b3e46 call esi */
  call_ind((uint32_t)(ESI), 0x102b3e48u);
  /* 102b3e48 mov dword ptr [0x102b69f4], eax */
  w32((uint32_t)(0x102b69f4), (EAX));
L_102b3e4d:;
  /* 102b3e4d mov eax, dword ptr [0x102b69f0] */
  EAX = (r32((uint32_t)(0x102b69f0)));
  /* 102b3e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3e54 je 0x102b3e6c */
  if (C.zf) goto L_102b3e6c;
  /* 102b3e56 call eax */
  call_ind((uint32_t)(EAX), 0x102b3e58u);
  /* 102b3e58 mov ebx, eax */
  EBX = (EAX);
  /* 102b3e5a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102b3e5c je 0x102b3e6c */
  if (C.zf) goto L_102b3e6c;
  /* 102b3e5e mov eax, dword ptr [0x102b69f4] */
  EAX = (r32((uint32_t)(0x102b69f4)));
  /* 102b3e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3e65 je 0x102b3e6c */
  if (C.zf) goto L_102b3e6c;
  /* 102b3e67 push ebx */
  push32((uint32_t)(EBX));
  /* 102b3e68 call eax */
  call_ind((uint32_t)(EAX), 0x102b3e6au);
  /* 102b3e6a mov ebx, eax */
  EBX = (EAX);
L_102b3e6c:;
  /* 102b3e6c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102b3e70 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102b3e74 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102b3e78 push ebx */
  push32((uint32_t)(EBX));
  /* 102b3e79 call dword ptr [0x102b69ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b69ec))), 0x102b3e7fu);
L_102b3e7f:;
  /* 102b3e7f pop edi */
  EDI = (pop32());
  /* 102b3e80 pop esi */
  ESI = (pop32());
  /* 102b3e81 pop ebx */
  EBX = (pop32());
  /* 102b3e82 ret  */
  ESPCHK(0x102b3dfeu, _esp0);
  ESP += 4; return;
L_102b3e83:;
  /* 102b3e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3e85 jmp 0x102b3e7f */
  goto L_102b3e7f;
}

/* _strncpy @ 0x102b3e90 (254 bytes, 109 insns) */
void f_102b3e90(void) {
  FTRACE(0x102b3e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3e90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102b3e94 push edi */
  push32((uint32_t)(EDI));
  /* 102b3e95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102b3e97 je 0x102b3f13 */
  if (C.zf) goto L_102b3f13;
  /* 102b3e99 push esi */
  push32((uint32_t)(ESI));
  /* 102b3e9a push ebx */
  push32((uint32_t)(EBX));
  /* 102b3e9b mov ebx, ecx */
  EBX = (ECX);
  /* 102b3e9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 102b3ea1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102b3ea7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 102b3eab jne 0x102b3eb4 */
  if (!C.zf) goto L_102b3eb4;
  /* 102b3ead shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3eb0 jne 0x102b3f21 */
  if (!C.zf) goto L_102b3f21;
  /* 102b3eb2 jmp 0x102b3ed5 */
  goto L_102b3ed5;
L_102b3eb4:;
  /* 102b3eb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b3eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b3eb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3eb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b3eba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3ebb je 0x102b3ee2 */
  if (C.zf) goto L_102b3ee2;
  /* 102b3ebd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b3ebf je 0x102b3eea */
  if (C.zf) goto L_102b3eea;
  /* 102b3ec1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102b3ec7 jne 0x102b3eb4 */
  if (!C.zf) goto L_102b3eb4;
  /* 102b3ec9 mov ebx, ecx */
  EBX = (ECX);
  /* 102b3ecb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3ece jne 0x102b3f21 */
  if (!C.zf) goto L_102b3f21;
L_102b3ed0:;
  /* 102b3ed0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102b3ed3 je 0x102b3ee2 */
  if (C.zf) goto L_102b3ee2;
L_102b3ed5:;
  /* 102b3ed5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b3ed7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b3ed8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3eda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b3edb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102b3edd je 0x102b3f0e */
  if (C.zf) goto L_102b3f0e;
  /* 102b3edf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102b3ee0 jne 0x102b3ed5 */
  if (!C.zf) goto L_102b3ed5;
L_102b3ee2:;
  /* 102b3ee2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102b3ee6 pop ebx */
  EBX = (pop32());
  /* 102b3ee7 pop esi */
  ESI = (pop32());
  /* 102b3ee8 pop edi */
  EDI = (pop32());
  /* 102b3ee9 ret  */
  ESPCHK(0x102b3e90u, _esp0);
  ESP += 4; return;
L_102b3eea:;
  /* 102b3eea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102b3ef0 je 0x102b3f04 */
  if (C.zf) goto L_102b3f04;
L_102b3ef2:;
  /* 102b3ef2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3ef4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b3ef5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3ef6 je 0x102b3f86 */
  if (C.zf) goto L_102b3f86;
  /* 102b3efc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102b3f02 jne 0x102b3ef2 */
  if (!C.zf) goto L_102b3ef2;
L_102b3f04:;
  /* 102b3f04 mov ebx, ecx */
  EBX = (ECX);
  /* 102b3f06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3f09 jne 0x102b3f77 */
  if (!C.zf) goto L_102b3f77;
L_102b3f0b:;
  /* 102b3f0b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3f0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102b3f0e:;
  /* 102b3f0e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102b3f0f jne 0x102b3f0b */
  if (!C.zf) goto L_102b3f0b;
  /* 102b3f11 pop ebx */
  EBX = (pop32());
  /* 102b3f12 pop esi */
  ESI = (pop32());
L_102b3f13:;
  /* 102b3f13 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b3f17 pop edi */
  EDI = (pop32());
  /* 102b3f18 ret  */
  ESPCHK(0x102b3e90u, _esp0);
  ESP += 4; return;
L_102b3f19:;
  /* 102b3f19 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102b3f1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3f1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3f1f je 0x102b3ed0 */
  if (C.zf) goto L_102b3ed0;
L_102b3f21:;
  /* 102b3f21 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102b3f26 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102b3f28 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3f2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102b3f2d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3f2f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102b3f31 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3f34 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102b3f39 je 0x102b3f19 */
  if (C.zf) goto L_102b3f19;
  /* 102b3f3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102b3f3d je 0x102b3f6b */
  if (C.zf) goto L_102b3f6b;
  /* 102b3f3f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102b3f41 je 0x102b3f61 */
  if (C.zf) goto L_102b3f61;
  /* 102b3f43 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102b3f49 je 0x102b3f57 */
  if (C.zf) goto L_102b3f57;
  /* 102b3f4b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102b3f51 jne 0x102b3f19 */
  if (!C.zf) goto L_102b3f19;
  /* 102b3f53 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102b3f55 jmp 0x102b3f6f */
  goto L_102b3f6f;
L_102b3f57:;
  /* 102b3f57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102b3f5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102b3f5f jmp 0x102b3f6f */
  goto L_102b3f6f;
L_102b3f61:;
  /* 102b3f61 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102b3f67 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102b3f69 jmp 0x102b3f6f */
  goto L_102b3f6f;
L_102b3f6b:;
  /* 102b3f6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102b3f6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102b3f6f:;
  /* 102b3f6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3f72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3f74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3f75 je 0x102b3f81 */
  if (C.zf) goto L_102b3f81;
L_102b3f77:;
  /* 102b3f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102b3f79:;
  /* 102b3f79 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102b3f7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3f7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3f7f jne 0x102b3f79 */
  if (!C.zf) goto L_102b3f79;
L_102b3f81:;
  /* 102b3f81 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102b3f84 jne 0x102b3f0b */
  if (!C.zf) goto L_102b3f0b;
L_102b3f86:;
  /* 102b3f86 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102b3f8a pop ebx */
  EBX = (pop32());
  /* 102b3f8b pop esi */
  ESI = (pop32());
  /* 102b3f8c pop edi */
  EDI = (pop32());
  /* 102b3f8d ret  */
  ESPCHK(0x102b3e90u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102b3f90 (88 bytes, 40 insns) */
void f_102b3f90(void) {
  FTRACE(0x102b3f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3f90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102b3f94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b3f98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102b3f9a je 0x102b3fe3 */
  if (C.zf) goto L_102b3fe3;
  /* 102b3f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b3f9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102b3fa2 push edi */
  push32((uint32_t)(EDI));
  /* 102b3fa3 mov edi, ecx */
  EDI = (ECX);
  /* 102b3fa5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b3fa8 jb 0x102b3fd7 */
  if (C.cf) goto L_102b3fd7;
  /* 102b3faa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102b3fac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102b3faf je 0x102b3fb9 */
  if (C.zf) goto L_102b3fb9;
  /* 102b3fb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102b3fb3:;
  /* 102b3fb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3fb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b3fb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b3fb7 jne 0x102b3fb3 */
  if (!C.zf) goto L_102b3fb3;
L_102b3fb9:;
  /* 102b3fb9 mov ecx, eax */
  ECX = (EAX);
  /* 102b3fbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102b3fbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3fc0 mov ecx, eax */
  ECX = (EAX);
  /* 102b3fc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102b3fc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b3fc7 mov ecx, edx */
  ECX = (EDX);
  /* 102b3fc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102b3fcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b3fcf je 0x102b3fd7 */
  if (C.zf) goto L_102b3fd7;
  /* 102b3fd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102b3fd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102b3fd5 je 0x102b3fdd */
  if (C.zf) goto L_102b3fdd;
L_102b3fd7:;
  /* 102b3fd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b3fd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b3fda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102b3fdb jne 0x102b3fd7 */
  if (!C.zf) goto L_102b3fd7;
L_102b3fdd:;
  /* 102b3fdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b3fe1 pop edi */
  EDI = (pop32());
  /* 102b3fe2 ret  */
  ESPCHK(0x102b3f90u, _esp0);
  ESP += 4; return;
L_102b3fe3:;
  /* 102b3fe3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b3fe7 ret  */
  ESPCHK(0x102b3f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe8 @ 0x102b3fe8 (27 bytes, 13 insns) */
void f_102b3fe8(void) {
  FTRACE(0x102b3fe8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b3fe8 mov eax, dword ptr [0x102b69f8] */
  EAX = (r32((uint32_t)(0x102b69f8)));
  /* 102b3fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3fef je 0x102b4000 */
  if (C.zf) goto L_102b4000;
  /* 102b3ff1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102b3ff5 call eax */
  call_ind((uint32_t)(EAX), 0x102b3ff7u);
  /* 102b3ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b3ff9 pop ecx */
  ECX = (pop32());
  /* 102b3ffa je 0x102b4000 */
  if (C.zf) goto L_102b4000;
  /* 102b3ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 102b3ffe pop eax */
  EAX = (pop32());
  /* 102b3fff ret  */
  ESPCHK(0x102b3fe8u, _esp0);
  ESP += 4; return;
L_102b4000:;
  /* 102b4000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102b4002 ret  */
  ESPCHK(0x102b3fe8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004003 @ 0x102b4003 (511 bytes, 193 insns) */
void f_102b4003(void) {
  FTRACE(0x102b4003u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b4003 push ebp */
  push32((uint32_t)(EBP));
  /* 102b4004 mov ebp, esp */
  EBP = (ESP);
  /* 102b4006 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102b4008 push 0x102b5498 */
  push32((uint32_t)(0x102b5498u));
  /* 102b400d push 0x102b47d0 */
  push32((uint32_t)(0x102b47d0u));
  /* 102b4012 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102b4018 push eax */
  push32((uint32_t)(EAX));
  /* 102b4019 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102b4020 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4023 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4024 push esi */
  push32((uint32_t)(ESI));
  /* 102b4025 push edi */
  push32((uint32_t)(EDI));
  /* 102b4026 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102b4029 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b402b cmp dword ptr [0x102b6a20], edi */
  { uint32_t _a=(r32((uint32_t)(0x102b6a20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4031 jne 0x102b4079 */
  if (!C.zf) goto L_102b4079;
  /* 102b4033 push edi */
  push32((uint32_t)(EDI));
  /* 102b4034 push edi */
  push32((uint32_t)(EDI));
  /* 102b4035 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b4037 pop ebx */
  EBX = (pop32());
  /* 102b4038 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4039 push 0x102b5490 */
  push32((uint32_t)(0x102b5490u));
  /* 102b403e mov esi, 0x100 */
  ESI = (0x100u);
  /* 102b4043 push esi */
  push32((uint32_t)(ESI));
  /* 102b4044 push edi */
  push32((uint32_t)(EDI));
  /* 102b4045 call dword ptr [0x102b5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5010))), 0x102b404bu);
  /* 102b404b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b404d je 0x102b4057 */
  if (C.zf) goto L_102b4057;
  /* 102b404f mov dword ptr [0x102b6a20], ebx */
  w32((uint32_t)(0x102b6a20), (EBX));
  /* 102b4055 jmp 0x102b4079 */
  goto L_102b4079;
L_102b4057:;
  /* 102b4057 push edi */
  push32((uint32_t)(EDI));
  /* 102b4058 push edi */
  push32((uint32_t)(EDI));
  /* 102b4059 push ebx */
  push32((uint32_t)(EBX));
  /* 102b405a push 0x102b548c */
  push32((uint32_t)(0x102b548cu));
  /* 102b405f push esi */
  push32((uint32_t)(ESI));
  /* 102b4060 push edi */
  push32((uint32_t)(EDI));
  /* 102b4061 call dword ptr [0x102b5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5014))), 0x102b4067u);
  /* 102b4067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b4069 je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b406f mov dword ptr [0x102b6a20], 2 */
  w32((uint32_t)(0x102b6a20), (0x2u));
L_102b4079:;
  /* 102b4079 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b407c jle 0x102b408e */
  if ((C.zf||C.sf!=C.of)) goto L_102b408e;
  /* 102b407e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102b4081 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b4084 call 0x102b4227 */
  push32(0x102b4089u); f_102b4227();
  /* 102b4089 pop ecx */
  ECX = (pop32());
  /* 102b408a pop ecx */
  ECX = (pop32());
  /* 102b408b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_102b408e:;
  /* 102b408e mov eax, dword ptr [0x102b6a20] */
  EAX = (r32((uint32_t)(0x102b6a20)));
  /* 102b4093 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4096 jne 0x102b40b5 */
  if (!C.zf) goto L_102b40b5;
  /* 102b4098 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102b409b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102b409e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102b40a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b40a4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b40a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b40aa call dword ptr [0x102b5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5014))), 0x102b40b0u);
  /* 102b40b0 jmp 0x102b4193 */
  goto L_102b4193;
L_102b40b5:;
  /* 102b40b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b40b8 jne 0x102b4191 */
  if (!C.zf) goto L_102b4191;
  /* 102b40be cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b40c1 jne 0x102b40cb */
  if (!C.zf) goto L_102b40cb;
  /* 102b40c3 mov eax, dword ptr [0x102b6a18] */
  EAX = (r32((uint32_t)(0x102b6a18)));
  /* 102b40c8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_102b40cb:;
  /* 102b40cb push edi */
  push32((uint32_t)(EDI));
  /* 102b40cc push edi */
  push32((uint32_t)(EDI));
  /* 102b40cd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102b40d0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b40d3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 102b40d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102b40d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b40da and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102b40dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b40de push eax */
  push32((uint32_t)(EAX));
  /* 102b40df push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102b40e2 call dword ptr [0x102b5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5024))), 0x102b40e8u);
  /* 102b40e8 mov ebx, eax */
  EBX = (EAX);
  /* 102b40ea mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 102b40ed cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b40ef je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b40f5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102b40f8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 102b40fb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b40fe and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102b4100 call 0x102b48b0 */
  push32(0x102b4105u); f_102b48b0();
  /* 102b4105 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102b4108 mov eax, esp */
  EAX = (ESP);
  /* 102b410a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102b410d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b4111 jmp 0x102b4126 */
  goto L_102b4126;
  /* 102b4113 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b4115 pop eax */
  EAX = (pop32());
  /* 102b4116 ret  */
  ESPCHK(0x102b4003u, _esp0);
  ESP += 4; return;
  /* 102b4117 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102b411a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b411c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 102b411f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b4123 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102b4126:;
  /* 102b4126 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4129 je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b412b push ebx */
  push32((uint32_t)(EBX));
  /* 102b412c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102b412f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102b4132 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b4135 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b4137 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102b413a call dword ptr [0x102b5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5024))), 0x102b4140u);
  /* 102b4140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b4142 je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b4144 push edi */
  push32((uint32_t)(EDI));
  /* 102b4145 push edi */
  push32((uint32_t)(EDI));
  /* 102b4146 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4147 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102b414a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b414d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b4150 call dword ptr [0x102b5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5010))), 0x102b4156u);
  /* 102b4156 mov esi, eax */
  ESI = (EAX);
  /* 102b4158 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102b415b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b415d je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b415f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102b4163 je 0x102b41a5 */
  if (C.zf) goto L_102b41a5;
  /* 102b4165 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4168 je 0x102b4220 */
  if (C.zf) goto L_102b4220;
  /* 102b416e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4171 jg 0x102b4191 */
  if ((!C.zf&&C.sf==C.of)) goto L_102b4191;
  /* 102b4173 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102b4176 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102b4179 push ebx */
  push32((uint32_t)(EBX));
  /* 102b417a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102b417d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b4180 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b4183 call dword ptr [0x102b5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5010))), 0x102b4189u);
  /* 102b4189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b418b jne 0x102b4220 */
  if (!C.zf) goto L_102b4220;
L_102b4191:;
  /* 102b4191 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102b4193:;
  /* 102b4193 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 102b4196 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102b4199 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102b41a0 pop edi */
  EDI = (pop32());
  /* 102b41a1 pop esi */
  ESI = (pop32());
  /* 102b41a2 pop ebx */
  EBX = (pop32());
  /* 102b41a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b41a4 ret  */
  ESPCHK(0x102b4003u, _esp0);
  ESP += 4; return;
L_102b41a5:;
  /* 102b41a5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102b41ac lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 102b41af add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b41b2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102b41b4 call 0x102b48b0 */
  push32(0x102b41b9u); f_102b48b0();
  /* 102b41b9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102b41bc mov ebx, esp */
  EBX = (ESP);
  /* 102b41be mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 102b41c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b41c5 jmp 0x102b41d9 */
  goto L_102b41d9;
  /* 102b41c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b41c9 pop eax */
  EAX = (pop32());
  /* 102b41ca ret  */
  ESPCHK(0x102b4003u, _esp0);
  ESP += 4; return;
  /* 102b41cb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102b41ce xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102b41d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b41d2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b41d6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_102b41d9:;
  /* 102b41d9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b41db je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b41dd push esi */
  push32((uint32_t)(ESI));
  /* 102b41de push ebx */
  push32((uint32_t)(EBX));
  /* 102b41df push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 102b41e2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102b41e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b41e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b41eb call dword ptr [0x102b5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5010))), 0x102b41f1u);
  /* 102b41f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b41f3 je 0x102b4191 */
  if (C.zf) goto L_102b4191;
  /* 102b41f5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b41f8 push edi */
  push32((uint32_t)(EDI));
  /* 102b41f9 push edi */
  push32((uint32_t)(EDI));
  /* 102b41fa jne 0x102b4200 */
  if (!C.zf) goto L_102b4200;
  /* 102b41fc push edi */
  push32((uint32_t)(EDI));
  /* 102b41fd push edi */
  push32((uint32_t)(EDI));
  /* 102b41fe jmp 0x102b4206 */
  goto L_102b4206;
L_102b4200:;
  /* 102b4200 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102b4203 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_102b4206:;
  /* 102b4206 push esi */
  push32((uint32_t)(ESI));
  /* 102b4207 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4208 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102b420d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102b4210 call dword ptr [0x102b5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5064))), 0x102b4216u);
  /* 102b4216 mov esi, eax */
  ESI = (EAX);
  /* 102b4218 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b421a je 0x102b4191 */
  if (C.zf) goto L_102b4191;
L_102b4220:;
  /* 102b4220 mov eax, esi */
  EAX = (ESI);
  /* 102b4222 jmp 0x102b4193 */
  goto L_102b4193;
}

/* FUN_10004227 @ 0x102b4227 (43 bytes, 20 insns) */
void f_102b4227(void) {
  FTRACE(0x102b4227u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b4227 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b422b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102b422f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102b4231 push esi */
  push32((uint32_t)(ESI));
  /* 102b4232 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102b4235 je 0x102b4244 */
  if (C.zf) goto L_102b4244;
L_102b4237:;
  /* 102b4237 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b423a je 0x102b4244 */
  if (C.zf) goto L_102b4244;
  /* 102b423c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b423d mov esi, ecx */
  ESI = (ECX);
  /* 102b423f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102b4240 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102b4242 jne 0x102b4237 */
  if (!C.zf) goto L_102b4237;
L_102b4244:;
  /* 102b4244 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b4247 pop esi */
  ESI = (pop32());
  /* 102b4248 jne 0x102b424f */
  if (!C.zf) goto L_102b424f;
  /* 102b424a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b424e ret  */
  ESPCHK(0x102b4227u, _esp0);
  ESP += 4; return;
L_102b424f:;
  /* 102b424f mov eax, edx */
  EAX = (EDX);
  /* 102b4251 ret  */
  ESPCHK(0x102b4227u, _esp0);
  ESP += 4; return;
}

/* FUN_10004252 @ 0x102b4252 (318 bytes, 123 insns) */
void f_102b4252(void) {
  FTRACE(0x102b4252u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b4252 push ebp */
  push32((uint32_t)(EBP));
  /* 102b4253 mov ebp, esp */
  EBP = (ESP);
  /* 102b4255 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102b4257 push 0x102b54b0 */
  push32((uint32_t)(0x102b54b0u));
  /* 102b425c push 0x102b47d0 */
  push32((uint32_t)(0x102b47d0u));
  /* 102b4261 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102b4267 push eax */
  push32((uint32_t)(EAX));
  /* 102b4268 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102b426f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4272 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4273 push esi */
  push32((uint32_t)(ESI));
  /* 102b4274 push edi */
  push32((uint32_t)(EDI));
  /* 102b4275 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102b4278 mov eax, dword ptr [0x102b6a24] */
  EAX = (r32((uint32_t)(0x102b6a24)));
  /* 102b427d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b427f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4281 jne 0x102b42c1 */
  if (!C.zf) goto L_102b42c1;
  /* 102b4283 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102b4286 push eax */
  push32((uint32_t)(EAX));
  /* 102b4287 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b4289 pop esi */
  ESI = (pop32());
  /* 102b428a push esi */
  push32((uint32_t)(ESI));
  /* 102b428b push 0x102b5490 */
  push32((uint32_t)(0x102b5490u));
  /* 102b4290 push esi */
  push32((uint32_t)(ESI));
  /* 102b4291 call dword ptr [0x102b500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b500c))), 0x102b4297u);
  /* 102b4297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b4299 je 0x102b429f */
  if (C.zf) goto L_102b429f;
  /* 102b429b mov eax, esi */
  EAX = (ESI);
  /* 102b429d jmp 0x102b42bc */
  goto L_102b42bc;
L_102b429f:;
  /* 102b429f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102b42a2 push eax */
  push32((uint32_t)(EAX));
  /* 102b42a3 push esi */
  push32((uint32_t)(ESI));
  /* 102b42a4 push 0x102b548c */
  push32((uint32_t)(0x102b548cu));
  /* 102b42a9 push esi */
  push32((uint32_t)(ESI));
  /* 102b42aa push ebx */
  push32((uint32_t)(EBX));
  /* 102b42ab call dword ptr [0x102b5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5018))), 0x102b42b1u);
  /* 102b42b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102b42b3 je 0x102b4387 */
  if (C.zf) goto L_102b4387;
  /* 102b42b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102b42bb pop eax */
  EAX = (pop32());
L_102b42bc:;
  /* 102b42bc mov dword ptr [0x102b6a24], eax */
  w32((uint32_t)(0x102b6a24), (EAX));
L_102b42c1:;
  /* 102b42c1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b42c4 jne 0x102b42ea */
  if (!C.zf) goto L_102b42ea;
  /* 102b42c6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102b42c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b42cb jne 0x102b42d2 */
  if (!C.zf) goto L_102b42d2;
  /* 102b42cd mov eax, dword ptr [0x102b6a08] */
  EAX = (r32((uint32_t)(0x102b6a08)));
L_102b42d2:;
  /* 102b42d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102b42d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b42d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b42db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b42de push eax */
  push32((uint32_t)(EAX));
  /* 102b42df call dword ptr [0x102b5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5018))), 0x102b42e5u);
  /* 102b42e5 jmp 0x102b4389 */
  goto L_102b4389;
L_102b42ea:;
  /* 102b42ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b42ed jne 0x102b4387 */
  if (!C.zf) goto L_102b4387;
  /* 102b42f3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b42f6 jne 0x102b4300 */
  if (!C.zf) goto L_102b4300;
  /* 102b42f8 mov eax, dword ptr [0x102b6a18] */
  EAX = (r32((uint32_t)(0x102b6a18)));
  /* 102b42fd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_102b4300:;
  /* 102b4300 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4301 push ebx */
  push32((uint32_t)(EBX));
  /* 102b4302 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b4305 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b4308 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 102b430b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102b430d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b430f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102b4312 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102b4313 push eax */
  push32((uint32_t)(EAX));
  /* 102b4314 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102b4317 call dword ptr [0x102b5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5024))), 0x102b431du);
  /* 102b431d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102b4320 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4322 je 0x102b4387 */
  if (C.zf) goto L_102b4387;
  /* 102b4324 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 102b4327 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 102b432a mov eax, edi */
  EAX = (EDI);
  /* 102b432c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b432f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102b4331 call 0x102b48b0 */
  push32(0x102b4336u); f_102b48b0();
  /* 102b4336 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102b4339 mov esi, esp */
  ESI = (ESP);
  /* 102b433b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 102b433e push edi */
  push32((uint32_t)(EDI));
  /* 102b433f push ebx */
  push32((uint32_t)(EBX));
  /* 102b4340 push esi */
  push32((uint32_t)(ESI));
  /* 102b4341 call 0x102b3f90 */
  push32(0x102b4346u); f_102b3f90();
  /* 102b4346 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b4349 jmp 0x102b4356 */
  goto L_102b4356;
  /* 102b434b push 1 */
  push32((uint32_t)(0x1u));
  /* 102b434d pop eax */
  EAX = (pop32());
  /* 102b434e ret  */
  ESPCHK(0x102b4252u, _esp0);
  ESP += 4; return;
  /* 102b434f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102b4352 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102b4354 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102b4356:;
  /* 102b4356 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102b435a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b435c je 0x102b4387 */
  if (C.zf) goto L_102b4387;
  /* 102b435e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 102b4361 push esi */
  push32((uint32_t)(ESI));
  /* 102b4362 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102b4365 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102b4368 push 1 */
  push32((uint32_t)(0x1u));
  /* 102b436a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102b436d call dword ptr [0x102b5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b5024))), 0x102b4373u);
  /* 102b4373 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4375 je 0x102b4387 */
  if (C.zf) goto L_102b4387;
  /* 102b4377 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102b437a push eax */
  push32((uint32_t)(EAX));
  /* 102b437b push esi */
  push32((uint32_t)(ESI));
  /* 102b437c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b437f call dword ptr [0x102b500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102b500c))), 0x102b4385u);
  /* 102b4385 jmp 0x102b4389 */
  goto L_102b4389;
L_102b4387:;
  /* 102b4387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102b4389:;
  /* 102b4389 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 102b438c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102b438f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102b4396 pop edi */
  EDI = (pop32());
  /* 102b4397 pop esi */
  ESI = (pop32());
  /* 102b4398 pop ebx */
  EBX = (pop32());
  /* 102b4399 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b439a ret  */
  ESPCHK(0x102b4252u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x102b43a0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_102b43a0(void) {
  FTRACE(0x102b43a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b43a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102b43a1 mov ebp, esp */
  EBP = (ESP);
  /* 102b43a3 push edi */
  push32((uint32_t)(EDI));
  /* 102b43a4 push esi */
  push32((uint32_t)(ESI));
  /* 102b43a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102b43a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102b43ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102b43ae mov eax, ecx */
  EAX = (ECX);
  /* 102b43b0 mov edx, ecx */
  EDX = (ECX);
  /* 102b43b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b43b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b43b6 jbe 0x102b43c0 */
  if ((C.cf||C.zf)) goto L_102b43c0;
  /* 102b43b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b43ba jb 0x102b4538 */
  if (C.cf) goto L_102b4538;
L_102b43c0:;
  /* 102b43c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102b43c6 jne 0x102b43dc */
  if (!C.zf) goto L_102b43dc;
  /* 102b43c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b43cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102b43ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b43d1 jb 0x102b43fc */
  if (C.cf) goto L_102b43fc;
  /* 102b43d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b43d5 jmp dword ptr [edx*4 + 0x102b44e8] */
  switch (EDX) {
    case 0: goto L_102b44f8;
    case 1: goto L_102b4500;
    case 2: goto L_102b450c;
    case 3: goto L_102b4520;
    default: x86_unimpl("switch@0x102b43d5 out of table"); return;
  }
L_102b43dc:;
  /* 102b43dc mov eax, edi */
  EAX = (EDI);
  /* 102b43de mov edx, 3 */
  EDX = (0x3u);
  /* 102b43e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b43e6 jb 0x102b43f4 */
  if (C.cf) goto L_102b43f4;
  /* 102b43e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102b43eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102b43ed jmp dword ptr [eax*4 + 0x102b4400] */
  switch (EAX) {
    case 1: goto L_102b4410;
    case 2: goto L_102b443c;
    case 3: goto L_102b4460;
    default: x86_unimpl("switch@0x102b43ed out of table"); return;
  }
L_102b43f4:;
  /* 102b43f4 jmp dword ptr [ecx*4 + 0x102b44f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102b44f8)))); return;
  /* 102b43fb nop  */
  /* nop */
L_102b43fc:;
  /* 102b43fc jmp dword ptr [ecx*4 + 0x102b447c] */
  switch (ECX) {
    case 0: goto L_102b44df;
    case 1: goto L_102b44cc;
    case 2: goto L_102b44c4;
    case 3: goto L_102b44bc;
    case 4: goto L_102b44b4;
    case 5: goto L_102b44ac;
    case 6: goto L_102b44a4;
    case 7: goto L_102b449c;
    default: x86_unimpl("switch@0x102b43fc out of table"); return;
  }
  /* 102b4403 nop  */
  /* nop */
L_102b4410:;
  /* 102b4410 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b4412 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b4414 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b4416 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b4419 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b441c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b441f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b4422 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b4425 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b4428 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b442b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b442e jb 0x102b43fc */
  if (C.cf) goto L_102b43fc;
  /* 102b4430 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b4432 jmp dword ptr [edx*4 + 0x102b44e8] */
  switch (EDX) {
    case 0: goto L_102b44f8;
    case 1: goto L_102b4500;
    case 2: goto L_102b450c;
    case 3: goto L_102b4520;
    default: x86_unimpl("switch@0x102b4432 out of table"); return;
  }
  /* 102b4439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b443c:;
  /* 102b443c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b443e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b4440 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b4442 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b4445 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b4448 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b444b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b444e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b4451 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4454 jb 0x102b43fc */
  if (C.cf) goto L_102b43fc;
  /* 102b4456 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b4458 jmp dword ptr [edx*4 + 0x102b44e8] */
  switch (EDX) {
    case 0: goto L_102b44f8;
    case 1: goto L_102b4500;
    case 2: goto L_102b450c;
    case 3: goto L_102b4520;
    default: x86_unimpl("switch@0x102b4458 out of table"); return;
  }
  /* 102b445f nop  */
  /* nop */
L_102b4460:;
  /* 102b4460 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b4462 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b4464 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b4466 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b4467 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b446a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102b446b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b446e jb 0x102b43fc */
  if (C.cf) goto L_102b43fc;
  /* 102b4470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b4472 jmp dword ptr [edx*4 + 0x102b44e8] */
  switch (EDX) {
    case 0: goto L_102b44f8;
    case 1: goto L_102b4500;
    case 2: goto L_102b450c;
    case 3: goto L_102b4520;
    default: x86_unimpl("switch@0x102b4472 out of table"); return;
  }
  /* 102b4479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b449c:;
  /* 102b449c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102b44a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102b44a4:;
  /* 102b44a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102b44a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102b44ac:;
  /* 102b44ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102b44b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102b44b4:;
  /* 102b44b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102b44b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102b44bc:;
  /* 102b44bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102b44c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102b44c4:;
  /* 102b44c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102b44c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102b44cc:;
  /* 102b44cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102b44d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102b44d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102b44db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b44dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102b44df:;
  /* 102b44df jmp dword ptr [edx*4 + 0x102b44e8] */
  switch (EDX) {
    case 0: goto L_102b44f8;
    case 1: goto L_102b4500;
    case 2: goto L_102b450c;
    case 3: goto L_102b4520;
    default: x86_unimpl("switch@0x102b44df out of table"); return;
  }
  /* 102b44e6 mov edi, edi */
  EDI = (EDI);
L_102b44f8:;
  /* 102b44f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b44fb pop esi */
  ESI = (pop32());
  /* 102b44fc pop edi */
  EDI = (pop32());
  /* 102b44fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b44fe ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b44ff nop  */
  /* nop */
L_102b4500:;
  /* 102b4500 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b4502 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b4504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b4507 pop esi */
  ESI = (pop32());
  /* 102b4508 pop edi */
  EDI = (pop32());
  /* 102b4509 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b450a ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b450b nop  */
  /* nop */
L_102b450c:;
  /* 102b450c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b450e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b4510 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b4513 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b4516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b4519 pop esi */
  ESI = (pop32());
  /* 102b451a pop edi */
  EDI = (pop32());
  /* 102b451b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b451c ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b451d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b4520:;
  /* 102b4520 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102b4522 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102b4524 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b4527 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b452a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b452d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b4530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b4533 pop esi */
  ESI = (pop32());
  /* 102b4534 pop edi */
  EDI = (pop32());
  /* 102b4535 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b4536 ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b4537 nop  */
  /* nop */
L_102b4538:;
  /* 102b4538 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102b453c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102b4540 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102b4546 jne 0x102b456c */
  if (!C.zf) goto L_102b456c;
  /* 102b4548 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b454b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102b454e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4551 jb 0x102b4560 */
  if (C.cf) goto L_102b4560;
  /* 102b4553 std  */
  C.df=1;
  /* 102b4554 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b4556 cld  */
  C.df=0;
  /* 102b4557 jmp dword ptr [edx*4 + 0x102b4680] */
  switch (EDX) {
    case 0: goto L_102b4690;
    case 1: goto L_102b4698;
    case 2: goto L_102b46a8;
    case 3: goto L_102b46bc;
    default: x86_unimpl("switch@0x102b4557 out of table"); return;
  }
  /* 102b455e mov edi, edi */
  EDI = (EDI);
L_102b4560:;
  /* 102b4560 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102b4562 jmp dword ptr [ecx*4 + 0x102b4630] */
  switch (ECX) {
    case 0: goto L_102b4677;
    default: x86_unimpl("switch@0x102b4562 out of table"); return;
  }
  /* 102b4569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b456c:;
  /* 102b456c mov eax, edi */
  EAX = (EDI);
  /* 102b456e mov edx, 3 */
  EDX = (0x3u);
  /* 102b4573 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4576 jb 0x102b4584 */
  if (C.cf) goto L_102b4584;
  /* 102b4578 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102b457b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b457d jmp dword ptr [eax*4 + 0x102b4588] */
  switch (EAX) {
    case 1: goto L_102b4598;
    case 2: goto L_102b45b8;
    case 3: goto L_102b45e0;
    default: x86_unimpl("switch@0x102b457d out of table"); return;
  }
L_102b4584:;
  /* 102b4584 jmp dword ptr [ecx*4 + 0x102b4680] */
  switch (ECX) {
    case 0: goto L_102b4690;
    case 1: goto L_102b4698;
    case 2: goto L_102b46a8;
    case 3: goto L_102b46bc;
    default: x86_unimpl("switch@0x102b4584 out of table"); return;
  }
  /* 102b458b nop  */
  /* nop */
L_102b4598:;
  /* 102b4598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b459b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b459d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b45a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102b45a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b45a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102b45a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b45a8 jb 0x102b4560 */
  if (C.cf) goto L_102b4560;
  /* 102b45aa std  */
  C.df=1;
  /* 102b45ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b45ad cld  */
  C.df=0;
  /* 102b45ae jmp dword ptr [edx*4 + 0x102b4680] */
  switch (EDX) {
    case 0: goto L_102b4690;
    case 1: goto L_102b4698;
    case 2: goto L_102b46a8;
    case 3: goto L_102b46bc;
    default: x86_unimpl("switch@0x102b45ae out of table"); return;
  }
  /* 102b45b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b45b8:;
  /* 102b45b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b45bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b45bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b45c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b45c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b45c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b45c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b45cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b45cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b45d2 jb 0x102b4560 */
  if (C.cf) goto L_102b4560;
  /* 102b45d4 std  */
  C.df=1;
  /* 102b45d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b45d7 cld  */
  C.df=0;
  /* 102b45d8 jmp dword ptr [edx*4 + 0x102b4680] */
  switch (EDX) {
    case 0: goto L_102b4690;
    case 1: goto L_102b4698;
    case 2: goto L_102b46a8;
    case 3: goto L_102b46bc;
    default: x86_unimpl("switch@0x102b45d8 out of table"); return;
  }
  /* 102b45df nop  */
  /* nop */
L_102b45e0:;
  /* 102b45e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b45e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102b45e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b45e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b45eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b45ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b45f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102b45f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b45f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b45fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b45fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4600 jb 0x102b4560 */
  if (C.cf) goto L_102b4560;
  /* 102b4606 std  */
  C.df=1;
  /* 102b4607 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102b4609 cld  */
  C.df=0;
  /* 102b460a jmp dword ptr [edx*4 + 0x102b4680] */
  switch (EDX) {
    case 0: goto L_102b4690;
    case 1: goto L_102b4698;
    case 2: goto L_102b46a8;
    case 3: goto L_102b46bc;
    default: x86_unimpl("switch@0x102b460a out of table"); return;
  }
  /* 102b4611 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102b4614 xor al, 0x46 */
  { uint32_t _r=(AL)^(0x46u); AL = (_r); fl_logic(_r,8); }
  /* 102b4616 sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4618 cmp al, 0x46 */
  { uint32_t _a=(AL),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102b461a sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b461c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 102b461d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b461e sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4620 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 102b4621 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b4622 sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4624 push esp */
  push32((uint32_t)(ESP));
  /* 102b4625 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b4626 sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4628 pop esp */
  ESP = (pop32());
  /* 102b4629 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b462a sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b462c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102b462e sub edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b4634 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102b4638 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102b463c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102b4640 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102b4644 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102b4648 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102b464c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102b4650 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102b4654 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102b4658 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102b465c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102b4660 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102b4664 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102b4668 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102b466c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102b4673 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102b4675 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102b4677:;
  /* 102b4677 jmp dword ptr [edx*4 + 0x102b4680] */
  switch (EDX) {
    case 0: goto L_102b4690;
    case 1: goto L_102b4698;
    case 2: goto L_102b46a8;
    case 3: goto L_102b46bc;
    default: x86_unimpl("switch@0x102b4677 out of table"); return;
  }
  /* 102b467e mov edi, edi */
  EDI = (EDI);
L_102b4690:;
  /* 102b4690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b4693 pop esi */
  ESI = (pop32());
  /* 102b4694 pop edi */
  EDI = (pop32());
  /* 102b4695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b4696 ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b4697 nop  */
  /* nop */
L_102b4698:;
  /* 102b4698 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b469b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b469e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b46a1 pop esi */
  ESI = (pop32());
  /* 102b46a2 pop edi */
  EDI = (pop32());
  /* 102b46a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b46a4 ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b46a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102b46a8:;
  /* 102b46a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b46ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b46ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b46b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b46b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b46b7 pop esi */
  ESI = (pop32());
  /* 102b46b8 pop edi */
  EDI = (pop32());
  /* 102b46b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b46ba ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
  /* 102b46bb nop  */
  /* nop */
L_102b46bc:;
  /* 102b46bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102b46bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102b46c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102b46c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102b46c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102b46cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102b46ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b46d1 pop esi */
  ESI = (pop32());
  /* 102b46d2 pop edi */
  EDI = (pop32());
  /* 102b46d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102b46d4 ret  */
  ESPCHK(0x102b43a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x102b46d8 (32 bytes, 18 insns) */
void f_102b46d8(void) {
  FTRACE(0x102b46d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b46d8 push ebp */
  push32((uint32_t)(EBP));
  /* 102b46d9 mov ebp, esp */
  EBP = (ESP);
  /* 102b46db push ebx */
  push32((uint32_t)(EBX));
  /* 102b46dc push esi */
  push32((uint32_t)(ESI));
  /* 102b46dd push edi */
  push32((uint32_t)(EDI));
  /* 102b46de push ebp */
  push32((uint32_t)(EBP));
  /* 102b46df push 0 */
  push32((uint32_t)(0x0u));
  /* 102b46e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102b46e3 push 0x102b46f0 */
  push32((uint32_t)(0x102b46f0u));
  /* 102b46e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102b46eb call 0x102b48e0 */
  push32(0x102b46f0u); f_102b48e0();
  /* 102b46f0 pop ebp */
  EBP = (pop32());
  /* 102b46f1 pop edi */
  EDI = (pop32());
  /* 102b46f2 pop esi */
  ESI = (pop32());
  /* 102b46f3 pop ebx */
  EBX = (pop32());
  /* 102b46f4 mov esp, ebp */
  ESP = (EBP);
  /* 102b46f6 pop ebp */
  EBP = (pop32());
  /* 102b46f7 ret  */
  ESPCHK(0x102b46d8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x102b471a (104 bytes, 33 insns) */
void f_102b471a(void) {
  FTRACE(0x102b471au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b471a push ebx */
  push32((uint32_t)(EBX));
  /* 102b471b push esi */
  push32((uint32_t)(ESI));
  /* 102b471c push edi */
  push32((uint32_t)(EDI));
  /* 102b471d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102b4721 push eax */
  push32((uint32_t)(EAX));
  /* 102b4722 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 102b4724 push 0x102b46f8 */
  push32((uint32_t)(0x102b46f8u));
  /* 102b4729 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 102b4730 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_102b4737:;
  /* 102b4737 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102b473b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 102b473e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 102b4741 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b4744 je 0x102b4774 */
  if (C.zf) goto L_102b4774;
  /* 102b4746 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b474a je 0x102b4774 */
  if (C.zf) goto L_102b4774;
  /* 102b474c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 102b474f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 102b4752 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 102b4756 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 102b4759 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b475e jne 0x102b4772 */
  if (!C.zf) goto L_102b4772;
  /* 102b4760 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102b4765 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 102b4769 call 0x102b47ae */
  push32(0x102b476eu); f_102b47ae();
  /* 102b476e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x102b4772u);
L_102b4772:;
  /* 102b4772 jmp 0x102b4737 */
  goto L_102b4737;
L_102b4774:;
  /* 102b4774 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 102b477b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b477e pop edi */
  EDI = (pop32());
  /* 102b477f pop esi */
  ESI = (pop32());
  /* 102b4780 pop ebx */
  EBX = (pop32());
  /* 102b4781 ret  */
  ESPCHK(0x102b471au, _esp0);
  ESP += 4; return;
}

/* FUN_100047ae @ 0x102b47ae (24 bytes, 10 insns) */
void f_102b47ae(void) {
  FTRACE(0x102b47aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b47ae push ebx */
  push32((uint32_t)(EBX));
  /* 102b47af push ecx */
  push32((uint32_t)(ECX));
  /* 102b47b0 mov ebx, 0x102b6660 */
  EBX = (0x102b6660u);
  /* 102b47b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102b47b8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 102b47bb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 102b47be mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 102b47c1 pop ecx */
  ECX = (pop32());
  /* 102b47c2 pop ebx */
  EBX = (pop32());
  /* 102b47c3 ret 4 */
  ESPCHK(0x102b47aeu, _esp0);
  ESP += 8; return;
}

/* FUN_1000488d @ 0x102b488d (27 bytes, 11 insns) */
void f_102b488d(void) {
  FTRACE(0x102b488du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b488d push ebp */
  push32((uint32_t)(EBP));
  /* 102b488e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102b4892 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 102b4894 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 102b4897 push eax */
  push32((uint32_t)(EAX));
  /* 102b4898 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 102b489b push eax */
  push32((uint32_t)(EAX));
  /* 102b489c call 0x102b471a */
  push32(0x102b48a1u); f_102b471a();
  /* 102b48a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102b48a4 pop ebp */
  EBP = (pop32());
  /* 102b48a5 ret 4 */
  ESPCHK(0x102b488du, _esp0);
  ESP += 8; return;
}

/* FUN_100048b0 @ 0x102b48b0 (47 bytes, 17 insns) */
void f_102b48b0(void) {
  FTRACE(0x102b48b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b48b0 push ecx */
  push32((uint32_t)(ECX));
  /* 102b48b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b48b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 102b48ba jb 0x102b48d0 */
  if (C.cf) goto L_102b48d0;
L_102b48bc:;
  /* 102b48bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b48c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b48c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102b48c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102b48ce jae 0x102b48bc */
  if (!C.cf) goto L_102b48bc;
L_102b48d0:;
  /* 102b48d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102b48d2 mov eax, esp */
  EAX = (ESP);
  /* 102b48d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102b48d6 mov esp, ecx */
  ESP = (ECX);
  /* 102b48d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102b48da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 102b48dd push eax */
  push32((uint32_t)(EAX));
  /* 102b48de ret  */
  ESPCHK(0x102b48b0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x102b48e0 (6 bytes, 1 insns) */
void f_102b48e0(void) {
  FTRACE(0x102b48e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102b48e0 jmp dword ptr [0x102b5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102b5008)))); return;
}

