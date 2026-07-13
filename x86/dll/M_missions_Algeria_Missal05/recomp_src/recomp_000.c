#include "recomp.h"

/* FUN_10001000 @ 0x102c1000 (20 bytes, 6 insns) */
void f_102c1000(void) {
  FTRACE(0x102c1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102c1005 jne 0x102c100c */
  if (!C.zf) goto L_102c100c;
  /* 102c1007 call 0x102c1020 */
  push32(0x102c100cu); f_102c1020();
L_102c100c:;
  /* 102c100c mov eax, 1 */
  EAX = (0x1u);
  /* 102c1011 ret 0xc */
  ESPCHK(0x102c1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x102c1020 (316 bytes, 88 insns) */
void f_102c1020(void) {
  FTRACE(0x102c1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1020 push esi */
  push32((uint32_t)(ESI));
  /* 102c1021 mov esi, dword ptr [0x102c50f4] */
  ESI = (r32((uint32_t)(0x102c50f4)));
  /* 102c1027 push 0x102c60a0 */
  push32((uint32_t)(0x102c60a0u));
  /* 102c102c push 0x102c6418 */
  push32((uint32_t)(0x102c6418u));
  /* 102c1031 call esi */
  call_ind((uint32_t)(ESI), 0x102c1033u);
  /* 102c1033 push 0x102c609c */
  push32((uint32_t)(0x102c609cu));
  /* 102c1038 push 0x102c6420 */
  push32((uint32_t)(0x102c6420u));
  /* 102c103d call esi */
  call_ind((uint32_t)(ESI), 0x102c103fu);
  /* 102c103f push 0x102c6098 */
  push32((uint32_t)(0x102c6098u));
  /* 102c1044 push 0x102c6428 */
  push32((uint32_t)(0x102c6428u));
  /* 102c1049 call esi */
  call_ind((uint32_t)(ESI), 0x102c104bu);
  /* 102c104b push 0x102c6094 */
  push32((uint32_t)(0x102c6094u));
  /* 102c1050 push 0x102c6430 */
  push32((uint32_t)(0x102c6430u));
  /* 102c1055 call esi */
  call_ind((uint32_t)(ESI), 0x102c1057u);
  /* 102c1057 push 0x102c6090 */
  push32((uint32_t)(0x102c6090u));
  /* 102c105c push 0x102c6438 */
  push32((uint32_t)(0x102c6438u));
  /* 102c1061 call esi */
  call_ind((uint32_t)(ESI), 0x102c1063u);
  /* 102c1063 push 0x102c608c */
  push32((uint32_t)(0x102c608cu));
  /* 102c1068 push 0x102c6440 */
  push32((uint32_t)(0x102c6440u));
  /* 102c106d call esi */
  call_ind((uint32_t)(ESI), 0x102c106fu);
  /* 102c106f mov esi, dword ptr [0x102c5104] */
  ESI = (r32((uint32_t)(0x102c5104)));
  /* 102c1075 push 0x102c6088 */
  push32((uint32_t)(0x102c6088u));
  /* 102c107a push 0x102c6458 */
  push32((uint32_t)(0x102c6458u));
  /* 102c107f call esi */
  call_ind((uint32_t)(ESI), 0x102c1081u);
  /* 102c1081 push 0x102c6084 */
  push32((uint32_t)(0x102c6084u));
  /* 102c1086 push 0x102c6460 */
  push32((uint32_t)(0x102c6460u));
  /* 102c108b call esi */
  call_ind((uint32_t)(ESI), 0x102c108du);
  /* 102c108d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1090 push 0x102c6080 */
  push32((uint32_t)(0x102c6080u));
  /* 102c1095 push 0x102c6468 */
  push32((uint32_t)(0x102c6468u));
  /* 102c109a call esi */
  call_ind((uint32_t)(ESI), 0x102c109cu);
  /* 102c109c push 0x102c607c */
  push32((uint32_t)(0x102c607cu));
  /* 102c10a1 push 0x102c6470 */
  push32((uint32_t)(0x102c6470u));
  /* 102c10a6 call esi */
  call_ind((uint32_t)(ESI), 0x102c10a8u);
  /* 102c10a8 push 0x102c6078 */
  push32((uint32_t)(0x102c6078u));
  /* 102c10ad push 0x102c6478 */
  push32((uint32_t)(0x102c6478u));
  /* 102c10b2 call esi */
  call_ind((uint32_t)(ESI), 0x102c10b4u);
  /* 102c10b4 push 0x102c6074 */
  push32((uint32_t)(0x102c6074u));
  /* 102c10b9 push 0x102c6480 */
  push32((uint32_t)(0x102c6480u));
  /* 102c10be call esi */
  call_ind((uint32_t)(ESI), 0x102c10c0u);
  /* 102c10c0 push 0x102c6070 */
  push32((uint32_t)(0x102c6070u));
  /* 102c10c5 push 0x102c6488 */
  push32((uint32_t)(0x102c6488u));
  /* 102c10ca call esi */
  call_ind((uint32_t)(ESI), 0x102c10ccu);
  /* 102c10cc mov esi, dword ptr [0x102c5108] */
  ESI = (r32((uint32_t)(0x102c5108)));
  /* 102c10d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 102c10d4 push 0x102c6448 */
  push32((uint32_t)(0x102c6448u));
  /* 102c10d9 call esi */
  call_ind((uint32_t)(ESI), 0x102c10dbu);
  /* 102c10db push 8 */
  push32((uint32_t)(0x8u));
  /* 102c10dd push 0x102c6450 */
  push32((uint32_t)(0x102c6450u));
  /* 102c10e2 call esi */
  call_ind((uint32_t)(ESI), 0x102c10e4u);
  /* 102c10e4 mov esi, dword ptr [0x102c5100] */
  ESI = (r32((uint32_t)(0x102c5100)));
  /* 102c10ea push 0x102c6060 */
  push32((uint32_t)(0x102c6060u));
  /* 102c10ef push 0x102c6498 */
  push32((uint32_t)(0x102c6498u));
  /* 102c10f4 call esi */
  call_ind((uint32_t)(ESI), 0x102c10f6u);
  /* 102c10f6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c10f9 push 0x102c6050 */
  push32((uint32_t)(0x102c6050u));
  /* 102c10fe push 0x102c64a8 */
  push32((uint32_t)(0x102c64a8u));
  /* 102c1103 call esi */
  call_ind((uint32_t)(ESI), 0x102c1105u);
  /* 102c1105 push 0x102c6048 */
  push32((uint32_t)(0x102c6048u));
  /* 102c110a push 0x102c64a0 */
  push32((uint32_t)(0x102c64a0u));
  /* 102c110f call dword ptr [0x102c5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5110))), 0x102c1115u);
  /* 102c1115 mov esi, dword ptr [0x102c5114] */
  ESI = (r32((uint32_t)(0x102c5114)));
  /* 102c111b push 1 */
  push32((uint32_t)(0x1u));
  /* 102c111d push 0 */
  push32((uint32_t)(0x0u));
  /* 102c111f call esi */
  call_ind((uint32_t)(ESI), 0x102c1121u);
  /* 102c1121 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 102c1123 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1125 call esi */
  call_ind((uint32_t)(ESI), 0x102c1127u);
  /* 102c1127 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 102c1129 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c112b call esi */
  call_ind((uint32_t)(ESI), 0x102c112du);
  /* 102c112d push 0x2a */
  push32((uint32_t)(0x2au));
  /* 102c112f push 5 */
  push32((uint32_t)(0x5u));
  /* 102c1131 call esi */
  call_ind((uint32_t)(ESI), 0x102c1133u);
  /* 102c1133 mov esi, dword ptr [0x102c510c] */
  ESI = (r32((uint32_t)(0x102c510c)));
  /* 102c1139 push 0x102c6040 */
  push32((uint32_t)(0x102c6040u));
  /* 102c113e push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1140 call esi */
  call_ind((uint32_t)(ESI), 0x102c1142u);
  /* 102c1142 push 0x102c6038 */
  push32((uint32_t)(0x102c6038u));
  /* 102c1147 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1149 call esi */
  call_ind((uint32_t)(ESI), 0x102c114bu);
  /* 102c114b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c114e push 0x102c6030 */
  push32((uint32_t)(0x102c6030u));
  /* 102c1153 push 5 */
  push32((uint32_t)(0x5u));
  /* 102c1155 call esi */
  call_ind((uint32_t)(ESI), 0x102c1157u);
  /* 102c1157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c115a pop esi */
  ESI = (pop32());
  /* 102c115b ret  */
  ESPCHK(0x102c1020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x102c1160 (1089 bytes, 367 insns) */
void f_102c1160(void) {
  FTRACE(0x102c1160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1160 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1161 push ebp */
  push32((uint32_t)(EBP));
  /* 102c1162 push esi */
  push32((uint32_t)(ESI));
  /* 102c1163 push edi */
  push32((uint32_t)(EDI));
  /* 102c1164 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102c1166 call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c116cu);
  /* 102c116c mov edi, dword ptr [0x102c50b0] */
  EDI = (r32((uint32_t)(0x102c50b0)));
  /* 102c1172 mov ebp, dword ptr [0x102c50bc] */
  EBP = (r32((uint32_t)(0x102c50bc)));
  /* 102c1178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c117b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c117d je 0x102c136e */
  if (C.zf) goto L_102c136e;
  /* 102c1183 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1185 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102c1187 call dword ptr [0x102c50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50c0))), 0x102c118du);
  /* 102c118d push 0 */
  push32((uint32_t)(0x0u));
  /* 102c118f push 0x102c6458 */
  push32((uint32_t)(0x102c6458u));
  /* 102c1194 push 5 */
  push32((uint32_t)(0x5u));
  /* 102c1196 push 0x102c6498 */
  push32((uint32_t)(0x102c6498u));
  /* 102c119b push 0x102c64a0 */
  push32((uint32_t)(0x102c64a0u));
  /* 102c11a0 push 0x102c6448 */
  push32((uint32_t)(0x102c6448u));
  /* 102c11a5 call dword ptr [0x102c50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b8))), 0x102c11abu);
  /* 102c11ab push 0 */
  push32((uint32_t)(0x0u));
  /* 102c11ad call edi */
  call_ind((uint32_t)(EDI), 0x102c11afu);
  /* 102c11af mov ecx, 0xc */
  ECX = (0xcu);
  /* 102c11b4 mov esi, dword ptr [0x102c50c8] */
  ESI = (r32((uint32_t)(0x102c50c8)));
  /* 102c11ba sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c11bc lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102c11bf lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c11c2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c11c5 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102c11c8 push eax */
  push32((uint32_t)(EAX));
  /* 102c11c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c11cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102c11cd call esi */
  call_ind((uint32_t)(ESI), 0x102c11cfu);
  /* 102c11cf push 0 */
  push32((uint32_t)(0x0u));
  /* 102c11d1 call edi */
  call_ind((uint32_t)(EDI), 0x102c11d3u);
  /* 102c11d3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 102c11d8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c11da lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102c11dd lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c11e0 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102c11e3 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c11e6 push ecx */
  push32((uint32_t)(ECX));
  /* 102c11e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c11e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c11eb call esi */
  call_ind((uint32_t)(ESI), 0x102c11edu);
  /* 102c11ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c11f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c11f2 call edi */
  call_ind((uint32_t)(EDI), 0x102c11f4u);
  /* 102c11f4 mov ecx, 0xc */
  ECX = (0xcu);
  /* 102c11f9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c11fb lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102c11fe lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c1201 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102c1204 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102c1207 push edx */
  push32((uint32_t)(EDX));
  /* 102c1208 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c120a push 0 */
  push32((uint32_t)(0x0u));
  /* 102c120c call esi */
  call_ind((uint32_t)(ESI), 0x102c120eu);
  /* 102c120e push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1210 call edi */
  call_ind((uint32_t)(EDI), 0x102c1212u);
  /* 102c1212 mov ecx, 0xc */
  ECX = (0xcu);
  /* 102c1217 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1219 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102c121c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c121f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c1222 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102c1225 push eax */
  push32((uint32_t)(EAX));
  /* 102c1226 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c1228 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c122a call esi */
  call_ind((uint32_t)(ESI), 0x102c122cu);
  /* 102c122c push 0 */
  push32((uint32_t)(0x0u));
  /* 102c122e call edi */
  call_ind((uint32_t)(EDI), 0x102c1230u);
  /* 102c1230 mov ecx, 0xc */
  ECX = (0xcu);
  /* 102c1235 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1237 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102c123a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c123d lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102c1240 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c1243 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1244 push 5 */
  push32((uint32_t)(0x5u));
  /* 102c1246 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1248 call esi */
  call_ind((uint32_t)(ESI), 0x102c124au);
  /* 102c124a push 0 */
  push32((uint32_t)(0x0u));
  /* 102c124c call edi */
  call_ind((uint32_t)(EDI), 0x102c124eu);
  /* 102c124e mov ecx, 0xc */
  ECX = (0xcu);
  /* 102c1253 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1255 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102c1258 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c125b lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102c125e shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102c1261 push edx */
  push32((uint32_t)(EDX));
  /* 102c1262 push 4 */
  push32((uint32_t)(0x4u));
  /* 102c1264 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1266 call esi */
  call_ind((uint32_t)(ESI), 0x102c1268u);
  /* 102c1268 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c126b push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102c1270 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1272 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1274 call esi */
  call_ind((uint32_t)(ESI), 0x102c1276u);
  /* 102c1276 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102c127b push 1 */
  push32((uint32_t)(0x1u));
  /* 102c127d push 3 */
  push32((uint32_t)(0x3u));
  /* 102c127f call esi */
  call_ind((uint32_t)(ESI), 0x102c1281u);
  /* 102c1281 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102c1286 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1288 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c128a call esi */
  call_ind((uint32_t)(ESI), 0x102c128cu);
  /* 102c128c push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102c1291 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c1293 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1295 call esi */
  call_ind((uint32_t)(ESI), 0x102c1297u);
  /* 102c1297 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102c129c push 5 */
  push32((uint32_t)(0x5u));
  /* 102c129e push 3 */
  push32((uint32_t)(0x3u));
  /* 102c12a0 call esi */
  call_ind((uint32_t)(ESI), 0x102c12a2u);
  /* 102c12a2 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102c12a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102c12a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c12ab call esi */
  call_ind((uint32_t)(ESI), 0x102c12adu);
  /* 102c12ad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c12b0 push 0x102c60dc */
  push32((uint32_t)(0x102c60dcu));
  /* 102c12b5 call dword ptr [0x102c50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50cc))), 0x102c12bbu);
  /* 102c12bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102c12bd push 0x102c6420 */
  push32((uint32_t)(0x102c6420u));
  /* 102c12c2 call ebp */
  call_ind((uint32_t)(EBP), 0x102c12c4u);
  /* 102c12c4 mov ebx, dword ptr [0x102c50c4] */
  EBX = (r32((uint32_t)(0x102c50c4)));
  /* 102c12ca push 0 */
  push32((uint32_t)(0x0u));
  /* 102c12cc push 0x102c6460 */
  push32((uint32_t)(0x102c6460u));
  /* 102c12d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c12d3 call ebx */
  call_ind((uint32_t)(EBX), 0x102c12d5u);
  /* 102c12d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c12d7 push 0x102c6428 */
  push32((uint32_t)(0x102c6428u));
  /* 102c12dc call ebp */
  call_ind((uint32_t)(EBP), 0x102c12deu);
  /* 102c12de push 0 */
  push32((uint32_t)(0x0u));
  /* 102c12e0 push 0x102c6468 */
  push32((uint32_t)(0x102c6468u));
  /* 102c12e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c12e7 call ebx */
  call_ind((uint32_t)(EBX), 0x102c12e9u);
  /* 102c12e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c12eb push 0x102c6430 */
  push32((uint32_t)(0x102c6430u));
  /* 102c12f0 call ebp */
  call_ind((uint32_t)(EBP), 0x102c12f2u);
  /* 102c12f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c12f4 push 0x102c6470 */
  push32((uint32_t)(0x102c6470u));
  /* 102c12f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c12fb call ebx */
  call_ind((uint32_t)(EBX), 0x102c12fdu);
  /* 102c12fd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1300 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1302 push 0x102c6438 */
  push32((uint32_t)(0x102c6438u));
  /* 102c1307 call ebp */
  call_ind((uint32_t)(EBP), 0x102c1309u);
  /* 102c1309 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c130b push 0x102c6478 */
  push32((uint32_t)(0x102c6478u));
  /* 102c1310 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1312 call ebx */
  call_ind((uint32_t)(EBX), 0x102c1314u);
  /* 102c1314 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1316 call edi */
  call_ind((uint32_t)(EDI), 0x102c1318u);
  /* 102c1318 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c131b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c131d jle 0x102c133c */
  if ((C.zf||C.sf!=C.of)) goto L_102c133c;
  /* 102c131f push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1321 call edi */
  call_ind((uint32_t)(EDI), 0x102c1323u);
  /* 102c1323 push eax */
  push32((uint32_t)(EAX));
  /* 102c1324 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1326 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1328 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c132a push 0x102c60d4 */
  push32((uint32_t)(0x102c60d4u));
  /* 102c132f push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1331 call dword ptr [0x102c50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50d4))), 0x102c1337u);
  /* 102c1337 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c133a jmp 0x102c136e */
  goto L_102c136e;
L_102c133c:;
  /* 102c133c push 1 */
  push32((uint32_t)(0x1u));
  /* 102c133e push 2 */
  push32((uint32_t)(0x2u));
  /* 102c1340 push 0x102c6488 */
  push32((uint32_t)(0x102c6488u));
  /* 102c1345 call dword ptr [0x102c50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50d8))), 0x102c134bu);
  /* 102c134b push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102c1350 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1352 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1354 call esi */
  call_ind((uint32_t)(ESI), 0x102c1356u);
  /* 102c1356 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1358 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c135a push 1 */
  push32((uint32_t)(0x1u));
  /* 102c135c push 1 */
  push32((uint32_t)(0x1u));
  /* 102c135e push 0x102c60d4 */
  push32((uint32_t)(0x102c60d4u));
  /* 102c1363 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c1365 call dword ptr [0x102c50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50d4))), 0x102c136bu);
  /* 102c136b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c136e:;
  /* 102c136e push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1370 call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c1376u);
  /* 102c1376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1379 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c137b je 0x102c13b5 */
  if (C.zf) goto L_102c13b5;
  /* 102c137d push 0 */
  push32((uint32_t)(0x0u));
  /* 102c137f push 0x102c6418 */
  push32((uint32_t)(0x102c6418u));
  /* 102c1384 call dword ptr [0x102c50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50d0))), 0x102c138au);
  /* 102c138a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c138d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c138f jle 0x102c13b5 */
  if ((C.zf||C.sf!=C.of)) goto L_102c13b5;
  /* 102c1391 mov ebx, dword ptr [0x102c50c0] */
  EBX = (r32((uint32_t)(0x102c50c0)));
  /* 102c1397 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1399 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c139b call ebx */
  call_ind((uint32_t)(EBX), 0x102c139du);
  /* 102c139d mov esi, dword ptr [0x102c50cc] */
  ESI = (r32((uint32_t)(0x102c50cc)));
  /* 102c13a3 push 0x102c60cc */
  push32((uint32_t)(0x102c60ccu));
  /* 102c13a8 call esi */
  call_ind((uint32_t)(ESI), 0x102c13aau);
  /* 102c13aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c13ad call dword ptr [0x102c50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50e0))), 0x102c13b3u);
  /* 102c13b3 jmp 0x102c13c1 */
  goto L_102c13c1;
L_102c13b5:;
  /* 102c13b5 mov esi, dword ptr [0x102c50cc] */
  ESI = (r32((uint32_t)(0x102c50cc)));
  /* 102c13bb mov ebx, dword ptr [0x102c50c0] */
  EBX = (r32((uint32_t)(0x102c50c0)));
L_102c13c1:;
  /* 102c13c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c13c3 call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c13c9u);
  /* 102c13c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c13cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c13ce je 0x102c13f7 */
  if (C.zf) goto L_102c13f7;
  /* 102c13d0 push 0x102c6418 */
  push32((uint32_t)(0x102c6418u));
  /* 102c13d5 call dword ptr [0x102c50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50e4))), 0x102c13dbu);
  /* 102c13db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c13de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c13e0 jne 0x102c13f7 */
  if (!C.zf) goto L_102c13f7;
  /* 102c13e2 push eax */
  push32((uint32_t)(EAX));
  /* 102c13e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c13e5 call ebx */
  call_ind((uint32_t)(EBX), 0x102c13e7u);
  /* 102c13e7 push 0x102c60c4 */
  push32((uint32_t)(0x102c60c4u));
  /* 102c13ec call esi */
  call_ind((uint32_t)(ESI), 0x102c13eeu);
  /* 102c13ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c13f1 call dword ptr [0x102c50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50dc))), 0x102c13f7u);
L_102c13f7:;
  /* 102c13f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c13f9 call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c13ffu);
  /* 102c13ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1402 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c1404 je 0x102c142b */
  if (C.zf) goto L_102c142b;
  /* 102c1406 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1408 call dword ptr [0x102c50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50ec))), 0x102c140eu);
  /* 102c140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1411 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c1413 je 0x102c142b */
  if (C.zf) goto L_102c142b;
  /* 102c1415 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1417 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c1419 call ebx */
  call_ind((uint32_t)(EBX), 0x102c141bu);
  /* 102c141b push 0x102c60bc */
  push32((uint32_t)(0x102c60bcu));
  /* 102c1420 call esi */
  call_ind((uint32_t)(ESI), 0x102c1422u);
  /* 102c1422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1425 call dword ptr [0x102c50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50dc))), 0x102c142bu);
L_102c142b:;
  /* 102c142b push 3 */
  push32((uint32_t)(0x3u));
  /* 102c142d call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c1433u);
  /* 102c1433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1436 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c1438 je 0x102c1459 */
  if (C.zf) goto L_102c1459;
  /* 102c143a push 3 */
  push32((uint32_t)(0x3u));
  /* 102c143c call dword ptr [0x102c50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50ec))), 0x102c1442u);
  /* 102c1442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1445 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c1447 je 0x102c1459 */
  if (C.zf) goto L_102c1459;
  /* 102c1449 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c144b push 3 */
  push32((uint32_t)(0x3u));
  /* 102c144d call ebx */
  call_ind((uint32_t)(EBX), 0x102c144fu);
  /* 102c144f push 0x102c60b4 */
  push32((uint32_t)(0x102c60b4u));
  /* 102c1454 call esi */
  call_ind((uint32_t)(ESI), 0x102c1456u);
  /* 102c1456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c1459:;
  /* 102c1459 push 4 */
  push32((uint32_t)(0x4u));
  /* 102c145b call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c1461u);
  /* 102c1461 mov esi, dword ptr [0x102c50f0] */
  ESI = (r32((uint32_t)(0x102c50f0)));
  /* 102c1467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c146a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c146c je 0x102c1516 */
  if (C.zf) goto L_102c1516;
  /* 102c1472 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1474 push 0x102c6458 */
  push32((uint32_t)(0x102c6458u));
  /* 102c1479 call dword ptr [0x102c50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50e8))), 0x102c147fu);
  /* 102c147f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1484 jle 0x102c1516 */
  if ((C.zf||C.sf!=C.of)) goto L_102c1516;
  /* 102c148a push 5 */
  push32((uint32_t)(0x5u));
  /* 102c148c push 0x102c6458 */
  push32((uint32_t)(0x102c6458u));
  /* 102c1491 call dword ptr [0x102c50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50e8))), 0x102c1497u);
  /* 102c1497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c149a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c149c jne 0x102c1516 */
  if (!C.zf) goto L_102c1516;
  /* 102c149e push eax */
  push32((uint32_t)(EAX));
  /* 102c149f push 4 */
  push32((uint32_t)(0x4u));
  /* 102c14a1 call ebx */
  call_ind((uint32_t)(EBX), 0x102c14a3u);
  /* 102c14a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c14a5 call edi */
  call_ind((uint32_t)(EDI), 0x102c14a7u);
  /* 102c14a7 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102c14aa mov ecx, 0x7d0 */
  ECX = (0x7d0u);
  /* 102c14af lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c14b2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c14b5 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102c14b8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c14ba push ecx */
  push32((uint32_t)(ECX));
  /* 102c14bb push 0x102c60ac */
  push32((uint32_t)(0x102c60acu));
  /* 102c14c0 call dword ptr [0x102c50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50f8))), 0x102c14c6u);
  /* 102c14c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c14c8 call edi */
  call_ind((uint32_t)(EDI), 0x102c14cau);
  /* 102c14ca lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102c14cd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c14d0 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102c14d3 mov eax, 0x7d0 */
  EAX = (0x7d0u);
  /* 102c14d8 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102c14db sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c14dd push eax */
  push32((uint32_t)(EAX));
  /* 102c14de push 1 */
  push32((uint32_t)(0x1u));
  /* 102c14e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c14e2 call esi */
  call_ind((uint32_t)(ESI), 0x102c14e4u);
  /* 102c14e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c14e6 push 0x102c6448 */
  push32((uint32_t)(0x102c6448u));
  /* 102c14eb call ebp */
  call_ind((uint32_t)(EBP), 0x102c14edu);
  /* 102c14ed push 5 */
  push32((uint32_t)(0x5u));
  /* 102c14ef call dword ptr [0x102c50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50fc))), 0x102c14f5u);
  /* 102c14f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c14f7 push 0x102c6458 */
  push32((uint32_t)(0x102c6458u));
  /* 102c14fc push 5 */
  push32((uint32_t)(0x5u));
  /* 102c14fe push 0x102c64a8 */
  push32((uint32_t)(0x102c64a8u));
  /* 102c1503 push 0x102c64a0 */
  push32((uint32_t)(0x102c64a0u));
  /* 102c1508 push 0x102c6450 */
  push32((uint32_t)(0x102c6450u));
  /* 102c150d call dword ptr [0x102c50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b8))), 0x102c1513u);
  /* 102c1513 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c1516:;
  /* 102c1516 push 5 */
  push32((uint32_t)(0x5u));
  /* 102c1518 call dword ptr [0x102c50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50b4))), 0x102c151eu);
  /* 102c151e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1521 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c1523 je 0x102c159c */
  if (C.zf) goto L_102c159c;
  /* 102c1525 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1527 push 0x102c6480 */
  push32((uint32_t)(0x102c6480u));
  /* 102c152c call dword ptr [0x102c50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50e8))), 0x102c1532u);
  /* 102c1532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1537 jle 0x102c159c */
  if ((C.zf||C.sf!=C.of)) goto L_102c159c;
  /* 102c1539 push 0x102c6440 */
  push32((uint32_t)(0x102c6440u));
  /* 102c153e call dword ptr [0x102c50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50e4))), 0x102c1544u);
  /* 102c1544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1549 jne 0x102c159c */
  if (!C.zf) goto L_102c159c;
  /* 102c154b push eax */
  push32((uint32_t)(EAX));
  /* 102c154c push 5 */
  push32((uint32_t)(0x5u));
  /* 102c154e call ebx */
  call_ind((uint32_t)(EBX), 0x102c1550u);
  /* 102c1550 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1552 call edi */
  call_ind((uint32_t)(EDI), 0x102c1554u);
  /* 102c1554 mov ecx, 6 */
  ECX = (0x6u);
  /* 102c1559 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c155b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c155e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c1561 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102c1564 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c1567 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1568 push 0x102c60a4 */
  push32((uint32_t)(0x102c60a4u));
  /* 102c156d call dword ptr [0x102c50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50f8))), 0x102c1573u);
  /* 102c1573 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1575 call edi */
  call_ind((uint32_t)(EDI), 0x102c1577u);
  /* 102c1577 mov ecx, 6 */
  ECX = (0x6u);
  /* 102c157c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c157e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102c1581 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c1584 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102c1587 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102c158a push edx */
  push32((uint32_t)(EDX));
  /* 102c158b push 3 */
  push32((uint32_t)(0x3u));
  /* 102c158d push 0 */
  push32((uint32_t)(0x0u));
  /* 102c158f call esi */
  call_ind((uint32_t)(ESI), 0x102c1591u);
  /* 102c1591 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 102c1593 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1595 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1597 call esi */
  call_ind((uint32_t)(ESI), 0x102c1599u);
  /* 102c1599 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c159c:;
  /* 102c159c pop edi */
  EDI = (pop32());
  /* 102c159d pop esi */
  ESI = (pop32());
  /* 102c159e pop ebp */
  EBP = (pop32());
  /* 102c159f pop ebx */
  EBX = (pop32());
  /* 102c15a0 ret  */
  ESPCHK(0x102c1160u, _esp0);
  ESP += 4; return;
}

/* FUN_100015b0 @ 0x102c15b0 (217 bytes, 57 insns) */
void f_102c15b0(void) {
  FTRACE(0x102c15b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c15b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c15b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c15b7 jne 0x102c1645 */
  if (!C.zf) goto L_102c1645;
  /* 102c15bd call dword ptr [0x102c5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5058))), 0x102c15c3u);
  /* 102c15c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c15c5 mov dword ptr [0x102c64d0], eax */
  w32((uint32_t)(0x102c64d0), (EAX));
  /* 102c15ca call 0x102c1fe4 */
  push32(0x102c15cfu); f_102c1fe4();
  /* 102c15cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c15d1 pop ecx */
  ECX = (pop32());
  /* 102c15d2 je 0x102c1610 */
  if (C.zf) goto L_102c1610;
  /* 102c15d4 mov eax, dword ptr [0x102c64d0] */
  EAX = (r32((uint32_t)(0x102c64d0)));
  /* 102c15d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102c15db mov cl, byte ptr [0x102c64d1] */
  CL = (r8((uint32_t)(0x102c64d1)));
  /* 102c15e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c15e6 shr dword ptr [0x102c64d0], 0x10 */
  w32((uint32_t)(0x102c64d0), (sh_shr((uint32_t)(r32((uint32_t)(0x102c64d0))), (0x10u)&0x1f, 32)));
  /* 102c15ed mov dword ptr [0x102c64d8], eax */
  w32((uint32_t)(0x102c64d8), (EAX));
  /* 102c15f2 mov dword ptr [0x102c64dc], ecx */
  w32((uint32_t)(0x102c64dc), (ECX));
  /* 102c15f8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102c15fb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c15fd mov dword ptr [0x102c64d4], eax */
  w32((uint32_t)(0x102c64d4), (EAX));
  /* 102c1602 call 0x102c1877 */
  push32(0x102c1607u); f_102c1877();
  /* 102c1607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1609 jne 0x102c1614 */
  if (!C.zf) goto L_102c1614;
  /* 102c160b call 0x102c2020 */
  push32(0x102c1610u); f_102c2020();
L_102c1610:;
  /* 102c1610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c1612 jmp 0x102c1686 */
  goto L_102c1686;
L_102c1614:;
  /* 102c1614 call dword ptr [0x102c5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5054))), 0x102c161au);
  /* 102c161a mov dword ptr [0x102c6a38], eax */
  w32((uint32_t)(0x102c6a38), (EAX));
  /* 102c161f call 0x102c1eb2 */
  push32(0x102c1624u); f_102c1eb2();
  /* 102c1624 mov dword ptr [0x102c64bc], eax */
  w32((uint32_t)(0x102c64bc), (EAX));
  /* 102c1629 call 0x102c199c */
  push32(0x102c162eu); f_102c199c();
  /* 102c162e call 0x102c1c65 */
  push32(0x102c1633u); f_102c1c65();
  /* 102c1633 call 0x102c1bac */
  push32(0x102c1638u); f_102c1bac();
  /* 102c1638 call 0x102c1759 */
  push32(0x102c163du); f_102c1759();
  /* 102c163d inc dword ptr [0x102c64b8] */
  { uint32_t _r=(r32((uint32_t)(0x102c64b8)))+1; w32((uint32_t)(0x102c64b8), (_r)); fl_inc(_r,32); }
  /* 102c1643 jmp 0x102c1683 */
  goto L_102c1683;
L_102c1645:;
  /* 102c1645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102c1647 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1649 jne 0x102c1677 */
  if (!C.zf) goto L_102c1677;
  /* 102c164b cmp dword ptr [0x102c64b8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102c64b8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1651 jle 0x102c1610 */
  if ((C.zf||C.sf!=C.of)) goto L_102c1610;
  /* 102c1653 dec dword ptr [0x102c64b8] */
  { uint32_t _r=(r32((uint32_t)(0x102c64b8)))-1; w32((uint32_t)(0x102c64b8), (_r)); fl_dec(_r,32); }
  /* 102c1659 cmp dword ptr [0x102c6508], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102c6508))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c165f jne 0x102c1666 */
  if (!C.zf) goto L_102c1666;
  /* 102c1661 call 0x102c1797 */
  push32(0x102c1666u); f_102c1797();
L_102c1666:;
  /* 102c1666 call 0x102c1b58 */
  push32(0x102c166bu); f_102c1b58();
  /* 102c166b call 0x102c18cb */
  push32(0x102c1670u); f_102c18cb();
  /* 102c1670 call 0x102c2020 */
  push32(0x102c1675u); f_102c2020();
  /* 102c1675 jmp 0x102c1683 */
  goto L_102c1683;
L_102c1677:;
  /* 102c1677 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c167a jne 0x102c1683 */
  if (!C.zf) goto L_102c1683;
  /* 102c167c push ecx */
  push32((uint32_t)(ECX));
  /* 102c167d call 0x102c18fc */
  push32(0x102c1682u); f_102c18fc();
  /* 102c1682 pop ecx */
  ECX = (pop32());
L_102c1683:;
  /* 102c1683 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1685 pop eax */
  EAX = (pop32());
L_102c1686:;
  /* 102c1686 ret 0xc */
  ESPCHK(0x102c15b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102c1689 (157 bytes, 73 insns) */
void f_102c1689(void) {
  FTRACE(0x102c1689u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1689 push ebp */
  push32((uint32_t)(EBP));
  /* 102c168a mov ebp, esp */
  EBP = (ESP);
  /* 102c168c push ebx */
  push32((uint32_t)(EBX));
  /* 102c168d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c1690 push esi */
  push32((uint32_t)(ESI));
  /* 102c1691 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102c1694 push edi */
  push32((uint32_t)(EDI));
  /* 102c1695 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102c1698 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c169a jne 0x102c16a5 */
  if (!C.zf) goto L_102c16a5;
  /* 102c169c cmp dword ptr [0x102c64b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102c64b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c16a3 jmp 0x102c16cb */
  goto L_102c16cb;
L_102c16a5:;
  /* 102c16a5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c16a8 je 0x102c16af */
  if (C.zf) goto L_102c16af;
  /* 102c16aa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c16ad jne 0x102c16d1 */
  if (!C.zf) goto L_102c16d1;
L_102c16af:;
  /* 102c16af mov eax, dword ptr [0x102c6a3c] */
  EAX = (r32((uint32_t)(0x102c6a3c)));
  /* 102c16b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c16b6 je 0x102c16c1 */
  if (C.zf) goto L_102c16c1;
  /* 102c16b8 push edi */
  push32((uint32_t)(EDI));
  /* 102c16b9 push esi */
  push32((uint32_t)(ESI));
  /* 102c16ba push ebx */
  push32((uint32_t)(EBX));
  /* 102c16bb call eax */
  call_ind((uint32_t)(EAX), 0x102c16bdu);
  /* 102c16bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c16bf je 0x102c16cd */
  if (C.zf) goto L_102c16cd;
L_102c16c1:;
  /* 102c16c1 push edi */
  push32((uint32_t)(EDI));
  /* 102c16c2 push esi */
  push32((uint32_t)(ESI));
  /* 102c16c3 push ebx */
  push32((uint32_t)(EBX));
  /* 102c16c4 call 0x102c15b0 */
  push32(0x102c16c9u); f_102c15b0();
  /* 102c16c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102c16cb:;
  /* 102c16cb jne 0x102c16d1 */
  if (!C.zf) goto L_102c16d1;
L_102c16cd:;
  /* 102c16cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c16cf jmp 0x102c171f */
  goto L_102c171f;
L_102c16d1:;
  /* 102c16d1 push edi */
  push32((uint32_t)(EDI));
  /* 102c16d2 push esi */
  push32((uint32_t)(ESI));
  /* 102c16d3 push ebx */
  push32((uint32_t)(EBX));
  /* 102c16d4 call 0x102c1000 */
  push32(0x102c16d9u); f_102c1000();
  /* 102c16d9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c16dc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102c16df jne 0x102c16ed */
  if (!C.zf) goto L_102c16ed;
  /* 102c16e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c16e3 jne 0x102c171c */
  if (!C.zf) goto L_102c171c;
  /* 102c16e5 push edi */
  push32((uint32_t)(EDI));
  /* 102c16e6 push eax */
  push32((uint32_t)(EAX));
  /* 102c16e7 push ebx */
  push32((uint32_t)(EBX));
  /* 102c16e8 call 0x102c15b0 */
  push32(0x102c16edu); f_102c15b0();
L_102c16ed:;
  /* 102c16ed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c16ef je 0x102c16f6 */
  if (C.zf) goto L_102c16f6;
  /* 102c16f1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c16f4 jne 0x102c171c */
  if (!C.zf) goto L_102c171c;
L_102c16f6:;
  /* 102c16f6 push edi */
  push32((uint32_t)(EDI));
  /* 102c16f7 push esi */
  push32((uint32_t)(ESI));
  /* 102c16f8 push ebx */
  push32((uint32_t)(EBX));
  /* 102c16f9 call 0x102c15b0 */
  push32(0x102c16feu); f_102c15b0();
  /* 102c16fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1700 jne 0x102c1705 */
  if (!C.zf) goto L_102c1705;
  /* 102c1702 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_102c1705:;
  /* 102c1705 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1709 je 0x102c171c */
  if (C.zf) goto L_102c171c;
  /* 102c170b mov eax, dword ptr [0x102c6a3c] */
  EAX = (r32((uint32_t)(0x102c6a3c)));
  /* 102c1710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1712 je 0x102c171c */
  if (C.zf) goto L_102c171c;
  /* 102c1714 push edi */
  push32((uint32_t)(EDI));
  /* 102c1715 push esi */
  push32((uint32_t)(ESI));
  /* 102c1716 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1717 call eax */
  call_ind((uint32_t)(EAX), 0x102c1719u);
  /* 102c1719 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102c171c:;
  /* 102c171c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102c171f:;
  /* 102c171f pop edi */
  EDI = (pop32());
  /* 102c1720 pop esi */
  ESI = (pop32());
  /* 102c1721 pop ebx */
  EBX = (pop32());
  /* 102c1722 pop ebp */
  EBP = (pop32());
  /* 102c1723 ret 0xc */
  ESPCHK(0x102c1689u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x102c1726 (48 bytes, 15 insns) */
void f_102c1726(void) {
  FTRACE(0x102c1726u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1726 mov eax, dword ptr [0x102c64c4] */
  EAX = (r32((uint32_t)(0x102c64c4)));
  /* 102c172b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c172e je 0x102c173d */
  if (C.zf) goto L_102c173d;
  /* 102c1730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1732 jne 0x102c1742 */
  if (!C.zf) goto L_102c1742;
  /* 102c1734 cmp dword ptr [0x102c64c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102c64c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c173b jne 0x102c1742 */
  if (!C.zf) goto L_102c1742;
L_102c173d:;
  /* 102c173d call 0x102c2095 */
  push32(0x102c1742u); f_102c2095();
L_102c1742:;
  /* 102c1742 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102c1746 call 0x102c20ce */
  push32(0x102c174bu); f_102c20ce();
  /* 102c174b push 0xff */
  push32((uint32_t)(0xffu));
  /* 102c1750 call dword ptr [0x102c60e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c60e4))), 0x102c1756u);
  /* 102c1756 pop ecx */
  ECX = (pop32());
  /* 102c1757 pop ecx */
  ECX = (pop32());
  /* 102c1758 ret  */
  ESPCHK(0x102c1726u, _esp0);
  ESP += 4; return;
}

/* FUN_10001759 @ 0x102c1759 (45 bytes, 12 insns) */
void f_102c1759(void) {
  FTRACE(0x102c1759u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1759 mov eax, dword ptr [0x102c6a34] */
  EAX = (r32((uint32_t)(0x102c6a34)));
  /* 102c175e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1760 je 0x102c1764 */
  if (C.zf) goto L_102c1764;
  /* 102c1762 call eax */
  call_ind((uint32_t)(EAX), 0x102c1764u);
L_102c1764:;
  /* 102c1764 push 0x102c6010 */
  push32((uint32_t)(0x102c6010u));
  /* 102c1769 push 0x102c6008 */
  push32((uint32_t)(0x102c6008u));
  /* 102c176e call 0x102c185d */
  push32(0x102c1773u); f_102c185d();
  /* 102c1773 push 0x102c6004 */
  push32((uint32_t)(0x102c6004u));
  /* 102c1778 push 0x102c6000 */
  push32((uint32_t)(0x102c6000u));
  /* 102c177d call 0x102c185d */
  push32(0x102c1782u); f_102c185d();
  /* 102c1782 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1785 ret  */
  ESPCHK(0x102c1759u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x102c1786 (17 bytes, 6 insns) */
void f_102c1786(void) {
  FTRACE(0x102c1786u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1786 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1788 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c178a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102c178e call 0x102c17a6 */
  push32(0x102c1793u); f_102c17a6();
  /* 102c1793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1796 ret  */
  ESPCHK(0x102c1786u, _esp0);
  ESP += 4; return;
}

/* FUN_10001797 @ 0x102c1797 (15 bytes, 6 insns) */
void f_102c1797(void) {
  FTRACE(0x102c1797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1797 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1799 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c179b push 0 */
  push32((uint32_t)(0x0u));
  /* 102c179d call 0x102c17a6 */
  push32(0x102c17a2u); f_102c17a6();
  /* 102c17a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c17a5 ret  */
  ESPCHK(0x102c1797u, _esp0);
  ESP += 4; return;
}

/* FUN_100017a6 @ 0x102c17a6 (163 bytes, 53 insns) */
void f_102c17a6(void) {
  FTRACE(0x102c17a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c17a6 push edi */
  push32((uint32_t)(EDI));
  /* 102c17a7 call 0x102c184b */
  push32(0x102c17acu); f_102c184b();
  /* 102c17ac push 1 */
  push32((uint32_t)(0x1u));
  /* 102c17ae pop edi */
  EDI = (pop32());
  /* 102c17af cmp dword ptr [0x102c650c], edi */
  { uint32_t _a=(r32((uint32_t)(0x102c650c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c17b5 jne 0x102c17c8 */
  if (!C.zf) goto L_102c17c8;
  /* 102c17b7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102c17bb call dword ptr [0x102c5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5064))), 0x102c17c1u);
  /* 102c17c1 push eax */
  push32((uint32_t)(EAX));
  /* 102c17c2 call dword ptr [0x102c5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5060))), 0x102c17c8u);
L_102c17c8:;
  /* 102c17c8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c17cd push ebx */
  push32((uint32_t)(EBX));
  /* 102c17ce mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102c17d2 mov dword ptr [0x102c6508], edi */
  w32((uint32_t)(0x102c6508), (EDI));
  /* 102c17d8 mov byte ptr [0x102c6504], bl */
  w8((uint32_t)(0x102c6504), (BL));
  /* 102c17de jne 0x102c181c */
  if (!C.zf) goto L_102c181c;
  /* 102c17e0 mov eax, dword ptr [0x102c6a30] */
  EAX = (r32((uint32_t)(0x102c6a30)));
  /* 102c17e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c17e7 je 0x102c180b */
  if (C.zf) goto L_102c180b;
  /* 102c17e9 mov ecx, dword ptr [0x102c6a2c] */
  ECX = (r32((uint32_t)(0x102c6a2c)));
  /* 102c17ef push esi */
  push32((uint32_t)(ESI));
  /* 102c17f0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 102c17f3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c17f5 jb 0x102c180a */
  if (C.cf) goto L_102c180a;
L_102c17f7:;
  /* 102c17f7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102c17f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c17fb je 0x102c17ff */
  if (C.zf) goto L_102c17ff;
  /* 102c17fd call eax */
  call_ind((uint32_t)(EAX), 0x102c17ffu);
L_102c17ff:;
  /* 102c17ff sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1802 cmp esi, dword ptr [0x102c6a30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102c6a30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1808 jae 0x102c17f7 */
  if (!C.cf) goto L_102c17f7;
L_102c180a:;
  /* 102c180a pop esi */
  ESI = (pop32());
L_102c180b:;
  /* 102c180b push 0x102c6018 */
  push32((uint32_t)(0x102c6018u));
  /* 102c1810 push 0x102c6014 */
  push32((uint32_t)(0x102c6014u));
  /* 102c1815 call 0x102c185d */
  push32(0x102c181au); f_102c185d();
  /* 102c181a pop ecx */
  ECX = (pop32());
  /* 102c181b pop ecx */
  ECX = (pop32());
L_102c181c:;
  /* 102c181c push 0x102c6020 */
  push32((uint32_t)(0x102c6020u));
  /* 102c1821 push 0x102c601c */
  push32((uint32_t)(0x102c601cu));
  /* 102c1826 call 0x102c185d */
  push32(0x102c182bu); f_102c185d();
  /* 102c182b pop ecx */
  ECX = (pop32());
  /* 102c182c pop ecx */
  ECX = (pop32());
  /* 102c182d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102c182f pop ebx */
  EBX = (pop32());
  /* 102c1830 je 0x102c1839 */
  if (C.zf) goto L_102c1839;
  /* 102c1832 call 0x102c1854 */
  push32(0x102c1837u); f_102c1854();
  /* 102c1837 pop edi */
  EDI = (pop32());
  /* 102c1838 ret  */
  ESPCHK(0x102c17a6u, _esp0);
  ESP += 4; return;
L_102c1839:;
  /* 102c1839 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102c183d mov dword ptr [0x102c650c], edi */
  w32((uint32_t)(0x102c650c), (EDI));
  /* 102c1843 call dword ptr [0x102c505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c505c))), 0x102c1849u);
  /* 102c1849 pop edi */
  EDI = (pop32());
  /* 102c184a ret  */
  ESPCHK(0x102c17a6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000184b @ 0x102c184b (9 bytes, 4 insns) */
void f_102c184b(void) {
  FTRACE(0x102c184bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c184b push 0xd */
  push32((uint32_t)(0xdu));
  /* 102c184d call 0x102c22b6 */
  push32(0x102c1852u); f_102c22b6();
  /* 102c1852 pop ecx */
  ECX = (pop32());
  /* 102c1853 ret  */
  ESPCHK(0x102c184bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001854 @ 0x102c1854 (9 bytes, 4 insns) */
void f_102c1854(void) {
  FTRACE(0x102c1854u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1854 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102c1856 call 0x102c2317 */
  push32(0x102c185bu); f_102c2317();
  /* 102c185b pop ecx */
  ECX = (pop32());
  /* 102c185c ret  */
  ESPCHK(0x102c1854u, _esp0);
  ESP += 4; return;
}

/* FUN_1000185d @ 0x102c185d (26 bytes, 12 insns) */
void f_102c185d(void) {
  FTRACE(0x102c185du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c185d push esi */
  push32((uint32_t)(ESI));
  /* 102c185e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_102c1862:;
  /* 102c1862 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1866 jae 0x102c1875 */
  if (!C.cf) goto L_102c1875;
  /* 102c1868 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102c186a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c186c je 0x102c1870 */
  if (C.zf) goto L_102c1870;
  /* 102c186e call eax */
  call_ind((uint32_t)(EAX), 0x102c1870u);
L_102c1870:;
  /* 102c1870 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1873 jmp 0x102c1862 */
  goto L_102c1862;
L_102c1875:;
  /* 102c1875 pop esi */
  ESI = (pop32());
  /* 102c1876 ret  */
  ESPCHK(0x102c185du, _esp0);
  ESP += 4; return;
}

/* FUN_10001877 @ 0x102c1877 (84 bytes, 32 insns) */
void f_102c1877(void) {
  FTRACE(0x102c1877u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1877 push esi */
  push32((uint32_t)(ESI));
  /* 102c1878 call 0x102c2221 */
  push32(0x102c187du); f_102c2221();
  /* 102c187d call dword ptr [0x102c5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5070))), 0x102c1883u);
  /* 102c1883 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1886 mov dword ptr [0x102c60e8], eax */
  w32((uint32_t)(0x102c60e8), (EAX));
  /* 102c188b je 0x102c18c7 */
  if (C.zf) goto L_102c18c7;
  /* 102c188d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102c188f push 1 */
  push32((uint32_t)(0x1u));
  /* 102c1891 call 0x102c232c */
  push32(0x102c1896u); f_102c232c();
  /* 102c1896 mov esi, eax */
  ESI = (EAX);
  /* 102c1898 pop ecx */
  ECX = (pop32());
  /* 102c1899 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c189b pop ecx */
  ECX = (pop32());
  /* 102c189c je 0x102c18c7 */
  if (C.zf) goto L_102c18c7;
  /* 102c189e push esi */
  push32((uint32_t)(ESI));
  /* 102c189f push dword ptr [0x102c60e8] */
  push32((uint32_t)(r32((uint32_t)(0x102c60e8))));
  /* 102c18a5 call dword ptr [0x102c506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c506c))), 0x102c18abu);
  /* 102c18ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c18ad je 0x102c18c7 */
  if (C.zf) goto L_102c18c7;
  /* 102c18af push esi */
  push32((uint32_t)(ESI));
  /* 102c18b0 call 0x102c18e9 */
  push32(0x102c18b5u); f_102c18e9();
  /* 102c18b5 pop ecx */
  ECX = (pop32());
  /* 102c18b6 call dword ptr [0x102c5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5068))), 0x102c18bcu);
  /* 102c18bc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102c18c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c18c2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102c18c4 pop eax */
  EAX = (pop32());
  /* 102c18c5 pop esi */
  ESI = (pop32());
  /* 102c18c6 ret  */
  ESPCHK(0x102c1877u, _esp0);
  ESP += 4; return;
L_102c18c7:;
  /* 102c18c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c18c9 pop esi */
  ESI = (pop32());
  /* 102c18ca ret  */
  ESPCHK(0x102c1877u, _esp0);
  ESP += 4; return;
}

/* FUN_100018cb @ 0x102c18cb (30 bytes, 8 insns) */
void f_102c18cb(void) {
  FTRACE(0x102c18cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c18cb call 0x102c224a */
  push32(0x102c18d0u); f_102c224a();
  /* 102c18d0 mov eax, dword ptr [0x102c60e8] */
  EAX = (r32((uint32_t)(0x102c60e8)));
  /* 102c18d5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c18d8 je 0x102c18e8 */
  if (C.zf) goto L_102c18e8;
  /* 102c18da push eax */
  push32((uint32_t)(EAX));
  /* 102c18db call dword ptr [0x102c5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5074))), 0x102c18e1u);
  /* 102c18e1 or dword ptr [0x102c60e8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x102c60e8)))|(0xffffffffu); w32((uint32_t)(0x102c60e8), (_r)); fl_logic(_r,32); }
L_102c18e8:;
  /* 102c18e8 ret  */
  ESPCHK(0x102c18cbu, _esp0);
  ESP += 4; return;
}

/* FUN_100018e9 @ 0x102c18e9 (19 bytes, 4 insns) */
void f_102c18e9(void) {
  FTRACE(0x102c18e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c18e9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c18ed mov dword ptr [eax + 0x50], 0x102c6268 */
  w32((uint32_t)(EAX + 0x50), (0x102c6268u));
  /* 102c18f4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 102c18fb ret  */
  ESPCHK(0x102c18e9u, _esp0);
  ESP += 4; return;
}

/* FUN_100018fc @ 0x102c18fc (160 bytes, 62 insns) */
void f_102c18fc(void) {
  FTRACE(0x102c18fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c18fc mov eax, dword ptr [0x102c60e8] */
  EAX = (r32((uint32_t)(0x102c60e8)));
  /* 102c1901 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1904 je 0x102c199b */
  if (C.zf) goto L_102c199b;
  /* 102c190a push esi */
  push32((uint32_t)(ESI));
  /* 102c190b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102c190f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1911 jne 0x102c1920 */
  if (!C.zf) goto L_102c1920;
  /* 102c1913 push eax */
  push32((uint32_t)(EAX));
  /* 102c1914 call dword ptr [0x102c5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5078))), 0x102c191au);
  /* 102c191a mov esi, eax */
  ESI = (EAX);
  /* 102c191c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c191e je 0x102c198c */
  if (C.zf) goto L_102c198c;
L_102c1920:;
  /* 102c1920 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 102c1923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1925 je 0x102c192e */
  if (C.zf) goto L_102c192e;
  /* 102c1927 push eax */
  push32((uint32_t)(EAX));
  /* 102c1928 call 0x102c23b9 */
  push32(0x102c192du); f_102c23b9();
  /* 102c192d pop ecx */
  ECX = (pop32());
L_102c192e:;
  /* 102c192e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 102c1931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1933 je 0x102c193c */
  if (C.zf) goto L_102c193c;
  /* 102c1935 push eax */
  push32((uint32_t)(EAX));
  /* 102c1936 call 0x102c23b9 */
  push32(0x102c193bu); f_102c23b9();
  /* 102c193b pop ecx */
  ECX = (pop32());
L_102c193c:;
  /* 102c193c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 102c193f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1941 je 0x102c194a */
  if (C.zf) goto L_102c194a;
  /* 102c1943 push eax */
  push32((uint32_t)(EAX));
  /* 102c1944 call 0x102c23b9 */
  push32(0x102c1949u); f_102c23b9();
  /* 102c1949 pop ecx */
  ECX = (pop32());
L_102c194a:;
  /* 102c194a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 102c194d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c194f je 0x102c1958 */
  if (C.zf) goto L_102c1958;
  /* 102c1951 push eax */
  push32((uint32_t)(EAX));
  /* 102c1952 call 0x102c23b9 */
  push32(0x102c1957u); f_102c23b9();
  /* 102c1957 pop ecx */
  ECX = (pop32());
L_102c1958:;
  /* 102c1958 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 102c195b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c195d je 0x102c1966 */
  if (C.zf) goto L_102c1966;
  /* 102c195f push eax */
  push32((uint32_t)(EAX));
  /* 102c1960 call 0x102c23b9 */
  push32(0x102c1965u); f_102c23b9();
  /* 102c1965 pop ecx */
  ECX = (pop32());
L_102c1966:;
  /* 102c1966 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 102c1969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c196b je 0x102c1974 */
  if (C.zf) goto L_102c1974;
  /* 102c196d push eax */
  push32((uint32_t)(EAX));
  /* 102c196e call 0x102c23b9 */
  push32(0x102c1973u); f_102c23b9();
  /* 102c1973 pop ecx */
  ECX = (pop32());
L_102c1974:;
  /* 102c1974 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 102c1977 cmp eax, 0x102c6268 */
  { uint32_t _a=(EAX),_b=(0x102c6268u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c197c je 0x102c1985 */
  if (C.zf) goto L_102c1985;
  /* 102c197e push eax */
  push32((uint32_t)(EAX));
  /* 102c197f call 0x102c23b9 */
  push32(0x102c1984u); f_102c23b9();
  /* 102c1984 pop ecx */
  ECX = (pop32());
L_102c1985:;
  /* 102c1985 push esi */
  push32((uint32_t)(ESI));
  /* 102c1986 call 0x102c23b9 */
  push32(0x102c198bu); f_102c23b9();
  /* 102c198b pop ecx */
  ECX = (pop32());
L_102c198c:;
  /* 102c198c push 0 */
  push32((uint32_t)(0x0u));
  /* 102c198e push dword ptr [0x102c60e8] */
  push32((uint32_t)(r32((uint32_t)(0x102c60e8))));
  /* 102c1994 call dword ptr [0x102c506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c506c))), 0x102c199au);
  /* 102c199a pop esi */
  ESI = (pop32());
L_102c199b:;
  /* 102c199b ret  */
  ESPCHK(0x102c18fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000199c @ 0x102c199c (444 bytes, 150 insns) */
void f_102c199c(void) {
  FTRACE(0x102c199cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c199c push ebp */
  push32((uint32_t)(EBP));
  /* 102c199d mov ebp, esp */
  EBP = (ESP);
  /* 102c199f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c19a2 push ebx */
  push32((uint32_t)(EBX));
  /* 102c19a3 push esi */
  push32((uint32_t)(ESI));
  /* 102c19a4 push edi */
  push32((uint32_t)(EDI));
  /* 102c19a5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102c19aa call 0x102c2401 */
  push32(0x102c19afu); f_102c2401();
  /* 102c19af mov esi, eax */
  ESI = (EAX);
  /* 102c19b1 pop ecx */
  ECX = (pop32());
  /* 102c19b2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c19b4 jne 0x102c19be */
  if (!C.zf) goto L_102c19be;
  /* 102c19b6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102c19b8 call 0x102c1726 */
  push32(0x102c19bdu); f_102c1726();
  /* 102c19bd pop ecx */
  ECX = (pop32());
L_102c19be:;
  /* 102c19be mov dword ptr [0x102c6920], esi */
  w32((uint32_t)(0x102c6920), (ESI));
  /* 102c19c4 mov dword ptr [0x102c6a20], 0x20 */
  w32((uint32_t)(0x102c6a20), (0x20u));
  /* 102c19ce lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102c19d4:;
  /* 102c19d4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c19d6 jae 0x102c19f6 */
  if (!C.cf) goto L_102c19f6;
  /* 102c19d8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102c19dc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102c19df and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102c19e3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102c19e7 mov eax, dword ptr [0x102c6920] */
  EAX = (r32((uint32_t)(0x102c6920)));
  /* 102c19ec add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c19ef add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c19f4 jmp 0x102c19d4 */
  goto L_102c19d4;
L_102c19f6:;
  /* 102c19f6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102c19f9 push eax */
  push32((uint32_t)(EAX));
  /* 102c19fa call dword ptr [0x102c5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5090))), 0x102c1a00u);
  /* 102c1a00 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102c1a05 je 0x102c1adc */
  if (C.zf) goto L_102c1adc;
  /* 102c1a0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102c1a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1a10 je 0x102c1adc */
  if (C.zf) goto L_102c1adc;
  /* 102c1a16 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 102c1a18 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 102c1a1b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 102c1a1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102c1a21 mov eax, 0x800 */
  EAX = (0x800u);
  /* 102c1a26 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1a28 jl 0x102c1a2c */
  if ((C.sf!=C.of)) goto L_102c1a2c;
  /* 102c1a2a mov edi, eax */
  EDI = (EAX);
L_102c1a2c:;
  /* 102c1a2c cmp dword ptr [0x102c6a20], edi */
  { uint32_t _a=(r32((uint32_t)(0x102c6a20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1a32 jge 0x102c1a8a */
  if ((C.sf==C.of)) goto L_102c1a8a;
  /* 102c1a34 mov esi, 0x102c6924 */
  ESI = (0x102c6924u);
L_102c1a39:;
  /* 102c1a39 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102c1a3e call 0x102c2401 */
  push32(0x102c1a43u); f_102c2401();
  /* 102c1a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1a45 pop ecx */
  ECX = (pop32());
  /* 102c1a46 je 0x102c1a84 */
  if (C.zf) goto L_102c1a84;
  /* 102c1a48 add dword ptr [0x102c6a20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x102c6a20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x102c6a20), (_r)); fl_add(_a,_b,_r,32); }
  /* 102c1a4f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102c1a51 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_102c1a57:;
  /* 102c1a57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1a59 jae 0x102c1a77 */
  if (!C.cf) goto L_102c1a77;
  /* 102c1a5b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 102c1a5f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102c1a62 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102c1a66 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 102c1a6a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102c1a6c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1a6f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1a75 jmp 0x102c1a57 */
  goto L_102c1a57;
L_102c1a77:;
  /* 102c1a77 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1a7a cmp dword ptr [0x102c6a20], edi */
  { uint32_t _a=(r32((uint32_t)(0x102c6a20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1a80 jl 0x102c1a39 */
  if ((C.sf!=C.of)) goto L_102c1a39;
  /* 102c1a82 jmp 0x102c1a8a */
  goto L_102c1a8a;
L_102c1a84:;
  /* 102c1a84 mov edi, dword ptr [0x102c6a20] */
  EDI = (r32((uint32_t)(0x102c6a20)));
L_102c1a8a:;
  /* 102c1a8a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102c1a8c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c1a8e jle 0x102c1adc */
  if ((C.zf||C.sf!=C.of)) goto L_102c1adc;
L_102c1a90:;
  /* 102c1a90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c1a93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102c1a95 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1a98 je 0x102c1ad2 */
  if (C.zf) goto L_102c1ad2;
  /* 102c1a9a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102c1a9c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102c1a9e je 0x102c1ad2 */
  if (C.zf) goto L_102c1ad2;
  /* 102c1aa0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102c1aa2 jne 0x102c1aaf */
  if (!C.zf) goto L_102c1aaf;
  /* 102c1aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1aa5 call dword ptr [0x102c508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c508c))), 0x102c1aabu);
  /* 102c1aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1aad je 0x102c1ad2 */
  if (C.zf) goto L_102c1ad2;
L_102c1aaf:;
  /* 102c1aaf mov ecx, esi */
  ECX = (ESI);
  /* 102c1ab1 mov eax, esi */
  EAX = (ESI);
  /* 102c1ab3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102c1ab6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102c1ab9 mov ecx, dword ptr [ecx*4 + 0x102c6920] */
  ECX = (r32((uint32_t)(ECX*4 + 0x102c6920)));
  /* 102c1ac0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102c1ac3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102c1ac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c1ac9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 102c1acb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102c1acd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 102c1acf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_102c1ad2:;
  /* 102c1ad2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102c1ad6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c1ad7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102c1ad8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1ada jl 0x102c1a90 */
  if ((C.sf!=C.of)) goto L_102c1a90;
L_102c1adc:;
  /* 102c1adc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102c1ade:;
  /* 102c1ade mov ecx, dword ptr [0x102c6920] */
  ECX = (r32((uint32_t)(0x102c6920)));
  /* 102c1ae4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102c1ae7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1aeb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102c1aee jne 0x102c1b3d */
  if (!C.zf) goto L_102c1b3d;
  /* 102c1af0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102c1af2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102c1af6 jne 0x102c1afd */
  if (!C.zf) goto L_102c1afd;
  /* 102c1af8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102c1afa pop eax */
  EAX = (pop32());
  /* 102c1afb jmp 0x102c1b07 */
  goto L_102c1b07;
L_102c1afd:;
  /* 102c1afd mov eax, ebx */
  EAX = (EBX);
  /* 102c1aff dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102c1b00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102c1b02 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1b04 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102c1b07:;
  /* 102c1b07 push eax */
  push32((uint32_t)(EAX));
  /* 102c1b08 call dword ptr [0x102c5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5088))), 0x102c1b0eu);
  /* 102c1b0e mov edi, eax */
  EDI = (EAX);
  /* 102c1b10 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b13 je 0x102c1b2c */
  if (C.zf) goto L_102c1b2c;
  /* 102c1b15 push edi */
  push32((uint32_t)(EDI));
  /* 102c1b16 call dword ptr [0x102c508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c508c))), 0x102c1b1cu);
  /* 102c1b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1b1e je 0x102c1b2c */
  if (C.zf) goto L_102c1b2c;
  /* 102c1b20 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c1b25 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102c1b27 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b2a jne 0x102c1b32 */
  if (!C.zf) goto L_102c1b32;
L_102c1b2c:;
  /* 102c1b2c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102c1b30 jmp 0x102c1b41 */
  goto L_102c1b41;
L_102c1b32:;
  /* 102c1b32 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b35 jne 0x102c1b41 */
  if (!C.zf) goto L_102c1b41;
  /* 102c1b37 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102c1b3b jmp 0x102c1b41 */
  goto L_102c1b41;
L_102c1b3d:;
  /* 102c1b3d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102c1b41:;
  /* 102c1b41 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102c1b42 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b45 jl 0x102c1ade */
  if ((C.sf!=C.of)) goto L_102c1ade;
  /* 102c1b47 push dword ptr [0x102c6a20] */
  push32((uint32_t)(r32((uint32_t)(0x102c6a20))));
  /* 102c1b4d call dword ptr [0x102c5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5084))), 0x102c1b53u);
  /* 102c1b53 pop edi */
  EDI = (pop32());
  /* 102c1b54 pop esi */
  ESI = (pop32());
  /* 102c1b55 pop ebx */
  EBX = (pop32());
  /* 102c1b56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c1b57 ret  */
  ESPCHK(0x102c199cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b58 @ 0x102c1b58 (84 bytes, 33 insns) */
void f_102c1b58(void) {
  FTRACE(0x102c1b58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1b58 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1b59 push esi */
  push32((uint32_t)(ESI));
  /* 102c1b5a push edi */
  push32((uint32_t)(EDI));
  /* 102c1b5b mov esi, 0x102c6920 */
  ESI = (0x102c6920u);
L_102c1b60:;
  /* 102c1b60 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102c1b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1b64 je 0x102c1b9d */
  if (C.zf) goto L_102c1b9d;
  /* 102c1b66 mov edi, eax */
  EDI = (EAX);
  /* 102c1b68 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1b6d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b6f jae 0x102c1b92 */
  if (!C.cf) goto L_102c1b92;
  /* 102c1b71 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_102c1b74:;
  /* 102c1b74 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b78 je 0x102c1b81 */
  if (C.zf) goto L_102c1b81;
  /* 102c1b7a push ebx */
  push32((uint32_t)(EBX));
  /* 102c1b7b call dword ptr [0x102c5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5094))), 0x102c1b81u);
L_102c1b81:;
  /* 102c1b81 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102c1b83 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1b86 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1b8b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1b8e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1b90 jb 0x102c1b74 */
  if (C.cf) goto L_102c1b74;
L_102c1b92:;
  /* 102c1b92 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c1b94 call 0x102c23b9 */
  push32(0x102c1b99u); f_102c23b9();
  /* 102c1b99 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102c1b9c pop ecx */
  ECX = (pop32());
L_102c1b9d:;
  /* 102c1b9d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1ba0 cmp esi, 0x102c6a20 */
  { uint32_t _a=(ESI),_b=(0x102c6a20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1ba6 jl 0x102c1b60 */
  if ((C.sf!=C.of)) goto L_102c1b60;
  /* 102c1ba8 pop edi */
  EDI = (pop32());
  /* 102c1ba9 pop esi */
  ESI = (pop32());
  /* 102c1baa pop ebx */
  EBX = (pop32());
  /* 102c1bab ret  */
  ESPCHK(0x102c1b58u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bac @ 0x102c1bac (185 bytes, 71 insns) */
void f_102c1bac(void) {
  FTRACE(0x102c1bacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1bac push ebx */
  push32((uint32_t)(EBX));
  /* 102c1bad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c1baf cmp dword ptr [0x102c6a28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102c6a28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1bb5 push esi */
  push32((uint32_t)(ESI));
  /* 102c1bb6 push edi */
  push32((uint32_t)(EDI));
  /* 102c1bb7 jne 0x102c1bbe */
  if (!C.zf) goto L_102c1bbe;
  /* 102c1bb9 call 0x102c29d3 */
  push32(0x102c1bbeu); f_102c29d3();
L_102c1bbe:;
  /* 102c1bbe mov esi, dword ptr [0x102c64bc] */
  ESI = (r32((uint32_t)(0x102c64bc)));
  /* 102c1bc4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_102c1bc6:;
  /* 102c1bc6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c1bc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1bca je 0x102c1bde */
  if (C.zf) goto L_102c1bde;
  /* 102c1bcc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1bce je 0x102c1bd1 */
  if (C.zf) goto L_102c1bd1;
  /* 102c1bd0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102c1bd1:;
  /* 102c1bd1 push esi */
  push32((uint32_t)(ESI));
  /* 102c1bd2 call 0x102c2580 */
  push32(0x102c1bd7u); f_102c2580();
  /* 102c1bd7 pop ecx */
  ECX = (pop32());
  /* 102c1bd8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 102c1bdc jmp 0x102c1bc6 */
  goto L_102c1bc6;
L_102c1bde:;
  /* 102c1bde lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102c1be5 push eax */
  push32((uint32_t)(EAX));
  /* 102c1be6 call 0x102c2401 */
  push32(0x102c1bebu); f_102c2401();
  /* 102c1beb mov esi, eax */
  ESI = (EAX);
  /* 102c1bed pop ecx */
  ECX = (pop32());
  /* 102c1bee cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1bf0 mov dword ptr [0x102c64ec], esi */
  w32((uint32_t)(0x102c64ec), (ESI));
  /* 102c1bf6 jne 0x102c1c00 */
  if (!C.zf) goto L_102c1c00;
  /* 102c1bf8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102c1bfa call 0x102c1726 */
  push32(0x102c1bffu); f_102c1726();
  /* 102c1bff pop ecx */
  ECX = (pop32());
L_102c1c00:;
  /* 102c1c00 mov edi, dword ptr [0x102c64bc] */
  EDI = (r32((uint32_t)(0x102c64bc)));
  /* 102c1c06 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1c08 je 0x102c1c43 */
  if (C.zf) goto L_102c1c43;
  /* 102c1c0a push ebp */
  push32((uint32_t)(EBP));
L_102c1c0b:;
  /* 102c1c0b push edi */
  push32((uint32_t)(EDI));
  /* 102c1c0c call 0x102c2580 */
  push32(0x102c1c11u); f_102c2580();
  /* 102c1c11 mov ebp, eax */
  EBP = (EAX);
  /* 102c1c13 pop ecx */
  ECX = (pop32());
  /* 102c1c14 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102c1c15 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1c18 je 0x102c1c3c */
  if (C.zf) goto L_102c1c3c;
  /* 102c1c1a push ebp */
  push32((uint32_t)(EBP));
  /* 102c1c1b call 0x102c2401 */
  push32(0x102c1c20u); f_102c2401();
  /* 102c1c20 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1c22 pop ecx */
  ECX = (pop32());
  /* 102c1c23 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102c1c25 jne 0x102c1c2f */
  if (!C.zf) goto L_102c1c2f;
  /* 102c1c27 push 9 */
  push32((uint32_t)(0x9u));
  /* 102c1c29 call 0x102c1726 */
  push32(0x102c1c2eu); f_102c1726();
  /* 102c1c2e pop ecx */
  ECX = (pop32());
L_102c1c2f:;
  /* 102c1c2f push edi */
  push32((uint32_t)(EDI));
  /* 102c1c30 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c1c32 call 0x102c2490 */
  push32(0x102c1c37u); f_102c2490();
  /* 102c1c37 pop ecx */
  ECX = (pop32());
  /* 102c1c38 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1c3b pop ecx */
  ECX = (pop32());
L_102c1c3c:;
  /* 102c1c3c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1c3e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1c40 jne 0x102c1c0b */
  if (!C.zf) goto L_102c1c0b;
  /* 102c1c42 pop ebp */
  EBP = (pop32());
L_102c1c43:;
  /* 102c1c43 push dword ptr [0x102c64bc] */
  push32((uint32_t)(r32((uint32_t)(0x102c64bc))));
  /* 102c1c49 call 0x102c23b9 */
  push32(0x102c1c4eu); f_102c23b9();
  /* 102c1c4e pop ecx */
  ECX = (pop32());
  /* 102c1c4f mov dword ptr [0x102c64bc], ebx */
  w32((uint32_t)(0x102c64bc), (EBX));
  /* 102c1c55 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 102c1c57 pop edi */
  EDI = (pop32());
  /* 102c1c58 pop esi */
  ESI = (pop32());
  /* 102c1c59 mov dword ptr [0x102c6a24], 1 */
  w32((uint32_t)(0x102c6a24), (0x1u));
  /* 102c1c63 pop ebx */
  EBX = (pop32());
  /* 102c1c64 ret  */
  ESPCHK(0x102c1bacu, _esp0);
  ESP += 4; return;
}

/* FUN_10001c65 @ 0x102c1c65 (153 bytes, 62 insns) */
void f_102c1c65(void) {
  FTRACE(0x102c1c65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1c65 push ebp */
  push32((uint32_t)(EBP));
  /* 102c1c66 mov ebp, esp */
  EBP = (ESP);
  /* 102c1c68 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1c69 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1c6a push ebx */
  push32((uint32_t)(EBX));
  /* 102c1c6b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c1c6d cmp dword ptr [0x102c6a28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102c6a28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1c73 push esi */
  push32((uint32_t)(ESI));
  /* 102c1c74 push edi */
  push32((uint32_t)(EDI));
  /* 102c1c75 jne 0x102c1c7c */
  if (!C.zf) goto L_102c1c7c;
  /* 102c1c77 call 0x102c29d3 */
  push32(0x102c1c7cu); f_102c29d3();
L_102c1c7c:;
  /* 102c1c7c mov esi, 0x102c6510 */
  ESI = (0x102c6510u);
  /* 102c1c81 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102c1c86 push esi */
  push32((uint32_t)(ESI));
  /* 102c1c87 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1c88 call dword ptr [0x102c5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5098))), 0x102c1c8eu);
  /* 102c1c8e mov eax, dword ptr [0x102c6a38] */
  EAX = (r32((uint32_t)(0x102c6a38)));
  /* 102c1c93 mov dword ptr [0x102c64fc], esi */
  w32((uint32_t)(0x102c64fc), (ESI));
  /* 102c1c99 mov edi, esi */
  EDI = (ESI);
  /* 102c1c9b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1c9d je 0x102c1ca1 */
  if (C.zf) goto L_102c1ca1;
  /* 102c1c9f mov edi, eax */
  EDI = (EAX);
L_102c1ca1:;
  /* 102c1ca1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102c1ca4 push eax */
  push32((uint32_t)(EAX));
  /* 102c1ca5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102c1ca8 push eax */
  push32((uint32_t)(EAX));
  /* 102c1ca9 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1caa push ebx */
  push32((uint32_t)(EBX));
  /* 102c1cab push edi */
  push32((uint32_t)(EDI));
  /* 102c1cac call 0x102c1cfe */
  push32(0x102c1cb1u); f_102c1cfe();
  /* 102c1cb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102c1cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c1cb7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102c1cba push eax */
  push32((uint32_t)(EAX));
  /* 102c1cbb call 0x102c2401 */
  push32(0x102c1cc0u); f_102c2401();
  /* 102c1cc0 mov esi, eax */
  ESI = (EAX);
  /* 102c1cc2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1cc5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1cc7 jne 0x102c1cd1 */
  if (!C.zf) goto L_102c1cd1;
  /* 102c1cc9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102c1ccb call 0x102c1726 */
  push32(0x102c1cd0u); f_102c1726();
  /* 102c1cd0 pop ecx */
  ECX = (pop32());
L_102c1cd1:;
  /* 102c1cd1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102c1cd4 push eax */
  push32((uint32_t)(EAX));
  /* 102c1cd5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102c1cd8 push eax */
  push32((uint32_t)(EAX));
  /* 102c1cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c1cdc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 102c1cdf push eax */
  push32((uint32_t)(EAX));
  /* 102c1ce0 push esi */
  push32((uint32_t)(ESI));
  /* 102c1ce1 push edi */
  push32((uint32_t)(EDI));
  /* 102c1ce2 call 0x102c1cfe */
  push32(0x102c1ce7u); f_102c1cfe();
  /* 102c1ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c1cea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1ced dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102c1cee mov dword ptr [0x102c64e4], esi */
  w32((uint32_t)(0x102c64e4), (ESI));
  /* 102c1cf4 pop edi */
  EDI = (pop32());
  /* 102c1cf5 pop esi */
  ESI = (pop32());
  /* 102c1cf6 mov dword ptr [0x102c64e0], eax */
  w32((uint32_t)(0x102c64e0), (EAX));
  /* 102c1cfb pop ebx */
  EBX = (pop32());
  /* 102c1cfc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c1cfd ret  */
  ESPCHK(0x102c1c65u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cfe @ 0x102c1cfe (436 bytes, 187 insns) */
void f_102c1cfe(void) {
  FTRACE(0x102c1cfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1cfe push ebp */
  push32((uint32_t)(EBP));
  /* 102c1cff mov ebp, esp */
  EBP = (ESP);
  /* 102c1d01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102c1d04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102c1d07 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1d08 push esi */
  push32((uint32_t)(ESI));
  /* 102c1d09 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102c1d0c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102c1d0f push edi */
  push32((uint32_t)(EDI));
  /* 102c1d10 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102c1d13 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102c1d19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c1d1c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c1d1e je 0x102c1d28 */
  if (C.zf) goto L_102c1d28;
  /* 102c1d20 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102c1d22 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1d25 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102c1d28:;
  /* 102c1d28 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1d2b jne 0x102c1d71 */
  if (!C.zf) goto L_102c1d71;
L_102c1d2d:;
  /* 102c1d2d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102c1d30 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1d31 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1d34 je 0x102c1d5f */
  if (C.zf) goto L_102c1d5f;
  /* 102c1d36 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c1d38 je 0x102c1d5f */
  if (C.zf) goto L_102c1d5f;
  /* 102c1d3a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102c1d3d test byte ptr [edx + 0x102c6801], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102c6801)))&(0x4u); fl_logic(_r,8); }
  /* 102c1d44 je 0x102c1d52 */
  if (C.zf) goto L_102c1d52;
  /* 102c1d46 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1d48 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1d4a je 0x102c1d52 */
  if (C.zf) goto L_102c1d52;
  /* 102c1d4c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1d4e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102c1d50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c1d51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102c1d52:;
  /* 102c1d52 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1d54 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1d56 je 0x102c1d2d */
  if (C.zf) goto L_102c1d2d;
  /* 102c1d58 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1d5a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102c1d5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c1d5d jmp 0x102c1d2d */
  goto L_102c1d2d;
L_102c1d5f:;
  /* 102c1d5f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1d61 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1d63 je 0x102c1d69 */
  if (C.zf) goto L_102c1d69;
  /* 102c1d65 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102c1d68 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102c1d69:;
  /* 102c1d69 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1d6c jne 0x102c1db4 */
  if (!C.zf) goto L_102c1db4;
  /* 102c1d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1d6f jmp 0x102c1db4 */
  goto L_102c1db4;
L_102c1d71:;
  /* 102c1d71 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1d73 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1d75 je 0x102c1d7c */
  if (C.zf) goto L_102c1d7c;
  /* 102c1d77 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1d79 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102c1d7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102c1d7c:;
  /* 102c1d7c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1d7e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1d7f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102c1d82 test byte ptr [ebx + 0x102c6801], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102c6801)))&(0x4u); fl_logic(_r,8); }
  /* 102c1d89 je 0x102c1d97 */
  if (C.zf) goto L_102c1d97;
  /* 102c1d8b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1d8d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1d8f je 0x102c1d96 */
  if (C.zf) goto L_102c1d96;
  /* 102c1d91 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 102c1d93 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 102c1d95 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102c1d96:;
  /* 102c1d96 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102c1d97:;
  /* 102c1d97 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1d9a je 0x102c1da5 */
  if (C.zf) goto L_102c1da5;
  /* 102c1d9c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c1d9e je 0x102c1da9 */
  if (C.zf) goto L_102c1da9;
  /* 102c1da0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1da3 jne 0x102c1d71 */
  if (!C.zf) goto L_102c1d71;
L_102c1da5:;
  /* 102c1da5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c1da7 jne 0x102c1dac */
  if (!C.zf) goto L_102c1dac;
L_102c1da9:;
  /* 102c1da9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102c1daa jmp 0x102c1db4 */
  goto L_102c1db4;
L_102c1dac:;
  /* 102c1dac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1dae je 0x102c1db4 */
  if (C.zf) goto L_102c1db4;
  /* 102c1db0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_102c1db4:;
  /* 102c1db4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_102c1db8:;
  /* 102c1db8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1dbb je 0x102c1ea1 */
  if (C.zf) goto L_102c1ea1;
L_102c1dc1:;
  /* 102c1dc1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1dc3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1dc6 je 0x102c1dcd */
  if (C.zf) goto L_102c1dcd;
  /* 102c1dc8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1dcb jne 0x102c1dd0 */
  if (!C.zf) goto L_102c1dd0;
L_102c1dcd:;
  /* 102c1dcd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1dce jmp 0x102c1dc1 */
  goto L_102c1dc1;
L_102c1dd0:;
  /* 102c1dd0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1dd3 je 0x102c1ea1 */
  if (C.zf) goto L_102c1ea1;
  /* 102c1dd9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c1ddb je 0x102c1de5 */
  if (C.zf) goto L_102c1de5;
  /* 102c1ddd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102c1ddf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c1de2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102c1de5:;
  /* 102c1de5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102c1de8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_102c1dea:;
  /* 102c1dea mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102c1df1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102c1df3:;
  /* 102c1df3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1df6 jne 0x102c1dfc */
  if (!C.zf) goto L_102c1dfc;
  /* 102c1df8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1df9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102c1dfa jmp 0x102c1df3 */
  goto L_102c1df3;
L_102c1dfc:;
  /* 102c1dfc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1dff jne 0x102c1e2d */
  if (!C.zf) goto L_102c1e2d;
  /* 102c1e01 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102c1e04 jne 0x102c1e2b */
  if (!C.zf) goto L_102c1e2b;
  /* 102c1e06 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c1e08 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1e0b je 0x102c1e1a */
  if (C.zf) goto L_102c1e1a;
  /* 102c1e0d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1e11 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102c1e14 jne 0x102c1e1a */
  if (!C.zf) goto L_102c1e1a;
  /* 102c1e16 mov eax, edx */
  EAX = (EDX);
  /* 102c1e18 jmp 0x102c1e1d */
  goto L_102c1e1d;
L_102c1e1a:;
  /* 102c1e1a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102c1e1d:;
  /* 102c1e1d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102c1e20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102c1e22 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1e25 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102c1e28 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102c1e2b:;
  /* 102c1e2b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102c1e2d:;
  /* 102c1e2d mov edx, ebx */
  EDX = (EBX);
  /* 102c1e2f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102c1e30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102c1e32 je 0x102c1e42 */
  if (C.zf) goto L_102c1e42;
  /* 102c1e34 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102c1e35:;
  /* 102c1e35 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1e37 je 0x102c1e3d */
  if (C.zf) goto L_102c1e3d;
  /* 102c1e39 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102c1e3c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102c1e3d:;
  /* 102c1e3d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1e3f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102c1e40 jne 0x102c1e35 */
  if (!C.zf) goto L_102c1e35;
L_102c1e42:;
  /* 102c1e42 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1e44 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c1e46 je 0x102c1e92 */
  if (C.zf) goto L_102c1e92;
  /* 102c1e48 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1e4c jne 0x102c1e58 */
  if (!C.zf) goto L_102c1e58;
  /* 102c1e4e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1e51 je 0x102c1e92 */
  if (C.zf) goto L_102c1e92;
  /* 102c1e53 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1e56 je 0x102c1e92 */
  if (C.zf) goto L_102c1e92;
L_102c1e58:;
  /* 102c1e58 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1e5c je 0x102c1e8c */
  if (C.zf) goto L_102c1e8c;
  /* 102c1e5e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1e60 je 0x102c1e7b */
  if (C.zf) goto L_102c1e7b;
  /* 102c1e62 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102c1e65 test byte ptr [ebx + 0x102c6801], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102c6801)))&(0x4u); fl_logic(_r,8); }
  /* 102c1e6c je 0x102c1e74 */
  if (C.zf) goto L_102c1e74;
  /* 102c1e6e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102c1e70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c1e71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1e72 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102c1e74:;
  /* 102c1e74 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102c1e76 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102c1e78 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c1e79 jmp 0x102c1e8a */
  goto L_102c1e8a;
L_102c1e7b:;
  /* 102c1e7b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102c1e7e test byte ptr [edx + 0x102c6801], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102c6801)))&(0x4u); fl_logic(_r,8); }
  /* 102c1e85 je 0x102c1e8a */
  if (C.zf) goto L_102c1e8a;
  /* 102c1e87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1e88 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102c1e8a:;
  /* 102c1e8a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102c1e8c:;
  /* 102c1e8c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1e8d jmp 0x102c1dea */
  goto L_102c1dea;
L_102c1e92:;
  /* 102c1e92 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c1e94 je 0x102c1e9a */
  if (C.zf) goto L_102c1e9a;
  /* 102c1e96 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102c1e99 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102c1e9a:;
  /* 102c1e9a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102c1e9c jmp 0x102c1db8 */
  goto L_102c1db8;
L_102c1ea1:;
  /* 102c1ea1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c1ea3 je 0x102c1ea8 */
  if (C.zf) goto L_102c1ea8;
  /* 102c1ea5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102c1ea8:;
  /* 102c1ea8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102c1eab pop edi */
  EDI = (pop32());
  /* 102c1eac pop esi */
  ESI = (pop32());
  /* 102c1ead pop ebx */
  EBX = (pop32());
  /* 102c1eae inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 102c1eb0 pop ebp */
  EBP = (pop32());
  /* 102c1eb1 ret  */
  ESPCHK(0x102c1cfeu, _esp0);
  ESP += 4; return;
}

/* FUN_10001eb2 @ 0x102c1eb2 (306 bytes, 132 insns) */
void f_102c1eb2(void) {
  FTRACE(0x102c1eb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 102c1eb4 mov eax, dword ptr [0x102c6614] */
  EAX = (r32((uint32_t)(0x102c6614)));
  /* 102c1eb9 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1eba push ebp */
  push32((uint32_t)(EBP));
  /* 102c1ebb mov ebp, dword ptr [0x102c507c] */
  EBP = (r32((uint32_t)(0x102c507c)));
  /* 102c1ec1 push esi */
  push32((uint32_t)(ESI));
  /* 102c1ec2 push edi */
  push32((uint32_t)(EDI));
  /* 102c1ec3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c1ec5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102c1ec7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c1ec9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1ecb jne 0x102c1f00 */
  if (!C.zf) goto L_102c1f00;
  /* 102c1ecd call ebp */
  call_ind((uint32_t)(EBP), 0x102c1ecfu);
  /* 102c1ecf mov esi, eax */
  ESI = (EAX);
  /* 102c1ed1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1ed3 je 0x102c1ee1 */
  if (C.zf) goto L_102c1ee1;
  /* 102c1ed5 mov dword ptr [0x102c6614], 1 */
  w32((uint32_t)(0x102c6614), (0x1u));
  /* 102c1edf jmp 0x102c1f09 */
  goto L_102c1f09;
L_102c1ee1:;
  /* 102c1ee1 call dword ptr [0x102c50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50a8))), 0x102c1ee7u);
  /* 102c1ee7 mov edi, eax */
  EDI = (EAX);
  /* 102c1ee9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1eeb je 0x102c1fdb */
  if (C.zf) goto L_102c1fdb;
  /* 102c1ef1 mov dword ptr [0x102c6614], 2 */
  w32((uint32_t)(0x102c6614), (0x2u));
  /* 102c1efb jmp 0x102c1f8f */
  goto L_102c1f8f;
L_102c1f00:;
  /* 102c1f00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f03 jne 0x102c1f8a */
  if (!C.zf) goto L_102c1f8a;
L_102c1f09:;
  /* 102c1f09 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f0b jne 0x102c1f19 */
  if (!C.zf) goto L_102c1f19;
  /* 102c1f0d call ebp */
  call_ind((uint32_t)(EBP), 0x102c1f0fu);
  /* 102c1f0f mov esi, eax */
  ESI = (EAX);
  /* 102c1f11 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f13 je 0x102c1fdb */
  if (C.zf) goto L_102c1fdb;
L_102c1f19:;
  /* 102c1f19 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102c1f1c mov eax, esi */
  EAX = (ESI);
  /* 102c1f1e je 0x102c1f2e */
  if (C.zf) goto L_102c1f2e;
L_102c1f20:;
  /* 102c1f20 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1f21 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1f22 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102c1f25 jne 0x102c1f20 */
  if (!C.zf) goto L_102c1f20;
  /* 102c1f27 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1f28 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1f29 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102c1f2c jne 0x102c1f20 */
  if (!C.zf) goto L_102c1f20;
L_102c1f2e:;
  /* 102c1f2e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1f30 mov edi, dword ptr [0x102c50a4] */
  EDI = (r32((uint32_t)(0x102c50a4)));
  /* 102c1f36 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102c1f38 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f39 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1f3b push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f3c push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f3d push eax */
  push32((uint32_t)(EAX));
  /* 102c1f3e push esi */
  push32((uint32_t)(ESI));
  /* 102c1f3f push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f40 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f41 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 102c1f45 call edi */
  call_ind((uint32_t)(EDI), 0x102c1f47u);
  /* 102c1f47 mov ebp, eax */
  EBP = (EAX);
  /* 102c1f49 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f4b je 0x102c1f7f */
  if (C.zf) goto L_102c1f7f;
  /* 102c1f4d push ebp */
  push32((uint32_t)(EBP));
  /* 102c1f4e call 0x102c2401 */
  push32(0x102c1f53u); f_102c2401();
  /* 102c1f53 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f55 pop ecx */
  ECX = (pop32());
  /* 102c1f56 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102c1f5a je 0x102c1f7f */
  if (C.zf) goto L_102c1f7f;
  /* 102c1f5c push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f5d push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f5e push ebp */
  push32((uint32_t)(EBP));
  /* 102c1f5f push eax */
  push32((uint32_t)(EAX));
  /* 102c1f60 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 102c1f64 push esi */
  push32((uint32_t)(ESI));
  /* 102c1f65 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f66 push ebx */
  push32((uint32_t)(EBX));
  /* 102c1f67 call edi */
  call_ind((uint32_t)(EDI), 0x102c1f69u);
  /* 102c1f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1f6b jne 0x102c1f7b */
  if (!C.zf) goto L_102c1f7b;
  /* 102c1f6d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102c1f71 call 0x102c23b9 */
  push32(0x102c1f76u); f_102c23b9();
  /* 102c1f76 pop ecx */
  ECX = (pop32());
  /* 102c1f77 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_102c1f7b:;
  /* 102c1f7b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_102c1f7f:;
  /* 102c1f7f push esi */
  push32((uint32_t)(ESI));
  /* 102c1f80 call dword ptr [0x102c50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50a0))), 0x102c1f86u);
  /* 102c1f86 mov eax, ebx */
  EAX = (EBX);
  /* 102c1f88 jmp 0x102c1fdd */
  goto L_102c1fdd;
L_102c1f8a:;
  /* 102c1f8a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f8d jne 0x102c1fdb */
  if (!C.zf) goto L_102c1fdb;
L_102c1f8f:;
  /* 102c1f8f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f91 jne 0x102c1f9f */
  if (!C.zf) goto L_102c1f9f;
  /* 102c1f93 call dword ptr [0x102c50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50a8))), 0x102c1f99u);
  /* 102c1f99 mov edi, eax */
  EDI = (EAX);
  /* 102c1f9b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1f9d je 0x102c1fdb */
  if (C.zf) goto L_102c1fdb;
L_102c1f9f:;
  /* 102c1f9f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1fa1 mov eax, edi */
  EAX = (EDI);
  /* 102c1fa3 je 0x102c1faf */
  if (C.zf) goto L_102c1faf;
L_102c1fa5:;
  /* 102c1fa5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1fa6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1fa8 jne 0x102c1fa5 */
  if (!C.zf) goto L_102c1fa5;
  /* 102c1faa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1fab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c1fad jne 0x102c1fa5 */
  if (!C.zf) goto L_102c1fa5;
L_102c1faf:;
  /* 102c1faf sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c1fb1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c1fb2 mov ebp, eax */
  EBP = (EAX);
  /* 102c1fb4 push ebp */
  push32((uint32_t)(EBP));
  /* 102c1fb5 call 0x102c2401 */
  push32(0x102c1fbau); f_102c2401();
  /* 102c1fba mov esi, eax */
  ESI = (EAX);
  /* 102c1fbc pop ecx */
  ECX = (pop32());
  /* 102c1fbd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1fbf jne 0x102c1fc5 */
  if (!C.zf) goto L_102c1fc5;
  /* 102c1fc1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102c1fc3 jmp 0x102c1fd0 */
  goto L_102c1fd0;
L_102c1fc5:;
  /* 102c1fc5 push ebp */
  push32((uint32_t)(EBP));
  /* 102c1fc6 push edi */
  push32((uint32_t)(EDI));
  /* 102c1fc7 push esi */
  push32((uint32_t)(ESI));
  /* 102c1fc8 call 0x102c29f0 */
  push32(0x102c1fcdu); f_102c29f0();
  /* 102c1fcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c1fd0:;
  /* 102c1fd0 push edi */
  push32((uint32_t)(EDI));
  /* 102c1fd1 call dword ptr [0x102c509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c509c))), 0x102c1fd7u);
  /* 102c1fd7 mov eax, esi */
  EAX = (ESI);
  /* 102c1fd9 jmp 0x102c1fdd */
  goto L_102c1fdd;
L_102c1fdb:;
  /* 102c1fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102c1fdd:;
  /* 102c1fdd pop edi */
  EDI = (pop32());
  /* 102c1fde pop esi */
  ESI = (pop32());
  /* 102c1fdf pop ebp */
  EBP = (pop32());
  /* 102c1fe0 pop ebx */
  EBX = (pop32());
  /* 102c1fe1 pop ecx */
  ECX = (pop32());
  /* 102c1fe2 pop ecx */
  ECX = (pop32());
  /* 102c1fe3 ret  */
  ESPCHK(0x102c1eb2u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fe4 @ 0x102c1fe4 (60 bytes, 20 insns) */
void f_102c1fe4(void) {
  FTRACE(0x102c1fe4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c1fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c1fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c1fe8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c1fec push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102c1ff1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102c1ff4 push eax */
  push32((uint32_t)(EAX));
  /* 102c1ff5 call dword ptr [0x102c5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5080))), 0x102c1ffbu);
  /* 102c1ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c1ffd mov dword ptr [0x102c6908], eax */
  w32((uint32_t)(0x102c6908), (EAX));
  /* 102c2002 je 0x102c2019 */
  if (C.zf) goto L_102c2019;
  /* 102c2004 call 0x102c2d25 */
  push32(0x102c2009u); f_102c2d25();
  /* 102c2009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c200b jne 0x102c201c */
  if (!C.zf) goto L_102c201c;
  /* 102c200d push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c2013 call dword ptr [0x102c5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5050))), 0x102c2019u);
L_102c2019:;
  /* 102c2019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c201b ret  */
  ESPCHK(0x102c1fe4u, _esp0);
  ESP += 4; return;
L_102c201c:;
  /* 102c201c push 1 */
  push32((uint32_t)(0x1u));
  /* 102c201e pop eax */
  EAX = (pop32());
  /* 102c201f ret  */
  ESPCHK(0x102c1fe4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002020 @ 0x102c2020 (117 bytes, 38 insns) */
void f_102c2020(void) {
  FTRACE(0x102c2020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2020 push ebx */
  push32((uint32_t)(EBX));
  /* 102c2021 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c2023 cmp dword ptr [0x102c66d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102c66d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2029 push ebp */
  push32((uint32_t)(EBP));
  /* 102c202a mov ebp, dword ptr [0x102c5044] */
  EBP = (r32((uint32_t)(0x102c5044)));
  /* 102c2030 jle 0x102c2076 */
  if ((C.zf||C.sf!=C.of)) goto L_102c2076;
  /* 102c2032 mov eax, dword ptr [0x102c66d4] */
  EAX = (r32((uint32_t)(0x102c66d4)));
  /* 102c2037 push esi */
  push32((uint32_t)(ESI));
  /* 102c2038 push edi */
  push32((uint32_t)(EDI));
  /* 102c2039 mov edi, dword ptr [0x102c5048] */
  EDI = (r32((uint32_t)(0x102c5048)));
  /* 102c203f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_102c2042:;
  /* 102c2042 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102c2047 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102c204c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c204e call edi */
  call_ind((uint32_t)(EDI), 0x102c2050u);
  /* 102c2050 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102c2055 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c2057 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c2059 call edi */
  call_ind((uint32_t)(EDI), 0x102c205bu);
  /* 102c205b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 102c205e push 0 */
  push32((uint32_t)(0x0u));
  /* 102c2060 push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c2066 call ebp */
  call_ind((uint32_t)(EBP), 0x102c2068u);
  /* 102c2068 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c206b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102c206c cmp ebx, dword ptr [0x102c66d0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102c66d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2072 jl 0x102c2042 */
  if ((C.sf!=C.of)) goto L_102c2042;
  /* 102c2074 pop edi */
  EDI = (pop32());
  /* 102c2075 pop esi */
  ESI = (pop32());
L_102c2076:;
  /* 102c2076 push dword ptr [0x102c66d4] */
  push32((uint32_t)(r32((uint32_t)(0x102c66d4))));
  /* 102c207c push 0 */
  push32((uint32_t)(0x0u));
  /* 102c207e push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c2084 call ebp */
  call_ind((uint32_t)(EBP), 0x102c2086u);
  /* 102c2086 push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c208c call dword ptr [0x102c5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5050))), 0x102c2092u);
  /* 102c2092 pop ebp */
  EBP = (pop32());
  /* 102c2093 pop ebx */
  EBX = (pop32());
  /* 102c2094 ret  */
  ESPCHK(0x102c2020u, _esp0);
  ESP += 4; return;
}

/* FUN_10002095 @ 0x102c2095 (57 bytes, 18 insns) */
void f_102c2095(void) {
  FTRACE(0x102c2095u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2095 mov eax, dword ptr [0x102c64c4] */
  EAX = (r32((uint32_t)(0x102c64c4)));
  /* 102c209a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c209d je 0x102c20ac */
  if (C.zf) goto L_102c20ac;
  /* 102c209f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c20a1 jne 0x102c20cd */
  if (!C.zf) goto L_102c20cd;
  /* 102c20a3 cmp dword ptr [0x102c64c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102c64c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c20aa jne 0x102c20cd */
  if (!C.zf) goto L_102c20cd;
L_102c20ac:;
  /* 102c20ac push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 102c20b1 call 0x102c20ce */
  push32(0x102c20b6u); f_102c20ce();
  /* 102c20b6 mov eax, dword ptr [0x102c6618] */
  EAX = (r32((uint32_t)(0x102c6618)));
  /* 102c20bb pop ecx */
  ECX = (pop32());
  /* 102c20bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c20be je 0x102c20c2 */
  if (C.zf) goto L_102c20c2;
  /* 102c20c0 call eax */
  call_ind((uint32_t)(EAX), 0x102c20c2u);
L_102c20c2:;
  /* 102c20c2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102c20c7 call 0x102c20ce */
  push32(0x102c20ccu); f_102c20ce();
  /* 102c20cc pop ecx */
  ECX = (pop32());
L_102c20cd:;
  /* 102c20cd ret  */
  ESPCHK(0x102c2095u, _esp0);
  ESP += 4; return;
}

/* FUN_100020ce @ 0x102c20ce (339 bytes, 100 insns) */
void f_102c20ce(void) {
  FTRACE(0x102c20ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c20ce push ebp */
  push32((uint32_t)(EBP));
  /* 102c20cf mov ebp, esp */
  EBP = (ESP);
  /* 102c20d1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c20d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c20da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102c20dc mov eax, 0x102c6118 */
  EAX = (0x102c6118u);
L_102c20e1:;
  /* 102c20e1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c20e3 je 0x102c20f0 */
  if (C.zf) goto L_102c20f0;
  /* 102c20e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c20e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c20e9 cmp eax, 0x102c61a8 */
  { uint32_t _a=(EAX),_b=(0x102c61a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c20ee jl 0x102c20e1 */
  if ((C.sf!=C.of)) goto L_102c20e1;
L_102c20f0:;
  /* 102c20f0 push esi */
  push32((uint32_t)(ESI));
  /* 102c20f1 mov esi, ecx */
  ESI = (ECX);
  /* 102c20f3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 102c20f6 cmp edx, dword ptr [esi + 0x102c6118] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x102c6118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c20fc jne 0x102c221e */
  if (!C.zf) goto L_102c221e;
  /* 102c2102 mov eax, dword ptr [0x102c64c4] */
  EAX = (r32((uint32_t)(0x102c64c4)));
  /* 102c2107 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c210a je 0x102c21f8 */
  if (C.zf) goto L_102c21f8;
  /* 102c2110 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c2112 jne 0x102c2121 */
  if (!C.zf) goto L_102c2121;
  /* 102c2114 cmp dword ptr [0x102c64c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102c64c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c211b je 0x102c21f8 */
  if (C.zf) goto L_102c21f8;
L_102c2121:;
  /* 102c2121 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2127 je 0x102c221e */
  if (C.zf) goto L_102c221e;
  /* 102c212d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102c2133 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102c2138 push eax */
  push32((uint32_t)(EAX));
  /* 102c2139 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c213b call dword ptr [0x102c5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5098))), 0x102c2141u);
  /* 102c2141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c2143 jne 0x102c2158 */
  if (!C.zf) goto L_102c2158;
  /* 102c2145 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102c214b push 0x102c53f8 */
  push32((uint32_t)(0x102c53f8u));
  /* 102c2150 push eax */
  push32((uint32_t)(EAX));
  /* 102c2151 call 0x102c2490 */
  push32(0x102c2156u); f_102c2490();
  /* 102c2156 pop ecx */
  ECX = (pop32());
  /* 102c2157 pop ecx */
  ECX = (pop32());
L_102c2158:;
  /* 102c2158 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102c215e push edi */
  push32((uint32_t)(EDI));
  /* 102c215f push eax */
  push32((uint32_t)(EAX));
  /* 102c2160 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 102c2166 call 0x102c2580 */
  push32(0x102c216bu); f_102c2580();
  /* 102c216b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c216c pop ecx */
  ECX = (pop32());
  /* 102c216d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2170 jbe 0x102c219b */
  if ((C.cf||C.zf)) goto L_102c219b;
  /* 102c2172 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102c2178 push eax */
  push32((uint32_t)(EAX));
  /* 102c2179 call 0x102c2580 */
  push32(0x102c217eu); f_102c2580();
  /* 102c217e mov edi, eax */
  EDI = (EAX);
  /* 102c2180 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102c2186 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2189 push 3 */
  push32((uint32_t)(0x3u));
  /* 102c218b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c218d push 0x102c53f4 */
  push32((uint32_t)(0x102c53f4u));
  /* 102c2192 push edi */
  push32((uint32_t)(EDI));
  /* 102c2193 call 0x102c3600 */
  push32(0x102c2198u); f_102c3600();
  /* 102c2198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c219b:;
  /* 102c219b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102c21a1 push 0x102c53d8 */
  push32((uint32_t)(0x102c53d8u));
  /* 102c21a6 push eax */
  push32((uint32_t)(EAX));
  /* 102c21a7 call 0x102c2490 */
  push32(0x102c21acu); f_102c2490();
  /* 102c21ac lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102c21b2 push edi */
  push32((uint32_t)(EDI));
  /* 102c21b3 push eax */
  push32((uint32_t)(EAX));
  /* 102c21b4 call 0x102c24a0 */
  push32(0x102c21b9u); f_102c24a0();
  /* 102c21b9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102c21bf push 0x102c53d4 */
  push32((uint32_t)(0x102c53d4u));
  /* 102c21c4 push eax */
  push32((uint32_t)(EAX));
  /* 102c21c5 call 0x102c24a0 */
  push32(0x102c21cau); f_102c24a0();
  /* 102c21ca push dword ptr [esi + 0x102c611c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x102c611c))));
  /* 102c21d0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102c21d6 push eax */
  push32((uint32_t)(EAX));
  /* 102c21d7 call 0x102c24a0 */
  push32(0x102c21dcu); f_102c24a0();
  /* 102c21dc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 102c21e1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102c21e7 push 0x102c53ac */
  push32((uint32_t)(0x102c53acu));
  /* 102c21ec push eax */
  push32((uint32_t)(EAX));
  /* 102c21ed call 0x102c356e */
  push32(0x102c21f2u); f_102c356e();
  /* 102c21f2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c21f5 pop edi */
  EDI = (pop32());
  /* 102c21f6 jmp 0x102c221e */
  goto L_102c221e;
L_102c21f8:;
  /* 102c21f8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102c21fb lea esi, [esi + 0x102c611c] */
  ESI = ((uint32_t)(ESI + 0x102c611c));
  /* 102c2201 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c2203 push eax */
  push32((uint32_t)(EAX));
  /* 102c2204 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c2206 call 0x102c2580 */
  push32(0x102c220bu); f_102c2580();
  /* 102c220b pop ecx */
  ECX = (pop32());
  /* 102c220c push eax */
  push32((uint32_t)(EAX));
  /* 102c220d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c220f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102c2211 call dword ptr [0x102c5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5088))), 0x102c2217u);
  /* 102c2217 push eax */
  push32((uint32_t)(EAX));
  /* 102c2218 call dword ptr [0x102c504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c504c))), 0x102c221eu);
L_102c221e:;
  /* 102c221e pop esi */
  ESI = (pop32());
  /* 102c221f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2220 ret  */
  ESPCHK(0x102c20ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002221 @ 0x102c2221 (41 bytes, 12 insns) */
void f_102c2221(void) {
  FTRACE(0x102c2221u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2221 push esi */
  push32((uint32_t)(ESI));
  /* 102c2222 mov esi, dword ptr [0x102c503c] */
  ESI = (r32((uint32_t)(0x102c503c)));
  /* 102c2228 push dword ptr [0x102c61ec] */
  push32((uint32_t)(r32((uint32_t)(0x102c61ec))));
  /* 102c222e call esi */
  call_ind((uint32_t)(ESI), 0x102c2230u);
  /* 102c2230 push dword ptr [0x102c61dc] */
  push32((uint32_t)(r32((uint32_t)(0x102c61dc))));
  /* 102c2236 call esi */
  call_ind((uint32_t)(ESI), 0x102c2238u);
  /* 102c2238 push dword ptr [0x102c61cc] */
  push32((uint32_t)(r32((uint32_t)(0x102c61cc))));
  /* 102c223e call esi */
  call_ind((uint32_t)(ESI), 0x102c2240u);
  /* 102c2240 push dword ptr [0x102c61ac] */
  push32((uint32_t)(r32((uint32_t)(0x102c61ac))));
  /* 102c2246 call esi */
  call_ind((uint32_t)(ESI), 0x102c2248u);
  /* 102c2248 pop esi */
  ESI = (pop32());
  /* 102c2249 ret  */
  ESPCHK(0x102c2221u, _esp0);
  ESP += 4; return;
}

/* FUN_1000224a @ 0x102c224a (108 bytes, 34 insns) */
void f_102c224a(void) {
  FTRACE(0x102c224au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c224a push esi */
  push32((uint32_t)(ESI));
  /* 102c224b push edi */
  push32((uint32_t)(EDI));
  /* 102c224c mov edi, dword ptr [0x102c5094] */
  EDI = (r32((uint32_t)(0x102c5094)));
  /* 102c2252 mov esi, 0x102c61a8 */
  ESI = (0x102c61a8u);
L_102c2257:;
  /* 102c2257 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102c2259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c225b je 0x102c2288 */
  if (C.zf) goto L_102c2288;
  /* 102c225d cmp esi, 0x102c61ec */
  { uint32_t _a=(ESI),_b=(0x102c61ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2263 je 0x102c2288 */
  if (C.zf) goto L_102c2288;
  /* 102c2265 cmp esi, 0x102c61dc */
  { uint32_t _a=(ESI),_b=(0x102c61dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c226b je 0x102c2288 */
  if (C.zf) goto L_102c2288;
  /* 102c226d cmp esi, 0x102c61cc */
  { uint32_t _a=(ESI),_b=(0x102c61ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2273 je 0x102c2288 */
  if (C.zf) goto L_102c2288;
  /* 102c2275 cmp esi, 0x102c61ac */
  { uint32_t _a=(ESI),_b=(0x102c61acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c227b je 0x102c2288 */
  if (C.zf) goto L_102c2288;
  /* 102c227d push eax */
  push32((uint32_t)(EAX));
  /* 102c227e call edi */
  call_ind((uint32_t)(EDI), 0x102c2280u);
  /* 102c2280 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c2282 call 0x102c23b9 */
  push32(0x102c2287u); f_102c23b9();
  /* 102c2287 pop ecx */
  ECX = (pop32());
L_102c2288:;
  /* 102c2288 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c228b cmp esi, 0x102c6268 */
  { uint32_t _a=(ESI),_b=(0x102c6268u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2291 jl 0x102c2257 */
  if ((C.sf!=C.of)) goto L_102c2257;
  /* 102c2293 push dword ptr [0x102c61cc] */
  push32((uint32_t)(r32((uint32_t)(0x102c61cc))));
  /* 102c2299 call edi */
  call_ind((uint32_t)(EDI), 0x102c229bu);
  /* 102c229b push dword ptr [0x102c61dc] */
  push32((uint32_t)(r32((uint32_t)(0x102c61dc))));
  /* 102c22a1 call edi */
  call_ind((uint32_t)(EDI), 0x102c22a3u);
  /* 102c22a3 push dword ptr [0x102c61ec] */
  push32((uint32_t)(r32((uint32_t)(0x102c61ec))));
  /* 102c22a9 call edi */
  call_ind((uint32_t)(EDI), 0x102c22abu);
  /* 102c22ab push dword ptr [0x102c61ac] */
  push32((uint32_t)(r32((uint32_t)(0x102c61ac))));
  /* 102c22b1 call edi */
  call_ind((uint32_t)(EDI), 0x102c22b3u);
  /* 102c22b3 pop edi */
  EDI = (pop32());
  /* 102c22b4 pop esi */
  ESI = (pop32());
  /* 102c22b5 ret  */
  ESPCHK(0x102c224au, _esp0);
  ESP += 4; return;
}

/* FUN_100022b6 @ 0x102c22b6 (97 bytes, 37 insns) */
void f_102c22b6(void) {
  FTRACE(0x102c22b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c22b6 push ebp */
  push32((uint32_t)(EBP));
  /* 102c22b7 mov ebp, esp */
  EBP = (ESP);
  /* 102c22b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c22bc push esi */
  push32((uint32_t)(ESI));
  /* 102c22bd cmp dword ptr [eax*4 + 0x102c61a8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x102c61a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c22c5 lea esi, [eax*4 + 0x102c61a8] */
  ESI = ((uint32_t)(EAX*4 + 0x102c61a8));
  /* 102c22cc jne 0x102c230c */
  if (!C.zf) goto L_102c230c;
  /* 102c22ce push edi */
  push32((uint32_t)(EDI));
  /* 102c22cf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102c22d1 call 0x102c2401 */
  push32(0x102c22d6u); f_102c2401();
  /* 102c22d6 mov edi, eax */
  EDI = (EAX);
  /* 102c22d8 pop ecx */
  ECX = (pop32());
  /* 102c22d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c22db jne 0x102c22e5 */
  if (!C.zf) goto L_102c22e5;
  /* 102c22dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102c22df call 0x102c1726 */
  push32(0x102c22e4u); f_102c1726();
  /* 102c22e4 pop ecx */
  ECX = (pop32());
L_102c22e5:;
  /* 102c22e5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102c22e7 call 0x102c22b6 */
  push32(0x102c22ecu); f_102c22b6();
  /* 102c22ec cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c22ef pop ecx */
  ECX = (pop32());
  /* 102c22f0 push edi */
  push32((uint32_t)(EDI));
  /* 102c22f1 jne 0x102c22fd */
  if (!C.zf) goto L_102c22fd;
  /* 102c22f3 call dword ptr [0x102c503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c503c))), 0x102c22f9u);
  /* 102c22f9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102c22fb jmp 0x102c2303 */
  goto L_102c2303;
L_102c22fd:;
  /* 102c22fd call 0x102c23b9 */
  push32(0x102c2302u); f_102c23b9();
  /* 102c2302 pop ecx */
  ECX = (pop32());
L_102c2303:;
  /* 102c2303 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102c2305 call 0x102c2317 */
  push32(0x102c230au); f_102c2317();
  /* 102c230a pop ecx */
  ECX = (pop32());
  /* 102c230b pop edi */
  EDI = (pop32());
L_102c230c:;
  /* 102c230c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102c230e call dword ptr [0x102c5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5038))), 0x102c2314u);
  /* 102c2314 pop esi */
  ESI = (pop32());
  /* 102c2315 pop ebp */
  EBP = (pop32());
  /* 102c2316 ret  */
  ESPCHK(0x102c22b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002317 @ 0x102c2317 (21 bytes, 7 insns) */
void f_102c2317(void) {
  FTRACE(0x102c2317u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2317 push ebp */
  push32((uint32_t)(EBP));
  /* 102c2318 mov ebp, esp */
  EBP = (ESP);
  /* 102c231a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c231d push dword ptr [eax*4 + 0x102c61a8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x102c61a8))));
  /* 102c2324 call dword ptr [0x102c5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5040))), 0x102c232au);
  /* 102c232a pop ebp */
  EBP = (pop32());
  /* 102c232b ret  */
  ESPCHK(0x102c2317u, _esp0);
  ESP += 4; return;
}

/* FUN_1000232c @ 0x102c232c (141 bytes, 56 insns) */
void f_102c232c(void) {
  FTRACE(0x102c232cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c232c push ebx */
  push32((uint32_t)(EBX));
  /* 102c232d push esi */
  push32((uint32_t)(ESI));
  /* 102c232e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102c2332 push edi */
  push32((uint32_t)(EDI));
  /* 102c2333 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102c2338 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c233b mov ebx, esi */
  EBX = (ESI);
  /* 102c233d ja 0x102c234c */
  if ((!C.cf&&!C.zf)) goto L_102c234c;
  /* 102c233f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c2341 jne 0x102c2346 */
  if (!C.zf) goto L_102c2346;
  /* 102c2343 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c2345 pop esi */
  ESI = (pop32());
L_102c2346:;
  /* 102c2346 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2349 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_102c234c:;
  /* 102c234c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c234e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2351 ja 0x102c238d */
  if ((!C.cf&&!C.zf)) goto L_102c238d;
  /* 102c2353 cmp ebx, dword ptr [0x102c63f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102c63f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2359 ja 0x102c2378 */
  if ((!C.cf&&!C.zf)) goto L_102c2378;
  /* 102c235b push 9 */
  push32((uint32_t)(0x9u));
  /* 102c235d call 0x102c22b6 */
  push32(0x102c2362u); f_102c22b6();
  /* 102c2362 push ebx */
  push32((uint32_t)(EBX));
  /* 102c2363 call 0x102c30b9 */
  push32(0x102c2368u); f_102c30b9();
  /* 102c2368 push 9 */
  push32((uint32_t)(0x9u));
  /* 102c236a mov edi, eax */
  EDI = (EAX);
  /* 102c236c call 0x102c2317 */
  push32(0x102c2371u); f_102c2317();
  /* 102c2371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2374 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c2376 jne 0x102c23a3 */
  if (!C.zf) goto L_102c23a3;
L_102c2378:;
  /* 102c2378 push esi */
  push32((uint32_t)(ESI));
  /* 102c2379 push 8 */
  push32((uint32_t)(0x8u));
  /* 102c237b push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c2381 call dword ptr [0x102c5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5034))), 0x102c2387u);
  /* 102c2387 mov edi, eax */
  EDI = (EAX);
  /* 102c2389 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c238b jne 0x102c23af */
  if (!C.zf) goto L_102c23af;
L_102c238d:;
  /* 102c238d cmp dword ptr [0x102c6694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102c6694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2394 je 0x102c23af */
  if (C.zf) goto L_102c23af;
  /* 102c2396 push esi */
  push32((uint32_t)(ESI));
  /* 102c2397 call 0x102c3758 */
  push32(0x102c239cu); f_102c3758();
  /* 102c239c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c239e pop ecx */
  ECX = (pop32());
  /* 102c239f je 0x102c23b5 */
  if (C.zf) goto L_102c23b5;
  /* 102c23a1 jmp 0x102c234c */
  goto L_102c234c;
L_102c23a3:;
  /* 102c23a3 push ebx */
  push32((uint32_t)(EBX));
  /* 102c23a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c23a6 push edi */
  push32((uint32_t)(EDI));
  /* 102c23a7 call 0x102c3700 */
  push32(0x102c23acu); f_102c3700();
  /* 102c23ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102c23af:;
  /* 102c23af mov eax, edi */
  EAX = (EDI);
L_102c23b1:;
  /* 102c23b1 pop edi */
  EDI = (pop32());
  /* 102c23b2 pop esi */
  ESI = (pop32());
  /* 102c23b3 pop ebx */
  EBX = (pop32());
  /* 102c23b4 ret  */
  ESPCHK(0x102c232cu, _esp0);
  ESP += 4; return;
L_102c23b5:;
  /* 102c23b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c23b7 jmp 0x102c23b1 */
  goto L_102c23b1;
}

/* FUN_100023b9 @ 0x102c23b9 (72 bytes, 29 insns) */
void f_102c23b9(void) {
  FTRACE(0x102c23b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c23b9 push esi */
  push32((uint32_t)(ESI));
  /* 102c23ba mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102c23be test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c23c0 je 0x102c23ff */
  if (C.zf) goto L_102c23ff;
  /* 102c23c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102c23c4 call 0x102c22b6 */
  push32(0x102c23c9u); f_102c22b6();
  /* 102c23c9 push esi */
  push32((uint32_t)(ESI));
  /* 102c23ca call 0x102c2d63 */
  push32(0x102c23cfu); f_102c2d63();
  /* 102c23cf pop ecx */
  ECX = (pop32());
  /* 102c23d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c23d2 pop ecx */
  ECX = (pop32());
  /* 102c23d3 je 0x102c23e8 */
  if (C.zf) goto L_102c23e8;
  /* 102c23d5 push esi */
  push32((uint32_t)(ESI));
  /* 102c23d6 push eax */
  push32((uint32_t)(EAX));
  /* 102c23d7 call 0x102c2d8e */
  push32(0x102c23dcu); f_102c2d8e();
  /* 102c23dc push 9 */
  push32((uint32_t)(0x9u));
  /* 102c23de call 0x102c2317 */
  push32(0x102c23e3u); f_102c2317();
  /* 102c23e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c23e6 pop esi */
  ESI = (pop32());
  /* 102c23e7 ret  */
  ESPCHK(0x102c23b9u, _esp0);
  ESP += 4; return;
L_102c23e8:;
  /* 102c23e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102c23ea call 0x102c2317 */
  push32(0x102c23efu); f_102c2317();
  /* 102c23ef pop ecx */
  ECX = (pop32());
  /* 102c23f0 push esi */
  push32((uint32_t)(ESI));
  /* 102c23f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c23f3 push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c23f9 call dword ptr [0x102c5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5044))), 0x102c23ffu);
L_102c23ff:;
  /* 102c23ff pop esi */
  ESI = (pop32());
  /* 102c2400 ret  */
  ESPCHK(0x102c23b9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x102c2401 (18 bytes, 6 insns) */
void f_102c2401(void) {
  FTRACE(0x102c2401u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2401 push dword ptr [0x102c6694] */
  push32((uint32_t)(r32((uint32_t)(0x102c6694))));
  /* 102c2407 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102c240b call 0x102c2413 */
  push32(0x102c2410u); f_102c2413();
  /* 102c2410 pop ecx */
  ECX = (pop32());
  /* 102c2411 pop ecx */
  ECX = (pop32());
  /* 102c2412 ret  */
  ESPCHK(0x102c2401u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x102c2413 (44 bytes, 16 insns) */
void f_102c2413(void) {
  FTRACE(0x102c2413u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2413 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2418 ja 0x102c243c */
  if ((!C.cf&&!C.zf)) goto L_102c243c;
L_102c241a:;
  /* 102c241a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102c241e call 0x102c243f */
  push32(0x102c2423u); f_102c243f();
  /* 102c2423 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c2425 pop ecx */
  ECX = (pop32());
  /* 102c2426 jne 0x102c243e */
  if (!C.zf) goto L_102c243e;
  /* 102c2428 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c242c je 0x102c243e */
  if (C.zf) goto L_102c243e;
  /* 102c242e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102c2432 call 0x102c3758 */
  push32(0x102c2437u); f_102c3758();
  /* 102c2437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c2439 pop ecx */
  ECX = (pop32());
  /* 102c243a jne 0x102c241a */
  if (!C.zf) goto L_102c241a;
L_102c243c:;
  /* 102c243c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102c243e:;
  /* 102c243e ret  */
  ESPCHK(0x102c2413u, _esp0);
  ESP += 4; return;
}

/* FUN_1000243f @ 0x102c243f (78 bytes, 30 insns) */
void f_102c243f(void) {
  FTRACE(0x102c243fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c243f push esi */
  push32((uint32_t)(ESI));
  /* 102c2440 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102c2444 cmp esi, dword ptr [0x102c63f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102c63f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c244a push edi */
  push32((uint32_t)(EDI));
  /* 102c244b ja 0x102c246e */
  if ((!C.cf&&!C.zf)) goto L_102c246e;
  /* 102c244d push 9 */
  push32((uint32_t)(0x9u));
  /* 102c244f call 0x102c22b6 */
  push32(0x102c2454u); f_102c22b6();
  /* 102c2454 push esi */
  push32((uint32_t)(ESI));
  /* 102c2455 call 0x102c30b9 */
  push32(0x102c245au); f_102c30b9();
  /* 102c245a push 9 */
  push32((uint32_t)(0x9u));
  /* 102c245c mov edi, eax */
  EDI = (EAX);
  /* 102c245e call 0x102c2317 */
  push32(0x102c2463u); f_102c2317();
  /* 102c2463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2466 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102c2468 je 0x102c246e */
  if (C.zf) goto L_102c246e;
  /* 102c246a mov eax, edi */
  EAX = (EDI);
  /* 102c246c jmp 0x102c248a */
  goto L_102c248a;
L_102c246e:;
  /* 102c246e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c2470 jne 0x102c2475 */
  if (!C.zf) goto L_102c2475;
  /* 102c2472 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c2474 pop esi */
  ESI = (pop32());
L_102c2475:;
  /* 102c2475 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2478 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 102c247b push esi */
  push32((uint32_t)(ESI));
  /* 102c247c push 0 */
  push32((uint32_t)(0x0u));
  /* 102c247e push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c2484 call dword ptr [0x102c5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5034))), 0x102c248au);
L_102c248a:;
  /* 102c248a pop edi */
  EDI = (pop32());
  /* 102c248b pop esi */
  ESI = (pop32());
  /* 102c248c ret  */
  ESPCHK(0x102c243fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002490 @ 0x102c2490 (7 bytes, 3 insns) */
void f_102c2490(void) {
  FTRACE(0x102c2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2490 push edi */
  push32((uint32_t)(EDI));
  /* 102c2491 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102c2495 jmp 0x102c2501 */
  jmp_ind(0x102c2501u); return;
}

/* FUN_100024a0 @ 0x102c24a0 (224 bytes, 84 insns) */
void f_102c24a0(void) {
  FTRACE(0x102c24a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c24a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c24a4 push edi */
  push32((uint32_t)(EDI));
  /* 102c24a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102c24ab je 0x102c24bc */
  if (C.zf) goto L_102c24bc;
L_102c24ad:;
  /* 102c24ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102c24af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c24b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c24b2 je 0x102c24ef */
  if (C.zf) goto L_102c24ef;
  /* 102c24b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102c24ba jne 0x102c24ad */
  if (!C.zf) goto L_102c24ad;
L_102c24bc:;
  /* 102c24bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102c24be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102c24c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c24c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c24c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102c24ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c24cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102c24d2 je 0x102c24bc */
  if (C.zf) goto L_102c24bc;
  /* 102c24d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102c24d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c24d9 je 0x102c24fe */
  if (C.zf) goto L_102c24fe;
  /* 102c24db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102c24dd je 0x102c24f9 */
  if (C.zf) goto L_102c24f9;
  /* 102c24df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102c24e4 je 0x102c24f4 */
  if (C.zf) goto L_102c24f4;
  /* 102c24e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102c24eb je 0x102c24ef */
  if (C.zf) goto L_102c24ef;
  /* 102c24ed jmp 0x102c24bc */
  goto L_102c24bc;
L_102c24ef:;
  /* 102c24ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 102c24f2 jmp 0x102c2501 */
  goto L_102c2501;
L_102c24f4:;
  /* 102c24f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 102c24f7 jmp 0x102c2501 */
  goto L_102c2501;
L_102c24f9:;
  /* 102c24f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 102c24fc jmp 0x102c2501 */
  goto L_102c2501;
L_102c24fe:;
  /* 102c24fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_102c2501:;
  /* 102c2501 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102c2505 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102c250b je 0x102c2526 */
  if (C.zf) goto L_102c2526;
L_102c250d:;
  /* 102c250d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102c250f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c2510 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c2512 je 0x102c2578 */
  if (C.zf) goto L_102c2578;
  /* 102c2514 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102c2516 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c2517 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102c251d jne 0x102c250d */
  if (!C.zf) goto L_102c250d;
  /* 102c251f jmp 0x102c2526 */
  goto L_102c2526;
L_102c2521:;
  /* 102c2521 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102c2523 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102c2526:;
  /* 102c2526 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102c252b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102c252d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c252f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c2532 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102c2534 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102c2536 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2539 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102c253e je 0x102c2521 */
  if (C.zf) goto L_102c2521;
  /* 102c2540 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c2542 je 0x102c2578 */
  if (C.zf) goto L_102c2578;
  /* 102c2544 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102c2546 je 0x102c256f */
  if (C.zf) goto L_102c256f;
  /* 102c2548 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102c254e je 0x102c2562 */
  if (C.zf) goto L_102c2562;
  /* 102c2550 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102c2556 je 0x102c255a */
  if (C.zf) goto L_102c255a;
  /* 102c2558 jmp 0x102c2521 */
  goto L_102c2521;
L_102c255a:;
  /* 102c255a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102c255c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c2560 pop edi */
  EDI = (pop32());
  /* 102c2561 ret  */
  ESPCHK(0x102c24a0u, _esp0);
  ESP += 4; return;
L_102c2562:;
  /* 102c2562 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102c2565 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c2569 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 102c256d pop edi */
  EDI = (pop32());
  /* 102c256e ret  */
  ESPCHK(0x102c24a0u, _esp0);
  ESP += 4; return;
L_102c256f:;
  /* 102c256f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102c2572 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c2576 pop edi */
  EDI = (pop32());
  /* 102c2577 ret  */
  ESPCHK(0x102c24a0u, _esp0);
  ESP += 4; return;
L_102c2578:;
  /* 102c2578 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102c257a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c257e pop edi */
  EDI = (pop32());
  /* 102c257f ret  */
  ESPCHK(0x102c24a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102c2580 (123 bytes, 44 insns) */
void f_102c2580(void) {
  FTRACE(0x102c2580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2580 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c2584 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102c258a je 0x102c25a0 */
  if (C.zf) goto L_102c25a0;
L_102c258c:;
  /* 102c258c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102c258e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c258f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c2591 je 0x102c25d3 */
  if (C.zf) goto L_102c25d3;
  /* 102c2593 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102c2599 jne 0x102c258c */
  if (!C.zf) goto L_102c258c;
  /* 102c259b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102c25a0:;
  /* 102c25a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102c25a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102c25a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c25a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c25ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102c25ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c25b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102c25b6 je 0x102c25a0 */
  if (C.zf) goto L_102c25a0;
  /* 102c25b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102c25bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c25bd je 0x102c25f1 */
  if (C.zf) goto L_102c25f1;
  /* 102c25bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102c25c1 je 0x102c25e7 */
  if (C.zf) goto L_102c25e7;
  /* 102c25c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102c25c8 je 0x102c25dd */
  if (C.zf) goto L_102c25dd;
  /* 102c25ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102c25cf je 0x102c25d3 */
  if (C.zf) goto L_102c25d3;
  /* 102c25d1 jmp 0x102c25a0 */
  goto L_102c25a0;
L_102c25d3:;
  /* 102c25d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102c25d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c25da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c25dc ret  */
  ESPCHK(0x102c2580u, _esp0);
  ESP += 4; return;
L_102c25dd:;
  /* 102c25dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102c25e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c25e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c25e6 ret  */
  ESPCHK(0x102c2580u, _esp0);
  ESP += 4; return;
L_102c25e7:;
  /* 102c25e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102c25ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c25ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c25f0 ret  */
  ESPCHK(0x102c2580u, _esp0);
  ESP += 4; return;
L_102c25f1:;
  /* 102c25f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102c25f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c25f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c25fa ret  */
  ESPCHK(0x102c2580u, _esp0);
  ESP += 4; return;
}

/* FUN_100025fb @ 0x102c25fb (429 bytes, 143 insns) */
void f_102c25fb(void) {
  FTRACE(0x102c25fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c25fb push ebp */
  push32((uint32_t)(EBP));
  /* 102c25fc mov ebp, esp */
  EBP = (ESP);
  /* 102c25fe sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2601 push ebx */
  push32((uint32_t)(EBX));
  /* 102c2602 push esi */
  push32((uint32_t)(ESI));
  /* 102c2603 push edi */
  push32((uint32_t)(EDI));
  /* 102c2604 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102c2606 call 0x102c22b6 */
  push32(0x102c260bu); f_102c22b6();
  /* 102c260b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c260e call 0x102c27a8 */
  push32(0x102c2613u); f_102c27a8();
  /* 102c2613 mov ebx, eax */
  EBX = (EAX);
  /* 102c2615 pop ecx */
  ECX = (pop32());
  /* 102c2616 cmp ebx, dword ptr [0x102c66d8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102c66d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c261c pop ecx */
  ECX = (pop32());
  /* 102c261d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c2620 jne 0x102c2629 */
  if (!C.zf) goto L_102c2629;
L_102c2622:;
  /* 102c2622 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102c2624 jmp 0x102c2799 */
  goto L_102c2799;
L_102c2629:;
  /* 102c2629 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102c262b je 0x102c2787 */
  if (C.zf) goto L_102c2787;
  /* 102c2631 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2633 mov eax, 0x102c62f8 */
  EAX = (0x102c62f8u);
L_102c2638:;
  /* 102c2638 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c263a je 0x102c26b0 */
  if (C.zf) goto L_102c26b0;
  /* 102c263c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c263f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102c2640 cmp eax, 0x102c63e8 */
  { uint32_t _a=(EAX),_b=(0x102c63e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2645 jl 0x102c2638 */
  if ((C.sf!=C.of)) goto L_102c2638;
  /* 102c2647 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102c264a push eax */
  push32((uint32_t)(EAX));
  /* 102c264b push ebx */
  push32((uint32_t)(EBX));
  /* 102c264c call dword ptr [0x102c502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c502c))), 0x102c2652u);
  /* 102c2652 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c2654 pop esi */
  ESI = (pop32());
  /* 102c2655 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2657 jne 0x102c277e */
  if (!C.zf) goto L_102c277e;
  /* 102c265d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102c265f and dword ptr [0x102c6904], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102c6904)))&(0x0u); w32((uint32_t)(0x102c6904), (_r)); fl_logic(_r,32); }
  /* 102c2666 pop ecx */
  ECX = (pop32());
  /* 102c2667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c2669 mov edi, 0x102c6800 */
  EDI = (0x102c6800u);
  /* 102c266e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2671 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102c2673 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102c2674 mov dword ptr [0x102c66d8], ebx */
  w32((uint32_t)(0x102c66d8), (EBX));
  /* 102c267a jbe 0x102c276b */
  if ((C.cf||C.zf)) goto L_102c276b;
  /* 102c2680 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c2684 je 0x102c2746 */
  if (C.zf) goto L_102c2746;
  /* 102c268a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102c268d:;
  /* 102c268d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102c268f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c2691 je 0x102c2746 */
  if (C.zf) goto L_102c2746;
  /* 102c2697 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102c269b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102c269e:;
  /* 102c269e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c26a0 ja 0x102c273a */
  if ((!C.cf&&!C.zf)) goto L_102c273a;
  /* 102c26a6 or byte ptr [eax + 0x102c6801], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(0x4u); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c26ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c26ae jmp 0x102c269e */
  goto L_102c269e;
L_102c26b0:;
  /* 102c26b0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c26b4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102c26b6 pop ecx */
  ECX = (pop32());
  /* 102c26b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c26b9 mov edi, 0x102c6800 */
  EDI = (0x102c6800u);
  /* 102c26be lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102c26c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102c26c3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102c26c6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102c26c7 lea ebx, [esi + 0x102c6308] */
  EBX = ((uint32_t)(ESI + 0x102c6308));
L_102c26cd:;
  /* 102c26cd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c26d0 mov ecx, ebx */
  ECX = (EBX);
  /* 102c26d2 je 0x102c2700 */
  if (C.zf) goto L_102c2700;
L_102c26d4:;
  /* 102c26d4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102c26d7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c26d9 je 0x102c2700 */
  if (C.zf) goto L_102c2700;
  /* 102c26db movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102c26de movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102c26e1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c26e3 ja 0x102c26f9 */
  if ((!C.cf&&!C.zf)) goto L_102c26f9;
  /* 102c26e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c26e8 mov dl, byte ptr [edx + 0x102c62f0] */
  DL = (r8((uint32_t)(EDX + 0x102c62f0)));
L_102c26ee:;
  /* 102c26ee or byte ptr [eax + 0x102c6801], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(DL); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c26f4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c26f5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c26f7 jbe 0x102c26ee */
  if ((C.cf||C.zf)) goto L_102c26ee;
L_102c26f9:;
  /* 102c26f9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c26fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c26fb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c26fe jne 0x102c26d4 */
  if (!C.zf) goto L_102c26d4;
L_102c2700:;
  /* 102c2700 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102c2703 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2706 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c270a jb 0x102c26cd */
  if (C.cf) goto L_102c26cd;
  /* 102c270c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c270f mov dword ptr [0x102c66ec], 1 */
  w32((uint32_t)(0x102c66ec), (0x1u));
  /* 102c2719 push eax */
  push32((uint32_t)(EAX));
  /* 102c271a mov dword ptr [0x102c66d8], eax */
  w32((uint32_t)(0x102c66d8), (EAX));
  /* 102c271f call 0x102c27f2 */
  push32(0x102c2724u); f_102c27f2();
  /* 102c2724 lea esi, [esi + 0x102c62fc] */
  ESI = ((uint32_t)(ESI + 0x102c62fc));
  /* 102c272a mov edi, 0x102c66e0 */
  EDI = (0x102c66e0u);
  /* 102c272f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102c2730 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102c2731 pop ecx */
  ECX = (pop32());
  /* 102c2732 mov dword ptr [0x102c6904], eax */
  w32((uint32_t)(0x102c6904), (EAX));
  /* 102c2737 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102c2738 jmp 0x102c278c */
  goto L_102c278c;
L_102c273a:;
  /* 102c273a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c273b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c273c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c2740 jne 0x102c268d */
  if (!C.zf) goto L_102c268d;
L_102c2746:;
  /* 102c2746 mov eax, esi */
  EAX = (ESI);
L_102c2748:;
  /* 102c2748 or byte ptr [eax + 0x102c6801], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(0x8u); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c274f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c2750 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2755 jb 0x102c2748 */
  if (C.cf) goto L_102c2748;
  /* 102c2757 push ebx */
  push32((uint32_t)(EBX));
  /* 102c2758 call 0x102c27f2 */
  push32(0x102c275du); f_102c27f2();
  /* 102c275d pop ecx */
  ECX = (pop32());
  /* 102c275e mov dword ptr [0x102c6904], eax */
  w32((uint32_t)(0x102c6904), (EAX));
  /* 102c2763 mov dword ptr [0x102c66ec], esi */
  w32((uint32_t)(0x102c66ec), (ESI));
  /* 102c2769 jmp 0x102c2772 */
  goto L_102c2772;
L_102c276b:;
  /* 102c276b and dword ptr [0x102c66ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102c66ec)))&(0x0u); w32((uint32_t)(0x102c66ec), (_r)); fl_logic(_r,32); }
L_102c2772:;
  /* 102c2772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c2774 mov edi, 0x102c66e0 */
  EDI = (0x102c66e0u);
  /* 102c2779 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102c277a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102c277b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102c277c jmp 0x102c278c */
  goto L_102c278c;
L_102c277e:;
  /* 102c277e cmp dword ptr [0x102c6680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102c6680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2785 je 0x102c2796 */
  if (C.zf) goto L_102c2796;
L_102c2787:;
  /* 102c2787 call 0x102c2825 */
  push32(0x102c278cu); f_102c2825();
L_102c278c:;
  /* 102c278c call 0x102c284e */
  push32(0x102c2791u); f_102c284e();
  /* 102c2791 jmp 0x102c2622 */
  goto L_102c2622;
L_102c2796:;
  /* 102c2796 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102c2799:;
  /* 102c2799 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102c279b call 0x102c2317 */
  push32(0x102c27a0u); f_102c2317();
  /* 102c27a0 pop ecx */
  ECX = (pop32());
  /* 102c27a1 mov eax, esi */
  EAX = (ESI);
  /* 102c27a3 pop edi */
  EDI = (pop32());
  /* 102c27a4 pop esi */
  ESI = (pop32());
  /* 102c27a5 pop ebx */
  EBX = (pop32());
  /* 102c27a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c27a7 ret  */
  ESPCHK(0x102c25fbu, _esp0);
  ESP += 4; return;
}

/* FUN_100027a8 @ 0x102c27a8 (74 bytes, 15 insns) */
void f_102c27a8(void) {
  FTRACE(0x102c27a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c27a8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c27ac and dword ptr [0x102c6680], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102c6680)))&(0x0u); w32((uint32_t)(0x102c6680), (_r)); fl_logic(_r,32); }
  /* 102c27b3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c27b6 jne 0x102c27c8 */
  if (!C.zf) goto L_102c27c8;
  /* 102c27b8 mov dword ptr [0x102c6680], 1 */
  w32((uint32_t)(0x102c6680), (0x1u));
  /* 102c27c2 jmp dword ptr [0x102c5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102c5030)))); return;
L_102c27c8:;
  /* 102c27c8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c27cb jne 0x102c27dd */
  if (!C.zf) goto L_102c27dd;
  /* 102c27cd mov dword ptr [0x102c6680], 1 */
  w32((uint32_t)(0x102c6680), (0x1u));
  /* 102c27d7 jmp dword ptr [0x102c5028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102c5028)))); return;
L_102c27dd:;
  /* 102c27dd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c27e0 jne 0x102c27f1 */
  if (!C.zf) goto L_102c27f1;
  /* 102c27e2 mov eax, dword ptr [0x102c66b0] */
  EAX = (r32((uint32_t)(0x102c66b0)));
  /* 102c27e7 mov dword ptr [0x102c6680], 1 */
  w32((uint32_t)(0x102c6680), (0x1u));
L_102c27f1:;
  /* 102c27f1 ret  */
  ESPCHK(0x102c27a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f2 @ 0x102c27f2 (51 bytes, 19 insns) */
void f_102c27f2(void) {
  FTRACE(0x102c27f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c27f2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c27f6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c27fb je 0x102c281f */
  if (C.zf) goto L_102c281f;
  /* 102c27fd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2800 je 0x102c2819 */
  if (C.zf) goto L_102c2819;
  /* 102c2802 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2805 je 0x102c2813 */
  if (C.zf) goto L_102c2813;
  /* 102c2807 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102c2808 je 0x102c280d */
  if (C.zf) goto L_102c280d;
  /* 102c280a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c280c ret  */
  ESPCHK(0x102c27f2u, _esp0);
  ESP += 4; return;
L_102c280d:;
  /* 102c280d mov eax, 0x404 */
  EAX = (0x404u);
  /* 102c2812 ret  */
  ESPCHK(0x102c27f2u, _esp0);
  ESP += 4; return;
L_102c2813:;
  /* 102c2813 mov eax, 0x412 */
  EAX = (0x412u);
  /* 102c2818 ret  */
  ESPCHK(0x102c27f2u, _esp0);
  ESP += 4; return;
L_102c2819:;
  /* 102c2819 mov eax, 0x804 */
  EAX = (0x804u);
  /* 102c281e ret  */
  ESPCHK(0x102c27f2u, _esp0);
  ESP += 4; return;
L_102c281f:;
  /* 102c281f mov eax, 0x411 */
  EAX = (0x411u);
  /* 102c2824 ret  */
  ESPCHK(0x102c27f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002825 @ 0x102c2825 (41 bytes, 17 insns) */
void f_102c2825(void) {
  FTRACE(0x102c2825u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2825 push edi */
  push32((uint32_t)(EDI));
  /* 102c2826 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102c2828 pop ecx */
  ECX = (pop32());
  /* 102c2829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c282b mov edi, 0x102c6800 */
  EDI = (0x102c6800u);
  /* 102c2830 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102c2832 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102c2833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c2835 mov edi, 0x102c66e0 */
  EDI = (0x102c66e0u);
  /* 102c283a mov dword ptr [0x102c66d8], eax */
  w32((uint32_t)(0x102c66d8), (EAX));
  /* 102c283f mov dword ptr [0x102c66ec], eax */
  w32((uint32_t)(0x102c66ec), (EAX));
  /* 102c2844 mov dword ptr [0x102c6904], eax */
  w32((uint32_t)(0x102c6904), (EAX));
  /* 102c2849 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102c284a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102c284b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102c284c pop edi */
  EDI = (pop32());
  /* 102c284d ret  */
  ESPCHK(0x102c2825u, _esp0);
  ESP += 4; return;
}

/* FUN_1000284e @ 0x102c284e (389 bytes, 124 insns) */
void f_102c284e(void) {
  FTRACE(0x102c284eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c284e push ebp */
  push32((uint32_t)(EBP));
  /* 102c284f mov ebp, esp */
  EBP = (ESP);
  /* 102c2851 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2857 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102c285a push esi */
  push32((uint32_t)(ESI));
  /* 102c285b push eax */
  push32((uint32_t)(EAX));
  /* 102c285c push dword ptr [0x102c66d8] */
  push32((uint32_t)(r32((uint32_t)(0x102c66d8))));
  /* 102c2862 call dword ptr [0x102c502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c502c))), 0x102c2868u);
  /* 102c2868 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c286b jne 0x102c2987 */
  if (!C.zf) goto L_102c2987;
  /* 102c2871 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c2873 mov esi, 0x100 */
  ESI = (0x100u);
L_102c2878:;
  /* 102c2878 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 102c287f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c2880 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2882 jb 0x102c2878 */
  if (C.cf) goto L_102c2878;
  /* 102c2884 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 102c2887 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102c288e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c2890 je 0x102c28c9 */
  if (C.zf) goto L_102c28c9;
  /* 102c2892 push ebx */
  push32((uint32_t)(EBX));
  /* 102c2893 push edi */
  push32((uint32_t)(EDI));
  /* 102c2894 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102c2897:;
  /* 102c2897 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102c289a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102c289d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c289f ja 0x102c28be */
  if ((!C.cf&&!C.zf)) goto L_102c28be;
  /* 102c28a1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c28a3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102c28aa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c28ab mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102c28b0 mov ebx, ecx */
  EBX = (ECX);
  /* 102c28b2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c28b5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102c28b7 mov ecx, ebx */
  ECX = (EBX);
  /* 102c28b9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102c28bc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102c28be:;
  /* 102c28be inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102c28bf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102c28c0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102c28c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c28c5 jne 0x102c2897 */
  if (!C.zf) goto L_102c2897;
  /* 102c28c7 pop edi */
  EDI = (pop32());
  /* 102c28c8 pop ebx */
  EBX = (pop32());
L_102c28c9:;
  /* 102c28c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c28cb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102c28d1 push dword ptr [0x102c6904] */
  push32((uint32_t)(r32((uint32_t)(0x102c6904))));
  /* 102c28d7 push dword ptr [0x102c66d8] */
  push32((uint32_t)(r32((uint32_t)(0x102c66d8))));
  /* 102c28dd push eax */
  push32((uint32_t)(EAX));
  /* 102c28de lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102c28e4 push esi */
  push32((uint32_t)(ESI));
  /* 102c28e5 push eax */
  push32((uint32_t)(EAX));
  /* 102c28e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c28e8 call 0x102c39c2 */
  push32(0x102c28edu); f_102c39c2();
  /* 102c28ed push 0 */
  push32((uint32_t)(0x0u));
  /* 102c28ef lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 102c28f5 push dword ptr [0x102c66d8] */
  push32((uint32_t)(r32((uint32_t)(0x102c66d8))));
  /* 102c28fb push esi */
  push32((uint32_t)(ESI));
  /* 102c28fc push eax */
  push32((uint32_t)(EAX));
  /* 102c28fd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102c2903 push esi */
  push32((uint32_t)(ESI));
  /* 102c2904 push eax */
  push32((uint32_t)(EAX));
  /* 102c2905 push esi */
  push32((uint32_t)(ESI));
  /* 102c2906 push dword ptr [0x102c6904] */
  push32((uint32_t)(r32((uint32_t)(0x102c6904))));
  /* 102c290c call 0x102c3773 */
  push32(0x102c2911u); f_102c3773();
  /* 102c2911 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c2913 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 102c2919 push dword ptr [0x102c66d8] */
  push32((uint32_t)(r32((uint32_t)(0x102c66d8))));
  /* 102c291f push esi */
  push32((uint32_t)(ESI));
  /* 102c2920 push eax */
  push32((uint32_t)(EAX));
  /* 102c2921 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102c2927 push esi */
  push32((uint32_t)(ESI));
  /* 102c2928 push eax */
  push32((uint32_t)(EAX));
  /* 102c2929 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 102c292e push dword ptr [0x102c6904] */
  push32((uint32_t)(r32((uint32_t)(0x102c6904))));
  /* 102c2934 call 0x102c3773 */
  push32(0x102c2939u); f_102c3773();
  /* 102c2939 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c293c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c293e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_102c2944:;
  /* 102c2944 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102c2947 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 102c294a je 0x102c2962 */
  if (C.zf) goto L_102c2962;
  /* 102c294c or byte ptr [eax + 0x102c6801], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(0x10u); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c2953 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_102c295a:;
  /* 102c295a mov byte ptr [eax + 0x102c6700], dl */
  w8((uint32_t)(EAX + 0x102c6700), (DL));
  /* 102c2960 jmp 0x102c297e */
  goto L_102c297e;
L_102c2962:;
  /* 102c2962 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 102c2965 je 0x102c2977 */
  if (C.zf) goto L_102c2977;
  /* 102c2967 or byte ptr [eax + 0x102c6801], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(0x20u); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c296e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 102c2975 jmp 0x102c295a */
  goto L_102c295a;
L_102c2977:;
  /* 102c2977 and byte ptr [eax + 0x102c6700], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6700)))&(0x0u); w8((uint32_t)(EAX + 0x102c6700), (_r)); fl_logic(_r,8); }
L_102c297e:;
  /* 102c297e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c297f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c2980 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102c2981 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2983 jb 0x102c2944 */
  if (C.cf) goto L_102c2944;
  /* 102c2985 jmp 0x102c29d0 */
  goto L_102c29d0;
L_102c2987:;
  /* 102c2987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c2989 mov esi, 0x100 */
  ESI = (0x100u);
L_102c298e:;
  /* 102c298e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2991 jb 0x102c29ac */
  if (C.cf) goto L_102c29ac;
  /* 102c2993 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2996 ja 0x102c29ac */
  if ((!C.cf&&!C.zf)) goto L_102c29ac;
  /* 102c2998 or byte ptr [eax + 0x102c6801], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(0x10u); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c299f mov cl, al */
  CL = (AL);
  /* 102c29a1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102c29a4:;
  /* 102c29a4 mov byte ptr [eax + 0x102c6700], cl */
  w8((uint32_t)(EAX + 0x102c6700), (CL));
  /* 102c29aa jmp 0x102c29cb */
  goto L_102c29cb;
L_102c29ac:;
  /* 102c29ac cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c29af jb 0x102c29c4 */
  if (C.cf) goto L_102c29c4;
  /* 102c29b1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c29b4 ja 0x102c29c4 */
  if ((!C.cf&&!C.zf)) goto L_102c29c4;
  /* 102c29b6 or byte ptr [eax + 0x102c6801], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6801)))|(0x20u); w8((uint32_t)(EAX + 0x102c6801), (_r)); fl_logic(_r,8); }
  /* 102c29bd mov cl, al */
  CL = (AL);
  /* 102c29bf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c29c2 jmp 0x102c29a4 */
  goto L_102c29a4;
L_102c29c4:;
  /* 102c29c4 and byte ptr [eax + 0x102c6700], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102c6700)))&(0x0u); w8((uint32_t)(EAX + 0x102c6700), (_r)); fl_logic(_r,8); }
L_102c29cb:;
  /* 102c29cb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c29cc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c29ce jb 0x102c298e */
  if (C.cf) goto L_102c298e;
L_102c29d0:;
  /* 102c29d0 pop esi */
  ESI = (pop32());
  /* 102c29d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c29d2 ret  */
  ESPCHK(0x102c284eu, _esp0);
  ESP += 4; return;
}

/* FUN_100029d3 @ 0x102c29d3 (28 bytes, 7 insns) */
void f_102c29d3(void) {
  FTRACE(0x102c29d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c29d3 cmp dword ptr [0x102c6a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102c6a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c29da jne 0x102c29ee */
  if (!C.zf) goto L_102c29ee;
  /* 102c29dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102c29de call 0x102c25fb */
  push32(0x102c29e3u); f_102c25fb();
  /* 102c29e3 pop ecx */
  ECX = (pop32());
  /* 102c29e4 mov dword ptr [0x102c6a28], 1 */
  w32((uint32_t)(0x102c6a28), (0x1u));
L_102c29ee:;
  /* 102c29ee ret  */
  ESPCHK(0x102c29d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x102c29f0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_102c29f0(void) {
  FTRACE(0x102c29f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c29f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102c29f1 mov ebp, esp */
  EBP = (ESP);
  /* 102c29f3 push edi */
  push32((uint32_t)(EDI));
  /* 102c29f4 push esi */
  push32((uint32_t)(ESI));
  /* 102c29f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102c29f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102c29fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102c29fe mov eax, ecx */
  EAX = (ECX);
  /* 102c2a00 mov edx, ecx */
  EDX = (ECX);
  /* 102c2a02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2a04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2a06 jbe 0x102c2a10 */
  if ((C.cf||C.zf)) goto L_102c2a10;
  /* 102c2a08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2a0a jb 0x102c2b88 */
  if (C.cf) goto L_102c2b88;
L_102c2a10:;
  /* 102c2a10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102c2a16 jne 0x102c2a2c */
  if (!C.zf) goto L_102c2a2c;
  /* 102c2a18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2a1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102c2a1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2a21 jb 0x102c2a4c */
  if (C.cf) goto L_102c2a4c;
  /* 102c2a23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2a25 jmp dword ptr [edx*4 + 0x102c2b38] */
  switch (EDX) {
    case 0: goto L_102c2b48;
    case 1: goto L_102c2b50;
    case 2: goto L_102c2b5c;
    case 3: goto L_102c2b70;
    default: x86_unimpl("switch@0x102c2a25 out of table"); return;
  }
L_102c2a2c:;
  /* 102c2a2c mov eax, edi */
  EAX = (EDI);
  /* 102c2a2e mov edx, 3 */
  EDX = (0x3u);
  /* 102c2a33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2a36 jb 0x102c2a44 */
  if (C.cf) goto L_102c2a44;
  /* 102c2a38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102c2a3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2a3d jmp dword ptr [eax*4 + 0x102c2a50] */
  switch (EAX) {
    case 1: goto L_102c2a60;
    case 2: goto L_102c2a8c;
    case 3: goto L_102c2ab0;
    default: x86_unimpl("switch@0x102c2a3d out of table"); return;
  }
L_102c2a44:;
  /* 102c2a44 jmp dword ptr [ecx*4 + 0x102c2b48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102c2b48)))); return;
  /* 102c2a4b nop  */
  /* nop */
L_102c2a4c:;
  /* 102c2a4c jmp dword ptr [ecx*4 + 0x102c2acc] */
  switch (ECX) {
    case 0: goto L_102c2b2f;
    case 1: goto L_102c2b1c;
    case 2: goto L_102c2b14;
    case 3: goto L_102c2b0c;
    case 4: goto L_102c2b04;
    case 5: goto L_102c2afc;
    case 6: goto L_102c2af4;
    case 7: goto L_102c2aec;
    default: x86_unimpl("switch@0x102c2a4c out of table"); return;
  }
  /* 102c2a53 nop  */
  /* nop */
L_102c2a60:;
  /* 102c2a60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2a62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c2a64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c2a66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c2a69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c2a6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c2a6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2a72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c2a75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2a78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2a7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2a7e jb 0x102c2a4c */
  if (C.cf) goto L_102c2a4c;
  /* 102c2a80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2a82 jmp dword ptr [edx*4 + 0x102c2b38] */
  switch (EDX) {
    case 0: goto L_102c2b48;
    case 1: goto L_102c2b50;
    case 2: goto L_102c2b5c;
    case 3: goto L_102c2b70;
    default: x86_unimpl("switch@0x102c2a82 out of table"); return;
  }
  /* 102c2a89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c2a8c:;
  /* 102c2a8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2a8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c2a90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c2a92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c2a95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2a98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c2a9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2a9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2aa1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2aa4 jb 0x102c2a4c */
  if (C.cf) goto L_102c2a4c;
  /* 102c2aa6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2aa8 jmp dword ptr [edx*4 + 0x102c2b38] */
  switch (EDX) {
    case 0: goto L_102c2b48;
    case 1: goto L_102c2b50;
    case 2: goto L_102c2b5c;
    case 3: goto L_102c2b70;
    default: x86_unimpl("switch@0x102c2aa8 out of table"); return;
  }
  /* 102c2aaf nop  */
  /* nop */
L_102c2ab0:;
  /* 102c2ab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2ab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c2ab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c2ab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c2ab7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2aba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c2abb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2abe jb 0x102c2a4c */
  if (C.cf) goto L_102c2a4c;
  /* 102c2ac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2ac2 jmp dword ptr [edx*4 + 0x102c2b38] */
  switch (EDX) {
    case 0: goto L_102c2b48;
    case 1: goto L_102c2b50;
    case 2: goto L_102c2b5c;
    case 3: goto L_102c2b70;
    default: x86_unimpl("switch@0x102c2ac2 out of table"); return;
  }
  /* 102c2ac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c2aec:;
  /* 102c2aec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102c2af0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102c2af4:;
  /* 102c2af4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102c2af8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102c2afc:;
  /* 102c2afc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102c2b00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102c2b04:;
  /* 102c2b04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102c2b08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102c2b0c:;
  /* 102c2b0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102c2b10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102c2b14:;
  /* 102c2b14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102c2b18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102c2b1c:;
  /* 102c2b1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102c2b20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102c2b24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102c2b2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2b2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102c2b2f:;
  /* 102c2b2f jmp dword ptr [edx*4 + 0x102c2b38] */
  switch (EDX) {
    case 0: goto L_102c2b48;
    case 1: goto L_102c2b50;
    case 2: goto L_102c2b5c;
    case 3: goto L_102c2b70;
    default: x86_unimpl("switch@0x102c2b2f out of table"); return;
  }
  /* 102c2b36 mov edi, edi */
  EDI = (EDI);
L_102c2b48:;
  /* 102c2b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2b4b pop esi */
  ESI = (pop32());
  /* 102c2b4c pop edi */
  EDI = (pop32());
  /* 102c2b4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2b4e ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2b4f nop  */
  /* nop */
L_102c2b50:;
  /* 102c2b50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c2b52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c2b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2b57 pop esi */
  ESI = (pop32());
  /* 102c2b58 pop edi */
  EDI = (pop32());
  /* 102c2b59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2b5a ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2b5b nop  */
  /* nop */
L_102c2b5c:;
  /* 102c2b5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c2b5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c2b60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c2b63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c2b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2b69 pop esi */
  ESI = (pop32());
  /* 102c2b6a pop edi */
  EDI = (pop32());
  /* 102c2b6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2b6c ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2b6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c2b70:;
  /* 102c2b70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c2b72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c2b74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c2b77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c2b7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c2b7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c2b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2b83 pop esi */
  ESI = (pop32());
  /* 102c2b84 pop edi */
  EDI = (pop32());
  /* 102c2b85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2b86 ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2b87 nop  */
  /* nop */
L_102c2b88:;
  /* 102c2b88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102c2b8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102c2b90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102c2b96 jne 0x102c2bbc */
  if (!C.zf) goto L_102c2bbc;
  /* 102c2b98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2b9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102c2b9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2ba1 jb 0x102c2bb0 */
  if (C.cf) goto L_102c2bb0;
  /* 102c2ba3 std  */
  C.df=1;
  /* 102c2ba4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2ba6 cld  */
  C.df=0;
  /* 102c2ba7 jmp dword ptr [edx*4 + 0x102c2cd0] */
  switch (EDX) {
    case 0: goto L_102c2ce0;
    case 1: goto L_102c2ce8;
    case 2: goto L_102c2cf8;
    case 3: goto L_102c2d0c;
    default: x86_unimpl("switch@0x102c2ba7 out of table"); return;
  }
  /* 102c2bae mov edi, edi */
  EDI = (EDI);
L_102c2bb0:;
  /* 102c2bb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102c2bb2 jmp dword ptr [ecx*4 + 0x102c2c80] */
  switch (ECX) {
    case 0: goto L_102c2cc7;
    default: x86_unimpl("switch@0x102c2bb2 out of table"); return;
  }
  /* 102c2bb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c2bbc:;
  /* 102c2bbc mov eax, edi */
  EAX = (EDI);
  /* 102c2bbe mov edx, 3 */
  EDX = (0x3u);
  /* 102c2bc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2bc6 jb 0x102c2bd4 */
  if (C.cf) goto L_102c2bd4;
  /* 102c2bc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102c2bcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2bcd jmp dword ptr [eax*4 + 0x102c2bd8] */
  switch (EAX) {
    case 1: goto L_102c2be8;
    case 2: goto L_102c2c08;
    case 3: goto L_102c2c30;
    default: x86_unimpl("switch@0x102c2bcd out of table"); return;
  }
L_102c2bd4:;
  /* 102c2bd4 jmp dword ptr [ecx*4 + 0x102c2cd0] */
  switch (ECX) {
    case 0: goto L_102c2ce0;
    case 1: goto L_102c2ce8;
    case 2: goto L_102c2cf8;
    case 3: goto L_102c2d0c;
    default: x86_unimpl("switch@0x102c2bd4 out of table"); return;
  }
  /* 102c2bdb nop  */
  /* nop */
L_102c2be8:;
  /* 102c2be8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c2beb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2bed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c2bf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102c2bf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2bf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102c2bf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2bf8 jb 0x102c2bb0 */
  if (C.cf) goto L_102c2bb0;
  /* 102c2bfa std  */
  C.df=1;
  /* 102c2bfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2bfd cld  */
  C.df=0;
  /* 102c2bfe jmp dword ptr [edx*4 + 0x102c2cd0] */
  switch (EDX) {
    case 0: goto L_102c2ce0;
    case 1: goto L_102c2ce8;
    case 2: goto L_102c2cf8;
    case 3: goto L_102c2d0c;
    default: x86_unimpl("switch@0x102c2bfe out of table"); return;
  }
  /* 102c2c05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c2c08:;
  /* 102c2c08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c2c0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2c0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c2c10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c2c13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2c16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c2c19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2c1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2c1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2c22 jb 0x102c2bb0 */
  if (C.cf) goto L_102c2bb0;
  /* 102c2c24 std  */
  C.df=1;
  /* 102c2c25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2c27 cld  */
  C.df=0;
  /* 102c2c28 jmp dword ptr [edx*4 + 0x102c2cd0] */
  switch (EDX) {
    case 0: goto L_102c2ce0;
    case 1: goto L_102c2ce8;
    case 2: goto L_102c2cf8;
    case 3: goto L_102c2d0c;
    default: x86_unimpl("switch@0x102c2c28 out of table"); return;
  }
  /* 102c2c2f nop  */
  /* nop */
L_102c2c30:;
  /* 102c2c30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c2c33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c2c35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c2c38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c2c3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c2c3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c2c41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c2c44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c2c47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2c4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2c4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2c50 jb 0x102c2bb0 */
  if (C.cf) goto L_102c2bb0;
  /* 102c2c56 std  */
  C.df=1;
  /* 102c2c57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c2c59 cld  */
  C.df=0;
  /* 102c2c5a jmp dword ptr [edx*4 + 0x102c2cd0] */
  switch (EDX) {
    case 0: goto L_102c2ce0;
    case 1: goto L_102c2ce8;
    case 2: goto L_102c2cf8;
    case 3: goto L_102c2d0c;
    default: x86_unimpl("switch@0x102c2c5a out of table"); return;
  }
  /* 102c2c61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102c2c64 test byte ptr [esp + ebp], ch */
  { uint32_t _r=(r8((uint32_t)(ESP + EBP*1)))&(C.c.b.h); fl_logic(_r,8); }
  /* 102c2c67 adc byte ptr [esp + ebp + 0x2c94102c], cl */
  { uint32_t _a=(r8((uint32_t)(ESP + EBP*1 + 0x2c94102c))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EBP*1 + 0x2c94102c), (_r)); fl_add(_a,_b,_r,8); }
  /* 102c2c6e sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c2c70 pushfd  */
  x86_unimpl("pushfd @ 0x102c2c70");
  /* 102c2c71 sub al, 0x2c */
  { uint32_t _a=(AL),_b=(0x2cu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c2c73 adc byte ptr [esp + ebp + 0x2cac102c], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + EBP*1 + 0x2cac102c))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EBP*1 + 0x2cac102c), (_r)); fl_add(_a,_b,_r,8); }
  /* 102c2c7a sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c2c7c mov ah, 0x2c */
  AH = (0x2cu);
  /* 102c2c7e sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c2c84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102c2c88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102c2c8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102c2c90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102c2c94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102c2c98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102c2c9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102c2ca0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102c2ca4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102c2ca8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102c2cac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102c2cb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102c2cb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102c2cb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102c2cbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102c2cc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2cc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102c2cc7:;
  /* 102c2cc7 jmp dword ptr [edx*4 + 0x102c2cd0] */
  switch (EDX) {
    case 0: goto L_102c2ce0;
    case 1: goto L_102c2ce8;
    case 2: goto L_102c2cf8;
    case 3: goto L_102c2d0c;
    default: x86_unimpl("switch@0x102c2cc7 out of table"); return;
  }
  /* 102c2cce mov edi, edi */
  EDI = (EDI);
L_102c2ce0:;
  /* 102c2ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2ce3 pop esi */
  ESI = (pop32());
  /* 102c2ce4 pop edi */
  EDI = (pop32());
  /* 102c2ce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2ce6 ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2ce7 nop  */
  /* nop */
L_102c2ce8:;
  /* 102c2ce8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c2ceb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c2cee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2cf1 pop esi */
  ESI = (pop32());
  /* 102c2cf2 pop edi */
  EDI = (pop32());
  /* 102c2cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2cf4 ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2cf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c2cf8:;
  /* 102c2cf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c2cfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c2cfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c2d01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c2d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2d07 pop esi */
  ESI = (pop32());
  /* 102c2d08 pop edi */
  EDI = (pop32());
  /* 102c2d09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2d0a ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
  /* 102c2d0b nop  */
  /* nop */
L_102c2d0c:;
  /* 102c2d0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c2d0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c2d12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c2d15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c2d18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c2d1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c2d1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2d21 pop esi */
  ESI = (pop32());
  /* 102c2d22 pop edi */
  EDI = (pop32());
  /* 102c2d23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c2d24 ret  */
  ESPCHK(0x102c29f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d25 @ 0x102c2d25 (62 bytes, 15 insns) */
void f_102c2d25(void) {
  FTRACE(0x102c2d25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2d25 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 102c2d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 102c2d2c push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c2d32 call dword ptr [0x102c5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5034))), 0x102c2d38u);
  /* 102c2d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c2d3a mov dword ptr [0x102c66d4], eax */
  w32((uint32_t)(0x102c66d4), (EAX));
  /* 102c2d3f jne 0x102c2d42 */
  if (!C.zf) goto L_102c2d42;
  /* 102c2d41 ret  */
  ESPCHK(0x102c2d25u, _esp0);
  ESP += 4; return;
L_102c2d42:;
  /* 102c2d42 and dword ptr [0x102c66cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102c66cc)))&(0x0u); w32((uint32_t)(0x102c66cc), (_r)); fl_logic(_r,32); }
  /* 102c2d49 and dword ptr [0x102c66d0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102c66d0)))&(0x0u); w32((uint32_t)(0x102c66d0), (_r)); fl_logic(_r,32); }
  /* 102c2d50 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c2d52 mov dword ptr [0x102c66c8], eax */
  w32((uint32_t)(0x102c66c8), (EAX));
  /* 102c2d57 mov dword ptr [0x102c66c0], 0x10 */
  w32((uint32_t)(0x102c66c0), (0x10u));
  /* 102c2d61 pop eax */
  EAX = (pop32());
  /* 102c2d62 ret  */
  ESPCHK(0x102c2d25u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d63 @ 0x102c2d63 (43 bytes, 14 insns) */
void f_102c2d63(void) {
  FTRACE(0x102c2d63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2d63 mov eax, dword ptr [0x102c66d0] */
  EAX = (r32((uint32_t)(0x102c66d0)));
  /* 102c2d68 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102c2d6b mov eax, dword ptr [0x102c66d4] */
  EAX = (r32((uint32_t)(0x102c66d4)));
  /* 102c2d70 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_102c2d73:;
  /* 102c2d73 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2d75 jae 0x102c2d8b */
  if (!C.cf) goto L_102c2d8b;
  /* 102c2d77 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c2d7b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2d7e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2d84 jb 0x102c2d8d */
  if (C.cf) goto L_102c2d8d;
  /* 102c2d86 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2d89 jmp 0x102c2d73 */
  goto L_102c2d73;
L_102c2d8b:;
  /* 102c2d8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102c2d8d:;
  /* 102c2d8d ret  */
  ESPCHK(0x102c2d63u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d8e @ 0x102c2d8e (811 bytes, 264 insns) */
void f_102c2d8e(void) {
  FTRACE(0x102c2d8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c2d8e push ebp */
  push32((uint32_t)(EBP));
  /* 102c2d8f mov ebp, esp */
  EBP = (ESP);
  /* 102c2d91 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2d94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102c2d97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2d9a push ebx */
  push32((uint32_t)(EBX));
  /* 102c2d9b push esi */
  push32((uint32_t)(ESI));
  /* 102c2d9c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 102c2d9f mov esi, edx */
  ESI = (EDX);
  /* 102c2da1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2da4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 102c2da7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2daa push edi */
  push32((uint32_t)(EDI));
  /* 102c2dab shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 102c2dae mov ecx, esi */
  ECX = (ESI);
  /* 102c2db0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 102c2db3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102c2db9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102c2dba mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102c2dbd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102c2dc4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102c2dc7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102c2dca mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 102c2dcd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 102c2dd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102c2dd3 jne 0x102c2e54 */
  if (!C.zf) goto L_102c2e54;
  /* 102c2dd5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102c2dd8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102c2dda dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c2ddb pop edi */
  EDI = (pop32());
  /* 102c2ddc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102c2ddf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2de1 jbe 0x102c2de6 */
  if ((C.cf||C.zf)) goto L_102c2de6;
  /* 102c2de3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102c2de6:;
  /* 102c2de6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102c2dea cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2dee jne 0x102c2e38 */
  if (!C.zf) goto L_102c2e38;
  /* 102c2df0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102c2df3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2df6 jae 0x102c2e14 */
  if (!C.cf) goto L_102c2e14;
  /* 102c2df8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102c2dfd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102c2dff lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102c2e03 not edi */
  EDI = (~(EDI));
  /* 102c2e05 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102c2e09 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102c2e0b jne 0x102c2e38 */
  if (!C.zf) goto L_102c2e38;
  /* 102c2e0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2e10 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102c2e12 jmp 0x102c2e38 */
  goto L_102c2e38;
L_102c2e14:;
  /* 102c2e14 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2e17 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102c2e1c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102c2e1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102c2e21 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102c2e25 not edi */
  EDI = (~(EDI));
  /* 102c2e27 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102c2e2e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102c2e30 jne 0x102c2e38 */
  if (!C.zf) goto L_102c2e38;
  /* 102c2e32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2e35 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102c2e38:;
  /* 102c2e38 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102c2e3c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102c2e40 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102c2e43 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102c2e47 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102c2e4b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2e4e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102c2e51 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_102c2e54:;
  /* 102c2e54 mov edi, ebx */
  EDI = (EBX);
  /* 102c2e56 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102c2e59 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102c2e5a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2e5d jbe 0x102c2e62 */
  if ((C.cf||C.zf)) goto L_102c2e62;
  /* 102c2e5f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102c2e61 pop edi */
  EDI = (pop32());
L_102c2e62:;
  /* 102c2e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c2e65 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102c2e68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 102c2e6b jne 0x102c2f11 */
  if (!C.zf) goto L_102c2f11;
  /* 102c2e71 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c2e74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c2e77 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102c2e7a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102c2e7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102c2e7f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c2e80 pop edx */
  EDX = (pop32());
  /* 102c2e81 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2e83 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102c2e86 jbe 0x102c2e8d */
  if ((C.cf||C.zf)) goto L_102c2e8d;
  /* 102c2e88 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102c2e8b mov ecx, edx */
  ECX = (EDX);
L_102c2e8d:;
  /* 102c2e8d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2e90 mov edi, ebx */
  EDI = (EBX);
  /* 102c2e92 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102c2e95 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102c2e98 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102c2e99 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2e9b jbe 0x102c2e9f */
  if ((C.cf||C.zf)) goto L_102c2e9f;
  /* 102c2e9d mov edi, edx */
  EDI = (EDX);
L_102c2e9f:;
  /* 102c2e9f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2ea1 je 0x102c2f0e */
  if (C.zf) goto L_102c2f0e;
  /* 102c2ea3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102c2ea6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102c2ea9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2eac jne 0x102c2ef6 */
  if (!C.zf) goto L_102c2ef6;
  /* 102c2eae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102c2eb1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2eb4 jae 0x102c2ed2 */
  if (!C.cf) goto L_102c2ed2;
  /* 102c2eb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102c2ebb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102c2ebd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102c2ec1 not edx */
  EDX = (~(EDX));
  /* 102c2ec3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102c2ec7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102c2ec9 jne 0x102c2ef6 */
  if (!C.zf) goto L_102c2ef6;
  /* 102c2ecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2ece and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102c2ed0 jmp 0x102c2ef6 */
  goto L_102c2ef6;
L_102c2ed2:;
  /* 102c2ed2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2ed5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102c2eda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102c2edc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102c2edf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102c2ee3 not edx */
  EDX = (~(EDX));
  /* 102c2ee5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102c2eec dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102c2eee jne 0x102c2ef6 */
  if (!C.zf) goto L_102c2ef6;
  /* 102c2ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2ef3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102c2ef6:;
  /* 102c2ef6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102c2ef9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 102c2efc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102c2eff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102c2f02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102c2f05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102c2f08 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 102c2f0b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_102c2f0e:;
  /* 102c2f0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_102c2f11:;
  /* 102c2f11 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2f15 jne 0x102c2f20 */
  if (!C.zf) goto L_102c2f20;
  /* 102c2f17 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2f1a je 0x102c2fa9 */
  if (C.zf) goto L_102c2fa9;
L_102c2f20:;
  /* 102c2f20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102c2f23 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102c2f26 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102c2f29 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102c2f2c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102c2f2f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102c2f32 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102c2f35 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102c2f38 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102c2f3b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102c2f3e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102c2f41 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2f44 jne 0x102c2fa9 */
  if (!C.zf) goto L_102c2fa9;
  /* 102c2f46 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 102c2f4a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c2f4d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 102c2f50 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102c2f52 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 102c2f56 jae 0x102c2f7d */
  if (!C.cf) goto L_102c2f7d;
  /* 102c2f58 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c2f5c jne 0x102c2f6c */
  if (!C.zf) goto L_102c2f6c;
  /* 102c2f5e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102c2f63 mov ecx, edi */
  ECX = (EDI);
  /* 102c2f65 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102c2f67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2f6a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_102c2f6c:;
  /* 102c2f6c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102c2f71 mov ecx, edi */
  ECX = (EDI);
  /* 102c2f73 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102c2f75 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 102c2f79 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102c2f7b jmp 0x102c2fa6 */
  goto L_102c2fa6;
L_102c2f7d:;
  /* 102c2f7d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c2f81 jne 0x102c2f93 */
  if (!C.zf) goto L_102c2f93;
  /* 102c2f83 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102c2f86 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102c2f8b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102c2f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c2f90 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102c2f93:;
  /* 102c2f93 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102c2f96 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102c2f9b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102c2f9d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 102c2fa4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_102c2fa6:;
  /* 102c2fa6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_102c2fa9:;
  /* 102c2fa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102c2fac mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 102c2fae mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 102c2fb2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 102c2fb4 jne 0x102c30b4 */
  if (!C.zf) goto L_102c30b4;
  /* 102c2fba mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c2fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c2fc1 je 0x102c30a6 */
  if (C.zf) goto L_102c30a6;
  /* 102c2fc7 mov ecx, dword ptr [0x102c66c4] */
  ECX = (r32((uint32_t)(0x102c66c4)));
  /* 102c2fcd mov edi, dword ptr [0x102c5048] */
  EDI = (r32((uint32_t)(0x102c5048)));
  /* 102c2fd3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 102c2fd6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c2fd9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 102c2fde push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102c2fe3 push ebx */
  push32((uint32_t)(EBX));
  /* 102c2fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 102c2fe5 call edi */
  call_ind((uint32_t)(EDI), 0x102c2fe7u);
  /* 102c2fe7 mov ecx, dword ptr [0x102c66c4] */
  ECX = (r32((uint32_t)(0x102c66c4)));
  /* 102c2fed mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c2ff2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102c2ff7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102c2ff9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102c2ffc mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c3001 mov ecx, dword ptr [0x102c66c4] */
  ECX = (r32((uint32_t)(0x102c66c4)));
  /* 102c3007 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102c300a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102c3012 mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c3017 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102c301a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 102c301d mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c3022 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102c3025 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c3029 jne 0x102c3034 */
  if (!C.zf) goto L_102c3034;
  /* 102c302b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102c302f mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
L_102c3034:;
  /* 102c3034 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3038 jne 0x102c30a6 */
  if (!C.zf) goto L_102c30a6;
  /* 102c303a push ebx */
  push32((uint32_t)(EBX));
  /* 102c303b push 0 */
  push32((uint32_t)(0x0u));
  /* 102c303d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 102c3040 call edi */
  call_ind((uint32_t)(EDI), 0x102c3042u);
  /* 102c3042 mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c3047 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 102c304a push 0 */
  push32((uint32_t)(0x0u));
  /* 102c304c push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c3052 call dword ptr [0x102c5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5044))), 0x102c3058u);
  /* 102c3058 mov eax, dword ptr [0x102c66d0] */
  EAX = (r32((uint32_t)(0x102c66d0)));
  /* 102c305d mov edx, dword ptr [0x102c66d4] */
  EDX = (r32((uint32_t)(0x102c66d4)));
  /* 102c3063 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c3066 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102c3069 mov ecx, eax */
  ECX = (EAX);
  /* 102c306b mov eax, dword ptr [0x102c66cc] */
  EAX = (r32((uint32_t)(0x102c66cc)));
  /* 102c3070 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3072 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 102c3076 push ecx */
  push32((uint32_t)(ECX));
  /* 102c3077 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 102c307a push ecx */
  push32((uint32_t)(ECX));
  /* 102c307b push eax */
  push32((uint32_t)(EAX));
  /* 102c307c call 0x102c3b10 */
  push32(0x102c3081u); f_102c3b10();
  /* 102c3081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3084 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3087 dec dword ptr [0x102c66d0] */
  { uint32_t _r=(r32((uint32_t)(0x102c66d0)))-1; w32((uint32_t)(0x102c66d0), (_r)); fl_dec(_r,32); }
  /* 102c308d cmp eax, dword ptr [0x102c66cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102c66cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3093 jbe 0x102c3098 */
  if ((C.cf||C.zf)) goto L_102c3098;
  /* 102c3095 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102c3098:;
  /* 102c3098 mov ecx, dword ptr [0x102c66d4] */
  ECX = (r32((uint32_t)(0x102c66d4)));
  /* 102c309e mov dword ptr [0x102c66c8], ecx */
  w32((uint32_t)(0x102c66c8), (ECX));
  /* 102c30a4 jmp 0x102c30a9 */
  goto L_102c30a9;
L_102c30a6:;
  /* 102c30a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_102c30a9:;
  /* 102c30a9 mov dword ptr [0x102c66cc], eax */
  w32((uint32_t)(0x102c66cc), (EAX));
  /* 102c30ae mov dword ptr [0x102c66c4], esi */
  w32((uint32_t)(0x102c66c4), (ESI));
L_102c30b4:;
  /* 102c30b4 pop edi */
  EDI = (pop32());
  /* 102c30b5 pop esi */
  ESI = (pop32());
  /* 102c30b6 pop ebx */
  EBX = (pop32());
  /* 102c30b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c30b8 ret  */
  ESPCHK(0x102c2d8eu, _esp0);
  ESP += 4; return;
}

/* FUN_100030b9 @ 0x102c30b9 (777 bytes, 275 insns) */
void f_102c30b9(void) {
  FTRACE(0x102c30b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c30b9 push ebp */
  push32((uint32_t)(EBP));
  /* 102c30ba mov ebp, esp */
  EBP = (ESP);
  /* 102c30bc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c30bf mov eax, dword ptr [0x102c66d0] */
  EAX = (r32((uint32_t)(0x102c66d0)));
  /* 102c30c4 mov edx, dword ptr [0x102c66d4] */
  EDX = (r32((uint32_t)(0x102c66d4)));
  /* 102c30ca push ebx */
  push32((uint32_t)(EBX));
  /* 102c30cb push esi */
  push32((uint32_t)(ESI));
  /* 102c30cc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c30cf push edi */
  push32((uint32_t)(EDI));
  /* 102c30d0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102c30d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c30d6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102c30d9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 102c30dc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 102c30df mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102c30e2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102c30e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c30e6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c30e9 jge 0x102c30f9 */
  if ((C.sf==C.of)) goto L_102c30f9;
  /* 102c30eb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102c30ee shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102c30f0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 102c30f4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102c30f7 jmp 0x102c3109 */
  goto L_102c3109;
L_102c30f9:;
  /* 102c30f9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c30fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c30ff xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102c3101 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102c3103 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102c3106 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102c3109:;
  /* 102c3109 mov eax, dword ptr [0x102c66c8] */
  EAX = (r32((uint32_t)(0x102c66c8)));
  /* 102c310e mov ebx, eax */
  EBX = (EAX);
  /* 102c3110 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3112 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c3115 jae 0x102c3130 */
  if (!C.cf) goto L_102c3130;
L_102c3117:;
  /* 102c3117 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102c311a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102c311c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102c311f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102c3121 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102c3123 jne 0x102c3130 */
  if (!C.zf) goto L_102c3130;
  /* 102c3125 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3128 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c312b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c312e jb 0x102c3117 */
  if (C.cf) goto L_102c3117;
L_102c3130:;
  /* 102c3130 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3133 jne 0x102c31ae */
  if (!C.zf) goto L_102c31ae;
  /* 102c3135 mov ebx, edx */
  EBX = (EDX);
L_102c3137:;
  /* 102c3137 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3139 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c313c jae 0x102c3153 */
  if (!C.cf) goto L_102c3153;
  /* 102c313e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102c3141 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102c3143 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102c3146 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102c3148 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102c314a jne 0x102c3151 */
  if (!C.zf) goto L_102c3151;
  /* 102c314c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c314f jmp 0x102c3137 */
  goto L_102c3137;
L_102c3151:;
  /* 102c3151 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102c3153:;
  /* 102c3153 jne 0x102c31ae */
  if (!C.zf) goto L_102c31ae;
L_102c3155:;
  /* 102c3155 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3158 jae 0x102c316b */
  if (!C.cf) goto L_102c316b;
  /* 102c315a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c315e jne 0x102c3168 */
  if (!C.zf) goto L_102c3168;
  /* 102c3160 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3163 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c3166 jmp 0x102c3155 */
  goto L_102c3155;
L_102c3168:;
  /* 102c3168 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102c316b:;
  /* 102c316b jne 0x102c3193 */
  if (!C.zf) goto L_102c3193;
  /* 102c316d mov ebx, edx */
  EBX = (EDX);
L_102c316f:;
  /* 102c316f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3171 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c3174 jae 0x102c3183 */
  if (!C.cf) goto L_102c3183;
  /* 102c3176 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c317a jne 0x102c3181 */
  if (!C.zf) goto L_102c3181;
  /* 102c317c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c317f jmp 0x102c316f */
  goto L_102c316f;
L_102c3181:;
  /* 102c3181 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102c3183:;
  /* 102c3183 jne 0x102c3193 */
  if (!C.zf) goto L_102c3193;
  /* 102c3185 call 0x102c33c2 */
  push32(0x102c318au); f_102c33c2();
  /* 102c318a mov ebx, eax */
  EBX = (EAX);
  /* 102c318c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102c318e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102c3191 je 0x102c31a7 */
  if (C.zf) goto L_102c31a7;
L_102c3193:;
  /* 102c3193 push ebx */
  push32((uint32_t)(EBX));
  /* 102c3194 call 0x102c3473 */
  push32(0x102c3199u); f_102c3473();
  /* 102c3199 pop ecx */
  ECX = (pop32());
  /* 102c319a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 102c319d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 102c319f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102c31a2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c31a5 jne 0x102c31ae */
  if (!C.zf) goto L_102c31ae;
L_102c31a7:;
  /* 102c31a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c31a9 jmp 0x102c33bd */
  goto L_102c33bd;
L_102c31ae:;
  /* 102c31ae mov dword ptr [0x102c66c8], ebx */
  w32((uint32_t)(0x102c66c8), (EBX));
  /* 102c31b4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102c31b7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102c31b9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c31bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102c31bf je 0x102c31d5 */
  if (C.zf) goto L_102c31d5;
  /* 102c31c1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102c31c8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102c31cc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102c31cf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102c31d1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102c31d3 jne 0x102c320c */
  if (!C.zf) goto L_102c320c;
L_102c31d5:;
  /* 102c31d5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 102c31db mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 102c31de and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102c31e1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102c31e4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c31e8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 102c31eb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102c31ed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102c31f0 jne 0x102c3209 */
  if (!C.zf) goto L_102c3209;
L_102c31f2:;
  /* 102c31f2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 102c31f8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102c31fb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102c31fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3201 mov edi, esi */
  EDI = (ESI);
  /* 102c3203 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 102c3205 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 102c3207 je 0x102c31f2 */
  if (C.zf) goto L_102c31f2;
L_102c3209:;
  /* 102c3209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_102c320c:;
  /* 102c320c mov ecx, edx */
  ECX = (EDX);
  /* 102c320e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c3210 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102c3216 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102c321d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102c3220 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102c3224 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102c3226 jne 0x102c3235 */
  if (!C.zf) goto L_102c3235;
  /* 102c3228 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102c322f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102c3231 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102c3234 pop edi */
  EDI = (pop32());
L_102c3235:;
  /* 102c3235 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102c3237 jl 0x102c323e */
  if ((C.sf!=C.of)) goto L_102c323e;
  /* 102c3239 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102c323b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c323c jmp 0x102c3235 */
  goto L_102c3235;
L_102c323e:;
  /* 102c323e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102c3241 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 102c3245 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 102c3247 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c324a mov esi, ecx */
  ESI = (ECX);
  /* 102c324c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102c324f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102c3252 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102c3253 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3256 jle 0x102c325b */
  if ((C.zf||C.sf!=C.of)) goto L_102c325b;
  /* 102c3258 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102c325a pop esi */
  ESI = (pop32());
L_102c325b:;
  /* 102c325b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c325d je 0x102c3370 */
  if (C.zf) goto L_102c3370;
  /* 102c3263 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102c3266 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3269 jne 0x102c32cc */
  if (!C.zf) goto L_102c32cc;
  /* 102c326b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c326e jge 0x102c329b */
  if ((C.sf==C.of)) goto L_102c329b;
  /* 102c3270 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102c3275 mov ecx, edi */
  ECX = (EDI);
  /* 102c3277 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102c3279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c327c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102c3280 not ebx */
  EBX = (~(EBX));
  /* 102c3282 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102c3285 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 102c3289 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 102c328d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102c328f jne 0x102c32c9 */
  if (!C.zf) goto L_102c32c9;
  /* 102c3291 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3294 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102c3297 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102c3299 jmp 0x102c32cc */
  goto L_102c32cc;
L_102c329b:;
  /* 102c329b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102c329e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102c32a3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102c32a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c32a8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102c32ac lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102c32b3 not ebx */
  EBX = (~(EBX));
  /* 102c32b5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102c32b7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102c32b9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102c32bc jne 0x102c32c9 */
  if (!C.zf) goto L_102c32c9;
  /* 102c32be mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c32c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102c32c4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102c32c7 jmp 0x102c32cc */
  goto L_102c32cc;
L_102c32c9:;
  /* 102c32c9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102c32cc:;
  /* 102c32cc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102c32cf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102c32d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c32d6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102c32d9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102c32dc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102c32df mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102c32e2 je 0x102c337c */
  if (C.zf) goto L_102c337c;
  /* 102c32e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102c32eb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 102c32ef lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 102c32f2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 102c32f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102c32f8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102c32fb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102c32fe mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102c3301 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102c3304 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3307 jne 0x102c336d */
  if (!C.zf) goto L_102c336d;
  /* 102c3309 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 102c330d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3310 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 102c3313 jge 0x102c333e */
  if ((C.sf==C.of)) goto L_102c333e;
  /* 102c3315 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102c3317 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c331b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102c331f jne 0x102c332c */
  if (!C.zf) goto L_102c332c;
  /* 102c3321 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102c3326 mov ecx, esi */
  ECX = (ESI);
  /* 102c3328 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102c332a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_102c332c:;
  /* 102c332c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102c3331 mov ecx, esi */
  ECX = (ESI);
  /* 102c3333 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102c3335 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c3338 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102c333c jmp 0x102c336d */
  goto L_102c336d;
L_102c333e:;
  /* 102c333e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102c3340 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c3344 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102c3348 jne 0x102c3357 */
  if (!C.zf) goto L_102c3357;
  /* 102c334a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102c334d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102c3352 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102c3354 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_102c3357:;
  /* 102c3357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c335a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102c3361 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102c3364 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102c3369 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102c336b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102c336d:;
  /* 102c336d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102c3370:;
  /* 102c3370 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102c3372 je 0x102c337f */
  if (C.zf) goto L_102c337f;
  /* 102c3374 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102c3376 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 102c337a jmp 0x102c337f */
  goto L_102c337f;
L_102c337c:;
  /* 102c337c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102c337f:;
  /* 102c337f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102c3382 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3384 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 102c3387 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102c3389 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 102c338d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102c3390 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102c3392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102c3394 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102c3397 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102c3399 jne 0x102c33b5 */
  if (!C.zf) goto L_102c33b5;
  /* 102c339b cmp ebx, dword ptr [0x102c66cc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102c66cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c33a1 jne 0x102c33b5 */
  if (!C.zf) goto L_102c33b5;
  /* 102c33a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c33a6 cmp ecx, dword ptr [0x102c66c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102c66c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c33ac jne 0x102c33b5 */
  if (!C.zf) goto L_102c33b5;
  /* 102c33ae and dword ptr [0x102c66cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102c66cc)))&(0x0u); w32((uint32_t)(0x102c66cc), (_r)); fl_logic(_r,32); }
L_102c33b5:;
  /* 102c33b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c33b8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102c33ba lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102c33bd:;
  /* 102c33bd pop edi */
  EDI = (pop32());
  /* 102c33be pop esi */
  ESI = (pop32());
  /* 102c33bf pop ebx */
  EBX = (pop32());
  /* 102c33c0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c33c1 ret  */
  ESPCHK(0x102c30b9u, _esp0);
  ESP += 4; return;
}

/* FUN_100033c2 @ 0x102c33c2 (177 bytes, 53 insns) */
void f_102c33c2(void) {
  FTRACE(0x102c33c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c33c2 mov eax, dword ptr [0x102c66d0] */
  EAX = (r32((uint32_t)(0x102c66d0)));
  /* 102c33c7 mov ecx, dword ptr [0x102c66c0] */
  ECX = (r32((uint32_t)(0x102c66c0)));
  /* 102c33cd push esi */
  push32((uint32_t)(ESI));
  /* 102c33ce push edi */
  push32((uint32_t)(EDI));
  /* 102c33cf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c33d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c33d3 jne 0x102c3405 */
  if (!C.zf) goto L_102c3405;
  /* 102c33d5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102c33d9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102c33dc push eax */
  push32((uint32_t)(EAX));
  /* 102c33dd push dword ptr [0x102c66d4] */
  push32((uint32_t)(r32((uint32_t)(0x102c66d4))));
  /* 102c33e3 push edi */
  push32((uint32_t)(EDI));
  /* 102c33e4 push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c33ea call dword ptr [0x102c5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5020))), 0x102c33f0u);
  /* 102c33f0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c33f2 je 0x102c3455 */
  if (C.zf) goto L_102c3455;
  /* 102c33f4 add dword ptr [0x102c66c0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102c66c0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102c66c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 102c33fb mov dword ptr [0x102c66d4], eax */
  w32((uint32_t)(0x102c66d4), (EAX));
  /* 102c3400 mov eax, dword ptr [0x102c66d0] */
  EAX = (r32((uint32_t)(0x102c66d0)));
L_102c3405:;
  /* 102c3405 mov ecx, dword ptr [0x102c66d4] */
  ECX = (r32((uint32_t)(0x102c66d4)));
  /* 102c340b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 102c3410 push 8 */
  push32((uint32_t)(0x8u));
  /* 102c3412 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102c3415 push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c341b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102c341e call dword ptr [0x102c5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5034))), 0x102c3424u);
  /* 102c3424 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3426 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 102c3429 je 0x102c3455 */
  if (C.zf) goto L_102c3455;
  /* 102c342b push 4 */
  push32((uint32_t)(0x4u));
  /* 102c342d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 102c3432 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102c3437 push edi */
  push32((uint32_t)(EDI));
  /* 102c3438 call dword ptr [0x102c5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5024))), 0x102c343eu);
  /* 102c343e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3440 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102c3443 jne 0x102c3459 */
  if (!C.zf) goto L_102c3459;
  /* 102c3445 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 102c3448 push edi */
  push32((uint32_t)(EDI));
  /* 102c3449 push dword ptr [0x102c6908] */
  push32((uint32_t)(r32((uint32_t)(0x102c6908))));
  /* 102c344f call dword ptr [0x102c5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5044))), 0x102c3455u);
L_102c3455:;
  /* 102c3455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c3457 jmp 0x102c3470 */
  goto L_102c3470;
L_102c3459:;
  /* 102c3459 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102c345d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102c345f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 102c3462 inc dword ptr [0x102c66d0] */
  { uint32_t _r=(r32((uint32_t)(0x102c66d0)))+1; w32((uint32_t)(0x102c66d0), (_r)); fl_inc(_r,32); }
  /* 102c3468 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 102c346b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102c346e mov eax, esi */
  EAX = (ESI);
L_102c3470:;
  /* 102c3470 pop edi */
  EDI = (pop32());
  /* 102c3471 pop esi */
  ESI = (pop32());
  /* 102c3472 ret  */
  ESPCHK(0x102c33c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003473 @ 0x102c3473 (251 bytes, 85 insns) */
void f_102c3473(void) {
  FTRACE(0x102c3473u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3473 push ebp */
  push32((uint32_t)(EBP));
  /* 102c3474 mov ebp, esp */
  EBP = (ESP);
  /* 102c3476 push ecx */
  push32((uint32_t)(ECX));
  /* 102c3477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c347a push ebx */
  push32((uint32_t)(EBX));
  /* 102c347b push esi */
  push32((uint32_t)(ESI));
  /* 102c347c push edi */
  push32((uint32_t)(EDI));
  /* 102c347d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102c3480 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102c3483 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102c3485:;
  /* 102c3485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c3487 jl 0x102c348e */
  if ((C.sf!=C.of)) goto L_102c348e;
  /* 102c3489 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102c348b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102c348c jmp 0x102c3485 */
  goto L_102c3485;
L_102c348e:;
  /* 102c348e mov eax, ebx */
  EAX = (EBX);
  /* 102c3490 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102c3492 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102c3498 pop edx */
  EDX = (pop32());
  /* 102c3499 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102c34a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102c34a3:;
  /* 102c34a3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102c34a6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102c34a9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c34ac dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102c34ad jne 0x102c34a3 */
  if (!C.zf) goto L_102c34a3;
  /* 102c34af mov edi, ebx */
  EDI = (EBX);
  /* 102c34b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102c34b3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102c34b6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c34b9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102c34be push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102c34c3 push edi */
  push32((uint32_t)(EDI));
  /* 102c34c4 call dword ptr [0x102c5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5024))), 0x102c34cau);
  /* 102c34ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c34cc jne 0x102c34d6 */
  if (!C.zf) goto L_102c34d6;
  /* 102c34ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c34d1 jmp 0x102c3569 */
  goto L_102c3569;
L_102c34d6:;
  /* 102c34d6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102c34dc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c34de ja 0x102c351c */
  if ((!C.cf&&!C.zf)) goto L_102c351c;
  /* 102c34e0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_102c34e3:;
  /* 102c34e3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 102c34e7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 102c34ee lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 102c34f4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 102c34fb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102c34fd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 102c3503 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102c3506 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 102c3510 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3515 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 102c3518 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c351a jbe 0x102c34e3 */
  if ((C.cf||C.zf)) goto L_102c34e3;
L_102c351c:;
  /* 102c351c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102c351f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 102c3522 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3527 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c3529 pop edi */
  EDI = (pop32());
  /* 102c352a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102c352d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 102c3530 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 102c3533 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 102c3536 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 102c3539 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102c353e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 102c3545 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 102c3548 mov cl, al */
  CL = (AL);
  /* 102c354a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102c354c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c354e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3551 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 102c3554 jne 0x102c3559 */
  if (!C.zf) goto L_102c3559;
  /* 102c3556 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_102c3559:;
  /* 102c3559 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102c355e mov ecx, ebx */
  ECX = (EBX);
  /* 102c3560 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102c3562 not edx */
  EDX = (~(EDX));
  /* 102c3564 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102c3567 mov eax, ebx */
  EAX = (EBX);
L_102c3569:;
  /* 102c3569 pop edi */
  EDI = (pop32());
  /* 102c356a pop esi */
  ESI = (pop32());
  /* 102c356b pop ebx */
  EBX = (pop32());
  /* 102c356c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c356d ret  */
  ESPCHK(0x102c3473u, _esp0);
  ESP += 4; return;
}

/* FUN_1000356e @ 0x102c356e (137 bytes, 50 insns) */
void f_102c356e(void) {
  FTRACE(0x102c356eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c356e push ebx */
  push32((uint32_t)(EBX));
  /* 102c356f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c3571 cmp dword ptr [0x102c6684], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102c6684))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3577 push esi */
  push32((uint32_t)(ESI));
  /* 102c3578 push edi */
  push32((uint32_t)(EDI));
  /* 102c3579 jne 0x102c35bd */
  if (!C.zf) goto L_102c35bd;
  /* 102c357b push 0x102c5440 */
  push32((uint32_t)(0x102c5440u));
  /* 102c3580 call dword ptr [0x102c5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5014))), 0x102c3586u);
  /* 102c3586 mov edi, eax */
  EDI = (EAX);
  /* 102c3588 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c358a je 0x102c35f3 */
  if (C.zf) goto L_102c35f3;
  /* 102c358c mov esi, dword ptr [0x102c5018] */
  ESI = (r32((uint32_t)(0x102c5018)));
  /* 102c3592 push 0x102c5434 */
  push32((uint32_t)(0x102c5434u));
  /* 102c3597 push edi */
  push32((uint32_t)(EDI));
  /* 102c3598 call esi */
  call_ind((uint32_t)(ESI), 0x102c359au);
  /* 102c359a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c359c mov dword ptr [0x102c6684], eax */
  w32((uint32_t)(0x102c6684), (EAX));
  /* 102c35a1 je 0x102c35f3 */
  if (C.zf) goto L_102c35f3;
  /* 102c35a3 push 0x102c5424 */
  push32((uint32_t)(0x102c5424u));
  /* 102c35a8 push edi */
  push32((uint32_t)(EDI));
  /* 102c35a9 call esi */
  call_ind((uint32_t)(ESI), 0x102c35abu);
  /* 102c35ab push 0x102c5410 */
  push32((uint32_t)(0x102c5410u));
  /* 102c35b0 push edi */
  push32((uint32_t)(EDI));
  /* 102c35b1 mov dword ptr [0x102c6688], eax */
  w32((uint32_t)(0x102c6688), (EAX));
  /* 102c35b6 call esi */
  call_ind((uint32_t)(ESI), 0x102c35b8u);
  /* 102c35b8 mov dword ptr [0x102c668c], eax */
  w32((uint32_t)(0x102c668c), (EAX));
L_102c35bd:;
  /* 102c35bd mov eax, dword ptr [0x102c6688] */
  EAX = (r32((uint32_t)(0x102c6688)));
  /* 102c35c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c35c4 je 0x102c35dc */
  if (C.zf) goto L_102c35dc;
  /* 102c35c6 call eax */
  call_ind((uint32_t)(EAX), 0x102c35c8u);
  /* 102c35c8 mov ebx, eax */
  EBX = (EAX);
  /* 102c35ca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102c35cc je 0x102c35dc */
  if (C.zf) goto L_102c35dc;
  /* 102c35ce mov eax, dword ptr [0x102c668c] */
  EAX = (r32((uint32_t)(0x102c668c)));
  /* 102c35d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c35d5 je 0x102c35dc */
  if (C.zf) goto L_102c35dc;
  /* 102c35d7 push ebx */
  push32((uint32_t)(EBX));
  /* 102c35d8 call eax */
  call_ind((uint32_t)(EAX), 0x102c35dau);
  /* 102c35da mov ebx, eax */
  EBX = (EAX);
L_102c35dc:;
  /* 102c35dc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102c35e0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102c35e4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102c35e8 push ebx */
  push32((uint32_t)(EBX));
  /* 102c35e9 call dword ptr [0x102c6684] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c6684))), 0x102c35efu);
L_102c35ef:;
  /* 102c35ef pop edi */
  EDI = (pop32());
  /* 102c35f0 pop esi */
  ESI = (pop32());
  /* 102c35f1 pop ebx */
  EBX = (pop32());
  /* 102c35f2 ret  */
  ESPCHK(0x102c356eu, _esp0);
  ESP += 4; return;
L_102c35f3:;
  /* 102c35f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c35f5 jmp 0x102c35ef */
  goto L_102c35ef;
}

/* _strncpy @ 0x102c3600 (254 bytes, 109 insns) */
void f_102c3600(void) {
  FTRACE(0x102c3600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3600 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102c3604 push edi */
  push32((uint32_t)(EDI));
  /* 102c3605 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102c3607 je 0x102c3683 */
  if (C.zf) goto L_102c3683;
  /* 102c3609 push esi */
  push32((uint32_t)(ESI));
  /* 102c360a push ebx */
  push32((uint32_t)(EBX));
  /* 102c360b mov ebx, ecx */
  EBX = (ECX);
  /* 102c360d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 102c3611 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102c3617 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 102c361b jne 0x102c3624 */
  if (!C.zf) goto L_102c3624;
  /* 102c361d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3620 jne 0x102c3691 */
  if (!C.zf) goto L_102c3691;
  /* 102c3622 jmp 0x102c3645 */
  goto L_102c3645;
L_102c3624:;
  /* 102c3624 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3626 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c3627 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3629 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c362a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c362b je 0x102c3652 */
  if (C.zf) goto L_102c3652;
  /* 102c362d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c362f je 0x102c365a */
  if (C.zf) goto L_102c365a;
  /* 102c3631 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102c3637 jne 0x102c3624 */
  if (!C.zf) goto L_102c3624;
  /* 102c3639 mov ebx, ecx */
  EBX = (ECX);
  /* 102c363b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c363e jne 0x102c3691 */
  if (!C.zf) goto L_102c3691;
L_102c3640:;
  /* 102c3640 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102c3643 je 0x102c3652 */
  if (C.zf) goto L_102c3652;
L_102c3645:;
  /* 102c3645 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3647 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c3648 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c364a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c364b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102c364d je 0x102c367e */
  if (C.zf) goto L_102c367e;
  /* 102c364f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102c3650 jne 0x102c3645 */
  if (!C.zf) goto L_102c3645;
L_102c3652:;
  /* 102c3652 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102c3656 pop ebx */
  EBX = (pop32());
  /* 102c3657 pop esi */
  ESI = (pop32());
  /* 102c3658 pop edi */
  EDI = (pop32());
  /* 102c3659 ret  */
  ESPCHK(0x102c3600u, _esp0);
  ESP += 4; return;
L_102c365a:;
  /* 102c365a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102c3660 je 0x102c3674 */
  if (C.zf) goto L_102c3674;
L_102c3662:;
  /* 102c3662 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3664 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c3665 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c3666 je 0x102c36f6 */
  if (C.zf) goto L_102c36f6;
  /* 102c366c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102c3672 jne 0x102c3662 */
  if (!C.zf) goto L_102c3662;
L_102c3674:;
  /* 102c3674 mov ebx, ecx */
  EBX = (ECX);
  /* 102c3676 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3679 jne 0x102c36e7 */
  if (!C.zf) goto L_102c36e7;
L_102c367b:;
  /* 102c367b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c367d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102c367e:;
  /* 102c367e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102c367f jne 0x102c367b */
  if (!C.zf) goto L_102c367b;
  /* 102c3681 pop ebx */
  EBX = (pop32());
  /* 102c3682 pop esi */
  ESI = (pop32());
L_102c3683:;
  /* 102c3683 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c3687 pop edi */
  EDI = (pop32());
  /* 102c3688 ret  */
  ESPCHK(0x102c3600u, _esp0);
  ESP += 4; return;
L_102c3689:;
  /* 102c3689 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102c368b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c368e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c368f je 0x102c3640 */
  if (C.zf) goto L_102c3640;
L_102c3691:;
  /* 102c3691 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102c3696 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102c3698 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c369a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102c369d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102c369f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102c36a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c36a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102c36a9 je 0x102c3689 */
  if (C.zf) goto L_102c3689;
  /* 102c36ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102c36ad je 0x102c36db */
  if (C.zf) goto L_102c36db;
  /* 102c36af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102c36b1 je 0x102c36d1 */
  if (C.zf) goto L_102c36d1;
  /* 102c36b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102c36b9 je 0x102c36c7 */
  if (C.zf) goto L_102c36c7;
  /* 102c36bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102c36c1 jne 0x102c3689 */
  if (!C.zf) goto L_102c3689;
  /* 102c36c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102c36c5 jmp 0x102c36df */
  goto L_102c36df;
L_102c36c7:;
  /* 102c36c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102c36cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102c36cf jmp 0x102c36df */
  goto L_102c36df;
L_102c36d1:;
  /* 102c36d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102c36d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102c36d9 jmp 0x102c36df */
  goto L_102c36df;
L_102c36db:;
  /* 102c36db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102c36dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102c36df:;
  /* 102c36df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c36e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c36e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c36e5 je 0x102c36f1 */
  if (C.zf) goto L_102c36f1;
L_102c36e7:;
  /* 102c36e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102c36e9:;
  /* 102c36e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102c36eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c36ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c36ef jne 0x102c36e9 */
  if (!C.zf) goto L_102c36e9;
L_102c36f1:;
  /* 102c36f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102c36f4 jne 0x102c367b */
  if (!C.zf) goto L_102c367b;
L_102c36f6:;
  /* 102c36f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102c36fa pop ebx */
  EBX = (pop32());
  /* 102c36fb pop esi */
  ESI = (pop32());
  /* 102c36fc pop edi */
  EDI = (pop32());
  /* 102c36fd ret  */
  ESPCHK(0x102c3600u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102c3700 (88 bytes, 40 insns) */
void f_102c3700(void) {
  FTRACE(0x102c3700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3700 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102c3704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c3708 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102c370a je 0x102c3753 */
  if (C.zf) goto L_102c3753;
  /* 102c370c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c370e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102c3712 push edi */
  push32((uint32_t)(EDI));
  /* 102c3713 mov edi, ecx */
  EDI = (ECX);
  /* 102c3715 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3718 jb 0x102c3747 */
  if (C.cf) goto L_102c3747;
  /* 102c371a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102c371c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102c371f je 0x102c3729 */
  if (C.zf) goto L_102c3729;
  /* 102c3721 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102c3723:;
  /* 102c3723 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3725 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c3726 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c3727 jne 0x102c3723 */
  if (!C.zf) goto L_102c3723;
L_102c3729:;
  /* 102c3729 mov ecx, eax */
  ECX = (EAX);
  /* 102c372b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102c372e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3730 mov ecx, eax */
  ECX = (EAX);
  /* 102c3732 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102c3735 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3737 mov ecx, edx */
  ECX = (EDX);
  /* 102c3739 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102c373c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c373f je 0x102c3747 */
  if (C.zf) goto L_102c3747;
  /* 102c3741 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102c3743 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102c3745 je 0x102c374d */
  if (C.zf) goto L_102c374d;
L_102c3747:;
  /* 102c3747 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3749 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c374a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102c374b jne 0x102c3747 */
  if (!C.zf) goto L_102c3747;
L_102c374d:;
  /* 102c374d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c3751 pop edi */
  EDI = (pop32());
  /* 102c3752 ret  */
  ESPCHK(0x102c3700u, _esp0);
  ESP += 4; return;
L_102c3753:;
  /* 102c3753 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c3757 ret  */
  ESPCHK(0x102c3700u, _esp0);
  ESP += 4; return;
}

/* FUN_10003758 @ 0x102c3758 (27 bytes, 13 insns) */
void f_102c3758(void) {
  FTRACE(0x102c3758u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3758 mov eax, dword ptr [0x102c6690] */
  EAX = (r32((uint32_t)(0x102c6690)));
  /* 102c375d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c375f je 0x102c3770 */
  if (C.zf) goto L_102c3770;
  /* 102c3761 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102c3765 call eax */
  call_ind((uint32_t)(EAX), 0x102c3767u);
  /* 102c3767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c3769 pop ecx */
  ECX = (pop32());
  /* 102c376a je 0x102c3770 */
  if (C.zf) goto L_102c3770;
  /* 102c376c push 1 */
  push32((uint32_t)(0x1u));
  /* 102c376e pop eax */
  EAX = (pop32());
  /* 102c376f ret  */
  ESPCHK(0x102c3758u, _esp0);
  ESP += 4; return;
L_102c3770:;
  /* 102c3770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102c3772 ret  */
  ESPCHK(0x102c3758u, _esp0);
  ESP += 4; return;
}

/* FUN_10003773 @ 0x102c3773 (511 bytes, 193 insns) */
void f_102c3773(void) {
  FTRACE(0x102c3773u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3773 push ebp */
  push32((uint32_t)(EBP));
  /* 102c3774 mov ebp, esp */
  EBP = (ESP);
  /* 102c3776 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102c3778 push 0x102c5458 */
  push32((uint32_t)(0x102c5458u));
  /* 102c377d push 0x102c3f40 */
  push32((uint32_t)(0x102c3f40u));
  /* 102c3782 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102c3788 push eax */
  push32((uint32_t)(EAX));
  /* 102c3789 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102c3790 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3793 push ebx */
  push32((uint32_t)(EBX));
  /* 102c3794 push esi */
  push32((uint32_t)(ESI));
  /* 102c3795 push edi */
  push32((uint32_t)(EDI));
  /* 102c3796 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102c3799 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c379b cmp dword ptr [0x102c66b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x102c66b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c37a1 jne 0x102c37e9 */
  if (!C.zf) goto L_102c37e9;
  /* 102c37a3 push edi */
  push32((uint32_t)(EDI));
  /* 102c37a4 push edi */
  push32((uint32_t)(EDI));
  /* 102c37a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c37a7 pop ebx */
  EBX = (pop32());
  /* 102c37a8 push ebx */
  push32((uint32_t)(EBX));
  /* 102c37a9 push 0x102c5450 */
  push32((uint32_t)(0x102c5450u));
  /* 102c37ae mov esi, 0x100 */
  ESI = (0x100u);
  /* 102c37b3 push esi */
  push32((uint32_t)(ESI));
  /* 102c37b4 push edi */
  push32((uint32_t)(EDI));
  /* 102c37b5 call dword ptr [0x102c5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5008))), 0x102c37bbu);
  /* 102c37bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c37bd je 0x102c37c7 */
  if (C.zf) goto L_102c37c7;
  /* 102c37bf mov dword ptr [0x102c66b8], ebx */
  w32((uint32_t)(0x102c66b8), (EBX));
  /* 102c37c5 jmp 0x102c37e9 */
  goto L_102c37e9;
L_102c37c7:;
  /* 102c37c7 push edi */
  push32((uint32_t)(EDI));
  /* 102c37c8 push edi */
  push32((uint32_t)(EDI));
  /* 102c37c9 push ebx */
  push32((uint32_t)(EBX));
  /* 102c37ca push 0x102c544c */
  push32((uint32_t)(0x102c544cu));
  /* 102c37cf push esi */
  push32((uint32_t)(ESI));
  /* 102c37d0 push edi */
  push32((uint32_t)(EDI));
  /* 102c37d1 call dword ptr [0x102c500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c500c))), 0x102c37d7u);
  /* 102c37d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c37d9 je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c37df mov dword ptr [0x102c66b8], 2 */
  w32((uint32_t)(0x102c66b8), (0x2u));
L_102c37e9:;
  /* 102c37e9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c37ec jle 0x102c37fe */
  if ((C.zf||C.sf!=C.of)) goto L_102c37fe;
  /* 102c37ee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102c37f1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c37f4 call 0x102c3997 */
  push32(0x102c37f9u); f_102c3997();
  /* 102c37f9 pop ecx */
  ECX = (pop32());
  /* 102c37fa pop ecx */
  ECX = (pop32());
  /* 102c37fb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_102c37fe:;
  /* 102c37fe mov eax, dword ptr [0x102c66b8] */
  EAX = (r32((uint32_t)(0x102c66b8)));
  /* 102c3803 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3806 jne 0x102c3825 */
  if (!C.zf) goto L_102c3825;
  /* 102c3808 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102c380b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102c380e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102c3811 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c3814 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c3817 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c381a call dword ptr [0x102c500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c500c))), 0x102c3820u);
  /* 102c3820 jmp 0x102c3903 */
  goto L_102c3903;
L_102c3825:;
  /* 102c3825 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3828 jne 0x102c3901 */
  if (!C.zf) goto L_102c3901;
  /* 102c382e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3831 jne 0x102c383b */
  if (!C.zf) goto L_102c383b;
  /* 102c3833 mov eax, dword ptr [0x102c66b0] */
  EAX = (r32((uint32_t)(0x102c66b0)));
  /* 102c3838 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_102c383b:;
  /* 102c383b push edi */
  push32((uint32_t)(EDI));
  /* 102c383c push edi */
  push32((uint32_t)(EDI));
  /* 102c383d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102c3840 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c3843 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 102c3846 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102c3848 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c384a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102c384d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c384e push eax */
  push32((uint32_t)(EAX));
  /* 102c384f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102c3852 call dword ptr [0x102c501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c501c))), 0x102c3858u);
  /* 102c3858 mov ebx, eax */
  EBX = (EAX);
  /* 102c385a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 102c385d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c385f je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c3865 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102c3868 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 102c386b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c386e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102c3870 call 0x102c4020 */
  push32(0x102c3875u); f_102c4020();
  /* 102c3875 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102c3878 mov eax, esp */
  EAX = (ESP);
  /* 102c387a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102c387d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c3881 jmp 0x102c3896 */
  goto L_102c3896;
  /* 102c3883 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c3885 pop eax */
  EAX = (pop32());
  /* 102c3886 ret  */
  ESPCHK(0x102c3773u, _esp0);
  ESP += 4; return;
  /* 102c3887 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102c388a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c388c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 102c388f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c3893 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102c3896:;
  /* 102c3896 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3899 je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c389b push ebx */
  push32((uint32_t)(EBX));
  /* 102c389c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102c389f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102c38a2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c38a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c38a7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102c38aa call dword ptr [0x102c501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c501c))), 0x102c38b0u);
  /* 102c38b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c38b2 je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c38b4 push edi */
  push32((uint32_t)(EDI));
  /* 102c38b5 push edi */
  push32((uint32_t)(EDI));
  /* 102c38b6 push ebx */
  push32((uint32_t)(EBX));
  /* 102c38b7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102c38ba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c38bd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c38c0 call dword ptr [0x102c5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5008))), 0x102c38c6u);
  /* 102c38c6 mov esi, eax */
  ESI = (EAX);
  /* 102c38c8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102c38cb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c38cd je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c38cf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102c38d3 je 0x102c3915 */
  if (C.zf) goto L_102c3915;
  /* 102c38d5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c38d8 je 0x102c3990 */
  if (C.zf) goto L_102c3990;
  /* 102c38de cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c38e1 jg 0x102c3901 */
  if ((!C.zf&&C.sf==C.of)) goto L_102c3901;
  /* 102c38e3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102c38e6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102c38e9 push ebx */
  push32((uint32_t)(EBX));
  /* 102c38ea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102c38ed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c38f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c38f3 call dword ptr [0x102c5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5008))), 0x102c38f9u);
  /* 102c38f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c38fb jne 0x102c3990 */
  if (!C.zf) goto L_102c3990;
L_102c3901:;
  /* 102c3901 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102c3903:;
  /* 102c3903 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 102c3906 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102c3909 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102c3910 pop edi */
  EDI = (pop32());
  /* 102c3911 pop esi */
  ESI = (pop32());
  /* 102c3912 pop ebx */
  EBX = (pop32());
  /* 102c3913 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3914 ret  */
  ESPCHK(0x102c3773u, _esp0);
  ESP += 4; return;
L_102c3915:;
  /* 102c3915 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102c391c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 102c391f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3922 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102c3924 call 0x102c4020 */
  push32(0x102c3929u); f_102c4020();
  /* 102c3929 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102c392c mov ebx, esp */
  EBX = (ESP);
  /* 102c392e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 102c3931 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c3935 jmp 0x102c3949 */
  goto L_102c3949;
  /* 102c3937 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c3939 pop eax */
  EAX = (pop32());
  /* 102c393a ret  */
  ESPCHK(0x102c3773u, _esp0);
  ESP += 4; return;
  /* 102c393b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102c393e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102c3940 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c3942 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c3946 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_102c3949:;
  /* 102c3949 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c394b je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c394d push esi */
  push32((uint32_t)(ESI));
  /* 102c394e push ebx */
  push32((uint32_t)(EBX));
  /* 102c394f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 102c3952 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102c3955 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c3958 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c395b call dword ptr [0x102c5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5008))), 0x102c3961u);
  /* 102c3961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c3963 je 0x102c3901 */
  if (C.zf) goto L_102c3901;
  /* 102c3965 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3968 push edi */
  push32((uint32_t)(EDI));
  /* 102c3969 push edi */
  push32((uint32_t)(EDI));
  /* 102c396a jne 0x102c3970 */
  if (!C.zf) goto L_102c3970;
  /* 102c396c push edi */
  push32((uint32_t)(EDI));
  /* 102c396d push edi */
  push32((uint32_t)(EDI));
  /* 102c396e jmp 0x102c3976 */
  goto L_102c3976;
L_102c3970:;
  /* 102c3970 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102c3973 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_102c3976:;
  /* 102c3976 push esi */
  push32((uint32_t)(ESI));
  /* 102c3977 push ebx */
  push32((uint32_t)(EBX));
  /* 102c3978 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102c397d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102c3980 call dword ptr [0x102c50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c50a4))), 0x102c3986u);
  /* 102c3986 mov esi, eax */
  ESI = (EAX);
  /* 102c3988 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c398a je 0x102c3901 */
  if (C.zf) goto L_102c3901;
L_102c3990:;
  /* 102c3990 mov eax, esi */
  EAX = (ESI);
  /* 102c3992 jmp 0x102c3903 */
  goto L_102c3903;
}

/* FUN_10003997 @ 0x102c3997 (43 bytes, 20 insns) */
void f_102c3997(void) {
  FTRACE(0x102c3997u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3997 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c399b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102c399f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102c39a1 push esi */
  push32((uint32_t)(ESI));
  /* 102c39a2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102c39a5 je 0x102c39b4 */
  if (C.zf) goto L_102c39b4;
L_102c39a7:;
  /* 102c39a7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c39aa je 0x102c39b4 */
  if (C.zf) goto L_102c39b4;
  /* 102c39ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c39ad mov esi, ecx */
  ESI = (ECX);
  /* 102c39af dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102c39b0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102c39b2 jne 0x102c39a7 */
  if (!C.zf) goto L_102c39a7;
L_102c39b4:;
  /* 102c39b4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102c39b7 pop esi */
  ESI = (pop32());
  /* 102c39b8 jne 0x102c39bf */
  if (!C.zf) goto L_102c39bf;
  /* 102c39ba sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c39be ret  */
  ESPCHK(0x102c3997u, _esp0);
  ESP += 4; return;
L_102c39bf:;
  /* 102c39bf mov eax, edx */
  EAX = (EDX);
  /* 102c39c1 ret  */
  ESPCHK(0x102c3997u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c2 @ 0x102c39c2 (318 bytes, 123 insns) */
void f_102c39c2(void) {
  FTRACE(0x102c39c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c39c2 push ebp */
  push32((uint32_t)(EBP));
  /* 102c39c3 mov ebp, esp */
  EBP = (ESP);
  /* 102c39c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102c39c7 push 0x102c5470 */
  push32((uint32_t)(0x102c5470u));
  /* 102c39cc push 0x102c3f40 */
  push32((uint32_t)(0x102c3f40u));
  /* 102c39d1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102c39d7 push eax */
  push32((uint32_t)(EAX));
  /* 102c39d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102c39df sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c39e2 push ebx */
  push32((uint32_t)(EBX));
  /* 102c39e3 push esi */
  push32((uint32_t)(ESI));
  /* 102c39e4 push edi */
  push32((uint32_t)(EDI));
  /* 102c39e5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102c39e8 mov eax, dword ptr [0x102c66bc] */
  EAX = (r32((uint32_t)(0x102c66bc)));
  /* 102c39ed xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c39ef cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c39f1 jne 0x102c3a31 */
  if (!C.zf) goto L_102c3a31;
  /* 102c39f3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102c39f6 push eax */
  push32((uint32_t)(EAX));
  /* 102c39f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c39f9 pop esi */
  ESI = (pop32());
  /* 102c39fa push esi */
  push32((uint32_t)(ESI));
  /* 102c39fb push 0x102c5450 */
  push32((uint32_t)(0x102c5450u));
  /* 102c3a00 push esi */
  push32((uint32_t)(ESI));
  /* 102c3a01 call dword ptr [0x102c5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5004))), 0x102c3a07u);
  /* 102c3a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c3a09 je 0x102c3a0f */
  if (C.zf) goto L_102c3a0f;
  /* 102c3a0b mov eax, esi */
  EAX = (ESI);
  /* 102c3a0d jmp 0x102c3a2c */
  goto L_102c3a2c;
L_102c3a0f:;
  /* 102c3a0f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102c3a12 push eax */
  push32((uint32_t)(EAX));
  /* 102c3a13 push esi */
  push32((uint32_t)(ESI));
  /* 102c3a14 push 0x102c544c */
  push32((uint32_t)(0x102c544cu));
  /* 102c3a19 push esi */
  push32((uint32_t)(ESI));
  /* 102c3a1a push ebx */
  push32((uint32_t)(EBX));
  /* 102c3a1b call dword ptr [0x102c5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5010))), 0x102c3a21u);
  /* 102c3a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102c3a23 je 0x102c3af7 */
  if (C.zf) goto L_102c3af7;
  /* 102c3a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 102c3a2b pop eax */
  EAX = (pop32());
L_102c3a2c:;
  /* 102c3a2c mov dword ptr [0x102c66bc], eax */
  w32((uint32_t)(0x102c66bc), (EAX));
L_102c3a31:;
  /* 102c3a31 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3a34 jne 0x102c3a5a */
  if (!C.zf) goto L_102c3a5a;
  /* 102c3a36 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102c3a39 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3a3b jne 0x102c3a42 */
  if (!C.zf) goto L_102c3a42;
  /* 102c3a3d mov eax, dword ptr [0x102c66a0] */
  EAX = (r32((uint32_t)(0x102c66a0)));
L_102c3a42:;
  /* 102c3a42 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102c3a45 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c3a48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c3a4b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c3a4e push eax */
  push32((uint32_t)(EAX));
  /* 102c3a4f call dword ptr [0x102c5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5010))), 0x102c3a55u);
  /* 102c3a55 jmp 0x102c3af9 */
  goto L_102c3af9;
L_102c3a5a:;
  /* 102c3a5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3a5d jne 0x102c3af7 */
  if (!C.zf) goto L_102c3af7;
  /* 102c3a63 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3a66 jne 0x102c3a70 */
  if (!C.zf) goto L_102c3a70;
  /* 102c3a68 mov eax, dword ptr [0x102c66b0] */
  EAX = (r32((uint32_t)(0x102c66b0)));
  /* 102c3a6d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_102c3a70:;
  /* 102c3a70 push ebx */
  push32((uint32_t)(EBX));
  /* 102c3a71 push ebx */
  push32((uint32_t)(EBX));
  /* 102c3a72 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c3a75 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c3a78 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 102c3a7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102c3a7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3a7f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102c3a82 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102c3a83 push eax */
  push32((uint32_t)(EAX));
  /* 102c3a84 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102c3a87 call dword ptr [0x102c501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c501c))), 0x102c3a8du);
  /* 102c3a8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102c3a90 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3a92 je 0x102c3af7 */
  if (C.zf) goto L_102c3af7;
  /* 102c3a94 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 102c3a97 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 102c3a9a mov eax, edi */
  EAX = (EDI);
  /* 102c3a9c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3a9f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102c3aa1 call 0x102c4020 */
  push32(0x102c3aa6u); f_102c4020();
  /* 102c3aa6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102c3aa9 mov esi, esp */
  ESI = (ESP);
  /* 102c3aab mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 102c3aae push edi */
  push32((uint32_t)(EDI));
  /* 102c3aaf push ebx */
  push32((uint32_t)(EBX));
  /* 102c3ab0 push esi */
  push32((uint32_t)(ESI));
  /* 102c3ab1 call 0x102c3700 */
  push32(0x102c3ab6u); f_102c3700();
  /* 102c3ab6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3ab9 jmp 0x102c3ac6 */
  goto L_102c3ac6;
  /* 102c3abb push 1 */
  push32((uint32_t)(0x1u));
  /* 102c3abd pop eax */
  EAX = (pop32());
  /* 102c3abe ret  */
  ESPCHK(0x102c39c2u, _esp0);
  ESP += 4; return;
  /* 102c3abf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102c3ac2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102c3ac4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102c3ac6:;
  /* 102c3ac6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102c3aca cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3acc je 0x102c3af7 */
  if (C.zf) goto L_102c3af7;
  /* 102c3ace push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 102c3ad1 push esi */
  push32((uint32_t)(ESI));
  /* 102c3ad2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102c3ad5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102c3ad8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102c3ada push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102c3add call dword ptr [0x102c501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c501c))), 0x102c3ae3u);
  /* 102c3ae3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3ae5 je 0x102c3af7 */
  if (C.zf) goto L_102c3af7;
  /* 102c3ae7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102c3aea push eax */
  push32((uint32_t)(EAX));
  /* 102c3aeb push esi */
  push32((uint32_t)(ESI));
  /* 102c3aec push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c3aef call dword ptr [0x102c5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102c5004))), 0x102c3af5u);
  /* 102c3af5 jmp 0x102c3af9 */
  goto L_102c3af9;
L_102c3af7:;
  /* 102c3af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102c3af9:;
  /* 102c3af9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 102c3afc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102c3aff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102c3b06 pop edi */
  EDI = (pop32());
  /* 102c3b07 pop esi */
  ESI = (pop32());
  /* 102c3b08 pop ebx */
  EBX = (pop32());
  /* 102c3b09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3b0a ret  */
  ESPCHK(0x102c39c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x102c3b10 (664 bytes, 261 insns) [15 switch table(s)] */
void f_102c3b10(void) {
  FTRACE(0x102c3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 102c3b11 mov ebp, esp */
  EBP = (ESP);
  /* 102c3b13 push edi */
  push32((uint32_t)(EDI));
  /* 102c3b14 push esi */
  push32((uint32_t)(ESI));
  /* 102c3b15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102c3b18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102c3b1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3b1e mov eax, ecx */
  EAX = (ECX);
  /* 102c3b20 mov edx, ecx */
  EDX = (ECX);
  /* 102c3b22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3b24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3b26 jbe 0x102c3b30 */
  if ((C.cf||C.zf)) goto L_102c3b30;
  /* 102c3b28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3b2a jb 0x102c3ca8 */
  if (C.cf) goto L_102c3ca8;
L_102c3b30:;
  /* 102c3b30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102c3b36 jne 0x102c3b4c */
  if (!C.zf) goto L_102c3b4c;
  /* 102c3b38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3b3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102c3b3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3b41 jb 0x102c3b6c */
  if (C.cf) goto L_102c3b6c;
  /* 102c3b43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3b45 jmp dword ptr [edx*4 + 0x102c3c58] */
  switch (EDX) {
    case 0: goto L_102c3c68;
    case 1: goto L_102c3c70;
    case 2: goto L_102c3c7c;
    case 3: goto L_102c3c90;
    default: x86_unimpl("switch@0x102c3b45 out of table"); return;
  }
L_102c3b4c:;
  /* 102c3b4c mov eax, edi */
  EAX = (EDI);
  /* 102c3b4e mov edx, 3 */
  EDX = (0x3u);
  /* 102c3b53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3b56 jb 0x102c3b64 */
  if (C.cf) goto L_102c3b64;
  /* 102c3b58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102c3b5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3b5d jmp dword ptr [eax*4 + 0x102c3b70] */
  switch (EAX) {
    case 1: goto L_102c3b80;
    case 2: goto L_102c3bac;
    case 3: goto L_102c3bd0;
    default: x86_unimpl("switch@0x102c3b5d out of table"); return;
  }
L_102c3b64:;
  /* 102c3b64 jmp dword ptr [ecx*4 + 0x102c3c68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102c3c68)))); return;
  /* 102c3b6b nop  */
  /* nop */
L_102c3b6c:;
  /* 102c3b6c jmp dword ptr [ecx*4 + 0x102c3bec] */
  switch (ECX) {
    case 0: goto L_102c3c4f;
    case 1: goto L_102c3c3c;
    case 2: goto L_102c3c34;
    case 3: goto L_102c3c2c;
    case 4: goto L_102c3c24;
    case 5: goto L_102c3c1c;
    case 6: goto L_102c3c14;
    case 7: goto L_102c3c0c;
    default: x86_unimpl("switch@0x102c3b6c out of table"); return;
  }
  /* 102c3b73 nop  */
  /* nop */
L_102c3b80:;
  /* 102c3b80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c3b82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3b84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3b86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c3b89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c3b8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c3b8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3b92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c3b95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3b98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3b9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3b9e jb 0x102c3b6c */
  if (C.cf) goto L_102c3b6c;
  /* 102c3ba0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3ba2 jmp dword ptr [edx*4 + 0x102c3c58] */
  switch (EDX) {
    case 0: goto L_102c3c68;
    case 1: goto L_102c3c70;
    case 2: goto L_102c3c7c;
    case 3: goto L_102c3c90;
    default: x86_unimpl("switch@0x102c3ba2 out of table"); return;
  }
  /* 102c3ba9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c3bac:;
  /* 102c3bac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c3bae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3bb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3bb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c3bb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3bb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c3bbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3bbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3bc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3bc4 jb 0x102c3b6c */
  if (C.cf) goto L_102c3b6c;
  /* 102c3bc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3bc8 jmp dword ptr [edx*4 + 0x102c3c58] */
  switch (EDX) {
    case 0: goto L_102c3c68;
    case 1: goto L_102c3c70;
    case 2: goto L_102c3c7c;
    case 3: goto L_102c3c90;
    default: x86_unimpl("switch@0x102c3bc8 out of table"); return;
  }
  /* 102c3bcf nop  */
  /* nop */
L_102c3bd0:;
  /* 102c3bd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c3bd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3bd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3bd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102c3bd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3bda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102c3bdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3bde jb 0x102c3b6c */
  if (C.cf) goto L_102c3b6c;
  /* 102c3be0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3be2 jmp dword ptr [edx*4 + 0x102c3c58] */
  switch (EDX) {
    case 0: goto L_102c3c68;
    case 1: goto L_102c3c70;
    case 2: goto L_102c3c7c;
    case 3: goto L_102c3c90;
    default: x86_unimpl("switch@0x102c3be2 out of table"); return;
  }
  /* 102c3be9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c3c0c:;
  /* 102c3c0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102c3c10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102c3c14:;
  /* 102c3c14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102c3c18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102c3c1c:;
  /* 102c3c1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102c3c20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102c3c24:;
  /* 102c3c24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102c3c28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102c3c2c:;
  /* 102c3c2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102c3c30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102c3c34:;
  /* 102c3c34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102c3c38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102c3c3c:;
  /* 102c3c3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102c3c40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102c3c44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102c3c4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3c4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102c3c4f:;
  /* 102c3c4f jmp dword ptr [edx*4 + 0x102c3c58] */
  switch (EDX) {
    case 0: goto L_102c3c68;
    case 1: goto L_102c3c70;
    case 2: goto L_102c3c7c;
    case 3: goto L_102c3c90;
    default: x86_unimpl("switch@0x102c3c4f out of table"); return;
  }
  /* 102c3c56 mov edi, edi */
  EDI = (EDI);
L_102c3c68:;
  /* 102c3c68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3c6b pop esi */
  ESI = (pop32());
  /* 102c3c6c pop edi */
  EDI = (pop32());
  /* 102c3c6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3c6e ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3c6f nop  */
  /* nop */
L_102c3c70:;
  /* 102c3c70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3c72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3c77 pop esi */
  ESI = (pop32());
  /* 102c3c78 pop edi */
  EDI = (pop32());
  /* 102c3c79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3c7a ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3c7b nop  */
  /* nop */
L_102c3c7c:;
  /* 102c3c7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3c7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3c80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c3c83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c3c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3c89 pop esi */
  ESI = (pop32());
  /* 102c3c8a pop edi */
  EDI = (pop32());
  /* 102c3c8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3c8c ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3c8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c3c90:;
  /* 102c3c90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102c3c92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102c3c94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c3c97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c3c9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c3c9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c3ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3ca3 pop esi */
  ESI = (pop32());
  /* 102c3ca4 pop edi */
  EDI = (pop32());
  /* 102c3ca5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3ca6 ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3ca7 nop  */
  /* nop */
L_102c3ca8:;
  /* 102c3ca8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102c3cac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102c3cb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102c3cb6 jne 0x102c3cdc */
  if (!C.zf) goto L_102c3cdc;
  /* 102c3cb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3cbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102c3cbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3cc1 jb 0x102c3cd0 */
  if (C.cf) goto L_102c3cd0;
  /* 102c3cc3 std  */
  C.df=1;
  /* 102c3cc4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3cc6 cld  */
  C.df=0;
  /* 102c3cc7 jmp dword ptr [edx*4 + 0x102c3df0] */
  switch (EDX) {
    case 0: goto L_102c3e00;
    case 1: goto L_102c3e08;
    case 2: goto L_102c3e18;
    case 3: goto L_102c3e2c;
    default: x86_unimpl("switch@0x102c3cc7 out of table"); return;
  }
  /* 102c3cce mov edi, edi */
  EDI = (EDI);
L_102c3cd0:;
  /* 102c3cd0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102c3cd2 jmp dword ptr [ecx*4 + 0x102c3da0] */
  switch (ECX) {
    case 0: goto L_102c3de7;
    default: x86_unimpl("switch@0x102c3cd2 out of table"); return;
  }
  /* 102c3cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c3cdc:;
  /* 102c3cdc mov eax, edi */
  EAX = (EDI);
  /* 102c3cde mov edx, 3 */
  EDX = (0x3u);
  /* 102c3ce3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3ce6 jb 0x102c3cf4 */
  if (C.cf) goto L_102c3cf4;
  /* 102c3ce8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102c3ceb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3ced jmp dword ptr [eax*4 + 0x102c3cf8] */
  switch (EAX) {
    case 1: goto L_102c3d08;
    case 2: goto L_102c3d28;
    case 3: goto L_102c3d50;
    default: x86_unimpl("switch@0x102c3ced out of table"); return;
  }
L_102c3cf4:;
  /* 102c3cf4 jmp dword ptr [ecx*4 + 0x102c3df0] */
  switch (ECX) {
    case 0: goto L_102c3e00;
    case 1: goto L_102c3e08;
    case 2: goto L_102c3e18;
    case 3: goto L_102c3e2c;
    default: x86_unimpl("switch@0x102c3cf4 out of table"); return;
  }
  /* 102c3cfb nop  */
  /* nop */
L_102c3d08:;
  /* 102c3d08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c3d0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c3d0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c3d10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102c3d11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102c3d15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3d18 jb 0x102c3cd0 */
  if (C.cf) goto L_102c3cd0;
  /* 102c3d1a std  */
  C.df=1;
  /* 102c3d1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3d1d cld  */
  C.df=0;
  /* 102c3d1e jmp dword ptr [edx*4 + 0x102c3df0] */
  switch (EDX) {
    case 0: goto L_102c3e00;
    case 1: goto L_102c3e08;
    case 2: goto L_102c3e18;
    case 3: goto L_102c3e2c;
    default: x86_unimpl("switch@0x102c3d1e out of table"); return;
  }
  /* 102c3d25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c3d28:;
  /* 102c3d28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c3d2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c3d2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c3d30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c3d33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3d36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c3d39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3d3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3d3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3d42 jb 0x102c3cd0 */
  if (C.cf) goto L_102c3cd0;
  /* 102c3d44 std  */
  C.df=1;
  /* 102c3d45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3d47 cld  */
  C.df=0;
  /* 102c3d48 jmp dword ptr [edx*4 + 0x102c3df0] */
  switch (EDX) {
    case 0: goto L_102c3e00;
    case 1: goto L_102c3e08;
    case 2: goto L_102c3e18;
    case 3: goto L_102c3e2c;
    default: x86_unimpl("switch@0x102c3d48 out of table"); return;
  }
  /* 102c3d4f nop  */
  /* nop */
L_102c3d50:;
  /* 102c3d50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c3d53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102c3d55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c3d58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c3d5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c3d5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c3d61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102c3d64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c3d67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3d6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c3d6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3d70 jb 0x102c3cd0 */
  if (C.cf) goto L_102c3cd0;
  /* 102c3d76 std  */
  C.df=1;
  /* 102c3d77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102c3d79 cld  */
  C.df=0;
  /* 102c3d7a jmp dword ptr [edx*4 + 0x102c3df0] */
  switch (EDX) {
    case 0: goto L_102c3e00;
    case 1: goto L_102c3e08;
    case 2: goto L_102c3e18;
    case 3: goto L_102c3e2c;
    default: x86_unimpl("switch@0x102c3d7a out of table"); return;
  }
  /* 102c3d81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102c3d84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 102c3d85 cmp eax, 0x3dac102c */
  { uint32_t _a=(EAX),_b=(0x3dac102cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3d8a sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c3d8c mov ah, 0x3d */
  AH = (0x3du);
  /* 102c3d8e sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c3d90 mov esp, 0xc4102c3d */
  ESP = (0xc4102c3du);
  /* 102c3d95 cmp eax, 0x3dcc102c */
  { uint32_t _a=(EAX),_b=(0x3dcc102cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3d9a sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c3d9c aam 0x3d */
  x86_unimpl("aam @ 0x102c3d9c");
  /* 102c3d9e sub al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102c3da4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102c3da8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102c3dac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102c3db0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102c3db4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102c3db8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102c3dbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102c3dc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102c3dc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102c3dc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102c3dcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102c3dd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102c3dd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102c3dd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102c3ddc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102c3de3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3de5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102c3de7:;
  /* 102c3de7 jmp dword ptr [edx*4 + 0x102c3df0] */
  switch (EDX) {
    case 0: goto L_102c3e00;
    case 1: goto L_102c3e08;
    case 2: goto L_102c3e18;
    case 3: goto L_102c3e2c;
    default: x86_unimpl("switch@0x102c3de7 out of table"); return;
  }
  /* 102c3dee mov edi, edi */
  EDI = (EDI);
L_102c3e00:;
  /* 102c3e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3e03 pop esi */
  ESI = (pop32());
  /* 102c3e04 pop edi */
  EDI = (pop32());
  /* 102c3e05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3e06 ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3e07 nop  */
  /* nop */
L_102c3e08:;
  /* 102c3e08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c3e0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c3e0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3e11 pop esi */
  ESI = (pop32());
  /* 102c3e12 pop edi */
  EDI = (pop32());
  /* 102c3e13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3e14 ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3e15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102c3e18:;
  /* 102c3e18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c3e1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c3e1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c3e21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c3e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3e27 pop esi */
  ESI = (pop32());
  /* 102c3e28 pop edi */
  EDI = (pop32());
  /* 102c3e29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3e2a ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
  /* 102c3e2b nop  */
  /* nop */
L_102c3e2c:;
  /* 102c3e2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102c3e2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102c3e32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102c3e35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102c3e38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102c3e3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102c3e3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3e41 pop esi */
  ESI = (pop32());
  /* 102c3e42 pop edi */
  EDI = (pop32());
  /* 102c3e43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102c3e44 ret  */
  ESPCHK(0x102c3b10u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x102c3e48 (32 bytes, 18 insns) */
void f_102c3e48(void) {
  FTRACE(0x102c3e48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3e48 push ebp */
  push32((uint32_t)(EBP));
  /* 102c3e49 mov ebp, esp */
  EBP = (ESP);
  /* 102c3e4b push ebx */
  push32((uint32_t)(EBX));
  /* 102c3e4c push esi */
  push32((uint32_t)(ESI));
  /* 102c3e4d push edi */
  push32((uint32_t)(EDI));
  /* 102c3e4e push ebp */
  push32((uint32_t)(EBP));
  /* 102c3e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 102c3e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 102c3e53 push 0x102c3e60 */
  push32((uint32_t)(0x102c3e60u));
  /* 102c3e58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102c3e5b call 0x102c4050 */
  push32(0x102c3e60u); f_102c4050();
  /* 102c3e60 pop ebp */
  EBP = (pop32());
  /* 102c3e61 pop edi */
  EDI = (pop32());
  /* 102c3e62 pop esi */
  ESI = (pop32());
  /* 102c3e63 pop ebx */
  EBX = (pop32());
  /* 102c3e64 mov esp, ebp */
  ESP = (EBP);
  /* 102c3e66 pop ebp */
  EBP = (pop32());
  /* 102c3e67 ret  */
  ESPCHK(0x102c3e48u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x102c3e8a (104 bytes, 33 insns) */
void f_102c3e8a(void) {
  FTRACE(0x102c3e8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3e8a push ebx */
  push32((uint32_t)(EBX));
  /* 102c3e8b push esi */
  push32((uint32_t)(ESI));
  /* 102c3e8c push edi */
  push32((uint32_t)(EDI));
  /* 102c3e8d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102c3e91 push eax */
  push32((uint32_t)(EAX));
  /* 102c3e92 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 102c3e94 push 0x102c3e68 */
  push32((uint32_t)(0x102c3e68u));
  /* 102c3e99 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 102c3ea0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_102c3ea7:;
  /* 102c3ea7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102c3eab mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 102c3eae mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 102c3eb1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3eb4 je 0x102c3ee4 */
  if (C.zf) goto L_102c3ee4;
  /* 102c3eb6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3eba je 0x102c3ee4 */
  if (C.zf) goto L_102c3ee4;
  /* 102c3ebc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 102c3ebf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 102c3ec2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 102c3ec6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 102c3ec9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c3ece jne 0x102c3ee2 */
  if (!C.zf) goto L_102c3ee2;
  /* 102c3ed0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102c3ed5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 102c3ed9 call 0x102c3f1e */
  push32(0x102c3edeu); f_102c3f1e();
  /* 102c3ede call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x102c3ee2u);
L_102c3ee2:;
  /* 102c3ee2 jmp 0x102c3ea7 */
  goto L_102c3ea7;
L_102c3ee4:;
  /* 102c3ee4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 102c3eeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c3eee pop edi */
  EDI = (pop32());
  /* 102c3eef pop esi */
  ESI = (pop32());
  /* 102c3ef0 pop ebx */
  EBX = (pop32());
  /* 102c3ef1 ret  */
  ESPCHK(0x102c3e8au, _esp0);
  ESP += 4; return;
}

/* FUN_10003f1e @ 0x102c3f1e (24 bytes, 10 insns) */
void f_102c3f1e(void) {
  FTRACE(0x102c3f1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3f1e push ebx */
  push32((uint32_t)(EBX));
  /* 102c3f1f push ecx */
  push32((uint32_t)(ECX));
  /* 102c3f20 mov ebx, 0x102c6400 */
  EBX = (0x102c6400u);
  /* 102c3f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102c3f28 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 102c3f2b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 102c3f2e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 102c3f31 pop ecx */
  ECX = (pop32());
  /* 102c3f32 pop ebx */
  EBX = (pop32());
  /* 102c3f33 ret 4 */
  ESPCHK(0x102c3f1eu, _esp0);
  ESP += 8; return;
}

/* FUN_10003ffd @ 0x102c3ffd (27 bytes, 11 insns) */
void f_102c3ffd(void) {
  FTRACE(0x102c3ffdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c3ffd push ebp */
  push32((uint32_t)(EBP));
  /* 102c3ffe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102c4002 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 102c4004 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 102c4007 push eax */
  push32((uint32_t)(EAX));
  /* 102c4008 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 102c400b push eax */
  push32((uint32_t)(EAX));
  /* 102c400c call 0x102c3e8a */
  push32(0x102c4011u); f_102c3e8a();
  /* 102c4011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102c4014 pop ebp */
  EBP = (pop32());
  /* 102c4015 ret 4 */
  ESPCHK(0x102c3ffdu, _esp0);
  ESP += 8; return;
}

/* FUN_10004020 @ 0x102c4020 (47 bytes, 17 insns) */
void f_102c4020(void) {
  FTRACE(0x102c4020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c4020 push ecx */
  push32((uint32_t)(ECX));
  /* 102c4021 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c4026 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 102c402a jb 0x102c4040 */
  if (C.cf) goto L_102c4040;
L_102c402c:;
  /* 102c402c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c4032 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c4037 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102c4039 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102c403e jae 0x102c402c */
  if (!C.cf) goto L_102c402c;
L_102c4040:;
  /* 102c4040 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102c4042 mov eax, esp */
  EAX = (ESP);
  /* 102c4044 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102c4046 mov esp, ecx */
  ESP = (ECX);
  /* 102c4048 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102c404a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 102c404d push eax */
  push32((uint32_t)(EAX));
  /* 102c404e ret  */
  ESPCHK(0x102c4020u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x102c4050 (6 bytes, 1 insns) */
void f_102c4050(void) {
  FTRACE(0x102c4050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102c4050 jmp dword ptr [0x102c5000] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102c5000)))); return;
}

