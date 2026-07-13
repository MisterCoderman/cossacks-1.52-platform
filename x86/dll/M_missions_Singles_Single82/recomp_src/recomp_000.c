#include "recomp.h"

/* FUN_10001000 @ 0x11dd1000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11dd1000(void) {
  FTRACE(0x11dd1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd1000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1002 call dword ptr [0x11dd5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5144))), 0x11dd1008u);
  /* 11dd1008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd100e ja 0x11dd102f */
  if ((!C.cf&&!C.zf)) goto L_11dd102f;
  /* 11dd1010 jmp dword ptr [eax*4 + 0x11dd1038] */
  switch (EAX) {
    case 0: goto L_11dd1017;
    case 1: goto L_11dd101d;
    case 2: goto L_11dd1023;
    case 3: goto L_11dd1029;
    default: x86_unimpl("switch@0x11dd1010 out of table"); return;
  }
L_11dd1017:;
  /* 11dd1017 mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 11dd101c ret  */
  ESPCHK(0x11dd1000u, _esp0);
  ESP += 4; return;
L_11dd101d:;
  /* 11dd101d mov eax, 0x1388 */
  EAX = (0x1388u);
  /* 11dd1022 ret  */
  ESPCHK(0x11dd1000u, _esp0);
  ESP += 4; return;
L_11dd1023:;
  /* 11dd1023 mov eax, 0xdac */
  EAX = (0xdacu);
  /* 11dd1028 ret  */
  ESPCHK(0x11dd1000u, _esp0);
  ESP += 4; return;
L_11dd1029:;
  /* 11dd1029 mov eax, 0x7d0 */
  EAX = (0x7d0u);
  /* 11dd102e ret  */
  ESPCHK(0x11dd1000u, _esp0);
  ESP += 4; return;
