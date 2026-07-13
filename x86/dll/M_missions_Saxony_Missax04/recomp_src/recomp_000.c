#include "recomp.h"

/* OnInit @ 0x10bb1000 (1406 bytes, 361 insns) */
void f_10bb1000(void) {
  FTRACE(0x10bb1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb1000 push esi */
  push32((uint32_t)(ESI));
  /* 10bb1001 mov esi, dword ptr [0x10bb6154] */
  ESI = (r32((uint32_t)(0x10bb6154)));
  /* 10bb1007 push edi */
  push32((uint32_t)(EDI));
  /* 10bb1008 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb100d push 0x10bb7d30 */
  push32((uint32_t)(0x10bb7d30u));
  /* 10bb1012 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1014u);
  /* 10bb1014 push 0x10bb744c */
  push32((uint32_t)(0x10bb744cu));
  /* 10bb1019 push 0x10bb7d38 */
  push32((uint32_t)(0x10bb7d38u));
  /* 10bb101e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1020u);
  /* 10bb1020 push 0x10bb7444 */
  push32((uint32_t)(0x10bb7444u));
  /* 10bb1025 push 0x10bb7c60 */
  push32((uint32_t)(0x10bb7c60u));
  /* 10bb102a call esi */
  call_ind((uint32_t)(ESI), 0x10bb102cu);
  /* 10bb102c push 0x10bb743c */
  push32((uint32_t)(0x10bb743cu));
  /* 10bb1031 push 0x10bb7d48 */
  push32((uint32_t)(0x10bb7d48u));
  /* 10bb1036 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1038u);
  /* 10bb1038 push 0x10bb7430 */
  push32((uint32_t)(0x10bb7430u));
  /* 10bb103d push 0x10bb7d78 */
  push32((uint32_t)(0x10bb7d78u));
  /* 10bb1042 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1044u);
  /* 10bb1044 push 0x10bb7424 */
  push32((uint32_t)(0x10bb7424u));
  /* 10bb1049 push 0x10bb7d80 */
  push32((uint32_t)(0x10bb7d80u));
  /* 10bb104e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1050u);
  /* 10bb1050 push 0x10bb741c */
  push32((uint32_t)(0x10bb741cu));
  /* 10bb1055 push 0x10bb7b18 */
  push32((uint32_t)(0x10bb7b18u));
  /* 10bb105a call esi */
  call_ind((uint32_t)(ESI), 0x10bb105cu);
  /* 10bb105c push 0x10bb7414 */
  push32((uint32_t)(0x10bb7414u));
  /* 10bb1061 push 0x10bb7b20 */
  push32((uint32_t)(0x10bb7b20u));
  /* 10bb1066 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1068u);
  /* 10bb1068 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb106b push 0x10bb740c */
  push32((uint32_t)(0x10bb740cu));
  /* 10bb1070 push 0x10bb7b28 */
  push32((uint32_t)(0x10bb7b28u));
  /* 10bb1075 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1077u);
  /* 10bb1077 push 0x10bb7404 */
  push32((uint32_t)(0x10bb7404u));
  /* 10bb107c push 0x10bb7b30 */
  push32((uint32_t)(0x10bb7b30u));
  /* 10bb1081 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1083u);
  /* 10bb1083 push 0x10bb73fc */
  push32((uint32_t)(0x10bb73fcu));
  /* 10bb1088 push 0x10bb7b38 */
  push32((uint32_t)(0x10bb7b38u));
  /* 10bb108d call esi */
  call_ind((uint32_t)(ESI), 0x10bb108fu);
  /* 10bb108f push 0x10bb73f4 */
  push32((uint32_t)(0x10bb73f4u));
  /* 10bb1094 push 0x10bb7b40 */
  push32((uint32_t)(0x10bb7b40u));
  /* 10bb1099 call esi */
  call_ind((uint32_t)(ESI), 0x10bb109bu);
  /* 10bb109b push 0x10bb73ec */
  push32((uint32_t)(0x10bb73ecu));
  /* 10bb10a0 push 0x10bb7ae8 */
  push32((uint32_t)(0x10bb7ae8u));
  /* 10bb10a5 call esi */
  call_ind((uint32_t)(ESI), 0x10bb10a7u);
  /* 10bb10a7 push 0x10bb73e4 */
  push32((uint32_t)(0x10bb73e4u));
  /* 10bb10ac push 0x10bb7af0 */
  push32((uint32_t)(0x10bb7af0u));
  /* 10bb10b1 call esi */
  call_ind((uint32_t)(ESI), 0x10bb10b3u);
  /* 10bb10b3 push 0x10bb73dc */
  push32((uint32_t)(0x10bb73dcu));
  /* 10bb10b8 push 0x10bb7af8 */
  push32((uint32_t)(0x10bb7af8u));
  /* 10bb10bd call esi */
  call_ind((uint32_t)(ESI), 0x10bb10bfu);
  /* 10bb10bf push 0x10bb73d4 */
  push32((uint32_t)(0x10bb73d4u));
  /* 10bb10c4 push 0x10bb7b00 */
  push32((uint32_t)(0x10bb7b00u));
  /* 10bb10c9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb10cbu);
  /* 10bb10cb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb10ce push 0x10bb73cc */
  push32((uint32_t)(0x10bb73ccu));
  /* 10bb10d3 push 0x10bb7b08 */
  push32((uint32_t)(0x10bb7b08u));
  /* 10bb10d8 call esi */
  call_ind((uint32_t)(ESI), 0x10bb10dau);
  /* 10bb10da push 0x10bb73c4 */
  push32((uint32_t)(0x10bb73c4u));
  /* 10bb10df push 0x10bb7b10 */
  push32((uint32_t)(0x10bb7b10u));
  /* 10bb10e4 call esi */
  call_ind((uint32_t)(ESI), 0x10bb10e6u);
  /* 10bb10e6 push 0x10bb73bc */
  push32((uint32_t)(0x10bb73bcu));
  /* 10bb10eb push 0x10bb7ba0 */
  push32((uint32_t)(0x10bb7ba0u));
  /* 10bb10f0 call esi */
  call_ind((uint32_t)(ESI), 0x10bb10f2u);
  /* 10bb10f2 push 0x10bb73b4 */
  push32((uint32_t)(0x10bb73b4u));
  /* 10bb10f7 push 0x10bb7c38 */
  push32((uint32_t)(0x10bb7c38u));
  /* 10bb10fc call esi */
  call_ind((uint32_t)(ESI), 0x10bb10feu);
  /* 10bb10fe push 0x10bb73ac */
  push32((uint32_t)(0x10bb73acu));
  /* 10bb1103 push 0x10bb7d90 */
  push32((uint32_t)(0x10bb7d90u));
  /* 10bb1108 call esi */
  call_ind((uint32_t)(ESI), 0x10bb110au);
  /* 10bb110a push 0x10bb73a0 */
  push32((uint32_t)(0x10bb73a0u));
  /* 10bb110f push 0x10bb7c20 */
  push32((uint32_t)(0x10bb7c20u));
  /* 10bb1114 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1116u);
  /* 10bb1116 push 0x10bb7398 */
  push32((uint32_t)(0x10bb7398u));
  /* 10bb111b push 0x10bb7b50 */
  push32((uint32_t)(0x10bb7b50u));
  /* 10bb1120 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1122u);
  /* 10bb1122 push 0x10bb7394 */
  push32((uint32_t)(0x10bb7394u));
  /* 10bb1127 push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb112c call esi */
  call_ind((uint32_t)(ESI), 0x10bb112eu);
  /* 10bb112e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1131 push 0x10bb738c */
  push32((uint32_t)(0x10bb738cu));
  /* 10bb1136 push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb113b call esi */
  call_ind((uint32_t)(ESI), 0x10bb113du);
  /* 10bb113d push 0x10bb7380 */
  push32((uint32_t)(0x10bb7380u));
  /* 10bb1142 push 0x10bb7ca8 */
  push32((uint32_t)(0x10bb7ca8u));
  /* 10bb1147 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1149u);
  /* 10bb1149 push 0x10bb7378 */
  push32((uint32_t)(0x10bb7378u));
  /* 10bb114e push 0x10bb7c98 */
  push32((uint32_t)(0x10bb7c98u));
  /* 10bb1153 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1155u);
  /* 10bb1155 push 0x10bb7370 */
  push32((uint32_t)(0x10bb7370u));
  /* 10bb115a push 0x10bb7be8 */
  push32((uint32_t)(0x10bb7be8u));
  /* 10bb115f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1161u);
  /* 10bb1161 push 0x10bb7368 */
  push32((uint32_t)(0x10bb7368u));
  /* 10bb1166 push 0x10bb7a08 */
  push32((uint32_t)(0x10bb7a08u));
  /* 10bb116b call esi */
  call_ind((uint32_t)(ESI), 0x10bb116du);
  /* 10bb116d push 0x10bb7360 */
  push32((uint32_t)(0x10bb7360u));
  /* 10bb1172 push 0x10bb7a18 */
  push32((uint32_t)(0x10bb7a18u));
  /* 10bb1177 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1179u);
  /* 10bb1179 push 0x10bb7358 */
  push32((uint32_t)(0x10bb7358u));
  /* 10bb117e push 0x10bb7a10 */
  push32((uint32_t)(0x10bb7a10u));
  /* 10bb1183 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1185u);
  /* 10bb1185 push 0x10bb7350 */
  push32((uint32_t)(0x10bb7350u));
  /* 10bb118a push 0x10bb7a28 */
  push32((uint32_t)(0x10bb7a28u));
  /* 10bb118f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1191u);
  /* 10bb1191 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1194 push 0x10bb7348 */
  push32((uint32_t)(0x10bb7348u));
  /* 10bb1199 push 0x10bb7a20 */
  push32((uint32_t)(0x10bb7a20u));
  /* 10bb119e call esi */
  call_ind((uint32_t)(ESI), 0x10bb11a0u);
  /* 10bb11a0 push 0x10bb7340 */
  push32((uint32_t)(0x10bb7340u));
  /* 10bb11a5 push 0x10bb7da0 */
  push32((uint32_t)(0x10bb7da0u));
  /* 10bb11aa call esi */
  call_ind((uint32_t)(ESI), 0x10bb11acu);
  /* 10bb11ac push 0x10bb7334 */
  push32((uint32_t)(0x10bb7334u));
  /* 10bb11b1 push 0x10bb7ad8 */
  push32((uint32_t)(0x10bb7ad8u));
  /* 10bb11b6 call esi */
  call_ind((uint32_t)(ESI), 0x10bb11b8u);
  /* 10bb11b8 push 0x10bb7328 */
  push32((uint32_t)(0x10bb7328u));
  /* 10bb11bd push 0x10bb7ad0 */
  push32((uint32_t)(0x10bb7ad0u));
  /* 10bb11c2 call esi */
  call_ind((uint32_t)(ESI), 0x10bb11c4u);
  /* 10bb11c4 push 0x10bb7320 */
  push32((uint32_t)(0x10bb7320u));
  /* 10bb11c9 push 0x10bb7d28 */
  push32((uint32_t)(0x10bb7d28u));
  /* 10bb11ce call esi */
  call_ind((uint32_t)(ESI), 0x10bb11d0u);
  /* 10bb11d0 push 0x10bb731c */
  push32((uint32_t)(0x10bb731cu));
  /* 10bb11d5 push 0x10bb7d18 */
  push32((uint32_t)(0x10bb7d18u));
  /* 10bb11da call esi */
  call_ind((uint32_t)(ESI), 0x10bb11dcu);
  /* 10bb11dc mov esi, dword ptr [0x10bb6158] */
  ESI = (r32((uint32_t)(0x10bb6158)));
  /* 10bb11e2 push 0x10bb7310 */
  push32((uint32_t)(0x10bb7310u));
  /* 10bb11e7 push 0x10bb7ac0 */
  push32((uint32_t)(0x10bb7ac0u));
  /* 10bb11ec call esi */
  call_ind((uint32_t)(ESI), 0x10bb11eeu);
  /* 10bb11ee push 0x10bb7304 */
  push32((uint32_t)(0x10bb7304u));
  /* 10bb11f3 push 0x10bb7ab0 */
  push32((uint32_t)(0x10bb7ab0u));
  /* 10bb11f8 call esi */
  call_ind((uint32_t)(ESI), 0x10bb11fau);
  /* 10bb11fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb11fd push 0x10bb72f8 */
  push32((uint32_t)(0x10bb72f8u));
  /* 10bb1202 push 0x10bb7d20 */
  push32((uint32_t)(0x10bb7d20u));
  /* 10bb1207 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1209u);
  /* 10bb1209 push 0x10bb72ec */
  push32((uint32_t)(0x10bb72ecu));
  /* 10bb120e push 0x10bb7d10 */
  push32((uint32_t)(0x10bb7d10u));
  /* 10bb1213 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1215u);
  /* 10bb1215 push 0x10bb72e4 */
  push32((uint32_t)(0x10bb72e4u));
  /* 10bb121a push 0x10bb7d98 */
  push32((uint32_t)(0x10bb7d98u));
  /* 10bb121f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1221u);
  /* 10bb1221 push 0x10bb72d8 */
  push32((uint32_t)(0x10bb72d8u));
  /* 10bb1226 push 0x10bb7a88 */
  push32((uint32_t)(0x10bb7a88u));
  /* 10bb122b call esi */
  call_ind((uint32_t)(ESI), 0x10bb122du);
  /* 10bb122d push 0x10bb72d0 */
  push32((uint32_t)(0x10bb72d0u));
  /* 10bb1232 push 0x10bb7d08 */
  push32((uint32_t)(0x10bb7d08u));
  /* 10bb1237 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1239u);
  /* 10bb1239 push 0x10bb72c8 */
  push32((uint32_t)(0x10bb72c8u));
  /* 10bb123e push 0x10bb7b58 */
  push32((uint32_t)(0x10bb7b58u));
  /* 10bb1243 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1245u);
  /* 10bb1245 push 0x10bb72c0 */
  push32((uint32_t)(0x10bb72c0u));
  /* 10bb124a push 0x10bb7b48 */
  push32((uint32_t)(0x10bb7b48u));
  /* 10bb124f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1251u);
  /* 10bb1251 push 0x10bb72b8 */
  push32((uint32_t)(0x10bb72b8u));
  /* 10bb1256 push 0x10bb7d58 */
  push32((uint32_t)(0x10bb7d58u));
  /* 10bb125b call esi */
  call_ind((uint32_t)(ESI), 0x10bb125du);
  /* 10bb125d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1260 push 0x10bb72ac */
  push32((uint32_t)(0x10bb72acu));
  /* 10bb1265 push 0x10bb7b68 */
  push32((uint32_t)(0x10bb7b68u));
  /* 10bb126a call esi */
  call_ind((uint32_t)(ESI), 0x10bb126cu);
  /* 10bb126c push 0x10bb72a0 */
  push32((uint32_t)(0x10bb72a0u));
  /* 10bb1271 push 0x10bb7a78 */
  push32((uint32_t)(0x10bb7a78u));
  /* 10bb1276 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1278u);
  /* 10bb1278 push 0x10bb7294 */
  push32((uint32_t)(0x10bb7294u));
  /* 10bb127d push 0x10bb7a60 */
  push32((uint32_t)(0x10bb7a60u));
  /* 10bb1282 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1284u);
  /* 10bb1284 push 0x10bb728c */
  push32((uint32_t)(0x10bb728cu));
  /* 10bb1289 push 0x10bb7c28 */
  push32((uint32_t)(0x10bb7c28u));
  /* 10bb128e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1290u);
  /* 10bb1290 push 0x10bb7284 */
  push32((uint32_t)(0x10bb7284u));
  /* 10bb1295 push 0x10bb7c30 */
  push32((uint32_t)(0x10bb7c30u));
  /* 10bb129a call esi */
  call_ind((uint32_t)(ESI), 0x10bb129cu);
  /* 10bb129c push 0x10bb727c */
  push32((uint32_t)(0x10bb727cu));
  /* 10bb12a1 push 0x10bb7a68 */
  push32((uint32_t)(0x10bb7a68u));
  /* 10bb12a6 call esi */
  call_ind((uint32_t)(ESI), 0x10bb12a8u);
  /* 10bb12a8 push 0x10bb7274 */
  push32((uint32_t)(0x10bb7274u));
  /* 10bb12ad push 0x10bb7d40 */
  push32((uint32_t)(0x10bb7d40u));
  /* 10bb12b2 call esi */
  call_ind((uint32_t)(ESI), 0x10bb12b4u);
  /* 10bb12b4 push 0x10bb726c */
  push32((uint32_t)(0x10bb726cu));
  /* 10bb12b9 push 0x10bb7a70 */
  push32((uint32_t)(0x10bb7a70u));
  /* 10bb12be call esi */
  call_ind((uint32_t)(ESI), 0x10bb12c0u);
  /* 10bb12c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb12c3 push 0x10bb7264 */
  push32((uint32_t)(0x10bb7264u));
  /* 10bb12c8 push 0x10bb7be0 */
  push32((uint32_t)(0x10bb7be0u));
  /* 10bb12cd call esi */
  call_ind((uint32_t)(ESI), 0x10bb12cfu);
  /* 10bb12cf push 0x10bb725c */
  push32((uint32_t)(0x10bb725cu));
  /* 10bb12d4 push 0x10bb7c00 */
  push32((uint32_t)(0x10bb7c00u));
  /* 10bb12d9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb12dbu);
  /* 10bb12db push 0x10bb7254 */
  push32((uint32_t)(0x10bb7254u));
  /* 10bb12e0 push 0x10bb7c08 */
  push32((uint32_t)(0x10bb7c08u));
  /* 10bb12e5 call esi */
  call_ind((uint32_t)(ESI), 0x10bb12e7u);
  /* 10bb12e7 push 0x10bb724c */
  push32((uint32_t)(0x10bb724cu));
  /* 10bb12ec push 0x10bb7bf0 */
  push32((uint32_t)(0x10bb7bf0u));
  /* 10bb12f1 call esi */
  call_ind((uint32_t)(ESI), 0x10bb12f3u);
  /* 10bb12f3 push 0x10bb7244 */
  push32((uint32_t)(0x10bb7244u));
  /* 10bb12f8 push 0x10bb7bf8 */
  push32((uint32_t)(0x10bb7bf8u));
  /* 10bb12fd call esi */
  call_ind((uint32_t)(ESI), 0x10bb12ffu);
  /* 10bb12ff push 0x10bb723c */
  push32((uint32_t)(0x10bb723cu));
  /* 10bb1304 push 0x10bb7c10 */
  push32((uint32_t)(0x10bb7c10u));
  /* 10bb1309 call esi */
  call_ind((uint32_t)(ESI), 0x10bb130bu);
  /* 10bb130b push 0x10bb7234 */
  push32((uint32_t)(0x10bb7234u));
  /* 10bb1310 push 0x10bb7c18 */
  push32((uint32_t)(0x10bb7c18u));
  /* 10bb1315 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1317u);
  /* 10bb1317 push 0x10bb722c */
  push32((uint32_t)(0x10bb722cu));
  /* 10bb131c push 0x10bb7d60 */
  push32((uint32_t)(0x10bb7d60u));
  /* 10bb1321 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1323u);
  /* 10bb1323 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1326 push 0x10bb7224 */
  push32((uint32_t)(0x10bb7224u));
  /* 10bb132b push 0x10bb7b88 */
  push32((uint32_t)(0x10bb7b88u));
  /* 10bb1330 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1332u);
  /* 10bb1332 push 0x10bb721c */
  push32((uint32_t)(0x10bb721cu));
  /* 10bb1337 push 0x10bb7b90 */
  push32((uint32_t)(0x10bb7b90u));
  /* 10bb133c call esi */
  call_ind((uint32_t)(ESI), 0x10bb133eu);
  /* 10bb133e push 0x10bb7214 */
  push32((uint32_t)(0x10bb7214u));
  /* 10bb1343 push 0x10bb7ba8 */
  push32((uint32_t)(0x10bb7ba8u));
  /* 10bb1348 call esi */
  call_ind((uint32_t)(ESI), 0x10bb134au);
  /* 10bb134a push 0x10bb720c */
  push32((uint32_t)(0x10bb720cu));
  /* 10bb134f push 0x10bb7bb0 */
  push32((uint32_t)(0x10bb7bb0u));
  /* 10bb1354 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1356u);
  /* 10bb1356 push 0x10bb7204 */
  push32((uint32_t)(0x10bb7204u));
  /* 10bb135b push 0x10bb7b98 */
  push32((uint32_t)(0x10bb7b98u));
  /* 10bb1360 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1362u);
  /* 10bb1362 push 0x10bb71fc */
  push32((uint32_t)(0x10bb71fcu));
  /* 10bb1367 push 0x10bb7a00 */
  push32((uint32_t)(0x10bb7a00u));
  /* 10bb136c call esi */
  call_ind((uint32_t)(ESI), 0x10bb136eu);
  /* 10bb136e push 0x10bb71f0 */
  push32((uint32_t)(0x10bb71f0u));
  /* 10bb1373 push 0x10bb7bd8 */
  push32((uint32_t)(0x10bb7bd8u));
  /* 10bb1378 call esi */
  call_ind((uint32_t)(ESI), 0x10bb137au);
  /* 10bb137a push 0x10bb71e4 */
  push32((uint32_t)(0x10bb71e4u));
  /* 10bb137f push 0x10bb7bd0 */
  push32((uint32_t)(0x10bb7bd0u));
  /* 10bb1384 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1386u);
  /* 10bb1386 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1389 push 0x10bb71e0 */
  push32((uint32_t)(0x10bb71e0u));
  /* 10bb138e push 0x10bb7bb8 */
  push32((uint32_t)(0x10bb7bb8u));
  /* 10bb1393 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1395u);
  /* 10bb1395 mov esi, dword ptr [0x10bb6150] */
  ESI = (r32((uint32_t)(0x10bb6150)));
  /* 10bb139b push 0x10bb71d4 */
  push32((uint32_t)(0x10bb71d4u));
  /* 10bb13a0 push 0x10bb7d00 */
  push32((uint32_t)(0x10bb7d00u));
  /* 10bb13a5 call esi */
  call_ind((uint32_t)(ESI), 0x10bb13a7u);
  /* 10bb13a7 mov edi, dword ptr [0x10bb6160] */
  EDI = (r32((uint32_t)(0x10bb6160)));
  /* 10bb13ad push 0x10bb7aa8 */
  push32((uint32_t)(0x10bb7aa8u));
  /* 10bb13b2 call edi */
  call_ind((uint32_t)(EDI), 0x10bb13b4u);
  /* 10bb13b4 push 0x10bb7b78 */
  push32((uint32_t)(0x10bb7b78u));
  /* 10bb13b9 call edi */
  call_ind((uint32_t)(EDI), 0x10bb13bbu);
  /* 10bb13bb push 0x10bb71c4 */
  push32((uint32_t)(0x10bb71c4u));
  /* 10bb13c0 push 0x10bb7d70 */
  push32((uint32_t)(0x10bb7d70u));
  /* 10bb13c5 call esi */
  call_ind((uint32_t)(ESI), 0x10bb13c7u);
  /* 10bb13c7 push 0x10bb7aa0 */
  push32((uint32_t)(0x10bb7aa0u));
  /* 10bb13cc call edi */
  call_ind((uint32_t)(EDI), 0x10bb13ceu);
  /* 10bb13ce push 0x10bb7b70 */
  push32((uint32_t)(0x10bb7b70u));
  /* 10bb13d3 call edi */
  call_ind((uint32_t)(EDI), 0x10bb13d5u);
  /* 10bb13d5 push 0x10bb71b8 */
  push32((uint32_t)(0x10bb71b8u));
  /* 10bb13da push 0x10bb7c40 */
  push32((uint32_t)(0x10bb7c40u));
  /* 10bb13df call esi */
  call_ind((uint32_t)(ESI), 0x10bb13e1u);
  /* 10bb13e1 push 0x10bb7ac8 */
  push32((uint32_t)(0x10bb7ac8u));
  /* 10bb13e6 call edi */
  call_ind((uint32_t)(EDI), 0x10bb13e8u);
  /* 10bb13e8 push 0x10bb7bc0 */
  push32((uint32_t)(0x10bb7bc0u));
  /* 10bb13ed call edi */
  call_ind((uint32_t)(EDI), 0x10bb13efu);
  /* 10bb13ef push 0x10bb71ac */
  push32((uint32_t)(0x10bb71acu));
  /* 10bb13f4 push 0x10bb7cf8 */
  push32((uint32_t)(0x10bb7cf8u));
  /* 10bb13f9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb13fbu);
  /* 10bb13fb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb13fe push 0x10bb7ab8 */
  push32((uint32_t)(0x10bb7ab8u));
  /* 10bb1403 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1405u);
  /* 10bb1405 push 0x10bb7b80 */
  push32((uint32_t)(0x10bb7b80u));
  /* 10bb140a call edi */
  call_ind((uint32_t)(EDI), 0x10bb140cu);
  /* 10bb140c push 0x10bb719c */
  push32((uint32_t)(0x10bb719cu));
  /* 10bb1411 push 0x10bb7a58 */
  push32((uint32_t)(0x10bb7a58u));
  /* 10bb1416 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1418u);
  /* 10bb1418 push 0x10bb7a90 */
  push32((uint32_t)(0x10bb7a90u));
  /* 10bb141d call edi */
  call_ind((uint32_t)(EDI), 0x10bb141fu);
  /* 10bb141f push 0x10bb7bc8 */
  push32((uint32_t)(0x10bb7bc8u));
  /* 10bb1424 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1426u);
  /* 10bb1426 push 0x10bb7188 */
  push32((uint32_t)(0x10bb7188u));
  /* 10bb142b push 0x10bb7a80 */
  push32((uint32_t)(0x10bb7a80u));
  /* 10bb1430 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1432u);
  /* 10bb1432 push 0x10bb7a98 */
  push32((uint32_t)(0x10bb7a98u));
  /* 10bb1437 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1439u);
  /* 10bb1439 push 0x10bb7a38 */
  push32((uint32_t)(0x10bb7a38u));
  /* 10bb143e call edi */
  call_ind((uint32_t)(EDI), 0x10bb1440u);
  /* 10bb1440 push 0x10bb7d88 */
  push32((uint32_t)(0x10bb7d88u));
  /* 10bb1445 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1447u);
  /* 10bb1447 push 0x10bb7b60 */
  push32((uint32_t)(0x10bb7b60u));
  /* 10bb144c call edi */
  call_ind((uint32_t)(EDI), 0x10bb144eu);
  /* 10bb144e push 0x10bb7178 */
  push32((uint32_t)(0x10bb7178u));
  /* 10bb1453 push 0x10bb7d50 */
  push32((uint32_t)(0x10bb7d50u));
  /* 10bb1458 call esi */
  call_ind((uint32_t)(ESI), 0x10bb145au);
  /* 10bb145a push 0x10bb7168 */
  push32((uint32_t)(0x10bb7168u));
  /* 10bb145f push 0x10bb7a30 */
  push32((uint32_t)(0x10bb7a30u));
  /* 10bb1464 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1466u);
  /* 10bb1466 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1469 push 0x10bb7160 */
  push32((uint32_t)(0x10bb7160u));
  /* 10bb146e push 0x10bb7ae0 */
  push32((uint32_t)(0x10bb7ae0u));
  /* 10bb1473 call dword ptr [0x10bb6164] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6164))), 0x10bb1479u);
  /* 10bb1479 mov edi, dword ptr [0x10bb615c] */
  EDI = (r32((uint32_t)(0x10bb615c)));
  /* 10bb147f push 0x10bb7158 */
  push32((uint32_t)(0x10bb7158u));
  /* 10bb1484 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1486 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1488u);
  /* 10bb1488 push 0x10bb714c */
  push32((uint32_t)(0x10bb714cu));
  /* 10bb148d push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb148f call edi */
  call_ind((uint32_t)(EDI), 0x10bb1491u);
  /* 10bb1491 push 0x10bb7144 */
  push32((uint32_t)(0x10bb7144u));
  /* 10bb1496 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1498 call edi */
  call_ind((uint32_t)(EDI), 0x10bb149au);
  /* 10bb149a push 0x10bb7130 */
  push32((uint32_t)(0x10bb7130u));
  /* 10bb149f push 0x10bb7c48 */
  push32((uint32_t)(0x10bb7c48u));
  /* 10bb14a4 call esi */
  call_ind((uint32_t)(ESI), 0x10bb14a6u);
  /* 10bb14a6 push 0x10bb7120 */
  push32((uint32_t)(0x10bb7120u));
  /* 10bb14ab push 0x10bb7c50 */
  push32((uint32_t)(0x10bb7c50u));
  /* 10bb14b0 call esi */
  call_ind((uint32_t)(ESI), 0x10bb14b2u);
  /* 10bb14b2 push 0x10bb7114 */
  push32((uint32_t)(0x10bb7114u));
  /* 10bb14b7 push 0x10bb7c58 */
  push32((uint32_t)(0x10bb7c58u));
  /* 10bb14bc call esi */
  call_ind((uint32_t)(ESI), 0x10bb14beu);
  /* 10bb14be push 0x10bb7108 */
  push32((uint32_t)(0x10bb7108u));
  /* 10bb14c3 push 0x10bb7c68 */
  push32((uint32_t)(0x10bb7c68u));
  /* 10bb14c8 call esi */
  call_ind((uint32_t)(ESI), 0x10bb14cau);
  /* 10bb14ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb14cd push 0x10bb70fc */
  push32((uint32_t)(0x10bb70fcu));
  /* 10bb14d2 push 0x10bb7c70 */
  push32((uint32_t)(0x10bb7c70u));
  /* 10bb14d7 call esi */
  call_ind((uint32_t)(ESI), 0x10bb14d9u);
  /* 10bb14d9 push 0x10bb70ec */
  push32((uint32_t)(0x10bb70ecu));
  /* 10bb14de push 0x10bb7c78 */
  push32((uint32_t)(0x10bb7c78u));
  /* 10bb14e3 call esi */
  call_ind((uint32_t)(ESI), 0x10bb14e5u);
  /* 10bb14e5 push 0x10bb70dc */
  push32((uint32_t)(0x10bb70dcu));
  /* 10bb14ea push 0x10bb7c80 */
  push32((uint32_t)(0x10bb7c80u));
  /* 10bb14ef call esi */
  call_ind((uint32_t)(ESI), 0x10bb14f1u);
  /* 10bb14f1 push 0x10bb70d0 */
  push32((uint32_t)(0x10bb70d0u));
  /* 10bb14f6 push 0x10bb7c88 */
  push32((uint32_t)(0x10bb7c88u));
  /* 10bb14fb call esi */
  call_ind((uint32_t)(ESI), 0x10bb14fdu);
  /* 10bb14fd push 0x10bb70b8 */
  push32((uint32_t)(0x10bb70b8u));
  /* 10bb1502 push 0x10bb7c90 */
  push32((uint32_t)(0x10bb7c90u));
  /* 10bb1507 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1509u);
  /* 10bb1509 push 0x10bb70ac */
  push32((uint32_t)(0x10bb70acu));
  /* 10bb150e push 0x10bb7cb0 */
  push32((uint32_t)(0x10bb7cb0u));
  /* 10bb1513 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1515u);
  /* 10bb1515 push 0x10bb709c */
  push32((uint32_t)(0x10bb709cu));
  /* 10bb151a push 0x10bb7cb8 */
  push32((uint32_t)(0x10bb7cb8u));
  /* 10bb151f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1521u);
  /* 10bb1521 push 0x10bb708c */
  push32((uint32_t)(0x10bb708cu));
  /* 10bb1526 push 0x10bb7cc0 */
  push32((uint32_t)(0x10bb7cc0u));
  /* 10bb152b call esi */
  call_ind((uint32_t)(ESI), 0x10bb152du);
  /* 10bb152d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1530 push 0x10bb7078 */
  push32((uint32_t)(0x10bb7078u));
  /* 10bb1535 push 0x10bb7cc8 */
  push32((uint32_t)(0x10bb7cc8u));
  /* 10bb153a call esi */
  call_ind((uint32_t)(ESI), 0x10bb153cu);
  /* 10bb153c push 0x10bb706c */
  push32((uint32_t)(0x10bb706cu));
  /* 10bb1541 push 0x10bb7cd0 */
  push32((uint32_t)(0x10bb7cd0u));
  /* 10bb1546 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1548u);
  /* 10bb1548 push 0x10bb7058 */
  push32((uint32_t)(0x10bb7058u));
  /* 10bb154d push 0x10bb7cd8 */
  push32((uint32_t)(0x10bb7cd8u));
  /* 10bb1552 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1554u);
  /* 10bb1554 push 0x10bb7048 */
  push32((uint32_t)(0x10bb7048u));
  /* 10bb1559 push 0x10bb7ce0 */
  push32((uint32_t)(0x10bb7ce0u));
  /* 10bb155e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1560u);
  /* 10bb1560 push 0x10bb703c */
  push32((uint32_t)(0x10bb703cu));
  /* 10bb1565 push 0x10bb7ce8 */
  push32((uint32_t)(0x10bb7ce8u));
  /* 10bb156a call esi */
  call_ind((uint32_t)(ESI), 0x10bb156cu);
  /* 10bb156c push 0x10bb7030 */
  push32((uint32_t)(0x10bb7030u));
  /* 10bb1571 push 0x10bb7cf0 */
  push32((uint32_t)(0x10bb7cf0u));
  /* 10bb1576 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1578u);
  /* 10bb1578 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb157b pop edi */
  EDI = (pop32());
  /* 10bb157c pop esi */
  ESI = (pop32());
  /* 10bb157d ret  */
  ESPCHK(0x10bb1000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001580 @ 0x10bb1580 (20 bytes, 6 insns) */
void f_10bb1580(void) {
  FTRACE(0x10bb1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb1580 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb1584 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bb1585 jne 0x10bb158c */
  if (!C.zf) goto L_10bb158c;
  /* 10bb1587 call 0x10bb1000 */
  push32(0x10bb158cu); f_10bb1000();
L_10bb158c:;
  /* 10bb158c mov eax, 1 */
  EAX = (0x1u);
  /* 10bb1591 ret 0xc */
  ESPCHK(0x10bb1580u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10bb15a0 (6834 bytes, 2108 insns) [2 switch table(s)] */
void f_10bb15a0(void) {
  FTRACE(0x10bb15a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb15a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb15a1 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb15a2 push esi */
  push32((uint32_t)(ESI));
  /* 10bb15a3 push edi */
  push32((uint32_t)(EDI));
  /* 10bb15a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb15a6 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb15acu);
  /* 10bb15ac mov esi, dword ptr [0x10bb60b8] */
  ESI = (r32((uint32_t)(0x10bb60b8)));
  /* 10bb15b2 mov edi, dword ptr [0x10bb60bc] */
  EDI = (r32((uint32_t)(0x10bb60bc)));
  /* 10bb15b8 mov ebp, dword ptr [0x10bb60b4] */
  EBP = (r32((uint32_t)(0x10bb60b4)));
  /* 10bb15be mov ebx, dword ptr [0x10bb60c4] */
  EBX = (r32((uint32_t)(0x10bb60c4)));
  /* 10bb15c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb15c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb15c9 je 0x10bb1bb9 */
  if (C.zf) goto L_10bb1bb9;
  /* 10bb15cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb15d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb15d3 call esi */
  call_ind((uint32_t)(ESI), 0x10bb15d5u);
  /* 10bb15d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb15d7 call dword ptr [0x10bb60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60c8))), 0x10bb15ddu);
  /* 10bb15dd mov esi, dword ptr [0x10bb60c0] */
  ESI = (r32((uint32_t)(0x10bb60c0)));
  /* 10bb15e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb15e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb15e8 jne 0x10bb171f */
  if (!C.zf) goto L_10bb171f;
  /* 10bb15ee push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 10bb15f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb15f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb15f7 call esi */
  call_ind((uint32_t)(ESI), 0x10bb15f9u);
  /* 10bb15f9 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10bb15fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1600 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1602 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1604u);
  /* 10bb1604 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10bb1609 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb160b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb160d call esi */
  call_ind((uint32_t)(ESI), 0x10bb160fu);
  /* 10bb160f push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10bb1614 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1616 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1618 call esi */
  call_ind((uint32_t)(ESI), 0x10bb161au);
  /* 10bb161a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb161c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb161e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1620 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1622u);
  /* 10bb1622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1624 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1626 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1628 call esi */
  call_ind((uint32_t)(ESI), 0x10bb162au);
  /* 10bb162a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb162d push 0x10bb76bc */
  push32((uint32_t)(0x10bb76bcu));
  /* 10bb1632 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1637 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1639u);
  /* 10bb1639 push 0x10bb76a4 */
  push32((uint32_t)(0x10bb76a4u));
  /* 10bb163e push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1643 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1645u);
  /* 10bb1645 push 0x10bb768c */
  push32((uint32_t)(0x10bb768cu));
  /* 10bb164a push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb164f call edi */
  call_ind((uint32_t)(EDI), 0x10bb1651u);
  /* 10bb1651 push 0x10bb7674 */
  push32((uint32_t)(0x10bb7674u));
  /* 10bb1656 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb165b call edi */
  call_ind((uint32_t)(EDI), 0x10bb165du);
  /* 10bb165d push 0x10bb765c */
  push32((uint32_t)(0x10bb765cu));
  /* 10bb1662 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1667 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1669u);
  /* 10bb1669 push 0x10bb7644 */
  push32((uint32_t)(0x10bb7644u));
  /* 10bb166e push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1673 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1675u);
  /* 10bb1675 push 0x10bb762c */
  push32((uint32_t)(0x10bb762cu));
  /* 10bb167a push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb167f call edi */
  call_ind((uint32_t)(EDI), 0x10bb1681u);
  /* 10bb1681 push 0x10bb7614 */
  push32((uint32_t)(0x10bb7614u));
  /* 10bb1686 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb168b call edi */
  call_ind((uint32_t)(EDI), 0x10bb168du);
  /* 10bb168d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1690 push 0x10bb75fc */
  push32((uint32_t)(0x10bb75fcu));
  /* 10bb1695 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb169a call edi */
  call_ind((uint32_t)(EDI), 0x10bb169cu);
  /* 10bb169c push 0x10bb75e4 */
  push32((uint32_t)(0x10bb75e4u));
  /* 10bb16a1 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16a6 call edi */
  call_ind((uint32_t)(EDI), 0x10bb16a8u);
  /* 10bb16a8 push 0x10bb75cc */
  push32((uint32_t)(0x10bb75ccu));
  /* 10bb16ad push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16b2 call edi */
  call_ind((uint32_t)(EDI), 0x10bb16b4u);
  /* 10bb16b4 push 0x10bb75b4 */
  push32((uint32_t)(0x10bb75b4u));
  /* 10bb16b9 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16be call edi */
  call_ind((uint32_t)(EDI), 0x10bb16c0u);
  /* 10bb16c0 push 0x10bb75a0 */
  push32((uint32_t)(0x10bb75a0u));
  /* 10bb16c5 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16ca call edi */
  call_ind((uint32_t)(EDI), 0x10bb16ccu);
  /* 10bb16cc push 0x10bb758c */
  push32((uint32_t)(0x10bb758cu));
  /* 10bb16d1 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16d6 call edi */
  call_ind((uint32_t)(EDI), 0x10bb16d8u);
  /* 10bb16d8 push 0x10bb7578 */
  push32((uint32_t)(0x10bb7578u));
  /* 10bb16dd push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16e2 call edi */
  call_ind((uint32_t)(EDI), 0x10bb16e4u);
  /* 10bb16e4 push 0x10bb7564 */
  push32((uint32_t)(0x10bb7564u));
  /* 10bb16e9 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16ee call edi */
  call_ind((uint32_t)(EDI), 0x10bb16f0u);
  /* 10bb16f0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb16f3 push 0x10bb7550 */
  push32((uint32_t)(0x10bb7550u));
  /* 10bb16f8 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb16fd call edi */
  call_ind((uint32_t)(EDI), 0x10bb16ffu);
  /* 10bb16ff push 0x10bb753c */
  push32((uint32_t)(0x10bb753cu));
  /* 10bb1704 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1709 call edi */
  call_ind((uint32_t)(EDI), 0x10bb170bu);
  /* 10bb170b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb170d push 0x10bb7d28 */
  push32((uint32_t)(0x10bb7d28u));
  /* 10bb1712 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1714u);
  /* 10bb1714 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1716 call dword ptr [0x10bb60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60d0))), 0x10bb171cu);
  /* 10bb171c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb171f:;
  /* 10bb171f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1721 call dword ptr [0x10bb60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60c8))), 0x10bb1727u);
  /* 10bb1727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb172a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb172d jne 0x10bb180d */
  if (!C.zf) goto L_10bb180d;
  /* 10bb1733 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 10bb1738 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb173a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb173c call esi */
  call_ind((uint32_t)(ESI), 0x10bb173eu);
  /* 10bb173e push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10bb1743 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1745 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1747 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1749u);
  /* 10bb1749 push 0x36b0 */
  push32((uint32_t)(0x36b0u));
  /* 10bb174e push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1752 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1754u);
  /* 10bb1754 push 0x36b0 */
  push32((uint32_t)(0x36b0u));
  /* 10bb1759 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb175b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb175d call esi */
  call_ind((uint32_t)(ESI), 0x10bb175fu);
  /* 10bb175f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1761 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1763 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1765 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1767u);
  /* 10bb1767 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1769 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb176b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb176d call esi */
  call_ind((uint32_t)(ESI), 0x10bb176fu);
  /* 10bb176f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1772 push 0x10bb76bc */
  push32((uint32_t)(0x10bb76bcu));
  /* 10bb1777 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb177c call edi */
  call_ind((uint32_t)(EDI), 0x10bb177eu);
  /* 10bb177e push 0x10bb76a4 */
  push32((uint32_t)(0x10bb76a4u));
  /* 10bb1783 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1788 call edi */
  call_ind((uint32_t)(EDI), 0x10bb178au);
  /* 10bb178a push 0x10bb768c */
  push32((uint32_t)(0x10bb768cu));
  /* 10bb178f push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1794 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1796u);
  /* 10bb1796 push 0x10bb7674 */
  push32((uint32_t)(0x10bb7674u));
  /* 10bb179b push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17a0 call edi */
  call_ind((uint32_t)(EDI), 0x10bb17a2u);
  /* 10bb17a2 push 0x10bb762c */
  push32((uint32_t)(0x10bb762cu));
  /* 10bb17a7 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17ac call edi */
  call_ind((uint32_t)(EDI), 0x10bb17aeu);
  /* 10bb17ae push 0x10bb7614 */
  push32((uint32_t)(0x10bb7614u));
  /* 10bb17b3 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17b8 call edi */
  call_ind((uint32_t)(EDI), 0x10bb17bau);
  /* 10bb17ba push 0x10bb75fc */
  push32((uint32_t)(0x10bb75fcu));
  /* 10bb17bf push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17c4 call edi */
  call_ind((uint32_t)(EDI), 0x10bb17c6u);
  /* 10bb17c6 push 0x10bb75a0 */
  push32((uint32_t)(0x10bb75a0u));
  /* 10bb17cb push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17d0 call edi */
  call_ind((uint32_t)(EDI), 0x10bb17d2u);
  /* 10bb17d2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb17d5 push 0x10bb758c */
  push32((uint32_t)(0x10bb758cu));
  /* 10bb17da push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17df call edi */
  call_ind((uint32_t)(EDI), 0x10bb17e1u);
  /* 10bb17e1 push 0x10bb7578 */
  push32((uint32_t)(0x10bb7578u));
  /* 10bb17e6 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17eb call edi */
  call_ind((uint32_t)(EDI), 0x10bb17edu);
  /* 10bb17ed push 0x10bb7564 */
  push32((uint32_t)(0x10bb7564u));
  /* 10bb17f2 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb17f7 call edi */
  call_ind((uint32_t)(EDI), 0x10bb17f9u);
  /* 10bb17f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb17fb push 0x10bb7d28 */
  push32((uint32_t)(0x10bb7d28u));
  /* 10bb1800 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1802u);
  /* 10bb1802 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1804 call dword ptr [0x10bb60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60d0))), 0x10bb180au);
  /* 10bb180a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb180d:;
  /* 10bb180d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb180f call dword ptr [0x10bb60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60c8))), 0x10bb1815u);
  /* 10bb1815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1818 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb181b jne 0x10bb189b */
  if (!C.zf) goto L_10bb189b;
  /* 10bb181d push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10bb1822 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb1824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1826 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1828u);
  /* 10bb1828 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bb182d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb182f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1831 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1833u);
  /* 10bb1833 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bb1838 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb183a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb183c call esi */
  call_ind((uint32_t)(ESI), 0x10bb183eu);
  /* 10bb183e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10bb1843 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1845 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1847 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1849u);
  /* 10bb1849 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb184b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb184d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb184f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1851u);
  /* 10bb1851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1853 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1857 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1859u);
  /* 10bb1859 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb185c push 0x10bb76bc */
  push32((uint32_t)(0x10bb76bcu));
  /* 10bb1861 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1866 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1868u);
  /* 10bb1868 push 0x10bb76a4 */
  push32((uint32_t)(0x10bb76a4u));
  /* 10bb186d push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1872 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1874u);
  /* 10bb1874 push 0x10bb762c */
  push32((uint32_t)(0x10bb762cu));
  /* 10bb1879 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb187e call edi */
  call_ind((uint32_t)(EDI), 0x10bb1880u);
  /* 10bb1880 push 0x10bb75a0 */
  push32((uint32_t)(0x10bb75a0u));
  /* 10bb1885 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb188a call edi */
  call_ind((uint32_t)(EDI), 0x10bb188cu);
  /* 10bb188c push 0x10bb758c */
  push32((uint32_t)(0x10bb758cu));
  /* 10bb1891 push 0x10bb7458 */
  push32((uint32_t)(0x10bb7458u));
  /* 10bb1896 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1898u);
  /* 10bb1898 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb189b:;
  /* 10bb189b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb189d call dword ptr [0x10bb60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60c8))), 0x10bb18a3u);
  /* 10bb18a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb18a6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb18a9 jne 0x10bb18e9 */
  if (!C.zf) goto L_10bb18e9;
  /* 10bb18ab push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10bb18b0 push eax */
  push32((uint32_t)(EAX));
  /* 10bb18b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18b3 call esi */
  call_ind((uint32_t)(ESI), 0x10bb18b5u);
  /* 10bb18b5 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10bb18ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb18bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18be call esi */
  call_ind((uint32_t)(ESI), 0x10bb18c0u);
  /* 10bb18c0 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10bb18c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb18c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18c9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb18cbu);
  /* 10bb18cb push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10bb18d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb18d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18d4 call esi */
  call_ind((uint32_t)(ESI), 0x10bb18d6u);
  /* 10bb18d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18da push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18dc call esi */
  call_ind((uint32_t)(ESI), 0x10bb18deu);
  /* 10bb18de push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb18e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb18e4 call esi */
  call_ind((uint32_t)(ESI), 0x10bb18e6u);
  /* 10bb18e6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb18e9:;
  /* 10bb18e9 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb18ee push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb18f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb18f2 call esi */
  call_ind((uint32_t)(ESI), 0x10bb18f4u);
  /* 10bb18f4 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb18f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb18fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb18fd call esi */
  call_ind((uint32_t)(ESI), 0x10bb18ffu);
  /* 10bb18ff push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb1904 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1906 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1908 call esi */
  call_ind((uint32_t)(ESI), 0x10bb190au);
  /* 10bb190a push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb190f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1911 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1913 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1915u);
  /* 10bb1915 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb191a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb191c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb191e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1920u);
  /* 10bb1920 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10bb1925 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1927 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1929 call esi */
  call_ind((uint32_t)(ESI), 0x10bb192bu);
  /* 10bb192b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb192e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb1933 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb1935 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1937 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1939u);
  /* 10bb1939 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb193e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1940 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1942 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1944u);
  /* 10bb1944 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb1949 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb194b push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb194d call esi */
  call_ind((uint32_t)(ESI), 0x10bb194fu);
  /* 10bb194f push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb1954 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1956 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1958 call esi */
  call_ind((uint32_t)(ESI), 0x10bb195au);
  /* 10bb195a push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb195f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1961 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1963 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1965u);
  /* 10bb1965 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb196a push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb196c push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb196e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1970u);
  /* 10bb1970 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1973 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb1978 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb197a push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb197c call esi */
  call_ind((uint32_t)(ESI), 0x10bb197eu);
  /* 10bb197e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb1983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1985 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1987 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1989u);
  /* 10bb1989 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb198e push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1990 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1992 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1994u);
  /* 10bb1994 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bb1999 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb199b push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb199d call esi */
  call_ind((uint32_t)(ESI), 0x10bb199fu);
  /* 10bb199f push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb19a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb19a8 call esi */
  call_ind((uint32_t)(ESI), 0x10bb19aau);
  /* 10bb19aa push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19af push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb19b1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb19b3 call esi */
  call_ind((uint32_t)(ESI), 0x10bb19b5u);
  /* 10bb19b5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb19b8 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19bd push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb19bf push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb19c1 call esi */
  call_ind((uint32_t)(ESI), 0x10bb19c3u);
  /* 10bb19c3 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb19ca push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb19cc call esi */
  call_ind((uint32_t)(ESI), 0x10bb19ceu);
  /* 10bb19ce push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb19d5 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb19d7 call esi */
  call_ind((uint32_t)(ESI), 0x10bb19d9u);
  /* 10bb19d9 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19de push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb19e0 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb19e2 call esi */
  call_ind((uint32_t)(ESI), 0x10bb19e4u);
  /* 10bb19e4 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb19eb push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb19ed call esi */
  call_ind((uint32_t)(ESI), 0x10bb19efu);
  /* 10bb19ef push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10bb19f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb19f6 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb19f8 call esi */
  call_ind((uint32_t)(ESI), 0x10bb19fau);
  /* 10bb19fa mov esi, dword ptr [0x10bb60d4] */
  ESI = (r32((uint32_t)(0x10bb60d4)));
  /* 10bb1a00 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1a03 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1a07 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1a09u);
  /* 10bb1a09 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1a0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1a0d call esi */
  call_ind((uint32_t)(ESI), 0x10bb1a0fu);
  /* 10bb1a0f mov esi, dword ptr [0x10bb60cc] */
  ESI = (r32((uint32_t)(0x10bb60cc)));
  /* 10bb1a15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1a17 push 0x10bb7d00 */
  push32((uint32_t)(0x10bb7d00u));
  /* 10bb1a1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1a1e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1a20u);
  /* 10bb1a20 push 0x10bb7534 */
  push32((uint32_t)(0x10bb7534u));
  /* 10bb1a25 push 0x10bb744c */
  push32((uint32_t)(0x10bb744cu));
  /* 10bb1a2a call edi */
  call_ind((uint32_t)(EDI), 0x10bb1a2cu);
  /* 10bb1a2c push 0x10bb752c */
  push32((uint32_t)(0x10bb752cu));
  /* 10bb1a31 push 0x10bb744c */
  push32((uint32_t)(0x10bb744cu));
  /* 10bb1a36 call edi */
  call_ind((uint32_t)(EDI), 0x10bb1a38u);
  /* 10bb1a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb1a3a push 0x10bb7b40 */
  push32((uint32_t)(0x10bb7b40u));
  /* 10bb1a3f mov dword ptr [0x10bb7a44], eax */
  w32((uint32_t)(0x10bb7a44), (EAX));
  /* 10bb1a44 mov dword ptr [0x10bb7a40], eax */
  w32((uint32_t)(0x10bb7a40), (EAX));
  /* 10bb1a49 mov dword ptr [0x10bb7a48], eax */
  w32((uint32_t)(0x10bb7a48), (EAX));
  /* 10bb1a4e mov dword ptr [0x10bb7a4c], eax */
  w32((uint32_t)(0x10bb7a4c), (EAX));
  /* 10bb1a53 mov dword ptr [0x10bb7a50], eax */
  w32((uint32_t)(0x10bb7a50), (EAX));
  /* 10bb1a58 mov dword ptr [0x10bb7a54], eax */
  w32((uint32_t)(0x10bb7a54), (EAX));
  /* 10bb1a5d call dword ptr [0x10bb60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60dc))), 0x10bb1a63u);
  /* 10bb1a63 push 0x10bb7b38 */
  push32((uint32_t)(0x10bb7b38u));
  /* 10bb1a68 call dword ptr [0x10bb60e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e0))), 0x10bb1a6eu);
  /* 10bb1a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1a70 push 0x10bb7ca8 */
  push32((uint32_t)(0x10bb7ca8u));
  /* 10bb1a75 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1a77u);
  /* 10bb1a77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1a79 call dword ptr [0x10bb60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60d8))), 0x10bb1a7fu);
  /* 10bb1a7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1a82 push 0x10bb7524 */
  push32((uint32_t)(0x10bb7524u));
  /* 10bb1a87 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1a8du);
  /* 10bb1a8d push 0x10bb751c */
  push32((uint32_t)(0x10bb751cu));
  /* 10bb1a92 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1a98u);
  /* 10bb1a98 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb1a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1a9c push 0x10bb7d98 */
  push32((uint32_t)(0x10bb7d98u));
  /* 10bb1aa1 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb1aa3u);
  /* 10bb1aa3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1aa5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb1aa7 push 0x10bb7b68 */
  push32((uint32_t)(0x10bb7b68u));
  /* 10bb1aac call ebx */
  call_ind((uint32_t)(EBX), 0x10bb1aaeu);
  /* 10bb1aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ab0 push 0x10bb7d60 */
  push32((uint32_t)(0x10bb7d60u));
  /* 10bb1ab5 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb1ab7 push 0x10bb7d50 */
  push32((uint32_t)(0x10bb7d50u));
  /* 10bb1abc push 0x10bb7ae0 */
  push32((uint32_t)(0x10bb7ae0u));
  /* 10bb1ac1 push 0x10bb7d88 */
  push32((uint32_t)(0x10bb7d88u));
  /* 10bb1ac6 call dword ptr [0x10bb60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60ec))), 0x10bb1accu);
  /* 10bb1acc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ace push 0x10bb7c48 */
  push32((uint32_t)(0x10bb7c48u));
  /* 10bb1ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ad5 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1ad7u);
  /* 10bb1ad7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1ada push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1adc push 0x10bb7c50 */
  push32((uint32_t)(0x10bb7c50u));
  /* 10bb1ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ae3 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1ae5u);
  /* 10bb1ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ae7 push 0x10bb7c58 */
  push32((uint32_t)(0x10bb7c58u));
  /* 10bb1aec push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1aee call esi */
  call_ind((uint32_t)(ESI), 0x10bb1af0u);
  /* 10bb1af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1af2 push 0x10bb7c68 */
  push32((uint32_t)(0x10bb7c68u));
  /* 10bb1af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1af9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1afbu);
  /* 10bb1afb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1afd push 0x10bb7c70 */
  push32((uint32_t)(0x10bb7c70u));
  /* 10bb1b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b04 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b06u);
  /* 10bb1b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b08 push 0x10bb7c78 */
  push32((uint32_t)(0x10bb7c78u));
  /* 10bb1b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b0f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b11u);
  /* 10bb1b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b13 push 0x10bb7c80 */
  push32((uint32_t)(0x10bb7c80u));
  /* 10bb1b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b1a call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b1cu);
  /* 10bb1b1c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b21 push 0x10bb7c88 */
  push32((uint32_t)(0x10bb7c88u));
  /* 10bb1b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b28 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b2au);
  /* 10bb1b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b2c push 0x10bb7c90 */
  push32((uint32_t)(0x10bb7c90u));
  /* 10bb1b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b33 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b35u);
  /* 10bb1b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b37 push 0x10bb7cb0 */
  push32((uint32_t)(0x10bb7cb0u));
  /* 10bb1b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b3e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b40u);
  /* 10bb1b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b42 push 0x10bb7cb8 */
  push32((uint32_t)(0x10bb7cb8u));
  /* 10bb1b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b49 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b4bu);
  /* 10bb1b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b4d push 0x10bb7cc0 */
  push32((uint32_t)(0x10bb7cc0u));
  /* 10bb1b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b54 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b56u);
  /* 10bb1b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b58 push 0x10bb7cc8 */
  push32((uint32_t)(0x10bb7cc8u));
  /* 10bb1b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b5f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b61u);
  /* 10bb1b61 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b66 push 0x10bb7cd0 */
  push32((uint32_t)(0x10bb7cd0u));
  /* 10bb1b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b6d call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b6fu);
  /* 10bb1b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b71 push 0x10bb7cd8 */
  push32((uint32_t)(0x10bb7cd8u));
  /* 10bb1b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b78 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b7au);
  /* 10bb1b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b7c push 0x10bb7ce0 */
  push32((uint32_t)(0x10bb7ce0u));
  /* 10bb1b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b83 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b85u);
  /* 10bb1b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b87 push 0x10bb7ce8 */
  push32((uint32_t)(0x10bb7ce8u));
  /* 10bb1b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b8e call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b90u);
  /* 10bb1b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b92 push 0x10bb7cf0 */
  push32((uint32_t)(0x10bb7cf0u));
  /* 10bb1b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1b99 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1b9bu);
  /* 10bb1b9b mov esi, dword ptr [0x10bb60e4] */
  ESI = (r32((uint32_t)(0x10bb60e4)));
  /* 10bb1ba1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bb1ba3 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10bb1ba5 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1ba7u);
  /* 10bb1ba7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1baa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bb1bac push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bb1bae call esi */
  call_ind((uint32_t)(ESI), 0x10bb1bb0u);
  /* 10bb1bb0 mov esi, dword ptr [0x10bb60b8] */
  ESI = (r32((uint32_t)(0x10bb60b8)));
  /* 10bb1bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1bb9:;
  /* 10bb1bb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1bbb call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1bc1u);
  /* 10bb1bc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1bc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1bc6 je 0x10bb1c4e */
  if (C.zf) goto L_10bb1c4e;
  /* 10bb1bcc push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1bce push 0x10bb7ae8 */
  push32((uint32_t)(0x10bb7ae8u));
  /* 10bb1bd3 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1bd9u);
  /* 10bb1bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1bdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1bde jne 0x10bb1c4e */
  if (!C.zf) goto L_10bb1c4e;
  /* 10bb1be0 push eax */
  push32((uint32_t)(EAX));
  /* 10bb1be1 push 0x10bb7b18 */
  push32((uint32_t)(0x10bb7b18u));
  /* 10bb1be6 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1becu);
  /* 10bb1bec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1bf1 jle 0x10bb1c4e */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1c4e;
  /* 10bb1bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1bf5 push 0x10bb7b88 */
  push32((uint32_t)(0x10bb7b88u));
  /* 10bb1bfa call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb1c00u);
  /* 10bb1c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1c05 jle 0x10bb1c4e */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1c4e;
  /* 10bb1c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1c0b call esi */
  call_ind((uint32_t)(ESI), 0x10bb1c0du);
  /* 10bb1c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c0f push 0x10bb7b18 */
  push32((uint32_t)(0x10bb7b18u));
  /* 10bb1c14 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1c16u);
  /* 10bb1c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1c1a call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb1c20u);
  /* 10bb1c20 push 0x10bb7514 */
  push32((uint32_t)(0x10bb7514u));
  /* 10bb1c25 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1c2bu);
  /* 10bb1c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c2d push 0x10bb7a08 */
  push32((uint32_t)(0x10bb7a08u));
  /* 10bb1c32 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1c34u);
  /* 10bb1c34 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1c36 call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb1c3cu);
  /* 10bb1c3c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10bb1c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c45 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb1c4bu);
  /* 10bb1c4b add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1c4e:;
  /* 10bb1c4e push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb1c50 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1c56u);
  /* 10bb1c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1c59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1c5b je 0x10bb1ce3 */
  if (C.zf) goto L_10bb1ce3;
  /* 10bb1c61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1c63 push 0x10bb7af0 */
  push32((uint32_t)(0x10bb7af0u));
  /* 10bb1c68 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1c6eu);
  /* 10bb1c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1c73 jne 0x10bb1ce3 */
  if (!C.zf) goto L_10bb1ce3;
  /* 10bb1c75 push eax */
  push32((uint32_t)(EAX));
  /* 10bb1c76 push 0x10bb7b20 */
  push32((uint32_t)(0x10bb7b20u));
  /* 10bb1c7b call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1c81u);
  /* 10bb1c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1c86 jle 0x10bb1ce3 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1ce3;
  /* 10bb1c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c8a push 0x10bb7b90 */
  push32((uint32_t)(0x10bb7b90u));
  /* 10bb1c8f call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb1c95u);
  /* 10bb1c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1c9a jle 0x10bb1ce3 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1ce3;
  /* 10bb1c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1c9e push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb1ca0 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1ca2u);
  /* 10bb1ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ca4 push 0x10bb7b20 */
  push32((uint32_t)(0x10bb7b20u));
  /* 10bb1ca9 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1cabu);
  /* 10bb1cab push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1cad push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1caf call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb1cb5u);
  /* 10bb1cb5 push 0x10bb750c */
  push32((uint32_t)(0x10bb750cu));
  /* 10bb1cba call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1cc0u);
  /* 10bb1cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1cc2 push 0x10bb7a18 */
  push32((uint32_t)(0x10bb7a18u));
  /* 10bb1cc7 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1cc9u);
  /* 10bb1cc9 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10bb1cce push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1cd2 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb1cd8u);
  /* 10bb1cd8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1cda call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb1ce0u);
  /* 10bb1ce0 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1ce3:;
  /* 10bb1ce3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1ce5 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1cebu);
  /* 10bb1ceb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1cee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1cf0 je 0x10bb1d78 */
  if (C.zf) goto L_10bb1d78;
  /* 10bb1cf6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1cf8 push 0x10bb7af8 */
  push32((uint32_t)(0x10bb7af8u));
  /* 10bb1cfd call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1d03u);
  /* 10bb1d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1d06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1d08 jne 0x10bb1d78 */
  if (!C.zf) goto L_10bb1d78;
  /* 10bb1d0a push eax */
  push32((uint32_t)(EAX));
  /* 10bb1d0b push 0x10bb7b28 */
  push32((uint32_t)(0x10bb7b28u));
  /* 10bb1d10 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1d16u);
  /* 10bb1d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1d1b jle 0x10bb1d78 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1d78;
  /* 10bb1d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1d1f push 0x10bb7ba8 */
  push32((uint32_t)(0x10bb7ba8u));
  /* 10bb1d24 call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb1d2au);
  /* 10bb1d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1d2f jle 0x10bb1d78 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1d78;
  /* 10bb1d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1d33 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1d35 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1d37u);
  /* 10bb1d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1d39 push 0x10bb7b28 */
  push32((uint32_t)(0x10bb7b28u));
  /* 10bb1d3e call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1d40u);
  /* 10bb1d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1d42 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1d44 call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb1d4au);
  /* 10bb1d4a push 0x10bb750c */
  push32((uint32_t)(0x10bb750cu));
  /* 10bb1d4f call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1d55u);
  /* 10bb1d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1d57 push 0x10bb7a10 */
  push32((uint32_t)(0x10bb7a10u));
  /* 10bb1d5c call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1d5eu);
  /* 10bb1d5e push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10bb1d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1d67 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb1d6du);
  /* 10bb1d6d push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1d6f call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb1d75u);
  /* 10bb1d75 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1d78:;
  /* 10bb1d78 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1d7a call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1d80u);
  /* 10bb1d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1d83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1d85 je 0x10bb1e0d */
  if (C.zf) goto L_10bb1e0d;
  /* 10bb1d8b push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1d8d push 0x10bb7b00 */
  push32((uint32_t)(0x10bb7b00u));
  /* 10bb1d92 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1d98u);
  /* 10bb1d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1d9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1d9d jne 0x10bb1e0d */
  if (!C.zf) goto L_10bb1e0d;
  /* 10bb1d9f push eax */
  push32((uint32_t)(EAX));
  /* 10bb1da0 push 0x10bb7b30 */
  push32((uint32_t)(0x10bb7b30u));
  /* 10bb1da5 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1dabu);
  /* 10bb1dab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1db0 jle 0x10bb1e0d */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1e0d;
  /* 10bb1db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1db4 push 0x10bb7bb0 */
  push32((uint32_t)(0x10bb7bb0u));
  /* 10bb1db9 call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb1dbfu);
  /* 10bb1dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1dc4 jle 0x10bb1e0d */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1e0d;
  /* 10bb1dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1dc8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb1dca call esi */
  call_ind((uint32_t)(ESI), 0x10bb1dccu);
  /* 10bb1dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1dce push 0x10bb7b30 */
  push32((uint32_t)(0x10bb7b30u));
  /* 10bb1dd3 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1dd5u);
  /* 10bb1dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1dd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1dd9 call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb1ddfu);
  /* 10bb1ddf push 0x10bb750c */
  push32((uint32_t)(0x10bb750cu));
  /* 10bb1de4 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1deau);
  /* 10bb1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1dec push 0x10bb7a28 */
  push32((uint32_t)(0x10bb7a28u));
  /* 10bb1df1 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1df3u);
  /* 10bb1df3 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10bb1df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1dfc call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb1e02u);
  /* 10bb1e02 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1e04 call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb1e0au);
  /* 10bb1e0a add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1e0d:;
  /* 10bb1e0d push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb1e0f call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1e15u);
  /* 10bb1e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1e18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1e1a je 0x10bb1ea2 */
  if (C.zf) goto L_10bb1ea2;
  /* 10bb1e20 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1e22 push 0x10bb7b08 */
  push32((uint32_t)(0x10bb7b08u));
  /* 10bb1e27 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1e2du);
  /* 10bb1e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1e32 jne 0x10bb1ea2 */
  if (!C.zf) goto L_10bb1ea2;
  /* 10bb1e34 push eax */
  push32((uint32_t)(EAX));
  /* 10bb1e35 push 0x10bb7b38 */
  push32((uint32_t)(0x10bb7b38u));
  /* 10bb1e3a call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1e40u);
  /* 10bb1e40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1e45 jle 0x10bb1ea2 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1ea2;
  /* 10bb1e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1e49 push 0x10bb7b98 */
  push32((uint32_t)(0x10bb7b98u));
  /* 10bb1e4e call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb1e54u);
  /* 10bb1e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1e59 jle 0x10bb1ea2 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1ea2;
  /* 10bb1e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1e5d push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb1e5f call esi */
  call_ind((uint32_t)(ESI), 0x10bb1e61u);
  /* 10bb1e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1e63 push 0x10bb7b38 */
  push32((uint32_t)(0x10bb7b38u));
  /* 10bb1e68 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1e6au);
  /* 10bb1e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1e6c push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1e6e call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb1e74u);
  /* 10bb1e74 push 0x10bb7514 */
  push32((uint32_t)(0x10bb7514u));
  /* 10bb1e79 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1e7fu);
  /* 10bb1e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1e81 push 0x10bb7a20 */
  push32((uint32_t)(0x10bb7a20u));
  /* 10bb1e86 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1e88u);
  /* 10bb1e88 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10bb1e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1e91 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb1e97u);
  /* 10bb1e97 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1e99 call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb1e9fu);
  /* 10bb1e9f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1ea2:;
  /* 10bb1ea2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10bb1ea4 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1eaau);
  /* 10bb1eaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1ead test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1eaf je 0x10bb1f25 */
  if (C.zf) goto L_10bb1f25;
  /* 10bb1eb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1eb3 push 0x10bb7b10 */
  push32((uint32_t)(0x10bb7b10u));
  /* 10bb1eb8 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1ebeu);
  /* 10bb1ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1ec3 jne 0x10bb1f25 */
  if (!C.zf) goto L_10bb1f25;
  /* 10bb1ec5 push eax */
  push32((uint32_t)(EAX));
  /* 10bb1ec6 push 0x10bb7b40 */
  push32((uint32_t)(0x10bb7b40u));
  /* 10bb1ecb call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb1ed1u);
  /* 10bb1ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1ed6 jle 0x10bb1f25 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1f25;
  /* 10bb1ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1eda push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10bb1edc call esi */
  call_ind((uint32_t)(ESI), 0x10bb1edeu);
  /* 10bb1ede push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ee0 push 0x10bb7b40 */
  push32((uint32_t)(0x10bb7b40u));
  /* 10bb1ee5 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1ee7u);
  /* 10bb1ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ee9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb1eeb call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb1ef1u);
  /* 10bb1ef1 push 0x10bb7504 */
  push32((uint32_t)(0x10bb7504u));
  /* 10bb1ef6 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1efcu);
  /* 10bb1efc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1efe call dword ptr [0x10bb60c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60c8))), 0x10bb1f04u);
  /* 10bb1f04 mov ecx, 0xa */
  ECX = (0xau);
  /* 10bb1f09 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb1f0b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10bb1f0e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb1f11 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb1f14 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10bb1f17 push eax */
  push32((uint32_t)(EAX));
  /* 10bb1f18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f1c call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb1f22u);
  /* 10bb1f22 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1f25:;
  /* 10bb1f25 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb1f27 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1f2du);
  /* 10bb1f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1f30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1f32 je 0x10bb1fc7 */
  if (C.zf) goto L_10bb1fc7;
  /* 10bb1f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f3a push 0x10bb7a78 */
  push32((uint32_t)(0x10bb7a78u));
  /* 10bb1f3f call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb1f45u);
  /* 10bb1f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb1f4a jle 0x10bb1fc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb1fc7;
  /* 10bb1f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f4e push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb1f50 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1f52u);
  /* 10bb1f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f54 push 0x10bb7d78 */
  push32((uint32_t)(0x10bb7d78u));
  /* 10bb1f59 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1f5bu);
  /* 10bb1f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f5f push 0x10bb7ac0 */
  push32((uint32_t)(0x10bb7ac0u));
  /* 10bb1f64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1f66 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb1f6cu);
  /* 10bb1f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f6e push 0x10bb7d80 */
  push32((uint32_t)(0x10bb7d80u));
  /* 10bb1f73 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1f75u);
  /* 10bb1f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f77 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bb1f7c push 0x10bb7ab0 */
  push32((uint32_t)(0x10bb7ab0u));
  /* 10bb1f81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1f83 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb1f89u);
  /* 10bb1f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f8b push 0x10bb7d38 */
  push32((uint32_t)(0x10bb7d38u));
  /* 10bb1f90 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1f92u);
  /* 10bb1f92 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1f97 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb1f99 push 0x10bb7a60 */
  push32((uint32_t)(0x10bb7a60u));
  /* 10bb1f9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1fa0 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb1fa6u);
  /* 10bb1fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1fa8 push 0x10bb7d18 */
  push32((uint32_t)(0x10bb7d18u));
  /* 10bb1fad call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1fafu);
  /* 10bb1faf push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb1fb1 call dword ptr [0x10bb60d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60d8))), 0x10bb1fb7u);
  /* 10bb1fb7 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10bb1fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1fbe call dword ptr [0x10bb60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e4))), 0x10bb1fc4u);
  /* 10bb1fc4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb1fc7:;
  /* 10bb1fc7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb1fc9 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb1fcfu);
  /* 10bb1fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1fd2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1fd4 je 0x10bb2013 */
  if (C.zf) goto L_10bb2013;
  /* 10bb1fd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb1fd8 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb1fdeu);
  /* 10bb1fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb1fe1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb1fe3 je 0x10bb2013 */
  if (C.zf) goto L_10bb2013;
  /* 10bb1fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1fe7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb1fe9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb1febu);
  /* 10bb1feb push 0x10bb74fc */
  push32((uint32_t)(0x10bb74fcu));
  /* 10bb1ff0 call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb1ff6u);
  /* 10bb1ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb1ff8 push 0x10bb7d38 */
  push32((uint32_t)(0x10bb7d38u));
  /* 10bb1ffd call ebp */
  call_ind((uint32_t)(EBP), 0x10bb1fffu);
  /* 10bb1fff push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2001 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb2003 push 0x10bb7b68 */
  push32((uint32_t)(0x10bb7b68u));
  /* 10bb2008 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb200a call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb2010u);
  /* 10bb2010 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2013:;
  /* 10bb2013 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb2015 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb201bu);
  /* 10bb201b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb201e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2020 je 0x10bb2082 */
  if (C.zf) goto L_10bb2082;
  /* 10bb2022 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2024 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb202au);
  /* 10bb202a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb202d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb202f jne 0x10bb2082 */
  if (!C.zf) goto L_10bb2082;
  /* 10bb2031 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2033 push 0x10bb7b68 */
  push32((uint32_t)(0x10bb7b68u));
  /* 10bb2038 call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb203eu);
  /* 10bb203e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2043 jle 0x10bb2082 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2082;
  /* 10bb2045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2047 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb2049 call esi */
  call_ind((uint32_t)(ESI), 0x10bb204bu);
  /* 10bb204b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb204d push 0x10bb7d78 */
  push32((uint32_t)(0x10bb7d78u));
  /* 10bb2052 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2054u);
  /* 10bb2054 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2056 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb2058 push 0x10bb7d10 */
  push32((uint32_t)(0x10bb7d10u));
  /* 10bb205d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb205f call dword ptr [0x10bb6110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6110))), 0x10bb2065u);
  /* 10bb2065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2067 push 0x10bb7d80 */
  push32((uint32_t)(0x10bb7d80u));
  /* 10bb206c call ebp */
  call_ind((uint32_t)(EBP), 0x10bb206eu);
  /* 10bb206e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2070 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb2072 push 0x10bb7d20 */
  push32((uint32_t)(0x10bb7d20u));
  /* 10bb2077 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2079 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb207fu);
  /* 10bb207f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2082:;
  /* 10bb2082 mov esi, dword ptr [0x10bb60b0] */
  ESI = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb2088 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb208a call esi */
  call_ind((uint32_t)(ESI), 0x10bb208cu);
  /* 10bb208c mov ebp, dword ptr [0x10bb6108] */
  EBP = (r32((uint32_t)(0x10bb6108)));
  /* 10bb2092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2095 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2097 je 0x10bb242a */
  if (C.zf) goto L_10bb242a;
  /* 10bb209d push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb209f call esi */
  call_ind((uint32_t)(ESI), 0x10bb20a1u);
  /* 10bb20a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb20a4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb20a6 jne 0x10bb242a */
  if (!C.zf) goto L_10bb242a;
  /* 10bb20ac push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bb20ae call esi */
  call_ind((uint32_t)(ESI), 0x10bb20b0u);
  /* 10bb20b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb20b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb20b5 je 0x10bb242a */
  if (C.zf) goto L_10bb242a;
  /* 10bb20bb mov esi, dword ptr [0x10bb6118] */
  ESI = (r32((uint32_t)(0x10bb6118)));
  /* 10bb20c1 push 0x10bb7d30 */
  push32((uint32_t)(0x10bb7d30u));
  /* 10bb20c6 push 0x10bb7b68 */
  push32((uint32_t)(0x10bb7b68u));
  /* 10bb20cb call esi */
  call_ind((uint32_t)(ESI), 0x10bb20cdu);
  /* 10bb20cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb20d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb20d2 jg 0x10bb20eb */
  if ((!C.zf&&C.sf==C.of)) goto L_10bb20eb;
  /* 10bb20d4 push 0x10bb7d30 */
  push32((uint32_t)(0x10bb7d30u));
  /* 10bb20d9 push 0x10bb7a78 */
  push32((uint32_t)(0x10bb7a78u));
  /* 10bb20de call esi */
  call_ind((uint32_t)(ESI), 0x10bb20e0u);
  /* 10bb20e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb20e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb20e5 jle 0x10bb242a */
  if ((C.zf||C.sf!=C.of)) goto L_10bb242a;
L_10bb20eb:;
  /* 10bb20eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb20ed push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb20ef call dword ptr [0x10bb60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b8))), 0x10bb20f5u);
  /* 10bb20f5 push 0x10bb74d0 */
  push32((uint32_t)(0x10bb74d0u));
  /* 10bb20fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb20fc push 0x10bb74c8 */
  push32((uint32_t)(0x10bb74c8u));
  /* 10bb2101 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb2103 call dword ptr [0x10bb611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb611c))), 0x10bb2109u);
  /* 10bb2109 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb210c cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb210f ja 0x10bb242a */
  if ((!C.cf&&!C.zf)) goto L_10bb242a;
  /* 10bb2115 jmp dword ptr [eax*4 + 0x10bb3054] */
  switch (EAX) {
    case 0: goto L_10bb211c;
    case 1: goto L_10bb218a;
    case 2: goto L_10bb21fb;
    case 3: goto L_10bb2269;
    case 4: goto L_10bb22d7;
    case 5: goto L_10bb2384;
    case 6: goto L_10bb2c16;
    case 7: goto L_10bb27fe;
    case 8: goto L_10bb2a03;
    case 9: goto L_10bb2a89;
    case 10: goto L_10bb2b0c;
    case 11: goto L_10bb2b92;
    case 12: goto L_10bb2c16;
    default: x86_unimpl("switch@0x10bb2115 out of table"); return;
  }
L_10bb211c:;
  /* 10bb211c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb211e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2120 push edi */
  push32((uint32_t)(EDI));
  /* 10bb2121 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2123u);
  /* 10bb2123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2126 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb212b jge 0x10bb213c */
  if ((C.sf==C.of)) goto L_10bb213c;
  /* 10bb212d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb212f push edi */
  push32((uint32_t)(EDI));
  /* 10bb2130 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2132u);
  /* 10bb2132 mov ecx, 0xbb8 */
  ECX = (0xbb8u);
  /* 10bb2137 jmp 0x10bb22f2 */
  goto L_10bb22f2;
L_10bb213c:;
  /* 10bb213c push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 10bb2141 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2143 push edi */
  push32((uint32_t)(EDI));
  /* 10bb2144 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb214au);
  /* 10bb214a mov esi, dword ptr [0x10bb6114] */
  ESI = (r32((uint32_t)(0x10bb6114)));
  /* 10bb2150 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2153 mov dword ptr [0x10bb7a44], edi */
  w32((uint32_t)(0x10bb7a44), (EDI));
L_10bb2159:;
  /* 10bb2159 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb215b push 0x10bb7aa8 */
  push32((uint32_t)(0x10bb7aa8u));
  /* 10bb2160 push 0x10bb7d00 */
  push32((uint32_t)(0x10bb7d00u));
  /* 10bb2165 push 0x10bb7d90 */
  push32((uint32_t)(0x10bb7d90u));
  /* 10bb216a call esi */
  call_ind((uint32_t)(ESI), 0x10bb216cu);
  /* 10bb216c mov eax, dword ptr [0x10bb7a44] */
  EAX = (r32((uint32_t)(0x10bb7a44)));
  /* 10bb2171 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2174 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2175 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2178 mov dword ptr [0x10bb7a44], eax */
  w32((uint32_t)(0x10bb7a44), (EAX));
  /* 10bb217d jl 0x10bb2159 */
  if ((C.sf!=C.of)) goto L_10bb2159;
  /* 10bb217f mov dword ptr [0x10bb7a44], edi */
  w32((uint32_t)(0x10bb7a44), (EDI));
  /* 10bb2185 jmp 0x10bb241a */
  goto L_10bb241a;
L_10bb218a:;
  /* 10bb218a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb218c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb218e push edi */
  push32((uint32_t)(EDI));
  /* 10bb218f call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2191u);
  /* 10bb2191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2194 cmp eax, 0x5dc */
  { uint32_t _a=(EAX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2199 jge 0x10bb21ad */
  if ((C.sf==C.of)) goto L_10bb21ad;
  /* 10bb219b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb219d push edi */
  push32((uint32_t)(EDI));
  /* 10bb219e call ebp */
  call_ind((uint32_t)(EBP), 0x10bb21a0u);
  /* 10bb21a0 mov edx, 0x5dc */
  EDX = (0x5dcu);
  /* 10bb21a5 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb21a7 push edx */
  push32((uint32_t)(EDX));
  /* 10bb21a8 jmp 0x10bb22f5 */
  goto L_10bb22f5;
L_10bb21ad:;
  /* 10bb21ad push 0xfffffa24 */
  push32((uint32_t)(0xfffffa24u));
  /* 10bb21b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb21b4 push edi */
  push32((uint32_t)(EDI));
  /* 10bb21b5 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb21bbu);
  /* 10bb21bb mov esi, dword ptr [0x10bb6114] */
  ESI = (r32((uint32_t)(0x10bb6114)));
  /* 10bb21c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb21c4 mov dword ptr [0x10bb7a40], edi */
  w32((uint32_t)(0x10bb7a40), (EDI));
L_10bb21ca:;
  /* 10bb21ca push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb21cc push 0x10bb7aa0 */
  push32((uint32_t)(0x10bb7aa0u));
  /* 10bb21d1 push 0x10bb7d70 */
  push32((uint32_t)(0x10bb7d70u));
  /* 10bb21d6 push 0x10bb7d90 */
  push32((uint32_t)(0x10bb7d90u));
  /* 10bb21db call esi */
  call_ind((uint32_t)(ESI), 0x10bb21ddu);
  /* 10bb21dd mov eax, dword ptr [0x10bb7a40] */
  EAX = (r32((uint32_t)(0x10bb7a40)));
  /* 10bb21e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb21e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb21e6 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb21e9 mov dword ptr [0x10bb7a40], eax */
  w32((uint32_t)(0x10bb7a40), (EAX));
  /* 10bb21ee jl 0x10bb21ca */
  if ((C.sf!=C.of)) goto L_10bb21ca;
  /* 10bb21f0 mov dword ptr [0x10bb7a40], edi */
  w32((uint32_t)(0x10bb7a40), (EDI));
  /* 10bb21f6 jmp 0x10bb241a */
  goto L_10bb241a;
L_10bb21fb:;
  /* 10bb21fb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb21fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb21ff push edi */
  push32((uint32_t)(EDI));
  /* 10bb2200 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2202u);
  /* 10bb2202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2205 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb220a jge 0x10bb221b */
  if ((C.sf==C.of)) goto L_10bb221b;
  /* 10bb220c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb220e push edi */
  push32((uint32_t)(EDI));
  /* 10bb220f call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2211u);
  /* 10bb2211 mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 10bb2216 jmp 0x10bb22f2 */
  goto L_10bb22f2;
L_10bb221b:;
  /* 10bb221b push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10bb2220 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2222 push edi */
  push32((uint32_t)(EDI));
  /* 10bb2223 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2229u);
  /* 10bb2229 mov esi, dword ptr [0x10bb6114] */
  ESI = (r32((uint32_t)(0x10bb6114)));
  /* 10bb222f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2232 mov dword ptr [0x10bb7a48], edi */
  w32((uint32_t)(0x10bb7a48), (EDI));
L_10bb2238:;
  /* 10bb2238 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb223a push 0x10bb7ac8 */
  push32((uint32_t)(0x10bb7ac8u));
  /* 10bb223f push 0x10bb7c40 */
  push32((uint32_t)(0x10bb7c40u));
  /* 10bb2244 push 0x10bb7c20 */
  push32((uint32_t)(0x10bb7c20u));
  /* 10bb2249 call esi */
  call_ind((uint32_t)(ESI), 0x10bb224bu);
  /* 10bb224b mov eax, dword ptr [0x10bb7a48] */
  EAX = (r32((uint32_t)(0x10bb7a48)));
  /* 10bb2250 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2253 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2254 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2257 mov dword ptr [0x10bb7a48], eax */
  w32((uint32_t)(0x10bb7a48), (EAX));
  /* 10bb225c jl 0x10bb2238 */
  if ((C.sf!=C.of)) goto L_10bb2238;
  /* 10bb225e mov dword ptr [0x10bb7a48], edi */
  w32((uint32_t)(0x10bb7a48), (EDI));
  /* 10bb2264 jmp 0x10bb241a */
  goto L_10bb241a;
L_10bb2269:;
  /* 10bb2269 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb226b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb226d push edi */
  push32((uint32_t)(EDI));
  /* 10bb226e call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2270u);
  /* 10bb2270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2273 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2278 jge 0x10bb2289 */
  if ((C.sf==C.of)) goto L_10bb2289;
  /* 10bb227a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb227c push edi */
  push32((uint32_t)(EDI));
  /* 10bb227d call ebp */
  call_ind((uint32_t)(EBP), 0x10bb227fu);
  /* 10bb227f mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 10bb2284 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb2286 push edx */
  push32((uint32_t)(EDX));
  /* 10bb2287 jmp 0x10bb22f5 */
  goto L_10bb22f5;
L_10bb2289:;
  /* 10bb2289 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10bb228e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2290 push edi */
  push32((uint32_t)(EDI));
  /* 10bb2291 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2297u);
  /* 10bb2297 mov esi, dword ptr [0x10bb6114] */
  ESI = (r32((uint32_t)(0x10bb6114)));
  /* 10bb229d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb22a0 mov dword ptr [0x10bb7a4c], edi */
  w32((uint32_t)(0x10bb7a4c), (EDI));
L_10bb22a6:;
  /* 10bb22a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb22a8 push 0x10bb7ab8 */
  push32((uint32_t)(0x10bb7ab8u));
  /* 10bb22ad push 0x10bb7cf8 */
  push32((uint32_t)(0x10bb7cf8u));
  /* 10bb22b2 push 0x10bb7c20 */
  push32((uint32_t)(0x10bb7c20u));
  /* 10bb22b7 call esi */
  call_ind((uint32_t)(ESI), 0x10bb22b9u);
  /* 10bb22b9 mov eax, dword ptr [0x10bb7a4c] */
  EAX = (r32((uint32_t)(0x10bb7a4c)));
  /* 10bb22be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb22c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb22c2 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb22c5 mov dword ptr [0x10bb7a4c], eax */
  w32((uint32_t)(0x10bb7a4c), (EAX));
  /* 10bb22ca jl 0x10bb22a6 */
  if ((C.sf!=C.of)) goto L_10bb22a6;
  /* 10bb22cc mov dword ptr [0x10bb7a4c], edi */
  w32((uint32_t)(0x10bb7a4c), (EDI));
  /* 10bb22d2 jmp 0x10bb241a */
  goto L_10bb241a;
L_10bb22d7:;
  /* 10bb22d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb22d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb22db call ebp */
  call_ind((uint32_t)(EBP), 0x10bb22ddu);
  /* 10bb22dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb22e0 cmp eax, 0xdac */
  { uint32_t _a=(EAX),_b=(0xdacu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb22e5 jge 0x10bb2312 */
  if ((C.sf==C.of)) goto L_10bb2312;
  /* 10bb22e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb22e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb22eb call ebp */
  call_ind((uint32_t)(EBP), 0x10bb22edu);
  /* 10bb22ed mov ecx, 0xdac */
  ECX = (0xdacu);
L_10bb22f2:;
  /* 10bb22f2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb22f4 push ecx */
  push32((uint32_t)(ECX));
L_10bb22f5:;
  /* 10bb22f5 push 0x10bb74c0 */
  push32((uint32_t)(0x10bb74c0u));
  /* 10bb22fa call dword ptr [0x10bb6124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6124))), 0x10bb2300u);
  /* 10bb2300 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bb2302 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2304 call dword ptr [0x10bb60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e4))), 0x10bb230au);
  /* 10bb230a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb230d jmp 0x10bb242a */
  goto L_10bb242a;
L_10bb2312:;
  /* 10bb2312 push 0xfffff254 */
  push32((uint32_t)(0xfffff254u));
  /* 10bb2317 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2319 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb231b call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2321u);
  /* 10bb2321 mov esi, dword ptr [0x10bb60b8] */
  ESI = (r32((uint32_t)(0x10bb60b8)));
  /* 10bb2327 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb232a mov dword ptr [0x10bb7a50], 0 */
  w32((uint32_t)(0x10bb7a50), (0x0u));
L_10bb2334:;
  /* 10bb2334 push 0x10bb74b8 */
  push32((uint32_t)(0x10bb74b8u));
  /* 10bb2339 push 0x10bb744c */
  push32((uint32_t)(0x10bb744cu));
  /* 10bb233e call edi */
  call_ind((uint32_t)(EDI), 0x10bb2340u);
  /* 10bb2340 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10bb2345 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2347 call dword ptr [0x10bb60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e4))), 0x10bb234du);
  /* 10bb234d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb234f push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bb2351 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2353u);
  /* 10bb2353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2355 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10bb2357 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2359u);
  /* 10bb2359 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb235b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bb235d call esi */
  call_ind((uint32_t)(ESI), 0x10bb235fu);
  /* 10bb235f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10bb2364 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb2366 call dword ptr [0x10bb60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e4))), 0x10bb236cu);
  /* 10bb236c mov eax, dword ptr [0x10bb7a50] */
  EAX = (r32((uint32_t)(0x10bb7a50)));
  /* 10bb2371 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2374 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2375 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2378 mov dword ptr [0x10bb7a50], eax */
  w32((uint32_t)(0x10bb7a50), (EAX));
  /* 10bb237d jl 0x10bb2334 */
  if ((C.sf!=C.of)) goto L_10bb2334;
  /* 10bb237f jmp 0x10bb241a */
  goto L_10bb241a;
L_10bb2384:;
  /* 10bb2384 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2388 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb238au);
  /* 10bb238a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb238d cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2392 jge 0x10bb23c7 */
  if ((C.sf==C.of)) goto L_10bb23c7;
  /* 10bb2394 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2398 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb239au);
  /* 10bb239a mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 10bb239f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb23a1 push edx */
  push32((uint32_t)(EDX));
  /* 10bb23a2 push 0x10bb74c0 */
  push32((uint32_t)(0x10bb74c0u));
  /* 10bb23a7 call dword ptr [0x10bb6124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6124))), 0x10bb23adu);
  /* 10bb23ad push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb23af push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb23b1 push 0x10bb7bb8 */
  push32((uint32_t)(0x10bb7bb8u));
  /* 10bb23b6 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb23b8u);
  /* 10bb23b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bb23ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb23bc call dword ptr [0x10bb60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e4))), 0x10bb23c2u);
  /* 10bb23c2 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb23c5 jmp 0x10bb242a */
  goto L_10bb242a;
L_10bb23c7:;
  /* 10bb23c7 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10bb23cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb23ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb23d0 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb23d6u);
  /* 10bb23d6 mov esi, dword ptr [0x10bb6114] */
  ESI = (r32((uint32_t)(0x10bb6114)));
  /* 10bb23dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb23df mov dword ptr [0x10bb7a54], 0 */
  w32((uint32_t)(0x10bb7a54), (0x0u));
L_10bb23e9:;
  /* 10bb23e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb23eb push 0x10bb7a90 */
  push32((uint32_t)(0x10bb7a90u));
  /* 10bb23f0 push 0x10bb7a58 */
  push32((uint32_t)(0x10bb7a58u));
  /* 10bb23f5 push 0x10bb7be8 */
  push32((uint32_t)(0x10bb7be8u));
  /* 10bb23fa call esi */
  call_ind((uint32_t)(ESI), 0x10bb23fcu);
  /* 10bb23fc push 0xe */
  push32((uint32_t)(0xeu));
  /* 10bb23fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb2400 push 0x10bb7bb8 */
  push32((uint32_t)(0x10bb7bb8u));
  /* 10bb2405 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2407u);
  /* 10bb2407 mov eax, dword ptr [0x10bb7a54] */
  EAX = (r32((uint32_t)(0x10bb7a54)));
  /* 10bb240c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb240f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2410 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2413 mov dword ptr [0x10bb7a54], eax */
  w32((uint32_t)(0x10bb7a54), (EAX));
  /* 10bb2418 jl 0x10bb23e9 */
  if ((C.sf!=C.of)) goto L_10bb23e9;
L_10bb241a:;
  /* 10bb241a push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10bb241f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2421 call dword ptr [0x10bb60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e4))), 0x10bb2427u);
  /* 10bb2427 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb242a:;
  /* 10bb242a mov edi, dword ptr [0x10bb60b0] */
  EDI = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb2430 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bb2432 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2434u);
  /* 10bb2434 mov esi, dword ptr [0x10bb6128] */
  ESI = (r32((uint32_t)(0x10bb6128)));
  /* 10bb243a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb243d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb243f je 0x10bb24a8 */
  if (C.zf) goto L_10bb24a8;
  /* 10bb2441 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb2443 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2445u);
  /* 10bb2445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2448 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb244a jne 0x10bb24a8 */
  if (!C.zf) goto L_10bb24a8;
  /* 10bb244c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb244e push 0x10bb7aa8 */
  push32((uint32_t)(0x10bb7aa8u));
  /* 10bb2453 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb2459u);
  /* 10bb2459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb245c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb245e jle 0x10bb24a8 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb24a8;
  /* 10bb2460 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2462 push 0x10bb7aa8 */
  push32((uint32_t)(0x10bb7aa8u));
  /* 10bb2467 call dword ptr [0x10bb60b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b4))), 0x10bb246du);
  /* 10bb246d mov edi, dword ptr [0x10bb60fc] */
  EDI = (r32((uint32_t)(0x10bb60fc)));
  /* 10bb2473 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2475 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb2477 push 0x10bb7a68 */
  push32((uint32_t)(0x10bb7a68u));
  /* 10bb247c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb247e call edi */
  call_ind((uint32_t)(EDI), 0x10bb2480u);
  /* 10bb2480 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2482 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb2484 push 0x10bb7a70 */
  push32((uint32_t)(0x10bb7a70u));
  /* 10bb2489 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb248b call edi */
  call_ind((uint32_t)(EDI), 0x10bb248du);
  /* 10bb248d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb248f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2491 call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb2497u);
  /* 10bb2497 push 0x10bb7b78 */
  push32((uint32_t)(0x10bb7b78u));
  /* 10bb249c push 0x10bb7aa8 */
  push32((uint32_t)(0x10bb7aa8u));
  /* 10bb24a1 call esi */
  call_ind((uint32_t)(ESI), 0x10bb24a3u);
  /* 10bb24a3 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb24a6 jmp 0x10bb24ae */
  goto L_10bb24ae;
L_10bb24a8:;
  /* 10bb24a8 mov edi, dword ptr [0x10bb60fc] */
  EDI = (r32((uint32_t)(0x10bb60fc)));
L_10bb24ae:;
  /* 10bb24ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bb24b0 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb24b6u);
  /* 10bb24b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb24b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb24bb je 0x10bb2520 */
  if (C.zf) goto L_10bb2520;
  /* 10bb24bd push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb24bf call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb24c5u);
  /* 10bb24c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb24c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb24ca jne 0x10bb2520 */
  if (!C.zf) goto L_10bb2520;
  /* 10bb24cc push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb24ce push 0x10bb7aa0 */
  push32((uint32_t)(0x10bb7aa0u));
  /* 10bb24d3 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb24d9u);
  /* 10bb24d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb24dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb24de jle 0x10bb2520 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2520;
  /* 10bb24e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb24e2 push 0x10bb7aa0 */
  push32((uint32_t)(0x10bb7aa0u));
  /* 10bb24e7 call dword ptr [0x10bb60b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b4))), 0x10bb24edu);
  /* 10bb24ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb24ef push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb24f1 push 0x10bb7a68 */
  push32((uint32_t)(0x10bb7a68u));
  /* 10bb24f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb24f8 call edi */
  call_ind((uint32_t)(EDI), 0x10bb24fau);
  /* 10bb24fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb24fc push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb24fe push 0x10bb7a70 */
  push32((uint32_t)(0x10bb7a70u));
  /* 10bb2503 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2505 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2507u);
  /* 10bb2507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2509 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb250b call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb2511u);
  /* 10bb2511 push 0x10bb7b70 */
  push32((uint32_t)(0x10bb7b70u));
  /* 10bb2516 push 0x10bb7aa0 */
  push32((uint32_t)(0x10bb7aa0u));
  /* 10bb251b call esi */
  call_ind((uint32_t)(ESI), 0x10bb251du);
  /* 10bb251d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2520:;
  /* 10bb2520 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bb2522 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2528u);
  /* 10bb2528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb252b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb252d je 0x10bb2592 */
  if (C.zf) goto L_10bb2592;
  /* 10bb252f push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb2531 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2537u);
  /* 10bb2537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb253a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb253c jne 0x10bb2592 */
  if (!C.zf) goto L_10bb2592;
  /* 10bb253e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2540 push 0x10bb7ac8 */
  push32((uint32_t)(0x10bb7ac8u));
  /* 10bb2545 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb254bu);
  /* 10bb254b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb254e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2550 jle 0x10bb2592 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2592;
  /* 10bb2552 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2554 push 0x10bb7ac8 */
  push32((uint32_t)(0x10bb7ac8u));
  /* 10bb2559 call dword ptr [0x10bb60b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b4))), 0x10bb255fu);
  /* 10bb255f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2561 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb2563 push 0x10bb7c28 */
  push32((uint32_t)(0x10bb7c28u));
  /* 10bb2568 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb256a call edi */
  call_ind((uint32_t)(EDI), 0x10bb256cu);
  /* 10bb256c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb256e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb2570 push 0x10bb7c30 */
  push32((uint32_t)(0x10bb7c30u));
  /* 10bb2575 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2577 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2579u);
  /* 10bb2579 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb257b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb257d call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb2583u);
  /* 10bb2583 push 0x10bb7bc0 */
  push32((uint32_t)(0x10bb7bc0u));
  /* 10bb2588 push 0x10bb7ac8 */
  push32((uint32_t)(0x10bb7ac8u));
  /* 10bb258d call esi */
  call_ind((uint32_t)(ESI), 0x10bb258fu);
  /* 10bb258f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2592:;
  /* 10bb2592 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bb2594 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb259au);
  /* 10bb259a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb259d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb259f je 0x10bb2604 */
  if (C.zf) goto L_10bb2604;
  /* 10bb25a1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb25a3 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb25a9u);
  /* 10bb25a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb25ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb25ae jne 0x10bb2604 */
  if (!C.zf) goto L_10bb2604;
  /* 10bb25b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb25b2 push 0x10bb7ab8 */
  push32((uint32_t)(0x10bb7ab8u));
  /* 10bb25b7 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb25bdu);
  /* 10bb25bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb25c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb25c2 jle 0x10bb2604 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2604;
  /* 10bb25c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb25c6 push 0x10bb7ab8 */
  push32((uint32_t)(0x10bb7ab8u));
  /* 10bb25cb call dword ptr [0x10bb60b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b4))), 0x10bb25d1u);
  /* 10bb25d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb25d3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb25d5 push 0x10bb7c28 */
  push32((uint32_t)(0x10bb7c28u));
  /* 10bb25da push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb25dc call edi */
  call_ind((uint32_t)(EDI), 0x10bb25deu);
  /* 10bb25de push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb25e0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb25e2 push 0x10bb7c30 */
  push32((uint32_t)(0x10bb7c30u));
  /* 10bb25e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb25e9 call edi */
  call_ind((uint32_t)(EDI), 0x10bb25ebu);
  /* 10bb25eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb25ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb25ef call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb25f5u);
  /* 10bb25f5 push 0x10bb7b80 */
  push32((uint32_t)(0x10bb7b80u));
  /* 10bb25fa push 0x10bb7ab8 */
  push32((uint32_t)(0x10bb7ab8u));
  /* 10bb25ff call esi */
  call_ind((uint32_t)(ESI), 0x10bb2601u);
  /* 10bb2601 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2604:;
  /* 10bb2604 mov edi, dword ptr [0x10bb60b0] */
  EDI = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb260a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10bb260c call edi */
  call_ind((uint32_t)(EDI), 0x10bb260eu);
  /* 10bb260e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2611 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2613 je 0x10bb265a */
  if (C.zf) goto L_10bb265a;
  /* 10bb2615 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb2617 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2619u);
  /* 10bb2619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb261c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb261e jne 0x10bb265a */
  if (!C.zf) goto L_10bb265a;
  /* 10bb2620 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2622 push 0x10bb7a90 */
  push32((uint32_t)(0x10bb7a90u));
  /* 10bb2627 call dword ptr [0x10bb60f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f4))), 0x10bb262du);
  /* 10bb262d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2630 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2632 jle 0x10bb265a */
  if ((C.zf||C.sf!=C.of)) goto L_10bb265a;
  /* 10bb2634 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2636 push 0x10bb7a90 */
  push32((uint32_t)(0x10bb7a90u));
  /* 10bb263b call dword ptr [0x10bb60b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b4))), 0x10bb2641u);
  /* 10bb2641 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2643 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2645 call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb264bu);
  /* 10bb264b push 0x10bb7bc8 */
  push32((uint32_t)(0x10bb7bc8u));
  /* 10bb2650 push 0x10bb7a90 */
  push32((uint32_t)(0x10bb7a90u));
  /* 10bb2655 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2657u);
  /* 10bb2657 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb265a:;
  /* 10bb265a push 0xc */
  push32((uint32_t)(0xcu));
  /* 10bb265c call edi */
  call_ind((uint32_t)(EDI), 0x10bb265eu);
  /* 10bb265e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2661 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2663 je 0x10bb2697 */
  if (C.zf) goto L_10bb2697;
  /* 10bb2665 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2667 call dword ptr [0x10bb6120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6120))), 0x10bb266du);
  /* 10bb266d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2670 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2672 je 0x10bb2697 */
  if (C.zf) goto L_10bb2697;
  /* 10bb2674 push 0x10bb74b0 */
  push32((uint32_t)(0x10bb74b0u));
  /* 10bb2679 call dword ptr [0x10bb6130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6130))), 0x10bb267fu);
  /* 10bb267f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2682 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2684 je 0x10bb2c16 */
  if (C.zf) goto L_10bb2c16;
  /* 10bb268a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb268c push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb268e call dword ptr [0x10bb60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b8))), 0x10bb2694u);
  /* 10bb2694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2697:;
  /* 10bb2697 mov edi, dword ptr [0x10bb60e4] */
  EDI = (r32((uint32_t)(0x10bb60e4)));
  /* 10bb269d mov esi, dword ptr [0x10bb60b8] */
  ESI = (r32((uint32_t)(0x10bb60b8)));
L_10bb26a3:;
  /* 10bb26a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb26a5 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb26abu);
  /* 10bb26ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb26ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb26b0 je 0x10bb26e7 */
  if (C.zf) goto L_10bb26e7;
  /* 10bb26b2 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb26b4 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb26bau);
  /* 10bb26ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb26bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb26bf jne 0x10bb26e7 */
  if (!C.zf) goto L_10bb26e7;
  /* 10bb26c1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bb26c3 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb26c9u);
  /* 10bb26c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb26cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb26ce jne 0x10bb26e7 */
  if (!C.zf) goto L_10bb26e7;
  /* 10bb26d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb26d2 call dword ptr [0x10bb6134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6134))), 0x10bb26d8u);
  /* 10bb26d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb26da push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb26dc call esi */
  call_ind((uint32_t)(ESI), 0x10bb26deu);
  /* 10bb26de push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb26e0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bb26e2 call esi */
  call_ind((uint32_t)(ESI), 0x10bb26e4u);
  /* 10bb26e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb26e7:;
  /* 10bb26e7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10bb26e9 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb26efu);
  /* 10bb26ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb26f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb26f4 jne 0x10bb276e */
  if (!C.zf) goto L_10bb276e;
  /* 10bb26f6 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb26f8 call dword ptr [0x10bb6120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6120))), 0x10bb26feu);
  /* 10bb26fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2701 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2703 je 0x10bb276e */
  if (C.zf) goto L_10bb276e;
  /* 10bb2705 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2707 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2709 push 0x10bb7be0 */
  push32((uint32_t)(0x10bb7be0u));
  /* 10bb270e call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2710u);
  /* 10bb2710 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2712 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2714 push 0x10bb7c00 */
  push32((uint32_t)(0x10bb7c00u));
  /* 10bb2719 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb271bu);
  /* 10bb271b push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb271d push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb271f push 0x10bb7c08 */
  push32((uint32_t)(0x10bb7c08u));
  /* 10bb2724 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2726u);
  /* 10bb2726 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2728 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb272a push 0x10bb7bf0 */
  push32((uint32_t)(0x10bb7bf0u));
  /* 10bb272f call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2731u);
  /* 10bb2731 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb2733 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2735 push 0x10bb7bf8 */
  push32((uint32_t)(0x10bb7bf8u));
  /* 10bb273a call ebx */
  call_ind((uint32_t)(EBX), 0x10bb273cu);
  /* 10bb273c push 6 */
  push32((uint32_t)(0x6u));
  /* 10bb273e push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2740 push 0x10bb7c10 */
  push32((uint32_t)(0x10bb7c10u));
  /* 10bb2745 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2747u);
  /* 10bb2747 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb274a push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb274c push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb274e push 0x10bb7c18 */
  push32((uint32_t)(0x10bb7c18u));
  /* 10bb2753 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2755u);
  /* 10bb2755 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2757 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2759 push 0x10bb7a78 */
  push32((uint32_t)(0x10bb7a78u));
  /* 10bb275e call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2760u);
  /* 10bb2760 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb2762 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb2764 push 0x10bb7b48 */
  push32((uint32_t)(0x10bb7b48u));
  /* 10bb2769 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb276bu);
  /* 10bb276b add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb276e:;
  /* 10bb276e push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb2770 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2776u);
  /* 10bb2776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2779 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb277b je 0x10bb2834 */
  if (C.zf) goto L_10bb2834;
  /* 10bb2781 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb2783 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2789u);
  /* 10bb2789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb278c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb278e jne 0x10bb2834 */
  if (!C.zf) goto L_10bb2834;
  /* 10bb2794 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bb2796 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb279cu);
  /* 10bb279c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb279f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb27a1 jne 0x10bb2834 */
  if (!C.zf) goto L_10bb2834;
  /* 10bb27a7 push 0x10bb7d30 */
  push32((uint32_t)(0x10bb7d30u));
  /* 10bb27ac push 0x10bb7b68 */
  push32((uint32_t)(0x10bb7b68u));
  /* 10bb27b1 call dword ptr [0x10bb6118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6118))), 0x10bb27b7u);
  /* 10bb27b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb27ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb27bc jg 0x10bb27d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bb27d5;
  /* 10bb27be push 0x10bb7d30 */
  push32((uint32_t)(0x10bb7d30u));
  /* 10bb27c3 push 0x10bb7a78 */
  push32((uint32_t)(0x10bb7a78u));
  /* 10bb27c8 call dword ptr [0x10bb6118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6118))), 0x10bb27ceu);
  /* 10bb27ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb27d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb27d3 jle 0x10bb2834 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2834;
L_10bb27d5:;
  /* 10bb27d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb27d7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bb27d9 call esi */
  call_ind((uint32_t)(ESI), 0x10bb27dbu);
  /* 10bb27db push 0x10bb748c */
  push32((uint32_t)(0x10bb748cu));
  /* 10bb27e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb27e2 push 0x10bb74c8 */
  push32((uint32_t)(0x10bb74c8u));
  /* 10bb27e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb27e9 call dword ptr [0x10bb611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb611c))), 0x10bb27efu);
  /* 10bb27ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb27f2 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb27f5 ja 0x10bb2834 */
  if ((!C.cf&&!C.zf)) goto L_10bb2834;
  /* 10bb27f7 jmp dword ptr [eax*4 + 0x10bb3070] */
  switch (EAX) {
    case 0: goto L_10bb27fe;
    case 1: goto L_10bb2a03;
    case 2: goto L_10bb2a89;
    case 3: goto L_10bb2b0c;
    case 4: goto L_10bb2b92;
    case 5: goto L_10bb2c16;
    default: x86_unimpl("switch@0x10bb27f7 out of table"); return;
  }
L_10bb27fe:;
  /* 10bb27fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2800 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2802 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2804u);
  /* 10bb2804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2807 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb280c jge 0x10bb29a0 */
  if ((C.sf==C.of)) goto L_10bb29a0;
  /* 10bb2812 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2814 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2816 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2818u);
  /* 10bb2818 mov ecx, 0xbb8 */
  ECX = (0xbb8u);
L_10bb281d:;
  /* 10bb281d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb281f push ecx */
  push32((uint32_t)(ECX));
L_10bb2820:;
  /* 10bb2820 push 0x10bb74c0 */
  push32((uint32_t)(0x10bb74c0u));
  /* 10bb2825 call dword ptr [0x10bb6124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6124))), 0x10bb282bu);
  /* 10bb282b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bb282d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb282f call edi */
  call_ind((uint32_t)(EDI), 0x10bb2831u);
  /* 10bb2831 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2834:;
  /* 10bb2834 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bb2836 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb283cu);
  /* 10bb283c mov ebp, dword ptr [0x10bb612c] */
  EBP = (r32((uint32_t)(0x10bb612c)));
  /* 10bb2842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2845 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2847 je 0x10bb290f */
  if (C.zf) goto L_10bb290f;
  /* 10bb284d push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10bb284f call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb2855u);
  /* 10bb2855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2858 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb285a je 0x10bb290f */
  if (C.zf) goto L_10bb290f;
  /* 10bb2860 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2862 push 0x10bb7a80 */
  push32((uint32_t)(0x10bb7a80u));
  /* 10bb2867 push 0x10bb7d98 */
  push32((uint32_t)(0x10bb7d98u));
  /* 10bb286c call dword ptr [0x10bb613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb613c))), 0x10bb2872u);
  /* 10bb2872 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2877 jle 0x10bb290f */
  if ((C.zf||C.sf!=C.of)) goto L_10bb290f;
  /* 10bb287d mov ebx, dword ptr [0x10bb60b8] */
  EBX = (r32((uint32_t)(0x10bb60b8)));
  /* 10bb2883 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2885 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bb2887 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2889u);
  /* 10bb2889 push 0x10bb7484 */
  push32((uint32_t)(0x10bb7484u));
  /* 10bb288e call dword ptr [0x10bb60e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60e8))), 0x10bb2894u);
  /* 10bb2894 mov esi, dword ptr [0x10bb6134] */
  ESI = (r32((uint32_t)(0x10bb6134)));
  /* 10bb289a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bb289c call esi */
  call_ind((uint32_t)(ESI), 0x10bb289eu);
  /* 10bb289e push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10bb28a0 call esi */
  call_ind((uint32_t)(ESI), 0x10bb28a2u);
  /* 10bb28a2 mov esi, dword ptr [0x10bb6140] */
  ESI = (r32((uint32_t)(0x10bb6140)));
  /* 10bb28a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28ac push 0x10bb7a80 */
  push32((uint32_t)(0x10bb7a80u));
  /* 10bb28b1 call esi */
  call_ind((uint32_t)(ESI), 0x10bb28b3u);
  /* 10bb28b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28b5 push 0x10bb7a98 */
  push32((uint32_t)(0x10bb7a98u));
  /* 10bb28ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28bc call ebp */
  call_ind((uint32_t)(EBP), 0x10bb28beu);
  /* 10bb28be push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28c2 push 0x10bb7a80 */
  push32((uint32_t)(0x10bb7a80u));
  /* 10bb28c7 call esi */
  call_ind((uint32_t)(ESI), 0x10bb28c9u);
  /* 10bb28c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28cb push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bb28cd push 0x10bb7d08 */
  push32((uint32_t)(0x10bb7d08u));
  /* 10bb28d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28d4 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb28dau);
  /* 10bb28da add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb28dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28df push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28e1 push 0x10bb7a80 */
  push32((uint32_t)(0x10bb7a80u));
  /* 10bb28e6 call esi */
  call_ind((uint32_t)(ESI), 0x10bb28e8u);
  /* 10bb28e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb28ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb28ec call dword ptr [0x10bb60f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f0))), 0x10bb28f2u);
  /* 10bb28f2 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10bb28f7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bb28f9 call edi */
  call_ind((uint32_t)(EDI), 0x10bb28fbu);
  /* 10bb28fb push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10bb2900 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10bb2902 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2904u);
  /* 10bb2904 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2906 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10bb2908 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb290au);
  /* 10bb290a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb290d mov esi, ebx */
  ESI = (EBX);
L_10bb290f:;
  /* 10bb290f push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10bb2911 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2917u);
  /* 10bb2917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb291a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb291c je 0x10bb2c39 */
  if (C.zf) goto L_10bb2c39;
  /* 10bb2922 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bb2924 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb292au);
  /* 10bb292a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb292d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb292f je 0x10bb2c39 */
  if (C.zf) goto L_10bb2c39;
  /* 10bb2935 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2937 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10bb2939 call esi */
  call_ind((uint32_t)(ESI), 0x10bb293bu);
  /* 10bb293b mov ebx, dword ptr [0x10bb60f4] */
  EBX = (r32((uint32_t)(0x10bb60f4)));
  /* 10bb2941 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2943 push 0x10bb7a98 */
  push32((uint32_t)(0x10bb7a98u));
  /* 10bb2948 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb294au);
  /* 10bb294a lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10bb294d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2950 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb2953 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10bb2956 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10bb2959 push edx */
  push32((uint32_t)(EDX));
  /* 10bb295a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb295c push 0x10bb7a98 */
  push32((uint32_t)(0x10bb7a98u));
  /* 10bb2961 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2963u);
  /* 10bb2963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2966 push eax */
  push32((uint32_t)(EAX));
  /* 10bb2967 push 0x10bb747c */
  push32((uint32_t)(0x10bb747cu));
  /* 10bb296c call dword ptr [0x10bb6124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6124))), 0x10bb2972u);
  /* 10bb2972 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2974 push 0x10bb7a98 */
  push32((uint32_t)(0x10bb7a98u));
  /* 10bb2979 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb297bu);
  /* 10bb297b lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10bb297e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb2981 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb2984 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10bb2987 push eax */
  push32((uint32_t)(EAX));
  /* 10bb2988 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb298a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb298c call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2992u);
  /* 10bb2992 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2994 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bb2996 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2998u);
  /* 10bb2998 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb299b jmp 0x10bb2c3f */
  goto L_10bb2c3f;
L_10bb29a0:;
  /* 10bb29a0 push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 10bb29a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb29a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb29a9 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb29afu);
  /* 10bb29af mov ebx, dword ptr [0x10bb6114] */
  EBX = (r32((uint32_t)(0x10bb6114)));
  /* 10bb29b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb29b8 mov dword ptr [0x10bb7a44], 0 */
  w32((uint32_t)(0x10bb7a44), (0x0u));
L_10bb29c2:;
  /* 10bb29c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb29c4 push 0x10bb7aa8 */
  push32((uint32_t)(0x10bb7aa8u));
  /* 10bb29c9 push 0x10bb7d00 */
  push32((uint32_t)(0x10bb7d00u));
  /* 10bb29ce push 0x10bb7d90 */
  push32((uint32_t)(0x10bb7d90u));
  /* 10bb29d3 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb29d5u);
  /* 10bb29d5 mov eax, dword ptr [0x10bb7a44] */
  EAX = (r32((uint32_t)(0x10bb7a44)));
  /* 10bb29da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb29dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb29de cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb29e1 mov dword ptr [0x10bb7a44], eax */
  w32((uint32_t)(0x10bb7a44), (EAX));
  /* 10bb29e6 jl 0x10bb29c2 */
  if ((C.sf!=C.of)) goto L_10bb29c2;
  /* 10bb29e8 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10bb29ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb29ef mov dword ptr [0x10bb7a44], 0 */
  w32((uint32_t)(0x10bb7a44), (0x0u));
  /* 10bb29f9 call edi */
  call_ind((uint32_t)(EDI), 0x10bb29fbu);
  /* 10bb29fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb29fe jmp 0x10bb2834 */
  goto L_10bb2834;
L_10bb2a03:;
  /* 10bb2a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2a07 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2a09u);
  /* 10bb2a09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2a0c cmp eax, 0x5dc */
  { uint32_t _a=(EAX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2a11 jge 0x10bb2a26 */
  if ((C.sf==C.of)) goto L_10bb2a26;
  /* 10bb2a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2a17 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2a19u);
  /* 10bb2a19 mov edx, 0x5dc */
  EDX = (0x5dcu);
  /* 10bb2a1e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb2a20 push edx */
  push32((uint32_t)(EDX));
  /* 10bb2a21 jmp 0x10bb2820 */
  goto L_10bb2820;
L_10bb2a26:;
  /* 10bb2a26 push 0xfffffa24 */
  push32((uint32_t)(0xfffffa24u));
  /* 10bb2a2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2a2f call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2a35u);
  /* 10bb2a35 mov ebx, dword ptr [0x10bb6114] */
  EBX = (r32((uint32_t)(0x10bb6114)));
  /* 10bb2a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2a3e mov dword ptr [0x10bb7a40], 0 */
  w32((uint32_t)(0x10bb7a40), (0x0u));
L_10bb2a48:;
  /* 10bb2a48 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb2a4a push 0x10bb7aa0 */
  push32((uint32_t)(0x10bb7aa0u));
  /* 10bb2a4f push 0x10bb7d70 */
  push32((uint32_t)(0x10bb7d70u));
  /* 10bb2a54 push 0x10bb7d90 */
  push32((uint32_t)(0x10bb7d90u));
  /* 10bb2a59 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2a5bu);
  /* 10bb2a5b mov eax, dword ptr [0x10bb7a40] */
  EAX = (r32((uint32_t)(0x10bb7a40)));
  /* 10bb2a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2a63 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2a64 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2a67 mov dword ptr [0x10bb7a40], eax */
  w32((uint32_t)(0x10bb7a40), (EAX));
  /* 10bb2a6c jl 0x10bb2a48 */
  if ((C.sf!=C.of)) goto L_10bb2a48;
  /* 10bb2a6e push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10bb2a73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2a75 mov dword ptr [0x10bb7a40], 0 */
  w32((uint32_t)(0x10bb7a40), (0x0u));
  /* 10bb2a7f call edi */
  call_ind((uint32_t)(EDI), 0x10bb2a81u);
  /* 10bb2a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2a84 jmp 0x10bb2834 */
  goto L_10bb2834;
L_10bb2a89:;
  /* 10bb2a89 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2a8d call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2a8fu);
  /* 10bb2a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2a92 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2a97 jge 0x10bb2aa9 */
  if ((C.sf==C.of)) goto L_10bb2aa9;
  /* 10bb2a99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2a9d call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2a9fu);
  /* 10bb2a9f mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 10bb2aa4 jmp 0x10bb281d */
  goto L_10bb281d;
L_10bb2aa9:;
  /* 10bb2aa9 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10bb2aae push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2ab2 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2ab8u);
  /* 10bb2ab8 mov ebx, dword ptr [0x10bb6114] */
  EBX = (r32((uint32_t)(0x10bb6114)));
  /* 10bb2abe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2ac1 mov dword ptr [0x10bb7a48], 0 */
  w32((uint32_t)(0x10bb7a48), (0x0u));
L_10bb2acb:;
  /* 10bb2acb push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb2acd push 0x10bb7ac8 */
  push32((uint32_t)(0x10bb7ac8u));
  /* 10bb2ad2 push 0x10bb7c40 */
  push32((uint32_t)(0x10bb7c40u));
  /* 10bb2ad7 push 0x10bb7c20 */
  push32((uint32_t)(0x10bb7c20u));
  /* 10bb2adc call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2adeu);
  /* 10bb2ade mov eax, dword ptr [0x10bb7a48] */
  EAX = (r32((uint32_t)(0x10bb7a48)));
  /* 10bb2ae3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2ae6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2ae7 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2aea mov dword ptr [0x10bb7a48], eax */
  w32((uint32_t)(0x10bb7a48), (EAX));
  /* 10bb2aef jl 0x10bb2acb */
  if ((C.sf!=C.of)) goto L_10bb2acb;
  /* 10bb2af1 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10bb2af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2af8 mov dword ptr [0x10bb7a48], 0 */
  w32((uint32_t)(0x10bb7a48), (0x0u));
  /* 10bb2b02 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2b04u);
  /* 10bb2b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2b07 jmp 0x10bb2834 */
  goto L_10bb2834;
L_10bb2b0c:;
  /* 10bb2b0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2b10 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2b12u);
  /* 10bb2b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2b15 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2b1a jge 0x10bb2b2f */
  if ((C.sf==C.of)) goto L_10bb2b2f;
  /* 10bb2b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2b20 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2b22u);
  /* 10bb2b22 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 10bb2b27 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb2b29 push edx */
  push32((uint32_t)(EDX));
  /* 10bb2b2a jmp 0x10bb2820 */
  goto L_10bb2820;
L_10bb2b2f:;
  /* 10bb2b2f push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10bb2b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2b38 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2b3eu);
  /* 10bb2b3e mov ebx, dword ptr [0x10bb6114] */
  EBX = (r32((uint32_t)(0x10bb6114)));
  /* 10bb2b44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2b47 mov dword ptr [0x10bb7a4c], 0 */
  w32((uint32_t)(0x10bb7a4c), (0x0u));
L_10bb2b51:;
  /* 10bb2b51 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb2b53 push 0x10bb7ab8 */
  push32((uint32_t)(0x10bb7ab8u));
  /* 10bb2b58 push 0x10bb7cf8 */
  push32((uint32_t)(0x10bb7cf8u));
  /* 10bb2b5d push 0x10bb7c20 */
  push32((uint32_t)(0x10bb7c20u));
  /* 10bb2b62 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2b64u);
  /* 10bb2b64 mov eax, dword ptr [0x10bb7a4c] */
  EAX = (r32((uint32_t)(0x10bb7a4c)));
  /* 10bb2b69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2b6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2b6d cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2b70 mov dword ptr [0x10bb7a4c], eax */
  w32((uint32_t)(0x10bb7a4c), (EAX));
  /* 10bb2b75 jl 0x10bb2b51 */
  if ((C.sf!=C.of)) goto L_10bb2b51;
  /* 10bb2b77 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10bb2b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2b7e mov dword ptr [0x10bb7a4c], 0 */
  w32((uint32_t)(0x10bb7a4c), (0x0u));
  /* 10bb2b88 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2b8au);
  /* 10bb2b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2b8d jmp 0x10bb2834 */
  goto L_10bb2834;
L_10bb2b92:;
  /* 10bb2b92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2b96 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2b98u);
  /* 10bb2b98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2b9b cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2ba0 jge 0x10bb2bb2 */
  if ((C.sf==C.of)) goto L_10bb2bb2;
  /* 10bb2ba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2ba6 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2ba8u);
  /* 10bb2ba8 mov ecx, 0x3e8 */
  ECX = (0x3e8u);
  /* 10bb2bad jmp 0x10bb281d */
  goto L_10bb281d;
L_10bb2bb2:;
  /* 10bb2bb2 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10bb2bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2bbb call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2bc1u);
  /* 10bb2bc1 mov ebp, dword ptr [0x10bb6114] */
  EBP = (r32((uint32_t)(0x10bb6114)));
  /* 10bb2bc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2bca mov dword ptr [0x10bb7a54], 0 */
  w32((uint32_t)(0x10bb7a54), (0x0u));
L_10bb2bd4:;
  /* 10bb2bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb2bd6 push 0x10bb7a90 */
  push32((uint32_t)(0x10bb7a90u));
  /* 10bb2bdb push 0x10bb7a58 */
  push32((uint32_t)(0x10bb7a58u));
  /* 10bb2be0 push 0x10bb7be8 */
  push32((uint32_t)(0x10bb7be8u));
  /* 10bb2be5 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2be7u);
  /* 10bb2be7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10bb2be9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb2beb push 0x10bb7bb8 */
  push32((uint32_t)(0x10bb7bb8u));
  /* 10bb2bf0 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2bf2u);
  /* 10bb2bf2 mov eax, dword ptr [0x10bb7a54] */
  EAX = (r32((uint32_t)(0x10bb7a54)));
  /* 10bb2bf7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2bfa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb2bfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2bfe mov dword ptr [0x10bb7a54], eax */
  w32((uint32_t)(0x10bb7a54), (EAX));
  /* 10bb2c03 jl 0x10bb2bd4 */
  if ((C.sf!=C.of)) goto L_10bb2bd4;
  /* 10bb2c05 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10bb2c0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2c0c call edi */
  call_ind((uint32_t)(EDI), 0x10bb2c0eu);
  /* 10bb2c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2c11 jmp 0x10bb2834 */
  goto L_10bb2834;
L_10bb2c16:;
  /* 10bb2c16 mov edi, dword ptr [0x10bb60e4] */
  EDI = (r32((uint32_t)(0x10bb60e4)));
  /* 10bb2c1c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10bb2c21 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb2c23 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2c25u);
  /* 10bb2c25 mov esi, dword ptr [0x10bb60b8] */
  ESI = (r32((uint32_t)(0x10bb60b8)));
  /* 10bb2c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2c2d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bb2c2f call esi */
  call_ind((uint32_t)(ESI), 0x10bb2c31u);
  /* 10bb2c31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2c34 jmp 0x10bb26a3 */
  goto L_10bb26a3;
L_10bb2c39:;
  /* 10bb2c39 mov ebx, dword ptr [0x10bb60f4] */
  EBX = (r32((uint32_t)(0x10bb60f4)));
L_10bb2c3f:;
  /* 10bb2c3f push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bb2c41 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb2c47u);
  /* 10bb2c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2c4a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2c4c je 0x10bb2c99 */
  if (C.zf) goto L_10bb2c99;
  /* 10bb2c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2c50 push 0x10bb7a80 */
  push32((uint32_t)(0x10bb7a80u));
  /* 10bb2c55 push 0x10bb7d08 */
  push32((uint32_t)(0x10bb7d08u));
  /* 10bb2c5a call dword ptr [0x10bb613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb613c))), 0x10bb2c60u);
  /* 10bb2c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2c63 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb2c66 jle 0x10bb2c99 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2c99;
  /* 10bb2c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2c6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2c6c push 0x10bb7d08 */
  push32((uint32_t)(0x10bb7d08u));
  /* 10bb2c71 call dword ptr [0x10bb6138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6138))), 0x10bb2c77u);
  /* 10bb2c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2c79 push 0x10bb7a38 */
  push32((uint32_t)(0x10bb7a38u));
  /* 10bb2c7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2c80 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2c82u);
  /* 10bb2c82 push 0x10bb7a38 */
  push32((uint32_t)(0x10bb7a38u));
  /* 10bb2c87 call dword ptr [0x10bb60dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60dc))), 0x10bb2c8du);
  /* 10bb2c8d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10bb2c92 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bb2c94 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2c96u);
  /* 10bb2c96 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2c99:;
  /* 10bb2c99 mov ebp, dword ptr [0x10bb60b0] */
  EBP = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb2c9f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bb2ca1 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2ca3u);
  /* 10bb2ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2ca6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2ca8 je 0x10bb2cbc */
  if (C.zf) goto L_10bb2cbc;
  /* 10bb2caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2cac push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bb2cae call esi */
  call_ind((uint32_t)(ESI), 0x10bb2cb0u);
  /* 10bb2cb0 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10bb2cb5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bb2cb7 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2cb9u);
  /* 10bb2cb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2cbc:;
  /* 10bb2cbc push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bb2cbe call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2cc0u);
  /* 10bb2cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2cc3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2cc5 je 0x10bb2d37 */
  if (C.zf) goto L_10bb2d37;
  /* 10bb2cc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2cc9 push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb2cce call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2cd0u);
  /* 10bb2cd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2cd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2cd5 jle 0x10bb2d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2d37;
  /* 10bb2cd7 push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb2cdc push 0x10bb7b48 */
  push32((uint32_t)(0x10bb7b48u));
  /* 10bb2ce1 call dword ptr [0x10bb6118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6118))), 0x10bb2ce7u);
  /* 10bb2ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2cec jle 0x10bb2d37 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2d37;
  /* 10bb2cee push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bb2cf0 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb2cf6u);
  /* 10bb2cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2cf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2cfb je 0x10bb2d37 */
  if (C.zf) goto L_10bb2d37;
  /* 10bb2cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2cff push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bb2d01 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2d03u);
  /* 10bb2d03 mov ebp, dword ptr [0x10bb60b4] */
  EBP = (r32((uint32_t)(0x10bb60b4)));
  /* 10bb2d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2d0b push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb2d10 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2d12u);
  /* 10bb2d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2d14 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10bb2d16 push 0x10bb7d58 */
  push32((uint32_t)(0x10bb7d58u));
  /* 10bb2d1b push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2d1d call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb2d23u);
  /* 10bb2d23 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10bb2d28 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bb2d2a call edi */
  call_ind((uint32_t)(EDI), 0x10bb2d2cu);
  /* 10bb2d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2d2e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10bb2d30 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2d32u);
  /* 10bb2d32 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2d35 jmp 0x10bb2d3d */
  goto L_10bb2d3d;
L_10bb2d37:;
  /* 10bb2d37 mov ebp, dword ptr [0x10bb60b4] */
  EBP = (r32((uint32_t)(0x10bb60b4)));
L_10bb2d3d:;
  /* 10bb2d3d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10bb2d3f call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2d45u);
  /* 10bb2d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2d4a je 0x10bb2d8d */
  if (C.zf) goto L_10bb2d8d;
  /* 10bb2d4c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bb2d4e call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb2d54u);
  /* 10bb2d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2d57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2d59 je 0x10bb2d8d */
  if (C.zf) goto L_10bb2d8d;
  /* 10bb2d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2d5d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10bb2d5f call esi */
  call_ind((uint32_t)(ESI), 0x10bb2d61u);
  /* 10bb2d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2d63 push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb2d68 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2d6au);
  /* 10bb2d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2d6c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bb2d71 push 0x10bb7b48 */
  push32((uint32_t)(0x10bb7b48u));
  /* 10bb2d76 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2d78 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb2d7eu);
  /* 10bb2d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2d80 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bb2d82 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2d84u);
  /* 10bb2d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2d86 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bb2d88 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2d8au);
  /* 10bb2d8a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2d8d:;
  /* 10bb2d8d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bb2d8f call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2d95u);
  /* 10bb2d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2d98 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2d9a je 0x10bb2dae */
  if (C.zf) goto L_10bb2dae;
  /* 10bb2d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2d9e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bb2da0 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2da2u);
  /* 10bb2da2 push 0x44c */
  push32((uint32_t)(0x44cu));
  /* 10bb2da7 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bb2da9 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2dabu);
  /* 10bb2dab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2dae:;
  /* 10bb2dae push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb2db0 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2db6u);
  /* 10bb2db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2db9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2dbb je 0x10bb2e25 */
  if (C.zf) goto L_10bb2e25;
  /* 10bb2dbd push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2dbf push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb2dc4 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2dc6u);
  /* 10bb2dc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2dcb jle 0x10bb2e25 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2e25;
  /* 10bb2dcd push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb2dd2 push 0x10bb7d58 */
  push32((uint32_t)(0x10bb7d58u));
  /* 10bb2dd7 call dword ptr [0x10bb6118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6118))), 0x10bb2dddu);
  /* 10bb2ddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2de2 jle 0x10bb2e25 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2e25;
  /* 10bb2de4 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bb2de6 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb2decu);
  /* 10bb2dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2df1 je 0x10bb2e25 */
  if (C.zf) goto L_10bb2e25;
  /* 10bb2df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2df5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb2df7 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2df9u);
  /* 10bb2df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2dfb push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb2e00 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2e02u);
  /* 10bb2e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2e04 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10bb2e06 push 0x10bb7b48 */
  push32((uint32_t)(0x10bb7b48u));
  /* 10bb2e0b push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2e0d call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb2e13u);
  /* 10bb2e13 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10bb2e18 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb2e1a call edi */
  call_ind((uint32_t)(EDI), 0x10bb2e1cu);
  /* 10bb2e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2e1e push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bb2e20 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2e22u);
  /* 10bb2e22 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2e25:;
  /* 10bb2e25 mov edi, dword ptr [0x10bb60b0] */
  EDI = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb2e2b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bb2e2d call edi */
  call_ind((uint32_t)(EDI), 0x10bb2e2fu);
  /* 10bb2e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2e32 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2e34 je 0x10bb2e77 */
  if (C.zf) goto L_10bb2e77;
  /* 10bb2e36 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb2e38 call dword ptr [0x10bb610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb610c))), 0x10bb2e3eu);
  /* 10bb2e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2e41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2e43 je 0x10bb2e77 */
  if (C.zf) goto L_10bb2e77;
  /* 10bb2e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2e47 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bb2e49 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2e4bu);
  /* 10bb2e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2e4d push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb2e52 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2e54u);
  /* 10bb2e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2e56 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bb2e5b push 0x10bb7d58 */
  push32((uint32_t)(0x10bb7d58u));
  /* 10bb2e60 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2e62 call dword ptr [0x10bb60fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60fc))), 0x10bb2e68u);
  /* 10bb2e68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2e6a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb2e6c call esi */
  call_ind((uint32_t)(ESI), 0x10bb2e6eu);
  /* 10bb2e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2e70 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bb2e72 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2e74u);
  /* 10bb2e74 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2e77:;
  /* 10bb2e77 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10bb2e79 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2e7bu);
  /* 10bb2e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2e7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2e80 je 0x10bb2eeb */
  if (C.zf) goto L_10bb2eeb;
  /* 10bb2e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2e84 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10bb2e86 call dword ptr [0x10bb60b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b8))), 0x10bb2e8cu);
  /* 10bb2e8c mov edi, dword ptr [0x10bb60b4] */
  EDI = (r32((uint32_t)(0x10bb60b4)));
  /* 10bb2e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2e94 push 0x10bb7da0 */
  push32((uint32_t)(0x10bb7da0u));
  /* 10bb2e99 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2e9bu);
  /* 10bb2e9b mov esi, dword ptr [0x10bb6148] */
  ESI = (r32((uint32_t)(0x10bb6148)));
  /* 10bb2ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2ea3 push 0x10bb7a00 */
  push32((uint32_t)(0x10bb7a00u));
  /* 10bb2ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2eaa call esi */
  call_ind((uint32_t)(ESI), 0x10bb2eacu);
  /* 10bb2eac push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2eae push 0x10bb7ad8 */
  push32((uint32_t)(0x10bb7ad8u));
  /* 10bb2eb3 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2eb5u);
  /* 10bb2eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2eb7 push 0x10bb7bd8 */
  push32((uint32_t)(0x10bb7bd8u));
  /* 10bb2ebc push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2ebe call esi */
  call_ind((uint32_t)(ESI), 0x10bb2ec0u);
  /* 10bb2ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2ec2 push 0x10bb7ad0 */
  push32((uint32_t)(0x10bb7ad0u));
  /* 10bb2ec7 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2ec9u);
  /* 10bb2ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2ecb push 0x10bb7bd0 */
  push32((uint32_t)(0x10bb7bd0u));
  /* 10bb2ed0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb2ed2 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2ed4u);
  /* 10bb2ed4 mov ebx, dword ptr [0x10bb60f4] */
  EBX = (r32((uint32_t)(0x10bb60f4)));
  /* 10bb2eda mov esi, dword ptr [0x10bb60b8] */
  ESI = (r32((uint32_t)(0x10bb60b8)));
  /* 10bb2ee0 mov ebp, edi */
  EBP = (EDI);
  /* 10bb2ee2 mov edi, dword ptr [0x10bb60b0] */
  EDI = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb2ee8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb2eeb:;
  /* 10bb2eeb push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10bb2eed call edi */
  call_ind((uint32_t)(EDI), 0x10bb2eefu);
  /* 10bb2eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2ef2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2ef4 je 0x10bb2f6f */
  if (C.zf) goto L_10bb2f6f;
  /* 10bb2ef6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bb2ef8 push 0x10bb7ba0 */
  push32((uint32_t)(0x10bb7ba0u));
  /* 10bb2efd call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2effu);
  /* 10bb2eff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2f04 jne 0x10bb2f6f */
  if (!C.zf) goto L_10bb2f6f;
  /* 10bb2f06 push eax */
  push32((uint32_t)(EAX));
  /* 10bb2f07 push 0x10bb7d60 */
  push32((uint32_t)(0x10bb7d60u));
  /* 10bb2f0c call dword ptr [0x10bb60f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60f8))), 0x10bb2f12u);
  /* 10bb2f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2f17 jle 0x10bb2f6f */
  if ((C.zf||C.sf!=C.of)) goto L_10bb2f6f;
  /* 10bb2f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2f1b push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10bb2f1d call esi */
  call_ind((uint32_t)(ESI), 0x10bb2f1fu);
  /* 10bb2f1f mov edi, dword ptr [0x10bb60e8] */
  EDI = (r32((uint32_t)(0x10bb60e8)));
  /* 10bb2f25 push 0x10bb7474 */
  push32((uint32_t)(0x10bb7474u));
  /* 10bb2f2a call edi */
  call_ind((uint32_t)(EDI), 0x10bb2f2cu);
  /* 10bb2f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2f2e push 0x10bb7d88 */
  push32((uint32_t)(0x10bb7d88u));
  /* 10bb2f33 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb2f35u);
  /* 10bb2f35 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb2f37 call dword ptr [0x10bb60d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60d0))), 0x10bb2f3du);
  /* 10bb2f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2f3f push 0x10bb7d60 */
  push32((uint32_t)(0x10bb7d60u));
  /* 10bb2f44 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bb2f46 push 0x10bb7a30 */
  push32((uint32_t)(0x10bb7a30u));
  /* 10bb2f4b push 0x10bb7ae0 */
  push32((uint32_t)(0x10bb7ae0u));
  /* 10bb2f50 push 0x10bb7b60 */
  push32((uint32_t)(0x10bb7b60u));
  /* 10bb2f55 call dword ptr [0x10bb60ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60ec))), 0x10bb2f5bu);
  /* 10bb2f5b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10bb2f60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb2f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2f64 call dword ptr [0x10bb6104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6104))), 0x10bb2f6au);
  /* 10bb2f6a add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2f6d jmp 0x10bb2f75 */
  goto L_10bb2f75;
L_10bb2f6f:;
  /* 10bb2f6f mov edi, dword ptr [0x10bb60e8] */
  EDI = (r32((uint32_t)(0x10bb60e8)));
L_10bb2f75:;
  /* 10bb2f75 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10bb2f77 call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2f7du);
  /* 10bb2f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2f80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2f82 je 0x10bb2fa9 */
  if (C.zf) goto L_10bb2fa9;
  /* 10bb2f84 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb2f86 push 0x10bb7c98 */
  push32((uint32_t)(0x10bb7c98u));
  /* 10bb2f8b call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2f8du);
  /* 10bb2f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2f92 jne 0x10bb2fa9 */
  if (!C.zf) goto L_10bb2fa9;
  /* 10bb2f94 push eax */
  push32((uint32_t)(EAX));
  /* 10bb2f95 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10bb2f97 call esi */
  call_ind((uint32_t)(ESI), 0x10bb2f99u);
  /* 10bb2f99 push 0x10bb746c */
  push32((uint32_t)(0x10bb746cu));
  /* 10bb2f9e call edi */
  call_ind((uint32_t)(EDI), 0x10bb2fa0u);
  /* 10bb2fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2fa3 call dword ptr [0x10bb614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb614c))), 0x10bb2fa9u);
L_10bb2fa9:;
  /* 10bb2fa9 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10bb2fab call dword ptr [0x10bb60b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60b0))), 0x10bb2fb1u);
  /* 10bb2fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2fb4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2fb6 je 0x10bb2fdd */
  if (C.zf) goto L_10bb2fdd;
  /* 10bb2fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2fba push 0x10bb7d30 */
  push32((uint32_t)(0x10bb7d30u));
  /* 10bb2fbf call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2fc1u);
  /* 10bb2fc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2fc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2fc6 jne 0x10bb2fdd */
  if (!C.zf) goto L_10bb2fdd;
  /* 10bb2fc8 push eax */
  push32((uint32_t)(EAX));
  /* 10bb2fc9 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10bb2fcb call esi */
  call_ind((uint32_t)(ESI), 0x10bb2fcdu);
  /* 10bb2fcd push 0x10bb7464 */
  push32((uint32_t)(0x10bb7464u));
  /* 10bb2fd2 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2fd4u);
  /* 10bb2fd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2fd7 call dword ptr [0x10bb6144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6144))), 0x10bb2fddu);
L_10bb2fdd:;
  /* 10bb2fdd mov edi, dword ptr [0x10bb60b0] */
  EDI = (r32((uint32_t)(0x10bb60b0)));
  /* 10bb2fe3 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10bb2fe5 call edi */
  call_ind((uint32_t)(EDI), 0x10bb2fe7u);
  /* 10bb2fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2fea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb2fec je 0x10bb3018 */
  if (C.zf) goto L_10bb3018;
  /* 10bb2fee push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb2ff0 push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb2ff5 call ebx */
  call_ind((uint32_t)(EBX), 0x10bb2ff7u);
  /* 10bb2ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb2ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb2ffc jle 0x10bb3018 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb3018;
  /* 10bb2ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3000 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10bb3002 call esi */
  call_ind((uint32_t)(ESI), 0x10bb3004u);
  /* 10bb3004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3006 push 0x10bb7ca0 */
  push32((uint32_t)(0x10bb7ca0u));
  /* 10bb300b call ebp */
  call_ind((uint32_t)(EBP), 0x10bb300du);
  /* 10bb300d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb300f call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb3015u);
  /* 10bb3015 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb3018:;
  /* 10bb3018 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10bb301a call edi */
  call_ind((uint32_t)(EDI), 0x10bb301cu);
  /* 10bb301c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb301f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb3021 je 0x10bb304d */
  if (C.zf) goto L_10bb304d;
  /* 10bb3023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3025 push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb302a call ebx */
  call_ind((uint32_t)(EBX), 0x10bb302cu);
  /* 10bb302c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb302f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3031 jle 0x10bb304d */
  if ((C.zf||C.sf!=C.of)) goto L_10bb304d;
  /* 10bb3033 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3035 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10bb3037 call esi */
  call_ind((uint32_t)(ESI), 0x10bb3039u);
  /* 10bb3039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb303b push 0x10bb7d68 */
  push32((uint32_t)(0x10bb7d68u));
  /* 10bb3040 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb3042u);
  /* 10bb3042 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3044 call dword ptr [0x10bb6100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6100))), 0x10bb304au);
  /* 10bb304a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb304d:;
  /* 10bb304d pop edi */
  EDI = (pop32());
  /* 10bb304e pop esi */
  ESI = (pop32());
  /* 10bb304f pop ebp */
  EBP = (pop32());
  /* 10bb3050 pop ebx */
  EBX = (pop32());
  /* 10bb3051 ret  */
  ESPCHK(0x10bb15a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003090 @ 0x10bb3090 (217 bytes, 57 insns) */
void f_10bb3090(void) {
  FTRACE(0x10bb3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3090 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb3094 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3097 jne 0x10bb3125 */
  if (!C.zf) goto L_10bb3125;
  /* 10bb309d call dword ptr [0x10bb6000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6000))), 0x10bb30a3u);
  /* 10bb30a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb30a5 mov dword ptr [0x10bb7dc4], eax */
  w32((uint32_t)(0x10bb7dc4), (EAX));
  /* 10bb30aa call 0x10bb3ac4 */
  push32(0x10bb30afu); f_10bb3ac4();
  /* 10bb30af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb30b1 pop ecx */
  ECX = (pop32());
  /* 10bb30b2 je 0x10bb30f0 */
  if (C.zf) goto L_10bb30f0;
  /* 10bb30b4 mov eax, dword ptr [0x10bb7dc4] */
  EAX = (r32((uint32_t)(0x10bb7dc4)));
  /* 10bb30b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bb30bb mov cl, byte ptr [0x10bb7dc5] */
  CL = (r8((uint32_t)(0x10bb7dc5)));
  /* 10bb30c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb30c6 shr dword ptr [0x10bb7dc4], 0x10 */
  w32((uint32_t)(0x10bb7dc4), (sh_shr((uint32_t)(r32((uint32_t)(0x10bb7dc4))), (0x10u)&0x1f, 32)));
  /* 10bb30cd mov dword ptr [0x10bb7dcc], eax */
  w32((uint32_t)(0x10bb7dcc), (EAX));
  /* 10bb30d2 mov dword ptr [0x10bb7dd0], ecx */
  w32((uint32_t)(0x10bb7dd0), (ECX));
  /* 10bb30d8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10bb30db add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb30dd mov dword ptr [0x10bb7dc8], eax */
  w32((uint32_t)(0x10bb7dc8), (EAX));
  /* 10bb30e2 call 0x10bb3357 */
  push32(0x10bb30e7u); f_10bb3357();
  /* 10bb30e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb30e9 jne 0x10bb30f4 */
  if (!C.zf) goto L_10bb30f4;
  /* 10bb30eb call 0x10bb3b00 */
  push32(0x10bb30f0u); f_10bb3b00();
L_10bb30f0:;
  /* 10bb30f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb30f2 jmp 0x10bb3166 */
  goto L_10bb3166;
L_10bb30f4:;
  /* 10bb30f4 call dword ptr [0x10bb609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb609c))), 0x10bb30fau);
  /* 10bb30fa mov dword ptr [0x10bb8318], eax */
  w32((uint32_t)(0x10bb8318), (EAX));
  /* 10bb30ff call 0x10bb3992 */
  push32(0x10bb3104u); f_10bb3992();
  /* 10bb3104 mov dword ptr [0x10bb7db0], eax */
  w32((uint32_t)(0x10bb7db0), (EAX));
  /* 10bb3109 call 0x10bb347c */
  push32(0x10bb310eu); f_10bb347c();
  /* 10bb310e call 0x10bb3745 */
  push32(0x10bb3113u); f_10bb3745();
  /* 10bb3113 call 0x10bb368c */
  push32(0x10bb3118u); f_10bb368c();
  /* 10bb3118 call 0x10bb3239 */
  push32(0x10bb311du); f_10bb3239();
  /* 10bb311d inc dword ptr [0x10bb7dac] */
  { uint32_t _r=(r32((uint32_t)(0x10bb7dac)))+1; w32((uint32_t)(0x10bb7dac), (_r)); fl_inc(_r,32); }
  /* 10bb3123 jmp 0x10bb3163 */
  goto L_10bb3163;
L_10bb3125:;
  /* 10bb3125 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bb3127 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3129 jne 0x10bb3157 */
  if (!C.zf) goto L_10bb3157;
  /* 10bb312b cmp dword ptr [0x10bb7dac], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10bb7dac))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3131 jle 0x10bb30f0 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb30f0;
  /* 10bb3133 dec dword ptr [0x10bb7dac] */
  { uint32_t _r=(r32((uint32_t)(0x10bb7dac)))-1; w32((uint32_t)(0x10bb7dac), (_r)); fl_dec(_r,32); }
  /* 10bb3139 cmp dword ptr [0x10bb7dfc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10bb7dfc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb313f jne 0x10bb3146 */
  if (!C.zf) goto L_10bb3146;
  /* 10bb3141 call 0x10bb3277 */
  push32(0x10bb3146u); f_10bb3277();
L_10bb3146:;
  /* 10bb3146 call 0x10bb3638 */
  push32(0x10bb314bu); f_10bb3638();
  /* 10bb314b call 0x10bb33ab */
  push32(0x10bb3150u); f_10bb33ab();
  /* 10bb3150 call 0x10bb3b00 */
  push32(0x10bb3155u); f_10bb3b00();
  /* 10bb3155 jmp 0x10bb3163 */
  goto L_10bb3163;
L_10bb3157:;
  /* 10bb3157 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb315a jne 0x10bb3163 */
  if (!C.zf) goto L_10bb3163;
  /* 10bb315c push ecx */
  push32((uint32_t)(ECX));
  /* 10bb315d call 0x10bb33dc */
  push32(0x10bb3162u); f_10bb33dc();
  /* 10bb3162 pop ecx */
  ECX = (pop32());
L_10bb3163:;
  /* 10bb3163 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb3165 pop eax */
  EAX = (pop32());
L_10bb3166:;
  /* 10bb3166 ret 0xc */
  ESPCHK(0x10bb3090u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10bb3169 (157 bytes, 73 insns) */
void f_10bb3169(void) {
  FTRACE(0x10bb3169u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3169 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb316a mov ebp, esp */
  EBP = (ESP);
  /* 10bb316c push ebx */
  push32((uint32_t)(EBX));
  /* 10bb316d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb3170 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3171 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb3174 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3175 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10bb3178 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb317a jne 0x10bb3185 */
  if (!C.zf) goto L_10bb3185;
  /* 10bb317c cmp dword ptr [0x10bb7dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3183 jmp 0x10bb31ab */
  goto L_10bb31ab;
L_10bb3185:;
  /* 10bb3185 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3188 je 0x10bb318f */
  if (C.zf) goto L_10bb318f;
  /* 10bb318a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb318d jne 0x10bb31b1 */
  if (!C.zf) goto L_10bb31b1;
L_10bb318f:;
  /* 10bb318f mov eax, dword ptr [0x10bb831c] */
  EAX = (r32((uint32_t)(0x10bb831c)));
  /* 10bb3194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3196 je 0x10bb31a1 */
  if (C.zf) goto L_10bb31a1;
  /* 10bb3198 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3199 push esi */
  push32((uint32_t)(ESI));
  /* 10bb319a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb319b call eax */
  call_ind((uint32_t)(EAX), 0x10bb319du);
  /* 10bb319d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb319f je 0x10bb31ad */
  if (C.zf) goto L_10bb31ad;
L_10bb31a1:;
  /* 10bb31a1 push edi */
  push32((uint32_t)(EDI));
  /* 10bb31a2 push esi */
  push32((uint32_t)(ESI));
  /* 10bb31a3 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb31a4 call 0x10bb3090 */
  push32(0x10bb31a9u); f_10bb3090();
  /* 10bb31a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10bb31ab:;
  /* 10bb31ab jne 0x10bb31b1 */
  if (!C.zf) goto L_10bb31b1;
L_10bb31ad:;
  /* 10bb31ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb31af jmp 0x10bb31ff */
  goto L_10bb31ff;
L_10bb31b1:;
  /* 10bb31b1 push edi */
  push32((uint32_t)(EDI));
  /* 10bb31b2 push esi */
  push32((uint32_t)(ESI));
  /* 10bb31b3 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb31b4 call 0x10bb1580 */
  push32(0x10bb31b9u); f_10bb1580();
  /* 10bb31b9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb31bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10bb31bf jne 0x10bb31cd */
  if (!C.zf) goto L_10bb31cd;
  /* 10bb31c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb31c3 jne 0x10bb31fc */
  if (!C.zf) goto L_10bb31fc;
  /* 10bb31c5 push edi */
  push32((uint32_t)(EDI));
  /* 10bb31c6 push eax */
  push32((uint32_t)(EAX));
  /* 10bb31c7 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb31c8 call 0x10bb3090 */
  push32(0x10bb31cdu); f_10bb3090();
L_10bb31cd:;
  /* 10bb31cd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb31cf je 0x10bb31d6 */
  if (C.zf) goto L_10bb31d6;
  /* 10bb31d1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb31d4 jne 0x10bb31fc */
  if (!C.zf) goto L_10bb31fc;
L_10bb31d6:;
  /* 10bb31d6 push edi */
  push32((uint32_t)(EDI));
  /* 10bb31d7 push esi */
  push32((uint32_t)(ESI));
  /* 10bb31d8 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb31d9 call 0x10bb3090 */
  push32(0x10bb31deu); f_10bb3090();
  /* 10bb31de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb31e0 jne 0x10bb31e5 */
  if (!C.zf) goto L_10bb31e5;
  /* 10bb31e2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10bb31e5:;
  /* 10bb31e5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb31e9 je 0x10bb31fc */
  if (C.zf) goto L_10bb31fc;
  /* 10bb31eb mov eax, dword ptr [0x10bb831c] */
  EAX = (r32((uint32_t)(0x10bb831c)));
  /* 10bb31f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb31f2 je 0x10bb31fc */
  if (C.zf) goto L_10bb31fc;
  /* 10bb31f4 push edi */
  push32((uint32_t)(EDI));
  /* 10bb31f5 push esi */
  push32((uint32_t)(ESI));
  /* 10bb31f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb31f7 call eax */
  call_ind((uint32_t)(EAX), 0x10bb31f9u);
  /* 10bb31f9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10bb31fc:;
  /* 10bb31fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10bb31ff:;
  /* 10bb31ff pop edi */
  EDI = (pop32());
  /* 10bb3200 pop esi */
  ESI = (pop32());
  /* 10bb3201 pop ebx */
  EBX = (pop32());
  /* 10bb3202 pop ebp */
  EBP = (pop32());
  /* 10bb3203 ret 0xc */
  ESPCHK(0x10bb3169u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10bb3206 (48 bytes, 15 insns) */
void f_10bb3206(void) {
  FTRACE(0x10bb3206u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3206 mov eax, dword ptr [0x10bb7db8] */
  EAX = (r32((uint32_t)(0x10bb7db8)));
  /* 10bb320b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb320e je 0x10bb321d */
  if (C.zf) goto L_10bb321d;
  /* 10bb3210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3212 jne 0x10bb3222 */
  if (!C.zf) goto L_10bb3222;
  /* 10bb3214 cmp dword ptr [0x10bb7dbc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7dbc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb321b jne 0x10bb3222 */
  if (!C.zf) goto L_10bb3222;
L_10bb321d:;
  /* 10bb321d call 0x10bb3b75 */
  push32(0x10bb3222u); f_10bb3b75();
L_10bb3222:;
  /* 10bb3222 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bb3226 call 0x10bb3bae */
  push32(0x10bb322bu); f_10bb3bae();
  /* 10bb322b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bb3230 call dword ptr [0x10bb76d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb76d4))), 0x10bb3236u);
  /* 10bb3236 pop ecx */
  ECX = (pop32());
  /* 10bb3237 pop ecx */
  ECX = (pop32());
  /* 10bb3238 ret  */
  ESPCHK(0x10bb3206u, _esp0);
  ESP += 4; return;
}

/* FUN_10003239 @ 0x10bb3239 (45 bytes, 12 insns) */
void f_10bb3239(void) {
  FTRACE(0x10bb3239u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3239 mov eax, dword ptr [0x10bb8314] */
  EAX = (r32((uint32_t)(0x10bb8314)));
  /* 10bb323e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3240 je 0x10bb3244 */
  if (C.zf) goto L_10bb3244;
  /* 10bb3242 call eax */
  call_ind((uint32_t)(EAX), 0x10bb3244u);
L_10bb3244:;
  /* 10bb3244 push 0x10bb7010 */
  push32((uint32_t)(0x10bb7010u));
  /* 10bb3249 push 0x10bb7008 */
  push32((uint32_t)(0x10bb7008u));
  /* 10bb324e call 0x10bb333d */
  push32(0x10bb3253u); f_10bb333d();
  /* 10bb3253 push 0x10bb7004 */
  push32((uint32_t)(0x10bb7004u));
  /* 10bb3258 push 0x10bb7000 */
  push32((uint32_t)(0x10bb7000u));
  /* 10bb325d call 0x10bb333d */
  push32(0x10bb3262u); f_10bb333d();
  /* 10bb3262 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3265 ret  */
  ESPCHK(0x10bb3239u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10bb3266 (17 bytes, 6 insns) */
void f_10bb3266(void) {
  FTRACE(0x10bb3266u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3266 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3268 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb326a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10bb326e call 0x10bb3286 */
  push32(0x10bb3273u); f_10bb3286();
  /* 10bb3273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3276 ret  */
  ESPCHK(0x10bb3266u, _esp0);
  ESP += 4; return;
}

/* FUN_10003277 @ 0x10bb3277 (15 bytes, 6 insns) */
void f_10bb3277(void) {
  FTRACE(0x10bb3277u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3277 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb3279 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb327b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb327d call 0x10bb3286 */
  push32(0x10bb3282u); f_10bb3286();
  /* 10bb3282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3285 ret  */
  ESPCHK(0x10bb3277u, _esp0);
  ESP += 4; return;
}

/* FUN_10003286 @ 0x10bb3286 (163 bytes, 53 insns) */
void f_10bb3286(void) {
  FTRACE(0x10bb3286u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3286 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3287 call 0x10bb332b */
  push32(0x10bb328cu); f_10bb332b();
  /* 10bb328c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb328e pop edi */
  EDI = (pop32());
  /* 10bb328f cmp dword ptr [0x10bb7e00], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bb7e00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3295 jne 0x10bb32a8 */
  if (!C.zf) goto L_10bb32a8;
  /* 10bb3297 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10bb329b call dword ptr [0x10bb6094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6094))), 0x10bb32a1u);
  /* 10bb32a1 push eax */
  push32((uint32_t)(EAX));
  /* 10bb32a2 call dword ptr [0x10bb6098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6098))), 0x10bb32a8u);
L_10bb32a8:;
  /* 10bb32a8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb32ad push ebx */
  push32((uint32_t)(EBX));
  /* 10bb32ae mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10bb32b2 mov dword ptr [0x10bb7dfc], edi */
  w32((uint32_t)(0x10bb7dfc), (EDI));
  /* 10bb32b8 mov byte ptr [0x10bb7df8], bl */
  w8((uint32_t)(0x10bb7df8), (BL));
  /* 10bb32be jne 0x10bb32fc */
  if (!C.zf) goto L_10bb32fc;
  /* 10bb32c0 mov eax, dword ptr [0x10bb8310] */
  EAX = (r32((uint32_t)(0x10bb8310)));
  /* 10bb32c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb32c7 je 0x10bb32eb */
  if (C.zf) goto L_10bb32eb;
  /* 10bb32c9 mov ecx, dword ptr [0x10bb830c] */
  ECX = (r32((uint32_t)(0x10bb830c)));
  /* 10bb32cf push esi */
  push32((uint32_t)(ESI));
  /* 10bb32d0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10bb32d3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb32d5 jb 0x10bb32ea */
  if (C.cf) goto L_10bb32ea;
L_10bb32d7:;
  /* 10bb32d7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bb32d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb32db je 0x10bb32df */
  if (C.zf) goto L_10bb32df;
  /* 10bb32dd call eax */
  call_ind((uint32_t)(EAX), 0x10bb32dfu);
L_10bb32df:;
  /* 10bb32df sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb32e2 cmp esi, dword ptr [0x10bb8310] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10bb8310))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb32e8 jae 0x10bb32d7 */
  if (!C.cf) goto L_10bb32d7;
L_10bb32ea:;
  /* 10bb32ea pop esi */
  ESI = (pop32());
L_10bb32eb:;
  /* 10bb32eb push 0x10bb7018 */
  push32((uint32_t)(0x10bb7018u));
  /* 10bb32f0 push 0x10bb7014 */
  push32((uint32_t)(0x10bb7014u));
  /* 10bb32f5 call 0x10bb333d */
  push32(0x10bb32fau); f_10bb333d();
  /* 10bb32fa pop ecx */
  ECX = (pop32());
  /* 10bb32fb pop ecx */
  ECX = (pop32());
L_10bb32fc:;
  /* 10bb32fc push 0x10bb7020 */
  push32((uint32_t)(0x10bb7020u));
  /* 10bb3301 push 0x10bb701c */
  push32((uint32_t)(0x10bb701cu));
  /* 10bb3306 call 0x10bb333d */
  push32(0x10bb330bu); f_10bb333d();
  /* 10bb330b pop ecx */
  ECX = (pop32());
  /* 10bb330c pop ecx */
  ECX = (pop32());
  /* 10bb330d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bb330f pop ebx */
  EBX = (pop32());
  /* 10bb3310 je 0x10bb3319 */
  if (C.zf) goto L_10bb3319;
  /* 10bb3312 call 0x10bb3334 */
  push32(0x10bb3317u); f_10bb3334();
  /* 10bb3317 pop edi */
  EDI = (pop32());
  /* 10bb3318 ret  */
  ESPCHK(0x10bb3286u, _esp0);
  ESP += 4; return;
L_10bb3319:;
  /* 10bb3319 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10bb331d mov dword ptr [0x10bb7e00], edi */
  w32((uint32_t)(0x10bb7e00), (EDI));
  /* 10bb3323 call dword ptr [0x10bb6004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6004))), 0x10bb3329u);
  /* 10bb3329 pop edi */
  EDI = (pop32());
  /* 10bb332a ret  */
  ESPCHK(0x10bb3286u, _esp0);
  ESP += 4; return;
}

/* FUN_1000332b @ 0x10bb332b (9 bytes, 4 insns) */
void f_10bb332b(void) {
  FTRACE(0x10bb332bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb332b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bb332d call 0x10bb3d96 */
  push32(0x10bb3332u); f_10bb3d96();
  /* 10bb3332 pop ecx */
  ECX = (pop32());
  /* 10bb3333 ret  */
  ESPCHK(0x10bb332bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003334 @ 0x10bb3334 (9 bytes, 4 insns) */
void f_10bb3334(void) {
  FTRACE(0x10bb3334u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3334 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bb3336 call 0x10bb3df7 */
  push32(0x10bb333bu); f_10bb3df7();
  /* 10bb333b pop ecx */
  ECX = (pop32());
  /* 10bb333c ret  */
  ESPCHK(0x10bb3334u, _esp0);
  ESP += 4; return;
}

/* FUN_1000333d @ 0x10bb333d (26 bytes, 12 insns) */
void f_10bb333d(void) {
  FTRACE(0x10bb333du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb333d push esi */
  push32((uint32_t)(ESI));
  /* 10bb333e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10bb3342:;
  /* 10bb3342 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3346 jae 0x10bb3355 */
  if (!C.cf) goto L_10bb3355;
  /* 10bb3348 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bb334a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb334c je 0x10bb3350 */
  if (C.zf) goto L_10bb3350;
  /* 10bb334e call eax */
  call_ind((uint32_t)(EAX), 0x10bb3350u);
L_10bb3350:;
  /* 10bb3350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3353 jmp 0x10bb3342 */
  goto L_10bb3342;
L_10bb3355:;
  /* 10bb3355 pop esi */
  ESI = (pop32());
  /* 10bb3356 ret  */
  ESPCHK(0x10bb333du, _esp0);
  ESP += 4; return;
}

/* FUN_10003357 @ 0x10bb3357 (84 bytes, 32 insns) */
void f_10bb3357(void) {
  FTRACE(0x10bb3357u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3357 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3358 call 0x10bb3d01 */
  push32(0x10bb335du); f_10bb3d01();
  /* 10bb335d call dword ptr [0x10bb60a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60a4))), 0x10bb3363u);
  /* 10bb3363 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3366 mov dword ptr [0x10bb76d8], eax */
  w32((uint32_t)(0x10bb76d8), (EAX));
  /* 10bb336b je 0x10bb33a7 */
  if (C.zf) goto L_10bb33a7;
  /* 10bb336d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10bb336f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb3371 call 0x10bb3e0c */
  push32(0x10bb3376u); f_10bb3e0c();
  /* 10bb3376 mov esi, eax */
  ESI = (EAX);
  /* 10bb3378 pop ecx */
  ECX = (pop32());
  /* 10bb3379 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb337b pop ecx */
  ECX = (pop32());
  /* 10bb337c je 0x10bb33a7 */
  if (C.zf) goto L_10bb33a7;
  /* 10bb337e push esi */
  push32((uint32_t)(ESI));
  /* 10bb337f push dword ptr [0x10bb76d8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb76d8))));
  /* 10bb3385 call dword ptr [0x10bb60a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60a0))), 0x10bb338bu);
  /* 10bb338b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb338d je 0x10bb33a7 */
  if (C.zf) goto L_10bb33a7;
  /* 10bb338f push esi */
  push32((uint32_t)(ESI));
  /* 10bb3390 call 0x10bb33c9 */
  push32(0x10bb3395u); f_10bb33c9();
  /* 10bb3395 pop ecx */
  ECX = (pop32());
  /* 10bb3396 call dword ptr [0x10bb60a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60a8))), 0x10bb339cu);
  /* 10bb339c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10bb33a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb33a2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10bb33a4 pop eax */
  EAX = (pop32());
  /* 10bb33a5 pop esi */
  ESI = (pop32());
  /* 10bb33a6 ret  */
  ESPCHK(0x10bb3357u, _esp0);
  ESP += 4; return;
L_10bb33a7:;
  /* 10bb33a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb33a9 pop esi */
  ESI = (pop32());
  /* 10bb33aa ret  */
  ESPCHK(0x10bb3357u, _esp0);
  ESP += 4; return;
}

/* FUN_100033ab @ 0x10bb33ab (30 bytes, 8 insns) */
void f_10bb33ab(void) {
  FTRACE(0x10bb33abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb33ab call 0x10bb3d2a */
  push32(0x10bb33b0u); f_10bb3d2a();
  /* 10bb33b0 mov eax, dword ptr [0x10bb76d8] */
  EAX = (r32((uint32_t)(0x10bb76d8)));
  /* 10bb33b5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb33b8 je 0x10bb33c8 */
  if (C.zf) goto L_10bb33c8;
  /* 10bb33ba push eax */
  push32((uint32_t)(EAX));
  /* 10bb33bb call dword ptr [0x10bb608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb608c))), 0x10bb33c1u);
  /* 10bb33c1 or dword ptr [0x10bb76d8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10bb76d8)))|(0xffffffffu); w32((uint32_t)(0x10bb76d8), (_r)); fl_logic(_r,32); }
L_10bb33c8:;
  /* 10bb33c8 ret  */
  ESPCHK(0x10bb33abu, _esp0);
  ESP += 4; return;
}

/* FUN_100033c9 @ 0x10bb33c9 (19 bytes, 4 insns) */
void f_10bb33c9(void) {
  FTRACE(0x10bb33c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb33c9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb33cd mov dword ptr [eax + 0x50], 0x10bb7858 */
  w32((uint32_t)(EAX + 0x50), (0x10bb7858u));
  /* 10bb33d4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10bb33db ret  */
  ESPCHK(0x10bb33c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100033dc @ 0x10bb33dc (160 bytes, 62 insns) */
void f_10bb33dc(void) {
  FTRACE(0x10bb33dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb33dc mov eax, dword ptr [0x10bb76d8] */
  EAX = (r32((uint32_t)(0x10bb76d8)));
  /* 10bb33e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb33e4 je 0x10bb347b */
  if (C.zf) goto L_10bb347b;
  /* 10bb33ea push esi */
  push32((uint32_t)(ESI));
  /* 10bb33eb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb33ef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb33f1 jne 0x10bb3400 */
  if (!C.zf) goto L_10bb3400;
  /* 10bb33f3 push eax */
  push32((uint32_t)(EAX));
  /* 10bb33f4 call dword ptr [0x10bb6090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6090))), 0x10bb33fau);
  /* 10bb33fa mov esi, eax */
  ESI = (EAX);
  /* 10bb33fc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb33fe je 0x10bb346c */
  if (C.zf) goto L_10bb346c;
L_10bb3400:;
  /* 10bb3400 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10bb3403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3405 je 0x10bb340e */
  if (C.zf) goto L_10bb340e;
  /* 10bb3407 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3408 call 0x10bb3e99 */
  push32(0x10bb340du); f_10bb3e99();
  /* 10bb340d pop ecx */
  ECX = (pop32());
L_10bb340e:;
  /* 10bb340e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10bb3411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3413 je 0x10bb341c */
  if (C.zf) goto L_10bb341c;
  /* 10bb3415 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3416 call 0x10bb3e99 */
  push32(0x10bb341bu); f_10bb3e99();
  /* 10bb341b pop ecx */
  ECX = (pop32());
L_10bb341c:;
  /* 10bb341c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10bb341f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3421 je 0x10bb342a */
  if (C.zf) goto L_10bb342a;
  /* 10bb3423 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3424 call 0x10bb3e99 */
  push32(0x10bb3429u); f_10bb3e99();
  /* 10bb3429 pop ecx */
  ECX = (pop32());
L_10bb342a:;
  /* 10bb342a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10bb342d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb342f je 0x10bb3438 */
  if (C.zf) goto L_10bb3438;
  /* 10bb3431 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3432 call 0x10bb3e99 */
  push32(0x10bb3437u); f_10bb3e99();
  /* 10bb3437 pop ecx */
  ECX = (pop32());
L_10bb3438:;
  /* 10bb3438 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10bb343b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb343d je 0x10bb3446 */
  if (C.zf) goto L_10bb3446;
  /* 10bb343f push eax */
  push32((uint32_t)(EAX));
  /* 10bb3440 call 0x10bb3e99 */
  push32(0x10bb3445u); f_10bb3e99();
  /* 10bb3445 pop ecx */
  ECX = (pop32());
L_10bb3446:;
  /* 10bb3446 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10bb3449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb344b je 0x10bb3454 */
  if (C.zf) goto L_10bb3454;
  /* 10bb344d push eax */
  push32((uint32_t)(EAX));
  /* 10bb344e call 0x10bb3e99 */
  push32(0x10bb3453u); f_10bb3e99();
  /* 10bb3453 pop ecx */
  ECX = (pop32());
L_10bb3454:;
  /* 10bb3454 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10bb3457 cmp eax, 0x10bb7858 */
  { uint32_t _a=(EAX),_b=(0x10bb7858u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb345c je 0x10bb3465 */
  if (C.zf) goto L_10bb3465;
  /* 10bb345e push eax */
  push32((uint32_t)(EAX));
  /* 10bb345f call 0x10bb3e99 */
  push32(0x10bb3464u); f_10bb3e99();
  /* 10bb3464 pop ecx */
  ECX = (pop32());
L_10bb3465:;
  /* 10bb3465 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3466 call 0x10bb3e99 */
  push32(0x10bb346bu); f_10bb3e99();
  /* 10bb346b pop ecx */
  ECX = (pop32());
L_10bb346c:;
  /* 10bb346c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb346e push dword ptr [0x10bb76d8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb76d8))));
  /* 10bb3474 call dword ptr [0x10bb60a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb60a0))), 0x10bb347au);
  /* 10bb347a pop esi */
  ESI = (pop32());
L_10bb347b:;
  /* 10bb347b ret  */
  ESPCHK(0x10bb33dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000347c @ 0x10bb347c (444 bytes, 150 insns) */
void f_10bb347c(void) {
  FTRACE(0x10bb347cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb347c push ebp */
  push32((uint32_t)(EBP));
  /* 10bb347d mov ebp, esp */
  EBP = (ESP);
  /* 10bb347f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb3482 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3483 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3484 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3485 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bb348a call 0x10bb3ee1 */
  push32(0x10bb348fu); f_10bb3ee1();
  /* 10bb348f mov esi, eax */
  ESI = (EAX);
  /* 10bb3491 pop ecx */
  ECX = (pop32());
  /* 10bb3492 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3494 jne 0x10bb349e */
  if (!C.zf) goto L_10bb349e;
  /* 10bb3496 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bb3498 call 0x10bb3206 */
  push32(0x10bb349du); f_10bb3206();
  /* 10bb349d pop ecx */
  ECX = (pop32());
L_10bb349e:;
  /* 10bb349e mov dword ptr [0x10bb8200], esi */
  w32((uint32_t)(0x10bb8200), (ESI));
  /* 10bb34a4 mov dword ptr [0x10bb8300], 0x20 */
  w32((uint32_t)(0x10bb8300), (0x20u));
  /* 10bb34ae lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10bb34b4:;
  /* 10bb34b4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb34b6 jae 0x10bb34d6 */
  if (!C.cf) goto L_10bb34d6;
  /* 10bb34b8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bb34bc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10bb34bf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bb34c3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10bb34c7 mov eax, dword ptr [0x10bb8200] */
  EAX = (r32((uint32_t)(0x10bb8200)));
  /* 10bb34cc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb34cf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb34d4 jmp 0x10bb34b4 */
  goto L_10bb34b4;
L_10bb34d6:;
  /* 10bb34d6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10bb34d9 push eax */
  push32((uint32_t)(EAX));
  /* 10bb34da call dword ptr [0x10bb6084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6084))), 0x10bb34e0u);
  /* 10bb34e0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bb34e5 je 0x10bb35bc */
  if (C.zf) goto L_10bb35bc;
  /* 10bb34eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bb34ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb34f0 je 0x10bb35bc */
  if (C.zf) goto L_10bb35bc;
  /* 10bb34f6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10bb34f8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10bb34fb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10bb34fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bb3501 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10bb3506 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3508 jl 0x10bb350c */
  if ((C.sf!=C.of)) goto L_10bb350c;
  /* 10bb350a mov edi, eax */
  EDI = (EAX);
L_10bb350c:;
  /* 10bb350c cmp dword ptr [0x10bb8300], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bb8300))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3512 jge 0x10bb356a */
  if ((C.sf==C.of)) goto L_10bb356a;
  /* 10bb3514 mov esi, 0x10bb8204 */
  ESI = (0x10bb8204u);
L_10bb3519:;
  /* 10bb3519 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bb351e call 0x10bb3ee1 */
  push32(0x10bb3523u); f_10bb3ee1();
  /* 10bb3523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3525 pop ecx */
  ECX = (pop32());
  /* 10bb3526 je 0x10bb3564 */
  if (C.zf) goto L_10bb3564;
  /* 10bb3528 add dword ptr [0x10bb8300], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10bb8300))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10bb8300), (_r)); fl_add(_a,_b,_r,32); }
  /* 10bb352f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10bb3531 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10bb3537:;
  /* 10bb3537 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3539 jae 0x10bb3557 */
  if (!C.cf) goto L_10bb3557;
  /* 10bb353b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bb353f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10bb3542 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bb3546 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10bb354a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10bb354c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb354f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3555 jmp 0x10bb3537 */
  goto L_10bb3537;
L_10bb3557:;
  /* 10bb3557 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb355a cmp dword ptr [0x10bb8300], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bb8300))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3560 jl 0x10bb3519 */
  if ((C.sf!=C.of)) goto L_10bb3519;
  /* 10bb3562 jmp 0x10bb356a */
  goto L_10bb356a;
L_10bb3564:;
  /* 10bb3564 mov edi, dword ptr [0x10bb8300] */
  EDI = (r32((uint32_t)(0x10bb8300)));
L_10bb356a:;
  /* 10bb356a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bb356c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb356e jle 0x10bb35bc */
  if ((C.zf||C.sf!=C.of)) goto L_10bb35bc;
L_10bb3570:;
  /* 10bb3570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb3573 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bb3575 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3578 je 0x10bb35b2 */
  if (C.zf) goto L_10bb35b2;
  /* 10bb357a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10bb357c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10bb357e je 0x10bb35b2 */
  if (C.zf) goto L_10bb35b2;
  /* 10bb3580 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10bb3582 jne 0x10bb358f */
  if (!C.zf) goto L_10bb358f;
  /* 10bb3584 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb3585 call dword ptr [0x10bb607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb607c))), 0x10bb358bu);
  /* 10bb358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb358d je 0x10bb35b2 */
  if (C.zf) goto L_10bb35b2;
L_10bb358f:;
  /* 10bb358f mov ecx, esi */
  ECX = (ESI);
  /* 10bb3591 mov eax, esi */
  EAX = (ESI);
  /* 10bb3593 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bb3596 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3599 mov ecx, dword ptr [ecx*4 + 0x10bb8200] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10bb8200)));
  /* 10bb35a0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10bb35a3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10bb35a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb35a9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10bb35ab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bb35ad mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10bb35af mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10bb35b2:;
  /* 10bb35b2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10bb35b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb35b7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bb35b8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb35ba jl 0x10bb3570 */
  if ((C.sf!=C.of)) goto L_10bb3570;
L_10bb35bc:;
  /* 10bb35bc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10bb35be:;
  /* 10bb35be mov ecx, dword ptr [0x10bb8200] */
  ECX = (r32((uint32_t)(0x10bb8200)));
  /* 10bb35c4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10bb35c7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb35cb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10bb35ce jne 0x10bb361d */
  if (!C.zf) goto L_10bb361d;
  /* 10bb35d0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bb35d2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10bb35d6 jne 0x10bb35dd */
  if (!C.zf) goto L_10bb35dd;
  /* 10bb35d8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10bb35da pop eax */
  EAX = (pop32());
  /* 10bb35db jmp 0x10bb35e7 */
  goto L_10bb35e7;
L_10bb35dd:;
  /* 10bb35dd mov eax, ebx */
  EAX = (EBX);
  /* 10bb35df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bb35e0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bb35e2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb35e4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bb35e7:;
  /* 10bb35e7 push eax */
  push32((uint32_t)(EAX));
  /* 10bb35e8 call dword ptr [0x10bb6080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6080))), 0x10bb35eeu);
  /* 10bb35ee mov edi, eax */
  EDI = (EAX);
  /* 10bb35f0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb35f3 je 0x10bb360c */
  if (C.zf) goto L_10bb360c;
  /* 10bb35f5 push edi */
  push32((uint32_t)(EDI));
  /* 10bb35f6 call dword ptr [0x10bb607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb607c))), 0x10bb35fcu);
  /* 10bb35fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb35fe je 0x10bb360c */
  if (C.zf) goto L_10bb360c;
  /* 10bb3600 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3605 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bb3607 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb360a jne 0x10bb3612 */
  if (!C.zf) goto L_10bb3612;
L_10bb360c:;
  /* 10bb360c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bb3610 jmp 0x10bb3621 */
  goto L_10bb3621;
L_10bb3612:;
  /* 10bb3612 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3615 jne 0x10bb3621 */
  if (!C.zf) goto L_10bb3621;
  /* 10bb3617 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bb361b jmp 0x10bb3621 */
  goto L_10bb3621;
L_10bb361d:;
  /* 10bb361d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10bb3621:;
  /* 10bb3621 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bb3622 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3625 jl 0x10bb35be */
  if ((C.sf!=C.of)) goto L_10bb35be;
  /* 10bb3627 push dword ptr [0x10bb8300] */
  push32((uint32_t)(r32((uint32_t)(0x10bb8300))));
  /* 10bb362d call dword ptr [0x10bb6088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6088))), 0x10bb3633u);
  /* 10bb3633 pop edi */
  EDI = (pop32());
  /* 10bb3634 pop esi */
  ESI = (pop32());
  /* 10bb3635 pop ebx */
  EBX = (pop32());
  /* 10bb3636 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb3637 ret  */
  ESPCHK(0x10bb347cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003638 @ 0x10bb3638 (84 bytes, 33 insns) */
void f_10bb3638(void) {
  FTRACE(0x10bb3638u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3638 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3639 push esi */
  push32((uint32_t)(ESI));
  /* 10bb363a push edi */
  push32((uint32_t)(EDI));
  /* 10bb363b mov esi, 0x10bb8200 */
  ESI = (0x10bb8200u);
L_10bb3640:;
  /* 10bb3640 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bb3642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3644 je 0x10bb367d */
  if (C.zf) goto L_10bb367d;
  /* 10bb3646 mov edi, eax */
  EDI = (EAX);
  /* 10bb3648 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb364d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb364f jae 0x10bb3672 */
  if (!C.cf) goto L_10bb3672;
  /* 10bb3651 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10bb3654:;
  /* 10bb3654 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3658 je 0x10bb3661 */
  if (C.zf) goto L_10bb3661;
  /* 10bb365a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb365b call dword ptr [0x10bb6074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6074))), 0x10bb3661u);
L_10bb3661:;
  /* 10bb3661 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bb3663 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3666 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb366b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb366e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3670 jb 0x10bb3654 */
  if (C.cf) goto L_10bb3654;
L_10bb3672:;
  /* 10bb3672 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3674 call 0x10bb3e99 */
  push32(0x10bb3679u); f_10bb3e99();
  /* 10bb3679 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10bb367c pop ecx */
  ECX = (pop32());
L_10bb367d:;
  /* 10bb367d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3680 cmp esi, 0x10bb8300 */
  { uint32_t _a=(ESI),_b=(0x10bb8300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3686 jl 0x10bb3640 */
  if ((C.sf!=C.of)) goto L_10bb3640;
  /* 10bb3688 pop edi */
  EDI = (pop32());
  /* 10bb3689 pop esi */
  ESI = (pop32());
  /* 10bb368a pop ebx */
  EBX = (pop32());
  /* 10bb368b ret  */
  ESPCHK(0x10bb3638u, _esp0);
  ESP += 4; return;
}

/* FUN_1000368c @ 0x10bb368c (185 bytes, 71 insns) */
void f_10bb368c(void) {
  FTRACE(0x10bb368cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb368c push ebx */
  push32((uint32_t)(EBX));
  /* 10bb368d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb368f cmp dword ptr [0x10bb8308], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bb8308))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3695 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3696 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3697 jne 0x10bb369e */
  if (!C.zf) goto L_10bb369e;
  /* 10bb3699 call 0x10bb44b3 */
  push32(0x10bb369eu); f_10bb44b3();
L_10bb369e:;
  /* 10bb369e mov esi, dword ptr [0x10bb7db0] */
  ESI = (r32((uint32_t)(0x10bb7db0)));
  /* 10bb36a4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10bb36a6:;
  /* 10bb36a6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb36a8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb36aa je 0x10bb36be */
  if (C.zf) goto L_10bb36be;
  /* 10bb36ac cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb36ae je 0x10bb36b1 */
  if (C.zf) goto L_10bb36b1;
  /* 10bb36b0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10bb36b1:;
  /* 10bb36b1 push esi */
  push32((uint32_t)(ESI));
  /* 10bb36b2 call 0x10bb4060 */
  push32(0x10bb36b7u); f_10bb4060();
  /* 10bb36b7 pop ecx */
  ECX = (pop32());
  /* 10bb36b8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10bb36bc jmp 0x10bb36a6 */
  goto L_10bb36a6;
L_10bb36be:;
  /* 10bb36be lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10bb36c5 push eax */
  push32((uint32_t)(EAX));
  /* 10bb36c6 call 0x10bb3ee1 */
  push32(0x10bb36cbu); f_10bb3ee1();
  /* 10bb36cb mov esi, eax */
  ESI = (EAX);
  /* 10bb36cd pop ecx */
  ECX = (pop32());
  /* 10bb36ce cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb36d0 mov dword ptr [0x10bb7de0], esi */
  w32((uint32_t)(0x10bb7de0), (ESI));
  /* 10bb36d6 jne 0x10bb36e0 */
  if (!C.zf) goto L_10bb36e0;
  /* 10bb36d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb36da call 0x10bb3206 */
  push32(0x10bb36dfu); f_10bb3206();
  /* 10bb36df pop ecx */
  ECX = (pop32());
L_10bb36e0:;
  /* 10bb36e0 mov edi, dword ptr [0x10bb7db0] */
  EDI = (r32((uint32_t)(0x10bb7db0)));
  /* 10bb36e6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb36e8 je 0x10bb3723 */
  if (C.zf) goto L_10bb3723;
  /* 10bb36ea push ebp */
  push32((uint32_t)(EBP));
L_10bb36eb:;
  /* 10bb36eb push edi */
  push32((uint32_t)(EDI));
  /* 10bb36ec call 0x10bb4060 */
  push32(0x10bb36f1u); f_10bb4060();
  /* 10bb36f1 mov ebp, eax */
  EBP = (EAX);
  /* 10bb36f3 pop ecx */
  ECX = (pop32());
  /* 10bb36f4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10bb36f5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb36f8 je 0x10bb371c */
  if (C.zf) goto L_10bb371c;
  /* 10bb36fa push ebp */
  push32((uint32_t)(EBP));
  /* 10bb36fb call 0x10bb3ee1 */
  push32(0x10bb3700u); f_10bb3ee1();
  /* 10bb3700 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3702 pop ecx */
  ECX = (pop32());
  /* 10bb3703 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10bb3705 jne 0x10bb370f */
  if (!C.zf) goto L_10bb370f;
  /* 10bb3707 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3709 call 0x10bb3206 */
  push32(0x10bb370eu); f_10bb3206();
  /* 10bb370e pop ecx */
  ECX = (pop32());
L_10bb370f:;
  /* 10bb370f push edi */
  push32((uint32_t)(EDI));
  /* 10bb3710 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3712 call 0x10bb3f70 */
  push32(0x10bb3717u); f_10bb3f70();
  /* 10bb3717 pop ecx */
  ECX = (pop32());
  /* 10bb3718 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb371b pop ecx */
  ECX = (pop32());
L_10bb371c:;
  /* 10bb371c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb371e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3720 jne 0x10bb36eb */
  if (!C.zf) goto L_10bb36eb;
  /* 10bb3722 pop ebp */
  EBP = (pop32());
L_10bb3723:;
  /* 10bb3723 push dword ptr [0x10bb7db0] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7db0))));
  /* 10bb3729 call 0x10bb3e99 */
  push32(0x10bb372eu); f_10bb3e99();
  /* 10bb372e pop ecx */
  ECX = (pop32());
  /* 10bb372f mov dword ptr [0x10bb7db0], ebx */
  w32((uint32_t)(0x10bb7db0), (EBX));
  /* 10bb3735 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10bb3737 pop edi */
  EDI = (pop32());
  /* 10bb3738 pop esi */
  ESI = (pop32());
  /* 10bb3739 mov dword ptr [0x10bb8304], 1 */
  w32((uint32_t)(0x10bb8304), (0x1u));
  /* 10bb3743 pop ebx */
  EBX = (pop32());
  /* 10bb3744 ret  */
  ESPCHK(0x10bb368cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003745 @ 0x10bb3745 (153 bytes, 62 insns) */
void f_10bb3745(void) {
  FTRACE(0x10bb3745u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3745 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3746 mov ebp, esp */
  EBP = (ESP);
  /* 10bb3748 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb3749 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb374a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb374b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb374d cmp dword ptr [0x10bb8308], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bb8308))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3753 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3754 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3755 jne 0x10bb375c */
  if (!C.zf) goto L_10bb375c;
  /* 10bb3757 call 0x10bb44b3 */
  push32(0x10bb375cu); f_10bb44b3();
L_10bb375c:;
  /* 10bb375c mov esi, 0x10bb7e04 */
  ESI = (0x10bb7e04u);
  /* 10bb3761 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bb3766 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3767 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3768 call dword ptr [0x10bb6070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6070))), 0x10bb376eu);
  /* 10bb376e mov eax, dword ptr [0x10bb8318] */
  EAX = (r32((uint32_t)(0x10bb8318)));
  /* 10bb3773 mov dword ptr [0x10bb7df0], esi */
  w32((uint32_t)(0x10bb7df0), (ESI));
  /* 10bb3779 mov edi, esi */
  EDI = (ESI);
  /* 10bb377b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb377d je 0x10bb3781 */
  if (C.zf) goto L_10bb3781;
  /* 10bb377f mov edi, eax */
  EDI = (EAX);
L_10bb3781:;
  /* 10bb3781 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bb3784 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3785 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10bb3788 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3789 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb378a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb378b push edi */
  push32((uint32_t)(EDI));
  /* 10bb378c call 0x10bb37de */
  push32(0x10bb3791u); f_10bb37de();
  /* 10bb3791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bb3794 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb3797 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10bb379a push eax */
  push32((uint32_t)(EAX));
  /* 10bb379b call 0x10bb3ee1 */
  push32(0x10bb37a0u); f_10bb3ee1();
  /* 10bb37a0 mov esi, eax */
  ESI = (EAX);
  /* 10bb37a2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb37a5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb37a7 jne 0x10bb37b1 */
  if (!C.zf) goto L_10bb37b1;
  /* 10bb37a9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb37ab call 0x10bb3206 */
  push32(0x10bb37b0u); f_10bb3206();
  /* 10bb37b0 pop ecx */
  ECX = (pop32());
L_10bb37b1:;
  /* 10bb37b1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bb37b4 push eax */
  push32((uint32_t)(EAX));
  /* 10bb37b5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10bb37b8 push eax */
  push32((uint32_t)(EAX));
  /* 10bb37b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb37bc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10bb37bf push eax */
  push32((uint32_t)(EAX));
  /* 10bb37c0 push esi */
  push32((uint32_t)(ESI));
  /* 10bb37c1 push edi */
  push32((uint32_t)(EDI));
  /* 10bb37c2 call 0x10bb37de */
  push32(0x10bb37c7u); f_10bb37de();
  /* 10bb37c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb37ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb37cd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bb37ce mov dword ptr [0x10bb7dd8], esi */
  w32((uint32_t)(0x10bb7dd8), (ESI));
  /* 10bb37d4 pop edi */
  EDI = (pop32());
  /* 10bb37d5 pop esi */
  ESI = (pop32());
  /* 10bb37d6 mov dword ptr [0x10bb7dd4], eax */
  w32((uint32_t)(0x10bb7dd4), (EAX));
  /* 10bb37db pop ebx */
  EBX = (pop32());
  /* 10bb37dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb37dd ret  */
  ESPCHK(0x10bb3745u, _esp0);
  ESP += 4; return;
}

/* FUN_100037de @ 0x10bb37de (436 bytes, 187 insns) */
void f_10bb37de(void) {
  FTRACE(0x10bb37deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb37de push ebp */
  push32((uint32_t)(EBP));
  /* 10bb37df mov ebp, esp */
  EBP = (ESP);
  /* 10bb37e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bb37e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bb37e7 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb37e8 push esi */
  push32((uint32_t)(ESI));
  /* 10bb37e9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bb37ec mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10bb37ef push edi */
  push32((uint32_t)(EDI));
  /* 10bb37f0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb37f3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10bb37f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb37fc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb37fe je 0x10bb3808 */
  if (C.zf) goto L_10bb3808;
  /* 10bb3800 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10bb3802 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3805 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10bb3808:;
  /* 10bb3808 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb380b jne 0x10bb3851 */
  if (!C.zf) goto L_10bb3851;
L_10bb380d:;
  /* 10bb380d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10bb3810 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3811 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3814 je 0x10bb383f */
  if (C.zf) goto L_10bb383f;
  /* 10bb3816 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb3818 je 0x10bb383f */
  if (C.zf) goto L_10bb383f;
  /* 10bb381a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10bb381d test byte ptr [edx + 0x10bb80e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10bb80e1)))&(0x4u); fl_logic(_r,8); }
  /* 10bb3824 je 0x10bb3832 */
  if (C.zf) goto L_10bb3832;
  /* 10bb3826 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb3828 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb382a je 0x10bb3832 */
  if (C.zf) goto L_10bb3832;
  /* 10bb382c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb382e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bb3830 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb3831 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bb3832:;
  /* 10bb3832 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb3834 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3836 je 0x10bb380d */
  if (C.zf) goto L_10bb380d;
  /* 10bb3838 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb383a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bb383c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb383d jmp 0x10bb380d */
  goto L_10bb380d;
L_10bb383f:;
  /* 10bb383f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb3841 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3843 je 0x10bb3849 */
  if (C.zf) goto L_10bb3849;
  /* 10bb3845 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10bb3848 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bb3849:;
  /* 10bb3849 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb384c jne 0x10bb3894 */
  if (!C.zf) goto L_10bb3894;
  /* 10bb384e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb384f jmp 0x10bb3894 */
  goto L_10bb3894;
L_10bb3851:;
  /* 10bb3851 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb3853 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3855 je 0x10bb385c */
  if (C.zf) goto L_10bb385c;
  /* 10bb3857 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb3859 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bb385b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bb385c:;
  /* 10bb385c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb385e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb385f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10bb3862 test byte ptr [ebx + 0x10bb80e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10bb80e1)))&(0x4u); fl_logic(_r,8); }
  /* 10bb3869 je 0x10bb3877 */
  if (C.zf) goto L_10bb3877;
  /* 10bb386b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb386d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb386f je 0x10bb3876 */
  if (C.zf) goto L_10bb3876;
  /* 10bb3871 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10bb3873 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10bb3875 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bb3876:;
  /* 10bb3876 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bb3877:;
  /* 10bb3877 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb387a je 0x10bb3885 */
  if (C.zf) goto L_10bb3885;
  /* 10bb387c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb387e je 0x10bb3889 */
  if (C.zf) goto L_10bb3889;
  /* 10bb3880 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3883 jne 0x10bb3851 */
  if (!C.zf) goto L_10bb3851;
L_10bb3885:;
  /* 10bb3885 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb3887 jne 0x10bb388c */
  if (!C.zf) goto L_10bb388c;
L_10bb3889:;
  /* 10bb3889 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bb388a jmp 0x10bb3894 */
  goto L_10bb3894;
L_10bb388c:;
  /* 10bb388c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb388e je 0x10bb3894 */
  if (C.zf) goto L_10bb3894;
  /* 10bb3890 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10bb3894:;
  /* 10bb3894 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10bb3898:;
  /* 10bb3898 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb389b je 0x10bb3981 */
  if (C.zf) goto L_10bb3981;
L_10bb38a1:;
  /* 10bb38a1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb38a3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb38a6 je 0x10bb38ad */
  if (C.zf) goto L_10bb38ad;
  /* 10bb38a8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb38ab jne 0x10bb38b0 */
  if (!C.zf) goto L_10bb38b0;
L_10bb38ad:;
  /* 10bb38ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb38ae jmp 0x10bb38a1 */
  goto L_10bb38a1;
L_10bb38b0:;
  /* 10bb38b0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb38b3 je 0x10bb3981 */
  if (C.zf) goto L_10bb3981;
  /* 10bb38b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb38bb je 0x10bb38c5 */
  if (C.zf) goto L_10bb38c5;
  /* 10bb38bd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10bb38bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb38c2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10bb38c5:;
  /* 10bb38c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bb38c8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10bb38ca:;
  /* 10bb38ca mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10bb38d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10bb38d3:;
  /* 10bb38d3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb38d6 jne 0x10bb38dc */
  if (!C.zf) goto L_10bb38dc;
  /* 10bb38d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb38d9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bb38da jmp 0x10bb38d3 */
  goto L_10bb38d3;
L_10bb38dc:;
  /* 10bb38dc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb38df jne 0x10bb390d */
  if (!C.zf) goto L_10bb390d;
  /* 10bb38e1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10bb38e4 jne 0x10bb390b */
  if (!C.zf) goto L_10bb390b;
  /* 10bb38e6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb38e8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb38eb je 0x10bb38fa */
  if (C.zf) goto L_10bb38fa;
  /* 10bb38ed cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb38f1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10bb38f4 jne 0x10bb38fa */
  if (!C.zf) goto L_10bb38fa;
  /* 10bb38f6 mov eax, edx */
  EAX = (EDX);
  /* 10bb38f8 jmp 0x10bb38fd */
  goto L_10bb38fd;
L_10bb38fa:;
  /* 10bb38fa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10bb38fd:;
  /* 10bb38fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb3900 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb3902 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3905 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10bb3908 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10bb390b:;
  /* 10bb390b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10bb390d:;
  /* 10bb390d mov edx, ebx */
  EDX = (EBX);
  /* 10bb390f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bb3910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bb3912 je 0x10bb3922 */
  if (C.zf) goto L_10bb3922;
  /* 10bb3914 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10bb3915:;
  /* 10bb3915 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3917 je 0x10bb391d */
  if (C.zf) goto L_10bb391d;
  /* 10bb3919 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10bb391c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bb391d:;
  /* 10bb391d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb391f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bb3920 jne 0x10bb3915 */
  if (!C.zf) goto L_10bb3915;
L_10bb3922:;
  /* 10bb3922 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb3924 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb3926 je 0x10bb3972 */
  if (C.zf) goto L_10bb3972;
  /* 10bb3928 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb392c jne 0x10bb3938 */
  if (!C.zf) goto L_10bb3938;
  /* 10bb392e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3931 je 0x10bb3972 */
  if (C.zf) goto L_10bb3972;
  /* 10bb3933 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3936 je 0x10bb3972 */
  if (C.zf) goto L_10bb3972;
L_10bb3938:;
  /* 10bb3938 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb393c je 0x10bb396c */
  if (C.zf) goto L_10bb396c;
  /* 10bb393e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3940 je 0x10bb395b */
  if (C.zf) goto L_10bb395b;
  /* 10bb3942 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10bb3945 test byte ptr [ebx + 0x10bb80e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10bb80e1)))&(0x4u); fl_logic(_r,8); }
  /* 10bb394c je 0x10bb3954 */
  if (C.zf) goto L_10bb3954;
  /* 10bb394e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bb3950 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb3951 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3952 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10bb3954:;
  /* 10bb3954 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bb3956 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bb3958 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb3959 jmp 0x10bb396a */
  goto L_10bb396a;
L_10bb395b:;
  /* 10bb395b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10bb395e test byte ptr [edx + 0x10bb80e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10bb80e1)))&(0x4u); fl_logic(_r,8); }
  /* 10bb3965 je 0x10bb396a */
  if (C.zf) goto L_10bb396a;
  /* 10bb3967 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3968 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10bb396a:;
  /* 10bb396a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10bb396c:;
  /* 10bb396c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb396d jmp 0x10bb38ca */
  goto L_10bb38ca;
L_10bb3972:;
  /* 10bb3972 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3974 je 0x10bb397a */
  if (C.zf) goto L_10bb397a;
  /* 10bb3976 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10bb3979 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bb397a:;
  /* 10bb397a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bb397c jmp 0x10bb3898 */
  goto L_10bb3898;
L_10bb3981:;
  /* 10bb3981 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb3983 je 0x10bb3988 */
  if (C.zf) goto L_10bb3988;
  /* 10bb3985 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10bb3988:;
  /* 10bb3988 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bb398b pop edi */
  EDI = (pop32());
  /* 10bb398c pop esi */
  ESI = (pop32());
  /* 10bb398d pop ebx */
  EBX = (pop32());
  /* 10bb398e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10bb3990 pop ebp */
  EBP = (pop32());
  /* 10bb3991 ret  */
  ESPCHK(0x10bb37deu, _esp0);
  ESP += 4; return;
}

/* FUN_10003992 @ 0x10bb3992 (306 bytes, 132 insns) */
void f_10bb3992(void) {
  FTRACE(0x10bb3992u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3992 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb3993 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb3994 mov eax, dword ptr [0x10bb7f08] */
  EAX = (r32((uint32_t)(0x10bb7f08)));
  /* 10bb3999 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb399a push ebp */
  push32((uint32_t)(EBP));
  /* 10bb399b mov ebp, dword ptr [0x10bb605c] */
  EBP = (r32((uint32_t)(0x10bb605c)));
  /* 10bb39a1 push esi */
  push32((uint32_t)(ESI));
  /* 10bb39a2 push edi */
  push32((uint32_t)(EDI));
  /* 10bb39a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb39a5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bb39a7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb39a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb39ab jne 0x10bb39e0 */
  if (!C.zf) goto L_10bb39e0;
  /* 10bb39ad call ebp */
  call_ind((uint32_t)(EBP), 0x10bb39afu);
  /* 10bb39af mov esi, eax */
  ESI = (EAX);
  /* 10bb39b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb39b3 je 0x10bb39c1 */
  if (C.zf) goto L_10bb39c1;
  /* 10bb39b5 mov dword ptr [0x10bb7f08], 1 */
  w32((uint32_t)(0x10bb7f08), (0x1u));
  /* 10bb39bf jmp 0x10bb39e9 */
  goto L_10bb39e9;
L_10bb39c1:;
  /* 10bb39c1 call dword ptr [0x10bb606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb606c))), 0x10bb39c7u);
  /* 10bb39c7 mov edi, eax */
  EDI = (EAX);
  /* 10bb39c9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb39cb je 0x10bb3abb */
  if (C.zf) goto L_10bb3abb;
  /* 10bb39d1 mov dword ptr [0x10bb7f08], 2 */
  w32((uint32_t)(0x10bb7f08), (0x2u));
  /* 10bb39db jmp 0x10bb3a6f */
  goto L_10bb3a6f;
L_10bb39e0:;
  /* 10bb39e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb39e3 jne 0x10bb3a6a */
  if (!C.zf) goto L_10bb3a6a;
L_10bb39e9:;
  /* 10bb39e9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb39eb jne 0x10bb39f9 */
  if (!C.zf) goto L_10bb39f9;
  /* 10bb39ed call ebp */
  call_ind((uint32_t)(EBP), 0x10bb39efu);
  /* 10bb39ef mov esi, eax */
  ESI = (EAX);
  /* 10bb39f1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb39f3 je 0x10bb3abb */
  if (C.zf) goto L_10bb3abb;
L_10bb39f9:;
  /* 10bb39f9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bb39fc mov eax, esi */
  EAX = (ESI);
  /* 10bb39fe je 0x10bb3a0e */
  if (C.zf) goto L_10bb3a0e;
L_10bb3a00:;
  /* 10bb3a00 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a02 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bb3a05 jne 0x10bb3a00 */
  if (!C.zf) goto L_10bb3a00;
  /* 10bb3a07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a09 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bb3a0c jne 0x10bb3a00 */
  if (!C.zf) goto L_10bb3a00;
L_10bb3a0e:;
  /* 10bb3a0e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb3a10 mov edi, dword ptr [0x10bb6064] */
  EDI = (r32((uint32_t)(0x10bb6064)));
  /* 10bb3a16 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bb3a18 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a19 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a1b push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a1c push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a1d push eax */
  push32((uint32_t)(EAX));
  /* 10bb3a1e push esi */
  push32((uint32_t)(ESI));
  /* 10bb3a1f push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a20 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a21 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10bb3a25 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3a27u);
  /* 10bb3a27 mov ebp, eax */
  EBP = (EAX);
  /* 10bb3a29 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3a2b je 0x10bb3a5f */
  if (C.zf) goto L_10bb3a5f;
  /* 10bb3a2d push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3a2e call 0x10bb3ee1 */
  push32(0x10bb3a33u); f_10bb3ee1();
  /* 10bb3a33 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3a35 pop ecx */
  ECX = (pop32());
  /* 10bb3a36 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10bb3a3a je 0x10bb3a5f */
  if (C.zf) goto L_10bb3a5f;
  /* 10bb3a3c push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a3d push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a3e push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3a3f push eax */
  push32((uint32_t)(EAX));
  /* 10bb3a40 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10bb3a44 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3a45 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a46 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3a47 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3a49u);
  /* 10bb3a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3a4b jne 0x10bb3a5b */
  if (!C.zf) goto L_10bb3a5b;
  /* 10bb3a4d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10bb3a51 call 0x10bb3e99 */
  push32(0x10bb3a56u); f_10bb3e99();
  /* 10bb3a56 pop ecx */
  ECX = (pop32());
  /* 10bb3a57 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10bb3a5b:;
  /* 10bb3a5b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10bb3a5f:;
  /* 10bb3a5f push esi */
  push32((uint32_t)(ESI));
  /* 10bb3a60 call dword ptr [0x10bb6068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6068))), 0x10bb3a66u);
  /* 10bb3a66 mov eax, ebx */
  EAX = (EBX);
  /* 10bb3a68 jmp 0x10bb3abd */
  goto L_10bb3abd;
L_10bb3a6a:;
  /* 10bb3a6a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3a6d jne 0x10bb3abb */
  if (!C.zf) goto L_10bb3abb;
L_10bb3a6f:;
  /* 10bb3a6f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3a71 jne 0x10bb3a7f */
  if (!C.zf) goto L_10bb3a7f;
  /* 10bb3a73 call dword ptr [0x10bb606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb606c))), 0x10bb3a79u);
  /* 10bb3a79 mov edi, eax */
  EDI = (EAX);
  /* 10bb3a7b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3a7d je 0x10bb3abb */
  if (C.zf) goto L_10bb3abb;
L_10bb3a7f:;
  /* 10bb3a7f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3a81 mov eax, edi */
  EAX = (EDI);
  /* 10bb3a83 je 0x10bb3a8f */
  if (C.zf) goto L_10bb3a8f;
L_10bb3a85:;
  /* 10bb3a85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a86 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3a88 jne 0x10bb3a85 */
  if (!C.zf) goto L_10bb3a85;
  /* 10bb3a8a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a8b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb3a8d jne 0x10bb3a85 */
  if (!C.zf) goto L_10bb3a85;
L_10bb3a8f:;
  /* 10bb3a8f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb3a91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3a92 mov ebp, eax */
  EBP = (EAX);
  /* 10bb3a94 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3a95 call 0x10bb3ee1 */
  push32(0x10bb3a9au); f_10bb3ee1();
  /* 10bb3a9a mov esi, eax */
  ESI = (EAX);
  /* 10bb3a9c pop ecx */
  ECX = (pop32());
  /* 10bb3a9d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3a9f jne 0x10bb3aa5 */
  if (!C.zf) goto L_10bb3aa5;
  /* 10bb3aa1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bb3aa3 jmp 0x10bb3ab0 */
  goto L_10bb3ab0;
L_10bb3aa5:;
  /* 10bb3aa5 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3aa6 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3aa7 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3aa8 call 0x10bb44d0 */
  push32(0x10bb3aadu); f_10bb44d0();
  /* 10bb3aad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb3ab0:;
  /* 10bb3ab0 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3ab1 call dword ptr [0x10bb6078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6078))), 0x10bb3ab7u);
  /* 10bb3ab7 mov eax, esi */
  EAX = (ESI);
  /* 10bb3ab9 jmp 0x10bb3abd */
  goto L_10bb3abd;
L_10bb3abb:;
  /* 10bb3abb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bb3abd:;
  /* 10bb3abd pop edi */
  EDI = (pop32());
  /* 10bb3abe pop esi */
  ESI = (pop32());
  /* 10bb3abf pop ebp */
  EBP = (pop32());
  /* 10bb3ac0 pop ebx */
  EBX = (pop32());
  /* 10bb3ac1 pop ecx */
  ECX = (pop32());
  /* 10bb3ac2 pop ecx */
  ECX = (pop32());
  /* 10bb3ac3 ret  */
  ESPCHK(0x10bb3992u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac4 @ 0x10bb3ac4 (60 bytes, 20 insns) */
void f_10bb3ac4(void) {
  FTRACE(0x10bb3ac4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3ac8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3acc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bb3ad1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10bb3ad4 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3ad5 call dword ptr [0x10bb6060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6060))), 0x10bb3adbu);
  /* 10bb3adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3add mov dword ptr [0x10bb81e8], eax */
  w32((uint32_t)(0x10bb81e8), (EAX));
  /* 10bb3ae2 je 0x10bb3af9 */
  if (C.zf) goto L_10bb3af9;
  /* 10bb3ae4 call 0x10bb4805 */
  push32(0x10bb3ae9u); f_10bb4805();
  /* 10bb3ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3aeb jne 0x10bb3afc */
  if (!C.zf) goto L_10bb3afc;
  /* 10bb3aed push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3af3 call dword ptr [0x10bb6058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6058))), 0x10bb3af9u);
L_10bb3af9:;
  /* 10bb3af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3afb ret  */
  ESPCHK(0x10bb3ac4u, _esp0);
  ESP += 4; return;
L_10bb3afc:;
  /* 10bb3afc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb3afe pop eax */
  EAX = (pop32());
  /* 10bb3aff ret  */
  ESPCHK(0x10bb3ac4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b00 @ 0x10bb3b00 (117 bytes, 38 insns) */
void f_10bb3b00(void) {
  FTRACE(0x10bb3b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3b00 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3b01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb3b03 cmp dword ptr [0x10bb7fc0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bb7fc0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3b09 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3b0a mov ebp, dword ptr [0x10bb604c] */
  EBP = (r32((uint32_t)(0x10bb604c)));
  /* 10bb3b10 jle 0x10bb3b56 */
  if ((C.zf||C.sf!=C.of)) goto L_10bb3b56;
  /* 10bb3b12 mov eax, dword ptr [0x10bb7fc4] */
  EAX = (r32((uint32_t)(0x10bb7fc4)));
  /* 10bb3b17 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3b18 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3b19 mov edi, dword ptr [0x10bb6050] */
  EDI = (r32((uint32_t)(0x10bb6050)));
  /* 10bb3b1f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10bb3b22:;
  /* 10bb3b22 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bb3b27 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10bb3b2c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3b2e call edi */
  call_ind((uint32_t)(EDI), 0x10bb3b30u);
  /* 10bb3b30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bb3b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3b37 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3b39 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3b3bu);
  /* 10bb3b3b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10bb3b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3b40 push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3b46 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb3b48u);
  /* 10bb3b48 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3b4b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bb3b4c cmp ebx, dword ptr [0x10bb7fc0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bb7fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3b52 jl 0x10bb3b22 */
  if ((C.sf!=C.of)) goto L_10bb3b22;
  /* 10bb3b54 pop edi */
  EDI = (pop32());
  /* 10bb3b55 pop esi */
  ESI = (pop32());
L_10bb3b56:;
  /* 10bb3b56 push dword ptr [0x10bb7fc4] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7fc4))));
  /* 10bb3b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3b5e push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3b64 call ebp */
  call_ind((uint32_t)(EBP), 0x10bb3b66u);
  /* 10bb3b66 push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3b6c call dword ptr [0x10bb6058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6058))), 0x10bb3b72u);
  /* 10bb3b72 pop ebp */
  EBP = (pop32());
  /* 10bb3b73 pop ebx */
  EBX = (pop32());
  /* 10bb3b74 ret  */
  ESPCHK(0x10bb3b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b75 @ 0x10bb3b75 (57 bytes, 18 insns) */
void f_10bb3b75(void) {
  FTRACE(0x10bb3b75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3b75 mov eax, dword ptr [0x10bb7db8] */
  EAX = (r32((uint32_t)(0x10bb7db8)));
  /* 10bb3b7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3b7d je 0x10bb3b8c */
  if (C.zf) goto L_10bb3b8c;
  /* 10bb3b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3b81 jne 0x10bb3bad */
  if (!C.zf) goto L_10bb3bad;
  /* 10bb3b83 cmp dword ptr [0x10bb7dbc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7dbc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3b8a jne 0x10bb3bad */
  if (!C.zf) goto L_10bb3bad;
L_10bb3b8c:;
  /* 10bb3b8c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10bb3b91 call 0x10bb3bae */
  push32(0x10bb3b96u); f_10bb3bae();
  /* 10bb3b96 mov eax, dword ptr [0x10bb7f0c] */
  EAX = (r32((uint32_t)(0x10bb7f0c)));
  /* 10bb3b9b pop ecx */
  ECX = (pop32());
  /* 10bb3b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3b9e je 0x10bb3ba2 */
  if (C.zf) goto L_10bb3ba2;
  /* 10bb3ba0 call eax */
  call_ind((uint32_t)(EAX), 0x10bb3ba2u);
L_10bb3ba2:;
  /* 10bb3ba2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bb3ba7 call 0x10bb3bae */
  push32(0x10bb3bacu); f_10bb3bae();
  /* 10bb3bac pop ecx */
  ECX = (pop32());
L_10bb3bad:;
  /* 10bb3bad ret  */
  ESPCHK(0x10bb3b75u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bae @ 0x10bb3bae (339 bytes, 100 insns) */
void f_10bb3bae(void) {
  FTRACE(0x10bb3baeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3bae push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3baf mov ebp, esp */
  EBP = (ESP);
  /* 10bb3bb1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb3bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb3bba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bb3bbc mov eax, 0x10bb7708 */
  EAX = (0x10bb7708u);
L_10bb3bc1:;
  /* 10bb3bc1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3bc3 je 0x10bb3bd0 */
  if (C.zf) goto L_10bb3bd0;
  /* 10bb3bc5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3bc8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb3bc9 cmp eax, 0x10bb7798 */
  { uint32_t _a=(EAX),_b=(0x10bb7798u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3bce jl 0x10bb3bc1 */
  if ((C.sf!=C.of)) goto L_10bb3bc1;
L_10bb3bd0:;
  /* 10bb3bd0 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3bd1 mov esi, ecx */
  ESI = (ECX);
  /* 10bb3bd3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10bb3bd6 cmp edx, dword ptr [esi + 0x10bb7708] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10bb7708))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3bdc jne 0x10bb3cfe */
  if (!C.zf) goto L_10bb3cfe;
  /* 10bb3be2 mov eax, dword ptr [0x10bb7db8] */
  EAX = (r32((uint32_t)(0x10bb7db8)));
  /* 10bb3be7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3bea je 0x10bb3cd8 */
  if (C.zf) goto L_10bb3cd8;
  /* 10bb3bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3bf2 jne 0x10bb3c01 */
  if (!C.zf) goto L_10bb3c01;
  /* 10bb3bf4 cmp dword ptr [0x10bb7dbc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7dbc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3bfb je 0x10bb3cd8 */
  if (C.zf) goto L_10bb3cd8;
L_10bb3c01:;
  /* 10bb3c01 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3c07 je 0x10bb3cfe */
  if (C.zf) goto L_10bb3cfe;
  /* 10bb3c0d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bb3c13 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bb3c18 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3c1b call dword ptr [0x10bb6070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6070))), 0x10bb3c21u);
  /* 10bb3c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3c23 jne 0x10bb3c38 */
  if (!C.zf) goto L_10bb3c38;
  /* 10bb3c25 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bb3c2b push 0x10bb6448 */
  push32((uint32_t)(0x10bb6448u));
  /* 10bb3c30 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3c31 call 0x10bb3f70 */
  push32(0x10bb3c36u); f_10bb3f70();
  /* 10bb3c36 pop ecx */
  ECX = (pop32());
  /* 10bb3c37 pop ecx */
  ECX = (pop32());
L_10bb3c38:;
  /* 10bb3c38 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bb3c3e push edi */
  push32((uint32_t)(EDI));
  /* 10bb3c3f push eax */
  push32((uint32_t)(EAX));
  /* 10bb3c40 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10bb3c46 call 0x10bb4060 */
  push32(0x10bb3c4bu); f_10bb4060();
  /* 10bb3c4b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb3c4c pop ecx */
  ECX = (pop32());
  /* 10bb3c4d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3c50 jbe 0x10bb3c7b */
  if ((C.cf||C.zf)) goto L_10bb3c7b;
  /* 10bb3c52 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bb3c58 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3c59 call 0x10bb4060 */
  push32(0x10bb3c5eu); f_10bb4060();
  /* 10bb3c5e mov edi, eax */
  EDI = (EAX);
  /* 10bb3c60 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bb3c66 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb3c69 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bb3c6b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3c6d push 0x10bb6444 */
  push32((uint32_t)(0x10bb6444u));
  /* 10bb3c72 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3c73 call 0x10bb50e0 */
  push32(0x10bb3c78u); f_10bb50e0();
  /* 10bb3c78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb3c7b:;
  /* 10bb3c7b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bb3c81 push 0x10bb6428 */
  push32((uint32_t)(0x10bb6428u));
  /* 10bb3c86 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3c87 call 0x10bb3f70 */
  push32(0x10bb3c8cu); f_10bb3f70();
  /* 10bb3c8c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bb3c92 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3c93 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3c94 call 0x10bb3f80 */
  push32(0x10bb3c99u); f_10bb3f80();
  /* 10bb3c99 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bb3c9f push 0x10bb6424 */
  push32((uint32_t)(0x10bb6424u));
  /* 10bb3ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3ca5 call 0x10bb3f80 */
  push32(0x10bb3caau); f_10bb3f80();
  /* 10bb3caa push dword ptr [esi + 0x10bb770c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10bb770c))));
  /* 10bb3cb0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bb3cb6 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3cb7 call 0x10bb3f80 */
  push32(0x10bb3cbcu); f_10bb3f80();
  /* 10bb3cbc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10bb3cc1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bb3cc7 push 0x10bb63fc */
  push32((uint32_t)(0x10bb63fcu));
  /* 10bb3ccc push eax */
  push32((uint32_t)(EAX));
  /* 10bb3ccd call 0x10bb504e */
  push32(0x10bb3cd2u); f_10bb504e();
  /* 10bb3cd2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3cd5 pop edi */
  EDI = (pop32());
  /* 10bb3cd6 jmp 0x10bb3cfe */
  goto L_10bb3cfe;
L_10bb3cd8:;
  /* 10bb3cd8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10bb3cdb lea esi, [esi + 0x10bb770c] */
  ESI = ((uint32_t)(ESI + 0x10bb770c));
  /* 10bb3ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3ce3 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3ce4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3ce6 call 0x10bb4060 */
  push32(0x10bb3cebu); f_10bb4060();
  /* 10bb3ceb pop ecx */
  ECX = (pop32());
  /* 10bb3cec push eax */
  push32((uint32_t)(EAX));
  /* 10bb3ced push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3cef push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10bb3cf1 call dword ptr [0x10bb6080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6080))), 0x10bb3cf7u);
  /* 10bb3cf7 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3cf8 call dword ptr [0x10bb6054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6054))), 0x10bb3cfeu);
L_10bb3cfe:;
  /* 10bb3cfe pop esi */
  ESI = (pop32());
  /* 10bb3cff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb3d00 ret  */
  ESPCHK(0x10bb3baeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d01 @ 0x10bb3d01 (41 bytes, 12 insns) */
void f_10bb3d01(void) {
  FTRACE(0x10bb3d01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3d01 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3d02 mov esi, dword ptr [0x10bb6044] */
  ESI = (r32((uint32_t)(0x10bb6044)));
  /* 10bb3d08 push dword ptr [0x10bb77dc] */
  push32((uint32_t)(r32((uint32_t)(0x10bb77dc))));
  /* 10bb3d0e call esi */
  call_ind((uint32_t)(ESI), 0x10bb3d10u);
  /* 10bb3d10 push dword ptr [0x10bb77cc] */
  push32((uint32_t)(r32((uint32_t)(0x10bb77cc))));
  /* 10bb3d16 call esi */
  call_ind((uint32_t)(ESI), 0x10bb3d18u);
  /* 10bb3d18 push dword ptr [0x10bb77bc] */
  push32((uint32_t)(r32((uint32_t)(0x10bb77bc))));
  /* 10bb3d1e call esi */
  call_ind((uint32_t)(ESI), 0x10bb3d20u);
  /* 10bb3d20 push dword ptr [0x10bb779c] */
  push32((uint32_t)(r32((uint32_t)(0x10bb779c))));
  /* 10bb3d26 call esi */
  call_ind((uint32_t)(ESI), 0x10bb3d28u);
  /* 10bb3d28 pop esi */
  ESI = (pop32());
  /* 10bb3d29 ret  */
  ESPCHK(0x10bb3d01u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d2a @ 0x10bb3d2a (108 bytes, 34 insns) */
void f_10bb3d2a(void) {
  FTRACE(0x10bb3d2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3d2a push esi */
  push32((uint32_t)(ESI));
  /* 10bb3d2b push edi */
  push32((uint32_t)(EDI));
  /* 10bb3d2c mov edi, dword ptr [0x10bb6074] */
  EDI = (r32((uint32_t)(0x10bb6074)));
  /* 10bb3d32 mov esi, 0x10bb7798 */
  ESI = (0x10bb7798u);
L_10bb3d37:;
  /* 10bb3d37 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bb3d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3d3b je 0x10bb3d68 */
  if (C.zf) goto L_10bb3d68;
  /* 10bb3d3d cmp esi, 0x10bb77dc */
  { uint32_t _a=(ESI),_b=(0x10bb77dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3d43 je 0x10bb3d68 */
  if (C.zf) goto L_10bb3d68;
  /* 10bb3d45 cmp esi, 0x10bb77cc */
  { uint32_t _a=(ESI),_b=(0x10bb77ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3d4b je 0x10bb3d68 */
  if (C.zf) goto L_10bb3d68;
  /* 10bb3d4d cmp esi, 0x10bb77bc */
  { uint32_t _a=(ESI),_b=(0x10bb77bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3d53 je 0x10bb3d68 */
  if (C.zf) goto L_10bb3d68;
  /* 10bb3d55 cmp esi, 0x10bb779c */
  { uint32_t _a=(ESI),_b=(0x10bb779cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3d5b je 0x10bb3d68 */
  if (C.zf) goto L_10bb3d68;
  /* 10bb3d5d push eax */
  push32((uint32_t)(EAX));
  /* 10bb3d5e call edi */
  call_ind((uint32_t)(EDI), 0x10bb3d60u);
  /* 10bb3d60 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3d62 call 0x10bb3e99 */
  push32(0x10bb3d67u); f_10bb3e99();
  /* 10bb3d67 pop ecx */
  ECX = (pop32());
L_10bb3d68:;
  /* 10bb3d68 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3d6b cmp esi, 0x10bb7858 */
  { uint32_t _a=(ESI),_b=(0x10bb7858u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3d71 jl 0x10bb3d37 */
  if ((C.sf!=C.of)) goto L_10bb3d37;
  /* 10bb3d73 push dword ptr [0x10bb77bc] */
  push32((uint32_t)(r32((uint32_t)(0x10bb77bc))));
  /* 10bb3d79 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3d7bu);
  /* 10bb3d7b push dword ptr [0x10bb77cc] */
  push32((uint32_t)(r32((uint32_t)(0x10bb77cc))));
  /* 10bb3d81 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3d83u);
  /* 10bb3d83 push dword ptr [0x10bb77dc] */
  push32((uint32_t)(r32((uint32_t)(0x10bb77dc))));
  /* 10bb3d89 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3d8bu);
  /* 10bb3d8b push dword ptr [0x10bb779c] */
  push32((uint32_t)(r32((uint32_t)(0x10bb779c))));
  /* 10bb3d91 call edi */
  call_ind((uint32_t)(EDI), 0x10bb3d93u);
  /* 10bb3d93 pop edi */
  EDI = (pop32());
  /* 10bb3d94 pop esi */
  ESI = (pop32());
  /* 10bb3d95 ret  */
  ESPCHK(0x10bb3d2au, _esp0);
  ESP += 4; return;
}

/* FUN_10003d96 @ 0x10bb3d96 (97 bytes, 37 insns) */
void f_10bb3d96(void) {
  FTRACE(0x10bb3d96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3d96 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3d97 mov ebp, esp */
  EBP = (ESP);
  /* 10bb3d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb3d9c push esi */
  push32((uint32_t)(ESI));
  /* 10bb3d9d cmp dword ptr [eax*4 + 0x10bb7798], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10bb7798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3da5 lea esi, [eax*4 + 0x10bb7798] */
  ESI = ((uint32_t)(EAX*4 + 0x10bb7798));
  /* 10bb3dac jne 0x10bb3dec */
  if (!C.zf) goto L_10bb3dec;
  /* 10bb3dae push edi */
  push32((uint32_t)(EDI));
  /* 10bb3daf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bb3db1 call 0x10bb3ee1 */
  push32(0x10bb3db6u); f_10bb3ee1();
  /* 10bb3db6 mov edi, eax */
  EDI = (EAX);
  /* 10bb3db8 pop ecx */
  ECX = (pop32());
  /* 10bb3db9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb3dbb jne 0x10bb3dc5 */
  if (!C.zf) goto L_10bb3dc5;
  /* 10bb3dbd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bb3dbf call 0x10bb3206 */
  push32(0x10bb3dc4u); f_10bb3206();
  /* 10bb3dc4 pop ecx */
  ECX = (pop32());
L_10bb3dc5:;
  /* 10bb3dc5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bb3dc7 call 0x10bb3d96 */
  push32(0x10bb3dccu); f_10bb3d96();
  /* 10bb3dcc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3dcf pop ecx */
  ECX = (pop32());
  /* 10bb3dd0 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3dd1 jne 0x10bb3ddd */
  if (!C.zf) goto L_10bb3ddd;
  /* 10bb3dd3 call dword ptr [0x10bb6044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6044))), 0x10bb3dd9u);
  /* 10bb3dd9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bb3ddb jmp 0x10bb3de3 */
  goto L_10bb3de3;
L_10bb3ddd:;
  /* 10bb3ddd call 0x10bb3e99 */
  push32(0x10bb3de2u); f_10bb3e99();
  /* 10bb3de2 pop ecx */
  ECX = (pop32());
L_10bb3de3:;
  /* 10bb3de3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bb3de5 call 0x10bb3df7 */
  push32(0x10bb3deau); f_10bb3df7();
  /* 10bb3dea pop ecx */
  ECX = (pop32());
  /* 10bb3deb pop edi */
  EDI = (pop32());
L_10bb3dec:;
  /* 10bb3dec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bb3dee call dword ptr [0x10bb6040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6040))), 0x10bb3df4u);
  /* 10bb3df4 pop esi */
  ESI = (pop32());
  /* 10bb3df5 pop ebp */
  EBP = (pop32());
  /* 10bb3df6 ret  */
  ESPCHK(0x10bb3d96u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df7 @ 0x10bb3df7 (21 bytes, 7 insns) */
void f_10bb3df7(void) {
  FTRACE(0x10bb3df7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3df7 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb3df8 mov ebp, esp */
  EBP = (ESP);
  /* 10bb3dfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb3dfd push dword ptr [eax*4 + 0x10bb7798] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10bb7798))));
  /* 10bb3e04 call dword ptr [0x10bb6048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6048))), 0x10bb3e0au);
  /* 10bb3e0a pop ebp */
  EBP = (pop32());
  /* 10bb3e0b ret  */
  ESPCHK(0x10bb3df7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e0c @ 0x10bb3e0c (141 bytes, 56 insns) */
void f_10bb3e0c(void) {
  FTRACE(0x10bb3e0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3e0c push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3e0d push esi */
  push32((uint32_t)(ESI));
  /* 10bb3e0e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10bb3e12 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3e13 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bb3e18 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3e1b mov ebx, esi */
  EBX = (ESI);
  /* 10bb3e1d ja 0x10bb3e2c */
  if ((!C.cf&&!C.zf)) goto L_10bb3e2c;
  /* 10bb3e1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3e21 jne 0x10bb3e26 */
  if (!C.zf) goto L_10bb3e26;
  /* 10bb3e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb3e25 pop esi */
  ESI = (pop32());
L_10bb3e26:;
  /* 10bb3e26 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3e29 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10bb3e2c:;
  /* 10bb3e2c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb3e2e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3e31 ja 0x10bb3e6d */
  if ((!C.cf&&!C.zf)) goto L_10bb3e6d;
  /* 10bb3e33 cmp ebx, dword ptr [0x10bb79e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bb79e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3e39 ja 0x10bb3e58 */
  if ((!C.cf&&!C.zf)) goto L_10bb3e58;
  /* 10bb3e3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3e3d call 0x10bb3d96 */
  push32(0x10bb3e42u); f_10bb3d96();
  /* 10bb3e42 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3e43 call 0x10bb4b99 */
  push32(0x10bb3e48u); f_10bb4b99();
  /* 10bb3e48 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3e4a mov edi, eax */
  EDI = (EAX);
  /* 10bb3e4c call 0x10bb3df7 */
  push32(0x10bb3e51u); f_10bb3df7();
  /* 10bb3e51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3e54 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb3e56 jne 0x10bb3e83 */
  if (!C.zf) goto L_10bb3e83;
L_10bb3e58:;
  /* 10bb3e58 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3e59 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb3e5b push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3e61 call dword ptr [0x10bb603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb603c))), 0x10bb3e67u);
  /* 10bb3e67 mov edi, eax */
  EDI = (EAX);
  /* 10bb3e69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb3e6b jne 0x10bb3e8f */
  if (!C.zf) goto L_10bb3e8f;
L_10bb3e6d:;
  /* 10bb3e6d cmp dword ptr [0x10bb7f84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7f84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3e74 je 0x10bb3e8f */
  if (C.zf) goto L_10bb3e8f;
  /* 10bb3e76 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3e77 call 0x10bb5238 */
  push32(0x10bb3e7cu); f_10bb5238();
  /* 10bb3e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3e7e pop ecx */
  ECX = (pop32());
  /* 10bb3e7f je 0x10bb3e95 */
  if (C.zf) goto L_10bb3e95;
  /* 10bb3e81 jmp 0x10bb3e2c */
  goto L_10bb3e2c;
L_10bb3e83:;
  /* 10bb3e83 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb3e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3e86 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3e87 call 0x10bb51e0 */
  push32(0x10bb3e8cu); f_10bb51e0();
  /* 10bb3e8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bb3e8f:;
  /* 10bb3e8f mov eax, edi */
  EAX = (EDI);
L_10bb3e91:;
  /* 10bb3e91 pop edi */
  EDI = (pop32());
  /* 10bb3e92 pop esi */
  ESI = (pop32());
  /* 10bb3e93 pop ebx */
  EBX = (pop32());
  /* 10bb3e94 ret  */
  ESPCHK(0x10bb3e0cu, _esp0);
  ESP += 4; return;
L_10bb3e95:;
  /* 10bb3e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3e97 jmp 0x10bb3e91 */
  goto L_10bb3e91;
}

/* FUN_10003e99 @ 0x10bb3e99 (72 bytes, 29 insns) */
void f_10bb3e99(void) {
  FTRACE(0x10bb3e99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3e99 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3e9a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb3e9e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3ea0 je 0x10bb3edf */
  if (C.zf) goto L_10bb3edf;
  /* 10bb3ea2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3ea4 call 0x10bb3d96 */
  push32(0x10bb3ea9u); f_10bb3d96();
  /* 10bb3ea9 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3eaa call 0x10bb4843 */
  push32(0x10bb3eafu); f_10bb4843();
  /* 10bb3eaf pop ecx */
  ECX = (pop32());
  /* 10bb3eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3eb2 pop ecx */
  ECX = (pop32());
  /* 10bb3eb3 je 0x10bb3ec8 */
  if (C.zf) goto L_10bb3ec8;
  /* 10bb3eb5 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3eb6 push eax */
  push32((uint32_t)(EAX));
  /* 10bb3eb7 call 0x10bb486e */
  push32(0x10bb3ebcu); f_10bb486e();
  /* 10bb3ebc push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3ebe call 0x10bb3df7 */
  push32(0x10bb3ec3u); f_10bb3df7();
  /* 10bb3ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3ec6 pop esi */
  ESI = (pop32());
  /* 10bb3ec7 ret  */
  ESPCHK(0x10bb3e99u, _esp0);
  ESP += 4; return;
L_10bb3ec8:;
  /* 10bb3ec8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3eca call 0x10bb3df7 */
  push32(0x10bb3ecfu); f_10bb3df7();
  /* 10bb3ecf pop ecx */
  ECX = (pop32());
  /* 10bb3ed0 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3ed3 push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3ed9 call dword ptr [0x10bb604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb604c))), 0x10bb3edfu);
L_10bb3edf:;
  /* 10bb3edf pop esi */
  ESI = (pop32());
  /* 10bb3ee0 ret  */
  ESPCHK(0x10bb3e99u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10bb3ee1 (18 bytes, 6 insns) */
void f_10bb3ee1(void) {
  FTRACE(0x10bb3ee1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3ee1 push dword ptr [0x10bb7f84] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7f84))));
  /* 10bb3ee7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10bb3eeb call 0x10bb3ef3 */
  push32(0x10bb3ef0u); f_10bb3ef3();
  /* 10bb3ef0 pop ecx */
  ECX = (pop32());
  /* 10bb3ef1 pop ecx */
  ECX = (pop32());
  /* 10bb3ef2 ret  */
  ESPCHK(0x10bb3ee1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10bb3ef3 (44 bytes, 16 insns) */
void f_10bb3ef3(void) {
  FTRACE(0x10bb3ef3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3ef3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3ef8 ja 0x10bb3f1c */
  if ((!C.cf&&!C.zf)) goto L_10bb3f1c;
L_10bb3efa:;
  /* 10bb3efa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bb3efe call 0x10bb3f1f */
  push32(0x10bb3f03u); f_10bb3f1f();
  /* 10bb3f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3f05 pop ecx */
  ECX = (pop32());
  /* 10bb3f06 jne 0x10bb3f1e */
  if (!C.zf) goto L_10bb3f1e;
  /* 10bb3f08 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3f0c je 0x10bb3f1e */
  if (C.zf) goto L_10bb3f1e;
  /* 10bb3f0e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bb3f12 call 0x10bb5238 */
  push32(0x10bb3f17u); f_10bb5238();
  /* 10bb3f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb3f19 pop ecx */
  ECX = (pop32());
  /* 10bb3f1a jne 0x10bb3efa */
  if (!C.zf) goto L_10bb3efa;
L_10bb3f1c:;
  /* 10bb3f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bb3f1e:;
  /* 10bb3f1e ret  */
  ESPCHK(0x10bb3ef3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f1f @ 0x10bb3f1f (78 bytes, 30 insns) */
void f_10bb3f1f(void) {
  FTRACE(0x10bb3f1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3f1f push esi */
  push32((uint32_t)(ESI));
  /* 10bb3f20 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb3f24 cmp esi, dword ptr [0x10bb79e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10bb79e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb3f2a push edi */
  push32((uint32_t)(EDI));
  /* 10bb3f2b ja 0x10bb3f4e */
  if ((!C.cf&&!C.zf)) goto L_10bb3f4e;
  /* 10bb3f2d push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3f2f call 0x10bb3d96 */
  push32(0x10bb3f34u); f_10bb3d96();
  /* 10bb3f34 push esi */
  push32((uint32_t)(ESI));
  /* 10bb3f35 call 0x10bb4b99 */
  push32(0x10bb3f3au); f_10bb4b99();
  /* 10bb3f3a push 9 */
  push32((uint32_t)(0x9u));
  /* 10bb3f3c mov edi, eax */
  EDI = (EAX);
  /* 10bb3f3e call 0x10bb3df7 */
  push32(0x10bb3f43u); f_10bb3df7();
  /* 10bb3f43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3f46 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bb3f48 je 0x10bb3f4e */
  if (C.zf) goto L_10bb3f4e;
  /* 10bb3f4a mov eax, edi */
  EAX = (EDI);
  /* 10bb3f4c jmp 0x10bb3f6a */
  goto L_10bb3f6a;
L_10bb3f4e:;
  /* 10bb3f4e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb3f50 jne 0x10bb3f55 */
  if (!C.zf) goto L_10bb3f55;
  /* 10bb3f52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb3f54 pop esi */
  ESI = (pop32());
L_10bb3f55:;
  /* 10bb3f55 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3f58 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10bb3f5b push esi */
  push32((uint32_t)(ESI));
  /* 10bb3f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb3f5e push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb3f64 call dword ptr [0x10bb603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb603c))), 0x10bb3f6au);
L_10bb3f6a:;
  /* 10bb3f6a pop edi */
  EDI = (pop32());
  /* 10bb3f6b pop esi */
  ESI = (pop32());
  /* 10bb3f6c ret  */
  ESPCHK(0x10bb3f1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x10bb3f70 (7 bytes, 3 insns) */
void f_10bb3f70(void) {
  FTRACE(0x10bb3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3f70 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3f71 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb3f75 jmp 0x10bb3fe1 */
  jmp_ind(0x10bb3fe1u); return;
}

/* FUN_10003f80 @ 0x10bb3f80 (224 bytes, 84 insns) */
void f_10bb3f80(void) {
  FTRACE(0x10bb3f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb3f80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb3f84 push edi */
  push32((uint32_t)(EDI));
  /* 10bb3f85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bb3f8b je 0x10bb3f9c */
  if (C.zf) goto L_10bb3f9c;
L_10bb3f8d:;
  /* 10bb3f8d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10bb3f8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb3f90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb3f92 je 0x10bb3fcf */
  if (C.zf) goto L_10bb3fcf;
  /* 10bb3f94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bb3f9a jne 0x10bb3f8d */
  if (!C.zf) goto L_10bb3f8d;
L_10bb3f9c:;
  /* 10bb3f9c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bb3f9e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bb3fa3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3fa5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3fa8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb3faa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb3fad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bb3fb2 je 0x10bb3f9c */
  if (C.zf) goto L_10bb3f9c;
  /* 10bb3fb4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bb3fb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb3fb9 je 0x10bb3fde */
  if (C.zf) goto L_10bb3fde;
  /* 10bb3fbb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10bb3fbd je 0x10bb3fd9 */
  if (C.zf) goto L_10bb3fd9;
  /* 10bb3fbf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bb3fc4 je 0x10bb3fd4 */
  if (C.zf) goto L_10bb3fd4;
  /* 10bb3fc6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bb3fcb je 0x10bb3fcf */
  if (C.zf) goto L_10bb3fcf;
  /* 10bb3fcd jmp 0x10bb3f9c */
  goto L_10bb3f9c;
L_10bb3fcf:;
  /* 10bb3fcf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10bb3fd2 jmp 0x10bb3fe1 */
  goto L_10bb3fe1;
L_10bb3fd4:;
  /* 10bb3fd4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10bb3fd7 jmp 0x10bb3fe1 */
  goto L_10bb3fe1;
L_10bb3fd9:;
  /* 10bb3fd9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10bb3fdc jmp 0x10bb3fe1 */
  goto L_10bb3fe1;
L_10bb3fde:;
  /* 10bb3fde lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10bb3fe1:;
  /* 10bb3fe1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bb3fe5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bb3feb je 0x10bb4006 */
  if (C.zf) goto L_10bb4006;
L_10bb3fed:;
  /* 10bb3fed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bb3fef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb3ff0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb3ff2 je 0x10bb4058 */
  if (C.zf) goto L_10bb4058;
  /* 10bb3ff4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10bb3ff6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb3ff7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bb3ffd jne 0x10bb3fed */
  if (!C.zf) goto L_10bb3fed;
  /* 10bb3fff jmp 0x10bb4006 */
  goto L_10bb4006;
L_10bb4001:;
  /* 10bb4001 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bb4003 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bb4006:;
  /* 10bb4006 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bb400b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bb400d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb400f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4012 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4014 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bb4016 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4019 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bb401e je 0x10bb4001 */
  if (C.zf) goto L_10bb4001;
  /* 10bb4020 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb4022 je 0x10bb4058 */
  if (C.zf) goto L_10bb4058;
  /* 10bb4024 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10bb4026 je 0x10bb404f */
  if (C.zf) goto L_10bb404f;
  /* 10bb4028 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bb402e je 0x10bb4042 */
  if (C.zf) goto L_10bb4042;
  /* 10bb4030 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bb4036 je 0x10bb403a */
  if (C.zf) goto L_10bb403a;
  /* 10bb4038 jmp 0x10bb4001 */
  goto L_10bb4001;
L_10bb403a:;
  /* 10bb403a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bb403c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb4040 pop edi */
  EDI = (pop32());
  /* 10bb4041 ret  */
  ESPCHK(0x10bb3f80u, _esp0);
  ESP += 4; return;
L_10bb4042:;
  /* 10bb4042 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10bb4045 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb4049 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10bb404d pop edi */
  EDI = (pop32());
  /* 10bb404e ret  */
  ESPCHK(0x10bb3f80u, _esp0);
  ESP += 4; return;
L_10bb404f:;
  /* 10bb404f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10bb4052 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb4056 pop edi */
  EDI = (pop32());
  /* 10bb4057 ret  */
  ESPCHK(0x10bb3f80u, _esp0);
  ESP += 4; return;
L_10bb4058:;
  /* 10bb4058 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10bb405a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb405e pop edi */
  EDI = (pop32());
  /* 10bb405f ret  */
  ESPCHK(0x10bb3f80u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10bb4060 (123 bytes, 44 insns) */
void f_10bb4060(void) {
  FTRACE(0x10bb4060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4060 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb4064 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bb406a je 0x10bb4080 */
  if (C.zf) goto L_10bb4080;
L_10bb406c:;
  /* 10bb406c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10bb406e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb406f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb4071 je 0x10bb40b3 */
  if (C.zf) goto L_10bb40b3;
  /* 10bb4073 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bb4079 jne 0x10bb406c */
  if (!C.zf) goto L_10bb406c;
  /* 10bb407b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bb4080:;
  /* 10bb4080 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bb4082 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bb4087 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4089 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb408c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb408e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4091 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bb4096 je 0x10bb4080 */
  if (C.zf) goto L_10bb4080;
  /* 10bb4098 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bb409b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb409d je 0x10bb40d1 */
  if (C.zf) goto L_10bb40d1;
  /* 10bb409f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10bb40a1 je 0x10bb40c7 */
  if (C.zf) goto L_10bb40c7;
  /* 10bb40a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bb40a8 je 0x10bb40bd */
  if (C.zf) goto L_10bb40bd;
  /* 10bb40aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bb40af je 0x10bb40b3 */
  if (C.zf) goto L_10bb40b3;
  /* 10bb40b1 jmp 0x10bb4080 */
  goto L_10bb4080;
L_10bb40b3:;
  /* 10bb40b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10bb40b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb40ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb40bc ret  */
  ESPCHK(0x10bb4060u, _esp0);
  ESP += 4; return;
L_10bb40bd:;
  /* 10bb40bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10bb40c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb40c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb40c6 ret  */
  ESPCHK(0x10bb4060u, _esp0);
  ESP += 4; return;
L_10bb40c7:;
  /* 10bb40c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10bb40ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb40ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb40d0 ret  */
  ESPCHK(0x10bb4060u, _esp0);
  ESP += 4; return;
L_10bb40d1:;
  /* 10bb40d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10bb40d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb40d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb40da ret  */
  ESPCHK(0x10bb4060u, _esp0);
  ESP += 4; return;
}

/* FUN_100040db @ 0x10bb40db (429 bytes, 143 insns) */
void f_10bb40db(void) {
  FTRACE(0x10bb40dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb40db push ebp */
  push32((uint32_t)(EBP));
  /* 10bb40dc mov ebp, esp */
  EBP = (ESP);
  /* 10bb40de sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb40e1 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb40e2 push esi */
  push32((uint32_t)(ESI));
  /* 10bb40e3 push edi */
  push32((uint32_t)(EDI));
  /* 10bb40e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb40e6 call 0x10bb3d96 */
  push32(0x10bb40ebu); f_10bb3d96();
  /* 10bb40eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb40ee call 0x10bb4288 */
  push32(0x10bb40f3u); f_10bb4288();
  /* 10bb40f3 mov ebx, eax */
  EBX = (EAX);
  /* 10bb40f5 pop ecx */
  ECX = (pop32());
  /* 10bb40f6 cmp ebx, dword ptr [0x10bb7fc8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bb7fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb40fc pop ecx */
  ECX = (pop32());
  /* 10bb40fd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4100 jne 0x10bb4109 */
  if (!C.zf) goto L_10bb4109;
L_10bb4102:;
  /* 10bb4102 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bb4104 jmp 0x10bb4279 */
  goto L_10bb4279;
L_10bb4109:;
  /* 10bb4109 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bb410b je 0x10bb4267 */
  if (C.zf) goto L_10bb4267;
  /* 10bb4111 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4113 mov eax, 0x10bb78e8 */
  EAX = (0x10bb78e8u);
L_10bb4118:;
  /* 10bb4118 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb411a je 0x10bb4190 */
  if (C.zf) goto L_10bb4190;
  /* 10bb411c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb411f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bb4120 cmp eax, 0x10bb79d8 */
  { uint32_t _a=(EAX),_b=(0x10bb79d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4125 jl 0x10bb4118 */
  if ((C.sf!=C.of)) goto L_10bb4118;
  /* 10bb4127 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10bb412a push eax */
  push32((uint32_t)(EAX));
  /* 10bb412b push ebx */
  push32((uint32_t)(EBX));
  /* 10bb412c call dword ptr [0x10bb6034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6034))), 0x10bb4132u);
  /* 10bb4132 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb4134 pop esi */
  ESI = (pop32());
  /* 10bb4135 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4137 jne 0x10bb425e */
  if (!C.zf) goto L_10bb425e;
  /* 10bb413d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb413f and dword ptr [0x10bb81e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bb81e4)))&(0x0u); w32((uint32_t)(0x10bb81e4), (_r)); fl_logic(_r,32); }
  /* 10bb4146 pop ecx */
  ECX = (pop32());
  /* 10bb4147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4149 mov edi, 0x10bb80e0 */
  EDI = (0x10bb80e0u);
  /* 10bb414e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4151 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bb4153 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bb4154 mov dword ptr [0x10bb7fc8], ebx */
  w32((uint32_t)(0x10bb7fc8), (EBX));
  /* 10bb415a jbe 0x10bb424b */
  if ((C.cf||C.zf)) goto L_10bb424b;
  /* 10bb4160 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4164 je 0x10bb4226 */
  if (C.zf) goto L_10bb4226;
  /* 10bb416a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10bb416d:;
  /* 10bb416d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bb416f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb4171 je 0x10bb4226 */
  if (C.zf) goto L_10bb4226;
  /* 10bb4177 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10bb417b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10bb417e:;
  /* 10bb417e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4180 ja 0x10bb421a */
  if ((!C.cf&&!C.zf)) goto L_10bb421a;
  /* 10bb4186 or byte ptr [eax + 0x10bb80e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(0x4u); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb418d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb418e jmp 0x10bb417e */
  goto L_10bb417e;
L_10bb4190:;
  /* 10bb4190 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb4194 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb4196 pop ecx */
  ECX = (pop32());
  /* 10bb4197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4199 mov edi, 0x10bb80e0 */
  EDI = (0x10bb80e0u);
  /* 10bb419e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10bb41a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bb41a3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10bb41a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bb41a7 lea ebx, [esi + 0x10bb78f8] */
  EBX = ((uint32_t)(ESI + 0x10bb78f8));
L_10bb41ad:;
  /* 10bb41ad cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb41b0 mov ecx, ebx */
  ECX = (EBX);
  /* 10bb41b2 je 0x10bb41e0 */
  if (C.zf) goto L_10bb41e0;
L_10bb41b4:;
  /* 10bb41b4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10bb41b7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb41b9 je 0x10bb41e0 */
  if (C.zf) goto L_10bb41e0;
  /* 10bb41bb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10bb41be movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10bb41c1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb41c3 ja 0x10bb41d9 */
  if ((!C.cf&&!C.zf)) goto L_10bb41d9;
  /* 10bb41c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb41c8 mov dl, byte ptr [edx + 0x10bb78e0] */
  DL = (r8((uint32_t)(EDX + 0x10bb78e0)));
L_10bb41ce:;
  /* 10bb41ce or byte ptr [eax + 0x10bb80e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(DL); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb41d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb41d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb41d7 jbe 0x10bb41ce */
  if ((C.cf||C.zf)) goto L_10bb41ce;
L_10bb41d9:;
  /* 10bb41d9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb41da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb41db cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb41de jne 0x10bb41b4 */
  if (!C.zf) goto L_10bb41b4;
L_10bb41e0:;
  /* 10bb41e0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10bb41e3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb41e6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb41ea jb 0x10bb41ad */
  if (C.cf) goto L_10bb41ad;
  /* 10bb41ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb41ef mov dword ptr [0x10bb7fdc], 1 */
  w32((uint32_t)(0x10bb7fdc), (0x1u));
  /* 10bb41f9 push eax */
  push32((uint32_t)(EAX));
  /* 10bb41fa mov dword ptr [0x10bb7fc8], eax */
  w32((uint32_t)(0x10bb7fc8), (EAX));
  /* 10bb41ff call 0x10bb42d2 */
  push32(0x10bb4204u); f_10bb42d2();
  /* 10bb4204 lea esi, [esi + 0x10bb78ec] */
  ESI = ((uint32_t)(ESI + 0x10bb78ec));
  /* 10bb420a mov edi, 0x10bb7fd0 */
  EDI = (0x10bb7fd0u);
  /* 10bb420f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10bb4210 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10bb4211 pop ecx */
  ECX = (pop32());
  /* 10bb4212 mov dword ptr [0x10bb81e4], eax */
  w32((uint32_t)(0x10bb81e4), (EAX));
  /* 10bb4217 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10bb4218 jmp 0x10bb426c */
  goto L_10bb426c;
L_10bb421a:;
  /* 10bb421a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb421b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb421c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4220 jne 0x10bb416d */
  if (!C.zf) goto L_10bb416d;
L_10bb4226:;
  /* 10bb4226 mov eax, esi */
  EAX = (ESI);
L_10bb4228:;
  /* 10bb4228 or byte ptr [eax + 0x10bb80e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(0x8u); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb422f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb4230 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4235 jb 0x10bb4228 */
  if (C.cf) goto L_10bb4228;
  /* 10bb4237 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4238 call 0x10bb42d2 */
  push32(0x10bb423du); f_10bb42d2();
  /* 10bb423d pop ecx */
  ECX = (pop32());
  /* 10bb423e mov dword ptr [0x10bb81e4], eax */
  w32((uint32_t)(0x10bb81e4), (EAX));
  /* 10bb4243 mov dword ptr [0x10bb7fdc], esi */
  w32((uint32_t)(0x10bb7fdc), (ESI));
  /* 10bb4249 jmp 0x10bb4252 */
  goto L_10bb4252;
L_10bb424b:;
  /* 10bb424b and dword ptr [0x10bb7fdc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bb7fdc)))&(0x0u); w32((uint32_t)(0x10bb7fdc), (_r)); fl_logic(_r,32); }
L_10bb4252:;
  /* 10bb4252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4254 mov edi, 0x10bb7fd0 */
  EDI = (0x10bb7fd0u);
  /* 10bb4259 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bb425a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bb425b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bb425c jmp 0x10bb426c */
  goto L_10bb426c;
L_10bb425e:;
  /* 10bb425e cmp dword ptr [0x10bb7f70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7f70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4265 je 0x10bb4276 */
  if (C.zf) goto L_10bb4276;
L_10bb4267:;
  /* 10bb4267 call 0x10bb4305 */
  push32(0x10bb426cu); f_10bb4305();
L_10bb426c:;
  /* 10bb426c call 0x10bb432e */
  push32(0x10bb4271u); f_10bb432e();
  /* 10bb4271 jmp 0x10bb4102 */
  goto L_10bb4102;
L_10bb4276:;
  /* 10bb4276 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10bb4279:;
  /* 10bb4279 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bb427b call 0x10bb3df7 */
  push32(0x10bb4280u); f_10bb3df7();
  /* 10bb4280 pop ecx */
  ECX = (pop32());
  /* 10bb4281 mov eax, esi */
  EAX = (ESI);
  /* 10bb4283 pop edi */
  EDI = (pop32());
  /* 10bb4284 pop esi */
  ESI = (pop32());
  /* 10bb4285 pop ebx */
  EBX = (pop32());
  /* 10bb4286 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb4287 ret  */
  ESPCHK(0x10bb40dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004288 @ 0x10bb4288 (74 bytes, 15 insns) */
void f_10bb4288(void) {
  FTRACE(0x10bb4288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4288 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb428c and dword ptr [0x10bb7f70], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bb7f70)))&(0x0u); w32((uint32_t)(0x10bb7f70), (_r)); fl_logic(_r,32); }
  /* 10bb4293 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4296 jne 0x10bb42a8 */
  if (!C.zf) goto L_10bb42a8;
  /* 10bb4298 mov dword ptr [0x10bb7f70], 1 */
  w32((uint32_t)(0x10bb7f70), (0x1u));
  /* 10bb42a2 jmp dword ptr [0x10bb6038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10bb6038)))); return;
L_10bb42a8:;
  /* 10bb42a8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb42ab jne 0x10bb42bd */
  if (!C.zf) goto L_10bb42bd;
  /* 10bb42ad mov dword ptr [0x10bb7f70], 1 */
  w32((uint32_t)(0x10bb7f70), (0x1u));
  /* 10bb42b7 jmp dword ptr [0x10bb6030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10bb6030)))); return;
L_10bb42bd:;
  /* 10bb42bd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb42c0 jne 0x10bb42d1 */
  if (!C.zf) goto L_10bb42d1;
  /* 10bb42c2 mov eax, dword ptr [0x10bb7fa0] */
  EAX = (r32((uint32_t)(0x10bb7fa0)));
  /* 10bb42c7 mov dword ptr [0x10bb7f70], 1 */
  w32((uint32_t)(0x10bb7f70), (0x1u));
L_10bb42d1:;
  /* 10bb42d1 ret  */
  ESPCHK(0x10bb4288u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d2 @ 0x10bb42d2 (51 bytes, 19 insns) */
void f_10bb42d2(void) {
  FTRACE(0x10bb42d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb42d2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb42d6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb42db je 0x10bb42ff */
  if (C.zf) goto L_10bb42ff;
  /* 10bb42dd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb42e0 je 0x10bb42f9 */
  if (C.zf) goto L_10bb42f9;
  /* 10bb42e2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb42e5 je 0x10bb42f3 */
  if (C.zf) goto L_10bb42f3;
  /* 10bb42e7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bb42e8 je 0x10bb42ed */
  if (C.zf) goto L_10bb42ed;
  /* 10bb42ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb42ec ret  */
  ESPCHK(0x10bb42d2u, _esp0);
  ESP += 4; return;
L_10bb42ed:;
  /* 10bb42ed mov eax, 0x404 */
  EAX = (0x404u);
  /* 10bb42f2 ret  */
  ESPCHK(0x10bb42d2u, _esp0);
  ESP += 4; return;
L_10bb42f3:;
  /* 10bb42f3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10bb42f8 ret  */
  ESPCHK(0x10bb42d2u, _esp0);
  ESP += 4; return;
L_10bb42f9:;
  /* 10bb42f9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10bb42fe ret  */
  ESPCHK(0x10bb42d2u, _esp0);
  ESP += 4; return;
L_10bb42ff:;
  /* 10bb42ff mov eax, 0x411 */
  EAX = (0x411u);
  /* 10bb4304 ret  */
  ESPCHK(0x10bb42d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004305 @ 0x10bb4305 (41 bytes, 17 insns) */
void f_10bb4305(void) {
  FTRACE(0x10bb4305u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4305 push edi */
  push32((uint32_t)(EDI));
  /* 10bb4306 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bb4308 pop ecx */
  ECX = (pop32());
  /* 10bb4309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb430b mov edi, 0x10bb80e0 */
  EDI = (0x10bb80e0u);
  /* 10bb4310 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bb4312 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bb4313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4315 mov edi, 0x10bb7fd0 */
  EDI = (0x10bb7fd0u);
  /* 10bb431a mov dword ptr [0x10bb7fc8], eax */
  w32((uint32_t)(0x10bb7fc8), (EAX));
  /* 10bb431f mov dword ptr [0x10bb7fdc], eax */
  w32((uint32_t)(0x10bb7fdc), (EAX));
  /* 10bb4324 mov dword ptr [0x10bb81e4], eax */
  w32((uint32_t)(0x10bb81e4), (EAX));
  /* 10bb4329 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bb432a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bb432b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bb432c pop edi */
  EDI = (pop32());
  /* 10bb432d ret  */
  ESPCHK(0x10bb4305u, _esp0);
  ESP += 4; return;
}

/* FUN_1000432e @ 0x10bb432e (389 bytes, 124 insns) */
void f_10bb432e(void) {
  FTRACE(0x10bb432eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb432e push ebp */
  push32((uint32_t)(EBP));
  /* 10bb432f mov ebp, esp */
  EBP = (ESP);
  /* 10bb4331 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4337 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10bb433a push esi */
  push32((uint32_t)(ESI));
  /* 10bb433b push eax */
  push32((uint32_t)(EAX));
  /* 10bb433c push dword ptr [0x10bb7fc8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7fc8))));
  /* 10bb4342 call dword ptr [0x10bb6034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6034))), 0x10bb4348u);
  /* 10bb4348 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb434b jne 0x10bb4467 */
  if (!C.zf) goto L_10bb4467;
  /* 10bb4351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4353 mov esi, 0x100 */
  ESI = (0x100u);
L_10bb4358:;
  /* 10bb4358 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10bb435f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb4360 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4362 jb 0x10bb4358 */
  if (C.cf) goto L_10bb4358;
  /* 10bb4364 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10bb4367 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10bb436e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb4370 je 0x10bb43a9 */
  if (C.zf) goto L_10bb43a9;
  /* 10bb4372 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4373 push edi */
  push32((uint32_t)(EDI));
  /* 10bb4374 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10bb4377:;
  /* 10bb4377 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10bb437a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10bb437d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb437f ja 0x10bb439e */
  if ((!C.cf&&!C.zf)) goto L_10bb439e;
  /* 10bb4381 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4383 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10bb438a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb438b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10bb4390 mov ebx, ecx */
  EBX = (ECX);
  /* 10bb4392 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb4395 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bb4397 mov ecx, ebx */
  ECX = (EBX);
  /* 10bb4399 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10bb439c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10bb439e:;
  /* 10bb439e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bb439f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bb43a0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10bb43a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb43a5 jne 0x10bb4377 */
  if (!C.zf) goto L_10bb4377;
  /* 10bb43a7 pop edi */
  EDI = (pop32());
  /* 10bb43a8 pop ebx */
  EBX = (pop32());
L_10bb43a9:;
  /* 10bb43a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb43ab lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10bb43b1 push dword ptr [0x10bb81e4] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e4))));
  /* 10bb43b7 push dword ptr [0x10bb7fc8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7fc8))));
  /* 10bb43bd push eax */
  push32((uint32_t)(EAX));
  /* 10bb43be lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10bb43c4 push esi */
  push32((uint32_t)(ESI));
  /* 10bb43c5 push eax */
  push32((uint32_t)(EAX));
  /* 10bb43c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb43c8 call 0x10bb54a2 */
  push32(0x10bb43cdu); f_10bb54a2();
  /* 10bb43cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb43cf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10bb43d5 push dword ptr [0x10bb7fc8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7fc8))));
  /* 10bb43db push esi */
  push32((uint32_t)(ESI));
  /* 10bb43dc push eax */
  push32((uint32_t)(EAX));
  /* 10bb43dd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10bb43e3 push esi */
  push32((uint32_t)(ESI));
  /* 10bb43e4 push eax */
  push32((uint32_t)(EAX));
  /* 10bb43e5 push esi */
  push32((uint32_t)(ESI));
  /* 10bb43e6 push dword ptr [0x10bb81e4] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e4))));
  /* 10bb43ec call 0x10bb5253 */
  push32(0x10bb43f1u); f_10bb5253();
  /* 10bb43f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb43f3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10bb43f9 push dword ptr [0x10bb7fc8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7fc8))));
  /* 10bb43ff push esi */
  push32((uint32_t)(ESI));
  /* 10bb4400 push eax */
  push32((uint32_t)(EAX));
  /* 10bb4401 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10bb4407 push esi */
  push32((uint32_t)(ESI));
  /* 10bb4408 push eax */
  push32((uint32_t)(EAX));
  /* 10bb4409 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10bb440e push dword ptr [0x10bb81e4] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e4))));
  /* 10bb4414 call 0x10bb5253 */
  push32(0x10bb4419u); f_10bb5253();
  /* 10bb4419 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb441c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb441e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10bb4424:;
  /* 10bb4424 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10bb4427 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10bb442a je 0x10bb4442 */
  if (C.zf) goto L_10bb4442;
  /* 10bb442c or byte ptr [eax + 0x10bb80e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(0x10u); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb4433 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10bb443a:;
  /* 10bb443a mov byte ptr [eax + 0x10bb7fe0], dl */
  w8((uint32_t)(EAX + 0x10bb7fe0), (DL));
  /* 10bb4440 jmp 0x10bb445e */
  goto L_10bb445e;
L_10bb4442:;
  /* 10bb4442 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10bb4445 je 0x10bb4457 */
  if (C.zf) goto L_10bb4457;
  /* 10bb4447 or byte ptr [eax + 0x10bb80e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(0x20u); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb444e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10bb4455 jmp 0x10bb443a */
  goto L_10bb443a;
L_10bb4457:;
  /* 10bb4457 and byte ptr [eax + 0x10bb7fe0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb7fe0)))&(0x0u); w8((uint32_t)(EAX + 0x10bb7fe0), (_r)); fl_logic(_r,8); }
L_10bb445e:;
  /* 10bb445e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb445f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb4460 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bb4461 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4463 jb 0x10bb4424 */
  if (C.cf) goto L_10bb4424;
  /* 10bb4465 jmp 0x10bb44b0 */
  goto L_10bb44b0;
L_10bb4467:;
  /* 10bb4467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4469 mov esi, 0x100 */
  ESI = (0x100u);
L_10bb446e:;
  /* 10bb446e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4471 jb 0x10bb448c */
  if (C.cf) goto L_10bb448c;
  /* 10bb4473 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4476 ja 0x10bb448c */
  if ((!C.cf&&!C.zf)) goto L_10bb448c;
  /* 10bb4478 or byte ptr [eax + 0x10bb80e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(0x10u); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb447f mov cl, al */
  CL = (AL);
  /* 10bb4481 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10bb4484:;
  /* 10bb4484 mov byte ptr [eax + 0x10bb7fe0], cl */
  w8((uint32_t)(EAX + 0x10bb7fe0), (CL));
  /* 10bb448a jmp 0x10bb44ab */
  goto L_10bb44ab;
L_10bb448c:;
  /* 10bb448c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb448f jb 0x10bb44a4 */
  if (C.cf) goto L_10bb44a4;
  /* 10bb4491 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4494 ja 0x10bb44a4 */
  if ((!C.cf&&!C.zf)) goto L_10bb44a4;
  /* 10bb4496 or byte ptr [eax + 0x10bb80e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb80e1)))|(0x20u); w8((uint32_t)(EAX + 0x10bb80e1), (_r)); fl_logic(_r,8); }
  /* 10bb449d mov cl, al */
  CL = (AL);
  /* 10bb449f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bb44a2 jmp 0x10bb4484 */
  goto L_10bb4484;
L_10bb44a4:;
  /* 10bb44a4 and byte ptr [eax + 0x10bb7fe0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bb7fe0)))&(0x0u); w8((uint32_t)(EAX + 0x10bb7fe0), (_r)); fl_logic(_r,8); }
L_10bb44ab:;
  /* 10bb44ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb44ac cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb44ae jb 0x10bb446e */
  if (C.cf) goto L_10bb446e;
L_10bb44b0:;
  /* 10bb44b0 pop esi */
  ESI = (pop32());
  /* 10bb44b1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb44b2 ret  */
  ESPCHK(0x10bb432eu, _esp0);
  ESP += 4; return;
}

/* FUN_100044b3 @ 0x10bb44b3 (28 bytes, 7 insns) */
void f_10bb44b3(void) {
  FTRACE(0x10bb44b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb44b3 cmp dword ptr [0x10bb8308], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bb8308))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb44ba jne 0x10bb44ce */
  if (!C.zf) goto L_10bb44ce;
  /* 10bb44bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10bb44be call 0x10bb40db */
  push32(0x10bb44c3u); f_10bb40db();
  /* 10bb44c3 pop ecx */
  ECX = (pop32());
  /* 10bb44c4 mov dword ptr [0x10bb8308], 1 */
  w32((uint32_t)(0x10bb8308), (0x1u));
L_10bb44ce:;
  /* 10bb44ce ret  */
  ESPCHK(0x10bb44b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x10bb44d0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_10bb44d0(void) {
  FTRACE(0x10bb44d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb44d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb44d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bb44d3 push edi */
  push32((uint32_t)(EDI));
  /* 10bb44d4 push esi */
  push32((uint32_t)(ESI));
  /* 10bb44d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb44d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bb44db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb44de mov eax, ecx */
  EAX = (ECX);
  /* 10bb44e0 mov edx, ecx */
  EDX = (ECX);
  /* 10bb44e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb44e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb44e6 jbe 0x10bb44f0 */
  if ((C.cf||C.zf)) goto L_10bb44f0;
  /* 10bb44e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb44ea jb 0x10bb4668 */
  if (C.cf) goto L_10bb4668;
L_10bb44f0:;
  /* 10bb44f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bb44f6 jne 0x10bb450c */
  if (!C.zf) goto L_10bb450c;
  /* 10bb44f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb44fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bb44fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4501 jb 0x10bb452c */
  if (C.cf) goto L_10bb452c;
  /* 10bb4503 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb4505 jmp dword ptr [edx*4 + 0x10bb4618] */
  switch (EDX) {
    case 0: goto L_10bb4628;
    case 1: goto L_10bb4630;
    case 2: goto L_10bb463c;
    case 3: goto L_10bb4650;
    default: x86_unimpl("switch@0x10bb4505 out of table"); return;
  }
L_10bb450c:;
  /* 10bb450c mov eax, edi */
  EAX = (EDI);
  /* 10bb450e mov edx, 3 */
  EDX = (0x3u);
  /* 10bb4513 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4516 jb 0x10bb4524 */
  if (C.cf) goto L_10bb4524;
  /* 10bb4518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bb451b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb451d jmp dword ptr [eax*4 + 0x10bb4530] */
  switch (EAX) {
    case 1: goto L_10bb4540;
    case 2: goto L_10bb456c;
    case 3: goto L_10bb4590;
    default: x86_unimpl("switch@0x10bb451d out of table"); return;
  }
L_10bb4524:;
  /* 10bb4524 jmp dword ptr [ecx*4 + 0x10bb4628] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10bb4628)))); return;
  /* 10bb452b nop  */
  /* nop */
L_10bb452c:;
  /* 10bb452c jmp dword ptr [ecx*4 + 0x10bb45ac] */
  switch (ECX) {
    case 0: goto L_10bb460f;
    case 1: goto L_10bb45fc;
    case 2: goto L_10bb45f4;
    case 3: goto L_10bb45ec;
    case 4: goto L_10bb45e4;
    case 5: goto L_10bb45dc;
    case 6: goto L_10bb45d4;
    case 7: goto L_10bb45cc;
    default: x86_unimpl("switch@0x10bb452c out of table"); return;
  }
  /* 10bb4533 nop  */
  /* nop */
L_10bb4540:;
  /* 10bb4540 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4542 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb4544 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb4546 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb4549 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb454c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb454f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb4552 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb4555 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4558 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb455b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb455e jb 0x10bb452c */
  if (C.cf) goto L_10bb452c;
  /* 10bb4560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb4562 jmp dword ptr [edx*4 + 0x10bb4618] */
  switch (EDX) {
    case 0: goto L_10bb4628;
    case 1: goto L_10bb4630;
    case 2: goto L_10bb463c;
    case 3: goto L_10bb4650;
    default: x86_unimpl("switch@0x10bb4562 out of table"); return;
  }
  /* 10bb4569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb456c:;
  /* 10bb456c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb456e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb4570 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb4572 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb4575 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb4578 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb457b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb457e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4581 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4584 jb 0x10bb452c */
  if (C.cf) goto L_10bb452c;
  /* 10bb4586 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb4588 jmp dword ptr [edx*4 + 0x10bb4618] */
  switch (EDX) {
    case 0: goto L_10bb4628;
    case 1: goto L_10bb4630;
    case 2: goto L_10bb463c;
    case 3: goto L_10bb4650;
    default: x86_unimpl("switch@0x10bb4588 out of table"); return;
  }
  /* 10bb458f nop  */
  /* nop */
L_10bb4590:;
  /* 10bb4590 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4592 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb4594 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb4596 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb4597 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb459a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb459b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb459e jb 0x10bb452c */
  if (C.cf) goto L_10bb452c;
  /* 10bb45a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb45a2 jmp dword ptr [edx*4 + 0x10bb4618] */
  switch (EDX) {
    case 0: goto L_10bb4628;
    case 1: goto L_10bb4630;
    case 2: goto L_10bb463c;
    case 3: goto L_10bb4650;
    default: x86_unimpl("switch@0x10bb45a2 out of table"); return;
  }
  /* 10bb45a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb45cc:;
  /* 10bb45cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10bb45d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10bb45d4:;
  /* 10bb45d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10bb45d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10bb45dc:;
  /* 10bb45dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10bb45e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10bb45e4:;
  /* 10bb45e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10bb45e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10bb45ec:;
  /* 10bb45ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10bb45f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10bb45f4:;
  /* 10bb45f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10bb45f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10bb45fc:;
  /* 10bb45fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10bb4600 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10bb4604 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bb460b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb460d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bb460f:;
  /* 10bb460f jmp dword ptr [edx*4 + 0x10bb4618] */
  switch (EDX) {
    case 0: goto L_10bb4628;
    case 1: goto L_10bb4630;
    case 2: goto L_10bb463c;
    case 3: goto L_10bb4650;
    default: x86_unimpl("switch@0x10bb460f out of table"); return;
  }
  /* 10bb4616 mov edi, edi */
  EDI = (EDI);
L_10bb4628:;
  /* 10bb4628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb462b pop esi */
  ESI = (pop32());
  /* 10bb462c pop edi */
  EDI = (pop32());
  /* 10bb462d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb462e ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb462f nop  */
  /* nop */
L_10bb4630:;
  /* 10bb4630 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb4632 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb4634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4637 pop esi */
  ESI = (pop32());
  /* 10bb4638 pop edi */
  EDI = (pop32());
  /* 10bb4639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb463a ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb463b nop  */
  /* nop */
L_10bb463c:;
  /* 10bb463c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb463e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb4640 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb4643 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb4646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4649 pop esi */
  ESI = (pop32());
  /* 10bb464a pop edi */
  EDI = (pop32());
  /* 10bb464b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb464c ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb464d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb4650:;
  /* 10bb4650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb4652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb4654 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb4657 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb465a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb465d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb4660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4663 pop esi */
  ESI = (pop32());
  /* 10bb4664 pop edi */
  EDI = (pop32());
  /* 10bb4665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb4666 ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb4667 nop  */
  /* nop */
L_10bb4668:;
  /* 10bb4668 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10bb466c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10bb4670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bb4676 jne 0x10bb469c */
  if (!C.zf) goto L_10bb469c;
  /* 10bb4678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb467b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bb467e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4681 jb 0x10bb4690 */
  if (C.cf) goto L_10bb4690;
  /* 10bb4683 std  */
  C.df=1;
  /* 10bb4684 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb4686 cld  */
  C.df=0;
  /* 10bb4687 jmp dword ptr [edx*4 + 0x10bb47b0] */
  switch (EDX) {
    case 0: goto L_10bb47c0;
    case 1: goto L_10bb47c8;
    case 2: goto L_10bb47d8;
    case 3: goto L_10bb47ec;
    default: x86_unimpl("switch@0x10bb4687 out of table"); return;
  }
  /* 10bb468e mov edi, edi */
  EDI = (EDI);
L_10bb4690:;
  /* 10bb4690 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bb4692 jmp dword ptr [ecx*4 + 0x10bb4760] */
  switch (ECX) {
    case 0: goto L_10bb47a7;
    default: x86_unimpl("switch@0x10bb4692 out of table"); return;
  }
  /* 10bb4699 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb469c:;
  /* 10bb469c mov eax, edi */
  EAX = (EDI);
  /* 10bb469e mov edx, 3 */
  EDX = (0x3u);
  /* 10bb46a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb46a6 jb 0x10bb46b4 */
  if (C.cf) goto L_10bb46b4;
  /* 10bb46a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bb46ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb46ad jmp dword ptr [eax*4 + 0x10bb46b8] */
  switch (EAX) {
    case 1: goto L_10bb46c8;
    case 2: goto L_10bb46e8;
    case 3: goto L_10bb4710;
    default: x86_unimpl("switch@0x10bb46ad out of table"); return;
  }
L_10bb46b4:;
  /* 10bb46b4 jmp dword ptr [ecx*4 + 0x10bb47b0] */
  switch (ECX) {
    case 0: goto L_10bb47c0;
    case 1: goto L_10bb47c8;
    case 2: goto L_10bb47d8;
    case 3: goto L_10bb47ec;
    default: x86_unimpl("switch@0x10bb46b4 out of table"); return;
  }
  /* 10bb46bb nop  */
  /* nop */
L_10bb46c8:;
  /* 10bb46c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb46cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb46cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb46d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bb46d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb46d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bb46d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb46d8 jb 0x10bb4690 */
  if (C.cf) goto L_10bb4690;
  /* 10bb46da std  */
  C.df=1;
  /* 10bb46db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb46dd cld  */
  C.df=0;
  /* 10bb46de jmp dword ptr [edx*4 + 0x10bb47b0] */
  switch (EDX) {
    case 0: goto L_10bb47c0;
    case 1: goto L_10bb47c8;
    case 2: goto L_10bb47d8;
    case 3: goto L_10bb47ec;
    default: x86_unimpl("switch@0x10bb46de out of table"); return;
  }
  /* 10bb46e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb46e8:;
  /* 10bb46e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb46eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb46ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb46f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb46f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb46f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb46f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb46fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb46ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4702 jb 0x10bb4690 */
  if (C.cf) goto L_10bb4690;
  /* 10bb4704 std  */
  C.df=1;
  /* 10bb4705 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb4707 cld  */
  C.df=0;
  /* 10bb4708 jmp dword ptr [edx*4 + 0x10bb47b0] */
  switch (EDX) {
    case 0: goto L_10bb47c0;
    case 1: goto L_10bb47c8;
    case 2: goto L_10bb47d8;
    case 3: goto L_10bb47ec;
    default: x86_unimpl("switch@0x10bb4708 out of table"); return;
  }
  /* 10bb470f nop  */
  /* nop */
L_10bb4710:;
  /* 10bb4710 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb4713 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4715 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb4718 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb471b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb471e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb4721 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb4724 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb4727 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb472a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb472d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4730 jb 0x10bb4690 */
  if (C.cf) goto L_10bb4690;
  /* 10bb4736 std  */
  C.df=1;
  /* 10bb4737 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb4739 cld  */
  C.df=0;
  /* 10bb473a jmp dword ptr [edx*4 + 0x10bb47b0] */
  switch (EDX) {
    case 0: goto L_10bb47c0;
    case 1: goto L_10bb47c8;
    case 2: goto L_10bb47d8;
    case 3: goto L_10bb47ec;
    default: x86_unimpl("switch@0x10bb473a out of table"); return;
  }
  /* 10bb4741 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10bb4744 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb4746 mov ebx, 0xbb476c10 */
  EBX = (0xbb476c10u);
  /* 10bb474b adc byte ptr [edi + eax*2 - 0x45], dh */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*2 + -0x45))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*2 + -0x45), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bb474f adc byte ptr [edi + eax*2 - 0x45], bh */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*2 + -0x45))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*2 + -0x45), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bb4753 adc byte ptr [edi + eax*2 + 0x478c10bb], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*2 + 0x478c10bb))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*2 + 0x478c10bb), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bb475a mov ebx, 0xbb479410 */
  EBX = (0xbb479410u);
  /* 10bb4764 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10bb4768 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10bb476c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10bb4770 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10bb4774 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10bb4778 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10bb477c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10bb4780 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10bb4784 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10bb4788 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10bb478c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10bb4790 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10bb4794 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10bb4798 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10bb479c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bb47a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb47a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bb47a7:;
  /* 10bb47a7 jmp dword ptr [edx*4 + 0x10bb47b0] */
  switch (EDX) {
    case 0: goto L_10bb47c0;
    case 1: goto L_10bb47c8;
    case 2: goto L_10bb47d8;
    case 3: goto L_10bb47ec;
    default: x86_unimpl("switch@0x10bb47a7 out of table"); return;
  }
  /* 10bb47ae mov edi, edi */
  EDI = (EDI);
L_10bb47c0:;
  /* 10bb47c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb47c3 pop esi */
  ESI = (pop32());
  /* 10bb47c4 pop edi */
  EDI = (pop32());
  /* 10bb47c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb47c6 ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb47c7 nop  */
  /* nop */
L_10bb47c8:;
  /* 10bb47c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb47cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb47ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb47d1 pop esi */
  ESI = (pop32());
  /* 10bb47d2 pop edi */
  EDI = (pop32());
  /* 10bb47d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb47d4 ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb47d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb47d8:;
  /* 10bb47d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb47db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb47de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb47e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb47e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb47e7 pop esi */
  ESI = (pop32());
  /* 10bb47e8 pop edi */
  EDI = (pop32());
  /* 10bb47e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb47ea ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
  /* 10bb47eb nop  */
  /* nop */
L_10bb47ec:;
  /* 10bb47ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb47ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb47f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb47f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb47f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb47fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb47fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4801 pop esi */
  ESI = (pop32());
  /* 10bb4802 pop edi */
  EDI = (pop32());
  /* 10bb4803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb4804 ret  */
  ESPCHK(0x10bb44d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004805 @ 0x10bb4805 (62 bytes, 15 insns) */
void f_10bb4805(void) {
  FTRACE(0x10bb4805u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4805 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10bb480a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb480c push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb4812 call dword ptr [0x10bb603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb603c))), 0x10bb4818u);
  /* 10bb4818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb481a mov dword ptr [0x10bb7fc4], eax */
  w32((uint32_t)(0x10bb7fc4), (EAX));
  /* 10bb481f jne 0x10bb4822 */
  if (!C.zf) goto L_10bb4822;
  /* 10bb4821 ret  */
  ESPCHK(0x10bb4805u, _esp0);
  ESP += 4; return;
L_10bb4822:;
  /* 10bb4822 and dword ptr [0x10bb7fbc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bb7fbc)))&(0x0u); w32((uint32_t)(0x10bb7fbc), (_r)); fl_logic(_r,32); }
  /* 10bb4829 and dword ptr [0x10bb7fc0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bb7fc0)))&(0x0u); w32((uint32_t)(0x10bb7fc0), (_r)); fl_logic(_r,32); }
  /* 10bb4830 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb4832 mov dword ptr [0x10bb7fb8], eax */
  w32((uint32_t)(0x10bb7fb8), (EAX));
  /* 10bb4837 mov dword ptr [0x10bb7fb0], 0x10 */
  w32((uint32_t)(0x10bb7fb0), (0x10u));
  /* 10bb4841 pop eax */
  EAX = (pop32());
  /* 10bb4842 ret  */
  ESPCHK(0x10bb4805u, _esp0);
  ESP += 4; return;
}

/* FUN_10004843 @ 0x10bb4843 (43 bytes, 14 insns) */
void f_10bb4843(void) {
  FTRACE(0x10bb4843u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4843 mov eax, dword ptr [0x10bb7fc0] */
  EAX = (r32((uint32_t)(0x10bb7fc0)));
  /* 10bb4848 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10bb484b mov eax, dword ptr [0x10bb7fc4] */
  EAX = (r32((uint32_t)(0x10bb7fc4)));
  /* 10bb4850 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10bb4853:;
  /* 10bb4853 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4855 jae 0x10bb486b */
  if (!C.cf) goto L_10bb486b;
  /* 10bb4857 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb485b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb485e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4864 jb 0x10bb486d */
  if (C.cf) goto L_10bb486d;
  /* 10bb4866 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4869 jmp 0x10bb4853 */
  goto L_10bb4853;
L_10bb486b:;
  /* 10bb486b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bb486d:;
  /* 10bb486d ret  */
  ESPCHK(0x10bb4843u, _esp0);
  ESP += 4; return;
}

/* FUN_1000486e @ 0x10bb486e (811 bytes, 264 insns) */
void f_10bb486e(void) {
  FTRACE(0x10bb486eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb486e push ebp */
  push32((uint32_t)(EBP));
  /* 10bb486f mov ebp, esp */
  EBP = (ESP);
  /* 10bb4871 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4874 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb4877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb487a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb487b push esi */
  push32((uint32_t)(ESI));
  /* 10bb487c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bb487f mov esi, edx */
  ESI = (EDX);
  /* 10bb4881 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4884 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10bb4887 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb488a push edi */
  push32((uint32_t)(EDI));
  /* 10bb488b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10bb488e mov ecx, esi */
  ECX = (ESI);
  /* 10bb4890 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10bb4893 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bb4899 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bb489a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10bb489d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bb48a4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10bb48a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bb48aa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10bb48ad test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10bb48b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bb48b3 jne 0x10bb4934 */
  if (!C.zf) goto L_10bb4934;
  /* 10bb48b5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bb48b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bb48ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb48bb pop edi */
  EDI = (pop32());
  /* 10bb48bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bb48bf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb48c1 jbe 0x10bb48c6 */
  if ((C.cf||C.zf)) goto L_10bb48c6;
  /* 10bb48c3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10bb48c6:;
  /* 10bb48c6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10bb48ca cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb48ce jne 0x10bb4918 */
  if (!C.zf) goto L_10bb4918;
  /* 10bb48d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb48d3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb48d6 jae 0x10bb48f4 */
  if (!C.cf) goto L_10bb48f4;
  /* 10bb48d8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bb48dd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bb48df lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bb48e3 not edi */
  EDI = (~(EDI));
  /* 10bb48e5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bb48e9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bb48eb jne 0x10bb4918 */
  if (!C.zf) goto L_10bb4918;
  /* 10bb48ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb48f0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bb48f2 jmp 0x10bb4918 */
  goto L_10bb4918;
L_10bb48f4:;
  /* 10bb48f4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb48f7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bb48fc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bb48fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb4901 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bb4905 not edi */
  EDI = (~(EDI));
  /* 10bb4907 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10bb490e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bb4910 jne 0x10bb4918 */
  if (!C.zf) goto L_10bb4918;
  /* 10bb4912 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4915 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10bb4918:;
  /* 10bb4918 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10bb491c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10bb4920 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10bb4923 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10bb4927 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10bb492b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb492e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10bb4931 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10bb4934:;
  /* 10bb4934 mov edi, ebx */
  EDI = (EBX);
  /* 10bb4936 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10bb4939 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bb493a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb493d jbe 0x10bb4942 */
  if ((C.cf||C.zf)) goto L_10bb4942;
  /* 10bb493f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bb4941 pop edi */
  EDI = (pop32());
L_10bb4942:;
  /* 10bb4942 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4945 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4948 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bb494b jne 0x10bb49f1 */
  if (!C.zf) goto L_10bb49f1;
  /* 10bb4951 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4954 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4957 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bb495a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bb495c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bb495f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb4960 pop edx */
  EDX = (pop32());
  /* 10bb4961 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4963 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bb4966 jbe 0x10bb496d */
  if ((C.cf||C.zf)) goto L_10bb496d;
  /* 10bb4968 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10bb496b mov ecx, edx */
  ECX = (EDX);
L_10bb496d:;
  /* 10bb496d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4970 mov edi, ebx */
  EDI = (EBX);
  /* 10bb4972 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10bb4975 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10bb4978 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bb4979 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb497b jbe 0x10bb497f */
  if ((C.cf||C.zf)) goto L_10bb497f;
  /* 10bb497d mov edi, edx */
  EDI = (EDX);
L_10bb497f:;
  /* 10bb497f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4981 je 0x10bb49ee */
  if (C.zf) goto L_10bb49ee;
  /* 10bb4983 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bb4986 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bb4989 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb498c jne 0x10bb49d6 */
  if (!C.zf) goto L_10bb49d6;
  /* 10bb498e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb4991 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4994 jae 0x10bb49b2 */
  if (!C.cf) goto L_10bb49b2;
  /* 10bb4996 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bb499b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bb499d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bb49a1 not edx */
  EDX = (~(EDX));
  /* 10bb49a3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bb49a7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bb49a9 jne 0x10bb49d6 */
  if (!C.zf) goto L_10bb49d6;
  /* 10bb49ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb49ae and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bb49b0 jmp 0x10bb49d6 */
  goto L_10bb49d6;
L_10bb49b2:;
  /* 10bb49b2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb49b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bb49ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bb49bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb49bf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bb49c3 not edx */
  EDX = (~(EDX));
  /* 10bb49c5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10bb49cc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bb49ce jne 0x10bb49d6 */
  if (!C.zf) goto L_10bb49d6;
  /* 10bb49d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb49d3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10bb49d6:;
  /* 10bb49d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bb49d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bb49dc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bb49df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bb49e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bb49e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bb49e8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bb49eb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10bb49ee:;
  /* 10bb49ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10bb49f1:;
  /* 10bb49f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb49f5 jne 0x10bb4a00 */
  if (!C.zf) goto L_10bb4a00;
  /* 10bb49f7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb49fa je 0x10bb4a89 */
  if (C.zf) goto L_10bb4a89;
L_10bb4a00:;
  /* 10bb4a00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bb4a03 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10bb4a06 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bb4a09 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bb4a0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bb4a0f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10bb4a12 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bb4a15 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bb4a18 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4a1b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bb4a1e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4a21 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4a24 jne 0x10bb4a89 */
  if (!C.zf) goto L_10bb4a89;
  /* 10bb4a26 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10bb4a2a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4a2d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10bb4a30 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bb4a32 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10bb4a36 jae 0x10bb4a5d */
  if (!C.cf) goto L_10bb4a5d;
  /* 10bb4a38 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4a3c jne 0x10bb4a4c */
  if (!C.zf) goto L_10bb4a4c;
  /* 10bb4a3e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bb4a43 mov ecx, edi */
  ECX = (EDI);
  /* 10bb4a45 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bb4a47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4a4a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10bb4a4c:;
  /* 10bb4a4c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bb4a51 mov ecx, edi */
  ECX = (EDI);
  /* 10bb4a53 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bb4a55 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10bb4a59 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10bb4a5b jmp 0x10bb4a86 */
  goto L_10bb4a86;
L_10bb4a5d:;
  /* 10bb4a5d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4a61 jne 0x10bb4a73 */
  if (!C.zf) goto L_10bb4a73;
  /* 10bb4a63 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10bb4a66 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bb4a6b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bb4a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4a70 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10bb4a73:;
  /* 10bb4a73 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10bb4a76 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bb4a7b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bb4a7d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10bb4a84 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10bb4a86:;
  /* 10bb4a86 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10bb4a89:;
  /* 10bb4a89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bb4a8c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10bb4a8e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10bb4a92 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10bb4a94 jne 0x10bb4b94 */
  if (!C.zf) goto L_10bb4b94;
  /* 10bb4a9a mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb4aa1 je 0x10bb4b86 */
  if (C.zf) goto L_10bb4b86;
  /* 10bb4aa7 mov ecx, dword ptr [0x10bb7fb4] */
  ECX = (r32((uint32_t)(0x10bb7fb4)));
  /* 10bb4aad mov edi, dword ptr [0x10bb6050] */
  EDI = (r32((uint32_t)(0x10bb6050)));
  /* 10bb4ab3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10bb4ab6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4ab9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10bb4abe push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bb4ac3 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4ac4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb4ac5 call edi */
  call_ind((uint32_t)(EDI), 0x10bb4ac7u);
  /* 10bb4ac7 mov ecx, dword ptr [0x10bb7fb4] */
  ECX = (r32((uint32_t)(0x10bb7fb4)));
  /* 10bb4acd mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4ad2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bb4ad7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bb4ad9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bb4adc mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4ae1 mov ecx, dword ptr [0x10bb7fb4] */
  ECX = (r32((uint32_t)(0x10bb7fb4)));
  /* 10bb4ae7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bb4aea and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10bb4af2 mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4af7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bb4afa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10bb4afd mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4b02 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bb4b05 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4b09 jne 0x10bb4b14 */
  if (!C.zf) goto L_10bb4b14;
  /* 10bb4b0b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10bb4b0f mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
L_10bb4b14:;
  /* 10bb4b14 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4b18 jne 0x10bb4b86 */
  if (!C.zf) goto L_10bb4b86;
  /* 10bb4b1a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb4b1d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10bb4b20 call edi */
  call_ind((uint32_t)(EDI), 0x10bb4b22u);
  /* 10bb4b22 mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4b27 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10bb4b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb4b2c push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb4b32 call dword ptr [0x10bb604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb604c))), 0x10bb4b38u);
  /* 10bb4b38 mov eax, dword ptr [0x10bb7fc0] */
  EAX = (r32((uint32_t)(0x10bb7fc0)));
  /* 10bb4b3d mov edx, dword ptr [0x10bb7fc4] */
  EDX = (r32((uint32_t)(0x10bb7fc4)));
  /* 10bb4b43 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb4b46 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10bb4b49 mov ecx, eax */
  ECX = (EAX);
  /* 10bb4b4b mov eax, dword ptr [0x10bb7fbc] */
  EAX = (r32((uint32_t)(0x10bb7fbc)));
  /* 10bb4b50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4b52 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10bb4b56 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb4b57 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10bb4b5a push ecx */
  push32((uint32_t)(ECX));
  /* 10bb4b5b push eax */
  push32((uint32_t)(EAX));
  /* 10bb4b5c call 0x10bb55f0 */
  push32(0x10bb4b61u); f_10bb55f0();
  /* 10bb4b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4b64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4b67 dec dword ptr [0x10bb7fc0] */
  { uint32_t _r=(r32((uint32_t)(0x10bb7fc0)))-1; w32((uint32_t)(0x10bb7fc0), (_r)); fl_dec(_r,32); }
  /* 10bb4b6d cmp eax, dword ptr [0x10bb7fbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bb7fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4b73 jbe 0x10bb4b78 */
  if ((C.cf||C.zf)) goto L_10bb4b78;
  /* 10bb4b75 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10bb4b78:;
  /* 10bb4b78 mov ecx, dword ptr [0x10bb7fc4] */
  ECX = (r32((uint32_t)(0x10bb7fc4)));
  /* 10bb4b7e mov dword ptr [0x10bb7fb8], ecx */
  w32((uint32_t)(0x10bb7fb8), (ECX));
  /* 10bb4b84 jmp 0x10bb4b89 */
  goto L_10bb4b89;
L_10bb4b86:;
  /* 10bb4b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10bb4b89:;
  /* 10bb4b89 mov dword ptr [0x10bb7fbc], eax */
  w32((uint32_t)(0x10bb7fbc), (EAX));
  /* 10bb4b8e mov dword ptr [0x10bb7fb4], esi */
  w32((uint32_t)(0x10bb7fb4), (ESI));
L_10bb4b94:;
  /* 10bb4b94 pop edi */
  EDI = (pop32());
  /* 10bb4b95 pop esi */
  ESI = (pop32());
  /* 10bb4b96 pop ebx */
  EBX = (pop32());
  /* 10bb4b97 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb4b98 ret  */
  ESPCHK(0x10bb486eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b99 @ 0x10bb4b99 (777 bytes, 275 insns) */
void f_10bb4b99(void) {
  FTRACE(0x10bb4b99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4b99 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb4b9a mov ebp, esp */
  EBP = (ESP);
  /* 10bb4b9c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4b9f mov eax, dword ptr [0x10bb7fc0] */
  EAX = (r32((uint32_t)(0x10bb7fc0)));
  /* 10bb4ba4 mov edx, dword ptr [0x10bb7fc4] */
  EDX = (r32((uint32_t)(0x10bb7fc4)));
  /* 10bb4baa push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4bab push esi */
  push32((uint32_t)(ESI));
  /* 10bb4bac lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb4baf push edi */
  push32((uint32_t)(EDI));
  /* 10bb4bb0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10bb4bb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4bb6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10bb4bb9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10bb4bbc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4bbf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bb4bc2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bb4bc5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb4bc6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4bc9 jge 0x10bb4bd9 */
  if ((C.sf==C.of)) goto L_10bb4bd9;
  /* 10bb4bcb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10bb4bce shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10bb4bd0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10bb4bd4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10bb4bd7 jmp 0x10bb4be9 */
  goto L_10bb4be9;
L_10bb4bd9:;
  /* 10bb4bd9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4bdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4bdf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bb4be1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bb4be3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10bb4be6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bb4be9:;
  /* 10bb4be9 mov eax, dword ptr [0x10bb7fb8] */
  EAX = (r32((uint32_t)(0x10bb7fb8)));
  /* 10bb4bee mov ebx, eax */
  EBX = (EAX);
  /* 10bb4bf0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4bf2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4bf5 jae 0x10bb4c10 */
  if (!C.cf) goto L_10bb4c10;
L_10bb4bf7:;
  /* 10bb4bf7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10bb4bfa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10bb4bfc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4bff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb4c01 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4c03 jne 0x10bb4c10 */
  if (!C.zf) goto L_10bb4c10;
  /* 10bb4c05 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4c08 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c0b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4c0e jb 0x10bb4bf7 */
  if (C.cf) goto L_10bb4bf7;
L_10bb4c10:;
  /* 10bb4c10 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c13 jne 0x10bb4c8e */
  if (!C.zf) goto L_10bb4c8e;
  /* 10bb4c15 mov ebx, edx */
  EBX = (EDX);
L_10bb4c17:;
  /* 10bb4c17 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c19 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4c1c jae 0x10bb4c33 */
  if (!C.cf) goto L_10bb4c33;
  /* 10bb4c1e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10bb4c21 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10bb4c23 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4c26 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb4c28 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4c2a jne 0x10bb4c31 */
  if (!C.zf) goto L_10bb4c31;
  /* 10bb4c2c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4c2f jmp 0x10bb4c17 */
  goto L_10bb4c17;
L_10bb4c31:;
  /* 10bb4c31 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10bb4c33:;
  /* 10bb4c33 jne 0x10bb4c8e */
  if (!C.zf) goto L_10bb4c8e;
L_10bb4c35:;
  /* 10bb4c35 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c38 jae 0x10bb4c4b */
  if (!C.cf) goto L_10bb4c4b;
  /* 10bb4c3a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c3e jne 0x10bb4c48 */
  if (!C.zf) goto L_10bb4c48;
  /* 10bb4c40 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4c43 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4c46 jmp 0x10bb4c35 */
  goto L_10bb4c35;
L_10bb4c48:;
  /* 10bb4c48 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10bb4c4b:;
  /* 10bb4c4b jne 0x10bb4c73 */
  if (!C.zf) goto L_10bb4c73;
  /* 10bb4c4d mov ebx, edx */
  EBX = (EDX);
L_10bb4c4f:;
  /* 10bb4c4f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c51 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4c54 jae 0x10bb4c63 */
  if (!C.cf) goto L_10bb4c63;
  /* 10bb4c56 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c5a jne 0x10bb4c61 */
  if (!C.zf) goto L_10bb4c61;
  /* 10bb4c5c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4c5f jmp 0x10bb4c4f */
  goto L_10bb4c4f;
L_10bb4c61:;
  /* 10bb4c61 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10bb4c63:;
  /* 10bb4c63 jne 0x10bb4c73 */
  if (!C.zf) goto L_10bb4c73;
  /* 10bb4c65 call 0x10bb4ea2 */
  push32(0x10bb4c6au); f_10bb4ea2();
  /* 10bb4c6a mov ebx, eax */
  EBX = (EAX);
  /* 10bb4c6c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bb4c6e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bb4c71 je 0x10bb4c87 */
  if (C.zf) goto L_10bb4c87;
L_10bb4c73:;
  /* 10bb4c73 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4c74 call 0x10bb4f53 */
  push32(0x10bb4c79u); f_10bb4f53();
  /* 10bb4c79 pop ecx */
  ECX = (pop32());
  /* 10bb4c7a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10bb4c7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bb4c7f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10bb4c82 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c85 jne 0x10bb4c8e */
  if (!C.zf) goto L_10bb4c8e;
L_10bb4c87:;
  /* 10bb4c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4c89 jmp 0x10bb4e9d */
  goto L_10bb4e9d;
L_10bb4c8e:;
  /* 10bb4c8e mov dword ptr [0x10bb7fb8], ebx */
  w32((uint32_t)(0x10bb7fb8), (EBX));
  /* 10bb4c94 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10bb4c97 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10bb4c99 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4c9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bb4c9f je 0x10bb4cb5 */
  if (C.zf) goto L_10bb4cb5;
  /* 10bb4ca1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10bb4ca8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10bb4cac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4caf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb4cb1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4cb3 jne 0x10bb4cec */
  if (!C.zf) goto L_10bb4cec;
L_10bb4cb5:;
  /* 10bb4cb5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10bb4cbb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10bb4cbe and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4cc1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10bb4cc4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb4cc8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10bb4ccb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4ccd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10bb4cd0 jne 0x10bb4ce9 */
  if (!C.zf) goto L_10bb4ce9;
L_10bb4cd2:;
  /* 10bb4cd2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10bb4cd8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10bb4cdb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4cde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4ce1 mov edi, esi */
  EDI = (ESI);
  /* 10bb4ce3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10bb4ce5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10bb4ce7 je 0x10bb4cd2 */
  if (C.zf) goto L_10bb4cd2;
L_10bb4ce9:;
  /* 10bb4ce9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10bb4cec:;
  /* 10bb4cec mov ecx, edx */
  ECX = (EDX);
  /* 10bb4cee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb4cf0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bb4cf6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bb4cfd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bb4d00 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10bb4d04 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4d06 jne 0x10bb4d15 */
  if (!C.zf) goto L_10bb4d15;
  /* 10bb4d08 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10bb4d0f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bb4d11 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bb4d14 pop edi */
  EDI = (pop32());
L_10bb4d15:;
  /* 10bb4d15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bb4d17 jl 0x10bb4d1e */
  if ((C.sf!=C.of)) goto L_10bb4d1e;
  /* 10bb4d19 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bb4d1b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb4d1c jmp 0x10bb4d15 */
  goto L_10bb4d15;
L_10bb4d1e:;
  /* 10bb4d1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bb4d21 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10bb4d25 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10bb4d27 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb4d2a mov esi, ecx */
  ESI = (ECX);
  /* 10bb4d2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bb4d2f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10bb4d32 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bb4d33 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4d36 jle 0x10bb4d3b */
  if ((C.zf||C.sf!=C.of)) goto L_10bb4d3b;
  /* 10bb4d38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bb4d3a pop esi */
  ESI = (pop32());
L_10bb4d3b:;
  /* 10bb4d3b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4d3d je 0x10bb4e50 */
  if (C.zf) goto L_10bb4e50;
  /* 10bb4d43 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4d46 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4d49 jne 0x10bb4dac */
  if (!C.zf) goto L_10bb4dac;
  /* 10bb4d4b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4d4e jge 0x10bb4d7b */
  if ((C.sf==C.of)) goto L_10bb4d7b;
  /* 10bb4d50 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bb4d55 mov ecx, edi */
  ECX = (EDI);
  /* 10bb4d57 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bb4d59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4d5c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10bb4d60 not ebx */
  EBX = (~(EBX));
  /* 10bb4d62 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10bb4d65 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10bb4d69 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10bb4d6d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10bb4d6f jne 0x10bb4da9 */
  if (!C.zf) goto L_10bb4da9;
  /* 10bb4d71 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4d74 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bb4d77 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10bb4d79 jmp 0x10bb4dac */
  goto L_10bb4dac;
L_10bb4d7b:;
  /* 10bb4d7b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10bb4d7e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bb4d83 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bb4d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4d88 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10bb4d8c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10bb4d93 not ebx */
  EBX = (~(EBX));
  /* 10bb4d95 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bb4d97 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10bb4d99 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10bb4d9c jne 0x10bb4da9 */
  if (!C.zf) goto L_10bb4da9;
  /* 10bb4d9e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4da1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bb4da4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10bb4da7 jmp 0x10bb4dac */
  goto L_10bb4dac;
L_10bb4da9:;
  /* 10bb4da9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10bb4dac:;
  /* 10bb4dac mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bb4daf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4db2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4db6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10bb4db9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4dbc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10bb4dbf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10bb4dc2 je 0x10bb4e5c */
  if (C.zf) goto L_10bb4e5c;
  /* 10bb4dc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bb4dcb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10bb4dcf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10bb4dd2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10bb4dd5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bb4dd8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bb4ddb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4dde mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bb4de1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bb4de4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4de7 jne 0x10bb4e4d */
  if (!C.zf) goto L_10bb4e4d;
  /* 10bb4de9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10bb4ded cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4df0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10bb4df3 jge 0x10bb4e1e */
  if ((C.sf==C.of)) goto L_10bb4e1e;
  /* 10bb4df5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bb4df7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4dfb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10bb4dff jne 0x10bb4e0c */
  if (!C.zf) goto L_10bb4e0c;
  /* 10bb4e01 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bb4e06 mov ecx, esi */
  ECX = (ESI);
  /* 10bb4e08 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bb4e0a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10bb4e0c:;
  /* 10bb4e0c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bb4e11 mov ecx, esi */
  ECX = (ESI);
  /* 10bb4e13 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bb4e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4e18 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bb4e1c jmp 0x10bb4e4d */
  goto L_10bb4e4d;
L_10bb4e1e:;
  /* 10bb4e1e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bb4e20 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb4e24 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10bb4e28 jne 0x10bb4e37 */
  if (!C.zf) goto L_10bb4e37;
  /* 10bb4e2a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10bb4e2d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bb4e32 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bb4e34 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10bb4e37:;
  /* 10bb4e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4e3a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10bb4e41 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10bb4e44 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10bb4e49 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10bb4e4b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10bb4e4d:;
  /* 10bb4e4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10bb4e50:;
  /* 10bb4e50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bb4e52 je 0x10bb4e5f */
  if (C.zf) goto L_10bb4e5f;
  /* 10bb4e54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bb4e56 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10bb4e5a jmp 0x10bb4e5f */
  goto L_10bb4e5f;
L_10bb4e5c:;
  /* 10bb4e5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10bb4e5f:;
  /* 10bb4e5f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10bb4e62 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4e64 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10bb4e67 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bb4e69 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10bb4e6d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10bb4e70 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10bb4e72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bb4e74 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10bb4e77 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bb4e79 jne 0x10bb4e95 */
  if (!C.zf) goto L_10bb4e95;
  /* 10bb4e7b cmp ebx, dword ptr [0x10bb7fbc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bb7fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4e81 jne 0x10bb4e95 */
  if (!C.zf) goto L_10bb4e95;
  /* 10bb4e83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4e86 cmp ecx, dword ptr [0x10bb7fb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bb7fb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4e8c jne 0x10bb4e95 */
  if (!C.zf) goto L_10bb4e95;
  /* 10bb4e8e and dword ptr [0x10bb7fbc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bb7fbc)))&(0x0u); w32((uint32_t)(0x10bb7fbc), (_r)); fl_logic(_r,32); }
L_10bb4e95:;
  /* 10bb4e95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4e98 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bb4e9a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10bb4e9d:;
  /* 10bb4e9d pop edi */
  EDI = (pop32());
  /* 10bb4e9e pop esi */
  ESI = (pop32());
  /* 10bb4e9f pop ebx */
  EBX = (pop32());
  /* 10bb4ea0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb4ea1 ret  */
  ESPCHK(0x10bb4b99u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea2 @ 0x10bb4ea2 (177 bytes, 53 insns) */
void f_10bb4ea2(void) {
  FTRACE(0x10bb4ea2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4ea2 mov eax, dword ptr [0x10bb7fc0] */
  EAX = (r32((uint32_t)(0x10bb7fc0)));
  /* 10bb4ea7 mov ecx, dword ptr [0x10bb7fb0] */
  ECX = (r32((uint32_t)(0x10bb7fb0)));
  /* 10bb4ead push esi */
  push32((uint32_t)(ESI));
  /* 10bb4eae push edi */
  push32((uint32_t)(EDI));
  /* 10bb4eaf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb4eb1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4eb3 jne 0x10bb4ee5 */
  if (!C.zf) goto L_10bb4ee5;
  /* 10bb4eb5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10bb4eb9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10bb4ebc push eax */
  push32((uint32_t)(EAX));
  /* 10bb4ebd push dword ptr [0x10bb7fc4] */
  push32((uint32_t)(r32((uint32_t)(0x10bb7fc4))));
  /* 10bb4ec3 push edi */
  push32((uint32_t)(EDI));
  /* 10bb4ec4 push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb4eca call dword ptr [0x10bb6028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6028))), 0x10bb4ed0u);
  /* 10bb4ed0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4ed2 je 0x10bb4f35 */
  if (C.zf) goto L_10bb4f35;
  /* 10bb4ed4 add dword ptr [0x10bb7fb0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10bb7fb0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10bb7fb0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10bb4edb mov dword ptr [0x10bb7fc4], eax */
  w32((uint32_t)(0x10bb7fc4), (EAX));
  /* 10bb4ee0 mov eax, dword ptr [0x10bb7fc0] */
  EAX = (r32((uint32_t)(0x10bb7fc0)));
L_10bb4ee5:;
  /* 10bb4ee5 mov ecx, dword ptr [0x10bb7fc4] */
  ECX = (r32((uint32_t)(0x10bb7fc4)));
  /* 10bb4eeb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10bb4ef0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bb4ef2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bb4ef5 push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb4efb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10bb4efe call dword ptr [0x10bb603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb603c))), 0x10bb4f04u);
  /* 10bb4f04 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4f06 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10bb4f09 je 0x10bb4f35 */
  if (C.zf) goto L_10bb4f35;
  /* 10bb4f0b push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb4f0d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10bb4f12 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10bb4f17 push edi */
  push32((uint32_t)(EDI));
  /* 10bb4f18 call dword ptr [0x10bb602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb602c))), 0x10bb4f1eu);
  /* 10bb4f1e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4f20 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10bb4f23 jne 0x10bb4f39 */
  if (!C.zf) goto L_10bb4f39;
  /* 10bb4f25 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10bb4f28 push edi */
  push32((uint32_t)(EDI));
  /* 10bb4f29 push dword ptr [0x10bb81e8] */
  push32((uint32_t)(r32((uint32_t)(0x10bb81e8))));
  /* 10bb4f2f call dword ptr [0x10bb604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb604c))), 0x10bb4f35u);
L_10bb4f35:;
  /* 10bb4f35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4f37 jmp 0x10bb4f50 */
  goto L_10bb4f50;
L_10bb4f39:;
  /* 10bb4f39 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bb4f3d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bb4f3f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10bb4f42 inc dword ptr [0x10bb7fc0] */
  { uint32_t _r=(r32((uint32_t)(0x10bb7fc0)))+1; w32((uint32_t)(0x10bb7fc0), (_r)); fl_inc(_r,32); }
  /* 10bb4f48 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10bb4f4b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10bb4f4e mov eax, esi */
  EAX = (ESI);
L_10bb4f50:;
  /* 10bb4f50 pop edi */
  EDI = (pop32());
  /* 10bb4f51 pop esi */
  ESI = (pop32());
  /* 10bb4f52 ret  */
  ESPCHK(0x10bb4ea2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f53 @ 0x10bb4f53 (251 bytes, 85 insns) */
void f_10bb4f53(void) {
  FTRACE(0x10bb4f53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb4f53 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb4f54 mov ebp, esp */
  EBP = (ESP);
  /* 10bb4f56 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb4f57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb4f5a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb4f5b push esi */
  push32((uint32_t)(ESI));
  /* 10bb4f5c push edi */
  push32((uint32_t)(EDI));
  /* 10bb4f5d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10bb4f60 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bb4f63 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10bb4f65:;
  /* 10bb4f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb4f67 jl 0x10bb4f6e */
  if ((C.sf!=C.of)) goto L_10bb4f6e;
  /* 10bb4f69 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bb4f6b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bb4f6c jmp 0x10bb4f65 */
  goto L_10bb4f65;
L_10bb4f6e:;
  /* 10bb4f6e mov eax, ebx */
  EAX = (EBX);
  /* 10bb4f70 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bb4f72 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bb4f78 pop edx */
  EDX = (pop32());
  /* 10bb4f79 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10bb4f80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bb4f83:;
  /* 10bb4f83 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10bb4f86 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10bb4f89 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4f8c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10bb4f8d jne 0x10bb4f83 */
  if (!C.zf) goto L_10bb4f83;
  /* 10bb4f8f mov edi, ebx */
  EDI = (EBX);
  /* 10bb4f91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bb4f93 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10bb4f96 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4f99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bb4f9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bb4fa3 push edi */
  push32((uint32_t)(EDI));
  /* 10bb4fa4 call dword ptr [0x10bb602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb602c))), 0x10bb4faau);
  /* 10bb4faa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb4fac jne 0x10bb4fb6 */
  if (!C.zf) goto L_10bb4fb6;
  /* 10bb4fae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb4fb1 jmp 0x10bb5049 */
  goto L_10bb5049;
L_10bb4fb6:;
  /* 10bb4fb6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10bb4fbc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4fbe ja 0x10bb4ffc */
  if ((!C.cf&&!C.zf)) goto L_10bb4ffc;
  /* 10bb4fc0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10bb4fc3:;
  /* 10bb4fc3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10bb4fc7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10bb4fce lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10bb4fd4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10bb4fdb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bb4fdd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10bb4fe3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bb4fe6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10bb4ff0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb4ff5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10bb4ff8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb4ffa jbe 0x10bb4fc3 */
  if ((C.cf||C.zf)) goto L_10bb4fc3;
L_10bb4ffc:;
  /* 10bb4ffc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bb4fff lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10bb5002 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5007 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb5009 pop edi */
  EDI = (pop32());
  /* 10bb500a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bb500d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10bb5010 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10bb5013 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10bb5016 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bb5019 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bb501e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10bb5025 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10bb5028 mov cl, al */
  CL = (AL);
  /* 10bb502a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bb502c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb502e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5031 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10bb5034 jne 0x10bb5039 */
  if (!C.zf) goto L_10bb5039;
  /* 10bb5036 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10bb5039:;
  /* 10bb5039 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bb503e mov ecx, ebx */
  ECX = (EBX);
  /* 10bb5040 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bb5042 not edx */
  EDX = (~(EDX));
  /* 10bb5044 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bb5047 mov eax, ebx */
  EAX = (EBX);
L_10bb5049:;
  /* 10bb5049 pop edi */
  EDI = (pop32());
  /* 10bb504a pop esi */
  ESI = (pop32());
  /* 10bb504b pop ebx */
  EBX = (pop32());
  /* 10bb504c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb504d ret  */
  ESPCHK(0x10bb4f53u, _esp0);
  ESP += 4; return;
}

/* FUN_1000504e @ 0x10bb504e (137 bytes, 50 insns) */
void f_10bb504e(void) {
  FTRACE(0x10bb504eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb504e push ebx */
  push32((uint32_t)(EBX));
  /* 10bb504f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb5051 cmp dword ptr [0x10bb7f74], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bb7f74))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5057 push esi */
  push32((uint32_t)(ESI));
  /* 10bb5058 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5059 jne 0x10bb509d */
  if (!C.zf) goto L_10bb509d;
  /* 10bb505b push 0x10bb6490 */
  push32((uint32_t)(0x10bb6490u));
  /* 10bb5060 call dword ptr [0x10bb601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb601c))), 0x10bb5066u);
  /* 10bb5066 mov edi, eax */
  EDI = (EAX);
  /* 10bb5068 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb506a je 0x10bb50d3 */
  if (C.zf) goto L_10bb50d3;
  /* 10bb506c mov esi, dword ptr [0x10bb6020] */
  ESI = (r32((uint32_t)(0x10bb6020)));
  /* 10bb5072 push 0x10bb6484 */
  push32((uint32_t)(0x10bb6484u));
  /* 10bb5077 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5078 call esi */
  call_ind((uint32_t)(ESI), 0x10bb507au);
  /* 10bb507a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb507c mov dword ptr [0x10bb7f74], eax */
  w32((uint32_t)(0x10bb7f74), (EAX));
  /* 10bb5081 je 0x10bb50d3 */
  if (C.zf) goto L_10bb50d3;
  /* 10bb5083 push 0x10bb6474 */
  push32((uint32_t)(0x10bb6474u));
  /* 10bb5088 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5089 call esi */
  call_ind((uint32_t)(ESI), 0x10bb508bu);
  /* 10bb508b push 0x10bb6460 */
  push32((uint32_t)(0x10bb6460u));
  /* 10bb5090 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5091 mov dword ptr [0x10bb7f78], eax */
  w32((uint32_t)(0x10bb7f78), (EAX));
  /* 10bb5096 call esi */
  call_ind((uint32_t)(ESI), 0x10bb5098u);
  /* 10bb5098 mov dword ptr [0x10bb7f7c], eax */
  w32((uint32_t)(0x10bb7f7c), (EAX));
L_10bb509d:;
  /* 10bb509d mov eax, dword ptr [0x10bb7f78] */
  EAX = (r32((uint32_t)(0x10bb7f78)));
  /* 10bb50a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb50a4 je 0x10bb50bc */
  if (C.zf) goto L_10bb50bc;
  /* 10bb50a6 call eax */
  call_ind((uint32_t)(EAX), 0x10bb50a8u);
  /* 10bb50a8 mov ebx, eax */
  EBX = (EAX);
  /* 10bb50aa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bb50ac je 0x10bb50bc */
  if (C.zf) goto L_10bb50bc;
  /* 10bb50ae mov eax, dword ptr [0x10bb7f7c] */
  EAX = (r32((uint32_t)(0x10bb7f7c)));
  /* 10bb50b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb50b5 je 0x10bb50bc */
  if (C.zf) goto L_10bb50bc;
  /* 10bb50b7 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb50b8 call eax */
  call_ind((uint32_t)(EAX), 0x10bb50bau);
  /* 10bb50ba mov ebx, eax */
  EBX = (EAX);
L_10bb50bc:;
  /* 10bb50bc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10bb50c0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10bb50c4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10bb50c8 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb50c9 call dword ptr [0x10bb7f74] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb7f74))), 0x10bb50cfu);
L_10bb50cf:;
  /* 10bb50cf pop edi */
  EDI = (pop32());
  /* 10bb50d0 pop esi */
  ESI = (pop32());
  /* 10bb50d1 pop ebx */
  EBX = (pop32());
  /* 10bb50d2 ret  */
  ESPCHK(0x10bb504eu, _esp0);
  ESP += 4; return;
L_10bb50d3:;
  /* 10bb50d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb50d5 jmp 0x10bb50cf */
  goto L_10bb50cf;
}

/* _strncpy @ 0x10bb50e0 (254 bytes, 109 insns) */
void f_10bb50e0(void) {
  FTRACE(0x10bb50e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb50e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bb50e4 push edi */
  push32((uint32_t)(EDI));
  /* 10bb50e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bb50e7 je 0x10bb5163 */
  if (C.zf) goto L_10bb5163;
  /* 10bb50e9 push esi */
  push32((uint32_t)(ESI));
  /* 10bb50ea push ebx */
  push32((uint32_t)(EBX));
  /* 10bb50eb mov ebx, ecx */
  EBX = (ECX);
  /* 10bb50ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10bb50f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10bb50f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10bb50fb jne 0x10bb5104 */
  if (!C.zf) goto L_10bb5104;
  /* 10bb50fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb5100 jne 0x10bb5171 */
  if (!C.zf) goto L_10bb5171;
  /* 10bb5102 jmp 0x10bb5125 */
  goto L_10bb5125;
L_10bb5104:;
  /* 10bb5104 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb5106 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb5107 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5109 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb510a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb510b je 0x10bb5132 */
  if (C.zf) goto L_10bb5132;
  /* 10bb510d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb510f je 0x10bb513a */
  if (C.zf) goto L_10bb513a;
  /* 10bb5111 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10bb5117 jne 0x10bb5104 */
  if (!C.zf) goto L_10bb5104;
  /* 10bb5119 mov ebx, ecx */
  EBX = (ECX);
  /* 10bb511b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb511e jne 0x10bb5171 */
  if (!C.zf) goto L_10bb5171;
L_10bb5120:;
  /* 10bb5120 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10bb5123 je 0x10bb5132 */
  if (C.zf) goto L_10bb5132;
L_10bb5125:;
  /* 10bb5125 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb5127 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb5128 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb512a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb512b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bb512d je 0x10bb515e */
  if (C.zf) goto L_10bb515e;
  /* 10bb512f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bb5130 jne 0x10bb5125 */
  if (!C.zf) goto L_10bb5125;
L_10bb5132:;
  /* 10bb5132 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bb5136 pop ebx */
  EBX = (pop32());
  /* 10bb5137 pop esi */
  ESI = (pop32());
  /* 10bb5138 pop edi */
  EDI = (pop32());
  /* 10bb5139 ret  */
  ESPCHK(0x10bb50e0u, _esp0);
  ESP += 4; return;
L_10bb513a:;
  /* 10bb513a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bb5140 je 0x10bb5154 */
  if (C.zf) goto L_10bb5154;
L_10bb5142:;
  /* 10bb5142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5144 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb5145 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb5146 je 0x10bb51d6 */
  if (C.zf) goto L_10bb51d6;
  /* 10bb514c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bb5152 jne 0x10bb5142 */
  if (!C.zf) goto L_10bb5142;
L_10bb5154:;
  /* 10bb5154 mov ebx, ecx */
  EBX = (ECX);
  /* 10bb5156 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb5159 jne 0x10bb51c7 */
  if (!C.zf) goto L_10bb51c7;
L_10bb515b:;
  /* 10bb515b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb515d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10bb515e:;
  /* 10bb515e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bb515f jne 0x10bb515b */
  if (!C.zf) goto L_10bb515b;
  /* 10bb5161 pop ebx */
  EBX = (pop32());
  /* 10bb5162 pop esi */
  ESI = (pop32());
L_10bb5163:;
  /* 10bb5163 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb5167 pop edi */
  EDI = (pop32());
  /* 10bb5168 ret  */
  ESPCHK(0x10bb50e0u, _esp0);
  ESP += 4; return;
L_10bb5169:;
  /* 10bb5169 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bb516b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb516e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb516f je 0x10bb5120 */
  if (C.zf) goto L_10bb5120;
L_10bb5171:;
  /* 10bb5171 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bb5176 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bb5178 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb517a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bb517d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb517f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10bb5181 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5184 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bb5189 je 0x10bb5169 */
  if (C.zf) goto L_10bb5169;
  /* 10bb518b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bb518d je 0x10bb51bb */
  if (C.zf) goto L_10bb51bb;
  /* 10bb518f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10bb5191 je 0x10bb51b1 */
  if (C.zf) goto L_10bb51b1;
  /* 10bb5193 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bb5199 je 0x10bb51a7 */
  if (C.zf) goto L_10bb51a7;
  /* 10bb519b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bb51a1 jne 0x10bb5169 */
  if (!C.zf) goto L_10bb5169;
  /* 10bb51a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bb51a5 jmp 0x10bb51bf */
  goto L_10bb51bf;
L_10bb51a7:;
  /* 10bb51a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bb51ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bb51af jmp 0x10bb51bf */
  goto L_10bb51bf;
L_10bb51b1:;
  /* 10bb51b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bb51b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bb51b9 jmp 0x10bb51bf */
  goto L_10bb51bf;
L_10bb51bb:;
  /* 10bb51bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb51bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10bb51bf:;
  /* 10bb51bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb51c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb51c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb51c5 je 0x10bb51d1 */
  if (C.zf) goto L_10bb51d1;
L_10bb51c7:;
  /* 10bb51c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bb51c9:;
  /* 10bb51c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10bb51cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb51ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb51cf jne 0x10bb51c9 */
  if (!C.zf) goto L_10bb51c9;
L_10bb51d1:;
  /* 10bb51d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10bb51d4 jne 0x10bb515b */
  if (!C.zf) goto L_10bb515b;
L_10bb51d6:;
  /* 10bb51d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bb51da pop ebx */
  EBX = (pop32());
  /* 10bb51db pop esi */
  ESI = (pop32());
  /* 10bb51dc pop edi */
  EDI = (pop32());
  /* 10bb51dd ret  */
  ESPCHK(0x10bb50e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10bb51e0 (88 bytes, 40 insns) */
void f_10bb51e0(void) {
  FTRACE(0x10bb51e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb51e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bb51e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb51e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bb51ea je 0x10bb5233 */
  if (C.zf) goto L_10bb5233;
  /* 10bb51ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb51ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10bb51f2 push edi */
  push32((uint32_t)(EDI));
  /* 10bb51f3 mov edi, ecx */
  EDI = (ECX);
  /* 10bb51f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb51f8 jb 0x10bb5227 */
  if (C.cf) goto L_10bb5227;
  /* 10bb51fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bb51fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10bb51ff je 0x10bb5209 */
  if (C.zf) goto L_10bb5209;
  /* 10bb5201 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10bb5203:;
  /* 10bb5203 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5205 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb5206 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb5207 jne 0x10bb5203 */
  if (!C.zf) goto L_10bb5203;
L_10bb5209:;
  /* 10bb5209 mov ecx, eax */
  ECX = (EAX);
  /* 10bb520b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10bb520e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5210 mov ecx, eax */
  ECX = (EAX);
  /* 10bb5212 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bb5215 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5217 mov ecx, edx */
  ECX = (EDX);
  /* 10bb5219 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bb521c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb521f je 0x10bb5227 */
  if (C.zf) goto L_10bb5227;
  /* 10bb5221 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bb5223 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bb5225 je 0x10bb522d */
  if (C.zf) goto L_10bb522d;
L_10bb5227:;
  /* 10bb5227 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5229 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb522a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10bb522b jne 0x10bb5227 */
  if (!C.zf) goto L_10bb5227;
L_10bb522d:;
  /* 10bb522d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb5231 pop edi */
  EDI = (pop32());
  /* 10bb5232 ret  */
  ESPCHK(0x10bb51e0u, _esp0);
  ESP += 4; return;
L_10bb5233:;
  /* 10bb5233 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb5237 ret  */
  ESPCHK(0x10bb51e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005238 @ 0x10bb5238 (27 bytes, 13 insns) */
void f_10bb5238(void) {
  FTRACE(0x10bb5238u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5238 mov eax, dword ptr [0x10bb7f80] */
  EAX = (r32((uint32_t)(0x10bb7f80)));
  /* 10bb523d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb523f je 0x10bb5250 */
  if (C.zf) goto L_10bb5250;
  /* 10bb5241 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bb5245 call eax */
  call_ind((uint32_t)(EAX), 0x10bb5247u);
  /* 10bb5247 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb5249 pop ecx */
  ECX = (pop32());
  /* 10bb524a je 0x10bb5250 */
  if (C.zf) goto L_10bb5250;
  /* 10bb524c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb524e pop eax */
  EAX = (pop32());
  /* 10bb524f ret  */
  ESPCHK(0x10bb5238u, _esp0);
  ESP += 4; return;
L_10bb5250:;
  /* 10bb5250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bb5252 ret  */
  ESPCHK(0x10bb5238u, _esp0);
  ESP += 4; return;
}

/* FUN_10005253 @ 0x10bb5253 (511 bytes, 193 insns) */
void f_10bb5253(void) {
  FTRACE(0x10bb5253u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5253 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb5254 mov ebp, esp */
  EBP = (ESP);
  /* 10bb5256 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bb5258 push 0x10bb64a8 */
  push32((uint32_t)(0x10bb64a8u));
  /* 10bb525d push 0x10bb5a20 */
  push32((uint32_t)(0x10bb5a20u));
  /* 10bb5262 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10bb5268 push eax */
  push32((uint32_t)(EAX));
  /* 10bb5269 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10bb5270 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb5273 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5274 push esi */
  push32((uint32_t)(ESI));
  /* 10bb5275 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5276 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bb5279 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb527b cmp dword ptr [0x10bb7fa8], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bb7fa8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5281 jne 0x10bb52c9 */
  if (!C.zf) goto L_10bb52c9;
  /* 10bb5283 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5284 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5285 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb5287 pop ebx */
  EBX = (pop32());
  /* 10bb5288 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5289 push 0x10bb64a0 */
  push32((uint32_t)(0x10bb64a0u));
  /* 10bb528e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10bb5293 push esi */
  push32((uint32_t)(ESI));
  /* 10bb5294 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5295 call dword ptr [0x10bb6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6010))), 0x10bb529bu);
  /* 10bb529b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb529d je 0x10bb52a7 */
  if (C.zf) goto L_10bb52a7;
  /* 10bb529f mov dword ptr [0x10bb7fa8], ebx */
  w32((uint32_t)(0x10bb7fa8), (EBX));
  /* 10bb52a5 jmp 0x10bb52c9 */
  goto L_10bb52c9;
L_10bb52a7:;
  /* 10bb52a7 push edi */
  push32((uint32_t)(EDI));
  /* 10bb52a8 push edi */
  push32((uint32_t)(EDI));
  /* 10bb52a9 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb52aa push 0x10bb649c */
  push32((uint32_t)(0x10bb649cu));
  /* 10bb52af push esi */
  push32((uint32_t)(ESI));
  /* 10bb52b0 push edi */
  push32((uint32_t)(EDI));
  /* 10bb52b1 call dword ptr [0x10bb6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6014))), 0x10bb52b7u);
  /* 10bb52b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb52b9 je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb52bf mov dword ptr [0x10bb7fa8], 2 */
  w32((uint32_t)(0x10bb7fa8), (0x2u));
L_10bb52c9:;
  /* 10bb52c9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb52cc jle 0x10bb52de */
  if ((C.zf||C.sf!=C.of)) goto L_10bb52de;
  /* 10bb52ce push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bb52d1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb52d4 call 0x10bb5477 */
  push32(0x10bb52d9u); f_10bb5477();
  /* 10bb52d9 pop ecx */
  ECX = (pop32());
  /* 10bb52da pop ecx */
  ECX = (pop32());
  /* 10bb52db mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10bb52de:;
  /* 10bb52de mov eax, dword ptr [0x10bb7fa8] */
  EAX = (r32((uint32_t)(0x10bb7fa8)));
  /* 10bb52e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb52e6 jne 0x10bb5305 */
  if (!C.zf) goto L_10bb5305;
  /* 10bb52e8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10bb52eb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bb52ee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bb52f1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb52f4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb52f7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb52fa call dword ptr [0x10bb6014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6014))), 0x10bb5300u);
  /* 10bb5300 jmp 0x10bb53e3 */
  goto L_10bb53e3;
L_10bb5305:;
  /* 10bb5305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5308 jne 0x10bb53e1 */
  if (!C.zf) goto L_10bb53e1;
  /* 10bb530e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5311 jne 0x10bb531b */
  if (!C.zf) goto L_10bb531b;
  /* 10bb5313 mov eax, dword ptr [0x10bb7fa0] */
  EAX = (r32((uint32_t)(0x10bb7fa0)));
  /* 10bb5318 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10bb531b:;
  /* 10bb531b push edi */
  push32((uint32_t)(EDI));
  /* 10bb531c push edi */
  push32((uint32_t)(EDI));
  /* 10bb531d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bb5320 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb5323 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10bb5326 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bb5328 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb532a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10bb532d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb532e push eax */
  push32((uint32_t)(EAX));
  /* 10bb532f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10bb5332 call dword ptr [0x10bb6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6024))), 0x10bb5338u);
  /* 10bb5338 mov ebx, eax */
  EBX = (EAX);
  /* 10bb533a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10bb533d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb533f je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb5345 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10bb5348 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10bb534b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb534e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bb5350 call 0x10bb5b00 */
  push32(0x10bb5355u); f_10bb5b00();
  /* 10bb5355 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bb5358 mov eax, esp */
  EAX = (ESP);
  /* 10bb535a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bb535d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb5361 jmp 0x10bb5376 */
  goto L_10bb5376;
  /* 10bb5363 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb5365 pop eax */
  EAX = (pop32());
  /* 10bb5366 ret  */
  ESPCHK(0x10bb5253u, _esp0);
  ESP += 4; return;
  /* 10bb5367 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bb536a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb536c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10bb536f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb5373 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10bb5376:;
  /* 10bb5376 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5379 je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb537b push ebx */
  push32((uint32_t)(EBX));
  /* 10bb537c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bb537f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bb5382 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb5385 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb5387 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10bb538a call dword ptr [0x10bb6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6024))), 0x10bb5390u);
  /* 10bb5390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb5392 je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb5394 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5395 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5396 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5397 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bb539a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb539d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb53a0 call dword ptr [0x10bb6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6010))), 0x10bb53a6u);
  /* 10bb53a6 mov esi, eax */
  ESI = (EAX);
  /* 10bb53a8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10bb53ab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb53ad je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb53af test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10bb53b3 je 0x10bb53f5 */
  if (C.zf) goto L_10bb53f5;
  /* 10bb53b5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb53b8 je 0x10bb5470 */
  if (C.zf) goto L_10bb5470;
  /* 10bb53be cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb53c1 jg 0x10bb53e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bb53e1;
  /* 10bb53c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10bb53c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bb53c9 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb53ca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bb53cd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb53d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb53d3 call dword ptr [0x10bb6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6010))), 0x10bb53d9u);
  /* 10bb53d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb53db jne 0x10bb5470 */
  if (!C.zf) goto L_10bb5470;
L_10bb53e1:;
  /* 10bb53e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bb53e3:;
  /* 10bb53e3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10bb53e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bb53e9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10bb53f0 pop edi */
  EDI = (pop32());
  /* 10bb53f1 pop esi */
  ESI = (pop32());
  /* 10bb53f2 pop ebx */
  EBX = (pop32());
  /* 10bb53f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb53f4 ret  */
  ESPCHK(0x10bb5253u, _esp0);
  ESP += 4; return;
L_10bb53f5:;
  /* 10bb53f5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bb53fc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10bb53ff add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5402 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bb5404 call 0x10bb5b00 */
  push32(0x10bb5409u); f_10bb5b00();
  /* 10bb5409 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bb540c mov ebx, esp */
  EBX = (ESP);
  /* 10bb540e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10bb5411 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb5415 jmp 0x10bb5429 */
  goto L_10bb5429;
  /* 10bb5417 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb5419 pop eax */
  EAX = (pop32());
  /* 10bb541a ret  */
  ESPCHK(0x10bb5253u, _esp0);
  ESP += 4; return;
  /* 10bb541b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bb541e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bb5420 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb5422 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb5426 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10bb5429:;
  /* 10bb5429 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb542b je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb542d push esi */
  push32((uint32_t)(ESI));
  /* 10bb542e push ebx */
  push32((uint32_t)(EBX));
  /* 10bb542f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10bb5432 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bb5435 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb5438 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb543b call dword ptr [0x10bb6010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6010))), 0x10bb5441u);
  /* 10bb5441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb5443 je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
  /* 10bb5445 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5448 push edi */
  push32((uint32_t)(EDI));
  /* 10bb5449 push edi */
  push32((uint32_t)(EDI));
  /* 10bb544a jne 0x10bb5450 */
  if (!C.zf) goto L_10bb5450;
  /* 10bb544c push edi */
  push32((uint32_t)(EDI));
  /* 10bb544d push edi */
  push32((uint32_t)(EDI));
  /* 10bb544e jmp 0x10bb5456 */
  goto L_10bb5456;
L_10bb5450:;
  /* 10bb5450 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10bb5453 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10bb5456:;
  /* 10bb5456 push esi */
  push32((uint32_t)(ESI));
  /* 10bb5457 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5458 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10bb545d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10bb5460 call dword ptr [0x10bb6064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6064))), 0x10bb5466u);
  /* 10bb5466 mov esi, eax */
  ESI = (EAX);
  /* 10bb5468 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb546a je 0x10bb53e1 */
  if (C.zf) goto L_10bb53e1;
L_10bb5470:;
  /* 10bb5470 mov eax, esi */
  EAX = (ESI);
  /* 10bb5472 jmp 0x10bb53e3 */
  goto L_10bb53e3;
}

/* FUN_10005477 @ 0x10bb5477 (43 bytes, 20 insns) */
void f_10bb5477(void) {
  FTRACE(0x10bb5477u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5477 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb547b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bb547f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bb5481 push esi */
  push32((uint32_t)(ESI));
  /* 10bb5482 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10bb5485 je 0x10bb5494 */
  if (C.zf) goto L_10bb5494;
L_10bb5487:;
  /* 10bb5487 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb548a je 0x10bb5494 */
  if (C.zf) goto L_10bb5494;
  /* 10bb548c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb548d mov esi, ecx */
  ESI = (ECX);
  /* 10bb548f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bb5490 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bb5492 jne 0x10bb5487 */
  if (!C.zf) goto L_10bb5487;
L_10bb5494:;
  /* 10bb5494 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bb5497 pop esi */
  ESI = (pop32());
  /* 10bb5498 jne 0x10bb549f */
  if (!C.zf) goto L_10bb549f;
  /* 10bb549a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb549e ret  */
  ESPCHK(0x10bb5477u, _esp0);
  ESP += 4; return;
L_10bb549f:;
  /* 10bb549f mov eax, edx */
  EAX = (EDX);
  /* 10bb54a1 ret  */
  ESPCHK(0x10bb5477u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a2 @ 0x10bb54a2 (318 bytes, 123 insns) */
void f_10bb54a2(void) {
  FTRACE(0x10bb54a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb54a2 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb54a3 mov ebp, esp */
  EBP = (ESP);
  /* 10bb54a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bb54a7 push 0x10bb64c0 */
  push32((uint32_t)(0x10bb64c0u));
  /* 10bb54ac push 0x10bb5a20 */
  push32((uint32_t)(0x10bb5a20u));
  /* 10bb54b1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10bb54b7 push eax */
  push32((uint32_t)(EAX));
  /* 10bb54b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10bb54bf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb54c2 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb54c3 push esi */
  push32((uint32_t)(ESI));
  /* 10bb54c4 push edi */
  push32((uint32_t)(EDI));
  /* 10bb54c5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bb54c8 mov eax, dword ptr [0x10bb7fac] */
  EAX = (r32((uint32_t)(0x10bb7fac)));
  /* 10bb54cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb54cf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb54d1 jne 0x10bb5511 */
  if (!C.zf) goto L_10bb5511;
  /* 10bb54d3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10bb54d6 push eax */
  push32((uint32_t)(EAX));
  /* 10bb54d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb54d9 pop esi */
  ESI = (pop32());
  /* 10bb54da push esi */
  push32((uint32_t)(ESI));
  /* 10bb54db push 0x10bb64a0 */
  push32((uint32_t)(0x10bb64a0u));
  /* 10bb54e0 push esi */
  push32((uint32_t)(ESI));
  /* 10bb54e1 call dword ptr [0x10bb600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb600c))), 0x10bb54e7u);
  /* 10bb54e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb54e9 je 0x10bb54ef */
  if (C.zf) goto L_10bb54ef;
  /* 10bb54eb mov eax, esi */
  EAX = (ESI);
  /* 10bb54ed jmp 0x10bb550c */
  goto L_10bb550c;
L_10bb54ef:;
  /* 10bb54ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10bb54f2 push eax */
  push32((uint32_t)(EAX));
  /* 10bb54f3 push esi */
  push32((uint32_t)(ESI));
  /* 10bb54f4 push 0x10bb649c */
  push32((uint32_t)(0x10bb649cu));
  /* 10bb54f9 push esi */
  push32((uint32_t)(ESI));
  /* 10bb54fa push ebx */
  push32((uint32_t)(EBX));
  /* 10bb54fb call dword ptr [0x10bb6018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6018))), 0x10bb5501u);
  /* 10bb5501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bb5503 je 0x10bb55d7 */
  if (C.zf) goto L_10bb55d7;
  /* 10bb5509 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bb550b pop eax */
  EAX = (pop32());
L_10bb550c:;
  /* 10bb550c mov dword ptr [0x10bb7fac], eax */
  w32((uint32_t)(0x10bb7fac), (EAX));
L_10bb5511:;
  /* 10bb5511 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5514 jne 0x10bb553a */
  if (!C.zf) goto L_10bb553a;
  /* 10bb5516 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10bb5519 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb551b jne 0x10bb5522 */
  if (!C.zf) goto L_10bb5522;
  /* 10bb551d mov eax, dword ptr [0x10bb7f90] */
  EAX = (r32((uint32_t)(0x10bb7f90)));
L_10bb5522:;
  /* 10bb5522 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bb5525 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb5528 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb552b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb552e push eax */
  push32((uint32_t)(EAX));
  /* 10bb552f call dword ptr [0x10bb6018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6018))), 0x10bb5535u);
  /* 10bb5535 jmp 0x10bb55d9 */
  goto L_10bb55d9;
L_10bb553a:;
  /* 10bb553a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb553d jne 0x10bb55d7 */
  if (!C.zf) goto L_10bb55d7;
  /* 10bb5543 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5546 jne 0x10bb5550 */
  if (!C.zf) goto L_10bb5550;
  /* 10bb5548 mov eax, dword ptr [0x10bb7fa0] */
  EAX = (r32((uint32_t)(0x10bb7fa0)));
  /* 10bb554d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10bb5550:;
  /* 10bb5550 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5551 push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5552 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb5555 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb5558 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bb555b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bb555d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb555f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10bb5562 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bb5563 push eax */
  push32((uint32_t)(EAX));
  /* 10bb5564 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bb5567 call dword ptr [0x10bb6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6024))), 0x10bb556du);
  /* 10bb556d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bb5570 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5572 je 0x10bb55d7 */
  if (C.zf) goto L_10bb55d7;
  /* 10bb5574 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10bb5577 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10bb557a mov eax, edi */
  EAX = (EDI);
  /* 10bb557c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb557f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bb5581 call 0x10bb5b00 */
  push32(0x10bb5586u); f_10bb5b00();
  /* 10bb5586 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bb5589 mov esi, esp */
  ESI = (ESP);
  /* 10bb558b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10bb558e push edi */
  push32((uint32_t)(EDI));
  /* 10bb558f push ebx */
  push32((uint32_t)(EBX));
  /* 10bb5590 push esi */
  push32((uint32_t)(ESI));
  /* 10bb5591 call 0x10bb51e0 */
  push32(0x10bb5596u); f_10bb51e0();
  /* 10bb5596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5599 jmp 0x10bb55a6 */
  goto L_10bb55a6;
  /* 10bb559b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb559d pop eax */
  EAX = (pop32());
  /* 10bb559e ret  */
  ESPCHK(0x10bb54a2u, _esp0);
  ESP += 4; return;
  /* 10bb559f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bb55a2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bb55a4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10bb55a6:;
  /* 10bb55a6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bb55aa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb55ac je 0x10bb55d7 */
  if (C.zf) goto L_10bb55d7;
  /* 10bb55ae push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10bb55b1 push esi */
  push32((uint32_t)(ESI));
  /* 10bb55b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bb55b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bb55b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bb55ba push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bb55bd call dword ptr [0x10bb6024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb6024))), 0x10bb55c3u);
  /* 10bb55c3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb55c5 je 0x10bb55d7 */
  if (C.zf) goto L_10bb55d7;
  /* 10bb55c7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bb55ca push eax */
  push32((uint32_t)(EAX));
  /* 10bb55cb push esi */
  push32((uint32_t)(ESI));
  /* 10bb55cc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb55cf call dword ptr [0x10bb600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bb600c))), 0x10bb55d5u);
  /* 10bb55d5 jmp 0x10bb55d9 */
  goto L_10bb55d9;
L_10bb55d7:;
  /* 10bb55d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bb55d9:;
  /* 10bb55d9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10bb55dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bb55df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10bb55e6 pop edi */
  EDI = (pop32());
  /* 10bb55e7 pop esi */
  ESI = (pop32());
  /* 10bb55e8 pop ebx */
  EBX = (pop32());
  /* 10bb55e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb55ea ret  */
  ESPCHK(0x10bb54a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x10bb55f0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_10bb55f0(void) {
  FTRACE(0x10bb55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb55f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bb55f3 push edi */
  push32((uint32_t)(EDI));
  /* 10bb55f4 push esi */
  push32((uint32_t)(ESI));
  /* 10bb55f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bb55f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bb55fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb55fe mov eax, ecx */
  EAX = (ECX);
  /* 10bb5600 mov edx, ecx */
  EDX = (ECX);
  /* 10bb5602 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5604 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5606 jbe 0x10bb5610 */
  if ((C.cf||C.zf)) goto L_10bb5610;
  /* 10bb5608 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb560a jb 0x10bb5788 */
  if (C.cf) goto L_10bb5788;
L_10bb5610:;
  /* 10bb5610 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bb5616 jne 0x10bb562c */
  if (!C.zf) goto L_10bb562c;
  /* 10bb5618 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb561b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bb561e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5621 jb 0x10bb564c */
  if (C.cf) goto L_10bb564c;
  /* 10bb5623 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb5625 jmp dword ptr [edx*4 + 0x10bb5738] */
  switch (EDX) {
    case 0: goto L_10bb5748;
    case 1: goto L_10bb5750;
    case 2: goto L_10bb575c;
    case 3: goto L_10bb5770;
    default: x86_unimpl("switch@0x10bb5625 out of table"); return;
  }
L_10bb562c:;
  /* 10bb562c mov eax, edi */
  EAX = (EDI);
  /* 10bb562e mov edx, 3 */
  EDX = (0x3u);
  /* 10bb5633 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb5636 jb 0x10bb5644 */
  if (C.cf) goto L_10bb5644;
  /* 10bb5638 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bb563b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb563d jmp dword ptr [eax*4 + 0x10bb5650] */
  switch (EAX) {
    case 1: goto L_10bb5660;
    case 2: goto L_10bb568c;
    case 3: goto L_10bb56b0;
    default: x86_unimpl("switch@0x10bb563d out of table"); return;
  }
L_10bb5644:;
  /* 10bb5644 jmp dword ptr [ecx*4 + 0x10bb5748] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10bb5748)))); return;
  /* 10bb564b nop  */
  /* nop */
L_10bb564c:;
  /* 10bb564c jmp dword ptr [ecx*4 + 0x10bb56cc] */
  switch (ECX) {
    case 0: goto L_10bb572f;
    case 1: goto L_10bb571c;
    case 2: goto L_10bb5714;
    case 3: goto L_10bb570c;
    case 4: goto L_10bb5704;
    case 5: goto L_10bb56fc;
    case 6: goto L_10bb56f4;
    case 7: goto L_10bb56ec;
    default: x86_unimpl("switch@0x10bb564c out of table"); return;
  }
  /* 10bb5653 nop  */
  /* nop */
L_10bb5660:;
  /* 10bb5660 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb5662 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb5664 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5666 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb5669 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb566c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb566f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb5672 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb5675 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5678 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb567b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb567e jb 0x10bb564c */
  if (C.cf) goto L_10bb564c;
  /* 10bb5680 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb5682 jmp dword ptr [edx*4 + 0x10bb5738] */
  switch (EDX) {
    case 0: goto L_10bb5748;
    case 1: goto L_10bb5750;
    case 2: goto L_10bb575c;
    case 3: goto L_10bb5770;
    default: x86_unimpl("switch@0x10bb5682 out of table"); return;
  }
  /* 10bb5689 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb568c:;
  /* 10bb568c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb568e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb5690 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5692 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb5695 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb5698 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb569b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb569e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb56a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb56a4 jb 0x10bb564c */
  if (C.cf) goto L_10bb564c;
  /* 10bb56a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb56a8 jmp dword ptr [edx*4 + 0x10bb5738] */
  switch (EDX) {
    case 0: goto L_10bb5748;
    case 1: goto L_10bb5750;
    case 2: goto L_10bb575c;
    case 3: goto L_10bb5770;
    default: x86_unimpl("switch@0x10bb56a8 out of table"); return;
  }
  /* 10bb56af nop  */
  /* nop */
L_10bb56b0:;
  /* 10bb56b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb56b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb56b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb56b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bb56b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb56ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bb56bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb56be jb 0x10bb564c */
  if (C.cf) goto L_10bb564c;
  /* 10bb56c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb56c2 jmp dword ptr [edx*4 + 0x10bb5738] */
  switch (EDX) {
    case 0: goto L_10bb5748;
    case 1: goto L_10bb5750;
    case 2: goto L_10bb575c;
    case 3: goto L_10bb5770;
    default: x86_unimpl("switch@0x10bb56c2 out of table"); return;
  }
  /* 10bb56c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb56ec:;
  /* 10bb56ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10bb56f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10bb56f4:;
  /* 10bb56f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10bb56f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10bb56fc:;
  /* 10bb56fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10bb5700 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10bb5704:;
  /* 10bb5704 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10bb5708 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10bb570c:;
  /* 10bb570c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10bb5710 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10bb5714:;
  /* 10bb5714 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10bb5718 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10bb571c:;
  /* 10bb571c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10bb5720 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10bb5724 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bb572b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb572d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bb572f:;
  /* 10bb572f jmp dword ptr [edx*4 + 0x10bb5738] */
  switch (EDX) {
    case 0: goto L_10bb5748;
    case 1: goto L_10bb5750;
    case 2: goto L_10bb575c;
    case 3: goto L_10bb5770;
    default: x86_unimpl("switch@0x10bb572f out of table"); return;
  }
  /* 10bb5736 mov edi, edi */
  EDI = (EDI);
L_10bb5748:;
  /* 10bb5748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb574b pop esi */
  ESI = (pop32());
  /* 10bb574c pop edi */
  EDI = (pop32());
  /* 10bb574d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb574e ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb574f nop  */
  /* nop */
L_10bb5750:;
  /* 10bb5750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb5752 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5757 pop esi */
  ESI = (pop32());
  /* 10bb5758 pop edi */
  EDI = (pop32());
  /* 10bb5759 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb575a ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb575b nop  */
  /* nop */
L_10bb575c:;
  /* 10bb575c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb575e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5760 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb5763 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb5766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5769 pop esi */
  ESI = (pop32());
  /* 10bb576a pop edi */
  EDI = (pop32());
  /* 10bb576b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb576c ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb576d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb5770:;
  /* 10bb5770 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bb5772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bb5774 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb5777 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb577a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb577d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb5780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5783 pop esi */
  ESI = (pop32());
  /* 10bb5784 pop edi */
  EDI = (pop32());
  /* 10bb5785 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb5786 ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb5787 nop  */
  /* nop */
L_10bb5788:;
  /* 10bb5788 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10bb578c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10bb5790 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bb5796 jne 0x10bb57bc */
  if (!C.zf) goto L_10bb57bc;
  /* 10bb5798 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb579b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bb579e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb57a1 jb 0x10bb57b0 */
  if (C.cf) goto L_10bb57b0;
  /* 10bb57a3 std  */
  C.df=1;
  /* 10bb57a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb57a6 cld  */
  C.df=0;
  /* 10bb57a7 jmp dword ptr [edx*4 + 0x10bb58d0] */
  switch (EDX) {
    case 0: goto L_10bb58e0;
    case 1: goto L_10bb58e8;
    case 2: goto L_10bb58f8;
    case 3: goto L_10bb590c;
    default: x86_unimpl("switch@0x10bb57a7 out of table"); return;
  }
  /* 10bb57ae mov edi, edi */
  EDI = (EDI);
L_10bb57b0:;
  /* 10bb57b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bb57b2 jmp dword ptr [ecx*4 + 0x10bb5880] */
  switch (ECX) {
    case 0: goto L_10bb58c7;
    default: x86_unimpl("switch@0x10bb57b2 out of table"); return;
  }
  /* 10bb57b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb57bc:;
  /* 10bb57bc mov eax, edi */
  EAX = (EDI);
  /* 10bb57be mov edx, 3 */
  EDX = (0x3u);
  /* 10bb57c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb57c6 jb 0x10bb57d4 */
  if (C.cf) goto L_10bb57d4;
  /* 10bb57c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bb57cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb57cd jmp dword ptr [eax*4 + 0x10bb57d8] */
  switch (EAX) {
    case 1: goto L_10bb57e8;
    case 2: goto L_10bb5808;
    case 3: goto L_10bb5830;
    default: x86_unimpl("switch@0x10bb57cd out of table"); return;
  }
L_10bb57d4:;
  /* 10bb57d4 jmp dword ptr [ecx*4 + 0x10bb58d0] */
  switch (ECX) {
    case 0: goto L_10bb58e0;
    case 1: goto L_10bb58e8;
    case 2: goto L_10bb58f8;
    case 3: goto L_10bb590c;
    default: x86_unimpl("switch@0x10bb57d4 out of table"); return;
  }
  /* 10bb57db nop  */
  /* nop */
L_10bb57e8:;
  /* 10bb57e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb57eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb57ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb57f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bb57f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb57f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bb57f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb57f8 jb 0x10bb57b0 */
  if (C.cf) goto L_10bb57b0;
  /* 10bb57fa std  */
  C.df=1;
  /* 10bb57fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb57fd cld  */
  C.df=0;
  /* 10bb57fe jmp dword ptr [edx*4 + 0x10bb58d0] */
  switch (EDX) {
    case 0: goto L_10bb58e0;
    case 1: goto L_10bb58e8;
    case 2: goto L_10bb58f8;
    case 3: goto L_10bb590c;
    default: x86_unimpl("switch@0x10bb57fe out of table"); return;
  }
  /* 10bb5805 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb5808:;
  /* 10bb5808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb580b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb580d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb5810 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb5813 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb5816 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb5819 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb581c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb581f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5822 jb 0x10bb57b0 */
  if (C.cf) goto L_10bb57b0;
  /* 10bb5824 std  */
  C.df=1;
  /* 10bb5825 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb5827 cld  */
  C.df=0;
  /* 10bb5828 jmp dword ptr [edx*4 + 0x10bb58d0] */
  switch (EDX) {
    case 0: goto L_10bb58e0;
    case 1: goto L_10bb58e8;
    case 2: goto L_10bb58f8;
    case 3: goto L_10bb590c;
    default: x86_unimpl("switch@0x10bb5828 out of table"); return;
  }
  /* 10bb582f nop  */
  /* nop */
L_10bb5830:;
  /* 10bb5830 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb5833 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bb5835 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb5838 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb583b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb583e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb5841 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bb5844 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb5847 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb584a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb584d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5850 jb 0x10bb57b0 */
  if (C.cf) goto L_10bb57b0;
  /* 10bb5856 std  */
  C.df=1;
  /* 10bb5857 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bb5859 cld  */
  C.df=0;
  /* 10bb585a jmp dword ptr [edx*4 + 0x10bb58d0] */
  switch (EDX) {
    case 0: goto L_10bb58e0;
    case 1: goto L_10bb58e8;
    case 2: goto L_10bb58f8;
    case 3: goto L_10bb590c;
    default: x86_unimpl("switch@0x10bb585a out of table"); return;
  }
  /* 10bb5861 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10bb5864 test byte ptr [eax - 0x45], bl */
  { uint32_t _r=(r8((uint32_t)(EAX + -0x45)))&(BL); fl_logic(_r,8); }
  /* 10bb5867 adc byte ptr [eax + ebx*2 + 0x589410bb], cl */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*2 + 0x589410bb))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*2 + 0x589410bb), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bb586e mov ebx, 0xbb589c10 */
  EBX = (0xbb589c10u);
  /* 10bb5873 adc byte ptr [eax + ebx*2 + 0x58ac10bb], ah */
  { uint32_t _a=(r8((uint32_t)(EAX + EBX*2 + 0x58ac10bb))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EBX*2 + 0x58ac10bb), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bb587a mov ebx, 0xbb58b410 */
  EBX = (0xbb58b410u);
  /* 10bb5884 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10bb5888 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10bb588c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10bb5890 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10bb5894 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10bb5898 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10bb589c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10bb58a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10bb58a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10bb58a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10bb58ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10bb58b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10bb58b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10bb58b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10bb58bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bb58c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb58c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bb58c7:;
  /* 10bb58c7 jmp dword ptr [edx*4 + 0x10bb58d0] */
  switch (EDX) {
    case 0: goto L_10bb58e0;
    case 1: goto L_10bb58e8;
    case 2: goto L_10bb58f8;
    case 3: goto L_10bb590c;
    default: x86_unimpl("switch@0x10bb58c7 out of table"); return;
  }
  /* 10bb58ce mov edi, edi */
  EDI = (EDI);
L_10bb58e0:;
  /* 10bb58e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb58e3 pop esi */
  ESI = (pop32());
  /* 10bb58e4 pop edi */
  EDI = (pop32());
  /* 10bb58e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb58e6 ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb58e7 nop  */
  /* nop */
L_10bb58e8:;
  /* 10bb58e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb58eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb58ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb58f1 pop esi */
  ESI = (pop32());
  /* 10bb58f2 pop edi */
  EDI = (pop32());
  /* 10bb58f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb58f4 ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb58f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bb58f8:;
  /* 10bb58f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb58fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb58fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb5901 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb5904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5907 pop esi */
  ESI = (pop32());
  /* 10bb5908 pop edi */
  EDI = (pop32());
  /* 10bb5909 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb590a ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
  /* 10bb590b nop  */
  /* nop */
L_10bb590c:;
  /* 10bb590c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bb590f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bb5912 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bb5915 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bb5918 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bb591b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bb591e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5921 pop esi */
  ESI = (pop32());
  /* 10bb5922 pop edi */
  EDI = (pop32());
  /* 10bb5923 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bb5924 ret  */
  ESPCHK(0x10bb55f0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10bb5928 (32 bytes, 18 insns) */
void f_10bb5928(void) {
  FTRACE(0x10bb5928u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5928 push ebp */
  push32((uint32_t)(EBP));
  /* 10bb5929 mov ebp, esp */
  EBP = (ESP);
  /* 10bb592b push ebx */
  push32((uint32_t)(EBX));
  /* 10bb592c push esi */
  push32((uint32_t)(ESI));
  /* 10bb592d push edi */
  push32((uint32_t)(EDI));
  /* 10bb592e push ebp */
  push32((uint32_t)(EBP));
  /* 10bb592f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb5931 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bb5933 push 0x10bb5940 */
  push32((uint32_t)(0x10bb5940u));
  /* 10bb5938 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bb593b call 0x10bb5b30 */
  push32(0x10bb5940u); f_10bb5b30();
  /* 10bb5940 pop ebp */
  EBP = (pop32());
  /* 10bb5941 pop edi */
  EDI = (pop32());
  /* 10bb5942 pop esi */
  ESI = (pop32());
  /* 10bb5943 pop ebx */
  EBX = (pop32());
  /* 10bb5944 mov esp, ebp */
  ESP = (EBP);
  /* 10bb5946 pop ebp */
  EBP = (pop32());
  /* 10bb5947 ret  */
  ESPCHK(0x10bb5928u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10bb596a (104 bytes, 33 insns) */
void f_10bb596a(void) {
  FTRACE(0x10bb596au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb596a push ebx */
  push32((uint32_t)(EBX));
  /* 10bb596b push esi */
  push32((uint32_t)(ESI));
  /* 10bb596c push edi */
  push32((uint32_t)(EDI));
  /* 10bb596d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bb5971 push eax */
  push32((uint32_t)(EAX));
  /* 10bb5972 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10bb5974 push 0x10bb5948 */
  push32((uint32_t)(0x10bb5948u));
  /* 10bb5979 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10bb5980 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10bb5987:;
  /* 10bb5987 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10bb598b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bb598e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10bb5991 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5994 je 0x10bb59c4 */
  if (C.zf) goto L_10bb59c4;
  /* 10bb5996 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb599a je 0x10bb59c4 */
  if (C.zf) goto L_10bb59c4;
  /* 10bb599c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10bb599f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10bb59a2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10bb59a6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10bb59a9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb59ae jne 0x10bb59c2 */
  if (!C.zf) goto L_10bb59c2;
  /* 10bb59b0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10bb59b5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10bb59b9 call 0x10bb59fe */
  push32(0x10bb59beu); f_10bb59fe();
  /* 10bb59be call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10bb59c2u);
L_10bb59c2:;
  /* 10bb59c2 jmp 0x10bb5987 */
  goto L_10bb5987;
L_10bb59c4:;
  /* 10bb59c4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10bb59cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb59ce pop edi */
  EDI = (pop32());
  /* 10bb59cf pop esi */
  ESI = (pop32());
  /* 10bb59d0 pop ebx */
  EBX = (pop32());
  /* 10bb59d1 ret  */
  ESPCHK(0x10bb596au, _esp0);
  ESP += 4; return;
}

/* FUN_100059fe @ 0x10bb59fe (24 bytes, 10 insns) */
void f_10bb59fe(void) {
  FTRACE(0x10bb59feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb59fe push ebx */
  push32((uint32_t)(EBX));
  /* 10bb59ff push ecx */
  push32((uint32_t)(ECX));
  /* 10bb5a00 mov ebx, 0x10bb79f0 */
  EBX = (0x10bb79f0u);
  /* 10bb5a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bb5a08 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10bb5a0b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10bb5a0e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10bb5a11 pop ecx */
  ECX = (pop32());
  /* 10bb5a12 pop ebx */
  EBX = (pop32());
  /* 10bb5a13 ret 4 */
  ESPCHK(0x10bb59feu, _esp0);
  ESP += 8; return;
}

/* FUN_10005add @ 0x10bb5add (27 bytes, 11 insns) */
void f_10bb5add(void) {
  FTRACE(0x10bb5addu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5add push ebp */
  push32((uint32_t)(EBP));
  /* 10bb5ade mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bb5ae2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10bb5ae4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10bb5ae7 push eax */
  push32((uint32_t)(EAX));
  /* 10bb5ae8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bb5aeb push eax */
  push32((uint32_t)(EAX));
  /* 10bb5aec call 0x10bb596a */
  push32(0x10bb5af1u); f_10bb596a();
  /* 10bb5af1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bb5af4 pop ebp */
  EBP = (pop32());
  /* 10bb5af5 ret 4 */
  ESPCHK(0x10bb5addu, _esp0);
  ESP += 8; return;
}

/* FUN_10005b00 @ 0x10bb5b00 (47 bytes, 17 insns) */
void f_10bb5b00(void) {
  FTRACE(0x10bb5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5b00 push ecx */
  push32((uint32_t)(ECX));
  /* 10bb5b01 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5b06 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10bb5b0a jb 0x10bb5b20 */
  if (C.cf) goto L_10bb5b20;
L_10bb5b0c:;
  /* 10bb5b0c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb5b12 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb5b17 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10bb5b19 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bb5b1e jae 0x10bb5b0c */
  if (!C.cf) goto L_10bb5b0c;
L_10bb5b20:;
  /* 10bb5b20 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bb5b22 mov eax, esp */
  EAX = (ESP);
  /* 10bb5b24 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10bb5b26 mov esp, ecx */
  ESP = (ECX);
  /* 10bb5b28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bb5b2a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bb5b2d push eax */
  push32((uint32_t)(EAX));
  /* 10bb5b2e ret  */
  ESPCHK(0x10bb5b00u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10bb5b30 (6 bytes, 1 insns) */
void f_10bb5b30(void) {
  FTRACE(0x10bb5b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bb5b30 jmp dword ptr [0x10bb6008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10bb6008)))); return;
}

