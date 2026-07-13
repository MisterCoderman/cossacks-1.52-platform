#include "recomp.h"

/* FUN_10001000 @ 0x120f1000 (20 bytes, 6 insns) */
void f_120f1000(void) {
  FTRACE(0x120f1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f1005 jne 0x120f100c */
  if (!C.zf) goto L_120f100c;
  /* 120f1007 call 0x120f1110 */
  push32(0x120f100cu); f_120f1110();
L_120f100c:;
  /* 120f100c mov eax, 1 */
  EAX = (0x1u);
  /* 120f1011 ret 0xc */
  ESPCHK(0x120f1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x120f1110 (887 bytes, 250 insns) */
void f_120f1110(void) {
  FTRACE(0x120f1110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f1110 push ebx */
  push32((uint32_t)(EBX));
  /* 120f1111 push ebp */
  push32((uint32_t)(EBP));
  /* 120f1112 push esi */
  push32((uint32_t)(ESI));
  /* 120f1113 mov esi, dword ptr [0x120fd1a8] */
  ESI = (r32((uint32_t)(0x120fd1a8)));
  /* 120f1119 push edi */
  push32((uint32_t)(EDI));
  /* 120f111a push 8 */
  push32((uint32_t)(0x8u));
  /* 120f111c push 0x120ff040 */
  push32((uint32_t)(0x120ff040u));
  /* 120f1121 call esi */
  call_ind((uint32_t)(ESI), 0x120f1123u);
  /* 120f1123 mov ebx, dword ptr [0x120fd1ac] */
  EBX = (r32((uint32_t)(0x120fd1ac)));
  /* 120f1129 push 0x12103cc0 */
  push32((uint32_t)(0x12103cc0u));
  /* 120f112e call ebx */
  call_ind((uint32_t)(EBX), 0x120f1130u);
  /* 120f1130 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1132 push 0x12103cc0 */
  push32((uint32_t)(0x12103cc0u));
  /* 120f1137 call esi */
  call_ind((uint32_t)(ESI), 0x120f1139u);
  /* 120f1139 push 0x12103d08 */
  push32((uint32_t)(0x12103d08u));
  /* 120f113e call ebx */
  call_ind((uint32_t)(EBX), 0x120f1140u);
  /* 120f1140 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1142 push 0x12103d08 */
  push32((uint32_t)(0x12103d08u));
  /* 120f1147 call esi */
  call_ind((uint32_t)(ESI), 0x120f1149u);
  /* 120f1149 push 0x1ce */
  push32((uint32_t)(0x1ceu));
  /* 120f114e push 0x12103a58 */
  push32((uint32_t)(0x12103a58u));
  /* 120f1153 call esi */
  call_ind((uint32_t)(ESI), 0x120f1155u);
  /* 120f1155 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1158 mov edi, 0x12103a61 */
  EDI = (0x12103a61u);
  /* 120f115d mov ebp, 0xffff */
  EBP = (0xffffu);
L_120f1162:;
  /* 120f1162 lea eax, [edi - 9] */
  EAX = ((uint32_t)(EDI + -0x9));
  /* 120f1165 push eax */
  push32((uint32_t)(EAX));
  /* 120f1166 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1168u);
  /* 120f1168 mov byte ptr [edi - 1], 1 */
  w8((uint32_t)(EDI + -0x1), (0x1u));
  /* 120f116c mov byte ptr [edi], 1 */
  w8((uint32_t)(EDI), (0x1u));
  /* 120f116f mov dword ptr [edi + 5], 0x640 */
  w32((uint32_t)(EDI + 0x5), (0x640u));
  /* 120f1176 mov dword ptr [edi + 9], ebp */
  w32((uint32_t)(EDI + 0x9), (EBP));
  /* 120f1179 mov dword ptr [edi + 1], 0 */
  w32((uint32_t)(EDI + 0x1), (0x0u));
  /* 120f1180 add edi, 0x16 */
  { uint32_t _a=(EDI),_b=(0x16u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1186 cmp edi, 0x12103c2f */
  { uint32_t _a=(EDI),_b=(0x12103c2fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f118c jl 0x120f1162 */
  if ((C.sf!=C.of)) goto L_120f1162;
  /* 120f118e push 0xd */
  push32((uint32_t)(0xdu));
  /* 120f1190 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 120f1192 push 0x12103dc0 */
  push32((uint32_t)(0x12103dc0u));
  /* 120f1197 call 0x120f3300 */
  push32(0x120f119cu); f_120f3300();
  /* 120f119c push 0xd */
  push32((uint32_t)(0xdu));
  /* 120f119e push 9 */
  push32((uint32_t)(0x9u));
  /* 120f11a0 push 0x12103a10 */
  push32((uint32_t)(0x12103a10u));
  /* 120f11a5 call 0x120f42c0 */
  push32(0x120f11aau); f_120f42c0();
  /* 120f11aa push 0x120ff1c4 */
  push32((uint32_t)(0x120ff1c4u));
  /* 120f11af push 0x12103d20 */
  push32((uint32_t)(0x12103d20u));
  /* 120f11b4 call dword ptr [0x120fd1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd1a4))), 0x120f11bau);
  /* 120f11ba mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f11c0 push 0x120ff1b8 */
  push32((uint32_t)(0x120ff1b8u));
  /* 120f11c5 push 0x12103cc8 */
  push32((uint32_t)(0x12103cc8u));
  /* 120f11ca call edi */
  call_ind((uint32_t)(EDI), 0x120f11ccu);
  /* 120f11cc push 0x120ff1a8 */
  push32((uint32_t)(0x120ff1a8u));
  /* 120f11d1 push 0x12103e50 */
  push32((uint32_t)(0x12103e50u));
  /* 120f11d6 call edi */
  call_ind((uint32_t)(EDI), 0x120f11d8u);
  /* 120f11d8 push 0x120ff19c */
  push32((uint32_t)(0x120ff19cu));
  /* 120f11dd push 0x12103d00 */
  push32((uint32_t)(0x12103d00u));
  /* 120f11e2 call edi */
  call_ind((uint32_t)(EDI), 0x120f11e4u);
  /* 120f11e4 mov ebp, dword ptr [0x120fd1b8] */
  EBP = (r32((uint32_t)(0x120fd1b8)));
  /* 120f11ea push 0x120ff194 */
  push32((uint32_t)(0x120ff194u));
  /* 120f11ef push 0x12103c90 */
  push32((uint32_t)(0x12103c90u));
  /* 120f11f4 call ebp */
  call_ind((uint32_t)(EBP), 0x120f11f6u);
  /* 120f11f6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f11f9 push 0x120ff18c */
  push32((uint32_t)(0x120ff18cu));
  /* 120f11fe push 0x12103ca0 */
  push32((uint32_t)(0x12103ca0u));
  /* 120f1203 call ebp */
  call_ind((uint32_t)(EBP), 0x120f1205u);
  /* 120f1205 push 0x120ff184 */
  push32((uint32_t)(0x120ff184u));
  /* 120f120a push 0x12103c98 */
  push32((uint32_t)(0x12103c98u));
  /* 120f120f call ebp */
  call_ind((uint32_t)(EBP), 0x120f1211u);
  /* 120f1211 mov edi, dword ptr [0x120fd1b0] */
  EDI = (r32((uint32_t)(0x120fd1b0)));
  /* 120f1217 push 0x120ff17c */
  push32((uint32_t)(0x120ff17cu));
  /* 120f121c push 0x12103da0 */
  push32((uint32_t)(0x12103da0u));
  /* 120f1221 call edi */
  call_ind((uint32_t)(EDI), 0x120f1223u);
  /* 120f1223 push 0x120ff174 */
  push32((uint32_t)(0x120ff174u));
  /* 120f1228 push 0x12103db0 */
  push32((uint32_t)(0x12103db0u));
  /* 120f122d call edi */
  call_ind((uint32_t)(EDI), 0x120f122fu);
  /* 120f122f push 0x120ff16c */
  push32((uint32_t)(0x120ff16cu));
  /* 120f1234 push 0x12103da8 */
  push32((uint32_t)(0x12103da8u));
  /* 120f1239 call edi */
  call_ind((uint32_t)(EDI), 0x120f123bu);
  /* 120f123b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f123d push 0x12103d58 */
  push32((uint32_t)(0x12103d58u));
  /* 120f1242 call esi */
  call_ind((uint32_t)(ESI), 0x120f1244u);
  /* 120f1244 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f1246 push 0x12103d70 */
  push32((uint32_t)(0x12103d70u));
  /* 120f124b call esi */
  call_ind((uint32_t)(ESI), 0x120f124du);
  /* 120f124d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f124f push 0x12103d88 */
  push32((uint32_t)(0x12103d88u));
  /* 120f1254 call esi */
  call_ind((uint32_t)(ESI), 0x120f1256u);
  /* 120f1256 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1259 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f125e call ebx */
  call_ind((uint32_t)(EBX), 0x120f1260u);
  /* 120f1260 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1262 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f1267 call esi */
  call_ind((uint32_t)(ESI), 0x120f1269u);
  /* 120f1269 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f126b push 0x12103e6c */
  push32((uint32_t)(0x12103e6cu));
  /* 120f1270 call esi */
  call_ind((uint32_t)(ESI), 0x120f1272u);
  /* 120f1272 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1274 push 0x12103e70 */
  push32((uint32_t)(0x12103e70u));
  /* 120f1279 call esi */
  call_ind((uint32_t)(ESI), 0x120f127bu);
  /* 120f127b push 0x120ff160 */
  push32((uint32_t)(0x120ff160u));
  /* 120f1280 push 0x12103c40 */
  push32((uint32_t)(0x12103c40u));
  /* 120f1285 call edi */
  call_ind((uint32_t)(EDI), 0x120f1287u);
  /* 120f1287 push 0x120ff154 */
  push32((uint32_t)(0x120ff154u));
  /* 120f128c push 0x12103c48 */
  push32((uint32_t)(0x12103c48u));
  /* 120f1291 call edi */
  call_ind((uint32_t)(EDI), 0x120f1293u);
  /* 120f1293 push 0x120ff148 */
  push32((uint32_t)(0x120ff148u));
  /* 120f1298 push 0x12103c50 */
  push32((uint32_t)(0x12103c50u));
  /* 120f129d call edi */
  call_ind((uint32_t)(EDI), 0x120f129fu);
  /* 120f129f push 0x120ff13c */
  push32((uint32_t)(0x120ff13cu));
  /* 120f12a4 push 0x12103c58 */
  push32((uint32_t)(0x12103c58u));
  /* 120f12a9 call edi */
  call_ind((uint32_t)(EDI), 0x120f12abu);
  /* 120f12ab push 0x120ff130 */
  push32((uint32_t)(0x120ff130u));
  /* 120f12b0 push 0x12103c60 */
  push32((uint32_t)(0x12103c60u));
  /* 120f12b5 call edi */
  call_ind((uint32_t)(EDI), 0x120f12b7u);
  /* 120f12b7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f12ba push 0x120ff124 */
  push32((uint32_t)(0x120ff124u));
  /* 120f12bf push 0x12103c68 */
  push32((uint32_t)(0x12103c68u));
  /* 120f12c4 call edi */
  call_ind((uint32_t)(EDI), 0x120f12c6u);
  /* 120f12c6 push 0x120ff118 */
  push32((uint32_t)(0x120ff118u));
  /* 120f12cb push 0x12103c70 */
  push32((uint32_t)(0x12103c70u));
  /* 120f12d0 call edi */
  call_ind((uint32_t)(EDI), 0x120f12d2u);
  /* 120f12d2 push 0x120ff10c */
  push32((uint32_t)(0x120ff10cu));
  /* 120f12d7 push 0x12103c78 */
  push32((uint32_t)(0x12103c78u));
  /* 120f12dc call edi */
  call_ind((uint32_t)(EDI), 0x120f12deu);
  /* 120f12de push 4 */
  push32((uint32_t)(0x4u));
  /* 120f12e0 push 0x12103e64 */
  push32((uint32_t)(0x12103e64u));
  /* 120f12e5 call esi */
  call_ind((uint32_t)(ESI), 0x120f12e7u);
  /* 120f12e7 push 0x121039d0 */
  push32((uint32_t)(0x121039d0u));
  /* 120f12ec call ebx */
  call_ind((uint32_t)(EBX), 0x120f12eeu);
  /* 120f12ee push 0x12103d18 */
  push32((uint32_t)(0x12103d18u));
  /* 120f12f3 call ebx */
  call_ind((uint32_t)(EBX), 0x120f12f5u);
  /* 120f12f5 push 0x12103db8 */
  push32((uint32_t)(0x12103db8u));
  /* 120f12fa call ebx */
  call_ind((uint32_t)(EBX), 0x120f12fcu);
  /* 120f12fc push 0x12103c38 */
  push32((uint32_t)(0x12103c38u));
  /* 120f1301 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1303u);
  /* 120f1303 push 0x12103c30 */
  push32((uint32_t)(0x12103c30u));
  /* 120f1308 call ebx */
  call_ind((uint32_t)(EBX), 0x120f130au);
  /* 120f130a push 8 */
  push32((uint32_t)(0x8u));
  /* 120f130c push 0x12103db8 */
  push32((uint32_t)(0x12103db8u));
  /* 120f1311 call esi */
  call_ind((uint32_t)(ESI), 0x120f1313u);
  /* 120f1313 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1315 push 0x12103c38 */
  push32((uint32_t)(0x12103c38u));
  /* 120f131a call esi */
  call_ind((uint32_t)(ESI), 0x120f131cu);
  /* 120f131c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f131f push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1321 push 0x12103c30 */
  push32((uint32_t)(0x12103c30u));
  /* 120f1326 call esi */
  call_ind((uint32_t)(ESI), 0x120f1328u);
  /* 120f1328 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f132a push 0x12103e74 */
  push32((uint32_t)(0x12103e74u));
  /* 120f132f call esi */
  call_ind((uint32_t)(ESI), 0x120f1331u);
  /* 120f1331 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1333 push 0x120ff04c */
  push32((uint32_t)(0x120ff04cu));
  /* 120f1338 call esi */
  call_ind((uint32_t)(ESI), 0x120f133au);
  /* 120f133a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f133d mov ecx, 0x121039d8 */
  ECX = (0x121039d8u);
  /* 120f1342 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1344 call 0x120f30f0 */
  push32(0x120f1349u); f_120f30f0();
  /* 120f1349 mov edi, 0x12103cd0 */
  EDI = (0x12103cd0u);
L_120f134e:;
  /* 120f134e push edi */
  push32((uint32_t)(EDI));
  /* 120f134f call ebx */
  call_ind((uint32_t)(EBX), 0x120f1351u);
  /* 120f1351 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1357 cmp edi, 0x12103d00 */
  { uint32_t _a=(EDI),_b=(0x12103d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f135d jl 0x120f134e */
  if ((C.sf!=C.of)) goto L_120f134e;
  /* 120f135f push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120f1361 push 0x12103cd0 */
  push32((uint32_t)(0x12103cd0u));
  /* 120f1366 call esi */
  call_ind((uint32_t)(ESI), 0x120f1368u);
  /* 120f1368 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f136e push 0x120ff0fc */
  push32((uint32_t)(0x120ff0fcu));
  /* 120f1373 push 0x12103d50 */
  push32((uint32_t)(0x12103d50u));
  /* 120f1378 call edi */
  call_ind((uint32_t)(EDI), 0x120f137au);
  /* 120f137a push 0x120ff0ec */
  push32((uint32_t)(0x120ff0ecu));
  /* 120f137f push 0x12103d28 */
  push32((uint32_t)(0x12103d28u));
  /* 120f1384 call edi */
  call_ind((uint32_t)(EDI), 0x120f1386u);
  /* 120f1386 push 0x120ff0e0 */
  push32((uint32_t)(0x120ff0e0u));
  /* 120f138b push 0x12103d30 */
  push32((uint32_t)(0x12103d30u));
  /* 120f1390 call edi */
  call_ind((uint32_t)(EDI), 0x120f1392u);
  /* 120f1392 push 0x120ff0d0 */
  push32((uint32_t)(0x120ff0d0u));
  /* 120f1397 push 0x12103d38 */
  push32((uint32_t)(0x12103d38u));
  /* 120f139c call edi */
  call_ind((uint32_t)(EDI), 0x120f139eu);
  /* 120f139e push 0x120ff0c4 */
  push32((uint32_t)(0x120ff0c4u));
  /* 120f13a3 push 0x12103d40 */
  push32((uint32_t)(0x12103d40u));
  /* 120f13a8 call edi */
  call_ind((uint32_t)(EDI), 0x120f13aau);
  /* 120f13aa push 0x120ff0b8 */
  push32((uint32_t)(0x120ff0b8u));
  /* 120f13af push 0x12103a08 */
  push32((uint32_t)(0x12103a08u));
  /* 120f13b4 call ebp */
  call_ind((uint32_t)(EBP), 0x120f13b6u);
  /* 120f13b6 push 0x120ff0a8 */
  push32((uint32_t)(0x120ff0a8u));
  /* 120f13bb push 0x12103c88 */
  push32((uint32_t)(0x12103c88u));
  /* 120f13c0 call ebp */
  call_ind((uint32_t)(EBP), 0x120f13c2u);
  /* 120f13c2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f13c5 push 0x120ff098 */
  push32((uint32_t)(0x120ff098u));
  /* 120f13ca push 0x12103c80 */
  push32((uint32_t)(0x12103c80u));
  /* 120f13cf call ebp */
  call_ind((uint32_t)(EBP), 0x120f13d1u);
  /* 120f13d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f13d3 push 0x12103e68 */
  push32((uint32_t)(0x12103e68u));
  /* 120f13d8 call esi */
  call_ind((uint32_t)(ESI), 0x120f13dau);
  /* 120f13da push 4 */
  push32((uint32_t)(0x4u));
  /* 120f13dc push 0x120ff048 */
  push32((uint32_t)(0x120ff048u));
  /* 120f13e1 call esi */
  call_ind((uint32_t)(ESI), 0x120f13e3u);
  /* 120f13e3 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f13e8 call ebx */
  call_ind((uint32_t)(EBX), 0x120f13eau);
  /* 120f13ea push 8 */
  push32((uint32_t)(0x8u));
  /* 120f13ec push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f13f1 call esi */
  call_ind((uint32_t)(ESI), 0x120f13f3u);
  /* 120f13f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f13f5 push 0x12103e6c */
  push32((uint32_t)(0x12103e6cu));
  /* 120f13fa call esi */
  call_ind((uint32_t)(ESI), 0x120f13fcu);
  /* 120f13fc push 4 */
  push32((uint32_t)(0x4u));
  /* 120f13fe push 0x12103e70 */
  push32((uint32_t)(0x12103e70u));
  /* 120f1403 call esi */
  call_ind((uint32_t)(ESI), 0x120f1405u);
  /* 120f1405 push 0x120ff090 */
  push32((uint32_t)(0x120ff090u));
  /* 120f140a push 0x12103ca8 */
  push32((uint32_t)(0x12103ca8u));
  /* 120f140f call ebp */
  call_ind((uint32_t)(EBP), 0x120f1411u);
  /* 120f1411 push 0x120ff084 */
  push32((uint32_t)(0x120ff084u));
  /* 120f1416 push 0x12103c28 */
  push32((uint32_t)(0x12103c28u));
  /* 120f141b call ebp */
  call_ind((uint32_t)(EBP), 0x120f141du);
  /* 120f141d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1420 push 0x120ff078 */
  push32((uint32_t)(0x120ff078u));
  /* 120f1425 push 0x12103cb8 */
  push32((uint32_t)(0x12103cb8u));
  /* 120f142a call ebp */
  call_ind((uint32_t)(EBP), 0x120f142cu);
  /* 120f142c push 0x120ff070 */
  push32((uint32_t)(0x120ff070u));
  /* 120f1431 push 0x12103d10 */
  push32((uint32_t)(0x12103d10u));
  /* 120f1436 call ebp */
  call_ind((uint32_t)(EBP), 0x120f1438u);
  /* 120f1438 push 0x120ff068 */
  push32((uint32_t)(0x120ff068u));
  /* 120f143d push 0x12103d48 */
  push32((uint32_t)(0x12103d48u));
  /* 120f1442 call ebp */
  call_ind((uint32_t)(EBP), 0x120f1444u);
  /* 120f1444 push 0x120ff060 */
  push32((uint32_t)(0x120ff060u));
  /* 120f1449 push 0x12103cb0 */
  push32((uint32_t)(0x12103cb0u));
  /* 120f144e call ebp */
  call_ind((uint32_t)(EBP), 0x120f1450u);
  /* 120f1450 mov esi, dword ptr [0x120fd1c0] */
  ESI = (r32((uint32_t)(0x120fd1c0)));
  /* 120f1456 push 0x120ff058 */
  push32((uint32_t)(0x120ff058u));
  /* 120f145b push 1 */
  push32((uint32_t)(0x1u));
  /* 120f145d call esi */
  call_ind((uint32_t)(ESI), 0x120f145fu);
  /* 120f145f push 0x120ff050 */
  push32((uint32_t)(0x120ff050u));
  /* 120f1464 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1466 call esi */
  call_ind((uint32_t)(ESI), 0x120f1468u);
  /* 120f1468 push 0xe */
  push32((uint32_t)(0xeu));
  /* 120f146a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f146c call dword ptr [0x120fd1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd1c4))), 0x120f1472u);
  /* 120f1472 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1474 call 0x120f448f */
  push32(0x120f1479u); f_120f448f();
  /* 120f1479 push eax */
  push32((uint32_t)(EAX));
  /* 120f147a call 0x120f4460 */
  push32(0x120f147fu); f_120f4460();
  /* 120f147f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1482 pop edi */
  EDI = (pop32());
  /* 120f1483 pop esi */
  ESI = (pop32());
  /* 120f1484 pop ebp */
  EBP = (pop32());
  /* 120f1485 pop ebx */
  EBX = (pop32());
  /* 120f1486 ret  */
  ESPCHK(0x120f1110u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x120f1490 (3003 bytes, 913 insns) [2 switch table(s)] */
void f_120f1490(void) {
  FTRACE(0x120f1490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f1490 push ebp */
  push32((uint32_t)(EBP));
  /* 120f1491 mov ebp, esp */
  EBP = (ESP);
  /* 120f1493 sub esp, 0x68 */
  { uint32_t _a=(ESP),_b=(0x68u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1496 push ebx */
  push32((uint32_t)(EBX));
  /* 120f1497 push esi */
  push32((uint32_t)(ESI));
  /* 120f1498 push edi */
  push32((uint32_t)(EDI));
  /* 120f1499 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f149b call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f14a1u);
  /* 120f14a1 mov edi, dword ptr [0x120fd1bc] */
  EDI = (r32((uint32_t)(0x120fd1bc)));
  /* 120f14a7 mov ebx, dword ptr [0x120fd12c] */
  EBX = (r32((uint32_t)(0x120fd12c)));
  /* 120f14ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f14b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f14b2 je 0x120f1762 */
  if (C.zf) goto L_120f1762;
  /* 120f14b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14ba push 1 */
  push32((uint32_t)(0x1u));
  /* 120f14bc call dword ptr [0x120fd13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd13c))), 0x120f14c2u);
  /* 120f14c2 mov esi, dword ptr [0x120fd140] */
  ESI = (r32((uint32_t)(0x120fd140)));
  /* 120f14c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14ca push 0x12103d30 */
  push32((uint32_t)(0x12103d30u));
  /* 120f14cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14d1 call esi */
  call_ind((uint32_t)(ESI), 0x120f14d3u);
  /* 120f14d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14d5 push 0x12103d38 */
  push32((uint32_t)(0x12103d38u));
  /* 120f14da push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14dc call esi */
  call_ind((uint32_t)(ESI), 0x120f14deu);
  /* 120f14de push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14e0 push 0x12103d40 */
  push32((uint32_t)(0x12103d40u));
  /* 120f14e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14e7 call esi */
  call_ind((uint32_t)(ESI), 0x120f14e9u);
  /* 120f14e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f14eb call edi */
  call_ind((uint32_t)(EDI), 0x120f14edu);
  /* 120f14ed mov ecx, 8 */
  ECX = (0x8u);
  /* 120f14f2 mov esi, dword ptr [0x120fd138] */
  ESI = (r32((uint32_t)(0x120fd138)));
  /* 120f14f8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f14fa lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f14fd lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f1500 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 120f1503 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 120f1506 push eax */
  push32((uint32_t)(EAX));
  /* 120f1507 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1509 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f150b call esi */
  call_ind((uint32_t)(ESI), 0x120f150du);
  /* 120f150d push 0 */
  push32((uint32_t)(0x0u));
  /* 120f150f call edi */
  call_ind((uint32_t)(EDI), 0x120f1511u);
  /* 120f1511 mov ecx, 8 */
  ECX = (0x8u);
  /* 120f1516 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1519 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f151b lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f151e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f1521 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 120f1524 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 120f1527 push ecx */
  push32((uint32_t)(ECX));
  /* 120f1528 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f152a push 0 */
  push32((uint32_t)(0x0u));
  /* 120f152c call esi */
  call_ind((uint32_t)(ESI), 0x120f152eu);
  /* 120f152e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1530 call edi */
  call_ind((uint32_t)(EDI), 0x120f1532u);
  /* 120f1532 mov ecx, 8 */
  ECX = (0x8u);
  /* 120f1537 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1539 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f153c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f153f lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 120f1542 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 120f1545 push edx */
  push32((uint32_t)(EDX));
  /* 120f1546 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1548 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f154a call esi */
  call_ind((uint32_t)(ESI), 0x120f154cu);
  /* 120f154c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f154e call edi */
  call_ind((uint32_t)(EDI), 0x120f1550u);
  /* 120f1550 mov ecx, 8 */
  ECX = (0x8u);
  /* 120f1555 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1557 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f155a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f155d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 120f1560 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 120f1563 push eax */
  push32((uint32_t)(EAX));
  /* 120f1564 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1566 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1568 call esi */
  call_ind((uint32_t)(ESI), 0x120f156au);
  /* 120f156a push 0 */
  push32((uint32_t)(0x0u));
  /* 120f156c call edi */
  call_ind((uint32_t)(EDI), 0x120f156eu);
  /* 120f156e mov ecx, 8 */
  ECX = (0x8u);
  /* 120f1573 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1575 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f1578 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f157b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 120f157e shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 120f1581 push ecx */
  push32((uint32_t)(ECX));
  /* 120f1582 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1584 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1586 call esi */
  call_ind((uint32_t)(ESI), 0x120f1588u);
  /* 120f1588 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f158a call edi */
  call_ind((uint32_t)(EDI), 0x120f158cu);
  /* 120f158c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f158f mov ecx, 8 */
  ECX = (0x8u);
  /* 120f1594 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1596 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f1599 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f159c lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 120f159f shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 120f15a2 push edx */
  push32((uint32_t)(EDX));
  /* 120f15a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 120f15a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f15a7 call esi */
  call_ind((uint32_t)(ESI), 0x120f15a9u);
  /* 120f15a9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120f15ae push 0 */
  push32((uint32_t)(0x0u));
  /* 120f15b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15b2 call esi */
  call_ind((uint32_t)(ESI), 0x120f15b4u);
  /* 120f15b4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120f15b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f15bb push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15bd call esi */
  call_ind((uint32_t)(ESI), 0x120f15bfu);
  /* 120f15bf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120f15c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f15c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15c8 call esi */
  call_ind((uint32_t)(ESI), 0x120f15cau);
  /* 120f15ca push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120f15cf push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15d3 call esi */
  call_ind((uint32_t)(ESI), 0x120f15d5u);
  /* 120f15d5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120f15da push 4 */
  push32((uint32_t)(0x4u));
  /* 120f15dc push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15de call esi */
  call_ind((uint32_t)(ESI), 0x120f15e0u);
  /* 120f15e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f15e3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120f15e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 120f15ea push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15ec call esi */
  call_ind((uint32_t)(ESI), 0x120f15eeu);
  /* 120f15ee push 0 */
  push32((uint32_t)(0x0u));
  /* 120f15f0 call edi */
  call_ind((uint32_t)(EDI), 0x120f15f2u);
  /* 120f15f2 push eax */
  push32((uint32_t)(EAX));
  /* 120f15f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f15f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f15f9 push 0x120ff250 */
  push32((uint32_t)(0x120ff250u));
  /* 120f15fe push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1600 call dword ptr [0x120fd148] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd148))), 0x120f1606u);
  /* 120f1606 mov esi, dword ptr [0x120fd13c] */
  ESI = (r32((uint32_t)(0x120fd13c)));
  /* 120f160c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f160e push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1610 call esi */
  call_ind((uint32_t)(ESI), 0x120f1612u);
  /* 120f1612 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1614 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1616 call esi */
  call_ind((uint32_t)(ESI), 0x120f1618u);
  /* 120f1618 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f161a push 4 */
  push32((uint32_t)(0x4u));
  /* 120f161c call esi */
  call_ind((uint32_t)(ESI), 0x120f161eu);
  /* 120f161e mov eax, dword ptr [0x12103d65] */
  EAX = (r32((uint32_t)(0x12103d65)));
  /* 120f1623 mov cl, byte ptr [0x12103d61] */
  CL = (r8((uint32_t)(0x12103d61)));
  /* 120f1629 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f162c push eax */
  push32((uint32_t)(EAX));
  /* 120f162d push ecx */
  push32((uint32_t)(ECX));
  /* 120f162e call ebx */
  call_ind((uint32_t)(EBX), 0x120f1630u);
  /* 120f1630 mov edx, dword ptr [0x12103d7d] */
  EDX = (r32((uint32_t)(0x12103d7d)));
  /* 120f1636 mov al, byte ptr [0x12103d79] */
  AL = (r8((uint32_t)(0x12103d79)));
  /* 120f163b push edx */
  push32((uint32_t)(EDX));
  /* 120f163c push eax */
  push32((uint32_t)(EAX));
  /* 120f163d call ebx */
  call_ind((uint32_t)(EBX), 0x120f163fu);
  /* 120f163f mov ecx, dword ptr [0x12103d95] */
  ECX = (r32((uint32_t)(0x12103d95)));
  /* 120f1645 mov dl, byte ptr [0x12103d91] */
  DL = (r8((uint32_t)(0x12103d91)));
  /* 120f164b push ecx */
  push32((uint32_t)(ECX));
  /* 120f164c push edx */
  push32((uint32_t)(EDX));
  /* 120f164d call ebx */
  call_ind((uint32_t)(EBX), 0x120f164fu);
  /* 120f164f push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1651 call edi */
  call_ind((uint32_t)(EDI), 0x120f1653u);
  /* 120f1653 mov ecx, 8 */
  ECX = (0x8u);
  /* 120f1658 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f165a lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f165d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 120f1660 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 120f1663 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 120f1666 push eax */
  push32((uint32_t)(EAX));
  /* 120f1667 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1669 call ebx */
  call_ind((uint32_t)(EBX), 0x120f166bu);
  /* 120f166b push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 120f1670 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1672 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1674u);
  /* 120f1674 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 120f1679 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f167b call ebx */
  call_ind((uint32_t)(EBX), 0x120f167du);
  /* 120f167d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 120f1682 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1684 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1686u);
  /* 120f1686 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 120f168b push 5 */
  push32((uint32_t)(0x5u));
  /* 120f168d call ebx */
  call_ind((uint32_t)(EBX), 0x120f168fu);
  /* 120f168f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1692 push 0x120ff244 */
  push32((uint32_t)(0x120ff244u));
  /* 120f1697 call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f169du);
  /* 120f169d mov esi, dword ptr [0x120fd144] */
  ESI = (r32((uint32_t)(0x120fd144)));
  /* 120f16a3 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 120f16a5 call esi */
  call_ind((uint32_t)(ESI), 0x120f16a7u);
  /* 120f16a7 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 120f16a9 call esi */
  call_ind((uint32_t)(ESI), 0x120f16abu);
  /* 120f16ab push 0x43 */
  push32((uint32_t)(0x43u));
  /* 120f16ad call esi */
  call_ind((uint32_t)(ESI), 0x120f16afu);
  /* 120f16af push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120f16b1 call esi */
  call_ind((uint32_t)(ESI), 0x120f16b3u);
  /* 120f16b3 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 120f16b5 call esi */
  call_ind((uint32_t)(ESI), 0x120f16b7u);
  /* 120f16b7 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 120f16b9 call esi */
  call_ind((uint32_t)(ESI), 0x120f16bbu);
  /* 120f16bb push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120f16bd call esi */
  call_ind((uint32_t)(ESI), 0x120f16bfu);
  /* 120f16bf mov esi, dword ptr [0x120fd154] */
  ESI = (r32((uint32_t)(0x120fd154)));
  /* 120f16c5 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 120f16c7 call esi */
  call_ind((uint32_t)(ESI), 0x120f16c9u);
  /* 120f16c9 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 120f16cb call esi */
  call_ind((uint32_t)(ESI), 0x120f16cdu);
  /* 120f16cd push 0x47 */
  push32((uint32_t)(0x47u));
  /* 120f16cf call esi */
  call_ind((uint32_t)(ESI), 0x120f16d1u);
  /* 120f16d1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 120f16d3 call esi */
  call_ind((uint32_t)(ESI), 0x120f16d5u);
  /* 120f16d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f16d7 call edi */
  call_ind((uint32_t)(EDI), 0x120f16d9u);
  /* 120f16d9 lea ecx, [eax + eax*2 + 5] */
  ECX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 120f16dd push 0 */
  push32((uint32_t)(0x0u));
  /* 120f16df mov dword ptr [0x12103e74], ecx */
  w32((uint32_t)(0x12103e74), (ECX));
  /* 120f16e5 call edi */
  call_ind((uint32_t)(EDI), 0x120f16e7u);
  /* 120f16e7 mov ecx, 0xf */
  ECX = (0xfu);
  /* 120f16ec push 0 */
  push32((uint32_t)(0x0u));
  /* 120f16ee sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f16f0 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 120f16f3 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 120f16f6 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 120f16f9 mov dword ptr [0x120ff04c], edx */
  w32((uint32_t)(0x120ff04c), (EDX));
  /* 120f16ff call edi */
  call_ind((uint32_t)(EDI), 0x120f1701u);
  /* 120f1701 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1704 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1707 ja 0x120f173e */
  if ((!C.cf&&!C.zf)) goto L_120f173e;
  /* 120f1709 jmp dword ptr [eax*4 + 0x120f204c] */
  switch (EAX) {
    case 0: goto L_120f1710;
    case 1: goto L_120f171c;
    case 2: goto L_120f1728;
    case 3: goto L_120f1734;
    case 4: goto L_120f1dd7;
    case 5: goto L_120f1ddb;
    case 6: goto L_120f1ddf;
    case 7: goto L_120f1de3;
    default: x86_unimpl("switch@0x120f1709 out of table"); return;
  }
L_120f1710:;
  /* 120f1710 mov dword ptr [0x12103e68], 0x64 */
  w32((uint32_t)(0x12103e68), (0x64u));
  /* 120f171a jmp 0x120f173e */
  goto L_120f173e;
L_120f171c:;
  /* 120f171c mov dword ptr [0x12103e68], 0x3c */
  w32((uint32_t)(0x12103e68), (0x3cu));
  /* 120f1726 jmp 0x120f173e */
  goto L_120f173e;
L_120f1728:;
  /* 120f1728 mov dword ptr [0x12103e68], 0x28 */
  w32((uint32_t)(0x12103e68), (0x28u));
  /* 120f1732 jmp 0x120f173e */
  goto L_120f173e;
L_120f1734:;
  /* 120f1734 mov dword ptr [0x12103e68], 0x1e */
  w32((uint32_t)(0x12103e68), (0x1eu));
L_120f173e:;
  /* 120f173e push 0x12103d10 */
  push32((uint32_t)(0x12103d10u));
  /* 120f1743 call dword ptr [0x120fd158] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd158))), 0x120f1749u);
  /* 120f1749 push 0x12103d48 */
  push32((uint32_t)(0x12103d48u));
  /* 120f174e call dword ptr [0x120fd150] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd150))), 0x120f1754u);
  /* 120f1754 push 0x12103cb0 */
  push32((uint32_t)(0x12103cb0u));
  /* 120f1759 call dword ptr [0x120fd160] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd160))), 0x120f175fu);
  /* 120f175f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1762:;
  /* 120f1762 mov eax, dword ptr [0x12103e64] */
  EAX = (r32((uint32_t)(0x12103e64)));
  /* 120f1767 mov ecx, 3 */
  ECX = (0x3u);
  /* 120f176c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f176d push 0 */
  push32((uint32_t)(0x0u));
  /* 120f176f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f1770 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f1772 push 0x12103d08 */
  push32((uint32_t)(0x12103d08u));
  /* 120f1777 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1779 mov dword ptr [0x12103e64], edx */
  w32((uint32_t)(0x12103e64), (EDX));
  /* 120f177f call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f1785u);
  /* 120f1785 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1788 mov dword ptr [0x12103d58], 0x12103c90 */
  w32((uint32_t)(0x12103d58), (0x12103c90u));
  /* 120f1792 mov dword ptr [0x12103d5c], 0x12103da0 */
  w32((uint32_t)(0x12103d5c), (0x12103da0u));
  /* 120f179c mov dword ptr [0x12103d70], 0x12103ca0 */
  w32((uint32_t)(0x12103d70), (0x12103ca0u));
  /* 120f17a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f17a8 push 7 */
  push32((uint32_t)(0x7u));
  /* 120f17aa push 0x12103a58 */
  push32((uint32_t)(0x12103a58u));
  /* 120f17af mov dword ptr [0x12103d74], 0x12103db0 */
  w32((uint32_t)(0x12103d74), (0x12103db0u));
  /* 120f17b9 mov dword ptr [0x12103d88], 0x12103c98 */
  w32((uint32_t)(0x12103d88), (0x12103c98u));
  /* 120f17c3 mov dword ptr [0x12103d8c], 0x12103da8 */
  w32((uint32_t)(0x12103d8c), (0x12103da8u));
  /* 120f17cd call 0x120f2140 */
  push32(0x120f17d2u); f_120f2140();
  /* 120f17d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f17d5 mov ecx, 0x12103d58 */
  ECX = (0x12103d58u);
  /* 120f17da push eax */
  push32((uint32_t)(EAX));
  /* 120f17db call 0x120f2070 */
  push32(0x120f17e0u); f_120f2070();
  /* 120f17e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f17e2 push 7 */
  push32((uint32_t)(0x7u));
  /* 120f17e4 push 0x12103af2 */
  push32((uint32_t)(0x12103af2u));
  /* 120f17e9 call 0x120f2140 */
  push32(0x120f17eeu); f_120f2140();
  /* 120f17ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f17f1 mov ecx, 0x12103d70 */
  ECX = (0x12103d70u);
  /* 120f17f6 push eax */
  push32((uint32_t)(EAX));
  /* 120f17f7 call 0x120f2070 */
  push32(0x120f17fcu); f_120f2070();
  /* 120f17fc push 0 */
  push32((uint32_t)(0x0u));
  /* 120f17fe push 7 */
  push32((uint32_t)(0x7u));
  /* 120f1800 push 0x12103b8c */
  push32((uint32_t)(0x12103b8cu));
  /* 120f1805 call 0x120f2140 */
  push32(0x120f180au); f_120f2140();
  /* 120f180a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f180d mov ecx, 0x12103d88 */
  ECX = (0x12103d88u);
  /* 120f1812 push eax */
  push32((uint32_t)(EAX));
  /* 120f1813 call 0x120f2070 */
  push32(0x120f1818u); f_120f2070();
  /* 120f1818 mov eax, dword ptr [0x12103e64] */
  EAX = (r32((uint32_t)(0x12103e64)));
  /* 120f181d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f181f jne 0x120f1864 */
  if (!C.zf) goto L_120f1864;
  /* 120f1821 mov esi, 0x12103a58 */
  ESI = (0x12103a58u);
L_120f1826:;
  /* 120f1826 cmp esi, 0x12103b4a */
  { uint32_t _a=(ESI),_b=(0x12103b4au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f182c jge 0x120f1864 */
  if ((C.sf==C.of)) goto L_120f1864;
  /* 120f182e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1830 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1832 push 0x12103cc0 */
  push32((uint32_t)(0x12103cc0u));
  /* 120f1837 push esi */
  push32((uint32_t)(ESI));
  /* 120f1838 call 0x120f2cd0 */
  push32(0x120f183du); f_120f2cd0();
  /* 120f183d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1840 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1842 jne 0x120f1858 */
  if (!C.zf) goto L_120f1858;
  /* 120f1844 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1846 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1848 push 0x12103c40 */
  push32((uint32_t)(0x12103c40u));
  /* 120f184d push 3 */
  push32((uint32_t)(0x3u));
  /* 120f184f push esi */
  push32((uint32_t)(ESI));
  /* 120f1850 call 0x120f21a0 */
  push32(0x120f1855u); f_120f21a0();
  /* 120f1855 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1858:;
  /* 120f1858 mov eax, dword ptr [0x12103e64] */
  EAX = (r32((uint32_t)(0x12103e64)));
  /* 120f185d add esi, 0x16 */
  { uint32_t _a=(ESI),_b=(0x16u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1862 je 0x120f1826 */
  if (C.zf) goto L_120f1826;
L_120f1864:;
  /* 120f1864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1867 jne 0x120f18ad */
  if (!C.zf) goto L_120f18ad;
  /* 120f1869 mov esi, 0x12103b4a */
  ESI = (0x12103b4au);
L_120f186e:;
  /* 120f186e cmp esi, 0x12103c26 */
  { uint32_t _a=(ESI),_b=(0x12103c26u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1874 jge 0x120f18ad */
  if ((C.sf==C.of)) goto L_120f18ad;
  /* 120f1876 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1878 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f187a push 0x12103cc0 */
  push32((uint32_t)(0x12103cc0u));
  /* 120f187f push esi */
  push32((uint32_t)(ESI));
  /* 120f1880 call 0x120f2cd0 */
  push32(0x120f1885u); f_120f2cd0();
  /* 120f1885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1888 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f188a jne 0x120f18a0 */
  if (!C.zf) goto L_120f18a0;
  /* 120f188c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f188e push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1890 push 0x12103c40 */
  push32((uint32_t)(0x12103c40u));
  /* 120f1895 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1897 push esi */
  push32((uint32_t)(ESI));
  /* 120f1898 call 0x120f21a0 */
  push32(0x120f189du); f_120f21a0();
  /* 120f189d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f18a0:;
  /* 120f18a0 mov eax, dword ptr [0x12103e64] */
  EAX = (r32((uint32_t)(0x12103e64)));
  /* 120f18a5 add esi, 0x16 */
  { uint32_t _a=(ESI),_b=(0x16u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f18a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f18ab je 0x120f186e */
  if (C.zf) goto L_120f186e;
L_120f18ad:;
  /* 120f18ad cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f18b0 jne 0x120f1a5e */
  if (!C.zf) goto L_120f1a5e;
  /* 120f18b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f18b8 call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f18beu);
  /* 120f18be push 0 */
  push32((uint32_t)(0x0u));
  /* 120f18c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f18c2 push 0x12103e48 */
  push32((uint32_t)(0x12103e48u));
  /* 120f18c7 call dword ptr [0x120fd16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd16c))), 0x120f18cdu);
  /* 120f18cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120f18cf push 0x12103d18 */
  push32((uint32_t)(0x12103d18u));
  /* 120f18d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f18d6 call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f18dcu);
  /* 120f18dc push 0x12103d18 */
  push32((uint32_t)(0x12103d18u));
  /* 120f18e1 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f18e7u);
  /* 120f18e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f18ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f18ec je 0x120f1a5e */
  if (C.zf) goto L_120f1a5e;
  /* 120f18f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f18f4 call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f18fau);
  /* 120f18fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f18fd mov esi, 0x12103a10 */
  ESI = (0x12103a10u);
L_120f1902:;
  /* 120f1902 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1904 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1906 push esi */
  push32((uint32_t)(ESI));
  /* 120f1907 call dword ptr [0x120fd16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd16c))), 0x120f190du);
  /* 120f190d add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1910 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1913 cmp esi, 0x12103a58 */
  { uint32_t _a=(ESI),_b=(0x12103a58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1919 jl 0x120f1902 */
  if ((C.sf!=C.of)) goto L_120f1902;
  /* 120f191b push 0 */
  push32((uint32_t)(0x0u));
  /* 120f191d push 0x121039d0 */
  push32((uint32_t)(0x121039d0u));
  /* 120f1922 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1924 call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f192au);
  /* 120f192a push 0x121039d0 */
  push32((uint32_t)(0x121039d0u));
  /* 120f192f call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1935u);
  /* 120f1935 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f193a je 0x120f1a5e */
  if (C.zf) goto L_120f1a5e;
  /* 120f1940 push 0x121039d0 */
  push32((uint32_t)(0x121039d0u));
  /* 120f1945 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120f194c call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1952u);
  /* 120f1952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1957 jle 0x120f1a5e */
  if ((C.zf||C.sf!=C.of)) goto L_120f1a5e;
L_120f195d:;
  /* 120f195d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f1960 lea edx, [ebp - 0x3c] */
  EDX = ((uint32_t)(EBP + -0x3c));
  /* 120f1963 push edx */
  push32((uint32_t)(EDX));
  /* 120f1964 push eax */
  push32((uint32_t)(EAX));
  /* 120f1965 push 0x121039d0 */
  push32((uint32_t)(0x121039d0u));
  /* 120f196a call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f1970u);
  /* 120f1970 push 0x12103d18 */
  push32((uint32_t)(0x12103d18u));
  /* 120f1975 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f1977 mov byte ptr [ebp - 1], 0 */
  w8((uint32_t)(EBP + -0x1), (0x0u));
  /* 120f197b call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1981u);
  /* 120f1981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1986 jle 0x120f1a3b */
  if ((C.zf||C.sf!=C.of)) goto L_120f1a3b;
L_120f198c:;
  /* 120f198c mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 120f198f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1991 jne 0x120f1a3b */
  if (!C.zf) goto L_120f1a3b;
  /* 120f1997 lea ecx, [ebp - 0x68] */
  ECX = ((uint32_t)(EBP + -0x68));
  /* 120f199a push ecx */
  push32((uint32_t)(ECX));
  /* 120f199b push esi */
  push32((uint32_t)(ESI));
  /* 120f199c push 0x12103d18 */
  push32((uint32_t)(0x12103d18u));
  /* 120f19a1 call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f19a7u);
  /* 120f19a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120f19aa mov ebx, dword ptr [ebp - 0x24] */
  EBX = (r32((uint32_t)(EBP + -0x24)));
  /* 120f19ad mov eax, dword ptr [ebp - 0x54] */
  EAX = (r32((uint32_t)(EBP + -0x54)));
  /* 120f19b0 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f19b2 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120f19b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f19b8 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f19ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f19bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120f19c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f19c3 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f19c6 jge 0x120f19ca */
  if ((C.sf==C.of)) goto L_120f19ca;
  /* 120f19c8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f19ca:;
  /* 120f19ca mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f19cd cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f19d0 jge 0x120f19d4 */
  if ((C.sf==C.of)) goto L_120f19d4;
  /* 120f19d2 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f19d4:;
  /* 120f19d4 mov ecx, eax */
  ECX = (EAX);
  /* 120f19d6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f19d8 ja 0x120f19dc */
  if ((!C.cf&&!C.zf)) goto L_120f19dc;
  /* 120f19da mov ecx, ebx */
  ECX = (EBX);
L_120f19dc:;
  /* 120f19dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f19de add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f19e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f19e2 mov eax, ecx */
  EAX = (ECX);
  /* 120f19e4 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f19e9 jge 0x120f1a24 */
  if ((C.sf==C.of)) goto L_120f1a24;
  /* 120f19eb mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120f19ee mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 120f19f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120f19f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f19fd add ecx, 0x32 */
  { uint32_t _a=(ECX),_b=(0x32u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a00 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1a02 jle 0x120f1a0e */
  if ((C.zf||C.sf!=C.of)) goto L_120f1a0e;
  /* 120f1a04 mov ax, word ptr [ebp - 0x36] */
  AX = (r16((uint32_t)(EBP + -0x36)));
  /* 120f1a08 mov word ptr [ebp - 0x38], ax */
  w16((uint32_t)(EBP + -0x38), (AX));
  /* 120f1a0c jmp 0x120f1a13 */
  goto L_120f1a13;
L_120f1a0e:;
  /* 120f1a0e add word ptr [ebp - 0x38], 0x32 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x38))),_b=(0x32u),_r=_a+_b; w16((uint32_t)(EBP + -0x38), (_r)); fl_add(_a,_b,_r,16); }
L_120f1a13:;
  /* 120f1a13 lea ecx, [ebp - 0x3c] */
  ECX = ((uint32_t)(EBP + -0x3c));
  /* 120f1a16 push ecx */
  push32((uint32_t)(ECX));
  /* 120f1a17 call dword ptr [0x120fd178] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd178))), 0x120f1a1du);
  /* 120f1a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a20 mov byte ptr [ebp - 1], 1 */
  w8((uint32_t)(EBP + -0x1), (0x1u));
L_120f1a24:;
  /* 120f1a24 push 0x12103d18 */
  push32((uint32_t)(0x12103d18u));
  /* 120f1a29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f1a2a call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1a30u);
  /* 120f1a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a33 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1a35 jl 0x120f198c */
  if ((C.sf!=C.of)) goto L_120f198c;
L_120f1a3b:;
  /* 120f1a3b mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 120f1a3e push 0x121039d0 */
  push32((uint32_t)(0x121039d0u));
  /* 120f1a43 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f1a44 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 120f1a47 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1a4du);
  /* 120f1a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a50 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1a52 jl 0x120f195d */
  if ((C.sf!=C.of)) goto L_120f195d;
  /* 120f1a58 mov ebx, dword ptr [0x120fd12c] */
  EBX = (r32((uint32_t)(0x120fd12c)));
L_120f1a5e:;
  /* 120f1a5e push 0x12103a08 */
  push32((uint32_t)(0x12103a08u));
  /* 120f1a63 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1a69u);
  /* 120f1a69 mov esi, dword ptr [0x120fd17c] */
  ESI = (r32((uint32_t)(0x120fd17c)));
  /* 120f1a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1a74 je 0x120f1b59 */
  if (C.zf) goto L_120f1b59;
  /* 120f1a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1a7c call esi */
  call_ind((uint32_t)(ESI), 0x120f1a7eu);
  /* 120f1a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1a83 je 0x120f1b59 */
  if (C.zf) goto L_120f1b59;
  /* 120f1a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1a8b call esi */
  call_ind((uint32_t)(ESI), 0x120f1a8du);
  /* 120f1a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1a90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1a92 je 0x120f1ab8 */
  if (C.zf) goto L_120f1ab8;
  /* 120f1a94 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1a96 push 0x12103cd0 */
  push32((uint32_t)(0x12103cd0u));
  /* 120f1a9b call 0x120f30b0 */
  push32(0x120f1aa0u); f_120f30b0();
  /* 120f1aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1aa5 je 0x120f1ab8 */
  if (C.zf) goto L_120f1ab8;
  /* 120f1aa7 mov esi, dword ptr [0x120fd13c] */
  ESI = (r32((uint32_t)(0x120fd13c)));
  /* 120f1aad push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1ab1 call esi */
  call_ind((uint32_t)(ESI), 0x120f1ab3u);
  /* 120f1ab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1ab6 jmp 0x120f1abe */
  goto L_120f1abe;
L_120f1ab8:;
  /* 120f1ab8 mov esi, dword ptr [0x120fd13c] */
  ESI = (r32((uint32_t)(0x120fd13c)));
L_120f1abe:;
  /* 120f1abe push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1ac0 call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1ac6u);
  /* 120f1ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1ac9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1acb je 0x120f1b5f */
  if (C.zf) goto L_120f1b5f;
  /* 120f1ad1 push 0x12103a08 */
  push32((uint32_t)(0x12103a08u));
  /* 120f1ad6 call dword ptr [0x120fd174] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd174))), 0x120f1adcu);
  /* 120f1adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1adf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1ae1 je 0x120f1b13 */
  if (C.zf) goto L_120f1b13;
  /* 120f1ae3 push 0x12103db8 */
  push32((uint32_t)(0x12103db8u));
  /* 120f1ae8 call 0x120f446d */
  push32(0x120f1aedu); f_120f446d();
  /* 120f1aed and eax, 0x80000003 */
  { uint32_t _r=(EAX)&(0x80000003u); EAX = (_r); fl_logic(_r,32); }
  /* 120f1af2 jns 0x120f1af9 */
  if (!C.sf) goto L_120f1af9;
  /* 120f1af4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f1af5 or eax, 0xfffffffc */
  { uint32_t _r=(EAX)|(0xfffffffcu); EAX = (_r); fl_logic(_r,32); }
  /* 120f1af8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120f1af9:;
  /* 120f1af9 push eax */
  push32((uint32_t)(EAX));
  /* 120f1afa mov ecx, 0x121039d8 */
  ECX = (0x121039d8u);
  /* 120f1aff call 0x120f32b0 */
  push32(0x120f1b04u); f_120f32b0();
  /* 120f1b04 push eax */
  push32((uint32_t)(EAX));
  /* 120f1b05 push 0x12103a08 */
  push32((uint32_t)(0x12103a08u));
  /* 120f1b0a call dword ptr [0x120fd184] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd184))), 0x120f1b10u);
  /* 120f1b10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1b13:;
  /* 120f1b13 push 0x12103db8 */
  push32((uint32_t)(0x12103db8u));
  /* 120f1b18 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1b1eu);
  /* 120f1b1e mov ecx, dword ptr [0x12103e74] */
  ECX = (r32((uint32_t)(0x12103e74)));
  /* 120f1b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1b27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1b29 jl 0x120f1b5f */
  if ((C.sf!=C.of)) goto L_120f1b5f;
  /* 120f1b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1b2d push 0x12103cd0 */
  push32((uint32_t)(0x12103cd0u));
  /* 120f1b32 call 0x120f30b0 */
  push32(0x120f1b37u); f_120f30b0();
  /* 120f1b37 push eax */
  push32((uint32_t)(EAX));
  /* 120f1b38 push 0x12103db8 */
  push32((uint32_t)(0x12103db8u));
  /* 120f1b3d call dword ptr [0x120fd188] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd188))), 0x120f1b43u);
  /* 120f1b43 mov edx, dword ptr [0x120ff04c] */
  EDX = (r32((uint32_t)(0x120ff04c)));
  /* 120f1b49 push edx */
  push32((uint32_t)(EDX));
  /* 120f1b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1b4c call ebx */
  call_ind((uint32_t)(EBX), 0x120f1b4eu);
  /* 120f1b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1b50 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1b52 call esi */
  call_ind((uint32_t)(ESI), 0x120f1b54u);
  /* 120f1b54 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1b57 jmp 0x120f1b5f */
  goto L_120f1b5f;
L_120f1b59:;
  /* 120f1b59 mov esi, dword ptr [0x120fd13c] */
  ESI = (r32((uint32_t)(0x120fd13c)));
L_120f1b5f:;
  /* 120f1b5f push 0x12103c88 */
  push32((uint32_t)(0x12103c88u));
  /* 120f1b64 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1b6au);
  /* 120f1b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1b6f je 0x120f1c2f */
  if (C.zf) goto L_120f1c2f;
  /* 120f1b75 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1b77 call dword ptr [0x120fd17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd17c))), 0x120f1b7du);
  /* 120f1b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1b80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1b82 je 0x120f1c2f */
  if (C.zf) goto L_120f1c2f;
  /* 120f1b88 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1b8a call dword ptr [0x120fd17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd17c))), 0x120f1b90u);
  /* 120f1b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1b93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1b95 je 0x120f1bb3 */
  if (C.zf) goto L_120f1bb3;
  /* 120f1b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1b99 push 0x12103ce0 */
  push32((uint32_t)(0x12103ce0u));
  /* 120f1b9e call 0x120f30b0 */
  push32(0x120f1ba3u); f_120f30b0();
  /* 120f1ba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1ba8 je 0x120f1bb3 */
  if (C.zf) goto L_120f1bb3;
  /* 120f1baa push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1bac push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1bae call esi */
  call_ind((uint32_t)(ESI), 0x120f1bb0u);
  /* 120f1bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1bb3:;
  /* 120f1bb3 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1bb5 call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1bbbu);
  /* 120f1bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1bbe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1bc0 je 0x120f1c2f */
  if (C.zf) goto L_120f1c2f;
  /* 120f1bc2 push 0x12103c88 */
  push32((uint32_t)(0x12103c88u));
  /* 120f1bc7 call dword ptr [0x120fd174] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd174))), 0x120f1bcdu);
  /* 120f1bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1bd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1bd2 je 0x120f1bec */
  if (C.zf) goto L_120f1bec;
  /* 120f1bd4 push 0x12103c38 */
  push32((uint32_t)(0x12103c38u));
  /* 120f1bd9 push 0x12103d50 */
  push32((uint32_t)(0x12103d50u));
  /* 120f1bde push 0x12103c88 */
  push32((uint32_t)(0x12103c88u));
  /* 120f1be3 call dword ptr [0x120fd184] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd184))), 0x120f1be9u);
  /* 120f1be9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1bec:;
  /* 120f1bec push 0x12103c38 */
  push32((uint32_t)(0x12103c38u));
  /* 120f1bf1 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1bf7u);
  /* 120f1bf7 mov ecx, dword ptr [0x12103e74] */
  ECX = (r32((uint32_t)(0x12103e74)));
  /* 120f1bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1c00 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1c02 jl 0x120f1c2f */
  if ((C.sf!=C.of)) goto L_120f1c2f;
  /* 120f1c04 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1c06 push 0x12103ce0 */
  push32((uint32_t)(0x12103ce0u));
  /* 120f1c0b call 0x120f30b0 */
  push32(0x120f1c10u); f_120f30b0();
  /* 120f1c10 push eax */
  push32((uint32_t)(EAX));
  /* 120f1c11 push 0x12103c38 */
  push32((uint32_t)(0x12103c38u));
  /* 120f1c16 call dword ptr [0x120fd188] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd188))), 0x120f1c1cu);
  /* 120f1c1c mov eax, dword ptr [0x120ff04c] */
  EAX = (r32((uint32_t)(0x120ff04c)));
  /* 120f1c21 push eax */
  push32((uint32_t)(EAX));
  /* 120f1c22 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1c24 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1c26u);
  /* 120f1c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1c28 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1c2a call esi */
  call_ind((uint32_t)(ESI), 0x120f1c2cu);
  /* 120f1c2c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1c2f:;
  /* 120f1c2f push 0x12103c80 */
  push32((uint32_t)(0x12103c80u));
  /* 120f1c34 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1c3au);
  /* 120f1c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1c3f je 0x120f1d00 */
  if (C.zf) goto L_120f1d00;
  /* 120f1c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1c47 call dword ptr [0x120fd17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd17c))), 0x120f1c4du);
  /* 120f1c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1c50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1c52 je 0x120f1d00 */
  if (C.zf) goto L_120f1d00;
  /* 120f1c58 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1c5a call dword ptr [0x120fd17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd17c))), 0x120f1c60u);
  /* 120f1c60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1c63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1c65 je 0x120f1c83 */
  if (C.zf) goto L_120f1c83;
  /* 120f1c67 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1c69 push 0x12103cf0 */
  push32((uint32_t)(0x12103cf0u));
  /* 120f1c6e call 0x120f30b0 */
  push32(0x120f1c73u); f_120f30b0();
  /* 120f1c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1c76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1c78 je 0x120f1c83 */
  if (C.zf) goto L_120f1c83;
  /* 120f1c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1c7c push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1c7e call esi */
  call_ind((uint32_t)(ESI), 0x120f1c80u);
  /* 120f1c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1c83:;
  /* 120f1c83 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1c85 call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1c8bu);
  /* 120f1c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1c8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1c90 je 0x120f1d00 */
  if (C.zf) goto L_120f1d00;
  /* 120f1c92 push 0x12103c80 */
  push32((uint32_t)(0x12103c80u));
  /* 120f1c97 call dword ptr [0x120fd174] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd174))), 0x120f1c9du);
  /* 120f1c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1ca0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1ca2 je 0x120f1cbc */
  if (C.zf) goto L_120f1cbc;
  /* 120f1ca4 push 0x12103c30 */
  push32((uint32_t)(0x12103c30u));
  /* 120f1ca9 push 0x12103d50 */
  push32((uint32_t)(0x12103d50u));
  /* 120f1cae push 0x12103c80 */
  push32((uint32_t)(0x12103c80u));
  /* 120f1cb3 call dword ptr [0x120fd184] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd184))), 0x120f1cb9u);
  /* 120f1cb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1cbc:;
  /* 120f1cbc push 0x12103c30 */
  push32((uint32_t)(0x12103c30u));
  /* 120f1cc1 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f1cc7u);
  /* 120f1cc7 mov ecx, dword ptr [0x12103e74] */
  ECX = (r32((uint32_t)(0x12103e74)));
  /* 120f1ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1cd0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1cd2 jl 0x120f1d00 */
  if ((C.sf!=C.of)) goto L_120f1d00;
  /* 120f1cd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f1cd6 push 0x12103cf0 */
  push32((uint32_t)(0x12103cf0u));
  /* 120f1cdb call 0x120f30b0 */
  push32(0x120f1ce0u); f_120f30b0();
  /* 120f1ce0 push eax */
  push32((uint32_t)(EAX));
  /* 120f1ce1 push 0x12103c30 */
  push32((uint32_t)(0x12103c30u));
  /* 120f1ce6 call dword ptr [0x120fd188] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd188))), 0x120f1cecu);
  /* 120f1cec mov ecx, dword ptr [0x120ff04c] */
  ECX = (r32((uint32_t)(0x120ff04c)));
  /* 120f1cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 120f1cf3 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1cf5 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1cf7u);
  /* 120f1cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1cf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f1cfb call esi */
  call_ind((uint32_t)(ESI), 0x120f1cfdu);
  /* 120f1cfd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1d00:;
  /* 120f1d00 cmp dword ptr [0x12103e64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12103e64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1d07 jne 0x120f1d48 */
  if (!C.zf) goto L_120f1d48;
  /* 120f1d09 mov ebx, 0x12103cd0 */
  EBX = (0x12103cd0u);
L_120f1d0e:;
  /* 120f1d0e cmp ebx, 0x12103d00 */
  { uint32_t _a=(EBX),_b=(0x12103d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1d14 jge 0x120f1d48 */
  if ((C.sf==C.of)) goto L_120f1d48;
  /* 120f1d16 push 0x12103d28 */
  push32((uint32_t)(0x12103d28u));
  /* 120f1d1b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 120f1d1d push 0x12103dc0 */
  push32((uint32_t)(0x12103dc0u));
  /* 120f1d22 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1d24 push 0x120ff040 */
  push32((uint32_t)(0x120ff040u));
  /* 120f1d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1d2b push 0x12103cc0 */
  push32((uint32_t)(0x12103cc0u));
  /* 120f1d30 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1d32 push ebx */
  push32((uint32_t)(EBX));
  /* 120f1d33 call 0x120f2960 */
  push32(0x120f1d38u); f_120f2960();
  /* 120f1d38 mov eax, dword ptr [0x12103e64] */
  EAX = (r32((uint32_t)(0x12103e64)));
  /* 120f1d3d add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1d40 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1d43 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1d46 je 0x120f1d0e */
  if (C.zf) goto L_120f1d0e;
L_120f1d48:;
  /* 120f1d48 push 5 */
  push32((uint32_t)(0x5u));
  /* 120f1d4a call dword ptr [0x120fd180] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd180))), 0x120f1d50u);
  /* 120f1d50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1d53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1d55 je 0x120f1d65 */
  if (C.zf) goto L_120f1d65;
  /* 120f1d57 push 0x120ff238 */
  push32((uint32_t)(0x120ff238u));
  /* 120f1d5c call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f1d62u);
  /* 120f1d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1d65:;
  /* 120f1d65 cmp dword ptr [0x12103e70], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12103e70))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1d6c jl 0x120f1d91 */
  if ((C.sf!=C.of)) goto L_120f1d91;
  /* 120f1d6e push 5 */
  push32((uint32_t)(0x5u));
  /* 120f1d70 call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1d76u);
  /* 120f1d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1d79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1d7b je 0x120f1d91 */
  if (C.zf) goto L_120f1d91;
  /* 120f1d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1d7f push 5 */
  push32((uint32_t)(0x5u));
  /* 120f1d81 call esi */
  call_ind((uint32_t)(ESI), 0x120f1d83u);
  /* 120f1d83 push 0x120ff22c */
  push32((uint32_t)(0x120ff22cu));
  /* 120f1d88 call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f1d8eu);
  /* 120f1d8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1d91:;
  /* 120f1d91 cmp dword ptr [0x12103e70], 8 */
  { uint32_t _a=(r32((uint32_t)(0x12103e70))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1d98 jl 0x120f1dee */
  if ((C.sf!=C.of)) goto L_120f1dee;
  /* 120f1d9a push 6 */
  push32((uint32_t)(0x6u));
  /* 120f1d9c call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1da2u);
  /* 120f1da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1da5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1da7 je 0x120f1dee */
  if (C.zf) goto L_120f1dee;
  /* 120f1da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1dab push 6 */
  push32((uint32_t)(0x6u));
  /* 120f1dad call esi */
  call_ind((uint32_t)(ESI), 0x120f1dafu);
  /* 120f1daf mov edx, dword ptr [0x12103e68] */
  EDX = (r32((uint32_t)(0x12103e68)));
  /* 120f1db5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1db8 push edx */
  push32((uint32_t)(EDX));
  /* 120f1db9 push 0x120ff220 */
  push32((uint32_t)(0x120ff220u));
  /* 120f1dbe call dword ptr [0x120fd190] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd190))), 0x120f1dc4u);
  /* 120f1dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1dc6 call edi */
  call_ind((uint32_t)(EDI), 0x120f1dc8u);
  /* 120f1dc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1dcb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1dce ja 0x120f1dee */
  if ((!C.cf&&!C.zf)) goto L_120f1dee;
  /* 120f1dd0 jmp dword ptr [eax*4 + 0x120f205c] */
  switch (EAX) {
    case 0: goto L_120f1dd7;
    case 1: goto L_120f1ddb;
    case 2: goto L_120f1ddf;
    case 3: goto L_120f1de3;
    default: x86_unimpl("switch@0x120f1dd0 out of table"); return;
  }
L_120f1dd7:;
  /* 120f1dd7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 120f1dd9 jmp 0x120f1de5 */
  goto L_120f1de5;
L_120f1ddb:;
  /* 120f1ddb push 0x46 */
  push32((uint32_t)(0x46u));
  /* 120f1ddd jmp 0x120f1de5 */
  goto L_120f1de5;
L_120f1ddf:;
  /* 120f1ddf push 0x47 */
  push32((uint32_t)(0x47u));
  /* 120f1de1 jmp 0x120f1de5 */
  goto L_120f1de5;
L_120f1de3:;
  /* 120f1de3 push 0x48 */
  push32((uint32_t)(0x48u));
L_120f1de5:;
  /* 120f1de5 call dword ptr [0x120fd144] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd144))), 0x120f1debu);
  /* 120f1deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1dee:;
  /* 120f1dee push 7 */
  push32((uint32_t)(0x7u));
  /* 120f1df0 call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1df6u);
  /* 120f1df6 mov ebx, dword ptr [0x120fd194] */
  EBX = (r32((uint32_t)(0x120fd194)));
  /* 120f1dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1dff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1e01 je 0x120f1e62 */
  if (C.zf) goto L_120f1e62;
  /* 120f1e03 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1e05 push 0x12103c28 */
  push32((uint32_t)(0x12103c28u));
  /* 120f1e0a call dword ptr [0x120fd18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd18c))), 0x120f1e10u);
  /* 120f1e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1e15 jne 0x120f1e2d */
  if (!C.zf) goto L_120f1e2d;
  /* 120f1e17 mov edi, dword ptr [0x120fd170] */
  EDI = (r32((uint32_t)(0x120fd170)));
  /* 120f1e1d push 0x12103cb8 */
  push32((uint32_t)(0x12103cb8u));
  /* 120f1e22 call edi */
  call_ind((uint32_t)(EDI), 0x120f1e24u);
  /* 120f1e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1e29 je 0x120f1e68 */
  if (C.zf) goto L_120f1e68;
  /* 120f1e2b jmp 0x120f1e33 */
  goto L_120f1e33;
L_120f1e2d:;
  /* 120f1e2d mov edi, dword ptr [0x120fd170] */
  EDI = (r32((uint32_t)(0x120fd170)));
L_120f1e33:;
  /* 120f1e33 push 0x12103ca8 */
  push32((uint32_t)(0x12103ca8u));
  /* 120f1e38 call edi */
  call_ind((uint32_t)(EDI), 0x120f1e3au);
  /* 120f1e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1e3f jne 0x120f1e68 */
  if (!C.zf) goto L_120f1e68;
  /* 120f1e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1e43 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1e45u);
  /* 120f1e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1e4a je 0x120f1e68 */
  if (C.zf) goto L_120f1e68;
  /* 120f1e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1e4e push 7 */
  push32((uint32_t)(0x7u));
  /* 120f1e50 call esi */
  call_ind((uint32_t)(ESI), 0x120f1e52u);
  /* 120f1e52 push 0x120ff214 */
  push32((uint32_t)(0x120ff214u));
  /* 120f1e57 call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f1e5du);
  /* 120f1e5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e60 jmp 0x120f1e68 */
  goto L_120f1e68;
L_120f1e62:;
  /* 120f1e62 mov edi, dword ptr [0x120fd170] */
  EDI = (r32((uint32_t)(0x120fd170)));
L_120f1e68:;
  /* 120f1e68 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1e6a call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1e70u);
  /* 120f1e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1e75 je 0x120f1ea4 */
  if (C.zf) goto L_120f1ea4;
  /* 120f1e77 push 0x12103ca8 */
  push32((uint32_t)(0x12103ca8u));
  /* 120f1e7c call edi */
  call_ind((uint32_t)(EDI), 0x120f1e7eu);
  /* 120f1e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1e83 jne 0x120f1ea4 */
  if (!C.zf) goto L_120f1ea4;
  /* 120f1e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1e87 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1e89u);
  /* 120f1e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1e8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1e8e jne 0x120f1ea4 */
  if (!C.zf) goto L_120f1ea4;
  /* 120f1e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1e92 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f1e94 call esi */
  call_ind((uint32_t)(ESI), 0x120f1e96u);
  /* 120f1e96 push 0x120ff208 */
  push32((uint32_t)(0x120ff208u));
  /* 120f1e9b call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f1ea1u);
  /* 120f1ea1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1ea4:;
  /* 120f1ea4 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f1ea6 call dword ptr [0x120fd134] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd134))), 0x120f1eacu);
  /* 120f1eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1eaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1eb1 je 0x120f1ee0 */
  if (C.zf) goto L_120f1ee0;
  /* 120f1eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1eb5 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1eb7u);
  /* 120f1eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1eba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1ebc je 0x120f1ee0 */
  if (C.zf) goto L_120f1ee0;
  /* 120f1ebe push 0x12103ca8 */
  push32((uint32_t)(0x12103ca8u));
  /* 120f1ec3 call edi */
  call_ind((uint32_t)(EDI), 0x120f1ec5u);
  /* 120f1ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1eca je 0x120f1ee0 */
  if (C.zf) goto L_120f1ee0;
  /* 120f1ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1ece push 9 */
  push32((uint32_t)(0x9u));
  /* 120f1ed0 call esi */
  call_ind((uint32_t)(ESI), 0x120f1ed2u);
  /* 120f1ed2 push 0x120ff1fc */
  push32((uint32_t)(0x120ff1fcu));
  /* 120f1ed7 call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f1eddu);
  /* 120f1edd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1ee0:;
  /* 120f1ee0 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f1ee5 call edi */
  call_ind((uint32_t)(EDI), 0x120f1ee7u);
  /* 120f1ee7 mov ecx, dword ptr [0x12103e6c] */
  ECX = (r32((uint32_t)(0x12103e6c)));
  /* 120f1eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1ef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1ef2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f1ef4 jle 0x120f1f14 */
  if ((C.zf||C.sf!=C.of)) goto L_120f1f14;
  /* 120f1ef6 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f1efb call edi */
  call_ind((uint32_t)(EDI), 0x120f1efdu);
  /* 120f1efd mov edx, dword ptr [0x12103e6c] */
  EDX = (r32((uint32_t)(0x12103e6c)));
  /* 120f1f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f06 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f1f08 mov eax, dword ptr [0x12103e70] */
  EAX = (r32((uint32_t)(0x12103e70)));
  /* 120f1f0d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f0f mov dword ptr [0x12103e70], eax */
  w32((uint32_t)(0x12103e70), (EAX));
L_120f1f14:;
  /* 120f1f14 mov esi, dword ptr [0x120fd15c] */
  ESI = (r32((uint32_t)(0x120fd15c)));
  /* 120f1f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1f1c call esi */
  call_ind((uint32_t)(ESI), 0x120f1f1eu);
  /* 120f1f1e mov ebx, dword ptr [0x120fd16c] */
  EBX = (r32((uint32_t)(0x120fd16c)));
  /* 120f1f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f27 mov edi, 0x12103a10 */
  EDI = (0x12103a10u);
L_120f1f2c:;
  /* 120f1f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1f30 push edi */
  push32((uint32_t)(EDI));
  /* 120f1f31 call ebx */
  call_ind((uint32_t)(EBX), 0x120f1f33u);
  /* 120f1f33 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f39 cmp edi, 0x12103a58 */
  { uint32_t _a=(EDI),_b=(0x12103a58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1f3f jl 0x120f1f2c */
  if ((C.sf!=C.of)) goto L_120f1f2c;
  /* 120f1f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1f43 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f1f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f1f4a call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f1f50u);
  /* 120f1f50 mov edi, dword ptr [0x120fd170] */
  EDI = (r32((uint32_t)(0x120fd170)));
  /* 120f1f56 push 0x12103e58 */
  push32((uint32_t)(0x12103e58u));
  /* 120f1f5b call edi */
  call_ind((uint32_t)(EDI), 0x120f1f5du);
  /* 120f1f5d mov ecx, dword ptr [0x12103e70] */
  ECX = (r32((uint32_t)(0x12103e70)));
  /* 120f1f63 mov dword ptr [0x12103e6c], eax */
  w32((uint32_t)(0x12103e6c), (EAX));
  /* 120f1f68 mov eax, dword ptr [0x120ff048] */
  EAX = (r32((uint32_t)(0x120ff048)));
  /* 120f1f6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f70 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1f72 jl 0x120f1f98 */
  if ((C.sf!=C.of)) goto L_120f1f98;
  /* 120f1f74 mov edx, dword ptr [0x12103e68] */
  EDX = (r32((uint32_t)(0x12103e68)));
  /* 120f1f7a add edx, -5 */
  { uint32_t _a=(EDX),_b=(0xfffffffbu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f7d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1f7f jge 0x120f1f98 */
  if ((C.sf==C.of)) goto L_120f1f98;
  /* 120f1f81 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1f84 push ecx */
  push32((uint32_t)(ECX));
  /* 120f1f85 push 0x120ff1f0 */
  push32((uint32_t)(0x120ff1f0u));
  /* 120f1f8a mov dword ptr [0x120ff048], eax */
  w32((uint32_t)(0x120ff048), (EAX));
  /* 120f1f8f call dword ptr [0x120fd190] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd190))), 0x120f1f95u);
  /* 120f1f95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f1f98:;
  /* 120f1f98 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f1f9a push 0x12103c28 */
  push32((uint32_t)(0x12103c28u));
  /* 120f1f9f call dword ptr [0x120fd18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd18c))), 0x120f1fa5u);
  /* 120f1fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1faa jne 0x120f1feb */
  if (!C.zf) goto L_120f1feb;
  /* 120f1fac push 0x12103cb8 */
  push32((uint32_t)(0x12103cb8u));
  /* 120f1fb1 call edi */
  call_ind((uint32_t)(EDI), 0x120f1fb3u);
  /* 120f1fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1fb8 jne 0x120f1feb */
  if (!C.zf) goto L_120f1feb;
  /* 120f1fba push 1 */
  push32((uint32_t)(0x1u));
  /* 120f1fbc call dword ptr [0x120fd194] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd194))), 0x120f1fc2u);
  /* 120f1fc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1fc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f1fc7 je 0x120f1feb */
  if (C.zf) goto L_120f1feb;
  /* 120f1fc9 push 0x12103ca8 */
  push32((uint32_t)(0x12103ca8u));
  /* 120f1fce call edi */
  call_ind((uint32_t)(EDI), 0x120f1fd0u);
  /* 120f1fd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f1fd5 jne 0x120f1feb */
  if (!C.zf) goto L_120f1feb;
  /* 120f1fd7 push 0x120ff1e4 */
  push32((uint32_t)(0x120ff1e4u));
  /* 120f1fdc call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f1fe2u);
  /* 120f1fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f1fe5 call dword ptr [0x120fd19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd19c))), 0x120f1febu);
L_120f1feb:;
  /* 120f1feb mov eax, dword ptr [0x12103e70] */
  EAX = (r32((uint32_t)(0x12103e70)));
  /* 120f1ff0 mov ecx, dword ptr [0x12103e68] */
  ECX = (r32((uint32_t)(0x12103e68)));
  /* 120f1ff6 mov edi, dword ptr [0x120fd1a0] */
  EDI = (r32((uint32_t)(0x120fd1a0)));
  /* 120f1ffc cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f1ffe jl 0x120f2011 */
  if ((C.sf!=C.of)) goto L_120f2011;
  /* 120f2000 push eax */
  push32((uint32_t)(EAX));
  /* 120f2001 push 0x120ff1d8 */
  push32((uint32_t)(0x120ff1d8u));
  /* 120f2006 call dword ptr [0x120fd190] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd190))), 0x120f200cu);
  /* 120f200c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f200f call edi */
  call_ind((uint32_t)(EDI), 0x120f2011u);
L_120f2011:;
  /* 120f2011 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2013 call dword ptr [0x120fd194] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd194))), 0x120f2019u);
  /* 120f2019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f201c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f201e je 0x120f2030 */
  if (C.zf) goto L_120f2030;
  /* 120f2020 push 0x120ff1cc */
  push32((uint32_t)(0x120ff1ccu));
  /* 120f2025 call dword ptr [0x120fd14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd14c))), 0x120f202bu);
  /* 120f202b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f202e call edi */
  call_ind((uint32_t)(EDI), 0x120f2030u);
L_120f2030:;
  /* 120f2030 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2032 call esi */
  call_ind((uint32_t)(ESI), 0x120f2034u);
  /* 120f2034 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2036 push 0x12103d08 */
  push32((uint32_t)(0x12103d08u));
  /* 120f203b call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2041u);
  /* 120f2041 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2044 pop edi */
  EDI = (pop32());
  /* 120f2045 pop esi */
  ESI = (pop32());
  /* 120f2046 pop ebx */
  EBX = (pop32());
  /* 120f2047 mov esp, ebp */
  ESP = (EBP);
  /* 120f2049 pop ebp */
  EBP = (pop32());
  /* 120f204a ret  */
  ESPCHK(0x120f1490u, _esp0);
  ESP += 4; return;
}

/* FUN_10002070 @ 0x120f2070 (206 bytes, 73 insns) */
void f_120f2070(void) {
  FTRACE(0x120f2070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2070 push esi */
  push32((uint32_t)(ESI));
  /* 120f2071 mov esi, ecx */
  ESI = (ECX);
  /* 120f2073 push edi */
  push32((uint32_t)(EDI));
  /* 120f2074 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f2076 push eax */
  push32((uint32_t)(EAX));
  /* 120f2077 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f207du);
  /* 120f207d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2082 je 0x120f2139 */
  if (C.zf) goto L_120f2139;
  /* 120f2088 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f208c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f208e je 0x120f2139 */
  if (C.zf) goto L_120f2139;
  /* 120f2094 mov cl, byte ptr [esi + 9] */
  CL = (r8((uint32_t)(ESI + 0x9)));
  /* 120f2097 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2098 call dword ptr [0x120fd17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd17c))), 0x120f209eu);
  /* 120f209e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f20a1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f20a3 je 0x120f2139 */
  if (C.zf) goto L_120f2139;
  /* 120f20a9 mov edx, dword ptr [esi + 0xd] */
  EDX = (r32((uint32_t)(ESI + 0xd)));
  /* 120f20ac mov al, byte ptr [esi + 9] */
  AL = (r8((uint32_t)(ESI + 0x9)));
  /* 120f20af push edx */
  push32((uint32_t)(EDX));
  /* 120f20b0 push eax */
  push32((uint32_t)(EAX));
  /* 120f20b1 call dword ptr [0x120fd12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd12c))), 0x120f20b7u);
  /* 120f20b7 mov al, byte ptr [esp + 0x18] */
  AL = (r8((uint32_t)(ESP + 0x18)));
  /* 120f20bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f20be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f20c0 je 0x120f20e3 */
  if (C.zf) goto L_120f20e3;
  /* 120f20c2 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f20c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f20c7 push ecx */
  push32((uint32_t)(ECX));
  /* 120f20c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f20ca push 0x12103e50 */
  push32((uint32_t)(0x12103e50u));
  /* 120f20cf push 0x12103d20 */
  push32((uint32_t)(0x12103d20u));
  /* 120f20d4 push edi */
  push32((uint32_t)(EDI));
  /* 120f20d5 call dword ptr [0x120fd130] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd130))), 0x120f20dbu);
  /* 120f20db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f20de pop edi */
  EDI = (pop32());
  /* 120f20df pop esi */
  ESI = (pop32());
  /* 120f20e0 ret 8 */
  ESPCHK(0x120f2070u, _esp0);
  ESP += 12; return;
L_120f20e3:;
  /* 120f20e3 call 0x120f446d */
  push32(0x120f20e8u); f_120f446d();
  /* 120f20e8 and eax, 0x80000001 */
  { uint32_t _r=(EAX)&(0x80000001u); EAX = (_r); fl_logic(_r,32); }
  /* 120f20ed jns 0x120f20f4 */
  if (!C.sf) goto L_120f20f4;
  /* 120f20ef dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f20f0 or eax, 0xfffffffe */
  { uint32_t _r=(EAX)|(0xfffffffeu); EAX = (_r); fl_logic(_r,32); }
  /* 120f20f3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120f20f4:;
  /* 120f20f4 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f20f7 je 0x120f211d */
  if (C.zf) goto L_120f211d;
  /* 120f20f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f20fa jne 0x120f2139 */
  if (!C.zf) goto L_120f2139;
  /* 120f20fc mov edx, dword ptr [esi + 4] */
  EDX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f20ff push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2101 push edx */
  push32((uint32_t)(EDX));
  /* 120f2102 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f2104 push 0x12103d00 */
  push32((uint32_t)(0x12103d00u));
  /* 120f2109 push 0x12103d20 */
  push32((uint32_t)(0x12103d20u));
  /* 120f210e push edi */
  push32((uint32_t)(EDI));
  /* 120f210f call dword ptr [0x120fd130] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd130))), 0x120f2115u);
  /* 120f2115 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2118 pop edi */
  EDI = (pop32());
  /* 120f2119 pop esi */
  ESI = (pop32());
  /* 120f211a ret 8 */
  ESPCHK(0x120f2070u, _esp0);
  ESP += 12; return;
L_120f211d:;
  /* 120f211d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f2120 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2122 push eax */
  push32((uint32_t)(EAX));
  /* 120f2123 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f2125 push 0x12103cc8 */
  push32((uint32_t)(0x12103cc8u));
  /* 120f212a push 0x12103d20 */
  push32((uint32_t)(0x12103d20u));
  /* 120f212f push edi */
  push32((uint32_t)(EDI));
  /* 120f2130 call dword ptr [0x120fd130] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd130))), 0x120f2136u);
  /* 120f2136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f2139:;
  /* 120f2139 pop edi */
  EDI = (pop32());
  /* 120f213a pop esi */
  ESI = (pop32());
  /* 120f213b ret 8 */
  ESPCHK(0x120f2070u, _esp0);
  ESP += 12; return;
}

/* FUN_10002140 @ 0x120f2140 (89 bytes, 38 insns) */
void f_120f2140(void) {
  FTRACE(0x120f2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2140 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2141 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2142 mov ebp, dword ptr [esp + 0x10] */
  EBP = (r32((uint32_t)(ESP + 0x10)));
  /* 120f2146 push esi */
  push32((uint32_t)(ESI));
  /* 120f2147 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f2149 push edi */
  push32((uint32_t)(EDI));
  /* 120f214a test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 120f214c jle 0x120f216a */
  if ((C.zf||C.sf!=C.of)) goto L_120f216a;
  /* 120f214e mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 120f2152 mov ebx, dword ptr [0x120fd170] */
  EBX = (r32((uint32_t)(0x120fd170)));
L_120f2158:;
  /* 120f2158 push edi */
  push32((uint32_t)(EDI));
  /* 120f2159 call ebx */
  call_ind((uint32_t)(EBX), 0x120f215bu);
  /* 120f215b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f215e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2160 je 0x120f2171 */
  if (C.zf) goto L_120f2171;
  /* 120f2162 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f2163 add edi, 0x16 */
  { uint32_t _a=(EDI),_b=(0x16u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2166 cmp esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2168 jl 0x120f2158 */
  if ((C.sf!=C.of)) goto L_120f2158;
L_120f216a:;
  /* 120f216a pop edi */
  EDI = (pop32());
  /* 120f216b pop esi */
  ESI = (pop32());
  /* 120f216c pop ebp */
  EBP = (pop32());
  /* 120f216d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f216f pop ebx */
  EBX = (pop32());
  /* 120f2170 ret  */
  ESPCHK(0x120f2140u, _esp0);
  ESP += 4; return;
L_120f2171:;
  /* 120f2171 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f2175 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 120f2178 pop edi */
  EDI = (pop32());
  /* 120f2179 lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 120f217c pop esi */
  ESI = (pop32());
  /* 120f217d pop ebp */
  EBP = (pop32());
  /* 120f217e pop ebx */
  EBX = (pop32());
  /* 120f217f lea eax, [edx + ecx*2] */
  EAX = ((uint32_t)(EDX + ECX*2));
  /* 120f2182 mov byte ptr [eax + 9], 0 */
  w8((uint32_t)(EAX + 0x9), (0x0u));
  /* 120f2186 mov dword ptr [eax + 0x12], 0xffff */
  w32((uint32_t)(EAX + 0x12), (0xffffu));
  /* 120f218d mov dword ptr [eax + 0xa], 0 */
  w32((uint32_t)(EAX + 0xa), (0x0u));
  /* 120f2194 mov byte ptr [eax + 8], 1 */
  w8((uint32_t)(EAX + 0x8), (0x1u));
  /* 120f2198 ret  */
  ESPCHK(0x120f2140u, _esp0);
  ESP += 4; return;
}

/* FUN_100021a0 @ 0x120f21a0 (527 bytes, 206 insns) */
void f_120f21a0(void) {
  FTRACE(0x120f21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f21a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120f21a1 mov ebp, esp */
  EBP = (ESP);
  /* 120f21a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f21a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120f21a7 push esi */
  push32((uint32_t)(ESI));
  /* 120f21a8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f21ab push edi */
  push32((uint32_t)(EDI));
  /* 120f21ac push esi */
  push32((uint32_t)(ESI));
  /* 120f21ad call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f21b3u);
  /* 120f21b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f21b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f21b8 je 0x120f23a8 */
  if (C.zf) goto L_120f23a8;
  /* 120f21be mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f21c1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f21c3 je 0x120f23a8 */
  if (C.zf) goto L_120f23a8;
  /* 120f21c9 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 120f21cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f21ce jle 0x120f23a8 */
  if ((C.zf||C.sf!=C.of)) goto L_120f23a8;
  /* 120f21d4 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 120f21d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f21d9 je 0x120f2339 */
  if (C.zf) goto L_120f2339;
  /* 120f21df lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120f21e2 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 120f21e5 push eax */
  push32((uint32_t)(EAX));
  /* 120f21e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120f21e7 push ebx */
  push32((uint32_t)(EBX));
  /* 120f21e8 call dword ptr [0x120fd124] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd124))), 0x120f21eeu);
  /* 120f21ee lea edx, [ebp - 0x40] */
  EDX = ((uint32_t)(EBP + -0x40));
  /* 120f21f1 push edx */
  push32((uint32_t)(EDX));
  /* 120f21f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f21f4 push esi */
  push32((uint32_t)(ESI));
  /* 120f21f5 call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f21fbu);
  /* 120f21fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f21fe mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f2201 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120f2204 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f2207 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2209 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f220b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f220e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120f2211 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f2214 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f2217 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f221a jge 0x120f221e */
  if ((C.sf==C.of)) goto L_120f221e;
  /* 120f221c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f221e:;
  /* 120f221e mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f2221 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2224 jge 0x120f2228 */
  if ((C.sf==C.of)) goto L_120f2228;
  /* 120f2226 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2228:;
  /* 120f2228 mov ecx, eax */
  ECX = (EAX);
  /* 120f222a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f222c ja 0x120f2230 */
  if ((!C.cf&&!C.zf)) goto L_120f2230;
  /* 120f222e mov ecx, ebx */
  ECX = (EBX);
L_120f2230:;
  /* 120f2230 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2232 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2234 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2236 mov eax, ecx */
  EAX = (ECX);
  /* 120f2238 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f223b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f223e mov edi, 1 */
  EDI = (0x1u);
  /* 120f2243 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120f224a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f224c jle 0x120f2304 */
  if ((C.zf||C.sf!=C.of)) goto L_120f2304;
  /* 120f2252 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f2255 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2258 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120f225b:;
  /* 120f225b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f225e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120f2261 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 120f2264 push eax */
  push32((uint32_t)(EAX));
  /* 120f2265 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2266 push edx */
  push32((uint32_t)(EDX));
  /* 120f2267 call dword ptr [0x120fd124] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd124))), 0x120f226du);
  /* 120f226d mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f2270 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f2273 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120f2276 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f2279 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f227b sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f227d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2280 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120f2283 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120f2286 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f2289 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f228c jge 0x120f2290 */
  if ((C.sf==C.of)) goto L_120f2290;
  /* 120f228e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f2290:;
  /* 120f2290 mov ebx, dword ptr [ebp - 0x10] */
  EBX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f2293 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2296 jge 0x120f229a */
  if ((C.sf==C.of)) goto L_120f229a;
  /* 120f2298 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f229a:;
  /* 120f229a mov ecx, eax */
  ECX = (EAX);
  /* 120f229c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f229e ja 0x120f22a2 */
  if ((!C.cf&&!C.zf)) goto L_120f22a2;
  /* 120f22a0 mov ecx, ebx */
  ECX = (EBX);
L_120f22a2:;
  /* 120f22a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f22a4 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f22a6 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f22a8 mov eax, ecx */
  EAX = (ECX);
  /* 120f22aa cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f22ad jge 0x120f22ef */
  if ((C.sf==C.of)) goto L_120f22ef;
  /* 120f22af mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f22b2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f22b5 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120f22b8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f22bb sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f22bd sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f22bf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120f22c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120f22c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f22c8 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f22cb jge 0x120f22cf */
  if ((C.sf==C.of)) goto L_120f22cf;
  /* 120f22cd neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f22cf:;
  /* 120f22cf mov ebx, dword ptr [ebp - 0x14] */
  EBX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f22d2 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f22d5 jge 0x120f22d9 */
  if ((C.sf==C.of)) goto L_120f22d9;
  /* 120f22d7 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f22d9:;
  /* 120f22d9 mov ecx, eax */
  ECX = (EAX);
  /* 120f22db cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f22dd ja 0x120f22e1 */
  if ((!C.cf&&!C.zf)) goto L_120f22e1;
  /* 120f22df mov ecx, ebx */
  ECX = (EBX);
L_120f22e1:;
  /* 120f22e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f22e3 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f22e5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f22e7 mov eax, ecx */
  EAX = (ECX);
  /* 120f22e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f22ec mov dword ptr [ebp - 0xc], edi */
  w32((uint32_t)(EBP + -0xc), (EDI));
L_120f22ef:;
  /* 120f22ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f22f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f22f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f22f6 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f22f9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f22fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120f22fe jl 0x120f225b */
  if ((C.sf!=C.of)) goto L_120f225b;
L_120f2304:;
  /* 120f2304 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f2307 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2309 push esi */
  push32((uint32_t)(ESI));
  /* 120f230a mov byte ptr [esi + 8], 0 */
  w8((uint32_t)(ESI + 0x8), (0x0u));
  /* 120f230e mov dword ptr [esi + 0xa], ecx */
  w32((uint32_t)(ESI + 0xa), (ECX));
  /* 120f2311 call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2317u);
  /* 120f2317 mov edx, dword ptr [esi + 0xa] */
  EDX = (r32((uint32_t)(ESI + 0xa)));
  /* 120f231a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f231d push 0 */
  push32((uint32_t)(0x0u));
  /* 120f231f push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2321 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 120f2324 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2327 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2328 push edx */
  push32((uint32_t)(EDX));
  /* 120f2329 call dword ptr [0x120fd128] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd128))), 0x120f232fu);
  /* 120f232f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2332 pop edi */
  EDI = (pop32());
  /* 120f2333 pop esi */
  ESI = (pop32());
  /* 120f2334 pop ebx */
  EBX = (pop32());
  /* 120f2335 mov esp, ebp */
  ESP = (EBP);
  /* 120f2337 pop ebp */
  EBP = (pop32());
  /* 120f2338 ret  */
  ESPCHK(0x120f21a0u, _esp0);
  ESP += 4; return;
L_120f2339:;
  /* 120f2339 mov eax, dword ptr [esi + 0xa] */
  EAX = (r32((uint32_t)(ESI + 0xa)));
  /* 120f233c push esi */
  push32((uint32_t)(ESI));
  /* 120f233d lea ecx, [ebx + eax*8] */
  ECX = ((uint32_t)(EBX + EAX*8));
  /* 120f2340 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2341 call dword ptr [0x120fd120] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd120))), 0x120f2347u);
  /* 120f2347 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f234a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f234c je 0x120f23a8 */
  if (C.zf) goto L_120f23a8;
  /* 120f234e mov al, byte ptr [ebp + 0x18] */
  AL = (r8((uint32_t)(EBP + 0x18)));
  /* 120f2351 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f2353 je 0x120f2361 */
  if (C.zf) goto L_120f2361;
  /* 120f2355 mov eax, dword ptr [esi + 0xa] */
  EAX = (r32((uint32_t)(ESI + 0xa)));
  /* 120f2358 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f2359 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f235a idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f235c mov dword ptr [esi + 0xa], edx */
  w32((uint32_t)(ESI + 0xa), (EDX));
  /* 120f235f jmp 0x120f2387 */
  goto L_120f2387;
L_120f2361:;
  /* 120f2361 mov ecx, dword ptr [esi + 0xa] */
  ECX = (r32((uint32_t)(ESI + 0xa)));
  /* 120f2364 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120f2365 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2367 jne 0x120f236d */
  if (!C.zf) goto L_120f236d;
  /* 120f2369 mov byte ptr [esi + 9], 0 */
  w8((uint32_t)(ESI + 0x9), (0x0u));
L_120f236d:;
  /* 120f236d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f236f jne 0x120f2375 */
  if (!C.zf) goto L_120f2375;
  /* 120f2371 mov byte ptr [esi + 9], 1 */
  w8((uint32_t)(ESI + 0x9), (0x1u));
L_120f2375:;
  /* 120f2375 mov al, byte ptr [esi + 9] */
  AL = (r8((uint32_t)(ESI + 0x9)));
  /* 120f2378 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f237a je 0x120f2384 */
  if (C.zf) goto L_120f2384;
  /* 120f237c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f237d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f237f mov dword ptr [esi + 0xa], ecx */
  w32((uint32_t)(ESI + 0xa), (ECX));
  /* 120f2382 jne 0x120f2387 */
  if (!C.zf) goto L_120f2387;
L_120f2384:;
  /* 120f2384 dec dword ptr [esi + 0xa] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xa)))-1; w32((uint32_t)(ESI + 0xa), (_r)); fl_dec(_r,32); }
L_120f2387:;
  /* 120f2387 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2389 push esi */
  push32((uint32_t)(ESI));
  /* 120f238a call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2390u);
  /* 120f2390 mov edx, dword ptr [esi + 0xa] */
  EDX = (r32((uint32_t)(ESI + 0xa)));
  /* 120f2393 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2396 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2398 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f239a lea eax, [ebx + edx*8] */
  EAX = ((uint32_t)(EBX + EDX*8));
  /* 120f239d push eax */
  push32((uint32_t)(EAX));
  /* 120f239e push ecx */
  push32((uint32_t)(ECX));
  /* 120f239f call dword ptr [0x120fd128] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd128))), 0x120f23a5u);
  /* 120f23a5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f23a8:;
  /* 120f23a8 pop edi */
  EDI = (pop32());
  /* 120f23a9 pop esi */
  ESI = (pop32());
  /* 120f23aa pop ebx */
  EBX = (pop32());
  /* 120f23ab mov esp, ebp */
  ESP = (EBP);
  /* 120f23ad pop ebp */
  EBP = (pop32());
  /* 120f23ae ret  */
  ESPCHK(0x120f21a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023b0 @ 0x120f23b0 (59 bytes, 29 insns) */
void f_120f23b0(void) {
  FTRACE(0x120f23b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f23b0 push esi */
  push32((uint32_t)(ESI));
  /* 120f23b1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f23b5 push edi */
  push32((uint32_t)(EDI));
  /* 120f23b6 mov edi, dword ptr [0x120fd170] */
  EDI = (r32((uint32_t)(0x120fd170)));
  /* 120f23bc push esi */
  push32((uint32_t)(ESI));
  /* 120f23bd call edi */
  call_ind((uint32_t)(EDI), 0x120f23bfu);
  /* 120f23bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f23c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f23c4 je 0x120f23dd */
  if (C.zf) goto L_120f23dd;
  /* 120f23c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120f23c7 mov ebx, dword ptr [0x120fd114] */
  EBX = (r32((uint32_t)(0x120fd114)));
L_120f23cd:;
  /* 120f23cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120f23cf push esi */
  push32((uint32_t)(ESI));
  /* 120f23d0 call ebx */
  call_ind((uint32_t)(EBX), 0x120f23d2u);
  /* 120f23d2 push esi */
  push32((uint32_t)(ESI));
  /* 120f23d3 call edi */
  call_ind((uint32_t)(EDI), 0x120f23d5u);
  /* 120f23d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f23d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f23da jne 0x120f23cd */
  if (!C.zf) goto L_120f23cd;
  /* 120f23dc pop ebx */
  EBX = (pop32());
L_120f23dd:;
  /* 120f23dd push esi */
  push32((uint32_t)(ESI));
  /* 120f23de call edi */
  call_ind((uint32_t)(EDI), 0x120f23e0u);
  /* 120f23e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f23e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f23e5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f23e7 pop edi */
  EDI = (pop32());
  /* 120f23e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f23e9 pop esi */
  ESI = (pop32());
  /* 120f23ea ret  */
  ESPCHK(0x120f23b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f0 @ 0x120f23f0 (335 bytes, 114 insns) */
void f_120f23f0(void) {
  FTRACE(0x120f23f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f23f0 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f23f3 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 120f23f7 push ebp */
  push32((uint32_t)(EBP));
  /* 120f23f8 push esi */
  push32((uint32_t)(ESI));
  /* 120f23f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f23fb xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 120f23fd push edi */
  push32((uint32_t)(EDI));
  /* 120f23fe mov edi, dword ptr [esp + 0x4c] */
  EDI = (r32((uint32_t)(ESP + 0x4c)));
  /* 120f2402 mov dword ptr [esp + 0xc], 0xffff */
  w32((uint32_t)(ESP + 0xc), (0xffffu));
  /* 120f240a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f240c mov dword ptr [esp + 0x10], esi */
  w32((uint32_t)(ESP + 0x10), (ESI));
  /* 120f2410 jle 0x120f250f */
  if ((C.zf||C.sf!=C.of)) goto L_120f250f;
  /* 120f2416 push ebx */
  push32((uint32_t)(EBX));
L_120f2417:;
  /* 120f2417 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 120f241b cmp byte ptr [eax + ebp], 1 */
  { uint32_t _a=(r8((uint32_t)(EAX + EBP*1))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f241f jne 0x120f24fd */
  if (!C.zf) goto L_120f24fd;
  /* 120f2425 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2426 call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f242cu);
  /* 120f242c mov ebx, dword ptr [esp + 0x5c] */
  EBX = (r32((uint32_t)(ESP + 0x5c)));
  /* 120f2430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2433 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f2435 jle 0x120f244e */
  if ((C.zf||C.sf!=C.of)) goto L_120f244e;
  /* 120f2437 mov esi, dword ptr [esp + 0x54] */
  ESI = (r32((uint32_t)(ESP + 0x54)));
L_120f243b:;
  /* 120f243b push 1 */
  push32((uint32_t)(0x1u));
  /* 120f243d push ebp */
  push32((uint32_t)(EBP));
  /* 120f243e push esi */
  push32((uint32_t)(ESI));
  /* 120f243f call dword ptr [0x120fd16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd16c))), 0x120f2445u);
  /* 120f2445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2448 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f244b dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f244c jne 0x120f243b */
  if (!C.zf) goto L_120f243b;
L_120f244e:;
  /* 120f244e push edi */
  push32((uint32_t)(EDI));
  /* 120f244f call 0x120f23b0 */
  push32(0x120f2454u); f_120f23b0();
  /* 120f2454 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2456 push edi */
  push32((uint32_t)(EDI));
  /* 120f2457 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2458 call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f245eu);
  /* 120f245e push ebp */
  push32((uint32_t)(EBP));
  /* 120f245f call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f2465u);
  /* 120f2465 mov ebx, dword ptr [0x120fd170] */
  EBX = (r32((uint32_t)(0x120fd170)));
  /* 120f246b push edi */
  push32((uint32_t)(EDI));
  /* 120f246c call ebx */
  call_ind((uint32_t)(EBX), 0x120f246eu);
  /* 120f246e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2473 je 0x120f2486 */
  if (C.zf) goto L_120f2486;
  /* 120f2475 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120f2477 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 120f247b push edi */
  push32((uint32_t)(EDI));
  /* 120f247c push ecx */
  push32((uint32_t)(ECX));
  /* 120f247d call dword ptr [0x120fd10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd10c))), 0x120f2483u);
  /* 120f2483 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f2486:;
  /* 120f2486 push edi */
  push32((uint32_t)(EDI));
  /* 120f2487 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f2489 call ebx */
  call_ind((uint32_t)(EBX), 0x120f248bu);
  /* 120f248b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f248e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2490 jle 0x120f24fd */
  if ((C.zf||C.sf!=C.of)) goto L_120f24fd;
L_120f2492:;
  /* 120f2492 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 120f2496 push edx */
  push32((uint32_t)(EDX));
  /* 120f2497 push esi */
  push32((uint32_t)(ESI));
  /* 120f2498 push edi */
  push32((uint32_t)(EDI));
  /* 120f2499 call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f249fu);
  /* 120f249f mov ebx, dword ptr [esp + 0x68] */
  EBX = (r32((uint32_t)(ESP + 0x68)));
  /* 120f24a3 mov ax, word ptr [esp + 0x40] */
  AX = (r16((uint32_t)(ESP + 0x40)));
  /* 120f24a8 mov cx, word ptr [esp + 0x44] */
  CX = (r16((uint32_t)(ESP + 0x44)));
  /* 120f24ad lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 120f24b1 push edx */
  push32((uint32_t)(EDX));
  /* 120f24b2 push ebx */
  push32((uint32_t)(EBX));
  /* 120f24b3 mov word ptr [esp + 0x2c], ax */
  w16((uint32_t)(ESP + 0x2c), (AX));
  /* 120f24b8 mov word ptr [esp + 0x2e], cx */
  w16((uint32_t)(ESP + 0x2e), (CX));
  /* 120f24bd call dword ptr [0x120fd118] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd118))), 0x120f24c3u);
  /* 120f24c3 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 120f24c7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f24ca cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f24cc jge 0x120f24ee */
  if ((C.sf==C.of)) goto L_120f24ee;
  /* 120f24ce lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 120f24d2 push eax */
  push32((uint32_t)(EAX));
  /* 120f24d3 push ebx */
  push32((uint32_t)(EBX));
  /* 120f24d4 call dword ptr [0x120fd118] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd118))), 0x120f24dau);
  /* 120f24da mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 120f24de mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 120f24e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f24e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f24ea mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
L_120f24ee:;
  /* 120f24ee push edi */
  push32((uint32_t)(EDI));
  /* 120f24ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f24f0 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f24f6u);
  /* 120f24f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f24f9 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f24fb jl 0x120f2492 */
  if ((C.sf!=C.of)) goto L_120f2492;
L_120f24fd:;
  /* 120f24fd mov eax, dword ptr [esp + 0x64] */
  EAX = (r32((uint32_t)(ESP + 0x64)));
  /* 120f2501 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 120f2502 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2504 jl 0x120f2417 */
  if ((C.sf!=C.of)) goto L_120f2417;
  /* 120f250a mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 120f250e pop ebx */
  EBX = (pop32());
L_120f250f:;
  /* 120f250f push edi */
  push32((uint32_t)(EDI));
  /* 120f2510 call 0x120f23b0 */
  push32(0x120f2515u); f_120f23b0();
  /* 120f2515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2518 cmp esi, 0xffff */
  { uint32_t _a=(ESI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f251e jge 0x120f252d */
  if ((C.sf==C.of)) goto L_120f252d;
  /* 120f2520 push esi */
  push32((uint32_t)(ESI));
  /* 120f2521 push edi */
  push32((uint32_t)(EDI));
  /* 120f2522 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2524 call dword ptr [0x120fd11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd11c))), 0x120f252au);
  /* 120f252a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f252d:;
  /* 120f252d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f252f cmp esi, 0xffff */
  { uint32_t _a=(ESI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2535 pop edi */
  EDI = (pop32());
  /* 120f2536 pop esi */
  ESI = (pop32());
  /* 120f2537 setl al */
  AL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 120f253a pop ebp */
  EBP = (pop32());
  /* 120f253b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f253e ret  */
  ESPCHK(0x120f23f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x120f2540 (192 bytes, 78 insns) */
void f_120f2540(void) {
  FTRACE(0x120f2540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2540 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2543 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2544 push esi */
  push32((uint32_t)(ESI));
  /* 120f2545 mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 120f2549 push edi */
  push32((uint32_t)(EDI));
  /* 120f254a push esi */
  push32((uint32_t)(ESI));
  /* 120f254b xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 120f254d call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2553u);
  /* 120f2553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2558 je 0x120f25f7 */
  if (C.zf) goto L_120f25f7;
  /* 120f255e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120f2560 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 120f2564 push esi */
  push32((uint32_t)(ESI));
  /* 120f2565 push eax */
  push32((uint32_t)(EAX));
  /* 120f2566 call dword ptr [0x120fd10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd10c))), 0x120f256cu);
  /* 120f256c mov edi, dword ptr [esp + 0x24] */
  EDI = (r32((uint32_t)(ESP + 0x24)));
  /* 120f2570 push edi */
  push32((uint32_t)(EDI));
  /* 120f2571 call 0x120f23b0 */
  push32(0x120f2576u); f_120f23b0();
  /* 120f2576 mov ecx, dword ptr [esp + 0x40] */
  ECX = (r32((uint32_t)(ESP + 0x40)));
  /* 120f257a mov edx, dword ptr [esp + 0x3c] */
  EDX = (r32((uint32_t)(ESP + 0x3c)));
  /* 120f257e push ecx */
  push32((uint32_t)(ECX));
  /* 120f257f mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f2583 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 120f2587 push edx */
  push32((uint32_t)(EDX));
  /* 120f2588 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f258c push eax */
  push32((uint32_t)(EAX));
  /* 120f258d push ecx */
  push32((uint32_t)(ECX));
  /* 120f258e push edx */
  push32((uint32_t)(EDX));
  /* 120f258f push edi */
  push32((uint32_t)(EDI));
  /* 120f2590 call 0x120f23f0 */
  push32(0x120f2595u); f_120f23f0();
  /* 120f2595 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2598 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f259a je 0x120f25ee */
  if (C.zf) goto L_120f25ee;
  /* 120f259c push edi */
  push32((uint32_t)(EDI));
  /* 120f259d push esi */
  push32((uint32_t)(ESI));
  /* 120f259e call 0x120f2920 */
  push32(0x120f25a3u); f_120f2920();
  /* 120f25a3 lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 120f25aa push edi */
  push32((uint32_t)(EDI));
  /* 120f25ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f25ad push esi */
  push32((uint32_t)(ESI));
  /* 120f25ae lea ebx, [ecx + ecx*4] */
  EBX = ((uint32_t)(ECX + ECX*4));
  /* 120f25b1 call 0x120f28b0 */
  push32(0x120f25b6u); f_120f28b0();
  /* 120f25b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f25b9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f25bb jge 0x120f25ee */
  if ((C.sf==C.of)) goto L_120f25ee;
  /* 120f25bd push 0 */
  push32((uint32_t)(0x0u));
  /* 120f25bf push esi */
  push32((uint32_t)(ESI));
  /* 120f25c0 call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f25c6u);
  /* 120f25c6 mov esi, dword ptr [esp + 0x30] */
  ESI = (r32((uint32_t)(ESP + 0x30)));
  /* 120f25ca push 0 */
  push32((uint32_t)(0x0u));
  /* 120f25cc lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 120f25d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f25d2 push eax */
  push32((uint32_t)(EAX));
  /* 120f25d3 push esi */
  push32((uint32_t)(ESI));
  /* 120f25d4 call dword ptr [0x120fd128] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd128))), 0x120f25dau);
  /* 120f25da push edi */
  push32((uint32_t)(EDI));
  /* 120f25db push esi */
  push32((uint32_t)(ESI));
  /* 120f25dc call dword ptr [0x120fd110] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd110))), 0x120f25e2u);
  /* 120f25e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f25e5 mov al, 1 */
  AL = (0x1u);
  /* 120f25e7 pop edi */
  EDI = (pop32());
  /* 120f25e8 pop esi */
  ESI = (pop32());
  /* 120f25e9 pop ebx */
  EBX = (pop32());
  /* 120f25ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f25ed ret  */
  ESPCHK(0x120f2540u, _esp0);
  ESP += 4; return;
L_120f25ee:;
  /* 120f25ee pop edi */
  EDI = (pop32());
  /* 120f25ef pop esi */
  ESI = (pop32());
  /* 120f25f0 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 120f25f2 pop ebx */
  EBX = (pop32());
  /* 120f25f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f25f6 ret  */
  ESPCHK(0x120f2540u, _esp0);
  ESP += 4; return;
L_120f25f7:;
  /* 120f25f7 pop edi */
  EDI = (pop32());
  /* 120f25f8 mov al, bl */
  AL = (BL);
  /* 120f25fa pop esi */
  ESI = (pop32());
  /* 120f25fb pop ebx */
  EBX = (pop32());
  /* 120f25fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f25ff ret  */
  ESPCHK(0x120f2540u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x120f2600 (112 bytes, 47 insns) */
void f_120f2600(void) {
  FTRACE(0x120f2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2600 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2603 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2604 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2605 push esi */
  push32((uint32_t)(ESI));
  /* 120f2606 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
  /* 120f260a push esi */
  push32((uint32_t)(ESI));
  /* 120f260b xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 120f260d call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2613u);
  /* 120f2613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2618 je 0x120f2662 */
  if (C.zf) goto L_120f2662;
  /* 120f261a push 0x258 */
  push32((uint32_t)(0x258u));
  /* 120f261f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 120f2623 push esi */
  push32((uint32_t)(ESI));
  /* 120f2624 push eax */
  push32((uint32_t)(EAX));
  /* 120f2625 call dword ptr [0x120fd10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd10c))), 0x120f262bu);
  /* 120f262b mov ebp, dword ptr [esp + 0x30] */
  EBP = (r32((uint32_t)(ESP + 0x30)));
  /* 120f262f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2632 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f2634 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 120f2636 jle 0x120f2662 */
  if ((C.zf||C.sf!=C.of)) goto L_120f2662;
  /* 120f2638 push edi */
  push32((uint32_t)(EDI));
  /* 120f2639 mov edi, dword ptr [esp + 0x24] */
  EDI = (r32((uint32_t)(ESP + 0x24)));
L_120f263d:;
  /* 120f263d cmp byte ptr [esi + edi], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + EDI*1))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f2641 jne 0x120f265c */
  if (!C.zf) goto L_120f265c;
  /* 120f2643 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 120f2645 jne 0x120f265a */
  if (!C.zf) goto L_120f265a;
  /* 120f2647 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 120f264b push esi */
  push32((uint32_t)(ESI));
  /* 120f264c push ecx */
  push32((uint32_t)(ECX));
  /* 120f264d call dword ptr [0x120fd108] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd108))), 0x120f2653u);
  /* 120f2653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2658 je 0x120f265c */
  if (C.zf) goto L_120f265c;
L_120f265a:;
  /* 120f265a mov bl, 1 */
  BL = (0x1u);
L_120f265c:;
  /* 120f265c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f265d cmp esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f265f jl 0x120f263d */
  if ((C.sf!=C.of)) goto L_120f263d;
  /* 120f2661 pop edi */
  EDI = (pop32());
L_120f2662:;
  /* 120f2662 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f2664 pop esi */
  ESI = (pop32());
  /* 120f2665 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 120f2667 pop ebp */
  EBP = (pop32());
  /* 120f2668 pop ebx */
  EBX = (pop32());
  /* 120f2669 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120f266c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f266f ret  */
  ESPCHK(0x120f2600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x120f2670 (182 bytes, 69 insns) */
void f_120f2670(void) {
  FTRACE(0x120f2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2670 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f2674 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2677 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 120f267b push ebx */
  push32((uint32_t)(EBX));
  /* 120f267c push ebp */
  push32((uint32_t)(EBP));
  /* 120f267d push esi */
  push32((uint32_t)(ESI));
  /* 120f267e push edi */
  push32((uint32_t)(EDI));
  /* 120f267f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 120f2684 push eax */
  push32((uint32_t)(EAX));
  /* 120f2685 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2686 call dword ptr [0x120fd10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd10c))), 0x120f268cu);
  /* 120f268c mov edi, dword ptr [esp + 0x30] */
  EDI = (r32((uint32_t)(ESP + 0x30)));
  /* 120f2690 push edi */
  push32((uint32_t)(EDI));
  /* 120f2691 call 0x120f23b0 */
  push32(0x120f2696u); f_120f23b0();
  /* 120f2696 push edi */
  push32((uint32_t)(EDI));
  /* 120f2697 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f2699 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f269fu);
  /* 120f269f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f26a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f26a4 jne 0x120f271e */
  if (!C.zf) goto L_120f271e;
  /* 120f26a6 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 120f26aa mov ebp, dword ptr [0x120fd104] */
  EBP = (r32((uint32_t)(0x120fd104)));
L_120f26b0:;
  /* 120f26b0 cmp esi, dword ptr [esp + 0x2c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f26b4 jge 0x120f271e */
  if ((C.sf==C.of)) goto L_120f271e;
  /* 120f26b6 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 120f26ba cmp byte ptr [esi + edx], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + EDX*1))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f26be jne 0x120f270f */
  if (!C.zf) goto L_120f270f;
  /* 120f26c0 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 120f26c4 push esi */
  push32((uint32_t)(ESI));
  /* 120f26c5 push eax */
  push32((uint32_t)(EAX));
  /* 120f26c6 call dword ptr [0x120fd108] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd108))), 0x120f26ccu);
  /* 120f26cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f26cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f26d1 je 0x120f270f */
  if (C.zf) goto L_120f270f;
  /* 120f26d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f26d5 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 120f26d9 push esi */
  push32((uint32_t)(ESI));
  /* 120f26da push ecx */
  push32((uint32_t)(ECX));
  /* 120f26db call ebp */
  call_ind((uint32_t)(EBP), 0x120f26ddu);
  /* 120f26dd push 0 */
  push32((uint32_t)(0x0u));
  /* 120f26df push edi */
  push32((uint32_t)(EDI));
  /* 120f26e0 push esi */
  push32((uint32_t)(ESI));
  /* 120f26e1 call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f26e7u);
  /* 120f26e7 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f26eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120f26ed push edx */
  push32((uint32_t)(EDX));
  /* 120f26ee call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f26f4u);
  /* 120f26f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f26f6 lea eax, [esp + 0x34] */
  EAX = ((uint32_t)(ESP + 0x34));
  /* 120f26fa push 0 */
  push32((uint32_t)(0x0u));
  /* 120f26fc push eax */
  push32((uint32_t)(EAX));
  /* 120f26fd push ebx */
  push32((uint32_t)(EBX));
  /* 120f26fe call dword ptr [0x120fd128] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd128))), 0x120f2704u);
  /* 120f2704 push edi */
  push32((uint32_t)(EDI));
  /* 120f2705 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2706 call dword ptr [0x120fd110] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd110))), 0x120f270cu);
  /* 120f270c add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f270f:;
  /* 120f270f push edi */
  push32((uint32_t)(EDI));
  /* 120f2710 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f2711 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2717u);
  /* 120f2717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f271a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f271c je 0x120f26b0 */
  if (C.zf) goto L_120f26b0;
L_120f271e:;
  /* 120f271e pop edi */
  EDI = (pop32());
  /* 120f271f pop esi */
  ESI = (pop32());
  /* 120f2720 pop ebp */
  EBP = (pop32());
  /* 120f2721 pop ebx */
  EBX = (pop32());
  /* 120f2722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2725 ret  */
  ESPCHK(0x120f2670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x120f2730 (377 bytes, 133 insns) */
void f_120f2730(void) {
  FTRACE(0x120f2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2730 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2731 mov ebp, esp */
  EBP = (ESP);
  /* 120f2733 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2736 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2737 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f273a push esi */
  push32((uint32_t)(ESI));
  /* 120f273b push edi */
  push32((uint32_t)(EDI));
  /* 120f273c push ebx */
  push32((uint32_t)(EBX));
  /* 120f273d call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2743u);
  /* 120f2743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2748 je 0x120f28a2 */
  if (C.zf) goto L_120f28a2;
  /* 120f274e mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 120f2751 push edi */
  push32((uint32_t)(EDI));
  /* 120f2752 call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f2758u);
  /* 120f2758 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f275b push 0 */
  push32((uint32_t)(0x0u));
  /* 120f275d push edi */
  push32((uint32_t)(EDI));
  /* 120f275e push eax */
  push32((uint32_t)(EAX));
  /* 120f275f call dword ptr [0x120fd16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd16c))), 0x120f2765u);
  /* 120f2765 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f2768 push esi */
  push32((uint32_t)(ESI));
  /* 120f2769 call 0x120f23b0 */
  push32(0x120f276eu); f_120f23b0();
  /* 120f276e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2770 push esi */
  push32((uint32_t)(ESI));
  /* 120f2771 push edi */
  push32((uint32_t)(EDI));
  /* 120f2772 call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f2778u);
  /* 120f2778 push edi */
  push32((uint32_t)(EDI));
  /* 120f2779 call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f277fu);
  /* 120f277f push esi */
  push32((uint32_t)(ESI));
  /* 120f2780 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2786u);
  /* 120f2786 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f278b je 0x120f28a2 */
  if (C.zf) goto L_120f28a2;
  /* 120f2791 mov edi, dword ptr [0x120fd10c] */
  EDI = (r32((uint32_t)(0x120fd10c)));
  /* 120f2797 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 120f2799 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 120f279c push ebx */
  push32((uint32_t)(EBX));
  /* 120f279d push ecx */
  push32((uint32_t)(ECX));
  /* 120f279e mov dword ptr [ebp + 0x14], 0x186a0 */
  w32((uint32_t)(EBP + 0x14), (0x186a0u));
  /* 120f27a5 mov dword ptr [ebp + 0x18], 0xffff */
  w32((uint32_t)(EBP + 0x18), (0xffffu));
  /* 120f27ac call edi */
  call_ind((uint32_t)(EDI), 0x120f27aeu);
  /* 120f27ae push 0x32 */
  push32((uint32_t)(0x32u));
  /* 120f27b0 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120f27b3 push ebx */
  push32((uint32_t)(EBX));
  /* 120f27b4 push edx */
  push32((uint32_t)(EDX));
  /* 120f27b5 call edi */
  call_ind((uint32_t)(EDI), 0x120f27b7u);
  /* 120f27b7 push esi */
  push32((uint32_t)(ESI));
  /* 120f27b8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f27ba call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f27c0u);
  /* 120f27c0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f27c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f27c5 jle 0x120f285c */
  if ((C.zf||C.sf!=C.of)) goto L_120f285c;
L_120f27cb:;
  /* 120f27cb lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 120f27ce push eax */
  push32((uint32_t)(EAX));
  /* 120f27cf push edi */
  push32((uint32_t)(EDI));
  /* 120f27d0 push esi */
  push32((uint32_t)(ESI));
  /* 120f27d1 call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f27d7u);
  /* 120f27d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f27da mov edx, dword ptr [ebp - 0x12] */
  EDX = (r32((uint32_t)(EBP + -0x12)));
  /* 120f27dd mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120f27e0 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 120f27e4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f27ea and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120f27f0 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f27f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f27f5 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 120f27f9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120f27ff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f2804 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2807 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2809 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 120f280c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120f280f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f2812 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2815 jge 0x120f2819 */
  if ((C.sf==C.of)) goto L_120f2819;
  /* 120f2817 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f2819:;
  /* 120f2819 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f281c cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f281f jge 0x120f2823 */
  if ((C.sf==C.of)) goto L_120f2823;
  /* 120f2821 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2823:;
  /* 120f2823 mov ecx, eax */
  ECX = (EAX);
  /* 120f2825 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2827 ja 0x120f282b */
  if ((!C.cf&&!C.zf)) goto L_120f282b;
  /* 120f2829 mov ecx, ebx */
  ECX = (EBX);
L_120f282b:;
  /* 120f282b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f282d add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f282f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2831 mov eax, ecx */
  EAX = (ECX);
  /* 120f2833 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2836 jge 0x120f2846 */
  if ((C.sf==C.of)) goto L_120f2846;
  /* 120f2838 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 120f283b mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120f283e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f2843 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_120f2846:;
  /* 120f2846 push esi */
  push32((uint32_t)(ESI));
  /* 120f2847 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f2848 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f284eu);
  /* 120f284e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2851 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2853 jl 0x120f27cb */
  if ((C.sf!=C.of)) goto L_120f27cb;
  /* 120f2859 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_120f285c:;
  /* 120f285c push esi */
  push32((uint32_t)(ESI));
  /* 120f285d call 0x120f23b0 */
  push32(0x120f2862u); f_120f23b0();
  /* 120f2862 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f2865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2868 cmp eax, 0xffff */
  { uint32_t _a=(EAX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f286d jge 0x120f287c */
  if ((C.sf==C.of)) goto L_120f287c;
  /* 120f286f push eax */
  push32((uint32_t)(EAX));
  /* 120f2870 push esi */
  push32((uint32_t)(ESI));
  /* 120f2871 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2873 call dword ptr [0x120fd11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd11c))), 0x120f2879u);
  /* 120f2879 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f287c:;
  /* 120f287c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f287e push ebx */
  push32((uint32_t)(EBX));
  /* 120f287f call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2885u);
  /* 120f2885 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2888 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f288a lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120f288d push 0 */
  push32((uint32_t)(0x0u));
  /* 120f288f push edx */
  push32((uint32_t)(EDX));
  /* 120f2890 push edi */
  push32((uint32_t)(EDI));
  /* 120f2891 call dword ptr [0x120fd128] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd128))), 0x120f2897u);
  /* 120f2897 push esi */
  push32((uint32_t)(ESI));
  /* 120f2898 push edi */
  push32((uint32_t)(EDI));
  /* 120f2899 call dword ptr [0x120fd110] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd110))), 0x120f289fu);
  /* 120f289f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f28a2:;
  /* 120f28a2 pop edi */
  EDI = (pop32());
  /* 120f28a3 pop esi */
  ESI = (pop32());
  /* 120f28a4 pop ebx */
  EBX = (pop32());
  /* 120f28a5 mov esp, ebp */
  ESP = (EBP);
  /* 120f28a7 pop ebp */
  EBP = (pop32());
  /* 120f28a8 ret  */
  ESPCHK(0x120f2730u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x120f28b0 (107 bytes, 50 insns) */
void f_120f28b0(void) {
  FTRACE(0x120f28b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f28b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120f28b1 mov ebp, esp */
  EBP = (ESP);
  /* 120f28b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f28b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f28b9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f28ba push esi */
  push32((uint32_t)(ESI));
  /* 120f28bb mov esi, dword ptr [0x120fd168] */
  ESI = (r32((uint32_t)(0x120fd168)));
  /* 120f28c1 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 120f28c4 push edi */
  push32((uint32_t)(EDI));
  /* 120f28c5 push eax */
  push32((uint32_t)(EAX));
  /* 120f28c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f28c8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f28c9 call esi */
  call_ind((uint32_t)(ESI), 0x120f28cbu);
  /* 120f28cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f28ce mov edi, dword ptr [ebp - 0x18] */
  EDI = (r32((uint32_t)(EBP + -0x18)));
  /* 120f28d1 mov ebx, dword ptr [ebp - 0x14] */
  EBX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f28d4 lea edx, [ebp - 0x2c] */
  EDX = ((uint32_t)(EBP + -0x2c));
  /* 120f28d7 push edx */
  push32((uint32_t)(EDX));
  /* 120f28d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f28da push eax */
  push32((uint32_t)(EAX));
  /* 120f28db call esi */
  call_ind((uint32_t)(ESI), 0x120f28ddu);
  /* 120f28dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f28e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120f28e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f28e6 sub ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f28e8 sub edx, edi */
  { uint32_t _a=(EDX),_b=(EDI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f28ea mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120f28ed mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 120f28f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f28f3 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f28f6 jge 0x120f28fa */
  if ((C.sf==C.of)) goto L_120f28fa;
  /* 120f28f8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f28fa:;
  /* 120f28fa mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f28fd cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2900 jge 0x120f2904 */
  if ((C.sf==C.of)) goto L_120f2904;
  /* 120f2902 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2904:;
  /* 120f2904 mov ecx, eax */
  ECX = (EAX);
  /* 120f2906 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2908 ja 0x120f290c */
  if ((!C.cf&&!C.zf)) goto L_120f290c;
  /* 120f290a mov ecx, ebx */
  ECX = (EBX);
L_120f290c:;
  /* 120f290c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f290e add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2910 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2912 mov eax, ecx */
  EAX = (ECX);
  /* 120f2914 pop edi */
  EDI = (pop32());
  /* 120f2915 pop esi */
  ESI = (pop32());
  /* 120f2916 pop ebx */
  EBX = (pop32());
  /* 120f2917 mov esp, ebp */
  ESP = (EBP);
  /* 120f2919 pop ebp */
  EBP = (pop32());
  /* 120f291a ret  */
  ESPCHK(0x120f28b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002920 @ 0x120f2920 (62 bytes, 24 insns) */
void f_120f2920(void) {
  FTRACE(0x120f2920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2920 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f2924 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2927 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 120f292b push esi */
  push32((uint32_t)(ESI));
  /* 120f292c mov esi, dword ptr [0x120fd10c] */
  ESI = (r32((uint32_t)(0x120fd10c)));
  /* 120f2932 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 120f2934 push eax */
  push32((uint32_t)(EAX));
  /* 120f2935 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2936 call esi */
  call_ind((uint32_t)(ESI), 0x120f2938u);
  /* 120f2938 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 120f293c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 120f293e lea eax, [esp + 0x14] */
  EAX = ((uint32_t)(ESP + 0x14));
  /* 120f2942 push edx */
  push32((uint32_t)(EDX));
  /* 120f2943 push eax */
  push32((uint32_t)(EAX));
  /* 120f2944 call esi */
  call_ind((uint32_t)(ESI), 0x120f2946u);
  /* 120f2946 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 120f294a lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 120f294e push ecx */
  push32((uint32_t)(ECX));
  /* 120f294f push edx */
  push32((uint32_t)(EDX));
  /* 120f2950 call dword ptr [0x120fd118] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd118))), 0x120f2956u);
  /* 120f2956 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2959 pop esi */
  ESI = (pop32());
  /* 120f295a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f295d ret  */
  ESPCHK(0x120f2920u, _esp0);
  ESP += 4; return;
}

/* FUN_10002960 @ 0x120f2960 (113 bytes, 55 insns) */
void f_120f2960(void) {
  FTRACE(0x120f2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2960 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2961 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 120f2965 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2966 mov ebp, dword ptr [esp + 0x1c] */
  EBP = (r32((uint32_t)(ESP + 0x1c)));
  /* 120f296a push esi */
  push32((uint32_t)(ESI));
  /* 120f296b mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 120f296f push edi */
  push32((uint32_t)(EDI));
  /* 120f2970 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 120f2974 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2975 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2976 push esi */
  push32((uint32_t)(ESI));
  /* 120f2977 push edi */
  push32((uint32_t)(EDI));
  /* 120f2978 call 0x120f2600 */
  push32(0x120f297du); f_120f2600();
  /* 120f297d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2980 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f2982 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2983 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2984 je 0x120f29bd */
  if (C.zf) goto L_120f29bd;
  /* 120f2986 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 120f298a mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f298e mov ebx, dword ptr [esp + 0x24] */
  EBX = (r32((uint32_t)(ESP + 0x24)));
  /* 120f2992 push esi */
  push32((uint32_t)(ESI));
  /* 120f2993 push edi */
  push32((uint32_t)(EDI));
  /* 120f2994 push eax */
  push32((uint32_t)(EAX));
  /* 120f2995 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2996 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2997 call 0x120f2540 */
  push32(0x120f299cu); f_120f2540();
  /* 120f299c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f299f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f29a1 jne 0x120f29cc */
  if (!C.zf) goto L_120f29cc;
  /* 120f29a3 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f29a7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 120f29ab push edx */
  push32((uint32_t)(EDX));
  /* 120f29ac push eax */
  push32((uint32_t)(EAX));
  /* 120f29ad push ebx */
  push32((uint32_t)(EBX));
  /* 120f29ae push esi */
  push32((uint32_t)(ESI));
  /* 120f29af push edi */
  push32((uint32_t)(EDI));
  /* 120f29b0 call 0x120f2730 */
  push32(0x120f29b5u); f_120f2730();
  /* 120f29b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f29b8 pop edi */
  EDI = (pop32());
  /* 120f29b9 pop esi */
  ESI = (pop32());
  /* 120f29ba pop ebp */
  EBP = (pop32());
  /* 120f29bb pop ebx */
  EBX = (pop32());
  /* 120f29bc ret  */
  ESPCHK(0x120f2960u, _esp0);
  ESP += 4; return;
L_120f29bd:;
  /* 120f29bd mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 120f29c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120f29c2 push esi */
  push32((uint32_t)(ESI));
  /* 120f29c3 push edi */
  push32((uint32_t)(EDI));
  /* 120f29c4 call 0x120f2670 */
  push32(0x120f29c9u); f_120f2670();
  /* 120f29c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f29cc:;
  /* 120f29cc pop edi */
  EDI = (pop32());
  /* 120f29cd pop esi */
  ESI = (pop32());
  /* 120f29ce pop ebp */
  EBP = (pop32());
  /* 120f29cf pop ebx */
  EBX = (pop32());
  /* 120f29d0 ret  */
  ESPCHK(0x120f2960u, _esp0);
  ESP += 4; return;
}

/* FUN_100029e0 @ 0x120f29e0 (362 bytes, 134 insns) */
void f_120f29e0(void) {
  FTRACE(0x120f29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120f29e1 mov ebp, esp */
  EBP = (ESP);
  /* 120f29e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f29e5 push 0x120fc948 */
  push32((uint32_t)(0x120fc948u));
  /* 120f29ea mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f29f0 push eax */
  push32((uint32_t)(EAX));
  /* 120f29f1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f29f8 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f29fb push ebx */
  push32((uint32_t)(EBX));
  /* 120f29fc push esi */
  push32((uint32_t)(ESI));
  /* 120f29fd push edi */
  push32((uint32_t)(EDI));
  /* 120f29fe mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2a01 push edi */
  push32((uint32_t)(EDI));
  /* 120f2a02 call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f2a08u);
  /* 120f2a08 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f2a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2a0e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f2a10 jle 0x120f2a28 */
  if ((C.zf||C.sf!=C.of)) goto L_120f2a28;
  /* 120f2a12 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
L_120f2a15:;
  /* 120f2a15 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f2a17 push edi */
  push32((uint32_t)(EDI));
  /* 120f2a18 push esi */
  push32((uint32_t)(ESI));
  /* 120f2a19 call dword ptr [0x120fd16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd16c))), 0x120f2a1fu);
  /* 120f2a1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2a22 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2a25 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f2a26 jne 0x120f2a15 */
  if (!C.zf) goto L_120f2a15;
L_120f2a28:;
  /* 120f2a28 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f2a2b push esi */
  push32((uint32_t)(ESI));
  /* 120f2a2c call 0x120f23b0 */
  push32(0x120f2a31u); f_120f23b0();
  /* 120f2a31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f2a33 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2a34 push esi */
  push32((uint32_t)(ESI));
  /* 120f2a35 push edi */
  push32((uint32_t)(EDI));
  /* 120f2a36 call dword ptr [0x120fd164] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd164))), 0x120f2a3cu);
  /* 120f2a3c push edi */
  push32((uint32_t)(EDI));
  /* 120f2a3d call dword ptr [0x120fd15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd15c))), 0x120f2a43u);
  /* 120f2a43 mov al, byte ptr [ebp + 0xf] */
  AL = (r8((uint32_t)(EBP + 0xf)));
  /* 120f2a46 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 120f2a49 mov byte ptr [ebp - 0x1c], al */
  w8((uint32_t)(EBP + -0x1c), (AL));
  /* 120f2a4c mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 120f2a4f mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 120f2a52 push esi */
  push32((uint32_t)(ESI));
  /* 120f2a53 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 120f2a56 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 120f2a59 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2a5fu);
  /* 120f2a5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2a64 jle 0x120f2aff */
  if ((C.zf||C.sf!=C.of)) goto L_120f2aff;
  /* 120f2a6a mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_120f2a6d:;
  /* 120f2a6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2a70 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 120f2a73 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2a74 push edx */
  push32((uint32_t)(EDX));
  /* 120f2a75 push esi */
  push32((uint32_t)(ESI));
  /* 120f2a76 call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f2a7cu);
  /* 120f2a7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120f2a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f2a81 mov ax, word ptr [edi + 2] */
  AX = (r16((uint32_t)(EDI + 0x2)));
  /* 120f2a85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2a88 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2a8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f2a8c mov cx, word ptr [edi] */
  CX = (r16((uint32_t)(EDI)));
  /* 120f2a8f mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
  /* 120f2a92 sub ecx, dword ptr [ebp - 0x34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x34))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2a95 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
  /* 120f2a98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f2a9b cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2a9e jge 0x120f2aa2 */
  if ((C.sf==C.of)) goto L_120f2aa2;
  /* 120f2aa0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f2aa2:;
  /* 120f2aa2 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f2aa5 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2aa8 jge 0x120f2aac */
  if ((C.sf==C.of)) goto L_120f2aac;
  /* 120f2aaa neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2aac:;
  /* 120f2aac mov ecx, eax */
  ECX = (EAX);
  /* 120f2aae cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2ab0 ja 0x120f2ab4 */
  if ((!C.cf&&!C.zf)) goto L_120f2ab4;
  /* 120f2ab2 mov ecx, ebx */
  ECX = (EBX);
L_120f2ab4:;
  /* 120f2ab4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2ab6 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2ab8 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2aba mov eax, ecx */
  EAX = (ECX);
  /* 120f2abc mov edx, dword ptr [edi + 4] */
  EDX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f2abf and edx, 0xffffff */
  { uint32_t _r=(EDX)&(0xffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f2ac5 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2ac7 jg 0x120f2ae6 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f2ae6;
  /* 120f2ac9 mov eax, dword ptr [ebp - 0x48] */
  EAX = (r32((uint32_t)(EBP + -0x48)));
  /* 120f2acc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f2acf lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 120f2ad2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f2ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2ad8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f2ada push edx */
  push32((uint32_t)(EDX));
  /* 120f2adb lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 120f2ade mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
  /* 120f2ae1 call 0x120f2ea0 */
  push32(0x120f2ae6u); f_120f2ea0();
L_120f2ae6:;
  /* 120f2ae6 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2ae9 push esi */
  push32((uint32_t)(ESI));
  /* 120f2aea inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f2aeb mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 120f2aee call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2af4u);
  /* 120f2af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2af7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2af9 jl 0x120f2a6d */
  if ((C.sf!=C.of)) goto L_120f2a6d;
L_120f2aff:;
  /* 120f2aff push esi */
  push32((uint32_t)(ESI));
  /* 120f2b00 call 0x120f23b0 */
  push32(0x120f2b05u); f_120f23b0();
  /* 120f2b05 mov ebx, dword ptr [ebp - 0x18] */
  EBX = (r32((uint32_t)(EBP + -0x18)));
  /* 120f2b08 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f2b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2b0e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2b10 je 0x120f2b30 */
  if (C.zf) goto L_120f2b30;
  /* 120f2b12 mov edi, dword ptr [0x120fd11c] */
  EDI = (r32((uint32_t)(0x120fd11c)));
L_120f2b18:;
  /* 120f2b18 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f2b1a push eax */
  push32((uint32_t)(EAX));
  /* 120f2b1b push esi */
  push32((uint32_t)(ESI));
  /* 120f2b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2b1e call edi */
  call_ind((uint32_t)(EDI), 0x120f2b20u);
  /* 120f2b20 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f2b23 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2b26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2b29 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2b2b jne 0x120f2b18 */
  if (!C.zf) goto L_120f2b18;
  /* 120f2b2d mov ebx, dword ptr [ebp - 0x18] */
  EBX = (r32((uint32_t)(EBP + -0x18)));
L_120f2b30:;
  /* 120f2b30 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2b31 call 0x120f456b */
  push32(0x120f2b36u); f_120f456b();
  /* 120f2b36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f2b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2b3c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120f2b43 pop edi */
  EDI = (pop32());
  /* 120f2b44 pop esi */
  ESI = (pop32());
  /* 120f2b45 pop ebx */
  EBX = (pop32());
  /* 120f2b46 mov esp, ebp */
  ESP = (EBP);
  /* 120f2b48 pop ebp */
  EBP = (pop32());
  /* 120f2b49 ret  */
  ESPCHK(0x120f29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x120f2b50 (376 bytes, 146 insns) */
void f_120f2b50(void) {
  FTRACE(0x120f2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2b51 mov ebp, esp */
  EBP = (ESP);
  /* 120f2b53 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2b56 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2b57 push esi */
  push32((uint32_t)(ESI));
  /* 120f2b58 mov esi, dword ptr [0x120fd170] */
  ESI = (r32((uint32_t)(0x120fd170)));
  /* 120f2b5e push edi */
  push32((uint32_t)(EDI));
  /* 120f2b5f mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f2b62 push edi */
  push32((uint32_t)(EDI));
  /* 120f2b63 call esi */
  call_ind((uint32_t)(ESI), 0x120f2b65u);
  /* 120f2b65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2b6a je 0x120f2cc1 */
  if (C.zf) goto L_120f2cc1;
  /* 120f2b70 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2b73 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2b74 call esi */
  call_ind((uint32_t)(ESI), 0x120f2b76u);
  /* 120f2b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2b79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2b7c jne 0x120f2cc1 */
  if (!C.zf) goto L_120f2cc1;
  /* 120f2b82 mov esi, dword ptr [0x120fd168] */
  ESI = (r32((uint32_t)(0x120fd168)));
  /* 120f2b88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120f2b8b lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 120f2b8e push eax */
  push32((uint32_t)(EAX));
  /* 120f2b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2b91 push edi */
  push32((uint32_t)(EDI));
  /* 120f2b92 call esi */
  call_ind((uint32_t)(ESI), 0x120f2b94u);
  /* 120f2b94 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 120f2b97 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2b9a push ebx */
  push32((uint32_t)(EBX));
  /* 120f2b9b call esi */
  call_ind((uint32_t)(ESI), 0x120f2b9du);
  /* 120f2b9d mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f2ba0 mov esi, dword ptr [ebp - 0x48] */
  ESI = (r32((uint32_t)(EBP + -0x48)));
  /* 120f2ba3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120f2ba6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120f2ba9 sub edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2bab sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2bad mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 120f2bb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f2bb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f2bb6 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2bb9 jge 0x120f2bbd */
  if ((C.sf==C.of)) goto L_120f2bbd;
  /* 120f2bbb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f2bbd:;
  /* 120f2bbd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2bc0 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2bc3 jge 0x120f2bc7 */
  if ((C.sf==C.of)) goto L_120f2bc7;
  /* 120f2bc5 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2bc7:;
  /* 120f2bc7 mov ecx, eax */
  ECX = (EAX);
  /* 120f2bc9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2bcb ja 0x120f2bcf */
  if ((!C.cf&&!C.zf)) goto L_120f2bcf;
  /* 120f2bcd mov ecx, ebx */
  ECX = (EBX);
L_120f2bcf:;
  /* 120f2bcf add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2bd1 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2bd3 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2bd5 mov eax, ecx */
  EAX = (ECX);
  /* 120f2bd7 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 120f2bda push edi */
  push32((uint32_t)(EDI));
  /* 120f2bdb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f2bde and esi, 0xffff */
  { uint32_t _r=(ESI)&(0xffffu); ESI = (_r); fl_logic(_r,32); }
  /* 120f2be4 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2beau);
  /* 120f2bea add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2bed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2bf0 jle 0x120f2ca6 */
  if ((C.zf||C.sf!=C.of)) goto L_120f2ca6;
L_120f2bf6:;
  /* 120f2bf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f2bf9 lea ecx, [ebp - 0x34] */
  ECX = ((uint32_t)(EBP + -0x34));
  /* 120f2bfc push ecx */
  push32((uint32_t)(ECX));
  /* 120f2bfd push edx */
  push32((uint32_t)(EDX));
  /* 120f2bfe push edi */
  push32((uint32_t)(EDI));
  /* 120f2bff call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f2c05u);
  /* 120f2c05 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f2c08 mov ebx, dword ptr [ebp - 0x48] */
  EBX = (r32((uint32_t)(EBP + -0x48)));
  /* 120f2c0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120f2c0e mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120f2c11 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2c13 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2c18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f2c1b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f2c1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f2c21 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c24 jge 0x120f2c28 */
  if ((C.sf==C.of)) goto L_120f2c28;
  /* 120f2c26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f2c28:;
  /* 120f2c28 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f2c2b cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c2e jge 0x120f2c32 */
  if ((C.sf==C.of)) goto L_120f2c32;
  /* 120f2c30 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2c32:;
  /* 120f2c32 mov ecx, eax */
  ECX = (EAX);
  /* 120f2c34 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c36 ja 0x120f2c3a */
  if ((!C.cf&&!C.zf)) goto L_120f2c3a;
  /* 120f2c38 mov ecx, ebx */
  ECX = (EBX);
L_120f2c3a:;
  /* 120f2c3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2c3c add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2c3e shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2c40 mov eax, ecx */
  EAX = (ECX);
  /* 120f2c42 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c45 jge 0x120f2c8d */
  if ((C.sf==C.of)) goto L_120f2c8d;
  /* 120f2c47 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f2c4a mov esi, dword ptr [ebp - 0x48] */
  ESI = (r32((uint32_t)(EBP + -0x48)));
  /* 120f2c4d mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120f2c50 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120f2c53 sub edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2c55 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2c57 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 120f2c5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f2c5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f2c60 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c63 jge 0x120f2c67 */
  if ((C.sf==C.of)) goto L_120f2c67;
  /* 120f2c65 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120f2c67:;
  /* 120f2c67 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f2c6a cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c6d jge 0x120f2c71 */
  if ((C.sf==C.of)) goto L_120f2c71;
  /* 120f2c6f neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_120f2c71:;
  /* 120f2c71 mov ecx, eax */
  ECX = (EAX);
  /* 120f2c73 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2c75 ja 0x120f2c79 */
  if ((!C.cf&&!C.zf)) goto L_120f2c79;
  /* 120f2c77 mov ecx, ebx */
  ECX = (EBX);
L_120f2c79:;
  /* 120f2c79 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2c7b add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2c7d shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f2c7f mov eax, ecx */
  EAX = (ECX);
  /* 120f2c81 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 120f2c84 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f2c87 and esi, 0xffff */
  { uint32_t _r=(ESI)&(0xffffu); ESI = (_r); fl_logic(_r,32); }
L_120f2c8d:;
  /* 120f2c8d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f2c90 push edi */
  push32((uint32_t)(EDI));
  /* 120f2c91 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f2c92 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f2c95 call dword ptr [0x120fd170] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd170))), 0x120f2c9bu);
  /* 120f2c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2c9e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2ca0 jl 0x120f2bf6 */
  if ((C.sf!=C.of)) goto L_120f2bf6;
L_120f2ca6:;
  /* 120f2ca6 cmp esi, 0xffff */
  { uint32_t _a=(ESI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2cac jge 0x120f2cc1 */
  if ((C.sf==C.of)) goto L_120f2cc1;
  /* 120f2cae push edi */
  push32((uint32_t)(EDI));
  /* 120f2caf call 0x120f23b0 */
  push32(0x120f2cb4u); f_120f23b0();
  /* 120f2cb4 push esi */
  push32((uint32_t)(ESI));
  /* 120f2cb5 push edi */
  push32((uint32_t)(EDI));
  /* 120f2cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2cb8 call dword ptr [0x120fd11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd11c))), 0x120f2cbeu);
  /* 120f2cbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f2cc1:;
  /* 120f2cc1 pop edi */
  EDI = (pop32());
  /* 120f2cc2 pop esi */
  ESI = (pop32());
  /* 120f2cc3 pop ebx */
  EBX = (pop32());
  /* 120f2cc4 mov esp, ebp */
  ESP = (EBP);
  /* 120f2cc6 pop ebp */
  EBP = (pop32());
  /* 120f2cc7 ret  */
  ESPCHK(0x120f2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cd0 @ 0x120f2cd0 (347 bytes, 139 insns) */
void f_120f2cd0(void) {
  FTRACE(0x120f2cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2cd0 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2cd3 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2cd4 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2cd5 mov ebp, dword ptr [0x120fd170] */
  EBP = (r32((uint32_t)(0x120fd170)));
  /* 120f2cdb push esi */
  push32((uint32_t)(ESI));
  /* 120f2cdc mov esi, dword ptr [esp + 0x44] */
  ESI = (r32((uint32_t)(ESP + 0x44)));
  /* 120f2ce0 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 120f2ce2 push esi */
  push32((uint32_t)(ESI));
  /* 120f2ce3 call ebp */
  call_ind((uint32_t)(EBP), 0x120f2ce5u);
  /* 120f2ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2cea je 0x120f2e22 */
  if (C.zf) goto L_120f2e22;
  /* 120f2cf0 mov ax, word ptr [esi + 0xe] */
  AX = (r16((uint32_t)(ESI + 0xe)));
  /* 120f2cf4 push edi */
  push32((uint32_t)(EDI));
  /* 120f2cf5 push eax */
  push32((uint32_t)(EAX));
  /* 120f2cf6 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 120f2cfa push esi */
  push32((uint32_t)(ESI));
  /* 120f2cfb push ecx */
  push32((uint32_t)(ECX));
  /* 120f2cfc call dword ptr [0x120fd10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd10c))), 0x120f2d02u);
  /* 120f2d02 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 120f2d06 mov edi, dword ptr [esp + 0x58] */
  EDI = (r32((uint32_t)(ESP + 0x58)));
  /* 120f2d0a push 9 */
  push32((uint32_t)(0x9u));
  /* 120f2d0c lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 120f2d10 push 0x12103a10 */
  push32((uint32_t)(0x12103a10u));
  /* 120f2d15 push edx */
  push32((uint32_t)(EDX));
  /* 120f2d16 push eax */
  push32((uint32_t)(EAX));
  /* 120f2d17 push edi */
  push32((uint32_t)(EDI));
  /* 120f2d18 call 0x120f29e0 */
  push32(0x120f2d1du); f_120f29e0();
  /* 120f2d1d push edi */
  push32((uint32_t)(EDI));
  /* 120f2d1e call ebp */
  call_ind((uint32_t)(EBP), 0x120f2d20u);
  /* 120f2d20 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2d25 je 0x120f2d87 */
  if (C.zf) goto L_120f2d87;
  /* 120f2d27 push esi */
  push32((uint32_t)(ESI));
  /* 120f2d28 push edi */
  push32((uint32_t)(EDI));
  /* 120f2d29 call 0x120f2b50 */
  push32(0x120f2d2eu); f_120f2b50();
  /* 120f2d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2d30 push esi */
  push32((uint32_t)(ESI));
  /* 120f2d31 call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2d37u);
  /* 120f2d37 lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 120f2d3b push ecx */
  push32((uint32_t)(ECX));
  /* 120f2d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2d3e push edi */
  push32((uint32_t)(EDI));
  /* 120f2d3f call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f2d45u);
  /* 120f2d45 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f2d49 mov ebx, dword ptr [esp + 0x6c] */
  EBX = (r32((uint32_t)(ESP + 0x6c)));
  /* 120f2d4d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f2d53 lea eax, [esi + 0x12] */
  EAX = ((uint32_t)(ESI + 0x12));
  /* 120f2d56 push edx */
  push32((uint32_t)(EDX));
  /* 120f2d57 push eax */
  push32((uint32_t)(EAX));
  /* 120f2d58 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2d59 lea ecx, [esp + 0x38] */
  ECX = ((uint32_t)(ESP + 0x38));
  /* 120f2d5d push esi */
  push32((uint32_t)(ESI));
  /* 120f2d5e push ecx */
  push32((uint32_t)(ECX));
  /* 120f2d5f call 0x120f2e30 */
  push32(0x120f2d64u); f_120f2e30();
  /* 120f2d64 push edi */
  push32((uint32_t)(EDI));
  /* 120f2d65 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2d66 call dword ptr [0x120fd110] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd110))), 0x120f2d6cu);
  /* 120f2d6c add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2d6f mov bl, 1 */
  BL = (0x1u);
  /* 120f2d71 mov byte ptr [esi + 8], bl */
  w8((uint32_t)(ESI + 0x8), (BL));
  /* 120f2d74 push edi */
  push32((uint32_t)(EDI));
  /* 120f2d75 call 0x120f23b0 */
  push32(0x120f2d7au); f_120f23b0();
  /* 120f2d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2d7d mov al, bl */
  AL = (BL);
  /* 120f2d7f pop edi */
  EDI = (pop32());
  /* 120f2d80 pop esi */
  ESI = (pop32());
  /* 120f2d81 pop ebp */
  EBP = (pop32());
  /* 120f2d82 pop ebx */
  EBX = (pop32());
  /* 120f2d83 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2d86 ret  */
  ESPCHK(0x120f2cd0u, _esp0);
  ESP += 4; return;
L_120f2d87:;
  /* 120f2d87 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 120f2d8b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 120f2d8d lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 120f2d91 push 0x12103dc0 */
  push32((uint32_t)(0x12103dc0u));
  /* 120f2d96 push edx */
  push32((uint32_t)(EDX));
  /* 120f2d97 push eax */
  push32((uint32_t)(EAX));
  /* 120f2d98 push edi */
  push32((uint32_t)(EDI));
  /* 120f2d99 call 0x120f29e0 */
  push32(0x120f2d9eu); f_120f29e0();
  /* 120f2d9e push edi */
  push32((uint32_t)(EDI));
  /* 120f2d9f call ebp */
  call_ind((uint32_t)(EBP), 0x120f2da1u);
  /* 120f2da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2da6 je 0x120f2e08 */
  if (C.zf) goto L_120f2e08;
  /* 120f2da8 push esi */
  push32((uint32_t)(ESI));
  /* 120f2da9 push edi */
  push32((uint32_t)(EDI));
  /* 120f2daa call 0x120f2b50 */
  push32(0x120f2dafu); f_120f2b50();
  /* 120f2daf push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2db1 push esi */
  push32((uint32_t)(ESI));
  /* 120f2db2 call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2db8u);
  /* 120f2db8 lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 120f2dbc push ecx */
  push32((uint32_t)(ECX));
  /* 120f2dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2dbf push esi */
  push32((uint32_t)(ESI));
  /* 120f2dc0 call dword ptr [0x120fd168] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd168))), 0x120f2dc6u);
  /* 120f2dc6 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 120f2dca mov ebx, dword ptr [esp + 0x6c] */
  EBX = (r32((uint32_t)(ESP + 0x6c)));
  /* 120f2dce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f2dd4 lea eax, [esi + 0x12] */
  EAX = ((uint32_t)(ESI + 0x12));
  /* 120f2dd7 push edx */
  push32((uint32_t)(EDX));
  /* 120f2dd8 push eax */
  push32((uint32_t)(EAX));
  /* 120f2dd9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2dda lea ecx, [esp + 0x38] */
  ECX = ((uint32_t)(ESP + 0x38));
  /* 120f2dde push edi */
  push32((uint32_t)(EDI));
  /* 120f2ddf push ecx */
  push32((uint32_t)(ECX));
  /* 120f2de0 call 0x120f2e30 */
  push32(0x120f2de5u); f_120f2e30();
  /* 120f2de5 push edi */
  push32((uint32_t)(EDI));
  /* 120f2de6 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2de7 call dword ptr [0x120fd110] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd110))), 0x120f2dedu);
  /* 120f2ded add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2df0 mov bl, 1 */
  BL = (0x1u);
  /* 120f2df2 mov byte ptr [esi + 8], bl */
  w8((uint32_t)(ESI + 0x8), (BL));
  /* 120f2df5 push edi */
  push32((uint32_t)(EDI));
  /* 120f2df6 call 0x120f23b0 */
  push32(0x120f2dfbu); f_120f23b0();
  /* 120f2dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2dfe mov al, bl */
  AL = (BL);
  /* 120f2e00 pop edi */
  EDI = (pop32());
  /* 120f2e01 pop esi */
  ESI = (pop32());
  /* 120f2e02 pop ebp */
  EBP = (pop32());
  /* 120f2e03 pop ebx */
  EBX = (pop32());
  /* 120f2e04 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2e07 ret  */
  ESPCHK(0x120f2cd0u, _esp0);
  ESP += 4; return;
L_120f2e08:;
  /* 120f2e08 push edi */
  push32((uint32_t)(EDI));
  /* 120f2e09 mov dword ptr [esi + 0x12], 0xffff */
  w32((uint32_t)(ESI + 0x12), (0xffffu));
  /* 120f2e10 call 0x120f23b0 */
  push32(0x120f2e15u); f_120f23b0();
  /* 120f2e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2e18 mov al, bl */
  AL = (BL);
  /* 120f2e1a pop edi */
  EDI = (pop32());
  /* 120f2e1b pop esi */
  ESI = (pop32());
  /* 120f2e1c pop ebp */
  EBP = (pop32());
  /* 120f2e1d pop ebx */
  EBX = (pop32());
  /* 120f2e1e add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2e21 ret  */
  ESPCHK(0x120f2cd0u, _esp0);
  ESP += 4; return;
L_120f2e22:;
  /* 120f2e22 pop esi */
  ESI = (pop32());
  /* 120f2e23 mov al, bl */
  AL = (BL);
  /* 120f2e25 pop ebp */
  EBP = (pop32());
  /* 120f2e26 pop ebx */
  EBX = (pop32());
  /* 120f2e27 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2e2a ret  */
  ESPCHK(0x120f2cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e30 @ 0x120f2e30 (51 bytes, 18 insns) */
void f_120f2e30(void) {
  FTRACE(0x120f2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2e30 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 120f2e34 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f2e38 cmp eax, dword ptr [ecx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2e3a je 0x120f2e62 */
  if (C.zf) goto L_120f2e62;
  /* 120f2e3c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120f2e3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f2e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2e44 push eax */
  push32((uint32_t)(EAX));
  /* 120f2e45 call dword ptr [0x120fd198] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd198))), 0x120f2e4bu);
  /* 120f2e4b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f2e4f mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f2e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f2e57 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2e58 push edx */
  push32((uint32_t)(EDX));
  /* 120f2e59 call dword ptr [0x120fd128] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd128))), 0x120f2e5fu);
  /* 120f2e5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f2e62:;
  /* 120f2e62 ret  */
  ESPCHK(0x120f2e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x120f2e70 (34 bytes, 15 insns) */
void f_120f2e70(void) {
  FTRACE(0x120f2e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2e70 push ecx */
  push32((uint32_t)(ECX));
  /* 120f2e71 push esi */
  push32((uint32_t)(ESI));
  /* 120f2e72 mov esi, ecx */
  ESI = (ECX);
  /* 120f2e74 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f2e77 push eax */
  push32((uint32_t)(EAX));
  /* 120f2e78 mov dword ptr [esp + 8], eax */
  w32((uint32_t)(ESP + 0x8), (EAX));
  /* 120f2e7c call 0x120f456b */
  push32(0x120f2e81u); f_120f456b();
  /* 120f2e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f2e86 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 120f2e89 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120f2e8c mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 120f2e8f pop esi */
  ESI = (pop32());
  /* 120f2e90 pop ecx */
  ECX = (pop32());
  /* 120f2e91 ret  */
  ESPCHK(0x120f2e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea0 @ 0x120f2ea0 (521 bytes, 216 insns) */
void f_120f2ea0(void) {
  FTRACE(0x120f2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f2ea0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2ea3 push ebx */
  push32((uint32_t)(EBX));
  /* 120f2ea4 push ebp */
  push32((uint32_t)(EBP));
  /* 120f2ea5 push esi */
  push32((uint32_t)(ESI));
  /* 120f2ea6 push edi */
  push32((uint32_t)(EDI));
  /* 120f2ea7 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 120f2eab mov edi, ecx */
  EDI = (ECX);
  /* 120f2ead mov dword ptr [esp + 0x10], edi */
  w32((uint32_t)(ESP + 0x10), (EDI));
  /* 120f2eb1 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f2eb4 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 120f2eb7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2eb9 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f2ebc cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2ebe jae 0x120f2fca */
  if (!C.cf) goto L_120f2fca;
  /* 120f2ec4 mov edx, dword ptr [edi + 4] */
  EDX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f2ec7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f2ec9 je 0x120f2ed6 */
  if (C.zf) goto L_120f2ed6;
  /* 120f2ecb mov ecx, eax */
  ECX = (EAX);
  /* 120f2ecd sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2ecf sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f2ed2 cmp ebp, ecx */
  { uint32_t _a=(EBP),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2ed4 jb 0x120f2ed8 */
  if (C.cf) goto L_120f2ed8;
L_120f2ed6:;
  /* 120f2ed6 mov ecx, ebp */
  ECX = (EBP);
L_120f2ed8:;
  /* 120f2ed8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f2eda jne 0x120f2ee0 */
  if (!C.zf) goto L_120f2ee0;
  /* 120f2edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f2ede jmp 0x120f2ee5 */
  goto L_120f2ee5;
L_120f2ee0:;
  /* 120f2ee0 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2ee2 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_120f2ee5:;
  /* 120f2ee5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2ee9 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 120f2eed jge 0x120f2ef1 */
  if ((C.sf==C.of)) goto L_120f2ef1;
  /* 120f2eef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f2ef1:;
  /* 120f2ef1 lea edx, [eax*4] */
  EDX = ((uint32_t)(EAX*4));
  /* 120f2ef8 push edx */
  push32((uint32_t)(EDX));
  /* 120f2ef9 call 0x120f494a */
  push32(0x120f2efeu); f_120f494a();
  /* 120f2efe mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 120f2f02 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 120f2f06 mov ecx, eax */
  ECX = (EAX);
  /* 120f2f08 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f2f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f0e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2f10 je 0x120f2f24 */
  if (C.zf) goto L_120f2f24;
L_120f2f12:;
  /* 120f2f12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f2f14 je 0x120f2f1a */
  if (C.zf) goto L_120f2f1a;
  /* 120f2f16 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120f2f18 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_120f2f1a:;
  /* 120f2f1a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f20 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2f22 jne 0x120f2f12 */
  if (!C.zf) goto L_120f2f12;
L_120f2f24:;
  /* 120f2f24 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 120f2f26 mov eax, ecx */
  EAX = (ECX);
  /* 120f2f28 jbe 0x120f2f42 */
  if ((C.cf||C.zf)) goto L_120f2f42;
  /* 120f2f2a mov esi, dword ptr [esp + 0x24] */
  ESI = (r32((uint32_t)(ESP + 0x24)));
  /* 120f2f2e mov edx, ebp */
  EDX = (EBP);
L_120f2f30:;
  /* 120f2f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f2f32 je 0x120f2f3c */
  if (C.zf) goto L_120f2f3c;
  /* 120f2f34 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 120f2f36 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 120f2f38 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_120f2f3c:;
  /* 120f2f3c add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f3f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f2f40 jne 0x120f2f30 */
  if (!C.zf) goto L_120f2f30;
L_120f2f42:;
  /* 120f2f42 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 120f2f45 lea esi, [ebp*4] */
  ESI = ((uint32_t)(EBP*4));
  /* 120f2f4c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2f4e lea edx, [esi + ecx] */
  EDX = ((uint32_t)(ESI + ECX*1));
  /* 120f2f51 je 0x120f2f6d */
  if (C.zf) goto L_120f2f6d;
  /* 120f2f53 mov eax, edx */
  EAX = (EDX);
  /* 120f2f55 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2f57 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2f59 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120f2f5b:;
  /* 120f2f5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f2f5d je 0x120f2f63 */
  if (C.zf) goto L_120f2f63;
  /* 120f2f5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120f2f61 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120f2f63:;
  /* 120f2f63 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f66 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f69 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2f6b jne 0x120f2f5b */
  if (!C.zf) goto L_120f2f5b;
L_120f2f6d:;
  /* 120f2f6d mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 120f2f71 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f2f74 push eax */
  push32((uint32_t)(EAX));
  /* 120f2f75 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 120f2f79 call 0x120f456b */
  push32(0x120f2f7eu); f_120f456b();
  /* 120f2f7e mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 120f2f82 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 120f2f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2f89 lea ecx, [edx + eax*4] */
  ECX = ((uint32_t)(EDX + EAX*4));
  /* 120f2f8c mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 120f2f8f mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f2f92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f2f94 jne 0x120f2fad */
  if (!C.zf) goto L_120f2fad;
  /* 120f2f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f2f98 mov dword ptr [esi + 4], edx */
  w32((uint32_t)(ESI + 0x4), (EDX));
  /* 120f2f9b mov eax, ebp */
  EAX = (EBP);
  /* 120f2f9d pop edi */
  EDI = (pop32());
  /* 120f2f9e lea eax, [edx + eax*4] */
  EAX = ((uint32_t)(EDX + EAX*4));
  /* 120f2fa1 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120f2fa4 pop esi */
  ESI = (pop32());
  /* 120f2fa5 pop ebp */
  EBP = (pop32());
  /* 120f2fa6 pop ebx */
  EBX = (pop32());
  /* 120f2fa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2faa ret 0xc */
  ESPCHK(0x120f2ea0u, _esp0);
  ESP += 16; return;
L_120f2fad:;
  /* 120f2fad mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 120f2fb0 mov dword ptr [esi + 4], edx */
  w32((uint32_t)(ESI + 0x4), (EDX));
  /* 120f2fb3 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2fb5 pop edi */
  EDI = (pop32());
  /* 120f2fb6 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120f2fb9 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2fbb lea eax, [edx + eax*4] */
  EAX = ((uint32_t)(EDX + EAX*4));
  /* 120f2fbe mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120f2fc1 pop esi */
  ESI = (pop32());
  /* 120f2fc2 pop ebp */
  EBP = (pop32());
  /* 120f2fc3 pop ebx */
  EBX = (pop32());
  /* 120f2fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2fc7 ret 0xc */
  ESPCHK(0x120f2ea0u, _esp0);
  ESP += 16; return;
L_120f2fca:;
  /* 120f2fca mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 120f2fce mov ecx, eax */
  ECX = (EAX);
  /* 120f2fd0 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f2fd2 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f2fd5 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2fd7 jae 0x120f3047 */
  if (!C.cf) goto L_120f3047;
  /* 120f2fd9 lea ebx, [ebp*4] */
  EBX = ((uint32_t)(EBP*4));
  /* 120f2fe0 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2fe2 lea esi, [ebx + edx] */
  ESI = ((uint32_t)(EBX + EDX*1));
  /* 120f2fe5 je 0x120f3001 */
  if (C.zf) goto L_120f3001;
  /* 120f2fe7 mov ecx, esi */
  ECX = (ESI);
  /* 120f2fe9 sub ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_120f2feb:;
  /* 120f2feb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f2fed je 0x120f2ff7 */
  if (C.zf) goto L_120f2ff7;
  /* 120f2fef mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 120f2ff1 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 120f2ff3 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_120f2ff7:;
  /* 120f2ff7 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2ffa add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f2ffd cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f2fff jne 0x120f2feb */
  if (!C.zf) goto L_120f2feb;
L_120f3001:;
  /* 120f3001 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f3004 mov esi, dword ptr [esp + 0x24] */
  ESI = (r32((uint32_t)(ESP + 0x24)));
  /* 120f3008 mov ecx, eax */
  ECX = (EAX);
  /* 120f300a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f300c sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f300f sub ebp, ecx */
  { uint32_t _a=(EBP),_b=(ECX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f3011 je 0x120f3021 */
  if (C.zf) goto L_120f3021;
L_120f3013:;
  /* 120f3013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f3015 je 0x120f301b */
  if (C.zf) goto L_120f301b;
  /* 120f3017 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 120f3019 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_120f301b:;
  /* 120f301b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f301e dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 120f301f jne 0x120f3013 */
  if (!C.zf) goto L_120f3013;
L_120f3021:;
  /* 120f3021 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f3024 mov eax, edx */
  EAX = (EDX);
  /* 120f3026 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f3028 je 0x120f3035 */
  if (C.zf) goto L_120f3035;
L_120f302a:;
  /* 120f302a mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 120f302c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120f302e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3031 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f3033 jne 0x120f302a */
  if (!C.zf) goto L_120f302a;
L_120f3035:;
  /* 120f3035 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f3038 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f303a mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 120f303d pop edi */
  EDI = (pop32());
  /* 120f303e pop esi */
  ESI = (pop32());
  /* 120f303f pop ebp */
  EBP = (pop32());
  /* 120f3040 pop ebx */
  EBX = (pop32());
  /* 120f3041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3044 ret 0xc */
  ESPCHK(0x120f2ea0u, _esp0);
  ESP += 16; return;
L_120f3047:;
  /* 120f3047 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 120f3049 jbe 0x120f309f */
  if ((C.cf||C.zf)) goto L_120f309f;
  /* 120f304b shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 120f304e mov ecx, eax */
  ECX = (EAX);
  /* 120f3050 mov esi, eax */
  ESI = (EAX);
  /* 120f3052 sub ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f3054 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f3056 je 0x120f306a */
  if (C.zf) goto L_120f306a;
L_120f3058:;
  /* 120f3058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f305a je 0x120f3060 */
  if (C.zf) goto L_120f3060;
  /* 120f305c mov ebx, dword ptr [ecx] */
  EBX = (r32((uint32_t)(ECX)));
  /* 120f305e mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
L_120f3060:;
  /* 120f3060 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3063 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3066 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f3068 jne 0x120f3058 */
  if (!C.zf) goto L_120f3058;
L_120f306a:;
  /* 120f306a mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f306d mov eax, ecx */
  EAX = (ECX);
  /* 120f306f sub eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f3071 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f3073 je 0x120f3084 */
  if (C.zf) goto L_120f3084;
L_120f3075:;
  /* 120f3075 mov esi, dword ptr [eax - 4] */
  ESI = (r32((uint32_t)(EAX + -0x4)));
  /* 120f3078 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f307b sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f307e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f3080 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 120f3082 jne 0x120f3075 */
  if (!C.zf) goto L_120f3075;
L_120f3084:;
  /* 120f3084 lea ecx, [edx + ebp] */
  ECX = ((uint32_t)(EDX + EBP*1));
  /* 120f3087 mov eax, edx */
  EAX = (EDX);
  /* 120f3089 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f308b je 0x120f309c */
  if (C.zf) goto L_120f309c;
  /* 120f308d mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
L_120f3091:;
  /* 120f3091 mov esi, dword ptr [edx] */
  ESI = (r32((uint32_t)(EDX)));
  /* 120f3093 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 120f3095 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3098 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f309a jne 0x120f3091 */
  if (!C.zf) goto L_120f3091;
L_120f309c:;
  /* 120f309c add dword ptr [edi + 8], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x8))),_b=(EBP),_r=_a+_b; w32((uint32_t)(EDI + 0x8), (_r)); fl_add(_a,_b,_r,32); }
L_120f309f:;
  /* 120f309f pop edi */
  EDI = (pop32());
  /* 120f30a0 pop esi */
  ESI = (pop32());
  /* 120f30a1 pop ebp */
  EBP = (pop32());
  /* 120f30a2 pop ebx */
  EBX = (pop32());
  /* 120f30a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f30a6 ret 0xc */
  ESPCHK(0x120f2ea0u, _esp0);
  ESP += 16; return;
}

/* FUN_100030b0 @ 0x120f30b0 (61 bytes, 32 insns) */
void f_120f30b0(void) {
  FTRACE(0x120f30b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f30b0 push ebx */
  push32((uint32_t)(EBX));
  /* 120f30b1 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f30b5 push ebp */
  push32((uint32_t)(EBP));
  /* 120f30b6 push esi */
  push32((uint32_t)(ESI));
  /* 120f30b7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f30b9 push edi */
  push32((uint32_t)(EDI));
  /* 120f30ba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f30bc jle 0x120f30da */
  if ((C.zf||C.sf!=C.of)) goto L_120f30da;
  /* 120f30be mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 120f30c2 mov ebp, dword ptr [0x120fd170] */
  EBP = (r32((uint32_t)(0x120fd170)));
L_120f30c8:;
  /* 120f30c8 push edi */
  push32((uint32_t)(EDI));
  /* 120f30c9 call ebp */
  call_ind((uint32_t)(EBP), 0x120f30cbu);
  /* 120f30cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f30ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f30d0 je 0x120f30e1 */
  if (C.zf) goto L_120f30e1;
  /* 120f30d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f30d3 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f30d6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f30d8 jl 0x120f30c8 */
  if ((C.sf!=C.of)) goto L_120f30c8;
L_120f30da:;
  /* 120f30da pop edi */
  EDI = (pop32());
  /* 120f30db pop esi */
  ESI = (pop32());
  /* 120f30dc pop ebp */
  EBP = (pop32());
  /* 120f30dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f30df pop ebx */
  EBX = (pop32());
  /* 120f30e0 ret  */
  ESPCHK(0x120f30b0u, _esp0);
  ESP += 4; return;
L_120f30e1:;
  /* 120f30e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f30e5 pop edi */
  EDI = (pop32());
  /* 120f30e6 lea eax, [eax + esi*8] */
  EAX = ((uint32_t)(EAX + ESI*8));
  /* 120f30e9 pop esi */
  ESI = (pop32());
  /* 120f30ea pop ebp */
  EBP = (pop32());
  /* 120f30eb pop ebx */
  EBX = (pop32());
  /* 120f30ec ret  */
  ESPCHK(0x120f30b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x120f30f0 (414 bytes, 148 insns) [1 switch table(s)] */
void f_120f30f0(void) {
  FTRACE(0x120f30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f30f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f30f4 push esi */
  push32((uint32_t)(ESI));
  /* 120f30f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f30fa push edi */
  push32((uint32_t)(EDI));
  /* 120f30fb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f30fe mov esi, ecx */
  ESI = (ECX);
  /* 120f3100 ja 0x120f3289 */
  if ((!C.cf&&!C.zf)) goto L_120f3289;
  /* 120f3106 jmp dword ptr [eax*4 + 0x120f3290] */
  switch (EAX) {
    case 0: goto L_120f310d;
    case 1: goto L_120f315a;
    case 2: goto L_120f31a7;
    case 3: goto L_120f31f4;
    case 4: goto L_120f3241;
    default: x86_unimpl("switch@0x120f3106 out of table"); return;
  }
L_120f310d:;
  /* 120f310d mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3113 push 0x120ff500 */
  push32((uint32_t)(0x120ff500u));
  /* 120f3118 push esi */
  push32((uint32_t)(ESI));
  /* 120f3119 call edi */
  call_ind((uint32_t)(EDI), 0x120f311bu);
  /* 120f311b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f311e push 0x120ff4e8 */
  push32((uint32_t)(0x120ff4e8u));
  /* 120f3123 push eax */
  push32((uint32_t)(EAX));
  /* 120f3124 call edi */
  call_ind((uint32_t)(EDI), 0x120f3126u);
  /* 120f3126 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f3129 push 0x120ff4d0 */
  push32((uint32_t)(0x120ff4d0u));
  /* 120f312e push ecx */
  push32((uint32_t)(ECX));
  /* 120f312f call edi */
  call_ind((uint32_t)(EDI), 0x120f3131u);
  /* 120f3131 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f3134 push 0x120ff4bc */
  push32((uint32_t)(0x120ff4bcu));
  /* 120f3139 push edx */
  push32((uint32_t)(EDX));
  /* 120f313a call edi */
  call_ind((uint32_t)(EDI), 0x120f313cu);
  /* 120f313c lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f313f push 0x120ff4a4 */
  push32((uint32_t)(0x120ff4a4u));
  /* 120f3144 push eax */
  push32((uint32_t)(EAX));
  /* 120f3145 call edi */
  call_ind((uint32_t)(EDI), 0x120f3147u);
  /* 120f3147 add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f314a push 0x120ff490 */
  push32((uint32_t)(0x120ff490u));
  /* 120f314f push esi */
  push32((uint32_t)(ESI));
  /* 120f3150 call edi */
  call_ind((uint32_t)(EDI), 0x120f3152u);
  /* 120f3152 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3155 pop edi */
  EDI = (pop32());
  /* 120f3156 pop esi */
  ESI = (pop32());
  /* 120f3157 ret 4 */
  ESPCHK(0x120f30f0u, _esp0);
  ESP += 8; return;
L_120f315a:;
  /* 120f315a mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3160 push 0x120ff474 */
  push32((uint32_t)(0x120ff474u));
  /* 120f3165 push esi */
  push32((uint32_t)(ESI));
  /* 120f3166 call edi */
  call_ind((uint32_t)(EDI), 0x120f3168u);
  /* 120f3168 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f316b push 0x120ff45c */
  push32((uint32_t)(0x120ff45cu));
  /* 120f3170 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3171 call edi */
  call_ind((uint32_t)(EDI), 0x120f3173u);
  /* 120f3173 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f3176 push 0x120ff444 */
  push32((uint32_t)(0x120ff444u));
  /* 120f317b push edx */
  push32((uint32_t)(EDX));
  /* 120f317c call edi */
  call_ind((uint32_t)(EDI), 0x120f317eu);
  /* 120f317e lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3181 push 0x120ff430 */
  push32((uint32_t)(0x120ff430u));
  /* 120f3186 push eax */
  push32((uint32_t)(EAX));
  /* 120f3187 call edi */
  call_ind((uint32_t)(EDI), 0x120f3189u);
  /* 120f3189 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f318c push 0x120ff418 */
  push32((uint32_t)(0x120ff418u));
  /* 120f3191 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3192 call edi */
  call_ind((uint32_t)(EDI), 0x120f3194u);
  /* 120f3194 add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3197 push 0x120ff404 */
  push32((uint32_t)(0x120ff404u));
  /* 120f319c push esi */
  push32((uint32_t)(ESI));
  /* 120f319d call edi */
  call_ind((uint32_t)(EDI), 0x120f319fu);
  /* 120f319f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f31a2 pop edi */
  EDI = (pop32());
  /* 120f31a3 pop esi */
  ESI = (pop32());
  /* 120f31a4 ret 4 */
  ESPCHK(0x120f30f0u, _esp0);
  ESP += 8; return;
L_120f31a7:;
  /* 120f31a7 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f31ad push 0x120ff3e8 */
  push32((uint32_t)(0x120ff3e8u));
  /* 120f31b2 push esi */
  push32((uint32_t)(ESI));
  /* 120f31b3 call edi */
  call_ind((uint32_t)(EDI), 0x120f31b5u);
  /* 120f31b5 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f31b8 push 0x120ff3d0 */
  push32((uint32_t)(0x120ff3d0u));
  /* 120f31bd push edx */
  push32((uint32_t)(EDX));
  /* 120f31be call edi */
  call_ind((uint32_t)(EDI), 0x120f31c0u);
  /* 120f31c0 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f31c3 push 0x120ff3b8 */
  push32((uint32_t)(0x120ff3b8u));
  /* 120f31c8 push eax */
  push32((uint32_t)(EAX));
  /* 120f31c9 call edi */
  call_ind((uint32_t)(EDI), 0x120f31cbu);
  /* 120f31cb lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f31ce push 0x120ff3a4 */
  push32((uint32_t)(0x120ff3a4u));
  /* 120f31d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120f31d4 call edi */
  call_ind((uint32_t)(EDI), 0x120f31d6u);
  /* 120f31d6 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f31d9 push 0x120ff38c */
  push32((uint32_t)(0x120ff38cu));
  /* 120f31de push edx */
  push32((uint32_t)(EDX));
  /* 120f31df call edi */
  call_ind((uint32_t)(EDI), 0x120f31e1u);
  /* 120f31e1 add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f31e4 push 0x120ff378 */
  push32((uint32_t)(0x120ff378u));
  /* 120f31e9 push esi */
  push32((uint32_t)(ESI));
  /* 120f31ea call edi */
  call_ind((uint32_t)(EDI), 0x120f31ecu);
  /* 120f31ec add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f31ef pop edi */
  EDI = (pop32());
  /* 120f31f0 pop esi */
  ESI = (pop32());
  /* 120f31f1 ret 4 */
  ESPCHK(0x120f30f0u, _esp0);
  ESP += 8; return;
L_120f31f4:;
  /* 120f31f4 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f31fa push 0x120ff35c */
  push32((uint32_t)(0x120ff35cu));
  /* 120f31ff push esi */
  push32((uint32_t)(ESI));
  /* 120f3200 call edi */
  call_ind((uint32_t)(EDI), 0x120f3202u);
  /* 120f3202 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f3205 push 0x120ff344 */
  push32((uint32_t)(0x120ff344u));
  /* 120f320a push eax */
  push32((uint32_t)(EAX));
  /* 120f320b call edi */
  call_ind((uint32_t)(EDI), 0x120f320du);
  /* 120f320d lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f3210 push 0x120ff32c */
  push32((uint32_t)(0x120ff32cu));
  /* 120f3215 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3216 call edi */
  call_ind((uint32_t)(EDI), 0x120f3218u);
  /* 120f3218 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f321b push 0x120ff318 */
  push32((uint32_t)(0x120ff318u));
  /* 120f3220 push edx */
  push32((uint32_t)(EDX));
  /* 120f3221 call edi */
  call_ind((uint32_t)(EDI), 0x120f3223u);
  /* 120f3223 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f3226 push 0x120ff300 */
  push32((uint32_t)(0x120ff300u));
  /* 120f322b push eax */
  push32((uint32_t)(EAX));
  /* 120f322c call edi */
  call_ind((uint32_t)(EDI), 0x120f322eu);
  /* 120f322e add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3231 push 0x120ff2ec */
  push32((uint32_t)(0x120ff2ecu));
  /* 120f3236 push esi */
  push32((uint32_t)(ESI));
  /* 120f3237 call edi */
  call_ind((uint32_t)(EDI), 0x120f3239u);
  /* 120f3239 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f323c pop edi */
  EDI = (pop32());
  /* 120f323d pop esi */
  ESI = (pop32());
  /* 120f323e ret 4 */
  ESPCHK(0x120f30f0u, _esp0);
  ESP += 8; return;
L_120f3241:;
  /* 120f3241 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3247 push 0x120ff2d0 */
  push32((uint32_t)(0x120ff2d0u));
  /* 120f324c push esi */
  push32((uint32_t)(ESI));
  /* 120f324d call edi */
  call_ind((uint32_t)(EDI), 0x120f324fu);
  /* 120f324f lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f3252 push 0x120ff2b8 */
  push32((uint32_t)(0x120ff2b8u));
  /* 120f3257 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3258 call edi */
  call_ind((uint32_t)(EDI), 0x120f325au);
  /* 120f325a lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f325d push 0x120ff2a0 */
  push32((uint32_t)(0x120ff2a0u));
  /* 120f3262 push edx */
  push32((uint32_t)(EDX));
  /* 120f3263 call edi */
  call_ind((uint32_t)(EDI), 0x120f3265u);
  /* 120f3265 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3268 push 0x120ff28c */
  push32((uint32_t)(0x120ff28cu));
  /* 120f326d push eax */
  push32((uint32_t)(EAX));
  /* 120f326e call edi */
  call_ind((uint32_t)(EDI), 0x120f3270u);
  /* 120f3270 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f3273 push 0x120ff274 */
  push32((uint32_t)(0x120ff274u));
  /* 120f3278 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3279 call edi */
  call_ind((uint32_t)(EDI), 0x120f327bu);
  /* 120f327b add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f327e push 0x120ff260 */
  push32((uint32_t)(0x120ff260u));
  /* 120f3283 push esi */
  push32((uint32_t)(ESI));
  /* 120f3284 call edi */
  call_ind((uint32_t)(EDI), 0x120f3286u);
  /* 120f3286 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f3289:;
  /* 120f3289 pop edi */
  EDI = (pop32());
  /* 120f328a pop esi */
  ESI = (pop32());
  /* 120f328b ret 4 */
  ESPCHK(0x120f30f0u, _esp0);
  ESP += 8; return;
}

/* FUN_100032b0 @ 0x120f32b0 (53 bytes, 17 insns) [1 switch table(s)] */
void f_120f32b0(void) {
  FTRACE(0x120f32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f32b0 mov eax, ecx */
  EAX = (ECX);
  /* 120f32b2 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f32b6 cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f32b9 ja 0x120f32e0 */
  if ((!C.cf&&!C.zf)) goto L_120f32e0;
  /* 120f32bb jmp dword ptr [ecx*4 + 0x120f32e8] */
  switch (ECX) {
    case 0: goto L_120f32e2;
    case 1: goto L_120f32c2;
    case 2: goto L_120f32c8;
    case 3: goto L_120f32ce;
    case 4: goto L_120f32d4;
    case 5: goto L_120f32da;
    default: x86_unimpl("switch@0x120f32bb out of table"); return;
  }
L_120f32c2:;
  /* 120f32c2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f32c5 ret 4 */
  ESPCHK(0x120f32b0u, _esp0);
  ESP += 8; return;
L_120f32c8:;
  /* 120f32c8 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f32cb ret 4 */
  ESPCHK(0x120f32b0u, _esp0);
  ESP += 8; return;
L_120f32ce:;
  /* 120f32ce add eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f32d1 ret 4 */
  ESPCHK(0x120f32b0u, _esp0);
  ESP += 8; return;
L_120f32d4:;
  /* 120f32d4 add eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f32d7 ret 4 */
  ESPCHK(0x120f32b0u, _esp0);
  ESP += 8; return;
L_120f32da:;
  /* 120f32da add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f32dd ret 4 */
  ESPCHK(0x120f32b0u, _esp0);
  ESP += 8; return;
L_120f32e0:;
  /* 120f32e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f32e2:;
  /* 120f32e2 ret 4 */
  ESPCHK(0x120f32b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003300 @ 0x120f3300 (3949 bytes, 1403 insns) [1 switch table(s)] */
void f_120f3300(void) {
  FTRACE(0x120f3300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f3300 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3304 push esi */
  push32((uint32_t)(ESI));
  /* 120f3305 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f330a push edi */
  push32((uint32_t)(EDI));
  /* 120f330b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f330c cmp eax, 0x11 */
  { uint32_t _a=(EAX),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f330f ja 0x120f426a */
  if ((!C.cf&&!C.zf)) goto L_120f426a;
  /* 120f3315 jmp dword ptr [eax*4 + 0x120f4270] */
  switch (EAX) {
    case 0: goto L_120f331c;
    case 1: goto L_120f33fb;
    case 2: goto L_120f34da;
    case 3: goto L_120f35b9;
    case 4: goto L_120f3679;
    case 5: goto L_120f3758;
    case 6: goto L_120f3837;
    case 7: goto L_120f3916;
    case 8: goto L_120f39f5;
    case 9: goto L_120f3ad4;
    case 10: goto L_120f3bb3;
    case 11: goto L_120f3c92;
    case 12: goto L_120f3d71;
    case 13: goto L_120f3e50;
    case 14: goto L_120f3f2f;
    case 15: goto L_120f400e;
    case 16: goto L_120f40ce;
    case 17: goto L_120f418e;
    default: x86_unimpl("switch@0x120f3315 out of table"); return;
  }
L_120f331c:;
  /* 120f331c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3320 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3326 push 0x121008a8 */
  push32((uint32_t)(0x121008a8u));
  /* 120f332b push esi */
  push32((uint32_t)(ESI));
  /* 120f332c call edi */
  call_ind((uint32_t)(EDI), 0x120f332eu);
  /* 120f332e lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f3331 push 0x12100898 */
  push32((uint32_t)(0x12100898u));
  /* 120f3336 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3337 call edi */
  call_ind((uint32_t)(EDI), 0x120f3339u);
  /* 120f3339 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f333c push 0x1210088c */
  push32((uint32_t)(0x1210088cu));
  /* 120f3341 push edx */
  push32((uint32_t)(EDX));
  /* 120f3342 call edi */
  call_ind((uint32_t)(EDI), 0x120f3344u);
  /* 120f3344 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3347 push 0x12100880 */
  push32((uint32_t)(0x12100880u));
  /* 120f334c push eax */
  push32((uint32_t)(EAX));
  /* 120f334d call edi */
  call_ind((uint32_t)(EDI), 0x120f334fu);
  /* 120f334f lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f3352 push 0x12100874 */
  push32((uint32_t)(0x12100874u));
  /* 120f3357 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3358 call edi */
  call_ind((uint32_t)(EDI), 0x120f335au);
  /* 120f335a lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f335d push 0x12100864 */
  push32((uint32_t)(0x12100864u));
  /* 120f3362 push edx */
  push32((uint32_t)(EDX));
  /* 120f3363 call edi */
  call_ind((uint32_t)(EDI), 0x120f3365u);
  /* 120f3365 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f3368 push 0x12100854 */
  push32((uint32_t)(0x12100854u));
  /* 120f336d push eax */
  push32((uint32_t)(EAX));
  /* 120f336e call edi */
  call_ind((uint32_t)(EDI), 0x120f3370u);
  /* 120f3370 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f3373 push 0x12100848 */
  push32((uint32_t)(0x12100848u));
  /* 120f3378 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3379 call edi */
  call_ind((uint32_t)(EDI), 0x120f337bu);
  /* 120f337b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f337e lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f3381 push 0x12100830 */
  push32((uint32_t)(0x12100830u));
  /* 120f3386 push edx */
  push32((uint32_t)(EDX));
  /* 120f3387 call edi */
  call_ind((uint32_t)(EDI), 0x120f3389u);
  /* 120f3389 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f338c push 0x1210081c */
  push32((uint32_t)(0x1210081cu));
  /* 120f3391 push eax */
  push32((uint32_t)(EAX));
  /* 120f3392 call edi */
  call_ind((uint32_t)(EDI), 0x120f3394u);
  /* 120f3394 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f3397 push 0x1210080c */
  push32((uint32_t)(0x1210080cu));
  /* 120f339c push ecx */
  push32((uint32_t)(ECX));
  /* 120f339d call edi */
  call_ind((uint32_t)(EDI), 0x120f339fu);
  /* 120f339f lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f33a2 push 0x121007fc */
  push32((uint32_t)(0x121007fcu));
  /* 120f33a7 push edx */
  push32((uint32_t)(EDX));
  /* 120f33a8 call edi */
  call_ind((uint32_t)(EDI), 0x120f33aau);
  /* 120f33aa lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f33ad push 0x121007e8 */
  push32((uint32_t)(0x121007e8u));
  /* 120f33b2 push eax */
  push32((uint32_t)(EAX));
  /* 120f33b3 call edi */
  call_ind((uint32_t)(EDI), 0x120f33b5u);
  /* 120f33b5 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f33b8 push 0x121007dc */
  push32((uint32_t)(0x121007dcu));
  /* 120f33bd push ecx */
  push32((uint32_t)(ECX));
  /* 120f33be call edi */
  call_ind((uint32_t)(EDI), 0x120f33c0u);
  /* 120f33c0 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f33c3 push 0x121007c8 */
  push32((uint32_t)(0x121007c8u));
  /* 120f33c8 push edx */
  push32((uint32_t)(EDX));
  /* 120f33c9 call edi */
  call_ind((uint32_t)(EDI), 0x120f33cbu);
  /* 120f33cb lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 120f33ce push 0x121007bc */
  push32((uint32_t)(0x121007bcu));
  /* 120f33d3 push eax */
  push32((uint32_t)(EAX));
  /* 120f33d4 call edi */
  call_ind((uint32_t)(EDI), 0x120f33d6u);
  /* 120f33d6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f33d9 lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 120f33df push 0x121007b0 */
  push32((uint32_t)(0x121007b0u));
  /* 120f33e4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f33e5 call edi */
  call_ind((uint32_t)(EDI), 0x120f33e7u);
  /* 120f33e7 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f33ed push 0x121007a4 */
  push32((uint32_t)(0x121007a4u));
  /* 120f33f2 push esi */
  push32((uint32_t)(ESI));
  /* 120f33f3 call edi */
  call_ind((uint32_t)(EDI), 0x120f33f5u);
  /* 120f33f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f33f8 pop edi */
  EDI = (pop32());
  /* 120f33f9 pop esi */
  ESI = (pop32());
  /* 120f33fa ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f33fb:;
  /* 120f33fb mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f33ff mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3405 push 0x12100798 */
  push32((uint32_t)(0x12100798u));
  /* 120f340a push esi */
  push32((uint32_t)(ESI));
  /* 120f340b call edi */
  call_ind((uint32_t)(EDI), 0x120f340du);
  /* 120f340d lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f3410 push 0x12100788 */
  push32((uint32_t)(0x12100788u));
  /* 120f3415 push edx */
  push32((uint32_t)(EDX));
  /* 120f3416 call edi */
  call_ind((uint32_t)(EDI), 0x120f3418u);
  /* 120f3418 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f341b push 0x1210077c */
  push32((uint32_t)(0x1210077cu));
  /* 120f3420 push eax */
  push32((uint32_t)(EAX));
  /* 120f3421 call edi */
  call_ind((uint32_t)(EDI), 0x120f3423u);
  /* 120f3423 lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f3426 push 0x12100770 */
  push32((uint32_t)(0x12100770u));
  /* 120f342b push ecx */
  push32((uint32_t)(ECX));
  /* 120f342c call edi */
  call_ind((uint32_t)(EDI), 0x120f342eu);
  /* 120f342e lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f3431 push 0x12100764 */
  push32((uint32_t)(0x12100764u));
  /* 120f3436 push edx */
  push32((uint32_t)(EDX));
  /* 120f3437 call edi */
  call_ind((uint32_t)(EDI), 0x120f3439u);
  /* 120f3439 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 120f343c push 0x12100754 */
  push32((uint32_t)(0x12100754u));
  /* 120f3441 push eax */
  push32((uint32_t)(EAX));
  /* 120f3442 call edi */
  call_ind((uint32_t)(EDI), 0x120f3444u);
  /* 120f3444 lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 120f3447 push 0x12100744 */
  push32((uint32_t)(0x12100744u));
  /* 120f344c push ecx */
  push32((uint32_t)(ECX));
  /* 120f344d call edi */
  call_ind((uint32_t)(EDI), 0x120f344fu);
  /* 120f344f lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 120f3452 push 0x12100738 */
  push32((uint32_t)(0x12100738u));
  /* 120f3457 push edx */
  push32((uint32_t)(EDX));
  /* 120f3458 call edi */
  call_ind((uint32_t)(EDI), 0x120f345au);
  /* 120f345a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f345d lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 120f3460 push 0x12100720 */
  push32((uint32_t)(0x12100720u));
  /* 120f3465 push eax */
  push32((uint32_t)(EAX));
  /* 120f3466 call edi */
  call_ind((uint32_t)(EDI), 0x120f3468u);
  /* 120f3468 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 120f346b push 0x1210070c */
  push32((uint32_t)(0x1210070cu));
  /* 120f3470 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3471 call edi */
  call_ind((uint32_t)(EDI), 0x120f3473u);
  /* 120f3473 lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 120f3476 push 0x121006fc */
  push32((uint32_t)(0x121006fcu));
  /* 120f347b push edx */
  push32((uint32_t)(EDX));
  /* 120f347c call edi */
  call_ind((uint32_t)(EDI), 0x120f347eu);
  /* 120f347e lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 120f3481 push 0x121006ec */
  push32((uint32_t)(0x121006ecu));
  /* 120f3486 push eax */
  push32((uint32_t)(EAX));
  /* 120f3487 call edi */
  call_ind((uint32_t)(EDI), 0x120f3489u);
  /* 120f3489 lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 120f348c push 0x121006d8 */
  push32((uint32_t)(0x121006d8u));
  /* 120f3491 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3492 call edi */
  call_ind((uint32_t)(EDI), 0x120f3494u);
  /* 120f3494 lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 120f3497 push 0x121006cc */
  push32((uint32_t)(0x121006ccu));
  /* 120f349c push edx */
  push32((uint32_t)(EDX));
  /* 120f349d call edi */
  call_ind((uint32_t)(EDI), 0x120f349fu);
  /* 120f349f lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 120f34a2 push 0x121006b8 */
  push32((uint32_t)(0x121006b8u));
  /* 120f34a7 push eax */
  push32((uint32_t)(EAX));
  /* 120f34a8 call edi */
  call_ind((uint32_t)(EDI), 0x120f34aau);
  /* 120f34aa lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 120f34ad push 0x121006ac */
  push32((uint32_t)(0x121006acu));
  /* 120f34b2 push ecx */
  push32((uint32_t)(ECX));
  /* 120f34b3 call edi */
  call_ind((uint32_t)(EDI), 0x120f34b5u);
  /* 120f34b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f34b8 lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 120f34be push 0x121006a0 */
  push32((uint32_t)(0x121006a0u));
  /* 120f34c3 push edx */
  push32((uint32_t)(EDX));
  /* 120f34c4 call edi */
  call_ind((uint32_t)(EDI), 0x120f34c6u);
  /* 120f34c6 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f34cc push 0x12100694 */
  push32((uint32_t)(0x12100694u));
  /* 120f34d1 push esi */
  push32((uint32_t)(ESI));
  /* 120f34d2 call edi */
  call_ind((uint32_t)(EDI), 0x120f34d4u);
  /* 120f34d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f34d7 pop edi */
  EDI = (pop32());
  /* 120f34d8 pop esi */
  ESI = (pop32());
  /* 120f34d9 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f34da:;
  /* 120f34da mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f34de mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f34e4 push 0x12100680 */
  push32((uint32_t)(0x12100680u));
  /* 120f34e9 push esi */
  push32((uint32_t)(ESI));
  /* 120f34ea call edi */
  call_ind((uint32_t)(EDI), 0x120f34ecu);
  /* 120f34ec lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f34ef push 0x12100670 */
  push32((uint32_t)(0x12100670u));
  /* 120f34f4 push eax */
  push32((uint32_t)(EAX));
  /* 120f34f5 call edi */
  call_ind((uint32_t)(EDI), 0x120f34f7u);
  /* 120f34f7 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f34fa push 0x12100664 */
  push32((uint32_t)(0x12100664u));
  /* 120f34ff push ecx */
  push32((uint32_t)(ECX));
  /* 120f3500 call edi */
  call_ind((uint32_t)(EDI), 0x120f3502u);
  /* 120f3502 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f3505 push 0x12100658 */
  push32((uint32_t)(0x12100658u));
  /* 120f350a push edx */
  push32((uint32_t)(EDX));
  /* 120f350b call edi */
  call_ind((uint32_t)(EDI), 0x120f350du);
  /* 120f350d lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f3510 push 0x1210064c */
  push32((uint32_t)(0x1210064cu));
  /* 120f3515 push eax */
  push32((uint32_t)(EAX));
  /* 120f3516 call edi */
  call_ind((uint32_t)(EDI), 0x120f3518u);
  /* 120f3518 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f351b push 0x1210063c */
  push32((uint32_t)(0x1210063cu));
  /* 120f3520 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3521 call edi */
  call_ind((uint32_t)(EDI), 0x120f3523u);
  /* 120f3523 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f3526 push 0x1210062c */
  push32((uint32_t)(0x1210062cu));
  /* 120f352b push edx */
  push32((uint32_t)(EDX));
  /* 120f352c call edi */
  call_ind((uint32_t)(EDI), 0x120f352eu);
  /* 120f352e lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f3531 push 0x12100620 */
  push32((uint32_t)(0x12100620u));
  /* 120f3536 push eax */
  push32((uint32_t)(EAX));
  /* 120f3537 call edi */
  call_ind((uint32_t)(EDI), 0x120f3539u);
  /* 120f3539 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f353c lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 120f353f push 0x12100608 */
  push32((uint32_t)(0x12100608u));
  /* 120f3544 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3545 call edi */
  call_ind((uint32_t)(EDI), 0x120f3547u);
  /* 120f3547 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 120f354a push 0x121005f4 */
  push32((uint32_t)(0x121005f4u));
  /* 120f354f push edx */
  push32((uint32_t)(EDX));
  /* 120f3550 call edi */
  call_ind((uint32_t)(EDI), 0x120f3552u);
  /* 120f3552 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 120f3555 push 0x121005e4 */
  push32((uint32_t)(0x121005e4u));
  /* 120f355a push eax */
  push32((uint32_t)(EAX));
  /* 120f355b call edi */
  call_ind((uint32_t)(EDI), 0x120f355du);
  /* 120f355d lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 120f3560 push 0x121005d4 */
  push32((uint32_t)(0x121005d4u));
  /* 120f3565 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3566 call edi */
  call_ind((uint32_t)(EDI), 0x120f3568u);
  /* 120f3568 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 120f356b push 0x121005c0 */
  push32((uint32_t)(0x121005c0u));
  /* 120f3570 push edx */
  push32((uint32_t)(EDX));
  /* 120f3571 call edi */
  call_ind((uint32_t)(EDI), 0x120f3573u);
  /* 120f3573 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 120f3576 push 0x121005b4 */
  push32((uint32_t)(0x121005b4u));
  /* 120f357b push eax */
  push32((uint32_t)(EAX));
  /* 120f357c call edi */
  call_ind((uint32_t)(EDI), 0x120f357eu);
  /* 120f357e lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 120f3581 push 0x121005a0 */
  push32((uint32_t)(0x121005a0u));
  /* 120f3586 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3587 call edi */
  call_ind((uint32_t)(EDI), 0x120f3589u);
  /* 120f3589 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 120f358c push 0x12100594 */
  push32((uint32_t)(0x12100594u));
  /* 120f3591 push edx */
  push32((uint32_t)(EDX));
  /* 120f3592 call edi */
  call_ind((uint32_t)(EDI), 0x120f3594u);
  /* 120f3594 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3597 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 120f359d push 0x12100588 */
  push32((uint32_t)(0x12100588u));
  /* 120f35a2 push eax */
  push32((uint32_t)(EAX));
  /* 120f35a3 call edi */
  call_ind((uint32_t)(EDI), 0x120f35a5u);
  /* 120f35a5 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f35ab push 0x1210057c */
  push32((uint32_t)(0x1210057cu));
  /* 120f35b0 push esi */
  push32((uint32_t)(ESI));
  /* 120f35b1 call edi */
  call_ind((uint32_t)(EDI), 0x120f35b3u);
  /* 120f35b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f35b6 pop edi */
  EDI = (pop32());
  /* 120f35b7 pop esi */
  ESI = (pop32());
  /* 120f35b8 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f35b9:;
  /* 120f35b9 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f35bd mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f35c3 push 0x12100568 */
  push32((uint32_t)(0x12100568u));
  /* 120f35c8 push esi */
  push32((uint32_t)(ESI));
  /* 120f35c9 call edi */
  call_ind((uint32_t)(EDI), 0x120f35cbu);
  /* 120f35cb lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f35ce push 0x12100558 */
  push32((uint32_t)(0x12100558u));
  /* 120f35d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120f35d4 call edi */
  call_ind((uint32_t)(EDI), 0x120f35d6u);
  /* 120f35d6 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f35d9 push 0x12100548 */
  push32((uint32_t)(0x12100548u));
  /* 120f35de push edx */
  push32((uint32_t)(EDX));
  /* 120f35df call edi */
  call_ind((uint32_t)(EDI), 0x120f35e1u);
  /* 120f35e1 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f35e4 push 0x1210053c */
  push32((uint32_t)(0x1210053cu));
  /* 120f35e9 push eax */
  push32((uint32_t)(EAX));
  /* 120f35ea call edi */
  call_ind((uint32_t)(EDI), 0x120f35ecu);
  /* 120f35ec lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f35ef push 0x12100530 */
  push32((uint32_t)(0x12100530u));
  /* 120f35f4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f35f5 call edi */
  call_ind((uint32_t)(EDI), 0x120f35f7u);
  /* 120f35f7 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f35fa push 0x12100520 */
  push32((uint32_t)(0x12100520u));
  /* 120f35ff push edx */
  push32((uint32_t)(EDX));
  /* 120f3600 call edi */
  call_ind((uint32_t)(EDI), 0x120f3602u);
  /* 120f3602 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f3605 push 0x12100510 */
  push32((uint32_t)(0x12100510u));
  /* 120f360a push eax */
  push32((uint32_t)(EAX));
  /* 120f360b call edi */
  call_ind((uint32_t)(EDI), 0x120f360du);
  /* 120f360d lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f3610 push 0x121004fc */
  push32((uint32_t)(0x121004fcu));
  /* 120f3615 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3616 call edi */
  call_ind((uint32_t)(EDI), 0x120f3618u);
  /* 120f3618 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f361b lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f361e push 0x121004e8 */
  push32((uint32_t)(0x121004e8u));
  /* 120f3623 push edx */
  push32((uint32_t)(EDX));
  /* 120f3624 call edi */
  call_ind((uint32_t)(EDI), 0x120f3626u);
  /* 120f3626 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f3629 push 0x121004dc */
  push32((uint32_t)(0x121004dcu));
  /* 120f362e push eax */
  push32((uint32_t)(EAX));
  /* 120f362f call edi */
  call_ind((uint32_t)(EDI), 0x120f3631u);
  /* 120f3631 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f3634 push 0x121004c4 */
  push32((uint32_t)(0x121004c4u));
  /* 120f3639 push ecx */
  push32((uint32_t)(ECX));
  /* 120f363a call edi */
  call_ind((uint32_t)(EDI), 0x120f363cu);
  /* 120f363c lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f363f push 0x121004b0 */
  push32((uint32_t)(0x121004b0u));
  /* 120f3644 push edx */
  push32((uint32_t)(EDX));
  /* 120f3645 call edi */
  call_ind((uint32_t)(EDI), 0x120f3647u);
  /* 120f3647 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f364a push 0x1210049c */
  push32((uint32_t)(0x1210049cu));
  /* 120f364f push eax */
  push32((uint32_t)(EAX));
  /* 120f3650 call edi */
  call_ind((uint32_t)(EDI), 0x120f3652u);
  /* 120f3652 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f3655 push 0x12100488 */
  push32((uint32_t)(0x12100488u));
  /* 120f365a push ecx */
  push32((uint32_t)(ECX));
  /* 120f365b call edi */
  call_ind((uint32_t)(EDI), 0x120f365du);
  /* 120f365d lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f3660 push 0x12100478 */
  push32((uint32_t)(0x12100478u));
  /* 120f3665 push edx */
  push32((uint32_t)(EDX));
  /* 120f3666 call edi */
  call_ind((uint32_t)(EDI), 0x120f3668u);
  /* 120f3668 add esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f366b push 0x1210046c */
  push32((uint32_t)(0x1210046cu));
  /* 120f3670 push esi */
  push32((uint32_t)(ESI));
  /* 120f3671 call edi */
  call_ind((uint32_t)(EDI), 0x120f3673u);
  /* 120f3673 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3676 pop edi */
  EDI = (pop32());
  /* 120f3677 pop esi */
  ESI = (pop32());
  /* 120f3678 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3679:;
  /* 120f3679 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f367d mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3683 push 0x12100458 */
  push32((uint32_t)(0x12100458u));
  /* 120f3688 push esi */
  push32((uint32_t)(ESI));
  /* 120f3689 call edi */
  call_ind((uint32_t)(EDI), 0x120f368bu);
  /* 120f368b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f368e push 0x12100448 */
  push32((uint32_t)(0x12100448u));
  /* 120f3693 push eax */
  push32((uint32_t)(EAX));
  /* 120f3694 call edi */
  call_ind((uint32_t)(EDI), 0x120f3696u);
  /* 120f3696 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f3699 push 0x1210043c */
  push32((uint32_t)(0x1210043cu));
  /* 120f369e push ecx */
  push32((uint32_t)(ECX));
  /* 120f369f call edi */
  call_ind((uint32_t)(EDI), 0x120f36a1u);
  /* 120f36a1 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f36a4 push 0x12100430 */
  push32((uint32_t)(0x12100430u));
  /* 120f36a9 push edx */
  push32((uint32_t)(EDX));
  /* 120f36aa call edi */
  call_ind((uint32_t)(EDI), 0x120f36acu);
  /* 120f36ac lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f36af push 0x12100424 */
  push32((uint32_t)(0x12100424u));
  /* 120f36b4 push eax */
  push32((uint32_t)(EAX));
  /* 120f36b5 call edi */
  call_ind((uint32_t)(EDI), 0x120f36b7u);
  /* 120f36b7 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f36ba push 0x12100414 */
  push32((uint32_t)(0x12100414u));
  /* 120f36bf push ecx */
  push32((uint32_t)(ECX));
  /* 120f36c0 call edi */
  call_ind((uint32_t)(EDI), 0x120f36c2u);
  /* 120f36c2 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f36c5 push 0x12100404 */
  push32((uint32_t)(0x12100404u));
  /* 120f36ca push edx */
  push32((uint32_t)(EDX));
  /* 120f36cb call edi */
  call_ind((uint32_t)(EDI), 0x120f36cdu);
  /* 120f36cd lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f36d0 push 0x121003f4 */
  push32((uint32_t)(0x121003f4u));
  /* 120f36d5 push eax */
  push32((uint32_t)(EAX));
  /* 120f36d6 call edi */
  call_ind((uint32_t)(EDI), 0x120f36d8u);
  /* 120f36d8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f36db lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 120f36de push 0x121003e0 */
  push32((uint32_t)(0x121003e0u));
  /* 120f36e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120f36e4 call edi */
  call_ind((uint32_t)(EDI), 0x120f36e6u);
  /* 120f36e6 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 120f36e9 push 0x121003d0 */
  push32((uint32_t)(0x121003d0u));
  /* 120f36ee push edx */
  push32((uint32_t)(EDX));
  /* 120f36ef call edi */
  call_ind((uint32_t)(EDI), 0x120f36f1u);
  /* 120f36f1 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 120f36f4 push 0x121003c0 */
  push32((uint32_t)(0x121003c0u));
  /* 120f36f9 push eax */
  push32((uint32_t)(EAX));
  /* 120f36fa call edi */
  call_ind((uint32_t)(EDI), 0x120f36fcu);
  /* 120f36fc lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 120f36ff push 0x121003ac */
  push32((uint32_t)(0x121003acu));
  /* 120f3704 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3705 call edi */
  call_ind((uint32_t)(EDI), 0x120f3707u);
  /* 120f3707 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 120f370a push 0x12100398 */
  push32((uint32_t)(0x12100398u));
  /* 120f370f push edx */
  push32((uint32_t)(EDX));
  /* 120f3710 call edi */
  call_ind((uint32_t)(EDI), 0x120f3712u);
  /* 120f3712 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 120f3715 push 0x12100388 */
  push32((uint32_t)(0x12100388u));
  /* 120f371a push eax */
  push32((uint32_t)(EAX));
  /* 120f371b call edi */
  call_ind((uint32_t)(EDI), 0x120f371du);
  /* 120f371d lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 120f3720 push 0x12100370 */
  push32((uint32_t)(0x12100370u));
  /* 120f3725 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3726 call edi */
  call_ind((uint32_t)(EDI), 0x120f3728u);
  /* 120f3728 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 120f372b push 0x12100364 */
  push32((uint32_t)(0x12100364u));
  /* 120f3730 push edx */
  push32((uint32_t)(EDX));
  /* 120f3731 call edi */
  call_ind((uint32_t)(EDI), 0x120f3733u);
  /* 120f3733 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3736 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 120f373c push 0x12100358 */
  push32((uint32_t)(0x12100358u));
  /* 120f3741 push eax */
  push32((uint32_t)(EAX));
  /* 120f3742 call edi */
  call_ind((uint32_t)(EDI), 0x120f3744u);
  /* 120f3744 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f374a push 0x1210034c */
  push32((uint32_t)(0x1210034cu));
  /* 120f374f push esi */
  push32((uint32_t)(ESI));
  /* 120f3750 call edi */
  call_ind((uint32_t)(EDI), 0x120f3752u);
  /* 120f3752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3755 pop edi */
  EDI = (pop32());
  /* 120f3756 pop esi */
  ESI = (pop32());
  /* 120f3757 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3758:;
  /* 120f3758 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f375c mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3762 push 0x12100338 */
  push32((uint32_t)(0x12100338u));
  /* 120f3767 push esi */
  push32((uint32_t)(ESI));
  /* 120f3768 call edi */
  call_ind((uint32_t)(EDI), 0x120f376au);
  /* 120f376a lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f376d push 0x12100328 */
  push32((uint32_t)(0x12100328u));
  /* 120f3772 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3773 call edi */
  call_ind((uint32_t)(EDI), 0x120f3775u);
  /* 120f3775 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f3778 push 0x1210031c */
  push32((uint32_t)(0x1210031cu));
  /* 120f377d push edx */
  push32((uint32_t)(EDX));
  /* 120f377e call edi */
  call_ind((uint32_t)(EDI), 0x120f3780u);
  /* 120f3780 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3783 push 0x12100310 */
  push32((uint32_t)(0x12100310u));
  /* 120f3788 push eax */
  push32((uint32_t)(EAX));
  /* 120f3789 call edi */
  call_ind((uint32_t)(EDI), 0x120f378bu);
  /* 120f378b lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f378e push 0x12100304 */
  push32((uint32_t)(0x12100304u));
  /* 120f3793 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3794 call edi */
  call_ind((uint32_t)(EDI), 0x120f3796u);
  /* 120f3796 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f3799 push 0x121002f4 */
  push32((uint32_t)(0x121002f4u));
  /* 120f379e push edx */
  push32((uint32_t)(EDX));
  /* 120f379f call edi */
  call_ind((uint32_t)(EDI), 0x120f37a1u);
  /* 120f37a1 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f37a4 push 0x121002e4 */
  push32((uint32_t)(0x121002e4u));
  /* 120f37a9 push eax */
  push32((uint32_t)(EAX));
  /* 120f37aa call edi */
  call_ind((uint32_t)(EDI), 0x120f37acu);
  /* 120f37ac lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f37af push 0x121002d4 */
  push32((uint32_t)(0x121002d4u));
  /* 120f37b4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f37b5 call edi */
  call_ind((uint32_t)(EDI), 0x120f37b7u);
  /* 120f37b7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f37ba lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f37bd push 0x121002c0 */
  push32((uint32_t)(0x121002c0u));
  /* 120f37c2 push edx */
  push32((uint32_t)(EDX));
  /* 120f37c3 call edi */
  call_ind((uint32_t)(EDI), 0x120f37c5u);
  /* 120f37c5 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f37c8 push 0x121002b4 */
  push32((uint32_t)(0x121002b4u));
  /* 120f37cd push eax */
  push32((uint32_t)(EAX));
  /* 120f37ce call edi */
  call_ind((uint32_t)(EDI), 0x120f37d0u);
  /* 120f37d0 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f37d3 push 0x121002a4 */
  push32((uint32_t)(0x121002a4u));
  /* 120f37d8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f37d9 call edi */
  call_ind((uint32_t)(EDI), 0x120f37dbu);
  /* 120f37db lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f37de push 0x12100290 */
  push32((uint32_t)(0x12100290u));
  /* 120f37e3 push edx */
  push32((uint32_t)(EDX));
  /* 120f37e4 call edi */
  call_ind((uint32_t)(EDI), 0x120f37e6u);
  /* 120f37e6 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f37e9 push 0x1210027c */
  push32((uint32_t)(0x1210027cu));
  /* 120f37ee push eax */
  push32((uint32_t)(EAX));
  /* 120f37ef call edi */
  call_ind((uint32_t)(EDI), 0x120f37f1u);
  /* 120f37f1 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f37f4 push 0x1210026c */
  push32((uint32_t)(0x1210026cu));
  /* 120f37f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120f37fa call edi */
  call_ind((uint32_t)(EDI), 0x120f37fcu);
  /* 120f37fc lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f37ff push 0x12100254 */
  push32((uint32_t)(0x12100254u));
  /* 120f3804 push edx */
  push32((uint32_t)(EDX));
  /* 120f3805 call edi */
  call_ind((uint32_t)(EDI), 0x120f3807u);
  /* 120f3807 lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 120f380a push 0x12100248 */
  push32((uint32_t)(0x12100248u));
  /* 120f380f push eax */
  push32((uint32_t)(EAX));
  /* 120f3810 call edi */
  call_ind((uint32_t)(EDI), 0x120f3812u);
  /* 120f3812 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3815 lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 120f381b push 0x1210023c */
  push32((uint32_t)(0x1210023cu));
  /* 120f3820 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3821 call edi */
  call_ind((uint32_t)(EDI), 0x120f3823u);
  /* 120f3823 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3829 push 0x12100230 */
  push32((uint32_t)(0x12100230u));
  /* 120f382e push esi */
  push32((uint32_t)(ESI));
  /* 120f382f call edi */
  call_ind((uint32_t)(EDI), 0x120f3831u);
  /* 120f3831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3834 pop edi */
  EDI = (pop32());
  /* 120f3835 pop esi */
  ESI = (pop32());
  /* 120f3836 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3837:;
  /* 120f3837 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f383b mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3841 push 0x12100224 */
  push32((uint32_t)(0x12100224u));
  /* 120f3846 push esi */
  push32((uint32_t)(ESI));
  /* 120f3847 call edi */
  call_ind((uint32_t)(EDI), 0x120f3849u);
  /* 120f3849 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f384c push 0x12100214 */
  push32((uint32_t)(0x12100214u));
  /* 120f3851 push edx */
  push32((uint32_t)(EDX));
  /* 120f3852 call edi */
  call_ind((uint32_t)(EDI), 0x120f3854u);
  /* 120f3854 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f3857 push 0x12100208 */
  push32((uint32_t)(0x12100208u));
  /* 120f385c push eax */
  push32((uint32_t)(EAX));
  /* 120f385d call edi */
  call_ind((uint32_t)(EDI), 0x120f385fu);
  /* 120f385f lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f3862 push 0x121001fc */
  push32((uint32_t)(0x121001fcu));
  /* 120f3867 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3868 call edi */
  call_ind((uint32_t)(EDI), 0x120f386au);
  /* 120f386a lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f386d push 0x121001f0 */
  push32((uint32_t)(0x121001f0u));
  /* 120f3872 push edx */
  push32((uint32_t)(EDX));
  /* 120f3873 call edi */
  call_ind((uint32_t)(EDI), 0x120f3875u);
  /* 120f3875 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 120f3878 push 0x121001e0 */
  push32((uint32_t)(0x121001e0u));
  /* 120f387d push eax */
  push32((uint32_t)(EAX));
  /* 120f387e call edi */
  call_ind((uint32_t)(EDI), 0x120f3880u);
  /* 120f3880 lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 120f3883 push 0x121001d0 */
  push32((uint32_t)(0x121001d0u));
  /* 120f3888 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3889 call edi */
  call_ind((uint32_t)(EDI), 0x120f388bu);
  /* 120f388b lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 120f388e push 0x121001c4 */
  push32((uint32_t)(0x121001c4u));
  /* 120f3893 push edx */
  push32((uint32_t)(EDX));
  /* 120f3894 call edi */
  call_ind((uint32_t)(EDI), 0x120f3896u);
  /* 120f3896 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3899 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 120f389c push 0x121001ac */
  push32((uint32_t)(0x121001acu));
  /* 120f38a1 push eax */
  push32((uint32_t)(EAX));
  /* 120f38a2 call edi */
  call_ind((uint32_t)(EDI), 0x120f38a4u);
  /* 120f38a4 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 120f38a7 push 0x12100198 */
  push32((uint32_t)(0x12100198u));
  /* 120f38ac push ecx */
  push32((uint32_t)(ECX));
  /* 120f38ad call edi */
  call_ind((uint32_t)(EDI), 0x120f38afu);
  /* 120f38af lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 120f38b2 push 0x12100188 */
  push32((uint32_t)(0x12100188u));
  /* 120f38b7 push edx */
  push32((uint32_t)(EDX));
  /* 120f38b8 call edi */
  call_ind((uint32_t)(EDI), 0x120f38bau);
  /* 120f38ba lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 120f38bd push 0x12100178 */
  push32((uint32_t)(0x12100178u));
  /* 120f38c2 push eax */
  push32((uint32_t)(EAX));
  /* 120f38c3 call edi */
  call_ind((uint32_t)(EDI), 0x120f38c5u);
  /* 120f38c5 lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 120f38c8 push 0x12100164 */
  push32((uint32_t)(0x12100164u));
  /* 120f38cd push ecx */
  push32((uint32_t)(ECX));
  /* 120f38ce call edi */
  call_ind((uint32_t)(EDI), 0x120f38d0u);
  /* 120f38d0 lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 120f38d3 push 0x12100158 */
  push32((uint32_t)(0x12100158u));
  /* 120f38d8 push edx */
  push32((uint32_t)(EDX));
  /* 120f38d9 call edi */
  call_ind((uint32_t)(EDI), 0x120f38dbu);
  /* 120f38db lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 120f38de push 0x12100144 */
  push32((uint32_t)(0x12100144u));
  /* 120f38e3 push eax */
  push32((uint32_t)(EAX));
  /* 120f38e4 call edi */
  call_ind((uint32_t)(EDI), 0x120f38e6u);
  /* 120f38e6 lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 120f38e9 push 0x12100138 */
  push32((uint32_t)(0x12100138u));
  /* 120f38ee push ecx */
  push32((uint32_t)(ECX));
  /* 120f38ef call edi */
  call_ind((uint32_t)(EDI), 0x120f38f1u);
  /* 120f38f1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f38f4 lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 120f38fa push 0x1210012c */
  push32((uint32_t)(0x1210012cu));
  /* 120f38ff push edx */
  push32((uint32_t)(EDX));
  /* 120f3900 call edi */
  call_ind((uint32_t)(EDI), 0x120f3902u);
  /* 120f3902 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3908 push 0x12100120 */
  push32((uint32_t)(0x12100120u));
  /* 120f390d push esi */
  push32((uint32_t)(ESI));
  /* 120f390e call edi */
  call_ind((uint32_t)(EDI), 0x120f3910u);
  /* 120f3910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3913 pop edi */
  EDI = (pop32());
  /* 120f3914 pop esi */
  ESI = (pop32());
  /* 120f3915 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3916:;
  /* 120f3916 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f391a mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3920 push 0x1210010c */
  push32((uint32_t)(0x1210010cu));
  /* 120f3925 push esi */
  push32((uint32_t)(ESI));
  /* 120f3926 call edi */
  call_ind((uint32_t)(EDI), 0x120f3928u);
  /* 120f3928 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f392b push 0x121000fc */
  push32((uint32_t)(0x121000fcu));
  /* 120f3930 push eax */
  push32((uint32_t)(EAX));
  /* 120f3931 call edi */
  call_ind((uint32_t)(EDI), 0x120f3933u);
  /* 120f3933 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f3936 push 0x121000f0 */
  push32((uint32_t)(0x121000f0u));
  /* 120f393b push ecx */
  push32((uint32_t)(ECX));
  /* 120f393c call edi */
  call_ind((uint32_t)(EDI), 0x120f393eu);
  /* 120f393e lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f3941 push 0x121000e4 */
  push32((uint32_t)(0x121000e4u));
  /* 120f3946 push edx */
  push32((uint32_t)(EDX));
  /* 120f3947 call edi */
  call_ind((uint32_t)(EDI), 0x120f3949u);
  /* 120f3949 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f394c push 0x121000d8 */
  push32((uint32_t)(0x121000d8u));
  /* 120f3951 push eax */
  push32((uint32_t)(EAX));
  /* 120f3952 call edi */
  call_ind((uint32_t)(EDI), 0x120f3954u);
  /* 120f3954 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f3957 push 0x121000c8 */
  push32((uint32_t)(0x121000c8u));
  /* 120f395c push ecx */
  push32((uint32_t)(ECX));
  /* 120f395d call edi */
  call_ind((uint32_t)(EDI), 0x120f395fu);
  /* 120f395f lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f3962 push 0x121000b8 */
  push32((uint32_t)(0x121000b8u));
  /* 120f3967 push edx */
  push32((uint32_t)(EDX));
  /* 120f3968 call edi */
  call_ind((uint32_t)(EDI), 0x120f396au);
  /* 120f396a lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f396d push 0x121000a8 */
  push32((uint32_t)(0x121000a8u));
  /* 120f3972 push eax */
  push32((uint32_t)(EAX));
  /* 120f3973 call edi */
  call_ind((uint32_t)(EDI), 0x120f3975u);
  /* 120f3975 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3978 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 120f397b push 0x12100094 */
  push32((uint32_t)(0x12100094u));
  /* 120f3980 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3981 call edi */
  call_ind((uint32_t)(EDI), 0x120f3983u);
  /* 120f3983 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 120f3986 push 0x12100084 */
  push32((uint32_t)(0x12100084u));
  /* 120f398b push edx */
  push32((uint32_t)(EDX));
  /* 120f398c call edi */
  call_ind((uint32_t)(EDI), 0x120f398eu);
  /* 120f398e lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 120f3991 push 0x12100074 */
  push32((uint32_t)(0x12100074u));
  /* 120f3996 push eax */
  push32((uint32_t)(EAX));
  /* 120f3997 call edi */
  call_ind((uint32_t)(EDI), 0x120f3999u);
  /* 120f3999 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 120f399c push 0x12100060 */
  push32((uint32_t)(0x12100060u));
  /* 120f39a1 push ecx */
  push32((uint32_t)(ECX));
  /* 120f39a2 call edi */
  call_ind((uint32_t)(EDI), 0x120f39a4u);
  /* 120f39a4 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 120f39a7 push 0x1210004c */
  push32((uint32_t)(0x1210004cu));
  /* 120f39ac push edx */
  push32((uint32_t)(EDX));
  /* 120f39ad call edi */
  call_ind((uint32_t)(EDI), 0x120f39afu);
  /* 120f39af lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 120f39b2 push 0x12100038 */
  push32((uint32_t)(0x12100038u));
  /* 120f39b7 push eax */
  push32((uint32_t)(EAX));
  /* 120f39b8 call edi */
  call_ind((uint32_t)(EDI), 0x120f39bau);
  /* 120f39ba lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 120f39bd push 0x12100020 */
  push32((uint32_t)(0x12100020u));
  /* 120f39c2 push ecx */
  push32((uint32_t)(ECX));
  /* 120f39c3 call edi */
  call_ind((uint32_t)(EDI), 0x120f39c5u);
  /* 120f39c5 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 120f39c8 push 0x12100014 */
  push32((uint32_t)(0x12100014u));
  /* 120f39cd push edx */
  push32((uint32_t)(EDX));
  /* 120f39ce call edi */
  call_ind((uint32_t)(EDI), 0x120f39d0u);
  /* 120f39d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f39d3 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 120f39d9 push 0x12100008 */
  push32((uint32_t)(0x12100008u));
  /* 120f39de push eax */
  push32((uint32_t)(EAX));
  /* 120f39df call edi */
  call_ind((uint32_t)(EDI), 0x120f39e1u);
  /* 120f39e1 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f39e7 push 0x120ffffc */
  push32((uint32_t)(0x120ffffcu));
  /* 120f39ec push esi */
  push32((uint32_t)(ESI));
  /* 120f39ed call edi */
  call_ind((uint32_t)(EDI), 0x120f39efu);
  /* 120f39ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f39f2 pop edi */
  EDI = (pop32());
  /* 120f39f3 pop esi */
  ESI = (pop32());
  /* 120f39f4 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f39f5:;
  /* 120f39f5 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f39f9 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f39ff push 0x120fffe8 */
  push32((uint32_t)(0x120fffe8u));
  /* 120f3a04 push esi */
  push32((uint32_t)(ESI));
  /* 120f3a05 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a07u);
  /* 120f3a07 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f3a0a push 0x120fffd8 */
  push32((uint32_t)(0x120fffd8u));
  /* 120f3a0f push ecx */
  push32((uint32_t)(ECX));
  /* 120f3a10 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a12u);
  /* 120f3a12 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f3a15 push 0x120fffcc */
  push32((uint32_t)(0x120fffccu));
  /* 120f3a1a push edx */
  push32((uint32_t)(EDX));
  /* 120f3a1b call edi */
  call_ind((uint32_t)(EDI), 0x120f3a1du);
  /* 120f3a1d lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3a20 push 0x120fffc0 */
  push32((uint32_t)(0x120fffc0u));
  /* 120f3a25 push eax */
  push32((uint32_t)(EAX));
  /* 120f3a26 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a28u);
  /* 120f3a28 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f3a2b push 0x120fffb4 */
  push32((uint32_t)(0x120fffb4u));
  /* 120f3a30 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3a31 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a33u);
  /* 120f3a33 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f3a36 push 0x120fffa4 */
  push32((uint32_t)(0x120fffa4u));
  /* 120f3a3b push edx */
  push32((uint32_t)(EDX));
  /* 120f3a3c call edi */
  call_ind((uint32_t)(EDI), 0x120f3a3eu);
  /* 120f3a3e lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f3a41 push 0x120fff94 */
  push32((uint32_t)(0x120fff94u));
  /* 120f3a46 push eax */
  push32((uint32_t)(EAX));
  /* 120f3a47 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a49u);
  /* 120f3a49 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f3a4c push 0x120fff88 */
  push32((uint32_t)(0x120fff88u));
  /* 120f3a51 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3a52 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a54u);
  /* 120f3a54 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3a57 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f3a5a push 0x120fff70 */
  push32((uint32_t)(0x120fff70u));
  /* 120f3a5f push edx */
  push32((uint32_t)(EDX));
  /* 120f3a60 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a62u);
  /* 120f3a62 lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f3a65 push 0x120fff64 */
  push32((uint32_t)(0x120fff64u));
  /* 120f3a6a push eax */
  push32((uint32_t)(EAX));
  /* 120f3a6b call edi */
  call_ind((uint32_t)(EDI), 0x120f3a6du);
  /* 120f3a6d lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f3a70 push 0x120fff54 */
  push32((uint32_t)(0x120fff54u));
  /* 120f3a75 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3a76 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a78u);
  /* 120f3a78 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f3a7b push 0x120fff44 */
  push32((uint32_t)(0x120fff44u));
  /* 120f3a80 push edx */
  push32((uint32_t)(EDX));
  /* 120f3a81 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a83u);
  /* 120f3a83 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f3a86 push 0x120fff30 */
  push32((uint32_t)(0x120fff30u));
  /* 120f3a8b push eax */
  push32((uint32_t)(EAX));
  /* 120f3a8c call edi */
  call_ind((uint32_t)(EDI), 0x120f3a8eu);
  /* 120f3a8e lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f3a91 push 0x120fff24 */
  push32((uint32_t)(0x120fff24u));
  /* 120f3a96 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3a97 call edi */
  call_ind((uint32_t)(EDI), 0x120f3a99u);
  /* 120f3a99 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f3a9c push 0x120fff10 */
  push32((uint32_t)(0x120fff10u));
  /* 120f3aa1 push edx */
  push32((uint32_t)(EDX));
  /* 120f3aa2 call edi */
  call_ind((uint32_t)(EDI), 0x120f3aa4u);
  /* 120f3aa4 lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 120f3aa7 push 0x120fff04 */
  push32((uint32_t)(0x120fff04u));
  /* 120f3aac push eax */
  push32((uint32_t)(EAX));
  /* 120f3aad call edi */
  call_ind((uint32_t)(EDI), 0x120f3aafu);
  /* 120f3aaf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3ab2 lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 120f3ab8 push 0x120ffef8 */
  push32((uint32_t)(0x120ffef8u));
  /* 120f3abd push ecx */
  push32((uint32_t)(ECX));
  /* 120f3abe call edi */
  call_ind((uint32_t)(EDI), 0x120f3ac0u);
  /* 120f3ac0 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3ac6 push 0x120ffeec */
  push32((uint32_t)(0x120ffeecu));
  /* 120f3acb push esi */
  push32((uint32_t)(ESI));
  /* 120f3acc call edi */
  call_ind((uint32_t)(EDI), 0x120f3aceu);
  /* 120f3ace add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3ad1 pop edi */
  EDI = (pop32());
  /* 120f3ad2 pop esi */
  ESI = (pop32());
  /* 120f3ad3 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3ad4:;
  /* 120f3ad4 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3ad8 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3ade push 0x120ffed8 */
  push32((uint32_t)(0x120ffed8u));
  /* 120f3ae3 push esi */
  push32((uint32_t)(ESI));
  /* 120f3ae4 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ae6u);
  /* 120f3ae6 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f3ae9 push 0x120ffec8 */
  push32((uint32_t)(0x120ffec8u));
  /* 120f3aee push edx */
  push32((uint32_t)(EDX));
  /* 120f3aef call edi */
  call_ind((uint32_t)(EDI), 0x120f3af1u);
  /* 120f3af1 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f3af4 push 0x120ffebc */
  push32((uint32_t)(0x120ffebcu));
  /* 120f3af9 push eax */
  push32((uint32_t)(EAX));
  /* 120f3afa call edi */
  call_ind((uint32_t)(EDI), 0x120f3afcu);
  /* 120f3afc lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f3aff push 0x120ffeb0 */
  push32((uint32_t)(0x120ffeb0u));
  /* 120f3b04 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3b05 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b07u);
  /* 120f3b07 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f3b0a push 0x120ffea4 */
  push32((uint32_t)(0x120ffea4u));
  /* 120f3b0f push edx */
  push32((uint32_t)(EDX));
  /* 120f3b10 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b12u);
  /* 120f3b12 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 120f3b15 push 0x120ffe94 */
  push32((uint32_t)(0x120ffe94u));
  /* 120f3b1a push eax */
  push32((uint32_t)(EAX));
  /* 120f3b1b call edi */
  call_ind((uint32_t)(EDI), 0x120f3b1du);
  /* 120f3b1d lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 120f3b20 push 0x120ffe84 */
  push32((uint32_t)(0x120ffe84u));
  /* 120f3b25 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3b26 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b28u);
  /* 120f3b28 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 120f3b2b push 0x120ffe78 */
  push32((uint32_t)(0x120ffe78u));
  /* 120f3b30 push edx */
  push32((uint32_t)(EDX));
  /* 120f3b31 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b33u);
  /* 120f3b33 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3b36 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 120f3b39 push 0x120ffe60 */
  push32((uint32_t)(0x120ffe60u));
  /* 120f3b3e push eax */
  push32((uint32_t)(EAX));
  /* 120f3b3f call edi */
  call_ind((uint32_t)(EDI), 0x120f3b41u);
  /* 120f3b41 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 120f3b44 push 0x120ffe4c */
  push32((uint32_t)(0x120ffe4cu));
  /* 120f3b49 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3b4a call edi */
  call_ind((uint32_t)(EDI), 0x120f3b4cu);
  /* 120f3b4c lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 120f3b4f push 0x120ffe3c */
  push32((uint32_t)(0x120ffe3cu));
  /* 120f3b54 push edx */
  push32((uint32_t)(EDX));
  /* 120f3b55 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b57u);
  /* 120f3b57 lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 120f3b5a push 0x120ffe2c */
  push32((uint32_t)(0x120ffe2cu));
  /* 120f3b5f push eax */
  push32((uint32_t)(EAX));
  /* 120f3b60 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b62u);
  /* 120f3b62 lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 120f3b65 push 0x120ffe18 */
  push32((uint32_t)(0x120ffe18u));
  /* 120f3b6a push ecx */
  push32((uint32_t)(ECX));
  /* 120f3b6b call edi */
  call_ind((uint32_t)(EDI), 0x120f3b6du);
  /* 120f3b6d lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 120f3b70 push 0x120ffe0c */
  push32((uint32_t)(0x120ffe0cu));
  /* 120f3b75 push edx */
  push32((uint32_t)(EDX));
  /* 120f3b76 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b78u);
  /* 120f3b78 lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 120f3b7b push 0x120ffdf8 */
  push32((uint32_t)(0x120ffdf8u));
  /* 120f3b80 push eax */
  push32((uint32_t)(EAX));
  /* 120f3b81 call edi */
  call_ind((uint32_t)(EDI), 0x120f3b83u);
  /* 120f3b83 lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 120f3b86 push 0x120ffdec */
  push32((uint32_t)(0x120ffdecu));
  /* 120f3b8b push ecx */
  push32((uint32_t)(ECX));
  /* 120f3b8c call edi */
  call_ind((uint32_t)(EDI), 0x120f3b8eu);
  /* 120f3b8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3b91 lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 120f3b97 push 0x120ffde0 */
  push32((uint32_t)(0x120ffde0u));
  /* 120f3b9c push edx */
  push32((uint32_t)(EDX));
  /* 120f3b9d call edi */
  call_ind((uint32_t)(EDI), 0x120f3b9fu);
  /* 120f3b9f add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3ba5 push 0x120ffdd4 */
  push32((uint32_t)(0x120ffdd4u));
  /* 120f3baa push esi */
  push32((uint32_t)(ESI));
  /* 120f3bab call edi */
  call_ind((uint32_t)(EDI), 0x120f3badu);
  /* 120f3bad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3bb0 pop edi */
  EDI = (pop32());
  /* 120f3bb1 pop esi */
  ESI = (pop32());
  /* 120f3bb2 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3bb3:;
  /* 120f3bb3 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3bb7 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3bbd push 0x120ffdc0 */
  push32((uint32_t)(0x120ffdc0u));
  /* 120f3bc2 push esi */
  push32((uint32_t)(ESI));
  /* 120f3bc3 call edi */
  call_ind((uint32_t)(EDI), 0x120f3bc5u);
  /* 120f3bc5 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f3bc8 push 0x120ffdac */
  push32((uint32_t)(0x120ffdacu));
  /* 120f3bcd push eax */
  push32((uint32_t)(EAX));
  /* 120f3bce call edi */
  call_ind((uint32_t)(EDI), 0x120f3bd0u);
  /* 120f3bd0 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f3bd3 push 0x120ffda0 */
  push32((uint32_t)(0x120ffda0u));
  /* 120f3bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3bd9 call edi */
  call_ind((uint32_t)(EDI), 0x120f3bdbu);
  /* 120f3bdb lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f3bde push 0x120ffd94 */
  push32((uint32_t)(0x120ffd94u));
  /* 120f3be3 push edx */
  push32((uint32_t)(EDX));
  /* 120f3be4 call edi */
  call_ind((uint32_t)(EDI), 0x120f3be6u);
  /* 120f3be6 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f3be9 push 0x120ffd88 */
  push32((uint32_t)(0x120ffd88u));
  /* 120f3bee push eax */
  push32((uint32_t)(EAX));
  /* 120f3bef call edi */
  call_ind((uint32_t)(EDI), 0x120f3bf1u);
  /* 120f3bf1 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f3bf4 push 0x120ffd78 */
  push32((uint32_t)(0x120ffd78u));
  /* 120f3bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3bfa call edi */
  call_ind((uint32_t)(EDI), 0x120f3bfcu);
  /* 120f3bfc lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f3bff push 0x120ffd68 */
  push32((uint32_t)(0x120ffd68u));
  /* 120f3c04 push edx */
  push32((uint32_t)(EDX));
  /* 120f3c05 call edi */
  call_ind((uint32_t)(EDI), 0x120f3c07u);
  /* 120f3c07 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f3c0a push 0x120ffd58 */
  push32((uint32_t)(0x120ffd58u));
  /* 120f3c0f push eax */
  push32((uint32_t)(EAX));
  /* 120f3c10 call edi */
  call_ind((uint32_t)(EDI), 0x120f3c12u);
  /* 120f3c12 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3c15 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 120f3c18 push 0x120ffd44 */
  push32((uint32_t)(0x120ffd44u));
  /* 120f3c1d push ecx */
  push32((uint32_t)(ECX));
  /* 120f3c1e call edi */
  call_ind((uint32_t)(EDI), 0x120f3c20u);
  /* 120f3c20 lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 120f3c23 push 0x120ffd34 */
  push32((uint32_t)(0x120ffd34u));
  /* 120f3c28 push edx */
  push32((uint32_t)(EDX));
  /* 120f3c29 call edi */
  call_ind((uint32_t)(EDI), 0x120f3c2bu);
  /* 120f3c2b lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 120f3c2e push 0x120ffd24 */
  push32((uint32_t)(0x120ffd24u));
  /* 120f3c33 push eax */
  push32((uint32_t)(EAX));
  /* 120f3c34 call edi */
  call_ind((uint32_t)(EDI), 0x120f3c36u);
  /* 120f3c36 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 120f3c39 push 0x120ffd10 */
  push32((uint32_t)(0x120ffd10u));
  /* 120f3c3e push ecx */
  push32((uint32_t)(ECX));
  /* 120f3c3f call edi */
  call_ind((uint32_t)(EDI), 0x120f3c41u);
  /* 120f3c41 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 120f3c44 push 0x120ffcfc */
  push32((uint32_t)(0x120ffcfcu));
  /* 120f3c49 push edx */
  push32((uint32_t)(EDX));
  /* 120f3c4a call edi */
  call_ind((uint32_t)(EDI), 0x120f3c4cu);
  /* 120f3c4c lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 120f3c4f push 0x120ffce8 */
  push32((uint32_t)(0x120ffce8u));
  /* 120f3c54 push eax */
  push32((uint32_t)(EAX));
  /* 120f3c55 call edi */
  call_ind((uint32_t)(EDI), 0x120f3c57u);
  /* 120f3c57 lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 120f3c5a push 0x120ffcd0 */
  push32((uint32_t)(0x120ffcd0u));
  /* 120f3c5f push ecx */
  push32((uint32_t)(ECX));
  /* 120f3c60 call edi */
  call_ind((uint32_t)(EDI), 0x120f3c62u);
  /* 120f3c62 lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 120f3c65 push 0x120ffcc4 */
  push32((uint32_t)(0x120ffcc4u));
  /* 120f3c6a push edx */
  push32((uint32_t)(EDX));
  /* 120f3c6b call edi */
  call_ind((uint32_t)(EDI), 0x120f3c6du);
  /* 120f3c6d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3c70 lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 120f3c76 push 0x120ffcb8 */
  push32((uint32_t)(0x120ffcb8u));
  /* 120f3c7b push eax */
  push32((uint32_t)(EAX));
  /* 120f3c7c call edi */
  call_ind((uint32_t)(EDI), 0x120f3c7eu);
  /* 120f3c7e add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3c84 push 0x120ffcac */
  push32((uint32_t)(0x120ffcacu));
  /* 120f3c89 push esi */
  push32((uint32_t)(ESI));
  /* 120f3c8a call edi */
  call_ind((uint32_t)(EDI), 0x120f3c8cu);
  /* 120f3c8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3c8f pop edi */
  EDI = (pop32());
  /* 120f3c90 pop esi */
  ESI = (pop32());
  /* 120f3c91 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3c92:;
  /* 120f3c92 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3c96 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3c9c push 0x120ffc98 */
  push32((uint32_t)(0x120ffc98u));
  /* 120f3ca1 push esi */
  push32((uint32_t)(ESI));
  /* 120f3ca2 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ca4u);
  /* 120f3ca4 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f3ca7 push 0x120ffc84 */
  push32((uint32_t)(0x120ffc84u));
  /* 120f3cac push ecx */
  push32((uint32_t)(ECX));
  /* 120f3cad call edi */
  call_ind((uint32_t)(EDI), 0x120f3cafu);
  /* 120f3caf lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f3cb2 push 0x120ffc74 */
  push32((uint32_t)(0x120ffc74u));
  /* 120f3cb7 push edx */
  push32((uint32_t)(EDX));
  /* 120f3cb8 call edi */
  call_ind((uint32_t)(EDI), 0x120f3cbau);
  /* 120f3cba lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3cbd push 0x120ffc68 */
  push32((uint32_t)(0x120ffc68u));
  /* 120f3cc2 push eax */
  push32((uint32_t)(EAX));
  /* 120f3cc3 call edi */
  call_ind((uint32_t)(EDI), 0x120f3cc5u);
  /* 120f3cc5 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f3cc8 push 0x120ffc5c */
  push32((uint32_t)(0x120ffc5cu));
  /* 120f3ccd push ecx */
  push32((uint32_t)(ECX));
  /* 120f3cce call edi */
  call_ind((uint32_t)(EDI), 0x120f3cd0u);
  /* 120f3cd0 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f3cd3 push 0x120ffc4c */
  push32((uint32_t)(0x120ffc4cu));
  /* 120f3cd8 push edx */
  push32((uint32_t)(EDX));
  /* 120f3cd9 call edi */
  call_ind((uint32_t)(EDI), 0x120f3cdbu);
  /* 120f3cdb lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f3cde push 0x120ffc3c */
  push32((uint32_t)(0x120ffc3cu));
  /* 120f3ce3 push eax */
  push32((uint32_t)(EAX));
  /* 120f3ce4 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ce6u);
  /* 120f3ce6 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f3ce9 push 0x120ffc30 */
  push32((uint32_t)(0x120ffc30u));
  /* 120f3cee push ecx */
  push32((uint32_t)(ECX));
  /* 120f3cef call edi */
  call_ind((uint32_t)(EDI), 0x120f3cf1u);
  /* 120f3cf1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3cf4 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f3cf7 push 0x120ffc20 */
  push32((uint32_t)(0x120ffc20u));
  /* 120f3cfc push edx */
  push32((uint32_t)(EDX));
  /* 120f3cfd call edi */
  call_ind((uint32_t)(EDI), 0x120f3cffu);
  /* 120f3cff lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f3d02 push 0x120ffc10 */
  push32((uint32_t)(0x120ffc10u));
  /* 120f3d07 push eax */
  push32((uint32_t)(EAX));
  /* 120f3d08 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d0au);
  /* 120f3d0a lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f3d0d push 0x120ffc00 */
  push32((uint32_t)(0x120ffc00u));
  /* 120f3d12 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3d13 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d15u);
  /* 120f3d15 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f3d18 push 0x120ffbec */
  push32((uint32_t)(0x120ffbecu));
  /* 120f3d1d push edx */
  push32((uint32_t)(EDX));
  /* 120f3d1e call edi */
  call_ind((uint32_t)(EDI), 0x120f3d20u);
  /* 120f3d20 lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f3d23 push 0x120ffbd8 */
  push32((uint32_t)(0x120ffbd8u));
  /* 120f3d28 push eax */
  push32((uint32_t)(EAX));
  /* 120f3d29 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d2bu);
  /* 120f3d2b lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f3d2e push 0x120ffbcc */
  push32((uint32_t)(0x120ffbccu));
  /* 120f3d33 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3d34 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d36u);
  /* 120f3d36 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f3d39 push 0x120ffbb8 */
  push32((uint32_t)(0x120ffbb8u));
  /* 120f3d3e push edx */
  push32((uint32_t)(EDX));
  /* 120f3d3f call edi */
  call_ind((uint32_t)(EDI), 0x120f3d41u);
  /* 120f3d41 lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 120f3d44 push 0x120ffbac */
  push32((uint32_t)(0x120ffbacu));
  /* 120f3d49 push eax */
  push32((uint32_t)(EAX));
  /* 120f3d4a call edi */
  call_ind((uint32_t)(EDI), 0x120f3d4cu);
  /* 120f3d4c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3d4f lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 120f3d55 push 0x120ffb9c */
  push32((uint32_t)(0x120ffb9cu));
  /* 120f3d5a push ecx */
  push32((uint32_t)(ECX));
  /* 120f3d5b call edi */
  call_ind((uint32_t)(EDI), 0x120f3d5du);
  /* 120f3d5d add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3d63 push 0x120ffb90 */
  push32((uint32_t)(0x120ffb90u));
  /* 120f3d68 push esi */
  push32((uint32_t)(ESI));
  /* 120f3d69 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d6bu);
  /* 120f3d6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3d6e pop edi */
  EDI = (pop32());
  /* 120f3d6f pop esi */
  ESI = (pop32());
  /* 120f3d70 ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3d71:;
  /* 120f3d71 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3d75 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3d7b push 0x120ffb7c */
  push32((uint32_t)(0x120ffb7cu));
  /* 120f3d80 push esi */
  push32((uint32_t)(ESI));
  /* 120f3d81 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d83u);
  /* 120f3d83 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f3d86 push 0x120ffb6c */
  push32((uint32_t)(0x120ffb6cu));
  /* 120f3d8b push edx */
  push32((uint32_t)(EDX));
  /* 120f3d8c call edi */
  call_ind((uint32_t)(EDI), 0x120f3d8eu);
  /* 120f3d8e lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f3d91 push 0x120ffb60 */
  push32((uint32_t)(0x120ffb60u));
  /* 120f3d96 push eax */
  push32((uint32_t)(EAX));
  /* 120f3d97 call edi */
  call_ind((uint32_t)(EDI), 0x120f3d99u);
  /* 120f3d99 lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f3d9c push 0x120ffb54 */
  push32((uint32_t)(0x120ffb54u));
  /* 120f3da1 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3da2 call edi */
  call_ind((uint32_t)(EDI), 0x120f3da4u);
  /* 120f3da4 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f3da7 push 0x120ffb48 */
  push32((uint32_t)(0x120ffb48u));
  /* 120f3dac push edx */
  push32((uint32_t)(EDX));
  /* 120f3dad call edi */
  call_ind((uint32_t)(EDI), 0x120f3dafu);
  /* 120f3daf lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 120f3db2 push 0x120ffb38 */
  push32((uint32_t)(0x120ffb38u));
  /* 120f3db7 push eax */
  push32((uint32_t)(EAX));
  /* 120f3db8 call edi */
  call_ind((uint32_t)(EDI), 0x120f3dbau);
  /* 120f3dba lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 120f3dbd push 0x120ffb28 */
  push32((uint32_t)(0x120ffb28u));
  /* 120f3dc2 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3dc3 call edi */
  call_ind((uint32_t)(EDI), 0x120f3dc5u);
  /* 120f3dc5 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 120f3dc8 push 0x120ffb1c */
  push32((uint32_t)(0x120ffb1cu));
  /* 120f3dcd push edx */
  push32((uint32_t)(EDX));
  /* 120f3dce call edi */
  call_ind((uint32_t)(EDI), 0x120f3dd0u);
  /* 120f3dd0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3dd3 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 120f3dd6 push 0x120ffb04 */
  push32((uint32_t)(0x120ffb04u));
  /* 120f3ddb push eax */
  push32((uint32_t)(EAX));
  /* 120f3ddc call edi */
  call_ind((uint32_t)(EDI), 0x120f3ddeu);
  /* 120f3dde lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 120f3de1 push 0x120ffaf0 */
  push32((uint32_t)(0x120ffaf0u));
  /* 120f3de6 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3de7 call edi */
  call_ind((uint32_t)(EDI), 0x120f3de9u);
  /* 120f3de9 lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 120f3dec push 0x120ffae0 */
  push32((uint32_t)(0x120ffae0u));
  /* 120f3df1 push edx */
  push32((uint32_t)(EDX));
  /* 120f3df2 call edi */
  call_ind((uint32_t)(EDI), 0x120f3df4u);
  /* 120f3df4 lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 120f3df7 push 0x120ffad0 */
  push32((uint32_t)(0x120ffad0u));
  /* 120f3dfc push eax */
  push32((uint32_t)(EAX));
  /* 120f3dfd call edi */
  call_ind((uint32_t)(EDI), 0x120f3dffu);
  /* 120f3dff lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 120f3e02 push 0x120ffabc */
  push32((uint32_t)(0x120ffabcu));
  /* 120f3e07 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3e08 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e0au);
  /* 120f3e0a lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 120f3e0d push 0x120ffab0 */
  push32((uint32_t)(0x120ffab0u));
  /* 120f3e12 push edx */
  push32((uint32_t)(EDX));
  /* 120f3e13 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e15u);
  /* 120f3e15 lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 120f3e18 push 0x120ffa9c */
  push32((uint32_t)(0x120ffa9cu));
  /* 120f3e1d push eax */
  push32((uint32_t)(EAX));
  /* 120f3e1e call edi */
  call_ind((uint32_t)(EDI), 0x120f3e20u);
  /* 120f3e20 lea ecx, [esi + 0x78] */
  ECX = ((uint32_t)(ESI + 0x78));
  /* 120f3e23 push 0x120ffa90 */
  push32((uint32_t)(0x120ffa90u));
  /* 120f3e28 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3e29 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e2bu);
  /* 120f3e2b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3e2e lea edx, [esi + 0x80] */
  EDX = ((uint32_t)(ESI + 0x80));
  /* 120f3e34 push 0x120ffa84 */
  push32((uint32_t)(0x120ffa84u));
  /* 120f3e39 push edx */
  push32((uint32_t)(EDX));
  /* 120f3e3a call edi */
  call_ind((uint32_t)(EDI), 0x120f3e3cu);
  /* 120f3e3c add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3e42 push 0x120ffa78 */
  push32((uint32_t)(0x120ffa78u));
  /* 120f3e47 push esi */
  push32((uint32_t)(ESI));
  /* 120f3e48 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e4au);
  /* 120f3e4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3e4d pop edi */
  EDI = (pop32());
  /* 120f3e4e pop esi */
  ESI = (pop32());
  /* 120f3e4f ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3e50:;
  /* 120f3e50 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3e54 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3e5a push 0x120ffa64 */
  push32((uint32_t)(0x120ffa64u));
  /* 120f3e5f push esi */
  push32((uint32_t)(ESI));
  /* 120f3e60 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e62u);
  /* 120f3e62 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f3e65 push 0x120ffa54 */
  push32((uint32_t)(0x120ffa54u));
  /* 120f3e6a push eax */
  push32((uint32_t)(EAX));
  /* 120f3e6b call edi */
  call_ind((uint32_t)(EDI), 0x120f3e6du);
  /* 120f3e6d lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f3e70 push 0x120ffa48 */
  push32((uint32_t)(0x120ffa48u));
  /* 120f3e75 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3e76 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e78u);
  /* 120f3e78 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f3e7b push 0x120ffa3c */
  push32((uint32_t)(0x120ffa3cu));
  /* 120f3e80 push edx */
  push32((uint32_t)(EDX));
  /* 120f3e81 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e83u);
  /* 120f3e83 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f3e86 push 0x120ffa30 */
  push32((uint32_t)(0x120ffa30u));
  /* 120f3e8b push eax */
  push32((uint32_t)(EAX));
  /* 120f3e8c call edi */
  call_ind((uint32_t)(EDI), 0x120f3e8eu);
  /* 120f3e8e lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f3e91 push 0x120ffa20 */
  push32((uint32_t)(0x120ffa20u));
  /* 120f3e96 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3e97 call edi */
  call_ind((uint32_t)(EDI), 0x120f3e99u);
  /* 120f3e99 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f3e9c push 0x120ffa10 */
  push32((uint32_t)(0x120ffa10u));
  /* 120f3ea1 push edx */
  push32((uint32_t)(EDX));
  /* 120f3ea2 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ea4u);
  /* 120f3ea4 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f3ea7 push 0x120ffa00 */
  push32((uint32_t)(0x120ffa00u));
  /* 120f3eac push eax */
  push32((uint32_t)(EAX));
  /* 120f3ead call edi */
  call_ind((uint32_t)(EDI), 0x120f3eafu);
  /* 120f3eaf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3eb2 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 120f3eb5 push 0x120ff9ec */
  push32((uint32_t)(0x120ff9ecu));
  /* 120f3eba push ecx */
  push32((uint32_t)(ECX));
  /* 120f3ebb call edi */
  call_ind((uint32_t)(EDI), 0x120f3ebdu);
  /* 120f3ebd lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 120f3ec0 push 0x120ff9dc */
  push32((uint32_t)(0x120ff9dcu));
  /* 120f3ec5 push edx */
  push32((uint32_t)(EDX));
  /* 120f3ec6 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ec8u);
  /* 120f3ec8 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 120f3ecb push 0x120ff9cc */
  push32((uint32_t)(0x120ff9ccu));
  /* 120f3ed0 push eax */
  push32((uint32_t)(EAX));
  /* 120f3ed1 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ed3u);
  /* 120f3ed3 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 120f3ed6 push 0x120ff9b8 */
  push32((uint32_t)(0x120ff9b8u));
  /* 120f3edb push ecx */
  push32((uint32_t)(ECX));
  /* 120f3edc call edi */
  call_ind((uint32_t)(EDI), 0x120f3edeu);
  /* 120f3ede lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 120f3ee1 push 0x120ff9a4 */
  push32((uint32_t)(0x120ff9a4u));
  /* 120f3ee6 push edx */
  push32((uint32_t)(EDX));
  /* 120f3ee7 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ee9u);
  /* 120f3ee9 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 120f3eec push 0x120ff994 */
  push32((uint32_t)(0x120ff994u));
  /* 120f3ef1 push eax */
  push32((uint32_t)(EAX));
  /* 120f3ef2 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ef4u);
  /* 120f3ef4 lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 120f3ef7 push 0x120ff97c */
  push32((uint32_t)(0x120ff97cu));
  /* 120f3efc push ecx */
  push32((uint32_t)(ECX));
  /* 120f3efd call edi */
  call_ind((uint32_t)(EDI), 0x120f3effu);
  /* 120f3eff lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 120f3f02 push 0x120ff970 */
  push32((uint32_t)(0x120ff970u));
  /* 120f3f07 push edx */
  push32((uint32_t)(EDX));
  /* 120f3f08 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f0au);
  /* 120f3f0a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3f0d lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 120f3f13 push 0x120ff964 */
  push32((uint32_t)(0x120ff964u));
  /* 120f3f18 push eax */
  push32((uint32_t)(EAX));
  /* 120f3f19 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f1bu);
  /* 120f3f1b add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3f21 push 0x120ff958 */
  push32((uint32_t)(0x120ff958u));
  /* 120f3f26 push esi */
  push32((uint32_t)(ESI));
  /* 120f3f27 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f29u);
  /* 120f3f29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3f2c pop edi */
  EDI = (pop32());
  /* 120f3f2d pop esi */
  ESI = (pop32());
  /* 120f3f2e ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f3f2f:;
  /* 120f3f2f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f3f33 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f3f39 push 0x120ff944 */
  push32((uint32_t)(0x120ff944u));
  /* 120f3f3e push esi */
  push32((uint32_t)(ESI));
  /* 120f3f3f call edi */
  call_ind((uint32_t)(EDI), 0x120f3f41u);
  /* 120f3f41 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f3f44 push 0x120ff934 */
  push32((uint32_t)(0x120ff934u));
  /* 120f3f49 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3f4a call edi */
  call_ind((uint32_t)(EDI), 0x120f3f4cu);
  /* 120f3f4c lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f3f4f push 0x120ff928 */
  push32((uint32_t)(0x120ff928u));
  /* 120f3f54 push edx */
  push32((uint32_t)(EDX));
  /* 120f3f55 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f57u);
  /* 120f3f57 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f3f5a push 0x120ff91c */
  push32((uint32_t)(0x120ff91cu));
  /* 120f3f5f push eax */
  push32((uint32_t)(EAX));
  /* 120f3f60 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f62u);
  /* 120f3f62 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f3f65 push 0x120ff910 */
  push32((uint32_t)(0x120ff910u));
  /* 120f3f6a push ecx */
  push32((uint32_t)(ECX));
  /* 120f3f6b call edi */
  call_ind((uint32_t)(EDI), 0x120f3f6du);
  /* 120f3f6d lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f3f70 push 0x120ff900 */
  push32((uint32_t)(0x120ff900u));
  /* 120f3f75 push edx */
  push32((uint32_t)(EDX));
  /* 120f3f76 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f78u);
  /* 120f3f78 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f3f7b push 0x120ff8f0 */
  push32((uint32_t)(0x120ff8f0u));
  /* 120f3f80 push eax */
  push32((uint32_t)(EAX));
  /* 120f3f81 call edi */
  call_ind((uint32_t)(EDI), 0x120f3f83u);
  /* 120f3f83 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f3f86 push 0x120ff8e4 */
  push32((uint32_t)(0x120ff8e4u));
  /* 120f3f8b push ecx */
  push32((uint32_t)(ECX));
  /* 120f3f8c call edi */
  call_ind((uint32_t)(EDI), 0x120f3f8eu);
  /* 120f3f8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3f91 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f3f94 push 0x120ff8cc */
  push32((uint32_t)(0x120ff8ccu));
  /* 120f3f99 push edx */
  push32((uint32_t)(EDX));
  /* 120f3f9a call edi */
  call_ind((uint32_t)(EDI), 0x120f3f9cu);
  /* 120f3f9c lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f3f9f push 0x120ff8c0 */
  push32((uint32_t)(0x120ff8c0u));
  /* 120f3fa4 push eax */
  push32((uint32_t)(EAX));
  /* 120f3fa5 call edi */
  call_ind((uint32_t)(EDI), 0x120f3fa7u);
  /* 120f3fa7 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f3faa push 0x120ff8b0 */
  push32((uint32_t)(0x120ff8b0u));
  /* 120f3faf push ecx */
  push32((uint32_t)(ECX));
  /* 120f3fb0 call edi */
  call_ind((uint32_t)(EDI), 0x120f3fb2u);
  /* 120f3fb2 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f3fb5 push 0x120ff8a0 */
  push32((uint32_t)(0x120ff8a0u));
  /* 120f3fba push edx */
  push32((uint32_t)(EDX));
  /* 120f3fbb call edi */
  call_ind((uint32_t)(EDI), 0x120f3fbdu);
  /* 120f3fbd lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f3fc0 push 0x120ff88c */
  push32((uint32_t)(0x120ff88cu));
  /* 120f3fc5 push eax */
  push32((uint32_t)(EAX));
  /* 120f3fc6 call edi */
  call_ind((uint32_t)(EDI), 0x120f3fc8u);
  /* 120f3fc8 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f3fcb push 0x120ff880 */
  push32((uint32_t)(0x120ff880u));
  /* 120f3fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3fd1 call edi */
  call_ind((uint32_t)(EDI), 0x120f3fd3u);
  /* 120f3fd3 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f3fd6 push 0x120ff86c */
  push32((uint32_t)(0x120ff86cu));
  /* 120f3fdb push edx */
  push32((uint32_t)(EDX));
  /* 120f3fdc call edi */
  call_ind((uint32_t)(EDI), 0x120f3fdeu);
  /* 120f3fde lea eax, [esi + 0x78] */
  EAX = ((uint32_t)(ESI + 0x78));
  /* 120f3fe1 push 0x120ff860 */
  push32((uint32_t)(0x120ff860u));
  /* 120f3fe6 push eax */
  push32((uint32_t)(EAX));
  /* 120f3fe7 call edi */
  call_ind((uint32_t)(EDI), 0x120f3fe9u);
  /* 120f3fe9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f3fec lea ecx, [esi + 0x80] */
  ECX = ((uint32_t)(ESI + 0x80));
  /* 120f3ff2 push 0x120ff854 */
  push32((uint32_t)(0x120ff854u));
  /* 120f3ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 120f3ff8 call edi */
  call_ind((uint32_t)(EDI), 0x120f3ffau);
  /* 120f3ffa add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4000 push 0x120ff848 */
  push32((uint32_t)(0x120ff848u));
  /* 120f4005 push esi */
  push32((uint32_t)(ESI));
  /* 120f4006 call edi */
  call_ind((uint32_t)(EDI), 0x120f4008u);
  /* 120f4008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f400b pop edi */
  EDI = (pop32());
  /* 120f400c pop esi */
  ESI = (pop32());
  /* 120f400d ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f400e:;
  /* 120f400e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f4012 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f4018 push 0x120ff834 */
  push32((uint32_t)(0x120ff834u));
  /* 120f401d push esi */
  push32((uint32_t)(ESI));
  /* 120f401e call edi */
  call_ind((uint32_t)(EDI), 0x120f4020u);
  /* 120f4020 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f4023 push 0x120ff824 */
  push32((uint32_t)(0x120ff824u));
  /* 120f4028 push edx */
  push32((uint32_t)(EDX));
  /* 120f4029 call edi */
  call_ind((uint32_t)(EDI), 0x120f402bu);
  /* 120f402b lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f402e push 0x120ff814 */
  push32((uint32_t)(0x120ff814u));
  /* 120f4033 push eax */
  push32((uint32_t)(EAX));
  /* 120f4034 call edi */
  call_ind((uint32_t)(EDI), 0x120f4036u);
  /* 120f4036 lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f4039 push 0x120ff808 */
  push32((uint32_t)(0x120ff808u));
  /* 120f403e push ecx */
  push32((uint32_t)(ECX));
  /* 120f403f call edi */
  call_ind((uint32_t)(EDI), 0x120f4041u);
  /* 120f4041 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f4044 push 0x120ff7fc */
  push32((uint32_t)(0x120ff7fcu));
  /* 120f4049 push edx */
  push32((uint32_t)(EDX));
  /* 120f404a call edi */
  call_ind((uint32_t)(EDI), 0x120f404cu);
  /* 120f404c lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 120f404f push 0x120ff7ec */
  push32((uint32_t)(0x120ff7ecu));
  /* 120f4054 push eax */
  push32((uint32_t)(EAX));
  /* 120f4055 call edi */
  call_ind((uint32_t)(EDI), 0x120f4057u);
  /* 120f4057 lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 120f405a push 0x120ff7dc */
  push32((uint32_t)(0x120ff7dcu));
  /* 120f405f push ecx */
  push32((uint32_t)(ECX));
  /* 120f4060 call edi */
  call_ind((uint32_t)(EDI), 0x120f4062u);
  /* 120f4062 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 120f4065 push 0x120ff7c8 */
  push32((uint32_t)(0x120ff7c8u));
  /* 120f406a push edx */
  push32((uint32_t)(EDX));
  /* 120f406b call edi */
  call_ind((uint32_t)(EDI), 0x120f406du);
  /* 120f406d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4070 lea eax, [esi + 0x40] */
  EAX = ((uint32_t)(ESI + 0x40));
  /* 120f4073 push 0x120ff7b4 */
  push32((uint32_t)(0x120ff7b4u));
  /* 120f4078 push eax */
  push32((uint32_t)(EAX));
  /* 120f4079 call edi */
  call_ind((uint32_t)(EDI), 0x120f407bu);
  /* 120f407b lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 120f407e push 0x120ff7a8 */
  push32((uint32_t)(0x120ff7a8u));
  /* 120f4083 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4084 call edi */
  call_ind((uint32_t)(EDI), 0x120f4086u);
  /* 120f4086 lea edx, [esi + 0x50] */
  EDX = ((uint32_t)(ESI + 0x50));
  /* 120f4089 push 0x120ff790 */
  push32((uint32_t)(0x120ff790u));
  /* 120f408e push edx */
  push32((uint32_t)(EDX));
  /* 120f408f call edi */
  call_ind((uint32_t)(EDI), 0x120f4091u);
  /* 120f4091 lea eax, [esi + 0x58] */
  EAX = ((uint32_t)(ESI + 0x58));
  /* 120f4094 push 0x120ff77c */
  push32((uint32_t)(0x120ff77cu));
  /* 120f4099 push eax */
  push32((uint32_t)(EAX));
  /* 120f409a call edi */
  call_ind((uint32_t)(EDI), 0x120f409cu);
  /* 120f409c lea ecx, [esi + 0x60] */
  ECX = ((uint32_t)(ESI + 0x60));
  /* 120f409f push 0x120ff768 */
  push32((uint32_t)(0x120ff768u));
  /* 120f40a4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f40a5 call edi */
  call_ind((uint32_t)(EDI), 0x120f40a7u);
  /* 120f40a7 lea edx, [esi + 0x68] */
  EDX = ((uint32_t)(ESI + 0x68));
  /* 120f40aa push 0x120ff754 */
  push32((uint32_t)(0x120ff754u));
  /* 120f40af push edx */
  push32((uint32_t)(EDX));
  /* 120f40b0 call edi */
  call_ind((uint32_t)(EDI), 0x120f40b2u);
  /* 120f40b2 lea eax, [esi + 0x70] */
  EAX = ((uint32_t)(ESI + 0x70));
  /* 120f40b5 push 0x120ff744 */
  push32((uint32_t)(0x120ff744u));
  /* 120f40ba push eax */
  push32((uint32_t)(EAX));
  /* 120f40bb call edi */
  call_ind((uint32_t)(EDI), 0x120f40bdu);
  /* 120f40bd add esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f40c0 push 0x120ff738 */
  push32((uint32_t)(0x120ff738u));
  /* 120f40c5 push esi */
  push32((uint32_t)(ESI));
  /* 120f40c6 call edi */
  call_ind((uint32_t)(EDI), 0x120f40c8u);
  /* 120f40c8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f40cb pop edi */
  EDI = (pop32());
  /* 120f40cc pop esi */
  ESI = (pop32());
  /* 120f40cd ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f40ce:;
  /* 120f40ce mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f40d2 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f40d8 push 0x120ff728 */
  push32((uint32_t)(0x120ff728u));
  /* 120f40dd push esi */
  push32((uint32_t)(ESI));
  /* 120f40de call edi */
  call_ind((uint32_t)(EDI), 0x120f40e0u);
  /* 120f40e0 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f40e3 push 0x120ff714 */
  push32((uint32_t)(0x120ff714u));
  /* 120f40e8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f40e9 call edi */
  call_ind((uint32_t)(EDI), 0x120f40ebu);
  /* 120f40eb lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f40ee push 0x120ff704 */
  push32((uint32_t)(0x120ff704u));
  /* 120f40f3 push edx */
  push32((uint32_t)(EDX));
  /* 120f40f4 call edi */
  call_ind((uint32_t)(EDI), 0x120f40f6u);
  /* 120f40f6 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f40f9 push 0x120ff6f8 */
  push32((uint32_t)(0x120ff6f8u));
  /* 120f40fe push eax */
  push32((uint32_t)(EAX));
  /* 120f40ff call edi */
  call_ind((uint32_t)(EDI), 0x120f4101u);
  /* 120f4101 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f4104 push 0x120ff6ec */
  push32((uint32_t)(0x120ff6ecu));
  /* 120f4109 push ecx */
  push32((uint32_t)(ECX));
  /* 120f410a call edi */
  call_ind((uint32_t)(EDI), 0x120f410cu);
  /* 120f410c lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f410f push 0x120ff6dc */
  push32((uint32_t)(0x120ff6dcu));
  /* 120f4114 push edx */
  push32((uint32_t)(EDX));
  /* 120f4115 call edi */
  call_ind((uint32_t)(EDI), 0x120f4117u);
  /* 120f4117 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f411a push 0x120ff6cc */
  push32((uint32_t)(0x120ff6ccu));
  /* 120f411f push eax */
  push32((uint32_t)(EAX));
  /* 120f4120 call edi */
  call_ind((uint32_t)(EDI), 0x120f4122u);
  /* 120f4122 lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f4125 push 0x120ff6bc */
  push32((uint32_t)(0x120ff6bcu));
  /* 120f412a push ecx */
  push32((uint32_t)(ECX));
  /* 120f412b call edi */
  call_ind((uint32_t)(EDI), 0x120f412du);
  /* 120f412d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4130 lea edx, [esi + 0x40] */
  EDX = ((uint32_t)(ESI + 0x40));
  /* 120f4133 push 0x120ff6a8 */
  push32((uint32_t)(0x120ff6a8u));
  /* 120f4138 push edx */
  push32((uint32_t)(EDX));
  /* 120f4139 call edi */
  call_ind((uint32_t)(EDI), 0x120f413bu);
  /* 120f413b lea eax, [esi + 0x48] */
  EAX = ((uint32_t)(ESI + 0x48));
  /* 120f413e push 0x120ff698 */
  push32((uint32_t)(0x120ff698u));
  /* 120f4143 push eax */
  push32((uint32_t)(EAX));
  /* 120f4144 call edi */
  call_ind((uint32_t)(EDI), 0x120f4146u);
  /* 120f4146 lea ecx, [esi + 0x50] */
  ECX = ((uint32_t)(ESI + 0x50));
  /* 120f4149 push 0x120ff688 */
  push32((uint32_t)(0x120ff688u));
  /* 120f414e push ecx */
  push32((uint32_t)(ECX));
  /* 120f414f call edi */
  call_ind((uint32_t)(EDI), 0x120f4151u);
  /* 120f4151 lea edx, [esi + 0x58] */
  EDX = ((uint32_t)(ESI + 0x58));
  /* 120f4154 push 0x120ff674 */
  push32((uint32_t)(0x120ff674u));
  /* 120f4159 push edx */
  push32((uint32_t)(EDX));
  /* 120f415a call edi */
  call_ind((uint32_t)(EDI), 0x120f415cu);
  /* 120f415c lea eax, [esi + 0x60] */
  EAX = ((uint32_t)(ESI + 0x60));
  /* 120f415f push 0x120ff668 */
  push32((uint32_t)(0x120ff668u));
  /* 120f4164 push eax */
  push32((uint32_t)(EAX));
  /* 120f4165 call edi */
  call_ind((uint32_t)(EDI), 0x120f4167u);
  /* 120f4167 lea ecx, [esi + 0x68] */
  ECX = ((uint32_t)(ESI + 0x68));
  /* 120f416a push 0x120ff650 */
  push32((uint32_t)(0x120ff650u));
  /* 120f416f push ecx */
  push32((uint32_t)(ECX));
  /* 120f4170 call edi */
  call_ind((uint32_t)(EDI), 0x120f4172u);
  /* 120f4172 lea edx, [esi + 0x70] */
  EDX = ((uint32_t)(ESI + 0x70));
  /* 120f4175 push 0x120ff638 */
  push32((uint32_t)(0x120ff638u));
  /* 120f417a push edx */
  push32((uint32_t)(EDX));
  /* 120f417b call edi */
  call_ind((uint32_t)(EDI), 0x120f417du);
  /* 120f417d add esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4180 push 0x120ff62c */
  push32((uint32_t)(0x120ff62cu));
  /* 120f4185 push esi */
  push32((uint32_t)(ESI));
  /* 120f4186 call edi */
  call_ind((uint32_t)(EDI), 0x120f4188u);
  /* 120f4188 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f418b pop edi */
  EDI = (pop32());
  /* 120f418c pop esi */
  ESI = (pop32());
  /* 120f418d ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
L_120f418e:;
  /* 120f418e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f4192 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f4198 push 0x120ff618 */
  push32((uint32_t)(0x120ff618u));
  /* 120f419d push esi */
  push32((uint32_t)(ESI));
  /* 120f419e call edi */
  call_ind((uint32_t)(EDI), 0x120f41a0u);
  /* 120f41a0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f41a3 push 0x120ff608 */
  push32((uint32_t)(0x120ff608u));
  /* 120f41a8 push eax */
  push32((uint32_t)(EAX));
  /* 120f41a9 call edi */
  call_ind((uint32_t)(EDI), 0x120f41abu);
  /* 120f41ab lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f41ae push 0x120ff5fc */
  push32((uint32_t)(0x120ff5fcu));
  /* 120f41b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120f41b4 call edi */
  call_ind((uint32_t)(EDI), 0x120f41b6u);
  /* 120f41b6 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f41b9 push 0x120ff5f0 */
  push32((uint32_t)(0x120ff5f0u));
  /* 120f41be push edx */
  push32((uint32_t)(EDX));
  /* 120f41bf call edi */
  call_ind((uint32_t)(EDI), 0x120f41c1u);
  /* 120f41c1 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f41c4 push 0x120ff5e4 */
  push32((uint32_t)(0x120ff5e4u));
  /* 120f41c9 push eax */
  push32((uint32_t)(EAX));
  /* 120f41ca call edi */
  call_ind((uint32_t)(EDI), 0x120f41ccu);
  /* 120f41cc lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f41cf push 0x120ff5d4 */
  push32((uint32_t)(0x120ff5d4u));
  /* 120f41d4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f41d5 call edi */
  call_ind((uint32_t)(EDI), 0x120f41d7u);
  /* 120f41d7 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f41da push 0x120ff5c4 */
  push32((uint32_t)(0x120ff5c4u));
  /* 120f41df push edx */
  push32((uint32_t)(EDX));
  /* 120f41e0 call edi */
  call_ind((uint32_t)(EDI), 0x120f41e2u);
  /* 120f41e2 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f41e5 push 0x120ff5b8 */
  push32((uint32_t)(0x120ff5b8u));
  /* 120f41ea push eax */
  push32((uint32_t)(EAX));
  /* 120f41eb call edi */
  call_ind((uint32_t)(EDI), 0x120f41edu);
  /* 120f41ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f41f0 lea ecx, [esi + 0x40] */
  ECX = ((uint32_t)(ESI + 0x40));
  /* 120f41f3 push 0x120ff5a0 */
  push32((uint32_t)(0x120ff5a0u));
  /* 120f41f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f41f9 call edi */
  call_ind((uint32_t)(EDI), 0x120f41fbu);
  /* 120f41fb lea edx, [esi + 0x48] */
  EDX = ((uint32_t)(ESI + 0x48));
  /* 120f41fe push 0x120ff594 */
  push32((uint32_t)(0x120ff594u));
  /* 120f4203 push edx */
  push32((uint32_t)(EDX));
  /* 120f4204 call edi */
  call_ind((uint32_t)(EDI), 0x120f4206u);
  /* 120f4206 lea eax, [esi + 0x50] */
  EAX = ((uint32_t)(ESI + 0x50));
  /* 120f4209 push 0x120ff584 */
  push32((uint32_t)(0x120ff584u));
  /* 120f420e push eax */
  push32((uint32_t)(EAX));
  /* 120f420f call edi */
  call_ind((uint32_t)(EDI), 0x120f4211u);
  /* 120f4211 lea ecx, [esi + 0x58] */
  ECX = ((uint32_t)(ESI + 0x58));
  /* 120f4214 push 0x120ff574 */
  push32((uint32_t)(0x120ff574u));
  /* 120f4219 push ecx */
  push32((uint32_t)(ECX));
  /* 120f421a call edi */
  call_ind((uint32_t)(EDI), 0x120f421cu);
  /* 120f421c lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 120f421f push 0x120ff560 */
  push32((uint32_t)(0x120ff560u));
  /* 120f4224 push edx */
  push32((uint32_t)(EDX));
  /* 120f4225 call edi */
  call_ind((uint32_t)(EDI), 0x120f4227u);
  /* 120f4227 lea eax, [esi + 0x68] */
  EAX = ((uint32_t)(ESI + 0x68));
  /* 120f422a push 0x120ff554 */
  push32((uint32_t)(0x120ff554u));
  /* 120f422f push eax */
  push32((uint32_t)(EAX));
  /* 120f4230 call edi */
  call_ind((uint32_t)(EDI), 0x120f4232u);
  /* 120f4232 lea ecx, [esi + 0x70] */
  ECX = ((uint32_t)(ESI + 0x70));
  /* 120f4235 push 0x120ff540 */
  push32((uint32_t)(0x120ff540u));
  /* 120f423a push ecx */
  push32((uint32_t)(ECX));
  /* 120f423b call edi */
  call_ind((uint32_t)(EDI), 0x120f423du);
  /* 120f423d lea edx, [esi + 0x78] */
  EDX = ((uint32_t)(ESI + 0x78));
  /* 120f4240 push 0x120ff534 */
  push32((uint32_t)(0x120ff534u));
  /* 120f4245 push edx */
  push32((uint32_t)(EDX));
  /* 120f4246 call edi */
  call_ind((uint32_t)(EDI), 0x120f4248u);
  /* 120f4248 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f424b lea eax, [esi + 0x80] */
  EAX = ((uint32_t)(ESI + 0x80));
  /* 120f4251 push 0x120ff528 */
  push32((uint32_t)(0x120ff528u));
  /* 120f4256 push eax */
  push32((uint32_t)(EAX));
  /* 120f4257 call edi */
  call_ind((uint32_t)(EDI), 0x120f4259u);
  /* 120f4259 add esi, 0x88 */
  { uint32_t _a=(ESI),_b=(0x88u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f425f push 0x120ff51c */
  push32((uint32_t)(0x120ff51cu));
  /* 120f4264 push esi */
  push32((uint32_t)(ESI));
  /* 120f4265 call edi */
  call_ind((uint32_t)(EDI), 0x120f4267u);
  /* 120f4267 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f426a:;
  /* 120f426a pop edi */
  EDI = (pop32());
  /* 120f426b pop esi */
  ESI = (pop32());
  /* 120f426c ret  */
  ESPCHK(0x120f3300u, _esp0);
  ESP += 4; return;
}

/* FUN_100042c0 @ 0x120f42c0 (408 bytes, 142 insns) */
void f_120f42c0(void) {
  FTRACE(0x120f42c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f42c0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f42c4 push esi */
  push32((uint32_t)(ESI));
  /* 120f42c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f42ca push edi */
  push32((uint32_t)(EDI));
  /* 120f42cb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f42cc je 0x120f43de */
  if (C.zf) goto L_120f43de;
  /* 120f42d2 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f42d5 je 0x120f4360 */
  if (C.zf) goto L_120f4360;
  /* 120f42db dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f42dc jne 0x120f4455 */
  if (!C.zf) goto L_120f4455;
  /* 120f42e2 cmp dword ptr [esp + 0x10], 9 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f42e7 jne 0x120f4455 */
  if (!C.zf) goto L_120f4455;
  /* 120f42ed mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f42f1 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f42f7 push 0x12100a10 */
  push32((uint32_t)(0x12100a10u));
  /* 120f42fc push esi */
  push32((uint32_t)(ESI));
  /* 120f42fd call edi */
  call_ind((uint32_t)(EDI), 0x120f42ffu);
  /* 120f42ff lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f4302 push 0x12100a04 */
  push32((uint32_t)(0x12100a04u));
  /* 120f4307 push eax */
  push32((uint32_t)(EAX));
  /* 120f4308 call edi */
  call_ind((uint32_t)(EDI), 0x120f430au);
  /* 120f430a lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 120f430d push 0x121009f4 */
  push32((uint32_t)(0x121009f4u));
  /* 120f4312 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4313 call edi */
  call_ind((uint32_t)(EDI), 0x120f4315u);
  /* 120f4315 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 120f4318 push 0x121009e8 */
  push32((uint32_t)(0x121009e8u));
  /* 120f431d push edx */
  push32((uint32_t)(EDX));
  /* 120f431e call edi */
  call_ind((uint32_t)(EDI), 0x120f4320u);
  /* 120f4320 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 120f4323 push 0x121009dc */
  push32((uint32_t)(0x121009dcu));
  /* 120f4328 push eax */
  push32((uint32_t)(EAX));
  /* 120f4329 call edi */
  call_ind((uint32_t)(EDI), 0x120f432bu);
  /* 120f432b lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 120f432e push 0x121009cc */
  push32((uint32_t)(0x121009ccu));
  /* 120f4333 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4334 call edi */
  call_ind((uint32_t)(EDI), 0x120f4336u);
  /* 120f4336 lea edx, [esi + 0x30] */
  EDX = ((uint32_t)(ESI + 0x30));
  /* 120f4339 push 0x121009bc */
  push32((uint32_t)(0x121009bcu));
  /* 120f433e push edx */
  push32((uint32_t)(EDX));
  /* 120f433f call edi */
  call_ind((uint32_t)(EDI), 0x120f4341u);
  /* 120f4341 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 120f4344 push 0x121009b0 */
  push32((uint32_t)(0x121009b0u));
  /* 120f4349 push eax */
  push32((uint32_t)(EAX));
  /* 120f434a call edi */
  call_ind((uint32_t)(EDI), 0x120f434cu);
  /* 120f434c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f434f add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4352 push 0x121009a4 */
  push32((uint32_t)(0x121009a4u));
  /* 120f4357 push esi */
  push32((uint32_t)(ESI));
  /* 120f4358 call edi */
  call_ind((uint32_t)(EDI), 0x120f435au);
  /* 120f435a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f435d pop edi */
  EDI = (pop32());
  /* 120f435e pop esi */
  ESI = (pop32());
  /* 120f435f ret  */
  ESPCHK(0x120f42c0u, _esp0);
  ESP += 4; return;
L_120f4360:;
  /* 120f4360 cmp dword ptr [esp + 0x10], 9 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4365 jne 0x120f4455 */
  if (!C.zf) goto L_120f4455;
  /* 120f436b mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f436f mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f4375 push 0x12100998 */
  push32((uint32_t)(0x12100998u));
  /* 120f437a push esi */
  push32((uint32_t)(ESI));
  /* 120f437b call edi */
  call_ind((uint32_t)(EDI), 0x120f437du);
  /* 120f437d lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 120f4380 push 0x1210098c */
  push32((uint32_t)(0x1210098cu));
  /* 120f4385 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4386 call edi */
  call_ind((uint32_t)(EDI), 0x120f4388u);
  /* 120f4388 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 120f438b push 0x1210097c */
  push32((uint32_t)(0x1210097cu));
  /* 120f4390 push edx */
  push32((uint32_t)(EDX));
  /* 120f4391 call edi */
  call_ind((uint32_t)(EDI), 0x120f4393u);
  /* 120f4393 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f4396 push 0x12100970 */
  push32((uint32_t)(0x12100970u));
  /* 120f439b push eax */
  push32((uint32_t)(EAX));
  /* 120f439c call edi */
  call_ind((uint32_t)(EDI), 0x120f439eu);
  /* 120f439e lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 120f43a1 push 0x12100964 */
  push32((uint32_t)(0x12100964u));
  /* 120f43a6 push ecx */
  push32((uint32_t)(ECX));
  /* 120f43a7 call edi */
  call_ind((uint32_t)(EDI), 0x120f43a9u);
  /* 120f43a9 lea edx, [esi + 0x28] */
  EDX = ((uint32_t)(ESI + 0x28));
  /* 120f43ac push 0x12100954 */
  push32((uint32_t)(0x12100954u));
  /* 120f43b1 push edx */
  push32((uint32_t)(EDX));
  /* 120f43b2 call edi */
  call_ind((uint32_t)(EDI), 0x120f43b4u);
  /* 120f43b4 lea eax, [esi + 0x30] */
  EAX = ((uint32_t)(ESI + 0x30));
  /* 120f43b7 push 0x12100944 */
  push32((uint32_t)(0x12100944u));
  /* 120f43bc push eax */
  push32((uint32_t)(EAX));
  /* 120f43bd call edi */
  call_ind((uint32_t)(EDI), 0x120f43bfu);
  /* 120f43bf lea ecx, [esi + 0x38] */
  ECX = ((uint32_t)(ESI + 0x38));
  /* 120f43c2 push 0x12100938 */
  push32((uint32_t)(0x12100938u));
  /* 120f43c7 push ecx */
  push32((uint32_t)(ECX));
  /* 120f43c8 call edi */
  call_ind((uint32_t)(EDI), 0x120f43cau);
  /* 120f43ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f43cd add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f43d0 push 0x1210092c */
  push32((uint32_t)(0x1210092cu));
  /* 120f43d5 push esi */
  push32((uint32_t)(ESI));
  /* 120f43d6 call edi */
  call_ind((uint32_t)(EDI), 0x120f43d8u);
  /* 120f43d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f43db pop edi */
  EDI = (pop32());
  /* 120f43dc pop esi */
  ESI = (pop32());
  /* 120f43dd ret  */
  ESPCHK(0x120f42c0u, _esp0);
  ESP += 4; return;
L_120f43de:;
  /* 120f43de cmp dword ptr [esp + 0x10], 9 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f43e3 jne 0x120f4455 */
  if (!C.zf) goto L_120f4455;
  /* 120f43e5 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f43e9 mov edi, dword ptr [0x120fd1b4] */
  EDI = (r32((uint32_t)(0x120fd1b4)));
  /* 120f43ef push 0x12100920 */
  push32((uint32_t)(0x12100920u));
  /* 120f43f4 push esi */
  push32((uint32_t)(ESI));
  /* 120f43f5 call edi */
  call_ind((uint32_t)(EDI), 0x120f43f7u);
  /* 120f43f7 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 120f43fa push 0x12100914 */
  push32((uint32_t)(0x12100914u));
  /* 120f43ff push edx */
  push32((uint32_t)(EDX));
  /* 120f4400 call edi */
  call_ind((uint32_t)(EDI), 0x120f4402u);
  /* 120f4402 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 120f4405 push 0x12100904 */
  push32((uint32_t)(0x12100904u));
  /* 120f440a push eax */
  push32((uint32_t)(EAX));
  /* 120f440b call edi */
  call_ind((uint32_t)(EDI), 0x120f440du);
  /* 120f440d lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 120f4410 push 0x121008f8 */
  push32((uint32_t)(0x121008f8u));
  /* 120f4415 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4416 call edi */
  call_ind((uint32_t)(EDI), 0x120f4418u);
  /* 120f4418 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 120f441b push 0x121008ec */
  push32((uint32_t)(0x121008ecu));
  /* 120f4420 push edx */
  push32((uint32_t)(EDX));
  /* 120f4421 call edi */
  call_ind((uint32_t)(EDI), 0x120f4423u);
  /* 120f4423 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 120f4426 push 0x121008dc */
  push32((uint32_t)(0x121008dcu));
  /* 120f442b push eax */
  push32((uint32_t)(EAX));
  /* 120f442c call edi */
  call_ind((uint32_t)(EDI), 0x120f442eu);
  /* 120f442e lea ecx, [esi + 0x30] */
  ECX = ((uint32_t)(ESI + 0x30));
  /* 120f4431 push 0x121008cc */
  push32((uint32_t)(0x121008ccu));
  /* 120f4436 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4437 call edi */
  call_ind((uint32_t)(EDI), 0x120f4439u);
  /* 120f4439 lea edx, [esi + 0x38] */
  EDX = ((uint32_t)(ESI + 0x38));
  /* 120f443c push 0x121008c0 */
  push32((uint32_t)(0x121008c0u));
  /* 120f4441 push edx */
  push32((uint32_t)(EDX));
  /* 120f4442 call edi */
  call_ind((uint32_t)(EDI), 0x120f4444u);
  /* 120f4444 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4447 add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f444a push 0x121008b4 */
  push32((uint32_t)(0x121008b4u));
  /* 120f444f push esi */
  push32((uint32_t)(ESI));
  /* 120f4450 call edi */
  call_ind((uint32_t)(EDI), 0x120f4452u);
  /* 120f4452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f4455:;
  /* 120f4455 pop edi */
  EDI = (pop32());
  /* 120f4456 pop esi */
  ESI = (pop32());
  /* 120f4457 ret  */
  ESPCHK(0x120f42c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x120f4460 (13 bytes, 4 insns) */
void f_120f4460(void) {
  FTRACE(0x120f4460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4460 call 0x120f4c53 */
  push32(0x120f4465u); f_120f4c53();
  /* 120f4465 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f4469 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 120f446c ret  */
  ESPCHK(0x120f4460u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x120f446d (34 bytes, 9 insns) */
void f_120f446d(void) {
  FTRACE(0x120f446du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f446d call 0x120f4c53 */
  push32(0x120f4472u); f_120f4c53();
  /* 120f4472 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120f4475 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f447b add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4481 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 120f4484 mov eax, ecx */
  EAX = (ECX);
  /* 120f4486 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120f4489 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f448e ret  */
  ESPCHK(0x120f446du, _esp0);
  ESP += 4; return;
}

/* FUN_1000448f @ 0x120f448f (220 bytes, 75 insns) */
void f_120f448f(void) {
  FTRACE(0x120f448fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f448f push ebp */
  push32((uint32_t)(EBP));
  /* 120f4490 mov ebp, esp */
  EBP = (ESP);
  /* 120f4492 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f4498 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f449b push eax */
  push32((uint32_t)(EAX));
  /* 120f449c call dword ptr [0x120fd09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd09c))), 0x120f44a2u);
  /* 120f44a2 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120f44a5 push eax */
  push32((uint32_t)(EAX));
  /* 120f44a6 call dword ptr [0x120fd098] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd098))), 0x120f44acu);
  /* 120f44ac mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 120f44b0 cmp ax, word ptr [0x12103e8a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x12103e8a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f44b7 jne 0x120f44f4 */
  if (!C.zf) goto L_120f44f4;
  /* 120f44b9 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 120f44bd cmp ax, word ptr [0x12103e88] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x12103e88))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f44c4 jne 0x120f44f4 */
  if (!C.zf) goto L_120f44f4;
  /* 120f44c6 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 120f44ca cmp ax, word ptr [0x12103e86] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x12103e86))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f44d1 jne 0x120f44f4 */
  if (!C.zf) goto L_120f44f4;
  /* 120f44d3 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 120f44d7 cmp ax, word ptr [0x12103e82] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x12103e82))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f44de jne 0x120f44f4 */
  if (!C.zf) goto L_120f44f4;
  /* 120f44e0 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 120f44e4 cmp ax, word ptr [0x12103e80] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x12103e80))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f44eb jne 0x120f44f4 */
  if (!C.zf) goto L_120f44f4;
  /* 120f44ed mov eax, dword ptr [0x12103e78] */
  EAX = (r32((uint32_t)(0x12103e78)));
  /* 120f44f2 jmp 0x120f4539 */
  goto L_120f4539;
L_120f44f4:;
  /* 120f44f4 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 120f44fa push eax */
  push32((uint32_t)(EAX));
  /* 120f44fb call dword ptr [0x120fd094] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd094))), 0x120f4501u);
  /* 120f4501 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4504 je 0x120f4521 */
  if (C.zf) goto L_120f4521;
  /* 120f4506 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4509 jne 0x120f451d */
  if (!C.zf) goto L_120f451d;
  /* 120f450b cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f4510 je 0x120f451d */
  if (C.zf) goto L_120f451d;
  /* 120f4512 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4516 je 0x120f451d */
  if (C.zf) goto L_120f451d;
  /* 120f4518 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f451a pop eax */
  EAX = (pop32());
  /* 120f451b jmp 0x120f4524 */
  goto L_120f4524;
L_120f451d:;
  /* 120f451d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f451f jmp 0x120f4524 */
  goto L_120f4524;
L_120f4521:;
  /* 120f4521 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120f4524:;
  /* 120f4524 push esi */
  push32((uint32_t)(ESI));
  /* 120f4525 push edi */
  push32((uint32_t)(EDI));
  /* 120f4526 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 120f4529 mov edi, 0x12103e80 */
  EDI = (0x12103e80u);
  /* 120f452e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f452f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f4530 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f4531 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f4532 pop edi */
  EDI = (pop32());
  /* 120f4533 mov dword ptr [0x12103e78], eax */
  w32((uint32_t)(0x12103e78), (EAX));
  /* 120f4538 pop esi */
  ESI = (pop32());
L_120f4539:;
  /* 120f4539 push eax */
  push32((uint32_t)(EAX));
  /* 120f453a movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 120f453e push eax */
  push32((uint32_t)(EAX));
  /* 120f453f movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 120f4543 push eax */
  push32((uint32_t)(EAX));
  /* 120f4544 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 120f4548 push eax */
  push32((uint32_t)(EAX));
  /* 120f4549 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 120f454d push eax */
  push32((uint32_t)(EAX));
  /* 120f454e movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 120f4552 push eax */
  push32((uint32_t)(EAX));
  /* 120f4553 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 120f4557 push eax */
  push32((uint32_t)(EAX));
  /* 120f4558 call 0x120f4d5a */
  push32(0x120f455du); f_120f4d5a();
  /* 120f455d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4560 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4563 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f4565 je 0x120f4569 */
  if (C.zf) goto L_120f4569;
  /* 120f4567 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120f4569:;
  /* 120f4569 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f456a ret  */
  ESPCHK(0x120f448fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000456b @ 0x120f456b (11 bytes, 4 insns) */
void f_120f456b(void) {
  FTRACE(0x120f456bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f456b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 120f456f call 0x120f4e1c */
  push32(0x120f4574u); f_120f4e1c();
  /* 120f4574 pop ecx */
  ECX = (pop32());
  /* 120f4575 ret  */
  ESPCHK(0x120f456bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004576 @ 0x120f4576 (45 bytes, 17 insns) */
void f_120f4576(void) {
  FTRACE(0x120f4576u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4576 push ebp */
  push32((uint32_t)(EBP));
  /* 120f4577 mov ebp, esp */
  EBP = (ESP);
  /* 120f4579 push ecx */
  push32((uint32_t)(ECX));
  /* 120f457a push ebx */
  push32((uint32_t)(EBX));
  /* 120f457b push esi */
  push32((uint32_t)(ESI));
  /* 120f457c push edi */
  push32((uint32_t)(EDI));
  /* 120f457d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4580 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4583 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f4586 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 120f458d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f458f mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120f4595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4598 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f459b mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 120f459e mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 120f45a1 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100045aa @ 0x120f45aa (7 bytes, 4 insns) */
void f_120f45aa(void) {
  FTRACE(0x120f45aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f45aa pop eax */
  EAX = (pop32());
  /* 120f45ab pop ecx */
  ECX = (pop32());
  /* 120f45ac xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 120f45af jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100045b1 @ 0x120f45b1 (7 bytes, 4 insns) */
void f_120f45b1(void) {
  FTRACE(0x120f45b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f45b1 pop eax */
  EAX = (pop32());
  /* 120f45b2 pop ecx */
  ECX = (pop32());
  /* 120f45b3 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 120f45b6 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100045b8 @ 0x120f45b8 (79 bytes, 29 insns) */
void f_120f45b8(void) {
  FTRACE(0x120f45b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f45b8 push ebp */
  push32((uint32_t)(EBP));
  /* 120f45b9 mov ebp, esp */
  EBP = (ESP);
  /* 120f45bb push ecx */
  push32((uint32_t)(ECX));
  /* 120f45bc push ecx */
  push32((uint32_t)(ECX));
  /* 120f45bd push ebx */
  push32((uint32_t)(EBX));
  /* 120f45be push esi */
  push32((uint32_t)(ESI));
  /* 120f45bf push edi */
  push32((uint32_t)(EDI));
  /* 120f45c0 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f45c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f45c9 mov dword ptr [ebp - 4], 0x120f45e0 */
  w32((uint32_t)(EBP + -0x4), (0x120f45e0u));
  /* 120f45d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f45d2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f45d5 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 120f45d8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f45db call 0x120fc932 */
  push32(0x120f45e0u); f_120fc932();
  /* 120f45e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f45e3 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 120f45e6 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 120f45e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f45eb mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120f45ee mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f45f4 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f45f7 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 120f45f9 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 120f4600 pop edi */
  EDI = (pop32());
  /* 120f4601 pop esi */
  ESI = (pop32());
  /* 120f4602 pop ebx */
  EBX = (pop32());
  /* 120f4603 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f4604 ret 8 */
  ESPCHK(0x120f45b8u, _esp0);
  ESP += 12; return;
}

/* FUN_10004607 @ 0x120f4607 (54 bytes, 27 insns) */
void f_120f4607(void) {
  FTRACE(0x120f4607u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4607 push ebp */
  push32((uint32_t)(EBP));
  /* 120f4608 mov ebp, esp */
  EBP = (ESP);
  /* 120f460a sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f460d push ebx */
  push32((uint32_t)(EBX));
  /* 120f460e push esi */
  push32((uint32_t)(ESI));
  /* 120f460f push edi */
  push32((uint32_t)(EDI));
  /* 120f4610 cld  */
  C.df=0;
  /* 120f4611 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f4614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f4616 push eax */
  push32((uint32_t)(EAX));
  /* 120f4617 push eax */
  push32((uint32_t)(EAX));
  /* 120f4618 push eax */
  push32((uint32_t)(EAX));
  /* 120f4619 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 120f461c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f461f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f4622 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f4625 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f4628 call 0x120f4f05 */
  push32(0x120f462du); f_120f4f05();
  /* 120f462d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4630 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 120f4633 pop edi */
  EDI = (pop32());
  /* 120f4634 pop esi */
  ESI = (pop32());
  /* 120f4635 pop ebx */
  EBX = (pop32());
  /* 120f4636 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f4639 mov esp, ebp */
  ESP = (EBP);
  /* 120f463b pop ebp */
  EBP = (pop32());
  /* 120f463c ret  */
  ESPCHK(0x120f4607u, _esp0);
  ESP += 4; return;
}

/* FUN_1000463d @ 0x120f463d (84 bytes, 26 insns) */
void f_120f463d(void) {
  FTRACE(0x120f463du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f463d push ebp */
  push32((uint32_t)(EBP));
  /* 120f463e mov ebp, esp */
  EBP = (ESP);
  /* 120f4640 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f4643 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4646 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 120f464a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f464d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120f4650 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f4653 mov dword ptr [ebp - 0x10], 0x120f4691 */
  w32((uint32_t)(EBP + -0x10), (0x120f4691u));
  /* 120f465a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f465b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f465e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f4661 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f4667 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120f466a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120f4670 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120f4676 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f4679 push ecx */
  push32((uint32_t)(ECX));
  /* 120f467a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f467d call 0x120f5720 */
  push32(0x120f4682u); f_120f5720();
  /* 120f4682 mov ecx, eax */
  ECX = (EAX);
  /* 120f4684 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f4687 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120f468d mov eax, ecx */
  EAX = (ECX);
  /* 120f468f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f4690 ret  */
  ESPCHK(0x120f463du, _esp0);
  ESP += 4; return;
}

/* FUN_10004691 @ 0x120f4691 (37 bytes, 16 insns) */
void f_120f4691(void) {
  FTRACE(0x120f4691u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4691 push ebp */
  push32((uint32_t)(EBP));
  /* 120f4692 mov ebp, esp */
  EBP = (ESP);
  /* 120f4694 cld  */
  C.df=0;
  /* 120f4695 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4698 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f469a push eax */
  push32((uint32_t)(EAX));
  /* 120f469b push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 120f469e push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 120f46a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f46a3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f46a6 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 120f46a9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f46ac call 0x120f4f05 */
  push32(0x120f46b1u); f_120f4f05();
  /* 120f46b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f46b4 pop ebp */
  EBP = (pop32());
  /* 120f46b5 ret  */
  ESPCHK(0x120f4691u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b6 @ 0x120f46b6 (182 bytes, 57 insns) */
void f_120f46b6(void) {
  FTRACE(0x120f46b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f46b6 push ebp */
  push32((uint32_t)(EBP));
  /* 120f46b7 mov ebp, esp */
  EBP = (ESP);
  /* 120f46b9 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f46bc push ebx */
  push32((uint32_t)(EBX));
  /* 120f46bd push esi */
  push32((uint32_t)(ESI));
  /* 120f46be push edi */
  push32((uint32_t)(EDI));
  /* 120f46bf and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 120f46c3 mov dword ptr [ebp - 0x24], 0x120f476c */
  w32((uint32_t)(EBP + -0x24), (0x120f476cu));
  /* 120f46ca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f46cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120f46d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f46d3 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120f46d6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120f46d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120f46dc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120f46df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120f46e2 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 120f46e6 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 120f46ea and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 120f46ee and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f46f2 mov dword ptr [ebp - 0x10], 0x120f473e */
  w32((uint32_t)(EBP + -0x10), (0x120f473eu));
  /* 120f46f9 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 120f46fc mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 120f46ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f4705 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120f4708 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120f470e mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120f4714 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 120f471b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f471e mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120f4721 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f4724 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120f4727 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120f472a push eax */
  push32((uint32_t)(EAX));
  /* 120f472b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f472e push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 120f4730 call 0x120f4c53 */
  push32(0x120f4735u); f_120f4c53();
  /* 120f4735 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x120f4738u);
  /* 120f4738 pop ecx */
  ECX = (pop32());
  /* 120f4739 pop ecx */
  ECX = (pop32());
  /* 120f473a and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 120f473e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4742 je 0x120f475b */
  if (C.zf) goto L_120f475b;
  /* 120f4744 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 120f474b mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f474d mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f4750 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 120f4752 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 120f4759 jmp 0x120f4764 */
  goto L_120f4764;
L_120f475b:;
  /* 120f475b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f475e mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_120f4764:;
  /* 120f4764 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 120f4767 pop edi */
  EDI = (pop32());
  /* 120f4768 pop esi */
  ESI = (pop32());
  /* 120f4769 pop ebx */
  EBX = (pop32());
  /* 120f476a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f476b ret  */
  ESPCHK(0x120f46b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000476c @ 0x120f476c (114 bytes, 47 insns) */
void f_120f476c(void) {
  FTRACE(0x120f476cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f476c push ebp */
  push32((uint32_t)(EBP));
  /* 120f476d mov ebp, esp */
  EBP = (ESP);
  /* 120f476f push ebx */
  push32((uint32_t)(EBX));
  /* 120f4770 push esi */
  push32((uint32_t)(ESI));
  /* 120f4771 push edi */
  push32((uint32_t)(EDI));
  /* 120f4772 cld  */
  C.df=0;
  /* 120f4773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4776 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 120f4779 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 120f477c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f477e je 0x120f478f */
  if (C.zf) goto L_120f478f;
  /* 120f4780 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4783 mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 120f478a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f478c pop eax */
  EAX = (pop32());
  /* 120f478d jmp 0x120f47dc */
  goto L_120f47dc;
L_120f478f:;
  /* 120f478f push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4791 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4794 push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 120f4797 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f479a push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 120f479d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f47a0 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 120f47a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f47a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f47a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f47ab push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 120f47ae push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f47b1 call 0x120f4f05 */
  push32(0x120f47b6u); f_120f4f05();
  /* 120f47b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f47b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f47bc cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f47c0 jne 0x120f47cd */
  if (!C.zf) goto L_120f47cd;
  /* 120f47c2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f47c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f47c8 call 0x120f45b8 */
  push32(0x120f47cdu); f_120f45b8();
L_120f47cd:;
  /* 120f47cd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f47d0 mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 120f47d3 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 120f47d6 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 120f47d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f47db pop eax */
  EAX = (pop32());
L_120f47dc:;
  /* 120f47dc pop edi */
  EDI = (pop32());
  /* 120f47dd pop esi */
  ESI = (pop32());
  /* 120f47de pop ebx */
  EBX = (pop32());
  /* 120f47df pop ebp */
  EBP = (pop32());
  /* 120f47e0 ret  */
  ESPCHK(0x120f476cu, _esp0);
  ESP += 4; return;
}

/* FUN_100047e1 @ 0x120f47e1 (123 bytes, 51 insns) */
void f_120f47e1(void) {
  FTRACE(0x120f47e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f47e1 push ebp */
  push32((uint32_t)(EBP));
  /* 120f47e2 mov ebp, esp */
  EBP = (ESP);
  /* 120f47e4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f47e5 push ebx */
  push32((uint32_t)(EBX));
  /* 120f47e6 push esi */
  push32((uint32_t)(ESI));
  /* 120f47e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f47eb push edi */
  push32((uint32_t)(EDI));
  /* 120f47ec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f47ef mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 120f47f2 mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 120f47f5 mov eax, esi */
  EAX = (ESI);
  /* 120f47f7 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 120f47fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f47fd jl 0x120f4838 */
  if ((C.sf!=C.of)) goto L_120f4838;
L_120f47ff:;
  /* 120f47ff cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4802 jne 0x120f4809 */
  if (!C.zf) goto L_120f4809;
  /* 120f4804 call 0x120f57cd */
  push32(0x120f4809u); f_120f57cd();
L_120f4809:;
  /* 120f4809 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f480c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f480d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 120f4810 cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4814 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 120f4817 jge 0x120f481e */
  if ((C.sf==C.of)) goto L_120f481e;
  /* 120f4819 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f481c jle 0x120f4823 */
  if ((C.zf||C.sf!=C.of)) goto L_120f4823;
L_120f481e:;
  /* 120f481e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4821 jne 0x120f482f */
  if (!C.zf) goto L_120f482f;
L_120f4823:;
  /* 120f4823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4826 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 120f4829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f482c mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_120f482f:;
  /* 120f482f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4833 jge 0x120f47ff */
  if ((C.sf==C.of)) goto L_120f47ff;
  /* 120f4835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120f4838:;
  /* 120f4838 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f483b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f483c mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 120f483e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f4841 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120f4843 cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4846 ja 0x120f484c */
  if ((!C.cf&&!C.zf)) goto L_120f484c;
  /* 120f4848 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f484a jbe 0x120f4851 */
  if ((C.cf||C.zf)) goto L_120f4851;
L_120f484c:;
  /* 120f484c call 0x120f57cd */
  push32(0x120f4851u); f_120f57cd();
L_120f4851:;
  /* 120f4851 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 120f4854 pop edi */
  EDI = (pop32());
  /* 120f4855 pop esi */
  ESI = (pop32());
  /* 120f4856 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 120f4859 pop ebx */
  EBX = (pop32());
  /* 120f485a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f485b ret  */
  ESPCHK(0x120f47e1u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x120f485c (32 bytes, 18 insns) */
void f_120f485c(void) {
  FTRACE(0x120f485cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f485c push ebp */
  push32((uint32_t)(EBP));
  /* 120f485d mov ebp, esp */
  EBP = (ESP);
  /* 120f485f push ebx */
  push32((uint32_t)(EBX));
  /* 120f4860 push esi */
  push32((uint32_t)(ESI));
  /* 120f4861 push edi */
  push32((uint32_t)(EDI));
  /* 120f4862 push ebp */
  push32((uint32_t)(EBP));
  /* 120f4863 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f4865 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f4867 push 0x120f4874 */
  push32((uint32_t)(0x120f4874u));
  /* 120f486c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f486f call 0x120fc932 */
  push32(0x120f4874u); f_120fc932();
  /* 120f4874 pop ebp */
  EBP = (pop32());
  /* 120f4875 pop edi */
  EDI = (pop32());
  /* 120f4876 pop esi */
  ESI = (pop32());
  /* 120f4877 pop ebx */
  EBX = (pop32());
  /* 120f4878 mov esp, ebp */
  ESP = (EBP);
  /* 120f487a pop ebp */
  EBP = (pop32());
  /* 120f487b ret  */
  ESPCHK(0x120f485cu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x120f489e (104 bytes, 33 insns) */
void f_120f489e(void) {
  FTRACE(0x120f489eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f489e push ebx */
  push32((uint32_t)(EBX));
  /* 120f489f push esi */
  push32((uint32_t)(ESI));
  /* 120f48a0 push edi */
  push32((uint32_t)(EDI));
  /* 120f48a1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120f48a5 push eax */
  push32((uint32_t)(EAX));
  /* 120f48a6 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 120f48a8 push 0x120f487c */
  push32((uint32_t)(0x120f487cu));
  /* 120f48ad push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 120f48b4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_120f48bb:;
  /* 120f48bb mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 120f48bf mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 120f48c2 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 120f48c5 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f48c8 je 0x120f48f8 */
  if (C.zf) goto L_120f48f8;
  /* 120f48ca cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f48ce je 0x120f48f8 */
  if (C.zf) goto L_120f48f8;
  /* 120f48d0 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 120f48d3 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 120f48d6 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 120f48da mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 120f48dd cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f48e2 jne 0x120f48f6 */
  if (!C.zf) goto L_120f48f6;
  /* 120f48e4 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 120f48e9 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 120f48ed call 0x120f4932 */
  push32(0x120f48f2u); f_120f4932();
  /* 120f48f2 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x120f48f6u);
L_120f48f6:;
  /* 120f48f6 jmp 0x120f48bb */
  goto L_120f48bb;
L_120f48f8:;
  /* 120f48f8 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 120f48ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4902 pop edi */
  EDI = (pop32());
  /* 120f4903 pop esi */
  ESI = (pop32());
  /* 120f4904 pop ebx */
  EBX = (pop32());
  /* 120f4905 ret  */
  ESPCHK(0x120f489eu, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x120f4906 (35 bytes, 10 insns) */
void f_120f4906(void) {
  FTRACE(0x120f4906u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f4908 mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 120f490f cmp dword ptr [ecx + 4], 0x120f487c */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x120f487cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4916 jne 0x120f4928 */
  if (!C.zf) goto L_120f4928;
  /* 120f4918 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120f491b mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 120f491e cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4921 jne 0x120f4928 */
  if (!C.zf) goto L_120f4928;
  /* 120f4923 mov eax, 1 */
  EAX = (0x1u);
L_120f4928:;
  /* 120f4928 ret  */
  ESPCHK(0x120f4906u, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x120f4929 (9 bytes, 4 insns) */
void f_120f4929(void) {
  FTRACE(0x120f4929u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4929 push ebx */
  push32((uint32_t)(EBX));
  /* 120f492a push ecx */
  push32((uint32_t)(ECX));
  /* 120f492b mov ebx, 0x12100a1c */
  EBX = (0x12100a1cu);
  /* 120f4930 jmp 0x120f493c */
  jmp_ind(0x120f493cu); return;
}

/* FUN_10004932 @ 0x120f4932 (24 bytes, 10 insns) */
void f_120f4932(void) {
  FTRACE(0x120f4932u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4932 push ebx */
  push32((uint32_t)(EBX));
  /* 120f4933 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4934 mov ebx, 0x12100a1c */
  EBX = (0x12100a1cu);
  /* 120f4939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f493c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 120f493f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 120f4942 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 120f4945 pop ecx */
  ECX = (pop32());
  /* 120f4946 pop ebx */
  EBX = (pop32());
  /* 120f4947 ret 4 */
  ESPCHK(0x120f4932u, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x120f494a (14 bytes, 6 insns) */
void f_120f494a(void) {
  FTRACE(0x120f494au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f494a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f494c push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 120f4950 call 0x120f5835 */
  push32(0x120f4955u); f_120f5835();
  /* 120f4955 pop ecx */
  ECX = (pop32());
  /* 120f4956 pop ecx */
  ECX = (pop32());
  /* 120f4957 ret  */
  ESPCHK(0x120f494au, _esp0);
  ESP += 4; return;
}

/* FUN_10004958 @ 0x120f4958 (49 bytes, 20 insns) */
void f_120f4958(void) {
  FTRACE(0x120f4958u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4958 push esi */
  push32((uint32_t)(ESI));
  /* 120f4959 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f495d push edi */
  push32((uint32_t)(EDI));
  /* 120f495e or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 120f4961 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 120f4965 je 0x120f496d */
  if (C.zf) goto L_120f496d;
  /* 120f4967 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 120f496b jmp 0x120f4984 */
  goto L_120f4984;
L_120f496d:;
  /* 120f496d push esi */
  push32((uint32_t)(ESI));
  /* 120f496e call 0x120f5a19 */
  push32(0x120f4973u); f_120f5a19();
  /* 120f4973 push esi */
  push32((uint32_t)(ESI));
  /* 120f4974 call 0x120f4989 */
  push32(0x120f4979u); f_120f4989();
  /* 120f4979 push esi */
  push32((uint32_t)(ESI));
  /* 120f497a mov edi, eax */
  EDI = (EAX);
  /* 120f497c call 0x120f5a6b */
  push32(0x120f4981u); f_120f5a6b();
  /* 120f4981 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f4984:;
  /* 120f4984 mov eax, edi */
  EAX = (EDI);
  /* 120f4986 pop edi */
  EDI = (pop32());
  /* 120f4987 pop esi */
  ESI = (pop32());
  /* 120f4988 ret  */
  ESPCHK(0x120f4958u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x120f4989 (76 bytes, 30 insns) */
void f_120f4989(void) {
  FTRACE(0x120f4989u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4989 push esi */
  push32((uint32_t)(ESI));
  /* 120f498a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f498e push edi */
  push32((uint32_t)(EDI));
  /* 120f498f or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 120f4992 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 120f4996 je 0x120f49cc */
  if (C.zf) goto L_120f49cc;
  /* 120f4998 push esi */
  push32((uint32_t)(ESI));
  /* 120f4999 call 0x120f5bf6 */
  push32(0x120f499eu); f_120f5bf6();
  /* 120f499e push esi */
  push32((uint32_t)(ESI));
  /* 120f499f mov edi, eax */
  EDI = (EAX);
  /* 120f49a1 call 0x120f5b9d */
  push32(0x120f49a6u); f_120f5b9d();
  /* 120f49a6 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 120f49a9 call 0x120f5abd */
  push32(0x120f49aeu); f_120f5abd();
  /* 120f49ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f49b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f49b3 jge 0x120f49ba */
  if ((C.sf==C.of)) goto L_120f49ba;
  /* 120f49b5 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 120f49b8 jmp 0x120f49cc */
  goto L_120f49cc;
L_120f49ba:;
  /* 120f49ba mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 120f49bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f49bf je 0x120f49cc */
  if (C.zf) goto L_120f49cc;
  /* 120f49c1 push eax */
  push32((uint32_t)(EAX));
  /* 120f49c2 call 0x120f4e1c */
  push32(0x120f49c7u); f_120f4e1c();
  /* 120f49c7 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 120f49cb pop ecx */
  ECX = (pop32());
L_120f49cc:;
  /* 120f49cc and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 120f49d0 mov eax, edi */
  EAX = (EDI);
  /* 120f49d2 pop edi */
  EDI = (pop32());
  /* 120f49d3 pop esi */
  ESI = (pop32());
  /* 120f49d4 ret  */
  ESPCHK(0x120f4989u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d5 @ 0x120f49d5 (23 bytes, 6 insns) */
void f_120f49d5(void) {
  FTRACE(0x120f49d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f49d5 call 0x120f49ed */
  push32(0x120f49dau); f_120f49ed();
  /* 120f49da call 0x120f5d4f */
  push32(0x120f49dfu); f_120f5d4f();
  /* 120f49df mov dword ptr [0x12103e94], eax */
  w32((uint32_t)(0x12103e94), (EAX));
  /* 120f49e4 call 0x120f5cff */
  push32(0x120f49e9u); f_120f5cff();
  /* 120f49e9 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 120f49eb ret  */
  ESPCHK(0x120f49d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100049ed @ 0x120f49ed (56 bytes, 8 insns) */
void f_120f49ed(void) {
  FTRACE(0x120f49edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f49ed mov eax, 0x120f6128 */
  EAX = (0x120f6128u);
  /* 120f49f2 mov dword ptr [0x12100ce4], 0x120f5dd2 */
  w32((uint32_t)(0x12100ce4), (0x120f5dd2u));
  /* 120f49fc mov dword ptr [0x12100ce0], eax */
  w32((uint32_t)(0x12100ce0), (EAX));
  /* 120f4a01 mov dword ptr [0x12100ce8], 0x120f5e38 */
  w32((uint32_t)(0x12100ce8), (0x120f5e38u));
  /* 120f4a0b mov dword ptr [0x12100cec], 0x120f5d78 */
  w32((uint32_t)(0x12100cec), (0x120f5d78u));
  /* 120f4a15 mov dword ptr [0x12100cf0], 0x120f5e20 */
  w32((uint32_t)(0x12100cf0), (0x120f5e20u));
  /* 120f4a1f mov dword ptr [0x12100cf4], eax */
  w32((uint32_t)(0x12100cf4), (EAX));
  /* 120f4a24 ret  */
  ESPCHK(0x120f49edu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a25 @ 0x120f4a25 (217 bytes, 57 insns) */
void f_120f4a25(void) {
  FTRACE(0x120f4a25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4a25 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f4a29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4a2c jne 0x120f4aba */
  if (!C.zf) goto L_120f4aba;
  /* 120f4a32 call dword ptr [0x120fd0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0a8))), 0x120f4a38u);
  /* 120f4a38 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4a3a mov dword ptr [0x12103ebc], eax */
  w32((uint32_t)(0x12103ebc), (EAX));
  /* 120f4a3f call 0x120f6a79 */
  push32(0x120f4a44u); f_120f6a79();
  /* 120f4a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4a46 pop ecx */
  ECX = (pop32());
  /* 120f4a47 je 0x120f4a85 */
  if (C.zf) goto L_120f4a85;
  /* 120f4a49 mov eax, dword ptr [0x12103ebc] */
  EAX = (r32((uint32_t)(0x12103ebc)));
  /* 120f4a4e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f4a50 mov cl, byte ptr [0x12103ebd] */
  CL = (r8((uint32_t)(0x12103ebd)));
  /* 120f4a56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f4a5b shr dword ptr [0x12103ebc], 0x10 */
  w32((uint32_t)(0x12103ebc), (sh_shr((uint32_t)(r32((uint32_t)(0x12103ebc))), (0x10u)&0x1f, 32)));
  /* 120f4a62 mov dword ptr [0x12103ec4], eax */
  w32((uint32_t)(0x12103ec4), (EAX));
  /* 120f4a67 mov dword ptr [0x12103ec8], ecx */
  w32((uint32_t)(0x12103ec8), (ECX));
  /* 120f4a6d shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120f4a70 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4a72 mov dword ptr [0x12103ec0], eax */
  w32((uint32_t)(0x12103ec0), (EAX));
  /* 120f4a77 call 0x120f4bce */
  push32(0x120f4a7cu); f_120f4bce();
  /* 120f4a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4a7e jne 0x120f4a89 */
  if (!C.zf) goto L_120f4a89;
  /* 120f4a80 call 0x120f6ad6 */
  push32(0x120f4a85u); f_120f6ad6();
L_120f4a85:;
  /* 120f4a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f4a87 jmp 0x120f4afb */
  goto L_120f4afb;
L_120f4a89:;
  /* 120f4a89 call dword ptr [0x120fd0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0a4))), 0x120f4a8fu);
  /* 120f4a8f mov dword ptr [0x121055a4], eax */
  w32((uint32_t)(0x121055a4), (EAX));
  /* 120f4a94 call 0x120f67d2 */
  push32(0x120f4a99u); f_120f67d2();
  /* 120f4a99 mov dword ptr [0x12103e9c], eax */
  w32((uint32_t)(0x12103e9c), (EAX));
  /* 120f4a9e call 0x120f62bc */
  push32(0x120f4aa3u); f_120f62bc();
  /* 120f4aa3 call 0x120f6585 */
  push32(0x120f4aa8u); f_120f6585();
  /* 120f4aa8 call 0x120f64cc */
  push32(0x120f4aadu); f_120f64cc();
  /* 120f4aad call 0x120f619e */
  push32(0x120f4ab2u); f_120f619e();
  /* 120f4ab2 inc dword ptr [0x12103e98] */
  { uint32_t _r=(r32((uint32_t)(0x12103e98)))+1; w32((uint32_t)(0x12103e98), (_r)); fl_inc(_r,32); }
  /* 120f4ab8 jmp 0x120f4af8 */
  goto L_120f4af8;
L_120f4aba:;
  /* 120f4aba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f4abc cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4abe jne 0x120f4aec */
  if (!C.zf) goto L_120f4aec;
  /* 120f4ac0 cmp dword ptr [0x12103e98], ecx */
  { uint32_t _a=(r32((uint32_t)(0x12103e98))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4ac6 jle 0x120f4a85 */
  if ((C.zf||C.sf!=C.of)) goto L_120f4a85;
  /* 120f4ac8 dec dword ptr [0x12103e98] */
  { uint32_t _r=(r32((uint32_t)(0x12103e98)))-1; w32((uint32_t)(0x12103e98), (_r)); fl_dec(_r,32); }
  /* 120f4ace cmp dword ptr [0x12103ef4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x12103ef4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4ad4 jne 0x120f4adb */
  if (!C.zf) goto L_120f4adb;
  /* 120f4ad6 call 0x120f61dc */
  push32(0x120f4adbu); f_120f61dc();
L_120f4adb:;
  /* 120f4adb call 0x120f6478 */
  push32(0x120f4ae0u); f_120f6478();
  /* 120f4ae0 call 0x120f4c22 */
  push32(0x120f4ae5u); f_120f4c22();
  /* 120f4ae5 call 0x120f6ad6 */
  push32(0x120f4aeau); f_120f6ad6();
  /* 120f4aea jmp 0x120f4af8 */
  goto L_120f4af8;
L_120f4aec:;
  /* 120f4aec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4aef jne 0x120f4af8 */
  if (!C.zf) goto L_120f4af8;
  /* 120f4af1 push ecx */
  push32((uint32_t)(ECX));
  /* 120f4af2 call 0x120f4cba */
  push32(0x120f4af7u); f_120f4cba();
  /* 120f4af7 pop ecx */
  ECX = (pop32());
L_120f4af8:;
  /* 120f4af8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4afa pop eax */
  EAX = (pop32());
L_120f4afb:;
  /* 120f4afb ret 0xc */
  ESPCHK(0x120f4a25u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x120f4afe (157 bytes, 73 insns) */
void f_120f4afe(void) {
  FTRACE(0x120f4afeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4afe push ebp */
  push32((uint32_t)(EBP));
  /* 120f4aff mov ebp, esp */
  EBP = (ESP);
  /* 120f4b01 push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b02 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4b05 push esi */
  push32((uint32_t)(ESI));
  /* 120f4b06 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4b09 push edi */
  push32((uint32_t)(EDI));
  /* 120f4b0a mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f4b0d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4b0f jne 0x120f4b1a */
  if (!C.zf) goto L_120f4b1a;
  /* 120f4b11 cmp dword ptr [0x12103e98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12103e98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4b18 jmp 0x120f4b40 */
  goto L_120f4b40;
L_120f4b1a:;
  /* 120f4b1a cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4b1d je 0x120f4b24 */
  if (C.zf) goto L_120f4b24;
  /* 120f4b1f cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4b22 jne 0x120f4b46 */
  if (!C.zf) goto L_120f4b46;
L_120f4b24:;
  /* 120f4b24 mov eax, dword ptr [0x121055a8] */
  EAX = (r32((uint32_t)(0x121055a8)));
  /* 120f4b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4b2b je 0x120f4b36 */
  if (C.zf) goto L_120f4b36;
  /* 120f4b2d push edi */
  push32((uint32_t)(EDI));
  /* 120f4b2e push esi */
  push32((uint32_t)(ESI));
  /* 120f4b2f push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b30 call eax */
  call_ind((uint32_t)(EAX), 0x120f4b32u);
  /* 120f4b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4b34 je 0x120f4b42 */
  if (C.zf) goto L_120f4b42;
L_120f4b36:;
  /* 120f4b36 push edi */
  push32((uint32_t)(EDI));
  /* 120f4b37 push esi */
  push32((uint32_t)(ESI));
  /* 120f4b38 push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b39 call 0x120f4a25 */
  push32(0x120f4b3eu); f_120f4a25();
  /* 120f4b3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_120f4b40:;
  /* 120f4b40 jne 0x120f4b46 */
  if (!C.zf) goto L_120f4b46;
L_120f4b42:;
  /* 120f4b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f4b44 jmp 0x120f4b94 */
  goto L_120f4b94;
L_120f4b46:;
  /* 120f4b46 push edi */
  push32((uint32_t)(EDI));
  /* 120f4b47 push esi */
  push32((uint32_t)(ESI));
  /* 120f4b48 push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b49 call 0x120f1000 */
  push32(0x120f4b4eu); f_120f1000();
  /* 120f4b4e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4b51 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f4b54 jne 0x120f4b62 */
  if (!C.zf) goto L_120f4b62;
  /* 120f4b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4b58 jne 0x120f4b91 */
  if (!C.zf) goto L_120f4b91;
  /* 120f4b5a push edi */
  push32((uint32_t)(EDI));
  /* 120f4b5b push eax */
  push32((uint32_t)(EAX));
  /* 120f4b5c push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b5d call 0x120f4a25 */
  push32(0x120f4b62u); f_120f4a25();
L_120f4b62:;
  /* 120f4b62 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4b64 je 0x120f4b6b */
  if (C.zf) goto L_120f4b6b;
  /* 120f4b66 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4b69 jne 0x120f4b91 */
  if (!C.zf) goto L_120f4b91;
L_120f4b6b:;
  /* 120f4b6b push edi */
  push32((uint32_t)(EDI));
  /* 120f4b6c push esi */
  push32((uint32_t)(ESI));
  /* 120f4b6d push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b6e call 0x120f4a25 */
  push32(0x120f4b73u); f_120f4a25();
  /* 120f4b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4b75 jne 0x120f4b7a */
  if (!C.zf) goto L_120f4b7a;
  /* 120f4b77 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_120f4b7a:;
  /* 120f4b7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4b7e je 0x120f4b91 */
  if (C.zf) goto L_120f4b91;
  /* 120f4b80 mov eax, dword ptr [0x121055a8] */
  EAX = (r32((uint32_t)(0x121055a8)));
  /* 120f4b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4b87 je 0x120f4b91 */
  if (C.zf) goto L_120f4b91;
  /* 120f4b89 push edi */
  push32((uint32_t)(EDI));
  /* 120f4b8a push esi */
  push32((uint32_t)(ESI));
  /* 120f4b8b push ebx */
  push32((uint32_t)(EBX));
  /* 120f4b8c call eax */
  call_ind((uint32_t)(EAX), 0x120f4b8eu);
  /* 120f4b8e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_120f4b91:;
  /* 120f4b91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_120f4b94:;
  /* 120f4b94 pop edi */
  EDI = (pop32());
  /* 120f4b95 pop esi */
  ESI = (pop32());
  /* 120f4b96 pop ebx */
  EBX = (pop32());
  /* 120f4b97 pop ebp */
  EBP = (pop32());
  /* 120f4b98 ret 0xc */
  ESPCHK(0x120f4afeu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x120f4b9b (48 bytes, 15 insns) */
void f_120f4b9b(void) {
  FTRACE(0x120f4b9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4b9b mov eax, dword ptr [0x12103ea4] */
  EAX = (r32((uint32_t)(0x12103ea4)));
  /* 120f4ba0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4ba3 je 0x120f4bb2 */
  if (C.zf) goto L_120f4bb2;
  /* 120f4ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4ba7 jne 0x120f4bb7 */
  if (!C.zf) goto L_120f4bb7;
  /* 120f4ba9 cmp dword ptr [0x12103ea8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12103ea8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4bb0 jne 0x120f4bb7 */
  if (!C.zf) goto L_120f4bb7;
L_120f4bb2:;
  /* 120f4bb2 call 0x120f6b7e */
  push32(0x120f4bb7u); f_120f6b7e();
L_120f4bb7:;
  /* 120f4bb7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 120f4bbb call 0x120f6bb7 */
  push32(0x120f4bc0u); f_120f6bb7();
  /* 120f4bc0 push 0xff */
  push32((uint32_t)(0xffu));
  /* 120f4bc5 call dword ptr [0x12100a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x12100a40))), 0x120f4bcbu);
  /* 120f4bcb pop ecx */
  ECX = (pop32());
  /* 120f4bcc pop ecx */
  ECX = (pop32());
  /* 120f4bcd ret  */
  ESPCHK(0x120f4b9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004bce @ 0x120f4bce (84 bytes, 32 insns) */
void f_120f4bce(void) {
  FTRACE(0x120f4bceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4bce push esi */
  push32((uint32_t)(ESI));
  /* 120f4bcf call 0x120f6e47 */
  push32(0x120f4bd4u); f_120f6e47();
  /* 120f4bd4 call dword ptr [0x120fd0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0b4))), 0x120f4bdau);
  /* 120f4bda cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4bdd mov dword ptr [0x12100a44], eax */
  w32((uint32_t)(0x12100a44), (EAX));
  /* 120f4be2 je 0x120f4c1e */
  if (C.zf) goto L_120f4c1e;
  /* 120f4be4 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 120f4be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4be8 call 0x120f6d0a */
  push32(0x120f4bedu); f_120f6d0a();
  /* 120f4bed mov esi, eax */
  ESI = (EAX);
  /* 120f4bef pop ecx */
  ECX = (pop32());
  /* 120f4bf0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4bf2 pop ecx */
  ECX = (pop32());
  /* 120f4bf3 je 0x120f4c1e */
  if (C.zf) goto L_120f4c1e;
  /* 120f4bf5 push esi */
  push32((uint32_t)(ESI));
  /* 120f4bf6 push dword ptr [0x12100a44] */
  push32((uint32_t)(r32((uint32_t)(0x12100a44))));
  /* 120f4bfc call dword ptr [0x120fd0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0b0))), 0x120f4c02u);
  /* 120f4c02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4c04 je 0x120f4c1e */
  if (C.zf) goto L_120f4c1e;
  /* 120f4c06 push esi */
  push32((uint32_t)(ESI));
  /* 120f4c07 call 0x120f4c40 */
  push32(0x120f4c0cu); f_120f4c40();
  /* 120f4c0c pop ecx */
  ECX = (pop32());
  /* 120f4c0d call dword ptr [0x120fd0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0ac))), 0x120f4c13u);
  /* 120f4c13 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f4c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4c19 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f4c1b pop eax */
  EAX = (pop32());
  /* 120f4c1c pop esi */
  ESI = (pop32());
  /* 120f4c1d ret  */
  ESPCHK(0x120f4bceu, _esp0);
  ESP += 4; return;
L_120f4c1e:;
  /* 120f4c1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f4c20 pop esi */
  ESI = (pop32());
  /* 120f4c21 ret  */
  ESPCHK(0x120f4bceu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c22 @ 0x120f4c22 (30 bytes, 8 insns) */
void f_120f4c22(void) {
  FTRACE(0x120f4c22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4c22 call 0x120f6e70 */
  push32(0x120f4c27u); f_120f6e70();
  /* 120f4c27 mov eax, dword ptr [0x12100a44] */
  EAX = (r32((uint32_t)(0x12100a44)));
  /* 120f4c2c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4c2f je 0x120f4c3f */
  if (C.zf) goto L_120f4c3f;
  /* 120f4c31 push eax */
  push32((uint32_t)(EAX));
  /* 120f4c32 call dword ptr [0x120fd0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0b8))), 0x120f4c38u);
  /* 120f4c38 or dword ptr [0x12100a44], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x12100a44)))|(0xffffffffu); w32((uint32_t)(0x12100a44), (_r)); fl_logic(_r,32); }
L_120f4c3f:;
  /* 120f4c3f ret  */
  ESPCHK(0x120f4c22u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x120f4c40 (19 bytes, 4 insns) */
void f_120f4c40(void) {
  FTRACE(0x120f4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4c40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f4c44 mov dword ptr [eax + 0x50], 0x12100e70 */
  w32((uint32_t)(EAX + 0x50), (0x12100e70u));
  /* 120f4c4b mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 120f4c52 ret  */
  ESPCHK(0x120f4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c53 @ 0x120f4c53 (103 bytes, 38 insns) */
void f_120f4c53(void) {
  FTRACE(0x120f4c53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4c53 push esi */
  push32((uint32_t)(ESI));
  /* 120f4c54 push edi */
  push32((uint32_t)(EDI));
  /* 120f4c55 call dword ptr [0x120fd0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c4))), 0x120f4c5bu);
  /* 120f4c5b push dword ptr [0x12100a44] */
  push32((uint32_t)(r32((uint32_t)(0x12100a44))));
  /* 120f4c61 mov edi, eax */
  EDI = (EAX);
  /* 120f4c63 call dword ptr [0x120fd0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c0))), 0x120f4c69u);
  /* 120f4c69 mov esi, eax */
  ESI = (EAX);
  /* 120f4c6b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4c6d jne 0x120f4cae */
  if (!C.zf) goto L_120f4cae;
  /* 120f4c6f push 0x74 */
  push32((uint32_t)(0x74u));
  /* 120f4c71 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4c73 call 0x120f6d0a */
  push32(0x120f4c78u); f_120f6d0a();
  /* 120f4c78 mov esi, eax */
  ESI = (EAX);
  /* 120f4c7a pop ecx */
  ECX = (pop32());
  /* 120f4c7b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4c7d pop ecx */
  ECX = (pop32());
  /* 120f4c7e je 0x120f4ca6 */
  if (C.zf) goto L_120f4ca6;
  /* 120f4c80 push esi */
  push32((uint32_t)(ESI));
  /* 120f4c81 push dword ptr [0x12100a44] */
  push32((uint32_t)(r32((uint32_t)(0x12100a44))));
  /* 120f4c87 call dword ptr [0x120fd0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0b0))), 0x120f4c8du);
  /* 120f4c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4c8f je 0x120f4ca6 */
  if (C.zf) goto L_120f4ca6;
  /* 120f4c91 push esi */
  push32((uint32_t)(ESI));
  /* 120f4c92 call 0x120f4c40 */
  push32(0x120f4c97u); f_120f4c40();
  /* 120f4c97 pop ecx */
  ECX = (pop32());
  /* 120f4c98 call dword ptr [0x120fd0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0ac))), 0x120f4c9eu);
  /* 120f4c9e or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f4ca2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f4ca4 jmp 0x120f4cae */
  goto L_120f4cae;
L_120f4ca6:;
  /* 120f4ca6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120f4ca8 call 0x120f4b9b */
  push32(0x120f4cadu); f_120f4b9b();
  /* 120f4cad pop ecx */
  ECX = (pop32());
L_120f4cae:;
  /* 120f4cae push edi */
  push32((uint32_t)(EDI));
  /* 120f4caf call dword ptr [0x120fd0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0bc))), 0x120f4cb5u);
  /* 120f4cb5 mov eax, esi */
  EAX = (ESI);
  /* 120f4cb7 pop edi */
  EDI = (pop32());
  /* 120f4cb8 pop esi */
  ESI = (pop32());
  /* 120f4cb9 ret  */
  ESPCHK(0x120f4c53u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cba @ 0x120f4cba (160 bytes, 62 insns) */
void f_120f4cba(void) {
  FTRACE(0x120f4cbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4cba mov eax, dword ptr [0x12100a44] */
  EAX = (r32((uint32_t)(0x12100a44)));
  /* 120f4cbf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4cc2 je 0x120f4d59 */
  if (C.zf) goto L_120f4d59;
  /* 120f4cc8 push esi */
  push32((uint32_t)(ESI));
  /* 120f4cc9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f4ccd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4ccf jne 0x120f4cde */
  if (!C.zf) goto L_120f4cde;
  /* 120f4cd1 push eax */
  push32((uint32_t)(EAX));
  /* 120f4cd2 call dword ptr [0x120fd0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c0))), 0x120f4cd8u);
  /* 120f4cd8 mov esi, eax */
  ESI = (EAX);
  /* 120f4cda test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4cdc je 0x120f4d4a */
  if (C.zf) goto L_120f4d4a;
L_120f4cde:;
  /* 120f4cde mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 120f4ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4ce3 je 0x120f4cec */
  if (C.zf) goto L_120f4cec;
  /* 120f4ce5 push eax */
  push32((uint32_t)(EAX));
  /* 120f4ce6 call 0x120f4e1c */
  push32(0x120f4cebu); f_120f4e1c();
  /* 120f4ceb pop ecx */
  ECX = (pop32());
L_120f4cec:;
  /* 120f4cec mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 120f4cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4cf1 je 0x120f4cfa */
  if (C.zf) goto L_120f4cfa;
  /* 120f4cf3 push eax */
  push32((uint32_t)(EAX));
  /* 120f4cf4 call 0x120f4e1c */
  push32(0x120f4cf9u); f_120f4e1c();
  /* 120f4cf9 pop ecx */
  ECX = (pop32());
L_120f4cfa:;
  /* 120f4cfa mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 120f4cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4cff je 0x120f4d08 */
  if (C.zf) goto L_120f4d08;
  /* 120f4d01 push eax */
  push32((uint32_t)(EAX));
  /* 120f4d02 call 0x120f4e1c */
  push32(0x120f4d07u); f_120f4e1c();
  /* 120f4d07 pop ecx */
  ECX = (pop32());
L_120f4d08:;
  /* 120f4d08 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 120f4d0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4d0d je 0x120f4d16 */
  if (C.zf) goto L_120f4d16;
  /* 120f4d0f push eax */
  push32((uint32_t)(EAX));
  /* 120f4d10 call 0x120f4e1c */
  push32(0x120f4d15u); f_120f4e1c();
  /* 120f4d15 pop ecx */
  ECX = (pop32());
L_120f4d16:;
  /* 120f4d16 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 120f4d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4d1b je 0x120f4d24 */
  if (C.zf) goto L_120f4d24;
  /* 120f4d1d push eax */
  push32((uint32_t)(EAX));
  /* 120f4d1e call 0x120f4e1c */
  push32(0x120f4d23u); f_120f4e1c();
  /* 120f4d23 pop ecx */
  ECX = (pop32());
L_120f4d24:;
  /* 120f4d24 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 120f4d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4d29 je 0x120f4d32 */
  if (C.zf) goto L_120f4d32;
  /* 120f4d2b push eax */
  push32((uint32_t)(EAX));
  /* 120f4d2c call 0x120f4e1c */
  push32(0x120f4d31u); f_120f4e1c();
  /* 120f4d31 pop ecx */
  ECX = (pop32());
L_120f4d32:;
  /* 120f4d32 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 120f4d35 cmp eax, 0x12100e70 */
  { uint32_t _a=(EAX),_b=(0x12100e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4d3a je 0x120f4d43 */
  if (C.zf) goto L_120f4d43;
  /* 120f4d3c push eax */
  push32((uint32_t)(EAX));
  /* 120f4d3d call 0x120f4e1c */
  push32(0x120f4d42u); f_120f4e1c();
  /* 120f4d42 pop ecx */
  ECX = (pop32());
L_120f4d43:;
  /* 120f4d43 push esi */
  push32((uint32_t)(ESI));
  /* 120f4d44 call 0x120f4e1c */
  push32(0x120f4d49u); f_120f4e1c();
  /* 120f4d49 pop ecx */
  ECX = (pop32());
L_120f4d4a:;
  /* 120f4d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 120f4d4c push dword ptr [0x12100a44] */
  push32((uint32_t)(r32((uint32_t)(0x12100a44))));
  /* 120f4d52 call dword ptr [0x120fd0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0b0))), 0x120f4d58u);
  /* 120f4d58 pop esi */
  ESI = (pop32());
L_120f4d59:;
  /* 120f4d59 ret  */
  ESPCHK(0x120f4cbau, _esp0);
  ESP += 4; return;
}

/* FUN_10004d5a @ 0x120f4d5a (194 bytes, 65 insns) */
void f_120f4d5a(void) {
  FTRACE(0x120f4d5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4d5a push ebp */
  push32((uint32_t)(EBP));
  /* 120f4d5b mov ebp, esp */
  EBP = (ESP);
  /* 120f4d5d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f4d60 push ebx */
  push32((uint32_t)(EBX));
  /* 120f4d61 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4d64 sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f4d6a cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4d6d jl 0x120f4e16 */
  if ((C.sf!=C.of)) goto L_120f4e16;
  /* 120f4d73 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4d79 jg 0x120f4e16 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f4e16;
  /* 120f4d7f push esi */
  push32((uint32_t)(ESI));
  /* 120f4d80 push edi */
  push32((uint32_t)(EDI));
  /* 120f4d81 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4d84 mov esi, dword ptr [edi*4 + 0x12100fdc] */
  ESI = (r32((uint32_t)(EDI*4 + 0x12100fdc)));
  /* 120f4d8b add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4d8e test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 120f4d91 jne 0x120f4d99 */
  if (!C.zf) goto L_120f4d99;
  /* 120f4d93 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4d96 jle 0x120f4d99 */
  if ((C.zf||C.sf!=C.of)) goto L_120f4d99;
  /* 120f4d98 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f4d99:;
  /* 120f4d99 call 0x120f6f52 */
  push32(0x120f4d9eu); f_120f6f52();
  /* 120f4d9e mov eax, ebx */
  EAX = (EBX);
  /* 120f4da0 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 120f4da3 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f4da9 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f4dac mov edx, esi */
  EDX = (ESI);
  /* 120f4dae mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 120f4db1 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4db3 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 120f4db6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4db8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120f4dbb lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 120f4dbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f4dc1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120f4dc4 lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 120f4dc7 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f4dca add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4dcd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f4dd0 add ecx, dword ptr [0x12100ef8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12100ef8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4dd6 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120f4dd7 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4ddb mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 120f4dde pop edi */
  EDI = (pop32());
  /* 120f4ddf pop esi */
  ESI = (pop32());
  /* 120f4de0 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 120f4de7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120f4dea je 0x120f4e0c */
  if (C.zf) goto L_120f4e0c;
  /* 120f4dec cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4df0 jne 0x120f4e12 */
  if (!C.zf) goto L_120f4e12;
  /* 120f4df2 cmp dword ptr [0x12100efc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12100efc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4df9 je 0x120f4e12 */
  if (C.zf) goto L_120f4e12;
  /* 120f4dfb lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 120f4dfe push eax */
  push32((uint32_t)(EAX));
  /* 120f4dff call 0x120f7207 */
  push32(0x120f4e04u); f_120f7207();
  /* 120f4e04 pop ecx */
  ECX = (pop32());
  /* 120f4e05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4e0a je 0x120f4e12 */
  if (C.zf) goto L_120f4e12;
L_120f4e0c:;
  /* 120f4e0c add ecx, dword ptr [0x12100f00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12100f00))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_120f4e12:;
  /* 120f4e12 mov eax, ecx */
  EAX = (ECX);
  /* 120f4e14 jmp 0x120f4e19 */
  goto L_120f4e19;
L_120f4e16:;
  /* 120f4e16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120f4e19:;
  /* 120f4e19 pop ebx */
  EBX = (pop32());
  /* 120f4e1a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f4e1b ret  */
  ESPCHK(0x120f4d5au, _esp0);
  ESP += 4; return;
}

/* FUN_10004e1c @ 0x120f4e1c (215 bytes, 75 insns) */
void f_120f4e1c(void) {
  FTRACE(0x120f4e1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4e1c push ebp */
  push32((uint32_t)(EBP));
  /* 120f4e1d mov ebp, esp */
  EBP = (ESP);
  /* 120f4e1f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f4e21 push 0x120fd1d0 */
  push32((uint32_t)(0x120fd1d0u));
  /* 120f4e26 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f4e2b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f4e31 push eax */
  push32((uint32_t)(EAX));
  /* 120f4e32 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f4e39 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f4e3c push ebx */
  push32((uint32_t)(EBX));
  /* 120f4e3d push esi */
  push32((uint32_t)(ESI));
  /* 120f4e3e push edi */
  push32((uint32_t)(EDI));
  /* 120f4e3f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4e42 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f4e44 je 0x120f4ef6 */
  if (C.zf) { jmp_ind(0x120f4ef6u); return; }
  /* 120f4e4a mov eax, dword ptr [0x12104468] */
  EAX = (r32((uint32_t)(0x12104468)));
  /* 120f4e4f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4e52 jne 0x120f4e8f */
  if (!C.zf) goto L_120f4e8f;
  /* 120f4e54 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f4e56 call 0x120f6edc */
  push32(0x120f4e5bu); f_120f6edc();
  /* 120f4e5b pop ecx */
  ECX = (pop32());
  /* 120f4e5c and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f4e60 push esi */
  push32((uint32_t)(ESI));
  /* 120f4e61 call 0x120f755c */
  push32(0x120f4e66u); f_120f755c();
  /* 120f4e66 pop ecx */
  ECX = (pop32());
  /* 120f4e67 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120f4e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4e6c je 0x120f4e77 */
  if (C.zf) goto L_120f4e77;
  /* 120f4e6e push esi */
  push32((uint32_t)(ESI));
  /* 120f4e6f push eax */
  push32((uint32_t)(EAX));
  /* 120f4e70 call 0x120f7587 */
  push32(0x120f4e75u); f_120f7587();
  /* 120f4e75 pop ecx */
  ECX = (pop32());
  /* 120f4e76 pop ecx */
  ECX = (pop32());
L_120f4e77:;
  /* 120f4e77 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f4e7b call 0x120f4e86 */
  push32(0x120f4e80u); f_120f4e86();
  /* 120f4e80 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4e84 jmp 0x120f4ed7 */
  goto L_120f4ed7;
  /* 120f4e86 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f4e88 call 0x120f6f3d */
  push32(0x120f4e8du); f_120f6f3d();
  /* 120f4e8d pop ecx */
  ECX = (pop32());
  /* 120f4e8e ret  */
  ESPCHK(0x120f4e1cu, _esp0);
  ESP += 4; return;
L_120f4e8f:;
  /* 120f4e8f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4e92 jne 0x120f4ee7 */
  if (!C.zf) goto L_120f4ee7;
  /* 120f4e94 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f4e96 call 0x120f6edc */
  push32(0x120f4e9bu); f_120f6edc();
  /* 120f4e9b pop ecx */
  ECX = (pop32());
  /* 120f4e9c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120f4ea3 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120f4ea6 push eax */
  push32((uint32_t)(EAX));
  /* 120f4ea7 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120f4eaa push eax */
  push32((uint32_t)(EAX));
  /* 120f4eab push esi */
  push32((uint32_t)(ESI));
  /* 120f4eac call 0x120f82b7 */
  push32(0x120f4eb1u); f_120f82b7();
  /* 120f4eb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4eb4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120f4eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f4eb9 je 0x120f4eca */
  if (C.zf) goto L_120f4eca;
  /* 120f4ebb push eax */
  push32((uint32_t)(EAX));
  /* 120f4ebc push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 120f4ebf push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 120f4ec2 call 0x120f830e */
  push32(0x120f4ec7u); f_120f830e();
  /* 120f4ec7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f4eca:;
  /* 120f4eca or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f4ece call 0x120f4ede */
  push32(0x120f4ed3u); f_120f4ede();
  /* 120f4ed3 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_120f4ed7:;
  /* 120f4ed7 jne 0x120f4ef6 */
  if (!C.zf) { jmp_ind(0x120f4ef6u); return; }
  /* 120f4ed9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f4edc jmp 0x120f4ee8 */
  goto L_120f4ee8;
  /* 120f4ede push 9 */
  push32((uint32_t)(0x9u));
  /* 120f4ee0 call 0x120f6f3d */
  push32(0x120f4ee5u); f_120f6f3d();
  /* 120f4ee5 pop ecx */
  ECX = (pop32());
  /* 120f4ee6 ret  */
  ESPCHK(0x120f4e1cu, _esp0);
  ESP += 4; return;
L_120f4ee7:;
  /* 120f4ee7 push esi */
  push32((uint32_t)(ESI));
L_120f4ee8:;
  /* 120f4ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f4eea push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
}

/* FUN_10004e86 @ 0x120f4e86 (9 bytes, 4 insns) */
void f_120f4e86(void) {
  FTRACE(0x120f4e86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4e86 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f4e88 call 0x120f6f3d */
  push32(0x120f4e8du); f_120f6f3d();
  /* 120f4e8d pop ecx */
  ECX = (pop32());
  /* 120f4e8e ret  */
  ESPCHK(0x120f4e86u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ede @ 0x120f4ede (9 bytes, 4 insns) */
void f_120f4ede(void) {
  FTRACE(0x120f4edeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4ede push 9 */
  push32((uint32_t)(0x9u));
  /* 120f4ee0 call 0x120f6f3d */
  push32(0x120f4ee5u); f_120f6f3d();
  /* 120f4ee5 pop ecx */
  ECX = (pop32());
  /* 120f4ee6 ret  */
  ESPCHK(0x120f4edeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f05 @ 0x120f4f05 (155 bytes, 61 insns) */
void f_120f4f05(void) {
  FTRACE(0x120f4f05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4f05 push ebp */
  push32((uint32_t)(EBP));
  /* 120f4f06 mov ebp, esp */
  EBP = (ESP);
  /* 120f4f08 push esi */
  push32((uint32_t)(ESI));
  /* 120f4f09 mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 120f4f0c push edi */
  push32((uint32_t)(EDI));
  /* 120f4f0d mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 120f4f12 cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4f14 je 0x120f4f1b */
  if (C.zf) goto L_120f4f1b;
  /* 120f4f16 call 0x120f57cd */
  push32(0x120f4f1bu); f_120f57cd();
L_120f4f1b:;
  /* 120f4f1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4f1e test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 120f4f22 je 0x120f4f43 */
  if (C.zf) goto L_120f4f43;
  /* 120f4f24 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4f28 je 0x120f4f99 */
  if (C.zf) goto L_120f4f99;
  /* 120f4f2a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4f2e jne 0x120f4f99 */
  if (!C.zf) goto L_120f4f99;
  /* 120f4f30 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f4f32 push esi */
  push32((uint32_t)(ESI));
  /* 120f4f33 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f4f36 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f4f39 call 0x120f525a */
  push32(0x120f4f3eu); f_120f525a();
  /* 120f4f3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4f41 jmp 0x120f4f99 */
  goto L_120f4f99;
L_120f4f43:;
  /* 120f4f43 cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4f47 je 0x120f4f99 */
  if (C.zf) goto L_120f4f99;
  /* 120f4f49 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4f4f jne 0x120f4f7d */
  if (!C.zf) goto L_120f4f7d;
  /* 120f4f51 cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4f54 jbe 0x120f4f7d */
  if ((C.cf||C.zf)) goto L_120f4f7d;
  /* 120f4f56 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120f4f59 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 120f4f5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f4f5e je 0x120f4f7d */
  if (C.zf) goto L_120f4f7d;
  /* 120f4f60 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 120f4f64 push edx */
  push32((uint32_t)(EDX));
  /* 120f4f65 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f4f68 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120f4f6b push esi */
  push32((uint32_t)(ESI));
  /* 120f4f6c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f4f6f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f4f72 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f4f75 push eax */
  push32((uint32_t)(EAX));
  /* 120f4f76 call ecx */
  call_ind((uint32_t)(ECX), 0x120f4f78u);
  /* 120f4f78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f4f7b jmp 0x120f4f9c */
  goto L_120f4f9c;
L_120f4f7d:;
  /* 120f4f7d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f4f80 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120f4f83 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 120f4f86 push esi */
  push32((uint32_t)(ESI));
  /* 120f4f87 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f4f8a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f4f8d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f4f90 push eax */
  push32((uint32_t)(EAX));
  /* 120f4f91 call 0x120f4fa0 */
  push32(0x120f4f96u); f_120f4fa0();
  /* 120f4f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f4f99:;
  /* 120f4f99 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f4f9b pop eax */
  EAX = (pop32());
L_120f4f9c:;
  /* 120f4f9c pop edi */
  EDI = (pop32());
  /* 120f4f9d pop esi */
  ESI = (pop32());
  /* 120f4f9e pop ebp */
  EBP = (pop32());
  /* 120f4f9f ret  */
  ESPCHK(0x120f4f05u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x120f4fa0 (435 bytes, 149 insns) */
void f_120f4fa0(void) {
  FTRACE(0x120f4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120f4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 120f4fa3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f4fa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f4fa9 and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 120f4fad mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 120f4fb0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4fb3 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120f4fb6 jl 0x120f4fc0 */
  if ((C.sf!=C.of)) goto L_120f4fc0;
  /* 120f4fb8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f4fbb cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4fbe jl 0x120f4fc5 */
  if ((C.sf!=C.of)) goto L_120f4fc5;
L_120f4fc0:;
  /* 120f4fc0 call 0x120f57cd */
  push32(0x120f4fc5u); f_120f57cd();
L_120f4fc5:;
  /* 120f4fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 120f4fc6 push esi */
  push32((uint32_t)(ESI));
  /* 120f4fc7 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f4fca mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 120f4fcf push edi */
  push32((uint32_t)(EDI));
  /* 120f4fd0 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 120f4fd5 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4fd7 jne 0x120f5128 */
  if (!C.zf) goto L_120f5128;
  /* 120f4fdd cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4fe1 jne 0x120f5045 */
  if (!C.zf) goto L_120f5045;
  /* 120f4fe3 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4fe6 jne 0x120f5045 */
  if (!C.zf) goto L_120f5045;
  /* 120f4fe8 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4fec jne 0x120f5045 */
  if (!C.zf) goto L_120f5045;
  /* 120f4fee call 0x120f4c53 */
  push32(0x120f4ff3u); f_120f4c53();
  /* 120f4ff3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f4ff7 je 0x120f5123 */
  if (C.zf) goto L_120f5123;
  /* 120f4ffd call 0x120f4c53 */
  push32(0x120f5002u); f_120f4c53();
  /* 120f5002 mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 120f5005 call 0x120f4c53 */
  push32(0x120f500au); f_120f4c53();
  /* 120f500a mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 120f500d push 1 */
  push32((uint32_t)(0x1u));
  /* 120f500f push esi */
  push32((uint32_t)(ESI));
  /* 120f5010 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 120f5013 mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 120f5017 call 0x120f886c */
  push32(0x120f501cu); f_120f886c();
  /* 120f501c pop ecx */
  ECX = (pop32());
  /* 120f501d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f501f pop ecx */
  ECX = (pop32());
  /* 120f5020 jne 0x120f5027 */
  if (!C.zf) goto L_120f5027;
  /* 120f5022 call 0x120f57cd */
  push32(0x120f5027u); f_120f57cd();
L_120f5027:;
  /* 120f5027 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5029 jne 0x120f5128 */
  if (!C.zf) goto L_120f5128;
  /* 120f502f cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5033 jne 0x120f5045 */
  if (!C.zf) goto L_120f5045;
  /* 120f5035 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5038 jne 0x120f5045 */
  if (!C.zf) goto L_120f5045;
  /* 120f503a cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f503e jne 0x120f5045 */
  if (!C.zf) goto L_120f5045;
  /* 120f5040 call 0x120f57cd */
  push32(0x120f5045u); f_120f57cd();
L_120f5045:;
  /* 120f5045 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5047 jne 0x120f5128 */
  if (!C.zf) goto L_120f5128;
  /* 120f504d cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5051 jne 0x120f5128 */
  if (!C.zf) goto L_120f5128;
  /* 120f5057 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f505a jne 0x120f5128 */
  if (!C.zf) goto L_120f5128;
  /* 120f5060 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 120f5063 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120f5066 push eax */
  push32((uint32_t)(EAX));
  /* 120f5067 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f506a push eax */
  push32((uint32_t)(EAX));
  /* 120f506b push edi */
  push32((uint32_t)(EDI));
  /* 120f506c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f506f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f5072 call 0x120f47e1 */
  push32(0x120f5077u); f_120f47e1();
  /* 120f5077 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f507a mov ebx, eax */
  EBX = (EAX);
L_120f507c:;
  /* 120f507c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f507f cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5082 jae 0x120f5113 */
  if (!C.cf) goto L_120f5113;
  /* 120f5088 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f508a jg 0x120f5108 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f5108;
  /* 120f508c cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f508f jg 0x120f5108 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f5108;
  /* 120f5091 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 120f5094 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120f5097 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 120f509a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f509c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120f509f jle 0x120f5105 */
  if ((C.zf||C.sf!=C.of)) goto L_120f5105;
L_120f50a1:;
  /* 120f50a1 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 120f50a4 mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 120f50a7 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 120f50aa mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120f50ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f50ae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f50b1 jle 0x120f50d2 */
  if ((C.zf||C.sf!=C.of)) goto L_120f50d2;
L_120f50b3:;
  /* 120f50b3 push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 120f50b6 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 120f50b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f50bb call 0x120f51fd */
  push32(0x120f50c0u); f_120f51fd();
  /* 120f50c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f50c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f50c5 jne 0x120f50e1 */
  if (!C.zf) goto L_120f50e1;
  /* 120f50c7 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 120f50ca add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f50cd cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f50d0 jg 0x120f50b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f50b3;
L_120f50d2:;
  /* 120f50d2 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 120f50d5 add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f50d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f50dd jg 0x120f50a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f50a1;
  /* 120f50df jmp 0x120f5105 */
  goto L_120f5105;
L_120f50e1:;
  /* 120f50e1 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 120f50e4 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 120f50e7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f50ea push ebx */
  push32((uint32_t)(EBX));
  /* 120f50eb push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 120f50ed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f50f0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f50f3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f50f6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f50f9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f50fc push esi */
  push32((uint32_t)(ESI));
  /* 120f50fd call 0x120f530e */
  push32(0x120f5102u); f_120f530e();
  /* 120f5102 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f5105:;
  /* 120f5105 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_120f5108:;
  /* 120f5108 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f510b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f510e jmp 0x120f507c */
  goto L_120f507c;
L_120f5113:;
  /* 120f5113 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f5117 je 0x120f5123 */
  if (C.zf) goto L_120f5123;
  /* 120f5119 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f511b push esi */
  push32((uint32_t)(ESI));
  /* 120f511c call 0x120f5692 */
  push32(0x120f5121u); f_120f5692();
  /* 120f5121 pop ecx */
  ECX = (pop32());
  /* 120f5122 pop ecx */
  ECX = (pop32());
L_120f5123:;
  /* 120f5123 pop edi */
  EDI = (pop32());
  /* 120f5124 pop esi */
  ESI = (pop32());
  /* 120f5125 pop ebx */
  EBX = (pop32());
  /* 120f5126 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5127 ret  */
  ESPCHK(0x120f4fa0u, _esp0);
  ESP += 4; return;
L_120f5128:;
  /* 120f5128 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f512c jne 0x120f514e */
  if (!C.zf) goto L_120f514e;
  /* 120f512e push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 120f5131 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f5134 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 120f5137 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f513a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f513d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f5140 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f5143 push esi */
  push32((uint32_t)(ESI));
  /* 120f5144 call 0x120f5153 */
  push32(0x120f5149u); f_120f5153();
  /* 120f5149 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f514c jmp 0x120f5123 */
  goto L_120f5123;
L_120f514e:;
  /* 120f514e jmp 0x120f576c */
  f_120f576c(); return;
}

/* FUN_10005153 @ 0x120f5153 (170 bytes, 68 insns) */
void f_120f5153(void) {
  FTRACE(0x120f5153u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5153 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5154 mov ebp, esp */
  EBP = (ESP);
  /* 120f5156 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5157 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5158 push esi */
  push32((uint32_t)(ESI));
  /* 120f5159 push edi */
  push32((uint32_t)(EDI));
  /* 120f515a call 0x120f4c53 */
  push32(0x120f515fu); f_120f4c53();
  /* 120f515f cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5163 je 0x120f5186 */
  if (C.zf) goto L_120f5186;
  /* 120f5165 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 120f5168 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f516b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f516e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f5171 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f5174 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f5177 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f517a call 0x120f46b6 */
  push32(0x120f517fu); f_120f46b6();
  /* 120f517f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5184 jne 0x120f51f9 */
  if (!C.zf) goto L_120f51f9;
L_120f5186:;
  /* 120f5186 mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 120f5189 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120f518c push eax */
  push32((uint32_t)(EAX));
  /* 120f518d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f5190 push eax */
  push32((uint32_t)(EAX));
  /* 120f5191 push edi */
  push32((uint32_t)(EDI));
  /* 120f5192 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f5195 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f5198 call 0x120f47e1 */
  push32(0x120f519du); f_120f47e1();
  /* 120f519d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f51a0 mov esi, eax */
  ESI = (EAX);
L_120f51a2:;
  /* 120f51a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f51a5 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f51a8 jae 0x120f51f9 */
  if (!C.cf) goto L_120f51f9;
  /* 120f51aa cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f51ac jl 0x120f51f1 */
  if ((C.sf!=C.of)) goto L_120f51f1;
  /* 120f51ae cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f51b1 jg 0x120f51f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f51f1;
  /* 120f51b3 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 120f51b6 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 120f51b9 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120f51bc add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f51be mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 120f51c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f51c3 je 0x120f51cb */
  if (C.zf) goto L_120f51cb;
  /* 120f51c5 cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f51c9 jne 0x120f51f1 */
  if (!C.zf) goto L_120f51f1;
L_120f51cb:;
  /* 120f51cb push 1 */
  push32((uint32_t)(0x1u));
  /* 120f51cd add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f51d0 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 120f51d3 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f51d6 push esi */
  push32((uint32_t)(ESI));
  /* 120f51d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f51d9 push eax */
  push32((uint32_t)(EAX));
  /* 120f51da push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f51dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f51e0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f51e3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f51e6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f51e9 call 0x120f530e */
  push32(0x120f51eeu); f_120f530e();
  /* 120f51ee add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f51f1:;
  /* 120f51f1 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f51f4 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f51f7 jmp 0x120f51a2 */
  goto L_120f51a2;
L_120f51f9:;
  /* 120f51f9 pop edi */
  EDI = (pop32());
  /* 120f51fa pop esi */
  ESI = (pop32());
  /* 120f51fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f51fc ret  */
  ESPCHK(0x120f5153u, _esp0);
  ESP += 4; return;
}

/* FUN_100051fd @ 0x120f51fd (93 bytes, 42 insns) */
void f_120f51fd(void) {
  FTRACE(0x120f51fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f51fd push esi */
  push32((uint32_t)(ESI));
  /* 120f51fe push edi */
  push32((uint32_t)(EDI));
  /* 120f51ff mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f5203 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f5206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5208 je 0x120f5254 */
  if (C.zf) goto L_120f5254;
  /* 120f520a cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f520e lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 120f5211 je 0x120f5254 */
  if (C.zf) goto L_120f5254;
  /* 120f5213 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 120f5217 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f521a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f521c je 0x120f522e */
  if (C.zf) goto L_120f522e;
  /* 120f521e add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5221 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5222 push edx */
  push32((uint32_t)(EDX));
  /* 120f5223 call 0x120f88c0 */
  push32(0x120f5228u); f_120f88c0();
  /* 120f5228 pop ecx */
  ECX = (pop32());
  /* 120f5229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f522b pop ecx */
  ECX = (pop32());
  /* 120f522c jne 0x120f5250 */
  if (!C.zf) goto L_120f5250;
L_120f522e:;
  /* 120f522e test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 120f5231 je 0x120f5238 */
  if (C.zf) goto L_120f5238;
  /* 120f5233 test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 120f5236 je 0x120f5250 */
  if (C.zf) goto L_120f5250;
L_120f5238:;
  /* 120f5238 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f523c mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120f523e test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 120f5240 je 0x120f5247 */
  if (C.zf) goto L_120f5247;
  /* 120f5242 test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 120f5245 je 0x120f5250 */
  if (C.zf) goto L_120f5250;
L_120f5247:;
  /* 120f5247 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 120f5249 je 0x120f5254 */
  if (C.zf) goto L_120f5254;
  /* 120f524b test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 120f524e jne 0x120f5254 */
  if (!C.zf) goto L_120f5254;
L_120f5250:;
  /* 120f5250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5252 jmp 0x120f5257 */
  goto L_120f5257;
L_120f5254:;
  /* 120f5254 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f5256 pop eax */
  EAX = (pop32());
L_120f5257:;
  /* 120f5257 pop edi */
  EDI = (pop32());
  /* 120f5258 pop esi */
  ESI = (pop32());
  /* 120f5259 ret  */
  ESPCHK(0x120f51fdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000525a @ 0x120f525a (132 bytes, 56 insns) */
void f_120f525a(void) {
  FTRACE(0x120f525au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f525a push ebp */
  push32((uint32_t)(EBP));
  /* 120f525b mov ebp, esp */
  EBP = (ESP);
  /* 120f525d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f525f push 0x120fd1e8 */
  push32((uint32_t)(0x120fd1e8u));
  /* 120f5264 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f5269 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f526f push eax */
  push32((uint32_t)(EAX));
  /* 120f5270 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f5277 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f527a push ebx */
  push32((uint32_t)(EBX));
  /* 120f527b push esi */
  push32((uint32_t)(ESI));
  /* 120f527c push edi */
  push32((uint32_t)(EDI));
  /* 120f527d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120f5280 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5283 mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 120f5286 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 120f5289 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_120f528c:;
  /* 120f528c cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f528f je 0x120f52e6 */
  if (C.zf) goto L_120f52e6;
  /* 120f5291 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5294 jle 0x120f529b */
  if ((C.zf||C.sf!=C.of)) goto L_120f529b;
  /* 120f5296 cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5299 jl 0x120f52a0 */
  if ((C.sf!=C.of)) goto L_120f52a0;
L_120f529b:;
  /* 120f529b call 0x120f57cd */
  push32(0x120f52a0u); f_120f57cd();
L_120f52a0:;
  /* 120f52a0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f52a4 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f52a7 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 120f52ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f52ad je 0x120f52bb */
  if (C.zf) goto L_120f52bb;
  /* 120f52af push 0x103 */
  push32((uint32_t)(0x103u));
  /* 120f52b4 push ebx */
  push32((uint32_t)(EBX));
  /* 120f52b5 push eax */
  push32((uint32_t)(EAX));
  /* 120f52b6 call 0x120f5720 */
  push32(0x120f52bbu); f_120f5720();
L_120f52bb:;
  /* 120f52bb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f52bf jmp 0x120f52db */
  goto L_120f52db;
  /* 120f52c1 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 120f52c4 call 0x120f52f8 */
  push32(0x120f52c9u); f_120f52f8();
  /* 120f52c9 pop ecx */
  ECX = (pop32());
  /* 120f52ca ret  */
  ESPCHK(0x120f525au, _esp0);
  ESP += 4; return;
  /* 120f52cb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120f52ce or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f52d2 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f52d5 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f52d8 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_120f52db:;
  /* 120f52db mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f52de mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 120f52e1 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 120f52e4 jmp 0x120f528c */
  goto L_120f528c;
L_120f52e6:;
  /* 120f52e6 mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 120f52e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f52ec mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120f52f3 pop edi */
  EDI = (pop32());
  /* 120f52f4 pop esi */
  ESI = (pop32());
  /* 120f52f5 pop ebx */
  EBX = (pop32());
  /* 120f52f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f52f7 ret  */
  ESPCHK(0x120f525au, _esp0);
  ESP += 4; return;
}

/* FUN_100052f8 @ 0x120f52f8 (22 bytes, 7 insns) */
void f_120f52f8(void) {
  FTRACE(0x120f52f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f52f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f52fc mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120f52fe cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5304 je 0x120f5309 */
  if (C.zf) goto L_120f5309;
  /* 120f5306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5308 ret  */
  ESPCHK(0x120f52f8u, _esp0);
  ESP += 4; return;
L_120f5309:;
  /* 120f5309 jmp 0x120f576c */
  f_120f576c(); return;
}

/* FUN_1000530e @ 0x120f530e (123 bytes, 50 insns) */
void f_120f530e(void) {
  FTRACE(0x120f530eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f530e push ebp */
  push32((uint32_t)(EBP));
  /* 120f530f mov ebp, esp */
  EBP = (ESP);
  /* 120f5311 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5315 push ebx */
  push32((uint32_t)(EBX));
  /* 120f5316 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120f5319 push esi */
  push32((uint32_t)(ESI));
  /* 120f531a push edi */
  push32((uint32_t)(EDI));
  /* 120f531b mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f531e je 0x120f5330 */
  if (C.zf) goto L_120f5330;
  /* 120f5320 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f5323 push ebx */
  push32((uint32_t)(EBX));
  /* 120f5324 push edi */
  push32((uint32_t)(EDI));
  /* 120f5325 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f5328 call 0x120f54ce */
  push32(0x120f532du); f_120f54ce();
  /* 120f532d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f5330:;
  /* 120f5330 cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5334 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f5337 jne 0x120f533c */
  if (!C.zf) goto L_120f533c;
  /* 120f5339 push edi */
  push32((uint32_t)(EDI));
  /* 120f533a jmp 0x120f533f */
  goto L_120f533f;
L_120f533c:;
  /* 120f533c push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_120f533f:;
  /* 120f533f call 0x120f45b8 */
  push32(0x120f5344u); f_120f45b8();
  /* 120f5344 mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 120f5347 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f5349 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f534c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f534f push edi */
  push32((uint32_t)(EDI));
  /* 120f5350 call 0x120f525a */
  push32(0x120f5355u); f_120f525a();
  /* 120f5355 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f5358 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120f535d push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 120f5360 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f5361 mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 120f5364 push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 120f5367 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f536a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f536d push edi */
  push32((uint32_t)(EDI));
  /* 120f536e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f5371 call 0x120f5389 */
  push32(0x120f5376u); f_120f5389();
  /* 120f5376 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f537b je 0x120f5384 */
  if (C.zf) goto L_120f5384;
  /* 120f537d push edi */
  push32((uint32_t)(EDI));
  /* 120f537e push eax */
  push32((uint32_t)(EAX));
  /* 120f537f call 0x120f4576 */
  push32(0x120f5384u); f_120f4576();
L_120f5384:;
  /* 120f5384 pop edi */
  EDI = (pop32());
  /* 120f5385 pop esi */
  ESI = (pop32());
  /* 120f5386 pop ebx */
  EBX = (pop32());
  /* 120f5387 pop ebp */
  EBP = (pop32());
  /* 120f5388 ret  */
  ESPCHK(0x120f530eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005389 @ 0x120f5389 (165 bytes, 52 insns) */
void f_120f5389(void) {
  FTRACE(0x120f5389u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5389 push ebp */
  push32((uint32_t)(EBP));
  /* 120f538a mov ebp, esp */
  EBP = (ESP);
  /* 120f538c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f538e push 0x120fd1f8 */
  push32((uint32_t)(0x120fd1f8u));
  /* 120f5393 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f5398 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f539e push eax */
  push32((uint32_t)(EAX));
  /* 120f539f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f53a6 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f53a9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f53aa push esi */
  push32((uint32_t)(ESI));
  /* 120f53ab push edi */
  push32((uint32_t)(EDI));
  /* 120f53ac mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120f53af mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f53b2 mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 120f53b5 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 120f53b9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f53bc mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 120f53bf mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120f53c2 call 0x120f4c53 */
  push32(0x120f53c7u); f_120f4c53();
  /* 120f53c7 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 120f53ca mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120f53cd call 0x120f4c53 */
  push32(0x120f53d2u); f_120f4c53();
  /* 120f53d2 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 120f53d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120f53d8 call 0x120f4c53 */
  push32(0x120f53ddu); f_120f4c53();
  /* 120f53dd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f53e0 mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 120f53e3 call 0x120f4c53 */
  push32(0x120f53e8u); f_120f4c53();
  /* 120f53e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f53eb mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 120f53ee and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f53f2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120f53f9 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120f53fc push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120f53ff push ebx */
  push32((uint32_t)(EBX));
  /* 120f5400 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f5403 push esi */
  push32((uint32_t)(ESI));
  /* 120f5404 call 0x120f463d */
  push32(0x120f5409u); f_120f463d();
  /* 120f5409 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f540c mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120f540f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f5413 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f5417 call 0x120f5456 */
  push32(0x120f541cu); f_120f5456();
  /* 120f541c mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120f541f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f5422 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120f5429 pop edi */
  EDI = (pop32());
  /* 120f542a pop esi */
  ESI = (pop32());
  /* 120f542b pop ebx */
  EBX = (pop32());
  /* 120f542c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f542d ret  */
  ESPCHK(0x120f5389u, _esp0);
  ESP += 4; return;
}

/* FUN_10005456 @ 0x120f5456 (78 bytes, 25 insns) */
void f_120f5456(void) {
  FTRACE(0x120f5456u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5456 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120f5459 mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 120f545c call 0x120f4c53 */
  push32(0x120f5461u); f_120f4c53();
  /* 120f5461 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f5464 mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 120f5467 call 0x120f4c53 */
  push32(0x120f546cu); f_120f4c53();
  /* 120f546c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120f546f mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 120f5472 cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5478 jne 0x120f54a3 */
  if (!C.zf) goto L_120f54a3;
  /* 120f547a cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f547e jne 0x120f54a3 */
  if (!C.zf) goto L_120f54a3;
  /* 120f5480 cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5487 jne 0x120f54a3 */
  if (!C.zf) goto L_120f54a3;
  /* 120f5489 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f548d jne 0x120f54a3 */
  if (!C.zf) goto L_120f54a3;
  /* 120f548f cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5493 je 0x120f54a3 */
  if (C.zf) goto L_120f54a3;
  /* 120f5495 call 0x120f4906 */
  push32(0x120f549au); f_120f4906();
  /* 120f549a push eax */
  push32((uint32_t)(EAX));
  /* 120f549b push edi */
  push32((uint32_t)(EDI));
  /* 120f549c call 0x120f5692 */
  push32(0x120f54a1u); f_120f5692();
  /* 120f54a1 pop ecx */
  ECX = (pop32());
  /* 120f54a2 pop ecx */
  ECX = (pop32());
L_120f54a3:;
  /* 120f54a3 ret  */
  ESPCHK(0x120f5456u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a4 @ 0x120f54a4 (42 bytes, 15 insns) */
void f_120f54a4(void) {
  FTRACE(0x120f54a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f54a4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f54a8 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120f54aa cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f54b0 jne 0x120f54cb */
  if (!C.zf) goto L_120f54cb;
  /* 120f54b2 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f54b6 jne 0x120f54cb */
  if (!C.zf) goto L_120f54cb;
  /* 120f54b8 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f54bf jne 0x120f54cb */
  if (!C.zf) goto L_120f54cb;
  /* 120f54c1 cmp dword ptr [eax + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f54c5 jne 0x120f54cb */
  if (!C.zf) goto L_120f54cb;
  /* 120f54c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f54c9 pop eax */
  EAX = (pop32());
  /* 120f54ca ret  */
  ESPCHK(0x120f54a4u, _esp0);
  ESP += 4; return;
L_120f54cb:;
  /* 120f54cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f54cd ret  */
  ESPCHK(0x120f54a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100054ce @ 0x120f54ce (440 bytes, 164 insns) */
void f_120f54ce(void) {
  FTRACE(0x120f54ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f54ce push ebp */
  push32((uint32_t)(EBP));
  /* 120f54cf mov ebp, esp */
  EBP = (ESP);
  /* 120f54d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f54d3 push 0x120fd210 */
  push32((uint32_t)(0x120fd210u));
  /* 120f54d8 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f54dd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f54e3 push eax */
  push32((uint32_t)(EAX));
  /* 120f54e4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f54eb sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f54ee push ebx */
  push32((uint32_t)(EBX));
  /* 120f54ef push esi */
  push32((uint32_t)(ESI));
  /* 120f54f0 push edi */
  push32((uint32_t)(EDI));
  /* 120f54f1 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120f54f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f54f7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120f54fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f54fc je 0x120f5677 */
  if (C.zf) goto L_120f5677;
  /* 120f5502 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f5506 je 0x120f5677 */
  if (C.zf) goto L_120f5677;
  /* 120f550c mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 120f550f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5511 je 0x120f5677 */
  if (C.zf) goto L_120f5677;
  /* 120f5517 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f551a lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 120f551e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f5522 test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 120f5525 je 0x120f556b */
  if (C.zf) goto L_120f556b;
  /* 120f5527 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f552a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f552c push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 120f552f call 0x120f886c */
  push32(0x120f5534u); f_120f886c();
  /* 120f5534 pop ecx */
  ECX = (pop32());
  /* 120f5535 pop ecx */
  ECX = (pop32());
  /* 120f5536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5538 je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f553e push 1 */
  push32((uint32_t)(0x1u));
  /* 120f5540 push edi */
  push32((uint32_t)(EDI));
  /* 120f5541 call 0x120f8888 */
  push32(0x120f5546u); f_120f8888();
  /* 120f5546 pop ecx */
  ECX = (pop32());
  /* 120f5547 pop ecx */
  ECX = (pop32());
  /* 120f5548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f554a je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f5550 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 120f5553 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120f5555 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f5558 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f555b push ecx */
  push32((uint32_t)(ECX));
L_120f555c:;
  /* 120f555c push eax */
  push32((uint32_t)(EAX));
  /* 120f555d call 0x120f56f9 */
  push32(0x120f5562u); f_120f56f9();
  /* 120f5562 pop ecx */
  ECX = (pop32());
  /* 120f5563 pop ecx */
  ECX = (pop32());
  /* 120f5564 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120f5566 jmp 0x120f5673 */
  goto L_120f5673;
L_120f556b:;
  /* 120f556b mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 120f556e test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 120f5571 je 0x120f55c5 */
  if (C.zf) goto L_120f55c5;
  /* 120f5573 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5576 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f5578 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 120f557b call 0x120f886c */
  push32(0x120f5580u); f_120f886c();
  /* 120f5580 pop ecx */
  ECX = (pop32());
  /* 120f5581 pop ecx */
  ECX = (pop32());
  /* 120f5582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5584 je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f558a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f558c push edi */
  push32((uint32_t)(EDI));
  /* 120f558d call 0x120f8888 */
  push32(0x120f5592u); f_120f8888();
  /* 120f5592 pop ecx */
  ECX = (pop32());
  /* 120f5593 pop ecx */
  ECX = (pop32());
  /* 120f5594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5596 je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f559c push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 120f559f push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 120f55a2 push edi */
  push32((uint32_t)(EDI));
  /* 120f55a3 call 0x120f8950 */
  push32(0x120f55a8u); f_120f8950();
  /* 120f55a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f55ab cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f55af jne 0x120f5673 */
  if (!C.zf) goto L_120f5673;
  /* 120f55b5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f55b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f55b9 je 0x120f5673 */
  if (C.zf) goto L_120f5673;
  /* 120f55bf add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f55c2 push esi */
  push32((uint32_t)(ESI));
  /* 120f55c3 jmp 0x120f555c */
  goto L_120f555c;
L_120f55c5:;
  /* 120f55c5 cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f55c9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f55cc push 1 */
  push32((uint32_t)(0x1u));
  /* 120f55ce push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 120f55d1 jne 0x120f560d */
  if (!C.zf) goto L_120f560d;
  /* 120f55d3 call 0x120f886c */
  push32(0x120f55d8u); f_120f886c();
  /* 120f55d8 pop ecx */
  ECX = (pop32());
  /* 120f55d9 pop ecx */
  ECX = (pop32());
  /* 120f55da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f55dc je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f55e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f55e4 push edi */
  push32((uint32_t)(EDI));
  /* 120f55e5 call 0x120f8888 */
  push32(0x120f55eau); f_120f8888();
  /* 120f55ea pop ecx */
  ECX = (pop32());
  /* 120f55eb pop ecx */
  ECX = (pop32());
  /* 120f55ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f55ee je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f55f0 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 120f55f3 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f55f6 push esi */
  push32((uint32_t)(ESI));
  /* 120f55f7 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 120f55fa call 0x120f56f9 */
  push32(0x120f55ffu); f_120f56f9();
  /* 120f55ff pop ecx */
  ECX = (pop32());
  /* 120f5600 pop ecx */
  ECX = (pop32());
  /* 120f5601 push eax */
  push32((uint32_t)(EAX));
  /* 120f5602 push edi */
  push32((uint32_t)(EDI));
  /* 120f5603 call 0x120f8950 */
  push32(0x120f5608u); f_120f8950();
  /* 120f5608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f560b jmp 0x120f5673 */
  goto L_120f5673;
L_120f560d:;
  /* 120f560d call 0x120f886c */
  push32(0x120f5612u); f_120f886c();
  /* 120f5612 pop ecx */
  ECX = (pop32());
  /* 120f5613 pop ecx */
  ECX = (pop32());
  /* 120f5614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5616 je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f5618 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f561a push edi */
  push32((uint32_t)(EDI));
  /* 120f561b call 0x120f8888 */
  push32(0x120f5620u); f_120f8888();
  /* 120f5620 pop ecx */
  ECX = (pop32());
  /* 120f5621 pop ecx */
  ECX = (pop32());
  /* 120f5622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5624 je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f5626 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 120f5629 call 0x120f88a4 */
  push32(0x120f562eu); f_120f88a4();
  /* 120f562e pop ecx */
  ECX = (pop32());
  /* 120f562f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5631 je 0x120f566e */
  if (C.zf) goto L_120f566e;
  /* 120f5633 test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 120f5636 je 0x120f5654 */
  if (C.zf) goto L_120f5654;
  /* 120f5638 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f563a lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f563d push eax */
  push32((uint32_t)(EAX));
  /* 120f563e push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 120f5641 call 0x120f56f9 */
  push32(0x120f5646u); f_120f56f9();
  /* 120f5646 pop ecx */
  ECX = (pop32());
  /* 120f5647 pop ecx */
  ECX = (pop32());
  /* 120f5648 push eax */
  push32((uint32_t)(EAX));
  /* 120f5649 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 120f564c push edi */
  push32((uint32_t)(EDI));
  /* 120f564d call 0x120f45b1 */
  push32(0x120f5652u); f_120f45b1();
  /* 120f5652 jmp 0x120f5673 */
  goto L_120f5673;
L_120f5654:;
  /* 120f5654 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120f5657 push eax */
  push32((uint32_t)(EAX));
  /* 120f5658 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 120f565b call 0x120f56f9 */
  push32(0x120f5660u); f_120f56f9();
  /* 120f5660 pop ecx */
  ECX = (pop32());
  /* 120f5661 pop ecx */
  ECX = (pop32());
  /* 120f5662 push eax */
  push32((uint32_t)(EAX));
  /* 120f5663 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 120f5666 push edi */
  push32((uint32_t)(EDI));
  /* 120f5667 call 0x120f45aa */
  push32(0x120f566cu); f_120f45aa();
  /* 120f566c jmp 0x120f5673 */
  goto L_120f5673;
L_120f566e:;
  /* 120f566e call 0x120f57cd */
  push32(0x120f5673u); f_120f57cd();
L_120f5673:;
  /* 120f5673 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_120f5677:;
  /* 120f5677 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f567a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120f5681 pop edi */
  EDI = (pop32());
  /* 120f5682 pop esi */
  ESI = (pop32());
  /* 120f5683 pop ebx */
  EBX = (pop32());
  /* 120f5684 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5685 ret  */
  ESPCHK(0x120f54ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10005692 @ 0x120f5692 (86 bytes, 33 insns) */
void f_120f5692(void) {
  FTRACE(0x120f5692u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5692 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5693 mov ebp, esp */
  EBP = (ESP);
  /* 120f5695 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f5697 push 0x120fd220 */
  push32((uint32_t)(0x120fd220u));
  /* 120f569c push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f56a1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f56a7 push eax */
  push32((uint32_t)(EAX));
  /* 120f56a8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f56af push ecx */
  push32((uint32_t)(ECX));
  /* 120f56b0 push ecx */
  push32((uint32_t)(ECX));
  /* 120f56b1 push ebx */
  push32((uint32_t)(EBX));
  /* 120f56b2 push esi */
  push32((uint32_t)(ESI));
  /* 120f56b3 push edi */
  push32((uint32_t)(EDI));
  /* 120f56b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120f56b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f56ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f56bc je 0x120f56d9 */
  if (C.zf) goto L_120f56d9;
  /* 120f56be mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120f56c1 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 120f56c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f56c6 je 0x120f56d9 */
  if (C.zf) goto L_120f56d9;
  /* 120f56c8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f56cc push ecx */
  push32((uint32_t)(ECX));
  /* 120f56cd push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 120f56d0 call 0x120f45aa */
  push32(0x120f56d5u); f_120f45aa();
  /* 120f56d5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_120f56d9:;
  /* 120f56d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f56dc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120f56e3 pop edi */
  EDI = (pop32());
  /* 120f56e4 pop esi */
  ESI = (pop32());
  /* 120f56e5 pop ebx */
  EBX = (pop32());
  /* 120f56e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f56e7 ret  */
  ESPCHK(0x120f5692u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f9 @ 0x120f56f9 (35 bytes, 15 insns) */
void f_120f56f9(void) {
  FTRACE(0x120f56f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f56f9 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f56fd push esi */
  push32((uint32_t)(ESI));
  /* 120f56fe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5702 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120f5704 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120f5707 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5709 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f570b jl 0x120f571a */
  if ((C.sf!=C.of)) goto L_120f571a;
  /* 120f570d mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 120f5710 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 120f5713 mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 120f5716 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5718 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120f571a:;
  /* 120f571a pop esi */
  ESI = (pop32());
  /* 120f571b ret  */
  ESPCHK(0x120f56f9u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x120f5720 (76 bytes, 34 insns) */
void f_120f5720(void) {
  FTRACE(0x120f5720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5720 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5721 mov ebp, esp */
  EBP = (ESP);
  /* 120f5723 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5726 push ebx */
  push32((uint32_t)(EBX));
  /* 120f5727 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f572b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f572e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f5731 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5734 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5735 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f5738 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f573b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 120f573e call 0x120f4929 */
  push32(0x120f5743u); f_120f4929();
  /* 120f5743 push esi */
  push32((uint32_t)(ESI));
  /* 120f5744 push edi */
  push32((uint32_t)(EDI));
  /* 120f5745 call eax */
  call_ind((uint32_t)(EAX), 0x120f5747u);
  /* 120f5747 pop edi */
  EDI = (pop32());
  /* 120f5748 pop esi */
  ESI = (pop32());
  /* 120f5749 mov ebx, ebp */
  EBX = (EBP);
  /* 120f574b pop ebp */
  EBP = (pop32());
  /* 120f574c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f574f push ebp */
  push32((uint32_t)(EBP));
  /* 120f5750 mov ebp, ebx */
  EBP = (EBX);
  /* 120f5752 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5758 jne 0x120f575f */
  if (!C.zf) goto L_120f575f;
  /* 120f575a mov ecx, 2 */
  ECX = (0x2u);
L_120f575f:;
  /* 120f575f push ecx */
  push32((uint32_t)(ECX));
  /* 120f5760 call 0x120f4929 */
  push32(0x120f5765u); f_120f4929();
  /* 120f5765 pop ebp */
  EBP = (pop32());
  /* 120f5766 pop ecx */
  ECX = (pop32());
  /* 120f5767 pop ebx */
  EBX = (pop32());
  /* 120f5768 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5769 ret 0xc */
  ESPCHK(0x120f5720u, _esp0);
  ESP += 16; return;
}

/* FUN_1000576c @ 0x120f576c (86 bytes, 32 insns) */
void f_120f576c(void) {
  FTRACE(0x120f576cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f576c push ebp */
  push32((uint32_t)(EBP));
  /* 120f576d mov ebp, esp */
  EBP = (ESP);
  /* 120f576f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f5771 push 0x120fd230 */
  push32((uint32_t)(0x120fd230u));
  /* 120f5776 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f577b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f5781 push eax */
  push32((uint32_t)(EAX));
  /* 120f5782 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f5789 push ecx */
  push32((uint32_t)(ECX));
  /* 120f578a push ecx */
  push32((uint32_t)(ECX));
  /* 120f578b push ebx */
  push32((uint32_t)(EBX));
  /* 120f578c push esi */
  push32((uint32_t)(ESI));
  /* 120f578d push edi */
  push32((uint32_t)(EDI));
  /* 120f578e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120f5791 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f5793 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 120f5796 call 0x120f4c53 */
  push32(0x120f579bu); f_120f4c53();
  /* 120f579b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f579e je 0x120f57bf */
  if (C.zf) goto L_120f57bf;
  /* 120f57a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120f57a7 call 0x120f4c53 */
  push32(0x120f57acu); f_120f4c53();
  /* 120f57ac call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x120f57afu);
  /* 120f57af mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 120f57b2 jmp 0x120f57bf */
  goto L_120f57bf;
  /* 120f57b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f57b6 pop eax */
  EAX = (pop32());
  /* 120f57b7 ret  */
  ESPCHK(0x120f576cu, _esp0);
  ESP += 4; return;
  /* 120f57b8 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120f57bb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_120f57bf:;
  /* 120f57bf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f57c3 call 0x120f57c8 */
  call_ind(0x120f57c8u, 0x120f57c8u);
  /* 120f57c8 jmp 0x120f8c85 */
  f_120f8c85(); return;
}

/* FUN_100057cd @ 0x120f57cd (79 bytes, 29 insns) */
void f_120f57cd(void) {
  FTRACE(0x120f57cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f57cd push ebp */
  push32((uint32_t)(EBP));
  /* 120f57ce mov ebp, esp */
  EBP = (ESP);
  /* 120f57d0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f57d2 push 0x120fd248 */
  push32((uint32_t)(0x120fd248u));
  /* 120f57d7 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f57dc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f57e2 push eax */
  push32((uint32_t)(EAX));
  /* 120f57e3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f57ea push ecx */
  push32((uint32_t)(ECX));
  /* 120f57eb push ecx */
  push32((uint32_t)(ECX));
  /* 120f57ec push ebx */
  push32((uint32_t)(EBX));
  /* 120f57ed push esi */
  push32((uint32_t)(ESI));
  /* 120f57ee push edi */
  push32((uint32_t)(EDI));
  /* 120f57ef mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120f57f2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f57f6 mov eax, dword ptr [0x12100a50] */
  EAX = (r32((uint32_t)(0x12100a50)));
  /* 120f57fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f57fd je 0x120f5815 */
  if (C.zf) goto L_120f5815;
  /* 120f57ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120f5806 call eax */
  call_ind((uint32_t)(EAX), 0x120f5808u);
  /* 120f5808 jmp 0x120f5811 */
  goto L_120f5811;
  /* 120f580a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f580c pop eax */
  EAX = (pop32());
  /* 120f580d ret  */
  ESPCHK(0x120f57cdu, _esp0);
  ESP += 4; return;
  /* 120f580e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_120f5811:;
  /* 120f5811 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_120f5815:;
  /* 120f5815 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f5819 call 0x120f581e */
  call_ind(0x120f581eu, 0x120f581eu);
  /* 120f581e jmp 0x120f576c */
  f_120f576c(); return;
}

/* _malloc @ 0x120f5823 (18 bytes, 6 insns) */
void f_120f5823(void) {
  FTRACE(0x120f5823u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5823 push dword ptr [0x1210412c] */
  push32((uint32_t)(r32((uint32_t)(0x1210412c))));
  /* 120f5829 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 120f582d call 0x120f5835 */
  push32(0x120f5832u); f_120f5835();
  /* 120f5832 pop ecx */
  ECX = (pop32());
  /* 120f5833 pop ecx */
  ECX = (pop32());
  /* 120f5834 ret  */
  ESPCHK(0x120f5823u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x120f5835 (44 bytes, 16 insns) */
void f_120f5835(void) {
  FTRACE(0x120f5835u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5835 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f583a ja 0x120f585e */
  if ((!C.cf&&!C.zf)) goto L_120f585e;
L_120f583c:;
  /* 120f583c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 120f5840 call 0x120f5861 */
  push32(0x120f5845u); f_120f5861();
  /* 120f5845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5847 pop ecx */
  ECX = (pop32());
  /* 120f5848 jne 0x120f5860 */
  if (!C.zf) goto L_120f5860;
  /* 120f584a cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f584e je 0x120f5860 */
  if (C.zf) goto L_120f5860;
  /* 120f5850 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 120f5854 call 0x120f8c9c */
  push32(0x120f5859u); f_120f8c9c();
  /* 120f5859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f585b pop ecx */
  ECX = (pop32());
  /* 120f585c jne 0x120f583c */
  if (!C.zf) goto L_120f583c;
L_120f585e:;
  /* 120f585e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f5860:;
  /* 120f5860 ret  */
  ESPCHK(0x120f5835u, _esp0);
  ESP += 4; return;
}

/* FUN_10005861 @ 0x120f5861 (231 bytes, 81 insns) */
void f_120f5861(void) {
  FTRACE(0x120f5861u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5861 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5862 mov ebp, esp */
  EBP = (ESP);
  /* 120f5864 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f5866 push 0x120fd260 */
  push32((uint32_t)(0x120fd260u));
  /* 120f586b push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f5870 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f5876 push eax */
  push32((uint32_t)(EAX));
  /* 120f5877 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f587e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5881 push ebx */
  push32((uint32_t)(EBX));
  /* 120f5882 push esi */
  push32((uint32_t)(ESI));
  /* 120f5883 push edi */
  push32((uint32_t)(EDI));
  /* 120f5884 mov eax, dword ptr [0x12104468] */
  EAX = (r32((uint32_t)(0x12104468)));
  /* 120f5889 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f588c jne 0x120f58d1 */
  if (!C.zf) goto L_120f58d1;
  /* 120f588e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5891 cmp esi, dword ptr [0x12104460] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12104460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5897 ja 0x120f5930 */
  if ((!C.cf&&!C.zf)) goto L_120f5930;
  /* 120f589d push 9 */
  push32((uint32_t)(0x9u));
  /* 120f589f call 0x120f6edc */
  push32(0x120f58a4u); f_120f6edc();
  /* 120f58a4 pop ecx */
  ECX = (pop32());
  /* 120f58a5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f58a9 push esi */
  push32((uint32_t)(ESI));
  /* 120f58aa call 0x120f78b0 */
  push32(0x120f58afu); f_120f78b0();
  /* 120f58af pop ecx */
  ECX = (pop32());
  /* 120f58b0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120f58b3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f58b7 call 0x120f58c8 */
  push32(0x120f58bcu); f_120f58c8();
  /* 120f58bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f58bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f58c1 je 0x120f5930 */
  if (C.zf) goto L_120f5930;
  /* 120f58c3 jmp 0x120f594e */
  jmp_ind(0x120f594eu); return;
  /* 120f58c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f58ca call 0x120f6f3d */
  push32(0x120f58cfu); f_120f6f3d();
  /* 120f58cf pop ecx */
  ECX = (pop32());
  /* 120f58d0 ret  */
  ESPCHK(0x120f5861u, _esp0);
  ESP += 4; return;
L_120f58d1:;
  /* 120f58d1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f58d4 jne 0x120f5930 */
  if (!C.zf) goto L_120f5930;
  /* 120f58d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f58d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f58db je 0x120f58e5 */
  if (C.zf) goto L_120f58e5;
  /* 120f58dd lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 120f58e0 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120f58e3 jmp 0x120f58e8 */
  goto L_120f58e8;
L_120f58e5:;
  /* 120f58e5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120f58e7 pop esi */
  ESI = (pop32());
L_120f58e8:;
  /* 120f58e8 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 120f58eb cmp esi, dword ptr [0x1210303c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1210303c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f58f1 ja 0x120f5921 */
  if ((!C.cf&&!C.zf)) goto L_120f5921;
  /* 120f58f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f58f5 call 0x120f6edc */
  push32(0x120f58fau); f_120f6edc();
  /* 120f58fa pop ecx */
  ECX = (pop32());
  /* 120f58fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120f5902 mov eax, esi */
  EAX = (ESI);
  /* 120f5904 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120f5907 push eax */
  push32((uint32_t)(EAX));
  /* 120f5908 call 0x120f8353 */
  push32(0x120f590du); f_120f8353();
  /* 120f590d pop ecx */
  ECX = (pop32());
  /* 120f590e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120f5911 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f5915 call 0x120f5927 */
  push32(0x120f591au); f_120f5927();
  /* 120f591a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f591d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f591f jne 0x120f594e */
  if (!C.zf) { jmp_ind(0x120f594eu); return; }
L_120f5921:;
  /* 120f5921 push esi */
  push32((uint32_t)(ESI));
  /* 120f5922 jmp 0x120f5940 */
  goto L_120f5940;
  /* 120f5924 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5927 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f5929 call 0x120f6f3d */
  push32(0x120f592eu); f_120f6f3d();
  /* 120f592e pop ecx */
  ECX = (pop32());
  /* 120f592f ret  */
  ESPCHK(0x120f5861u, _esp0);
  ESP += 4; return;
L_120f5930:;
  /* 120f5930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5935 jne 0x120f593a */
  if (!C.zf) goto L_120f593a;
  /* 120f5937 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f5939 pop eax */
  EAX = (pop32());
L_120f593a:;
  /* 120f593a add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f593d and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 120f593f push eax */
  push32((uint32_t)(EAX));
L_120f5940:;
  /* 120f5940 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f5942 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
}

/* FUN_100058c8 @ 0x120f58c8 (9 bytes, 4 insns) */
void f_120f58c8(void) {
  FTRACE(0x120f58c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f58c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f58ca call 0x120f6f3d */
  push32(0x120f58cfu); f_120f6f3d();
  /* 120f58cf pop ecx */
  ECX = (pop32());
  /* 120f58d0 ret  */
  ESPCHK(0x120f58c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005927 @ 0x120f5927 (9 bytes, 4 insns) */
void f_120f5927(void) {
  FTRACE(0x120f5927u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5927 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f5929 call 0x120f6f3d */
  push32(0x120f592eu); f_120f6f3d();
  /* 120f592e pop ecx */
  ECX = (pop32());
  /* 120f592f ret  */
  ESPCHK(0x120f5927u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a19 @ 0x120f5a19 (47 bytes, 17 insns) */
void f_120f5a19(void) {
  FTRACE(0x120f5a19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5a19 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f5a1d mov ecx, 0x12100a58 */
  ECX = (0x12100a58u);
  /* 120f5a22 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5a24 jb 0x120f5a3d */
  if (C.cf) goto L_120f5a3d;
  /* 120f5a26 cmp eax, 0x12100cb8 */
  { uint32_t _a=(EAX),_b=(0x12100cb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5a2b ja 0x120f5a3d */
  if ((!C.cf&&!C.zf)) goto L_120f5a3d;
  /* 120f5a2d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5a2f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120f5a32 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5a35 push eax */
  push32((uint32_t)(EAX));
  /* 120f5a36 call 0x120f6edc */
  push32(0x120f5a3bu); f_120f6edc();
  /* 120f5a3b pop ecx */
  ECX = (pop32());
  /* 120f5a3c ret  */
  ESPCHK(0x120f5a19u, _esp0);
  ESP += 4; return;
L_120f5a3d:;
  /* 120f5a3d add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5a40 push eax */
  push32((uint32_t)(EAX));
  /* 120f5a41 call dword ptr [0x120fd0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d4))), 0x120f5a47u);
  /* 120f5a47 ret  */
  ESPCHK(0x120f5a19u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a48 @ 0x120f5a48 (35 bytes, 13 insns) */
void f_120f5a48(void) {
  FTRACE(0x120f5a48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5a48 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f5a4c cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5a4f jge 0x120f5a5c */
  if ((C.sf==C.of)) goto L_120f5a5c;
  /* 120f5a51 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5a54 push eax */
  push32((uint32_t)(EAX));
  /* 120f5a55 call 0x120f6edc */
  push32(0x120f5a5au); f_120f6edc();
  /* 120f5a5a pop ecx */
  ECX = (pop32());
  /* 120f5a5b ret  */
  ESPCHK(0x120f5a48u, _esp0);
  ESP += 4; return;
L_120f5a5c:;
  /* 120f5a5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5a60 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5a63 push eax */
  push32((uint32_t)(EAX));
  /* 120f5a64 call dword ptr [0x120fd0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d4))), 0x120f5a6au);
  /* 120f5a6a ret  */
  ESPCHK(0x120f5a48u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a6b @ 0x120f5a6b (47 bytes, 17 insns) */
void f_120f5a6b(void) {
  FTRACE(0x120f5a6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5a6b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f5a6f mov ecx, 0x12100a58 */
  ECX = (0x12100a58u);
  /* 120f5a74 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5a76 jb 0x120f5a8f */
  if (C.cf) goto L_120f5a8f;
  /* 120f5a78 cmp eax, 0x12100cb8 */
  { uint32_t _a=(EAX),_b=(0x12100cb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5a7d ja 0x120f5a8f */
  if ((!C.cf&&!C.zf)) goto L_120f5a8f;
  /* 120f5a7f sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5a81 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120f5a84 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5a87 push eax */
  push32((uint32_t)(EAX));
  /* 120f5a88 call 0x120f6f3d */
  push32(0x120f5a8du); f_120f6f3d();
  /* 120f5a8d pop ecx */
  ECX = (pop32());
  /* 120f5a8e ret  */
  ESPCHK(0x120f5a6bu, _esp0);
  ESP += 4; return;
L_120f5a8f:;
  /* 120f5a8f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5a92 push eax */
  push32((uint32_t)(EAX));
  /* 120f5a93 call dword ptr [0x120fd0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d8))), 0x120f5a99u);
  /* 120f5a99 ret  */
  ESPCHK(0x120f5a6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005a9a @ 0x120f5a9a (35 bytes, 13 insns) */
void f_120f5a9a(void) {
  FTRACE(0x120f5a9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5a9a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f5a9e cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5aa1 jge 0x120f5aae */
  if ((C.sf==C.of)) goto L_120f5aae;
  /* 120f5aa3 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5aa6 push eax */
  push32((uint32_t)(EAX));
  /* 120f5aa7 call 0x120f6f3d */
  push32(0x120f5aacu); f_120f6f3d();
  /* 120f5aac pop ecx */
  ECX = (pop32());
  /* 120f5aad ret  */
  ESPCHK(0x120f5a9au, _esp0);
  ESP += 4; return;
L_120f5aae:;
  /* 120f5aae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5ab2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5ab5 push eax */
  push32((uint32_t)(EAX));
  /* 120f5ab6 call dword ptr [0x120fd0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d8))), 0x120f5abcu);
  /* 120f5abc ret  */
  ESPCHK(0x120f5a9au, _esp0);
  ESP += 4; return;
}

/* FUN_10005abd @ 0x120f5abd (93 bytes, 32 insns) */
void f_120f5abd(void) {
  FTRACE(0x120f5abdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5abd push esi */
  push32((uint32_t)(ESI));
  /* 120f5abe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5ac2 cmp esi, dword ptr [0x12104580] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12104580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5ac8 jae 0x120f5b02 */
  if (!C.cf) goto L_120f5b02;
  /* 120f5aca mov ecx, esi */
  ECX = (ESI);
  /* 120f5acc mov eax, esi */
  EAX = (ESI);
  /* 120f5ace sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120f5ad1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f5ad4 mov ecx, dword ptr [ecx*4 + 0x12104480] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120f5adb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 120f5ade test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f5ae3 je 0x120f5b02 */
  if (C.zf) goto L_120f5b02;
  /* 120f5ae5 push edi */
  push32((uint32_t)(EDI));
  /* 120f5ae6 push esi */
  push32((uint32_t)(ESI));
  /* 120f5ae7 call 0x120f8e7e */
  push32(0x120f5aecu); f_120f8e7e();
  /* 120f5aec push esi */
  push32((uint32_t)(ESI));
  /* 120f5aed call 0x120f5b1a */
  push32(0x120f5af2u); f_120f5b1a();
  /* 120f5af2 push esi */
  push32((uint32_t)(ESI));
  /* 120f5af3 mov edi, eax */
  EDI = (EAX);
  /* 120f5af5 call 0x120f8edd */
  push32(0x120f5afau); f_120f8edd();
  /* 120f5afa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5afd mov eax, edi */
  EAX = (EDI);
  /* 120f5aff pop edi */
  EDI = (pop32());
  /* 120f5b00 pop esi */
  ESI = (pop32());
  /* 120f5b01 ret  */
  ESPCHK(0x120f5abdu, _esp0);
  ESP += 4; return;
L_120f5b02:;
  /* 120f5b02 call 0x120f8dab */
  push32(0x120f5b07u); f_120f8dab();
  /* 120f5b07 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f5b0d call 0x120f8db4 */
  push32(0x120f5b12u); f_120f8db4();
  /* 120f5b12 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f5b15 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f5b18 pop esi */
  ESI = (pop32());
  /* 120f5b19 ret  */
  ESPCHK(0x120f5abdu, _esp0);
  ESP += 4; return;
}

/* FUN_10005b1a @ 0x120f5b1a (131 bytes, 52 insns) */
void f_120f5b1a(void) {
  FTRACE(0x120f5b1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5b1a push esi */
  push32((uint32_t)(ESI));
  /* 120f5b1b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5b1f push edi */
  push32((uint32_t)(EDI));
  /* 120f5b20 push esi */
  push32((uint32_t)(ESI));
  /* 120f5b21 call 0x120f8e3c */
  push32(0x120f5b26u); f_120f8e3c();
  /* 120f5b26 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5b29 pop ecx */
  ECX = (pop32());
  /* 120f5b2a je 0x120f5b68 */
  if (C.zf) goto L_120f5b68;
  /* 120f5b2c cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5b2f je 0x120f5b36 */
  if (C.zf) goto L_120f5b36;
  /* 120f5b31 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5b34 jne 0x120f5b4c */
  if (!C.zf) goto L_120f5b4c;
L_120f5b36:;
  /* 120f5b36 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f5b38 call 0x120f8e3c */
  push32(0x120f5b3du); f_120f8e3c();
  /* 120f5b3d push 1 */
  push32((uint32_t)(0x1u));
  /* 120f5b3f mov edi, eax */
  EDI = (EAX);
  /* 120f5b41 call 0x120f8e3c */
  push32(0x120f5b46u); f_120f8e3c();
  /* 120f5b46 pop ecx */
  ECX = (pop32());
  /* 120f5b47 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5b49 pop ecx */
  ECX = (pop32());
  /* 120f5b4a je 0x120f5b68 */
  if (C.zf) goto L_120f5b68;
L_120f5b4c:;
  /* 120f5b4c push esi */
  push32((uint32_t)(ESI));
  /* 120f5b4d call 0x120f8e3c */
  push32(0x120f5b52u); f_120f8e3c();
  /* 120f5b52 pop ecx */
  ECX = (pop32());
  /* 120f5b53 push eax */
  push32((uint32_t)(EAX));
  /* 120f5b54 call dword ptr [0x120fd0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0dc))), 0x120f5b5au);
  /* 120f5b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5b5c jne 0x120f5b68 */
  if (!C.zf) goto L_120f5b68;
  /* 120f5b5e call dword ptr [0x120fd0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c4))), 0x120f5b64u);
  /* 120f5b64 mov edi, eax */
  EDI = (EAX);
  /* 120f5b66 jmp 0x120f5b6a */
  goto L_120f5b6a;
L_120f5b68:;
  /* 120f5b68 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_120f5b6a:;
  /* 120f5b6a push esi */
  push32((uint32_t)(ESI));
  /* 120f5b6b call 0x120f8dbd */
  push32(0x120f5b70u); f_120f8dbd();
  /* 120f5b70 mov eax, esi */
  EAX = (ESI);
  /* 120f5b72 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 120f5b75 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120f5b78 pop ecx */
  ECX = (pop32());
  /* 120f5b79 mov eax, dword ptr [eax*4 + 0x12104480] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12104480)));
  /* 120f5b80 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 120f5b83 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 120f5b88 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f5b8a je 0x120f5b98 */
  if (C.zf) goto L_120f5b98;
  /* 120f5b8c push edi */
  push32((uint32_t)(EDI));
  /* 120f5b8d call 0x120f8d38 */
  push32(0x120f5b92u); f_120f8d38();
  /* 120f5b92 pop ecx */
  ECX = (pop32());
  /* 120f5b93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f5b96 jmp 0x120f5b9a */
  goto L_120f5b9a;
L_120f5b98:;
  /* 120f5b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f5b9a:;
  /* 120f5b9a pop edi */
  EDI = (pop32());
  /* 120f5b9b pop esi */
  ESI = (pop32());
  /* 120f5b9c ret  */
  ESPCHK(0x120f5b1au, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x120f5b9d (43 bytes, 17 insns) */
void f_120f5b9d(void) {
  FTRACE(0x120f5b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5b9d push esi */
  push32((uint32_t)(ESI));
  /* 120f5b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5ba2 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 120f5ba5 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 120f5ba7 je 0x120f5bc6 */
  if (C.zf) goto L_120f5bc6;
  /* 120f5ba9 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 120f5bab je 0x120f5bc6 */
  if (C.zf) goto L_120f5bc6;
  /* 120f5bad push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 120f5bb0 call 0x120f4e1c */
  push32(0x120f5bb5u); f_120f4e1c();
  /* 120f5bb5 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 120f5bbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5bbd pop ecx */
  ECX = (pop32());
  /* 120f5bbe mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f5bc0 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120f5bc3 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_120f5bc6:;
  /* 120f5bc6 pop esi */
  ESI = (pop32());
  /* 120f5bc7 ret  */
  ESPCHK(0x120f5b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10005bc8 @ 0x120f5bc8 (46 bytes, 22 insns) */
void f_120f5bc8(void) {
  FTRACE(0x120f5bc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5bc8 push esi */
  push32((uint32_t)(ESI));
  /* 120f5bc9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5bcd push esi */
  push32((uint32_t)(ESI));
  /* 120f5bce call 0x120f5bf6 */
  push32(0x120f5bd3u); f_120f5bf6();
  /* 120f5bd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5bd5 pop ecx */
  ECX = (pop32());
  /* 120f5bd6 je 0x120f5bdd */
  if (C.zf) goto L_120f5bdd;
  /* 120f5bd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f5bdb pop esi */
  ESI = (pop32());
  /* 120f5bdc ret  */
  ESPCHK(0x120f5bc8u, _esp0);
  ESP += 4; return;
L_120f5bdd:;
  /* 120f5bdd test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 120f5be1 je 0x120f5bf2 */
  if (C.zf) goto L_120f5bf2;
  /* 120f5be3 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 120f5be6 call 0x120f8eff */
  push32(0x120f5bebu); f_120f8eff();
  /* 120f5beb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f5bed pop ecx */
  ECX = (pop32());
  /* 120f5bee pop esi */
  ESI = (pop32());
  /* 120f5bef sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5bf1 ret  */
  ESPCHK(0x120f5bc8u, _esp0);
  ESP += 4; return;
L_120f5bf2:;
  /* 120f5bf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5bf4 pop esi */
  ESI = (pop32());
  /* 120f5bf5 ret  */
  ESPCHK(0x120f5bc8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf6 @ 0x120f5bf6 (92 bytes, 40 insns) */
void f_120f5bf6(void) {
  FTRACE(0x120f5bf6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 120f5bf7 push esi */
  push32((uint32_t)(ESI));
  /* 120f5bf8 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f5bfc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f5bfe push edi */
  push32((uint32_t)(EDI));
  /* 120f5bff mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 120f5c02 mov ecx, eax */
  ECX = (EAX);
  /* 120f5c04 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 120f5c07 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f5c0a jne 0x120f5c43 */
  if (!C.zf) goto L_120f5c43;
  /* 120f5c0c test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 120f5c10 je 0x120f5c43 */
  if (C.zf) goto L_120f5c43;
  /* 120f5c12 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 120f5c15 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 120f5c17 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5c19 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f5c1b jle 0x120f5c43 */
  if ((C.zf||C.sf!=C.of)) goto L_120f5c43;
  /* 120f5c1d push edi */
  push32((uint32_t)(EDI));
  /* 120f5c1e push eax */
  push32((uint32_t)(EAX));
  /* 120f5c1f push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 120f5c22 call 0x120f8f92 */
  push32(0x120f5c27u); f_120f8f92();
  /* 120f5c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5c2a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5c2c jne 0x120f5c3c */
  if (!C.zf) goto L_120f5c3c;
  /* 120f5c2e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 120f5c31 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 120f5c33 je 0x120f5c43 */
  if (C.zf) goto L_120f5c43;
  /* 120f5c35 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 120f5c37 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 120f5c3a jmp 0x120f5c43 */
  goto L_120f5c43;
L_120f5c3c:;
  /* 120f5c3c or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 120f5c40 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_120f5c43:;
  /* 120f5c43 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 120f5c46 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f5c4a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f5c4c pop edi */
  EDI = (pop32());
  /* 120f5c4d mov eax, ebx */
  EAX = (EBX);
  /* 120f5c4f pop esi */
  ESI = (pop32());
  /* 120f5c50 pop ebx */
  EBX = (pop32());
  /* 120f5c51 ret  */
  ESPCHK(0x120f5bf6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c5b @ 0x120f5c5b (164 bytes, 66 insns) */
void f_120f5c5b(void) {
  FTRACE(0x120f5c5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5c5b push ebx */
  push32((uint32_t)(EBX));
  /* 120f5c5c push esi */
  push32((uint32_t)(ESI));
  /* 120f5c5d push edi */
  push32((uint32_t)(EDI));
  /* 120f5c5e push 2 */
  push32((uint32_t)(0x2u));
  /* 120f5c60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f5c62 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f5c64 call 0x120f6edc */
  push32(0x120f5c69u); f_120f6edc();
  /* 120f5c69 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f5c6b pop ecx */
  ECX = (pop32());
  /* 120f5c6c cmp dword ptr [0x121055a0], esi */
  { uint32_t _a=(r32((uint32_t)(0x121055a0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5c72 jle 0x120f5ce8 */
  if ((C.zf||C.sf!=C.of)) goto L_120f5ce8;
L_120f5c74:;
  /* 120f5c74 mov eax, dword ptr [0x12104594] */
  EAX = (r32((uint32_t)(0x12104594)));
  /* 120f5c79 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 120f5c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5c7e je 0x120f5cdf */
  if (C.zf) goto L_120f5cdf;
  /* 120f5c80 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 120f5c84 je 0x120f5cdf */
  if (C.zf) goto L_120f5cdf;
  /* 120f5c86 push eax */
  push32((uint32_t)(EAX));
  /* 120f5c87 push esi */
  push32((uint32_t)(ESI));
  /* 120f5c88 call 0x120f5a48 */
  push32(0x120f5c8du); f_120f5a48();
  /* 120f5c8d mov eax, dword ptr [0x12104594] */
  EAX = (r32((uint32_t)(0x12104594)));
  /* 120f5c92 pop ecx */
  ECX = (pop32());
  /* 120f5c93 pop ecx */
  ECX = (pop32());
  /* 120f5c94 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 120f5c97 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120f5c9a test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 120f5c9d je 0x120f5ccf */
  if (C.zf) goto L_120f5ccf;
  /* 120f5c9f cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5ca4 jne 0x120f5cb5 */
  if (!C.zf) goto L_120f5cb5;
  /* 120f5ca6 push eax */
  push32((uint32_t)(EAX));
  /* 120f5ca7 call 0x120f5bc8 */
  push32(0x120f5cacu); f_120f5bc8();
  /* 120f5cac cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5caf pop ecx */
  ECX = (pop32());
  /* 120f5cb0 je 0x120f5ccf */
  if (C.zf) goto L_120f5ccf;
  /* 120f5cb2 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f5cb3 jmp 0x120f5ccf */
  goto L_120f5ccf;
L_120f5cb5:;
  /* 120f5cb5 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5cba jne 0x120f5ccf */
  if (!C.zf) goto L_120f5ccf;
  /* 120f5cbc test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 120f5cbf je 0x120f5ccf */
  if (C.zf) goto L_120f5ccf;
  /* 120f5cc1 push eax */
  push32((uint32_t)(EAX));
  /* 120f5cc2 call 0x120f5bc8 */
  push32(0x120f5cc7u); f_120f5bc8();
  /* 120f5cc7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5cca pop ecx */
  ECX = (pop32());
  /* 120f5ccb jne 0x120f5ccf */
  if (!C.zf) goto L_120f5ccf;
  /* 120f5ccd or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_120f5ccf:;
  /* 120f5ccf mov eax, dword ptr [0x12104594] */
  EAX = (r32((uint32_t)(0x12104594)));
  /* 120f5cd4 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 120f5cd7 push esi */
  push32((uint32_t)(ESI));
  /* 120f5cd8 call 0x120f5a9a */
  push32(0x120f5cddu); f_120f5a9a();
  /* 120f5cdd pop ecx */
  ECX = (pop32());
  /* 120f5cde pop ecx */
  ECX = (pop32());
L_120f5cdf:;
  /* 120f5cdf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f5ce0 cmp esi, dword ptr [0x121055a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x121055a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5ce6 jl 0x120f5c74 */
  if ((C.sf!=C.of)) goto L_120f5c74;
L_120f5ce8:;
  /* 120f5ce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f5cea call 0x120f6f3d */
  push32(0x120f5cefu); f_120f6f3d();
  /* 120f5cef cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5cf4 pop ecx */
  ECX = (pop32());
  /* 120f5cf5 mov eax, ebx */
  EAX = (EBX);
  /* 120f5cf7 je 0x120f5cfb */
  if (C.zf) goto L_120f5cfb;
  /* 120f5cf9 mov eax, edi */
  EAX = (EDI);
L_120f5cfb:;
  /* 120f5cfb pop edi */
  EDI = (pop32());
  /* 120f5cfc pop esi */
  ESI = (pop32());
  /* 120f5cfd pop ebx */
  EBX = (pop32());
  /* 120f5cfe ret  */
  ESPCHK(0x120f5c5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005cff @ 0x120f5cff (18 bytes, 6 insns) */
void f_120f5cff(void) {
  FTRACE(0x120f5cffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5cff push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 120f5d04 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 120f5d09 call 0x120f932a */
  push32(0x120f5d0eu); f_120f932a();
  /* 120f5d0e pop ecx */
  ECX = (pop32());
  /* 120f5d0f pop ecx */
  ECX = (pop32());
  /* 120f5d10 ret  */
  ESPCHK(0x120f5cffu, _esp0);
  ESP += 4; return;
}

/* FUN_10005d11 @ 0x120f5d11 (62 bytes, 24 insns) */
void f_120f5d11(void) {
  FTRACE(0x120f5d11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5d11 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5d12 mov ebp, esp */
  EBP = (ESP);
  /* 120f5d14 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5d17 fld qword ptr [0x120fd300] */
  fpu_push(rf64((uint32_t)(0x120fd300)));
  /* 120f5d1d fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 120f5d20 fld qword ptr [0x120fd2f8] */
  fpu_push(rf64((uint32_t)(0x120fd2f8)));
  /* 120f5d26 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 120f5d29 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 120f5d2c fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 120f5d2f fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 120f5d32 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 120f5d35 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 120f5d38 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 120f5d3b fcomp qword ptr [0x120fd2f0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120fd2f0)));
  (void)fpu_pop();
  /* 120f5d41 fnstsw ax */
  AX = fpu_status();
  /* 120f5d43 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 120f5d44 jbe 0x120f5d4b */
  if ((C.cf||C.zf)) goto L_120f5d4b;
  /* 120f5d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f5d48 pop eax */
  EAX = (pop32());
  /* 120f5d49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5d4a ret  */
  ESPCHK(0x120f5d11u, _esp0);
  ESP += 4; return;
L_120f5d4b:;
  /* 120f5d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5d4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5d4e ret  */
  ESPCHK(0x120f5d11u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d4f @ 0x120f5d4f (41 bytes, 13 insns) */
void f_120f5d4f(void) {
  FTRACE(0x120f5d4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5d4f push 0x120fd324 */
  push32((uint32_t)(0x120fd324u));
  /* 120f5d54 call dword ptr [0x120fd0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0e4))), 0x120f5d5au);
  /* 120f5d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5d5c je 0x120f5d73 */
  if (C.zf) goto L_120f5d73;
  /* 120f5d5e push 0x120fd308 */
  push32((uint32_t)(0x120fd308u));
  /* 120f5d63 push eax */
  push32((uint32_t)(EAX));
  /* 120f5d64 call dword ptr [0x120fd0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c8))), 0x120f5d6au);
  /* 120f5d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5d6c je 0x120f5d73 */
  if (C.zf) goto L_120f5d73;
  /* 120f5d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f5d70 call eax */
  call_ind((uint32_t)(EAX), 0x120f5d72u);
  /* 120f5d72 ret  */
  ESPCHK(0x120f5d4fu, _esp0);
  ESP += 4; return;
L_120f5d73:;
  /* 120f5d73 jmp 0x120f5d11 */
  f_120f5d11(); return;
}

/* FUN_10005d78 @ 0x120f5d78 (90 bytes, 37 insns) */
void f_120f5d78(void) {
  FTRACE(0x120f5d78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5d78 push esi */
  push32((uint32_t)(ESI));
  /* 120f5d79 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f5d7d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 120f5d80 push eax */
  push32((uint32_t)(EAX));
  /* 120f5d81 call 0x120f94d0 */
  push32(0x120f5d86u); f_120f94d0();
  /* 120f5d86 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5d89 pop ecx */
  ECX = (pop32());
  /* 120f5d8a je 0x120f5db8 */
  if (C.zf) goto L_120f5db8;
L_120f5d8c:;
  /* 120f5d8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f5d8d cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5d94 jle 0x120f5da5 */
  if ((C.zf||C.sf!=C.of)) goto L_120f5da5;
  /* 120f5d96 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 120f5d99 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f5d9b push eax */
  push32((uint32_t)(EAX));
  /* 120f5d9c call 0x120f945b */
  push32(0x120f5da1u); f_120f945b();
  /* 120f5da1 pop ecx */
  ECX = (pop32());
  /* 120f5da2 pop ecx */
  ECX = (pop32());
  /* 120f5da3 jmp 0x120f5db4 */
  goto L_120f5db4;
L_120f5da5:;
  /* 120f5da5 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 120f5da8 mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120f5dae mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120f5db1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_120f5db4:;
  /* 120f5db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f5db6 jne 0x120f5d8c */
  if (!C.zf) goto L_120f5d8c;
L_120f5db8:;
  /* 120f5db8 mov cl, byte ptr [0x121033c4] */
  CL = (r8((uint32_t)(0x121033c4)));
  /* 120f5dbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f5dc0 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 120f5dc2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f5dc3:;
  /* 120f5dc3 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 120f5dc5 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 120f5dc7 mov al, cl */
  AL = (CL);
  /* 120f5dc9 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 120f5dcb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f5dcc test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 120f5dce jne 0x120f5dc3 */
  if (!C.zf) goto L_120f5dc3;
  /* 120f5dd0 pop esi */
  ESI = (pop32());
  /* 120f5dd1 ret  */
  ESPCHK(0x120f5d78u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x120f5e38 (62 bytes, 29 insns) */
void f_120f5e38(void) {
  FTRACE(0x120f5e38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5e38 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5e39 mov ebp, esp */
  EBP = (ESP);
  /* 120f5e3b push ecx */
  push32((uint32_t)(ECX));
  /* 120f5e3c push ecx */
  push32((uint32_t)(ECX));
  /* 120f5e3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5e41 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f5e44 je 0x120f5e61 */
  if (C.zf) goto L_120f5e61;
  /* 120f5e46 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120f5e49 push eax */
  push32((uint32_t)(EAX));
  /* 120f5e4a call 0x120f999c */
  push32(0x120f5e4fu); f_120f999c();
  /* 120f5e4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f5e52 pop ecx */
  ECX = (pop32());
  /* 120f5e53 pop ecx */
  ECX = (pop32());
  /* 120f5e54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f5e57 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f5e59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f5e5c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120f5e5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5e60 ret  */
  ESPCHK(0x120f5e38u, _esp0);
  ESP += 4; return;
L_120f5e61:;
  /* 120f5e61 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120f5e64 push eax */
  push32((uint32_t)(EAX));
  /* 120f5e65 call 0x120f99c9 */
  push32(0x120f5e6au); f_120f99c9();
  /* 120f5e6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f5e6d pop ecx */
  ECX = (pop32());
  /* 120f5e6e pop ecx */
  ECX = (pop32());
  /* 120f5e6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f5e72 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f5e74 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5e75 ret  */
  ESPCHK(0x120f5e38u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e76 @ 0x120f5e76 (97 bytes, 42 insns) */
void f_120f5e76(void) {
  FTRACE(0x120f5e76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5e76 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5e77 mov ebp, esp */
  EBP = (ESP);
  /* 120f5e79 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5e7c lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120f5e7f push esi */
  push32((uint32_t)(ESI));
  /* 120f5e80 push eax */
  push32((uint32_t)(EAX));
  /* 120f5e81 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f5e84 push eax */
  push32((uint32_t)(EAX));
  /* 120f5e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5e88 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5e89 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5e8a fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 120f5e8c fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 120f5e8f call 0x120f9a6d */
  push32(0x120f5e94u); f_120f9a6d();
  /* 120f5e94 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f5e97 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f5e9a push eax */
  push32((uint32_t)(EAX));
  /* 120f5e9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f5e9e lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 120f5ea1 push eax */
  push32((uint32_t)(EAX));
  /* 120f5ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5ea4 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5ea8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120f5eab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f5ead test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f5eaf setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 120f5eb2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5eb4 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 120f5eb7 call 0x120f99f6 */
  push32(0x120f5ebcu); f_120f99f6();
  /* 120f5ebc lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f5ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 120f5ec1 push eax */
  push32((uint32_t)(EAX));
  /* 120f5ec2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f5ec5 push esi */
  push32((uint32_t)(ESI));
  /* 120f5ec6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f5ec9 call 0x120f5ed7 */
  push32(0x120f5eceu); f_120f5ed7();
  /* 120f5ece mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f5ed1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5ed4 pop esi */
  ESI = (pop32());
  /* 120f5ed5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5ed6 ret  */
  ESPCHK(0x120f5e76u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed7 @ 0x120f5ed7 (194 bytes, 91 insns) */
void f_120f5ed7(void) {
  FTRACE(0x120f5ed7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5ed7 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5ed8 mov ebp, esp */
  EBP = (ESP);
  /* 120f5eda push ebx */
  push32((uint32_t)(EBX));
  /* 120f5edb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f5edd cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f5ee0 push esi */
  push32((uint32_t)(ESI));
  /* 120f5ee1 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 120f5ee4 push edi */
  push32((uint32_t)(EDI));
  /* 120f5ee5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5ee8 je 0x120f5f05 */
  if (C.zf) goto L_120f5f05;
  /* 120f5eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5eec cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5eef setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 120f5ef2 push eax */
  push32((uint32_t)(EAX));
  /* 120f5ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5ef5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5ef8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120f5efb add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5efd push eax */
  push32((uint32_t)(EAX));
  /* 120f5efe call 0x120f6179 */
  push32(0x120f5f03u); f_120f6179();
  /* 120f5f03 pop ecx */
  ECX = (pop32());
  /* 120f5f04 pop ecx */
  ECX = (pop32());
L_120f5f05:;
  /* 120f5f05 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5f08 mov eax, edi */
  EAX = (EDI);
  /* 120f5f0a jne 0x120f5f12 */
  if (!C.zf) goto L_120f5f12;
  /* 120f5f0c mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 120f5f0f lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_120f5f12:;
  /* 120f5f12 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5f15 jle 0x120f5f29 */
  if ((C.zf||C.sf!=C.of)) goto L_120f5f29;
  /* 120f5f17 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 120f5f1a lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 120f5f1d mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120f5f1f mov eax, ecx */
  EAX = (ECX);
  /* 120f5f21 mov cl, byte ptr [0x121033c4] */
  CL = (r8((uint32_t)(0x121033c4)));
  /* 120f5f27 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_120f5f29:;
  /* 120f5f29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f5f2b cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f5f2e push 0x120fd338 */
  push32((uint32_t)(0x120fd338u));
  /* 120f5f33 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120f5f36 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5f38 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5f3b push ecx */
  push32((uint32_t)(ECX));
  /* 120f5f3c call 0x120f9b80 */
  push32(0x120f5f41u); f_120f9b80();
  /* 120f5f41 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5f44 pop ecx */
  ECX = (pop32());
  /* 120f5f45 pop ecx */
  ECX = (pop32());
  /* 120f5f46 mov ecx, eax */
  ECX = (EAX);
  /* 120f5f48 je 0x120f5f4d */
  if (C.zf) goto L_120f5f4d;
  /* 120f5f4a mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_120f5f4d:;
  /* 120f5f4d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 120f5f50 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f5f51 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f5f54 je 0x120f5f92 */
  if (C.zf) goto L_120f5f92;
  /* 120f5f56 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f5f59 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f5f5a jns 0x120f5f61 */
  if (!C.sf) goto L_120f5f61;
  /* 120f5f5c neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f5f5e mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_120f5f61:;
  /* 120f5f61 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f5f62 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5f65 jl 0x120f5f78 */
  if ((C.sf!=C.of)) goto L_120f5f78;
  /* 120f5f67 mov eax, ebx */
  EAX = (EBX);
  /* 120f5f69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120f5f6b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f5f6c pop esi */
  ESI = (pop32());
  /* 120f5f6d idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f5f6f add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 120f5f71 mov eax, ebx */
  EAX = (EBX);
  /* 120f5f73 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f5f74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f5f76 mov ebx, edx */
  EBX = (EDX);
L_120f5f78:;
  /* 120f5f78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f5f79 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5f7c jl 0x120f5f8f */
  if ((C.sf!=C.of)) goto L_120f5f8f;
  /* 120f5f7e mov eax, ebx */
  EAX = (EBX);
  /* 120f5f80 push 0xa */
  push32((uint32_t)(0xau));
  /* 120f5f82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f5f83 pop esi */
  ESI = (pop32());
  /* 120f5f84 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f5f86 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 120f5f88 mov eax, ebx */
  EAX = (EBX);
  /* 120f5f8a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f5f8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f5f8d mov ebx, edx */
  EBX = (EDX);
L_120f5f8f:;
  /* 120f5f8f add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_120f5f92:;
  /* 120f5f92 mov eax, edi */
  EAX = (EDI);
  /* 120f5f94 pop edi */
  EDI = (pop32());
  /* 120f5f95 pop esi */
  ESI = (pop32());
  /* 120f5f96 pop ebx */
  EBX = (pop32());
  /* 120f5f97 pop ebp */
  EBP = (pop32());
  /* 120f5f98 ret  */
  ESPCHK(0x120f5ed7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f99 @ 0x120f5f99 (85 bytes, 37 insns) */
void f_120f5f99(void) {
  FTRACE(0x120f5f99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5f99 push ebp */
  push32((uint32_t)(EBP));
  /* 120f5f9a mov ebp, esp */
  EBP = (ESP);
  /* 120f5f9c sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f5f9f lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120f5fa2 push esi */
  push32((uint32_t)(ESI));
  /* 120f5fa3 push eax */
  push32((uint32_t)(EAX));
  /* 120f5fa4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f5fa7 push eax */
  push32((uint32_t)(EAX));
  /* 120f5fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5fab push ecx */
  push32((uint32_t)(ECX));
  /* 120f5fac push ecx */
  push32((uint32_t)(ECX));
  /* 120f5fad fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 120f5faf fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 120f5fb2 call 0x120f9a6d */
  push32(0x120f5fb7u); f_120f9a6d();
  /* 120f5fb7 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f5fba lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f5fbd push eax */
  push32((uint32_t)(EAX));
  /* 120f5fbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f5fc1 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5fc3 push eax */
  push32((uint32_t)(EAX));
  /* 120f5fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f5fc6 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f5fca sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120f5fcd add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5fd0 push eax */
  push32((uint32_t)(EAX));
  /* 120f5fd1 call 0x120f99f6 */
  push32(0x120f5fd6u); f_120f99f6();
  /* 120f5fd6 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f5fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f5fdb push eax */
  push32((uint32_t)(EAX));
  /* 120f5fdc push esi */
  push32((uint32_t)(ESI));
  /* 120f5fdd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f5fe0 call 0x120f5fee */
  push32(0x120f5fe5u); f_120f5fee();
  /* 120f5fe5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f5fe8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f5feb pop esi */
  ESI = (pop32());
  /* 120f5fec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f5fed ret  */
  ESPCHK(0x120f5f99u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fee @ 0x120f5fee (167 bytes, 73 insns) */
void f_120f5fee(void) {
  FTRACE(0x120f5feeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f5fee push ebp */
  push32((uint32_t)(EBP));
  /* 120f5fef mov ebp, esp */
  EBP = (ESP);
  /* 120f5ff1 push ebx */
  push32((uint32_t)(EBX));
  /* 120f5ff2 push esi */
  push32((uint32_t)(ESI));
  /* 120f5ff3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f5ff6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f5ff9 push edi */
  push32((uint32_t)(EDI));
  /* 120f5ffa mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f5ffd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f5ffe cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6002 je 0x120f601e */
  if (C.zf) goto L_120f601e;
  /* 120f6004 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6007 jne 0x120f601e */
  if (!C.zf) goto L_120f601e;
  /* 120f6009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f600b cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f600e sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120f6011 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6013 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6015 mov eax, ecx */
  EAX = (ECX);
  /* 120f6017 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 120f601a and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_120f601e:;
  /* 120f601e cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6021 mov edi, ebx */
  EDI = (EBX);
  /* 120f6023 jne 0x120f602b */
  if (!C.zf) goto L_120f602b;
  /* 120f6025 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 120f6028 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_120f602b:;
  /* 120f602b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f602e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6030 jg 0x120f6042 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f6042;
  /* 120f6032 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f6034 push edi */
  push32((uint32_t)(EDI));
  /* 120f6035 call 0x120f6179 */
  push32(0x120f603au); f_120f6179();
  /* 120f603a pop ecx */
  ECX = (pop32());
  /* 120f603b mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 120f603e pop ecx */
  ECX = (pop32());
  /* 120f603f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f6040 jmp 0x120f6044 */
  goto L_120f6044;
L_120f6042:;
  /* 120f6042 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120f6044:;
  /* 120f6044 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6048 jle 0x120f608e */
  if ((C.zf||C.sf!=C.of)) goto L_120f608e;
  /* 120f604a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f604c push edi */
  push32((uint32_t)(EDI));
  /* 120f604d call 0x120f6179 */
  push32(0x120f6052u); f_120f6179();
  /* 120f6052 mov al, byte ptr [0x121033c4] */
  AL = (r8((uint32_t)(0x121033c4)));
  /* 120f6057 pop ecx */
  ECX = (pop32());
  /* 120f6058 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f605a mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 120f605d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f605e pop ecx */
  ECX = (pop32());
  /* 120f605f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f6061 jge 0x120f608e */
  if ((C.sf==C.of)) goto L_120f608e;
  /* 120f6063 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6067 je 0x120f606d */
  if (C.zf) goto L_120f606d;
  /* 120f6069 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 120f606b jmp 0x120f6074 */
  goto L_120f6074;
L_120f606d:;
  /* 120f606d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 120f606f cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6072 jl 0x120f6077 */
  if ((C.sf!=C.of)) goto L_120f6077;
L_120f6074:;
  /* 120f6074 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_120f6077:;
  /* 120f6077 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f607a push edi */
  push32((uint32_t)(EDI));
  /* 120f607b call 0x120f6179 */
  push32(0x120f6080u); f_120f6179();
  /* 120f6080 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f6083 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120f6085 push edi */
  push32((uint32_t)(EDI));
  /* 120f6086 call 0x120f9c70 */
  push32(0x120f608bu); f_120f9c70();
  /* 120f608b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f608e:;
  /* 120f608e pop edi */
  EDI = (pop32());
  /* 120f608f mov eax, ebx */
  EAX = (EBX);
  /* 120f6091 pop esi */
  ESI = (pop32());
  /* 120f6092 pop ebx */
  EBX = (pop32());
  /* 120f6093 pop ebp */
  EBP = (pop32());
  /* 120f6094 ret  */
  ESPCHK(0x120f5feeu, _esp0);
  ESP += 4; return;
}

/* FUN_10006095 @ 0x120f6095 (147 bytes, 66 insns) */
void f_120f6095(void) {
  FTRACE(0x120f6095u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6095 push ebp */
  push32((uint32_t)(EBP));
  /* 120f6096 mov ebp, esp */
  EBP = (ESP);
  /* 120f6098 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f609b push ebx */
  push32((uint32_t)(EBX));
  /* 120f609c push esi */
  push32((uint32_t)(ESI));
  /* 120f609d lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120f60a0 push edi */
  push32((uint32_t)(EDI));
  /* 120f60a1 push eax */
  push32((uint32_t)(EAX));
  /* 120f60a2 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f60a5 push eax */
  push32((uint32_t)(EAX));
  /* 120f60a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f60a9 push ecx */
  push32((uint32_t)(ECX));
  /* 120f60aa push ecx */
  push32((uint32_t)(ECX));
  /* 120f60ab fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 120f60ad fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 120f60b0 call 0x120f9a6d */
  push32(0x120f60b5u); f_120f9a6d();
  /* 120f60b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f60b8 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f60bb lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 120f60be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f60c0 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f60c4 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120f60c7 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f60ca mov edi, eax */
  EDI = (EAX);
  /* 120f60cc lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f60cf push eax */
  push32((uint32_t)(EAX));
  /* 120f60d0 push ebx */
  push32((uint32_t)(EBX));
  /* 120f60d1 push edi */
  push32((uint32_t)(EDI));
  /* 120f60d2 call 0x120f99f6 */
  push32(0x120f60d7u); f_120f99f6();
  /* 120f60d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f60da add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f60dd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f60de cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f60e0 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 120f60e3 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f60e6 jl 0x120f610e */
  if ((C.sf!=C.of)) goto L_120f610e;
  /* 120f60e8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f60ea jge 0x120f610e */
  if ((C.sf==C.of)) goto L_120f610e;
  /* 120f60ec test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 120f60ee je 0x120f60fa */
  if (C.zf) goto L_120f60fa;
L_120f60f0:;
  /* 120f60f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 120f60f2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f60f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f60f5 jne 0x120f60f0 */
  if (!C.zf) goto L_120f60f0;
  /* 120f60f7 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_120f60fa:;
  /* 120f60fa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f60fd push 1 */
  push32((uint32_t)(0x1u));
  /* 120f60ff push eax */
  push32((uint32_t)(EAX));
  /* 120f6100 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6101 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f6104 call 0x120f5fee */
  push32(0x120f6109u); f_120f5fee();
  /* 120f6109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f610c jmp 0x120f6123 */
  goto L_120f6123;
L_120f610e:;
  /* 120f610e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120f6111 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f6113 push eax */
  push32((uint32_t)(EAX));
  /* 120f6114 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f6117 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6118 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f611b call 0x120f5ed7 */
  push32(0x120f6120u); f_120f5ed7();
  /* 120f6120 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f6123:;
  /* 120f6123 pop edi */
  EDI = (pop32());
  /* 120f6124 pop esi */
  ESI = (pop32());
  /* 120f6125 pop ebx */
  EBX = (pop32());
  /* 120f6126 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f6127 ret  */
  ESPCHK(0x120f6095u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x120f6128 (81 bytes, 29 insns) */
void f_120f6128(void) {
  FTRACE(0x120f6128u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6128 push ebp */
  push32((uint32_t)(EBP));
  /* 120f6129 mov ebp, esp */
  EBP = (ESP);
  /* 120f612b cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f612f je 0x120f6163 */
  if (C.zf) goto L_120f6163;
  /* 120f6131 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6135 je 0x120f6163 */
  if (C.zf) goto L_120f6163;
  /* 120f6137 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f613b jne 0x120f6150 */
  if (!C.zf) goto L_120f6150;
  /* 120f613d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f6140 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f6143 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f6146 call 0x120f5f99 */
  push32(0x120f614bu); f_120f5f99();
  /* 120f614b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f614e pop ebp */
  EBP = (pop32());
  /* 120f614f ret  */
  ESPCHK(0x120f6128u, _esp0);
  ESP += 4; return;
L_120f6150:;
  /* 120f6150 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f6153 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f6156 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f6159 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f615c call 0x120f6095 */
  push32(0x120f6161u); f_120f6095();
  /* 120f6161 jmp 0x120f6174 */
  goto L_120f6174;
L_120f6163:;
  /* 120f6163 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120f6166 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120f6169 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f616c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f616f call 0x120f5e76 */
  push32(0x120f6174u); f_120f5e76();
L_120f6174:;
  /* 120f6174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6177 pop ebp */
  EBP = (pop32());
  /* 120f6178 ret  */
  ESPCHK(0x120f6128u, _esp0);
  ESP += 4; return;
}

/* FUN_10006179 @ 0x120f6179 (37 bytes, 18 insns) */
void f_120f6179(void) {
  FTRACE(0x120f6179u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6179 push edi */
  push32((uint32_t)(EDI));
  /* 120f617a mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f617e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f6180 je 0x120f619c */
  if (C.zf) goto L_120f619c;
  /* 120f6182 push esi */
  push32((uint32_t)(ESI));
  /* 120f6183 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f6187 push esi */
  push32((uint32_t)(ESI));
  /* 120f6188 call 0x120f9190 */
  push32(0x120f618du); f_120f9190();
  /* 120f618d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f618e push eax */
  push32((uint32_t)(EAX));
  /* 120f618f push esi */
  push32((uint32_t)(ESI));
  /* 120f6190 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6192 push esi */
  push32((uint32_t)(ESI));
  /* 120f6193 call 0x120f8950 */
  push32(0x120f6198u); f_120f8950();
  /* 120f6198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f619b pop esi */
  ESI = (pop32());
L_120f619c:;
  /* 120f619c pop edi */
  EDI = (pop32());
  /* 120f619d ret  */
  ESPCHK(0x120f6179u, _esp0);
  ESP += 4; return;
}

/* FUN_1000619e @ 0x120f619e (45 bytes, 12 insns) */
void f_120f619e(void) {
  FTRACE(0x120f619eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f619e mov eax, dword ptr [0x12100a34] */
  EAX = (r32((uint32_t)(0x12100a34)));
  /* 120f61a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f61a5 je 0x120f61a9 */
  if (C.zf) goto L_120f61a9;
  /* 120f61a7 call eax */
  call_ind((uint32_t)(EAX), 0x120f61a9u);
L_120f61a9:;
  /* 120f61a9 push 0x120ff024 */
  push32((uint32_t)(0x120ff024u));
  /* 120f61ae push 0x120ff014 */
  push32((uint32_t)(0x120ff014u));
  /* 120f61b3 call 0x120f62a2 */
  push32(0x120f61b8u); f_120f62a2();
  /* 120f61b8 push 0x120ff010 */
  push32((uint32_t)(0x120ff010u));
  /* 120f61bd push 0x120ff000 */
  push32((uint32_t)(0x120ff000u));
  /* 120f61c2 call 0x120f62a2 */
  push32(0x120f61c7u); f_120f62a2();
  /* 120f61c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f61ca ret  */
  ESPCHK(0x120f619eu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x120f61cb (17 bytes, 6 insns) */
void f_120f61cb(void) {
  FTRACE(0x120f61cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f61cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120f61cd push 1 */
  push32((uint32_t)(0x1u));
  /* 120f61cf push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f61d3 call 0x120f61eb */
  push32(0x120f61d8u); f_120f61eb();
  /* 120f61d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f61db ret  */
  ESPCHK(0x120f61cbu, _esp0);
  ESP += 4; return;
}

/* FUN_100061dc @ 0x120f61dc (15 bytes, 6 insns) */
void f_120f61dc(void) {
  FTRACE(0x120f61dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f61dc push 1 */
  push32((uint32_t)(0x1u));
  /* 120f61de push 0 */
  push32((uint32_t)(0x0u));
  /* 120f61e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f61e2 call 0x120f61eb */
  push32(0x120f61e7u); f_120f61eb();
  /* 120f61e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f61ea ret  */
  ESPCHK(0x120f61dcu, _esp0);
  ESP += 4; return;
}

/* FUN_100061eb @ 0x120f61eb (163 bytes, 53 insns) */
void f_120f61eb(void) {
  FTRACE(0x120f61ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f61eb push edi */
  push32((uint32_t)(EDI));
  /* 120f61ec call 0x120f6290 */
  push32(0x120f61f1u); f_120f6290();
  /* 120f61f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f61f3 pop edi */
  EDI = (pop32());
  /* 120f61f4 cmp dword ptr [0x12103ef8], edi */
  { uint32_t _a=(r32((uint32_t)(0x12103ef8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f61fa jne 0x120f620d */
  if (!C.zf) goto L_120f620d;
  /* 120f61fc push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 120f6200 call dword ptr [0x120fd0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0f0))), 0x120f6206u);
  /* 120f6206 push eax */
  push32((uint32_t)(EAX));
  /* 120f6207 call dword ptr [0x120fd0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0ec))), 0x120f620du);
L_120f620d:;
  /* 120f620d cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6212 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6213 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f6217 mov dword ptr [0x12103ef4], edi */
  w32((uint32_t)(0x12103ef4), (EDI));
  /* 120f621d mov byte ptr [0x12103ef0], bl */
  w8((uint32_t)(0x12103ef0), (BL));
  /* 120f6223 jne 0x120f6261 */
  if (!C.zf) goto L_120f6261;
  /* 120f6225 mov eax, dword ptr [0x12104590] */
  EAX = (r32((uint32_t)(0x12104590)));
  /* 120f622a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f622c je 0x120f6250 */
  if (C.zf) goto L_120f6250;
  /* 120f622e mov ecx, dword ptr [0x1210458c] */
  ECX = (r32((uint32_t)(0x1210458c)));
  /* 120f6234 push esi */
  push32((uint32_t)(ESI));
  /* 120f6235 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 120f6238 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f623a jb 0x120f624f */
  if (C.cf) goto L_120f624f;
L_120f623c:;
  /* 120f623c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f623e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6240 je 0x120f6244 */
  if (C.zf) goto L_120f6244;
  /* 120f6242 call eax */
  call_ind((uint32_t)(EAX), 0x120f6244u);
L_120f6244:;
  /* 120f6244 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6247 cmp esi, dword ptr [0x12104590] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12104590))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f624d jae 0x120f623c */
  if (!C.cf) goto L_120f623c;
L_120f624f:;
  /* 120f624f pop esi */
  ESI = (pop32());
L_120f6250:;
  /* 120f6250 push 0x120ff030 */
  push32((uint32_t)(0x120ff030u));
  /* 120f6255 push 0x120ff028 */
  push32((uint32_t)(0x120ff028u));
  /* 120f625a call 0x120f62a2 */
  push32(0x120f625fu); f_120f62a2();
  /* 120f625f pop ecx */
  ECX = (pop32());
  /* 120f6260 pop ecx */
  ECX = (pop32());
L_120f6261:;
  /* 120f6261 push 0x120ff03c */
  push32((uint32_t)(0x120ff03cu));
  /* 120f6266 push 0x120ff034 */
  push32((uint32_t)(0x120ff034u));
  /* 120f626b call 0x120f62a2 */
  push32(0x120f6270u); f_120f62a2();
  /* 120f6270 pop ecx */
  ECX = (pop32());
  /* 120f6271 pop ecx */
  ECX = (pop32());
  /* 120f6272 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f6274 pop ebx */
  EBX = (pop32());
  /* 120f6275 je 0x120f627e */
  if (C.zf) goto L_120f627e;
  /* 120f6277 call 0x120f6299 */
  push32(0x120f627cu); f_120f6299();
  /* 120f627c pop edi */
  EDI = (pop32());
  /* 120f627d ret  */
  ESPCHK(0x120f61ebu, _esp0);
  ESP += 4; return;
L_120f627e:;
  /* 120f627e push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 120f6282 mov dword ptr [0x12103ef8], edi */
  w32((uint32_t)(0x12103ef8), (EDI));
  /* 120f6288 call dword ptr [0x120fd0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0e8))), 0x120f628eu);
  /* 120f628e pop edi */
  EDI = (pop32());
  /* 120f628f ret  */
  ESPCHK(0x120f61ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x120f6290 (9 bytes, 4 insns) */
void f_120f6290(void) {
  FTRACE(0x120f6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6290 push 0xd */
  push32((uint32_t)(0xdu));
  /* 120f6292 call 0x120f6edc */
  push32(0x120f6297u); f_120f6edc();
  /* 120f6297 pop ecx */
  ECX = (pop32());
  /* 120f6298 ret  */
  ESPCHK(0x120f6290u, _esp0);
  ESP += 4; return;
}

/* FUN_10006299 @ 0x120f6299 (9 bytes, 4 insns) */
void f_120f6299(void) {
  FTRACE(0x120f6299u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6299 push 0xd */
  push32((uint32_t)(0xdu));
  /* 120f629b call 0x120f6f3d */
  push32(0x120f62a0u); f_120f6f3d();
  /* 120f62a0 pop ecx */
  ECX = (pop32());
  /* 120f62a1 ret  */
  ESPCHK(0x120f6299u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a2 @ 0x120f62a2 (26 bytes, 12 insns) */
void f_120f62a2(void) {
  FTRACE(0x120f62a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f62a2 push esi */
  push32((uint32_t)(ESI));
  /* 120f62a3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_120f62a7:;
  /* 120f62a7 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f62ab jae 0x120f62ba */
  if (!C.cf) goto L_120f62ba;
  /* 120f62ad mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f62af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f62b1 je 0x120f62b5 */
  if (C.zf) goto L_120f62b5;
  /* 120f62b3 call eax */
  call_ind((uint32_t)(EAX), 0x120f62b5u);
L_120f62b5:;
  /* 120f62b5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f62b8 jmp 0x120f62a7 */
  goto L_120f62a7;
L_120f62ba:;
  /* 120f62ba pop esi */
  ESI = (pop32());
  /* 120f62bb ret  */
  ESPCHK(0x120f62a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100062bc @ 0x120f62bc (444 bytes, 150 insns) */
void f_120f62bc(void) {
  FTRACE(0x120f62bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f62bc push ebp */
  push32((uint32_t)(EBP));
  /* 120f62bd mov ebp, esp */
  EBP = (ESP);
  /* 120f62bf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f62c2 push ebx */
  push32((uint32_t)(EBX));
  /* 120f62c3 push esi */
  push32((uint32_t)(ESI));
  /* 120f62c4 push edi */
  push32((uint32_t)(EDI));
  /* 120f62c5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 120f62ca call 0x120f5823 */
  push32(0x120f62cfu); f_120f5823();
  /* 120f62cf mov esi, eax */
  ESI = (EAX);
  /* 120f62d1 pop ecx */
  ECX = (pop32());
  /* 120f62d2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f62d4 jne 0x120f62de */
  if (!C.zf) goto L_120f62de;
  /* 120f62d6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 120f62d8 call 0x120f4b9b */
  push32(0x120f62ddu); f_120f4b9b();
  /* 120f62dd pop ecx */
  ECX = (pop32());
L_120f62de:;
  /* 120f62de mov dword ptr [0x12104480], esi */
  w32((uint32_t)(0x12104480), (ESI));
  /* 120f62e4 mov dword ptr [0x12104580], 0x20 */
  w32((uint32_t)(0x12104580), (0x20u));
  /* 120f62ee lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_120f62f4:;
  /* 120f62f4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f62f6 jae 0x120f6316 */
  if (!C.cf) goto L_120f6316;
  /* 120f62f8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 120f62fc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 120f62ff and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 120f6303 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 120f6307 mov eax, dword ptr [0x12104480] */
  EAX = (r32((uint32_t)(0x12104480)));
  /* 120f630c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f630f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6314 jmp 0x120f62f4 */
  goto L_120f62f4;
L_120f6316:;
  /* 120f6316 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 120f6319 push eax */
  push32((uint32_t)(EAX));
  /* 120f631a call dword ptr [0x120fd090] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd090))), 0x120f6320u);
  /* 120f6320 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f6325 je 0x120f63fc */
  if (C.zf) goto L_120f63fc;
  /* 120f632b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f632e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6330 je 0x120f63fc */
  if (C.zf) goto L_120f63fc;
  /* 120f6336 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 120f6338 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 120f633b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 120f633e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f6341 mov eax, 0x800 */
  EAX = (0x800u);
  /* 120f6346 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6348 jl 0x120f634c */
  if ((C.sf!=C.of)) goto L_120f634c;
  /* 120f634a mov edi, eax */
  EDI = (EAX);
L_120f634c:;
  /* 120f634c cmp dword ptr [0x12104580], edi */
  { uint32_t _a=(r32((uint32_t)(0x12104580))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6352 jge 0x120f63aa */
  if ((C.sf==C.of)) goto L_120f63aa;
  /* 120f6354 mov esi, 0x12104484 */
  ESI = (0x12104484u);
L_120f6359:;
  /* 120f6359 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 120f635e call 0x120f5823 */
  push32(0x120f6363u); f_120f5823();
  /* 120f6363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6365 pop ecx */
  ECX = (pop32());
  /* 120f6366 je 0x120f63a4 */
  if (C.zf) goto L_120f63a4;
  /* 120f6368 add dword ptr [0x12104580], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x12104580))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x12104580), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f636f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f6371 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_120f6377:;
  /* 120f6377 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6379 jae 0x120f6397 */
  if (!C.cf) goto L_120f6397;
  /* 120f637b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 120f637f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f6382 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 120f6386 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 120f638a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 120f638c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f638f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6395 jmp 0x120f6377 */
  goto L_120f6377;
L_120f6397:;
  /* 120f6397 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f639a cmp dword ptr [0x12104580], edi */
  { uint32_t _a=(r32((uint32_t)(0x12104580))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f63a0 jl 0x120f6359 */
  if ((C.sf!=C.of)) goto L_120f6359;
  /* 120f63a2 jmp 0x120f63aa */
  goto L_120f63aa;
L_120f63a4:;
  /* 120f63a4 mov edi, dword ptr [0x12104580] */
  EDI = (r32((uint32_t)(0x12104580)));
L_120f63aa:;
  /* 120f63aa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f63ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f63ae jle 0x120f63fc */
  if ((C.zf||C.sf!=C.of)) goto L_120f63fc;
L_120f63b0:;
  /* 120f63b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f63b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120f63b5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f63b8 je 0x120f63f2 */
  if (C.zf) goto L_120f63f2;
  /* 120f63ba mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 120f63bc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 120f63be je 0x120f63f2 */
  if (C.zf) goto L_120f63f2;
  /* 120f63c0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 120f63c2 jne 0x120f63cf */
  if (!C.zf) goto L_120f63cf;
  /* 120f63c4 push ecx */
  push32((uint32_t)(ECX));
  /* 120f63c5 call dword ptr [0x120fd0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0fc))), 0x120f63cbu);
  /* 120f63cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f63cd je 0x120f63f2 */
  if (C.zf) goto L_120f63f2;
L_120f63cf:;
  /* 120f63cf mov ecx, esi */
  ECX = (ESI);
  /* 120f63d1 mov eax, esi */
  EAX = (ESI);
  /* 120f63d3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120f63d6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f63d9 mov ecx, dword ptr [ecx*4 + 0x12104480] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120f63e0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 120f63e3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 120f63e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f63e9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 120f63eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f63ed mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 120f63ef mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_120f63f2:;
  /* 120f63f2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f63f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f63f7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f63f8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f63fa jl 0x120f63b0 */
  if ((C.sf!=C.of)) goto L_120f63b0;
L_120f63fc:;
  /* 120f63fc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_120f63fe:;
  /* 120f63fe mov ecx, dword ptr [0x12104480] */
  ECX = (r32((uint32_t)(0x12104480)));
  /* 120f6404 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 120f6407 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f640b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 120f640e jne 0x120f645d */
  if (!C.zf) goto L_120f645d;
  /* 120f6410 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f6412 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 120f6416 jne 0x120f641d */
  if (!C.zf) goto L_120f641d;
  /* 120f6418 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 120f641a pop eax */
  EAX = (pop32());
  /* 120f641b jmp 0x120f6427 */
  goto L_120f6427;
L_120f641d:;
  /* 120f641d mov eax, ebx */
  EAX = (EBX);
  /* 120f641f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f6420 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f6422 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6424 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120f6427:;
  /* 120f6427 push eax */
  push32((uint32_t)(EAX));
  /* 120f6428 call dword ptr [0x120fd0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0f8))), 0x120f642eu);
  /* 120f642e mov edi, eax */
  EDI = (EAX);
  /* 120f6430 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6433 je 0x120f644c */
  if (C.zf) goto L_120f644c;
  /* 120f6435 push edi */
  push32((uint32_t)(EDI));
  /* 120f6436 call dword ptr [0x120fd0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0fc))), 0x120f643cu);
  /* 120f643c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f643e je 0x120f644c */
  if (C.zf) goto L_120f644c;
  /* 120f6440 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f6445 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 120f6447 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f644a jne 0x120f6452 */
  if (!C.zf) goto L_120f6452;
L_120f644c:;
  /* 120f644c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 120f6450 jmp 0x120f6461 */
  goto L_120f6461;
L_120f6452:;
  /* 120f6452 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6455 jne 0x120f6461 */
  if (!C.zf) goto L_120f6461;
  /* 120f6457 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 120f645b jmp 0x120f6461 */
  goto L_120f6461;
L_120f645d:;
  /* 120f645d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_120f6461:;
  /* 120f6461 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f6462 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6465 jl 0x120f63fe */
  if ((C.sf!=C.of)) goto L_120f63fe;
  /* 120f6467 push dword ptr [0x12104580] */
  push32((uint32_t)(r32((uint32_t)(0x12104580))));
  /* 120f646d call dword ptr [0x120fd0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0f4))), 0x120f6473u);
  /* 120f6473 pop edi */
  EDI = (pop32());
  /* 120f6474 pop esi */
  ESI = (pop32());
  /* 120f6475 pop ebx */
  EBX = (pop32());
  /* 120f6476 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f6477 ret  */
  ESPCHK(0x120f62bcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006478 @ 0x120f6478 (84 bytes, 33 insns) */
void f_120f6478(void) {
  FTRACE(0x120f6478u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6478 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6479 push esi */
  push32((uint32_t)(ESI));
  /* 120f647a push edi */
  push32((uint32_t)(EDI));
  /* 120f647b mov esi, 0x12104480 */
  ESI = (0x12104480u);
L_120f6480:;
  /* 120f6480 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f6482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6484 je 0x120f64bd */
  if (C.zf) goto L_120f64bd;
  /* 120f6486 mov edi, eax */
  EDI = (EAX);
  /* 120f6488 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f648d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f648f jae 0x120f64b2 */
  if (!C.cf) goto L_120f64b2;
  /* 120f6491 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_120f6494:;
  /* 120f6494 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6498 je 0x120f64a1 */
  if (C.zf) goto L_120f64a1;
  /* 120f649a push ebx */
  push32((uint32_t)(EBX));
  /* 120f649b call dword ptr [0x120fd08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd08c))), 0x120f64a1u);
L_120f64a1:;
  /* 120f64a1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f64a3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f64a6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f64ab add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f64ae cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f64b0 jb 0x120f6494 */
  if (C.cf) goto L_120f6494;
L_120f64b2:;
  /* 120f64b2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f64b4 call 0x120f4e1c */
  push32(0x120f64b9u); f_120f4e1c();
  /* 120f64b9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 120f64bc pop ecx */
  ECX = (pop32());
L_120f64bd:;
  /* 120f64bd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f64c0 cmp esi, 0x12104580 */
  { uint32_t _a=(ESI),_b=(0x12104580u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f64c6 jl 0x120f6480 */
  if ((C.sf!=C.of)) goto L_120f6480;
  /* 120f64c8 pop edi */
  EDI = (pop32());
  /* 120f64c9 pop esi */
  ESI = (pop32());
  /* 120f64ca pop ebx */
  EBX = (pop32());
  /* 120f64cb ret  */
  ESPCHK(0x120f6478u, _esp0);
  ESP += 4; return;
}

/* FUN_100064cc @ 0x120f64cc (185 bytes, 71 insns) */
void f_120f64cc(void) {
  FTRACE(0x120f64ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f64cc push ebx */
  push32((uint32_t)(EBX));
  /* 120f64cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f64cf cmp dword ptr [0x12104588], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104588))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f64d5 push esi */
  push32((uint32_t)(ESI));
  /* 120f64d6 push edi */
  push32((uint32_t)(EDI));
  /* 120f64d7 jne 0x120f64de */
  if (!C.zf) goto L_120f64de;
  /* 120f64d9 call 0x120fa0a9 */
  push32(0x120f64deu); f_120fa0a9();
L_120f64de:;
  /* 120f64de mov esi, dword ptr [0x12103e9c] */
  ESI = (r32((uint32_t)(0x12103e9c)));
  /* 120f64e4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_120f64e6:;
  /* 120f64e6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f64e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f64ea je 0x120f64fe */
  if (C.zf) goto L_120f64fe;
  /* 120f64ec cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f64ee je 0x120f64f1 */
  if (C.zf) goto L_120f64f1;
  /* 120f64f0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_120f64f1:;
  /* 120f64f1 push esi */
  push32((uint32_t)(ESI));
  /* 120f64f2 call 0x120f9190 */
  push32(0x120f64f7u); f_120f9190();
  /* 120f64f7 pop ecx */
  ECX = (pop32());
  /* 120f64f8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 120f64fc jmp 0x120f64e6 */
  goto L_120f64e6;
L_120f64fe:;
  /* 120f64fe lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 120f6505 push eax */
  push32((uint32_t)(EAX));
  /* 120f6506 call 0x120f5823 */
  push32(0x120f650bu); f_120f5823();
  /* 120f650b mov esi, eax */
  ESI = (EAX);
  /* 120f650d pop ecx */
  ECX = (pop32());
  /* 120f650e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6510 mov dword ptr [0x12103ed8], esi */
  w32((uint32_t)(0x12103ed8), (ESI));
  /* 120f6516 jne 0x120f6520 */
  if (!C.zf) goto L_120f6520;
  /* 120f6518 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f651a call 0x120f4b9b */
  push32(0x120f651fu); f_120f4b9b();
  /* 120f651f pop ecx */
  ECX = (pop32());
L_120f6520:;
  /* 120f6520 mov edi, dword ptr [0x12103e9c] */
  EDI = (r32((uint32_t)(0x12103e9c)));
  /* 120f6526 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6528 je 0x120f6563 */
  if (C.zf) goto L_120f6563;
  /* 120f652a push ebp */
  push32((uint32_t)(EBP));
L_120f652b:;
  /* 120f652b push edi */
  push32((uint32_t)(EDI));
  /* 120f652c call 0x120f9190 */
  push32(0x120f6531u); f_120f9190();
  /* 120f6531 mov ebp, eax */
  EBP = (EAX);
  /* 120f6533 pop ecx */
  ECX = (pop32());
  /* 120f6534 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 120f6535 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6538 je 0x120f655c */
  if (C.zf) goto L_120f655c;
  /* 120f653a push ebp */
  push32((uint32_t)(EBP));
  /* 120f653b call 0x120f5823 */
  push32(0x120f6540u); f_120f5823();
  /* 120f6540 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6542 pop ecx */
  ECX = (pop32());
  /* 120f6543 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f6545 jne 0x120f654f */
  if (!C.zf) goto L_120f654f;
  /* 120f6547 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f6549 call 0x120f4b9b */
  push32(0x120f654eu); f_120f4b9b();
  /* 120f654e pop ecx */
  ECX = (pop32());
L_120f654f:;
  /* 120f654f push edi */
  push32((uint32_t)(EDI));
  /* 120f6550 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6552 call 0x120f9b80 */
  push32(0x120f6557u); f_120f9b80();
  /* 120f6557 pop ecx */
  ECX = (pop32());
  /* 120f6558 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f655b pop ecx */
  ECX = (pop32());
L_120f655c:;
  /* 120f655c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f655e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6560 jne 0x120f652b */
  if (!C.zf) goto L_120f652b;
  /* 120f6562 pop ebp */
  EBP = (pop32());
L_120f6563:;
  /* 120f6563 push dword ptr [0x12103e9c] */
  push32((uint32_t)(r32((uint32_t)(0x12103e9c))));
  /* 120f6569 call 0x120f4e1c */
  push32(0x120f656eu); f_120f4e1c();
  /* 120f656e pop ecx */
  ECX = (pop32());
  /* 120f656f mov dword ptr [0x12103e9c], ebx */
  w32((uint32_t)(0x12103e9c), (EBX));
  /* 120f6575 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 120f6577 pop edi */
  EDI = (pop32());
  /* 120f6578 pop esi */
  ESI = (pop32());
  /* 120f6579 mov dword ptr [0x12104584], 1 */
  w32((uint32_t)(0x12104584), (0x1u));
  /* 120f6583 pop ebx */
  EBX = (pop32());
  /* 120f6584 ret  */
  ESPCHK(0x120f64ccu, _esp0);
  ESP += 4; return;
}

/* FUN_10006585 @ 0x120f6585 (153 bytes, 62 insns) */
void f_120f6585(void) {
  FTRACE(0x120f6585u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6585 push ebp */
  push32((uint32_t)(EBP));
  /* 120f6586 mov ebp, esp */
  EBP = (ESP);
  /* 120f6588 push ecx */
  push32((uint32_t)(ECX));
  /* 120f6589 push ecx */
  push32((uint32_t)(ECX));
  /* 120f658a push ebx */
  push32((uint32_t)(EBX));
  /* 120f658b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f658d cmp dword ptr [0x12104588], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104588))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6593 push esi */
  push32((uint32_t)(ESI));
  /* 120f6594 push edi */
  push32((uint32_t)(EDI));
  /* 120f6595 jne 0x120f659c */
  if (!C.zf) goto L_120f659c;
  /* 120f6597 call 0x120fa0a9 */
  push32(0x120f659cu); f_120fa0a9();
L_120f659c:;
  /* 120f659c mov esi, 0x12103efc */
  ESI = (0x12103efcu);
  /* 120f65a1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120f65a6 push esi */
  push32((uint32_t)(ESI));
  /* 120f65a7 push ebx */
  push32((uint32_t)(EBX));
  /* 120f65a8 call dword ptr [0x120fd0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0cc))), 0x120f65aeu);
  /* 120f65ae mov eax, dword ptr [0x121055a4] */
  EAX = (r32((uint32_t)(0x121055a4)));
  /* 120f65b3 mov dword ptr [0x12103ee8], esi */
  w32((uint32_t)(0x12103ee8), (ESI));
  /* 120f65b9 mov edi, esi */
  EDI = (ESI);
  /* 120f65bb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f65bd je 0x120f65c1 */
  if (C.zf) goto L_120f65c1;
  /* 120f65bf mov edi, eax */
  EDI = (EAX);
L_120f65c1:;
  /* 120f65c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120f65c4 push eax */
  push32((uint32_t)(EAX));
  /* 120f65c5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f65c8 push eax */
  push32((uint32_t)(EAX));
  /* 120f65c9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f65ca push ebx */
  push32((uint32_t)(EBX));
  /* 120f65cb push edi */
  push32((uint32_t)(EDI));
  /* 120f65cc call 0x120f661e */
  push32(0x120f65d1u); f_120f661e();
  /* 120f65d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f65d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f65d7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 120f65da push eax */
  push32((uint32_t)(EAX));
  /* 120f65db call 0x120f5823 */
  push32(0x120f65e0u); f_120f5823();
  /* 120f65e0 mov esi, eax */
  ESI = (EAX);
  /* 120f65e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f65e5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f65e7 jne 0x120f65f1 */
  if (!C.zf) goto L_120f65f1;
  /* 120f65e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f65eb call 0x120f4b9b */
  push32(0x120f65f0u); f_120f4b9b();
  /* 120f65f0 pop ecx */
  ECX = (pop32());
L_120f65f1:;
  /* 120f65f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120f65f4 push eax */
  push32((uint32_t)(EAX));
  /* 120f65f5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f65f8 push eax */
  push32((uint32_t)(EAX));
  /* 120f65f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f65fc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 120f65ff push eax */
  push32((uint32_t)(EAX));
  /* 120f6600 push esi */
  push32((uint32_t)(ESI));
  /* 120f6601 push edi */
  push32((uint32_t)(EDI));
  /* 120f6602 call 0x120f661e */
  push32(0x120f6607u); f_120f661e();
  /* 120f6607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f660a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f660d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f660e mov dword ptr [0x12103ed0], esi */
  w32((uint32_t)(0x12103ed0), (ESI));
  /* 120f6614 pop edi */
  EDI = (pop32());
  /* 120f6615 pop esi */
  ESI = (pop32());
  /* 120f6616 mov dword ptr [0x12103ecc], eax */
  w32((uint32_t)(0x12103ecc), (EAX));
  /* 120f661b pop ebx */
  EBX = (pop32());
  /* 120f661c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f661d ret  */
  ESPCHK(0x120f6585u, _esp0);
  ESP += 4; return;
}

/* FUN_1000661e @ 0x120f661e (436 bytes, 187 insns) */
void f_120f661e(void) {
  FTRACE(0x120f661eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f661e push ebp */
  push32((uint32_t)(EBP));
  /* 120f661f mov ebp, esp */
  EBP = (ESP);
  /* 120f6621 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f6624 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f6627 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6628 push esi */
  push32((uint32_t)(ESI));
  /* 120f6629 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 120f662c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f662f push edi */
  push32((uint32_t)(EDI));
  /* 120f6630 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f6633 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 120f6639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f663c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f663e je 0x120f6648 */
  if (C.zf) goto L_120f6648;
  /* 120f6640 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 120f6642 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6645 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_120f6648:;
  /* 120f6648 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f664b jne 0x120f6691 */
  if (!C.zf) goto L_120f6691;
L_120f664d:;
  /* 120f664d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 120f6650 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6651 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6654 je 0x120f667f */
  if (C.zf) goto L_120f667f;
  /* 120f6656 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f6658 je 0x120f667f */
  if (C.zf) goto L_120f667f;
  /* 120f665a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 120f665d test byte ptr [edx + 0x12104341], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x12104341)))&(0x4u); fl_logic(_r,8); }
  /* 120f6664 je 0x120f6672 */
  if (C.zf) goto L_120f6672;
  /* 120f6666 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f6668 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f666a je 0x120f6672 */
  if (C.zf) goto L_120f6672;
  /* 120f666c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f666e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 120f6670 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f6671 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120f6672:;
  /* 120f6672 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f6674 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f6676 je 0x120f664d */
  if (C.zf) goto L_120f664d;
  /* 120f6678 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f667a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 120f667c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f667d jmp 0x120f664d */
  goto L_120f664d;
L_120f667f:;
  /* 120f667f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f6681 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f6683 je 0x120f6689 */
  if (C.zf) goto L_120f6689;
  /* 120f6685 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 120f6688 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f6689:;
  /* 120f6689 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f668c jne 0x120f66d4 */
  if (!C.zf) goto L_120f66d4;
  /* 120f668e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f668f jmp 0x120f66d4 */
  goto L_120f66d4;
L_120f6691:;
  /* 120f6691 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f6693 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f6695 je 0x120f669c */
  if (C.zf) goto L_120f669c;
  /* 120f6697 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f6699 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 120f669b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f669c:;
  /* 120f669c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f669e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f669f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 120f66a2 test byte ptr [ebx + 0x12104341], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x12104341)))&(0x4u); fl_logic(_r,8); }
  /* 120f66a9 je 0x120f66b7 */
  if (C.zf) goto L_120f66b7;
  /* 120f66ab inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f66ad test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f66af je 0x120f66b6 */
  if (C.zf) goto L_120f66b6;
  /* 120f66b1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 120f66b3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 120f66b5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f66b6:;
  /* 120f66b6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120f66b7:;
  /* 120f66b7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f66ba je 0x120f66c5 */
  if (C.zf) goto L_120f66c5;
  /* 120f66bc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f66be je 0x120f66c9 */
  if (C.zf) goto L_120f66c9;
  /* 120f66c0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f66c3 jne 0x120f6691 */
  if (!C.zf) goto L_120f6691;
L_120f66c5:;
  /* 120f66c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f66c7 jne 0x120f66cc */
  if (!C.zf) goto L_120f66cc;
L_120f66c9:;
  /* 120f66c9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f66ca jmp 0x120f66d4 */
  goto L_120f66d4;
L_120f66cc:;
  /* 120f66cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f66ce je 0x120f66d4 */
  if (C.zf) goto L_120f66d4;
  /* 120f66d0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_120f66d4:;
  /* 120f66d4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_120f66d8:;
  /* 120f66d8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f66db je 0x120f67c1 */
  if (C.zf) goto L_120f67c1;
L_120f66e1:;
  /* 120f66e1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f66e3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f66e6 je 0x120f66ed */
  if (C.zf) goto L_120f66ed;
  /* 120f66e8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f66eb jne 0x120f66f0 */
  if (!C.zf) goto L_120f66f0;
L_120f66ed:;
  /* 120f66ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f66ee jmp 0x120f66e1 */
  goto L_120f66e1;
L_120f66f0:;
  /* 120f66f0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f66f3 je 0x120f67c1 */
  if (C.zf) goto L_120f67c1;
  /* 120f66f9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f66fb je 0x120f6705 */
  if (C.zf) goto L_120f6705;
  /* 120f66fd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 120f66ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6702 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_120f6705:;
  /* 120f6705 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f6708 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_120f670a:;
  /* 120f670a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 120f6711 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_120f6713:;
  /* 120f6713 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6716 jne 0x120f671c */
  if (!C.zf) goto L_120f671c;
  /* 120f6718 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6719 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f671a jmp 0x120f6713 */
  goto L_120f6713;
L_120f671c:;
  /* 120f671c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f671f jne 0x120f674d */
  if (!C.zf) goto L_120f674d;
  /* 120f6721 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 120f6724 jne 0x120f674b */
  if (!C.zf) goto L_120f674b;
  /* 120f6726 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f6728 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f672b je 0x120f673a */
  if (C.zf) goto L_120f673a;
  /* 120f672d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6731 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 120f6734 jne 0x120f673a */
  if (!C.zf) goto L_120f673a;
  /* 120f6736 mov eax, edx */
  EAX = (EDX);
  /* 120f6738 jmp 0x120f673d */
  goto L_120f673d;
L_120f673a:;
  /* 120f673a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_120f673d:;
  /* 120f673d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f6740 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120f6742 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6745 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 120f6748 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_120f674b:;
  /* 120f674b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_120f674d:;
  /* 120f674d mov edx, ebx */
  EDX = (EBX);
  /* 120f674f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f6750 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f6752 je 0x120f6762 */
  if (C.zf) goto L_120f6762;
  /* 120f6754 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_120f6755:;
  /* 120f6755 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f6757 je 0x120f675d */
  if (C.zf) goto L_120f675d;
  /* 120f6759 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 120f675c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f675d:;
  /* 120f675d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f675f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f6760 jne 0x120f6755 */
  if (!C.zf) goto L_120f6755;
L_120f6762:;
  /* 120f6762 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f6764 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f6766 je 0x120f67b2 */
  if (C.zf) goto L_120f67b2;
  /* 120f6768 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f676c jne 0x120f6778 */
  if (!C.zf) goto L_120f6778;
  /* 120f676e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6771 je 0x120f67b2 */
  if (C.zf) goto L_120f67b2;
  /* 120f6773 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6776 je 0x120f67b2 */
  if (C.zf) goto L_120f67b2;
L_120f6778:;
  /* 120f6778 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f677c je 0x120f67ac */
  if (C.zf) goto L_120f67ac;
  /* 120f677e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f6780 je 0x120f679b */
  if (C.zf) goto L_120f679b;
  /* 120f6782 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 120f6785 test byte ptr [ebx + 0x12104341], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x12104341)))&(0x4u); fl_logic(_r,8); }
  /* 120f678c je 0x120f6794 */
  if (C.zf) goto L_120f6794;
  /* 120f678e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 120f6790 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f6791 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6792 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_120f6794:;
  /* 120f6794 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 120f6796 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 120f6798 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f6799 jmp 0x120f67aa */
  goto L_120f67aa;
L_120f679b:;
  /* 120f679b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 120f679e test byte ptr [edx + 0x12104341], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x12104341)))&(0x4u); fl_logic(_r,8); }
  /* 120f67a5 je 0x120f67aa */
  if (C.zf) goto L_120f67aa;
  /* 120f67a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f67a8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_120f67aa:;
  /* 120f67aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_120f67ac:;
  /* 120f67ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f67ad jmp 0x120f670a */
  goto L_120f670a;
L_120f67b2:;
  /* 120f67b2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f67b4 je 0x120f67ba */
  if (C.zf) goto L_120f67ba;
  /* 120f67b6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 120f67b9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f67ba:;
  /* 120f67ba inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 120f67bc jmp 0x120f66d8 */
  goto L_120f66d8;
L_120f67c1:;
  /* 120f67c1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f67c3 je 0x120f67c8 */
  if (C.zf) goto L_120f67c8;
  /* 120f67c5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_120f67c8:;
  /* 120f67c8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f67cb pop edi */
  EDI = (pop32());
  /* 120f67cc pop esi */
  ESI = (pop32());
  /* 120f67cd pop ebx */
  EBX = (pop32());
  /* 120f67ce inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 120f67d0 pop ebp */
  EBP = (pop32());
  /* 120f67d1 ret  */
  ESPCHK(0x120f661eu, _esp0);
  ESP += 4; return;
}

/* FUN_100067d2 @ 0x120f67d2 (306 bytes, 132 insns) */
void f_120f67d2(void) {
  FTRACE(0x120f67d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f67d2 push ecx */
  push32((uint32_t)(ECX));
  /* 120f67d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120f67d4 mov eax, dword ptr [0x12104000] */
  EAX = (r32((uint32_t)(0x12104000)));
  /* 120f67d9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f67da push ebp */
  push32((uint32_t)(EBP));
  /* 120f67db mov ebp, dword ptr [0x120fd074] */
  EBP = (r32((uint32_t)(0x120fd074)));
  /* 120f67e1 push esi */
  push32((uint32_t)(ESI));
  /* 120f67e2 push edi */
  push32((uint32_t)(EDI));
  /* 120f67e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f67e5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f67e7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f67e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f67eb jne 0x120f6820 */
  if (!C.zf) goto L_120f6820;
  /* 120f67ed call ebp */
  call_ind((uint32_t)(EBP), 0x120f67efu);
  /* 120f67ef mov esi, eax */
  ESI = (EAX);
  /* 120f67f1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f67f3 je 0x120f6801 */
  if (C.zf) goto L_120f6801;
  /* 120f67f5 mov dword ptr [0x12104000], 1 */
  w32((uint32_t)(0x12104000), (0x1u));
  /* 120f67ff jmp 0x120f6829 */
  goto L_120f6829;
L_120f6801:;
  /* 120f6801 call dword ptr [0x120fd078] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd078))), 0x120f6807u);
  /* 120f6807 mov edi, eax */
  EDI = (EAX);
  /* 120f6809 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f680b je 0x120f68fb */
  if (C.zf) goto L_120f68fb;
  /* 120f6811 mov dword ptr [0x12104000], 2 */
  w32((uint32_t)(0x12104000), (0x2u));
  /* 120f681b jmp 0x120f68af */
  goto L_120f68af;
L_120f6820:;
  /* 120f6820 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6823 jne 0x120f68aa */
  if (!C.zf) goto L_120f68aa;
L_120f6829:;
  /* 120f6829 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f682b jne 0x120f6839 */
  if (!C.zf) goto L_120f6839;
  /* 120f682d call ebp */
  call_ind((uint32_t)(EBP), 0x120f682fu);
  /* 120f682f mov esi, eax */
  ESI = (EAX);
  /* 120f6831 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6833 je 0x120f68fb */
  if (C.zf) goto L_120f68fb;
L_120f6839:;
  /* 120f6839 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f683c mov eax, esi */
  EAX = (ESI);
  /* 120f683e je 0x120f684e */
  if (C.zf) goto L_120f684e;
L_120f6840:;
  /* 120f6840 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6841 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6842 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f6845 jne 0x120f6840 */
  if (!C.zf) goto L_120f6840;
  /* 120f6847 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6849 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f684c jne 0x120f6840 */
  if (!C.zf) goto L_120f6840;
L_120f684e:;
  /* 120f684e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6850 mov edi, dword ptr [0x120fd088] */
  EDI = (r32((uint32_t)(0x120fd088)));
  /* 120f6856 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120f6858 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6859 push ebx */
  push32((uint32_t)(EBX));
  /* 120f685a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f685b push ebx */
  push32((uint32_t)(EBX));
  /* 120f685c push ebx */
  push32((uint32_t)(EBX));
  /* 120f685d push eax */
  push32((uint32_t)(EAX));
  /* 120f685e push esi */
  push32((uint32_t)(ESI));
  /* 120f685f push ebx */
  push32((uint32_t)(EBX));
  /* 120f6860 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6861 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 120f6865 call edi */
  call_ind((uint32_t)(EDI), 0x120f6867u);
  /* 120f6867 mov ebp, eax */
  EBP = (EAX);
  /* 120f6869 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f686b je 0x120f689f */
  if (C.zf) goto L_120f689f;
  /* 120f686d push ebp */
  push32((uint32_t)(EBP));
  /* 120f686e call 0x120f5823 */
  push32(0x120f6873u); f_120f5823();
  /* 120f6873 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6875 pop ecx */
  ECX = (pop32());
  /* 120f6876 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 120f687a je 0x120f689f */
  if (C.zf) goto L_120f689f;
  /* 120f687c push ebx */
  push32((uint32_t)(EBX));
  /* 120f687d push ebx */
  push32((uint32_t)(EBX));
  /* 120f687e push ebp */
  push32((uint32_t)(EBP));
  /* 120f687f push eax */
  push32((uint32_t)(EAX));
  /* 120f6880 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 120f6884 push esi */
  push32((uint32_t)(ESI));
  /* 120f6885 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6886 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6887 call edi */
  call_ind((uint32_t)(EDI), 0x120f6889u);
  /* 120f6889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f688b jne 0x120f689b */
  if (!C.zf) goto L_120f689b;
  /* 120f688d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 120f6891 call 0x120f4e1c */
  push32(0x120f6896u); f_120f4e1c();
  /* 120f6896 pop ecx */
  ECX = (pop32());
  /* 120f6897 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_120f689b:;
  /* 120f689b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_120f689f:;
  /* 120f689f push esi */
  push32((uint32_t)(ESI));
  /* 120f68a0 call dword ptr [0x120fd080] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd080))), 0x120f68a6u);
  /* 120f68a6 mov eax, ebx */
  EAX = (EBX);
  /* 120f68a8 jmp 0x120f68fd */
  goto L_120f68fd;
L_120f68aa:;
  /* 120f68aa cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f68ad jne 0x120f68fb */
  if (!C.zf) goto L_120f68fb;
L_120f68af:;
  /* 120f68af cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f68b1 jne 0x120f68bf */
  if (!C.zf) goto L_120f68bf;
  /* 120f68b3 call dword ptr [0x120fd078] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd078))), 0x120f68b9u);
  /* 120f68b9 mov edi, eax */
  EDI = (EAX);
  /* 120f68bb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f68bd je 0x120f68fb */
  if (C.zf) goto L_120f68fb;
L_120f68bf:;
  /* 120f68bf cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f68c1 mov eax, edi */
  EAX = (EDI);
  /* 120f68c3 je 0x120f68cf */
  if (C.zf) goto L_120f68cf;
L_120f68c5:;
  /* 120f68c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f68c6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f68c8 jne 0x120f68c5 */
  if (!C.zf) goto L_120f68c5;
  /* 120f68ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f68cb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f68cd jne 0x120f68c5 */
  if (!C.zf) goto L_120f68c5;
L_120f68cf:;
  /* 120f68cf sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f68d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f68d2 mov ebp, eax */
  EBP = (EAX);
  /* 120f68d4 push ebp */
  push32((uint32_t)(EBP));
  /* 120f68d5 call 0x120f5823 */
  push32(0x120f68dau); f_120f5823();
  /* 120f68da mov esi, eax */
  ESI = (EAX);
  /* 120f68dc pop ecx */
  ECX = (pop32());
  /* 120f68dd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f68df jne 0x120f68e5 */
  if (!C.zf) goto L_120f68e5;
  /* 120f68e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f68e3 jmp 0x120f68f0 */
  goto L_120f68f0;
L_120f68e5:;
  /* 120f68e5 push ebp */
  push32((uint32_t)(EBP));
  /* 120f68e6 push edi */
  push32((uint32_t)(EDI));
  /* 120f68e7 push esi */
  push32((uint32_t)(ESI));
  /* 120f68e8 call 0x120fa0d0 */
  push32(0x120f68edu); f_120fa0d0();
  /* 120f68ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f68f0:;
  /* 120f68f0 push edi */
  push32((uint32_t)(EDI));
  /* 120f68f1 call dword ptr [0x120fd084] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd084))), 0x120f68f7u);
  /* 120f68f7 mov eax, esi */
  EAX = (ESI);
  /* 120f68f9 jmp 0x120f68fd */
  goto L_120f68fd;
L_120f68fb:;
  /* 120f68fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f68fd:;
  /* 120f68fd pop edi */
  EDI = (pop32());
  /* 120f68fe pop esi */
  ESI = (pop32());
  /* 120f68ff pop ebp */
  EBP = (pop32());
  /* 120f6900 pop ebx */
  EBX = (pop32());
  /* 120f6901 pop ecx */
  ECX = (pop32());
  /* 120f6902 pop ecx */
  ECX = (pop32());
  /* 120f6903 ret  */
  ESPCHK(0x120f67d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006904 @ 0x120f6904 (45 bytes, 17 insns) */
void f_120f6904(void) {
  FTRACE(0x120f6904u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6904 push esi */
  push32((uint32_t)(ESI));
  /* 120f6905 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f6909 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f690b and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 120f690e call dword ptr [0x120fd0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0e4))), 0x120f6914u);
  /* 120f6914 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f6919 jne 0x120f692f */
  if (!C.zf) goto L_120f692f;
  /* 120f691b mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 120f691e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f6920 je 0x120f692f */
  if (C.zf) goto L_120f692f;
  /* 120f6922 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6924 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 120f6927 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 120f6929 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 120f692c mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_120f692f:;
  /* 120f692f pop esi */
  ESI = (pop32());
  /* 120f6930 ret  */
  ESPCHK(0x120f6904u, _esp0);
  ESP += 4; return;
}

/* FUN_10006931 @ 0x120f6931 (328 bytes, 115 insns) */
void f_120f6931(void) {
  FTRACE(0x120f6931u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6931 push ebp */
  push32((uint32_t)(EBP));
  /* 120f6932 mov ebp, esp */
  EBP = (ESP);
  /* 120f6934 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 120f6939 call 0x120fa7c0 */
  push32(0x120f693eu); f_120fa7c0();
  /* 120f693e lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 120f6944 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6945 push eax */
  push32((uint32_t)(EAX));
  /* 120f6946 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 120f6950 call dword ptr [0x120fd06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd06c))), 0x120f6956u);
  /* 120f6956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6958 je 0x120f6974 */
  if (C.zf) goto L_120f6974;
  /* 120f695a cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6961 jne 0x120f6974 */
  if (!C.zf) goto L_120f6974;
  /* 120f6963 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f696a jb 0x120f6974 */
  if (C.cf) goto L_120f6974;
  /* 120f696c push 1 */
  push32((uint32_t)(0x1u));
  /* 120f696e pop eax */
  EAX = (pop32());
  /* 120f696f jmp 0x120f6a76 */
  goto L_120f6a76;
L_120f6974:;
  /* 120f6974 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 120f697a push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 120f697f push eax */
  push32((uint32_t)(EAX));
  /* 120f6980 push 0x120fd358 */
  push32((uint32_t)(0x120fd358u));
  /* 120f6985 call dword ptr [0x120fd07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd07c))), 0x120f698bu);
  /* 120f698b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f698d je 0x120f6a63 */
  if (C.zf) goto L_120f6a63;
  /* 120f6993 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f6995 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 120f699b cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f69a1 je 0x120f69b6 */
  if (C.zf) goto L_120f69b6;
L_120f69a3:;
  /* 120f69a3 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120f69a5 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f69a7 jl 0x120f69b1 */
  if ((C.sf!=C.of)) goto L_120f69b1;
  /* 120f69a9 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f69ab jg 0x120f69b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f69b1;
  /* 120f69ad sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120f69af mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_120f69b1:;
  /* 120f69b1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f69b2 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f69b4 jne 0x120f69a3 */
  if (!C.zf) goto L_120f69a3;
L_120f69b6:;
  /* 120f69b6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 120f69bc push 0x16 */
  push32((uint32_t)(0x16u));
  /* 120f69be push eax */
  push32((uint32_t)(EAX));
  /* 120f69bf push 0x120fd340 */
  push32((uint32_t)(0x120fd340u));
  /* 120f69c4 call 0x120fa780 */
  push32(0x120f69c9u); f_120fa780();
  /* 120f69c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f69cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f69ce jne 0x120f69d8 */
  if (!C.zf) goto L_120f69d8;
  /* 120f69d0 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 120f69d6 jmp 0x120f6a21 */
  goto L_120f6a21;
L_120f69d8:;
  /* 120f69d8 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 120f69de push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120f69e3 push eax */
  push32((uint32_t)(EAX));
  /* 120f69e4 push ebx */
  push32((uint32_t)(EBX));
  /* 120f69e5 call dword ptr [0x120fd0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0cc))), 0x120f69ebu);
  /* 120f69eb cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f69f1 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 120f69f7 je 0x120f6a0c */
  if (C.zf) goto L_120f6a0c;
L_120f69f9:;
  /* 120f69f9 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120f69fb cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f69fd jl 0x120f6a07 */
  if ((C.sf!=C.of)) goto L_120f6a07;
  /* 120f69ff cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6a01 jg 0x120f6a07 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f6a07;
  /* 120f6a03 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120f6a05 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_120f6a07:;
  /* 120f6a07 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f6a08 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6a0a jne 0x120f69f9 */
  if (!C.zf) goto L_120f69f9;
L_120f6a0c:;
  /* 120f6a0c lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 120f6a12 push eax */
  push32((uint32_t)(EAX));
  /* 120f6a13 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 120f6a19 push eax */
  push32((uint32_t)(EAX));
  /* 120f6a1a call 0x120fa700 */
  push32(0x120f6a1fu); f_120fa700();
  /* 120f6a1f pop ecx */
  ECX = (pop32());
  /* 120f6a20 pop ecx */
  ECX = (pop32());
L_120f6a21:;
  /* 120f6a21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6a23 je 0x120f6a63 */
  if (C.zf) goto L_120f6a63;
  /* 120f6a25 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 120f6a27 push eax */
  push32((uint32_t)(EAX));
  /* 120f6a28 call 0x120fa640 */
  push32(0x120f6a2du); f_120fa640();
  /* 120f6a2d pop ecx */
  ECX = (pop32());
  /* 120f6a2e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6a30 pop ecx */
  ECX = (pop32());
  /* 120f6a31 je 0x120f6a63 */
  if (C.zf) goto L_120f6a63;
  /* 120f6a33 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6a34 mov ecx, eax */
  ECX = (EAX);
  /* 120f6a36 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6a38 je 0x120f6a48 */
  if (C.zf) goto L_120f6a48;
L_120f6a3a:;
  /* 120f6a3a cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6a3d jne 0x120f6a43 */
  if (!C.zf) goto L_120f6a43;
  /* 120f6a3f mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 120f6a41 jmp 0x120f6a44 */
  goto L_120f6a44;
L_120f6a43:;
  /* 120f6a43 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_120f6a44:;
  /* 120f6a44 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6a46 jne 0x120f6a3a */
  if (!C.zf) goto L_120f6a3a;
L_120f6a48:;
  /* 120f6a48 push 0xa */
  push32((uint32_t)(0xau));
  /* 120f6a4a push ebx */
  push32((uint32_t)(EBX));
  /* 120f6a4b push eax */
  push32((uint32_t)(EAX));
  /* 120f6a4c call 0x120fa405 */
  push32(0x120f6a51u); f_120fa405();
  /* 120f6a51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6a54 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6a57 je 0x120f6a76 */
  if (C.zf) goto L_120f6a76;
  /* 120f6a59 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6a5c je 0x120f6a76 */
  if (C.zf) goto L_120f6a76;
  /* 120f6a5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6a61 je 0x120f6a76 */
  if (C.zf) goto L_120f6a76;
L_120f6a63:;
  /* 120f6a63 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f6a66 push eax */
  push32((uint32_t)(EAX));
  /* 120f6a67 call 0x120f6904 */
  push32(0x120f6a6cu); f_120f6904();
  /* 120f6a6c cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f6a70 pop ecx */
  ECX = (pop32());
  /* 120f6a71 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6a73 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120f6a76:;
  /* 120f6a76 pop ebx */
  EBX = (pop32());
  /* 120f6a77 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f6a78 ret  */
  ESPCHK(0x120f6931u, _esp0);
  ESP += 4; return;
}

