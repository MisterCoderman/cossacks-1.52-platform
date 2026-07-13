#include "recomp.h"

/* OnInit @ 0x11a11000 (582 bytes, 149 insns) */
void f_11a11000(void) {
  FTRACE(0x11a11000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11000 push esi */
  push32((uint32_t)(ESI));
  /* 11a11001 mov esi, dword ptr [0x11a15100] */
  ESI = (r32((uint32_t)(0x11a15100)));
  /* 11a11007 push 0x11a161a0 */
  push32((uint32_t)(0x11a161a0u));
  /* 11a1100c push 0x11a16570 */
  push32((uint32_t)(0x11a16570u));
  /* 11a11011 call esi */
  call_ind((uint32_t)(ESI), 0x11a11013u);
  /* 11a11013 push 0x11a16198 */
  push32((uint32_t)(0x11a16198u));
  /* 11a11018 push 0x11a16568 */
  push32((uint32_t)(0x11a16568u));
  /* 11a1101d call esi */
  call_ind((uint32_t)(ESI), 0x11a1101fu);
  /* 11a1101f push 0x11a16190 */
  push32((uint32_t)(0x11a16190u));
  /* 11a11024 push 0x11a16640 */
  push32((uint32_t)(0x11a16640u));
  /* 11a11029 call esi */
  call_ind((uint32_t)(ESI), 0x11a1102bu);
  /* 11a1102b push 0x11a16184 */
  push32((uint32_t)(0x11a16184u));
  /* 11a11030 push 0x11a16638 */
  push32((uint32_t)(0x11a16638u));
  /* 11a11035 call esi */
  call_ind((uint32_t)(ESI), 0x11a11037u);
  /* 11a11037 mov esi, dword ptr [0x11a150f8] */
  ESI = (r32((uint32_t)(0x11a150f8)));
  /* 11a1103d push 0x11a1617c */
  push32((uint32_t)(0x11a1617cu));
  /* 11a11042 push 0x11a16530 */
  push32((uint32_t)(0x11a16530u));
  /* 11a11047 call esi */
  call_ind((uint32_t)(ESI), 0x11a11049u);
  /* 11a11049 push 0x11a16174 */
  push32((uint32_t)(0x11a16174u));
  /* 11a1104e push 0x11a16538 */
  push32((uint32_t)(0x11a16538u));
  /* 11a11053 call esi */
  call_ind((uint32_t)(ESI), 0x11a11055u);
  /* 11a11055 push 0x11a1616c */
  push32((uint32_t)(0x11a1616cu));
  /* 11a1105a push 0x11a16540 */
  push32((uint32_t)(0x11a16540u));
  /* 11a1105f call esi */
  call_ind((uint32_t)(ESI), 0x11a11061u);
  /* 11a11061 push 0x11a16164 */
  push32((uint32_t)(0x11a16164u));
  /* 11a11066 push 0x11a16548 */
  push32((uint32_t)(0x11a16548u));
  /* 11a1106b call esi */
  call_ind((uint32_t)(ESI), 0x11a1106du);
  /* 11a1106d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11070 push 0x11a16160 */
  push32((uint32_t)(0x11a16160u));
  /* 11a11075 push 0x11a16618 */
  push32((uint32_t)(0x11a16618u));
  /* 11a1107a call esi */
  call_ind((uint32_t)(ESI), 0x11a1107cu);
  /* 11a1107c push 0x11a1615c */
  push32((uint32_t)(0x11a1615cu));
  /* 11a11081 push 0x11a16620 */
  push32((uint32_t)(0x11a16620u));
  /* 11a11086 call esi */
  call_ind((uint32_t)(ESI), 0x11a11088u);
  /* 11a11088 push 0x11a16158 */
  push32((uint32_t)(0x11a16158u));
  /* 11a1108d push 0x11a16628 */
  push32((uint32_t)(0x11a16628u));
  /* 11a11092 call esi */
  call_ind((uint32_t)(ESI), 0x11a11094u);
  /* 11a11094 push 0x11a16154 */
  push32((uint32_t)(0x11a16154u));
  /* 11a11099 push 0x11a16630 */
  push32((uint32_t)(0x11a16630u));
  /* 11a1109e call esi */
  call_ind((uint32_t)(ESI), 0x11a110a0u);
  /* 11a110a0 push 0x11a1614c */
  push32((uint32_t)(0x11a1614cu));
  /* 11a110a5 push 0x11a16578 */
  push32((uint32_t)(0x11a16578u));
  /* 11a110aa call esi */
  call_ind((uint32_t)(ESI), 0x11a110acu);
  /* 11a110ac push 0x11a16144 */
  push32((uint32_t)(0x11a16144u));
  /* 11a110b1 push 0x11a16598 */
  push32((uint32_t)(0x11a16598u));
  /* 11a110b6 call esi */
  call_ind((uint32_t)(ESI), 0x11a110b8u);
  /* 11a110b8 push 0x11a1613c */
  push32((uint32_t)(0x11a1613cu));
  /* 11a110bd push 0x11a165a0 */
  push32((uint32_t)(0x11a165a0u));
  /* 11a110c2 call esi */
  call_ind((uint32_t)(ESI), 0x11a110c4u);
  /* 11a110c4 push 0x11a16134 */
  push32((uint32_t)(0x11a16134u));
  /* 11a110c9 push 0x11a16580 */
  push32((uint32_t)(0x11a16580u));
  /* 11a110ce call esi */
  call_ind((uint32_t)(ESI), 0x11a110d0u);
  /* 11a110d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a110d3 push 0x11a1612c */
  push32((uint32_t)(0x11a1612cu));
  /* 11a110d8 push 0x11a16590 */
  push32((uint32_t)(0x11a16590u));
  /* 11a110dd call esi */
  call_ind((uint32_t)(ESI), 0x11a110dfu);
  /* 11a110df push 0x11a16124 */
  push32((uint32_t)(0x11a16124u));
  /* 11a110e4 push 0x11a165d0 */
  push32((uint32_t)(0x11a165d0u));
  /* 11a110e9 call esi */
  call_ind((uint32_t)(ESI), 0x11a110ebu);
  /* 11a110eb push 0x11a1611c */
  push32((uint32_t)(0x11a1611cu));
  /* 11a110f0 push 0x11a165e0 */
  push32((uint32_t)(0x11a165e0u));
  /* 11a110f5 call esi */
  call_ind((uint32_t)(ESI), 0x11a110f7u);
  /* 11a110f7 push 0x11a16114 */
  push32((uint32_t)(0x11a16114u));
  /* 11a110fc push 0x11a165b0 */
  push32((uint32_t)(0x11a165b0u));
  /* 11a11101 call esi */
  call_ind((uint32_t)(ESI), 0x11a11103u);
  /* 11a11103 push 0x11a1610c */
  push32((uint32_t)(0x11a1610cu));
  /* 11a11108 push 0x11a165c0 */
  push32((uint32_t)(0x11a165c0u));
  /* 11a1110d call esi */
  call_ind((uint32_t)(ESI), 0x11a1110fu);
  /* 11a1110f push 0x11a16104 */
  push32((uint32_t)(0x11a16104u));
  /* 11a11114 push 0x11a16600 */
  push32((uint32_t)(0x11a16600u));
  /* 11a11119 call esi */
  call_ind((uint32_t)(ESI), 0x11a1111bu);
  /* 11a1111b push 0x11a160fc */
  push32((uint32_t)(0x11a160fcu));
  /* 11a11120 push 0x11a16648 */
  push32((uint32_t)(0x11a16648u));
  /* 11a11125 call esi */
  call_ind((uint32_t)(ESI), 0x11a11127u);
  /* 11a11127 push 0x11a160f4 */
  push32((uint32_t)(0x11a160f4u));
  /* 11a1112c push 0x11a16588 */
  push32((uint32_t)(0x11a16588u));
  /* 11a11131 call esi */
  call_ind((uint32_t)(ESI), 0x11a11133u);
  /* 11a11133 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11136 push 0x11a160ec */
  push32((uint32_t)(0x11a160ecu));
  /* 11a1113b push 0x11a165c8 */
  push32((uint32_t)(0x11a165c8u));
  /* 11a11140 call esi */
  call_ind((uint32_t)(ESI), 0x11a11142u);
  /* 11a11142 push 0x11a160e4 */
  push32((uint32_t)(0x11a160e4u));
  /* 11a11147 push 0x11a165d8 */
  push32((uint32_t)(0x11a165d8u));
  /* 11a1114c call esi */
  call_ind((uint32_t)(ESI), 0x11a1114eu);
  /* 11a1114e push 0x11a160dc */
  push32((uint32_t)(0x11a160dcu));
  /* 11a11153 push 0x11a165a8 */
  push32((uint32_t)(0x11a165a8u));
  /* 11a11158 call esi */
  call_ind((uint32_t)(ESI), 0x11a1115au);
  /* 11a1115a push 0x11a160d4 */
  push32((uint32_t)(0x11a160d4u));
  /* 11a1115f push 0x11a165b8 */
  push32((uint32_t)(0x11a165b8u));
  /* 11a11164 call esi */
  call_ind((uint32_t)(ESI), 0x11a11166u);
  /* 11a11166 push 0x11a160cc */
  push32((uint32_t)(0x11a160ccu));
  /* 11a1116b push 0x11a165f8 */
  push32((uint32_t)(0x11a165f8u));
  /* 11a11170 call esi */
  call_ind((uint32_t)(ESI), 0x11a11172u);
  /* 11a11172 push 0x11a160c4 */
  push32((uint32_t)(0x11a160c4u));
  /* 11a11177 push 0x11a16608 */
  push32((uint32_t)(0x11a16608u));
  /* 11a1117c call esi */
  call_ind((uint32_t)(ESI), 0x11a1117eu);
  /* 11a1117e push 0x11a160bc */
  push32((uint32_t)(0x11a160bcu));
  /* 11a11183 push 0x11a165e8 */
  push32((uint32_t)(0x11a165e8u));
  /* 11a11188 call esi */
  call_ind((uint32_t)(ESI), 0x11a1118au);
  /* 11a1118a push 0x11a160b4 */
  push32((uint32_t)(0x11a160b4u));
  /* 11a1118f push 0x11a165f0 */
  push32((uint32_t)(0x11a165f0u));
  /* 11a11194 call esi */
  call_ind((uint32_t)(ESI), 0x11a11196u);
  /* 11a11196 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11199 push 0x11a160ac */
  push32((uint32_t)(0x11a160acu));
  /* 11a1119e push 0x11a16610 */
  push32((uint32_t)(0x11a16610u));
  /* 11a111a3 call esi */
  call_ind((uint32_t)(ESI), 0x11a111a5u);
  /* 11a111a5 push 0x11a160a4 */
  push32((uint32_t)(0x11a160a4u));
  /* 11a111aa push 0x11a16520 */
  push32((uint32_t)(0x11a16520u));
  /* 11a111af call esi */
  call_ind((uint32_t)(ESI), 0x11a111b1u);
  /* 11a111b1 push 0x11a1609c */
  push32((uint32_t)(0x11a1609cu));
  /* 11a111b6 push 0x11a16528 */
  push32((uint32_t)(0x11a16528u));
  /* 11a111bb call esi */
  call_ind((uint32_t)(ESI), 0x11a111bdu);
  /* 11a111bd push 0x11a16094 */
  push32((uint32_t)(0x11a16094u));
  /* 11a111c2 push 0x11a16510 */
  push32((uint32_t)(0x11a16510u));
  /* 11a111c7 call esi */
  call_ind((uint32_t)(ESI), 0x11a111c9u);
  /* 11a111c9 push 0x11a1608c */
  push32((uint32_t)(0x11a1608cu));
  /* 11a111ce push 0x11a16518 */
  push32((uint32_t)(0x11a16518u));
  /* 11a111d3 call esi */
  call_ind((uint32_t)(ESI), 0x11a111d5u);
  /* 11a111d5 mov esi, dword ptr [0x11a15108] */
  ESI = (r32((uint32_t)(0x11a15108)));
  /* 11a111db push 0x11a16078 */
  push32((uint32_t)(0x11a16078u));
  /* 11a111e0 push 0x11a16550 */
  push32((uint32_t)(0x11a16550u));
  /* 11a111e5 call esi */
  call_ind((uint32_t)(ESI), 0x11a111e7u);
  /* 11a111e7 push 0x11a1606c */
  push32((uint32_t)(0x11a1606cu));
  /* 11a111ec push 0x11a16558 */
  push32((uint32_t)(0x11a16558u));
  /* 11a111f1 call esi */
  call_ind((uint32_t)(ESI), 0x11a111f3u);
  /* 11a111f3 push 0x11a1605c */
  push32((uint32_t)(0x11a1605cu));
  /* 11a111f8 push 0x11a16560 */
  push32((uint32_t)(0x11a16560u));
  /* 11a111fd call esi */
  call_ind((uint32_t)(ESI), 0x11a111ffu);
  /* 11a111ff mov esi, dword ptr [0x11a1510c] */
  ESI = (r32((uint32_t)(0x11a1510c)));
  /* 11a11205 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11208 push 0x11a16050 */
  push32((uint32_t)(0x11a16050u));
  /* 11a1120d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1120f call esi */
  call_ind((uint32_t)(ESI), 0x11a11211u);
  /* 11a11211 push 0x11a16050 */
  push32((uint32_t)(0x11a16050u));
  /* 11a11216 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a11218 call esi */
  call_ind((uint32_t)(ESI), 0x11a1121au);
  /* 11a1121a push 0x11a16048 */
  push32((uint32_t)(0x11a16048u));
  /* 11a1121f push 6 */
  push32((uint32_t)(0x6u));
  /* 11a11221 call esi */
  call_ind((uint32_t)(ESI), 0x11a11223u);
  /* 11a11223 mov esi, dword ptr [0x11a15104] */
  ESI = (r32((uint32_t)(0x11a15104)));
  /* 11a11229 push 0x11a16040 */
  push32((uint32_t)(0x11a16040u));
  /* 11a1122e push 0x11a16038 */
  push32((uint32_t)(0x11a16038u));
  /* 11a11233 call esi */
  call_ind((uint32_t)(ESI), 0x11a11235u);
  /* 11a11235 push 0x11a16040 */
  push32((uint32_t)(0x11a16040u));
  /* 11a1123a push 0x11a16030 */
  push32((uint32_t)(0x11a16030u));
  /* 11a1123f call esi */
  call_ind((uint32_t)(ESI), 0x11a11241u);
  /* 11a11241 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11244 pop esi */
  ESI = (pop32());
  /* 11a11245 ret  */
  ESPCHK(0x11a11000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11a11250 (1161 bytes, 408 insns) */
void f_11a11250(void) {
  FTRACE(0x11a11250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11250 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11251 push ebp */
  push32((uint32_t)(EBP));
  /* 11a11252 push esi */
  push32((uint32_t)(ESI));
  /* 11a11253 push edi */
  push32((uint32_t)(EDI));
  /* 11a11254 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11256 call dword ptr [0x11a150b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150b4))), 0x11a1125cu);
  /* 11a1125c mov ebx, dword ptr [0x11a150b8] */
  EBX = (r32((uint32_t)(0x11a150b8)));
  /* 11a11262 mov ebp, dword ptr [0x11a150b0] */
  EBP = (r32((uint32_t)(0x11a150b0)));
  /* 11a11268 mov edi, dword ptr [0x11a150c0] */
  EDI = (r32((uint32_t)(0x11a150c0)));
  /* 11a1126e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11271 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a11273 je 0x11a1148c */
  if (C.zf) goto L_11a1148c;
  /* 11a11279 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1127b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1127d call ebx */
  call_ind((uint32_t)(EBX), 0x11a1127fu);
  /* 11a1127f push 0x11a161d4 */
  push32((uint32_t)(0x11a161d4u));
  /* 11a11284 call ebp */
  call_ind((uint32_t)(EBP), 0x11a11286u);
  /* 11a11286 push 0x11a161cc */
  push32((uint32_t)(0x11a161ccu));
  /* 11a1128b call ebp */
  call_ind((uint32_t)(EBP), 0x11a1128du);
  /* 11a1128d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1128f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11291 push 0x11a16538 */
  push32((uint32_t)(0x11a16538u));
  /* 11a11296 call dword ptr [0x11a150c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150c4))), 0x11a1129cu);
  /* 11a1129c mov esi, dword ptr [0x11a150bc] */
  ESI = (r32((uint32_t)(0x11a150bc)));
  /* 11a112a2 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a112a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a112a6 call esi */
  call_ind((uint32_t)(ESI), 0x11a112a8u);
  /* 11a112a8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11a112aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a112ac call esi */
  call_ind((uint32_t)(ESI), 0x11a112aeu);
  /* 11a112ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11a112b0 push 0x11a16568 */
  push32((uint32_t)(0x11a16568u));
  /* 11a112b5 call edi */
  call_ind((uint32_t)(EDI), 0x11a112b7u);
  /* 11a112b7 mov esi, dword ptr [0x11a150cc] */
  ESI = (r32((uint32_t)(0x11a150cc)));
  /* 11a112bd push 4 */
  push32((uint32_t)(0x4u));
  /* 11a112bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11a112c1 call esi */
  call_ind((uint32_t)(ESI), 0x11a112c3u);
  /* 11a112c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a112c5 push 0x11a16568 */
  push32((uint32_t)(0x11a16568u));
  /* 11a112ca call edi */
  call_ind((uint32_t)(EDI), 0x11a112ccu);
  /* 11a112cc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a112cf push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11a112d4 push 0x11a16530 */
  push32((uint32_t)(0x11a16530u));
  /* 11a112d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a112db call dword ptr [0x11a150d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d0))), 0x11a112e1u);
  /* 11a112e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a112e3 push 0x11a16638 */
  push32((uint32_t)(0x11a16638u));
  /* 11a112e8 call edi */
  call_ind((uint32_t)(EDI), 0x11a112eau);
  /* 11a112ea push 4 */
  push32((uint32_t)(0x4u));
  /* 11a112ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11a112ee call esi */
  call_ind((uint32_t)(ESI), 0x11a112f0u);
  /* 11a112f0 mov esi, dword ptr [0x11a150c8] */
  ESI = (r32((uint32_t)(0x11a150c8)));
  /* 11a112f6 push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 11a112fb push 3 */
  push32((uint32_t)(0x3u));
  /* 11a112fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a112ff call esi */
  call_ind((uint32_t)(ESI), 0x11a11301u);
  /* 11a11301 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a11306 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11308 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1130a call esi */
  call_ind((uint32_t)(ESI), 0x11a1130cu);
  /* 11a1130c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a11311 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a11313 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11315 call esi */
  call_ind((uint32_t)(ESI), 0x11a11317u);
  /* 11a11317 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1131a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a1131f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a11321 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11323 call esi */
  call_ind((uint32_t)(ESI), 0x11a11325u);
  /* 11a11325 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a1132a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1132c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1132e call esi */
  call_ind((uint32_t)(ESI), 0x11a11330u);
  /* 11a11330 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a11335 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a11337 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11339 call esi */
  call_ind((uint32_t)(ESI), 0x11a1133bu);
  /* 11a1133b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1133d call dword ptr [0x11a150d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d8))), 0x11a11343u);
  /* 11a11343 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11348 jne 0x11a1138e */
  if (!C.zf) goto L_11a1138e;
  /* 11a1134a push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11a1134f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a11351 push eax */
  push32((uint32_t)(EAX));
  /* 11a11352 call esi */
  call_ind((uint32_t)(ESI), 0x11a11354u);
  /* 11a11354 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11a11359 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1135b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1135d call esi */
  call_ind((uint32_t)(ESI), 0x11a1135fu);
  /* 11a1135f push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11a11364 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a11366 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11368 call esi */
  call_ind((uint32_t)(ESI), 0x11a1136au);
  /* 11a1136a push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11a1136f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a11371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11373 call esi */
  call_ind((uint32_t)(ESI), 0x11a11375u);
  /* 11a11375 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11a1137a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1137c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1137e call esi */
  call_ind((uint32_t)(ESI), 0x11a11380u);
  /* 11a11380 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11a11385 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a11387 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11389 call esi */
  call_ind((uint32_t)(ESI), 0x11a1138bu);
  /* 11a1138b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a1138e:;
  /* 11a1138e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11390 call dword ptr [0x11a150d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d8))), 0x11a11396u);
  /* 11a11396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11399 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1139c jne 0x11a113e3 */
  if (!C.zf) goto L_11a113e3;
  /* 11a1139e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11a113a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a113a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113a7 call esi */
  call_ind((uint32_t)(ESI), 0x11a113a9u);
  /* 11a113a9 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11a113ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11a113b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113b2 call esi */
  call_ind((uint32_t)(ESI), 0x11a113b4u);
  /* 11a113b4 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11a113b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a113bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113bd call esi */
  call_ind((uint32_t)(ESI), 0x11a113bfu);
  /* 11a113bf push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11a113c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a113c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113c8 call esi */
  call_ind((uint32_t)(ESI), 0x11a113cau);
  /* 11a113ca push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11a113cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113d3 call esi */
  call_ind((uint32_t)(ESI), 0x11a113d5u);
  /* 11a113d5 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11a113da push 2 */
  push32((uint32_t)(0x2u));
  /* 11a113dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113de call esi */
  call_ind((uint32_t)(ESI), 0x11a113e0u);
  /* 11a113e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a113e3:;
  /* 11a113e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113e5 call dword ptr [0x11a150d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d8))), 0x11a113ebu);
  /* 11a113eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a113ee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a113f1 jne 0x11a11438 */
  if (!C.zf) goto L_11a11438;
  /* 11a113f3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a113f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a113fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a113fc call esi */
  call_ind((uint32_t)(ESI), 0x11a113feu);
  /* 11a113fe push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a11403 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11407 call esi */
  call_ind((uint32_t)(ESI), 0x11a11409u);
  /* 11a11409 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a1140e push 4 */
  push32((uint32_t)(0x4u));
  /* 11a11410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11412 call esi */
  call_ind((uint32_t)(ESI), 0x11a11414u);
  /* 11a11414 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a11419 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a1141b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1141d call esi */
  call_ind((uint32_t)(ESI), 0x11a1141fu);
  /* 11a1141f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11a11424 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11428 call esi */
  call_ind((uint32_t)(ESI), 0x11a1142au);
  /* 11a1142a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11a1142f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a11431 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11433 call esi */
  call_ind((uint32_t)(ESI), 0x11a11435u);
  /* 11a11435 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a11438:;
  /* 11a11438 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1143a call dword ptr [0x11a150d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d8))), 0x11a11440u);
  /* 11a11440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11443 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11446 jne 0x11a1148c */
  if (!C.zf) goto L_11a1148c;
  /* 11a11448 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11a1144d push eax */
  push32((uint32_t)(EAX));
  /* 11a1144e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11450 call esi */
  call_ind((uint32_t)(ESI), 0x11a11452u);
  /* 11a11452 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a11457 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11459 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1145b call esi */
  call_ind((uint32_t)(ESI), 0x11a1145du);
  /* 11a1145d push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11a11462 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a11464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11466 call esi */
  call_ind((uint32_t)(ESI), 0x11a11468u);
  /* 11a11468 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11a1146d push 5 */
  push32((uint32_t)(0x5u));
  /* 11a1146f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11471 call esi */
  call_ind((uint32_t)(ESI), 0x11a11473u);
  /* 11a11473 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a11478 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1147a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1147c call esi */
  call_ind((uint32_t)(ESI), 0x11a1147eu);
  /* 11a1147e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a11483 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a11485 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11487 call esi */
  call_ind((uint32_t)(ESI), 0x11a11489u);
  /* 11a11489 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a1148c:;
  /* 11a1148c mov esi, dword ptr [0x11a150dc] */
  ESI = (r32((uint32_t)(0x11a150dc)));
  /* 11a11492 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11494 push 0x11a16550 */
  push32((uint32_t)(0x11a16550u));
  /* 11a11499 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1149b call esi */
  call_ind((uint32_t)(ESI), 0x11a1149du);
  /* 11a1149d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1149f push 0x11a16558 */
  push32((uint32_t)(0x11a16558u));
  /* 11a114a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a114a6 call esi */
  call_ind((uint32_t)(ESI), 0x11a114a8u);
  /* 11a114a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a114aa push 0x11a16560 */
  push32((uint32_t)(0x11a16560u));
  /* 11a114af push 0 */
  push32((uint32_t)(0x0u));
  /* 11a114b1 call esi */
  call_ind((uint32_t)(ESI), 0x11a114b3u);
  /* 11a114b3 mov esi, dword ptr [0x11a150b4] */
  ESI = (r32((uint32_t)(0x11a150b4)));
  /* 11a114b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a114bb call esi */
  call_ind((uint32_t)(ESI), 0x11a114bdu);
  /* 11a114bd add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a114c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a114c2 je 0x11a114e9 */
  if (C.zf) goto L_11a114e9;
  /* 11a114c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a114c6 call dword ptr [0x11a150d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d4))), 0x11a114ccu);
  /* 11a114cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a114cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a114d1 je 0x11a114e9 */
  if (C.zf) goto L_11a114e9;
  /* 11a114d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a114d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a114d7 call ebx */
  call_ind((uint32_t)(EBX), 0x11a114d9u);
  /* 11a114d9 push 0x11a161c4 */
  push32((uint32_t)(0x11a161c4u));
  /* 11a114de call ebp */
  call_ind((uint32_t)(EBP), 0x11a114e0u);
  /* 11a114e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a114e3 call dword ptr [0x11a150e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150e4))), 0x11a114e9u);
L_11a114e9:;
  /* 11a114e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a114eb call esi */
  call_ind((uint32_t)(ESI), 0x11a114edu);
  /* 11a114ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a114f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a114f2 je 0x11a11519 */
  if (C.zf) goto L_11a11519;
  /* 11a114f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a114f6 call dword ptr [0x11a150d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150d4))), 0x11a114fcu);
  /* 11a114fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a114ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a11501 je 0x11a11519 */
  if (C.zf) goto L_11a11519;
  /* 11a11503 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11505 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a11507 call ebx */
  call_ind((uint32_t)(EBX), 0x11a11509u);
  /* 11a11509 push 0x11a161bc */
  push32((uint32_t)(0x11a161bcu));
  /* 11a1150e call ebp */
  call_ind((uint32_t)(EBP), 0x11a11510u);
  /* 11a11510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11513 call dword ptr [0x11a150e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150e8))), 0x11a11519u);
L_11a11519:;
  /* 11a11519 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a1151b call esi */
  call_ind((uint32_t)(ESI), 0x11a1151du);
  /* 11a1151d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11520 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a11522 je 0x11a115fb */
  if (C.zf) goto L_11a115fb;
  /* 11a11528 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a1152a push 0x11a16538 */
  push32((uint32_t)(0x11a16538u));
  /* 11a1152f call dword ptr [0x11a150e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150e0))), 0x11a11535u);
  /* 11a11535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1153a jne 0x11a115fb */
  if (!C.zf) goto L_11a115fb;
  /* 11a11540 push eax */
  push32((uint32_t)(EAX));
  /* 11a11541 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a11543 call ebx */
  call_ind((uint32_t)(EBX), 0x11a11545u);
  /* 11a11545 push 0x11a161b4 */
  push32((uint32_t)(0x11a161b4u));
  /* 11a1154a call ebp */
  call_ind((uint32_t)(EBP), 0x11a1154cu);
  /* 11a1154c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1154e push 0x11a16640 */
  push32((uint32_t)(0x11a16640u));
  /* 11a11553 call edi */
  call_ind((uint32_t)(EDI), 0x11a11555u);
  /* 11a11555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11557 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a11559 call dword ptr [0x11a150cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150cc))), 0x11a1155fu);
  /* 11a1155f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11561 push 0x11a16570 */
  push32((uint32_t)(0x11a16570u));
  /* 11a11566 call edi */
  call_ind((uint32_t)(EDI), 0x11a11568u);
  /* 11a11568 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1156a call dword ptr [0x11a150f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150f0))), 0x11a11570u);
  /* 11a11570 mov esi, dword ptr [0x11a150d8] */
  ESI = (r32((uint32_t)(0x11a150d8)));
  /* 11a11576 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11578 call esi */
  call_ind((uint32_t)(ESI), 0x11a1157au);
  /* 11a1157a mov ebp, dword ptr [0x11a150f4] */
  EBP = (r32((uint32_t)(0x11a150f4)));
  /* 11a11580 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11585 jne 0x11a1159b */
  if (!C.zf) goto L_11a1159b;
  /* 11a11587 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11589 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1158b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1158d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1158f push 0x11a161a8 */
  push32((uint32_t)(0x11a161a8u));
  /* 11a11594 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11596 call ebp */
  call_ind((uint32_t)(EBP), 0x11a11598u);
  /* 11a11598 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a1159b:;
  /* 11a1159b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1159d call esi */
  call_ind((uint32_t)(ESI), 0x11a1159fu);
  /* 11a1159f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a115a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a115a5 jne 0x11a115b7 */
  if (!C.zf) goto L_11a115b7;
  /* 11a115a7 push eax */
  push32((uint32_t)(EAX));
  /* 11a115a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a115a9 push eax */
  push32((uint32_t)(EAX));
  /* 11a115aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a115ac push 0x11a161a8 */
  push32((uint32_t)(0x11a161a8u));
  /* 11a115b1 push eax */
  push32((uint32_t)(EAX));
  /* 11a115b2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a115b4u);
  /* 11a115b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a115b7:;
  /* 11a115b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a115b9 call esi */
  call_ind((uint32_t)(ESI), 0x11a115bbu);
  /* 11a115bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a115be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a115c1 jne 0x11a115d6 */
  if (!C.zf) goto L_11a115d6;
  /* 11a115c3 push eax */
  push32((uint32_t)(EAX));
  /* 11a115c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a115c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a115c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a115ca push 0x11a161a8 */
  push32((uint32_t)(0x11a161a8u));
  /* 11a115cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11a115d1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a115d3u);
  /* 11a115d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a115d6:;
  /* 11a115d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a115d8 call esi */
  call_ind((uint32_t)(ESI), 0x11a115dau);
  /* 11a115da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a115dd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a115e0 jne 0x11a115f5 */
  if (!C.zf) goto L_11a115f5;
  /* 11a115e2 push eax */
  push32((uint32_t)(EAX));
  /* 11a115e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a115e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a115e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a115e9 push 0x11a161a8 */
  push32((uint32_t)(0x11a161a8u));
  /* 11a115ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11a115f0 call ebp */
  call_ind((uint32_t)(EBP), 0x11a115f2u);
  /* 11a115f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a115f5:;
  /* 11a115f5 mov esi, dword ptr [0x11a150b4] */
  ESI = (r32((uint32_t)(0x11a150b4)));
L_11a115fb:;
  /* 11a115fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11a115fd call esi */
  call_ind((uint32_t)(ESI), 0x11a115ffu);
  /* 11a115ff mov ebp, dword ptr [0x11a150ec] */
  EBP = (r32((uint32_t)(0x11a150ec)));
  /* 11a11605 mov esi, dword ptr [0x11a150fc] */
  ESI = (r32((uint32_t)(0x11a150fc)));
  /* 11a1160b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1160e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a11610 je 0x11a1166d */
  if (C.zf) goto L_11a1166d;
  /* 11a11612 push 0x11a16638 */
  push32((uint32_t)(0x11a16638u));
  /* 11a11617 push 0x11a16618 */
  push32((uint32_t)(0x11a16618u));
  /* 11a1161c call ebp */
  call_ind((uint32_t)(EBP), 0x11a1161eu);
  /* 11a1161e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11623 jle 0x11a1166d */
  if ((C.zf||C.sf!=C.of)) goto L_11a1166d;
  /* 11a11625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11627 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a11629 call ebx */
  call_ind((uint32_t)(EBX), 0x11a1162bu);
  /* 11a1162b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1162d push 0x11a16638 */
  push32((uint32_t)(0x11a16638u));
  /* 11a11632 call edi */
  call_ind((uint32_t)(EDI), 0x11a11634u);
  /* 11a11634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11636 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11638 push 0x11a16620 */
  push32((uint32_t)(0x11a16620u));
  /* 11a1163d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a1163f call esi */
  call_ind((uint32_t)(ESI), 0x11a11641u);
  /* 11a11641 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a11643 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11a11648 push 0x11a16628 */
  push32((uint32_t)(0x11a16628u));
  /* 11a1164d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a1164f call esi */
  call_ind((uint32_t)(ESI), 0x11a11651u);
  /* 11a11651 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a11653 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11a11658 push 0x11a16630 */
  push32((uint32_t)(0x11a16630u));
  /* 11a1165d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a1165f call esi */
  call_ind((uint32_t)(ESI), 0x11a11661u);
  /* 11a11661 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11664 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11666 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a11668 call ebx */
  call_ind((uint32_t)(EBX), 0x11a1166au);
  /* 11a1166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a1166d:;
  /* 11a1166d push 0xa */
  push32((uint32_t)(0xau));
  /* 11a1166f call dword ptr [0x11a150b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150b4))), 0x11a11675u);
  /* 11a11675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11678 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a1167a je 0x11a116d4 */
  if (C.zf) goto L_11a116d4;
  /* 11a1167c push 0x11a16638 */
  push32((uint32_t)(0x11a16638u));
  /* 11a11681 push 0x11a16630 */
  push32((uint32_t)(0x11a16630u));
  /* 11a11686 call ebp */
  call_ind((uint32_t)(EBP), 0x11a11688u);
  /* 11a11688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1168b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1168d jle 0x11a116d4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a116d4;
  /* 11a1168f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11691 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a11693 call ebx */
  call_ind((uint32_t)(EBX), 0x11a11695u);
  /* 11a11695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11697 push 0x11a16638 */
  push32((uint32_t)(0x11a16638u));
  /* 11a1169c call edi */
  call_ind((uint32_t)(EDI), 0x11a1169eu);
  /* 11a1169e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a116a0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a116a2 push 0x11a16628 */
  push32((uint32_t)(0x11a16628u));
  /* 11a116a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a116a9 call esi */
  call_ind((uint32_t)(ESI), 0x11a116abu);
  /* 11a116ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11a116ad push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11a116af push 0x11a16620 */
  push32((uint32_t)(0x11a16620u));
  /* 11a116b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a116b6 call esi */
  call_ind((uint32_t)(ESI), 0x11a116b8u);
  /* 11a116b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a116ba push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a116bf push 0x11a16618 */
  push32((uint32_t)(0x11a16618u));
  /* 11a116c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a116c6 call esi */
  call_ind((uint32_t)(ESI), 0x11a116c8u);
  /* 11a116c8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a116cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a116cd push 9 */
  push32((uint32_t)(0x9u));
  /* 11a116cf call ebx */
  call_ind((uint32_t)(EBX), 0x11a116d1u);
  /* 11a116d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a116d4:;
  /* 11a116d4 pop edi */
  EDI = (pop32());
  /* 11a116d5 pop esi */
  ESI = (pop32());
  /* 11a116d6 pop ebp */
  EBP = (pop32());
  /* 11a116d7 pop ebx */
  EBX = (pop32());
  /* 11a116d8 ret  */
  ESPCHK(0x11a11250u, _esp0);
  ESP += 4; return;
}

/* FUN_100016e0 @ 0x11a116e0 (20 bytes, 6 insns) */
void f_11a116e0(void) {
  FTRACE(0x11a116e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a116e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a116e4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a116e5 jne 0x11a116ec */
  if (!C.zf) goto L_11a116ec;
  /* 11a116e7 call 0x11a11000 */
  push32(0x11a116ecu); f_11a11000();
L_11a116ec:;
  /* 11a116ec mov eax, 1 */
  EAX = (0x1u);
  /* 11a116f1 ret 0xc */
  ESPCHK(0x11a116e0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001700 @ 0x11a11700 (217 bytes, 57 insns) */
void f_11a11700(void) {
  FTRACE(0x11a11700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a11704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11707 jne 0x11a11795 */
  if (!C.zf) goto L_11a11795;
  /* 11a1170d call dword ptr [0x11a15054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15054))), 0x11a11713u);
  /* 11a11713 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11715 mov dword ptr [0x11a1666c], eax */
  w32((uint32_t)(0x11a1666c), (EAX));
  /* 11a1171a call 0x11a12134 */
  push32(0x11a1171fu); f_11a12134();
  /* 11a1171f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11721 pop ecx */
  ECX = (pop32());
  /* 11a11722 je 0x11a11760 */
  if (C.zf) goto L_11a11760;
  /* 11a11724 mov eax, dword ptr [0x11a1666c] */
  EAX = (r32((uint32_t)(0x11a1666c)));
  /* 11a11729 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a1172b mov cl, byte ptr [0x11a1666d] */
  CL = (r8((uint32_t)(0x11a1666d)));
  /* 11a11731 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a11736 shr dword ptr [0x11a1666c], 0x10 */
  w32((uint32_t)(0x11a1666c), (sh_shr((uint32_t)(r32((uint32_t)(0x11a1666c))), (0x10u)&0x1f, 32)));
  /* 11a1173d mov dword ptr [0x11a16674], eax */
  w32((uint32_t)(0x11a16674), (EAX));
  /* 11a11742 mov dword ptr [0x11a16678], ecx */
  w32((uint32_t)(0x11a16678), (ECX));
  /* 11a11748 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a1174b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1174d mov dword ptr [0x11a16670], eax */
  w32((uint32_t)(0x11a16670), (EAX));
  /* 11a11752 call 0x11a119c7 */
  push32(0x11a11757u); f_11a119c7();
  /* 11a11757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11759 jne 0x11a11764 */
  if (!C.zf) goto L_11a11764;
  /* 11a1175b call 0x11a12170 */
  push32(0x11a11760u); f_11a12170();
L_11a11760:;
  /* 11a11760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a11762 jmp 0x11a117d6 */
  goto L_11a117d6;
L_11a11764:;
  /* 11a11764 call dword ptr [0x11a15050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15050))), 0x11a1176au);
  /* 11a1176a mov dword ptr [0x11a16bd8], eax */
  w32((uint32_t)(0x11a16bd8), (EAX));
  /* 11a1176f call 0x11a12002 */
  push32(0x11a11774u); f_11a12002();
  /* 11a11774 mov dword ptr [0x11a16658], eax */
  w32((uint32_t)(0x11a16658), (EAX));
  /* 11a11779 call 0x11a11aec */
  push32(0x11a1177eu); f_11a11aec();
  /* 11a1177e call 0x11a11db5 */
  push32(0x11a11783u); f_11a11db5();
  /* 11a11783 call 0x11a11cfc */
  push32(0x11a11788u); f_11a11cfc();
  /* 11a11788 call 0x11a118a9 */
  push32(0x11a1178du); f_11a118a9();
  /* 11a1178d inc dword ptr [0x11a16654] */
  { uint32_t _r=(r32((uint32_t)(0x11a16654)))+1; w32((uint32_t)(0x11a16654), (_r)); fl_inc(_r,32); }
  /* 11a11793 jmp 0x11a117d3 */
  goto L_11a117d3;
L_11a11795:;
  /* 11a11795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a11797 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11799 jne 0x11a117c7 */
  if (!C.zf) goto L_11a117c7;
  /* 11a1179b cmp dword ptr [0x11a16654], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a16654))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a117a1 jle 0x11a11760 */
  if ((C.zf||C.sf!=C.of)) goto L_11a11760;
  /* 11a117a3 dec dword ptr [0x11a16654] */
  { uint32_t _r=(r32((uint32_t)(0x11a16654)))-1; w32((uint32_t)(0x11a16654), (_r)); fl_dec(_r,32); }
  /* 11a117a9 cmp dword ptr [0x11a166a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a166a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a117af jne 0x11a117b6 */
  if (!C.zf) goto L_11a117b6;
  /* 11a117b1 call 0x11a118e7 */
  push32(0x11a117b6u); f_11a118e7();
L_11a117b6:;
  /* 11a117b6 call 0x11a11ca8 */
  push32(0x11a117bbu); f_11a11ca8();
  /* 11a117bb call 0x11a11a1b */
  push32(0x11a117c0u); f_11a11a1b();
  /* 11a117c0 call 0x11a12170 */
  push32(0x11a117c5u); f_11a12170();
  /* 11a117c5 jmp 0x11a117d3 */
  goto L_11a117d3;
L_11a117c7:;
  /* 11a117c7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a117ca jne 0x11a117d3 */
  if (!C.zf) goto L_11a117d3;
  /* 11a117cc push ecx */
  push32((uint32_t)(ECX));
  /* 11a117cd call 0x11a11a4c */
  push32(0x11a117d2u); f_11a11a4c();
  /* 11a117d2 pop ecx */
  ECX = (pop32());
L_11a117d3:;
  /* 11a117d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a117d5 pop eax */
  EAX = (pop32());
L_11a117d6:;
  /* 11a117d6 ret 0xc */
  ESPCHK(0x11a11700u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a117d9 (157 bytes, 73 insns) */
void f_11a117d9(void) {
  FTRACE(0x11a117d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a117d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a117da mov ebp, esp */
  EBP = (ESP);
  /* 11a117dc push ebx */
  push32((uint32_t)(EBX));
  /* 11a117dd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a117e0 push esi */
  push32((uint32_t)(ESI));
  /* 11a117e1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a117e4 push edi */
  push32((uint32_t)(EDI));
  /* 11a117e5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a117e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a117ea jne 0x11a117f5 */
  if (!C.zf) goto L_11a117f5;
  /* 11a117ec cmp dword ptr [0x11a16654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a16654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a117f3 jmp 0x11a1181b */
  goto L_11a1181b;
L_11a117f5:;
  /* 11a117f5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a117f8 je 0x11a117ff */
  if (C.zf) goto L_11a117ff;
  /* 11a117fa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a117fd jne 0x11a11821 */
  if (!C.zf) goto L_11a11821;
L_11a117ff:;
  /* 11a117ff mov eax, dword ptr [0x11a16bdc] */
  EAX = (r32((uint32_t)(0x11a16bdc)));
  /* 11a11804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11806 je 0x11a11811 */
  if (C.zf) goto L_11a11811;
  /* 11a11808 push edi */
  push32((uint32_t)(EDI));
  /* 11a11809 push esi */
  push32((uint32_t)(ESI));
  /* 11a1180a push ebx */
  push32((uint32_t)(EBX));
  /* 11a1180b call eax */
  call_ind((uint32_t)(EAX), 0x11a1180du);
  /* 11a1180d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1180f je 0x11a1181d */
  if (C.zf) goto L_11a1181d;
L_11a11811:;
  /* 11a11811 push edi */
  push32((uint32_t)(EDI));
  /* 11a11812 push esi */
  push32((uint32_t)(ESI));
  /* 11a11813 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11814 call 0x11a11700 */
  push32(0x11a11819u); f_11a11700();
  /* 11a11819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11a1181b:;
  /* 11a1181b jne 0x11a11821 */
  if (!C.zf) goto L_11a11821;
L_11a1181d:;
  /* 11a1181d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a1181f jmp 0x11a1186f */
  goto L_11a1186f;
L_11a11821:;
  /* 11a11821 push edi */
  push32((uint32_t)(EDI));
  /* 11a11822 push esi */
  push32((uint32_t)(ESI));
  /* 11a11823 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11824 call 0x11a116e0 */
  push32(0x11a11829u); f_11a116e0();
  /* 11a11829 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1182c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a1182f jne 0x11a1183d */
  if (!C.zf) goto L_11a1183d;
  /* 11a11831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11833 jne 0x11a1186c */
  if (!C.zf) goto L_11a1186c;
  /* 11a11835 push edi */
  push32((uint32_t)(EDI));
  /* 11a11836 push eax */
  push32((uint32_t)(EAX));
  /* 11a11837 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11838 call 0x11a11700 */
  push32(0x11a1183du); f_11a11700();
L_11a1183d:;
  /* 11a1183d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a1183f je 0x11a11846 */
  if (C.zf) goto L_11a11846;
  /* 11a11841 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11844 jne 0x11a1186c */
  if (!C.zf) goto L_11a1186c;
L_11a11846:;
  /* 11a11846 push edi */
  push32((uint32_t)(EDI));
  /* 11a11847 push esi */
  push32((uint32_t)(ESI));
  /* 11a11848 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11849 call 0x11a11700 */
  push32(0x11a1184eu); f_11a11700();
  /* 11a1184e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11850 jne 0x11a11855 */
  if (!C.zf) goto L_11a11855;
  /* 11a11852 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11a11855:;
  /* 11a11855 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11859 je 0x11a1186c */
  if (C.zf) goto L_11a1186c;
  /* 11a1185b mov eax, dword ptr [0x11a16bdc] */
  EAX = (r32((uint32_t)(0x11a16bdc)));
  /* 11a11860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11862 je 0x11a1186c */
  if (C.zf) goto L_11a1186c;
  /* 11a11864 push edi */
  push32((uint32_t)(EDI));
  /* 11a11865 push esi */
  push32((uint32_t)(ESI));
  /* 11a11866 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11867 call eax */
  call_ind((uint32_t)(EAX), 0x11a11869u);
  /* 11a11869 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a1186c:;
  /* 11a1186c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a1186f:;
  /* 11a1186f pop edi */
  EDI = (pop32());
  /* 11a11870 pop esi */
  ESI = (pop32());
  /* 11a11871 pop ebx */
  EBX = (pop32());
  /* 11a11872 pop ebp */
  EBP = (pop32());
  /* 11a11873 ret 0xc */
  ESPCHK(0x11a117d9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a11876 (48 bytes, 15 insns) */
void f_11a11876(void) {
  FTRACE(0x11a11876u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11876 mov eax, dword ptr [0x11a16660] */
  EAX = (r32((uint32_t)(0x11a16660)));
  /* 11a1187b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1187e je 0x11a1188d */
  if (C.zf) goto L_11a1188d;
  /* 11a11880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11882 jne 0x11a11892 */
  if (!C.zf) goto L_11a11892;
  /* 11a11884 cmp dword ptr [0x11a16664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a16664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1188b jne 0x11a11892 */
  if (!C.zf) goto L_11a11892;
L_11a1188d:;
  /* 11a1188d call 0x11a121e5 */
  push32(0x11a11892u); f_11a121e5();
L_11a11892:;
  /* 11a11892 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a11896 call 0x11a1221e */
  push32(0x11a1189bu); f_11a1221e();
  /* 11a1189b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a118a0 call dword ptr [0x11a161dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a161dc))), 0x11a118a6u);
  /* 11a118a6 pop ecx */
  ECX = (pop32());
  /* 11a118a7 pop ecx */
  ECX = (pop32());
  /* 11a118a8 ret  */
  ESPCHK(0x11a11876u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a9 @ 0x11a118a9 (45 bytes, 12 insns) */
void f_11a118a9(void) {
  FTRACE(0x11a118a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a118a9 mov eax, dword ptr [0x11a16bd4] */
  EAX = (r32((uint32_t)(0x11a16bd4)));
  /* 11a118ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a118b0 je 0x11a118b4 */
  if (C.zf) goto L_11a118b4;
  /* 11a118b2 call eax */
  call_ind((uint32_t)(EAX), 0x11a118b4u);
L_11a118b4:;
  /* 11a118b4 push 0x11a16010 */
  push32((uint32_t)(0x11a16010u));
  /* 11a118b9 push 0x11a16008 */
  push32((uint32_t)(0x11a16008u));
  /* 11a118be call 0x11a119ad */
  push32(0x11a118c3u); f_11a119ad();
  /* 11a118c3 push 0x11a16004 */
  push32((uint32_t)(0x11a16004u));
  /* 11a118c8 push 0x11a16000 */
  push32((uint32_t)(0x11a16000u));
  /* 11a118cd call 0x11a119ad */
  push32(0x11a118d2u); f_11a119ad();
  /* 11a118d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a118d5 ret  */
  ESPCHK(0x11a118a9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a118d6 (17 bytes, 6 insns) */
void f_11a118d6(void) {
  FTRACE(0x11a118d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a118d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a118d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a118da push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a118de call 0x11a118f6 */
  push32(0x11a118e3u); f_11a118f6();
  /* 11a118e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a118e6 ret  */
  ESPCHK(0x11a118d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100018e7 @ 0x11a118e7 (15 bytes, 6 insns) */
void f_11a118e7(void) {
  FTRACE(0x11a118e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a118e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a118e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a118eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a118ed call 0x11a118f6 */
  push32(0x11a118f2u); f_11a118f6();
  /* 11a118f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a118f5 ret  */
  ESPCHK(0x11a118e7u, _esp0);
  ESP += 4; return;
}

/* FUN_100018f6 @ 0x11a118f6 (163 bytes, 53 insns) */
void f_11a118f6(void) {
  FTRACE(0x11a118f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a118f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a118f7 call 0x11a1199b */
  push32(0x11a118fcu); f_11a1199b();
  /* 11a118fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a118fe pop edi */
  EDI = (pop32());
  /* 11a118ff cmp dword ptr [0x11a166a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a166a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11905 jne 0x11a11918 */
  if (!C.zf) goto L_11a11918;
  /* 11a11907 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a1190b call dword ptr [0x11a15060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15060))), 0x11a11911u);
  /* 11a11911 push eax */
  push32((uint32_t)(EAX));
  /* 11a11912 call dword ptr [0x11a1505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1505c))), 0x11a11918u);
L_11a11918:;
  /* 11a11918 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1191d push ebx */
  push32((uint32_t)(EBX));
  /* 11a1191e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a11922 mov dword ptr [0x11a166a4], edi */
  w32((uint32_t)(0x11a166a4), (EDI));
  /* 11a11928 mov byte ptr [0x11a166a0], bl */
  w8((uint32_t)(0x11a166a0), (BL));
  /* 11a1192e jne 0x11a1196c */
  if (!C.zf) goto L_11a1196c;
  /* 11a11930 mov eax, dword ptr [0x11a16bd0] */
  EAX = (r32((uint32_t)(0x11a16bd0)));
  /* 11a11935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11937 je 0x11a1195b */
  if (C.zf) goto L_11a1195b;
  /* 11a11939 mov ecx, dword ptr [0x11a16bcc] */
  ECX = (r32((uint32_t)(0x11a16bcc)));
  /* 11a1193f push esi */
  push32((uint32_t)(ESI));
  /* 11a11940 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11a11943 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11945 jb 0x11a1195a */
  if (C.cf) goto L_11a1195a;
L_11a11947:;
  /* 11a11947 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a11949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1194b je 0x11a1194f */
  if (C.zf) goto L_11a1194f;
  /* 11a1194d call eax */
  call_ind((uint32_t)(EAX), 0x11a1194fu);
L_11a1194f:;
  /* 11a1194f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a11952 cmp esi, dword ptr [0x11a16bd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a16bd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11958 jae 0x11a11947 */
  if (!C.cf) goto L_11a11947;
L_11a1195a:;
  /* 11a1195a pop esi */
  ESI = (pop32());
L_11a1195b:;
  /* 11a1195b push 0x11a16018 */
  push32((uint32_t)(0x11a16018u));
  /* 11a11960 push 0x11a16014 */
  push32((uint32_t)(0x11a16014u));
  /* 11a11965 call 0x11a119ad */
  push32(0x11a1196au); f_11a119ad();
  /* 11a1196a pop ecx */
  ECX = (pop32());
  /* 11a1196b pop ecx */
  ECX = (pop32());
L_11a1196c:;
  /* 11a1196c push 0x11a16020 */
  push32((uint32_t)(0x11a16020u));
  /* 11a11971 push 0x11a1601c */
  push32((uint32_t)(0x11a1601cu));
  /* 11a11976 call 0x11a119ad */
  push32(0x11a1197bu); f_11a119ad();
  /* 11a1197b pop ecx */
  ECX = (pop32());
  /* 11a1197c pop ecx */
  ECX = (pop32());
  /* 11a1197d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a1197f pop ebx */
  EBX = (pop32());
  /* 11a11980 je 0x11a11989 */
  if (C.zf) goto L_11a11989;
  /* 11a11982 call 0x11a119a4 */
  push32(0x11a11987u); f_11a119a4();
  /* 11a11987 pop edi */
  EDI = (pop32());
  /* 11a11988 ret  */
  ESPCHK(0x11a118f6u, _esp0);
  ESP += 4; return;
L_11a11989:;
  /* 11a11989 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a1198d mov dword ptr [0x11a166a8], edi */
  w32((uint32_t)(0x11a166a8), (EDI));
  /* 11a11993 call dword ptr [0x11a15058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15058))), 0x11a11999u);
  /* 11a11999 pop edi */
  EDI = (pop32());
  /* 11a1199a ret  */
  ESPCHK(0x11a118f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000199b @ 0x11a1199b (9 bytes, 4 insns) */
void f_11a1199b(void) {
  FTRACE(0x11a1199bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1199b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a1199d call 0x11a12406 */
  push32(0x11a119a2u); f_11a12406();
  /* 11a119a2 pop ecx */
  ECX = (pop32());
  /* 11a119a3 ret  */
  ESPCHK(0x11a1199bu, _esp0);
  ESP += 4; return;
}

/* FUN_100019a4 @ 0x11a119a4 (9 bytes, 4 insns) */
void f_11a119a4(void) {
  FTRACE(0x11a119a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a119a4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a119a6 call 0x11a12467 */
  push32(0x11a119abu); f_11a12467();
  /* 11a119ab pop ecx */
  ECX = (pop32());
  /* 11a119ac ret  */
  ESPCHK(0x11a119a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100019ad @ 0x11a119ad (26 bytes, 12 insns) */
void f_11a119ad(void) {
  FTRACE(0x11a119adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a119ad push esi */
  push32((uint32_t)(ESI));
  /* 11a119ae mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11a119b2:;
  /* 11a119b2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a119b6 jae 0x11a119c5 */
  if (!C.cf) goto L_11a119c5;
  /* 11a119b8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a119ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a119bc je 0x11a119c0 */
  if (C.zf) goto L_11a119c0;
  /* 11a119be call eax */
  call_ind((uint32_t)(EAX), 0x11a119c0u);
L_11a119c0:;
  /* 11a119c0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a119c3 jmp 0x11a119b2 */
  goto L_11a119b2;
L_11a119c5:;
  /* 11a119c5 pop esi */
  ESI = (pop32());
  /* 11a119c6 ret  */
  ESPCHK(0x11a119adu, _esp0);
  ESP += 4; return;
}

/* FUN_100019c7 @ 0x11a119c7 (84 bytes, 32 insns) */
void f_11a119c7(void) {
  FTRACE(0x11a119c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a119c7 push esi */
  push32((uint32_t)(ESI));
  /* 11a119c8 call 0x11a12371 */
  push32(0x11a119cdu); f_11a12371();
  /* 11a119cd call dword ptr [0x11a1506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1506c))), 0x11a119d3u);
  /* 11a119d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a119d6 mov dword ptr [0x11a161e0], eax */
  w32((uint32_t)(0x11a161e0), (EAX));
  /* 11a119db je 0x11a11a17 */
  if (C.zf) goto L_11a11a17;
  /* 11a119dd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a119df push 1 */
  push32((uint32_t)(0x1u));
  /* 11a119e1 call 0x11a1247c */
  push32(0x11a119e6u); f_11a1247c();
  /* 11a119e6 mov esi, eax */
  ESI = (EAX);
  /* 11a119e8 pop ecx */
  ECX = (pop32());
  /* 11a119e9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a119eb pop ecx */
  ECX = (pop32());
  /* 11a119ec je 0x11a11a17 */
  if (C.zf) goto L_11a11a17;
  /* 11a119ee push esi */
  push32((uint32_t)(ESI));
  /* 11a119ef push dword ptr [0x11a161e0] */
  push32((uint32_t)(r32((uint32_t)(0x11a161e0))));
  /* 11a119f5 call dword ptr [0x11a15068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15068))), 0x11a119fbu);
  /* 11a119fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a119fd je 0x11a11a17 */
  if (C.zf) goto L_11a11a17;
  /* 11a119ff push esi */
  push32((uint32_t)(ESI));
  /* 11a11a00 call 0x11a11a39 */
  push32(0x11a11a05u); f_11a11a39();
  /* 11a11a05 pop ecx */
  ECX = (pop32());
  /* 11a11a06 call dword ptr [0x11a15064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15064))), 0x11a11a0cu);
  /* 11a11a0c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a11a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a11a12 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a11a14 pop eax */
  EAX = (pop32());
  /* 11a11a15 pop esi */
  ESI = (pop32());
  /* 11a11a16 ret  */
  ESPCHK(0x11a119c7u, _esp0);
  ESP += 4; return;
L_11a11a17:;
  /* 11a11a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a11a19 pop esi */
  ESI = (pop32());
  /* 11a11a1a ret  */
  ESPCHK(0x11a119c7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a1b @ 0x11a11a1b (30 bytes, 8 insns) */
void f_11a11a1b(void) {
  FTRACE(0x11a11a1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11a1b call 0x11a1239a */
  push32(0x11a11a20u); f_11a1239a();
  /* 11a11a20 mov eax, dword ptr [0x11a161e0] */
  EAX = (r32((uint32_t)(0x11a161e0)));
  /* 11a11a25 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11a28 je 0x11a11a38 */
  if (C.zf) goto L_11a11a38;
  /* 11a11a2a push eax */
  push32((uint32_t)(EAX));
  /* 11a11a2b call dword ptr [0x11a15070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15070))), 0x11a11a31u);
  /* 11a11a31 or dword ptr [0x11a161e0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a161e0)))|(0xffffffffu); w32((uint32_t)(0x11a161e0), (_r)); fl_logic(_r,32); }
L_11a11a38:;
  /* 11a11a38 ret  */
  ESPCHK(0x11a11a1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001a39 @ 0x11a11a39 (19 bytes, 4 insns) */
void f_11a11a39(void) {
  FTRACE(0x11a11a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11a39 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a11a3d mov dword ptr [eax + 0x50], 0x11a16360 */
  w32((uint32_t)(EAX + 0x50), (0x11a16360u));
  /* 11a11a44 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11a11a4b ret  */
  ESPCHK(0x11a11a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a4c @ 0x11a11a4c (160 bytes, 62 insns) */
void f_11a11a4c(void) {
  FTRACE(0x11a11a4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11a4c mov eax, dword ptr [0x11a161e0] */
  EAX = (r32((uint32_t)(0x11a161e0)));
  /* 11a11a51 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11a54 je 0x11a11aeb */
  if (C.zf) goto L_11a11aeb;
  /* 11a11a5a push esi */
  push32((uint32_t)(ESI));
  /* 11a11a5b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a11a5f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11a61 jne 0x11a11a70 */
  if (!C.zf) goto L_11a11a70;
  /* 11a11a63 push eax */
  push32((uint32_t)(EAX));
  /* 11a11a64 call dword ptr [0x11a15074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15074))), 0x11a11a6au);
  /* 11a11a6a mov esi, eax */
  ESI = (EAX);
  /* 11a11a6c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11a6e je 0x11a11adc */
  if (C.zf) goto L_11a11adc;
L_11a11a70:;
  /* 11a11a70 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11a11a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11a75 je 0x11a11a7e */
  if (C.zf) goto L_11a11a7e;
  /* 11a11a77 push eax */
  push32((uint32_t)(EAX));
  /* 11a11a78 call 0x11a12509 */
  push32(0x11a11a7du); f_11a12509();
  /* 11a11a7d pop ecx */
  ECX = (pop32());
L_11a11a7e:;
  /* 11a11a7e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11a11a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11a83 je 0x11a11a8c */
  if (C.zf) goto L_11a11a8c;
  /* 11a11a85 push eax */
  push32((uint32_t)(EAX));
  /* 11a11a86 call 0x11a12509 */
  push32(0x11a11a8bu); f_11a12509();
  /* 11a11a8b pop ecx */
  ECX = (pop32());
L_11a11a8c:;
  /* 11a11a8c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11a11a8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11a91 je 0x11a11a9a */
  if (C.zf) goto L_11a11a9a;
  /* 11a11a93 push eax */
  push32((uint32_t)(EAX));
  /* 11a11a94 call 0x11a12509 */
  push32(0x11a11a99u); f_11a12509();
  /* 11a11a99 pop ecx */
  ECX = (pop32());
L_11a11a9a:;
  /* 11a11a9a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a11a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11a9f je 0x11a11aa8 */
  if (C.zf) goto L_11a11aa8;
  /* 11a11aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11a11aa2 call 0x11a12509 */
  push32(0x11a11aa7u); f_11a12509();
  /* 11a11aa7 pop ecx */
  ECX = (pop32());
L_11a11aa8:;
  /* 11a11aa8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11a11aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11aad je 0x11a11ab6 */
  if (C.zf) goto L_11a11ab6;
  /* 11a11aaf push eax */
  push32((uint32_t)(EAX));
  /* 11a11ab0 call 0x11a12509 */
  push32(0x11a11ab5u); f_11a12509();
  /* 11a11ab5 pop ecx */
  ECX = (pop32());
L_11a11ab6:;
  /* 11a11ab6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a11ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11abb je 0x11a11ac4 */
  if (C.zf) goto L_11a11ac4;
  /* 11a11abd push eax */
  push32((uint32_t)(EAX));
  /* 11a11abe call 0x11a12509 */
  push32(0x11a11ac3u); f_11a12509();
  /* 11a11ac3 pop ecx */
  ECX = (pop32());
L_11a11ac4:;
  /* 11a11ac4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11a11ac7 cmp eax, 0x11a16360 */
  { uint32_t _a=(EAX),_b=(0x11a16360u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11acc je 0x11a11ad5 */
  if (C.zf) goto L_11a11ad5;
  /* 11a11ace push eax */
  push32((uint32_t)(EAX));
  /* 11a11acf call 0x11a12509 */
  push32(0x11a11ad4u); f_11a12509();
  /* 11a11ad4 pop ecx */
  ECX = (pop32());
L_11a11ad5:;
  /* 11a11ad5 push esi */
  push32((uint32_t)(ESI));
  /* 11a11ad6 call 0x11a12509 */
  push32(0x11a11adbu); f_11a12509();
  /* 11a11adb pop ecx */
  ECX = (pop32());
L_11a11adc:;
  /* 11a11adc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a11ade push dword ptr [0x11a161e0] */
  push32((uint32_t)(r32((uint32_t)(0x11a161e0))));
  /* 11a11ae4 call dword ptr [0x11a15068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15068))), 0x11a11aeau);
  /* 11a11aea pop esi */
  ESI = (pop32());
L_11a11aeb:;
  /* 11a11aeb ret  */
  ESPCHK(0x11a11a4cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001aec @ 0x11a11aec (444 bytes, 150 insns) */
void f_11a11aec(void) {
  FTRACE(0x11a11aecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11aec push ebp */
  push32((uint32_t)(EBP));
  /* 11a11aed mov ebp, esp */
  EBP = (ESP);
  /* 11a11aef sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a11af2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11af3 push esi */
  push32((uint32_t)(ESI));
  /* 11a11af4 push edi */
  push32((uint32_t)(EDI));
  /* 11a11af5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a11afa call 0x11a12551 */
  push32(0x11a11affu); f_11a12551();
  /* 11a11aff mov esi, eax */
  ESI = (EAX);
  /* 11a11b01 pop ecx */
  ECX = (pop32());
  /* 11a11b02 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11b04 jne 0x11a11b0e */
  if (!C.zf) goto L_11a11b0e;
  /* 11a11b06 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a11b08 call 0x11a11876 */
  push32(0x11a11b0du); f_11a11876();
  /* 11a11b0d pop ecx */
  ECX = (pop32());
L_11a11b0e:;
  /* 11a11b0e mov dword ptr [0x11a16ac0], esi */
  w32((uint32_t)(0x11a16ac0), (ESI));
  /* 11a11b14 mov dword ptr [0x11a16bc0], 0x20 */
  w32((uint32_t)(0x11a16bc0), (0x20u));
  /* 11a11b1e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a11b24:;
  /* 11a11b24 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11b26 jae 0x11a11b46 */
  if (!C.cf) goto L_11a11b46;
  /* 11a11b28 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a11b2c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a11b2f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a11b33 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11a11b37 mov eax, dword ptr [0x11a16ac0] */
  EAX = (r32((uint32_t)(0x11a16ac0)));
  /* 11a11b3c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11b3f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11b44 jmp 0x11a11b24 */
  goto L_11a11b24;
L_11a11b46:;
  /* 11a11b46 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11a11b49 push eax */
  push32((uint32_t)(EAX));
  /* 11a11b4a call dword ptr [0x11a15088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15088))), 0x11a11b50u);
  /* 11a11b50 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a11b55 je 0x11a11c2c */
  if (C.zf) goto L_11a11c2c;
  /* 11a11b5b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a11b5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11b60 je 0x11a11c2c */
  if (C.zf) goto L_11a11c2c;
  /* 11a11b66 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11a11b68 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11a11b6b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11a11b6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a11b71 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11a11b76 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11b78 jl 0x11a11b7c */
  if ((C.sf!=C.of)) goto L_11a11b7c;
  /* 11a11b7a mov edi, eax */
  EDI = (EAX);
L_11a11b7c:;
  /* 11a11b7c cmp dword ptr [0x11a16bc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a16bc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11b82 jge 0x11a11bda */
  if ((C.sf==C.of)) goto L_11a11bda;
  /* 11a11b84 mov esi, 0x11a16ac4 */
  ESI = (0x11a16ac4u);
L_11a11b89:;
  /* 11a11b89 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a11b8e call 0x11a12551 */
  push32(0x11a11b93u); f_11a12551();
  /* 11a11b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11b95 pop ecx */
  ECX = (pop32());
  /* 11a11b96 je 0x11a11bd4 */
  if (C.zf) goto L_11a11bd4;
  /* 11a11b98 add dword ptr [0x11a16bc0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a16bc0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a16bc0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a11b9f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a11ba1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11a11ba7:;
  /* 11a11ba7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11ba9 jae 0x11a11bc7 */
  if (!C.cf) goto L_11a11bc7;
  /* 11a11bab and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a11baf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a11bb2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a11bb6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a11bba mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a11bbc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11bbf add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11bc5 jmp 0x11a11ba7 */
  goto L_11a11ba7;
L_11a11bc7:;
  /* 11a11bc7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11bca cmp dword ptr [0x11a16bc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a16bc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11bd0 jl 0x11a11b89 */
  if ((C.sf!=C.of)) goto L_11a11b89;
  /* 11a11bd2 jmp 0x11a11bda */
  goto L_11a11bda;
L_11a11bd4:;
  /* 11a11bd4 mov edi, dword ptr [0x11a16bc0] */
  EDI = (r32((uint32_t)(0x11a16bc0)));
L_11a11bda:;
  /* 11a11bda xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a11bdc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a11bde jle 0x11a11c2c */
  if ((C.zf||C.sf!=C.of)) goto L_11a11c2c;
L_11a11be0:;
  /* 11a11be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a11be3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a11be5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11be8 je 0x11a11c22 */
  if (C.zf) goto L_11a11c22;
  /* 11a11bea mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11a11bec test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a11bee je 0x11a11c22 */
  if (C.zf) goto L_11a11c22;
  /* 11a11bf0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a11bf2 jne 0x11a11bff */
  if (!C.zf) goto L_11a11bff;
  /* 11a11bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a11bf5 call dword ptr [0x11a15084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15084))), 0x11a11bfbu);
  /* 11a11bfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11bfd je 0x11a11c22 */
  if (C.zf) goto L_11a11c22;
L_11a11bff:;
  /* 11a11bff mov ecx, esi */
  ECX = (ESI);
  /* 11a11c01 mov eax, esi */
  EAX = (ESI);
  /* 11a11c03 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a11c06 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a11c09 mov ecx, dword ptr [ecx*4 + 0x11a16ac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a16ac0)));
  /* 11a11c10 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a11c13 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a11c16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a11c19 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a11c1b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a11c1d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11a11c1f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11a11c22:;
  /* 11a11c22 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a11c26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a11c27 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a11c28 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11c2a jl 0x11a11be0 */
  if ((C.sf!=C.of)) goto L_11a11be0;
L_11a11c2c:;
  /* 11a11c2c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a11c2e:;
  /* 11a11c2e mov ecx, dword ptr [0x11a16ac0] */
  ECX = (r32((uint32_t)(0x11a16ac0)));
  /* 11a11c34 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11a11c37 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11c3b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a11c3e jne 0x11a11c8d */
  if (!C.zf) goto L_11a11c8d;
  /* 11a11c40 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a11c42 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11a11c46 jne 0x11a11c4d */
  if (!C.zf) goto L_11a11c4d;
  /* 11a11c48 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a11c4a pop eax */
  EAX = (pop32());
  /* 11a11c4b jmp 0x11a11c57 */
  goto L_11a11c57;
L_11a11c4d:;
  /* 11a11c4d mov eax, ebx */
  EAX = (EBX);
  /* 11a11c4f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a11c50 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a11c52 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a11c54 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a11c57:;
  /* 11a11c57 push eax */
  push32((uint32_t)(EAX));
  /* 11a11c58 call dword ptr [0x11a15080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15080))), 0x11a11c5eu);
  /* 11a11c5e mov edi, eax */
  EDI = (EAX);
  /* 11a11c60 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11c63 je 0x11a11c7c */
  if (C.zf) goto L_11a11c7c;
  /* 11a11c65 push edi */
  push32((uint32_t)(EDI));
  /* 11a11c66 call dword ptr [0x11a15084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15084))), 0x11a11c6cu);
  /* 11a11c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11c6e je 0x11a11c7c */
  if (C.zf) goto L_11a11c7c;
  /* 11a11c70 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a11c75 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a11c77 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11c7a jne 0x11a11c82 */
  if (!C.zf) goto L_11a11c82;
L_11a11c7c:;
  /* 11a11c7c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a11c80 jmp 0x11a11c91 */
  goto L_11a11c91;
L_11a11c82:;
  /* 11a11c82 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11c85 jne 0x11a11c91 */
  if (!C.zf) goto L_11a11c91;
  /* 11a11c87 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a11c8b jmp 0x11a11c91 */
  goto L_11a11c91;
L_11a11c8d:;
  /* 11a11c8d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11a11c91:;
  /* 11a11c91 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a11c92 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11c95 jl 0x11a11c2e */
  if ((C.sf!=C.of)) goto L_11a11c2e;
  /* 11a11c97 push dword ptr [0x11a16bc0] */
  push32((uint32_t)(r32((uint32_t)(0x11a16bc0))));
  /* 11a11c9d call dword ptr [0x11a15000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15000))), 0x11a11ca3u);
  /* 11a11ca3 pop edi */
  EDI = (pop32());
  /* 11a11ca4 pop esi */
  ESI = (pop32());
  /* 11a11ca5 pop ebx */
  EBX = (pop32());
  /* 11a11ca6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a11ca7 ret  */
  ESPCHK(0x11a11aecu, _esp0);
  ESP += 4; return;
}

/* FUN_10001ca8 @ 0x11a11ca8 (84 bytes, 33 insns) */
void f_11a11ca8(void) {
  FTRACE(0x11a11ca8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11ca8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11ca9 push esi */
  push32((uint32_t)(ESI));
  /* 11a11caa push edi */
  push32((uint32_t)(EDI));
  /* 11a11cab mov esi, 0x11a16ac0 */
  ESI = (0x11a16ac0u);
L_11a11cb0:;
  /* 11a11cb0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a11cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a11cb4 je 0x11a11ced */
  if (C.zf) goto L_11a11ced;
  /* 11a11cb6 mov edi, eax */
  EDI = (EAX);
  /* 11a11cb8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11cbd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11cbf jae 0x11a11ce2 */
  if (!C.cf) goto L_11a11ce2;
  /* 11a11cc1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11a11cc4:;
  /* 11a11cc4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11cc8 je 0x11a11cd1 */
  if (C.zf) goto L_11a11cd1;
  /* 11a11cca push ebx */
  push32((uint32_t)(EBX));
  /* 11a11ccb call dword ptr [0x11a1508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1508c))), 0x11a11cd1u);
L_11a11cd1:;
  /* 11a11cd1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a11cd3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11cd6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11cdb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11cde cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11ce0 jb 0x11a11cc4 */
  if (C.cf) goto L_11a11cc4;
L_11a11ce2:;
  /* 11a11ce2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a11ce4 call 0x11a12509 */
  push32(0x11a11ce9u); f_11a12509();
  /* 11a11ce9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a11cec pop ecx */
  ECX = (pop32());
L_11a11ced:;
  /* 11a11ced add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11cf0 cmp esi, 0x11a16bc0 */
  { uint32_t _a=(ESI),_b=(0x11a16bc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11cf6 jl 0x11a11cb0 */
  if ((C.sf!=C.of)) goto L_11a11cb0;
  /* 11a11cf8 pop edi */
  EDI = (pop32());
  /* 11a11cf9 pop esi */
  ESI = (pop32());
  /* 11a11cfa pop ebx */
  EBX = (pop32());
  /* 11a11cfb ret  */
  ESPCHK(0x11a11ca8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cfc @ 0x11a11cfc (185 bytes, 71 insns) */
void f_11a11cfc(void) {
  FTRACE(0x11a11cfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11cfc push ebx */
  push32((uint32_t)(EBX));
  /* 11a11cfd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a11cff cmp dword ptr [0x11a16bc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a16bc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11d05 push esi */
  push32((uint32_t)(ESI));
  /* 11a11d06 push edi */
  push32((uint32_t)(EDI));
  /* 11a11d07 jne 0x11a11d0e */
  if (!C.zf) goto L_11a11d0e;
  /* 11a11d09 call 0x11a12b23 */
  push32(0x11a11d0eu); f_11a12b23();
L_11a11d0e:;
  /* 11a11d0e mov esi, dword ptr [0x11a16658] */
  ESI = (r32((uint32_t)(0x11a16658)));
  /* 11a11d14 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a11d16:;
  /* 11a11d16 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a11d18 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11d1a je 0x11a11d2e */
  if (C.zf) goto L_11a11d2e;
  /* 11a11d1c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11d1e je 0x11a11d21 */
  if (C.zf) goto L_11a11d21;
  /* 11a11d20 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a11d21:;
  /* 11a11d21 push esi */
  push32((uint32_t)(ESI));
  /* 11a11d22 call 0x11a126d0 */
  push32(0x11a11d27u); f_11a126d0();
  /* 11a11d27 pop ecx */
  ECX = (pop32());
  /* 11a11d28 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11a11d2c jmp 0x11a11d16 */
  goto L_11a11d16;
L_11a11d2e:;
  /* 11a11d2e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11a11d35 push eax */
  push32((uint32_t)(EAX));
  /* 11a11d36 call 0x11a12551 */
  push32(0x11a11d3bu); f_11a12551();
  /* 11a11d3b mov esi, eax */
  ESI = (EAX);
  /* 11a11d3d pop ecx */
  ECX = (pop32());
  /* 11a11d3e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11d40 mov dword ptr [0x11a16688], esi */
  w32((uint32_t)(0x11a16688), (ESI));
  /* 11a11d46 jne 0x11a11d50 */
  if (!C.zf) goto L_11a11d50;
  /* 11a11d48 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a11d4a call 0x11a11876 */
  push32(0x11a11d4fu); f_11a11876();
  /* 11a11d4f pop ecx */
  ECX = (pop32());
L_11a11d50:;
  /* 11a11d50 mov edi, dword ptr [0x11a16658] */
  EDI = (r32((uint32_t)(0x11a16658)));
  /* 11a11d56 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11d58 je 0x11a11d93 */
  if (C.zf) goto L_11a11d93;
  /* 11a11d5a push ebp */
  push32((uint32_t)(EBP));
L_11a11d5b:;
  /* 11a11d5b push edi */
  push32((uint32_t)(EDI));
  /* 11a11d5c call 0x11a126d0 */
  push32(0x11a11d61u); f_11a126d0();
  /* 11a11d61 mov ebp, eax */
  EBP = (EAX);
  /* 11a11d63 pop ecx */
  ECX = (pop32());
  /* 11a11d64 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a11d65 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11d68 je 0x11a11d8c */
  if (C.zf) goto L_11a11d8c;
  /* 11a11d6a push ebp */
  push32((uint32_t)(EBP));
  /* 11a11d6b call 0x11a12551 */
  push32(0x11a11d70u); f_11a12551();
  /* 11a11d70 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11d72 pop ecx */
  ECX = (pop32());
  /* 11a11d73 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a11d75 jne 0x11a11d7f */
  if (!C.zf) goto L_11a11d7f;
  /* 11a11d77 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a11d79 call 0x11a11876 */
  push32(0x11a11d7eu); f_11a11876();
  /* 11a11d7e pop ecx */
  ECX = (pop32());
L_11a11d7f:;
  /* 11a11d7f push edi */
  push32((uint32_t)(EDI));
  /* 11a11d80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a11d82 call 0x11a125e0 */
  push32(0x11a11d87u); f_11a125e0();
  /* 11a11d87 pop ecx */
  ECX = (pop32());
  /* 11a11d88 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11d8b pop ecx */
  ECX = (pop32());
L_11a11d8c:;
  /* 11a11d8c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11d8e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11d90 jne 0x11a11d5b */
  if (!C.zf) goto L_11a11d5b;
  /* 11a11d92 pop ebp */
  EBP = (pop32());
L_11a11d93:;
  /* 11a11d93 push dword ptr [0x11a16658] */
  push32((uint32_t)(r32((uint32_t)(0x11a16658))));
  /* 11a11d99 call 0x11a12509 */
  push32(0x11a11d9eu); f_11a12509();
  /* 11a11d9e pop ecx */
  ECX = (pop32());
  /* 11a11d9f mov dword ptr [0x11a16658], ebx */
  w32((uint32_t)(0x11a16658), (EBX));
  /* 11a11da5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11a11da7 pop edi */
  EDI = (pop32());
  /* 11a11da8 pop esi */
  ESI = (pop32());
  /* 11a11da9 mov dword ptr [0x11a16bc4], 1 */
  w32((uint32_t)(0x11a16bc4), (0x1u));
  /* 11a11db3 pop ebx */
  EBX = (pop32());
  /* 11a11db4 ret  */
  ESPCHK(0x11a11cfcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001db5 @ 0x11a11db5 (153 bytes, 62 insns) */
void f_11a11db5(void) {
  FTRACE(0x11a11db5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11db5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a11db6 mov ebp, esp */
  EBP = (ESP);
  /* 11a11db8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a11db9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a11dba push ebx */
  push32((uint32_t)(EBX));
  /* 11a11dbb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a11dbd cmp dword ptr [0x11a16bc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a16bc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11dc3 push esi */
  push32((uint32_t)(ESI));
  /* 11a11dc4 push edi */
  push32((uint32_t)(EDI));
  /* 11a11dc5 jne 0x11a11dcc */
  if (!C.zf) goto L_11a11dcc;
  /* 11a11dc7 call 0x11a12b23 */
  push32(0x11a11dccu); f_11a12b23();
L_11a11dcc:;
  /* 11a11dcc mov esi, 0x11a166ac */
  ESI = (0x11a166acu);
  /* 11a11dd1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a11dd6 push esi */
  push32((uint32_t)(ESI));
  /* 11a11dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11dd8 call dword ptr [0x11a15090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15090))), 0x11a11ddeu);
  /* 11a11dde mov eax, dword ptr [0x11a16bd8] */
  EAX = (r32((uint32_t)(0x11a16bd8)));
  /* 11a11de3 mov dword ptr [0x11a16698], esi */
  w32((uint32_t)(0x11a16698), (ESI));
  /* 11a11de9 mov edi, esi */
  EDI = (ESI);
  /* 11a11deb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11ded je 0x11a11df1 */
  if (C.zf) goto L_11a11df1;
  /* 11a11def mov edi, eax */
  EDI = (EAX);
L_11a11df1:;
  /* 11a11df1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a11df4 push eax */
  push32((uint32_t)(EAX));
  /* 11a11df5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a11df8 push eax */
  push32((uint32_t)(EAX));
  /* 11a11df9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11dfa push ebx */
  push32((uint32_t)(EBX));
  /* 11a11dfb push edi */
  push32((uint32_t)(EDI));
  /* 11a11dfc call 0x11a11e4e */
  push32(0x11a11e01u); f_11a11e4e();
  /* 11a11e01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a11e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a11e07 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11a11e0a push eax */
  push32((uint32_t)(EAX));
  /* 11a11e0b call 0x11a12551 */
  push32(0x11a11e10u); f_11a12551();
  /* 11a11e10 mov esi, eax */
  ESI = (EAX);
  /* 11a11e12 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11e15 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11e17 jne 0x11a11e21 */
  if (!C.zf) goto L_11a11e21;
  /* 11a11e19 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a11e1b call 0x11a11876 */
  push32(0x11a11e20u); f_11a11876();
  /* 11a11e20 pop ecx */
  ECX = (pop32());
L_11a11e21:;
  /* 11a11e21 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a11e24 push eax */
  push32((uint32_t)(EAX));
  /* 11a11e25 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a11e28 push eax */
  push32((uint32_t)(EAX));
  /* 11a11e29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a11e2c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11a11e2f push eax */
  push32((uint32_t)(EAX));
  /* 11a11e30 push esi */
  push32((uint32_t)(ESI));
  /* 11a11e31 push edi */
  push32((uint32_t)(EDI));
  /* 11a11e32 call 0x11a11e4e */
  push32(0x11a11e37u); f_11a11e4e();
  /* 11a11e37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a11e3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11e3d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a11e3e mov dword ptr [0x11a16680], esi */
  w32((uint32_t)(0x11a16680), (ESI));
  /* 11a11e44 pop edi */
  EDI = (pop32());
  /* 11a11e45 pop esi */
  ESI = (pop32());
  /* 11a11e46 mov dword ptr [0x11a1667c], eax */
  w32((uint32_t)(0x11a1667c), (EAX));
  /* 11a11e4b pop ebx */
  EBX = (pop32());
  /* 11a11e4c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a11e4d ret  */
  ESPCHK(0x11a11db5u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e4e @ 0x11a11e4e (436 bytes, 187 insns) */
void f_11a11e4e(void) {
  FTRACE(0x11a11e4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a11e4e push ebp */
  push32((uint32_t)(EBP));
  /* 11a11e4f mov ebp, esp */
  EBP = (ESP);
  /* 11a11e51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a11e54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a11e57 push ebx */
  push32((uint32_t)(EBX));
  /* 11a11e58 push esi */
  push32((uint32_t)(ESI));
  /* 11a11e59 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a11e5c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a11e5f push edi */
  push32((uint32_t)(EDI));
  /* 11a11e60 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a11e63 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11a11e69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a11e6c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a11e6e je 0x11a11e78 */
  if (C.zf) goto L_11a11e78;
  /* 11a11e70 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a11e72 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11e75 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a11e78:;
  /* 11a11e78 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11e7b jne 0x11a11ec1 */
  if (!C.zf) goto L_11a11ec1;
L_11a11e7d:;
  /* 11a11e7d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a11e80 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11e81 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11e84 je 0x11a11eaf */
  if (C.zf) goto L_11a11eaf;
  /* 11a11e86 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a11e88 je 0x11a11eaf */
  if (C.zf) goto L_11a11eaf;
  /* 11a11e8a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a11e8d test byte ptr [edx + 0x11a169a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a169a1)))&(0x4u); fl_logic(_r,8); }
  /* 11a11e94 je 0x11a11ea2 */
  if (C.zf) goto L_11a11ea2;
  /* 11a11e96 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11e98 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11e9a je 0x11a11ea2 */
  if (C.zf) goto L_11a11ea2;
  /* 11a11e9c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11e9e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a11ea0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a11ea1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a11ea2:;
  /* 11a11ea2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11ea4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11ea6 je 0x11a11e7d */
  if (C.zf) goto L_11a11e7d;
  /* 11a11ea8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11eaa mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a11eac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a11ead jmp 0x11a11e7d */
  goto L_11a11e7d;
L_11a11eaf:;
  /* 11a11eaf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11eb1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11eb3 je 0x11a11eb9 */
  if (C.zf) goto L_11a11eb9;
  /* 11a11eb5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a11eb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a11eb9:;
  /* 11a11eb9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11ebc jne 0x11a11f04 */
  if (!C.zf) goto L_11a11f04;
  /* 11a11ebe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11ebf jmp 0x11a11f04 */
  goto L_11a11f04;
L_11a11ec1:;
  /* 11a11ec1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11ec3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11ec5 je 0x11a11ecc */
  if (C.zf) goto L_11a11ecc;
  /* 11a11ec7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11ec9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a11ecb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a11ecc:;
  /* 11a11ecc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11ece inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11ecf movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a11ed2 test byte ptr [ebx + 0x11a169a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a169a1)))&(0x4u); fl_logic(_r,8); }
  /* 11a11ed9 je 0x11a11ee7 */
  if (C.zf) goto L_11a11ee7;
  /* 11a11edb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11edd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11edf je 0x11a11ee6 */
  if (C.zf) goto L_11a11ee6;
  /* 11a11ee1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a11ee3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11a11ee5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a11ee6:;
  /* 11a11ee6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a11ee7:;
  /* 11a11ee7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11eea je 0x11a11ef5 */
  if (C.zf) goto L_11a11ef5;
  /* 11a11eec test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a11eee je 0x11a11ef9 */
  if (C.zf) goto L_11a11ef9;
  /* 11a11ef0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11ef3 jne 0x11a11ec1 */
  if (!C.zf) goto L_11a11ec1;
L_11a11ef5:;
  /* 11a11ef5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a11ef7 jne 0x11a11efc */
  if (!C.zf) goto L_11a11efc;
L_11a11ef9:;
  /* 11a11ef9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a11efa jmp 0x11a11f04 */
  goto L_11a11f04;
L_11a11efc:;
  /* 11a11efc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11efe je 0x11a11f04 */
  if (C.zf) goto L_11a11f04;
  /* 11a11f00 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11a11f04:;
  /* 11a11f04 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11a11f08:;
  /* 11a11f08 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f0b je 0x11a11ff1 */
  if (C.zf) goto L_11a11ff1;
L_11a11f11:;
  /* 11a11f11 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11f13 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f16 je 0x11a11f1d */
  if (C.zf) goto L_11a11f1d;
  /* 11a11f18 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f1b jne 0x11a11f20 */
  if (!C.zf) goto L_11a11f20;
L_11a11f1d:;
  /* 11a11f1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11f1e jmp 0x11a11f11 */
  goto L_11a11f11;
L_11a11f20:;
  /* 11a11f20 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f23 je 0x11a11ff1 */
  if (C.zf) goto L_11a11ff1;
  /* 11a11f29 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a11f2b je 0x11a11f35 */
  if (C.zf) goto L_11a11f35;
  /* 11a11f2d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a11f2f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a11f32 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a11f35:;
  /* 11a11f35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a11f38 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11a11f3a:;
  /* 11a11f3a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11a11f41 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a11f43:;
  /* 11a11f43 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f46 jne 0x11a11f4c */
  if (!C.zf) goto L_11a11f4c;
  /* 11a11f48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11f49 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a11f4a jmp 0x11a11f43 */
  goto L_11a11f43;
L_11a11f4c:;
  /* 11a11f4c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f4f jne 0x11a11f7d */
  if (!C.zf) goto L_11a11f7d;
  /* 11a11f51 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a11f54 jne 0x11a11f7b */
  if (!C.zf) goto L_11a11f7b;
  /* 11a11f56 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a11f58 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11f5b je 0x11a11f6a */
  if (C.zf) goto L_11a11f6a;
  /* 11a11f5d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11f61 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11a11f64 jne 0x11a11f6a */
  if (!C.zf) goto L_11a11f6a;
  /* 11a11f66 mov eax, edx */
  EAX = (EDX);
  /* 11a11f68 jmp 0x11a11f6d */
  goto L_11a11f6d;
L_11a11f6a:;
  /* 11a11f6a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11a11f6d:;
  /* 11a11f6d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a11f70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a11f72 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11f75 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a11f78 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a11f7b:;
  /* 11a11f7b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11a11f7d:;
  /* 11a11f7d mov edx, ebx */
  EDX = (EBX);
  /* 11a11f7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a11f80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a11f82 je 0x11a11f92 */
  if (C.zf) goto L_11a11f92;
  /* 11a11f84 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a11f85:;
  /* 11a11f85 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11f87 je 0x11a11f8d */
  if (C.zf) goto L_11a11f8d;
  /* 11a11f89 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11a11f8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a11f8d:;
  /* 11a11f8d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11f8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a11f90 jne 0x11a11f85 */
  if (!C.zf) goto L_11a11f85;
L_11a11f92:;
  /* 11a11f92 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11f94 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a11f96 je 0x11a11fe2 */
  if (C.zf) goto L_11a11fe2;
  /* 11a11f98 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11f9c jne 0x11a11fa8 */
  if (!C.zf) goto L_11a11fa8;
  /* 11a11f9e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11fa1 je 0x11a11fe2 */
  if (C.zf) goto L_11a11fe2;
  /* 11a11fa3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a11fa6 je 0x11a11fe2 */
  if (C.zf) goto L_11a11fe2;
L_11a11fa8:;
  /* 11a11fa8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a11fac je 0x11a11fdc */
  if (C.zf) goto L_11a11fdc;
  /* 11a11fae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11fb0 je 0x11a11fcb */
  if (C.zf) goto L_11a11fcb;
  /* 11a11fb2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a11fb5 test byte ptr [ebx + 0x11a169a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a169a1)))&(0x4u); fl_logic(_r,8); }
  /* 11a11fbc je 0x11a11fc4 */
  if (C.zf) goto L_11a11fc4;
  /* 11a11fbe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a11fc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a11fc1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11fc2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a11fc4:;
  /* 11a11fc4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a11fc6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a11fc8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a11fc9 jmp 0x11a11fda */
  goto L_11a11fda;
L_11a11fcb:;
  /* 11a11fcb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a11fce test byte ptr [edx + 0x11a169a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a169a1)))&(0x4u); fl_logic(_r,8); }
  /* 11a11fd5 je 0x11a11fda */
  if (C.zf) goto L_11a11fda;
  /* 11a11fd7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11fd8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a11fda:;
  /* 11a11fda inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a11fdc:;
  /* 11a11fdc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a11fdd jmp 0x11a11f3a */
  goto L_11a11f3a;
L_11a11fe2:;
  /* 11a11fe2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a11fe4 je 0x11a11fea */
  if (C.zf) goto L_11a11fea;
  /* 11a11fe6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a11fe9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a11fea:;
  /* 11a11fea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a11fec jmp 0x11a11f08 */
  goto L_11a11f08;
L_11a11ff1:;
  /* 11a11ff1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a11ff3 je 0x11a11ff8 */
  if (C.zf) goto L_11a11ff8;
  /* 11a11ff5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a11ff8:;
  /* 11a11ff8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a11ffb pop edi */
  EDI = (pop32());
  /* 11a11ffc pop esi */
  ESI = (pop32());
  /* 11a11ffd pop ebx */
  EBX = (pop32());
  /* 11a11ffe inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11a12000 pop ebp */
  EBP = (pop32());
  /* 11a12001 ret  */
  ESPCHK(0x11a11e4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002002 @ 0x11a12002 (306 bytes, 132 insns) */
void f_11a12002(void) {
  FTRACE(0x11a12002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12002 push ecx */
  push32((uint32_t)(ECX));
  /* 11a12003 push ecx */
  push32((uint32_t)(ECX));
  /* 11a12004 mov eax, dword ptr [0x11a167b0] */
  EAX = (r32((uint32_t)(0x11a167b0)));
  /* 11a12009 push ebx */
  push32((uint32_t)(EBX));
  /* 11a1200a push ebp */
  push32((uint32_t)(EBP));
  /* 11a1200b mov ebp, dword ptr [0x11a150a0] */
  EBP = (r32((uint32_t)(0x11a150a0)));
  /* 11a12011 push esi */
  push32((uint32_t)(ESI));
  /* 11a12012 push edi */
  push32((uint32_t)(EDI));
  /* 11a12013 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a12015 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a12017 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a12019 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1201b jne 0x11a12050 */
  if (!C.zf) goto L_11a12050;
  /* 11a1201d call ebp */
  call_ind((uint32_t)(EBP), 0x11a1201fu);
  /* 11a1201f mov esi, eax */
  ESI = (EAX);
  /* 11a12021 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12023 je 0x11a12031 */
  if (C.zf) goto L_11a12031;
  /* 11a12025 mov dword ptr [0x11a167b0], 1 */
  w32((uint32_t)(0x11a167b0), (0x1u));
  /* 11a1202f jmp 0x11a12059 */
  goto L_11a12059;
L_11a12031:;
  /* 11a12031 call dword ptr [0x11a1509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1509c))), 0x11a12037u);
  /* 11a12037 mov edi, eax */
  EDI = (EAX);
  /* 11a12039 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1203b je 0x11a1212b */
  if (C.zf) goto L_11a1212b;
  /* 11a12041 mov dword ptr [0x11a167b0], 2 */
  w32((uint32_t)(0x11a167b0), (0x2u));
  /* 11a1204b jmp 0x11a120df */
  goto L_11a120df;
L_11a12050:;
  /* 11a12050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12053 jne 0x11a120da */
  if (!C.zf) goto L_11a120da;
L_11a12059:;
  /* 11a12059 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1205b jne 0x11a12069 */
  if (!C.zf) goto L_11a12069;
  /* 11a1205d call ebp */
  call_ind((uint32_t)(EBP), 0x11a1205fu);
  /* 11a1205f mov esi, eax */
  ESI = (EAX);
  /* 11a12061 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12063 je 0x11a1212b */
  if (C.zf) goto L_11a1212b;
L_11a12069:;
  /* 11a12069 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a1206c mov eax, esi */
  EAX = (ESI);
  /* 11a1206e je 0x11a1207e */
  if (C.zf) goto L_11a1207e;
L_11a12070:;
  /* 11a12070 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12071 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12072 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a12075 jne 0x11a12070 */
  if (!C.zf) goto L_11a12070;
  /* 11a12077 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12078 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12079 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a1207c jne 0x11a12070 */
  if (!C.zf) goto L_11a12070;
L_11a1207e:;
  /* 11a1207e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12080 mov edi, dword ptr [0x11a15098] */
  EDI = (r32((uint32_t)(0x11a15098)));
  /* 11a12086 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a12088 push ebx */
  push32((uint32_t)(EBX));
  /* 11a12089 push ebx */
  push32((uint32_t)(EBX));
  /* 11a1208a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a1208b push ebx */
  push32((uint32_t)(EBX));
  /* 11a1208c push ebx */
  push32((uint32_t)(EBX));
  /* 11a1208d push eax */
  push32((uint32_t)(EAX));
  /* 11a1208e push esi */
  push32((uint32_t)(ESI));
  /* 11a1208f push ebx */
  push32((uint32_t)(EBX));
  /* 11a12090 push ebx */
  push32((uint32_t)(EBX));
  /* 11a12091 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11a12095 call edi */
  call_ind((uint32_t)(EDI), 0x11a12097u);
  /* 11a12097 mov ebp, eax */
  EBP = (EAX);
  /* 11a12099 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1209b je 0x11a120cf */
  if (C.zf) goto L_11a120cf;
  /* 11a1209d push ebp */
  push32((uint32_t)(EBP));
  /* 11a1209e call 0x11a12551 */
  push32(0x11a120a3u); f_11a12551();
  /* 11a120a3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a120a5 pop ecx */
  ECX = (pop32());
  /* 11a120a6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a120aa je 0x11a120cf */
  if (C.zf) goto L_11a120cf;
  /* 11a120ac push ebx */
  push32((uint32_t)(EBX));
  /* 11a120ad push ebx */
  push32((uint32_t)(EBX));
  /* 11a120ae push ebp */
  push32((uint32_t)(EBP));
  /* 11a120af push eax */
  push32((uint32_t)(EAX));
  /* 11a120b0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a120b4 push esi */
  push32((uint32_t)(ESI));
  /* 11a120b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a120b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a120b7 call edi */
  call_ind((uint32_t)(EDI), 0x11a120b9u);
  /* 11a120b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a120bb jne 0x11a120cb */
  if (!C.zf) goto L_11a120cb;
  /* 11a120bd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a120c1 call 0x11a12509 */
  push32(0x11a120c6u); f_11a12509();
  /* 11a120c6 pop ecx */
  ECX = (pop32());
  /* 11a120c7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11a120cb:;
  /* 11a120cb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a120cf:;
  /* 11a120cf push esi */
  push32((uint32_t)(ESI));
  /* 11a120d0 call dword ptr [0x11a15094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15094))), 0x11a120d6u);
  /* 11a120d6 mov eax, ebx */
  EAX = (EBX);
  /* 11a120d8 jmp 0x11a1212d */
  goto L_11a1212d;
L_11a120da:;
  /* 11a120da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a120dd jne 0x11a1212b */
  if (!C.zf) goto L_11a1212b;
L_11a120df:;
  /* 11a120df cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a120e1 jne 0x11a120ef */
  if (!C.zf) goto L_11a120ef;
  /* 11a120e3 call dword ptr [0x11a1509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1509c))), 0x11a120e9u);
  /* 11a120e9 mov edi, eax */
  EDI = (EAX);
  /* 11a120eb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a120ed je 0x11a1212b */
  if (C.zf) goto L_11a1212b;
L_11a120ef:;
  /* 11a120ef cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a120f1 mov eax, edi */
  EAX = (EDI);
  /* 11a120f3 je 0x11a120ff */
  if (C.zf) goto L_11a120ff;
L_11a120f5:;
  /* 11a120f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a120f6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a120f8 jne 0x11a120f5 */
  if (!C.zf) goto L_11a120f5;
  /* 11a120fa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a120fb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a120fd jne 0x11a120f5 */
  if (!C.zf) goto L_11a120f5;
L_11a120ff:;
  /* 11a120ff sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12101 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12102 mov ebp, eax */
  EBP = (EAX);
  /* 11a12104 push ebp */
  push32((uint32_t)(EBP));
  /* 11a12105 call 0x11a12551 */
  push32(0x11a1210au); f_11a12551();
  /* 11a1210a mov esi, eax */
  ESI = (EAX);
  /* 11a1210c pop ecx */
  ECX = (pop32());
  /* 11a1210d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1210f jne 0x11a12115 */
  if (!C.zf) goto L_11a12115;
  /* 11a12111 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a12113 jmp 0x11a12120 */
  goto L_11a12120;
L_11a12115:;
  /* 11a12115 push ebp */
  push32((uint32_t)(EBP));
  /* 11a12116 push edi */
  push32((uint32_t)(EDI));
  /* 11a12117 push esi */
  push32((uint32_t)(ESI));
  /* 11a12118 call 0x11a12b40 */
  push32(0x11a1211du); f_11a12b40();
  /* 11a1211d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a12120:;
  /* 11a12120 push edi */
  push32((uint32_t)(EDI));
  /* 11a12121 call dword ptr [0x11a15078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15078))), 0x11a12127u);
  /* 11a12127 mov eax, esi */
  EAX = (ESI);
  /* 11a12129 jmp 0x11a1212d */
  goto L_11a1212d;
L_11a1212b:;
  /* 11a1212b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a1212d:;
  /* 11a1212d pop edi */
  EDI = (pop32());
  /* 11a1212e pop esi */
  ESI = (pop32());
  /* 11a1212f pop ebp */
  EBP = (pop32());
  /* 11a12130 pop ebx */
  EBX = (pop32());
  /* 11a12131 pop ecx */
  ECX = (pop32());
  /* 11a12132 pop ecx */
  ECX = (pop32());
  /* 11a12133 ret  */
  ESPCHK(0x11a12002u, _esp0);
  ESP += 4; return;
}

/* FUN_10002134 @ 0x11a12134 (60 bytes, 20 insns) */
void f_11a12134(void) {
  FTRACE(0x11a12134u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12136 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12138 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1213c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a12141 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a12144 push eax */
  push32((uint32_t)(EAX));
  /* 11a12145 call dword ptr [0x11a150a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150a8))), 0x11a1214bu);
  /* 11a1214b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1214d mov dword ptr [0x11a16aa8], eax */
  w32((uint32_t)(0x11a16aa8), (EAX));
  /* 11a12152 je 0x11a12169 */
  if (C.zf) goto L_11a12169;
  /* 11a12154 call 0x11a12e75 */
  push32(0x11a12159u); f_11a12e75();
  /* 11a12159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1215b jne 0x11a1216c */
  if (!C.zf) goto L_11a1216c;
  /* 11a1215d push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a12163 call dword ptr [0x11a150a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150a4))), 0x11a12169u);
L_11a12169:;
  /* 11a12169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a1216b ret  */
  ESPCHK(0x11a12134u, _esp0);
  ESP += 4; return;
L_11a1216c:;
  /* 11a1216c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a1216e pop eax */
  EAX = (pop32());
  /* 11a1216f ret  */
  ESPCHK(0x11a12134u, _esp0);
  ESP += 4; return;
}

/* FUN_10002170 @ 0x11a12170 (117 bytes, 38 insns) */
void f_11a12170(void) {
  FTRACE(0x11a12170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12170 push ebx */
  push32((uint32_t)(EBX));
  /* 11a12171 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a12173 cmp dword ptr [0x11a16868], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a16868))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12179 push ebp */
  push32((uint32_t)(EBP));
  /* 11a1217a mov ebp, dword ptr [0x11a15048] */
  EBP = (r32((uint32_t)(0x11a15048)));
  /* 11a12180 jle 0x11a121c6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a121c6;
  /* 11a12182 mov eax, dword ptr [0x11a1686c] */
  EAX = (r32((uint32_t)(0x11a1686c)));
  /* 11a12187 push esi */
  push32((uint32_t)(ESI));
  /* 11a12188 push edi */
  push32((uint32_t)(EDI));
  /* 11a12189 mov edi, dword ptr [0x11a1504c] */
  EDI = (r32((uint32_t)(0x11a1504c)));
  /* 11a1218f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11a12192:;
  /* 11a12192 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a12197 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a1219c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a1219e call edi */
  call_ind((uint32_t)(EDI), 0x11a121a0u);
  /* 11a121a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a121a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a121a7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a121a9 call edi */
  call_ind((uint32_t)(EDI), 0x11a121abu);
  /* 11a121ab push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11a121ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11a121b0 push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a121b6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a121b8u);
  /* 11a121b8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a121bb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a121bc cmp ebx, dword ptr [0x11a16868] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a16868))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a121c2 jl 0x11a12192 */
  if ((C.sf!=C.of)) goto L_11a12192;
  /* 11a121c4 pop edi */
  EDI = (pop32());
  /* 11a121c5 pop esi */
  ESI = (pop32());
L_11a121c6:;
  /* 11a121c6 push dword ptr [0x11a1686c] */
  push32((uint32_t)(r32((uint32_t)(0x11a1686c))));
  /* 11a121cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a121ce push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a121d4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a121d6u);
  /* 11a121d6 push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a121dc call dword ptr [0x11a150a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a150a4))), 0x11a121e2u);
  /* 11a121e2 pop ebp */
  EBP = (pop32());
  /* 11a121e3 pop ebx */
  EBX = (pop32());
  /* 11a121e4 ret  */
  ESPCHK(0x11a12170u, _esp0);
  ESP += 4; return;
}

/* FUN_100021e5 @ 0x11a121e5 (57 bytes, 18 insns) */
void f_11a121e5(void) {
  FTRACE(0x11a121e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a121e5 mov eax, dword ptr [0x11a16660] */
  EAX = (r32((uint32_t)(0x11a16660)));
  /* 11a121ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a121ed je 0x11a121fc */
  if (C.zf) goto L_11a121fc;
  /* 11a121ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a121f1 jne 0x11a1221d */
  if (!C.zf) goto L_11a1221d;
  /* 11a121f3 cmp dword ptr [0x11a16664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a16664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a121fa jne 0x11a1221d */
  if (!C.zf) goto L_11a1221d;
L_11a121fc:;
  /* 11a121fc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a12201 call 0x11a1221e */
  push32(0x11a12206u); f_11a1221e();
  /* 11a12206 mov eax, dword ptr [0x11a167b4] */
  EAX = (r32((uint32_t)(0x11a167b4)));
  /* 11a1220b pop ecx */
  ECX = (pop32());
  /* 11a1220c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1220e je 0x11a12212 */
  if (C.zf) goto L_11a12212;
  /* 11a12210 call eax */
  call_ind((uint32_t)(EAX), 0x11a12212u);
L_11a12212:;
  /* 11a12212 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a12217 call 0x11a1221e */
  push32(0x11a1221cu); f_11a1221e();
  /* 11a1221c pop ecx */
  ECX = (pop32());
L_11a1221d:;
  /* 11a1221d ret  */
  ESPCHK(0x11a121e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000221e @ 0x11a1221e (339 bytes, 100 insns) */
void f_11a1221e(void) {
  FTRACE(0x11a1221eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1221e push ebp */
  push32((uint32_t)(EBP));
  /* 11a1221f mov ebp, esp */
  EBP = (ESP);
  /* 11a12221 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a1222a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a1222c mov eax, 0x11a16210 */
  EAX = (0x11a16210u);
L_11a12231:;
  /* 11a12231 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12233 je 0x11a12240 */
  if (C.zf) goto L_11a12240;
  /* 11a12235 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12238 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a12239 cmp eax, 0x11a162a0 */
  { uint32_t _a=(EAX),_b=(0x11a162a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1223e jl 0x11a12231 */
  if ((C.sf!=C.of)) goto L_11a12231;
L_11a12240:;
  /* 11a12240 push esi */
  push32((uint32_t)(ESI));
  /* 11a12241 mov esi, ecx */
  ESI = (ECX);
  /* 11a12243 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a12246 cmp edx, dword ptr [esi + 0x11a16210] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11a16210))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1224c jne 0x11a1236e */
  if (!C.zf) goto L_11a1236e;
  /* 11a12252 mov eax, dword ptr [0x11a16660] */
  EAX = (r32((uint32_t)(0x11a16660)));
  /* 11a12257 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1225a je 0x11a12348 */
  if (C.zf) goto L_11a12348;
  /* 11a12260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a12262 jne 0x11a12271 */
  if (!C.zf) goto L_11a12271;
  /* 11a12264 cmp dword ptr [0x11a16664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a16664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1226b je 0x11a12348 */
  if (C.zf) goto L_11a12348;
L_11a12271:;
  /* 11a12271 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12277 je 0x11a1236e */
  if (C.zf) goto L_11a1236e;
  /* 11a1227d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a12283 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a12288 push eax */
  push32((uint32_t)(EAX));
  /* 11a12289 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1228b call dword ptr [0x11a15090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15090))), 0x11a12291u);
  /* 11a12291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a12293 jne 0x11a122a8 */
  if (!C.zf) goto L_11a122a8;
  /* 11a12295 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a1229b push 0x11a153f0 */
  push32((uint32_t)(0x11a153f0u));
  /* 11a122a0 push eax */
  push32((uint32_t)(EAX));
  /* 11a122a1 call 0x11a125e0 */
  push32(0x11a122a6u); f_11a125e0();
  /* 11a122a6 pop ecx */
  ECX = (pop32());
  /* 11a122a7 pop ecx */
  ECX = (pop32());
L_11a122a8:;
  /* 11a122a8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a122ae push edi */
  push32((uint32_t)(EDI));
  /* 11a122af push eax */
  push32((uint32_t)(EAX));
  /* 11a122b0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11a122b6 call 0x11a126d0 */
  push32(0x11a122bbu); f_11a126d0();
  /* 11a122bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a122bc pop ecx */
  ECX = (pop32());
  /* 11a122bd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a122c0 jbe 0x11a122eb */
  if ((C.cf||C.zf)) goto L_11a122eb;
  /* 11a122c2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a122c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a122c9 call 0x11a126d0 */
  push32(0x11a122ceu); f_11a126d0();
  /* 11a122ce mov edi, eax */
  EDI = (EAX);
  /* 11a122d0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a122d6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a122d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a122db add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a122dd push 0x11a153ec */
  push32((uint32_t)(0x11a153ecu));
  /* 11a122e2 push edi */
  push32((uint32_t)(EDI));
  /* 11a122e3 call 0x11a13750 */
  push32(0x11a122e8u); f_11a13750();
  /* 11a122e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a122eb:;
  /* 11a122eb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a122f1 push 0x11a153d0 */
  push32((uint32_t)(0x11a153d0u));
  /* 11a122f6 push eax */
  push32((uint32_t)(EAX));
  /* 11a122f7 call 0x11a125e0 */
  push32(0x11a122fcu); f_11a125e0();
  /* 11a122fc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a12302 push edi */
  push32((uint32_t)(EDI));
  /* 11a12303 push eax */
  push32((uint32_t)(EAX));
  /* 11a12304 call 0x11a125f0 */
  push32(0x11a12309u); f_11a125f0();
  /* 11a12309 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a1230f push 0x11a153cc */
  push32((uint32_t)(0x11a153ccu));
  /* 11a12314 push eax */
  push32((uint32_t)(EAX));
  /* 11a12315 call 0x11a125f0 */
  push32(0x11a1231au); f_11a125f0();
  /* 11a1231a push dword ptr [esi + 0x11a16214] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11a16214))));
  /* 11a12320 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a12326 push eax */
  push32((uint32_t)(EAX));
  /* 11a12327 call 0x11a125f0 */
  push32(0x11a1232cu); f_11a125f0();
  /* 11a1232c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a12331 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a12337 push 0x11a153a4 */
  push32((uint32_t)(0x11a153a4u));
  /* 11a1233c push eax */
  push32((uint32_t)(EAX));
  /* 11a1233d call 0x11a136be */
  push32(0x11a12342u); f_11a136be();
  /* 11a12342 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12345 pop edi */
  EDI = (pop32());
  /* 11a12346 jmp 0x11a1236e */
  goto L_11a1236e;
L_11a12348:;
  /* 11a12348 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a1234b lea esi, [esi + 0x11a16214] */
  ESI = ((uint32_t)(ESI + 0x11a16214));
  /* 11a12351 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12353 push eax */
  push32((uint32_t)(EAX));
  /* 11a12354 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a12356 call 0x11a126d0 */
  push32(0x11a1235bu); f_11a126d0();
  /* 11a1235b pop ecx */
  ECX = (pop32());
  /* 11a1235c push eax */
  push32((uint32_t)(EAX));
  /* 11a1235d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a1235f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a12361 call dword ptr [0x11a15080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15080))), 0x11a12367u);
  /* 11a12367 push eax */
  push32((uint32_t)(EAX));
  /* 11a12368 call dword ptr [0x11a1507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1507c))), 0x11a1236eu);
L_11a1236e:;
  /* 11a1236e pop esi */
  ESI = (pop32());
  /* 11a1236f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12370 ret  */
  ESPCHK(0x11a1221eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002371 @ 0x11a12371 (41 bytes, 12 insns) */
void f_11a12371(void) {
  FTRACE(0x11a12371u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12371 push esi */
  push32((uint32_t)(ESI));
  /* 11a12372 mov esi, dword ptr [0x11a15040] */
  ESI = (r32((uint32_t)(0x11a15040)));
  /* 11a12378 push dword ptr [0x11a162e4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162e4))));
  /* 11a1237e call esi */
  call_ind((uint32_t)(ESI), 0x11a12380u);
  /* 11a12380 push dword ptr [0x11a162d4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162d4))));
  /* 11a12386 call esi */
  call_ind((uint32_t)(ESI), 0x11a12388u);
  /* 11a12388 push dword ptr [0x11a162c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162c4))));
  /* 11a1238e call esi */
  call_ind((uint32_t)(ESI), 0x11a12390u);
  /* 11a12390 push dword ptr [0x11a162a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162a4))));
  /* 11a12396 call esi */
  call_ind((uint32_t)(ESI), 0x11a12398u);
  /* 11a12398 pop esi */
  ESI = (pop32());
  /* 11a12399 ret  */
  ESPCHK(0x11a12371u, _esp0);
  ESP += 4; return;
}

/* FUN_1000239a @ 0x11a1239a (108 bytes, 34 insns) */
void f_11a1239a(void) {
  FTRACE(0x11a1239au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1239a push esi */
  push32((uint32_t)(ESI));
  /* 11a1239b push edi */
  push32((uint32_t)(EDI));
  /* 11a1239c mov edi, dword ptr [0x11a1508c] */
  EDI = (r32((uint32_t)(0x11a1508c)));
  /* 11a123a2 mov esi, 0x11a162a0 */
  ESI = (0x11a162a0u);
L_11a123a7:;
  /* 11a123a7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a123a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a123ab je 0x11a123d8 */
  if (C.zf) goto L_11a123d8;
  /* 11a123ad cmp esi, 0x11a162e4 */
  { uint32_t _a=(ESI),_b=(0x11a162e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a123b3 je 0x11a123d8 */
  if (C.zf) goto L_11a123d8;
  /* 11a123b5 cmp esi, 0x11a162d4 */
  { uint32_t _a=(ESI),_b=(0x11a162d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a123bb je 0x11a123d8 */
  if (C.zf) goto L_11a123d8;
  /* 11a123bd cmp esi, 0x11a162c4 */
  { uint32_t _a=(ESI),_b=(0x11a162c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a123c3 je 0x11a123d8 */
  if (C.zf) goto L_11a123d8;
  /* 11a123c5 cmp esi, 0x11a162a4 */
  { uint32_t _a=(ESI),_b=(0x11a162a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a123cb je 0x11a123d8 */
  if (C.zf) goto L_11a123d8;
  /* 11a123cd push eax */
  push32((uint32_t)(EAX));
  /* 11a123ce call edi */
  call_ind((uint32_t)(EDI), 0x11a123d0u);
  /* 11a123d0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a123d2 call 0x11a12509 */
  push32(0x11a123d7u); f_11a12509();
  /* 11a123d7 pop ecx */
  ECX = (pop32());
L_11a123d8:;
  /* 11a123d8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a123db cmp esi, 0x11a16360 */
  { uint32_t _a=(ESI),_b=(0x11a16360u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a123e1 jl 0x11a123a7 */
  if ((C.sf!=C.of)) goto L_11a123a7;
  /* 11a123e3 push dword ptr [0x11a162c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162c4))));
  /* 11a123e9 call edi */
  call_ind((uint32_t)(EDI), 0x11a123ebu);
  /* 11a123eb push dword ptr [0x11a162d4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162d4))));
  /* 11a123f1 call edi */
  call_ind((uint32_t)(EDI), 0x11a123f3u);
  /* 11a123f3 push dword ptr [0x11a162e4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162e4))));
  /* 11a123f9 call edi */
  call_ind((uint32_t)(EDI), 0x11a123fbu);
  /* 11a123fb push dword ptr [0x11a162a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a162a4))));
  /* 11a12401 call edi */
  call_ind((uint32_t)(EDI), 0x11a12403u);
  /* 11a12403 pop edi */
  EDI = (pop32());
  /* 11a12404 pop esi */
  ESI = (pop32());
  /* 11a12405 ret  */
  ESPCHK(0x11a1239au, _esp0);
  ESP += 4; return;
}

/* FUN_10002406 @ 0x11a12406 (97 bytes, 37 insns) */
void f_11a12406(void) {
  FTRACE(0x11a12406u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12406 push ebp */
  push32((uint32_t)(EBP));
  /* 11a12407 mov ebp, esp */
  EBP = (ESP);
  /* 11a12409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a1240c push esi */
  push32((uint32_t)(ESI));
  /* 11a1240d cmp dword ptr [eax*4 + 0x11a162a0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11a162a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12415 lea esi, [eax*4 + 0x11a162a0] */
  ESI = ((uint32_t)(EAX*4 + 0x11a162a0));
  /* 11a1241c jne 0x11a1245c */
  if (!C.zf) goto L_11a1245c;
  /* 11a1241e push edi */
  push32((uint32_t)(EDI));
  /* 11a1241f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a12421 call 0x11a12551 */
  push32(0x11a12426u); f_11a12551();
  /* 11a12426 mov edi, eax */
  EDI = (EAX);
  /* 11a12428 pop ecx */
  ECX = (pop32());
  /* 11a12429 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a1242b jne 0x11a12435 */
  if (!C.zf) goto L_11a12435;
  /* 11a1242d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a1242f call 0x11a11876 */
  push32(0x11a12434u); f_11a11876();
  /* 11a12434 pop ecx */
  ECX = (pop32());
L_11a12435:;
  /* 11a12435 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a12437 call 0x11a12406 */
  push32(0x11a1243cu); f_11a12406();
  /* 11a1243c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1243f pop ecx */
  ECX = (pop32());
  /* 11a12440 push edi */
  push32((uint32_t)(EDI));
  /* 11a12441 jne 0x11a1244d */
  if (!C.zf) goto L_11a1244d;
  /* 11a12443 call dword ptr [0x11a15040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15040))), 0x11a12449u);
  /* 11a12449 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a1244b jmp 0x11a12453 */
  goto L_11a12453;
L_11a1244d:;
  /* 11a1244d call 0x11a12509 */
  push32(0x11a12452u); f_11a12509();
  /* 11a12452 pop ecx */
  ECX = (pop32());
L_11a12453:;
  /* 11a12453 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a12455 call 0x11a12467 */
  push32(0x11a1245au); f_11a12467();
  /* 11a1245a pop ecx */
  ECX = (pop32());
  /* 11a1245b pop edi */
  EDI = (pop32());
L_11a1245c:;
  /* 11a1245c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a1245e call dword ptr [0x11a1503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1503c))), 0x11a12464u);
  /* 11a12464 pop esi */
  ESI = (pop32());
  /* 11a12465 pop ebp */
  EBP = (pop32());
  /* 11a12466 ret  */
  ESPCHK(0x11a12406u, _esp0);
  ESP += 4; return;
}

/* FUN_10002467 @ 0x11a12467 (21 bytes, 7 insns) */
void f_11a12467(void) {
  FTRACE(0x11a12467u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12467 push ebp */
  push32((uint32_t)(EBP));
  /* 11a12468 mov ebp, esp */
  EBP = (ESP);
  /* 11a1246a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a1246d push dword ptr [eax*4 + 0x11a162a0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11a162a0))));
  /* 11a12474 call dword ptr [0x11a15044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15044))), 0x11a1247au);
  /* 11a1247a pop ebp */
  EBP = (pop32());
  /* 11a1247b ret  */
  ESPCHK(0x11a12467u, _esp0);
  ESP += 4; return;
}

/* FUN_1000247c @ 0x11a1247c (141 bytes, 56 insns) */
void f_11a1247c(void) {
  FTRACE(0x11a1247cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1247c push ebx */
  push32((uint32_t)(EBX));
  /* 11a1247d push esi */
  push32((uint32_t)(ESI));
  /* 11a1247e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a12482 push edi */
  push32((uint32_t)(EDI));
  /* 11a12483 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a12488 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1248b mov ebx, esi */
  EBX = (ESI);
  /* 11a1248d ja 0x11a1249c */
  if ((!C.cf&&!C.zf)) goto L_11a1249c;
  /* 11a1248f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a12491 jne 0x11a12496 */
  if (!C.zf) goto L_11a12496;
  /* 11a12493 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a12495 pop esi */
  ESI = (pop32());
L_11a12496:;
  /* 11a12496 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12499 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11a1249c:;
  /* 11a1249c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a1249e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a124a1 ja 0x11a124dd */
  if ((!C.cf&&!C.zf)) goto L_11a124dd;
  /* 11a124a3 cmp ebx, dword ptr [0x11a164f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a164f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a124a9 ja 0x11a124c8 */
  if ((!C.cf&&!C.zf)) goto L_11a124c8;
  /* 11a124ab push 9 */
  push32((uint32_t)(0x9u));
  /* 11a124ad call 0x11a12406 */
  push32(0x11a124b2u); f_11a12406();
  /* 11a124b2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a124b3 call 0x11a13209 */
  push32(0x11a124b8u); f_11a13209();
  /* 11a124b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a124ba mov edi, eax */
  EDI = (EAX);
  /* 11a124bc call 0x11a12467 */
  push32(0x11a124c1u); f_11a12467();
  /* 11a124c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a124c4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a124c6 jne 0x11a124f3 */
  if (!C.zf) goto L_11a124f3;
L_11a124c8:;
  /* 11a124c8 push esi */
  push32((uint32_t)(ESI));
  /* 11a124c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a124cb push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a124d1 call dword ptr [0x11a15038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15038))), 0x11a124d7u);
  /* 11a124d7 mov edi, eax */
  EDI = (EAX);
  /* 11a124d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a124db jne 0x11a124ff */
  if (!C.zf) goto L_11a124ff;
L_11a124dd:;
  /* 11a124dd cmp dword ptr [0x11a1682c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a1682c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a124e4 je 0x11a124ff */
  if (C.zf) goto L_11a124ff;
  /* 11a124e6 push esi */
  push32((uint32_t)(ESI));
  /* 11a124e7 call 0x11a138a8 */
  push32(0x11a124ecu); f_11a138a8();
  /* 11a124ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a124ee pop ecx */
  ECX = (pop32());
  /* 11a124ef je 0x11a12505 */
  if (C.zf) goto L_11a12505;
  /* 11a124f1 jmp 0x11a1249c */
  goto L_11a1249c;
L_11a124f3:;
  /* 11a124f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a124f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a124f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a124f7 call 0x11a13850 */
  push32(0x11a124fcu); f_11a13850();
  /* 11a124fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a124ff:;
  /* 11a124ff mov eax, edi */
  EAX = (EDI);
L_11a12501:;
  /* 11a12501 pop edi */
  EDI = (pop32());
  /* 11a12502 pop esi */
  ESI = (pop32());
  /* 11a12503 pop ebx */
  EBX = (pop32());
  /* 11a12504 ret  */
  ESPCHK(0x11a1247cu, _esp0);
  ESP += 4; return;
L_11a12505:;
  /* 11a12505 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12507 jmp 0x11a12501 */
  goto L_11a12501;
}

/* FUN_10002509 @ 0x11a12509 (72 bytes, 29 insns) */
void f_11a12509(void) {
  FTRACE(0x11a12509u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12509 push esi */
  push32((uint32_t)(ESI));
  /* 11a1250a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a1250e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a12510 je 0x11a1254f */
  if (C.zf) goto L_11a1254f;
  /* 11a12512 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a12514 call 0x11a12406 */
  push32(0x11a12519u); f_11a12406();
  /* 11a12519 push esi */
  push32((uint32_t)(ESI));
  /* 11a1251a call 0x11a12eb3 */
  push32(0x11a1251fu); f_11a12eb3();
  /* 11a1251f pop ecx */
  ECX = (pop32());
  /* 11a12520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a12522 pop ecx */
  ECX = (pop32());
  /* 11a12523 je 0x11a12538 */
  if (C.zf) goto L_11a12538;
  /* 11a12525 push esi */
  push32((uint32_t)(ESI));
  /* 11a12526 push eax */
  push32((uint32_t)(EAX));
  /* 11a12527 call 0x11a12ede */
  push32(0x11a1252cu); f_11a12ede();
  /* 11a1252c push 9 */
  push32((uint32_t)(0x9u));
  /* 11a1252e call 0x11a12467 */
  push32(0x11a12533u); f_11a12467();
  /* 11a12533 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12536 pop esi */
  ESI = (pop32());
  /* 11a12537 ret  */
  ESPCHK(0x11a12509u, _esp0);
  ESP += 4; return;
L_11a12538:;
  /* 11a12538 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a1253a call 0x11a12467 */
  push32(0x11a1253fu); f_11a12467();
  /* 11a1253f pop ecx */
  ECX = (pop32());
  /* 11a12540 push esi */
  push32((uint32_t)(ESI));
  /* 11a12541 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12543 push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a12549 call dword ptr [0x11a15048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15048))), 0x11a1254fu);
L_11a1254f:;
  /* 11a1254f pop esi */
  ESI = (pop32());
  /* 11a12550 ret  */
  ESPCHK(0x11a12509u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11a12551 (18 bytes, 6 insns) */
void f_11a12551(void) {
  FTRACE(0x11a12551u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12551 push dword ptr [0x11a1682c] */
  push32((uint32_t)(r32((uint32_t)(0x11a1682c))));
  /* 11a12557 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a1255b call 0x11a12563 */
  push32(0x11a12560u); f_11a12563();
  /* 11a12560 pop ecx */
  ECX = (pop32());
  /* 11a12561 pop ecx */
  ECX = (pop32());
  /* 11a12562 ret  */
  ESPCHK(0x11a12551u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11a12563 (44 bytes, 16 insns) */
void f_11a12563(void) {
  FTRACE(0x11a12563u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12563 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12568 ja 0x11a1258c */
  if ((!C.cf&&!C.zf)) goto L_11a1258c;
L_11a1256a:;
  /* 11a1256a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a1256e call 0x11a1258f */
  push32(0x11a12573u); f_11a1258f();
  /* 11a12573 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a12575 pop ecx */
  ECX = (pop32());
  /* 11a12576 jne 0x11a1258e */
  if (!C.zf) goto L_11a1258e;
  /* 11a12578 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1257c je 0x11a1258e */
  if (C.zf) goto L_11a1258e;
  /* 11a1257e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a12582 call 0x11a138a8 */
  push32(0x11a12587u); f_11a138a8();
  /* 11a12587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a12589 pop ecx */
  ECX = (pop32());
  /* 11a1258a jne 0x11a1256a */
  if (!C.zf) goto L_11a1256a;
L_11a1258c:;
  /* 11a1258c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a1258e:;
  /* 11a1258e ret  */
  ESPCHK(0x11a12563u, _esp0);
  ESP += 4; return;
}

/* FUN_1000258f @ 0x11a1258f (78 bytes, 30 insns) */
void f_11a1258f(void) {
  FTRACE(0x11a1258fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1258f push esi */
  push32((uint32_t)(ESI));
  /* 11a12590 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a12594 cmp esi, dword ptr [0x11a164f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a164f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1259a push edi */
  push32((uint32_t)(EDI));
  /* 11a1259b ja 0x11a125be */
  if ((!C.cf&&!C.zf)) goto L_11a125be;
  /* 11a1259d push 9 */
  push32((uint32_t)(0x9u));
  /* 11a1259f call 0x11a12406 */
  push32(0x11a125a4u); f_11a12406();
  /* 11a125a4 push esi */
  push32((uint32_t)(ESI));
  /* 11a125a5 call 0x11a13209 */
  push32(0x11a125aau); f_11a13209();
  /* 11a125aa push 9 */
  push32((uint32_t)(0x9u));
  /* 11a125ac mov edi, eax */
  EDI = (EAX);
  /* 11a125ae call 0x11a12467 */
  push32(0x11a125b3u); f_11a12467();
  /* 11a125b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a125b6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a125b8 je 0x11a125be */
  if (C.zf) goto L_11a125be;
  /* 11a125ba mov eax, edi */
  EAX = (EDI);
  /* 11a125bc jmp 0x11a125da */
  goto L_11a125da;
L_11a125be:;
  /* 11a125be test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a125c0 jne 0x11a125c5 */
  if (!C.zf) goto L_11a125c5;
  /* 11a125c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a125c4 pop esi */
  ESI = (pop32());
L_11a125c5:;
  /* 11a125c5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a125c8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a125cb push esi */
  push32((uint32_t)(ESI));
  /* 11a125cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a125ce push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a125d4 call dword ptr [0x11a15038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15038))), 0x11a125dau);
L_11a125da:;
  /* 11a125da pop edi */
  EDI = (pop32());
  /* 11a125db pop esi */
  ESI = (pop32());
  /* 11a125dc ret  */
  ESPCHK(0x11a1258fu, _esp0);
  ESP += 4; return;
}

/* FUN_100025e0 @ 0x11a125e0 (7 bytes, 3 insns) */
void f_11a125e0(void) {
  FTRACE(0x11a125e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a125e0 push edi */
  push32((uint32_t)(EDI));
  /* 11a125e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a125e5 jmp 0x11a12651 */
  jmp_ind(0x11a12651u); return;
}

/* FUN_100025f0 @ 0x11a125f0 (224 bytes, 84 insns) */
void f_11a125f0(void) {
  FTRACE(0x11a125f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a125f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a125f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a125f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a125fb je 0x11a1260c */
  if (C.zf) goto L_11a1260c;
L_11a125fd:;
  /* 11a125fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a125ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a12600 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a12602 je 0x11a1263f */
  if (C.zf) goto L_11a1263f;
  /* 11a12604 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a1260a jne 0x11a125fd */
  if (!C.zf) goto L_11a125fd;
L_11a1260c:;
  /* 11a1260c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a1260e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a12613 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12615 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a12618 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a1261a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1261d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a12622 je 0x11a1260c */
  if (C.zf) goto L_11a1260c;
  /* 11a12624 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a12627 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a12629 je 0x11a1264e */
  if (C.zf) goto L_11a1264e;
  /* 11a1262b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a1262d je 0x11a12649 */
  if (C.zf) goto L_11a12649;
  /* 11a1262f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a12634 je 0x11a12644 */
  if (C.zf) goto L_11a12644;
  /* 11a12636 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a1263b je 0x11a1263f */
  if (C.zf) goto L_11a1263f;
  /* 11a1263d jmp 0x11a1260c */
  goto L_11a1260c;
L_11a1263f:;
  /* 11a1263f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a12642 jmp 0x11a12651 */
  goto L_11a12651;
L_11a12644:;
  /* 11a12644 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a12647 jmp 0x11a12651 */
  goto L_11a12651;
L_11a12649:;
  /* 11a12649 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a1264c jmp 0x11a12651 */
  goto L_11a12651;
L_11a1264e:;
  /* 11a1264e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a12651:;
  /* 11a12651 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a12655 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a1265b je 0x11a12676 */
  if (C.zf) goto L_11a12676;
L_11a1265d:;
  /* 11a1265d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a1265f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a12660 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a12662 je 0x11a126c8 */
  if (C.zf) goto L_11a126c8;
  /* 11a12664 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a12666 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a12667 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a1266d jne 0x11a1265d */
  if (!C.zf) goto L_11a1265d;
  /* 11a1266f jmp 0x11a12676 */
  goto L_11a12676;
L_11a12671:;
  /* 11a12671 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a12673 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a12676:;
  /* 11a12676 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a1267b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a1267d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1267f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a12682 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12684 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a12686 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12689 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a1268e je 0x11a12671 */
  if (C.zf) goto L_11a12671;
  /* 11a12690 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a12692 je 0x11a126c8 */
  if (C.zf) goto L_11a126c8;
  /* 11a12694 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a12696 je 0x11a126bf */
  if (C.zf) goto L_11a126bf;
  /* 11a12698 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a1269e je 0x11a126b2 */
  if (C.zf) goto L_11a126b2;
  /* 11a126a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a126a6 je 0x11a126aa */
  if (C.zf) goto L_11a126aa;
  /* 11a126a8 jmp 0x11a12671 */
  goto L_11a12671;
L_11a126aa:;
  /* 11a126aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a126ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a126b0 pop edi */
  EDI = (pop32());
  /* 11a126b1 ret  */
  ESPCHK(0x11a125f0u, _esp0);
  ESP += 4; return;
L_11a126b2:;
  /* 11a126b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a126b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a126b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a126bd pop edi */
  EDI = (pop32());
  /* 11a126be ret  */
  ESPCHK(0x11a125f0u, _esp0);
  ESP += 4; return;
L_11a126bf:;
  /* 11a126bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a126c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a126c6 pop edi */
  EDI = (pop32());
  /* 11a126c7 ret  */
  ESPCHK(0x11a125f0u, _esp0);
  ESP += 4; return;
L_11a126c8:;
  /* 11a126c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a126ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a126ce pop edi */
  EDI = (pop32());
  /* 11a126cf ret  */
  ESPCHK(0x11a125f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a126d0 (123 bytes, 44 insns) */
void f_11a126d0(void) {
  FTRACE(0x11a126d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a126d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a126d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a126da je 0x11a126f0 */
  if (C.zf) goto L_11a126f0;
L_11a126dc:;
  /* 11a126dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a126de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a126df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a126e1 je 0x11a12723 */
  if (C.zf) goto L_11a12723;
  /* 11a126e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a126e9 jne 0x11a126dc */
  if (!C.zf) goto L_11a126dc;
  /* 11a126eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a126f0:;
  /* 11a126f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a126f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a126f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a126f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a126fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a126fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12701 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a12706 je 0x11a126f0 */
  if (C.zf) goto L_11a126f0;
  /* 11a12708 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a1270b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a1270d je 0x11a12741 */
  if (C.zf) goto L_11a12741;
  /* 11a1270f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a12711 je 0x11a12737 */
  if (C.zf) goto L_11a12737;
  /* 11a12713 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a12718 je 0x11a1272d */
  if (C.zf) goto L_11a1272d;
  /* 11a1271a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a1271f je 0x11a12723 */
  if (C.zf) goto L_11a12723;
  /* 11a12721 jmp 0x11a126f0 */
  goto L_11a126f0;
L_11a12723:;
  /* 11a12723 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a12726 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a1272a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a1272c ret  */
  ESPCHK(0x11a126d0u, _esp0);
  ESP += 4; return;
L_11a1272d:;
  /* 11a1272d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a12730 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a12734 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12736 ret  */
  ESPCHK(0x11a126d0u, _esp0);
  ESP += 4; return;
L_11a12737:;
  /* 11a12737 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a1273a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a1273e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12740 ret  */
  ESPCHK(0x11a126d0u, _esp0);
  ESP += 4; return;
L_11a12741:;
  /* 11a12741 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a12744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a12748 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a1274a ret  */
  ESPCHK(0x11a126d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000274b @ 0x11a1274b (429 bytes, 143 insns) */
void f_11a1274b(void) {
  FTRACE(0x11a1274bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1274b push ebp */
  push32((uint32_t)(EBP));
  /* 11a1274c mov ebp, esp */
  EBP = (ESP);
  /* 11a1274e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12751 push ebx */
  push32((uint32_t)(EBX));
  /* 11a12752 push esi */
  push32((uint32_t)(ESI));
  /* 11a12753 push edi */
  push32((uint32_t)(EDI));
  /* 11a12754 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a12756 call 0x11a12406 */
  push32(0x11a1275bu); f_11a12406();
  /* 11a1275b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a1275e call 0x11a128f8 */
  push32(0x11a12763u); f_11a128f8();
  /* 11a12763 mov ebx, eax */
  EBX = (EAX);
  /* 11a12765 pop ecx */
  ECX = (pop32());
  /* 11a12766 cmp ebx, dword ptr [0x11a16870] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a16870))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1276c pop ecx */
  ECX = (pop32());
  /* 11a1276d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a12770 jne 0x11a12779 */
  if (!C.zf) goto L_11a12779;
L_11a12772:;
  /* 11a12772 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a12774 jmp 0x11a128e9 */
  goto L_11a128e9;
L_11a12779:;
  /* 11a12779 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a1277b je 0x11a128d7 */
  if (C.zf) goto L_11a128d7;
  /* 11a12781 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12783 mov eax, 0x11a163f8 */
  EAX = (0x11a163f8u);
L_11a12788:;
  /* 11a12788 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1278a je 0x11a12800 */
  if (C.zf) goto L_11a12800;
  /* 11a1278c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1278f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a12790 cmp eax, 0x11a164e8 */
  { uint32_t _a=(EAX),_b=(0x11a164e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12795 jl 0x11a12788 */
  if ((C.sf!=C.of)) goto L_11a12788;
  /* 11a12797 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a1279a push eax */
  push32((uint32_t)(EAX));
  /* 11a1279b push ebx */
  push32((uint32_t)(EBX));
  /* 11a1279c call dword ptr [0x11a15030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15030))), 0x11a127a2u);
  /* 11a127a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a127a4 pop esi */
  ESI = (pop32());
  /* 11a127a5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a127a7 jne 0x11a128ce */
  if (!C.zf) goto L_11a128ce;
  /* 11a127ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a127af and dword ptr [0x11a16aa4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a16aa4)))&(0x0u); w32((uint32_t)(0x11a16aa4), (_r)); fl_logic(_r,32); }
  /* 11a127b6 pop ecx */
  ECX = (pop32());
  /* 11a127b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a127b9 mov edi, 0x11a169a0 */
  EDI = (0x11a169a0u);
  /* 11a127be cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a127c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a127c3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a127c4 mov dword ptr [0x11a16870], ebx */
  w32((uint32_t)(0x11a16870), (EBX));
  /* 11a127ca jbe 0x11a128bb */
  if ((C.cf||C.zf)) goto L_11a128bb;
  /* 11a127d0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a127d4 je 0x11a12896 */
  if (C.zf) goto L_11a12896;
  /* 11a127da lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11a127dd:;
  /* 11a127dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a127df test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a127e1 je 0x11a12896 */
  if (C.zf) goto L_11a12896;
  /* 11a127e7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11a127eb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11a127ee:;
  /* 11a127ee cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a127f0 ja 0x11a1288a */
  if ((!C.cf&&!C.zf)) goto L_11a1288a;
  /* 11a127f6 or byte ptr [eax + 0x11a169a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(0x4u); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a127fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a127fe jmp 0x11a127ee */
  goto L_11a127ee;
L_11a12800:;
  /* 11a12800 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a12804 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a12806 pop ecx */
  ECX = (pop32());
  /* 11a12807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12809 mov edi, 0x11a169a0 */
  EDI = (0x11a169a0u);
  /* 11a1280e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11a12811 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a12813 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a12816 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a12817 lea ebx, [esi + 0x11a16408] */
  EBX = ((uint32_t)(ESI + 0x11a16408));
L_11a1281d:;
  /* 11a1281d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a12820 mov ecx, ebx */
  ECX = (EBX);
  /* 11a12822 je 0x11a12850 */
  if (C.zf) goto L_11a12850;
L_11a12824:;
  /* 11a12824 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a12827 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a12829 je 0x11a12850 */
  if (C.zf) goto L_11a12850;
  /* 11a1282b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a1282e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11a12831 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12833 ja 0x11a12849 */
  if ((!C.cf&&!C.zf)) goto L_11a12849;
  /* 11a12835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a12838 mov dl, byte ptr [edx + 0x11a163f0] */
  DL = (r8((uint32_t)(EDX + 0x11a163f0)));
L_11a1283e:;
  /* 11a1283e or byte ptr [eax + 0x11a169a1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(DL); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a12844 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12845 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12847 jbe 0x11a1283e */
  if ((C.cf||C.zf)) goto L_11a1283e;
L_11a12849:;
  /* 11a12849 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a1284a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a1284b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a1284e jne 0x11a12824 */
  if (!C.zf) goto L_11a12824;
L_11a12850:;
  /* 11a12850 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a12853 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12856 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1285a jb 0x11a1281d */
  if (C.cf) goto L_11a1281d;
  /* 11a1285c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a1285f mov dword ptr [0x11a1688c], 1 */
  w32((uint32_t)(0x11a1688c), (0x1u));
  /* 11a12869 push eax */
  push32((uint32_t)(EAX));
  /* 11a1286a mov dword ptr [0x11a16870], eax */
  w32((uint32_t)(0x11a16870), (EAX));
  /* 11a1286f call 0x11a12942 */
  push32(0x11a12874u); f_11a12942();
  /* 11a12874 lea esi, [esi + 0x11a163fc] */
  ESI = ((uint32_t)(ESI + 0x11a163fc));
  /* 11a1287a mov edi, 0x11a16880 */
  EDI = (0x11a16880u);
  /* 11a1287f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a12880 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a12881 pop ecx */
  ECX = (pop32());
  /* 11a12882 mov dword ptr [0x11a16aa4], eax */
  w32((uint32_t)(0x11a16aa4), (EAX));
  /* 11a12887 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a12888 jmp 0x11a128dc */
  goto L_11a128dc;
L_11a1288a:;
  /* 11a1288a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a1288b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a1288c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a12890 jne 0x11a127dd */
  if (!C.zf) goto L_11a127dd;
L_11a12896:;
  /* 11a12896 mov eax, esi */
  EAX = (ESI);
L_11a12898:;
  /* 11a12898 or byte ptr [eax + 0x11a169a1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(0x8u); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a1289f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a128a0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a128a5 jb 0x11a12898 */
  if (C.cf) goto L_11a12898;
  /* 11a128a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a128a8 call 0x11a12942 */
  push32(0x11a128adu); f_11a12942();
  /* 11a128ad pop ecx */
  ECX = (pop32());
  /* 11a128ae mov dword ptr [0x11a16aa4], eax */
  w32((uint32_t)(0x11a16aa4), (EAX));
  /* 11a128b3 mov dword ptr [0x11a1688c], esi */
  w32((uint32_t)(0x11a1688c), (ESI));
  /* 11a128b9 jmp 0x11a128c2 */
  goto L_11a128c2;
L_11a128bb:;
  /* 11a128bb and dword ptr [0x11a1688c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a1688c)))&(0x0u); w32((uint32_t)(0x11a1688c), (_r)); fl_logic(_r,32); }
L_11a128c2:;
  /* 11a128c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a128c4 mov edi, 0x11a16880 */
  EDI = (0x11a16880u);
  /* 11a128c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a128ca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a128cb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a128cc jmp 0x11a128dc */
  goto L_11a128dc;
L_11a128ce:;
  /* 11a128ce cmp dword ptr [0x11a16818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a16818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a128d5 je 0x11a128e6 */
  if (C.zf) goto L_11a128e6;
L_11a128d7:;
  /* 11a128d7 call 0x11a12975 */
  push32(0x11a128dcu); f_11a12975();
L_11a128dc:;
  /* 11a128dc call 0x11a1299e */
  push32(0x11a128e1u); f_11a1299e();
  /* 11a128e1 jmp 0x11a12772 */
  goto L_11a12772;
L_11a128e6:;
  /* 11a128e6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a128e9:;
  /* 11a128e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a128eb call 0x11a12467 */
  push32(0x11a128f0u); f_11a12467();
  /* 11a128f0 pop ecx */
  ECX = (pop32());
  /* 11a128f1 mov eax, esi */
  EAX = (ESI);
  /* 11a128f3 pop edi */
  EDI = (pop32());
  /* 11a128f4 pop esi */
  ESI = (pop32());
  /* 11a128f5 pop ebx */
  EBX = (pop32());
  /* 11a128f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a128f7 ret  */
  ESPCHK(0x11a1274bu, _esp0);
  ESP += 4; return;
}

/* FUN_100028f8 @ 0x11a128f8 (74 bytes, 15 insns) */
void f_11a128f8(void) {
  FTRACE(0x11a128f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a128f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a128fc and dword ptr [0x11a16818], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a16818)))&(0x0u); w32((uint32_t)(0x11a16818), (_r)); fl_logic(_r,32); }
  /* 11a12903 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12906 jne 0x11a12918 */
  if (!C.zf) goto L_11a12918;
  /* 11a12908 mov dword ptr [0x11a16818], 1 */
  w32((uint32_t)(0x11a16818), (0x1u));
  /* 11a12912 jmp dword ptr [0x11a15034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a15034)))); return;
L_11a12918:;
  /* 11a12918 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1291b jne 0x11a1292d */
  if (!C.zf) goto L_11a1292d;
  /* 11a1291d mov dword ptr [0x11a16818], 1 */
  w32((uint32_t)(0x11a16818), (0x1u));
  /* 11a12927 jmp dword ptr [0x11a1502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a1502c)))); return;
L_11a1292d:;
  /* 11a1292d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12930 jne 0x11a12941 */
  if (!C.zf) goto L_11a12941;
  /* 11a12932 mov eax, dword ptr [0x11a16848] */
  EAX = (r32((uint32_t)(0x11a16848)));
  /* 11a12937 mov dword ptr [0x11a16818], 1 */
  w32((uint32_t)(0x11a16818), (0x1u));
L_11a12941:;
  /* 11a12941 ret  */
  ESPCHK(0x11a128f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002942 @ 0x11a12942 (51 bytes, 19 insns) */
void f_11a12942(void) {
  FTRACE(0x11a12942u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12942 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a12946 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a1294b je 0x11a1296f */
  if (C.zf) goto L_11a1296f;
  /* 11a1294d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12950 je 0x11a12969 */
  if (C.zf) goto L_11a12969;
  /* 11a12952 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12955 je 0x11a12963 */
  if (C.zf) goto L_11a12963;
  /* 11a12957 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a12958 je 0x11a1295d */
  if (C.zf) goto L_11a1295d;
  /* 11a1295a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a1295c ret  */
  ESPCHK(0x11a12942u, _esp0);
  ESP += 4; return;
L_11a1295d:;
  /* 11a1295d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a12962 ret  */
  ESPCHK(0x11a12942u, _esp0);
  ESP += 4; return;
L_11a12963:;
  /* 11a12963 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a12968 ret  */
  ESPCHK(0x11a12942u, _esp0);
  ESP += 4; return;
L_11a12969:;
  /* 11a12969 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a1296e ret  */
  ESPCHK(0x11a12942u, _esp0);
  ESP += 4; return;
L_11a1296f:;
  /* 11a1296f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a12974 ret  */
  ESPCHK(0x11a12942u, _esp0);
  ESP += 4; return;
}

/* FUN_10002975 @ 0x11a12975 (41 bytes, 17 insns) */
void f_11a12975(void) {
  FTRACE(0x11a12975u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12975 push edi */
  push32((uint32_t)(EDI));
  /* 11a12976 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a12978 pop ecx */
  ECX = (pop32());
  /* 11a12979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a1297b mov edi, 0x11a169a0 */
  EDI = (0x11a169a0u);
  /* 11a12980 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a12982 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a12983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12985 mov edi, 0x11a16880 */
  EDI = (0x11a16880u);
  /* 11a1298a mov dword ptr [0x11a16870], eax */
  w32((uint32_t)(0x11a16870), (EAX));
  /* 11a1298f mov dword ptr [0x11a1688c], eax */
  w32((uint32_t)(0x11a1688c), (EAX));
  /* 11a12994 mov dword ptr [0x11a16aa4], eax */
  w32((uint32_t)(0x11a16aa4), (EAX));
  /* 11a12999 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a1299a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a1299b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a1299c pop edi */
  EDI = (pop32());
  /* 11a1299d ret  */
  ESPCHK(0x11a12975u, _esp0);
  ESP += 4; return;
}

/* FUN_1000299e @ 0x11a1299e (389 bytes, 124 insns) */
void f_11a1299e(void) {
  FTRACE(0x11a1299eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1299e push ebp */
  push32((uint32_t)(EBP));
  /* 11a1299f mov ebp, esp */
  EBP = (ESP);
  /* 11a129a1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a129a7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a129aa push esi */
  push32((uint32_t)(ESI));
  /* 11a129ab push eax */
  push32((uint32_t)(EAX));
  /* 11a129ac push dword ptr [0x11a16870] */
  push32((uint32_t)(r32((uint32_t)(0x11a16870))));
  /* 11a129b2 call dword ptr [0x11a15030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15030))), 0x11a129b8u);
  /* 11a129b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a129bb jne 0x11a12ad7 */
  if (!C.zf) goto L_11a12ad7;
  /* 11a129c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a129c3 mov esi, 0x100 */
  ESI = (0x100u);
L_11a129c8:;
  /* 11a129c8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11a129cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a129d0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a129d2 jb 0x11a129c8 */
  if (C.cf) goto L_11a129c8;
  /* 11a129d4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11a129d7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11a129de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a129e0 je 0x11a12a19 */
  if (C.zf) goto L_11a12a19;
  /* 11a129e2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a129e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a129e4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11a129e7:;
  /* 11a129e7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a129ea movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a129ed cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a129ef ja 0x11a12a0e */
  if ((!C.cf&&!C.zf)) goto L_11a12a0e;
  /* 11a129f1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a129f3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11a129fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a129fb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11a12a00 mov ebx, ecx */
  EBX = (ECX);
  /* 11a12a02 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12a05 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a12a07 mov ecx, ebx */
  ECX = (EBX);
  /* 11a12a09 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a12a0c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11a12a0e:;
  /* 11a12a0e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a12a0f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a12a10 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11a12a13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a12a15 jne 0x11a129e7 */
  if (!C.zf) goto L_11a129e7;
  /* 11a12a17 pop edi */
  EDI = (pop32());
  /* 11a12a18 pop ebx */
  EBX = (pop32());
L_11a12a19:;
  /* 11a12a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12a1b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11a12a21 push dword ptr [0x11a16aa4] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa4))));
  /* 11a12a27 push dword ptr [0x11a16870] */
  push32((uint32_t)(r32((uint32_t)(0x11a16870))));
  /* 11a12a2d push eax */
  push32((uint32_t)(EAX));
  /* 11a12a2e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a12a34 push esi */
  push32((uint32_t)(ESI));
  /* 11a12a35 push eax */
  push32((uint32_t)(EAX));
  /* 11a12a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a12a38 call 0x11a13b12 */
  push32(0x11a12a3du); f_11a13b12();
  /* 11a12a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12a3f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11a12a45 push dword ptr [0x11a16870] */
  push32((uint32_t)(r32((uint32_t)(0x11a16870))));
  /* 11a12a4b push esi */
  push32((uint32_t)(ESI));
  /* 11a12a4c push eax */
  push32((uint32_t)(EAX));
  /* 11a12a4d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a12a53 push esi */
  push32((uint32_t)(ESI));
  /* 11a12a54 push eax */
  push32((uint32_t)(EAX));
  /* 11a12a55 push esi */
  push32((uint32_t)(ESI));
  /* 11a12a56 push dword ptr [0x11a16aa4] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa4))));
  /* 11a12a5c call 0x11a138c3 */
  push32(0x11a12a61u); f_11a138c3();
  /* 11a12a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12a63 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11a12a69 push dword ptr [0x11a16870] */
  push32((uint32_t)(r32((uint32_t)(0x11a16870))));
  /* 11a12a6f push esi */
  push32((uint32_t)(ESI));
  /* 11a12a70 push eax */
  push32((uint32_t)(EAX));
  /* 11a12a71 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a12a77 push esi */
  push32((uint32_t)(ESI));
  /* 11a12a78 push eax */
  push32((uint32_t)(EAX));
  /* 11a12a79 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a12a7e push dword ptr [0x11a16aa4] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa4))));
  /* 11a12a84 call 0x11a138c3 */
  push32(0x11a12a89u); f_11a138c3();
  /* 11a12a89 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12a8e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11a12a94:;
  /* 11a12a94 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a12a97 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a12a9a je 0x11a12ab2 */
  if (C.zf) goto L_11a12ab2;
  /* 11a12a9c or byte ptr [eax + 0x11a169a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(0x10u); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a12aa3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11a12aaa:;
  /* 11a12aaa mov byte ptr [eax + 0x11a168a0], dl */
  w8((uint32_t)(EAX + 0x11a168a0), (DL));
  /* 11a12ab0 jmp 0x11a12ace */
  goto L_11a12ace;
L_11a12ab2:;
  /* 11a12ab2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11a12ab5 je 0x11a12ac7 */
  if (C.zf) goto L_11a12ac7;
  /* 11a12ab7 or byte ptr [eax + 0x11a169a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(0x20u); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a12abe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11a12ac5 jmp 0x11a12aaa */
  goto L_11a12aaa;
L_11a12ac7:;
  /* 11a12ac7 and byte ptr [eax + 0x11a168a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a168a0)))&(0x0u); w8((uint32_t)(EAX + 0x11a168a0), (_r)); fl_logic(_r,8); }
L_11a12ace:;
  /* 11a12ace inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12acf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a12ad0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a12ad1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ad3 jb 0x11a12a94 */
  if (C.cf) goto L_11a12a94;
  /* 11a12ad5 jmp 0x11a12b20 */
  goto L_11a12b20;
L_11a12ad7:;
  /* 11a12ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a12ad9 mov esi, 0x100 */
  ESI = (0x100u);
L_11a12ade:;
  /* 11a12ade cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ae1 jb 0x11a12afc */
  if (C.cf) goto L_11a12afc;
  /* 11a12ae3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ae6 ja 0x11a12afc */
  if ((!C.cf&&!C.zf)) goto L_11a12afc;
  /* 11a12ae8 or byte ptr [eax + 0x11a169a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(0x10u); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a12aef mov cl, al */
  CL = (AL);
  /* 11a12af1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11a12af4:;
  /* 11a12af4 mov byte ptr [eax + 0x11a168a0], cl */
  w8((uint32_t)(EAX + 0x11a168a0), (CL));
  /* 11a12afa jmp 0x11a12b1b */
  goto L_11a12b1b;
L_11a12afc:;
  /* 11a12afc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12aff jb 0x11a12b14 */
  if (C.cf) goto L_11a12b14;
  /* 11a12b01 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12b04 ja 0x11a12b14 */
  if ((!C.cf&&!C.zf)) goto L_11a12b14;
  /* 11a12b06 or byte ptr [eax + 0x11a169a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a169a1)))|(0x20u); w8((uint32_t)(EAX + 0x11a169a1), (_r)); fl_logic(_r,8); }
  /* 11a12b0d mov cl, al */
  CL = (AL);
  /* 11a12b0f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a12b12 jmp 0x11a12af4 */
  goto L_11a12af4;
L_11a12b14:;
  /* 11a12b14 and byte ptr [eax + 0x11a168a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a168a0)))&(0x0u); w8((uint32_t)(EAX + 0x11a168a0), (_r)); fl_logic(_r,8); }
L_11a12b1b:;
  /* 11a12b1b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a12b1c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12b1e jb 0x11a12ade */
  if (C.cf) goto L_11a12ade;
L_11a12b20:;
  /* 11a12b20 pop esi */
  ESI = (pop32());
  /* 11a12b21 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12b22 ret  */
  ESPCHK(0x11a1299eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b23 @ 0x11a12b23 (28 bytes, 7 insns) */
void f_11a12b23(void) {
  FTRACE(0x11a12b23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12b23 cmp dword ptr [0x11a16bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a16bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12b2a jne 0x11a12b3e */
  if (!C.zf) goto L_11a12b3e;
  /* 11a12b2c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a12b2e call 0x11a1274b */
  push32(0x11a12b33u); f_11a1274b();
  /* 11a12b33 pop ecx */
  ECX = (pop32());
  /* 11a12b34 mov dword ptr [0x11a16bc8], 1 */
  w32((uint32_t)(0x11a16bc8), (0x1u));
L_11a12b3e:;
  /* 11a12b3e ret  */
  ESPCHK(0x11a12b23u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b40 @ 0x11a12b40 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11a12b40(void) {
  FTRACE(0x11a12b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a12b41 mov ebp, esp */
  EBP = (ESP);
  /* 11a12b43 push edi */
  push32((uint32_t)(EDI));
  /* 11a12b44 push esi */
  push32((uint32_t)(ESI));
  /* 11a12b45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a12b48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a12b4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12b4e mov eax, ecx */
  EAX = (ECX);
  /* 11a12b50 mov edx, ecx */
  EDX = (ECX);
  /* 11a12b52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12b54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12b56 jbe 0x11a12b60 */
  if ((C.cf||C.zf)) goto L_11a12b60;
  /* 11a12b58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12b5a jb 0x11a12cd8 */
  if (C.cf) goto L_11a12cd8;
L_11a12b60:;
  /* 11a12b60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a12b66 jne 0x11a12b7c */
  if (!C.zf) goto L_11a12b7c;
  /* 11a12b68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12b6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a12b6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12b71 jb 0x11a12b9c */
  if (C.cf) goto L_11a12b9c;
  /* 11a12b73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12b75 jmp dword ptr [edx*4 + 0x11a12c88] */
  switch (EDX) {
    case 0: goto L_11a12c98;
    case 1: goto L_11a12ca0;
    case 2: goto L_11a12cac;
    case 3: goto L_11a12cc0;
    default: x86_unimpl("switch@0x11a12b75 out of table"); return;
  }
L_11a12b7c:;
  /* 11a12b7c mov eax, edi */
  EAX = (EDI);
  /* 11a12b7e mov edx, 3 */
  EDX = (0x3u);
  /* 11a12b83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12b86 jb 0x11a12b94 */
  if (C.cf) goto L_11a12b94;
  /* 11a12b88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a12b8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12b8d jmp dword ptr [eax*4 + 0x11a12ba0] */
  switch (EAX) {
    case 1: goto L_11a12bb0;
    case 2: goto L_11a12bdc;
    case 3: goto L_11a12c00;
    default: x86_unimpl("switch@0x11a12b8d out of table"); return;
  }
L_11a12b94:;
  /* 11a12b94 jmp dword ptr [ecx*4 + 0x11a12c98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a12c98)))); return;
  /* 11a12b9b nop  */
  /* nop */
L_11a12b9c:;
  /* 11a12b9c jmp dword ptr [ecx*4 + 0x11a12c1c] */
  switch (ECX) {
    case 0: goto L_11a12c7f;
    case 1: goto L_11a12c6c;
    case 2: goto L_11a12c64;
    case 3: goto L_11a12c5c;
    case 4: goto L_11a12c54;
    case 5: goto L_11a12c4c;
    case 6: goto L_11a12c44;
    case 7: goto L_11a12c3c;
    default: x86_unimpl("switch@0x11a12b9c out of table"); return;
  }
  /* 11a12ba3 nop  */
  /* nop */
L_11a12bb0:;
  /* 11a12bb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12bb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a12bb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a12bb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a12bb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a12bbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a12bbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12bc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a12bc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12bc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12bcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12bce jb 0x11a12b9c */
  if (C.cf) goto L_11a12b9c;
  /* 11a12bd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12bd2 jmp dword ptr [edx*4 + 0x11a12c88] */
  switch (EDX) {
    case 0: goto L_11a12c98;
    case 1: goto L_11a12ca0;
    case 2: goto L_11a12cac;
    case 3: goto L_11a12cc0;
    default: x86_unimpl("switch@0x11a12bd2 out of table"); return;
  }
  /* 11a12bd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a12bdc:;
  /* 11a12bdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12bde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a12be0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a12be2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a12be5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12be8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a12beb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12bee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12bf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12bf4 jb 0x11a12b9c */
  if (C.cf) goto L_11a12b9c;
  /* 11a12bf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12bf8 jmp dword ptr [edx*4 + 0x11a12c88] */
  switch (EDX) {
    case 0: goto L_11a12c98;
    case 1: goto L_11a12ca0;
    case 2: goto L_11a12cac;
    case 3: goto L_11a12cc0;
    default: x86_unimpl("switch@0x11a12bf8 out of table"); return;
  }
  /* 11a12bff nop  */
  /* nop */
L_11a12c00:;
  /* 11a12c00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12c02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a12c04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a12c06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a12c07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12c0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a12c0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12c0e jb 0x11a12b9c */
  if (C.cf) goto L_11a12b9c;
  /* 11a12c10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12c12 jmp dword ptr [edx*4 + 0x11a12c88] */
  switch (EDX) {
    case 0: goto L_11a12c98;
    case 1: goto L_11a12ca0;
    case 2: goto L_11a12cac;
    case 3: goto L_11a12cc0;
    default: x86_unimpl("switch@0x11a12c12 out of table"); return;
  }
  /* 11a12c19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a12c3c:;
  /* 11a12c3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a12c40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a12c44:;
  /* 11a12c44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a12c48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a12c4c:;
  /* 11a12c4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a12c50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a12c54:;
  /* 11a12c54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a12c58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a12c5c:;
  /* 11a12c5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a12c60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a12c64:;
  /* 11a12c64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a12c68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a12c6c:;
  /* 11a12c6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a12c70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a12c74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a12c7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12c7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a12c7f:;
  /* 11a12c7f jmp dword ptr [edx*4 + 0x11a12c88] */
  switch (EDX) {
    case 0: goto L_11a12c98;
    case 1: goto L_11a12ca0;
    case 2: goto L_11a12cac;
    case 3: goto L_11a12cc0;
    default: x86_unimpl("switch@0x11a12c7f out of table"); return;
  }
  /* 11a12c86 mov edi, edi */
  EDI = (EDI);
L_11a12c98:;
  /* 11a12c98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12c9b pop esi */
  ESI = (pop32());
  /* 11a12c9c pop edi */
  EDI = (pop32());
  /* 11a12c9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12c9e ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12c9f nop  */
  /* nop */
L_11a12ca0:;
  /* 11a12ca0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a12ca2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a12ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12ca7 pop esi */
  ESI = (pop32());
  /* 11a12ca8 pop edi */
  EDI = (pop32());
  /* 11a12ca9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12caa ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12cab nop  */
  /* nop */
L_11a12cac:;
  /* 11a12cac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a12cae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a12cb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a12cb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a12cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12cb9 pop esi */
  ESI = (pop32());
  /* 11a12cba pop edi */
  EDI = (pop32());
  /* 11a12cbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12cbc ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12cbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a12cc0:;
  /* 11a12cc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a12cc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a12cc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a12cc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a12cca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a12ccd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a12cd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12cd3 pop esi */
  ESI = (pop32());
  /* 11a12cd4 pop edi */
  EDI = (pop32());
  /* 11a12cd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12cd6 ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12cd7 nop  */
  /* nop */
L_11a12cd8:;
  /* 11a12cd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a12cdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a12ce0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a12ce6 jne 0x11a12d0c */
  if (!C.zf) goto L_11a12d0c;
  /* 11a12ce8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12ceb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a12cee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12cf1 jb 0x11a12d00 */
  if (C.cf) goto L_11a12d00;
  /* 11a12cf3 std  */
  C.df=1;
  /* 11a12cf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12cf6 cld  */
  C.df=0;
  /* 11a12cf7 jmp dword ptr [edx*4 + 0x11a12e20] */
  switch (EDX) {
    case 0: goto L_11a12e30;
    case 1: goto L_11a12e38;
    case 2: goto L_11a12e48;
    case 3: goto L_11a12e5c;
    default: x86_unimpl("switch@0x11a12cf7 out of table"); return;
  }
  /* 11a12cfe mov edi, edi */
  EDI = (EDI);
L_11a12d00:;
  /* 11a12d00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a12d02 jmp dword ptr [ecx*4 + 0x11a12dd0] */
  switch (ECX) {
    case 0: goto L_11a12e17;
    default: x86_unimpl("switch@0x11a12d02 out of table"); return;
  }
  /* 11a12d09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a12d0c:;
  /* 11a12d0c mov eax, edi */
  EAX = (EDI);
  /* 11a12d0e mov edx, 3 */
  EDX = (0x3u);
  /* 11a12d13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12d16 jb 0x11a12d24 */
  if (C.cf) goto L_11a12d24;
  /* 11a12d18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a12d1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12d1d jmp dword ptr [eax*4 + 0x11a12d28] */
  switch (EAX) {
    case 1: goto L_11a12d38;
    case 2: goto L_11a12d58;
    case 3: goto L_11a12d80;
    default: x86_unimpl("switch@0x11a12d1d out of table"); return;
  }
L_11a12d24:;
  /* 11a12d24 jmp dword ptr [ecx*4 + 0x11a12e20] */
  switch (ECX) {
    case 0: goto L_11a12e30;
    case 1: goto L_11a12e38;
    case 2: goto L_11a12e48;
    case 3: goto L_11a12e5c;
    default: x86_unimpl("switch@0x11a12d24 out of table"); return;
  }
  /* 11a12d2b nop  */
  /* nop */
L_11a12d38:;
  /* 11a12d38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a12d3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12d3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a12d40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a12d41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12d44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a12d45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12d48 jb 0x11a12d00 */
  if (C.cf) goto L_11a12d00;
  /* 11a12d4a std  */
  C.df=1;
  /* 11a12d4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12d4d cld  */
  C.df=0;
  /* 11a12d4e jmp dword ptr [edx*4 + 0x11a12e20] */
  switch (EDX) {
    case 0: goto L_11a12e30;
    case 1: goto L_11a12e38;
    case 2: goto L_11a12e48;
    case 3: goto L_11a12e5c;
    default: x86_unimpl("switch@0x11a12d4e out of table"); return;
  }
  /* 11a12d55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a12d58:;
  /* 11a12d58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a12d5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12d5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a12d60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a12d63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12d66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a12d69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12d6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12d6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12d72 jb 0x11a12d00 */
  if (C.cf) goto L_11a12d00;
  /* 11a12d74 std  */
  C.df=1;
  /* 11a12d75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12d77 cld  */
  C.df=0;
  /* 11a12d78 jmp dword ptr [edx*4 + 0x11a12e20] */
  switch (EDX) {
    case 0: goto L_11a12e30;
    case 1: goto L_11a12e38;
    case 2: goto L_11a12e48;
    case 3: goto L_11a12e5c;
    default: x86_unimpl("switch@0x11a12d78 out of table"); return;
  }
  /* 11a12d7f nop  */
  /* nop */
L_11a12d80:;
  /* 11a12d80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a12d83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a12d85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a12d88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a12d8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a12d8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a12d91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a12d94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a12d97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12d9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12d9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12da0 jb 0x11a12d00 */
  if (C.cf) goto L_11a12d00;
  /* 11a12da6 std  */
  C.df=1;
  /* 11a12da7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a12da9 cld  */
  C.df=0;
  /* 11a12daa jmp dword ptr [edx*4 + 0x11a12e20] */
  switch (EDX) {
    case 0: goto L_11a12e30;
    case 1: goto L_11a12e38;
    case 2: goto L_11a12e48;
    case 3: goto L_11a12e5c;
    default: x86_unimpl("switch@0x11a12daa out of table"); return;
  }
  /* 11a12db1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a12db4 aam 0x2d */
  x86_unimpl("aam @ 0x11a12db4");
  /* 11a12db6 mov eax, dword ptr [0xa12ddc11] */
  EAX = (r32((uint32_t)(0xa12ddc11)));
  /* 11a12dbb adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12dbd sub eax, 0x2dec11a1 */
  { uint32_t _a=(EAX),_b=(0x2dec11a1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12dc2 mov eax, dword ptr [0xa12df411] */
  EAX = (r32((uint32_t)(0xa12df411)));
  /* 11a12dc7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12dc9 sub eax, 0x2e0411a1 */
  { uint32_t _a=(EAX),_b=(0x2e0411a1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12dd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a12dd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a12ddc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a12de0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a12de4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a12de8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a12dec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a12df0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a12df4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a12df8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a12dfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a12e00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a12e04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a12e08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a12e0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a12e13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12e15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a12e17:;
  /* 11a12e17 jmp dword ptr [edx*4 + 0x11a12e20] */
  switch (EDX) {
    case 0: goto L_11a12e30;
    case 1: goto L_11a12e38;
    case 2: goto L_11a12e48;
    case 3: goto L_11a12e5c;
    default: x86_unimpl("switch@0x11a12e17 out of table"); return;
  }
  /* 11a12e1e mov edi, edi */
  EDI = (EDI);
L_11a12e30:;
  /* 11a12e30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12e33 pop esi */
  ESI = (pop32());
  /* 11a12e34 pop edi */
  EDI = (pop32());
  /* 11a12e35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12e36 ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12e37 nop  */
  /* nop */
L_11a12e38:;
  /* 11a12e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a12e3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a12e3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12e41 pop esi */
  ESI = (pop32());
  /* 11a12e42 pop edi */
  EDI = (pop32());
  /* 11a12e43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12e44 ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12e45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a12e48:;
  /* 11a12e48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a12e4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a12e4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a12e51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a12e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12e57 pop esi */
  ESI = (pop32());
  /* 11a12e58 pop edi */
  EDI = (pop32());
  /* 11a12e59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12e5a ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
  /* 11a12e5b nop  */
  /* nop */
L_11a12e5c:;
  /* 11a12e5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a12e5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a12e62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a12e65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a12e68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a12e6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a12e6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12e71 pop esi */
  ESI = (pop32());
  /* 11a12e72 pop edi */
  EDI = (pop32());
  /* 11a12e73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a12e74 ret  */
  ESPCHK(0x11a12b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e75 @ 0x11a12e75 (62 bytes, 15 insns) */
void f_11a12e75(void) {
  FTRACE(0x11a12e75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12e75 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a12e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a12e7c push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a12e82 call dword ptr [0x11a15038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15038))), 0x11a12e88u);
  /* 11a12e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a12e8a mov dword ptr [0x11a1686c], eax */
  w32((uint32_t)(0x11a1686c), (EAX));
  /* 11a12e8f jne 0x11a12e92 */
  if (!C.zf) goto L_11a12e92;
  /* 11a12e91 ret  */
  ESPCHK(0x11a12e75u, _esp0);
  ESP += 4; return;
L_11a12e92:;
  /* 11a12e92 and dword ptr [0x11a16864], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a16864)))&(0x0u); w32((uint32_t)(0x11a16864), (_r)); fl_logic(_r,32); }
  /* 11a12e99 and dword ptr [0x11a16868], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a16868)))&(0x0u); w32((uint32_t)(0x11a16868), (_r)); fl_logic(_r,32); }
  /* 11a12ea0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a12ea2 mov dword ptr [0x11a16860], eax */
  w32((uint32_t)(0x11a16860), (EAX));
  /* 11a12ea7 mov dword ptr [0x11a16858], 0x10 */
  w32((uint32_t)(0x11a16858), (0x10u));
  /* 11a12eb1 pop eax */
  EAX = (pop32());
  /* 11a12eb2 ret  */
  ESPCHK(0x11a12e75u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eb3 @ 0x11a12eb3 (43 bytes, 14 insns) */
void f_11a12eb3(void) {
  FTRACE(0x11a12eb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12eb3 mov eax, dword ptr [0x11a16868] */
  EAX = (r32((uint32_t)(0x11a16868)));
  /* 11a12eb8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a12ebb mov eax, dword ptr [0x11a1686c] */
  EAX = (r32((uint32_t)(0x11a1686c)));
  /* 11a12ec0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11a12ec3:;
  /* 11a12ec3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ec5 jae 0x11a12edb */
  if (!C.cf) goto L_11a12edb;
  /* 11a12ec7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a12ecb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12ece cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ed4 jb 0x11a12edd */
  if (C.cf) goto L_11a12edd;
  /* 11a12ed6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12ed9 jmp 0x11a12ec3 */
  goto L_11a12ec3;
L_11a12edb:;
  /* 11a12edb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a12edd:;
  /* 11a12edd ret  */
  ESPCHK(0x11a12eb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ede @ 0x11a12ede (811 bytes, 264 insns) */
void f_11a12ede(void) {
  FTRACE(0x11a12edeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a12ede push ebp */
  push32((uint32_t)(EBP));
  /* 11a12edf mov ebp, esp */
  EBP = (ESP);
  /* 11a12ee1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12ee4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a12ee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12eea push ebx */
  push32((uint32_t)(EBX));
  /* 11a12eeb push esi */
  push32((uint32_t)(ESI));
  /* 11a12eec mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a12eef mov esi, edx */
  ESI = (EDX);
  /* 11a12ef1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12ef4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a12ef7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12efa push edi */
  push32((uint32_t)(EDI));
  /* 11a12efb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11a12efe mov ecx, esi */
  ECX = (ESI);
  /* 11a12f00 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11a12f03 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a12f09 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a12f0a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a12f0d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a12f14 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a12f17 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a12f1a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11a12f1d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11a12f20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a12f23 jne 0x11a12fa4 */
  if (!C.zf) goto L_11a12fa4;
  /* 11a12f25 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a12f28 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a12f2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a12f2b pop edi */
  EDI = (pop32());
  /* 11a12f2c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a12f2f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12f31 jbe 0x11a12f36 */
  if ((C.cf||C.zf)) goto L_11a12f36;
  /* 11a12f33 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a12f36:;
  /* 11a12f36 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a12f3a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12f3e jne 0x11a12f88 */
  if (!C.zf) goto L_11a12f88;
  /* 11a12f40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a12f43 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12f46 jae 0x11a12f64 */
  if (!C.cf) goto L_11a12f64;
  /* 11a12f48 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a12f4d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a12f4f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a12f53 not edi */
  EDI = (~(EDI));
  /* 11a12f55 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a12f59 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a12f5b jne 0x11a12f88 */
  if (!C.zf) goto L_11a12f88;
  /* 11a12f5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12f60 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a12f62 jmp 0x11a12f88 */
  goto L_11a12f88;
L_11a12f64:;
  /* 11a12f64 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12f67 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a12f6c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a12f6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a12f71 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a12f75 not edi */
  EDI = (~(EDI));
  /* 11a12f77 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a12f7e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a12f80 jne 0x11a12f88 */
  if (!C.zf) goto L_11a12f88;
  /* 11a12f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a12f85 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a12f88:;
  /* 11a12f88 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11a12f8c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a12f90 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a12f93 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a12f97 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11a12f9b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12f9e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a12fa1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11a12fa4:;
  /* 11a12fa4 mov edi, ebx */
  EDI = (EBX);
  /* 11a12fa6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a12fa9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a12faa cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12fad jbe 0x11a12fb2 */
  if ((C.cf||C.zf)) goto L_11a12fb2;
  /* 11a12faf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a12fb1 pop edi */
  EDI = (pop32());
L_11a12fb2:;
  /* 11a12fb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a12fb5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a12fb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a12fbb jne 0x11a13061 */
  if (!C.zf) goto L_11a13061;
  /* 11a12fc1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a12fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a12fc7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a12fca push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a12fcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a12fcf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a12fd0 pop edx */
  EDX = (pop32());
  /* 11a12fd1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12fd3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a12fd6 jbe 0x11a12fdd */
  if ((C.cf||C.zf)) goto L_11a12fdd;
  /* 11a12fd8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11a12fdb mov ecx, edx */
  ECX = (EDX);
L_11a12fdd:;
  /* 11a12fdd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a12fe0 mov edi, ebx */
  EDI = (EBX);
  /* 11a12fe2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a12fe5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a12fe8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a12fe9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12feb jbe 0x11a12fef */
  if ((C.cf||C.zf)) goto L_11a12fef;
  /* 11a12fed mov edi, edx */
  EDI = (EDX);
L_11a12fef:;
  /* 11a12fef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ff1 je 0x11a1305e */
  if (C.zf) goto L_11a1305e;
  /* 11a12ff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a12ff6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a12ff9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a12ffc jne 0x11a13046 */
  if (!C.zf) goto L_11a13046;
  /* 11a12ffe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a13001 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13004 jae 0x11a13022 */
  if (!C.cf) goto L_11a13022;
  /* 11a13006 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a1300b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a1300d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a13011 not edx */
  EDX = (~(EDX));
  /* 11a13013 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a13017 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a13019 jne 0x11a13046 */
  if (!C.zf) goto L_11a13046;
  /* 11a1301b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a1301e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a13020 jmp 0x11a13046 */
  goto L_11a13046;
L_11a13022:;
  /* 11a13022 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13025 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a1302a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a1302c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a1302f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a13033 not edx */
  EDX = (~(EDX));
  /* 11a13035 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a1303c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a1303e jne 0x11a13046 */
  if (!C.zf) goto L_11a13046;
  /* 11a13040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13043 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a13046:;
  /* 11a13046 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a13049 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a1304c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a1304f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a13052 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a13055 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a13058 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a1305b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11a1305e:;
  /* 11a1305e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11a13061:;
  /* 11a13061 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13065 jne 0x11a13070 */
  if (!C.zf) goto L_11a13070;
  /* 11a13067 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1306a je 0x11a130f9 */
  if (C.zf) goto L_11a130f9;
L_11a13070:;
  /* 11a13070 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a13073 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11a13076 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a13079 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a1307c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a1307f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11a13082 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a13085 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a13088 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a1308b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a1308e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a13091 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13094 jne 0x11a130f9 */
  if (!C.zf) goto L_11a130f9;
  /* 11a13096 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11a1309a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1309d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a130a0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a130a2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11a130a6 jae 0x11a130cd */
  if (!C.cf) goto L_11a130cd;
  /* 11a130a8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a130ac jne 0x11a130bc */
  if (!C.zf) goto L_11a130bc;
  /* 11a130ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a130b3 mov ecx, edi */
  ECX = (EDI);
  /* 11a130b5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a130b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a130ba or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a130bc:;
  /* 11a130bc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a130c1 mov ecx, edi */
  ECX = (EDI);
  /* 11a130c3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a130c5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11a130c9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a130cb jmp 0x11a130f6 */
  goto L_11a130f6;
L_11a130cd:;
  /* 11a130cd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a130d1 jne 0x11a130e3 */
  if (!C.zf) goto L_11a130e3;
  /* 11a130d3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a130d6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a130db shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a130dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a130e0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a130e3:;
  /* 11a130e3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a130e6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a130eb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a130ed lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11a130f4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a130f6:;
  /* 11a130f6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11a130f9:;
  /* 11a130f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a130fc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11a130fe mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11a13102 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11a13104 jne 0x11a13204 */
  if (!C.zf) goto L_11a13204;
  /* 11a1310a mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a1310f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13111 je 0x11a131f6 */
  if (C.zf) goto L_11a131f6;
  /* 11a13117 mov ecx, dword ptr [0x11a1685c] */
  ECX = (r32((uint32_t)(0x11a1685c)));
  /* 11a1311d mov edi, dword ptr [0x11a1504c] */
  EDI = (r32((uint32_t)(0x11a1504c)));
  /* 11a13123 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a13126 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13129 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11a1312e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a13133 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13134 push ecx */
  push32((uint32_t)(ECX));
  /* 11a13135 call edi */
  call_ind((uint32_t)(EDI), 0x11a13137u);
  /* 11a13137 mov ecx, dword ptr [0x11a1685c] */
  ECX = (r32((uint32_t)(0x11a1685c)));
  /* 11a1313d mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a13142 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a13147 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a13149 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a1314c mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a13151 mov ecx, dword ptr [0x11a1685c] */
  ECX = (r32((uint32_t)(0x11a1685c)));
  /* 11a13157 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a1315a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a13162 mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a13167 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a1316a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11a1316d mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a13172 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a13175 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a13179 jne 0x11a13184 */
  if (!C.zf) goto L_11a13184;
  /* 11a1317b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a1317f mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
L_11a13184:;
  /* 11a13184 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13188 jne 0x11a131f6 */
  if (!C.zf) goto L_11a131f6;
  /* 11a1318a push ebx */
  push32((uint32_t)(EBX));
  /* 11a1318b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1318d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11a13190 call edi */
  call_ind((uint32_t)(EDI), 0x11a13192u);
  /* 11a13192 mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a13197 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11a1319a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a1319c push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a131a2 call dword ptr [0x11a15048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15048))), 0x11a131a8u);
  /* 11a131a8 mov eax, dword ptr [0x11a16868] */
  EAX = (r32((uint32_t)(0x11a16868)));
  /* 11a131ad mov edx, dword ptr [0x11a1686c] */
  EDX = (r32((uint32_t)(0x11a1686c)));
  /* 11a131b3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a131b6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a131b9 mov ecx, eax */
  ECX = (EAX);
  /* 11a131bb mov eax, dword ptr [0x11a16864] */
  EAX = (r32((uint32_t)(0x11a16864)));
  /* 11a131c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a131c2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11a131c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a131c7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11a131ca push ecx */
  push32((uint32_t)(ECX));
  /* 11a131cb push eax */
  push32((uint32_t)(EAX));
  /* 11a131cc call 0x11a13c60 */
  push32(0x11a131d1u); f_11a13c60();
  /* 11a131d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a131d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a131d7 dec dword ptr [0x11a16868] */
  { uint32_t _r=(r32((uint32_t)(0x11a16868)))-1; w32((uint32_t)(0x11a16868), (_r)); fl_dec(_r,32); }
  /* 11a131dd cmp eax, dword ptr [0x11a16864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a16864))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a131e3 jbe 0x11a131e8 */
  if ((C.cf||C.zf)) goto L_11a131e8;
  /* 11a131e5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a131e8:;
  /* 11a131e8 mov ecx, dword ptr [0x11a1686c] */
  ECX = (r32((uint32_t)(0x11a1686c)));
  /* 11a131ee mov dword ptr [0x11a16860], ecx */
  w32((uint32_t)(0x11a16860), (ECX));
  /* 11a131f4 jmp 0x11a131f9 */
  goto L_11a131f9;
L_11a131f6:;
  /* 11a131f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11a131f9:;
  /* 11a131f9 mov dword ptr [0x11a16864], eax */
  w32((uint32_t)(0x11a16864), (EAX));
  /* 11a131fe mov dword ptr [0x11a1685c], esi */
  w32((uint32_t)(0x11a1685c), (ESI));
L_11a13204:;
  /* 11a13204 pop edi */
  EDI = (pop32());
  /* 11a13205 pop esi */
  ESI = (pop32());
  /* 11a13206 pop ebx */
  EBX = (pop32());
  /* 11a13207 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13208 ret  */
  ESPCHK(0x11a12edeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003209 @ 0x11a13209 (777 bytes, 275 insns) */
void f_11a13209(void) {
  FTRACE(0x11a13209u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13209 push ebp */
  push32((uint32_t)(EBP));
  /* 11a1320a mov ebp, esp */
  EBP = (ESP);
  /* 11a1320c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a1320f mov eax, dword ptr [0x11a16868] */
  EAX = (r32((uint32_t)(0x11a16868)));
  /* 11a13214 mov edx, dword ptr [0x11a1686c] */
  EDX = (r32((uint32_t)(0x11a1686c)));
  /* 11a1321a push ebx */
  push32((uint32_t)(EBX));
  /* 11a1321b push esi */
  push32((uint32_t)(ESI));
  /* 11a1321c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a1321f push edi */
  push32((uint32_t)(EDI));
  /* 11a13220 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11a13223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13226 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a13229 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11a1322c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a1322f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a13232 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a13235 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a13236 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13239 jge 0x11a13249 */
  if ((C.sf==C.of)) goto L_11a13249;
  /* 11a1323b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a1323e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a13240 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a13244 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a13247 jmp 0x11a13259 */
  goto L_11a13259;
L_11a13249:;
  /* 11a13249 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1324c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a1324f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a13251 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a13253 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a13256 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a13259:;
  /* 11a13259 mov eax, dword ptr [0x11a16860] */
  EAX = (r32((uint32_t)(0x11a16860)));
  /* 11a1325e mov ebx, eax */
  EBX = (EAX);
  /* 11a13260 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13262 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a13265 jae 0x11a13280 */
  if (!C.cf) goto L_11a13280;
L_11a13267:;
  /* 11a13267 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a1326a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a1326c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a1326f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a13271 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a13273 jne 0x11a13280 */
  if (!C.zf) goto L_11a13280;
  /* 11a13275 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13278 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1327b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a1327e jb 0x11a13267 */
  if (C.cf) goto L_11a13267;
L_11a13280:;
  /* 11a13280 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13283 jne 0x11a132fe */
  if (!C.zf) goto L_11a132fe;
  /* 11a13285 mov ebx, edx */
  EBX = (EDX);
L_11a13287:;
  /* 11a13287 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13289 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a1328c jae 0x11a132a3 */
  if (!C.cf) goto L_11a132a3;
  /* 11a1328e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a13291 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a13293 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a13296 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a13298 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a1329a jne 0x11a132a1 */
  if (!C.zf) goto L_11a132a1;
  /* 11a1329c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1329f jmp 0x11a13287 */
  goto L_11a13287;
L_11a132a1:;
  /* 11a132a1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a132a3:;
  /* 11a132a3 jne 0x11a132fe */
  if (!C.zf) goto L_11a132fe;
L_11a132a5:;
  /* 11a132a5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a132a8 jae 0x11a132bb */
  if (!C.cf) goto L_11a132bb;
  /* 11a132aa cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a132ae jne 0x11a132b8 */
  if (!C.zf) goto L_11a132b8;
  /* 11a132b0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a132b3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a132b6 jmp 0x11a132a5 */
  goto L_11a132a5;
L_11a132b8:;
  /* 11a132b8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a132bb:;
  /* 11a132bb jne 0x11a132e3 */
  if (!C.zf) goto L_11a132e3;
  /* 11a132bd mov ebx, edx */
  EBX = (EDX);
L_11a132bf:;
  /* 11a132bf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a132c1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a132c4 jae 0x11a132d3 */
  if (!C.cf) goto L_11a132d3;
  /* 11a132c6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a132ca jne 0x11a132d1 */
  if (!C.zf) goto L_11a132d1;
  /* 11a132cc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a132cf jmp 0x11a132bf */
  goto L_11a132bf;
L_11a132d1:;
  /* 11a132d1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a132d3:;
  /* 11a132d3 jne 0x11a132e3 */
  if (!C.zf) goto L_11a132e3;
  /* 11a132d5 call 0x11a13512 */
  push32(0x11a132dau); f_11a13512();
  /* 11a132da mov ebx, eax */
  EBX = (EAX);
  /* 11a132dc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a132de mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a132e1 je 0x11a132f7 */
  if (C.zf) goto L_11a132f7;
L_11a132e3:;
  /* 11a132e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a132e4 call 0x11a135c3 */
  push32(0x11a132e9u); f_11a135c3();
  /* 11a132e9 pop ecx */
  ECX = (pop32());
  /* 11a132ea mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a132ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a132ef mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a132f2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a132f5 jne 0x11a132fe */
  if (!C.zf) goto L_11a132fe;
L_11a132f7:;
  /* 11a132f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a132f9 jmp 0x11a1350d */
  goto L_11a1350d;
L_11a132fe:;
  /* 11a132fe mov dword ptr [0x11a16860], ebx */
  w32((uint32_t)(0x11a16860), (EBX));
  /* 11a13304 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a13307 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a13309 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1330c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a1330f je 0x11a13325 */
  if (C.zf) goto L_11a13325;
  /* 11a13311 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a13318 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a1331c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a1331f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a13321 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a13323 jne 0x11a1335c */
  if (!C.zf) goto L_11a1335c;
L_11a13325:;
  /* 11a13325 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11a1332b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11a1332e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a13331 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11a13334 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a13338 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11a1333b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a1333d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a13340 jne 0x11a13359 */
  if (!C.zf) goto L_11a13359;
L_11a13342:;
  /* 11a13342 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11a13348 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a1334b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a1334e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13351 mov edi, esi */
  EDI = (ESI);
  /* 11a13353 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11a13355 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11a13357 je 0x11a13342 */
  if (C.zf) goto L_11a13342;
L_11a13359:;
  /* 11a13359 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11a1335c:;
  /* 11a1335c mov ecx, edx */
  ECX = (EDX);
  /* 11a1335e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a13360 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a13366 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a1336d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a13370 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a13374 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11a13376 jne 0x11a13385 */
  if (!C.zf) goto L_11a13385;
  /* 11a13378 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a1337f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a13381 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a13384 pop edi */
  EDI = (pop32());
L_11a13385:;
  /* 11a13385 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a13387 jl 0x11a1338e */
  if ((C.sf!=C.of)) goto L_11a1338e;
  /* 11a13389 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a1338b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a1338c jmp 0x11a13385 */
  goto L_11a13385;
L_11a1338e:;
  /* 11a1338e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a13391 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11a13395 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a13397 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a1339a mov esi, ecx */
  ESI = (ECX);
  /* 11a1339c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a1339f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a133a2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a133a3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a133a6 jle 0x11a133ab */
  if ((C.zf||C.sf!=C.of)) goto L_11a133ab;
  /* 11a133a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a133aa pop esi */
  ESI = (pop32());
L_11a133ab:;
  /* 11a133ab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a133ad je 0x11a134c0 */
  if (C.zf) goto L_11a134c0;
  /* 11a133b3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a133b6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a133b9 jne 0x11a1341c */
  if (!C.zf) goto L_11a1341c;
  /* 11a133bb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a133be jge 0x11a133eb */
  if ((C.sf==C.of)) goto L_11a133eb;
  /* 11a133c0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a133c5 mov ecx, edi */
  ECX = (EDI);
  /* 11a133c7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a133c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a133cc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a133d0 not ebx */
  EBX = (~(EBX));
  /* 11a133d2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a133d5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11a133d9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11a133dd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a133df jne 0x11a13419 */
  if (!C.zf) goto L_11a13419;
  /* 11a133e1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a133e4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a133e7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11a133e9 jmp 0x11a1341c */
  goto L_11a1341c;
L_11a133eb:;
  /* 11a133eb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a133ee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a133f3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a133f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a133f8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a133fc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a13403 not ebx */
  EBX = (~(EBX));
  /* 11a13405 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a13407 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a13409 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a1340c jne 0x11a13419 */
  if (!C.zf) goto L_11a13419;
  /* 11a1340e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13411 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a13414 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a13417 jmp 0x11a1341c */
  goto L_11a1341c;
L_11a13419:;
  /* 11a13419 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a1341c:;
  /* 11a1341c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a1341f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11a13422 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13426 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a13429 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a1342c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11a1342f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a13432 je 0x11a134cc */
  if (C.zf) goto L_11a134cc;
  /* 11a13438 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a1343b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a1343f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a13442 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11a13445 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a13448 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a1344b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a1344e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a13451 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a13454 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13457 jne 0x11a134bd */
  if (!C.zf) goto L_11a134bd;
  /* 11a13459 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a1345d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13460 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a13463 jge 0x11a1348e */
  if ((C.sf==C.of)) goto L_11a1348e;
  /* 11a13465 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a13467 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a1346b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a1346f jne 0x11a1347c */
  if (!C.zf) goto L_11a1347c;
  /* 11a13471 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a13476 mov ecx, esi */
  ECX = (ESI);
  /* 11a13478 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a1347a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11a1347c:;
  /* 11a1347c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a13481 mov ecx, esi */
  ECX = (ESI);
  /* 11a13483 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a13485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a13488 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a1348c jmp 0x11a134bd */
  goto L_11a134bd;
L_11a1348e:;
  /* 11a1348e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a13490 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a13494 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a13498 jne 0x11a134a7 */
  if (!C.zf) goto L_11a134a7;
  /* 11a1349a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a1349d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a134a2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a134a4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11a134a7:;
  /* 11a134a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a134aa lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a134b1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a134b4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a134b9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a134bb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a134bd:;
  /* 11a134bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a134c0:;
  /* 11a134c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a134c2 je 0x11a134cf */
  if (C.zf) goto L_11a134cf;
  /* 11a134c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a134c6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11a134ca jmp 0x11a134cf */
  goto L_11a134cf;
L_11a134cc:;
  /* 11a134cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a134cf:;
  /* 11a134cf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11a134d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a134d4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a134d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a134d9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11a134dd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a134e0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a134e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a134e4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11a134e7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a134e9 jne 0x11a13505 */
  if (!C.zf) goto L_11a13505;
  /* 11a134eb cmp ebx, dword ptr [0x11a16864] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a16864))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a134f1 jne 0x11a13505 */
  if (!C.zf) goto L_11a13505;
  /* 11a134f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a134f6 cmp ecx, dword ptr [0x11a1685c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a1685c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a134fc jne 0x11a13505 */
  if (!C.zf) goto L_11a13505;
  /* 11a134fe and dword ptr [0x11a16864], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a16864)))&(0x0u); w32((uint32_t)(0x11a16864), (_r)); fl_logic(_r,32); }
L_11a13505:;
  /* 11a13505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a13508 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a1350a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11a1350d:;
  /* 11a1350d pop edi */
  EDI = (pop32());
  /* 11a1350e pop esi */
  ESI = (pop32());
  /* 11a1350f pop ebx */
  EBX = (pop32());
  /* 11a13510 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13511 ret  */
  ESPCHK(0x11a13209u, _esp0);
  ESP += 4; return;
}

/* FUN_10003512 @ 0x11a13512 (177 bytes, 53 insns) */
void f_11a13512(void) {
  FTRACE(0x11a13512u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13512 mov eax, dword ptr [0x11a16868] */
  EAX = (r32((uint32_t)(0x11a16868)));
  /* 11a13517 mov ecx, dword ptr [0x11a16858] */
  ECX = (r32((uint32_t)(0x11a16858)));
  /* 11a1351d push esi */
  push32((uint32_t)(ESI));
  /* 11a1351e push edi */
  push32((uint32_t)(EDI));
  /* 11a1351f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a13521 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13523 jne 0x11a13555 */
  if (!C.zf) goto L_11a13555;
  /* 11a13525 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11a13529 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a1352c push eax */
  push32((uint32_t)(EAX));
  /* 11a1352d push dword ptr [0x11a1686c] */
  push32((uint32_t)(r32((uint32_t)(0x11a1686c))));
  /* 11a13533 push edi */
  push32((uint32_t)(EDI));
  /* 11a13534 push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a1353a call dword ptr [0x11a15024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15024))), 0x11a13540u);
  /* 11a13540 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13542 je 0x11a135a5 */
  if (C.zf) goto L_11a135a5;
  /* 11a13544 add dword ptr [0x11a16858], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11a16858))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11a16858), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a1354b mov dword ptr [0x11a1686c], eax */
  w32((uint32_t)(0x11a1686c), (EAX));
  /* 11a13550 mov eax, dword ptr [0x11a16868] */
  EAX = (r32((uint32_t)(0x11a16868)));
L_11a13555:;
  /* 11a13555 mov ecx, dword ptr [0x11a1686c] */
  ECX = (r32((uint32_t)(0x11a1686c)));
  /* 11a1355b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a13560 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a13562 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a13565 push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a1356b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a1356e call dword ptr [0x11a15038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15038))), 0x11a13574u);
  /* 11a13574 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13576 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11a13579 je 0x11a135a5 */
  if (C.zf) goto L_11a135a5;
  /* 11a1357b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a1357d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a13582 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a13587 push edi */
  push32((uint32_t)(EDI));
  /* 11a13588 call dword ptr [0x11a15028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15028))), 0x11a1358eu);
  /* 11a1358e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13590 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a13593 jne 0x11a135a9 */
  if (!C.zf) goto L_11a135a9;
  /* 11a13595 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a13598 push edi */
  push32((uint32_t)(EDI));
  /* 11a13599 push dword ptr [0x11a16aa8] */
  push32((uint32_t)(r32((uint32_t)(0x11a16aa8))));
  /* 11a1359f call dword ptr [0x11a15048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15048))), 0x11a135a5u);
L_11a135a5:;
  /* 11a135a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a135a7 jmp 0x11a135c0 */
  goto L_11a135c0;
L_11a135a9:;
  /* 11a135a9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a135ad mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a135af mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11a135b2 inc dword ptr [0x11a16868] */
  { uint32_t _r=(r32((uint32_t)(0x11a16868)))+1; w32((uint32_t)(0x11a16868), (_r)); fl_inc(_r,32); }
  /* 11a135b8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a135bb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a135be mov eax, esi */
  EAX = (ESI);
L_11a135c0:;
  /* 11a135c0 pop edi */
  EDI = (pop32());
  /* 11a135c1 pop esi */
  ESI = (pop32());
  /* 11a135c2 ret  */
  ESPCHK(0x11a13512u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c3 @ 0x11a135c3 (251 bytes, 85 insns) */
void f_11a135c3(void) {
  FTRACE(0x11a135c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a135c3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a135c4 mov ebp, esp */
  EBP = (ESP);
  /* 11a135c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a135c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a135ca push ebx */
  push32((uint32_t)(EBX));
  /* 11a135cb push esi */
  push32((uint32_t)(ESI));
  /* 11a135cc push edi */
  push32((uint32_t)(EDI));
  /* 11a135cd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11a135d0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a135d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a135d5:;
  /* 11a135d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a135d7 jl 0x11a135de */
  if ((C.sf!=C.of)) goto L_11a135de;
  /* 11a135d9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a135db inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a135dc jmp 0x11a135d5 */
  goto L_11a135d5;
L_11a135de:;
  /* 11a135de mov eax, ebx */
  EAX = (EBX);
  /* 11a135e0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a135e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a135e8 pop edx */
  EDX = (pop32());
  /* 11a135e9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11a135f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a135f3:;
  /* 11a135f3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11a135f6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11a135f9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a135fc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a135fd jne 0x11a135f3 */
  if (!C.zf) goto L_11a135f3;
  /* 11a135ff mov edi, ebx */
  EDI = (EBX);
  /* 11a13601 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a13603 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a13606 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13609 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a1360e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a13613 push edi */
  push32((uint32_t)(EDI));
  /* 11a13614 call dword ptr [0x11a15028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15028))), 0x11a1361au);
  /* 11a1361a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1361c jne 0x11a13626 */
  if (!C.zf) goto L_11a13626;
  /* 11a1361e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a13621 jmp 0x11a136b9 */
  goto L_11a136b9;
L_11a13626:;
  /* 11a13626 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11a1362c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1362e ja 0x11a1366c */
  if ((!C.cf&&!C.zf)) goto L_11a1366c;
  /* 11a13630 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11a13633:;
  /* 11a13633 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a13637 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11a1363e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11a13644 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11a1364b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a1364d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11a13653 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a13656 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11a13660 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13665 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11a13668 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1366a jbe 0x11a13633 */
  if ((C.cf||C.zf)) goto L_11a13633;
L_11a1366c:;
  /* 11a1366c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a1366f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11a13672 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13677 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a13679 pop edi */
  EDI = (pop32());
  /* 11a1367a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a1367d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a13680 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11a13683 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a13686 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a13689 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a1368e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11a13695 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11a13698 mov cl, al */
  CL = (AL);
  /* 11a1369a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a1369c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a1369e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a136a1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11a136a4 jne 0x11a136a9 */
  if (!C.zf) goto L_11a136a9;
  /* 11a136a6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11a136a9:;
  /* 11a136a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a136ae mov ecx, ebx */
  ECX = (EBX);
  /* 11a136b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a136b2 not edx */
  EDX = (~(EDX));
  /* 11a136b4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a136b7 mov eax, ebx */
  EAX = (EBX);
L_11a136b9:;
  /* 11a136b9 pop edi */
  EDI = (pop32());
  /* 11a136ba pop esi */
  ESI = (pop32());
  /* 11a136bb pop ebx */
  EBX = (pop32());
  /* 11a136bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a136bd ret  */
  ESPCHK(0x11a135c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100036be @ 0x11a136be (137 bytes, 50 insns) */
void f_11a136be(void) {
  FTRACE(0x11a136beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a136be push ebx */
  push32((uint32_t)(EBX));
  /* 11a136bf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a136c1 cmp dword ptr [0x11a1681c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a1681c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a136c7 push esi */
  push32((uint32_t)(ESI));
  /* 11a136c8 push edi */
  push32((uint32_t)(EDI));
  /* 11a136c9 jne 0x11a1370d */
  if (!C.zf) goto L_11a1370d;
  /* 11a136cb push 0x11a15438 */
  push32((uint32_t)(0x11a15438u));
  /* 11a136d0 call dword ptr [0x11a15018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15018))), 0x11a136d6u);
  /* 11a136d6 mov edi, eax */
  EDI = (EAX);
  /* 11a136d8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a136da je 0x11a13743 */
  if (C.zf) goto L_11a13743;
  /* 11a136dc mov esi, dword ptr [0x11a1501c] */
  ESI = (r32((uint32_t)(0x11a1501c)));
  /* 11a136e2 push 0x11a1542c */
  push32((uint32_t)(0x11a1542cu));
  /* 11a136e7 push edi */
  push32((uint32_t)(EDI));
  /* 11a136e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a136eau);
  /* 11a136ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a136ec mov dword ptr [0x11a1681c], eax */
  w32((uint32_t)(0x11a1681c), (EAX));
  /* 11a136f1 je 0x11a13743 */
  if (C.zf) goto L_11a13743;
  /* 11a136f3 push 0x11a1541c */
  push32((uint32_t)(0x11a1541cu));
  /* 11a136f8 push edi */
  push32((uint32_t)(EDI));
  /* 11a136f9 call esi */
  call_ind((uint32_t)(ESI), 0x11a136fbu);
  /* 11a136fb push 0x11a15408 */
  push32((uint32_t)(0x11a15408u));
  /* 11a13700 push edi */
  push32((uint32_t)(EDI));
  /* 11a13701 mov dword ptr [0x11a16820], eax */
  w32((uint32_t)(0x11a16820), (EAX));
  /* 11a13706 call esi */
  call_ind((uint32_t)(ESI), 0x11a13708u);
  /* 11a13708 mov dword ptr [0x11a16824], eax */
  w32((uint32_t)(0x11a16824), (EAX));
L_11a1370d:;
  /* 11a1370d mov eax, dword ptr [0x11a16820] */
  EAX = (r32((uint32_t)(0x11a16820)));
  /* 11a13712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13714 je 0x11a1372c */
  if (C.zf) goto L_11a1372c;
  /* 11a13716 call eax */
  call_ind((uint32_t)(EAX), 0x11a13718u);
  /* 11a13718 mov ebx, eax */
  EBX = (EAX);
  /* 11a1371a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a1371c je 0x11a1372c */
  if (C.zf) goto L_11a1372c;
  /* 11a1371e mov eax, dword ptr [0x11a16824] */
  EAX = (r32((uint32_t)(0x11a16824)));
  /* 11a13723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13725 je 0x11a1372c */
  if (C.zf) goto L_11a1372c;
  /* 11a13727 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13728 call eax */
  call_ind((uint32_t)(EAX), 0x11a1372au);
  /* 11a1372a mov ebx, eax */
  EBX = (EAX);
L_11a1372c:;
  /* 11a1372c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a13730 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a13734 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a13738 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13739 call dword ptr [0x11a1681c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1681c))), 0x11a1373fu);
L_11a1373f:;
  /* 11a1373f pop edi */
  EDI = (pop32());
  /* 11a13740 pop esi */
  ESI = (pop32());
  /* 11a13741 pop ebx */
  EBX = (pop32());
  /* 11a13742 ret  */
  ESPCHK(0x11a136beu, _esp0);
  ESP += 4; return;
L_11a13743:;
  /* 11a13743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a13745 jmp 0x11a1373f */
  goto L_11a1373f;
}

/* _strncpy @ 0x11a13750 (254 bytes, 109 insns) */
void f_11a13750(void) {
  FTRACE(0x11a13750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13750 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a13754 push edi */
  push32((uint32_t)(EDI));
  /* 11a13755 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a13757 je 0x11a137d3 */
  if (C.zf) goto L_11a137d3;
  /* 11a13759 push esi */
  push32((uint32_t)(ESI));
  /* 11a1375a push ebx */
  push32((uint32_t)(EBX));
  /* 11a1375b mov ebx, ecx */
  EBX = (ECX);
  /* 11a1375d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a13761 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a13767 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a1376b jne 0x11a13774 */
  if (!C.zf) goto L_11a13774;
  /* 11a1376d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13770 jne 0x11a137e1 */
  if (!C.zf) goto L_11a137e1;
  /* 11a13772 jmp 0x11a13795 */
  goto L_11a13795;
L_11a13774:;
  /* 11a13774 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13776 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a13777 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13779 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a1377a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a1377b je 0x11a137a2 */
  if (C.zf) goto L_11a137a2;
  /* 11a1377d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a1377f je 0x11a137aa */
  if (C.zf) goto L_11a137aa;
  /* 11a13781 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a13787 jne 0x11a13774 */
  if (!C.zf) goto L_11a13774;
  /* 11a13789 mov ebx, ecx */
  EBX = (ECX);
  /* 11a1378b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a1378e jne 0x11a137e1 */
  if (!C.zf) goto L_11a137e1;
L_11a13790:;
  /* 11a13790 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a13793 je 0x11a137a2 */
  if (C.zf) goto L_11a137a2;
L_11a13795:;
  /* 11a13795 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13797 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a13798 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a1379a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a1379b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a1379d je 0x11a137ce */
  if (C.zf) goto L_11a137ce;
  /* 11a1379f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a137a0 jne 0x11a13795 */
  if (!C.zf) goto L_11a13795;
L_11a137a2:;
  /* 11a137a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a137a6 pop ebx */
  EBX = (pop32());
  /* 11a137a7 pop esi */
  ESI = (pop32());
  /* 11a137a8 pop edi */
  EDI = (pop32());
  /* 11a137a9 ret  */
  ESPCHK(0x11a13750u, _esp0);
  ESP += 4; return;
L_11a137aa:;
  /* 11a137aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a137b0 je 0x11a137c4 */
  if (C.zf) goto L_11a137c4;
L_11a137b2:;
  /* 11a137b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a137b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a137b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a137b6 je 0x11a13846 */
  if (C.zf) goto L_11a13846;
  /* 11a137bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a137c2 jne 0x11a137b2 */
  if (!C.zf) goto L_11a137b2;
L_11a137c4:;
  /* 11a137c4 mov ebx, ecx */
  EBX = (ECX);
  /* 11a137c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a137c9 jne 0x11a13837 */
  if (!C.zf) goto L_11a13837;
L_11a137cb:;
  /* 11a137cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a137cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a137ce:;
  /* 11a137ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a137cf jne 0x11a137cb */
  if (!C.zf) goto L_11a137cb;
  /* 11a137d1 pop ebx */
  EBX = (pop32());
  /* 11a137d2 pop esi */
  ESI = (pop32());
L_11a137d3:;
  /* 11a137d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a137d7 pop edi */
  EDI = (pop32());
  /* 11a137d8 ret  */
  ESPCHK(0x11a13750u, _esp0);
  ESP += 4; return;
L_11a137d9:;
  /* 11a137d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a137db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a137de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a137df je 0x11a13790 */
  if (C.zf) goto L_11a13790;
L_11a137e1:;
  /* 11a137e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a137e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a137e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a137ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a137ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a137ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a137f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a137f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a137f9 je 0x11a137d9 */
  if (C.zf) goto L_11a137d9;
  /* 11a137fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a137fd je 0x11a1382b */
  if (C.zf) goto L_11a1382b;
  /* 11a137ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a13801 je 0x11a13821 */
  if (C.zf) goto L_11a13821;
  /* 11a13803 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a13809 je 0x11a13817 */
  if (C.zf) goto L_11a13817;
  /* 11a1380b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a13811 jne 0x11a137d9 */
  if (!C.zf) goto L_11a137d9;
  /* 11a13813 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a13815 jmp 0x11a1382f */
  goto L_11a1382f;
L_11a13817:;
  /* 11a13817 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a1381d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a1381f jmp 0x11a1382f */
  goto L_11a1382f;
L_11a13821:;
  /* 11a13821 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a13827 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a13829 jmp 0x11a1382f */
  goto L_11a1382f;
L_11a1382b:;
  /* 11a1382b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a1382d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a1382f:;
  /* 11a1382f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a13834 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a13835 je 0x11a13841 */
  if (C.zf) goto L_11a13841;
L_11a13837:;
  /* 11a13837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a13839:;
  /* 11a13839 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a1383b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1383e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a1383f jne 0x11a13839 */
  if (!C.zf) goto L_11a13839;
L_11a13841:;
  /* 11a13841 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a13844 jne 0x11a137cb */
  if (!C.zf) goto L_11a137cb;
L_11a13846:;
  /* 11a13846 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a1384a pop ebx */
  EBX = (pop32());
  /* 11a1384b pop esi */
  ESI = (pop32());
  /* 11a1384c pop edi */
  EDI = (pop32());
  /* 11a1384d ret  */
  ESPCHK(0x11a13750u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a13850 (88 bytes, 40 insns) */
void f_11a13850(void) {
  FTRACE(0x11a13850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13850 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a13854 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a13858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a1385a je 0x11a138a3 */
  if (C.zf) goto L_11a138a3;
  /* 11a1385c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a1385e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a13862 push edi */
  push32((uint32_t)(EDI));
  /* 11a13863 mov edi, ecx */
  EDI = (ECX);
  /* 11a13865 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13868 jb 0x11a13897 */
  if (C.cf) goto L_11a13897;
  /* 11a1386a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a1386c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a1386f je 0x11a13879 */
  if (C.zf) goto L_11a13879;
  /* 11a13871 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a13873:;
  /* 11a13873 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13875 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a13876 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a13877 jne 0x11a13873 */
  if (!C.zf) goto L_11a13873;
L_11a13879:;
  /* 11a13879 mov ecx, eax */
  ECX = (EAX);
  /* 11a1387b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a1387e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13880 mov ecx, eax */
  ECX = (EAX);
  /* 11a13882 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a13885 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13887 mov ecx, edx */
  ECX = (EDX);
  /* 11a13889 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a1388c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a1388f je 0x11a13897 */
  if (C.zf) goto L_11a13897;
  /* 11a13891 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a13893 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a13895 je 0x11a1389d */
  if (C.zf) goto L_11a1389d;
L_11a13897:;
  /* 11a13897 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13899 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a1389a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a1389b jne 0x11a13897 */
  if (!C.zf) goto L_11a13897;
L_11a1389d:;
  /* 11a1389d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a138a1 pop edi */
  EDI = (pop32());
  /* 11a138a2 ret  */
  ESPCHK(0x11a13850u, _esp0);
  ESP += 4; return;
L_11a138a3:;
  /* 11a138a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a138a7 ret  */
  ESPCHK(0x11a13850u, _esp0);
  ESP += 4; return;
}

/* FUN_100038a8 @ 0x11a138a8 (27 bytes, 13 insns) */
void f_11a138a8(void) {
  FTRACE(0x11a138a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a138a8 mov eax, dword ptr [0x11a16828] */
  EAX = (r32((uint32_t)(0x11a16828)));
  /* 11a138ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a138af je 0x11a138c0 */
  if (C.zf) goto L_11a138c0;
  /* 11a138b1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a138b5 call eax */
  call_ind((uint32_t)(EAX), 0x11a138b7u);
  /* 11a138b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a138b9 pop ecx */
  ECX = (pop32());
  /* 11a138ba je 0x11a138c0 */
  if (C.zf) goto L_11a138c0;
  /* 11a138bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a138be pop eax */
  EAX = (pop32());
  /* 11a138bf ret  */
  ESPCHK(0x11a138a8u, _esp0);
  ESP += 4; return;
L_11a138c0:;
  /* 11a138c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a138c2 ret  */
  ESPCHK(0x11a138a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100038c3 @ 0x11a138c3 (511 bytes, 193 insns) */
void f_11a138c3(void) {
  FTRACE(0x11a138c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a138c3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a138c4 mov ebp, esp */
  EBP = (ESP);
  /* 11a138c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a138c8 push 0x11a15450 */
  push32((uint32_t)(0x11a15450u));
  /* 11a138cd push 0x11a14090 */
  push32((uint32_t)(0x11a14090u));
  /* 11a138d2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a138d8 push eax */
  push32((uint32_t)(EAX));
  /* 11a138d9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a138e0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a138e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a138e4 push esi */
  push32((uint32_t)(ESI));
  /* 11a138e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a138e6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a138e9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a138eb cmp dword ptr [0x11a16850], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a16850))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a138f1 jne 0x11a13939 */
  if (!C.zf) goto L_11a13939;
  /* 11a138f3 push edi */
  push32((uint32_t)(EDI));
  /* 11a138f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a138f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a138f7 pop ebx */
  EBX = (pop32());
  /* 11a138f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a138f9 push 0x11a15448 */
  push32((uint32_t)(0x11a15448u));
  /* 11a138fe mov esi, 0x100 */
  ESI = (0x100u);
  /* 11a13903 push esi */
  push32((uint32_t)(ESI));
  /* 11a13904 push edi */
  push32((uint32_t)(EDI));
  /* 11a13905 call dword ptr [0x11a1500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1500c))), 0x11a1390bu);
  /* 11a1390b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a1390d je 0x11a13917 */
  if (C.zf) goto L_11a13917;
  /* 11a1390f mov dword ptr [0x11a16850], ebx */
  w32((uint32_t)(0x11a16850), (EBX));
  /* 11a13915 jmp 0x11a13939 */
  goto L_11a13939;
L_11a13917:;
  /* 11a13917 push edi */
  push32((uint32_t)(EDI));
  /* 11a13918 push edi */
  push32((uint32_t)(EDI));
  /* 11a13919 push ebx */
  push32((uint32_t)(EBX));
  /* 11a1391a push 0x11a15444 */
  push32((uint32_t)(0x11a15444u));
  /* 11a1391f push esi */
  push32((uint32_t)(ESI));
  /* 11a13920 push edi */
  push32((uint32_t)(EDI));
  /* 11a13921 call dword ptr [0x11a15010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15010))), 0x11a13927u);
  /* 11a13927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13929 je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a1392f mov dword ptr [0x11a16850], 2 */
  w32((uint32_t)(0x11a16850), (0x2u));
L_11a13939:;
  /* 11a13939 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1393c jle 0x11a1394e */
  if ((C.zf||C.sf!=C.of)) goto L_11a1394e;
  /* 11a1393e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a13941 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a13944 call 0x11a13ae7 */
  push32(0x11a13949u); f_11a13ae7();
  /* 11a13949 pop ecx */
  ECX = (pop32());
  /* 11a1394a pop ecx */
  ECX = (pop32());
  /* 11a1394b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a1394e:;
  /* 11a1394e mov eax, dword ptr [0x11a16850] */
  EAX = (r32((uint32_t)(0x11a16850)));
  /* 11a13953 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13956 jne 0x11a13975 */
  if (!C.zf) goto L_11a13975;
  /* 11a13958 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a1395b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a1395e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a13961 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a13964 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13967 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a1396a call dword ptr [0x11a15010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15010))), 0x11a13970u);
  /* 11a13970 jmp 0x11a13a53 */
  goto L_11a13a53;
L_11a13975:;
  /* 11a13975 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13978 jne 0x11a13a51 */
  if (!C.zf) goto L_11a13a51;
  /* 11a1397e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13981 jne 0x11a1398b */
  if (!C.zf) goto L_11a1398b;
  /* 11a13983 mov eax, dword ptr [0x11a16848] */
  EAX = (r32((uint32_t)(0x11a16848)));
  /* 11a13988 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a1398b:;
  /* 11a1398b push edi */
  push32((uint32_t)(EDI));
  /* 11a1398c push edi */
  push32((uint32_t)(EDI));
  /* 11a1398d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a13990 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a13993 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a13996 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a13998 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a1399a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a1399d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a1399e push eax */
  push32((uint32_t)(EAX));
  /* 11a1399f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a139a2 call dword ptr [0x11a15020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15020))), 0x11a139a8u);
  /* 11a139a8 mov ebx, eax */
  EBX = (EAX);
  /* 11a139aa mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11a139ad cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a139af je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a139b5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a139b8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11a139bb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a139be and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a139c0 call 0x11a14170 */
  push32(0x11a139c5u); f_11a14170();
  /* 11a139c5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a139c8 mov eax, esp */
  EAX = (ESP);
  /* 11a139ca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a139cd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a139d1 jmp 0x11a139e6 */
  goto L_11a139e6;
  /* 11a139d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a139d5 pop eax */
  EAX = (pop32());
  /* 11a139d6 ret  */
  ESPCHK(0x11a138c3u, _esp0);
  ESP += 4; return;
  /* 11a139d7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a139da xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a139dc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a139df or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a139e3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11a139e6:;
  /* 11a139e6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a139e9 je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a139eb push ebx */
  push32((uint32_t)(EBX));
  /* 11a139ec push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a139ef push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a139f2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a139f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a139f7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a139fa call dword ptr [0x11a15020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15020))), 0x11a13a00u);
  /* 11a13a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13a02 je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a13a04 push edi */
  push32((uint32_t)(EDI));
  /* 11a13a05 push edi */
  push32((uint32_t)(EDI));
  /* 11a13a06 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13a07 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a13a0a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13a0d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a13a10 call dword ptr [0x11a1500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1500c))), 0x11a13a16u);
  /* 11a13a16 mov esi, eax */
  ESI = (EAX);
  /* 11a13a18 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11a13a1b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13a1d je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a13a1f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11a13a23 je 0x11a13a65 */
  if (C.zf) goto L_11a13a65;
  /* 11a13a25 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13a28 je 0x11a13ae0 */
  if (C.zf) goto L_11a13ae0;
  /* 11a13a2e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13a31 jg 0x11a13a51 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a13a51;
  /* 11a13a33 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a13a36 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a13a39 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13a3a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a13a3d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13a40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a13a43 call dword ptr [0x11a1500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1500c))), 0x11a13a49u);
  /* 11a13a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13a4b jne 0x11a13ae0 */
  if (!C.zf) goto L_11a13ae0;
L_11a13a51:;
  /* 11a13a51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a13a53:;
  /* 11a13a53 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a13a56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a13a59 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a13a60 pop edi */
  EDI = (pop32());
  /* 11a13a61 pop esi */
  ESI = (pop32());
  /* 11a13a62 pop ebx */
  EBX = (pop32());
  /* 11a13a63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13a64 ret  */
  ESPCHK(0x11a138c3u, _esp0);
  ESP += 4; return;
L_11a13a65:;
  /* 11a13a65 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a13a6c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a13a6f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13a72 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a13a74 call 0x11a14170 */
  push32(0x11a13a79u); f_11a14170();
  /* 11a13a79 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a13a7c mov ebx, esp */
  EBX = (ESP);
  /* 11a13a7e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a13a81 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a13a85 jmp 0x11a13a99 */
  goto L_11a13a99;
  /* 11a13a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a13a89 pop eax */
  EAX = (pop32());
  /* 11a13a8a ret  */
  ESPCHK(0x11a138c3u, _esp0);
  ESP += 4; return;
  /* 11a13a8b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a13a8e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a13a90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a13a92 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a13a96 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11a13a99:;
  /* 11a13a99 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13a9b je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a13a9d push esi */
  push32((uint32_t)(ESI));
  /* 11a13a9e push ebx */
  push32((uint32_t)(EBX));
  /* 11a13a9f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a13aa2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a13aa5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13aa8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a13aab call dword ptr [0x11a1500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a1500c))), 0x11a13ab1u);
  /* 11a13ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13ab3 je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
  /* 11a13ab5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11a13ab9 push edi */
  push32((uint32_t)(EDI));
  /* 11a13aba jne 0x11a13ac0 */
  if (!C.zf) goto L_11a13ac0;
  /* 11a13abc push edi */
  push32((uint32_t)(EDI));
  /* 11a13abd push edi */
  push32((uint32_t)(EDI));
  /* 11a13abe jmp 0x11a13ac6 */
  goto L_11a13ac6;
L_11a13ac0:;
  /* 11a13ac0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a13ac3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11a13ac6:;
  /* 11a13ac6 push esi */
  push32((uint32_t)(ESI));
  /* 11a13ac7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13ac8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a13acd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a13ad0 call dword ptr [0x11a15098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15098))), 0x11a13ad6u);
  /* 11a13ad6 mov esi, eax */
  ESI = (EAX);
  /* 11a13ad8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13ada je 0x11a13a51 */
  if (C.zf) goto L_11a13a51;
L_11a13ae0:;
  /* 11a13ae0 mov eax, esi */
  EAX = (ESI);
  /* 11a13ae2 jmp 0x11a13a53 */
  goto L_11a13a53;
}

/* FUN_10003ae7 @ 0x11a13ae7 (43 bytes, 20 insns) */
void f_11a13ae7(void) {
  FTRACE(0x11a13ae7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13ae7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a13aeb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a13aef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a13af1 push esi */
  push32((uint32_t)(ESI));
  /* 11a13af2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11a13af5 je 0x11a13b04 */
  if (C.zf) goto L_11a13b04;
L_11a13af7:;
  /* 11a13af7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a13afa je 0x11a13b04 */
  if (C.zf) goto L_11a13b04;
  /* 11a13afc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a13afd mov esi, ecx */
  ESI = (ECX);
  /* 11a13aff dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a13b00 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a13b02 jne 0x11a13af7 */
  if (!C.zf) goto L_11a13af7;
L_11a13b04:;
  /* 11a13b04 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a13b07 pop esi */
  ESI = (pop32());
  /* 11a13b08 jne 0x11a13b0f */
  if (!C.zf) goto L_11a13b0f;
  /* 11a13b0a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13b0e ret  */
  ESPCHK(0x11a13ae7u, _esp0);
  ESP += 4; return;
L_11a13b0f:;
  /* 11a13b0f mov eax, edx */
  EAX = (EDX);
  /* 11a13b11 ret  */
  ESPCHK(0x11a13ae7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b12 @ 0x11a13b12 (318 bytes, 123 insns) */
void f_11a13b12(void) {
  FTRACE(0x11a13b12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13b12 push ebp */
  push32((uint32_t)(EBP));
  /* 11a13b13 mov ebp, esp */
  EBP = (ESP);
  /* 11a13b15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a13b17 push 0x11a15468 */
  push32((uint32_t)(0x11a15468u));
  /* 11a13b1c push 0x11a14090 */
  push32((uint32_t)(0x11a14090u));
  /* 11a13b21 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a13b27 push eax */
  push32((uint32_t)(EAX));
  /* 11a13b28 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a13b2f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13b32 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13b33 push esi */
  push32((uint32_t)(ESI));
  /* 11a13b34 push edi */
  push32((uint32_t)(EDI));
  /* 11a13b35 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a13b38 mov eax, dword ptr [0x11a16854] */
  EAX = (r32((uint32_t)(0x11a16854)));
  /* 11a13b3d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a13b3f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13b41 jne 0x11a13b81 */
  if (!C.zf) goto L_11a13b81;
  /* 11a13b43 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a13b46 push eax */
  push32((uint32_t)(EAX));
  /* 11a13b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a13b49 pop esi */
  ESI = (pop32());
  /* 11a13b4a push esi */
  push32((uint32_t)(ESI));
  /* 11a13b4b push 0x11a15448 */
  push32((uint32_t)(0x11a15448u));
  /* 11a13b50 push esi */
  push32((uint32_t)(ESI));
  /* 11a13b51 call dword ptr [0x11a15008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15008))), 0x11a13b57u);
  /* 11a13b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13b59 je 0x11a13b5f */
  if (C.zf) goto L_11a13b5f;
  /* 11a13b5b mov eax, esi */
  EAX = (ESI);
  /* 11a13b5d jmp 0x11a13b7c */
  goto L_11a13b7c;
L_11a13b5f:;
  /* 11a13b5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a13b62 push eax */
  push32((uint32_t)(EAX));
  /* 11a13b63 push esi */
  push32((uint32_t)(ESI));
  /* 11a13b64 push 0x11a15444 */
  push32((uint32_t)(0x11a15444u));
  /* 11a13b69 push esi */
  push32((uint32_t)(ESI));
  /* 11a13b6a push ebx */
  push32((uint32_t)(EBX));
  /* 11a13b6b call dword ptr [0x11a15014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15014))), 0x11a13b71u);
  /* 11a13b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a13b73 je 0x11a13c47 */
  if (C.zf) goto L_11a13c47;
  /* 11a13b79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a13b7b pop eax */
  EAX = (pop32());
L_11a13b7c:;
  /* 11a13b7c mov dword ptr [0x11a16854], eax */
  w32((uint32_t)(0x11a16854), (EAX));
L_11a13b81:;
  /* 11a13b81 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13b84 jne 0x11a13baa */
  if (!C.zf) goto L_11a13baa;
  /* 11a13b86 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a13b89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13b8b jne 0x11a13b92 */
  if (!C.zf) goto L_11a13b92;
  /* 11a13b8d mov eax, dword ptr [0x11a16838] */
  EAX = (r32((uint32_t)(0x11a16838)));
L_11a13b92:;
  /* 11a13b92 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a13b95 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a13b98 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13b9b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a13b9e push eax */
  push32((uint32_t)(EAX));
  /* 11a13b9f call dword ptr [0x11a15014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15014))), 0x11a13ba5u);
  /* 11a13ba5 jmp 0x11a13c49 */
  goto L_11a13c49;
L_11a13baa:;
  /* 11a13baa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13bad jne 0x11a13c47 */
  if (!C.zf) goto L_11a13c47;
  /* 11a13bb3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13bb6 jne 0x11a13bc0 */
  if (!C.zf) goto L_11a13bc0;
  /* 11a13bb8 mov eax, dword ptr [0x11a16848] */
  EAX = (r32((uint32_t)(0x11a16848)));
  /* 11a13bbd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a13bc0:;
  /* 11a13bc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13bc1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a13bc2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a13bc5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13bc8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a13bcb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a13bcd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13bcf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a13bd2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a13bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11a13bd4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a13bd7 call dword ptr [0x11a15020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15020))), 0x11a13bddu);
  /* 11a13bdd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a13be0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13be2 je 0x11a13c47 */
  if (C.zf) goto L_11a13c47;
  /* 11a13be4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a13be7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11a13bea mov eax, edi */
  EAX = (EDI);
  /* 11a13bec add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13bef and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a13bf1 call 0x11a14170 */
  push32(0x11a13bf6u); f_11a14170();
  /* 11a13bf6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a13bf9 mov esi, esp */
  ESI = (ESP);
  /* 11a13bfb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11a13bfe push edi */
  push32((uint32_t)(EDI));
  /* 11a13bff push ebx */
  push32((uint32_t)(EBX));
  /* 11a13c00 push esi */
  push32((uint32_t)(ESI));
  /* 11a13c01 call 0x11a13850 */
  push32(0x11a13c06u); f_11a13850();
  /* 11a13c06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13c09 jmp 0x11a13c16 */
  goto L_11a13c16;
  /* 11a13c0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a13c0d pop eax */
  EAX = (pop32());
  /* 11a13c0e ret  */
  ESPCHK(0x11a13b12u, _esp0);
  ESP += 4; return;
  /* 11a13c0f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a13c12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a13c14 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a13c16:;
  /* 11a13c16 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a13c1a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13c1c je 0x11a13c47 */
  if (C.zf) goto L_11a13c47;
  /* 11a13c1e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a13c21 push esi */
  push32((uint32_t)(ESI));
  /* 11a13c22 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a13c25 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a13c28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a13c2a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a13c2d call dword ptr [0x11a15020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15020))), 0x11a13c33u);
  /* 11a13c33 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13c35 je 0x11a13c47 */
  if (C.zf) goto L_11a13c47;
  /* 11a13c37 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a13c3a push eax */
  push32((uint32_t)(EAX));
  /* 11a13c3b push esi */
  push32((uint32_t)(ESI));
  /* 11a13c3c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a13c3f call dword ptr [0x11a15008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a15008))), 0x11a13c45u);
  /* 11a13c45 jmp 0x11a13c49 */
  goto L_11a13c49;
L_11a13c47:;
  /* 11a13c47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a13c49:;
  /* 11a13c49 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a13c4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a13c4f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a13c56 pop edi */
  EDI = (pop32());
  /* 11a13c57 pop esi */
  ESI = (pop32());
  /* 11a13c58 pop ebx */
  EBX = (pop32());
  /* 11a13c59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13c5a ret  */
  ESPCHK(0x11a13b12u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c60 @ 0x11a13c60 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11a13c60(void) {
  FTRACE(0x11a13c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a13c61 mov ebp, esp */
  EBP = (ESP);
  /* 11a13c63 push edi */
  push32((uint32_t)(EDI));
  /* 11a13c64 push esi */
  push32((uint32_t)(ESI));
  /* 11a13c65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a13c68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a13c6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13c6e mov eax, ecx */
  EAX = (ECX);
  /* 11a13c70 mov edx, ecx */
  EDX = (ECX);
  /* 11a13c72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13c74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13c76 jbe 0x11a13c80 */
  if ((C.cf||C.zf)) goto L_11a13c80;
  /* 11a13c78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13c7a jb 0x11a13df8 */
  if (C.cf) goto L_11a13df8;
L_11a13c80:;
  /* 11a13c80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a13c86 jne 0x11a13c9c */
  if (!C.zf) goto L_11a13c9c;
  /* 11a13c88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13c8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a13c8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13c91 jb 0x11a13cbc */
  if (C.cf) goto L_11a13cbc;
  /* 11a13c93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13c95 jmp dword ptr [edx*4 + 0x11a13da8] */
  switch (EDX) {
    case 0: goto L_11a13db8;
    case 1: goto L_11a13dc0;
    case 2: goto L_11a13dcc;
    case 3: goto L_11a13de0;
    default: x86_unimpl("switch@0x11a13c95 out of table"); return;
  }
L_11a13c9c:;
  /* 11a13c9c mov eax, edi */
  EAX = (EDI);
  /* 11a13c9e mov edx, 3 */
  EDX = (0x3u);
  /* 11a13ca3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13ca6 jb 0x11a13cb4 */
  if (C.cf) goto L_11a13cb4;
  /* 11a13ca8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a13cab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13cad jmp dword ptr [eax*4 + 0x11a13cc0] */
  switch (EAX) {
    case 1: goto L_11a13cd0;
    case 2: goto L_11a13cfc;
    case 3: goto L_11a13d20;
    default: x86_unimpl("switch@0x11a13cad out of table"); return;
  }
L_11a13cb4:;
  /* 11a13cb4 jmp dword ptr [ecx*4 + 0x11a13db8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a13db8)))); return;
  /* 11a13cbb nop  */
  /* nop */
L_11a13cbc:;
  /* 11a13cbc jmp dword ptr [ecx*4 + 0x11a13d3c] */
  switch (ECX) {
    case 0: goto L_11a13d9f;
    case 1: goto L_11a13d8c;
    case 2: goto L_11a13d84;
    case 3: goto L_11a13d7c;
    case 4: goto L_11a13d74;
    case 5: goto L_11a13d6c;
    case 6: goto L_11a13d64;
    case 7: goto L_11a13d5c;
    default: x86_unimpl("switch@0x11a13cbc out of table"); return;
  }
  /* 11a13cc3 nop  */
  /* nop */
L_11a13cd0:;
  /* 11a13cd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a13cd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13cd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13cd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a13cd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a13cdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a13cdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13ce2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a13ce5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13ce8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13ceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13cee jb 0x11a13cbc */
  if (C.cf) goto L_11a13cbc;
  /* 11a13cf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13cf2 jmp dword ptr [edx*4 + 0x11a13da8] */
  switch (EDX) {
    case 0: goto L_11a13db8;
    case 1: goto L_11a13dc0;
    case 2: goto L_11a13dcc;
    case 3: goto L_11a13de0;
    default: x86_unimpl("switch@0x11a13cf2 out of table"); return;
  }
  /* 11a13cf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a13cfc:;
  /* 11a13cfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a13cfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13d00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13d02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a13d05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13d08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a13d0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13d0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13d11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13d14 jb 0x11a13cbc */
  if (C.cf) goto L_11a13cbc;
  /* 11a13d16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13d18 jmp dword ptr [edx*4 + 0x11a13da8] */
  switch (EDX) {
    case 0: goto L_11a13db8;
    case 1: goto L_11a13dc0;
    case 2: goto L_11a13dcc;
    case 3: goto L_11a13de0;
    default: x86_unimpl("switch@0x11a13d18 out of table"); return;
  }
  /* 11a13d1f nop  */
  /* nop */
L_11a13d20:;
  /* 11a13d20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a13d22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13d24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13d26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a13d27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13d2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a13d2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13d2e jb 0x11a13cbc */
  if (C.cf) goto L_11a13cbc;
  /* 11a13d30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13d32 jmp dword ptr [edx*4 + 0x11a13da8] */
  switch (EDX) {
    case 0: goto L_11a13db8;
    case 1: goto L_11a13dc0;
    case 2: goto L_11a13dcc;
    case 3: goto L_11a13de0;
    default: x86_unimpl("switch@0x11a13d32 out of table"); return;
  }
  /* 11a13d39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a13d5c:;
  /* 11a13d5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a13d60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a13d64:;
  /* 11a13d64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a13d68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a13d6c:;
  /* 11a13d6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a13d70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a13d74:;
  /* 11a13d74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a13d78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a13d7c:;
  /* 11a13d7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a13d80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a13d84:;
  /* 11a13d84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a13d88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a13d8c:;
  /* 11a13d8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a13d90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a13d94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a13d9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13d9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a13d9f:;
  /* 11a13d9f jmp dword ptr [edx*4 + 0x11a13da8] */
  switch (EDX) {
    case 0: goto L_11a13db8;
    case 1: goto L_11a13dc0;
    case 2: goto L_11a13dcc;
    case 3: goto L_11a13de0;
    default: x86_unimpl("switch@0x11a13d9f out of table"); return;
  }
  /* 11a13da6 mov edi, edi */
  EDI = (EDI);
L_11a13db8:;
  /* 11a13db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13dbb pop esi */
  ESI = (pop32());
  /* 11a13dbc pop edi */
  EDI = (pop32());
  /* 11a13dbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13dbe ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13dbf nop  */
  /* nop */
L_11a13dc0:;
  /* 11a13dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13dc7 pop esi */
  ESI = (pop32());
  /* 11a13dc8 pop edi */
  EDI = (pop32());
  /* 11a13dc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13dca ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13dcb nop  */
  /* nop */
L_11a13dcc:;
  /* 11a13dcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13dce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13dd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a13dd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a13dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13dd9 pop esi */
  ESI = (pop32());
  /* 11a13dda pop edi */
  EDI = (pop32());
  /* 11a13ddb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13ddc ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13ddd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a13de0:;
  /* 11a13de0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a13de2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a13de4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a13de7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a13dea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a13ded mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a13df0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13df3 pop esi */
  ESI = (pop32());
  /* 11a13df4 pop edi */
  EDI = (pop32());
  /* 11a13df5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13df6 ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13df7 nop  */
  /* nop */
L_11a13df8:;
  /* 11a13df8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a13dfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a13e00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a13e06 jne 0x11a13e2c */
  if (!C.zf) goto L_11a13e2c;
  /* 11a13e08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13e0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a13e0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13e11 jb 0x11a13e20 */
  if (C.cf) goto L_11a13e20;
  /* 11a13e13 std  */
  C.df=1;
  /* 11a13e14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13e16 cld  */
  C.df=0;
  /* 11a13e17 jmp dword ptr [edx*4 + 0x11a13f40] */
  switch (EDX) {
    case 0: goto L_11a13f50;
    case 1: goto L_11a13f58;
    case 2: goto L_11a13f68;
    case 3: goto L_11a13f7c;
    default: x86_unimpl("switch@0x11a13e17 out of table"); return;
  }
  /* 11a13e1e mov edi, edi */
  EDI = (EDI);
L_11a13e20:;
  /* 11a13e20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a13e22 jmp dword ptr [ecx*4 + 0x11a13ef0] */
  switch (ECX) {
    case 0: goto L_11a13f37;
    default: x86_unimpl("switch@0x11a13e22 out of table"); return;
  }
  /* 11a13e29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a13e2c:;
  /* 11a13e2c mov eax, edi */
  EAX = (EDI);
  /* 11a13e2e mov edx, 3 */
  EDX = (0x3u);
  /* 11a13e33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13e36 jb 0x11a13e44 */
  if (C.cf) goto L_11a13e44;
  /* 11a13e38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a13e3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13e3d jmp dword ptr [eax*4 + 0x11a13e48] */
  switch (EAX) {
    case 1: goto L_11a13e58;
    case 2: goto L_11a13e78;
    case 3: goto L_11a13ea0;
    default: x86_unimpl("switch@0x11a13e3d out of table"); return;
  }
L_11a13e44:;
  /* 11a13e44 jmp dword ptr [ecx*4 + 0x11a13f40] */
  switch (ECX) {
    case 0: goto L_11a13f50;
    case 1: goto L_11a13f58;
    case 2: goto L_11a13f68;
    case 3: goto L_11a13f7c;
    default: x86_unimpl("switch@0x11a13e44 out of table"); return;
  }
  /* 11a13e4b nop  */
  /* nop */
L_11a13e58:;
  /* 11a13e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a13e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a13e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a13e60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a13e61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13e64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a13e65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13e68 jb 0x11a13e20 */
  if (C.cf) goto L_11a13e20;
  /* 11a13e6a std  */
  C.df=1;
  /* 11a13e6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13e6d cld  */
  C.df=0;
  /* 11a13e6e jmp dword ptr [edx*4 + 0x11a13f40] */
  switch (EDX) {
    case 0: goto L_11a13f50;
    case 1: goto L_11a13f58;
    case 2: goto L_11a13f68;
    case 3: goto L_11a13f7c;
    default: x86_unimpl("switch@0x11a13e6e out of table"); return;
  }
  /* 11a13e75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a13e78:;
  /* 11a13e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a13e7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a13e7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a13e80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a13e83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13e86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a13e89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13e8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13e8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13e92 jb 0x11a13e20 */
  if (C.cf) goto L_11a13e20;
  /* 11a13e94 std  */
  C.df=1;
  /* 11a13e95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13e97 cld  */
  C.df=0;
  /* 11a13e98 jmp dword ptr [edx*4 + 0x11a13f40] */
  switch (EDX) {
    case 0: goto L_11a13f50;
    case 1: goto L_11a13f58;
    case 2: goto L_11a13f68;
    case 3: goto L_11a13f7c;
    default: x86_unimpl("switch@0x11a13e98 out of table"); return;
  }
  /* 11a13e9f nop  */
  /* nop */
L_11a13ea0:;
  /* 11a13ea0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a13ea3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a13ea5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a13ea8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a13eab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a13eae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a13eb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a13eb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a13eb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13eba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a13ebd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a13ec0 jb 0x11a13e20 */
  if (C.cf) goto L_11a13e20;
  /* 11a13ec6 std  */
  C.df=1;
  /* 11a13ec7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a13ec9 cld  */
  C.df=0;
  /* 11a13eca jmp dword ptr [edx*4 + 0x11a13f40] */
  switch (EDX) {
    case 0: goto L_11a13f50;
    case 1: goto L_11a13f58;
    case 2: goto L_11a13f68;
    case 3: goto L_11a13f7c;
    default: x86_unimpl("switch@0x11a13eca out of table"); return;
  }
  /* 11a13ed1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a13ed4 hlt  */
  x86_unimpl("hlt @ 0x11a13ed4");
  /* 11a13ed5 mov eax, dword ptr ds:[0xa13efc11] */
  EAX = (r32((uint32_t)(0xa13efc11)));
  /* 11a13edb adc dword ptr [edi + edi], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + EDI*1))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a13ede mov eax, dword ptr [0xa13f0c11] */
  EAX = (r32((uint32_t)(0xa13f0c11)));
  /* 11a13ee3 adc dword ptr [edi + edi], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + EDI*1))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a13ee6 mov eax, dword ptr [0xa13f1c11] */
  EAX = (r32((uint32_t)(0xa13f1c11)));
  /* 11a13eeb adc dword ptr [edi + edi], esp */
  { uint32_t _a=(r32((uint32_t)(EDI + EDI*1))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a13ef4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a13ef8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a13efc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a13f00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a13f04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a13f08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a13f0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a13f10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a13f14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a13f18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a13f1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a13f20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a13f24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a13f28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a13f2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a13f33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a13f35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a13f37:;
  /* 11a13f37 jmp dword ptr [edx*4 + 0x11a13f40] */
  switch (EDX) {
    case 0: goto L_11a13f50;
    case 1: goto L_11a13f58;
    case 2: goto L_11a13f68;
    case 3: goto L_11a13f7c;
    default: x86_unimpl("switch@0x11a13f37 out of table"); return;
  }
  /* 11a13f3e mov edi, edi */
  EDI = (EDI);
L_11a13f50:;
  /* 11a13f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13f53 pop esi */
  ESI = (pop32());
  /* 11a13f54 pop edi */
  EDI = (pop32());
  /* 11a13f55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13f56 ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13f57 nop  */
  /* nop */
L_11a13f58:;
  /* 11a13f58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a13f5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a13f5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13f61 pop esi */
  ESI = (pop32());
  /* 11a13f62 pop edi */
  EDI = (pop32());
  /* 11a13f63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13f64 ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13f65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a13f68:;
  /* 11a13f68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a13f6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a13f6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a13f71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a13f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13f77 pop esi */
  ESI = (pop32());
  /* 11a13f78 pop edi */
  EDI = (pop32());
  /* 11a13f79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13f7a ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
  /* 11a13f7b nop  */
  /* nop */
L_11a13f7c:;
  /* 11a13f7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a13f7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a13f82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a13f85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a13f88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a13f8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a13f8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a13f91 pop esi */
  ESI = (pop32());
  /* 11a13f92 pop edi */
  EDI = (pop32());
  /* 11a13f93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a13f94 ret  */
  ESPCHK(0x11a13c60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a13f98 (32 bytes, 18 insns) */
void f_11a13f98(void) {
  FTRACE(0x11a13f98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13f98 push ebp */
  push32((uint32_t)(EBP));
  /* 11a13f99 mov ebp, esp */
  EBP = (ESP);
  /* 11a13f9b push ebx */
  push32((uint32_t)(EBX));
  /* 11a13f9c push esi */
  push32((uint32_t)(ESI));
  /* 11a13f9d push edi */
  push32((uint32_t)(EDI));
  /* 11a13f9e push ebp */
  push32((uint32_t)(EBP));
  /* 11a13f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a13fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a13fa3 push 0x11a13fb0 */
  push32((uint32_t)(0x11a13fb0u));
  /* 11a13fa8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a13fab call 0x11a141a0 */
  push32(0x11a13fb0u); f_11a141a0();
  /* 11a13fb0 pop ebp */
  EBP = (pop32());
  /* 11a13fb1 pop edi */
  EDI = (pop32());
  /* 11a13fb2 pop esi */
  ESI = (pop32());
  /* 11a13fb3 pop ebx */
  EBX = (pop32());
  /* 11a13fb4 mov esp, ebp */
  ESP = (EBP);
  /* 11a13fb6 pop ebp */
  EBP = (pop32());
  /* 11a13fb7 ret  */
  ESPCHK(0x11a13f98u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11a13fda (104 bytes, 33 insns) */
void f_11a13fda(void) {
  FTRACE(0x11a13fdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a13fda push ebx */
  push32((uint32_t)(EBX));
  /* 11a13fdb push esi */
  push32((uint32_t)(ESI));
  /* 11a13fdc push edi */
  push32((uint32_t)(EDI));
  /* 11a13fdd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a13fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11a13fe2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a13fe4 push 0x11a13fb8 */
  push32((uint32_t)(0x11a13fb8u));
  /* 11a13fe9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a13ff0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a13ff7:;
  /* 11a13ff7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a13ffb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a13ffe mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a14001 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a14004 je 0x11a14034 */
  if (C.zf) goto L_11a14034;
  /* 11a14006 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1400a je 0x11a14034 */
  if (C.zf) goto L_11a14034;
  /* 11a1400c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a1400f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a14012 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a14016 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a14019 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1401e jne 0x11a14032 */
  if (!C.zf) goto L_11a14032;
  /* 11a14020 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a14025 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a14029 call 0x11a1406e */
  push32(0x11a1402eu); f_11a1406e();
  /* 11a1402e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a14032u);
L_11a14032:;
  /* 11a14032 jmp 0x11a13ff7 */
  goto L_11a13ff7;
L_11a14034:;
  /* 11a14034 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a1403b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a1403e pop edi */
  EDI = (pop32());
  /* 11a1403f pop esi */
  ESI = (pop32());
  /* 11a14040 pop ebx */
  EBX = (pop32());
  /* 11a14041 ret  */
  ESPCHK(0x11a13fdau, _esp0);
  ESP += 4; return;
}

/* FUN_1000406e @ 0x11a1406e (24 bytes, 10 insns) */
void f_11a1406e(void) {
  FTRACE(0x11a1406eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1406e push ebx */
  push32((uint32_t)(EBX));
  /* 11a1406f push ecx */
  push32((uint32_t)(ECX));
  /* 11a14070 mov ebx, 0x11a16500 */
  EBX = (0x11a16500u);
  /* 11a14075 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a14078 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a1407b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a1407e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a14081 pop ecx */
  ECX = (pop32());
  /* 11a14082 pop ebx */
  EBX = (pop32());
  /* 11a14083 ret 4 */
  ESPCHK(0x11a1406eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000414d @ 0x11a1414d (27 bytes, 11 insns) */
void f_11a1414d(void) {
  FTRACE(0x11a1414du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a1414d push ebp */
  push32((uint32_t)(EBP));
  /* 11a1414e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a14152 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a14154 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a14157 push eax */
  push32((uint32_t)(EAX));
  /* 11a14158 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a1415b push eax */
  push32((uint32_t)(EAX));
  /* 11a1415c call 0x11a13fda */
  push32(0x11a14161u); f_11a13fda();
  /* 11a14161 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a14164 pop ebp */
  EBP = (pop32());
  /* 11a14165 ret 4 */
  ESPCHK(0x11a1414du, _esp0);
  ESP += 8; return;
}

/* FUN_10004170 @ 0x11a14170 (47 bytes, 17 insns) */
void f_11a14170(void) {
  FTRACE(0x11a14170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a14170 push ecx */
  push32((uint32_t)(ECX));
  /* 11a14171 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a14176 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a1417a jb 0x11a14190 */
  if (C.cf) goto L_11a14190;
L_11a1417c:;
  /* 11a1417c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a14182 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a14187 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a14189 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a1418e jae 0x11a1417c */
  if (!C.cf) goto L_11a1417c;
L_11a14190:;
  /* 11a14190 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a14192 mov eax, esp */
  EAX = (ESP);
  /* 11a14194 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a14196 mov esp, ecx */
  ESP = (ECX);
  /* 11a14198 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a1419a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a1419d push eax */
  push32((uint32_t)(EAX));
  /* 11a1419e ret  */
  ESPCHK(0x11a14170u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11a141a0 (6 bytes, 1 insns) */
void f_11a141a0(void) {
  FTRACE(0x11a141a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a141a0 jmp dword ptr [0x11a15004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a15004)))); return;
}

