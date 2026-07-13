#include "recomp.h"

/* OnInit @ 0x10bc1000 (672 bytes, 171 insns) */
void f_10bc1000(void) {
  FTRACE(0x10bc1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc1000 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1001 mov esi, dword ptr [0x10bc5128] */
  ESI = (r32((uint32_t)(0x10bc5128)));
  /* 10bc1007 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc100c push 0x10bc68b8 */
  push32((uint32_t)(0x10bc68b8u));
  /* 10bc1011 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1013u);
  /* 10bc1013 push 0x10bc625c */
  push32((uint32_t)(0x10bc625cu));
  /* 10bc1018 push 0x10bc69e0 */
  push32((uint32_t)(0x10bc69e0u));
  /* 10bc101d call esi */
  call_ind((uint32_t)(ESI), 0x10bc101fu);
  /* 10bc101f push 0x10bc6254 */
  push32((uint32_t)(0x10bc6254u));
  /* 10bc1024 push 0x10bc69b0 */
  push32((uint32_t)(0x10bc69b0u));
  /* 10bc1029 call esi */
  call_ind((uint32_t)(ESI), 0x10bc102bu);
  /* 10bc102b push 0x10bc6248 */
  push32((uint32_t)(0x10bc6248u));
  /* 10bc1030 push 0x10bc6890 */
  push32((uint32_t)(0x10bc6890u));
  /* 10bc1035 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1037u);
  /* 10bc1037 push 0x10bc623c */
  push32((uint32_t)(0x10bc623cu));
  /* 10bc103c push 0x10bc6888 */
  push32((uint32_t)(0x10bc6888u));
  /* 10bc1041 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1043u);
  /* 10bc1043 push 0x10bc6234 */
  push32((uint32_t)(0x10bc6234u));
  /* 10bc1048 push 0x10bc69a8 */
  push32((uint32_t)(0x10bc69a8u));
  /* 10bc104d call esi */
  call_ind((uint32_t)(ESI), 0x10bc104fu);
  /* 10bc104f push 0x10bc622c */
  push32((uint32_t)(0x10bc622cu));
  /* 10bc1054 push 0x10bc6978 */
  push32((uint32_t)(0x10bc6978u));
  /* 10bc1059 call esi */
  call_ind((uint32_t)(ESI), 0x10bc105bu);
  /* 10bc105b push 0x10bc6220 */
  push32((uint32_t)(0x10bc6220u));
  /* 10bc1060 push 0x10bc6880 */
  push32((uint32_t)(0x10bc6880u));
  /* 10bc1065 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1067u);
  /* 10bc1067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc106a push 0x10bc6210 */
  push32((uint32_t)(0x10bc6210u));
  /* 10bc106f push 0x10bc6988 */
  push32((uint32_t)(0x10bc6988u));
  /* 10bc1074 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1076u);
  /* 10bc1076 push 0x10bc6208 */
  push32((uint32_t)(0x10bc6208u));
  /* 10bc107b push 0x10bc69c0 */
  push32((uint32_t)(0x10bc69c0u));
  /* 10bc1080 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1082u);
  /* 10bc1082 push 0x10bc6200 */
  push32((uint32_t)(0x10bc6200u));
  /* 10bc1087 push 0x10bc69b8 */
  push32((uint32_t)(0x10bc69b8u));
  /* 10bc108c call esi */
  call_ind((uint32_t)(ESI), 0x10bc108eu);
  /* 10bc108e push 0x10bc61f0 */
  push32((uint32_t)(0x10bc61f0u));
  /* 10bc1093 push 0x10bc6a08 */
  push32((uint32_t)(0x10bc6a08u));
  /* 10bc1098 call esi */
  call_ind((uint32_t)(ESI), 0x10bc109au);
  /* 10bc109a push 0x10bc61e4 */
  push32((uint32_t)(0x10bc61e4u));
  /* 10bc109f push 0x10bc6998 */
  push32((uint32_t)(0x10bc6998u));
  /* 10bc10a4 call esi */
  call_ind((uint32_t)(ESI), 0x10bc10a6u);
  /* 10bc10a6 push 0x10bc61d4 */
  push32((uint32_t)(0x10bc61d4u));
  /* 10bc10ab push 0x10bc6958 */
  push32((uint32_t)(0x10bc6958u));
  /* 10bc10b0 call esi */
  call_ind((uint32_t)(ESI), 0x10bc10b2u);
  /* 10bc10b2 push 0x10bc61c4 */
  push32((uint32_t)(0x10bc61c4u));
  /* 10bc10b7 push 0x10bc6968 */
  push32((uint32_t)(0x10bc6968u));
  /* 10bc10bc call esi */
  call_ind((uint32_t)(ESI), 0x10bc10beu);
  /* 10bc10be push 0x10bc61b0 */
  push32((uint32_t)(0x10bc61b0u));
  /* 10bc10c3 push 0x10bc68c8 */
  push32((uint32_t)(0x10bc68c8u));
  /* 10bc10c8 call esi */
  call_ind((uint32_t)(ESI), 0x10bc10cau);
  /* 10bc10ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc10cd push 0x10bc619c */
  push32((uint32_t)(0x10bc619cu));
  /* 10bc10d2 push 0x10bc68d0 */
  push32((uint32_t)(0x10bc68d0u));
  /* 10bc10d7 call esi */
  call_ind((uint32_t)(ESI), 0x10bc10d9u);
  /* 10bc10d9 push 0x10bc618c */
  push32((uint32_t)(0x10bc618cu));
  /* 10bc10de push 0x10bc6898 */
  push32((uint32_t)(0x10bc6898u));
  /* 10bc10e3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc10e5u);
  /* 10bc10e5 push 0x10bc617c */
  push32((uint32_t)(0x10bc617cu));
  /* 10bc10ea push 0x10bc6980 */
  push32((uint32_t)(0x10bc6980u));
  /* 10bc10ef call esi */
  call_ind((uint32_t)(ESI), 0x10bc10f1u);
  /* 10bc10f1 push 0x10bc616c */
  push32((uint32_t)(0x10bc616cu));
  /* 10bc10f6 push 0x10bc6950 */
  push32((uint32_t)(0x10bc6950u));
  /* 10bc10fb call esi */
  call_ind((uint32_t)(ESI), 0x10bc10fdu);
  /* 10bc10fd push 0x10bc615c */
  push32((uint32_t)(0x10bc615cu));
  /* 10bc1102 push 0x10bc6a00 */
  push32((uint32_t)(0x10bc6a00u));
  /* 10bc1107 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1109u);
  /* 10bc1109 push 0x10bc6150 */
  push32((uint32_t)(0x10bc6150u));
  /* 10bc110e push 0x10bc6918 */
  push32((uint32_t)(0x10bc6918u));
  /* 10bc1113 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1115u);
  /* 10bc1115 push 0x10bc6140 */
  push32((uint32_t)(0x10bc6140u));
  /* 10bc111a push 0x10bc68d8 */
  push32((uint32_t)(0x10bc68d8u));
  /* 10bc111f call esi */
  call_ind((uint32_t)(ESI), 0x10bc1121u);
  /* 10bc1121 push 0x10bc6130 */
  push32((uint32_t)(0x10bc6130u));
  /* 10bc1126 push 0x10bc68e8 */
  push32((uint32_t)(0x10bc68e8u));
  /* 10bc112b call esi */
  call_ind((uint32_t)(ESI), 0x10bc112du);
  /* 10bc112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1130 push 0x10bc6120 */
  push32((uint32_t)(0x10bc6120u));
  /* 10bc1135 push 0x10bc68e0 */
  push32((uint32_t)(0x10bc68e0u));
  /* 10bc113a call esi */
  call_ind((uint32_t)(ESI), 0x10bc113cu);
  /* 10bc113c push 0x10bc6118 */
  push32((uint32_t)(0x10bc6118u));
  /* 10bc1141 push 0x10bc69a0 */
  push32((uint32_t)(0x10bc69a0u));
  /* 10bc1146 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1148u);
  /* 10bc1148 push 0x10bc6110 */
  push32((uint32_t)(0x10bc6110u));
  /* 10bc114d push 0x10bc69e8 */
  push32((uint32_t)(0x10bc69e8u));
  /* 10bc1152 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1154u);
  /* 10bc1154 mov esi, dword ptr [0x10bc5120] */
  ESI = (r32((uint32_t)(0x10bc5120)));
  /* 10bc115a push 0x10bc6100 */
  push32((uint32_t)(0x10bc6100u));
  /* 10bc115f push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc1164 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1166u);
  /* 10bc1166 push 0x10bc60f4 */
  push32((uint32_t)(0x10bc60f4u));
  /* 10bc116b push 0x10bc6960 */
  push32((uint32_t)(0x10bc6960u));
  /* 10bc1170 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1172u);
  /* 10bc1172 push 0x10bc60e4 */
  push32((uint32_t)(0x10bc60e4u));
  /* 10bc1177 push 0x10bc6900 */
  push32((uint32_t)(0x10bc6900u));
  /* 10bc117c call esi */
  call_ind((uint32_t)(ESI), 0x10bc117eu);
  /* 10bc117e push 0x10bc60d4 */
  push32((uint32_t)(0x10bc60d4u));
  /* 10bc1183 push 0x10bc6970 */
  push32((uint32_t)(0x10bc6970u));
  /* 10bc1188 call esi */
  call_ind((uint32_t)(ESI), 0x10bc118au);
  /* 10bc118a push 0x10bc60cc */
  push32((uint32_t)(0x10bc60ccu));
  /* 10bc118f push 0x10bc69c8 */
  push32((uint32_t)(0x10bc69c8u));
  /* 10bc1194 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1196u);
  /* 10bc1196 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1199 push 0x10bc60c4 */
  push32((uint32_t)(0x10bc60c4u));
  /* 10bc119e push 0x10bc69d0 */
  push32((uint32_t)(0x10bc69d0u));
  /* 10bc11a3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc11a5u);
  /* 10bc11a5 push 0x10bc60bc */
  push32((uint32_t)(0x10bc60bcu));
  /* 10bc11aa push 0x10bc69d8 */
  push32((uint32_t)(0x10bc69d8u));
  /* 10bc11af call esi */
  call_ind((uint32_t)(ESI), 0x10bc11b1u);
  /* 10bc11b1 push 0x10bc60b0 */
  push32((uint32_t)(0x10bc60b0u));
  /* 10bc11b6 push 0x10bc68a8 */
  push32((uint32_t)(0x10bc68a8u));
  /* 10bc11bb call esi */
  call_ind((uint32_t)(ESI), 0x10bc11bdu);
  /* 10bc11bd push 0x10bc60a4 */
  push32((uint32_t)(0x10bc60a4u));
  /* 10bc11c2 push 0x10bc68b0 */
  push32((uint32_t)(0x10bc68b0u));
  /* 10bc11c7 call esi */
  call_ind((uint32_t)(ESI), 0x10bc11c9u);
  /* 10bc11c9 push 0x10bc6098 */
  push32((uint32_t)(0x10bc6098u));
  /* 10bc11ce push 0x10bc68c0 */
  push32((uint32_t)(0x10bc68c0u));
  /* 10bc11d3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc11d5u);
  /* 10bc11d5 push 0x10bc6090 */
  push32((uint32_t)(0x10bc6090u));
  /* 10bc11da push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc11df call esi */
  call_ind((uint32_t)(ESI), 0x10bc11e1u);
  /* 10bc11e1 push 0x10bc6088 */
  push32((uint32_t)(0x10bc6088u));
  /* 10bc11e6 push 0x10bc6a10 */
  push32((uint32_t)(0x10bc6a10u));
  /* 10bc11eb call esi */
  call_ind((uint32_t)(ESI), 0x10bc11edu);
  /* 10bc11ed push 0x10bc607c */
  push32((uint32_t)(0x10bc607cu));
  /* 10bc11f2 push 0x10bc6a18 */
  push32((uint32_t)(0x10bc6a18u));
  /* 10bc11f7 call esi */
  call_ind((uint32_t)(ESI), 0x10bc11f9u);
  /* 10bc11f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc11fc push 0x10bc6074 */
  push32((uint32_t)(0x10bc6074u));
  /* 10bc1201 push 0x10bc69f8 */
  push32((uint32_t)(0x10bc69f8u));
  /* 10bc1206 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1208u);
  /* 10bc1208 push 0x10bc6070 */
  push32((uint32_t)(0x10bc6070u));
  /* 10bc120d push 0x10bc6920 */
  push32((uint32_t)(0x10bc6920u));
  /* 10bc1212 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1214u);
  /* 10bc1214 push 0x10bc606c */
  push32((uint32_t)(0x10bc606cu));
  /* 10bc1219 push 0x10bc6928 */
  push32((uint32_t)(0x10bc6928u));
  /* 10bc121e call esi */
  call_ind((uint32_t)(ESI), 0x10bc1220u);
  /* 10bc1220 push 0x10bc6068 */
  push32((uint32_t)(0x10bc6068u));
  /* 10bc1225 push 0x10bc6930 */
  push32((uint32_t)(0x10bc6930u));
  /* 10bc122a call esi */
  call_ind((uint32_t)(ESI), 0x10bc122cu);
  /* 10bc122c push 0x10bc6064 */
  push32((uint32_t)(0x10bc6064u));
  /* 10bc1231 push 0x10bc6938 */
  push32((uint32_t)(0x10bc6938u));
  /* 10bc1236 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1238u);
  /* 10bc1238 push 0x10bc6060 */
  push32((uint32_t)(0x10bc6060u));
  /* 10bc123d push 0x10bc6940 */
  push32((uint32_t)(0x10bc6940u));
  /* 10bc1242 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1244u);
  /* 10bc1244 push 0x10bc605c */
  push32((uint32_t)(0x10bc605cu));
  /* 10bc1249 push 0x10bc6948 */
  push32((uint32_t)(0x10bc6948u));
  /* 10bc124e call esi */
  call_ind((uint32_t)(ESI), 0x10bc1250u);
  /* 10bc1250 push 0x10bc6054 */
  push32((uint32_t)(0x10bc6054u));
  /* 10bc1255 push 0x10bc69f0 */
  push32((uint32_t)(0x10bc69f0u));
  /* 10bc125a call esi */
  call_ind((uint32_t)(ESI), 0x10bc125cu);
  /* 10bc125c mov esi, dword ptr [0x10bc5130] */
  ESI = (r32((uint32_t)(0x10bc5130)));
  /* 10bc1262 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1265 push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc126a call esi */
  call_ind((uint32_t)(ESI), 0x10bc126cu);
  /* 10bc126c push 0x10bc68f0 */
  push32((uint32_t)(0x10bc68f0u));
  /* 10bc1271 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1273u);
  /* 10bc1273 push 0x10bc6040 */
  push32((uint32_t)(0x10bc6040u));
  /* 10bc1278 push 0x10bc6a20 */
  push32((uint32_t)(0x10bc6a20u));
  /* 10bc127d call dword ptr [0x10bc5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5134))), 0x10bc1283u);
  /* 10bc1283 push 0x10bc6038 */
  push32((uint32_t)(0x10bc6038u));
  /* 10bc1288 mov esi, dword ptr [0x10bc512c] */
  ESI = (r32((uint32_t)(0x10bc512c)));
  /* 10bc128e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1290 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1292u);
  /* 10bc1292 push 0x10bc6030 */
  push32((uint32_t)(0x10bc6030u));
  /* 10bc1297 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1299 call esi */
  call_ind((uint32_t)(ESI), 0x10bc129bu);
  /* 10bc129b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc129e pop esi */
  ESI = (pop32());
  /* 10bc129f ret  */
  ESPCHK(0x10bc1000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10bc12a0 (3926 bytes, 1246 insns) */
void f_10bc12a0(void) {
  FTRACE(0x10bc12a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc12a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc12a1 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc12a2 push esi */
  push32((uint32_t)(ESI));
  /* 10bc12a3 mov esi, dword ptr [0x10bc50b0] */
  ESI = (r32((uint32_t)(0x10bc50b0)));
  /* 10bc12a9 push edi */
  push32((uint32_t)(EDI));
  /* 10bc12aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc12ac call esi */
  call_ind((uint32_t)(ESI), 0x10bc12aeu);
  /* 10bc12ae mov ebp, dword ptr [0x10bc50b8] */
  EBP = (r32((uint32_t)(0x10bc50b8)));
  /* 10bc12b4 mov ebx, dword ptr [0x10bc50bc] */
  EBX = (r32((uint32_t)(0x10bc50bc)));
  /* 10bc12ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc12bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc12bf je 0x10bc1797 */
  if (C.zf) goto L_10bc1797;
  /* 10bc12c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc12c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc12c9 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc12cbu);
  /* 10bc12cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc12cd call dword ptr [0x10bc50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b4))), 0x10bc12d3u);
  /* 10bc12d3 mov edi, dword ptr [0x10bc50c4] */
  EDI = (r32((uint32_t)(0x10bc50c4)));
  /* 10bc12d9 mov esi, dword ptr [0x10bc50c8] */
  ESI = (r32((uint32_t)(0x10bc50c8)));
  /* 10bc12df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc12e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc12e4 jne 0x10bc1452 */
  if (!C.zf) goto L_10bc1452;
  /* 10bc12ea push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10bc12ef push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc12f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc12f3 call edi */
  call_ind((uint32_t)(EDI), 0x10bc12f5u);
  /* 10bc12f5 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10bc12fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc12fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc12fe call edi */
  call_ind((uint32_t)(EDI), 0x10bc1300u);
  /* 10bc1300 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10bc1305 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1307 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1309 call edi */
  call_ind((uint32_t)(EDI), 0x10bc130bu);
  /* 10bc130b push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10bc1310 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc1312 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1314 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1316u);
  /* 10bc1316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc131a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc131c call edi */
  call_ind((uint32_t)(EDI), 0x10bc131eu);
  /* 10bc131e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1320 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1322 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1324 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1326u);
  /* 10bc1326 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1329 push 0x10bc6534 */
  push32((uint32_t)(0x10bc6534u));
  /* 10bc132e push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1333 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1335u);
  /* 10bc1335 push 0x10bc6518 */
  push32((uint32_t)(0x10bc6518u));
  /* 10bc133a push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc133f call esi */
  call_ind((uint32_t)(ESI), 0x10bc1341u);
  /* 10bc1341 push 0x10bc64fc */
  push32((uint32_t)(0x10bc64fcu));
  /* 10bc1346 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc134b call esi */
  call_ind((uint32_t)(ESI), 0x10bc134du);
  /* 10bc134d push 0x10bc64e0 */
  push32((uint32_t)(0x10bc64e0u));
  /* 10bc1352 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1357 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1359u);
  /* 10bc1359 push 0x10bc64c4 */
  push32((uint32_t)(0x10bc64c4u));
  /* 10bc135e push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1363 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1365u);
  /* 10bc1365 push 0x10bc64a8 */
  push32((uint32_t)(0x10bc64a8u));
  /* 10bc136a push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc136f call esi */
  call_ind((uint32_t)(ESI), 0x10bc1371u);
  /* 10bc1371 push 0x10bc648c */
  push32((uint32_t)(0x10bc648cu));
  /* 10bc1376 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc137b call esi */
  call_ind((uint32_t)(ESI), 0x10bc137du);
  /* 10bc137d push 0x10bc6470 */
  push32((uint32_t)(0x10bc6470u));
  /* 10bc1382 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1387 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1389u);
  /* 10bc1389 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc138c push 0x10bc6454 */
  push32((uint32_t)(0x10bc6454u));
  /* 10bc1391 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1396 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1398u);
  /* 10bc1398 push 0x10bc6438 */
  push32((uint32_t)(0x10bc6438u));
  /* 10bc139d push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13a2 call esi */
  call_ind((uint32_t)(ESI), 0x10bc13a4u);
  /* 10bc13a4 push 0x10bc641c */
  push32((uint32_t)(0x10bc641cu));
  /* 10bc13a9 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13ae call esi */
  call_ind((uint32_t)(ESI), 0x10bc13b0u);
  /* 10bc13b0 push 0x10bc6400 */
  push32((uint32_t)(0x10bc6400u));
  /* 10bc13b5 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13ba call esi */
  call_ind((uint32_t)(ESI), 0x10bc13bcu);
  /* 10bc13bc push 0x10bc63e4 */
  push32((uint32_t)(0x10bc63e4u));
  /* 10bc13c1 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13c6 call esi */
  call_ind((uint32_t)(ESI), 0x10bc13c8u);
  /* 10bc13c8 push 0x10bc63c8 */
  push32((uint32_t)(0x10bc63c8u));
  /* 10bc13cd push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13d2 call esi */
  call_ind((uint32_t)(ESI), 0x10bc13d4u);
  /* 10bc13d4 push 0x10bc63ac */
  push32((uint32_t)(0x10bc63acu));
  /* 10bc13d9 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13de call esi */
  call_ind((uint32_t)(ESI), 0x10bc13e0u);
  /* 10bc13e0 push 0x10bc6390 */
  push32((uint32_t)(0x10bc6390u));
  /* 10bc13e5 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13ea call esi */
  call_ind((uint32_t)(ESI), 0x10bc13ecu);
  /* 10bc13ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc13ef push 0x10bc6374 */
  push32((uint32_t)(0x10bc6374u));
  /* 10bc13f4 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc13f9 call esi */
  call_ind((uint32_t)(ESI), 0x10bc13fbu);
  /* 10bc13fb push 0x10bc6358 */
  push32((uint32_t)(0x10bc6358u));
  /* 10bc1400 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1405 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1407u);
  /* 10bc1407 push 0x10bc633c */
  push32((uint32_t)(0x10bc633cu));
  /* 10bc140c push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1411 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1413u);
  /* 10bc1413 push 0x10bc6320 */
  push32((uint32_t)(0x10bc6320u));
  /* 10bc1418 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc141d call esi */
  call_ind((uint32_t)(ESI), 0x10bc141fu);
  /* 10bc141f push 0x10bc6304 */
  push32((uint32_t)(0x10bc6304u));
  /* 10bc1424 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1429 call esi */
  call_ind((uint32_t)(ESI), 0x10bc142bu);
  /* 10bc142b push 0x10bc62e8 */
  push32((uint32_t)(0x10bc62e8u));
  /* 10bc1430 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1435 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1437u);
  /* 10bc1437 push 0x10bc62cc */
  push32((uint32_t)(0x10bc62ccu));
  /* 10bc143c push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1441 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1443u);
  /* 10bc1443 push 0x10bc62b0 */
  push32((uint32_t)(0x10bc62b0u));
  /* 10bc1448 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc144d call esi */
  call_ind((uint32_t)(ESI), 0x10bc144fu);
  /* 10bc144f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1452:;
  /* 10bc1452 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1454 call dword ptr [0x10bc50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b4))), 0x10bc145au);
  /* 10bc145a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc145d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1460 jne 0x10bc157a */
  if (!C.zf) goto L_10bc157a;
  /* 10bc1466 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10bc146b push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc146d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc146f call edi */
  call_ind((uint32_t)(EDI), 0x10bc1471u);
  /* 10bc1471 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10bc1476 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1478 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc147a call edi */
  call_ind((uint32_t)(EDI), 0x10bc147cu);
  /* 10bc147c push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10bc1481 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1485 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1487u);
  /* 10bc1487 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10bc148c push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc148e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1490 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1492u);
  /* 10bc1492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1498 call edi */
  call_ind((uint32_t)(EDI), 0x10bc149au);
  /* 10bc149a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc149c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc149e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc14a0 call edi */
  call_ind((uint32_t)(EDI), 0x10bc14a2u);
  /* 10bc14a2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc14a5 push 0x10bc6534 */
  push32((uint32_t)(0x10bc6534u));
  /* 10bc14aa push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14af call esi */
  call_ind((uint32_t)(ESI), 0x10bc14b1u);
  /* 10bc14b1 push 0x10bc6518 */
  push32((uint32_t)(0x10bc6518u));
  /* 10bc14b6 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14bb call esi */
  call_ind((uint32_t)(ESI), 0x10bc14bdu);
  /* 10bc14bd push 0x10bc64fc */
  push32((uint32_t)(0x10bc64fcu));
  /* 10bc14c2 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14c7 call esi */
  call_ind((uint32_t)(ESI), 0x10bc14c9u);
  /* 10bc14c9 push 0x10bc64e0 */
  push32((uint32_t)(0x10bc64e0u));
  /* 10bc14ce push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14d3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc14d5u);
  /* 10bc14d5 push 0x10bc648c */
  push32((uint32_t)(0x10bc648cu));
  /* 10bc14da push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14df call esi */
  call_ind((uint32_t)(ESI), 0x10bc14e1u);
  /* 10bc14e1 push 0x10bc6470 */
  push32((uint32_t)(0x10bc6470u));
  /* 10bc14e6 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14eb call esi */
  call_ind((uint32_t)(ESI), 0x10bc14edu);
  /* 10bc14ed push 0x10bc6454 */
  push32((uint32_t)(0x10bc6454u));
  /* 10bc14f2 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc14f7 call esi */
  call_ind((uint32_t)(ESI), 0x10bc14f9u);
  /* 10bc14f9 push 0x10bc6438 */
  push32((uint32_t)(0x10bc6438u));
  /* 10bc14fe push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1503 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1505u);
  /* 10bc1505 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1508 push 0x10bc63e4 */
  push32((uint32_t)(0x10bc63e4u));
  /* 10bc150d push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1512 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1514u);
  /* 10bc1514 push 0x10bc63c8 */
  push32((uint32_t)(0x10bc63c8u));
  /* 10bc1519 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc151e call esi */
  call_ind((uint32_t)(ESI), 0x10bc1520u);
  /* 10bc1520 push 0x10bc63ac */
  push32((uint32_t)(0x10bc63acu));
  /* 10bc1525 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc152a call esi */
  call_ind((uint32_t)(ESI), 0x10bc152cu);
  /* 10bc152c push 0x10bc6390 */
  push32((uint32_t)(0x10bc6390u));
  /* 10bc1531 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1536 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1538u);
  /* 10bc1538 push 0x10bc6374 */
  push32((uint32_t)(0x10bc6374u));
  /* 10bc153d push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1542 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1544u);
  /* 10bc1544 push 0x10bc6358 */
  push32((uint32_t)(0x10bc6358u));
  /* 10bc1549 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc154e call esi */
  call_ind((uint32_t)(ESI), 0x10bc1550u);
  /* 10bc1550 push 0x10bc633c */
  push32((uint32_t)(0x10bc633cu));
  /* 10bc1555 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc155a call esi */
  call_ind((uint32_t)(ESI), 0x10bc155cu);
  /* 10bc155c push 0x10bc6320 */
  push32((uint32_t)(0x10bc6320u));
  /* 10bc1561 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1566 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1568u);
  /* 10bc1568 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc156b push 0x10bc6304 */
  push32((uint32_t)(0x10bc6304u));
  /* 10bc1570 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1575 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1577u);
  /* 10bc1577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc157a:;
  /* 10bc157a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc157c call dword ptr [0x10bc50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b4))), 0x10bc1582u);
  /* 10bc1582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1585 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1588 jne 0x10bc1618 */
  if (!C.zf) goto L_10bc1618;
  /* 10bc158e push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10bc1593 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc1595 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1597 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1599u);
  /* 10bc1599 push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10bc159e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc15a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15a2 call edi */
  call_ind((uint32_t)(EDI), 0x10bc15a4u);
  /* 10bc15a4 push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10bc15a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc15ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15ad call edi */
  call_ind((uint32_t)(EDI), 0x10bc15afu);
  /* 10bc15af push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10bc15b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc15b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15b8 call edi */
  call_ind((uint32_t)(EDI), 0x10bc15bau);
  /* 10bc15ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15be push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15c0 call edi */
  call_ind((uint32_t)(EDI), 0x10bc15c2u);
  /* 10bc15c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc15c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc15c8 call edi */
  call_ind((uint32_t)(EDI), 0x10bc15cau);
  /* 10bc15ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc15cd push 0x10bc6534 */
  push32((uint32_t)(0x10bc6534u));
  /* 10bc15d2 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc15d7 call esi */
  call_ind((uint32_t)(ESI), 0x10bc15d9u);
  /* 10bc15d9 push 0x10bc6518 */
  push32((uint32_t)(0x10bc6518u));
  /* 10bc15de push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc15e3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc15e5u);
  /* 10bc15e5 push 0x10bc648c */
  push32((uint32_t)(0x10bc648cu));
  /* 10bc15ea push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc15ef call esi */
  call_ind((uint32_t)(ESI), 0x10bc15f1u);
  /* 10bc15f1 push 0x10bc6470 */
  push32((uint32_t)(0x10bc6470u));
  /* 10bc15f6 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc15fb call esi */
  call_ind((uint32_t)(ESI), 0x10bc15fdu);
  /* 10bc15fd push 0x10bc63e4 */
  push32((uint32_t)(0x10bc63e4u));
  /* 10bc1602 push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1607 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1609u);
  /* 10bc1609 push 0x10bc63c8 */
  push32((uint32_t)(0x10bc63c8u));
  /* 10bc160e push 0x10bc6268 */
  push32((uint32_t)(0x10bc6268u));
  /* 10bc1613 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1615u);
  /* 10bc1615 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1618:;
  /* 10bc1618 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bc161a push esi */
  push32((uint32_t)(ESI));
  /* 10bc161b call dword ptr [0x10bc50b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b4))), 0x10bc1621u);
  /* 10bc1621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1624 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1627 jne 0x10bc165e */
  if (!C.zf) goto L_10bc165e;
  /* 10bc1629 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10bc162e push eax */
  push32((uint32_t)(EAX));
  /* 10bc162f push esi */
  push32((uint32_t)(ESI));
  /* 10bc1630 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1632u);
  /* 10bc1632 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10bc1637 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1639 push esi */
  push32((uint32_t)(ESI));
  /* 10bc163a call edi */
  call_ind((uint32_t)(EDI), 0x10bc163cu);
  /* 10bc163c push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10bc1641 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1643 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1644 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1646u);
  /* 10bc1646 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10bc164b push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc164d push esi */
  push32((uint32_t)(ESI));
  /* 10bc164e call edi */
  call_ind((uint32_t)(EDI), 0x10bc1650u);
  /* 10bc1650 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1651 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1652 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1653 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1655u);
  /* 10bc1655 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1656 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1658 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1659 call edi */
  call_ind((uint32_t)(EDI), 0x10bc165bu);
  /* 10bc165b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc165e:;
  /* 10bc165e push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc1663 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc1665 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1666 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1668u);
  /* 10bc1668 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc166d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc166f push esi */
  push32((uint32_t)(ESI));
  /* 10bc1670 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1672u);
  /* 10bc1672 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc1677 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1679 push esi */
  push32((uint32_t)(ESI));
  /* 10bc167a call edi */
  call_ind((uint32_t)(EDI), 0x10bc167cu);
  /* 10bc167c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc1681 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc1683 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1684 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1686u);
  /* 10bc1686 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc168b push esi */
  push32((uint32_t)(ESI));
  /* 10bc168c push esi */
  push32((uint32_t)(ESI));
  /* 10bc168d call edi */
  call_ind((uint32_t)(EDI), 0x10bc168fu);
  /* 10bc168f push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc1694 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1696 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1697 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1699u);
  /* 10bc1699 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc169c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc16a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16a5 call edi */
  call_ind((uint32_t)(EDI), 0x10bc16a7u);
  /* 10bc16a7 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16b0 call edi */
  call_ind((uint32_t)(EDI), 0x10bc16b2u);
  /* 10bc16b2 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc16b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16bb call edi */
  call_ind((uint32_t)(EDI), 0x10bc16bdu);
  /* 10bc16bd push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc16c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16c6 call edi */
  call_ind((uint32_t)(EDI), 0x10bc16c8u);
  /* 10bc16c8 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16cd push esi */
  push32((uint32_t)(ESI));
  /* 10bc16ce push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16d0 call edi */
  call_ind((uint32_t)(EDI), 0x10bc16d2u);
  /* 10bc16d2 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc16d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16db call edi */
  call_ind((uint32_t)(EDI), 0x10bc16ddu);
  /* 10bc16dd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc16e0 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc16e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc16e9 call edi */
  call_ind((uint32_t)(EDI), 0x10bc16ebu);
  /* 10bc16eb push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc16f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc16f4 call edi */
  call_ind((uint32_t)(EDI), 0x10bc16f6u);
  /* 10bc16f6 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc16fb push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc16fd push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc16ff call edi */
  call_ind((uint32_t)(EDI), 0x10bc1701u);
  /* 10bc1701 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc1706 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1708 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc170a call edi */
  call_ind((uint32_t)(EDI), 0x10bc170cu);
  /* 10bc170c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc1711 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1712 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1714 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1716u);
  /* 10bc1716 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10bc171b push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc171d push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc171f call edi */
  call_ind((uint32_t)(EDI), 0x10bc1721u);
  /* 10bc1721 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1724 push 0x10bc62a8 */
  push32((uint32_t)(0x10bc62a8u));
  /* 10bc1729 call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc172fu);
  /* 10bc172f push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 10bc1734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1736 call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc173cu);
  /* 10bc173c push esi */
  push32((uint32_t)(ESI));
  /* 10bc173d push 0x10bc69b0 */
  push32((uint32_t)(0x10bc69b0u));
  /* 10bc1742 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1744u);
  /* 10bc1744 mov edi, dword ptr [0x10bc50d4] */
  EDI = (r32((uint32_t)(0x10bc50d4)));
  /* 10bc174a push esi */
  push32((uint32_t)(ESI));
  /* 10bc174b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bc1750 push 0x10bc68a8 */
  push32((uint32_t)(0x10bc68a8u));
  /* 10bc1755 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1757 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1759u);
  /* 10bc1759 push esi */
  push32((uint32_t)(ESI));
  /* 10bc175a push 0x10bc69c0 */
  push32((uint32_t)(0x10bc69c0u));
  /* 10bc175f call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1761u);
  /* 10bc1761 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1762 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1763 push 0x10bc68b0 */
  push32((uint32_t)(0x10bc68b0u));
  /* 10bc1768 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc176a call edi */
  call_ind((uint32_t)(EDI), 0x10bc176cu);
  /* 10bc176c push esi */
  push32((uint32_t)(ESI));
  /* 10bc176d push 0x10bc69b8 */
  push32((uint32_t)(0x10bc69b8u));
  /* 10bc1772 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1774u);
  /* 10bc1774 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1777 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1778 push esi */
  push32((uint32_t)(ESI));
  /* 10bc1779 push 0x10bc68c0 */
  push32((uint32_t)(0x10bc68c0u));
  /* 10bc177e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1780 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1782u);
  /* 10bc1782 mov dword ptr [0x10bc68a0], esi */
  w32((uint32_t)(0x10bc68a0), (ESI));
  /* 10bc1788 mov dword ptr [0x10bc68a4], esi */
  w32((uint32_t)(0x10bc68a4), (ESI));
  /* 10bc178e mov esi, dword ptr [0x10bc50b0] */
  ESI = (r32((uint32_t)(0x10bc50b0)));
  /* 10bc1794 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1797:;
  /* 10bc1797 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1799 call esi */
  call_ind((uint32_t)(ESI), 0x10bc179bu);
  /* 10bc179b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc179e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc17a0 je 0x10bc17dd */
  if (C.zf) goto L_10bc17dd;
  /* 10bc17a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc17a4 push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc17a9 call dword ptr [0x10bc50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50cc))), 0x10bc17afu);
  /* 10bc17af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc17b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc17b5 jle 0x10bc17dd */
  if ((C.zf||C.sf!=C.of)) goto L_10bc17dd;
  /* 10bc17b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc17b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc17bb call ebp */
  call_ind((uint32_t)(EBP), 0x10bc17bdu);
  /* 10bc17bd push 0x10bc62a0 */
  push32((uint32_t)(0x10bc62a0u));
  /* 10bc17c2 call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc17c8u);
  /* 10bc17c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc17ca push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc17cf push 0x10bc6a08 */
  push32((uint32_t)(0x10bc6a08u));
  /* 10bc17d4 call dword ptr [0x10bc50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50dc))), 0x10bc17dau);
  /* 10bc17da add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc17dd:;
  /* 10bc17dd push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc17df call esi */
  call_ind((uint32_t)(ESI), 0x10bc17e1u);
  /* 10bc17e1 mov edi, dword ptr [0x10bc50e0] */
  EDI = (r32((uint32_t)(0x10bc50e0)));
  /* 10bc17e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc17ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc17ec je 0x10bc184f */
  if (C.zf) goto L_10bc184f;
  /* 10bc17ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc17f0 push 0x10bc6a08 */
  push32((uint32_t)(0x10bc6a08u));
  /* 10bc17f5 call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc17fbu);
  /* 10bc17fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc17fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc1800 jne 0x10bc184f */
  if (!C.zf) goto L_10bc184f;
  /* 10bc1802 push eax */
  push32((uint32_t)(EAX));
  /* 10bc1803 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc1805 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1807u);
  /* 10bc1807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1809 push 0x10bc6998 */
  push32((uint32_t)(0x10bc6998u));
  /* 10bc180e call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1810u);
  /* 10bc1810 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1812 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1814 call dword ptr [0x10bc50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e8))), 0x10bc181au);
  /* 10bc181a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc181c push 0x10bc6968 */
  push32((uint32_t)(0x10bc6968u));
  /* 10bc1821 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1823u);
  /* 10bc1823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1825 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc182a push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc182f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1831 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1833u);
  /* 10bc1833 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1835 push 0x10bc6958 */
  push32((uint32_t)(0x10bc6958u));
  /* 10bc183a call ebx */
  call_ind((uint32_t)(EBX), 0x10bc183cu);
  /* 10bc183c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc183e push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc1843 push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc1848 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc184a call edi */
  call_ind((uint32_t)(EDI), 0x10bc184cu);
  /* 10bc184c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc184f:;
  /* 10bc184f push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1851 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1853u);
  /* 10bc1853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1856 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1858 je 0x10bc18a1 */
  if (C.zf) goto L_10bc18a1;
  /* 10bc185a push 0x10bc68b8 */
  push32((uint32_t)(0x10bc68b8u));
  /* 10bc185f push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc1864 call dword ptr [0x10bc50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50ec))), 0x10bc186au);
  /* 10bc186a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc186d cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1870 jle 0x10bc18a1 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc18a1;
  /* 10bc1872 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1874 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc1876 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1878u);
  /* 10bc1878 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc187a push 0x10bc68c8 */
  push32((uint32_t)(0x10bc68c8u));
  /* 10bc187f call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1881u);
  /* 10bc1881 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1883 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc1888 push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc188d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc188f call edi */
  call_ind((uint32_t)(EDI), 0x10bc1891u);
  /* 10bc1891 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10bc1896 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc1898 call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc189eu);
  /* 10bc189e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc18a1:;
  /* 10bc18a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc18a3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc18a5u);
  /* 10bc18a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc18a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc18aa je 0x10bc18ea */
  if (C.zf) goto L_10bc18ea;
  /* 10bc18ac push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc18ae call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc18b4u);
  /* 10bc18b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc18b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc18b9 je 0x10bc18ea */
  if (C.zf) goto L_10bc18ea;
  /* 10bc18bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc18bd push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc18bf call ebp */
  call_ind((uint32_t)(EBP), 0x10bc18c1u);
  /* 10bc18c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc18c3 push 0x10bc68d0 */
  push32((uint32_t)(0x10bc68d0u));
  /* 10bc18c8 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc18cau);
  /* 10bc18ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc18cc push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc18d1 push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc18d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc18d8 call edi */
  call_ind((uint32_t)(EDI), 0x10bc18dau);
  /* 10bc18da push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10bc18df push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc18e1 call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc18e7u);
  /* 10bc18e7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc18ea:;
  /* 10bc18ea push 6 */
  push32((uint32_t)(0x6u));
  /* 10bc18ec call esi */
  call_ind((uint32_t)(ESI), 0x10bc18eeu);
  /* 10bc18ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc18f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc18f3 je 0x10bc1926 */
  if (C.zf) goto L_10bc1926;
  /* 10bc18f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc18f7 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc18fdu);
  /* 10bc18fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1900 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1902 je 0x10bc1926 */
  if (C.zf) goto L_10bc1926;
  /* 10bc1904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1906 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bc1908 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc190au);
  /* 10bc190a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc190c push 0x10bc6898 */
  push32((uint32_t)(0x10bc6898u));
  /* 10bc1911 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1913u);
  /* 10bc1913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1915 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc191a push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc191f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1921 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1923u);
  /* 10bc1923 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1926:;
  /* 10bc1926 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bc1928 call esi */
  call_ind((uint32_t)(ESI), 0x10bc192au);
  /* 10bc192a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc192d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc192f je 0x10bc1978 */
  if (C.zf) goto L_10bc1978;
  /* 10bc1931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1933 push 0x10bc6898 */
  push32((uint32_t)(0x10bc6898u));
  /* 10bc1938 call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc193eu);
  /* 10bc193e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1941 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1944 jge 0x10bc1978 */
  if ((C.sf==C.of)) goto L_10bc1978;
  /* 10bc1946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1948 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bc194a call ebp */
  call_ind((uint32_t)(EBP), 0x10bc194cu);
  /* 10bc194c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc194e push 0x10bc6918 */
  push32((uint32_t)(0x10bc6918u));
  /* 10bc1953 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1955u);
  /* 10bc1955 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1957 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc195c push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc1961 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1963 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1965u);
  /* 10bc1965 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1967 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc196c push 0x10bc68f8 */
  push32((uint32_t)(0x10bc68f8u));
  /* 10bc1971 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1973 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1975u);
  /* 10bc1975 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1978:;
  /* 10bc1978 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10bc197a call esi */
  call_ind((uint32_t)(ESI), 0x10bc197cu);
  /* 10bc197c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc197f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1981 je 0x10bc19c4 */
  if (C.zf) goto L_10bc19c4;
  /* 10bc1983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1985 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc198bu);
  /* 10bc198b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc198e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1990 je 0x10bc19c4 */
  if (C.zf) goto L_10bc19c4;
  /* 10bc1992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1994 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10bc1996 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1998u);
  /* 10bc1998 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc199a push 0x10bc69e8 */
  push32((uint32_t)(0x10bc69e8u));
  /* 10bc199f call ebx */
  call_ind((uint32_t)(EBX), 0x10bc19a1u);
  /* 10bc19a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc19a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc19a5 call dword ptr [0x10bc50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e8))), 0x10bc19abu);
  /* 10bc19ab push 0x10bc69f0 */
  push32((uint32_t)(0x10bc69f0u));
  /* 10bc19b0 call dword ptr [0x10bc50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50f4))), 0x10bc19b6u);
  /* 10bc19b6 push 0x10bc6298 */
  push32((uint32_t)(0x10bc6298u));
  /* 10bc19bb call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc19c1u);
  /* 10bc19c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc19c4:;
  /* 10bc19c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bc19c6 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc19ccu);
  /* 10bc19cc mov esi, dword ptr [0x10bc50f8] */
  ESI = (r32((uint32_t)(0x10bc50f8)));
  /* 10bc19d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc19d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc19d7 je 0x10bc1a24 */
  if (C.zf) goto L_10bc1a24;
  /* 10bc19d9 push 0x10bc69e8 */
  push32((uint32_t)(0x10bc69e8u));
  /* 10bc19de push 0x10bc6900 */
  push32((uint32_t)(0x10bc6900u));
  /* 10bc19e3 call dword ptr [0x10bc50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50ec))), 0x10bc19e9u);
  /* 10bc19e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc19ec cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc19ef jle 0x10bc1a24 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc1a24;
  /* 10bc19f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc19f3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bc19f5 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc19f7u);
  /* 10bc19f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc19f9 call esi */
  call_ind((uint32_t)(ESI), 0x10bc19fbu);
  /* 10bc19fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc19fd push 0x10bc6950 */
  push32((uint32_t)(0x10bc6950u));
  /* 10bc1a02 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1a04u);
  /* 10bc1a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1a06 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1a0b push 0x10bc6900 */
  push32((uint32_t)(0x10bc6900u));
  /* 10bc1a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1a12 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1a14u);
  /* 10bc1a14 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10bc1a19 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc1a1b call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc1a21u);
  /* 10bc1a21 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1a24:;
  /* 10bc1a24 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bc1a26 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1a2cu);
  /* 10bc1a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1a31 je 0x10bc1a78 */
  if (C.zf) goto L_10bc1a78;
  /* 10bc1a33 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bc1a35 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1a3bu);
  /* 10bc1a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1a3e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1a40 je 0x10bc1a78 */
  if (C.zf) goto L_10bc1a78;
  /* 10bc1a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1a44 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bc1a46 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1a48u);
  /* 10bc1a48 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1a4a call esi */
  call_ind((uint32_t)(ESI), 0x10bc1a4cu);
  /* 10bc1a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1a4e push 0x10bc6980 */
  push32((uint32_t)(0x10bc6980u));
  /* 10bc1a53 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1a55u);
  /* 10bc1a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1a57 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1a5c push 0x10bc6900 */
  push32((uint32_t)(0x10bc6900u));
  /* 10bc1a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1a63 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1a65u);
  /* 10bc1a65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1a67 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1a6c push 0x10bc6970 */
  push32((uint32_t)(0x10bc6970u));
  /* 10bc1a71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1a73 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1a75u);
  /* 10bc1a75 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1a78:;
  /* 10bc1a78 mov esi, dword ptr [0x10bc50b0] */
  ESI = (r32((uint32_t)(0x10bc50b0)));
  /* 10bc1a7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10bc1a80 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1a82u);
  /* 10bc1a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1a87 je 0x10bc1b06 */
  if (C.zf) goto L_10bc1b06;
  /* 10bc1a89 push 7 */
  push32((uint32_t)(0x7u));
  /* 10bc1a8b call esi */
  call_ind((uint32_t)(ESI), 0x10bc1a8du);
  /* 10bc1a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1a90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1a92 jne 0x10bc1b06 */
  if (!C.zf) goto L_10bc1b06;
  /* 10bc1a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1a96 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10bc1a98 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1a9au);
  /* 10bc1a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1a9c push 0x10bc68d8 */
  push32((uint32_t)(0x10bc68d8u));
  /* 10bc1aa1 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1aa3u);
  /* 10bc1aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1aa5 push 0x10bc69b0 */
  push32((uint32_t)(0x10bc69b0u));
  /* 10bc1aaa call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1aacu);
  /* 10bc1aac mov esi, dword ptr [0x10bc50f0] */
  ESI = (r32((uint32_t)(0x10bc50f0)));
  /* 10bc1ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1ab4 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1ab6u);
  /* 10bc1ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1ab8 push 0x10bc68e8 */
  push32((uint32_t)(0x10bc68e8u));
  /* 10bc1abd call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1abfu);
  /* 10bc1abf push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1ac1 push 0x10bc69c0 */
  push32((uint32_t)(0x10bc69c0u));
  /* 10bc1ac6 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1ac8u);
  /* 10bc1ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1aca call esi */
  call_ind((uint32_t)(ESI), 0x10bc1accu);
  /* 10bc1acc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1ace push 0x10bc68e0 */
  push32((uint32_t)(0x10bc68e0u));
  /* 10bc1ad3 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1ad5u);
  /* 10bc1ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1ad7 push 0x10bc69b8 */
  push32((uint32_t)(0x10bc69b8u));
  /* 10bc1adc call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1adeu);
  /* 10bc1ade add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1ae3 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1ae5u);
  /* 10bc1ae5 mov esi, dword ptr [0x10bc50d0] */
  ESI = (r32((uint32_t)(0x10bc50d0)));
  /* 10bc1aeb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10bc1af0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bc1af2 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1af4u);
  /* 10bc1af4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10bc1af9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bc1afb call esi */
  call_ind((uint32_t)(ESI), 0x10bc1afdu);
  /* 10bc1afd mov esi, dword ptr [0x10bc50b0] */
  ESI = (r32((uint32_t)(0x10bc50b0)));
  /* 10bc1b03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1b06:;
  /* 10bc1b06 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bc1b08 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1b0au);
  /* 10bc1b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1b0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1b0f je 0x10bc1b7d */
  if (C.zf) goto L_10bc1b7d;
  /* 10bc1b11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bc1b13 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1b19u);
  /* 10bc1b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1b1c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1b1e je 0x10bc1b7d */
  if (C.zf) goto L_10bc1b7d;
  /* 10bc1b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b22 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10bc1b24 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1b26u);
  /* 10bc1b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bc1b2a call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1b2cu);
  /* 10bc1b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b2e push 0x10bc69c0 */
  push32((uint32_t)(0x10bc69c0u));
  /* 10bc1b33 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1b35u);
  /* 10bc1b35 mov esi, dword ptr [0x10bc50d4] */
  ESI = (r32((uint32_t)(0x10bc50d4)));
  /* 10bc1b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b3f push 0x10bc69d0 */
  push32((uint32_t)(0x10bc69d0u));
  /* 10bc1b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1b46 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1b48u);
  /* 10bc1b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b4a push 0x10bc69b0 */
  push32((uint32_t)(0x10bc69b0u));
  /* 10bc1b4f call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1b51u);
  /* 10bc1b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b53 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bc1b58 push 0x10bc69c8 */
  push32((uint32_t)(0x10bc69c8u));
  /* 10bc1b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1b5f call esi */
  call_ind((uint32_t)(ESI), 0x10bc1b61u);
  /* 10bc1b61 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b66 push 0x10bc69b8 */
  push32((uint32_t)(0x10bc69b8u));
  /* 10bc1b6b call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1b6du);
  /* 10bc1b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b71 push 0x10bc69d8 */
  push32((uint32_t)(0x10bc69d8u));
  /* 10bc1b76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1b78 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1b7au);
  /* 10bc1b7a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1b7d:;
  /* 10bc1b7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bc1b7f call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1b85u);
  /* 10bc1b85 mov esi, dword ptr [0x10bc5100] */
  ESI = (r32((uint32_t)(0x10bc5100)));
  /* 10bc1b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1b8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1b90 je 0x10bc1bfe */
  if (C.zf) goto L_10bc1bfe;
  /* 10bc1b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1b94 push 0x10bc69b0 */
  push32((uint32_t)(0x10bc69b0u));
  /* 10bc1b99 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1b9bu);
  /* 10bc1b9b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10bc1b9d call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1ba3u);
  /* 10bc1ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1ba6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1ba8 je 0x10bc1bfe */
  if (C.zf) goto L_10bc1bfe;
  /* 10bc1baa push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1bac call dword ptr [0x10bc5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5104))), 0x10bc1bb2u);
  /* 10bc1bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1bb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1bb7 je 0x10bc1bfe */
  if (C.zf) goto L_10bc1bfe;
  /* 10bc1bb9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bc1bbb call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1bc1u);
  /* 10bc1bc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1bc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1bc6 je 0x10bc1bfe */
  if (C.zf) goto L_10bc1bfe;
  /* 10bc1bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1bca push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10bc1bcc call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1bceu);
  /* 10bc1bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1bd0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bc1bd2 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1bd4u);
  /* 10bc1bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1bd6 push 0x10bc69b0 */
  push32((uint32_t)(0x10bc69b0u));
  /* 10bc1bdb call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1bddu);
  /* 10bc1bdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1bdf call esi */
  call_ind((uint32_t)(ESI), 0x10bc1be1u);
  /* 10bc1be1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10bc1be6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10bc1be8 call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc1beeu);
  /* 10bc1bee push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10bc1bf3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bc1bf5 call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc1bfbu);
  /* 10bc1bfb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1bfe:;
  /* 10bc1bfe push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bc1c00 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1c06u);
  /* 10bc1c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c0b je 0x10bc1c5f */
  if (C.zf) goto L_10bc1c5f;
  /* 10bc1c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1c0f push 0x10bc69c0 */
  push32((uint32_t)(0x10bc69c0u));
  /* 10bc1c14 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1c16u);
  /* 10bc1c16 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10bc1c18 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1c1eu);
  /* 10bc1c1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c23 je 0x10bc1c5f */
  if (C.zf) goto L_10bc1c5f;
  /* 10bc1c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1c27 call dword ptr [0x10bc5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5104))), 0x10bc1c2du);
  /* 10bc1c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c32 je 0x10bc1c5f */
  if (C.zf) goto L_10bc1c5f;
  /* 10bc1c34 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bc1c36 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1c3cu);
  /* 10bc1c3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c41 je 0x10bc1c5f */
  if (C.zf) goto L_10bc1c5f;
  /* 10bc1c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1c45 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bc1c47 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1c49u);
  /* 10bc1c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1c4b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10bc1c4d call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1c4fu);
  /* 10bc1c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1c51 push 0x10bc69c0 */
  push32((uint32_t)(0x10bc69c0u));
  /* 10bc1c56 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1c58u);
  /* 10bc1c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1c5a call esi */
  call_ind((uint32_t)(ESI), 0x10bc1c5cu);
  /* 10bc1c5c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1c5f:;
  /* 10bc1c5f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bc1c61 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1c67u);
  /* 10bc1c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c6a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c6c je 0x10bc1ce5 */
  if (C.zf) goto L_10bc1ce5;
  /* 10bc1c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1c70 push 0x10bc69b8 */
  push32((uint32_t)(0x10bc69b8u));
  /* 10bc1c75 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1c77u);
  /* 10bc1c77 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bc1c79 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1c7fu);
  /* 10bc1c7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c84 je 0x10bc1ce5 */
  if (C.zf) goto L_10bc1ce5;
  /* 10bc1c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1c88 call dword ptr [0x10bc5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5104))), 0x10bc1c8eu);
  /* 10bc1c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1c91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1c93 je 0x10bc1ce5 */
  if (C.zf) goto L_10bc1ce5;
  /* 10bc1c95 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bc1c97 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1c9du);
  /* 10bc1c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1ca0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1ca2 je 0x10bc1ce5 */
  if (C.zf) goto L_10bc1ce5;
  /* 10bc1ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1ca6 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bc1ca8 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1caau);
  /* 10bc1caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1cac push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bc1cae call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1cb0u);
  /* 10bc1cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1cb2 push 0x10bc69b8 */
  push32((uint32_t)(0x10bc69b8u));
  /* 10bc1cb7 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1cb9u);
  /* 10bc1cb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1cbb call esi */
  call_ind((uint32_t)(ESI), 0x10bc1cbdu);
  /* 10bc1cbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1cbf push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc1cc1 push 0x10bc69d0 */
  push32((uint32_t)(0x10bc69d0u));
  /* 10bc1cc6 call dword ptr [0x10bc50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50fc))), 0x10bc1cccu);
  /* 10bc1ccc push 0x10bc69d0 */
  push32((uint32_t)(0x10bc69d0u));
  /* 10bc1cd1 call dword ptr [0x10bc50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50f4))), 0x10bc1cd7u);
  /* 10bc1cd7 push 0x10bc6290 */
  push32((uint32_t)(0x10bc6290u));
  /* 10bc1cdc call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc1ce2u);
  /* 10bc1ce2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1ce5:;
  /* 10bc1ce5 mov esi, dword ptr [0x10bc50b0] */
  ESI = (r32((uint32_t)(0x10bc50b0)));
  /* 10bc1ceb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bc1ced call esi */
  call_ind((uint32_t)(ESI), 0x10bc1cefu);
  /* 10bc1cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1cf2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1cf4 je 0x10bc1d40 */
  if (C.zf) goto L_10bc1d40;
  /* 10bc1cf6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10bc1cf8 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1cfeu);
  /* 10bc1cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1d01 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1d03 je 0x10bc1d40 */
  if (C.zf) goto L_10bc1d40;
  /* 10bc1d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d07 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bc1d09 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1d0bu);
  /* 10bc1d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d0d push 0x10bc68d8 */
  push32((uint32_t)(0x10bc68d8u));
  /* 10bc1d12 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1d14u);
  /* 10bc1d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d16 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10bc1d1b push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc1d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1d22 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1d24u);
  /* 10bc1d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d26 push 0x10bc68e8 */
  push32((uint32_t)(0x10bc68e8u));
  /* 10bc1d2b call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1d2du);
  /* 10bc1d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d2f push 0xd7 */
  push32((uint32_t)(0xd7u));
  /* 10bc1d34 push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc1d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1d3b call edi */
  call_ind((uint32_t)(EDI), 0x10bc1d3du);
  /* 10bc1d3d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1d40:;
  /* 10bc1d40 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bc1d42 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1d44u);
  /* 10bc1d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1d47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1d49 je 0x10bc1d7c */
  if (C.zf) goto L_10bc1d7c;
  /* 10bc1d4b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bc1d4d call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1d53u);
  /* 10bc1d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1d56 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1d58 je 0x10bc1d7c */
  if (C.zf) goto L_10bc1d7c;
  /* 10bc1d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d5c push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bc1d5e call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1d60u);
  /* 10bc1d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d62 push 0x10bc68e0 */
  push32((uint32_t)(0x10bc68e0u));
  /* 10bc1d67 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1d69u);
  /* 10bc1d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d6b push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10bc1d70 push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc1d75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1d77 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1d79u);
  /* 10bc1d79 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1d7c:;
  /* 10bc1d7c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10bc1d7e call esi */
  call_ind((uint32_t)(ESI), 0x10bc1d80u);
  /* 10bc1d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1d83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1d85 je 0x10bc1dcc */
  if (C.zf) goto L_10bc1dcc;
  /* 10bc1d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d89 push 0x10bc69f8 */
  push32((uint32_t)(0x10bc69f8u));
  /* 10bc1d8e call dword ptr [0x10bc50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50cc))), 0x10bc1d94u);
  /* 10bc1d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1d97 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1d9a jle 0x10bc1dcc */
  if ((C.zf||C.sf!=C.of)) goto L_10bc1dcc;
  /* 10bc1d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1d9e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10bc1da0 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1da2u);
  /* 10bc1da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1da4 push 0x10bc6978 */
  push32((uint32_t)(0x10bc6978u));
  /* 10bc1da9 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1dabu);
  /* 10bc1dab push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1dad push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc1db2 push 0x10bc6a18 */
  push32((uint32_t)(0x10bc6a18u));
  /* 10bc1db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1db9 call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1dbfu);
  /* 10bc1dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bc1dc1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10bc1dc3 call dword ptr [0x10bc50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d0))), 0x10bc1dc9u);
  /* 10bc1dc9 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1dcc:;
  /* 10bc1dcc push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10bc1dce call esi */
  call_ind((uint32_t)(ESI), 0x10bc1dd0u);
  /* 10bc1dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1dd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1dd5 je 0x10bc1e22 */
  if (C.zf) goto L_10bc1e22;
  /* 10bc1dd7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10bc1dd9 call dword ptr [0x10bc50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e4))), 0x10bc1ddfu);
  /* 10bc1ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1de2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1de4 je 0x10bc1e22 */
  if (C.zf) goto L_10bc1e22;
  /* 10bc1de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1de8 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10bc1dea call ebp */
  call_ind((uint32_t)(EBP), 0x10bc1decu);
  /* 10bc1dec push 0x10bc6288 */
  push32((uint32_t)(0x10bc6288u));
  /* 10bc1df1 call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc1df7u);
  /* 10bc1df7 push 0x10bc6a18 */
  push32((uint32_t)(0x10bc6a18u));
  /* 10bc1dfc call dword ptr [0x10bc50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50f4))), 0x10bc1e02u);
  /* 10bc1e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1e04 push 0x10bc6978 */
  push32((uint32_t)(0x10bc6978u));
  /* 10bc1e09 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1e0bu);
  /* 10bc1e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1e0d push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10bc1e12 push 0x10bc6990 */
  push32((uint32_t)(0x10bc6990u));
  /* 10bc1e17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1e19 call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1e1fu);
  /* 10bc1e1f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1e22:;
  /* 10bc1e22 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 10bc1e24 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1e26u);
  /* 10bc1e26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1e29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1e2b je 0x10bc1e7f */
  if (C.zf) goto L_10bc1e7f;
  /* 10bc1e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1e2f push 0x10bc69a8 */
  push32((uint32_t)(0x10bc69a8u));
  /* 10bc1e34 call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc1e3au);
  /* 10bc1e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc1e3f jne 0x10bc1e7f */
  if (!C.zf) goto L_10bc1e7f;
  /* 10bc1e41 cmp dword ptr [0x10bc68a0], 0x64 */
  { uint32_t _a=(r32((uint32_t)(0x10bc68a0))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1e48 jge 0x10bc1e7f */
  if ((C.sf==C.of)) goto L_10bc1e7f;
  /* 10bc1e4a push 0x10bc6890 */
  push32((uint32_t)(0x10bc6890u));
  /* 10bc1e4f call dword ptr [0x10bc510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc510c))), 0x10bc1e55u);
  /* 10bc1e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1e58 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1e5a je 0x10bc1e7f */
  if (C.zf) goto L_10bc1e7f;
  /* 10bc1e5c push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1e61 push 0x10bc6a20 */
  push32((uint32_t)(0x10bc6a20u));
  /* 10bc1e66 push 0x10bc6890 */
  push32((uint32_t)(0x10bc6890u));
  /* 10bc1e6b call dword ptr [0x10bc5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5110))), 0x10bc1e71u);
  /* 10bc1e71 mov eax, dword ptr [0x10bc68a0] */
  EAX = (r32((uint32_t)(0x10bc68a0)));
  /* 10bc1e76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1e79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc1e7a mov dword ptr [0x10bc68a0], eax */
  w32((uint32_t)(0x10bc68a0), (EAX));
L_10bc1e7f:;
  /* 10bc1e7f push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10bc1e81 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1e87u);
  /* 10bc1e87 mov esi, dword ptr [0x10bc5108] */
  ESI = (r32((uint32_t)(0x10bc5108)));
  /* 10bc1e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1e90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1e92 je 0x10bc1f25 */
  if (C.zf) goto L_10bc1f25;
  /* 10bc1e98 push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1e9d push 0x10bc6920 */
  push32((uint32_t)(0x10bc6920u));
  /* 10bc1ea2 call dword ptr [0x10bc50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50ec))), 0x10bc1ea8u);
  /* 10bc1ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc1ead jle 0x10bc1f25 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc1f25;
  /* 10bc1eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1eb1 push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1eb6 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1eb8u);
  /* 10bc1eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1eba push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bc1ebf push 0x10bc6928 */
  push32((uint32_t)(0x10bc6928u));
  /* 10bc1ec4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1ec6 call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1eccu);
  /* 10bc1ecc push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1ece push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1ed3 push 0x10bc6930 */
  push32((uint32_t)(0x10bc6930u));
  /* 10bc1ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1eda call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1ee0u);
  /* 10bc1ee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1ee2 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1ee7 push 0x10bc6938 */
  push32((uint32_t)(0x10bc6938u));
  /* 10bc1eec push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1eee call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1ef4u);
  /* 10bc1ef4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1ef6 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1efb push 0x10bc6948 */
  push32((uint32_t)(0x10bc6948u));
  /* 10bc1f00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1f02 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1f04u);
  /* 10bc1f04 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1f07 push 0x10bc68f0 */
  push32((uint32_t)(0x10bc68f0u));
  /* 10bc1f0c push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1f11 call esi */
  call_ind((uint32_t)(ESI), 0x10bc1f13u);
  /* 10bc1f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1f15 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc1f17 push 0x10bc6930 */
  push32((uint32_t)(0x10bc6930u));
  /* 10bc1f1c call dword ptr [0x10bc50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50fc))), 0x10bc1f22u);
  /* 10bc1f22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc1f25:;
  /* 10bc1f25 cmp dword ptr [0x10bc68a4], 0x64 */
  { uint32_t _a=(r32((uint32_t)(0x10bc68a4))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc1f2c jge 0x10bc1f77 */
  if ((C.sf==C.of)) goto L_10bc1f77;
  /* 10bc1f2e push 0x10bc6888 */
  push32((uint32_t)(0x10bc6888u));
  /* 10bc1f33 call dword ptr [0x10bc510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc510c))), 0x10bc1f39u);
  /* 10bc1f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1f3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1f3e je 0x10bc1f77 */
  if (C.zf) goto L_10bc1f77;
  /* 10bc1f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1f42 push 0x10bc69a8 */
  push32((uint32_t)(0x10bc69a8u));
  /* 10bc1f47 call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc1f4du);
  /* 10bc1f4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1f50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc1f52 jne 0x10bc1f77 */
  if (!C.zf) goto L_10bc1f77;
  /* 10bc1f54 push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1f59 push 0x10bc6a20 */
  push32((uint32_t)(0x10bc6a20u));
  /* 10bc1f5e push 0x10bc6888 */
  push32((uint32_t)(0x10bc6888u));
  /* 10bc1f63 call dword ptr [0x10bc5110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5110))), 0x10bc1f69u);
  /* 10bc1f69 mov eax, dword ptr [0x10bc68a4] */
  EAX = (r32((uint32_t)(0x10bc68a4)));
  /* 10bc1f6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1f71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc1f72 mov dword ptr [0x10bc68a4], eax */
  w32((uint32_t)(0x10bc68a4), (EAX));
L_10bc1f77:;
  /* 10bc1f77 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10bc1f79 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc1f7fu);
  /* 10bc1f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1f82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc1f84 je 0x10bc2004 */
  if (C.zf) goto L_10bc2004;
  /* 10bc1f86 push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1f8b push 0x10bc6940 */
  push32((uint32_t)(0x10bc6940u));
  /* 10bc1f90 call dword ptr [0x10bc50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50ec))), 0x10bc1f96u);
  /* 10bc1f96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc1f9b jle 0x10bc2004 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc2004;
  /* 10bc1f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1f9f push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1fa4 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc1fa6u);
  /* 10bc1fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc1fa8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bc1fad push 0x10bc6928 */
  push32((uint32_t)(0x10bc6928u));
  /* 10bc1fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1fb4 call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1fbau);
  /* 10bc1fba push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1fbc push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1fc1 push 0x10bc6930 */
  push32((uint32_t)(0x10bc6930u));
  /* 10bc1fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1fc8 call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1fceu);
  /* 10bc1fce push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1fd0 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1fd5 push 0x10bc6938 */
  push32((uint32_t)(0x10bc6938u));
  /* 10bc1fda push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1fdc call dword ptr [0x10bc50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d4))), 0x10bc1fe2u);
  /* 10bc1fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc1fe4 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc1fe9 push 0x10bc6948 */
  push32((uint32_t)(0x10bc6948u));
  /* 10bc1fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc1ff0 call edi */
  call_ind((uint32_t)(EDI), 0x10bc1ff2u);
  /* 10bc1ff2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc1ff5 push 0x10bc68f0 */
  push32((uint32_t)(0x10bc68f0u));
  /* 10bc1ffa push 0x10bc6908 */
  push32((uint32_t)(0x10bc6908u));
  /* 10bc1fff call esi */
  call_ind((uint32_t)(ESI), 0x10bc2001u);
  /* 10bc2001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc2004:;
  /* 10bc2004 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10bc2006 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc200cu);
  /* 10bc200c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc200f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc2011 je 0x10bc205c */
  if (C.zf) goto L_10bc205c;
  /* 10bc2013 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2015 push 0x10bc68f0 */
  push32((uint32_t)(0x10bc68f0u));
  /* 10bc201a call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc2020u);
  /* 10bc2020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2025 jle 0x10bc205c */
  if ((C.zf||C.sf!=C.of)) goto L_10bc205c;
  /* 10bc2027 mov esi, dword ptr [0x10bc50ec] */
  ESI = (r32((uint32_t)(0x10bc50ec)));
  /* 10bc202d push 0x10bc68f0 */
  push32((uint32_t)(0x10bc68f0u));
  /* 10bc2032 push 0x10bc6938 */
  push32((uint32_t)(0x10bc6938u));
  /* 10bc2037 call esi */
  call_ind((uint32_t)(ESI), 0x10bc2039u);
  /* 10bc2039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc203c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc203e jle 0x10bc2062 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc2062;
  /* 10bc2040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2042 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10bc2044 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc2046u);
  /* 10bc2046 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2048 push 0x10bc69e0 */
  push32((uint32_t)(0x10bc69e0u));
  /* 10bc204d call ebx */
  call_ind((uint32_t)(EBX), 0x10bc204fu);
  /* 10bc204f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2051 call dword ptr [0x10bc5118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5118))), 0x10bc2057u);
  /* 10bc2057 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc205a jmp 0x10bc2062 */
  goto L_10bc2062;
L_10bc205c:;
  /* 10bc205c mov esi, dword ptr [0x10bc50ec] */
  ESI = (r32((uint32_t)(0x10bc50ec)));
L_10bc2062:;
  /* 10bc2062 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10bc2064 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc206au);
  /* 10bc206a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc206d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc206f je 0x10bc20c6 */
  if (C.zf) goto L_10bc20c6;
  /* 10bc2071 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10bc2073 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc2079u);
  /* 10bc2079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc207c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc207e jne 0x10bc20c6 */
  if (!C.zf) goto L_10bc20c6;
  /* 10bc2080 push 0x10bc68f0 */
  push32((uint32_t)(0x10bc68f0u));
  /* 10bc2085 push 0x10bc6938 */
  push32((uint32_t)(0x10bc6938u));
  /* 10bc208a call esi */
  call_ind((uint32_t)(ESI), 0x10bc208cu);
  /* 10bc208c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc208f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2091 jne 0x10bc20c6 */
  if (!C.zf) goto L_10bc20c6;
  /* 10bc2093 push 0x10bc68b8 */
  push32((uint32_t)(0x10bc68b8u));
  /* 10bc2098 push 0x10bc6938 */
  push32((uint32_t)(0x10bc6938u));
  /* 10bc209d call esi */
  call_ind((uint32_t)(ESI), 0x10bc209fu);
  /* 10bc209f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc20a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc20a4 jle 0x10bc20c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc20c6;
  /* 10bc20a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc20a8 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10bc20aa call ebp */
  call_ind((uint32_t)(EBP), 0x10bc20acu);
  /* 10bc20ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc20ae push 0x10bc69e0 */
  push32((uint32_t)(0x10bc69e0u));
  /* 10bc20b3 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc20b5u);
  /* 10bc20b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc20b7 call dword ptr [0x10bc511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc511c))), 0x10bc20bdu);
  /* 10bc20bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc20bf push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10bc20c1 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc20c3u);
  /* 10bc20c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc20c6:;
  /* 10bc20c6 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10bc20c8 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc20ceu);
  /* 10bc20ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc20d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc20d3 je 0x10bc2140 */
  if (C.zf) goto L_10bc2140;
  /* 10bc20d5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bc20d7 call dword ptr [0x10bc50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50b0))), 0x10bc20ddu);
  /* 10bc20dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc20e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc20e2 jne 0x10bc2140 */
  if (!C.zf) goto L_10bc2140;
  /* 10bc20e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc20e6 push 0x10bc69e8 */
  push32((uint32_t)(0x10bc69e8u));
  /* 10bc20eb call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc20f1u);
  /* 10bc20f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc20f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc20f6 jne 0x10bc2140 */
  if (!C.zf) goto L_10bc2140;
  /* 10bc20f8 push eax */
  push32((uint32_t)(EAX));
  /* 10bc20f9 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10bc20fb call ebp */
  call_ind((uint32_t)(EBP), 0x10bc20fdu);
  /* 10bc20fd push 0x10bc6280 */
  push32((uint32_t)(0x10bc6280u));
  /* 10bc2102 call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc2108u);
  /* 10bc2108 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc210a push 0x10bc6980 */
  push32((uint32_t)(0x10bc6980u));
  /* 10bc210f call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc2115u);
  /* 10bc2115 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc211a jle 0x10bc2140 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc2140;
  /* 10bc211c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc211e call dword ptr [0x10bc50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50f8))), 0x10bc2124u);
  /* 10bc2124 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2126 push 0x10bc6980 */
  push32((uint32_t)(0x10bc6980u));
  /* 10bc212b call ebx */
  call_ind((uint32_t)(EBX), 0x10bc212du);
  /* 10bc212d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc212f push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10bc2134 push 0x10bc6948 */
  push32((uint32_t)(0x10bc6948u));
  /* 10bc2139 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc213b call edi */
  call_ind((uint32_t)(EDI), 0x10bc213du);
  /* 10bc213d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc2140:;
  /* 10bc2140 mov edi, dword ptr [0x10bc50b0] */
  EDI = (r32((uint32_t)(0x10bc50b0)));
  /* 10bc2146 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10bc2148 call edi */
  call_ind((uint32_t)(EDI), 0x10bc214au);
  /* 10bc214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc214d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc214f je 0x10bc21b9 */
  if (C.zf) goto L_10bc21b9;
  /* 10bc2151 push 0x10bc68b8 */
  push32((uint32_t)(0x10bc68b8u));
  /* 10bc2156 push 0x10bc6960 */
  push32((uint32_t)(0x10bc6960u));
  /* 10bc215b call esi */
  call_ind((uint32_t)(ESI), 0x10bc215du);
  /* 10bc215d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2160 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2163 jg 0x10bc2179 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bc2179;
  /* 10bc2165 push 0x10bc69e8 */
  push32((uint32_t)(0x10bc69e8u));
  /* 10bc216a push 0x10bc6960 */
  push32((uint32_t)(0x10bc6960u));
  /* 10bc216f call esi */
  call_ind((uint32_t)(ESI), 0x10bc2171u);
  /* 10bc2171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2174 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2177 jle 0x10bc21b9 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc21b9;
L_10bc2179:;
  /* 10bc2179 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc217b push 0x10bc6880 */
  push32((uint32_t)(0x10bc6880u));
  /* 10bc2180 call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc2186u);
  /* 10bc2186 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc218b jne 0x10bc21b9 */
  if (!C.zf) goto L_10bc21b9;
  /* 10bc218d push eax */
  push32((uint32_t)(EAX));
  /* 10bc218e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10bc2190 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc2192u);
  /* 10bc2192 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2194 push 0x10bc69a0 */
  push32((uint32_t)(0x10bc69a0u));
  /* 10bc2199 call ebx */
  call_ind((uint32_t)(EBX), 0x10bc219bu);
  /* 10bc219b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc219d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc219f call dword ptr [0x10bc50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50e8))), 0x10bc21a5u);
  /* 10bc21a5 push 0x10bc6278 */
  push32((uint32_t)(0x10bc6278u));
  /* 10bc21aa call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc21b0u);
  /* 10bc21b0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc21b3 call dword ptr [0x10bc5114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5114))), 0x10bc21b9u);
L_10bc21b9:;
  /* 10bc21b9 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bc21bb call edi */
  call_ind((uint32_t)(EDI), 0x10bc21bdu);
  /* 10bc21bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc21c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc21c2 je 0x10bc21f1 */
  if (C.zf) goto L_10bc21f1;
  /* 10bc21c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc21c6 push 0x10bc68b8 */
  push32((uint32_t)(0x10bc68b8u));
  /* 10bc21cb call dword ptr [0x10bc50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50d8))), 0x10bc21d1u);
  /* 10bc21d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc21d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc21d6 jne 0x10bc21f1 */
  if (!C.zf) goto L_10bc21f1;
  /* 10bc21d8 push eax */
  push32((uint32_t)(EAX));
  /* 10bc21d9 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bc21db call ebp */
  call_ind((uint32_t)(EBP), 0x10bc21ddu);
  /* 10bc21dd push 0x10bc6270 */
  push32((uint32_t)(0x10bc6270u));
  /* 10bc21e2 call dword ptr [0x10bc50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50c0))), 0x10bc21e8u);
  /* 10bc21e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc21eb call dword ptr [0x10bc5124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5124))), 0x10bc21f1u);
L_10bc21f1:;
  /* 10bc21f1 pop edi */
  EDI = (pop32());
  /* 10bc21f2 pop esi */
  ESI = (pop32());
  /* 10bc21f3 pop ebp */
  EBP = (pop32());
  /* 10bc21f4 pop ebx */
  EBX = (pop32());
  /* 10bc21f5 ret  */
  ESPCHK(0x10bc12a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002200 @ 0x10bc2200 (20 bytes, 6 insns) */
void f_10bc2200(void) {
  FTRACE(0x10bc2200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2200 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc2204 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bc2205 jne 0x10bc220c */
  if (!C.zf) goto L_10bc220c;
  /* 10bc2207 call 0x10bc1000 */
  push32(0x10bc220cu); f_10bc1000();
L_10bc220c:;
  /* 10bc220c mov eax, 1 */
  EAX = (0x1u);
  /* 10bc2211 ret 0xc */
  ESPCHK(0x10bc2200u, _esp0);
  ESP += 16; return;
}

/* FUN_10002220 @ 0x10bc2220 (217 bytes, 57 insns) */
void f_10bc2220(void) {
  FTRACE(0x10bc2220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2220 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc2224 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2227 jne 0x10bc22b5 */
  if (!C.zf) goto L_10bc22b5;
  /* 10bc222d call dword ptr [0x10bc5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5080))), 0x10bc2233u);
  /* 10bc2233 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2235 mov dword ptr [0x10bc6a44], eax */
  w32((uint32_t)(0x10bc6a44), (EAX));
  /* 10bc223a call 0x10bc2c54 */
  push32(0x10bc223fu); f_10bc2c54();
  /* 10bc223f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2241 pop ecx */
  ECX = (pop32());
  /* 10bc2242 je 0x10bc2280 */
  if (C.zf) goto L_10bc2280;
  /* 10bc2244 mov eax, dword ptr [0x10bc6a44] */
  EAX = (r32((uint32_t)(0x10bc6a44)));
  /* 10bc2249 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bc224b mov cl, byte ptr [0x10bc6a45] */
  CL = (r8((uint32_t)(0x10bc6a45)));
  /* 10bc2251 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2256 shr dword ptr [0x10bc6a44], 0x10 */
  w32((uint32_t)(0x10bc6a44), (sh_shr((uint32_t)(r32((uint32_t)(0x10bc6a44))), (0x10u)&0x1f, 32)));
  /* 10bc225d mov dword ptr [0x10bc6a4c], eax */
  w32((uint32_t)(0x10bc6a4c), (EAX));
  /* 10bc2262 mov dword ptr [0x10bc6a50], ecx */
  w32((uint32_t)(0x10bc6a50), (ECX));
  /* 10bc2268 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10bc226b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc226d mov dword ptr [0x10bc6a48], eax */
  w32((uint32_t)(0x10bc6a48), (EAX));
  /* 10bc2272 call 0x10bc24e7 */
  push32(0x10bc2277u); f_10bc24e7();
  /* 10bc2277 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2279 jne 0x10bc2284 */
  if (!C.zf) goto L_10bc2284;
  /* 10bc227b call 0x10bc2c90 */
  push32(0x10bc2280u); f_10bc2c90();
L_10bc2280:;
  /* 10bc2280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2282 jmp 0x10bc22f6 */
  goto L_10bc22f6;
L_10bc2284:;
  /* 10bc2284 call dword ptr [0x10bc507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc507c))), 0x10bc228au);
  /* 10bc228a mov dword ptr [0x10bc6f98], eax */
  w32((uint32_t)(0x10bc6f98), (EAX));
  /* 10bc228f call 0x10bc2b22 */
  push32(0x10bc2294u); f_10bc2b22();
  /* 10bc2294 mov dword ptr [0x10bc6a30], eax */
  w32((uint32_t)(0x10bc6a30), (EAX));
  /* 10bc2299 call 0x10bc260c */
  push32(0x10bc229eu); f_10bc260c();
  /* 10bc229e call 0x10bc28d5 */
  push32(0x10bc22a3u); f_10bc28d5();
  /* 10bc22a3 call 0x10bc281c */
  push32(0x10bc22a8u); f_10bc281c();
  /* 10bc22a8 call 0x10bc23c9 */
  push32(0x10bc22adu); f_10bc23c9();
  /* 10bc22ad inc dword ptr [0x10bc6a2c] */
  { uint32_t _r=(r32((uint32_t)(0x10bc6a2c)))+1; w32((uint32_t)(0x10bc6a2c), (_r)); fl_inc(_r,32); }
  /* 10bc22b3 jmp 0x10bc22f3 */
  goto L_10bc22f3;
L_10bc22b5:;
  /* 10bc22b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bc22b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc22b9 jne 0x10bc22e7 */
  if (!C.zf) goto L_10bc22e7;
  /* 10bc22bb cmp dword ptr [0x10bc6a2c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a2c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc22c1 jle 0x10bc2280 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc2280;
  /* 10bc22c3 dec dword ptr [0x10bc6a2c] */
  { uint32_t _r=(r32((uint32_t)(0x10bc6a2c)))-1; w32((uint32_t)(0x10bc6a2c), (_r)); fl_dec(_r,32); }
  /* 10bc22c9 cmp dword ptr [0x10bc6a7c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a7c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc22cf jne 0x10bc22d6 */
  if (!C.zf) goto L_10bc22d6;
  /* 10bc22d1 call 0x10bc2407 */
  push32(0x10bc22d6u); f_10bc2407();
L_10bc22d6:;
  /* 10bc22d6 call 0x10bc27c8 */
  push32(0x10bc22dbu); f_10bc27c8();
  /* 10bc22db call 0x10bc253b */
  push32(0x10bc22e0u); f_10bc253b();
  /* 10bc22e0 call 0x10bc2c90 */
  push32(0x10bc22e5u); f_10bc2c90();
  /* 10bc22e5 jmp 0x10bc22f3 */
  goto L_10bc22f3;
L_10bc22e7:;
  /* 10bc22e7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc22ea jne 0x10bc22f3 */
  if (!C.zf) goto L_10bc22f3;
  /* 10bc22ec push ecx */
  push32((uint32_t)(ECX));
  /* 10bc22ed call 0x10bc256c */
  push32(0x10bc22f2u); f_10bc256c();
  /* 10bc22f2 pop ecx */
  ECX = (pop32());
L_10bc22f3:;
  /* 10bc22f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc22f5 pop eax */
  EAX = (pop32());
L_10bc22f6:;
  /* 10bc22f6 ret 0xc */
  ESPCHK(0x10bc2220u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10bc22f9 (157 bytes, 73 insns) */
void f_10bc22f9(void) {
  FTRACE(0x10bc22f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc22f9 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc22fa mov ebp, esp */
  EBP = (ESP);
  /* 10bc22fc push ebx */
  push32((uint32_t)(EBX));
  /* 10bc22fd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc2300 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2301 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc2304 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2305 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10bc2308 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc230a jne 0x10bc2315 */
  if (!C.zf) goto L_10bc2315;
  /* 10bc230c cmp dword ptr [0x10bc6a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2313 jmp 0x10bc233b */
  goto L_10bc233b;
L_10bc2315:;
  /* 10bc2315 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2318 je 0x10bc231f */
  if (C.zf) goto L_10bc231f;
  /* 10bc231a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc231d jne 0x10bc2341 */
  if (!C.zf) goto L_10bc2341;
L_10bc231f:;
  /* 10bc231f mov eax, dword ptr [0x10bc6f9c] */
  EAX = (r32((uint32_t)(0x10bc6f9c)));
  /* 10bc2324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2326 je 0x10bc2331 */
  if (C.zf) goto L_10bc2331;
  /* 10bc2328 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2329 push esi */
  push32((uint32_t)(ESI));
  /* 10bc232a push ebx */
  push32((uint32_t)(EBX));
  /* 10bc232b call eax */
  call_ind((uint32_t)(EAX), 0x10bc232du);
  /* 10bc232d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc232f je 0x10bc233d */
  if (C.zf) goto L_10bc233d;
L_10bc2331:;
  /* 10bc2331 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2332 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2333 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2334 call 0x10bc2220 */
  push32(0x10bc2339u); f_10bc2220();
  /* 10bc2339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10bc233b:;
  /* 10bc233b jne 0x10bc2341 */
  if (!C.zf) goto L_10bc2341;
L_10bc233d:;
  /* 10bc233d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc233f jmp 0x10bc238f */
  goto L_10bc238f;
L_10bc2341:;
  /* 10bc2341 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2342 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2343 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2344 call 0x10bc2200 */
  push32(0x10bc2349u); f_10bc2200();
  /* 10bc2349 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc234c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10bc234f jne 0x10bc235d */
  if (!C.zf) goto L_10bc235d;
  /* 10bc2351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2353 jne 0x10bc238c */
  if (!C.zf) goto L_10bc238c;
  /* 10bc2355 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2356 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2357 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2358 call 0x10bc2220 */
  push32(0x10bc235du); f_10bc2220();
L_10bc235d:;
  /* 10bc235d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc235f je 0x10bc2366 */
  if (C.zf) goto L_10bc2366;
  /* 10bc2361 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2364 jne 0x10bc238c */
  if (!C.zf) goto L_10bc238c;
L_10bc2366:;
  /* 10bc2366 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2367 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2368 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2369 call 0x10bc2220 */
  push32(0x10bc236eu); f_10bc2220();
  /* 10bc236e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2370 jne 0x10bc2375 */
  if (!C.zf) goto L_10bc2375;
  /* 10bc2372 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10bc2375:;
  /* 10bc2375 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2379 je 0x10bc238c */
  if (C.zf) goto L_10bc238c;
  /* 10bc237b mov eax, dword ptr [0x10bc6f9c] */
  EAX = (r32((uint32_t)(0x10bc6f9c)));
  /* 10bc2380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2382 je 0x10bc238c */
  if (C.zf) goto L_10bc238c;
  /* 10bc2384 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2385 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2386 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2387 call eax */
  call_ind((uint32_t)(EAX), 0x10bc2389u);
  /* 10bc2389 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10bc238c:;
  /* 10bc238c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10bc238f:;
  /* 10bc238f pop edi */
  EDI = (pop32());
  /* 10bc2390 pop esi */
  ESI = (pop32());
  /* 10bc2391 pop ebx */
  EBX = (pop32());
  /* 10bc2392 pop ebp */
  EBP = (pop32());
  /* 10bc2393 ret 0xc */
  ESPCHK(0x10bc22f9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10bc2396 (48 bytes, 15 insns) */
void f_10bc2396(void) {
  FTRACE(0x10bc2396u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2396 mov eax, dword ptr [0x10bc6a38] */
  EAX = (r32((uint32_t)(0x10bc6a38)));
  /* 10bc239b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc239e je 0x10bc23ad */
  if (C.zf) goto L_10bc23ad;
  /* 10bc23a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc23a2 jne 0x10bc23b2 */
  if (!C.zf) goto L_10bc23b2;
  /* 10bc23a4 cmp dword ptr [0x10bc6a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc23ab jne 0x10bc23b2 */
  if (!C.zf) goto L_10bc23b2;
L_10bc23ad:;
  /* 10bc23ad call 0x10bc2d05 */
  push32(0x10bc23b2u); f_10bc2d05();
L_10bc23b2:;
  /* 10bc23b2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bc23b6 call 0x10bc2d3e */
  push32(0x10bc23bbu); f_10bc2d3e();
  /* 10bc23bb push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bc23c0 call dword ptr [0x10bc6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc6550))), 0x10bc23c6u);
  /* 10bc23c6 pop ecx */
  ECX = (pop32());
  /* 10bc23c7 pop ecx */
  ECX = (pop32());
  /* 10bc23c8 ret  */
  ESPCHK(0x10bc2396u, _esp0);
  ESP += 4; return;
}

/* FUN_100023c9 @ 0x10bc23c9 (45 bytes, 12 insns) */
void f_10bc23c9(void) {
  FTRACE(0x10bc23c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc23c9 mov eax, dword ptr [0x10bc6f94] */
  EAX = (r32((uint32_t)(0x10bc6f94)));
  /* 10bc23ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc23d0 je 0x10bc23d4 */
  if (C.zf) goto L_10bc23d4;
  /* 10bc23d2 call eax */
  call_ind((uint32_t)(EAX), 0x10bc23d4u);
L_10bc23d4:;
  /* 10bc23d4 push 0x10bc6010 */
  push32((uint32_t)(0x10bc6010u));
  /* 10bc23d9 push 0x10bc6008 */
  push32((uint32_t)(0x10bc6008u));
  /* 10bc23de call 0x10bc24cd */
  push32(0x10bc23e3u); f_10bc24cd();
  /* 10bc23e3 push 0x10bc6004 */
  push32((uint32_t)(0x10bc6004u));
  /* 10bc23e8 push 0x10bc6000 */
  push32((uint32_t)(0x10bc6000u));
  /* 10bc23ed call 0x10bc24cd */
  push32(0x10bc23f2u); f_10bc24cd();
  /* 10bc23f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc23f5 ret  */
  ESPCHK(0x10bc23c9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10bc23f6 (17 bytes, 6 insns) */
void f_10bc23f6(void) {
  FTRACE(0x10bc23f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc23f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc23f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc23fa push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10bc23fe call 0x10bc2416 */
  push32(0x10bc2403u); f_10bc2416();
  /* 10bc2403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2406 ret  */
  ESPCHK(0x10bc23f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002407 @ 0x10bc2407 (15 bytes, 6 insns) */
void f_10bc2407(void) {
  FTRACE(0x10bc2407u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2407 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2409 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc240b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc240d call 0x10bc2416 */
  push32(0x10bc2412u); f_10bc2416();
  /* 10bc2412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2415 ret  */
  ESPCHK(0x10bc2407u, _esp0);
  ESP += 4; return;
}

/* FUN_10002416 @ 0x10bc2416 (163 bytes, 53 insns) */
void f_10bc2416(void) {
  FTRACE(0x10bc2416u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2416 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2417 call 0x10bc24bb */
  push32(0x10bc241cu); f_10bc24bb();
  /* 10bc241c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc241e pop edi */
  EDI = (pop32());
  /* 10bc241f cmp dword ptr [0x10bc6a80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2425 jne 0x10bc2438 */
  if (!C.zf) goto L_10bc2438;
  /* 10bc2427 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10bc242b call dword ptr [0x10bc508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc508c))), 0x10bc2431u);
  /* 10bc2431 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2432 call dword ptr [0x10bc5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5088))), 0x10bc2438u);
L_10bc2438:;
  /* 10bc2438 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc243d push ebx */
  push32((uint32_t)(EBX));
  /* 10bc243e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10bc2442 mov dword ptr [0x10bc6a7c], edi */
  w32((uint32_t)(0x10bc6a7c), (EDI));
  /* 10bc2448 mov byte ptr [0x10bc6a78], bl */
  w8((uint32_t)(0x10bc6a78), (BL));
  /* 10bc244e jne 0x10bc248c */
  if (!C.zf) goto L_10bc248c;
  /* 10bc2450 mov eax, dword ptr [0x10bc6f90] */
  EAX = (r32((uint32_t)(0x10bc6f90)));
  /* 10bc2455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2457 je 0x10bc247b */
  if (C.zf) goto L_10bc247b;
  /* 10bc2459 mov ecx, dword ptr [0x10bc6f8c] */
  ECX = (r32((uint32_t)(0x10bc6f8c)));
  /* 10bc245f push esi */
  push32((uint32_t)(ESI));
  /* 10bc2460 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10bc2463 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2465 jb 0x10bc247a */
  if (C.cf) goto L_10bc247a;
L_10bc2467:;
  /* 10bc2467 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bc2469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc246b je 0x10bc246f */
  if (C.zf) goto L_10bc246f;
  /* 10bc246d call eax */
  call_ind((uint32_t)(EAX), 0x10bc246fu);
L_10bc246f:;
  /* 10bc246f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2472 cmp esi, dword ptr [0x10bc6f90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10bc6f90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2478 jae 0x10bc2467 */
  if (!C.cf) goto L_10bc2467;
L_10bc247a:;
  /* 10bc247a pop esi */
  ESI = (pop32());
L_10bc247b:;
  /* 10bc247b push 0x10bc6018 */
  push32((uint32_t)(0x10bc6018u));
  /* 10bc2480 push 0x10bc6014 */
  push32((uint32_t)(0x10bc6014u));
  /* 10bc2485 call 0x10bc24cd */
  push32(0x10bc248au); f_10bc24cd();
  /* 10bc248a pop ecx */
  ECX = (pop32());
  /* 10bc248b pop ecx */
  ECX = (pop32());
L_10bc248c:;
  /* 10bc248c push 0x10bc6020 */
  push32((uint32_t)(0x10bc6020u));
  /* 10bc2491 push 0x10bc601c */
  push32((uint32_t)(0x10bc601cu));
  /* 10bc2496 call 0x10bc24cd */
  push32(0x10bc249bu); f_10bc24cd();
  /* 10bc249b pop ecx */
  ECX = (pop32());
  /* 10bc249c pop ecx */
  ECX = (pop32());
  /* 10bc249d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bc249f pop ebx */
  EBX = (pop32());
  /* 10bc24a0 je 0x10bc24a9 */
  if (C.zf) goto L_10bc24a9;
  /* 10bc24a2 call 0x10bc24c4 */
  push32(0x10bc24a7u); f_10bc24c4();
  /* 10bc24a7 pop edi */
  EDI = (pop32());
  /* 10bc24a8 ret  */
  ESPCHK(0x10bc2416u, _esp0);
  ESP += 4; return;
L_10bc24a9:;
  /* 10bc24a9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10bc24ad mov dword ptr [0x10bc6a80], edi */
  w32((uint32_t)(0x10bc6a80), (EDI));
  /* 10bc24b3 call dword ptr [0x10bc5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5084))), 0x10bc24b9u);
  /* 10bc24b9 pop edi */
  EDI = (pop32());
  /* 10bc24ba ret  */
  ESPCHK(0x10bc2416u, _esp0);
  ESP += 4; return;
}

/* FUN_100024bb @ 0x10bc24bb (9 bytes, 4 insns) */
void f_10bc24bb(void) {
  FTRACE(0x10bc24bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc24bb push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bc24bd call 0x10bc2f26 */
  push32(0x10bc24c2u); f_10bc2f26();
  /* 10bc24c2 pop ecx */
  ECX = (pop32());
  /* 10bc24c3 ret  */
  ESPCHK(0x10bc24bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100024c4 @ 0x10bc24c4 (9 bytes, 4 insns) */
void f_10bc24c4(void) {
  FTRACE(0x10bc24c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc24c4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bc24c6 call 0x10bc2f87 */
  push32(0x10bc24cbu); f_10bc2f87();
  /* 10bc24cb pop ecx */
  ECX = (pop32());
  /* 10bc24cc ret  */
  ESPCHK(0x10bc24c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100024cd @ 0x10bc24cd (26 bytes, 12 insns) */
void f_10bc24cd(void) {
  FTRACE(0x10bc24cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc24cd push esi */
  push32((uint32_t)(ESI));
  /* 10bc24ce mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10bc24d2:;
  /* 10bc24d2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc24d6 jae 0x10bc24e5 */
  if (!C.cf) goto L_10bc24e5;
  /* 10bc24d8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bc24da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc24dc je 0x10bc24e0 */
  if (C.zf) goto L_10bc24e0;
  /* 10bc24de call eax */
  call_ind((uint32_t)(EAX), 0x10bc24e0u);
L_10bc24e0:;
  /* 10bc24e0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc24e3 jmp 0x10bc24d2 */
  goto L_10bc24d2;
L_10bc24e5:;
  /* 10bc24e5 pop esi */
  ESI = (pop32());
  /* 10bc24e6 ret  */
  ESPCHK(0x10bc24cdu, _esp0);
  ESP += 4; return;
}

/* FUN_100024e7 @ 0x10bc24e7 (84 bytes, 32 insns) */
void f_10bc24e7(void) {
  FTRACE(0x10bc24e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc24e7 push esi */
  push32((uint32_t)(ESI));
  /* 10bc24e8 call 0x10bc2e91 */
  push32(0x10bc24edu); f_10bc2e91();
  /* 10bc24ed call dword ptr [0x10bc5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5000))), 0x10bc24f3u);
  /* 10bc24f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc24f6 mov dword ptr [0x10bc6554], eax */
  w32((uint32_t)(0x10bc6554), (EAX));
  /* 10bc24fb je 0x10bc2537 */
  if (C.zf) goto L_10bc2537;
  /* 10bc24fd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10bc24ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2501 call 0x10bc2f9c */
  push32(0x10bc2506u); f_10bc2f9c();
  /* 10bc2506 mov esi, eax */
  ESI = (EAX);
  /* 10bc2508 pop ecx */
  ECX = (pop32());
  /* 10bc2509 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc250b pop ecx */
  ECX = (pop32());
  /* 10bc250c je 0x10bc2537 */
  if (C.zf) goto L_10bc2537;
  /* 10bc250e push esi */
  push32((uint32_t)(ESI));
  /* 10bc250f push dword ptr [0x10bc6554] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6554))));
  /* 10bc2515 call dword ptr [0x10bc5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5094))), 0x10bc251bu);
  /* 10bc251b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc251d je 0x10bc2537 */
  if (C.zf) goto L_10bc2537;
  /* 10bc251f push esi */
  push32((uint32_t)(ESI));
  /* 10bc2520 call 0x10bc2559 */
  push32(0x10bc2525u); f_10bc2559();
  /* 10bc2525 pop ecx */
  ECX = (pop32());
  /* 10bc2526 call dword ptr [0x10bc5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5090))), 0x10bc252cu);
  /* 10bc252c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10bc2530 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2532 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10bc2534 pop eax */
  EAX = (pop32());
  /* 10bc2535 pop esi */
  ESI = (pop32());
  /* 10bc2536 ret  */
  ESPCHK(0x10bc24e7u, _esp0);
  ESP += 4; return;
L_10bc2537:;
  /* 10bc2537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2539 pop esi */
  ESI = (pop32());
  /* 10bc253a ret  */
  ESPCHK(0x10bc24e7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000253b @ 0x10bc253b (30 bytes, 8 insns) */
void f_10bc253b(void) {
  FTRACE(0x10bc253bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc253b call 0x10bc2eba */
  push32(0x10bc2540u); f_10bc2eba();
  /* 10bc2540 mov eax, dword ptr [0x10bc6554] */
  EAX = (r32((uint32_t)(0x10bc6554)));
  /* 10bc2545 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2548 je 0x10bc2558 */
  if (C.zf) goto L_10bc2558;
  /* 10bc254a push eax */
  push32((uint32_t)(EAX));
  /* 10bc254b call dword ptr [0x10bc5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5004))), 0x10bc2551u);
  /* 10bc2551 or dword ptr [0x10bc6554], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10bc6554)))|(0xffffffffu); w32((uint32_t)(0x10bc6554), (_r)); fl_logic(_r,32); }
L_10bc2558:;
  /* 10bc2558 ret  */
  ESPCHK(0x10bc253bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002559 @ 0x10bc2559 (19 bytes, 4 insns) */
void f_10bc2559(void) {
  FTRACE(0x10bc2559u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2559 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc255d mov dword ptr [eax + 0x50], 0x10bc66d0 */
  w32((uint32_t)(EAX + 0x50), (0x10bc66d0u));
  /* 10bc2564 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10bc256b ret  */
  ESPCHK(0x10bc2559u, _esp0);
  ESP += 4; return;
}

/* FUN_1000256c @ 0x10bc256c (160 bytes, 62 insns) */
void f_10bc256c(void) {
  FTRACE(0x10bc256cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc256c mov eax, dword ptr [0x10bc6554] */
  EAX = (r32((uint32_t)(0x10bc6554)));
  /* 10bc2571 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2574 je 0x10bc260b */
  if (C.zf) goto L_10bc260b;
  /* 10bc257a push esi */
  push32((uint32_t)(ESI));
  /* 10bc257b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc257f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2581 jne 0x10bc2590 */
  if (!C.zf) goto L_10bc2590;
  /* 10bc2583 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2584 call dword ptr [0x10bc5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5098))), 0x10bc258au);
  /* 10bc258a mov esi, eax */
  ESI = (EAX);
  /* 10bc258c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc258e je 0x10bc25fc */
  if (C.zf) goto L_10bc25fc;
L_10bc2590:;
  /* 10bc2590 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10bc2593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2595 je 0x10bc259e */
  if (C.zf) goto L_10bc259e;
  /* 10bc2597 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2598 call 0x10bc3029 */
  push32(0x10bc259du); f_10bc3029();
  /* 10bc259d pop ecx */
  ECX = (pop32());
L_10bc259e:;
  /* 10bc259e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10bc25a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc25a3 je 0x10bc25ac */
  if (C.zf) goto L_10bc25ac;
  /* 10bc25a5 push eax */
  push32((uint32_t)(EAX));
  /* 10bc25a6 call 0x10bc3029 */
  push32(0x10bc25abu); f_10bc3029();
  /* 10bc25ab pop ecx */
  ECX = (pop32());
L_10bc25ac:;
  /* 10bc25ac mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10bc25af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc25b1 je 0x10bc25ba */
  if (C.zf) goto L_10bc25ba;
  /* 10bc25b3 push eax */
  push32((uint32_t)(EAX));
  /* 10bc25b4 call 0x10bc3029 */
  push32(0x10bc25b9u); f_10bc3029();
  /* 10bc25b9 pop ecx */
  ECX = (pop32());
L_10bc25ba:;
  /* 10bc25ba mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10bc25bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc25bf je 0x10bc25c8 */
  if (C.zf) goto L_10bc25c8;
  /* 10bc25c1 push eax */
  push32((uint32_t)(EAX));
  /* 10bc25c2 call 0x10bc3029 */
  push32(0x10bc25c7u); f_10bc3029();
  /* 10bc25c7 pop ecx */
  ECX = (pop32());
L_10bc25c8:;
  /* 10bc25c8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10bc25cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc25cd je 0x10bc25d6 */
  if (C.zf) goto L_10bc25d6;
  /* 10bc25cf push eax */
  push32((uint32_t)(EAX));
  /* 10bc25d0 call 0x10bc3029 */
  push32(0x10bc25d5u); f_10bc3029();
  /* 10bc25d5 pop ecx */
  ECX = (pop32());
L_10bc25d6:;
  /* 10bc25d6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10bc25d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc25db je 0x10bc25e4 */
  if (C.zf) goto L_10bc25e4;
  /* 10bc25dd push eax */
  push32((uint32_t)(EAX));
  /* 10bc25de call 0x10bc3029 */
  push32(0x10bc25e3u); f_10bc3029();
  /* 10bc25e3 pop ecx */
  ECX = (pop32());
L_10bc25e4:;
  /* 10bc25e4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10bc25e7 cmp eax, 0x10bc66d0 */
  { uint32_t _a=(EAX),_b=(0x10bc66d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc25ec je 0x10bc25f5 */
  if (C.zf) goto L_10bc25f5;
  /* 10bc25ee push eax */
  push32((uint32_t)(EAX));
  /* 10bc25ef call 0x10bc3029 */
  push32(0x10bc25f4u); f_10bc3029();
  /* 10bc25f4 pop ecx */
  ECX = (pop32());
L_10bc25f5:;
  /* 10bc25f5 push esi */
  push32((uint32_t)(ESI));
  /* 10bc25f6 call 0x10bc3029 */
  push32(0x10bc25fbu); f_10bc3029();
  /* 10bc25fb pop ecx */
  ECX = (pop32());
L_10bc25fc:;
  /* 10bc25fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc25fe push dword ptr [0x10bc6554] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6554))));
  /* 10bc2604 call dword ptr [0x10bc5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5094))), 0x10bc260au);
  /* 10bc260a pop esi */
  ESI = (pop32());
L_10bc260b:;
  /* 10bc260b ret  */
  ESPCHK(0x10bc256cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000260c @ 0x10bc260c (444 bytes, 150 insns) */
void f_10bc260c(void) {
  FTRACE(0x10bc260cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc260c push ebp */
  push32((uint32_t)(EBP));
  /* 10bc260d mov ebp, esp */
  EBP = (ESP);
  /* 10bc260f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2612 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2613 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2614 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2615 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bc261a call 0x10bc3071 */
  push32(0x10bc261fu); f_10bc3071();
  /* 10bc261f mov esi, eax */
  ESI = (EAX);
  /* 10bc2621 pop ecx */
  ECX = (pop32());
  /* 10bc2622 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2624 jne 0x10bc262e */
  if (!C.zf) goto L_10bc262e;
  /* 10bc2626 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bc2628 call 0x10bc2396 */
  push32(0x10bc262du); f_10bc2396();
  /* 10bc262d pop ecx */
  ECX = (pop32());
L_10bc262e:;
  /* 10bc262e mov dword ptr [0x10bc6e80], esi */
  w32((uint32_t)(0x10bc6e80), (ESI));
  /* 10bc2634 mov dword ptr [0x10bc6f80], 0x20 */
  w32((uint32_t)(0x10bc6f80), (0x20u));
  /* 10bc263e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10bc2644:;
  /* 10bc2644 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2646 jae 0x10bc2666 */
  if (!C.cf) goto L_10bc2666;
  /* 10bc2648 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bc264c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10bc264f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bc2653 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10bc2657 mov eax, dword ptr [0x10bc6e80] */
  EAX = (r32((uint32_t)(0x10bc6e80)));
  /* 10bc265c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc265f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2664 jmp 0x10bc2644 */
  goto L_10bc2644;
L_10bc2666:;
  /* 10bc2666 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10bc2669 push eax */
  push32((uint32_t)(EAX));
  /* 10bc266a call dword ptr [0x10bc50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50a8))), 0x10bc2670u);
  /* 10bc2670 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bc2675 je 0x10bc274c */
  if (C.zf) goto L_10bc274c;
  /* 10bc267b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bc267e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2680 je 0x10bc274c */
  if (C.zf) goto L_10bc274c;
  /* 10bc2686 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10bc2688 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10bc268b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10bc268e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bc2691 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10bc2696 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2698 jl 0x10bc269c */
  if ((C.sf!=C.of)) goto L_10bc269c;
  /* 10bc269a mov edi, eax */
  EDI = (EAX);
L_10bc269c:;
  /* 10bc269c cmp dword ptr [0x10bc6f80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bc6f80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc26a2 jge 0x10bc26fa */
  if ((C.sf==C.of)) goto L_10bc26fa;
  /* 10bc26a4 mov esi, 0x10bc6e84 */
  ESI = (0x10bc6e84u);
L_10bc26a9:;
  /* 10bc26a9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bc26ae call 0x10bc3071 */
  push32(0x10bc26b3u); f_10bc3071();
  /* 10bc26b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc26b5 pop ecx */
  ECX = (pop32());
  /* 10bc26b6 je 0x10bc26f4 */
  if (C.zf) goto L_10bc26f4;
  /* 10bc26b8 add dword ptr [0x10bc6f80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6f80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10bc6f80), (_r)); fl_add(_a,_b,_r,32); }
  /* 10bc26bf mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10bc26c1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10bc26c7:;
  /* 10bc26c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc26c9 jae 0x10bc26e7 */
  if (!C.cf) goto L_10bc26e7;
  /* 10bc26cb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bc26cf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10bc26d2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bc26d6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10bc26da mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10bc26dc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc26df add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc26e5 jmp 0x10bc26c7 */
  goto L_10bc26c7;
L_10bc26e7:;
  /* 10bc26e7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc26ea cmp dword ptr [0x10bc6f80], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bc6f80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc26f0 jl 0x10bc26a9 */
  if ((C.sf!=C.of)) goto L_10bc26a9;
  /* 10bc26f2 jmp 0x10bc26fa */
  goto L_10bc26fa;
L_10bc26f4:;
  /* 10bc26f4 mov edi, dword ptr [0x10bc6f80] */
  EDI = (r32((uint32_t)(0x10bc6f80)));
L_10bc26fa:;
  /* 10bc26fa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bc26fc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc26fe jle 0x10bc274c */
  if ((C.zf||C.sf!=C.of)) goto L_10bc274c;
L_10bc2700:;
  /* 10bc2700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc2703 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bc2705 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2708 je 0x10bc2742 */
  if (C.zf) goto L_10bc2742;
  /* 10bc270a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10bc270c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10bc270e je 0x10bc2742 */
  if (C.zf) goto L_10bc2742;
  /* 10bc2710 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10bc2712 jne 0x10bc271f */
  if (!C.zf) goto L_10bc271f;
  /* 10bc2714 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc2715 call dword ptr [0x10bc509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc509c))), 0x10bc271bu);
  /* 10bc271b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc271d je 0x10bc2742 */
  if (C.zf) goto L_10bc2742;
L_10bc271f:;
  /* 10bc271f mov ecx, esi */
  ECX = (ESI);
  /* 10bc2721 mov eax, esi */
  EAX = (ESI);
  /* 10bc2723 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bc2726 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2729 mov ecx, dword ptr [ecx*4 + 0x10bc6e80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10bc6e80)));
  /* 10bc2730 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10bc2733 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10bc2736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc2739 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10bc273b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bc273d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10bc273f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10bc2742:;
  /* 10bc2742 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10bc2746 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc2747 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bc2748 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc274a jl 0x10bc2700 */
  if ((C.sf!=C.of)) goto L_10bc2700;
L_10bc274c:;
  /* 10bc274c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10bc274e:;
  /* 10bc274e mov ecx, dword ptr [0x10bc6e80] */
  ECX = (r32((uint32_t)(0x10bc6e80)));
  /* 10bc2754 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10bc2757 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc275b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10bc275e jne 0x10bc27ad */
  if (!C.zf) goto L_10bc27ad;
  /* 10bc2760 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bc2762 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10bc2766 jne 0x10bc276d */
  if (!C.zf) goto L_10bc276d;
  /* 10bc2768 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10bc276a pop eax */
  EAX = (pop32());
  /* 10bc276b jmp 0x10bc2777 */
  goto L_10bc2777;
L_10bc276d:;
  /* 10bc276d mov eax, ebx */
  EAX = (EBX);
  /* 10bc276f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bc2770 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bc2772 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2774 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bc2777:;
  /* 10bc2777 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2778 call dword ptr [0x10bc50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50a4))), 0x10bc277eu);
  /* 10bc277e mov edi, eax */
  EDI = (EAX);
  /* 10bc2780 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2783 je 0x10bc279c */
  if (C.zf) goto L_10bc279c;
  /* 10bc2785 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2786 call dword ptr [0x10bc509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc509c))), 0x10bc278cu);
  /* 10bc278c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc278e je 0x10bc279c */
  if (C.zf) goto L_10bc279c;
  /* 10bc2790 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2795 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bc2797 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc279a jne 0x10bc27a2 */
  if (!C.zf) goto L_10bc27a2;
L_10bc279c:;
  /* 10bc279c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bc27a0 jmp 0x10bc27b1 */
  goto L_10bc27b1;
L_10bc27a2:;
  /* 10bc27a2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc27a5 jne 0x10bc27b1 */
  if (!C.zf) goto L_10bc27b1;
  /* 10bc27a7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10bc27ab jmp 0x10bc27b1 */
  goto L_10bc27b1;
L_10bc27ad:;
  /* 10bc27ad or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10bc27b1:;
  /* 10bc27b1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bc27b2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc27b5 jl 0x10bc274e */
  if ((C.sf!=C.of)) goto L_10bc274e;
  /* 10bc27b7 push dword ptr [0x10bc6f80] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6f80))));
  /* 10bc27bd call dword ptr [0x10bc50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50a0))), 0x10bc27c3u);
  /* 10bc27c3 pop edi */
  EDI = (pop32());
  /* 10bc27c4 pop esi */
  ESI = (pop32());
  /* 10bc27c5 pop ebx */
  EBX = (pop32());
  /* 10bc27c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc27c7 ret  */
  ESPCHK(0x10bc260cu, _esp0);
  ESP += 4; return;
}

/* FUN_100027c8 @ 0x10bc27c8 (84 bytes, 33 insns) */
void f_10bc27c8(void) {
  FTRACE(0x10bc27c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc27c8 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc27c9 push esi */
  push32((uint32_t)(ESI));
  /* 10bc27ca push edi */
  push32((uint32_t)(EDI));
  /* 10bc27cb mov esi, 0x10bc6e80 */
  ESI = (0x10bc6e80u);
L_10bc27d0:;
  /* 10bc27d0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bc27d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc27d4 je 0x10bc280d */
  if (C.zf) goto L_10bc280d;
  /* 10bc27d6 mov edi, eax */
  EDI = (EAX);
  /* 10bc27d8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc27dd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc27df jae 0x10bc2802 */
  if (!C.cf) goto L_10bc2802;
  /* 10bc27e1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10bc27e4:;
  /* 10bc27e4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc27e8 je 0x10bc27f1 */
  if (C.zf) goto L_10bc27f1;
  /* 10bc27ea push ebx */
  push32((uint32_t)(EBX));
  /* 10bc27eb call dword ptr [0x10bc5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5074))), 0x10bc27f1u);
L_10bc27f1:;
  /* 10bc27f1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bc27f3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc27f6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc27fb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc27fe cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2800 jb 0x10bc27e4 */
  if (C.cf) goto L_10bc27e4;
L_10bc2802:;
  /* 10bc2802 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2804 call 0x10bc3029 */
  push32(0x10bc2809u); f_10bc3029();
  /* 10bc2809 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10bc280c pop ecx */
  ECX = (pop32());
L_10bc280d:;
  /* 10bc280d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2810 cmp esi, 0x10bc6f80 */
  { uint32_t _a=(ESI),_b=(0x10bc6f80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2816 jl 0x10bc27d0 */
  if ((C.sf!=C.of)) goto L_10bc27d0;
  /* 10bc2818 pop edi */
  EDI = (pop32());
  /* 10bc2819 pop esi */
  ESI = (pop32());
  /* 10bc281a pop ebx */
  EBX = (pop32());
  /* 10bc281b ret  */
  ESPCHK(0x10bc27c8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000281c @ 0x10bc281c (185 bytes, 71 insns) */
void f_10bc281c(void) {
  FTRACE(0x10bc281cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc281c push ebx */
  push32((uint32_t)(EBX));
  /* 10bc281d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc281f cmp dword ptr [0x10bc6f88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bc6f88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2825 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2826 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2827 jne 0x10bc282e */
  if (!C.zf) goto L_10bc282e;
  /* 10bc2829 call 0x10bc3643 */
  push32(0x10bc282eu); f_10bc3643();
L_10bc282e:;
  /* 10bc282e mov esi, dword ptr [0x10bc6a30] */
  ESI = (r32((uint32_t)(0x10bc6a30)));
  /* 10bc2834 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10bc2836:;
  /* 10bc2836 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc2838 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc283a je 0x10bc284e */
  if (C.zf) goto L_10bc284e;
  /* 10bc283c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc283e je 0x10bc2841 */
  if (C.zf) goto L_10bc2841;
  /* 10bc2840 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10bc2841:;
  /* 10bc2841 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2842 call 0x10bc31f0 */
  push32(0x10bc2847u); f_10bc31f0();
  /* 10bc2847 pop ecx */
  ECX = (pop32());
  /* 10bc2848 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10bc284c jmp 0x10bc2836 */
  goto L_10bc2836;
L_10bc284e:;
  /* 10bc284e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10bc2855 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2856 call 0x10bc3071 */
  push32(0x10bc285bu); f_10bc3071();
  /* 10bc285b mov esi, eax */
  ESI = (EAX);
  /* 10bc285d pop ecx */
  ECX = (pop32());
  /* 10bc285e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2860 mov dword ptr [0x10bc6a60], esi */
  w32((uint32_t)(0x10bc6a60), (ESI));
  /* 10bc2866 jne 0x10bc2870 */
  if (!C.zf) goto L_10bc2870;
  /* 10bc2868 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc286a call 0x10bc2396 */
  push32(0x10bc286fu); f_10bc2396();
  /* 10bc286f pop ecx */
  ECX = (pop32());
L_10bc2870:;
  /* 10bc2870 mov edi, dword ptr [0x10bc6a30] */
  EDI = (r32((uint32_t)(0x10bc6a30)));
  /* 10bc2876 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2878 je 0x10bc28b3 */
  if (C.zf) goto L_10bc28b3;
  /* 10bc287a push ebp */
  push32((uint32_t)(EBP));
L_10bc287b:;
  /* 10bc287b push edi */
  push32((uint32_t)(EDI));
  /* 10bc287c call 0x10bc31f0 */
  push32(0x10bc2881u); f_10bc31f0();
  /* 10bc2881 mov ebp, eax */
  EBP = (EAX);
  /* 10bc2883 pop ecx */
  ECX = (pop32());
  /* 10bc2884 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10bc2885 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2888 je 0x10bc28ac */
  if (C.zf) goto L_10bc28ac;
  /* 10bc288a push ebp */
  push32((uint32_t)(EBP));
  /* 10bc288b call 0x10bc3071 */
  push32(0x10bc2890u); f_10bc3071();
  /* 10bc2890 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2892 pop ecx */
  ECX = (pop32());
  /* 10bc2893 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10bc2895 jne 0x10bc289f */
  if (!C.zf) goto L_10bc289f;
  /* 10bc2897 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc2899 call 0x10bc2396 */
  push32(0x10bc289eu); f_10bc2396();
  /* 10bc289e pop ecx */
  ECX = (pop32());
L_10bc289f:;
  /* 10bc289f push edi */
  push32((uint32_t)(EDI));
  /* 10bc28a0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc28a2 call 0x10bc3100 */
  push32(0x10bc28a7u); f_10bc3100();
  /* 10bc28a7 pop ecx */
  ECX = (pop32());
  /* 10bc28a8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc28ab pop ecx */
  ECX = (pop32());
L_10bc28ac:;
  /* 10bc28ac add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc28ae cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc28b0 jne 0x10bc287b */
  if (!C.zf) goto L_10bc287b;
  /* 10bc28b2 pop ebp */
  EBP = (pop32());
L_10bc28b3:;
  /* 10bc28b3 push dword ptr [0x10bc6a30] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6a30))));
  /* 10bc28b9 call 0x10bc3029 */
  push32(0x10bc28beu); f_10bc3029();
  /* 10bc28be pop ecx */
  ECX = (pop32());
  /* 10bc28bf mov dword ptr [0x10bc6a30], ebx */
  w32((uint32_t)(0x10bc6a30), (EBX));
  /* 10bc28c5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10bc28c7 pop edi */
  EDI = (pop32());
  /* 10bc28c8 pop esi */
  ESI = (pop32());
  /* 10bc28c9 mov dword ptr [0x10bc6f84], 1 */
  w32((uint32_t)(0x10bc6f84), (0x1u));
  /* 10bc28d3 pop ebx */
  EBX = (pop32());
  /* 10bc28d4 ret  */
  ESPCHK(0x10bc281cu, _esp0);
  ESP += 4; return;
}

/* FUN_100028d5 @ 0x10bc28d5 (153 bytes, 62 insns) */
void f_10bc28d5(void) {
  FTRACE(0x10bc28d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc28d5 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc28d6 mov ebp, esp */
  EBP = (ESP);
  /* 10bc28d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc28d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc28da push ebx */
  push32((uint32_t)(EBX));
  /* 10bc28db xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc28dd cmp dword ptr [0x10bc6f88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bc6f88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc28e3 push esi */
  push32((uint32_t)(ESI));
  /* 10bc28e4 push edi */
  push32((uint32_t)(EDI));
  /* 10bc28e5 jne 0x10bc28ec */
  if (!C.zf) goto L_10bc28ec;
  /* 10bc28e7 call 0x10bc3643 */
  push32(0x10bc28ecu); f_10bc3643();
L_10bc28ec:;
  /* 10bc28ec mov esi, 0x10bc6a84 */
  ESI = (0x10bc6a84u);
  /* 10bc28f1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bc28f6 push esi */
  push32((uint32_t)(ESI));
  /* 10bc28f7 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc28f8 call dword ptr [0x10bc5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5070))), 0x10bc28feu);
  /* 10bc28fe mov eax, dword ptr [0x10bc6f98] */
  EAX = (r32((uint32_t)(0x10bc6f98)));
  /* 10bc2903 mov dword ptr [0x10bc6a70], esi */
  w32((uint32_t)(0x10bc6a70), (ESI));
  /* 10bc2909 mov edi, esi */
  EDI = (ESI);
  /* 10bc290b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc290d je 0x10bc2911 */
  if (C.zf) goto L_10bc2911;
  /* 10bc290f mov edi, eax */
  EDI = (EAX);
L_10bc2911:;
  /* 10bc2911 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bc2914 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2915 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10bc2918 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2919 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc291a push ebx */
  push32((uint32_t)(EBX));
  /* 10bc291b push edi */
  push32((uint32_t)(EDI));
  /* 10bc291c call 0x10bc296e */
  push32(0x10bc2921u); f_10bc296e();
  /* 10bc2921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bc2924 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc2927 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10bc292a push eax */
  push32((uint32_t)(EAX));
  /* 10bc292b call 0x10bc3071 */
  push32(0x10bc2930u); f_10bc3071();
  /* 10bc2930 mov esi, eax */
  ESI = (EAX);
  /* 10bc2932 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2935 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2937 jne 0x10bc2941 */
  if (!C.zf) goto L_10bc2941;
  /* 10bc2939 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bc293b call 0x10bc2396 */
  push32(0x10bc2940u); f_10bc2396();
  /* 10bc2940 pop ecx */
  ECX = (pop32());
L_10bc2941:;
  /* 10bc2941 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bc2944 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2945 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10bc2948 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc294c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10bc294f push eax */
  push32((uint32_t)(EAX));
  /* 10bc2950 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2951 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2952 call 0x10bc296e */
  push32(0x10bc2957u); f_10bc296e();
  /* 10bc2957 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc295a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc295d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bc295e mov dword ptr [0x10bc6a58], esi */
  w32((uint32_t)(0x10bc6a58), (ESI));
  /* 10bc2964 pop edi */
  EDI = (pop32());
  /* 10bc2965 pop esi */
  ESI = (pop32());
  /* 10bc2966 mov dword ptr [0x10bc6a54], eax */
  w32((uint32_t)(0x10bc6a54), (EAX));
  /* 10bc296b pop ebx */
  EBX = (pop32());
  /* 10bc296c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc296d ret  */
  ESPCHK(0x10bc28d5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000296e @ 0x10bc296e (436 bytes, 187 insns) */
void f_10bc296e(void) {
  FTRACE(0x10bc296eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc296e push ebp */
  push32((uint32_t)(EBP));
  /* 10bc296f mov ebp, esp */
  EBP = (ESP);
  /* 10bc2971 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bc2974 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bc2977 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2978 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2979 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bc297c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10bc297f push edi */
  push32((uint32_t)(EDI));
  /* 10bc2980 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc2983 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10bc2989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc298c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc298e je 0x10bc2998 */
  if (C.zf) goto L_10bc2998;
  /* 10bc2990 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10bc2992 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2995 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10bc2998:;
  /* 10bc2998 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc299b jne 0x10bc29e1 */
  if (!C.zf) goto L_10bc29e1;
L_10bc299d:;
  /* 10bc299d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10bc29a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc29a1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc29a4 je 0x10bc29cf */
  if (C.zf) goto L_10bc29cf;
  /* 10bc29a6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc29a8 je 0x10bc29cf */
  if (C.zf) goto L_10bc29cf;
  /* 10bc29aa movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10bc29ad test byte ptr [edx + 0x10bc6d61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10bc6d61)))&(0x4u); fl_logic(_r,8); }
  /* 10bc29b4 je 0x10bc29c2 */
  if (C.zf) goto L_10bc29c2;
  /* 10bc29b6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc29b8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc29ba je 0x10bc29c2 */
  if (C.zf) goto L_10bc29c2;
  /* 10bc29bc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc29be mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bc29c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc29c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bc29c2:;
  /* 10bc29c2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc29c4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc29c6 je 0x10bc299d */
  if (C.zf) goto L_10bc299d;
  /* 10bc29c8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc29ca mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bc29cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc29cd jmp 0x10bc299d */
  goto L_10bc299d;
L_10bc29cf:;
  /* 10bc29cf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc29d1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc29d3 je 0x10bc29d9 */
  if (C.zf) goto L_10bc29d9;
  /* 10bc29d5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10bc29d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bc29d9:;
  /* 10bc29d9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc29dc jne 0x10bc2a24 */
  if (!C.zf) goto L_10bc2a24;
  /* 10bc29de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc29df jmp 0x10bc2a24 */
  goto L_10bc2a24;
L_10bc29e1:;
  /* 10bc29e1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc29e3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc29e5 je 0x10bc29ec */
  if (C.zf) goto L_10bc29ec;
  /* 10bc29e7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc29e9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bc29eb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bc29ec:;
  /* 10bc29ec mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc29ee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc29ef movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10bc29f2 test byte ptr [ebx + 0x10bc6d61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10bc6d61)))&(0x4u); fl_logic(_r,8); }
  /* 10bc29f9 je 0x10bc2a07 */
  if (C.zf) goto L_10bc2a07;
  /* 10bc29fb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc29fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc29ff je 0x10bc2a06 */
  if (C.zf) goto L_10bc2a06;
  /* 10bc2a01 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10bc2a03 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10bc2a05 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bc2a06:;
  /* 10bc2a06 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bc2a07:;
  /* 10bc2a07 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a0a je 0x10bc2a15 */
  if (C.zf) goto L_10bc2a15;
  /* 10bc2a0c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc2a0e je 0x10bc2a19 */
  if (C.zf) goto L_10bc2a19;
  /* 10bc2a10 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a13 jne 0x10bc29e1 */
  if (!C.zf) goto L_10bc29e1;
L_10bc2a15:;
  /* 10bc2a15 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc2a17 jne 0x10bc2a1c */
  if (!C.zf) goto L_10bc2a1c;
L_10bc2a19:;
  /* 10bc2a19 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bc2a1a jmp 0x10bc2a24 */
  goto L_10bc2a24;
L_10bc2a1c:;
  /* 10bc2a1c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2a1e je 0x10bc2a24 */
  if (C.zf) goto L_10bc2a24;
  /* 10bc2a20 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10bc2a24:;
  /* 10bc2a24 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10bc2a28:;
  /* 10bc2a28 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a2b je 0x10bc2b11 */
  if (C.zf) goto L_10bc2b11;
L_10bc2a31:;
  /* 10bc2a31 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc2a33 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a36 je 0x10bc2a3d */
  if (C.zf) goto L_10bc2a3d;
  /* 10bc2a38 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a3b jne 0x10bc2a40 */
  if (!C.zf) goto L_10bc2a40;
L_10bc2a3d:;
  /* 10bc2a3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2a3e jmp 0x10bc2a31 */
  goto L_10bc2a31;
L_10bc2a40:;
  /* 10bc2a40 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a43 je 0x10bc2b11 */
  if (C.zf) goto L_10bc2b11;
  /* 10bc2a49 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc2a4b je 0x10bc2a55 */
  if (C.zf) goto L_10bc2a55;
  /* 10bc2a4d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10bc2a4f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2a52 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10bc2a55:;
  /* 10bc2a55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bc2a58 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10bc2a5a:;
  /* 10bc2a5a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10bc2a61 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10bc2a63:;
  /* 10bc2a63 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a66 jne 0x10bc2a6c */
  if (!C.zf) goto L_10bc2a6c;
  /* 10bc2a68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2a69 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bc2a6a jmp 0x10bc2a63 */
  goto L_10bc2a63;
L_10bc2a6c:;
  /* 10bc2a6c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a6f jne 0x10bc2a9d */
  if (!C.zf) goto L_10bc2a9d;
  /* 10bc2a71 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10bc2a74 jne 0x10bc2a9b */
  if (!C.zf) goto L_10bc2a9b;
  /* 10bc2a76 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc2a78 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2a7b je 0x10bc2a8a */
  if (C.zf) goto L_10bc2a8a;
  /* 10bc2a7d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2a81 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10bc2a84 jne 0x10bc2a8a */
  if (!C.zf) goto L_10bc2a8a;
  /* 10bc2a86 mov eax, edx */
  EAX = (EDX);
  /* 10bc2a88 jmp 0x10bc2a8d */
  goto L_10bc2a8d;
L_10bc2a8a:;
  /* 10bc2a8a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10bc2a8d:;
  /* 10bc2a8d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc2a90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc2a92 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2a95 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10bc2a98 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10bc2a9b:;
  /* 10bc2a9b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10bc2a9d:;
  /* 10bc2a9d mov edx, ebx */
  EDX = (EBX);
  /* 10bc2a9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bc2aa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bc2aa2 je 0x10bc2ab2 */
  if (C.zf) goto L_10bc2ab2;
  /* 10bc2aa4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10bc2aa5:;
  /* 10bc2aa5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2aa7 je 0x10bc2aad */
  if (C.zf) goto L_10bc2aad;
  /* 10bc2aa9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10bc2aac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bc2aad:;
  /* 10bc2aad inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc2aaf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bc2ab0 jne 0x10bc2aa5 */
  if (!C.zf) goto L_10bc2aa5;
L_10bc2ab2:;
  /* 10bc2ab2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc2ab4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc2ab6 je 0x10bc2b02 */
  if (C.zf) goto L_10bc2b02;
  /* 10bc2ab8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2abc jne 0x10bc2ac8 */
  if (!C.zf) goto L_10bc2ac8;
  /* 10bc2abe cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2ac1 je 0x10bc2b02 */
  if (C.zf) goto L_10bc2b02;
  /* 10bc2ac3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2ac6 je 0x10bc2b02 */
  if (C.zf) goto L_10bc2b02;
L_10bc2ac8:;
  /* 10bc2ac8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2acc je 0x10bc2afc */
  if (C.zf) goto L_10bc2afc;
  /* 10bc2ace test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2ad0 je 0x10bc2aeb */
  if (C.zf) goto L_10bc2aeb;
  /* 10bc2ad2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10bc2ad5 test byte ptr [ebx + 0x10bc6d61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10bc6d61)))&(0x4u); fl_logic(_r,8); }
  /* 10bc2adc je 0x10bc2ae4 */
  if (C.zf) goto L_10bc2ae4;
  /* 10bc2ade mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bc2ae0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc2ae1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2ae2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10bc2ae4:;
  /* 10bc2ae4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10bc2ae6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10bc2ae8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc2ae9 jmp 0x10bc2afa */
  goto L_10bc2afa;
L_10bc2aeb:;
  /* 10bc2aeb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10bc2aee test byte ptr [edx + 0x10bc6d61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10bc6d61)))&(0x4u); fl_logic(_r,8); }
  /* 10bc2af5 je 0x10bc2afa */
  if (C.zf) goto L_10bc2afa;
  /* 10bc2af7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2af8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10bc2afa:;
  /* 10bc2afa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10bc2afc:;
  /* 10bc2afc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2afd jmp 0x10bc2a5a */
  goto L_10bc2a5a;
L_10bc2b02:;
  /* 10bc2b02 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2b04 je 0x10bc2b0a */
  if (C.zf) goto L_10bc2b0a;
  /* 10bc2b06 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10bc2b09 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10bc2b0a:;
  /* 10bc2b0a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10bc2b0c jmp 0x10bc2a28 */
  goto L_10bc2a28;
L_10bc2b11:;
  /* 10bc2b11 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc2b13 je 0x10bc2b18 */
  if (C.zf) goto L_10bc2b18;
  /* 10bc2b15 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10bc2b18:;
  /* 10bc2b18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bc2b1b pop edi */
  EDI = (pop32());
  /* 10bc2b1c pop esi */
  ESI = (pop32());
  /* 10bc2b1d pop ebx */
  EBX = (pop32());
  /* 10bc2b1e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10bc2b20 pop ebp */
  EBP = (pop32());
  /* 10bc2b21 ret  */
  ESPCHK(0x10bc296eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b22 @ 0x10bc2b22 (306 bytes, 132 insns) */
void f_10bc2b22(void) {
  FTRACE(0x10bc2b22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2b22 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc2b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc2b24 mov eax, dword ptr [0x10bc6b88] */
  EAX = (r32((uint32_t)(0x10bc6b88)));
  /* 10bc2b29 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2b2a push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2b2b mov ebp, dword ptr [0x10bc505c] */
  EBP = (r32((uint32_t)(0x10bc505c)));
  /* 10bc2b31 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2b32 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2b33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc2b35 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bc2b37 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc2b39 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2b3b jne 0x10bc2b70 */
  if (!C.zf) goto L_10bc2b70;
  /* 10bc2b3d call ebp */
  call_ind((uint32_t)(EBP), 0x10bc2b3fu);
  /* 10bc2b3f mov esi, eax */
  ESI = (EAX);
  /* 10bc2b41 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2b43 je 0x10bc2b51 */
  if (C.zf) goto L_10bc2b51;
  /* 10bc2b45 mov dword ptr [0x10bc6b88], 1 */
  w32((uint32_t)(0x10bc6b88), (0x1u));
  /* 10bc2b4f jmp 0x10bc2b79 */
  goto L_10bc2b79;
L_10bc2b51:;
  /* 10bc2b51 call dword ptr [0x10bc506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc506c))), 0x10bc2b57u);
  /* 10bc2b57 mov edi, eax */
  EDI = (EAX);
  /* 10bc2b59 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2b5b je 0x10bc2c4b */
  if (C.zf) goto L_10bc2c4b;
  /* 10bc2b61 mov dword ptr [0x10bc6b88], 2 */
  w32((uint32_t)(0x10bc6b88), (0x2u));
  /* 10bc2b6b jmp 0x10bc2bff */
  goto L_10bc2bff;
L_10bc2b70:;
  /* 10bc2b70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2b73 jne 0x10bc2bfa */
  if (!C.zf) goto L_10bc2bfa;
L_10bc2b79:;
  /* 10bc2b79 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2b7b jne 0x10bc2b89 */
  if (!C.zf) goto L_10bc2b89;
  /* 10bc2b7d call ebp */
  call_ind((uint32_t)(EBP), 0x10bc2b7fu);
  /* 10bc2b7f mov esi, eax */
  ESI = (EAX);
  /* 10bc2b81 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2b83 je 0x10bc2c4b */
  if (C.zf) goto L_10bc2c4b;
L_10bc2b89:;
  /* 10bc2b89 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bc2b8c mov eax, esi */
  EAX = (ESI);
  /* 10bc2b8e je 0x10bc2b9e */
  if (C.zf) goto L_10bc2b9e;
L_10bc2b90:;
  /* 10bc2b90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2b91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2b92 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bc2b95 jne 0x10bc2b90 */
  if (!C.zf) goto L_10bc2b90;
  /* 10bc2b97 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2b98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2b99 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10bc2b9c jne 0x10bc2b90 */
  if (!C.zf) goto L_10bc2b90;
L_10bc2b9e:;
  /* 10bc2b9e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2ba0 mov edi, dword ptr [0x10bc5064] */
  EDI = (r32((uint32_t)(0x10bc5064)));
  /* 10bc2ba6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bc2ba8 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2ba9 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2baa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2bab push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bac push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bad push eax */
  push32((uint32_t)(EAX));
  /* 10bc2bae push esi */
  push32((uint32_t)(ESI));
  /* 10bc2baf push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bb1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10bc2bb5 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2bb7u);
  /* 10bc2bb7 mov ebp, eax */
  EBP = (EAX);
  /* 10bc2bb9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2bbb je 0x10bc2bef */
  if (C.zf) goto L_10bc2bef;
  /* 10bc2bbd push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2bbe call 0x10bc3071 */
  push32(0x10bc2bc3u); f_10bc3071();
  /* 10bc2bc3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2bc5 pop ecx */
  ECX = (pop32());
  /* 10bc2bc6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10bc2bca je 0x10bc2bef */
  if (C.zf) goto L_10bc2bef;
  /* 10bc2bcc push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bcd push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bce push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2bcf push eax */
  push32((uint32_t)(EAX));
  /* 10bc2bd0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10bc2bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2bd5 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2bd7 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2bd9u);
  /* 10bc2bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2bdb jne 0x10bc2beb */
  if (!C.zf) goto L_10bc2beb;
  /* 10bc2bdd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10bc2be1 call 0x10bc3029 */
  push32(0x10bc2be6u); f_10bc3029();
  /* 10bc2be6 pop ecx */
  ECX = (pop32());
  /* 10bc2be7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10bc2beb:;
  /* 10bc2beb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10bc2bef:;
  /* 10bc2bef push esi */
  push32((uint32_t)(ESI));
  /* 10bc2bf0 call dword ptr [0x10bc5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5068))), 0x10bc2bf6u);
  /* 10bc2bf6 mov eax, ebx */
  EAX = (EBX);
  /* 10bc2bf8 jmp 0x10bc2c4d */
  goto L_10bc2c4d;
L_10bc2bfa:;
  /* 10bc2bfa cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2bfd jne 0x10bc2c4b */
  if (!C.zf) goto L_10bc2c4b;
L_10bc2bff:;
  /* 10bc2bff cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2c01 jne 0x10bc2c0f */
  if (!C.zf) goto L_10bc2c0f;
  /* 10bc2c03 call dword ptr [0x10bc506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc506c))), 0x10bc2c09u);
  /* 10bc2c09 mov edi, eax */
  EDI = (EAX);
  /* 10bc2c0b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2c0d je 0x10bc2c4b */
  if (C.zf) goto L_10bc2c4b;
L_10bc2c0f:;
  /* 10bc2c0f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2c11 mov eax, edi */
  EAX = (EDI);
  /* 10bc2c13 je 0x10bc2c1f */
  if (C.zf) goto L_10bc2c1f;
L_10bc2c15:;
  /* 10bc2c15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2c16 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2c18 jne 0x10bc2c15 */
  if (!C.zf) goto L_10bc2c15;
  /* 10bc2c1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2c1b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc2c1d jne 0x10bc2c15 */
  if (!C.zf) goto L_10bc2c15;
L_10bc2c1f:;
  /* 10bc2c1f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2c21 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2c22 mov ebp, eax */
  EBP = (EAX);
  /* 10bc2c24 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2c25 call 0x10bc3071 */
  push32(0x10bc2c2au); f_10bc3071();
  /* 10bc2c2a mov esi, eax */
  ESI = (EAX);
  /* 10bc2c2c pop ecx */
  ECX = (pop32());
  /* 10bc2c2d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2c2f jne 0x10bc2c35 */
  if (!C.zf) goto L_10bc2c35;
  /* 10bc2c31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bc2c33 jmp 0x10bc2c40 */
  goto L_10bc2c40;
L_10bc2c35:;
  /* 10bc2c35 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2c36 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2c37 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2c38 call 0x10bc3660 */
  push32(0x10bc2c3du); f_10bc3660();
  /* 10bc2c3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc2c40:;
  /* 10bc2c40 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2c41 call dword ptr [0x10bc5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5078))), 0x10bc2c47u);
  /* 10bc2c47 mov eax, esi */
  EAX = (ESI);
  /* 10bc2c49 jmp 0x10bc2c4d */
  goto L_10bc2c4d;
L_10bc2c4b:;
  /* 10bc2c4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bc2c4d:;
  /* 10bc2c4d pop edi */
  EDI = (pop32());
  /* 10bc2c4e pop esi */
  ESI = (pop32());
  /* 10bc2c4f pop ebp */
  EBP = (pop32());
  /* 10bc2c50 pop ebx */
  EBX = (pop32());
  /* 10bc2c51 pop ecx */
  ECX = (pop32());
  /* 10bc2c52 pop ecx */
  ECX = (pop32());
  /* 10bc2c53 ret  */
  ESPCHK(0x10bc2b22u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c54 @ 0x10bc2c54 (60 bytes, 20 insns) */
void f_10bc2c54(void) {
  FTRACE(0x10bc2c54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2c58 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2c5c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bc2c61 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10bc2c64 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2c65 call dword ptr [0x10bc5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5060))), 0x10bc2c6bu);
  /* 10bc2c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2c6d mov dword ptr [0x10bc6e68], eax */
  w32((uint32_t)(0x10bc6e68), (EAX));
  /* 10bc2c72 je 0x10bc2c89 */
  if (C.zf) goto L_10bc2c89;
  /* 10bc2c74 call 0x10bc3995 */
  push32(0x10bc2c79u); f_10bc3995();
  /* 10bc2c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2c7b jne 0x10bc2c8c */
  if (!C.zf) goto L_10bc2c8c;
  /* 10bc2c7d push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc2c83 call dword ptr [0x10bc5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5058))), 0x10bc2c89u);
L_10bc2c89:;
  /* 10bc2c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc2c8b ret  */
  ESPCHK(0x10bc2c54u, _esp0);
  ESP += 4; return;
L_10bc2c8c:;
  /* 10bc2c8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2c8e pop eax */
  EAX = (pop32());
  /* 10bc2c8f ret  */
  ESPCHK(0x10bc2c54u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c90 @ 0x10bc2c90 (117 bytes, 38 insns) */
void f_10bc2c90(void) {
  FTRACE(0x10bc2c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2c90 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2c91 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc2c93 cmp dword ptr [0x10bc6c40], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bc6c40))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2c99 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2c9a mov ebp, dword ptr [0x10bc504c] */
  EBP = (r32((uint32_t)(0x10bc504c)));
  /* 10bc2ca0 jle 0x10bc2ce6 */
  if ((C.zf||C.sf!=C.of)) goto L_10bc2ce6;
  /* 10bc2ca2 mov eax, dword ptr [0x10bc6c44] */
  EAX = (r32((uint32_t)(0x10bc6c44)));
  /* 10bc2ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2ca9 mov edi, dword ptr [0x10bc5050] */
  EDI = (r32((uint32_t)(0x10bc5050)));
  /* 10bc2caf lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10bc2cb2:;
  /* 10bc2cb2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bc2cb7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10bc2cbc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2cbe call edi */
  call_ind((uint32_t)(EDI), 0x10bc2cc0u);
  /* 10bc2cc0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bc2cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2cc7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2cc9 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2ccbu);
  /* 10bc2ccb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10bc2cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2cd0 push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc2cd6 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc2cd8u);
  /* 10bc2cd8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2cdb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bc2cdc cmp ebx, dword ptr [0x10bc6c40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bc6c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2ce2 jl 0x10bc2cb2 */
  if ((C.sf!=C.of)) goto L_10bc2cb2;
  /* 10bc2ce4 pop edi */
  EDI = (pop32());
  /* 10bc2ce5 pop esi */
  ESI = (pop32());
L_10bc2ce6:;
  /* 10bc2ce6 push dword ptr [0x10bc6c44] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c44))));
  /* 10bc2cec push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2cee push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc2cf4 call ebp */
  call_ind((uint32_t)(EBP), 0x10bc2cf6u);
  /* 10bc2cf6 push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc2cfc call dword ptr [0x10bc5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5058))), 0x10bc2d02u);
  /* 10bc2d02 pop ebp */
  EBP = (pop32());
  /* 10bc2d03 pop ebx */
  EBX = (pop32());
  /* 10bc2d04 ret  */
  ESPCHK(0x10bc2c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d05 @ 0x10bc2d05 (57 bytes, 18 insns) */
void f_10bc2d05(void) {
  FTRACE(0x10bc2d05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2d05 mov eax, dword ptr [0x10bc6a38] */
  EAX = (r32((uint32_t)(0x10bc6a38)));
  /* 10bc2d0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d0d je 0x10bc2d1c */
  if (C.zf) goto L_10bc2d1c;
  /* 10bc2d0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2d11 jne 0x10bc2d3d */
  if (!C.zf) goto L_10bc2d3d;
  /* 10bc2d13 cmp dword ptr [0x10bc6a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d1a jne 0x10bc2d3d */
  if (!C.zf) goto L_10bc2d3d;
L_10bc2d1c:;
  /* 10bc2d1c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10bc2d21 call 0x10bc2d3e */
  push32(0x10bc2d26u); f_10bc2d3e();
  /* 10bc2d26 mov eax, dword ptr [0x10bc6b8c] */
  EAX = (r32((uint32_t)(0x10bc6b8c)));
  /* 10bc2d2b pop ecx */
  ECX = (pop32());
  /* 10bc2d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2d2e je 0x10bc2d32 */
  if (C.zf) goto L_10bc2d32;
  /* 10bc2d30 call eax */
  call_ind((uint32_t)(EAX), 0x10bc2d32u);
L_10bc2d32:;
  /* 10bc2d32 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bc2d37 call 0x10bc2d3e */
  push32(0x10bc2d3cu); f_10bc2d3e();
  /* 10bc2d3c pop ecx */
  ECX = (pop32());
L_10bc2d3d:;
  /* 10bc2d3d ret  */
  ESPCHK(0x10bc2d05u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d3e @ 0x10bc2d3e (339 bytes, 100 insns) */
void f_10bc2d3e(void) {
  FTRACE(0x10bc2d3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2d3e push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2d3f mov ebp, esp */
  EBP = (ESP);
  /* 10bc2d41 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2d47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc2d4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bc2d4c mov eax, 0x10bc6580 */
  EAX = (0x10bc6580u);
L_10bc2d51:;
  /* 10bc2d51 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d53 je 0x10bc2d60 */
  if (C.zf) goto L_10bc2d60;
  /* 10bc2d55 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2d58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc2d59 cmp eax, 0x10bc6610 */
  { uint32_t _a=(EAX),_b=(0x10bc6610u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d5e jl 0x10bc2d51 */
  if ((C.sf!=C.of)) goto L_10bc2d51;
L_10bc2d60:;
  /* 10bc2d60 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2d61 mov esi, ecx */
  ESI = (ECX);
  /* 10bc2d63 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10bc2d66 cmp edx, dword ptr [esi + 0x10bc6580] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10bc6580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d6c jne 0x10bc2e8e */
  if (!C.zf) goto L_10bc2e8e;
  /* 10bc2d72 mov eax, dword ptr [0x10bc6a38] */
  EAX = (r32((uint32_t)(0x10bc6a38)));
  /* 10bc2d77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d7a je 0x10bc2e68 */
  if (C.zf) goto L_10bc2e68;
  /* 10bc2d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2d82 jne 0x10bc2d91 */
  if (!C.zf) goto L_10bc2d91;
  /* 10bc2d84 cmp dword ptr [0x10bc6a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d8b je 0x10bc2e68 */
  if (C.zf) goto L_10bc2e68;
L_10bc2d91:;
  /* 10bc2d91 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2d97 je 0x10bc2e8e */
  if (C.zf) goto L_10bc2e8e;
  /* 10bc2d9d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bc2da3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bc2da8 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2dab call dword ptr [0x10bc5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5070))), 0x10bc2db1u);
  /* 10bc2db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2db3 jne 0x10bc2dc8 */
  if (!C.zf) goto L_10bc2dc8;
  /* 10bc2db5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bc2dbb push 0x10bc5418 */
  push32((uint32_t)(0x10bc5418u));
  /* 10bc2dc0 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2dc1 call 0x10bc3100 */
  push32(0x10bc2dc6u); f_10bc3100();
  /* 10bc2dc6 pop ecx */
  ECX = (pop32());
  /* 10bc2dc7 pop ecx */
  ECX = (pop32());
L_10bc2dc8:;
  /* 10bc2dc8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bc2dce push edi */
  push32((uint32_t)(EDI));
  /* 10bc2dcf push eax */
  push32((uint32_t)(EAX));
  /* 10bc2dd0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10bc2dd6 call 0x10bc31f0 */
  push32(0x10bc2ddbu); f_10bc31f0();
  /* 10bc2ddb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc2ddc pop ecx */
  ECX = (pop32());
  /* 10bc2ddd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2de0 jbe 0x10bc2e0b */
  if ((C.cf||C.zf)) goto L_10bc2e0b;
  /* 10bc2de2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bc2de8 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2de9 call 0x10bc31f0 */
  push32(0x10bc2deeu); f_10bc31f0();
  /* 10bc2dee mov edi, eax */
  EDI = (EAX);
  /* 10bc2df0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10bc2df6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc2df9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bc2dfb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2dfd push 0x10bc5414 */
  push32((uint32_t)(0x10bc5414u));
  /* 10bc2e02 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2e03 call 0x10bc4270 */
  push32(0x10bc2e08u); f_10bc4270();
  /* 10bc2e08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc2e0b:;
  /* 10bc2e0b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bc2e11 push 0x10bc53f8 */
  push32((uint32_t)(0x10bc53f8u));
  /* 10bc2e16 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e17 call 0x10bc3100 */
  push32(0x10bc2e1cu); f_10bc3100();
  /* 10bc2e1c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bc2e22 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2e23 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e24 call 0x10bc3110 */
  push32(0x10bc2e29u); f_10bc3110();
  /* 10bc2e29 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bc2e2f push 0x10bc53f4 */
  push32((uint32_t)(0x10bc53f4u));
  /* 10bc2e34 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e35 call 0x10bc3110 */
  push32(0x10bc2e3au); f_10bc3110();
  /* 10bc2e3a push dword ptr [esi + 0x10bc6584] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10bc6584))));
  /* 10bc2e40 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bc2e46 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e47 call 0x10bc3110 */
  push32(0x10bc2e4cu); f_10bc3110();
  /* 10bc2e4c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10bc2e51 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10bc2e57 push 0x10bc53cc */
  push32((uint32_t)(0x10bc53ccu));
  /* 10bc2e5c push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e5d call 0x10bc41de */
  push32(0x10bc2e62u); f_10bc41de();
  /* 10bc2e62 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2e65 pop edi */
  EDI = (pop32());
  /* 10bc2e66 jmp 0x10bc2e8e */
  goto L_10bc2e8e;
L_10bc2e68:;
  /* 10bc2e68 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10bc2e6b lea esi, [esi + 0x10bc6584] */
  ESI = ((uint32_t)(ESI + 0x10bc6584));
  /* 10bc2e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc2e73 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e74 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2e76 call 0x10bc31f0 */
  push32(0x10bc2e7bu); f_10bc31f0();
  /* 10bc2e7b pop ecx */
  ECX = (pop32());
  /* 10bc2e7c push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e7d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2e7f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10bc2e81 call dword ptr [0x10bc50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc50a4))), 0x10bc2e87u);
  /* 10bc2e87 push eax */
  push32((uint32_t)(EAX));
  /* 10bc2e88 call dword ptr [0x10bc5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5054))), 0x10bc2e8eu);
L_10bc2e8e:;
  /* 10bc2e8e pop esi */
  ESI = (pop32());
  /* 10bc2e8f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc2e90 ret  */
  ESPCHK(0x10bc2d3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e91 @ 0x10bc2e91 (41 bytes, 12 insns) */
void f_10bc2e91(void) {
  FTRACE(0x10bc2e91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2e91 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2e92 mov esi, dword ptr [0x10bc5044] */
  ESI = (r32((uint32_t)(0x10bc5044)));
  /* 10bc2e98 push dword ptr [0x10bc6654] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6654))));
  /* 10bc2e9e call esi */
  call_ind((uint32_t)(ESI), 0x10bc2ea0u);
  /* 10bc2ea0 push dword ptr [0x10bc6644] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6644))));
  /* 10bc2ea6 call esi */
  call_ind((uint32_t)(ESI), 0x10bc2ea8u);
  /* 10bc2ea8 push dword ptr [0x10bc6634] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6634))));
  /* 10bc2eae call esi */
  call_ind((uint32_t)(ESI), 0x10bc2eb0u);
  /* 10bc2eb0 push dword ptr [0x10bc6614] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6614))));
  /* 10bc2eb6 call esi */
  call_ind((uint32_t)(ESI), 0x10bc2eb8u);
  /* 10bc2eb8 pop esi */
  ESI = (pop32());
  /* 10bc2eb9 ret  */
  ESPCHK(0x10bc2e91u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eba @ 0x10bc2eba (108 bytes, 34 insns) */
void f_10bc2eba(void) {
  FTRACE(0x10bc2ebau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2eba push esi */
  push32((uint32_t)(ESI));
  /* 10bc2ebb push edi */
  push32((uint32_t)(EDI));
  /* 10bc2ebc mov edi, dword ptr [0x10bc5074] */
  EDI = (r32((uint32_t)(0x10bc5074)));
  /* 10bc2ec2 mov esi, 0x10bc6610 */
  ESI = (0x10bc6610u);
L_10bc2ec7:;
  /* 10bc2ec7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bc2ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc2ecb je 0x10bc2ef8 */
  if (C.zf) goto L_10bc2ef8;
  /* 10bc2ecd cmp esi, 0x10bc6654 */
  { uint32_t _a=(ESI),_b=(0x10bc6654u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2ed3 je 0x10bc2ef8 */
  if (C.zf) goto L_10bc2ef8;
  /* 10bc2ed5 cmp esi, 0x10bc6644 */
  { uint32_t _a=(ESI),_b=(0x10bc6644u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2edb je 0x10bc2ef8 */
  if (C.zf) goto L_10bc2ef8;
  /* 10bc2edd cmp esi, 0x10bc6634 */
  { uint32_t _a=(ESI),_b=(0x10bc6634u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2ee3 je 0x10bc2ef8 */
  if (C.zf) goto L_10bc2ef8;
  /* 10bc2ee5 cmp esi, 0x10bc6614 */
  { uint32_t _a=(ESI),_b=(0x10bc6614u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2eeb je 0x10bc2ef8 */
  if (C.zf) goto L_10bc2ef8;
  /* 10bc2eed push eax */
  push32((uint32_t)(EAX));
  /* 10bc2eee call edi */
  call_ind((uint32_t)(EDI), 0x10bc2ef0u);
  /* 10bc2ef0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2ef2 call 0x10bc3029 */
  push32(0x10bc2ef7u); f_10bc3029();
  /* 10bc2ef7 pop ecx */
  ECX = (pop32());
L_10bc2ef8:;
  /* 10bc2ef8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2efb cmp esi, 0x10bc66d0 */
  { uint32_t _a=(ESI),_b=(0x10bc66d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2f01 jl 0x10bc2ec7 */
  if ((C.sf!=C.of)) goto L_10bc2ec7;
  /* 10bc2f03 push dword ptr [0x10bc6634] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6634))));
  /* 10bc2f09 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2f0bu);
  /* 10bc2f0b push dword ptr [0x10bc6644] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6644))));
  /* 10bc2f11 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2f13u);
  /* 10bc2f13 push dword ptr [0x10bc6654] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6654))));
  /* 10bc2f19 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2f1bu);
  /* 10bc2f1b push dword ptr [0x10bc6614] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6614))));
  /* 10bc2f21 call edi */
  call_ind((uint32_t)(EDI), 0x10bc2f23u);
  /* 10bc2f23 pop edi */
  EDI = (pop32());
  /* 10bc2f24 pop esi */
  ESI = (pop32());
  /* 10bc2f25 ret  */
  ESPCHK(0x10bc2ebau, _esp0);
  ESP += 4; return;
}

/* FUN_10002f26 @ 0x10bc2f26 (97 bytes, 37 insns) */
void f_10bc2f26(void) {
  FTRACE(0x10bc2f26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2f26 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2f27 mov ebp, esp */
  EBP = (ESP);
  /* 10bc2f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc2f2c push esi */
  push32((uint32_t)(ESI));
  /* 10bc2f2d cmp dword ptr [eax*4 + 0x10bc6610], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10bc6610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2f35 lea esi, [eax*4 + 0x10bc6610] */
  ESI = ((uint32_t)(EAX*4 + 0x10bc6610));
  /* 10bc2f3c jne 0x10bc2f7c */
  if (!C.zf) goto L_10bc2f7c;
  /* 10bc2f3e push edi */
  push32((uint32_t)(EDI));
  /* 10bc2f3f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bc2f41 call 0x10bc3071 */
  push32(0x10bc2f46u); f_10bc3071();
  /* 10bc2f46 mov edi, eax */
  EDI = (EAX);
  /* 10bc2f48 pop ecx */
  ECX = (pop32());
  /* 10bc2f49 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc2f4b jne 0x10bc2f55 */
  if (!C.zf) goto L_10bc2f55;
  /* 10bc2f4d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bc2f4f call 0x10bc2396 */
  push32(0x10bc2f54u); f_10bc2396();
  /* 10bc2f54 pop ecx */
  ECX = (pop32());
L_10bc2f55:;
  /* 10bc2f55 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bc2f57 call 0x10bc2f26 */
  push32(0x10bc2f5cu); f_10bc2f26();
  /* 10bc2f5c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2f5f pop ecx */
  ECX = (pop32());
  /* 10bc2f60 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2f61 jne 0x10bc2f6d */
  if (!C.zf) goto L_10bc2f6d;
  /* 10bc2f63 call dword ptr [0x10bc5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5044))), 0x10bc2f69u);
  /* 10bc2f69 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bc2f6b jmp 0x10bc2f73 */
  goto L_10bc2f73;
L_10bc2f6d:;
  /* 10bc2f6d call 0x10bc3029 */
  push32(0x10bc2f72u); f_10bc3029();
  /* 10bc2f72 pop ecx */
  ECX = (pop32());
L_10bc2f73:;
  /* 10bc2f73 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bc2f75 call 0x10bc2f87 */
  push32(0x10bc2f7au); f_10bc2f87();
  /* 10bc2f7a pop ecx */
  ECX = (pop32());
  /* 10bc2f7b pop edi */
  EDI = (pop32());
L_10bc2f7c:;
  /* 10bc2f7c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10bc2f7e call dword ptr [0x10bc5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5040))), 0x10bc2f84u);
  /* 10bc2f84 pop esi */
  ESI = (pop32());
  /* 10bc2f85 pop ebp */
  EBP = (pop32());
  /* 10bc2f86 ret  */
  ESPCHK(0x10bc2f26u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f87 @ 0x10bc2f87 (21 bytes, 7 insns) */
void f_10bc2f87(void) {
  FTRACE(0x10bc2f87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2f87 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc2f88 mov ebp, esp */
  EBP = (ESP);
  /* 10bc2f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc2f8d push dword ptr [eax*4 + 0x10bc6610] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10bc6610))));
  /* 10bc2f94 call dword ptr [0x10bc5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5048))), 0x10bc2f9au);
  /* 10bc2f9a pop ebp */
  EBP = (pop32());
  /* 10bc2f9b ret  */
  ESPCHK(0x10bc2f87u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f9c @ 0x10bc2f9c (141 bytes, 56 insns) */
void f_10bc2f9c(void) {
  FTRACE(0x10bc2f9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc2f9c push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2f9d push esi */
  push32((uint32_t)(ESI));
  /* 10bc2f9e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10bc2fa2 push edi */
  push32((uint32_t)(EDI));
  /* 10bc2fa3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bc2fa8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2fab mov ebx, esi */
  EBX = (ESI);
  /* 10bc2fad ja 0x10bc2fbc */
  if ((!C.cf&&!C.zf)) goto L_10bc2fbc;
  /* 10bc2faf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc2fb1 jne 0x10bc2fb6 */
  if (!C.zf) goto L_10bc2fb6;
  /* 10bc2fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc2fb5 pop esi */
  ESI = (pop32());
L_10bc2fb6:;
  /* 10bc2fb6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2fb9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10bc2fbc:;
  /* 10bc2fbc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc2fbe cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2fc1 ja 0x10bc2ffd */
  if ((!C.cf&&!C.zf)) goto L_10bc2ffd;
  /* 10bc2fc3 cmp ebx, dword ptr [0x10bc6860] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bc6860))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc2fc9 ja 0x10bc2fe8 */
  if ((!C.cf&&!C.zf)) goto L_10bc2fe8;
  /* 10bc2fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc2fcd call 0x10bc2f26 */
  push32(0x10bc2fd2u); f_10bc2f26();
  /* 10bc2fd2 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc2fd3 call 0x10bc3d29 */
  push32(0x10bc2fd8u); f_10bc3d29();
  /* 10bc2fd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc2fda mov edi, eax */
  EDI = (EAX);
  /* 10bc2fdc call 0x10bc2f87 */
  push32(0x10bc2fe1u); f_10bc2f87();
  /* 10bc2fe1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc2fe4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc2fe6 jne 0x10bc3013 */
  if (!C.zf) goto L_10bc3013;
L_10bc2fe8:;
  /* 10bc2fe8 push esi */
  push32((uint32_t)(ESI));
  /* 10bc2fe9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bc2feb push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc2ff1 call dword ptr [0x10bc503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc503c))), 0x10bc2ff7u);
  /* 10bc2ff7 mov edi, eax */
  EDI = (EAX);
  /* 10bc2ff9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc2ffb jne 0x10bc301f */
  if (!C.zf) goto L_10bc301f;
L_10bc2ffd:;
  /* 10bc2ffd cmp dword ptr [0x10bc6c04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6c04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3004 je 0x10bc301f */
  if (C.zf) goto L_10bc301f;
  /* 10bc3006 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3007 call 0x10bc43c8 */
  push32(0x10bc300cu); f_10bc43c8();
  /* 10bc300c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc300e pop ecx */
  ECX = (pop32());
  /* 10bc300f je 0x10bc3025 */
  if (C.zf) goto L_10bc3025;
  /* 10bc3011 jmp 0x10bc2fbc */
  goto L_10bc2fbc;
L_10bc3013:;
  /* 10bc3013 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc3016 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3017 call 0x10bc4370 */
  push32(0x10bc301cu); f_10bc4370();
  /* 10bc301c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bc301f:;
  /* 10bc301f mov eax, edi */
  EAX = (EDI);
L_10bc3021:;
  /* 10bc3021 pop edi */
  EDI = (pop32());
  /* 10bc3022 pop esi */
  ESI = (pop32());
  /* 10bc3023 pop ebx */
  EBX = (pop32());
  /* 10bc3024 ret  */
  ESPCHK(0x10bc2f9cu, _esp0);
  ESP += 4; return;
L_10bc3025:;
  /* 10bc3025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc3027 jmp 0x10bc3021 */
  goto L_10bc3021;
}

/* FUN_10003029 @ 0x10bc3029 (72 bytes, 29 insns) */
void f_10bc3029(void) {
  FTRACE(0x10bc3029u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3029 push esi */
  push32((uint32_t)(ESI));
  /* 10bc302a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc302e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc3030 je 0x10bc306f */
  if (C.zf) goto L_10bc306f;
  /* 10bc3032 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc3034 call 0x10bc2f26 */
  push32(0x10bc3039u); f_10bc2f26();
  /* 10bc3039 push esi */
  push32((uint32_t)(ESI));
  /* 10bc303a call 0x10bc39d3 */
  push32(0x10bc303fu); f_10bc39d3();
  /* 10bc303f pop ecx */
  ECX = (pop32());
  /* 10bc3040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc3042 pop ecx */
  ECX = (pop32());
  /* 10bc3043 je 0x10bc3058 */
  if (C.zf) goto L_10bc3058;
  /* 10bc3045 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3046 push eax */
  push32((uint32_t)(EAX));
  /* 10bc3047 call 0x10bc39fe */
  push32(0x10bc304cu); f_10bc39fe();
  /* 10bc304c push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc304e call 0x10bc2f87 */
  push32(0x10bc3053u); f_10bc2f87();
  /* 10bc3053 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3056 pop esi */
  ESI = (pop32());
  /* 10bc3057 ret  */
  ESPCHK(0x10bc3029u, _esp0);
  ESP += 4; return;
L_10bc3058:;
  /* 10bc3058 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc305a call 0x10bc2f87 */
  push32(0x10bc305fu); f_10bc2f87();
  /* 10bc305f pop ecx */
  ECX = (pop32());
  /* 10bc3060 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3061 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc3063 push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc3069 call dword ptr [0x10bc504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc504c))), 0x10bc306fu);
L_10bc306f:;
  /* 10bc306f pop esi */
  ESI = (pop32());
  /* 10bc3070 ret  */
  ESPCHK(0x10bc3029u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10bc3071 (18 bytes, 6 insns) */
void f_10bc3071(void) {
  FTRACE(0x10bc3071u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3071 push dword ptr [0x10bc6c04] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c04))));
  /* 10bc3077 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10bc307b call 0x10bc3083 */
  push32(0x10bc3080u); f_10bc3083();
  /* 10bc3080 pop ecx */
  ECX = (pop32());
  /* 10bc3081 pop ecx */
  ECX = (pop32());
  /* 10bc3082 ret  */
  ESPCHK(0x10bc3071u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10bc3083 (44 bytes, 16 insns) */
void f_10bc3083(void) {
  FTRACE(0x10bc3083u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3083 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3088 ja 0x10bc30ac */
  if ((!C.cf&&!C.zf)) goto L_10bc30ac;
L_10bc308a:;
  /* 10bc308a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bc308e call 0x10bc30af */
  push32(0x10bc3093u); f_10bc30af();
  /* 10bc3093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc3095 pop ecx */
  ECX = (pop32());
  /* 10bc3096 jne 0x10bc30ae */
  if (!C.zf) goto L_10bc30ae;
  /* 10bc3098 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc309c je 0x10bc30ae */
  if (C.zf) goto L_10bc30ae;
  /* 10bc309e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bc30a2 call 0x10bc43c8 */
  push32(0x10bc30a7u); f_10bc43c8();
  /* 10bc30a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc30a9 pop ecx */
  ECX = (pop32());
  /* 10bc30aa jne 0x10bc308a */
  if (!C.zf) goto L_10bc308a;
L_10bc30ac:;
  /* 10bc30ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bc30ae:;
  /* 10bc30ae ret  */
  ESPCHK(0x10bc3083u, _esp0);
  ESP += 4; return;
}

/* FUN_100030af @ 0x10bc30af (78 bytes, 30 insns) */
void f_10bc30af(void) {
  FTRACE(0x10bc30afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc30af push esi */
  push32((uint32_t)(ESI));
  /* 10bc30b0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc30b4 cmp esi, dword ptr [0x10bc6860] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10bc6860))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc30ba push edi */
  push32((uint32_t)(EDI));
  /* 10bc30bb ja 0x10bc30de */
  if ((!C.cf&&!C.zf)) goto L_10bc30de;
  /* 10bc30bd push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc30bf call 0x10bc2f26 */
  push32(0x10bc30c4u); f_10bc2f26();
  /* 10bc30c4 push esi */
  push32((uint32_t)(ESI));
  /* 10bc30c5 call 0x10bc3d29 */
  push32(0x10bc30cau); f_10bc3d29();
  /* 10bc30ca push 9 */
  push32((uint32_t)(0x9u));
  /* 10bc30cc mov edi, eax */
  EDI = (EAX);
  /* 10bc30ce call 0x10bc2f87 */
  push32(0x10bc30d3u); f_10bc2f87();
  /* 10bc30d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc30d6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10bc30d8 je 0x10bc30de */
  if (C.zf) goto L_10bc30de;
  /* 10bc30da mov eax, edi */
  EAX = (EDI);
  /* 10bc30dc jmp 0x10bc30fa */
  goto L_10bc30fa;
L_10bc30de:;
  /* 10bc30de test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc30e0 jne 0x10bc30e5 */
  if (!C.zf) goto L_10bc30e5;
  /* 10bc30e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc30e4 pop esi */
  ESI = (pop32());
L_10bc30e5:;
  /* 10bc30e5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc30e8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10bc30eb push esi */
  push32((uint32_t)(ESI));
  /* 10bc30ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc30ee push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc30f4 call dword ptr [0x10bc503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc503c))), 0x10bc30fau);
L_10bc30fa:;
  /* 10bc30fa pop edi */
  EDI = (pop32());
  /* 10bc30fb pop esi */
  ESI = (pop32());
  /* 10bc30fc ret  */
  ESPCHK(0x10bc30afu, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x10bc3100 (7 bytes, 3 insns) */
void f_10bc3100(void) {
  FTRACE(0x10bc3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3100 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3101 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc3105 jmp 0x10bc3171 */
  jmp_ind(0x10bc3171u); return;
}

/* FUN_10003110 @ 0x10bc3110 (224 bytes, 84 insns) */
void f_10bc3110(void) {
  FTRACE(0x10bc3110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3110 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc3114 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3115 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bc311b je 0x10bc312c */
  if (C.zf) goto L_10bc312c;
L_10bc311d:;
  /* 10bc311d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10bc311f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc3120 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc3122 je 0x10bc315f */
  if (C.zf) goto L_10bc315f;
  /* 10bc3124 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bc312a jne 0x10bc311d */
  if (!C.zf) goto L_10bc311d;
L_10bc312c:;
  /* 10bc312c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bc312e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bc3133 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3135 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc3138 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc313a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc313d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bc3142 je 0x10bc312c */
  if (C.zf) goto L_10bc312c;
  /* 10bc3144 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bc3147 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc3149 je 0x10bc316e */
  if (C.zf) goto L_10bc316e;
  /* 10bc314b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10bc314d je 0x10bc3169 */
  if (C.zf) goto L_10bc3169;
  /* 10bc314f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bc3154 je 0x10bc3164 */
  if (C.zf) goto L_10bc3164;
  /* 10bc3156 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bc315b je 0x10bc315f */
  if (C.zf) goto L_10bc315f;
  /* 10bc315d jmp 0x10bc312c */
  goto L_10bc312c;
L_10bc315f:;
  /* 10bc315f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10bc3162 jmp 0x10bc3171 */
  goto L_10bc3171;
L_10bc3164:;
  /* 10bc3164 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10bc3167 jmp 0x10bc3171 */
  goto L_10bc3171;
L_10bc3169:;
  /* 10bc3169 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10bc316c jmp 0x10bc3171 */
  goto L_10bc3171;
L_10bc316e:;
  /* 10bc316e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10bc3171:;
  /* 10bc3171 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bc3175 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bc317b je 0x10bc3196 */
  if (C.zf) goto L_10bc3196;
L_10bc317d:;
  /* 10bc317d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bc317f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc3180 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc3182 je 0x10bc31e8 */
  if (C.zf) goto L_10bc31e8;
  /* 10bc3184 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10bc3186 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc3187 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bc318d jne 0x10bc317d */
  if (!C.zf) goto L_10bc317d;
  /* 10bc318f jmp 0x10bc3196 */
  goto L_10bc3196;
L_10bc3191:;
  /* 10bc3191 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bc3193 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bc3196:;
  /* 10bc3196 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bc319b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bc319d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc319f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc31a2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc31a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bc31a6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc31a9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bc31ae je 0x10bc3191 */
  if (C.zf) goto L_10bc3191;
  /* 10bc31b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc31b2 je 0x10bc31e8 */
  if (C.zf) goto L_10bc31e8;
  /* 10bc31b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10bc31b6 je 0x10bc31df */
  if (C.zf) goto L_10bc31df;
  /* 10bc31b8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bc31be je 0x10bc31d2 */
  if (C.zf) goto L_10bc31d2;
  /* 10bc31c0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bc31c6 je 0x10bc31ca */
  if (C.zf) goto L_10bc31ca;
  /* 10bc31c8 jmp 0x10bc3191 */
  goto L_10bc3191;
L_10bc31ca:;
  /* 10bc31ca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bc31cc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc31d0 pop edi */
  EDI = (pop32());
  /* 10bc31d1 ret  */
  ESPCHK(0x10bc3110u, _esp0);
  ESP += 4; return;
L_10bc31d2:;
  /* 10bc31d2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10bc31d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc31d9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10bc31dd pop edi */
  EDI = (pop32());
  /* 10bc31de ret  */
  ESPCHK(0x10bc3110u, _esp0);
  ESP += 4; return;
L_10bc31df:;
  /* 10bc31df mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10bc31e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc31e6 pop edi */
  EDI = (pop32());
  /* 10bc31e7 ret  */
  ESPCHK(0x10bc3110u, _esp0);
  ESP += 4; return;
L_10bc31e8:;
  /* 10bc31e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10bc31ea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc31ee pop edi */
  EDI = (pop32());
  /* 10bc31ef ret  */
  ESPCHK(0x10bc3110u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10bc31f0 (123 bytes, 44 insns) */
void f_10bc31f0(void) {
  FTRACE(0x10bc31f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc31f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc31f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bc31fa je 0x10bc3210 */
  if (C.zf) goto L_10bc3210;
L_10bc31fc:;
  /* 10bc31fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10bc31fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc31ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc3201 je 0x10bc3243 */
  if (C.zf) goto L_10bc3243;
  /* 10bc3203 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bc3209 jne 0x10bc31fc */
  if (!C.zf) goto L_10bc31fc;
  /* 10bc320b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bc3210:;
  /* 10bc3210 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bc3212 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bc3217 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3219 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc321c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc321e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3221 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bc3226 je 0x10bc3210 */
  if (C.zf) goto L_10bc3210;
  /* 10bc3228 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bc322b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc322d je 0x10bc3261 */
  if (C.zf) goto L_10bc3261;
  /* 10bc322f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10bc3231 je 0x10bc3257 */
  if (C.zf) goto L_10bc3257;
  /* 10bc3233 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bc3238 je 0x10bc324d */
  if (C.zf) goto L_10bc324d;
  /* 10bc323a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bc323f je 0x10bc3243 */
  if (C.zf) goto L_10bc3243;
  /* 10bc3241 jmp 0x10bc3210 */
  goto L_10bc3210;
L_10bc3243:;
  /* 10bc3243 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10bc3246 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc324a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc324c ret  */
  ESPCHK(0x10bc31f0u, _esp0);
  ESP += 4; return;
L_10bc324d:;
  /* 10bc324d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10bc3250 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc3254 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3256 ret  */
  ESPCHK(0x10bc31f0u, _esp0);
  ESP += 4; return;
L_10bc3257:;
  /* 10bc3257 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10bc325a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc325e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3260 ret  */
  ESPCHK(0x10bc31f0u, _esp0);
  ESP += 4; return;
L_10bc3261:;
  /* 10bc3261 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10bc3264 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc3268 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc326a ret  */
  ESPCHK(0x10bc31f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000326b @ 0x10bc326b (429 bytes, 143 insns) */
void f_10bc326b(void) {
  FTRACE(0x10bc326bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc326b push ebp */
  push32((uint32_t)(EBP));
  /* 10bc326c mov ebp, esp */
  EBP = (ESP);
  /* 10bc326e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3271 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3272 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3273 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3274 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bc3276 call 0x10bc2f26 */
  push32(0x10bc327bu); f_10bc2f26();
  /* 10bc327b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc327e call 0x10bc3418 */
  push32(0x10bc3283u); f_10bc3418();
  /* 10bc3283 mov ebx, eax */
  EBX = (EAX);
  /* 10bc3285 pop ecx */
  ECX = (pop32());
  /* 10bc3286 cmp ebx, dword ptr [0x10bc6c48] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bc6c48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc328c pop ecx */
  ECX = (pop32());
  /* 10bc328d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3290 jne 0x10bc3299 */
  if (!C.zf) goto L_10bc3299;
L_10bc3292:;
  /* 10bc3292 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bc3294 jmp 0x10bc3409 */
  goto L_10bc3409;
L_10bc3299:;
  /* 10bc3299 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bc329b je 0x10bc33f7 */
  if (C.zf) goto L_10bc33f7;
  /* 10bc32a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc32a3 mov eax, 0x10bc6768 */
  EAX = (0x10bc6768u);
L_10bc32a8:;
  /* 10bc32a8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc32aa je 0x10bc3320 */
  if (C.zf) goto L_10bc3320;
  /* 10bc32ac add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc32af inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bc32b0 cmp eax, 0x10bc6858 */
  { uint32_t _a=(EAX),_b=(0x10bc6858u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc32b5 jl 0x10bc32a8 */
  if ((C.sf!=C.of)) goto L_10bc32a8;
  /* 10bc32b7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10bc32ba push eax */
  push32((uint32_t)(EAX));
  /* 10bc32bb push ebx */
  push32((uint32_t)(EBX));
  /* 10bc32bc call dword ptr [0x10bc5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5034))), 0x10bc32c2u);
  /* 10bc32c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc32c4 pop esi */
  ESI = (pop32());
  /* 10bc32c5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc32c7 jne 0x10bc33ee */
  if (!C.zf) goto L_10bc33ee;
  /* 10bc32cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bc32cf and dword ptr [0x10bc6e64], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bc6e64)))&(0x0u); w32((uint32_t)(0x10bc6e64), (_r)); fl_logic(_r,32); }
  /* 10bc32d6 pop ecx */
  ECX = (pop32());
  /* 10bc32d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc32d9 mov edi, 0x10bc6d60 */
  EDI = (0x10bc6d60u);
  /* 10bc32de cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc32e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bc32e3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bc32e4 mov dword ptr [0x10bc6c48], ebx */
  w32((uint32_t)(0x10bc6c48), (EBX));
  /* 10bc32ea jbe 0x10bc33db */
  if ((C.cf||C.zf)) goto L_10bc33db;
  /* 10bc32f0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc32f4 je 0x10bc33b6 */
  if (C.zf) goto L_10bc33b6;
  /* 10bc32fa lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10bc32fd:;
  /* 10bc32fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bc32ff test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc3301 je 0x10bc33b6 */
  if (C.zf) goto L_10bc33b6;
  /* 10bc3307 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10bc330b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10bc330e:;
  /* 10bc330e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3310 ja 0x10bc33aa */
  if ((!C.cf&&!C.zf)) goto L_10bc33aa;
  /* 10bc3316 or byte ptr [eax + 0x10bc6d61], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(0x4u); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc331d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc331e jmp 0x10bc330e */
  goto L_10bc330e;
L_10bc3320:;
  /* 10bc3320 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc3324 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bc3326 pop ecx */
  ECX = (pop32());
  /* 10bc3327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc3329 mov edi, 0x10bc6d60 */
  EDI = (0x10bc6d60u);
  /* 10bc332e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10bc3331 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bc3333 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10bc3336 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bc3337 lea ebx, [esi + 0x10bc6778] */
  EBX = ((uint32_t)(ESI + 0x10bc6778));
L_10bc333d:;
  /* 10bc333d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc3340 mov ecx, ebx */
  ECX = (EBX);
  /* 10bc3342 je 0x10bc3370 */
  if (C.zf) goto L_10bc3370;
L_10bc3344:;
  /* 10bc3344 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10bc3347 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc3349 je 0x10bc3370 */
  if (C.zf) goto L_10bc3370;
  /* 10bc334b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10bc334e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10bc3351 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3353 ja 0x10bc3369 */
  if ((!C.cf&&!C.zf)) goto L_10bc3369;
  /* 10bc3355 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3358 mov dl, byte ptr [edx + 0x10bc6760] */
  DL = (r8((uint32_t)(EDX + 0x10bc6760)));
L_10bc335e:;
  /* 10bc335e or byte ptr [eax + 0x10bc6d61], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(DL); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc3364 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc3365 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3367 jbe 0x10bc335e */
  if ((C.cf||C.zf)) goto L_10bc335e;
L_10bc3369:;
  /* 10bc3369 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc336a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc336b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc336e jne 0x10bc3344 */
  if (!C.zf) goto L_10bc3344;
L_10bc3370:;
  /* 10bc3370 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10bc3373 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3376 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc337a jb 0x10bc333d */
  if (C.cf) goto L_10bc333d;
  /* 10bc337c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc337f mov dword ptr [0x10bc6c5c], 1 */
  w32((uint32_t)(0x10bc6c5c), (0x1u));
  /* 10bc3389 push eax */
  push32((uint32_t)(EAX));
  /* 10bc338a mov dword ptr [0x10bc6c48], eax */
  w32((uint32_t)(0x10bc6c48), (EAX));
  /* 10bc338f call 0x10bc3462 */
  push32(0x10bc3394u); f_10bc3462();
  /* 10bc3394 lea esi, [esi + 0x10bc676c] */
  ESI = ((uint32_t)(ESI + 0x10bc676c));
  /* 10bc339a mov edi, 0x10bc6c50 */
  EDI = (0x10bc6c50u);
  /* 10bc339f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10bc33a0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10bc33a1 pop ecx */
  ECX = (pop32());
  /* 10bc33a2 mov dword ptr [0x10bc6e64], eax */
  w32((uint32_t)(0x10bc6e64), (EAX));
  /* 10bc33a7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10bc33a8 jmp 0x10bc33fc */
  goto L_10bc33fc;
L_10bc33aa:;
  /* 10bc33aa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc33ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc33ac cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc33b0 jne 0x10bc32fd */
  if (!C.zf) goto L_10bc32fd;
L_10bc33b6:;
  /* 10bc33b6 mov eax, esi */
  EAX = (ESI);
L_10bc33b8:;
  /* 10bc33b8 or byte ptr [eax + 0x10bc6d61], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(0x8u); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc33bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc33c0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc33c5 jb 0x10bc33b8 */
  if (C.cf) goto L_10bc33b8;
  /* 10bc33c7 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc33c8 call 0x10bc3462 */
  push32(0x10bc33cdu); f_10bc3462();
  /* 10bc33cd pop ecx */
  ECX = (pop32());
  /* 10bc33ce mov dword ptr [0x10bc6e64], eax */
  w32((uint32_t)(0x10bc6e64), (EAX));
  /* 10bc33d3 mov dword ptr [0x10bc6c5c], esi */
  w32((uint32_t)(0x10bc6c5c), (ESI));
  /* 10bc33d9 jmp 0x10bc33e2 */
  goto L_10bc33e2;
L_10bc33db:;
  /* 10bc33db and dword ptr [0x10bc6c5c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bc6c5c)))&(0x0u); w32((uint32_t)(0x10bc6c5c), (_r)); fl_logic(_r,32); }
L_10bc33e2:;
  /* 10bc33e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc33e4 mov edi, 0x10bc6c50 */
  EDI = (0x10bc6c50u);
  /* 10bc33e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bc33ea stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bc33eb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bc33ec jmp 0x10bc33fc */
  goto L_10bc33fc;
L_10bc33ee:;
  /* 10bc33ee cmp dword ptr [0x10bc6bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc33f5 je 0x10bc3406 */
  if (C.zf) goto L_10bc3406;
L_10bc33f7:;
  /* 10bc33f7 call 0x10bc3495 */
  push32(0x10bc33fcu); f_10bc3495();
L_10bc33fc:;
  /* 10bc33fc call 0x10bc34be */
  push32(0x10bc3401u); f_10bc34be();
  /* 10bc3401 jmp 0x10bc3292 */
  goto L_10bc3292;
L_10bc3406:;
  /* 10bc3406 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10bc3409:;
  /* 10bc3409 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bc340b call 0x10bc2f87 */
  push32(0x10bc3410u); f_10bc2f87();
  /* 10bc3410 pop ecx */
  ECX = (pop32());
  /* 10bc3411 mov eax, esi */
  EAX = (ESI);
  /* 10bc3413 pop edi */
  EDI = (pop32());
  /* 10bc3414 pop esi */
  ESI = (pop32());
  /* 10bc3415 pop ebx */
  EBX = (pop32());
  /* 10bc3416 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc3417 ret  */
  ESPCHK(0x10bc326bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003418 @ 0x10bc3418 (74 bytes, 15 insns) */
void f_10bc3418(void) {
  FTRACE(0x10bc3418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3418 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc341c and dword ptr [0x10bc6bf0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bc6bf0)))&(0x0u); w32((uint32_t)(0x10bc6bf0), (_r)); fl_logic(_r,32); }
  /* 10bc3423 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3426 jne 0x10bc3438 */
  if (!C.zf) goto L_10bc3438;
  /* 10bc3428 mov dword ptr [0x10bc6bf0], 1 */
  w32((uint32_t)(0x10bc6bf0), (0x1u));
  /* 10bc3432 jmp dword ptr [0x10bc5038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10bc5038)))); return;
L_10bc3438:;
  /* 10bc3438 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc343b jne 0x10bc344d */
  if (!C.zf) goto L_10bc344d;
  /* 10bc343d mov dword ptr [0x10bc6bf0], 1 */
  w32((uint32_t)(0x10bc6bf0), (0x1u));
  /* 10bc3447 jmp dword ptr [0x10bc5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10bc5030)))); return;
L_10bc344d:;
  /* 10bc344d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3450 jne 0x10bc3461 */
  if (!C.zf) goto L_10bc3461;
  /* 10bc3452 mov eax, dword ptr [0x10bc6c20] */
  EAX = (r32((uint32_t)(0x10bc6c20)));
  /* 10bc3457 mov dword ptr [0x10bc6bf0], 1 */
  w32((uint32_t)(0x10bc6bf0), (0x1u));
L_10bc3461:;
  /* 10bc3461 ret  */
  ESPCHK(0x10bc3418u, _esp0);
  ESP += 4; return;
}

/* FUN_10003462 @ 0x10bc3462 (51 bytes, 19 insns) */
void f_10bc3462(void) {
  FTRACE(0x10bc3462u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3462 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc3466 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc346b je 0x10bc348f */
  if (C.zf) goto L_10bc348f;
  /* 10bc346d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3470 je 0x10bc3489 */
  if (C.zf) goto L_10bc3489;
  /* 10bc3472 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3475 je 0x10bc3483 */
  if (C.zf) goto L_10bc3483;
  /* 10bc3477 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10bc3478 je 0x10bc347d */
  if (C.zf) goto L_10bc347d;
  /* 10bc347a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc347c ret  */
  ESPCHK(0x10bc3462u, _esp0);
  ESP += 4; return;
L_10bc347d:;
  /* 10bc347d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10bc3482 ret  */
  ESPCHK(0x10bc3462u, _esp0);
  ESP += 4; return;
L_10bc3483:;
  /* 10bc3483 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10bc3488 ret  */
  ESPCHK(0x10bc3462u, _esp0);
  ESP += 4; return;
L_10bc3489:;
  /* 10bc3489 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10bc348e ret  */
  ESPCHK(0x10bc3462u, _esp0);
  ESP += 4; return;
L_10bc348f:;
  /* 10bc348f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10bc3494 ret  */
  ESPCHK(0x10bc3462u, _esp0);
  ESP += 4; return;
}

/* FUN_10003495 @ 0x10bc3495 (41 bytes, 17 insns) */
void f_10bc3495(void) {
  FTRACE(0x10bc3495u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3495 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3496 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bc3498 pop ecx */
  ECX = (pop32());
  /* 10bc3499 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc349b mov edi, 0x10bc6d60 */
  EDI = (0x10bc6d60u);
  /* 10bc34a0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bc34a2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bc34a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc34a5 mov edi, 0x10bc6c50 */
  EDI = (0x10bc6c50u);
  /* 10bc34aa mov dword ptr [0x10bc6c48], eax */
  w32((uint32_t)(0x10bc6c48), (EAX));
  /* 10bc34af mov dword ptr [0x10bc6c5c], eax */
  w32((uint32_t)(0x10bc6c5c), (EAX));
  /* 10bc34b4 mov dword ptr [0x10bc6e64], eax */
  w32((uint32_t)(0x10bc6e64), (EAX));
  /* 10bc34b9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bc34ba stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bc34bb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10bc34bc pop edi */
  EDI = (pop32());
  /* 10bc34bd ret  */
  ESPCHK(0x10bc3495u, _esp0);
  ESP += 4; return;
}

/* FUN_100034be @ 0x10bc34be (389 bytes, 124 insns) */
void f_10bc34be(void) {
  FTRACE(0x10bc34beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc34be push ebp */
  push32((uint32_t)(EBP));
  /* 10bc34bf mov ebp, esp */
  EBP = (ESP);
  /* 10bc34c1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc34c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10bc34ca push esi */
  push32((uint32_t)(ESI));
  /* 10bc34cb push eax */
  push32((uint32_t)(EAX));
  /* 10bc34cc push dword ptr [0x10bc6c48] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c48))));
  /* 10bc34d2 call dword ptr [0x10bc5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5034))), 0x10bc34d8u);
  /* 10bc34d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc34db jne 0x10bc35f7 */
  if (!C.zf) goto L_10bc35f7;
  /* 10bc34e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc34e3 mov esi, 0x100 */
  ESI = (0x100u);
L_10bc34e8:;
  /* 10bc34e8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10bc34ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc34f0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc34f2 jb 0x10bc34e8 */
  if (C.cf) goto L_10bc34e8;
  /* 10bc34f4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10bc34f7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10bc34fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc3500 je 0x10bc3539 */
  if (C.zf) goto L_10bc3539;
  /* 10bc3502 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3503 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3504 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10bc3507:;
  /* 10bc3507 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10bc350a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10bc350d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc350f ja 0x10bc352e */
  if ((!C.cf&&!C.zf)) goto L_10bc352e;
  /* 10bc3511 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3513 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10bc351a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc351b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10bc3520 mov ebx, ecx */
  EBX = (ECX);
  /* 10bc3522 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc3525 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bc3527 mov ecx, ebx */
  ECX = (EBX);
  /* 10bc3529 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10bc352c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10bc352e:;
  /* 10bc352e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bc352f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bc3530 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10bc3533 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc3535 jne 0x10bc3507 */
  if (!C.zf) goto L_10bc3507;
  /* 10bc3537 pop edi */
  EDI = (pop32());
  /* 10bc3538 pop ebx */
  EBX = (pop32());
L_10bc3539:;
  /* 10bc3539 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc353b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10bc3541 push dword ptr [0x10bc6e64] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e64))));
  /* 10bc3547 push dword ptr [0x10bc6c48] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c48))));
  /* 10bc354d push eax */
  push32((uint32_t)(EAX));
  /* 10bc354e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10bc3554 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3555 push eax */
  push32((uint32_t)(EAX));
  /* 10bc3556 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc3558 call 0x10bc4632 */
  push32(0x10bc355du); f_10bc4632();
  /* 10bc355d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc355f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10bc3565 push dword ptr [0x10bc6c48] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c48))));
  /* 10bc356b push esi */
  push32((uint32_t)(ESI));
  /* 10bc356c push eax */
  push32((uint32_t)(EAX));
  /* 10bc356d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10bc3573 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3574 push eax */
  push32((uint32_t)(EAX));
  /* 10bc3575 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3576 push dword ptr [0x10bc6e64] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e64))));
  /* 10bc357c call 0x10bc43e3 */
  push32(0x10bc3581u); f_10bc43e3();
  /* 10bc3581 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc3583 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10bc3589 push dword ptr [0x10bc6c48] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c48))));
  /* 10bc358f push esi */
  push32((uint32_t)(ESI));
  /* 10bc3590 push eax */
  push32((uint32_t)(EAX));
  /* 10bc3591 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10bc3597 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3598 push eax */
  push32((uint32_t)(EAX));
  /* 10bc3599 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10bc359e push dword ptr [0x10bc6e64] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e64))));
  /* 10bc35a4 call 0x10bc43e3 */
  push32(0x10bc35a9u); f_10bc43e3();
  /* 10bc35a9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc35ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc35ae lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10bc35b4:;
  /* 10bc35b4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10bc35b7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10bc35ba je 0x10bc35d2 */
  if (C.zf) goto L_10bc35d2;
  /* 10bc35bc or byte ptr [eax + 0x10bc6d61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(0x10u); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc35c3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10bc35ca:;
  /* 10bc35ca mov byte ptr [eax + 0x10bc6c60], dl */
  w8((uint32_t)(EAX + 0x10bc6c60), (DL));
  /* 10bc35d0 jmp 0x10bc35ee */
  goto L_10bc35ee;
L_10bc35d2:;
  /* 10bc35d2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10bc35d5 je 0x10bc35e7 */
  if (C.zf) goto L_10bc35e7;
  /* 10bc35d7 or byte ptr [eax + 0x10bc6d61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(0x20u); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc35de mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10bc35e5 jmp 0x10bc35ca */
  goto L_10bc35ca;
L_10bc35e7:;
  /* 10bc35e7 and byte ptr [eax + 0x10bc6c60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6c60)))&(0x0u); w8((uint32_t)(EAX + 0x10bc6c60), (_r)); fl_logic(_r,8); }
L_10bc35ee:;
  /* 10bc35ee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc35ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc35f0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bc35f1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc35f3 jb 0x10bc35b4 */
  if (C.cf) goto L_10bc35b4;
  /* 10bc35f5 jmp 0x10bc3640 */
  goto L_10bc3640;
L_10bc35f7:;
  /* 10bc35f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc35f9 mov esi, 0x100 */
  ESI = (0x100u);
L_10bc35fe:;
  /* 10bc35fe cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3601 jb 0x10bc361c */
  if (C.cf) goto L_10bc361c;
  /* 10bc3603 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3606 ja 0x10bc361c */
  if ((!C.cf&&!C.zf)) goto L_10bc361c;
  /* 10bc3608 or byte ptr [eax + 0x10bc6d61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(0x10u); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc360f mov cl, al */
  CL = (AL);
  /* 10bc3611 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10bc3614:;
  /* 10bc3614 mov byte ptr [eax + 0x10bc6c60], cl */
  w8((uint32_t)(EAX + 0x10bc6c60), (CL));
  /* 10bc361a jmp 0x10bc363b */
  goto L_10bc363b;
L_10bc361c:;
  /* 10bc361c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc361f jb 0x10bc3634 */
  if (C.cf) goto L_10bc3634;
  /* 10bc3621 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3624 ja 0x10bc3634 */
  if ((!C.cf&&!C.zf)) goto L_10bc3634;
  /* 10bc3626 or byte ptr [eax + 0x10bc6d61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6d61)))|(0x20u); w8((uint32_t)(EAX + 0x10bc6d61), (_r)); fl_logic(_r,8); }
  /* 10bc362d mov cl, al */
  CL = (AL);
  /* 10bc362f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bc3632 jmp 0x10bc3614 */
  goto L_10bc3614;
L_10bc3634:;
  /* 10bc3634 and byte ptr [eax + 0x10bc6c60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10bc6c60)))&(0x0u); w8((uint32_t)(EAX + 0x10bc6c60), (_r)); fl_logic(_r,8); }
L_10bc363b:;
  /* 10bc363b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc363c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc363e jb 0x10bc35fe */
  if (C.cf) goto L_10bc35fe;
L_10bc3640:;
  /* 10bc3640 pop esi */
  ESI = (pop32());
  /* 10bc3641 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc3642 ret  */
  ESPCHK(0x10bc34beu, _esp0);
  ESP += 4; return;
}

/* FUN_10003643 @ 0x10bc3643 (28 bytes, 7 insns) */
void f_10bc3643(void) {
  FTRACE(0x10bc3643u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3643 cmp dword ptr [0x10bc6f88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6f88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc364a jne 0x10bc365e */
  if (!C.zf) goto L_10bc365e;
  /* 10bc364c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10bc364e call 0x10bc326b */
  push32(0x10bc3653u); f_10bc326b();
  /* 10bc3653 pop ecx */
  ECX = (pop32());
  /* 10bc3654 mov dword ptr [0x10bc6f88], 1 */
  w32((uint32_t)(0x10bc6f88), (0x1u));
L_10bc365e:;
  /* 10bc365e ret  */
  ESPCHK(0x10bc3643u, _esp0);
  ESP += 4; return;
}

/* FUN_10003660 @ 0x10bc3660 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10bc3660(void) {
  FTRACE(0x10bc3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3660 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc3661 mov ebp, esp */
  EBP = (ESP);
  /* 10bc3663 push edi */
  push32((uint32_t)(EDI));
  /* 10bc3664 push esi */
  push32((uint32_t)(ESI));
  /* 10bc3665 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc3668 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bc366b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc366e mov eax, ecx */
  EAX = (ECX);
  /* 10bc3670 mov edx, ecx */
  EDX = (ECX);
  /* 10bc3672 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3674 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3676 jbe 0x10bc3680 */
  if ((C.cf||C.zf)) goto L_10bc3680;
  /* 10bc3678 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc367a jb 0x10bc37f8 */
  if (C.cf) goto L_10bc37f8;
L_10bc3680:;
  /* 10bc3680 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bc3686 jne 0x10bc369c */
  if (!C.zf) goto L_10bc369c;
  /* 10bc3688 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc368b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bc368e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3691 jb 0x10bc36bc */
  if (C.cf) goto L_10bc36bc;
  /* 10bc3693 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc3695 jmp dword ptr [edx*4 + 0x10bc37a8] */
  switch (EDX) {
    case 0: goto L_10bc37b8;
    case 1: goto L_10bc37c0;
    case 2: goto L_10bc37cc;
    case 3: goto L_10bc37e0;
    default: x86_unimpl("switch@0x10bc3695 out of table"); return;
  }
L_10bc369c:;
  /* 10bc369c mov eax, edi */
  EAX = (EDI);
  /* 10bc369e mov edx, 3 */
  EDX = (0x3u);
  /* 10bc36a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc36a6 jb 0x10bc36b4 */
  if (C.cf) goto L_10bc36b4;
  /* 10bc36a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bc36ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc36ad jmp dword ptr [eax*4 + 0x10bc36c0] */
  switch (EAX) {
    case 1: goto L_10bc36d0;
    case 2: goto L_10bc36fc;
    case 3: goto L_10bc3720;
    default: x86_unimpl("switch@0x10bc36ad out of table"); return;
  }
L_10bc36b4:;
  /* 10bc36b4 jmp dword ptr [ecx*4 + 0x10bc37b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10bc37b8)))); return;
  /* 10bc36bb nop  */
  /* nop */
L_10bc36bc:;
  /* 10bc36bc jmp dword ptr [ecx*4 + 0x10bc373c] */
  switch (ECX) {
    case 0: goto L_10bc379f;
    case 1: goto L_10bc378c;
    case 2: goto L_10bc3784;
    case 3: goto L_10bc377c;
    case 4: goto L_10bc3774;
    case 5: goto L_10bc376c;
    case 6: goto L_10bc3764;
    case 7: goto L_10bc375c;
    default: x86_unimpl("switch@0x10bc36bc out of table"); return;
  }
  /* 10bc36c3 nop  */
  /* nop */
L_10bc36d0:;
  /* 10bc36d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc36d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc36d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc36d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc36d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc36dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc36df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc36e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc36e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc36e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc36eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc36ee jb 0x10bc36bc */
  if (C.cf) goto L_10bc36bc;
  /* 10bc36f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc36f2 jmp dword ptr [edx*4 + 0x10bc37a8] */
  switch (EDX) {
    case 0: goto L_10bc37b8;
    case 1: goto L_10bc37c0;
    case 2: goto L_10bc37cc;
    case 3: goto L_10bc37e0;
    default: x86_unimpl("switch@0x10bc36f2 out of table"); return;
  }
  /* 10bc36f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc36fc:;
  /* 10bc36fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc36fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc3700 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc3702 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc3705 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc3708 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc370b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc370e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3711 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3714 jb 0x10bc36bc */
  if (C.cf) goto L_10bc36bc;
  /* 10bc3716 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc3718 jmp dword ptr [edx*4 + 0x10bc37a8] */
  switch (EDX) {
    case 0: goto L_10bc37b8;
    case 1: goto L_10bc37c0;
    case 2: goto L_10bc37cc;
    case 3: goto L_10bc37e0;
    default: x86_unimpl("switch@0x10bc3718 out of table"); return;
  }
  /* 10bc371f nop  */
  /* nop */
L_10bc3720:;
  /* 10bc3720 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc3722 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc3724 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc3726 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc3727 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc372a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc372b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc372e jb 0x10bc36bc */
  if (C.cf) goto L_10bc36bc;
  /* 10bc3730 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc3732 jmp dword ptr [edx*4 + 0x10bc37a8] */
  switch (EDX) {
    case 0: goto L_10bc37b8;
    case 1: goto L_10bc37c0;
    case 2: goto L_10bc37cc;
    case 3: goto L_10bc37e0;
    default: x86_unimpl("switch@0x10bc3732 out of table"); return;
  }
  /* 10bc3739 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc375c:;
  /* 10bc375c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10bc3760 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10bc3764:;
  /* 10bc3764 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10bc3768 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10bc376c:;
  /* 10bc376c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10bc3770 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10bc3774:;
  /* 10bc3774 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10bc3778 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10bc377c:;
  /* 10bc377c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10bc3780 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10bc3784:;
  /* 10bc3784 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10bc3788 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10bc378c:;
  /* 10bc378c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10bc3790 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10bc3794 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bc379b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc379d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bc379f:;
  /* 10bc379f jmp dword ptr [edx*4 + 0x10bc37a8] */
  switch (EDX) {
    case 0: goto L_10bc37b8;
    case 1: goto L_10bc37c0;
    case 2: goto L_10bc37cc;
    case 3: goto L_10bc37e0;
    default: x86_unimpl("switch@0x10bc379f out of table"); return;
  }
  /* 10bc37a6 mov edi, edi */
  EDI = (EDI);
L_10bc37b8:;
  /* 10bc37b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc37bb pop esi */
  ESI = (pop32());
  /* 10bc37bc pop edi */
  EDI = (pop32());
  /* 10bc37bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc37be ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc37bf nop  */
  /* nop */
L_10bc37c0:;
  /* 10bc37c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc37c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc37c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc37c7 pop esi */
  ESI = (pop32());
  /* 10bc37c8 pop edi */
  EDI = (pop32());
  /* 10bc37c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc37ca ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc37cb nop  */
  /* nop */
L_10bc37cc:;
  /* 10bc37cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc37ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc37d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc37d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc37d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc37d9 pop esi */
  ESI = (pop32());
  /* 10bc37da pop edi */
  EDI = (pop32());
  /* 10bc37db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc37dc ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc37dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc37e0:;
  /* 10bc37e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc37e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc37e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc37e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc37ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc37ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc37f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc37f3 pop esi */
  ESI = (pop32());
  /* 10bc37f4 pop edi */
  EDI = (pop32());
  /* 10bc37f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc37f6 ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc37f7 nop  */
  /* nop */
L_10bc37f8:;
  /* 10bc37f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10bc37fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10bc3800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bc3806 jne 0x10bc382c */
  if (!C.zf) goto L_10bc382c;
  /* 10bc3808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc380b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bc380e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3811 jb 0x10bc3820 */
  if (C.cf) goto L_10bc3820;
  /* 10bc3813 std  */
  C.df=1;
  /* 10bc3814 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc3816 cld  */
  C.df=0;
  /* 10bc3817 jmp dword ptr [edx*4 + 0x10bc3940] */
  switch (EDX) {
    case 0: goto L_10bc3950;
    case 1: goto L_10bc3958;
    case 2: goto L_10bc3968;
    case 3: goto L_10bc397c;
    default: x86_unimpl("switch@0x10bc3817 out of table"); return;
  }
  /* 10bc381e mov edi, edi */
  EDI = (EDI);
L_10bc3820:;
  /* 10bc3820 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bc3822 jmp dword ptr [ecx*4 + 0x10bc38f0] */
  switch (ECX) {
    case 0: goto L_10bc3937;
    default: x86_unimpl("switch@0x10bc3822 out of table"); return;
  }
  /* 10bc3829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc382c:;
  /* 10bc382c mov eax, edi */
  EAX = (EDI);
  /* 10bc382e mov edx, 3 */
  EDX = (0x3u);
  /* 10bc3833 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3836 jb 0x10bc3844 */
  if (C.cf) goto L_10bc3844;
  /* 10bc3838 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bc383b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc383d jmp dword ptr [eax*4 + 0x10bc3848] */
  switch (EAX) {
    case 1: goto L_10bc3858;
    case 2: goto L_10bc3878;
    case 3: goto L_10bc38a0;
    default: x86_unimpl("switch@0x10bc383d out of table"); return;
  }
L_10bc3844:;
  /* 10bc3844 jmp dword ptr [ecx*4 + 0x10bc3940] */
  switch (ECX) {
    case 0: goto L_10bc3950;
    case 1: goto L_10bc3958;
    case 2: goto L_10bc3968;
    case 3: goto L_10bc397c;
    default: x86_unimpl("switch@0x10bc3844 out of table"); return;
  }
  /* 10bc384b nop  */
  /* nop */
L_10bc3858:;
  /* 10bc3858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc385b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc385d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc3860 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bc3861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc3864 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bc3865 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3868 jb 0x10bc3820 */
  if (C.cf) goto L_10bc3820;
  /* 10bc386a std  */
  C.df=1;
  /* 10bc386b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc386d cld  */
  C.df=0;
  /* 10bc386e jmp dword ptr [edx*4 + 0x10bc3940] */
  switch (EDX) {
    case 0: goto L_10bc3950;
    case 1: goto L_10bc3958;
    case 2: goto L_10bc3968;
    case 3: goto L_10bc397c;
    default: x86_unimpl("switch@0x10bc386e out of table"); return;
  }
  /* 10bc3875 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc3878:;
  /* 10bc3878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc387b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc387d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc3880 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc3883 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc3886 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc3889 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc388c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc388f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3892 jb 0x10bc3820 */
  if (C.cf) goto L_10bc3820;
  /* 10bc3894 std  */
  C.df=1;
  /* 10bc3895 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc3897 cld  */
  C.df=0;
  /* 10bc3898 jmp dword ptr [edx*4 + 0x10bc3940] */
  switch (EDX) {
    case 0: goto L_10bc3950;
    case 1: goto L_10bc3958;
    case 2: goto L_10bc3968;
    case 3: goto L_10bc397c;
    default: x86_unimpl("switch@0x10bc3898 out of table"); return;
  }
  /* 10bc389f nop  */
  /* nop */
L_10bc38a0:;
  /* 10bc38a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc38a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc38a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc38a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc38ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc38ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc38b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc38b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc38b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc38ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc38bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc38c0 jb 0x10bc3820 */
  if (C.cf) goto L_10bc3820;
  /* 10bc38c6 std  */
  C.df=1;
  /* 10bc38c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc38c9 cld  */
  C.df=0;
  /* 10bc38ca jmp dword ptr [edx*4 + 0x10bc3940] */
  switch (EDX) {
    case 0: goto L_10bc3950;
    case 1: goto L_10bc3958;
    case 2: goto L_10bc3968;
    case 3: goto L_10bc397c;
    default: x86_unimpl("switch@0x10bc38ca out of table"); return;
  }
  /* 10bc38d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10bc38d4 hlt  */
  x86_unimpl("hlt @ 0x10bc38d4");
  /* 10bc38d5 cmp byte ptr [eax + edx + 0x10bc38fc], bh */
  { uint32_t _a=(r8((uint32_t)(EAX + EDX*1 + 0x10bc38fc))),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc38dc add al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bc38de mov esp, 0xbc390c10 */
  ESP = (0xbc390c10u);
  /* 10bc38e3 adc byte ptr [ecx + edi], dl */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bc38e6 mov esp, 0xbc391c10 */
  ESP = (0xbc391c10u);
  /* 10bc38eb adc byte ptr [ecx + edi], ah */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bc38f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10bc38f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10bc38fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10bc3900 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10bc3904 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10bc3908 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10bc390c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10bc3910 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10bc3914 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10bc3918 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10bc391c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10bc3920 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10bc3924 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10bc3928 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10bc392c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bc3933 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3935 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bc3937:;
  /* 10bc3937 jmp dword ptr [edx*4 + 0x10bc3940] */
  switch (EDX) {
    case 0: goto L_10bc3950;
    case 1: goto L_10bc3958;
    case 2: goto L_10bc3968;
    case 3: goto L_10bc397c;
    default: x86_unimpl("switch@0x10bc3937 out of table"); return;
  }
  /* 10bc393e mov edi, edi */
  EDI = (EDI);
L_10bc3950:;
  /* 10bc3950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3953 pop esi */
  ESI = (pop32());
  /* 10bc3954 pop edi */
  EDI = (pop32());
  /* 10bc3955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc3956 ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc3957 nop  */
  /* nop */
L_10bc3958:;
  /* 10bc3958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc395b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc395e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3961 pop esi */
  ESI = (pop32());
  /* 10bc3962 pop edi */
  EDI = (pop32());
  /* 10bc3963 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc3964 ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc3965 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc3968:;
  /* 10bc3968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc396b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc396e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc3971 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc3974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3977 pop esi */
  ESI = (pop32());
  /* 10bc3978 pop edi */
  EDI = (pop32());
  /* 10bc3979 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc397a ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
  /* 10bc397b nop  */
  /* nop */
L_10bc397c:;
  /* 10bc397c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc397f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc3982 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc3985 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc3988 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc398b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc398e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3991 pop esi */
  ESI = (pop32());
  /* 10bc3992 pop edi */
  EDI = (pop32());
  /* 10bc3993 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc3994 ret  */
  ESPCHK(0x10bc3660u, _esp0);
  ESP += 4; return;
}

/* FUN_10003995 @ 0x10bc3995 (62 bytes, 15 insns) */
void f_10bc3995(void) {
  FTRACE(0x10bc3995u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3995 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10bc399a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc399c push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc39a2 call dword ptr [0x10bc503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc503c))), 0x10bc39a8u);
  /* 10bc39a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc39aa mov dword ptr [0x10bc6c44], eax */
  w32((uint32_t)(0x10bc6c44), (EAX));
  /* 10bc39af jne 0x10bc39b2 */
  if (!C.zf) goto L_10bc39b2;
  /* 10bc39b1 ret  */
  ESPCHK(0x10bc3995u, _esp0);
  ESP += 4; return;
L_10bc39b2:;
  /* 10bc39b2 and dword ptr [0x10bc6c3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bc6c3c)))&(0x0u); w32((uint32_t)(0x10bc6c3c), (_r)); fl_logic(_r,32); }
  /* 10bc39b9 and dword ptr [0x10bc6c40], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bc6c40)))&(0x0u); w32((uint32_t)(0x10bc6c40), (_r)); fl_logic(_r,32); }
  /* 10bc39c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc39c2 mov dword ptr [0x10bc6c38], eax */
  w32((uint32_t)(0x10bc6c38), (EAX));
  /* 10bc39c7 mov dword ptr [0x10bc6c30], 0x10 */
  w32((uint32_t)(0x10bc6c30), (0x10u));
  /* 10bc39d1 pop eax */
  EAX = (pop32());
  /* 10bc39d2 ret  */
  ESPCHK(0x10bc3995u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d3 @ 0x10bc39d3 (43 bytes, 14 insns) */
void f_10bc39d3(void) {
  FTRACE(0x10bc39d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc39d3 mov eax, dword ptr [0x10bc6c40] */
  EAX = (r32((uint32_t)(0x10bc6c40)));
  /* 10bc39d8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10bc39db mov eax, dword ptr [0x10bc6c44] */
  EAX = (r32((uint32_t)(0x10bc6c44)));
  /* 10bc39e0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10bc39e3:;
  /* 10bc39e3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc39e5 jae 0x10bc39fb */
  if (!C.cf) goto L_10bc39fb;
  /* 10bc39e7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc39eb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc39ee cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc39f4 jb 0x10bc39fd */
  if (C.cf) goto L_10bc39fd;
  /* 10bc39f6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc39f9 jmp 0x10bc39e3 */
  goto L_10bc39e3;
L_10bc39fb:;
  /* 10bc39fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bc39fd:;
  /* 10bc39fd ret  */
  ESPCHK(0x10bc39d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100039fe @ 0x10bc39fe (811 bytes, 264 insns) */
void f_10bc39fe(void) {
  FTRACE(0x10bc39feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc39fe push ebp */
  push32((uint32_t)(EBP));
  /* 10bc39ff mov ebp, esp */
  EBP = (ESP);
  /* 10bc3a01 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3a04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc3a07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3a0a push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3a0b push esi */
  push32((uint32_t)(ESI));
  /* 10bc3a0c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bc3a0f mov esi, edx */
  ESI = (EDX);
  /* 10bc3a11 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3a14 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10bc3a17 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3a1a push edi */
  push32((uint32_t)(EDI));
  /* 10bc3a1b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10bc3a1e mov ecx, esi */
  ECX = (ESI);
  /* 10bc3a20 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10bc3a23 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bc3a29 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bc3a2a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10bc3a2d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bc3a34 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10bc3a37 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bc3a3a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10bc3a3d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10bc3a40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bc3a43 jne 0x10bc3ac4 */
  if (!C.zf) goto L_10bc3ac4;
  /* 10bc3a45 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bc3a48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bc3a4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc3a4b pop edi */
  EDI = (pop32());
  /* 10bc3a4c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bc3a4f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3a51 jbe 0x10bc3a56 */
  if ((C.cf||C.zf)) goto L_10bc3a56;
  /* 10bc3a53 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10bc3a56:;
  /* 10bc3a56 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10bc3a5a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3a5e jne 0x10bc3aa8 */
  if (!C.zf) goto L_10bc3aa8;
  /* 10bc3a60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc3a63 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3a66 jae 0x10bc3a84 */
  if (!C.cf) goto L_10bc3a84;
  /* 10bc3a68 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bc3a6d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bc3a6f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bc3a73 not edi */
  EDI = (~(EDI));
  /* 10bc3a75 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bc3a79 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bc3a7b jne 0x10bc3aa8 */
  if (!C.zf) goto L_10bc3aa8;
  /* 10bc3a7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3a80 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bc3a82 jmp 0x10bc3aa8 */
  goto L_10bc3aa8;
L_10bc3a84:;
  /* 10bc3a84 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3a87 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bc3a8c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bc3a8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc3a91 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bc3a95 not edi */
  EDI = (~(EDI));
  /* 10bc3a97 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10bc3a9e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bc3aa0 jne 0x10bc3aa8 */
  if (!C.zf) goto L_10bc3aa8;
  /* 10bc3aa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3aa5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10bc3aa8:;
  /* 10bc3aa8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10bc3aac mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10bc3ab0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10bc3ab3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10bc3ab7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10bc3abb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3abe mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10bc3ac1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10bc3ac4:;
  /* 10bc3ac4 mov edi, ebx */
  EDI = (EBX);
  /* 10bc3ac6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10bc3ac9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bc3aca cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3acd jbe 0x10bc3ad2 */
  if ((C.cf||C.zf)) goto L_10bc3ad2;
  /* 10bc3acf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bc3ad1 pop edi */
  EDI = (pop32());
L_10bc3ad2:;
  /* 10bc3ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3ad5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3ad8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bc3adb jne 0x10bc3b81 */
  if (!C.zf) goto L_10bc3b81;
  /* 10bc3ae1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3ae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3ae7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bc3aea push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bc3aec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bc3aef dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc3af0 pop edx */
  EDX = (pop32());
  /* 10bc3af1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3af3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bc3af6 jbe 0x10bc3afd */
  if ((C.cf||C.zf)) goto L_10bc3afd;
  /* 10bc3af8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10bc3afb mov ecx, edx */
  ECX = (EDX);
L_10bc3afd:;
  /* 10bc3afd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3b00 mov edi, ebx */
  EDI = (EBX);
  /* 10bc3b02 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10bc3b05 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10bc3b08 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bc3b09 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3b0b jbe 0x10bc3b0f */
  if ((C.cf||C.zf)) goto L_10bc3b0f;
  /* 10bc3b0d mov edi, edx */
  EDI = (EDX);
L_10bc3b0f:;
  /* 10bc3b0f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3b11 je 0x10bc3b7e */
  if (C.zf) goto L_10bc3b7e;
  /* 10bc3b13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bc3b16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bc3b19 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3b1c jne 0x10bc3b66 */
  if (!C.zf) goto L_10bc3b66;
  /* 10bc3b1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc3b21 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3b24 jae 0x10bc3b42 */
  if (!C.cf) goto L_10bc3b42;
  /* 10bc3b26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bc3b2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bc3b2d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bc3b31 not edx */
  EDX = (~(EDX));
  /* 10bc3b33 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bc3b37 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bc3b39 jne 0x10bc3b66 */
  if (!C.zf) goto L_10bc3b66;
  /* 10bc3b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3b3e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bc3b40 jmp 0x10bc3b66 */
  goto L_10bc3b66;
L_10bc3b42:;
  /* 10bc3b42 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3b45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bc3b4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bc3b4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc3b4f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10bc3b53 not edx */
  EDX = (~(EDX));
  /* 10bc3b55 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10bc3b5c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10bc3b5e jne 0x10bc3b66 */
  if (!C.zf) goto L_10bc3b66;
  /* 10bc3b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3b63 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10bc3b66:;
  /* 10bc3b66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bc3b69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bc3b6c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bc3b6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bc3b72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bc3b75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bc3b78 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bc3b7b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10bc3b7e:;
  /* 10bc3b7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10bc3b81:;
  /* 10bc3b81 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3b85 jne 0x10bc3b90 */
  if (!C.zf) goto L_10bc3b90;
  /* 10bc3b87 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3b8a je 0x10bc3c19 */
  if (C.zf) goto L_10bc3c19;
L_10bc3b90:;
  /* 10bc3b90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bc3b93 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10bc3b96 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bc3b99 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bc3b9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bc3b9f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10bc3ba2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bc3ba5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bc3ba8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3bab mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bc3bae mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3bb1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3bb4 jne 0x10bc3c19 */
  if (!C.zf) goto L_10bc3c19;
  /* 10bc3bb6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10bc3bba cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3bbd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10bc3bc0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bc3bc2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10bc3bc6 jae 0x10bc3bed */
  if (!C.cf) goto L_10bc3bed;
  /* 10bc3bc8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc3bcc jne 0x10bc3bdc */
  if (!C.zf) goto L_10bc3bdc;
  /* 10bc3bce mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bc3bd3 mov ecx, edi */
  ECX = (EDI);
  /* 10bc3bd5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bc3bd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3bda or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10bc3bdc:;
  /* 10bc3bdc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bc3be1 mov ecx, edi */
  ECX = (EDI);
  /* 10bc3be3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bc3be5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10bc3be9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10bc3beb jmp 0x10bc3c16 */
  goto L_10bc3c16;
L_10bc3bed:;
  /* 10bc3bed cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc3bf1 jne 0x10bc3c03 */
  if (!C.zf) goto L_10bc3c03;
  /* 10bc3bf3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10bc3bf6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bc3bfb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bc3bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3c00 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10bc3c03:;
  /* 10bc3c03 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10bc3c06 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bc3c0b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bc3c0d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10bc3c14 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10bc3c16:;
  /* 10bc3c16 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10bc3c19:;
  /* 10bc3c19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bc3c1c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10bc3c1e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10bc3c22 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10bc3c24 jne 0x10bc3d24 */
  if (!C.zf) goto L_10bc3d24;
  /* 10bc3c2a mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc3c31 je 0x10bc3d16 */
  if (C.zf) goto L_10bc3d16;
  /* 10bc3c37 mov ecx, dword ptr [0x10bc6c34] */
  ECX = (r32((uint32_t)(0x10bc6c34)));
  /* 10bc3c3d mov edi, dword ptr [0x10bc5050] */
  EDI = (r32((uint32_t)(0x10bc5050)));
  /* 10bc3c43 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10bc3c46 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3c49 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10bc3c4e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bc3c53 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3c54 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc3c55 call edi */
  call_ind((uint32_t)(EDI), 0x10bc3c57u);
  /* 10bc3c57 mov ecx, dword ptr [0x10bc6c34] */
  ECX = (r32((uint32_t)(0x10bc6c34)));
  /* 10bc3c5d mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3c62 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bc3c67 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bc3c69 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bc3c6c mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3c71 mov ecx, dword ptr [0x10bc6c34] */
  ECX = (r32((uint32_t)(0x10bc6c34)));
  /* 10bc3c77 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bc3c7a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10bc3c82 mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3c87 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bc3c8a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10bc3c8d mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3c92 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bc3c95 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc3c99 jne 0x10bc3ca4 */
  if (!C.zf) goto L_10bc3ca4;
  /* 10bc3c9b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10bc3c9f mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
L_10bc3ca4:;
  /* 10bc3ca4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3ca8 jne 0x10bc3d16 */
  if (!C.zf) goto L_10bc3d16;
  /* 10bc3caa push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3cab push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc3cad push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10bc3cb0 call edi */
  call_ind((uint32_t)(EDI), 0x10bc3cb2u);
  /* 10bc3cb2 mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3cb7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10bc3cba push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc3cbc push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc3cc2 call dword ptr [0x10bc504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc504c))), 0x10bc3cc8u);
  /* 10bc3cc8 mov eax, dword ptr [0x10bc6c40] */
  EAX = (r32((uint32_t)(0x10bc6c40)));
  /* 10bc3ccd mov edx, dword ptr [0x10bc6c44] */
  EDX = (r32((uint32_t)(0x10bc6c44)));
  /* 10bc3cd3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bc3cd6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10bc3cd9 mov ecx, eax */
  ECX = (EAX);
  /* 10bc3cdb mov eax, dword ptr [0x10bc6c3c] */
  EAX = (r32((uint32_t)(0x10bc6c3c)));
  /* 10bc3ce0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3ce2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10bc3ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc3ce7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10bc3cea push ecx */
  push32((uint32_t)(ECX));
  /* 10bc3ceb push eax */
  push32((uint32_t)(EAX));
  /* 10bc3cec call 0x10bc4780 */
  push32(0x10bc3cf1u); f_10bc4780();
  /* 10bc3cf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3cf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3cf7 dec dword ptr [0x10bc6c40] */
  { uint32_t _r=(r32((uint32_t)(0x10bc6c40)))-1; w32((uint32_t)(0x10bc6c40), (_r)); fl_dec(_r,32); }
  /* 10bc3cfd cmp eax, dword ptr [0x10bc6c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bc6c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3d03 jbe 0x10bc3d08 */
  if ((C.cf||C.zf)) goto L_10bc3d08;
  /* 10bc3d05 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10bc3d08:;
  /* 10bc3d08 mov ecx, dword ptr [0x10bc6c44] */
  ECX = (r32((uint32_t)(0x10bc6c44)));
  /* 10bc3d0e mov dword ptr [0x10bc6c38], ecx */
  w32((uint32_t)(0x10bc6c38), (ECX));
  /* 10bc3d14 jmp 0x10bc3d19 */
  goto L_10bc3d19;
L_10bc3d16:;
  /* 10bc3d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10bc3d19:;
  /* 10bc3d19 mov dword ptr [0x10bc6c3c], eax */
  w32((uint32_t)(0x10bc6c3c), (EAX));
  /* 10bc3d1e mov dword ptr [0x10bc6c34], esi */
  w32((uint32_t)(0x10bc6c34), (ESI));
L_10bc3d24:;
  /* 10bc3d24 pop edi */
  EDI = (pop32());
  /* 10bc3d25 pop esi */
  ESI = (pop32());
  /* 10bc3d26 pop ebx */
  EBX = (pop32());
  /* 10bc3d27 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc3d28 ret  */
  ESPCHK(0x10bc39feu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d29 @ 0x10bc3d29 (777 bytes, 275 insns) */
void f_10bc3d29(void) {
  FTRACE(0x10bc3d29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc3d29 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc3d2a mov ebp, esp */
  EBP = (ESP);
  /* 10bc3d2c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3d2f mov eax, dword ptr [0x10bc6c40] */
  EAX = (r32((uint32_t)(0x10bc6c40)));
  /* 10bc3d34 mov edx, dword ptr [0x10bc6c44] */
  EDX = (r32((uint32_t)(0x10bc6c44)));
  /* 10bc3d3a push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3d3b push esi */
  push32((uint32_t)(ESI));
  /* 10bc3d3c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bc3d3f push edi */
  push32((uint32_t)(EDI));
  /* 10bc3d40 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10bc3d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3d46 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10bc3d49 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10bc3d4c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3d4f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bc3d52 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bc3d55 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc3d56 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3d59 jge 0x10bc3d69 */
  if ((C.sf==C.of)) goto L_10bc3d69;
  /* 10bc3d5b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10bc3d5e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10bc3d60 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10bc3d64 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10bc3d67 jmp 0x10bc3d79 */
  goto L_10bc3d79;
L_10bc3d69:;
  /* 10bc3d69 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3d6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc3d6f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10bc3d71 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bc3d73 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10bc3d76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bc3d79:;
  /* 10bc3d79 mov eax, dword ptr [0x10bc6c38] */
  EAX = (r32((uint32_t)(0x10bc6c38)));
  /* 10bc3d7e mov ebx, eax */
  EBX = (EAX);
  /* 10bc3d80 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3d82 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3d85 jae 0x10bc3da0 */
  if (!C.cf) goto L_10bc3da0;
L_10bc3d87:;
  /* 10bc3d87 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10bc3d8a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10bc3d8c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3d8f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc3d91 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3d93 jne 0x10bc3da0 */
  if (!C.zf) goto L_10bc3da0;
  /* 10bc3d95 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3d98 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3d9b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3d9e jb 0x10bc3d87 */
  if (C.cf) goto L_10bc3d87;
L_10bc3da0:;
  /* 10bc3da0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3da3 jne 0x10bc3e1e */
  if (!C.zf) goto L_10bc3e1e;
  /* 10bc3da5 mov ebx, edx */
  EBX = (EDX);
L_10bc3da7:;
  /* 10bc3da7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3da9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3dac jae 0x10bc3dc3 */
  if (!C.cf) goto L_10bc3dc3;
  /* 10bc3dae mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10bc3db1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10bc3db3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3db6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc3db8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3dba jne 0x10bc3dc1 */
  if (!C.zf) goto L_10bc3dc1;
  /* 10bc3dbc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3dbf jmp 0x10bc3da7 */
  goto L_10bc3da7;
L_10bc3dc1:;
  /* 10bc3dc1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10bc3dc3:;
  /* 10bc3dc3 jne 0x10bc3e1e */
  if (!C.zf) goto L_10bc3e1e;
L_10bc3dc5:;
  /* 10bc3dc5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3dc8 jae 0x10bc3ddb */
  if (!C.cf) goto L_10bc3ddb;
  /* 10bc3dca cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3dce jne 0x10bc3dd8 */
  if (!C.zf) goto L_10bc3dd8;
  /* 10bc3dd0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3dd3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3dd6 jmp 0x10bc3dc5 */
  goto L_10bc3dc5;
L_10bc3dd8:;
  /* 10bc3dd8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10bc3ddb:;
  /* 10bc3ddb jne 0x10bc3e03 */
  if (!C.zf) goto L_10bc3e03;
  /* 10bc3ddd mov ebx, edx */
  EBX = (EDX);
L_10bc3ddf:;
  /* 10bc3ddf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3de1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3de4 jae 0x10bc3df3 */
  if (!C.cf) goto L_10bc3df3;
  /* 10bc3de6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3dea jne 0x10bc3df1 */
  if (!C.zf) goto L_10bc3df1;
  /* 10bc3dec add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3def jmp 0x10bc3ddf */
  goto L_10bc3ddf;
L_10bc3df1:;
  /* 10bc3df1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10bc3df3:;
  /* 10bc3df3 jne 0x10bc3e03 */
  if (!C.zf) goto L_10bc3e03;
  /* 10bc3df5 call 0x10bc4032 */
  push32(0x10bc3dfau); f_10bc4032();
  /* 10bc3dfa mov ebx, eax */
  EBX = (EAX);
  /* 10bc3dfc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bc3dfe mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10bc3e01 je 0x10bc3e17 */
  if (C.zf) goto L_10bc3e17;
L_10bc3e03:;
  /* 10bc3e03 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc3e04 call 0x10bc40e3 */
  push32(0x10bc3e09u); f_10bc40e3();
  /* 10bc3e09 pop ecx */
  ECX = (pop32());
  /* 10bc3e0a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10bc3e0d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bc3e0f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10bc3e12 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3e15 jne 0x10bc3e1e */
  if (!C.zf) goto L_10bc3e1e;
L_10bc3e17:;
  /* 10bc3e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc3e19 jmp 0x10bc402d */
  goto L_10bc402d;
L_10bc3e1e:;
  /* 10bc3e1e mov dword ptr [0x10bc6c38], ebx */
  w32((uint32_t)(0x10bc6c38), (EBX));
  /* 10bc3e24 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10bc3e27 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10bc3e29 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3e2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bc3e2f je 0x10bc3e45 */
  if (C.zf) goto L_10bc3e45;
  /* 10bc3e31 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10bc3e38 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10bc3e3c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3e3f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc3e41 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3e43 jne 0x10bc3e7c */
  if (!C.zf) goto L_10bc3e7c;
L_10bc3e45:;
  /* 10bc3e45 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10bc3e4b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10bc3e4e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10bc3e51 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10bc3e54 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc3e58 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10bc3e5b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10bc3e5d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10bc3e60 jne 0x10bc3e79 */
  if (!C.zf) goto L_10bc3e79;
L_10bc3e62:;
  /* 10bc3e62 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10bc3e68 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10bc3e6b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10bc3e6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3e71 mov edi, esi */
  EDI = (ESI);
  /* 10bc3e73 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10bc3e75 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10bc3e77 je 0x10bc3e62 */
  if (C.zf) goto L_10bc3e62;
L_10bc3e79:;
  /* 10bc3e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10bc3e7c:;
  /* 10bc3e7c mov ecx, edx */
  ECX = (EDX);
  /* 10bc3e7e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc3e80 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bc3e86 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bc3e8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bc3e90 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10bc3e94 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3e96 jne 0x10bc3ea5 */
  if (!C.zf) goto L_10bc3ea5;
  /* 10bc3e98 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10bc3e9f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bc3ea1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10bc3ea4 pop edi */
  EDI = (pop32());
L_10bc3ea5:;
  /* 10bc3ea5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bc3ea7 jl 0x10bc3eae */
  if ((C.sf!=C.of)) goto L_10bc3eae;
  /* 10bc3ea9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bc3eab inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc3eac jmp 0x10bc3ea5 */
  goto L_10bc3ea5;
L_10bc3eae:;
  /* 10bc3eae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bc3eb1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10bc3eb5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10bc3eb7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc3eba mov esi, ecx */
  ESI = (ECX);
  /* 10bc3ebc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bc3ebf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10bc3ec2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bc3ec3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3ec6 jle 0x10bc3ecb */
  if ((C.zf||C.sf!=C.of)) goto L_10bc3ecb;
  /* 10bc3ec8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bc3eca pop esi */
  ESI = (pop32());
L_10bc3ecb:;
  /* 10bc3ecb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3ecd je 0x10bc3fe0 */
  if (C.zf) goto L_10bc3fe0;
  /* 10bc3ed3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3ed6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3ed9 jne 0x10bc3f3c */
  if (!C.zf) goto L_10bc3f3c;
  /* 10bc3edb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3ede jge 0x10bc3f0b */
  if ((C.sf==C.of)) goto L_10bc3f0b;
  /* 10bc3ee0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bc3ee5 mov ecx, edi */
  ECX = (EDI);
  /* 10bc3ee7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bc3ee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3eec lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10bc3ef0 not ebx */
  EBX = (~(EBX));
  /* 10bc3ef2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10bc3ef5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10bc3ef9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10bc3efd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10bc3eff jne 0x10bc3f39 */
  if (!C.zf) goto L_10bc3f39;
  /* 10bc3f01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3f04 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bc3f07 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10bc3f09 jmp 0x10bc3f3c */
  goto L_10bc3f3c;
L_10bc3f0b:;
  /* 10bc3f0b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10bc3f0e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10bc3f13 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10bc3f15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3f18 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10bc3f1c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10bc3f23 not ebx */
  EBX = (~(EBX));
  /* 10bc3f25 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10bc3f27 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10bc3f29 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10bc3f2c jne 0x10bc3f39 */
  if (!C.zf) goto L_10bc3f39;
  /* 10bc3f2e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc3f31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bc3f34 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10bc3f37 jmp 0x10bc3f3c */
  goto L_10bc3f3c;
L_10bc3f39:;
  /* 10bc3f39 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10bc3f3c:;
  /* 10bc3f3c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bc3f3f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3f42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3f46 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10bc3f49 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3f4c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10bc3f4f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10bc3f52 je 0x10bc3fec */
  if (C.zf) goto L_10bc3fec;
  /* 10bc3f58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bc3f5b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10bc3f5f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10bc3f62 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10bc3f65 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bc3f68 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bc3f6b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3f6e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bc3f71 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bc3f74 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3f77 jne 0x10bc3fdd */
  if (!C.zf) goto L_10bc3fdd;
  /* 10bc3f79 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10bc3f7d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc3f80 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10bc3f83 jge 0x10bc3fae */
  if ((C.sf==C.of)) goto L_10bc3fae;
  /* 10bc3f85 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bc3f87 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc3f8b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10bc3f8f jne 0x10bc3f9c */
  if (!C.zf) goto L_10bc3f9c;
  /* 10bc3f91 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bc3f96 mov ecx, esi */
  ECX = (ESI);
  /* 10bc3f98 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bc3f9a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10bc3f9c:;
  /* 10bc3f9c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bc3fa1 mov ecx, esi */
  ECX = (ESI);
  /* 10bc3fa3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bc3fa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3fa8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bc3fac jmp 0x10bc3fdd */
  goto L_10bc3fdd;
L_10bc3fae:;
  /* 10bc3fae inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bc3fb0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc3fb4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10bc3fb8 jne 0x10bc3fc7 */
  if (!C.zf) goto L_10bc3fc7;
  /* 10bc3fba lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10bc3fbd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10bc3fc2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10bc3fc4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10bc3fc7:;
  /* 10bc3fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc3fca lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10bc3fd1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10bc3fd4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10bc3fd9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10bc3fdb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10bc3fdd:;
  /* 10bc3fdd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10bc3fe0:;
  /* 10bc3fe0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bc3fe2 je 0x10bc3fef */
  if (C.zf) goto L_10bc3fef;
  /* 10bc3fe4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bc3fe6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10bc3fea jmp 0x10bc3fef */
  goto L_10bc3fef;
L_10bc3fec:;
  /* 10bc3fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10bc3fef:;
  /* 10bc3fef mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10bc3ff2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc3ff4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10bc3ff7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bc3ff9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10bc3ffd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10bc4000 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10bc4002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bc4004 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10bc4007 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bc4009 jne 0x10bc4025 */
  if (!C.zf) goto L_10bc4025;
  /* 10bc400b cmp ebx, dword ptr [0x10bc6c3c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10bc6c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4011 jne 0x10bc4025 */
  if (!C.zf) goto L_10bc4025;
  /* 10bc4013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc4016 cmp ecx, dword ptr [0x10bc6c34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bc6c34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc401c jne 0x10bc4025 */
  if (!C.zf) goto L_10bc4025;
  /* 10bc401e and dword ptr [0x10bc6c3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10bc6c3c)))&(0x0u); w32((uint32_t)(0x10bc6c3c), (_r)); fl_logic(_r,32); }
L_10bc4025:;
  /* 10bc4025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc4028 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bc402a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10bc402d:;
  /* 10bc402d pop edi */
  EDI = (pop32());
  /* 10bc402e pop esi */
  ESI = (pop32());
  /* 10bc402f pop ebx */
  EBX = (pop32());
  /* 10bc4030 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4031 ret  */
  ESPCHK(0x10bc3d29u, _esp0);
  ESP += 4; return;
}

/* FUN_10004032 @ 0x10bc4032 (177 bytes, 53 insns) */
void f_10bc4032(void) {
  FTRACE(0x10bc4032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4032 mov eax, dword ptr [0x10bc6c40] */
  EAX = (r32((uint32_t)(0x10bc6c40)));
  /* 10bc4037 mov ecx, dword ptr [0x10bc6c30] */
  ECX = (r32((uint32_t)(0x10bc6c30)));
  /* 10bc403d push esi */
  push32((uint32_t)(ESI));
  /* 10bc403e push edi */
  push32((uint32_t)(EDI));
  /* 10bc403f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc4041 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4043 jne 0x10bc4075 */
  if (!C.zf) goto L_10bc4075;
  /* 10bc4045 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10bc4049 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10bc404c push eax */
  push32((uint32_t)(EAX));
  /* 10bc404d push dword ptr [0x10bc6c44] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6c44))));
  /* 10bc4053 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4054 push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc405a call dword ptr [0x10bc5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5028))), 0x10bc4060u);
  /* 10bc4060 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4062 je 0x10bc40c5 */
  if (C.zf) goto L_10bc40c5;
  /* 10bc4064 add dword ptr [0x10bc6c30], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10bc6c30))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10bc6c30), (_r)); fl_add(_a,_b,_r,32); }
  /* 10bc406b mov dword ptr [0x10bc6c44], eax */
  w32((uint32_t)(0x10bc6c44), (EAX));
  /* 10bc4070 mov eax, dword ptr [0x10bc6c40] */
  EAX = (r32((uint32_t)(0x10bc6c40)));
L_10bc4075:;
  /* 10bc4075 mov ecx, dword ptr [0x10bc6c44] */
  ECX = (r32((uint32_t)(0x10bc6c44)));
  /* 10bc407b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10bc4080 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bc4082 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10bc4085 push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc408b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10bc408e call dword ptr [0x10bc503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc503c))), 0x10bc4094u);
  /* 10bc4094 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4096 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10bc4099 je 0x10bc40c5 */
  if (C.zf) goto L_10bc40c5;
  /* 10bc409b push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc409d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10bc40a2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10bc40a7 push edi */
  push32((uint32_t)(EDI));
  /* 10bc40a8 call dword ptr [0x10bc502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc502c))), 0x10bc40aeu);
  /* 10bc40ae cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc40b0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10bc40b3 jne 0x10bc40c9 */
  if (!C.zf) goto L_10bc40c9;
  /* 10bc40b5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10bc40b8 push edi */
  push32((uint32_t)(EDI));
  /* 10bc40b9 push dword ptr [0x10bc6e68] */
  push32((uint32_t)(r32((uint32_t)(0x10bc6e68))));
  /* 10bc40bf call dword ptr [0x10bc504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc504c))), 0x10bc40c5u);
L_10bc40c5:;
  /* 10bc40c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc40c7 jmp 0x10bc40e0 */
  goto L_10bc40e0;
L_10bc40c9:;
  /* 10bc40c9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bc40cd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10bc40cf mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10bc40d2 inc dword ptr [0x10bc6c40] */
  { uint32_t _r=(r32((uint32_t)(0x10bc6c40)))+1; w32((uint32_t)(0x10bc6c40), (_r)); fl_inc(_r,32); }
  /* 10bc40d8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10bc40db or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10bc40de mov eax, esi */
  EAX = (ESI);
L_10bc40e0:;
  /* 10bc40e0 pop edi */
  EDI = (pop32());
  /* 10bc40e1 pop esi */
  ESI = (pop32());
  /* 10bc40e2 ret  */
  ESPCHK(0x10bc4032u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e3 @ 0x10bc40e3 (251 bytes, 85 insns) */
void f_10bc40e3(void) {
  FTRACE(0x10bc40e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc40e3 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc40e4 mov ebp, esp */
  EBP = (ESP);
  /* 10bc40e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc40e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc40ea push ebx */
  push32((uint32_t)(EBX));
  /* 10bc40eb push esi */
  push32((uint32_t)(ESI));
  /* 10bc40ec push edi */
  push32((uint32_t)(EDI));
  /* 10bc40ed mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10bc40f0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bc40f3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10bc40f5:;
  /* 10bc40f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc40f7 jl 0x10bc40fe */
  if ((C.sf!=C.of)) goto L_10bc40fe;
  /* 10bc40f9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bc40fb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10bc40fc jmp 0x10bc40f5 */
  goto L_10bc40f5;
L_10bc40fe:;
  /* 10bc40fe mov eax, ebx */
  EAX = (EBX);
  /* 10bc4100 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bc4102 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bc4108 pop edx */
  EDX = (pop32());
  /* 10bc4109 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10bc4110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bc4113:;
  /* 10bc4113 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10bc4116 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10bc4119 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc411c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10bc411d jne 0x10bc4113 */
  if (!C.zf) goto L_10bc4113;
  /* 10bc411f mov edi, ebx */
  EDI = (EBX);
  /* 10bc4121 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bc4123 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10bc4126 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4129 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bc412e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bc4133 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4134 call dword ptr [0x10bc502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc502c))), 0x10bc413au);
  /* 10bc413a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc413c jne 0x10bc4146 */
  if (!C.zf) goto L_10bc4146;
  /* 10bc413e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc4141 jmp 0x10bc41d9 */
  goto L_10bc41d9;
L_10bc4146:;
  /* 10bc4146 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10bc414c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc414e ja 0x10bc418c */
  if ((!C.cf&&!C.zf)) goto L_10bc418c;
  /* 10bc4150 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10bc4153:;
  /* 10bc4153 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10bc4157 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10bc415e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10bc4164 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10bc416b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bc416d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10bc4173 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bc4176 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10bc4180 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4185 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10bc4188 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc418a jbe 0x10bc4153 */
  if ((C.cf||C.zf)) goto L_10bc4153;
L_10bc418c:;
  /* 10bc418c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bc418f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10bc4192 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4197 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc4199 pop edi */
  EDI = (pop32());
  /* 10bc419a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bc419d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10bc41a0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10bc41a3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10bc41a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bc41a9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10bc41ae mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10bc41b5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10bc41b8 mov cl, al */
  CL = (AL);
  /* 10bc41ba inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10bc41bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc41be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc41c1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10bc41c4 jne 0x10bc41c9 */
  if (!C.zf) goto L_10bc41c9;
  /* 10bc41c6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10bc41c9:;
  /* 10bc41c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bc41ce mov ecx, ebx */
  ECX = (EBX);
  /* 10bc41d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bc41d2 not edx */
  EDX = (~(EDX));
  /* 10bc41d4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10bc41d7 mov eax, ebx */
  EAX = (EBX);
L_10bc41d9:;
  /* 10bc41d9 pop edi */
  EDI = (pop32());
  /* 10bc41da pop esi */
  ESI = (pop32());
  /* 10bc41db pop ebx */
  EBX = (pop32());
  /* 10bc41dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc41dd ret  */
  ESPCHK(0x10bc40e3u, _esp0);
  ESP += 4; return;
}

/* FUN_100041de @ 0x10bc41de (137 bytes, 50 insns) */
void f_10bc41de(void) {
  FTRACE(0x10bc41deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc41de push ebx */
  push32((uint32_t)(EBX));
  /* 10bc41df xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc41e1 cmp dword ptr [0x10bc6bf4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10bc6bf4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc41e7 push esi */
  push32((uint32_t)(ESI));
  /* 10bc41e8 push edi */
  push32((uint32_t)(EDI));
  /* 10bc41e9 jne 0x10bc422d */
  if (!C.zf) goto L_10bc422d;
  /* 10bc41eb push 0x10bc5460 */
  push32((uint32_t)(0x10bc5460u));
  /* 10bc41f0 call dword ptr [0x10bc501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc501c))), 0x10bc41f6u);
  /* 10bc41f6 mov edi, eax */
  EDI = (EAX);
  /* 10bc41f8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc41fa je 0x10bc4263 */
  if (C.zf) goto L_10bc4263;
  /* 10bc41fc mov esi, dword ptr [0x10bc5020] */
  ESI = (r32((uint32_t)(0x10bc5020)));
  /* 10bc4202 push 0x10bc5454 */
  push32((uint32_t)(0x10bc5454u));
  /* 10bc4207 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4208 call esi */
  call_ind((uint32_t)(ESI), 0x10bc420au);
  /* 10bc420a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc420c mov dword ptr [0x10bc6bf4], eax */
  w32((uint32_t)(0x10bc6bf4), (EAX));
  /* 10bc4211 je 0x10bc4263 */
  if (C.zf) goto L_10bc4263;
  /* 10bc4213 push 0x10bc5444 */
  push32((uint32_t)(0x10bc5444u));
  /* 10bc4218 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4219 call esi */
  call_ind((uint32_t)(ESI), 0x10bc421bu);
  /* 10bc421b push 0x10bc5430 */
  push32((uint32_t)(0x10bc5430u));
  /* 10bc4220 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4221 mov dword ptr [0x10bc6bf8], eax */
  w32((uint32_t)(0x10bc6bf8), (EAX));
  /* 10bc4226 call esi */
  call_ind((uint32_t)(ESI), 0x10bc4228u);
  /* 10bc4228 mov dword ptr [0x10bc6bfc], eax */
  w32((uint32_t)(0x10bc6bfc), (EAX));
L_10bc422d:;
  /* 10bc422d mov eax, dword ptr [0x10bc6bf8] */
  EAX = (r32((uint32_t)(0x10bc6bf8)));
  /* 10bc4232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc4234 je 0x10bc424c */
  if (C.zf) goto L_10bc424c;
  /* 10bc4236 call eax */
  call_ind((uint32_t)(EAX), 0x10bc4238u);
  /* 10bc4238 mov ebx, eax */
  EBX = (EAX);
  /* 10bc423a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10bc423c je 0x10bc424c */
  if (C.zf) goto L_10bc424c;
  /* 10bc423e mov eax, dword ptr [0x10bc6bfc] */
  EAX = (r32((uint32_t)(0x10bc6bfc)));
  /* 10bc4243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc4245 je 0x10bc424c */
  if (C.zf) goto L_10bc424c;
  /* 10bc4247 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4248 call eax */
  call_ind((uint32_t)(EAX), 0x10bc424au);
  /* 10bc424a mov ebx, eax */
  EBX = (EAX);
L_10bc424c:;
  /* 10bc424c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10bc4250 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10bc4254 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10bc4258 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4259 call dword ptr [0x10bc6bf4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc6bf4))), 0x10bc425fu);
L_10bc425f:;
  /* 10bc425f pop edi */
  EDI = (pop32());
  /* 10bc4260 pop esi */
  ESI = (pop32());
  /* 10bc4261 pop ebx */
  EBX = (pop32());
  /* 10bc4262 ret  */
  ESPCHK(0x10bc41deu, _esp0);
  ESP += 4; return;
L_10bc4263:;
  /* 10bc4263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc4265 jmp 0x10bc425f */
  goto L_10bc425f;
}

/* _strncpy @ 0x10bc4270 (254 bytes, 109 insns) */
void f_10bc4270(void) {
  FTRACE(0x10bc4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4270 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bc4274 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4275 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bc4277 je 0x10bc42f3 */
  if (C.zf) goto L_10bc42f3;
  /* 10bc4279 push esi */
  push32((uint32_t)(ESI));
  /* 10bc427a push ebx */
  push32((uint32_t)(EBX));
  /* 10bc427b mov ebx, ecx */
  EBX = (ECX);
  /* 10bc427d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10bc4281 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10bc4287 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10bc428b jne 0x10bc4294 */
  if (!C.zf) goto L_10bc4294;
  /* 10bc428d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc4290 jne 0x10bc4301 */
  if (!C.zf) goto L_10bc4301;
  /* 10bc4292 jmp 0x10bc42b5 */
  goto L_10bc42b5;
L_10bc4294:;
  /* 10bc4294 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc4296 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc4297 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc4299 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc429a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc429b je 0x10bc42c2 */
  if (C.zf) goto L_10bc42c2;
  /* 10bc429d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc429f je 0x10bc42ca */
  if (C.zf) goto L_10bc42ca;
  /* 10bc42a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10bc42a7 jne 0x10bc4294 */
  if (!C.zf) goto L_10bc4294;
  /* 10bc42a9 mov ebx, ecx */
  EBX = (ECX);
  /* 10bc42ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc42ae jne 0x10bc4301 */
  if (!C.zf) goto L_10bc4301;
L_10bc42b0:;
  /* 10bc42b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10bc42b3 je 0x10bc42c2 */
  if (C.zf) goto L_10bc42c2;
L_10bc42b5:;
  /* 10bc42b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc42b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc42b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc42ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc42bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bc42bd je 0x10bc42ee */
  if (C.zf) goto L_10bc42ee;
  /* 10bc42bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bc42c0 jne 0x10bc42b5 */
  if (!C.zf) goto L_10bc42b5;
L_10bc42c2:;
  /* 10bc42c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bc42c6 pop ebx */
  EBX = (pop32());
  /* 10bc42c7 pop esi */
  ESI = (pop32());
  /* 10bc42c8 pop edi */
  EDI = (pop32());
  /* 10bc42c9 ret  */
  ESPCHK(0x10bc4270u, _esp0);
  ESP += 4; return;
L_10bc42ca:;
  /* 10bc42ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bc42d0 je 0x10bc42e4 */
  if (C.zf) goto L_10bc42e4;
L_10bc42d2:;
  /* 10bc42d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc42d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc42d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc42d6 je 0x10bc4366 */
  if (C.zf) goto L_10bc4366;
  /* 10bc42dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bc42e2 jne 0x10bc42d2 */
  if (!C.zf) goto L_10bc42d2;
L_10bc42e4:;
  /* 10bc42e4 mov ebx, ecx */
  EBX = (ECX);
  /* 10bc42e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc42e9 jne 0x10bc4357 */
  if (!C.zf) goto L_10bc4357;
L_10bc42eb:;
  /* 10bc42eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc42ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10bc42ee:;
  /* 10bc42ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bc42ef jne 0x10bc42eb */
  if (!C.zf) goto L_10bc42eb;
  /* 10bc42f1 pop ebx */
  EBX = (pop32());
  /* 10bc42f2 pop esi */
  ESI = (pop32());
L_10bc42f3:;
  /* 10bc42f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc42f7 pop edi */
  EDI = (pop32());
  /* 10bc42f8 ret  */
  ESPCHK(0x10bc4270u, _esp0);
  ESP += 4; return;
L_10bc42f9:;
  /* 10bc42f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bc42fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc42fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc42ff je 0x10bc42b0 */
  if (C.zf) goto L_10bc42b0;
L_10bc4301:;
  /* 10bc4301 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bc4306 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bc4308 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc430a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bc430d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc430f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10bc4311 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4314 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bc4319 je 0x10bc42f9 */
  if (C.zf) goto L_10bc42f9;
  /* 10bc431b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bc431d je 0x10bc434b */
  if (C.zf) goto L_10bc434b;
  /* 10bc431f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10bc4321 je 0x10bc4341 */
  if (C.zf) goto L_10bc4341;
  /* 10bc4323 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bc4329 je 0x10bc4337 */
  if (C.zf) goto L_10bc4337;
  /* 10bc432b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bc4331 jne 0x10bc42f9 */
  if (!C.zf) goto L_10bc42f9;
  /* 10bc4333 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bc4335 jmp 0x10bc434f */
  goto L_10bc434f;
L_10bc4337:;
  /* 10bc4337 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bc433d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bc433f jmp 0x10bc434f */
  goto L_10bc434f;
L_10bc4341:;
  /* 10bc4341 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bc4347 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bc4349 jmp 0x10bc434f */
  goto L_10bc434f;
L_10bc434b:;
  /* 10bc434b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc434d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10bc434f:;
  /* 10bc434f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc4354 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc4355 je 0x10bc4361 */
  if (C.zf) goto L_10bc4361;
L_10bc4357:;
  /* 10bc4357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bc4359:;
  /* 10bc4359 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10bc435b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc435e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc435f jne 0x10bc4359 */
  if (!C.zf) goto L_10bc4359;
L_10bc4361:;
  /* 10bc4361 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10bc4364 jne 0x10bc42eb */
  if (!C.zf) goto L_10bc42eb;
L_10bc4366:;
  /* 10bc4366 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bc436a pop ebx */
  EBX = (pop32());
  /* 10bc436b pop esi */
  ESI = (pop32());
  /* 10bc436c pop edi */
  EDI = (pop32());
  /* 10bc436d ret  */
  ESPCHK(0x10bc4270u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10bc4370 (88 bytes, 40 insns) */
void f_10bc4370(void) {
  FTRACE(0x10bc4370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4370 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bc4374 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc4378 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bc437a je 0x10bc43c3 */
  if (C.zf) goto L_10bc43c3;
  /* 10bc437c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc437e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10bc4382 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4383 mov edi, ecx */
  EDI = (ECX);
  /* 10bc4385 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4388 jb 0x10bc43b7 */
  if (C.cf) goto L_10bc43b7;
  /* 10bc438a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bc438c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10bc438f je 0x10bc4399 */
  if (C.zf) goto L_10bc4399;
  /* 10bc4391 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10bc4393:;
  /* 10bc4393 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc4395 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc4396 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc4397 jne 0x10bc4393 */
  if (!C.zf) goto L_10bc4393;
L_10bc4399:;
  /* 10bc4399 mov ecx, eax */
  ECX = (EAX);
  /* 10bc439b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10bc439e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc43a0 mov ecx, eax */
  ECX = (EAX);
  /* 10bc43a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bc43a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc43a7 mov ecx, edx */
  ECX = (EDX);
  /* 10bc43a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bc43ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc43af je 0x10bc43b7 */
  if (C.zf) goto L_10bc43b7;
  /* 10bc43b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bc43b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bc43b5 je 0x10bc43bd */
  if (C.zf) goto L_10bc43bd;
L_10bc43b7:;
  /* 10bc43b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc43b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc43ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10bc43bb jne 0x10bc43b7 */
  if (!C.zf) goto L_10bc43b7;
L_10bc43bd:;
  /* 10bc43bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc43c1 pop edi */
  EDI = (pop32());
  /* 10bc43c2 ret  */
  ESPCHK(0x10bc4370u, _esp0);
  ESP += 4; return;
L_10bc43c3:;
  /* 10bc43c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc43c7 ret  */
  ESPCHK(0x10bc4370u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c8 @ 0x10bc43c8 (27 bytes, 13 insns) */
void f_10bc43c8(void) {
  FTRACE(0x10bc43c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc43c8 mov eax, dword ptr [0x10bc6c00] */
  EAX = (r32((uint32_t)(0x10bc6c00)));
  /* 10bc43cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc43cf je 0x10bc43e0 */
  if (C.zf) goto L_10bc43e0;
  /* 10bc43d1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10bc43d5 call eax */
  call_ind((uint32_t)(EAX), 0x10bc43d7u);
  /* 10bc43d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc43d9 pop ecx */
  ECX = (pop32());
  /* 10bc43da je 0x10bc43e0 */
  if (C.zf) goto L_10bc43e0;
  /* 10bc43dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc43de pop eax */
  EAX = (pop32());
  /* 10bc43df ret  */
  ESPCHK(0x10bc43c8u, _esp0);
  ESP += 4; return;
L_10bc43e0:;
  /* 10bc43e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bc43e2 ret  */
  ESPCHK(0x10bc43c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e3 @ 0x10bc43e3 (511 bytes, 193 insns) */
void f_10bc43e3(void) {
  FTRACE(0x10bc43e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc43e3 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc43e4 mov ebp, esp */
  EBP = (ESP);
  /* 10bc43e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bc43e8 push 0x10bc5478 */
  push32((uint32_t)(0x10bc5478u));
  /* 10bc43ed push 0x10bc4bb0 */
  push32((uint32_t)(0x10bc4bb0u));
  /* 10bc43f2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10bc43f8 push eax */
  push32((uint32_t)(EAX));
  /* 10bc43f9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10bc4400 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc4403 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4404 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4405 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4406 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bc4409 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc440b cmp dword ptr [0x10bc6c28], edi */
  { uint32_t _a=(r32((uint32_t)(0x10bc6c28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4411 jne 0x10bc4459 */
  if (!C.zf) goto L_10bc4459;
  /* 10bc4413 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4414 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4415 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc4417 pop ebx */
  EBX = (pop32());
  /* 10bc4418 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4419 push 0x10bc5470 */
  push32((uint32_t)(0x10bc5470u));
  /* 10bc441e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10bc4423 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4424 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4425 call dword ptr [0x10bc5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5010))), 0x10bc442bu);
  /* 10bc442b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc442d je 0x10bc4437 */
  if (C.zf) goto L_10bc4437;
  /* 10bc442f mov dword ptr [0x10bc6c28], ebx */
  w32((uint32_t)(0x10bc6c28), (EBX));
  /* 10bc4435 jmp 0x10bc4459 */
  goto L_10bc4459;
L_10bc4437:;
  /* 10bc4437 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4438 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4439 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc443a push 0x10bc546c */
  push32((uint32_t)(0x10bc546cu));
  /* 10bc443f push esi */
  push32((uint32_t)(ESI));
  /* 10bc4440 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4441 call dword ptr [0x10bc5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5014))), 0x10bc4447u);
  /* 10bc4447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc4449 je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc444f mov dword ptr [0x10bc6c28], 2 */
  w32((uint32_t)(0x10bc6c28), (0x2u));
L_10bc4459:;
  /* 10bc4459 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc445c jle 0x10bc446e */
  if ((C.zf||C.sf!=C.of)) goto L_10bc446e;
  /* 10bc445e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bc4461 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc4464 call 0x10bc4607 */
  push32(0x10bc4469u); f_10bc4607();
  /* 10bc4469 pop ecx */
  ECX = (pop32());
  /* 10bc446a pop ecx */
  ECX = (pop32());
  /* 10bc446b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10bc446e:;
  /* 10bc446e mov eax, dword ptr [0x10bc6c28] */
  EAX = (r32((uint32_t)(0x10bc6c28)));
  /* 10bc4473 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4476 jne 0x10bc4495 */
  if (!C.zf) goto L_10bc4495;
  /* 10bc4478 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10bc447b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bc447e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bc4481 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc4484 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc4487 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc448a call dword ptr [0x10bc5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5014))), 0x10bc4490u);
  /* 10bc4490 jmp 0x10bc4573 */
  goto L_10bc4573;
L_10bc4495:;
  /* 10bc4495 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4498 jne 0x10bc4571 */
  if (!C.zf) goto L_10bc4571;
  /* 10bc449e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc44a1 jne 0x10bc44ab */
  if (!C.zf) goto L_10bc44ab;
  /* 10bc44a3 mov eax, dword ptr [0x10bc6c20] */
  EAX = (r32((uint32_t)(0x10bc6c20)));
  /* 10bc44a8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10bc44ab:;
  /* 10bc44ab push edi */
  push32((uint32_t)(EDI));
  /* 10bc44ac push edi */
  push32((uint32_t)(EDI));
  /* 10bc44ad push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bc44b0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc44b3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10bc44b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bc44b8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc44ba and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10bc44bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc44be push eax */
  push32((uint32_t)(EAX));
  /* 10bc44bf push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10bc44c2 call dword ptr [0x10bc5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5024))), 0x10bc44c8u);
  /* 10bc44c8 mov ebx, eax */
  EBX = (EAX);
  /* 10bc44ca mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10bc44cd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc44cf je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc44d5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10bc44d8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10bc44db add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc44de and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bc44e0 call 0x10bc4c90 */
  push32(0x10bc44e5u); f_10bc4c90();
  /* 10bc44e5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bc44e8 mov eax, esp */
  EAX = (ESP);
  /* 10bc44ea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bc44ed or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc44f1 jmp 0x10bc4506 */
  goto L_10bc4506;
  /* 10bc44f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc44f5 pop eax */
  EAX = (pop32());
  /* 10bc44f6 ret  */
  ESPCHK(0x10bc43e3u, _esp0);
  ESP += 4; return;
  /* 10bc44f7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bc44fa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc44fc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10bc44ff or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc4503 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10bc4506:;
  /* 10bc4506 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4509 je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc450b push ebx */
  push32((uint32_t)(EBX));
  /* 10bc450c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bc450f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bc4512 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc4515 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc4517 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10bc451a call dword ptr [0x10bc5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5024))), 0x10bc4520u);
  /* 10bc4520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc4522 je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc4524 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4525 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4526 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4527 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bc452a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc452d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc4530 call dword ptr [0x10bc5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5010))), 0x10bc4536u);
  /* 10bc4536 mov esi, eax */
  ESI = (EAX);
  /* 10bc4538 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10bc453b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc453d je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc453f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10bc4543 je 0x10bc4585 */
  if (C.zf) goto L_10bc4585;
  /* 10bc4545 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4548 je 0x10bc4600 */
  if (C.zf) goto L_10bc4600;
  /* 10bc454e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4551 jg 0x10bc4571 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bc4571;
  /* 10bc4553 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10bc4556 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bc4559 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc455a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bc455d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc4560 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc4563 call dword ptr [0x10bc5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5010))), 0x10bc4569u);
  /* 10bc4569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc456b jne 0x10bc4600 */
  if (!C.zf) goto L_10bc4600;
L_10bc4571:;
  /* 10bc4571 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bc4573:;
  /* 10bc4573 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10bc4576 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bc4579 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10bc4580 pop edi */
  EDI = (pop32());
  /* 10bc4581 pop esi */
  ESI = (pop32());
  /* 10bc4582 pop ebx */
  EBX = (pop32());
  /* 10bc4583 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4584 ret  */
  ESPCHK(0x10bc43e3u, _esp0);
  ESP += 4; return;
L_10bc4585:;
  /* 10bc4585 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bc458c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10bc458f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4592 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bc4594 call 0x10bc4c90 */
  push32(0x10bc4599u); f_10bc4c90();
  /* 10bc4599 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bc459c mov ebx, esp */
  EBX = (ESP);
  /* 10bc459e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10bc45a1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc45a5 jmp 0x10bc45b9 */
  goto L_10bc45b9;
  /* 10bc45a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc45a9 pop eax */
  EAX = (pop32());
  /* 10bc45aa ret  */
  ESPCHK(0x10bc43e3u, _esp0);
  ESP += 4; return;
  /* 10bc45ab mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bc45ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10bc45b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc45b2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc45b6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10bc45b9:;
  /* 10bc45b9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc45bb je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc45bd push esi */
  push32((uint32_t)(ESI));
  /* 10bc45be push ebx */
  push32((uint32_t)(EBX));
  /* 10bc45bf push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10bc45c2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10bc45c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc45c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc45cb call dword ptr [0x10bc5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5010))), 0x10bc45d1u);
  /* 10bc45d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc45d3 je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
  /* 10bc45d5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc45d8 push edi */
  push32((uint32_t)(EDI));
  /* 10bc45d9 push edi */
  push32((uint32_t)(EDI));
  /* 10bc45da jne 0x10bc45e0 */
  if (!C.zf) goto L_10bc45e0;
  /* 10bc45dc push edi */
  push32((uint32_t)(EDI));
  /* 10bc45dd push edi */
  push32((uint32_t)(EDI));
  /* 10bc45de jmp 0x10bc45e6 */
  goto L_10bc45e6;
L_10bc45e0:;
  /* 10bc45e0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10bc45e3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10bc45e6:;
  /* 10bc45e6 push esi */
  push32((uint32_t)(ESI));
  /* 10bc45e7 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc45e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10bc45ed push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10bc45f0 call dword ptr [0x10bc5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5064))), 0x10bc45f6u);
  /* 10bc45f6 mov esi, eax */
  ESI = (EAX);
  /* 10bc45f8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc45fa je 0x10bc4571 */
  if (C.zf) goto L_10bc4571;
L_10bc4600:;
  /* 10bc4600 mov eax, esi */
  EAX = (ESI);
  /* 10bc4602 jmp 0x10bc4573 */
  goto L_10bc4573;
}

/* FUN_10004607 @ 0x10bc4607 (43 bytes, 20 insns) */
void f_10bc4607(void) {
  FTRACE(0x10bc4607u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4607 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc460b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bc460f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bc4611 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4612 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10bc4615 je 0x10bc4624 */
  if (C.zf) goto L_10bc4624;
L_10bc4617:;
  /* 10bc4617 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc461a je 0x10bc4624 */
  if (C.zf) goto L_10bc4624;
  /* 10bc461c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc461d mov esi, ecx */
  ESI = (ECX);
  /* 10bc461f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bc4620 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10bc4622 jne 0x10bc4617 */
  if (!C.zf) goto L_10bc4617;
L_10bc4624:;
  /* 10bc4624 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bc4627 pop esi */
  ESI = (pop32());
  /* 10bc4628 jne 0x10bc462f */
  if (!C.zf) goto L_10bc462f;
  /* 10bc462a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc462e ret  */
  ESPCHK(0x10bc4607u, _esp0);
  ESP += 4; return;
L_10bc462f:;
  /* 10bc462f mov eax, edx */
  EAX = (EDX);
  /* 10bc4631 ret  */
  ESPCHK(0x10bc4607u, _esp0);
  ESP += 4; return;
}

/* FUN_10004632 @ 0x10bc4632 (318 bytes, 123 insns) */
void f_10bc4632(void) {
  FTRACE(0x10bc4632u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4632 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc4633 mov ebp, esp */
  EBP = (ESP);
  /* 10bc4635 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bc4637 push 0x10bc5490 */
  push32((uint32_t)(0x10bc5490u));
  /* 10bc463c push 0x10bc4bb0 */
  push32((uint32_t)(0x10bc4bb0u));
  /* 10bc4641 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10bc4647 push eax */
  push32((uint32_t)(EAX));
  /* 10bc4648 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10bc464f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc4652 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4653 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4654 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4655 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bc4658 mov eax, dword ptr [0x10bc6c2c] */
  EAX = (r32((uint32_t)(0x10bc6c2c)));
  /* 10bc465d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc465f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4661 jne 0x10bc46a1 */
  if (!C.zf) goto L_10bc46a1;
  /* 10bc4663 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10bc4666 push eax */
  push32((uint32_t)(EAX));
  /* 10bc4667 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc4669 pop esi */
  ESI = (pop32());
  /* 10bc466a push esi */
  push32((uint32_t)(ESI));
  /* 10bc466b push 0x10bc5470 */
  push32((uint32_t)(0x10bc5470u));
  /* 10bc4670 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4671 call dword ptr [0x10bc500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc500c))), 0x10bc4677u);
  /* 10bc4677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc4679 je 0x10bc467f */
  if (C.zf) goto L_10bc467f;
  /* 10bc467b mov eax, esi */
  EAX = (ESI);
  /* 10bc467d jmp 0x10bc469c */
  goto L_10bc469c;
L_10bc467f:;
  /* 10bc467f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10bc4682 push eax */
  push32((uint32_t)(EAX));
  /* 10bc4683 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4684 push 0x10bc546c */
  push32((uint32_t)(0x10bc546cu));
  /* 10bc4689 push esi */
  push32((uint32_t)(ESI));
  /* 10bc468a push ebx */
  push32((uint32_t)(EBX));
  /* 10bc468b call dword ptr [0x10bc5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5018))), 0x10bc4691u);
  /* 10bc4691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bc4693 je 0x10bc4767 */
  if (C.zf) goto L_10bc4767;
  /* 10bc4699 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bc469b pop eax */
  EAX = (pop32());
L_10bc469c:;
  /* 10bc469c mov dword ptr [0x10bc6c2c], eax */
  w32((uint32_t)(0x10bc6c2c), (EAX));
L_10bc46a1:;
  /* 10bc46a1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc46a4 jne 0x10bc46ca */
  if (!C.zf) goto L_10bc46ca;
  /* 10bc46a6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10bc46a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc46ab jne 0x10bc46b2 */
  if (!C.zf) goto L_10bc46b2;
  /* 10bc46ad mov eax, dword ptr [0x10bc6c10] */
  EAX = (r32((uint32_t)(0x10bc6c10)));
L_10bc46b2:;
  /* 10bc46b2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bc46b5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc46b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc46bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc46be push eax */
  push32((uint32_t)(EAX));
  /* 10bc46bf call dword ptr [0x10bc5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5018))), 0x10bc46c5u);
  /* 10bc46c5 jmp 0x10bc4769 */
  goto L_10bc4769;
L_10bc46ca:;
  /* 10bc46ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc46cd jne 0x10bc4767 */
  if (!C.zf) goto L_10bc4767;
  /* 10bc46d3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc46d6 jne 0x10bc46e0 */
  if (!C.zf) goto L_10bc46e0;
  /* 10bc46d8 mov eax, dword ptr [0x10bc6c20] */
  EAX = (r32((uint32_t)(0x10bc6c20)));
  /* 10bc46dd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10bc46e0:;
  /* 10bc46e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc46e1 push ebx */
  push32((uint32_t)(EBX));
  /* 10bc46e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc46e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc46e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bc46eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bc46ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc46ef and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10bc46f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bc46f3 push eax */
  push32((uint32_t)(EAX));
  /* 10bc46f4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bc46f7 call dword ptr [0x10bc5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5024))), 0x10bc46fdu);
  /* 10bc46fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bc4700 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4702 je 0x10bc4767 */
  if (C.zf) goto L_10bc4767;
  /* 10bc4704 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10bc4707 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10bc470a mov eax, edi */
  EAX = (EDI);
  /* 10bc470c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc470f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bc4711 call 0x10bc4c90 */
  push32(0x10bc4716u); f_10bc4c90();
  /* 10bc4716 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bc4719 mov esi, esp */
  ESI = (ESP);
  /* 10bc471b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10bc471e push edi */
  push32((uint32_t)(EDI));
  /* 10bc471f push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4720 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4721 call 0x10bc4370 */
  push32(0x10bc4726u); f_10bc4370();
  /* 10bc4726 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4729 jmp 0x10bc4736 */
  goto L_10bc4736;
  /* 10bc472b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc472d pop eax */
  EAX = (pop32());
  /* 10bc472e ret  */
  ESPCHK(0x10bc4632u, _esp0);
  ESP += 4; return;
  /* 10bc472f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bc4732 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10bc4734 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10bc4736:;
  /* 10bc4736 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10bc473a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc473c je 0x10bc4767 */
  if (C.zf) goto L_10bc4767;
  /* 10bc473e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10bc4741 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4742 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10bc4745 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10bc4748 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bc474a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10bc474d call dword ptr [0x10bc5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc5024))), 0x10bc4753u);
  /* 10bc4753 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4755 je 0x10bc4767 */
  if (C.zf) goto L_10bc4767;
  /* 10bc4757 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10bc475a push eax */
  push32((uint32_t)(EAX));
  /* 10bc475b push esi */
  push32((uint32_t)(ESI));
  /* 10bc475c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc475f call dword ptr [0x10bc500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bc500c))), 0x10bc4765u);
  /* 10bc4765 jmp 0x10bc4769 */
  goto L_10bc4769;
L_10bc4767:;
  /* 10bc4767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bc4769:;
  /* 10bc4769 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10bc476c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bc476f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10bc4776 pop edi */
  EDI = (pop32());
  /* 10bc4777 pop esi */
  ESI = (pop32());
  /* 10bc4778 pop ebx */
  EBX = (pop32());
  /* 10bc4779 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc477a ret  */
  ESPCHK(0x10bc4632u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x10bc4780 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10bc4780(void) {
  FTRACE(0x10bc4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4780 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc4781 mov ebp, esp */
  EBP = (ESP);
  /* 10bc4783 push edi */
  push32((uint32_t)(EDI));
  /* 10bc4784 push esi */
  push32((uint32_t)(ESI));
  /* 10bc4785 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bc4788 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bc478b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc478e mov eax, ecx */
  EAX = (ECX);
  /* 10bc4790 mov edx, ecx */
  EDX = (ECX);
  /* 10bc4792 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4794 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4796 jbe 0x10bc47a0 */
  if ((C.cf||C.zf)) goto L_10bc47a0;
  /* 10bc4798 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc479a jb 0x10bc4918 */
  if (C.cf) goto L_10bc4918;
L_10bc47a0:;
  /* 10bc47a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bc47a6 jne 0x10bc47bc */
  if (!C.zf) goto L_10bc47bc;
  /* 10bc47a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc47ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bc47ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc47b1 jb 0x10bc47dc */
  if (C.cf) goto L_10bc47dc;
  /* 10bc47b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc47b5 jmp dword ptr [edx*4 + 0x10bc48c8] */
  switch (EDX) {
    case 0: goto L_10bc48d8;
    case 1: goto L_10bc48e0;
    case 2: goto L_10bc48ec;
    case 3: goto L_10bc4900;
    default: x86_unimpl("switch@0x10bc47b5 out of table"); return;
  }
L_10bc47bc:;
  /* 10bc47bc mov eax, edi */
  EAX = (EDI);
  /* 10bc47be mov edx, 3 */
  EDX = (0x3u);
  /* 10bc47c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc47c6 jb 0x10bc47d4 */
  if (C.cf) goto L_10bc47d4;
  /* 10bc47c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bc47cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc47cd jmp dword ptr [eax*4 + 0x10bc47e0] */
  switch (EAX) {
    case 1: goto L_10bc47f0;
    case 2: goto L_10bc481c;
    case 3: goto L_10bc4840;
    default: x86_unimpl("switch@0x10bc47cd out of table"); return;
  }
L_10bc47d4:;
  /* 10bc47d4 jmp dword ptr [ecx*4 + 0x10bc48d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10bc48d8)))); return;
  /* 10bc47db nop  */
  /* nop */
L_10bc47dc:;
  /* 10bc47dc jmp dword ptr [ecx*4 + 0x10bc485c] */
  switch (ECX) {
    case 0: goto L_10bc48bf;
    case 1: goto L_10bc48ac;
    case 2: goto L_10bc48a4;
    case 3: goto L_10bc489c;
    case 4: goto L_10bc4894;
    case 5: goto L_10bc488c;
    case 6: goto L_10bc4884;
    case 7: goto L_10bc487c;
    default: x86_unimpl("switch@0x10bc47dc out of table"); return;
  }
  /* 10bc47e3 nop  */
  /* nop */
L_10bc47f0:;
  /* 10bc47f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc47f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc47f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc47f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc47f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc47fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc47ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc4802 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc4805 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4808 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc480b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc480e jb 0x10bc47dc */
  if (C.cf) goto L_10bc47dc;
  /* 10bc4810 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc4812 jmp dword ptr [edx*4 + 0x10bc48c8] */
  switch (EDX) {
    case 0: goto L_10bc48d8;
    case 1: goto L_10bc48e0;
    case 2: goto L_10bc48ec;
    case 3: goto L_10bc4900;
    default: x86_unimpl("switch@0x10bc4812 out of table"); return;
  }
  /* 10bc4819 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc481c:;
  /* 10bc481c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc481e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc4820 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc4822 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc4825 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc4828 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc482b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc482e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4831 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4834 jb 0x10bc47dc */
  if (C.cf) goto L_10bc47dc;
  /* 10bc4836 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc4838 jmp dword ptr [edx*4 + 0x10bc48c8] */
  switch (EDX) {
    case 0: goto L_10bc48d8;
    case 1: goto L_10bc48e0;
    case 2: goto L_10bc48ec;
    case 3: goto L_10bc4900;
    default: x86_unimpl("switch@0x10bc4838 out of table"); return;
  }
  /* 10bc483f nop  */
  /* nop */
L_10bc4840:;
  /* 10bc4840 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc4842 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc4844 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc4846 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bc4847 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc484a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bc484b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc484e jb 0x10bc47dc */
  if (C.cf) goto L_10bc47dc;
  /* 10bc4850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc4852 jmp dword ptr [edx*4 + 0x10bc48c8] */
  switch (EDX) {
    case 0: goto L_10bc48d8;
    case 1: goto L_10bc48e0;
    case 2: goto L_10bc48ec;
    case 3: goto L_10bc4900;
    default: x86_unimpl("switch@0x10bc4852 out of table"); return;
  }
  /* 10bc4859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc487c:;
  /* 10bc487c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10bc4880 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10bc4884:;
  /* 10bc4884 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10bc4888 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10bc488c:;
  /* 10bc488c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10bc4890 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10bc4894:;
  /* 10bc4894 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10bc4898 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10bc489c:;
  /* 10bc489c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10bc48a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10bc48a4:;
  /* 10bc48a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10bc48a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10bc48ac:;
  /* 10bc48ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10bc48b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10bc48b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bc48bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc48bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bc48bf:;
  /* 10bc48bf jmp dword ptr [edx*4 + 0x10bc48c8] */
  switch (EDX) {
    case 0: goto L_10bc48d8;
    case 1: goto L_10bc48e0;
    case 2: goto L_10bc48ec;
    case 3: goto L_10bc4900;
    default: x86_unimpl("switch@0x10bc48bf out of table"); return;
  }
  /* 10bc48c6 mov edi, edi */
  EDI = (EDI);
L_10bc48d8:;
  /* 10bc48d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc48db pop esi */
  ESI = (pop32());
  /* 10bc48dc pop edi */
  EDI = (pop32());
  /* 10bc48dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc48de ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc48df nop  */
  /* nop */
L_10bc48e0:;
  /* 10bc48e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc48e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc48e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc48e7 pop esi */
  ESI = (pop32());
  /* 10bc48e8 pop edi */
  EDI = (pop32());
  /* 10bc48e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc48ea ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc48eb nop  */
  /* nop */
L_10bc48ec:;
  /* 10bc48ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc48ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc48f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc48f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc48f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc48f9 pop esi */
  ESI = (pop32());
  /* 10bc48fa pop edi */
  EDI = (pop32());
  /* 10bc48fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc48fc ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc48fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc4900:;
  /* 10bc4900 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bc4902 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bc4904 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc4907 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc490a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc490d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc4910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc4913 pop esi */
  ESI = (pop32());
  /* 10bc4914 pop edi */
  EDI = (pop32());
  /* 10bc4915 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4916 ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc4917 nop  */
  /* nop */
L_10bc4918:;
  /* 10bc4918 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10bc491c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10bc4920 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bc4926 jne 0x10bc494c */
  if (!C.zf) goto L_10bc494c;
  /* 10bc4928 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc492b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bc492e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4931 jb 0x10bc4940 */
  if (C.cf) goto L_10bc4940;
  /* 10bc4933 std  */
  C.df=1;
  /* 10bc4934 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc4936 cld  */
  C.df=0;
  /* 10bc4937 jmp dword ptr [edx*4 + 0x10bc4a60] */
  switch (EDX) {
    case 0: goto L_10bc4a70;
    case 1: goto L_10bc4a78;
    case 2: goto L_10bc4a88;
    case 3: goto L_10bc4a9c;
    default: x86_unimpl("switch@0x10bc4937 out of table"); return;
  }
  /* 10bc493e mov edi, edi */
  EDI = (EDI);
L_10bc4940:;
  /* 10bc4940 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bc4942 jmp dword ptr [ecx*4 + 0x10bc4a10] */
  switch (ECX) {
    case 0: goto L_10bc4a57;
    default: x86_unimpl("switch@0x10bc4942 out of table"); return;
  }
  /* 10bc4949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc494c:;
  /* 10bc494c mov eax, edi */
  EAX = (EDI);
  /* 10bc494e mov edx, 3 */
  EDX = (0x3u);
  /* 10bc4953 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4956 jb 0x10bc4964 */
  if (C.cf) goto L_10bc4964;
  /* 10bc4958 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bc495b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc495d jmp dword ptr [eax*4 + 0x10bc4968] */
  switch (EAX) {
    case 1: goto L_10bc4978;
    case 2: goto L_10bc4998;
    case 3: goto L_10bc49c0;
    default: x86_unimpl("switch@0x10bc495d out of table"); return;
  }
L_10bc4964:;
  /* 10bc4964 jmp dword ptr [ecx*4 + 0x10bc4a60] */
  switch (ECX) {
    case 0: goto L_10bc4a70;
    case 1: goto L_10bc4a78;
    case 2: goto L_10bc4a88;
    case 3: goto L_10bc4a9c;
    default: x86_unimpl("switch@0x10bc4964 out of table"); return;
  }
  /* 10bc496b nop  */
  /* nop */
L_10bc4978:;
  /* 10bc4978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc497b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc497d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc4980 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bc4981 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc4984 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bc4985 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4988 jb 0x10bc4940 */
  if (C.cf) goto L_10bc4940;
  /* 10bc498a std  */
  C.df=1;
  /* 10bc498b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc498d cld  */
  C.df=0;
  /* 10bc498e jmp dword ptr [edx*4 + 0x10bc4a60] */
  switch (EDX) {
    case 0: goto L_10bc4a70;
    case 1: goto L_10bc4a78;
    case 2: goto L_10bc4a88;
    case 3: goto L_10bc4a9c;
    default: x86_unimpl("switch@0x10bc498e out of table"); return;
  }
  /* 10bc4995 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc4998:;
  /* 10bc4998 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc499b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc499d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc49a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc49a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc49a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc49a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc49ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc49af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc49b2 jb 0x10bc4940 */
  if (C.cf) goto L_10bc4940;
  /* 10bc49b4 std  */
  C.df=1;
  /* 10bc49b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc49b7 cld  */
  C.df=0;
  /* 10bc49b8 jmp dword ptr [edx*4 + 0x10bc4a60] */
  switch (EDX) {
    case 0: goto L_10bc4a70;
    case 1: goto L_10bc4a78;
    case 2: goto L_10bc4a88;
    case 3: goto L_10bc4a9c;
    default: x86_unimpl("switch@0x10bc49b8 out of table"); return;
  }
  /* 10bc49bf nop  */
  /* nop */
L_10bc49c0:;
  /* 10bc49c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc49c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bc49c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc49c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc49cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc49ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc49d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bc49d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc49d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc49da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc49dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc49e0 jb 0x10bc4940 */
  if (C.cf) goto L_10bc4940;
  /* 10bc49e6 std  */
  C.df=1;
  /* 10bc49e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bc49e9 cld  */
  C.df=0;
  /* 10bc49ea jmp dword ptr [edx*4 + 0x10bc4a60] */
  switch (EDX) {
    case 0: goto L_10bc4a70;
    case 1: goto L_10bc4a78;
    case 2: goto L_10bc4a88;
    case 3: goto L_10bc4a9c;
    default: x86_unimpl("switch@0x10bc49ea out of table"); return;
  }
  /* 10bc49f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10bc49f4 adc al, 0x4a */
  { uint32_t _a=(AL),_b=(0x4au),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bc49f6 mov esp, 0xbc4a1c10 */
  ESP = (0xbc4a1c10u);
  /* 10bc49fb adc byte ptr [edx + ecx*2], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bc49fe mov esp, 0xbc4a2c10 */
  ESP = (0xbc4a2c10u);
  /* 10bc4a03 adc byte ptr [edx + ecx*2], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bc4a06 mov esp, 0xbc4a3c10 */
  ESP = (0xbc4a3c10u);
  /* 10bc4a0b adc byte ptr [edx + ecx*2 - 0x44], al */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2 + -0x44))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2 + -0x44), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bc4a14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10bc4a18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10bc4a1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10bc4a20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10bc4a24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10bc4a28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10bc4a2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10bc4a30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10bc4a34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10bc4a38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10bc4a3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10bc4a40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10bc4a44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10bc4a48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10bc4a4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bc4a53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4a55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bc4a57:;
  /* 10bc4a57 jmp dword ptr [edx*4 + 0x10bc4a60] */
  switch (EDX) {
    case 0: goto L_10bc4a70;
    case 1: goto L_10bc4a78;
    case 2: goto L_10bc4a88;
    case 3: goto L_10bc4a9c;
    default: x86_unimpl("switch@0x10bc4a57 out of table"); return;
  }
  /* 10bc4a5e mov edi, edi */
  EDI = (EDI);
L_10bc4a70:;
  /* 10bc4a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc4a73 pop esi */
  ESI = (pop32());
  /* 10bc4a74 pop edi */
  EDI = (pop32());
  /* 10bc4a75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4a76 ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc4a77 nop  */
  /* nop */
L_10bc4a78:;
  /* 10bc4a78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc4a7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc4a7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc4a81 pop esi */
  ESI = (pop32());
  /* 10bc4a82 pop edi */
  EDI = (pop32());
  /* 10bc4a83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4a84 ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc4a85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bc4a88:;
  /* 10bc4a88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc4a8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc4a8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc4a91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc4a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc4a97 pop esi */
  ESI = (pop32());
  /* 10bc4a98 pop edi */
  EDI = (pop32());
  /* 10bc4a99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4a9a ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
  /* 10bc4a9b nop  */
  /* nop */
L_10bc4a9c:;
  /* 10bc4a9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bc4a9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bc4aa2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bc4aa5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bc4aa8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bc4aab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bc4aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc4ab1 pop esi */
  ESI = (pop32());
  /* 10bc4ab2 pop edi */
  EDI = (pop32());
  /* 10bc4ab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bc4ab4 ret  */
  ESPCHK(0x10bc4780u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10bc4ab8 (32 bytes, 18 insns) */
void f_10bc4ab8(void) {
  FTRACE(0x10bc4ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4ab8 push ebp */
  push32((uint32_t)(EBP));
  /* 10bc4ab9 mov ebp, esp */
  EBP = (ESP);
  /* 10bc4abb push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4abc push esi */
  push32((uint32_t)(ESI));
  /* 10bc4abd push edi */
  push32((uint32_t)(EDI));
  /* 10bc4abe push ebp */
  push32((uint32_t)(EBP));
  /* 10bc4abf push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc4ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bc4ac3 push 0x10bc4ad0 */
  push32((uint32_t)(0x10bc4ad0u));
  /* 10bc4ac8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bc4acb call 0x10bc4cc0 */
  push32(0x10bc4ad0u); f_10bc4cc0();
  /* 10bc4ad0 pop ebp */
  EBP = (pop32());
  /* 10bc4ad1 pop edi */
  EDI = (pop32());
  /* 10bc4ad2 pop esi */
  ESI = (pop32());
  /* 10bc4ad3 pop ebx */
  EBX = (pop32());
  /* 10bc4ad4 mov esp, ebp */
  ESP = (EBP);
  /* 10bc4ad6 pop ebp */
  EBP = (pop32());
  /* 10bc4ad7 ret  */
  ESPCHK(0x10bc4ab8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10bc4afa (104 bytes, 33 insns) */
void f_10bc4afa(void) {
  FTRACE(0x10bc4afau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4afa push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4afb push esi */
  push32((uint32_t)(ESI));
  /* 10bc4afc push edi */
  push32((uint32_t)(EDI));
  /* 10bc4afd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bc4b01 push eax */
  push32((uint32_t)(EAX));
  /* 10bc4b02 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10bc4b04 push 0x10bc4ad8 */
  push32((uint32_t)(0x10bc4ad8u));
  /* 10bc4b09 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10bc4b10 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10bc4b17:;
  /* 10bc4b17 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10bc4b1b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bc4b1e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10bc4b21 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4b24 je 0x10bc4b54 */
  if (C.zf) goto L_10bc4b54;
  /* 10bc4b26 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4b2a je 0x10bc4b54 */
  if (C.zf) goto L_10bc4b54;
  /* 10bc4b2c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10bc4b2f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10bc4b32 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10bc4b36 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10bc4b39 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4b3e jne 0x10bc4b52 */
  if (!C.zf) goto L_10bc4b52;
  /* 10bc4b40 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10bc4b45 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10bc4b49 call 0x10bc4b8e */
  push32(0x10bc4b4eu); f_10bc4b8e();
  /* 10bc4b4e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10bc4b52u);
L_10bc4b52:;
  /* 10bc4b52 jmp 0x10bc4b17 */
  goto L_10bc4b17;
L_10bc4b54:;
  /* 10bc4b54 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10bc4b5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4b5e pop edi */
  EDI = (pop32());
  /* 10bc4b5f pop esi */
  ESI = (pop32());
  /* 10bc4b60 pop ebx */
  EBX = (pop32());
  /* 10bc4b61 ret  */
  ESPCHK(0x10bc4afau, _esp0);
  ESP += 4; return;
}

/* FUN_10004b8e @ 0x10bc4b8e (24 bytes, 10 insns) */
void f_10bc4b8e(void) {
  FTRACE(0x10bc4b8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4b8e push ebx */
  push32((uint32_t)(EBX));
  /* 10bc4b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10bc4b90 mov ebx, 0x10bc6870 */
  EBX = (0x10bc6870u);
  /* 10bc4b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bc4b98 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10bc4b9b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10bc4b9e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10bc4ba1 pop ecx */
  ECX = (pop32());
  /* 10bc4ba2 pop ebx */
  EBX = (pop32());
  /* 10bc4ba3 ret 4 */
  ESPCHK(0x10bc4b8eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004c6d @ 0x10bc4c6d (27 bytes, 11 insns) */
void f_10bc4c6d(void) {
  FTRACE(0x10bc4c6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4c6d push ebp */
  push32((uint32_t)(EBP));
  /* 10bc4c6e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bc4c72 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10bc4c74 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10bc4c77 push eax */
  push32((uint32_t)(EAX));
  /* 10bc4c78 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bc4c7b push eax */
  push32((uint32_t)(EAX));
  /* 10bc4c7c call 0x10bc4afa */
  push32(0x10bc4c81u); f_10bc4afa();
  /* 10bc4c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bc4c84 pop ebp */
  EBP = (pop32());
  /* 10bc4c85 ret 4 */
  ESPCHK(0x10bc4c6du, _esp0);
  ESP += 8; return;
}

/* FUN_10004c90 @ 0x10bc4c90 (47 bytes, 17 insns) */
void f_10bc4c90(void) {
  FTRACE(0x10bc4c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4c90 push ecx */
  push32((uint32_t)(ECX));
  /* 10bc4c91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4c96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10bc4c9a jb 0x10bc4cb0 */
  if (C.cf) goto L_10bc4cb0;
L_10bc4c9c:;
  /* 10bc4c9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc4ca2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc4ca7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10bc4ca9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bc4cae jae 0x10bc4c9c */
  if (!C.cf) goto L_10bc4c9c;
L_10bc4cb0:;
  /* 10bc4cb0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bc4cb2 mov eax, esp */
  EAX = (ESP);
  /* 10bc4cb4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10bc4cb6 mov esp, ecx */
  ESP = (ECX);
  /* 10bc4cb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bc4cba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bc4cbd push eax */
  push32((uint32_t)(EAX));
  /* 10bc4cbe ret  */
  ESPCHK(0x10bc4c90u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10bc4cc0 (6 bytes, 1 insns) */
void f_10bc4cc0(void) {
  FTRACE(0x10bc4cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bc4cc0 jmp dword ptr [0x10bc5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10bc5008)))); return;
}