L_11dd102f:;
  /* 11dd102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11dd1034 ret  */
  ESPCHK(0x11dd1000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11dd1050 (810 bytes, 214 insns) */
void f_11dd1050(void) {
  FTRACE(0x11dd1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd1050 push esi */
  push32((uint32_t)(ESI));
  /* 11dd1051 mov esi, dword ptr [0x11dd5134] */
  ESI = (r32((uint32_t)(0x11dd5134)));
  /* 11dd1057 push edi */
  push32((uint32_t)(EDI));
  /* 11dd1058 push 0x11dd625c */
  push32((uint32_t)(0x11dd625cu));
  /* 11dd105d push 0x11dd6948 */
  push32((uint32_t)(0x11dd6948u));
  /* 11dd1062 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1064u);
  /* 11dd1064 push 0x11dd6254 */
  push32((uint32_t)(0x11dd6254u));
  /* 11dd1069 push 0x11dd6910 */
  push32((uint32_t)(0x11dd6910u));
  /* 11dd106e call esi */
  call_ind((uint32_t)(ESI), 0x11dd1070u);
  /* 11dd1070 push 0x11dd624c */
  push32((uint32_t)(0x11dd624cu));
  /* 11dd1075 push 0x11dd6900 */
  push32((uint32_t)(0x11dd6900u));
  /* 11dd107a call esi */
  call_ind((uint32_t)(ESI), 0x11dd107cu);
  /* 11dd107c push 0x11dd6244 */
  push32((uint32_t)(0x11dd6244u));
  /* 11dd1081 push 0x11dd6950 */
  push32((uint32_t)(0x11dd6950u));
  /* 11dd1086 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1088u);
  /* 11dd1088 push 0x11dd623c */
  push32((uint32_t)(0x11dd623cu));
  /* 11dd108d push 0x11dd6878 */
  push32((uint32_t)(0x11dd6878u));
  /* 11dd1092 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1094u);
  /* 11dd1094 push 0x11dd6230 */
  push32((uint32_t)(0x11dd6230u));
  /* 11dd1099 push 0x11dd67b8 */
  push32((uint32_t)(0x11dd67b8u));
  /* 11dd109e call esi */
  call_ind((uint32_t)(ESI), 0x11dd10a0u);
  /* 11dd10a0 push 0x11dd6224 */
  push32((uint32_t)(0x11dd6224u));
  /* 11dd10a5 push 0x11dd68c0 */
  push32((uint32_t)(0x11dd68c0u));
  /* 11dd10aa call esi */
  call_ind((uint32_t)(ESI), 0x11dd10acu);
  /* 11dd10ac push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd10b1 push 0x11dd6868 */
  push32((uint32_t)(0x11dd6868u));
  /* 11dd10b6 call esi */
  call_ind((uint32_t)(ESI), 0x11dd10b8u);
  /* 11dd10b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd10bb push 0x11dd6218 */
  push32((uint32_t)(0x11dd6218u));
  /* 11dd10c0 push 0x11dd6988 */
  push32((uint32_t)(0x11dd6988u));
  /* 11dd10c5 call esi */
  call_ind((uint32_t)(ESI), 0x11dd10c7u);
  /* 11dd10c7 mov edi, dword ptr [0x11dd512c] */
  EDI = (r32((uint32_t)(0x11dd512c)));
  /* 11dd10cd push 0x11dd620c */
  push32((uint32_t)(0x11dd620cu));
  /* 11dd10d2 push 0x11dd68a8 */
  push32((uint32_t)(0x11dd68a8u));
  /* 11dd10d7 call edi */
  call_ind((uint32_t)(EDI), 0x11dd10d9u);
  /* 11dd10d9 push 0x11dd61f8 */
  push32((uint32_t)(0x11dd61f8u));
  /* 11dd10de push 0x11dd68e0 */
  push32((uint32_t)(0x11dd68e0u));
  /* 11dd10e3 call edi */
  call_ind((uint32_t)(EDI), 0x11dd10e5u);
  /* 11dd10e5 push 0x11dd61e8 */
  push32((uint32_t)(0x11dd61e8u));
  /* 11dd10ea push 0x11dd6848 */
  push32((uint32_t)(0x11dd6848u));
  /* 11dd10ef call edi */
  call_ind((uint32_t)(EDI), 0x11dd10f1u);
  /* 11dd10f1 mov esi, dword ptr [0x11dd513c] */
  ESI = (r32((uint32_t)(0x11dd513c)));
  /* 11dd10f7 push 0x11dd61e0 */
  push32((uint32_t)(0x11dd61e0u));
  /* 11dd10fc push 0x11dd6850 */
  push32((uint32_t)(0x11dd6850u));
  /* 11dd1101 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1103u);
  /* 11dd1103 push 0x11dd61d8 */
  push32((uint32_t)(0x11dd61d8u));
  /* 11dd1108 push 0x11dd6858 */
  push32((uint32_t)(0x11dd6858u));
  /* 11dd110d call esi */
  call_ind((uint32_t)(ESI), 0x11dd110fu);
  /* 11dd110f mov esi, dword ptr [0x11dd5140] */
  ESI = (r32((uint32_t)(0x11dd5140)));
  /* 11dd1115 push 0x11dd61d0 */
  push32((uint32_t)(0x11dd61d0u));
  /* 11dd111a push 0x11dd67a0 */
  push32((uint32_t)(0x11dd67a0u));
  /* 11dd111f call esi */
  call_ind((uint32_t)(ESI), 0x11dd1121u);
  /* 11dd1121 push 0x11dd61c8 */
  push32((uint32_t)(0x11dd61c8u));
  /* 11dd1126 push 0x11dd68b0 */
  push32((uint32_t)(0x11dd68b0u));
  /* 11dd112b call esi */
  call_ind((uint32_t)(ESI), 0x11dd112du);
  /* 11dd112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1130 push 0x11dd61c0 */
  push32((uint32_t)(0x11dd61c0u));
  /* 11dd1135 push 0x11dd68b8 */
  push32((uint32_t)(0x11dd68b8u));
  /* 11dd113a call esi */
  call_ind((uint32_t)(ESI), 0x11dd113cu);
  /* 11dd113c push 0x11dd61bc */
  push32((uint32_t)(0x11dd61bcu));
  /* 11dd1141 push 0x11dd6880 */
  push32((uint32_t)(0x11dd6880u));
  /* 11dd1146 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1148u);
  /* 11dd1148 push 0x11dd61b8 */
  push32((uint32_t)(0x11dd61b8u));
  /* 11dd114d push 0x11dd6888 */
  push32((uint32_t)(0x11dd6888u));
  /* 11dd1152 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1154u);
  /* 11dd1154 push 0x11dd61b0 */
  push32((uint32_t)(0x11dd61b0u));
  /* 11dd1159 push 0x11dd67f8 */
  push32((uint32_t)(0x11dd67f8u));
  /* 11dd115e call esi */
  call_ind((uint32_t)(ESI), 0x11dd1160u);
  /* 11dd1160 push 0x11dd61a8 */
  push32((uint32_t)(0x11dd61a8u));
  /* 11dd1165 push 0x11dd6860 */
  push32((uint32_t)(0x11dd6860u));
  /* 11dd116a call esi */
  call_ind((uint32_t)(ESI), 0x11dd116cu);
  /* 11dd116c push 0x11dd61a0 */
  push32((uint32_t)(0x11dd61a0u));
  /* 11dd1171 push 0x11dd6968 */
  push32((uint32_t)(0x11dd6968u));
  /* 11dd1176 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1178u);
  /* 11dd1178 push 0x11dd6198 */
  push32((uint32_t)(0x11dd6198u));
  /* 11dd117d push 0x11dd6970 */
  push32((uint32_t)(0x11dd6970u));
  /* 11dd1182 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1184u);
  /* 11dd1184 push 0x11dd6190 */
  push32((uint32_t)(0x11dd6190u));
  /* 11dd1189 push 0x11dd67d8 */
  push32((uint32_t)(0x11dd67d8u));
  /* 11dd118e call esi */
  call_ind((uint32_t)(ESI), 0x11dd1190u);
  /* 11dd1190 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1193 push 0x11dd6188 */
  push32((uint32_t)(0x11dd6188u));
  /* 11dd1198 push 0x11dd67e0 */
  push32((uint32_t)(0x11dd67e0u));
  /* 11dd119d call esi */
  call_ind((uint32_t)(ESI), 0x11dd119fu);
  /* 11dd119f push 0x11dd6180 */
  push32((uint32_t)(0x11dd6180u));
  /* 11dd11a4 push 0x11dd67e8 */
  push32((uint32_t)(0x11dd67e8u));
  /* 11dd11a9 call esi */
  call_ind((uint32_t)(ESI), 0x11dd11abu);
  /* 11dd11ab push 0x11dd6178 */
  push32((uint32_t)(0x11dd6178u));
  /* 11dd11b0 push 0x11dd67f0 */
  push32((uint32_t)(0x11dd67f0u));
  /* 11dd11b5 call esi */
  call_ind((uint32_t)(ESI), 0x11dd11b7u);
  /* 11dd11b7 push 0x11dd6170 */
  push32((uint32_t)(0x11dd6170u));
  /* 11dd11bc push 0x11dd6800 */
  push32((uint32_t)(0x11dd6800u));
  /* 11dd11c1 call esi */
  call_ind((uint32_t)(ESI), 0x11dd11c3u);
  /* 11dd11c3 push 0x11dd6168 */
  push32((uint32_t)(0x11dd6168u));
  /* 11dd11c8 push 0x11dd6808 */
  push32((uint32_t)(0x11dd6808u));
  /* 11dd11cd call esi */
  call_ind((uint32_t)(ESI), 0x11dd11cfu);
  /* 11dd11cf push 0x11dd6160 */
  push32((uint32_t)(0x11dd6160u));
  /* 11dd11d4 push 0x11dd67d0 */
  push32((uint32_t)(0x11dd67d0u));
  /* 11dd11d9 call esi */
  call_ind((uint32_t)(ESI), 0x11dd11dbu);
  /* 11dd11db push 0x11dd6158 */
  push32((uint32_t)(0x11dd6158u));
  /* 11dd11e0 push 0x11dd6818 */
  push32((uint32_t)(0x11dd6818u));
  /* 11dd11e5 call esi */
  call_ind((uint32_t)(ESI), 0x11dd11e7u);
  /* 11dd11e7 push 0x11dd6150 */
  push32((uint32_t)(0x11dd6150u));
  /* 11dd11ec push 0x11dd6820 */
  push32((uint32_t)(0x11dd6820u));
  /* 11dd11f1 call esi */
  call_ind((uint32_t)(ESI), 0x11dd11f3u);
  /* 11dd11f3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd11f6 push 0x11dd6148 */
  push32((uint32_t)(0x11dd6148u));
  /* 11dd11fb push 0x11dd6828 */
  push32((uint32_t)(0x11dd6828u));
  /* 11dd1200 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1202u);
  /* 11dd1202 push 0x11dd6140 */
  push32((uint32_t)(0x11dd6140u));
  /* 11dd1207 push 0x11dd6830 */
  push32((uint32_t)(0x11dd6830u));
  /* 11dd120c call esi */
  call_ind((uint32_t)(ESI), 0x11dd120eu);
  /* 11dd120e push 0x11dd6138 */
  push32((uint32_t)(0x11dd6138u));
  /* 11dd1213 push 0x11dd6838 */
  push32((uint32_t)(0x11dd6838u));
  /* 11dd1218 call esi */
  call_ind((uint32_t)(ESI), 0x11dd121au);
  /* 11dd121a push 0x11dd6130 */
  push32((uint32_t)(0x11dd6130u));
  /* 11dd121f push 0x11dd6840 */
  push32((uint32_t)(0x11dd6840u));
  /* 11dd1224 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1226u);
  /* 11dd1226 push 0x11dd6128 */
  push32((uint32_t)(0x11dd6128u));
  /* 11dd122b push 0x11dd6810 */
  push32((uint32_t)(0x11dd6810u));
  /* 11dd1230 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1232u);
  /* 11dd1232 push 0x11dd6110 */
  push32((uint32_t)(0x11dd6110u));
  /* 11dd1237 push 0x11dd6870 */
  push32((uint32_t)(0x11dd6870u));
  /* 11dd123c call edi */
  call_ind((uint32_t)(EDI), 0x11dd123eu);
  /* 11dd123e push 0x11dd60f8 */
  push32((uint32_t)(0x11dd60f8u));
  /* 11dd1243 push 0x11dd68d0 */
  push32((uint32_t)(0x11dd68d0u));
  /* 11dd1248 call edi */
  call_ind((uint32_t)(EDI), 0x11dd124au);
  /* 11dd124a push 0x11dd60ec */
  push32((uint32_t)(0x11dd60ecu));
  /* 11dd124f push 0x11dd68d8 */
  push32((uint32_t)(0x11dd68d8u));
  /* 11dd1254 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1256u);
  /* 11dd1256 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1259 push 0x11dd60d8 */
  push32((uint32_t)(0x11dd60d8u));
  /* 11dd125e push 0x11dd68e8 */
  push32((uint32_t)(0x11dd68e8u));
  /* 11dd1263 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1265u);
  /* 11dd1265 push 0x11dd60c8 */
  push32((uint32_t)(0x11dd60c8u));
  /* 11dd126a push 0x11dd68f0 */
  push32((uint32_t)(0x11dd68f0u));
  /* 11dd126f call edi */
  call_ind((uint32_t)(EDI), 0x11dd1271u);
  /* 11dd1271 push 0x11dd60b4 */
  push32((uint32_t)(0x11dd60b4u));
  /* 11dd1276 push 0x11dd68f8 */
  push32((uint32_t)(0x11dd68f8u));
  /* 11dd127b call edi */
  call_ind((uint32_t)(EDI), 0x11dd127du);
  /* 11dd127d push 0x11dd60a4 */
  push32((uint32_t)(0x11dd60a4u));
  /* 11dd1282 push 0x11dd6908 */
  push32((uint32_t)(0x11dd6908u));
  /* 11dd1287 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1289u);
  /* 11dd1289 push 0x11dd6090 */
  push32((uint32_t)(0x11dd6090u));
  /* 11dd128e push 0x11dd6918 */
  push32((uint32_t)(0x11dd6918u));
  /* 11dd1293 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1295u);
  /* 11dd1295 push 0x11dd607c */
  push32((uint32_t)(0x11dd607cu));
  /* 11dd129a push 0x11dd6920 */
  push32((uint32_t)(0x11dd6920u));
  /* 11dd129f call edi */
  call_ind((uint32_t)(EDI), 0x11dd12a1u);
  /* 11dd12a1 push 0x11dd6064 */
  push32((uint32_t)(0x11dd6064u));
  /* 11dd12a6 push 0x11dd6928 */
  push32((uint32_t)(0x11dd6928u));
  /* 11dd12ab call edi */
  call_ind((uint32_t)(EDI), 0x11dd12adu);
  /* 11dd12ad push 0x11dd6058 */
  push32((uint32_t)(0x11dd6058u));
  /* 11dd12b2 push 0x11dd6930 */
  push32((uint32_t)(0x11dd6930u));
  /* 11dd12b7 call edi */
  call_ind((uint32_t)(EDI), 0x11dd12b9u);
  /* 11dd12b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd12bc push 0x11dd604c */
  push32((uint32_t)(0x11dd604cu));
  /* 11dd12c1 push 0x11dd6938 */
  push32((uint32_t)(0x11dd6938u));
  /* 11dd12c6 call edi */
  call_ind((uint32_t)(EDI), 0x11dd12c8u);
  /* 11dd12c8 push 0x11dd6040 */
  push32((uint32_t)(0x11dd6040u));
  /* 11dd12cd push 0x11dd6940 */
  push32((uint32_t)(0x11dd6940u));
  /* 11dd12d2 call edi */
  call_ind((uint32_t)(EDI), 0x11dd12d4u);
  /* 11dd12d4 mov esi, dword ptr [0x11dd5138] */
  ESI = (r32((uint32_t)(0x11dd5138)));
  /* 11dd12da push 0x11dd6978 */
  push32((uint32_t)(0x11dd6978u));
  /* 11dd12df call esi */
  call_ind((uint32_t)(ESI), 0x11dd12e1u);
  /* 11dd12e1 mov edi, dword ptr [0x11dd5148] */
  EDI = (r32((uint32_t)(0x11dd5148)));
  /* 11dd12e7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd12e9 push 0x11dd6978 */
  push32((uint32_t)(0x11dd6978u));
  /* 11dd12ee call edi */
  call_ind((uint32_t)(EDI), 0x11dd12f0u);
  /* 11dd12f0 push 0x11dd67b0 */
  push32((uint32_t)(0x11dd67b0u));
  /* 11dd12f5 call esi */
  call_ind((uint32_t)(ESI), 0x11dd12f7u);
  /* 11dd12f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd12f9 push 0x11dd67b0 */
  push32((uint32_t)(0x11dd67b0u));
  /* 11dd12fe call edi */
  call_ind((uint32_t)(EDI), 0x11dd1300u);
  /* 11dd1300 push 0x11dd6960 */
  push32((uint32_t)(0x11dd6960u));
  /* 11dd1305 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1307u);
  /* 11dd1307 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd1309 push 0x11dd6960 */
  push32((uint32_t)(0x11dd6960u));
  /* 11dd130e call edi */
  call_ind((uint32_t)(EDI), 0x11dd1310u);
  /* 11dd1310 push 0x11dd6980 */
  push32((uint32_t)(0x11dd6980u));
  /* 11dd1315 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1317u);
  /* 11dd1317 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd1319 push 0x11dd6980 */
  push32((uint32_t)(0x11dd6980u));
  /* 11dd131e call edi */
  call_ind((uint32_t)(EDI), 0x11dd1320u);
  /* 11dd1320 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1323 push 0x11dd67a8 */
  push32((uint32_t)(0x11dd67a8u));
  /* 11dd1328 call esi */
  call_ind((uint32_t)(ESI), 0x11dd132au);
  /* 11dd132a push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd132c push 0x11dd67a8 */
  push32((uint32_t)(0x11dd67a8u));
  /* 11dd1331 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1333u);
  /* 11dd1333 push 0x11dd6958 */
  push32((uint32_t)(0x11dd6958u));
  /* 11dd1338 call esi */
  call_ind((uint32_t)(ESI), 0x11dd133au);
  /* 11dd133a push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd133c push 0x11dd6958 */
  push32((uint32_t)(0x11dd6958u));
  /* 11dd1341 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1343u);
  /* 11dd1343 push 0x11dd68c8 */
  push32((uint32_t)(0x11dd68c8u));
  /* 11dd1348 call esi */
  call_ind((uint32_t)(ESI), 0x11dd134au);
  /* 11dd134a push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd134c push 0x11dd68c8 */
  push32((uint32_t)(0x11dd68c8u));
  /* 11dd1351 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1353u);
  /* 11dd1353 mov esi, dword ptr [0x11dd514c] */
  ESI = (r32((uint32_t)(0x11dd514c)));
  /* 11dd1359 push 0x11dd6038 */
  push32((uint32_t)(0x11dd6038u));
  /* 11dd135e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1360 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1362u);
  /* 11dd1362 push 0x11dd6030 */
  push32((uint32_t)(0x11dd6030u));
  /* 11dd1367 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1369 call esi */
  call_ind((uint32_t)(ESI), 0x11dd136bu);
  /* 11dd136b push 0x11dd6038 */
  push32((uint32_t)(0x11dd6038u));
  /* 11dd1370 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1372 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1374u);
  /* 11dd1374 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1377 pop edi */
  EDI = (pop32());
  /* 11dd1378 pop esi */
  ESI = (pop32());
  /* 11dd1379 ret  */
  ESPCHK(0x11dd1050u, _esp0);
  ESP += 4; return;
}

/* FUN_10001380 @ 0x11dd1380 (20 bytes, 6 insns) */
void f_11dd1380(void) {
  FTRACE(0x11dd1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd1380 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd1384 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dd1385 jne 0x11dd138c */
  if (!C.zf) goto L_11dd138c;
  /* 11dd1387 call 0x11dd1050 */
  push32(0x11dd138cu); f_11dd1050();
L_11dd138c:;
  /* 11dd138c mov eax, 1 */
  EAX = (0x1u);
  /* 11dd1391 ret 0xc */
  ESPCHK(0x11dd1380u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x11dd13a0 (3057 bytes, 990 insns) */
void f_11dd13a0(void) {
  FTRACE(0x11dd13a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd13a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd13a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd13a2 push esi */
  push32((uint32_t)(ESI));
  /* 11dd13a3 push edi */
  push32((uint32_t)(EDI));
  /* 11dd13a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd13a6 call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd13acu);
  /* 11dd13ac mov ebx, dword ptr [0x11dd50b8] */
  EBX = (r32((uint32_t)(0x11dd50b8)));
  /* 11dd13b2 mov esi, dword ptr [0x11dd50bc] */
  ESI = (r32((uint32_t)(0x11dd50bc)));
  /* 11dd13b8 mov edi, dword ptr [0x11dd50b4] */
  EDI = (r32((uint32_t)(0x11dd50b4)));
  /* 11dd13be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd13c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd13c3 je 0x11dd17d8 */
  if (C.zf) goto L_11dd17d8;
  /* 11dd13c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd13cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd13cd call ebx */
  call_ind((uint32_t)(EBX), 0x11dd13cfu);
  /* 11dd13cf mov ebp, dword ptr [0x11dd50c4] */
  EBP = (r32((uint32_t)(0x11dd50c4)));
  /* 11dd13d5 push 0x11dd6470 */
  push32((uint32_t)(0x11dd6470u));
  /* 11dd13da call ebp */
  call_ind((uint32_t)(EBP), 0x11dd13dcu);
  /* 11dd13dc push 0x11dd6468 */
  push32((uint32_t)(0x11dd6468u));
  /* 11dd13e1 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd13e3u);
  /* 11dd13e3 mov ebp, dword ptr [0x11dd50c8] */
  EBP = (r32((uint32_t)(0x11dd50c8)));
  /* 11dd13e9 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11dd13eb call ebp */
  call_ind((uint32_t)(EBP), 0x11dd13edu);
  /* 11dd13ed push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11dd13ef call ebp */
  call_ind((uint32_t)(EBP), 0x11dd13f1u);
  /* 11dd13f1 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11dd13f3 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd13f5u);
  /* 11dd13f5 push 0x11dd6460 */
  push32((uint32_t)(0x11dd6460u));
  /* 11dd13fa push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd13ff call dword ptr [0x11dd50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c0))), 0x11dd1405u);
  /* 11dd1405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1407 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1409 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd140bu);
  /* 11dd140b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd140d push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd140f call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1411u);
  /* 11dd1411 call 0x11dd1000 */
  push32(0x11dd1416u); f_11dd1000();
  /* 11dd1416 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1417 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1419 call esi */
  call_ind((uint32_t)(ESI), 0x11dd141bu);
  /* 11dd141b call 0x11dd1000 */
  push32(0x11dd1420u); f_11dd1000();
  /* 11dd1420 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1421 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1423 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1425u);
  /* 11dd1425 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1428 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11dd142d push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd142f call esi */
  call_ind((uint32_t)(ESI), 0x11dd1431u);
  /* 11dd1431 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11dd1436 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1438 call esi */
  call_ind((uint32_t)(ESI), 0x11dd143au);
  /* 11dd143a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11dd143f push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1441 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1443u);
  /* 11dd1443 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11dd1448 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd144a call esi */
  call_ind((uint32_t)(ESI), 0x11dd144cu);
  /* 11dd144c call 0x11dd1000 */
  push32(0x11dd1451u); f_11dd1000();
  /* 11dd1451 add eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1456 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1457 push 0xa */
  push32((uint32_t)(0xau));
  /* 11dd1459 call esi */
  call_ind((uint32_t)(ESI), 0x11dd145bu);
  /* 11dd145b call 0x11dd1000 */
  push32(0x11dd1460u); f_11dd1000();
  /* 11dd1460 add eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1465 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1466 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11dd1468 call esi */
  call_ind((uint32_t)(ESI), 0x11dd146au);
  /* 11dd146a call 0x11dd1000 */
  push32(0x11dd146fu); f_11dd1000();
  /* 11dd146f add eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1474 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1475 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11dd1477 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1479u);
  /* 11dd1479 call 0x11dd1000 */
  push32(0x11dd147eu); f_11dd1000();
  /* 11dd147e add eax, 0x61a8 */
  { uint32_t _a=(EAX),_b=(0x61a8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1483 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1484 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dd1486 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1488u);
  /* 11dd1488 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd148b call 0x11dd1000 */
  push32(0x11dd1490u); f_11dd1000();
  /* 11dd1490 add eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1495 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1496 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11dd1498 call esi */
  call_ind((uint32_t)(ESI), 0x11dd149au);
  /* 11dd149a call 0x11dd1000 */
  push32(0x11dd149fu); f_11dd1000();
  /* 11dd149f add eax, 0x88b8 */
  { uint32_t _a=(EAX),_b=(0x88b8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd14a4 push eax */
  push32((uint32_t)(EAX));
  /* 11dd14a5 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11dd14a7 call esi */
  call_ind((uint32_t)(ESI), 0x11dd14a9u);
  /* 11dd14a9 call 0x11dd1000 */
  push32(0x11dd14aeu); f_11dd1000();
  /* 11dd14ae add eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd14b3 push eax */
  push32((uint32_t)(EAX));
  /* 11dd14b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dd14b6 call esi */
  call_ind((uint32_t)(ESI), 0x11dd14b8u);
  /* 11dd14b8 call 0x11dd1000 */
  push32(0x11dd14bdu); f_11dd1000();
  /* 11dd14bd add eax, 0xafc8 */
  { uint32_t _a=(EAX),_b=(0xafc8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd14c2 push eax */
  push32((uint32_t)(EAX));
  /* 11dd14c3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd14c5 call esi */
  call_ind((uint32_t)(ESI), 0x11dd14c7u);
  /* 11dd14c7 mov ebp, dword ptr [0x11dd50d0] */
  EBP = (r32((uint32_t)(0x11dd50d0)));
  /* 11dd14cd push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11dd14cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd14d1 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd14d3u);
  /* 11dd14d3 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11dd14d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd14d7 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd14d9u);
  /* 11dd14d9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd14db push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd14dd call ebp */
  call_ind((uint32_t)(EBP), 0x11dd14dfu);
  /* 11dd14df push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd14e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd14e3 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd14e5u);
  /* 11dd14e5 mov ebp, dword ptr [0x11dd50d4] */
  EBP = (r32((uint32_t)(0x11dd50d4)));
  /* 11dd14eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd14ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd14f0 push 0x11dd6910 */
  push32((uint32_t)(0x11dd6910u));
  /* 11dd14f5 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd14f7u);
  /* 11dd14f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd14f9 call dword ptr [0x11dd50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50cc))), 0x11dd14ffu);
  /* 11dd14ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1501 push 0x11dd6900 */
  push32((uint32_t)(0x11dd6900u));
  /* 11dd1506 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1508u);
  /* 11dd1508 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd150a call dword ptr [0x11dd50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50cc))), 0x11dd1510u);
  /* 11dd1510 mov ebp, dword ptr [0x11dd50dc] */
  EBP = (r32((uint32_t)(0x11dd50dc)));
  /* 11dd1516 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1518 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd151a push 0x11dd67a0 */
  push32((uint32_t)(0x11dd67a0u));
  /* 11dd151f call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1521u);
  /* 11dd1521 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1523 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1525 push 0x11dd67f8 */
  push32((uint32_t)(0x11dd67f8u));
  /* 11dd152a call ebp */
  call_ind((uint32_t)(EBP), 0x11dd152cu);
  /* 11dd152c push 0x11dd67a0 */
  push32((uint32_t)(0x11dd67a0u));
  /* 11dd1531 call dword ptr [0x11dd50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50e0))), 0x11dd1537u);
  /* 11dd1537 mov ebp, dword ptr [0x11dd50d8] */
  EBP = (r32((uint32_t)(0x11dd50d8)));
  /* 11dd153d push 0x11dd6968 */
  push32((uint32_t)(0x11dd6968u));
  /* 11dd1542 push 0x11dd68c0 */
  push32((uint32_t)(0x11dd68c0u));
  /* 11dd1547 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1549u);
  /* 11dd1549 push 0x11dd6968 */
  push32((uint32_t)(0x11dd6968u));
  /* 11dd154e push 0x11dd6878 */
  push32((uint32_t)(0x11dd6878u));
  /* 11dd1553 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1555u);
  /* 11dd1555 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1558 push 0x11dd6970 */
  push32((uint32_t)(0x11dd6970u));
  /* 11dd155d push 0x11dd67b8 */
  push32((uint32_t)(0x11dd67b8u));
  /* 11dd1562 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1564u);
  /* 11dd1564 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1566 push 0x11dd6868 */
  push32((uint32_t)(0x11dd6868u));
  /* 11dd156b call dword ptr [0x11dd50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50d4))), 0x11dd1571u);
  /* 11dd1571 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11dd1576 push 0x11dd6880 */
  push32((uint32_t)(0x11dd6880u));
  /* 11dd157b push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd157d call dword ptr [0x11dd50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50e8))), 0x11dd1583u);
  /* 11dd1583 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1585 call dword ptr [0x11dd50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50ec))), 0x11dd158bu);
  /* 11dd158b mov ebp, dword ptr [0x11dd5144] */
  EBP = (r32((uint32_t)(0x11dd5144)));
  /* 11dd1591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1593 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1595u);
  /* 11dd1595 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd159a jne 0x11dd1618 */
  if (!C.zf) goto L_11dd1618;
  /* 11dd159c push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11dd15a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd15a3 push eax */
  push32((uint32_t)(EAX));
  /* 11dd15a4 call edi */
  call_ind((uint32_t)(EDI), 0x11dd15a6u);
  /* 11dd15a6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd15ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd15ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15af call edi */
  call_ind((uint32_t)(EDI), 0x11dd15b1u);
  /* 11dd15b1 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11dd15b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd15b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15ba call edi */
  call_ind((uint32_t)(EDI), 0x11dd15bcu);
  /* 11dd15bc push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11dd15c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd15c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15c5 call edi */
  call_ind((uint32_t)(EDI), 0x11dd15c7u);
  /* 11dd15c7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd15cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15d0 call edi */
  call_ind((uint32_t)(EDI), 0x11dd15d2u);
  /* 11dd15d2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd15d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd15d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15db call edi */
  call_ind((uint32_t)(EDI), 0x11dd15ddu);
  /* 11dd15dd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd15e0 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11dd15e5 push 0x11dd6888 */
  push32((uint32_t)(0x11dd6888u));
  /* 11dd15ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd15ec push 0x11dd6870 */
  push32((uint32_t)(0x11dd6870u));
  /* 11dd15f1 push 0x11dd6858 */
  push32((uint32_t)(0x11dd6858u));
  /* 11dd15f6 push 0x11dd68c8 */
  push32((uint32_t)(0x11dd68c8u));
  /* 11dd15fb call dword ptr [0x11dd50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50e4))), 0x11dd1601u);
  /* 11dd1601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1604 mov dword ptr [0x11dd67c0], 3 */
  w32((uint32_t)(0x11dd67c0), (0x3u));
  /* 11dd160e mov dword ptr [0x11dd67c4], 4 */
  w32((uint32_t)(0x11dd67c4), (0x4u));
L_11dd1618:;
  /* 11dd1618 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd161a call ebp */
  call_ind((uint32_t)(EBP), 0x11dd161cu);
  /* 11dd161c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd161f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1622 jne 0x11dd167d */
  if (!C.zf) goto L_11dd167d;
  /* 11dd1624 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd1629 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd162b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd162d call edi */
  call_ind((uint32_t)(EDI), 0x11dd162fu);
  /* 11dd162f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11dd1634 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1636 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1638 call edi */
  call_ind((uint32_t)(EDI), 0x11dd163au);
  /* 11dd163a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd163f push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1641 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1643 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1645u);
  /* 11dd1645 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd164a push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd164c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd164e call edi */
  call_ind((uint32_t)(EDI), 0x11dd1650u);
  /* 11dd1650 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11dd1655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1657 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1659 call edi */
  call_ind((uint32_t)(EDI), 0x11dd165bu);
  /* 11dd165b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11dd1660 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1664 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1666u);
  /* 11dd1666 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1669 mov dword ptr [0x11dd67c0], 4 */
  w32((uint32_t)(0x11dd67c0), (0x4u));
  /* 11dd1673 mov dword ptr [0x11dd67c4], 6 */
  w32((uint32_t)(0x11dd67c4), (0x6u));
L_11dd167d:;
  /* 11dd167d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd167f call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1681u);
  /* 11dd1681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1684 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1687 jne 0x11dd16e2 */
  if (!C.zf) goto L_11dd16e2;
  /* 11dd1689 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11dd168e push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd1690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1692 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1694u);
  /* 11dd1694 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd1699 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd169b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd169d call edi */
  call_ind((uint32_t)(EDI), 0x11dd169fu);
  /* 11dd169f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11dd16a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd16a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16a8 call edi */
  call_ind((uint32_t)(EDI), 0x11dd16aau);
  /* 11dd16aa push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11dd16af push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd16b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16b3 call edi */
  call_ind((uint32_t)(EDI), 0x11dd16b5u);
  /* 11dd16b5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd16ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16be call edi */
  call_ind((uint32_t)(EDI), 0x11dd16c0u);
  /* 11dd16c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd16c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd16c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16c9 call edi */
  call_ind((uint32_t)(EDI), 0x11dd16cbu);
  /* 11dd16cb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd16ce mov dword ptr [0x11dd67c0], 5 */
  w32((uint32_t)(0x11dd67c0), (0x5u));
  /* 11dd16d8 mov dword ptr [0x11dd67c4], 8 */
  w32((uint32_t)(0x11dd67c4), (0x8u));
L_11dd16e2:;
  /* 11dd16e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16e4 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd16e6u);
  /* 11dd16e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd16e9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd16ec jne 0x11dd1746 */
  if (!C.zf) goto L_11dd1746;
  /* 11dd16ee push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd16f3 push eax */
  push32((uint32_t)(EAX));
  /* 11dd16f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd16f6 call edi */
  call_ind((uint32_t)(EDI), 0x11dd16f8u);
  /* 11dd16f8 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11dd16fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd16ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1701 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1703u);
  /* 11dd1703 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd1708 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd170a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd170c call edi */
  call_ind((uint32_t)(EDI), 0x11dd170eu);
  /* 11dd170e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd1713 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1717 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1719u);
  /* 11dd1719 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11dd171e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1720 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1722 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1724u);
  /* 11dd1724 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11dd1729 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd172b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd172d call edi */
  call_ind((uint32_t)(EDI), 0x11dd172fu);
  /* 11dd172f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1732 mov dword ptr [0x11dd67c0], 6 */
  w32((uint32_t)(0x11dd67c0), (0x6u));
  /* 11dd173c mov dword ptr [0x11dd67c4], 0xa */
  w32((uint32_t)(0x11dd67c4), (0xau));
L_11dd1746:;
  /* 11dd1746 mov ebp, dword ptr [0x11dd50f4] */
  EBP = (r32((uint32_t)(0x11dd50f4)));
  /* 11dd174c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd174e push 0x11dd68d0 */
  push32((uint32_t)(0x11dd68d0u));
  /* 11dd1753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1755 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1757u);
  /* 11dd1757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1759 push 0x11dd68d8 */
  push32((uint32_t)(0x11dd68d8u));
  /* 11dd175e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1760 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1762u);
  /* 11dd1762 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1764 push 0x11dd68e8 */
  push32((uint32_t)(0x11dd68e8u));
  /* 11dd1769 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd176b call ebp */
  call_ind((uint32_t)(EBP), 0x11dd176du);
  /* 11dd176d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd176f push 0x11dd68f0 */
  push32((uint32_t)(0x11dd68f0u));
  /* 11dd1774 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1776 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1778u);
  /* 11dd1778 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd177a push 0x11dd68f8 */
  push32((uint32_t)(0x11dd68f8u));
  /* 11dd177f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1781 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1783u);
  /* 11dd1783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1785 push 0x11dd6908 */
  push32((uint32_t)(0x11dd6908u));
  /* 11dd178a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd178c call ebp */
  call_ind((uint32_t)(EBP), 0x11dd178eu);
  /* 11dd178e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1791 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1793 push 0x11dd6918 */
  push32((uint32_t)(0x11dd6918u));
  /* 11dd1798 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd179a call ebp */
  call_ind((uint32_t)(EBP), 0x11dd179cu);
  /* 11dd179c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd179e push 0x11dd6920 */
  push32((uint32_t)(0x11dd6920u));
  /* 11dd17a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17a5 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd17a7u);
  /* 11dd17a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17a9 push 0x11dd6928 */
  push32((uint32_t)(0x11dd6928u));
  /* 11dd17ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17b0 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd17b2u);
  /* 11dd17b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17b4 push 0x11dd6930 */
  push32((uint32_t)(0x11dd6930u));
  /* 11dd17b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17bb call ebp */
  call_ind((uint32_t)(EBP), 0x11dd17bdu);
  /* 11dd17bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17bf push 0x11dd6938 */
  push32((uint32_t)(0x11dd6938u));
  /* 11dd17c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17c6 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd17c8u);
  /* 11dd17c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17ca push 0x11dd6940 */
  push32((uint32_t)(0x11dd6940u));
  /* 11dd17cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd17d1 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd17d3u);
  /* 11dd17d3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd17d6 jmp 0x11dd17de */
  goto L_11dd17de;
L_11dd17d8:;
  /* 11dd17d8 mov ebp, dword ptr [0x11dd50f4] */
  EBP = (r32((uint32_t)(0x11dd50f4)));
L_11dd17de:;
  /* 11dd17de push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd17e0 call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd17e6u);
  /* 11dd17e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd17e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd17eb je 0x11dd1940 */
  if (C.zf) goto L_11dd1940;
  /* 11dd17f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd17f3 push 0x11dd67a0 */
  push32((uint32_t)(0x11dd67a0u));
  /* 11dd17f8 call dword ptr [0x11dd50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50f8))), 0x11dd17feu);
  /* 11dd17fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd1803 jne 0x11dd1940 */
  if (!C.zf) goto L_11dd1940;
  /* 11dd1809 push eax */
  push32((uint32_t)(EAX));
  /* 11dd180a push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd180c call ebx */
  call_ind((uint32_t)(EBX), 0x11dd180eu);
  /* 11dd180e push 0x11dd6458 */
  push32((uint32_t)(0x11dd6458u));
  /* 11dd1813 call dword ptr [0x11dd50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c4))), 0x11dd1819u);
  /* 11dd1819 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd181b push 0x11dd6950 */
  push32((uint32_t)(0x11dd6950u));
  /* 11dd1820 call dword ptr [0x11dd50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50d4))), 0x11dd1826u);
  /* 11dd1826 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1828 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd182a call dword ptr [0x11dd50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50f0))), 0x11dd1830u);
  /* 11dd1830 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1832 call dword ptr [0x11dd5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5100))), 0x11dd1838u);
  /* 11dd1838 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11dd183a call dword ptr [0x11dd5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5104))), 0x11dd1840u);
  /* 11dd1840 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11dd1842 call dword ptr [0x11dd50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c8))), 0x11dd1848u);
  /* 11dd1848 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11dd184a call dword ptr [0x11dd5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5104))), 0x11dd1850u);
  /* 11dd1850 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1852 push 0x11dd68d0 */
  push32((uint32_t)(0x11dd68d0u));
  /* 11dd1857 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1859 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd185bu);
  /* 11dd185b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd1860 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd1862 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1864 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1866u);
  /* 11dd1866 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1869 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd186e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1870 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1872 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1874u);
  /* 11dd1874 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd1879 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd187b push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd187d call edi */
  call_ind((uint32_t)(EDI), 0x11dd187fu);
  /* 11dd187f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dd1884 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1886 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1888 call edi */
  call_ind((uint32_t)(EDI), 0x11dd188au);
  /* 11dd188a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd188f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1891 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1893 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1895u);
  /* 11dd1895 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dd189a push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd189c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd189e call edi */
  call_ind((uint32_t)(EDI), 0x11dd18a0u);
  /* 11dd18a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd18a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd18a4 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd18a6u);
  /* 11dd18a6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd18a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd18ab push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd18ad call ebx */
  call_ind((uint32_t)(EBX), 0x11dd18afu);
  /* 11dd18af push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd18b1 call dword ptr [0x11dd5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5144))), 0x11dd18b7u);
  /* 11dd18b7 mov edi, dword ptr [0x11dd50fc] */
  EDI = (r32((uint32_t)(0x11dd50fc)));
  /* 11dd18bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd18c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd18c2 jne 0x11dd18d8 */
  if (!C.zf) goto L_11dd18d8;
  /* 11dd18c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd18c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd18c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd18ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd18cc push 0x11dd644c */
  push32((uint32_t)(0x11dd644cu));
  /* 11dd18d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd18d3 call edi */
  call_ind((uint32_t)(EDI), 0x11dd18d5u);
  /* 11dd18d5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd18d8:;
  /* 11dd18d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd18da call dword ptr [0x11dd5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5144))), 0x11dd18e0u);
  /* 11dd18e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd18e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd18e6 jne 0x11dd18f9 */
  if (!C.zf) goto L_11dd18f9;
  /* 11dd18e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd18ea push eax */
  push32((uint32_t)(EAX));
  /* 11dd18eb push eax */
  push32((uint32_t)(EAX));
  /* 11dd18ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd18ee push 0x11dd644c */
  push32((uint32_t)(0x11dd644cu));
  /* 11dd18f3 push eax */
  push32((uint32_t)(EAX));
  /* 11dd18f4 call edi */
  call_ind((uint32_t)(EDI), 0x11dd18f6u);
  /* 11dd18f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd18f9:;
  /* 11dd18f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd18fb call dword ptr [0x11dd5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5144))), 0x11dd1901u);
  /* 11dd1901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1904 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1907 jne 0x11dd191d */
  if (!C.zf) goto L_11dd191d;
  /* 11dd1909 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd190b push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd190d push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd190f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1911 push 0x11dd644c */
  push32((uint32_t)(0x11dd644cu));
  /* 11dd1916 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1918 call edi */
  call_ind((uint32_t)(EDI), 0x11dd191au);
  /* 11dd191a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd191d:;
  /* 11dd191d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd191f call dword ptr [0x11dd5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5144))), 0x11dd1925u);
  /* 11dd1925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1928 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd192b jne 0x11dd1940 */
  if (!C.zf) goto L_11dd1940;
  /* 11dd192d push eax */
  push32((uint32_t)(EAX));
  /* 11dd192e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1930 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1934 push 0x11dd644c */
  push32((uint32_t)(0x11dd644cu));
  /* 11dd1939 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd193b call edi */
  call_ind((uint32_t)(EDI), 0x11dd193du);
  /* 11dd193d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1940:;
  /* 11dd1940 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1942 call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd1948u);
  /* 11dd1948 mov edi, dword ptr [0x11dd510c] */
  EDI = (r32((uint32_t)(0x11dd510c)));
  /* 11dd194e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1951 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1953 je 0x11dd197a */
  if (C.zf) goto L_11dd197a;
  /* 11dd1955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1957 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1959u);
  /* 11dd1959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd195c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd195e je 0x11dd197a */
  if (C.zf) goto L_11dd197a;
  /* 11dd1960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1962 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1964 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1966u);
  /* 11dd1966 push 0x11dd6444 */
  push32((uint32_t)(0x11dd6444u));
  /* 11dd196b call dword ptr [0x11dd50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c4))), 0x11dd1971u);
  /* 11dd1971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1974 call dword ptr [0x11dd5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5110))), 0x11dd197au);
L_11dd197a:;
  /* 11dd197a push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd197c call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd1982u);
  /* 11dd1982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1985 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1987 je 0x11dd19ae */
  if (C.zf) goto L_11dd19ae;
  /* 11dd1989 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd198b call edi */
  call_ind((uint32_t)(EDI), 0x11dd198du);
  /* 11dd198d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1990 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1992 je 0x11dd19ae */
  if (C.zf) goto L_11dd19ae;
  /* 11dd1994 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1996 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd1998 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd199au);
  /* 11dd199a push 0x11dd643c */
  push32((uint32_t)(0x11dd643cu));
  /* 11dd199f call dword ptr [0x11dd50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c4))), 0x11dd19a5u);
  /* 11dd19a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd19a8 call dword ptr [0x11dd5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5108))), 0x11dd19aeu);
L_11dd19ae:;
  /* 11dd19ae mov edi, dword ptr [0x11dd50b0] */
  EDI = (r32((uint32_t)(0x11dd50b0)));
  /* 11dd19b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd19b6 call edi */
  call_ind((uint32_t)(EDI), 0x11dd19b8u);
  /* 11dd19b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd19bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd19bd je 0x11dd1a76 */
  if (C.zf) goto L_11dd1a76;
  /* 11dd19c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd19c5 call dword ptr [0x11dd5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5118))), 0x11dd19cbu);
  /* 11dd19cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd19ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd19d0 je 0x11dd1a76 */
  if (C.zf) goto L_11dd1a76;
  /* 11dd19d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd19d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd19da call ebx */
  call_ind((uint32_t)(EBX), 0x11dd19dcu);
  /* 11dd19dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd19de push 7 */
  push32((uint32_t)(0x7u));
  /* 11dd19e0 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd19e2u);
  /* 11dd19e2 call 0x11dd1000 */
  push32(0x11dd19e7u); f_11dd1000();
  /* 11dd19e7 push eax */
  push32((uint32_t)(EAX));
  /* 11dd19e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd19ea call esi */
  call_ind((uint32_t)(ESI), 0x11dd19ecu);
  /* 11dd19ec mov eax, dword ptr [0x11dd67c0] */
  EAX = (r32((uint32_t)(0x11dd67c0)));
  /* 11dd19f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd19f4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd19f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd19f8 jle 0x11dd1a1e */
  if ((C.zf||C.sf!=C.of)) goto L_11dd1a1e;
L_11dd19fa:;
  /* 11dd19fa push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd19fc push 0x11dd6978 */
  push32((uint32_t)(0x11dd6978u));
  /* 11dd1a01 push 0x11dd6848 */
  push32((uint32_t)(0x11dd6848u));
  /* 11dd1a06 push 0x11dd68c0 */
  push32((uint32_t)(0x11dd68c0u));
  /* 11dd1a0b call dword ptr [0x11dd511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd511c))), 0x11dd1a11u);
  /* 11dd1a11 mov eax, dword ptr [0x11dd67c0] */
  EAX = (r32((uint32_t)(0x11dd67c0)));
  /* 11dd1a16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1a19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd1a1a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1a1c jl 0x11dd19fa */
  if ((C.sf!=C.of)) goto L_11dd19fa;
L_11dd1a1e:;
  /* 11dd1a1e call 0x11dd1000 */
  push32(0x11dd1a23u); f_11dd1000();
  /* 11dd1a23 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1a26 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1a28u);
  /* 11dd1a28 mov eax, dword ptr [0x11dd67c0] */
  EAX = (r32((uint32_t)(0x11dd67c0)));
  /* 11dd1a2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1a30 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd1a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd1a34 jle 0x11dd1a65 */
  if ((C.zf||C.sf!=C.of)) goto L_11dd1a65;
L_11dd1a36:;
  /* 11dd1a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1a38 push 0x11dd68a8 */
  push32((uint32_t)(0x11dd68a8u));
  /* 11dd1a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1a3f call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1a41u);
  /* 11dd1a41 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd1a43 push 0x11dd67b0 */
  push32((uint32_t)(0x11dd67b0u));
  /* 11dd1a48 push 0x11dd68a8 */
  push32((uint32_t)(0x11dd68a8u));
  /* 11dd1a4d push 0x11dd6878 */
  push32((uint32_t)(0x11dd6878u));
  /* 11dd1a52 call dword ptr [0x11dd511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd511c))), 0x11dd1a58u);
  /* 11dd1a58 mov eax, dword ptr [0x11dd67c0] */
  EAX = (r32((uint32_t)(0x11dd67c0)));
  /* 11dd1a5d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1a60 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd1a61 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1a63 jl 0x11dd1a36 */
  if ((C.sf!=C.of)) goto L_11dd1a36;
L_11dd1a65:;
  /* 11dd1a65 mov eax, dword ptr [0x11dd67c0] */
  EAX = (r32((uint32_t)(0x11dd67c0)));
  /* 11dd1a6a mov edi, dword ptr [0x11dd50b0] */
  EDI = (r32((uint32_t)(0x11dd50b0)));
  /* 11dd1a70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd1a71 mov dword ptr [0x11dd67c0], eax */
  w32((uint32_t)(0x11dd67c0), (EAX));
L_11dd1a76:;
  /* 11dd1a76 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd1a78 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1a7au);
  /* 11dd1a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1a7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1a7f je 0x11dd1af0 */
  if (C.zf) goto L_11dd1af0;
  /* 11dd1a81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1a83 call dword ptr [0x11dd5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5118))), 0x11dd1a89u);
  /* 11dd1a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1a8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1a8e je 0x11dd1af0 */
  if (C.zf) goto L_11dd1af0;
  /* 11dd1a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1a92 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd1a94 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1a96u);
  /* 11dd1a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1a98 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd1a9a call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1a9cu);
  /* 11dd1a9c call 0x11dd1000 */
  push32(0x11dd1aa1u); f_11dd1000();
  /* 11dd1aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11dd1aa2 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd1aa4 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1aa6u);
  /* 11dd1aa6 mov eax, dword ptr [0x11dd67c4] */
  EAX = (r32((uint32_t)(0x11dd67c4)));
  /* 11dd1aab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1aae xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11dd1ab0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd1ab2 jle 0x11dd1ad8 */
  if ((C.zf||C.sf!=C.of)) goto L_11dd1ad8;
L_11dd1ab4:;
  /* 11dd1ab4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1ab6 push 0x11dd6960 */
  push32((uint32_t)(0x11dd6960u));
  /* 11dd1abb push 0x11dd68e0 */
  push32((uint32_t)(0x11dd68e0u));
  /* 11dd1ac0 push 0x11dd67b8 */
  push32((uint32_t)(0x11dd67b8u));
  /* 11dd1ac5 call dword ptr [0x11dd511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd511c))), 0x11dd1acbu);
  /* 11dd1acb mov eax, dword ptr [0x11dd67c4] */
  EAX = (r32((uint32_t)(0x11dd67c4)));
  /* 11dd1ad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1ad3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11dd1ad4 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1ad6 jl 0x11dd1ab4 */
  if ((C.sf!=C.of)) goto L_11dd1ab4;
L_11dd1ad8:;
  /* 11dd1ad8 call 0x11dd1000 */
  push32(0x11dd1addu); f_11dd1000();
  /* 11dd1add push eax */
  push32((uint32_t)(EAX));
  /* 11dd1ade push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1ae0 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1ae2u);
  /* 11dd1ae2 mov eax, dword ptr [0x11dd67c4] */
  EAX = (r32((uint32_t)(0x11dd67c4)));
  /* 11dd1ae7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1aea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd1aeb mov dword ptr [0x11dd67c4], eax */
  w32((uint32_t)(0x11dd67c4), (EAX));
L_11dd1af0:;
  /* 11dd1af0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11dd1af2 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1af4u);
  /* 11dd1af4 mov esi, dword ptr [0x11dd5114] */
  ESI = (r32((uint32_t)(0x11dd5114)));
  /* 11dd1afa mov edi, dword ptr [0x11dd5124] */
  EDI = (r32((uint32_t)(0x11dd5124)));
  /* 11dd1b00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1b03 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1b05 je 0x11dd1bd9 */
  if (C.zf) goto L_11dd1bd9;
  /* 11dd1b0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b0d call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd1b13u);
  /* 11dd1b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1b16 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1b18 jne 0x11dd1bd9 */
  if (!C.zf) goto L_11dd1bd9;
  /* 11dd1b1e push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1b20 call dword ptr [0x11dd5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5118))), 0x11dd1b26u);
  /* 11dd1b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1b29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1b2b je 0x11dd1bd9 */
  if (C.zf) goto L_11dd1bd9;
  /* 11dd1b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1b33 push 7 */
  push32((uint32_t)(0x7u));
  /* 11dd1b35 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1b37u);
  /* 11dd1b37 mov ebp, dword ptr [0x11dd50d4] */
  EBP = (r32((uint32_t)(0x11dd50d4)));
  /* 11dd1b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1b3f push 0x11dd6978 */
  push32((uint32_t)(0x11dd6978u));
  /* 11dd1b44 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1b46u);
  /* 11dd1b46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1b48 push 0x11dd67b0 */
  push32((uint32_t)(0x11dd67b0u));
  /* 11dd1b4d call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1b4fu);
  /* 11dd1b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1b51 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dd1b53 push 0x11dd67d8 */
  push32((uint32_t)(0x11dd67d8u));
  /* 11dd1b58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b5a call esi */
  call_ind((uint32_t)(ESI), 0x11dd1b5cu);
  /* 11dd1b5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b5e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11dd1b60 push 0x11dd67e0 */
  push32((uint32_t)(0x11dd67e0u));
  /* 11dd1b65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b67 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1b69u);
  /* 11dd1b69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b6b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dd1b70 push 0x11dd67e8 */
  push32((uint32_t)(0x11dd67e8u));
  /* 11dd1b75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b77 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1b79u);
  /* 11dd1b79 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b7e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dd1b80 push 0x11dd67f0 */
  push32((uint32_t)(0x11dd67f0u));
  /* 11dd1b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b87 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1b89u);
  /* 11dd1b89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11dd1b8d push 0x11dd6800 */
  push32((uint32_t)(0x11dd6800u));
  /* 11dd1b92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b94 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1b96u);
  /* 11dd1b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1b98 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11dd1b9d push 0x11dd6808 */
  push32((uint32_t)(0x11dd6808u));
  /* 11dd1ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1ba4 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1ba6u);
  /* 11dd1ba6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1ba8 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11dd1baa push 0x11dd67d0 */
  push32((uint32_t)(0x11dd67d0u));
  /* 11dd1baf push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1bb1 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1bb3u);
  /* 11dd1bb3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1bb6 push 0x11dd6980 */
  push32((uint32_t)(0x11dd6980u));
  /* 11dd1bbb push 0x11dd6978 */
  push32((uint32_t)(0x11dd6978u));
  /* 11dd1bc0 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1bc2u);
  /* 11dd1bc2 push 0x11dd67a8 */
  push32((uint32_t)(0x11dd67a8u));
  /* 11dd1bc7 push 0x11dd67b0 */
  push32((uint32_t)(0x11dd67b0u));
  /* 11dd1bcc call edi */
  call_ind((uint32_t)(EDI), 0x11dd1bceu);
  /* 11dd1bce push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1bd0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dd1bd2 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1bd4u);
  /* 11dd1bd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1bd7 jmp 0x11dd1bdf */
  goto L_11dd1bdf;
L_11dd1bd9:;
  /* 11dd1bd9 mov ebp, dword ptr [0x11dd50d4] */
  EBP = (r32((uint32_t)(0x11dd50d4)));
L_11dd1bdf:;
  /* 11dd1bdf push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd1be1 call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd1be7u);
  /* 11dd1be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1bea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1bec je 0x11dd1ca6 */
  if (C.zf) goto L_11dd1ca6;
  /* 11dd1bf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1bf4 call dword ptr [0x11dd50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50b0))), 0x11dd1bfau);
  /* 11dd1bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1bfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1bff jne 0x11dd1ca6 */
  if (!C.zf) goto L_11dd1ca6;
  /* 11dd1c05 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd1c07 call dword ptr [0x11dd5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5118))), 0x11dd1c0du);
  /* 11dd1c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1c10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1c12 je 0x11dd1ca6 */
  if (C.zf) goto L_11dd1ca6;
  /* 11dd1c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1c1a push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd1c1c call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1c1eu);
  /* 11dd1c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1c20 push 0x11dd6960 */
  push32((uint32_t)(0x11dd6960u));
  /* 11dd1c25 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1c27u);
  /* 11dd1c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1c29 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dd1c2e push 0x11dd6818 */
  push32((uint32_t)(0x11dd6818u));
  /* 11dd1c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c35 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c37u);
  /* 11dd1c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c39 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dd1c3e push 0x11dd6820 */
  push32((uint32_t)(0x11dd6820u));
  /* 11dd1c43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c45 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c47u);
  /* 11dd1c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c49 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11dd1c4b push 0x11dd6828 */
  push32((uint32_t)(0x11dd6828u));
  /* 11dd1c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c52 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c54u);
  /* 11dd1c54 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1c57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c59 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11dd1c5b push 0x11dd6830 */
  push32((uint32_t)(0x11dd6830u));
  /* 11dd1c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c62 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c64u);
  /* 11dd1c64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c66 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11dd1c68 push 0x11dd6838 */
  push32((uint32_t)(0x11dd6838u));
  /* 11dd1c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c6f call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c71u);
  /* 11dd1c71 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c73 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dd1c78 push 0x11dd6840 */
  push32((uint32_t)(0x11dd6840u));
  /* 11dd1c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c7f call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c81u);
  /* 11dd1c81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c83 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dd1c85 push 0x11dd6810 */
  push32((uint32_t)(0x11dd6810u));
  /* 11dd1c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1c8c call esi */
  call_ind((uint32_t)(ESI), 0x11dd1c8eu);
  /* 11dd1c8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1c91 push 0x11dd6958 */
  push32((uint32_t)(0x11dd6958u));
  /* 11dd1c96 push 0x11dd6960 */
  push32((uint32_t)(0x11dd6960u));
  /* 11dd1c9b call edi */
  call_ind((uint32_t)(EDI), 0x11dd1c9du);
  /* 11dd1c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1c9f push 6 */
  push32((uint32_t)(0x6u));
  /* 11dd1ca1 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1ca3u);
  /* 11dd1ca3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1ca6:;
  /* 11dd1ca6 mov edi, dword ptr [0x11dd50b0] */
  EDI = (r32((uint32_t)(0x11dd50b0)));
  /* 11dd1cac push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd1cae call edi */
  call_ind((uint32_t)(EDI), 0x11dd1cb0u);
  /* 11dd1cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1cb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1cb5 je 0x11dd1d4e */
  if (C.zf) goto L_11dd1d4e;
  /* 11dd1cbb push 0x11dd6988 */
  push32((uint32_t)(0x11dd6988u));
  /* 11dd1cc0 push 0x11dd67f8 */
  push32((uint32_t)(0x11dd67f8u));
  /* 11dd1cc5 call dword ptr [0x11dd5128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5128))), 0x11dd1ccbu);
  /* 11dd1ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd1cd0 je 0x11dd1d4e */
  if (C.zf) goto L_11dd1d4e;
  /* 11dd1cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1cd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd1cd6 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1cd8u);
  /* 11dd1cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1cda push 0x11dd6948 */
  push32((uint32_t)(0x11dd6948u));
  /* 11dd1cdf call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1ce1u);
  /* 11dd1ce1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1ce3 call dword ptr [0x11dd50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50cc))), 0x11dd1ce9u);
  /* 11dd1ce9 push 0x11dd6434 */
  push32((uint32_t)(0x11dd6434u));
  /* 11dd1cee call dword ptr [0x11dd50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c4))), 0x11dd1cf4u);
  /* 11dd1cf4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11dd1cf6 call dword ptr [0x11dd50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50c8))), 0x11dd1cfcu);
  /* 11dd1cfc push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11dd1cfe call dword ptr [0x11dd5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5104))), 0x11dd1d04u);
  /* 11dd1d04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd1d06 call dword ptr [0x11dd5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5100))), 0x11dd1d0cu);
  /* 11dd1d0c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11dd1d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1d15 call dword ptr [0x11dd5120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5120))), 0x11dd1d1bu);
  /* 11dd1d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1d1d push 0x11dd6988 */
  push32((uint32_t)(0x11dd6988u));
  /* 11dd1d22 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1d24u);
  /* 11dd1d24 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1d28 call dword ptr [0x11dd50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50f0))), 0x11dd1d2eu);
  /* 11dd1d2e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1d33 push 0x11dd6988 */
  push32((uint32_t)(0x11dd6988u));
  /* 11dd1d38 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1d3au);
  /* 11dd1d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1d3c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11dd1d3e push 0x11dd6860 */
  push32((uint32_t)(0x11dd6860u));
  /* 11dd1d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd1d45 call dword ptr [0x11dd5130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5130))), 0x11dd1d4bu);
  /* 11dd1d4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1d4e:;
  /* 11dd1d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 11dd1d50 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1d52u);
  /* 11dd1d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1d55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1d57 je 0x11dd1d9f */
  if (C.zf) goto L_11dd1d9f;
  /* 11dd1d59 mov ebp, dword ptr [0x11dd5118] */
  EBP = (r32((uint32_t)(0x11dd5118)));
  /* 11dd1d5f push 0xa */
  push32((uint32_t)(0xau));
  /* 11dd1d61 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1d63u);
  /* 11dd1d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1d66 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1d68 je 0x11dd1da5 */
  if (C.zf) goto L_11dd1da5;
  /* 11dd1d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1d6c push 0xa */
  push32((uint32_t)(0xau));
  /* 11dd1d6e call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1d70u);
  /* 11dd1d70 mov esi, dword ptr [0x11dd50c0] */
  ESI = (r32((uint32_t)(0x11dd50c0)));
  /* 11dd1d76 push 0x11dd6418 */
  push32((uint32_t)(0x11dd6418u));
  /* 11dd1d7b push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1d80 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1d82u);
  /* 11dd1d82 push 0x11dd6404 */
  push32((uint32_t)(0x11dd6404u));
  /* 11dd1d87 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1d8c call esi */
  call_ind((uint32_t)(ESI), 0x11dd1d8eu);
  /* 11dd1d8e push 0x11dd63f0 */
  push32((uint32_t)(0x11dd63f0u));
  /* 11dd1d93 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1d98 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1d9au);
  /* 11dd1d9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1d9d jmp 0x11dd1dab */
  goto L_11dd1dab;
L_11dd1d9f:;
  /* 11dd1d9f mov ebp, dword ptr [0x11dd5118] */
  EBP = (r32((uint32_t)(0x11dd5118)));
L_11dd1da5:;
  /* 11dd1da5 mov esi, dword ptr [0x11dd50c0] */
  ESI = (r32((uint32_t)(0x11dd50c0)));
L_11dd1dab:;
  /* 11dd1dab push 0xb */
  push32((uint32_t)(0xbu));
  /* 11dd1dad call edi */
  call_ind((uint32_t)(EDI), 0x11dd1dafu);
  /* 11dd1daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1db2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1db4 je 0x11dd1dee */
  if (C.zf) goto L_11dd1dee;
  /* 11dd1db6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11dd1db8 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1dbau);
  /* 11dd1dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1dbd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1dbf je 0x11dd1dee */
  if (C.zf) goto L_11dd1dee;
  /* 11dd1dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1dc3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11dd1dc5 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1dc7u);
  /* 11dd1dc7 push 0x11dd63d4 */
  push32((uint32_t)(0x11dd63d4u));
  /* 11dd1dcc push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1dd1 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1dd3u);
  /* 11dd1dd3 push 0x11dd63c0 */
  push32((uint32_t)(0x11dd63c0u));
  /* 11dd1dd8 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1ddd call esi */
  call_ind((uint32_t)(ESI), 0x11dd1ddfu);
  /* 11dd1ddf push 0x11dd63ac */
  push32((uint32_t)(0x11dd63acu));
  /* 11dd1de4 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1de9 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1debu);
  /* 11dd1deb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1dee:;
  /* 11dd1dee push 0xc */
  push32((uint32_t)(0xcu));
  /* 11dd1df0 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1df2u);
  /* 11dd1df2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1df5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1df7 je 0x11dd1e31 */
  if (C.zf) goto L_11dd1e31;
  /* 11dd1df9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11dd1dfb call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1dfdu);
  /* 11dd1dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1e00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1e02 je 0x11dd1e31 */
  if (C.zf) goto L_11dd1e31;
  /* 11dd1e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1e06 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11dd1e08 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1e0au);
  /* 11dd1e0a push 0x11dd6390 */
  push32((uint32_t)(0x11dd6390u));
  /* 11dd1e0f push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e14 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e16u);
  /* 11dd1e16 push 0x11dd637c */
  push32((uint32_t)(0x11dd637cu));
  /* 11dd1e1b push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e20 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e22u);
  /* 11dd1e22 push 0x11dd6368 */
  push32((uint32_t)(0x11dd6368u));
  /* 11dd1e27 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e2c call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e2eu);
  /* 11dd1e2e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1e31:;
  /* 11dd1e31 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dd1e33 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1e35u);
  /* 11dd1e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1e38 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1e3a je 0x11dd1e74 */
  if (C.zf) goto L_11dd1e74;
  /* 11dd1e3c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dd1e3e call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1e40u);
  /* 11dd1e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1e43 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1e45 je 0x11dd1e74 */
  if (C.zf) goto L_11dd1e74;
  /* 11dd1e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1e49 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dd1e4b call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1e4du);
  /* 11dd1e4d push 0x11dd634c */
  push32((uint32_t)(0x11dd634cu));
  /* 11dd1e52 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e57 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e59u);
  /* 11dd1e59 push 0x11dd6338 */
  push32((uint32_t)(0x11dd6338u));
  /* 11dd1e5e push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e63 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e65u);
  /* 11dd1e65 push 0x11dd6324 */
  push32((uint32_t)(0x11dd6324u));
  /* 11dd1e6a push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e6f call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e71u);
  /* 11dd1e71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1e74:;
  /* 11dd1e74 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11dd1e76 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1e78u);
  /* 11dd1e78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1e7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1e7d je 0x11dd1eb7 */
  if (C.zf) goto L_11dd1eb7;
  /* 11dd1e7f push 0xe */
  push32((uint32_t)(0xeu));
  /* 11dd1e81 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1e83u);
  /* 11dd1e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1e86 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1e88 je 0x11dd1eb7 */
  if (C.zf) goto L_11dd1eb7;
  /* 11dd1e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1e8c push 0xe */
  push32((uint32_t)(0xeu));
  /* 11dd1e8e call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1e90u);
  /* 11dd1e90 push 0x11dd6308 */
  push32((uint32_t)(0x11dd6308u));
  /* 11dd1e95 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1e9a call esi */
  call_ind((uint32_t)(ESI), 0x11dd1e9cu);
  /* 11dd1e9c push 0x11dd62f4 */
  push32((uint32_t)(0x11dd62f4u));
  /* 11dd1ea1 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1ea6 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1ea8u);
  /* 11dd1ea8 push 0x11dd62e0 */
  push32((uint32_t)(0x11dd62e0u));
  /* 11dd1ead push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1eb2 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1eb4u);
  /* 11dd1eb4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1eb7:;
  /* 11dd1eb7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11dd1eb9 call edi */
  call_ind((uint32_t)(EDI), 0x11dd1ebbu);
  /* 11dd1ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1ebe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1ec0 je 0x11dd1efa */
  if (C.zf) goto L_11dd1efa;
  /* 11dd1ec2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11dd1ec4 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1ec6u);
  /* 11dd1ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1ec9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1ecb je 0x11dd1efa */
  if (C.zf) goto L_11dd1efa;
  /* 11dd1ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1ecf push 0xf */
  push32((uint32_t)(0xfu));
  /* 11dd1ed1 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1ed3u);
  /* 11dd1ed3 push 0x11dd62c4 */
  push32((uint32_t)(0x11dd62c4u));
  /* 11dd1ed8 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1edd call esi */
  call_ind((uint32_t)(ESI), 0x11dd1edfu);
  /* 11dd1edf push 0x11dd62b0 */
  push32((uint32_t)(0x11dd62b0u));
  /* 11dd1ee4 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1ee9 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1eebu);
  /* 11dd1eeb push 0x11dd629c */
  push32((uint32_t)(0x11dd629cu));
  /* 11dd1ef0 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1ef5 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1ef7u);
  /* 11dd1ef7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1efa:;
  /* 11dd1efa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dd1efc call edi */
  call_ind((uint32_t)(EDI), 0x11dd1efeu);
  /* 11dd1efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1f01 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1f03 je 0x11dd1f3d */
  if (C.zf) goto L_11dd1f3d;
  /* 11dd1f05 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dd1f07 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1f09u);
  /* 11dd1f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1f0c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1f0e je 0x11dd1f3d */
  if (C.zf) goto L_11dd1f3d;
  /* 11dd1f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1f12 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dd1f14 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1f16u);
  /* 11dd1f16 push 0x11dd6294 */
  push32((uint32_t)(0x11dd6294u));
  /* 11dd1f1b push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f20 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f22u);
  /* 11dd1f22 push 0x11dd628c */
  push32((uint32_t)(0x11dd628cu));
  /* 11dd1f27 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f2c call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f2eu);
  /* 11dd1f2e push 0x11dd6284 */
  push32((uint32_t)(0x11dd6284u));
  /* 11dd1f33 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f38 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f3au);
  /* 11dd1f3a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1f3d:;
  /* 11dd1f3d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd1f3f call edi */
  call_ind((uint32_t)(EDI), 0x11dd1f41u);
  /* 11dd1f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1f44 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1f46 je 0x11dd1f8c */
  if (C.zf) goto L_11dd1f8c;
  /* 11dd1f48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd1f4a call ebp */
  call_ind((uint32_t)(EBP), 0x11dd1f4cu);
  /* 11dd1f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1f4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd1f51 je 0x11dd1f8c */
  if (C.zf) goto L_11dd1f8c;
  /* 11dd1f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd1f55 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd1f57 call ebx */
  call_ind((uint32_t)(EBX), 0x11dd1f59u);
  /* 11dd1f59 push 0x11dd627c */
  push32((uint32_t)(0x11dd627cu));
  /* 11dd1f5e push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f63 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f65u);
  /* 11dd1f65 push 0x11dd6274 */
  push32((uint32_t)(0x11dd6274u));
  /* 11dd1f6a push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f6f call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f71u);
  /* 11dd1f71 push 0x11dd626c */
  push32((uint32_t)(0x11dd626cu));
  /* 11dd1f76 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f7b call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f7du);
  /* 11dd1f7d push 0x11dd6264 */
  push32((uint32_t)(0x11dd6264u));
  /* 11dd1f82 push 0x11dd6220 */
  push32((uint32_t)(0x11dd6220u));
  /* 11dd1f87 call esi */
  call_ind((uint32_t)(ESI), 0x11dd1f89u);
  /* 11dd1f89 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd1f8c:;
  /* 11dd1f8c pop edi */
  EDI = (pop32());
  /* 11dd1f8d pop esi */
  ESI = (pop32());
  /* 11dd1f8e pop ebp */
  EBP = (pop32());
  /* 11dd1f8f pop ebx */
  EBX = (pop32());
  /* 11dd1f90 ret  */
  ESPCHK(0x11dd13a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fa0 @ 0x11dd1fa0 (217 bytes, 57 insns) */
void f_11dd1fa0(void) {
  FTRACE(0x11dd1fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd1fa0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd1fa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd1fa7 jne 0x11dd2035 */
  if (!C.zf) goto L_11dd2035;
  /* 11dd1fad call dword ptr [0x11dd5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5090))), 0x11dd1fb3u);
  /* 11dd1fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd1fb5 mov dword ptr [0x11dd69ac], eax */
  w32((uint32_t)(0x11dd69ac), (EAX));
  /* 11dd1fba call 0x11dd29d4 */
  push32(0x11dd1fbfu); f_11dd29d4();
  /* 11dd1fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd1fc1 pop ecx */
  ECX = (pop32());
  /* 11dd1fc2 je 0x11dd2000 */
  if (C.zf) goto L_11dd2000;
  /* 11dd1fc4 mov eax, dword ptr [0x11dd69ac] */
  EAX = (r32((uint32_t)(0x11dd69ac)));
  /* 11dd1fc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dd1fcb mov cl, byte ptr [0x11dd69ad] */
  CL = (r8((uint32_t)(0x11dd69ad)));
  /* 11dd1fd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd1fd6 shr dword ptr [0x11dd69ac], 0x10 */
  w32((uint32_t)(0x11dd69ac), (sh_shr((uint32_t)(r32((uint32_t)(0x11dd69ac))), (0x10u)&0x1f, 32)));
  /* 11dd1fdd mov dword ptr [0x11dd69b4], eax */
  w32((uint32_t)(0x11dd69b4), (EAX));
  /* 11dd1fe2 mov dword ptr [0x11dd69b8], ecx */
  w32((uint32_t)(0x11dd69b8), (ECX));
  /* 11dd1fe8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dd1feb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd1fed mov dword ptr [0x11dd69b0], eax */
  w32((uint32_t)(0x11dd69b0), (EAX));
  /* 11dd1ff2 call 0x11dd2267 */
  push32(0x11dd1ff7u); f_11dd2267();
  /* 11dd1ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd1ff9 jne 0x11dd2004 */
  if (!C.zf) goto L_11dd2004;
  /* 11dd1ffb call 0x11dd2a10 */
  push32(0x11dd2000u); f_11dd2a10();
L_11dd2000:;
  /* 11dd2000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2002 jmp 0x11dd2076 */
  goto L_11dd2076;
L_11dd2004:;
  /* 11dd2004 call dword ptr [0x11dd508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd508c))), 0x11dd200au);
  /* 11dd200a mov dword ptr [0x11dd6f18], eax */
  w32((uint32_t)(0x11dd6f18), (EAX));
  /* 11dd200f call 0x11dd28a2 */
  push32(0x11dd2014u); f_11dd28a2();
  /* 11dd2014 mov dword ptr [0x11dd6998], eax */
  w32((uint32_t)(0x11dd6998), (EAX));
  /* 11dd2019 call 0x11dd238c */
  push32(0x11dd201eu); f_11dd238c();
  /* 11dd201e call 0x11dd2655 */
  push32(0x11dd2023u); f_11dd2655();
  /* 11dd2023 call 0x11dd259c */
  push32(0x11dd2028u); f_11dd259c();
  /* 11dd2028 call 0x11dd2149 */
  push32(0x11dd202du); f_11dd2149();
  /* 11dd202d inc dword ptr [0x11dd6994] */
  { uint32_t _r=(r32((uint32_t)(0x11dd6994)))+1; w32((uint32_t)(0x11dd6994), (_r)); fl_inc(_r,32); }
  /* 11dd2033 jmp 0x11dd2073 */
  goto L_11dd2073;
L_11dd2035:;
  /* 11dd2035 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dd2037 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2039 jne 0x11dd2067 */
  if (!C.zf) goto L_11dd2067;
  /* 11dd203b cmp dword ptr [0x11dd6994], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11dd6994))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2041 jle 0x11dd2000 */
  if ((C.zf||C.sf!=C.of)) goto L_11dd2000;
  /* 11dd2043 dec dword ptr [0x11dd6994] */
  { uint32_t _r=(r32((uint32_t)(0x11dd6994)))-1; w32((uint32_t)(0x11dd6994), (_r)); fl_dec(_r,32); }
  /* 11dd2049 cmp dword ptr [0x11dd69e4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11dd69e4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd204f jne 0x11dd2056 */
  if (!C.zf) goto L_11dd2056;
  /* 11dd2051 call 0x11dd2187 */
  push32(0x11dd2056u); f_11dd2187();
L_11dd2056:;
  /* 11dd2056 call 0x11dd2548 */
  push32(0x11dd205bu); f_11dd2548();
  /* 11dd205b call 0x11dd22bb */
  push32(0x11dd2060u); f_11dd22bb();
  /* 11dd2060 call 0x11dd2a10 */
  push32(0x11dd2065u); f_11dd2a10();
  /* 11dd2065 jmp 0x11dd2073 */
  goto L_11dd2073;
L_11dd2067:;
  /* 11dd2067 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd206a jne 0x11dd2073 */
  if (!C.zf) goto L_11dd2073;
  /* 11dd206c push ecx */
  push32((uint32_t)(ECX));
  /* 11dd206d call 0x11dd22ec */
  push32(0x11dd2072u); f_11dd22ec();
  /* 11dd2072 pop ecx */
  ECX = (pop32());
L_11dd2073:;
  /* 11dd2073 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd2075 pop eax */
  EAX = (pop32());
L_11dd2076:;
  /* 11dd2076 ret 0xc */
  ESPCHK(0x11dd1fa0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11dd2079 (157 bytes, 73 insns) */
void f_11dd2079(void) {
  FTRACE(0x11dd2079u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2079 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd207a mov ebp, esp */
  EBP = (ESP);
  /* 11dd207c push ebx */
  push32((uint32_t)(EBX));
  /* 11dd207d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd2080 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2081 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd2084 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2085 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11dd2088 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd208a jne 0x11dd2095 */
  if (!C.zf) goto L_11dd2095;
  /* 11dd208c cmp dword ptr [0x11dd6994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dd6994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2093 jmp 0x11dd20bb */
  goto L_11dd20bb;
L_11dd2095:;
  /* 11dd2095 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2098 je 0x11dd209f */
  if (C.zf) goto L_11dd209f;
  /* 11dd209a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd209d jne 0x11dd20c1 */
  if (!C.zf) goto L_11dd20c1;
L_11dd209f:;
  /* 11dd209f mov eax, dword ptr [0x11dd6f1c] */
  EAX = (r32((uint32_t)(0x11dd6f1c)));
  /* 11dd20a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd20a6 je 0x11dd20b1 */
  if (C.zf) goto L_11dd20b1;
  /* 11dd20a8 push edi */
  push32((uint32_t)(EDI));
  /* 11dd20a9 push esi */
  push32((uint32_t)(ESI));
  /* 11dd20aa push ebx */
  push32((uint32_t)(EBX));
  /* 11dd20ab call eax */
  call_ind((uint32_t)(EAX), 0x11dd20adu);
  /* 11dd20ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd20af je 0x11dd20bd */
  if (C.zf) goto L_11dd20bd;
L_11dd20b1:;
  /* 11dd20b1 push edi */
  push32((uint32_t)(EDI));
  /* 11dd20b2 push esi */
  push32((uint32_t)(ESI));
  /* 11dd20b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd20b4 call 0x11dd1fa0 */
  push32(0x11dd20b9u); f_11dd1fa0();
  /* 11dd20b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11dd20bb:;
  /* 11dd20bb jne 0x11dd20c1 */
  if (!C.zf) goto L_11dd20c1;
L_11dd20bd:;
  /* 11dd20bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd20bf jmp 0x11dd210f */
  goto L_11dd210f;
L_11dd20c1:;
  /* 11dd20c1 push edi */
  push32((uint32_t)(EDI));
  /* 11dd20c2 push esi */
  push32((uint32_t)(ESI));
  /* 11dd20c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd20c4 call 0x11dd1380 */
  push32(0x11dd20c9u); f_11dd1380();
  /* 11dd20c9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd20cc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11dd20cf jne 0x11dd20dd */
  if (!C.zf) goto L_11dd20dd;
  /* 11dd20d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd20d3 jne 0x11dd210c */
  if (!C.zf) goto L_11dd210c;
  /* 11dd20d5 push edi */
  push32((uint32_t)(EDI));
  /* 11dd20d6 push eax */
  push32((uint32_t)(EAX));
  /* 11dd20d7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd20d8 call 0x11dd1fa0 */
  push32(0x11dd20ddu); f_11dd1fa0();
L_11dd20dd:;
  /* 11dd20dd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd20df je 0x11dd20e6 */
  if (C.zf) goto L_11dd20e6;
  /* 11dd20e1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd20e4 jne 0x11dd210c */
  if (!C.zf) goto L_11dd210c;
L_11dd20e6:;
  /* 11dd20e6 push edi */
  push32((uint32_t)(EDI));
  /* 11dd20e7 push esi */
  push32((uint32_t)(ESI));
  /* 11dd20e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd20e9 call 0x11dd1fa0 */
  push32(0x11dd20eeu); f_11dd1fa0();
  /* 11dd20ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd20f0 jne 0x11dd20f5 */
  if (!C.zf) goto L_11dd20f5;
  /* 11dd20f2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11dd20f5:;
  /* 11dd20f5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd20f9 je 0x11dd210c */
  if (C.zf) goto L_11dd210c;
  /* 11dd20fb mov eax, dword ptr [0x11dd6f1c] */
  EAX = (r32((uint32_t)(0x11dd6f1c)));
  /* 11dd2100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2102 je 0x11dd210c */
  if (C.zf) goto L_11dd210c;
  /* 11dd2104 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2105 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2106 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2107 call eax */
  call_ind((uint32_t)(EAX), 0x11dd2109u);
  /* 11dd2109 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11dd210c:;
  /* 11dd210c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11dd210f:;
  /* 11dd210f pop edi */
  EDI = (pop32());
  /* 11dd2110 pop esi */
  ESI = (pop32());
  /* 11dd2111 pop ebx */
  EBX = (pop32());
  /* 11dd2112 pop ebp */
  EBP = (pop32());
  /* 11dd2113 ret 0xc */
  ESPCHK(0x11dd2079u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11dd2116 (48 bytes, 15 insns) */
void f_11dd2116(void) {
  FTRACE(0x11dd2116u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2116 mov eax, dword ptr [0x11dd69a0] */
  EAX = (r32((uint32_t)(0x11dd69a0)));
  /* 11dd211b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd211e je 0x11dd212d */
  if (C.zf) goto L_11dd212d;
  /* 11dd2120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2122 jne 0x11dd2132 */
  if (!C.zf) goto L_11dd2132;
  /* 11dd2124 cmp dword ptr [0x11dd69a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dd69a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd212b jne 0x11dd2132 */
  if (!C.zf) goto L_11dd2132;
L_11dd212d:;
  /* 11dd212d call 0x11dd2a85 */
  push32(0x11dd2132u); f_11dd2a85();
L_11dd2132:;
  /* 11dd2132 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dd2136 call 0x11dd2abe */
  push32(0x11dd213bu); f_11dd2abe();
  /* 11dd213b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11dd2140 call dword ptr [0x11dd6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd6478))), 0x11dd2146u);
  /* 11dd2146 pop ecx */
  ECX = (pop32());
  /* 11dd2147 pop ecx */
  ECX = (pop32());
  /* 11dd2148 ret  */
  ESPCHK(0x11dd2116u, _esp0);
  ESP += 4; return;
}

/* FUN_10002149 @ 0x11dd2149 (45 bytes, 12 insns) */
void f_11dd2149(void) {
  FTRACE(0x11dd2149u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2149 mov eax, dword ptr [0x11dd6f14] */
  EAX = (r32((uint32_t)(0x11dd6f14)));
  /* 11dd214e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2150 je 0x11dd2154 */
  if (C.zf) goto L_11dd2154;
  /* 11dd2152 call eax */
  call_ind((uint32_t)(EAX), 0x11dd2154u);
L_11dd2154:;
  /* 11dd2154 push 0x11dd6010 */
  push32((uint32_t)(0x11dd6010u));
  /* 11dd2159 push 0x11dd6008 */
  push32((uint32_t)(0x11dd6008u));
  /* 11dd215e call 0x11dd224d */
  push32(0x11dd2163u); f_11dd224d();
  /* 11dd2163 push 0x11dd6004 */
  push32((uint32_t)(0x11dd6004u));
  /* 11dd2168 push 0x11dd6000 */
  push32((uint32_t)(0x11dd6000u));
  /* 11dd216d call 0x11dd224d */
  push32(0x11dd2172u); f_11dd224d();
  /* 11dd2172 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2175 ret  */
  ESPCHK(0x11dd2149u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11dd2176 (17 bytes, 6 insns) */
void f_11dd2176(void) {
  FTRACE(0x11dd2176u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2176 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2178 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd217a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11dd217e call 0x11dd2196 */
  push32(0x11dd2183u); f_11dd2196();
  /* 11dd2183 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2186 ret  */
  ESPCHK(0x11dd2176u, _esp0);
  ESP += 4; return;
}

/* FUN_10002187 @ 0x11dd2187 (15 bytes, 6 insns) */
void f_11dd2187(void) {
  FTRACE(0x11dd2187u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2187 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd2189 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd218b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd218d call 0x11dd2196 */
  push32(0x11dd2192u); f_11dd2196();
  /* 11dd2192 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2195 ret  */
  ESPCHK(0x11dd2187u, _esp0);
  ESP += 4; return;
}

/* FUN_10002196 @ 0x11dd2196 (163 bytes, 53 insns) */
void f_11dd2196(void) {
  FTRACE(0x11dd2196u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2196 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2197 call 0x11dd223b */
  push32(0x11dd219cu); f_11dd223b();
  /* 11dd219c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd219e pop edi */
  EDI = (pop32());
  /* 11dd219f cmp dword ptr [0x11dd69e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dd69e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd21a5 jne 0x11dd21b8 */
  if (!C.zf) goto L_11dd21b8;
  /* 11dd21a7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11dd21ab call dword ptr [0x11dd5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5000))), 0x11dd21b1u);
  /* 11dd21b1 push eax */
  push32((uint32_t)(EAX));
  /* 11dd21b2 call dword ptr [0x11dd5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5098))), 0x11dd21b8u);
L_11dd21b8:;
  /* 11dd21b8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd21bd push ebx */
  push32((uint32_t)(EBX));
  /* 11dd21be mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11dd21c2 mov dword ptr [0x11dd69e4], edi */
  w32((uint32_t)(0x11dd69e4), (EDI));
  /* 11dd21c8 mov byte ptr [0x11dd69e0], bl */
  w8((uint32_t)(0x11dd69e0), (BL));
  /* 11dd21ce jne 0x11dd220c */
  if (!C.zf) goto L_11dd220c;
  /* 11dd21d0 mov eax, dword ptr [0x11dd6f10] */
  EAX = (r32((uint32_t)(0x11dd6f10)));
  /* 11dd21d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd21d7 je 0x11dd21fb */
  if (C.zf) goto L_11dd21fb;
  /* 11dd21d9 mov ecx, dword ptr [0x11dd6f0c] */
  ECX = (r32((uint32_t)(0x11dd6f0c)));
  /* 11dd21df push esi */
  push32((uint32_t)(ESI));
  /* 11dd21e0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11dd21e3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd21e5 jb 0x11dd21fa */
  if (C.cf) goto L_11dd21fa;
L_11dd21e7:;
  /* 11dd21e7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dd21e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd21eb je 0x11dd21ef */
  if (C.zf) goto L_11dd21ef;
  /* 11dd21ed call eax */
  call_ind((uint32_t)(EAX), 0x11dd21efu);
L_11dd21ef:;
  /* 11dd21ef sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd21f2 cmp esi, dword ptr [0x11dd6f10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dd6f10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd21f8 jae 0x11dd21e7 */
  if (!C.cf) goto L_11dd21e7;
L_11dd21fa:;
  /* 11dd21fa pop esi */
  ESI = (pop32());
L_11dd21fb:;
  /* 11dd21fb push 0x11dd6018 */
  push32((uint32_t)(0x11dd6018u));
  /* 11dd2200 push 0x11dd6014 */
  push32((uint32_t)(0x11dd6014u));
  /* 11dd2205 call 0x11dd224d */
  push32(0x11dd220au); f_11dd224d();
  /* 11dd220a pop ecx */
  ECX = (pop32());
  /* 11dd220b pop ecx */
  ECX = (pop32());
L_11dd220c:;
  /* 11dd220c push 0x11dd6020 */
  push32((uint32_t)(0x11dd6020u));
  /* 11dd2211 push 0x11dd601c */
  push32((uint32_t)(0x11dd601cu));
  /* 11dd2216 call 0x11dd224d */
  push32(0x11dd221bu); f_11dd224d();
  /* 11dd221b pop ecx */
  ECX = (pop32());
  /* 11dd221c pop ecx */
  ECX = (pop32());
  /* 11dd221d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dd221f pop ebx */
  EBX = (pop32());
  /* 11dd2220 je 0x11dd2229 */
  if (C.zf) goto L_11dd2229;
  /* 11dd2222 call 0x11dd2244 */
  push32(0x11dd2227u); f_11dd2244();
  /* 11dd2227 pop edi */
  EDI = (pop32());
  /* 11dd2228 ret  */
  ESPCHK(0x11dd2196u, _esp0);
  ESP += 4; return;
L_11dd2229:;
  /* 11dd2229 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11dd222d mov dword ptr [0x11dd69e8], edi */
  w32((uint32_t)(0x11dd69e8), (EDI));
  /* 11dd2233 call dword ptr [0x11dd5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5094))), 0x11dd2239u);
  /* 11dd2239 pop edi */
  EDI = (pop32());
  /* 11dd223a ret  */
  ESPCHK(0x11dd2196u, _esp0);
  ESP += 4; return;
}

/* FUN_1000223b @ 0x11dd223b (9 bytes, 4 insns) */
void f_11dd223b(void) {
  FTRACE(0x11dd223bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd223b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dd223d call 0x11dd2ca6 */
  push32(0x11dd2242u); f_11dd2ca6();
  /* 11dd2242 pop ecx */
  ECX = (pop32());
  /* 11dd2243 ret  */
  ESPCHK(0x11dd223bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002244 @ 0x11dd2244 (9 bytes, 4 insns) */
void f_11dd2244(void) {
  FTRACE(0x11dd2244u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2244 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dd2246 call 0x11dd2d07 */
  push32(0x11dd224bu); f_11dd2d07();
  /* 11dd224b pop ecx */
  ECX = (pop32());
  /* 11dd224c ret  */
  ESPCHK(0x11dd2244u, _esp0);
  ESP += 4; return;
}

/* FUN_1000224d @ 0x11dd224d (26 bytes, 12 insns) */
void f_11dd224d(void) {
  FTRACE(0x11dd224du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd224d push esi */
  push32((uint32_t)(ESI));
  /* 11dd224e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11dd2252:;
  /* 11dd2252 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2256 jae 0x11dd2265 */
  if (!C.cf) goto L_11dd2265;
  /* 11dd2258 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dd225a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd225c je 0x11dd2260 */
  if (C.zf) goto L_11dd2260;
  /* 11dd225e call eax */
  call_ind((uint32_t)(EAX), 0x11dd2260u);
L_11dd2260:;
  /* 11dd2260 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2263 jmp 0x11dd2252 */
  goto L_11dd2252;
L_11dd2265:;
  /* 11dd2265 pop esi */
  ESI = (pop32());
  /* 11dd2266 ret  */
  ESPCHK(0x11dd224du, _esp0);
  ESP += 4; return;
}

/* FUN_10002267 @ 0x11dd2267 (84 bytes, 32 insns) */
void f_11dd2267(void) {
  FTRACE(0x11dd2267u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2267 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2268 call 0x11dd2c11 */
  push32(0x11dd226du); f_11dd2c11();
  /* 11dd226d call dword ptr [0x11dd50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50a0))), 0x11dd2273u);
  /* 11dd2273 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2276 mov dword ptr [0x11dd647c], eax */
  w32((uint32_t)(0x11dd647c), (EAX));
  /* 11dd227b je 0x11dd22b7 */
  if (C.zf) goto L_11dd22b7;
  /* 11dd227d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11dd227f push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd2281 call 0x11dd2d1c */
  push32(0x11dd2286u); f_11dd2d1c();
  /* 11dd2286 mov esi, eax */
  ESI = (EAX);
  /* 11dd2288 pop ecx */
  ECX = (pop32());
  /* 11dd2289 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd228b pop ecx */
  ECX = (pop32());
  /* 11dd228c je 0x11dd22b7 */
  if (C.zf) goto L_11dd22b7;
  /* 11dd228e push esi */
  push32((uint32_t)(ESI));
  /* 11dd228f push dword ptr [0x11dd647c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd647c))));
  /* 11dd2295 call dword ptr [0x11dd509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd509c))), 0x11dd229bu);
  /* 11dd229b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd229d je 0x11dd22b7 */
  if (C.zf) goto L_11dd22b7;
  /* 11dd229f push esi */
  push32((uint32_t)(ESI));
  /* 11dd22a0 call 0x11dd22d9 */
  push32(0x11dd22a5u); f_11dd22d9();
  /* 11dd22a5 pop ecx */
  ECX = (pop32());
  /* 11dd22a6 call dword ptr [0x11dd5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5004))), 0x11dd22acu);
  /* 11dd22ac or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dd22b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd22b2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dd22b4 pop eax */
  EAX = (pop32());
  /* 11dd22b5 pop esi */
  ESI = (pop32());
  /* 11dd22b6 ret  */
  ESPCHK(0x11dd2267u, _esp0);
  ESP += 4; return;
L_11dd22b7:;
  /* 11dd22b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd22b9 pop esi */
  ESI = (pop32());
  /* 11dd22ba ret  */
  ESPCHK(0x11dd2267u, _esp0);
  ESP += 4; return;
}

/* FUN_100022bb @ 0x11dd22bb (30 bytes, 8 insns) */
void f_11dd22bb(void) {
  FTRACE(0x11dd22bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd22bb call 0x11dd2c3a */
  push32(0x11dd22c0u); f_11dd2c3a();
  /* 11dd22c0 mov eax, dword ptr [0x11dd647c] */
  EAX = (r32((uint32_t)(0x11dd647c)));
  /* 11dd22c5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd22c8 je 0x11dd22d8 */
  if (C.zf) goto L_11dd22d8;
  /* 11dd22ca push eax */
  push32((uint32_t)(EAX));
  /* 11dd22cb call dword ptr [0x11dd50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50a4))), 0x11dd22d1u);
  /* 11dd22d1 or dword ptr [0x11dd647c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11dd647c)))|(0xffffffffu); w32((uint32_t)(0x11dd647c), (_r)); fl_logic(_r,32); }
L_11dd22d8:;
  /* 11dd22d8 ret  */
  ESPCHK(0x11dd22bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100022d9 @ 0x11dd22d9 (19 bytes, 4 insns) */
void f_11dd22d9(void) {
  FTRACE(0x11dd22d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd22d9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd22dd mov dword ptr [eax + 0x50], 0x11dd65f8 */
  w32((uint32_t)(EAX + 0x50), (0x11dd65f8u));
  /* 11dd22e4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11dd22eb ret  */
  ESPCHK(0x11dd22d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100022ec @ 0x11dd22ec (160 bytes, 62 insns) */
void f_11dd22ec(void) {
  FTRACE(0x11dd22ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd22ec mov eax, dword ptr [0x11dd647c] */
  EAX = (r32((uint32_t)(0x11dd647c)));
  /* 11dd22f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd22f4 je 0x11dd238b */
  if (C.zf) goto L_11dd238b;
  /* 11dd22fa push esi */
  push32((uint32_t)(ESI));
  /* 11dd22fb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd22ff test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2301 jne 0x11dd2310 */
  if (!C.zf) goto L_11dd2310;
  /* 11dd2303 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2304 call dword ptr [0x11dd50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd50a8))), 0x11dd230au);
  /* 11dd230a mov esi, eax */
  ESI = (EAX);
  /* 11dd230c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd230e je 0x11dd237c */
  if (C.zf) goto L_11dd237c;
L_11dd2310:;
  /* 11dd2310 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11dd2313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2315 je 0x11dd231e */
  if (C.zf) goto L_11dd231e;
  /* 11dd2317 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2318 call 0x11dd2da9 */
  push32(0x11dd231du); f_11dd2da9();
  /* 11dd231d pop ecx */
  ECX = (pop32());
L_11dd231e:;
  /* 11dd231e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11dd2321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2323 je 0x11dd232c */
  if (C.zf) goto L_11dd232c;
  /* 11dd2325 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2326 call 0x11dd2da9 */
  push32(0x11dd232bu); f_11dd2da9();
  /* 11dd232b pop ecx */
  ECX = (pop32());
L_11dd232c:;
  /* 11dd232c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11dd232f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2331 je 0x11dd233a */
  if (C.zf) goto L_11dd233a;
  /* 11dd2333 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2334 call 0x11dd2da9 */
  push32(0x11dd2339u); f_11dd2da9();
  /* 11dd2339 pop ecx */
  ECX = (pop32());
L_11dd233a:;
  /* 11dd233a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11dd233d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd233f je 0x11dd2348 */
  if (C.zf) goto L_11dd2348;
  /* 11dd2341 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2342 call 0x11dd2da9 */
  push32(0x11dd2347u); f_11dd2da9();
  /* 11dd2347 pop ecx */
  ECX = (pop32());
L_11dd2348:;
  /* 11dd2348 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11dd234b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd234d je 0x11dd2356 */
  if (C.zf) goto L_11dd2356;
  /* 11dd234f push eax */
  push32((uint32_t)(EAX));
  /* 11dd2350 call 0x11dd2da9 */
  push32(0x11dd2355u); f_11dd2da9();
  /* 11dd2355 pop ecx */
  ECX = (pop32());
L_11dd2356:;
  /* 11dd2356 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11dd2359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd235b je 0x11dd2364 */
  if (C.zf) goto L_11dd2364;
  /* 11dd235d push eax */
  push32((uint32_t)(EAX));
  /* 11dd235e call 0x11dd2da9 */
  push32(0x11dd2363u); f_11dd2da9();
  /* 11dd2363 pop ecx */
  ECX = (pop32());
L_11dd2364:;
  /* 11dd2364 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11dd2367 cmp eax, 0x11dd65f8 */
  { uint32_t _a=(EAX),_b=(0x11dd65f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd236c je 0x11dd2375 */
  if (C.zf) goto L_11dd2375;
  /* 11dd236e push eax */
  push32((uint32_t)(EAX));
  /* 11dd236f call 0x11dd2da9 */
  push32(0x11dd2374u); f_11dd2da9();
  /* 11dd2374 pop ecx */
  ECX = (pop32());
L_11dd2375:;
  /* 11dd2375 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2376 call 0x11dd2da9 */
  push32(0x11dd237bu); f_11dd2da9();
  /* 11dd237b pop ecx */
  ECX = (pop32());
L_11dd237c:;
  /* 11dd237c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd237e push dword ptr [0x11dd647c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd647c))));
  /* 11dd2384 call dword ptr [0x11dd509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd509c))), 0x11dd238au);
  /* 11dd238a pop esi */
  ESI = (pop32());
L_11dd238b:;
  /* 11dd238b ret  */
  ESPCHK(0x11dd22ecu, _esp0);
  ESP += 4; return;
}

/* FUN_1000238c @ 0x11dd238c (444 bytes, 150 insns) */
void f_11dd238c(void) {
  FTRACE(0x11dd238cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd238c push ebp */
  push32((uint32_t)(EBP));
  /* 11dd238d mov ebp, esp */
  EBP = (ESP);
  /* 11dd238f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2392 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2393 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2394 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2395 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11dd239a call 0x11dd2df1 */
  push32(0x11dd239fu); f_11dd2df1();
  /* 11dd239f mov esi, eax */
  ESI = (EAX);
  /* 11dd23a1 pop ecx */
  ECX = (pop32());
  /* 11dd23a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd23a4 jne 0x11dd23ae */
  if (!C.zf) goto L_11dd23ae;
  /* 11dd23a6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11dd23a8 call 0x11dd2116 */
  push32(0x11dd23adu); f_11dd2116();
  /* 11dd23ad pop ecx */
  ECX = (pop32());
L_11dd23ae:;
  /* 11dd23ae mov dword ptr [0x11dd6e00], esi */
  w32((uint32_t)(0x11dd6e00), (ESI));
  /* 11dd23b4 mov dword ptr [0x11dd6f00], 0x20 */
  w32((uint32_t)(0x11dd6f00), (0x20u));
  /* 11dd23be lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11dd23c4:;
  /* 11dd23c4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd23c6 jae 0x11dd23e6 */
  if (!C.cf) goto L_11dd23e6;
  /* 11dd23c8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dd23cc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11dd23cf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dd23d3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11dd23d7 mov eax, dword ptr [0x11dd6e00] */
  EAX = (r32((uint32_t)(0x11dd6e00)));
  /* 11dd23dc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd23df add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd23e4 jmp 0x11dd23c4 */
  goto L_11dd23c4;
L_11dd23e6:;
  /* 11dd23e6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11dd23e9 push eax */
  push32((uint32_t)(EAX));
  /* 11dd23ea call dword ptr [0x11dd5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5084))), 0x11dd23f0u);
  /* 11dd23f0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dd23f5 je 0x11dd24cc */
  if (C.zf) goto L_11dd24cc;
  /* 11dd23fb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dd23fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2400 je 0x11dd24cc */
  if (C.zf) goto L_11dd24cc;
  /* 11dd2406 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11dd2408 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11dd240b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11dd240e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dd2411 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11dd2416 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2418 jl 0x11dd241c */
  if ((C.sf!=C.of)) goto L_11dd241c;
  /* 11dd241a mov edi, eax */
  EDI = (EAX);
L_11dd241c:;
  /* 11dd241c cmp dword ptr [0x11dd6f00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dd6f00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2422 jge 0x11dd247a */
  if ((C.sf==C.of)) goto L_11dd247a;
  /* 11dd2424 mov esi, 0x11dd6e04 */
  ESI = (0x11dd6e04u);
L_11dd2429:;
  /* 11dd2429 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11dd242e call 0x11dd2df1 */
  push32(0x11dd2433u); f_11dd2df1();
  /* 11dd2433 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2435 pop ecx */
  ECX = (pop32());
  /* 11dd2436 je 0x11dd2474 */
  if (C.zf) goto L_11dd2474;
  /* 11dd2438 add dword ptr [0x11dd6f00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11dd6f00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11dd6f00), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dd243f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dd2441 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11dd2447:;
  /* 11dd2447 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2449 jae 0x11dd2467 */
  if (!C.cf) goto L_11dd2467;
  /* 11dd244b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dd244f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11dd2452 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dd2456 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11dd245a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11dd245c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd245f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2465 jmp 0x11dd2447 */
  goto L_11dd2447;
L_11dd2467:;
  /* 11dd2467 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd246a cmp dword ptr [0x11dd6f00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dd6f00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2470 jl 0x11dd2429 */
  if ((C.sf!=C.of)) goto L_11dd2429;
  /* 11dd2472 jmp 0x11dd247a */
  goto L_11dd247a;
L_11dd2474:;
  /* 11dd2474 mov edi, dword ptr [0x11dd6f00] */
  EDI = (r32((uint32_t)(0x11dd6f00)));
L_11dd247a:;
  /* 11dd247a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dd247c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd247e jle 0x11dd24cc */
  if ((C.zf||C.sf!=C.of)) goto L_11dd24cc;
L_11dd2480:;
  /* 11dd2480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd2483 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dd2485 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2488 je 0x11dd24c2 */
  if (C.zf) goto L_11dd24c2;
  /* 11dd248a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11dd248c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11dd248e je 0x11dd24c2 */
  if (C.zf) goto L_11dd24c2;
  /* 11dd2490 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11dd2492 jne 0x11dd249f */
  if (!C.zf) goto L_11dd249f;
  /* 11dd2494 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd2495 call dword ptr [0x11dd507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd507c))), 0x11dd249bu);
  /* 11dd249b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd249d je 0x11dd24c2 */
  if (C.zf) goto L_11dd24c2;
L_11dd249f:;
  /* 11dd249f mov ecx, esi */
  ECX = (ESI);
  /* 11dd24a1 mov eax, esi */
  EAX = (ESI);
  /* 11dd24a3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11dd24a6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd24a9 mov ecx, dword ptr [ecx*4 + 0x11dd6e00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11dd6e00)));
  /* 11dd24b0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11dd24b3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11dd24b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd24b9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11dd24bb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dd24bd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11dd24bf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11dd24c2:;
  /* 11dd24c2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dd24c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd24c7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dd24c8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd24ca jl 0x11dd2480 */
  if ((C.sf!=C.of)) goto L_11dd2480;
L_11dd24cc:;
  /* 11dd24cc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dd24ce:;
  /* 11dd24ce mov ecx, dword ptr [0x11dd6e00] */
  ECX = (r32((uint32_t)(0x11dd6e00)));
  /* 11dd24d4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11dd24d7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd24db lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11dd24de jne 0x11dd252d */
  if (!C.zf) goto L_11dd252d;
  /* 11dd24e0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dd24e2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11dd24e6 jne 0x11dd24ed */
  if (!C.zf) goto L_11dd24ed;
  /* 11dd24e8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11dd24ea pop eax */
  EAX = (pop32());
  /* 11dd24eb jmp 0x11dd24f7 */
  goto L_11dd24f7;
L_11dd24ed:;
  /* 11dd24ed mov eax, ebx */
  EAX = (EBX);
  /* 11dd24ef dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dd24f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dd24f2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd24f4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dd24f7:;
  /* 11dd24f7 push eax */
  push32((uint32_t)(EAX));
  /* 11dd24f8 call dword ptr [0x11dd5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5080))), 0x11dd24feu);
  /* 11dd24fe mov edi, eax */
  EDI = (EAX);
  /* 11dd2500 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2503 je 0x11dd251c */
  if (C.zf) goto L_11dd251c;
  /* 11dd2505 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2506 call dword ptr [0x11dd507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd507c))), 0x11dd250cu);
  /* 11dd250c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd250e je 0x11dd251c */
  if (C.zf) goto L_11dd251c;
  /* 11dd2510 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2515 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dd2517 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd251a jne 0x11dd2522 */
  if (!C.zf) goto L_11dd2522;
L_11dd251c:;
  /* 11dd251c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dd2520 jmp 0x11dd2531 */
  goto L_11dd2531;
L_11dd2522:;
  /* 11dd2522 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2525 jne 0x11dd2531 */
  if (!C.zf) goto L_11dd2531;
  /* 11dd2527 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dd252b jmp 0x11dd2531 */
  goto L_11dd2531;
L_11dd252d:;
  /* 11dd252d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11dd2531:;
  /* 11dd2531 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dd2532 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2535 jl 0x11dd24ce */
  if ((C.sf!=C.of)) goto L_11dd24ce;
  /* 11dd2537 push dword ptr [0x11dd6f00] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6f00))));
  /* 11dd253d call dword ptr [0x11dd5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5088))), 0x11dd2543u);
  /* 11dd2543 pop edi */
  EDI = (pop32());
  /* 11dd2544 pop esi */
  ESI = (pop32());
  /* 11dd2545 pop ebx */
  EBX = (pop32());
  /* 11dd2546 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd2547 ret  */
  ESPCHK(0x11dd238cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002548 @ 0x11dd2548 (84 bytes, 33 insns) */
void f_11dd2548(void) {
  FTRACE(0x11dd2548u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2548 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2549 push esi */
  push32((uint32_t)(ESI));
  /* 11dd254a push edi */
  push32((uint32_t)(EDI));
  /* 11dd254b mov esi, 0x11dd6e00 */
  ESI = (0x11dd6e00u);
L_11dd2550:;
  /* 11dd2550 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dd2552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2554 je 0x11dd258d */
  if (C.zf) goto L_11dd258d;
  /* 11dd2556 mov edi, eax */
  EDI = (EAX);
  /* 11dd2558 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd255d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd255f jae 0x11dd2582 */
  if (!C.cf) goto L_11dd2582;
  /* 11dd2561 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11dd2564:;
  /* 11dd2564 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2568 je 0x11dd2571 */
  if (C.zf) goto L_11dd2571;
  /* 11dd256a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd256b call dword ptr [0x11dd5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5074))), 0x11dd2571u);
L_11dd2571:;
  /* 11dd2571 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dd2573 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2576 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd257b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd257e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2580 jb 0x11dd2564 */
  if (C.cf) goto L_11dd2564;
L_11dd2582:;
  /* 11dd2582 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2584 call 0x11dd2da9 */
  push32(0x11dd2589u); f_11dd2da9();
  /* 11dd2589 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11dd258c pop ecx */
  ECX = (pop32());
L_11dd258d:;
  /* 11dd258d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2590 cmp esi, 0x11dd6f00 */
  { uint32_t _a=(ESI),_b=(0x11dd6f00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2596 jl 0x11dd2550 */
  if ((C.sf!=C.of)) goto L_11dd2550;
  /* 11dd2598 pop edi */
  EDI = (pop32());
  /* 11dd2599 pop esi */
  ESI = (pop32());
  /* 11dd259a pop ebx */
  EBX = (pop32());
  /* 11dd259b ret  */
  ESPCHK(0x11dd2548u, _esp0);
  ESP += 4; return;
}

/* FUN_1000259c @ 0x11dd259c (185 bytes, 71 insns) */
void f_11dd259c(void) {
  FTRACE(0x11dd259cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd259c push ebx */
  push32((uint32_t)(EBX));
  /* 11dd259d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd259f cmp dword ptr [0x11dd6f08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dd6f08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd25a5 push esi */
  push32((uint32_t)(ESI));
  /* 11dd25a6 push edi */
  push32((uint32_t)(EDI));
  /* 11dd25a7 jne 0x11dd25ae */
  if (!C.zf) goto L_11dd25ae;
  /* 11dd25a9 call 0x11dd33c3 */
  push32(0x11dd25aeu); f_11dd33c3();
L_11dd25ae:;
  /* 11dd25ae mov esi, dword ptr [0x11dd6998] */
  ESI = (r32((uint32_t)(0x11dd6998)));
  /* 11dd25b4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11dd25b6:;
  /* 11dd25b6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd25b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd25ba je 0x11dd25ce */
  if (C.zf) goto L_11dd25ce;
  /* 11dd25bc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd25be je 0x11dd25c1 */
  if (C.zf) goto L_11dd25c1;
  /* 11dd25c0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11dd25c1:;
  /* 11dd25c1 push esi */
  push32((uint32_t)(ESI));
  /* 11dd25c2 call 0x11dd2f70 */
  push32(0x11dd25c7u); f_11dd2f70();
  /* 11dd25c7 pop ecx */
  ECX = (pop32());
  /* 11dd25c8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11dd25cc jmp 0x11dd25b6 */
  goto L_11dd25b6;
L_11dd25ce:;
  /* 11dd25ce lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11dd25d5 push eax */
  push32((uint32_t)(EAX));
  /* 11dd25d6 call 0x11dd2df1 */
  push32(0x11dd25dbu); f_11dd2df1();
  /* 11dd25db mov esi, eax */
  ESI = (EAX);
  /* 11dd25dd pop ecx */
  ECX = (pop32());
  /* 11dd25de cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd25e0 mov dword ptr [0x11dd69c8], esi */
  w32((uint32_t)(0x11dd69c8), (ESI));
  /* 11dd25e6 jne 0x11dd25f0 */
  if (!C.zf) goto L_11dd25f0;
  /* 11dd25e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd25ea call 0x11dd2116 */
  push32(0x11dd25efu); f_11dd2116();
  /* 11dd25ef pop ecx */
  ECX = (pop32());
L_11dd25f0:;
  /* 11dd25f0 mov edi, dword ptr [0x11dd6998] */
  EDI = (r32((uint32_t)(0x11dd6998)));
  /* 11dd25f6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd25f8 je 0x11dd2633 */
  if (C.zf) goto L_11dd2633;
  /* 11dd25fa push ebp */
  push32((uint32_t)(EBP));
L_11dd25fb:;
  /* 11dd25fb push edi */
  push32((uint32_t)(EDI));
  /* 11dd25fc call 0x11dd2f70 */
  push32(0x11dd2601u); f_11dd2f70();
  /* 11dd2601 mov ebp, eax */
  EBP = (EAX);
  /* 11dd2603 pop ecx */
  ECX = (pop32());
  /* 11dd2604 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11dd2605 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2608 je 0x11dd262c */
  if (C.zf) goto L_11dd262c;
  /* 11dd260a push ebp */
  push32((uint32_t)(EBP));
  /* 11dd260b call 0x11dd2df1 */
  push32(0x11dd2610u); f_11dd2df1();
  /* 11dd2610 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2612 pop ecx */
  ECX = (pop32());
  /* 11dd2613 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dd2615 jne 0x11dd261f */
  if (!C.zf) goto L_11dd261f;
  /* 11dd2617 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2619 call 0x11dd2116 */
  push32(0x11dd261eu); f_11dd2116();
  /* 11dd261e pop ecx */
  ECX = (pop32());
L_11dd261f:;
  /* 11dd261f push edi */
  push32((uint32_t)(EDI));
  /* 11dd2620 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2622 call 0x11dd2e80 */
  push32(0x11dd2627u); f_11dd2e80();
  /* 11dd2627 pop ecx */
  ECX = (pop32());
  /* 11dd2628 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd262b pop ecx */
  ECX = (pop32());
L_11dd262c:;
  /* 11dd262c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd262e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2630 jne 0x11dd25fb */
  if (!C.zf) goto L_11dd25fb;
  /* 11dd2632 pop ebp */
  EBP = (pop32());
L_11dd2633:;
  /* 11dd2633 push dword ptr [0x11dd6998] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6998))));
  /* 11dd2639 call 0x11dd2da9 */
  push32(0x11dd263eu); f_11dd2da9();
  /* 11dd263e pop ecx */
  ECX = (pop32());
  /* 11dd263f mov dword ptr [0x11dd6998], ebx */
  w32((uint32_t)(0x11dd6998), (EBX));
  /* 11dd2645 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11dd2647 pop edi */
  EDI = (pop32());
  /* 11dd2648 pop esi */
  ESI = (pop32());
  /* 11dd2649 mov dword ptr [0x11dd6f04], 1 */
  w32((uint32_t)(0x11dd6f04), (0x1u));
  /* 11dd2653 pop ebx */
  EBX = (pop32());
  /* 11dd2654 ret  */
  ESPCHK(0x11dd259cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002655 @ 0x11dd2655 (153 bytes, 62 insns) */
void f_11dd2655(void) {
  FTRACE(0x11dd2655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2655 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd2656 mov ebp, esp */
  EBP = (ESP);
  /* 11dd2658 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd2659 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd265a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd265b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd265d cmp dword ptr [0x11dd6f08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dd6f08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2663 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2664 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2665 jne 0x11dd266c */
  if (!C.zf) goto L_11dd266c;
  /* 11dd2667 call 0x11dd33c3 */
  push32(0x11dd266cu); f_11dd33c3();
L_11dd266c:;
  /* 11dd266c mov esi, 0x11dd69ec */
  ESI = (0x11dd69ecu);
  /* 11dd2671 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11dd2676 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2677 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2678 call dword ptr [0x11dd5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5070))), 0x11dd267eu);
  /* 11dd267e mov eax, dword ptr [0x11dd6f18] */
  EAX = (r32((uint32_t)(0x11dd6f18)));
  /* 11dd2683 mov dword ptr [0x11dd69d8], esi */
  w32((uint32_t)(0x11dd69d8), (ESI));
  /* 11dd2689 mov edi, esi */
  EDI = (ESI);
  /* 11dd268b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd268d je 0x11dd2691 */
  if (C.zf) goto L_11dd2691;
  /* 11dd268f mov edi, eax */
  EDI = (EAX);
L_11dd2691:;
  /* 11dd2691 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11dd2694 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2695 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11dd2698 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2699 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd269a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd269b push edi */
  push32((uint32_t)(EDI));
  /* 11dd269c call 0x11dd26ee */
  push32(0x11dd26a1u); f_11dd26ee();
  /* 11dd26a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dd26a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd26a7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11dd26aa push eax */
  push32((uint32_t)(EAX));
  /* 11dd26ab call 0x11dd2df1 */
  push32(0x11dd26b0u); f_11dd2df1();
  /* 11dd26b0 mov esi, eax */
  ESI = (EAX);
  /* 11dd26b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd26b5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd26b7 jne 0x11dd26c1 */
  if (!C.zf) goto L_11dd26c1;
  /* 11dd26b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd26bb call 0x11dd2116 */
  push32(0x11dd26c0u); f_11dd2116();
  /* 11dd26c0 pop ecx */
  ECX = (pop32());
L_11dd26c1:;
  /* 11dd26c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11dd26c4 push eax */
  push32((uint32_t)(EAX));
  /* 11dd26c5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11dd26c8 push eax */
  push32((uint32_t)(EAX));
  /* 11dd26c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd26cc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11dd26cf push eax */
  push32((uint32_t)(EAX));
  /* 11dd26d0 push esi */
  push32((uint32_t)(ESI));
  /* 11dd26d1 push edi */
  push32((uint32_t)(EDI));
  /* 11dd26d2 call 0x11dd26ee */
  push32(0x11dd26d7u); f_11dd26ee();
  /* 11dd26d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd26da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd26dd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dd26de mov dword ptr [0x11dd69c0], esi */
  w32((uint32_t)(0x11dd69c0), (ESI));
  /* 11dd26e4 pop edi */
  EDI = (pop32());
  /* 11dd26e5 pop esi */
  ESI = (pop32());
  /* 11dd26e6 mov dword ptr [0x11dd69bc], eax */
  w32((uint32_t)(0x11dd69bc), (EAX));
  /* 11dd26eb pop ebx */
  EBX = (pop32());
  /* 11dd26ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd26ed ret  */
  ESPCHK(0x11dd2655u, _esp0);
  ESP += 4; return;
}

/* FUN_100026ee @ 0x11dd26ee (436 bytes, 187 insns) */
void f_11dd26ee(void) {
  FTRACE(0x11dd26eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd26ee push ebp */
  push32((uint32_t)(EBP));
  /* 11dd26ef mov ebp, esp */
  EBP = (ESP);
  /* 11dd26f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dd26f4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dd26f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd26f8 push esi */
  push32((uint32_t)(ESI));
  /* 11dd26f9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dd26fc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11dd26ff push edi */
  push32((uint32_t)(EDI));
  /* 11dd2700 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd2703 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11dd2709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd270c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd270e je 0x11dd2718 */
  if (C.zf) goto L_11dd2718;
  /* 11dd2710 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11dd2712 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2715 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11dd2718:;
  /* 11dd2718 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd271b jne 0x11dd2761 */
  if (!C.zf) goto L_11dd2761;
L_11dd271d:;
  /* 11dd271d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11dd2720 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2721 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2724 je 0x11dd274f */
  if (C.zf) goto L_11dd274f;
  /* 11dd2726 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd2728 je 0x11dd274f */
  if (C.zf) goto L_11dd274f;
  /* 11dd272a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11dd272d test byte ptr [edx + 0x11dd6ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11dd6ce1)))&(0x4u); fl_logic(_r,8); }
  /* 11dd2734 je 0x11dd2742 */
  if (C.zf) goto L_11dd2742;
  /* 11dd2736 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd2738 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd273a je 0x11dd2742 */
  if (C.zf) goto L_11dd2742;
  /* 11dd273c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd273e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dd2740 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd2741 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11dd2742:;
  /* 11dd2742 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd2744 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2746 je 0x11dd271d */
  if (C.zf) goto L_11dd271d;
  /* 11dd2748 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd274a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dd274c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd274d jmp 0x11dd271d */
  goto L_11dd271d;
L_11dd274f:;
  /* 11dd274f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd2751 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2753 je 0x11dd2759 */
  if (C.zf) goto L_11dd2759;
  /* 11dd2755 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11dd2758 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dd2759:;
  /* 11dd2759 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd275c jne 0x11dd27a4 */
  if (!C.zf) goto L_11dd27a4;
  /* 11dd275e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd275f jmp 0x11dd27a4 */
  goto L_11dd27a4;
L_11dd2761:;
  /* 11dd2761 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd2763 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2765 je 0x11dd276c */
  if (C.zf) goto L_11dd276c;
  /* 11dd2767 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd2769 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dd276b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dd276c:;
  /* 11dd276c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd276e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd276f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11dd2772 test byte ptr [ebx + 0x11dd6ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11dd6ce1)))&(0x4u); fl_logic(_r,8); }
  /* 11dd2779 je 0x11dd2787 */
  if (C.zf) goto L_11dd2787;
  /* 11dd277b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd277d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd277f je 0x11dd2786 */
  if (C.zf) goto L_11dd2786;
  /* 11dd2781 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11dd2783 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11dd2785 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dd2786:;
  /* 11dd2786 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11dd2787:;
  /* 11dd2787 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd278a je 0x11dd2795 */
  if (C.zf) goto L_11dd2795;
  /* 11dd278c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd278e je 0x11dd2799 */
  if (C.zf) goto L_11dd2799;
  /* 11dd2790 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2793 jne 0x11dd2761 */
  if (!C.zf) goto L_11dd2761;
L_11dd2795:;
  /* 11dd2795 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd2797 jne 0x11dd279c */
  if (!C.zf) goto L_11dd279c;
L_11dd2799:;
  /* 11dd2799 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dd279a jmp 0x11dd27a4 */
  goto L_11dd27a4;
L_11dd279c:;
  /* 11dd279c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd279e je 0x11dd27a4 */
  if (C.zf) goto L_11dd27a4;
  /* 11dd27a0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11dd27a4:;
  /* 11dd27a4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11dd27a8:;
  /* 11dd27a8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd27ab je 0x11dd2891 */
  if (C.zf) goto L_11dd2891;
L_11dd27b1:;
  /* 11dd27b1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd27b3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd27b6 je 0x11dd27bd */
  if (C.zf) goto L_11dd27bd;
  /* 11dd27b8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd27bb jne 0x11dd27c0 */
  if (!C.zf) goto L_11dd27c0;
L_11dd27bd:;
  /* 11dd27bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd27be jmp 0x11dd27b1 */
  goto L_11dd27b1;
L_11dd27c0:;
  /* 11dd27c0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd27c3 je 0x11dd2891 */
  if (C.zf) goto L_11dd2891;
  /* 11dd27c9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd27cb je 0x11dd27d5 */
  if (C.zf) goto L_11dd27d5;
  /* 11dd27cd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11dd27cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd27d2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11dd27d5:;
  /* 11dd27d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dd27d8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11dd27da:;
  /* 11dd27da mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11dd27e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dd27e3:;
  /* 11dd27e3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd27e6 jne 0x11dd27ec */
  if (!C.zf) goto L_11dd27ec;
  /* 11dd27e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd27e9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dd27ea jmp 0x11dd27e3 */
  goto L_11dd27e3;
L_11dd27ec:;
  /* 11dd27ec cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd27ef jne 0x11dd281d */
  if (!C.zf) goto L_11dd281d;
  /* 11dd27f1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11dd27f4 jne 0x11dd281b */
  if (!C.zf) goto L_11dd281b;
  /* 11dd27f6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd27f8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd27fb je 0x11dd280a */
  if (C.zf) goto L_11dd280a;
  /* 11dd27fd cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2801 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11dd2804 jne 0x11dd280a */
  if (!C.zf) goto L_11dd280a;
  /* 11dd2806 mov eax, edx */
  EAX = (EDX);
  /* 11dd2808 jmp 0x11dd280d */
  goto L_11dd280d;
L_11dd280a:;
  /* 11dd280a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11dd280d:;
  /* 11dd280d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd2810 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd2812 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2815 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11dd2818 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11dd281b:;
  /* 11dd281b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11dd281d:;
  /* 11dd281d mov edx, ebx */
  EDX = (EBX);
  /* 11dd281f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dd2820 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dd2822 je 0x11dd2832 */
  if (C.zf) goto L_11dd2832;
  /* 11dd2824 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11dd2825:;
  /* 11dd2825 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2827 je 0x11dd282d */
  if (C.zf) goto L_11dd282d;
  /* 11dd2829 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11dd282c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dd282d:;
  /* 11dd282d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd282f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dd2830 jne 0x11dd2825 */
  if (!C.zf) goto L_11dd2825;
L_11dd2832:;
  /* 11dd2832 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd2834 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd2836 je 0x11dd2882 */
  if (C.zf) goto L_11dd2882;
  /* 11dd2838 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd283c jne 0x11dd2848 */
  if (!C.zf) goto L_11dd2848;
  /* 11dd283e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2841 je 0x11dd2882 */
  if (C.zf) goto L_11dd2882;
  /* 11dd2843 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2846 je 0x11dd2882 */
  if (C.zf) goto L_11dd2882;
L_11dd2848:;
  /* 11dd2848 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd284c je 0x11dd287c */
  if (C.zf) goto L_11dd287c;
  /* 11dd284e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2850 je 0x11dd286b */
  if (C.zf) goto L_11dd286b;
  /* 11dd2852 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11dd2855 test byte ptr [ebx + 0x11dd6ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11dd6ce1)))&(0x4u); fl_logic(_r,8); }
  /* 11dd285c je 0x11dd2864 */
  if (C.zf) goto L_11dd2864;
  /* 11dd285e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dd2860 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd2861 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2862 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11dd2864:;
  /* 11dd2864 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dd2866 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dd2868 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd2869 jmp 0x11dd287a */
  goto L_11dd287a;
L_11dd286b:;
  /* 11dd286b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11dd286e test byte ptr [edx + 0x11dd6ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11dd6ce1)))&(0x4u); fl_logic(_r,8); }
  /* 11dd2875 je 0x11dd287a */
  if (C.zf) goto L_11dd287a;
  /* 11dd2877 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2878 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11dd287a:;
  /* 11dd287a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11dd287c:;
  /* 11dd287c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd287d jmp 0x11dd27da */
  goto L_11dd27da;
L_11dd2882:;
  /* 11dd2882 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2884 je 0x11dd288a */
  if (C.zf) goto L_11dd288a;
  /* 11dd2886 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11dd2889 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dd288a:;
  /* 11dd288a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dd288c jmp 0x11dd27a8 */
  goto L_11dd27a8;
L_11dd2891:;
  /* 11dd2891 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd2893 je 0x11dd2898 */
  if (C.zf) goto L_11dd2898;
  /* 11dd2895 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11dd2898:;
  /* 11dd2898 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dd289b pop edi */
  EDI = (pop32());
  /* 11dd289c pop esi */
  ESI = (pop32());
  /* 11dd289d pop ebx */
  EBX = (pop32());
  /* 11dd289e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11dd28a0 pop ebp */
  EBP = (pop32());
  /* 11dd28a1 ret  */
  ESPCHK(0x11dd26eeu, _esp0);
  ESP += 4; return;
}

/* FUN_100028a2 @ 0x11dd28a2 (306 bytes, 132 insns) */
void f_11dd28a2(void) {
  FTRACE(0x11dd28a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd28a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd28a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd28a4 mov eax, dword ptr [0x11dd6af0] */
  EAX = (r32((uint32_t)(0x11dd6af0)));
  /* 11dd28a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd28aa push ebp */
  push32((uint32_t)(EBP));
  /* 11dd28ab mov ebp, dword ptr [0x11dd505c] */
  EBP = (r32((uint32_t)(0x11dd505c)));
  /* 11dd28b1 push esi */
  push32((uint32_t)(ESI));
  /* 11dd28b2 push edi */
  push32((uint32_t)(EDI));
  /* 11dd28b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd28b5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dd28b7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd28b9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd28bb jne 0x11dd28f0 */
  if (!C.zf) goto L_11dd28f0;
  /* 11dd28bd call ebp */
  call_ind((uint32_t)(EBP), 0x11dd28bfu);
  /* 11dd28bf mov esi, eax */
  ESI = (EAX);
  /* 11dd28c1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd28c3 je 0x11dd28d1 */
  if (C.zf) goto L_11dd28d1;
  /* 11dd28c5 mov dword ptr [0x11dd6af0], 1 */
  w32((uint32_t)(0x11dd6af0), (0x1u));
  /* 11dd28cf jmp 0x11dd28f9 */
  goto L_11dd28f9;
L_11dd28d1:;
  /* 11dd28d1 call dword ptr [0x11dd506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd506c))), 0x11dd28d7u);
  /* 11dd28d7 mov edi, eax */
  EDI = (EAX);
  /* 11dd28d9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd28db je 0x11dd29cb */
  if (C.zf) goto L_11dd29cb;
  /* 11dd28e1 mov dword ptr [0x11dd6af0], 2 */
  w32((uint32_t)(0x11dd6af0), (0x2u));
  /* 11dd28eb jmp 0x11dd297f */
  goto L_11dd297f;
L_11dd28f0:;
  /* 11dd28f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd28f3 jne 0x11dd297a */
  if (!C.zf) goto L_11dd297a;
L_11dd28f9:;
  /* 11dd28f9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd28fb jne 0x11dd2909 */
  if (!C.zf) goto L_11dd2909;
  /* 11dd28fd call ebp */
  call_ind((uint32_t)(EBP), 0x11dd28ffu);
  /* 11dd28ff mov esi, eax */
  ESI = (EAX);
  /* 11dd2901 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2903 je 0x11dd29cb */
  if (C.zf) goto L_11dd29cb;
L_11dd2909:;
  /* 11dd2909 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dd290c mov eax, esi */
  EAX = (ESI);
  /* 11dd290e je 0x11dd291e */
  if (C.zf) goto L_11dd291e;
L_11dd2910:;
  /* 11dd2910 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2911 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2912 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dd2915 jne 0x11dd2910 */
  if (!C.zf) goto L_11dd2910;
  /* 11dd2917 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2918 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2919 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dd291c jne 0x11dd2910 */
  if (!C.zf) goto L_11dd2910;
L_11dd291e:;
  /* 11dd291e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2920 mov edi, dword ptr [0x11dd5064] */
  EDI = (r32((uint32_t)(0x11dd5064)));
  /* 11dd2926 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11dd2928 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2929 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd292a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd292b push ebx */
  push32((uint32_t)(EBX));
  /* 11dd292c push ebx */
  push32((uint32_t)(EBX));
  /* 11dd292d push eax */
  push32((uint32_t)(EAX));
  /* 11dd292e push esi */
  push32((uint32_t)(ESI));
  /* 11dd292f push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2930 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2931 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11dd2935 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2937u);
  /* 11dd2937 mov ebp, eax */
  EBP = (EAX);
  /* 11dd2939 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd293b je 0x11dd296f */
  if (C.zf) goto L_11dd296f;
  /* 11dd293d push ebp */
  push32((uint32_t)(EBP));
  /* 11dd293e call 0x11dd2df1 */
  push32(0x11dd2943u); f_11dd2df1();
  /* 11dd2943 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2945 pop ecx */
  ECX = (pop32());
  /* 11dd2946 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11dd294a je 0x11dd296f */
  if (C.zf) goto L_11dd296f;
  /* 11dd294c push ebx */
  push32((uint32_t)(EBX));
  /* 11dd294d push ebx */
  push32((uint32_t)(EBX));
  /* 11dd294e push ebp */
  push32((uint32_t)(EBP));
  /* 11dd294f push eax */
  push32((uint32_t)(EAX));
  /* 11dd2950 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11dd2954 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2955 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2956 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2957 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2959u);
  /* 11dd2959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd295b jne 0x11dd296b */
  if (!C.zf) goto L_11dd296b;
  /* 11dd295d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11dd2961 call 0x11dd2da9 */
  push32(0x11dd2966u); f_11dd2da9();
  /* 11dd2966 pop ecx */
  ECX = (pop32());
  /* 11dd2967 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11dd296b:;
  /* 11dd296b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11dd296f:;
  /* 11dd296f push esi */
  push32((uint32_t)(ESI));
  /* 11dd2970 call dword ptr [0x11dd5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5068))), 0x11dd2976u);
  /* 11dd2976 mov eax, ebx */
  EAX = (EBX);
  /* 11dd2978 jmp 0x11dd29cd */
  goto L_11dd29cd;
L_11dd297a:;
  /* 11dd297a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd297d jne 0x11dd29cb */
  if (!C.zf) goto L_11dd29cb;
L_11dd297f:;
  /* 11dd297f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2981 jne 0x11dd298f */
  if (!C.zf) goto L_11dd298f;
  /* 11dd2983 call dword ptr [0x11dd506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd506c))), 0x11dd2989u);
  /* 11dd2989 mov edi, eax */
  EDI = (EAX);
  /* 11dd298b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd298d je 0x11dd29cb */
  if (C.zf) goto L_11dd29cb;
L_11dd298f:;
  /* 11dd298f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2991 mov eax, edi */
  EAX = (EDI);
  /* 11dd2993 je 0x11dd299f */
  if (C.zf) goto L_11dd299f;
L_11dd2995:;
  /* 11dd2995 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2996 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd2998 jne 0x11dd2995 */
  if (!C.zf) goto L_11dd2995;
  /* 11dd299a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd299b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd299d jne 0x11dd2995 */
  if (!C.zf) goto L_11dd2995;
L_11dd299f:;
  /* 11dd299f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd29a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd29a2 mov ebp, eax */
  EBP = (EAX);
  /* 11dd29a4 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd29a5 call 0x11dd2df1 */
  push32(0x11dd29aau); f_11dd2df1();
  /* 11dd29aa mov esi, eax */
  ESI = (EAX);
  /* 11dd29ac pop ecx */
  ECX = (pop32());
  /* 11dd29ad cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd29af jne 0x11dd29b5 */
  if (!C.zf) goto L_11dd29b5;
  /* 11dd29b1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dd29b3 jmp 0x11dd29c0 */
  goto L_11dd29c0;
L_11dd29b5:;
  /* 11dd29b5 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd29b6 push edi */
  push32((uint32_t)(EDI));
  /* 11dd29b7 push esi */
  push32((uint32_t)(ESI));
  /* 11dd29b8 call 0x11dd33e0 */
  push32(0x11dd29bdu); f_11dd33e0();
  /* 11dd29bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd29c0:;
  /* 11dd29c0 push edi */
  push32((uint32_t)(EDI));
  /* 11dd29c1 call dword ptr [0x11dd5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5078))), 0x11dd29c7u);
  /* 11dd29c7 mov eax, esi */
  EAX = (ESI);
  /* 11dd29c9 jmp 0x11dd29cd */
  goto L_11dd29cd;
L_11dd29cb:;
  /* 11dd29cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dd29cd:;
  /* 11dd29cd pop edi */
  EDI = (pop32());
  /* 11dd29ce pop esi */
  ESI = (pop32());
  /* 11dd29cf pop ebp */
  EBP = (pop32());
  /* 11dd29d0 pop ebx */
  EBX = (pop32());
  /* 11dd29d1 pop ecx */
  ECX = (pop32());
  /* 11dd29d2 pop ecx */
  ECX = (pop32());
  /* 11dd29d3 ret  */
  ESPCHK(0x11dd28a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100029d4 @ 0x11dd29d4 (60 bytes, 20 insns) */
void f_11dd29d4(void) {
  FTRACE(0x11dd29d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd29d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd29d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd29d8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd29dc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dd29e1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11dd29e4 push eax */
  push32((uint32_t)(EAX));
  /* 11dd29e5 call dword ptr [0x11dd5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5060))), 0x11dd29ebu);
  /* 11dd29eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd29ed mov dword ptr [0x11dd6de8], eax */
  w32((uint32_t)(0x11dd6de8), (EAX));
  /* 11dd29f2 je 0x11dd2a09 */
  if (C.zf) goto L_11dd2a09;
  /* 11dd29f4 call 0x11dd3715 */
  push32(0x11dd29f9u); f_11dd3715();
  /* 11dd29f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd29fb jne 0x11dd2a0c */
  if (!C.zf) goto L_11dd2a0c;
  /* 11dd29fd push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2a03 call dword ptr [0x11dd5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5058))), 0x11dd2a09u);
L_11dd2a09:;
  /* 11dd2a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2a0b ret  */
  ESPCHK(0x11dd29d4u, _esp0);
  ESP += 4; return;
L_11dd2a0c:;
  /* 11dd2a0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd2a0e pop eax */
  EAX = (pop32());
  /* 11dd2a0f ret  */
  ESPCHK(0x11dd29d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x11dd2a10 (117 bytes, 38 insns) */
void f_11dd2a10(void) {
  FTRACE(0x11dd2a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2a10 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2a11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd2a13 cmp dword ptr [0x11dd6ba8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dd6ba8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2a19 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd2a1a mov ebp, dword ptr [0x11dd504c] */
  EBP = (r32((uint32_t)(0x11dd504c)));
  /* 11dd2a20 jle 0x11dd2a66 */
  if ((C.zf||C.sf!=C.of)) goto L_11dd2a66;
  /* 11dd2a22 mov eax, dword ptr [0x11dd6bac] */
  EAX = (r32((uint32_t)(0x11dd6bac)));
  /* 11dd2a27 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2a28 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2a29 mov edi, dword ptr [0x11dd5050] */
  EDI = (r32((uint32_t)(0x11dd5050)));
  /* 11dd2a2f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11dd2a32:;
  /* 11dd2a32 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11dd2a37 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11dd2a3c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2a3e call edi */
  call_ind((uint32_t)(EDI), 0x11dd2a40u);
  /* 11dd2a40 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dd2a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2a47 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2a49 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2a4bu);
  /* 11dd2a4b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11dd2a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2a50 push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2a56 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd2a58u);
  /* 11dd2a58 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2a5b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dd2a5c cmp ebx, dword ptr [0x11dd6ba8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dd6ba8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2a62 jl 0x11dd2a32 */
  if ((C.sf!=C.of)) goto L_11dd2a32;
  /* 11dd2a64 pop edi */
  EDI = (pop32());
  /* 11dd2a65 pop esi */
  ESI = (pop32());
L_11dd2a66:;
  /* 11dd2a66 push dword ptr [0x11dd6bac] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6bac))));
  /* 11dd2a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2a6e push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2a74 call ebp */
  call_ind((uint32_t)(EBP), 0x11dd2a76u);
  /* 11dd2a76 push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2a7c call dword ptr [0x11dd5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5058))), 0x11dd2a82u);
  /* 11dd2a82 pop ebp */
  EBP = (pop32());
  /* 11dd2a83 pop ebx */
  EBX = (pop32());
  /* 11dd2a84 ret  */
  ESPCHK(0x11dd2a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a85 @ 0x11dd2a85 (57 bytes, 18 insns) */
void f_11dd2a85(void) {
  FTRACE(0x11dd2a85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2a85 mov eax, dword ptr [0x11dd69a0] */
  EAX = (r32((uint32_t)(0x11dd69a0)));
  /* 11dd2a8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2a8d je 0x11dd2a9c */
  if (C.zf) goto L_11dd2a9c;
  /* 11dd2a8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2a91 jne 0x11dd2abd */
  if (!C.zf) goto L_11dd2abd;
  /* 11dd2a93 cmp dword ptr [0x11dd69a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dd69a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2a9a jne 0x11dd2abd */
  if (!C.zf) goto L_11dd2abd;
L_11dd2a9c:;
  /* 11dd2a9c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11dd2aa1 call 0x11dd2abe */
  push32(0x11dd2aa6u); f_11dd2abe();
  /* 11dd2aa6 mov eax, dword ptr [0x11dd6af4] */
  EAX = (r32((uint32_t)(0x11dd6af4)));
  /* 11dd2aab pop ecx */
  ECX = (pop32());
  /* 11dd2aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2aae je 0x11dd2ab2 */
  if (C.zf) goto L_11dd2ab2;
  /* 11dd2ab0 call eax */
  call_ind((uint32_t)(EAX), 0x11dd2ab2u);
L_11dd2ab2:;
  /* 11dd2ab2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11dd2ab7 call 0x11dd2abe */
  push32(0x11dd2abcu); f_11dd2abe();
  /* 11dd2abc pop ecx */
  ECX = (pop32());
L_11dd2abd:;
  /* 11dd2abd ret  */
  ESPCHK(0x11dd2a85u, _esp0);
  ESP += 4; return;
}

/* FUN_10002abe @ 0x11dd2abe (339 bytes, 100 insns) */
void f_11dd2abe(void) {
  FTRACE(0x11dd2abeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2abe push ebp */
  push32((uint32_t)(EBP));
  /* 11dd2abf mov ebp, esp */
  EBP = (ESP);
  /* 11dd2ac1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2ac7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd2aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dd2acc mov eax, 0x11dd64a8 */
  EAX = (0x11dd64a8u);
L_11dd2ad1:;
  /* 11dd2ad1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2ad3 je 0x11dd2ae0 */
  if (C.zf) goto L_11dd2ae0;
  /* 11dd2ad5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2ad8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd2ad9 cmp eax, 0x11dd6538 */
  { uint32_t _a=(EAX),_b=(0x11dd6538u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2ade jl 0x11dd2ad1 */
  if ((C.sf!=C.of)) goto L_11dd2ad1;
L_11dd2ae0:;
  /* 11dd2ae0 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2ae1 mov esi, ecx */
  ESI = (ECX);
  /* 11dd2ae3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11dd2ae6 cmp edx, dword ptr [esi + 0x11dd64a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11dd64a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2aec jne 0x11dd2c0e */
  if (!C.zf) goto L_11dd2c0e;
  /* 11dd2af2 mov eax, dword ptr [0x11dd69a0] */
  EAX = (r32((uint32_t)(0x11dd69a0)));
  /* 11dd2af7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2afa je 0x11dd2be8 */
  if (C.zf) goto L_11dd2be8;
  /* 11dd2b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2b02 jne 0x11dd2b11 */
  if (!C.zf) goto L_11dd2b11;
  /* 11dd2b04 cmp dword ptr [0x11dd69a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dd69a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2b0b je 0x11dd2be8 */
  if (C.zf) goto L_11dd2be8;
L_11dd2b11:;
  /* 11dd2b11 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2b17 je 0x11dd2c0e */
  if (C.zf) goto L_11dd2c0e;
  /* 11dd2b1d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dd2b23 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11dd2b28 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2b2b call dword ptr [0x11dd5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5070))), 0x11dd2b31u);
  /* 11dd2b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2b33 jne 0x11dd2b48 */
  if (!C.zf) goto L_11dd2b48;
  /* 11dd2b35 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dd2b3b push 0x11dd5430 */
  push32((uint32_t)(0x11dd5430u));
  /* 11dd2b40 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2b41 call 0x11dd2e80 */
  push32(0x11dd2b46u); f_11dd2e80();
  /* 11dd2b46 pop ecx */
  ECX = (pop32());
  /* 11dd2b47 pop ecx */
  ECX = (pop32());
L_11dd2b48:;
  /* 11dd2b48 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dd2b4e push edi */
  push32((uint32_t)(EDI));
  /* 11dd2b4f push eax */
  push32((uint32_t)(EAX));
  /* 11dd2b50 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11dd2b56 call 0x11dd2f70 */
  push32(0x11dd2b5bu); f_11dd2f70();
  /* 11dd2b5b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd2b5c pop ecx */
  ECX = (pop32());
  /* 11dd2b5d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2b60 jbe 0x11dd2b8b */
  if ((C.cf||C.zf)) goto L_11dd2b8b;
  /* 11dd2b62 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dd2b68 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2b69 call 0x11dd2f70 */
  push32(0x11dd2b6eu); f_11dd2f70();
  /* 11dd2b6e mov edi, eax */
  EDI = (EAX);
  /* 11dd2b70 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dd2b76 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2b79 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dd2b7b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2b7d push 0x11dd542c */
  push32((uint32_t)(0x11dd542cu));
  /* 11dd2b82 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2b83 call 0x11dd3ff0 */
  push32(0x11dd2b88u); f_11dd3ff0();
  /* 11dd2b88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd2b8b:;
  /* 11dd2b8b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dd2b91 push 0x11dd5410 */
  push32((uint32_t)(0x11dd5410u));
  /* 11dd2b96 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2b97 call 0x11dd2e80 */
  push32(0x11dd2b9cu); f_11dd2e80();
  /* 11dd2b9c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dd2ba2 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2ba4 call 0x11dd2e90 */
  push32(0x11dd2ba9u); f_11dd2e90();
  /* 11dd2ba9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dd2baf push 0x11dd540c */
  push32((uint32_t)(0x11dd540cu));
  /* 11dd2bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2bb5 call 0x11dd2e90 */
  push32(0x11dd2bbau); f_11dd2e90();
  /* 11dd2bba push dword ptr [esi + 0x11dd64ac] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11dd64ac))));
  /* 11dd2bc0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dd2bc6 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2bc7 call 0x11dd2e90 */
  push32(0x11dd2bccu); f_11dd2e90();
  /* 11dd2bcc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11dd2bd1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dd2bd7 push 0x11dd53e4 */
  push32((uint32_t)(0x11dd53e4u));
  /* 11dd2bdc push eax */
  push32((uint32_t)(EAX));
  /* 11dd2bdd call 0x11dd3f5e */
  push32(0x11dd2be2u); f_11dd3f5e();
  /* 11dd2be2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2be5 pop edi */
  EDI = (pop32());
  /* 11dd2be6 jmp 0x11dd2c0e */
  goto L_11dd2c0e;
L_11dd2be8:;
  /* 11dd2be8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11dd2beb lea esi, [esi + 0x11dd64ac] */
  ESI = ((uint32_t)(ESI + 0x11dd64ac));
  /* 11dd2bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2bf3 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2bf4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2bf6 call 0x11dd2f70 */
  push32(0x11dd2bfbu); f_11dd2f70();
  /* 11dd2bfb pop ecx */
  ECX = (pop32());
  /* 11dd2bfc push eax */
  push32((uint32_t)(EAX));
  /* 11dd2bfd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2bff push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11dd2c01 call dword ptr [0x11dd5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5080))), 0x11dd2c07u);
  /* 11dd2c07 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2c08 call dword ptr [0x11dd5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5054))), 0x11dd2c0eu);
L_11dd2c0e:;
  /* 11dd2c0e pop esi */
  ESI = (pop32());
  /* 11dd2c0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd2c10 ret  */
  ESPCHK(0x11dd2abeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c11 @ 0x11dd2c11 (41 bytes, 12 insns) */
void f_11dd2c11(void) {
  FTRACE(0x11dd2c11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2c11 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2c12 mov esi, dword ptr [0x11dd5044] */
  ESI = (r32((uint32_t)(0x11dd5044)));
  /* 11dd2c18 push dword ptr [0x11dd657c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd657c))));
  /* 11dd2c1e call esi */
  call_ind((uint32_t)(ESI), 0x11dd2c20u);
  /* 11dd2c20 push dword ptr [0x11dd656c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd656c))));
  /* 11dd2c26 call esi */
  call_ind((uint32_t)(ESI), 0x11dd2c28u);
  /* 11dd2c28 push dword ptr [0x11dd655c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd655c))));
  /* 11dd2c2e call esi */
  call_ind((uint32_t)(ESI), 0x11dd2c30u);
  /* 11dd2c30 push dword ptr [0x11dd653c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd653c))));
  /* 11dd2c36 call esi */
  call_ind((uint32_t)(ESI), 0x11dd2c38u);
  /* 11dd2c38 pop esi */
  ESI = (pop32());
  /* 11dd2c39 ret  */
  ESPCHK(0x11dd2c11u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c3a @ 0x11dd2c3a (108 bytes, 34 insns) */
void f_11dd2c3a(void) {
  FTRACE(0x11dd2c3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2c3a push esi */
  push32((uint32_t)(ESI));
  /* 11dd2c3b push edi */
  push32((uint32_t)(EDI));
  /* 11dd2c3c mov edi, dword ptr [0x11dd5074] */
  EDI = (r32((uint32_t)(0x11dd5074)));
  /* 11dd2c42 mov esi, 0x11dd6538 */
  ESI = (0x11dd6538u);
L_11dd2c47:;
  /* 11dd2c47 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dd2c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2c4b je 0x11dd2c78 */
  if (C.zf) goto L_11dd2c78;
  /* 11dd2c4d cmp esi, 0x11dd657c */
  { uint32_t _a=(ESI),_b=(0x11dd657cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2c53 je 0x11dd2c78 */
  if (C.zf) goto L_11dd2c78;
  /* 11dd2c55 cmp esi, 0x11dd656c */
  { uint32_t _a=(ESI),_b=(0x11dd656cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2c5b je 0x11dd2c78 */
  if (C.zf) goto L_11dd2c78;
  /* 11dd2c5d cmp esi, 0x11dd655c */
  { uint32_t _a=(ESI),_b=(0x11dd655cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2c63 je 0x11dd2c78 */
  if (C.zf) goto L_11dd2c78;
  /* 11dd2c65 cmp esi, 0x11dd653c */
  { uint32_t _a=(ESI),_b=(0x11dd653cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2c6b je 0x11dd2c78 */
  if (C.zf) goto L_11dd2c78;
  /* 11dd2c6d push eax */
  push32((uint32_t)(EAX));
  /* 11dd2c6e call edi */
  call_ind((uint32_t)(EDI), 0x11dd2c70u);
  /* 11dd2c70 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2c72 call 0x11dd2da9 */
  push32(0x11dd2c77u); f_11dd2da9();
  /* 11dd2c77 pop ecx */
  ECX = (pop32());
L_11dd2c78:;
  /* 11dd2c78 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2c7b cmp esi, 0x11dd65f8 */
  { uint32_t _a=(ESI),_b=(0x11dd65f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2c81 jl 0x11dd2c47 */
  if ((C.sf!=C.of)) goto L_11dd2c47;
  /* 11dd2c83 push dword ptr [0x11dd655c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd655c))));
  /* 11dd2c89 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2c8bu);
  /* 11dd2c8b push dword ptr [0x11dd656c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd656c))));
  /* 11dd2c91 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2c93u);
  /* 11dd2c93 push dword ptr [0x11dd657c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd657c))));
  /* 11dd2c99 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2c9bu);
  /* 11dd2c9b push dword ptr [0x11dd653c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd653c))));
  /* 11dd2ca1 call edi */
  call_ind((uint32_t)(EDI), 0x11dd2ca3u);
  /* 11dd2ca3 pop edi */
  EDI = (pop32());
  /* 11dd2ca4 pop esi */
  ESI = (pop32());
  /* 11dd2ca5 ret  */
  ESPCHK(0x11dd2c3au, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca6 @ 0x11dd2ca6 (97 bytes, 37 insns) */
void f_11dd2ca6(void) {
  FTRACE(0x11dd2ca6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2ca6 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd2ca7 mov ebp, esp */
  EBP = (ESP);
  /* 11dd2ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd2cac push esi */
  push32((uint32_t)(ESI));
  /* 11dd2cad cmp dword ptr [eax*4 + 0x11dd6538], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11dd6538))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2cb5 lea esi, [eax*4 + 0x11dd6538] */
  ESI = ((uint32_t)(EAX*4 + 0x11dd6538));
  /* 11dd2cbc jne 0x11dd2cfc */
  if (!C.zf) goto L_11dd2cfc;
  /* 11dd2cbe push edi */
  push32((uint32_t)(EDI));
  /* 11dd2cbf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11dd2cc1 call 0x11dd2df1 */
  push32(0x11dd2cc6u); f_11dd2df1();
  /* 11dd2cc6 mov edi, eax */
  EDI = (EAX);
  /* 11dd2cc8 pop ecx */
  ECX = (pop32());
  /* 11dd2cc9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd2ccb jne 0x11dd2cd5 */
  if (!C.zf) goto L_11dd2cd5;
  /* 11dd2ccd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd2ccf call 0x11dd2116 */
  push32(0x11dd2cd4u); f_11dd2116();
  /* 11dd2cd4 pop ecx */
  ECX = (pop32());
L_11dd2cd5:;
  /* 11dd2cd5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd2cd7 call 0x11dd2ca6 */
  push32(0x11dd2cdcu); f_11dd2ca6();
  /* 11dd2cdc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2cdf pop ecx */
  ECX = (pop32());
  /* 11dd2ce0 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2ce1 jne 0x11dd2ced */
  if (!C.zf) goto L_11dd2ced;
  /* 11dd2ce3 call dword ptr [0x11dd5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5044))), 0x11dd2ce9u);
  /* 11dd2ce9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dd2ceb jmp 0x11dd2cf3 */
  goto L_11dd2cf3;
L_11dd2ced:;
  /* 11dd2ced call 0x11dd2da9 */
  push32(0x11dd2cf2u); f_11dd2da9();
  /* 11dd2cf2 pop ecx */
  ECX = (pop32());
L_11dd2cf3:;
  /* 11dd2cf3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dd2cf5 call 0x11dd2d07 */
  push32(0x11dd2cfau); f_11dd2d07();
  /* 11dd2cfa pop ecx */
  ECX = (pop32());
  /* 11dd2cfb pop edi */
  EDI = (pop32());
L_11dd2cfc:;
  /* 11dd2cfc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dd2cfe call dword ptr [0x11dd5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5040))), 0x11dd2d04u);
  /* 11dd2d04 pop esi */
  ESI = (pop32());
  /* 11dd2d05 pop ebp */
  EBP = (pop32());
  /* 11dd2d06 ret  */
  ESPCHK(0x11dd2ca6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d07 @ 0x11dd2d07 (21 bytes, 7 insns) */
void f_11dd2d07(void) {
  FTRACE(0x11dd2d07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2d07 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd2d08 mov ebp, esp */
  EBP = (ESP);
  /* 11dd2d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd2d0d push dword ptr [eax*4 + 0x11dd6538] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11dd6538))));
  /* 11dd2d14 call dword ptr [0x11dd5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5048))), 0x11dd2d1au);
  /* 11dd2d1a pop ebp */
  EBP = (pop32());
  /* 11dd2d1b ret  */
  ESPCHK(0x11dd2d07u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d1c @ 0x11dd2d1c (141 bytes, 56 insns) */
void f_11dd2d1c(void) {
  FTRACE(0x11dd2d1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2d1c push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2d1d push esi */
  push32((uint32_t)(ESI));
  /* 11dd2d1e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11dd2d22 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2d23 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dd2d28 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2d2b mov ebx, esi */
  EBX = (ESI);
  /* 11dd2d2d ja 0x11dd2d3c */
  if ((!C.cf&&!C.zf)) goto L_11dd2d3c;
  /* 11dd2d2f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2d31 jne 0x11dd2d36 */
  if (!C.zf) goto L_11dd2d36;
  /* 11dd2d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd2d35 pop esi */
  ESI = (pop32());
L_11dd2d36:;
  /* 11dd2d36 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2d39 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11dd2d3c:;
  /* 11dd2d3c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd2d3e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2d41 ja 0x11dd2d7d */
  if ((!C.cf&&!C.zf)) goto L_11dd2d7d;
  /* 11dd2d43 cmp ebx, dword ptr [0x11dd6780] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dd6780))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2d49 ja 0x11dd2d68 */
  if ((!C.cf&&!C.zf)) goto L_11dd2d68;
  /* 11dd2d4b push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2d4d call 0x11dd2ca6 */
  push32(0x11dd2d52u); f_11dd2ca6();
  /* 11dd2d52 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2d53 call 0x11dd3aa9 */
  push32(0x11dd2d58u); f_11dd3aa9();
  /* 11dd2d58 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2d5a mov edi, eax */
  EDI = (EAX);
  /* 11dd2d5c call 0x11dd2d07 */
  push32(0x11dd2d61u); f_11dd2d07();
  /* 11dd2d61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2d64 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd2d66 jne 0x11dd2d93 */
  if (!C.zf) goto L_11dd2d93;
L_11dd2d68:;
  /* 11dd2d68 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2d69 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd2d6b push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2d71 call dword ptr [0x11dd503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd503c))), 0x11dd2d77u);
  /* 11dd2d77 mov edi, eax */
  EDI = (EAX);
  /* 11dd2d79 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd2d7b jne 0x11dd2d9f */
  if (!C.zf) goto L_11dd2d9f;
L_11dd2d7d:;
  /* 11dd2d7d cmp dword ptr [0x11dd6b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dd6b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2d84 je 0x11dd2d9f */
  if (C.zf) goto L_11dd2d9f;
  /* 11dd2d86 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2d87 call 0x11dd4148 */
  push32(0x11dd2d8cu); f_11dd4148();
  /* 11dd2d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2d8e pop ecx */
  ECX = (pop32());
  /* 11dd2d8f je 0x11dd2da5 */
  if (C.zf) goto L_11dd2da5;
  /* 11dd2d91 jmp 0x11dd2d3c */
  goto L_11dd2d3c;
L_11dd2d93:;
  /* 11dd2d93 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2d96 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2d97 call 0x11dd40f0 */
  push32(0x11dd2d9cu); f_11dd40f0();
  /* 11dd2d9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dd2d9f:;
  /* 11dd2d9f mov eax, edi */
  EAX = (EDI);
L_11dd2da1:;
  /* 11dd2da1 pop edi */
  EDI = (pop32());
  /* 11dd2da2 pop esi */
  ESI = (pop32());
  /* 11dd2da3 pop ebx */
  EBX = (pop32());
  /* 11dd2da4 ret  */
  ESPCHK(0x11dd2d1cu, _esp0);
  ESP += 4; return;
L_11dd2da5:;
  /* 11dd2da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2da7 jmp 0x11dd2da1 */
  goto L_11dd2da1;
}

/* FUN_10002da9 @ 0x11dd2da9 (72 bytes, 29 insns) */
void f_11dd2da9(void) {
  FTRACE(0x11dd2da9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2da9 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2daa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2dae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2db0 je 0x11dd2def */
  if (C.zf) goto L_11dd2def;
  /* 11dd2db2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2db4 call 0x11dd2ca6 */
  push32(0x11dd2db9u); f_11dd2ca6();
  /* 11dd2db9 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2dba call 0x11dd3753 */
  push32(0x11dd2dbfu); f_11dd3753();
  /* 11dd2dbf pop ecx */
  ECX = (pop32());
  /* 11dd2dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2dc2 pop ecx */
  ECX = (pop32());
  /* 11dd2dc3 je 0x11dd2dd8 */
  if (C.zf) goto L_11dd2dd8;
  /* 11dd2dc5 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2dc6 push eax */
  push32((uint32_t)(EAX));
  /* 11dd2dc7 call 0x11dd377e */
  push32(0x11dd2dccu); f_11dd377e();
  /* 11dd2dcc push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2dce call 0x11dd2d07 */
  push32(0x11dd2dd3u); f_11dd2d07();
  /* 11dd2dd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2dd6 pop esi */
  ESI = (pop32());
  /* 11dd2dd7 ret  */
  ESPCHK(0x11dd2da9u, _esp0);
  ESP += 4; return;
L_11dd2dd8:;
  /* 11dd2dd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2dda call 0x11dd2d07 */
  push32(0x11dd2ddfu); f_11dd2d07();
  /* 11dd2ddf pop ecx */
  ECX = (pop32());
  /* 11dd2de0 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2de3 push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2de9 call dword ptr [0x11dd504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd504c))), 0x11dd2defu);
L_11dd2def:;
  /* 11dd2def pop esi */
  ESI = (pop32());
  /* 11dd2df0 ret  */
  ESPCHK(0x11dd2da9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11dd2df1 (18 bytes, 6 insns) */
void f_11dd2df1(void) {
  FTRACE(0x11dd2df1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2df1 push dword ptr [0x11dd6b6c] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6b6c))));
  /* 11dd2df7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11dd2dfb call 0x11dd2e03 */
  push32(0x11dd2e00u); f_11dd2e03();
  /* 11dd2e00 pop ecx */
  ECX = (pop32());
  /* 11dd2e01 pop ecx */
  ECX = (pop32());
  /* 11dd2e02 ret  */
  ESPCHK(0x11dd2df1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11dd2e03 (44 bytes, 16 insns) */
void f_11dd2e03(void) {
  FTRACE(0x11dd2e03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2e03 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2e08 ja 0x11dd2e2c */
  if ((!C.cf&&!C.zf)) goto L_11dd2e2c;
L_11dd2e0a:;
  /* 11dd2e0a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dd2e0e call 0x11dd2e2f */
  push32(0x11dd2e13u); f_11dd2e2f();
  /* 11dd2e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2e15 pop ecx */
  ECX = (pop32());
  /* 11dd2e16 jne 0x11dd2e2e */
  if (!C.zf) goto L_11dd2e2e;
  /* 11dd2e18 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2e1c je 0x11dd2e2e */
  if (C.zf) goto L_11dd2e2e;
  /* 11dd2e1e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dd2e22 call 0x11dd4148 */
  push32(0x11dd2e27u); f_11dd4148();
  /* 11dd2e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd2e29 pop ecx */
  ECX = (pop32());
  /* 11dd2e2a jne 0x11dd2e0a */
  if (!C.zf) goto L_11dd2e0a;
L_11dd2e2c:;
  /* 11dd2e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dd2e2e:;
  /* 11dd2e2e ret  */
  ESPCHK(0x11dd2e03u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e2f @ 0x11dd2e2f (78 bytes, 30 insns) */
void f_11dd2e2f(void) {
  FTRACE(0x11dd2e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2e2f push esi */
  push32((uint32_t)(ESI));
  /* 11dd2e30 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2e34 cmp esi, dword ptr [0x11dd6780] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dd6780))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd2e3a push edi */
  push32((uint32_t)(EDI));
  /* 11dd2e3b ja 0x11dd2e5e */
  if ((!C.cf&&!C.zf)) goto L_11dd2e5e;
  /* 11dd2e3d push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2e3f call 0x11dd2ca6 */
  push32(0x11dd2e44u); f_11dd2ca6();
  /* 11dd2e44 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2e45 call 0x11dd3aa9 */
  push32(0x11dd2e4au); f_11dd3aa9();
  /* 11dd2e4a push 9 */
  push32((uint32_t)(0x9u));
  /* 11dd2e4c mov edi, eax */
  EDI = (EAX);
  /* 11dd2e4e call 0x11dd2d07 */
  push32(0x11dd2e53u); f_11dd2d07();
  /* 11dd2e53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2e56 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dd2e58 je 0x11dd2e5e */
  if (C.zf) goto L_11dd2e5e;
  /* 11dd2e5a mov eax, edi */
  EAX = (EDI);
  /* 11dd2e5c jmp 0x11dd2e7a */
  goto L_11dd2e7a;
L_11dd2e5e:;
  /* 11dd2e5e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd2e60 jne 0x11dd2e65 */
  if (!C.zf) goto L_11dd2e65;
  /* 11dd2e62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd2e64 pop esi */
  ESI = (pop32());
L_11dd2e65:;
  /* 11dd2e65 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2e68 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11dd2e6b push esi */
  push32((uint32_t)(ESI));
  /* 11dd2e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd2e6e push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd2e74 call dword ptr [0x11dd503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd503c))), 0x11dd2e7au);
L_11dd2e7a:;
  /* 11dd2e7a pop edi */
  EDI = (pop32());
  /* 11dd2e7b pop esi */
  ESI = (pop32());
  /* 11dd2e7c ret  */
  ESPCHK(0x11dd2e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e80 @ 0x11dd2e80 (7 bytes, 3 insns) */
void f_11dd2e80(void) {
  FTRACE(0x11dd2e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2e80 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2e81 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2e85 jmp 0x11dd2ef1 */
  jmp_ind(0x11dd2ef1u); return;
}

/* FUN_10002e90 @ 0x11dd2e90 (224 bytes, 84 insns) */
void f_11dd2e90(void) {
  FTRACE(0x11dd2e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2e90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd2e94 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2e95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dd2e9b je 0x11dd2eac */
  if (C.zf) goto L_11dd2eac;
L_11dd2e9d:;
  /* 11dd2e9d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11dd2e9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd2ea0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd2ea2 je 0x11dd2edf */
  if (C.zf) goto L_11dd2edf;
  /* 11dd2ea4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dd2eaa jne 0x11dd2e9d */
  if (!C.zf) goto L_11dd2e9d;
L_11dd2eac:;
  /* 11dd2eac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dd2eae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dd2eb3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2eb5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2eb8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2eba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2ebd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dd2ec2 je 0x11dd2eac */
  if (C.zf) goto L_11dd2eac;
  /* 11dd2ec4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11dd2ec7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd2ec9 je 0x11dd2eee */
  if (C.zf) goto L_11dd2eee;
  /* 11dd2ecb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dd2ecd je 0x11dd2ee9 */
  if (C.zf) goto L_11dd2ee9;
  /* 11dd2ecf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dd2ed4 je 0x11dd2ee4 */
  if (C.zf) goto L_11dd2ee4;
  /* 11dd2ed6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dd2edb je 0x11dd2edf */
  if (C.zf) goto L_11dd2edf;
  /* 11dd2edd jmp 0x11dd2eac */
  goto L_11dd2eac;
L_11dd2edf:;
  /* 11dd2edf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11dd2ee2 jmp 0x11dd2ef1 */
  goto L_11dd2ef1;
L_11dd2ee4:;
  /* 11dd2ee4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11dd2ee7 jmp 0x11dd2ef1 */
  goto L_11dd2ef1;
L_11dd2ee9:;
  /* 11dd2ee9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11dd2eec jmp 0x11dd2ef1 */
  goto L_11dd2ef1;
L_11dd2eee:;
  /* 11dd2eee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11dd2ef1:;
  /* 11dd2ef1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dd2ef5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dd2efb je 0x11dd2f16 */
  if (C.zf) goto L_11dd2f16;
L_11dd2efd:;
  /* 11dd2efd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11dd2eff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd2f00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd2f02 je 0x11dd2f68 */
  if (C.zf) goto L_11dd2f68;
  /* 11dd2f04 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11dd2f06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd2f07 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dd2f0d jne 0x11dd2efd */
  if (!C.zf) goto L_11dd2efd;
  /* 11dd2f0f jmp 0x11dd2f16 */
  goto L_11dd2f16;
L_11dd2f11:;
  /* 11dd2f11 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dd2f13 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dd2f16:;
  /* 11dd2f16 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dd2f1b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dd2f1d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2f1f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2f22 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2f24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dd2f26 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2f29 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dd2f2e je 0x11dd2f11 */
  if (C.zf) goto L_11dd2f11;
  /* 11dd2f30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd2f32 je 0x11dd2f68 */
  if (C.zf) goto L_11dd2f68;
  /* 11dd2f34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11dd2f36 je 0x11dd2f5f */
  if (C.zf) goto L_11dd2f5f;
  /* 11dd2f38 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dd2f3e je 0x11dd2f52 */
  if (C.zf) goto L_11dd2f52;
  /* 11dd2f40 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dd2f46 je 0x11dd2f4a */
  if (C.zf) goto L_11dd2f4a;
  /* 11dd2f48 jmp 0x11dd2f11 */
  goto L_11dd2f11;
L_11dd2f4a:;
  /* 11dd2f4a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dd2f4c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2f50 pop edi */
  EDI = (pop32());
  /* 11dd2f51 ret  */
  ESPCHK(0x11dd2e90u, _esp0);
  ESP += 4; return;
L_11dd2f52:;
  /* 11dd2f52 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11dd2f55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2f59 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11dd2f5d pop edi */
  EDI = (pop32());
  /* 11dd2f5e ret  */
  ESPCHK(0x11dd2e90u, _esp0);
  ESP += 4; return;
L_11dd2f5f:;
  /* 11dd2f5f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11dd2f62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2f66 pop edi */
  EDI = (pop32());
  /* 11dd2f67 ret  */
  ESPCHK(0x11dd2e90u, _esp0);
  ESP += 4; return;
L_11dd2f68:;
  /* 11dd2f68 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11dd2f6a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd2f6e pop edi */
  EDI = (pop32());
  /* 11dd2f6f ret  */
  ESPCHK(0x11dd2e90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11dd2f70 (123 bytes, 44 insns) */
void f_11dd2f70(void) {
  FTRACE(0x11dd2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2f70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd2f74 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dd2f7a je 0x11dd2f90 */
  if (C.zf) goto L_11dd2f90;
L_11dd2f7c:;
  /* 11dd2f7c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11dd2f7e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd2f7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd2f81 je 0x11dd2fc3 */
  if (C.zf) goto L_11dd2fc3;
  /* 11dd2f83 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dd2f89 jne 0x11dd2f7c */
  if (!C.zf) goto L_11dd2f7c;
  /* 11dd2f8b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dd2f90:;
  /* 11dd2f90 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dd2f92 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dd2f97 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2f99 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2f9c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd2f9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd2fa1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dd2fa6 je 0x11dd2f90 */
  if (C.zf) goto L_11dd2f90;
  /* 11dd2fa8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11dd2fab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd2fad je 0x11dd2fe1 */
  if (C.zf) goto L_11dd2fe1;
  /* 11dd2faf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dd2fb1 je 0x11dd2fd7 */
  if (C.zf) goto L_11dd2fd7;
  /* 11dd2fb3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dd2fb8 je 0x11dd2fcd */
  if (C.zf) goto L_11dd2fcd;
  /* 11dd2fba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dd2fbf je 0x11dd2fc3 */
  if (C.zf) goto L_11dd2fc3;
  /* 11dd2fc1 jmp 0x11dd2f90 */
  goto L_11dd2f90;
L_11dd2fc3:;
  /* 11dd2fc3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11dd2fc6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd2fca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2fcc ret  */
  ESPCHK(0x11dd2f70u, _esp0);
  ESP += 4; return;
L_11dd2fcd:;
  /* 11dd2fcd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11dd2fd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd2fd4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2fd6 ret  */
  ESPCHK(0x11dd2f70u, _esp0);
  ESP += 4; return;
L_11dd2fd7:;
  /* 11dd2fd7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11dd2fda mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd2fde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2fe0 ret  */
  ESPCHK(0x11dd2f70u, _esp0);
  ESP += 4; return;
L_11dd2fe1:;
  /* 11dd2fe1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11dd2fe4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd2fe8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2fea ret  */
  ESPCHK(0x11dd2f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002feb @ 0x11dd2feb (429 bytes, 143 insns) */
void f_11dd2feb(void) {
  FTRACE(0x11dd2febu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd2feb push ebp */
  push32((uint32_t)(EBP));
  /* 11dd2fec mov ebp, esp */
  EBP = (ESP);
  /* 11dd2fee sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd2ff1 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd2ff2 push esi */
  push32((uint32_t)(ESI));
  /* 11dd2ff3 push edi */
  push32((uint32_t)(EDI));
  /* 11dd2ff4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11dd2ff6 call 0x11dd2ca6 */
  push32(0x11dd2ffbu); f_11dd2ca6();
  /* 11dd2ffb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd2ffe call 0x11dd3198 */
  push32(0x11dd3003u); f_11dd3198();
  /* 11dd3003 mov ebx, eax */
  EBX = (EAX);
  /* 11dd3005 pop ecx */
  ECX = (pop32());
  /* 11dd3006 cmp ebx, dword ptr [0x11dd6bb0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dd6bb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd300c pop ecx */
  ECX = (pop32());
  /* 11dd300d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3010 jne 0x11dd3019 */
  if (!C.zf) goto L_11dd3019;
L_11dd3012:;
  /* 11dd3012 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dd3014 jmp 0x11dd3189 */
  goto L_11dd3189;
L_11dd3019:;
  /* 11dd3019 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dd301b je 0x11dd3177 */
  if (C.zf) goto L_11dd3177;
  /* 11dd3021 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3023 mov eax, 0x11dd6688 */
  EAX = (0x11dd6688u);
L_11dd3028:;
  /* 11dd3028 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd302a je 0x11dd30a0 */
  if (C.zf) goto L_11dd30a0;
  /* 11dd302c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd302f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dd3030 cmp eax, 0x11dd6778 */
  { uint32_t _a=(EAX),_b=(0x11dd6778u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3035 jl 0x11dd3028 */
  if ((C.sf!=C.of)) goto L_11dd3028;
  /* 11dd3037 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11dd303a push eax */
  push32((uint32_t)(EAX));
  /* 11dd303b push ebx */
  push32((uint32_t)(EBX));
  /* 11dd303c call dword ptr [0x11dd5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5034))), 0x11dd3042u);
  /* 11dd3042 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd3044 pop esi */
  ESI = (pop32());
  /* 11dd3045 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3047 jne 0x11dd316e */
  if (!C.zf) goto L_11dd316e;
  /* 11dd304d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dd304f and dword ptr [0x11dd6de4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dd6de4)))&(0x0u); w32((uint32_t)(0x11dd6de4), (_r)); fl_logic(_r,32); }
  /* 11dd3056 pop ecx */
  ECX = (pop32());
  /* 11dd3057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3059 mov edi, 0x11dd6ce0 */
  EDI = (0x11dd6ce0u);
  /* 11dd305e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3061 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dd3063 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dd3064 mov dword ptr [0x11dd6bb0], ebx */
  w32((uint32_t)(0x11dd6bb0), (EBX));
  /* 11dd306a jbe 0x11dd315b */
  if ((C.cf||C.zf)) goto L_11dd315b;
  /* 11dd3070 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd3074 je 0x11dd3136 */
  if (C.zf) goto L_11dd3136;
  /* 11dd307a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11dd307d:;
  /* 11dd307d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11dd307f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd3081 je 0x11dd3136 */
  if (C.zf) goto L_11dd3136;
  /* 11dd3087 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11dd308b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11dd308e:;
  /* 11dd308e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3090 ja 0x11dd312a */
  if ((!C.cf&&!C.zf)) goto L_11dd312a;
  /* 11dd3096 or byte ptr [eax + 0x11dd6ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(0x4u); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd309d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd309e jmp 0x11dd308e */
  goto L_11dd308e;
L_11dd30a0:;
  /* 11dd30a0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd30a4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dd30a6 pop ecx */
  ECX = (pop32());
  /* 11dd30a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd30a9 mov edi, 0x11dd6ce0 */
  EDI = (0x11dd6ce0u);
  /* 11dd30ae lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11dd30b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dd30b3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11dd30b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dd30b7 lea ebx, [esi + 0x11dd6698] */
  EBX = ((uint32_t)(ESI + 0x11dd6698));
L_11dd30bd:;
  /* 11dd30bd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd30c0 mov ecx, ebx */
  ECX = (EBX);
  /* 11dd30c2 je 0x11dd30f0 */
  if (C.zf) goto L_11dd30f0;
L_11dd30c4:;
  /* 11dd30c4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11dd30c7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd30c9 je 0x11dd30f0 */
  if (C.zf) goto L_11dd30f0;
  /* 11dd30cb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11dd30ce movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11dd30d1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd30d3 ja 0x11dd30e9 */
  if ((!C.cf&&!C.zf)) goto L_11dd30e9;
  /* 11dd30d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd30d8 mov dl, byte ptr [edx + 0x11dd6680] */
  DL = (r8((uint32_t)(EDX + 0x11dd6680)));
L_11dd30de:;
  /* 11dd30de or byte ptr [eax + 0x11dd6ce1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(DL); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd30e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd30e5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd30e7 jbe 0x11dd30de */
  if ((C.cf||C.zf)) goto L_11dd30de;
L_11dd30e9:;
  /* 11dd30e9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd30ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd30eb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd30ee jne 0x11dd30c4 */
  if (!C.zf) goto L_11dd30c4;
L_11dd30f0:;
  /* 11dd30f0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dd30f3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd30f6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd30fa jb 0x11dd30bd */
  if (C.cf) goto L_11dd30bd;
  /* 11dd30fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd30ff mov dword ptr [0x11dd6bcc], 1 */
  w32((uint32_t)(0x11dd6bcc), (0x1u));
  /* 11dd3109 push eax */
  push32((uint32_t)(EAX));
  /* 11dd310a mov dword ptr [0x11dd6bb0], eax */
  w32((uint32_t)(0x11dd6bb0), (EAX));
  /* 11dd310f call 0x11dd31e2 */
  push32(0x11dd3114u); f_11dd31e2();
  /* 11dd3114 lea esi, [esi + 0x11dd668c] */
  ESI = ((uint32_t)(ESI + 0x11dd668c));
  /* 11dd311a mov edi, 0x11dd6bc0 */
  EDI = (0x11dd6bc0u);
  /* 11dd311f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11dd3120 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11dd3121 pop ecx */
  ECX = (pop32());
  /* 11dd3122 mov dword ptr [0x11dd6de4], eax */
  w32((uint32_t)(0x11dd6de4), (EAX));
  /* 11dd3127 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11dd3128 jmp 0x11dd317c */
  goto L_11dd317c;
L_11dd312a:;
  /* 11dd312a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd312b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd312c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd3130 jne 0x11dd307d */
  if (!C.zf) goto L_11dd307d;
L_11dd3136:;
  /* 11dd3136 mov eax, esi */
  EAX = (ESI);
L_11dd3138:;
  /* 11dd3138 or byte ptr [eax + 0x11dd6ce1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(0x8u); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd313f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd3140 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3145 jb 0x11dd3138 */
  if (C.cf) goto L_11dd3138;
  /* 11dd3147 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3148 call 0x11dd31e2 */
  push32(0x11dd314du); f_11dd31e2();
  /* 11dd314d pop ecx */
  ECX = (pop32());
  /* 11dd314e mov dword ptr [0x11dd6de4], eax */
  w32((uint32_t)(0x11dd6de4), (EAX));
  /* 11dd3153 mov dword ptr [0x11dd6bcc], esi */
  w32((uint32_t)(0x11dd6bcc), (ESI));
  /* 11dd3159 jmp 0x11dd3162 */
  goto L_11dd3162;
L_11dd315b:;
  /* 11dd315b and dword ptr [0x11dd6bcc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dd6bcc)))&(0x0u); w32((uint32_t)(0x11dd6bcc), (_r)); fl_logic(_r,32); }
L_11dd3162:;
  /* 11dd3162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3164 mov edi, 0x11dd6bc0 */
  EDI = (0x11dd6bc0u);
  /* 11dd3169 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dd316a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dd316b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dd316c jmp 0x11dd317c */
  goto L_11dd317c;
L_11dd316e:;
  /* 11dd316e cmp dword ptr [0x11dd6b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dd6b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3175 je 0x11dd3186 */
  if (C.zf) goto L_11dd3186;
L_11dd3177:;
  /* 11dd3177 call 0x11dd3215 */
  push32(0x11dd317cu); f_11dd3215();
L_11dd317c:;
  /* 11dd317c call 0x11dd323e */
  push32(0x11dd3181u); f_11dd323e();
  /* 11dd3181 jmp 0x11dd3012 */
  goto L_11dd3012;
L_11dd3186:;
  /* 11dd3186 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11dd3189:;
  /* 11dd3189 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11dd318b call 0x11dd2d07 */
  push32(0x11dd3190u); f_11dd2d07();
  /* 11dd3190 pop ecx */
  ECX = (pop32());
  /* 11dd3191 mov eax, esi */
  EAX = (ESI);
  /* 11dd3193 pop edi */
  EDI = (pop32());
  /* 11dd3194 pop esi */
  ESI = (pop32());
  /* 11dd3195 pop ebx */
  EBX = (pop32());
  /* 11dd3196 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd3197 ret  */
  ESPCHK(0x11dd2febu, _esp0);
  ESP += 4; return;
}

/* FUN_10003198 @ 0x11dd3198 (74 bytes, 15 insns) */
void f_11dd3198(void) {
  FTRACE(0x11dd3198u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3198 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd319c and dword ptr [0x11dd6b58], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dd6b58)))&(0x0u); w32((uint32_t)(0x11dd6b58), (_r)); fl_logic(_r,32); }
  /* 11dd31a3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd31a6 jne 0x11dd31b8 */
  if (!C.zf) goto L_11dd31b8;
  /* 11dd31a8 mov dword ptr [0x11dd6b58], 1 */
  w32((uint32_t)(0x11dd6b58), (0x1u));
  /* 11dd31b2 jmp dword ptr [0x11dd5038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11dd5038)))); return;
L_11dd31b8:;
  /* 11dd31b8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd31bb jne 0x11dd31cd */
  if (!C.zf) goto L_11dd31cd;
  /* 11dd31bd mov dword ptr [0x11dd6b58], 1 */
  w32((uint32_t)(0x11dd6b58), (0x1u));
  /* 11dd31c7 jmp dword ptr [0x11dd5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11dd5030)))); return;
L_11dd31cd:;
  /* 11dd31cd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd31d0 jne 0x11dd31e1 */
  if (!C.zf) goto L_11dd31e1;
  /* 11dd31d2 mov eax, dword ptr [0x11dd6b88] */
  EAX = (r32((uint32_t)(0x11dd6b88)));
  /* 11dd31d7 mov dword ptr [0x11dd6b58], 1 */
  w32((uint32_t)(0x11dd6b58), (0x1u));
L_11dd31e1:;
  /* 11dd31e1 ret  */
  ESPCHK(0x11dd3198u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e2 @ 0x11dd31e2 (51 bytes, 19 insns) */
void f_11dd31e2(void) {
  FTRACE(0x11dd31e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd31e2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd31e6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd31eb je 0x11dd320f */
  if (C.zf) goto L_11dd320f;
  /* 11dd31ed sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd31f0 je 0x11dd3209 */
  if (C.zf) goto L_11dd3209;
  /* 11dd31f2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd31f5 je 0x11dd3203 */
  if (C.zf) goto L_11dd3203;
  /* 11dd31f7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dd31f8 je 0x11dd31fd */
  if (C.zf) goto L_11dd31fd;
  /* 11dd31fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd31fc ret  */
  ESPCHK(0x11dd31e2u, _esp0);
  ESP += 4; return;
L_11dd31fd:;
  /* 11dd31fd mov eax, 0x404 */
  EAX = (0x404u);
  /* 11dd3202 ret  */
  ESPCHK(0x11dd31e2u, _esp0);
  ESP += 4; return;
L_11dd3203:;
  /* 11dd3203 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11dd3208 ret  */
  ESPCHK(0x11dd31e2u, _esp0);
  ESP += 4; return;
L_11dd3209:;
  /* 11dd3209 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11dd320e ret  */
  ESPCHK(0x11dd31e2u, _esp0);
  ESP += 4; return;
L_11dd320f:;
  /* 11dd320f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11dd3214 ret  */
  ESPCHK(0x11dd31e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003215 @ 0x11dd3215 (41 bytes, 17 insns) */
void f_11dd3215(void) {
  FTRACE(0x11dd3215u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3215 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3216 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dd3218 pop ecx */
  ECX = (pop32());
  /* 11dd3219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd321b mov edi, 0x11dd6ce0 */
  EDI = (0x11dd6ce0u);
  /* 11dd3220 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dd3222 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dd3223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3225 mov edi, 0x11dd6bc0 */
  EDI = (0x11dd6bc0u);
  /* 11dd322a mov dword ptr [0x11dd6bb0], eax */
  w32((uint32_t)(0x11dd6bb0), (EAX));
  /* 11dd322f mov dword ptr [0x11dd6bcc], eax */
  w32((uint32_t)(0x11dd6bcc), (EAX));
  /* 11dd3234 mov dword ptr [0x11dd6de4], eax */
  w32((uint32_t)(0x11dd6de4), (EAX));
  /* 11dd3239 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dd323a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dd323b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dd323c pop edi */
  EDI = (pop32());
  /* 11dd323d ret  */
  ESPCHK(0x11dd3215u, _esp0);
  ESP += 4; return;
}

/* FUN_1000323e @ 0x11dd323e (389 bytes, 124 insns) */
void f_11dd323e(void) {
  FTRACE(0x11dd323eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd323e push ebp */
  push32((uint32_t)(EBP));
  /* 11dd323f mov ebp, esp */
  EBP = (ESP);
  /* 11dd3241 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3247 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11dd324a push esi */
  push32((uint32_t)(ESI));
  /* 11dd324b push eax */
  push32((uint32_t)(EAX));
  /* 11dd324c push dword ptr [0x11dd6bb0] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6bb0))));
  /* 11dd3252 call dword ptr [0x11dd5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5034))), 0x11dd3258u);
  /* 11dd3258 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd325b jne 0x11dd3377 */
  if (!C.zf) goto L_11dd3377;
  /* 11dd3261 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3263 mov esi, 0x100 */
  ESI = (0x100u);
L_11dd3268:;
  /* 11dd3268 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11dd326f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd3270 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3272 jb 0x11dd3268 */
  if (C.cf) goto L_11dd3268;
  /* 11dd3274 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11dd3277 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11dd327e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd3280 je 0x11dd32b9 */
  if (C.zf) goto L_11dd32b9;
  /* 11dd3282 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3283 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3284 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11dd3287:;
  /* 11dd3287 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11dd328a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11dd328d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd328f ja 0x11dd32ae */
  if ((!C.cf&&!C.zf)) goto L_11dd32ae;
  /* 11dd3291 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3293 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11dd329a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd329b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11dd32a0 mov ebx, ecx */
  EBX = (ECX);
  /* 11dd32a2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd32a5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dd32a7 mov ecx, ebx */
  ECX = (EBX);
  /* 11dd32a9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11dd32ac rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11dd32ae:;
  /* 11dd32ae inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dd32af inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dd32b0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11dd32b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd32b5 jne 0x11dd3287 */
  if (!C.zf) goto L_11dd3287;
  /* 11dd32b7 pop edi */
  EDI = (pop32());
  /* 11dd32b8 pop ebx */
  EBX = (pop32());
L_11dd32b9:;
  /* 11dd32b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd32bb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11dd32c1 push dword ptr [0x11dd6de4] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de4))));
  /* 11dd32c7 push dword ptr [0x11dd6bb0] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6bb0))));
  /* 11dd32cd push eax */
  push32((uint32_t)(EAX));
  /* 11dd32ce lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11dd32d4 push esi */
  push32((uint32_t)(ESI));
  /* 11dd32d5 push eax */
  push32((uint32_t)(EAX));
  /* 11dd32d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd32d8 call 0x11dd43b2 */
  push32(0x11dd32ddu); f_11dd43b2();
  /* 11dd32dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd32df lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11dd32e5 push dword ptr [0x11dd6bb0] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6bb0))));
  /* 11dd32eb push esi */
  push32((uint32_t)(ESI));
  /* 11dd32ec push eax */
  push32((uint32_t)(EAX));
  /* 11dd32ed lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11dd32f3 push esi */
  push32((uint32_t)(ESI));
  /* 11dd32f4 push eax */
  push32((uint32_t)(EAX));
  /* 11dd32f5 push esi */
  push32((uint32_t)(ESI));
  /* 11dd32f6 push dword ptr [0x11dd6de4] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de4))));
  /* 11dd32fc call 0x11dd4163 */
  push32(0x11dd3301u); f_11dd4163();
  /* 11dd3301 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd3303 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11dd3309 push dword ptr [0x11dd6bb0] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6bb0))));
  /* 11dd330f push esi */
  push32((uint32_t)(ESI));
  /* 11dd3310 push eax */
  push32((uint32_t)(EAX));
  /* 11dd3311 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11dd3317 push esi */
  push32((uint32_t)(ESI));
  /* 11dd3318 push eax */
  push32((uint32_t)(EAX));
  /* 11dd3319 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11dd331e push dword ptr [0x11dd6de4] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de4))));
  /* 11dd3324 call 0x11dd4163 */
  push32(0x11dd3329u); f_11dd4163();
  /* 11dd3329 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd332c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd332e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11dd3334:;
  /* 11dd3334 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11dd3337 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11dd333a je 0x11dd3352 */
  if (C.zf) goto L_11dd3352;
  /* 11dd333c or byte ptr [eax + 0x11dd6ce1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(0x10u); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd3343 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11dd334a:;
  /* 11dd334a mov byte ptr [eax + 0x11dd6be0], dl */
  w8((uint32_t)(EAX + 0x11dd6be0), (DL));
  /* 11dd3350 jmp 0x11dd336e */
  goto L_11dd336e;
L_11dd3352:;
  /* 11dd3352 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11dd3355 je 0x11dd3367 */
  if (C.zf) goto L_11dd3367;
  /* 11dd3357 or byte ptr [eax + 0x11dd6ce1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(0x20u); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd335e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11dd3365 jmp 0x11dd334a */
  goto L_11dd334a;
L_11dd3367:;
  /* 11dd3367 and byte ptr [eax + 0x11dd6be0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6be0)))&(0x0u); w8((uint32_t)(EAX + 0x11dd6be0), (_r)); fl_logic(_r,8); }
L_11dd336e:;
  /* 11dd336e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd336f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd3370 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dd3371 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3373 jb 0x11dd3334 */
  if (C.cf) goto L_11dd3334;
  /* 11dd3375 jmp 0x11dd33c0 */
  goto L_11dd33c0;
L_11dd3377:;
  /* 11dd3377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3379 mov esi, 0x100 */
  ESI = (0x100u);
L_11dd337e:;
  /* 11dd337e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3381 jb 0x11dd339c */
  if (C.cf) goto L_11dd339c;
  /* 11dd3383 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3386 ja 0x11dd339c */
  if ((!C.cf&&!C.zf)) goto L_11dd339c;
  /* 11dd3388 or byte ptr [eax + 0x11dd6ce1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(0x10u); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd338f mov cl, al */
  CL = (AL);
  /* 11dd3391 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11dd3394:;
  /* 11dd3394 mov byte ptr [eax + 0x11dd6be0], cl */
  w8((uint32_t)(EAX + 0x11dd6be0), (CL));
  /* 11dd339a jmp 0x11dd33bb */
  goto L_11dd33bb;
L_11dd339c:;
  /* 11dd339c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd339f jb 0x11dd33b4 */
  if (C.cf) goto L_11dd33b4;
  /* 11dd33a1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd33a4 ja 0x11dd33b4 */
  if ((!C.cf&&!C.zf)) goto L_11dd33b4;
  /* 11dd33a6 or byte ptr [eax + 0x11dd6ce1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6ce1)))|(0x20u); w8((uint32_t)(EAX + 0x11dd6ce1), (_r)); fl_logic(_r,8); }
  /* 11dd33ad mov cl, al */
  CL = (AL);
  /* 11dd33af sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dd33b2 jmp 0x11dd3394 */
  goto L_11dd3394;
L_11dd33b4:;
  /* 11dd33b4 and byte ptr [eax + 0x11dd6be0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dd6be0)))&(0x0u); w8((uint32_t)(EAX + 0x11dd6be0), (_r)); fl_logic(_r,8); }
L_11dd33bb:;
  /* 11dd33bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd33bc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd33be jb 0x11dd337e */
  if (C.cf) goto L_11dd337e;
L_11dd33c0:;
  /* 11dd33c0 pop esi */
  ESI = (pop32());
  /* 11dd33c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd33c2 ret  */
  ESPCHK(0x11dd323eu, _esp0);
  ESP += 4; return;
}

/* FUN_100033c3 @ 0x11dd33c3 (28 bytes, 7 insns) */
void f_11dd33c3(void) {
  FTRACE(0x11dd33c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd33c3 cmp dword ptr [0x11dd6f08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dd6f08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd33ca jne 0x11dd33de */
  if (!C.zf) goto L_11dd33de;
  /* 11dd33cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11dd33ce call 0x11dd2feb */
  push32(0x11dd33d3u); f_11dd2feb();
  /* 11dd33d3 pop ecx */
  ECX = (pop32());
  /* 11dd33d4 mov dword ptr [0x11dd6f08], 1 */
  w32((uint32_t)(0x11dd6f08), (0x1u));
L_11dd33de:;
  /* 11dd33de ret  */
  ESPCHK(0x11dd33c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100033e0 @ 0x11dd33e0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11dd33e0(void) {
  FTRACE(0x11dd33e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd33e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd33e1 mov ebp, esp */
  EBP = (ESP);
  /* 11dd33e3 push edi */
  push32((uint32_t)(EDI));
  /* 11dd33e4 push esi */
  push32((uint32_t)(ESI));
  /* 11dd33e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd33e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dd33eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd33ee mov eax, ecx */
  EAX = (ECX);
  /* 11dd33f0 mov edx, ecx */
  EDX = (ECX);
  /* 11dd33f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd33f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd33f6 jbe 0x11dd3400 */
  if ((C.cf||C.zf)) goto L_11dd3400;
  /* 11dd33f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd33fa jb 0x11dd3578 */
  if (C.cf) goto L_11dd3578;
L_11dd3400:;
  /* 11dd3400 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dd3406 jne 0x11dd341c */
  if (!C.zf) goto L_11dd341c;
  /* 11dd3408 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd340b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dd340e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3411 jb 0x11dd343c */
  if (C.cf) goto L_11dd343c;
  /* 11dd3413 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd3415 jmp dword ptr [edx*4 + 0x11dd3528] */
  switch (EDX) {
    case 0: goto L_11dd3538;
    case 1: goto L_11dd3540;
    case 2: goto L_11dd354c;
    case 3: goto L_11dd3560;
    default: x86_unimpl("switch@0x11dd3415 out of table"); return;
  }
L_11dd341c:;
  /* 11dd341c mov eax, edi */
  EAX = (EDI);
  /* 11dd341e mov edx, 3 */
  EDX = (0x3u);
  /* 11dd3423 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3426 jb 0x11dd3434 */
  if (C.cf) goto L_11dd3434;
  /* 11dd3428 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dd342b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd342d jmp dword ptr [eax*4 + 0x11dd3440] */
  switch (EAX) {
    case 1: goto L_11dd3450;
    case 2: goto L_11dd347c;
    case 3: goto L_11dd34a0;
    default: x86_unimpl("switch@0x11dd342d out of table"); return;
  }
L_11dd3434:;
  /* 11dd3434 jmp dword ptr [ecx*4 + 0x11dd3538] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11dd3538)))); return;
  /* 11dd343b nop  */
  /* nop */
L_11dd343c:;
  /* 11dd343c jmp dword ptr [ecx*4 + 0x11dd34bc] */
  switch (ECX) {
    case 0: goto L_11dd351f;
    case 1: goto L_11dd350c;
    case 2: goto L_11dd3504;
    case 3: goto L_11dd34fc;
    case 4: goto L_11dd34f4;
    case 5: goto L_11dd34ec;
    case 6: goto L_11dd34e4;
    case 7: goto L_11dd34dc;
    default: x86_unimpl("switch@0x11dd343c out of table"); return;
  }
  /* 11dd3443 nop  */
  /* nop */
L_11dd3450:;
  /* 11dd3450 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3452 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd3454 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd3456 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd3459 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd345c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd345f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd3462 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd3465 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3468 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd346b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd346e jb 0x11dd343c */
  if (C.cf) goto L_11dd343c;
  /* 11dd3470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd3472 jmp dword ptr [edx*4 + 0x11dd3528] */
  switch (EDX) {
    case 0: goto L_11dd3538;
    case 1: goto L_11dd3540;
    case 2: goto L_11dd354c;
    case 3: goto L_11dd3560;
    default: x86_unimpl("switch@0x11dd3472 out of table"); return;
  }
  /* 11dd3479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd347c:;
  /* 11dd347c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd347e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd3480 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd3482 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd3485 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd3488 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd348b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd348e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3491 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3494 jb 0x11dd343c */
  if (C.cf) goto L_11dd343c;
  /* 11dd3496 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd3498 jmp dword ptr [edx*4 + 0x11dd3528] */
  switch (EDX) {
    case 0: goto L_11dd3538;
    case 1: goto L_11dd3540;
    case 2: goto L_11dd354c;
    case 3: goto L_11dd3560;
    default: x86_unimpl("switch@0x11dd3498 out of table"); return;
  }
  /* 11dd349f nop  */
  /* nop */
L_11dd34a0:;
  /* 11dd34a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd34a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd34a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd34a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd34a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd34aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd34ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd34ae jb 0x11dd343c */
  if (C.cf) goto L_11dd343c;
  /* 11dd34b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd34b2 jmp dword ptr [edx*4 + 0x11dd3528] */
  switch (EDX) {
    case 0: goto L_11dd3538;
    case 1: goto L_11dd3540;
    case 2: goto L_11dd354c;
    case 3: goto L_11dd3560;
    default: x86_unimpl("switch@0x11dd34b2 out of table"); return;
  }
  /* 11dd34b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd34dc:;
  /* 11dd34dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11dd34e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11dd34e4:;
  /* 11dd34e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11dd34e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11dd34ec:;
  /* 11dd34ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11dd34f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11dd34f4:;
  /* 11dd34f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11dd34f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11dd34fc:;
  /* 11dd34fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11dd3500 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11dd3504:;
  /* 11dd3504 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11dd3508 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11dd350c:;
  /* 11dd350c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11dd3510 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11dd3514 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dd351b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd351d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dd351f:;
  /* 11dd351f jmp dword ptr [edx*4 + 0x11dd3528] */
  switch (EDX) {
    case 0: goto L_11dd3538;
    case 1: goto L_11dd3540;
    case 2: goto L_11dd354c;
    case 3: goto L_11dd3560;
    default: x86_unimpl("switch@0x11dd351f out of table"); return;
  }
  /* 11dd3526 mov edi, edi */
  EDI = (EDI);
L_11dd3538:;
  /* 11dd3538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd353b pop esi */
  ESI = (pop32());
  /* 11dd353c pop edi */
  EDI = (pop32());
  /* 11dd353d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd353e ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd353f nop  */
  /* nop */
L_11dd3540:;
  /* 11dd3540 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd3542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd3544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3547 pop esi */
  ESI = (pop32());
  /* 11dd3548 pop edi */
  EDI = (pop32());
  /* 11dd3549 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd354a ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd354b nop  */
  /* nop */
L_11dd354c:;
  /* 11dd354c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd354e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd3550 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd3553 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd3556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3559 pop esi */
  ESI = (pop32());
  /* 11dd355a pop edi */
  EDI = (pop32());
  /* 11dd355b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd355c ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd355d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd3560:;
  /* 11dd3560 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd3562 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd3564 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd3567 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd356a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd356d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd3570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3573 pop esi */
  ESI = (pop32());
  /* 11dd3574 pop edi */
  EDI = (pop32());
  /* 11dd3575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd3576 ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd3577 nop  */
  /* nop */
L_11dd3578:;
  /* 11dd3578 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11dd357c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11dd3580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dd3586 jne 0x11dd35ac */
  if (!C.zf) goto L_11dd35ac;
  /* 11dd3588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd358b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dd358e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3591 jb 0x11dd35a0 */
  if (C.cf) goto L_11dd35a0;
  /* 11dd3593 std  */
  C.df=1;
  /* 11dd3594 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd3596 cld  */
  C.df=0;
  /* 11dd3597 jmp dword ptr [edx*4 + 0x11dd36c0] */
  switch (EDX) {
    case 0: goto L_11dd36d0;
    case 1: goto L_11dd36d8;
    case 2: goto L_11dd36e8;
    case 3: goto L_11dd36fc;
    default: x86_unimpl("switch@0x11dd3597 out of table"); return;
  }
  /* 11dd359e mov edi, edi */
  EDI = (EDI);
L_11dd35a0:;
  /* 11dd35a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dd35a2 jmp dword ptr [ecx*4 + 0x11dd3670] */
  switch (ECX) {
    case 0: goto L_11dd36b7;
    default: x86_unimpl("switch@0x11dd35a2 out of table"); return;
  }
  /* 11dd35a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd35ac:;
  /* 11dd35ac mov eax, edi */
  EAX = (EDI);
  /* 11dd35ae mov edx, 3 */
  EDX = (0x3u);
  /* 11dd35b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd35b6 jb 0x11dd35c4 */
  if (C.cf) goto L_11dd35c4;
  /* 11dd35b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dd35bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd35bd jmp dword ptr [eax*4 + 0x11dd35c8] */
  switch (EAX) {
    case 1: goto L_11dd35d8;
    case 2: goto L_11dd35f8;
    case 3: goto L_11dd3620;
    default: x86_unimpl("switch@0x11dd35bd out of table"); return;
  }
L_11dd35c4:;
  /* 11dd35c4 jmp dword ptr [ecx*4 + 0x11dd36c0] */
  switch (ECX) {
    case 0: goto L_11dd36d0;
    case 1: goto L_11dd36d8;
    case 2: goto L_11dd36e8;
    case 3: goto L_11dd36fc;
    default: x86_unimpl("switch@0x11dd35c4 out of table"); return;
  }
  /* 11dd35cb nop  */
  /* nop */
L_11dd35d8:;
  /* 11dd35d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd35db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd35dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd35e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dd35e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd35e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11dd35e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd35e8 jb 0x11dd35a0 */
  if (C.cf) goto L_11dd35a0;
  /* 11dd35ea std  */
  C.df=1;
  /* 11dd35eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd35ed cld  */
  C.df=0;
  /* 11dd35ee jmp dword ptr [edx*4 + 0x11dd36c0] */
  switch (EDX) {
    case 0: goto L_11dd36d0;
    case 1: goto L_11dd36d8;
    case 2: goto L_11dd36e8;
    case 3: goto L_11dd36fc;
    default: x86_unimpl("switch@0x11dd35ee out of table"); return;
  }
  /* 11dd35f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd35f8:;
  /* 11dd35f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd35fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd35fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd3600 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd3603 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd3606 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd3609 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd360c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd360f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3612 jb 0x11dd35a0 */
  if (C.cf) goto L_11dd35a0;
  /* 11dd3614 std  */
  C.df=1;
  /* 11dd3615 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd3617 cld  */
  C.df=0;
  /* 11dd3618 jmp dword ptr [edx*4 + 0x11dd36c0] */
  switch (EDX) {
    case 0: goto L_11dd36d0;
    case 1: goto L_11dd36d8;
    case 2: goto L_11dd36e8;
    case 3: goto L_11dd36fc;
    default: x86_unimpl("switch@0x11dd3618 out of table"); return;
  }
  /* 11dd361f nop  */
  /* nop */
L_11dd3620:;
  /* 11dd3620 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd3623 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3625 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd3628 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd362b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd362e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd3631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd3634 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd3637 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd363a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd363d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3640 jb 0x11dd35a0 */
  if (C.cf) goto L_11dd35a0;
  /* 11dd3646 std  */
  C.df=1;
  /* 11dd3647 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd3649 cld  */
  C.df=0;
  /* 11dd364a jmp dword ptr [edx*4 + 0x11dd36c0] */
  switch (EDX) {
    case 0: goto L_11dd36d0;
    case 1: goto L_11dd36d8;
    case 2: goto L_11dd36e8;
    case 3: goto L_11dd36fc;
    default: x86_unimpl("switch@0x11dd364a out of table"); return;
  }
  /* 11dd3651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11dd3654 je 0x11dd368c */
  if (C.zf) goto L_11dd368c;
  /* 11dd3656 fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd3658 jl 0x11dd3690 */
  if ((C.sf!=C.of)) goto L_11dd3690;
  /* 11dd365a fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd365c test byte ptr [esi], dh */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(C.d.b.h); fl_logic(_r,8); }
  /* 11dd365e fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd3661 fst qword ptr ss:[ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd3664 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11dd3665 fst qword ptr ss:[ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd3668 pushfd  */
  x86_unimpl("pushfd @ 0x11dd3668");
  /* 11dd3669 fst qword ptr ss:[ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd366c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11dd366d fst qword ptr ss:[ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd3674 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11dd3678 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11dd367c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11dd3680 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11dd3684 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11dd3688 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
L_11dd368c:;
  /* 11dd368c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
L_11dd3690:;
  /* 11dd3690 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11dd3694 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11dd3698 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11dd369c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11dd36a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11dd36a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11dd36a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11dd36ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dd36b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd36b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dd36b7:;
  /* 11dd36b7 jmp dword ptr [edx*4 + 0x11dd36c0] */
  switch (EDX) {
    case 0: goto L_11dd36d0;
    case 1: goto L_11dd36d8;
    case 2: goto L_11dd36e8;
    case 3: goto L_11dd36fc;
    default: x86_unimpl("switch@0x11dd36b7 out of table"); return;
  }
  /* 11dd36be mov edi, edi */
  EDI = (EDI);
L_11dd36d0:;
  /* 11dd36d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd36d3 pop esi */
  ESI = (pop32());
  /* 11dd36d4 pop edi */
  EDI = (pop32());
  /* 11dd36d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd36d6 ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd36d7 nop  */
  /* nop */
L_11dd36d8:;
  /* 11dd36d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd36db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd36de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd36e1 pop esi */
  ESI = (pop32());
  /* 11dd36e2 pop edi */
  EDI = (pop32());
  /* 11dd36e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd36e4 ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd36e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd36e8:;
  /* 11dd36e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd36eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd36ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd36f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd36f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd36f7 pop esi */
  ESI = (pop32());
  /* 11dd36f8 pop edi */
  EDI = (pop32());
  /* 11dd36f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd36fa ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
  /* 11dd36fb nop  */
  /* nop */
L_11dd36fc:;
  /* 11dd36fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd36ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd3702 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd3705 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd3708 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd370b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd370e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3711 pop esi */
  ESI = (pop32());
  /* 11dd3712 pop edi */
  EDI = (pop32());
  /* 11dd3713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd3714 ret  */
  ESPCHK(0x11dd33e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003715 @ 0x11dd3715 (62 bytes, 15 insns) */
void f_11dd3715(void) {
  FTRACE(0x11dd3715u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3715 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11dd371a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd371c push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd3722 call dword ptr [0x11dd503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd503c))), 0x11dd3728u);
  /* 11dd3728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd372a mov dword ptr [0x11dd6bac], eax */
  w32((uint32_t)(0x11dd6bac), (EAX));
  /* 11dd372f jne 0x11dd3732 */
  if (!C.zf) goto L_11dd3732;
  /* 11dd3731 ret  */
  ESPCHK(0x11dd3715u, _esp0);
  ESP += 4; return;
L_11dd3732:;
  /* 11dd3732 and dword ptr [0x11dd6ba4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dd6ba4)))&(0x0u); w32((uint32_t)(0x11dd6ba4), (_r)); fl_logic(_r,32); }
  /* 11dd3739 and dword ptr [0x11dd6ba8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dd6ba8)))&(0x0u); w32((uint32_t)(0x11dd6ba8), (_r)); fl_logic(_r,32); }
  /* 11dd3740 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd3742 mov dword ptr [0x11dd6ba0], eax */
  w32((uint32_t)(0x11dd6ba0), (EAX));
  /* 11dd3747 mov dword ptr [0x11dd6b98], 0x10 */
  w32((uint32_t)(0x11dd6b98), (0x10u));
  /* 11dd3751 pop eax */
  EAX = (pop32());
  /* 11dd3752 ret  */
  ESPCHK(0x11dd3715u, _esp0);
  ESP += 4; return;
}

/* FUN_10003753 @ 0x11dd3753 (43 bytes, 14 insns) */
void f_11dd3753(void) {
  FTRACE(0x11dd3753u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3753 mov eax, dword ptr [0x11dd6ba8] */
  EAX = (r32((uint32_t)(0x11dd6ba8)));
  /* 11dd3758 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11dd375b mov eax, dword ptr [0x11dd6bac] */
  EAX = (r32((uint32_t)(0x11dd6bac)));
  /* 11dd3760 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11dd3763:;
  /* 11dd3763 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3765 jae 0x11dd377b */
  if (!C.cf) goto L_11dd377b;
  /* 11dd3767 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd376b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd376e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3774 jb 0x11dd377d */
  if (C.cf) goto L_11dd377d;
  /* 11dd3776 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3779 jmp 0x11dd3763 */
  goto L_11dd3763;
L_11dd377b:;
  /* 11dd377b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dd377d:;
  /* 11dd377d ret  */
  ESPCHK(0x11dd3753u, _esp0);
  ESP += 4; return;
}

/* FUN_1000377e @ 0x11dd377e (811 bytes, 264 insns) */
void f_11dd377e(void) {
  FTRACE(0x11dd377eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd377e push ebp */
  push32((uint32_t)(EBP));
  /* 11dd377f mov ebp, esp */
  EBP = (ESP);
  /* 11dd3781 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3784 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd3787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd378a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd378b push esi */
  push32((uint32_t)(ESI));
  /* 11dd378c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dd378f mov esi, edx */
  ESI = (EDX);
  /* 11dd3791 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3794 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11dd3797 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd379a push edi */
  push32((uint32_t)(EDI));
  /* 11dd379b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11dd379e mov ecx, esi */
  ECX = (ESI);
  /* 11dd37a0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11dd37a3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dd37a9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dd37aa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11dd37ad lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11dd37b4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11dd37b7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11dd37ba mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11dd37bd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11dd37c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dd37c3 jne 0x11dd3844 */
  if (!C.zf) goto L_11dd3844;
  /* 11dd37c5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11dd37c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dd37ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd37cb pop edi */
  EDI = (pop32());
  /* 11dd37cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11dd37cf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd37d1 jbe 0x11dd37d6 */
  if ((C.cf||C.zf)) goto L_11dd37d6;
  /* 11dd37d3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11dd37d6:;
  /* 11dd37d6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11dd37da cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd37de jne 0x11dd3828 */
  if (!C.zf) goto L_11dd3828;
  /* 11dd37e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd37e3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd37e6 jae 0x11dd3804 */
  if (!C.cf) goto L_11dd3804;
  /* 11dd37e8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dd37ed shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dd37ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11dd37f3 not edi */
  EDI = (~(EDI));
  /* 11dd37f5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dd37f9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11dd37fb jne 0x11dd3828 */
  if (!C.zf) goto L_11dd3828;
  /* 11dd37fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3800 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dd3802 jmp 0x11dd3828 */
  goto L_11dd3828;
L_11dd3804:;
  /* 11dd3804 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3807 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dd380c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dd380e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd3811 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11dd3815 not edi */
  EDI = (~(EDI));
  /* 11dd3817 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11dd381e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11dd3820 jne 0x11dd3828 */
  if (!C.zf) goto L_11dd3828;
  /* 11dd3822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3825 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11dd3828:;
  /* 11dd3828 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11dd382c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11dd3830 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11dd3833 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11dd3837 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11dd383b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd383e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11dd3841 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11dd3844:;
  /* 11dd3844 mov edi, ebx */
  EDI = (EBX);
  /* 11dd3846 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11dd3849 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11dd384a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd384d jbe 0x11dd3852 */
  if ((C.cf||C.zf)) goto L_11dd3852;
  /* 11dd384f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dd3851 pop edi */
  EDI = (pop32());
L_11dd3852:;
  /* 11dd3852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3855 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3858 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11dd385b jne 0x11dd3901 */
  if (!C.zf) goto L_11dd3901;
  /* 11dd3861 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3867 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11dd386a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dd386c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11dd386f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd3870 pop edx */
  EDX = (pop32());
  /* 11dd3871 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3873 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11dd3876 jbe 0x11dd387d */
  if ((C.cf||C.zf)) goto L_11dd387d;
  /* 11dd3878 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11dd387b mov ecx, edx */
  ECX = (EDX);
L_11dd387d:;
  /* 11dd387d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3880 mov edi, ebx */
  EDI = (EBX);
  /* 11dd3882 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11dd3885 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11dd3888 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11dd3889 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd388b jbe 0x11dd388f */
  if ((C.cf||C.zf)) goto L_11dd388f;
  /* 11dd388d mov edi, edx */
  EDI = (EDX);
L_11dd388f:;
  /* 11dd388f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3891 je 0x11dd38fe */
  if (C.zf) goto L_11dd38fe;
  /* 11dd3893 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dd3896 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dd3899 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd389c jne 0x11dd38e6 */
  if (!C.zf) goto L_11dd38e6;
  /* 11dd389e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd38a1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd38a4 jae 0x11dd38c2 */
  if (!C.cf) goto L_11dd38c2;
  /* 11dd38a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dd38ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dd38ad lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11dd38b1 not edx */
  EDX = (~(EDX));
  /* 11dd38b3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dd38b7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11dd38b9 jne 0x11dd38e6 */
  if (!C.zf) goto L_11dd38e6;
  /* 11dd38bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd38be and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dd38c0 jmp 0x11dd38e6 */
  goto L_11dd38e6;
L_11dd38c2:;
  /* 11dd38c2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd38c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dd38ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dd38cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd38cf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11dd38d3 not edx */
  EDX = (~(EDX));
  /* 11dd38d5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11dd38dc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11dd38de jne 0x11dd38e6 */
  if (!C.zf) goto L_11dd38e6;
  /* 11dd38e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd38e3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11dd38e6:;
  /* 11dd38e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dd38e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dd38ec mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dd38ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11dd38f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dd38f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dd38f8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dd38fb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11dd38fe:;
  /* 11dd38fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11dd3901:;
  /* 11dd3901 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3905 jne 0x11dd3910 */
  if (!C.zf) goto L_11dd3910;
  /* 11dd3907 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd390a je 0x11dd3999 */
  if (C.zf) goto L_11dd3999;
L_11dd3910:;
  /* 11dd3910 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dd3913 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11dd3916 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dd3919 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11dd391c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dd391f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11dd3922 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11dd3925 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11dd3928 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd392b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11dd392e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd3931 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3934 jne 0x11dd3999 */
  if (!C.zf) goto L_11dd3999;
  /* 11dd3936 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11dd393a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd393d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11dd3940 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dd3942 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11dd3946 jae 0x11dd396d */
  if (!C.cf) goto L_11dd396d;
  /* 11dd3948 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd394c jne 0x11dd395c */
  if (!C.zf) goto L_11dd395c;
  /* 11dd394e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dd3953 mov ecx, edi */
  ECX = (EDI);
  /* 11dd3955 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dd3957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd395a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11dd395c:;
  /* 11dd395c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dd3961 mov ecx, edi */
  ECX = (EDI);
  /* 11dd3963 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dd3965 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11dd3969 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11dd396b jmp 0x11dd3996 */
  goto L_11dd3996;
L_11dd396d:;
  /* 11dd396d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd3971 jne 0x11dd3983 */
  if (!C.zf) goto L_11dd3983;
  /* 11dd3973 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11dd3976 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dd397b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dd397d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3980 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11dd3983:;
  /* 11dd3983 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11dd3986 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dd398b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dd398d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11dd3994 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11dd3996:;
  /* 11dd3996 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11dd3999:;
  /* 11dd3999 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dd399c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11dd399e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11dd39a2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11dd39a4 jne 0x11dd3aa4 */
  if (!C.zf) goto L_11dd3aa4;
  /* 11dd39aa mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd39af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd39b1 je 0x11dd3a96 */
  if (C.zf) goto L_11dd3a96;
  /* 11dd39b7 mov ecx, dword ptr [0x11dd6b9c] */
  ECX = (r32((uint32_t)(0x11dd6b9c)));
  /* 11dd39bd mov edi, dword ptr [0x11dd5050] */
  EDI = (r32((uint32_t)(0x11dd5050)));
  /* 11dd39c3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11dd39c6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd39c9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11dd39ce push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11dd39d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd39d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd39d5 call edi */
  call_ind((uint32_t)(EDI), 0x11dd39d7u);
  /* 11dd39d7 mov ecx, dword ptr [0x11dd6b9c] */
  ECX = (r32((uint32_t)(0x11dd6b9c)));
  /* 11dd39dd mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd39e2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dd39e7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dd39e9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dd39ec mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd39f1 mov ecx, dword ptr [0x11dd6b9c] */
  ECX = (r32((uint32_t)(0x11dd6b9c)));
  /* 11dd39f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dd39fa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11dd3a02 mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd3a07 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dd3a0a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11dd3a0d mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd3a12 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dd3a15 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd3a19 jne 0x11dd3a24 */
  if (!C.zf) goto L_11dd3a24;
  /* 11dd3a1b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dd3a1f mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
L_11dd3a24:;
  /* 11dd3a24 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3a28 jne 0x11dd3a96 */
  if (!C.zf) goto L_11dd3a96;
  /* 11dd3a2a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd3a2d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11dd3a30 call edi */
  call_ind((uint32_t)(EDI), 0x11dd3a32u);
  /* 11dd3a32 mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd3a37 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11dd3a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd3a3c push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd3a42 call dword ptr [0x11dd504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd504c))), 0x11dd3a48u);
  /* 11dd3a48 mov eax, dword ptr [0x11dd6ba8] */
  EAX = (r32((uint32_t)(0x11dd6ba8)));
  /* 11dd3a4d mov edx, dword ptr [0x11dd6bac] */
  EDX = (r32((uint32_t)(0x11dd6bac)));
  /* 11dd3a53 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dd3a56 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11dd3a59 mov ecx, eax */
  ECX = (EAX);
  /* 11dd3a5b mov eax, dword ptr [0x11dd6ba4] */
  EAX = (r32((uint32_t)(0x11dd6ba4)));
  /* 11dd3a60 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3a62 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11dd3a66 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd3a67 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11dd3a6a push ecx */
  push32((uint32_t)(ECX));
  /* 11dd3a6b push eax */
  push32((uint32_t)(EAX));
  /* 11dd3a6c call 0x11dd4500 */
  push32(0x11dd3a71u); f_11dd4500();
  /* 11dd3a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3a74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3a77 dec dword ptr [0x11dd6ba8] */
  { uint32_t _r=(r32((uint32_t)(0x11dd6ba8)))-1; w32((uint32_t)(0x11dd6ba8), (_r)); fl_dec(_r,32); }
  /* 11dd3a7d cmp eax, dword ptr [0x11dd6ba4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dd6ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3a83 jbe 0x11dd3a88 */
  if ((C.cf||C.zf)) goto L_11dd3a88;
  /* 11dd3a85 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11dd3a88:;
  /* 11dd3a88 mov ecx, dword ptr [0x11dd6bac] */
  ECX = (r32((uint32_t)(0x11dd6bac)));
  /* 11dd3a8e mov dword ptr [0x11dd6ba0], ecx */
  w32((uint32_t)(0x11dd6ba0), (ECX));
  /* 11dd3a94 jmp 0x11dd3a99 */
  goto L_11dd3a99;
L_11dd3a96:;
  /* 11dd3a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11dd3a99:;
  /* 11dd3a99 mov dword ptr [0x11dd6ba4], eax */
  w32((uint32_t)(0x11dd6ba4), (EAX));
  /* 11dd3a9e mov dword ptr [0x11dd6b9c], esi */
  w32((uint32_t)(0x11dd6b9c), (ESI));
L_11dd3aa4:;
  /* 11dd3aa4 pop edi */
  EDI = (pop32());
  /* 11dd3aa5 pop esi */
  ESI = (pop32());
  /* 11dd3aa6 pop ebx */
  EBX = (pop32());
  /* 11dd3aa7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd3aa8 ret  */
  ESPCHK(0x11dd377eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa9 @ 0x11dd3aa9 (777 bytes, 275 insns) */
void f_11dd3aa9(void) {
  FTRACE(0x11dd3aa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3aa9 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd3aaa mov ebp, esp */
  EBP = (ESP);
  /* 11dd3aac sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3aaf mov eax, dword ptr [0x11dd6ba8] */
  EAX = (r32((uint32_t)(0x11dd6ba8)));
  /* 11dd3ab4 mov edx, dword ptr [0x11dd6bac] */
  EDX = (r32((uint32_t)(0x11dd6bac)));
  /* 11dd3aba push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3abb push esi */
  push32((uint32_t)(ESI));
  /* 11dd3abc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dd3abf push edi */
  push32((uint32_t)(EDI));
  /* 11dd3ac0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11dd3ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3ac6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11dd3ac9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11dd3acc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3acf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11dd3ad2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11dd3ad5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd3ad6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3ad9 jge 0x11dd3ae9 */
  if ((C.sf==C.of)) goto L_11dd3ae9;
  /* 11dd3adb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11dd3ade shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11dd3ae0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dd3ae4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11dd3ae7 jmp 0x11dd3af9 */
  goto L_11dd3af9;
L_11dd3ae9:;
  /* 11dd3ae9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3aec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3aef xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dd3af1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11dd3af3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11dd3af6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11dd3af9:;
  /* 11dd3af9 mov eax, dword ptr [0x11dd6ba0] */
  EAX = (r32((uint32_t)(0x11dd6ba0)));
  /* 11dd3afe mov ebx, eax */
  EBX = (EAX);
  /* 11dd3b00 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b02 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3b05 jae 0x11dd3b20 */
  if (!C.cf) goto L_11dd3b20;
L_11dd3b07:;
  /* 11dd3b07 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11dd3b0a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11dd3b0c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3b0f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd3b11 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3b13 jne 0x11dd3b20 */
  if (!C.zf) goto L_11dd3b20;
  /* 11dd3b15 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3b18 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b1b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3b1e jb 0x11dd3b07 */
  if (C.cf) goto L_11dd3b07;
L_11dd3b20:;
  /* 11dd3b20 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b23 jne 0x11dd3b9e */
  if (!C.zf) goto L_11dd3b9e;
  /* 11dd3b25 mov ebx, edx */
  EBX = (EDX);
L_11dd3b27:;
  /* 11dd3b27 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b29 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3b2c jae 0x11dd3b43 */
  if (!C.cf) goto L_11dd3b43;
  /* 11dd3b2e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11dd3b31 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11dd3b33 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3b36 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd3b38 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3b3a jne 0x11dd3b41 */
  if (!C.zf) goto L_11dd3b41;
  /* 11dd3b3c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3b3f jmp 0x11dd3b27 */
  goto L_11dd3b27;
L_11dd3b41:;
  /* 11dd3b41 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dd3b43:;
  /* 11dd3b43 jne 0x11dd3b9e */
  if (!C.zf) goto L_11dd3b9e;
L_11dd3b45:;
  /* 11dd3b45 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b48 jae 0x11dd3b5b */
  if (!C.cf) goto L_11dd3b5b;
  /* 11dd3b4a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b4e jne 0x11dd3b58 */
  if (!C.zf) goto L_11dd3b58;
  /* 11dd3b50 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3b53 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3b56 jmp 0x11dd3b45 */
  goto L_11dd3b45;
L_11dd3b58:;
  /* 11dd3b58 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dd3b5b:;
  /* 11dd3b5b jne 0x11dd3b83 */
  if (!C.zf) goto L_11dd3b83;
  /* 11dd3b5d mov ebx, edx */
  EBX = (EDX);
L_11dd3b5f:;
  /* 11dd3b5f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b61 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3b64 jae 0x11dd3b73 */
  if (!C.cf) goto L_11dd3b73;
  /* 11dd3b66 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b6a jne 0x11dd3b71 */
  if (!C.zf) goto L_11dd3b71;
  /* 11dd3b6c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3b6f jmp 0x11dd3b5f */
  goto L_11dd3b5f;
L_11dd3b71:;
  /* 11dd3b71 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dd3b73:;
  /* 11dd3b73 jne 0x11dd3b83 */
  if (!C.zf) goto L_11dd3b83;
  /* 11dd3b75 call 0x11dd3db2 */
  push32(0x11dd3b7au); f_11dd3db2();
  /* 11dd3b7a mov ebx, eax */
  EBX = (EAX);
  /* 11dd3b7c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dd3b7e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dd3b81 je 0x11dd3b97 */
  if (C.zf) goto L_11dd3b97;
L_11dd3b83:;
  /* 11dd3b83 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3b84 call 0x11dd3e63 */
  push32(0x11dd3b89u); f_11dd3e63();
  /* 11dd3b89 pop ecx */
  ECX = (pop32());
  /* 11dd3b8a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11dd3b8d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dd3b8f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11dd3b92 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3b95 jne 0x11dd3b9e */
  if (!C.zf) goto L_11dd3b9e;
L_11dd3b97:;
  /* 11dd3b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3b99 jmp 0x11dd3dad */
  goto L_11dd3dad;
L_11dd3b9e:;
  /* 11dd3b9e mov dword ptr [0x11dd6ba0], ebx */
  w32((uint32_t)(0x11dd6ba0), (EBX));
  /* 11dd3ba4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11dd3ba7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11dd3ba9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3bac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dd3baf je 0x11dd3bc5 */
  if (C.zf) goto L_11dd3bc5;
  /* 11dd3bb1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11dd3bb8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11dd3bbc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3bbf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd3bc1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3bc3 jne 0x11dd3bfc */
  if (!C.zf) goto L_11dd3bfc;
L_11dd3bc5:;
  /* 11dd3bc5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11dd3bcb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11dd3bce and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3bd1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11dd3bd4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd3bd8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11dd3bdb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3bdd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11dd3be0 jne 0x11dd3bf9 */
  if (!C.zf) goto L_11dd3bf9;
L_11dd3be2:;
  /* 11dd3be2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11dd3be8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dd3beb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3bee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3bf1 mov edi, esi */
  EDI = (ESI);
  /* 11dd3bf3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11dd3bf5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11dd3bf7 je 0x11dd3be2 */
  if (C.zf) goto L_11dd3be2;
L_11dd3bf9:;
  /* 11dd3bf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11dd3bfc:;
  /* 11dd3bfc mov ecx, edx */
  ECX = (EDX);
  /* 11dd3bfe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd3c00 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dd3c06 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11dd3c0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11dd3c10 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11dd3c14 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3c16 jne 0x11dd3c25 */
  if (!C.zf) goto L_11dd3c25;
  /* 11dd3c18 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11dd3c1f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11dd3c21 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dd3c24 pop edi */
  EDI = (pop32());
L_11dd3c25:;
  /* 11dd3c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dd3c27 jl 0x11dd3c2e */
  if ((C.sf!=C.of)) goto L_11dd3c2e;
  /* 11dd3c29 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11dd3c2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd3c2c jmp 0x11dd3c25 */
  goto L_11dd3c25;
L_11dd3c2e:;
  /* 11dd3c2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dd3c31 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11dd3c35 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11dd3c37 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd3c3a mov esi, ecx */
  ESI = (ECX);
  /* 11dd3c3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dd3c3f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11dd3c42 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dd3c43 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3c46 jle 0x11dd3c4b */
  if ((C.zf||C.sf!=C.of)) goto L_11dd3c4b;
  /* 11dd3c48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dd3c4a pop esi */
  ESI = (pop32());
L_11dd3c4b:;
  /* 11dd3c4b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3c4d je 0x11dd3d60 */
  if (C.zf) goto L_11dd3d60;
  /* 11dd3c53 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd3c56 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3c59 jne 0x11dd3cbc */
  if (!C.zf) goto L_11dd3cbc;
  /* 11dd3c5b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3c5e jge 0x11dd3c8b */
  if ((C.sf==C.of)) goto L_11dd3c8b;
  /* 11dd3c60 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dd3c65 mov ecx, edi */
  ECX = (EDI);
  /* 11dd3c67 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dd3c69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3c6c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11dd3c70 not ebx */
  EBX = (~(EBX));
  /* 11dd3c72 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11dd3c75 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11dd3c79 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11dd3c7d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11dd3c7f jne 0x11dd3cb9 */
  if (!C.zf) goto L_11dd3cb9;
  /* 11dd3c81 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3c84 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dd3c87 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11dd3c89 jmp 0x11dd3cbc */
  goto L_11dd3cbc;
L_11dd3c8b:;
  /* 11dd3c8b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11dd3c8e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dd3c93 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dd3c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3c98 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11dd3c9c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11dd3ca3 not ebx */
  EBX = (~(EBX));
  /* 11dd3ca5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dd3ca7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11dd3ca9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11dd3cac jne 0x11dd3cb9 */
  if (!C.zf) goto L_11dd3cb9;
  /* 11dd3cae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3cb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dd3cb4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dd3cb7 jmp 0x11dd3cbc */
  goto L_11dd3cbc;
L_11dd3cb9:;
  /* 11dd3cb9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11dd3cbc:;
  /* 11dd3cbc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dd3cbf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd3cc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3cc6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11dd3cc9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd3ccc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11dd3ccf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11dd3cd2 je 0x11dd3d6c */
  if (C.zf) goto L_11dd3d6c;
  /* 11dd3cd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dd3cdb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11dd3cdf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11dd3ce2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11dd3ce5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11dd3ce8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11dd3ceb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd3cee mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11dd3cf1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dd3cf4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3cf7 jne 0x11dd3d5d */
  if (!C.zf) goto L_11dd3d5d;
  /* 11dd3cf9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11dd3cfd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3d00 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11dd3d03 jge 0x11dd3d2e */
  if ((C.sf==C.of)) goto L_11dd3d2e;
  /* 11dd3d05 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dd3d07 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd3d0b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11dd3d0f jne 0x11dd3d1c */
  if (!C.zf) goto L_11dd3d1c;
  /* 11dd3d11 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dd3d16 mov ecx, esi */
  ECX = (ESI);
  /* 11dd3d18 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dd3d1a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11dd3d1c:;
  /* 11dd3d1c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dd3d21 mov ecx, esi */
  ECX = (ESI);
  /* 11dd3d23 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dd3d25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3d28 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dd3d2c jmp 0x11dd3d5d */
  goto L_11dd3d5d;
L_11dd3d2e:;
  /* 11dd3d2e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dd3d30 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd3d34 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11dd3d38 jne 0x11dd3d47 */
  if (!C.zf) goto L_11dd3d47;
  /* 11dd3d3a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11dd3d3d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dd3d42 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dd3d44 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11dd3d47:;
  /* 11dd3d47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3d4a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11dd3d51 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11dd3d54 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11dd3d59 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11dd3d5b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11dd3d5d:;
  /* 11dd3d5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11dd3d60:;
  /* 11dd3d60 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dd3d62 je 0x11dd3d6f */
  if (C.zf) goto L_11dd3d6f;
  /* 11dd3d64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11dd3d66 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11dd3d6a jmp 0x11dd3d6f */
  goto L_11dd3d6f;
L_11dd3d6c:;
  /* 11dd3d6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11dd3d6f:;
  /* 11dd3d6f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11dd3d72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3d74 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11dd3d77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11dd3d79 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11dd3d7d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11dd3d80 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11dd3d82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dd3d84 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11dd3d87 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dd3d89 jne 0x11dd3da5 */
  if (!C.zf) goto L_11dd3da5;
  /* 11dd3d8b cmp ebx, dword ptr [0x11dd6ba4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dd6ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3d91 jne 0x11dd3da5 */
  if (!C.zf) goto L_11dd3da5;
  /* 11dd3d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3d96 cmp ecx, dword ptr [0x11dd6b9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dd6b9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3d9c jne 0x11dd3da5 */
  if (!C.zf) goto L_11dd3da5;
  /* 11dd3d9e and dword ptr [0x11dd6ba4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dd6ba4)))&(0x0u); w32((uint32_t)(0x11dd6ba4), (_r)); fl_logic(_r,32); }
L_11dd3da5:;
  /* 11dd3da5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3da8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dd3daa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11dd3dad:;
  /* 11dd3dad pop edi */
  EDI = (pop32());
  /* 11dd3dae pop esi */
  ESI = (pop32());
  /* 11dd3daf pop ebx */
  EBX = (pop32());
  /* 11dd3db0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd3db1 ret  */
  ESPCHK(0x11dd3aa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db2 @ 0x11dd3db2 (177 bytes, 53 insns) */
void f_11dd3db2(void) {
  FTRACE(0x11dd3db2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3db2 mov eax, dword ptr [0x11dd6ba8] */
  EAX = (r32((uint32_t)(0x11dd6ba8)));
  /* 11dd3db7 mov ecx, dword ptr [0x11dd6b98] */
  ECX = (r32((uint32_t)(0x11dd6b98)));
  /* 11dd3dbd push esi */
  push32((uint32_t)(ESI));
  /* 11dd3dbe push edi */
  push32((uint32_t)(EDI));
  /* 11dd3dbf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd3dc1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3dc3 jne 0x11dd3df5 */
  if (!C.zf) goto L_11dd3df5;
  /* 11dd3dc5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11dd3dc9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11dd3dcc push eax */
  push32((uint32_t)(EAX));
  /* 11dd3dcd push dword ptr [0x11dd6bac] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6bac))));
  /* 11dd3dd3 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3dd4 push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd3dda call dword ptr [0x11dd5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5028))), 0x11dd3de0u);
  /* 11dd3de0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3de2 je 0x11dd3e45 */
  if (C.zf) goto L_11dd3e45;
  /* 11dd3de4 add dword ptr [0x11dd6b98], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11dd6b98))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11dd6b98), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dd3deb mov dword ptr [0x11dd6bac], eax */
  w32((uint32_t)(0x11dd6bac), (EAX));
  /* 11dd3df0 mov eax, dword ptr [0x11dd6ba8] */
  EAX = (r32((uint32_t)(0x11dd6ba8)));
L_11dd3df5:;
  /* 11dd3df5 mov ecx, dword ptr [0x11dd6bac] */
  ECX = (r32((uint32_t)(0x11dd6bac)));
  /* 11dd3dfb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11dd3e00 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dd3e02 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dd3e05 push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd3e0b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11dd3e0e call dword ptr [0x11dd503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd503c))), 0x11dd3e14u);
  /* 11dd3e14 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3e16 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11dd3e19 je 0x11dd3e45 */
  if (C.zf) goto L_11dd3e45;
  /* 11dd3e1b push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd3e1d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11dd3e22 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11dd3e27 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3e28 call dword ptr [0x11dd502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd502c))), 0x11dd3e2eu);
  /* 11dd3e2e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3e30 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11dd3e33 jne 0x11dd3e49 */
  if (!C.zf) goto L_11dd3e49;
  /* 11dd3e35 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11dd3e38 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3e39 push dword ptr [0x11dd6de8] */
  push32((uint32_t)(r32((uint32_t)(0x11dd6de8))));
  /* 11dd3e3f call dword ptr [0x11dd504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd504c))), 0x11dd3e45u);
L_11dd3e45:;
  /* 11dd3e45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3e47 jmp 0x11dd3e60 */
  goto L_11dd3e60;
L_11dd3e49:;
  /* 11dd3e49 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dd3e4d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dd3e4f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11dd3e52 inc dword ptr [0x11dd6ba8] */
  { uint32_t _r=(r32((uint32_t)(0x11dd6ba8)))+1; w32((uint32_t)(0x11dd6ba8), (_r)); fl_inc(_r,32); }
  /* 11dd3e58 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11dd3e5b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11dd3e5e mov eax, esi */
  EAX = (ESI);
L_11dd3e60:;
  /* 11dd3e60 pop edi */
  EDI = (pop32());
  /* 11dd3e61 pop esi */
  ESI = (pop32());
  /* 11dd3e62 ret  */
  ESPCHK(0x11dd3db2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e63 @ 0x11dd3e63 (251 bytes, 85 insns) */
void f_11dd3e63(void) {
  FTRACE(0x11dd3e63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3e63 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd3e64 mov ebp, esp */
  EBP = (ESP);
  /* 11dd3e66 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd3e67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3e6a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3e6b push esi */
  push32((uint32_t)(ESI));
  /* 11dd3e6c push edi */
  push32((uint32_t)(EDI));
  /* 11dd3e6d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11dd3e70 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dd3e73 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dd3e75:;
  /* 11dd3e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd3e77 jl 0x11dd3e7e */
  if ((C.sf!=C.of)) goto L_11dd3e7e;
  /* 11dd3e79 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11dd3e7b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dd3e7c jmp 0x11dd3e75 */
  goto L_11dd3e75;
L_11dd3e7e:;
  /* 11dd3e7e mov eax, ebx */
  EAX = (EBX);
  /* 11dd3e80 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dd3e82 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dd3e88 pop edx */
  EDX = (pop32());
  /* 11dd3e89 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11dd3e90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dd3e93:;
  /* 11dd3e93 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11dd3e96 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11dd3e99 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3e9c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dd3e9d jne 0x11dd3e93 */
  if (!C.zf) goto L_11dd3e93;
  /* 11dd3e9f mov edi, ebx */
  EDI = (EBX);
  /* 11dd3ea1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dd3ea3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11dd3ea6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3ea9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dd3eae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dd3eb3 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3eb4 call dword ptr [0x11dd502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd502c))), 0x11dd3ebau);
  /* 11dd3eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd3ebc jne 0x11dd3ec6 */
  if (!C.zf) goto L_11dd3ec6;
  /* 11dd3ebe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3ec1 jmp 0x11dd3f59 */
  goto L_11dd3f59;
L_11dd3ec6:;
  /* 11dd3ec6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11dd3ecc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3ece ja 0x11dd3f0c */
  if ((!C.cf&&!C.zf)) goto L_11dd3f0c;
  /* 11dd3ed0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11dd3ed3:;
  /* 11dd3ed3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dd3ed7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11dd3ede lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11dd3ee4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11dd3eeb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dd3eed lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11dd3ef3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dd3ef6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11dd3f00 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3f05 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11dd3f08 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3f0a jbe 0x11dd3ed3 */
  if ((C.cf||C.zf)) goto L_11dd3ed3;
L_11dd3f0c:;
  /* 11dd3f0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dd3f0f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11dd3f12 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd3f17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd3f19 pop edi */
  EDI = (pop32());
  /* 11dd3f1a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dd3f1d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11dd3f20 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11dd3f23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11dd3f26 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11dd3f29 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dd3f2e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11dd3f35 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11dd3f38 mov cl, al */
  CL = (AL);
  /* 11dd3f3a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dd3f3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd3f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd3f41 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11dd3f44 jne 0x11dd3f49 */
  if (!C.zf) goto L_11dd3f49;
  /* 11dd3f46 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11dd3f49:;
  /* 11dd3f49 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dd3f4e mov ecx, ebx */
  ECX = (EBX);
  /* 11dd3f50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dd3f52 not edx */
  EDX = (~(EDX));
  /* 11dd3f54 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dd3f57 mov eax, ebx */
  EAX = (EBX);
L_11dd3f59:;
  /* 11dd3f59 pop edi */
  EDI = (pop32());
  /* 11dd3f5a pop esi */
  ESI = (pop32());
  /* 11dd3f5b pop ebx */
  EBX = (pop32());
  /* 11dd3f5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd3f5d ret  */
  ESPCHK(0x11dd3e63u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f5e @ 0x11dd3f5e (137 bytes, 50 insns) */
void f_11dd3f5e(void) {
  FTRACE(0x11dd3f5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3f5e push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3f5f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd3f61 cmp dword ptr [0x11dd6b5c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dd6b5c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3f67 push esi */
  push32((uint32_t)(ESI));
  /* 11dd3f68 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3f69 jne 0x11dd3fad */
  if (!C.zf) goto L_11dd3fad;
  /* 11dd3f6b push 0x11dd5478 */
  push32((uint32_t)(0x11dd5478u));
  /* 11dd3f70 call dword ptr [0x11dd501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd501c))), 0x11dd3f76u);
  /* 11dd3f76 mov edi, eax */
  EDI = (EAX);
  /* 11dd3f78 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd3f7a je 0x11dd3fe3 */
  if (C.zf) goto L_11dd3fe3;
  /* 11dd3f7c mov esi, dword ptr [0x11dd5020] */
  ESI = (r32((uint32_t)(0x11dd5020)));
  /* 11dd3f82 push 0x11dd546c */
  push32((uint32_t)(0x11dd546cu));
  /* 11dd3f87 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3f88 call esi */
  call_ind((uint32_t)(ESI), 0x11dd3f8au);
  /* 11dd3f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd3f8c mov dword ptr [0x11dd6b5c], eax */
  w32((uint32_t)(0x11dd6b5c), (EAX));
  /* 11dd3f91 je 0x11dd3fe3 */
  if (C.zf) goto L_11dd3fe3;
  /* 11dd3f93 push 0x11dd545c */
  push32((uint32_t)(0x11dd545cu));
  /* 11dd3f98 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3f99 call esi */
  call_ind((uint32_t)(ESI), 0x11dd3f9bu);
  /* 11dd3f9b push 0x11dd5448 */
  push32((uint32_t)(0x11dd5448u));
  /* 11dd3fa0 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3fa1 mov dword ptr [0x11dd6b60], eax */
  w32((uint32_t)(0x11dd6b60), (EAX));
  /* 11dd3fa6 call esi */
  call_ind((uint32_t)(ESI), 0x11dd3fa8u);
  /* 11dd3fa8 mov dword ptr [0x11dd6b64], eax */
  w32((uint32_t)(0x11dd6b64), (EAX));
L_11dd3fad:;
  /* 11dd3fad mov eax, dword ptr [0x11dd6b60] */
  EAX = (r32((uint32_t)(0x11dd6b60)));
  /* 11dd3fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd3fb4 je 0x11dd3fcc */
  if (C.zf) goto L_11dd3fcc;
  /* 11dd3fb6 call eax */
  call_ind((uint32_t)(EAX), 0x11dd3fb8u);
  /* 11dd3fb8 mov ebx, eax */
  EBX = (EAX);
  /* 11dd3fba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dd3fbc je 0x11dd3fcc */
  if (C.zf) goto L_11dd3fcc;
  /* 11dd3fbe mov eax, dword ptr [0x11dd6b64] */
  EAX = (r32((uint32_t)(0x11dd6b64)));
  /* 11dd3fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd3fc5 je 0x11dd3fcc */
  if (C.zf) goto L_11dd3fcc;
  /* 11dd3fc7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3fc8 call eax */
  call_ind((uint32_t)(EAX), 0x11dd3fcau);
  /* 11dd3fca mov ebx, eax */
  EBX = (EAX);
L_11dd3fcc:;
  /* 11dd3fcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11dd3fd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11dd3fd4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11dd3fd8 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3fd9 call dword ptr [0x11dd6b5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd6b5c))), 0x11dd3fdfu);
L_11dd3fdf:;
  /* 11dd3fdf pop edi */
  EDI = (pop32());
  /* 11dd3fe0 pop esi */
  ESI = (pop32());
  /* 11dd3fe1 pop ebx */
  EBX = (pop32());
  /* 11dd3fe2 ret  */
  ESPCHK(0x11dd3f5eu, _esp0);
  ESP += 4; return;
L_11dd3fe3:;
  /* 11dd3fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd3fe5 jmp 0x11dd3fdf */
  goto L_11dd3fdf;
}

/* _strncpy @ 0x11dd3ff0 (254 bytes, 109 insns) */
void f_11dd3ff0(void) {
  FTRACE(0x11dd3ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd3ff0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dd3ff4 push edi */
  push32((uint32_t)(EDI));
  /* 11dd3ff5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dd3ff7 je 0x11dd4073 */
  if (C.zf) goto L_11dd4073;
  /* 11dd3ff9 push esi */
  push32((uint32_t)(ESI));
  /* 11dd3ffa push ebx */
  push32((uint32_t)(EBX));
  /* 11dd3ffb mov ebx, ecx */
  EBX = (ECX);
  /* 11dd3ffd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11dd4001 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11dd4007 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11dd400b jne 0x11dd4014 */
  if (!C.zf) goto L_11dd4014;
  /* 11dd400d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd4010 jne 0x11dd4081 */
  if (!C.zf) goto L_11dd4081;
  /* 11dd4012 jmp 0x11dd4035 */
  goto L_11dd4035;
L_11dd4014:;
  /* 11dd4014 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd4016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd4017 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4019 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd401a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd401b je 0x11dd4042 */
  if (C.zf) goto L_11dd4042;
  /* 11dd401d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd401f je 0x11dd404a */
  if (C.zf) goto L_11dd404a;
  /* 11dd4021 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11dd4027 jne 0x11dd4014 */
  if (!C.zf) goto L_11dd4014;
  /* 11dd4029 mov ebx, ecx */
  EBX = (ECX);
  /* 11dd402b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd402e jne 0x11dd4081 */
  if (!C.zf) goto L_11dd4081;
L_11dd4030:;
  /* 11dd4030 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11dd4033 je 0x11dd4042 */
  if (C.zf) goto L_11dd4042;
L_11dd4035:;
  /* 11dd4035 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd4037 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd4038 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd403a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd403b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dd403d je 0x11dd406e */
  if (C.zf) goto L_11dd406e;
  /* 11dd403f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dd4040 jne 0x11dd4035 */
  if (!C.zf) goto L_11dd4035;
L_11dd4042:;
  /* 11dd4042 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dd4046 pop ebx */
  EBX = (pop32());
  /* 11dd4047 pop esi */
  ESI = (pop32());
  /* 11dd4048 pop edi */
  EDI = (pop32());
  /* 11dd4049 ret  */
  ESPCHK(0x11dd3ff0u, _esp0);
  ESP += 4; return;
L_11dd404a:;
  /* 11dd404a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dd4050 je 0x11dd4064 */
  if (C.zf) goto L_11dd4064;
L_11dd4052:;
  /* 11dd4052 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4054 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd4055 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd4056 je 0x11dd40e6 */
  if (C.zf) goto L_11dd40e6;
  /* 11dd405c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dd4062 jne 0x11dd4052 */
  if (!C.zf) goto L_11dd4052;
L_11dd4064:;
  /* 11dd4064 mov ebx, ecx */
  EBX = (ECX);
  /* 11dd4066 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd4069 jne 0x11dd40d7 */
  if (!C.zf) goto L_11dd40d7;
L_11dd406b:;
  /* 11dd406b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd406d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11dd406e:;
  /* 11dd406e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dd406f jne 0x11dd406b */
  if (!C.zf) goto L_11dd406b;
  /* 11dd4071 pop ebx */
  EBX = (pop32());
  /* 11dd4072 pop esi */
  ESI = (pop32());
L_11dd4073:;
  /* 11dd4073 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd4077 pop edi */
  EDI = (pop32());
  /* 11dd4078 ret  */
  ESPCHK(0x11dd3ff0u, _esp0);
  ESP += 4; return;
L_11dd4079:;
  /* 11dd4079 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dd407b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd407e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd407f je 0x11dd4030 */
  if (C.zf) goto L_11dd4030;
L_11dd4081:;
  /* 11dd4081 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dd4086 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dd4088 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd408a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dd408d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd408f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11dd4091 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4094 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dd4099 je 0x11dd4079 */
  if (C.zf) goto L_11dd4079;
  /* 11dd409b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dd409d je 0x11dd40cb */
  if (C.zf) goto L_11dd40cb;
  /* 11dd409f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11dd40a1 je 0x11dd40c1 */
  if (C.zf) goto L_11dd40c1;
  /* 11dd40a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dd40a9 je 0x11dd40b7 */
  if (C.zf) goto L_11dd40b7;
  /* 11dd40ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dd40b1 jne 0x11dd4079 */
  if (!C.zf) goto L_11dd4079;
  /* 11dd40b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dd40b5 jmp 0x11dd40cf */
  goto L_11dd40cf;
L_11dd40b7:;
  /* 11dd40b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dd40bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dd40bf jmp 0x11dd40cf */
  goto L_11dd40cf;
L_11dd40c1:;
  /* 11dd40c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dd40c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dd40c9 jmp 0x11dd40cf */
  goto L_11dd40cf;
L_11dd40cb:;
  /* 11dd40cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd40cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11dd40cf:;
  /* 11dd40cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd40d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd40d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd40d5 je 0x11dd40e1 */
  if (C.zf) goto L_11dd40e1;
L_11dd40d7:;
  /* 11dd40d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dd40d9:;
  /* 11dd40d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11dd40db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd40de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd40df jne 0x11dd40d9 */
  if (!C.zf) goto L_11dd40d9;
L_11dd40e1:;
  /* 11dd40e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11dd40e4 jne 0x11dd406b */
  if (!C.zf) goto L_11dd406b;
L_11dd40e6:;
  /* 11dd40e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dd40ea pop ebx */
  EBX = (pop32());
  /* 11dd40eb pop esi */
  ESI = (pop32());
  /* 11dd40ec pop edi */
  EDI = (pop32());
  /* 11dd40ed ret  */
  ESPCHK(0x11dd3ff0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11dd40f0 (88 bytes, 40 insns) */
void f_11dd40f0(void) {
  FTRACE(0x11dd40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd40f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dd40f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd40f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dd40fa je 0x11dd4143 */
  if (C.zf) goto L_11dd4143;
  /* 11dd40fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd40fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11dd4102 push edi */
  push32((uint32_t)(EDI));
  /* 11dd4103 mov edi, ecx */
  EDI = (ECX);
  /* 11dd4105 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4108 jb 0x11dd4137 */
  if (C.cf) goto L_11dd4137;
  /* 11dd410a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dd410c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11dd410f je 0x11dd4119 */
  if (C.zf) goto L_11dd4119;
  /* 11dd4111 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11dd4113:;
  /* 11dd4113 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4115 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd4116 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd4117 jne 0x11dd4113 */
  if (!C.zf) goto L_11dd4113;
L_11dd4119:;
  /* 11dd4119 mov ecx, eax */
  ECX = (EAX);
  /* 11dd411b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dd411e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4120 mov ecx, eax */
  ECX = (EAX);
  /* 11dd4122 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11dd4125 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4127 mov ecx, edx */
  ECX = (EDX);
  /* 11dd4129 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dd412c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd412f je 0x11dd4137 */
  if (C.zf) goto L_11dd4137;
  /* 11dd4131 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dd4133 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dd4135 je 0x11dd413d */
  if (C.zf) goto L_11dd413d;
L_11dd4137:;
  /* 11dd4137 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4139 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd413a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dd413b jne 0x11dd4137 */
  if (!C.zf) goto L_11dd4137;
L_11dd413d:;
  /* 11dd413d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd4141 pop edi */
  EDI = (pop32());
  /* 11dd4142 ret  */
  ESPCHK(0x11dd40f0u, _esp0);
  ESP += 4; return;
L_11dd4143:;
  /* 11dd4143 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd4147 ret  */
  ESPCHK(0x11dd40f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004148 @ 0x11dd4148 (27 bytes, 13 insns) */
void f_11dd4148(void) {
  FTRACE(0x11dd4148u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4148 mov eax, dword ptr [0x11dd6b68] */
  EAX = (r32((uint32_t)(0x11dd6b68)));
  /* 11dd414d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd414f je 0x11dd4160 */
  if (C.zf) goto L_11dd4160;
  /* 11dd4151 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dd4155 call eax */
  call_ind((uint32_t)(EAX), 0x11dd4157u);
  /* 11dd4157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd4159 pop ecx */
  ECX = (pop32());
  /* 11dd415a je 0x11dd4160 */
  if (C.zf) goto L_11dd4160;
  /* 11dd415c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd415e pop eax */
  EAX = (pop32());
  /* 11dd415f ret  */
  ESPCHK(0x11dd4148u, _esp0);
  ESP += 4; return;
L_11dd4160:;
  /* 11dd4160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dd4162 ret  */
  ESPCHK(0x11dd4148u, _esp0);
  ESP += 4; return;
}

/* FUN_10004163 @ 0x11dd4163 (511 bytes, 193 insns) */
void f_11dd4163(void) {
  FTRACE(0x11dd4163u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4163 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd4164 mov ebp, esp */
  EBP = (ESP);
  /* 11dd4166 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dd4168 push 0x11dd5490 */
  push32((uint32_t)(0x11dd5490u));
  /* 11dd416d push 0x11dd4930 */
  push32((uint32_t)(0x11dd4930u));
  /* 11dd4172 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dd4178 push eax */
  push32((uint32_t)(EAX));
  /* 11dd4179 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dd4180 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd4183 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd4184 push esi */
  push32((uint32_t)(ESI));
  /* 11dd4185 push edi */
  push32((uint32_t)(EDI));
  /* 11dd4186 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dd4189 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd418b cmp dword ptr [0x11dd6b90], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dd6b90))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4191 jne 0x11dd41d9 */
  if (!C.zf) goto L_11dd41d9;
  /* 11dd4193 push edi */
  push32((uint32_t)(EDI));
  /* 11dd4194 push edi */
  push32((uint32_t)(EDI));
  /* 11dd4195 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd4197 pop ebx */
  EBX = (pop32());
  /* 11dd4198 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd4199 push 0x11dd5488 */
  push32((uint32_t)(0x11dd5488u));
  /* 11dd419e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11dd41a3 push esi */
  push32((uint32_t)(ESI));
  /* 11dd41a4 push edi */
  push32((uint32_t)(EDI));
  /* 11dd41a5 call dword ptr [0x11dd5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5010))), 0x11dd41abu);
  /* 11dd41ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd41ad je 0x11dd41b7 */
  if (C.zf) goto L_11dd41b7;
  /* 11dd41af mov dword ptr [0x11dd6b90], ebx */
  w32((uint32_t)(0x11dd6b90), (EBX));
  /* 11dd41b5 jmp 0x11dd41d9 */
  goto L_11dd41d9;
L_11dd41b7:;
  /* 11dd41b7 push edi */
  push32((uint32_t)(EDI));
  /* 11dd41b8 push edi */
  push32((uint32_t)(EDI));
  /* 11dd41b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd41ba push 0x11dd5484 */
  push32((uint32_t)(0x11dd5484u));
  /* 11dd41bf push esi */
  push32((uint32_t)(ESI));
  /* 11dd41c0 push edi */
  push32((uint32_t)(EDI));
  /* 11dd41c1 call dword ptr [0x11dd5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5014))), 0x11dd41c7u);
  /* 11dd41c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd41c9 je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd41cf mov dword ptr [0x11dd6b90], 2 */
  w32((uint32_t)(0x11dd6b90), (0x2u));
L_11dd41d9:;
  /* 11dd41d9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd41dc jle 0x11dd41ee */
  if ((C.zf||C.sf!=C.of)) goto L_11dd41ee;
  /* 11dd41de push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dd41e1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd41e4 call 0x11dd4387 */
  push32(0x11dd41e9u); f_11dd4387();
  /* 11dd41e9 pop ecx */
  ECX = (pop32());
  /* 11dd41ea pop ecx */
  ECX = (pop32());
  /* 11dd41eb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11dd41ee:;
  /* 11dd41ee mov eax, dword ptr [0x11dd6b90] */
  EAX = (r32((uint32_t)(0x11dd6b90)));
  /* 11dd41f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd41f6 jne 0x11dd4215 */
  if (!C.zf) goto L_11dd4215;
  /* 11dd41f8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11dd41fb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dd41fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dd4201 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd4204 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd4207 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd420a call dword ptr [0x11dd5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5014))), 0x11dd4210u);
  /* 11dd4210 jmp 0x11dd42f3 */
  goto L_11dd42f3;
L_11dd4215:;
  /* 11dd4215 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4218 jne 0x11dd42f1 */
  if (!C.zf) goto L_11dd42f1;
  /* 11dd421e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4221 jne 0x11dd422b */
  if (!C.zf) goto L_11dd422b;
  /* 11dd4223 mov eax, dword ptr [0x11dd6b88] */
  EAX = (r32((uint32_t)(0x11dd6b88)));
  /* 11dd4228 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11dd422b:;
  /* 11dd422b push edi */
  push32((uint32_t)(EDI));
  /* 11dd422c push edi */
  push32((uint32_t)(EDI));
  /* 11dd422d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dd4230 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd4233 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dd4236 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dd4238 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd423a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11dd423d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd423e push eax */
  push32((uint32_t)(EAX));
  /* 11dd423f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11dd4242 call dword ptr [0x11dd5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5024))), 0x11dd4248u);
  /* 11dd4248 mov ebx, eax */
  EBX = (EAX);
  /* 11dd424a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11dd424d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd424f je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd4255 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11dd4258 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11dd425b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd425e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11dd4260 call 0x11dd4a10 */
  push32(0x11dd4265u); f_11dd4a10();
  /* 11dd4265 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dd4268 mov eax, esp */
  EAX = (ESP);
  /* 11dd426a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dd426d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd4271 jmp 0x11dd4286 */
  goto L_11dd4286;
  /* 11dd4273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd4275 pop eax */
  EAX = (pop32());
  /* 11dd4276 ret  */
  ESPCHK(0x11dd4163u, _esp0);
  ESP += 4; return;
  /* 11dd4277 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dd427a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd427c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11dd427f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd4283 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11dd4286:;
  /* 11dd4286 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4289 je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd428b push ebx */
  push32((uint32_t)(EBX));
  /* 11dd428c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dd428f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dd4292 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd4295 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd4297 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11dd429a call dword ptr [0x11dd5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5024))), 0x11dd42a0u);
  /* 11dd42a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd42a2 je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd42a4 push edi */
  push32((uint32_t)(EDI));
  /* 11dd42a5 push edi */
  push32((uint32_t)(EDI));
  /* 11dd42a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd42a7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dd42aa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd42ad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd42b0 call dword ptr [0x11dd5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5010))), 0x11dd42b6u);
  /* 11dd42b6 mov esi, eax */
  ESI = (EAX);
  /* 11dd42b8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11dd42bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd42bd je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd42bf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11dd42c3 je 0x11dd4305 */
  if (C.zf) goto L_11dd4305;
  /* 11dd42c5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd42c8 je 0x11dd4380 */
  if (C.zf) goto L_11dd4380;
  /* 11dd42ce cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd42d1 jg 0x11dd42f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dd42f1;
  /* 11dd42d3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11dd42d6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dd42d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd42da push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dd42dd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd42e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd42e3 call dword ptr [0x11dd5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5010))), 0x11dd42e9u);
  /* 11dd42e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd42eb jne 0x11dd4380 */
  if (!C.zf) goto L_11dd4380;
L_11dd42f1:;
  /* 11dd42f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dd42f3:;
  /* 11dd42f3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11dd42f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dd42f9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dd4300 pop edi */
  EDI = (pop32());
  /* 11dd4301 pop esi */
  ESI = (pop32());
  /* 11dd4302 pop ebx */
  EBX = (pop32());
  /* 11dd4303 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd4304 ret  */
  ESPCHK(0x11dd4163u, _esp0);
  ESP += 4; return;
L_11dd4305:;
  /* 11dd4305 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dd430c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11dd430f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4312 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11dd4314 call 0x11dd4a10 */
  push32(0x11dd4319u); f_11dd4a10();
  /* 11dd4319 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dd431c mov ebx, esp */
  EBX = (ESP);
  /* 11dd431e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11dd4321 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd4325 jmp 0x11dd4339 */
  goto L_11dd4339;
  /* 11dd4327 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd4329 pop eax */
  EAX = (pop32());
  /* 11dd432a ret  */
  ESPCHK(0x11dd4163u, _esp0);
  ESP += 4; return;
  /* 11dd432b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dd432e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dd4330 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd4332 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd4336 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11dd4339:;
  /* 11dd4339 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd433b je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd433d push esi */
  push32((uint32_t)(ESI));
  /* 11dd433e push ebx */
  push32((uint32_t)(EBX));
  /* 11dd433f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11dd4342 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dd4345 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd4348 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd434b call dword ptr [0x11dd5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5010))), 0x11dd4351u);
  /* 11dd4351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd4353 je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
  /* 11dd4355 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4358 push edi */
  push32((uint32_t)(EDI));
  /* 11dd4359 push edi */
  push32((uint32_t)(EDI));
  /* 11dd435a jne 0x11dd4360 */
  if (!C.zf) goto L_11dd4360;
  /* 11dd435c push edi */
  push32((uint32_t)(EDI));
  /* 11dd435d push edi */
  push32((uint32_t)(EDI));
  /* 11dd435e jmp 0x11dd4366 */
  goto L_11dd4366;
L_11dd4360:;
  /* 11dd4360 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11dd4363 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11dd4366:;
  /* 11dd4366 push esi */
  push32((uint32_t)(ESI));
  /* 11dd4367 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd4368 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11dd436d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11dd4370 call dword ptr [0x11dd5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5064))), 0x11dd4376u);
  /* 11dd4376 mov esi, eax */
  ESI = (EAX);
  /* 11dd4378 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd437a je 0x11dd42f1 */
  if (C.zf) goto L_11dd42f1;
L_11dd4380:;
  /* 11dd4380 mov eax, esi */
  EAX = (ESI);
  /* 11dd4382 jmp 0x11dd42f3 */
  goto L_11dd42f3;
}

/* FUN_10004387 @ 0x11dd4387 (43 bytes, 20 insns) */
void f_11dd4387(void) {
  FTRACE(0x11dd4387u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4387 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd438b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dd438f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dd4391 push esi */
  push32((uint32_t)(ESI));
  /* 11dd4392 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11dd4395 je 0x11dd43a4 */
  if (C.zf) goto L_11dd43a4;
L_11dd4397:;
  /* 11dd4397 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd439a je 0x11dd43a4 */
  if (C.zf) goto L_11dd43a4;
  /* 11dd439c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd439d mov esi, ecx */
  ESI = (ECX);
  /* 11dd439f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dd43a0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dd43a2 jne 0x11dd4397 */
  if (!C.zf) goto L_11dd4397;
L_11dd43a4:;
  /* 11dd43a4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dd43a7 pop esi */
  ESI = (pop32());
  /* 11dd43a8 jne 0x11dd43af */
  if (!C.zf) goto L_11dd43af;
  /* 11dd43aa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd43ae ret  */
  ESPCHK(0x11dd4387u, _esp0);
  ESP += 4; return;
L_11dd43af:;
  /* 11dd43af mov eax, edx */
  EAX = (EDX);
  /* 11dd43b1 ret  */
  ESPCHK(0x11dd4387u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b2 @ 0x11dd43b2 (318 bytes, 123 insns) */
void f_11dd43b2(void) {
  FTRACE(0x11dd43b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd43b2 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd43b3 mov ebp, esp */
  EBP = (ESP);
  /* 11dd43b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dd43b7 push 0x11dd54a8 */
  push32((uint32_t)(0x11dd54a8u));
  /* 11dd43bc push 0x11dd4930 */
  push32((uint32_t)(0x11dd4930u));
  /* 11dd43c1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dd43c7 push eax */
  push32((uint32_t)(EAX));
  /* 11dd43c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dd43cf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd43d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd43d3 push esi */
  push32((uint32_t)(ESI));
  /* 11dd43d4 push edi */
  push32((uint32_t)(EDI));
  /* 11dd43d5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dd43d8 mov eax, dword ptr [0x11dd6b94] */
  EAX = (r32((uint32_t)(0x11dd6b94)));
  /* 11dd43dd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd43df cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd43e1 jne 0x11dd4421 */
  if (!C.zf) goto L_11dd4421;
  /* 11dd43e3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11dd43e6 push eax */
  push32((uint32_t)(EAX));
  /* 11dd43e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd43e9 pop esi */
  ESI = (pop32());
  /* 11dd43ea push esi */
  push32((uint32_t)(ESI));
  /* 11dd43eb push 0x11dd5488 */
  push32((uint32_t)(0x11dd5488u));
  /* 11dd43f0 push esi */
  push32((uint32_t)(ESI));
  /* 11dd43f1 call dword ptr [0x11dd500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd500c))), 0x11dd43f7u);
  /* 11dd43f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd43f9 je 0x11dd43ff */
  if (C.zf) goto L_11dd43ff;
  /* 11dd43fb mov eax, esi */
  EAX = (ESI);
  /* 11dd43fd jmp 0x11dd441c */
  goto L_11dd441c;
L_11dd43ff:;
  /* 11dd43ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11dd4402 push eax */
  push32((uint32_t)(EAX));
  /* 11dd4403 push esi */
  push32((uint32_t)(ESI));
  /* 11dd4404 push 0x11dd5484 */
  push32((uint32_t)(0x11dd5484u));
  /* 11dd4409 push esi */
  push32((uint32_t)(ESI));
  /* 11dd440a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd440b call dword ptr [0x11dd5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5018))), 0x11dd4411u);
  /* 11dd4411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dd4413 je 0x11dd44e7 */
  if (C.zf) goto L_11dd44e7;
  /* 11dd4419 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dd441b pop eax */
  EAX = (pop32());
L_11dd441c:;
  /* 11dd441c mov dword ptr [0x11dd6b94], eax */
  w32((uint32_t)(0x11dd6b94), (EAX));
L_11dd4421:;
  /* 11dd4421 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4424 jne 0x11dd444a */
  if (!C.zf) goto L_11dd444a;
  /* 11dd4426 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dd4429 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd442b jne 0x11dd4432 */
  if (!C.zf) goto L_11dd4432;
  /* 11dd442d mov eax, dword ptr [0x11dd6b78] */
  EAX = (r32((uint32_t)(0x11dd6b78)));
L_11dd4432:;
  /* 11dd4432 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dd4435 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd4438 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd443b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd443e push eax */
  push32((uint32_t)(EAX));
  /* 11dd443f call dword ptr [0x11dd5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5018))), 0x11dd4445u);
  /* 11dd4445 jmp 0x11dd44e9 */
  goto L_11dd44e9;
L_11dd444a:;
  /* 11dd444a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd444d jne 0x11dd44e7 */
  if (!C.zf) goto L_11dd44e7;
  /* 11dd4453 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4456 jne 0x11dd4460 */
  if (!C.zf) goto L_11dd4460;
  /* 11dd4458 mov eax, dword ptr [0x11dd6b88] */
  EAX = (r32((uint32_t)(0x11dd6b88)));
  /* 11dd445d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11dd4460:;
  /* 11dd4460 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd4461 push ebx */
  push32((uint32_t)(EBX));
  /* 11dd4462 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd4465 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd4468 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dd446b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dd446d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd446f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11dd4472 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dd4473 push eax */
  push32((uint32_t)(EAX));
  /* 11dd4474 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dd4477 call dword ptr [0x11dd5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5024))), 0x11dd447du);
  /* 11dd447d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dd4480 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4482 je 0x11dd44e7 */
  if (C.zf) goto L_11dd44e7;
  /* 11dd4484 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11dd4487 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11dd448a mov eax, edi */
  EAX = (EDI);
  /* 11dd448c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd448f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11dd4491 call 0x11dd4a10 */
  push32(0x11dd4496u); f_11dd4a10();
  /* 11dd4496 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dd4499 mov esi, esp */
  ESI = (ESP);
  /* 11dd449b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11dd449e push edi */
  push32((uint32_t)(EDI));
  /* 11dd449f push ebx */
  push32((uint32_t)(EBX));
  /* 11dd44a0 push esi */
  push32((uint32_t)(ESI));
  /* 11dd44a1 call 0x11dd40f0 */
  push32(0x11dd44a6u); f_11dd40f0();
  /* 11dd44a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd44a9 jmp 0x11dd44b6 */
  goto L_11dd44b6;
  /* 11dd44ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd44ad pop eax */
  EAX = (pop32());
  /* 11dd44ae ret  */
  ESPCHK(0x11dd43b2u, _esp0);
  ESP += 4; return;
  /* 11dd44af mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dd44b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dd44b4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11dd44b6:;
  /* 11dd44b6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dd44ba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd44bc je 0x11dd44e7 */
  if (C.zf) goto L_11dd44e7;
  /* 11dd44be push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11dd44c1 push esi */
  push32((uint32_t)(ESI));
  /* 11dd44c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dd44c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dd44c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dd44ca push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dd44cd call dword ptr [0x11dd5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd5024))), 0x11dd44d3u);
  /* 11dd44d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd44d5 je 0x11dd44e7 */
  if (C.zf) goto L_11dd44e7;
  /* 11dd44d7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dd44da push eax */
  push32((uint32_t)(EAX));
  /* 11dd44db push esi */
  push32((uint32_t)(ESI));
  /* 11dd44dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd44df call dword ptr [0x11dd500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dd500c))), 0x11dd44e5u);
  /* 11dd44e5 jmp 0x11dd44e9 */
  goto L_11dd44e9;
L_11dd44e7:;
  /* 11dd44e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dd44e9:;
  /* 11dd44e9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11dd44ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dd44ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dd44f6 pop edi */
  EDI = (pop32());
  /* 11dd44f7 pop esi */
  ESI = (pop32());
  /* 11dd44f8 pop ebx */
  EBX = (pop32());
  /* 11dd44f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd44fa ret  */
  ESPCHK(0x11dd43b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x11dd4500 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11dd4500(void) {
  FTRACE(0x11dd4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4500 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd4501 mov ebp, esp */
  EBP = (ESP);
  /* 11dd4503 push edi */
  push32((uint32_t)(EDI));
  /* 11dd4504 push esi */
  push32((uint32_t)(ESI));
  /* 11dd4505 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dd4508 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dd450b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd450e mov eax, ecx */
  EAX = (ECX);
  /* 11dd4510 mov edx, ecx */
  EDX = (ECX);
  /* 11dd4512 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4514 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4516 jbe 0x11dd4520 */
  if ((C.cf||C.zf)) goto L_11dd4520;
  /* 11dd4518 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd451a jb 0x11dd4698 */
  if (C.cf) goto L_11dd4698;
L_11dd4520:;
  /* 11dd4520 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dd4526 jne 0x11dd453c */
  if (!C.zf) goto L_11dd453c;
  /* 11dd4528 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd452b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dd452e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4531 jb 0x11dd455c */
  if (C.cf) goto L_11dd455c;
  /* 11dd4533 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd4535 jmp dword ptr [edx*4 + 0x11dd4648] */
  switch (EDX) {
    case 0: goto L_11dd4658;
    case 1: goto L_11dd4660;
    case 2: goto L_11dd466c;
    case 3: goto L_11dd4680;
    default: x86_unimpl("switch@0x11dd4535 out of table"); return;
  }
L_11dd453c:;
  /* 11dd453c mov eax, edi */
  EAX = (EDI);
  /* 11dd453e mov edx, 3 */
  EDX = (0x3u);
  /* 11dd4543 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd4546 jb 0x11dd4554 */
  if (C.cf) goto L_11dd4554;
  /* 11dd4548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dd454b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd454d jmp dword ptr [eax*4 + 0x11dd4560] */
  switch (EAX) {
    case 1: goto L_11dd4570;
    case 2: goto L_11dd459c;
    case 3: goto L_11dd45c0;
    default: x86_unimpl("switch@0x11dd454d out of table"); return;
  }
L_11dd4554:;
  /* 11dd4554 jmp dword ptr [ecx*4 + 0x11dd4658] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11dd4658)))); return;
  /* 11dd455b nop  */
  /* nop */
L_11dd455c:;
  /* 11dd455c jmp dword ptr [ecx*4 + 0x11dd45dc] */
  switch (ECX) {
    case 0: goto L_11dd463f;
    case 1: goto L_11dd462c;
    case 2: goto L_11dd4624;
    case 3: goto L_11dd461c;
    case 4: goto L_11dd4614;
    case 5: goto L_11dd460c;
    case 6: goto L_11dd4604;
    case 7: goto L_11dd45fc;
    default: x86_unimpl("switch@0x11dd455c out of table"); return;
  }
  /* 11dd4563 nop  */
  /* nop */
L_11dd4570:;
  /* 11dd4570 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd4572 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd4574 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4576 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd4579 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd457c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd457f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd4582 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd4585 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4588 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd458b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd458e jb 0x11dd455c */
  if (C.cf) goto L_11dd455c;
  /* 11dd4590 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd4592 jmp dword ptr [edx*4 + 0x11dd4648] */
  switch (EDX) {
    case 0: goto L_11dd4658;
    case 1: goto L_11dd4660;
    case 2: goto L_11dd466c;
    case 3: goto L_11dd4680;
    default: x86_unimpl("switch@0x11dd4592 out of table"); return;
  }
  /* 11dd4599 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd459c:;
  /* 11dd459c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd459e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd45a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd45a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd45a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd45a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd45ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd45ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd45b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd45b4 jb 0x11dd455c */
  if (C.cf) goto L_11dd455c;
  /* 11dd45b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd45b8 jmp dword ptr [edx*4 + 0x11dd4648] */
  switch (EDX) {
    case 0: goto L_11dd4658;
    case 1: goto L_11dd4660;
    case 2: goto L_11dd466c;
    case 3: goto L_11dd4680;
    default: x86_unimpl("switch@0x11dd45b8 out of table"); return;
  }
  /* 11dd45bf nop  */
  /* nop */
L_11dd45c0:;
  /* 11dd45c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd45c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd45c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd45c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dd45c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd45ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd45cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd45ce jb 0x11dd455c */
  if (C.cf) goto L_11dd455c;
  /* 11dd45d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd45d2 jmp dword ptr [edx*4 + 0x11dd4648] */
  switch (EDX) {
    case 0: goto L_11dd4658;
    case 1: goto L_11dd4660;
    case 2: goto L_11dd466c;
    case 3: goto L_11dd4680;
    default: x86_unimpl("switch@0x11dd45d2 out of table"); return;
  }
  /* 11dd45d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd45fc:;
  /* 11dd45fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11dd4600 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11dd4604:;
  /* 11dd4604 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11dd4608 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11dd460c:;
  /* 11dd460c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11dd4610 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11dd4614:;
  /* 11dd4614 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11dd4618 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11dd461c:;
  /* 11dd461c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11dd4620 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11dd4624:;
  /* 11dd4624 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11dd4628 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11dd462c:;
  /* 11dd462c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11dd4630 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11dd4634 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dd463b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd463d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dd463f:;
  /* 11dd463f jmp dword ptr [edx*4 + 0x11dd4648] */
  switch (EDX) {
    case 0: goto L_11dd4658;
    case 1: goto L_11dd4660;
    case 2: goto L_11dd466c;
    case 3: goto L_11dd4680;
    default: x86_unimpl("switch@0x11dd463f out of table"); return;
  }
  /* 11dd4646 mov edi, edi */
  EDI = (EDI);
L_11dd4658:;
  /* 11dd4658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd465b pop esi */
  ESI = (pop32());
  /* 11dd465c pop edi */
  EDI = (pop32());
  /* 11dd465d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd465e ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd465f nop  */
  /* nop */
L_11dd4660:;
  /* 11dd4660 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd4662 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4667 pop esi */
  ESI = (pop32());
  /* 11dd4668 pop edi */
  EDI = (pop32());
  /* 11dd4669 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd466a ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd466b nop  */
  /* nop */
L_11dd466c:;
  /* 11dd466c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd466e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4670 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd4673 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd4676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4679 pop esi */
  ESI = (pop32());
  /* 11dd467a pop edi */
  EDI = (pop32());
  /* 11dd467b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd467c ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd467d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd4680:;
  /* 11dd4680 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dd4682 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dd4684 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd4687 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd468a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd468d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd4690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4693 pop esi */
  ESI = (pop32());
  /* 11dd4694 pop edi */
  EDI = (pop32());
  /* 11dd4695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd4696 ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd4697 nop  */
  /* nop */
L_11dd4698:;
  /* 11dd4698 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11dd469c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11dd46a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dd46a6 jne 0x11dd46cc */
  if (!C.zf) goto L_11dd46cc;
  /* 11dd46a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd46ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dd46ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd46b1 jb 0x11dd46c0 */
  if (C.cf) goto L_11dd46c0;
  /* 11dd46b3 std  */
  C.df=1;
  /* 11dd46b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd46b6 cld  */
  C.df=0;
  /* 11dd46b7 jmp dword ptr [edx*4 + 0x11dd47e0] */
  switch (EDX) {
    case 0: goto L_11dd47f0;
    case 1: goto L_11dd47f8;
    case 2: goto L_11dd4808;
    case 3: goto L_11dd481c;
    default: x86_unimpl("switch@0x11dd46b7 out of table"); return;
  }
  /* 11dd46be mov edi, edi */
  EDI = (EDI);
L_11dd46c0:;
  /* 11dd46c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dd46c2 jmp dword ptr [ecx*4 + 0x11dd4790] */
  switch (ECX) {
    case 0: goto L_11dd47d7;
    default: x86_unimpl("switch@0x11dd46c2 out of table"); return;
  }
  /* 11dd46c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd46cc:;
  /* 11dd46cc mov eax, edi */
  EAX = (EDI);
  /* 11dd46ce mov edx, 3 */
  EDX = (0x3u);
  /* 11dd46d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd46d6 jb 0x11dd46e4 */
  if (C.cf) goto L_11dd46e4;
  /* 11dd46d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dd46db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd46dd jmp dword ptr [eax*4 + 0x11dd46e8] */
  switch (EAX) {
    case 1: goto L_11dd46f8;
    case 2: goto L_11dd4718;
    case 3: goto L_11dd4740;
    default: x86_unimpl("switch@0x11dd46dd out of table"); return;
  }
L_11dd46e4:;
  /* 11dd46e4 jmp dword ptr [ecx*4 + 0x11dd47e0] */
  switch (ECX) {
    case 0: goto L_11dd47f0;
    case 1: goto L_11dd47f8;
    case 2: goto L_11dd4808;
    case 3: goto L_11dd481c;
    default: x86_unimpl("switch@0x11dd46e4 out of table"); return;
  }
  /* 11dd46eb nop  */
  /* nop */
L_11dd46f8:;
  /* 11dd46f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd46fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd46fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd4700 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dd4701 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd4704 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11dd4705 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4708 jb 0x11dd46c0 */
  if (C.cf) goto L_11dd46c0;
  /* 11dd470a std  */
  C.df=1;
  /* 11dd470b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd470d cld  */
  C.df=0;
  /* 11dd470e jmp dword ptr [edx*4 + 0x11dd47e0] */
  switch (EDX) {
    case 0: goto L_11dd47f0;
    case 1: goto L_11dd47f8;
    case 2: goto L_11dd4808;
    case 3: goto L_11dd481c;
    default: x86_unimpl("switch@0x11dd470e out of table"); return;
  }
  /* 11dd4715 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd4718:;
  /* 11dd4718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd471b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd471d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd4720 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd4723 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd4726 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd4729 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd472c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd472f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4732 jb 0x11dd46c0 */
  if (C.cf) goto L_11dd46c0;
  /* 11dd4734 std  */
  C.df=1;
  /* 11dd4735 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd4737 cld  */
  C.df=0;
  /* 11dd4738 jmp dword ptr [edx*4 + 0x11dd47e0] */
  switch (EDX) {
    case 0: goto L_11dd47f0;
    case 1: goto L_11dd47f8;
    case 2: goto L_11dd4808;
    case 3: goto L_11dd481c;
    default: x86_unimpl("switch@0x11dd4738 out of table"); return;
  }
  /* 11dd473f nop  */
  /* nop */
L_11dd4740:;
  /* 11dd4740 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd4743 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dd4745 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd4748 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd474b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd474e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd4751 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dd4754 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd4757 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd475a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd475d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4760 jb 0x11dd46c0 */
  if (C.cf) goto L_11dd46c0;
  /* 11dd4766 std  */
  C.df=1;
  /* 11dd4767 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dd4769 cld  */
  C.df=0;
  /* 11dd476a jmp dword ptr [edx*4 + 0x11dd47e0] */
  switch (EDX) {
    case 0: goto L_11dd47f0;
    case 1: goto L_11dd47f8;
    case 2: goto L_11dd4808;
    case 3: goto L_11dd481c;
    default: x86_unimpl("switch@0x11dd476a out of table"); return;
  }
  /* 11dd4771 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11dd4774 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11dd4775 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd4776 fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd4778 pushfd  */
  x86_unimpl("pushfd @ 0x11dd4778");
  /* 11dd4779 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd477a fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd477c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11dd477d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd477e fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd4780 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11dd4781 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd4782 fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd4784 mov ah, 0x47 */
  AH = (0x47u);
  /* 11dd4786 fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd4788 mov esp, 0xc411dd47 */
  ESP = (0xc411dd47u);
  /* 11dd478d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dd478e fst qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  /* 11dd4794 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11dd4798 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11dd479c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11dd47a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11dd47a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11dd47a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11dd47ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11dd47b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11dd47b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11dd47b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11dd47bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11dd47c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11dd47c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11dd47c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11dd47cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dd47d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd47d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dd47d7:;
  /* 11dd47d7 jmp dword ptr [edx*4 + 0x11dd47e0] */
  switch (EDX) {
    case 0: goto L_11dd47f0;
    case 1: goto L_11dd47f8;
    case 2: goto L_11dd4808;
    case 3: goto L_11dd481c;
    default: x86_unimpl("switch@0x11dd47d7 out of table"); return;
  }
  /* 11dd47de mov edi, edi */
  EDI = (EDI);
L_11dd47f0:;
  /* 11dd47f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd47f3 pop esi */
  ESI = (pop32());
  /* 11dd47f4 pop edi */
  EDI = (pop32());
  /* 11dd47f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd47f6 ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd47f7 nop  */
  /* nop */
L_11dd47f8:;
  /* 11dd47f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd47fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd47fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4801 pop esi */
  ESI = (pop32());
  /* 11dd4802 pop edi */
  EDI = (pop32());
  /* 11dd4803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd4804 ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd4805 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dd4808:;
  /* 11dd4808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd480b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd480e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd4811 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd4814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4817 pop esi */
  ESI = (pop32());
  /* 11dd4818 pop edi */
  EDI = (pop32());
  /* 11dd4819 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd481a ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
  /* 11dd481b nop  */
  /* nop */
L_11dd481c:;
  /* 11dd481c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dd481f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dd4822 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dd4825 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dd4828 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dd482b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dd482e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4831 pop esi */
  ESI = (pop32());
  /* 11dd4832 pop edi */
  EDI = (pop32());
  /* 11dd4833 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dd4834 ret  */
  ESPCHK(0x11dd4500u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11dd4838 (32 bytes, 18 insns) */
void f_11dd4838(void) {
  FTRACE(0x11dd4838u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4838 push ebp */
  push32((uint32_t)(EBP));
  /* 11dd4839 mov ebp, esp */
  EBP = (ESP);
  /* 11dd483b push ebx */
  push32((uint32_t)(EBX));
  /* 11dd483c push esi */
  push32((uint32_t)(ESI));
  /* 11dd483d push edi */
  push32((uint32_t)(EDI));
  /* 11dd483e push ebp */
  push32((uint32_t)(EBP));
  /* 11dd483f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd4841 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dd4843 push 0x11dd4850 */
  push32((uint32_t)(0x11dd4850u));
  /* 11dd4848 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dd484b call 0x11dd4a40 */
  push32(0x11dd4850u); f_11dd4a40();
  /* 11dd4850 pop ebp */
  EBP = (pop32());
  /* 11dd4851 pop edi */
  EDI = (pop32());
  /* 11dd4852 pop esi */
  ESI = (pop32());
  /* 11dd4853 pop ebx */
  EBX = (pop32());
  /* 11dd4854 mov esp, ebp */
  ESP = (EBP);
  /* 11dd4856 pop ebp */
  EBP = (pop32());
  /* 11dd4857 ret  */
  ESPCHK(0x11dd4838u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11dd487a (104 bytes, 33 insns) */
void f_11dd487a(void) {
  FTRACE(0x11dd487au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd487a push ebx */
  push32((uint32_t)(EBX));
  /* 11dd487b push esi */
  push32((uint32_t)(ESI));
  /* 11dd487c push edi */
  push32((uint32_t)(EDI));
  /* 11dd487d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dd4881 push eax */
  push32((uint32_t)(EAX));
  /* 11dd4882 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11dd4884 push 0x11dd4858 */
  push32((uint32_t)(0x11dd4858u));
  /* 11dd4889 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11dd4890 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11dd4897:;
  /* 11dd4897 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11dd489b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dd489e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11dd48a1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd48a4 je 0x11dd48d4 */
  if (C.zf) goto L_11dd48d4;
  /* 11dd48a6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd48aa je 0x11dd48d4 */
  if (C.zf) goto L_11dd48d4;
  /* 11dd48ac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11dd48af mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11dd48b2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11dd48b6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11dd48b9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd48be jne 0x11dd48d2 */
  if (!C.zf) goto L_11dd48d2;
  /* 11dd48c0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11dd48c5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11dd48c9 call 0x11dd490e */
  push32(0x11dd48ceu); f_11dd490e();
  /* 11dd48ce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11dd48d2u);
L_11dd48d2:;
  /* 11dd48d2 jmp 0x11dd4897 */
  goto L_11dd4897;
L_11dd48d4:;
  /* 11dd48d4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11dd48db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd48de pop edi */
  EDI = (pop32());
  /* 11dd48df pop esi */
  ESI = (pop32());
  /* 11dd48e0 pop ebx */
  EBX = (pop32());
  /* 11dd48e1 ret  */
  ESPCHK(0x11dd487au, _esp0);
  ESP += 4; return;
}

/* FUN_1000490e @ 0x11dd490e (24 bytes, 10 insns) */
void f_11dd490e(void) {
  FTRACE(0x11dd490eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd490e push ebx */
  push32((uint32_t)(EBX));
  /* 11dd490f push ecx */
  push32((uint32_t)(ECX));
  /* 11dd4910 mov ebx, 0x11dd6790 */
  EBX = (0x11dd6790u);
  /* 11dd4915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dd4918 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11dd491b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11dd491e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11dd4921 pop ecx */
  ECX = (pop32());
  /* 11dd4922 pop ebx */
  EBX = (pop32());
  /* 11dd4923 ret 4 */
  ESPCHK(0x11dd490eu, _esp0);
  ESP += 8; return;
}

/* FUN_100049ed @ 0x11dd49ed (27 bytes, 11 insns) */
void f_11dd49ed(void) {
  FTRACE(0x11dd49edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd49ed push ebp */
  push32((uint32_t)(EBP));
  /* 11dd49ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dd49f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11dd49f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11dd49f7 push eax */
  push32((uint32_t)(EAX));
  /* 11dd49f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dd49fb push eax */
  push32((uint32_t)(EAX));
  /* 11dd49fc call 0x11dd487a */
  push32(0x11dd4a01u); f_11dd487a();
  /* 11dd4a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dd4a04 pop ebp */
  EBP = (pop32());
  /* 11dd4a05 ret 4 */
  ESPCHK(0x11dd49edu, _esp0);
  ESP += 8; return;
}

/* FUN_10004a10 @ 0x11dd4a10 (47 bytes, 17 insns) */
void f_11dd4a10(void) {
  FTRACE(0x11dd4a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4a10 push ecx */
  push32((uint32_t)(ECX));
  /* 11dd4a11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4a16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11dd4a1a jb 0x11dd4a30 */
  if (C.cf) goto L_11dd4a30;
L_11dd4a1c:;
  /* 11dd4a1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd4a22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd4a27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11dd4a29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dd4a2e jae 0x11dd4a1c */
  if (!C.cf) goto L_11dd4a1c;
L_11dd4a30:;
  /* 11dd4a30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dd4a32 mov eax, esp */
  EAX = (ESP);
  /* 11dd4a34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11dd4a36 mov esp, ecx */
  ESP = (ECX);
  /* 11dd4a38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dd4a3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dd4a3d push eax */
  push32((uint32_t)(EAX));
  /* 11dd4a3e ret  */
  ESPCHK(0x11dd4a10u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11dd4a40 (6 bytes, 1 insns) */
void f_11dd4a40(void) {
  FTRACE(0x11dd4a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dd4a40 jmp dword ptr [0x11dd5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11dd5008)))); return;
}

