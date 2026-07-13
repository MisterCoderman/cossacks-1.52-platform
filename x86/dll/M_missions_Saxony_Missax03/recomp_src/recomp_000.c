#include "recomp.h"

/* OnInit @ 0x10ba1000 (530 bytes, 136 insns) */
void f_10ba1000(void) {
  FTRACE(0x10ba1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1000 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1001 mov esi, dword ptr [0x10ba5134] */
  ESI = (r32((uint32_t)(0x10ba5134)));
  /* 10ba1007 push 0x10ba61d4 */
  push32((uint32_t)(0x10ba61d4u));
  /* 10ba100c push 0x10ba66a0 */
  push32((uint32_t)(0x10ba66a0u));
  /* 10ba1011 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1013u);
  /* 10ba1013 push 0x10ba61cc */
  push32((uint32_t)(0x10ba61ccu));
  /* 10ba1018 push 0x10ba6698 */
  push32((uint32_t)(0x10ba6698u));
  /* 10ba101d call esi */
  call_ind((uint32_t)(ESI), 0x10ba101fu);
  /* 10ba101f push 0x10ba61c0 */
  push32((uint32_t)(0x10ba61c0u));
  /* 10ba1024 push 0x10ba6670 */
  push32((uint32_t)(0x10ba6670u));
  /* 10ba1029 call esi */
  call_ind((uint32_t)(ESI), 0x10ba102bu);
  /* 10ba102b push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1030 push 0x10ba6658 */
  push32((uint32_t)(0x10ba6658u));
  /* 10ba1035 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1037u);
  /* 10ba1037 push 0x10ba61b0 */
  push32((uint32_t)(0x10ba61b0u));
  /* 10ba103c push 0x10ba6760 */
  push32((uint32_t)(0x10ba6760u));
  /* 10ba1041 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1043u);
  /* 10ba1043 push 0x10ba61a4 */
  push32((uint32_t)(0x10ba61a4u));
  /* 10ba1048 push 0x10ba6718 */
  push32((uint32_t)(0x10ba6718u));
  /* 10ba104d call esi */
  call_ind((uint32_t)(ESI), 0x10ba104fu);
  /* 10ba104f push 0x10ba6198 */
  push32((uint32_t)(0x10ba6198u));
  /* 10ba1054 push 0x10ba6720 */
  push32((uint32_t)(0x10ba6720u));
  /* 10ba1059 call esi */
  call_ind((uint32_t)(ESI), 0x10ba105bu);
  /* 10ba105b push 0x10ba618c */
  push32((uint32_t)(0x10ba618cu));
  /* 10ba1060 push 0x10ba66b8 */
  push32((uint32_t)(0x10ba66b8u));
  /* 10ba1065 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1067u);
  /* 10ba1067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba106a push 0x10ba6180 */
  push32((uint32_t)(0x10ba6180u));
  /* 10ba106f push 0x10ba66e8 */
  push32((uint32_t)(0x10ba66e8u));
  /* 10ba1074 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1076u);
  /* 10ba1076 push 0x10ba6174 */
  push32((uint32_t)(0x10ba6174u));
  /* 10ba107b push 0x10ba6650 */
  push32((uint32_t)(0x10ba6650u));
  /* 10ba1080 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1082u);
  /* 10ba1082 push 0x10ba616c */
  push32((uint32_t)(0x10ba616cu));
  /* 10ba1087 push 0x10ba6700 */
  push32((uint32_t)(0x10ba6700u));
  /* 10ba108c call esi */
  call_ind((uint32_t)(ESI), 0x10ba108eu);
  /* 10ba108e push 0x10ba6160 */
  push32((uint32_t)(0x10ba6160u));
  /* 10ba1093 push 0x10ba6750 */
  push32((uint32_t)(0x10ba6750u));
  /* 10ba1098 call esi */
  call_ind((uint32_t)(ESI), 0x10ba109au);
  /* 10ba109a push 0x10ba6158 */
  push32((uint32_t)(0x10ba6158u));
  /* 10ba109f push 0x10ba66b0 */
  push32((uint32_t)(0x10ba66b0u));
  /* 10ba10a4 call esi */
  call_ind((uint32_t)(ESI), 0x10ba10a6u);
  /* 10ba10a6 push 0x10ba6150 */
  push32((uint32_t)(0x10ba6150u));
  /* 10ba10ab push 0x10ba6708 */
  push32((uint32_t)(0x10ba6708u));
  /* 10ba10b0 call esi */
  call_ind((uint32_t)(ESI), 0x10ba10b2u);
  /* 10ba10b2 push 0x10ba6144 */
  push32((uint32_t)(0x10ba6144u));
  /* 10ba10b7 push 0x10ba6758 */
  push32((uint32_t)(0x10ba6758u));
  /* 10ba10bc call esi */
  call_ind((uint32_t)(ESI), 0x10ba10beu);
  /* 10ba10be push 0x10ba6138 */
  push32((uint32_t)(0x10ba6138u));
  /* 10ba10c3 push 0x10ba6678 */
  push32((uint32_t)(0x10ba6678u));
  /* 10ba10c8 call esi */
  call_ind((uint32_t)(ESI), 0x10ba10cau);
  /* 10ba10ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba10cd push 0x10ba6128 */
  push32((uint32_t)(0x10ba6128u));
  /* 10ba10d2 push 0x10ba6688 */
  push32((uint32_t)(0x10ba6688u));
  /* 10ba10d7 call esi */
  call_ind((uint32_t)(ESI), 0x10ba10d9u);
  /* 10ba10d9 push 0x10ba611c */
  push32((uint32_t)(0x10ba611cu));
  /* 10ba10de push 0x10ba6748 */
  push32((uint32_t)(0x10ba6748u));
  /* 10ba10e3 call esi */
  call_ind((uint32_t)(ESI), 0x10ba10e5u);
  /* 10ba10e5 push 0x10ba6114 */
  push32((uint32_t)(0x10ba6114u));
  /* 10ba10ea push 0x10ba6770 */
  push32((uint32_t)(0x10ba6770u));
  /* 10ba10ef call esi */
  call_ind((uint32_t)(ESI), 0x10ba10f1u);
  /* 10ba10f1 push 0x10ba6110 */
  push32((uint32_t)(0x10ba6110u));
  /* 10ba10f6 push 0x10ba6710 */
  push32((uint32_t)(0x10ba6710u));
  /* 10ba10fb call esi */
  call_ind((uint32_t)(ESI), 0x10ba10fdu);
  /* 10ba10fd mov esi, dword ptr [0x10ba5138] */
  ESI = (r32((uint32_t)(0x10ba5138)));
  /* 10ba1103 push 0x10ba6108 */
  push32((uint32_t)(0x10ba6108u));
  /* 10ba1108 push 0x10ba6660 */
  push32((uint32_t)(0x10ba6660u));
  /* 10ba110d call esi */
  call_ind((uint32_t)(ESI), 0x10ba110fu);
  /* 10ba110f push 0x10ba60fc */
  push32((uint32_t)(0x10ba60fcu));
  /* 10ba1114 push 0x10ba6690 */
  push32((uint32_t)(0x10ba6690u));
  /* 10ba1119 call esi */
  call_ind((uint32_t)(ESI), 0x10ba111bu);
  /* 10ba111b push 0x10ba60f0 */
  push32((uint32_t)(0x10ba60f0u));
  /* 10ba1120 push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba1125 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1127u);
  /* 10ba1127 push 0x10ba60e8 */
  push32((uint32_t)(0x10ba60e8u));
  /* 10ba112c push 0x10ba66c0 */
  push32((uint32_t)(0x10ba66c0u));
  /* 10ba1131 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1133u);
  /* 10ba1133 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1136 push 0x10ba60e0 */
  push32((uint32_t)(0x10ba60e0u));
  /* 10ba113b push 0x10ba6768 */
  push32((uint32_t)(0x10ba6768u));
  /* 10ba1140 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1142u);
  /* 10ba1142 push 0x10ba60d4 */
  push32((uint32_t)(0x10ba60d4u));
  /* 10ba1147 push 0x10ba6668 */
  push32((uint32_t)(0x10ba6668u));
  /* 10ba114c call esi */
  call_ind((uint32_t)(ESI), 0x10ba114eu);
  /* 10ba114e push 0x10ba60c8 */
  push32((uint32_t)(0x10ba60c8u));
  /* 10ba1153 push 0x10ba66f0 */
  push32((uint32_t)(0x10ba66f0u));
  /* 10ba1158 call esi */
  call_ind((uint32_t)(ESI), 0x10ba115au);
  /* 10ba115a push 0x10ba60bc */
  push32((uint32_t)(0x10ba60bcu));
  /* 10ba115f push 0x10ba66d8 */
  push32((uint32_t)(0x10ba66d8u));
  /* 10ba1164 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1166u);
  /* 10ba1166 push 0x10ba60b0 */
  push32((uint32_t)(0x10ba60b0u));
  /* 10ba116b push 0x10ba66c8 */
  push32((uint32_t)(0x10ba66c8u));
  /* 10ba1170 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1172u);
  /* 10ba1172 push 0x10ba60a4 */
  push32((uint32_t)(0x10ba60a4u));
  /* 10ba1177 push 0x10ba66d0 */
  push32((uint32_t)(0x10ba66d0u));
  /* 10ba117c call esi */
  call_ind((uint32_t)(ESI), 0x10ba117eu);
  /* 10ba117e push 0x10ba6098 */
  push32((uint32_t)(0x10ba6098u));
  /* 10ba1183 push 0x10ba66e0 */
  push32((uint32_t)(0x10ba66e0u));
  /* 10ba1188 call esi */
  call_ind((uint32_t)(ESI), 0x10ba118au);
  /* 10ba118a push 0x10ba6088 */
  push32((uint32_t)(0x10ba6088u));
  /* 10ba118f push 0x10ba66a8 */
  push32((uint32_t)(0x10ba66a8u));
  /* 10ba1194 call dword ptr [0x10ba513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba513c))), 0x10ba119au);
  /* 10ba119a mov esi, dword ptr [0x10ba5140] */
  ESI = (r32((uint32_t)(0x10ba5140)));
  /* 10ba11a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba11a3 push 0x10ba6080 */
  push32((uint32_t)(0x10ba6080u));
  /* 10ba11a8 push 0x10ba6740 */
  push32((uint32_t)(0x10ba6740u));
  /* 10ba11ad call esi */
  call_ind((uint32_t)(ESI), 0x10ba11afu);
  /* 10ba11af push 0x10ba6074 */
  push32((uint32_t)(0x10ba6074u));
  /* 10ba11b4 push 0x10ba6730 */
  push32((uint32_t)(0x10ba6730u));
  /* 10ba11b9 call esi */
  call_ind((uint32_t)(ESI), 0x10ba11bbu);
  /* 10ba11bb push 0x10ba6068 */
  push32((uint32_t)(0x10ba6068u));
  /* 10ba11c0 push 0x10ba6728 */
  push32((uint32_t)(0x10ba6728u));
  /* 10ba11c5 call esi */
  call_ind((uint32_t)(ESI), 0x10ba11c7u);
  /* 10ba11c7 push 0x10ba605c */
  push32((uint32_t)(0x10ba605cu));
  /* 10ba11cc push 0x10ba6738 */
  push32((uint32_t)(0x10ba6738u));
  /* 10ba11d1 call esi */
  call_ind((uint32_t)(ESI), 0x10ba11d3u);
  /* 10ba11d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba11d5 push 0x10ba6680 */
  push32((uint32_t)(0x10ba6680u));
  /* 10ba11da call dword ptr [0x10ba5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5144))), 0x10ba11e0u);
  /* 10ba11e0 mov esi, dword ptr [0x10ba5148] */
  ESI = (r32((uint32_t)(0x10ba5148)));
  /* 10ba11e6 push 0x10ba6054 */
  push32((uint32_t)(0x10ba6054u));
  /* 10ba11eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba11ed call esi */
  call_ind((uint32_t)(ESI), 0x10ba11efu);
  /* 10ba11ef push 0x10ba6054 */
  push32((uint32_t)(0x10ba6054u));
  /* 10ba11f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba11f6 call esi */
  call_ind((uint32_t)(ESI), 0x10ba11f8u);
  /* 10ba11f8 push 0x10ba604c */
  push32((uint32_t)(0x10ba604cu));
  /* 10ba11fd push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba11ff call esi */
  call_ind((uint32_t)(ESI), 0x10ba1201u);
  /* 10ba1201 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1204 push 0x10ba6040 */
  push32((uint32_t)(0x10ba6040u));
  /* 10ba1209 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba120b call esi */
  call_ind((uint32_t)(ESI), 0x10ba120du);
  /* 10ba120d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1210 pop esi */
  ESI = (pop32());
  /* 10ba1211 ret  */
  ESPCHK(0x10ba1000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10ba1220 (2972 bytes, 980 insns) */
void f_10ba1220(void) {
  FTRACE(0x10ba1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1220 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1221 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba1222 mov ebp, dword ptr [0x10ba50b0] */
  EBP = (r32((uint32_t)(0x10ba50b0)));
  /* 10ba1228 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1229 push edi */
  push32((uint32_t)(EDI));
  /* 10ba122a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba122c call ebp */
  call_ind((uint32_t)(EBP), 0x10ba122eu);
  /* 10ba122e mov ebx, dword ptr [0x10ba50b4] */
  EBX = (r32((uint32_t)(0x10ba50b4)));
  /* 10ba1234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1237 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1239 je 0x10ba15de */
  if (C.zf) goto L_10ba15de;
  /* 10ba123f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1241 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1243 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1245u);
  /* 10ba1245 mov ebp, dword ptr [0x10ba50b8] */
  EBP = (r32((uint32_t)(0x10ba50b8)));
  /* 10ba124b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba124d call ebp */
  call_ind((uint32_t)(EBP), 0x10ba124fu);
  /* 10ba124f mov esi, dword ptr [0x10ba50bc] */
  ESI = (r32((uint32_t)(0x10ba50bc)));
  /* 10ba1255 mov edi, dword ptr [0x10ba50c0] */
  EDI = (r32((uint32_t)(0x10ba50c0)));
  /* 10ba125b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba125e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1260 jne 0x10ba1317 */
  if (!C.zf) goto L_10ba1317;
  /* 10ba1266 push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 10ba126b push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba126d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba126f call esi */
  call_ind((uint32_t)(ESI), 0x10ba1271u);
  /* 10ba1271 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 10ba1276 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1278 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba127a call esi */
  call_ind((uint32_t)(ESI), 0x10ba127cu);
  /* 10ba127c push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 10ba1281 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1285 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1287u);
  /* 10ba1287 push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 10ba128c push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba128e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1290 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1292u);
  /* 10ba1292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1294 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1296 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1298 call esi */
  call_ind((uint32_t)(ESI), 0x10ba129au);
  /* 10ba129a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba129c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba129e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba12a0 call esi */
  call_ind((uint32_t)(ESI), 0x10ba12a2u);
  /* 10ba12a2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba12a5 push 0x10ba630c */
  push32((uint32_t)(0x10ba630cu));
  /* 10ba12aa push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12af call edi */
  call_ind((uint32_t)(EDI), 0x10ba12b1u);
  /* 10ba12b1 push 0x10ba62f4 */
  push32((uint32_t)(0x10ba62f4u));
  /* 10ba12b6 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12bb call edi */
  call_ind((uint32_t)(EDI), 0x10ba12bdu);
  /* 10ba12bd push 0x10ba62dc */
  push32((uint32_t)(0x10ba62dcu));
  /* 10ba12c2 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12c7 call edi */
  call_ind((uint32_t)(EDI), 0x10ba12c9u);
  /* 10ba12c9 push 0x10ba62c4 */
  push32((uint32_t)(0x10ba62c4u));
  /* 10ba12ce push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12d3 call edi */
  call_ind((uint32_t)(EDI), 0x10ba12d5u);
  /* 10ba12d5 push 0x10ba62ac */
  push32((uint32_t)(0x10ba62acu));
  /* 10ba12da push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12df call edi */
  call_ind((uint32_t)(EDI), 0x10ba12e1u);
  /* 10ba12e1 push 0x10ba6294 */
  push32((uint32_t)(0x10ba6294u));
  /* 10ba12e6 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12eb call edi */
  call_ind((uint32_t)(EDI), 0x10ba12edu);
  /* 10ba12ed push 0x10ba627c */
  push32((uint32_t)(0x10ba627cu));
  /* 10ba12f2 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba12f7 call edi */
  call_ind((uint32_t)(EDI), 0x10ba12f9u);
  /* 10ba12f9 push 0x10ba6264 */
  push32((uint32_t)(0x10ba6264u));
  /* 10ba12fe push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1303 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1305u);
  /* 10ba1305 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1308 push 0x10ba624c */
  push32((uint32_t)(0x10ba624cu));
  /* 10ba130d push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1312 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1314u);
  /* 10ba1314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1317:;
  /* 10ba1317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1319 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba131bu);
  /* 10ba131b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba131e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1321 jne 0x10ba13b1 */
  if (!C.zf) goto L_10ba13b1;
  /* 10ba1327 push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 10ba132c push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba132e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1330 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1332u);
  /* 10ba1332 push 0x1fbd0 */
  push32((uint32_t)(0x1fbd0u));
  /* 10ba1337 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1339 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba133b call esi */
  call_ind((uint32_t)(ESI), 0x10ba133du);
  /* 10ba133d push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 10ba1342 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1344 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1346 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1348u);
  /* 10ba1348 push 0x445c0 */
  push32((uint32_t)(0x445c0u));
  /* 10ba134d push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba134f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1351 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1353u);
  /* 10ba1353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1355 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1359 call esi */
  call_ind((uint32_t)(ESI), 0x10ba135bu);
  /* 10ba135b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba135d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba135f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1361 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1363u);
  /* 10ba1363 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1366 push 0x10ba630c */
  push32((uint32_t)(0x10ba630cu));
  /* 10ba136b push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1370 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1372u);
  /* 10ba1372 push 0x10ba62f4 */
  push32((uint32_t)(0x10ba62f4u));
  /* 10ba1377 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba137c call edi */
  call_ind((uint32_t)(EDI), 0x10ba137eu);
  /* 10ba137e push 0x10ba62c4 */
  push32((uint32_t)(0x10ba62c4u));
  /* 10ba1383 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1388 call edi */
  call_ind((uint32_t)(EDI), 0x10ba138au);
  /* 10ba138a push 0x10ba62ac */
  push32((uint32_t)(0x10ba62acu));
  /* 10ba138f push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1394 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1396u);
  /* 10ba1396 push 0x10ba6294 */
  push32((uint32_t)(0x10ba6294u));
  /* 10ba139b push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba13a0 call edi */
  call_ind((uint32_t)(EDI), 0x10ba13a2u);
  /* 10ba13a2 push 0x10ba627c */
  push32((uint32_t)(0x10ba627cu));
  /* 10ba13a7 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba13ac call edi */
  call_ind((uint32_t)(EDI), 0x10ba13aeu);
  /* 10ba13ae add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba13b1:;
  /* 10ba13b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13b3 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba13b5u);
  /* 10ba13b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba13b8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba13bb jne 0x10ba1417 */
  if (!C.zf) goto L_10ba1417;
  /* 10ba13bd push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10ba13c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba13c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13c6 call esi */
  call_ind((uint32_t)(ESI), 0x10ba13c8u);
  /* 10ba13c8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10ba13cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba13cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13d1 call esi */
  call_ind((uint32_t)(ESI), 0x10ba13d3u);
  /* 10ba13d3 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10ba13d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba13da push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13dc call esi */
  call_ind((uint32_t)(ESI), 0x10ba13deu);
  /* 10ba13de push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10ba13e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba13e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13e7 call esi */
  call_ind((uint32_t)(ESI), 0x10ba13e9u);
  /* 10ba13e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13ef call esi */
  call_ind((uint32_t)(ESI), 0x10ba13f1u);
  /* 10ba13f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba13f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba13f7 call esi */
  call_ind((uint32_t)(ESI), 0x10ba13f9u);
  /* 10ba13f9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba13fc push 0x10ba630c */
  push32((uint32_t)(0x10ba630cu));
  /* 10ba1401 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1406 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1408u);
  /* 10ba1408 push 0x10ba62f4 */
  push32((uint32_t)(0x10ba62f4u));
  /* 10ba140d push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba1412 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1414u);
  /* 10ba1414 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1417:;
  /* 10ba1417 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1419 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba141bu);
  /* 10ba141b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba141e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1421 jne 0x10ba1461 */
  if (!C.zf) goto L_10ba1461;
  /* 10ba1423 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10ba1428 push eax */
  push32((uint32_t)(EAX));
  /* 10ba1429 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba142b call esi */
  call_ind((uint32_t)(ESI), 0x10ba142du);
  /* 10ba142d push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 10ba1432 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1434 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1436 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1438u);
  /* 10ba1438 push 0x4268 */
  push32((uint32_t)(0x4268u));
  /* 10ba143d push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba143f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1441 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1443u);
  /* 10ba1443 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10ba1448 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba144a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba144c call esi */
  call_ind((uint32_t)(ESI), 0x10ba144eu);
  /* 10ba144e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1450 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1452 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1454 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1456u);
  /* 10ba1456 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1458 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba145a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba145c call esi */
  call_ind((uint32_t)(ESI), 0x10ba145eu);
  /* 10ba145e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1461:;
  /* 10ba1461 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10ba1466 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba1468 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba146a call esi */
  call_ind((uint32_t)(ESI), 0x10ba146cu);
  /* 10ba146c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10ba1471 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1473 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1475 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1477u);
  /* 10ba1477 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10ba147c push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba147e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1480 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1482u);
  /* 10ba1482 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10ba1487 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba1489 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba148b call esi */
  call_ind((uint32_t)(ESI), 0x10ba148du);
  /* 10ba148d push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10ba1492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1494 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1496 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1498u);
  /* 10ba1498 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10ba149d push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba149f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba14a1 call esi */
  call_ind((uint32_t)(ESI), 0x10ba14a3u);
  /* 10ba14a3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba14a6 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14ab push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba14ad push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14af call esi */
  call_ind((uint32_t)(ESI), 0x10ba14b1u);
  /* 10ba14b1 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba14b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14ba call esi */
  call_ind((uint32_t)(ESI), 0x10ba14bcu);
  /* 10ba14bc push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14c5 call esi */
  call_ind((uint32_t)(ESI), 0x10ba14c7u);
  /* 10ba14c7 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14cc push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba14ce push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14d0 call esi */
  call_ind((uint32_t)(ESI), 0x10ba14d2u);
  /* 10ba14d2 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba14d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14db call esi */
  call_ind((uint32_t)(ESI), 0x10ba14ddu);
  /* 10ba14dd push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba14e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba14e6 call esi */
  call_ind((uint32_t)(ESI), 0x10ba14e8u);
  /* 10ba14e8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba14eb push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba14f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba14f4 call esi */
  call_ind((uint32_t)(ESI), 0x10ba14f6u);
  /* 10ba14f6 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba14fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba14fd push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba14ff call esi */
  call_ind((uint32_t)(ESI), 0x10ba1501u);
  /* 10ba1501 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1506 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1508 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba150a call esi */
  call_ind((uint32_t)(ESI), 0x10ba150cu);
  /* 10ba150c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1511 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba1513 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1515 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1517u);
  /* 10ba1517 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba151c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba151e push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1520 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1522u);
  /* 10ba1522 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1527 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1529 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba152b call esi */
  call_ind((uint32_t)(ESI), 0x10ba152du);
  /* 10ba152d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1530 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1535 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba1537 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba1539 call esi */
  call_ind((uint32_t)(ESI), 0x10ba153bu);
  /* 10ba153b push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1540 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1542 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba1544 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1546u);
  /* 10ba1546 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba154b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba154d push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba154f call esi */
  call_ind((uint32_t)(ESI), 0x10ba1551u);
  /* 10ba1551 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1556 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba1558 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba155a call esi */
  call_ind((uint32_t)(ESI), 0x10ba155cu);
  /* 10ba155c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba1561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1563 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba1565 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1567u);
  /* 10ba1567 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10ba156c push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba156e push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba1570 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1572u);
  /* 10ba1572 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1575 push 0x10ba6244 */
  push32((uint32_t)(0x10ba6244u));
  /* 10ba157a call dword ptr [0x10ba50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50c4))), 0x10ba1580u);
  /* 10ba1580 push 0x10ba623c */
  push32((uint32_t)(0x10ba623cu));
  /* 10ba1585 push 0x10ba61b8 */
  push32((uint32_t)(0x10ba61b8u));
  /* 10ba158a call edi */
  call_ind((uint32_t)(EDI), 0x10ba158cu);
  /* 10ba158c push 0x10ba6234 */
  push32((uint32_t)(0x10ba6234u));
  /* 10ba1591 push 0x10ba616c */
  push32((uint32_t)(0x10ba616cu));
  /* 10ba1596 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1598u);
  /* 10ba1598 mov esi, dword ptr [0x10ba50c8] */
  ESI = (r32((uint32_t)(0x10ba50c8)));
  /* 10ba159e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ba15a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba15a2 call esi */
  call_ind((uint32_t)(ESI), 0x10ba15a4u);
  /* 10ba15a4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ba15a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba15a8 call esi */
  call_ind((uint32_t)(ESI), 0x10ba15aau);
  /* 10ba15aa push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10ba15ac push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba15ae call esi */
  call_ind((uint32_t)(ESI), 0x10ba15b0u);
  /* 10ba15b0 mov esi, dword ptr [0x10ba50cc] */
  ESI = (r32((uint32_t)(0x10ba50cc)));
  /* 10ba15b6 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10ba15b8 call esi */
  call_ind((uint32_t)(ESI), 0x10ba15bau);
  /* 10ba15ba push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10ba15bc call esi */
  call_ind((uint32_t)(ESI), 0x10ba15beu);
  /* 10ba15be push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10ba15c0 call esi */
  call_ind((uint32_t)(ESI), 0x10ba15c2u);
  /* 10ba15c2 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10ba15c4 call esi */
  call_ind((uint32_t)(ESI), 0x10ba15c6u);
  /* 10ba15c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 10ba15c8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba15ca push 0x10ba6660 */
  push32((uint32_t)(0x10ba6660u));
  /* 10ba15cf call dword ptr [0x10ba50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50d0))), 0x10ba15d5u);
  /* 10ba15d5 mov ebp, dword ptr [0x10ba50b0] */
  EBP = (r32((uint32_t)(0x10ba50b0)));
  /* 10ba15db add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba15de:;
  /* 10ba15de push 0xa */
  push32((uint32_t)(0xau));
  /* 10ba15e0 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba15e2u);
  /* 10ba15e2 mov esi, dword ptr [0x10ba50d4] */
  ESI = (r32((uint32_t)(0x10ba50d4)));
  /* 10ba15e8 mov edi, dword ptr [0x10ba50d8] */
  EDI = (r32((uint32_t)(0x10ba50d8)));
  /* 10ba15ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba15f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba15f3 je 0x10ba1640 */
  if (C.zf) goto L_10ba1640;
  /* 10ba15f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba15f7 push 0x10ba66c0 */
  push32((uint32_t)(0x10ba66c0u));
  /* 10ba15fc call dword ptr [0x10ba50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50dc))), 0x10ba1602u);
  /* 10ba1602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1607 jle 0x10ba1640 */
  if ((C.zf||C.sf!=C.of)) goto L_10ba1640;
  /* 10ba1609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba160b push 0xa */
  push32((uint32_t)(0xau));
  /* 10ba160d call ebx */
  call_ind((uint32_t)(EBX), 0x10ba160fu);
  /* 10ba160f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1611 push 0x10ba6758 */
  push32((uint32_t)(0x10ba6758u));
  /* 10ba1616 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1618u);
  /* 10ba1618 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba161a call edi */
  call_ind((uint32_t)(EDI), 0x10ba161cu);
  /* 10ba161c push 0x10ba622c */
  push32((uint32_t)(0x10ba622cu));
  /* 10ba1621 call dword ptr [0x10ba50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50c4))), 0x10ba1627u);
  /* 10ba1627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1629 push 0x10ba66b0 */
  push32((uint32_t)(0x10ba66b0u));
  /* 10ba162e call esi */
  call_ind((uint32_t)(ESI), 0x10ba1630u);
  /* 10ba1630 push 0x10ba6700 */
  push32((uint32_t)(0x10ba6700u));
  /* 10ba1635 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1637 call dword ptr [0x10ba50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50e0))), 0x10ba163du);
  /* 10ba163d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1640:;
  /* 10ba1640 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba1642 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1644u);
  /* 10ba1644 mov ebp, dword ptr [0x10ba50e4] */
  EBP = (r32((uint32_t)(0x10ba50e4)));
  /* 10ba164a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba164d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba164f je 0x10ba16f5 */
  if (C.zf) goto L_10ba16f5;
  /* 10ba1655 push 0x10ba66b8 */
  push32((uint32_t)(0x10ba66b8u));
  /* 10ba165a push 0x10ba6660 */
  push32((uint32_t)(0x10ba6660u));
  /* 10ba165f call dword ptr [0x10ba50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50e8))), 0x10ba1665u);
  /* 10ba1665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba166a jg 0x10ba1681 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ba1681;
  /* 10ba166c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba166e push 0x10ba6660 */
  push32((uint32_t)(0x10ba6660u));
  /* 10ba1673 call dword ptr [0x10ba50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50dc))), 0x10ba1679u);
  /* 10ba1679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba167c cmp eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba167f jle 0x10ba16f5 */
  if ((C.zf||C.sf!=C.of)) goto L_10ba16f5;
L_10ba1681:;
  /* 10ba1681 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1683 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba1685 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1687u);
  /* 10ba1687 push 0x10ba6224 */
  push32((uint32_t)(0x10ba6224u));
  /* 10ba168c call dword ptr [0x10ba50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50c4))), 0x10ba1692u);
  /* 10ba1692 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1694 push 0x10ba6760 */
  push32((uint32_t)(0x10ba6760u));
  /* 10ba1699 call esi */
  call_ind((uint32_t)(ESI), 0x10ba169bu);
  /* 10ba169b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba169d call edi */
  call_ind((uint32_t)(EDI), 0x10ba169fu);
  /* 10ba169f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10ba16a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba16a6 call dword ptr [0x10ba50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50ec))), 0x10ba16acu);
  /* 10ba16ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba16ae push 0x10ba6670 */
  push32((uint32_t)(0x10ba6670u));
  /* 10ba16b3 call esi */
  call_ind((uint32_t)(ESI), 0x10ba16b5u);
  /* 10ba16b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba16b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba16b9 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba16bbu);
  /* 10ba16bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba16bd push 0x10ba6650 */
  push32((uint32_t)(0x10ba6650u));
  /* 10ba16c2 call esi */
  call_ind((uint32_t)(ESI), 0x10ba16c4u);
  /* 10ba16c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba16c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba16c8 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba16cau);
  /* 10ba16ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba16cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba16cf push 0x10ba6688 */
  push32((uint32_t)(0x10ba6688u));
  /* 10ba16d4 call esi */
  call_ind((uint32_t)(ESI), 0x10ba16d6u);
  /* 10ba16d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba16d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba16da call ebp */
  call_ind((uint32_t)(EBP), 0x10ba16dcu);
  /* 10ba16dc mov edi, dword ptr [0x10ba50f0] */
  EDI = (r32((uint32_t)(0x10ba50f0)));
  /* 10ba16e2 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10ba16e4 call edi */
  call_ind((uint32_t)(EDI), 0x10ba16e6u);
  /* 10ba16e6 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10ba16e8 call dword ptr [0x10ba50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50cc))), 0x10ba16eeu);
  /* 10ba16ee push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10ba16f0 call edi */
  call_ind((uint32_t)(EDI), 0x10ba16f2u);
  /* 10ba16f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba16f5:;
  /* 10ba16f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba16f7 call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba16fdu);
  /* 10ba16fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1700 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1702 je 0x10ba174c */
  if (C.zf) goto L_10ba174c;
  /* 10ba1704 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1706 call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba170cu);
  /* 10ba170c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba170f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1711 je 0x10ba174c */
  if (C.zf) goto L_10ba174c;
  /* 10ba1713 mov edi, dword ptr [0x10ba50f8] */
  EDI = (r32((uint32_t)(0x10ba50f8)));
  /* 10ba1719 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba171b push 0x10ba66a0 */
  push32((uint32_t)(0x10ba66a0u));
  /* 10ba1720 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1722 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1724u);
  /* 10ba1724 push 0x10ba6718 */
  push32((uint32_t)(0x10ba6718u));
  /* 10ba1729 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba172b call dword ptr [0x10ba50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50e0))), 0x10ba1731u);
  /* 10ba1731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1733 push 0x10ba6698 */
  push32((uint32_t)(0x10ba6698u));
  /* 10ba1738 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba173a call edi */
  call_ind((uint32_t)(EDI), 0x10ba173cu);
  /* 10ba173c push 0x10ba6720 */
  push32((uint32_t)(0x10ba6720u));
  /* 10ba1741 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1743 call dword ptr [0x10ba50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50e0))), 0x10ba1749u);
  /* 10ba1749 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba174c:;
  /* 10ba174c push 6 */
  push32((uint32_t)(0x6u));
  /* 10ba174e call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1754u);
  /* 10ba1754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1757 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1759 je 0x10ba17be */
  if (C.zf) goto L_10ba17be;
  /* 10ba175b mov edi, dword ptr [0x10ba50fc] */
  EDI = (r32((uint32_t)(0x10ba50fc)));
  /* 10ba1761 push 0x10ba6718 */
  push32((uint32_t)(0x10ba6718u));
  /* 10ba1766 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1768u);
  /* 10ba1768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba176b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba176d jne 0x10ba17be */
  if (!C.zf) goto L_10ba17be;
  /* 10ba176f push 0x10ba6720 */
  push32((uint32_t)(0x10ba6720u));
  /* 10ba1774 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1776u);
  /* 10ba1776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba177b jne 0x10ba17be */
  if (!C.zf) goto L_10ba17be;
  /* 10ba177d push 0x10ba66a0 */
  push32((uint32_t)(0x10ba66a0u));
  /* 10ba1782 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1784u);
  /* 10ba1784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1789 jle 0x10ba17be */
  if ((C.zf||C.sf!=C.of)) goto L_10ba17be;
  /* 10ba178b push 0x10ba6698 */
  push32((uint32_t)(0x10ba6698u));
  /* 10ba1790 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1792u);
  /* 10ba1792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1797 jle 0x10ba17be */
  if ((C.zf||C.sf!=C.of)) goto L_10ba17be;
  /* 10ba1799 mov edi, dword ptr [0x10ba5100] */
  EDI = (r32((uint32_t)(0x10ba5100)));
  /* 10ba179f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba17a1 push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba17a6 push 0x10ba66a0 */
  push32((uint32_t)(0x10ba66a0u));
  /* 10ba17ab call edi */
  call_ind((uint32_t)(EDI), 0x10ba17adu);
  /* 10ba17ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba17af push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba17b4 push 0x10ba6698 */
  push32((uint32_t)(0x10ba6698u));
  /* 10ba17b9 call edi */
  call_ind((uint32_t)(EDI), 0x10ba17bbu);
  /* 10ba17bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba17be:;
  /* 10ba17be mov edi, dword ptr [0x10ba50b0] */
  EDI = (r32((uint32_t)(0x10ba50b0)));
  /* 10ba17c4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10ba17c6 call edi */
  call_ind((uint32_t)(EDI), 0x10ba17c8u);
  /* 10ba17c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba17cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba17cd je 0x10ba1823 */
  if (C.zf) goto L_10ba1823;
  /* 10ba17cf push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba17d1 push 0x10ba66b0 */
  push32((uint32_t)(0x10ba66b0u));
  /* 10ba17d6 call dword ptr [0x10ba5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5104))), 0x10ba17dcu);
  /* 10ba17dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba17df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba17e1 jne 0x10ba1823 */
  if (!C.zf) goto L_10ba1823;
  /* 10ba17e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ba17e4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10ba17e6 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba17e8u);
  /* 10ba17e8 push 0x10ba621c */
  push32((uint32_t)(0x10ba621cu));
  /* 10ba17ed call dword ptr [0x10ba50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50c4))), 0x10ba17f3u);
  /* 10ba17f3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10ba17f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba17fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba17fc call dword ptr [0x10ba5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5108))), 0x10ba1802u);
  /* 10ba1802 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1804 push 0x10ba6708 */
  push32((uint32_t)(0x10ba6708u));
  /* 10ba1809 call esi */
  call_ind((uint32_t)(ESI), 0x10ba180bu);
  /* 10ba180b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba180d push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba180f call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1811u);
  /* 10ba1811 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1813 push 0x10ba6678 */
  push32((uint32_t)(0x10ba6678u));
  /* 10ba1818 call esi */
  call_ind((uint32_t)(ESI), 0x10ba181au);
  /* 10ba181a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba181c push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba181e call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1820u);
  /* 10ba1820 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1823:;
  /* 10ba1823 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1825 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1827u);
  /* 10ba1827 mov edi, dword ptr [0x10ba510c] */
  EDI = (r32((uint32_t)(0x10ba510c)));
  /* 10ba182d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1830 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1832 je 0x10ba186b */
  if (C.zf) goto L_10ba186b;
  /* 10ba1834 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1836 call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba183cu);
  /* 10ba183c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba183f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1841 je 0x10ba186b */
  if (C.zf) goto L_10ba186b;
  /* 10ba1843 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1845 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1847 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1849u);
  /* 10ba1849 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba184b push 0x10ba6658 */
  push32((uint32_t)(0x10ba6658u));
  /* 10ba1850 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1852u);
  /* 10ba1852 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1854 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10ba1859 push 0x10ba6690 */
  push32((uint32_t)(0x10ba6690u));
  /* 10ba185e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1860 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1862u);
  /* 10ba1862 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1864 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10ba1866 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1868u);
  /* 10ba1868 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba186b:;
  /* 10ba186b push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba186d call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1873u);
  /* 10ba1873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1876 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1878 je 0x10ba18d8 */
  if (C.zf) goto L_10ba18d8;
  /* 10ba187a push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10ba187c call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1882u);
  /* 10ba1882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1885 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1887 jne 0x10ba18d8 */
  if (!C.zf) goto L_10ba18d8;
  /* 10ba1889 push 0x10ba6718 */
  push32((uint32_t)(0x10ba6718u));
  /* 10ba188e call dword ptr [0x10ba50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50fc))), 0x10ba1894u);
  /* 10ba1894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1899 jne 0x10ba18d8 */
  if (!C.zf) goto L_10ba18d8;
  /* 10ba189b push 0x10ba6720 */
  push32((uint32_t)(0x10ba6720u));
  /* 10ba18a0 call dword ptr [0x10ba50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50fc))), 0x10ba18a6u);
  /* 10ba18a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba18a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba18ab jne 0x10ba18d8 */
  if (!C.zf) goto L_10ba18d8;
  /* 10ba18ad push eax */
  push32((uint32_t)(EAX));
  /* 10ba18ae push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba18b0 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba18b2u);
  /* 10ba18b2 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10ba18b7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ba18b9 call dword ptr [0x10ba50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50ec))), 0x10ba18bfu);
  /* 10ba18bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba18c1 push 0x10ba6658 */
  push32((uint32_t)(0x10ba6658u));
  /* 10ba18c6 call esi */
  call_ind((uint32_t)(ESI), 0x10ba18c8u);
  /* 10ba18c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba18ca push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10ba18cc push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba18d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba18d3 call edi */
  call_ind((uint32_t)(EDI), 0x10ba18d5u);
  /* 10ba18d5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba18d8:;
  /* 10ba18d8 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10ba18da call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba18e0u);
  /* 10ba18e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba18e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba18e5 je 0x10ba1915 */
  if (C.zf) goto L_10ba1915;
  /* 10ba18e7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ba18e9 call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba18efu);
  /* 10ba18ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba18f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba18f4 je 0x10ba1915 */
  if (C.zf) goto L_10ba1915;
  /* 10ba18f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba18f8 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10ba18fa call ebx */
  call_ind((uint32_t)(EBX), 0x10ba18fcu);
  /* 10ba18fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba18fe push 0x10ba6658 */
  push32((uint32_t)(0x10ba6658u));
  /* 10ba1903 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1905u);
  /* 10ba1905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1907 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10ba1909 push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba190e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1910 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1912u);
  /* 10ba1912 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1915:;
  /* 10ba1915 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10ba1917 call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba191du);
  /* 10ba191d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1920 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1922 je 0x10ba1985 */
  if (C.zf) goto L_10ba1985;
  /* 10ba1924 mov edi, dword ptr [0x10ba50dc] */
  EDI = (r32((uint32_t)(0x10ba50dc)));
  /* 10ba192a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba192c push 0x10ba6668 */
  push32((uint32_t)(0x10ba6668u));
  /* 10ba1931 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1933u);
  /* 10ba1933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1936 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1939 jg 0x10ba1952 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ba1952;
  /* 10ba193b push 0x10ba66b8 */
  push32((uint32_t)(0x10ba66b8u));
  /* 10ba1940 push 0x10ba6668 */
  push32((uint32_t)(0x10ba6668u));
  /* 10ba1945 call dword ptr [0x10ba50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50e8))), 0x10ba194bu);
  /* 10ba194b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba194e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1950 jle 0x10ba198b */
  if ((C.zf||C.sf!=C.of)) goto L_10ba198b;
L_10ba1952:;
  /* 10ba1952 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1954 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10ba1956 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1958u);
  /* 10ba1958 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba195a push 0x10ba6748 */
  push32((uint32_t)(0x10ba6748u));
  /* 10ba195f call esi */
  call_ind((uint32_t)(ESI), 0x10ba1961u);
  /* 10ba1961 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1963 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10ba1968 push 0x10ba66f0 */
  push32((uint32_t)(0x10ba66f0u));
  /* 10ba196d push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba196f call dword ptr [0x10ba5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5110))), 0x10ba1975u);
  /* 10ba1975 push 0x10ba66f0 */
  push32((uint32_t)(0x10ba66f0u));
  /* 10ba197a call dword ptr [0x10ba5114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5114))), 0x10ba1980u);
  /* 10ba1980 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1983 jmp 0x10ba198b */
  goto L_10ba198b;
L_10ba1985:;
  /* 10ba1985 mov edi, dword ptr [0x10ba50dc] */
  EDI = (r32((uint32_t)(0x10ba50dc)));
L_10ba198b:;
  /* 10ba198b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10ba198d call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1993u);
  /* 10ba1993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1996 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1998 je 0x10ba19ff */
  if (C.zf) goto L_10ba19ff;
  /* 10ba199a push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba199c push 0x10ba66f0 */
  push32((uint32_t)(0x10ba66f0u));
  /* 10ba19a1 call edi */
  call_ind((uint32_t)(EDI), 0x10ba19a3u);
  /* 10ba19a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba19a6 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba19a9 jle 0x10ba19ff */
  if ((C.zf||C.sf!=C.of)) goto L_10ba19ff;
  /* 10ba19ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba19ad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10ba19af call ebx */
  call_ind((uint32_t)(EBX), 0x10ba19b1u);
  /* 10ba19b1 push 0x10ba6214 */
  push32((uint32_t)(0x10ba6214u));
  /* 10ba19b6 call dword ptr [0x10ba5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5118))), 0x10ba19bcu);
  /* 10ba19bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba19bf cmp al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba19c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba19c3 push 0x10ba6748 */
  push32((uint32_t)(0x10ba6748u));
  /* 10ba19c8 jne 0x10ba19e6 */
  if (!C.zf) goto L_10ba19e6;
  /* 10ba19ca call esi */
  call_ind((uint32_t)(ESI), 0x10ba19ccu);
  /* 10ba19cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba19ce push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba19d0 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba19d2u);
  /* 10ba19d2 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10ba19d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba19d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba19db call dword ptr [0x10ba5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5108))), 0x10ba19e1u);
  /* 10ba19e1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba19e4 jmp 0x10ba19ff */
  goto L_10ba19ff;
L_10ba19e6:;
  /* 10ba19e6 call esi */
  call_ind((uint32_t)(ESI), 0x10ba19e8u);
  /* 10ba19e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba19ea push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10ba19ef push 0x10ba6768 */
  push32((uint32_t)(0x10ba6768u));
  /* 10ba19f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba19f6 call dword ptr [0x10ba5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5110))), 0x10ba19fcu);
  /* 10ba19fc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba19ff:;
  /* 10ba19ff mov ebp, dword ptr [0x10ba50b0] */
  EBP = (r32((uint32_t)(0x10ba50b0)));
  /* 10ba1a05 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10ba1a07 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1a09u);
  /* 10ba1a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a0c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1a0e je 0x10ba1a3b */
  if (C.zf) goto L_10ba1a3b;
  /* 10ba1a10 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1a12 push 0x10ba6768 */
  push32((uint32_t)(0x10ba6768u));
  /* 10ba1a17 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1a19u);
  /* 10ba1a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a1c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1a1f jle 0x10ba1a3b */
  if ((C.zf||C.sf!=C.of)) goto L_10ba1a3b;
  /* 10ba1a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1a23 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10ba1a25 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1a27u);
  /* 10ba1a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1a29 push 0x10ba6748 */
  push32((uint32_t)(0x10ba6748u));
  /* 10ba1a2e call esi */
  call_ind((uint32_t)(ESI), 0x10ba1a30u);
  /* 10ba1a30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1a32 call dword ptr [0x10ba511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba511c))), 0x10ba1a38u);
  /* 10ba1a38 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1a3b:;
  /* 10ba1a3b push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ba1a3d call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1a3fu);
  /* 10ba1a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1a44 je 0x10ba1a9c */
  if (C.zf) goto L_10ba1a9c;
  /* 10ba1a46 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba1a48 call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba1a4eu);
  /* 10ba1a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1a53 je 0x10ba1a9c */
  if (C.zf) goto L_10ba1a9c;
  /* 10ba1a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1a57 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ba1a59 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1a5bu);
  /* 10ba1a5b mov ebp, dword ptr [0x10ba50c4] */
  EBP = (r32((uint32_t)(0x10ba50c4)));
  /* 10ba1a61 push 0x10ba620c */
  push32((uint32_t)(0x10ba620cu));
  /* 10ba1a66 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1a68u);
  /* 10ba1a68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a6b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ba1a6d push 0x10ba6768 */
  push32((uint32_t)(0x10ba6768u));
  /* 10ba1a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1a74 push 0x10ba66a8 */
  push32((uint32_t)(0x10ba66a8u));
  /* 10ba1a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1a7b call dword ptr [0x10ba50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b8))), 0x10ba1a81u);
  /* 10ba1a81 mov eax, dword ptr [eax*4 + 0x10ba6030] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10ba6030)));
  /* 10ba1a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a8b push eax */
  push32((uint32_t)(EAX));
  /* 10ba1a8c push 0x10ba6680 */
  push32((uint32_t)(0x10ba6680u));
  /* 10ba1a91 call dword ptr [0x10ba5120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5120))), 0x10ba1a97u);
  /* 10ba1a97 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1a9a jmp 0x10ba1aa2 */
  goto L_10ba1aa2;
L_10ba1a9c:;
  /* 10ba1a9c mov ebp, dword ptr [0x10ba50c4] */
  EBP = (r32((uint32_t)(0x10ba50c4)));
L_10ba1aa2:;
  /* 10ba1aa2 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba1aa4 call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1aaau);
  /* 10ba1aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1aad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1aaf je 0x10ba1b38 */
  if (C.zf) goto L_10ba1b38;
  /* 10ba1ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1ab7 push 0x10ba6658 */
  push32((uint32_t)(0x10ba6658u));
  /* 10ba1abc call dword ptr [0x10ba5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5104))), 0x10ba1ac2u);
  /* 10ba1ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1ac5 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1ac8 jge 0x10ba1b38 */
  if ((C.sf==C.of)) goto L_10ba1b38;
  /* 10ba1aca push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1acc push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba1ace call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1ad0u);
  /* 10ba1ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1ad2 push 0x10ba66a0 */
  push32((uint32_t)(0x10ba66a0u));
  /* 10ba1ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1ad9 call dword ptr [0x10ba50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f8))), 0x10ba1adfu);
  /* 10ba1adf mov edi, dword ptr [0x10ba5124] */
  EDI = (r32((uint32_t)(0x10ba5124)));
  /* 10ba1ae5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1ae7 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1ae9u);
  /* 10ba1ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1aeb push 0x10ba6698 */
  push32((uint32_t)(0x10ba6698u));
  /* 10ba1af0 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1af2u);
  /* 10ba1af2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1af4 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1af6u);
  /* 10ba1af6 push 0x10ba6204 */
  push32((uint32_t)(0x10ba6204u));
  /* 10ba1afb call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1afdu);
  /* 10ba1afd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10ba1b02 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba1b04 call dword ptr [0x10ba50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50ec))), 0x10ba1b0au);
  /* 10ba1b0a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10ba1b0c call dword ptr [0x10ba50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50cc))), 0x10ba1b12u);
  /* 10ba1b12 mov edi, dword ptr [0x10ba50f0] */
  EDI = (r32((uint32_t)(0x10ba50f0)));
  /* 10ba1b18 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10ba1b1a call edi */
  call_ind((uint32_t)(EDI), 0x10ba1b1cu);
  /* 10ba1b1c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10ba1b1e call edi */
  call_ind((uint32_t)(EDI), 0x10ba1b20u);
  /* 10ba1b20 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba1b22 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1b24 push 0x10ba66e0 */
  push32((uint32_t)(0x10ba66e0u));
  /* 10ba1b29 call dword ptr [0x10ba50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50d0))), 0x10ba1b2fu);
  /* 10ba1b2f mov edi, dword ptr [0x10ba50dc] */
  EDI = (r32((uint32_t)(0x10ba50dc)));
  /* 10ba1b35 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1b38:;
  /* 10ba1b38 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ba1b3a call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1b40u);
  /* 10ba1b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1b43 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1b45 je 0x10ba1b72 */
  if (C.zf) goto L_10ba1b72;
  /* 10ba1b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1b49 push 0x10ba6750 */
  push32((uint32_t)(0x10ba6750u));
  /* 10ba1b4e call dword ptr [0x10ba5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5104))), 0x10ba1b54u);
  /* 10ba1b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1b57 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1b5a jge 0x10ba1b72 */
  if ((C.sf==C.of)) goto L_10ba1b72;
  /* 10ba1b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1b5e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ba1b60 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1b62u);
  /* 10ba1b62 push 0x10ba61fc */
  push32((uint32_t)(0x10ba61fcu));
  /* 10ba1b67 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1b69u);
  /* 10ba1b69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1b6c call dword ptr [0x10ba5128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5128))), 0x10ba1b72u);
L_10ba1b72:;
  /* 10ba1b72 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ba1b74 call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1b7au);
  /* 10ba1b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1b7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1b7f je 0x10ba1bc7 */
  if (C.zf) goto L_10ba1bc7;
  /* 10ba1b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1b83 push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba1b88 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1b8au);
  /* 10ba1b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1b8f jne 0x10ba1bc7 */
  if (!C.zf) goto L_10ba1bc7;
  /* 10ba1b91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1b93 push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba1b98 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1b9au);
  /* 10ba1b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1b9f jne 0x10ba1bc7 */
  if (!C.zf) goto L_10ba1bc7;
  /* 10ba1ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1ba3 push 0x10ba66f8 */
  push32((uint32_t)(0x10ba66f8u));
  /* 10ba1ba8 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1baau);
  /* 10ba1baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1baf jle 0x10ba1bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ba1bc7;
  /* 10ba1bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1bb3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ba1bb5 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1bb7u);
  /* 10ba1bb7 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10ba1bbc push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ba1bbe call dword ptr [0x10ba50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50ec))), 0x10ba1bc4u);
  /* 10ba1bc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1bc7:;
  /* 10ba1bc7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ba1bc9 call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1bcfu);
  /* 10ba1bcf mov edi, dword ptr [0x10ba512c] */
  EDI = (r32((uint32_t)(0x10ba512c)));
  /* 10ba1bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1bd8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1bda je 0x10ba1bfd */
  if (C.zf) goto L_10ba1bfd;
  /* 10ba1bdc push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ba1bde call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba1be4u);
  /* 10ba1be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1be7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1be9 je 0x10ba1bfd */
  if (C.zf) goto L_10ba1bfd;
  /* 10ba1beb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1bed push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ba1bef call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1bf1u);
  /* 10ba1bf1 push 0x10ba61f4 */
  push32((uint32_t)(0x10ba61f4u));
  /* 10ba1bf6 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1bf8u);
  /* 10ba1bf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1bfb call edi */
  call_ind((uint32_t)(EDI), 0x10ba1bfdu);
L_10ba1bfd:;
  /* 10ba1bfd push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10ba1bff call dword ptr [0x10ba50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50b0))), 0x10ba1c05u);
  /* 10ba1c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c08 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1c0a je 0x10ba1c2f */
  if (C.zf) goto L_10ba1c2f;
  /* 10ba1c0c push 0x10ba66b8 */
  push32((uint32_t)(0x10ba66b8u));
  /* 10ba1c11 call dword ptr [0x10ba50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50fc))), 0x10ba1c17u);
  /* 10ba1c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1c1c jne 0x10ba1c2f */
  if (!C.zf) goto L_10ba1c2f;
  /* 10ba1c1e push eax */
  push32((uint32_t)(EAX));
  /* 10ba1c1f push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10ba1c21 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1c23u);
  /* 10ba1c23 push 0x10ba61ec */
  push32((uint32_t)(0x10ba61ecu));
  /* 10ba1c28 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1c2au);
  /* 10ba1c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c2d call edi */
  call_ind((uint32_t)(EDI), 0x10ba1c2fu);
L_10ba1c2f:;
  /* 10ba1c2f mov edi, dword ptr [0x10ba50b0] */
  EDI = (r32((uint32_t)(0x10ba50b0)));
  /* 10ba1c35 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10ba1c37 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1c39u);
  /* 10ba1c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1c3e je 0x10ba1caf */
  if (C.zf) goto L_10ba1caf;
  /* 10ba1c40 mov edi, dword ptr [0x10ba50dc] */
  EDI = (r32((uint32_t)(0x10ba50dc)));
  /* 10ba1c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1c48 push 0x10ba66d8 */
  push32((uint32_t)(0x10ba66d8u));
  /* 10ba1c4d call edi */
  call_ind((uint32_t)(EDI), 0x10ba1c4fu);
  /* 10ba1c4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1c54 jg 0x10ba1c76 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ba1c76;
  /* 10ba1c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1c58 push 0x10ba66c8 */
  push32((uint32_t)(0x10ba66c8u));
  /* 10ba1c5d call edi */
  call_ind((uint32_t)(EDI), 0x10ba1c5fu);
  /* 10ba1c5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1c64 jg 0x10ba1c76 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ba1c76;
  /* 10ba1c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1c68 push 0x10ba66d0 */
  push32((uint32_t)(0x10ba66d0u));
  /* 10ba1c6d call edi */
  call_ind((uint32_t)(EDI), 0x10ba1c6fu);
  /* 10ba1c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1c74 jle 0x10ba1ca9 */
  if ((C.zf||C.sf!=C.of)) goto L_10ba1ca9;
L_10ba1c76:;
  /* 10ba1c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1c78 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10ba1c7a call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1c7cu);
  /* 10ba1c7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1c7e push 0x10ba6770 */
  push32((uint32_t)(0x10ba6770u));
  /* 10ba1c83 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1c85u);
  /* 10ba1c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1c87 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10ba1c8c push 0x10ba66c8 */
  push32((uint32_t)(0x10ba66c8u));
  /* 10ba1c91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1c93 call dword ptr [0x10ba5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5110))), 0x10ba1c99u);
  /* 10ba1c99 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10ba1c9e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10ba1ca0 call dword ptr [0x10ba50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50ec))), 0x10ba1ca6u);
  /* 10ba1ca6 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1ca9:;
  /* 10ba1ca9 mov edi, dword ptr [0x10ba50b0] */
  EDI = (r32((uint32_t)(0x10ba50b0)));
L_10ba1caf:;
  /* 10ba1caf push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10ba1cb1 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1cb3u);
  /* 10ba1cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1cb6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1cb8 je 0x10ba1d03 */
  if (C.zf) goto L_10ba1d03;
  /* 10ba1cba push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10ba1cbc call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba1cc2u);
  /* 10ba1cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1cc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1cc7 je 0x10ba1d03 */
  if (C.zf) goto L_10ba1d03;
  /* 10ba1cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1ccb push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10ba1ccd call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1ccfu);
  /* 10ba1ccf push 0x10ba61e4 */
  push32((uint32_t)(0x10ba61e4u));
  /* 10ba1cd4 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1cd6u);
  /* 10ba1cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1cd8 push 0x10ba6770 */
  push32((uint32_t)(0x10ba6770u));
  /* 10ba1cdd call esi */
  call_ind((uint32_t)(ESI), 0x10ba1cdfu);
  /* 10ba1cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1ce1 push 0xf5 */
  push32((uint32_t)(0xf5u));
  /* 10ba1ce6 push 0x10ba66e0 */
  push32((uint32_t)(0x10ba66e0u));
  /* 10ba1ceb push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1ced call dword ptr [0x10ba5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5110))), 0x10ba1cf3u);
  /* 10ba1cf3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10ba1cf8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10ba1cfa call dword ptr [0x10ba50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50ec))), 0x10ba1d00u);
  /* 10ba1d00 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1d03:;
  /* 10ba1d03 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10ba1d05 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1d07u);
  /* 10ba1d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1d0a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1d0c je 0x10ba1d41 */
  if (C.zf) goto L_10ba1d41;
  /* 10ba1d0e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10ba1d10 call dword ptr [0x10ba50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50f4))), 0x10ba1d16u);
  /* 10ba1d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1d19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1d1b je 0x10ba1d41 */
  if (C.zf) goto L_10ba1d41;
  /* 10ba1d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1d1f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10ba1d21 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1d23u);
  /* 10ba1d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1d25 push 0x10ba6770 */
  push32((uint32_t)(0x10ba6770u));
  /* 10ba1d2a call esi */
  call_ind((uint32_t)(ESI), 0x10ba1d2cu);
  /* 10ba1d2c push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10ba1d31 push 0x10ba66c8 */
  push32((uint32_t)(0x10ba66c8u));
  /* 10ba1d36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1d38 call dword ptr [0x10ba5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5130))), 0x10ba1d3eu);
  /* 10ba1d3e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1d41:;
  /* 10ba1d41 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10ba1d43 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1d45u);
  /* 10ba1d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba1d4a je 0x10ba1db7 */
  if (C.zf) goto L_10ba1db7;
  /* 10ba1d4c push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1d4e push 0x10ba6710 */
  push32((uint32_t)(0x10ba6710u));
  /* 10ba1d53 call dword ptr [0x10ba5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5104))), 0x10ba1d59u);
  /* 10ba1d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1d5e jne 0x10ba1db7 */
  if (!C.zf) goto L_10ba1db7;
  /* 10ba1d60 push eax */
  push32((uint32_t)(EAX));
  /* 10ba1d61 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10ba1d63 call ebx */
  call_ind((uint32_t)(EBX), 0x10ba1d65u);
  /* 10ba1d65 push 0x10ba61dc */
  push32((uint32_t)(0x10ba61dcu));
  /* 10ba1d6a call ebp */
  call_ind((uint32_t)(EBP), 0x10ba1d6cu);
  /* 10ba1d6c mov edi, dword ptr [0x10ba50b8] */
  EDI = (r32((uint32_t)(0x10ba50b8)));
  /* 10ba1d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1d74 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1d76u);
  /* 10ba1d76 mov ecx, 4 */
  ECX = (0x4u);
  /* 10ba1d7b mov esi, dword ptr [0x10ba5108] */
  ESI = (r32((uint32_t)(0x10ba5108)));
  /* 10ba1d81 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba1d83 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10ba1d86 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10ba1d89 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10ba1d8c shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10ba1d8f push ecx */
  push32((uint32_t)(ECX));
  /* 10ba1d90 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba1d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1d94 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1d96u);
  /* 10ba1d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1d98 call edi */
  call_ind((uint32_t)(EDI), 0x10ba1d9au);
  /* 10ba1d9a mov ecx, 4 */
  ECX = (0x4u);
  /* 10ba1d9f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba1da1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10ba1da4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10ba1da7 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10ba1daa shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10ba1dad push edx */
  push32((uint32_t)(EDX));
  /* 10ba1dae push 5 */
  push32((uint32_t)(0x5u));
  /* 10ba1db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1db2 call esi */
  call_ind((uint32_t)(ESI), 0x10ba1db4u);
  /* 10ba1db4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba1db7:;
  /* 10ba1db7 pop edi */
  EDI = (pop32());
  /* 10ba1db8 pop esi */
  ESI = (pop32());
  /* 10ba1db9 pop ebp */
  EBP = (pop32());
  /* 10ba1dba pop ebx */
  EBX = (pop32());
  /* 10ba1dbb ret  */
  ESPCHK(0x10ba1220u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dc0 @ 0x10ba1dc0 (20 bytes, 6 insns) */
void f_10ba1dc0(void) {
  FTRACE(0x10ba1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1dc0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba1dc4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ba1dc5 jne 0x10ba1dcc */
  if (!C.zf) goto L_10ba1dcc;
  /* 10ba1dc7 call 0x10ba1000 */
  push32(0x10ba1dccu); f_10ba1000();
L_10ba1dcc:;
  /* 10ba1dcc mov eax, 1 */
  EAX = (0x1u);
  /* 10ba1dd1 ret 0xc */
  ESPCHK(0x10ba1dc0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001de0 @ 0x10ba1de0 (217 bytes, 57 insns) */
void f_10ba1de0(void) {
  FTRACE(0x10ba1de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1de0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba1de4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1de7 jne 0x10ba1e75 */
  if (!C.zf) goto L_10ba1e75;
  /* 10ba1ded call dword ptr [0x10ba5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5090))), 0x10ba1df3u);
  /* 10ba1df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1df5 mov dword ptr [0x10ba6794], eax */
  w32((uint32_t)(0x10ba6794), (EAX));
  /* 10ba1dfa call 0x10ba2814 */
  push32(0x10ba1dffu); f_10ba2814();
  /* 10ba1dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1e01 pop ecx */
  ECX = (pop32());
  /* 10ba1e02 je 0x10ba1e40 */
  if (C.zf) goto L_10ba1e40;
  /* 10ba1e04 mov eax, dword ptr [0x10ba6794] */
  EAX = (r32((uint32_t)(0x10ba6794)));
  /* 10ba1e09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ba1e0b mov cl, byte ptr [0x10ba6795] */
  CL = (r8((uint32_t)(0x10ba6795)));
  /* 10ba1e11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba1e16 shr dword ptr [0x10ba6794], 0x10 */
  w32((uint32_t)(0x10ba6794), (sh_shr((uint32_t)(r32((uint32_t)(0x10ba6794))), (0x10u)&0x1f, 32)));
  /* 10ba1e1d mov dword ptr [0x10ba679c], eax */
  w32((uint32_t)(0x10ba679c), (EAX));
  /* 10ba1e22 mov dword ptr [0x10ba67a0], ecx */
  w32((uint32_t)(0x10ba67a0), (ECX));
  /* 10ba1e28 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ba1e2b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1e2d mov dword ptr [0x10ba6798], eax */
  w32((uint32_t)(0x10ba6798), (EAX));
  /* 10ba1e32 call 0x10ba20a7 */
  push32(0x10ba1e37u); f_10ba20a7();
  /* 10ba1e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1e39 jne 0x10ba1e44 */
  if (!C.zf) goto L_10ba1e44;
  /* 10ba1e3b call 0x10ba2850 */
  push32(0x10ba1e40u); f_10ba2850();
L_10ba1e40:;
  /* 10ba1e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba1e42 jmp 0x10ba1eb6 */
  goto L_10ba1eb6;
L_10ba1e44:;
  /* 10ba1e44 call dword ptr [0x10ba508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba508c))), 0x10ba1e4au);
  /* 10ba1e4a mov dword ptr [0x10ba6cf8], eax */
  w32((uint32_t)(0x10ba6cf8), (EAX));
  /* 10ba1e4f call 0x10ba26e2 */
  push32(0x10ba1e54u); f_10ba26e2();
  /* 10ba1e54 mov dword ptr [0x10ba6780], eax */
  w32((uint32_t)(0x10ba6780), (EAX));
  /* 10ba1e59 call 0x10ba21cc */
  push32(0x10ba1e5eu); f_10ba21cc();
  /* 10ba1e5e call 0x10ba2495 */
  push32(0x10ba1e63u); f_10ba2495();
  /* 10ba1e63 call 0x10ba23dc */
  push32(0x10ba1e68u); f_10ba23dc();
  /* 10ba1e68 call 0x10ba1f89 */
  push32(0x10ba1e6du); f_10ba1f89();
  /* 10ba1e6d inc dword ptr [0x10ba677c] */
  { uint32_t _r=(r32((uint32_t)(0x10ba677c)))+1; w32((uint32_t)(0x10ba677c), (_r)); fl_inc(_r,32); }
  /* 10ba1e73 jmp 0x10ba1eb3 */
  goto L_10ba1eb3;
L_10ba1e75:;
  /* 10ba1e75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ba1e77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1e79 jne 0x10ba1ea7 */
  if (!C.zf) goto L_10ba1ea7;
  /* 10ba1e7b cmp dword ptr [0x10ba677c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10ba677c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1e81 jle 0x10ba1e40 */
  if ((C.zf||C.sf!=C.of)) goto L_10ba1e40;
  /* 10ba1e83 dec dword ptr [0x10ba677c] */
  { uint32_t _r=(r32((uint32_t)(0x10ba677c)))-1; w32((uint32_t)(0x10ba677c), (_r)); fl_dec(_r,32); }
  /* 10ba1e89 cmp dword ptr [0x10ba67cc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10ba67cc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1e8f jne 0x10ba1e96 */
  if (!C.zf) goto L_10ba1e96;
  /* 10ba1e91 call 0x10ba1fc7 */
  push32(0x10ba1e96u); f_10ba1fc7();
L_10ba1e96:;
  /* 10ba1e96 call 0x10ba2388 */
  push32(0x10ba1e9bu); f_10ba2388();
  /* 10ba1e9b call 0x10ba20fb */
  push32(0x10ba1ea0u); f_10ba20fb();
  /* 10ba1ea0 call 0x10ba2850 */
  push32(0x10ba1ea5u); f_10ba2850();
  /* 10ba1ea5 jmp 0x10ba1eb3 */
  goto L_10ba1eb3;
L_10ba1ea7:;
  /* 10ba1ea7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1eaa jne 0x10ba1eb3 */
  if (!C.zf) goto L_10ba1eb3;
  /* 10ba1eac push ecx */
  push32((uint32_t)(ECX));
  /* 10ba1ead call 0x10ba212c */
  push32(0x10ba1eb2u); f_10ba212c();
  /* 10ba1eb2 pop ecx */
  ECX = (pop32());
L_10ba1eb3:;
  /* 10ba1eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1eb5 pop eax */
  EAX = (pop32());
L_10ba1eb6:;
  /* 10ba1eb6 ret 0xc */
  ESPCHK(0x10ba1de0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10ba1eb9 (157 bytes, 73 insns) */
void f_10ba1eb9(void) {
  FTRACE(0x10ba1eb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1eb9 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba1eba mov ebp, esp */
  EBP = (ESP);
  /* 10ba1ebc push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1ebd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba1ec0 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1ec1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba1ec4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1ec5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10ba1ec8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba1eca jne 0x10ba1ed5 */
  if (!C.zf) goto L_10ba1ed5;
  /* 10ba1ecc cmp dword ptr [0x10ba677c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ba677c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1ed3 jmp 0x10ba1efb */
  goto L_10ba1efb;
L_10ba1ed5:;
  /* 10ba1ed5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1ed8 je 0x10ba1edf */
  if (C.zf) goto L_10ba1edf;
  /* 10ba1eda cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1edd jne 0x10ba1f01 */
  if (!C.zf) goto L_10ba1f01;
L_10ba1edf:;
  /* 10ba1edf mov eax, dword ptr [0x10ba6cfc] */
  EAX = (r32((uint32_t)(0x10ba6cfc)));
  /* 10ba1ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1ee6 je 0x10ba1ef1 */
  if (C.zf) goto L_10ba1ef1;
  /* 10ba1ee8 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1ee9 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1eea push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1eeb call eax */
  call_ind((uint32_t)(EAX), 0x10ba1eedu);
  /* 10ba1eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1eef je 0x10ba1efd */
  if (C.zf) goto L_10ba1efd;
L_10ba1ef1:;
  /* 10ba1ef1 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1ef2 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1ef3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1ef4 call 0x10ba1de0 */
  push32(0x10ba1ef9u); f_10ba1de0();
  /* 10ba1ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10ba1efb:;
  /* 10ba1efb jne 0x10ba1f01 */
  if (!C.zf) goto L_10ba1f01;
L_10ba1efd:;
  /* 10ba1efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba1eff jmp 0x10ba1f4f */
  goto L_10ba1f4f;
L_10ba1f01:;
  /* 10ba1f01 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1f02 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1f03 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1f04 call 0x10ba1dc0 */
  push32(0x10ba1f09u); f_10ba1dc0();
  /* 10ba1f09 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1f0c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ba1f0f jne 0x10ba1f1d */
  if (!C.zf) goto L_10ba1f1d;
  /* 10ba1f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1f13 jne 0x10ba1f4c */
  if (!C.zf) goto L_10ba1f4c;
  /* 10ba1f15 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1f16 push eax */
  push32((uint32_t)(EAX));
  /* 10ba1f17 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1f18 call 0x10ba1de0 */
  push32(0x10ba1f1du); f_10ba1de0();
L_10ba1f1d:;
  /* 10ba1f1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba1f1f je 0x10ba1f26 */
  if (C.zf) goto L_10ba1f26;
  /* 10ba1f21 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1f24 jne 0x10ba1f4c */
  if (!C.zf) goto L_10ba1f4c;
L_10ba1f26:;
  /* 10ba1f26 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1f27 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1f28 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1f29 call 0x10ba1de0 */
  push32(0x10ba1f2eu); f_10ba1de0();
  /* 10ba1f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1f30 jne 0x10ba1f35 */
  if (!C.zf) goto L_10ba1f35;
  /* 10ba1f32 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10ba1f35:;
  /* 10ba1f35 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1f39 je 0x10ba1f4c */
  if (C.zf) goto L_10ba1f4c;
  /* 10ba1f3b mov eax, dword ptr [0x10ba6cfc] */
  EAX = (r32((uint32_t)(0x10ba6cfc)));
  /* 10ba1f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1f42 je 0x10ba1f4c */
  if (C.zf) goto L_10ba1f4c;
  /* 10ba1f44 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1f45 push esi */
  push32((uint32_t)(ESI));
  /* 10ba1f46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1f47 call eax */
  call_ind((uint32_t)(EAX), 0x10ba1f49u);
  /* 10ba1f49 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10ba1f4c:;
  /* 10ba1f4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ba1f4f:;
  /* 10ba1f4f pop edi */
  EDI = (pop32());
  /* 10ba1f50 pop esi */
  ESI = (pop32());
  /* 10ba1f51 pop ebx */
  EBX = (pop32());
  /* 10ba1f52 pop ebp */
  EBP = (pop32());
  /* 10ba1f53 ret 0xc */
  ESPCHK(0x10ba1eb9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10ba1f56 (48 bytes, 15 insns) */
void f_10ba1f56(void) {
  FTRACE(0x10ba1f56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1f56 mov eax, dword ptr [0x10ba6788] */
  EAX = (r32((uint32_t)(0x10ba6788)));
  /* 10ba1f5b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1f5e je 0x10ba1f6d */
  if (C.zf) goto L_10ba1f6d;
  /* 10ba1f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1f62 jne 0x10ba1f72 */
  if (!C.zf) goto L_10ba1f72;
  /* 10ba1f64 cmp dword ptr [0x10ba678c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ba678c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1f6b jne 0x10ba1f72 */
  if (!C.zf) goto L_10ba1f72;
L_10ba1f6d:;
  /* 10ba1f6d call 0x10ba28c5 */
  push32(0x10ba1f72u); f_10ba28c5();
L_10ba1f72:;
  /* 10ba1f72 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10ba1f76 call 0x10ba28fe */
  push32(0x10ba1f7bu); f_10ba28fe();
  /* 10ba1f7b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10ba1f80 call dword ptr [0x10ba6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba6324))), 0x10ba1f86u);
  /* 10ba1f86 pop ecx */
  ECX = (pop32());
  /* 10ba1f87 pop ecx */
  ECX = (pop32());
  /* 10ba1f88 ret  */
  ESPCHK(0x10ba1f56u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f89 @ 0x10ba1f89 (45 bytes, 12 insns) */
void f_10ba1f89(void) {
  FTRACE(0x10ba1f89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1f89 mov eax, dword ptr [0x10ba6cf4] */
  EAX = (r32((uint32_t)(0x10ba6cf4)));
  /* 10ba1f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba1f90 je 0x10ba1f94 */
  if (C.zf) goto L_10ba1f94;
  /* 10ba1f92 call eax */
  call_ind((uint32_t)(EAX), 0x10ba1f94u);
L_10ba1f94:;
  /* 10ba1f94 push 0x10ba6010 */
  push32((uint32_t)(0x10ba6010u));
  /* 10ba1f99 push 0x10ba6008 */
  push32((uint32_t)(0x10ba6008u));
  /* 10ba1f9e call 0x10ba208d */
  push32(0x10ba1fa3u); f_10ba208d();
  /* 10ba1fa3 push 0x10ba6004 */
  push32((uint32_t)(0x10ba6004u));
  /* 10ba1fa8 push 0x10ba6000 */
  push32((uint32_t)(0x10ba6000u));
  /* 10ba1fad call 0x10ba208d */
  push32(0x10ba1fb2u); f_10ba208d();
  /* 10ba1fb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1fb5 ret  */
  ESPCHK(0x10ba1f89u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10ba1fb6 (17 bytes, 6 insns) */
void f_10ba1fb6(void) {
  FTRACE(0x10ba1fb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1fb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1fba push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10ba1fbe call 0x10ba1fd6 */
  push32(0x10ba1fc3u); f_10ba1fd6();
  /* 10ba1fc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1fc6 ret  */
  ESPCHK(0x10ba1fb6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fc7 @ 0x10ba1fc7 (15 bytes, 6 insns) */
void f_10ba1fc7(void) {
  FTRACE(0x10ba1fc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba1fcd call 0x10ba1fd6 */
  push32(0x10ba1fd2u); f_10ba1fd6();
  /* 10ba1fd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba1fd5 ret  */
  ESPCHK(0x10ba1fc7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd6 @ 0x10ba1fd6 (163 bytes, 53 insns) */
void f_10ba1fd6(void) {
  FTRACE(0x10ba1fd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba1fd6 push edi */
  push32((uint32_t)(EDI));
  /* 10ba1fd7 call 0x10ba207b */
  push32(0x10ba1fdcu); f_10ba207b();
  /* 10ba1fdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba1fde pop edi */
  EDI = (pop32());
  /* 10ba1fdf cmp dword ptr [0x10ba67d0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10ba67d0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1fe5 jne 0x10ba1ff8 */
  if (!C.zf) goto L_10ba1ff8;
  /* 10ba1fe7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10ba1feb call dword ptr [0x10ba5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5004))), 0x10ba1ff1u);
  /* 10ba1ff1 push eax */
  push32((uint32_t)(EAX));
  /* 10ba1ff2 call dword ptr [0x10ba5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5098))), 0x10ba1ff8u);
L_10ba1ff8:;
  /* 10ba1ff8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba1ffd push ebx */
  push32((uint32_t)(EBX));
  /* 10ba1ffe mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10ba2002 mov dword ptr [0x10ba67cc], edi */
  w32((uint32_t)(0x10ba67cc), (EDI));
  /* 10ba2008 mov byte ptr [0x10ba67c8], bl */
  w8((uint32_t)(0x10ba67c8), (BL));
  /* 10ba200e jne 0x10ba204c */
  if (!C.zf) goto L_10ba204c;
  /* 10ba2010 mov eax, dword ptr [0x10ba6cf0] */
  EAX = (r32((uint32_t)(0x10ba6cf0)));
  /* 10ba2015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2017 je 0x10ba203b */
  if (C.zf) goto L_10ba203b;
  /* 10ba2019 mov ecx, dword ptr [0x10ba6cec] */
  ECX = (r32((uint32_t)(0x10ba6cec)));
  /* 10ba201f push esi */
  push32((uint32_t)(ESI));
  /* 10ba2020 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10ba2023 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2025 jb 0x10ba203a */
  if (C.cf) goto L_10ba203a;
L_10ba2027:;
  /* 10ba2027 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ba2029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba202b je 0x10ba202f */
  if (C.zf) goto L_10ba202f;
  /* 10ba202d call eax */
  call_ind((uint32_t)(EAX), 0x10ba202fu);
L_10ba202f:;
  /* 10ba202f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2032 cmp esi, dword ptr [0x10ba6cf0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10ba6cf0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2038 jae 0x10ba2027 */
  if (!C.cf) goto L_10ba2027;
L_10ba203a:;
  /* 10ba203a pop esi */
  ESI = (pop32());
L_10ba203b:;
  /* 10ba203b push 0x10ba6018 */
  push32((uint32_t)(0x10ba6018u));
  /* 10ba2040 push 0x10ba6014 */
  push32((uint32_t)(0x10ba6014u));
  /* 10ba2045 call 0x10ba208d */
  push32(0x10ba204au); f_10ba208d();
  /* 10ba204a pop ecx */
  ECX = (pop32());
  /* 10ba204b pop ecx */
  ECX = (pop32());
L_10ba204c:;
  /* 10ba204c push 0x10ba6020 */
  push32((uint32_t)(0x10ba6020u));
  /* 10ba2051 push 0x10ba601c */
  push32((uint32_t)(0x10ba601cu));
  /* 10ba2056 call 0x10ba208d */
  push32(0x10ba205bu); f_10ba208d();
  /* 10ba205b pop ecx */
  ECX = (pop32());
  /* 10ba205c pop ecx */
  ECX = (pop32());
  /* 10ba205d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10ba205f pop ebx */
  EBX = (pop32());
  /* 10ba2060 je 0x10ba2069 */
  if (C.zf) goto L_10ba2069;
  /* 10ba2062 call 0x10ba2084 */
  push32(0x10ba2067u); f_10ba2084();
  /* 10ba2067 pop edi */
  EDI = (pop32());
  /* 10ba2068 ret  */
  ESPCHK(0x10ba1fd6u, _esp0);
  ESP += 4; return;
L_10ba2069:;
  /* 10ba2069 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10ba206d mov dword ptr [0x10ba67d0], edi */
  w32((uint32_t)(0x10ba67d0), (EDI));
  /* 10ba2073 call dword ptr [0x10ba5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5094))), 0x10ba2079u);
  /* 10ba2079 pop edi */
  EDI = (pop32());
  /* 10ba207a ret  */
  ESPCHK(0x10ba1fd6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000207b @ 0x10ba207b (9 bytes, 4 insns) */
void f_10ba207b(void) {
  FTRACE(0x10ba207bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba207b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ba207d call 0x10ba2ae6 */
  push32(0x10ba2082u); f_10ba2ae6();
  /* 10ba2082 pop ecx */
  ECX = (pop32());
  /* 10ba2083 ret  */
  ESPCHK(0x10ba207bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002084 @ 0x10ba2084 (9 bytes, 4 insns) */
void f_10ba2084(void) {
  FTRACE(0x10ba2084u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2084 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ba2086 call 0x10ba2b47 */
  push32(0x10ba208bu); f_10ba2b47();
  /* 10ba208b pop ecx */
  ECX = (pop32());
  /* 10ba208c ret  */
  ESPCHK(0x10ba2084u, _esp0);
  ESP += 4; return;
}

/* FUN_1000208d @ 0x10ba208d (26 bytes, 12 insns) */
void f_10ba208d(void) {
  FTRACE(0x10ba208du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba208d push esi */
  push32((uint32_t)(ESI));
  /* 10ba208e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10ba2092:;
  /* 10ba2092 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2096 jae 0x10ba20a5 */
  if (!C.cf) goto L_10ba20a5;
  /* 10ba2098 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ba209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba209c je 0x10ba20a0 */
  if (C.zf) goto L_10ba20a0;
  /* 10ba209e call eax */
  call_ind((uint32_t)(EAX), 0x10ba20a0u);
L_10ba20a0:;
  /* 10ba20a0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba20a3 jmp 0x10ba2092 */
  goto L_10ba2092;
L_10ba20a5:;
  /* 10ba20a5 pop esi */
  ESI = (pop32());
  /* 10ba20a6 ret  */
  ESPCHK(0x10ba208du, _esp0);
  ESP += 4; return;
}

/* FUN_100020a7 @ 0x10ba20a7 (84 bytes, 32 insns) */
void f_10ba20a7(void) {
  FTRACE(0x10ba20a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba20a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ba20a8 call 0x10ba2a51 */
  push32(0x10ba20adu); f_10ba2a51();
  /* 10ba20ad call dword ptr [0x10ba50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50a4))), 0x10ba20b3u);
  /* 10ba20b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba20b6 mov dword ptr [0x10ba6328], eax */
  w32((uint32_t)(0x10ba6328), (EAX));
  /* 10ba20bb je 0x10ba20f7 */
  if (C.zf) goto L_10ba20f7;
  /* 10ba20bd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10ba20bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba20c1 call 0x10ba2b5c */
  push32(0x10ba20c6u); f_10ba2b5c();
  /* 10ba20c6 mov esi, eax */
  ESI = (EAX);
  /* 10ba20c8 pop ecx */
  ECX = (pop32());
  /* 10ba20c9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba20cb pop ecx */
  ECX = (pop32());
  /* 10ba20cc je 0x10ba20f7 */
  if (C.zf) goto L_10ba20f7;
  /* 10ba20ce push esi */
  push32((uint32_t)(ESI));
  /* 10ba20cf push dword ptr [0x10ba6328] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6328))));
  /* 10ba20d5 call dword ptr [0x10ba50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50a0))), 0x10ba20dbu);
  /* 10ba20db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba20dd je 0x10ba20f7 */
  if (C.zf) goto L_10ba20f7;
  /* 10ba20df push esi */
  push32((uint32_t)(ESI));
  /* 10ba20e0 call 0x10ba2119 */
  push32(0x10ba20e5u); f_10ba2119();
  /* 10ba20e5 pop ecx */
  ECX = (pop32());
  /* 10ba20e6 call dword ptr [0x10ba5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5000))), 0x10ba20ecu);
  /* 10ba20ec or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10ba20f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba20f2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10ba20f4 pop eax */
  EAX = (pop32());
  /* 10ba20f5 pop esi */
  ESI = (pop32());
  /* 10ba20f6 ret  */
  ESPCHK(0x10ba20a7u, _esp0);
  ESP += 4; return;
L_10ba20f7:;
  /* 10ba20f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba20f9 pop esi */
  ESI = (pop32());
  /* 10ba20fa ret  */
  ESPCHK(0x10ba20a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100020fb @ 0x10ba20fb (30 bytes, 8 insns) */
void f_10ba20fb(void) {
  FTRACE(0x10ba20fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba20fb call 0x10ba2a7a */
  push32(0x10ba2100u); f_10ba2a7a();
  /* 10ba2100 mov eax, dword ptr [0x10ba6328] */
  EAX = (r32((uint32_t)(0x10ba6328)));
  /* 10ba2105 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2108 je 0x10ba2118 */
  if (C.zf) goto L_10ba2118;
  /* 10ba210a push eax */
  push32((uint32_t)(EAX));
  /* 10ba210b call dword ptr [0x10ba50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50a8))), 0x10ba2111u);
  /* 10ba2111 or dword ptr [0x10ba6328], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10ba6328)))|(0xffffffffu); w32((uint32_t)(0x10ba6328), (_r)); fl_logic(_r,32); }
L_10ba2118:;
  /* 10ba2118 ret  */
  ESPCHK(0x10ba20fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002119 @ 0x10ba2119 (19 bytes, 4 insns) */
void f_10ba2119(void) {
  FTRACE(0x10ba2119u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2119 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba211d mov dword ptr [eax + 0x50], 0x10ba64a8 */
  w32((uint32_t)(EAX + 0x50), (0x10ba64a8u));
  /* 10ba2124 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10ba212b ret  */
  ESPCHK(0x10ba2119u, _esp0);
  ESP += 4; return;
}

/* FUN_1000212c @ 0x10ba212c (160 bytes, 62 insns) */
void f_10ba212c(void) {
  FTRACE(0x10ba212cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba212c mov eax, dword ptr [0x10ba6328] */
  EAX = (r32((uint32_t)(0x10ba6328)));
  /* 10ba2131 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2134 je 0x10ba21cb */
  if (C.zf) goto L_10ba21cb;
  /* 10ba213a push esi */
  push32((uint32_t)(ESI));
  /* 10ba213b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba213f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2141 jne 0x10ba2150 */
  if (!C.zf) goto L_10ba2150;
  /* 10ba2143 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2144 call dword ptr [0x10ba509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba509c))), 0x10ba214au);
  /* 10ba214a mov esi, eax */
  ESI = (EAX);
  /* 10ba214c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba214e je 0x10ba21bc */
  if (C.zf) goto L_10ba21bc;
L_10ba2150:;
  /* 10ba2150 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10ba2153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2155 je 0x10ba215e */
  if (C.zf) goto L_10ba215e;
  /* 10ba2157 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2158 call 0x10ba2be9 */
  push32(0x10ba215du); f_10ba2be9();
  /* 10ba215d pop ecx */
  ECX = (pop32());
L_10ba215e:;
  /* 10ba215e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10ba2161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2163 je 0x10ba216c */
  if (C.zf) goto L_10ba216c;
  /* 10ba2165 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2166 call 0x10ba2be9 */
  push32(0x10ba216bu); f_10ba2be9();
  /* 10ba216b pop ecx */
  ECX = (pop32());
L_10ba216c:;
  /* 10ba216c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10ba216f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2171 je 0x10ba217a */
  if (C.zf) goto L_10ba217a;
  /* 10ba2173 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2174 call 0x10ba2be9 */
  push32(0x10ba2179u); f_10ba2be9();
  /* 10ba2179 pop ecx */
  ECX = (pop32());
L_10ba217a:;
  /* 10ba217a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10ba217d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba217f je 0x10ba2188 */
  if (C.zf) goto L_10ba2188;
  /* 10ba2181 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2182 call 0x10ba2be9 */
  push32(0x10ba2187u); f_10ba2be9();
  /* 10ba2187 pop ecx */
  ECX = (pop32());
L_10ba2188:;
  /* 10ba2188 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10ba218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba218d je 0x10ba2196 */
  if (C.zf) goto L_10ba2196;
  /* 10ba218f push eax */
  push32((uint32_t)(EAX));
  /* 10ba2190 call 0x10ba2be9 */
  push32(0x10ba2195u); f_10ba2be9();
  /* 10ba2195 pop ecx */
  ECX = (pop32());
L_10ba2196:;
  /* 10ba2196 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10ba2199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba219b je 0x10ba21a4 */
  if (C.zf) goto L_10ba21a4;
  /* 10ba219d push eax */
  push32((uint32_t)(EAX));
  /* 10ba219e call 0x10ba2be9 */
  push32(0x10ba21a3u); f_10ba2be9();
  /* 10ba21a3 pop ecx */
  ECX = (pop32());
L_10ba21a4:;
  /* 10ba21a4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10ba21a7 cmp eax, 0x10ba64a8 */
  { uint32_t _a=(EAX),_b=(0x10ba64a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba21ac je 0x10ba21b5 */
  if (C.zf) goto L_10ba21b5;
  /* 10ba21ae push eax */
  push32((uint32_t)(EAX));
  /* 10ba21af call 0x10ba2be9 */
  push32(0x10ba21b4u); f_10ba2be9();
  /* 10ba21b4 pop ecx */
  ECX = (pop32());
L_10ba21b5:;
  /* 10ba21b5 push esi */
  push32((uint32_t)(ESI));
  /* 10ba21b6 call 0x10ba2be9 */
  push32(0x10ba21bbu); f_10ba2be9();
  /* 10ba21bb pop ecx */
  ECX = (pop32());
L_10ba21bc:;
  /* 10ba21bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba21be push dword ptr [0x10ba6328] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6328))));
  /* 10ba21c4 call dword ptr [0x10ba50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba50a0))), 0x10ba21cau);
  /* 10ba21ca pop esi */
  ESI = (pop32());
L_10ba21cb:;
  /* 10ba21cb ret  */
  ESPCHK(0x10ba212cu, _esp0);
  ESP += 4; return;
}

/* FUN_100021cc @ 0x10ba21cc (444 bytes, 150 insns) */
void f_10ba21cc(void) {
  FTRACE(0x10ba21ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba21cc push ebp */
  push32((uint32_t)(EBP));
  /* 10ba21cd mov ebp, esp */
  EBP = (ESP);
  /* 10ba21cf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba21d2 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba21d3 push esi */
  push32((uint32_t)(ESI));
  /* 10ba21d4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba21d5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10ba21da call 0x10ba2c31 */
  push32(0x10ba21dfu); f_10ba2c31();
  /* 10ba21df mov esi, eax */
  ESI = (EAX);
  /* 10ba21e1 pop ecx */
  ECX = (pop32());
  /* 10ba21e2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba21e4 jne 0x10ba21ee */
  if (!C.zf) goto L_10ba21ee;
  /* 10ba21e6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10ba21e8 call 0x10ba1f56 */
  push32(0x10ba21edu); f_10ba1f56();
  /* 10ba21ed pop ecx */
  ECX = (pop32());
L_10ba21ee:;
  /* 10ba21ee mov dword ptr [0x10ba6be0], esi */
  w32((uint32_t)(0x10ba6be0), (ESI));
  /* 10ba21f4 mov dword ptr [0x10ba6ce0], 0x20 */
  w32((uint32_t)(0x10ba6ce0), (0x20u));
  /* 10ba21fe lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10ba2204:;
  /* 10ba2204 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2206 jae 0x10ba2226 */
  if (!C.cf) goto L_10ba2226;
  /* 10ba2208 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10ba220c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10ba220f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10ba2213 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10ba2217 mov eax, dword ptr [0x10ba6be0] */
  EAX = (r32((uint32_t)(0x10ba6be0)));
  /* 10ba221c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba221f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2224 jmp 0x10ba2204 */
  goto L_10ba2204;
L_10ba2226:;
  /* 10ba2226 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10ba2229 push eax */
  push32((uint32_t)(EAX));
  /* 10ba222a call dword ptr [0x10ba507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba507c))), 0x10ba2230u);
  /* 10ba2230 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ba2235 je 0x10ba230c */
  if (C.zf) goto L_10ba230c;
  /* 10ba223b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ba223e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2240 je 0x10ba230c */
  if (C.zf) goto L_10ba230c;
  /* 10ba2246 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10ba2248 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10ba224b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10ba224e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ba2251 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10ba2256 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2258 jl 0x10ba225c */
  if ((C.sf!=C.of)) goto L_10ba225c;
  /* 10ba225a mov edi, eax */
  EDI = (EAX);
L_10ba225c:;
  /* 10ba225c cmp dword ptr [0x10ba6ce0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10ba6ce0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2262 jge 0x10ba22ba */
  if ((C.sf==C.of)) goto L_10ba22ba;
  /* 10ba2264 mov esi, 0x10ba6be4 */
  ESI = (0x10ba6be4u);
L_10ba2269:;
  /* 10ba2269 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10ba226e call 0x10ba2c31 */
  push32(0x10ba2273u); f_10ba2c31();
  /* 10ba2273 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2275 pop ecx */
  ECX = (pop32());
  /* 10ba2276 je 0x10ba22b4 */
  if (C.zf) goto L_10ba22b4;
  /* 10ba2278 add dword ptr [0x10ba6ce0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10ba6ce0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10ba6ce0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10ba227f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10ba2281 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10ba2287:;
  /* 10ba2287 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2289 jae 0x10ba22a7 */
  if (!C.cf) goto L_10ba22a7;
  /* 10ba228b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10ba228f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10ba2292 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10ba2296 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10ba229a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10ba229c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba229f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba22a5 jmp 0x10ba2287 */
  goto L_10ba2287;
L_10ba22a7:;
  /* 10ba22a7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba22aa cmp dword ptr [0x10ba6ce0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10ba6ce0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba22b0 jl 0x10ba2269 */
  if ((C.sf!=C.of)) goto L_10ba2269;
  /* 10ba22b2 jmp 0x10ba22ba */
  goto L_10ba22ba;
L_10ba22b4:;
  /* 10ba22b4 mov edi, dword ptr [0x10ba6ce0] */
  EDI = (r32((uint32_t)(0x10ba6ce0)));
L_10ba22ba:;
  /* 10ba22ba xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10ba22bc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba22be jle 0x10ba230c */
  if ((C.zf||C.sf!=C.of)) goto L_10ba230c;
L_10ba22c0:;
  /* 10ba22c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba22c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ba22c5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba22c8 je 0x10ba2302 */
  if (C.zf) goto L_10ba2302;
  /* 10ba22ca mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10ba22cc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10ba22ce je 0x10ba2302 */
  if (C.zf) goto L_10ba2302;
  /* 10ba22d0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10ba22d2 jne 0x10ba22df */
  if (!C.zf) goto L_10ba22df;
  /* 10ba22d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba22d5 call dword ptr [0x10ba5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5080))), 0x10ba22dbu);
  /* 10ba22db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba22dd je 0x10ba2302 */
  if (C.zf) goto L_10ba2302;
L_10ba22df:;
  /* 10ba22df mov ecx, esi */
  ECX = (ESI);
  /* 10ba22e1 mov eax, esi */
  EAX = (ESI);
  /* 10ba22e3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ba22e6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba22e9 mov ecx, dword ptr [ecx*4 + 0x10ba6be0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10ba6be0)));
  /* 10ba22f0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10ba22f3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10ba22f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba22f9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10ba22fb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ba22fd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10ba22ff mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10ba2302:;
  /* 10ba2302 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10ba2306 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba2307 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10ba2308 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba230a jl 0x10ba22c0 */
  if ((C.sf!=C.of)) goto L_10ba22c0;
L_10ba230c:;
  /* 10ba230c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10ba230e:;
  /* 10ba230e mov ecx, dword ptr [0x10ba6be0] */
  ECX = (r32((uint32_t)(0x10ba6be0)));
  /* 10ba2314 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10ba2317 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba231b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10ba231e jne 0x10ba236d */
  if (!C.zf) goto L_10ba236d;
  /* 10ba2320 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10ba2322 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10ba2326 jne 0x10ba232d */
  if (!C.zf) goto L_10ba232d;
  /* 10ba2328 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10ba232a pop eax */
  EAX = (pop32());
  /* 10ba232b jmp 0x10ba2337 */
  goto L_10ba2337;
L_10ba232d:;
  /* 10ba232d mov eax, ebx */
  EAX = (EBX);
  /* 10ba232f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ba2330 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ba2332 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2334 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10ba2337:;
  /* 10ba2337 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2338 call dword ptr [0x10ba5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5084))), 0x10ba233eu);
  /* 10ba233e mov edi, eax */
  EDI = (EAX);
  /* 10ba2340 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2343 je 0x10ba235c */
  if (C.zf) goto L_10ba235c;
  /* 10ba2345 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2346 call dword ptr [0x10ba5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5080))), 0x10ba234cu);
  /* 10ba234c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba234e je 0x10ba235c */
  if (C.zf) goto L_10ba235c;
  /* 10ba2350 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2355 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10ba2357 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba235a jne 0x10ba2362 */
  if (!C.zf) goto L_10ba2362;
L_10ba235c:;
  /* 10ba235c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10ba2360 jmp 0x10ba2371 */
  goto L_10ba2371;
L_10ba2362:;
  /* 10ba2362 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2365 jne 0x10ba2371 */
  if (!C.zf) goto L_10ba2371;
  /* 10ba2367 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10ba236b jmp 0x10ba2371 */
  goto L_10ba2371;
L_10ba236d:;
  /* 10ba236d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10ba2371:;
  /* 10ba2371 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10ba2372 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2375 jl 0x10ba230e */
  if ((C.sf!=C.of)) goto L_10ba230e;
  /* 10ba2377 push dword ptr [0x10ba6ce0] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6ce0))));
  /* 10ba237d call dword ptr [0x10ba5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5088))), 0x10ba2383u);
  /* 10ba2383 pop edi */
  EDI = (pop32());
  /* 10ba2384 pop esi */
  ESI = (pop32());
  /* 10ba2385 pop ebx */
  EBX = (pop32());
  /* 10ba2386 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba2387 ret  */
  ESPCHK(0x10ba21ccu, _esp0);
  ESP += 4; return;
}

/* FUN_10002388 @ 0x10ba2388 (84 bytes, 33 insns) */
void f_10ba2388(void) {
  FTRACE(0x10ba2388u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2388 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2389 push esi */
  push32((uint32_t)(ESI));
  /* 10ba238a push edi */
  push32((uint32_t)(EDI));
  /* 10ba238b mov esi, 0x10ba6be0 */
  ESI = (0x10ba6be0u);
L_10ba2390:;
  /* 10ba2390 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ba2392 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2394 je 0x10ba23cd */
  if (C.zf) goto L_10ba23cd;
  /* 10ba2396 mov edi, eax */
  EDI = (EAX);
  /* 10ba2398 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba239d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba239f jae 0x10ba23c2 */
  if (!C.cf) goto L_10ba23c2;
  /* 10ba23a1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10ba23a4:;
  /* 10ba23a4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba23a8 je 0x10ba23b1 */
  if (C.zf) goto L_10ba23b1;
  /* 10ba23aa push ebx */
  push32((uint32_t)(EBX));
  /* 10ba23ab call dword ptr [0x10ba5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5078))), 0x10ba23b1u);
L_10ba23b1:;
  /* 10ba23b1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ba23b3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba23b6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba23bb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba23be cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba23c0 jb 0x10ba23a4 */
  if (C.cf) goto L_10ba23a4;
L_10ba23c2:;
  /* 10ba23c2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba23c4 call 0x10ba2be9 */
  push32(0x10ba23c9u); f_10ba2be9();
  /* 10ba23c9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10ba23cc pop ecx */
  ECX = (pop32());
L_10ba23cd:;
  /* 10ba23cd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba23d0 cmp esi, 0x10ba6ce0 */
  { uint32_t _a=(ESI),_b=(0x10ba6ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba23d6 jl 0x10ba2390 */
  if ((C.sf!=C.of)) goto L_10ba2390;
  /* 10ba23d8 pop edi */
  EDI = (pop32());
  /* 10ba23d9 pop esi */
  ESI = (pop32());
  /* 10ba23da pop ebx */
  EBX = (pop32());
  /* 10ba23db ret  */
  ESPCHK(0x10ba2388u, _esp0);
  ESP += 4; return;
}

/* FUN_100023dc @ 0x10ba23dc (185 bytes, 71 insns) */
void f_10ba23dc(void) {
  FTRACE(0x10ba23dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba23dc push ebx */
  push32((uint32_t)(EBX));
  /* 10ba23dd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba23df cmp dword ptr [0x10ba6ce8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10ba6ce8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba23e5 push esi */
  push32((uint32_t)(ESI));
  /* 10ba23e6 push edi */
  push32((uint32_t)(EDI));
  /* 10ba23e7 jne 0x10ba23ee */
  if (!C.zf) goto L_10ba23ee;
  /* 10ba23e9 call 0x10ba3203 */
  push32(0x10ba23eeu); f_10ba3203();
L_10ba23ee:;
  /* 10ba23ee mov esi, dword ptr [0x10ba6780] */
  ESI = (r32((uint32_t)(0x10ba6780)));
  /* 10ba23f4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10ba23f6:;
  /* 10ba23f6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba23f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba23fa je 0x10ba240e */
  if (C.zf) goto L_10ba240e;
  /* 10ba23fc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba23fe je 0x10ba2401 */
  if (C.zf) goto L_10ba2401;
  /* 10ba2400 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10ba2401:;
  /* 10ba2401 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2402 call 0x10ba2db0 */
  push32(0x10ba2407u); f_10ba2db0();
  /* 10ba2407 pop ecx */
  ECX = (pop32());
  /* 10ba2408 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10ba240c jmp 0x10ba23f6 */
  goto L_10ba23f6;
L_10ba240e:;
  /* 10ba240e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10ba2415 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2416 call 0x10ba2c31 */
  push32(0x10ba241bu); f_10ba2c31();
  /* 10ba241b mov esi, eax */
  ESI = (EAX);
  /* 10ba241d pop ecx */
  ECX = (pop32());
  /* 10ba241e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2420 mov dword ptr [0x10ba67b0], esi */
  w32((uint32_t)(0x10ba67b0), (ESI));
  /* 10ba2426 jne 0x10ba2430 */
  if (!C.zf) goto L_10ba2430;
  /* 10ba2428 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba242a call 0x10ba1f56 */
  push32(0x10ba242fu); f_10ba1f56();
  /* 10ba242f pop ecx */
  ECX = (pop32());
L_10ba2430:;
  /* 10ba2430 mov edi, dword ptr [0x10ba6780] */
  EDI = (r32((uint32_t)(0x10ba6780)));
  /* 10ba2436 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2438 je 0x10ba2473 */
  if (C.zf) goto L_10ba2473;
  /* 10ba243a push ebp */
  push32((uint32_t)(EBP));
L_10ba243b:;
  /* 10ba243b push edi */
  push32((uint32_t)(EDI));
  /* 10ba243c call 0x10ba2db0 */
  push32(0x10ba2441u); f_10ba2db0();
  /* 10ba2441 mov ebp, eax */
  EBP = (EAX);
  /* 10ba2443 pop ecx */
  ECX = (pop32());
  /* 10ba2444 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10ba2445 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2448 je 0x10ba246c */
  if (C.zf) goto L_10ba246c;
  /* 10ba244a push ebp */
  push32((uint32_t)(EBP));
  /* 10ba244b call 0x10ba2c31 */
  push32(0x10ba2450u); f_10ba2c31();
  /* 10ba2450 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2452 pop ecx */
  ECX = (pop32());
  /* 10ba2453 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10ba2455 jne 0x10ba245f */
  if (!C.zf) goto L_10ba245f;
  /* 10ba2457 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2459 call 0x10ba1f56 */
  push32(0x10ba245eu); f_10ba1f56();
  /* 10ba245e pop ecx */
  ECX = (pop32());
L_10ba245f:;
  /* 10ba245f push edi */
  push32((uint32_t)(EDI));
  /* 10ba2460 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba2462 call 0x10ba2cc0 */
  push32(0x10ba2467u); f_10ba2cc0();
  /* 10ba2467 pop ecx */
  ECX = (pop32());
  /* 10ba2468 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba246b pop ecx */
  ECX = (pop32());
L_10ba246c:;
  /* 10ba246c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba246e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2470 jne 0x10ba243b */
  if (!C.zf) goto L_10ba243b;
  /* 10ba2472 pop ebp */
  EBP = (pop32());
L_10ba2473:;
  /* 10ba2473 push dword ptr [0x10ba6780] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6780))));
  /* 10ba2479 call 0x10ba2be9 */
  push32(0x10ba247eu); f_10ba2be9();
  /* 10ba247e pop ecx */
  ECX = (pop32());
  /* 10ba247f mov dword ptr [0x10ba6780], ebx */
  w32((uint32_t)(0x10ba6780), (EBX));
  /* 10ba2485 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10ba2487 pop edi */
  EDI = (pop32());
  /* 10ba2488 pop esi */
  ESI = (pop32());
  /* 10ba2489 mov dword ptr [0x10ba6ce4], 1 */
  w32((uint32_t)(0x10ba6ce4), (0x1u));
  /* 10ba2493 pop ebx */
  EBX = (pop32());
  /* 10ba2494 ret  */
  ESPCHK(0x10ba23dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10002495 @ 0x10ba2495 (153 bytes, 62 insns) */
void f_10ba2495(void) {
  FTRACE(0x10ba2495u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2495 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba2496 mov ebp, esp */
  EBP = (ESP);
  /* 10ba2498 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba2499 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba249a push ebx */
  push32((uint32_t)(EBX));
  /* 10ba249b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba249d cmp dword ptr [0x10ba6ce8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10ba6ce8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba24a3 push esi */
  push32((uint32_t)(ESI));
  /* 10ba24a4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba24a5 jne 0x10ba24ac */
  if (!C.zf) goto L_10ba24ac;
  /* 10ba24a7 call 0x10ba3203 */
  push32(0x10ba24acu); f_10ba3203();
L_10ba24ac:;
  /* 10ba24ac mov esi, 0x10ba67d4 */
  ESI = (0x10ba67d4u);
  /* 10ba24b1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10ba24b6 push esi */
  push32((uint32_t)(ESI));
  /* 10ba24b7 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba24b8 call dword ptr [0x10ba5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5074))), 0x10ba24beu);
  /* 10ba24be mov eax, dword ptr [0x10ba6cf8] */
  EAX = (r32((uint32_t)(0x10ba6cf8)));
  /* 10ba24c3 mov dword ptr [0x10ba67c0], esi */
  w32((uint32_t)(0x10ba67c0), (ESI));
  /* 10ba24c9 mov edi, esi */
  EDI = (ESI);
  /* 10ba24cb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba24cd je 0x10ba24d1 */
  if (C.zf) goto L_10ba24d1;
  /* 10ba24cf mov edi, eax */
  EDI = (EAX);
L_10ba24d1:;
  /* 10ba24d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ba24d4 push eax */
  push32((uint32_t)(EAX));
  /* 10ba24d5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10ba24d8 push eax */
  push32((uint32_t)(EAX));
  /* 10ba24d9 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba24da push ebx */
  push32((uint32_t)(EBX));
  /* 10ba24db push edi */
  push32((uint32_t)(EDI));
  /* 10ba24dc call 0x10ba252e */
  push32(0x10ba24e1u); f_10ba252e();
  /* 10ba24e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ba24e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba24e7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10ba24ea push eax */
  push32((uint32_t)(EAX));
  /* 10ba24eb call 0x10ba2c31 */
  push32(0x10ba24f0u); f_10ba2c31();
  /* 10ba24f0 mov esi, eax */
  ESI = (EAX);
  /* 10ba24f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba24f5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba24f7 jne 0x10ba2501 */
  if (!C.zf) goto L_10ba2501;
  /* 10ba24f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba24fb call 0x10ba1f56 */
  push32(0x10ba2500u); f_10ba1f56();
  /* 10ba2500 pop ecx */
  ECX = (pop32());
L_10ba2501:;
  /* 10ba2501 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ba2504 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2505 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10ba2508 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba250c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10ba250f push eax */
  push32((uint32_t)(EAX));
  /* 10ba2510 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2511 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2512 call 0x10ba252e */
  push32(0x10ba2517u); f_10ba252e();
  /* 10ba2517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba251a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba251d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ba251e mov dword ptr [0x10ba67a8], esi */
  w32((uint32_t)(0x10ba67a8), (ESI));
  /* 10ba2524 pop edi */
  EDI = (pop32());
  /* 10ba2525 pop esi */
  ESI = (pop32());
  /* 10ba2526 mov dword ptr [0x10ba67a4], eax */
  w32((uint32_t)(0x10ba67a4), (EAX));
  /* 10ba252b pop ebx */
  EBX = (pop32());
  /* 10ba252c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba252d ret  */
  ESPCHK(0x10ba2495u, _esp0);
  ESP += 4; return;
}

/* FUN_1000252e @ 0x10ba252e (436 bytes, 187 insns) */
void f_10ba252e(void) {
  FTRACE(0x10ba252eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba252e push ebp */
  push32((uint32_t)(EBP));
  /* 10ba252f mov ebp, esp */
  EBP = (ESP);
  /* 10ba2531 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ba2534 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ba2537 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2538 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2539 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10ba253c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10ba253f push edi */
  push32((uint32_t)(EDI));
  /* 10ba2540 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba2543 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10ba2549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba254c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba254e je 0x10ba2558 */
  if (C.zf) goto L_10ba2558;
  /* 10ba2550 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10ba2552 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2555 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10ba2558:;
  /* 10ba2558 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba255b jne 0x10ba25a1 */
  if (!C.zf) goto L_10ba25a1;
L_10ba255d:;
  /* 10ba255d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ba2560 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2561 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2564 je 0x10ba258f */
  if (C.zf) goto L_10ba258f;
  /* 10ba2566 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba2568 je 0x10ba258f */
  if (C.zf) goto L_10ba258f;
  /* 10ba256a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10ba256d test byte ptr [edx + 0x10ba6ac1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10ba6ac1)))&(0x4u); fl_logic(_r,8); }
  /* 10ba2574 je 0x10ba2582 */
  if (C.zf) goto L_10ba2582;
  /* 10ba2576 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba2578 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba257a je 0x10ba2582 */
  if (C.zf) goto L_10ba2582;
  /* 10ba257c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba257e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10ba2580 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba2581 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ba2582:;
  /* 10ba2582 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba2584 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2586 je 0x10ba255d */
  if (C.zf) goto L_10ba255d;
  /* 10ba2588 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba258a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10ba258c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba258d jmp 0x10ba255d */
  goto L_10ba255d;
L_10ba258f:;
  /* 10ba258f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba2591 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2593 je 0x10ba2599 */
  if (C.zf) goto L_10ba2599;
  /* 10ba2595 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10ba2598 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10ba2599:;
  /* 10ba2599 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba259c jne 0x10ba25e4 */
  if (!C.zf) goto L_10ba25e4;
  /* 10ba259e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba259f jmp 0x10ba25e4 */
  goto L_10ba25e4;
L_10ba25a1:;
  /* 10ba25a1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba25a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba25a5 je 0x10ba25ac */
  if (C.zf) goto L_10ba25ac;
  /* 10ba25a7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba25a9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10ba25ab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10ba25ac:;
  /* 10ba25ac mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba25ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba25af movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10ba25b2 test byte ptr [ebx + 0x10ba6ac1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10ba6ac1)))&(0x4u); fl_logic(_r,8); }
  /* 10ba25b9 je 0x10ba25c7 */
  if (C.zf) goto L_10ba25c7;
  /* 10ba25bb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba25bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba25bf je 0x10ba25c6 */
  if (C.zf) goto L_10ba25c6;
  /* 10ba25c1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10ba25c3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10ba25c5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10ba25c6:;
  /* 10ba25c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ba25c7:;
  /* 10ba25c7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba25ca je 0x10ba25d5 */
  if (C.zf) goto L_10ba25d5;
  /* 10ba25cc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba25ce je 0x10ba25d9 */
  if (C.zf) goto L_10ba25d9;
  /* 10ba25d0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba25d3 jne 0x10ba25a1 */
  if (!C.zf) goto L_10ba25a1;
L_10ba25d5:;
  /* 10ba25d5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba25d7 jne 0x10ba25dc */
  if (!C.zf) goto L_10ba25dc;
L_10ba25d9:;
  /* 10ba25d9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ba25da jmp 0x10ba25e4 */
  goto L_10ba25e4;
L_10ba25dc:;
  /* 10ba25dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba25de je 0x10ba25e4 */
  if (C.zf) goto L_10ba25e4;
  /* 10ba25e0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10ba25e4:;
  /* 10ba25e4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10ba25e8:;
  /* 10ba25e8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba25eb je 0x10ba26d1 */
  if (C.zf) goto L_10ba26d1;
L_10ba25f1:;
  /* 10ba25f1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba25f3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba25f6 je 0x10ba25fd */
  if (C.zf) goto L_10ba25fd;
  /* 10ba25f8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba25fb jne 0x10ba2600 */
  if (!C.zf) goto L_10ba2600;
L_10ba25fd:;
  /* 10ba25fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba25fe jmp 0x10ba25f1 */
  goto L_10ba25f1;
L_10ba2600:;
  /* 10ba2600 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2603 je 0x10ba26d1 */
  if (C.zf) goto L_10ba26d1;
  /* 10ba2609 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba260b je 0x10ba2615 */
  if (C.zf) goto L_10ba2615;
  /* 10ba260d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10ba260f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2612 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10ba2615:;
  /* 10ba2615 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ba2618 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10ba261a:;
  /* 10ba261a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10ba2621 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10ba2623:;
  /* 10ba2623 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2626 jne 0x10ba262c */
  if (!C.zf) goto L_10ba262c;
  /* 10ba2628 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2629 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10ba262a jmp 0x10ba2623 */
  goto L_10ba2623;
L_10ba262c:;
  /* 10ba262c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba262f jne 0x10ba265d */
  if (!C.zf) goto L_10ba265d;
  /* 10ba2631 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10ba2634 jne 0x10ba265b */
  if (!C.zf) goto L_10ba265b;
  /* 10ba2636 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba2638 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba263b je 0x10ba264a */
  if (C.zf) goto L_10ba264a;
  /* 10ba263d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2641 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10ba2644 jne 0x10ba264a */
  if (!C.zf) goto L_10ba264a;
  /* 10ba2646 mov eax, edx */
  EAX = (EDX);
  /* 10ba2648 jmp 0x10ba264d */
  goto L_10ba264d;
L_10ba264a:;
  /* 10ba264a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10ba264d:;
  /* 10ba264d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba2650 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba2652 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2655 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10ba2658 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10ba265b:;
  /* 10ba265b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10ba265d:;
  /* 10ba265d mov edx, ebx */
  EDX = (EBX);
  /* 10ba265f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ba2660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ba2662 je 0x10ba2672 */
  if (C.zf) goto L_10ba2672;
  /* 10ba2664 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10ba2665:;
  /* 10ba2665 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2667 je 0x10ba266d */
  if (C.zf) goto L_10ba266d;
  /* 10ba2669 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10ba266c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10ba266d:;
  /* 10ba266d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba266f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ba2670 jne 0x10ba2665 */
  if (!C.zf) goto L_10ba2665;
L_10ba2672:;
  /* 10ba2672 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba2674 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba2676 je 0x10ba26c2 */
  if (C.zf) goto L_10ba26c2;
  /* 10ba2678 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba267c jne 0x10ba2688 */
  if (!C.zf) goto L_10ba2688;
  /* 10ba267e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2681 je 0x10ba26c2 */
  if (C.zf) goto L_10ba26c2;
  /* 10ba2683 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2686 je 0x10ba26c2 */
  if (C.zf) goto L_10ba26c2;
L_10ba2688:;
  /* 10ba2688 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba268c je 0x10ba26bc */
  if (C.zf) goto L_10ba26bc;
  /* 10ba268e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2690 je 0x10ba26ab */
  if (C.zf) goto L_10ba26ab;
  /* 10ba2692 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10ba2695 test byte ptr [ebx + 0x10ba6ac1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10ba6ac1)))&(0x4u); fl_logic(_r,8); }
  /* 10ba269c je 0x10ba26a4 */
  if (C.zf) goto L_10ba26a4;
  /* 10ba269e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10ba26a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba26a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba26a2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10ba26a4:;
  /* 10ba26a4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10ba26a6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10ba26a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba26a9 jmp 0x10ba26ba */
  goto L_10ba26ba;
L_10ba26ab:;
  /* 10ba26ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10ba26ae test byte ptr [edx + 0x10ba6ac1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10ba6ac1)))&(0x4u); fl_logic(_r,8); }
  /* 10ba26b5 je 0x10ba26ba */
  if (C.zf) goto L_10ba26ba;
  /* 10ba26b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba26b8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10ba26ba:;
  /* 10ba26ba inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10ba26bc:;
  /* 10ba26bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba26bd jmp 0x10ba261a */
  goto L_10ba261a;
L_10ba26c2:;
  /* 10ba26c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba26c4 je 0x10ba26ca */
  if (C.zf) goto L_10ba26ca;
  /* 10ba26c6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10ba26c9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10ba26ca:;
  /* 10ba26ca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10ba26cc jmp 0x10ba25e8 */
  goto L_10ba25e8;
L_10ba26d1:;
  /* 10ba26d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba26d3 je 0x10ba26d8 */
  if (C.zf) goto L_10ba26d8;
  /* 10ba26d5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10ba26d8:;
  /* 10ba26d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ba26db pop edi */
  EDI = (pop32());
  /* 10ba26dc pop esi */
  ESI = (pop32());
  /* 10ba26dd pop ebx */
  EBX = (pop32());
  /* 10ba26de inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10ba26e0 pop ebp */
  EBP = (pop32());
  /* 10ba26e1 ret  */
  ESPCHK(0x10ba252eu, _esp0);
  ESP += 4; return;
}

/* FUN_100026e2 @ 0x10ba26e2 (306 bytes, 132 insns) */
void f_10ba26e2(void) {
  FTRACE(0x10ba26e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba26e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba26e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba26e4 mov eax, dword ptr [0x10ba68d8] */
  EAX = (r32((uint32_t)(0x10ba68d8)));
  /* 10ba26e9 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba26ea push ebp */
  push32((uint32_t)(EBP));
  /* 10ba26eb mov ebp, dword ptr [0x10ba5060] */
  EBP = (r32((uint32_t)(0x10ba5060)));
  /* 10ba26f1 push esi */
  push32((uint32_t)(ESI));
  /* 10ba26f2 push edi */
  push32((uint32_t)(EDI));
  /* 10ba26f3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba26f5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10ba26f7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba26f9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba26fb jne 0x10ba2730 */
  if (!C.zf) goto L_10ba2730;
  /* 10ba26fd call ebp */
  call_ind((uint32_t)(EBP), 0x10ba26ffu);
  /* 10ba26ff mov esi, eax */
  ESI = (EAX);
  /* 10ba2701 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2703 je 0x10ba2711 */
  if (C.zf) goto L_10ba2711;
  /* 10ba2705 mov dword ptr [0x10ba68d8], 1 */
  w32((uint32_t)(0x10ba68d8), (0x1u));
  /* 10ba270f jmp 0x10ba2739 */
  goto L_10ba2739;
L_10ba2711:;
  /* 10ba2711 call dword ptr [0x10ba5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5064))), 0x10ba2717u);
  /* 10ba2717 mov edi, eax */
  EDI = (EAX);
  /* 10ba2719 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba271b je 0x10ba280b */
  if (C.zf) goto L_10ba280b;
  /* 10ba2721 mov dword ptr [0x10ba68d8], 2 */
  w32((uint32_t)(0x10ba68d8), (0x2u));
  /* 10ba272b jmp 0x10ba27bf */
  goto L_10ba27bf;
L_10ba2730:;
  /* 10ba2730 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2733 jne 0x10ba27ba */
  if (!C.zf) goto L_10ba27ba;
L_10ba2739:;
  /* 10ba2739 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba273b jne 0x10ba2749 */
  if (!C.zf) goto L_10ba2749;
  /* 10ba273d call ebp */
  call_ind((uint32_t)(EBP), 0x10ba273fu);
  /* 10ba273f mov esi, eax */
  ESI = (EAX);
  /* 10ba2741 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2743 je 0x10ba280b */
  if (C.zf) goto L_10ba280b;
L_10ba2749:;
  /* 10ba2749 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ba274c mov eax, esi */
  EAX = (ESI);
  /* 10ba274e je 0x10ba275e */
  if (C.zf) goto L_10ba275e;
L_10ba2750:;
  /* 10ba2750 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2751 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2752 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ba2755 jne 0x10ba2750 */
  if (!C.zf) goto L_10ba2750;
  /* 10ba2757 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2759 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ba275c jne 0x10ba2750 */
  if (!C.zf) goto L_10ba2750;
L_10ba275e:;
  /* 10ba275e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2760 mov edi, dword ptr [0x10ba5068] */
  EDI = (r32((uint32_t)(0x10ba5068)));
  /* 10ba2766 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ba2768 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2769 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba276a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba276b push ebx */
  push32((uint32_t)(EBX));
  /* 10ba276c push ebx */
  push32((uint32_t)(EBX));
  /* 10ba276d push eax */
  push32((uint32_t)(EAX));
  /* 10ba276e push esi */
  push32((uint32_t)(ESI));
  /* 10ba276f push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2770 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2771 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10ba2775 call edi */
  call_ind((uint32_t)(EDI), 0x10ba2777u);
  /* 10ba2777 mov ebp, eax */
  EBP = (EAX);
  /* 10ba2779 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba277b je 0x10ba27af */
  if (C.zf) goto L_10ba27af;
  /* 10ba277d push ebp */
  push32((uint32_t)(EBP));
  /* 10ba277e call 0x10ba2c31 */
  push32(0x10ba2783u); f_10ba2c31();
  /* 10ba2783 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2785 pop ecx */
  ECX = (pop32());
  /* 10ba2786 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10ba278a je 0x10ba27af */
  if (C.zf) goto L_10ba27af;
  /* 10ba278c push ebx */
  push32((uint32_t)(EBX));
  /* 10ba278d push ebx */
  push32((uint32_t)(EBX));
  /* 10ba278e push ebp */
  push32((uint32_t)(EBP));
  /* 10ba278f push eax */
  push32((uint32_t)(EAX));
  /* 10ba2790 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10ba2794 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2795 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2796 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2797 call edi */
  call_ind((uint32_t)(EDI), 0x10ba2799u);
  /* 10ba2799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba279b jne 0x10ba27ab */
  if (!C.zf) goto L_10ba27ab;
  /* 10ba279d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10ba27a1 call 0x10ba2be9 */
  push32(0x10ba27a6u); f_10ba2be9();
  /* 10ba27a6 pop ecx */
  ECX = (pop32());
  /* 10ba27a7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10ba27ab:;
  /* 10ba27ab mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10ba27af:;
  /* 10ba27af push esi */
  push32((uint32_t)(ESI));
  /* 10ba27b0 call dword ptr [0x10ba506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba506c))), 0x10ba27b6u);
  /* 10ba27b6 mov eax, ebx */
  EAX = (EBX);
  /* 10ba27b8 jmp 0x10ba280d */
  goto L_10ba280d;
L_10ba27ba:;
  /* 10ba27ba cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba27bd jne 0x10ba280b */
  if (!C.zf) goto L_10ba280b;
L_10ba27bf:;
  /* 10ba27bf cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba27c1 jne 0x10ba27cf */
  if (!C.zf) goto L_10ba27cf;
  /* 10ba27c3 call dword ptr [0x10ba5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5064))), 0x10ba27c9u);
  /* 10ba27c9 mov edi, eax */
  EDI = (EAX);
  /* 10ba27cb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba27cd je 0x10ba280b */
  if (C.zf) goto L_10ba280b;
L_10ba27cf:;
  /* 10ba27cf cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba27d1 mov eax, edi */
  EAX = (EDI);
  /* 10ba27d3 je 0x10ba27df */
  if (C.zf) goto L_10ba27df;
L_10ba27d5:;
  /* 10ba27d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba27d6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba27d8 jne 0x10ba27d5 */
  if (!C.zf) goto L_10ba27d5;
  /* 10ba27da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba27db cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba27dd jne 0x10ba27d5 */
  if (!C.zf) goto L_10ba27d5;
L_10ba27df:;
  /* 10ba27df sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba27e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba27e2 mov ebp, eax */
  EBP = (EAX);
  /* 10ba27e4 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba27e5 call 0x10ba2c31 */
  push32(0x10ba27eau); f_10ba2c31();
  /* 10ba27ea mov esi, eax */
  ESI = (EAX);
  /* 10ba27ec pop ecx */
  ECX = (pop32());
  /* 10ba27ed cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba27ef jne 0x10ba27f5 */
  if (!C.zf) goto L_10ba27f5;
  /* 10ba27f1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10ba27f3 jmp 0x10ba2800 */
  goto L_10ba2800;
L_10ba27f5:;
  /* 10ba27f5 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba27f6 push edi */
  push32((uint32_t)(EDI));
  /* 10ba27f7 push esi */
  push32((uint32_t)(ESI));
  /* 10ba27f8 call 0x10ba3220 */
  push32(0x10ba27fdu); f_10ba3220();
  /* 10ba27fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba2800:;
  /* 10ba2800 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2801 call dword ptr [0x10ba5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5070))), 0x10ba2807u);
  /* 10ba2807 mov eax, esi */
  EAX = (ESI);
  /* 10ba2809 jmp 0x10ba280d */
  goto L_10ba280d;
L_10ba280b:;
  /* 10ba280b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ba280d:;
  /* 10ba280d pop edi */
  EDI = (pop32());
  /* 10ba280e pop esi */
  ESI = (pop32());
  /* 10ba280f pop ebp */
  EBP = (pop32());
  /* 10ba2810 pop ebx */
  EBX = (pop32());
  /* 10ba2811 pop ecx */
  ECX = (pop32());
  /* 10ba2812 pop ecx */
  ECX = (pop32());
  /* 10ba2813 ret  */
  ESPCHK(0x10ba26e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002814 @ 0x10ba2814 (60 bytes, 20 insns) */
void f_10ba2814(void) {
  FTRACE(0x10ba2814u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2816 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2818 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba281c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ba2821 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10ba2824 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2825 call dword ptr [0x10ba5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5058))), 0x10ba282bu);
  /* 10ba282b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba282d mov dword ptr [0x10ba6bc8], eax */
  w32((uint32_t)(0x10ba6bc8), (EAX));
  /* 10ba2832 je 0x10ba2849 */
  if (C.zf) goto L_10ba2849;
  /* 10ba2834 call 0x10ba3555 */
  push32(0x10ba2839u); f_10ba3555();
  /* 10ba2839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba283b jne 0x10ba284c */
  if (!C.zf) goto L_10ba284c;
  /* 10ba283d push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba2843 call dword ptr [0x10ba505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba505c))), 0x10ba2849u);
L_10ba2849:;
  /* 10ba2849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba284b ret  */
  ESPCHK(0x10ba2814u, _esp0);
  ESP += 4; return;
L_10ba284c:;
  /* 10ba284c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba284e pop eax */
  EAX = (pop32());
  /* 10ba284f ret  */
  ESPCHK(0x10ba2814u, _esp0);
  ESP += 4; return;
}

/* FUN_10002850 @ 0x10ba2850 (117 bytes, 38 insns) */
void f_10ba2850(void) {
  FTRACE(0x10ba2850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2850 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2851 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba2853 cmp dword ptr [0x10ba6990], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10ba6990))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2859 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba285a mov ebp, dword ptr [0x10ba5050] */
  EBP = (r32((uint32_t)(0x10ba5050)));
  /* 10ba2860 jle 0x10ba28a6 */
  if ((C.zf||C.sf!=C.of)) goto L_10ba28a6;
  /* 10ba2862 mov eax, dword ptr [0x10ba6994] */
  EAX = (r32((uint32_t)(0x10ba6994)));
  /* 10ba2867 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2868 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2869 mov edi, dword ptr [0x10ba5054] */
  EDI = (r32((uint32_t)(0x10ba5054)));
  /* 10ba286f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10ba2872:;
  /* 10ba2872 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ba2877 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10ba287c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba287e call edi */
  call_ind((uint32_t)(EDI), 0x10ba2880u);
  /* 10ba2880 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ba2885 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2887 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba2889 call edi */
  call_ind((uint32_t)(EDI), 0x10ba288bu);
  /* 10ba288b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10ba288e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2890 push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba2896 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba2898u);
  /* 10ba2898 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba289b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10ba289c cmp ebx, dword ptr [0x10ba6990] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10ba6990))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba28a2 jl 0x10ba2872 */
  if ((C.sf!=C.of)) goto L_10ba2872;
  /* 10ba28a4 pop edi */
  EDI = (pop32());
  /* 10ba28a5 pop esi */
  ESI = (pop32());
L_10ba28a6:;
  /* 10ba28a6 push dword ptr [0x10ba6994] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6994))));
  /* 10ba28ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba28ae push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba28b4 call ebp */
  call_ind((uint32_t)(EBP), 0x10ba28b6u);
  /* 10ba28b6 push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba28bc call dword ptr [0x10ba505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba505c))), 0x10ba28c2u);
  /* 10ba28c2 pop ebp */
  EBP = (pop32());
  /* 10ba28c3 pop ebx */
  EBX = (pop32());
  /* 10ba28c4 ret  */
  ESPCHK(0x10ba2850u, _esp0);
  ESP += 4; return;
}

/* FUN_100028c5 @ 0x10ba28c5 (57 bytes, 18 insns) */
void f_10ba28c5(void) {
  FTRACE(0x10ba28c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba28c5 mov eax, dword ptr [0x10ba6788] */
  EAX = (r32((uint32_t)(0x10ba6788)));
  /* 10ba28ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba28cd je 0x10ba28dc */
  if (C.zf) goto L_10ba28dc;
  /* 10ba28cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba28d1 jne 0x10ba28fd */
  if (!C.zf) goto L_10ba28fd;
  /* 10ba28d3 cmp dword ptr [0x10ba678c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ba678c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba28da jne 0x10ba28fd */
  if (!C.zf) goto L_10ba28fd;
L_10ba28dc:;
  /* 10ba28dc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10ba28e1 call 0x10ba28fe */
  push32(0x10ba28e6u); f_10ba28fe();
  /* 10ba28e6 mov eax, dword ptr [0x10ba68dc] */
  EAX = (r32((uint32_t)(0x10ba68dc)));
  /* 10ba28eb pop ecx */
  ECX = (pop32());
  /* 10ba28ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba28ee je 0x10ba28f2 */
  if (C.zf) goto L_10ba28f2;
  /* 10ba28f0 call eax */
  call_ind((uint32_t)(EAX), 0x10ba28f2u);
L_10ba28f2:;
  /* 10ba28f2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10ba28f7 call 0x10ba28fe */
  push32(0x10ba28fcu); f_10ba28fe();
  /* 10ba28fc pop ecx */
  ECX = (pop32());
L_10ba28fd:;
  /* 10ba28fd ret  */
  ESPCHK(0x10ba28c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100028fe @ 0x10ba28fe (339 bytes, 100 insns) */
void f_10ba28fe(void) {
  FTRACE(0x10ba28feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba28fe push ebp */
  push32((uint32_t)(EBP));
  /* 10ba28ff mov ebp, esp */
  EBP = (ESP);
  /* 10ba2901 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba290a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ba290c mov eax, 0x10ba6358 */
  EAX = (0x10ba6358u);
L_10ba2911:;
  /* 10ba2911 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2913 je 0x10ba2920 */
  if (C.zf) goto L_10ba2920;
  /* 10ba2915 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2918 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2919 cmp eax, 0x10ba63e8 */
  { uint32_t _a=(EAX),_b=(0x10ba63e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba291e jl 0x10ba2911 */
  if ((C.sf!=C.of)) goto L_10ba2911;
L_10ba2920:;
  /* 10ba2920 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2921 mov esi, ecx */
  ESI = (ECX);
  /* 10ba2923 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10ba2926 cmp edx, dword ptr [esi + 0x10ba6358] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10ba6358))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba292c jne 0x10ba2a4e */
  if (!C.zf) goto L_10ba2a4e;
  /* 10ba2932 mov eax, dword ptr [0x10ba6788] */
  EAX = (r32((uint32_t)(0x10ba6788)));
  /* 10ba2937 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba293a je 0x10ba2a28 */
  if (C.zf) goto L_10ba2a28;
  /* 10ba2940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2942 jne 0x10ba2951 */
  if (!C.zf) goto L_10ba2951;
  /* 10ba2944 cmp dword ptr [0x10ba678c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ba678c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba294b je 0x10ba2a28 */
  if (C.zf) goto L_10ba2a28;
L_10ba2951:;
  /* 10ba2951 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2957 je 0x10ba2a4e */
  if (C.zf) goto L_10ba2a4e;
  /* 10ba295d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10ba2963 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10ba2968 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2969 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba296b call dword ptr [0x10ba5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5074))), 0x10ba2971u);
  /* 10ba2971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2973 jne 0x10ba2988 */
  if (!C.zf) goto L_10ba2988;
  /* 10ba2975 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10ba297b push 0x10ba5428 */
  push32((uint32_t)(0x10ba5428u));
  /* 10ba2980 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2981 call 0x10ba2cc0 */
  push32(0x10ba2986u); f_10ba2cc0();
  /* 10ba2986 pop ecx */
  ECX = (pop32());
  /* 10ba2987 pop ecx */
  ECX = (pop32());
L_10ba2988:;
  /* 10ba2988 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10ba298e push edi */
  push32((uint32_t)(EDI));
  /* 10ba298f push eax */
  push32((uint32_t)(EAX));
  /* 10ba2990 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10ba2996 call 0x10ba2db0 */
  push32(0x10ba299bu); f_10ba2db0();
  /* 10ba299b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba299c pop ecx */
  ECX = (pop32());
  /* 10ba299d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba29a0 jbe 0x10ba29cb */
  if ((C.cf||C.zf)) goto L_10ba29cb;
  /* 10ba29a2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10ba29a8 push eax */
  push32((uint32_t)(EAX));
  /* 10ba29a9 call 0x10ba2db0 */
  push32(0x10ba29aeu); f_10ba2db0();
  /* 10ba29ae mov edi, eax */
  EDI = (EAX);
  /* 10ba29b0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10ba29b6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba29b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ba29bb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba29bd push 0x10ba5424 */
  push32((uint32_t)(0x10ba5424u));
  /* 10ba29c2 push edi */
  push32((uint32_t)(EDI));
  /* 10ba29c3 call 0x10ba3e30 */
  push32(0x10ba29c8u); f_10ba3e30();
  /* 10ba29c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba29cb:;
  /* 10ba29cb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10ba29d1 push 0x10ba5408 */
  push32((uint32_t)(0x10ba5408u));
  /* 10ba29d6 push eax */
  push32((uint32_t)(EAX));
  /* 10ba29d7 call 0x10ba2cc0 */
  push32(0x10ba29dcu); f_10ba2cc0();
  /* 10ba29dc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10ba29e2 push edi */
  push32((uint32_t)(EDI));
  /* 10ba29e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ba29e4 call 0x10ba2cd0 */
  push32(0x10ba29e9u); f_10ba2cd0();
  /* 10ba29e9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10ba29ef push 0x10ba5404 */
  push32((uint32_t)(0x10ba5404u));
  /* 10ba29f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ba29f5 call 0x10ba2cd0 */
  push32(0x10ba29fau); f_10ba2cd0();
  /* 10ba29fa push dword ptr [esi + 0x10ba635c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10ba635c))));
  /* 10ba2a00 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10ba2a06 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2a07 call 0x10ba2cd0 */
  push32(0x10ba2a0cu); f_10ba2cd0();
  /* 10ba2a0c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10ba2a11 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10ba2a17 push 0x10ba53dc */
  push32((uint32_t)(0x10ba53dcu));
  /* 10ba2a1c push eax */
  push32((uint32_t)(EAX));
  /* 10ba2a1d call 0x10ba3d9e */
  push32(0x10ba2a22u); f_10ba3d9e();
  /* 10ba2a22 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2a25 pop edi */
  EDI = (pop32());
  /* 10ba2a26 jmp 0x10ba2a4e */
  goto L_10ba2a4e;
L_10ba2a28:;
  /* 10ba2a28 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10ba2a2b lea esi, [esi + 0x10ba635c] */
  ESI = ((uint32_t)(ESI + 0x10ba635c));
  /* 10ba2a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2a33 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2a34 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba2a36 call 0x10ba2db0 */
  push32(0x10ba2a3bu); f_10ba2db0();
  /* 10ba2a3b pop ecx */
  ECX = (pop32());
  /* 10ba2a3c push eax */
  push32((uint32_t)(EAX));
  /* 10ba2a3d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba2a3f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10ba2a41 call dword ptr [0x10ba5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5084))), 0x10ba2a47u);
  /* 10ba2a47 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2a48 call dword ptr [0x10ba504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba504c))), 0x10ba2a4eu);
L_10ba2a4e:;
  /* 10ba2a4e pop esi */
  ESI = (pop32());
  /* 10ba2a4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba2a50 ret  */
  ESPCHK(0x10ba28feu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a51 @ 0x10ba2a51 (41 bytes, 12 insns) */
void f_10ba2a51(void) {
  FTRACE(0x10ba2a51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2a51 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2a52 mov esi, dword ptr [0x10ba5048] */
  ESI = (r32((uint32_t)(0x10ba5048)));
  /* 10ba2a58 push dword ptr [0x10ba642c] */
  push32((uint32_t)(r32((uint32_t)(0x10ba642c))));
  /* 10ba2a5e call esi */
  call_ind((uint32_t)(ESI), 0x10ba2a60u);
  /* 10ba2a60 push dword ptr [0x10ba641c] */
  push32((uint32_t)(r32((uint32_t)(0x10ba641c))));
  /* 10ba2a66 call esi */
  call_ind((uint32_t)(ESI), 0x10ba2a68u);
  /* 10ba2a68 push dword ptr [0x10ba640c] */
  push32((uint32_t)(r32((uint32_t)(0x10ba640c))));
  /* 10ba2a6e call esi */
  call_ind((uint32_t)(ESI), 0x10ba2a70u);
  /* 10ba2a70 push dword ptr [0x10ba63ec] */
  push32((uint32_t)(r32((uint32_t)(0x10ba63ec))));
  /* 10ba2a76 call esi */
  call_ind((uint32_t)(ESI), 0x10ba2a78u);
  /* 10ba2a78 pop esi */
  ESI = (pop32());
  /* 10ba2a79 ret  */
  ESPCHK(0x10ba2a51u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a7a @ 0x10ba2a7a (108 bytes, 34 insns) */
void f_10ba2a7a(void) {
  FTRACE(0x10ba2a7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2a7a push esi */
  push32((uint32_t)(ESI));
  /* 10ba2a7b push edi */
  push32((uint32_t)(EDI));
  /* 10ba2a7c mov edi, dword ptr [0x10ba5078] */
  EDI = (r32((uint32_t)(0x10ba5078)));
  /* 10ba2a82 mov esi, 0x10ba63e8 */
  ESI = (0x10ba63e8u);
L_10ba2a87:;
  /* 10ba2a87 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ba2a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2a8b je 0x10ba2ab8 */
  if (C.zf) goto L_10ba2ab8;
  /* 10ba2a8d cmp esi, 0x10ba642c */
  { uint32_t _a=(ESI),_b=(0x10ba642cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2a93 je 0x10ba2ab8 */
  if (C.zf) goto L_10ba2ab8;
  /* 10ba2a95 cmp esi, 0x10ba641c */
  { uint32_t _a=(ESI),_b=(0x10ba641cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2a9b je 0x10ba2ab8 */
  if (C.zf) goto L_10ba2ab8;
  /* 10ba2a9d cmp esi, 0x10ba640c */
  { uint32_t _a=(ESI),_b=(0x10ba640cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2aa3 je 0x10ba2ab8 */
  if (C.zf) goto L_10ba2ab8;
  /* 10ba2aa5 cmp esi, 0x10ba63ec */
  { uint32_t _a=(ESI),_b=(0x10ba63ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2aab je 0x10ba2ab8 */
  if (C.zf) goto L_10ba2ab8;
  /* 10ba2aad push eax */
  push32((uint32_t)(EAX));
  /* 10ba2aae call edi */
  call_ind((uint32_t)(EDI), 0x10ba2ab0u);
  /* 10ba2ab0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba2ab2 call 0x10ba2be9 */
  push32(0x10ba2ab7u); f_10ba2be9();
  /* 10ba2ab7 pop ecx */
  ECX = (pop32());
L_10ba2ab8:;
  /* 10ba2ab8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2abb cmp esi, 0x10ba64a8 */
  { uint32_t _a=(ESI),_b=(0x10ba64a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2ac1 jl 0x10ba2a87 */
  if ((C.sf!=C.of)) goto L_10ba2a87;
  /* 10ba2ac3 push dword ptr [0x10ba640c] */
  push32((uint32_t)(r32((uint32_t)(0x10ba640c))));
  /* 10ba2ac9 call edi */
  call_ind((uint32_t)(EDI), 0x10ba2acbu);
  /* 10ba2acb push dword ptr [0x10ba641c] */
  push32((uint32_t)(r32((uint32_t)(0x10ba641c))));
  /* 10ba2ad1 call edi */
  call_ind((uint32_t)(EDI), 0x10ba2ad3u);
  /* 10ba2ad3 push dword ptr [0x10ba642c] */
  push32((uint32_t)(r32((uint32_t)(0x10ba642c))));
  /* 10ba2ad9 call edi */
  call_ind((uint32_t)(EDI), 0x10ba2adbu);
  /* 10ba2adb push dword ptr [0x10ba63ec] */
  push32((uint32_t)(r32((uint32_t)(0x10ba63ec))));
  /* 10ba2ae1 call edi */
  call_ind((uint32_t)(EDI), 0x10ba2ae3u);
  /* 10ba2ae3 pop edi */
  EDI = (pop32());
  /* 10ba2ae4 pop esi */
  ESI = (pop32());
  /* 10ba2ae5 ret  */
  ESPCHK(0x10ba2a7au, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae6 @ 0x10ba2ae6 (97 bytes, 37 insns) */
void f_10ba2ae6(void) {
  FTRACE(0x10ba2ae6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2ae6 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba2ae7 mov ebp, esp */
  EBP = (ESP);
  /* 10ba2ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba2aec push esi */
  push32((uint32_t)(ESI));
  /* 10ba2aed cmp dword ptr [eax*4 + 0x10ba63e8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10ba63e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2af5 lea esi, [eax*4 + 0x10ba63e8] */
  ESI = ((uint32_t)(EAX*4 + 0x10ba63e8));
  /* 10ba2afc jne 0x10ba2b3c */
  if (!C.zf) goto L_10ba2b3c;
  /* 10ba2afe push edi */
  push32((uint32_t)(EDI));
  /* 10ba2aff push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10ba2b01 call 0x10ba2c31 */
  push32(0x10ba2b06u); f_10ba2c31();
  /* 10ba2b06 mov edi, eax */
  EDI = (EAX);
  /* 10ba2b08 pop ecx */
  ECX = (pop32());
  /* 10ba2b09 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba2b0b jne 0x10ba2b15 */
  if (!C.zf) goto L_10ba2b15;
  /* 10ba2b0d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ba2b0f call 0x10ba1f56 */
  push32(0x10ba2b14u); f_10ba1f56();
  /* 10ba2b14 pop ecx */
  ECX = (pop32());
L_10ba2b15:;
  /* 10ba2b15 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ba2b17 call 0x10ba2ae6 */
  push32(0x10ba2b1cu); f_10ba2ae6();
  /* 10ba2b1c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2b1f pop ecx */
  ECX = (pop32());
  /* 10ba2b20 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2b21 jne 0x10ba2b2d */
  if (!C.zf) goto L_10ba2b2d;
  /* 10ba2b23 call dword ptr [0x10ba5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5048))), 0x10ba2b29u);
  /* 10ba2b29 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10ba2b2b jmp 0x10ba2b33 */
  goto L_10ba2b33;
L_10ba2b2d:;
  /* 10ba2b2d call 0x10ba2be9 */
  push32(0x10ba2b32u); f_10ba2be9();
  /* 10ba2b32 pop ecx */
  ECX = (pop32());
L_10ba2b33:;
  /* 10ba2b33 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ba2b35 call 0x10ba2b47 */
  push32(0x10ba2b3au); f_10ba2b47();
  /* 10ba2b3a pop ecx */
  ECX = (pop32());
  /* 10ba2b3b pop edi */
  EDI = (pop32());
L_10ba2b3c:;
  /* 10ba2b3c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10ba2b3e call dword ptr [0x10ba5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5044))), 0x10ba2b44u);
  /* 10ba2b44 pop esi */
  ESI = (pop32());
  /* 10ba2b45 pop ebp */
  EBP = (pop32());
  /* 10ba2b46 ret  */
  ESPCHK(0x10ba2ae6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b47 @ 0x10ba2b47 (21 bytes, 7 insns) */
void f_10ba2b47(void) {
  FTRACE(0x10ba2b47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2b47 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba2b48 mov ebp, esp */
  EBP = (ESP);
  /* 10ba2b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba2b4d push dword ptr [eax*4 + 0x10ba63e8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10ba63e8))));
  /* 10ba2b54 call dword ptr [0x10ba5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5040))), 0x10ba2b5au);
  /* 10ba2b5a pop ebp */
  EBP = (pop32());
  /* 10ba2b5b ret  */
  ESPCHK(0x10ba2b47u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b5c @ 0x10ba2b5c (141 bytes, 56 insns) */
void f_10ba2b5c(void) {
  FTRACE(0x10ba2b5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2b5c push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2b5d push esi */
  push32((uint32_t)(ESI));
  /* 10ba2b5e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10ba2b62 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2b63 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ba2b68 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2b6b mov ebx, esi */
  EBX = (ESI);
  /* 10ba2b6d ja 0x10ba2b7c */
  if ((!C.cf&&!C.zf)) goto L_10ba2b7c;
  /* 10ba2b6f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2b71 jne 0x10ba2b76 */
  if (!C.zf) goto L_10ba2b76;
  /* 10ba2b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba2b75 pop esi */
  ESI = (pop32());
L_10ba2b76:;
  /* 10ba2b76 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2b79 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10ba2b7c:;
  /* 10ba2b7c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba2b7e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2b81 ja 0x10ba2bbd */
  if ((!C.cf&&!C.zf)) goto L_10ba2bbd;
  /* 10ba2b83 cmp ebx, dword ptr [0x10ba6630] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10ba6630))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2b89 ja 0x10ba2ba8 */
  if ((!C.cf&&!C.zf)) goto L_10ba2ba8;
  /* 10ba2b8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2b8d call 0x10ba2ae6 */
  push32(0x10ba2b92u); f_10ba2ae6();
  /* 10ba2b92 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2b93 call 0x10ba38e9 */
  push32(0x10ba2b98u); f_10ba38e9();
  /* 10ba2b98 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2b9a mov edi, eax */
  EDI = (EAX);
  /* 10ba2b9c call 0x10ba2b47 */
  push32(0x10ba2ba1u); f_10ba2b47();
  /* 10ba2ba1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2ba4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba2ba6 jne 0x10ba2bd3 */
  if (!C.zf) goto L_10ba2bd3;
L_10ba2ba8:;
  /* 10ba2ba8 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2ba9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba2bab push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba2bb1 call dword ptr [0x10ba503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba503c))), 0x10ba2bb7u);
  /* 10ba2bb7 mov edi, eax */
  EDI = (EAX);
  /* 10ba2bb9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba2bbb jne 0x10ba2bdf */
  if (!C.zf) goto L_10ba2bdf;
L_10ba2bbd:;
  /* 10ba2bbd cmp dword ptr [0x10ba6954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ba6954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2bc4 je 0x10ba2bdf */
  if (C.zf) goto L_10ba2bdf;
  /* 10ba2bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2bc7 call 0x10ba3f88 */
  push32(0x10ba2bccu); f_10ba3f88();
  /* 10ba2bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2bce pop ecx */
  ECX = (pop32());
  /* 10ba2bcf je 0x10ba2be5 */
  if (C.zf) goto L_10ba2be5;
  /* 10ba2bd1 jmp 0x10ba2b7c */
  goto L_10ba2b7c;
L_10ba2bd3:;
  /* 10ba2bd3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2bd6 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2bd7 call 0x10ba3f30 */
  push32(0x10ba2bdcu); f_10ba3f30();
  /* 10ba2bdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ba2bdf:;
  /* 10ba2bdf mov eax, edi */
  EAX = (EDI);
L_10ba2be1:;
  /* 10ba2be1 pop edi */
  EDI = (pop32());
  /* 10ba2be2 pop esi */
  ESI = (pop32());
  /* 10ba2be3 pop ebx */
  EBX = (pop32());
  /* 10ba2be4 ret  */
  ESPCHK(0x10ba2b5cu, _esp0);
  ESP += 4; return;
L_10ba2be5:;
  /* 10ba2be5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2be7 jmp 0x10ba2be1 */
  goto L_10ba2be1;
}

/* FUN_10002be9 @ 0x10ba2be9 (72 bytes, 29 insns) */
void f_10ba2be9(void) {
  FTRACE(0x10ba2be9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2be9 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2bea mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2bee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2bf0 je 0x10ba2c2f */
  if (C.zf) goto L_10ba2c2f;
  /* 10ba2bf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2bf4 call 0x10ba2ae6 */
  push32(0x10ba2bf9u); f_10ba2ae6();
  /* 10ba2bf9 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2bfa call 0x10ba3593 */
  push32(0x10ba2bffu); f_10ba3593();
  /* 10ba2bff pop ecx */
  ECX = (pop32());
  /* 10ba2c00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2c02 pop ecx */
  ECX = (pop32());
  /* 10ba2c03 je 0x10ba2c18 */
  if (C.zf) goto L_10ba2c18;
  /* 10ba2c05 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2c06 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2c07 call 0x10ba35be */
  push32(0x10ba2c0cu); f_10ba35be();
  /* 10ba2c0c push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2c0e call 0x10ba2b47 */
  push32(0x10ba2c13u); f_10ba2b47();
  /* 10ba2c13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2c16 pop esi */
  ESI = (pop32());
  /* 10ba2c17 ret  */
  ESPCHK(0x10ba2be9u, _esp0);
  ESP += 4; return;
L_10ba2c18:;
  /* 10ba2c18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2c1a call 0x10ba2b47 */
  push32(0x10ba2c1fu); f_10ba2b47();
  /* 10ba2c1f pop ecx */
  ECX = (pop32());
  /* 10ba2c20 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2c23 push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba2c29 call dword ptr [0x10ba5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5050))), 0x10ba2c2fu);
L_10ba2c2f:;
  /* 10ba2c2f pop esi */
  ESI = (pop32());
  /* 10ba2c30 ret  */
  ESPCHK(0x10ba2be9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10ba2c31 (18 bytes, 6 insns) */
void f_10ba2c31(void) {
  FTRACE(0x10ba2c31u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2c31 push dword ptr [0x10ba6954] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6954))));
  /* 10ba2c37 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10ba2c3b call 0x10ba2c43 */
  push32(0x10ba2c40u); f_10ba2c43();
  /* 10ba2c40 pop ecx */
  ECX = (pop32());
  /* 10ba2c41 pop ecx */
  ECX = (pop32());
  /* 10ba2c42 ret  */
  ESPCHK(0x10ba2c31u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10ba2c43 (44 bytes, 16 insns) */
void f_10ba2c43(void) {
  FTRACE(0x10ba2c43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2c43 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2c48 ja 0x10ba2c6c */
  if ((!C.cf&&!C.zf)) goto L_10ba2c6c;
L_10ba2c4a:;
  /* 10ba2c4a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10ba2c4e call 0x10ba2c6f */
  push32(0x10ba2c53u); f_10ba2c6f();
  /* 10ba2c53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2c55 pop ecx */
  ECX = (pop32());
  /* 10ba2c56 jne 0x10ba2c6e */
  if (!C.zf) goto L_10ba2c6e;
  /* 10ba2c58 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2c5c je 0x10ba2c6e */
  if (C.zf) goto L_10ba2c6e;
  /* 10ba2c5e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10ba2c62 call 0x10ba3f88 */
  push32(0x10ba2c67u); f_10ba3f88();
  /* 10ba2c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba2c69 pop ecx */
  ECX = (pop32());
  /* 10ba2c6a jne 0x10ba2c4a */
  if (!C.zf) goto L_10ba2c4a;
L_10ba2c6c:;
  /* 10ba2c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ba2c6e:;
  /* 10ba2c6e ret  */
  ESPCHK(0x10ba2c43u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c6f @ 0x10ba2c6f (78 bytes, 30 insns) */
void f_10ba2c6f(void) {
  FTRACE(0x10ba2c6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2c6f push esi */
  push32((uint32_t)(ESI));
  /* 10ba2c70 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2c74 cmp esi, dword ptr [0x10ba6630] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10ba6630))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2c7a push edi */
  push32((uint32_t)(EDI));
  /* 10ba2c7b ja 0x10ba2c9e */
  if ((!C.cf&&!C.zf)) goto L_10ba2c9e;
  /* 10ba2c7d push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2c7f call 0x10ba2ae6 */
  push32(0x10ba2c84u); f_10ba2ae6();
  /* 10ba2c84 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2c85 call 0x10ba38e9 */
  push32(0x10ba2c8au); f_10ba38e9();
  /* 10ba2c8a push 9 */
  push32((uint32_t)(0x9u));
  /* 10ba2c8c mov edi, eax */
  EDI = (EAX);
  /* 10ba2c8e call 0x10ba2b47 */
  push32(0x10ba2c93u); f_10ba2b47();
  /* 10ba2c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2c96 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10ba2c98 je 0x10ba2c9e */
  if (C.zf) goto L_10ba2c9e;
  /* 10ba2c9a mov eax, edi */
  EAX = (EDI);
  /* 10ba2c9c jmp 0x10ba2cba */
  goto L_10ba2cba;
L_10ba2c9e:;
  /* 10ba2c9e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba2ca0 jne 0x10ba2ca5 */
  if (!C.zf) goto L_10ba2ca5;
  /* 10ba2ca2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba2ca4 pop esi */
  ESI = (pop32());
L_10ba2ca5:;
  /* 10ba2ca5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2ca8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10ba2cab push esi */
  push32((uint32_t)(ESI));
  /* 10ba2cac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba2cae push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba2cb4 call dword ptr [0x10ba503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba503c))), 0x10ba2cbau);
L_10ba2cba:;
  /* 10ba2cba pop edi */
  EDI = (pop32());
  /* 10ba2cbb pop esi */
  ESI = (pop32());
  /* 10ba2cbc ret  */
  ESPCHK(0x10ba2c6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002cc0 @ 0x10ba2cc0 (7 bytes, 3 insns) */
void f_10ba2cc0(void) {
  FTRACE(0x10ba2cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2cc0 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2cc1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2cc5 jmp 0x10ba2d31 */
  jmp_ind(0x10ba2d31u); return;
}

/* FUN_10002cd0 @ 0x10ba2cd0 (224 bytes, 84 insns) */
void f_10ba2cd0(void) {
  FTRACE(0x10ba2cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2cd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2cd4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2cd5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ba2cdb je 0x10ba2cec */
  if (C.zf) goto L_10ba2cec;
L_10ba2cdd:;
  /* 10ba2cdd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10ba2cdf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2ce0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba2ce2 je 0x10ba2d1f */
  if (C.zf) goto L_10ba2d1f;
  /* 10ba2ce4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ba2cea jne 0x10ba2cdd */
  if (!C.zf) goto L_10ba2cdd;
L_10ba2cec:;
  /* 10ba2cec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ba2cee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ba2cf3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2cf5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2cf8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2cfa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2cfd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ba2d02 je 0x10ba2cec */
  if (C.zf) goto L_10ba2cec;
  /* 10ba2d04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ba2d07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba2d09 je 0x10ba2d2e */
  if (C.zf) goto L_10ba2d2e;
  /* 10ba2d0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ba2d0d je 0x10ba2d29 */
  if (C.zf) goto L_10ba2d29;
  /* 10ba2d0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ba2d14 je 0x10ba2d24 */
  if (C.zf) goto L_10ba2d24;
  /* 10ba2d16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ba2d1b je 0x10ba2d1f */
  if (C.zf) goto L_10ba2d1f;
  /* 10ba2d1d jmp 0x10ba2cec */
  goto L_10ba2cec;
L_10ba2d1f:;
  /* 10ba2d1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10ba2d22 jmp 0x10ba2d31 */
  goto L_10ba2d31;
L_10ba2d24:;
  /* 10ba2d24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10ba2d27 jmp 0x10ba2d31 */
  goto L_10ba2d31;
L_10ba2d29:;
  /* 10ba2d29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10ba2d2c jmp 0x10ba2d31 */
  goto L_10ba2d31;
L_10ba2d2e:;
  /* 10ba2d2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10ba2d31:;
  /* 10ba2d31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ba2d35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ba2d3b je 0x10ba2d56 */
  if (C.zf) goto L_10ba2d56;
L_10ba2d3d:;
  /* 10ba2d3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ba2d3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2d40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba2d42 je 0x10ba2da8 */
  if (C.zf) goto L_10ba2da8;
  /* 10ba2d44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10ba2d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba2d47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ba2d4d jne 0x10ba2d3d */
  if (!C.zf) goto L_10ba2d3d;
  /* 10ba2d4f jmp 0x10ba2d56 */
  goto L_10ba2d56;
L_10ba2d51:;
  /* 10ba2d51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ba2d53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ba2d56:;
  /* 10ba2d56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ba2d5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ba2d5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2d5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2d62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2d64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ba2d66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2d69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ba2d6e je 0x10ba2d51 */
  if (C.zf) goto L_10ba2d51;
  /* 10ba2d70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba2d72 je 0x10ba2da8 */
  if (C.zf) goto L_10ba2da8;
  /* 10ba2d74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10ba2d76 je 0x10ba2d9f */
  if (C.zf) goto L_10ba2d9f;
  /* 10ba2d78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ba2d7e je 0x10ba2d92 */
  if (C.zf) goto L_10ba2d92;
  /* 10ba2d80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ba2d86 je 0x10ba2d8a */
  if (C.zf) goto L_10ba2d8a;
  /* 10ba2d88 jmp 0x10ba2d51 */
  goto L_10ba2d51;
L_10ba2d8a:;
  /* 10ba2d8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ba2d8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2d90 pop edi */
  EDI = (pop32());
  /* 10ba2d91 ret  */
  ESPCHK(0x10ba2cd0u, _esp0);
  ESP += 4; return;
L_10ba2d92:;
  /* 10ba2d92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10ba2d95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2d99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10ba2d9d pop edi */
  EDI = (pop32());
  /* 10ba2d9e ret  */
  ESPCHK(0x10ba2cd0u, _esp0);
  ESP += 4; return;
L_10ba2d9f:;
  /* 10ba2d9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10ba2da2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2da6 pop edi */
  EDI = (pop32());
  /* 10ba2da7 ret  */
  ESPCHK(0x10ba2cd0u, _esp0);
  ESP += 4; return;
L_10ba2da8:;
  /* 10ba2da8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10ba2daa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba2dae pop edi */
  EDI = (pop32());
  /* 10ba2daf ret  */
  ESPCHK(0x10ba2cd0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10ba2db0 (123 bytes, 44 insns) */
void f_10ba2db0(void) {
  FTRACE(0x10ba2db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2db0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2db4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ba2dba je 0x10ba2dd0 */
  if (C.zf) goto L_10ba2dd0;
L_10ba2dbc:;
  /* 10ba2dbc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10ba2dbe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2dbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba2dc1 je 0x10ba2e03 */
  if (C.zf) goto L_10ba2e03;
  /* 10ba2dc3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ba2dc9 jne 0x10ba2dbc */
  if (!C.zf) goto L_10ba2dbc;
  /* 10ba2dcb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10ba2dd0:;
  /* 10ba2dd0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ba2dd2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ba2dd7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2dd9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2ddc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2dde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2de1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ba2de6 je 0x10ba2dd0 */
  if (C.zf) goto L_10ba2dd0;
  /* 10ba2de8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ba2deb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba2ded je 0x10ba2e21 */
  if (C.zf) goto L_10ba2e21;
  /* 10ba2def test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ba2df1 je 0x10ba2e17 */
  if (C.zf) goto L_10ba2e17;
  /* 10ba2df3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ba2df8 je 0x10ba2e0d */
  if (C.zf) goto L_10ba2e0d;
  /* 10ba2dfa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ba2dff je 0x10ba2e03 */
  if (C.zf) goto L_10ba2e03;
  /* 10ba2e01 jmp 0x10ba2dd0 */
  goto L_10ba2dd0;
L_10ba2e03:;
  /* 10ba2e03 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10ba2e06 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2e0a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2e0c ret  */
  ESPCHK(0x10ba2db0u, _esp0);
  ESP += 4; return;
L_10ba2e0d:;
  /* 10ba2e0d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10ba2e10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2e14 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2e16 ret  */
  ESPCHK(0x10ba2db0u, _esp0);
  ESP += 4; return;
L_10ba2e17:;
  /* 10ba2e17 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10ba2e1a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2e1e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2e20 ret  */
  ESPCHK(0x10ba2db0u, _esp0);
  ESP += 4; return;
L_10ba2e21:;
  /* 10ba2e21 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10ba2e24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2e28 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2e2a ret  */
  ESPCHK(0x10ba2db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e2b @ 0x10ba2e2b (429 bytes, 143 insns) */
void f_10ba2e2b(void) {
  FTRACE(0x10ba2e2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2e2b push ebp */
  push32((uint32_t)(EBP));
  /* 10ba2e2c mov ebp, esp */
  EBP = (ESP);
  /* 10ba2e2e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba2e31 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2e32 push esi */
  push32((uint32_t)(ESI));
  /* 10ba2e33 push edi */
  push32((uint32_t)(EDI));
  /* 10ba2e34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ba2e36 call 0x10ba2ae6 */
  push32(0x10ba2e3bu); f_10ba2ae6();
  /* 10ba2e3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba2e3e call 0x10ba2fd8 */
  push32(0x10ba2e43u); f_10ba2fd8();
  /* 10ba2e43 mov ebx, eax */
  EBX = (EAX);
  /* 10ba2e45 pop ecx */
  ECX = (pop32());
  /* 10ba2e46 cmp ebx, dword ptr [0x10ba6998] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10ba6998))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2e4c pop ecx */
  ECX = (pop32());
  /* 10ba2e4d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba2e50 jne 0x10ba2e59 */
  if (!C.zf) goto L_10ba2e59;
L_10ba2e52:;
  /* 10ba2e52 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10ba2e54 jmp 0x10ba2fc9 */
  goto L_10ba2fc9;
L_10ba2e59:;
  /* 10ba2e59 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10ba2e5b je 0x10ba2fb7 */
  if (C.zf) goto L_10ba2fb7;
  /* 10ba2e61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba2e63 mov eax, 0x10ba6538 */
  EAX = (0x10ba6538u);
L_10ba2e68:;
  /* 10ba2e68 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2e6a je 0x10ba2ee0 */
  if (C.zf) goto L_10ba2ee0;
  /* 10ba2e6c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2e6f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ba2e70 cmp eax, 0x10ba6628 */
  { uint32_t _a=(EAX),_b=(0x10ba6628u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2e75 jl 0x10ba2e68 */
  if ((C.sf!=C.of)) goto L_10ba2e68;
  /* 10ba2e77 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ba2e7a push eax */
  push32((uint32_t)(EAX));
  /* 10ba2e7b push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2e7c call dword ptr [0x10ba5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5038))), 0x10ba2e82u);
  /* 10ba2e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba2e84 pop esi */
  ESI = (pop32());
  /* 10ba2e85 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2e87 jne 0x10ba2fae */
  if (!C.zf) goto L_10ba2fae;
  /* 10ba2e8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ba2e8f and dword ptr [0x10ba6bc4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10ba6bc4)))&(0x0u); w32((uint32_t)(0x10ba6bc4), (_r)); fl_logic(_r,32); }
  /* 10ba2e96 pop ecx */
  ECX = (pop32());
  /* 10ba2e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2e99 mov edi, 0x10ba6ac0 */
  EDI = (0x10ba6ac0u);
  /* 10ba2e9e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2ea1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ba2ea3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10ba2ea4 mov dword ptr [0x10ba6998], ebx */
  w32((uint32_t)(0x10ba6998), (EBX));
  /* 10ba2eaa jbe 0x10ba2f9b */
  if ((C.cf||C.zf)) goto L_10ba2f9b;
  /* 10ba2eb0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2eb4 je 0x10ba2f76 */
  if (C.zf) goto L_10ba2f76;
  /* 10ba2eba lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10ba2ebd:;
  /* 10ba2ebd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ba2ebf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba2ec1 je 0x10ba2f76 */
  if (C.zf) goto L_10ba2f76;
  /* 10ba2ec7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10ba2ecb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10ba2ece:;
  /* 10ba2ece cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2ed0 ja 0x10ba2f6a */
  if ((!C.cf&&!C.zf)) goto L_10ba2f6a;
  /* 10ba2ed6 or byte ptr [eax + 0x10ba6ac1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(0x4u); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba2edd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2ede jmp 0x10ba2ece */
  goto L_10ba2ece;
L_10ba2ee0:;
  /* 10ba2ee0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba2ee4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ba2ee6 pop ecx */
  ECX = (pop32());
  /* 10ba2ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2ee9 mov edi, 0x10ba6ac0 */
  EDI = (0x10ba6ac0u);
  /* 10ba2eee lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10ba2ef1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ba2ef3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10ba2ef6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10ba2ef7 lea ebx, [esi + 0x10ba6548] */
  EBX = ((uint32_t)(ESI + 0x10ba6548));
L_10ba2efd:;
  /* 10ba2efd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2f00 mov ecx, ebx */
  ECX = (EBX);
  /* 10ba2f02 je 0x10ba2f30 */
  if (C.zf) goto L_10ba2f30;
L_10ba2f04:;
  /* 10ba2f04 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ba2f07 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba2f09 je 0x10ba2f30 */
  if (C.zf) goto L_10ba2f30;
  /* 10ba2f0b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10ba2f0e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10ba2f11 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2f13 ja 0x10ba2f29 */
  if ((!C.cf&&!C.zf)) goto L_10ba2f29;
  /* 10ba2f15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba2f18 mov dl, byte ptr [edx + 0x10ba6530] */
  DL = (r8((uint32_t)(EDX + 0x10ba6530)));
L_10ba2f1e:;
  /* 10ba2f1e or byte ptr [eax + 0x10ba6ac1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(DL); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba2f24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2f25 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2f27 jbe 0x10ba2f1e */
  if ((C.cf||C.zf)) goto L_10ba2f1e;
L_10ba2f29:;
  /* 10ba2f29 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2f2a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2f2b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2f2e jne 0x10ba2f04 */
  if (!C.zf) goto L_10ba2f04;
L_10ba2f30:;
  /* 10ba2f30 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10ba2f33 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba2f36 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2f3a jb 0x10ba2efd */
  if (C.cf) goto L_10ba2efd;
  /* 10ba2f3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba2f3f mov dword ptr [0x10ba69ac], 1 */
  w32((uint32_t)(0x10ba69ac), (0x1u));
  /* 10ba2f49 push eax */
  push32((uint32_t)(EAX));
  /* 10ba2f4a mov dword ptr [0x10ba6998], eax */
  w32((uint32_t)(0x10ba6998), (EAX));
  /* 10ba2f4f call 0x10ba3022 */
  push32(0x10ba2f54u); f_10ba3022();
  /* 10ba2f54 lea esi, [esi + 0x10ba653c] */
  ESI = ((uint32_t)(ESI + 0x10ba653c));
  /* 10ba2f5a mov edi, 0x10ba69a0 */
  EDI = (0x10ba69a0u);
  /* 10ba2f5f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10ba2f60 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10ba2f61 pop ecx */
  ECX = (pop32());
  /* 10ba2f62 mov dword ptr [0x10ba6bc4], eax */
  w32((uint32_t)(0x10ba6bc4), (EAX));
  /* 10ba2f67 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10ba2f68 jmp 0x10ba2fbc */
  goto L_10ba2fbc;
L_10ba2f6a:;
  /* 10ba2f6a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2f6b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba2f6c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba2f70 jne 0x10ba2ebd */
  if (!C.zf) goto L_10ba2ebd;
L_10ba2f76:;
  /* 10ba2f76 mov eax, esi */
  EAX = (ESI);
L_10ba2f78:;
  /* 10ba2f78 or byte ptr [eax + 0x10ba6ac1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(0x8u); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba2f7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba2f80 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2f85 jb 0x10ba2f78 */
  if (C.cf) goto L_10ba2f78;
  /* 10ba2f87 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba2f88 call 0x10ba3022 */
  push32(0x10ba2f8du); f_10ba3022();
  /* 10ba2f8d pop ecx */
  ECX = (pop32());
  /* 10ba2f8e mov dword ptr [0x10ba6bc4], eax */
  w32((uint32_t)(0x10ba6bc4), (EAX));
  /* 10ba2f93 mov dword ptr [0x10ba69ac], esi */
  w32((uint32_t)(0x10ba69ac), (ESI));
  /* 10ba2f99 jmp 0x10ba2fa2 */
  goto L_10ba2fa2;
L_10ba2f9b:;
  /* 10ba2f9b and dword ptr [0x10ba69ac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10ba69ac)))&(0x0u); w32((uint32_t)(0x10ba69ac), (_r)); fl_logic(_r,32); }
L_10ba2fa2:;
  /* 10ba2fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba2fa4 mov edi, 0x10ba69a0 */
  EDI = (0x10ba69a0u);
  /* 10ba2fa9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10ba2faa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10ba2fab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10ba2fac jmp 0x10ba2fbc */
  goto L_10ba2fbc;
L_10ba2fae:;
  /* 10ba2fae cmp dword ptr [0x10ba6940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ba6940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2fb5 je 0x10ba2fc6 */
  if (C.zf) goto L_10ba2fc6;
L_10ba2fb7:;
  /* 10ba2fb7 call 0x10ba3055 */
  push32(0x10ba2fbcu); f_10ba3055();
L_10ba2fbc:;
  /* 10ba2fbc call 0x10ba307e */
  push32(0x10ba2fc1u); f_10ba307e();
  /* 10ba2fc1 jmp 0x10ba2e52 */
  goto L_10ba2e52;
L_10ba2fc6:;
  /* 10ba2fc6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10ba2fc9:;
  /* 10ba2fc9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ba2fcb call 0x10ba2b47 */
  push32(0x10ba2fd0u); f_10ba2b47();
  /* 10ba2fd0 pop ecx */
  ECX = (pop32());
  /* 10ba2fd1 mov eax, esi */
  EAX = (ESI);
  /* 10ba2fd3 pop edi */
  EDI = (pop32());
  /* 10ba2fd4 pop esi */
  ESI = (pop32());
  /* 10ba2fd5 pop ebx */
  EBX = (pop32());
  /* 10ba2fd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba2fd7 ret  */
  ESPCHK(0x10ba2e2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd8 @ 0x10ba2fd8 (74 bytes, 15 insns) */
void f_10ba2fd8(void) {
  FTRACE(0x10ba2fd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba2fd8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba2fdc and dword ptr [0x10ba6940], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10ba6940)))&(0x0u); w32((uint32_t)(0x10ba6940), (_r)); fl_logic(_r,32); }
  /* 10ba2fe3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2fe6 jne 0x10ba2ff8 */
  if (!C.zf) goto L_10ba2ff8;
  /* 10ba2fe8 mov dword ptr [0x10ba6940], 1 */
  w32((uint32_t)(0x10ba6940), (0x1u));
  /* 10ba2ff2 jmp dword ptr [0x10ba5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ba5030)))); return;
L_10ba2ff8:;
  /* 10ba2ff8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba2ffb jne 0x10ba300d */
  if (!C.zf) goto L_10ba300d;
  /* 10ba2ffd mov dword ptr [0x10ba6940], 1 */
  w32((uint32_t)(0x10ba6940), (0x1u));
  /* 10ba3007 jmp dword ptr [0x10ba5034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ba5034)))); return;
L_10ba300d:;
  /* 10ba300d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3010 jne 0x10ba3021 */
  if (!C.zf) goto L_10ba3021;
  /* 10ba3012 mov eax, dword ptr [0x10ba6970] */
  EAX = (r32((uint32_t)(0x10ba6970)));
  /* 10ba3017 mov dword ptr [0x10ba6940], 1 */
  w32((uint32_t)(0x10ba6940), (0x1u));
L_10ba3021:;
  /* 10ba3021 ret  */
  ESPCHK(0x10ba2fd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003022 @ 0x10ba3022 (51 bytes, 19 insns) */
void f_10ba3022(void) {
  FTRACE(0x10ba3022u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3022 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba3026 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba302b je 0x10ba304f */
  if (C.zf) goto L_10ba304f;
  /* 10ba302d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba3030 je 0x10ba3049 */
  if (C.zf) goto L_10ba3049;
  /* 10ba3032 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba3035 je 0x10ba3043 */
  if (C.zf) goto L_10ba3043;
  /* 10ba3037 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ba3038 je 0x10ba303d */
  if (C.zf) goto L_10ba303d;
  /* 10ba303a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba303c ret  */
  ESPCHK(0x10ba3022u, _esp0);
  ESP += 4; return;
L_10ba303d:;
  /* 10ba303d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10ba3042 ret  */
  ESPCHK(0x10ba3022u, _esp0);
  ESP += 4; return;
L_10ba3043:;
  /* 10ba3043 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10ba3048 ret  */
  ESPCHK(0x10ba3022u, _esp0);
  ESP += 4; return;
L_10ba3049:;
  /* 10ba3049 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10ba304e ret  */
  ESPCHK(0x10ba3022u, _esp0);
  ESP += 4; return;
L_10ba304f:;
  /* 10ba304f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10ba3054 ret  */
  ESPCHK(0x10ba3022u, _esp0);
  ESP += 4; return;
}

/* FUN_10003055 @ 0x10ba3055 (41 bytes, 17 insns) */
void f_10ba3055(void) {
  FTRACE(0x10ba3055u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3055 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3056 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ba3058 pop ecx */
  ECX = (pop32());
  /* 10ba3059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba305b mov edi, 0x10ba6ac0 */
  EDI = (0x10ba6ac0u);
  /* 10ba3060 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ba3062 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10ba3063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3065 mov edi, 0x10ba69a0 */
  EDI = (0x10ba69a0u);
  /* 10ba306a mov dword ptr [0x10ba6998], eax */
  w32((uint32_t)(0x10ba6998), (EAX));
  /* 10ba306f mov dword ptr [0x10ba69ac], eax */
  w32((uint32_t)(0x10ba69ac), (EAX));
  /* 10ba3074 mov dword ptr [0x10ba6bc4], eax */
  w32((uint32_t)(0x10ba6bc4), (EAX));
  /* 10ba3079 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10ba307a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10ba307b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10ba307c pop edi */
  EDI = (pop32());
  /* 10ba307d ret  */
  ESPCHK(0x10ba3055u, _esp0);
  ESP += 4; return;
}

/* FUN_1000307e @ 0x10ba307e (389 bytes, 124 insns) */
void f_10ba307e(void) {
  FTRACE(0x10ba307eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba307e push ebp */
  push32((uint32_t)(EBP));
  /* 10ba307f mov ebp, esp */
  EBP = (ESP);
  /* 10ba3081 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba3087 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10ba308a push esi */
  push32((uint32_t)(ESI));
  /* 10ba308b push eax */
  push32((uint32_t)(EAX));
  /* 10ba308c push dword ptr [0x10ba6998] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6998))));
  /* 10ba3092 call dword ptr [0x10ba5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5038))), 0x10ba3098u);
  /* 10ba3098 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba309b jne 0x10ba31b7 */
  if (!C.zf) goto L_10ba31b7;
  /* 10ba30a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba30a3 mov esi, 0x100 */
  ESI = (0x100u);
L_10ba30a8:;
  /* 10ba30a8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10ba30af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba30b0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba30b2 jb 0x10ba30a8 */
  if (C.cf) goto L_10ba30a8;
  /* 10ba30b4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10ba30b7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10ba30be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba30c0 je 0x10ba30f9 */
  if (C.zf) goto L_10ba30f9;
  /* 10ba30c2 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba30c3 push edi */
  push32((uint32_t)(EDI));
  /* 10ba30c4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10ba30c7:;
  /* 10ba30c7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10ba30ca movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10ba30cd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba30cf ja 0x10ba30ee */
  if ((!C.cf&&!C.zf)) goto L_10ba30ee;
  /* 10ba30d1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba30d3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10ba30da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba30db mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10ba30e0 mov ebx, ecx */
  EBX = (ECX);
  /* 10ba30e2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba30e5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ba30e7 mov ecx, ebx */
  ECX = (EBX);
  /* 10ba30e9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ba30ec rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10ba30ee:;
  /* 10ba30ee inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ba30ef inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ba30f0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10ba30f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba30f5 jne 0x10ba30c7 */
  if (!C.zf) goto L_10ba30c7;
  /* 10ba30f7 pop edi */
  EDI = (pop32());
  /* 10ba30f8 pop ebx */
  EBX = (pop32());
L_10ba30f9:;
  /* 10ba30f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba30fb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10ba3101 push dword ptr [0x10ba6bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc4))));
  /* 10ba3107 push dword ptr [0x10ba6998] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6998))));
  /* 10ba310d push eax */
  push32((uint32_t)(EAX));
  /* 10ba310e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10ba3114 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3115 push eax */
  push32((uint32_t)(EAX));
  /* 10ba3116 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba3118 call 0x10ba41f2 */
  push32(0x10ba311du); f_10ba41f2();
  /* 10ba311d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba311f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10ba3125 push dword ptr [0x10ba6998] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6998))));
  /* 10ba312b push esi */
  push32((uint32_t)(ESI));
  /* 10ba312c push eax */
  push32((uint32_t)(EAX));
  /* 10ba312d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10ba3133 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3134 push eax */
  push32((uint32_t)(EAX));
  /* 10ba3135 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3136 push dword ptr [0x10ba6bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc4))));
  /* 10ba313c call 0x10ba3fa3 */
  push32(0x10ba3141u); f_10ba3fa3();
  /* 10ba3141 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba3143 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10ba3149 push dword ptr [0x10ba6998] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6998))));
  /* 10ba314f push esi */
  push32((uint32_t)(ESI));
  /* 10ba3150 push eax */
  push32((uint32_t)(EAX));
  /* 10ba3151 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10ba3157 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3158 push eax */
  push32((uint32_t)(EAX));
  /* 10ba3159 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10ba315e push dword ptr [0x10ba6bc4] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc4))));
  /* 10ba3164 call 0x10ba3fa3 */
  push32(0x10ba3169u); f_10ba3fa3();
  /* 10ba3169 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba316c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba316e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10ba3174:;
  /* 10ba3174 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10ba3177 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10ba317a je 0x10ba3192 */
  if (C.zf) goto L_10ba3192;
  /* 10ba317c or byte ptr [eax + 0x10ba6ac1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(0x10u); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba3183 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10ba318a:;
  /* 10ba318a mov byte ptr [eax + 0x10ba69c0], dl */
  w8((uint32_t)(EAX + 0x10ba69c0), (DL));
  /* 10ba3190 jmp 0x10ba31ae */
  goto L_10ba31ae;
L_10ba3192:;
  /* 10ba3192 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10ba3195 je 0x10ba31a7 */
  if (C.zf) goto L_10ba31a7;
  /* 10ba3197 or byte ptr [eax + 0x10ba6ac1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(0x20u); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba319e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10ba31a5 jmp 0x10ba318a */
  goto L_10ba318a;
L_10ba31a7:;
  /* 10ba31a7 and byte ptr [eax + 0x10ba69c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba69c0)))&(0x0u); w8((uint32_t)(EAX + 0x10ba69c0), (_r)); fl_logic(_r,8); }
L_10ba31ae:;
  /* 10ba31ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba31af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba31b0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ba31b1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba31b3 jb 0x10ba3174 */
  if (C.cf) goto L_10ba3174;
  /* 10ba31b5 jmp 0x10ba3200 */
  goto L_10ba3200;
L_10ba31b7:;
  /* 10ba31b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba31b9 mov esi, 0x100 */
  ESI = (0x100u);
L_10ba31be:;
  /* 10ba31be cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba31c1 jb 0x10ba31dc */
  if (C.cf) goto L_10ba31dc;
  /* 10ba31c3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba31c6 ja 0x10ba31dc */
  if ((!C.cf&&!C.zf)) goto L_10ba31dc;
  /* 10ba31c8 or byte ptr [eax + 0x10ba6ac1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(0x10u); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba31cf mov cl, al */
  CL = (AL);
  /* 10ba31d1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10ba31d4:;
  /* 10ba31d4 mov byte ptr [eax + 0x10ba69c0], cl */
  w8((uint32_t)(EAX + 0x10ba69c0), (CL));
  /* 10ba31da jmp 0x10ba31fb */
  goto L_10ba31fb;
L_10ba31dc:;
  /* 10ba31dc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba31df jb 0x10ba31f4 */
  if (C.cf) goto L_10ba31f4;
  /* 10ba31e1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba31e4 ja 0x10ba31f4 */
  if ((!C.cf&&!C.zf)) goto L_10ba31f4;
  /* 10ba31e6 or byte ptr [eax + 0x10ba6ac1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba6ac1)))|(0x20u); w8((uint32_t)(EAX + 0x10ba6ac1), (_r)); fl_logic(_r,8); }
  /* 10ba31ed mov cl, al */
  CL = (AL);
  /* 10ba31ef sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ba31f2 jmp 0x10ba31d4 */
  goto L_10ba31d4;
L_10ba31f4:;
  /* 10ba31f4 and byte ptr [eax + 0x10ba69c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10ba69c0)))&(0x0u); w8((uint32_t)(EAX + 0x10ba69c0), (_r)); fl_logic(_r,8); }
L_10ba31fb:;
  /* 10ba31fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba31fc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba31fe jb 0x10ba31be */
  if (C.cf) goto L_10ba31be;
L_10ba3200:;
  /* 10ba3200 pop esi */
  ESI = (pop32());
  /* 10ba3201 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba3202 ret  */
  ESPCHK(0x10ba307eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003203 @ 0x10ba3203 (28 bytes, 7 insns) */
void f_10ba3203(void) {
  FTRACE(0x10ba3203u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3203 cmp dword ptr [0x10ba6ce8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ba6ce8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba320a jne 0x10ba321e */
  if (!C.zf) goto L_10ba321e;
  /* 10ba320c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10ba320e call 0x10ba2e2b */
  push32(0x10ba3213u); f_10ba2e2b();
  /* 10ba3213 pop ecx */
  ECX = (pop32());
  /* 10ba3214 mov dword ptr [0x10ba6ce8], 1 */
  w32((uint32_t)(0x10ba6ce8), (0x1u));
L_10ba321e:;
  /* 10ba321e ret  */
  ESPCHK(0x10ba3203u, _esp0);
  ESP += 4; return;
}

/* FUN_10003220 @ 0x10ba3220 (664 bytes, 263 insns) [15 switch table(s)] */
void f_10ba3220(void) {
  FTRACE(0x10ba3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3220 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba3221 mov ebp, esp */
  EBP = (ESP);
  /* 10ba3223 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3224 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3225 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba3228 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ba322b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba322e mov eax, ecx */
  EAX = (ECX);
  /* 10ba3230 mov edx, ecx */
  EDX = (ECX);
  /* 10ba3232 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3234 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3236 jbe 0x10ba3240 */
  if ((C.cf||C.zf)) goto L_10ba3240;
  /* 10ba3238 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba323a jb 0x10ba33b8 */
  if (C.cf) goto L_10ba33b8;
L_10ba3240:;
  /* 10ba3240 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ba3246 jne 0x10ba325c */
  if (!C.zf) goto L_10ba325c;
  /* 10ba3248 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba324b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ba324e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3251 jb 0x10ba327c */
  if (C.cf) goto L_10ba327c;
  /* 10ba3253 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba3255 jmp dword ptr [edx*4 + 0x10ba3368] */
  switch (EDX) {
    case 0: goto L_10ba3378;
    case 1: goto L_10ba3380;
    case 2: goto L_10ba338c;
    case 3: goto L_10ba33a0;
    default: x86_unimpl("switch@0x10ba3255 out of table"); return;
  }
L_10ba325c:;
  /* 10ba325c mov eax, edi */
  EAX = (EDI);
  /* 10ba325e mov edx, 3 */
  EDX = (0x3u);
  /* 10ba3263 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba3266 jb 0x10ba3274 */
  if (C.cf) goto L_10ba3274;
  /* 10ba3268 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ba326b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba326d jmp dword ptr [eax*4 + 0x10ba3280] */
  switch (EAX) {
    case 1: goto L_10ba3290;
    case 2: goto L_10ba32bc;
    case 3: goto L_10ba32e0;
    default: x86_unimpl("switch@0x10ba326d out of table"); return;
  }
L_10ba3274:;
  /* 10ba3274 jmp dword ptr [ecx*4 + 0x10ba3378] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10ba3378)))); return;
  /* 10ba327b nop  */
  /* nop */
L_10ba327c:;
  /* 10ba327c jmp dword ptr [ecx*4 + 0x10ba32fc] */
  switch (ECX) {
    case 0: goto L_10ba335f;
    case 1: goto L_10ba334c;
    case 2: goto L_10ba3344;
    case 3: goto L_10ba333c;
    case 4: goto L_10ba3334;
    case 5: goto L_10ba332c;
    case 6: goto L_10ba3324;
    case 7: goto L_10ba331c;
    default: x86_unimpl("switch@0x10ba327c out of table"); return;
  }
  /* 10ba3283 nop  */
  /* nop */
L_10ba3290:;
  /* 10ba3290 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3292 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba3294 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3296 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba3299 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba329c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba329f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba32a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba32a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba32a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba32ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba32ae jb 0x10ba327c */
  if (C.cf) goto L_10ba327c;
  /* 10ba32b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba32b2 jmp dword ptr [edx*4 + 0x10ba3368] */
  switch (EDX) {
    case 0: goto L_10ba3378;
    case 1: goto L_10ba3380;
    case 2: goto L_10ba338c;
    case 3: goto L_10ba33a0;
    default: x86_unimpl("switch@0x10ba32b2 out of table"); return;
  }
  /* 10ba32b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba32bc:;
  /* 10ba32bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba32be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba32c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba32c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba32c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba32c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba32cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba32ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba32d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba32d4 jb 0x10ba327c */
  if (C.cf) goto L_10ba327c;
  /* 10ba32d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba32d8 jmp dword ptr [edx*4 + 0x10ba3368] */
  switch (EDX) {
    case 0: goto L_10ba3378;
    case 1: goto L_10ba3380;
    case 2: goto L_10ba338c;
    case 3: goto L_10ba33a0;
    default: x86_unimpl("switch@0x10ba32d8 out of table"); return;
  }
  /* 10ba32df nop  */
  /* nop */
L_10ba32e0:;
  /* 10ba32e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba32e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba32e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba32e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba32e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba32ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba32eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba32ee jb 0x10ba327c */
  if (C.cf) goto L_10ba327c;
  /* 10ba32f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba32f2 jmp dword ptr [edx*4 + 0x10ba3368] */
  switch (EDX) {
    case 0: goto L_10ba3378;
    case 1: goto L_10ba3380;
    case 2: goto L_10ba338c;
    case 3: goto L_10ba33a0;
    default: x86_unimpl("switch@0x10ba32f2 out of table"); return;
  }
  /* 10ba32f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba331c:;
  /* 10ba331c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10ba3320 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10ba3324:;
  /* 10ba3324 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10ba3328 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10ba332c:;
  /* 10ba332c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10ba3330 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10ba3334:;
  /* 10ba3334 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10ba3338 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10ba333c:;
  /* 10ba333c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10ba3340 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10ba3344:;
  /* 10ba3344 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10ba3348 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10ba334c:;
  /* 10ba334c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10ba3350 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10ba3354 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ba335b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba335d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ba335f:;
  /* 10ba335f jmp dword ptr [edx*4 + 0x10ba3368] */
  switch (EDX) {
    case 0: goto L_10ba3378;
    case 1: goto L_10ba3380;
    case 2: goto L_10ba338c;
    case 3: goto L_10ba33a0;
    default: x86_unimpl("switch@0x10ba335f out of table"); return;
  }
  /* 10ba3366 mov edi, edi */
  EDI = (EDI);
L_10ba3378:;
  /* 10ba3378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba337b pop esi */
  ESI = (pop32());
  /* 10ba337c pop edi */
  EDI = (pop32());
  /* 10ba337d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba337e ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba337f nop  */
  /* nop */
L_10ba3380:;
  /* 10ba3380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba3382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3387 pop esi */
  ESI = (pop32());
  /* 10ba3388 pop edi */
  EDI = (pop32());
  /* 10ba3389 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba338a ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba338b nop  */
  /* nop */
L_10ba338c:;
  /* 10ba338c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba338e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3390 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba3393 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba3396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3399 pop esi */
  ESI = (pop32());
  /* 10ba339a pop edi */
  EDI = (pop32());
  /* 10ba339b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba339c ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba339d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba33a0:;
  /* 10ba33a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba33a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba33a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba33a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba33aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba33ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba33b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba33b3 pop esi */
  ESI = (pop32());
  /* 10ba33b4 pop edi */
  EDI = (pop32());
  /* 10ba33b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba33b6 ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba33b7 nop  */
  /* nop */
L_10ba33b8:;
  /* 10ba33b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10ba33bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10ba33c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ba33c6 jne 0x10ba33ec */
  if (!C.zf) goto L_10ba33ec;
  /* 10ba33c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba33cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ba33ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba33d1 jb 0x10ba33e0 */
  if (C.cf) goto L_10ba33e0;
  /* 10ba33d3 std  */
  C.df=1;
  /* 10ba33d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba33d6 cld  */
  C.df=0;
  /* 10ba33d7 jmp dword ptr [edx*4 + 0x10ba3500] */
  switch (EDX) {
    case 0: goto L_10ba3510;
    case 1: goto L_10ba3518;
    case 2: goto L_10ba3528;
    case 3: goto L_10ba353c;
    default: x86_unimpl("switch@0x10ba33d7 out of table"); return;
  }
  /* 10ba33de mov edi, edi */
  EDI = (EDI);
L_10ba33e0:;
  /* 10ba33e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ba33e2 jmp dword ptr [ecx*4 + 0x10ba34b0] */
  switch (ECX) {
    case 0: goto L_10ba34f7;
    default: x86_unimpl("switch@0x10ba33e2 out of table"); return;
  }
  /* 10ba33e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba33ec:;
  /* 10ba33ec mov eax, edi */
  EAX = (EDI);
  /* 10ba33ee mov edx, 3 */
  EDX = (0x3u);
  /* 10ba33f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba33f6 jb 0x10ba3404 */
  if (C.cf) goto L_10ba3404;
  /* 10ba33f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ba33fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba33fd jmp dword ptr [eax*4 + 0x10ba3408] */
  switch (EAX) {
    case 1: goto L_10ba3418;
    case 2: goto L_10ba3438;
    case 3: goto L_10ba3460;
    default: x86_unimpl("switch@0x10ba33fd out of table"); return;
  }
L_10ba3404:;
  /* 10ba3404 jmp dword ptr [ecx*4 + 0x10ba3500] */
  switch (ECX) {
    case 0: goto L_10ba3510;
    case 1: goto L_10ba3518;
    case 2: goto L_10ba3528;
    case 3: goto L_10ba353c;
    default: x86_unimpl("switch@0x10ba3404 out of table"); return;
  }
  /* 10ba340b nop  */
  /* nop */
L_10ba3418:;
  /* 10ba3418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba341b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba341d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba3420 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ba3421 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3424 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ba3425 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3428 jb 0x10ba33e0 */
  if (C.cf) goto L_10ba33e0;
  /* 10ba342a std  */
  C.df=1;
  /* 10ba342b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba342d cld  */
  C.df=0;
  /* 10ba342e jmp dword ptr [edx*4 + 0x10ba3500] */
  switch (EDX) {
    case 0: goto L_10ba3510;
    case 1: goto L_10ba3518;
    case 2: goto L_10ba3528;
    case 3: goto L_10ba353c;
    default: x86_unimpl("switch@0x10ba342e out of table"); return;
  }
  /* 10ba3435 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba3438:;
  /* 10ba3438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba343b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba343d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba3440 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba3443 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3446 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba3449 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba344c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba344f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3452 jb 0x10ba33e0 */
  if (C.cf) goto L_10ba33e0;
  /* 10ba3454 std  */
  C.df=1;
  /* 10ba3455 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba3457 cld  */
  C.df=0;
  /* 10ba3458 jmp dword ptr [edx*4 + 0x10ba3500] */
  switch (EDX) {
    case 0: goto L_10ba3510;
    case 1: goto L_10ba3518;
    case 2: goto L_10ba3528;
    case 3: goto L_10ba353c;
    default: x86_unimpl("switch@0x10ba3458 out of table"); return;
  }
  /* 10ba345f nop  */
  /* nop */
L_10ba3460:;
  /* 10ba3460 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba3463 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3465 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba3468 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba346b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba346e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba3471 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3474 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba3477 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba347a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba347d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3480 jb 0x10ba33e0 */
  if (C.cf) goto L_10ba33e0;
  /* 10ba3486 std  */
  C.df=1;
  /* 10ba3487 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba3489 cld  */
  C.df=0;
  /* 10ba348a jmp dword ptr [edx*4 + 0x10ba3500] */
  switch (EDX) {
    case 0: goto L_10ba3510;
    case 1: goto L_10ba3518;
    case 2: goto L_10ba3528;
    case 3: goto L_10ba353c;
    default: x86_unimpl("switch@0x10ba348a out of table"); return;
  }
  /* 10ba3491 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10ba3494 mov ah, 0x34 */
  AH = (0x34u);
  /* 10ba3496 mov edx, 0xba34bc10 */
  EDX = (0xba34bc10u);
  /* 10ba349b adc ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba349d xor al, 0xba */
  { uint32_t _r=(AL)^(0xbau); AL = (_r); fl_logic(_r,8); }
  /* 10ba349f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba34a1 xor al, 0xba */
  { uint32_t _r=(AL)^(0xbau); AL = (_r); fl_logic(_r,8); }
  /* 10ba34a3 adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba34a5 xor al, 0xba */
  { uint32_t _r=(AL)^(0xbau); AL = (_r); fl_logic(_r,8); }
  /* 10ba34a7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba34a9 xor al, 0xba */
  { uint32_t _r=(AL)^(0xbau); AL = (_r); fl_logic(_r,8); }
  /* 10ba34ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba34ad xor al, 0xba */
  { uint32_t _r=(AL)^(0xbau); AL = (_r); fl_logic(_r,8); }
  /* 10ba34b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10ba34b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10ba34bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10ba34c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10ba34c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10ba34c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10ba34cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10ba34d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10ba34d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10ba34d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10ba34dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10ba34e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10ba34e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10ba34e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10ba34ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ba34f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba34f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ba34f7:;
  /* 10ba34f7 jmp dword ptr [edx*4 + 0x10ba3500] */
  switch (EDX) {
    case 0: goto L_10ba3510;
    case 1: goto L_10ba3518;
    case 2: goto L_10ba3528;
    case 3: goto L_10ba353c;
    default: x86_unimpl("switch@0x10ba34f7 out of table"); return;
  }
  /* 10ba34fe mov edi, edi */
  EDI = (EDI);
L_10ba3510:;
  /* 10ba3510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3513 pop esi */
  ESI = (pop32());
  /* 10ba3514 pop edi */
  EDI = (pop32());
  /* 10ba3515 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba3516 ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba3517 nop  */
  /* nop */
L_10ba3518:;
  /* 10ba3518 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba351b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba351e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3521 pop esi */
  ESI = (pop32());
  /* 10ba3522 pop edi */
  EDI = (pop32());
  /* 10ba3523 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba3524 ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba3525 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba3528:;
  /* 10ba3528 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba352b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba352e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba3531 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba3534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3537 pop esi */
  ESI = (pop32());
  /* 10ba3538 pop edi */
  EDI = (pop32());
  /* 10ba3539 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba353a ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
  /* 10ba353b nop  */
  /* nop */
L_10ba353c:;
  /* 10ba353c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba353f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba3542 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba3545 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba3548 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba354b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba354e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3551 pop esi */
  ESI = (pop32());
  /* 10ba3552 pop edi */
  EDI = (pop32());
  /* 10ba3553 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba3554 ret  */
  ESPCHK(0x10ba3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003555 @ 0x10ba3555 (62 bytes, 15 insns) */
void f_10ba3555(void) {
  FTRACE(0x10ba3555u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3555 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10ba355a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba355c push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba3562 call dword ptr [0x10ba503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba503c))), 0x10ba3568u);
  /* 10ba3568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba356a mov dword ptr [0x10ba6994], eax */
  w32((uint32_t)(0x10ba6994), (EAX));
  /* 10ba356f jne 0x10ba3572 */
  if (!C.zf) goto L_10ba3572;
  /* 10ba3571 ret  */
  ESPCHK(0x10ba3555u, _esp0);
  ESP += 4; return;
L_10ba3572:;
  /* 10ba3572 and dword ptr [0x10ba698c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10ba698c)))&(0x0u); w32((uint32_t)(0x10ba698c), (_r)); fl_logic(_r,32); }
  /* 10ba3579 and dword ptr [0x10ba6990], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10ba6990)))&(0x0u); w32((uint32_t)(0x10ba6990), (_r)); fl_logic(_r,32); }
  /* 10ba3580 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba3582 mov dword ptr [0x10ba6988], eax */
  w32((uint32_t)(0x10ba6988), (EAX));
  /* 10ba3587 mov dword ptr [0x10ba6980], 0x10 */
  w32((uint32_t)(0x10ba6980), (0x10u));
  /* 10ba3591 pop eax */
  EAX = (pop32());
  /* 10ba3592 ret  */
  ESPCHK(0x10ba3555u, _esp0);
  ESP += 4; return;
}

/* FUN_10003593 @ 0x10ba3593 (43 bytes, 14 insns) */
void f_10ba3593(void) {
  FTRACE(0x10ba3593u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3593 mov eax, dword ptr [0x10ba6990] */
  EAX = (r32((uint32_t)(0x10ba6990)));
  /* 10ba3598 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10ba359b mov eax, dword ptr [0x10ba6994] */
  EAX = (r32((uint32_t)(0x10ba6994)));
  /* 10ba35a0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10ba35a3:;
  /* 10ba35a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba35a5 jae 0x10ba35bb */
  if (!C.cf) goto L_10ba35bb;
  /* 10ba35a7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba35ab sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba35ae cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba35b4 jb 0x10ba35bd */
  if (C.cf) goto L_10ba35bd;
  /* 10ba35b6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba35b9 jmp 0x10ba35a3 */
  goto L_10ba35a3;
L_10ba35bb:;
  /* 10ba35bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ba35bd:;
  /* 10ba35bd ret  */
  ESPCHK(0x10ba3593u, _esp0);
  ESP += 4; return;
}

/* FUN_100035be @ 0x10ba35be (811 bytes, 264 insns) */
void f_10ba35be(void) {
  FTRACE(0x10ba35beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba35be push ebp */
  push32((uint32_t)(EBP));
  /* 10ba35bf mov ebp, esp */
  EBP = (ESP);
  /* 10ba35c1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba35c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba35c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba35ca push ebx */
  push32((uint32_t)(EBX));
  /* 10ba35cb push esi */
  push32((uint32_t)(ESI));
  /* 10ba35cc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ba35cf mov esi, edx */
  ESI = (EDX);
  /* 10ba35d1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba35d4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ba35d7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba35da push edi */
  push32((uint32_t)(EDI));
  /* 10ba35db shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10ba35de mov ecx, esi */
  ECX = (ESI);
  /* 10ba35e0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10ba35e3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ba35e9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ba35ea mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10ba35ed lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ba35f4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10ba35f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ba35fa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10ba35fd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10ba3600 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ba3603 jne 0x10ba3684 */
  if (!C.zf) goto L_10ba3684;
  /* 10ba3605 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ba3608 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ba360a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba360b pop edi */
  EDI = (pop32());
  /* 10ba360c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ba360f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3611 jbe 0x10ba3616 */
  if ((C.cf||C.zf)) goto L_10ba3616;
  /* 10ba3613 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10ba3616:;
  /* 10ba3616 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10ba361a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba361e jne 0x10ba3668 */
  if (!C.zf) goto L_10ba3668;
  /* 10ba3620 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba3623 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3626 jae 0x10ba3644 */
  if (!C.cf) goto L_10ba3644;
  /* 10ba3628 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10ba362d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10ba362f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10ba3633 not edi */
  EDI = (~(EDI));
  /* 10ba3635 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10ba3639 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10ba363b jne 0x10ba3668 */
  if (!C.zf) goto L_10ba3668;
  /* 10ba363d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3640 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10ba3642 jmp 0x10ba3668 */
  goto L_10ba3668;
L_10ba3644:;
  /* 10ba3644 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3647 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10ba364c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10ba364e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba3651 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10ba3655 not edi */
  EDI = (~(EDI));
  /* 10ba3657 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10ba365e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10ba3660 jne 0x10ba3668 */
  if (!C.zf) goto L_10ba3668;
  /* 10ba3662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3665 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10ba3668:;
  /* 10ba3668 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10ba366c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10ba3670 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10ba3673 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10ba3677 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10ba367b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba367e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10ba3681 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10ba3684:;
  /* 10ba3684 mov edi, ebx */
  EDI = (EBX);
  /* 10ba3686 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10ba3689 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ba368a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba368d jbe 0x10ba3692 */
  if ((C.cf||C.zf)) goto L_10ba3692;
  /* 10ba368f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ba3691 pop edi */
  EDI = (pop32());
L_10ba3692:;
  /* 10ba3692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3695 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3698 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ba369b jne 0x10ba3741 */
  if (!C.zf) goto L_10ba3741;
  /* 10ba36a1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba36a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba36a7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ba36aa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ba36ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ba36af dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba36b0 pop edx */
  EDX = (pop32());
  /* 10ba36b1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba36b3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ba36b6 jbe 0x10ba36bd */
  if ((C.cf||C.zf)) goto L_10ba36bd;
  /* 10ba36b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ba36bb mov ecx, edx */
  ECX = (EDX);
L_10ba36bd:;
  /* 10ba36bd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba36c0 mov edi, ebx */
  EDI = (EBX);
  /* 10ba36c2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10ba36c5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10ba36c8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ba36c9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba36cb jbe 0x10ba36cf */
  if ((C.cf||C.zf)) goto L_10ba36cf;
  /* 10ba36cd mov edi, edx */
  EDI = (EDX);
L_10ba36cf:;
  /* 10ba36cf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba36d1 je 0x10ba373e */
  if (C.zf) goto L_10ba373e;
  /* 10ba36d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ba36d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ba36d9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba36dc jne 0x10ba3726 */
  if (!C.zf) goto L_10ba3726;
  /* 10ba36de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba36e1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba36e4 jae 0x10ba3702 */
  if (!C.cf) goto L_10ba3702;
  /* 10ba36e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ba36eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ba36ed lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10ba36f1 not edx */
  EDX = (~(EDX));
  /* 10ba36f3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10ba36f7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10ba36f9 jne 0x10ba3726 */
  if (!C.zf) goto L_10ba3726;
  /* 10ba36fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba36fe and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10ba3700 jmp 0x10ba3726 */
  goto L_10ba3726;
L_10ba3702:;
  /* 10ba3702 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3705 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ba370a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ba370c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba370f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10ba3713 not edx */
  EDX = (~(EDX));
  /* 10ba3715 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10ba371c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10ba371e jne 0x10ba3726 */
  if (!C.zf) goto L_10ba3726;
  /* 10ba3720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3723 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10ba3726:;
  /* 10ba3726 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ba3729 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ba372c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ba372f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ba3732 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ba3735 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ba3738 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ba373b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10ba373e:;
  /* 10ba373e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10ba3741:;
  /* 10ba3741 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3745 jne 0x10ba3750 */
  if (!C.zf) goto L_10ba3750;
  /* 10ba3747 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba374a je 0x10ba37d9 */
  if (C.zf) goto L_10ba37d9;
L_10ba3750:;
  /* 10ba3750 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ba3753 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10ba3756 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ba3759 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ba375c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ba375f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10ba3762 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ba3765 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ba3768 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba376b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ba376e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba3771 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3774 jne 0x10ba37d9 */
  if (!C.zf) goto L_10ba37d9;
  /* 10ba3776 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10ba377a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba377d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10ba3780 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10ba3782 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10ba3786 jae 0x10ba37ad */
  if (!C.cf) goto L_10ba37ad;
  /* 10ba3788 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba378c jne 0x10ba379c */
  if (!C.zf) goto L_10ba379c;
  /* 10ba378e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10ba3793 mov ecx, edi */
  ECX = (EDI);
  /* 10ba3795 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10ba3797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba379a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10ba379c:;
  /* 10ba379c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10ba37a1 mov ecx, edi */
  ECX = (EDI);
  /* 10ba37a3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10ba37a5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10ba37a9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10ba37ab jmp 0x10ba37d6 */
  goto L_10ba37d6;
L_10ba37ad:;
  /* 10ba37ad cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba37b1 jne 0x10ba37c3 */
  if (!C.zf) goto L_10ba37c3;
  /* 10ba37b3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10ba37b6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10ba37bb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10ba37bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba37c0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10ba37c3:;
  /* 10ba37c3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10ba37c6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10ba37cb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10ba37cd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10ba37d4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10ba37d6:;
  /* 10ba37d6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10ba37d9:;
  /* 10ba37d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ba37dc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10ba37de mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10ba37e2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10ba37e4 jne 0x10ba38e4 */
  if (!C.zf) goto L_10ba38e4;
  /* 10ba37ea mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba37ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba37f1 je 0x10ba38d6 */
  if (C.zf) goto L_10ba38d6;
  /* 10ba37f7 mov ecx, dword ptr [0x10ba6984] */
  ECX = (r32((uint32_t)(0x10ba6984)));
  /* 10ba37fd mov edi, dword ptr [0x10ba5054] */
  EDI = (r32((uint32_t)(0x10ba5054)));
  /* 10ba3803 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10ba3806 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3809 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10ba380e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ba3813 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3814 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba3815 call edi */
  call_ind((uint32_t)(EDI), 0x10ba3817u);
  /* 10ba3817 mov ecx, dword ptr [0x10ba6984] */
  ECX = (r32((uint32_t)(0x10ba6984)));
  /* 10ba381d mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba3822 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ba3827 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ba3829 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10ba382c mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba3831 mov ecx, dword ptr [0x10ba6984] */
  ECX = (r32((uint32_t)(0x10ba6984)));
  /* 10ba3837 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ba383a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10ba3842 mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba3847 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ba384a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10ba384d mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba3852 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ba3855 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba3859 jne 0x10ba3864 */
  if (!C.zf) goto L_10ba3864;
  /* 10ba385b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10ba385f mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
L_10ba3864:;
  /* 10ba3864 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3868 jne 0x10ba38d6 */
  if (!C.zf) goto L_10ba38d6;
  /* 10ba386a push ebx */
  push32((uint32_t)(EBX));
  /* 10ba386b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba386d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10ba3870 call edi */
  call_ind((uint32_t)(EDI), 0x10ba3872u);
  /* 10ba3872 mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba3877 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10ba387a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba387c push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba3882 call dword ptr [0x10ba5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5050))), 0x10ba3888u);
  /* 10ba3888 mov eax, dword ptr [0x10ba6990] */
  EAX = (r32((uint32_t)(0x10ba6990)));
  /* 10ba388d mov edx, dword ptr [0x10ba6994] */
  EDX = (r32((uint32_t)(0x10ba6994)));
  /* 10ba3893 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10ba3896 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ba3899 mov ecx, eax */
  ECX = (EAX);
  /* 10ba389b mov eax, dword ptr [0x10ba698c] */
  EAX = (r32((uint32_t)(0x10ba698c)));
  /* 10ba38a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba38a2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10ba38a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba38a7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10ba38aa push ecx */
  push32((uint32_t)(ECX));
  /* 10ba38ab push eax */
  push32((uint32_t)(EAX));
  /* 10ba38ac call 0x10ba4340 */
  push32(0x10ba38b1u); f_10ba4340();
  /* 10ba38b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba38b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba38b7 dec dword ptr [0x10ba6990] */
  { uint32_t _r=(r32((uint32_t)(0x10ba6990)))-1; w32((uint32_t)(0x10ba6990), (_r)); fl_dec(_r,32); }
  /* 10ba38bd cmp eax, dword ptr [0x10ba698c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ba698c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba38c3 jbe 0x10ba38c8 */
  if ((C.cf||C.zf)) goto L_10ba38c8;
  /* 10ba38c5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10ba38c8:;
  /* 10ba38c8 mov ecx, dword ptr [0x10ba6994] */
  ECX = (r32((uint32_t)(0x10ba6994)));
  /* 10ba38ce mov dword ptr [0x10ba6988], ecx */
  w32((uint32_t)(0x10ba6988), (ECX));
  /* 10ba38d4 jmp 0x10ba38d9 */
  goto L_10ba38d9;
L_10ba38d6:;
  /* 10ba38d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ba38d9:;
  /* 10ba38d9 mov dword ptr [0x10ba698c], eax */
  w32((uint32_t)(0x10ba698c), (EAX));
  /* 10ba38de mov dword ptr [0x10ba6984], esi */
  w32((uint32_t)(0x10ba6984), (ESI));
L_10ba38e4:;
  /* 10ba38e4 pop edi */
  EDI = (pop32());
  /* 10ba38e5 pop esi */
  ESI = (pop32());
  /* 10ba38e6 pop ebx */
  EBX = (pop32());
  /* 10ba38e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba38e8 ret  */
  ESPCHK(0x10ba35beu, _esp0);
  ESP += 4; return;
}

/* FUN_100038e9 @ 0x10ba38e9 (777 bytes, 275 insns) */
void f_10ba38e9(void) {
  FTRACE(0x10ba38e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba38e9 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba38ea mov ebp, esp */
  EBP = (ESP);
  /* 10ba38ec sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba38ef mov eax, dword ptr [0x10ba6990] */
  EAX = (r32((uint32_t)(0x10ba6990)));
  /* 10ba38f4 mov edx, dword ptr [0x10ba6994] */
  EDX = (r32((uint32_t)(0x10ba6994)));
  /* 10ba38fa push ebx */
  push32((uint32_t)(EBX));
  /* 10ba38fb push esi */
  push32((uint32_t)(ESI));
  /* 10ba38fc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10ba38ff push edi */
  push32((uint32_t)(EDI));
  /* 10ba3900 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10ba3903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3906 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10ba3909 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10ba390c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10ba390f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ba3912 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ba3915 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3916 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3919 jge 0x10ba3929 */
  if ((C.sf==C.of)) goto L_10ba3929;
  /* 10ba391b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10ba391e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10ba3920 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10ba3924 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10ba3927 jmp 0x10ba3939 */
  goto L_10ba3939;
L_10ba3929:;
  /* 10ba3929 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba392c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba392f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10ba3931 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ba3933 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10ba3936 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ba3939:;
  /* 10ba3939 mov eax, dword ptr [0x10ba6988] */
  EAX = (r32((uint32_t)(0x10ba6988)));
  /* 10ba393e mov ebx, eax */
  EBX = (EAX);
  /* 10ba3940 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3942 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba3945 jae 0x10ba3960 */
  if (!C.cf) goto L_10ba3960;
L_10ba3947:;
  /* 10ba3947 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10ba394a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10ba394c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10ba394f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3951 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3953 jne 0x10ba3960 */
  if (!C.zf) goto L_10ba3960;
  /* 10ba3955 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3958 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba395b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba395e jb 0x10ba3947 */
  if (C.cf) goto L_10ba3947;
L_10ba3960:;
  /* 10ba3960 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3963 jne 0x10ba39de */
  if (!C.zf) goto L_10ba39de;
  /* 10ba3965 mov ebx, edx */
  EBX = (EDX);
L_10ba3967:;
  /* 10ba3967 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3969 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba396c jae 0x10ba3983 */
  if (!C.cf) goto L_10ba3983;
  /* 10ba396e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10ba3971 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10ba3973 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3976 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3978 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ba397a jne 0x10ba3981 */
  if (!C.zf) goto L_10ba3981;
  /* 10ba397c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba397f jmp 0x10ba3967 */
  goto L_10ba3967;
L_10ba3981:;
  /* 10ba3981 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10ba3983:;
  /* 10ba3983 jne 0x10ba39de */
  if (!C.zf) goto L_10ba39de;
L_10ba3985:;
  /* 10ba3985 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3988 jae 0x10ba399b */
  if (!C.cf) goto L_10ba399b;
  /* 10ba398a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba398e jne 0x10ba3998 */
  if (!C.zf) goto L_10ba3998;
  /* 10ba3990 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3993 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba3996 jmp 0x10ba3985 */
  goto L_10ba3985;
L_10ba3998:;
  /* 10ba3998 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10ba399b:;
  /* 10ba399b jne 0x10ba39c3 */
  if (!C.zf) goto L_10ba39c3;
  /* 10ba399d mov ebx, edx */
  EBX = (EDX);
L_10ba399f:;
  /* 10ba399f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba39a1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba39a4 jae 0x10ba39b3 */
  if (!C.cf) goto L_10ba39b3;
  /* 10ba39a6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba39aa jne 0x10ba39b1 */
  if (!C.zf) goto L_10ba39b1;
  /* 10ba39ac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba39af jmp 0x10ba399f */
  goto L_10ba399f;
L_10ba39b1:;
  /* 10ba39b1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10ba39b3:;
  /* 10ba39b3 jne 0x10ba39c3 */
  if (!C.zf) goto L_10ba39c3;
  /* 10ba39b5 call 0x10ba3bf2 */
  push32(0x10ba39bau); f_10ba3bf2();
  /* 10ba39ba mov ebx, eax */
  EBX = (EAX);
  /* 10ba39bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10ba39be mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10ba39c1 je 0x10ba39d7 */
  if (C.zf) goto L_10ba39d7;
L_10ba39c3:;
  /* 10ba39c3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba39c4 call 0x10ba3ca3 */
  push32(0x10ba39c9u); f_10ba3ca3();
  /* 10ba39c9 pop ecx */
  ECX = (pop32());
  /* 10ba39ca mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10ba39cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ba39cf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10ba39d2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba39d5 jne 0x10ba39de */
  if (!C.zf) goto L_10ba39de;
L_10ba39d7:;
  /* 10ba39d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba39d9 jmp 0x10ba3bed */
  goto L_10ba3bed;
L_10ba39de:;
  /* 10ba39de mov dword ptr [0x10ba6988], ebx */
  w32((uint32_t)(0x10ba6988), (EBX));
  /* 10ba39e4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10ba39e7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10ba39e9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba39ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ba39ef je 0x10ba3a05 */
  if (C.zf) goto L_10ba3a05;
  /* 10ba39f1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10ba39f8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10ba39fc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10ba39ff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3a01 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3a03 jne 0x10ba3a3c */
  if (!C.zf) goto L_10ba3a3c;
L_10ba3a05:;
  /* 10ba3a05 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10ba3a0b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10ba3a0e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3a11 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10ba3a14 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba3a18 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10ba3a1b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3a1d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ba3a20 jne 0x10ba3a39 */
  if (!C.zf) goto L_10ba3a39;
L_10ba3a22:;
  /* 10ba3a22 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10ba3a28 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10ba3a2b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3a2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3a31 mov edi, esi */
  EDI = (ESI);
  /* 10ba3a33 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3a35 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3a37 je 0x10ba3a22 */
  if (C.zf) goto L_10ba3a22;
L_10ba3a39:;
  /* 10ba3a39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10ba3a3c:;
  /* 10ba3a3c mov ecx, edx */
  ECX = (EDX);
  /* 10ba3a3e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3a40 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ba3a46 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ba3a4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ba3a50 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10ba3a54 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3a56 jne 0x10ba3a65 */
  if (!C.zf) goto L_10ba3a65;
  /* 10ba3a58 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10ba3a5f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ba3a61 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3a64 pop edi */
  EDI = (pop32());
L_10ba3a65:;
  /* 10ba3a65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ba3a67 jl 0x10ba3a6e */
  if ((C.sf!=C.of)) goto L_10ba3a6e;
  /* 10ba3a69 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ba3a6b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba3a6c jmp 0x10ba3a65 */
  goto L_10ba3a65;
L_10ba3a6e:;
  /* 10ba3a6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ba3a71 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10ba3a75 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10ba3a77 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba3a7a mov esi, ecx */
  ESI = (ECX);
  /* 10ba3a7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ba3a7f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10ba3a82 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ba3a83 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3a86 jle 0x10ba3a8b */
  if ((C.zf||C.sf!=C.of)) goto L_10ba3a8b;
  /* 10ba3a88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ba3a8a pop esi */
  ESI = (pop32());
L_10ba3a8b:;
  /* 10ba3a8b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3a8d je 0x10ba3ba0 */
  if (C.zf) goto L_10ba3ba0;
  /* 10ba3a93 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba3a96 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3a99 jne 0x10ba3afc */
  if (!C.zf) goto L_10ba3afc;
  /* 10ba3a9b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3a9e jge 0x10ba3acb */
  if ((C.sf==C.of)) goto L_10ba3acb;
  /* 10ba3aa0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10ba3aa5 mov ecx, edi */
  ECX = (EDI);
  /* 10ba3aa7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10ba3aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3aac lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10ba3ab0 not ebx */
  EBX = (~(EBX));
  /* 10ba3ab2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10ba3ab5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10ba3ab9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10ba3abd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10ba3abf jne 0x10ba3af9 */
  if (!C.zf) goto L_10ba3af9;
  /* 10ba3ac1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3ac4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ba3ac7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10ba3ac9 jmp 0x10ba3afc */
  goto L_10ba3afc;
L_10ba3acb:;
  /* 10ba3acb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10ba3ace mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10ba3ad3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10ba3ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3ad8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10ba3adc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10ba3ae3 not ebx */
  EBX = (~(EBX));
  /* 10ba3ae5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10ba3ae7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10ba3ae9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10ba3aec jne 0x10ba3af9 */
  if (!C.zf) goto L_10ba3af9;
  /* 10ba3aee mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3af1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ba3af4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10ba3af7 jmp 0x10ba3afc */
  goto L_10ba3afc;
L_10ba3af9:;
  /* 10ba3af9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10ba3afc:;
  /* 10ba3afc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ba3aff mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba3b02 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3b06 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10ba3b09 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba3b0c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10ba3b0f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10ba3b12 je 0x10ba3bac */
  if (C.zf) goto L_10ba3bac;
  /* 10ba3b18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ba3b1b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10ba3b1f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10ba3b22 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10ba3b25 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ba3b28 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ba3b2b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba3b2e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ba3b31 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ba3b34 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3b37 jne 0x10ba3b9d */
  if (!C.zf) goto L_10ba3b9d;
  /* 10ba3b39 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10ba3b3d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3b40 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10ba3b43 jge 0x10ba3b6e */
  if ((C.sf==C.of)) goto L_10ba3b6e;
  /* 10ba3b45 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10ba3b47 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba3b4b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10ba3b4f jne 0x10ba3b5c */
  if (!C.zf) goto L_10ba3b5c;
  /* 10ba3b51 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10ba3b56 mov ecx, esi */
  ECX = (ESI);
  /* 10ba3b58 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10ba3b5a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10ba3b5c:;
  /* 10ba3b5c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10ba3b61 mov ecx, esi */
  ECX = (ESI);
  /* 10ba3b63 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10ba3b65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3b68 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10ba3b6c jmp 0x10ba3b9d */
  goto L_10ba3b9d;
L_10ba3b6e:;
  /* 10ba3b6e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10ba3b70 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba3b74 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10ba3b78 jne 0x10ba3b87 */
  if (!C.zf) goto L_10ba3b87;
  /* 10ba3b7a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10ba3b7d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10ba3b82 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10ba3b84 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10ba3b87:;
  /* 10ba3b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3b8a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10ba3b91 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10ba3b94 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10ba3b99 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10ba3b9b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10ba3b9d:;
  /* 10ba3b9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10ba3ba0:;
  /* 10ba3ba0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ba3ba2 je 0x10ba3baf */
  if (C.zf) goto L_10ba3baf;
  /* 10ba3ba4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ba3ba6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10ba3baa jmp 0x10ba3baf */
  goto L_10ba3baf;
L_10ba3bac:;
  /* 10ba3bac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10ba3baf:;
  /* 10ba3baf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10ba3bb2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3bb4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10ba3bb7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ba3bb9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10ba3bbd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10ba3bc0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10ba3bc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ba3bc4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10ba3bc7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10ba3bc9 jne 0x10ba3be5 */
  if (!C.zf) goto L_10ba3be5;
  /* 10ba3bcb cmp ebx, dword ptr [0x10ba698c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10ba698c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3bd1 jne 0x10ba3be5 */
  if (!C.zf) goto L_10ba3be5;
  /* 10ba3bd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3bd6 cmp ecx, dword ptr [0x10ba6984] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ba6984))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3bdc jne 0x10ba3be5 */
  if (!C.zf) goto L_10ba3be5;
  /* 10ba3bde and dword ptr [0x10ba698c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10ba698c)))&(0x0u); w32((uint32_t)(0x10ba698c), (_r)); fl_logic(_r,32); }
L_10ba3be5:;
  /* 10ba3be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3be8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ba3bea lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10ba3bed:;
  /* 10ba3bed pop edi */
  EDI = (pop32());
  /* 10ba3bee pop esi */
  ESI = (pop32());
  /* 10ba3bef pop ebx */
  EBX = (pop32());
  /* 10ba3bf0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba3bf1 ret  */
  ESPCHK(0x10ba38e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf2 @ 0x10ba3bf2 (177 bytes, 53 insns) */
void f_10ba3bf2(void) {
  FTRACE(0x10ba3bf2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3bf2 mov eax, dword ptr [0x10ba6990] */
  EAX = (r32((uint32_t)(0x10ba6990)));
  /* 10ba3bf7 mov ecx, dword ptr [0x10ba6980] */
  ECX = (r32((uint32_t)(0x10ba6980)));
  /* 10ba3bfd push esi */
  push32((uint32_t)(ESI));
  /* 10ba3bfe push edi */
  push32((uint32_t)(EDI));
  /* 10ba3bff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3c01 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3c03 jne 0x10ba3c35 */
  if (!C.zf) goto L_10ba3c35;
  /* 10ba3c05 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10ba3c09 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ba3c0c push eax */
  push32((uint32_t)(EAX));
  /* 10ba3c0d push dword ptr [0x10ba6994] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6994))));
  /* 10ba3c13 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3c14 push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba3c1a call dword ptr [0x10ba5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5028))), 0x10ba3c20u);
  /* 10ba3c20 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3c22 je 0x10ba3c85 */
  if (C.zf) goto L_10ba3c85;
  /* 10ba3c24 add dword ptr [0x10ba6980], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10ba6980))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10ba6980), (_r)); fl_add(_a,_b,_r,32); }
  /* 10ba3c2b mov dword ptr [0x10ba6994], eax */
  w32((uint32_t)(0x10ba6994), (EAX));
  /* 10ba3c30 mov eax, dword ptr [0x10ba6990] */
  EAX = (r32((uint32_t)(0x10ba6990)));
L_10ba3c35:;
  /* 10ba3c35 mov ecx, dword ptr [0x10ba6994] */
  ECX = (r32((uint32_t)(0x10ba6994)));
  /* 10ba3c3b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10ba3c40 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ba3c42 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10ba3c45 push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba3c4b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10ba3c4e call dword ptr [0x10ba503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba503c))), 0x10ba3c54u);
  /* 10ba3c54 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3c56 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10ba3c59 je 0x10ba3c85 */
  if (C.zf) goto L_10ba3c85;
  /* 10ba3c5b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba3c5d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10ba3c62 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10ba3c67 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3c68 call dword ptr [0x10ba502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba502c))), 0x10ba3c6eu);
  /* 10ba3c6e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3c70 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10ba3c73 jne 0x10ba3c89 */
  if (!C.zf) goto L_10ba3c89;
  /* 10ba3c75 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10ba3c78 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3c79 push dword ptr [0x10ba6bc8] */
  push32((uint32_t)(r32((uint32_t)(0x10ba6bc8))));
  /* 10ba3c7f call dword ptr [0x10ba5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5050))), 0x10ba3c85u);
L_10ba3c85:;
  /* 10ba3c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3c87 jmp 0x10ba3ca0 */
  goto L_10ba3ca0;
L_10ba3c89:;
  /* 10ba3c89 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10ba3c8d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10ba3c8f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10ba3c92 inc dword ptr [0x10ba6990] */
  { uint32_t _r=(r32((uint32_t)(0x10ba6990)))+1; w32((uint32_t)(0x10ba6990), (_r)); fl_inc(_r,32); }
  /* 10ba3c98 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10ba3c9b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10ba3c9e mov eax, esi */
  EAX = (ESI);
L_10ba3ca0:;
  /* 10ba3ca0 pop edi */
  EDI = (pop32());
  /* 10ba3ca1 pop esi */
  ESI = (pop32());
  /* 10ba3ca2 ret  */
  ESPCHK(0x10ba3bf2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca3 @ 0x10ba3ca3 (251 bytes, 85 insns) */
void f_10ba3ca3(void) {
  FTRACE(0x10ba3ca3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3ca3 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba3ca4 mov ebp, esp */
  EBP = (ESP);
  /* 10ba3ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba3ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3caa push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3cab push esi */
  push32((uint32_t)(ESI));
  /* 10ba3cac push edi */
  push32((uint32_t)(EDI));
  /* 10ba3cad mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10ba3cb0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ba3cb3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10ba3cb5:;
  /* 10ba3cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3cb7 jl 0x10ba3cbe */
  if ((C.sf!=C.of)) goto L_10ba3cbe;
  /* 10ba3cb9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ba3cbb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10ba3cbc jmp 0x10ba3cb5 */
  goto L_10ba3cb5;
L_10ba3cbe:;
  /* 10ba3cbe mov eax, ebx */
  EAX = (EBX);
  /* 10ba3cc0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ba3cc2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ba3cc8 pop edx */
  EDX = (pop32());
  /* 10ba3cc9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10ba3cd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ba3cd3:;
  /* 10ba3cd3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10ba3cd6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10ba3cd9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3cdc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10ba3cdd jne 0x10ba3cd3 */
  if (!C.zf) goto L_10ba3cd3;
  /* 10ba3cdf mov edi, ebx */
  EDI = (EBX);
  /* 10ba3ce1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ba3ce3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10ba3ce6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3ce9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ba3cee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ba3cf3 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3cf4 call dword ptr [0x10ba502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba502c))), 0x10ba3cfau);
  /* 10ba3cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3cfc jne 0x10ba3d06 */
  if (!C.zf) goto L_10ba3d06;
  /* 10ba3cfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3d01 jmp 0x10ba3d99 */
  goto L_10ba3d99;
L_10ba3d06:;
  /* 10ba3d06 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10ba3d0c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3d0e ja 0x10ba3d4c */
  if ((!C.cf&&!C.zf)) goto L_10ba3d4c;
  /* 10ba3d10 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10ba3d13:;
  /* 10ba3d13 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10ba3d17 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10ba3d1e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10ba3d24 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10ba3d2b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ba3d2d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10ba3d33 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ba3d36 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10ba3d40 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3d45 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10ba3d48 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3d4a jbe 0x10ba3d13 */
  if ((C.cf||C.zf)) goto L_10ba3d13;
L_10ba3d4c:;
  /* 10ba3d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ba3d4f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10ba3d52 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba3d59 pop edi */
  EDI = (pop32());
  /* 10ba3d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ba3d5d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ba3d60 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10ba3d63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ba3d66 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ba3d69 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10ba3d6e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10ba3d75 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10ba3d78 mov cl, al */
  CL = (AL);
  /* 10ba3d7a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10ba3d7c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba3d7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba3d81 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10ba3d84 jne 0x10ba3d89 */
  if (!C.zf) goto L_10ba3d89;
  /* 10ba3d86 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10ba3d89:;
  /* 10ba3d89 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ba3d8e mov ecx, ebx */
  ECX = (EBX);
  /* 10ba3d90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ba3d92 not edx */
  EDX = (~(EDX));
  /* 10ba3d94 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10ba3d97 mov eax, ebx */
  EAX = (EBX);
L_10ba3d99:;
  /* 10ba3d99 pop edi */
  EDI = (pop32());
  /* 10ba3d9a pop esi */
  ESI = (pop32());
  /* 10ba3d9b pop ebx */
  EBX = (pop32());
  /* 10ba3d9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba3d9d ret  */
  ESPCHK(0x10ba3ca3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d9e @ 0x10ba3d9e (137 bytes, 50 insns) */
void f_10ba3d9e(void) {
  FTRACE(0x10ba3d9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3d9e push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3d9f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba3da1 cmp dword ptr [0x10ba6944], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10ba6944))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3da7 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3da8 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3da9 jne 0x10ba3ded */
  if (!C.zf) goto L_10ba3ded;
  /* 10ba3dab push 0x10ba5470 */
  push32((uint32_t)(0x10ba5470u));
  /* 10ba3db0 call dword ptr [0x10ba5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5020))), 0x10ba3db6u);
  /* 10ba3db6 mov edi, eax */
  EDI = (EAX);
  /* 10ba3db8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3dba je 0x10ba3e23 */
  if (C.zf) goto L_10ba3e23;
  /* 10ba3dbc mov esi, dword ptr [0x10ba5024] */
  ESI = (r32((uint32_t)(0x10ba5024)));
  /* 10ba3dc2 push 0x10ba5464 */
  push32((uint32_t)(0x10ba5464u));
  /* 10ba3dc7 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3dc8 call esi */
  call_ind((uint32_t)(ESI), 0x10ba3dcau);
  /* 10ba3dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3dcc mov dword ptr [0x10ba6944], eax */
  w32((uint32_t)(0x10ba6944), (EAX));
  /* 10ba3dd1 je 0x10ba3e23 */
  if (C.zf) goto L_10ba3e23;
  /* 10ba3dd3 push 0x10ba5454 */
  push32((uint32_t)(0x10ba5454u));
  /* 10ba3dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3dd9 call esi */
  call_ind((uint32_t)(ESI), 0x10ba3ddbu);
  /* 10ba3ddb push 0x10ba5440 */
  push32((uint32_t)(0x10ba5440u));
  /* 10ba3de0 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3de1 mov dword ptr [0x10ba6948], eax */
  w32((uint32_t)(0x10ba6948), (EAX));
  /* 10ba3de6 call esi */
  call_ind((uint32_t)(ESI), 0x10ba3de8u);
  /* 10ba3de8 mov dword ptr [0x10ba694c], eax */
  w32((uint32_t)(0x10ba694c), (EAX));
L_10ba3ded:;
  /* 10ba3ded mov eax, dword ptr [0x10ba6948] */
  EAX = (r32((uint32_t)(0x10ba6948)));
  /* 10ba3df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3df4 je 0x10ba3e0c */
  if (C.zf) goto L_10ba3e0c;
  /* 10ba3df6 call eax */
  call_ind((uint32_t)(EAX), 0x10ba3df8u);
  /* 10ba3df8 mov ebx, eax */
  EBX = (EAX);
  /* 10ba3dfa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10ba3dfc je 0x10ba3e0c */
  if (C.zf) goto L_10ba3e0c;
  /* 10ba3dfe mov eax, dword ptr [0x10ba694c] */
  EAX = (r32((uint32_t)(0x10ba694c)));
  /* 10ba3e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3e05 je 0x10ba3e0c */
  if (C.zf) goto L_10ba3e0c;
  /* 10ba3e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3e08 call eax */
  call_ind((uint32_t)(EAX), 0x10ba3e0au);
  /* 10ba3e0a mov ebx, eax */
  EBX = (EAX);
L_10ba3e0c:;
  /* 10ba3e0c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10ba3e10 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10ba3e14 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10ba3e18 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3e19 call dword ptr [0x10ba6944] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba6944))), 0x10ba3e1fu);
L_10ba3e1f:;
  /* 10ba3e1f pop edi */
  EDI = (pop32());
  /* 10ba3e20 pop esi */
  ESI = (pop32());
  /* 10ba3e21 pop ebx */
  EBX = (pop32());
  /* 10ba3e22 ret  */
  ESPCHK(0x10ba3d9eu, _esp0);
  ESP += 4; return;
L_10ba3e23:;
  /* 10ba3e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3e25 jmp 0x10ba3e1f */
  goto L_10ba3e1f;
}

/* _strncpy @ 0x10ba3e30 (254 bytes, 109 insns) */
void f_10ba3e30(void) {
  FTRACE(0x10ba3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3e30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ba3e34 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3e35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ba3e37 je 0x10ba3eb3 */
  if (C.zf) goto L_10ba3eb3;
  /* 10ba3e39 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3e3a push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3e3b mov ebx, ecx */
  EBX = (ECX);
  /* 10ba3e3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10ba3e41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10ba3e47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10ba3e4b jne 0x10ba3e54 */
  if (!C.zf) goto L_10ba3e54;
  /* 10ba3e4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3e50 jne 0x10ba3ec1 */
  if (!C.zf) goto L_10ba3ec1;
  /* 10ba3e52 jmp 0x10ba3e75 */
  goto L_10ba3e75;
L_10ba3e54:;
  /* 10ba3e54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba3e56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba3e57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3e59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba3e5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3e5b je 0x10ba3e82 */
  if (C.zf) goto L_10ba3e82;
  /* 10ba3e5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba3e5f je 0x10ba3e8a */
  if (C.zf) goto L_10ba3e8a;
  /* 10ba3e61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10ba3e67 jne 0x10ba3e54 */
  if (!C.zf) goto L_10ba3e54;
  /* 10ba3e69 mov ebx, ecx */
  EBX = (ECX);
  /* 10ba3e6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3e6e jne 0x10ba3ec1 */
  if (!C.zf) goto L_10ba3ec1;
L_10ba3e70:;
  /* 10ba3e70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10ba3e73 je 0x10ba3e82 */
  if (C.zf) goto L_10ba3e82;
L_10ba3e75:;
  /* 10ba3e75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba3e77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba3e78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3e7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba3e7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ba3e7d je 0x10ba3eae */
  if (C.zf) goto L_10ba3eae;
  /* 10ba3e7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ba3e80 jne 0x10ba3e75 */
  if (!C.zf) goto L_10ba3e75;
L_10ba3e82:;
  /* 10ba3e82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ba3e86 pop ebx */
  EBX = (pop32());
  /* 10ba3e87 pop esi */
  ESI = (pop32());
  /* 10ba3e88 pop edi */
  EDI = (pop32());
  /* 10ba3e89 ret  */
  ESPCHK(0x10ba3e30u, _esp0);
  ESP += 4; return;
L_10ba3e8a:;
  /* 10ba3e8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ba3e90 je 0x10ba3ea4 */
  if (C.zf) goto L_10ba3ea4;
L_10ba3e92:;
  /* 10ba3e92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3e94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba3e95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3e96 je 0x10ba3f26 */
  if (C.zf) goto L_10ba3f26;
  /* 10ba3e9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ba3ea2 jne 0x10ba3e92 */
  if (!C.zf) goto L_10ba3e92;
L_10ba3ea4:;
  /* 10ba3ea4 mov ebx, ecx */
  EBX = (ECX);
  /* 10ba3ea6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3ea9 jne 0x10ba3f17 */
  if (!C.zf) goto L_10ba3f17;
L_10ba3eab:;
  /* 10ba3eab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3ead inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10ba3eae:;
  /* 10ba3eae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ba3eaf jne 0x10ba3eab */
  if (!C.zf) goto L_10ba3eab;
  /* 10ba3eb1 pop ebx */
  EBX = (pop32());
  /* 10ba3eb2 pop esi */
  ESI = (pop32());
L_10ba3eb3:;
  /* 10ba3eb3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba3eb7 pop edi */
  EDI = (pop32());
  /* 10ba3eb8 ret  */
  ESPCHK(0x10ba3e30u, _esp0);
  ESP += 4; return;
L_10ba3eb9:;
  /* 10ba3eb9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ba3ebb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3ebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3ebf je 0x10ba3e70 */
  if (C.zf) goto L_10ba3e70;
L_10ba3ec1:;
  /* 10ba3ec1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ba3ec6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ba3ec8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3eca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3ecd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3ecf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10ba3ed1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3ed4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ba3ed9 je 0x10ba3eb9 */
  if (C.zf) goto L_10ba3eb9;
  /* 10ba3edb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ba3edd je 0x10ba3f0b */
  if (C.zf) goto L_10ba3f0b;
  /* 10ba3edf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10ba3ee1 je 0x10ba3f01 */
  if (C.zf) goto L_10ba3f01;
  /* 10ba3ee3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ba3ee9 je 0x10ba3ef7 */
  if (C.zf) goto L_10ba3ef7;
  /* 10ba3eeb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ba3ef1 jne 0x10ba3eb9 */
  if (!C.zf) goto L_10ba3eb9;
  /* 10ba3ef3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ba3ef5 jmp 0x10ba3f0f */
  goto L_10ba3f0f;
L_10ba3ef7:;
  /* 10ba3ef7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3efd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ba3eff jmp 0x10ba3f0f */
  goto L_10ba3f0f;
L_10ba3f01:;
  /* 10ba3f01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3f07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ba3f09 jmp 0x10ba3f0f */
  goto L_10ba3f0f;
L_10ba3f0b:;
  /* 10ba3f0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3f0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10ba3f0f:;
  /* 10ba3f0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3f12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3f14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3f15 je 0x10ba3f21 */
  if (C.zf) goto L_10ba3f21;
L_10ba3f17:;
  /* 10ba3f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ba3f19:;
  /* 10ba3f19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10ba3f1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3f1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3f1f jne 0x10ba3f19 */
  if (!C.zf) goto L_10ba3f19;
L_10ba3f21:;
  /* 10ba3f21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10ba3f24 jne 0x10ba3eab */
  if (!C.zf) goto L_10ba3eab;
L_10ba3f26:;
  /* 10ba3f26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ba3f2a pop ebx */
  EBX = (pop32());
  /* 10ba3f2b pop esi */
  ESI = (pop32());
  /* 10ba3f2c pop edi */
  EDI = (pop32());
  /* 10ba3f2d ret  */
  ESPCHK(0x10ba3e30u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10ba3f30 (88 bytes, 40 insns) */
void f_10ba3f30(void) {
  FTRACE(0x10ba3f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3f30 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ba3f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba3f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ba3f3a je 0x10ba3f83 */
  if (C.zf) goto L_10ba3f83;
  /* 10ba3f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3f3e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ba3f42 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3f43 mov edi, ecx */
  EDI = (ECX);
  /* 10ba3f45 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3f48 jb 0x10ba3f77 */
  if (C.cf) goto L_10ba3f77;
  /* 10ba3f4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ba3f4c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ba3f4f je 0x10ba3f59 */
  if (C.zf) goto L_10ba3f59;
  /* 10ba3f51 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10ba3f53:;
  /* 10ba3f53 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3f55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba3f56 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba3f57 jne 0x10ba3f53 */
  if (!C.zf) goto L_10ba3f53;
L_10ba3f59:;
  /* 10ba3f59 mov ecx, eax */
  ECX = (EAX);
  /* 10ba3f5b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ba3f5e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3f60 mov ecx, eax */
  ECX = (EAX);
  /* 10ba3f62 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ba3f65 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba3f67 mov ecx, edx */
  ECX = (EDX);
  /* 10ba3f69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ba3f6c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba3f6f je 0x10ba3f77 */
  if (C.zf) goto L_10ba3f77;
  /* 10ba3f71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ba3f73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ba3f75 je 0x10ba3f7d */
  if (C.zf) goto L_10ba3f7d;
L_10ba3f77:;
  /* 10ba3f77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba3f79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba3f7a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10ba3f7b jne 0x10ba3f77 */
  if (!C.zf) goto L_10ba3f77;
L_10ba3f7d:;
  /* 10ba3f7d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba3f81 pop edi */
  EDI = (pop32());
  /* 10ba3f82 ret  */
  ESPCHK(0x10ba3f30u, _esp0);
  ESP += 4; return;
L_10ba3f83:;
  /* 10ba3f83 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba3f87 ret  */
  ESPCHK(0x10ba3f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f88 @ 0x10ba3f88 (27 bytes, 13 insns) */
void f_10ba3f88(void) {
  FTRACE(0x10ba3f88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3f88 mov eax, dword ptr [0x10ba6950] */
  EAX = (r32((uint32_t)(0x10ba6950)));
  /* 10ba3f8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3f8f je 0x10ba3fa0 */
  if (C.zf) goto L_10ba3fa0;
  /* 10ba3f91 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10ba3f95 call eax */
  call_ind((uint32_t)(EAX), 0x10ba3f97u);
  /* 10ba3f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3f99 pop ecx */
  ECX = (pop32());
  /* 10ba3f9a je 0x10ba3fa0 */
  if (C.zf) goto L_10ba3fa0;
  /* 10ba3f9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba3f9e pop eax */
  EAX = (pop32());
  /* 10ba3f9f ret  */
  ESPCHK(0x10ba3f88u, _esp0);
  ESP += 4; return;
L_10ba3fa0:;
  /* 10ba3fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ba3fa2 ret  */
  ESPCHK(0x10ba3f88u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa3 @ 0x10ba3fa3 (511 bytes, 193 insns) */
void f_10ba3fa3(void) {
  FTRACE(0x10ba3fa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba3fa3 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba3fa4 mov ebp, esp */
  EBP = (ESP);
  /* 10ba3fa6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ba3fa8 push 0x10ba5488 */
  push32((uint32_t)(0x10ba5488u));
  /* 10ba3fad push 0x10ba4770 */
  push32((uint32_t)(0x10ba4770u));
  /* 10ba3fb2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ba3fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10ba3fb9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ba3fc0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba3fc3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3fc4 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3fc5 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3fc6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ba3fc9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba3fcb cmp dword ptr [0x10ba6978], edi */
  { uint32_t _a=(r32((uint32_t)(0x10ba6978))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba3fd1 jne 0x10ba4019 */
  if (!C.zf) goto L_10ba4019;
  /* 10ba3fd3 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3fd4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3fd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba3fd7 pop ebx */
  EBX = (pop32());
  /* 10ba3fd8 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3fd9 push 0x10ba5480 */
  push32((uint32_t)(0x10ba5480u));
  /* 10ba3fde mov esi, 0x100 */
  ESI = (0x100u);
  /* 10ba3fe3 push esi */
  push32((uint32_t)(ESI));
  /* 10ba3fe4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3fe5 call dword ptr [0x10ba5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5014))), 0x10ba3febu);
  /* 10ba3feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba3fed je 0x10ba3ff7 */
  if (C.zf) goto L_10ba3ff7;
  /* 10ba3fef mov dword ptr [0x10ba6978], ebx */
  w32((uint32_t)(0x10ba6978), (EBX));
  /* 10ba3ff5 jmp 0x10ba4019 */
  goto L_10ba4019;
L_10ba3ff7:;
  /* 10ba3ff7 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3ff8 push edi */
  push32((uint32_t)(EDI));
  /* 10ba3ff9 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba3ffa push 0x10ba547c */
  push32((uint32_t)(0x10ba547cu));
  /* 10ba3fff push esi */
  push32((uint32_t)(ESI));
  /* 10ba4000 push edi */
  push32((uint32_t)(EDI));
  /* 10ba4001 call dword ptr [0x10ba5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5018))), 0x10ba4007u);
  /* 10ba4007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba4009 je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba400f mov dword ptr [0x10ba6978], 2 */
  w32((uint32_t)(0x10ba6978), (0x2u));
L_10ba4019:;
  /* 10ba4019 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba401c jle 0x10ba402e */
  if ((C.zf||C.sf!=C.of)) goto L_10ba402e;
  /* 10ba401e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10ba4021 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba4024 call 0x10ba41c7 */
  push32(0x10ba4029u); f_10ba41c7();
  /* 10ba4029 pop ecx */
  ECX = (pop32());
  /* 10ba402a pop ecx */
  ECX = (pop32());
  /* 10ba402b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ba402e:;
  /* 10ba402e mov eax, dword ptr [0x10ba6978] */
  EAX = (r32((uint32_t)(0x10ba6978)));
  /* 10ba4033 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4036 jne 0x10ba4055 */
  if (!C.zf) goto L_10ba4055;
  /* 10ba4038 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10ba403b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10ba403e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10ba4041 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba4044 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba4047 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba404a call dword ptr [0x10ba5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5018))), 0x10ba4050u);
  /* 10ba4050 jmp 0x10ba4133 */
  goto L_10ba4133;
L_10ba4055:;
  /* 10ba4055 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4058 jne 0x10ba4131 */
  if (!C.zf) goto L_10ba4131;
  /* 10ba405e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4061 jne 0x10ba406b */
  if (!C.zf) goto L_10ba406b;
  /* 10ba4063 mov eax, dword ptr [0x10ba6970] */
  EAX = (r32((uint32_t)(0x10ba6970)));
  /* 10ba4068 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10ba406b:;
  /* 10ba406b push edi */
  push32((uint32_t)(EDI));
  /* 10ba406c push edi */
  push32((uint32_t)(EDI));
  /* 10ba406d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10ba4070 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba4073 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ba4076 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ba4078 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba407a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10ba407d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba407e push eax */
  push32((uint32_t)(EAX));
  /* 10ba407f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10ba4082 call dword ptr [0x10ba501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba501c))), 0x10ba4088u);
  /* 10ba4088 mov ebx, eax */
  EBX = (EAX);
  /* 10ba408a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10ba408d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba408f je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba4095 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10ba4098 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10ba409b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba409e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ba40a0 call 0x10ba4850 */
  push32(0x10ba40a5u); f_10ba4850();
  /* 10ba40a5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ba40a8 mov eax, esp */
  EAX = (ESP);
  /* 10ba40aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ba40ad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba40b1 jmp 0x10ba40c6 */
  goto L_10ba40c6;
  /* 10ba40b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba40b5 pop eax */
  EAX = (pop32());
  /* 10ba40b6 ret  */
  ESPCHK(0x10ba3fa3u, _esp0);
  ESP += 4; return;
  /* 10ba40b7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ba40ba xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba40bc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10ba40bf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba40c3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10ba40c6:;
  /* 10ba40c6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba40c9 je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba40cb push ebx */
  push32((uint32_t)(EBX));
  /* 10ba40cc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10ba40cf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10ba40d2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba40d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba40d7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10ba40da call dword ptr [0x10ba501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba501c))), 0x10ba40e0u);
  /* 10ba40e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba40e2 je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba40e4 push edi */
  push32((uint32_t)(EDI));
  /* 10ba40e5 push edi */
  push32((uint32_t)(EDI));
  /* 10ba40e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba40e7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10ba40ea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba40ed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba40f0 call dword ptr [0x10ba5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5014))), 0x10ba40f6u);
  /* 10ba40f6 mov esi, eax */
  ESI = (EAX);
  /* 10ba40f8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10ba40fb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba40fd je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba40ff test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10ba4103 je 0x10ba4145 */
  if (C.zf) goto L_10ba4145;
  /* 10ba4105 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4108 je 0x10ba41c0 */
  if (C.zf) goto L_10ba41c0;
  /* 10ba410e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4111 jg 0x10ba4131 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ba4131;
  /* 10ba4113 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10ba4116 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10ba4119 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba411a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10ba411d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba4120 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba4123 call dword ptr [0x10ba5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5014))), 0x10ba4129u);
  /* 10ba4129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba412b jne 0x10ba41c0 */
  if (!C.zf) goto L_10ba41c0;
L_10ba4131:;
  /* 10ba4131 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ba4133:;
  /* 10ba4133 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10ba4136 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ba4139 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ba4140 pop edi */
  EDI = (pop32());
  /* 10ba4141 pop esi */
  ESI = (pop32());
  /* 10ba4142 pop ebx */
  EBX = (pop32());
  /* 10ba4143 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba4144 ret  */
  ESPCHK(0x10ba3fa3u, _esp0);
  ESP += 4; return;
L_10ba4145:;
  /* 10ba4145 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ba414c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10ba414f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba4152 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ba4154 call 0x10ba4850 */
  push32(0x10ba4159u); f_10ba4850();
  /* 10ba4159 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ba415c mov ebx, esp */
  EBX = (ESP);
  /* 10ba415e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10ba4161 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba4165 jmp 0x10ba4179 */
  goto L_10ba4179;
  /* 10ba4167 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba4169 pop eax */
  EAX = (pop32());
  /* 10ba416a ret  */
  ESPCHK(0x10ba3fa3u, _esp0);
  ESP += 4; return;
  /* 10ba416b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ba416e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10ba4170 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba4172 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba4176 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10ba4179:;
  /* 10ba4179 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba417b je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba417d push esi */
  push32((uint32_t)(ESI));
  /* 10ba417e push ebx */
  push32((uint32_t)(EBX));
  /* 10ba417f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10ba4182 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10ba4185 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba4188 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba418b call dword ptr [0x10ba5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5014))), 0x10ba4191u);
  /* 10ba4191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba4193 je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
  /* 10ba4195 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4198 push edi */
  push32((uint32_t)(EDI));
  /* 10ba4199 push edi */
  push32((uint32_t)(EDI));
  /* 10ba419a jne 0x10ba41a0 */
  if (!C.zf) goto L_10ba41a0;
  /* 10ba419c push edi */
  push32((uint32_t)(EDI));
  /* 10ba419d push edi */
  push32((uint32_t)(EDI));
  /* 10ba419e jmp 0x10ba41a6 */
  goto L_10ba41a6;
L_10ba41a0:;
  /* 10ba41a0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10ba41a3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10ba41a6:;
  /* 10ba41a6 push esi */
  push32((uint32_t)(ESI));
  /* 10ba41a7 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba41a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ba41ad push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10ba41b0 call dword ptr [0x10ba5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5068))), 0x10ba41b6u);
  /* 10ba41b6 mov esi, eax */
  ESI = (EAX);
  /* 10ba41b8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba41ba je 0x10ba4131 */
  if (C.zf) goto L_10ba4131;
L_10ba41c0:;
  /* 10ba41c0 mov eax, esi */
  EAX = (ESI);
  /* 10ba41c2 jmp 0x10ba4133 */
  goto L_10ba4133;
}

/* FUN_100041c7 @ 0x10ba41c7 (43 bytes, 20 insns) */
void f_10ba41c7(void) {
  FTRACE(0x10ba41c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba41c7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba41cb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ba41cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ba41d1 push esi */
  push32((uint32_t)(ESI));
  /* 10ba41d2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10ba41d5 je 0x10ba41e4 */
  if (C.zf) goto L_10ba41e4;
L_10ba41d7:;
  /* 10ba41d7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba41da je 0x10ba41e4 */
  if (C.zf) goto L_10ba41e4;
  /* 10ba41dc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba41dd mov esi, ecx */
  ESI = (ECX);
  /* 10ba41df dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ba41e0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10ba41e2 jne 0x10ba41d7 */
  if (!C.zf) goto L_10ba41d7;
L_10ba41e4:;
  /* 10ba41e4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ba41e7 pop esi */
  ESI = (pop32());
  /* 10ba41e8 jne 0x10ba41ef */
  if (!C.zf) goto L_10ba41ef;
  /* 10ba41ea sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba41ee ret  */
  ESPCHK(0x10ba41c7u, _esp0);
  ESP += 4; return;
L_10ba41ef:;
  /* 10ba41ef mov eax, edx */
  EAX = (EDX);
  /* 10ba41f1 ret  */
  ESPCHK(0x10ba41c7u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f2 @ 0x10ba41f2 (318 bytes, 123 insns) */
void f_10ba41f2(void) {
  FTRACE(0x10ba41f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba41f2 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba41f3 mov ebp, esp */
  EBP = (ESP);
  /* 10ba41f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ba41f7 push 0x10ba54a0 */
  push32((uint32_t)(0x10ba54a0u));
  /* 10ba41fc push 0x10ba4770 */
  push32((uint32_t)(0x10ba4770u));
  /* 10ba4201 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ba4207 push eax */
  push32((uint32_t)(EAX));
  /* 10ba4208 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ba420f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba4212 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba4213 push esi */
  push32((uint32_t)(ESI));
  /* 10ba4214 push edi */
  push32((uint32_t)(EDI));
  /* 10ba4215 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ba4218 mov eax, dword ptr [0x10ba697c] */
  EAX = (r32((uint32_t)(0x10ba697c)));
  /* 10ba421d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba421f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4221 jne 0x10ba4261 */
  if (!C.zf) goto L_10ba4261;
  /* 10ba4223 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ba4226 push eax */
  push32((uint32_t)(EAX));
  /* 10ba4227 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba4229 pop esi */
  ESI = (pop32());
  /* 10ba422a push esi */
  push32((uint32_t)(ESI));
  /* 10ba422b push 0x10ba5480 */
  push32((uint32_t)(0x10ba5480u));
  /* 10ba4230 push esi */
  push32((uint32_t)(ESI));
  /* 10ba4231 call dword ptr [0x10ba500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba500c))), 0x10ba4237u);
  /* 10ba4237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba4239 je 0x10ba423f */
  if (C.zf) goto L_10ba423f;
  /* 10ba423b mov eax, esi */
  EAX = (ESI);
  /* 10ba423d jmp 0x10ba425c */
  goto L_10ba425c;
L_10ba423f:;
  /* 10ba423f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ba4242 push eax */
  push32((uint32_t)(EAX));
  /* 10ba4243 push esi */
  push32((uint32_t)(ESI));
  /* 10ba4244 push 0x10ba547c */
  push32((uint32_t)(0x10ba547cu));
  /* 10ba4249 push esi */
  push32((uint32_t)(ESI));
  /* 10ba424a push ebx */
  push32((uint32_t)(EBX));
  /* 10ba424b call dword ptr [0x10ba5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5010))), 0x10ba4251u);
  /* 10ba4251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ba4253 je 0x10ba4327 */
  if (C.zf) goto L_10ba4327;
  /* 10ba4259 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ba425b pop eax */
  EAX = (pop32());
L_10ba425c:;
  /* 10ba425c mov dword ptr [0x10ba697c], eax */
  w32((uint32_t)(0x10ba697c), (EAX));
L_10ba4261:;
  /* 10ba4261 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4264 jne 0x10ba428a */
  if (!C.zf) goto L_10ba428a;
  /* 10ba4266 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ba4269 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba426b jne 0x10ba4272 */
  if (!C.zf) goto L_10ba4272;
  /* 10ba426d mov eax, dword ptr [0x10ba6960] */
  EAX = (r32((uint32_t)(0x10ba6960)));
L_10ba4272:;
  /* 10ba4272 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10ba4275 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba4278 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba427b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba427e push eax */
  push32((uint32_t)(EAX));
  /* 10ba427f call dword ptr [0x10ba5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba5010))), 0x10ba4285u);
  /* 10ba4285 jmp 0x10ba4329 */
  goto L_10ba4329;
L_10ba428a:;
  /* 10ba428a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba428d jne 0x10ba4327 */
  if (!C.zf) goto L_10ba4327;
  /* 10ba4293 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4296 jne 0x10ba42a0 */
  if (!C.zf) goto L_10ba42a0;
  /* 10ba4298 mov eax, dword ptr [0x10ba6970] */
  EAX = (r32((uint32_t)(0x10ba6970)));
  /* 10ba429d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10ba42a0:;
  /* 10ba42a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba42a1 push ebx */
  push32((uint32_t)(EBX));
  /* 10ba42a2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba42a5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba42a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ba42ab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ba42ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba42af and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10ba42b2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ba42b3 push eax */
  push32((uint32_t)(EAX));
  /* 10ba42b4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10ba42b7 call dword ptr [0x10ba501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba501c))), 0x10ba42bdu);
  /* 10ba42bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ba42c0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba42c2 je 0x10ba4327 */
  if (C.zf) goto L_10ba4327;
  /* 10ba42c4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10ba42c7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10ba42ca mov eax, edi */
  EAX = (EDI);
  /* 10ba42cc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba42cf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ba42d1 call 0x10ba4850 */
  push32(0x10ba42d6u); f_10ba4850();
  /* 10ba42d6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ba42d9 mov esi, esp */
  ESI = (ESP);
  /* 10ba42db mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10ba42de push edi */
  push32((uint32_t)(EDI));
  /* 10ba42df push ebx */
  push32((uint32_t)(EBX));
  /* 10ba42e0 push esi */
  push32((uint32_t)(ESI));
  /* 10ba42e1 call 0x10ba3f30 */
  push32(0x10ba42e6u); f_10ba3f30();
  /* 10ba42e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba42e9 jmp 0x10ba42f6 */
  goto L_10ba42f6;
  /* 10ba42eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba42ed pop eax */
  EAX = (pop32());
  /* 10ba42ee ret  */
  ESPCHK(0x10ba41f2u, _esp0);
  ESP += 4; return;
  /* 10ba42ef mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ba42f2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10ba42f4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10ba42f6:;
  /* 10ba42f6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10ba42fa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba42fc je 0x10ba4327 */
  if (C.zf) goto L_10ba4327;
  /* 10ba42fe push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10ba4301 push esi */
  push32((uint32_t)(ESI));
  /* 10ba4302 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ba4305 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10ba4308 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ba430a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10ba430d call dword ptr [0x10ba501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba501c))), 0x10ba4313u);
  /* 10ba4313 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4315 je 0x10ba4327 */
  if (C.zf) goto L_10ba4327;
  /* 10ba4317 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10ba431a push eax */
  push32((uint32_t)(EAX));
  /* 10ba431b push esi */
  push32((uint32_t)(ESI));
  /* 10ba431c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba431f call dword ptr [0x10ba500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ba500c))), 0x10ba4325u);
  /* 10ba4325 jmp 0x10ba4329 */
  goto L_10ba4329;
L_10ba4327:;
  /* 10ba4327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ba4329:;
  /* 10ba4329 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10ba432c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ba432f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ba4336 pop edi */
  EDI = (pop32());
  /* 10ba4337 pop esi */
  ESI = (pop32());
  /* 10ba4338 pop ebx */
  EBX = (pop32());
  /* 10ba4339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba433a ret  */
  ESPCHK(0x10ba41f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x10ba4340 (664 bytes, 260 insns) [15 switch table(s)] */
void f_10ba4340(void) {
  FTRACE(0x10ba4340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba4340 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba4341 mov ebp, esp */
  EBP = (ESP);
  /* 10ba4343 push edi */
  push32((uint32_t)(EDI));
  /* 10ba4344 push esi */
  push32((uint32_t)(ESI));
  /* 10ba4345 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ba4348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ba434b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba434e mov eax, ecx */
  EAX = (ECX);
  /* 10ba4350 mov edx, ecx */
  EDX = (ECX);
  /* 10ba4352 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba4354 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4356 jbe 0x10ba4360 */
  if ((C.cf||C.zf)) goto L_10ba4360;
  /* 10ba4358 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba435a jb 0x10ba44d8 */
  if (C.cf) goto L_10ba44d8;
L_10ba4360:;
  /* 10ba4360 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ba4366 jne 0x10ba437c */
  if (!C.zf) goto L_10ba437c;
  /* 10ba4368 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba436b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ba436e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4371 jb 0x10ba439c */
  if (C.cf) goto L_10ba439c;
  /* 10ba4373 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba4375 jmp dword ptr [edx*4 + 0x10ba4488] */
  switch (EDX) {
    case 0: goto L_10ba4498;
    case 1: goto L_10ba44a0;
    case 2: goto L_10ba44ac;
    case 3: goto L_10ba44c0;
    default: x86_unimpl("switch@0x10ba4375 out of table"); return;
  }
L_10ba437c:;
  /* 10ba437c mov eax, edi */
  EAX = (EDI);
  /* 10ba437e mov edx, 3 */
  EDX = (0x3u);
  /* 10ba4383 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba4386 jb 0x10ba4394 */
  if (C.cf) goto L_10ba4394;
  /* 10ba4388 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ba438b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba438d jmp dword ptr [eax*4 + 0x10ba43a0] */
  switch (EAX) {
    case 1: goto L_10ba43b0;
    case 2: goto L_10ba43dc;
    case 3: goto L_10ba4400;
    default: x86_unimpl("switch@0x10ba438d out of table"); return;
  }
L_10ba4394:;
  /* 10ba4394 jmp dword ptr [ecx*4 + 0x10ba4498] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10ba4498)))); return;
  /* 10ba439b nop  */
  /* nop */
L_10ba439c:;
  /* 10ba439c jmp dword ptr [ecx*4 + 0x10ba441c] */
  switch (ECX) {
    case 0: goto L_10ba447f;
    case 1: goto L_10ba446c;
    case 2: goto L_10ba4464;
    case 3: goto L_10ba445c;
    case 4: goto L_10ba4454;
    case 5: goto L_10ba444c;
    case 6: goto L_10ba4444;
    case 7: goto L_10ba443c;
    default: x86_unimpl("switch@0x10ba439c out of table"); return;
  }
  /* 10ba43a3 nop  */
  /* nop */
L_10ba43b0:;
  /* 10ba43b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba43b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba43b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba43b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba43b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba43bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba43bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba43c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba43c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba43c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba43cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba43ce jb 0x10ba439c */
  if (C.cf) goto L_10ba439c;
  /* 10ba43d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba43d2 jmp dword ptr [edx*4 + 0x10ba4488] */
  switch (EDX) {
    case 0: goto L_10ba4498;
    case 1: goto L_10ba44a0;
    case 2: goto L_10ba44ac;
    case 3: goto L_10ba44c0;
    default: x86_unimpl("switch@0x10ba43d2 out of table"); return;
  }
  /* 10ba43d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba43dc:;
  /* 10ba43dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba43de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba43e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba43e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba43e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba43e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba43eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba43ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba43f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba43f4 jb 0x10ba439c */
  if (C.cf) goto L_10ba439c;
  /* 10ba43f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba43f8 jmp dword ptr [edx*4 + 0x10ba4488] */
  switch (EDX) {
    case 0: goto L_10ba4498;
    case 1: goto L_10ba44a0;
    case 2: goto L_10ba44ac;
    case 3: goto L_10ba44c0;
    default: x86_unimpl("switch@0x10ba43f8 out of table"); return;
  }
  /* 10ba43ff nop  */
  /* nop */
L_10ba4400:;
  /* 10ba4400 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba4402 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba4404 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba4406 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ba4407 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba440a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ba440b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba440e jb 0x10ba439c */
  if (C.cf) goto L_10ba439c;
  /* 10ba4410 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba4412 jmp dword ptr [edx*4 + 0x10ba4488] */
  switch (EDX) {
    case 0: goto L_10ba4498;
    case 1: goto L_10ba44a0;
    case 2: goto L_10ba44ac;
    case 3: goto L_10ba44c0;
    default: x86_unimpl("switch@0x10ba4412 out of table"); return;
  }
  /* 10ba4419 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba443c:;
  /* 10ba443c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10ba4440 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10ba4444:;
  /* 10ba4444 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10ba4448 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10ba444c:;
  /* 10ba444c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10ba4450 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10ba4454:;
  /* 10ba4454 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10ba4458 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10ba445c:;
  /* 10ba445c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10ba4460 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10ba4464:;
  /* 10ba4464 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10ba4468 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10ba446c:;
  /* 10ba446c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10ba4470 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10ba4474 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ba447b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba447d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ba447f:;
  /* 10ba447f jmp dword ptr [edx*4 + 0x10ba4488] */
  switch (EDX) {
    case 0: goto L_10ba4498;
    case 1: goto L_10ba44a0;
    case 2: goto L_10ba44ac;
    case 3: goto L_10ba44c0;
    default: x86_unimpl("switch@0x10ba447f out of table"); return;
  }
  /* 10ba4486 mov edi, edi */
  EDI = (EDI);
L_10ba4498:;
  /* 10ba4498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba449b pop esi */
  ESI = (pop32());
  /* 10ba449c pop edi */
  EDI = (pop32());
  /* 10ba449d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba449e ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba449f nop  */
  /* nop */
L_10ba44a0:;
  /* 10ba44a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba44a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba44a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba44a7 pop esi */
  ESI = (pop32());
  /* 10ba44a8 pop edi */
  EDI = (pop32());
  /* 10ba44a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba44aa ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba44ab nop  */
  /* nop */
L_10ba44ac:;
  /* 10ba44ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba44ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba44b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba44b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba44b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba44b9 pop esi */
  ESI = (pop32());
  /* 10ba44ba pop edi */
  EDI = (pop32());
  /* 10ba44bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba44bc ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba44bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba44c0:;
  /* 10ba44c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ba44c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ba44c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba44c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba44ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba44cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba44d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba44d3 pop esi */
  ESI = (pop32());
  /* 10ba44d4 pop edi */
  EDI = (pop32());
  /* 10ba44d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba44d6 ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba44d7 nop  */
  /* nop */
L_10ba44d8:;
  /* 10ba44d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10ba44dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10ba44e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ba44e6 jne 0x10ba450c */
  if (!C.zf) goto L_10ba450c;
  /* 10ba44e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba44eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ba44ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba44f1 jb 0x10ba4500 */
  if (C.cf) goto L_10ba4500;
  /* 10ba44f3 std  */
  C.df=1;
  /* 10ba44f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba44f6 cld  */
  C.df=0;
  /* 10ba44f7 jmp dword ptr [edx*4 + 0x10ba4620] */
  switch (EDX) {
    case 0: goto L_10ba4630;
    case 1: goto L_10ba4638;
    case 2: goto L_10ba4648;
    case 3: goto L_10ba465c;
    default: x86_unimpl("switch@0x10ba44f7 out of table"); return;
  }
  /* 10ba44fe mov edi, edi */
  EDI = (EDI);
L_10ba4500:;
  /* 10ba4500 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ba4502 jmp dword ptr [ecx*4 + 0x10ba45d0] */
  switch (ECX) {
    case 0: goto L_10ba4617;
    default: x86_unimpl("switch@0x10ba4502 out of table"); return;
  }
  /* 10ba4509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba450c:;
  /* 10ba450c mov eax, edi */
  EAX = (EDI);
  /* 10ba450e mov edx, 3 */
  EDX = (0x3u);
  /* 10ba4513 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4516 jb 0x10ba4524 */
  if (C.cf) goto L_10ba4524;
  /* 10ba4518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ba451b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba451d jmp dword ptr [eax*4 + 0x10ba4528] */
  switch (EAX) {
    case 1: goto L_10ba4538;
    case 2: goto L_10ba4558;
    case 3: goto L_10ba4580;
    default: x86_unimpl("switch@0x10ba451d out of table"); return;
  }
L_10ba4524:;
  /* 10ba4524 jmp dword ptr [ecx*4 + 0x10ba4620] */
  switch (ECX) {
    case 0: goto L_10ba4630;
    case 1: goto L_10ba4638;
    case 2: goto L_10ba4648;
    case 3: goto L_10ba465c;
    default: x86_unimpl("switch@0x10ba4524 out of table"); return;
  }
  /* 10ba452b nop  */
  /* nop */
L_10ba4538:;
  /* 10ba4538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba453b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba453d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba4540 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ba4541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba4544 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ba4545 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4548 jb 0x10ba4500 */
  if (C.cf) goto L_10ba4500;
  /* 10ba454a std  */
  C.df=1;
  /* 10ba454b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba454d cld  */
  C.df=0;
  /* 10ba454e jmp dword ptr [edx*4 + 0x10ba4620] */
  switch (EDX) {
    case 0: goto L_10ba4630;
    case 1: goto L_10ba4638;
    case 2: goto L_10ba4648;
    case 3: goto L_10ba465c;
    default: x86_unimpl("switch@0x10ba454e out of table"); return;
  }
  /* 10ba4555 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba4558:;
  /* 10ba4558 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba455b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba455d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba4560 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba4563 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba4566 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba4569 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba456c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba456f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4572 jb 0x10ba4500 */
  if (C.cf) goto L_10ba4500;
  /* 10ba4574 std  */
  C.df=1;
  /* 10ba4575 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba4577 cld  */
  C.df=0;
  /* 10ba4578 jmp dword ptr [edx*4 + 0x10ba4620] */
  switch (EDX) {
    case 0: goto L_10ba4630;
    case 1: goto L_10ba4638;
    case 2: goto L_10ba4648;
    case 3: goto L_10ba465c;
    default: x86_unimpl("switch@0x10ba4578 out of table"); return;
  }
  /* 10ba457f nop  */
  /* nop */
L_10ba4580:;
  /* 10ba4580 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba4583 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ba4585 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba4588 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba458b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba458e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba4591 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ba4594 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba4597 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba459a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba459d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba45a0 jb 0x10ba4500 */
  if (C.cf) goto L_10ba4500;
  /* 10ba45a6 std  */
  C.df=1;
  /* 10ba45a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ba45a9 cld  */
  C.df=0;
  /* 10ba45aa jmp dword ptr [edx*4 + 0x10ba4620] */
  switch (EDX) {
    case 0: goto L_10ba4630;
    case 1: goto L_10ba4638;
    case 2: goto L_10ba4648;
    case 3: goto L_10ba465c;
    default: x86_unimpl("switch@0x10ba45aa out of table"); return;
  }
  /* 10ba45b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10ba45b4 aam 0x45 */
  x86_unimpl("aam @ 0x10ba45b4");
  /* 10ba45b6 mov edx, 0xba45dc10 */
  EDX = (0xba45dc10u);
  /* 10ba45bb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba45bd inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10ba45be mov edx, 0xba45ec10 */
  EDX = (0xba45ec10u);
  /* 10ba45c3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10ba45c5 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10ba45c6 mov edx, 0xba45fc10 */
  EDX = (0xba45fc10u);
  /* 10ba45cb adc byte ptr [esi + eax*2], al */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*2))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EAX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ba45d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10ba45d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10ba45dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10ba45e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10ba45e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10ba45e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10ba45ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10ba45f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10ba45f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10ba45f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10ba45fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10ba4600 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10ba4604 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10ba4608 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10ba460c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ba4613 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba4615 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ba4617:;
  /* 10ba4617 jmp dword ptr [edx*4 + 0x10ba4620] */
  switch (EDX) {
    case 0: goto L_10ba4630;
    case 1: goto L_10ba4638;
    case 2: goto L_10ba4648;
    case 3: goto L_10ba465c;
    default: x86_unimpl("switch@0x10ba4617 out of table"); return;
  }
  /* 10ba461e mov edi, edi */
  EDI = (EDI);
L_10ba4630:;
  /* 10ba4630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba4633 pop esi */
  ESI = (pop32());
  /* 10ba4634 pop edi */
  EDI = (pop32());
  /* 10ba4635 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba4636 ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba4637 nop  */
  /* nop */
L_10ba4638:;
  /* 10ba4638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba463b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba463e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba4641 pop esi */
  ESI = (pop32());
  /* 10ba4642 pop edi */
  EDI = (pop32());
  /* 10ba4643 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba4644 ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba4645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ba4648:;
  /* 10ba4648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba464b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba464e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba4651 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba4654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba4657 pop esi */
  ESI = (pop32());
  /* 10ba4658 pop edi */
  EDI = (pop32());
  /* 10ba4659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba465a ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
  /* 10ba465b nop  */
  /* nop */
L_10ba465c:;
  /* 10ba465c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ba465f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ba4662 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ba4665 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ba4668 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ba466b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ba466e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba4671 pop esi */
  ESI = (pop32());
  /* 10ba4672 pop edi */
  EDI = (pop32());
  /* 10ba4673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ba4674 ret  */
  ESPCHK(0x10ba4340u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10ba4678 (32 bytes, 18 insns) */
void f_10ba4678(void) {
  FTRACE(0x10ba4678u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba4678 push ebp */
  push32((uint32_t)(EBP));
  /* 10ba4679 mov ebp, esp */
  EBP = (ESP);
  /* 10ba467b push ebx */
  push32((uint32_t)(EBX));
  /* 10ba467c push esi */
  push32((uint32_t)(ESI));
  /* 10ba467d push edi */
  push32((uint32_t)(EDI));
  /* 10ba467e push ebp */
  push32((uint32_t)(EBP));
  /* 10ba467f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba4681 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ba4683 push 0x10ba4690 */
  push32((uint32_t)(0x10ba4690u));
  /* 10ba4688 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ba468b call 0x10ba4880 */
  push32(0x10ba4690u); f_10ba4880();
  /* 10ba4690 pop ebp */
  EBP = (pop32());
  /* 10ba4691 pop edi */
  EDI = (pop32());
  /* 10ba4692 pop esi */
  ESI = (pop32());
  /* 10ba4693 pop ebx */
  EBX = (pop32());
  /* 10ba4694 mov esp, ebp */
  ESP = (EBP);
  /* 10ba4696 pop ebp */
  EBP = (pop32());
  /* 10ba4697 ret  */
  ESPCHK(0x10ba4678u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10ba46ba (104 bytes, 33 insns) */
void f_10ba46ba(void) {
  FTRACE(0x10ba46bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba46ba push ebx */
  push32((uint32_t)(EBX));
  /* 10ba46bb push esi */
  push32((uint32_t)(ESI));
  /* 10ba46bc push edi */
  push32((uint32_t)(EDI));
  /* 10ba46bd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ba46c1 push eax */
  push32((uint32_t)(EAX));
  /* 10ba46c2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10ba46c4 push 0x10ba4698 */
  push32((uint32_t)(0x10ba4698u));
  /* 10ba46c9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10ba46d0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10ba46d7:;
  /* 10ba46d7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10ba46db mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ba46de mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10ba46e1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba46e4 je 0x10ba4714 */
  if (C.zf) goto L_10ba4714;
  /* 10ba46e6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba46ea je 0x10ba4714 */
  if (C.zf) goto L_10ba4714;
  /* 10ba46ec lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10ba46ef mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10ba46f2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10ba46f6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10ba46f9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba46fe jne 0x10ba4712 */
  if (!C.zf) goto L_10ba4712;
  /* 10ba4700 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10ba4705 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10ba4709 call 0x10ba474e */
  push32(0x10ba470eu); f_10ba474e();
  /* 10ba470e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10ba4712u);
L_10ba4712:;
  /* 10ba4712 jmp 0x10ba46d7 */
  goto L_10ba46d7;
L_10ba4714:;
  /* 10ba4714 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10ba471b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba471e pop edi */
  EDI = (pop32());
  /* 10ba471f pop esi */
  ESI = (pop32());
  /* 10ba4720 pop ebx */
  EBX = (pop32());
  /* 10ba4721 ret  */
  ESPCHK(0x10ba46bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000474e @ 0x10ba474e (24 bytes, 10 insns) */
void f_10ba474e(void) {
  FTRACE(0x10ba474eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba474e push ebx */
  push32((uint32_t)(EBX));
  /* 10ba474f push ecx */
  push32((uint32_t)(ECX));
  /* 10ba4750 mov ebx, 0x10ba6640 */
  EBX = (0x10ba6640u);
  /* 10ba4755 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ba4758 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10ba475b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10ba475e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10ba4761 pop ecx */
  ECX = (pop32());
  /* 10ba4762 pop ebx */
  EBX = (pop32());
  /* 10ba4763 ret 4 */
  ESPCHK(0x10ba474eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000482d @ 0x10ba482d (27 bytes, 11 insns) */
void f_10ba482d(void) {
  FTRACE(0x10ba482du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba482d push ebp */
  push32((uint32_t)(EBP));
  /* 10ba482e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ba4832 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10ba4834 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ba4837 push eax */
  push32((uint32_t)(EAX));
  /* 10ba4838 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ba483b push eax */
  push32((uint32_t)(EAX));
  /* 10ba483c call 0x10ba46ba */
  push32(0x10ba4841u); f_10ba46ba();
  /* 10ba4841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ba4844 pop ebp */
  EBP = (pop32());
  /* 10ba4845 ret 4 */
  ESPCHK(0x10ba482du, _esp0);
  ESP += 8; return;
}

/* FUN_10004850 @ 0x10ba4850 (47 bytes, 17 insns) */
void f_10ba4850(void) {
  FTRACE(0x10ba4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba4850 push ecx */
  push32((uint32_t)(ECX));
  /* 10ba4851 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba4856 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10ba485a jb 0x10ba4870 */
  if (C.cf) goto L_10ba4870;
L_10ba485c:;
  /* 10ba485c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba4862 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba4867 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10ba4869 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ba486e jae 0x10ba485c */
  if (!C.cf) goto L_10ba485c;
L_10ba4870:;
  /* 10ba4870 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ba4872 mov eax, esp */
  EAX = (ESP);
  /* 10ba4874 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10ba4876 mov esp, ecx */
  ESP = (ECX);
  /* 10ba4878 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ba487a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ba487d push eax */
  push32((uint32_t)(EAX));
  /* 10ba487e ret  */
  ESPCHK(0x10ba4850u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10ba4880 (6 bytes, 1 insns) */
void f_10ba4880(void) {
  FTRACE(0x10ba4880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ba4880 jmp dword ptr [0x10ba5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10ba5008)))); return;
}

