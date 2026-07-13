#include "recomp.h"

/* FUN_10001000 @ 0x119f1000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_119f1000(void) {
  FTRACE(0x119f1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1000 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1002 call dword ptr [0x119f40f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40f4))), 0x119f1008u);
  /* 119f1008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f100e ja 0x119f102f */
  if ((!C.cf&&!C.zf)) goto L_119f102f;
  /* 119f1010 jmp dword ptr [eax*4 + 0x119f1038] */
  switch (EAX) {
    case 0: goto L_119f1017;
    case 1: goto L_119f101d;
    case 2: goto L_119f1023;
    case 3: goto L_119f1029;
    default: x86_unimpl("switch@0x119f1010 out of table"); return;
  }
L_119f1017:;
  /* 119f1017 mov eax, 0xc350 */
  EAX = (0xc350u);
  /* 119f101c ret  */
  ESPCHK(0x119f1000u, _esp0);
  ESP += 4; return;
L_119f101d:;
  /* 119f101d mov eax, 0x4e20 */
  EAX = (0x4e20u);
  /* 119f1022 ret  */
  ESPCHK(0x119f1000u, _esp0);
  ESP += 4; return;
L_119f1023:;
  /* 119f1023 mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 119f1028 ret  */
  ESPCHK(0x119f1000u, _esp0);
  ESP += 4; return;
L_119f1029:;
  /* 119f1029 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 119f102e ret  */
  ESPCHK(0x119f1000u, _esp0);
  ESP += 4; return;
