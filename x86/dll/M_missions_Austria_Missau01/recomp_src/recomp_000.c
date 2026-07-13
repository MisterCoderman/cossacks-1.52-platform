#include "recomp.h"

/* OnInit @ 0x102d1000 (502 bytes, 137 insns) */
void f_102d1000(void) {
  FTRACE(0x102d1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1000 push esi */
  push32((uint32_t)(ESI));
  /* 102d1001 mov esi, dword ptr [0x102d511c] */
  ESI = (r32((uint32_t)(0x102d511c)));
  /* 102d1007 push 0x102d60fc */
  push32((uint32_t)(0x102d60fcu));
  /* 102d100c push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d1011 call esi */
  call_ind((uint32_t)(ESI), 0x102d1013u);
  /* 102d1013 push 0x102d60f8 */
  push32((uint32_t)(0x102d60f8u));
  /* 102d1018 push 0x102d64c8 */
  push32((uint32_t)(0x102d64c8u));
  /* 102d101d call esi */
  call_ind((uint32_t)(ESI), 0x102d101fu);
  /* 102d101f push 0x102d60f4 */
  push32((uint32_t)(0x102d60f4u));
  /* 102d1024 push 0x102d64d0 */
  push32((uint32_t)(0x102d64d0u));
  /* 102d1029 call esi */
  call_ind((uint32_t)(ESI), 0x102d102bu);
  /* 102d102b push 0x102d60f0 */
  push32((uint32_t)(0x102d60f0u));
  /* 102d1030 push 0x102d64d8 */
  push32((uint32_t)(0x102d64d8u));
  /* 102d1035 call esi */
  call_ind((uint32_t)(ESI), 0x102d1037u);
  /* 102d1037 push 0x102d60ec */
  push32((uint32_t)(0x102d60ecu));
  /* 102d103c push 0x102d64e0 */
  push32((uint32_t)(0x102d64e0u));
  /* 102d1041 call esi */
  call_ind((uint32_t)(ESI), 0x102d1043u);
  /* 102d1043 push 0x102d60e8 */
  push32((uint32_t)(0x102d60e8u));
  /* 102d1048 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d104d call esi */
  call_ind((uint32_t)(ESI), 0x102d104fu);
  /* 102d104f push 0x102d60e4 */
  push32((uint32_t)(0x102d60e4u));
  /* 102d1054 push 0x102d64f0 */
  push32((uint32_t)(0x102d64f0u));
  /* 102d1059 call esi */
  call_ind((uint32_t)(ESI), 0x102d105bu);
  /* 102d105b push 0x102d60e0 */
  push32((uint32_t)(0x102d60e0u));
  /* 102d1060 push 0x102d64f8 */
  push32((uint32_t)(0x102d64f8u));
  /* 102d1065 call esi */
  call_ind((uint32_t)(ESI), 0x102d1067u);
  /* 102d1067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d106a push 0x102d60dc */
  push32((uint32_t)(0x102d60dcu));
  /* 102d106f push 0x102d6500 */
  push32((uint32_t)(0x102d6500u));
  /* 102d1074 call esi */
  call_ind((uint32_t)(ESI), 0x102d1076u);
  /* 102d1076 push 0x102d60d8 */
  push32((uint32_t)(0x102d60d8u));
  /* 102d107b push 0x102d6520 */
  push32((uint32_t)(0x102d6520u));
  /* 102d1080 call esi */
  call_ind((uint32_t)(ESI), 0x102d1082u);
  /* 102d1082 push 0x102d60d4 */
  push32((uint32_t)(0x102d60d4u));
  /* 102d1087 push 0x102d6528 */
  push32((uint32_t)(0x102d6528u));
  /* 102d108c call esi */
  call_ind((uint32_t)(ESI), 0x102d108eu);
  /* 102d108e push 0x102d60d0 */
  push32((uint32_t)(0x102d60d0u));
  /* 102d1093 push 0x102d6538 */
  push32((uint32_t)(0x102d6538u));
  /* 102d1098 call esi */
  call_ind((uint32_t)(ESI), 0x102d109au);
  /* 102d109a push 0x102d60cc */
  push32((uint32_t)(0x102d60ccu));
  /* 102d109f push 0x102d6540 */
  push32((uint32_t)(0x102d6540u));
  /* 102d10a4 call esi */
  call_ind((uint32_t)(ESI), 0x102d10a6u);
  /* 102d10a6 mov esi, dword ptr [0x102d5120] */
  ESI = (r32((uint32_t)(0x102d5120)));
  /* 102d10ac push 0x102d60c8 */
  push32((uint32_t)(0x102d60c8u));
  /* 102d10b1 push 0x102d6548 */
  push32((uint32_t)(0x102d6548u));
  /* 102d10b6 call esi */
  call_ind((uint32_t)(ESI), 0x102d10b8u);
  /* 102d10b8 push 0x102d60c4 */
  push32((uint32_t)(0x102d60c4u));
  /* 102d10bd push 0x102d6550 */
  push32((uint32_t)(0x102d6550u));
  /* 102d10c2 call esi */
  call_ind((uint32_t)(ESI), 0x102d10c4u);
  /* 102d10c4 push 0x102d60c0 */
  push32((uint32_t)(0x102d60c0u));
  /* 102d10c9 push 0x102d6558 */
  push32((uint32_t)(0x102d6558u));
  /* 102d10ce call esi */
  call_ind((uint32_t)(ESI), 0x102d10d0u);
  /* 102d10d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d10d3 push 0x102d60bc */
  push32((uint32_t)(0x102d60bcu));
  /* 102d10d8 push 0x102d6560 */
  push32((uint32_t)(0x102d6560u));
  /* 102d10dd call esi */
  call_ind((uint32_t)(ESI), 0x102d10dfu);
  /* 102d10df push 0x102d60b8 */
  push32((uint32_t)(0x102d60b8u));
  /* 102d10e4 push 0x102d6568 */
  push32((uint32_t)(0x102d6568u));
  /* 102d10e9 call esi */
  call_ind((uint32_t)(ESI), 0x102d10ebu);
  /* 102d10eb push 0x102d60b4 */
  push32((uint32_t)(0x102d60b4u));
  /* 102d10f0 push 0x102d6570 */
  push32((uint32_t)(0x102d6570u));
  /* 102d10f5 call esi */
  call_ind((uint32_t)(ESI), 0x102d10f7u);
  /* 102d10f7 push 0x102d60b0 */
  push32((uint32_t)(0x102d60b0u));
  /* 102d10fc push 0x102d6578 */
  push32((uint32_t)(0x102d6578u));
  /* 102d1101 call esi */
  call_ind((uint32_t)(ESI), 0x102d1103u);
  /* 102d1103 push 0x102d60ac */
  push32((uint32_t)(0x102d60acu));
  /* 102d1108 push 0x102d6580 */
  push32((uint32_t)(0x102d6580u));
  /* 102d110d call esi */
  call_ind((uint32_t)(ESI), 0x102d110fu);
  /* 102d110f push 0x102d60a8 */
  push32((uint32_t)(0x102d60a8u));
  /* 102d1114 push 0x102d6588 */
  push32((uint32_t)(0x102d6588u));
  /* 102d1119 call esi */
  call_ind((uint32_t)(ESI), 0x102d111bu);
  /* 102d111b push 0x102d60a4 */
  push32((uint32_t)(0x102d60a4u));
  /* 102d1120 push 0x102d65c8 */
  push32((uint32_t)(0x102d65c8u));
  /* 102d1125 call esi */
  call_ind((uint32_t)(ESI), 0x102d1127u);
  /* 102d1127 push 0x102d60a0 */
  push32((uint32_t)(0x102d60a0u));
  /* 102d112c push 0x102d65d0 */
  push32((uint32_t)(0x102d65d0u));
  /* 102d1131 call esi */
  call_ind((uint32_t)(ESI), 0x102d1133u);
  /* 102d1133 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1136 push 0x102d609c */
  push32((uint32_t)(0x102d609cu));
  /* 102d113b push 0x102d65d8 */
  push32((uint32_t)(0x102d65d8u));
  /* 102d1140 call esi */
  call_ind((uint32_t)(ESI), 0x102d1142u);
  /* 102d1142 push 0x102d6098 */
  push32((uint32_t)(0x102d6098u));
  /* 102d1147 push 0x102d65e0 */
  push32((uint32_t)(0x102d65e0u));
  /* 102d114c call esi */
  call_ind((uint32_t)(ESI), 0x102d114eu);
  /* 102d114e mov esi, dword ptr [0x102d5124] */
  ESI = (r32((uint32_t)(0x102d5124)));
  /* 102d1154 push 0x102d6088 */
  push32((uint32_t)(0x102d6088u));
  /* 102d1159 push 0x102d6598 */
  push32((uint32_t)(0x102d6598u));
  /* 102d115e call esi */
  call_ind((uint32_t)(ESI), 0x102d1160u);
  /* 102d1160 push 0x102d6078 */
  push32((uint32_t)(0x102d6078u));
  /* 102d1165 push 0x102d65c0 */
  push32((uint32_t)(0x102d65c0u));
  /* 102d116a call esi */
  call_ind((uint32_t)(ESI), 0x102d116cu);
  /* 102d116c push 0x102d6068 */
  push32((uint32_t)(0x102d6068u));
  /* 102d1171 push 0x102d65b0 */
  push32((uint32_t)(0x102d65b0u));
  /* 102d1176 call esi */
  call_ind((uint32_t)(ESI), 0x102d1178u);
  /* 102d1178 push 0x102d6058 */
  push32((uint32_t)(0x102d6058u));
  /* 102d117d push 0x102d65b8 */
  push32((uint32_t)(0x102d65b8u));
  /* 102d1182 call esi */
  call_ind((uint32_t)(ESI), 0x102d1184u);
  /* 102d1184 push 0x102d6050 */
  push32((uint32_t)(0x102d6050u));
  /* 102d1189 push 0x102d65a8 */
  push32((uint32_t)(0x102d65a8u));
  /* 102d118e call dword ptr [0x102d5128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5128))), 0x102d1194u);
  /* 102d1194 mov esi, dword ptr [0x102d512c] */
  ESI = (r32((uint32_t)(0x102d512c)));
  /* 102d119a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 102d119c push 0 */
  push32((uint32_t)(0x0u));
  /* 102d119e call esi */
  call_ind((uint32_t)(ESI), 0x102d11a0u);
  /* 102d11a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d11a3 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 102d11a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d11a7 call esi */
  call_ind((uint32_t)(ESI), 0x102d11a9u);
  /* 102d11a9 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 102d11ab push 2 */
  push32((uint32_t)(0x2u));
  /* 102d11ad call esi */
  call_ind((uint32_t)(ESI), 0x102d11afu);
  /* 102d11af push 0x15 */
  push32((uint32_t)(0x15u));
  /* 102d11b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d11b3 call esi */
  call_ind((uint32_t)(ESI), 0x102d11b5u);
  /* 102d11b5 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 102d11b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d11b9 call esi */
  call_ind((uint32_t)(ESI), 0x102d11bbu);
  /* 102d11bb mov esi, dword ptr [0x102d5130] */
  ESI = (r32((uint32_t)(0x102d5130)));
  /* 102d11c1 push 0x102d6048 */
  push32((uint32_t)(0x102d6048u));
  /* 102d11c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d11c8 call esi */
  call_ind((uint32_t)(ESI), 0x102d11cau);
  /* 102d11ca push 0x102d6040 */
  push32((uint32_t)(0x102d6040u));
  /* 102d11cf push 2 */
  push32((uint32_t)(0x2u));
  /* 102d11d1 call esi */
  call_ind((uint32_t)(ESI), 0x102d11d3u);
  /* 102d11d3 push 0x102d6038 */
  push32((uint32_t)(0x102d6038u));
  /* 102d11d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 102d11da call esi */
  call_ind((uint32_t)(ESI), 0x102d11dcu);
  /* 102d11dc push 0x102d6030 */
  push32((uint32_t)(0x102d6030u));
  /* 102d11e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d11e3 call esi */
  call_ind((uint32_t)(ESI), 0x102d11e5u);
  /* 102d11e5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d11e8 push 0x102d6048 */
  push32((uint32_t)(0x102d6048u));
  /* 102d11ed push 5 */
  push32((uint32_t)(0x5u));
  /* 102d11ef call esi */
  call_ind((uint32_t)(ESI), 0x102d11f1u);
  /* 102d11f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d11f4 pop esi */
  ESI = (pop32());
  /* 102d11f5 ret  */
  ESPCHK(0x102d1000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x102d1200 (2671 bytes, 877 insns) */
void f_102d1200(void) {
  FTRACE(0x102d1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1200 push ecx */
  push32((uint32_t)(ECX));
  /* 102d1201 push ebx */
  push32((uint32_t)(EBX));
  /* 102d1202 push ebp */
  push32((uint32_t)(EBP));
  /* 102d1203 push esi */
  push32((uint32_t)(ESI));
  /* 102d1204 push edi */
  push32((uint32_t)(EDI));
  /* 102d1205 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102d1207 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d120du);
  /* 102d120d mov edi, dword ptr [0x102d50b4] */
  EDI = (r32((uint32_t)(0x102d50b4)));
  /* 102d1213 mov esi, dword ptr [0x102d50b8] */
  ESI = (r32((uint32_t)(0x102d50b8)));
  /* 102d1219 mov ebp, dword ptr [0x102d50bc] */
  EBP = (r32((uint32_t)(0x102d50bc)));
  /* 102d121f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1222 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1224 je 0x102d1396 */
  if (C.zf) goto L_102d1396;
  /* 102d122a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d122c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102d122e call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1234u);
  /* 102d1234 mov ebx, dword ptr [0x102d50c4] */
  EBX = (r32((uint32_t)(0x102d50c4)));
  /* 102d123a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d123c push 0x102d65c8 */
  push32((uint32_t)(0x102d65c8u));
  /* 102d1241 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1243 push 0x102d6598 */
  push32((uint32_t)(0x102d6598u));
  /* 102d1248 push 0x102d65a8 */
  push32((uint32_t)(0x102d65a8u));
  /* 102d124d push 0x102d6508 */
  push32((uint32_t)(0x102d6508u));
  /* 102d1252 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1254u);
  /* 102d1254 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1256 push 0x102d65d8 */
  push32((uint32_t)(0x102d65d8u));
  /* 102d125b push 4 */
  push32((uint32_t)(0x4u));
  /* 102d125d push 0x102d65b0 */
  push32((uint32_t)(0x102d65b0u));
  /* 102d1262 push 0x102d65a8 */
  push32((uint32_t)(0x102d65a8u));
  /* 102d1267 push 0x102d6510 */
  push32((uint32_t)(0x102d6510u));
  /* 102d126c call ebx */
  call_ind((uint32_t)(EBX), 0x102d126eu);
  /* 102d126e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1270 call esi */
  call_ind((uint32_t)(ESI), 0x102d1272u);
  /* 102d1272 mov ecx, 0xe */
  ECX = (0xeu);
  /* 102d1277 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1279 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d127c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d127f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1282 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d1285 push eax */
  push32((uint32_t)(EAX));
  /* 102d1286 push 3 */
  push32((uint32_t)(0x3u));
  /* 102d1288 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d128a call edi */
  call_ind((uint32_t)(EDI), 0x102d128cu);
  /* 102d128c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d128f push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1291 call esi */
  call_ind((uint32_t)(ESI), 0x102d1293u);
  /* 102d1293 mov ecx, 8 */
  ECX = (0x8u);
  /* 102d1298 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d129a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d129d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d12a0 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d12a3 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d12a6 push ecx */
  push32((uint32_t)(ECX));
  /* 102d12a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d12a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12ab call edi */
  call_ind((uint32_t)(EDI), 0x102d12adu);
  /* 102d12ad push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12af call esi */
  call_ind((uint32_t)(ESI), 0x102d12b1u);
  /* 102d12b1 mov ecx, 7 */
  ECX = (0x7u);
  /* 102d12b6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d12b8 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d12bb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d12be lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d12c1 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d12c4 push edx */
  push32((uint32_t)(EDX));
  /* 102d12c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12c9 call edi */
  call_ind((uint32_t)(EDI), 0x102d12cbu);
  /* 102d12cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12cd call esi */
  call_ind((uint32_t)(ESI), 0x102d12cfu);
  /* 102d12cf mov ecx, 7 */
  ECX = (0x7u);
  /* 102d12d4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d12d6 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d12d9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d12dc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d12df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d12e2 push eax */
  push32((uint32_t)(EAX));
  /* 102d12e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d12e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12e7 call edi */
  call_ind((uint32_t)(EDI), 0x102d12e9u);
  /* 102d12e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d12eb call esi */
  call_ind((uint32_t)(ESI), 0x102d12edu);
  /* 102d12ed mov ecx, 8 */
  ECX = (0x8u);
  /* 102d12f2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d12f4 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d12f7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d12fa lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d12fd shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d1300 push ecx */
  push32((uint32_t)(ECX));
  /* 102d1301 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d1303 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1305 call edi */
  call_ind((uint32_t)(EDI), 0x102d1307u);
  /* 102d1307 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d130a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d130c call esi */
  call_ind((uint32_t)(ESI), 0x102d130eu);
  /* 102d130e mov ecx, 8 */
  ECX = (0x8u);
  /* 102d1313 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1315 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d1318 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d131b lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d131e shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d1321 push edx */
  push32((uint32_t)(EDX));
  /* 102d1322 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1324 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1326 call edi */
  call_ind((uint32_t)(EDI), 0x102d1328u);
  /* 102d1328 push 0x102d6188 */
  push32((uint32_t)(0x102d6188u));
  /* 102d132d call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d1333u);
  /* 102d1333 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1335 push 0x102d64c8 */
  push32((uint32_t)(0x102d64c8u));
  /* 102d133a call ebp */
  call_ind((uint32_t)(EBP), 0x102d133cu);
  /* 102d133c mov ebx, dword ptr [0x102d50cc] */
  EBX = (r32((uint32_t)(0x102d50cc)));
  /* 102d1342 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1344 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1346 push 0x102d6548 */
  push32((uint32_t)(0x102d6548u));
  /* 102d134b push 2 */
  push32((uint32_t)(0x2u));
  /* 102d134d call ebx */
  call_ind((uint32_t)(EBX), 0x102d134fu);
  /* 102d134f push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1351 push 0x102d6500 */
  push32((uint32_t)(0x102d6500u));
  /* 102d1356 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1358u);
  /* 102d1358 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d135a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d135c push 0x102d6588 */
  push32((uint32_t)(0x102d6588u));
  /* 102d1361 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1363 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1365u);
  /* 102d1365 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1368 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d136a call esi */
  call_ind((uint32_t)(ESI), 0x102d136cu);
  /* 102d136c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d136f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1371 jne 0x102d1385 */
  if (!C.zf) goto L_102d1385;
  /* 102d1373 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1375 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d1377 push 0x102d6580 */
  push32((uint32_t)(0x102d6580u));
  /* 102d137c call dword ptr [0x102d50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50d0))), 0x102d1382u);
  /* 102d1382 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1385:;
  /* 102d1385 mov ebx, dword ptr [0x102d50d4] */
  EBX = (r32((uint32_t)(0x102d50d4)));
  /* 102d138b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 102d138d call ebx */
  call_ind((uint32_t)(EBX), 0x102d138fu);
  /* 102d138f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102d1391 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1393u);
  /* 102d1393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1396:;
  /* 102d1396 mov ebx, dword ptr [0x102d50b0] */
  EBX = (r32((uint32_t)(0x102d50b0)));
  /* 102d139c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 102d139e call ebx */
  call_ind((uint32_t)(EBX), 0x102d13a0u);
  /* 102d13a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d13a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d13a5 je 0x102d13ee */
  if (C.zf) goto L_102d13ee;
  /* 102d13a7 push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d13ac call dword ptr [0x102d50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50d8))), 0x102d13b2u);
  /* 102d13b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d13b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d13b7 jne 0x102d13ee */
  if (!C.zf) goto L_102d13ee;
  /* 102d13b9 push eax */
  push32((uint32_t)(EAX));
  /* 102d13ba push 0x62 */
  push32((uint32_t)(0x62u));
  /* 102d13bc call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d13c2u);
  /* 102d13c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 102d13c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d13c6 call dword ptr [0x102d50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50dc))), 0x102d13ccu);
  /* 102d13cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d13cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d13d1 jle 0x102d13da */
  if ((C.zf||C.sf!=C.of)) goto L_102d13da;
  /* 102d13d3 push 0x102d6180 */
  push32((uint32_t)(0x102d6180u));
  /* 102d13d8 jmp 0x102d13df */
  goto L_102d13df;
L_102d13da:;
  /* 102d13da push 0x102d6174 */
  push32((uint32_t)(0x102d6174u));
L_102d13df:;
  /* 102d13df call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d13e5u);
  /* 102d13e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d13e8 call dword ptr [0x102d50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50e0))), 0x102d13eeu);
L_102d13ee:;
  /* 102d13ee push 0x61 */
  push32((uint32_t)(0x61u));
  /* 102d13f0 call ebx */
  call_ind((uint32_t)(EBX), 0x102d13f2u);
  /* 102d13f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d13f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d13f7 je 0x102d1433 */
  if (C.zf) goto L_102d1433;
  /* 102d13f9 mov ebx, dword ptr [0x102d50e4] */
  EBX = (r32((uint32_t)(0x102d50e4)));
  /* 102d13ff push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1401 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1403u);
  /* 102d1403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1406 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1408 je 0x102d1433 */
  if (C.zf) goto L_102d1433;
  /* 102d140a push 5 */
  push32((uint32_t)(0x5u));
  /* 102d140c call ebx */
  call_ind((uint32_t)(EBX), 0x102d140eu);
  /* 102d140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1411 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1413 je 0x102d1433 */
  if (C.zf) goto L_102d1433;
  /* 102d1415 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1417 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 102d1419 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d141fu);
  /* 102d141f push 0x102d616c */
  push32((uint32_t)(0x102d616cu));
  /* 102d1424 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d142au);
  /* 102d142a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d142d call dword ptr [0x102d50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50e8))), 0x102d1433u);
L_102d1433:;
  /* 102d1433 push 0x102d6500 */
  push32((uint32_t)(0x102d6500u));
  /* 102d1438 push 0x102d6588 */
  push32((uint32_t)(0x102d6588u));
  /* 102d143d call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1443u);
  /* 102d1443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1448 jle 0x102d145e */
  if ((C.zf||C.sf!=C.of)) goto L_102d145e;
  /* 102d144a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d144c push 0x102d6500 */
  push32((uint32_t)(0x102d6500u));
  /* 102d1451 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1453u);
  /* 102d1453 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1455 call dword ptr [0x102d50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f0))), 0x102d145bu);
  /* 102d145b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d145e:;
  /* 102d145e push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1460 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d1466u);
  /* 102d1466 mov ebx, dword ptr [0x102d50f4] */
  EBX = (r32((uint32_t)(0x102d50f4)));
  /* 102d146c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d146f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1471 je 0x102d14ef */
  if (C.zf) goto L_102d14ef;
  /* 102d1473 push 0x102d64c8 */
  push32((uint32_t)(0x102d64c8u));
  /* 102d1478 push 0x102d6548 */
  push32((uint32_t)(0x102d6548u));
  /* 102d147d call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1483u);
  /* 102d1483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1488 jle 0x102d14ef */
  if ((C.zf||C.sf!=C.of)) goto L_102d14ef;
  /* 102d148a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d148c push 0x102d6548 */
  push32((uint32_t)(0x102d6548u));
  /* 102d1491 call dword ptr [0x102d50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f8))), 0x102d1497u);
  /* 102d1497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d149a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d149c jle 0x102d14ef */
  if ((C.zf||C.sf!=C.of)) goto L_102d14ef;
  /* 102d149e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d14a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d14a2 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d14a8u);
  /* 102d14a8 push 0x102d6164 */
  push32((uint32_t)(0x102d6164u));
  /* 102d14ad call dword ptr [0x102d50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50fc))), 0x102d14b3u);
  /* 102d14b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d14b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d14b8 je 0x102d14d2 */
  if (C.zf) goto L_102d14d2;
  /* 102d14ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102d14bc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102d14be call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d14c4u);
  /* 102d14c4 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 102d14c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d14cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102d14cd call ebx */
  call_ind((uint32_t)(EBX), 0x102d14cfu);
  /* 102d14cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d14d2:;
  /* 102d14d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d14d4 push 0x102d64c8 */
  push32((uint32_t)(0x102d64c8u));
  /* 102d14d9 call ebp */
  call_ind((uint32_t)(EBP), 0x102d14dbu);
  /* 102d14db push 0 */
  push32((uint32_t)(0x0u));
  /* 102d14dd push 0 */
  push32((uint32_t)(0x0u));
  /* 102d14df push 0x102d6550 */
  push32((uint32_t)(0x102d6550u));
  /* 102d14e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d14e6 call dword ptr [0x102d50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50cc))), 0x102d14ecu);
  /* 102d14ec add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d14ef:;
  /* 102d14ef push 2 */
  push32((uint32_t)(0x2u));
  /* 102d14f1 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d14f7u);
  /* 102d14f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d14fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d14fc je 0x102d155f */
  if (C.zf) goto L_102d155f;
  /* 102d14fe push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d1503 push 0x102d6550 */
  push32((uint32_t)(0x102d6550u));
  /* 102d1508 call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d150eu);
  /* 102d150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1513 jle 0x102d155f */
  if ((C.zf||C.sf!=C.of)) goto L_102d155f;
  /* 102d1515 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1517 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d1519 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d151fu);
  /* 102d151f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102d1521 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d1527u);
  /* 102d1527 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d152a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d152c je 0x102d1551 */
  if (C.zf) goto L_102d1551;
  /* 102d152e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1530 push 0x102d64d0 */
  push32((uint32_t)(0x102d64d0u));
  /* 102d1535 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1537u);
  /* 102d1537 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d1539 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d153b call dword ptr [0x102d5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5100))), 0x102d1541u);
  /* 102d1541 push 0x102d615c */
  push32((uint32_t)(0x102d615cu));
  /* 102d1546 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d154cu);
  /* 102d154c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d154f jmp 0x102d155f */
  goto L_102d155f;
L_102d1551:;
  /* 102d1551 push 0x102d6154 */
  push32((uint32_t)(0x102d6154u));
  /* 102d1556 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d155cu);
  /* 102d155c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d155f:;
  /* 102d155f push 3 */
  push32((uint32_t)(0x3u));
  /* 102d1561 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d1567u);
  /* 102d1567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d156a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d156c je 0x102d15f4 */
  if (C.zf) goto L_102d15f4;
  /* 102d1572 push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d1577 push 0x102d6558 */
  push32((uint32_t)(0x102d6558u));
  /* 102d157c call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1582u);
  /* 102d1582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1587 jle 0x102d15f4 */
  if ((C.zf||C.sf!=C.of)) goto L_102d15f4;
  /* 102d1589 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d158b push 3 */
  push32((uint32_t)(0x3u));
  /* 102d158d call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1593u);
  /* 102d1593 push 0x102d614c */
  push32((uint32_t)(0x102d614cu));
  /* 102d1598 call dword ptr [0x102d50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50fc))), 0x102d159eu);
  /* 102d159e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d15a1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d15a3 je 0x102d15d3 */
  if (C.zf) goto L_102d15d3;
  /* 102d15a5 push 0x102d6144 */
  push32((uint32_t)(0x102d6144u));
  /* 102d15aa call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d15b0u);
  /* 102d15b0 push 0xffffff38 */
  push32((uint32_t)(0xffffff38u));
  /* 102d15b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d15b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d15b9 call ebx */
  call_ind((uint32_t)(EBX), 0x102d15bbu);
  /* 102d15bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102d15bd push 0x102d64d8 */
  push32((uint32_t)(0x102d64d8u));
  /* 102d15c2 call ebp */
  call_ind((uint32_t)(EBP), 0x102d15c4u);
  /* 102d15c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d15c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d15c8 call dword ptr [0x102d5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5100))), 0x102d15ceu);
  /* 102d15ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d15d1 jmp 0x102d15f4 */
  goto L_102d15f4;
L_102d15d3:;
  /* 102d15d3 push 0x102d613c */
  push32((uint32_t)(0x102d613cu));
  /* 102d15d8 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d15deu);
  /* 102d15de push 0 */
  push32((uint32_t)(0x0u));
  /* 102d15e0 push 0x102d64d8 */
  push32((uint32_t)(0x102d64d8u));
  /* 102d15e5 call ebp */
  call_ind((uint32_t)(EBP), 0x102d15e7u);
  /* 102d15e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d15e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d15eb call dword ptr [0x102d5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5100))), 0x102d15f1u);
  /* 102d15f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d15f4:;
  /* 102d15f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d15f6 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d15fcu);
  /* 102d15fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d15ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1601 je 0x102d1668 */
  if (C.zf) goto L_102d1668;
  /* 102d1603 push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d1608 push 0x102d6560 */
  push32((uint32_t)(0x102d6560u));
  /* 102d160d call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1613u);
  /* 102d1613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1618 jle 0x102d1668 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1668;
  /* 102d161a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d161c push 4 */
  push32((uint32_t)(0x4u));
  /* 102d161e call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1624u);
  /* 102d1624 push 0x102d6134 */
  push32((uint32_t)(0x102d6134u));
  /* 102d1629 call dword ptr [0x102d50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50fc))), 0x102d162fu);
  /* 102d162f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1632 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1634 je 0x102d165d */
  if (C.zf) goto L_102d165d;
  /* 102d1636 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1638 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 102d163a call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1640u);
  /* 102d1640 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1642 call esi */
  call_ind((uint32_t)(ESI), 0x102d1644u);
  /* 102d1644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1649 jne 0x102d165d */
  if (!C.zf) goto L_102d165d;
  /* 102d164b push 2 */
  push32((uint32_t)(0x2u));
  /* 102d164d push 1 */
  push32((uint32_t)(0x1u));
  /* 102d164f push 0x102d6578 */
  push32((uint32_t)(0x102d6578u));
  /* 102d1654 call dword ptr [0x102d50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50d0))), 0x102d165au);
  /* 102d165a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d165d:;
  /* 102d165d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102d165f push 3 */
  push32((uint32_t)(0x3u));
  /* 102d1661 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1663 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1665u);
  /* 102d1665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1668:;
  /* 102d1668 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d166a call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d1670u);
  /* 102d1670 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1673 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1675 je 0x102d16cf */
  if (C.zf) goto L_102d16cf;
  /* 102d1677 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1679 push 0x102d6568 */
  push32((uint32_t)(0x102d6568u));
  /* 102d167e call dword ptr [0x102d50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f8))), 0x102d1684u);
  /* 102d1684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1689 jle 0x102d16cf */
  if ((C.zf||C.sf!=C.of)) goto L_102d16cf;
  /* 102d168b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d168d push 5 */
  push32((uint32_t)(0x5u));
  /* 102d168f call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1695u);
  /* 102d1695 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1697 push 0x102d64e0 */
  push32((uint32_t)(0x102d64e0u));
  /* 102d169c call ebp */
  call_ind((uint32_t)(EBP), 0x102d169eu);
  /* 102d169e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d16a0 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 102d16a5 push 0x102d6570 */
  push32((uint32_t)(0x102d6570u));
  /* 102d16aa push 4 */
  push32((uint32_t)(0x4u));
  /* 102d16ac call dword ptr [0x102d5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5104))), 0x102d16b2u);
  /* 102d16b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d16b4 push 0x102d64f8 */
  push32((uint32_t)(0x102d64f8u));
  /* 102d16b9 call ebp */
  call_ind((uint32_t)(EBP), 0x102d16bbu);
  /* 102d16bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102d16bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102d16bf push 0x102d6568 */
  push32((uint32_t)(0x102d6568u));
  /* 102d16c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d16c6 call dword ptr [0x102d5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5104))), 0x102d16ccu);
  /* 102d16cc add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d16cf:;
  /* 102d16cf push 6 */
  push32((uint32_t)(0x6u));
  /* 102d16d1 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d16d7u);
  /* 102d16d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d16da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d16dc je 0x102d1737 */
  if (C.zf) goto L_102d1737;
  /* 102d16de push 0x33 */
  push32((uint32_t)(0x33u));
  /* 102d16e0 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d16e6u);
  /* 102d16e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d16e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d16eb jne 0x102d1737 */
  if (!C.zf) goto L_102d1737;
  /* 102d16ed push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d16f2 push 0x102d6578 */
  push32((uint32_t)(0x102d6578u));
  /* 102d16f7 call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d16fdu);
  /* 102d16fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1702 jle 0x102d1737 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1737;
  /* 102d1704 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1706 push 6 */
  push32((uint32_t)(0x6u));
  /* 102d1708 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d170eu);
  /* 102d170e push 0x102d612c */
  push32((uint32_t)(0x102d612cu));
  /* 102d1713 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d1719u);
  /* 102d1719 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102d171b push 1 */
  push32((uint32_t)(0x1u));
  /* 102d171d push 0 */
  push32((uint32_t)(0x0u));
  /* 102d171f call ebx */
  call_ind((uint32_t)(EBX), 0x102d1721u);
  /* 102d1721 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1723 call esi */
  call_ind((uint32_t)(ESI), 0x102d1725u);
  /* 102d1725 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d172a jne 0x102d1737 */
  if (!C.zf) goto L_102d1737;
  /* 102d172c push 2 */
  push32((uint32_t)(0x2u));
  /* 102d172e call dword ptr [0x102d5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5108))), 0x102d1734u);
  /* 102d1734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1737:;
  /* 102d1737 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102d1739 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d173fu);
  /* 102d173f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1742 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1744 je 0x102d1904 */
  if (C.zf) goto L_102d1904;
  /* 102d174a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d174c push 0x102d6580 */
  push32((uint32_t)(0x102d6580u));
  /* 102d1751 call dword ptr [0x102d50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f8))), 0x102d1757u);
  /* 102d1757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d175a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d175c jle 0x102d1904 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1904;
  /* 102d1762 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1764 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102d1766 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d176cu);
  /* 102d176c push 0 */
  push32((uint32_t)(0x0u));
  /* 102d176e call esi */
  call_ind((uint32_t)(ESI), 0x102d1770u);
  /* 102d1770 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1773 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1776 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1779 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d177c shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d177f push eax */
  push32((uint32_t)(EAX));
  /* 102d1780 push 3 */
  push32((uint32_t)(0x3u));
  /* 102d1782 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1784 call edi */
  call_ind((uint32_t)(EDI), 0x102d1786u);
  /* 102d1786 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1788 call esi */
  call_ind((uint32_t)(ESI), 0x102d178au);
  /* 102d178a add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d178d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1790 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1793 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d1796 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d1799 push ecx */
  push32((uint32_t)(ECX));
  /* 102d179a push 1 */
  push32((uint32_t)(0x1u));
  /* 102d179c push 1 */
  push32((uint32_t)(0x1u));
  /* 102d179e call edi */
  call_ind((uint32_t)(EDI), 0x102d17a0u);
  /* 102d17a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d17a2 call esi */
  call_ind((uint32_t)(ESI), 0x102d17a4u);
  /* 102d17a4 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d17a7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17aa lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17ad lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d17b0 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d17b3 push edx */
  push32((uint32_t)(EDX));
  /* 102d17b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d17b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d17b8 call edi */
  call_ind((uint32_t)(EDI), 0x102d17bau);
  /* 102d17ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102d17bc call esi */
  call_ind((uint32_t)(ESI), 0x102d17beu);
  /* 102d17be add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d17c1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17c4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17c7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17ca shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d17cd push eax */
  push32((uint32_t)(EAX));
  /* 102d17ce push 2 */
  push32((uint32_t)(0x2u));
  /* 102d17d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d17d2 call edi */
  call_ind((uint32_t)(EDI), 0x102d17d4u);
  /* 102d17d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d17d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d17d9 call esi */
  call_ind((uint32_t)(ESI), 0x102d17dbu);
  /* 102d17db add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d17de lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17e1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17e4 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d17e7 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d17ea push ecx */
  push32((uint32_t)(ECX));
  /* 102d17eb push 5 */
  push32((uint32_t)(0x5u));
  /* 102d17ed push 1 */
  push32((uint32_t)(0x1u));
  /* 102d17ef call edi */
  call_ind((uint32_t)(EDI), 0x102d17f1u);
  /* 102d17f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d17f3 call esi */
  call_ind((uint32_t)(ESI), 0x102d17f5u);
  /* 102d17f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d17f8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17fb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d17fe lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d1801 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d1804 push edx */
  push32((uint32_t)(EDX));
  /* 102d1805 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1807 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1809 call edi */
  call_ind((uint32_t)(EDI), 0x102d180bu);
  /* 102d180b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d180d call esi */
  call_ind((uint32_t)(ESI), 0x102d180fu);
  /* 102d180f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1814 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1816 jle 0x102d1834 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1834;
  /* 102d1818 call esi */
  call_ind((uint32_t)(ESI), 0x102d181au);
  /* 102d181a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102d181b push eax */
  push32((uint32_t)(EAX));
  /* 102d181c push 1 */
  push32((uint32_t)(0x1u));
  /* 102d181e push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1820 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1822 push 0x102d6120 */
  push32((uint32_t)(0x102d6120u));
  /* 102d1827 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1829 call dword ptr [0x102d510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d510c))), 0x102d182fu);
  /* 102d182f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1832 jmp 0x102d184a */
  goto L_102d184a;
L_102d1834:;
  /* 102d1834 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1836 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1838 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d183a push 0x102d6120 */
  push32((uint32_t)(0x102d6120u));
  /* 102d183f push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1841 call dword ptr [0x102d510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d510c))), 0x102d1847u);
  /* 102d1847 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d184a:;
  /* 102d184a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d184c call esi */
  call_ind((uint32_t)(ESI), 0x102d184eu);
  /* 102d184e add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1851 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1854 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1857 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d185a shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d185d push eax */
  push32((uint32_t)(EAX));
  /* 102d185e push 3 */
  push32((uint32_t)(0x3u));
  /* 102d1860 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d1862 call edi */
  call_ind((uint32_t)(EDI), 0x102d1864u);
  /* 102d1864 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1866 call esi */
  call_ind((uint32_t)(ESI), 0x102d1868u);
  /* 102d1868 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d186b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d186e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1871 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d1874 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d1877 push ecx */
  push32((uint32_t)(ECX));
  /* 102d1878 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d187a push 5 */
  push32((uint32_t)(0x5u));
  /* 102d187c call edi */
  call_ind((uint32_t)(EDI), 0x102d187eu);
  /* 102d187e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1880 call esi */
  call_ind((uint32_t)(ESI), 0x102d1882u);
  /* 102d1882 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1885 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1888 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d188b lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d188e shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d1891 push edx */
  push32((uint32_t)(EDX));
  /* 102d1892 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1894 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d1896 call edi */
  call_ind((uint32_t)(EDI), 0x102d1898u);
  /* 102d1898 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d189a call esi */
  call_ind((uint32_t)(ESI), 0x102d189cu);
  /* 102d189c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d189f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18a2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18a5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18a8 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d18ab push eax */
  push32((uint32_t)(EAX));
  /* 102d18ac push 2 */
  push32((uint32_t)(0x2u));
  /* 102d18ae push 5 */
  push32((uint32_t)(0x5u));
  /* 102d18b0 call edi */
  call_ind((uint32_t)(EDI), 0x102d18b2u);
  /* 102d18b2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d18b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d18b7 call esi */
  call_ind((uint32_t)(ESI), 0x102d18b9u);
  /* 102d18b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d18bc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18bf lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18c2 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d18c5 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d18c8 push ecx */
  push32((uint32_t)(ECX));
  /* 102d18c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d18cb push 5 */
  push32((uint32_t)(0x5u));
  /* 102d18cd call edi */
  call_ind((uint32_t)(EDI), 0x102d18cfu);
  /* 102d18cf push 0 */
  push32((uint32_t)(0x0u));
  /* 102d18d1 call esi */
  call_ind((uint32_t)(ESI), 0x102d18d3u);
  /* 102d18d3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d18d6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18d9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d18dc lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d18df shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d18e2 push edx */
  push32((uint32_t)(EDX));
  /* 102d18e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d18e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d18e7 call edi */
  call_ind((uint32_t)(EDI), 0x102d18e9u);
  /* 102d18e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d18eb call esi */
  call_ind((uint32_t)(ESI), 0x102d18edu);
  /* 102d18ed push eax */
  push32((uint32_t)(EAX));
  /* 102d18ee push 1 */
  push32((uint32_t)(0x1u));
  /* 102d18f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d18f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d18f4 push 0x102d6120 */
  push32((uint32_t)(0x102d6120u));
  /* 102d18f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d18fb call dword ptr [0x102d510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d510c))), 0x102d1901u);
  /* 102d1901 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1904:;
  /* 102d1904 push 7 */
  push32((uint32_t)(0x7u));
  /* 102d1906 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d190cu);
  /* 102d190c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d190f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1911 je 0x102d198f */
  if (C.zf) goto L_102d198f;
  /* 102d1913 push 0x102d64c0 */
  push32((uint32_t)(0x102d64c0u));
  /* 102d1918 push 0x102d6580 */
  push32((uint32_t)(0x102d6580u));
  /* 102d191d call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1923u);
  /* 102d1923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1928 jle 0x102d198f */
  if ((C.zf||C.sf!=C.of)) goto L_102d198f;
  /* 102d192a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d192c push 7 */
  push32((uint32_t)(0x7u));
  /* 102d192e call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1934u);
  /* 102d1934 push 0x102d6118 */
  push32((uint32_t)(0x102d6118u));
  /* 102d1939 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d193fu);
  /* 102d193f push 0x42 */
  push32((uint32_t)(0x42u));
  /* 102d1941 call dword ptr [0x102d50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50d4))), 0x102d1947u);
  /* 102d1947 mov edi, dword ptr [0x102d5110] */
  EDI = (r32((uint32_t)(0x102d5110)));
  /* 102d194d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 102d194f call edi */
  call_ind((uint32_t)(EDI), 0x102d1951u);
  /* 102d1951 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102d1953 call edi */
  call_ind((uint32_t)(EDI), 0x102d1955u);
  /* 102d1955 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1957 push 0x102d6520 */
  push32((uint32_t)(0x102d6520u));
  /* 102d195c call ebp */
  call_ind((uint32_t)(EBP), 0x102d195eu);
  /* 102d195e mov edi, dword ptr [0x102d5100] */
  EDI = (r32((uint32_t)(0x102d5100)));
  /* 102d1964 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1966 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1968 call edi */
  call_ind((uint32_t)(EDI), 0x102d196au);
  /* 102d196a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d196c push 0x102d6528 */
  push32((uint32_t)(0x102d6528u));
  /* 102d1971 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1973u);
  /* 102d1973 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1975 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1977 call edi */
  call_ind((uint32_t)(EDI), 0x102d1979u);
  /* 102d1979 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d197b call esi */
  call_ind((uint32_t)(ESI), 0x102d197du);
  /* 102d197d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1982 jne 0x102d198f */
  if (!C.zf) goto L_102d198f;
  /* 102d1984 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1986 call dword ptr [0x102d5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5108))), 0x102d198cu);
  /* 102d198c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d198f:;
  /* 102d198f mov edi, dword ptr [0x102d50b0] */
  EDI = (r32((uint32_t)(0x102d50b0)));
  /* 102d1995 push 7 */
  push32((uint32_t)(0x7u));
  /* 102d1997 call edi */
  call_ind((uint32_t)(EDI), 0x102d1999u);
  /* 102d1999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d199c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d199e jne 0x102d1ad7 */
  if (!C.zf) goto L_102d1ad7;
  /* 102d19a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 102d19a6 call edi */
  call_ind((uint32_t)(EDI), 0x102d19a8u);
  /* 102d19a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d19ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d19ad je 0x102d1ad7 */
  if (C.zf) goto L_102d1ad7;
  /* 102d19b3 mov edi, dword ptr [0x102d50d8] */
  EDI = (r32((uint32_t)(0x102d50d8)));
  /* 102d19b9 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d19be call edi */
  call_ind((uint32_t)(EDI), 0x102d19c0u);
  /* 102d19c0 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d19c5 push 0x102d6570 */
  push32((uint32_t)(0x102d6570u));
  /* 102d19ca mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102d19ce call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d19d4u);
  /* 102d19d4 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102d19d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d19db cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d19dd jne 0x102d1ad7 */
  if (!C.zf) goto L_102d1ad7;
  /* 102d19e3 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d19e8 call edi */
  call_ind((uint32_t)(EDI), 0x102d19eau);
  /* 102d19ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d19ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d19ef jle 0x102d1ad7 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1ad7;
  /* 102d19f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d19f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 102d19f9 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d19ffu);
  /* 102d19ff push 0x102d6110 */
  push32((uint32_t)(0x102d6110u));
  /* 102d1a04 call dword ptr [0x102d50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c8))), 0x102d1a0au);
  /* 102d1a0a push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1a0f call edi */
  call_ind((uint32_t)(EDI), 0x102d1a11u);
  /* 102d1a11 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a14 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a17 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a1a shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102d1a1c push eax */
  push32((uint32_t)(EAX));
  /* 102d1a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1a21 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1a23u);
  /* 102d1a23 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1a28 call edi */
  call_ind((uint32_t)(EDI), 0x102d1a2au);
  /* 102d1a2a lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102d1a2d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a30 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a33 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d1a36 push ecx */
  push32((uint32_t)(ECX));
  /* 102d1a37 push 5 */
  push32((uint32_t)(0x5u));
  /* 102d1a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1a3b call ebx */
  call_ind((uint32_t)(EBX), 0x102d1a3du);
  /* 102d1a3d push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1a42 call edi */
  call_ind((uint32_t)(EDI), 0x102d1a44u);
  /* 102d1a44 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102d1a47 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a4a lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a4d shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d1a50 push edx */
  push32((uint32_t)(EDX));
  /* 102d1a51 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1a55 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1a57u);
  /* 102d1a57 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1a5c call edi */
  call_ind((uint32_t)(EDI), 0x102d1a5eu);
  /* 102d1a5e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a61 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1a64 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a67 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 102d1a6a push eax */
  push32((uint32_t)(EAX));
  /* 102d1a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1a6f call ebx */
  call_ind((uint32_t)(EBX), 0x102d1a71u);
  /* 102d1a71 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1a76 call edi */
  call_ind((uint32_t)(EDI), 0x102d1a78u);
  /* 102d1a78 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a7b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a7e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102d1a81 push ecx */
  push32((uint32_t)(ECX));
  /* 102d1a82 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d1a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1a86 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1a88u);
  /* 102d1a88 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1a8d call edi */
  call_ind((uint32_t)(EDI), 0x102d1a8fu);
  /* 102d1a8f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a92 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a95 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d1a98 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d1a9b push edx */
  push32((uint32_t)(EDX));
  /* 102d1a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 102d1a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1aa0 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1aa2u);
  /* 102d1aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1aa4 push 0x102d64e8 */
  push32((uint32_t)(0x102d64e8u));
  /* 102d1aa9 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1aabu);
  /* 102d1aab push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1aad call dword ptr [0x102d50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f0))), 0x102d1ab3u);
  /* 102d1ab3 push 0x102d64f0 */
  push32((uint32_t)(0x102d64f0u));
  /* 102d1ab8 call edi */
  call_ind((uint32_t)(EDI), 0x102d1abau);
  /* 102d1aba add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1abf jle 0x102d1ad7 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1ad7;
  /* 102d1ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1ac3 push 0x102d64e0 */
  push32((uint32_t)(0x102d64e0u));
  /* 102d1ac8 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1acau);
  /* 102d1aca push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1acc push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1ace call dword ptr [0x102d5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5100))), 0x102d1ad4u);
  /* 102d1ad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1ad7:;
  /* 102d1ad7 push 0xa */
  push32((uint32_t)(0xau));
  /* 102d1ad9 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d1adfu);
  /* 102d1adf mov edi, dword ptr [0x102d5114] */
  EDI = (r32((uint32_t)(0x102d5114)));
  /* 102d1ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1ae8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1aea je 0x102d1ba3 */
  if (C.zf) goto L_102d1ba3;
  /* 102d1af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1af2 push 0x102d65c8 */
  push32((uint32_t)(0x102d65c8u));
  /* 102d1af7 call dword ptr [0x102d50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f8))), 0x102d1afdu);
  /* 102d1afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1b02 jle 0x102d1ba3 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1ba3;
  /* 102d1b08 push 0x102d6538 */
  push32((uint32_t)(0x102d6538u));
  /* 102d1b0d push 0x102d65d0 */
  push32((uint32_t)(0x102d65d0u));
  /* 102d1b12 call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1b18u);
  /* 102d1b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1b1d jne 0x102d1ba3 */
  if (!C.zf) goto L_102d1ba3;
  /* 102d1b23 push eax */
  push32((uint32_t)(EAX));
  /* 102d1b24 push 0xa */
  push32((uint32_t)(0xau));
  /* 102d1b26 call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1b2cu);
  /* 102d1b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1b2e call esi */
  call_ind((uint32_t)(ESI), 0x102d1b30u);
  /* 102d1b30 mov ecx, 6 */
  ECX = (0x6u);
  /* 102d1b35 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1b37 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d1b3a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1b3d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1b40 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d1b43 push eax */
  push32((uint32_t)(EAX));
  /* 102d1b44 push 0x102d6108 */
  push32((uint32_t)(0x102d6108u));
  /* 102d1b49 call edi */
  call_ind((uint32_t)(EDI), 0x102d1b4bu);
  /* 102d1b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1b4d call esi */
  call_ind((uint32_t)(ESI), 0x102d1b4fu);
  /* 102d1b4f mov ecx, 6 */
  ECX = (0x6u);
  /* 102d1b54 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1b56 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d1b59 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1b5c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d1b5f shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d1b62 push ecx */
  push32((uint32_t)(ECX));
  /* 102d1b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1b67 call ebx */
  call_ind((uint32_t)(EBX), 0x102d1b69u);
  /* 102d1b69 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1b6b call dword ptr [0x102d5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5118))), 0x102d1b71u);
  /* 102d1b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1b73 push 0x102d6508 */
  push32((uint32_t)(0x102d6508u));
  /* 102d1b78 call ebp */
  call_ind((uint32_t)(EBP), 0x102d1b7au);
  /* 102d1b7a push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1b7c call dword ptr [0x102d50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f0))), 0x102d1b82u);
  /* 102d1b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1b84 push 0x102d65c8 */
  push32((uint32_t)(0x102d65c8u));
  /* 102d1b89 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1b8b push 0x102d65c0 */
  push32((uint32_t)(0x102d65c0u));
  /* 102d1b90 push 0x102d65a8 */
  push32((uint32_t)(0x102d65a8u));
  /* 102d1b95 push 0x102d6518 */
  push32((uint32_t)(0x102d6518u));
  /* 102d1b9a call dword ptr [0x102d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c4))), 0x102d1ba0u);
  /* 102d1ba0 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1ba3:;
  /* 102d1ba3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102d1ba5 call dword ptr [0x102d50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50b0))), 0x102d1babu);
  /* 102d1bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1bae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d1bb0 je 0x102d1c69 */
  if (C.zf) goto L_102d1c69;
  /* 102d1bb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1bb8 push 0x102d65d8 */
  push32((uint32_t)(0x102d65d8u));
  /* 102d1bbd call dword ptr [0x102d50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f8))), 0x102d1bc3u);
  /* 102d1bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1bc8 jle 0x102d1c69 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1c69;
  /* 102d1bce push 0x102d6540 */
  push32((uint32_t)(0x102d6540u));
  /* 102d1bd3 push 0x102d65e0 */
  push32((uint32_t)(0x102d65e0u));
  /* 102d1bd8 call dword ptr [0x102d50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50ec))), 0x102d1bdeu);
  /* 102d1bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1be3 jne 0x102d1c69 */
  if (!C.zf) goto L_102d1c69;
  /* 102d1be9 push eax */
  push32((uint32_t)(EAX));
  /* 102d1bea push 0xb */
  push32((uint32_t)(0xbu));
  /* 102d1bec call dword ptr [0x102d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c0))), 0x102d1bf2u);
  /* 102d1bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1bf4 call esi */
  call_ind((uint32_t)(ESI), 0x102d1bf6u);
  /* 102d1bf6 mov ecx, 9 */
  ECX = (0x9u);
  /* 102d1bfb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1bfd lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d1c00 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1c03 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102d1c06 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102d1c09 push edx */
  push32((uint32_t)(EDX));
  /* 102d1c0a push 0x102d6100 */
  push32((uint32_t)(0x102d6100u));
  /* 102d1c0f call edi */
  call_ind((uint32_t)(EDI), 0x102d1c11u);
  /* 102d1c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1c13 call esi */
  call_ind((uint32_t)(ESI), 0x102d1c15u);
  /* 102d1c15 mov ecx, 9 */
  ECX = (0x9u);
  /* 102d1c1a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1c1c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102d1c1f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1c22 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d1c25 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d1c28 push eax */
  push32((uint32_t)(EAX));
  /* 102d1c29 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1c2d call ebx */
  call_ind((uint32_t)(EBX), 0x102d1c2fu);
  /* 102d1c2f push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1c31 call dword ptr [0x102d5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5118))), 0x102d1c37u);
  /* 102d1c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1c39 push 0x102d6510 */
  push32((uint32_t)(0x102d6510u));
  /* 102d1c3e call ebp */
  call_ind((uint32_t)(EBP), 0x102d1c40u);
  /* 102d1c40 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1c42 call dword ptr [0x102d50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50f0))), 0x102d1c48u);
  /* 102d1c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1c4a push 0x102d65d8 */
  push32((uint32_t)(0x102d65d8u));
  /* 102d1c4f push 4 */
  push32((uint32_t)(0x4u));
  /* 102d1c51 push 0x102d65b8 */
  push32((uint32_t)(0x102d65b8u));
  /* 102d1c56 push 0x102d65a8 */
  push32((uint32_t)(0x102d65a8u));
  /* 102d1c5b push 0x102d6530 */
  push32((uint32_t)(0x102d6530u));
  /* 102d1c60 call dword ptr [0x102d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50c4))), 0x102d1c66u);
  /* 102d1c66 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d1c69:;
  /* 102d1c69 pop edi */
  EDI = (pop32());
  /* 102d1c6a pop esi */
  ESI = (pop32());
  /* 102d1c6b pop ebp */
  EBP = (pop32());
  /* 102d1c6c pop ebx */
  EBX = (pop32());
  /* 102d1c6d pop ecx */
  ECX = (pop32());
  /* 102d1c6e ret  */
  ESPCHK(0x102d1200u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c70 @ 0x102d1c70 (20 bytes, 6 insns) */
void f_102d1c70(void) {
  FTRACE(0x102d1c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1c70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d1c74 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102d1c75 jne 0x102d1c7c */
  if (!C.zf) goto L_102d1c7c;
  /* 102d1c77 call 0x102d1000 */
  push32(0x102d1c7cu); f_102d1000();
L_102d1c7c:;
  /* 102d1c7c mov eax, 1 */
  EAX = (0x1u);
  /* 102d1c81 ret 0xc */
  ESPCHK(0x102d1c70u, _esp0);
  ESP += 16; return;
}

/* FUN_10001c90 @ 0x102d1c90 (217 bytes, 57 insns) */
void f_102d1c90(void) {
  FTRACE(0x102d1c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1c90 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d1c94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1c97 jne 0x102d1d25 */
  if (!C.zf) goto L_102d1d25;
  /* 102d1c9d call dword ptr [0x102d507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d507c))), 0x102d1ca3u);
  /* 102d1ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1ca5 mov dword ptr [0x102d6604], eax */
  w32((uint32_t)(0x102d6604), (EAX));
  /* 102d1caa call 0x102d26c4 */
  push32(0x102d1cafu); f_102d26c4();
  /* 102d1caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1cb1 pop ecx */
  ECX = (pop32());
  /* 102d1cb2 je 0x102d1cf0 */
  if (C.zf) goto L_102d1cf0;
  /* 102d1cb4 mov eax, dword ptr [0x102d6604] */
  EAX = (r32((uint32_t)(0x102d6604)));
  /* 102d1cb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102d1cbb mov cl, byte ptr [0x102d6605] */
  CL = (r8((uint32_t)(0x102d6605)));
  /* 102d1cc1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d1cc6 shr dword ptr [0x102d6604], 0x10 */
  w32((uint32_t)(0x102d6604), (sh_shr((uint32_t)(r32((uint32_t)(0x102d6604))), (0x10u)&0x1f, 32)));
  /* 102d1ccd mov dword ptr [0x102d660c], eax */
  w32((uint32_t)(0x102d660c), (EAX));
  /* 102d1cd2 mov dword ptr [0x102d6610], ecx */
  w32((uint32_t)(0x102d6610), (ECX));
  /* 102d1cd8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102d1cdb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1cdd mov dword ptr [0x102d6608], eax */
  w32((uint32_t)(0x102d6608), (EAX));
  /* 102d1ce2 call 0x102d1f57 */
  push32(0x102d1ce7u); f_102d1f57();
  /* 102d1ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1ce9 jne 0x102d1cf4 */
  if (!C.zf) goto L_102d1cf4;
  /* 102d1ceb call 0x102d2700 */
  push32(0x102d1cf0u); f_102d2700();
L_102d1cf0:;
  /* 102d1cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d1cf2 jmp 0x102d1d66 */
  goto L_102d1d66;
L_102d1cf4:;
  /* 102d1cf4 call dword ptr [0x102d5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5078))), 0x102d1cfau);
  /* 102d1cfa mov dword ptr [0x102d6b58], eax */
  w32((uint32_t)(0x102d6b58), (EAX));
  /* 102d1cff call 0x102d2592 */
  push32(0x102d1d04u); f_102d2592();
  /* 102d1d04 mov dword ptr [0x102d65f0], eax */
  w32((uint32_t)(0x102d65f0), (EAX));
  /* 102d1d09 call 0x102d207c */
  push32(0x102d1d0eu); f_102d207c();
  /* 102d1d0e call 0x102d2345 */
  push32(0x102d1d13u); f_102d2345();
  /* 102d1d13 call 0x102d228c */
  push32(0x102d1d18u); f_102d228c();
  /* 102d1d18 call 0x102d1e39 */
  push32(0x102d1d1du); f_102d1e39();
  /* 102d1d1d inc dword ptr [0x102d65ec] */
  { uint32_t _r=(r32((uint32_t)(0x102d65ec)))+1; w32((uint32_t)(0x102d65ec), (_r)); fl_inc(_r,32); }
  /* 102d1d23 jmp 0x102d1d63 */
  goto L_102d1d63;
L_102d1d25:;
  /* 102d1d25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102d1d27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d29 jne 0x102d1d57 */
  if (!C.zf) goto L_102d1d57;
  /* 102d1d2b cmp dword ptr [0x102d65ec], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102d65ec))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d31 jle 0x102d1cf0 */
  if ((C.zf||C.sf!=C.of)) goto L_102d1cf0;
  /* 102d1d33 dec dword ptr [0x102d65ec] */
  { uint32_t _r=(r32((uint32_t)(0x102d65ec)))-1; w32((uint32_t)(0x102d65ec), (_r)); fl_dec(_r,32); }
  /* 102d1d39 cmp dword ptr [0x102d663c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102d663c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d3f jne 0x102d1d46 */
  if (!C.zf) goto L_102d1d46;
  /* 102d1d41 call 0x102d1e77 */
  push32(0x102d1d46u); f_102d1e77();
L_102d1d46:;
  /* 102d1d46 call 0x102d2238 */
  push32(0x102d1d4bu); f_102d2238();
  /* 102d1d4b call 0x102d1fab */
  push32(0x102d1d50u); f_102d1fab();
  /* 102d1d50 call 0x102d2700 */
  push32(0x102d1d55u); f_102d2700();
  /* 102d1d55 jmp 0x102d1d63 */
  goto L_102d1d63;
L_102d1d57:;
  /* 102d1d57 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d5a jne 0x102d1d63 */
  if (!C.zf) goto L_102d1d63;
  /* 102d1d5c push ecx */
  push32((uint32_t)(ECX));
  /* 102d1d5d call 0x102d1fdc */
  push32(0x102d1d62u); f_102d1fdc();
  /* 102d1d62 pop ecx */
  ECX = (pop32());
L_102d1d63:;
  /* 102d1d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1d65 pop eax */
  EAX = (pop32());
L_102d1d66:;
  /* 102d1d66 ret 0xc */
  ESPCHK(0x102d1c90u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102d1d69 (157 bytes, 73 insns) */
void f_102d1d69(void) {
  FTRACE(0x102d1d69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1d69 push ebp */
  push32((uint32_t)(EBP));
  /* 102d1d6a mov ebp, esp */
  EBP = (ESP);
  /* 102d1d6c push ebx */
  push32((uint32_t)(EBX));
  /* 102d1d6d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d1d70 push esi */
  push32((uint32_t)(ESI));
  /* 102d1d71 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102d1d74 push edi */
  push32((uint32_t)(EDI));
  /* 102d1d75 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102d1d78 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d1d7a jne 0x102d1d85 */
  if (!C.zf) goto L_102d1d85;
  /* 102d1d7c cmp dword ptr [0x102d65ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102d65ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d83 jmp 0x102d1dab */
  goto L_102d1dab;
L_102d1d85:;
  /* 102d1d85 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d88 je 0x102d1d8f */
  if (C.zf) goto L_102d1d8f;
  /* 102d1d8a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1d8d jne 0x102d1db1 */
  if (!C.zf) goto L_102d1db1;
L_102d1d8f:;
  /* 102d1d8f mov eax, dword ptr [0x102d6b5c] */
  EAX = (r32((uint32_t)(0x102d6b5c)));
  /* 102d1d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1d96 je 0x102d1da1 */
  if (C.zf) goto L_102d1da1;
  /* 102d1d98 push edi */
  push32((uint32_t)(EDI));
  /* 102d1d99 push esi */
  push32((uint32_t)(ESI));
  /* 102d1d9a push ebx */
  push32((uint32_t)(EBX));
  /* 102d1d9b call eax */
  call_ind((uint32_t)(EAX), 0x102d1d9du);
  /* 102d1d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1d9f je 0x102d1dad */
  if (C.zf) goto L_102d1dad;
L_102d1da1:;
  /* 102d1da1 push edi */
  push32((uint32_t)(EDI));
  /* 102d1da2 push esi */
  push32((uint32_t)(ESI));
  /* 102d1da3 push ebx */
  push32((uint32_t)(EBX));
  /* 102d1da4 call 0x102d1c90 */
  push32(0x102d1da9u); f_102d1c90();
  /* 102d1da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102d1dab:;
  /* 102d1dab jne 0x102d1db1 */
  if (!C.zf) goto L_102d1db1;
L_102d1dad:;
  /* 102d1dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d1daf jmp 0x102d1dff */
  goto L_102d1dff;
L_102d1db1:;
  /* 102d1db1 push edi */
  push32((uint32_t)(EDI));
  /* 102d1db2 push esi */
  push32((uint32_t)(ESI));
  /* 102d1db3 push ebx */
  push32((uint32_t)(EBX));
  /* 102d1db4 call 0x102d1c70 */
  push32(0x102d1db9u); f_102d1c70();
  /* 102d1db9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1dbc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102d1dbf jne 0x102d1dcd */
  if (!C.zf) goto L_102d1dcd;
  /* 102d1dc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1dc3 jne 0x102d1dfc */
  if (!C.zf) goto L_102d1dfc;
  /* 102d1dc5 push edi */
  push32((uint32_t)(EDI));
  /* 102d1dc6 push eax */
  push32((uint32_t)(EAX));
  /* 102d1dc7 push ebx */
  push32((uint32_t)(EBX));
  /* 102d1dc8 call 0x102d1c90 */
  push32(0x102d1dcdu); f_102d1c90();
L_102d1dcd:;
  /* 102d1dcd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d1dcf je 0x102d1dd6 */
  if (C.zf) goto L_102d1dd6;
  /* 102d1dd1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1dd4 jne 0x102d1dfc */
  if (!C.zf) goto L_102d1dfc;
L_102d1dd6:;
  /* 102d1dd6 push edi */
  push32((uint32_t)(EDI));
  /* 102d1dd7 push esi */
  push32((uint32_t)(ESI));
  /* 102d1dd8 push ebx */
  push32((uint32_t)(EBX));
  /* 102d1dd9 call 0x102d1c90 */
  push32(0x102d1ddeu); f_102d1c90();
  /* 102d1dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1de0 jne 0x102d1de5 */
  if (!C.zf) goto L_102d1de5;
  /* 102d1de2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_102d1de5:;
  /* 102d1de5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1de9 je 0x102d1dfc */
  if (C.zf) goto L_102d1dfc;
  /* 102d1deb mov eax, dword ptr [0x102d6b5c] */
  EAX = (r32((uint32_t)(0x102d6b5c)));
  /* 102d1df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1df2 je 0x102d1dfc */
  if (C.zf) goto L_102d1dfc;
  /* 102d1df4 push edi */
  push32((uint32_t)(EDI));
  /* 102d1df5 push esi */
  push32((uint32_t)(ESI));
  /* 102d1df6 push ebx */
  push32((uint32_t)(EBX));
  /* 102d1df7 call eax */
  call_ind((uint32_t)(EAX), 0x102d1df9u);
  /* 102d1df9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102d1dfc:;
  /* 102d1dfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102d1dff:;
  /* 102d1dff pop edi */
  EDI = (pop32());
  /* 102d1e00 pop esi */
  ESI = (pop32());
  /* 102d1e01 pop ebx */
  EBX = (pop32());
  /* 102d1e02 pop ebp */
  EBP = (pop32());
  /* 102d1e03 ret 0xc */
  ESPCHK(0x102d1d69u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x102d1e06 (48 bytes, 15 insns) */
void f_102d1e06(void) {
  FTRACE(0x102d1e06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1e06 mov eax, dword ptr [0x102d65f8] */
  EAX = (r32((uint32_t)(0x102d65f8)));
  /* 102d1e0b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1e0e je 0x102d1e1d */
  if (C.zf) goto L_102d1e1d;
  /* 102d1e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1e12 jne 0x102d1e22 */
  if (!C.zf) goto L_102d1e22;
  /* 102d1e14 cmp dword ptr [0x102d65fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102d65fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1e1b jne 0x102d1e22 */
  if (!C.zf) goto L_102d1e22;
L_102d1e1d:;
  /* 102d1e1d call 0x102d2775 */
  push32(0x102d1e22u); f_102d2775();
L_102d1e22:;
  /* 102d1e22 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102d1e26 call 0x102d27ae */
  push32(0x102d1e2bu); f_102d27ae();
  /* 102d1e2b push 0xff */
  push32((uint32_t)(0xffu));
  /* 102d1e30 call dword ptr [0x102d6190] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d6190))), 0x102d1e36u);
  /* 102d1e36 pop ecx */
  ECX = (pop32());
  /* 102d1e37 pop ecx */
  ECX = (pop32());
  /* 102d1e38 ret  */
  ESPCHK(0x102d1e06u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e39 @ 0x102d1e39 (45 bytes, 12 insns) */
void f_102d1e39(void) {
  FTRACE(0x102d1e39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1e39 mov eax, dword ptr [0x102d6b54] */
  EAX = (r32((uint32_t)(0x102d6b54)));
  /* 102d1e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1e40 je 0x102d1e44 */
  if (C.zf) goto L_102d1e44;
  /* 102d1e42 call eax */
  call_ind((uint32_t)(EAX), 0x102d1e44u);
L_102d1e44:;
  /* 102d1e44 push 0x102d6010 */
  push32((uint32_t)(0x102d6010u));
  /* 102d1e49 push 0x102d6008 */
  push32((uint32_t)(0x102d6008u));
  /* 102d1e4e call 0x102d1f3d */
  push32(0x102d1e53u); f_102d1f3d();
  /* 102d1e53 push 0x102d6004 */
  push32((uint32_t)(0x102d6004u));
  /* 102d1e58 push 0x102d6000 */
  push32((uint32_t)(0x102d6000u));
  /* 102d1e5d call 0x102d1f3d */
  push32(0x102d1e62u); f_102d1f3d();
  /* 102d1e62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1e65 ret  */
  ESPCHK(0x102d1e39u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x102d1e66 (17 bytes, 6 insns) */
void f_102d1e66(void) {
  FTRACE(0x102d1e66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1e68 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1e6a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102d1e6e call 0x102d1e86 */
  push32(0x102d1e73u); f_102d1e86();
  /* 102d1e73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1e76 ret  */
  ESPCHK(0x102d1e66u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e77 @ 0x102d1e77 (15 bytes, 6 insns) */
void f_102d1e77(void) {
  FTRACE(0x102d1e77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d1e7d call 0x102d1e86 */
  push32(0x102d1e82u); f_102d1e86();
  /* 102d1e82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1e85 ret  */
  ESPCHK(0x102d1e77u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e86 @ 0x102d1e86 (163 bytes, 53 insns) */
void f_102d1e86(void) {
  FTRACE(0x102d1e86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1e86 push edi */
  push32((uint32_t)(EDI));
  /* 102d1e87 call 0x102d1f2b */
  push32(0x102d1e8cu); f_102d1f2b();
  /* 102d1e8c push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1e8e pop edi */
  EDI = (pop32());
  /* 102d1e8f cmp dword ptr [0x102d6640], edi */
  { uint32_t _a=(r32((uint32_t)(0x102d6640))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1e95 jne 0x102d1ea8 */
  if (!C.zf) goto L_102d1ea8;
  /* 102d1e97 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102d1e9b call dword ptr [0x102d5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5088))), 0x102d1ea1u);
  /* 102d1ea1 push eax */
  push32((uint32_t)(EAX));
  /* 102d1ea2 call dword ptr [0x102d5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5084))), 0x102d1ea8u);
L_102d1ea8:;
  /* 102d1ea8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1ead push ebx */
  push32((uint32_t)(EBX));
  /* 102d1eae mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102d1eb2 mov dword ptr [0x102d663c], edi */
  w32((uint32_t)(0x102d663c), (EDI));
  /* 102d1eb8 mov byte ptr [0x102d6638], bl */
  w8((uint32_t)(0x102d6638), (BL));
  /* 102d1ebe jne 0x102d1efc */
  if (!C.zf) goto L_102d1efc;
  /* 102d1ec0 mov eax, dword ptr [0x102d6b50] */
  EAX = (r32((uint32_t)(0x102d6b50)));
  /* 102d1ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1ec7 je 0x102d1eeb */
  if (C.zf) goto L_102d1eeb;
  /* 102d1ec9 mov ecx, dword ptr [0x102d6b4c] */
  ECX = (r32((uint32_t)(0x102d6b4c)));
  /* 102d1ecf push esi */
  push32((uint32_t)(ESI));
  /* 102d1ed0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 102d1ed3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1ed5 jb 0x102d1eea */
  if (C.cf) goto L_102d1eea;
L_102d1ed7:;
  /* 102d1ed7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102d1ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1edb je 0x102d1edf */
  if (C.zf) goto L_102d1edf;
  /* 102d1edd call eax */
  call_ind((uint32_t)(EAX), 0x102d1edfu);
L_102d1edf:;
  /* 102d1edf sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d1ee2 cmp esi, dword ptr [0x102d6b50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102d6b50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1ee8 jae 0x102d1ed7 */
  if (!C.cf) goto L_102d1ed7;
L_102d1eea:;
  /* 102d1eea pop esi */
  ESI = (pop32());
L_102d1eeb:;
  /* 102d1eeb push 0x102d6018 */
  push32((uint32_t)(0x102d6018u));
  /* 102d1ef0 push 0x102d6014 */
  push32((uint32_t)(0x102d6014u));
  /* 102d1ef5 call 0x102d1f3d */
  push32(0x102d1efau); f_102d1f3d();
  /* 102d1efa pop ecx */
  ECX = (pop32());
  /* 102d1efb pop ecx */
  ECX = (pop32());
L_102d1efc:;
  /* 102d1efc push 0x102d6020 */
  push32((uint32_t)(0x102d6020u));
  /* 102d1f01 push 0x102d601c */
  push32((uint32_t)(0x102d601cu));
  /* 102d1f06 call 0x102d1f3d */
  push32(0x102d1f0bu); f_102d1f3d();
  /* 102d1f0b pop ecx */
  ECX = (pop32());
  /* 102d1f0c pop ecx */
  ECX = (pop32());
  /* 102d1f0d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102d1f0f pop ebx */
  EBX = (pop32());
  /* 102d1f10 je 0x102d1f19 */
  if (C.zf) goto L_102d1f19;
  /* 102d1f12 call 0x102d1f34 */
  push32(0x102d1f17u); f_102d1f34();
  /* 102d1f17 pop edi */
  EDI = (pop32());
  /* 102d1f18 ret  */
  ESPCHK(0x102d1e86u, _esp0);
  ESP += 4; return;
L_102d1f19:;
  /* 102d1f19 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102d1f1d mov dword ptr [0x102d6640], edi */
  w32((uint32_t)(0x102d6640), (EDI));
  /* 102d1f23 call dword ptr [0x102d5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5080))), 0x102d1f29u);
  /* 102d1f29 pop edi */
  EDI = (pop32());
  /* 102d1f2a ret  */
  ESPCHK(0x102d1e86u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f2b @ 0x102d1f2b (9 bytes, 4 insns) */
void f_102d1f2b(void) {
  FTRACE(0x102d1f2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1f2b push 0xd */
  push32((uint32_t)(0xdu));
  /* 102d1f2d call 0x102d2996 */
  push32(0x102d1f32u); f_102d2996();
  /* 102d1f32 pop ecx */
  ECX = (pop32());
  /* 102d1f33 ret  */
  ESPCHK(0x102d1f2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f34 @ 0x102d1f34 (9 bytes, 4 insns) */
void f_102d1f34(void) {
  FTRACE(0x102d1f34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1f34 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102d1f36 call 0x102d29f7 */
  push32(0x102d1f3bu); f_102d29f7();
  /* 102d1f3b pop ecx */
  ECX = (pop32());
  /* 102d1f3c ret  */
  ESPCHK(0x102d1f34u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f3d @ 0x102d1f3d (26 bytes, 12 insns) */
void f_102d1f3d(void) {
  FTRACE(0x102d1f3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1f3d push esi */
  push32((uint32_t)(ESI));
  /* 102d1f3e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_102d1f42:;
  /* 102d1f42 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1f46 jae 0x102d1f55 */
  if (!C.cf) goto L_102d1f55;
  /* 102d1f48 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102d1f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1f4c je 0x102d1f50 */
  if (C.zf) goto L_102d1f50;
  /* 102d1f4e call eax */
  call_ind((uint32_t)(EAX), 0x102d1f50u);
L_102d1f50:;
  /* 102d1f50 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d1f53 jmp 0x102d1f42 */
  goto L_102d1f42;
L_102d1f55:;
  /* 102d1f55 pop esi */
  ESI = (pop32());
  /* 102d1f56 ret  */
  ESPCHK(0x102d1f3du, _esp0);
  ESP += 4; return;
}

/* FUN_10001f57 @ 0x102d1f57 (84 bytes, 32 insns) */
void f_102d1f57(void) {
  FTRACE(0x102d1f57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1f57 push esi */
  push32((uint32_t)(ESI));
  /* 102d1f58 call 0x102d2901 */
  push32(0x102d1f5du); f_102d2901();
  /* 102d1f5d call dword ptr [0x102d5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5004))), 0x102d1f63u);
  /* 102d1f63 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1f66 mov dword ptr [0x102d6194], eax */
  w32((uint32_t)(0x102d6194), (EAX));
  /* 102d1f6b je 0x102d1fa7 */
  if (C.zf) goto L_102d1fa7;
  /* 102d1f6d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102d1f6f push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1f71 call 0x102d2a0c */
  push32(0x102d1f76u); f_102d2a0c();
  /* 102d1f76 mov esi, eax */
  ESI = (EAX);
  /* 102d1f78 pop ecx */
  ECX = (pop32());
  /* 102d1f79 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d1f7b pop ecx */
  ECX = (pop32());
  /* 102d1f7c je 0x102d1fa7 */
  if (C.zf) goto L_102d1fa7;
  /* 102d1f7e push esi */
  push32((uint32_t)(ESI));
  /* 102d1f7f push dword ptr [0x102d6194] */
  push32((uint32_t)(r32((uint32_t)(0x102d6194))));
  /* 102d1f85 call dword ptr [0x102d5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5090))), 0x102d1f8bu);
  /* 102d1f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d1f8d je 0x102d1fa7 */
  if (C.zf) goto L_102d1fa7;
  /* 102d1f8f push esi */
  push32((uint32_t)(ESI));
  /* 102d1f90 call 0x102d1fc9 */
  push32(0x102d1f95u); f_102d1fc9();
  /* 102d1f95 pop ecx */
  ECX = (pop32());
  /* 102d1f96 call dword ptr [0x102d508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d508c))), 0x102d1f9cu);
  /* 102d1f9c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102d1fa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d1fa2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102d1fa4 pop eax */
  EAX = (pop32());
  /* 102d1fa5 pop esi */
  ESI = (pop32());
  /* 102d1fa6 ret  */
  ESPCHK(0x102d1f57u, _esp0);
  ESP += 4; return;
L_102d1fa7:;
  /* 102d1fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d1fa9 pop esi */
  ESI = (pop32());
  /* 102d1faa ret  */
  ESPCHK(0x102d1f57u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fab @ 0x102d1fab (30 bytes, 8 insns) */
void f_102d1fab(void) {
  FTRACE(0x102d1fabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1fab call 0x102d292a */
  push32(0x102d1fb0u); f_102d292a();
  /* 102d1fb0 mov eax, dword ptr [0x102d6194] */
  EAX = (r32((uint32_t)(0x102d6194)));
  /* 102d1fb5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1fb8 je 0x102d1fc8 */
  if (C.zf) goto L_102d1fc8;
  /* 102d1fba push eax */
  push32((uint32_t)(EAX));
  /* 102d1fbb call dword ptr [0x102d5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5000))), 0x102d1fc1u);
  /* 102d1fc1 or dword ptr [0x102d6194], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x102d6194)))|(0xffffffffu); w32((uint32_t)(0x102d6194), (_r)); fl_logic(_r,32); }
L_102d1fc8:;
  /* 102d1fc8 ret  */
  ESPCHK(0x102d1fabu, _esp0);
  ESP += 4; return;
}

/* FUN_10001fc9 @ 0x102d1fc9 (19 bytes, 4 insns) */
void f_102d1fc9(void) {
  FTRACE(0x102d1fc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1fc9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d1fcd mov dword ptr [eax + 0x50], 0x102d6310 */
  w32((uint32_t)(EAX + 0x50), (0x102d6310u));
  /* 102d1fd4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 102d1fdb ret  */
  ESPCHK(0x102d1fc9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fdc @ 0x102d1fdc (160 bytes, 62 insns) */
void f_102d1fdc(void) {
  FTRACE(0x102d1fdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d1fdc mov eax, dword ptr [0x102d6194] */
  EAX = (r32((uint32_t)(0x102d6194)));
  /* 102d1fe1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d1fe4 je 0x102d207b */
  if (C.zf) goto L_102d207b;
  /* 102d1fea push esi */
  push32((uint32_t)(ESI));
  /* 102d1feb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102d1fef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d1ff1 jne 0x102d2000 */
  if (!C.zf) goto L_102d2000;
  /* 102d1ff3 push eax */
  push32((uint32_t)(EAX));
  /* 102d1ff4 call dword ptr [0x102d509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d509c))), 0x102d1ffau);
  /* 102d1ffa mov esi, eax */
  ESI = (EAX);
  /* 102d1ffc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d1ffe je 0x102d206c */
  if (C.zf) goto L_102d206c;
L_102d2000:;
  /* 102d2000 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 102d2003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2005 je 0x102d200e */
  if (C.zf) goto L_102d200e;
  /* 102d2007 push eax */
  push32((uint32_t)(EAX));
  /* 102d2008 call 0x102d2a99 */
  push32(0x102d200du); f_102d2a99();
  /* 102d200d pop ecx */
  ECX = (pop32());
L_102d200e:;
  /* 102d200e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 102d2011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2013 je 0x102d201c */
  if (C.zf) goto L_102d201c;
  /* 102d2015 push eax */
  push32((uint32_t)(EAX));
  /* 102d2016 call 0x102d2a99 */
  push32(0x102d201bu); f_102d2a99();
  /* 102d201b pop ecx */
  ECX = (pop32());
L_102d201c:;
  /* 102d201c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 102d201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2021 je 0x102d202a */
  if (C.zf) goto L_102d202a;
  /* 102d2023 push eax */
  push32((uint32_t)(EAX));
  /* 102d2024 call 0x102d2a99 */
  push32(0x102d2029u); f_102d2a99();
  /* 102d2029 pop ecx */
  ECX = (pop32());
L_102d202a:;
  /* 102d202a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 102d202d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d202f je 0x102d2038 */
  if (C.zf) goto L_102d2038;
  /* 102d2031 push eax */
  push32((uint32_t)(EAX));
  /* 102d2032 call 0x102d2a99 */
  push32(0x102d2037u); f_102d2a99();
  /* 102d2037 pop ecx */
  ECX = (pop32());
L_102d2038:;
  /* 102d2038 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 102d203b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d203d je 0x102d2046 */
  if (C.zf) goto L_102d2046;
  /* 102d203f push eax */
  push32((uint32_t)(EAX));
  /* 102d2040 call 0x102d2a99 */
  push32(0x102d2045u); f_102d2a99();
  /* 102d2045 pop ecx */
  ECX = (pop32());
L_102d2046:;
  /* 102d2046 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 102d2049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d204b je 0x102d2054 */
  if (C.zf) goto L_102d2054;
  /* 102d204d push eax */
  push32((uint32_t)(EAX));
  /* 102d204e call 0x102d2a99 */
  push32(0x102d2053u); f_102d2a99();
  /* 102d2053 pop ecx */
  ECX = (pop32());
L_102d2054:;
  /* 102d2054 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 102d2057 cmp eax, 0x102d6310 */
  { uint32_t _a=(EAX),_b=(0x102d6310u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d205c je 0x102d2065 */
  if (C.zf) goto L_102d2065;
  /* 102d205e push eax */
  push32((uint32_t)(EAX));
  /* 102d205f call 0x102d2a99 */
  push32(0x102d2064u); f_102d2a99();
  /* 102d2064 pop ecx */
  ECX = (pop32());
L_102d2065:;
  /* 102d2065 push esi */
  push32((uint32_t)(ESI));
  /* 102d2066 call 0x102d2a99 */
  push32(0x102d206bu); f_102d2a99();
  /* 102d206b pop ecx */
  ECX = (pop32());
L_102d206c:;
  /* 102d206c push 0 */
  push32((uint32_t)(0x0u));
  /* 102d206e push dword ptr [0x102d6194] */
  push32((uint32_t)(r32((uint32_t)(0x102d6194))));
  /* 102d2074 call dword ptr [0x102d5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5090))), 0x102d207au);
  /* 102d207a pop esi */
  ESI = (pop32());
L_102d207b:;
  /* 102d207b ret  */
  ESPCHK(0x102d1fdcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000207c @ 0x102d207c (444 bytes, 150 insns) */
void f_102d207c(void) {
  FTRACE(0x102d207cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d207c push ebp */
  push32((uint32_t)(EBP));
  /* 102d207d mov ebp, esp */
  EBP = (ESP);
  /* 102d207f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2082 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2083 push esi */
  push32((uint32_t)(ESI));
  /* 102d2084 push edi */
  push32((uint32_t)(EDI));
  /* 102d2085 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102d208a call 0x102d2ae1 */
  push32(0x102d208fu); f_102d2ae1();
  /* 102d208f mov esi, eax */
  ESI = (EAX);
  /* 102d2091 pop ecx */
  ECX = (pop32());
  /* 102d2092 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2094 jne 0x102d209e */
  if (!C.zf) goto L_102d209e;
  /* 102d2096 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102d2098 call 0x102d1e06 */
  push32(0x102d209du); f_102d1e06();
  /* 102d209d pop ecx */
  ECX = (pop32());
L_102d209e:;
  /* 102d209e mov dword ptr [0x102d6a40], esi */
  w32((uint32_t)(0x102d6a40), (ESI));
  /* 102d20a4 mov dword ptr [0x102d6b40], 0x20 */
  w32((uint32_t)(0x102d6b40), (0x20u));
  /* 102d20ae lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102d20b4:;
  /* 102d20b4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d20b6 jae 0x102d20d6 */
  if (!C.cf) goto L_102d20d6;
  /* 102d20b8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102d20bc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102d20bf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102d20c3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102d20c7 mov eax, dword ptr [0x102d6a40] */
  EAX = (r32((uint32_t)(0x102d6a40)));
  /* 102d20cc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d20cf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d20d4 jmp 0x102d20b4 */
  goto L_102d20b4;
L_102d20d6:;
  /* 102d20d6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102d20d9 push eax */
  push32((uint32_t)(EAX));
  /* 102d20da call dword ptr [0x102d5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5094))), 0x102d20e0u);
  /* 102d20e0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102d20e5 je 0x102d21bc */
  if (C.zf) goto L_102d21bc;
  /* 102d20eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102d20ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d20f0 je 0x102d21bc */
  if (C.zf) goto L_102d21bc;
  /* 102d20f6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 102d20f8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 102d20fb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 102d20fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102d2101 mov eax, 0x800 */
  EAX = (0x800u);
  /* 102d2106 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2108 jl 0x102d210c */
  if ((C.sf!=C.of)) goto L_102d210c;
  /* 102d210a mov edi, eax */
  EDI = (EAX);
L_102d210c:;
  /* 102d210c cmp dword ptr [0x102d6b40], edi */
  { uint32_t _a=(r32((uint32_t)(0x102d6b40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2112 jge 0x102d216a */
  if ((C.sf==C.of)) goto L_102d216a;
  /* 102d2114 mov esi, 0x102d6a44 */
  ESI = (0x102d6a44u);
L_102d2119:;
  /* 102d2119 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102d211e call 0x102d2ae1 */
  push32(0x102d2123u); f_102d2ae1();
  /* 102d2123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2125 pop ecx */
  ECX = (pop32());
  /* 102d2126 je 0x102d2164 */
  if (C.zf) goto L_102d2164;
  /* 102d2128 add dword ptr [0x102d6b40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x102d6b40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x102d6b40), (_r)); fl_add(_a,_b,_r,32); }
  /* 102d212f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102d2131 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_102d2137:;
  /* 102d2137 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2139 jae 0x102d2157 */
  if (!C.cf) goto L_102d2157;
  /* 102d213b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 102d213f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102d2142 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102d2146 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 102d214a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102d214c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d214f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2155 jmp 0x102d2137 */
  goto L_102d2137;
L_102d2157:;
  /* 102d2157 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d215a cmp dword ptr [0x102d6b40], edi */
  { uint32_t _a=(r32((uint32_t)(0x102d6b40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2160 jl 0x102d2119 */
  if ((C.sf!=C.of)) goto L_102d2119;
  /* 102d2162 jmp 0x102d216a */
  goto L_102d216a;
L_102d2164:;
  /* 102d2164 mov edi, dword ptr [0x102d6b40] */
  EDI = (r32((uint32_t)(0x102d6b40)));
L_102d216a:;
  /* 102d216a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102d216c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d216e jle 0x102d21bc */
  if ((C.zf||C.sf!=C.of)) goto L_102d21bc;
L_102d2170:;
  /* 102d2170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d2173 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102d2175 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2178 je 0x102d21b2 */
  if (C.zf) goto L_102d21b2;
  /* 102d217a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102d217c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102d217e je 0x102d21b2 */
  if (C.zf) goto L_102d21b2;
  /* 102d2180 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102d2182 jne 0x102d218f */
  if (!C.zf) goto L_102d218f;
  /* 102d2184 push ecx */
  push32((uint32_t)(ECX));
  /* 102d2185 call dword ptr [0x102d50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50a8))), 0x102d218bu);
  /* 102d218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d218d je 0x102d21b2 */
  if (C.zf) goto L_102d21b2;
L_102d218f:;
  /* 102d218f mov ecx, esi */
  ECX = (ESI);
  /* 102d2191 mov eax, esi */
  EAX = (ESI);
  /* 102d2193 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102d2196 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102d2199 mov ecx, dword ptr [ecx*4 + 0x102d6a40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x102d6a40)));
  /* 102d21a0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102d21a3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102d21a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d21a9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 102d21ab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102d21ad mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 102d21af mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_102d21b2:;
  /* 102d21b2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102d21b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d21b7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102d21b8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d21ba jl 0x102d2170 */
  if ((C.sf!=C.of)) goto L_102d2170;
L_102d21bc:;
  /* 102d21bc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102d21be:;
  /* 102d21be mov ecx, dword ptr [0x102d6a40] */
  ECX = (r32((uint32_t)(0x102d6a40)));
  /* 102d21c4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102d21c7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d21cb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102d21ce jne 0x102d221d */
  if (!C.zf) goto L_102d221d;
  /* 102d21d0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102d21d2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102d21d6 jne 0x102d21dd */
  if (!C.zf) goto L_102d21dd;
  /* 102d21d8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102d21da pop eax */
  EAX = (pop32());
  /* 102d21db jmp 0x102d21e7 */
  goto L_102d21e7;
L_102d21dd:;
  /* 102d21dd mov eax, ebx */
  EAX = (EBX);
  /* 102d21df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102d21e0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102d21e2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d21e4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102d21e7:;
  /* 102d21e7 push eax */
  push32((uint32_t)(EAX));
  /* 102d21e8 call dword ptr [0x102d50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50a4))), 0x102d21eeu);
  /* 102d21ee mov edi, eax */
  EDI = (EAX);
  /* 102d21f0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d21f3 je 0x102d220c */
  if (C.zf) goto L_102d220c;
  /* 102d21f5 push edi */
  push32((uint32_t)(EDI));
  /* 102d21f6 call dword ptr [0x102d50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50a8))), 0x102d21fcu);
  /* 102d21fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d21fe je 0x102d220c */
  if (C.zf) goto L_102d220c;
  /* 102d2200 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d2205 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102d2207 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d220a jne 0x102d2212 */
  if (!C.zf) goto L_102d2212;
L_102d220c:;
  /* 102d220c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102d2210 jmp 0x102d2221 */
  goto L_102d2221;
L_102d2212:;
  /* 102d2212 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2215 jne 0x102d2221 */
  if (!C.zf) goto L_102d2221;
  /* 102d2217 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102d221b jmp 0x102d2221 */
  goto L_102d2221;
L_102d221d:;
  /* 102d221d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102d2221:;
  /* 102d2221 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102d2222 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2225 jl 0x102d21be */
  if ((C.sf!=C.of)) goto L_102d21be;
  /* 102d2227 push dword ptr [0x102d6b40] */
  push32((uint32_t)(r32((uint32_t)(0x102d6b40))));
  /* 102d222d call dword ptr [0x102d50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50a0))), 0x102d2233u);
  /* 102d2233 pop edi */
  EDI = (pop32());
  /* 102d2234 pop esi */
  ESI = (pop32());
  /* 102d2235 pop ebx */
  EBX = (pop32());
  /* 102d2236 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d2237 ret  */
  ESPCHK(0x102d207cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002238 @ 0x102d2238 (84 bytes, 33 insns) */
void f_102d2238(void) {
  FTRACE(0x102d2238u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2238 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2239 push esi */
  push32((uint32_t)(ESI));
  /* 102d223a push edi */
  push32((uint32_t)(EDI));
  /* 102d223b mov esi, 0x102d6a40 */
  ESI = (0x102d6a40u);
L_102d2240:;
  /* 102d2240 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102d2242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2244 je 0x102d227d */
  if (C.zf) goto L_102d227d;
  /* 102d2246 mov edi, eax */
  EDI = (EAX);
  /* 102d2248 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d224d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d224f jae 0x102d2272 */
  if (!C.cf) goto L_102d2272;
  /* 102d2251 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_102d2254:;
  /* 102d2254 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2258 je 0x102d2261 */
  if (C.zf) goto L_102d2261;
  /* 102d225a push ebx */
  push32((uint32_t)(EBX));
  /* 102d225b call dword ptr [0x102d5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5098))), 0x102d2261u);
L_102d2261:;
  /* 102d2261 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102d2263 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2266 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d226b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d226e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2270 jb 0x102d2254 */
  if (C.cf) goto L_102d2254;
L_102d2272:;
  /* 102d2272 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d2274 call 0x102d2a99 */
  push32(0x102d2279u); f_102d2a99();
  /* 102d2279 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102d227c pop ecx */
  ECX = (pop32());
L_102d227d:;
  /* 102d227d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2280 cmp esi, 0x102d6b40 */
  { uint32_t _a=(ESI),_b=(0x102d6b40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2286 jl 0x102d2240 */
  if ((C.sf!=C.of)) goto L_102d2240;
  /* 102d2288 pop edi */
  EDI = (pop32());
  /* 102d2289 pop esi */
  ESI = (pop32());
  /* 102d228a pop ebx */
  EBX = (pop32());
  /* 102d228b ret  */
  ESPCHK(0x102d2238u, _esp0);
  ESP += 4; return;
}

/* FUN_1000228c @ 0x102d228c (185 bytes, 71 insns) */
void f_102d228c(void) {
  FTRACE(0x102d228cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d228c push ebx */
  push32((uint32_t)(EBX));
  /* 102d228d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d228f cmp dword ptr [0x102d6b48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102d6b48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2295 push esi */
  push32((uint32_t)(ESI));
  /* 102d2296 push edi */
  push32((uint32_t)(EDI));
  /* 102d2297 jne 0x102d229e */
  if (!C.zf) goto L_102d229e;
  /* 102d2299 call 0x102d30b3 */
  push32(0x102d229eu); f_102d30b3();
L_102d229e:;
  /* 102d229e mov esi, dword ptr [0x102d65f0] */
  ESI = (r32((uint32_t)(0x102d65f0)));
  /* 102d22a4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_102d22a6:;
  /* 102d22a6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d22a8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d22aa je 0x102d22be */
  if (C.zf) goto L_102d22be;
  /* 102d22ac cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d22ae je 0x102d22b1 */
  if (C.zf) goto L_102d22b1;
  /* 102d22b0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102d22b1:;
  /* 102d22b1 push esi */
  push32((uint32_t)(ESI));
  /* 102d22b2 call 0x102d2c60 */
  push32(0x102d22b7u); f_102d2c60();
  /* 102d22b7 pop ecx */
  ECX = (pop32());
  /* 102d22b8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 102d22bc jmp 0x102d22a6 */
  goto L_102d22a6;
L_102d22be:;
  /* 102d22be lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102d22c5 push eax */
  push32((uint32_t)(EAX));
  /* 102d22c6 call 0x102d2ae1 */
  push32(0x102d22cbu); f_102d2ae1();
  /* 102d22cb mov esi, eax */
  ESI = (EAX);
  /* 102d22cd pop ecx */
  ECX = (pop32());
  /* 102d22ce cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d22d0 mov dword ptr [0x102d6620], esi */
  w32((uint32_t)(0x102d6620), (ESI));
  /* 102d22d6 jne 0x102d22e0 */
  if (!C.zf) goto L_102d22e0;
  /* 102d22d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102d22da call 0x102d1e06 */
  push32(0x102d22dfu); f_102d1e06();
  /* 102d22df pop ecx */
  ECX = (pop32());
L_102d22e0:;
  /* 102d22e0 mov edi, dword ptr [0x102d65f0] */
  EDI = (r32((uint32_t)(0x102d65f0)));
  /* 102d22e6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d22e8 je 0x102d2323 */
  if (C.zf) goto L_102d2323;
  /* 102d22ea push ebp */
  push32((uint32_t)(EBP));
L_102d22eb:;
  /* 102d22eb push edi */
  push32((uint32_t)(EDI));
  /* 102d22ec call 0x102d2c60 */
  push32(0x102d22f1u); f_102d2c60();
  /* 102d22f1 mov ebp, eax */
  EBP = (EAX);
  /* 102d22f3 pop ecx */
  ECX = (pop32());
  /* 102d22f4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102d22f5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d22f8 je 0x102d231c */
  if (C.zf) goto L_102d231c;
  /* 102d22fa push ebp */
  push32((uint32_t)(EBP));
  /* 102d22fb call 0x102d2ae1 */
  push32(0x102d2300u); f_102d2ae1();
  /* 102d2300 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2302 pop ecx */
  ECX = (pop32());
  /* 102d2303 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102d2305 jne 0x102d230f */
  if (!C.zf) goto L_102d230f;
  /* 102d2307 push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2309 call 0x102d1e06 */
  push32(0x102d230eu); f_102d1e06();
  /* 102d230e pop ecx */
  ECX = (pop32());
L_102d230f:;
  /* 102d230f push edi */
  push32((uint32_t)(EDI));
  /* 102d2310 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d2312 call 0x102d2b70 */
  push32(0x102d2317u); f_102d2b70();
  /* 102d2317 pop ecx */
  ECX = (pop32());
  /* 102d2318 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d231b pop ecx */
  ECX = (pop32());
L_102d231c:;
  /* 102d231c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d231e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2320 jne 0x102d22eb */
  if (!C.zf) goto L_102d22eb;
  /* 102d2322 pop ebp */
  EBP = (pop32());
L_102d2323:;
  /* 102d2323 push dword ptr [0x102d65f0] */
  push32((uint32_t)(r32((uint32_t)(0x102d65f0))));
  /* 102d2329 call 0x102d2a99 */
  push32(0x102d232eu); f_102d2a99();
  /* 102d232e pop ecx */
  ECX = (pop32());
  /* 102d232f mov dword ptr [0x102d65f0], ebx */
  w32((uint32_t)(0x102d65f0), (EBX));
  /* 102d2335 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 102d2337 pop edi */
  EDI = (pop32());
  /* 102d2338 pop esi */
  ESI = (pop32());
  /* 102d2339 mov dword ptr [0x102d6b44], 1 */
  w32((uint32_t)(0x102d6b44), (0x1u));
  /* 102d2343 pop ebx */
  EBX = (pop32());
  /* 102d2344 ret  */
  ESPCHK(0x102d228cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002345 @ 0x102d2345 (153 bytes, 62 insns) */
void f_102d2345(void) {
  FTRACE(0x102d2345u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2345 push ebp */
  push32((uint32_t)(EBP));
  /* 102d2346 mov ebp, esp */
  EBP = (ESP);
  /* 102d2348 push ecx */
  push32((uint32_t)(ECX));
  /* 102d2349 push ecx */
  push32((uint32_t)(ECX));
  /* 102d234a push ebx */
  push32((uint32_t)(EBX));
  /* 102d234b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d234d cmp dword ptr [0x102d6b48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102d6b48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2353 push esi */
  push32((uint32_t)(ESI));
  /* 102d2354 push edi */
  push32((uint32_t)(EDI));
  /* 102d2355 jne 0x102d235c */
  if (!C.zf) goto L_102d235c;
  /* 102d2357 call 0x102d30b3 */
  push32(0x102d235cu); f_102d30b3();
L_102d235c:;
  /* 102d235c mov esi, 0x102d6644 */
  ESI = (0x102d6644u);
  /* 102d2361 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102d2366 push esi */
  push32((uint32_t)(ESI));
  /* 102d2367 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2368 call dword ptr [0x102d5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5074))), 0x102d236eu);
  /* 102d236e mov eax, dword ptr [0x102d6b58] */
  EAX = (r32((uint32_t)(0x102d6b58)));
  /* 102d2373 mov dword ptr [0x102d6630], esi */
  w32((uint32_t)(0x102d6630), (ESI));
  /* 102d2379 mov edi, esi */
  EDI = (ESI);
  /* 102d237b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d237d je 0x102d2381 */
  if (C.zf) goto L_102d2381;
  /* 102d237f mov edi, eax */
  EDI = (EAX);
L_102d2381:;
  /* 102d2381 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102d2384 push eax */
  push32((uint32_t)(EAX));
  /* 102d2385 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102d2388 push eax */
  push32((uint32_t)(EAX));
  /* 102d2389 push ebx */
  push32((uint32_t)(EBX));
  /* 102d238a push ebx */
  push32((uint32_t)(EBX));
  /* 102d238b push edi */
  push32((uint32_t)(EDI));
  /* 102d238c call 0x102d23de */
  push32(0x102d2391u); f_102d23de();
  /* 102d2391 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102d2394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d2397 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102d239a push eax */
  push32((uint32_t)(EAX));
  /* 102d239b call 0x102d2ae1 */
  push32(0x102d23a0u); f_102d2ae1();
  /* 102d23a0 mov esi, eax */
  ESI = (EAX);
  /* 102d23a2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d23a5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d23a7 jne 0x102d23b1 */
  if (!C.zf) goto L_102d23b1;
  /* 102d23a9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102d23ab call 0x102d1e06 */
  push32(0x102d23b0u); f_102d1e06();
  /* 102d23b0 pop ecx */
  ECX = (pop32());
L_102d23b1:;
  /* 102d23b1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102d23b4 push eax */
  push32((uint32_t)(EAX));
  /* 102d23b5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102d23b8 push eax */
  push32((uint32_t)(EAX));
  /* 102d23b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d23bc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 102d23bf push eax */
  push32((uint32_t)(EAX));
  /* 102d23c0 push esi */
  push32((uint32_t)(ESI));
  /* 102d23c1 push edi */
  push32((uint32_t)(EDI));
  /* 102d23c2 call 0x102d23de */
  push32(0x102d23c7u); f_102d23de();
  /* 102d23c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d23ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d23cd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102d23ce mov dword ptr [0x102d6618], esi */
  w32((uint32_t)(0x102d6618), (ESI));
  /* 102d23d4 pop edi */
  EDI = (pop32());
  /* 102d23d5 pop esi */
  ESI = (pop32());
  /* 102d23d6 mov dword ptr [0x102d6614], eax */
  w32((uint32_t)(0x102d6614), (EAX));
  /* 102d23db pop ebx */
  EBX = (pop32());
  /* 102d23dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d23dd ret  */
  ESPCHK(0x102d2345u, _esp0);
  ESP += 4; return;
}

/* FUN_100023de @ 0x102d23de (436 bytes, 187 insns) */
void f_102d23de(void) {
  FTRACE(0x102d23deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d23de push ebp */
  push32((uint32_t)(EBP));
  /* 102d23df mov ebp, esp */
  EBP = (ESP);
  /* 102d23e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102d23e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102d23e7 push ebx */
  push32((uint32_t)(EBX));
  /* 102d23e8 push esi */
  push32((uint32_t)(ESI));
  /* 102d23e9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102d23ec mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102d23ef push edi */
  push32((uint32_t)(EDI));
  /* 102d23f0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102d23f3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102d23f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d23fc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d23fe je 0x102d2408 */
  if (C.zf) goto L_102d2408;
  /* 102d2400 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102d2402 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2405 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102d2408:;
  /* 102d2408 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d240b jne 0x102d2451 */
  if (!C.zf) goto L_102d2451;
L_102d240d:;
  /* 102d240d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102d2410 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2411 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2414 je 0x102d243f */
  if (C.zf) goto L_102d243f;
  /* 102d2416 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2418 je 0x102d243f */
  if (C.zf) goto L_102d243f;
  /* 102d241a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102d241d test byte ptr [edx + 0x102d6921], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102d6921)))&(0x4u); fl_logic(_r,8); }
  /* 102d2424 je 0x102d2432 */
  if (C.zf) goto L_102d2432;
  /* 102d2426 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d2428 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d242a je 0x102d2432 */
  if (C.zf) goto L_102d2432;
  /* 102d242c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d242e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102d2430 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d2431 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102d2432:;
  /* 102d2432 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d2434 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2436 je 0x102d240d */
  if (C.zf) goto L_102d240d;
  /* 102d2438 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d243a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102d243c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d243d jmp 0x102d240d */
  goto L_102d240d;
L_102d243f:;
  /* 102d243f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d2441 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2443 je 0x102d2449 */
  if (C.zf) goto L_102d2449;
  /* 102d2445 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102d2448 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102d2449:;
  /* 102d2449 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d244c jne 0x102d2494 */
  if (!C.zf) goto L_102d2494;
  /* 102d244e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d244f jmp 0x102d2494 */
  goto L_102d2494;
L_102d2451:;
  /* 102d2451 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d2453 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2455 je 0x102d245c */
  if (C.zf) goto L_102d245c;
  /* 102d2457 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d2459 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102d245b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102d245c:;
  /* 102d245c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d245e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d245f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102d2462 test byte ptr [ebx + 0x102d6921], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102d6921)))&(0x4u); fl_logic(_r,8); }
  /* 102d2469 je 0x102d2477 */
  if (C.zf) goto L_102d2477;
  /* 102d246b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d246d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d246f je 0x102d2476 */
  if (C.zf) goto L_102d2476;
  /* 102d2471 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 102d2473 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 102d2475 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102d2476:;
  /* 102d2476 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102d2477:;
  /* 102d2477 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d247a je 0x102d2485 */
  if (C.zf) goto L_102d2485;
  /* 102d247c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d247e je 0x102d2489 */
  if (C.zf) goto L_102d2489;
  /* 102d2480 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2483 jne 0x102d2451 */
  if (!C.zf) goto L_102d2451;
L_102d2485:;
  /* 102d2485 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2487 jne 0x102d248c */
  if (!C.zf) goto L_102d248c;
L_102d2489:;
  /* 102d2489 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102d248a jmp 0x102d2494 */
  goto L_102d2494;
L_102d248c:;
  /* 102d248c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d248e je 0x102d2494 */
  if (C.zf) goto L_102d2494;
  /* 102d2490 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_102d2494:;
  /* 102d2494 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_102d2498:;
  /* 102d2498 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d249b je 0x102d2581 */
  if (C.zf) goto L_102d2581;
L_102d24a1:;
  /* 102d24a1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d24a3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d24a6 je 0x102d24ad */
  if (C.zf) goto L_102d24ad;
  /* 102d24a8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d24ab jne 0x102d24b0 */
  if (!C.zf) goto L_102d24b0;
L_102d24ad:;
  /* 102d24ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d24ae jmp 0x102d24a1 */
  goto L_102d24a1;
L_102d24b0:;
  /* 102d24b0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d24b3 je 0x102d2581 */
  if (C.zf) goto L_102d2581;
  /* 102d24b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d24bb je 0x102d24c5 */
  if (C.zf) goto L_102d24c5;
  /* 102d24bd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102d24bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d24c2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102d24c5:;
  /* 102d24c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102d24c8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_102d24ca:;
  /* 102d24ca mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102d24d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102d24d3:;
  /* 102d24d3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d24d6 jne 0x102d24dc */
  if (!C.zf) goto L_102d24dc;
  /* 102d24d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d24d9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102d24da jmp 0x102d24d3 */
  goto L_102d24d3;
L_102d24dc:;
  /* 102d24dc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d24df jne 0x102d250d */
  if (!C.zf) goto L_102d250d;
  /* 102d24e1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102d24e4 jne 0x102d250b */
  if (!C.zf) goto L_102d250b;
  /* 102d24e6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d24e8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d24eb je 0x102d24fa */
  if (C.zf) goto L_102d24fa;
  /* 102d24ed cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d24f1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102d24f4 jne 0x102d24fa */
  if (!C.zf) goto L_102d24fa;
  /* 102d24f6 mov eax, edx */
  EAX = (EDX);
  /* 102d24f8 jmp 0x102d24fd */
  goto L_102d24fd;
L_102d24fa:;
  /* 102d24fa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102d24fd:;
  /* 102d24fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102d2500 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102d2502 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2505 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102d2508 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102d250b:;
  /* 102d250b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102d250d:;
  /* 102d250d mov edx, ebx */
  EDX = (EBX);
  /* 102d250f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102d2510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102d2512 je 0x102d2522 */
  if (C.zf) goto L_102d2522;
  /* 102d2514 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102d2515:;
  /* 102d2515 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2517 je 0x102d251d */
  if (C.zf) goto L_102d251d;
  /* 102d2519 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102d251c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102d251d:;
  /* 102d251d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d251f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102d2520 jne 0x102d2515 */
  if (!C.zf) goto L_102d2515;
L_102d2522:;
  /* 102d2522 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d2524 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2526 je 0x102d2572 */
  if (C.zf) goto L_102d2572;
  /* 102d2528 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d252c jne 0x102d2538 */
  if (!C.zf) goto L_102d2538;
  /* 102d252e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2531 je 0x102d2572 */
  if (C.zf) goto L_102d2572;
  /* 102d2533 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2536 je 0x102d2572 */
  if (C.zf) goto L_102d2572;
L_102d2538:;
  /* 102d2538 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d253c je 0x102d256c */
  if (C.zf) goto L_102d256c;
  /* 102d253e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2540 je 0x102d255b */
  if (C.zf) goto L_102d255b;
  /* 102d2542 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102d2545 test byte ptr [ebx + 0x102d6921], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102d6921)))&(0x4u); fl_logic(_r,8); }
  /* 102d254c je 0x102d2554 */
  if (C.zf) goto L_102d2554;
  /* 102d254e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102d2550 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d2551 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2552 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102d2554:;
  /* 102d2554 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102d2556 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102d2558 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d2559 jmp 0x102d256a */
  goto L_102d256a;
L_102d255b:;
  /* 102d255b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102d255e test byte ptr [edx + 0x102d6921], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102d6921)))&(0x4u); fl_logic(_r,8); }
  /* 102d2565 je 0x102d256a */
  if (C.zf) goto L_102d256a;
  /* 102d2567 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2568 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102d256a:;
  /* 102d256a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102d256c:;
  /* 102d256c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d256d jmp 0x102d24ca */
  goto L_102d24ca;
L_102d2572:;
  /* 102d2572 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2574 je 0x102d257a */
  if (C.zf) goto L_102d257a;
  /* 102d2576 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102d2579 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102d257a:;
  /* 102d257a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102d257c jmp 0x102d2498 */
  goto L_102d2498;
L_102d2581:;
  /* 102d2581 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d2583 je 0x102d2588 */
  if (C.zf) goto L_102d2588;
  /* 102d2585 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102d2588:;
  /* 102d2588 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102d258b pop edi */
  EDI = (pop32());
  /* 102d258c pop esi */
  ESI = (pop32());
  /* 102d258d pop ebx */
  EBX = (pop32());
  /* 102d258e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 102d2590 pop ebp */
  EBP = (pop32());
  /* 102d2591 ret  */
  ESPCHK(0x102d23deu, _esp0);
  ESP += 4; return;
}

/* FUN_10002592 @ 0x102d2592 (306 bytes, 132 insns) */
void f_102d2592(void) {
  FTRACE(0x102d2592u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2592 push ecx */
  push32((uint32_t)(ECX));
  /* 102d2593 push ecx */
  push32((uint32_t)(ECX));
  /* 102d2594 mov eax, dword ptr [0x102d6748] */
  EAX = (r32((uint32_t)(0x102d6748)));
  /* 102d2599 push ebx */
  push32((uint32_t)(EBX));
  /* 102d259a push ebp */
  push32((uint32_t)(EBP));
  /* 102d259b mov ebp, dword ptr [0x102d5060] */
  EBP = (r32((uint32_t)(0x102d5060)));
  /* 102d25a1 push esi */
  push32((uint32_t)(ESI));
  /* 102d25a2 push edi */
  push32((uint32_t)(EDI));
  /* 102d25a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d25a5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102d25a7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d25a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d25ab jne 0x102d25e0 */
  if (!C.zf) goto L_102d25e0;
  /* 102d25ad call ebp */
  call_ind((uint32_t)(EBP), 0x102d25afu);
  /* 102d25af mov esi, eax */
  ESI = (EAX);
  /* 102d25b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d25b3 je 0x102d25c1 */
  if (C.zf) goto L_102d25c1;
  /* 102d25b5 mov dword ptr [0x102d6748], 1 */
  w32((uint32_t)(0x102d6748), (0x1u));
  /* 102d25bf jmp 0x102d25e9 */
  goto L_102d25e9;
L_102d25c1:;
  /* 102d25c1 call dword ptr [0x102d5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5064))), 0x102d25c7u);
  /* 102d25c7 mov edi, eax */
  EDI = (EAX);
  /* 102d25c9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d25cb je 0x102d26bb */
  if (C.zf) goto L_102d26bb;
  /* 102d25d1 mov dword ptr [0x102d6748], 2 */
  w32((uint32_t)(0x102d6748), (0x2u));
  /* 102d25db jmp 0x102d266f */
  goto L_102d266f;
L_102d25e0:;
  /* 102d25e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d25e3 jne 0x102d266a */
  if (!C.zf) goto L_102d266a;
L_102d25e9:;
  /* 102d25e9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d25eb jne 0x102d25f9 */
  if (!C.zf) goto L_102d25f9;
  /* 102d25ed call ebp */
  call_ind((uint32_t)(EBP), 0x102d25efu);
  /* 102d25ef mov esi, eax */
  ESI = (EAX);
  /* 102d25f1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d25f3 je 0x102d26bb */
  if (C.zf) goto L_102d26bb;
L_102d25f9:;
  /* 102d25f9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102d25fc mov eax, esi */
  EAX = (ESI);
  /* 102d25fe je 0x102d260e */
  if (C.zf) goto L_102d260e;
L_102d2600:;
  /* 102d2600 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2601 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2602 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102d2605 jne 0x102d2600 */
  if (!C.zf) goto L_102d2600;
  /* 102d2607 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2608 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2609 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102d260c jne 0x102d2600 */
  if (!C.zf) goto L_102d2600;
L_102d260e:;
  /* 102d260e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2610 mov edi, dword ptr [0x102d5068] */
  EDI = (r32((uint32_t)(0x102d5068)));
  /* 102d2616 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102d2618 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2619 push ebx */
  push32((uint32_t)(EBX));
  /* 102d261a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d261b push ebx */
  push32((uint32_t)(EBX));
  /* 102d261c push ebx */
  push32((uint32_t)(EBX));
  /* 102d261d push eax */
  push32((uint32_t)(EAX));
  /* 102d261e push esi */
  push32((uint32_t)(ESI));
  /* 102d261f push ebx */
  push32((uint32_t)(EBX));
  /* 102d2620 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2621 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 102d2625 call edi */
  call_ind((uint32_t)(EDI), 0x102d2627u);
  /* 102d2627 mov ebp, eax */
  EBP = (EAX);
  /* 102d2629 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d262b je 0x102d265f */
  if (C.zf) goto L_102d265f;
  /* 102d262d push ebp */
  push32((uint32_t)(EBP));
  /* 102d262e call 0x102d2ae1 */
  push32(0x102d2633u); f_102d2ae1();
  /* 102d2633 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2635 pop ecx */
  ECX = (pop32());
  /* 102d2636 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102d263a je 0x102d265f */
  if (C.zf) goto L_102d265f;
  /* 102d263c push ebx */
  push32((uint32_t)(EBX));
  /* 102d263d push ebx */
  push32((uint32_t)(EBX));
  /* 102d263e push ebp */
  push32((uint32_t)(EBP));
  /* 102d263f push eax */
  push32((uint32_t)(EAX));
  /* 102d2640 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 102d2644 push esi */
  push32((uint32_t)(ESI));
  /* 102d2645 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2646 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2647 call edi */
  call_ind((uint32_t)(EDI), 0x102d2649u);
  /* 102d2649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d264b jne 0x102d265b */
  if (!C.zf) goto L_102d265b;
  /* 102d264d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102d2651 call 0x102d2a99 */
  push32(0x102d2656u); f_102d2a99();
  /* 102d2656 pop ecx */
  ECX = (pop32());
  /* 102d2657 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_102d265b:;
  /* 102d265b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_102d265f:;
  /* 102d265f push esi */
  push32((uint32_t)(ESI));
  /* 102d2660 call dword ptr [0x102d506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d506c))), 0x102d2666u);
  /* 102d2666 mov eax, ebx */
  EAX = (EBX);
  /* 102d2668 jmp 0x102d26bd */
  goto L_102d26bd;
L_102d266a:;
  /* 102d266a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d266d jne 0x102d26bb */
  if (!C.zf) goto L_102d26bb;
L_102d266f:;
  /* 102d266f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2671 jne 0x102d267f */
  if (!C.zf) goto L_102d267f;
  /* 102d2673 call dword ptr [0x102d5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5064))), 0x102d2679u);
  /* 102d2679 mov edi, eax */
  EDI = (EAX);
  /* 102d267b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d267d je 0x102d26bb */
  if (C.zf) goto L_102d26bb;
L_102d267f:;
  /* 102d267f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2681 mov eax, edi */
  EAX = (EDI);
  /* 102d2683 je 0x102d268f */
  if (C.zf) goto L_102d268f;
L_102d2685:;
  /* 102d2685 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2686 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2688 jne 0x102d2685 */
  if (!C.zf) goto L_102d2685;
  /* 102d268a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d268b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d268d jne 0x102d2685 */
  if (!C.zf) goto L_102d2685;
L_102d268f:;
  /* 102d268f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2691 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2692 mov ebp, eax */
  EBP = (EAX);
  /* 102d2694 push ebp */
  push32((uint32_t)(EBP));
  /* 102d2695 call 0x102d2ae1 */
  push32(0x102d269au); f_102d2ae1();
  /* 102d269a mov esi, eax */
  ESI = (EAX);
  /* 102d269c pop ecx */
  ECX = (pop32());
  /* 102d269d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d269f jne 0x102d26a5 */
  if (!C.zf) goto L_102d26a5;
  /* 102d26a1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102d26a3 jmp 0x102d26b0 */
  goto L_102d26b0;
L_102d26a5:;
  /* 102d26a5 push ebp */
  push32((uint32_t)(EBP));
  /* 102d26a6 push edi */
  push32((uint32_t)(EDI));
  /* 102d26a7 push esi */
  push32((uint32_t)(ESI));
  /* 102d26a8 call 0x102d30d0 */
  push32(0x102d26adu); f_102d30d0();
  /* 102d26ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d26b0:;
  /* 102d26b0 push edi */
  push32((uint32_t)(EDI));
  /* 102d26b1 call dword ptr [0x102d5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5070))), 0x102d26b7u);
  /* 102d26b7 mov eax, esi */
  EAX = (ESI);
  /* 102d26b9 jmp 0x102d26bd */
  goto L_102d26bd;
L_102d26bb:;
  /* 102d26bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102d26bd:;
  /* 102d26bd pop edi */
  EDI = (pop32());
  /* 102d26be pop esi */
  ESI = (pop32());
  /* 102d26bf pop ebp */
  EBP = (pop32());
  /* 102d26c0 pop ebx */
  EBX = (pop32());
  /* 102d26c1 pop ecx */
  ECX = (pop32());
  /* 102d26c2 pop ecx */
  ECX = (pop32());
  /* 102d26c3 ret  */
  ESPCHK(0x102d2592u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c4 @ 0x102d26c4 (60 bytes, 20 insns) */
void f_102d26c4(void) {
  FTRACE(0x102d26c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d26c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d26c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d26c8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d26cc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102d26d1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102d26d4 push eax */
  push32((uint32_t)(EAX));
  /* 102d26d5 call dword ptr [0x102d5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5058))), 0x102d26dbu);
  /* 102d26db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d26dd mov dword ptr [0x102d6a28], eax */
  w32((uint32_t)(0x102d6a28), (EAX));
  /* 102d26e2 je 0x102d26f9 */
  if (C.zf) goto L_102d26f9;
  /* 102d26e4 call 0x102d3405 */
  push32(0x102d26e9u); f_102d3405();
  /* 102d26e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d26eb jne 0x102d26fc */
  if (!C.zf) goto L_102d26fc;
  /* 102d26ed push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d26f3 call dword ptr [0x102d505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d505c))), 0x102d26f9u);
L_102d26f9:;
  /* 102d26f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d26fb ret  */
  ESPCHK(0x102d26c4u, _esp0);
  ESP += 4; return;
L_102d26fc:;
  /* 102d26fc push 1 */
  push32((uint32_t)(0x1u));
  /* 102d26fe pop eax */
  EAX = (pop32());
  /* 102d26ff ret  */
  ESPCHK(0x102d26c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x102d2700 (117 bytes, 38 insns) */
void f_102d2700(void) {
  FTRACE(0x102d2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2700 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2701 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d2703 cmp dword ptr [0x102d6800], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102d6800))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2709 push ebp */
  push32((uint32_t)(EBP));
  /* 102d270a mov ebp, dword ptr [0x102d5050] */
  EBP = (r32((uint32_t)(0x102d5050)));
  /* 102d2710 jle 0x102d2756 */
  if ((C.zf||C.sf!=C.of)) goto L_102d2756;
  /* 102d2712 mov eax, dword ptr [0x102d6804] */
  EAX = (r32((uint32_t)(0x102d6804)));
  /* 102d2717 push esi */
  push32((uint32_t)(ESI));
  /* 102d2718 push edi */
  push32((uint32_t)(EDI));
  /* 102d2719 mov edi, dword ptr [0x102d5054] */
  EDI = (r32((uint32_t)(0x102d5054)));
  /* 102d271f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_102d2722:;
  /* 102d2722 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102d2727 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102d272c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d272e call edi */
  call_ind((uint32_t)(EDI), 0x102d2730u);
  /* 102d2730 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102d2735 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2737 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d2739 call edi */
  call_ind((uint32_t)(EDI), 0x102d273bu);
  /* 102d273b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 102d273e push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2740 push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d2746 call ebp */
  call_ind((uint32_t)(EBP), 0x102d2748u);
  /* 102d2748 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d274b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102d274c cmp ebx, dword ptr [0x102d6800] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102d6800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2752 jl 0x102d2722 */
  if ((C.sf!=C.of)) goto L_102d2722;
  /* 102d2754 pop edi */
  EDI = (pop32());
  /* 102d2755 pop esi */
  ESI = (pop32());
L_102d2756:;
  /* 102d2756 push dword ptr [0x102d6804] */
  push32((uint32_t)(r32((uint32_t)(0x102d6804))));
  /* 102d275c push 0 */
  push32((uint32_t)(0x0u));
  /* 102d275e push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d2764 call ebp */
  call_ind((uint32_t)(EBP), 0x102d2766u);
  /* 102d2766 push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d276c call dword ptr [0x102d505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d505c))), 0x102d2772u);
  /* 102d2772 pop ebp */
  EBP = (pop32());
  /* 102d2773 pop ebx */
  EBX = (pop32());
  /* 102d2774 ret  */
  ESPCHK(0x102d2700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002775 @ 0x102d2775 (57 bytes, 18 insns) */
void f_102d2775(void) {
  FTRACE(0x102d2775u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2775 mov eax, dword ptr [0x102d65f8] */
  EAX = (r32((uint32_t)(0x102d65f8)));
  /* 102d277a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d277d je 0x102d278c */
  if (C.zf) goto L_102d278c;
  /* 102d277f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2781 jne 0x102d27ad */
  if (!C.zf) goto L_102d27ad;
  /* 102d2783 cmp dword ptr [0x102d65fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102d65fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d278a jne 0x102d27ad */
  if (!C.zf) goto L_102d27ad;
L_102d278c:;
  /* 102d278c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 102d2791 call 0x102d27ae */
  push32(0x102d2796u); f_102d27ae();
  /* 102d2796 mov eax, dword ptr [0x102d674c] */
  EAX = (r32((uint32_t)(0x102d674c)));
  /* 102d279b pop ecx */
  ECX = (pop32());
  /* 102d279c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d279e je 0x102d27a2 */
  if (C.zf) goto L_102d27a2;
  /* 102d27a0 call eax */
  call_ind((uint32_t)(EAX), 0x102d27a2u);
L_102d27a2:;
  /* 102d27a2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102d27a7 call 0x102d27ae */
  push32(0x102d27acu); f_102d27ae();
  /* 102d27ac pop ecx */
  ECX = (pop32());
L_102d27ad:;
  /* 102d27ad ret  */
  ESPCHK(0x102d2775u, _esp0);
  ESP += 4; return;
}

/* FUN_100027ae @ 0x102d27ae (339 bytes, 100 insns) */
void f_102d27ae(void) {
  FTRACE(0x102d27aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d27ae push ebp */
  push32((uint32_t)(EBP));
  /* 102d27af mov ebp, esp */
  EBP = (ESP);
  /* 102d27b1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d27b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d27ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102d27bc mov eax, 0x102d61c0 */
  EAX = (0x102d61c0u);
L_102d27c1:;
  /* 102d27c1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d27c3 je 0x102d27d0 */
  if (C.zf) goto L_102d27d0;
  /* 102d27c5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d27c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d27c9 cmp eax, 0x102d6250 */
  { uint32_t _a=(EAX),_b=(0x102d6250u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d27ce jl 0x102d27c1 */
  if ((C.sf!=C.of)) goto L_102d27c1;
L_102d27d0:;
  /* 102d27d0 push esi */
  push32((uint32_t)(ESI));
  /* 102d27d1 mov esi, ecx */
  ESI = (ECX);
  /* 102d27d3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 102d27d6 cmp edx, dword ptr [esi + 0x102d61c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x102d61c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d27dc jne 0x102d28fe */
  if (!C.zf) goto L_102d28fe;
  /* 102d27e2 mov eax, dword ptr [0x102d65f8] */
  EAX = (r32((uint32_t)(0x102d65f8)));
  /* 102d27e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d27ea je 0x102d28d8 */
  if (C.zf) goto L_102d28d8;
  /* 102d27f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d27f2 jne 0x102d2801 */
  if (!C.zf) goto L_102d2801;
  /* 102d27f4 cmp dword ptr [0x102d65fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102d65fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d27fb je 0x102d28d8 */
  if (C.zf) goto L_102d28d8;
L_102d2801:;
  /* 102d2801 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2807 je 0x102d28fe */
  if (C.zf) goto L_102d28fe;
  /* 102d280d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102d2813 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102d2818 push eax */
  push32((uint32_t)(EAX));
  /* 102d2819 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d281b call dword ptr [0x102d5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5074))), 0x102d2821u);
  /* 102d2821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2823 jne 0x102d2838 */
  if (!C.zf) goto L_102d2838;
  /* 102d2825 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102d282b push 0x102d5410 */
  push32((uint32_t)(0x102d5410u));
  /* 102d2830 push eax */
  push32((uint32_t)(EAX));
  /* 102d2831 call 0x102d2b70 */
  push32(0x102d2836u); f_102d2b70();
  /* 102d2836 pop ecx */
  ECX = (pop32());
  /* 102d2837 pop ecx */
  ECX = (pop32());
L_102d2838:;
  /* 102d2838 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102d283e push edi */
  push32((uint32_t)(EDI));
  /* 102d283f push eax */
  push32((uint32_t)(EAX));
  /* 102d2840 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 102d2846 call 0x102d2c60 */
  push32(0x102d284bu); f_102d2c60();
  /* 102d284b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d284c pop ecx */
  ECX = (pop32());
  /* 102d284d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2850 jbe 0x102d287b */
  if ((C.cf||C.zf)) goto L_102d287b;
  /* 102d2852 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102d2858 push eax */
  push32((uint32_t)(EAX));
  /* 102d2859 call 0x102d2c60 */
  push32(0x102d285eu); f_102d2c60();
  /* 102d285e mov edi, eax */
  EDI = (EAX);
  /* 102d2860 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102d2866 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2869 push 3 */
  push32((uint32_t)(0x3u));
  /* 102d286b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d286d push 0x102d540c */
  push32((uint32_t)(0x102d540cu));
  /* 102d2872 push edi */
  push32((uint32_t)(EDI));
  /* 102d2873 call 0x102d3ce0 */
  push32(0x102d2878u); f_102d3ce0();
  /* 102d2878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d287b:;
  /* 102d287b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102d2881 push 0x102d53f0 */
  push32((uint32_t)(0x102d53f0u));
  /* 102d2886 push eax */
  push32((uint32_t)(EAX));
  /* 102d2887 call 0x102d2b70 */
  push32(0x102d288cu); f_102d2b70();
  /* 102d288c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102d2892 push edi */
  push32((uint32_t)(EDI));
  /* 102d2893 push eax */
  push32((uint32_t)(EAX));
  /* 102d2894 call 0x102d2b80 */
  push32(0x102d2899u); f_102d2b80();
  /* 102d2899 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102d289f push 0x102d53ec */
  push32((uint32_t)(0x102d53ecu));
  /* 102d28a4 push eax */
  push32((uint32_t)(EAX));
  /* 102d28a5 call 0x102d2b80 */
  push32(0x102d28aau); f_102d2b80();
  /* 102d28aa push dword ptr [esi + 0x102d61c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x102d61c4))));
  /* 102d28b0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102d28b6 push eax */
  push32((uint32_t)(EAX));
  /* 102d28b7 call 0x102d2b80 */
  push32(0x102d28bcu); f_102d2b80();
  /* 102d28bc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 102d28c1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102d28c7 push 0x102d53c4 */
  push32((uint32_t)(0x102d53c4u));
  /* 102d28cc push eax */
  push32((uint32_t)(EAX));
  /* 102d28cd call 0x102d3c4e */
  push32(0x102d28d2u); f_102d3c4e();
  /* 102d28d2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d28d5 pop edi */
  EDI = (pop32());
  /* 102d28d6 jmp 0x102d28fe */
  goto L_102d28fe;
L_102d28d8:;
  /* 102d28d8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102d28db lea esi, [esi + 0x102d61c4] */
  ESI = ((uint32_t)(ESI + 0x102d61c4));
  /* 102d28e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d28e3 push eax */
  push32((uint32_t)(EAX));
  /* 102d28e4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d28e6 call 0x102d2c60 */
  push32(0x102d28ebu); f_102d2c60();
  /* 102d28eb pop ecx */
  ECX = (pop32());
  /* 102d28ec push eax */
  push32((uint32_t)(EAX));
  /* 102d28ed push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d28ef push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102d28f1 call dword ptr [0x102d50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d50a4))), 0x102d28f7u);
  /* 102d28f7 push eax */
  push32((uint32_t)(EAX));
  /* 102d28f8 call dword ptr [0x102d504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d504c))), 0x102d28feu);
L_102d28fe:;
  /* 102d28fe pop esi */
  ESI = (pop32());
  /* 102d28ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d2900 ret  */
  ESPCHK(0x102d27aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002901 @ 0x102d2901 (41 bytes, 12 insns) */
void f_102d2901(void) {
  FTRACE(0x102d2901u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2901 push esi */
  push32((uint32_t)(ESI));
  /* 102d2902 mov esi, dword ptr [0x102d5048] */
  ESI = (r32((uint32_t)(0x102d5048)));
  /* 102d2908 push dword ptr [0x102d6294] */
  push32((uint32_t)(r32((uint32_t)(0x102d6294))));
  /* 102d290e call esi */
  call_ind((uint32_t)(ESI), 0x102d2910u);
  /* 102d2910 push dword ptr [0x102d6284] */
  push32((uint32_t)(r32((uint32_t)(0x102d6284))));
  /* 102d2916 call esi */
  call_ind((uint32_t)(ESI), 0x102d2918u);
  /* 102d2918 push dword ptr [0x102d6274] */
  push32((uint32_t)(r32((uint32_t)(0x102d6274))));
  /* 102d291e call esi */
  call_ind((uint32_t)(ESI), 0x102d2920u);
  /* 102d2920 push dword ptr [0x102d6254] */
  push32((uint32_t)(r32((uint32_t)(0x102d6254))));
  /* 102d2926 call esi */
  call_ind((uint32_t)(ESI), 0x102d2928u);
  /* 102d2928 pop esi */
  ESI = (pop32());
  /* 102d2929 ret  */
  ESPCHK(0x102d2901u, _esp0);
  ESP += 4; return;
}

/* FUN_1000292a @ 0x102d292a (108 bytes, 34 insns) */
void f_102d292a(void) {
  FTRACE(0x102d292au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d292a push esi */
  push32((uint32_t)(ESI));
  /* 102d292b push edi */
  push32((uint32_t)(EDI));
  /* 102d292c mov edi, dword ptr [0x102d5098] */
  EDI = (r32((uint32_t)(0x102d5098)));
  /* 102d2932 mov esi, 0x102d6250 */
  ESI = (0x102d6250u);
L_102d2937:;
  /* 102d2937 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102d2939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d293b je 0x102d2968 */
  if (C.zf) goto L_102d2968;
  /* 102d293d cmp esi, 0x102d6294 */
  { uint32_t _a=(ESI),_b=(0x102d6294u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2943 je 0x102d2968 */
  if (C.zf) goto L_102d2968;
  /* 102d2945 cmp esi, 0x102d6284 */
  { uint32_t _a=(ESI),_b=(0x102d6284u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d294b je 0x102d2968 */
  if (C.zf) goto L_102d2968;
  /* 102d294d cmp esi, 0x102d6274 */
  { uint32_t _a=(ESI),_b=(0x102d6274u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2953 je 0x102d2968 */
  if (C.zf) goto L_102d2968;
  /* 102d2955 cmp esi, 0x102d6254 */
  { uint32_t _a=(ESI),_b=(0x102d6254u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d295b je 0x102d2968 */
  if (C.zf) goto L_102d2968;
  /* 102d295d push eax */
  push32((uint32_t)(EAX));
  /* 102d295e call edi */
  call_ind((uint32_t)(EDI), 0x102d2960u);
  /* 102d2960 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d2962 call 0x102d2a99 */
  push32(0x102d2967u); f_102d2a99();
  /* 102d2967 pop ecx */
  ECX = (pop32());
L_102d2968:;
  /* 102d2968 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d296b cmp esi, 0x102d6310 */
  { uint32_t _a=(ESI),_b=(0x102d6310u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2971 jl 0x102d2937 */
  if ((C.sf!=C.of)) goto L_102d2937;
  /* 102d2973 push dword ptr [0x102d6274] */
  push32((uint32_t)(r32((uint32_t)(0x102d6274))));
  /* 102d2979 call edi */
  call_ind((uint32_t)(EDI), 0x102d297bu);
  /* 102d297b push dword ptr [0x102d6284] */
  push32((uint32_t)(r32((uint32_t)(0x102d6284))));
  /* 102d2981 call edi */
  call_ind((uint32_t)(EDI), 0x102d2983u);
  /* 102d2983 push dword ptr [0x102d6294] */
  push32((uint32_t)(r32((uint32_t)(0x102d6294))));
  /* 102d2989 call edi */
  call_ind((uint32_t)(EDI), 0x102d298bu);
  /* 102d298b push dword ptr [0x102d6254] */
  push32((uint32_t)(r32((uint32_t)(0x102d6254))));
  /* 102d2991 call edi */
  call_ind((uint32_t)(EDI), 0x102d2993u);
  /* 102d2993 pop edi */
  EDI = (pop32());
  /* 102d2994 pop esi */
  ESI = (pop32());
  /* 102d2995 ret  */
  ESPCHK(0x102d292au, _esp0);
  ESP += 4; return;
}

/* FUN_10002996 @ 0x102d2996 (97 bytes, 37 insns) */
void f_102d2996(void) {
  FTRACE(0x102d2996u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2996 push ebp */
  push32((uint32_t)(EBP));
  /* 102d2997 mov ebp, esp */
  EBP = (ESP);
  /* 102d2999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d299c push esi */
  push32((uint32_t)(ESI));
  /* 102d299d cmp dword ptr [eax*4 + 0x102d6250], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x102d6250))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d29a5 lea esi, [eax*4 + 0x102d6250] */
  ESI = ((uint32_t)(EAX*4 + 0x102d6250));
  /* 102d29ac jne 0x102d29ec */
  if (!C.zf) goto L_102d29ec;
  /* 102d29ae push edi */
  push32((uint32_t)(EDI));
  /* 102d29af push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102d29b1 call 0x102d2ae1 */
  push32(0x102d29b6u); f_102d2ae1();
  /* 102d29b6 mov edi, eax */
  EDI = (EAX);
  /* 102d29b8 pop ecx */
  ECX = (pop32());
  /* 102d29b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d29bb jne 0x102d29c5 */
  if (!C.zf) goto L_102d29c5;
  /* 102d29bd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102d29bf call 0x102d1e06 */
  push32(0x102d29c4u); f_102d1e06();
  /* 102d29c4 pop ecx */
  ECX = (pop32());
L_102d29c5:;
  /* 102d29c5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102d29c7 call 0x102d2996 */
  push32(0x102d29ccu); f_102d2996();
  /* 102d29cc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d29cf pop ecx */
  ECX = (pop32());
  /* 102d29d0 push edi */
  push32((uint32_t)(EDI));
  /* 102d29d1 jne 0x102d29dd */
  if (!C.zf) goto L_102d29dd;
  /* 102d29d3 call dword ptr [0x102d5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5048))), 0x102d29d9u);
  /* 102d29d9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102d29db jmp 0x102d29e3 */
  goto L_102d29e3;
L_102d29dd:;
  /* 102d29dd call 0x102d2a99 */
  push32(0x102d29e2u); f_102d2a99();
  /* 102d29e2 pop ecx */
  ECX = (pop32());
L_102d29e3:;
  /* 102d29e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102d29e5 call 0x102d29f7 */
  push32(0x102d29eau); f_102d29f7();
  /* 102d29ea pop ecx */
  ECX = (pop32());
  /* 102d29eb pop edi */
  EDI = (pop32());
L_102d29ec:;
  /* 102d29ec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102d29ee call dword ptr [0x102d5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5044))), 0x102d29f4u);
  /* 102d29f4 pop esi */
  ESI = (pop32());
  /* 102d29f5 pop ebp */
  EBP = (pop32());
  /* 102d29f6 ret  */
  ESPCHK(0x102d2996u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f7 @ 0x102d29f7 (21 bytes, 7 insns) */
void f_102d29f7(void) {
  FTRACE(0x102d29f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d29f7 push ebp */
  push32((uint32_t)(EBP));
  /* 102d29f8 mov ebp, esp */
  EBP = (ESP);
  /* 102d29fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d29fd push dword ptr [eax*4 + 0x102d6250] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x102d6250))));
  /* 102d2a04 call dword ptr [0x102d5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5040))), 0x102d2a0au);
  /* 102d2a0a pop ebp */
  EBP = (pop32());
  /* 102d2a0b ret  */
  ESPCHK(0x102d29f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a0c @ 0x102d2a0c (141 bytes, 56 insns) */
void f_102d2a0c(void) {
  FTRACE(0x102d2a0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2a0c push ebx */
  push32((uint32_t)(EBX));
  /* 102d2a0d push esi */
  push32((uint32_t)(ESI));
  /* 102d2a0e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102d2a12 push edi */
  push32((uint32_t)(EDI));
  /* 102d2a13 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102d2a18 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2a1b mov ebx, esi */
  EBX = (ESI);
  /* 102d2a1d ja 0x102d2a2c */
  if ((!C.cf&&!C.zf)) goto L_102d2a2c;
  /* 102d2a1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2a21 jne 0x102d2a26 */
  if (!C.zf) goto L_102d2a26;
  /* 102d2a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d2a25 pop esi */
  ESI = (pop32());
L_102d2a26:;
  /* 102d2a26 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2a29 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_102d2a2c:;
  /* 102d2a2c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d2a2e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2a31 ja 0x102d2a6d */
  if ((!C.cf&&!C.zf)) goto L_102d2a6d;
  /* 102d2a33 cmp ebx, dword ptr [0x102d64a0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102d64a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2a39 ja 0x102d2a58 */
  if ((!C.cf&&!C.zf)) goto L_102d2a58;
  /* 102d2a3b push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2a3d call 0x102d2996 */
  push32(0x102d2a42u); f_102d2996();
  /* 102d2a42 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2a43 call 0x102d3799 */
  push32(0x102d2a48u); f_102d3799();
  /* 102d2a48 push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2a4a mov edi, eax */
  EDI = (EAX);
  /* 102d2a4c call 0x102d29f7 */
  push32(0x102d2a51u); f_102d29f7();
  /* 102d2a51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2a54 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d2a56 jne 0x102d2a83 */
  if (!C.zf) goto L_102d2a83;
L_102d2a58:;
  /* 102d2a58 push esi */
  push32((uint32_t)(ESI));
  /* 102d2a59 push 8 */
  push32((uint32_t)(0x8u));
  /* 102d2a5b push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d2a61 call dword ptr [0x102d503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d503c))), 0x102d2a67u);
  /* 102d2a67 mov edi, eax */
  EDI = (EAX);
  /* 102d2a69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d2a6b jne 0x102d2a8f */
  if (!C.zf) goto L_102d2a8f;
L_102d2a6d:;
  /* 102d2a6d cmp dword ptr [0x102d67c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102d67c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2a74 je 0x102d2a8f */
  if (C.zf) goto L_102d2a8f;
  /* 102d2a76 push esi */
  push32((uint32_t)(ESI));
  /* 102d2a77 call 0x102d3e38 */
  push32(0x102d2a7cu); f_102d3e38();
  /* 102d2a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2a7e pop ecx */
  ECX = (pop32());
  /* 102d2a7f je 0x102d2a95 */
  if (C.zf) goto L_102d2a95;
  /* 102d2a81 jmp 0x102d2a2c */
  goto L_102d2a2c;
L_102d2a83:;
  /* 102d2a83 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2a86 push edi */
  push32((uint32_t)(EDI));
  /* 102d2a87 call 0x102d3de0 */
  push32(0x102d2a8cu); f_102d3de0();
  /* 102d2a8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102d2a8f:;
  /* 102d2a8f mov eax, edi */
  EAX = (EDI);
L_102d2a91:;
  /* 102d2a91 pop edi */
  EDI = (pop32());
  /* 102d2a92 pop esi */
  ESI = (pop32());
  /* 102d2a93 pop ebx */
  EBX = (pop32());
  /* 102d2a94 ret  */
  ESPCHK(0x102d2a0cu, _esp0);
  ESP += 4; return;
L_102d2a95:;
  /* 102d2a95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2a97 jmp 0x102d2a91 */
  goto L_102d2a91;
}

/* FUN_10002a99 @ 0x102d2a99 (72 bytes, 29 insns) */
void f_102d2a99(void) {
  FTRACE(0x102d2a99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2a99 push esi */
  push32((uint32_t)(ESI));
  /* 102d2a9a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2a9e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2aa0 je 0x102d2adf */
  if (C.zf) goto L_102d2adf;
  /* 102d2aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2aa4 call 0x102d2996 */
  push32(0x102d2aa9u); f_102d2996();
  /* 102d2aa9 push esi */
  push32((uint32_t)(ESI));
  /* 102d2aaa call 0x102d3443 */
  push32(0x102d2aafu); f_102d3443();
  /* 102d2aaf pop ecx */
  ECX = (pop32());
  /* 102d2ab0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2ab2 pop ecx */
  ECX = (pop32());
  /* 102d2ab3 je 0x102d2ac8 */
  if (C.zf) goto L_102d2ac8;
  /* 102d2ab5 push esi */
  push32((uint32_t)(ESI));
  /* 102d2ab6 push eax */
  push32((uint32_t)(EAX));
  /* 102d2ab7 call 0x102d346e */
  push32(0x102d2abcu); f_102d346e();
  /* 102d2abc push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2abe call 0x102d29f7 */
  push32(0x102d2ac3u); f_102d29f7();
  /* 102d2ac3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2ac6 pop esi */
  ESI = (pop32());
  /* 102d2ac7 ret  */
  ESPCHK(0x102d2a99u, _esp0);
  ESP += 4; return;
L_102d2ac8:;
  /* 102d2ac8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2aca call 0x102d29f7 */
  push32(0x102d2acfu); f_102d29f7();
  /* 102d2acf pop ecx */
  ECX = (pop32());
  /* 102d2ad0 push esi */
  push32((uint32_t)(ESI));
  /* 102d2ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2ad3 push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d2ad9 call dword ptr [0x102d5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5050))), 0x102d2adfu);
L_102d2adf:;
  /* 102d2adf pop esi */
  ESI = (pop32());
  /* 102d2ae0 ret  */
  ESPCHK(0x102d2a99u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x102d2ae1 (18 bytes, 6 insns) */
void f_102d2ae1(void) {
  FTRACE(0x102d2ae1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2ae1 push dword ptr [0x102d67c4] */
  push32((uint32_t)(r32((uint32_t)(0x102d67c4))));
  /* 102d2ae7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102d2aeb call 0x102d2af3 */
  push32(0x102d2af0u); f_102d2af3();
  /* 102d2af0 pop ecx */
  ECX = (pop32());
  /* 102d2af1 pop ecx */
  ECX = (pop32());
  /* 102d2af2 ret  */
  ESPCHK(0x102d2ae1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x102d2af3 (44 bytes, 16 insns) */
void f_102d2af3(void) {
  FTRACE(0x102d2af3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2af3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2af8 ja 0x102d2b1c */
  if ((!C.cf&&!C.zf)) goto L_102d2b1c;
L_102d2afa:;
  /* 102d2afa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102d2afe call 0x102d2b1f */
  push32(0x102d2b03u); f_102d2b1f();
  /* 102d2b03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2b05 pop ecx */
  ECX = (pop32());
  /* 102d2b06 jne 0x102d2b1e */
  if (!C.zf) goto L_102d2b1e;
  /* 102d2b08 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2b0c je 0x102d2b1e */
  if (C.zf) goto L_102d2b1e;
  /* 102d2b0e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102d2b12 call 0x102d3e38 */
  push32(0x102d2b17u); f_102d3e38();
  /* 102d2b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d2b19 pop ecx */
  ECX = (pop32());
  /* 102d2b1a jne 0x102d2afa */
  if (!C.zf) goto L_102d2afa;
L_102d2b1c:;
  /* 102d2b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102d2b1e:;
  /* 102d2b1e ret  */
  ESPCHK(0x102d2af3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b1f @ 0x102d2b1f (78 bytes, 30 insns) */
void f_102d2b1f(void) {
  FTRACE(0x102d2b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2b1f push esi */
  push32((uint32_t)(ESI));
  /* 102d2b20 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2b24 cmp esi, dword ptr [0x102d64a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102d64a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2b2a push edi */
  push32((uint32_t)(EDI));
  /* 102d2b2b ja 0x102d2b4e */
  if ((!C.cf&&!C.zf)) goto L_102d2b4e;
  /* 102d2b2d push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2b2f call 0x102d2996 */
  push32(0x102d2b34u); f_102d2996();
  /* 102d2b34 push esi */
  push32((uint32_t)(ESI));
  /* 102d2b35 call 0x102d3799 */
  push32(0x102d2b3au); f_102d3799();
  /* 102d2b3a push 9 */
  push32((uint32_t)(0x9u));
  /* 102d2b3c mov edi, eax */
  EDI = (EAX);
  /* 102d2b3e call 0x102d29f7 */
  push32(0x102d2b43u); f_102d29f7();
  /* 102d2b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2b46 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102d2b48 je 0x102d2b4e */
  if (C.zf) goto L_102d2b4e;
  /* 102d2b4a mov eax, edi */
  EAX = (EDI);
  /* 102d2b4c jmp 0x102d2b6a */
  goto L_102d2b6a;
L_102d2b4e:;
  /* 102d2b4e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d2b50 jne 0x102d2b55 */
  if (!C.zf) goto L_102d2b55;
  /* 102d2b52 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d2b54 pop esi */
  ESI = (pop32());
L_102d2b55:;
  /* 102d2b55 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2b58 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 102d2b5b push esi */
  push32((uint32_t)(ESI));
  /* 102d2b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2b5e push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d2b64 call dword ptr [0x102d503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d503c))), 0x102d2b6au);
L_102d2b6a:;
  /* 102d2b6a pop edi */
  EDI = (pop32());
  /* 102d2b6b pop esi */
  ESI = (pop32());
  /* 102d2b6c ret  */
  ESPCHK(0x102d2b1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b70 @ 0x102d2b70 (7 bytes, 3 insns) */
void f_102d2b70(void) {
  FTRACE(0x102d2b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2b70 push edi */
  push32((uint32_t)(EDI));
  /* 102d2b71 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2b75 jmp 0x102d2be1 */
  jmp_ind(0x102d2be1u); return;
}

/* FUN_10002b80 @ 0x102d2b80 (224 bytes, 84 insns) */
void f_102d2b80(void) {
  FTRACE(0x102d2b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2b80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2b84 push edi */
  push32((uint32_t)(EDI));
  /* 102d2b85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102d2b8b je 0x102d2b9c */
  if (C.zf) goto L_102d2b9c;
L_102d2b8d:;
  /* 102d2b8d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102d2b8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2b90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d2b92 je 0x102d2bcf */
  if (C.zf) goto L_102d2bcf;
  /* 102d2b94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102d2b9a jne 0x102d2b8d */
  if (!C.zf) goto L_102d2b8d;
L_102d2b9c:;
  /* 102d2b9c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102d2b9e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102d2ba3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2ba5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d2ba8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2baa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2bad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102d2bb2 je 0x102d2b9c */
  if (C.zf) goto L_102d2b9c;
  /* 102d2bb4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102d2bb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d2bb9 je 0x102d2bde */
  if (C.zf) goto L_102d2bde;
  /* 102d2bbb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102d2bbd je 0x102d2bd9 */
  if (C.zf) goto L_102d2bd9;
  /* 102d2bbf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102d2bc4 je 0x102d2bd4 */
  if (C.zf) goto L_102d2bd4;
  /* 102d2bc6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102d2bcb je 0x102d2bcf */
  if (C.zf) goto L_102d2bcf;
  /* 102d2bcd jmp 0x102d2b9c */
  goto L_102d2b9c;
L_102d2bcf:;
  /* 102d2bcf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 102d2bd2 jmp 0x102d2be1 */
  goto L_102d2be1;
L_102d2bd4:;
  /* 102d2bd4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 102d2bd7 jmp 0x102d2be1 */
  goto L_102d2be1;
L_102d2bd9:;
  /* 102d2bd9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 102d2bdc jmp 0x102d2be1 */
  goto L_102d2be1;
L_102d2bde:;
  /* 102d2bde lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_102d2be1:;
  /* 102d2be1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102d2be5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102d2beb je 0x102d2c06 */
  if (C.zf) goto L_102d2c06;
L_102d2bed:;
  /* 102d2bed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102d2bef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2bf0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2bf2 je 0x102d2c58 */
  if (C.zf) goto L_102d2c58;
  /* 102d2bf4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102d2bf6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d2bf7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102d2bfd jne 0x102d2bed */
  if (!C.zf) goto L_102d2bed;
  /* 102d2bff jmp 0x102d2c06 */
  goto L_102d2c06;
L_102d2c01:;
  /* 102d2c01 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102d2c03 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102d2c06:;
  /* 102d2c06 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102d2c0b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102d2c0d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2c0f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d2c12 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2c14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102d2c16 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2c19 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102d2c1e je 0x102d2c01 */
  if (C.zf) goto L_102d2c01;
  /* 102d2c20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2c22 je 0x102d2c58 */
  if (C.zf) goto L_102d2c58;
  /* 102d2c24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102d2c26 je 0x102d2c4f */
  if (C.zf) goto L_102d2c4f;
  /* 102d2c28 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102d2c2e je 0x102d2c42 */
  if (C.zf) goto L_102d2c42;
  /* 102d2c30 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102d2c36 je 0x102d2c3a */
  if (C.zf) goto L_102d2c3a;
  /* 102d2c38 jmp 0x102d2c01 */
  goto L_102d2c01;
L_102d2c3a:;
  /* 102d2c3a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102d2c3c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2c40 pop edi */
  EDI = (pop32());
  /* 102d2c41 ret  */
  ESPCHK(0x102d2b80u, _esp0);
  ESP += 4; return;
L_102d2c42:;
  /* 102d2c42 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102d2c45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2c49 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 102d2c4d pop edi */
  EDI = (pop32());
  /* 102d2c4e ret  */
  ESPCHK(0x102d2b80u, _esp0);
  ESP += 4; return;
L_102d2c4f:;
  /* 102d2c4f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102d2c52 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2c56 pop edi */
  EDI = (pop32());
  /* 102d2c57 ret  */
  ESPCHK(0x102d2b80u, _esp0);
  ESP += 4; return;
L_102d2c58:;
  /* 102d2c58 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102d2c5a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d2c5e pop edi */
  EDI = (pop32());
  /* 102d2c5f ret  */
  ESPCHK(0x102d2b80u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102d2c60 (123 bytes, 44 insns) */
void f_102d2c60(void) {
  FTRACE(0x102d2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2c60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2c64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102d2c6a je 0x102d2c80 */
  if (C.zf) goto L_102d2c80;
L_102d2c6c:;
  /* 102d2c6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102d2c6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2c6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d2c71 je 0x102d2cb3 */
  if (C.zf) goto L_102d2cb3;
  /* 102d2c73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102d2c79 jne 0x102d2c6c */
  if (!C.zf) goto L_102d2c6c;
  /* 102d2c7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102d2c80:;
  /* 102d2c80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102d2c82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102d2c87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2c89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d2c8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2c8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2c91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102d2c96 je 0x102d2c80 */
  if (C.zf) goto L_102d2c80;
  /* 102d2c98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102d2c9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d2c9d je 0x102d2cd1 */
  if (C.zf) goto L_102d2cd1;
  /* 102d2c9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102d2ca1 je 0x102d2cc7 */
  if (C.zf) goto L_102d2cc7;
  /* 102d2ca3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102d2ca8 je 0x102d2cbd */
  if (C.zf) goto L_102d2cbd;
  /* 102d2caa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102d2caf je 0x102d2cb3 */
  if (C.zf) goto L_102d2cb3;
  /* 102d2cb1 jmp 0x102d2c80 */
  goto L_102d2c80;
L_102d2cb3:;
  /* 102d2cb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102d2cb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2cba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2cbc ret  */
  ESPCHK(0x102d2c60u, _esp0);
  ESP += 4; return;
L_102d2cbd:;
  /* 102d2cbd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102d2cc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2cc4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2cc6 ret  */
  ESPCHK(0x102d2c60u, _esp0);
  ESP += 4; return;
L_102d2cc7:;
  /* 102d2cc7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102d2cca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2cce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2cd0 ret  */
  ESPCHK(0x102d2c60u, _esp0);
  ESP += 4; return;
L_102d2cd1:;
  /* 102d2cd1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102d2cd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2cd8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2cda ret  */
  ESPCHK(0x102d2c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cdb @ 0x102d2cdb (429 bytes, 143 insns) */
void f_102d2cdb(void) {
  FTRACE(0x102d2cdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2cdb push ebp */
  push32((uint32_t)(EBP));
  /* 102d2cdc mov ebp, esp */
  EBP = (ESP);
  /* 102d2cde sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2ce1 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2ce2 push esi */
  push32((uint32_t)(ESI));
  /* 102d2ce3 push edi */
  push32((uint32_t)(EDI));
  /* 102d2ce4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102d2ce6 call 0x102d2996 */
  push32(0x102d2cebu); f_102d2996();
  /* 102d2ceb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d2cee call 0x102d2e88 */
  push32(0x102d2cf3u); f_102d2e88();
  /* 102d2cf3 mov ebx, eax */
  EBX = (EAX);
  /* 102d2cf5 pop ecx */
  ECX = (pop32());
  /* 102d2cf6 cmp ebx, dword ptr [0x102d6808] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102d6808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2cfc pop ecx */
  ECX = (pop32());
  /* 102d2cfd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d2d00 jne 0x102d2d09 */
  if (!C.zf) goto L_102d2d09;
L_102d2d02:;
  /* 102d2d02 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102d2d04 jmp 0x102d2e79 */
  goto L_102d2e79;
L_102d2d09:;
  /* 102d2d09 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102d2d0b je 0x102d2e67 */
  if (C.zf) goto L_102d2e67;
  /* 102d2d11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102d2d13 mov eax, 0x102d63a8 */
  EAX = (0x102d63a8u);
L_102d2d18:;
  /* 102d2d18 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2d1a je 0x102d2d90 */
  if (C.zf) goto L_102d2d90;
  /* 102d2d1c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2d1f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102d2d20 cmp eax, 0x102d6498 */
  { uint32_t _a=(EAX),_b=(0x102d6498u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2d25 jl 0x102d2d18 */
  if ((C.sf!=C.of)) goto L_102d2d18;
  /* 102d2d27 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102d2d2a push eax */
  push32((uint32_t)(EAX));
  /* 102d2d2b push ebx */
  push32((uint32_t)(EBX));
  /* 102d2d2c call dword ptr [0x102d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5038))), 0x102d2d32u);
  /* 102d2d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d2d34 pop esi */
  ESI = (pop32());
  /* 102d2d35 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2d37 jne 0x102d2e5e */
  if (!C.zf) goto L_102d2e5e;
  /* 102d2d3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102d2d3f and dword ptr [0x102d6a24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102d6a24)))&(0x0u); w32((uint32_t)(0x102d6a24), (_r)); fl_logic(_r,32); }
  /* 102d2d46 pop ecx */
  ECX = (pop32());
  /* 102d2d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2d49 mov edi, 0x102d6920 */
  EDI = (0x102d6920u);
  /* 102d2d4e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2d51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102d2d53 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102d2d54 mov dword ptr [0x102d6808], ebx */
  w32((uint32_t)(0x102d6808), (EBX));
  /* 102d2d5a jbe 0x102d2e4b */
  if ((C.cf||C.zf)) goto L_102d2e4b;
  /* 102d2d60 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2d64 je 0x102d2e26 */
  if (C.zf) goto L_102d2e26;
  /* 102d2d6a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102d2d6d:;
  /* 102d2d6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102d2d6f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2d71 je 0x102d2e26 */
  if (C.zf) goto L_102d2e26;
  /* 102d2d77 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102d2d7b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102d2d7e:;
  /* 102d2d7e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2d80 ja 0x102d2e1a */
  if ((!C.cf&&!C.zf)) goto L_102d2e1a;
  /* 102d2d86 or byte ptr [eax + 0x102d6921], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(0x4u); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d2d8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2d8e jmp 0x102d2d7e */
  goto L_102d2d7e;
L_102d2d90:;
  /* 102d2d90 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d2d94 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102d2d96 pop ecx */
  ECX = (pop32());
  /* 102d2d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2d99 mov edi, 0x102d6920 */
  EDI = (0x102d6920u);
  /* 102d2d9e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102d2da1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102d2da3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102d2da6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102d2da7 lea ebx, [esi + 0x102d63b8] */
  EBX = ((uint32_t)(ESI + 0x102d63b8));
L_102d2dad:;
  /* 102d2dad cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2db0 mov ecx, ebx */
  ECX = (EBX);
  /* 102d2db2 je 0x102d2de0 */
  if (C.zf) goto L_102d2de0;
L_102d2db4:;
  /* 102d2db4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102d2db7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d2db9 je 0x102d2de0 */
  if (C.zf) goto L_102d2de0;
  /* 102d2dbb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102d2dbe movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102d2dc1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2dc3 ja 0x102d2dd9 */
  if ((!C.cf&&!C.zf)) goto L_102d2dd9;
  /* 102d2dc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d2dc8 mov dl, byte ptr [edx + 0x102d63a0] */
  DL = (r8((uint32_t)(EDX + 0x102d63a0)));
L_102d2dce:;
  /* 102d2dce or byte ptr [eax + 0x102d6921], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(DL); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d2dd4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2dd5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2dd7 jbe 0x102d2dce */
  if ((C.cf||C.zf)) goto L_102d2dce;
L_102d2dd9:;
  /* 102d2dd9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2dda inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2ddb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2dde jne 0x102d2db4 */
  if (!C.zf) goto L_102d2db4;
L_102d2de0:;
  /* 102d2de0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102d2de3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d2de6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2dea jb 0x102d2dad */
  if (C.cf) goto L_102d2dad;
  /* 102d2dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d2def mov dword ptr [0x102d681c], 1 */
  w32((uint32_t)(0x102d681c), (0x1u));
  /* 102d2df9 push eax */
  push32((uint32_t)(EAX));
  /* 102d2dfa mov dword ptr [0x102d6808], eax */
  w32((uint32_t)(0x102d6808), (EAX));
  /* 102d2dff call 0x102d2ed2 */
  push32(0x102d2e04u); f_102d2ed2();
  /* 102d2e04 lea esi, [esi + 0x102d63ac] */
  ESI = ((uint32_t)(ESI + 0x102d63ac));
  /* 102d2e0a mov edi, 0x102d6810 */
  EDI = (0x102d6810u);
  /* 102d2e0f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102d2e10 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102d2e11 pop ecx */
  ECX = (pop32());
  /* 102d2e12 mov dword ptr [0x102d6a24], eax */
  w32((uint32_t)(0x102d6a24), (EAX));
  /* 102d2e17 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102d2e18 jmp 0x102d2e6c */
  goto L_102d2e6c;
L_102d2e1a:;
  /* 102d2e1a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2e1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2e1c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d2e20 jne 0x102d2d6d */
  if (!C.zf) goto L_102d2d6d;
L_102d2e26:;
  /* 102d2e26 mov eax, esi */
  EAX = (ESI);
L_102d2e28:;
  /* 102d2e28 or byte ptr [eax + 0x102d6921], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(0x8u); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d2e2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2e30 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2e35 jb 0x102d2e28 */
  if (C.cf) goto L_102d2e28;
  /* 102d2e37 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2e38 call 0x102d2ed2 */
  push32(0x102d2e3du); f_102d2ed2();
  /* 102d2e3d pop ecx */
  ECX = (pop32());
  /* 102d2e3e mov dword ptr [0x102d6a24], eax */
  w32((uint32_t)(0x102d6a24), (EAX));
  /* 102d2e43 mov dword ptr [0x102d681c], esi */
  w32((uint32_t)(0x102d681c), (ESI));
  /* 102d2e49 jmp 0x102d2e52 */
  goto L_102d2e52;
L_102d2e4b:;
  /* 102d2e4b and dword ptr [0x102d681c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102d681c)))&(0x0u); w32((uint32_t)(0x102d681c), (_r)); fl_logic(_r,32); }
L_102d2e52:;
  /* 102d2e52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2e54 mov edi, 0x102d6810 */
  EDI = (0x102d6810u);
  /* 102d2e59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102d2e5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102d2e5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102d2e5c jmp 0x102d2e6c */
  goto L_102d2e6c;
L_102d2e5e:;
  /* 102d2e5e cmp dword ptr [0x102d67b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102d67b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2e65 je 0x102d2e76 */
  if (C.zf) goto L_102d2e76;
L_102d2e67:;
  /* 102d2e67 call 0x102d2f05 */
  push32(0x102d2e6cu); f_102d2f05();
L_102d2e6c:;
  /* 102d2e6c call 0x102d2f2e */
  push32(0x102d2e71u); f_102d2f2e();
  /* 102d2e71 jmp 0x102d2d02 */
  goto L_102d2d02;
L_102d2e76:;
  /* 102d2e76 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102d2e79:;
  /* 102d2e79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102d2e7b call 0x102d29f7 */
  push32(0x102d2e80u); f_102d29f7();
  /* 102d2e80 pop ecx */
  ECX = (pop32());
  /* 102d2e81 mov eax, esi */
  EAX = (ESI);
  /* 102d2e83 pop edi */
  EDI = (pop32());
  /* 102d2e84 pop esi */
  ESI = (pop32());
  /* 102d2e85 pop ebx */
  EBX = (pop32());
  /* 102d2e86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d2e87 ret  */
  ESPCHK(0x102d2cdbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e88 @ 0x102d2e88 (74 bytes, 15 insns) */
void f_102d2e88(void) {
  FTRACE(0x102d2e88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2e88 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2e8c and dword ptr [0x102d67b0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102d67b0)))&(0x0u); w32((uint32_t)(0x102d67b0), (_r)); fl_logic(_r,32); }
  /* 102d2e93 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2e96 jne 0x102d2ea8 */
  if (!C.zf) goto L_102d2ea8;
  /* 102d2e98 mov dword ptr [0x102d67b0], 1 */
  w32((uint32_t)(0x102d67b0), (0x1u));
  /* 102d2ea2 jmp dword ptr [0x102d5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102d5030)))); return;
L_102d2ea8:;
  /* 102d2ea8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2eab jne 0x102d2ebd */
  if (!C.zf) goto L_102d2ebd;
  /* 102d2ead mov dword ptr [0x102d67b0], 1 */
  w32((uint32_t)(0x102d67b0), (0x1u));
  /* 102d2eb7 jmp dword ptr [0x102d5034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102d5034)))); return;
L_102d2ebd:;
  /* 102d2ebd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2ec0 jne 0x102d2ed1 */
  if (!C.zf) goto L_102d2ed1;
  /* 102d2ec2 mov eax, dword ptr [0x102d67e0] */
  EAX = (r32((uint32_t)(0x102d67e0)));
  /* 102d2ec7 mov dword ptr [0x102d67b0], 1 */
  w32((uint32_t)(0x102d67b0), (0x1u));
L_102d2ed1:;
  /* 102d2ed1 ret  */
  ESPCHK(0x102d2e88u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed2 @ 0x102d2ed2 (51 bytes, 19 insns) */
void f_102d2ed2(void) {
  FTRACE(0x102d2ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2ed2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d2ed6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2edb je 0x102d2eff */
  if (C.zf) goto L_102d2eff;
  /* 102d2edd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2ee0 je 0x102d2ef9 */
  if (C.zf) goto L_102d2ef9;
  /* 102d2ee2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2ee5 je 0x102d2ef3 */
  if (C.zf) goto L_102d2ef3;
  /* 102d2ee7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102d2ee8 je 0x102d2eed */
  if (C.zf) goto L_102d2eed;
  /* 102d2eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2eec ret  */
  ESPCHK(0x102d2ed2u, _esp0);
  ESP += 4; return;
L_102d2eed:;
  /* 102d2eed mov eax, 0x404 */
  EAX = (0x404u);
  /* 102d2ef2 ret  */
  ESPCHK(0x102d2ed2u, _esp0);
  ESP += 4; return;
L_102d2ef3:;
  /* 102d2ef3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 102d2ef8 ret  */
  ESPCHK(0x102d2ed2u, _esp0);
  ESP += 4; return;
L_102d2ef9:;
  /* 102d2ef9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 102d2efe ret  */
  ESPCHK(0x102d2ed2u, _esp0);
  ESP += 4; return;
L_102d2eff:;
  /* 102d2eff mov eax, 0x411 */
  EAX = (0x411u);
  /* 102d2f04 ret  */
  ESPCHK(0x102d2ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f05 @ 0x102d2f05 (41 bytes, 17 insns) */
void f_102d2f05(void) {
  FTRACE(0x102d2f05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2f05 push edi */
  push32((uint32_t)(EDI));
  /* 102d2f06 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102d2f08 pop ecx */
  ECX = (pop32());
  /* 102d2f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2f0b mov edi, 0x102d6920 */
  EDI = (0x102d6920u);
  /* 102d2f10 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102d2f12 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102d2f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2f15 mov edi, 0x102d6810 */
  EDI = (0x102d6810u);
  /* 102d2f1a mov dword ptr [0x102d6808], eax */
  w32((uint32_t)(0x102d6808), (EAX));
  /* 102d2f1f mov dword ptr [0x102d681c], eax */
  w32((uint32_t)(0x102d681c), (EAX));
  /* 102d2f24 mov dword ptr [0x102d6a24], eax */
  w32((uint32_t)(0x102d6a24), (EAX));
  /* 102d2f29 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102d2f2a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102d2f2b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102d2f2c pop edi */
  EDI = (pop32());
  /* 102d2f2d ret  */
  ESPCHK(0x102d2f05u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f2e @ 0x102d2f2e (389 bytes, 124 insns) */
void f_102d2f2e(void) {
  FTRACE(0x102d2f2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d2f2e push ebp */
  push32((uint32_t)(EBP));
  /* 102d2f2f mov ebp, esp */
  EBP = (ESP);
  /* 102d2f31 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2f37 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102d2f3a push esi */
  push32((uint32_t)(ESI));
  /* 102d2f3b push eax */
  push32((uint32_t)(EAX));
  /* 102d2f3c push dword ptr [0x102d6808] */
  push32((uint32_t)(r32((uint32_t)(0x102d6808))));
  /* 102d2f42 call dword ptr [0x102d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5038))), 0x102d2f48u);
  /* 102d2f48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2f4b jne 0x102d3067 */
  if (!C.zf) goto L_102d3067;
  /* 102d2f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d2f53 mov esi, 0x100 */
  ESI = (0x100u);
L_102d2f58:;
  /* 102d2f58 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 102d2f5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d2f60 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2f62 jb 0x102d2f58 */
  if (C.cf) goto L_102d2f58;
  /* 102d2f64 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 102d2f67 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102d2f6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d2f70 je 0x102d2fa9 */
  if (C.zf) goto L_102d2fa9;
  /* 102d2f72 push ebx */
  push32((uint32_t)(EBX));
  /* 102d2f73 push edi */
  push32((uint32_t)(EDI));
  /* 102d2f74 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102d2f77:;
  /* 102d2f77 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102d2f7a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102d2f7d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d2f7f ja 0x102d2f9e */
  if ((!C.cf&&!C.zf)) goto L_102d2f9e;
  /* 102d2f81 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d2f83 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102d2f8a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d2f8b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102d2f90 mov ebx, ecx */
  EBX = (ECX);
  /* 102d2f92 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d2f95 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102d2f97 mov ecx, ebx */
  ECX = (EBX);
  /* 102d2f99 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102d2f9c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102d2f9e:;
  /* 102d2f9e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102d2f9f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102d2fa0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102d2fa3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d2fa5 jne 0x102d2f77 */
  if (!C.zf) goto L_102d2f77;
  /* 102d2fa7 pop edi */
  EDI = (pop32());
  /* 102d2fa8 pop ebx */
  EBX = (pop32());
L_102d2fa9:;
  /* 102d2fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2fab lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102d2fb1 push dword ptr [0x102d6a24] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a24))));
  /* 102d2fb7 push dword ptr [0x102d6808] */
  push32((uint32_t)(r32((uint32_t)(0x102d6808))));
  /* 102d2fbd push eax */
  push32((uint32_t)(EAX));
  /* 102d2fbe lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102d2fc4 push esi */
  push32((uint32_t)(ESI));
  /* 102d2fc5 push eax */
  push32((uint32_t)(EAX));
  /* 102d2fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d2fc8 call 0x102d40a2 */
  push32(0x102d2fcdu); f_102d40a2();
  /* 102d2fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2fcf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 102d2fd5 push dword ptr [0x102d6808] */
  push32((uint32_t)(r32((uint32_t)(0x102d6808))));
  /* 102d2fdb push esi */
  push32((uint32_t)(ESI));
  /* 102d2fdc push eax */
  push32((uint32_t)(EAX));
  /* 102d2fdd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102d2fe3 push esi */
  push32((uint32_t)(ESI));
  /* 102d2fe4 push eax */
  push32((uint32_t)(EAX));
  /* 102d2fe5 push esi */
  push32((uint32_t)(ESI));
  /* 102d2fe6 push dword ptr [0x102d6a24] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a24))));
  /* 102d2fec call 0x102d3e53 */
  push32(0x102d2ff1u); f_102d3e53();
  /* 102d2ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d2ff3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 102d2ff9 push dword ptr [0x102d6808] */
  push32((uint32_t)(r32((uint32_t)(0x102d6808))));
  /* 102d2fff push esi */
  push32((uint32_t)(ESI));
  /* 102d3000 push eax */
  push32((uint32_t)(EAX));
  /* 102d3001 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102d3007 push esi */
  push32((uint32_t)(ESI));
  /* 102d3008 push eax */
  push32((uint32_t)(EAX));
  /* 102d3009 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 102d300e push dword ptr [0x102d6a24] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a24))));
  /* 102d3014 call 0x102d3e53 */
  push32(0x102d3019u); f_102d3e53();
  /* 102d3019 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d301c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d301e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_102d3024:;
  /* 102d3024 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102d3027 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 102d302a je 0x102d3042 */
  if (C.zf) goto L_102d3042;
  /* 102d302c or byte ptr [eax + 0x102d6921], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(0x10u); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d3033 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_102d303a:;
  /* 102d303a mov byte ptr [eax + 0x102d6820], dl */
  w8((uint32_t)(EAX + 0x102d6820), (DL));
  /* 102d3040 jmp 0x102d305e */
  goto L_102d305e;
L_102d3042:;
  /* 102d3042 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 102d3045 je 0x102d3057 */
  if (C.zf) goto L_102d3057;
  /* 102d3047 or byte ptr [eax + 0x102d6921], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(0x20u); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d304e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 102d3055 jmp 0x102d303a */
  goto L_102d303a;
L_102d3057:;
  /* 102d3057 and byte ptr [eax + 0x102d6820], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6820)))&(0x0u); w8((uint32_t)(EAX + 0x102d6820), (_r)); fl_logic(_r,8); }
L_102d305e:;
  /* 102d305e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d305f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d3060 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102d3061 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3063 jb 0x102d3024 */
  if (C.cf) goto L_102d3024;
  /* 102d3065 jmp 0x102d30b0 */
  goto L_102d30b0;
L_102d3067:;
  /* 102d3067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3069 mov esi, 0x100 */
  ESI = (0x100u);
L_102d306e:;
  /* 102d306e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3071 jb 0x102d308c */
  if (C.cf) goto L_102d308c;
  /* 102d3073 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3076 ja 0x102d308c */
  if ((!C.cf&&!C.zf)) goto L_102d308c;
  /* 102d3078 or byte ptr [eax + 0x102d6921], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(0x10u); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d307f mov cl, al */
  CL = (AL);
  /* 102d3081 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102d3084:;
  /* 102d3084 mov byte ptr [eax + 0x102d6820], cl */
  w8((uint32_t)(EAX + 0x102d6820), (CL));
  /* 102d308a jmp 0x102d30ab */
  goto L_102d30ab;
L_102d308c:;
  /* 102d308c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d308f jb 0x102d30a4 */
  if (C.cf) goto L_102d30a4;
  /* 102d3091 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3094 ja 0x102d30a4 */
  if ((!C.cf&&!C.zf)) goto L_102d30a4;
  /* 102d3096 or byte ptr [eax + 0x102d6921], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6921)))|(0x20u); w8((uint32_t)(EAX + 0x102d6921), (_r)); fl_logic(_r,8); }
  /* 102d309d mov cl, al */
  CL = (AL);
  /* 102d309f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102d30a2 jmp 0x102d3084 */
  goto L_102d3084;
L_102d30a4:;
  /* 102d30a4 and byte ptr [eax + 0x102d6820], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102d6820)))&(0x0u); w8((uint32_t)(EAX + 0x102d6820), (_r)); fl_logic(_r,8); }
L_102d30ab:;
  /* 102d30ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d30ac cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d30ae jb 0x102d306e */
  if (C.cf) goto L_102d306e;
L_102d30b0:;
  /* 102d30b0 pop esi */
  ESI = (pop32());
  /* 102d30b1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d30b2 ret  */
  ESPCHK(0x102d2f2eu, _esp0);
  ESP += 4; return;
}

/* FUN_100030b3 @ 0x102d30b3 (28 bytes, 7 insns) */
void f_102d30b3(void) {
  FTRACE(0x102d30b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d30b3 cmp dword ptr [0x102d6b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102d6b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d30ba jne 0x102d30ce */
  if (!C.zf) goto L_102d30ce;
  /* 102d30bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102d30be call 0x102d2cdb */
  push32(0x102d30c3u); f_102d2cdb();
  /* 102d30c3 pop ecx */
  ECX = (pop32());
  /* 102d30c4 mov dword ptr [0x102d6b48], 1 */
  w32((uint32_t)(0x102d6b48), (0x1u));
L_102d30ce:;
  /* 102d30ce ret  */
  ESPCHK(0x102d30b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x102d30d0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_102d30d0(void) {
  FTRACE(0x102d30d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d30d0 push ebp */
  push32((uint32_t)(EBP));
  /* 102d30d1 mov ebp, esp */
  EBP = (ESP);
  /* 102d30d3 push edi */
  push32((uint32_t)(EDI));
  /* 102d30d4 push esi */
  push32((uint32_t)(ESI));
  /* 102d30d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102d30d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102d30db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102d30de mov eax, ecx */
  EAX = (ECX);
  /* 102d30e0 mov edx, ecx */
  EDX = (ECX);
  /* 102d30e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d30e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d30e6 jbe 0x102d30f0 */
  if ((C.cf||C.zf)) goto L_102d30f0;
  /* 102d30e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d30ea jb 0x102d3268 */
  if (C.cf) goto L_102d3268;
L_102d30f0:;
  /* 102d30f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102d30f6 jne 0x102d310c */
  if (!C.zf) goto L_102d310c;
  /* 102d30f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d30fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102d30fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3101 jb 0x102d312c */
  if (C.cf) goto L_102d312c;
  /* 102d3103 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d3105 jmp dword ptr [edx*4 + 0x102d3218] */
  switch (EDX) {
    case 0: goto L_102d3228;
    case 1: goto L_102d3230;
    case 2: goto L_102d323c;
    case 3: goto L_102d3250;
    default: x86_unimpl("switch@0x102d3105 out of table"); return;
  }
L_102d310c:;
  /* 102d310c mov eax, edi */
  EAX = (EDI);
  /* 102d310e mov edx, 3 */
  EDX = (0x3u);
  /* 102d3113 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3116 jb 0x102d3124 */
  if (C.cf) goto L_102d3124;
  /* 102d3118 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102d311b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d311d jmp dword ptr [eax*4 + 0x102d3130] */
  switch (EAX) {
    case 1: goto L_102d3140;
    case 2: goto L_102d316c;
    case 3: goto L_102d3190;
    default: x86_unimpl("switch@0x102d311d out of table"); return;
  }
L_102d3124:;
  /* 102d3124 jmp dword ptr [ecx*4 + 0x102d3228] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102d3228)))); return;
  /* 102d312b nop  */
  /* nop */
L_102d312c:;
  /* 102d312c jmp dword ptr [ecx*4 + 0x102d31ac] */
  switch (ECX) {
    case 0: goto L_102d320f;
    case 1: goto L_102d31fc;
    case 2: goto L_102d31f4;
    case 3: goto L_102d31ec;
    case 4: goto L_102d31e4;
    case 5: goto L_102d31dc;
    case 6: goto L_102d31d4;
    case 7: goto L_102d31cc;
    default: x86_unimpl("switch@0x102d312c out of table"); return;
  }
  /* 102d3133 nop  */
  /* nop */
L_102d3140:;
  /* 102d3140 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d3142 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3144 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3146 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d3149 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d314c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d314f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3152 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d3155 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3158 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d315b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d315e jb 0x102d312c */
  if (C.cf) goto L_102d312c;
  /* 102d3160 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d3162 jmp dword ptr [edx*4 + 0x102d3218] */
  switch (EDX) {
    case 0: goto L_102d3228;
    case 1: goto L_102d3230;
    case 2: goto L_102d323c;
    case 3: goto L_102d3250;
    default: x86_unimpl("switch@0x102d3162 out of table"); return;
  }
  /* 102d3169 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d316c:;
  /* 102d316c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d316e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3170 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3172 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d3175 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3178 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d317b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d317e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3181 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3184 jb 0x102d312c */
  if (C.cf) goto L_102d312c;
  /* 102d3186 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d3188 jmp dword ptr [edx*4 + 0x102d3218] */
  switch (EDX) {
    case 0: goto L_102d3228;
    case 1: goto L_102d3230;
    case 2: goto L_102d323c;
    case 3: goto L_102d3250;
    default: x86_unimpl("switch@0x102d3188 out of table"); return;
  }
  /* 102d318f nop  */
  /* nop */
L_102d3190:;
  /* 102d3190 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d3192 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3194 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3196 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d3197 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d319a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d319b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d319e jb 0x102d312c */
  if (C.cf) goto L_102d312c;
  /* 102d31a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d31a2 jmp dword ptr [edx*4 + 0x102d3218] */
  switch (EDX) {
    case 0: goto L_102d3228;
    case 1: goto L_102d3230;
    case 2: goto L_102d323c;
    case 3: goto L_102d3250;
    default: x86_unimpl("switch@0x102d31a2 out of table"); return;
  }
  /* 102d31a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d31cc:;
  /* 102d31cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102d31d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102d31d4:;
  /* 102d31d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102d31d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102d31dc:;
  /* 102d31dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102d31e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102d31e4:;
  /* 102d31e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102d31e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102d31ec:;
  /* 102d31ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102d31f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102d31f4:;
  /* 102d31f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102d31f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102d31fc:;
  /* 102d31fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102d3200 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102d3204 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102d320b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d320d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102d320f:;
  /* 102d320f jmp dword ptr [edx*4 + 0x102d3218] */
  switch (EDX) {
    case 0: goto L_102d3228;
    case 1: goto L_102d3230;
    case 2: goto L_102d323c;
    case 3: goto L_102d3250;
    default: x86_unimpl("switch@0x102d320f out of table"); return;
  }
  /* 102d3216 mov edi, edi */
  EDI = (EDI);
L_102d3228:;
  /* 102d3228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d322b pop esi */
  ESI = (pop32());
  /* 102d322c pop edi */
  EDI = (pop32());
  /* 102d322d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d322e ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d322f nop  */
  /* nop */
L_102d3230:;
  /* 102d3230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3232 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3237 pop esi */
  ESI = (pop32());
  /* 102d3238 pop edi */
  EDI = (pop32());
  /* 102d3239 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d323a ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d323b nop  */
  /* nop */
L_102d323c:;
  /* 102d323c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d323e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3240 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d3243 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d3246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3249 pop esi */
  ESI = (pop32());
  /* 102d324a pop edi */
  EDI = (pop32());
  /* 102d324b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d324c ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d324d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d3250:;
  /* 102d3250 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3254 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d3257 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d325a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d325d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d3260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3263 pop esi */
  ESI = (pop32());
  /* 102d3264 pop edi */
  EDI = (pop32());
  /* 102d3265 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d3266 ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d3267 nop  */
  /* nop */
L_102d3268:;
  /* 102d3268 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102d326c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102d3270 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102d3276 jne 0x102d329c */
  if (!C.zf) goto L_102d329c;
  /* 102d3278 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d327b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102d327e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3281 jb 0x102d3290 */
  if (C.cf) goto L_102d3290;
  /* 102d3283 std  */
  C.df=1;
  /* 102d3284 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d3286 cld  */
  C.df=0;
  /* 102d3287 jmp dword ptr [edx*4 + 0x102d33b0] */
  switch (EDX) {
    case 0: goto L_102d33c0;
    case 1: goto L_102d33c8;
    case 2: goto L_102d33d8;
    case 3: goto L_102d33ec;
    default: x86_unimpl("switch@0x102d3287 out of table"); return;
  }
  /* 102d328e mov edi, edi */
  EDI = (EDI);
L_102d3290:;
  /* 102d3290 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102d3292 jmp dword ptr [ecx*4 + 0x102d3360] */
  switch (ECX) {
    case 0: goto L_102d33a7;
    default: x86_unimpl("switch@0x102d3292 out of table"); return;
  }
  /* 102d3299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d329c:;
  /* 102d329c mov eax, edi */
  EAX = (EDI);
  /* 102d329e mov edx, 3 */
  EDX = (0x3u);
  /* 102d32a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d32a6 jb 0x102d32b4 */
  if (C.cf) goto L_102d32b4;
  /* 102d32a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102d32ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d32ad jmp dword ptr [eax*4 + 0x102d32b8] */
  switch (EAX) {
    case 1: goto L_102d32c8;
    case 2: goto L_102d32e8;
    case 3: goto L_102d3310;
    default: x86_unimpl("switch@0x102d32ad out of table"); return;
  }
L_102d32b4:;
  /* 102d32b4 jmp dword ptr [ecx*4 + 0x102d33b0] */
  switch (ECX) {
    case 0: goto L_102d33c0;
    case 1: goto L_102d33c8;
    case 2: goto L_102d33d8;
    case 3: goto L_102d33ec;
    default: x86_unimpl("switch@0x102d32b4 out of table"); return;
  }
  /* 102d32bb nop  */
  /* nop */
L_102d32c8:;
  /* 102d32c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d32cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d32cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d32d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102d32d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d32d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102d32d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d32d8 jb 0x102d3290 */
  if (C.cf) goto L_102d3290;
  /* 102d32da std  */
  C.df=1;
  /* 102d32db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d32dd cld  */
  C.df=0;
  /* 102d32de jmp dword ptr [edx*4 + 0x102d33b0] */
  switch (EDX) {
    case 0: goto L_102d33c0;
    case 1: goto L_102d33c8;
    case 2: goto L_102d33d8;
    case 3: goto L_102d33ec;
    default: x86_unimpl("switch@0x102d32de out of table"); return;
  }
  /* 102d32e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d32e8:;
  /* 102d32e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d32eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d32ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d32f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d32f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d32f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d32f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d32fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d32ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3302 jb 0x102d3290 */
  if (C.cf) goto L_102d3290;
  /* 102d3304 std  */
  C.df=1;
  /* 102d3305 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d3307 cld  */
  C.df=0;
  /* 102d3308 jmp dword ptr [edx*4 + 0x102d33b0] */
  switch (EDX) {
    case 0: goto L_102d33c0;
    case 1: goto L_102d33c8;
    case 2: goto L_102d33d8;
    case 3: goto L_102d33ec;
    default: x86_unimpl("switch@0x102d3308 out of table"); return;
  }
  /* 102d330f nop  */
  /* nop */
L_102d3310:;
  /* 102d3310 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d3313 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d3315 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d3318 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d331b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d331e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d3321 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3324 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d3327 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d332a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d332d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3330 jb 0x102d3290 */
  if (C.cf) goto L_102d3290;
  /* 102d3336 std  */
  C.df=1;
  /* 102d3337 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d3339 cld  */
  C.df=0;
  /* 102d333a jmp dword ptr [edx*4 + 0x102d33b0] */
  switch (EDX) {
    case 0: goto L_102d33c0;
    case 1: goto L_102d33c8;
    case 2: goto L_102d33d8;
    case 3: goto L_102d33ec;
    default: x86_unimpl("switch@0x102d333a out of table"); return;
  }
  /* 102d3341 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102d3344 xor ebp, dword ptr fs:[0x2d336c10] */
  { uint32_t _r=(EBP)^(r32((uint32_t)(0x2d336c10))); EBP = (_r); fl_logic(_r,32); }
  /* 102d334b adc byte ptr [ebx + esi + 0x2d], dh */
  { uint32_t _a=(r8((uint32_t)(EBX + ESI*1 + 0x2d))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + ESI*1 + 0x2d), (_r)); fl_add(_a,_b,_r,8); }
  /* 102d334f adc byte ptr [ebx + esi + 0x2d], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + ESI*1 + 0x2d))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + ESI*1 + 0x2d), (_r)); fl_add(_a,_b,_r,8); }
  /* 102d3353 adc byte ptr [ebx + esi + 0x338c102d], al */
  { uint32_t _a=(r8((uint32_t)(EBX + ESI*1 + 0x338c102d))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + ESI*1 + 0x338c102d), (_r)); fl_add(_a,_b,_r,8); }
  /* 102d335a sub eax, 0x2d339410 */
  { uint32_t _a=(EAX),_b=(0x2d339410u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3364 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102d3368 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102d336c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102d3370 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102d3374 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102d3378 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102d337c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102d3380 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102d3384 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102d3388 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102d338c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102d3390 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102d3394 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102d3398 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102d339c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102d33a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d33a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102d33a7:;
  /* 102d33a7 jmp dword ptr [edx*4 + 0x102d33b0] */
  switch (EDX) {
    case 0: goto L_102d33c0;
    case 1: goto L_102d33c8;
    case 2: goto L_102d33d8;
    case 3: goto L_102d33ec;
    default: x86_unimpl("switch@0x102d33a7 out of table"); return;
  }
  /* 102d33ae mov edi, edi */
  EDI = (EDI);
L_102d33c0:;
  /* 102d33c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d33c3 pop esi */
  ESI = (pop32());
  /* 102d33c4 pop edi */
  EDI = (pop32());
  /* 102d33c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d33c6 ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d33c7 nop  */
  /* nop */
L_102d33c8:;
  /* 102d33c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d33cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d33ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d33d1 pop esi */
  ESI = (pop32());
  /* 102d33d2 pop edi */
  EDI = (pop32());
  /* 102d33d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d33d4 ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d33d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d33d8:;
  /* 102d33d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d33db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d33de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d33e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d33e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d33e7 pop esi */
  ESI = (pop32());
  /* 102d33e8 pop edi */
  EDI = (pop32());
  /* 102d33e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d33ea ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
  /* 102d33eb nop  */
  /* nop */
L_102d33ec:;
  /* 102d33ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d33ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d33f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d33f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d33f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d33fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d33fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3401 pop esi */
  ESI = (pop32());
  /* 102d3402 pop edi */
  EDI = (pop32());
  /* 102d3403 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d3404 ret  */
  ESPCHK(0x102d30d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003405 @ 0x102d3405 (62 bytes, 15 insns) */
void f_102d3405(void) {
  FTRACE(0x102d3405u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3405 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 102d340a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d340c push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d3412 call dword ptr [0x102d503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d503c))), 0x102d3418u);
  /* 102d3418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d341a mov dword ptr [0x102d6804], eax */
  w32((uint32_t)(0x102d6804), (EAX));
  /* 102d341f jne 0x102d3422 */
  if (!C.zf) goto L_102d3422;
  /* 102d3421 ret  */
  ESPCHK(0x102d3405u, _esp0);
  ESP += 4; return;
L_102d3422:;
  /* 102d3422 and dword ptr [0x102d67fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102d67fc)))&(0x0u); w32((uint32_t)(0x102d67fc), (_r)); fl_logic(_r,32); }
  /* 102d3429 and dword ptr [0x102d6800], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102d6800)))&(0x0u); w32((uint32_t)(0x102d6800), (_r)); fl_logic(_r,32); }
  /* 102d3430 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d3432 mov dword ptr [0x102d67f8], eax */
  w32((uint32_t)(0x102d67f8), (EAX));
  /* 102d3437 mov dword ptr [0x102d67f0], 0x10 */
  w32((uint32_t)(0x102d67f0), (0x10u));
  /* 102d3441 pop eax */
  EAX = (pop32());
  /* 102d3442 ret  */
  ESPCHK(0x102d3405u, _esp0);
  ESP += 4; return;
}

/* FUN_10003443 @ 0x102d3443 (43 bytes, 14 insns) */
void f_102d3443(void) {
  FTRACE(0x102d3443u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3443 mov eax, dword ptr [0x102d6800] */
  EAX = (r32((uint32_t)(0x102d6800)));
  /* 102d3448 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102d344b mov eax, dword ptr [0x102d6804] */
  EAX = (r32((uint32_t)(0x102d6804)));
  /* 102d3450 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_102d3453:;
  /* 102d3453 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3455 jae 0x102d346b */
  if (!C.cf) goto L_102d346b;
  /* 102d3457 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d345b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d345e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3464 jb 0x102d346d */
  if (C.cf) goto L_102d346d;
  /* 102d3466 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3469 jmp 0x102d3453 */
  goto L_102d3453;
L_102d346b:;
  /* 102d346b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102d346d:;
  /* 102d346d ret  */
  ESPCHK(0x102d3443u, _esp0);
  ESP += 4; return;
}

/* FUN_1000346e @ 0x102d346e (811 bytes, 264 insns) */
void f_102d346e(void) {
  FTRACE(0x102d346eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d346e push ebp */
  push32((uint32_t)(EBP));
  /* 102d346f mov ebp, esp */
  EBP = (ESP);
  /* 102d3471 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3474 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102d3477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d347a push ebx */
  push32((uint32_t)(EBX));
  /* 102d347b push esi */
  push32((uint32_t)(ESI));
  /* 102d347c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 102d347f mov esi, edx */
  ESI = (EDX);
  /* 102d3481 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3484 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 102d3487 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d348a push edi */
  push32((uint32_t)(EDI));
  /* 102d348b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 102d348e mov ecx, esi */
  ECX = (ESI);
  /* 102d3490 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 102d3493 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102d3499 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102d349a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102d349d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102d34a4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102d34a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102d34aa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 102d34ad test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 102d34b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102d34b3 jne 0x102d3534 */
  if (!C.zf) goto L_102d3534;
  /* 102d34b5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102d34b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102d34ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d34bb pop edi */
  EDI = (pop32());
  /* 102d34bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102d34bf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d34c1 jbe 0x102d34c6 */
  if ((C.cf||C.zf)) goto L_102d34c6;
  /* 102d34c3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102d34c6:;
  /* 102d34c6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102d34ca cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d34ce jne 0x102d3518 */
  if (!C.zf) goto L_102d3518;
  /* 102d34d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102d34d3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d34d6 jae 0x102d34f4 */
  if (!C.cf) goto L_102d34f4;
  /* 102d34d8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102d34dd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102d34df lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102d34e3 not edi */
  EDI = (~(EDI));
  /* 102d34e5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102d34e9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102d34eb jne 0x102d3518 */
  if (!C.zf) goto L_102d3518;
  /* 102d34ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d34f0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102d34f2 jmp 0x102d3518 */
  goto L_102d3518;
L_102d34f4:;
  /* 102d34f4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d34f7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102d34fc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102d34fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102d3501 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102d3505 not edi */
  EDI = (~(EDI));
  /* 102d3507 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102d350e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102d3510 jne 0x102d3518 */
  if (!C.zf) goto L_102d3518;
  /* 102d3512 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3515 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102d3518:;
  /* 102d3518 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102d351c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102d3520 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102d3523 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102d3527 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102d352b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d352e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102d3531 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_102d3534:;
  /* 102d3534 mov edi, ebx */
  EDI = (EBX);
  /* 102d3536 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102d3539 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102d353a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d353d jbe 0x102d3542 */
  if ((C.cf||C.zf)) goto L_102d3542;
  /* 102d353f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102d3541 pop edi */
  EDI = (pop32());
L_102d3542:;
  /* 102d3542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3545 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102d3548 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 102d354b jne 0x102d35f1 */
  if (!C.zf) goto L_102d35f1;
  /* 102d3551 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3557 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102d355a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102d355c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102d355f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3560 pop edx */
  EDX = (pop32());
  /* 102d3561 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3563 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102d3566 jbe 0x102d356d */
  if ((C.cf||C.zf)) goto L_102d356d;
  /* 102d3568 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102d356b mov ecx, edx */
  ECX = (EDX);
L_102d356d:;
  /* 102d356d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3570 mov edi, ebx */
  EDI = (EBX);
  /* 102d3572 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102d3575 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102d3578 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102d3579 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d357b jbe 0x102d357f */
  if ((C.cf||C.zf)) goto L_102d357f;
  /* 102d357d mov edi, edx */
  EDI = (EDX);
L_102d357f:;
  /* 102d357f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3581 je 0x102d35ee */
  if (C.zf) goto L_102d35ee;
  /* 102d3583 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102d3586 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102d3589 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d358c jne 0x102d35d6 */
  if (!C.zf) goto L_102d35d6;
  /* 102d358e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102d3591 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3594 jae 0x102d35b2 */
  if (!C.cf) goto L_102d35b2;
  /* 102d3596 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102d359b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102d359d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102d35a1 not edx */
  EDX = (~(EDX));
  /* 102d35a3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102d35a7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102d35a9 jne 0x102d35d6 */
  if (!C.zf) goto L_102d35d6;
  /* 102d35ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d35ae and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102d35b0 jmp 0x102d35d6 */
  goto L_102d35d6;
L_102d35b2:;
  /* 102d35b2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d35b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102d35ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102d35bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102d35bf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102d35c3 not edx */
  EDX = (~(EDX));
  /* 102d35c5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102d35cc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102d35ce jne 0x102d35d6 */
  if (!C.zf) goto L_102d35d6;
  /* 102d35d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d35d3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102d35d6:;
  /* 102d35d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102d35d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 102d35dc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102d35df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102d35e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102d35e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102d35e8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 102d35eb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_102d35ee:;
  /* 102d35ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_102d35f1:;
  /* 102d35f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d35f5 jne 0x102d3600 */
  if (!C.zf) goto L_102d3600;
  /* 102d35f7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d35fa je 0x102d3689 */
  if (C.zf) goto L_102d3689;
L_102d3600:;
  /* 102d3600 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102d3603 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102d3606 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102d3609 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102d360c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102d360f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102d3612 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102d3615 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102d3618 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102d361b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102d361e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102d3621 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3624 jne 0x102d3689 */
  if (!C.zf) goto L_102d3689;
  /* 102d3626 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 102d362a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d362d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 102d3630 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102d3632 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 102d3636 jae 0x102d365d */
  if (!C.cf) goto L_102d365d;
  /* 102d3638 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d363c jne 0x102d364c */
  if (!C.zf) goto L_102d364c;
  /* 102d363e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102d3643 mov ecx, edi */
  ECX = (EDI);
  /* 102d3645 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102d3647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d364a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_102d364c:;
  /* 102d364c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102d3651 mov ecx, edi */
  ECX = (EDI);
  /* 102d3653 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102d3655 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 102d3659 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102d365b jmp 0x102d3686 */
  goto L_102d3686;
L_102d365d:;
  /* 102d365d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d3661 jne 0x102d3673 */
  if (!C.zf) goto L_102d3673;
  /* 102d3663 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102d3666 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102d366b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102d366d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3670 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102d3673:;
  /* 102d3673 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102d3676 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102d367b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102d367d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 102d3684 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_102d3686:;
  /* 102d3686 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_102d3689:;
  /* 102d3689 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102d368c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 102d368e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 102d3692 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 102d3694 jne 0x102d3794 */
  if (!C.zf) goto L_102d3794;
  /* 102d369a mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d369f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d36a1 je 0x102d3786 */
  if (C.zf) goto L_102d3786;
  /* 102d36a7 mov ecx, dword ptr [0x102d67f4] */
  ECX = (r32((uint32_t)(0x102d67f4)));
  /* 102d36ad mov edi, dword ptr [0x102d5054] */
  EDI = (r32((uint32_t)(0x102d5054)));
  /* 102d36b3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 102d36b6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d36b9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 102d36be push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102d36c3 push ebx */
  push32((uint32_t)(EBX));
  /* 102d36c4 push ecx */
  push32((uint32_t)(ECX));
  /* 102d36c5 call edi */
  call_ind((uint32_t)(EDI), 0x102d36c7u);
  /* 102d36c7 mov ecx, dword ptr [0x102d67f4] */
  ECX = (r32((uint32_t)(0x102d67f4)));
  /* 102d36cd mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d36d2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102d36d7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102d36d9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102d36dc mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d36e1 mov ecx, dword ptr [0x102d67f4] */
  ECX = (r32((uint32_t)(0x102d67f4)));
  /* 102d36e7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102d36ea and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102d36f2 mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d36f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102d36fa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 102d36fd mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d3702 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102d3705 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d3709 jne 0x102d3714 */
  if (!C.zf) goto L_102d3714;
  /* 102d370b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102d370f mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
L_102d3714:;
  /* 102d3714 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3718 jne 0x102d3786 */
  if (!C.zf) goto L_102d3786;
  /* 102d371a push ebx */
  push32((uint32_t)(EBX));
  /* 102d371b push 0 */
  push32((uint32_t)(0x0u));
  /* 102d371d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 102d3720 call edi */
  call_ind((uint32_t)(EDI), 0x102d3722u);
  /* 102d3722 mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d3727 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 102d372a push 0 */
  push32((uint32_t)(0x0u));
  /* 102d372c push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d3732 call dword ptr [0x102d5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5050))), 0x102d3738u);
  /* 102d3738 mov eax, dword ptr [0x102d6800] */
  EAX = (r32((uint32_t)(0x102d6800)));
  /* 102d373d mov edx, dword ptr [0x102d6804] */
  EDX = (r32((uint32_t)(0x102d6804)));
  /* 102d3743 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d3746 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d3749 mov ecx, eax */
  ECX = (EAX);
  /* 102d374b mov eax, dword ptr [0x102d67fc] */
  EAX = (r32((uint32_t)(0x102d67fc)));
  /* 102d3750 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3752 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 102d3756 push ecx */
  push32((uint32_t)(ECX));
  /* 102d3757 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 102d375a push ecx */
  push32((uint32_t)(ECX));
  /* 102d375b push eax */
  push32((uint32_t)(EAX));
  /* 102d375c call 0x102d41f0 */
  push32(0x102d3761u); f_102d41f0();
  /* 102d3761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3764 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3767 dec dword ptr [0x102d6800] */
  { uint32_t _r=(r32((uint32_t)(0x102d6800)))-1; w32((uint32_t)(0x102d6800), (_r)); fl_dec(_r,32); }
  /* 102d376d cmp eax, dword ptr [0x102d67fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102d67fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3773 jbe 0x102d3778 */
  if ((C.cf||C.zf)) goto L_102d3778;
  /* 102d3775 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102d3778:;
  /* 102d3778 mov ecx, dword ptr [0x102d6804] */
  ECX = (r32((uint32_t)(0x102d6804)));
  /* 102d377e mov dword ptr [0x102d67f8], ecx */
  w32((uint32_t)(0x102d67f8), (ECX));
  /* 102d3784 jmp 0x102d3789 */
  goto L_102d3789;
L_102d3786:;
  /* 102d3786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_102d3789:;
  /* 102d3789 mov dword ptr [0x102d67fc], eax */
  w32((uint32_t)(0x102d67fc), (EAX));
  /* 102d378e mov dword ptr [0x102d67f4], esi */
  w32((uint32_t)(0x102d67f4), (ESI));
L_102d3794:;
  /* 102d3794 pop edi */
  EDI = (pop32());
  /* 102d3795 pop esi */
  ESI = (pop32());
  /* 102d3796 pop ebx */
  EBX = (pop32());
  /* 102d3797 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d3798 ret  */
  ESPCHK(0x102d346eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003799 @ 0x102d3799 (777 bytes, 275 insns) */
void f_102d3799(void) {
  FTRACE(0x102d3799u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3799 push ebp */
  push32((uint32_t)(EBP));
  /* 102d379a mov ebp, esp */
  EBP = (ESP);
  /* 102d379c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d379f mov eax, dword ptr [0x102d6800] */
  EAX = (r32((uint32_t)(0x102d6800)));
  /* 102d37a4 mov edx, dword ptr [0x102d6804] */
  EDX = (r32((uint32_t)(0x102d6804)));
  /* 102d37aa push ebx */
  push32((uint32_t)(EBX));
  /* 102d37ab push esi */
  push32((uint32_t)(ESI));
  /* 102d37ac lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d37af push edi */
  push32((uint32_t)(EDI));
  /* 102d37b0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102d37b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d37b6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102d37b9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 102d37bc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 102d37bf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102d37c2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102d37c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d37c6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d37c9 jge 0x102d37d9 */
  if ((C.sf==C.of)) goto L_102d37d9;
  /* 102d37cb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102d37ce shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102d37d0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 102d37d4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102d37d7 jmp 0x102d37e9 */
  goto L_102d37e9;
L_102d37d9:;
  /* 102d37d9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d37dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d37df xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102d37e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102d37e3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102d37e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102d37e9:;
  /* 102d37e9 mov eax, dword ptr [0x102d67f8] */
  EAX = (r32((uint32_t)(0x102d67f8)));
  /* 102d37ee mov ebx, eax */
  EBX = (EAX);
  /* 102d37f0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d37f2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d37f5 jae 0x102d3810 */
  if (!C.cf) goto L_102d3810;
L_102d37f7:;
  /* 102d37f7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102d37fa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102d37fc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102d37ff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102d3801 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102d3803 jne 0x102d3810 */
  if (!C.zf) goto L_102d3810;
  /* 102d3805 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3808 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d380b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d380e jb 0x102d37f7 */
  if (C.cf) goto L_102d37f7;
L_102d3810:;
  /* 102d3810 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3813 jne 0x102d388e */
  if (!C.zf) goto L_102d388e;
  /* 102d3815 mov ebx, edx */
  EBX = (EDX);
L_102d3817:;
  /* 102d3817 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3819 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d381c jae 0x102d3833 */
  if (!C.cf) goto L_102d3833;
  /* 102d381e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102d3821 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102d3823 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102d3826 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102d3828 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102d382a jne 0x102d3831 */
  if (!C.zf) goto L_102d3831;
  /* 102d382c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d382f jmp 0x102d3817 */
  goto L_102d3817;
L_102d3831:;
  /* 102d3831 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102d3833:;
  /* 102d3833 jne 0x102d388e */
  if (!C.zf) goto L_102d388e;
L_102d3835:;
  /* 102d3835 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3838 jae 0x102d384b */
  if (!C.cf) goto L_102d384b;
  /* 102d383a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d383e jne 0x102d3848 */
  if (!C.zf) goto L_102d3848;
  /* 102d3840 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3843 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d3846 jmp 0x102d3835 */
  goto L_102d3835;
L_102d3848:;
  /* 102d3848 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102d384b:;
  /* 102d384b jne 0x102d3873 */
  if (!C.zf) goto L_102d3873;
  /* 102d384d mov ebx, edx */
  EBX = (EDX);
L_102d384f:;
  /* 102d384f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3851 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d3854 jae 0x102d3863 */
  if (!C.cf) goto L_102d3863;
  /* 102d3856 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d385a jne 0x102d3861 */
  if (!C.zf) goto L_102d3861;
  /* 102d385c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d385f jmp 0x102d384f */
  goto L_102d384f;
L_102d3861:;
  /* 102d3861 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102d3863:;
  /* 102d3863 jne 0x102d3873 */
  if (!C.zf) goto L_102d3873;
  /* 102d3865 call 0x102d3aa2 */
  push32(0x102d386au); f_102d3aa2();
  /* 102d386a mov ebx, eax */
  EBX = (EAX);
  /* 102d386c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102d386e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102d3871 je 0x102d3887 */
  if (C.zf) goto L_102d3887;
L_102d3873:;
  /* 102d3873 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3874 call 0x102d3b53 */
  push32(0x102d3879u); f_102d3b53();
  /* 102d3879 pop ecx */
  ECX = (pop32());
  /* 102d387a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 102d387d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 102d387f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102d3882 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3885 jne 0x102d388e */
  if (!C.zf) goto L_102d388e;
L_102d3887:;
  /* 102d3887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3889 jmp 0x102d3a9d */
  goto L_102d3a9d;
L_102d388e:;
  /* 102d388e mov dword ptr [0x102d67f8], ebx */
  w32((uint32_t)(0x102d67f8), (EBX));
  /* 102d3894 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102d3897 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102d3899 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d389c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102d389f je 0x102d38b5 */
  if (C.zf) goto L_102d38b5;
  /* 102d38a1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102d38a8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102d38ac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102d38af and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102d38b1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102d38b3 jne 0x102d38ec */
  if (!C.zf) goto L_102d38ec;
L_102d38b5:;
  /* 102d38b5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 102d38bb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 102d38be and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102d38c1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102d38c4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d38c8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 102d38cb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102d38cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102d38d0 jne 0x102d38e9 */
  if (!C.zf) goto L_102d38e9;
L_102d38d2:;
  /* 102d38d2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 102d38d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102d38db and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102d38de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d38e1 mov edi, esi */
  EDI = (ESI);
  /* 102d38e3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 102d38e5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 102d38e7 je 0x102d38d2 */
  if (C.zf) goto L_102d38d2;
L_102d38e9:;
  /* 102d38e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_102d38ec:;
  /* 102d38ec mov ecx, edx */
  ECX = (EDX);
  /* 102d38ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d38f0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102d38f6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102d38fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102d3900 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102d3904 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102d3906 jne 0x102d3915 */
  if (!C.zf) goto L_102d3915;
  /* 102d3908 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102d390f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102d3911 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102d3914 pop edi */
  EDI = (pop32());
L_102d3915:;
  /* 102d3915 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102d3917 jl 0x102d391e */
  if ((C.sf!=C.of)) goto L_102d391e;
  /* 102d3919 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102d391b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d391c jmp 0x102d3915 */
  goto L_102d3915;
L_102d391e:;
  /* 102d391e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102d3921 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 102d3925 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 102d3927 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d392a mov esi, ecx */
  ESI = (ECX);
  /* 102d392c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102d392f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102d3932 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102d3933 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3936 jle 0x102d393b */
  if ((C.zf||C.sf!=C.of)) goto L_102d393b;
  /* 102d3938 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102d393a pop esi */
  ESI = (pop32());
L_102d393b:;
  /* 102d393b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d393d je 0x102d3a50 */
  if (C.zf) goto L_102d3a50;
  /* 102d3943 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102d3946 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3949 jne 0x102d39ac */
  if (!C.zf) goto L_102d39ac;
  /* 102d394b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d394e jge 0x102d397b */
  if ((C.sf==C.of)) goto L_102d397b;
  /* 102d3950 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102d3955 mov ecx, edi */
  ECX = (EDI);
  /* 102d3957 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102d3959 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d395c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102d3960 not ebx */
  EBX = (~(EBX));
  /* 102d3962 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102d3965 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 102d3969 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 102d396d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102d396f jne 0x102d39a9 */
  if (!C.zf) goto L_102d39a9;
  /* 102d3971 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3974 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102d3977 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102d3979 jmp 0x102d39ac */
  goto L_102d39ac;
L_102d397b:;
  /* 102d397b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102d397e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102d3983 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102d3985 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3988 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102d398c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102d3993 not ebx */
  EBX = (~(EBX));
  /* 102d3995 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102d3997 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102d3999 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102d399c jne 0x102d39a9 */
  if (!C.zf) goto L_102d39a9;
  /* 102d399e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d39a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102d39a4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102d39a7 jmp 0x102d39ac */
  goto L_102d39ac;
L_102d39a9:;
  /* 102d39a9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102d39ac:;
  /* 102d39ac mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102d39af mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102d39b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d39b6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102d39b9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102d39bc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102d39bf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102d39c2 je 0x102d3a5c */
  if (C.zf) goto L_102d3a5c;
  /* 102d39c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102d39cb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 102d39cf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 102d39d2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 102d39d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102d39d8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102d39db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102d39de mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102d39e1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102d39e4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d39e7 jne 0x102d3a4d */
  if (!C.zf) goto L_102d3a4d;
  /* 102d39e9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 102d39ed cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d39f0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 102d39f3 jge 0x102d3a1e */
  if ((C.sf==C.of)) goto L_102d3a1e;
  /* 102d39f5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102d39f7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d39fb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102d39ff jne 0x102d3a0c */
  if (!C.zf) goto L_102d3a0c;
  /* 102d3a01 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102d3a06 mov ecx, esi */
  ECX = (ESI);
  /* 102d3a08 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102d3a0a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_102d3a0c:;
  /* 102d3a0c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102d3a11 mov ecx, esi */
  ECX = (ESI);
  /* 102d3a13 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102d3a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3a18 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102d3a1c jmp 0x102d3a4d */
  goto L_102d3a4d;
L_102d3a1e:;
  /* 102d3a1e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102d3a20 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d3a24 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102d3a28 jne 0x102d3a37 */
  if (!C.zf) goto L_102d3a37;
  /* 102d3a2a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102d3a2d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102d3a32 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102d3a34 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_102d3a37:;
  /* 102d3a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3a3a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102d3a41 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102d3a44 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102d3a49 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102d3a4b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102d3a4d:;
  /* 102d3a4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102d3a50:;
  /* 102d3a50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102d3a52 je 0x102d3a5f */
  if (C.zf) goto L_102d3a5f;
  /* 102d3a54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102d3a56 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 102d3a5a jmp 0x102d3a5f */
  goto L_102d3a5f;
L_102d3a5c:;
  /* 102d3a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102d3a5f:;
  /* 102d3a5f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102d3a62 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3a64 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 102d3a67 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102d3a69 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 102d3a6d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102d3a70 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102d3a72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102d3a74 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102d3a77 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102d3a79 jne 0x102d3a95 */
  if (!C.zf) goto L_102d3a95;
  /* 102d3a7b cmp ebx, dword ptr [0x102d67fc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102d67fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3a81 jne 0x102d3a95 */
  if (!C.zf) goto L_102d3a95;
  /* 102d3a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3a86 cmp ecx, dword ptr [0x102d67f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102d67f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3a8c jne 0x102d3a95 */
  if (!C.zf) goto L_102d3a95;
  /* 102d3a8e and dword ptr [0x102d67fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102d67fc)))&(0x0u); w32((uint32_t)(0x102d67fc), (_r)); fl_logic(_r,32); }
L_102d3a95:;
  /* 102d3a95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3a98 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102d3a9a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102d3a9d:;
  /* 102d3a9d pop edi */
  EDI = (pop32());
  /* 102d3a9e pop esi */
  ESI = (pop32());
  /* 102d3a9f pop ebx */
  EBX = (pop32());
  /* 102d3aa0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d3aa1 ret  */
  ESPCHK(0x102d3799u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa2 @ 0x102d3aa2 (177 bytes, 53 insns) */
void f_102d3aa2(void) {
  FTRACE(0x102d3aa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3aa2 mov eax, dword ptr [0x102d6800] */
  EAX = (r32((uint32_t)(0x102d6800)));
  /* 102d3aa7 mov ecx, dword ptr [0x102d67f0] */
  ECX = (r32((uint32_t)(0x102d67f0)));
  /* 102d3aad push esi */
  push32((uint32_t)(ESI));
  /* 102d3aae push edi */
  push32((uint32_t)(EDI));
  /* 102d3aaf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d3ab1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3ab3 jne 0x102d3ae5 */
  if (!C.zf) goto L_102d3ae5;
  /* 102d3ab5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102d3ab9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102d3abc push eax */
  push32((uint32_t)(EAX));
  /* 102d3abd push dword ptr [0x102d6804] */
  push32((uint32_t)(r32((uint32_t)(0x102d6804))));
  /* 102d3ac3 push edi */
  push32((uint32_t)(EDI));
  /* 102d3ac4 push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d3aca call dword ptr [0x102d5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5028))), 0x102d3ad0u);
  /* 102d3ad0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3ad2 je 0x102d3b35 */
  if (C.zf) goto L_102d3b35;
  /* 102d3ad4 add dword ptr [0x102d67f0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102d67f0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102d67f0), (_r)); fl_add(_a,_b,_r,32); }
  /* 102d3adb mov dword ptr [0x102d6804], eax */
  w32((uint32_t)(0x102d6804), (EAX));
  /* 102d3ae0 mov eax, dword ptr [0x102d6800] */
  EAX = (r32((uint32_t)(0x102d6800)));
L_102d3ae5:;
  /* 102d3ae5 mov ecx, dword ptr [0x102d6804] */
  ECX = (r32((uint32_t)(0x102d6804)));
  /* 102d3aeb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 102d3af0 push 8 */
  push32((uint32_t)(0x8u));
  /* 102d3af2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102d3af5 push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d3afb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102d3afe call dword ptr [0x102d503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d503c))), 0x102d3b04u);
  /* 102d3b04 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3b06 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 102d3b09 je 0x102d3b35 */
  if (C.zf) goto L_102d3b35;
  /* 102d3b0b push 4 */
  push32((uint32_t)(0x4u));
  /* 102d3b0d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 102d3b12 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102d3b17 push edi */
  push32((uint32_t)(EDI));
  /* 102d3b18 call dword ptr [0x102d502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d502c))), 0x102d3b1eu);
  /* 102d3b1e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3b20 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102d3b23 jne 0x102d3b39 */
  if (!C.zf) goto L_102d3b39;
  /* 102d3b25 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 102d3b28 push edi */
  push32((uint32_t)(EDI));
  /* 102d3b29 push dword ptr [0x102d6a28] */
  push32((uint32_t)(r32((uint32_t)(0x102d6a28))));
  /* 102d3b2f call dword ptr [0x102d5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5050))), 0x102d3b35u);
L_102d3b35:;
  /* 102d3b35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3b37 jmp 0x102d3b50 */
  goto L_102d3b50;
L_102d3b39:;
  /* 102d3b39 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102d3b3d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102d3b3f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 102d3b42 inc dword ptr [0x102d6800] */
  { uint32_t _r=(r32((uint32_t)(0x102d6800)))+1; w32((uint32_t)(0x102d6800), (_r)); fl_inc(_r,32); }
  /* 102d3b48 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 102d3b4b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102d3b4e mov eax, esi */
  EAX = (ESI);
L_102d3b50:;
  /* 102d3b50 pop edi */
  EDI = (pop32());
  /* 102d3b51 pop esi */
  ESI = (pop32());
  /* 102d3b52 ret  */
  ESPCHK(0x102d3aa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b53 @ 0x102d3b53 (251 bytes, 85 insns) */
void f_102d3b53(void) {
  FTRACE(0x102d3b53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3b53 push ebp */
  push32((uint32_t)(EBP));
  /* 102d3b54 mov ebp, esp */
  EBP = (ESP);
  /* 102d3b56 push ecx */
  push32((uint32_t)(ECX));
  /* 102d3b57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3b5a push ebx */
  push32((uint32_t)(EBX));
  /* 102d3b5b push esi */
  push32((uint32_t)(ESI));
  /* 102d3b5c push edi */
  push32((uint32_t)(EDI));
  /* 102d3b5d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102d3b60 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102d3b63 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102d3b65:;
  /* 102d3b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3b67 jl 0x102d3b6e */
  if ((C.sf!=C.of)) goto L_102d3b6e;
  /* 102d3b69 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102d3b6b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102d3b6c jmp 0x102d3b65 */
  goto L_102d3b65;
L_102d3b6e:;
  /* 102d3b6e mov eax, ebx */
  EAX = (EBX);
  /* 102d3b70 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102d3b72 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102d3b78 pop edx */
  EDX = (pop32());
  /* 102d3b79 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102d3b80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102d3b83:;
  /* 102d3b83 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102d3b86 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102d3b89 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3b8c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102d3b8d jne 0x102d3b83 */
  if (!C.zf) goto L_102d3b83;
  /* 102d3b8f mov edi, ebx */
  EDI = (EBX);
  /* 102d3b91 push 4 */
  push32((uint32_t)(0x4u));
  /* 102d3b93 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102d3b96 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3b99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102d3b9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102d3ba3 push edi */
  push32((uint32_t)(EDI));
  /* 102d3ba4 call dword ptr [0x102d502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d502c))), 0x102d3baau);
  /* 102d3baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3bac jne 0x102d3bb6 */
  if (!C.zf) goto L_102d3bb6;
  /* 102d3bae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d3bb1 jmp 0x102d3c49 */
  goto L_102d3c49;
L_102d3bb6:;
  /* 102d3bb6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102d3bbc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3bbe ja 0x102d3bfc */
  if ((!C.cf&&!C.zf)) goto L_102d3bfc;
  /* 102d3bc0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_102d3bc3:;
  /* 102d3bc3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 102d3bc7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 102d3bce lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 102d3bd4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 102d3bdb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102d3bdd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 102d3be3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102d3be6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 102d3bf0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3bf5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 102d3bf8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3bfa jbe 0x102d3bc3 */
  if ((C.cf||C.zf)) goto L_102d3bc3;
L_102d3bfc:;
  /* 102d3bfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102d3bff lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 102d3c02 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d3c09 pop edi */
  EDI = (pop32());
  /* 102d3c0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102d3c0d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 102d3c10 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 102d3c13 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 102d3c16 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 102d3c19 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102d3c1e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 102d3c25 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 102d3c28 mov cl, al */
  CL = (AL);
  /* 102d3c2a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102d3c2c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d3c2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d3c31 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 102d3c34 jne 0x102d3c39 */
  if (!C.zf) goto L_102d3c39;
  /* 102d3c36 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_102d3c39:;
  /* 102d3c39 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102d3c3e mov ecx, ebx */
  ECX = (EBX);
  /* 102d3c40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102d3c42 not edx */
  EDX = (~(EDX));
  /* 102d3c44 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102d3c47 mov eax, ebx */
  EAX = (EBX);
L_102d3c49:;
  /* 102d3c49 pop edi */
  EDI = (pop32());
  /* 102d3c4a pop esi */
  ESI = (pop32());
  /* 102d3c4b pop ebx */
  EBX = (pop32());
  /* 102d3c4c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d3c4d ret  */
  ESPCHK(0x102d3b53u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c4e @ 0x102d3c4e (137 bytes, 50 insns) */
void f_102d3c4e(void) {
  FTRACE(0x102d3c4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3c4e push ebx */
  push32((uint32_t)(EBX));
  /* 102d3c4f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d3c51 cmp dword ptr [0x102d67b4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102d67b4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3c57 push esi */
  push32((uint32_t)(ESI));
  /* 102d3c58 push edi */
  push32((uint32_t)(EDI));
  /* 102d3c59 jne 0x102d3c9d */
  if (!C.zf) goto L_102d3c9d;
  /* 102d3c5b push 0x102d5458 */
  push32((uint32_t)(0x102d5458u));
  /* 102d3c60 call dword ptr [0x102d5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5020))), 0x102d3c66u);
  /* 102d3c66 mov edi, eax */
  EDI = (EAX);
  /* 102d3c68 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3c6a je 0x102d3cd3 */
  if (C.zf) goto L_102d3cd3;
  /* 102d3c6c mov esi, dword ptr [0x102d5024] */
  ESI = (r32((uint32_t)(0x102d5024)));
  /* 102d3c72 push 0x102d544c */
  push32((uint32_t)(0x102d544cu));
  /* 102d3c77 push edi */
  push32((uint32_t)(EDI));
  /* 102d3c78 call esi */
  call_ind((uint32_t)(ESI), 0x102d3c7au);
  /* 102d3c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3c7c mov dword ptr [0x102d67b4], eax */
  w32((uint32_t)(0x102d67b4), (EAX));
  /* 102d3c81 je 0x102d3cd3 */
  if (C.zf) goto L_102d3cd3;
  /* 102d3c83 push 0x102d543c */
  push32((uint32_t)(0x102d543cu));
  /* 102d3c88 push edi */
  push32((uint32_t)(EDI));
  /* 102d3c89 call esi */
  call_ind((uint32_t)(ESI), 0x102d3c8bu);
  /* 102d3c8b push 0x102d5428 */
  push32((uint32_t)(0x102d5428u));
  /* 102d3c90 push edi */
  push32((uint32_t)(EDI));
  /* 102d3c91 mov dword ptr [0x102d67b8], eax */
  w32((uint32_t)(0x102d67b8), (EAX));
  /* 102d3c96 call esi */
  call_ind((uint32_t)(ESI), 0x102d3c98u);
  /* 102d3c98 mov dword ptr [0x102d67bc], eax */
  w32((uint32_t)(0x102d67bc), (EAX));
L_102d3c9d:;
  /* 102d3c9d mov eax, dword ptr [0x102d67b8] */
  EAX = (r32((uint32_t)(0x102d67b8)));
  /* 102d3ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3ca4 je 0x102d3cbc */
  if (C.zf) goto L_102d3cbc;
  /* 102d3ca6 call eax */
  call_ind((uint32_t)(EAX), 0x102d3ca8u);
  /* 102d3ca8 mov ebx, eax */
  EBX = (EAX);
  /* 102d3caa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102d3cac je 0x102d3cbc */
  if (C.zf) goto L_102d3cbc;
  /* 102d3cae mov eax, dword ptr [0x102d67bc] */
  EAX = (r32((uint32_t)(0x102d67bc)));
  /* 102d3cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3cb5 je 0x102d3cbc */
  if (C.zf) goto L_102d3cbc;
  /* 102d3cb7 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3cb8 call eax */
  call_ind((uint32_t)(EAX), 0x102d3cbau);
  /* 102d3cba mov ebx, eax */
  EBX = (EAX);
L_102d3cbc:;
  /* 102d3cbc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102d3cc0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102d3cc4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102d3cc8 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3cc9 call dword ptr [0x102d67b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d67b4))), 0x102d3ccfu);
L_102d3ccf:;
  /* 102d3ccf pop edi */
  EDI = (pop32());
  /* 102d3cd0 pop esi */
  ESI = (pop32());
  /* 102d3cd1 pop ebx */
  EBX = (pop32());
  /* 102d3cd2 ret  */
  ESPCHK(0x102d3c4eu, _esp0);
  ESP += 4; return;
L_102d3cd3:;
  /* 102d3cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3cd5 jmp 0x102d3ccf */
  goto L_102d3ccf;
}

/* _strncpy @ 0x102d3ce0 (254 bytes, 109 insns) */
void f_102d3ce0(void) {
  FTRACE(0x102d3ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3ce0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102d3ce4 push edi */
  push32((uint32_t)(EDI));
  /* 102d3ce5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102d3ce7 je 0x102d3d63 */
  if (C.zf) goto L_102d3d63;
  /* 102d3ce9 push esi */
  push32((uint32_t)(ESI));
  /* 102d3cea push ebx */
  push32((uint32_t)(EBX));
  /* 102d3ceb mov ebx, ecx */
  EBX = (ECX);
  /* 102d3ced mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 102d3cf1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102d3cf7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 102d3cfb jne 0x102d3d04 */
  if (!C.zf) goto L_102d3d04;
  /* 102d3cfd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3d00 jne 0x102d3d71 */
  if (!C.zf) goto L_102d3d71;
  /* 102d3d02 jmp 0x102d3d25 */
  goto L_102d3d25;
L_102d3d04:;
  /* 102d3d04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d3d07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3d09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d3d0a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3d0b je 0x102d3d32 */
  if (C.zf) goto L_102d3d32;
  /* 102d3d0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d3d0f je 0x102d3d3a */
  if (C.zf) goto L_102d3d3a;
  /* 102d3d11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102d3d17 jne 0x102d3d04 */
  if (!C.zf) goto L_102d3d04;
  /* 102d3d19 mov ebx, ecx */
  EBX = (ECX);
  /* 102d3d1b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3d1e jne 0x102d3d71 */
  if (!C.zf) goto L_102d3d71;
L_102d3d20:;
  /* 102d3d20 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102d3d23 je 0x102d3d32 */
  if (C.zf) goto L_102d3d32;
L_102d3d25:;
  /* 102d3d25 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d3d27 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d3d28 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3d2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d3d2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102d3d2d je 0x102d3d5e */
  if (C.zf) goto L_102d3d5e;
  /* 102d3d2f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102d3d30 jne 0x102d3d25 */
  if (!C.zf) goto L_102d3d25;
L_102d3d32:;
  /* 102d3d32 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102d3d36 pop ebx */
  EBX = (pop32());
  /* 102d3d37 pop esi */
  ESI = (pop32());
  /* 102d3d38 pop edi */
  EDI = (pop32());
  /* 102d3d39 ret  */
  ESPCHK(0x102d3ce0u, _esp0);
  ESP += 4; return;
L_102d3d3a:;
  /* 102d3d3a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102d3d40 je 0x102d3d54 */
  if (C.zf) goto L_102d3d54;
L_102d3d42:;
  /* 102d3d42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3d44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d3d45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3d46 je 0x102d3dd6 */
  if (C.zf) goto L_102d3dd6;
  /* 102d3d4c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102d3d52 jne 0x102d3d42 */
  if (!C.zf) goto L_102d3d42;
L_102d3d54:;
  /* 102d3d54 mov ebx, ecx */
  EBX = (ECX);
  /* 102d3d56 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3d59 jne 0x102d3dc7 */
  if (!C.zf) goto L_102d3dc7;
L_102d3d5b:;
  /* 102d3d5b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3d5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102d3d5e:;
  /* 102d3d5e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102d3d5f jne 0x102d3d5b */
  if (!C.zf) goto L_102d3d5b;
  /* 102d3d61 pop ebx */
  EBX = (pop32());
  /* 102d3d62 pop esi */
  ESI = (pop32());
L_102d3d63:;
  /* 102d3d63 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d3d67 pop edi */
  EDI = (pop32());
  /* 102d3d68 ret  */
  ESPCHK(0x102d3ce0u, _esp0);
  ESP += 4; return;
L_102d3d69:;
  /* 102d3d69 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102d3d6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3d6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3d6f je 0x102d3d20 */
  if (C.zf) goto L_102d3d20;
L_102d3d71:;
  /* 102d3d71 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102d3d76 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102d3d78 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3d7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102d3d7d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3d7f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102d3d81 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3d84 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102d3d89 je 0x102d3d69 */
  if (C.zf) goto L_102d3d69;
  /* 102d3d8b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102d3d8d je 0x102d3dbb */
  if (C.zf) goto L_102d3dbb;
  /* 102d3d8f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102d3d91 je 0x102d3db1 */
  if (C.zf) goto L_102d3db1;
  /* 102d3d93 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102d3d99 je 0x102d3da7 */
  if (C.zf) goto L_102d3da7;
  /* 102d3d9b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102d3da1 jne 0x102d3d69 */
  if (!C.zf) goto L_102d3d69;
  /* 102d3da3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102d3da5 jmp 0x102d3dbf */
  goto L_102d3dbf;
L_102d3da7:;
  /* 102d3da7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102d3dad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102d3daf jmp 0x102d3dbf */
  goto L_102d3dbf;
L_102d3db1:;
  /* 102d3db1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102d3db7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102d3db9 jmp 0x102d3dbf */
  goto L_102d3dbf;
L_102d3dbb:;
  /* 102d3dbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102d3dbd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102d3dbf:;
  /* 102d3dbf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3dc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3dc4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3dc5 je 0x102d3dd1 */
  if (C.zf) goto L_102d3dd1;
L_102d3dc7:;
  /* 102d3dc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102d3dc9:;
  /* 102d3dc9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102d3dcb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3dce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3dcf jne 0x102d3dc9 */
  if (!C.zf) goto L_102d3dc9;
L_102d3dd1:;
  /* 102d3dd1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102d3dd4 jne 0x102d3d5b */
  if (!C.zf) goto L_102d3d5b;
L_102d3dd6:;
  /* 102d3dd6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102d3dda pop ebx */
  EBX = (pop32());
  /* 102d3ddb pop esi */
  ESI = (pop32());
  /* 102d3ddc pop edi */
  EDI = (pop32());
  /* 102d3ddd ret  */
  ESPCHK(0x102d3ce0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102d3de0 (88 bytes, 40 insns) */
void f_102d3de0(void) {
  FTRACE(0x102d3de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3de0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102d3de4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d3de8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102d3dea je 0x102d3e33 */
  if (C.zf) goto L_102d3e33;
  /* 102d3dec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3dee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102d3df2 push edi */
  push32((uint32_t)(EDI));
  /* 102d3df3 mov edi, ecx */
  EDI = (ECX);
  /* 102d3df5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3df8 jb 0x102d3e27 */
  if (C.cf) goto L_102d3e27;
  /* 102d3dfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102d3dfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102d3dff je 0x102d3e09 */
  if (C.zf) goto L_102d3e09;
  /* 102d3e01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102d3e03:;
  /* 102d3e03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3e05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d3e06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d3e07 jne 0x102d3e03 */
  if (!C.zf) goto L_102d3e03;
L_102d3e09:;
  /* 102d3e09 mov ecx, eax */
  ECX = (EAX);
  /* 102d3e0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102d3e0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3e10 mov ecx, eax */
  ECX = (EAX);
  /* 102d3e12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102d3e15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3e17 mov ecx, edx */
  ECX = (EDX);
  /* 102d3e19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102d3e1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d3e1f je 0x102d3e27 */
  if (C.zf) goto L_102d3e27;
  /* 102d3e21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102d3e23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102d3e25 je 0x102d3e2d */
  if (C.zf) goto L_102d3e2d;
L_102d3e27:;
  /* 102d3e27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d3e29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d3e2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102d3e2b jne 0x102d3e27 */
  if (!C.zf) goto L_102d3e27;
L_102d3e2d:;
  /* 102d3e2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d3e31 pop edi */
  EDI = (pop32());
  /* 102d3e32 ret  */
  ESPCHK(0x102d3de0u, _esp0);
  ESP += 4; return;
L_102d3e33:;
  /* 102d3e33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d3e37 ret  */
  ESPCHK(0x102d3de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e38 @ 0x102d3e38 (27 bytes, 13 insns) */
void f_102d3e38(void) {
  FTRACE(0x102d3e38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3e38 mov eax, dword ptr [0x102d67c0] */
  EAX = (r32((uint32_t)(0x102d67c0)));
  /* 102d3e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3e3f je 0x102d3e50 */
  if (C.zf) goto L_102d3e50;
  /* 102d3e41 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102d3e45 call eax */
  call_ind((uint32_t)(EAX), 0x102d3e47u);
  /* 102d3e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3e49 pop ecx */
  ECX = (pop32());
  /* 102d3e4a je 0x102d3e50 */
  if (C.zf) goto L_102d3e50;
  /* 102d3e4c push 1 */
  push32((uint32_t)(0x1u));
  /* 102d3e4e pop eax */
  EAX = (pop32());
  /* 102d3e4f ret  */
  ESPCHK(0x102d3e38u, _esp0);
  ESP += 4; return;
L_102d3e50:;
  /* 102d3e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102d3e52 ret  */
  ESPCHK(0x102d3e38u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e53 @ 0x102d3e53 (511 bytes, 193 insns) */
void f_102d3e53(void) {
  FTRACE(0x102d3e53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d3e53 push ebp */
  push32((uint32_t)(EBP));
  /* 102d3e54 mov ebp, esp */
  EBP = (ESP);
  /* 102d3e56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102d3e58 push 0x102d5470 */
  push32((uint32_t)(0x102d5470u));
  /* 102d3e5d push 0x102d4620 */
  push32((uint32_t)(0x102d4620u));
  /* 102d3e62 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102d3e68 push eax */
  push32((uint32_t)(EAX));
  /* 102d3e69 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102d3e70 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3e73 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3e74 push esi */
  push32((uint32_t)(ESI));
  /* 102d3e75 push edi */
  push32((uint32_t)(EDI));
  /* 102d3e76 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102d3e79 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d3e7b cmp dword ptr [0x102d67e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x102d67e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3e81 jne 0x102d3ec9 */
  if (!C.zf) goto L_102d3ec9;
  /* 102d3e83 push edi */
  push32((uint32_t)(EDI));
  /* 102d3e84 push edi */
  push32((uint32_t)(EDI));
  /* 102d3e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d3e87 pop ebx */
  EBX = (pop32());
  /* 102d3e88 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3e89 push 0x102d5468 */
  push32((uint32_t)(0x102d5468u));
  /* 102d3e8e mov esi, 0x100 */
  ESI = (0x100u);
  /* 102d3e93 push esi */
  push32((uint32_t)(ESI));
  /* 102d3e94 push edi */
  push32((uint32_t)(EDI));
  /* 102d3e95 call dword ptr [0x102d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5014))), 0x102d3e9bu);
  /* 102d3e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3e9d je 0x102d3ea7 */
  if (C.zf) goto L_102d3ea7;
  /* 102d3e9f mov dword ptr [0x102d67e8], ebx */
  w32((uint32_t)(0x102d67e8), (EBX));
  /* 102d3ea5 jmp 0x102d3ec9 */
  goto L_102d3ec9;
L_102d3ea7:;
  /* 102d3ea7 push edi */
  push32((uint32_t)(EDI));
  /* 102d3ea8 push edi */
  push32((uint32_t)(EDI));
  /* 102d3ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3eaa push 0x102d5464 */
  push32((uint32_t)(0x102d5464u));
  /* 102d3eaf push esi */
  push32((uint32_t)(ESI));
  /* 102d3eb0 push edi */
  push32((uint32_t)(EDI));
  /* 102d3eb1 call dword ptr [0x102d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5018))), 0x102d3eb7u);
  /* 102d3eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3eb9 je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d3ebf mov dword ptr [0x102d67e8], 2 */
  w32((uint32_t)(0x102d67e8), (0x2u));
L_102d3ec9:;
  /* 102d3ec9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3ecc jle 0x102d3ede */
  if ((C.zf||C.sf!=C.of)) goto L_102d3ede;
  /* 102d3ece push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102d3ed1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d3ed4 call 0x102d4077 */
  push32(0x102d3ed9u); f_102d4077();
  /* 102d3ed9 pop ecx */
  ECX = (pop32());
  /* 102d3eda pop ecx */
  ECX = (pop32());
  /* 102d3edb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_102d3ede:;
  /* 102d3ede mov eax, dword ptr [0x102d67e8] */
  EAX = (r32((uint32_t)(0x102d67e8)));
  /* 102d3ee3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3ee6 jne 0x102d3f05 */
  if (!C.zf) goto L_102d3f05;
  /* 102d3ee8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102d3eeb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102d3eee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102d3ef1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d3ef4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d3ef7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d3efa call dword ptr [0x102d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5018))), 0x102d3f00u);
  /* 102d3f00 jmp 0x102d3fe3 */
  goto L_102d3fe3;
L_102d3f05:;
  /* 102d3f05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3f08 jne 0x102d3fe1 */
  if (!C.zf) goto L_102d3fe1;
  /* 102d3f0e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3f11 jne 0x102d3f1b */
  if (!C.zf) goto L_102d3f1b;
  /* 102d3f13 mov eax, dword ptr [0x102d67e0] */
  EAX = (r32((uint32_t)(0x102d67e0)));
  /* 102d3f18 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_102d3f1b:;
  /* 102d3f1b push edi */
  push32((uint32_t)(EDI));
  /* 102d3f1c push edi */
  push32((uint32_t)(EDI));
  /* 102d3f1d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102d3f20 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d3f23 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 102d3f26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102d3f28 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d3f2a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102d3f2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d3f2e push eax */
  push32((uint32_t)(EAX));
  /* 102d3f2f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102d3f32 call dword ptr [0x102d501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d501c))), 0x102d3f38u);
  /* 102d3f38 mov ebx, eax */
  EBX = (EAX);
  /* 102d3f3a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 102d3f3d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3f3f je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d3f45 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102d3f48 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 102d3f4b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d3f4e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102d3f50 call 0x102d4700 */
  push32(0x102d3f55u); f_102d4700();
  /* 102d3f55 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102d3f58 mov eax, esp */
  EAX = (ESP);
  /* 102d3f5a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102d3f5d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d3f61 jmp 0x102d3f76 */
  goto L_102d3f76;
  /* 102d3f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d3f65 pop eax */
  EAX = (pop32());
  /* 102d3f66 ret  */
  ESPCHK(0x102d3e53u, _esp0);
  ESP += 4; return;
  /* 102d3f67 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102d3f6a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d3f6c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 102d3f6f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d3f73 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102d3f76:;
  /* 102d3f76 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3f79 je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d3f7b push ebx */
  push32((uint32_t)(EBX));
  /* 102d3f7c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102d3f7f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102d3f82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d3f85 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d3f87 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102d3f8a call dword ptr [0x102d501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d501c))), 0x102d3f90u);
  /* 102d3f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3f92 je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d3f94 push edi */
  push32((uint32_t)(EDI));
  /* 102d3f95 push edi */
  push32((uint32_t)(EDI));
  /* 102d3f96 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3f97 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102d3f9a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d3f9d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d3fa0 call dword ptr [0x102d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5014))), 0x102d3fa6u);
  /* 102d3fa6 mov esi, eax */
  ESI = (EAX);
  /* 102d3fa8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102d3fab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3fad je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d3faf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102d3fb3 je 0x102d3ff5 */
  if (C.zf) goto L_102d3ff5;
  /* 102d3fb5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3fb8 je 0x102d4070 */
  if (C.zf) goto L_102d4070;
  /* 102d3fbe cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d3fc1 jg 0x102d3fe1 */
  if ((!C.zf&&C.sf==C.of)) goto L_102d3fe1;
  /* 102d3fc3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102d3fc6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102d3fc9 push ebx */
  push32((uint32_t)(EBX));
  /* 102d3fca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102d3fcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d3fd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d3fd3 call dword ptr [0x102d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5014))), 0x102d3fd9u);
  /* 102d3fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d3fdb jne 0x102d4070 */
  if (!C.zf) goto L_102d4070;
L_102d3fe1:;
  /* 102d3fe1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102d3fe3:;
  /* 102d3fe3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 102d3fe6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102d3fe9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102d3ff0 pop edi */
  EDI = (pop32());
  /* 102d3ff1 pop esi */
  ESI = (pop32());
  /* 102d3ff2 pop ebx */
  EBX = (pop32());
  /* 102d3ff3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d3ff4 ret  */
  ESPCHK(0x102d3e53u, _esp0);
  ESP += 4; return;
L_102d3ff5:;
  /* 102d3ff5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102d3ffc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 102d3fff add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d4002 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102d4004 call 0x102d4700 */
  push32(0x102d4009u); f_102d4700();
  /* 102d4009 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102d400c mov ebx, esp */
  EBX = (ESP);
  /* 102d400e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 102d4011 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d4015 jmp 0x102d4029 */
  goto L_102d4029;
  /* 102d4017 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d4019 pop eax */
  EAX = (pop32());
  /* 102d401a ret  */
  ESPCHK(0x102d3e53u, _esp0);
  ESP += 4; return;
  /* 102d401b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102d401e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102d4020 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d4022 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d4026 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_102d4029:;
  /* 102d4029 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d402b je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d402d push esi */
  push32((uint32_t)(ESI));
  /* 102d402e push ebx */
  push32((uint32_t)(EBX));
  /* 102d402f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 102d4032 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102d4035 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d4038 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d403b call dword ptr [0x102d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5014))), 0x102d4041u);
  /* 102d4041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d4043 je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
  /* 102d4045 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4048 push edi */
  push32((uint32_t)(EDI));
  /* 102d4049 push edi */
  push32((uint32_t)(EDI));
  /* 102d404a jne 0x102d4050 */
  if (!C.zf) goto L_102d4050;
  /* 102d404c push edi */
  push32((uint32_t)(EDI));
  /* 102d404d push edi */
  push32((uint32_t)(EDI));
  /* 102d404e jmp 0x102d4056 */
  goto L_102d4056;
L_102d4050:;
  /* 102d4050 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102d4053 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_102d4056:;
  /* 102d4056 push esi */
  push32((uint32_t)(ESI));
  /* 102d4057 push ebx */
  push32((uint32_t)(EBX));
  /* 102d4058 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102d405d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102d4060 call dword ptr [0x102d5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5068))), 0x102d4066u);
  /* 102d4066 mov esi, eax */
  ESI = (EAX);
  /* 102d4068 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d406a je 0x102d3fe1 */
  if (C.zf) goto L_102d3fe1;
L_102d4070:;
  /* 102d4070 mov eax, esi */
  EAX = (ESI);
  /* 102d4072 jmp 0x102d3fe3 */
  goto L_102d3fe3;
}

/* FUN_10004077 @ 0x102d4077 (43 bytes, 20 insns) */
void f_102d4077(void) {
  FTRACE(0x102d4077u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d4077 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d407b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102d407f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102d4081 push esi */
  push32((uint32_t)(ESI));
  /* 102d4082 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102d4085 je 0x102d4094 */
  if (C.zf) goto L_102d4094;
L_102d4087:;
  /* 102d4087 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d408a je 0x102d4094 */
  if (C.zf) goto L_102d4094;
  /* 102d408c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d408d mov esi, ecx */
  ESI = (ECX);
  /* 102d408f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102d4090 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102d4092 jne 0x102d4087 */
  if (!C.zf) goto L_102d4087;
L_102d4094:;
  /* 102d4094 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102d4097 pop esi */
  ESI = (pop32());
  /* 102d4098 jne 0x102d409f */
  if (!C.zf) goto L_102d409f;
  /* 102d409a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d409e ret  */
  ESPCHK(0x102d4077u, _esp0);
  ESP += 4; return;
L_102d409f:;
  /* 102d409f mov eax, edx */
  EAX = (EDX);
  /* 102d40a1 ret  */
  ESPCHK(0x102d4077u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a2 @ 0x102d40a2 (318 bytes, 123 insns) */
void f_102d40a2(void) {
  FTRACE(0x102d40a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d40a2 push ebp */
  push32((uint32_t)(EBP));
  /* 102d40a3 mov ebp, esp */
  EBP = (ESP);
  /* 102d40a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102d40a7 push 0x102d5488 */
  push32((uint32_t)(0x102d5488u));
  /* 102d40ac push 0x102d4620 */
  push32((uint32_t)(0x102d4620u));
  /* 102d40b1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102d40b7 push eax */
  push32((uint32_t)(EAX));
  /* 102d40b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102d40bf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d40c2 push ebx */
  push32((uint32_t)(EBX));
  /* 102d40c3 push esi */
  push32((uint32_t)(ESI));
  /* 102d40c4 push edi */
  push32((uint32_t)(EDI));
  /* 102d40c5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102d40c8 mov eax, dword ptr [0x102d67ec] */
  EAX = (r32((uint32_t)(0x102d67ec)));
  /* 102d40cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d40cf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d40d1 jne 0x102d4111 */
  if (!C.zf) goto L_102d4111;
  /* 102d40d3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102d40d6 push eax */
  push32((uint32_t)(EAX));
  /* 102d40d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d40d9 pop esi */
  ESI = (pop32());
  /* 102d40da push esi */
  push32((uint32_t)(ESI));
  /* 102d40db push 0x102d5468 */
  push32((uint32_t)(0x102d5468u));
  /* 102d40e0 push esi */
  push32((uint32_t)(ESI));
  /* 102d40e1 call dword ptr [0x102d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d500c))), 0x102d40e7u);
  /* 102d40e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d40e9 je 0x102d40ef */
  if (C.zf) goto L_102d40ef;
  /* 102d40eb mov eax, esi */
  EAX = (ESI);
  /* 102d40ed jmp 0x102d410c */
  goto L_102d410c;
L_102d40ef:;
  /* 102d40ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102d40f2 push eax */
  push32((uint32_t)(EAX));
  /* 102d40f3 push esi */
  push32((uint32_t)(ESI));
  /* 102d40f4 push 0x102d5464 */
  push32((uint32_t)(0x102d5464u));
  /* 102d40f9 push esi */
  push32((uint32_t)(ESI));
  /* 102d40fa push ebx */
  push32((uint32_t)(EBX));
  /* 102d40fb call dword ptr [0x102d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5010))), 0x102d4101u);
  /* 102d4101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102d4103 je 0x102d41d7 */
  if (C.zf) goto L_102d41d7;
  /* 102d4109 push 2 */
  push32((uint32_t)(0x2u));
  /* 102d410b pop eax */
  EAX = (pop32());
L_102d410c:;
  /* 102d410c mov dword ptr [0x102d67ec], eax */
  w32((uint32_t)(0x102d67ec), (EAX));
L_102d4111:;
  /* 102d4111 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4114 jne 0x102d413a */
  if (!C.zf) goto L_102d413a;
  /* 102d4116 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102d4119 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d411b jne 0x102d4122 */
  if (!C.zf) goto L_102d4122;
  /* 102d411d mov eax, dword ptr [0x102d67d0] */
  EAX = (r32((uint32_t)(0x102d67d0)));
L_102d4122:;
  /* 102d4122 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102d4125 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d4128 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d412b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d412e push eax */
  push32((uint32_t)(EAX));
  /* 102d412f call dword ptr [0x102d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d5010))), 0x102d4135u);
  /* 102d4135 jmp 0x102d41d9 */
  goto L_102d41d9;
L_102d413a:;
  /* 102d413a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d413d jne 0x102d41d7 */
  if (!C.zf) goto L_102d41d7;
  /* 102d4143 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4146 jne 0x102d4150 */
  if (!C.zf) goto L_102d4150;
  /* 102d4148 mov eax, dword ptr [0x102d67e0] */
  EAX = (r32((uint32_t)(0x102d67e0)));
  /* 102d414d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_102d4150:;
  /* 102d4150 push ebx */
  push32((uint32_t)(EBX));
  /* 102d4151 push ebx */
  push32((uint32_t)(EBX));
  /* 102d4152 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d4155 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d4158 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 102d415b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102d415d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d415f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102d4162 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102d4163 push eax */
  push32((uint32_t)(EAX));
  /* 102d4164 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102d4167 call dword ptr [0x102d501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d501c))), 0x102d416du);
  /* 102d416d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102d4170 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4172 je 0x102d41d7 */
  if (C.zf) goto L_102d41d7;
  /* 102d4174 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 102d4177 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 102d417a mov eax, edi */
  EAX = (EDI);
  /* 102d417c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d417f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102d4181 call 0x102d4700 */
  push32(0x102d4186u); f_102d4700();
  /* 102d4186 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102d4189 mov esi, esp */
  ESI = (ESP);
  /* 102d418b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 102d418e push edi */
  push32((uint32_t)(EDI));
  /* 102d418f push ebx */
  push32((uint32_t)(EBX));
  /* 102d4190 push esi */
  push32((uint32_t)(ESI));
  /* 102d4191 call 0x102d3de0 */
  push32(0x102d4196u); f_102d3de0();
  /* 102d4196 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d4199 jmp 0x102d41a6 */
  goto L_102d41a6;
  /* 102d419b push 1 */
  push32((uint32_t)(0x1u));
  /* 102d419d pop eax */
  EAX = (pop32());
  /* 102d419e ret  */
  ESPCHK(0x102d40a2u, _esp0);
  ESP += 4; return;
  /* 102d419f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102d41a2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102d41a4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102d41a6:;
  /* 102d41a6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102d41aa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d41ac je 0x102d41d7 */
  if (C.zf) goto L_102d41d7;
  /* 102d41ae push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 102d41b1 push esi */
  push32((uint32_t)(ESI));
  /* 102d41b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102d41b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102d41b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102d41ba push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102d41bd call dword ptr [0x102d501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d501c))), 0x102d41c3u);
  /* 102d41c3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d41c5 je 0x102d41d7 */
  if (C.zf) goto L_102d41d7;
  /* 102d41c7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102d41ca push eax */
  push32((uint32_t)(EAX));
  /* 102d41cb push esi */
  push32((uint32_t)(ESI));
  /* 102d41cc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d41cf call dword ptr [0x102d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102d500c))), 0x102d41d5u);
  /* 102d41d5 jmp 0x102d41d9 */
  goto L_102d41d9;
L_102d41d7:;
  /* 102d41d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102d41d9:;
  /* 102d41d9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 102d41dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102d41df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102d41e6 pop edi */
  EDI = (pop32());
  /* 102d41e7 pop esi */
  ESI = (pop32());
  /* 102d41e8 pop ebx */
  EBX = (pop32());
  /* 102d41e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d41ea ret  */
  ESPCHK(0x102d40a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x102d41f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_102d41f0(void) {
  FTRACE(0x102d41f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d41f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102d41f1 mov ebp, esp */
  EBP = (ESP);
  /* 102d41f3 push edi */
  push32((uint32_t)(EDI));
  /* 102d41f4 push esi */
  push32((uint32_t)(ESI));
  /* 102d41f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102d41f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102d41fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102d41fe mov eax, ecx */
  EAX = (ECX);
  /* 102d4200 mov edx, ecx */
  EDX = (ECX);
  /* 102d4202 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d4204 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4206 jbe 0x102d4210 */
  if ((C.cf||C.zf)) goto L_102d4210;
  /* 102d4208 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d420a jb 0x102d4388 */
  if (C.cf) goto L_102d4388;
L_102d4210:;
  /* 102d4210 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102d4216 jne 0x102d422c */
  if (!C.zf) goto L_102d422c;
  /* 102d4218 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d421b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102d421e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4221 jb 0x102d424c */
  if (C.cf) goto L_102d424c;
  /* 102d4223 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d4225 jmp dword ptr [edx*4 + 0x102d4338] */
  switch (EDX) {
    case 0: goto L_102d4348;
    case 1: goto L_102d4350;
    case 2: goto L_102d435c;
    case 3: goto L_102d4370;
    default: x86_unimpl("switch@0x102d4225 out of table"); return;
  }
L_102d422c:;
  /* 102d422c mov eax, edi */
  EAX = (EDI);
  /* 102d422e mov edx, 3 */
  EDX = (0x3u);
  /* 102d4233 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d4236 jb 0x102d4244 */
  if (C.cf) goto L_102d4244;
  /* 102d4238 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102d423b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102d423d jmp dword ptr [eax*4 + 0x102d4250] */
  switch (EAX) {
    case 1: goto L_102d4260;
    case 2: goto L_102d428c;
    case 3: goto L_102d42b0;
    default: x86_unimpl("switch@0x102d423d out of table"); return;
  }
L_102d4244:;
  /* 102d4244 jmp dword ptr [ecx*4 + 0x102d4348] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102d4348)))); return;
  /* 102d424b nop  */
  /* nop */
L_102d424c:;
  /* 102d424c jmp dword ptr [ecx*4 + 0x102d42cc] */
  switch (ECX) {
    case 0: goto L_102d432f;
    case 1: goto L_102d431c;
    case 2: goto L_102d4314;
    case 3: goto L_102d430c;
    case 4: goto L_102d4304;
    case 5: goto L_102d42fc;
    case 6: goto L_102d42f4;
    case 7: goto L_102d42ec;
    default: x86_unimpl("switch@0x102d424c out of table"); return;
  }
  /* 102d4253 nop  */
  /* nop */
L_102d4260:;
  /* 102d4260 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d4262 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d4264 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d4266 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d4269 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d426c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d426f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d4272 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d4275 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d4278 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d427b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d427e jb 0x102d424c */
  if (C.cf) goto L_102d424c;
  /* 102d4280 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d4282 jmp dword ptr [edx*4 + 0x102d4338] */
  switch (EDX) {
    case 0: goto L_102d4348;
    case 1: goto L_102d4350;
    case 2: goto L_102d435c;
    case 3: goto L_102d4370;
    default: x86_unimpl("switch@0x102d4282 out of table"); return;
  }
  /* 102d4289 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d428c:;
  /* 102d428c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d428e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d4290 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d4292 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d4295 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d4298 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d429b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d429e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d42a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d42a4 jb 0x102d424c */
  if (C.cf) goto L_102d424c;
  /* 102d42a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d42a8 jmp dword ptr [edx*4 + 0x102d4338] */
  switch (EDX) {
    case 0: goto L_102d4348;
    case 1: goto L_102d4350;
    case 2: goto L_102d435c;
    case 3: goto L_102d4370;
    default: x86_unimpl("switch@0x102d42a8 out of table"); return;
  }
  /* 102d42af nop  */
  /* nop */
L_102d42b0:;
  /* 102d42b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d42b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d42b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d42b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102d42b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d42ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102d42bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d42be jb 0x102d424c */
  if (C.cf) goto L_102d424c;
  /* 102d42c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d42c2 jmp dword ptr [edx*4 + 0x102d4338] */
  switch (EDX) {
    case 0: goto L_102d4348;
    case 1: goto L_102d4350;
    case 2: goto L_102d435c;
    case 3: goto L_102d4370;
    default: x86_unimpl("switch@0x102d42c2 out of table"); return;
  }
  /* 102d42c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d42ec:;
  /* 102d42ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102d42f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102d42f4:;
  /* 102d42f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102d42f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102d42fc:;
  /* 102d42fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102d4300 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102d4304:;
  /* 102d4304 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102d4308 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102d430c:;
  /* 102d430c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102d4310 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102d4314:;
  /* 102d4314 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102d4318 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102d431c:;
  /* 102d431c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102d4320 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102d4324 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102d432b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d432d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102d432f:;
  /* 102d432f jmp dword ptr [edx*4 + 0x102d4338] */
  switch (EDX) {
    case 0: goto L_102d4348;
    case 1: goto L_102d4350;
    case 2: goto L_102d435c;
    case 3: goto L_102d4370;
    default: x86_unimpl("switch@0x102d432f out of table"); return;
  }
  /* 102d4336 mov edi, edi */
  EDI = (EDI);
L_102d4348:;
  /* 102d4348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d434b pop esi */
  ESI = (pop32());
  /* 102d434c pop edi */
  EDI = (pop32());
  /* 102d434d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d434e ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d434f nop  */
  /* nop */
L_102d4350:;
  /* 102d4350 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d4352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d4354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d4357 pop esi */
  ESI = (pop32());
  /* 102d4358 pop edi */
  EDI = (pop32());
  /* 102d4359 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d435a ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d435b nop  */
  /* nop */
L_102d435c:;
  /* 102d435c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d435e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d4360 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d4363 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d4366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d4369 pop esi */
  ESI = (pop32());
  /* 102d436a pop edi */
  EDI = (pop32());
  /* 102d436b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d436c ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d436d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d4370:;
  /* 102d4370 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102d4372 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102d4374 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d4377 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d437a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d437d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d4380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d4383 pop esi */
  ESI = (pop32());
  /* 102d4384 pop edi */
  EDI = (pop32());
  /* 102d4385 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d4386 ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d4387 nop  */
  /* nop */
L_102d4388:;
  /* 102d4388 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102d438c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102d4390 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102d4396 jne 0x102d43bc */
  if (!C.zf) goto L_102d43bc;
  /* 102d4398 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d439b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102d439e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d43a1 jb 0x102d43b0 */
  if (C.cf) goto L_102d43b0;
  /* 102d43a3 std  */
  C.df=1;
  /* 102d43a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d43a6 cld  */
  C.df=0;
  /* 102d43a7 jmp dword ptr [edx*4 + 0x102d44d0] */
  switch (EDX) {
    case 0: goto L_102d44e0;
    case 1: goto L_102d44e8;
    case 2: goto L_102d44f8;
    case 3: goto L_102d450c;
    default: x86_unimpl("switch@0x102d43a7 out of table"); return;
  }
  /* 102d43ae mov edi, edi */
  EDI = (EDI);
L_102d43b0:;
  /* 102d43b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102d43b2 jmp dword ptr [ecx*4 + 0x102d4480] */
  switch (ECX) {
    case 0: goto L_102d44c7;
    default: x86_unimpl("switch@0x102d43b2 out of table"); return;
  }
  /* 102d43b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d43bc:;
  /* 102d43bc mov eax, edi */
  EAX = (EDI);
  /* 102d43be mov edx, 3 */
  EDX = (0x3u);
  /* 102d43c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d43c6 jb 0x102d43d4 */
  if (C.cf) goto L_102d43d4;
  /* 102d43c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102d43cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d43cd jmp dword ptr [eax*4 + 0x102d43d8] */
  switch (EAX) {
    case 1: goto L_102d43e8;
    case 2: goto L_102d4408;
    case 3: goto L_102d4430;
    default: x86_unimpl("switch@0x102d43cd out of table"); return;
  }
L_102d43d4:;
  /* 102d43d4 jmp dword ptr [ecx*4 + 0x102d44d0] */
  switch (ECX) {
    case 0: goto L_102d44e0;
    case 1: goto L_102d44e8;
    case 2: goto L_102d44f8;
    case 3: goto L_102d450c;
    default: x86_unimpl("switch@0x102d43d4 out of table"); return;
  }
  /* 102d43db nop  */
  /* nop */
L_102d43e8:;
  /* 102d43e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d43eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d43ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d43f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102d43f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d43f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102d43f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d43f8 jb 0x102d43b0 */
  if (C.cf) goto L_102d43b0;
  /* 102d43fa std  */
  C.df=1;
  /* 102d43fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d43fd cld  */
  C.df=0;
  /* 102d43fe jmp dword ptr [edx*4 + 0x102d44d0] */
  switch (EDX) {
    case 0: goto L_102d44e0;
    case 1: goto L_102d44e8;
    case 2: goto L_102d44f8;
    case 3: goto L_102d450c;
    default: x86_unimpl("switch@0x102d43fe out of table"); return;
  }
  /* 102d4405 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d4408:;
  /* 102d4408 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d440b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d440d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d4410 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d4413 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d4416 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d4419 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d441c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d441f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4422 jb 0x102d43b0 */
  if (C.cf) goto L_102d43b0;
  /* 102d4424 std  */
  C.df=1;
  /* 102d4425 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d4427 cld  */
  C.df=0;
  /* 102d4428 jmp dword ptr [edx*4 + 0x102d44d0] */
  switch (EDX) {
    case 0: goto L_102d44e0;
    case 1: goto L_102d44e8;
    case 2: goto L_102d44f8;
    case 3: goto L_102d450c;
    default: x86_unimpl("switch@0x102d4428 out of table"); return;
  }
  /* 102d442f nop  */
  /* nop */
L_102d4430:;
  /* 102d4430 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d4433 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102d4435 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d4438 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d443b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d443e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d4441 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102d4444 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d4447 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d444a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d444d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4450 jb 0x102d43b0 */
  if (C.cf) goto L_102d43b0;
  /* 102d4456 std  */
  C.df=1;
  /* 102d4457 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102d4459 cld  */
  C.df=0;
  /* 102d445a jmp dword ptr [edx*4 + 0x102d44d0] */
  switch (EDX) {
    case 0: goto L_102d44e0;
    case 1: goto L_102d44e8;
    case 2: goto L_102d44f8;
    case 3: goto L_102d450c;
    default: x86_unimpl("switch@0x102d445a out of table"); return;
  }
  /* 102d4461 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102d4464 test byte ptr [ebp + ebp + 0x10], al */
  { uint32_t _r=(r8((uint32_t)(EBP + EBP*1 + 0x10)))&(AL); fl_logic(_r,8); }
  /* 102d4468 mov word ptr [ebp + ebp + 0x10], es */
  w16((uint32_t)(EBP + EBP*1 + 0x10), (C.seg_es));
  /* 102d446c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 102d446d inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 102d446e sub eax, 0x2d449c10 */
  { uint32_t _a=(EAX),_b=(0x2d449c10u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d4473 adc byte ptr [esp + eax*2 + 0x44ac102d], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2 + 0x44ac102d))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2 + 0x44ac102d), (_r)); fl_add(_a,_b,_r,8); }
  /* 102d447a sub eax, 0x2d44b410 */
  { uint32_t _a=(EAX),_b=(0x2d44b410u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d4484 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102d4488 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102d448c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102d4490 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102d4494 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102d4498 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102d449c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102d44a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102d44a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102d44a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102d44ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102d44b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102d44b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102d44b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102d44bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102d44c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102d44c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102d44c7:;
  /* 102d44c7 jmp dword ptr [edx*4 + 0x102d44d0] */
  switch (EDX) {
    case 0: goto L_102d44e0;
    case 1: goto L_102d44e8;
    case 2: goto L_102d44f8;
    case 3: goto L_102d450c;
    default: x86_unimpl("switch@0x102d44c7 out of table"); return;
  }
  /* 102d44ce mov edi, edi */
  EDI = (EDI);
L_102d44e0:;
  /* 102d44e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d44e3 pop esi */
  ESI = (pop32());
  /* 102d44e4 pop edi */
  EDI = (pop32());
  /* 102d44e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d44e6 ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d44e7 nop  */
  /* nop */
L_102d44e8:;
  /* 102d44e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d44eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d44ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d44f1 pop esi */
  ESI = (pop32());
  /* 102d44f2 pop edi */
  EDI = (pop32());
  /* 102d44f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d44f4 ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d44f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102d44f8:;
  /* 102d44f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d44fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d44fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d4501 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d4504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d4507 pop esi */
  ESI = (pop32());
  /* 102d4508 pop edi */
  EDI = (pop32());
  /* 102d4509 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d450a ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
  /* 102d450b nop  */
  /* nop */
L_102d450c:;
  /* 102d450c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102d450f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102d4512 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102d4515 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102d4518 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102d451b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102d451e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d4521 pop esi */
  ESI = (pop32());
  /* 102d4522 pop edi */
  EDI = (pop32());
  /* 102d4523 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102d4524 ret  */
  ESPCHK(0x102d41f0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x102d4528 (32 bytes, 18 insns) */
void f_102d4528(void) {
  FTRACE(0x102d4528u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d4528 push ebp */
  push32((uint32_t)(EBP));
  /* 102d4529 mov ebp, esp */
  EBP = (ESP);
  /* 102d452b push ebx */
  push32((uint32_t)(EBX));
  /* 102d452c push esi */
  push32((uint32_t)(ESI));
  /* 102d452d push edi */
  push32((uint32_t)(EDI));
  /* 102d452e push ebp */
  push32((uint32_t)(EBP));
  /* 102d452f push 0 */
  push32((uint32_t)(0x0u));
  /* 102d4531 push 0 */
  push32((uint32_t)(0x0u));
  /* 102d4533 push 0x102d4540 */
  push32((uint32_t)(0x102d4540u));
  /* 102d4538 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102d453b call 0x102d4730 */
  push32(0x102d4540u); f_102d4730();
  /* 102d4540 pop ebp */
  EBP = (pop32());
  /* 102d4541 pop edi */
  EDI = (pop32());
  /* 102d4542 pop esi */
  ESI = (pop32());
  /* 102d4543 pop ebx */
  EBX = (pop32());
  /* 102d4544 mov esp, ebp */
  ESP = (EBP);
  /* 102d4546 pop ebp */
  EBP = (pop32());
  /* 102d4547 ret  */
  ESPCHK(0x102d4528u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x102d456a (104 bytes, 33 insns) */
void f_102d456a(void) {
  FTRACE(0x102d456au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d456a push ebx */
  push32((uint32_t)(EBX));
  /* 102d456b push esi */
  push32((uint32_t)(ESI));
  /* 102d456c push edi */
  push32((uint32_t)(EDI));
  /* 102d456d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102d4571 push eax */
  push32((uint32_t)(EAX));
  /* 102d4572 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 102d4574 push 0x102d4548 */
  push32((uint32_t)(0x102d4548u));
  /* 102d4579 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 102d4580 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_102d4587:;
  /* 102d4587 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102d458b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 102d458e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 102d4591 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4594 je 0x102d45c4 */
  if (C.zf) goto L_102d45c4;
  /* 102d4596 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d459a je 0x102d45c4 */
  if (C.zf) goto L_102d45c4;
  /* 102d459c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 102d459f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 102d45a2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 102d45a6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 102d45a9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d45ae jne 0x102d45c2 */
  if (!C.zf) goto L_102d45c2;
  /* 102d45b0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102d45b5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 102d45b9 call 0x102d45fe */
  push32(0x102d45beu); f_102d45fe();
  /* 102d45be call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x102d45c2u);
L_102d45c2:;
  /* 102d45c2 jmp 0x102d4587 */
  goto L_102d4587;
L_102d45c4:;
  /* 102d45c4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 102d45cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d45ce pop edi */
  EDI = (pop32());
  /* 102d45cf pop esi */
  ESI = (pop32());
  /* 102d45d0 pop ebx */
  EBX = (pop32());
  /* 102d45d1 ret  */
  ESPCHK(0x102d456au, _esp0);
  ESP += 4; return;
}

/* FUN_100045fe @ 0x102d45fe (24 bytes, 10 insns) */
void f_102d45fe(void) {
  FTRACE(0x102d45feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d45fe push ebx */
  push32((uint32_t)(EBX));
  /* 102d45ff push ecx */
  push32((uint32_t)(ECX));
  /* 102d4600 mov ebx, 0x102d64b0 */
  EBX = (0x102d64b0u);
  /* 102d4605 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102d4608 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 102d460b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 102d460e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 102d4611 pop ecx */
  ECX = (pop32());
  /* 102d4612 pop ebx */
  EBX = (pop32());
  /* 102d4613 ret 4 */
  ESPCHK(0x102d45feu, _esp0);
  ESP += 8; return;
}

/* FUN_100046dd @ 0x102d46dd (27 bytes, 11 insns) */
void f_102d46dd(void) {
  FTRACE(0x102d46ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d46dd push ebp */
  push32((uint32_t)(EBP));
  /* 102d46de mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102d46e2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 102d46e4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 102d46e7 push eax */
  push32((uint32_t)(EAX));
  /* 102d46e8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 102d46eb push eax */
  push32((uint32_t)(EAX));
  /* 102d46ec call 0x102d456a */
  push32(0x102d46f1u); f_102d456a();
  /* 102d46f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102d46f4 pop ebp */
  EBP = (pop32());
  /* 102d46f5 ret 4 */
  ESPCHK(0x102d46ddu, _esp0);
  ESP += 8; return;
}

/* FUN_10004700 @ 0x102d4700 (47 bytes, 17 insns) */
void f_102d4700(void) {
  FTRACE(0x102d4700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d4700 push ecx */
  push32((uint32_t)(ECX));
  /* 102d4701 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d4706 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 102d470a jb 0x102d4720 */
  if (C.cf) goto L_102d4720;
L_102d470c:;
  /* 102d470c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d4712 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d4717 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102d4719 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102d471e jae 0x102d470c */
  if (!C.cf) goto L_102d470c;
L_102d4720:;
  /* 102d4720 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102d4722 mov eax, esp */
  EAX = (ESP);
  /* 102d4724 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102d4726 mov esp, ecx */
  ESP = (ECX);
  /* 102d4728 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102d472a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 102d472d push eax */
  push32((uint32_t)(EAX));
  /* 102d472e ret  */
  ESPCHK(0x102d4700u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x102d4730 (6 bytes, 1 insns) */
void f_102d4730(void) {
  FTRACE(0x102d4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102d4730 jmp dword ptr [0x102d5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102d5008)))); return;
}

