#include "recomp.h"

/* OnInit @ 0x117e1000 (279 bytes, 73 insns) */
void f_117e1000(void) {
  FTRACE(0x117e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1000 push esi */
  push32((uint32_t)(ESI));
  /* 117e1001 mov esi, dword ptr [0x117e510c] */
  ESI = (r32((uint32_t)(0x117e510c)));
  /* 117e1007 push 0x117e613c */
  push32((uint32_t)(0x117e613cu));
  /* 117e100c push 0x117e6520 */
  push32((uint32_t)(0x117e6520u));
  /* 117e1011 call esi */
  call_ind((uint32_t)(ESI), 0x117e1013u);
  /* 117e1013 push 0x117e6134 */
  push32((uint32_t)(0x117e6134u));
  /* 117e1018 push 0x117e6518 */
  push32((uint32_t)(0x117e6518u));
  /* 117e101d call esi */
  call_ind((uint32_t)(ESI), 0x117e101fu);
  /* 117e101f push 0x117e612c */
  push32((uint32_t)(0x117e612cu));
  /* 117e1024 push 0x117e6510 */
  push32((uint32_t)(0x117e6510u));
  /* 117e1029 call esi */
  call_ind((uint32_t)(ESI), 0x117e102bu);
  /* 117e102b push 0x117e6124 */
  push32((uint32_t)(0x117e6124u));
  /* 117e1030 push 0x117e6530 */
  push32((uint32_t)(0x117e6530u));
  /* 117e1035 call esi */
  call_ind((uint32_t)(ESI), 0x117e1037u);
  /* 117e1037 mov esi, dword ptr [0x117e5110] */
  ESI = (r32((uint32_t)(0x117e5110)));
  /* 117e103d push 0x117e6118 */
  push32((uint32_t)(0x117e6118u));
  /* 117e1042 push 0x117e6540 */
  push32((uint32_t)(0x117e6540u));
  /* 117e1047 call esi */
  call_ind((uint32_t)(ESI), 0x117e1049u);
  /* 117e1049 push 0x117e6108 */
  push32((uint32_t)(0x117e6108u));
  /* 117e104e push 0x117e6548 */
  push32((uint32_t)(0x117e6548u));
  /* 117e1053 call esi */
  call_ind((uint32_t)(ESI), 0x117e1055u);
  /* 117e1055 push 0x117e60f4 */
  push32((uint32_t)(0x117e60f4u));
  /* 117e105a push 0x117e6550 */
  push32((uint32_t)(0x117e6550u));
  /* 117e105f call esi */
  call_ind((uint32_t)(ESI), 0x117e1061u);
  /* 117e1061 push 0x117e60e0 */
  push32((uint32_t)(0x117e60e0u));
  /* 117e1066 push 0x117e6558 */
  push32((uint32_t)(0x117e6558u));
  /* 117e106b call esi */
  call_ind((uint32_t)(ESI), 0x117e106du);
  /* 117e106d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1070 push 0x117e60cc */
  push32((uint32_t)(0x117e60ccu));
  /* 117e1075 push 0x117e6560 */
  push32((uint32_t)(0x117e6560u));
  /* 117e107a call esi */
  call_ind((uint32_t)(ESI), 0x117e107cu);
  /* 117e107c push 0x117e60b4 */
  push32((uint32_t)(0x117e60b4u));
  /* 117e1081 push 0x117e6568 */
  push32((uint32_t)(0x117e6568u));
  /* 117e1086 call esi */
  call_ind((uint32_t)(ESI), 0x117e1088u);
  /* 117e1088 push 0x117e60a0 */
  push32((uint32_t)(0x117e60a0u));
  /* 117e108d push 0x117e6570 */
  push32((uint32_t)(0x117e6570u));
  /* 117e1092 call esi */
  call_ind((uint32_t)(ESI), 0x117e1094u);
  /* 117e1094 push 0x117e6090 */
  push32((uint32_t)(0x117e6090u));
  /* 117e1099 push 0x117e6578 */
  push32((uint32_t)(0x117e6578u));
  /* 117e109e call esi */
  call_ind((uint32_t)(ESI), 0x117e10a0u);
  /* 117e10a0 push 0x117e607c */
  push32((uint32_t)(0x117e607cu));
  /* 117e10a5 push 0x117e6580 */
  push32((uint32_t)(0x117e6580u));
  /* 117e10aa call esi */
  call_ind((uint32_t)(ESI), 0x117e10acu);
  /* 117e10ac push 0x117e6068 */
  push32((uint32_t)(0x117e6068u));
  /* 117e10b1 push 0x117e6588 */
  push32((uint32_t)(0x117e6588u));
  /* 117e10b6 call esi */
  call_ind((uint32_t)(ESI), 0x117e10b8u);
  /* 117e10b8 push 0x117e605c */
  push32((uint32_t)(0x117e605cu));
  /* 117e10bd push 0x117e6590 */
  push32((uint32_t)(0x117e6590u));
  /* 117e10c2 call esi */
  call_ind((uint32_t)(ESI), 0x117e10c4u);
  /* 117e10c4 push 0x117e6050 */
  push32((uint32_t)(0x117e6050u));
  /* 117e10c9 push 0x117e6598 */
  push32((uint32_t)(0x117e6598u));
  /* 117e10ce call esi */
  call_ind((uint32_t)(ESI), 0x117e10d0u);
  /* 117e10d0 mov esi, dword ptr [0x117e5114] */
  ESI = (r32((uint32_t)(0x117e5114)));
  /* 117e10d6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e10d9 push 0x117e6048 */
  push32((uint32_t)(0x117e6048u));
  /* 117e10de push 0x117e6538 */
  push32((uint32_t)(0x117e6538u));
  /* 117e10e3 call esi */
  call_ind((uint32_t)(ESI), 0x117e10e5u);
  /* 117e10e5 push 0x117e6040 */
  push32((uint32_t)(0x117e6040u));
  /* 117e10ea push 0x117e6528 */
  push32((uint32_t)(0x117e6528u));
  /* 117e10ef call esi */
  call_ind((uint32_t)(ESI), 0x117e10f1u);
  /* 117e10f1 mov esi, dword ptr [0x117e5118] */
  ESI = (r32((uint32_t)(0x117e5118)));
  /* 117e10f7 push 0x117e6038 */
  push32((uint32_t)(0x117e6038u));
  /* 117e10fc push 1 */
  push32((uint32_t)(0x1u));
  /* 117e10fe call esi */
  call_ind((uint32_t)(ESI), 0x117e1100u);
  /* 117e1100 push 0x117e6030 */
  push32((uint32_t)(0x117e6030u));
  /* 117e1105 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1107 call esi */
  call_ind((uint32_t)(ESI), 0x117e1109u);
  /* 117e1109 push 0x117e6038 */
  push32((uint32_t)(0x117e6038u));
  /* 117e110e push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1110 call esi */
  call_ind((uint32_t)(ESI), 0x117e1112u);
  /* 117e1112 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1115 pop esi */
  ESI = (pop32());
  /* 117e1116 ret  */
  ESPCHK(0x117e1000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x117e1120 (1910 bytes, 665 insns) */
void f_117e1120(void) {
  FTRACE(0x117e1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1120 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1121 push ebp */
  push32((uint32_t)(EBP));
  /* 117e1122 push esi */
  push32((uint32_t)(ESI));
  /* 117e1123 push edi */
  push32((uint32_t)(EDI));
  /* 117e1124 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1126 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e112cu);
  /* 117e112c mov ebp, dword ptr [0x117e50b4] */
  EBP = (r32((uint32_t)(0x117e50b4)));
  /* 117e1132 mov ebx, dword ptr [0x117e50b8] */
  EBX = (r32((uint32_t)(0x117e50b8)));
  /* 117e1138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e113b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e113d je 0x117e14a7 */
  if (C.zf) goto L_117e14a7;
  /* 117e1143 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1145 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1147 call ebp */
  call_ind((uint32_t)(EBP), 0x117e1149u);
  /* 117e1149 push 0x117e61d8 */
  push32((uint32_t)(0x117e61d8u));
  /* 117e114e call ebx */
  call_ind((uint32_t)(EBX), 0x117e1150u);
  /* 117e1150 push 0x117e61d0 */
  push32((uint32_t)(0x117e61d0u));
  /* 117e1155 call ebx */
  call_ind((uint32_t)(EBX), 0x117e1157u);
  /* 117e1157 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1159 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e115b push 0x117e6538 */
  push32((uint32_t)(0x117e6538u));
  /* 117e1160 call dword ptr [0x117e50bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50bc))), 0x117e1166u);
  /* 117e1166 mov esi, dword ptr [0x117e50c0] */
  ESI = (r32((uint32_t)(0x117e50c0)));
  /* 117e116c push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117e116e push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1170 call esi */
  call_ind((uint32_t)(ESI), 0x117e1172u);
  /* 117e1172 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117e1174 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1176 call esi */
  call_ind((uint32_t)(ESI), 0x117e1178u);
  /* 117e1178 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117e117a push 2 */
  push32((uint32_t)(0x2u));
  /* 117e117c call esi */
  call_ind((uint32_t)(ESI), 0x117e117eu);
  /* 117e117e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117e1180 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1182 call esi */
  call_ind((uint32_t)(ESI), 0x117e1184u);
  /* 117e1184 mov esi, dword ptr [0x117e50c4] */
  ESI = (r32((uint32_t)(0x117e50c4)));
  /* 117e118a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 117e118f push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1191 call esi */
  call_ind((uint32_t)(ESI), 0x117e1193u);
  /* 117e1193 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1196 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 117e119b push 2 */
  push32((uint32_t)(0x2u));
  /* 117e119d call esi */
  call_ind((uint32_t)(ESI), 0x117e119fu);
  /* 117e119f push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 117e11a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e11a6 call esi */
  call_ind((uint32_t)(ESI), 0x117e11a8u);
  /* 117e11a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e11aa push 0xb */
  push32((uint32_t)(0xbu));
  /* 117e11ac call ebp */
  call_ind((uint32_t)(EBP), 0x117e11aeu);
  /* 117e11ae mov esi, dword ptr [0x117e50c8] */
  ESI = (r32((uint32_t)(0x117e50c8)));
  /* 117e11b4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e11b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e11bb push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11bd call esi */
  call_ind((uint32_t)(ESI), 0x117e11bfu);
  /* 117e11bf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 117e11c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11c8 call esi */
  call_ind((uint32_t)(ESI), 0x117e11cau);
  /* 117e11ca push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e11cf push 4 */
  push32((uint32_t)(0x4u));
  /* 117e11d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11d3 call esi */
  call_ind((uint32_t)(ESI), 0x117e11d5u);
  /* 117e11d5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e11da push 5 */
  push32((uint32_t)(0x5u));
  /* 117e11dc push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11de call esi */
  call_ind((uint32_t)(ESI), 0x117e11e0u);
  /* 117e11e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e11e3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e11e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e11ea push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11ec call esi */
  call_ind((uint32_t)(ESI), 0x117e11eeu);
  /* 117e11ee push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e11f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e11f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e11f7 call esi */
  call_ind((uint32_t)(ESI), 0x117e11f9u);
  /* 117e11f9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e11fe push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1200 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1202 call esi */
  call_ind((uint32_t)(ESI), 0x117e1204u);
  /* 117e1204 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1209 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e120b push 2 */
  push32((uint32_t)(0x2u));
  /* 117e120d call esi */
  call_ind((uint32_t)(ESI), 0x117e120fu);
  /* 117e120f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1214 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e1216 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1218 call esi */
  call_ind((uint32_t)(ESI), 0x117e121au);
  /* 117e121a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e121f push 5 */
  push32((uint32_t)(0x5u));
  /* 117e1221 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1223 call esi */
  call_ind((uint32_t)(ESI), 0x117e1225u);
  /* 117e1225 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1228 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e122d push 0 */
  push32((uint32_t)(0x0u));
  /* 117e122f push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1231 call esi */
  call_ind((uint32_t)(ESI), 0x117e1233u);
  /* 117e1233 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1238 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e123a push 2 */
  push32((uint32_t)(0x2u));
  /* 117e123c call esi */
  call_ind((uint32_t)(ESI), 0x117e123eu);
  /* 117e123e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1243 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1245 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1247 call esi */
  call_ind((uint32_t)(ESI), 0x117e1249u);
  /* 117e1249 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e124e push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1250 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1252 call esi */
  call_ind((uint32_t)(ESI), 0x117e1254u);
  /* 117e1254 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1259 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e125b push 3 */
  push32((uint32_t)(0x3u));
  /* 117e125d call esi */
  call_ind((uint32_t)(ESI), 0x117e125fu);
  /* 117e125f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1264 push 5 */
  push32((uint32_t)(0x5u));
  /* 117e1266 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1268 call esi */
  call_ind((uint32_t)(ESI), 0x117e126au);
  /* 117e126a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e126d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1272 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1274 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1276 call esi */
  call_ind((uint32_t)(ESI), 0x117e1278u);
  /* 117e1278 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e127d push 2 */
  push32((uint32_t)(0x2u));
  /* 117e127f push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1281 call esi */
  call_ind((uint32_t)(ESI), 0x117e1283u);
  /* 117e1283 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1285 call dword ptr [0x117e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50cc))), 0x117e128bu);
  /* 117e128b mov edi, dword ptr [0x117e50d0] */
  EDI = (r32((uint32_t)(0x117e50d0)));
  /* 117e1291 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1296 jne 0x117e1310 */
  if (!C.zf) goto L_117e1310;
  /* 117e1298 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117e129d push 3 */
  push32((uint32_t)(0x3u));
  /* 117e129f push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12a1 call esi */
  call_ind((uint32_t)(ESI), 0x117e12a3u);
  /* 117e12a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117e12a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12a9 call esi */
  call_ind((uint32_t)(ESI), 0x117e12abu);
  /* 117e12ab push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e12b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e12b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12b4 call esi */
  call_ind((uint32_t)(ESI), 0x117e12b6u);
  /* 117e12b6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e12bb push 5 */
  push32((uint32_t)(0x5u));
  /* 117e12bd push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12bf call esi */
  call_ind((uint32_t)(ESI), 0x117e12c1u);
  /* 117e12c1 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117e12c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12ca call esi */
  call_ind((uint32_t)(ESI), 0x117e12ccu);
  /* 117e12cc push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117e12d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e12d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12d5 call esi */
  call_ind((uint32_t)(ESI), 0x117e12d7u);
  /* 117e12d7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e12da push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12dc push 2 */
  push32((uint32_t)(0x2u));
  /* 117e12de push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12e2 push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e12e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12e9 call edi */
  call_ind((uint32_t)(EDI), 0x117e12ebu);
  /* 117e12eb push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12ed push 2 */
  push32((uint32_t)(0x2u));
  /* 117e12ef push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e12f3 push 0x117e61b8 */
  push32((uint32_t)(0x117e61b8u));
  /* 117e12f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e12fa call edi */
  call_ind((uint32_t)(EDI), 0x117e12fcu);
  /* 117e12fc push 1 */
  push32((uint32_t)(0x1u));
  /* 117e12fe push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1300 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1302 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1304 push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e1309 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e130b call edi */
  call_ind((uint32_t)(EDI), 0x117e130du);
  /* 117e130d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e1310:;
  /* 117e1310 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1312 call dword ptr [0x117e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50cc))), 0x117e1318u);
  /* 117e1318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e131b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e131e jne 0x117e1398 */
  if (!C.zf) goto L_117e1398;
  /* 117e1320 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117e1325 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1327 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1329 call esi */
  call_ind((uint32_t)(ESI), 0x117e132bu);
  /* 117e132b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117e132d push 1 */
  push32((uint32_t)(0x1u));
  /* 117e132f push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1331 call esi */
  call_ind((uint32_t)(ESI), 0x117e1333u);
  /* 117e1333 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e1338 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e133a push 0 */
  push32((uint32_t)(0x0u));
  /* 117e133c call esi */
  call_ind((uint32_t)(ESI), 0x117e133eu);
  /* 117e133e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e1343 push 5 */
  push32((uint32_t)(0x5u));
  /* 117e1345 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1347 call esi */
  call_ind((uint32_t)(ESI), 0x117e1349u);
  /* 117e1349 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117e134e push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1350 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1352 call esi */
  call_ind((uint32_t)(ESI), 0x117e1354u);
  /* 117e1354 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117e1359 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e135b push 0 */
  push32((uint32_t)(0x0u));
  /* 117e135d call esi */
  call_ind((uint32_t)(ESI), 0x117e135fu);
  /* 117e135f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1362 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1364 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1366 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1368 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e136a push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e136f push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1371 call edi */
  call_ind((uint32_t)(EDI), 0x117e1373u);
  /* 117e1373 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1375 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1377 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1379 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e137b push 0x117e61b8 */
  push32((uint32_t)(0x117e61b8u));
  /* 117e1380 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1382 call edi */
  call_ind((uint32_t)(EDI), 0x117e1384u);
  /* 117e1384 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1386 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1388 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e138a push 0 */
  push32((uint32_t)(0x0u));
  /* 117e138c push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e1391 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1393 call edi */
  call_ind((uint32_t)(EDI), 0x117e1395u);
  /* 117e1395 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e1398:;
  /* 117e1398 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e139a call dword ptr [0x117e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50cc))), 0x117e13a0u);
  /* 117e13a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e13a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e13a6 jne 0x117e1420 */
  if (!C.zf) goto L_117e1420;
  /* 117e13a8 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117e13ad push 3 */
  push32((uint32_t)(0x3u));
  /* 117e13af push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13b1 call esi */
  call_ind((uint32_t)(ESI), 0x117e13b3u);
  /* 117e13b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117e13b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e13b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13b9 call esi */
  call_ind((uint32_t)(ESI), 0x117e13bbu);
  /* 117e13bb push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 117e13c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e13c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13c4 call esi */
  call_ind((uint32_t)(ESI), 0x117e13c6u);
  /* 117e13c6 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 117e13cb push 5 */
  push32((uint32_t)(0x5u));
  /* 117e13cd push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13cf call esi */
  call_ind((uint32_t)(ESI), 0x117e13d1u);
  /* 117e13d1 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117e13d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13da call esi */
  call_ind((uint32_t)(ESI), 0x117e13dcu);
  /* 117e13dc push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117e13e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e13e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13e5 call esi */
  call_ind((uint32_t)(ESI), 0x117e13e7u);
  /* 117e13e7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e13ea push 3 */
  push32((uint32_t)(0x3u));
  /* 117e13ec push 2 */
  push32((uint32_t)(0x2u));
  /* 117e13ee push 1 */
  push32((uint32_t)(0x1u));
  /* 117e13f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e13f2 push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e13f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e13f9 call edi */
  call_ind((uint32_t)(EDI), 0x117e13fbu);
  /* 117e13fb push 3 */
  push32((uint32_t)(0x3u));
  /* 117e13fd push 2 */
  push32((uint32_t)(0x2u));
  /* 117e13ff push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1401 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1403 push 0x117e61b8 */
  push32((uint32_t)(0x117e61b8u));
  /* 117e1408 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e140a call edi */
  call_ind((uint32_t)(EDI), 0x117e140cu);
  /* 117e140c push 3 */
  push32((uint32_t)(0x3u));
  /* 117e140e push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1410 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1412 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1414 push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e1419 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e141b call edi */
  call_ind((uint32_t)(EDI), 0x117e141du);
  /* 117e141d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e1420:;
  /* 117e1420 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1422 call dword ptr [0x117e50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50cc))), 0x117e1428u);
  /* 117e1428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e142b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e142e jne 0x117e14a7 */
  if (!C.zf) goto L_117e14a7;
  /* 117e1430 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1435 push eax */
  push32((uint32_t)(EAX));
  /* 117e1436 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1438 call esi */
  call_ind((uint32_t)(ESI), 0x117e143au);
  /* 117e143a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117e143c push 1 */
  push32((uint32_t)(0x1u));
  /* 117e143e push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1440 call esi */
  call_ind((uint32_t)(ESI), 0x117e1442u);
  /* 117e1442 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 117e1447 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e1449 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e144b call esi */
  call_ind((uint32_t)(ESI), 0x117e144du);
  /* 117e144d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 117e1452 push 5 */
  push32((uint32_t)(0x5u));
  /* 117e1454 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1456 call esi */
  call_ind((uint32_t)(ESI), 0x117e1458u);
  /* 117e1458 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e145d push 0 */
  push32((uint32_t)(0x0u));
  /* 117e145f push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1461 call esi */
  call_ind((uint32_t)(ESI), 0x117e1463u);
  /* 117e1463 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1468 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e146a push 0 */
  push32((uint32_t)(0x0u));
  /* 117e146c call esi */
  call_ind((uint32_t)(ESI), 0x117e146eu);
  /* 117e146e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1471 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1473 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1475 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1477 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1479 push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e147e push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1480 call edi */
  call_ind((uint32_t)(EDI), 0x117e1482u);
  /* 117e1482 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1484 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1486 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1488 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e148a push 0x117e61b8 */
  push32((uint32_t)(0x117e61b8u));
  /* 117e148f push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1491 call edi */
  call_ind((uint32_t)(EDI), 0x117e1493u);
  /* 117e1493 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1495 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1497 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1499 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e149b push 0x117e61c4 */
  push32((uint32_t)(0x117e61c4u));
  /* 117e14a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e14a2 call edi */
  call_ind((uint32_t)(EDI), 0x117e14a4u);
  /* 117e14a4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e14a7:;
  /* 117e14a7 mov esi, dword ptr [0x117e50d4] */
  ESI = (r32((uint32_t)(0x117e50d4)));
  /* 117e14ad push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14af push 0x117e6540 */
  push32((uint32_t)(0x117e6540u));
  /* 117e14b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14b6 call esi */
  call_ind((uint32_t)(ESI), 0x117e14b8u);
  /* 117e14b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14ba push 0x117e6548 */
  push32((uint32_t)(0x117e6548u));
  /* 117e14bf push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14c1 call esi */
  call_ind((uint32_t)(ESI), 0x117e14c3u);
  /* 117e14c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14c5 push 0x117e6550 */
  push32((uint32_t)(0x117e6550u));
  /* 117e14ca push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14cc call esi */
  call_ind((uint32_t)(ESI), 0x117e14ceu);
  /* 117e14ce push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14d0 push 0x117e6558 */
  push32((uint32_t)(0x117e6558u));
  /* 117e14d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14d7 call esi */
  call_ind((uint32_t)(ESI), 0x117e14d9u);
  /* 117e14d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14db push 0x117e6560 */
  push32((uint32_t)(0x117e6560u));
  /* 117e14e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14e2 call esi */
  call_ind((uint32_t)(ESI), 0x117e14e4u);
  /* 117e14e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14e6 push 0x117e6568 */
  push32((uint32_t)(0x117e6568u));
  /* 117e14eb push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14ed call esi */
  call_ind((uint32_t)(ESI), 0x117e14efu);
  /* 117e14ef add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e14f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14f4 push 0x117e6570 */
  push32((uint32_t)(0x117e6570u));
  /* 117e14f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14fb call esi */
  call_ind((uint32_t)(ESI), 0x117e14fdu);
  /* 117e14fd push 0 */
  push32((uint32_t)(0x0u));
  /* 117e14ff push 0x117e6578 */
  push32((uint32_t)(0x117e6578u));
  /* 117e1504 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1506 call esi */
  call_ind((uint32_t)(ESI), 0x117e1508u);
  /* 117e1508 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e150a push 0x117e6580 */
  push32((uint32_t)(0x117e6580u));
  /* 117e150f push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1511 call esi */
  call_ind((uint32_t)(ESI), 0x117e1513u);
  /* 117e1513 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1515 push 0x117e6588 */
  push32((uint32_t)(0x117e6588u));
  /* 117e151a push 0 */
  push32((uint32_t)(0x0u));
  /* 117e151c call esi */
  call_ind((uint32_t)(ESI), 0x117e151eu);
  /* 117e151e push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1520 push 0x117e6590 */
  push32((uint32_t)(0x117e6590u));
  /* 117e1525 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1527 call esi */
  call_ind((uint32_t)(ESI), 0x117e1529u);
  /* 117e1529 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e152b push 0x117e6598 */
  push32((uint32_t)(0x117e6598u));
  /* 117e1530 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1532 call esi */
  call_ind((uint32_t)(ESI), 0x117e1534u);
  /* 117e1534 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1537 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1539 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e153fu);
  /* 117e153f mov edi, dword ptr [0x117e50d8] */
  EDI = (r32((uint32_t)(0x117e50d8)));
  /* 117e1545 mov esi, dword ptr [0x117e50dc] */
  ESI = (r32((uint32_t)(0x117e50dc)));
  /* 117e154b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e154e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1550 je 0x117e15e0 */
  if (C.zf) goto L_117e15e0;
  /* 117e1556 push 0x117e6518 */
  push32((uint32_t)(0x117e6518u));
  /* 117e155b push 0x117e6538 */
  push32((uint32_t)(0x117e6538u));
  /* 117e1560 call dword ptr [0x117e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50e0))), 0x117e1566u);
  /* 117e1566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e156b je 0x117e15e0 */
  if (C.zf) goto L_117e15e0;
  /* 117e156d push 0 */
  push32((uint32_t)(0x0u));
  /* 117e156f push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1571 call ebp */
  call_ind((uint32_t)(EBP), 0x117e1573u);
  /* 117e1573 push 0x117e61b0 */
  push32((uint32_t)(0x117e61b0u));
  /* 117e1578 call ebx */
  call_ind((uint32_t)(EBX), 0x117e157au);
  /* 117e157a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117e157f push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1581 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1583 call edi */
  call_ind((uint32_t)(EDI), 0x117e1585u);
  /* 117e1585 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e158a push 5 */
  push32((uint32_t)(0x5u));
  /* 117e158c push 0 */
  push32((uint32_t)(0x0u));
  /* 117e158e call edi */
  call_ind((uint32_t)(EDI), 0x117e1590u);
  /* 117e1590 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117e1595 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e1597 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1599 call edi */
  call_ind((uint32_t)(EDI), 0x117e159bu);
  /* 117e159b push 0 */
  push32((uint32_t)(0x0u));
  /* 117e159d push 0x117e6518 */
  push32((uint32_t)(0x117e6518u));
  /* 117e15a2 call esi */
  call_ind((uint32_t)(ESI), 0x117e15a4u);
  /* 117e15a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e15a6 call dword ptr [0x117e50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50e4))), 0x117e15acu);
  /* 117e15ac push 1 */
  push32((uint32_t)(0x1u));
  /* 117e15ae call dword ptr [0x117e50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50e8))), 0x117e15b4u);
  /* 117e15b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e15b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e15b9 push 0x117e6510 */
  push32((uint32_t)(0x117e6510u));
  /* 117e15be call esi */
  call_ind((uint32_t)(ESI), 0x117e15c0u);
  /* 117e15c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e15c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e15c4 call dword ptr [0x117e50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50ec))), 0x117e15cau);
  /* 117e15ca push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e15cf push 1 */
  push32((uint32_t)(0x1u));
  /* 117e15d1 call dword ptr [0x117e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50c4))), 0x117e15d7u);
  /* 117e15d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e15d9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117e15db call ebp */
  call_ind((uint32_t)(EBP), 0x117e15ddu);
  /* 117e15dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e15e0:;
  /* 117e15e0 push 6 */
  push32((uint32_t)(0x6u));
  /* 117e15e2 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e15e8u);
  /* 117e15e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e15eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e15ed je 0x117e1614 */
  if (C.zf) goto L_117e1614;
  /* 117e15ef push 0 */
  push32((uint32_t)(0x0u));
  /* 117e15f1 call dword ptr [0x117e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50f0))), 0x117e15f7u);
  /* 117e15f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e15fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e15fc je 0x117e1614 */
  if (C.zf) goto L_117e1614;
  /* 117e15fe push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1600 push 6 */
  push32((uint32_t)(0x6u));
  /* 117e1602 call ebp */
  call_ind((uint32_t)(EBP), 0x117e1604u);
  /* 117e1604 push 0x117e61a8 */
  push32((uint32_t)(0x117e61a8u));
  /* 117e1609 call ebx */
  call_ind((uint32_t)(EBX), 0x117e160bu);
  /* 117e160b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e160e call dword ptr [0x117e50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50f4))), 0x117e1614u);
L_117e1614:;
  /* 117e1614 push 8 */
  push32((uint32_t)(0x8u));
  /* 117e1616 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e161cu);
  /* 117e161c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e161f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1621 je 0x117e1648 */
  if (C.zf) goto L_117e1648;
  /* 117e1623 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1625 call dword ptr [0x117e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50f0))), 0x117e162bu);
  /* 117e162b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e162e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1630 je 0x117e1648 */
  if (C.zf) goto L_117e1648;
  /* 117e1632 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1634 push 8 */
  push32((uint32_t)(0x8u));
  /* 117e1636 call ebp */
  call_ind((uint32_t)(EBP), 0x117e1638u);
  /* 117e1638 push 0x117e61a0 */
  push32((uint32_t)(0x117e61a0u));
  /* 117e163d call ebx */
  call_ind((uint32_t)(EBX), 0x117e163fu);
  /* 117e163f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1642 call dword ptr [0x117e50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50f8))), 0x117e1648u);
L_117e1648:;
  /* 117e1648 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e164a call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e1650u);
  /* 117e1650 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1653 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1655 je 0x117e1676 */
  if (C.zf) goto L_117e1676;
  /* 117e1657 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1659 call dword ptr [0x117e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50f0))), 0x117e165fu);
  /* 117e165f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1662 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1664 je 0x117e1676 */
  if (C.zf) goto L_117e1676;
  /* 117e1666 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1668 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e166a call ebp */
  call_ind((uint32_t)(EBP), 0x117e166cu);
  /* 117e166c push 0x117e6198 */
  push32((uint32_t)(0x117e6198u));
  /* 117e1671 call ebx */
  call_ind((uint32_t)(EBX), 0x117e1673u);
  /* 117e1673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e1676:;
  /* 117e1676 push 0xa */
  push32((uint32_t)(0xau));
  /* 117e1678 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e167eu);
  /* 117e167e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1681 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1683 je 0x117e16a4 */
  if (C.zf) goto L_117e16a4;
  /* 117e1685 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1687 call dword ptr [0x117e50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50f0))), 0x117e168du);
  /* 117e168d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1690 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1692 je 0x117e16a4 */
  if (C.zf) goto L_117e16a4;
  /* 117e1694 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1696 push 0xa */
  push32((uint32_t)(0xau));
  /* 117e1698 call ebp */
  call_ind((uint32_t)(EBP), 0x117e169au);
  /* 117e169a push 0x117e6190 */
  push32((uint32_t)(0x117e6190u));
  /* 117e169f call ebx */
  call_ind((uint32_t)(EBX), 0x117e16a1u);
  /* 117e16a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e16a4:;
  /* 117e16a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117e16a6 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e16acu);
  /* 117e16ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e16af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e16b1 je 0x117e16e5 */
  if (C.zf) goto L_117e16e5;
  /* 117e16b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e16b5 call dword ptr [0x117e50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50fc))), 0x117e16bbu);
  /* 117e16bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e16be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e16c0 je 0x117e16e5 */
  if (C.zf) goto L_117e16e5;
  /* 117e16c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e16c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117e16c6 call ebp */
  call_ind((uint32_t)(EBP), 0x117e16c8u);
  /* 117e16c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e16ca push 0x117e6530 */
  push32((uint32_t)(0x117e6530u));
  /* 117e16cf call esi */
  call_ind((uint32_t)(ESI), 0x117e16d1u);
  /* 117e16d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e16d3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117e16d5 push 0x117e6538 */
  push32((uint32_t)(0x117e6538u));
  /* 117e16da push 4 */
  push32((uint32_t)(0x4u));
  /* 117e16dc call dword ptr [0x117e5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5100))), 0x117e16e2u);
  /* 117e16e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e16e5:;
  /* 117e16e5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117e16e7 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e16edu);
  /* 117e16ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e16f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e16f2 je 0x117e17c6 */
  if (C.zf) goto L_117e17c6;
  /* 117e16f8 push 0x117e6530 */
  push32((uint32_t)(0x117e6530u));
  /* 117e16fd push 0x117e6538 */
  push32((uint32_t)(0x117e6538u));
  /* 117e1702 call dword ptr [0x117e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50e0))), 0x117e1708u);
  /* 117e1708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e170b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e170d je 0x117e17c6 */
  if (C.zf) goto L_117e17c6;
  /* 117e1713 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e1715 call dword ptr [0x117e50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50fc))), 0x117e171bu);
  /* 117e171b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e171e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1720 je 0x117e17c6 */
  if (C.zf) goto L_117e17c6;
  /* 117e1726 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1728 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117e172a call ebp */
  call_ind((uint32_t)(EBP), 0x117e172cu);
  /* 117e172c push 0x117e6188 */
  push32((uint32_t)(0x117e6188u));
  /* 117e1731 call ebx */
  call_ind((uint32_t)(EBX), 0x117e1733u);
  /* 117e1733 push 0x117e6180 */
  push32((uint32_t)(0x117e6180u));
  /* 117e1738 call dword ptr [0x117e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5104))), 0x117e173eu);
  /* 117e173e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1741 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1743 je 0x117e17a9 */
  if (C.zf) goto L_117e17a9;
  /* 117e1745 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1747 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1749 call dword ptr [0x117e5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5108))), 0x117e174fu);
  /* 117e174f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1752 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1757 jle 0x117e178d */
  if ((C.zf||C.sf!=C.of)) goto L_117e178d;
  /* 117e1759 push 0x117e6178 */
  push32((uint32_t)(0x117e6178u));
  /* 117e175e call ebx */
  call_ind((uint32_t)(EBX), 0x117e1760u);
  /* 117e1760 push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 117e1765 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1767 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1769 call edi */
  call_ind((uint32_t)(EDI), 0x117e176bu);
  /* 117e176b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 117e176d push 2 */
  push32((uint32_t)(0x2u));
  /* 117e176f call dword ptr [0x117e50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50c0))), 0x117e1775u);
  /* 117e1775 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1777 push 0x117e6530 */
  push32((uint32_t)(0x117e6530u));
  /* 117e177c call esi */
  call_ind((uint32_t)(ESI), 0x117e177eu);
  /* 117e177e push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1780 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e1782 call dword ptr [0x117e50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50ec))), 0x117e1788u);
  /* 117e1788 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e178b jmp 0x117e17c6 */
  goto L_117e17c6;
L_117e178d:;
  /* 117e178d push 0x117e6170 */
  push32((uint32_t)(0x117e6170u));
  /* 117e1792 call ebx */
  call_ind((uint32_t)(EBX), 0x117e1794u);
  /* 117e1794 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e1799 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e179b call dword ptr [0x117e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50c4))), 0x117e17a1u);
  /* 117e17a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e17a3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117e17a5 call ebp */
  call_ind((uint32_t)(EBP), 0x117e17a7u);
  /* 117e17a7 jmp 0x117e17c3 */
  goto L_117e17c3;
L_117e17a9:;
  /* 117e17a9 push 0x117e6168 */
  push32((uint32_t)(0x117e6168u));
  /* 117e17ae call ebx */
  call_ind((uint32_t)(EBX), 0x117e17b0u);
  /* 117e17b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e17b2 push 0x117e6530 */
  push32((uint32_t)(0x117e6530u));
  /* 117e17b7 call esi */
  call_ind((uint32_t)(ESI), 0x117e17b9u);
  /* 117e17b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e17bb push 4 */
  push32((uint32_t)(0x4u));
  /* 117e17bd call dword ptr [0x117e50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50ec))), 0x117e17c3u);
L_117e17c3:;
  /* 117e17c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e17c6:;
  /* 117e17c6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117e17c8 call dword ptr [0x117e50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50b0))), 0x117e17ceu);
  /* 117e17ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e17d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e17d3 je 0x117e1891 */
  if (C.zf) goto L_117e1891;
  /* 117e17d9 push 0x117e6530 */
  push32((uint32_t)(0x117e6530u));
  /* 117e17de push 0x117e6528 */
  push32((uint32_t)(0x117e6528u));
  /* 117e17e3 call dword ptr [0x117e50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50e0))), 0x117e17e9u);
  /* 117e17e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e17ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e17ee je 0x117e1891 */
  if (C.zf) goto L_117e1891;
  /* 117e17f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e17f6 call dword ptr [0x117e50fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50fc))), 0x117e17fcu);
  /* 117e17fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e17ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e1801 je 0x117e1891 */
  if (C.zf) goto L_117e1891;
  /* 117e1807 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1809 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117e180b call ebp */
  call_ind((uint32_t)(EBP), 0x117e180du);
  /* 117e180d push 0x117e6160 */
  push32((uint32_t)(0x117e6160u));
  /* 117e1812 call dword ptr [0x117e5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5104))), 0x117e1818u);
  /* 117e1818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e181b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e181d je 0x117e1887 */
  if (C.zf) goto L_117e1887;
  /* 117e181f push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1821 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1823 call dword ptr [0x117e5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5108))), 0x117e1829u);
  /* 117e1829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e182c cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1831 jle 0x117e1865 */
  if ((C.zf||C.sf!=C.of)) goto L_117e1865;
  /* 117e1833 push 0x117e6158 */
  push32((uint32_t)(0x117e6158u));
  /* 117e1838 call ebx */
  call_ind((uint32_t)(EBX), 0x117e183au);
  /* 117e183a push 0xffffb1e0 */
  push32((uint32_t)(0xffffb1e0u));
  /* 117e183f push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1841 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1843 call edi */
  call_ind((uint32_t)(EDI), 0x117e1845u);
  /* 117e1845 mov esi, dword ptr [0x117e50c0] */
  ESI = (r32((uint32_t)(0x117e50c0)));
  /* 117e184b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 117e184d push 2 */
  push32((uint32_t)(0x2u));
  /* 117e184f call esi */
  call_ind((uint32_t)(ESI), 0x117e1851u);
  /* 117e1851 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 117e1853 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1855 call esi */
  call_ind((uint32_t)(ESI), 0x117e1857u);
  /* 117e1857 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 117e1859 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e185b call esi */
  call_ind((uint32_t)(ESI), 0x117e185du);
  /* 117e185d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1860 pop edi */
  EDI = (pop32());
  /* 117e1861 pop esi */
  ESI = (pop32());
  /* 117e1862 pop ebp */
  EBP = (pop32());
  /* 117e1863 pop ebx */
  EBX = (pop32());
  /* 117e1864 ret  */
  ESPCHK(0x117e1120u, _esp0);
  ESP += 4; return;
L_117e1865:;
  /* 117e1865 push 0x117e6150 */
  push32((uint32_t)(0x117e6150u));
  /* 117e186a call ebx */
  call_ind((uint32_t)(EBX), 0x117e186cu);
  /* 117e186c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117e1871 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e1873 call dword ptr [0x117e50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50c4))), 0x117e1879u);
  /* 117e1879 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e187b push 0xd */
  push32((uint32_t)(0xdu));
  /* 117e187d call ebp */
  call_ind((uint32_t)(EBP), 0x117e187fu);
  /* 117e187f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1882 pop edi */
  EDI = (pop32());
  /* 117e1883 pop esi */
  ESI = (pop32());
  /* 117e1884 pop ebp */
  EBP = (pop32());
  /* 117e1885 pop ebx */
  EBX = (pop32());
  /* 117e1886 ret  */
  ESPCHK(0x117e1120u, _esp0);
  ESP += 4; return;
L_117e1887:;
  /* 117e1887 push 0x117e6148 */
  push32((uint32_t)(0x117e6148u));
  /* 117e188c call ebx */
  call_ind((uint32_t)(EBX), 0x117e188eu);
  /* 117e188e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e1891:;
  /* 117e1891 pop edi */
  EDI = (pop32());
  /* 117e1892 pop esi */
  ESI = (pop32());
  /* 117e1893 pop ebp */
  EBP = (pop32());
  /* 117e1894 pop ebx */
  EBX = (pop32());
  /* 117e1895 ret  */
  ESPCHK(0x117e1120u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a0 @ 0x117e18a0 (20 bytes, 6 insns) */
void f_117e18a0(void) {
  FTRACE(0x117e18a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e18a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e18a4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117e18a5 jne 0x117e18ac */
  if (!C.zf) goto L_117e18ac;
  /* 117e18a7 call 0x117e1000 */
  push32(0x117e18acu); f_117e1000();
L_117e18ac:;
  /* 117e18ac mov eax, 1 */
  EAX = (0x1u);
  /* 117e18b1 ret 0xc */
  ESPCHK(0x117e18a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100018c0 @ 0x117e18c0 (217 bytes, 57 insns) */
void f_117e18c0(void) {
  FTRACE(0x117e18c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e18c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e18c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e18c7 jne 0x117e1955 */
  if (!C.zf) goto L_117e1955;
  /* 117e18cd call dword ptr [0x117e5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5060))), 0x117e18d3u);
  /* 117e18d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e18d5 mov dword ptr [0x117e65bc], eax */
  w32((uint32_t)(0x117e65bc), (EAX));
  /* 117e18da call 0x117e22f4 */
  push32(0x117e18dfu); f_117e22f4();
  /* 117e18df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e18e1 pop ecx */
  ECX = (pop32());
  /* 117e18e2 je 0x117e1920 */
  if (C.zf) goto L_117e1920;
  /* 117e18e4 mov eax, dword ptr [0x117e65bc] */
  EAX = (r32((uint32_t)(0x117e65bc)));
  /* 117e18e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117e18eb mov cl, byte ptr [0x117e65bd] */
  CL = (r8((uint32_t)(0x117e65bd)));
  /* 117e18f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e18f6 shr dword ptr [0x117e65bc], 0x10 */
  w32((uint32_t)(0x117e65bc), (sh_shr((uint32_t)(r32((uint32_t)(0x117e65bc))), (0x10u)&0x1f, 32)));
  /* 117e18fd mov dword ptr [0x117e65c4], eax */
  w32((uint32_t)(0x117e65c4), (EAX));
  /* 117e1902 mov dword ptr [0x117e65c8], ecx */
  w32((uint32_t)(0x117e65c8), (ECX));
  /* 117e1908 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117e190b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e190d mov dword ptr [0x117e65c0], eax */
  w32((uint32_t)(0x117e65c0), (EAX));
  /* 117e1912 call 0x117e1b87 */
  push32(0x117e1917u); f_117e1b87();
  /* 117e1917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1919 jne 0x117e1924 */
  if (!C.zf) goto L_117e1924;
  /* 117e191b call 0x117e2330 */
  push32(0x117e1920u); f_117e2330();
L_117e1920:;
  /* 117e1920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e1922 jmp 0x117e1996 */
  goto L_117e1996;
L_117e1924:;
  /* 117e1924 call dword ptr [0x117e505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e505c))), 0x117e192au);
  /* 117e192a mov dword ptr [0x117e6b18], eax */
  w32((uint32_t)(0x117e6b18), (EAX));
  /* 117e192f call 0x117e21c2 */
  push32(0x117e1934u); f_117e21c2();
  /* 117e1934 mov dword ptr [0x117e65a8], eax */
  w32((uint32_t)(0x117e65a8), (EAX));
  /* 117e1939 call 0x117e1cac */
  push32(0x117e193eu); f_117e1cac();
  /* 117e193e call 0x117e1f75 */
  push32(0x117e1943u); f_117e1f75();
  /* 117e1943 call 0x117e1ebc */
  push32(0x117e1948u); f_117e1ebc();
  /* 117e1948 call 0x117e1a69 */
  push32(0x117e194du); f_117e1a69();
  /* 117e194d inc dword ptr [0x117e65a4] */
  { uint32_t _r=(r32((uint32_t)(0x117e65a4)))+1; w32((uint32_t)(0x117e65a4), (_r)); fl_inc(_r,32); }
  /* 117e1953 jmp 0x117e1993 */
  goto L_117e1993;
L_117e1955:;
  /* 117e1955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117e1957 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1959 jne 0x117e1987 */
  if (!C.zf) goto L_117e1987;
  /* 117e195b cmp dword ptr [0x117e65a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x117e65a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1961 jle 0x117e1920 */
  if ((C.zf||C.sf!=C.of)) goto L_117e1920;
  /* 117e1963 dec dword ptr [0x117e65a4] */
  { uint32_t _r=(r32((uint32_t)(0x117e65a4)))-1; w32((uint32_t)(0x117e65a4), (_r)); fl_dec(_r,32); }
  /* 117e1969 cmp dword ptr [0x117e65f4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x117e65f4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e196f jne 0x117e1976 */
  if (!C.zf) goto L_117e1976;
  /* 117e1971 call 0x117e1aa7 */
  push32(0x117e1976u); f_117e1aa7();
L_117e1976:;
  /* 117e1976 call 0x117e1e68 */
  push32(0x117e197bu); f_117e1e68();
  /* 117e197b call 0x117e1bdb */
  push32(0x117e1980u); f_117e1bdb();
  /* 117e1980 call 0x117e2330 */
  push32(0x117e1985u); f_117e2330();
  /* 117e1985 jmp 0x117e1993 */
  goto L_117e1993;
L_117e1987:;
  /* 117e1987 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e198a jne 0x117e1993 */
  if (!C.zf) goto L_117e1993;
  /* 117e198c push ecx */
  push32((uint32_t)(ECX));
  /* 117e198d call 0x117e1c0c */
  push32(0x117e1992u); f_117e1c0c();
  /* 117e1992 pop ecx */
  ECX = (pop32());
L_117e1993:;
  /* 117e1993 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1995 pop eax */
  EAX = (pop32());
L_117e1996:;
  /* 117e1996 ret 0xc */
  ESPCHK(0x117e18c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x117e1999 (157 bytes, 73 insns) */
void f_117e1999(void) {
  FTRACE(0x117e1999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1999 push ebp */
  push32((uint32_t)(EBP));
  /* 117e199a mov ebp, esp */
  EBP = (ESP);
  /* 117e199c push ebx */
  push32((uint32_t)(EBX));
  /* 117e199d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e19a0 push esi */
  push32((uint32_t)(ESI));
  /* 117e19a1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117e19a4 push edi */
  push32((uint32_t)(EDI));
  /* 117e19a5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 117e19a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e19aa jne 0x117e19b5 */
  if (!C.zf) goto L_117e19b5;
  /* 117e19ac cmp dword ptr [0x117e65a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117e65a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e19b3 jmp 0x117e19db */
  goto L_117e19db;
L_117e19b5:;
  /* 117e19b5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e19b8 je 0x117e19bf */
  if (C.zf) goto L_117e19bf;
  /* 117e19ba cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e19bd jne 0x117e19e1 */
  if (!C.zf) goto L_117e19e1;
L_117e19bf:;
  /* 117e19bf mov eax, dword ptr [0x117e6b1c] */
  EAX = (r32((uint32_t)(0x117e6b1c)));
  /* 117e19c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e19c6 je 0x117e19d1 */
  if (C.zf) goto L_117e19d1;
  /* 117e19c8 push edi */
  push32((uint32_t)(EDI));
  /* 117e19c9 push esi */
  push32((uint32_t)(ESI));
  /* 117e19ca push ebx */
  push32((uint32_t)(EBX));
  /* 117e19cb call eax */
  call_ind((uint32_t)(EAX), 0x117e19cdu);
  /* 117e19cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e19cf je 0x117e19dd */
  if (C.zf) goto L_117e19dd;
L_117e19d1:;
  /* 117e19d1 push edi */
  push32((uint32_t)(EDI));
  /* 117e19d2 push esi */
  push32((uint32_t)(ESI));
  /* 117e19d3 push ebx */
  push32((uint32_t)(EBX));
  /* 117e19d4 call 0x117e18c0 */
  push32(0x117e19d9u); f_117e18c0();
  /* 117e19d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_117e19db:;
  /* 117e19db jne 0x117e19e1 */
  if (!C.zf) goto L_117e19e1;
L_117e19dd:;
  /* 117e19dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e19df jmp 0x117e1a2f */
  goto L_117e1a2f;
L_117e19e1:;
  /* 117e19e1 push edi */
  push32((uint32_t)(EDI));
  /* 117e19e2 push esi */
  push32((uint32_t)(ESI));
  /* 117e19e3 push ebx */
  push32((uint32_t)(EBX));
  /* 117e19e4 call 0x117e18a0 */
  push32(0x117e19e9u); f_117e18a0();
  /* 117e19e9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e19ec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117e19ef jne 0x117e19fd */
  if (!C.zf) goto L_117e19fd;
  /* 117e19f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e19f3 jne 0x117e1a2c */
  if (!C.zf) goto L_117e1a2c;
  /* 117e19f5 push edi */
  push32((uint32_t)(EDI));
  /* 117e19f6 push eax */
  push32((uint32_t)(EAX));
  /* 117e19f7 push ebx */
  push32((uint32_t)(EBX));
  /* 117e19f8 call 0x117e18c0 */
  push32(0x117e19fdu); f_117e18c0();
L_117e19fd:;
  /* 117e19fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e19ff je 0x117e1a06 */
  if (C.zf) goto L_117e1a06;
  /* 117e1a01 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1a04 jne 0x117e1a2c */
  if (!C.zf) goto L_117e1a2c;
L_117e1a06:;
  /* 117e1a06 push edi */
  push32((uint32_t)(EDI));
  /* 117e1a07 push esi */
  push32((uint32_t)(ESI));
  /* 117e1a08 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1a09 call 0x117e18c0 */
  push32(0x117e1a0eu); f_117e18c0();
  /* 117e1a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1a10 jne 0x117e1a15 */
  if (!C.zf) goto L_117e1a15;
  /* 117e1a12 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_117e1a15:;
  /* 117e1a15 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1a19 je 0x117e1a2c */
  if (C.zf) goto L_117e1a2c;
  /* 117e1a1b mov eax, dword ptr [0x117e6b1c] */
  EAX = (r32((uint32_t)(0x117e6b1c)));
  /* 117e1a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1a22 je 0x117e1a2c */
  if (C.zf) goto L_117e1a2c;
  /* 117e1a24 push edi */
  push32((uint32_t)(EDI));
  /* 117e1a25 push esi */
  push32((uint32_t)(ESI));
  /* 117e1a26 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1a27 call eax */
  call_ind((uint32_t)(EAX), 0x117e1a29u);
  /* 117e1a29 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_117e1a2c:;
  /* 117e1a2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_117e1a2f:;
  /* 117e1a2f pop edi */
  EDI = (pop32());
  /* 117e1a30 pop esi */
  ESI = (pop32());
  /* 117e1a31 pop ebx */
  EBX = (pop32());
  /* 117e1a32 pop ebp */
  EBP = (pop32());
  /* 117e1a33 ret 0xc */
  ESPCHK(0x117e1999u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x117e1a36 (48 bytes, 15 insns) */
void f_117e1a36(void) {
  FTRACE(0x117e1a36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1a36 mov eax, dword ptr [0x117e65b0] */
  EAX = (r32((uint32_t)(0x117e65b0)));
  /* 117e1a3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1a3e je 0x117e1a4d */
  if (C.zf) goto L_117e1a4d;
  /* 117e1a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1a42 jne 0x117e1a52 */
  if (!C.zf) goto L_117e1a52;
  /* 117e1a44 cmp dword ptr [0x117e65b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117e65b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1a4b jne 0x117e1a52 */
  if (!C.zf) goto L_117e1a52;
L_117e1a4d:;
  /* 117e1a4d call 0x117e23a5 */
  push32(0x117e1a52u); f_117e23a5();
L_117e1a52:;
  /* 117e1a52 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117e1a56 call 0x117e23de */
  push32(0x117e1a5bu); f_117e23de();
  /* 117e1a5b push 0xff */
  push32((uint32_t)(0xffu));
  /* 117e1a60 call dword ptr [0x117e61e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e61e0))), 0x117e1a66u);
  /* 117e1a66 pop ecx */
  ECX = (pop32());
  /* 117e1a67 pop ecx */
  ECX = (pop32());
  /* 117e1a68 ret  */
  ESPCHK(0x117e1a36u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a69 @ 0x117e1a69 (45 bytes, 12 insns) */
void f_117e1a69(void) {
  FTRACE(0x117e1a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1a69 mov eax, dword ptr [0x117e6b14] */
  EAX = (r32((uint32_t)(0x117e6b14)));
  /* 117e1a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1a70 je 0x117e1a74 */
  if (C.zf) goto L_117e1a74;
  /* 117e1a72 call eax */
  call_ind((uint32_t)(EAX), 0x117e1a74u);
L_117e1a74:;
  /* 117e1a74 push 0x117e6010 */
  push32((uint32_t)(0x117e6010u));
  /* 117e1a79 push 0x117e6008 */
  push32((uint32_t)(0x117e6008u));
  /* 117e1a7e call 0x117e1b6d */
  push32(0x117e1a83u); f_117e1b6d();
  /* 117e1a83 push 0x117e6004 */
  push32((uint32_t)(0x117e6004u));
  /* 117e1a88 push 0x117e6000 */
  push32((uint32_t)(0x117e6000u));
  /* 117e1a8d call 0x117e1b6d */
  push32(0x117e1a92u); f_117e1b6d();
  /* 117e1a92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1a95 ret  */
  ESPCHK(0x117e1a69u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x117e1a96 (17 bytes, 6 insns) */
void f_117e1a96(void) {
  FTRACE(0x117e1a96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1a9a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 117e1a9e call 0x117e1ab6 */
  push32(0x117e1aa3u); f_117e1ab6();
  /* 117e1aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1aa6 ret  */
  ESPCHK(0x117e1a96u, _esp0);
  ESP += 4; return;
}

/* FUN_10001aa7 @ 0x117e1aa7 (15 bytes, 6 insns) */
void f_117e1aa7(void) {
  FTRACE(0x117e1aa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1aab push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1aad call 0x117e1ab6 */
  push32(0x117e1ab2u); f_117e1ab6();
  /* 117e1ab2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1ab5 ret  */
  ESPCHK(0x117e1aa7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab6 @ 0x117e1ab6 (163 bytes, 53 insns) */
void f_117e1ab6(void) {
  FTRACE(0x117e1ab6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1ab6 push edi */
  push32((uint32_t)(EDI));
  /* 117e1ab7 call 0x117e1b5b */
  push32(0x117e1abcu); f_117e1b5b();
  /* 117e1abc push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1abe pop edi */
  EDI = (pop32());
  /* 117e1abf cmp dword ptr [0x117e65f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x117e65f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1ac5 jne 0x117e1ad8 */
  if (!C.zf) goto L_117e1ad8;
  /* 117e1ac7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117e1acb call dword ptr [0x117e506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e506c))), 0x117e1ad1u);
  /* 117e1ad1 push eax */
  push32((uint32_t)(EAX));
  /* 117e1ad2 call dword ptr [0x117e5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5068))), 0x117e1ad8u);
L_117e1ad8:;
  /* 117e1ad8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1add push ebx */
  push32((uint32_t)(EBX));
  /* 117e1ade mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 117e1ae2 mov dword ptr [0x117e65f4], edi */
  w32((uint32_t)(0x117e65f4), (EDI));
  /* 117e1ae8 mov byte ptr [0x117e65f0], bl */
  w8((uint32_t)(0x117e65f0), (BL));
  /* 117e1aee jne 0x117e1b2c */
  if (!C.zf) goto L_117e1b2c;
  /* 117e1af0 mov eax, dword ptr [0x117e6b10] */
  EAX = (r32((uint32_t)(0x117e6b10)));
  /* 117e1af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1af7 je 0x117e1b1b */
  if (C.zf) goto L_117e1b1b;
  /* 117e1af9 mov ecx, dword ptr [0x117e6b0c] */
  ECX = (r32((uint32_t)(0x117e6b0c)));
  /* 117e1aff push esi */
  push32((uint32_t)(ESI));
  /* 117e1b00 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 117e1b03 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1b05 jb 0x117e1b1a */
  if (C.cf) goto L_117e1b1a;
L_117e1b07:;
  /* 117e1b07 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117e1b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1b0b je 0x117e1b0f */
  if (C.zf) goto L_117e1b0f;
  /* 117e1b0d call eax */
  call_ind((uint32_t)(EAX), 0x117e1b0fu);
L_117e1b0f:;
  /* 117e1b0f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e1b12 cmp esi, dword ptr [0x117e6b10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x117e6b10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1b18 jae 0x117e1b07 */
  if (!C.cf) goto L_117e1b07;
L_117e1b1a:;
  /* 117e1b1a pop esi */
  ESI = (pop32());
L_117e1b1b:;
  /* 117e1b1b push 0x117e6018 */
  push32((uint32_t)(0x117e6018u));
  /* 117e1b20 push 0x117e6014 */
  push32((uint32_t)(0x117e6014u));
  /* 117e1b25 call 0x117e1b6d */
  push32(0x117e1b2au); f_117e1b6d();
  /* 117e1b2a pop ecx */
  ECX = (pop32());
  /* 117e1b2b pop ecx */
  ECX = (pop32());
L_117e1b2c:;
  /* 117e1b2c push 0x117e6020 */
  push32((uint32_t)(0x117e6020u));
  /* 117e1b31 push 0x117e601c */
  push32((uint32_t)(0x117e601cu));
  /* 117e1b36 call 0x117e1b6d */
  push32(0x117e1b3bu); f_117e1b6d();
  /* 117e1b3b pop ecx */
  ECX = (pop32());
  /* 117e1b3c pop ecx */
  ECX = (pop32());
  /* 117e1b3d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117e1b3f pop ebx */
  EBX = (pop32());
  /* 117e1b40 je 0x117e1b49 */
  if (C.zf) goto L_117e1b49;
  /* 117e1b42 call 0x117e1b64 */
  push32(0x117e1b47u); f_117e1b64();
  /* 117e1b47 pop edi */
  EDI = (pop32());
  /* 117e1b48 ret  */
  ESPCHK(0x117e1ab6u, _esp0);
  ESP += 4; return;
L_117e1b49:;
  /* 117e1b49 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117e1b4d mov dword ptr [0x117e65f8], edi */
  w32((uint32_t)(0x117e65f8), (EDI));
  /* 117e1b53 call dword ptr [0x117e5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5064))), 0x117e1b59u);
  /* 117e1b59 pop edi */
  EDI = (pop32());
  /* 117e1b5a ret  */
  ESPCHK(0x117e1ab6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b5b @ 0x117e1b5b (9 bytes, 4 insns) */
void f_117e1b5b(void) {
  FTRACE(0x117e1b5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1b5b push 0xd */
  push32((uint32_t)(0xdu));
  /* 117e1b5d call 0x117e25c6 */
  push32(0x117e1b62u); f_117e25c6();
  /* 117e1b62 pop ecx */
  ECX = (pop32());
  /* 117e1b63 ret  */
  ESPCHK(0x117e1b5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b64 @ 0x117e1b64 (9 bytes, 4 insns) */
void f_117e1b64(void) {
  FTRACE(0x117e1b64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1b64 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117e1b66 call 0x117e2627 */
  push32(0x117e1b6bu); f_117e2627();
  /* 117e1b6b pop ecx */
  ECX = (pop32());
  /* 117e1b6c ret  */
  ESPCHK(0x117e1b64u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b6d @ 0x117e1b6d (26 bytes, 12 insns) */
void f_117e1b6d(void) {
  FTRACE(0x117e1b6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1b6d push esi */
  push32((uint32_t)(ESI));
  /* 117e1b6e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_117e1b72:;
  /* 117e1b72 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1b76 jae 0x117e1b85 */
  if (!C.cf) goto L_117e1b85;
  /* 117e1b78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117e1b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1b7c je 0x117e1b80 */
  if (C.zf) goto L_117e1b80;
  /* 117e1b7e call eax */
  call_ind((uint32_t)(EAX), 0x117e1b80u);
L_117e1b80:;
  /* 117e1b80 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1b83 jmp 0x117e1b72 */
  goto L_117e1b72;
L_117e1b85:;
  /* 117e1b85 pop esi */
  ESI = (pop32());
  /* 117e1b86 ret  */
  ESPCHK(0x117e1b6du, _esp0);
  ESP += 4; return;
}

/* FUN_10001b87 @ 0x117e1b87 (84 bytes, 32 insns) */
void f_117e1b87(void) {
  FTRACE(0x117e1b87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1b87 push esi */
  push32((uint32_t)(ESI));
  /* 117e1b88 call 0x117e2531 */
  push32(0x117e1b8du); f_117e2531();
  /* 117e1b8d call dword ptr [0x117e5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5078))), 0x117e1b93u);
  /* 117e1b93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1b96 mov dword ptr [0x117e61e4], eax */
  w32((uint32_t)(0x117e61e4), (EAX));
  /* 117e1b9b je 0x117e1bd7 */
  if (C.zf) goto L_117e1bd7;
  /* 117e1b9d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 117e1b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1ba1 call 0x117e263c */
  push32(0x117e1ba6u); f_117e263c();
  /* 117e1ba6 mov esi, eax */
  ESI = (EAX);
  /* 117e1ba8 pop ecx */
  ECX = (pop32());
  /* 117e1ba9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e1bab pop ecx */
  ECX = (pop32());
  /* 117e1bac je 0x117e1bd7 */
  if (C.zf) goto L_117e1bd7;
  /* 117e1bae push esi */
  push32((uint32_t)(ESI));
  /* 117e1baf push dword ptr [0x117e61e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e61e4))));
  /* 117e1bb5 call dword ptr [0x117e5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5074))), 0x117e1bbbu);
  /* 117e1bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1bbd je 0x117e1bd7 */
  if (C.zf) goto L_117e1bd7;
  /* 117e1bbf push esi */
  push32((uint32_t)(ESI));
  /* 117e1bc0 call 0x117e1bf9 */
  push32(0x117e1bc5u); f_117e1bf9();
  /* 117e1bc5 pop ecx */
  ECX = (pop32());
  /* 117e1bc6 call dword ptr [0x117e5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5070))), 0x117e1bccu);
  /* 117e1bcc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 117e1bd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e1bd2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 117e1bd4 pop eax */
  EAX = (pop32());
  /* 117e1bd5 pop esi */
  ESI = (pop32());
  /* 117e1bd6 ret  */
  ESPCHK(0x117e1b87u, _esp0);
  ESP += 4; return;
L_117e1bd7:;
  /* 117e1bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e1bd9 pop esi */
  ESI = (pop32());
  /* 117e1bda ret  */
  ESPCHK(0x117e1b87u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bdb @ 0x117e1bdb (30 bytes, 8 insns) */
void f_117e1bdb(void) {
  FTRACE(0x117e1bdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1bdb call 0x117e255a */
  push32(0x117e1be0u); f_117e255a();
  /* 117e1be0 mov eax, dword ptr [0x117e61e4] */
  EAX = (r32((uint32_t)(0x117e61e4)));
  /* 117e1be5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1be8 je 0x117e1bf8 */
  if (C.zf) goto L_117e1bf8;
  /* 117e1bea push eax */
  push32((uint32_t)(EAX));
  /* 117e1beb call dword ptr [0x117e507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e507c))), 0x117e1bf1u);
  /* 117e1bf1 or dword ptr [0x117e61e4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x117e61e4)))|(0xffffffffu); w32((uint32_t)(0x117e61e4), (_r)); fl_logic(_r,32); }
L_117e1bf8:;
  /* 117e1bf8 ret  */
  ESPCHK(0x117e1bdbu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf9 @ 0x117e1bf9 (19 bytes, 4 insns) */
void f_117e1bf9(void) {
  FTRACE(0x117e1bf9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1bf9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e1bfd mov dword ptr [eax + 0x50], 0x117e6360 */
  w32((uint32_t)(EAX + 0x50), (0x117e6360u));
  /* 117e1c04 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 117e1c0b ret  */
  ESPCHK(0x117e1bf9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c0c @ 0x117e1c0c (160 bytes, 62 insns) */
void f_117e1c0c(void) {
  FTRACE(0x117e1c0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1c0c mov eax, dword ptr [0x117e61e4] */
  EAX = (r32((uint32_t)(0x117e61e4)));
  /* 117e1c11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1c14 je 0x117e1cab */
  if (C.zf) goto L_117e1cab;
  /* 117e1c1a push esi */
  push32((uint32_t)(ESI));
  /* 117e1c1b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117e1c1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e1c21 jne 0x117e1c30 */
  if (!C.zf) goto L_117e1c30;
  /* 117e1c23 push eax */
  push32((uint32_t)(EAX));
  /* 117e1c24 call dword ptr [0x117e5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5000))), 0x117e1c2au);
  /* 117e1c2a mov esi, eax */
  ESI = (EAX);
  /* 117e1c2c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e1c2e je 0x117e1c9c */
  if (C.zf) goto L_117e1c9c;
L_117e1c30:;
  /* 117e1c30 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 117e1c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1c35 je 0x117e1c3e */
  if (C.zf) goto L_117e1c3e;
  /* 117e1c37 push eax */
  push32((uint32_t)(EAX));
  /* 117e1c38 call 0x117e26c9 */
  push32(0x117e1c3du); f_117e26c9();
  /* 117e1c3d pop ecx */
  ECX = (pop32());
L_117e1c3e:;
  /* 117e1c3e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 117e1c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1c43 je 0x117e1c4c */
  if (C.zf) goto L_117e1c4c;
  /* 117e1c45 push eax */
  push32((uint32_t)(EAX));
  /* 117e1c46 call 0x117e26c9 */
  push32(0x117e1c4bu); f_117e26c9();
  /* 117e1c4b pop ecx */
  ECX = (pop32());
L_117e1c4c:;
  /* 117e1c4c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 117e1c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1c51 je 0x117e1c5a */
  if (C.zf) goto L_117e1c5a;
  /* 117e1c53 push eax */
  push32((uint32_t)(EAX));
  /* 117e1c54 call 0x117e26c9 */
  push32(0x117e1c59u); f_117e26c9();
  /* 117e1c59 pop ecx */
  ECX = (pop32());
L_117e1c5a:;
  /* 117e1c5a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 117e1c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1c5f je 0x117e1c68 */
  if (C.zf) goto L_117e1c68;
  /* 117e1c61 push eax */
  push32((uint32_t)(EAX));
  /* 117e1c62 call 0x117e26c9 */
  push32(0x117e1c67u); f_117e26c9();
  /* 117e1c67 pop ecx */
  ECX = (pop32());
L_117e1c68:;
  /* 117e1c68 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 117e1c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1c6d je 0x117e1c76 */
  if (C.zf) goto L_117e1c76;
  /* 117e1c6f push eax */
  push32((uint32_t)(EAX));
  /* 117e1c70 call 0x117e26c9 */
  push32(0x117e1c75u); f_117e26c9();
  /* 117e1c75 pop ecx */
  ECX = (pop32());
L_117e1c76:;
  /* 117e1c76 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 117e1c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1c7b je 0x117e1c84 */
  if (C.zf) goto L_117e1c84;
  /* 117e1c7d push eax */
  push32((uint32_t)(EAX));
  /* 117e1c7e call 0x117e26c9 */
  push32(0x117e1c83u); f_117e26c9();
  /* 117e1c83 pop ecx */
  ECX = (pop32());
L_117e1c84:;
  /* 117e1c84 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 117e1c87 cmp eax, 0x117e6360 */
  { uint32_t _a=(EAX),_b=(0x117e6360u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1c8c je 0x117e1c95 */
  if (C.zf) goto L_117e1c95;
  /* 117e1c8e push eax */
  push32((uint32_t)(EAX));
  /* 117e1c8f call 0x117e26c9 */
  push32(0x117e1c94u); f_117e26c9();
  /* 117e1c94 pop ecx */
  ECX = (pop32());
L_117e1c95:;
  /* 117e1c95 push esi */
  push32((uint32_t)(ESI));
  /* 117e1c96 call 0x117e26c9 */
  push32(0x117e1c9bu); f_117e26c9();
  /* 117e1c9b pop ecx */
  ECX = (pop32());
L_117e1c9c:;
  /* 117e1c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 117e1c9e push dword ptr [0x117e61e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e61e4))));
  /* 117e1ca4 call dword ptr [0x117e5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5074))), 0x117e1caau);
  /* 117e1caa pop esi */
  ESI = (pop32());
L_117e1cab:;
  /* 117e1cab ret  */
  ESPCHK(0x117e1c0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001cac @ 0x117e1cac (444 bytes, 150 insns) */
void f_117e1cac(void) {
  FTRACE(0x117e1cacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1cac push ebp */
  push32((uint32_t)(EBP));
  /* 117e1cad mov ebp, esp */
  EBP = (ESP);
  /* 117e1caf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e1cb2 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1cb3 push esi */
  push32((uint32_t)(ESI));
  /* 117e1cb4 push edi */
  push32((uint32_t)(EDI));
  /* 117e1cb5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117e1cba call 0x117e2711 */
  push32(0x117e1cbfu); f_117e2711();
  /* 117e1cbf mov esi, eax */
  ESI = (EAX);
  /* 117e1cc1 pop ecx */
  ECX = (pop32());
  /* 117e1cc2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e1cc4 jne 0x117e1cce */
  if (!C.zf) goto L_117e1cce;
  /* 117e1cc6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 117e1cc8 call 0x117e1a36 */
  push32(0x117e1ccdu); f_117e1a36();
  /* 117e1ccd pop ecx */
  ECX = (pop32());
L_117e1cce:;
  /* 117e1cce mov dword ptr [0x117e6a00], esi */
  w32((uint32_t)(0x117e6a00), (ESI));
  /* 117e1cd4 mov dword ptr [0x117e6b00], 0x20 */
  w32((uint32_t)(0x117e6b00), (0x20u));
  /* 117e1cde lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_117e1ce4:;
  /* 117e1ce4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1ce6 jae 0x117e1d06 */
  if (!C.cf) goto L_117e1d06;
  /* 117e1ce8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117e1cec or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 117e1cef and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 117e1cf3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 117e1cf7 mov eax, dword ptr [0x117e6a00] */
  EAX = (r32((uint32_t)(0x117e6a00)));
  /* 117e1cfc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1cff add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1d04 jmp 0x117e1ce4 */
  goto L_117e1ce4;
L_117e1d06:;
  /* 117e1d06 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 117e1d09 push eax */
  push32((uint32_t)(EAX));
  /* 117e1d0a call dword ptr [0x117e5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5094))), 0x117e1d10u);
  /* 117e1d10 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117e1d15 je 0x117e1dec */
  if (C.zf) goto L_117e1dec;
  /* 117e1d1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117e1d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1d20 je 0x117e1dec */
  if (C.zf) goto L_117e1dec;
  /* 117e1d26 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 117e1d28 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 117e1d2b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 117e1d2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117e1d31 mov eax, 0x800 */
  EAX = (0x800u);
  /* 117e1d36 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1d38 jl 0x117e1d3c */
  if ((C.sf!=C.of)) goto L_117e1d3c;
  /* 117e1d3a mov edi, eax */
  EDI = (EAX);
L_117e1d3c:;
  /* 117e1d3c cmp dword ptr [0x117e6b00], edi */
  { uint32_t _a=(r32((uint32_t)(0x117e6b00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1d42 jge 0x117e1d9a */
  if ((C.sf==C.of)) goto L_117e1d9a;
  /* 117e1d44 mov esi, 0x117e6a04 */
  ESI = (0x117e6a04u);
L_117e1d49:;
  /* 117e1d49 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117e1d4e call 0x117e2711 */
  push32(0x117e1d53u); f_117e2711();
  /* 117e1d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1d55 pop ecx */
  ECX = (pop32());
  /* 117e1d56 je 0x117e1d94 */
  if (C.zf) goto L_117e1d94;
  /* 117e1d58 add dword ptr [0x117e6b00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x117e6b00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x117e6b00), (_r)); fl_add(_a,_b,_r,32); }
  /* 117e1d5f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 117e1d61 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_117e1d67:;
  /* 117e1d67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1d69 jae 0x117e1d87 */
  if (!C.cf) goto L_117e1d87;
  /* 117e1d6b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 117e1d6f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117e1d72 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117e1d76 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 117e1d7a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 117e1d7c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1d7f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1d85 jmp 0x117e1d67 */
  goto L_117e1d67;
L_117e1d87:;
  /* 117e1d87 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1d8a cmp dword ptr [0x117e6b00], edi */
  { uint32_t _a=(r32((uint32_t)(0x117e6b00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1d90 jl 0x117e1d49 */
  if ((C.sf!=C.of)) goto L_117e1d49;
  /* 117e1d92 jmp 0x117e1d9a */
  goto L_117e1d9a;
L_117e1d94:;
  /* 117e1d94 mov edi, dword ptr [0x117e6b00] */
  EDI = (r32((uint32_t)(0x117e6b00)));
L_117e1d9a:;
  /* 117e1d9a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117e1d9c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e1d9e jle 0x117e1dec */
  if ((C.zf||C.sf!=C.of)) goto L_117e1dec;
L_117e1da0:;
  /* 117e1da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e1da3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117e1da5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1da8 je 0x117e1de2 */
  if (C.zf) goto L_117e1de2;
  /* 117e1daa mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 117e1dac test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 117e1dae je 0x117e1de2 */
  if (C.zf) goto L_117e1de2;
  /* 117e1db0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 117e1db2 jne 0x117e1dbf */
  if (!C.zf) goto L_117e1dbf;
  /* 117e1db4 push ecx */
  push32((uint32_t)(ECX));
  /* 117e1db5 call dword ptr [0x117e5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5090))), 0x117e1dbbu);
  /* 117e1dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1dbd je 0x117e1de2 */
  if (C.zf) goto L_117e1de2;
L_117e1dbf:;
  /* 117e1dbf mov ecx, esi */
  ECX = (ESI);
  /* 117e1dc1 mov eax, esi */
  EAX = (ESI);
  /* 117e1dc3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117e1dc6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117e1dc9 mov ecx, dword ptr [ecx*4 + 0x117e6a00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x117e6a00)));
  /* 117e1dd0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 117e1dd3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 117e1dd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e1dd9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 117e1ddb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117e1ddd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 117e1ddf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_117e1de2:;
  /* 117e1de2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 117e1de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e1de7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117e1de8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1dea jl 0x117e1da0 */
  if ((C.sf!=C.of)) goto L_117e1da0;
L_117e1dec:;
  /* 117e1dec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117e1dee:;
  /* 117e1dee mov ecx, dword ptr [0x117e6a00] */
  ECX = (r32((uint32_t)(0x117e6a00)));
  /* 117e1df4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 117e1df7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1dfb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 117e1dfe jne 0x117e1e4d */
  if (!C.zf) goto L_117e1e4d;
  /* 117e1e00 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117e1e02 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 117e1e06 jne 0x117e1e0d */
  if (!C.zf) goto L_117e1e0d;
  /* 117e1e08 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117e1e0a pop eax */
  EAX = (pop32());
  /* 117e1e0b jmp 0x117e1e17 */
  goto L_117e1e17;
L_117e1e0d:;
  /* 117e1e0d mov eax, ebx */
  EAX = (EBX);
  /* 117e1e0f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117e1e10 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117e1e12 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e1e14 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117e1e17:;
  /* 117e1e17 push eax */
  push32((uint32_t)(EAX));
  /* 117e1e18 call dword ptr [0x117e508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e508c))), 0x117e1e1eu);
  /* 117e1e1e mov edi, eax */
  EDI = (EAX);
  /* 117e1e20 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1e23 je 0x117e1e3c */
  if (C.zf) goto L_117e1e3c;
  /* 117e1e25 push edi */
  push32((uint32_t)(EDI));
  /* 117e1e26 call dword ptr [0x117e5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5090))), 0x117e1e2cu);
  /* 117e1e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1e2e je 0x117e1e3c */
  if (C.zf) goto L_117e1e3c;
  /* 117e1e30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e1e35 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117e1e37 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1e3a jne 0x117e1e42 */
  if (!C.zf) goto L_117e1e42;
L_117e1e3c:;
  /* 117e1e3c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117e1e40 jmp 0x117e1e51 */
  goto L_117e1e51;
L_117e1e42:;
  /* 117e1e42 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1e45 jne 0x117e1e51 */
  if (!C.zf) goto L_117e1e51;
  /* 117e1e47 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117e1e4b jmp 0x117e1e51 */
  goto L_117e1e51;
L_117e1e4d:;
  /* 117e1e4d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_117e1e51:;
  /* 117e1e51 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117e1e52 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1e55 jl 0x117e1dee */
  if ((C.sf!=C.of)) goto L_117e1dee;
  /* 117e1e57 push dword ptr [0x117e6b00] */
  push32((uint32_t)(r32((uint32_t)(0x117e6b00))));
  /* 117e1e5d call dword ptr [0x117e5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5088))), 0x117e1e63u);
  /* 117e1e63 pop edi */
  EDI = (pop32());
  /* 117e1e64 pop esi */
  ESI = (pop32());
  /* 117e1e65 pop ebx */
  EBX = (pop32());
  /* 117e1e66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e1e67 ret  */
  ESPCHK(0x117e1cacu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e68 @ 0x117e1e68 (84 bytes, 33 insns) */
void f_117e1e68(void) {
  FTRACE(0x117e1e68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1e68 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1e69 push esi */
  push32((uint32_t)(ESI));
  /* 117e1e6a push edi */
  push32((uint32_t)(EDI));
  /* 117e1e6b mov esi, 0x117e6a00 */
  ESI = (0x117e6a00u);
L_117e1e70:;
  /* 117e1e70 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117e1e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e1e74 je 0x117e1ead */
  if (C.zf) goto L_117e1ead;
  /* 117e1e76 mov edi, eax */
  EDI = (EAX);
  /* 117e1e78 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1e7d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1e7f jae 0x117e1ea2 */
  if (!C.cf) goto L_117e1ea2;
  /* 117e1e81 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_117e1e84:;
  /* 117e1e84 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1e88 je 0x117e1e91 */
  if (C.zf) goto L_117e1e91;
  /* 117e1e8a push ebx */
  push32((uint32_t)(EBX));
  /* 117e1e8b call dword ptr [0x117e5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5098))), 0x117e1e91u);
L_117e1e91:;
  /* 117e1e91 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117e1e93 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1e96 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1e9b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1e9e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1ea0 jb 0x117e1e84 */
  if (C.cf) goto L_117e1e84;
L_117e1ea2:;
  /* 117e1ea2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e1ea4 call 0x117e26c9 */
  push32(0x117e1ea9u); f_117e26c9();
  /* 117e1ea9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 117e1eac pop ecx */
  ECX = (pop32());
L_117e1ead:;
  /* 117e1ead add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1eb0 cmp esi, 0x117e6b00 */
  { uint32_t _a=(ESI),_b=(0x117e6b00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1eb6 jl 0x117e1e70 */
  if ((C.sf!=C.of)) goto L_117e1e70;
  /* 117e1eb8 pop edi */
  EDI = (pop32());
  /* 117e1eb9 pop esi */
  ESI = (pop32());
  /* 117e1eba pop ebx */
  EBX = (pop32());
  /* 117e1ebb ret  */
  ESPCHK(0x117e1e68u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ebc @ 0x117e1ebc (185 bytes, 71 insns) */
void f_117e1ebc(void) {
  FTRACE(0x117e1ebcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1ebc push ebx */
  push32((uint32_t)(EBX));
  /* 117e1ebd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e1ebf cmp dword ptr [0x117e6b08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117e6b08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1ec5 push esi */
  push32((uint32_t)(ESI));
  /* 117e1ec6 push edi */
  push32((uint32_t)(EDI));
  /* 117e1ec7 jne 0x117e1ece */
  if (!C.zf) goto L_117e1ece;
  /* 117e1ec9 call 0x117e2ce3 */
  push32(0x117e1eceu); f_117e2ce3();
L_117e1ece:;
  /* 117e1ece mov esi, dword ptr [0x117e65a8] */
  ESI = (r32((uint32_t)(0x117e65a8)));
  /* 117e1ed4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_117e1ed6:;
  /* 117e1ed6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e1ed8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e1eda je 0x117e1eee */
  if (C.zf) goto L_117e1eee;
  /* 117e1edc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e1ede je 0x117e1ee1 */
  if (C.zf) goto L_117e1ee1;
  /* 117e1ee0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117e1ee1:;
  /* 117e1ee1 push esi */
  push32((uint32_t)(ESI));
  /* 117e1ee2 call 0x117e2890 */
  push32(0x117e1ee7u); f_117e2890();
  /* 117e1ee7 pop ecx */
  ECX = (pop32());
  /* 117e1ee8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 117e1eec jmp 0x117e1ed6 */
  goto L_117e1ed6;
L_117e1eee:;
  /* 117e1eee lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 117e1ef5 push eax */
  push32((uint32_t)(EAX));
  /* 117e1ef6 call 0x117e2711 */
  push32(0x117e1efbu); f_117e2711();
  /* 117e1efb mov esi, eax */
  ESI = (EAX);
  /* 117e1efd pop ecx */
  ECX = (pop32());
  /* 117e1efe cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1f00 mov dword ptr [0x117e65d8], esi */
  w32((uint32_t)(0x117e65d8), (ESI));
  /* 117e1f06 jne 0x117e1f10 */
  if (!C.zf) goto L_117e1f10;
  /* 117e1f08 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e1f0a call 0x117e1a36 */
  push32(0x117e1f0fu); f_117e1a36();
  /* 117e1f0f pop ecx */
  ECX = (pop32());
L_117e1f10:;
  /* 117e1f10 mov edi, dword ptr [0x117e65a8] */
  EDI = (r32((uint32_t)(0x117e65a8)));
  /* 117e1f16 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e1f18 je 0x117e1f53 */
  if (C.zf) goto L_117e1f53;
  /* 117e1f1a push ebp */
  push32((uint32_t)(EBP));
L_117e1f1b:;
  /* 117e1f1b push edi */
  push32((uint32_t)(EDI));
  /* 117e1f1c call 0x117e2890 */
  push32(0x117e1f21u); f_117e2890();
  /* 117e1f21 mov ebp, eax */
  EBP = (EAX);
  /* 117e1f23 pop ecx */
  ECX = (pop32());
  /* 117e1f24 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 117e1f25 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e1f28 je 0x117e1f4c */
  if (C.zf) goto L_117e1f4c;
  /* 117e1f2a push ebp */
  push32((uint32_t)(EBP));
  /* 117e1f2b call 0x117e2711 */
  push32(0x117e1f30u); f_117e2711();
  /* 117e1f30 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1f32 pop ecx */
  ECX = (pop32());
  /* 117e1f33 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 117e1f35 jne 0x117e1f3f */
  if (!C.zf) goto L_117e1f3f;
  /* 117e1f37 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e1f39 call 0x117e1a36 */
  push32(0x117e1f3eu); f_117e1a36();
  /* 117e1f3e pop ecx */
  ECX = (pop32());
L_117e1f3f:;
  /* 117e1f3f push edi */
  push32((uint32_t)(EDI));
  /* 117e1f40 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e1f42 call 0x117e27a0 */
  push32(0x117e1f47u); f_117e27a0();
  /* 117e1f47 pop ecx */
  ECX = (pop32());
  /* 117e1f48 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1f4b pop ecx */
  ECX = (pop32());
L_117e1f4c:;
  /* 117e1f4c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1f4e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e1f50 jne 0x117e1f1b */
  if (!C.zf) goto L_117e1f1b;
  /* 117e1f52 pop ebp */
  EBP = (pop32());
L_117e1f53:;
  /* 117e1f53 push dword ptr [0x117e65a8] */
  push32((uint32_t)(r32((uint32_t)(0x117e65a8))));
  /* 117e1f59 call 0x117e26c9 */
  push32(0x117e1f5eu); f_117e26c9();
  /* 117e1f5e pop ecx */
  ECX = (pop32());
  /* 117e1f5f mov dword ptr [0x117e65a8], ebx */
  w32((uint32_t)(0x117e65a8), (EBX));
  /* 117e1f65 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 117e1f67 pop edi */
  EDI = (pop32());
  /* 117e1f68 pop esi */
  ESI = (pop32());
  /* 117e1f69 mov dword ptr [0x117e6b04], 1 */
  w32((uint32_t)(0x117e6b04), (0x1u));
  /* 117e1f73 pop ebx */
  EBX = (pop32());
  /* 117e1f74 ret  */
  ESPCHK(0x117e1ebcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f75 @ 0x117e1f75 (153 bytes, 62 insns) */
void f_117e1f75(void) {
  FTRACE(0x117e1f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e1f75 push ebp */
  push32((uint32_t)(EBP));
  /* 117e1f76 mov ebp, esp */
  EBP = (ESP);
  /* 117e1f78 push ecx */
  push32((uint32_t)(ECX));
  /* 117e1f79 push ecx */
  push32((uint32_t)(ECX));
  /* 117e1f7a push ebx */
  push32((uint32_t)(EBX));
  /* 117e1f7b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e1f7d cmp dword ptr [0x117e6b08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117e6b08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1f83 push esi */
  push32((uint32_t)(ESI));
  /* 117e1f84 push edi */
  push32((uint32_t)(EDI));
  /* 117e1f85 jne 0x117e1f8c */
  if (!C.zf) goto L_117e1f8c;
  /* 117e1f87 call 0x117e2ce3 */
  push32(0x117e1f8cu); f_117e2ce3();
L_117e1f8c:;
  /* 117e1f8c mov esi, 0x117e65fc */
  ESI = (0x117e65fcu);
  /* 117e1f91 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117e1f96 push esi */
  push32((uint32_t)(ESI));
  /* 117e1f97 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1f98 call dword ptr [0x117e509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e509c))), 0x117e1f9eu);
  /* 117e1f9e mov eax, dword ptr [0x117e6b18] */
  EAX = (r32((uint32_t)(0x117e6b18)));
  /* 117e1fa3 mov dword ptr [0x117e65e8], esi */
  w32((uint32_t)(0x117e65e8), (ESI));
  /* 117e1fa9 mov edi, esi */
  EDI = (ESI);
  /* 117e1fab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e1fad je 0x117e1fb1 */
  if (C.zf) goto L_117e1fb1;
  /* 117e1faf mov edi, eax */
  EDI = (EAX);
L_117e1fb1:;
  /* 117e1fb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117e1fb4 push eax */
  push32((uint32_t)(EAX));
  /* 117e1fb5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 117e1fb8 push eax */
  push32((uint32_t)(EAX));
  /* 117e1fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 117e1fba push ebx */
  push32((uint32_t)(EBX));
  /* 117e1fbb push edi */
  push32((uint32_t)(EDI));
  /* 117e1fbc call 0x117e200e */
  push32(0x117e1fc1u); f_117e200e();
  /* 117e1fc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117e1fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e1fc7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 117e1fca push eax */
  push32((uint32_t)(EAX));
  /* 117e1fcb call 0x117e2711 */
  push32(0x117e1fd0u); f_117e2711();
  /* 117e1fd0 mov esi, eax */
  ESI = (EAX);
  /* 117e1fd2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1fd5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e1fd7 jne 0x117e1fe1 */
  if (!C.zf) goto L_117e1fe1;
  /* 117e1fd9 push 8 */
  push32((uint32_t)(0x8u));
  /* 117e1fdb call 0x117e1a36 */
  push32(0x117e1fe0u); f_117e1a36();
  /* 117e1fe0 pop ecx */
  ECX = (pop32());
L_117e1fe1:;
  /* 117e1fe1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117e1fe4 push eax */
  push32((uint32_t)(EAX));
  /* 117e1fe5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 117e1fe8 push eax */
  push32((uint32_t)(EAX));
  /* 117e1fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e1fec lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 117e1fef push eax */
  push32((uint32_t)(EAX));
  /* 117e1ff0 push esi */
  push32((uint32_t)(ESI));
  /* 117e1ff1 push edi */
  push32((uint32_t)(EDI));
  /* 117e1ff2 call 0x117e200e */
  push32(0x117e1ff7u); f_117e200e();
  /* 117e1ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e1ffa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e1ffd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117e1ffe mov dword ptr [0x117e65d0], esi */
  w32((uint32_t)(0x117e65d0), (ESI));
  /* 117e2004 pop edi */
  EDI = (pop32());
  /* 117e2005 pop esi */
  ESI = (pop32());
  /* 117e2006 mov dword ptr [0x117e65cc], eax */
  w32((uint32_t)(0x117e65cc), (EAX));
  /* 117e200b pop ebx */
  EBX = (pop32());
  /* 117e200c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e200d ret  */
  ESPCHK(0x117e1f75u, _esp0);
  ESP += 4; return;
}

/* FUN_1000200e @ 0x117e200e (436 bytes, 187 insns) */
void f_117e200e(void) {
  FTRACE(0x117e200eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e200e push ebp */
  push32((uint32_t)(EBP));
  /* 117e200f mov ebp, esp */
  EBP = (ESP);
  /* 117e2011 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117e2014 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117e2017 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2018 push esi */
  push32((uint32_t)(ESI));
  /* 117e2019 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117e201c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 117e201f push edi */
  push32((uint32_t)(EDI));
  /* 117e2020 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 117e2023 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 117e2029 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e202c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e202e je 0x117e2038 */
  if (C.zf) goto L_117e2038;
  /* 117e2030 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 117e2032 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2035 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117e2038:;
  /* 117e2038 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e203b jne 0x117e2081 */
  if (!C.zf) goto L_117e2081;
L_117e203d:;
  /* 117e203d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 117e2040 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2041 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2044 je 0x117e206f */
  if (C.zf) goto L_117e206f;
  /* 117e2046 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e2048 je 0x117e206f */
  if (C.zf) goto L_117e206f;
  /* 117e204a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 117e204d test byte ptr [edx + 0x117e68e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x117e68e1)))&(0x4u); fl_logic(_r,8); }
  /* 117e2054 je 0x117e2062 */
  if (C.zf) goto L_117e2062;
  /* 117e2056 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e2058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e205a je 0x117e2062 */
  if (C.zf) goto L_117e2062;
  /* 117e205c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e205e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117e2060 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e2061 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117e2062:;
  /* 117e2062 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e2064 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2066 je 0x117e203d */
  if (C.zf) goto L_117e203d;
  /* 117e2068 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e206a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117e206c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e206d jmp 0x117e203d */
  goto L_117e203d;
L_117e206f:;
  /* 117e206f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e2071 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2073 je 0x117e2079 */
  if (C.zf) goto L_117e2079;
  /* 117e2075 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 117e2078 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117e2079:;
  /* 117e2079 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e207c jne 0x117e20c4 */
  if (!C.zf) goto L_117e20c4;
  /* 117e207e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e207f jmp 0x117e20c4 */
  goto L_117e20c4;
L_117e2081:;
  /* 117e2081 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e2083 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2085 je 0x117e208c */
  if (C.zf) goto L_117e208c;
  /* 117e2087 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e2089 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117e208b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117e208c:;
  /* 117e208c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e208e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e208f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 117e2092 test byte ptr [ebx + 0x117e68e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x117e68e1)))&(0x4u); fl_logic(_r,8); }
  /* 117e2099 je 0x117e20a7 */
  if (C.zf) goto L_117e20a7;
  /* 117e209b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e209d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e209f je 0x117e20a6 */
  if (C.zf) goto L_117e20a6;
  /* 117e20a1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 117e20a3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 117e20a5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117e20a6:;
  /* 117e20a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117e20a7:;
  /* 117e20a7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e20aa je 0x117e20b5 */
  if (C.zf) goto L_117e20b5;
  /* 117e20ac test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e20ae je 0x117e20b9 */
  if (C.zf) goto L_117e20b9;
  /* 117e20b0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e20b3 jne 0x117e2081 */
  if (!C.zf) goto L_117e2081;
L_117e20b5:;
  /* 117e20b5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e20b7 jne 0x117e20bc */
  if (!C.zf) goto L_117e20bc;
L_117e20b9:;
  /* 117e20b9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117e20ba jmp 0x117e20c4 */
  goto L_117e20c4;
L_117e20bc:;
  /* 117e20bc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e20be je 0x117e20c4 */
  if (C.zf) goto L_117e20c4;
  /* 117e20c0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_117e20c4:;
  /* 117e20c4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_117e20c8:;
  /* 117e20c8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e20cb je 0x117e21b1 */
  if (C.zf) goto L_117e21b1;
L_117e20d1:;
  /* 117e20d1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e20d3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e20d6 je 0x117e20dd */
  if (C.zf) goto L_117e20dd;
  /* 117e20d8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e20db jne 0x117e20e0 */
  if (!C.zf) goto L_117e20e0;
L_117e20dd:;
  /* 117e20dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e20de jmp 0x117e20d1 */
  goto L_117e20d1;
L_117e20e0:;
  /* 117e20e0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e20e3 je 0x117e21b1 */
  if (C.zf) goto L_117e21b1;
  /* 117e20e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e20eb je 0x117e20f5 */
  if (C.zf) goto L_117e20f5;
  /* 117e20ed mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 117e20ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e20f2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117e20f5:;
  /* 117e20f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117e20f8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_117e20fa:;
  /* 117e20fa mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 117e2101 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117e2103:;
  /* 117e2103 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2106 jne 0x117e210c */
  if (!C.zf) goto L_117e210c;
  /* 117e2108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2109 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117e210a jmp 0x117e2103 */
  goto L_117e2103;
L_117e210c:;
  /* 117e210c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e210f jne 0x117e213d */
  if (!C.zf) goto L_117e213d;
  /* 117e2111 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 117e2114 jne 0x117e213b */
  if (!C.zf) goto L_117e213b;
  /* 117e2116 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e2118 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e211b je 0x117e212a */
  if (C.zf) goto L_117e212a;
  /* 117e211d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2121 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 117e2124 jne 0x117e212a */
  if (!C.zf) goto L_117e212a;
  /* 117e2126 mov eax, edx */
  EAX = (EDX);
  /* 117e2128 jmp 0x117e212d */
  goto L_117e212d;
L_117e212a:;
  /* 117e212a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_117e212d:;
  /* 117e212d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 117e2130 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2132 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2135 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 117e2138 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_117e213b:;
  /* 117e213b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_117e213d:;
  /* 117e213d mov edx, ebx */
  EDX = (EBX);
  /* 117e213f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117e2140 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117e2142 je 0x117e2152 */
  if (C.zf) goto L_117e2152;
  /* 117e2144 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_117e2145:;
  /* 117e2145 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2147 je 0x117e214d */
  if (C.zf) goto L_117e214d;
  /* 117e2149 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 117e214c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117e214d:;
  /* 117e214d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e214f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117e2150 jne 0x117e2145 */
  if (!C.zf) goto L_117e2145;
L_117e2152:;
  /* 117e2152 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e2154 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e2156 je 0x117e21a2 */
  if (C.zf) goto L_117e21a2;
  /* 117e2158 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e215c jne 0x117e2168 */
  if (!C.zf) goto L_117e2168;
  /* 117e215e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2161 je 0x117e21a2 */
  if (C.zf) goto L_117e21a2;
  /* 117e2163 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2166 je 0x117e21a2 */
  if (C.zf) goto L_117e21a2;
L_117e2168:;
  /* 117e2168 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e216c je 0x117e219c */
  if (C.zf) goto L_117e219c;
  /* 117e216e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2170 je 0x117e218b */
  if (C.zf) goto L_117e218b;
  /* 117e2172 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 117e2175 test byte ptr [ebx + 0x117e68e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x117e68e1)))&(0x4u); fl_logic(_r,8); }
  /* 117e217c je 0x117e2184 */
  if (C.zf) goto L_117e2184;
  /* 117e217e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117e2180 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e2181 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2182 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_117e2184:;
  /* 117e2184 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117e2186 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 117e2188 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e2189 jmp 0x117e219a */
  goto L_117e219a;
L_117e218b:;
  /* 117e218b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 117e218e test byte ptr [edx + 0x117e68e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x117e68e1)))&(0x4u); fl_logic(_r,8); }
  /* 117e2195 je 0x117e219a */
  if (C.zf) goto L_117e219a;
  /* 117e2197 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2198 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_117e219a:;
  /* 117e219a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_117e219c:;
  /* 117e219c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e219d jmp 0x117e20fa */
  goto L_117e20fa;
L_117e21a2:;
  /* 117e21a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e21a4 je 0x117e21aa */
  if (C.zf) goto L_117e21aa;
  /* 117e21a6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 117e21a9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117e21aa:;
  /* 117e21aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117e21ac jmp 0x117e20c8 */
  goto L_117e20c8;
L_117e21b1:;
  /* 117e21b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e21b3 je 0x117e21b8 */
  if (C.zf) goto L_117e21b8;
  /* 117e21b5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_117e21b8:;
  /* 117e21b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117e21bb pop edi */
  EDI = (pop32());
  /* 117e21bc pop esi */
  ESI = (pop32());
  /* 117e21bd pop ebx */
  EBX = (pop32());
  /* 117e21be inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 117e21c0 pop ebp */
  EBP = (pop32());
  /* 117e21c1 ret  */
  ESPCHK(0x117e200eu, _esp0);
  ESP += 4; return;
}

/* FUN_100021c2 @ 0x117e21c2 (306 bytes, 132 insns) */
void f_117e21c2(void) {
  FTRACE(0x117e21c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e21c2 push ecx */
  push32((uint32_t)(ECX));
  /* 117e21c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117e21c4 mov eax, dword ptr [0x117e6700] */
  EAX = (r32((uint32_t)(0x117e6700)));
  /* 117e21c9 push ebx */
  push32((uint32_t)(EBX));
  /* 117e21ca push ebp */
  push32((uint32_t)(EBP));
  /* 117e21cb mov ebp, dword ptr [0x117e5084] */
  EBP = (r32((uint32_t)(0x117e5084)));
  /* 117e21d1 push esi */
  push32((uint32_t)(ESI));
  /* 117e21d2 push edi */
  push32((uint32_t)(EDI));
  /* 117e21d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e21d5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117e21d7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e21d9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e21db jne 0x117e2210 */
  if (!C.zf) goto L_117e2210;
  /* 117e21dd call ebp */
  call_ind((uint32_t)(EBP), 0x117e21dfu);
  /* 117e21df mov esi, eax */
  ESI = (EAX);
  /* 117e21e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e21e3 je 0x117e21f1 */
  if (C.zf) goto L_117e21f1;
  /* 117e21e5 mov dword ptr [0x117e6700], 1 */
  w32((uint32_t)(0x117e6700), (0x1u));
  /* 117e21ef jmp 0x117e2219 */
  goto L_117e2219;
L_117e21f1:;
  /* 117e21f1 call dword ptr [0x117e5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5080))), 0x117e21f7u);
  /* 117e21f7 mov edi, eax */
  EDI = (EAX);
  /* 117e21f9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e21fb je 0x117e22eb */
  if (C.zf) goto L_117e22eb;
  /* 117e2201 mov dword ptr [0x117e6700], 2 */
  w32((uint32_t)(0x117e6700), (0x2u));
  /* 117e220b jmp 0x117e229f */
  goto L_117e229f;
L_117e2210:;
  /* 117e2210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2213 jne 0x117e229a */
  if (!C.zf) goto L_117e229a;
L_117e2219:;
  /* 117e2219 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e221b jne 0x117e2229 */
  if (!C.zf) goto L_117e2229;
  /* 117e221d call ebp */
  call_ind((uint32_t)(EBP), 0x117e221fu);
  /* 117e221f mov esi, eax */
  ESI = (EAX);
  /* 117e2221 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2223 je 0x117e22eb */
  if (C.zf) goto L_117e22eb;
L_117e2229:;
  /* 117e2229 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117e222c mov eax, esi */
  EAX = (ESI);
  /* 117e222e je 0x117e223e */
  if (C.zf) goto L_117e223e;
L_117e2230:;
  /* 117e2230 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2231 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2232 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117e2235 jne 0x117e2230 */
  if (!C.zf) goto L_117e2230;
  /* 117e2237 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2238 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2239 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117e223c jne 0x117e2230 */
  if (!C.zf) goto L_117e2230;
L_117e223e:;
  /* 117e223e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2240 mov edi, dword ptr [0x117e50a8] */
  EDI = (r32((uint32_t)(0x117e50a8)));
  /* 117e2246 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117e2248 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2249 push ebx */
  push32((uint32_t)(EBX));
  /* 117e224a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e224b push ebx */
  push32((uint32_t)(EBX));
  /* 117e224c push ebx */
  push32((uint32_t)(EBX));
  /* 117e224d push eax */
  push32((uint32_t)(EAX));
  /* 117e224e push esi */
  push32((uint32_t)(ESI));
  /* 117e224f push ebx */
  push32((uint32_t)(EBX));
  /* 117e2250 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2251 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 117e2255 call edi */
  call_ind((uint32_t)(EDI), 0x117e2257u);
  /* 117e2257 mov ebp, eax */
  EBP = (EAX);
  /* 117e2259 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e225b je 0x117e228f */
  if (C.zf) goto L_117e228f;
  /* 117e225d push ebp */
  push32((uint32_t)(EBP));
  /* 117e225e call 0x117e2711 */
  push32(0x117e2263u); f_117e2711();
  /* 117e2263 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2265 pop ecx */
  ECX = (pop32());
  /* 117e2266 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 117e226a je 0x117e228f */
  if (C.zf) goto L_117e228f;
  /* 117e226c push ebx */
  push32((uint32_t)(EBX));
  /* 117e226d push ebx */
  push32((uint32_t)(EBX));
  /* 117e226e push ebp */
  push32((uint32_t)(EBP));
  /* 117e226f push eax */
  push32((uint32_t)(EAX));
  /* 117e2270 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 117e2274 push esi */
  push32((uint32_t)(ESI));
  /* 117e2275 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2276 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2277 call edi */
  call_ind((uint32_t)(EDI), 0x117e2279u);
  /* 117e2279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e227b jne 0x117e228b */
  if (!C.zf) goto L_117e228b;
  /* 117e227d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 117e2281 call 0x117e26c9 */
  push32(0x117e2286u); f_117e26c9();
  /* 117e2286 pop ecx */
  ECX = (pop32());
  /* 117e2287 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_117e228b:;
  /* 117e228b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_117e228f:;
  /* 117e228f push esi */
  push32((uint32_t)(ESI));
  /* 117e2290 call dword ptr [0x117e50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50a4))), 0x117e2296u);
  /* 117e2296 mov eax, ebx */
  EAX = (EBX);
  /* 117e2298 jmp 0x117e22ed */
  goto L_117e22ed;
L_117e229a:;
  /* 117e229a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e229d jne 0x117e22eb */
  if (!C.zf) goto L_117e22eb;
L_117e229f:;
  /* 117e229f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e22a1 jne 0x117e22af */
  if (!C.zf) goto L_117e22af;
  /* 117e22a3 call dword ptr [0x117e5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5080))), 0x117e22a9u);
  /* 117e22a9 mov edi, eax */
  EDI = (EAX);
  /* 117e22ab cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e22ad je 0x117e22eb */
  if (C.zf) goto L_117e22eb;
L_117e22af:;
  /* 117e22af cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e22b1 mov eax, edi */
  EAX = (EDI);
  /* 117e22b3 je 0x117e22bf */
  if (C.zf) goto L_117e22bf;
L_117e22b5:;
  /* 117e22b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e22b6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e22b8 jne 0x117e22b5 */
  if (!C.zf) goto L_117e22b5;
  /* 117e22ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e22bb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e22bd jne 0x117e22b5 */
  if (!C.zf) goto L_117e22b5;
L_117e22bf:;
  /* 117e22bf sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e22c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e22c2 mov ebp, eax */
  EBP = (EAX);
  /* 117e22c4 push ebp */
  push32((uint32_t)(EBP));
  /* 117e22c5 call 0x117e2711 */
  push32(0x117e22cau); f_117e2711();
  /* 117e22ca mov esi, eax */
  ESI = (EAX);
  /* 117e22cc pop ecx */
  ECX = (pop32());
  /* 117e22cd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e22cf jne 0x117e22d5 */
  if (!C.zf) goto L_117e22d5;
  /* 117e22d1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117e22d3 jmp 0x117e22e0 */
  goto L_117e22e0;
L_117e22d5:;
  /* 117e22d5 push ebp */
  push32((uint32_t)(EBP));
  /* 117e22d6 push edi */
  push32((uint32_t)(EDI));
  /* 117e22d7 push esi */
  push32((uint32_t)(ESI));
  /* 117e22d8 call 0x117e2d00 */
  push32(0x117e22ddu); f_117e2d00();
  /* 117e22dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e22e0:;
  /* 117e22e0 push edi */
  push32((uint32_t)(EDI));
  /* 117e22e1 call dword ptr [0x117e50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50a0))), 0x117e22e7u);
  /* 117e22e7 mov eax, esi */
  EAX = (ESI);
  /* 117e22e9 jmp 0x117e22ed */
  goto L_117e22ed;
L_117e22eb:;
  /* 117e22eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117e22ed:;
  /* 117e22ed pop edi */
  EDI = (pop32());
  /* 117e22ee pop esi */
  ESI = (pop32());
  /* 117e22ef pop ebp */
  EBP = (pop32());
  /* 117e22f0 pop ebx */
  EBX = (pop32());
  /* 117e22f1 pop ecx */
  ECX = (pop32());
  /* 117e22f2 pop ecx */
  ECX = (pop32());
  /* 117e22f3 ret  */
  ESPCHK(0x117e21c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f4 @ 0x117e22f4 (60 bytes, 20 insns) */
void f_117e22f4(void) {
  FTRACE(0x117e22f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e22f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e22f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e22f8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e22fc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117e2301 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 117e2304 push eax */
  push32((uint32_t)(EAX));
  /* 117e2305 call dword ptr [0x117e5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5054))), 0x117e230bu);
  /* 117e230b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e230d mov dword ptr [0x117e69e8], eax */
  w32((uint32_t)(0x117e69e8), (EAX));
  /* 117e2312 je 0x117e2329 */
  if (C.zf) goto L_117e2329;
  /* 117e2314 call 0x117e3035 */
  push32(0x117e2319u); f_117e3035();
  /* 117e2319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e231b jne 0x117e232c */
  if (!C.zf) goto L_117e232c;
  /* 117e231d push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e2323 call dword ptr [0x117e5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5058))), 0x117e2329u);
L_117e2329:;
  /* 117e2329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e232b ret  */
  ESPCHK(0x117e22f4u, _esp0);
  ESP += 4; return;
L_117e232c:;
  /* 117e232c push 1 */
  push32((uint32_t)(0x1u));
  /* 117e232e pop eax */
  EAX = (pop32());
  /* 117e232f ret  */
  ESPCHK(0x117e22f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002330 @ 0x117e2330 (117 bytes, 38 insns) */
void f_117e2330(void) {
  FTRACE(0x117e2330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2330 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2331 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e2333 cmp dword ptr [0x117e67b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117e67b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2339 push ebp */
  push32((uint32_t)(EBP));
  /* 117e233a mov ebp, dword ptr [0x117e504c] */
  EBP = (r32((uint32_t)(0x117e504c)));
  /* 117e2340 jle 0x117e2386 */
  if ((C.zf||C.sf!=C.of)) goto L_117e2386;
  /* 117e2342 mov eax, dword ptr [0x117e67bc] */
  EAX = (r32((uint32_t)(0x117e67bc)));
  /* 117e2347 push esi */
  push32((uint32_t)(ESI));
  /* 117e2348 push edi */
  push32((uint32_t)(EDI));
  /* 117e2349 mov edi, dword ptr [0x117e5050] */
  EDI = (r32((uint32_t)(0x117e5050)));
  /* 117e234f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_117e2352:;
  /* 117e2352 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117e2357 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117e235c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e235e call edi */
  call_ind((uint32_t)(EDI), 0x117e2360u);
  /* 117e2360 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117e2365 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2367 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e2369 call edi */
  call_ind((uint32_t)(EDI), 0x117e236bu);
  /* 117e236b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 117e236e push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2370 push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e2376 call ebp */
  call_ind((uint32_t)(EBP), 0x117e2378u);
  /* 117e2378 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e237b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117e237c cmp ebx, dword ptr [0x117e67b8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117e67b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2382 jl 0x117e2352 */
  if ((C.sf!=C.of)) goto L_117e2352;
  /* 117e2384 pop edi */
  EDI = (pop32());
  /* 117e2385 pop esi */
  ESI = (pop32());
L_117e2386:;
  /* 117e2386 push dword ptr [0x117e67bc] */
  push32((uint32_t)(r32((uint32_t)(0x117e67bc))));
  /* 117e238c push 0 */
  push32((uint32_t)(0x0u));
  /* 117e238e push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e2394 call ebp */
  call_ind((uint32_t)(EBP), 0x117e2396u);
  /* 117e2396 push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e239c call dword ptr [0x117e5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5058))), 0x117e23a2u);
  /* 117e23a2 pop ebp */
  EBP = (pop32());
  /* 117e23a3 pop ebx */
  EBX = (pop32());
  /* 117e23a4 ret  */
  ESPCHK(0x117e2330u, _esp0);
  ESP += 4; return;
}

/* FUN_100023a5 @ 0x117e23a5 (57 bytes, 18 insns) */
void f_117e23a5(void) {
  FTRACE(0x117e23a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e23a5 mov eax, dword ptr [0x117e65b0] */
  EAX = (r32((uint32_t)(0x117e65b0)));
  /* 117e23aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e23ad je 0x117e23bc */
  if (C.zf) goto L_117e23bc;
  /* 117e23af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e23b1 jne 0x117e23dd */
  if (!C.zf) goto L_117e23dd;
  /* 117e23b3 cmp dword ptr [0x117e65b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117e65b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e23ba jne 0x117e23dd */
  if (!C.zf) goto L_117e23dd;
L_117e23bc:;
  /* 117e23bc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 117e23c1 call 0x117e23de */
  push32(0x117e23c6u); f_117e23de();
  /* 117e23c6 mov eax, dword ptr [0x117e6704] */
  EAX = (r32((uint32_t)(0x117e6704)));
  /* 117e23cb pop ecx */
  ECX = (pop32());
  /* 117e23cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e23ce je 0x117e23d2 */
  if (C.zf) goto L_117e23d2;
  /* 117e23d0 call eax */
  call_ind((uint32_t)(EAX), 0x117e23d2u);
L_117e23d2:;
  /* 117e23d2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 117e23d7 call 0x117e23de */
  push32(0x117e23dcu); f_117e23de();
  /* 117e23dc pop ecx */
  ECX = (pop32());
L_117e23dd:;
  /* 117e23dd ret  */
  ESPCHK(0x117e23a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100023de @ 0x117e23de (339 bytes, 100 insns) */
void f_117e23de(void) {
  FTRACE(0x117e23deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e23de push ebp */
  push32((uint32_t)(EBP));
  /* 117e23df mov ebp, esp */
  EBP = (ESP);
  /* 117e23e1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e23e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e23ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117e23ec mov eax, 0x117e6210 */
  EAX = (0x117e6210u);
L_117e23f1:;
  /* 117e23f1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e23f3 je 0x117e2400 */
  if (C.zf) goto L_117e2400;
  /* 117e23f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e23f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e23f9 cmp eax, 0x117e62a0 */
  { uint32_t _a=(EAX),_b=(0x117e62a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e23fe jl 0x117e23f1 */
  if ((C.sf!=C.of)) goto L_117e23f1;
L_117e2400:;
  /* 117e2400 push esi */
  push32((uint32_t)(ESI));
  /* 117e2401 mov esi, ecx */
  ESI = (ECX);
  /* 117e2403 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 117e2406 cmp edx, dword ptr [esi + 0x117e6210] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x117e6210))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e240c jne 0x117e252e */
  if (!C.zf) goto L_117e252e;
  /* 117e2412 mov eax, dword ptr [0x117e65b0] */
  EAX = (r32((uint32_t)(0x117e65b0)));
  /* 117e2417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e241a je 0x117e2508 */
  if (C.zf) goto L_117e2508;
  /* 117e2420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e2422 jne 0x117e2431 */
  if (!C.zf) goto L_117e2431;
  /* 117e2424 cmp dword ptr [0x117e65b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117e65b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e242b je 0x117e2508 */
  if (C.zf) goto L_117e2508;
L_117e2431:;
  /* 117e2431 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2437 je 0x117e252e */
  if (C.zf) goto L_117e252e;
  /* 117e243d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117e2443 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117e2448 push eax */
  push32((uint32_t)(EAX));
  /* 117e2449 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e244b call dword ptr [0x117e509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e509c))), 0x117e2451u);
  /* 117e2451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e2453 jne 0x117e2468 */
  if (!C.zf) goto L_117e2468;
  /* 117e2455 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117e245b push 0x117e53f8 */
  push32((uint32_t)(0x117e53f8u));
  /* 117e2460 push eax */
  push32((uint32_t)(EAX));
  /* 117e2461 call 0x117e27a0 */
  push32(0x117e2466u); f_117e27a0();
  /* 117e2466 pop ecx */
  ECX = (pop32());
  /* 117e2467 pop ecx */
  ECX = (pop32());
L_117e2468:;
  /* 117e2468 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117e246e push edi */
  push32((uint32_t)(EDI));
  /* 117e246f push eax */
  push32((uint32_t)(EAX));
  /* 117e2470 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 117e2476 call 0x117e2890 */
  push32(0x117e247bu); f_117e2890();
  /* 117e247b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e247c pop ecx */
  ECX = (pop32());
  /* 117e247d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2480 jbe 0x117e24ab */
  if ((C.cf||C.zf)) goto L_117e24ab;
  /* 117e2482 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117e2488 push eax */
  push32((uint32_t)(EAX));
  /* 117e2489 call 0x117e2890 */
  push32(0x117e248eu); f_117e2890();
  /* 117e248e mov edi, eax */
  EDI = (EAX);
  /* 117e2490 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117e2496 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2499 push 3 */
  push32((uint32_t)(0x3u));
  /* 117e249b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e249d push 0x117e53f4 */
  push32((uint32_t)(0x117e53f4u));
  /* 117e24a2 push edi */
  push32((uint32_t)(EDI));
  /* 117e24a3 call 0x117e3910 */
  push32(0x117e24a8u); f_117e3910();
  /* 117e24a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e24ab:;
  /* 117e24ab lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117e24b1 push 0x117e53d8 */
  push32((uint32_t)(0x117e53d8u));
  /* 117e24b6 push eax */
  push32((uint32_t)(EAX));
  /* 117e24b7 call 0x117e27a0 */
  push32(0x117e24bcu); f_117e27a0();
  /* 117e24bc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117e24c2 push edi */
  push32((uint32_t)(EDI));
  /* 117e24c3 push eax */
  push32((uint32_t)(EAX));
  /* 117e24c4 call 0x117e27b0 */
  push32(0x117e24c9u); f_117e27b0();
  /* 117e24c9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117e24cf push 0x117e53d4 */
  push32((uint32_t)(0x117e53d4u));
  /* 117e24d4 push eax */
  push32((uint32_t)(EAX));
  /* 117e24d5 call 0x117e27b0 */
  push32(0x117e24dau); f_117e27b0();
  /* 117e24da push dword ptr [esi + 0x117e6214] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x117e6214))));
  /* 117e24e0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117e24e6 push eax */
  push32((uint32_t)(EAX));
  /* 117e24e7 call 0x117e27b0 */
  push32(0x117e24ecu); f_117e27b0();
  /* 117e24ec push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 117e24f1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117e24f7 push 0x117e53ac */
  push32((uint32_t)(0x117e53acu));
  /* 117e24fc push eax */
  push32((uint32_t)(EAX));
  /* 117e24fd call 0x117e387e */
  push32(0x117e2502u); f_117e387e();
  /* 117e2502 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2505 pop edi */
  EDI = (pop32());
  /* 117e2506 jmp 0x117e252e */
  goto L_117e252e;
L_117e2508:;
  /* 117e2508 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 117e250b lea esi, [esi + 0x117e6214] */
  ESI = ((uint32_t)(ESI + 0x117e6214));
  /* 117e2511 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2513 push eax */
  push32((uint32_t)(EAX));
  /* 117e2514 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e2516 call 0x117e2890 */
  push32(0x117e251bu); f_117e2890();
  /* 117e251b pop ecx */
  ECX = (pop32());
  /* 117e251c push eax */
  push32((uint32_t)(EAX));
  /* 117e251d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e251f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117e2521 call dword ptr [0x117e508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e508c))), 0x117e2527u);
  /* 117e2527 push eax */
  push32((uint32_t)(EAX));
  /* 117e2528 call dword ptr [0x117e5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5048))), 0x117e252eu);
L_117e252e:;
  /* 117e252e pop esi */
  ESI = (pop32());
  /* 117e252f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2530 ret  */
  ESPCHK(0x117e23deu, _esp0);
  ESP += 4; return;
}

/* FUN_10002531 @ 0x117e2531 (41 bytes, 12 insns) */
void f_117e2531(void) {
  FTRACE(0x117e2531u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2531 push esi */
  push32((uint32_t)(ESI));
  /* 117e2532 mov esi, dword ptr [0x117e5044] */
  ESI = (r32((uint32_t)(0x117e5044)));
  /* 117e2538 push dword ptr [0x117e62e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62e4))));
  /* 117e253e call esi */
  call_ind((uint32_t)(ESI), 0x117e2540u);
  /* 117e2540 push dword ptr [0x117e62d4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62d4))));
  /* 117e2546 call esi */
  call_ind((uint32_t)(ESI), 0x117e2548u);
  /* 117e2548 push dword ptr [0x117e62c4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62c4))));
  /* 117e254e call esi */
  call_ind((uint32_t)(ESI), 0x117e2550u);
  /* 117e2550 push dword ptr [0x117e62a4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62a4))));
  /* 117e2556 call esi */
  call_ind((uint32_t)(ESI), 0x117e2558u);
  /* 117e2558 pop esi */
  ESI = (pop32());
  /* 117e2559 ret  */
  ESPCHK(0x117e2531u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255a @ 0x117e255a (108 bytes, 34 insns) */
void f_117e255a(void) {
  FTRACE(0x117e255au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e255a push esi */
  push32((uint32_t)(ESI));
  /* 117e255b push edi */
  push32((uint32_t)(EDI));
  /* 117e255c mov edi, dword ptr [0x117e5098] */
  EDI = (r32((uint32_t)(0x117e5098)));
  /* 117e2562 mov esi, 0x117e62a0 */
  ESI = (0x117e62a0u);
L_117e2567:;
  /* 117e2567 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117e2569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e256b je 0x117e2598 */
  if (C.zf) goto L_117e2598;
  /* 117e256d cmp esi, 0x117e62e4 */
  { uint32_t _a=(ESI),_b=(0x117e62e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2573 je 0x117e2598 */
  if (C.zf) goto L_117e2598;
  /* 117e2575 cmp esi, 0x117e62d4 */
  { uint32_t _a=(ESI),_b=(0x117e62d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e257b je 0x117e2598 */
  if (C.zf) goto L_117e2598;
  /* 117e257d cmp esi, 0x117e62c4 */
  { uint32_t _a=(ESI),_b=(0x117e62c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2583 je 0x117e2598 */
  if (C.zf) goto L_117e2598;
  /* 117e2585 cmp esi, 0x117e62a4 */
  { uint32_t _a=(ESI),_b=(0x117e62a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e258b je 0x117e2598 */
  if (C.zf) goto L_117e2598;
  /* 117e258d push eax */
  push32((uint32_t)(EAX));
  /* 117e258e call edi */
  call_ind((uint32_t)(EDI), 0x117e2590u);
  /* 117e2590 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e2592 call 0x117e26c9 */
  push32(0x117e2597u); f_117e26c9();
  /* 117e2597 pop ecx */
  ECX = (pop32());
L_117e2598:;
  /* 117e2598 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e259b cmp esi, 0x117e6360 */
  { uint32_t _a=(ESI),_b=(0x117e6360u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e25a1 jl 0x117e2567 */
  if ((C.sf!=C.of)) goto L_117e2567;
  /* 117e25a3 push dword ptr [0x117e62c4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62c4))));
  /* 117e25a9 call edi */
  call_ind((uint32_t)(EDI), 0x117e25abu);
  /* 117e25ab push dword ptr [0x117e62d4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62d4))));
  /* 117e25b1 call edi */
  call_ind((uint32_t)(EDI), 0x117e25b3u);
  /* 117e25b3 push dword ptr [0x117e62e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62e4))));
  /* 117e25b9 call edi */
  call_ind((uint32_t)(EDI), 0x117e25bbu);
  /* 117e25bb push dword ptr [0x117e62a4] */
  push32((uint32_t)(r32((uint32_t)(0x117e62a4))));
  /* 117e25c1 call edi */
  call_ind((uint32_t)(EDI), 0x117e25c3u);
  /* 117e25c3 pop edi */
  EDI = (pop32());
  /* 117e25c4 pop esi */
  ESI = (pop32());
  /* 117e25c5 ret  */
  ESPCHK(0x117e255au, _esp0);
  ESP += 4; return;
}

/* FUN_100025c6 @ 0x117e25c6 (97 bytes, 37 insns) */
void f_117e25c6(void) {
  FTRACE(0x117e25c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e25c6 push ebp */
  push32((uint32_t)(EBP));
  /* 117e25c7 mov ebp, esp */
  EBP = (ESP);
  /* 117e25c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e25cc push esi */
  push32((uint32_t)(ESI));
  /* 117e25cd cmp dword ptr [eax*4 + 0x117e62a0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x117e62a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e25d5 lea esi, [eax*4 + 0x117e62a0] */
  ESI = ((uint32_t)(EAX*4 + 0x117e62a0));
  /* 117e25dc jne 0x117e261c */
  if (!C.zf) goto L_117e261c;
  /* 117e25de push edi */
  push32((uint32_t)(EDI));
  /* 117e25df push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117e25e1 call 0x117e2711 */
  push32(0x117e25e6u); f_117e2711();
  /* 117e25e6 mov edi, eax */
  EDI = (EAX);
  /* 117e25e8 pop ecx */
  ECX = (pop32());
  /* 117e25e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e25eb jne 0x117e25f5 */
  if (!C.zf) goto L_117e25f5;
  /* 117e25ed push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117e25ef call 0x117e1a36 */
  push32(0x117e25f4u); f_117e1a36();
  /* 117e25f4 pop ecx */
  ECX = (pop32());
L_117e25f5:;
  /* 117e25f5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117e25f7 call 0x117e25c6 */
  push32(0x117e25fcu); f_117e25c6();
  /* 117e25fc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e25ff pop ecx */
  ECX = (pop32());
  /* 117e2600 push edi */
  push32((uint32_t)(EDI));
  /* 117e2601 jne 0x117e260d */
  if (!C.zf) goto L_117e260d;
  /* 117e2603 call dword ptr [0x117e5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5044))), 0x117e2609u);
  /* 117e2609 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117e260b jmp 0x117e2613 */
  goto L_117e2613;
L_117e260d:;
  /* 117e260d call 0x117e26c9 */
  push32(0x117e2612u); f_117e26c9();
  /* 117e2612 pop ecx */
  ECX = (pop32());
L_117e2613:;
  /* 117e2613 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117e2615 call 0x117e2627 */
  push32(0x117e261au); f_117e2627();
  /* 117e261a pop ecx */
  ECX = (pop32());
  /* 117e261b pop edi */
  EDI = (pop32());
L_117e261c:;
  /* 117e261c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117e261e call dword ptr [0x117e5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5040))), 0x117e2624u);
  /* 117e2624 pop esi */
  ESI = (pop32());
  /* 117e2625 pop ebp */
  EBP = (pop32());
  /* 117e2626 ret  */
  ESPCHK(0x117e25c6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002627 @ 0x117e2627 (21 bytes, 7 insns) */
void f_117e2627(void) {
  FTRACE(0x117e2627u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2627 push ebp */
  push32((uint32_t)(EBP));
  /* 117e2628 mov ebp, esp */
  EBP = (ESP);
  /* 117e262a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e262d push dword ptr [eax*4 + 0x117e62a0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x117e62a0))));
  /* 117e2634 call dword ptr [0x117e503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e503c))), 0x117e263au);
  /* 117e263a pop ebp */
  EBP = (pop32());
  /* 117e263b ret  */
  ESPCHK(0x117e2627u, _esp0);
  ESP += 4; return;
}

/* FUN_1000263c @ 0x117e263c (141 bytes, 56 insns) */
void f_117e263c(void) {
  FTRACE(0x117e263cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e263c push ebx */
  push32((uint32_t)(EBX));
  /* 117e263d push esi */
  push32((uint32_t)(ESI));
  /* 117e263e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 117e2642 push edi */
  push32((uint32_t)(EDI));
  /* 117e2643 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117e2648 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e264b mov ebx, esi */
  EBX = (ESI);
  /* 117e264d ja 0x117e265c */
  if ((!C.cf&&!C.zf)) goto L_117e265c;
  /* 117e264f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2651 jne 0x117e2656 */
  if (!C.zf) goto L_117e2656;
  /* 117e2653 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e2655 pop esi */
  ESI = (pop32());
L_117e2656:;
  /* 117e2656 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2659 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_117e265c:;
  /* 117e265c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e265e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2661 ja 0x117e269d */
  if ((!C.cf&&!C.zf)) goto L_117e269d;
  /* 117e2663 cmp ebx, dword ptr [0x117e64f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117e64f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2669 ja 0x117e2688 */
  if ((!C.cf&&!C.zf)) goto L_117e2688;
  /* 117e266b push 9 */
  push32((uint32_t)(0x9u));
  /* 117e266d call 0x117e25c6 */
  push32(0x117e2672u); f_117e25c6();
  /* 117e2672 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2673 call 0x117e33c9 */
  push32(0x117e2678u); f_117e33c9();
  /* 117e2678 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e267a mov edi, eax */
  EDI = (EAX);
  /* 117e267c call 0x117e2627 */
  push32(0x117e2681u); f_117e2627();
  /* 117e2681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2684 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e2686 jne 0x117e26b3 */
  if (!C.zf) goto L_117e26b3;
L_117e2688:;
  /* 117e2688 push esi */
  push32((uint32_t)(ESI));
  /* 117e2689 push 8 */
  push32((uint32_t)(0x8u));
  /* 117e268b push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e2691 call dword ptr [0x117e5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5038))), 0x117e2697u);
  /* 117e2697 mov edi, eax */
  EDI = (EAX);
  /* 117e2699 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e269b jne 0x117e26bf */
  if (!C.zf) goto L_117e26bf;
L_117e269d:;
  /* 117e269d cmp dword ptr [0x117e677c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117e677c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e26a4 je 0x117e26bf */
  if (C.zf) goto L_117e26bf;
  /* 117e26a6 push esi */
  push32((uint32_t)(ESI));
  /* 117e26a7 call 0x117e3a68 */
  push32(0x117e26acu); f_117e3a68();
  /* 117e26ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e26ae pop ecx */
  ECX = (pop32());
  /* 117e26af je 0x117e26c5 */
  if (C.zf) goto L_117e26c5;
  /* 117e26b1 jmp 0x117e265c */
  goto L_117e265c;
L_117e26b3:;
  /* 117e26b3 push ebx */
  push32((uint32_t)(EBX));
  /* 117e26b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e26b6 push edi */
  push32((uint32_t)(EDI));
  /* 117e26b7 call 0x117e3a10 */
  push32(0x117e26bcu); f_117e3a10();
  /* 117e26bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117e26bf:;
  /* 117e26bf mov eax, edi */
  EAX = (EDI);
L_117e26c1:;
  /* 117e26c1 pop edi */
  EDI = (pop32());
  /* 117e26c2 pop esi */
  ESI = (pop32());
  /* 117e26c3 pop ebx */
  EBX = (pop32());
  /* 117e26c4 ret  */
  ESPCHK(0x117e263cu, _esp0);
  ESP += 4; return;
L_117e26c5:;
  /* 117e26c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e26c7 jmp 0x117e26c1 */
  goto L_117e26c1;
}

/* FUN_100026c9 @ 0x117e26c9 (72 bytes, 29 insns) */
void f_117e26c9(void) {
  FTRACE(0x117e26c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e26c9 push esi */
  push32((uint32_t)(ESI));
  /* 117e26ca mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117e26ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e26d0 je 0x117e270f */
  if (C.zf) goto L_117e270f;
  /* 117e26d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e26d4 call 0x117e25c6 */
  push32(0x117e26d9u); f_117e25c6();
  /* 117e26d9 push esi */
  push32((uint32_t)(ESI));
  /* 117e26da call 0x117e3073 */
  push32(0x117e26dfu); f_117e3073();
  /* 117e26df pop ecx */
  ECX = (pop32());
  /* 117e26e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e26e2 pop ecx */
  ECX = (pop32());
  /* 117e26e3 je 0x117e26f8 */
  if (C.zf) goto L_117e26f8;
  /* 117e26e5 push esi */
  push32((uint32_t)(ESI));
  /* 117e26e6 push eax */
  push32((uint32_t)(EAX));
  /* 117e26e7 call 0x117e309e */
  push32(0x117e26ecu); f_117e309e();
  /* 117e26ec push 9 */
  push32((uint32_t)(0x9u));
  /* 117e26ee call 0x117e2627 */
  push32(0x117e26f3u); f_117e2627();
  /* 117e26f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e26f6 pop esi */
  ESI = (pop32());
  /* 117e26f7 ret  */
  ESPCHK(0x117e26c9u, _esp0);
  ESP += 4; return;
L_117e26f8:;
  /* 117e26f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117e26fa call 0x117e2627 */
  push32(0x117e26ffu); f_117e2627();
  /* 117e26ff pop ecx */
  ECX = (pop32());
  /* 117e2700 push esi */
  push32((uint32_t)(ESI));
  /* 117e2701 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2703 push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e2709 call dword ptr [0x117e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e504c))), 0x117e270fu);
L_117e270f:;
  /* 117e270f pop esi */
  ESI = (pop32());
  /* 117e2710 ret  */
  ESPCHK(0x117e26c9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x117e2711 (18 bytes, 6 insns) */
void f_117e2711(void) {
  FTRACE(0x117e2711u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2711 push dword ptr [0x117e677c] */
  push32((uint32_t)(r32((uint32_t)(0x117e677c))));
  /* 117e2717 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117e271b call 0x117e2723 */
  push32(0x117e2720u); f_117e2723();
  /* 117e2720 pop ecx */
  ECX = (pop32());
  /* 117e2721 pop ecx */
  ECX = (pop32());
  /* 117e2722 ret  */
  ESPCHK(0x117e2711u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x117e2723 (44 bytes, 16 insns) */
void f_117e2723(void) {
  FTRACE(0x117e2723u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2723 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2728 ja 0x117e274c */
  if ((!C.cf&&!C.zf)) goto L_117e274c;
L_117e272a:;
  /* 117e272a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117e272e call 0x117e274f */
  push32(0x117e2733u); f_117e274f();
  /* 117e2733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e2735 pop ecx */
  ECX = (pop32());
  /* 117e2736 jne 0x117e274e */
  if (!C.zf) goto L_117e274e;
  /* 117e2738 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e273c je 0x117e274e */
  if (C.zf) goto L_117e274e;
  /* 117e273e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117e2742 call 0x117e3a68 */
  push32(0x117e2747u); f_117e3a68();
  /* 117e2747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e2749 pop ecx */
  ECX = (pop32());
  /* 117e274a jne 0x117e272a */
  if (!C.zf) goto L_117e272a;
L_117e274c:;
  /* 117e274c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117e274e:;
  /* 117e274e ret  */
  ESPCHK(0x117e2723u, _esp0);
  ESP += 4; return;
}

/* FUN_1000274f @ 0x117e274f (78 bytes, 30 insns) */
void f_117e274f(void) {
  FTRACE(0x117e274fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e274f push esi */
  push32((uint32_t)(ESI));
  /* 117e2750 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117e2754 cmp esi, dword ptr [0x117e64f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x117e64f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e275a push edi */
  push32((uint32_t)(EDI));
  /* 117e275b ja 0x117e277e */
  if ((!C.cf&&!C.zf)) goto L_117e277e;
  /* 117e275d push 9 */
  push32((uint32_t)(0x9u));
  /* 117e275f call 0x117e25c6 */
  push32(0x117e2764u); f_117e25c6();
  /* 117e2764 push esi */
  push32((uint32_t)(ESI));
  /* 117e2765 call 0x117e33c9 */
  push32(0x117e276au); f_117e33c9();
  /* 117e276a push 9 */
  push32((uint32_t)(0x9u));
  /* 117e276c mov edi, eax */
  EDI = (EAX);
  /* 117e276e call 0x117e2627 */
  push32(0x117e2773u); f_117e2627();
  /* 117e2773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2776 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117e2778 je 0x117e277e */
  if (C.zf) goto L_117e277e;
  /* 117e277a mov eax, edi */
  EAX = (EDI);
  /* 117e277c jmp 0x117e279a */
  goto L_117e279a;
L_117e277e:;
  /* 117e277e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e2780 jne 0x117e2785 */
  if (!C.zf) goto L_117e2785;
  /* 117e2782 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e2784 pop esi */
  ESI = (pop32());
L_117e2785:;
  /* 117e2785 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2788 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 117e278b push esi */
  push32((uint32_t)(ESI));
  /* 117e278c push 0 */
  push32((uint32_t)(0x0u));
  /* 117e278e push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e2794 call dword ptr [0x117e5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5038))), 0x117e279au);
L_117e279a:;
  /* 117e279a pop edi */
  EDI = (pop32());
  /* 117e279b pop esi */
  ESI = (pop32());
  /* 117e279c ret  */
  ESPCHK(0x117e274fu, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x117e27a0 (7 bytes, 3 insns) */
void f_117e27a0(void) {
  FTRACE(0x117e27a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e27a0 push edi */
  push32((uint32_t)(EDI));
  /* 117e27a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 117e27a5 jmp 0x117e2811 */
  jmp_ind(0x117e2811u); return;
}

/* FUN_100027b0 @ 0x117e27b0 (224 bytes, 84 insns) */
void f_117e27b0(void) {
  FTRACE(0x117e27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e27b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e27b4 push edi */
  push32((uint32_t)(EDI));
  /* 117e27b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117e27bb je 0x117e27cc */
  if (C.zf) goto L_117e27cc;
L_117e27bd:;
  /* 117e27bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117e27bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e27c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e27c2 je 0x117e27ff */
  if (C.zf) goto L_117e27ff;
  /* 117e27c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117e27ca jne 0x117e27bd */
  if (!C.zf) goto L_117e27bd;
L_117e27cc:;
  /* 117e27cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117e27ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117e27d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e27d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e27d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117e27da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e27dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117e27e2 je 0x117e27cc */
  if (C.zf) goto L_117e27cc;
  /* 117e27e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117e27e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e27e9 je 0x117e280e */
  if (C.zf) goto L_117e280e;
  /* 117e27eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117e27ed je 0x117e2809 */
  if (C.zf) goto L_117e2809;
  /* 117e27ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117e27f4 je 0x117e2804 */
  if (C.zf) goto L_117e2804;
  /* 117e27f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117e27fb je 0x117e27ff */
  if (C.zf) goto L_117e27ff;
  /* 117e27fd jmp 0x117e27cc */
  goto L_117e27cc;
L_117e27ff:;
  /* 117e27ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 117e2802 jmp 0x117e2811 */
  goto L_117e2811;
L_117e2804:;
  /* 117e2804 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 117e2807 jmp 0x117e2811 */
  goto L_117e2811;
L_117e2809:;
  /* 117e2809 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 117e280c jmp 0x117e2811 */
  goto L_117e2811;
L_117e280e:;
  /* 117e280e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_117e2811:;
  /* 117e2811 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117e2815 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117e281b je 0x117e2836 */
  if (C.zf) goto L_117e2836;
L_117e281d:;
  /* 117e281d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117e281f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e2822 je 0x117e2888 */
  if (C.zf) goto L_117e2888;
  /* 117e2824 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117e2826 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e2827 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117e282d jne 0x117e281d */
  if (!C.zf) goto L_117e281d;
  /* 117e282f jmp 0x117e2836 */
  goto L_117e2836;
L_117e2831:;
  /* 117e2831 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117e2833 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117e2836:;
  /* 117e2836 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117e283b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117e283d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e283f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e2842 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117e2846 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2849 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117e284e je 0x117e2831 */
  if (C.zf) goto L_117e2831;
  /* 117e2850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e2852 je 0x117e2888 */
  if (C.zf) goto L_117e2888;
  /* 117e2854 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117e2856 je 0x117e287f */
  if (C.zf) goto L_117e287f;
  /* 117e2858 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117e285e je 0x117e2872 */
  if (C.zf) goto L_117e2872;
  /* 117e2860 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117e2866 je 0x117e286a */
  if (C.zf) goto L_117e286a;
  /* 117e2868 jmp 0x117e2831 */
  goto L_117e2831;
L_117e286a:;
  /* 117e286a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117e286c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e2870 pop edi */
  EDI = (pop32());
  /* 117e2871 ret  */
  ESPCHK(0x117e27b0u, _esp0);
  ESP += 4; return;
L_117e2872:;
  /* 117e2872 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117e2875 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e2879 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 117e287d pop edi */
  EDI = (pop32());
  /* 117e287e ret  */
  ESPCHK(0x117e27b0u, _esp0);
  ESP += 4; return;
L_117e287f:;
  /* 117e287f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117e2882 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e2886 pop edi */
  EDI = (pop32());
  /* 117e2887 ret  */
  ESPCHK(0x117e27b0u, _esp0);
  ESP += 4; return;
L_117e2888:;
  /* 117e2888 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117e288a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e288e pop edi */
  EDI = (pop32());
  /* 117e288f ret  */
  ESPCHK(0x117e27b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x117e2890 (123 bytes, 44 insns) */
void f_117e2890(void) {
  FTRACE(0x117e2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e2894 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117e289a je 0x117e28b0 */
  if (C.zf) goto L_117e28b0;
L_117e289c:;
  /* 117e289c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117e289e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e289f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e28a1 je 0x117e28e3 */
  if (C.zf) goto L_117e28e3;
  /* 117e28a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117e28a9 jne 0x117e289c */
  if (!C.zf) goto L_117e289c;
  /* 117e28ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117e28b0:;
  /* 117e28b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117e28b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117e28b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e28b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e28bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117e28be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e28c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117e28c6 je 0x117e28b0 */
  if (C.zf) goto L_117e28b0;
  /* 117e28c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117e28cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e28cd je 0x117e2901 */
  if (C.zf) goto L_117e2901;
  /* 117e28cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117e28d1 je 0x117e28f7 */
  if (C.zf) goto L_117e28f7;
  /* 117e28d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117e28d8 je 0x117e28ed */
  if (C.zf) goto L_117e28ed;
  /* 117e28da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117e28df je 0x117e28e3 */
  if (C.zf) goto L_117e28e3;
  /* 117e28e1 jmp 0x117e28b0 */
  goto L_117e28b0;
L_117e28e3:;
  /* 117e28e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 117e28e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e28ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e28ec ret  */
  ESPCHK(0x117e2890u, _esp0);
  ESP += 4; return;
L_117e28ed:;
  /* 117e28ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 117e28f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e28f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e28f6 ret  */
  ESPCHK(0x117e2890u, _esp0);
  ESP += 4; return;
L_117e28f7:;
  /* 117e28f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 117e28fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e28fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2900 ret  */
  ESPCHK(0x117e2890u, _esp0);
  ESP += 4; return;
L_117e2901:;
  /* 117e2901 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 117e2904 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e2908 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e290a ret  */
  ESPCHK(0x117e2890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000290b @ 0x117e290b (429 bytes, 143 insns) */
void f_117e290b(void) {
  FTRACE(0x117e290bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e290b push ebp */
  push32((uint32_t)(EBP));
  /* 117e290c mov ebp, esp */
  EBP = (ESP);
  /* 117e290e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2911 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2912 push esi */
  push32((uint32_t)(ESI));
  /* 117e2913 push edi */
  push32((uint32_t)(EDI));
  /* 117e2914 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117e2916 call 0x117e25c6 */
  push32(0x117e291bu); f_117e25c6();
  /* 117e291b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e291e call 0x117e2ab8 */
  push32(0x117e2923u); f_117e2ab8();
  /* 117e2923 mov ebx, eax */
  EBX = (EAX);
  /* 117e2925 pop ecx */
  ECX = (pop32());
  /* 117e2926 cmp ebx, dword ptr [0x117e67c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117e67c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e292c pop ecx */
  ECX = (pop32());
  /* 117e292d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e2930 jne 0x117e2939 */
  if (!C.zf) goto L_117e2939;
L_117e2932:;
  /* 117e2932 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117e2934 jmp 0x117e2aa9 */
  goto L_117e2aa9;
L_117e2939:;
  /* 117e2939 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117e293b je 0x117e2a97 */
  if (C.zf) goto L_117e2a97;
  /* 117e2941 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2943 mov eax, 0x117e63f8 */
  EAX = (0x117e63f8u);
L_117e2948:;
  /* 117e2948 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e294a je 0x117e29c0 */
  if (C.zf) goto L_117e29c0;
  /* 117e294c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e294f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117e2950 cmp eax, 0x117e64e8 */
  { uint32_t _a=(EAX),_b=(0x117e64e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2955 jl 0x117e2948 */
  if ((C.sf!=C.of)) goto L_117e2948;
  /* 117e2957 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 117e295a push eax */
  push32((uint32_t)(EAX));
  /* 117e295b push ebx */
  push32((uint32_t)(EBX));
  /* 117e295c call dword ptr [0x117e5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5034))), 0x117e2962u);
  /* 117e2962 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e2964 pop esi */
  ESI = (pop32());
  /* 117e2965 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2967 jne 0x117e2a8e */
  if (!C.zf) goto L_117e2a8e;
  /* 117e296d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117e296f and dword ptr [0x117e69e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117e69e4)))&(0x0u); w32((uint32_t)(0x117e69e4), (_r)); fl_logic(_r,32); }
  /* 117e2976 pop ecx */
  ECX = (pop32());
  /* 117e2977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2979 mov edi, 0x117e68e0 */
  EDI = (0x117e68e0u);
  /* 117e297e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2981 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117e2983 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117e2984 mov dword ptr [0x117e67c0], ebx */
  w32((uint32_t)(0x117e67c0), (EBX));
  /* 117e298a jbe 0x117e2a7b */
  if ((C.cf||C.zf)) goto L_117e2a7b;
  /* 117e2990 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2994 je 0x117e2a56 */
  if (C.zf) goto L_117e2a56;
  /* 117e299a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_117e299d:;
  /* 117e299d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117e299f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e29a1 je 0x117e2a56 */
  if (C.zf) goto L_117e2a56;
  /* 117e29a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 117e29ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_117e29ae:;
  /* 117e29ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e29b0 ja 0x117e2a4a */
  if ((!C.cf&&!C.zf)) goto L_117e2a4a;
  /* 117e29b6 or byte ptr [eax + 0x117e68e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(0x4u); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e29bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e29be jmp 0x117e29ae */
  goto L_117e29ae;
L_117e29c0:;
  /* 117e29c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e29c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117e29c6 pop ecx */
  ECX = (pop32());
  /* 117e29c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e29c9 mov edi, 0x117e68e0 */
  EDI = (0x117e68e0u);
  /* 117e29ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 117e29d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117e29d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 117e29d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117e29d7 lea ebx, [esi + 0x117e6408] */
  EBX = ((uint32_t)(ESI + 0x117e6408));
L_117e29dd:;
  /* 117e29dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e29e0 mov ecx, ebx */
  ECX = (EBX);
  /* 117e29e2 je 0x117e2a10 */
  if (C.zf) goto L_117e2a10;
L_117e29e4:;
  /* 117e29e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117e29e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e29e9 je 0x117e2a10 */
  if (C.zf) goto L_117e2a10;
  /* 117e29eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 117e29ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 117e29f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e29f3 ja 0x117e2a09 */
  if ((!C.cf&&!C.zf)) goto L_117e2a09;
  /* 117e29f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e29f8 mov dl, byte ptr [edx + 0x117e63f0] */
  DL = (r8((uint32_t)(EDX + 0x117e63f0)));
L_117e29fe:;
  /* 117e29fe or byte ptr [eax + 0x117e68e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(DL); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e2a04 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2a05 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2a07 jbe 0x117e29fe */
  if ((C.cf||C.zf)) goto L_117e29fe;
L_117e2a09:;
  /* 117e2a09 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2a0a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2a0b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2a0e jne 0x117e29e4 */
  if (!C.zf) goto L_117e29e4;
L_117e2a10:;
  /* 117e2a10 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 117e2a13 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2a16 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2a1a jb 0x117e29dd */
  if (C.cf) goto L_117e29dd;
  /* 117e2a1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2a1f mov dword ptr [0x117e67dc], 1 */
  w32((uint32_t)(0x117e67dc), (0x1u));
  /* 117e2a29 push eax */
  push32((uint32_t)(EAX));
  /* 117e2a2a mov dword ptr [0x117e67c0], eax */
  w32((uint32_t)(0x117e67c0), (EAX));
  /* 117e2a2f call 0x117e2b02 */
  push32(0x117e2a34u); f_117e2b02();
  /* 117e2a34 lea esi, [esi + 0x117e63fc] */
  ESI = ((uint32_t)(ESI + 0x117e63fc));
  /* 117e2a3a mov edi, 0x117e67d0 */
  EDI = (0x117e67d0u);
  /* 117e2a3f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117e2a40 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117e2a41 pop ecx */
  ECX = (pop32());
  /* 117e2a42 mov dword ptr [0x117e69e4], eax */
  w32((uint32_t)(0x117e69e4), (EAX));
  /* 117e2a47 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117e2a48 jmp 0x117e2a9c */
  goto L_117e2a9c;
L_117e2a4a:;
  /* 117e2a4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2a4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2a4c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e2a50 jne 0x117e299d */
  if (!C.zf) goto L_117e299d;
L_117e2a56:;
  /* 117e2a56 mov eax, esi */
  EAX = (ESI);
L_117e2a58:;
  /* 117e2a58 or byte ptr [eax + 0x117e68e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(0x8u); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e2a5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2a60 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2a65 jb 0x117e2a58 */
  if (C.cf) goto L_117e2a58;
  /* 117e2a67 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2a68 call 0x117e2b02 */
  push32(0x117e2a6du); f_117e2b02();
  /* 117e2a6d pop ecx */
  ECX = (pop32());
  /* 117e2a6e mov dword ptr [0x117e69e4], eax */
  w32((uint32_t)(0x117e69e4), (EAX));
  /* 117e2a73 mov dword ptr [0x117e67dc], esi */
  w32((uint32_t)(0x117e67dc), (ESI));
  /* 117e2a79 jmp 0x117e2a82 */
  goto L_117e2a82;
L_117e2a7b:;
  /* 117e2a7b and dword ptr [0x117e67dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117e67dc)))&(0x0u); w32((uint32_t)(0x117e67dc), (_r)); fl_logic(_r,32); }
L_117e2a82:;
  /* 117e2a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2a84 mov edi, 0x117e67d0 */
  EDI = (0x117e67d0u);
  /* 117e2a89 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117e2a8a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117e2a8b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117e2a8c jmp 0x117e2a9c */
  goto L_117e2a9c;
L_117e2a8e:;
  /* 117e2a8e cmp dword ptr [0x117e6768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117e6768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2a95 je 0x117e2aa6 */
  if (C.zf) goto L_117e2aa6;
L_117e2a97:;
  /* 117e2a97 call 0x117e2b35 */
  push32(0x117e2a9cu); f_117e2b35();
L_117e2a9c:;
  /* 117e2a9c call 0x117e2b5e */
  push32(0x117e2aa1u); f_117e2b5e();
  /* 117e2aa1 jmp 0x117e2932 */
  goto L_117e2932;
L_117e2aa6:;
  /* 117e2aa6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_117e2aa9:;
  /* 117e2aa9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117e2aab call 0x117e2627 */
  push32(0x117e2ab0u); f_117e2627();
  /* 117e2ab0 pop ecx */
  ECX = (pop32());
  /* 117e2ab1 mov eax, esi */
  EAX = (ESI);
  /* 117e2ab3 pop edi */
  EDI = (pop32());
  /* 117e2ab4 pop esi */
  ESI = (pop32());
  /* 117e2ab5 pop ebx */
  EBX = (pop32());
  /* 117e2ab6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2ab7 ret  */
  ESPCHK(0x117e290bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab8 @ 0x117e2ab8 (74 bytes, 15 insns) */
void f_117e2ab8(void) {
  FTRACE(0x117e2ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2ab8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e2abc and dword ptr [0x117e6768], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117e6768)))&(0x0u); w32((uint32_t)(0x117e6768), (_r)); fl_logic(_r,32); }
  /* 117e2ac3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2ac6 jne 0x117e2ad8 */
  if (!C.zf) goto L_117e2ad8;
  /* 117e2ac8 mov dword ptr [0x117e6768], 1 */
  w32((uint32_t)(0x117e6768), (0x1u));
  /* 117e2ad2 jmp dword ptr [0x117e502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117e502c)))); return;
L_117e2ad8:;
  /* 117e2ad8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2adb jne 0x117e2aed */
  if (!C.zf) goto L_117e2aed;
  /* 117e2add mov dword ptr [0x117e6768], 1 */
  w32((uint32_t)(0x117e6768), (0x1u));
  /* 117e2ae7 jmp dword ptr [0x117e5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117e5030)))); return;
L_117e2aed:;
  /* 117e2aed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2af0 jne 0x117e2b01 */
  if (!C.zf) goto L_117e2b01;
  /* 117e2af2 mov eax, dword ptr [0x117e6798] */
  EAX = (r32((uint32_t)(0x117e6798)));
  /* 117e2af7 mov dword ptr [0x117e6768], 1 */
  w32((uint32_t)(0x117e6768), (0x1u));
L_117e2b01:;
  /* 117e2b01 ret  */
  ESPCHK(0x117e2ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b02 @ 0x117e2b02 (51 bytes, 19 insns) */
void f_117e2b02(void) {
  FTRACE(0x117e2b02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2b02 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e2b06 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2b0b je 0x117e2b2f */
  if (C.zf) goto L_117e2b2f;
  /* 117e2b0d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2b10 je 0x117e2b29 */
  if (C.zf) goto L_117e2b29;
  /* 117e2b12 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2b15 je 0x117e2b23 */
  if (C.zf) goto L_117e2b23;
  /* 117e2b17 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117e2b18 je 0x117e2b1d */
  if (C.zf) goto L_117e2b1d;
  /* 117e2b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2b1c ret  */
  ESPCHK(0x117e2b02u, _esp0);
  ESP += 4; return;
L_117e2b1d:;
  /* 117e2b1d mov eax, 0x404 */
  EAX = (0x404u);
  /* 117e2b22 ret  */
  ESPCHK(0x117e2b02u, _esp0);
  ESP += 4; return;
L_117e2b23:;
  /* 117e2b23 mov eax, 0x412 */
  EAX = (0x412u);
  /* 117e2b28 ret  */
  ESPCHK(0x117e2b02u, _esp0);
  ESP += 4; return;
L_117e2b29:;
  /* 117e2b29 mov eax, 0x804 */
  EAX = (0x804u);
  /* 117e2b2e ret  */
  ESPCHK(0x117e2b02u, _esp0);
  ESP += 4; return;
L_117e2b2f:;
  /* 117e2b2f mov eax, 0x411 */
  EAX = (0x411u);
  /* 117e2b34 ret  */
  ESPCHK(0x117e2b02u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b35 @ 0x117e2b35 (41 bytes, 17 insns) */
void f_117e2b35(void) {
  FTRACE(0x117e2b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2b35 push edi */
  push32((uint32_t)(EDI));
  /* 117e2b36 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117e2b38 pop ecx */
  ECX = (pop32());
  /* 117e2b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2b3b mov edi, 0x117e68e0 */
  EDI = (0x117e68e0u);
  /* 117e2b40 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117e2b42 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117e2b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2b45 mov edi, 0x117e67d0 */
  EDI = (0x117e67d0u);
  /* 117e2b4a mov dword ptr [0x117e67c0], eax */
  w32((uint32_t)(0x117e67c0), (EAX));
  /* 117e2b4f mov dword ptr [0x117e67dc], eax */
  w32((uint32_t)(0x117e67dc), (EAX));
  /* 117e2b54 mov dword ptr [0x117e69e4], eax */
  w32((uint32_t)(0x117e69e4), (EAX));
  /* 117e2b59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117e2b5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117e2b5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117e2b5c pop edi */
  EDI = (pop32());
  /* 117e2b5d ret  */
  ESPCHK(0x117e2b35u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b5e @ 0x117e2b5e (389 bytes, 124 insns) */
void f_117e2b5e(void) {
  FTRACE(0x117e2b5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2b5e push ebp */
  push32((uint32_t)(EBP));
  /* 117e2b5f mov ebp, esp */
  EBP = (ESP);
  /* 117e2b61 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2b67 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 117e2b6a push esi */
  push32((uint32_t)(ESI));
  /* 117e2b6b push eax */
  push32((uint32_t)(EAX));
  /* 117e2b6c push dword ptr [0x117e67c0] */
  push32((uint32_t)(r32((uint32_t)(0x117e67c0))));
  /* 117e2b72 call dword ptr [0x117e5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5034))), 0x117e2b78u);
  /* 117e2b78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2b7b jne 0x117e2c97 */
  if (!C.zf) goto L_117e2c97;
  /* 117e2b81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2b83 mov esi, 0x100 */
  ESI = (0x100u);
L_117e2b88:;
  /* 117e2b88 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 117e2b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2b90 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2b92 jb 0x117e2b88 */
  if (C.cf) goto L_117e2b88;
  /* 117e2b94 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 117e2b97 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 117e2b9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e2ba0 je 0x117e2bd9 */
  if (C.zf) goto L_117e2bd9;
  /* 117e2ba2 push ebx */
  push32((uint32_t)(EBX));
  /* 117e2ba3 push edi */
  push32((uint32_t)(EDI));
  /* 117e2ba4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_117e2ba7:;
  /* 117e2ba7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 117e2baa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 117e2bad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2baf ja 0x117e2bce */
  if ((!C.cf&&!C.zf)) goto L_117e2bce;
  /* 117e2bb1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2bb3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 117e2bba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2bbb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 117e2bc0 mov ebx, ecx */
  EBX = (ECX);
  /* 117e2bc2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2bc5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117e2bc7 mov ecx, ebx */
  ECX = (EBX);
  /* 117e2bc9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 117e2bcc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_117e2bce:;
  /* 117e2bce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117e2bcf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117e2bd0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 117e2bd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e2bd5 jne 0x117e2ba7 */
  if (!C.zf) goto L_117e2ba7;
  /* 117e2bd7 pop edi */
  EDI = (pop32());
  /* 117e2bd8 pop ebx */
  EBX = (pop32());
L_117e2bd9:;
  /* 117e2bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2bdb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 117e2be1 push dword ptr [0x117e69e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e4))));
  /* 117e2be7 push dword ptr [0x117e67c0] */
  push32((uint32_t)(r32((uint32_t)(0x117e67c0))));
  /* 117e2bed push eax */
  push32((uint32_t)(EAX));
  /* 117e2bee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 117e2bf4 push esi */
  push32((uint32_t)(ESI));
  /* 117e2bf5 push eax */
  push32((uint32_t)(EAX));
  /* 117e2bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e2bf8 call 0x117e3cd2 */
  push32(0x117e2bfdu); f_117e3cd2();
  /* 117e2bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2bff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 117e2c05 push dword ptr [0x117e67c0] */
  push32((uint32_t)(r32((uint32_t)(0x117e67c0))));
  /* 117e2c0b push esi */
  push32((uint32_t)(ESI));
  /* 117e2c0c push eax */
  push32((uint32_t)(EAX));
  /* 117e2c0d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 117e2c13 push esi */
  push32((uint32_t)(ESI));
  /* 117e2c14 push eax */
  push32((uint32_t)(EAX));
  /* 117e2c15 push esi */
  push32((uint32_t)(ESI));
  /* 117e2c16 push dword ptr [0x117e69e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e4))));
  /* 117e2c1c call 0x117e3a83 */
  push32(0x117e2c21u); f_117e3a83();
  /* 117e2c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e2c23 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 117e2c29 push dword ptr [0x117e67c0] */
  push32((uint32_t)(r32((uint32_t)(0x117e67c0))));
  /* 117e2c2f push esi */
  push32((uint32_t)(ESI));
  /* 117e2c30 push eax */
  push32((uint32_t)(EAX));
  /* 117e2c31 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 117e2c37 push esi */
  push32((uint32_t)(ESI));
  /* 117e2c38 push eax */
  push32((uint32_t)(EAX));
  /* 117e2c39 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 117e2c3e push dword ptr [0x117e69e4] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e4))));
  /* 117e2c44 call 0x117e3a83 */
  push32(0x117e2c49u); f_117e3a83();
  /* 117e2c49 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2c4e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_117e2c54:;
  /* 117e2c54 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117e2c57 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 117e2c5a je 0x117e2c72 */
  if (C.zf) goto L_117e2c72;
  /* 117e2c5c or byte ptr [eax + 0x117e68e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(0x10u); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e2c63 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_117e2c6a:;
  /* 117e2c6a mov byte ptr [eax + 0x117e67e0], dl */
  w8((uint32_t)(EAX + 0x117e67e0), (DL));
  /* 117e2c70 jmp 0x117e2c8e */
  goto L_117e2c8e;
L_117e2c72:;
  /* 117e2c72 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 117e2c75 je 0x117e2c87 */
  if (C.zf) goto L_117e2c87;
  /* 117e2c77 or byte ptr [eax + 0x117e68e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(0x20u); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e2c7e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 117e2c85 jmp 0x117e2c6a */
  goto L_117e2c6a;
L_117e2c87:;
  /* 117e2c87 and byte ptr [eax + 0x117e67e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e67e0)))&(0x0u); w8((uint32_t)(EAX + 0x117e67e0), (_r)); fl_logic(_r,8); }
L_117e2c8e:;
  /* 117e2c8e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2c8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2c90 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117e2c91 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2c93 jb 0x117e2c54 */
  if (C.cf) goto L_117e2c54;
  /* 117e2c95 jmp 0x117e2ce0 */
  goto L_117e2ce0;
L_117e2c97:;
  /* 117e2c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e2c99 mov esi, 0x100 */
  ESI = (0x100u);
L_117e2c9e:;
  /* 117e2c9e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2ca1 jb 0x117e2cbc */
  if (C.cf) goto L_117e2cbc;
  /* 117e2ca3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2ca6 ja 0x117e2cbc */
  if ((!C.cf&&!C.zf)) goto L_117e2cbc;
  /* 117e2ca8 or byte ptr [eax + 0x117e68e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(0x10u); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e2caf mov cl, al */
  CL = (AL);
  /* 117e2cb1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_117e2cb4:;
  /* 117e2cb4 mov byte ptr [eax + 0x117e67e0], cl */
  w8((uint32_t)(EAX + 0x117e67e0), (CL));
  /* 117e2cba jmp 0x117e2cdb */
  goto L_117e2cdb;
L_117e2cbc:;
  /* 117e2cbc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2cbf jb 0x117e2cd4 */
  if (C.cf) goto L_117e2cd4;
  /* 117e2cc1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2cc4 ja 0x117e2cd4 */
  if ((!C.cf&&!C.zf)) goto L_117e2cd4;
  /* 117e2cc6 or byte ptr [eax + 0x117e68e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e68e1)))|(0x20u); w8((uint32_t)(EAX + 0x117e68e1), (_r)); fl_logic(_r,8); }
  /* 117e2ccd mov cl, al */
  CL = (AL);
  /* 117e2ccf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117e2cd2 jmp 0x117e2cb4 */
  goto L_117e2cb4;
L_117e2cd4:;
  /* 117e2cd4 and byte ptr [eax + 0x117e67e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117e67e0)))&(0x0u); w8((uint32_t)(EAX + 0x117e67e0), (_r)); fl_logic(_r,8); }
L_117e2cdb:;
  /* 117e2cdb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e2cdc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2cde jb 0x117e2c9e */
  if (C.cf) goto L_117e2c9e;
L_117e2ce0:;
  /* 117e2ce0 pop esi */
  ESI = (pop32());
  /* 117e2ce1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2ce2 ret  */
  ESPCHK(0x117e2b5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce3 @ 0x117e2ce3 (28 bytes, 7 insns) */
void f_117e2ce3(void) {
  FTRACE(0x117e2ce3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2ce3 cmp dword ptr [0x117e6b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117e6b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2cea jne 0x117e2cfe */
  if (!C.zf) goto L_117e2cfe;
  /* 117e2cec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 117e2cee call 0x117e290b */
  push32(0x117e2cf3u); f_117e290b();
  /* 117e2cf3 pop ecx */
  ECX = (pop32());
  /* 117e2cf4 mov dword ptr [0x117e6b08], 1 */
  w32((uint32_t)(0x117e6b08), (0x1u));
L_117e2cfe:;
  /* 117e2cfe ret  */
  ESPCHK(0x117e2ce3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x117e2d00 (664 bytes, 268 insns) [15 switch table(s)] */
void f_117e2d00(void) {
  FTRACE(0x117e2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 117e2d01 mov ebp, esp */
  EBP = (ESP);
  /* 117e2d03 push edi */
  push32((uint32_t)(EDI));
  /* 117e2d04 push esi */
  push32((uint32_t)(ESI));
  /* 117e2d05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117e2d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117e2d0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2d0e mov eax, ecx */
  EAX = (ECX);
  /* 117e2d10 mov edx, ecx */
  EDX = (ECX);
  /* 117e2d12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2d14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2d16 jbe 0x117e2d20 */
  if ((C.cf||C.zf)) goto L_117e2d20;
  /* 117e2d18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2d1a jb 0x117e2e98 */
  if (C.cf) goto L_117e2e98;
L_117e2d20:;
  /* 117e2d20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117e2d26 jne 0x117e2d3c */
  if (!C.zf) goto L_117e2d3c;
  /* 117e2d28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2d2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117e2d2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2d31 jb 0x117e2d5c */
  if (C.cf) goto L_117e2d5c;
  /* 117e2d33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2d35 jmp dword ptr [edx*4 + 0x117e2e48] */
  switch (EDX) {
    case 0: goto L_117e2e58;
    case 1: goto L_117e2e60;
    case 2: goto L_117e2e6c;
    case 3: goto L_117e2e80;
    default: x86_unimpl("switch@0x117e2d35 out of table"); return;
  }
L_117e2d3c:;
  /* 117e2d3c mov eax, edi */
  EAX = (EDI);
  /* 117e2d3e mov edx, 3 */
  EDX = (0x3u);
  /* 117e2d43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2d46 jb 0x117e2d54 */
  if (C.cf) goto L_117e2d54;
  /* 117e2d48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117e2d4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2d4d jmp dword ptr [eax*4 + 0x117e2d60] */
  switch (EAX) {
    case 1: goto L_117e2d70;
    case 2: goto L_117e2d9c;
    case 3: goto L_117e2dc0;
    default: x86_unimpl("switch@0x117e2d4d out of table"); return;
  }
L_117e2d54:;
  /* 117e2d54 jmp dword ptr [ecx*4 + 0x117e2e58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117e2e58)))); return;
  /* 117e2d5b nop  */
  /* nop */
L_117e2d5c:;
  /* 117e2d5c jmp dword ptr [ecx*4 + 0x117e2ddc] */
  switch (ECX) {
    case 0: goto L_117e2e3f;
    case 1: goto L_117e2e2c;
    case 2: goto L_117e2e24;
    case 3: goto L_117e2e1c;
    case 4: goto L_117e2e14;
    case 5: goto L_117e2e0c;
    case 6: goto L_117e2e04;
    case 7: goto L_117e2dfc;
    default: x86_unimpl("switch@0x117e2d5c out of table"); return;
  }
  /* 117e2d63 nop  */
  /* nop */
L_117e2d70:;
  /* 117e2d70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2d72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e2d74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e2d76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e2d79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e2d7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e2d7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2d82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e2d85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2d88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2d8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2d8e jb 0x117e2d5c */
  if (C.cf) goto L_117e2d5c;
  /* 117e2d90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2d92 jmp dword ptr [edx*4 + 0x117e2e48] */
  switch (EDX) {
    case 0: goto L_117e2e58;
    case 1: goto L_117e2e60;
    case 2: goto L_117e2e6c;
    case 3: goto L_117e2e80;
    default: x86_unimpl("switch@0x117e2d92 out of table"); return;
  }
  /* 117e2d99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e2d9c:;
  /* 117e2d9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2d9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e2da0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e2da2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e2da5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2da8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e2dab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2dae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2db1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2db4 jb 0x117e2d5c */
  if (C.cf) goto L_117e2d5c;
  /* 117e2db6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2db8 jmp dword ptr [edx*4 + 0x117e2e48] */
  switch (EDX) {
    case 0: goto L_117e2e58;
    case 1: goto L_117e2e60;
    case 2: goto L_117e2e6c;
    case 3: goto L_117e2e80;
    default: x86_unimpl("switch@0x117e2db8 out of table"); return;
  }
  /* 117e2dbf nop  */
  /* nop */
L_117e2dc0:;
  /* 117e2dc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2dc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e2dc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e2dc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e2dc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2dca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e2dcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2dce jb 0x117e2d5c */
  if (C.cf) goto L_117e2d5c;
  /* 117e2dd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2dd2 jmp dword ptr [edx*4 + 0x117e2e48] */
  switch (EDX) {
    case 0: goto L_117e2e58;
    case 1: goto L_117e2e60;
    case 2: goto L_117e2e6c;
    case 3: goto L_117e2e80;
    default: x86_unimpl("switch@0x117e2dd2 out of table"); return;
  }
  /* 117e2dd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e2dfc:;
  /* 117e2dfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117e2e00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117e2e04:;
  /* 117e2e04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117e2e08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117e2e0c:;
  /* 117e2e0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117e2e10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117e2e14:;
  /* 117e2e14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117e2e18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117e2e1c:;
  /* 117e2e1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117e2e20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117e2e24:;
  /* 117e2e24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117e2e28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117e2e2c:;
  /* 117e2e2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117e2e30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117e2e34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117e2e3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2e3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117e2e3f:;
  /* 117e2e3f jmp dword ptr [edx*4 + 0x117e2e48] */
  switch (EDX) {
    case 0: goto L_117e2e58;
    case 1: goto L_117e2e60;
    case 2: goto L_117e2e6c;
    case 3: goto L_117e2e80;
    default: x86_unimpl("switch@0x117e2e3f out of table"); return;
  }
  /* 117e2e46 mov edi, edi */
  EDI = (EDI);
L_117e2e58:;
  /* 117e2e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2e5b pop esi */
  ESI = (pop32());
  /* 117e2e5c pop edi */
  EDI = (pop32());
  /* 117e2e5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2e5e ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e2e5f nop  */
  /* nop */
L_117e2e60:;
  /* 117e2e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e2e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e2e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2e67 pop esi */
  ESI = (pop32());
  /* 117e2e68 pop edi */
  EDI = (pop32());
  /* 117e2e69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2e6a ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e2e6b nop  */
  /* nop */
L_117e2e6c:;
  /* 117e2e6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e2e6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e2e70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e2e73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e2e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2e79 pop esi */
  ESI = (pop32());
  /* 117e2e7a pop edi */
  EDI = (pop32());
  /* 117e2e7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2e7c ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e2e7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e2e80:;
  /* 117e2e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e2e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e2e84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e2e87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e2e8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e2e8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e2e90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2e93 pop esi */
  ESI = (pop32());
  /* 117e2e94 pop edi */
  EDI = (pop32());
  /* 117e2e95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2e96 ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e2e97 nop  */
  /* nop */
L_117e2e98:;
  /* 117e2e98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117e2e9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117e2ea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117e2ea6 jne 0x117e2ecc */
  if (!C.zf) goto L_117e2ecc;
  /* 117e2ea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2eab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117e2eae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2eb1 jb 0x117e2ec0 */
  if (C.cf) goto L_117e2ec0;
  /* 117e2eb3 std  */
  C.df=1;
  /* 117e2eb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2eb6 cld  */
  C.df=0;
  /* 117e2eb7 jmp dword ptr [edx*4 + 0x117e2fe0] */
  switch (EDX) {
    case 0: goto L_117e2ff0;
    case 1: goto L_117e2ff8;
    case 2: goto L_117e3008;
    case 3: goto L_117e301c;
    default: x86_unimpl("switch@0x117e2eb7 out of table"); return;
  }
  /* 117e2ebe mov edi, edi */
  EDI = (EDI);
L_117e2ec0:;
  /* 117e2ec0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117e2ec2 jmp dword ptr [ecx*4 + 0x117e2f90] */
  switch (ECX) {
    case 0: goto L_117e2fd7;
    default: x86_unimpl("switch@0x117e2ec2 out of table"); return;
  }
  /* 117e2ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e2ecc:;
  /* 117e2ecc mov eax, edi */
  EAX = (EDI);
  /* 117e2ece mov edx, 3 */
  EDX = (0x3u);
  /* 117e2ed3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2ed6 jb 0x117e2ee4 */
  if (C.cf) goto L_117e2ee4;
  /* 117e2ed8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117e2edb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2edd jmp dword ptr [eax*4 + 0x117e2ee8] */
  switch (EAX) {
    case 1: goto L_117e2ef8;
    case 2: goto L_117e2f18;
    case 3: goto L_117e2f40;
    default: x86_unimpl("switch@0x117e2edd out of table"); return;
  }
L_117e2ee4:;
  /* 117e2ee4 jmp dword ptr [ecx*4 + 0x117e2fe0] */
  switch (ECX) {
    case 0: goto L_117e2ff0;
    case 1: goto L_117e2ff8;
    case 2: goto L_117e3008;
    case 3: goto L_117e301c;
    default: x86_unimpl("switch@0x117e2ee4 out of table"); return;
  }
  /* 117e2eeb nop  */
  /* nop */
L_117e2ef8:;
  /* 117e2ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e2efb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2efd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e2f00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117e2f01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2f04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117e2f05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2f08 jb 0x117e2ec0 */
  if (C.cf) goto L_117e2ec0;
  /* 117e2f0a std  */
  C.df=1;
  /* 117e2f0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2f0d cld  */
  C.df=0;
  /* 117e2f0e jmp dword ptr [edx*4 + 0x117e2fe0] */
  switch (EDX) {
    case 0: goto L_117e2ff0;
    case 1: goto L_117e2ff8;
    case 2: goto L_117e3008;
    case 3: goto L_117e301c;
    default: x86_unimpl("switch@0x117e2f0e out of table"); return;
  }
  /* 117e2f15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e2f18:;
  /* 117e2f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e2f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e2f20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e2f23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2f26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e2f29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2f2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2f2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2f32 jb 0x117e2ec0 */
  if (C.cf) goto L_117e2ec0;
  /* 117e2f34 std  */
  C.df=1;
  /* 117e2f35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2f37 cld  */
  C.df=0;
  /* 117e2f38 jmp dword ptr [edx*4 + 0x117e2fe0] */
  switch (EDX) {
    case 0: goto L_117e2ff0;
    case 1: goto L_117e2ff8;
    case 2: goto L_117e3008;
    case 3: goto L_117e301c;
    default: x86_unimpl("switch@0x117e2f38 out of table"); return;
  }
  /* 117e2f3f nop  */
  /* nop */
L_117e2f40:;
  /* 117e2f40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e2f43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e2f45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e2f48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e2f4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e2f4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e2f51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e2f54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e2f57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2f5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e2f5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e2f60 jb 0x117e2ec0 */
  if (C.cf) goto L_117e2ec0;
  /* 117e2f66 std  */
  C.df=1;
  /* 117e2f67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e2f69 cld  */
  C.df=0;
  /* 117e2f6a jmp dword ptr [edx*4 + 0x117e2fe0] */
  switch (EDX) {
    case 0: goto L_117e2ff0;
    case 1: goto L_117e2ff8;
    case 2: goto L_117e3008;
    case 3: goto L_117e301c;
    default: x86_unimpl("switch@0x117e2f6a out of table"); return;
  }
  /* 117e2f71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117e2f74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 117e2f75 das  */
  x86_unimpl("das @ 0x117e2f75");
  /* 117e2f76 jle 0x117e2f89 */
  if ((C.zf||C.sf!=C.of)) goto L_117e2f89;
  /* 117e2f78 pushfd  */
  x86_unimpl("pushfd @ 0x117e2f78");
  /* 117e2f79 das  */
  x86_unimpl("das @ 0x117e2f79");
  /* 117e2f7a jle 0x117e2f8d */
  if ((C.zf||C.sf!=C.of)) goto L_117e2f8d;
  /* 117e2f7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 117e2f7d das  */
  x86_unimpl("das @ 0x117e2f7d");
  /* 117e2f7e jle 0x117e2f91 */
  if ((C.zf||C.sf!=C.of)) goto L_117e2f91;
  /* 117e2f80 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 117e2f81 das  */
  x86_unimpl("das @ 0x117e2f81");
  /* 117e2f82 jle 0x117e2f95 */
  if ((C.zf||C.sf!=C.of)) goto L_117e2f95;
  /* 117e2f84 mov ah, 0x2f */
  AH = (0x2fu);
  /* 117e2f86 jle 0x117e2f99 */
  if ((C.zf||C.sf!=C.of)) goto L_117e2f99;
  /* 117e2f88 mov esp, 0xc4117e2f */
  ESP = (0xc4117e2fu);
L_117e2f8d:;
  /* 117e2f8d das  */
  x86_unimpl("das @ 0x117e2f8d");
  /* 117e2f8e jle 0x117e2fa1 */
  if ((C.zf||C.sf!=C.of)) goto L_117e2fa1;
  /* 117e2f94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117e2f98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117e2f9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117e2fa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117e2fa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117e2fa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117e2fac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117e2fb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117e2fb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117e2fb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117e2fbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117e2fc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117e2fc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117e2fc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117e2fcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117e2fd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e2fd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117e2fd7:;
  /* 117e2fd7 jmp dword ptr [edx*4 + 0x117e2fe0] */
  switch (EDX) {
    case 0: goto L_117e2ff0;
    case 1: goto L_117e2ff8;
    case 2: goto L_117e3008;
    case 3: goto L_117e301c;
    default: x86_unimpl("switch@0x117e2fd7 out of table"); return;
  }
  /* 117e2fde mov edi, edi */
  EDI = (EDI);
L_117e2ff0:;
  /* 117e2ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e2ff3 pop esi */
  ESI = (pop32());
  /* 117e2ff4 pop edi */
  EDI = (pop32());
  /* 117e2ff5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e2ff6 ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e2ff7 nop  */
  /* nop */
L_117e2ff8:;
  /* 117e2ff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e2ffb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e2ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3001 pop esi */
  ESI = (pop32());
  /* 117e3002 pop edi */
  EDI = (pop32());
  /* 117e3003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3004 ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e3005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e3008:;
  /* 117e3008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e300b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e300e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e3011 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e3014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3017 pop esi */
  ESI = (pop32());
  /* 117e3018 pop edi */
  EDI = (pop32());
  /* 117e3019 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e301a ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
  /* 117e301b nop  */
  /* nop */
L_117e301c:;
  /* 117e301c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e301f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e3022 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e3025 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e3028 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e302b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e302e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3031 pop esi */
  ESI = (pop32());
  /* 117e3032 pop edi */
  EDI = (pop32());
  /* 117e3033 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3034 ret  */
  ESPCHK(0x117e2d00u, _esp0);
  ESP += 4; return;
L_117e2f89: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e2f89 (unresolved jump table)"); return;
L_117e2f91: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e2f91 (unresolved jump table)"); return;
L_117e2f95: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e2f95 (unresolved jump table)"); return;
L_117e2f99: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e2f99 (unresolved jump table)"); return;
L_117e2fa1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e2fa1 (unresolved jump table)"); return;
}

/* FUN_10003035 @ 0x117e3035 (62 bytes, 15 insns) */
void f_117e3035(void) {
  FTRACE(0x117e3035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3035 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 117e303a push 0 */
  push32((uint32_t)(0x0u));
  /* 117e303c push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e3042 call dword ptr [0x117e5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5038))), 0x117e3048u);
  /* 117e3048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e304a mov dword ptr [0x117e67bc], eax */
  w32((uint32_t)(0x117e67bc), (EAX));
  /* 117e304f jne 0x117e3052 */
  if (!C.zf) goto L_117e3052;
  /* 117e3051 ret  */
  ESPCHK(0x117e3035u, _esp0);
  ESP += 4; return;
L_117e3052:;
  /* 117e3052 and dword ptr [0x117e67b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117e67b4)))&(0x0u); w32((uint32_t)(0x117e67b4), (_r)); fl_logic(_r,32); }
  /* 117e3059 and dword ptr [0x117e67b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117e67b8)))&(0x0u); w32((uint32_t)(0x117e67b8), (_r)); fl_logic(_r,32); }
  /* 117e3060 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3062 mov dword ptr [0x117e67b0], eax */
  w32((uint32_t)(0x117e67b0), (EAX));
  /* 117e3067 mov dword ptr [0x117e67a8], 0x10 */
  w32((uint32_t)(0x117e67a8), (0x10u));
  /* 117e3071 pop eax */
  EAX = (pop32());
  /* 117e3072 ret  */
  ESPCHK(0x117e3035u, _esp0);
  ESP += 4; return;
}

/* FUN_10003073 @ 0x117e3073 (43 bytes, 14 insns) */
void f_117e3073(void) {
  FTRACE(0x117e3073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3073 mov eax, dword ptr [0x117e67b8] */
  EAX = (r32((uint32_t)(0x117e67b8)));
  /* 117e3078 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 117e307b mov eax, dword ptr [0x117e67bc] */
  EAX = (r32((uint32_t)(0x117e67bc)));
  /* 117e3080 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_117e3083:;
  /* 117e3083 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3085 jae 0x117e309b */
  if (!C.cf) goto L_117e309b;
  /* 117e3087 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e308b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e308e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3094 jb 0x117e309d */
  if (C.cf) goto L_117e309d;
  /* 117e3096 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3099 jmp 0x117e3083 */
  goto L_117e3083;
L_117e309b:;
  /* 117e309b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117e309d:;
  /* 117e309d ret  */
  ESPCHK(0x117e3073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000309e @ 0x117e309e (811 bytes, 264 insns) */
void f_117e309e(void) {
  FTRACE(0x117e309eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e309e push ebp */
  push32((uint32_t)(EBP));
  /* 117e309f mov ebp, esp */
  EBP = (ESP);
  /* 117e30a1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e30a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117e30a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e30aa push ebx */
  push32((uint32_t)(EBX));
  /* 117e30ab push esi */
  push32((uint32_t)(ESI));
  /* 117e30ac mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 117e30af mov esi, edx */
  ESI = (EDX);
  /* 117e30b1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e30b4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 117e30b7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e30ba push edi */
  push32((uint32_t)(EDI));
  /* 117e30bb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 117e30be mov ecx, esi */
  ECX = (ESI);
  /* 117e30c0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 117e30c3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117e30c9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117e30ca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117e30cd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117e30d4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117e30d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117e30da mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 117e30dd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 117e30e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117e30e3 jne 0x117e3164 */
  if (!C.zf) goto L_117e3164;
  /* 117e30e5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117e30e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117e30ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e30eb pop edi */
  EDI = (pop32());
  /* 117e30ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117e30ef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e30f1 jbe 0x117e30f6 */
  if ((C.cf||C.zf)) goto L_117e30f6;
  /* 117e30f3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117e30f6:;
  /* 117e30f6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117e30fa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e30fe jne 0x117e3148 */
  if (!C.zf) goto L_117e3148;
  /* 117e3100 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117e3103 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3106 jae 0x117e3124 */
  if (!C.cf) goto L_117e3124;
  /* 117e3108 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117e310d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117e310f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117e3113 not edi */
  EDI = (~(EDI));
  /* 117e3115 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117e3119 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117e311b jne 0x117e3148 */
  if (!C.zf) goto L_117e3148;
  /* 117e311d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3120 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117e3122 jmp 0x117e3148 */
  goto L_117e3148;
L_117e3124:;
  /* 117e3124 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3127 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117e312c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117e312e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117e3131 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117e3135 not edi */
  EDI = (~(EDI));
  /* 117e3137 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117e313e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117e3140 jne 0x117e3148 */
  if (!C.zf) goto L_117e3148;
  /* 117e3142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3145 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117e3148:;
  /* 117e3148 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 117e314c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117e3150 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 117e3153 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117e3157 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 117e315b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e315e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 117e3161 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_117e3164:;
  /* 117e3164 mov edi, ebx */
  EDI = (EBX);
  /* 117e3166 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 117e3169 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117e316a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e316d jbe 0x117e3172 */
  if ((C.cf||C.zf)) goto L_117e3172;
  /* 117e316f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117e3171 pop edi */
  EDI = (pop32());
L_117e3172:;
  /* 117e3172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e3175 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117e3178 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117e317b jne 0x117e3221 */
  if (!C.zf) goto L_117e3221;
  /* 117e3181 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e3187 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117e318a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117e318c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117e318f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e3190 pop edx */
  EDX = (pop32());
  /* 117e3191 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3193 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117e3196 jbe 0x117e319d */
  if ((C.cf||C.zf)) goto L_117e319d;
  /* 117e3198 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 117e319b mov ecx, edx */
  ECX = (EDX);
L_117e319d:;
  /* 117e319d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e31a0 mov edi, ebx */
  EDI = (EBX);
  /* 117e31a2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117e31a5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 117e31a8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117e31a9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e31ab jbe 0x117e31af */
  if ((C.cf||C.zf)) goto L_117e31af;
  /* 117e31ad mov edi, edx */
  EDI = (EDX);
L_117e31af:;
  /* 117e31af cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e31b1 je 0x117e321e */
  if (C.zf) goto L_117e321e;
  /* 117e31b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117e31b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117e31b9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e31bc jne 0x117e3206 */
  if (!C.zf) goto L_117e3206;
  /* 117e31be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117e31c1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e31c4 jae 0x117e31e2 */
  if (!C.cf) goto L_117e31e2;
  /* 117e31c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117e31cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117e31cd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117e31d1 not edx */
  EDX = (~(EDX));
  /* 117e31d3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117e31d7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117e31d9 jne 0x117e3206 */
  if (!C.zf) goto L_117e3206;
  /* 117e31db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e31de and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117e31e0 jmp 0x117e3206 */
  goto L_117e3206;
L_117e31e2:;
  /* 117e31e2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e31e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117e31ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117e31ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117e31ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117e31f3 not edx */
  EDX = (~(EDX));
  /* 117e31f5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117e31fc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117e31fe jne 0x117e3206 */
  if (!C.zf) goto L_117e3206;
  /* 117e3200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3203 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117e3206:;
  /* 117e3206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117e3209 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117e320c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 117e320f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117e3212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117e3215 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117e3218 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 117e321b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117e321e:;
  /* 117e321e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_117e3221:;
  /* 117e3221 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3225 jne 0x117e3230 */
  if (!C.zf) goto L_117e3230;
  /* 117e3227 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e322a je 0x117e32b9 */
  if (C.zf) goto L_117e32b9;
L_117e3230:;
  /* 117e3230 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117e3233 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 117e3236 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 117e3239 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117e323c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117e323f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 117e3242 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117e3245 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117e3248 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117e324b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117e324e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117e3251 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3254 jne 0x117e32b9 */
  if (!C.zf) goto L_117e32b9;
  /* 117e3256 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 117e325a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e325d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 117e3260 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117e3262 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 117e3266 jae 0x117e328d */
  if (!C.cf) goto L_117e328d;
  /* 117e3268 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e326c jne 0x117e327c */
  if (!C.zf) goto L_117e327c;
  /* 117e326e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117e3273 mov ecx, edi */
  ECX = (EDI);
  /* 117e3275 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117e3277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e327a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_117e327c:;
  /* 117e327c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117e3281 mov ecx, edi */
  ECX = (EDI);
  /* 117e3283 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117e3285 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 117e3289 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117e328b jmp 0x117e32b6 */
  goto L_117e32b6;
L_117e328d:;
  /* 117e328d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e3291 jne 0x117e32a3 */
  if (!C.zf) goto L_117e32a3;
  /* 117e3293 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117e3296 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117e329b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117e329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e32a0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117e32a3:;
  /* 117e32a3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117e32a6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117e32ab shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117e32ad lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 117e32b4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_117e32b6:;
  /* 117e32b6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_117e32b9:;
  /* 117e32b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117e32bc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 117e32be mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 117e32c2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 117e32c4 jne 0x117e33c4 */
  if (!C.zf) goto L_117e33c4;
  /* 117e32ca mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e32cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e32d1 je 0x117e33b6 */
  if (C.zf) goto L_117e33b6;
  /* 117e32d7 mov ecx, dword ptr [0x117e67ac] */
  ECX = (r32((uint32_t)(0x117e67ac)));
  /* 117e32dd mov edi, dword ptr [0x117e5050] */
  EDI = (r32((uint32_t)(0x117e5050)));
  /* 117e32e3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 117e32e6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e32e9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 117e32ee push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117e32f3 push ebx */
  push32((uint32_t)(EBX));
  /* 117e32f4 push ecx */
  push32((uint32_t)(ECX));
  /* 117e32f5 call edi */
  call_ind((uint32_t)(EDI), 0x117e32f7u);
  /* 117e32f7 mov ecx, dword ptr [0x117e67ac] */
  ECX = (r32((uint32_t)(0x117e67ac)));
  /* 117e32fd mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e3302 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117e3307 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117e3309 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117e330c mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e3311 mov ecx, dword ptr [0x117e67ac] */
  ECX = (r32((uint32_t)(0x117e67ac)));
  /* 117e3317 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 117e331a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117e3322 mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e3327 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 117e332a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 117e332d mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e3332 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117e3335 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e3339 jne 0x117e3344 */
  if (!C.zf) goto L_117e3344;
  /* 117e333b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117e333f mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
L_117e3344:;
  /* 117e3344 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3348 jne 0x117e33b6 */
  if (!C.zf) goto L_117e33b6;
  /* 117e334a push ebx */
  push32((uint32_t)(EBX));
  /* 117e334b push 0 */
  push32((uint32_t)(0x0u));
  /* 117e334d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 117e3350 call edi */
  call_ind((uint32_t)(EDI), 0x117e3352u);
  /* 117e3352 mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e3357 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 117e335a push 0 */
  push32((uint32_t)(0x0u));
  /* 117e335c push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e3362 call dword ptr [0x117e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e504c))), 0x117e3368u);
  /* 117e3368 mov eax, dword ptr [0x117e67b8] */
  EAX = (r32((uint32_t)(0x117e67b8)));
  /* 117e336d mov edx, dword ptr [0x117e67bc] */
  EDX = (r32((uint32_t)(0x117e67bc)));
  /* 117e3373 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117e3376 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117e3379 mov ecx, eax */
  ECX = (EAX);
  /* 117e337b mov eax, dword ptr [0x117e67b4] */
  EAX = (r32((uint32_t)(0x117e67b4)));
  /* 117e3380 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3382 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 117e3386 push ecx */
  push32((uint32_t)(ECX));
  /* 117e3387 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 117e338a push ecx */
  push32((uint32_t)(ECX));
  /* 117e338b push eax */
  push32((uint32_t)(EAX));
  /* 117e338c call 0x117e3e20 */
  push32(0x117e3391u); f_117e3e20();
  /* 117e3391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3397 dec dword ptr [0x117e67b8] */
  { uint32_t _r=(r32((uint32_t)(0x117e67b8)))-1; w32((uint32_t)(0x117e67b8), (_r)); fl_dec(_r,32); }
  /* 117e339d cmp eax, dword ptr [0x117e67b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117e67b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e33a3 jbe 0x117e33a8 */
  if ((C.cf||C.zf)) goto L_117e33a8;
  /* 117e33a5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117e33a8:;
  /* 117e33a8 mov ecx, dword ptr [0x117e67bc] */
  ECX = (r32((uint32_t)(0x117e67bc)));
  /* 117e33ae mov dword ptr [0x117e67b0], ecx */
  w32((uint32_t)(0x117e67b0), (ECX));
  /* 117e33b4 jmp 0x117e33b9 */
  goto L_117e33b9;
L_117e33b6:;
  /* 117e33b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_117e33b9:;
  /* 117e33b9 mov dword ptr [0x117e67b4], eax */
  w32((uint32_t)(0x117e67b4), (EAX));
  /* 117e33be mov dword ptr [0x117e67ac], esi */
  w32((uint32_t)(0x117e67ac), (ESI));
L_117e33c4:;
  /* 117e33c4 pop edi */
  EDI = (pop32());
  /* 117e33c5 pop esi */
  ESI = (pop32());
  /* 117e33c6 pop ebx */
  EBX = (pop32());
  /* 117e33c7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e33c8 ret  */
  ESPCHK(0x117e309eu, _esp0);
  ESP += 4; return;
}

/* FUN_100033c9 @ 0x117e33c9 (777 bytes, 275 insns) */
void f_117e33c9(void) {
  FTRACE(0x117e33c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e33c9 push ebp */
  push32((uint32_t)(EBP));
  /* 117e33ca mov ebp, esp */
  EBP = (ESP);
  /* 117e33cc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e33cf mov eax, dword ptr [0x117e67b8] */
  EAX = (r32((uint32_t)(0x117e67b8)));
  /* 117e33d4 mov edx, dword ptr [0x117e67bc] */
  EDX = (r32((uint32_t)(0x117e67bc)));
  /* 117e33da push ebx */
  push32((uint32_t)(EBX));
  /* 117e33db push esi */
  push32((uint32_t)(ESI));
  /* 117e33dc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117e33df push edi */
  push32((uint32_t)(EDI));
  /* 117e33e0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 117e33e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e33e6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117e33e9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 117e33ec and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 117e33ef mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117e33f2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117e33f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e33f6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e33f9 jge 0x117e3409 */
  if ((C.sf==C.of)) goto L_117e3409;
  /* 117e33fb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 117e33fe shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 117e3400 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 117e3404 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 117e3407 jmp 0x117e3419 */
  goto L_117e3419;
L_117e3409:;
  /* 117e3409 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e340c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e340f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117e3411 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117e3413 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 117e3416 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117e3419:;
  /* 117e3419 mov eax, dword ptr [0x117e67b0] */
  EAX = (r32((uint32_t)(0x117e67b0)));
  /* 117e341e mov ebx, eax */
  EBX = (EAX);
  /* 117e3420 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3422 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e3425 jae 0x117e3440 */
  if (!C.cf) goto L_117e3440;
L_117e3427:;
  /* 117e3427 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 117e342a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 117e342c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117e342f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117e3431 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117e3433 jne 0x117e3440 */
  if (!C.zf) goto L_117e3440;
  /* 117e3435 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3438 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e343b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e343e jb 0x117e3427 */
  if (C.cf) goto L_117e3427;
L_117e3440:;
  /* 117e3440 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3443 jne 0x117e34be */
  if (!C.zf) goto L_117e34be;
  /* 117e3445 mov ebx, edx */
  EBX = (EDX);
L_117e3447:;
  /* 117e3447 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3449 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e344c jae 0x117e3463 */
  if (!C.cf) goto L_117e3463;
  /* 117e344e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 117e3451 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 117e3453 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117e3456 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117e3458 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117e345a jne 0x117e3461 */
  if (!C.zf) goto L_117e3461;
  /* 117e345c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e345f jmp 0x117e3447 */
  goto L_117e3447;
L_117e3461:;
  /* 117e3461 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117e3463:;
  /* 117e3463 jne 0x117e34be */
  if (!C.zf) goto L_117e34be;
L_117e3465:;
  /* 117e3465 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3468 jae 0x117e347b */
  if (!C.cf) goto L_117e347b;
  /* 117e346a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e346e jne 0x117e3478 */
  if (!C.zf) goto L_117e3478;
  /* 117e3470 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3473 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e3476 jmp 0x117e3465 */
  goto L_117e3465;
L_117e3478:;
  /* 117e3478 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117e347b:;
  /* 117e347b jne 0x117e34a3 */
  if (!C.zf) goto L_117e34a3;
  /* 117e347d mov ebx, edx */
  EBX = (EDX);
L_117e347f:;
  /* 117e347f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3481 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e3484 jae 0x117e3493 */
  if (!C.cf) goto L_117e3493;
  /* 117e3486 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e348a jne 0x117e3491 */
  if (!C.zf) goto L_117e3491;
  /* 117e348c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e348f jmp 0x117e347f */
  goto L_117e347f;
L_117e3491:;
  /* 117e3491 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117e3493:;
  /* 117e3493 jne 0x117e34a3 */
  if (!C.zf) goto L_117e34a3;
  /* 117e3495 call 0x117e36d2 */
  push32(0x117e349au); f_117e36d2();
  /* 117e349a mov ebx, eax */
  EBX = (EAX);
  /* 117e349c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117e349e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117e34a1 je 0x117e34b7 */
  if (C.zf) goto L_117e34b7;
L_117e34a3:;
  /* 117e34a3 push ebx */
  push32((uint32_t)(EBX));
  /* 117e34a4 call 0x117e3783 */
  push32(0x117e34a9u); f_117e3783();
  /* 117e34a9 pop ecx */
  ECX = (pop32());
  /* 117e34aa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 117e34ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117e34af mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117e34b2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e34b5 jne 0x117e34be */
  if (!C.zf) goto L_117e34be;
L_117e34b7:;
  /* 117e34b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e34b9 jmp 0x117e36cd */
  goto L_117e36cd;
L_117e34be:;
  /* 117e34be mov dword ptr [0x117e67b0], ebx */
  w32((uint32_t)(0x117e67b0), (EBX));
  /* 117e34c4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117e34c7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 117e34c9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e34cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117e34cf je 0x117e34e5 */
  if (C.zf) goto L_117e34e5;
  /* 117e34d1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117e34d8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117e34dc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117e34df and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117e34e1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117e34e3 jne 0x117e351c */
  if (!C.zf) goto L_117e351c;
L_117e34e5:;
  /* 117e34e5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 117e34eb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 117e34ee and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117e34f1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 117e34f4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e34f8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 117e34fb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 117e34fd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117e3500 jne 0x117e3519 */
  if (!C.zf) goto L_117e3519;
L_117e3502:;
  /* 117e3502 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 117e3508 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 117e350b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117e350e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3511 mov edi, esi */
  EDI = (ESI);
  /* 117e3513 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 117e3515 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 117e3517 je 0x117e3502 */
  if (C.zf) goto L_117e3502;
L_117e3519:;
  /* 117e3519 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_117e351c:;
  /* 117e351c mov ecx, edx */
  ECX = (EDX);
  /* 117e351e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e3520 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117e3526 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117e352d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117e3530 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117e3534 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 117e3536 jne 0x117e3545 */
  if (!C.zf) goto L_117e3545;
  /* 117e3538 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117e353f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117e3541 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117e3544 pop edi */
  EDI = (pop32());
L_117e3545:;
  /* 117e3545 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117e3547 jl 0x117e354e */
  if ((C.sf!=C.of)) goto L_117e354e;
  /* 117e3549 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117e354b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e354c jmp 0x117e3545 */
  goto L_117e3545;
L_117e354e:;
  /* 117e354e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117e3551 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 117e3555 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 117e3557 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e355a mov esi, ecx */
  ESI = (ECX);
  /* 117e355c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117e355f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 117e3562 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117e3563 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3566 jle 0x117e356b */
  if ((C.zf||C.sf!=C.of)) goto L_117e356b;
  /* 117e3568 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117e356a pop esi */
  ESI = (pop32());
L_117e356b:;
  /* 117e356b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e356d je 0x117e3680 */
  if (C.zf) goto L_117e3680;
  /* 117e3573 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117e3576 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3579 jne 0x117e35dc */
  if (!C.zf) goto L_117e35dc;
  /* 117e357b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e357e jge 0x117e35ab */
  if ((C.sf==C.of)) goto L_117e35ab;
  /* 117e3580 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117e3585 mov ecx, edi */
  ECX = (EDI);
  /* 117e3587 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117e3589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e358c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 117e3590 not ebx */
  EBX = (~(EBX));
  /* 117e3592 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 117e3595 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 117e3599 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 117e359d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 117e359f jne 0x117e35d9 */
  if (!C.zf) goto L_117e35d9;
  /* 117e35a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e35a4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117e35a7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 117e35a9 jmp 0x117e35dc */
  goto L_117e35dc;
L_117e35ab:;
  /* 117e35ab lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117e35ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117e35b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117e35b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e35b8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 117e35bc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117e35c3 not ebx */
  EBX = (~(EBX));
  /* 117e35c5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117e35c7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 117e35c9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 117e35cc jne 0x117e35d9 */
  if (!C.zf) goto L_117e35d9;
  /* 117e35ce mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e35d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117e35d4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117e35d7 jmp 0x117e35dc */
  goto L_117e35dc;
L_117e35d9:;
  /* 117e35d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_117e35dc:;
  /* 117e35dc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 117e35df mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 117e35e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e35e6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 117e35e9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117e35ec mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 117e35ef mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 117e35f2 je 0x117e368c */
  if (C.zf) goto L_117e368c;
  /* 117e35f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117e35fb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 117e35ff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 117e3602 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 117e3605 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117e3608 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117e360b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117e360e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117e3611 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117e3614 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3617 jne 0x117e367d */
  if (!C.zf) goto L_117e367d;
  /* 117e3619 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 117e361d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3620 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 117e3623 jge 0x117e364e */
  if ((C.sf==C.of)) goto L_117e364e;
  /* 117e3625 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117e3627 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e362b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 117e362f jne 0x117e363c */
  if (!C.zf) goto L_117e363c;
  /* 117e3631 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117e3636 mov ecx, esi */
  ECX = (ESI);
  /* 117e3638 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117e363a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_117e363c:;
  /* 117e363c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117e3641 mov ecx, esi */
  ECX = (ESI);
  /* 117e3643 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117e3645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e3648 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117e364c jmp 0x117e367d */
  goto L_117e367d;
L_117e364e:;
  /* 117e364e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117e3650 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e3654 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 117e3658 jne 0x117e3667 */
  if (!C.zf) goto L_117e3667;
  /* 117e365a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 117e365d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117e3662 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117e3664 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_117e3667:;
  /* 117e3667 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e366a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117e3671 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 117e3674 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 117e3679 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 117e367b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_117e367d:;
  /* 117e367d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_117e3680:;
  /* 117e3680 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117e3682 je 0x117e368f */
  if (C.zf) goto L_117e368f;
  /* 117e3684 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117e3686 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 117e368a jmp 0x117e368f */
  goto L_117e368f;
L_117e368c:;
  /* 117e368c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_117e368f:;
  /* 117e368f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 117e3692 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3694 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 117e3697 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117e3699 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 117e369d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117e36a0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 117e36a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117e36a4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 117e36a7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117e36a9 jne 0x117e36c5 */
  if (!C.zf) goto L_117e36c5;
  /* 117e36ab cmp ebx, dword ptr [0x117e67b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117e67b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e36b1 jne 0x117e36c5 */
  if (!C.zf) goto L_117e36c5;
  /* 117e36b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e36b6 cmp ecx, dword ptr [0x117e67ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117e67ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e36bc jne 0x117e36c5 */
  if (!C.zf) goto L_117e36c5;
  /* 117e36be and dword ptr [0x117e67b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117e67b4)))&(0x0u); w32((uint32_t)(0x117e67b4), (_r)); fl_logic(_r,32); }
L_117e36c5:;
  /* 117e36c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e36c8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117e36ca lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_117e36cd:;
  /* 117e36cd pop edi */
  EDI = (pop32());
  /* 117e36ce pop esi */
  ESI = (pop32());
  /* 117e36cf pop ebx */
  EBX = (pop32());
  /* 117e36d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e36d1 ret  */
  ESPCHK(0x117e33c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d2 @ 0x117e36d2 (177 bytes, 53 insns) */
void f_117e36d2(void) {
  FTRACE(0x117e36d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e36d2 mov eax, dword ptr [0x117e67b8] */
  EAX = (r32((uint32_t)(0x117e67b8)));
  /* 117e36d7 mov ecx, dword ptr [0x117e67a8] */
  ECX = (r32((uint32_t)(0x117e67a8)));
  /* 117e36dd push esi */
  push32((uint32_t)(ESI));
  /* 117e36de push edi */
  push32((uint32_t)(EDI));
  /* 117e36df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e36e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e36e3 jne 0x117e3715 */
  if (!C.zf) goto L_117e3715;
  /* 117e36e5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 117e36e9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117e36ec push eax */
  push32((uint32_t)(EAX));
  /* 117e36ed push dword ptr [0x117e67bc] */
  push32((uint32_t)(r32((uint32_t)(0x117e67bc))));
  /* 117e36f3 push edi */
  push32((uint32_t)(EDI));
  /* 117e36f4 push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e36fa call dword ptr [0x117e5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5024))), 0x117e3700u);
  /* 117e3700 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3702 je 0x117e3765 */
  if (C.zf) goto L_117e3765;
  /* 117e3704 add dword ptr [0x117e67a8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x117e67a8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x117e67a8), (_r)); fl_add(_a,_b,_r,32); }
  /* 117e370b mov dword ptr [0x117e67bc], eax */
  w32((uint32_t)(0x117e67bc), (EAX));
  /* 117e3710 mov eax, dword ptr [0x117e67b8] */
  EAX = (r32((uint32_t)(0x117e67b8)));
L_117e3715:;
  /* 117e3715 mov ecx, dword ptr [0x117e67bc] */
  ECX = (r32((uint32_t)(0x117e67bc)));
  /* 117e371b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 117e3720 push 8 */
  push32((uint32_t)(0x8u));
  /* 117e3722 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117e3725 push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e372b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 117e372e call dword ptr [0x117e5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5038))), 0x117e3734u);
  /* 117e3734 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3736 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 117e3739 je 0x117e3765 */
  if (C.zf) goto L_117e3765;
  /* 117e373b push 4 */
  push32((uint32_t)(0x4u));
  /* 117e373d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 117e3742 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117e3747 push edi */
  push32((uint32_t)(EDI));
  /* 117e3748 call dword ptr [0x117e5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5028))), 0x117e374eu);
  /* 117e374e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3750 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 117e3753 jne 0x117e3769 */
  if (!C.zf) goto L_117e3769;
  /* 117e3755 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 117e3758 push edi */
  push32((uint32_t)(EDI));
  /* 117e3759 push dword ptr [0x117e69e8] */
  push32((uint32_t)(r32((uint32_t)(0x117e69e8))));
  /* 117e375f call dword ptr [0x117e504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e504c))), 0x117e3765u);
L_117e3765:;
  /* 117e3765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e3767 jmp 0x117e3780 */
  goto L_117e3780;
L_117e3769:;
  /* 117e3769 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 117e376d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117e376f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 117e3772 inc dword ptr [0x117e67b8] */
  { uint32_t _r=(r32((uint32_t)(0x117e67b8)))+1; w32((uint32_t)(0x117e67b8), (_r)); fl_inc(_r,32); }
  /* 117e3778 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 117e377b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117e377e mov eax, esi */
  EAX = (ESI);
L_117e3780:;
  /* 117e3780 pop edi */
  EDI = (pop32());
  /* 117e3781 pop esi */
  ESI = (pop32());
  /* 117e3782 ret  */
  ESPCHK(0x117e36d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003783 @ 0x117e3783 (251 bytes, 85 insns) */
void f_117e3783(void) {
  FTRACE(0x117e3783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3783 push ebp */
  push32((uint32_t)(EBP));
  /* 117e3784 mov ebp, esp */
  EBP = (ESP);
  /* 117e3786 push ecx */
  push32((uint32_t)(ECX));
  /* 117e3787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e378a push ebx */
  push32((uint32_t)(EBX));
  /* 117e378b push esi */
  push32((uint32_t)(ESI));
  /* 117e378c push edi */
  push32((uint32_t)(EDI));
  /* 117e378d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 117e3790 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 117e3793 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117e3795:;
  /* 117e3795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3797 jl 0x117e379e */
  if ((C.sf!=C.of)) goto L_117e379e;
  /* 117e3799 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117e379b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117e379c jmp 0x117e3795 */
  goto L_117e3795;
L_117e379e:;
  /* 117e379e mov eax, ebx */
  EAX = (EBX);
  /* 117e37a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117e37a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117e37a8 pop edx */
  EDX = (pop32());
  /* 117e37a9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 117e37b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117e37b3:;
  /* 117e37b3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 117e37b6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 117e37b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e37bc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117e37bd jne 0x117e37b3 */
  if (!C.zf) goto L_117e37b3;
  /* 117e37bf mov edi, ebx */
  EDI = (EBX);
  /* 117e37c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 117e37c3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 117e37c6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e37c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117e37ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117e37d3 push edi */
  push32((uint32_t)(EDI));
  /* 117e37d4 call dword ptr [0x117e5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5028))), 0x117e37dau);
  /* 117e37da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e37dc jne 0x117e37e6 */
  if (!C.zf) goto L_117e37e6;
  /* 117e37de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e37e1 jmp 0x117e3879 */
  goto L_117e3879;
L_117e37e6:;
  /* 117e37e6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 117e37ec cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e37ee ja 0x117e382c */
  if ((!C.cf&&!C.zf)) goto L_117e382c;
  /* 117e37f0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_117e37f3:;
  /* 117e37f3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 117e37f7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 117e37fe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 117e3804 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 117e380b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117e380d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 117e3813 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117e3816 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 117e3820 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3825 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 117e3828 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e382a jbe 0x117e37f3 */
  if ((C.cf||C.zf)) goto L_117e37f3;
L_117e382c:;
  /* 117e382c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117e382f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 117e3832 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3837 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3839 pop edi */
  EDI = (pop32());
  /* 117e383a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117e383d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117e3840 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 117e3843 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 117e3846 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117e3849 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117e384e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 117e3855 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 117e3858 mov cl, al */
  CL = (AL);
  /* 117e385a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117e385c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e385e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3861 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 117e3864 jne 0x117e3869 */
  if (!C.zf) goto L_117e3869;
  /* 117e3866 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_117e3869:;
  /* 117e3869 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117e386e mov ecx, ebx */
  ECX = (EBX);
  /* 117e3870 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117e3872 not edx */
  EDX = (~(EDX));
  /* 117e3874 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117e3877 mov eax, ebx */
  EAX = (EBX);
L_117e3879:;
  /* 117e3879 pop edi */
  EDI = (pop32());
  /* 117e387a pop esi */
  ESI = (pop32());
  /* 117e387b pop ebx */
  EBX = (pop32());
  /* 117e387c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e387d ret  */
  ESPCHK(0x117e3783u, _esp0);
  ESP += 4; return;
}

/* FUN_1000387e @ 0x117e387e (137 bytes, 50 insns) */
void f_117e387e(void) {
  FTRACE(0x117e387eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e387e push ebx */
  push32((uint32_t)(EBX));
  /* 117e387f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e3881 cmp dword ptr [0x117e676c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117e676c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3887 push esi */
  push32((uint32_t)(ESI));
  /* 117e3888 push edi */
  push32((uint32_t)(EDI));
  /* 117e3889 jne 0x117e38cd */
  if (!C.zf) goto L_117e38cd;
  /* 117e388b push 0x117e5440 */
  push32((uint32_t)(0x117e5440u));
  /* 117e3890 call dword ptr [0x117e501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e501c))), 0x117e3896u);
  /* 117e3896 mov edi, eax */
  EDI = (EAX);
  /* 117e3898 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e389a je 0x117e3903 */
  if (C.zf) goto L_117e3903;
  /* 117e389c mov esi, dword ptr [0x117e5020] */
  ESI = (r32((uint32_t)(0x117e5020)));
  /* 117e38a2 push 0x117e5434 */
  push32((uint32_t)(0x117e5434u));
  /* 117e38a7 push edi */
  push32((uint32_t)(EDI));
  /* 117e38a8 call esi */
  call_ind((uint32_t)(ESI), 0x117e38aau);
  /* 117e38aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e38ac mov dword ptr [0x117e676c], eax */
  w32((uint32_t)(0x117e676c), (EAX));
  /* 117e38b1 je 0x117e3903 */
  if (C.zf) goto L_117e3903;
  /* 117e38b3 push 0x117e5424 */
  push32((uint32_t)(0x117e5424u));
  /* 117e38b8 push edi */
  push32((uint32_t)(EDI));
  /* 117e38b9 call esi */
  call_ind((uint32_t)(ESI), 0x117e38bbu);
  /* 117e38bb push 0x117e5410 */
  push32((uint32_t)(0x117e5410u));
  /* 117e38c0 push edi */
  push32((uint32_t)(EDI));
  /* 117e38c1 mov dword ptr [0x117e6770], eax */
  w32((uint32_t)(0x117e6770), (EAX));
  /* 117e38c6 call esi */
  call_ind((uint32_t)(ESI), 0x117e38c8u);
  /* 117e38c8 mov dword ptr [0x117e6774], eax */
  w32((uint32_t)(0x117e6774), (EAX));
L_117e38cd:;
  /* 117e38cd mov eax, dword ptr [0x117e6770] */
  EAX = (r32((uint32_t)(0x117e6770)));
  /* 117e38d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e38d4 je 0x117e38ec */
  if (C.zf) goto L_117e38ec;
  /* 117e38d6 call eax */
  call_ind((uint32_t)(EAX), 0x117e38d8u);
  /* 117e38d8 mov ebx, eax */
  EBX = (EAX);
  /* 117e38da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117e38dc je 0x117e38ec */
  if (C.zf) goto L_117e38ec;
  /* 117e38de mov eax, dword ptr [0x117e6774] */
  EAX = (r32((uint32_t)(0x117e6774)));
  /* 117e38e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e38e5 je 0x117e38ec */
  if (C.zf) goto L_117e38ec;
  /* 117e38e7 push ebx */
  push32((uint32_t)(EBX));
  /* 117e38e8 call eax */
  call_ind((uint32_t)(EAX), 0x117e38eau);
  /* 117e38ea mov ebx, eax */
  EBX = (EAX);
L_117e38ec:;
  /* 117e38ec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117e38f0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117e38f4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117e38f8 push ebx */
  push32((uint32_t)(EBX));
  /* 117e38f9 call dword ptr [0x117e676c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e676c))), 0x117e38ffu);
L_117e38ff:;
  /* 117e38ff pop edi */
  EDI = (pop32());
  /* 117e3900 pop esi */
  ESI = (pop32());
  /* 117e3901 pop ebx */
  EBX = (pop32());
  /* 117e3902 ret  */
  ESPCHK(0x117e387eu, _esp0);
  ESP += 4; return;
L_117e3903:;
  /* 117e3903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e3905 jmp 0x117e38ff */
  goto L_117e38ff;
}

/* _strncpy @ 0x117e3910 (254 bytes, 109 insns) */
void f_117e3910(void) {
  FTRACE(0x117e3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3910 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117e3914 push edi */
  push32((uint32_t)(EDI));
  /* 117e3915 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117e3917 je 0x117e3993 */
  if (C.zf) goto L_117e3993;
  /* 117e3919 push esi */
  push32((uint32_t)(ESI));
  /* 117e391a push ebx */
  push32((uint32_t)(EBX));
  /* 117e391b mov ebx, ecx */
  EBX = (ECX);
  /* 117e391d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 117e3921 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117e3927 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 117e392b jne 0x117e3934 */
  if (!C.zf) goto L_117e3934;
  /* 117e392d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3930 jne 0x117e39a1 */
  if (!C.zf) goto L_117e39a1;
  /* 117e3932 jmp 0x117e3955 */
  goto L_117e3955;
L_117e3934:;
  /* 117e3934 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3936 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e3937 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e393a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e393b je 0x117e3962 */
  if (C.zf) goto L_117e3962;
  /* 117e393d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e393f je 0x117e396a */
  if (C.zf) goto L_117e396a;
  /* 117e3941 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117e3947 jne 0x117e3934 */
  if (!C.zf) goto L_117e3934;
  /* 117e3949 mov ebx, ecx */
  EBX = (ECX);
  /* 117e394b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e394e jne 0x117e39a1 */
  if (!C.zf) goto L_117e39a1;
L_117e3950:;
  /* 117e3950 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117e3953 je 0x117e3962 */
  if (C.zf) goto L_117e3962;
L_117e3955:;
  /* 117e3955 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3957 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e3958 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e395a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e395b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117e395d je 0x117e398e */
  if (C.zf) goto L_117e398e;
  /* 117e395f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117e3960 jne 0x117e3955 */
  if (!C.zf) goto L_117e3955;
L_117e3962:;
  /* 117e3962 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117e3966 pop ebx */
  EBX = (pop32());
  /* 117e3967 pop esi */
  ESI = (pop32());
  /* 117e3968 pop edi */
  EDI = (pop32());
  /* 117e3969 ret  */
  ESPCHK(0x117e3910u, _esp0);
  ESP += 4; return;
L_117e396a:;
  /* 117e396a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117e3970 je 0x117e3984 */
  if (C.zf) goto L_117e3984;
L_117e3972:;
  /* 117e3972 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3974 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e3975 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e3976 je 0x117e3a06 */
  if (C.zf) goto L_117e3a06;
  /* 117e397c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117e3982 jne 0x117e3972 */
  if (!C.zf) goto L_117e3972;
L_117e3984:;
  /* 117e3984 mov ebx, ecx */
  EBX = (ECX);
  /* 117e3986 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3989 jne 0x117e39f7 */
  if (!C.zf) goto L_117e39f7;
L_117e398b:;
  /* 117e398b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e398d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117e398e:;
  /* 117e398e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117e398f jne 0x117e398b */
  if (!C.zf) goto L_117e398b;
  /* 117e3991 pop ebx */
  EBX = (pop32());
  /* 117e3992 pop esi */
  ESI = (pop32());
L_117e3993:;
  /* 117e3993 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e3997 pop edi */
  EDI = (pop32());
  /* 117e3998 ret  */
  ESPCHK(0x117e3910u, _esp0);
  ESP += 4; return;
L_117e3999:;
  /* 117e3999 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117e399b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e399e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e399f je 0x117e3950 */
  if (C.zf) goto L_117e3950;
L_117e39a1:;
  /* 117e39a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117e39a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117e39a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e39aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117e39ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117e39af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 117e39b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e39b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117e39b9 je 0x117e3999 */
  if (C.zf) goto L_117e3999;
  /* 117e39bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117e39bd je 0x117e39eb */
  if (C.zf) goto L_117e39eb;
  /* 117e39bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117e39c1 je 0x117e39e1 */
  if (C.zf) goto L_117e39e1;
  /* 117e39c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117e39c9 je 0x117e39d7 */
  if (C.zf) goto L_117e39d7;
  /* 117e39cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117e39d1 jne 0x117e3999 */
  if (!C.zf) goto L_117e3999;
  /* 117e39d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117e39d5 jmp 0x117e39ef */
  goto L_117e39ef;
L_117e39d7:;
  /* 117e39d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117e39dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117e39df jmp 0x117e39ef */
  goto L_117e39ef;
L_117e39e1:;
  /* 117e39e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117e39e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117e39e9 jmp 0x117e39ef */
  goto L_117e39ef;
L_117e39eb:;
  /* 117e39eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117e39ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_117e39ef:;
  /* 117e39ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e39f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e39f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e39f5 je 0x117e3a01 */
  if (C.zf) goto L_117e3a01;
L_117e39f7:;
  /* 117e39f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117e39f9:;
  /* 117e39f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 117e39fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e39fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e39ff jne 0x117e39f9 */
  if (!C.zf) goto L_117e39f9;
L_117e3a01:;
  /* 117e3a01 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117e3a04 jne 0x117e398b */
  if (!C.zf) goto L_117e398b;
L_117e3a06:;
  /* 117e3a06 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117e3a0a pop ebx */
  EBX = (pop32());
  /* 117e3a0b pop esi */
  ESI = (pop32());
  /* 117e3a0c pop edi */
  EDI = (pop32());
  /* 117e3a0d ret  */
  ESPCHK(0x117e3910u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x117e3a10 (88 bytes, 40 insns) */
void f_117e3a10(void) {
  FTRACE(0x117e3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3a10 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 117e3a14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e3a18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117e3a1a je 0x117e3a63 */
  if (C.zf) goto L_117e3a63;
  /* 117e3a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e3a1e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 117e3a22 push edi */
  push32((uint32_t)(EDI));
  /* 117e3a23 mov edi, ecx */
  EDI = (ECX);
  /* 117e3a25 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3a28 jb 0x117e3a57 */
  if (C.cf) goto L_117e3a57;
  /* 117e3a2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117e3a2c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 117e3a2f je 0x117e3a39 */
  if (C.zf) goto L_117e3a39;
  /* 117e3a31 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117e3a33:;
  /* 117e3a33 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3a35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e3a36 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e3a37 jne 0x117e3a33 */
  if (!C.zf) goto L_117e3a33;
L_117e3a39:;
  /* 117e3a39 mov ecx, eax */
  ECX = (EAX);
  /* 117e3a3b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117e3a3e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3a40 mov ecx, eax */
  ECX = (EAX);
  /* 117e3a42 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117e3a45 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3a47 mov ecx, edx */
  ECX = (EDX);
  /* 117e3a49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117e3a4c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3a4f je 0x117e3a57 */
  if (C.zf) goto L_117e3a57;
  /* 117e3a51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117e3a53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117e3a55 je 0x117e3a5d */
  if (C.zf) goto L_117e3a5d;
L_117e3a57:;
  /* 117e3a57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e3a5a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117e3a5b jne 0x117e3a57 */
  if (!C.zf) goto L_117e3a57;
L_117e3a5d:;
  /* 117e3a5d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e3a61 pop edi */
  EDI = (pop32());
  /* 117e3a62 ret  */
  ESPCHK(0x117e3a10u, _esp0);
  ESP += 4; return;
L_117e3a63:;
  /* 117e3a63 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e3a67 ret  */
  ESPCHK(0x117e3a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a68 @ 0x117e3a68 (27 bytes, 13 insns) */
void f_117e3a68(void) {
  FTRACE(0x117e3a68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3a68 mov eax, dword ptr [0x117e6778] */
  EAX = (r32((uint32_t)(0x117e6778)));
  /* 117e3a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3a6f je 0x117e3a80 */
  if (C.zf) goto L_117e3a80;
  /* 117e3a71 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117e3a75 call eax */
  call_ind((uint32_t)(EAX), 0x117e3a77u);
  /* 117e3a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3a79 pop ecx */
  ECX = (pop32());
  /* 117e3a7a je 0x117e3a80 */
  if (C.zf) goto L_117e3a80;
  /* 117e3a7c push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3a7e pop eax */
  EAX = (pop32());
  /* 117e3a7f ret  */
  ESPCHK(0x117e3a68u, _esp0);
  ESP += 4; return;
L_117e3a80:;
  /* 117e3a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117e3a82 ret  */
  ESPCHK(0x117e3a68u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a83 @ 0x117e3a83 (511 bytes, 193 insns) */
void f_117e3a83(void) {
  FTRACE(0x117e3a83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3a83 push ebp */
  push32((uint32_t)(EBP));
  /* 117e3a84 mov ebp, esp */
  EBP = (ESP);
  /* 117e3a86 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117e3a88 push 0x117e5458 */
  push32((uint32_t)(0x117e5458u));
  /* 117e3a8d push 0x117e4250 */
  push32((uint32_t)(0x117e4250u));
  /* 117e3a92 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117e3a98 push eax */
  push32((uint32_t)(EAX));
  /* 117e3a99 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117e3aa0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3aa3 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3aa4 push esi */
  push32((uint32_t)(ESI));
  /* 117e3aa5 push edi */
  push32((uint32_t)(EDI));
  /* 117e3aa6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117e3aa9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e3aab cmp dword ptr [0x117e67a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x117e67a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3ab1 jne 0x117e3af9 */
  if (!C.zf) goto L_117e3af9;
  /* 117e3ab3 push edi */
  push32((uint32_t)(EDI));
  /* 117e3ab4 push edi */
  push32((uint32_t)(EDI));
  /* 117e3ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3ab7 pop ebx */
  EBX = (pop32());
  /* 117e3ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3ab9 push 0x117e5450 */
  push32((uint32_t)(0x117e5450u));
  /* 117e3abe mov esi, 0x100 */
  ESI = (0x100u);
  /* 117e3ac3 push esi */
  push32((uint32_t)(ESI));
  /* 117e3ac4 push edi */
  push32((uint32_t)(EDI));
  /* 117e3ac5 call dword ptr [0x117e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5010))), 0x117e3acbu);
  /* 117e3acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3acd je 0x117e3ad7 */
  if (C.zf) goto L_117e3ad7;
  /* 117e3acf mov dword ptr [0x117e67a0], ebx */
  w32((uint32_t)(0x117e67a0), (EBX));
  /* 117e3ad5 jmp 0x117e3af9 */
  goto L_117e3af9;
L_117e3ad7:;
  /* 117e3ad7 push edi */
  push32((uint32_t)(EDI));
  /* 117e3ad8 push edi */
  push32((uint32_t)(EDI));
  /* 117e3ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3ada push 0x117e544c */
  push32((uint32_t)(0x117e544cu));
  /* 117e3adf push esi */
  push32((uint32_t)(ESI));
  /* 117e3ae0 push edi */
  push32((uint32_t)(EDI));
  /* 117e3ae1 call dword ptr [0x117e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5014))), 0x117e3ae7u);
  /* 117e3ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3ae9 je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3aef mov dword ptr [0x117e67a0], 2 */
  w32((uint32_t)(0x117e67a0), (0x2u));
L_117e3af9:;
  /* 117e3af9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3afc jle 0x117e3b0e */
  if ((C.zf||C.sf!=C.of)) goto L_117e3b0e;
  /* 117e3afe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117e3b01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3b04 call 0x117e3ca7 */
  push32(0x117e3b09u); f_117e3ca7();
  /* 117e3b09 pop ecx */
  ECX = (pop32());
  /* 117e3b0a pop ecx */
  ECX = (pop32());
  /* 117e3b0b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_117e3b0e:;
  /* 117e3b0e mov eax, dword ptr [0x117e67a0] */
  EAX = (r32((uint32_t)(0x117e67a0)));
  /* 117e3b13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3b16 jne 0x117e3b35 */
  if (!C.zf) goto L_117e3b35;
  /* 117e3b18 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 117e3b1b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117e3b1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117e3b21 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3b24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3b27 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e3b2a call dword ptr [0x117e5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5014))), 0x117e3b30u);
  /* 117e3b30 jmp 0x117e3c13 */
  goto L_117e3c13;
L_117e3b35:;
  /* 117e3b35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3b38 jne 0x117e3c11 */
  if (!C.zf) goto L_117e3c11;
  /* 117e3b3e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3b41 jne 0x117e3b4b */
  if (!C.zf) goto L_117e3b4b;
  /* 117e3b43 mov eax, dword ptr [0x117e6798] */
  EAX = (r32((uint32_t)(0x117e6798)));
  /* 117e3b48 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_117e3b4b:;
  /* 117e3b4b push edi */
  push32((uint32_t)(EDI));
  /* 117e3b4c push edi */
  push32((uint32_t)(EDI));
  /* 117e3b4d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117e3b50 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3b53 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 117e3b56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117e3b58 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3b5a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117e3b5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e3b5e push eax */
  push32((uint32_t)(EAX));
  /* 117e3b5f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117e3b62 call dword ptr [0x117e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5018))), 0x117e3b68u);
  /* 117e3b68 mov ebx, eax */
  EBX = (EAX);
  /* 117e3b6a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 117e3b6d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3b6f je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3b75 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117e3b78 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 117e3b7b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3b7e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117e3b80 call 0x117e4330 */
  push32(0x117e3b85u); f_117e4330();
  /* 117e3b85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117e3b88 mov eax, esp */
  EAX = (ESP);
  /* 117e3b8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117e3b8d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e3b91 jmp 0x117e3ba6 */
  goto L_117e3ba6;
  /* 117e3b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3b95 pop eax */
  EAX = (pop32());
  /* 117e3b96 ret  */
  ESPCHK(0x117e3a83u, _esp0);
  ESP += 4; return;
  /* 117e3b97 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117e3b9a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e3b9c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 117e3b9f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e3ba3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_117e3ba6:;
  /* 117e3ba6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3ba9 je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3bab push ebx */
  push32((uint32_t)(EBX));
  /* 117e3bac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117e3baf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117e3bb2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3bb7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117e3bba call dword ptr [0x117e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5018))), 0x117e3bc0u);
  /* 117e3bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3bc2 je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3bc4 push edi */
  push32((uint32_t)(EDI));
  /* 117e3bc5 push edi */
  push32((uint32_t)(EDI));
  /* 117e3bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3bc7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117e3bca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3bcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e3bd0 call dword ptr [0x117e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5010))), 0x117e3bd6u);
  /* 117e3bd6 mov esi, eax */
  ESI = (EAX);
  /* 117e3bd8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 117e3bdb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3bdd je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3bdf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 117e3be3 je 0x117e3c25 */
  if (C.zf) goto L_117e3c25;
  /* 117e3be5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3be8 je 0x117e3ca0 */
  if (C.zf) goto L_117e3ca0;
  /* 117e3bee cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3bf1 jg 0x117e3c11 */
  if ((!C.zf&&C.sf==C.of)) goto L_117e3c11;
  /* 117e3bf3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 117e3bf6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117e3bf9 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3bfa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117e3bfd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3c00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e3c03 call dword ptr [0x117e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5010))), 0x117e3c09u);
  /* 117e3c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3c0b jne 0x117e3ca0 */
  if (!C.zf) goto L_117e3ca0;
L_117e3c11:;
  /* 117e3c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117e3c13:;
  /* 117e3c13 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 117e3c16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117e3c19 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117e3c20 pop edi */
  EDI = (pop32());
  /* 117e3c21 pop esi */
  ESI = (pop32());
  /* 117e3c22 pop ebx */
  EBX = (pop32());
  /* 117e3c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3c24 ret  */
  ESPCHK(0x117e3a83u, _esp0);
  ESP += 4; return;
L_117e3c25:;
  /* 117e3c25 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117e3c2c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 117e3c2f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3c32 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117e3c34 call 0x117e4330 */
  push32(0x117e3c39u); f_117e4330();
  /* 117e3c39 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117e3c3c mov ebx, esp */
  EBX = (ESP);
  /* 117e3c3e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 117e3c41 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e3c45 jmp 0x117e3c59 */
  goto L_117e3c59;
  /* 117e3c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3c49 pop eax */
  EAX = (pop32());
  /* 117e3c4a ret  */
  ESPCHK(0x117e3a83u, _esp0);
  ESP += 4; return;
  /* 117e3c4b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117e3c4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117e3c50 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e3c52 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e3c56 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_117e3c59:;
  /* 117e3c59 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3c5b je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3c5d push esi */
  push32((uint32_t)(ESI));
  /* 117e3c5e push ebx */
  push32((uint32_t)(EBX));
  /* 117e3c5f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 117e3c62 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 117e3c65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3c68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e3c6b call dword ptr [0x117e5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5010))), 0x117e3c71u);
  /* 117e3c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3c73 je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
  /* 117e3c75 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3c78 push edi */
  push32((uint32_t)(EDI));
  /* 117e3c79 push edi */
  push32((uint32_t)(EDI));
  /* 117e3c7a jne 0x117e3c80 */
  if (!C.zf) goto L_117e3c80;
  /* 117e3c7c push edi */
  push32((uint32_t)(EDI));
  /* 117e3c7d push edi */
  push32((uint32_t)(EDI));
  /* 117e3c7e jmp 0x117e3c86 */
  goto L_117e3c86;
L_117e3c80:;
  /* 117e3c80 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 117e3c83 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_117e3c86:;
  /* 117e3c86 push esi */
  push32((uint32_t)(ESI));
  /* 117e3c87 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3c88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117e3c8d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117e3c90 call dword ptr [0x117e50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e50a8))), 0x117e3c96u);
  /* 117e3c96 mov esi, eax */
  ESI = (EAX);
  /* 117e3c98 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3c9a je 0x117e3c11 */
  if (C.zf) goto L_117e3c11;
L_117e3ca0:;
  /* 117e3ca0 mov eax, esi */
  EAX = (ESI);
  /* 117e3ca2 jmp 0x117e3c13 */
  goto L_117e3c13;
}

/* FUN_10003ca7 @ 0x117e3ca7 (43 bytes, 20 insns) */
void f_117e3ca7(void) {
  FTRACE(0x117e3ca7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3ca7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e3cab mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117e3caf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117e3cb1 push esi */
  push32((uint32_t)(ESI));
  /* 117e3cb2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 117e3cb5 je 0x117e3cc4 */
  if (C.zf) goto L_117e3cc4;
L_117e3cb7:;
  /* 117e3cb7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e3cba je 0x117e3cc4 */
  if (C.zf) goto L_117e3cc4;
  /* 117e3cbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e3cbd mov esi, ecx */
  ESI = (ECX);
  /* 117e3cbf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117e3cc0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117e3cc2 jne 0x117e3cb7 */
  if (!C.zf) goto L_117e3cb7;
L_117e3cc4:;
  /* 117e3cc4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117e3cc7 pop esi */
  ESI = (pop32());
  /* 117e3cc8 jne 0x117e3ccf */
  if (!C.zf) goto L_117e3ccf;
  /* 117e3cca sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3cce ret  */
  ESPCHK(0x117e3ca7u, _esp0);
  ESP += 4; return;
L_117e3ccf:;
  /* 117e3ccf mov eax, edx */
  EAX = (EDX);
  /* 117e3cd1 ret  */
  ESPCHK(0x117e3ca7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd2 @ 0x117e3cd2 (318 bytes, 123 insns) */
void f_117e3cd2(void) {
  FTRACE(0x117e3cd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3cd2 push ebp */
  push32((uint32_t)(EBP));
  /* 117e3cd3 mov ebp, esp */
  EBP = (ESP);
  /* 117e3cd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117e3cd7 push 0x117e5470 */
  push32((uint32_t)(0x117e5470u));
  /* 117e3cdc push 0x117e4250 */
  push32((uint32_t)(0x117e4250u));
  /* 117e3ce1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117e3ce7 push eax */
  push32((uint32_t)(EAX));
  /* 117e3ce8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117e3cef sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3cf2 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3cf3 push esi */
  push32((uint32_t)(ESI));
  /* 117e3cf4 push edi */
  push32((uint32_t)(EDI));
  /* 117e3cf5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117e3cf8 mov eax, dword ptr [0x117e67a4] */
  EAX = (r32((uint32_t)(0x117e67a4)));
  /* 117e3cfd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e3cff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3d01 jne 0x117e3d41 */
  if (!C.zf) goto L_117e3d41;
  /* 117e3d03 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117e3d06 push eax */
  push32((uint32_t)(EAX));
  /* 117e3d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3d09 pop esi */
  ESI = (pop32());
  /* 117e3d0a push esi */
  push32((uint32_t)(ESI));
  /* 117e3d0b push 0x117e5450 */
  push32((uint32_t)(0x117e5450u));
  /* 117e3d10 push esi */
  push32((uint32_t)(ESI));
  /* 117e3d11 call dword ptr [0x117e5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5008))), 0x117e3d17u);
  /* 117e3d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3d19 je 0x117e3d1f */
  if (C.zf) goto L_117e3d1f;
  /* 117e3d1b mov eax, esi */
  EAX = (ESI);
  /* 117e3d1d jmp 0x117e3d3c */
  goto L_117e3d3c;
L_117e3d1f:;
  /* 117e3d1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117e3d22 push eax */
  push32((uint32_t)(EAX));
  /* 117e3d23 push esi */
  push32((uint32_t)(ESI));
  /* 117e3d24 push 0x117e544c */
  push32((uint32_t)(0x117e544cu));
  /* 117e3d29 push esi */
  push32((uint32_t)(ESI));
  /* 117e3d2a push ebx */
  push32((uint32_t)(EBX));
  /* 117e3d2b call dword ptr [0x117e500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e500c))), 0x117e3d31u);
  /* 117e3d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117e3d33 je 0x117e3e07 */
  if (C.zf) goto L_117e3e07;
  /* 117e3d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 117e3d3b pop eax */
  EAX = (pop32());
L_117e3d3c:;
  /* 117e3d3c mov dword ptr [0x117e67a4], eax */
  w32((uint32_t)(0x117e67a4), (EAX));
L_117e3d41:;
  /* 117e3d41 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3d44 jne 0x117e3d6a */
  if (!C.zf) goto L_117e3d6a;
  /* 117e3d46 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117e3d49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3d4b jne 0x117e3d52 */
  if (!C.zf) goto L_117e3d52;
  /* 117e3d4d mov eax, dword ptr [0x117e6788] */
  EAX = (r32((uint32_t)(0x117e6788)));
L_117e3d52:;
  /* 117e3d52 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117e3d55 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3d58 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3d5b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e3d5e push eax */
  push32((uint32_t)(EAX));
  /* 117e3d5f call dword ptr [0x117e500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e500c))), 0x117e3d65u);
  /* 117e3d65 jmp 0x117e3e09 */
  goto L_117e3e09;
L_117e3d6a:;
  /* 117e3d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3d6d jne 0x117e3e07 */
  if (!C.zf) goto L_117e3e07;
  /* 117e3d73 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3d76 jne 0x117e3d80 */
  if (!C.zf) goto L_117e3d80;
  /* 117e3d78 mov eax, dword ptr [0x117e6798] */
  EAX = (r32((uint32_t)(0x117e6798)));
  /* 117e3d7d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_117e3d80:;
  /* 117e3d80 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3d81 push ebx */
  push32((uint32_t)(EBX));
  /* 117e3d82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3d85 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3d88 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117e3d8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117e3d8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3d8f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117e3d92 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e3d93 push eax */
  push32((uint32_t)(EAX));
  /* 117e3d94 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117e3d97 call dword ptr [0x117e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5018))), 0x117e3d9du);
  /* 117e3d9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117e3da0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3da2 je 0x117e3e07 */
  if (C.zf) goto L_117e3e07;
  /* 117e3da4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 117e3da7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 117e3daa mov eax, edi */
  EAX = (EDI);
  /* 117e3dac add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3daf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117e3db1 call 0x117e4330 */
  push32(0x117e3db6u); f_117e4330();
  /* 117e3db6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117e3db9 mov esi, esp */
  ESI = (ESP);
  /* 117e3dbb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 117e3dbe push edi */
  push32((uint32_t)(EDI));
  /* 117e3dbf push ebx */
  push32((uint32_t)(EBX));
  /* 117e3dc0 push esi */
  push32((uint32_t)(ESI));
  /* 117e3dc1 call 0x117e3a10 */
  push32(0x117e3dc6u); f_117e3a10();
  /* 117e3dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3dc9 jmp 0x117e3dd6 */
  goto L_117e3dd6;
  /* 117e3dcb push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3dcd pop eax */
  EAX = (pop32());
  /* 117e3dce ret  */
  ESPCHK(0x117e3cd2u, _esp0);
  ESP += 4; return;
  /* 117e3dcf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117e3dd2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117e3dd4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_117e3dd6:;
  /* 117e3dd6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117e3dda cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3ddc je 0x117e3e07 */
  if (C.zf) goto L_117e3e07;
  /* 117e3dde push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 117e3de1 push esi */
  push32((uint32_t)(ESI));
  /* 117e3de2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117e3de5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117e3de8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117e3dea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117e3ded call dword ptr [0x117e5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5018))), 0x117e3df3u);
  /* 117e3df3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3df5 je 0x117e3e07 */
  if (C.zf) goto L_117e3e07;
  /* 117e3df7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117e3dfa push eax */
  push32((uint32_t)(EAX));
  /* 117e3dfb push esi */
  push32((uint32_t)(ESI));
  /* 117e3dfc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e3dff call dword ptr [0x117e5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x117e5008))), 0x117e3e05u);
  /* 117e3e05 jmp 0x117e3e09 */
  goto L_117e3e09;
L_117e3e07:;
  /* 117e3e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117e3e09:;
  /* 117e3e09 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 117e3e0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117e3e0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117e3e16 pop edi */
  EDI = (pop32());
  /* 117e3e17 pop esi */
  ESI = (pop32());
  /* 117e3e18 pop ebx */
  EBX = (pop32());
  /* 117e3e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3e1a ret  */
  ESPCHK(0x117e3cd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e20 @ 0x117e3e20 (664 bytes, 265 insns) [15 switch table(s)] */
void f_117e3e20(void) {
  FTRACE(0x117e3e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e3e20 push ebp */
  push32((uint32_t)(EBP));
  /* 117e3e21 mov ebp, esp */
  EBP = (ESP);
  /* 117e3e23 push edi */
  push32((uint32_t)(EDI));
  /* 117e3e24 push esi */
  push32((uint32_t)(ESI));
  /* 117e3e25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117e3e28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117e3e2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3e2e mov eax, ecx */
  EAX = (ECX);
  /* 117e3e30 mov edx, ecx */
  EDX = (ECX);
  /* 117e3e32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3e34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3e36 jbe 0x117e3e40 */
  if ((C.cf||C.zf)) goto L_117e3e40;
  /* 117e3e38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3e3a jb 0x117e3fb8 */
  if (C.cf) goto L_117e3fb8;
L_117e3e40:;
  /* 117e3e40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117e3e46 jne 0x117e3e5c */
  if (!C.zf) goto L_117e3e5c;
  /* 117e3e48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3e4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117e3e4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3e51 jb 0x117e3e7c */
  if (C.cf) goto L_117e3e7c;
  /* 117e3e53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e3e55 jmp dword ptr [edx*4 + 0x117e3f68] */
  switch (EDX) {
    case 0: goto L_117e3f78;
    case 1: goto L_117e3f80;
    case 2: goto L_117e3f8c;
    case 3: goto L_117e3fa0;
    default: x86_unimpl("switch@0x117e3e55 out of table"); return;
  }
L_117e3e5c:;
  /* 117e3e5c mov eax, edi */
  EAX = (EDI);
  /* 117e3e5e mov edx, 3 */
  EDX = (0x3u);
  /* 117e3e63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3e66 jb 0x117e3e74 */
  if (C.cf) goto L_117e3e74;
  /* 117e3e68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117e3e6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3e6d jmp dword ptr [eax*4 + 0x117e3e80] */
  switch (EAX) {
    case 1: goto L_117e3e90;
    case 2: goto L_117e3ebc;
    case 3: goto L_117e3ee0;
    default: x86_unimpl("switch@0x117e3e6d out of table"); return;
  }
L_117e3e74:;
  /* 117e3e74 jmp dword ptr [ecx*4 + 0x117e3f78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117e3f78)))); return;
  /* 117e3e7b nop  */
  /* nop */
L_117e3e7c:;
  /* 117e3e7c jmp dword ptr [ecx*4 + 0x117e3efc] */
  switch (ECX) {
    case 0: goto L_117e3f5f;
    case 1: goto L_117e3f4c;
    case 2: goto L_117e3f44;
    case 3: goto L_117e3f3c;
    case 4: goto L_117e3f34;
    case 5: goto L_117e3f2c;
    case 6: goto L_117e3f24;
    case 7: goto L_117e3f1c;
    default: x86_unimpl("switch@0x117e3e7c out of table"); return;
  }
  /* 117e3e83 nop  */
  /* nop */
L_117e3e90:;
  /* 117e3e90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e3e92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3e94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3e96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e3e99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e3e9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e3e9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3ea2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e3ea5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3ea8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3eab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3eae jb 0x117e3e7c */
  if (C.cf) goto L_117e3e7c;
  /* 117e3eb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e3eb2 jmp dword ptr [edx*4 + 0x117e3f68] */
  switch (EDX) {
    case 0: goto L_117e3f78;
    case 1: goto L_117e3f80;
    case 2: goto L_117e3f8c;
    case 3: goto L_117e3fa0;
    default: x86_unimpl("switch@0x117e3eb2 out of table"); return;
  }
  /* 117e3eb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e3ebc:;
  /* 117e3ebc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e3ebe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3ec0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3ec2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e3ec5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3ec8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e3ecb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3ece add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3ed1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3ed4 jb 0x117e3e7c */
  if (C.cf) goto L_117e3e7c;
  /* 117e3ed6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e3ed8 jmp dword ptr [edx*4 + 0x117e3f68] */
  switch (EDX) {
    case 0: goto L_117e3f78;
    case 1: goto L_117e3f80;
    case 2: goto L_117e3f8c;
    case 3: goto L_117e3fa0;
    default: x86_unimpl("switch@0x117e3ed8 out of table"); return;
  }
  /* 117e3edf nop  */
  /* nop */
L_117e3ee0:;
  /* 117e3ee0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e3ee2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3ee4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3ee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117e3ee7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3eea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117e3eeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3eee jb 0x117e3e7c */
  if (C.cf) goto L_117e3e7c;
  /* 117e3ef0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e3ef2 jmp dword ptr [edx*4 + 0x117e3f68] */
  switch (EDX) {
    case 0: goto L_117e3f78;
    case 1: goto L_117e3f80;
    case 2: goto L_117e3f8c;
    case 3: goto L_117e3fa0;
    default: x86_unimpl("switch@0x117e3ef2 out of table"); return;
  }
  /* 117e3ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e3f1c:;
  /* 117e3f1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117e3f20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117e3f24:;
  /* 117e3f24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117e3f28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117e3f2c:;
  /* 117e3f2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117e3f30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117e3f34:;
  /* 117e3f34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117e3f38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117e3f3c:;
  /* 117e3f3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117e3f40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117e3f44:;
  /* 117e3f44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117e3f48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117e3f4c:;
  /* 117e3f4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117e3f50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117e3f54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117e3f5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e3f5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117e3f5f:;
  /* 117e3f5f jmp dword ptr [edx*4 + 0x117e3f68] */
  switch (EDX) {
    case 0: goto L_117e3f78;
    case 1: goto L_117e3f80;
    case 2: goto L_117e3f8c;
    case 3: goto L_117e3fa0;
    default: x86_unimpl("switch@0x117e3f5f out of table"); return;
  }
  /* 117e3f66 mov edi, edi */
  EDI = (EDI);
L_117e3f78:;
  /* 117e3f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3f7b pop esi */
  ESI = (pop32());
  /* 117e3f7c pop edi */
  EDI = (pop32());
  /* 117e3f7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3f7e ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e3f7f nop  */
  /* nop */
L_117e3f80:;
  /* 117e3f80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3f82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3f87 pop esi */
  ESI = (pop32());
  /* 117e3f88 pop edi */
  EDI = (pop32());
  /* 117e3f89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3f8a ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e3f8b nop  */
  /* nop */
L_117e3f8c:;
  /* 117e3f8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3f8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3f90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e3f93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e3f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3f99 pop esi */
  ESI = (pop32());
  /* 117e3f9a pop edi */
  EDI = (pop32());
  /* 117e3f9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3f9c ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e3f9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e3fa0:;
  /* 117e3fa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117e3fa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117e3fa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e3fa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e3faa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e3fad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e3fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e3fb3 pop esi */
  ESI = (pop32());
  /* 117e3fb4 pop edi */
  EDI = (pop32());
  /* 117e3fb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e3fb6 ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e3fb7 nop  */
  /* nop */
L_117e3fb8:;
  /* 117e3fb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117e3fbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117e3fc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117e3fc6 jne 0x117e3fec */
  if (!C.zf) goto L_117e3fec;
  /* 117e3fc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e3fcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117e3fce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3fd1 jb 0x117e3fe0 */
  if (C.cf) goto L_117e3fe0;
  /* 117e3fd3 std  */
  C.df=1;
  /* 117e3fd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e3fd6 cld  */
  C.df=0;
  /* 117e3fd7 jmp dword ptr [edx*4 + 0x117e4100] */
  switch (EDX) {
    case 0: goto L_117e4110;
    case 1: goto L_117e4118;
    case 2: goto L_117e4128;
    case 3: goto L_117e413c;
    default: x86_unimpl("switch@0x117e3fd7 out of table"); return;
  }
  /* 117e3fde mov edi, edi */
  EDI = (EDI);
L_117e3fe0:;
  /* 117e3fe0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117e3fe2 jmp dword ptr [ecx*4 + 0x117e40b0] */
  switch (ECX) {
    case 0: goto L_117e40f7;
    default: x86_unimpl("switch@0x117e3fe2 out of table"); return;
  }
  /* 117e3fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e3fec:;
  /* 117e3fec mov eax, edi */
  EAX = (EDI);
  /* 117e3fee mov edx, 3 */
  EDX = (0x3u);
  /* 117e3ff3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e3ff6 jb 0x117e4004 */
  if (C.cf) goto L_117e4004;
  /* 117e3ff8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117e3ffb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e3ffd jmp dword ptr [eax*4 + 0x117e4008] */
  switch (EAX) {
    case 1: goto L_117e4018;
    case 2: goto L_117e4038;
    case 3: goto L_117e4060;
    default: x86_unimpl("switch@0x117e3ffd out of table"); return;
  }
L_117e4004:;
  /* 117e4004 jmp dword ptr [ecx*4 + 0x117e4100] */
  switch (ECX) {
    case 0: goto L_117e4110;
    case 1: goto L_117e4118;
    case 2: goto L_117e4128;
    case 3: goto L_117e413c;
    default: x86_unimpl("switch@0x117e4004 out of table"); return;
  }
  /* 117e400b nop  */
  /* nop */
L_117e4018:;
  /* 117e4018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e401b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e401d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e4020 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117e4021 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e4024 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117e4025 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e4028 jb 0x117e3fe0 */
  if (C.cf) goto L_117e3fe0;
  /* 117e402a std  */
  C.df=1;
  /* 117e402b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e402d cld  */
  C.df=0;
  /* 117e402e jmp dword ptr [edx*4 + 0x117e4100] */
  switch (EDX) {
    case 0: goto L_117e4110;
    case 1: goto L_117e4118;
    case 2: goto L_117e4128;
    case 3: goto L_117e413c;
    default: x86_unimpl("switch@0x117e402e out of table"); return;
  }
  /* 117e4035 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e4038:;
  /* 117e4038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e403b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e403d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e4040 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e4043 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e4046 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e4049 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e404c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e404f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e4052 jb 0x117e3fe0 */
  if (C.cf) goto L_117e3fe0;
  /* 117e4054 std  */
  C.df=1;
  /* 117e4055 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e4057 cld  */
  C.df=0;
  /* 117e4058 jmp dword ptr [edx*4 + 0x117e4100] */
  switch (EDX) {
    case 0: goto L_117e4110;
    case 1: goto L_117e4118;
    case 2: goto L_117e4128;
    case 3: goto L_117e413c;
    default: x86_unimpl("switch@0x117e4058 out of table"); return;
  }
  /* 117e405f nop  */
  /* nop */
L_117e4060:;
  /* 117e4060 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e4063 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117e4065 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e4068 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e406b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e406e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e4071 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117e4074 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e4077 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e407a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e407d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e4080 jb 0x117e3fe0 */
  if (C.cf) goto L_117e3fe0;
  /* 117e4086 std  */
  C.df=1;
  /* 117e4087 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117e4089 cld  */
  C.df=0;
  /* 117e408a jmp dword ptr [edx*4 + 0x117e4100] */
  switch (EDX) {
    case 0: goto L_117e4110;
    case 1: goto L_117e4118;
    case 2: goto L_117e4128;
    case 3: goto L_117e413c;
    default: x86_unimpl("switch@0x117e408a out of table"); return;
  }
  /* 117e4091 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117e4094 mov ah, 0x40 */
  AH = (0x40u);
  /* 117e4096 jle 0x117e40a9 */
  if ((C.zf||C.sf!=C.of)) goto L_117e40a9;
  /* 117e4098 mov esp, 0xc4117e40 */
  ESP = (0xc4117e40u);
  /* 117e409d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e409e jle 0x117e40b1 */
  if ((C.zf||C.sf!=C.of)) goto L_117e40b1;
  /* 117e40a0 int3  */
  x86_unimpl("int3 @ 0x117e40a0");
  /* 117e40a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e40a2 jle 0x117e40b5 */
  if ((C.zf||C.sf!=C.of)) goto L_117e40b5;
  /* 117e40a4 aam 0x40 */
  x86_unimpl("aam @ 0x117e40a4");
  /* 117e40a6 jle 0x117e40b9 */
  if ((C.zf||C.sf!=C.of)) goto L_117e40b9;
  /* 117e40a8 fadd qword ptr [eax + 0x7e] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EAX + 0x7e)));
  /* 117e40ab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e40ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117e40ae jle 0x117e40c1 */
  if ((C.zf||C.sf!=C.of)) goto L_117e40c1;
  /* 117e40b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117e40b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117e40bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117e40c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117e40c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117e40c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117e40cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117e40d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117e40d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117e40d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117e40dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117e40e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117e40e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117e40e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117e40ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117e40f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117e40f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117e40f7:;
  /* 117e40f7 jmp dword ptr [edx*4 + 0x117e4100] */
  switch (EDX) {
    case 0: goto L_117e4110;
    case 1: goto L_117e4118;
    case 2: goto L_117e4128;
    case 3: goto L_117e413c;
    default: x86_unimpl("switch@0x117e40f7 out of table"); return;
  }
  /* 117e40fe mov edi, edi */
  EDI = (EDI);
L_117e4110:;
  /* 117e4110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e4113 pop esi */
  ESI = (pop32());
  /* 117e4114 pop edi */
  EDI = (pop32());
  /* 117e4115 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e4116 ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e4117 nop  */
  /* nop */
L_117e4118:;
  /* 117e4118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e411b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e411e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e4121 pop esi */
  ESI = (pop32());
  /* 117e4122 pop edi */
  EDI = (pop32());
  /* 117e4123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e4124 ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e4125 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117e4128:;
  /* 117e4128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e412b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e412e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e4131 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e4134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e4137 pop esi */
  ESI = (pop32());
  /* 117e4138 pop edi */
  EDI = (pop32());
  /* 117e4139 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e413a ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
  /* 117e413b nop  */
  /* nop */
L_117e413c:;
  /* 117e413c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117e413f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117e4142 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117e4145 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117e4148 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117e414b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117e414e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e4151 pop esi */
  ESI = (pop32());
  /* 117e4152 pop edi */
  EDI = (pop32());
  /* 117e4153 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117e4154 ret  */
  ESPCHK(0x117e3e20u, _esp0);
  ESP += 4; return;
L_117e40a9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e40a9 (unresolved jump table)"); return;
L_117e40b1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e40b1 (unresolved jump table)"); return;
L_117e40b5: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e40b5 (unresolved jump table)"); return;
L_117e40b9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e40b9 (unresolved jump table)"); return;
L_117e40c1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117e40c1 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x117e4158 (32 bytes, 18 insns) */
void f_117e4158(void) {
  FTRACE(0x117e4158u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e4158 push ebp */
  push32((uint32_t)(EBP));
  /* 117e4159 mov ebp, esp */
  EBP = (ESP);
  /* 117e415b push ebx */
  push32((uint32_t)(EBX));
  /* 117e415c push esi */
  push32((uint32_t)(ESI));
  /* 117e415d push edi */
  push32((uint32_t)(EDI));
  /* 117e415e push ebp */
  push32((uint32_t)(EBP));
  /* 117e415f push 0 */
  push32((uint32_t)(0x0u));
  /* 117e4161 push 0 */
  push32((uint32_t)(0x0u));
  /* 117e4163 push 0x117e4170 */
  push32((uint32_t)(0x117e4170u));
  /* 117e4168 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117e416b call 0x117e4360 */
  push32(0x117e4170u); f_117e4360();
  /* 117e4170 pop ebp */
  EBP = (pop32());
  /* 117e4171 pop edi */
  EDI = (pop32());
  /* 117e4172 pop esi */
  ESI = (pop32());
  /* 117e4173 pop ebx */
  EBX = (pop32());
  /* 117e4174 mov esp, ebp */
  ESP = (EBP);
  /* 117e4176 pop ebp */
  EBP = (pop32());
  /* 117e4177 ret  */
  ESPCHK(0x117e4158u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x117e419a (104 bytes, 33 insns) */
void f_117e419a(void) {
  FTRACE(0x117e419au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e419a push ebx */
  push32((uint32_t)(EBX));
  /* 117e419b push esi */
  push32((uint32_t)(ESI));
  /* 117e419c push edi */
  push32((uint32_t)(EDI));
  /* 117e419d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117e41a1 push eax */
  push32((uint32_t)(EAX));
  /* 117e41a2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 117e41a4 push 0x117e4178 */
  push32((uint32_t)(0x117e4178u));
  /* 117e41a9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 117e41b0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_117e41b7:;
  /* 117e41b7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 117e41bb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 117e41be mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 117e41c1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e41c4 je 0x117e41f4 */
  if (C.zf) goto L_117e41f4;
  /* 117e41c6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e41ca je 0x117e41f4 */
  if (C.zf) goto L_117e41f4;
  /* 117e41cc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 117e41cf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 117e41d2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 117e41d6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 117e41d9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e41de jne 0x117e41f2 */
  if (!C.zf) goto L_117e41f2;
  /* 117e41e0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117e41e5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 117e41e9 call 0x117e422e */
  push32(0x117e41eeu); f_117e422e();
  /* 117e41ee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x117e41f2u);
L_117e41f2:;
  /* 117e41f2 jmp 0x117e41b7 */
  goto L_117e41b7;
L_117e41f4:;
  /* 117e41f4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 117e41fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e41fe pop edi */
  EDI = (pop32());
  /* 117e41ff pop esi */
  ESI = (pop32());
  /* 117e4200 pop ebx */
  EBX = (pop32());
  /* 117e4201 ret  */
  ESPCHK(0x117e419au, _esp0);
  ESP += 4; return;
}

/* FUN_1000422e @ 0x117e422e (24 bytes, 10 insns) */
void f_117e422e(void) {
  FTRACE(0x117e422eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e422e push ebx */
  push32((uint32_t)(EBX));
  /* 117e422f push ecx */
  push32((uint32_t)(ECX));
  /* 117e4230 mov ebx, 0x117e6500 */
  EBX = (0x117e6500u);
  /* 117e4235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117e4238 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 117e423b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 117e423e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 117e4241 pop ecx */
  ECX = (pop32());
  /* 117e4242 pop ebx */
  EBX = (pop32());
  /* 117e4243 ret 4 */
  ESPCHK(0x117e422eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000430d @ 0x117e430d (27 bytes, 11 insns) */
void f_117e430d(void) {
  FTRACE(0x117e430du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e430d push ebp */
  push32((uint32_t)(EBP));
  /* 117e430e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 117e4312 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 117e4314 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117e4317 push eax */
  push32((uint32_t)(EAX));
  /* 117e4318 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 117e431b push eax */
  push32((uint32_t)(EAX));
  /* 117e431c call 0x117e419a */
  push32(0x117e4321u); f_117e419a();
  /* 117e4321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117e4324 pop ebp */
  EBP = (pop32());
  /* 117e4325 ret 4 */
  ESPCHK(0x117e430du, _esp0);
  ESP += 8; return;
}

/* FUN_10004330 @ 0x117e4330 (47 bytes, 17 insns) */
void f_117e4330(void) {
  FTRACE(0x117e4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e4330 push ecx */
  push32((uint32_t)(ECX));
  /* 117e4331 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e4336 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 117e433a jb 0x117e4350 */
  if (C.cf) goto L_117e4350;
L_117e433c:;
  /* 117e433c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e4342 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e4347 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117e4349 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117e434e jae 0x117e433c */
  if (!C.cf) goto L_117e433c;
L_117e4350:;
  /* 117e4350 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117e4352 mov eax, esp */
  EAX = (ESP);
  /* 117e4354 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117e4356 mov esp, ecx */
  ESP = (ECX);
  /* 117e4358 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117e435a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 117e435d push eax */
  push32((uint32_t)(EAX));
  /* 117e435e ret  */
  ESPCHK(0x117e4330u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x117e4360 (6 bytes, 1 insns) */
void f_117e4360(void) {
  FTRACE(0x117e4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117e4360 jmp dword ptr [0x117e5004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117e5004)))); return;
}