L_119f102f:;
  /* 119f102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 119f1034 ret  */
  ESPCHK(0x119f1000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x119f1050 (199 bytes, 52 insns) */
void f_119f1050(void) {
  FTRACE(0x119f1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1050 push esi */
  push32((uint32_t)(ESI));
  /* 119f1051 push 0x119f5128 */
  push32((uint32_t)(0x119f5128u));
  /* 119f1056 push 0x119f54e0 */
  push32((uint32_t)(0x119f54e0u));
  /* 119f105b call dword ptr [0x119f40e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40e8))), 0x119f1061u);
  /* 119f1061 mov esi, dword ptr [0x119f40f8] */
  ESI = (r32((uint32_t)(0x119f40f8)));
  /* 119f1067 push 0x119f5114 */
  push32((uint32_t)(0x119f5114u));
  /* 119f106c push 0x119f5498 */
  push32((uint32_t)(0x119f5498u));
  /* 119f1071 call esi */
  call_ind((uint32_t)(ESI), 0x119f1073u);
  /* 119f1073 push 0x119f5100 */
  push32((uint32_t)(0x119f5100u));
  /* 119f1078 push 0x119f54a0 */
  push32((uint32_t)(0x119f54a0u));
  /* 119f107d call esi */
  call_ind((uint32_t)(ESI), 0x119f107fu);
  /* 119f107f push 0x119f50ec */
  push32((uint32_t)(0x119f50ecu));
  /* 119f1084 push 0x119f54a8 */
  push32((uint32_t)(0x119f54a8u));
  /* 119f1089 call esi */
  call_ind((uint32_t)(ESI), 0x119f108bu);
  /* 119f108b push 0x119f50dc */
  push32((uint32_t)(0x119f50dcu));
  /* 119f1090 push 0x119f54b0 */
  push32((uint32_t)(0x119f54b0u));
  /* 119f1095 call esi */
  call_ind((uint32_t)(ESI), 0x119f1097u);
  /* 119f1097 push 0x119f50d0 */
  push32((uint32_t)(0x119f50d0u));
  /* 119f109c push 0x119f54b8 */
  push32((uint32_t)(0x119f54b8u));
  /* 119f10a1 call esi */
  call_ind((uint32_t)(ESI), 0x119f10a3u);
  /* 119f10a3 push 0x119f50c0 */
  push32((uint32_t)(0x119f50c0u));
  /* 119f10a8 push 0x119f54c0 */
  push32((uint32_t)(0x119f54c0u));
  /* 119f10ad call esi */
  call_ind((uint32_t)(ESI), 0x119f10afu);
  /* 119f10af push 0x119f50ac */
  push32((uint32_t)(0x119f50acu));
  /* 119f10b4 push 0x119f54c8 */
  push32((uint32_t)(0x119f54c8u));
  /* 119f10b9 call esi */
  call_ind((uint32_t)(ESI), 0x119f10bbu);
  /* 119f10bb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f10be push 0x119f5094 */
  push32((uint32_t)(0x119f5094u));
  /* 119f10c3 push 0x119f54d0 */
  push32((uint32_t)(0x119f54d0u));
  /* 119f10c8 call esi */
  call_ind((uint32_t)(ESI), 0x119f10cau);
  /* 119f10ca push 0x119f5080 */
  push32((uint32_t)(0x119f5080u));
  /* 119f10cf push 0x119f54f0 */
  push32((uint32_t)(0x119f54f0u));
  /* 119f10d4 call esi */
  call_ind((uint32_t)(ESI), 0x119f10d6u);
  /* 119f10d6 push 0x119f5068 */
  push32((uint32_t)(0x119f5068u));
  /* 119f10db push 0x119f5490 */
  push32((uint32_t)(0x119f5490u));
  /* 119f10e0 call esi */
  call_ind((uint32_t)(ESI), 0x119f10e2u);
  /* 119f10e2 push 0x119f5050 */
  push32((uint32_t)(0x119f5050u));
  /* 119f10e7 push 0x119f54d8 */
  push32((uint32_t)(0x119f54d8u));
  /* 119f10ec call esi */
  call_ind((uint32_t)(ESI), 0x119f10eeu);
  /* 119f10ee push 0x119f503c */
  push32((uint32_t)(0x119f503cu));
  /* 119f10f3 push 0x119f54e8 */
  push32((uint32_t)(0x119f54e8u));
  /* 119f10f8 call esi */
  call_ind((uint32_t)(ESI), 0x119f10fau);
  /* 119f10fa mov esi, dword ptr [0x119f40fc] */
  ESI = (r32((uint32_t)(0x119f40fc)));
  /* 119f1100 push 0x119f5030 */
  push32((uint32_t)(0x119f5030u));
  /* 119f1105 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1107 call esi */
  call_ind((uint32_t)(ESI), 0x119f1109u);
  /* 119f1109 push 0x119f5030 */
  push32((uint32_t)(0x119f5030u));
  /* 119f110e push 6 */
  push32((uint32_t)(0x6u));
  /* 119f1110 call esi */
  call_ind((uint32_t)(ESI), 0x119f1112u);
  /* 119f1112 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1115 pop esi */
  ESI = (pop32());
  /* 119f1116 ret  */
  ESPCHK(0x119f1050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x119f1120 (974 bytes, 347 insns) */
void f_119f1120(void) {
  FTRACE(0x119f1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1120 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1121 push ebp */
  push32((uint32_t)(EBP));
  /* 119f1122 push esi */
  push32((uint32_t)(ESI));
  /* 119f1123 push edi */
  push32((uint32_t)(EDI));
  /* 119f1124 mov edi, dword ptr [0x119f40b4] */
  EDI = (r32((uint32_t)(0x119f40b4)));
  /* 119f112a push 1 */
  push32((uint32_t)(0x1u));
  /* 119f112c call edi */
  call_ind((uint32_t)(EDI), 0x119f112eu);
  /* 119f112e mov ebx, dword ptr [0x119f40b0] */
  EBX = (r32((uint32_t)(0x119f40b0)));
  /* 119f1134 mov ebp, dword ptr [0x119f40bc] */
  EBP = (r32((uint32_t)(0x119f40bc)));
  /* 119f113a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f113d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f113f je 0x119f1384 */
  if (C.zf) goto L_119f1384;
  /* 119f1145 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1147 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1149 call ebx */
  call_ind((uint32_t)(EBX), 0x119f114bu);
  /* 119f114b push 0x119f515c */
  push32((uint32_t)(0x119f515cu));
  /* 119f1150 call ebp */
  call_ind((uint32_t)(EBP), 0x119f1152u);
  /* 119f1152 push 0x119f5154 */
  push32((uint32_t)(0x119f5154u));
  /* 119f1157 call ebp */
  call_ind((uint32_t)(EBP), 0x119f1159u);
  /* 119f1159 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f115b push 0x119f54e0 */
  push32((uint32_t)(0x119f54e0u));
  /* 119f1160 call dword ptr [0x119f40c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40c0))), 0x119f1166u);
  /* 119f1166 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1168 call dword ptr [0x119f40b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40b8))), 0x119f116eu);
  /* 119f116e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 119f1170 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1172 call dword ptr [0x119f40c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40c8))), 0x119f1178u);
  /* 119f1178 call 0x119f1000 */
  push32(0x119f117du); f_119f1000();
  /* 119f117d add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1182 push eax */
  push32((uint32_t)(EAX));
  /* 119f1183 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1185 call dword ptr [0x119f40cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40cc))), 0x119f118bu);
  /* 119f118b mov esi, dword ptr [0x119f40c4] */
  ESI = (r32((uint32_t)(0x119f40c4)));
  /* 119f1191 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f1196 push 3 */
  push32((uint32_t)(0x3u));
  /* 119f1198 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f119a call esi */
  call_ind((uint32_t)(ESI), 0x119f119cu);
  /* 119f119c push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 119f11a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f11a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f11a5 call esi */
  call_ind((uint32_t)(ESI), 0x119f11a7u);
  /* 119f11a7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f11aa push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f11af push 4 */
  push32((uint32_t)(0x4u));
  /* 119f11b1 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f11b3 call esi */
  call_ind((uint32_t)(ESI), 0x119f11b5u);
  /* 119f11b5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f11ba push 5 */
  push32((uint32_t)(0x5u));
  /* 119f11bc push 5 */
  push32((uint32_t)(0x5u));
  /* 119f11be call esi */
  call_ind((uint32_t)(ESI), 0x119f11c0u);
  /* 119f11c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f11c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f11c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f11c9 call esi */
  call_ind((uint32_t)(ESI), 0x119f11cbu);
  /* 119f11cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f11d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f11d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f11d4 call esi */
  call_ind((uint32_t)(ESI), 0x119f11d6u);
  /* 119f11d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f11d8 call dword ptr [0x119f40f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40f4))), 0x119f11deu);
  /* 119f11de mov edi, dword ptr [0x119f40d4] */
  EDI = (r32((uint32_t)(0x119f40d4)));
  /* 119f11e4 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f11e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f11e9 jne 0x119f1244 */
  if (!C.zf) goto L_119f1244;
  /* 119f11eb push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 119f11f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 119f11f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f11f4 call esi */
  call_ind((uint32_t)(ESI), 0x119f11f6u);
  /* 119f11f6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 119f11fb push 1 */
  push32((uint32_t)(0x1u));
  /* 119f11fd push 0 */
  push32((uint32_t)(0x0u));
  /* 119f11ff call esi */
  call_ind((uint32_t)(ESI), 0x119f1201u);
  /* 119f1201 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 119f1206 push 4 */
  push32((uint32_t)(0x4u));
  /* 119f1208 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f120a call esi */
  call_ind((uint32_t)(ESI), 0x119f120cu);
  /* 119f120c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 119f1211 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1213 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1215 call esi */
  call_ind((uint32_t)(ESI), 0x119f1217u);
  /* 119f1217 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 119f121c push 0 */
  push32((uint32_t)(0x0u));
  /* 119f121e push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1220 call esi */
  call_ind((uint32_t)(ESI), 0x119f1222u);
  /* 119f1222 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 119f1227 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f1229 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f122b call esi */
  call_ind((uint32_t)(ESI), 0x119f122du);
  /* 119f122d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1230 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1232 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f1234 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1236 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1238 push 0x119f5148 */
  push32((uint32_t)(0x119f5148u));
  /* 119f123d push 5 */
  push32((uint32_t)(0x5u));
  /* 119f123f call edi */
  call_ind((uint32_t)(EDI), 0x119f1241u);
  /* 119f1241 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f1244:;
  /* 119f1244 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1246 call dword ptr [0x119f40f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40f4))), 0x119f124cu);
  /* 119f124c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f124f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1252 jne 0x119f12ad */
  if (!C.zf) goto L_119f12ad;
  /* 119f1254 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 119f1259 push 3 */
  push32((uint32_t)(0x3u));
  /* 119f125b push 0 */
  push32((uint32_t)(0x0u));
  /* 119f125d call esi */
  call_ind((uint32_t)(ESI), 0x119f125fu);
  /* 119f125f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 119f1264 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1266 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1268 call esi */
  call_ind((uint32_t)(ESI), 0x119f126au);
  /* 119f126a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 119f126f push 4 */
  push32((uint32_t)(0x4u));
  /* 119f1271 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1273 call esi */
  call_ind((uint32_t)(ESI), 0x119f1275u);
  /* 119f1275 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 119f127a push 5 */
  push32((uint32_t)(0x5u));
  /* 119f127c push 0 */
  push32((uint32_t)(0x0u));
  /* 119f127e call esi */
  call_ind((uint32_t)(ESI), 0x119f1280u);
  /* 119f1280 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 119f1285 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1287 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1289 call esi */
  call_ind((uint32_t)(ESI), 0x119f128bu);
  /* 119f128b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 119f1290 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f1292 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1294 call esi */
  call_ind((uint32_t)(ESI), 0x119f1296u);
  /* 119f1296 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1299 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f129b push 2 */
  push32((uint32_t)(0x2u));
  /* 119f129d push 1 */
  push32((uint32_t)(0x1u));
  /* 119f129f push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12a1 push 0x119f5148 */
  push32((uint32_t)(0x119f5148u));
  /* 119f12a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f12a8 call edi */
  call_ind((uint32_t)(EDI), 0x119f12aau);
  /* 119f12aa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f12ad:;
  /* 119f12ad push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12af call dword ptr [0x119f40f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40f4))), 0x119f12b5u);
  /* 119f12b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f12b8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f12bb jne 0x119f1316 */
  if (!C.zf) goto L_119f1316;
  /* 119f12bd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f12c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 119f12c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12c6 call esi */
  call_ind((uint32_t)(ESI), 0x119f12c8u);
  /* 119f12c8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f12cd push 1 */
  push32((uint32_t)(0x1u));
  /* 119f12cf push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12d1 call esi */
  call_ind((uint32_t)(ESI), 0x119f12d3u);
  /* 119f12d3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f12d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 119f12da push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12dc call esi */
  call_ind((uint32_t)(ESI), 0x119f12deu);
  /* 119f12de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 119f12e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f12e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12e7 call esi */
  call_ind((uint32_t)(ESI), 0x119f12e9u);
  /* 119f12e9 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 119f12ee push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12f2 call esi */
  call_ind((uint32_t)(ESI), 0x119f12f4u);
  /* 119f12f4 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 119f12f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f12fb push 0 */
  push32((uint32_t)(0x0u));
  /* 119f12fd call esi */
  call_ind((uint32_t)(ESI), 0x119f12ffu);
  /* 119f12ff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1302 push 3 */
  push32((uint32_t)(0x3u));
  /* 119f1304 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f1306 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1308 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f130a push 0x119f5148 */
  push32((uint32_t)(0x119f5148u));
  /* 119f130f push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1311 call edi */
  call_ind((uint32_t)(EDI), 0x119f1313u);
  /* 119f1313 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f1316:;
  /* 119f1316 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1318 call dword ptr [0x119f40f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40f4))), 0x119f131eu);
  /* 119f131e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1321 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1324 jne 0x119f137e */
  if (!C.zf) goto L_119f137e;
  /* 119f1326 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 119f132b push eax */
  push32((uint32_t)(EAX));
  /* 119f132c push 0 */
  push32((uint32_t)(0x0u));
  /* 119f132e call esi */
  call_ind((uint32_t)(ESI), 0x119f1330u);
  /* 119f1330 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 119f1335 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1337 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1339 call esi */
  call_ind((uint32_t)(ESI), 0x119f133bu);
  /* 119f133b push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 119f1340 push 4 */
  push32((uint32_t)(0x4u));
  /* 119f1342 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1344 call esi */
  call_ind((uint32_t)(ESI), 0x119f1346u);
  /* 119f1346 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 119f134b push 5 */
  push32((uint32_t)(0x5u));
  /* 119f134d push 0 */
  push32((uint32_t)(0x0u));
  /* 119f134f call esi */
  call_ind((uint32_t)(ESI), 0x119f1351u);
  /* 119f1351 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 119f1356 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1358 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f135a call esi */
  call_ind((uint32_t)(ESI), 0x119f135cu);
  /* 119f135c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 119f1361 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f1363 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1365 call esi */
  call_ind((uint32_t)(ESI), 0x119f1367u);
  /* 119f1367 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f136a push 3 */
  push32((uint32_t)(0x3u));
  /* 119f136c push 2 */
  push32((uint32_t)(0x2u));
  /* 119f136e push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1370 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1372 push 0x119f5148 */
  push32((uint32_t)(0x119f5148u));
  /* 119f1377 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1379 call edi */
  call_ind((uint32_t)(EDI), 0x119f137bu);
  /* 119f137b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f137e:;
  /* 119f137e mov edi, dword ptr [0x119f40b4] */
  EDI = (r32((uint32_t)(0x119f40b4)));
L_119f1384:;
  /* 119f1384 mov esi, dword ptr [0x119f40d8] */
  ESI = (r32((uint32_t)(0x119f40d8)));
  /* 119f138a push 0 */
  push32((uint32_t)(0x0u));
  /* 119f138c push 0x119f5498 */
  push32((uint32_t)(0x119f5498u));
  /* 119f1391 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1393 call esi */
  call_ind((uint32_t)(ESI), 0x119f1395u);
  /* 119f1395 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1397 push 0x119f54a0 */
  push32((uint32_t)(0x119f54a0u));
  /* 119f139c push 0 */
  push32((uint32_t)(0x0u));
  /* 119f139e call esi */
  call_ind((uint32_t)(ESI), 0x119f13a0u);
  /* 119f13a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13a2 push 0x119f54a8 */
  push32((uint32_t)(0x119f54a8u));
  /* 119f13a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13a9 call esi */
  call_ind((uint32_t)(ESI), 0x119f13abu);
  /* 119f13ab push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13ad push 0x119f54b0 */
  push32((uint32_t)(0x119f54b0u));
  /* 119f13b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13b4 call esi */
  call_ind((uint32_t)(ESI), 0x119f13b6u);
  /* 119f13b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13b8 push 0x119f54b8 */
  push32((uint32_t)(0x119f54b8u));
  /* 119f13bd push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13bf call esi */
  call_ind((uint32_t)(ESI), 0x119f13c1u);
  /* 119f13c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13c3 push 0x119f54c0 */
  push32((uint32_t)(0x119f54c0u));
  /* 119f13c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13ca call esi */
  call_ind((uint32_t)(ESI), 0x119f13ccu);
  /* 119f13cc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f13cf push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13d1 push 0x119f54c8 */
  push32((uint32_t)(0x119f54c8u));
  /* 119f13d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13d8 call esi */
  call_ind((uint32_t)(ESI), 0x119f13dau);
  /* 119f13da push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13dc push 0x119f54d0 */
  push32((uint32_t)(0x119f54d0u));
  /* 119f13e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13e3 call esi */
  call_ind((uint32_t)(ESI), 0x119f13e5u);
  /* 119f13e5 push 6 */
  push32((uint32_t)(0x6u));
  /* 119f13e7 call edi */
  call_ind((uint32_t)(EDI), 0x119f13e9u);
  /* 119f13e9 mov esi, dword ptr [0x119f40d0] */
  ESI = (r32((uint32_t)(0x119f40d0)));
  /* 119f13ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f13f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f13f4 je 0x119f1417 */
  if (C.zf) goto L_119f1417;
  /* 119f13f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f13f8 call esi */
  call_ind((uint32_t)(ESI), 0x119f13fau);
  /* 119f13fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f13fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f13ff je 0x119f1417 */
  if (C.zf) goto L_119f1417;
  /* 119f1401 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1403 push 6 */
  push32((uint32_t)(0x6u));
  /* 119f1405 call ebx */
  call_ind((uint32_t)(EBX), 0x119f1407u);
  /* 119f1407 push 0x119f5140 */
  push32((uint32_t)(0x119f5140u));
  /* 119f140c call ebp */
  call_ind((uint32_t)(EBP), 0x119f140eu);
  /* 119f140e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1411 call dword ptr [0x119f40e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40e0))), 0x119f1417u);
L_119f1417:;
  /* 119f1417 push 8 */
  push32((uint32_t)(0x8u));
  /* 119f1419 call edi */
  call_ind((uint32_t)(EDI), 0x119f141bu);
  /* 119f141b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f141e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f1420 je 0x119f1443 */
  if (C.zf) goto L_119f1443;
  /* 119f1422 push 5 */
  push32((uint32_t)(0x5u));
  /* 119f1424 call esi */
  call_ind((uint32_t)(ESI), 0x119f1426u);
  /* 119f1426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1429 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f142b je 0x119f1443 */
  if (C.zf) goto L_119f1443;
  /* 119f142d push 0 */
  push32((uint32_t)(0x0u));
  /* 119f142f push 8 */
  push32((uint32_t)(0x8u));
  /* 119f1431 call ebx */
  call_ind((uint32_t)(EBX), 0x119f1433u);
  /* 119f1433 push 0x119f5138 */
  push32((uint32_t)(0x119f5138u));
  /* 119f1438 call ebp */
  call_ind((uint32_t)(EBP), 0x119f143au);
  /* 119f143a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f143d call dword ptr [0x119f40e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40e4))), 0x119f1443u);
L_119f1443:;
  /* 119f1443 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f1445 call edi */
  call_ind((uint32_t)(EDI), 0x119f1447u);
  /* 119f1447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f144a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f144c je 0x119f14c0 */
  if (C.zf) goto L_119f14c0;
  /* 119f144e push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1450 call dword ptr [0x119f40dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40dc))), 0x119f1456u);
  /* 119f1456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1459 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f145b je 0x119f14c0 */
  if (C.zf) goto L_119f14c0;
  /* 119f145d push 0 */
  push32((uint32_t)(0x0u));
  /* 119f145f push 9 */
  push32((uint32_t)(0x9u));
  /* 119f1461 call ebx */
  call_ind((uint32_t)(EBX), 0x119f1463u);
  /* 119f1463 push 0x119f5130 */
  push32((uint32_t)(0x119f5130u));
  /* 119f1468 call ebp */
  call_ind((uint32_t)(EBP), 0x119f146au);
  /* 119f146a push 1 */
  push32((uint32_t)(0x1u));
  /* 119f146c push 0xa */
  push32((uint32_t)(0xau));
  /* 119f146e call ebx */
  call_ind((uint32_t)(EBX), 0x119f1470u);
  /* 119f1470 mov esi, dword ptr [0x119f40ec] */
  ESI = (r32((uint32_t)(0x119f40ec)));
  /* 119f1476 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1478 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f147a push 0x119f54f0 */
  push32((uint32_t)(0x119f54f0u));
  /* 119f147f call esi */
  call_ind((uint32_t)(ESI), 0x119f1481u);
  /* 119f1481 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1483 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1485 push 0x119f5490 */
  push32((uint32_t)(0x119f5490u));
  /* 119f148a call esi */
  call_ind((uint32_t)(ESI), 0x119f148cu);
  /* 119f148c push 1 */
  push32((uint32_t)(0x1u));
  /* 119f148e push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1490 push 0x119f54d8 */
  push32((uint32_t)(0x119f54d8u));
  /* 119f1495 call esi */
  call_ind((uint32_t)(ESI), 0x119f1497u);
  /* 119f1497 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1499 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f149b push 0x119f54e8 */
  push32((uint32_t)(0x119f54e8u));
  /* 119f14a0 call esi */
  call_ind((uint32_t)(ESI), 0x119f14a2u);
  /* 119f14a2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f14a5 push 6 */
  push32((uint32_t)(0x6u));
  /* 119f14a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f14a9 call dword ptr [0x119f40f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40f0))), 0x119f14afu);
  /* 119f14af call 0x119f1000 */
  push32(0x119f14b4u); f_119f1000();
  /* 119f14b4 push eax */
  push32((uint32_t)(EAX));
  /* 119f14b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f14b7 call dword ptr [0x119f40cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40cc))), 0x119f14bdu);
  /* 119f14bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f14c0:;
  /* 119f14c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 119f14c2 call edi */
  call_ind((uint32_t)(EDI), 0x119f14c4u);
  /* 119f14c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f14c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f14c9 je 0x119f14e9 */
  if (C.zf) goto L_119f14e9;
  /* 119f14cb push 1 */
  push32((uint32_t)(0x1u));
  /* 119f14cd call dword ptr [0x119f40dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40dc))), 0x119f14d3u);
  /* 119f14d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f14d6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f14d8 je 0x119f14e9 */
  if (C.zf) goto L_119f14e9;
  /* 119f14da push 0 */
  push32((uint32_t)(0x0u));
  /* 119f14dc push 0xa */
  push32((uint32_t)(0xau));
  /* 119f14de call ebx */
  call_ind((uint32_t)(EBX), 0x119f14e0u);
  /* 119f14e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f14e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f14e4 call ebx */
  call_ind((uint32_t)(EBX), 0x119f14e6u);
  /* 119f14e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f14e9:;
  /* 119f14e9 pop edi */
  EDI = (pop32());
  /* 119f14ea pop esi */
  ESI = (pop32());
  /* 119f14eb pop ebp */
  EBP = (pop32());
  /* 119f14ec pop ebx */
  EBX = (pop32());
  /* 119f14ed ret  */
  ESPCHK(0x119f1120u, _esp0);
  ESP += 4; return;
}

/* FUN_100014f0 @ 0x119f14f0 (20 bytes, 6 insns) */
void f_119f14f0(void) {
  FTRACE(0x119f14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f14f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f14f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119f14f5 jne 0x119f14fc */
  if (!C.zf) goto L_119f14fc;
  /* 119f14f7 call 0x119f1050 */
  push32(0x119f14fcu); f_119f1050();
L_119f14fc:;
  /* 119f14fc mov eax, 1 */
  EAX = (0x1u);
  /* 119f1501 ret 0xc */
  ESPCHK(0x119f14f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001510 @ 0x119f1510 (217 bytes, 57 insns) */
void f_119f1510(void) {
  FTRACE(0x119f1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1510 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f1514 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1517 jne 0x119f15a5 */
  if (!C.zf) goto L_119f15a5;
  /* 119f151d call dword ptr [0x119f4048] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4048))), 0x119f1523u);
  /* 119f1523 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1525 mov dword ptr [0x119f5514], eax */
  w32((uint32_t)(0x119f5514), (EAX));
  /* 119f152a call 0x119f1f44 */
  push32(0x119f152fu); f_119f1f44();
  /* 119f152f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1531 pop ecx */
  ECX = (pop32());
  /* 119f1532 je 0x119f1570 */
  if (C.zf) goto L_119f1570;
  /* 119f1534 mov eax, dword ptr [0x119f5514] */
  EAX = (r32((uint32_t)(0x119f5514)));
  /* 119f1539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119f153b mov cl, byte ptr [0x119f5515] */
  CL = (r8((uint32_t)(0x119f5515)));
  /* 119f1541 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f1546 shr dword ptr [0x119f5514], 0x10 */
  w32((uint32_t)(0x119f5514), (sh_shr((uint32_t)(r32((uint32_t)(0x119f5514))), (0x10u)&0x1f, 32)));
  /* 119f154d mov dword ptr [0x119f551c], eax */
  w32((uint32_t)(0x119f551c), (EAX));
  /* 119f1552 mov dword ptr [0x119f5520], ecx */
  w32((uint32_t)(0x119f5520), (ECX));
  /* 119f1558 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119f155b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f155d mov dword ptr [0x119f5518], eax */
  w32((uint32_t)(0x119f5518), (EAX));
  /* 119f1562 call 0x119f17d7 */
  push32(0x119f1567u); f_119f17d7();
  /* 119f1567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1569 jne 0x119f1574 */
  if (!C.zf) goto L_119f1574;
  /* 119f156b call 0x119f1f80 */
  push32(0x119f1570u); f_119f1f80();
L_119f1570:;
  /* 119f1570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f1572 jmp 0x119f15e6 */
  goto L_119f15e6;
L_119f1574:;
  /* 119f1574 call dword ptr [0x119f4044] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4044))), 0x119f157au);
  /* 119f157a mov dword ptr [0x119f5a78], eax */
  w32((uint32_t)(0x119f5a78), (EAX));
  /* 119f157f call 0x119f1e12 */
  push32(0x119f1584u); f_119f1e12();
  /* 119f1584 mov dword ptr [0x119f5500], eax */
  w32((uint32_t)(0x119f5500), (EAX));
  /* 119f1589 call 0x119f18fc */
  push32(0x119f158eu); f_119f18fc();
  /* 119f158e call 0x119f1bc5 */
  push32(0x119f1593u); f_119f1bc5();
  /* 119f1593 call 0x119f1b0c */
  push32(0x119f1598u); f_119f1b0c();
  /* 119f1598 call 0x119f16b9 */
  push32(0x119f159du); f_119f16b9();
  /* 119f159d inc dword ptr [0x119f54fc] */
  { uint32_t _r=(r32((uint32_t)(0x119f54fc)))+1; w32((uint32_t)(0x119f54fc), (_r)); fl_inc(_r,32); }
  /* 119f15a3 jmp 0x119f15e3 */
  goto L_119f15e3;
L_119f15a5:;
  /* 119f15a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119f15a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f15a9 jne 0x119f15d7 */
  if (!C.zf) goto L_119f15d7;
  /* 119f15ab cmp dword ptr [0x119f54fc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x119f54fc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f15b1 jle 0x119f1570 */
  if ((C.zf||C.sf!=C.of)) goto L_119f1570;
  /* 119f15b3 dec dword ptr [0x119f54fc] */
  { uint32_t _r=(r32((uint32_t)(0x119f54fc)))-1; w32((uint32_t)(0x119f54fc), (_r)); fl_dec(_r,32); }
  /* 119f15b9 cmp dword ptr [0x119f554c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x119f554c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f15bf jne 0x119f15c6 */
  if (!C.zf) goto L_119f15c6;
  /* 119f15c1 call 0x119f16f7 */
  push32(0x119f15c6u); f_119f16f7();
L_119f15c6:;
  /* 119f15c6 call 0x119f1ab8 */
  push32(0x119f15cbu); f_119f1ab8();
  /* 119f15cb call 0x119f182b */
  push32(0x119f15d0u); f_119f182b();
  /* 119f15d0 call 0x119f1f80 */
  push32(0x119f15d5u); f_119f1f80();
  /* 119f15d5 jmp 0x119f15e3 */
  goto L_119f15e3;
L_119f15d7:;
  /* 119f15d7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f15da jne 0x119f15e3 */
  if (!C.zf) goto L_119f15e3;
  /* 119f15dc push ecx */
  push32((uint32_t)(ECX));
  /* 119f15dd call 0x119f185c */
  push32(0x119f15e2u); f_119f185c();
  /* 119f15e2 pop ecx */
  ECX = (pop32());
L_119f15e3:;
  /* 119f15e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f15e5 pop eax */
  EAX = (pop32());
L_119f15e6:;
  /* 119f15e6 ret 0xc */
  ESPCHK(0x119f1510u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x119f15e9 (157 bytes, 73 insns) */
void f_119f15e9(void) {
  FTRACE(0x119f15e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f15e9 push ebp */
  push32((uint32_t)(EBP));
  /* 119f15ea mov ebp, esp */
  EBP = (ESP);
  /* 119f15ec push ebx */
  push32((uint32_t)(EBX));
  /* 119f15ed mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f15f0 push esi */
  push32((uint32_t)(ESI));
  /* 119f15f1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119f15f4 push edi */
  push32((uint32_t)(EDI));
  /* 119f15f5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 119f15f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f15fa jne 0x119f1605 */
  if (!C.zf) goto L_119f1605;
  /* 119f15fc cmp dword ptr [0x119f54fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119f54fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1603 jmp 0x119f162b */
  goto L_119f162b;
L_119f1605:;
  /* 119f1605 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1608 je 0x119f160f */
  if (C.zf) goto L_119f160f;
  /* 119f160a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f160d jne 0x119f1631 */
  if (!C.zf) goto L_119f1631;
L_119f160f:;
  /* 119f160f mov eax, dword ptr [0x119f5a7c] */
  EAX = (r32((uint32_t)(0x119f5a7c)));
  /* 119f1614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1616 je 0x119f1621 */
  if (C.zf) goto L_119f1621;
  /* 119f1618 push edi */
  push32((uint32_t)(EDI));
  /* 119f1619 push esi */
  push32((uint32_t)(ESI));
  /* 119f161a push ebx */
  push32((uint32_t)(EBX));
  /* 119f161b call eax */
  call_ind((uint32_t)(EAX), 0x119f161du);
  /* 119f161d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f161f je 0x119f162d */
  if (C.zf) goto L_119f162d;
L_119f1621:;
  /* 119f1621 push edi */
  push32((uint32_t)(EDI));
  /* 119f1622 push esi */
  push32((uint32_t)(ESI));
  /* 119f1623 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1624 call 0x119f1510 */
  push32(0x119f1629u); f_119f1510();
  /* 119f1629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_119f162b:;
  /* 119f162b jne 0x119f1631 */
  if (!C.zf) goto L_119f1631;
L_119f162d:;
  /* 119f162d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f162f jmp 0x119f167f */
  goto L_119f167f;
L_119f1631:;
  /* 119f1631 push edi */
  push32((uint32_t)(EDI));
  /* 119f1632 push esi */
  push32((uint32_t)(ESI));
  /* 119f1633 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1634 call 0x119f14f0 */
  push32(0x119f1639u); f_119f14f0();
  /* 119f1639 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f163c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119f163f jne 0x119f164d */
  if (!C.zf) goto L_119f164d;
  /* 119f1641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1643 jne 0x119f167c */
  if (!C.zf) goto L_119f167c;
  /* 119f1645 push edi */
  push32((uint32_t)(EDI));
  /* 119f1646 push eax */
  push32((uint32_t)(EAX));
  /* 119f1647 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1648 call 0x119f1510 */
  push32(0x119f164du); f_119f1510();
L_119f164d:;
  /* 119f164d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f164f je 0x119f1656 */
  if (C.zf) goto L_119f1656;
  /* 119f1651 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1654 jne 0x119f167c */
  if (!C.zf) goto L_119f167c;
L_119f1656:;
  /* 119f1656 push edi */
  push32((uint32_t)(EDI));
  /* 119f1657 push esi */
  push32((uint32_t)(ESI));
  /* 119f1658 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1659 call 0x119f1510 */
  push32(0x119f165eu); f_119f1510();
  /* 119f165e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1660 jne 0x119f1665 */
  if (!C.zf) goto L_119f1665;
  /* 119f1662 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_119f1665:;
  /* 119f1665 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1669 je 0x119f167c */
  if (C.zf) goto L_119f167c;
  /* 119f166b mov eax, dword ptr [0x119f5a7c] */
  EAX = (r32((uint32_t)(0x119f5a7c)));
  /* 119f1670 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1672 je 0x119f167c */
  if (C.zf) goto L_119f167c;
  /* 119f1674 push edi */
  push32((uint32_t)(EDI));
  /* 119f1675 push esi */
  push32((uint32_t)(ESI));
  /* 119f1676 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1677 call eax */
  call_ind((uint32_t)(EAX), 0x119f1679u);
  /* 119f1679 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_119f167c:;
  /* 119f167c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_119f167f:;
  /* 119f167f pop edi */
  EDI = (pop32());
  /* 119f1680 pop esi */
  ESI = (pop32());
  /* 119f1681 pop ebx */
  EBX = (pop32());
  /* 119f1682 pop ebp */
  EBP = (pop32());
  /* 119f1683 ret 0xc */
  ESPCHK(0x119f15e9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x119f1686 (48 bytes, 15 insns) */
void f_119f1686(void) {
  FTRACE(0x119f1686u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1686 mov eax, dword ptr [0x119f5508] */
  EAX = (r32((uint32_t)(0x119f5508)));
  /* 119f168b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f168e je 0x119f169d */
  if (C.zf) goto L_119f169d;
  /* 119f1690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1692 jne 0x119f16a2 */
  if (!C.zf) goto L_119f16a2;
  /* 119f1694 cmp dword ptr [0x119f550c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119f550c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f169b jne 0x119f16a2 */
  if (!C.zf) goto L_119f16a2;
L_119f169d:;
  /* 119f169d call 0x119f1ff5 */
  push32(0x119f16a2u); f_119f1ff5();
L_119f16a2:;
  /* 119f16a2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 119f16a6 call 0x119f202e */
  push32(0x119f16abu); f_119f202e();
  /* 119f16ab push 0xff */
  push32((uint32_t)(0xffu));
  /* 119f16b0 call dword ptr [0x119f5164] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f5164))), 0x119f16b6u);
  /* 119f16b6 pop ecx */
  ECX = (pop32());
  /* 119f16b7 pop ecx */
  ECX = (pop32());
  /* 119f16b8 ret  */
  ESPCHK(0x119f1686u, _esp0);
  ESP += 4; return;
}

/* FUN_100016b9 @ 0x119f16b9 (45 bytes, 12 insns) */
void f_119f16b9(void) {
  FTRACE(0x119f16b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f16b9 mov eax, dword ptr [0x119f5a74] */
  EAX = (r32((uint32_t)(0x119f5a74)));
  /* 119f16be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f16c0 je 0x119f16c4 */
  if (C.zf) goto L_119f16c4;
  /* 119f16c2 call eax */
  call_ind((uint32_t)(EAX), 0x119f16c4u);
L_119f16c4:;
  /* 119f16c4 push 0x119f5010 */
  push32((uint32_t)(0x119f5010u));
  /* 119f16c9 push 0x119f5008 */
  push32((uint32_t)(0x119f5008u));
  /* 119f16ce call 0x119f17bd */
  push32(0x119f16d3u); f_119f17bd();
  /* 119f16d3 push 0x119f5004 */
  push32((uint32_t)(0x119f5004u));
  /* 119f16d8 push 0x119f5000 */
  push32((uint32_t)(0x119f5000u));
  /* 119f16dd call 0x119f17bd */
  push32(0x119f16e2u); f_119f17bd();
  /* 119f16e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f16e5 ret  */
  ESPCHK(0x119f16b9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x119f16e6 (17 bytes, 6 insns) */
void f_119f16e6(void) {
  FTRACE(0x119f16e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f16e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f16e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f16ea push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 119f16ee call 0x119f1706 */
  push32(0x119f16f3u); f_119f1706();
  /* 119f16f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f16f6 ret  */
  ESPCHK(0x119f16e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100016f7 @ 0x119f16f7 (15 bytes, 6 insns) */
void f_119f16f7(void) {
  FTRACE(0x119f16f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f16f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f16f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f16fb push 0 */
  push32((uint32_t)(0x0u));
  /* 119f16fd call 0x119f1706 */
  push32(0x119f1702u); f_119f1706();
  /* 119f1702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1705 ret  */
  ESPCHK(0x119f16f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001706 @ 0x119f1706 (163 bytes, 53 insns) */
void f_119f1706(void) {
  FTRACE(0x119f1706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1706 push edi */
  push32((uint32_t)(EDI));
  /* 119f1707 call 0x119f17ab */
  push32(0x119f170cu); f_119f17ab();
  /* 119f170c push 1 */
  push32((uint32_t)(0x1u));
  /* 119f170e pop edi */
  EDI = (pop32());
  /* 119f170f cmp dword ptr [0x119f5550], edi */
  { uint32_t _a=(r32((uint32_t)(0x119f5550))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1715 jne 0x119f1728 */
  if (!C.zf) goto L_119f1728;
  /* 119f1717 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 119f171b call dword ptr [0x119f4054] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4054))), 0x119f1721u);
  /* 119f1721 push eax */
  push32((uint32_t)(EAX));
  /* 119f1722 call dword ptr [0x119f4050] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4050))), 0x119f1728u);
L_119f1728:;
  /* 119f1728 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f172d push ebx */
  push32((uint32_t)(EBX));
  /* 119f172e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 119f1732 mov dword ptr [0x119f554c], edi */
  w32((uint32_t)(0x119f554c), (EDI));
  /* 119f1738 mov byte ptr [0x119f5548], bl */
  w8((uint32_t)(0x119f5548), (BL));
  /* 119f173e jne 0x119f177c */
  if (!C.zf) goto L_119f177c;
  /* 119f1740 mov eax, dword ptr [0x119f5a70] */
  EAX = (r32((uint32_t)(0x119f5a70)));
  /* 119f1745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1747 je 0x119f176b */
  if (C.zf) goto L_119f176b;
  /* 119f1749 mov ecx, dword ptr [0x119f5a6c] */
  ECX = (r32((uint32_t)(0x119f5a6c)));
  /* 119f174f push esi */
  push32((uint32_t)(ESI));
  /* 119f1750 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 119f1753 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1755 jb 0x119f176a */
  if (C.cf) goto L_119f176a;
L_119f1757:;
  /* 119f1757 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119f1759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f175b je 0x119f175f */
  if (C.zf) goto L_119f175f;
  /* 119f175d call eax */
  call_ind((uint32_t)(EAX), 0x119f175fu);
L_119f175f:;
  /* 119f175f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f1762 cmp esi, dword ptr [0x119f5a70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x119f5a70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1768 jae 0x119f1757 */
  if (!C.cf) goto L_119f1757;
L_119f176a:;
  /* 119f176a pop esi */
  ESI = (pop32());
L_119f176b:;
  /* 119f176b push 0x119f5018 */
  push32((uint32_t)(0x119f5018u));
  /* 119f1770 push 0x119f5014 */
  push32((uint32_t)(0x119f5014u));
  /* 119f1775 call 0x119f17bd */
  push32(0x119f177au); f_119f17bd();
  /* 119f177a pop ecx */
  ECX = (pop32());
  /* 119f177b pop ecx */
  ECX = (pop32());
L_119f177c:;
  /* 119f177c push 0x119f5020 */
  push32((uint32_t)(0x119f5020u));
  /* 119f1781 push 0x119f501c */
  push32((uint32_t)(0x119f501cu));
  /* 119f1786 call 0x119f17bd */
  push32(0x119f178bu); f_119f17bd();
  /* 119f178b pop ecx */
  ECX = (pop32());
  /* 119f178c pop ecx */
  ECX = (pop32());
  /* 119f178d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119f178f pop ebx */
  EBX = (pop32());
  /* 119f1790 je 0x119f1799 */
  if (C.zf) goto L_119f1799;
  /* 119f1792 call 0x119f17b4 */
  push32(0x119f1797u); f_119f17b4();
  /* 119f1797 pop edi */
  EDI = (pop32());
  /* 119f1798 ret  */
  ESPCHK(0x119f1706u, _esp0);
  ESP += 4; return;
L_119f1799:;
  /* 119f1799 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 119f179d mov dword ptr [0x119f5550], edi */
  w32((uint32_t)(0x119f5550), (EDI));
  /* 119f17a3 call dword ptr [0x119f404c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f404c))), 0x119f17a9u);
  /* 119f17a9 pop edi */
  EDI = (pop32());
  /* 119f17aa ret  */
  ESPCHK(0x119f1706u, _esp0);
  ESP += 4; return;
}

/* FUN_100017ab @ 0x119f17ab (9 bytes, 4 insns) */
void f_119f17ab(void) {
  FTRACE(0x119f17abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f17ab push 0xd */
  push32((uint32_t)(0xdu));
  /* 119f17ad call 0x119f2216 */
  push32(0x119f17b2u); f_119f2216();
  /* 119f17b2 pop ecx */
  ECX = (pop32());
  /* 119f17b3 ret  */
  ESPCHK(0x119f17abu, _esp0);
  ESP += 4; return;
}

/* FUN_100017b4 @ 0x119f17b4 (9 bytes, 4 insns) */
void f_119f17b4(void) {
  FTRACE(0x119f17b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f17b4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 119f17b6 call 0x119f2277 */
  push32(0x119f17bbu); f_119f2277();
  /* 119f17bb pop ecx */
  ECX = (pop32());
  /* 119f17bc ret  */
  ESPCHK(0x119f17b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100017bd @ 0x119f17bd (26 bytes, 12 insns) */
void f_119f17bd(void) {
  FTRACE(0x119f17bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f17bd push esi */
  push32((uint32_t)(ESI));
  /* 119f17be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_119f17c2:;
  /* 119f17c2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f17c6 jae 0x119f17d5 */
  if (!C.cf) goto L_119f17d5;
  /* 119f17c8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119f17ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f17cc je 0x119f17d0 */
  if (C.zf) goto L_119f17d0;
  /* 119f17ce call eax */
  call_ind((uint32_t)(EAX), 0x119f17d0u);
L_119f17d0:;
  /* 119f17d0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f17d3 jmp 0x119f17c2 */
  goto L_119f17c2;
L_119f17d5:;
  /* 119f17d5 pop esi */
  ESI = (pop32());
  /* 119f17d6 ret  */
  ESPCHK(0x119f17bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100017d7 @ 0x119f17d7 (84 bytes, 32 insns) */
void f_119f17d7(void) {
  FTRACE(0x119f17d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f17d7 push esi */
  push32((uint32_t)(ESI));
  /* 119f17d8 call 0x119f2181 */
  push32(0x119f17ddu); f_119f2181();
  /* 119f17dd call dword ptr [0x119f4060] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4060))), 0x119f17e3u);
  /* 119f17e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f17e6 mov dword ptr [0x119f5168], eax */
  w32((uint32_t)(0x119f5168), (EAX));
  /* 119f17eb je 0x119f1827 */
  if (C.zf) goto L_119f1827;
  /* 119f17ed push 0x74 */
  push32((uint32_t)(0x74u));
  /* 119f17ef push 1 */
  push32((uint32_t)(0x1u));
  /* 119f17f1 call 0x119f228c */
  push32(0x119f17f6u); f_119f228c();
  /* 119f17f6 mov esi, eax */
  ESI = (EAX);
  /* 119f17f8 pop ecx */
  ECX = (pop32());
  /* 119f17f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f17fb pop ecx */
  ECX = (pop32());
  /* 119f17fc je 0x119f1827 */
  if (C.zf) goto L_119f1827;
  /* 119f17fe push esi */
  push32((uint32_t)(ESI));
  /* 119f17ff push dword ptr [0x119f5168] */
  push32((uint32_t)(r32((uint32_t)(0x119f5168))));
  /* 119f1805 call dword ptr [0x119f405c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f405c))), 0x119f180bu);
  /* 119f180b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f180d je 0x119f1827 */
  if (C.zf) goto L_119f1827;
  /* 119f180f push esi */
  push32((uint32_t)(ESI));
  /* 119f1810 call 0x119f1849 */
  push32(0x119f1815u); f_119f1849();
  /* 119f1815 pop ecx */
  ECX = (pop32());
  /* 119f1816 call dword ptr [0x119f4058] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4058))), 0x119f181cu);
  /* 119f181c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 119f1820 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1822 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 119f1824 pop eax */
  EAX = (pop32());
  /* 119f1825 pop esi */
  ESI = (pop32());
  /* 119f1826 ret  */
  ESPCHK(0x119f17d7u, _esp0);
  ESP += 4; return;
L_119f1827:;
  /* 119f1827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f1829 pop esi */
  ESI = (pop32());
  /* 119f182a ret  */
  ESPCHK(0x119f17d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000182b @ 0x119f182b (30 bytes, 8 insns) */
void f_119f182b(void) {
  FTRACE(0x119f182bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f182b call 0x119f21aa */
  push32(0x119f1830u); f_119f21aa();
  /* 119f1830 mov eax, dword ptr [0x119f5168] */
  EAX = (r32((uint32_t)(0x119f5168)));
  /* 119f1835 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1838 je 0x119f1848 */
  if (C.zf) goto L_119f1848;
  /* 119f183a push eax */
  push32((uint32_t)(EAX));
  /* 119f183b call dword ptr [0x119f4064] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4064))), 0x119f1841u);
  /* 119f1841 or dword ptr [0x119f5168], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x119f5168)))|(0xffffffffu); w32((uint32_t)(0x119f5168), (_r)); fl_logic(_r,32); }
L_119f1848:;
  /* 119f1848 ret  */
  ESPCHK(0x119f182bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001849 @ 0x119f1849 (19 bytes, 4 insns) */
void f_119f1849(void) {
  FTRACE(0x119f1849u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1849 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f184d mov dword ptr [eax + 0x50], 0x119f52e8 */
  w32((uint32_t)(EAX + 0x50), (0x119f52e8u));
  /* 119f1854 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 119f185b ret  */
  ESPCHK(0x119f1849u, _esp0);
  ESP += 4; return;
}

/* FUN_1000185c @ 0x119f185c (160 bytes, 62 insns) */
void f_119f185c(void) {
  FTRACE(0x119f185cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f185c mov eax, dword ptr [0x119f5168] */
  EAX = (r32((uint32_t)(0x119f5168)));
  /* 119f1861 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1864 je 0x119f18fb */
  if (C.zf) goto L_119f18fb;
  /* 119f186a push esi */
  push32((uint32_t)(ESI));
  /* 119f186b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 119f186f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1871 jne 0x119f1880 */
  if (!C.zf) goto L_119f1880;
  /* 119f1873 push eax */
  push32((uint32_t)(EAX));
  /* 119f1874 call dword ptr [0x119f4068] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4068))), 0x119f187au);
  /* 119f187a mov esi, eax */
  ESI = (EAX);
  /* 119f187c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f187e je 0x119f18ec */
  if (C.zf) goto L_119f18ec;
L_119f1880:;
  /* 119f1880 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 119f1883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1885 je 0x119f188e */
  if (C.zf) goto L_119f188e;
  /* 119f1887 push eax */
  push32((uint32_t)(EAX));
  /* 119f1888 call 0x119f2319 */
  push32(0x119f188du); f_119f2319();
  /* 119f188d pop ecx */
  ECX = (pop32());
L_119f188e:;
  /* 119f188e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 119f1891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1893 je 0x119f189c */
  if (C.zf) goto L_119f189c;
  /* 119f1895 push eax */
  push32((uint32_t)(EAX));
  /* 119f1896 call 0x119f2319 */
  push32(0x119f189bu); f_119f2319();
  /* 119f189b pop ecx */
  ECX = (pop32());
L_119f189c:;
  /* 119f189c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 119f189f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f18a1 je 0x119f18aa */
  if (C.zf) goto L_119f18aa;
  /* 119f18a3 push eax */
  push32((uint32_t)(EAX));
  /* 119f18a4 call 0x119f2319 */
  push32(0x119f18a9u); f_119f2319();
  /* 119f18a9 pop ecx */
  ECX = (pop32());
L_119f18aa:;
  /* 119f18aa mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 119f18ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f18af je 0x119f18b8 */
  if (C.zf) goto L_119f18b8;
  /* 119f18b1 push eax */
  push32((uint32_t)(EAX));
  /* 119f18b2 call 0x119f2319 */
  push32(0x119f18b7u); f_119f2319();
  /* 119f18b7 pop ecx */
  ECX = (pop32());
L_119f18b8:;
  /* 119f18b8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 119f18bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f18bd je 0x119f18c6 */
  if (C.zf) goto L_119f18c6;
  /* 119f18bf push eax */
  push32((uint32_t)(EAX));
  /* 119f18c0 call 0x119f2319 */
  push32(0x119f18c5u); f_119f2319();
  /* 119f18c5 pop ecx */
  ECX = (pop32());
L_119f18c6:;
  /* 119f18c6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 119f18c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f18cb je 0x119f18d4 */
  if (C.zf) goto L_119f18d4;
  /* 119f18cd push eax */
  push32((uint32_t)(EAX));
  /* 119f18ce call 0x119f2319 */
  push32(0x119f18d3u); f_119f2319();
  /* 119f18d3 pop ecx */
  ECX = (pop32());
L_119f18d4:;
  /* 119f18d4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 119f18d7 cmp eax, 0x119f52e8 */
  { uint32_t _a=(EAX),_b=(0x119f52e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f18dc je 0x119f18e5 */
  if (C.zf) goto L_119f18e5;
  /* 119f18de push eax */
  push32((uint32_t)(EAX));
  /* 119f18df call 0x119f2319 */
  push32(0x119f18e4u); f_119f2319();
  /* 119f18e4 pop ecx */
  ECX = (pop32());
L_119f18e5:;
  /* 119f18e5 push esi */
  push32((uint32_t)(ESI));
  /* 119f18e6 call 0x119f2319 */
  push32(0x119f18ebu); f_119f2319();
  /* 119f18eb pop ecx */
  ECX = (pop32());
L_119f18ec:;
  /* 119f18ec push 0 */
  push32((uint32_t)(0x0u));
  /* 119f18ee push dword ptr [0x119f5168] */
  push32((uint32_t)(r32((uint32_t)(0x119f5168))));
  /* 119f18f4 call dword ptr [0x119f405c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f405c))), 0x119f18fau);
  /* 119f18fa pop esi */
  ESI = (pop32());
L_119f18fb:;
  /* 119f18fb ret  */
  ESPCHK(0x119f185cu, _esp0);
  ESP += 4; return;
}

/* FUN_100018fc @ 0x119f18fc (444 bytes, 150 insns) */
void f_119f18fc(void) {
  FTRACE(0x119f18fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f18fc push ebp */
  push32((uint32_t)(EBP));
  /* 119f18fd mov ebp, esp */
  EBP = (ESP);
  /* 119f18ff sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f1902 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1903 push esi */
  push32((uint32_t)(ESI));
  /* 119f1904 push edi */
  push32((uint32_t)(EDI));
  /* 119f1905 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 119f190a call 0x119f2361 */
  push32(0x119f190fu); f_119f2361();
  /* 119f190f mov esi, eax */
  ESI = (EAX);
  /* 119f1911 pop ecx */
  ECX = (pop32());
  /* 119f1912 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1914 jne 0x119f191e */
  if (!C.zf) goto L_119f191e;
  /* 119f1916 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 119f1918 call 0x119f1686 */
  push32(0x119f191du); f_119f1686();
  /* 119f191d pop ecx */
  ECX = (pop32());
L_119f191e:;
  /* 119f191e mov dword ptr [0x119f5960], esi */
  w32((uint32_t)(0x119f5960), (ESI));
  /* 119f1924 mov dword ptr [0x119f5a60], 0x20 */
  w32((uint32_t)(0x119f5a60), (0x20u));
  /* 119f192e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_119f1934:;
  /* 119f1934 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1936 jae 0x119f1956 */
  if (!C.cf) goto L_119f1956;
  /* 119f1938 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 119f193c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 119f193f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 119f1943 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 119f1947 mov eax, dword ptr [0x119f5960] */
  EAX = (r32((uint32_t)(0x119f5960)));
  /* 119f194c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f194f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1954 jmp 0x119f1934 */
  goto L_119f1934;
L_119f1956:;
  /* 119f1956 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 119f1959 push eax */
  push32((uint32_t)(EAX));
  /* 119f195a call dword ptr [0x119f4078] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4078))), 0x119f1960u);
  /* 119f1960 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119f1965 je 0x119f1a3c */
  if (C.zf) goto L_119f1a3c;
  /* 119f196b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119f196e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1970 je 0x119f1a3c */
  if (C.zf) goto L_119f1a3c;
  /* 119f1976 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 119f1978 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 119f197b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 119f197e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119f1981 mov eax, 0x800 */
  EAX = (0x800u);
  /* 119f1986 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1988 jl 0x119f198c */
  if ((C.sf!=C.of)) goto L_119f198c;
  /* 119f198a mov edi, eax */
  EDI = (EAX);
L_119f198c:;
  /* 119f198c cmp dword ptr [0x119f5a60], edi */
  { uint32_t _a=(r32((uint32_t)(0x119f5a60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1992 jge 0x119f19ea */
  if ((C.sf==C.of)) goto L_119f19ea;
  /* 119f1994 mov esi, 0x119f5964 */
  ESI = (0x119f5964u);
L_119f1999:;
  /* 119f1999 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 119f199e call 0x119f2361 */
  push32(0x119f19a3u); f_119f2361();
  /* 119f19a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f19a5 pop ecx */
  ECX = (pop32());
  /* 119f19a6 je 0x119f19e4 */
  if (C.zf) goto L_119f19e4;
  /* 119f19a8 add dword ptr [0x119f5a60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x119f5a60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x119f5a60), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f19af mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 119f19b1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_119f19b7:;
  /* 119f19b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f19b9 jae 0x119f19d7 */
  if (!C.cf) goto L_119f19d7;
  /* 119f19bb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 119f19bf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 119f19c2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 119f19c6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 119f19ca mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 119f19cc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f19cf add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f19d5 jmp 0x119f19b7 */
  goto L_119f19b7;
L_119f19d7:;
  /* 119f19d7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f19da cmp dword ptr [0x119f5a60], edi */
  { uint32_t _a=(r32((uint32_t)(0x119f5a60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f19e0 jl 0x119f1999 */
  if ((C.sf!=C.of)) goto L_119f1999;
  /* 119f19e2 jmp 0x119f19ea */
  goto L_119f19ea;
L_119f19e4:;
  /* 119f19e4 mov edi, dword ptr [0x119f5a60] */
  EDI = (r32((uint32_t)(0x119f5a60)));
L_119f19ea:;
  /* 119f19ea xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119f19ec test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f19ee jle 0x119f1a3c */
  if ((C.zf||C.sf!=C.of)) goto L_119f1a3c;
L_119f19f0:;
  /* 119f19f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f19f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119f19f5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f19f8 je 0x119f1a32 */
  if (C.zf) goto L_119f1a32;
  /* 119f19fa mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 119f19fc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 119f19fe je 0x119f1a32 */
  if (C.zf) goto L_119f1a32;
  /* 119f1a00 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 119f1a02 jne 0x119f1a0f */
  if (!C.zf) goto L_119f1a0f;
  /* 119f1a04 push ecx */
  push32((uint32_t)(ECX));
  /* 119f1a05 call dword ptr [0x119f4004] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4004))), 0x119f1a0bu);
  /* 119f1a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1a0d je 0x119f1a32 */
  if (C.zf) goto L_119f1a32;
L_119f1a0f:;
  /* 119f1a0f mov ecx, esi */
  ECX = (ESI);
  /* 119f1a11 mov eax, esi */
  EAX = (ESI);
  /* 119f1a13 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119f1a16 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119f1a19 mov ecx, dword ptr [ecx*4 + 0x119f5960] */
  ECX = (r32((uint32_t)(ECX*4 + 0x119f5960)));
  /* 119f1a20 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 119f1a23 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 119f1a26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f1a29 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 119f1a2b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119f1a2d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 119f1a2f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_119f1a32:;
  /* 119f1a32 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f1a36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f1a37 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119f1a38 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1a3a jl 0x119f19f0 */
  if ((C.sf!=C.of)) goto L_119f19f0;
L_119f1a3c:;
  /* 119f1a3c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_119f1a3e:;
  /* 119f1a3e mov ecx, dword ptr [0x119f5960] */
  ECX = (r32((uint32_t)(0x119f5960)));
  /* 119f1a44 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 119f1a47 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1a4b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 119f1a4e jne 0x119f1a9d */
  if (!C.zf) goto L_119f1a9d;
  /* 119f1a50 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119f1a52 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 119f1a56 jne 0x119f1a5d */
  if (!C.zf) goto L_119f1a5d;
  /* 119f1a58 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 119f1a5a pop eax */
  EAX = (pop32());
  /* 119f1a5b jmp 0x119f1a67 */
  goto L_119f1a67;
L_119f1a5d:;
  /* 119f1a5d mov eax, ebx */
  EAX = (EBX);
  /* 119f1a5f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119f1a60 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119f1a62 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f1a64 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_119f1a67:;
  /* 119f1a67 push eax */
  push32((uint32_t)(EAX));
  /* 119f1a68 call dword ptr [0x119f4000] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4000))), 0x119f1a6eu);
  /* 119f1a6e mov edi, eax */
  EDI = (EAX);
  /* 119f1a70 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1a73 je 0x119f1a8c */
  if (C.zf) goto L_119f1a8c;
  /* 119f1a75 push edi */
  push32((uint32_t)(EDI));
  /* 119f1a76 call dword ptr [0x119f4004] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4004))), 0x119f1a7cu);
  /* 119f1a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1a7e je 0x119f1a8c */
  if (C.zf) goto L_119f1a8c;
  /* 119f1a80 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f1a85 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 119f1a87 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1a8a jne 0x119f1a92 */
  if (!C.zf) goto L_119f1a92;
L_119f1a8c:;
  /* 119f1a8c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 119f1a90 jmp 0x119f1aa1 */
  goto L_119f1aa1;
L_119f1a92:;
  /* 119f1a92 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1a95 jne 0x119f1aa1 */
  if (!C.zf) goto L_119f1aa1;
  /* 119f1a97 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 119f1a9b jmp 0x119f1aa1 */
  goto L_119f1aa1;
L_119f1a9d:;
  /* 119f1a9d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_119f1aa1:;
  /* 119f1aa1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119f1aa2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1aa5 jl 0x119f1a3e */
  if ((C.sf!=C.of)) goto L_119f1a3e;
  /* 119f1aa7 push dword ptr [0x119f5a60] */
  push32((uint32_t)(r32((uint32_t)(0x119f5a60))));
  /* 119f1aad call dword ptr [0x119f406c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f406c))), 0x119f1ab3u);
  /* 119f1ab3 pop edi */
  EDI = (pop32());
  /* 119f1ab4 pop esi */
  ESI = (pop32());
  /* 119f1ab5 pop ebx */
  EBX = (pop32());
  /* 119f1ab6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f1ab7 ret  */
  ESPCHK(0x119f18fcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab8 @ 0x119f1ab8 (84 bytes, 33 insns) */
void f_119f1ab8(void) {
  FTRACE(0x119f1ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ab9 push esi */
  push32((uint32_t)(ESI));
  /* 119f1aba push edi */
  push32((uint32_t)(EDI));
  /* 119f1abb mov esi, 0x119f5960 */
  ESI = (0x119f5960u);
L_119f1ac0:;
  /* 119f1ac0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119f1ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1ac4 je 0x119f1afd */
  if (C.zf) goto L_119f1afd;
  /* 119f1ac6 mov edi, eax */
  EDI = (EAX);
  /* 119f1ac8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1acd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1acf jae 0x119f1af2 */
  if (!C.cf) goto L_119f1af2;
  /* 119f1ad1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_119f1ad4:;
  /* 119f1ad4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1ad8 je 0x119f1ae1 */
  if (C.zf) goto L_119f1ae1;
  /* 119f1ada push ebx */
  push32((uint32_t)(EBX));
  /* 119f1adb call dword ptr [0x119f407c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f407c))), 0x119f1ae1u);
L_119f1ae1:;
  /* 119f1ae1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119f1ae3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1ae6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1aeb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1aee cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1af0 jb 0x119f1ad4 */
  if (C.cf) goto L_119f1ad4;
L_119f1af2:;
  /* 119f1af2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f1af4 call 0x119f2319 */
  push32(0x119f1af9u); f_119f2319();
  /* 119f1af9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 119f1afc pop ecx */
  ECX = (pop32());
L_119f1afd:;
  /* 119f1afd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1b00 cmp esi, 0x119f5a60 */
  { uint32_t _a=(ESI),_b=(0x119f5a60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1b06 jl 0x119f1ac0 */
  if ((C.sf!=C.of)) goto L_119f1ac0;
  /* 119f1b08 pop edi */
  EDI = (pop32());
  /* 119f1b09 pop esi */
  ESI = (pop32());
  /* 119f1b0a pop ebx */
  EBX = (pop32());
  /* 119f1b0b ret  */
  ESPCHK(0x119f1ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b0c @ 0x119f1b0c (185 bytes, 71 insns) */
void f_119f1b0c(void) {
  FTRACE(0x119f1b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1b0c push ebx */
  push32((uint32_t)(EBX));
  /* 119f1b0d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f1b0f cmp dword ptr [0x119f5a68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119f5a68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1b15 push esi */
  push32((uint32_t)(ESI));
  /* 119f1b16 push edi */
  push32((uint32_t)(EDI));
  /* 119f1b17 jne 0x119f1b1e */
  if (!C.zf) goto L_119f1b1e;
  /* 119f1b19 call 0x119f2933 */
  push32(0x119f1b1eu); f_119f2933();
L_119f1b1e:;
  /* 119f1b1e mov esi, dword ptr [0x119f5500] */
  ESI = (r32((uint32_t)(0x119f5500)));
  /* 119f1b24 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_119f1b26:;
  /* 119f1b26 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f1b28 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1b2a je 0x119f1b3e */
  if (C.zf) goto L_119f1b3e;
  /* 119f1b2c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1b2e je 0x119f1b31 */
  if (C.zf) goto L_119f1b31;
  /* 119f1b30 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_119f1b31:;
  /* 119f1b31 push esi */
  push32((uint32_t)(ESI));
  /* 119f1b32 call 0x119f24e0 */
  push32(0x119f1b37u); f_119f24e0();
  /* 119f1b37 pop ecx */
  ECX = (pop32());
  /* 119f1b38 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 119f1b3c jmp 0x119f1b26 */
  goto L_119f1b26;
L_119f1b3e:;
  /* 119f1b3e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 119f1b45 push eax */
  push32((uint32_t)(EAX));
  /* 119f1b46 call 0x119f2361 */
  push32(0x119f1b4bu); f_119f2361();
  /* 119f1b4b mov esi, eax */
  ESI = (EAX);
  /* 119f1b4d pop ecx */
  ECX = (pop32());
  /* 119f1b4e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1b50 mov dword ptr [0x119f5530], esi */
  w32((uint32_t)(0x119f5530), (ESI));
  /* 119f1b56 jne 0x119f1b60 */
  if (!C.zf) goto L_119f1b60;
  /* 119f1b58 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f1b5a call 0x119f1686 */
  push32(0x119f1b5fu); f_119f1686();
  /* 119f1b5f pop ecx */
  ECX = (pop32());
L_119f1b60:;
  /* 119f1b60 mov edi, dword ptr [0x119f5500] */
  EDI = (r32((uint32_t)(0x119f5500)));
  /* 119f1b66 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1b68 je 0x119f1ba3 */
  if (C.zf) goto L_119f1ba3;
  /* 119f1b6a push ebp */
  push32((uint32_t)(EBP));
L_119f1b6b:;
  /* 119f1b6b push edi */
  push32((uint32_t)(EDI));
  /* 119f1b6c call 0x119f24e0 */
  push32(0x119f1b71u); f_119f24e0();
  /* 119f1b71 mov ebp, eax */
  EBP = (EAX);
  /* 119f1b73 pop ecx */
  ECX = (pop32());
  /* 119f1b74 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 119f1b75 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1b78 je 0x119f1b9c */
  if (C.zf) goto L_119f1b9c;
  /* 119f1b7a push ebp */
  push32((uint32_t)(EBP));
  /* 119f1b7b call 0x119f2361 */
  push32(0x119f1b80u); f_119f2361();
  /* 119f1b80 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1b82 pop ecx */
  ECX = (pop32());
  /* 119f1b83 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 119f1b85 jne 0x119f1b8f */
  if (!C.zf) goto L_119f1b8f;
  /* 119f1b87 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f1b89 call 0x119f1686 */
  push32(0x119f1b8eu); f_119f1686();
  /* 119f1b8e pop ecx */
  ECX = (pop32());
L_119f1b8f:;
  /* 119f1b8f push edi */
  push32((uint32_t)(EDI));
  /* 119f1b90 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f1b92 call 0x119f23f0 */
  push32(0x119f1b97u); f_119f23f0();
  /* 119f1b97 pop ecx */
  ECX = (pop32());
  /* 119f1b98 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1b9b pop ecx */
  ECX = (pop32());
L_119f1b9c:;
  /* 119f1b9c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1b9e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1ba0 jne 0x119f1b6b */
  if (!C.zf) goto L_119f1b6b;
  /* 119f1ba2 pop ebp */
  EBP = (pop32());
L_119f1ba3:;
  /* 119f1ba3 push dword ptr [0x119f5500] */
  push32((uint32_t)(r32((uint32_t)(0x119f5500))));
  /* 119f1ba9 call 0x119f2319 */
  push32(0x119f1baeu); f_119f2319();
  /* 119f1bae pop ecx */
  ECX = (pop32());
  /* 119f1baf mov dword ptr [0x119f5500], ebx */
  w32((uint32_t)(0x119f5500), (EBX));
  /* 119f1bb5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 119f1bb7 pop edi */
  EDI = (pop32());
  /* 119f1bb8 pop esi */
  ESI = (pop32());
  /* 119f1bb9 mov dword ptr [0x119f5a64], 1 */
  w32((uint32_t)(0x119f5a64), (0x1u));
  /* 119f1bc3 pop ebx */
  EBX = (pop32());
  /* 119f1bc4 ret  */
  ESPCHK(0x119f1b0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bc5 @ 0x119f1bc5 (153 bytes, 62 insns) */
void f_119f1bc5(void) {
  FTRACE(0x119f1bc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1bc5 push ebp */
  push32((uint32_t)(EBP));
  /* 119f1bc6 mov ebp, esp */
  EBP = (ESP);
  /* 119f1bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 119f1bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 119f1bca push ebx */
  push32((uint32_t)(EBX));
  /* 119f1bcb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f1bcd cmp dword ptr [0x119f5a68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119f5a68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1bd3 push esi */
  push32((uint32_t)(ESI));
  /* 119f1bd4 push edi */
  push32((uint32_t)(EDI));
  /* 119f1bd5 jne 0x119f1bdc */
  if (!C.zf) goto L_119f1bdc;
  /* 119f1bd7 call 0x119f2933 */
  push32(0x119f1bdcu); f_119f2933();
L_119f1bdc:;
  /* 119f1bdc mov esi, 0x119f5554 */
  ESI = (0x119f5554u);
  /* 119f1be1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 119f1be6 push esi */
  push32((uint32_t)(ESI));
  /* 119f1be7 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1be8 call dword ptr [0x119f4080] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4080))), 0x119f1beeu);
  /* 119f1bee mov eax, dword ptr [0x119f5a78] */
  EAX = (r32((uint32_t)(0x119f5a78)));
  /* 119f1bf3 mov dword ptr [0x119f5540], esi */
  w32((uint32_t)(0x119f5540), (ESI));
  /* 119f1bf9 mov edi, esi */
  EDI = (ESI);
  /* 119f1bfb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1bfd je 0x119f1c01 */
  if (C.zf) goto L_119f1c01;
  /* 119f1bff mov edi, eax */
  EDI = (EAX);
L_119f1c01:;
  /* 119f1c01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119f1c04 push eax */
  push32((uint32_t)(EAX));
  /* 119f1c05 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 119f1c08 push eax */
  push32((uint32_t)(EAX));
  /* 119f1c09 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1c0a push ebx */
  push32((uint32_t)(EBX));
  /* 119f1c0b push edi */
  push32((uint32_t)(EDI));
  /* 119f1c0c call 0x119f1c5e */
  push32(0x119f1c11u); f_119f1c5e();
  /* 119f1c11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119f1c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f1c17 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 119f1c1a push eax */
  push32((uint32_t)(EAX));
  /* 119f1c1b call 0x119f2361 */
  push32(0x119f1c20u); f_119f2361();
  /* 119f1c20 mov esi, eax */
  ESI = (EAX);
  /* 119f1c22 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1c25 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1c27 jne 0x119f1c31 */
  if (!C.zf) goto L_119f1c31;
  /* 119f1c29 push 8 */
  push32((uint32_t)(0x8u));
  /* 119f1c2b call 0x119f1686 */
  push32(0x119f1c30u); f_119f1686();
  /* 119f1c30 pop ecx */
  ECX = (pop32());
L_119f1c31:;
  /* 119f1c31 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119f1c34 push eax */
  push32((uint32_t)(EAX));
  /* 119f1c35 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 119f1c38 push eax */
  push32((uint32_t)(EAX));
  /* 119f1c39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f1c3c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 119f1c3f push eax */
  push32((uint32_t)(EAX));
  /* 119f1c40 push esi */
  push32((uint32_t)(ESI));
  /* 119f1c41 push edi */
  push32((uint32_t)(EDI));
  /* 119f1c42 call 0x119f1c5e */
  push32(0x119f1c47u); f_119f1c5e();
  /* 119f1c47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f1c4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1c4d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119f1c4e mov dword ptr [0x119f5528], esi */
  w32((uint32_t)(0x119f5528), (ESI));
  /* 119f1c54 pop edi */
  EDI = (pop32());
  /* 119f1c55 pop esi */
  ESI = (pop32());
  /* 119f1c56 mov dword ptr [0x119f5524], eax */
  w32((uint32_t)(0x119f5524), (EAX));
  /* 119f1c5b pop ebx */
  EBX = (pop32());
  /* 119f1c5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f1c5d ret  */
  ESPCHK(0x119f1bc5u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c5e @ 0x119f1c5e (436 bytes, 187 insns) */
void f_119f1c5e(void) {
  FTRACE(0x119f1c5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1c5e push ebp */
  push32((uint32_t)(EBP));
  /* 119f1c5f mov ebp, esp */
  EBP = (ESP);
  /* 119f1c61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119f1c64 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119f1c67 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1c68 push esi */
  push32((uint32_t)(ESI));
  /* 119f1c69 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 119f1c6c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 119f1c6f push edi */
  push32((uint32_t)(EDI));
  /* 119f1c70 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 119f1c73 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 119f1c79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f1c7c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f1c7e je 0x119f1c88 */
  if (C.zf) goto L_119f1c88;
  /* 119f1c80 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 119f1c82 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1c85 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_119f1c88:;
  /* 119f1c88 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1c8b jne 0x119f1cd1 */
  if (!C.zf) goto L_119f1cd1;
L_119f1c8d:;
  /* 119f1c8d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 119f1c90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1c91 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1c94 je 0x119f1cbf */
  if (C.zf) goto L_119f1cbf;
  /* 119f1c96 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f1c98 je 0x119f1cbf */
  if (C.zf) goto L_119f1cbf;
  /* 119f1c9a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 119f1c9d test byte ptr [edx + 0x119f5841], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x119f5841)))&(0x4u); fl_logic(_r,8); }
  /* 119f1ca4 je 0x119f1cb2 */
  if (C.zf) goto L_119f1cb2;
  /* 119f1ca6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1ca8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1caa je 0x119f1cb2 */
  if (C.zf) goto L_119f1cb2;
  /* 119f1cac mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1cae mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 119f1cb0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f1cb1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119f1cb2:;
  /* 119f1cb2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1cb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1cb6 je 0x119f1c8d */
  if (C.zf) goto L_119f1c8d;
  /* 119f1cb8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1cba mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 119f1cbc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f1cbd jmp 0x119f1c8d */
  goto L_119f1c8d;
L_119f1cbf:;
  /* 119f1cbf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1cc1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1cc3 je 0x119f1cc9 */
  if (C.zf) goto L_119f1cc9;
  /* 119f1cc5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 119f1cc8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_119f1cc9:;
  /* 119f1cc9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1ccc jne 0x119f1d14 */
  if (!C.zf) goto L_119f1d14;
  /* 119f1cce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1ccf jmp 0x119f1d14 */
  goto L_119f1d14;
L_119f1cd1:;
  /* 119f1cd1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1cd3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1cd5 je 0x119f1cdc */
  if (C.zf) goto L_119f1cdc;
  /* 119f1cd7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1cd9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 119f1cdb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_119f1cdc:;
  /* 119f1cdc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1cde inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1cdf movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 119f1ce2 test byte ptr [ebx + 0x119f5841], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x119f5841)))&(0x4u); fl_logic(_r,8); }
  /* 119f1ce9 je 0x119f1cf7 */
  if (C.zf) goto L_119f1cf7;
  /* 119f1ceb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1ced test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1cef je 0x119f1cf6 */
  if (C.zf) goto L_119f1cf6;
  /* 119f1cf1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 119f1cf3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 119f1cf5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_119f1cf6:;
  /* 119f1cf6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119f1cf7:;
  /* 119f1cf7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1cfa je 0x119f1d05 */
  if (C.zf) goto L_119f1d05;
  /* 119f1cfc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f1cfe je 0x119f1d09 */
  if (C.zf) goto L_119f1d09;
  /* 119f1d00 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d03 jne 0x119f1cd1 */
  if (!C.zf) goto L_119f1cd1;
L_119f1d05:;
  /* 119f1d05 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f1d07 jne 0x119f1d0c */
  if (!C.zf) goto L_119f1d0c;
L_119f1d09:;
  /* 119f1d09 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119f1d0a jmp 0x119f1d14 */
  goto L_119f1d14;
L_119f1d0c:;
  /* 119f1d0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1d0e je 0x119f1d14 */
  if (C.zf) goto L_119f1d14;
  /* 119f1d10 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_119f1d14:;
  /* 119f1d14 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_119f1d18:;
  /* 119f1d18 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d1b je 0x119f1e01 */
  if (C.zf) goto L_119f1e01;
L_119f1d21:;
  /* 119f1d21 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1d23 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d26 je 0x119f1d2d */
  if (C.zf) goto L_119f1d2d;
  /* 119f1d28 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d2b jne 0x119f1d30 */
  if (!C.zf) goto L_119f1d30;
L_119f1d2d:;
  /* 119f1d2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1d2e jmp 0x119f1d21 */
  goto L_119f1d21;
L_119f1d30:;
  /* 119f1d30 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d33 je 0x119f1e01 */
  if (C.zf) goto L_119f1e01;
  /* 119f1d39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f1d3b je 0x119f1d45 */
  if (C.zf) goto L_119f1d45;
  /* 119f1d3d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 119f1d3f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1d42 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_119f1d45:;
  /* 119f1d45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119f1d48 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_119f1d4a:;
  /* 119f1d4a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 119f1d51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_119f1d53:;
  /* 119f1d53 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d56 jne 0x119f1d5c */
  if (!C.zf) goto L_119f1d5c;
  /* 119f1d58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1d59 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119f1d5a jmp 0x119f1d53 */
  goto L_119f1d53;
L_119f1d5c:;
  /* 119f1d5c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d5f jne 0x119f1d8d */
  if (!C.zf) goto L_119f1d8d;
  /* 119f1d61 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 119f1d64 jne 0x119f1d8b */
  if (!C.zf) goto L_119f1d8b;
  /* 119f1d66 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f1d68 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1d6b je 0x119f1d7a */
  if (C.zf) goto L_119f1d7a;
  /* 119f1d6d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1d71 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 119f1d74 jne 0x119f1d7a */
  if (!C.zf) goto L_119f1d7a;
  /* 119f1d76 mov eax, edx */
  EAX = (EDX);
  /* 119f1d78 jmp 0x119f1d7d */
  goto L_119f1d7d;
L_119f1d7a:;
  /* 119f1d7a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_119f1d7d:;
  /* 119f1d7d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 119f1d80 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119f1d82 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1d85 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 119f1d88 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_119f1d8b:;
  /* 119f1d8b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_119f1d8d:;
  /* 119f1d8d mov edx, ebx */
  EDX = (EBX);
  /* 119f1d8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119f1d90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119f1d92 je 0x119f1da2 */
  if (C.zf) goto L_119f1da2;
  /* 119f1d94 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_119f1d95:;
  /* 119f1d95 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1d97 je 0x119f1d9d */
  if (C.zf) goto L_119f1d9d;
  /* 119f1d99 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 119f1d9c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_119f1d9d:;
  /* 119f1d9d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1d9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119f1da0 jne 0x119f1d95 */
  if (!C.zf) goto L_119f1d95;
L_119f1da2:;
  /* 119f1da2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1da4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f1da6 je 0x119f1df2 */
  if (C.zf) goto L_119f1df2;
  /* 119f1da8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1dac jne 0x119f1db8 */
  if (!C.zf) goto L_119f1db8;
  /* 119f1dae cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1db1 je 0x119f1df2 */
  if (C.zf) goto L_119f1df2;
  /* 119f1db3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1db6 je 0x119f1df2 */
  if (C.zf) goto L_119f1df2;
L_119f1db8:;
  /* 119f1db8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1dbc je 0x119f1dec */
  if (C.zf) goto L_119f1dec;
  /* 119f1dbe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1dc0 je 0x119f1ddb */
  if (C.zf) goto L_119f1ddb;
  /* 119f1dc2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 119f1dc5 test byte ptr [ebx + 0x119f5841], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x119f5841)))&(0x4u); fl_logic(_r,8); }
  /* 119f1dcc je 0x119f1dd4 */
  if (C.zf) goto L_119f1dd4;
  /* 119f1dce mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 119f1dd0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f1dd1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1dd2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_119f1dd4:;
  /* 119f1dd4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119f1dd6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 119f1dd8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f1dd9 jmp 0x119f1dea */
  goto L_119f1dea;
L_119f1ddb:;
  /* 119f1ddb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 119f1dde test byte ptr [edx + 0x119f5841], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x119f5841)))&(0x4u); fl_logic(_r,8); }
  /* 119f1de5 je 0x119f1dea */
  if (C.zf) goto L_119f1dea;
  /* 119f1de7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1de8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_119f1dea:;
  /* 119f1dea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_119f1dec:;
  /* 119f1dec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1ded jmp 0x119f1d4a */
  goto L_119f1d4a;
L_119f1df2:;
  /* 119f1df2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f1df4 je 0x119f1dfa */
  if (C.zf) goto L_119f1dfa;
  /* 119f1df6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 119f1df9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_119f1dfa:;
  /* 119f1dfa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 119f1dfc jmp 0x119f1d18 */
  goto L_119f1d18;
L_119f1e01:;
  /* 119f1e01 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f1e03 je 0x119f1e08 */
  if (C.zf) goto L_119f1e08;
  /* 119f1e05 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_119f1e08:;
  /* 119f1e08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119f1e0b pop edi */
  EDI = (pop32());
  /* 119f1e0c pop esi */
  ESI = (pop32());
  /* 119f1e0d pop ebx */
  EBX = (pop32());
  /* 119f1e0e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 119f1e10 pop ebp */
  EBP = (pop32());
  /* 119f1e11 ret  */
  ESPCHK(0x119f1c5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e12 @ 0x119f1e12 (306 bytes, 132 insns) */
void f_119f1e12(void) {
  FTRACE(0x119f1e12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1e12 push ecx */
  push32((uint32_t)(ECX));
  /* 119f1e13 push ecx */
  push32((uint32_t)(ECX));
  /* 119f1e14 mov eax, dword ptr [0x119f5658] */
  EAX = (r32((uint32_t)(0x119f5658)));
  /* 119f1e19 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1e1a push ebp */
  push32((uint32_t)(EBP));
  /* 119f1e1b mov ebp, dword ptr [0x119f4094] */
  EBP = (r32((uint32_t)(0x119f4094)));
  /* 119f1e21 push esi */
  push32((uint32_t)(ESI));
  /* 119f1e22 push edi */
  push32((uint32_t)(EDI));
  /* 119f1e23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f1e25 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119f1e27 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f1e29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1e2b jne 0x119f1e60 */
  if (!C.zf) goto L_119f1e60;
  /* 119f1e2d call ebp */
  call_ind((uint32_t)(EBP), 0x119f1e2fu);
  /* 119f1e2f mov esi, eax */
  ESI = (EAX);
  /* 119f1e31 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1e33 je 0x119f1e41 */
  if (C.zf) goto L_119f1e41;
  /* 119f1e35 mov dword ptr [0x119f5658], 1 */
  w32((uint32_t)(0x119f5658), (0x1u));
  /* 119f1e3f jmp 0x119f1e69 */
  goto L_119f1e69;
L_119f1e41:;
  /* 119f1e41 call dword ptr [0x119f4090] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4090))), 0x119f1e47u);
  /* 119f1e47 mov edi, eax */
  EDI = (EAX);
  /* 119f1e49 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1e4b je 0x119f1f3b */
  if (C.zf) goto L_119f1f3b;
  /* 119f1e51 mov dword ptr [0x119f5658], 2 */
  w32((uint32_t)(0x119f5658), (0x2u));
  /* 119f1e5b jmp 0x119f1eef */
  goto L_119f1eef;
L_119f1e60:;
  /* 119f1e60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1e63 jne 0x119f1eea */
  if (!C.zf) goto L_119f1eea;
L_119f1e69:;
  /* 119f1e69 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1e6b jne 0x119f1e79 */
  if (!C.zf) goto L_119f1e79;
  /* 119f1e6d call ebp */
  call_ind((uint32_t)(EBP), 0x119f1e6fu);
  /* 119f1e6f mov esi, eax */
  ESI = (EAX);
  /* 119f1e71 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1e73 je 0x119f1f3b */
  if (C.zf) goto L_119f1f3b;
L_119f1e79:;
  /* 119f1e79 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119f1e7c mov eax, esi */
  EAX = (ESI);
  /* 119f1e7e je 0x119f1e8e */
  if (C.zf) goto L_119f1e8e;
L_119f1e80:;
  /* 119f1e80 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1e81 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1e82 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119f1e85 jne 0x119f1e80 */
  if (!C.zf) goto L_119f1e80;
  /* 119f1e87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1e88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1e89 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119f1e8c jne 0x119f1e80 */
  if (!C.zf) goto L_119f1e80;
L_119f1e8e:;
  /* 119f1e8e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f1e90 mov edi, dword ptr [0x119f408c] */
  EDI = (r32((uint32_t)(0x119f408c)));
  /* 119f1e96 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119f1e98 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1e99 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1e9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1e9b push ebx */
  push32((uint32_t)(EBX));
  /* 119f1e9c push ebx */
  push32((uint32_t)(EBX));
  /* 119f1e9d push eax */
  push32((uint32_t)(EAX));
  /* 119f1e9e push esi */
  push32((uint32_t)(ESI));
  /* 119f1e9f push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ea1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 119f1ea5 call edi */
  call_ind((uint32_t)(EDI), 0x119f1ea7u);
  /* 119f1ea7 mov ebp, eax */
  EBP = (EAX);
  /* 119f1ea9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1eab je 0x119f1edf */
  if (C.zf) goto L_119f1edf;
  /* 119f1ead push ebp */
  push32((uint32_t)(EBP));
  /* 119f1eae call 0x119f2361 */
  push32(0x119f1eb3u); f_119f2361();
  /* 119f1eb3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1eb5 pop ecx */
  ECX = (pop32());
  /* 119f1eb6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 119f1eba je 0x119f1edf */
  if (C.zf) goto L_119f1edf;
  /* 119f1ebc push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ebd push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ebe push ebp */
  push32((uint32_t)(EBP));
  /* 119f1ebf push eax */
  push32((uint32_t)(EAX));
  /* 119f1ec0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 119f1ec4 push esi */
  push32((uint32_t)(ESI));
  /* 119f1ec5 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1ec7 call edi */
  call_ind((uint32_t)(EDI), 0x119f1ec9u);
  /* 119f1ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1ecb jne 0x119f1edb */
  if (!C.zf) goto L_119f1edb;
  /* 119f1ecd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 119f1ed1 call 0x119f2319 */
  push32(0x119f1ed6u); f_119f2319();
  /* 119f1ed6 pop ecx */
  ECX = (pop32());
  /* 119f1ed7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_119f1edb:;
  /* 119f1edb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_119f1edf:;
  /* 119f1edf push esi */
  push32((uint32_t)(ESI));
  /* 119f1ee0 call dword ptr [0x119f4088] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4088))), 0x119f1ee6u);
  /* 119f1ee6 mov eax, ebx */
  EAX = (EBX);
  /* 119f1ee8 jmp 0x119f1f3d */
  goto L_119f1f3d;
L_119f1eea:;
  /* 119f1eea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1eed jne 0x119f1f3b */
  if (!C.zf) goto L_119f1f3b;
L_119f1eef:;
  /* 119f1eef cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1ef1 jne 0x119f1eff */
  if (!C.zf) goto L_119f1eff;
  /* 119f1ef3 call dword ptr [0x119f4090] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4090))), 0x119f1ef9u);
  /* 119f1ef9 mov edi, eax */
  EDI = (EAX);
  /* 119f1efb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1efd je 0x119f1f3b */
  if (C.zf) goto L_119f1f3b;
L_119f1eff:;
  /* 119f1eff cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1f01 mov eax, edi */
  EAX = (EDI);
  /* 119f1f03 je 0x119f1f0f */
  if (C.zf) goto L_119f1f0f;
L_119f1f05:;
  /* 119f1f05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1f06 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1f08 jne 0x119f1f05 */
  if (!C.zf) goto L_119f1f05;
  /* 119f1f0a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1f0b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f1f0d jne 0x119f1f05 */
  if (!C.zf) goto L_119f1f05;
L_119f1f0f:;
  /* 119f1f0f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f1f11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f1f12 mov ebp, eax */
  EBP = (EAX);
  /* 119f1f14 push ebp */
  push32((uint32_t)(EBP));
  /* 119f1f15 call 0x119f2361 */
  push32(0x119f1f1au); f_119f2361();
  /* 119f1f1a mov esi, eax */
  ESI = (EAX);
  /* 119f1f1c pop ecx */
  ECX = (pop32());
  /* 119f1f1d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1f1f jne 0x119f1f25 */
  if (!C.zf) goto L_119f1f25;
  /* 119f1f21 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119f1f23 jmp 0x119f1f30 */
  goto L_119f1f30;
L_119f1f25:;
  /* 119f1f25 push ebp */
  push32((uint32_t)(EBP));
  /* 119f1f26 push edi */
  push32((uint32_t)(EDI));
  /* 119f1f27 push esi */
  push32((uint32_t)(ESI));
  /* 119f1f28 call 0x119f2950 */
  push32(0x119f1f2du); f_119f2950();
  /* 119f1f2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f1f30:;
  /* 119f1f30 push edi */
  push32((uint32_t)(EDI));
  /* 119f1f31 call dword ptr [0x119f4084] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4084))), 0x119f1f37u);
  /* 119f1f37 mov eax, esi */
  EAX = (ESI);
  /* 119f1f39 jmp 0x119f1f3d */
  goto L_119f1f3d;
L_119f1f3b:;
  /* 119f1f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119f1f3d:;
  /* 119f1f3d pop edi */
  EDI = (pop32());
  /* 119f1f3e pop esi */
  ESI = (pop32());
  /* 119f1f3f pop ebp */
  EBP = (pop32());
  /* 119f1f40 pop ebx */
  EBX = (pop32());
  /* 119f1f41 pop ecx */
  ECX = (pop32());
  /* 119f1f42 pop ecx */
  ECX = (pop32());
  /* 119f1f43 ret  */
  ESPCHK(0x119f1e12u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f44 @ 0x119f1f44 (60 bytes, 20 insns) */
void f_119f1f44(void) {
  FTRACE(0x119f1f44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f1f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1f48 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1f4c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119f1f51 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 119f1f54 push eax */
  push32((uint32_t)(EAX));
  /* 119f1f55 call dword ptr [0x119f409c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f409c))), 0x119f1f5bu);
  /* 119f1f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1f5d mov dword ptr [0x119f5948], eax */
  w32((uint32_t)(0x119f5948), (EAX));
  /* 119f1f62 je 0x119f1f79 */
  if (C.zf) goto L_119f1f79;
  /* 119f1f64 call 0x119f2c85 */
  push32(0x119f1f69u); f_119f2c85();
  /* 119f1f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f1f6b jne 0x119f1f7c */
  if (!C.zf) goto L_119f1f7c;
  /* 119f1f6d push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f1f73 call dword ptr [0x119f4098] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4098))), 0x119f1f79u);
L_119f1f79:;
  /* 119f1f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f1f7b ret  */
  ESPCHK(0x119f1f44u, _esp0);
  ESP += 4; return;
L_119f1f7c:;
  /* 119f1f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 119f1f7e pop eax */
  EAX = (pop32());
  /* 119f1f7f ret  */
  ESPCHK(0x119f1f44u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f80 @ 0x119f1f80 (117 bytes, 38 insns) */
void f_119f1f80(void) {
  FTRACE(0x119f1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1f80 push ebx */
  push32((uint32_t)(EBX));
  /* 119f1f81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f1f83 cmp dword ptr [0x119f5710], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119f5710))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1f89 push ebp */
  push32((uint32_t)(EBP));
  /* 119f1f8a mov ebp, dword ptr [0x119f40a4] */
  EBP = (r32((uint32_t)(0x119f40a4)));
  /* 119f1f90 jle 0x119f1fd6 */
  if ((C.zf||C.sf!=C.of)) goto L_119f1fd6;
  /* 119f1f92 mov eax, dword ptr [0x119f5714] */
  EAX = (r32((uint32_t)(0x119f5714)));
  /* 119f1f97 push esi */
  push32((uint32_t)(ESI));
  /* 119f1f98 push edi */
  push32((uint32_t)(EDI));
  /* 119f1f99 mov edi, dword ptr [0x119f40a0] */
  EDI = (r32((uint32_t)(0x119f40a0)));
  /* 119f1f9f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_119f1fa2:;
  /* 119f1fa2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119f1fa7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 119f1fac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f1fae call edi */
  call_ind((uint32_t)(EDI), 0x119f1fb0u);
  /* 119f1fb0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119f1fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1fb7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f1fb9 call edi */
  call_ind((uint32_t)(EDI), 0x119f1fbbu);
  /* 119f1fbb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 119f1fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1fc0 push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f1fc6 call ebp */
  call_ind((uint32_t)(EBP), 0x119f1fc8u);
  /* 119f1fc8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f1fcb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119f1fcc cmp ebx, dword ptr [0x119f5710] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x119f5710))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1fd2 jl 0x119f1fa2 */
  if ((C.sf!=C.of)) goto L_119f1fa2;
  /* 119f1fd4 pop edi */
  EDI = (pop32());
  /* 119f1fd5 pop esi */
  ESI = (pop32());
L_119f1fd6:;
  /* 119f1fd6 push dword ptr [0x119f5714] */
  push32((uint32_t)(r32((uint32_t)(0x119f5714))));
  /* 119f1fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 119f1fde push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f1fe4 call ebp */
  call_ind((uint32_t)(EBP), 0x119f1fe6u);
  /* 119f1fe6 push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f1fec call dword ptr [0x119f4098] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4098))), 0x119f1ff2u);
  /* 119f1ff2 pop ebp */
  EBP = (pop32());
  /* 119f1ff3 pop ebx */
  EBX = (pop32());
  /* 119f1ff4 ret  */
  ESPCHK(0x119f1f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff5 @ 0x119f1ff5 (57 bytes, 18 insns) */
void f_119f1ff5(void) {
  FTRACE(0x119f1ff5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f1ff5 mov eax, dword ptr [0x119f5508] */
  EAX = (r32((uint32_t)(0x119f5508)));
  /* 119f1ffa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f1ffd je 0x119f200c */
  if (C.zf) goto L_119f200c;
  /* 119f1fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2001 jne 0x119f202d */
  if (!C.zf) goto L_119f202d;
  /* 119f2003 cmp dword ptr [0x119f550c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119f550c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f200a jne 0x119f202d */
  if (!C.zf) goto L_119f202d;
L_119f200c:;
  /* 119f200c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 119f2011 call 0x119f202e */
  push32(0x119f2016u); f_119f202e();
  /* 119f2016 mov eax, dword ptr [0x119f565c] */
  EAX = (r32((uint32_t)(0x119f565c)));
  /* 119f201b pop ecx */
  ECX = (pop32());
  /* 119f201c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f201e je 0x119f2022 */
  if (C.zf) goto L_119f2022;
  /* 119f2020 call eax */
  call_ind((uint32_t)(EAX), 0x119f2022u);
L_119f2022:;
  /* 119f2022 push 0xff */
  push32((uint32_t)(0xffu));
  /* 119f2027 call 0x119f202e */
  push32(0x119f202cu); f_119f202e();
  /* 119f202c pop ecx */
  ECX = (pop32());
L_119f202d:;
  /* 119f202d ret  */
  ESPCHK(0x119f1ff5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000202e @ 0x119f202e (339 bytes, 100 insns) */
void f_119f202e(void) {
  FTRACE(0x119f202eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f202e push ebp */
  push32((uint32_t)(EBP));
  /* 119f202f mov ebp, esp */
  EBP = (ESP);
  /* 119f2031 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f203a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119f203c mov eax, 0x119f5198 */
  EAX = (0x119f5198u);
L_119f2041:;
  /* 119f2041 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2043 je 0x119f2050 */
  if (C.zf) goto L_119f2050;
  /* 119f2045 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2048 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f2049 cmp eax, 0x119f5228 */
  { uint32_t _a=(EAX),_b=(0x119f5228u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f204e jl 0x119f2041 */
  if ((C.sf!=C.of)) goto L_119f2041;
L_119f2050:;
  /* 119f2050 push esi */
  push32((uint32_t)(ESI));
  /* 119f2051 mov esi, ecx */
  ESI = (ECX);
  /* 119f2053 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 119f2056 cmp edx, dword ptr [esi + 0x119f5198] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x119f5198))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f205c jne 0x119f217e */
  if (!C.zf) goto L_119f217e;
  /* 119f2062 mov eax, dword ptr [0x119f5508] */
  EAX = (r32((uint32_t)(0x119f5508)));
  /* 119f2067 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f206a je 0x119f2158 */
  if (C.zf) goto L_119f2158;
  /* 119f2070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2072 jne 0x119f2081 */
  if (!C.zf) goto L_119f2081;
  /* 119f2074 cmp dword ptr [0x119f550c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119f550c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f207b je 0x119f2158 */
  if (C.zf) goto L_119f2158;
L_119f2081:;
  /* 119f2081 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2087 je 0x119f217e */
  if (C.zf) goto L_119f217e;
  /* 119f208d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 119f2093 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 119f2098 push eax */
  push32((uint32_t)(EAX));
  /* 119f2099 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f209b call dword ptr [0x119f4080] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4080))), 0x119f20a1u);
  /* 119f20a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f20a3 jne 0x119f20b8 */
  if (!C.zf) goto L_119f20b8;
  /* 119f20a5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 119f20ab push 0x119f43e0 */
  push32((uint32_t)(0x119f43e0u));
  /* 119f20b0 push eax */
  push32((uint32_t)(EAX));
  /* 119f20b1 call 0x119f23f0 */
  push32(0x119f20b6u); f_119f23f0();
  /* 119f20b6 pop ecx */
  ECX = (pop32());
  /* 119f20b7 pop ecx */
  ECX = (pop32());
L_119f20b8:;
  /* 119f20b8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 119f20be push edi */
  push32((uint32_t)(EDI));
  /* 119f20bf push eax */
  push32((uint32_t)(EAX));
  /* 119f20c0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 119f20c6 call 0x119f24e0 */
  push32(0x119f20cbu); f_119f24e0();
  /* 119f20cb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f20cc pop ecx */
  ECX = (pop32());
  /* 119f20cd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f20d0 jbe 0x119f20fb */
  if ((C.cf||C.zf)) goto L_119f20fb;
  /* 119f20d2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 119f20d8 push eax */
  push32((uint32_t)(EAX));
  /* 119f20d9 call 0x119f24e0 */
  push32(0x119f20deu); f_119f24e0();
  /* 119f20de mov edi, eax */
  EDI = (EAX);
  /* 119f20e0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 119f20e6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f20e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 119f20eb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f20ed push 0x119f43dc */
  push32((uint32_t)(0x119f43dcu));
  /* 119f20f2 push edi */
  push32((uint32_t)(EDI));
  /* 119f20f3 call 0x119f3560 */
  push32(0x119f20f8u); f_119f3560();
  /* 119f20f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f20fb:;
  /* 119f20fb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119f2101 push 0x119f43c0 */
  push32((uint32_t)(0x119f43c0u));
  /* 119f2106 push eax */
  push32((uint32_t)(EAX));
  /* 119f2107 call 0x119f23f0 */
  push32(0x119f210cu); f_119f23f0();
  /* 119f210c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119f2112 push edi */
  push32((uint32_t)(EDI));
  /* 119f2113 push eax */
  push32((uint32_t)(EAX));
  /* 119f2114 call 0x119f2400 */
  push32(0x119f2119u); f_119f2400();
  /* 119f2119 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119f211f push 0x119f43bc */
  push32((uint32_t)(0x119f43bcu));
  /* 119f2124 push eax */
  push32((uint32_t)(EAX));
  /* 119f2125 call 0x119f2400 */
  push32(0x119f212au); f_119f2400();
  /* 119f212a push dword ptr [esi + 0x119f519c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x119f519c))));
  /* 119f2130 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119f2136 push eax */
  push32((uint32_t)(EAX));
  /* 119f2137 call 0x119f2400 */
  push32(0x119f213cu); f_119f2400();
  /* 119f213c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 119f2141 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119f2147 push 0x119f4394 */
  push32((uint32_t)(0x119f4394u));
  /* 119f214c push eax */
  push32((uint32_t)(EAX));
  /* 119f214d call 0x119f34ce */
  push32(0x119f2152u); f_119f34ce();
  /* 119f2152 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2155 pop edi */
  EDI = (pop32());
  /* 119f2156 jmp 0x119f217e */
  goto L_119f217e;
L_119f2158:;
  /* 119f2158 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 119f215b lea esi, [esi + 0x119f519c] */
  ESI = ((uint32_t)(ESI + 0x119f519c));
  /* 119f2161 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2163 push eax */
  push32((uint32_t)(EAX));
  /* 119f2164 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f2166 call 0x119f24e0 */
  push32(0x119f216bu); f_119f24e0();
  /* 119f216b pop ecx */
  ECX = (pop32());
  /* 119f216c push eax */
  push32((uint32_t)(EAX));
  /* 119f216d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f216f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119f2171 call dword ptr [0x119f4000] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4000))), 0x119f2177u);
  /* 119f2177 push eax */
  push32((uint32_t)(EAX));
  /* 119f2178 call dword ptr [0x119f40a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40a8))), 0x119f217eu);
L_119f217e:;
  /* 119f217e pop esi */
  ESI = (pop32());
  /* 119f217f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2180 ret  */
  ESPCHK(0x119f202eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002181 @ 0x119f2181 (41 bytes, 12 insns) */
void f_119f2181(void) {
  FTRACE(0x119f2181u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2181 push esi */
  push32((uint32_t)(ESI));
  /* 119f2182 mov esi, dword ptr [0x119f4070] */
  ESI = (r32((uint32_t)(0x119f4070)));
  /* 119f2188 push dword ptr [0x119f526c] */
  push32((uint32_t)(r32((uint32_t)(0x119f526c))));
  /* 119f218e call esi */
  call_ind((uint32_t)(ESI), 0x119f2190u);
  /* 119f2190 push dword ptr [0x119f525c] */
  push32((uint32_t)(r32((uint32_t)(0x119f525c))));
  /* 119f2196 call esi */
  call_ind((uint32_t)(ESI), 0x119f2198u);
  /* 119f2198 push dword ptr [0x119f524c] */
  push32((uint32_t)(r32((uint32_t)(0x119f524c))));
  /* 119f219e call esi */
  call_ind((uint32_t)(ESI), 0x119f21a0u);
  /* 119f21a0 push dword ptr [0x119f522c] */
  push32((uint32_t)(r32((uint32_t)(0x119f522c))));
  /* 119f21a6 call esi */
  call_ind((uint32_t)(ESI), 0x119f21a8u);
  /* 119f21a8 pop esi */
  ESI = (pop32());
  /* 119f21a9 ret  */
  ESPCHK(0x119f2181u, _esp0);
  ESP += 4; return;
}

/* FUN_100021aa @ 0x119f21aa (108 bytes, 34 insns) */
void f_119f21aa(void) {
  FTRACE(0x119f21aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f21aa push esi */
  push32((uint32_t)(ESI));
  /* 119f21ab push edi */
  push32((uint32_t)(EDI));
  /* 119f21ac mov edi, dword ptr [0x119f407c] */
  EDI = (r32((uint32_t)(0x119f407c)));
  /* 119f21b2 mov esi, 0x119f5228 */
  ESI = (0x119f5228u);
L_119f21b7:;
  /* 119f21b7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119f21b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f21bb je 0x119f21e8 */
  if (C.zf) goto L_119f21e8;
  /* 119f21bd cmp esi, 0x119f526c */
  { uint32_t _a=(ESI),_b=(0x119f526cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f21c3 je 0x119f21e8 */
  if (C.zf) goto L_119f21e8;
  /* 119f21c5 cmp esi, 0x119f525c */
  { uint32_t _a=(ESI),_b=(0x119f525cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f21cb je 0x119f21e8 */
  if (C.zf) goto L_119f21e8;
  /* 119f21cd cmp esi, 0x119f524c */
  { uint32_t _a=(ESI),_b=(0x119f524cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f21d3 je 0x119f21e8 */
  if (C.zf) goto L_119f21e8;
  /* 119f21d5 cmp esi, 0x119f522c */
  { uint32_t _a=(ESI),_b=(0x119f522cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f21db je 0x119f21e8 */
  if (C.zf) goto L_119f21e8;
  /* 119f21dd push eax */
  push32((uint32_t)(EAX));
  /* 119f21de call edi */
  call_ind((uint32_t)(EDI), 0x119f21e0u);
  /* 119f21e0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f21e2 call 0x119f2319 */
  push32(0x119f21e7u); f_119f2319();
  /* 119f21e7 pop ecx */
  ECX = (pop32());
L_119f21e8:;
  /* 119f21e8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f21eb cmp esi, 0x119f52e8 */
  { uint32_t _a=(ESI),_b=(0x119f52e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f21f1 jl 0x119f21b7 */
  if ((C.sf!=C.of)) goto L_119f21b7;
  /* 119f21f3 push dword ptr [0x119f524c] */
  push32((uint32_t)(r32((uint32_t)(0x119f524c))));
  /* 119f21f9 call edi */
  call_ind((uint32_t)(EDI), 0x119f21fbu);
  /* 119f21fb push dword ptr [0x119f525c] */
  push32((uint32_t)(r32((uint32_t)(0x119f525c))));
  /* 119f2201 call edi */
  call_ind((uint32_t)(EDI), 0x119f2203u);
  /* 119f2203 push dword ptr [0x119f526c] */
  push32((uint32_t)(r32((uint32_t)(0x119f526c))));
  /* 119f2209 call edi */
  call_ind((uint32_t)(EDI), 0x119f220bu);
  /* 119f220b push dword ptr [0x119f522c] */
  push32((uint32_t)(r32((uint32_t)(0x119f522c))));
  /* 119f2211 call edi */
  call_ind((uint32_t)(EDI), 0x119f2213u);
  /* 119f2213 pop edi */
  EDI = (pop32());
  /* 119f2214 pop esi */
  ESI = (pop32());
  /* 119f2215 ret  */
  ESPCHK(0x119f21aau, _esp0);
  ESP += 4; return;
}

/* FUN_10002216 @ 0x119f2216 (97 bytes, 37 insns) */
void f_119f2216(void) {
  FTRACE(0x119f2216u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2216 push ebp */
  push32((uint32_t)(EBP));
  /* 119f2217 mov ebp, esp */
  EBP = (ESP);
  /* 119f2219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f221c push esi */
  push32((uint32_t)(ESI));
  /* 119f221d cmp dword ptr [eax*4 + 0x119f5228], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x119f5228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2225 lea esi, [eax*4 + 0x119f5228] */
  ESI = ((uint32_t)(EAX*4 + 0x119f5228));
  /* 119f222c jne 0x119f226c */
  if (!C.zf) goto L_119f226c;
  /* 119f222e push edi */
  push32((uint32_t)(EDI));
  /* 119f222f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 119f2231 call 0x119f2361 */
  push32(0x119f2236u); f_119f2361();
  /* 119f2236 mov edi, eax */
  EDI = (EAX);
  /* 119f2238 pop ecx */
  ECX = (pop32());
  /* 119f2239 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f223b jne 0x119f2245 */
  if (!C.zf) goto L_119f2245;
  /* 119f223d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119f223f call 0x119f1686 */
  push32(0x119f2244u); f_119f1686();
  /* 119f2244 pop ecx */
  ECX = (pop32());
L_119f2245:;
  /* 119f2245 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119f2247 call 0x119f2216 */
  push32(0x119f224cu); f_119f2216();
  /* 119f224c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f224f pop ecx */
  ECX = (pop32());
  /* 119f2250 push edi */
  push32((uint32_t)(EDI));
  /* 119f2251 jne 0x119f225d */
  if (!C.zf) goto L_119f225d;
  /* 119f2253 call dword ptr [0x119f4070] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4070))), 0x119f2259u);
  /* 119f2259 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 119f225b jmp 0x119f2263 */
  goto L_119f2263;
L_119f225d:;
  /* 119f225d call 0x119f2319 */
  push32(0x119f2262u); f_119f2319();
  /* 119f2262 pop ecx */
  ECX = (pop32());
L_119f2263:;
  /* 119f2263 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119f2265 call 0x119f2277 */
  push32(0x119f226au); f_119f2277();
  /* 119f226a pop ecx */
  ECX = (pop32());
  /* 119f226b pop edi */
  EDI = (pop32());
L_119f226c:;
  /* 119f226c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119f226e call dword ptr [0x119f4040] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4040))), 0x119f2274u);
  /* 119f2274 pop esi */
  ESI = (pop32());
  /* 119f2275 pop ebp */
  EBP = (pop32());
  /* 119f2276 ret  */
  ESPCHK(0x119f2216u, _esp0);
  ESP += 4; return;
}

/* FUN_10002277 @ 0x119f2277 (21 bytes, 7 insns) */
void f_119f2277(void) {
  FTRACE(0x119f2277u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2277 push ebp */
  push32((uint32_t)(EBP));
  /* 119f2278 mov ebp, esp */
  EBP = (ESP);
  /* 119f227a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f227d push dword ptr [eax*4 + 0x119f5228] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x119f5228))));
  /* 119f2284 call dword ptr [0x119f4074] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4074))), 0x119f228au);
  /* 119f228a pop ebp */
  EBP = (pop32());
  /* 119f228b ret  */
  ESPCHK(0x119f2277u, _esp0);
  ESP += 4; return;
}

/* FUN_1000228c @ 0x119f228c (141 bytes, 56 insns) */
void f_119f228c(void) {
  FTRACE(0x119f228cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f228c push ebx */
  push32((uint32_t)(EBX));
  /* 119f228d push esi */
  push32((uint32_t)(ESI));
  /* 119f228e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 119f2292 push edi */
  push32((uint32_t)(EDI));
  /* 119f2293 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119f2298 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f229b mov ebx, esi */
  EBX = (ESI);
  /* 119f229d ja 0x119f22ac */
  if ((!C.cf&&!C.zf)) goto L_119f22ac;
  /* 119f229f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f22a1 jne 0x119f22a6 */
  if (!C.zf) goto L_119f22a6;
  /* 119f22a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f22a5 pop esi */
  ESI = (pop32());
L_119f22a6:;
  /* 119f22a6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f22a9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_119f22ac:;
  /* 119f22ac xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f22ae cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f22b1 ja 0x119f22ed */
  if ((!C.cf&&!C.zf)) goto L_119f22ed;
  /* 119f22b3 cmp ebx, dword ptr [0x119f5470] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x119f5470))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f22b9 ja 0x119f22d8 */
  if ((!C.cf&&!C.zf)) goto L_119f22d8;
  /* 119f22bb push 9 */
  push32((uint32_t)(0x9u));
  /* 119f22bd call 0x119f2216 */
  push32(0x119f22c2u); f_119f2216();
  /* 119f22c2 push ebx */
  push32((uint32_t)(EBX));
  /* 119f22c3 call 0x119f3019 */
  push32(0x119f22c8u); f_119f3019();
  /* 119f22c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f22ca mov edi, eax */
  EDI = (EAX);
  /* 119f22cc call 0x119f2277 */
  push32(0x119f22d1u); f_119f2277();
  /* 119f22d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f22d4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f22d6 jne 0x119f2303 */
  if (!C.zf) goto L_119f2303;
L_119f22d8:;
  /* 119f22d8 push esi */
  push32((uint32_t)(ESI));
  /* 119f22d9 push 8 */
  push32((uint32_t)(0x8u));
  /* 119f22db push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f22e1 call dword ptr [0x119f403c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f403c))), 0x119f22e7u);
  /* 119f22e7 mov edi, eax */
  EDI = (EAX);
  /* 119f22e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f22eb jne 0x119f230f */
  if (!C.zf) goto L_119f230f;
L_119f22ed:;
  /* 119f22ed cmp dword ptr [0x119f56d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119f56d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f22f4 je 0x119f230f */
  if (C.zf) goto L_119f230f;
  /* 119f22f6 push esi */
  push32((uint32_t)(ESI));
  /* 119f22f7 call 0x119f36b8 */
  push32(0x119f22fcu); f_119f36b8();
  /* 119f22fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f22fe pop ecx */
  ECX = (pop32());
  /* 119f22ff je 0x119f2315 */
  if (C.zf) goto L_119f2315;
  /* 119f2301 jmp 0x119f22ac */
  goto L_119f22ac;
L_119f2303:;
  /* 119f2303 push ebx */
  push32((uint32_t)(EBX));
  /* 119f2304 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2306 push edi */
  push32((uint32_t)(EDI));
  /* 119f2307 call 0x119f3660 */
  push32(0x119f230cu); f_119f3660();
  /* 119f230c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119f230f:;
  /* 119f230f mov eax, edi */
  EAX = (EDI);
L_119f2311:;
  /* 119f2311 pop edi */
  EDI = (pop32());
  /* 119f2312 pop esi */
  ESI = (pop32());
  /* 119f2313 pop ebx */
  EBX = (pop32());
  /* 119f2314 ret  */
  ESPCHK(0x119f228cu, _esp0);
  ESP += 4; return;
L_119f2315:;
  /* 119f2315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f2317 jmp 0x119f2311 */
  goto L_119f2311;
}

/* FUN_10002319 @ 0x119f2319 (72 bytes, 29 insns) */
void f_119f2319(void) {
  FTRACE(0x119f2319u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2319 push esi */
  push32((uint32_t)(ESI));
  /* 119f231a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 119f231e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f2320 je 0x119f235f */
  if (C.zf) goto L_119f235f;
  /* 119f2322 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f2324 call 0x119f2216 */
  push32(0x119f2329u); f_119f2216();
  /* 119f2329 push esi */
  push32((uint32_t)(ESI));
  /* 119f232a call 0x119f2cc3 */
  push32(0x119f232fu); f_119f2cc3();
  /* 119f232f pop ecx */
  ECX = (pop32());
  /* 119f2330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2332 pop ecx */
  ECX = (pop32());
  /* 119f2333 je 0x119f2348 */
  if (C.zf) goto L_119f2348;
  /* 119f2335 push esi */
  push32((uint32_t)(ESI));
  /* 119f2336 push eax */
  push32((uint32_t)(EAX));
  /* 119f2337 call 0x119f2cee */
  push32(0x119f233cu); f_119f2cee();
  /* 119f233c push 9 */
  push32((uint32_t)(0x9u));
  /* 119f233e call 0x119f2277 */
  push32(0x119f2343u); f_119f2277();
  /* 119f2343 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2346 pop esi */
  ESI = (pop32());
  /* 119f2347 ret  */
  ESPCHK(0x119f2319u, _esp0);
  ESP += 4; return;
L_119f2348:;
  /* 119f2348 push 9 */
  push32((uint32_t)(0x9u));
  /* 119f234a call 0x119f2277 */
  push32(0x119f234fu); f_119f2277();
  /* 119f234f pop ecx */
  ECX = (pop32());
  /* 119f2350 push esi */
  push32((uint32_t)(ESI));
  /* 119f2351 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2353 push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f2359 call dword ptr [0x119f40a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40a4))), 0x119f235fu);
L_119f235f:;
  /* 119f235f pop esi */
  ESI = (pop32());
  /* 119f2360 ret  */
  ESPCHK(0x119f2319u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x119f2361 (18 bytes, 6 insns) */
void f_119f2361(void) {
  FTRACE(0x119f2361u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2361 push dword ptr [0x119f56d4] */
  push32((uint32_t)(r32((uint32_t)(0x119f56d4))));
  /* 119f2367 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 119f236b call 0x119f2373 */
  push32(0x119f2370u); f_119f2373();
  /* 119f2370 pop ecx */
  ECX = (pop32());
  /* 119f2371 pop ecx */
  ECX = (pop32());
  /* 119f2372 ret  */
  ESPCHK(0x119f2361u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x119f2373 (44 bytes, 16 insns) */
void f_119f2373(void) {
  FTRACE(0x119f2373u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2373 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2378 ja 0x119f239c */
  if ((!C.cf&&!C.zf)) goto L_119f239c;
L_119f237a:;
  /* 119f237a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 119f237e call 0x119f239f */
  push32(0x119f2383u); f_119f239f();
  /* 119f2383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2385 pop ecx */
  ECX = (pop32());
  /* 119f2386 jne 0x119f239e */
  if (!C.zf) goto L_119f239e;
  /* 119f2388 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f238c je 0x119f239e */
  if (C.zf) goto L_119f239e;
  /* 119f238e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 119f2392 call 0x119f36b8 */
  push32(0x119f2397u); f_119f36b8();
  /* 119f2397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2399 pop ecx */
  ECX = (pop32());
  /* 119f239a jne 0x119f237a */
  if (!C.zf) goto L_119f237a;
L_119f239c:;
  /* 119f239c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119f239e:;
  /* 119f239e ret  */
  ESPCHK(0x119f2373u, _esp0);
  ESP += 4; return;
}

/* FUN_1000239f @ 0x119f239f (78 bytes, 30 insns) */
void f_119f239f(void) {
  FTRACE(0x119f239fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f239f push esi */
  push32((uint32_t)(ESI));
  /* 119f23a0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 119f23a4 cmp esi, dword ptr [0x119f5470] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x119f5470))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f23aa push edi */
  push32((uint32_t)(EDI));
  /* 119f23ab ja 0x119f23ce */
  if ((!C.cf&&!C.zf)) goto L_119f23ce;
  /* 119f23ad push 9 */
  push32((uint32_t)(0x9u));
  /* 119f23af call 0x119f2216 */
  push32(0x119f23b4u); f_119f2216();
  /* 119f23b4 push esi */
  push32((uint32_t)(ESI));
  /* 119f23b5 call 0x119f3019 */
  push32(0x119f23bau); f_119f3019();
  /* 119f23ba push 9 */
  push32((uint32_t)(0x9u));
  /* 119f23bc mov edi, eax */
  EDI = (EAX);
  /* 119f23be call 0x119f2277 */
  push32(0x119f23c3u); f_119f2277();
  /* 119f23c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f23c6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119f23c8 je 0x119f23ce */
  if (C.zf) goto L_119f23ce;
  /* 119f23ca mov eax, edi */
  EAX = (EDI);
  /* 119f23cc jmp 0x119f23ea */
  goto L_119f23ea;
L_119f23ce:;
  /* 119f23ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f23d0 jne 0x119f23d5 */
  if (!C.zf) goto L_119f23d5;
  /* 119f23d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f23d4 pop esi */
  ESI = (pop32());
L_119f23d5:;
  /* 119f23d5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f23d8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 119f23db push esi */
  push32((uint32_t)(ESI));
  /* 119f23dc push 0 */
  push32((uint32_t)(0x0u));
  /* 119f23de push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f23e4 call dword ptr [0x119f403c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f403c))), 0x119f23eau);
L_119f23ea:;
  /* 119f23ea pop edi */
  EDI = (pop32());
  /* 119f23eb pop esi */
  ESI = (pop32());
  /* 119f23ec ret  */
  ESPCHK(0x119f239fu, _esp0);
  ESP += 4; return;
}

/* FUN_100023f0 @ 0x119f23f0 (7 bytes, 3 insns) */
void f_119f23f0(void) {
  FTRACE(0x119f23f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f23f0 push edi */
  push32((uint32_t)(EDI));
  /* 119f23f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 119f23f5 jmp 0x119f2461 */
  jmp_ind(0x119f2461u); return;
}

/* FUN_10002400 @ 0x119f2400 (224 bytes, 84 insns) */
void f_119f2400(void) {
  FTRACE(0x119f2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2400 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f2404 push edi */
  push32((uint32_t)(EDI));
  /* 119f2405 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119f240b je 0x119f241c */
  if (C.zf) goto L_119f241c;
L_119f240d:;
  /* 119f240d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 119f240f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f2410 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f2412 je 0x119f244f */
  if (C.zf) goto L_119f244f;
  /* 119f2414 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119f241a jne 0x119f240d */
  if (!C.zf) goto L_119f240d;
L_119f241c:;
  /* 119f241c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119f241e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119f2423 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2425 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f2428 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119f242a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f242d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119f2432 je 0x119f241c */
  if (C.zf) goto L_119f241c;
  /* 119f2434 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119f2437 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f2439 je 0x119f245e */
  if (C.zf) goto L_119f245e;
  /* 119f243b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119f243d je 0x119f2459 */
  if (C.zf) goto L_119f2459;
  /* 119f243f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119f2444 je 0x119f2454 */
  if (C.zf) goto L_119f2454;
  /* 119f2446 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119f244b je 0x119f244f */
  if (C.zf) goto L_119f244f;
  /* 119f244d jmp 0x119f241c */
  goto L_119f241c;
L_119f244f:;
  /* 119f244f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 119f2452 jmp 0x119f2461 */
  goto L_119f2461;
L_119f2454:;
  /* 119f2454 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 119f2457 jmp 0x119f2461 */
  goto L_119f2461;
L_119f2459:;
  /* 119f2459 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 119f245c jmp 0x119f2461 */
  goto L_119f2461;
L_119f245e:;
  /* 119f245e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_119f2461:;
  /* 119f2461 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119f2465 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119f246b je 0x119f2486 */
  if (C.zf) goto L_119f2486;
L_119f246d:;
  /* 119f246d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119f246f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f2470 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f2472 je 0x119f24d8 */
  if (C.zf) goto L_119f24d8;
  /* 119f2474 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 119f2476 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f2477 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119f247d jne 0x119f246d */
  if (!C.zf) goto L_119f246d;
  /* 119f247f jmp 0x119f2486 */
  goto L_119f2486;
L_119f2481:;
  /* 119f2481 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119f2483 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119f2486:;
  /* 119f2486 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119f248b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119f248d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f248f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f2492 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119f2494 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119f2496 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2499 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119f249e je 0x119f2481 */
  if (C.zf) goto L_119f2481;
  /* 119f24a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f24a2 je 0x119f24d8 */
  if (C.zf) goto L_119f24d8;
  /* 119f24a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 119f24a6 je 0x119f24cf */
  if (C.zf) goto L_119f24cf;
  /* 119f24a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 119f24ae je 0x119f24c2 */
  if (C.zf) goto L_119f24c2;
  /* 119f24b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 119f24b6 je 0x119f24ba */
  if (C.zf) goto L_119f24ba;
  /* 119f24b8 jmp 0x119f2481 */
  goto L_119f2481;
L_119f24ba:;
  /* 119f24ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119f24bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f24c0 pop edi */
  EDI = (pop32());
  /* 119f24c1 ret  */
  ESPCHK(0x119f2400u, _esp0);
  ESP += 4; return;
L_119f24c2:;
  /* 119f24c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 119f24c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f24c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 119f24cd pop edi */
  EDI = (pop32());
  /* 119f24ce ret  */
  ESPCHK(0x119f2400u, _esp0);
  ESP += 4; return;
L_119f24cf:;
  /* 119f24cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 119f24d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f24d6 pop edi */
  EDI = (pop32());
  /* 119f24d7 ret  */
  ESPCHK(0x119f2400u, _esp0);
  ESP += 4; return;
L_119f24d8:;
  /* 119f24d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 119f24da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f24de pop edi */
  EDI = (pop32());
  /* 119f24df ret  */
  ESPCHK(0x119f2400u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x119f24e0 (123 bytes, 44 insns) */
void f_119f24e0(void) {
  FTRACE(0x119f24e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f24e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f24e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119f24ea je 0x119f2500 */
  if (C.zf) goto L_119f2500;
L_119f24ec:;
  /* 119f24ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 119f24ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f24ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f24f1 je 0x119f2533 */
  if (C.zf) goto L_119f2533;
  /* 119f24f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119f24f9 jne 0x119f24ec */
  if (!C.zf) goto L_119f24ec;
  /* 119f24fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_119f2500:;
  /* 119f2500 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119f2502 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119f2507 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2509 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f250c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119f250e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2511 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119f2516 je 0x119f2500 */
  if (C.zf) goto L_119f2500;
  /* 119f2518 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119f251b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f251d je 0x119f2551 */
  if (C.zf) goto L_119f2551;
  /* 119f251f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119f2521 je 0x119f2547 */
  if (C.zf) goto L_119f2547;
  /* 119f2523 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119f2528 je 0x119f253d */
  if (C.zf) goto L_119f253d;
  /* 119f252a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119f252f je 0x119f2533 */
  if (C.zf) goto L_119f2533;
  /* 119f2531 jmp 0x119f2500 */
  goto L_119f2500;
L_119f2533:;
  /* 119f2533 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 119f2536 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f253a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f253c ret  */
  ESPCHK(0x119f24e0u, _esp0);
  ESP += 4; return;
L_119f253d:;
  /* 119f253d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 119f2540 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f2544 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2546 ret  */
  ESPCHK(0x119f24e0u, _esp0);
  ESP += 4; return;
L_119f2547:;
  /* 119f2547 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 119f254a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f254e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2550 ret  */
  ESPCHK(0x119f24e0u, _esp0);
  ESP += 4; return;
L_119f2551:;
  /* 119f2551 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 119f2554 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f2558 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f255a ret  */
  ESPCHK(0x119f24e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255b @ 0x119f255b (429 bytes, 143 insns) */
void f_119f255b(void) {
  FTRACE(0x119f255bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f255b push ebp */
  push32((uint32_t)(EBP));
  /* 119f255c mov ebp, esp */
  EBP = (ESP);
  /* 119f255e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2561 push ebx */
  push32((uint32_t)(EBX));
  /* 119f2562 push esi */
  push32((uint32_t)(ESI));
  /* 119f2563 push edi */
  push32((uint32_t)(EDI));
  /* 119f2564 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119f2566 call 0x119f2216 */
  push32(0x119f256bu); f_119f2216();
  /* 119f256b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f256e call 0x119f2708 */
  push32(0x119f2573u); f_119f2708();
  /* 119f2573 mov ebx, eax */
  EBX = (EAX);
  /* 119f2575 pop ecx */
  ECX = (pop32());
  /* 119f2576 cmp ebx, dword ptr [0x119f5718] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x119f5718))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f257c pop ecx */
  ECX = (pop32());
  /* 119f257d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f2580 jne 0x119f2589 */
  if (!C.zf) goto L_119f2589;
L_119f2582:;
  /* 119f2582 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119f2584 jmp 0x119f26f9 */
  goto L_119f26f9;
L_119f2589:;
  /* 119f2589 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119f258b je 0x119f26e7 */
  if (C.zf) goto L_119f26e7;
  /* 119f2591 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119f2593 mov eax, 0x119f5378 */
  EAX = (0x119f5378u);
L_119f2598:;
  /* 119f2598 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f259a je 0x119f2610 */
  if (C.zf) goto L_119f2610;
  /* 119f259c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f259f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119f25a0 cmp eax, 0x119f5468 */
  { uint32_t _a=(EAX),_b=(0x119f5468u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f25a5 jl 0x119f2598 */
  if ((C.sf!=C.of)) goto L_119f2598;
  /* 119f25a7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 119f25aa push eax */
  push32((uint32_t)(EAX));
  /* 119f25ab push ebx */
  push32((uint32_t)(EBX));
  /* 119f25ac call dword ptr [0x119f4034] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4034))), 0x119f25b2u);
  /* 119f25b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f25b4 pop esi */
  ESI = (pop32());
  /* 119f25b5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f25b7 jne 0x119f26de */
  if (!C.zf) goto L_119f26de;
  /* 119f25bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119f25bf and dword ptr [0x119f5944], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119f5944)))&(0x0u); w32((uint32_t)(0x119f5944), (_r)); fl_logic(_r,32); }
  /* 119f25c6 pop ecx */
  ECX = (pop32());
  /* 119f25c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f25c9 mov edi, 0x119f5840 */
  EDI = (0x119f5840u);
  /* 119f25ce cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f25d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119f25d3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119f25d4 mov dword ptr [0x119f5718], ebx */
  w32((uint32_t)(0x119f5718), (EBX));
  /* 119f25da jbe 0x119f26cb */
  if ((C.cf||C.zf)) goto L_119f26cb;
  /* 119f25e0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f25e4 je 0x119f26a6 */
  if (C.zf) goto L_119f26a6;
  /* 119f25ea lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_119f25ed:;
  /* 119f25ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119f25ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f25f1 je 0x119f26a6 */
  if (C.zf) goto L_119f26a6;
  /* 119f25f7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 119f25fb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_119f25fe:;
  /* 119f25fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2600 ja 0x119f269a */
  if ((!C.cf&&!C.zf)) goto L_119f269a;
  /* 119f2606 or byte ptr [eax + 0x119f5841], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(0x4u); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f260d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f260e jmp 0x119f25fe */
  goto L_119f25fe;
L_119f2610:;
  /* 119f2610 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f2614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119f2616 pop ecx */
  ECX = (pop32());
  /* 119f2617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f2619 mov edi, 0x119f5840 */
  EDI = (0x119f5840u);
  /* 119f261e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 119f2621 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119f2623 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 119f2626 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119f2627 lea ebx, [esi + 0x119f5388] */
  EBX = ((uint32_t)(ESI + 0x119f5388));
L_119f262d:;
  /* 119f262d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f2630 mov ecx, ebx */
  ECX = (EBX);
  /* 119f2632 je 0x119f2660 */
  if (C.zf) goto L_119f2660;
L_119f2634:;
  /* 119f2634 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119f2637 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f2639 je 0x119f2660 */
  if (C.zf) goto L_119f2660;
  /* 119f263b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 119f263e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 119f2641 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2643 ja 0x119f2659 */
  if ((!C.cf&&!C.zf)) goto L_119f2659;
  /* 119f2645 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f2648 mov dl, byte ptr [edx + 0x119f5370] */
  DL = (r8((uint32_t)(EDX + 0x119f5370)));
L_119f264e:;
  /* 119f264e or byte ptr [eax + 0x119f5841], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(DL); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f2654 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f2655 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2657 jbe 0x119f264e */
  if ((C.cf||C.zf)) goto L_119f264e;
L_119f2659:;
  /* 119f2659 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f265a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f265b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f265e jne 0x119f2634 */
  if (!C.zf) goto L_119f2634;
L_119f2660:;
  /* 119f2660 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 119f2663 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2666 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f266a jb 0x119f262d */
  if (C.cf) goto L_119f262d;
  /* 119f266c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f266f mov dword ptr [0x119f572c], 1 */
  w32((uint32_t)(0x119f572c), (0x1u));
  /* 119f2679 push eax */
  push32((uint32_t)(EAX));
  /* 119f267a mov dword ptr [0x119f5718], eax */
  w32((uint32_t)(0x119f5718), (EAX));
  /* 119f267f call 0x119f2752 */
  push32(0x119f2684u); f_119f2752();
  /* 119f2684 lea esi, [esi + 0x119f537c] */
  ESI = ((uint32_t)(ESI + 0x119f537c));
  /* 119f268a mov edi, 0x119f5720 */
  EDI = (0x119f5720u);
  /* 119f268f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 119f2690 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 119f2691 pop ecx */
  ECX = (pop32());
  /* 119f2692 mov dword ptr [0x119f5944], eax */
  w32((uint32_t)(0x119f5944), (EAX));
  /* 119f2697 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 119f2698 jmp 0x119f26ec */
  goto L_119f26ec;
L_119f269a:;
  /* 119f269a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f269b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f269c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f26a0 jne 0x119f25ed */
  if (!C.zf) goto L_119f25ed;
L_119f26a6:;
  /* 119f26a6 mov eax, esi */
  EAX = (ESI);
L_119f26a8:;
  /* 119f26a8 or byte ptr [eax + 0x119f5841], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(0x8u); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f26af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f26b0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f26b5 jb 0x119f26a8 */
  if (C.cf) goto L_119f26a8;
  /* 119f26b7 push ebx */
  push32((uint32_t)(EBX));
  /* 119f26b8 call 0x119f2752 */
  push32(0x119f26bdu); f_119f2752();
  /* 119f26bd pop ecx */
  ECX = (pop32());
  /* 119f26be mov dword ptr [0x119f5944], eax */
  w32((uint32_t)(0x119f5944), (EAX));
  /* 119f26c3 mov dword ptr [0x119f572c], esi */
  w32((uint32_t)(0x119f572c), (ESI));
  /* 119f26c9 jmp 0x119f26d2 */
  goto L_119f26d2;
L_119f26cb:;
  /* 119f26cb and dword ptr [0x119f572c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119f572c)))&(0x0u); w32((uint32_t)(0x119f572c), (_r)); fl_logic(_r,32); }
L_119f26d2:;
  /* 119f26d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f26d4 mov edi, 0x119f5720 */
  EDI = (0x119f5720u);
  /* 119f26d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 119f26da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 119f26db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 119f26dc jmp 0x119f26ec */
  goto L_119f26ec;
L_119f26de:;
  /* 119f26de cmp dword ptr [0x119f56c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119f56c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f26e5 je 0x119f26f6 */
  if (C.zf) goto L_119f26f6;
L_119f26e7:;
  /* 119f26e7 call 0x119f2785 */
  push32(0x119f26ecu); f_119f2785();
L_119f26ec:;
  /* 119f26ec call 0x119f27ae */
  push32(0x119f26f1u); f_119f27ae();
  /* 119f26f1 jmp 0x119f2582 */
  goto L_119f2582;
L_119f26f6:;
  /* 119f26f6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_119f26f9:;
  /* 119f26f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119f26fb call 0x119f2277 */
  push32(0x119f2700u); f_119f2277();
  /* 119f2700 pop ecx */
  ECX = (pop32());
  /* 119f2701 mov eax, esi */
  EAX = (ESI);
  /* 119f2703 pop edi */
  EDI = (pop32());
  /* 119f2704 pop esi */
  ESI = (pop32());
  /* 119f2705 pop ebx */
  EBX = (pop32());
  /* 119f2706 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2707 ret  */
  ESPCHK(0x119f255bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002708 @ 0x119f2708 (74 bytes, 15 insns) */
void f_119f2708(void) {
  FTRACE(0x119f2708u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2708 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f270c and dword ptr [0x119f56c0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119f56c0)))&(0x0u); w32((uint32_t)(0x119f56c0), (_r)); fl_logic(_r,32); }
  /* 119f2713 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2716 jne 0x119f2728 */
  if (!C.zf) goto L_119f2728;
  /* 119f2718 mov dword ptr [0x119f56c0], 1 */
  w32((uint32_t)(0x119f56c0), (0x1u));
  /* 119f2722 jmp dword ptr [0x119f4038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119f4038)))); return;
L_119f2728:;
  /* 119f2728 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f272b jne 0x119f273d */
  if (!C.zf) goto L_119f273d;
  /* 119f272d mov dword ptr [0x119f56c0], 1 */
  w32((uint32_t)(0x119f56c0), (0x1u));
  /* 119f2737 jmp dword ptr [0x119f4030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119f4030)))); return;
L_119f273d:;
  /* 119f273d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2740 jne 0x119f2751 */
  if (!C.zf) goto L_119f2751;
  /* 119f2742 mov eax, dword ptr [0x119f56f0] */
  EAX = (r32((uint32_t)(0x119f56f0)));
  /* 119f2747 mov dword ptr [0x119f56c0], 1 */
  w32((uint32_t)(0x119f56c0), (0x1u));
L_119f2751:;
  /* 119f2751 ret  */
  ESPCHK(0x119f2708u, _esp0);
  ESP += 4; return;
}

/* FUN_10002752 @ 0x119f2752 (51 bytes, 19 insns) */
void f_119f2752(void) {
  FTRACE(0x119f2752u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2752 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f2756 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f275b je 0x119f277f */
  if (C.zf) goto L_119f277f;
  /* 119f275d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2760 je 0x119f2779 */
  if (C.zf) goto L_119f2779;
  /* 119f2762 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2765 je 0x119f2773 */
  if (C.zf) goto L_119f2773;
  /* 119f2767 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119f2768 je 0x119f276d */
  if (C.zf) goto L_119f276d;
  /* 119f276a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f276c ret  */
  ESPCHK(0x119f2752u, _esp0);
  ESP += 4; return;
L_119f276d:;
  /* 119f276d mov eax, 0x404 */
  EAX = (0x404u);
  /* 119f2772 ret  */
  ESPCHK(0x119f2752u, _esp0);
  ESP += 4; return;
L_119f2773:;
  /* 119f2773 mov eax, 0x412 */
  EAX = (0x412u);
  /* 119f2778 ret  */
  ESPCHK(0x119f2752u, _esp0);
  ESP += 4; return;
L_119f2779:;
  /* 119f2779 mov eax, 0x804 */
  EAX = (0x804u);
  /* 119f277e ret  */
  ESPCHK(0x119f2752u, _esp0);
  ESP += 4; return;
L_119f277f:;
  /* 119f277f mov eax, 0x411 */
  EAX = (0x411u);
  /* 119f2784 ret  */
  ESPCHK(0x119f2752u, _esp0);
  ESP += 4; return;
}

/* FUN_10002785 @ 0x119f2785 (41 bytes, 17 insns) */
void f_119f2785(void) {
  FTRACE(0x119f2785u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2785 push edi */
  push32((uint32_t)(EDI));
  /* 119f2786 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119f2788 pop ecx */
  ECX = (pop32());
  /* 119f2789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f278b mov edi, 0x119f5840 */
  EDI = (0x119f5840u);
  /* 119f2790 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119f2792 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119f2793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f2795 mov edi, 0x119f5720 */
  EDI = (0x119f5720u);
  /* 119f279a mov dword ptr [0x119f5718], eax */
  w32((uint32_t)(0x119f5718), (EAX));
  /* 119f279f mov dword ptr [0x119f572c], eax */
  w32((uint32_t)(0x119f572c), (EAX));
  /* 119f27a4 mov dword ptr [0x119f5944], eax */
  w32((uint32_t)(0x119f5944), (EAX));
  /* 119f27a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 119f27aa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 119f27ab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 119f27ac pop edi */
  EDI = (pop32());
  /* 119f27ad ret  */
  ESPCHK(0x119f2785u, _esp0);
  ESP += 4; return;
}

/* FUN_100027ae @ 0x119f27ae (389 bytes, 124 insns) */
void f_119f27ae(void) {
  FTRACE(0x119f27aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f27ae push ebp */
  push32((uint32_t)(EBP));
  /* 119f27af mov ebp, esp */
  EBP = (ESP);
  /* 119f27b1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f27b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119f27ba push esi */
  push32((uint32_t)(ESI));
  /* 119f27bb push eax */
  push32((uint32_t)(EAX));
  /* 119f27bc push dword ptr [0x119f5718] */
  push32((uint32_t)(r32((uint32_t)(0x119f5718))));
  /* 119f27c2 call dword ptr [0x119f4034] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4034))), 0x119f27c8u);
  /* 119f27c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f27cb jne 0x119f28e7 */
  if (!C.zf) goto L_119f28e7;
  /* 119f27d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f27d3 mov esi, 0x100 */
  ESI = (0x100u);
L_119f27d8:;
  /* 119f27d8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 119f27df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f27e0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f27e2 jb 0x119f27d8 */
  if (C.cf) goto L_119f27d8;
  /* 119f27e4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 119f27e7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 119f27ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f27f0 je 0x119f2829 */
  if (C.zf) goto L_119f2829;
  /* 119f27f2 push ebx */
  push32((uint32_t)(EBX));
  /* 119f27f3 push edi */
  push32((uint32_t)(EDI));
  /* 119f27f4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_119f27f7:;
  /* 119f27f7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 119f27fa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 119f27fd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f27ff ja 0x119f281e */
  if ((!C.cf&&!C.zf)) goto L_119f281e;
  /* 119f2801 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2803 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 119f280a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f280b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 119f2810 mov ebx, ecx */
  EBX = (ECX);
  /* 119f2812 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f2815 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119f2817 mov ecx, ebx */
  ECX = (EBX);
  /* 119f2819 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 119f281c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_119f281e:;
  /* 119f281e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119f281f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119f2820 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 119f2823 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f2825 jne 0x119f27f7 */
  if (!C.zf) goto L_119f27f7;
  /* 119f2827 pop edi */
  EDI = (pop32());
  /* 119f2828 pop ebx */
  EBX = (pop32());
L_119f2829:;
  /* 119f2829 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f282b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 119f2831 push dword ptr [0x119f5944] */
  push32((uint32_t)(r32((uint32_t)(0x119f5944))));
  /* 119f2837 push dword ptr [0x119f5718] */
  push32((uint32_t)(r32((uint32_t)(0x119f5718))));
  /* 119f283d push eax */
  push32((uint32_t)(EAX));
  /* 119f283e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 119f2844 push esi */
  push32((uint32_t)(ESI));
  /* 119f2845 push eax */
  push32((uint32_t)(EAX));
  /* 119f2846 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f2848 call 0x119f3922 */
  push32(0x119f284du); f_119f3922();
  /* 119f284d push 0 */
  push32((uint32_t)(0x0u));
  /* 119f284f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 119f2855 push dword ptr [0x119f5718] */
  push32((uint32_t)(r32((uint32_t)(0x119f5718))));
  /* 119f285b push esi */
  push32((uint32_t)(ESI));
  /* 119f285c push eax */
  push32((uint32_t)(EAX));
  /* 119f285d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 119f2863 push esi */
  push32((uint32_t)(ESI));
  /* 119f2864 push eax */
  push32((uint32_t)(EAX));
  /* 119f2865 push esi */
  push32((uint32_t)(ESI));
  /* 119f2866 push dword ptr [0x119f5944] */
  push32((uint32_t)(r32((uint32_t)(0x119f5944))));
  /* 119f286c call 0x119f36d3 */
  push32(0x119f2871u); f_119f36d3();
  /* 119f2871 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2873 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 119f2879 push dword ptr [0x119f5718] */
  push32((uint32_t)(r32((uint32_t)(0x119f5718))));
  /* 119f287f push esi */
  push32((uint32_t)(ESI));
  /* 119f2880 push eax */
  push32((uint32_t)(EAX));
  /* 119f2881 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 119f2887 push esi */
  push32((uint32_t)(ESI));
  /* 119f2888 push eax */
  push32((uint32_t)(EAX));
  /* 119f2889 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 119f288e push dword ptr [0x119f5944] */
  push32((uint32_t)(r32((uint32_t)(0x119f5944))));
  /* 119f2894 call 0x119f36d3 */
  push32(0x119f2899u); f_119f36d3();
  /* 119f2899 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f289c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f289e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_119f28a4:;
  /* 119f28a4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 119f28a7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 119f28aa je 0x119f28c2 */
  if (C.zf) goto L_119f28c2;
  /* 119f28ac or byte ptr [eax + 0x119f5841], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(0x10u); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f28b3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_119f28ba:;
  /* 119f28ba mov byte ptr [eax + 0x119f5740], dl */
  w8((uint32_t)(EAX + 0x119f5740), (DL));
  /* 119f28c0 jmp 0x119f28de */
  goto L_119f28de;
L_119f28c2:;
  /* 119f28c2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 119f28c5 je 0x119f28d7 */
  if (C.zf) goto L_119f28d7;
  /* 119f28c7 or byte ptr [eax + 0x119f5841], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(0x20u); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f28ce mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 119f28d5 jmp 0x119f28ba */
  goto L_119f28ba;
L_119f28d7:;
  /* 119f28d7 and byte ptr [eax + 0x119f5740], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5740)))&(0x0u); w8((uint32_t)(EAX + 0x119f5740), (_r)); fl_logic(_r,8); }
L_119f28de:;
  /* 119f28de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f28df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f28e0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119f28e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f28e3 jb 0x119f28a4 */
  if (C.cf) goto L_119f28a4;
  /* 119f28e5 jmp 0x119f2930 */
  goto L_119f2930;
L_119f28e7:;
  /* 119f28e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f28e9 mov esi, 0x100 */
  ESI = (0x100u);
L_119f28ee:;
  /* 119f28ee cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f28f1 jb 0x119f290c */
  if (C.cf) goto L_119f290c;
  /* 119f28f3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f28f6 ja 0x119f290c */
  if ((!C.cf&&!C.zf)) goto L_119f290c;
  /* 119f28f8 or byte ptr [eax + 0x119f5841], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(0x10u); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f28ff mov cl, al */
  CL = (AL);
  /* 119f2901 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_119f2904:;
  /* 119f2904 mov byte ptr [eax + 0x119f5740], cl */
  w8((uint32_t)(EAX + 0x119f5740), (CL));
  /* 119f290a jmp 0x119f292b */
  goto L_119f292b;
L_119f290c:;
  /* 119f290c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f290f jb 0x119f2924 */
  if (C.cf) goto L_119f2924;
  /* 119f2911 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2914 ja 0x119f2924 */
  if ((!C.cf&&!C.zf)) goto L_119f2924;
  /* 119f2916 or byte ptr [eax + 0x119f5841], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5841)))|(0x20u); w8((uint32_t)(EAX + 0x119f5841), (_r)); fl_logic(_r,8); }
  /* 119f291d mov cl, al */
  CL = (AL);
  /* 119f291f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119f2922 jmp 0x119f2904 */
  goto L_119f2904;
L_119f2924:;
  /* 119f2924 and byte ptr [eax + 0x119f5740], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119f5740)))&(0x0u); w8((uint32_t)(EAX + 0x119f5740), (_r)); fl_logic(_r,8); }
L_119f292b:;
  /* 119f292b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f292c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f292e jb 0x119f28ee */
  if (C.cf) goto L_119f28ee;
L_119f2930:;
  /* 119f2930 pop esi */
  ESI = (pop32());
  /* 119f2931 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2932 ret  */
  ESPCHK(0x119f27aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002933 @ 0x119f2933 (28 bytes, 7 insns) */
void f_119f2933(void) {
  FTRACE(0x119f2933u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2933 cmp dword ptr [0x119f5a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119f5a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f293a jne 0x119f294e */
  if (!C.zf) goto L_119f294e;
  /* 119f293c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 119f293e call 0x119f255b */
  push32(0x119f2943u); f_119f255b();
  /* 119f2943 pop ecx */
  ECX = (pop32());
  /* 119f2944 mov dword ptr [0x119f5a68], 1 */
  w32((uint32_t)(0x119f5a68), (0x1u));
L_119f294e:;
  /* 119f294e ret  */
  ESPCHK(0x119f2933u, _esp0);
  ESP += 4; return;
}

/* FUN_10002950 @ 0x119f2950 (664 bytes, 261 insns) [15 switch table(s)] */
void f_119f2950(void) {
  FTRACE(0x119f2950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2950 push ebp */
  push32((uint32_t)(EBP));
  /* 119f2951 mov ebp, esp */
  EBP = (ESP);
  /* 119f2953 push edi */
  push32((uint32_t)(EDI));
  /* 119f2954 push esi */
  push32((uint32_t)(ESI));
  /* 119f2955 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119f2958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119f295b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119f295e mov eax, ecx */
  EAX = (ECX);
  /* 119f2960 mov edx, ecx */
  EDX = (ECX);
  /* 119f2962 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2964 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2966 jbe 0x119f2970 */
  if ((C.cf||C.zf)) goto L_119f2970;
  /* 119f2968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f296a jb 0x119f2ae8 */
  if (C.cf) goto L_119f2ae8;
L_119f2970:;
  /* 119f2970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119f2976 jne 0x119f298c */
  if (!C.zf) goto L_119f298c;
  /* 119f2978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f297b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119f297e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2981 jb 0x119f29ac */
  if (C.cf) goto L_119f29ac;
  /* 119f2983 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2985 jmp dword ptr [edx*4 + 0x119f2a98] */
  switch (EDX) {
    case 0: goto L_119f2aa8;
    case 1: goto L_119f2ab0;
    case 2: goto L_119f2abc;
    case 3: goto L_119f2ad0;
    default: x86_unimpl("switch@0x119f2985 out of table"); return;
  }
L_119f298c:;
  /* 119f298c mov eax, edi */
  EAX = (EDI);
  /* 119f298e mov edx, 3 */
  EDX = (0x3u);
  /* 119f2993 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2996 jb 0x119f29a4 */
  if (C.cf) goto L_119f29a4;
  /* 119f2998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119f299b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f299d jmp dword ptr [eax*4 + 0x119f29b0] */
  switch (EAX) {
    case 1: goto L_119f29c0;
    case 2: goto L_119f29ec;
    case 3: goto L_119f2a10;
    default: x86_unimpl("switch@0x119f299d out of table"); return;
  }
L_119f29a4:;
  /* 119f29a4 jmp dword ptr [ecx*4 + 0x119f2aa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x119f2aa8)))); return;
  /* 119f29ab nop  */
  /* nop */
L_119f29ac:;
  /* 119f29ac jmp dword ptr [ecx*4 + 0x119f2a2c] */
  switch (ECX) {
    case 0: goto L_119f2a8f;
    case 1: goto L_119f2a7c;
    case 2: goto L_119f2a74;
    case 3: goto L_119f2a6c;
    case 4: goto L_119f2a64;
    case 5: goto L_119f2a5c;
    case 6: goto L_119f2a54;
    case 7: goto L_119f2a4c;
    default: x86_unimpl("switch@0x119f29ac out of table"); return;
  }
  /* 119f29b3 nop  */
  /* nop */
L_119f29c0:;
  /* 119f29c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f29c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f29c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f29c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f29c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f29cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f29cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f29d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f29d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f29d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f29db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f29de jb 0x119f29ac */
  if (C.cf) goto L_119f29ac;
  /* 119f29e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f29e2 jmp dword ptr [edx*4 + 0x119f2a98] */
  switch (EDX) {
    case 0: goto L_119f2aa8;
    case 1: goto L_119f2ab0;
    case 2: goto L_119f2abc;
    case 3: goto L_119f2ad0;
    default: x86_unimpl("switch@0x119f29e2 out of table"); return;
  }
  /* 119f29e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f29ec:;
  /* 119f29ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f29ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f29f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f29f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f29f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f29f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f29fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f29fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2a01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2a04 jb 0x119f29ac */
  if (C.cf) goto L_119f29ac;
  /* 119f2a06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2a08 jmp dword ptr [edx*4 + 0x119f2a98] */
  switch (EDX) {
    case 0: goto L_119f2aa8;
    case 1: goto L_119f2ab0;
    case 2: goto L_119f2abc;
    case 3: goto L_119f2ad0;
    default: x86_unimpl("switch@0x119f2a08 out of table"); return;
  }
  /* 119f2a0f nop  */
  /* nop */
L_119f2a10:;
  /* 119f2a10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f2a12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f2a14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f2a16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f2a17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f2a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f2a1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2a1e jb 0x119f29ac */
  if (C.cf) goto L_119f29ac;
  /* 119f2a20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2a22 jmp dword ptr [edx*4 + 0x119f2a98] */
  switch (EDX) {
    case 0: goto L_119f2aa8;
    case 1: goto L_119f2ab0;
    case 2: goto L_119f2abc;
    case 3: goto L_119f2ad0;
    default: x86_unimpl("switch@0x119f2a22 out of table"); return;
  }
  /* 119f2a29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f2a4c:;
  /* 119f2a4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 119f2a50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_119f2a54:;
  /* 119f2a54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 119f2a58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_119f2a5c:;
  /* 119f2a5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 119f2a60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_119f2a64:;
  /* 119f2a64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 119f2a68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_119f2a6c:;
  /* 119f2a6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 119f2a70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_119f2a74:;
  /* 119f2a74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 119f2a78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_119f2a7c:;
  /* 119f2a7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 119f2a80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 119f2a84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119f2a8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2a8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119f2a8f:;
  /* 119f2a8f jmp dword ptr [edx*4 + 0x119f2a98] */
  switch (EDX) {
    case 0: goto L_119f2aa8;
    case 1: goto L_119f2ab0;
    case 2: goto L_119f2abc;
    case 3: goto L_119f2ad0;
    default: x86_unimpl("switch@0x119f2a8f out of table"); return;
  }
  /* 119f2a96 mov edi, edi */
  EDI = (EDI);
L_119f2aa8:;
  /* 119f2aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2aab pop esi */
  ESI = (pop32());
  /* 119f2aac pop edi */
  EDI = (pop32());
  /* 119f2aad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2aae ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2aaf nop  */
  /* nop */
L_119f2ab0:;
  /* 119f2ab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f2ab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f2ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2ab7 pop esi */
  ESI = (pop32());
  /* 119f2ab8 pop edi */
  EDI = (pop32());
  /* 119f2ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2aba ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2abb nop  */
  /* nop */
L_119f2abc:;
  /* 119f2abc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f2abe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f2ac0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f2ac3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f2ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2ac9 pop esi */
  ESI = (pop32());
  /* 119f2aca pop edi */
  EDI = (pop32());
  /* 119f2acb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2acc ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2acd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f2ad0:;
  /* 119f2ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f2ad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f2ad4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f2ad7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f2ada mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f2add mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f2ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2ae3 pop esi */
  ESI = (pop32());
  /* 119f2ae4 pop edi */
  EDI = (pop32());
  /* 119f2ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2ae6 ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2ae7 nop  */
  /* nop */
L_119f2ae8:;
  /* 119f2ae8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 119f2aec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 119f2af0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119f2af6 jne 0x119f2b1c */
  if (!C.zf) goto L_119f2b1c;
  /* 119f2af8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f2afb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119f2afe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2b01 jb 0x119f2b10 */
  if (C.cf) goto L_119f2b10;
  /* 119f2b03 std  */
  C.df=1;
  /* 119f2b04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2b06 cld  */
  C.df=0;
  /* 119f2b07 jmp dword ptr [edx*4 + 0x119f2c30] */
  switch (EDX) {
    case 0: goto L_119f2c40;
    case 1: goto L_119f2c48;
    case 2: goto L_119f2c58;
    case 3: goto L_119f2c6c;
    default: x86_unimpl("switch@0x119f2b07 out of table"); return;
  }
  /* 119f2b0e mov edi, edi */
  EDI = (EDI);
L_119f2b10:;
  /* 119f2b10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119f2b12 jmp dword ptr [ecx*4 + 0x119f2be0] */
  switch (ECX) {
    case 0: goto L_119f2c27;
    default: x86_unimpl("switch@0x119f2b12 out of table"); return;
  }
  /* 119f2b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f2b1c:;
  /* 119f2b1c mov eax, edi */
  EAX = (EDI);
  /* 119f2b1e mov edx, 3 */
  EDX = (0x3u);
  /* 119f2b23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2b26 jb 0x119f2b34 */
  if (C.cf) goto L_119f2b34;
  /* 119f2b28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119f2b2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2b2d jmp dword ptr [eax*4 + 0x119f2b38] */
  switch (EAX) {
    case 1: goto L_119f2b48;
    case 2: goto L_119f2b68;
    case 3: goto L_119f2b90;
    default: x86_unimpl("switch@0x119f2b2d out of table"); return;
  }
L_119f2b34:;
  /* 119f2b34 jmp dword ptr [ecx*4 + 0x119f2c30] */
  switch (ECX) {
    case 0: goto L_119f2c40;
    case 1: goto L_119f2c48;
    case 2: goto L_119f2c58;
    case 3: goto L_119f2c6c;
    default: x86_unimpl("switch@0x119f2b34 out of table"); return;
  }
  /* 119f2b3b nop  */
  /* nop */
L_119f2b48:;
  /* 119f2b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f2b4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f2b4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f2b50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 119f2b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f2b54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119f2b55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2b58 jb 0x119f2b10 */
  if (C.cf) goto L_119f2b10;
  /* 119f2b5a std  */
  C.df=1;
  /* 119f2b5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2b5d cld  */
  C.df=0;
  /* 119f2b5e jmp dword ptr [edx*4 + 0x119f2c30] */
  switch (EDX) {
    case 0: goto L_119f2c40;
    case 1: goto L_119f2c48;
    case 2: goto L_119f2c58;
    case 3: goto L_119f2c6c;
    default: x86_unimpl("switch@0x119f2b5e out of table"); return;
  }
  /* 119f2b65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f2b68:;
  /* 119f2b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f2b6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f2b6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f2b70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f2b73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f2b76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f2b79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2b7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2b7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2b82 jb 0x119f2b10 */
  if (C.cf) goto L_119f2b10;
  /* 119f2b84 std  */
  C.df=1;
  /* 119f2b85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2b87 cld  */
  C.df=0;
  /* 119f2b88 jmp dword ptr [edx*4 + 0x119f2c30] */
  switch (EDX) {
    case 0: goto L_119f2c40;
    case 1: goto L_119f2c48;
    case 2: goto L_119f2c58;
    case 3: goto L_119f2c6c;
    default: x86_unimpl("switch@0x119f2b88 out of table"); return;
  }
  /* 119f2b8f nop  */
  /* nop */
L_119f2b90:;
  /* 119f2b90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f2b93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f2b95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f2b98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f2b9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f2b9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f2ba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f2ba4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f2ba7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2baa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2bad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2bb0 jb 0x119f2b10 */
  if (C.cf) goto L_119f2b10;
  /* 119f2bb6 std  */
  C.df=1;
  /* 119f2bb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f2bb9 cld  */
  C.df=0;
  /* 119f2bba jmp dword ptr [edx*4 + 0x119f2c30] */
  switch (EDX) {
    case 0: goto L_119f2c40;
    case 1: goto L_119f2c48;
    case 2: goto L_119f2c58;
    case 3: goto L_119f2c6c;
    default: x86_unimpl("switch@0x119f2bba out of table"); return;
  }
  /* 119f2bc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 119f2bc4 in al, 0x2b */
  x86_unimpl("in @ 0x119f2bc4");
  /* 119f2bc6 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f2bc7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2bc9 sub ebx, dword ptr [edi - 0x60d40bef] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + -0x60d40bef))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2bcf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2bd1 sub ebx, dword ptr [edi - 0x60d3fbef] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + -0x60d3fbef))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2bd7 adc dword ptr [esp + ebp], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f2bda lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f2bdb adc dword ptr [esp + ebp], edx */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f2bde lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f2be4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 119f2be8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 119f2bec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 119f2bf0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 119f2bf4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 119f2bf8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 119f2bfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 119f2c00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 119f2c04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 119f2c08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 119f2c0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 119f2c10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 119f2c14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 119f2c18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 119f2c1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119f2c23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2c25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119f2c27:;
  /* 119f2c27 jmp dword ptr [edx*4 + 0x119f2c30] */
  switch (EDX) {
    case 0: goto L_119f2c40;
    case 1: goto L_119f2c48;
    case 2: goto L_119f2c58;
    case 3: goto L_119f2c6c;
    default: x86_unimpl("switch@0x119f2c27 out of table"); return;
  }
  /* 119f2c2e mov edi, edi */
  EDI = (EDI);
L_119f2c40:;
  /* 119f2c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2c43 pop esi */
  ESI = (pop32());
  /* 119f2c44 pop edi */
  EDI = (pop32());
  /* 119f2c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2c46 ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2c47 nop  */
  /* nop */
L_119f2c48:;
  /* 119f2c48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f2c4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f2c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2c51 pop esi */
  ESI = (pop32());
  /* 119f2c52 pop edi */
  EDI = (pop32());
  /* 119f2c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2c54 ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f2c58:;
  /* 119f2c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f2c5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f2c5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f2c61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f2c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2c67 pop esi */
  ESI = (pop32());
  /* 119f2c68 pop edi */
  EDI = (pop32());
  /* 119f2c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2c6a ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
  /* 119f2c6b nop  */
  /* nop */
L_119f2c6c:;
  /* 119f2c6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f2c6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f2c72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f2c75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f2c78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f2c7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f2c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2c81 pop esi */
  ESI = (pop32());
  /* 119f2c82 pop edi */
  EDI = (pop32());
  /* 119f2c83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f2c84 ret  */
  ESPCHK(0x119f2950u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c85 @ 0x119f2c85 (62 bytes, 15 insns) */
void f_119f2c85(void) {
  FTRACE(0x119f2c85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2c85 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 119f2c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2c8c push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f2c92 call dword ptr [0x119f403c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f403c))), 0x119f2c98u);
  /* 119f2c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2c9a mov dword ptr [0x119f5714], eax */
  w32((uint32_t)(0x119f5714), (EAX));
  /* 119f2c9f jne 0x119f2ca2 */
  if (!C.zf) goto L_119f2ca2;
  /* 119f2ca1 ret  */
  ESPCHK(0x119f2c85u, _esp0);
  ESP += 4; return;
L_119f2ca2:;
  /* 119f2ca2 and dword ptr [0x119f570c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119f570c)))&(0x0u); w32((uint32_t)(0x119f570c), (_r)); fl_logic(_r,32); }
  /* 119f2ca9 and dword ptr [0x119f5710], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119f5710)))&(0x0u); w32((uint32_t)(0x119f5710), (_r)); fl_logic(_r,32); }
  /* 119f2cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f2cb2 mov dword ptr [0x119f5708], eax */
  w32((uint32_t)(0x119f5708), (EAX));
  /* 119f2cb7 mov dword ptr [0x119f5700], 0x10 */
  w32((uint32_t)(0x119f5700), (0x10u));
  /* 119f2cc1 pop eax */
  EAX = (pop32());
  /* 119f2cc2 ret  */
  ESPCHK(0x119f2c85u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cc3 @ 0x119f2cc3 (43 bytes, 14 insns) */
void f_119f2cc3(void) {
  FTRACE(0x119f2cc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2cc3 mov eax, dword ptr [0x119f5710] */
  EAX = (r32((uint32_t)(0x119f5710)));
  /* 119f2cc8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 119f2ccb mov eax, dword ptr [0x119f5714] */
  EAX = (r32((uint32_t)(0x119f5714)));
  /* 119f2cd0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_119f2cd3:;
  /* 119f2cd3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2cd5 jae 0x119f2ceb */
  if (!C.cf) goto L_119f2ceb;
  /* 119f2cd7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f2cdb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2cde cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2ce4 jb 0x119f2ced */
  if (C.cf) goto L_119f2ced;
  /* 119f2ce6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2ce9 jmp 0x119f2cd3 */
  goto L_119f2cd3;
L_119f2ceb:;
  /* 119f2ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119f2ced:;
  /* 119f2ced ret  */
  ESPCHK(0x119f2cc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cee @ 0x119f2cee (811 bytes, 264 insns) */
void f_119f2cee(void) {
  FTRACE(0x119f2ceeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f2cee push ebp */
  push32((uint32_t)(EBP));
  /* 119f2cef mov ebp, esp */
  EBP = (ESP);
  /* 119f2cf1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2cf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119f2cf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2cfa push ebx */
  push32((uint32_t)(EBX));
  /* 119f2cfb push esi */
  push32((uint32_t)(ESI));
  /* 119f2cfc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 119f2cff mov esi, edx */
  ESI = (EDX);
  /* 119f2d01 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2d04 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 119f2d07 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2d0a push edi */
  push32((uint32_t)(EDI));
  /* 119f2d0b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 119f2d0e mov ecx, esi */
  ECX = (ESI);
  /* 119f2d10 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 119f2d13 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119f2d19 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119f2d1a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 119f2d1d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 119f2d24 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 119f2d27 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119f2d2a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 119f2d2d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 119f2d30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119f2d33 jne 0x119f2db4 */
  if (!C.zf) goto L_119f2db4;
  /* 119f2d35 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119f2d38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119f2d3a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f2d3b pop edi */
  EDI = (pop32());
  /* 119f2d3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119f2d3f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2d41 jbe 0x119f2d46 */
  if ((C.cf||C.zf)) goto L_119f2d46;
  /* 119f2d43 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_119f2d46:;
  /* 119f2d46 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 119f2d4a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2d4e jne 0x119f2d98 */
  if (!C.zf) goto L_119f2d98;
  /* 119f2d50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119f2d53 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2d56 jae 0x119f2d74 */
  if (!C.cf) goto L_119f2d74;
  /* 119f2d58 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119f2d5d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119f2d5f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 119f2d63 not edi */
  EDI = (~(EDI));
  /* 119f2d65 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119f2d69 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 119f2d6b jne 0x119f2d98 */
  if (!C.zf) goto L_119f2d98;
  /* 119f2d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2d70 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 119f2d72 jmp 0x119f2d98 */
  goto L_119f2d98;
L_119f2d74:;
  /* 119f2d74 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2d77 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119f2d7c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119f2d7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119f2d81 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 119f2d85 not edi */
  EDI = (~(EDI));
  /* 119f2d87 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 119f2d8e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 119f2d90 jne 0x119f2d98 */
  if (!C.zf) goto L_119f2d98;
  /* 119f2d92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2d95 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_119f2d98:;
  /* 119f2d98 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 119f2d9c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 119f2da0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 119f2da3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 119f2da7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 119f2dab add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2dae mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 119f2db1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_119f2db4:;
  /* 119f2db4 mov edi, ebx */
  EDI = (EBX);
  /* 119f2db6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 119f2db9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119f2dba cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2dbd jbe 0x119f2dc2 */
  if ((C.cf||C.zf)) goto L_119f2dc2;
  /* 119f2dbf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119f2dc1 pop edi */
  EDI = (pop32());
L_119f2dc2:;
  /* 119f2dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f2dc5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119f2dc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119f2dcb jne 0x119f2e71 */
  if (!C.zf) goto L_119f2e71;
  /* 119f2dd1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f2dd7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119f2dda push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119f2ddc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119f2ddf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f2de0 pop edx */
  EDX = (pop32());
  /* 119f2de1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2de3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119f2de6 jbe 0x119f2ded */
  if ((C.cf||C.zf)) goto L_119f2ded;
  /* 119f2de8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 119f2deb mov ecx, edx */
  ECX = (EDX);
L_119f2ded:;
  /* 119f2ded add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2df0 mov edi, ebx */
  EDI = (EBX);
  /* 119f2df2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 119f2df5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 119f2df8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119f2df9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2dfb jbe 0x119f2dff */
  if ((C.cf||C.zf)) goto L_119f2dff;
  /* 119f2dfd mov edi, edx */
  EDI = (EDX);
L_119f2dff:;
  /* 119f2dff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2e01 je 0x119f2e6e */
  if (C.zf) goto L_119f2e6e;
  /* 119f2e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119f2e06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119f2e09 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2e0c jne 0x119f2e56 */
  if (!C.zf) goto L_119f2e56;
  /* 119f2e0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119f2e11 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2e14 jae 0x119f2e32 */
  if (!C.cf) goto L_119f2e32;
  /* 119f2e16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119f2e1b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119f2e1d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 119f2e21 not edx */
  EDX = (~(EDX));
  /* 119f2e23 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119f2e27 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 119f2e29 jne 0x119f2e56 */
  if (!C.zf) goto L_119f2e56;
  /* 119f2e2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2e2e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 119f2e30 jmp 0x119f2e56 */
  goto L_119f2e56;
L_119f2e32:;
  /* 119f2e32 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2e35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119f2e3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119f2e3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119f2e3f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 119f2e43 not edx */
  EDX = (~(EDX));
  /* 119f2e45 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 119f2e4c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 119f2e4e jne 0x119f2e56 */
  if (!C.zf) goto L_119f2e56;
  /* 119f2e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2e53 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_119f2e56:;
  /* 119f2e56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119f2e59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119f2e5c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 119f2e5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119f2e62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119f2e65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119f2e68 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 119f2e6b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_119f2e6e:;
  /* 119f2e6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_119f2e71:;
  /* 119f2e71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2e75 jne 0x119f2e80 */
  if (!C.zf) goto L_119f2e80;
  /* 119f2e77 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2e7a je 0x119f2f09 */
  if (C.zf) goto L_119f2f09;
L_119f2e80:;
  /* 119f2e80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119f2e83 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 119f2e86 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 119f2e89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119f2e8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119f2e8f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 119f2e92 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119f2e95 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119f2e98 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119f2e9b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119f2e9e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119f2ea1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2ea4 jne 0x119f2f09 */
  if (!C.zf) goto L_119f2f09;
  /* 119f2ea6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 119f2eaa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2ead mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 119f2eb0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119f2eb2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 119f2eb6 jae 0x119f2edd */
  if (!C.cf) goto L_119f2edd;
  /* 119f2eb8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f2ebc jne 0x119f2ecc */
  if (!C.zf) goto L_119f2ecc;
  /* 119f2ebe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 119f2ec3 mov ecx, edi */
  ECX = (EDI);
  /* 119f2ec5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 119f2ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2eca or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_119f2ecc:;
  /* 119f2ecc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 119f2ed1 mov ecx, edi */
  ECX = (EDI);
  /* 119f2ed3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 119f2ed5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 119f2ed9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 119f2edb jmp 0x119f2f06 */
  goto L_119f2f06;
L_119f2edd:;
  /* 119f2edd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f2ee1 jne 0x119f2ef3 */
  if (!C.zf) goto L_119f2ef3;
  /* 119f2ee3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 119f2ee6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 119f2eeb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 119f2eed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2ef0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_119f2ef3:;
  /* 119f2ef3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 119f2ef6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119f2efb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119f2efd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 119f2f04 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_119f2f06:;
  /* 119f2f06 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_119f2f09:;
  /* 119f2f09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119f2f0c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 119f2f0e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 119f2f12 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 119f2f14 jne 0x119f3014 */
  if (!C.zf) goto L_119f3014;
  /* 119f2f1a mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f2f21 je 0x119f3006 */
  if (C.zf) goto L_119f3006;
  /* 119f2f27 mov ecx, dword ptr [0x119f5704] */
  ECX = (r32((uint32_t)(0x119f5704)));
  /* 119f2f2d mov edi, dword ptr [0x119f40a0] */
  EDI = (r32((uint32_t)(0x119f40a0)));
  /* 119f2f33 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 119f2f36 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2f39 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 119f2f3e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119f2f43 push ebx */
  push32((uint32_t)(EBX));
  /* 119f2f44 push ecx */
  push32((uint32_t)(ECX));
  /* 119f2f45 call edi */
  call_ind((uint32_t)(EDI), 0x119f2f47u);
  /* 119f2f47 mov ecx, dword ptr [0x119f5704] */
  ECX = (r32((uint32_t)(0x119f5704)));
  /* 119f2f4d mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2f52 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119f2f57 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119f2f59 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 119f2f5c mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2f61 mov ecx, dword ptr [0x119f5704] */
  ECX = (r32((uint32_t)(0x119f5704)));
  /* 119f2f67 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 119f2f6a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 119f2f72 mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2f77 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 119f2f7a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 119f2f7d mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2f82 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119f2f85 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f2f89 jne 0x119f2f94 */
  if (!C.zf) goto L_119f2f94;
  /* 119f2f8b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 119f2f8f mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
L_119f2f94:;
  /* 119f2f94 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2f98 jne 0x119f3006 */
  if (!C.zf) goto L_119f3006;
  /* 119f2f9a push ebx */
  push32((uint32_t)(EBX));
  /* 119f2f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2f9d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 119f2fa0 call edi */
  call_ind((uint32_t)(EDI), 0x119f2fa2u);
  /* 119f2fa2 mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2fa7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 119f2faa push 0 */
  push32((uint32_t)(0x0u));
  /* 119f2fac push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f2fb2 call dword ptr [0x119f40a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40a4))), 0x119f2fb8u);
  /* 119f2fb8 mov eax, dword ptr [0x119f5710] */
  EAX = (r32((uint32_t)(0x119f5710)));
  /* 119f2fbd mov edx, dword ptr [0x119f5714] */
  EDX = (r32((uint32_t)(0x119f5714)));
  /* 119f2fc3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119f2fc6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 119f2fc9 mov ecx, eax */
  ECX = (EAX);
  /* 119f2fcb mov eax, dword ptr [0x119f570c] */
  EAX = (r32((uint32_t)(0x119f570c)));
  /* 119f2fd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f2fd2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 119f2fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 119f2fd7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 119f2fda push ecx */
  push32((uint32_t)(ECX));
  /* 119f2fdb push eax */
  push32((uint32_t)(EAX));
  /* 119f2fdc call 0x119f3a70 */
  push32(0x119f2fe1u); f_119f3a70();
  /* 119f2fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f2fe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f2fe7 dec dword ptr [0x119f5710] */
  { uint32_t _r=(r32((uint32_t)(0x119f5710)))-1; w32((uint32_t)(0x119f5710), (_r)); fl_dec(_r,32); }
  /* 119f2fed cmp eax, dword ptr [0x119f570c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119f570c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f2ff3 jbe 0x119f2ff8 */
  if ((C.cf||C.zf)) goto L_119f2ff8;
  /* 119f2ff5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_119f2ff8:;
  /* 119f2ff8 mov ecx, dword ptr [0x119f5714] */
  ECX = (r32((uint32_t)(0x119f5714)));
  /* 119f2ffe mov dword ptr [0x119f5708], ecx */
  w32((uint32_t)(0x119f5708), (ECX));
  /* 119f3004 jmp 0x119f3009 */
  goto L_119f3009;
L_119f3006:;
  /* 119f3006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_119f3009:;
  /* 119f3009 mov dword ptr [0x119f570c], eax */
  w32((uint32_t)(0x119f570c), (EAX));
  /* 119f300e mov dword ptr [0x119f5704], esi */
  w32((uint32_t)(0x119f5704), (ESI));
L_119f3014:;
  /* 119f3014 pop edi */
  EDI = (pop32());
  /* 119f3015 pop esi */
  ESI = (pop32());
  /* 119f3016 pop ebx */
  EBX = (pop32());
  /* 119f3017 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3018 ret  */
  ESPCHK(0x119f2ceeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003019 @ 0x119f3019 (777 bytes, 275 insns) */
void f_119f3019(void) {
  FTRACE(0x119f3019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3019 push ebp */
  push32((uint32_t)(EBP));
  /* 119f301a mov ebp, esp */
  EBP = (ESP);
  /* 119f301c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f301f mov eax, dword ptr [0x119f5710] */
  EAX = (r32((uint32_t)(0x119f5710)));
  /* 119f3024 mov edx, dword ptr [0x119f5714] */
  EDX = (r32((uint32_t)(0x119f5714)));
  /* 119f302a push ebx */
  push32((uint32_t)(EBX));
  /* 119f302b push esi */
  push32((uint32_t)(ESI));
  /* 119f302c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119f302f push edi */
  push32((uint32_t)(EDI));
  /* 119f3030 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 119f3033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3036 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 119f3039 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 119f303c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 119f303f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119f3042 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119f3045 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f3046 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3049 jge 0x119f3059 */
  if ((C.sf==C.of)) goto L_119f3059;
  /* 119f304b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 119f304e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 119f3050 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 119f3054 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 119f3057 jmp 0x119f3069 */
  goto L_119f3069;
L_119f3059:;
  /* 119f3059 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f305c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f305f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119f3061 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119f3063 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 119f3066 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119f3069:;
  /* 119f3069 mov eax, dword ptr [0x119f5708] */
  EAX = (r32((uint32_t)(0x119f5708)));
  /* 119f306e mov ebx, eax */
  EBX = (EAX);
  /* 119f3070 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3072 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f3075 jae 0x119f3090 */
  if (!C.cf) goto L_119f3090;
L_119f3077:;
  /* 119f3077 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 119f307a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 119f307c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119f307f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 119f3081 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119f3083 jne 0x119f3090 */
  if (!C.zf) goto L_119f3090;
  /* 119f3085 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3088 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f308b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f308e jb 0x119f3077 */
  if (C.cf) goto L_119f3077;
L_119f3090:;
  /* 119f3090 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3093 jne 0x119f310e */
  if (!C.zf) goto L_119f310e;
  /* 119f3095 mov ebx, edx */
  EBX = (EDX);
L_119f3097:;
  /* 119f3097 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3099 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f309c jae 0x119f30b3 */
  if (!C.cf) goto L_119f30b3;
  /* 119f309e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 119f30a1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 119f30a3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119f30a6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 119f30a8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119f30aa jne 0x119f30b1 */
  if (!C.zf) goto L_119f30b1;
  /* 119f30ac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f30af jmp 0x119f3097 */
  goto L_119f3097;
L_119f30b1:;
  /* 119f30b1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_119f30b3:;
  /* 119f30b3 jne 0x119f310e */
  if (!C.zf) goto L_119f310e;
L_119f30b5:;
  /* 119f30b5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f30b8 jae 0x119f30cb */
  if (!C.cf) goto L_119f30cb;
  /* 119f30ba cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f30be jne 0x119f30c8 */
  if (!C.zf) goto L_119f30c8;
  /* 119f30c0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f30c3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f30c6 jmp 0x119f30b5 */
  goto L_119f30b5;
L_119f30c8:;
  /* 119f30c8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_119f30cb:;
  /* 119f30cb jne 0x119f30f3 */
  if (!C.zf) goto L_119f30f3;
  /* 119f30cd mov ebx, edx */
  EBX = (EDX);
L_119f30cf:;
  /* 119f30cf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f30d1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f30d4 jae 0x119f30e3 */
  if (!C.cf) goto L_119f30e3;
  /* 119f30d6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f30da jne 0x119f30e1 */
  if (!C.zf) goto L_119f30e1;
  /* 119f30dc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f30df jmp 0x119f30cf */
  goto L_119f30cf;
L_119f30e1:;
  /* 119f30e1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_119f30e3:;
  /* 119f30e3 jne 0x119f30f3 */
  if (!C.zf) goto L_119f30f3;
  /* 119f30e5 call 0x119f3322 */
  push32(0x119f30eau); f_119f3322();
  /* 119f30ea mov ebx, eax */
  EBX = (EAX);
  /* 119f30ec test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119f30ee mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119f30f1 je 0x119f3107 */
  if (C.zf) goto L_119f3107;
L_119f30f3:;
  /* 119f30f3 push ebx */
  push32((uint32_t)(EBX));
  /* 119f30f4 call 0x119f33d3 */
  push32(0x119f30f9u); f_119f33d3();
  /* 119f30f9 pop ecx */
  ECX = (pop32());
  /* 119f30fa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 119f30fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119f30ff mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 119f3102 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3105 jne 0x119f310e */
  if (!C.zf) goto L_119f310e;
L_119f3107:;
  /* 119f3107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f3109 jmp 0x119f331d */
  goto L_119f331d;
L_119f310e:;
  /* 119f310e mov dword ptr [0x119f5708], ebx */
  w32((uint32_t)(0x119f5708), (EBX));
  /* 119f3114 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 119f3117 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 119f3119 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f311c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119f311f je 0x119f3135 */
  if (C.zf) goto L_119f3135;
  /* 119f3121 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 119f3128 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 119f312c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119f312f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 119f3131 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119f3133 jne 0x119f316c */
  if (!C.zf) goto L_119f316c;
L_119f3135:;
  /* 119f3135 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 119f313b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 119f313e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119f3141 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 119f3144 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f3148 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 119f314b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 119f314d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 119f3150 jne 0x119f3169 */
  if (!C.zf) goto L_119f3169;
L_119f3152:;
  /* 119f3152 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 119f3158 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 119f315b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119f315e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3161 mov edi, esi */
  EDI = (ESI);
  /* 119f3163 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 119f3165 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 119f3167 je 0x119f3152 */
  if (C.zf) goto L_119f3152;
L_119f3169:;
  /* 119f3169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_119f316c:;
  /* 119f316c mov ecx, edx */
  ECX = (EDX);
  /* 119f316e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f3170 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119f3176 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 119f317d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119f3180 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 119f3184 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 119f3186 jne 0x119f3195 */
  if (!C.zf) goto L_119f3195;
  /* 119f3188 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 119f318f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119f3191 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119f3194 pop edi */
  EDI = (pop32());
L_119f3195:;
  /* 119f3195 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119f3197 jl 0x119f319e */
  if ((C.sf!=C.of)) goto L_119f319e;
  /* 119f3199 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119f319b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f319c jmp 0x119f3195 */
  goto L_119f3195;
L_119f319e:;
  /* 119f319e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119f31a1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 119f31a5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 119f31a7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f31aa mov esi, ecx */
  ESI = (ECX);
  /* 119f31ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119f31af sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 119f31b2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 119f31b3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f31b6 jle 0x119f31bb */
  if ((C.zf||C.sf!=C.of)) goto L_119f31bb;
  /* 119f31b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119f31ba pop esi */
  ESI = (pop32());
L_119f31bb:;
  /* 119f31bb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f31bd je 0x119f32d0 */
  if (C.zf) goto L_119f32d0;
  /* 119f31c3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119f31c6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f31c9 jne 0x119f322c */
  if (!C.zf) goto L_119f322c;
  /* 119f31cb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f31ce jge 0x119f31fb */
  if ((C.sf==C.of)) goto L_119f31fb;
  /* 119f31d0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 119f31d5 mov ecx, edi */
  ECX = (EDI);
  /* 119f31d7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 119f31d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f31dc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 119f31e0 not ebx */
  EBX = (~(EBX));
  /* 119f31e2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 119f31e5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 119f31e9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 119f31ed dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 119f31ef jne 0x119f3229 */
  if (!C.zf) goto L_119f3229;
  /* 119f31f1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f31f4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119f31f7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 119f31f9 jmp 0x119f322c */
  goto L_119f322c;
L_119f31fb:;
  /* 119f31fb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 119f31fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 119f3203 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 119f3205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f3208 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 119f320c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 119f3213 not ebx */
  EBX = (~(EBX));
  /* 119f3215 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 119f3217 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 119f3219 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 119f321c jne 0x119f3229 */
  if (!C.zf) goto L_119f3229;
  /* 119f321e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3221 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119f3224 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 119f3227 jmp 0x119f322c */
  goto L_119f322c;
L_119f3229:;
  /* 119f3229 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_119f322c:;
  /* 119f322c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 119f322f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 119f3232 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3236 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 119f3239 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119f323c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 119f323f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 119f3242 je 0x119f32dc */
  if (C.zf) goto L_119f32dc;
  /* 119f3248 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119f324b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 119f324f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 119f3252 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 119f3255 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119f3258 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119f325b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119f325e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119f3261 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119f3264 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3267 jne 0x119f32cd */
  if (!C.zf) goto L_119f32cd;
  /* 119f3269 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 119f326d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3270 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 119f3273 jge 0x119f329e */
  if ((C.sf==C.of)) goto L_119f329e;
  /* 119f3275 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119f3277 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f327b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 119f327f jne 0x119f328c */
  if (!C.zf) goto L_119f328c;
  /* 119f3281 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119f3286 mov ecx, esi */
  ECX = (ESI);
  /* 119f3288 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119f328a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_119f328c:;
  /* 119f328c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119f3291 mov ecx, esi */
  ECX = (ESI);
  /* 119f3293 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119f3295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f3298 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119f329c jmp 0x119f32cd */
  goto L_119f32cd;
L_119f329e:;
  /* 119f329e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119f32a0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f32a4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 119f32a8 jne 0x119f32b7 */
  if (!C.zf) goto L_119f32b7;
  /* 119f32aa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 119f32ad mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119f32b2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119f32b4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_119f32b7:;
  /* 119f32b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f32ba lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 119f32c1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 119f32c4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 119f32c9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 119f32cb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_119f32cd:;
  /* 119f32cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_119f32d0:;
  /* 119f32d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119f32d2 je 0x119f32df */
  if (C.zf) goto L_119f32df;
  /* 119f32d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119f32d6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 119f32da jmp 0x119f32df */
  goto L_119f32df;
L_119f32dc:;
  /* 119f32dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_119f32df:;
  /* 119f32df mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 119f32e2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f32e4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 119f32e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119f32e9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 119f32ed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 119f32f0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 119f32f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119f32f4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 119f32f7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 119f32f9 jne 0x119f3315 */
  if (!C.zf) goto L_119f3315;
  /* 119f32fb cmp ebx, dword ptr [0x119f570c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x119f570c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3301 jne 0x119f3315 */
  if (!C.zf) goto L_119f3315;
  /* 119f3303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f3306 cmp ecx, dword ptr [0x119f5704] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119f5704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f330c jne 0x119f3315 */
  if (!C.zf) goto L_119f3315;
  /* 119f330e and dword ptr [0x119f570c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x119f570c)))&(0x0u); w32((uint32_t)(0x119f570c), (_r)); fl_logic(_r,32); }
L_119f3315:;
  /* 119f3315 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f3318 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119f331a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_119f331d:;
  /* 119f331d pop edi */
  EDI = (pop32());
  /* 119f331e pop esi */
  ESI = (pop32());
  /* 119f331f pop ebx */
  EBX = (pop32());
  /* 119f3320 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3321 ret  */
  ESPCHK(0x119f3019u, _esp0);
  ESP += 4; return;
}

/* FUN_10003322 @ 0x119f3322 (177 bytes, 53 insns) */
void f_119f3322(void) {
  FTRACE(0x119f3322u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3322 mov eax, dword ptr [0x119f5710] */
  EAX = (r32((uint32_t)(0x119f5710)));
  /* 119f3327 mov ecx, dword ptr [0x119f5700] */
  ECX = (r32((uint32_t)(0x119f5700)));
  /* 119f332d push esi */
  push32((uint32_t)(ESI));
  /* 119f332e push edi */
  push32((uint32_t)(EDI));
  /* 119f332f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f3331 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3333 jne 0x119f3365 */
  if (!C.zf) goto L_119f3365;
  /* 119f3335 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 119f3339 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 119f333c push eax */
  push32((uint32_t)(EAX));
  /* 119f333d push dword ptr [0x119f5714] */
  push32((uint32_t)(r32((uint32_t)(0x119f5714))));
  /* 119f3343 push edi */
  push32((uint32_t)(EDI));
  /* 119f3344 push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f334a call dword ptr [0x119f4028] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4028))), 0x119f3350u);
  /* 119f3350 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3352 je 0x119f33b5 */
  if (C.zf) goto L_119f33b5;
  /* 119f3354 add dword ptr [0x119f5700], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x119f5700))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x119f5700), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f335b mov dword ptr [0x119f5714], eax */
  w32((uint32_t)(0x119f5714), (EAX));
  /* 119f3360 mov eax, dword ptr [0x119f5710] */
  EAX = (r32((uint32_t)(0x119f5710)));
L_119f3365:;
  /* 119f3365 mov ecx, dword ptr [0x119f5714] */
  ECX = (r32((uint32_t)(0x119f5714)));
  /* 119f336b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 119f3370 push 8 */
  push32((uint32_t)(0x8u));
  /* 119f3372 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119f3375 push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f337b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 119f337e call dword ptr [0x119f403c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f403c))), 0x119f3384u);
  /* 119f3384 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3386 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 119f3389 je 0x119f33b5 */
  if (C.zf) goto L_119f33b5;
  /* 119f338b push 4 */
  push32((uint32_t)(0x4u));
  /* 119f338d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 119f3392 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 119f3397 push edi */
  push32((uint32_t)(EDI));
  /* 119f3398 call dword ptr [0x119f402c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f402c))), 0x119f339eu);
  /* 119f339e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f33a0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 119f33a3 jne 0x119f33b9 */
  if (!C.zf) goto L_119f33b9;
  /* 119f33a5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 119f33a8 push edi */
  push32((uint32_t)(EDI));
  /* 119f33a9 push dword ptr [0x119f5948] */
  push32((uint32_t)(r32((uint32_t)(0x119f5948))));
  /* 119f33af call dword ptr [0x119f40a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f40a4))), 0x119f33b5u);
L_119f33b5:;
  /* 119f33b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f33b7 jmp 0x119f33d0 */
  goto L_119f33d0;
L_119f33b9:;
  /* 119f33b9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 119f33bd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 119f33bf mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 119f33c2 inc dword ptr [0x119f5710] */
  { uint32_t _r=(r32((uint32_t)(0x119f5710)))+1; w32((uint32_t)(0x119f5710), (_r)); fl_inc(_r,32); }
  /* 119f33c8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 119f33cb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 119f33ce mov eax, esi */
  EAX = (ESI);
L_119f33d0:;
  /* 119f33d0 pop edi */
  EDI = (pop32());
  /* 119f33d1 pop esi */
  ESI = (pop32());
  /* 119f33d2 ret  */
  ESPCHK(0x119f3322u, _esp0);
  ESP += 4; return;
}

/* FUN_100033d3 @ 0x119f33d3 (251 bytes, 85 insns) */
void f_119f33d3(void) {
  FTRACE(0x119f33d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f33d3 push ebp */
  push32((uint32_t)(EBP));
  /* 119f33d4 mov ebp, esp */
  EBP = (ESP);
  /* 119f33d6 push ecx */
  push32((uint32_t)(ECX));
  /* 119f33d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f33da push ebx */
  push32((uint32_t)(EBX));
  /* 119f33db push esi */
  push32((uint32_t)(ESI));
  /* 119f33dc push edi */
  push32((uint32_t)(EDI));
  /* 119f33dd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 119f33e0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 119f33e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_119f33e5:;
  /* 119f33e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f33e7 jl 0x119f33ee */
  if ((C.sf!=C.of)) goto L_119f33ee;
  /* 119f33e9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119f33eb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119f33ec jmp 0x119f33e5 */
  goto L_119f33e5;
L_119f33ee:;
  /* 119f33ee mov eax, ebx */
  EAX = (EBX);
  /* 119f33f0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119f33f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119f33f8 pop edx */
  EDX = (pop32());
  /* 119f33f9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 119f3400 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119f3403:;
  /* 119f3403 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 119f3406 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 119f3409 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f340c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 119f340d jne 0x119f3403 */
  if (!C.zf) goto L_119f3403;
  /* 119f340f mov edi, ebx */
  EDI = (EBX);
  /* 119f3411 push 4 */
  push32((uint32_t)(0x4u));
  /* 119f3413 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 119f3416 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3419 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119f341e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119f3423 push edi */
  push32((uint32_t)(EDI));
  /* 119f3424 call dword ptr [0x119f402c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f402c))), 0x119f342au);
  /* 119f342a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f342c jne 0x119f3436 */
  if (!C.zf) goto L_119f3436;
  /* 119f342e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f3431 jmp 0x119f34c9 */
  goto L_119f34c9;
L_119f3436:;
  /* 119f3436 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 119f343c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f343e ja 0x119f347c */
  if ((!C.cf&&!C.zf)) goto L_119f347c;
  /* 119f3440 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_119f3443:;
  /* 119f3443 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 119f3447 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 119f344e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 119f3454 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 119f345b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119f345d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 119f3463 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119f3466 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 119f3470 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3475 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 119f3478 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f347a jbe 0x119f3443 */
  if ((C.cf||C.zf)) goto L_119f3443;
L_119f347c:;
  /* 119f347c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119f347f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 119f3482 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3487 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3489 pop edi */
  EDI = (pop32());
  /* 119f348a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119f348d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 119f3490 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 119f3493 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 119f3496 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119f3499 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119f349e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 119f34a5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 119f34a8 mov cl, al */
  CL = (AL);
  /* 119f34aa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119f34ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f34ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f34b1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 119f34b4 jne 0x119f34b9 */
  if (!C.zf) goto L_119f34b9;
  /* 119f34b6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_119f34b9:;
  /* 119f34b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119f34be mov ecx, ebx */
  ECX = (EBX);
  /* 119f34c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119f34c2 not edx */
  EDX = (~(EDX));
  /* 119f34c4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 119f34c7 mov eax, ebx */
  EAX = (EBX);
L_119f34c9:;
  /* 119f34c9 pop edi */
  EDI = (pop32());
  /* 119f34ca pop esi */
  ESI = (pop32());
  /* 119f34cb pop ebx */
  EBX = (pop32());
  /* 119f34cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f34cd ret  */
  ESPCHK(0x119f33d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100034ce @ 0x119f34ce (137 bytes, 50 insns) */
void f_119f34ce(void) {
  FTRACE(0x119f34ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f34ce push ebx */
  push32((uint32_t)(EBX));
  /* 119f34cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f34d1 cmp dword ptr [0x119f56c4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119f56c4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f34d7 push esi */
  push32((uint32_t)(ESI));
  /* 119f34d8 push edi */
  push32((uint32_t)(EDI));
  /* 119f34d9 jne 0x119f351d */
  if (!C.zf) goto L_119f351d;
  /* 119f34db push 0x119f4428 */
  push32((uint32_t)(0x119f4428u));
  /* 119f34e0 call dword ptr [0x119f401c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f401c))), 0x119f34e6u);
  /* 119f34e6 mov edi, eax */
  EDI = (EAX);
  /* 119f34e8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f34ea je 0x119f3553 */
  if (C.zf) goto L_119f3553;
  /* 119f34ec mov esi, dword ptr [0x119f4020] */
  ESI = (r32((uint32_t)(0x119f4020)));
  /* 119f34f2 push 0x119f441c */
  push32((uint32_t)(0x119f441cu));
  /* 119f34f7 push edi */
  push32((uint32_t)(EDI));
  /* 119f34f8 call esi */
  call_ind((uint32_t)(ESI), 0x119f34fau);
  /* 119f34fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f34fc mov dword ptr [0x119f56c4], eax */
  w32((uint32_t)(0x119f56c4), (EAX));
  /* 119f3501 je 0x119f3553 */
  if (C.zf) goto L_119f3553;
  /* 119f3503 push 0x119f440c */
  push32((uint32_t)(0x119f440cu));
  /* 119f3508 push edi */
  push32((uint32_t)(EDI));
  /* 119f3509 call esi */
  call_ind((uint32_t)(ESI), 0x119f350bu);
  /* 119f350b push 0x119f43f8 */
  push32((uint32_t)(0x119f43f8u));
  /* 119f3510 push edi */
  push32((uint32_t)(EDI));
  /* 119f3511 mov dword ptr [0x119f56c8], eax */
  w32((uint32_t)(0x119f56c8), (EAX));
  /* 119f3516 call esi */
  call_ind((uint32_t)(ESI), 0x119f3518u);
  /* 119f3518 mov dword ptr [0x119f56cc], eax */
  w32((uint32_t)(0x119f56cc), (EAX));
L_119f351d:;
  /* 119f351d mov eax, dword ptr [0x119f56c8] */
  EAX = (r32((uint32_t)(0x119f56c8)));
  /* 119f3522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f3524 je 0x119f353c */
  if (C.zf) goto L_119f353c;
  /* 119f3526 call eax */
  call_ind((uint32_t)(EAX), 0x119f3528u);
  /* 119f3528 mov ebx, eax */
  EBX = (EAX);
  /* 119f352a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119f352c je 0x119f353c */
  if (C.zf) goto L_119f353c;
  /* 119f352e mov eax, dword ptr [0x119f56cc] */
  EAX = (r32((uint32_t)(0x119f56cc)));
  /* 119f3533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f3535 je 0x119f353c */
  if (C.zf) goto L_119f353c;
  /* 119f3537 push ebx */
  push32((uint32_t)(EBX));
  /* 119f3538 call eax */
  call_ind((uint32_t)(EAX), 0x119f353au);
  /* 119f353a mov ebx, eax */
  EBX = (EAX);
L_119f353c:;
  /* 119f353c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 119f3540 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 119f3544 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 119f3548 push ebx */
  push32((uint32_t)(EBX));
  /* 119f3549 call dword ptr [0x119f56c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f56c4))), 0x119f354fu);
L_119f354f:;
  /* 119f354f pop edi */
  EDI = (pop32());
  /* 119f3550 pop esi */
  ESI = (pop32());
  /* 119f3551 pop ebx */
  EBX = (pop32());
  /* 119f3552 ret  */
  ESPCHK(0x119f34ceu, _esp0);
  ESP += 4; return;
L_119f3553:;
  /* 119f3553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f3555 jmp 0x119f354f */
  goto L_119f354f;
}

/* _strncpy @ 0x119f3560 (254 bytes, 109 insns) */
void f_119f3560(void) {
  FTRACE(0x119f3560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3560 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119f3564 push edi */
  push32((uint32_t)(EDI));
  /* 119f3565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119f3567 je 0x119f35e3 */
  if (C.zf) goto L_119f35e3;
  /* 119f3569 push esi */
  push32((uint32_t)(ESI));
  /* 119f356a push ebx */
  push32((uint32_t)(EBX));
  /* 119f356b mov ebx, ecx */
  EBX = (ECX);
  /* 119f356d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 119f3571 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 119f3577 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 119f357b jne 0x119f3584 */
  if (!C.zf) goto L_119f3584;
  /* 119f357d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3580 jne 0x119f35f1 */
  if (!C.zf) goto L_119f35f1;
  /* 119f3582 jmp 0x119f35a5 */
  goto L_119f35a5;
L_119f3584:;
  /* 119f3584 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3586 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f3587 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3589 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f358a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f358b je 0x119f35b2 */
  if (C.zf) goto L_119f35b2;
  /* 119f358d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f358f je 0x119f35ba */
  if (C.zf) goto L_119f35ba;
  /* 119f3591 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 119f3597 jne 0x119f3584 */
  if (!C.zf) goto L_119f3584;
  /* 119f3599 mov ebx, ecx */
  EBX = (ECX);
  /* 119f359b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f359e jne 0x119f35f1 */
  if (!C.zf) goto L_119f35f1;
L_119f35a0:;
  /* 119f35a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 119f35a3 je 0x119f35b2 */
  if (C.zf) goto L_119f35b2;
L_119f35a5:;
  /* 119f35a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f35a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f35a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f35aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f35ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119f35ad je 0x119f35de */
  if (C.zf) goto L_119f35de;
  /* 119f35af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119f35b0 jne 0x119f35a5 */
  if (!C.zf) goto L_119f35a5;
L_119f35b2:;
  /* 119f35b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119f35b6 pop ebx */
  EBX = (pop32());
  /* 119f35b7 pop esi */
  ESI = (pop32());
  /* 119f35b8 pop edi */
  EDI = (pop32());
  /* 119f35b9 ret  */
  ESPCHK(0x119f3560u, _esp0);
  ESP += 4; return;
L_119f35ba:;
  /* 119f35ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119f35c0 je 0x119f35d4 */
  if (C.zf) goto L_119f35d4;
L_119f35c2:;
  /* 119f35c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f35c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f35c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f35c6 je 0x119f3656 */
  if (C.zf) goto L_119f3656;
  /* 119f35cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119f35d2 jne 0x119f35c2 */
  if (!C.zf) goto L_119f35c2;
L_119f35d4:;
  /* 119f35d4 mov ebx, ecx */
  EBX = (ECX);
  /* 119f35d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f35d9 jne 0x119f3647 */
  if (!C.zf) goto L_119f3647;
L_119f35db:;
  /* 119f35db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f35dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_119f35de:;
  /* 119f35de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 119f35df jne 0x119f35db */
  if (!C.zf) goto L_119f35db;
  /* 119f35e1 pop ebx */
  EBX = (pop32());
  /* 119f35e2 pop esi */
  ESI = (pop32());
L_119f35e3:;
  /* 119f35e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f35e7 pop edi */
  EDI = (pop32());
  /* 119f35e8 ret  */
  ESPCHK(0x119f3560u, _esp0);
  ESP += 4; return;
L_119f35e9:;
  /* 119f35e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119f35eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f35ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f35ef je 0x119f35a0 */
  if (C.zf) goto L_119f35a0;
L_119f35f1:;
  /* 119f35f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119f35f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119f35f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f35fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119f35fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119f35ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 119f3601 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3604 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119f3609 je 0x119f35e9 */
  if (C.zf) goto L_119f35e9;
  /* 119f360b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119f360d je 0x119f363b */
  if (C.zf) goto L_119f363b;
  /* 119f360f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 119f3611 je 0x119f3631 */
  if (C.zf) goto L_119f3631;
  /* 119f3613 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 119f3619 je 0x119f3627 */
  if (C.zf) goto L_119f3627;
  /* 119f361b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 119f3621 jne 0x119f35e9 */
  if (!C.zf) goto L_119f35e9;
  /* 119f3623 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119f3625 jmp 0x119f363f */
  goto L_119f363f;
L_119f3627:;
  /* 119f3627 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119f362d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119f362f jmp 0x119f363f */
  goto L_119f363f;
L_119f3631:;
  /* 119f3631 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119f3637 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119f3639 jmp 0x119f363f */
  goto L_119f363f;
L_119f363b:;
  /* 119f363b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119f363d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_119f363f:;
  /* 119f363f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f3644 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f3645 je 0x119f3651 */
  if (C.zf) goto L_119f3651;
L_119f3647:;
  /* 119f3647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119f3649:;
  /* 119f3649 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 119f364b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f364e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f364f jne 0x119f3649 */
  if (!C.zf) goto L_119f3649;
L_119f3651:;
  /* 119f3651 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 119f3654 jne 0x119f35db */
  if (!C.zf) goto L_119f35db;
L_119f3656:;
  /* 119f3656 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119f365a pop ebx */
  EBX = (pop32());
  /* 119f365b pop esi */
  ESI = (pop32());
  /* 119f365c pop edi */
  EDI = (pop32());
  /* 119f365d ret  */
  ESPCHK(0x119f3560u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x119f3660 (88 bytes, 40 insns) */
void f_119f3660(void) {
  FTRACE(0x119f3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3660 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 119f3664 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f3668 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119f366a je 0x119f36b3 */
  if (C.zf) goto L_119f36b3;
  /* 119f366c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f366e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 119f3672 push edi */
  push32((uint32_t)(EDI));
  /* 119f3673 mov edi, ecx */
  EDI = (ECX);
  /* 119f3675 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3678 jb 0x119f36a7 */
  if (C.cf) goto L_119f36a7;
  /* 119f367a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119f367c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 119f367f je 0x119f3689 */
  if (C.zf) goto L_119f3689;
  /* 119f3681 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_119f3683:;
  /* 119f3683 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3685 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f3686 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f3687 jne 0x119f3683 */
  if (!C.zf) goto L_119f3683;
L_119f3689:;
  /* 119f3689 mov ecx, eax */
  ECX = (EAX);
  /* 119f368b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119f368e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3690 mov ecx, eax */
  ECX = (EAX);
  /* 119f3692 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119f3695 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3697 mov ecx, edx */
  ECX = (EDX);
  /* 119f3699 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119f369c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f369f je 0x119f36a7 */
  if (C.zf) goto L_119f36a7;
  /* 119f36a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119f36a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119f36a5 je 0x119f36ad */
  if (C.zf) goto L_119f36ad;
L_119f36a7:;
  /* 119f36a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f36a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f36aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 119f36ab jne 0x119f36a7 */
  if (!C.zf) goto L_119f36a7;
L_119f36ad:;
  /* 119f36ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f36b1 pop edi */
  EDI = (pop32());
  /* 119f36b2 ret  */
  ESPCHK(0x119f3660u, _esp0);
  ESP += 4; return;
L_119f36b3:;
  /* 119f36b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f36b7 ret  */
  ESPCHK(0x119f3660u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b8 @ 0x119f36b8 (27 bytes, 13 insns) */
void f_119f36b8(void) {
  FTRACE(0x119f36b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f36b8 mov eax, dword ptr [0x119f56d0] */
  EAX = (r32((uint32_t)(0x119f56d0)));
  /* 119f36bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f36bf je 0x119f36d0 */
  if (C.zf) goto L_119f36d0;
  /* 119f36c1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 119f36c5 call eax */
  call_ind((uint32_t)(EAX), 0x119f36c7u);
  /* 119f36c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f36c9 pop ecx */
  ECX = (pop32());
  /* 119f36ca je 0x119f36d0 */
  if (C.zf) goto L_119f36d0;
  /* 119f36cc push 1 */
  push32((uint32_t)(0x1u));
  /* 119f36ce pop eax */
  EAX = (pop32());
  /* 119f36cf ret  */
  ESPCHK(0x119f36b8u, _esp0);
  ESP += 4; return;
L_119f36d0:;
  /* 119f36d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119f36d2 ret  */
  ESPCHK(0x119f36b8u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d3 @ 0x119f36d3 (511 bytes, 193 insns) */
void f_119f36d3(void) {
  FTRACE(0x119f36d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f36d3 push ebp */
  push32((uint32_t)(EBP));
  /* 119f36d4 mov ebp, esp */
  EBP = (ESP);
  /* 119f36d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119f36d8 push 0x119f4440 */
  push32((uint32_t)(0x119f4440u));
  /* 119f36dd push 0x119f3ea0 */
  push32((uint32_t)(0x119f3ea0u));
  /* 119f36e2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119f36e8 push eax */
  push32((uint32_t)(EAX));
  /* 119f36e9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119f36f0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f36f3 push ebx */
  push32((uint32_t)(EBX));
  /* 119f36f4 push esi */
  push32((uint32_t)(ESI));
  /* 119f36f5 push edi */
  push32((uint32_t)(EDI));
  /* 119f36f6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119f36f9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f36fb cmp dword ptr [0x119f56f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x119f56f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3701 jne 0x119f3749 */
  if (!C.zf) goto L_119f3749;
  /* 119f3703 push edi */
  push32((uint32_t)(EDI));
  /* 119f3704 push edi */
  push32((uint32_t)(EDI));
  /* 119f3705 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3707 pop ebx */
  EBX = (pop32());
  /* 119f3708 push ebx */
  push32((uint32_t)(EBX));
  /* 119f3709 push 0x119f4438 */
  push32((uint32_t)(0x119f4438u));
  /* 119f370e mov esi, 0x100 */
  ESI = (0x100u);
  /* 119f3713 push esi */
  push32((uint32_t)(ESI));
  /* 119f3714 push edi */
  push32((uint32_t)(EDI));
  /* 119f3715 call dword ptr [0x119f4010] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4010))), 0x119f371bu);
  /* 119f371b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f371d je 0x119f3727 */
  if (C.zf) goto L_119f3727;
  /* 119f371f mov dword ptr [0x119f56f8], ebx */
  w32((uint32_t)(0x119f56f8), (EBX));
  /* 119f3725 jmp 0x119f3749 */
  goto L_119f3749;
L_119f3727:;
  /* 119f3727 push edi */
  push32((uint32_t)(EDI));
  /* 119f3728 push edi */
  push32((uint32_t)(EDI));
  /* 119f3729 push ebx */
  push32((uint32_t)(EBX));
  /* 119f372a push 0x119f4434 */
  push32((uint32_t)(0x119f4434u));
  /* 119f372f push esi */
  push32((uint32_t)(ESI));
  /* 119f3730 push edi */
  push32((uint32_t)(EDI));
  /* 119f3731 call dword ptr [0x119f4014] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4014))), 0x119f3737u);
  /* 119f3737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f3739 je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f373f mov dword ptr [0x119f56f8], 2 */
  w32((uint32_t)(0x119f56f8), (0x2u));
L_119f3749:;
  /* 119f3749 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f374c jle 0x119f375e */
  if ((C.zf||C.sf!=C.of)) goto L_119f375e;
  /* 119f374e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119f3751 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f3754 call 0x119f38f7 */
  push32(0x119f3759u); f_119f38f7();
  /* 119f3759 pop ecx */
  ECX = (pop32());
  /* 119f375a pop ecx */
  ECX = (pop32());
  /* 119f375b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_119f375e:;
  /* 119f375e mov eax, dword ptr [0x119f56f8] */
  EAX = (r32((uint32_t)(0x119f56f8)));
  /* 119f3763 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3766 jne 0x119f3785 */
  if (!C.zf) goto L_119f3785;
  /* 119f3768 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 119f376b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 119f376e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119f3771 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f3774 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f3777 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f377a call dword ptr [0x119f4014] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4014))), 0x119f3780u);
  /* 119f3780 jmp 0x119f3863 */
  goto L_119f3863;
L_119f3785:;
  /* 119f3785 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3788 jne 0x119f3861 */
  if (!C.zf) goto L_119f3861;
  /* 119f378e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3791 jne 0x119f379b */
  if (!C.zf) goto L_119f379b;
  /* 119f3793 mov eax, dword ptr [0x119f56f0] */
  EAX = (r32((uint32_t)(0x119f56f0)));
  /* 119f3798 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_119f379b:;
  /* 119f379b push edi */
  push32((uint32_t)(EDI));
  /* 119f379c push edi */
  push32((uint32_t)(EDI));
  /* 119f379d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119f37a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f37a3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 119f37a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119f37a8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f37aa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 119f37ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f37ae push eax */
  push32((uint32_t)(EAX));
  /* 119f37af push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 119f37b2 call dword ptr [0x119f4024] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4024))), 0x119f37b8u);
  /* 119f37b8 mov ebx, eax */
  EBX = (EAX);
  /* 119f37ba mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 119f37bd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f37bf je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f37c5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 119f37c8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 119f37cb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f37ce and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119f37d0 call 0x119f3f80 */
  push32(0x119f37d5u); f_119f3f80();
  /* 119f37d5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119f37d8 mov eax, esp */
  EAX = (ESP);
  /* 119f37da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119f37dd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f37e1 jmp 0x119f37f6 */
  goto L_119f37f6;
  /* 119f37e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f37e5 pop eax */
  EAX = (pop32());
  /* 119f37e6 ret  */
  ESPCHK(0x119f36d3u, _esp0);
  ESP += 4; return;
  /* 119f37e7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119f37ea xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f37ec mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 119f37ef or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f37f3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_119f37f6:;
  /* 119f37f6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f37f9 je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f37fb push ebx */
  push32((uint32_t)(EBX));
  /* 119f37fc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 119f37ff push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119f3802 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f3805 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3807 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 119f380a call dword ptr [0x119f4024] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4024))), 0x119f3810u);
  /* 119f3810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f3812 je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f3814 push edi */
  push32((uint32_t)(EDI));
  /* 119f3815 push edi */
  push32((uint32_t)(EDI));
  /* 119f3816 push ebx */
  push32((uint32_t)(EBX));
  /* 119f3817 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 119f381a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f381d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f3820 call dword ptr [0x119f4010] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4010))), 0x119f3826u);
  /* 119f3826 mov esi, eax */
  ESI = (EAX);
  /* 119f3828 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 119f382b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f382d je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f382f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 119f3833 je 0x119f3875 */
  if (C.zf) goto L_119f3875;
  /* 119f3835 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3838 je 0x119f38f0 */
  if (C.zf) goto L_119f38f0;
  /* 119f383e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3841 jg 0x119f3861 */
  if ((!C.zf&&C.sf==C.of)) goto L_119f3861;
  /* 119f3843 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 119f3846 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 119f3849 push ebx */
  push32((uint32_t)(EBX));
  /* 119f384a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 119f384d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f3850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f3853 call dword ptr [0x119f4010] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4010))), 0x119f3859u);
  /* 119f3859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f385b jne 0x119f38f0 */
  if (!C.zf) goto L_119f38f0;
L_119f3861:;
  /* 119f3861 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119f3863:;
  /* 119f3863 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 119f3866 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119f3869 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119f3870 pop edi */
  EDI = (pop32());
  /* 119f3871 pop esi */
  ESI = (pop32());
  /* 119f3872 pop ebx */
  EBX = (pop32());
  /* 119f3873 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3874 ret  */
  ESPCHK(0x119f36d3u, _esp0);
  ESP += 4; return;
L_119f3875:;
  /* 119f3875 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119f387c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 119f387f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3882 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119f3884 call 0x119f3f80 */
  push32(0x119f3889u); f_119f3f80();
  /* 119f3889 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119f388c mov ebx, esp */
  EBX = (ESP);
  /* 119f388e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 119f3891 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f3895 jmp 0x119f38a9 */
  goto L_119f38a9;
  /* 119f3897 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3899 pop eax */
  EAX = (pop32());
  /* 119f389a ret  */
  ESPCHK(0x119f36d3u, _esp0);
  ESP += 4; return;
  /* 119f389b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119f389e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119f38a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f38a2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f38a6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_119f38a9:;
  /* 119f38a9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f38ab je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f38ad push esi */
  push32((uint32_t)(ESI));
  /* 119f38ae push ebx */
  push32((uint32_t)(EBX));
  /* 119f38af push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 119f38b2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 119f38b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f38b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f38bb call dword ptr [0x119f4010] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4010))), 0x119f38c1u);
  /* 119f38c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f38c3 je 0x119f3861 */
  if (C.zf) goto L_119f3861;
  /* 119f38c5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f38c8 push edi */
  push32((uint32_t)(EDI));
  /* 119f38c9 push edi */
  push32((uint32_t)(EDI));
  /* 119f38ca jne 0x119f38d0 */
  if (!C.zf) goto L_119f38d0;
  /* 119f38cc push edi */
  push32((uint32_t)(EDI));
  /* 119f38cd push edi */
  push32((uint32_t)(EDI));
  /* 119f38ce jmp 0x119f38d6 */
  goto L_119f38d6;
L_119f38d0:;
  /* 119f38d0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 119f38d3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_119f38d6:;
  /* 119f38d6 push esi */
  push32((uint32_t)(ESI));
  /* 119f38d7 push ebx */
  push32((uint32_t)(EBX));
  /* 119f38d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119f38dd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 119f38e0 call dword ptr [0x119f408c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f408c))), 0x119f38e6u);
  /* 119f38e6 mov esi, eax */
  ESI = (EAX);
  /* 119f38e8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f38ea je 0x119f3861 */
  if (C.zf) goto L_119f3861;
L_119f38f0:;
  /* 119f38f0 mov eax, esi */
  EAX = (ESI);
  /* 119f38f2 jmp 0x119f3863 */
  goto L_119f3863;
}

/* FUN_100038f7 @ 0x119f38f7 (43 bytes, 20 insns) */
void f_119f38f7(void) {
  FTRACE(0x119f38f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f38f7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f38fb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119f38ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119f3901 push esi */
  push32((uint32_t)(ESI));
  /* 119f3902 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 119f3905 je 0x119f3914 */
  if (C.zf) goto L_119f3914;
L_119f3907:;
  /* 119f3907 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f390a je 0x119f3914 */
  if (C.zf) goto L_119f3914;
  /* 119f390c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f390d mov esi, ecx */
  ESI = (ECX);
  /* 119f390f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119f3910 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119f3912 jne 0x119f3907 */
  if (!C.zf) goto L_119f3907;
L_119f3914:;
  /* 119f3914 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119f3917 pop esi */
  ESI = (pop32());
  /* 119f3918 jne 0x119f391f */
  if (!C.zf) goto L_119f391f;
  /* 119f391a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f391e ret  */
  ESPCHK(0x119f38f7u, _esp0);
  ESP += 4; return;
L_119f391f:;
  /* 119f391f mov eax, edx */
  EAX = (EDX);
  /* 119f3921 ret  */
  ESPCHK(0x119f38f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003922 @ 0x119f3922 (318 bytes, 123 insns) */
void f_119f3922(void) {
  FTRACE(0x119f3922u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3922 push ebp */
  push32((uint32_t)(EBP));
  /* 119f3923 mov ebp, esp */
  EBP = (ESP);
  /* 119f3925 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119f3927 push 0x119f4458 */
  push32((uint32_t)(0x119f4458u));
  /* 119f392c push 0x119f3ea0 */
  push32((uint32_t)(0x119f3ea0u));
  /* 119f3931 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119f3937 push eax */
  push32((uint32_t)(EAX));
  /* 119f3938 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119f393f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3942 push ebx */
  push32((uint32_t)(EBX));
  /* 119f3943 push esi */
  push32((uint32_t)(ESI));
  /* 119f3944 push edi */
  push32((uint32_t)(EDI));
  /* 119f3945 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119f3948 mov eax, dword ptr [0x119f56fc] */
  EAX = (r32((uint32_t)(0x119f56fc)));
  /* 119f394d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f394f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3951 jne 0x119f3991 */
  if (!C.zf) goto L_119f3991;
  /* 119f3953 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 119f3956 push eax */
  push32((uint32_t)(EAX));
  /* 119f3957 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3959 pop esi */
  ESI = (pop32());
  /* 119f395a push esi */
  push32((uint32_t)(ESI));
  /* 119f395b push 0x119f4438 */
  push32((uint32_t)(0x119f4438u));
  /* 119f3960 push esi */
  push32((uint32_t)(ESI));
  /* 119f3961 call dword ptr [0x119f400c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f400c))), 0x119f3967u);
  /* 119f3967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f3969 je 0x119f396f */
  if (C.zf) goto L_119f396f;
  /* 119f396b mov eax, esi */
  EAX = (ESI);
  /* 119f396d jmp 0x119f398c */
  goto L_119f398c;
L_119f396f:;
  /* 119f396f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 119f3972 push eax */
  push32((uint32_t)(EAX));
  /* 119f3973 push esi */
  push32((uint32_t)(ESI));
  /* 119f3974 push 0x119f4434 */
  push32((uint32_t)(0x119f4434u));
  /* 119f3979 push esi */
  push32((uint32_t)(ESI));
  /* 119f397a push ebx */
  push32((uint32_t)(EBX));
  /* 119f397b call dword ptr [0x119f4018] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4018))), 0x119f3981u);
  /* 119f3981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119f3983 je 0x119f3a57 */
  if (C.zf) goto L_119f3a57;
  /* 119f3989 push 2 */
  push32((uint32_t)(0x2u));
  /* 119f398b pop eax */
  EAX = (pop32());
L_119f398c:;
  /* 119f398c mov dword ptr [0x119f56fc], eax */
  w32((uint32_t)(0x119f56fc), (EAX));
L_119f3991:;
  /* 119f3991 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3994 jne 0x119f39ba */
  if (!C.zf) goto L_119f39ba;
  /* 119f3996 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119f3999 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f399b jne 0x119f39a2 */
  if (!C.zf) goto L_119f39a2;
  /* 119f399d mov eax, dword ptr [0x119f56e0] */
  EAX = (r32((uint32_t)(0x119f56e0)));
L_119f39a2:;
  /* 119f39a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119f39a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f39a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f39ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f39ae push eax */
  push32((uint32_t)(EAX));
  /* 119f39af call dword ptr [0x119f4018] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4018))), 0x119f39b5u);
  /* 119f39b5 jmp 0x119f3a59 */
  goto L_119f3a59;
L_119f39ba:;
  /* 119f39ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f39bd jne 0x119f3a57 */
  if (!C.zf) goto L_119f3a57;
  /* 119f39c3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f39c6 jne 0x119f39d0 */
  if (!C.zf) goto L_119f39d0;
  /* 119f39c8 mov eax, dword ptr [0x119f56f0] */
  EAX = (r32((uint32_t)(0x119f56f0)));
  /* 119f39cd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_119f39d0:;
  /* 119f39d0 push ebx */
  push32((uint32_t)(EBX));
  /* 119f39d1 push ebx */
  push32((uint32_t)(EBX));
  /* 119f39d2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f39d5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f39d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119f39db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119f39dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f39df and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 119f39e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119f39e3 push eax */
  push32((uint32_t)(EAX));
  /* 119f39e4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 119f39e7 call dword ptr [0x119f4024] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4024))), 0x119f39edu);
  /* 119f39ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119f39f0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f39f2 je 0x119f3a57 */
  if (C.zf) goto L_119f3a57;
  /* 119f39f4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 119f39f7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 119f39fa mov eax, edi */
  EAX = (EDI);
  /* 119f39fc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f39ff and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119f3a01 call 0x119f3f80 */
  push32(0x119f3a06u); f_119f3f80();
  /* 119f3a06 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119f3a09 mov esi, esp */
  ESI = (ESP);
  /* 119f3a0b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 119f3a0e push edi */
  push32((uint32_t)(EDI));
  /* 119f3a0f push ebx */
  push32((uint32_t)(EBX));
  /* 119f3a10 push esi */
  push32((uint32_t)(ESI));
  /* 119f3a11 call 0x119f3660 */
  push32(0x119f3a16u); f_119f3660();
  /* 119f3a16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3a19 jmp 0x119f3a26 */
  goto L_119f3a26;
  /* 119f3a1b push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3a1d pop eax */
  EAX = (pop32());
  /* 119f3a1e ret  */
  ESPCHK(0x119f3922u, _esp0);
  ESP += 4; return;
  /* 119f3a1f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119f3a22 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119f3a24 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_119f3a26:;
  /* 119f3a26 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119f3a2a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3a2c je 0x119f3a57 */
  if (C.zf) goto L_119f3a57;
  /* 119f3a2e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 119f3a31 push esi */
  push32((uint32_t)(ESI));
  /* 119f3a32 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119f3a35 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119f3a38 push 1 */
  push32((uint32_t)(0x1u));
  /* 119f3a3a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 119f3a3d call dword ptr [0x119f4024] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f4024))), 0x119f3a43u);
  /* 119f3a43 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3a45 je 0x119f3a57 */
  if (C.zf) goto L_119f3a57;
  /* 119f3a47 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119f3a4a push eax */
  push32((uint32_t)(EAX));
  /* 119f3a4b push esi */
  push32((uint32_t)(ESI));
  /* 119f3a4c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f3a4f call dword ptr [0x119f400c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119f400c))), 0x119f3a55u);
  /* 119f3a55 jmp 0x119f3a59 */
  goto L_119f3a59;
L_119f3a57:;
  /* 119f3a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119f3a59:;
  /* 119f3a59 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 119f3a5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119f3a5f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119f3a66 pop edi */
  EDI = (pop32());
  /* 119f3a67 pop esi */
  ESI = (pop32());
  /* 119f3a68 pop ebx */
  EBX = (pop32());
  /* 119f3a69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3a6a ret  */
  ESPCHK(0x119f3922u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a70 @ 0x119f3a70 (664 bytes, 259 insns) [15 switch table(s)] */
void f_119f3a70(void) {
  FTRACE(0x119f3a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3a70 push ebp */
  push32((uint32_t)(EBP));
  /* 119f3a71 mov ebp, esp */
  EBP = (ESP);
  /* 119f3a73 push edi */
  push32((uint32_t)(EDI));
  /* 119f3a74 push esi */
  push32((uint32_t)(ESI));
  /* 119f3a75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119f3a78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119f3a7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3a7e mov eax, ecx */
  EAX = (ECX);
  /* 119f3a80 mov edx, ecx */
  EDX = (ECX);
  /* 119f3a82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3a84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3a86 jbe 0x119f3a90 */
  if ((C.cf||C.zf)) goto L_119f3a90;
  /* 119f3a88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3a8a jb 0x119f3c08 */
  if (C.cf) goto L_119f3c08;
L_119f3a90:;
  /* 119f3a90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119f3a96 jne 0x119f3aac */
  if (!C.zf) goto L_119f3aac;
  /* 119f3a98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3a9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119f3a9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3aa1 jb 0x119f3acc */
  if (C.cf) goto L_119f3acc;
  /* 119f3aa3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3aa5 jmp dword ptr [edx*4 + 0x119f3bb8] */
  switch (EDX) {
    case 0: goto L_119f3bc8;
    case 1: goto L_119f3bd0;
    case 2: goto L_119f3bdc;
    case 3: goto L_119f3bf0;
    default: x86_unimpl("switch@0x119f3aa5 out of table"); return;
  }
L_119f3aac:;
  /* 119f3aac mov eax, edi */
  EAX = (EDI);
  /* 119f3aae mov edx, 3 */
  EDX = (0x3u);
  /* 119f3ab3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3ab6 jb 0x119f3ac4 */
  if (C.cf) goto L_119f3ac4;
  /* 119f3ab8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119f3abb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3abd jmp dword ptr [eax*4 + 0x119f3ad0] */
  switch (EAX) {
    case 1: goto L_119f3ae0;
    case 2: goto L_119f3b0c;
    case 3: goto L_119f3b30;
    default: x86_unimpl("switch@0x119f3abd out of table"); return;
  }
L_119f3ac4:;
  /* 119f3ac4 jmp dword ptr [ecx*4 + 0x119f3bc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x119f3bc8)))); return;
  /* 119f3acb nop  */
  /* nop */
L_119f3acc:;
  /* 119f3acc jmp dword ptr [ecx*4 + 0x119f3b4c] */
  switch (ECX) {
    case 0: goto L_119f3baf;
    case 1: goto L_119f3b9c;
    case 2: goto L_119f3b94;
    case 3: goto L_119f3b8c;
    case 4: goto L_119f3b84;
    case 5: goto L_119f3b7c;
    case 6: goto L_119f3b74;
    case 7: goto L_119f3b6c;
    default: x86_unimpl("switch@0x119f3acc out of table"); return;
  }
  /* 119f3ad3 nop  */
  /* nop */
L_119f3ae0:;
  /* 119f3ae0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f3ae2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3ae4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3ae6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f3ae9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f3aec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f3aef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3af2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f3af5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3af8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3afb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3afe jb 0x119f3acc */
  if (C.cf) goto L_119f3acc;
  /* 119f3b00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3b02 jmp dword ptr [edx*4 + 0x119f3bb8] */
  switch (EDX) {
    case 0: goto L_119f3bc8;
    case 1: goto L_119f3bd0;
    case 2: goto L_119f3bdc;
    case 3: goto L_119f3bf0;
    default: x86_unimpl("switch@0x119f3b02 out of table"); return;
  }
  /* 119f3b09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f3b0c:;
  /* 119f3b0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f3b0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3b10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3b12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f3b15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3b18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f3b1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3b1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3b21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3b24 jb 0x119f3acc */
  if (C.cf) goto L_119f3acc;
  /* 119f3b26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3b28 jmp dword ptr [edx*4 + 0x119f3bb8] */
  switch (EDX) {
    case 0: goto L_119f3bc8;
    case 1: goto L_119f3bd0;
    case 2: goto L_119f3bdc;
    case 3: goto L_119f3bf0;
    default: x86_unimpl("switch@0x119f3b28 out of table"); return;
  }
  /* 119f3b2f nop  */
  /* nop */
L_119f3b30:;
  /* 119f3b30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f3b32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3b34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3b36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119f3b37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3b3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119f3b3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3b3e jb 0x119f3acc */
  if (C.cf) goto L_119f3acc;
  /* 119f3b40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3b42 jmp dword ptr [edx*4 + 0x119f3bb8] */
  switch (EDX) {
    case 0: goto L_119f3bc8;
    case 1: goto L_119f3bd0;
    case 2: goto L_119f3bdc;
    case 3: goto L_119f3bf0;
    default: x86_unimpl("switch@0x119f3b42 out of table"); return;
  }
  /* 119f3b49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f3b6c:;
  /* 119f3b6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 119f3b70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_119f3b74:;
  /* 119f3b74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 119f3b78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_119f3b7c:;
  /* 119f3b7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 119f3b80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_119f3b84:;
  /* 119f3b84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 119f3b88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_119f3b8c:;
  /* 119f3b8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 119f3b90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_119f3b94:;
  /* 119f3b94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 119f3b98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_119f3b9c:;
  /* 119f3b9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 119f3ba0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 119f3ba4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119f3bab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3bad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119f3baf:;
  /* 119f3baf jmp dword ptr [edx*4 + 0x119f3bb8] */
  switch (EDX) {
    case 0: goto L_119f3bc8;
    case 1: goto L_119f3bd0;
    case 2: goto L_119f3bdc;
    case 3: goto L_119f3bf0;
    default: x86_unimpl("switch@0x119f3baf out of table"); return;
  }
  /* 119f3bb6 mov edi, edi */
  EDI = (EDI);
L_119f3bc8:;
  /* 119f3bc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3bcb pop esi */
  ESI = (pop32());
  /* 119f3bcc pop edi */
  EDI = (pop32());
  /* 119f3bcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3bce ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3bcf nop  */
  /* nop */
L_119f3bd0:;
  /* 119f3bd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3bd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3bd7 pop esi */
  ESI = (pop32());
  /* 119f3bd8 pop edi */
  EDI = (pop32());
  /* 119f3bd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3bda ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3bdb nop  */
  /* nop */
L_119f3bdc:;
  /* 119f3bdc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3bde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3be0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f3be3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f3be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3be9 pop esi */
  ESI = (pop32());
  /* 119f3bea pop edi */
  EDI = (pop32());
  /* 119f3beb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3bec ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3bed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f3bf0:;
  /* 119f3bf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119f3bf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119f3bf4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f3bf7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f3bfa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f3bfd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f3c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3c03 pop esi */
  ESI = (pop32());
  /* 119f3c04 pop edi */
  EDI = (pop32());
  /* 119f3c05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3c06 ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3c07 nop  */
  /* nop */
L_119f3c08:;
  /* 119f3c08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 119f3c0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 119f3c10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119f3c16 jne 0x119f3c3c */
  if (!C.zf) goto L_119f3c3c;
  /* 119f3c18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3c1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119f3c1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3c21 jb 0x119f3c30 */
  if (C.cf) goto L_119f3c30;
  /* 119f3c23 std  */
  C.df=1;
  /* 119f3c24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3c26 cld  */
  C.df=0;
  /* 119f3c27 jmp dword ptr [edx*4 + 0x119f3d50] */
  switch (EDX) {
    case 0: goto L_119f3d60;
    case 1: goto L_119f3d68;
    case 2: goto L_119f3d78;
    case 3: goto L_119f3d8c;
    default: x86_unimpl("switch@0x119f3c27 out of table"); return;
  }
  /* 119f3c2e mov edi, edi */
  EDI = (EDI);
L_119f3c30:;
  /* 119f3c30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119f3c32 jmp dword ptr [ecx*4 + 0x119f3d00] */
  switch (ECX) {
    case 0: goto L_119f3d47;
    default: x86_unimpl("switch@0x119f3c32 out of table"); return;
  }
  /* 119f3c39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f3c3c:;
  /* 119f3c3c mov eax, edi */
  EAX = (EDI);
  /* 119f3c3e mov edx, 3 */
  EDX = (0x3u);
  /* 119f3c43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3c46 jb 0x119f3c54 */
  if (C.cf) goto L_119f3c54;
  /* 119f3c48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119f3c4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3c4d jmp dword ptr [eax*4 + 0x119f3c58] */
  switch (EAX) {
    case 1: goto L_119f3c68;
    case 2: goto L_119f3c88;
    case 3: goto L_119f3cb0;
    default: x86_unimpl("switch@0x119f3c4d out of table"); return;
  }
L_119f3c54:;
  /* 119f3c54 jmp dword ptr [ecx*4 + 0x119f3d50] */
  switch (ECX) {
    case 0: goto L_119f3d60;
    case 1: goto L_119f3d68;
    case 2: goto L_119f3d78;
    case 3: goto L_119f3d8c;
    default: x86_unimpl("switch@0x119f3c54 out of table"); return;
  }
  /* 119f3c5b nop  */
  /* nop */
L_119f3c68:;
  /* 119f3c68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f3c6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f3c6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f3c70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 119f3c71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3c74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119f3c75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3c78 jb 0x119f3c30 */
  if (C.cf) goto L_119f3c30;
  /* 119f3c7a std  */
  C.df=1;
  /* 119f3c7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3c7d cld  */
  C.df=0;
  /* 119f3c7e jmp dword ptr [edx*4 + 0x119f3d50] */
  switch (EDX) {
    case 0: goto L_119f3d60;
    case 1: goto L_119f3d68;
    case 2: goto L_119f3d78;
    case 3: goto L_119f3d8c;
    default: x86_unimpl("switch@0x119f3c7e out of table"); return;
  }
  /* 119f3c85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f3c88:;
  /* 119f3c88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f3c8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f3c8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f3c90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f3c93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3c96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f3c99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3c9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3c9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3ca2 jb 0x119f3c30 */
  if (C.cf) goto L_119f3c30;
  /* 119f3ca4 std  */
  C.df=1;
  /* 119f3ca5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3ca7 cld  */
  C.df=0;
  /* 119f3ca8 jmp dword ptr [edx*4 + 0x119f3d50] */
  switch (EDX) {
    case 0: goto L_119f3d60;
    case 1: goto L_119f3d68;
    case 2: goto L_119f3d78;
    case 3: goto L_119f3d8c;
    default: x86_unimpl("switch@0x119f3ca8 out of table"); return;
  }
  /* 119f3caf nop  */
  /* nop */
L_119f3cb0:;
  /* 119f3cb0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f3cb3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119f3cb5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f3cb8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f3cbb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f3cbe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f3cc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119f3cc4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f3cc7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3cca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3ccd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3cd0 jb 0x119f3c30 */
  if (C.cf) goto L_119f3c30;
  /* 119f3cd6 std  */
  C.df=1;
  /* 119f3cd7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119f3cd9 cld  */
  C.df=0;
  /* 119f3cda jmp dword ptr [edx*4 + 0x119f3d50] */
  switch (EDX) {
    case 0: goto L_119f3d60;
    case 1: goto L_119f3d68;
    case 2: goto L_119f3d78;
    case 3: goto L_119f3d8c;
    default: x86_unimpl("switch@0x119f3cda out of table"); return;
  }
  /* 119f3ce1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 119f3ce4 add al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119f3ce6 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f3ce7 adc dword ptr [edi + 0x3d14119f], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI*1 + 0x3d14119f))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI*1 + 0x3d14119f), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f3cee lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f3cef adc dword ptr [edi + 0x3d24119f], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI*1 + 0x3d24119f))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDI*1 + 0x3d24119f), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f3cf6 lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f3cf7 adc dword ptr [edi + 0x3d34119f], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI*1 + 0x3d34119f))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI*1 + 0x3d34119f), (_r)); fl_add(_a,_b,_r,32); }
  /* 119f3cfe lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 119f3d04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 119f3d08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 119f3d0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 119f3d10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 119f3d14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 119f3d18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 119f3d1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 119f3d20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 119f3d24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 119f3d28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 119f3d2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 119f3d30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 119f3d34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 119f3d38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 119f3d3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119f3d43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3d45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119f3d47:;
  /* 119f3d47 jmp dword ptr [edx*4 + 0x119f3d50] */
  switch (EDX) {
    case 0: goto L_119f3d60;
    case 1: goto L_119f3d68;
    case 2: goto L_119f3d78;
    case 3: goto L_119f3d8c;
    default: x86_unimpl("switch@0x119f3d47 out of table"); return;
  }
  /* 119f3d4e mov edi, edi */
  EDI = (EDI);
L_119f3d60:;
  /* 119f3d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3d63 pop esi */
  ESI = (pop32());
  /* 119f3d64 pop edi */
  EDI = (pop32());
  /* 119f3d65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3d66 ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3d67 nop  */
  /* nop */
L_119f3d68:;
  /* 119f3d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f3d6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f3d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3d71 pop esi */
  ESI = (pop32());
  /* 119f3d72 pop edi */
  EDI = (pop32());
  /* 119f3d73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3d74 ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3d75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119f3d78:;
  /* 119f3d78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f3d7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f3d7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f3d81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f3d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3d87 pop esi */
  ESI = (pop32());
  /* 119f3d88 pop edi */
  EDI = (pop32());
  /* 119f3d89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3d8a ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
  /* 119f3d8b nop  */
  /* nop */
L_119f3d8c:;
  /* 119f3d8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119f3d8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119f3d92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119f3d95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119f3d98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119f3d9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119f3d9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3da1 pop esi */
  ESI = (pop32());
  /* 119f3da2 pop edi */
  EDI = (pop32());
  /* 119f3da3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119f3da4 ret  */
  ESPCHK(0x119f3a70u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x119f3da8 (32 bytes, 18 insns) */
void f_119f3da8(void) {
  FTRACE(0x119f3da8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3da8 push ebp */
  push32((uint32_t)(EBP));
  /* 119f3da9 mov ebp, esp */
  EBP = (ESP);
  /* 119f3dab push ebx */
  push32((uint32_t)(EBX));
  /* 119f3dac push esi */
  push32((uint32_t)(ESI));
  /* 119f3dad push edi */
  push32((uint32_t)(EDI));
  /* 119f3dae push ebp */
  push32((uint32_t)(EBP));
  /* 119f3daf push 0 */
  push32((uint32_t)(0x0u));
  /* 119f3db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119f3db3 push 0x119f3dc0 */
  push32((uint32_t)(0x119f3dc0u));
  /* 119f3db8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119f3dbb call 0x119f3fb0 */
  push32(0x119f3dc0u); f_119f3fb0();
  /* 119f3dc0 pop ebp */
  EBP = (pop32());
  /* 119f3dc1 pop edi */
  EDI = (pop32());
  /* 119f3dc2 pop esi */
  ESI = (pop32());
  /* 119f3dc3 pop ebx */
  EBX = (pop32());
  /* 119f3dc4 mov esp, ebp */
  ESP = (EBP);
  /* 119f3dc6 pop ebp */
  EBP = (pop32());
  /* 119f3dc7 ret  */
  ESPCHK(0x119f3da8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x119f3dea (104 bytes, 33 insns) */
void f_119f3dea(void) {
  FTRACE(0x119f3deau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3dea push ebx */
  push32((uint32_t)(EBX));
  /* 119f3deb push esi */
  push32((uint32_t)(ESI));
  /* 119f3dec push edi */
  push32((uint32_t)(EDI));
  /* 119f3ded mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119f3df1 push eax */
  push32((uint32_t)(EAX));
  /* 119f3df2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 119f3df4 push 0x119f3dc8 */
  push32((uint32_t)(0x119f3dc8u));
  /* 119f3df9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 119f3e00 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_119f3e07:;
  /* 119f3e07 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 119f3e0b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 119f3e0e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 119f3e11 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3e14 je 0x119f3e44 */
  if (C.zf) goto L_119f3e44;
  /* 119f3e16 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3e1a je 0x119f3e44 */
  if (C.zf) goto L_119f3e44;
  /* 119f3e1c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 119f3e1f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 119f3e22 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 119f3e26 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 119f3e29 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3e2e jne 0x119f3e42 */
  if (!C.zf) goto L_119f3e42;
  /* 119f3e30 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 119f3e35 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 119f3e39 call 0x119f3e7e */
  push32(0x119f3e3eu); f_119f3e7e();
  /* 119f3e3e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x119f3e42u);
L_119f3e42:;
  /* 119f3e42 jmp 0x119f3e07 */
  goto L_119f3e07;
L_119f3e44:;
  /* 119f3e44 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 119f3e4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3e4e pop edi */
  EDI = (pop32());
  /* 119f3e4f pop esi */
  ESI = (pop32());
  /* 119f3e50 pop ebx */
  EBX = (pop32());
  /* 119f3e51 ret  */
  ESPCHK(0x119f3deau, _esp0);
  ESP += 4; return;
}

/* FUN_10003e7e @ 0x119f3e7e (24 bytes, 10 insns) */
void f_119f3e7e(void) {
  FTRACE(0x119f3e7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3e7e push ebx */
  push32((uint32_t)(EBX));
  /* 119f3e7f push ecx */
  push32((uint32_t)(ECX));
  /* 119f3e80 mov ebx, 0x119f5480 */
  EBX = (0x119f5480u);
  /* 119f3e85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119f3e88 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 119f3e8b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 119f3e8e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 119f3e91 pop ecx */
  ECX = (pop32());
  /* 119f3e92 pop ebx */
  EBX = (pop32());
  /* 119f3e93 ret 4 */
  ESPCHK(0x119f3e7eu, _esp0);
  ESP += 8; return;
}

/* FUN_10003f5d @ 0x119f3f5d (27 bytes, 11 insns) */
void f_119f3f5d(void) {
  FTRACE(0x119f3f5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3f5d push ebp */
  push32((uint32_t)(EBP));
  /* 119f3f5e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 119f3f62 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 119f3f64 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119f3f67 push eax */
  push32((uint32_t)(EAX));
  /* 119f3f68 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 119f3f6b push eax */
  push32((uint32_t)(EAX));
  /* 119f3f6c call 0x119f3dea */
  push32(0x119f3f71u); f_119f3dea();
  /* 119f3f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119f3f74 pop ebp */
  EBP = (pop32());
  /* 119f3f75 ret 4 */
  ESPCHK(0x119f3f5du, _esp0);
  ESP += 8; return;
}

/* FUN_10003f80 @ 0x119f3f80 (47 bytes, 17 insns) */
void f_119f3f80(void) {
  FTRACE(0x119f3f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3f80 push ecx */
  push32((uint32_t)(ECX));
  /* 119f3f81 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3f86 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 119f3f8a jb 0x119f3fa0 */
  if (C.cf) goto L_119f3fa0;
L_119f3f8c:;
  /* 119f3f8c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3f92 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3f97 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 119f3f99 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119f3f9e jae 0x119f3f8c */
  if (!C.cf) goto L_119f3f8c;
L_119f3fa0:;
  /* 119f3fa0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119f3fa2 mov eax, esp */
  EAX = (ESP);
  /* 119f3fa4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 119f3fa6 mov esp, ecx */
  ESP = (ECX);
  /* 119f3fa8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119f3faa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 119f3fad push eax */
  push32((uint32_t)(EAX));
  /* 119f3fae ret  */
  ESPCHK(0x119f3f80u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x119f3fb0 (6 bytes, 1 insns) */
void f_119f3fb0(void) {
  FTRACE(0x119f3fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119f3fb0 jmp dword ptr [0x119f4008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119f4008)))); return;
}

