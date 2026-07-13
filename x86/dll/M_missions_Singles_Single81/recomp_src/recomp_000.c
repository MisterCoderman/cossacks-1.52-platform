#include "recomp.h"

/* FUN_10001000 @ 0x11dc1000 (20 bytes, 6 insns) */
void f_11dc1000(void) {
  FTRACE(0x11dc1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dc1005 jne 0x11dc100c */
  if (!C.zf) goto L_11dc100c;
  /* 11dc1007 call 0x11dc1050 */
  push32(0x11dc100cu); f_11dc1050();
L_11dc100c:;
  /* 11dc100c mov eax, 1 */
  EAX = (0x1u);
  /* 11dc1011 ret 0xc */
  ESPCHK(0x11dc1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11dc1050 (1525 bytes, 404 insns) [1 switch table(s)] */
void f_11dc1050(void) {
  FTRACE(0x11dc1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc1050 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc1051 mov ebx, dword ptr [0x11dc7170] */
  EBX = (r32((uint32_t)(0x11dc7170)));
  /* 11dc1057 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1058 push esi */
  push32((uint32_t)(ESI));
  /* 11dc1059 push edi */
  push32((uint32_t)(EDI));
  /* 11dc105a push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc105c push 0x11dc8030 */
  push32((uint32_t)(0x11dc8030u));
  /* 11dc1061 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1063u);
  /* 11dc1063 mov edi, dword ptr [0x11dc7174] */
  EDI = (r32((uint32_t)(0x11dc7174)));
  /* 11dc1069 push 0x11dc8308 */
  push32((uint32_t)(0x11dc8308u));
  /* 11dc106e push 0x11dcafa0 */
  push32((uint32_t)(0x11dcafa0u));
  /* 11dc1073 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1075u);
  /* 11dc1075 push 0x11dc82fc */
  push32((uint32_t)(0x11dc82fcu));
  /* 11dc107a push 0x11dcaf48 */
  push32((uint32_t)(0x11dcaf48u));
  /* 11dc107f call edi */
  call_ind((uint32_t)(EDI), 0x11dc1081u);
  /* 11dc1081 push 0x11dc82ec */
  push32((uint32_t)(0x11dc82ecu));
  /* 11dc1086 push 0x11dcaf40 */
  push32((uint32_t)(0x11dcaf40u));
  /* 11dc108b call edi */
  call_ind((uint32_t)(EDI), 0x11dc108du);
  /* 11dc108d push 0x11dc82dc */
  push32((uint32_t)(0x11dc82dcu));
  /* 11dc1092 push 0x11dcaf88 */
  push32((uint32_t)(0x11dcaf88u));
  /* 11dc1097 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1099u);
  /* 11dc1099 push 0x11dc82d0 */
  push32((uint32_t)(0x11dc82d0u));
  /* 11dc109e push 0x11dcaf08 */
  push32((uint32_t)(0x11dcaf08u));
  /* 11dc10a3 call edi */
  call_ind((uint32_t)(EDI), 0x11dc10a5u);
  /* 11dc10a5 push 0x11dc82c4 */
  push32((uint32_t)(0x11dc82c4u));
  /* 11dc10aa push 0x11dcae98 */
  push32((uint32_t)(0x11dcae98u));
  /* 11dc10af call edi */
  call_ind((uint32_t)(EDI), 0x11dc10b1u);
  /* 11dc10b1 push 0x11dc82b8 */
  push32((uint32_t)(0x11dc82b8u));
  /* 11dc10b6 push 0x11dcaef0 */
  push32((uint32_t)(0x11dcaef0u));
  /* 11dc10bb call edi */
  call_ind((uint32_t)(EDI), 0x11dc10bdu);
  /* 11dc10bd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc10c0 push 0x11dc82ac */
  push32((uint32_t)(0x11dc82acu));
  /* 11dc10c5 push 0x11dcaed8 */
  push32((uint32_t)(0x11dcaed8u));
  /* 11dc10ca call edi */
  call_ind((uint32_t)(EDI), 0x11dc10ccu);
  /* 11dc10cc push 0x11dc82a0 */
  push32((uint32_t)(0x11dc82a0u));
  /* 11dc10d1 push 0x11dcaec8 */
  push32((uint32_t)(0x11dcaec8u));
  /* 11dc10d6 call edi */
  call_ind((uint32_t)(EDI), 0x11dc10d8u);
  /* 11dc10d8 push 0x11dc8294 */
  push32((uint32_t)(0x11dc8294u));
  /* 11dc10dd push 0x11dcaed0 */
  push32((uint32_t)(0x11dcaed0u));
  /* 11dc10e2 call edi */
  call_ind((uint32_t)(EDI), 0x11dc10e4u);
  /* 11dc10e4 push 0x11dc8288 */
  push32((uint32_t)(0x11dc8288u));
  /* 11dc10e9 push 0x11dcaec0 */
  push32((uint32_t)(0x11dcaec0u));
  /* 11dc10ee call edi */
  call_ind((uint32_t)(EDI), 0x11dc10f0u);
  /* 11dc10f0 push 0x11dc8280 */
  push32((uint32_t)(0x11dc8280u));
  /* 11dc10f5 push 0x11dcaf00 */
  push32((uint32_t)(0x11dcaf00u));
  /* 11dc10fa call edi */
  call_ind((uint32_t)(EDI), 0x11dc10fcu);
  /* 11dc10fc push 0x11dc8278 */
  push32((uint32_t)(0x11dc8278u));
  /* 11dc1101 push 0x11dcaef8 */
  push32((uint32_t)(0x11dcaef8u));
  /* 11dc1106 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1108u);
  /* 11dc1108 push 0x11dc826c */
  push32((uint32_t)(0x11dc826cu));
  /* 11dc110d push 0x11dcb038 */
  push32((uint32_t)(0x11dcb038u));
  /* 11dc1112 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1114u);
  /* 11dc1114 mov esi, dword ptr [0x11dc716c] */
  ESI = (r32((uint32_t)(0x11dc716c)));
  /* 11dc111a push 0x11dc8260 */
  push32((uint32_t)(0x11dc8260u));
  /* 11dc111f push 0x11dcae68 */
  push32((uint32_t)(0x11dcae68u));
  /* 11dc1124 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1126u);
  /* 11dc1126 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1129 push 0x11dc824c */
  push32((uint32_t)(0x11dc824cu));
  /* 11dc112e push 0x11dcae60 */
  push32((uint32_t)(0x11dcae60u));
  /* 11dc1133 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1135u);
  /* 11dc1135 push 0x11dc8238 */
  push32((uint32_t)(0x11dc8238u));
  /* 11dc113a push 0x11dcae08 */
  push32((uint32_t)(0x11dcae08u));
  /* 11dc113f call esi */
  call_ind((uint32_t)(ESI), 0x11dc1141u);
  /* 11dc1141 push 0x11dc8224 */
  push32((uint32_t)(0x11dc8224u));
  /* 11dc1146 push 0x11dcaf30 */
  push32((uint32_t)(0x11dcaf30u));
  /* 11dc114b call esi */
  call_ind((uint32_t)(ESI), 0x11dc114du);
  /* 11dc114d push 0x11dc8214 */
  push32((uint32_t)(0x11dc8214u));
  /* 11dc1152 push 0x11dcb030 */
  push32((uint32_t)(0x11dcb030u));
  /* 11dc1157 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1159u);
  /* 11dc1159 push 0x11dc820c */
  push32((uint32_t)(0x11dc820cu));
  /* 11dc115e push 0x11dcae70 */
  push32((uint32_t)(0x11dcae70u));
  /* 11dc1163 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1165u);
  /* 11dc1165 push 0x11dc8204 */
  push32((uint32_t)(0x11dc8204u));
  /* 11dc116a push 0x11dcae78 */
  push32((uint32_t)(0x11dcae78u));
  /* 11dc116f call edi */
  call_ind((uint32_t)(EDI), 0x11dc1171u);
  /* 11dc1171 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc1173 push 0x11dcaeb8 */
  push32((uint32_t)(0x11dcaeb8u));
  /* 11dc1178 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc117au);
  /* 11dc117a push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc117c push 0x11dcb054 */
  push32((uint32_t)(0x11dcb054u));
  /* 11dc1181 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1183u);
  /* 11dc1183 mov ebp, dword ptr [0x11dc717c] */
  EBP = (r32((uint32_t)(0x11dc717c)));
  /* 11dc1189 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc118c push 0x11dcae20 */
  push32((uint32_t)(0x11dcae20u));
  /* 11dc1191 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1193u);
  /* 11dc1193 push 0x11dcae28 */
  push32((uint32_t)(0x11dcae28u));
  /* 11dc1198 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc119au);
  /* 11dc119a push 0x11dcae30 */
  push32((uint32_t)(0x11dcae30u));
  /* 11dc119f call ebp */
  call_ind((uint32_t)(EBP), 0x11dc11a1u);
  /* 11dc11a1 push 0x11dcae38 */
  push32((uint32_t)(0x11dcae38u));
  /* 11dc11a6 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc11a8u);
  /* 11dc11a8 push 0x11dcae40 */
  push32((uint32_t)(0x11dcae40u));
  /* 11dc11ad call ebp */
  call_ind((uint32_t)(EBP), 0x11dc11afu);
  /* 11dc11af push 0x11dcae48 */
  push32((uint32_t)(0x11dcae48u));
  /* 11dc11b4 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc11b6u);
  /* 11dc11b6 push 0x11dcae50 */
  push32((uint32_t)(0x11dcae50u));
  /* 11dc11bb call ebp */
  call_ind((uint32_t)(EBP), 0x11dc11bdu);
  /* 11dc11bd push 0x11dcae58 */
  push32((uint32_t)(0x11dcae58u));
  /* 11dc11c2 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc11c4u);
  /* 11dc11c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dc11c6 push 0x11dcae20 */
  push32((uint32_t)(0x11dcae20u));
  /* 11dc11cb call ebx */
  call_ind((uint32_t)(EBX), 0x11dc11cdu);
  /* 11dc11cd push 0x11dc81f8 */
  push32((uint32_t)(0x11dc81f8u));
  /* 11dc11d2 push 0x11dcae10 */
  push32((uint32_t)(0x11dcae10u));
  /* 11dc11d7 call dword ptr [0x11dc7180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7180))), 0x11dc11ddu);
  /* 11dc11dd push 0x11dc81f0 */
  push32((uint32_t)(0x11dc81f0u));
  /* 11dc11e2 push 0x11dcaf18 */
  push32((uint32_t)(0x11dcaf18u));
  /* 11dc11e7 call dword ptr [0x11dc7180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7180))), 0x11dc11edu);
  /* 11dc11ed push 0x11dc81e8 */
  push32((uint32_t)(0x11dc81e8u));
  /* 11dc11f2 push 0x11dcaf50 */
  push32((uint32_t)(0x11dcaf50u));
  /* 11dc11f7 call edi */
  call_ind((uint32_t)(EDI), 0x11dc11f9u);
  /* 11dc11f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc11fc push 0x11dcadf8 */
  push32((uint32_t)(0x11dcadf8u));
  /* 11dc1201 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1203u);
  /* 11dc1203 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc1205 push 0x11dcadf8 */
  push32((uint32_t)(0x11dcadf8u));
  /* 11dc120a call ebx */
  call_ind((uint32_t)(EBX), 0x11dc120cu);
  /* 11dc120c push 0x11dc81e0 */
  push32((uint32_t)(0x11dc81e0u));
  /* 11dc1211 push 0x11dcae88 */
  push32((uint32_t)(0x11dcae88u));
  /* 11dc1216 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1218u);
  /* 11dc1218 push 0x11dc81d8 */
  push32((uint32_t)(0x11dc81d8u));
  /* 11dc121d push 0x11dcae90 */
  push32((uint32_t)(0x11dcae90u));
  /* 11dc1222 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1224u);
  /* 11dc1224 push 0x11dc81cc */
  push32((uint32_t)(0x11dc81ccu));
  /* 11dc1229 push 0x11dcae18 */
  push32((uint32_t)(0x11dcae18u));
  /* 11dc122e call dword ptr [0x11dc7180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7180))), 0x11dc1234u);
  /* 11dc1234 push 0x11dc81c4 */
  push32((uint32_t)(0x11dc81c4u));
  /* 11dc1239 push 0x11dcaf20 */
  push32((uint32_t)(0x11dcaf20u));
  /* 11dc123e call dword ptr [0x11dc7180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7180))), 0x11dc1244u);
  /* 11dc1244 push 0x11dc81bc */
  push32((uint32_t)(0x11dc81bcu));
  /* 11dc1249 push 0x11dcaf58 */
  push32((uint32_t)(0x11dcaf58u));
  /* 11dc124e call edi */
  call_ind((uint32_t)(EDI), 0x11dc1250u);
  /* 11dc1250 push 0x11dcae00 */
  push32((uint32_t)(0x11dcae00u));
  /* 11dc1255 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1257u);
  /* 11dc1257 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc1259 push 0x11dcae00 */
  push32((uint32_t)(0x11dcae00u));
  /* 11dc125e call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1260u);
  /* 11dc1260 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1263 push 0x11dc81ac */
  push32((uint32_t)(0x11dc81acu));
  /* 11dc1268 push 0x11dcaf60 */
  push32((uint32_t)(0x11dcaf60u));
  /* 11dc126d call esi */
  call_ind((uint32_t)(ESI), 0x11dc126fu);
  /* 11dc126f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dc1274 push 0x11dcafb0 */
  push32((uint32_t)(0x11dcafb0u));
  /* 11dc1279 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc127bu);
  /* 11dc127b push 0x11dc8224 */
  push32((uint32_t)(0x11dc8224u));
  /* 11dc1280 push 0x11dcafb0 */
  push32((uint32_t)(0x11dcafb0u));
  /* 11dc1285 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1287u);
  /* 11dc1287 push 0x11dc8214 */
  push32((uint32_t)(0x11dc8214u));
  /* 11dc128c push 0x11dcafb8 */
  push32((uint32_t)(0x11dcafb8u));
  /* 11dc1291 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1293u);
  /* 11dc1293 push 0x11dc81a0 */
  push32((uint32_t)(0x11dc81a0u));
  /* 11dc1298 push 0x11dcafc0 */
  push32((uint32_t)(0x11dcafc0u));
  /* 11dc129d call esi */
  call_ind((uint32_t)(ESI), 0x11dc129fu);
  /* 11dc129f push 0x11dc8194 */
  push32((uint32_t)(0x11dc8194u));
  /* 11dc12a4 push 0x11dcafc8 */
  push32((uint32_t)(0x11dcafc8u));
  /* 11dc12a9 call esi */
  call_ind((uint32_t)(ESI), 0x11dc12abu);
  /* 11dc12ab push 0x11dc8184 */
  push32((uint32_t)(0x11dc8184u));
  /* 11dc12b0 push 0x11dcafd0 */
  push32((uint32_t)(0x11dcafd0u));
  /* 11dc12b5 call esi */
  call_ind((uint32_t)(ESI), 0x11dc12b7u);
  /* 11dc12b7 push 0x11dc8174 */
  push32((uint32_t)(0x11dc8174u));
  /* 11dc12bc push 0x11dcafd8 */
  push32((uint32_t)(0x11dcafd8u));
  /* 11dc12c1 call esi */
  call_ind((uint32_t)(ESI), 0x11dc12c3u);
  /* 11dc12c3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc12c6 push 0x11dc8168 */
  push32((uint32_t)(0x11dc8168u));
  /* 11dc12cb push 0x11dcafe0 */
  push32((uint32_t)(0x11dcafe0u));
  /* 11dc12d0 call esi */
  call_ind((uint32_t)(ESI), 0x11dc12d2u);
  /* 11dc12d2 push 0x11dc815c */
  push32((uint32_t)(0x11dc815cu));
  /* 11dc12d7 push 0x11dcafe8 */
  push32((uint32_t)(0x11dcafe8u));
  /* 11dc12dc call esi */
  call_ind((uint32_t)(ESI), 0x11dc12deu);
  /* 11dc12de push 0x11dc8150 */
  push32((uint32_t)(0x11dc8150u));
  /* 11dc12e3 push 0x11dcaff0 */
  push32((uint32_t)(0x11dcaff0u));
  /* 11dc12e8 call esi */
  call_ind((uint32_t)(ESI), 0x11dc12eau);
  /* 11dc12ea push 0x11dc8140 */
  push32((uint32_t)(0x11dc8140u));
  /* 11dc12ef push 0x11dcaff8 */
  push32((uint32_t)(0x11dcaff8u));
  /* 11dc12f4 call esi */
  call_ind((uint32_t)(ESI), 0x11dc12f6u);
  /* 11dc12f6 push 0x11dc8130 */
  push32((uint32_t)(0x11dc8130u));
  /* 11dc12fb push 0x11dcb000 */
  push32((uint32_t)(0x11dcb000u));
  /* 11dc1300 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1302u);
  /* 11dc1302 push 0x11dc8238 */
  push32((uint32_t)(0x11dc8238u));
  /* 11dc1307 push 0x11dcb008 */
  push32((uint32_t)(0x11dcb008u));
  /* 11dc130c call esi */
  call_ind((uint32_t)(ESI), 0x11dc130eu);
  /* 11dc130e push 0x11dc8120 */
  push32((uint32_t)(0x11dc8120u));
  /* 11dc1313 push 0x11dcb010 */
  push32((uint32_t)(0x11dcb010u));
  /* 11dc1318 call esi */
  call_ind((uint32_t)(ESI), 0x11dc131au);
  /* 11dc131a push 0x11dc810c */
  push32((uint32_t)(0x11dc810cu));
  /* 11dc131f push 0x11dcb018 */
  push32((uint32_t)(0x11dcb018u));
  /* 11dc1324 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1326u);
  /* 11dc1326 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1329 push 0x11dc824c */
  push32((uint32_t)(0x11dc824cu));
  /* 11dc132e push 0x11dcb020 */
  push32((uint32_t)(0x11dcb020u));
  /* 11dc1333 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1335u);
  /* 11dc1335 push 0x11dc80f4 */
  push32((uint32_t)(0x11dc80f4u));
  /* 11dc133a push 0x11dcb028 */
  push32((uint32_t)(0x11dcb028u));
  /* 11dc133f call esi */
  call_ind((uint32_t)(ESI), 0x11dc1341u);
  /* 11dc1341 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dc1343 push 0x11dcaf90 */
  push32((uint32_t)(0x11dcaf90u));
  /* 11dc1348 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc134au);
  /* 11dc134a push 0x11dc80e4 */
  push32((uint32_t)(0x11dc80e4u));
  /* 11dc134f push 0x11dcaf90 */
  push32((uint32_t)(0x11dcaf90u));
  /* 11dc1354 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1356u);
  /* 11dc1356 push 0x11dc8260 */
  push32((uint32_t)(0x11dc8260u));
  /* 11dc135b push 0x11dcaf98 */
  push32((uint32_t)(0x11dcaf98u));
  /* 11dc1360 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1362u);
  /* 11dc1362 push 0x11dcaee0 */
  push32((uint32_t)(0x11dcaee0u));
  /* 11dc1367 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1369u);
  /* 11dc1369 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc136b push 0x11dcaee0 */
  push32((uint32_t)(0x11dcaee0u));
  /* 11dc1370 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1372u);
  /* 11dc1372 push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1377 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1379u);
  /* 11dc1379 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc137b push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1380 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1382u);
  /* 11dc1382 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1385 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1387 push 0x11dcaf38 */
  push32((uint32_t)(0x11dcaf38u));
  /* 11dc138c call ebx */
  call_ind((uint32_t)(EBX), 0x11dc138eu);
  /* 11dc138e push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1390 push 0x11dcaf68 */
  push32((uint32_t)(0x11dcaf68u));
  /* 11dc1395 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1397u);
  /* 11dc1397 push 0x11dc80d8 */
  push32((uint32_t)(0x11dc80d8u));
  /* 11dc139c push 0x11dcaf80 */
  push32((uint32_t)(0x11dcaf80u));
  /* 11dc13a1 call edi */
  call_ind((uint32_t)(EDI), 0x11dc13a3u);
  /* 11dc13a3 mov edi, dword ptr [0x11dc7180] */
  EDI = (r32((uint32_t)(0x11dc7180)));
  /* 11dc13a9 push 0x11dc80d0 */
  push32((uint32_t)(0x11dc80d0u));
  /* 11dc13ae push 0x11dcaea0 */
  push32((uint32_t)(0x11dcaea0u));
  /* 11dc13b3 call edi */
  call_ind((uint32_t)(EDI), 0x11dc13b5u);
  /* 11dc13b5 push 0x11dc80c8 */
  push32((uint32_t)(0x11dc80c8u));
  /* 11dc13ba push 0x11dcaea8 */
  push32((uint32_t)(0x11dcaea8u));
  /* 11dc13bf call edi */
  call_ind((uint32_t)(EDI), 0x11dc13c1u);
  /* 11dc13c1 push 0x11dc80c0 */
  push32((uint32_t)(0x11dc80c0u));
  /* 11dc13c6 push 0x11dcaeb0 */
  push32((uint32_t)(0x11dcaeb0u));
  /* 11dc13cb call edi */
  call_ind((uint32_t)(EDI), 0x11dc13cdu);
  /* 11dc13cd push 0x11dc80b4 */
  push32((uint32_t)(0x11dc80b4u));
  /* 11dc13d2 push 0x11dcaf78 */
  push32((uint32_t)(0x11dcaf78u));
  /* 11dc13d7 call edi */
  call_ind((uint32_t)(EDI), 0x11dc13d9u);
  /* 11dc13d9 push 0x11dc80a8 */
  push32((uint32_t)(0x11dc80a8u));
  /* 11dc13de push 0x11dcaee8 */
  push32((uint32_t)(0x11dcaee8u));
  /* 11dc13e3 call esi */
  call_ind((uint32_t)(ESI), 0x11dc13e5u);
  /* 11dc13e5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc13e8 push 0x11dcaf70 */
  push32((uint32_t)(0x11dcaf70u));
  /* 11dc13ed call ebp */
  call_ind((uint32_t)(EBP), 0x11dc13efu);
  /* 11dc13ef push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc13f1 push 0x11dcaf70 */
  push32((uint32_t)(0x11dcaf70u));
  /* 11dc13f6 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc13f8u);
  /* 11dc13f8 push 0x11dc80a0 */
  push32((uint32_t)(0x11dc80a0u));
  /* 11dc13fd push 0x11dcae80 */
  push32((uint32_t)(0x11dcae80u));
  /* 11dc1402 call dword ptr [0x11dc7178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7178))), 0x11dc1408u);
  /* 11dc1408 push 0x11dc8094 */
  push32((uint32_t)(0x11dc8094u));
  /* 11dc140d push 0x11dcb048 */
  push32((uint32_t)(0x11dcb048u));
  /* 11dc1412 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1414u);
  /* 11dc1414 push 0x11dc8088 */
  push32((uint32_t)(0x11dc8088u));
  /* 11dc1419 push 0x11dcb040 */
  push32((uint32_t)(0x11dcb040u));
  /* 11dc141e call edi */
  call_ind((uint32_t)(EDI), 0x11dc1420u);
  /* 11dc1420 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1422 call dword ptr [0x11dc7188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7188))), 0x11dc1428u);
  /* 11dc1428 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc142b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc142e ja 0x11dc15d4 */
  if ((!C.cf&&!C.zf)) goto L_11dc15d4;
  /* 11dc1434 jmp dword ptr [eax*4 + 0x11dc1648] */
  switch (EAX) {
    case 0: goto L_11dc143b;
    case 1: goto L_11dc1489;
    case 2: goto L_11dc14f5;
    case 3: goto L_11dc1570;
    default: x86_unimpl("switch@0x11dc1434 out of table"); return;
  }
L_11dc143b:;
  /* 11dc143b mov edi, dword ptr [0x11dc718c] */
  EDI = (r32((uint32_t)(0x11dc718c)));
  /* 11dc1441 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1443 push 0x11dcafa0 */
  push32((uint32_t)(0x11dcafa0u));
  /* 11dc1448 call edi */
  call_ind((uint32_t)(EDI), 0x11dc144au);
  /* 11dc144a push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc144c push 0x11dcaf48 */
  push32((uint32_t)(0x11dcaf48u));
  /* 11dc1451 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1453u);
  /* 11dc1453 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1455 call dword ptr [0x11dc7184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7184))), 0x11dc145bu);
  /* 11dc145b push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc145d call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc1463u);
  /* 11dc1463 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1466 mov dword ptr [0x11dcaf38], 0x7530 */
  w32((uint32_t)(0x11dcaf38), (0x7530u));
  /* 11dc1470 mov dword ptr [0x11dcaeb8], 0xbb8 */
  w32((uint32_t)(0x11dcaeb8), (0xbb8u));
  /* 11dc147a mov dword ptr [0x11dcaebc], 0x14 */
  w32((uint32_t)(0x11dcaebc), (0x14u));
  /* 11dc1484 jmp 0x11dc15d4 */
  goto L_11dc15d4;
L_11dc1489:;
  /* 11dc1489 mov edi, dword ptr [0x11dc718c] */
  EDI = (r32((uint32_t)(0x11dc718c)));
  /* 11dc148f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1491 push 0x11dcaec8 */
  push32((uint32_t)(0x11dcaec8u));
  /* 11dc1496 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1498u);
  /* 11dc1498 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc149a push 0x11dcaf00 */
  push32((uint32_t)(0x11dcaf00u));
  /* 11dc149f call edi */
  call_ind((uint32_t)(EDI), 0x11dc14a1u);
  /* 11dc14a1 mov ebx, dword ptr [0x11dc7184] */
  EBX = (r32((uint32_t)(0x11dc7184)));
  /* 11dc14a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc14a9 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc14abu);
  /* 11dc14ab mov ebp, dword ptr [0x11dc7194] */
  EBP = (r32((uint32_t)(0x11dc7194)));
  /* 11dc14b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc14b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc14b5u);
  /* 11dc14b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc14b7 push 0x11dcaf40 */
  push32((uint32_t)(0x11dcaf40u));
  /* 11dc14bc call edi */
  call_ind((uint32_t)(EDI), 0x11dc14beu);
  /* 11dc14be push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc14c0 push 0x11dcaf88 */
  push32((uint32_t)(0x11dcaf88u));
  /* 11dc14c5 call edi */
  call_ind((uint32_t)(EDI), 0x11dc14c7u);
  /* 11dc14c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc14c9 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc14cbu);
  /* 11dc14cb push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc14cd call ebp */
  call_ind((uint32_t)(EBP), 0x11dc14cfu);
  /* 11dc14cf add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc14d2 mov dword ptr [0x11dcaf38], 0x9c40 */
  w32((uint32_t)(0x11dcaf38), (0x9c40u));
  /* 11dc14dc mov dword ptr [0x11dcaeb8], 0x7d0 */
  w32((uint32_t)(0x11dcaeb8), (0x7d0u));
  /* 11dc14e6 mov dword ptr [0x11dcaebc], 0x19 */
  w32((uint32_t)(0x11dcaebc), (0x19u));
  /* 11dc14f0 jmp 0x11dc15d4 */
  goto L_11dc15d4;
L_11dc14f5:;
  /* 11dc14f5 mov edi, dword ptr [0x11dc718c] */
  EDI = (r32((uint32_t)(0x11dc718c)));
  /* 11dc14fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc14fd push 0x11dcaed8 */
  push32((uint32_t)(0x11dcaed8u));
  /* 11dc1502 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1504u);
  /* 11dc1504 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1506 push 0x11dcaed0 */
  push32((uint32_t)(0x11dcaed0u));
  /* 11dc150b call edi */
  call_ind((uint32_t)(EDI), 0x11dc150du);
  /* 11dc150d push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc150f push 0x11dcaf00 */
  push32((uint32_t)(0x11dcaf00u));
  /* 11dc1514 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1516u);
  /* 11dc1516 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1518 push 0x11dcaef8 */
  push32((uint32_t)(0x11dcaef8u));
  /* 11dc151d call edi */
  call_ind((uint32_t)(EDI), 0x11dc151fu);
  /* 11dc151f mov ebx, dword ptr [0x11dc7184] */
  EBX = (r32((uint32_t)(0x11dc7184)));
  /* 11dc1525 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1527 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1529u);
  /* 11dc1529 mov ebp, dword ptr [0x11dc7194] */
  EBP = (r32((uint32_t)(0x11dc7194)));
  /* 11dc152f push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1531 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1533u);
  /* 11dc1533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1535 push 0x11dcaf08 */
  push32((uint32_t)(0x11dcaf08u));
  /* 11dc153a call edi */
  call_ind((uint32_t)(EDI), 0x11dc153cu);
  /* 11dc153c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc153e push 0x11dcae98 */
  push32((uint32_t)(0x11dcae98u));
  /* 11dc1543 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1545u);
  /* 11dc1545 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1547 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1549u);
  /* 11dc1549 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc154b call ebp */
  call_ind((uint32_t)(EBP), 0x11dc154du);
  /* 11dc154d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1550 mov dword ptr [0x11dcaf38], 0xd6d8 */
  w32((uint32_t)(0x11dcaf38), (0xd6d8u));
  /* 11dc155a mov dword ptr [0x11dcaeb8], 0x5dc */
  w32((uint32_t)(0x11dcaeb8), (0x5dcu));
  /* 11dc1564 mov dword ptr [0x11dcaebc], 0x1e */
  w32((uint32_t)(0x11dcaebc), (0x1eu));
  /* 11dc156e jmp 0x11dc15d4 */
  goto L_11dc15d4;
L_11dc1570:;
  /* 11dc1570 mov edi, dword ptr [0x11dc718c] */
  EDI = (r32((uint32_t)(0x11dc718c)));
  /* 11dc1576 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1578 push 0x11dcaed8 */
  push32((uint32_t)(0x11dcaed8u));
  /* 11dc157d call edi */
  call_ind((uint32_t)(EDI), 0x11dc157fu);
  /* 11dc157f push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1581 push 0x11dcaed0 */
  push32((uint32_t)(0x11dcaed0u));
  /* 11dc1586 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1588u);
  /* 11dc1588 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc158a push 0x11dcaec0 */
  push32((uint32_t)(0x11dcaec0u));
  /* 11dc158f call edi */
  call_ind((uint32_t)(EDI), 0x11dc1591u);
  /* 11dc1591 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1593 push 0x11dcaf00 */
  push32((uint32_t)(0x11dcaf00u));
  /* 11dc1598 call edi */
  call_ind((uint32_t)(EDI), 0x11dc159au);
  /* 11dc159a push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc159c push 0x11dcaef8 */
  push32((uint32_t)(0x11dcaef8u));
  /* 11dc15a1 call edi */
  call_ind((uint32_t)(EDI), 0x11dc15a3u);
  /* 11dc15a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc15a5 call dword ptr [0x11dc7184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7184))), 0x11dc15abu);
  /* 11dc15ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc15ad call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc15b3u);
  /* 11dc15b3 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc15b6 mov dword ptr [0x11dcaf38], 0x11170 */
  w32((uint32_t)(0x11dcaf38), (0x11170u));
  /* 11dc15c0 mov dword ptr [0x11dcaeb8], 0x3e8 */
  w32((uint32_t)(0x11dcaeb8), (0x3e8u));
  /* 11dc15ca mov dword ptr [0x11dcaebc], 0x23 */
  w32((uint32_t)(0x11dcaebc), (0x23u));
L_11dc15d4:;
  /* 11dc15d4 mov edi, dword ptr [0x11dc7198] */
  EDI = (r32((uint32_t)(0x11dc7198)));
  /* 11dc15da push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc15dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc15de call edi */
  call_ind((uint32_t)(EDI), 0x11dc15e0u);
  /* 11dc15e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc15e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc15e4 call edi */
  call_ind((uint32_t)(EDI), 0x11dc15e6u);
  /* 11dc15e6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11dc15e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc15ea call edi */
  call_ind((uint32_t)(EDI), 0x11dc15ecu);
  /* 11dc15ec push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11dc15ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc15f0 call edi */
  call_ind((uint32_t)(EDI), 0x11dc15f2u);
  /* 11dc15f2 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11dc15f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc15f6 call edi */
  call_ind((uint32_t)(EDI), 0x11dc15f8u);
  /* 11dc15f8 push 0x11dc8070 */
  push32((uint32_t)(0x11dc8070u));
  /* 11dc15fd push 0x11dcaf28 */
  push32((uint32_t)(0x11dcaf28u));
  /* 11dc1602 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1604u);
  /* 11dc1604 push 0x11dc805c */
  push32((uint32_t)(0x11dc805cu));
  /* 11dc1609 push 0x11dcaf10 */
  push32((uint32_t)(0x11dcaf10u));
  /* 11dc160e call esi */
  call_ind((uint32_t)(ESI), 0x11dc1610u);
  /* 11dc1610 mov esi, dword ptr [0x11dc7190] */
  ESI = (r32((uint32_t)(0x11dc7190)));
  /* 11dc1616 push 0x11dc8054 */
  push32((uint32_t)(0x11dc8054u));
  /* 11dc161b push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc161d call esi */
  call_ind((uint32_t)(ESI), 0x11dc161fu);
  /* 11dc161f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1622 push 0x11dc804c */
  push32((uint32_t)(0x11dc804cu));
  /* 11dc1627 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1629 call esi */
  call_ind((uint32_t)(ESI), 0x11dc162bu);
  /* 11dc162b push 0x11dc8044 */
  push32((uint32_t)(0x11dc8044u));
  /* 11dc1630 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1632 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1634u);
  /* 11dc1634 push 0x11dc8038 */
  push32((uint32_t)(0x11dc8038u));
  /* 11dc1639 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc163b call esi */
  call_ind((uint32_t)(ESI), 0x11dc163du);
  /* 11dc163d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1640 pop edi */
  EDI = (pop32());
  /* 11dc1641 pop esi */
  ESI = (pop32());
  /* 11dc1642 pop ebp */
  EBP = (pop32());
  /* 11dc1643 pop ebx */
  EBX = (pop32());
  /* 11dc1644 ret  */
  ESPCHK(0x11dc1050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11dc1660 (2355 bytes, 699 insns) [1 switch table(s)] */
void f_11dc1660(void) {
  FTRACE(0x11dc1660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc1660 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc1663 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc1664 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1665 push esi */
  push32((uint32_t)(ESI));
  /* 11dc1666 push edi */
  push32((uint32_t)(EDI));
  /* 11dc1667 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1669 call dword ptr [0x11dc70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f0))), 0x11dc166fu);
  /* 11dc166f mov edi, dword ptr [0x11dc718c] */
  EDI = (r32((uint32_t)(0x11dc718c)));
  /* 11dc1675 mov esi, dword ptr [0x11dc70e8] */
  ESI = (r32((uint32_t)(0x11dc70e8)));
  /* 11dc167b mov ebx, dword ptr [0x11dc70f8] */
  EBX = (r32((uint32_t)(0x11dc70f8)));
  /* 11dc1681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1684 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1686 je 0x11dc188c */
  if (C.zf) goto L_11dc188c;
  /* 11dc168c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc168e push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1690 call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1696u);
  /* 11dc1696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1699 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_11dc169b:;
  /* 11dc169b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc169d call dword ptr [0x11dc7188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7188))), 0x11dc16a3u);
  /* 11dc16a3 mov ecx, 6 */
  ECX = (0x6u);
  /* 11dc16a8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc16aa lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11dc16ad lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11dc16b0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dc16b3 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11dc16b6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc16b7 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc16b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc16ba call dword ptr [0x11dc70f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f4))), 0x11dc16c0u);
  /* 11dc16c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc16c3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11dc16c4 cmp ebp, 6 */
  { uint32_t _a=(EBP),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc16c7 jl 0x11dc169b */
  if ((C.sf!=C.of)) goto L_11dc169b;
  /* 11dc16c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc16cb push 0x11dcaed8 */
  push32((uint32_t)(0x11dcaed8u));
  /* 11dc16d0 call edi */
  call_ind((uint32_t)(EDI), 0x11dc16d2u);
  /* 11dc16d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc16d4 push 0x11dcaec8 */
  push32((uint32_t)(0x11dcaec8u));
  /* 11dc16d9 call edi */
  call_ind((uint32_t)(EDI), 0x11dc16dbu);
  /* 11dc16db push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc16dd push 0x11dcaed0 */
  push32((uint32_t)(0x11dcaed0u));
  /* 11dc16e2 call edi */
  call_ind((uint32_t)(EDI), 0x11dc16e4u);
  /* 11dc16e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc16e6 push 0x11dcaec0 */
  push32((uint32_t)(0x11dcaec0u));
  /* 11dc16eb call edi */
  call_ind((uint32_t)(EDI), 0x11dc16edu);
  /* 11dc16ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc16ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc16f1 call dword ptr [0x11dc7104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7104))), 0x11dc16f7u);
  /* 11dc16f7 push 0x11dcb038 */
  push32((uint32_t)(0x11dcb038u));
  /* 11dc16fc call dword ptr [0x11dc7108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7108))), 0x11dc1702u);
  /* 11dc1702 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1704 push 0x11dcae68 */
  push32((uint32_t)(0x11dcae68u));
  /* 11dc1709 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc170b call esi */
  call_ind((uint32_t)(ESI), 0x11dc170du);
  /* 11dc170d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc170f push 0x11dcae60 */
  push32((uint32_t)(0x11dcae60u));
  /* 11dc1714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1716 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1718u);
  /* 11dc1718 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc171b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc171d push 0x11dcae08 */
  push32((uint32_t)(0x11dcae08u));
  /* 11dc1722 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1724 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1726u);
  /* 11dc1726 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1728 push 0x11dcaf30 */
  push32((uint32_t)(0x11dcaf30u));
  /* 11dc172d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc172f call esi */
  call_ind((uint32_t)(ESI), 0x11dc1731u);
  /* 11dc1731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1733 push 0x11dcb030 */
  push32((uint32_t)(0x11dcb030u));
  /* 11dc1738 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc173a call esi */
  call_ind((uint32_t)(ESI), 0x11dc173cu);
  /* 11dc173c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc173e push 0x11dcae70 */
  push32((uint32_t)(0x11dcae70u));
  /* 11dc1743 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1745u);
  /* 11dc1745 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1747 push 0x11dcae78 */
  push32((uint32_t)(0x11dcae78u));
  /* 11dc174c call edi */
  call_ind((uint32_t)(EDI), 0x11dc174eu);
  /* 11dc174e push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1750 call dword ptr [0x11dc7100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7100))), 0x11dc1756u);
  /* 11dc1756 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1758 call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc175eu);
  /* 11dc175e mov ebp, dword ptr [0x11dc7110] */
  EBP = (r32((uint32_t)(0x11dc7110)));
  /* 11dc1764 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11dc1766 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1768 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc176au);
  /* 11dc176a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc176d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11dc1772 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1774 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1776u);
  /* 11dc1776 mov ebp, dword ptr [0x11dc7114] */
  EBP = (r32((uint32_t)(0x11dc7114)));
  /* 11dc177c push 0x11dcaf18 */
  push32((uint32_t)(0x11dcaf18u));
  /* 11dc1781 push 0x11dcaf50 */
  push32((uint32_t)(0x11dcaf50u));
  /* 11dc1786 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1788u);
  /* 11dc1788 push 0x11dcaf20 */
  push32((uint32_t)(0x11dcaf20u));
  /* 11dc178d push 0x11dcaf58 */
  push32((uint32_t)(0x11dcaf58u));
  /* 11dc1792 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1794u);
  /* 11dc1794 lea ecx, [esp + 0x2c] */
  ECX = ((uint32_t)(ESP + 0x2c));
  /* 11dc1798 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc1799 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc179b push 0x11dcaf80 */
  push32((uint32_t)(0x11dcaf80u));
  /* 11dc17a0 call dword ptr [0x11dc710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc710c))), 0x11dc17a6u);
  /* 11dc17a6 mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 11dc17aa mov ebp, dword ptr [0x11dc7110] */
  EBP = (r32((uint32_t)(0x11dc7110)));
  /* 11dc17b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dc17b6 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11dc17bb push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc17bd mov dword ptr [0x11dcaf68], edx */
  w32((uint32_t)(0x11dcaf68), (EDX));
  /* 11dc17c3 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc17c5u);
  /* 11dc17c5 push 0x11dc83ec */
  push32((uint32_t)(0x11dc83ecu));
  /* 11dc17ca call dword ptr [0x11dc711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc711c))), 0x11dc17d0u);
  /* 11dc17d0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11dc17d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc17d7 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc17d9u);
  /* 11dc17d9 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11dc17db call ebx */
  call_ind((uint32_t)(EBX), 0x11dc17ddu);
  /* 11dc17dd push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11dc17df call ebx */
  call_ind((uint32_t)(EBX), 0x11dc17e1u);
  /* 11dc17e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc17e4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11dc17e6 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc17e8u);
  /* 11dc17e8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11dc17ea call ebx */
  call_ind((uint32_t)(EBX), 0x11dc17ecu);
  /* 11dc17ec mov ebp, dword ptr [0x11dc7120] */
  EBP = (r32((uint32_t)(0x11dc7120)));
  /* 11dc17f2 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11dc17f4 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc17f6u);
  /* 11dc17f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11dc17f8 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc17fau);
  /* 11dc17fa push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11dc17fc call ebp */
  call_ind((uint32_t)(EBP), 0x11dc17feu);
  /* 11dc17fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1800 call dword ptr [0x11dc7188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7188))), 0x11dc1806u);
  /* 11dc1806 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1809 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc180c ja 0x11dc1871 */
  if ((!C.cf&&!C.zf)) goto L_11dc1871;
  /* 11dc180e jmp dword ptr [eax*4 + 0x11dc1f94] */
  switch (EAX) {
    case 0: goto L_11dc185e;
    case 1: goto L_11dc184b;
    case 2: goto L_11dc1838;
    case 3: goto L_11dc1815;
    default: x86_unimpl("switch@0x11dc180e out of table"); return;
  }
L_11dc1815:;
  /* 11dc1815 push 0x11dc83d8 */
  push32((uint32_t)(0x11dc83d8u));
  /* 11dc181a push 0x11dc81e0 */
  push32((uint32_t)(0x11dc81e0u));
  /* 11dc181f call dword ptr [0x11dc7118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7118))), 0x11dc1825u);
  /* 11dc1825 push 0x11dc83c4 */
  push32((uint32_t)(0x11dc83c4u));
  /* 11dc182a push 0x11dc81e0 */
  push32((uint32_t)(0x11dc81e0u));
  /* 11dc182f call dword ptr [0x11dc7118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7118))), 0x11dc1835u);
  /* 11dc1835 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1838:;
  /* 11dc1838 push 0x11dc83b0 */
  push32((uint32_t)(0x11dc83b0u));
  /* 11dc183d push 0x11dc81e0 */
  push32((uint32_t)(0x11dc81e0u));
  /* 11dc1842 call dword ptr [0x11dc7118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7118))), 0x11dc1848u);
  /* 11dc1848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc184b:;
  /* 11dc184b push 0x11dc839c */
  push32((uint32_t)(0x11dc839cu));
  /* 11dc1850 push 0x11dc81e0 */
  push32((uint32_t)(0x11dc81e0u));
  /* 11dc1855 call dword ptr [0x11dc7118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7118))), 0x11dc185bu);
  /* 11dc185b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc185e:;
  /* 11dc185e push 0x11dc8388 */
  push32((uint32_t)(0x11dc8388u));
  /* 11dc1863 push 0x11dc81e0 */
  push32((uint32_t)(0x11dc81e0u));
  /* 11dc1868 call dword ptr [0x11dc7118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7118))), 0x11dc186eu);
  /* 11dc186e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1871:;
  /* 11dc1871 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1873 push 0x11dcaf28 */
  push32((uint32_t)(0x11dcaf28u));
  /* 11dc1878 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc187a call esi */
  call_ind((uint32_t)(ESI), 0x11dc187cu);
  /* 11dc187c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc187e push 0x11dcaf10 */
  push32((uint32_t)(0x11dcaf10u));
  /* 11dc1883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1885 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1887u);
  /* 11dc1887 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc188a jmp 0x11dc1892 */
  goto L_11dc1892;
L_11dc188c:;
  /* 11dc188c mov ebp, dword ptr [0x11dc7120] */
  EBP = (r32((uint32_t)(0x11dc7120)));
L_11dc1892:;
  /* 11dc1892 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1894 call dword ptr [0x11dc7128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7128))), 0x11dc189au);
  /* 11dc189a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc189d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc189f je 0x11dc18af */
  if (C.zf) goto L_11dc18af;
  /* 11dc18a1 push 0x11dc837c */
  push32((uint32_t)(0x11dc837cu));
  /* 11dc18a6 call dword ptr [0x11dc711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc711c))), 0x11dc18acu);
  /* 11dc18ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc18af:;
  /* 11dc18af push 0x11dcaf50 */
  push32((uint32_t)(0x11dcaf50u));
  /* 11dc18b4 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc18bau);
  /* 11dc18ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc18bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc18bf jne 0x11dc18d7 */
  if (!C.zf) goto L_11dc18d7;
  /* 11dc18c1 push 0x11dcaf58 */
  push32((uint32_t)(0x11dcaf58u));
  /* 11dc18c6 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc18ccu);
  /* 11dc18cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc18cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc18d1 je 0x11dc1acb */
  if (C.zf) goto L_11dc1acb;
L_11dc18d7:;
  /* 11dc18d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc18d9 call dword ptr [0x11dc7124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7124))), 0x11dc18dfu);
  /* 11dc18df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc18e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc18e4 je 0x11dc19a3 */
  if (C.zf) goto L_11dc19a3;
  /* 11dc18ea mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 11dc18f2 mov ebp, 0x11dcae28 */
  EBP = (0x11dcae28u);
L_11dc18f7:;
  /* 11dc18f7 cmp dword ptr [0x11dcb054], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb054))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc18fe jne 0x11dc193f */
  if (!C.zf) goto L_11dc193f;
  /* 11dc1900 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11dc1903 push eax */
  push32((uint32_t)(EAX));
  /* 11dc1904 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc190au);
  /* 11dc190a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc190d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc190f jne 0x11dc1929 */
  if (!C.zf) goto L_11dc1929;
  /* 11dc1911 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1912 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc1918u);
  /* 11dc1918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc191b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc191d jne 0x11dc1929 */
  if (!C.zf) goto L_11dc1929;
  /* 11dc191f mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc1923 mov dword ptr [0x11dcb054], ecx */
  w32((uint32_t)(0x11dcb054), (ECX));
L_11dc1929:;
  /* 11dc1929 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc192d add ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1930 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1933 cmp ebp, 0x11dcae68 */
  { uint32_t _a=(EBP),_b=(0x11dcae68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1939 mov dword ptr [esp + 0x10], ecx */
  w32((uint32_t)(ESP + 0x10), (ECX));
  /* 11dc193d jl 0x11dc18f7 */
  if ((C.sf!=C.of)) goto L_11dc18f7;
L_11dc193f:;
  /* 11dc193f push 0x11dcaf50 */
  push32((uint32_t)(0x11dcaf50u));
  /* 11dc1944 call dword ptr [0x11dc7134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7134))), 0x11dc194au);
  /* 11dc194a mov ebp, dword ptr [0x11dc7138] */
  EBP = (r32((uint32_t)(0x11dc7138)));
  /* 11dc1950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1953 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1955 je 0x11dc1974 */
  if (C.zf) goto L_11dc1974;
  /* 11dc1957 cmp dword ptr [0x11dcb054], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb054))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc195e je 0x11dc1974 */
  if (C.zf) goto L_11dc1974;
  /* 11dc1960 push 0x11dcadf8 */
  push32((uint32_t)(0x11dcadf8u));
  /* 11dc1965 push 0x11dcaf60 */
  push32((uint32_t)(0x11dcaf60u));
  /* 11dc196a push 0x11dcaf50 */
  push32((uint32_t)(0x11dcaf50u));
  /* 11dc196f call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1971u);
  /* 11dc1971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1974:;
  /* 11dc1974 push 0x11dcaf58 */
  push32((uint32_t)(0x11dcaf58u));
  /* 11dc1979 call dword ptr [0x11dc7134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7134))), 0x11dc197fu);
  /* 11dc197f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1982 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1984 je 0x11dc19a3 */
  if (C.zf) goto L_11dc19a3;
  /* 11dc1986 cmp dword ptr [0x11dcb054], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb054))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc198d je 0x11dc19a3 */
  if (C.zf) goto L_11dc19a3;
  /* 11dc198f push 0x11dcae00 */
  push32((uint32_t)(0x11dcae00u));
  /* 11dc1994 push 0x11dcaf60 */
  push32((uint32_t)(0x11dcaf60u));
  /* 11dc1999 push 0x11dcaf58 */
  push32((uint32_t)(0x11dcaf58u));
  /* 11dc199e call ebp */
  call_ind((uint32_t)(EBP), 0x11dc19a0u);
  /* 11dc19a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc19a3:;
  /* 11dc19a3 mov ebp, dword ptr [0x11dc712c] */
  EBP = (r32((uint32_t)(0x11dc712c)));
  /* 11dc19a9 push 0x11dcadf8 */
  push32((uint32_t)(0x11dcadf8u));
  /* 11dc19ae call ebp */
  call_ind((uint32_t)(EBP), 0x11dc19b0u);
  /* 11dc19b0 mov ecx, dword ptr [0x11dcaebc] */
  ECX = (r32((uint32_t)(0x11dcaebc)));
  /* 11dc19b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc19b9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc19bb je 0x11dc19d1 */
  if (C.zf) goto L_11dc19d1;
  /* 11dc19bd push 0x11dcae00 */
  push32((uint32_t)(0x11dcae00u));
  /* 11dc19c2 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc19c4u);
  /* 11dc19c4 mov ecx, dword ptr [0x11dcaebc] */
  ECX = (r32((uint32_t)(0x11dcaebc)));
  /* 11dc19ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc19cd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc19cf jne 0x11dc1a1c */
  if (!C.zf) goto L_11dc1a1c;
L_11dc19d1:;
  /* 11dc19d1 mov edx, dword ptr [0x11dcb054] */
  EDX = (r32((uint32_t)(0x11dcb054)));
  /* 11dc19d7 mov ebp, dword ptr [0x11dc7130] */
  EBP = (r32((uint32_t)(0x11dc7130)));
  /* 11dc19dd lea eax, [edx*8 + 0x11dcae20] */
  EAX = ((uint32_t)(EDX*8 + 0x11dcae20));
  /* 11dc19e4 push eax */
  push32((uint32_t)(EAX));
  /* 11dc19e5 push 0x11dcadf8 */
  push32((uint32_t)(0x11dcadf8u));
  /* 11dc19ea call ebp */
  call_ind((uint32_t)(EBP), 0x11dc19ecu);
  /* 11dc19ec mov ecx, dword ptr [0x11dcb054] */
  ECX = (r32((uint32_t)(0x11dcb054)));
  /* 11dc19f2 lea edx, [ecx*8 + 0x11dcae28] */
  EDX = ((uint32_t)(ECX*8 + 0x11dcae28));
  /* 11dc19f9 push edx */
  push32((uint32_t)(EDX));
  /* 11dc19fa push 0x11dcae00 */
  push32((uint32_t)(0x11dcae00u));
  /* 11dc19ff call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1a01u);
  /* 11dc1a01 mov eax, dword ptr [0x11dcaeb8] */
  EAX = (r32((uint32_t)(0x11dcaeb8)));
  /* 11dc1a06 mov dword ptr [0x11dcb054], 0x14 */
  w32((uint32_t)(0x11dcb054), (0x14u));
  /* 11dc1a10 push eax */
  push32((uint32_t)(EAX));
  /* 11dc1a11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1a13 call dword ptr [0x11dc7110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7110))), 0x11dc1a19u);
  /* 11dc1a19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1a1c:;
  /* 11dc1a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1a1e push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1a25 call dword ptr [0x11dc7140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7140))), 0x11dc1a2bu);
  /* 11dc1a2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1a2e mov ebp, 0x11dcae20 */
  EBP = (0x11dcae20u);
L_11dc1a33:;
  /* 11dc1a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1a35 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1a36 call 0x11dc21c0 */
  push32(0x11dc1a3bu); f_11dc21c0();
  /* 11dc1a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1a3e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1a40 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1a42 je 0x11dc1a83 */
  if (C.zf) goto L_11dc1a83;
  /* 11dc1a44 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1a45 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dc1a47 push 0x11dcafb0 */
  push32((uint32_t)(0x11dcafb0u));
  /* 11dc1a4c push 0x11dcaee0 */
  push32((uint32_t)(0x11dcaee0u));
  /* 11dc1a51 call 0x11dc2150 */
  push32(0x11dc1a56u); f_11dc2150();
  /* 11dc1a56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1a59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1a5b jne 0x11dc1a74 */
  if (!C.zf) goto L_11dc1a74;
  /* 11dc1a5d push 0x11dcaf90 */
  push32((uint32_t)(0x11dcaf90u));
  /* 11dc1a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1a64 push 0x11dcaee0 */
  push32((uint32_t)(0x11dcaee0u));
  /* 11dc1a69 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1a6b push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1a6c call 0x11dc2290 */
  push32(0x11dc1a71u); f_11dc2290();
  /* 11dc1a71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1a74:;
  /* 11dc1a74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1a76 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1a78 call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1a7eu);
  /* 11dc1a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1a81 jmp 0x11dc1aaa */
  goto L_11dc1aaa;
L_11dc1a83:;
  /* 11dc1a83 call dword ptr [0x11dc70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f0))), 0x11dc1a89u);
  /* 11dc1a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1a8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1a8e je 0x11dc1aaa */
  if (C.zf) goto L_11dc1aaa;
  /* 11dc1a90 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1a92 push 0x11dcaee0 */
  push32((uint32_t)(0x11dcaee0u));
  /* 11dc1a97 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1a98 call 0x11dc2230 */
  push32(0x11dc1a9du); f_11dc2230();
  /* 11dc1a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1a9f push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc1aa1 call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1aa7u);
  /* 11dc1aa7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1aaa:;
  /* 11dc1aaa add ebp, 8 */
  { uint32_t _a=(EBP),_b=(0x8u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1aad cmp ebp, 0x11dcae60 */
  { uint32_t _a=(EBP),_b=(0x11dcae60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1ab3 jl 0x11dc1a33 */
  if ((C.sf!=C.of)) goto L_11dc1a33;
  /* 11dc1ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1abb push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1ac0 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1ac2u);
  /* 11dc1ac2 mov ebp, dword ptr [0x11dc7120] */
  EBP = (r32((uint32_t)(0x11dc7120)));
  /* 11dc1ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1acb:;
  /* 11dc1acb push 0x11dcaf80 */
  push32((uint32_t)(0x11dcaf80u));
  /* 11dc1ad0 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc1ad6u);
  /* 11dc1ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1adb je 0x11dc1c32 */
  if (C.zf) goto L_11dc1c32;
  /* 11dc1ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1ae3 push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1aea call dword ptr [0x11dc7140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7140))), 0x11dc1af0u);
  /* 11dc1af0 push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1af5 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc1afbu);
  /* 11dc1afb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1afe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1b01 jne 0x11dc1b4a */
  if (!C.zf) goto L_11dc1b4a;
  /* 11dc1b03 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11dc1b07 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc1b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1b0a push 0x11dcafa8 */
  push32((uint32_t)(0x11dcafa8u));
  /* 11dc1b0f call dword ptr [0x11dc710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc710c))), 0x11dc1b15u);
  /* 11dc1b15 mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 11dc1b19 mov eax, dword ptr [0x11dcaf68] */
  EAX = (r32((uint32_t)(0x11dcaf68)));
  /* 11dc1b1e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dc1b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1b27 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1b29 jne 0x11dc1b4a */
  if (!C.zf) goto L_11dc1b4a;
  /* 11dc1b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1b2d call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc1b33u);
  /* 11dc1b33 mov eax, dword ptr [0x11dcaf38] */
  EAX = (r32((uint32_t)(0x11dcaf38)));
  /* 11dc1b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1b3b push eax */
  push32((uint32_t)(EAX));
  /* 11dc1b3c push 0x11dc8370 */
  push32((uint32_t)(0x11dc8370u));
  /* 11dc1b41 call dword ptr [0x11dc7144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7144))), 0x11dc1b47u);
  /* 11dc1b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1b4a:;
  /* 11dc1b4a cmp dword ptr [0x11dcaf38], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaf38))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1b54 jle 0x11dc1bdb */
  if ((C.zf||C.sf!=C.of)) goto L_11dc1bdb;
  /* 11dc1b5a push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1b5c call dword ptr [0x11dc7124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7124))), 0x11dc1b62u);
  /* 11dc1b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1b65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1b67 je 0x11dc1bdb */
  if (C.zf) goto L_11dc1bdb;
  /* 11dc1b69 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 11dc1b6e push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1b70 call dword ptr [0x11dc7110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7110))), 0x11dc1b76u);
  /* 11dc1b76 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dc1b7b push 0x11dcaf78 */
  push32((uint32_t)(0x11dcaf78u));
  /* 11dc1b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1b82 push 0x11dcaee8 */
  push32((uint32_t)(0x11dcaee8u));
  /* 11dc1b87 push 0x11dcae80 */
  push32((uint32_t)(0x11dcae80u));
  /* 11dc1b8c push 0x11dcaf70 */
  push32((uint32_t)(0x11dcaf70u));
  /* 11dc1b91 call dword ptr [0x11dc713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc713c))), 0x11dc1b97u);
  /* 11dc1b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1b99 push 0x11dcaf70 */
  push32((uint32_t)(0x11dcaf70u));
  /* 11dc1b9e call edi */
  call_ind((uint32_t)(EDI), 0x11dc1ba0u);
  /* 11dc1ba0 mov edi, dword ptr [0x11dc714c] */
  EDI = (r32((uint32_t)(0x11dc714c)));
  /* 11dc1ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1baa push 0x11dcaea8 */
  push32((uint32_t)(0x11dcaea8u));
  /* 11dc1baf push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1bb1 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1bb3u);
  /* 11dc1bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1bb7 push 0x11dcaea0 */
  push32((uint32_t)(0x11dcaea0u));
  /* 11dc1bbc push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1bbe call edi */
  call_ind((uint32_t)(EDI), 0x11dc1bc0u);
  /* 11dc1bc0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1bc7 push 0x11dcaeb0 */
  push32((uint32_t)(0x11dcaeb0u));
  /* 11dc1bcc push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1bce call edi */
  call_ind((uint32_t)(EDI), 0x11dc1bd0u);
  /* 11dc1bd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1bd2 call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc1bd8u);
  /* 11dc1bd8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1bdb:;
  /* 11dc1bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1bdd push 0x11dcaee8 */
  push32((uint32_t)(0x11dcaee8u));
  /* 11dc1be2 push 0x11dcaeb0 */
  push32((uint32_t)(0x11dcaeb0u));
  /* 11dc1be7 call dword ptr [0x11dc7150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7150))), 0x11dc1bedu);
  /* 11dc1bed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1bf2 je 0x11dc1c32 */
  if (C.zf) goto L_11dc1c32;
  /* 11dc1bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1bf8 push 0x11dcaee8 */
  push32((uint32_t)(0x11dcaee8u));
  /* 11dc1bfd push 0x11dcaeb0 */
  push32((uint32_t)(0x11dcaeb0u));
  /* 11dc1c02 call dword ptr [0x11dc7148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7148))), 0x11dc1c08u);
  /* 11dc1c08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1c0a call dword ptr [0x11dc7184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7184))), 0x11dc1c10u);
  /* 11dc1c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1c12 call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc1c18u);
  /* 11dc1c18 mov ecx, dword ptr [0x11dcaf38] */
  ECX = (r32((uint32_t)(0x11dcaf38)));
  /* 11dc1c1e mov eax, 0x3e8 */
  EAX = (0x3e8u);
  /* 11dc1c23 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c26 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1c28 jl 0x11dc1c32 */
  if ((C.sf!=C.of)) goto L_11dc1c32;
  /* 11dc1c2a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc1c2c mov dword ptr [0x11dcaf38], ecx */
  w32((uint32_t)(0x11dcaf38), (ECX));
L_11dc1c32:;
  /* 11dc1c32 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dc1c34 call dword ptr [0x11dc70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f0))), 0x11dc1c3au);
  /* 11dc1c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1c3f je 0x11dc1ce5 */
  if (C.zf) goto L_11dc1ce5;
  /* 11dc1c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1c47 push 0x11dcb048 */
  push32((uint32_t)(0x11dcb048u));
  /* 11dc1c4c call dword ptr [0x11dc7158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7158))), 0x11dc1c52u);
  /* 11dc1c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1c57 jne 0x11dc1c7b */
  if (!C.zf) goto L_11dc1c7b;
  /* 11dc1c59 mov edi, dword ptr [0x11dc712c] */
  EDI = (r32((uint32_t)(0x11dc712c)));
  /* 11dc1c5f push 0x11dcaf58 */
  push32((uint32_t)(0x11dcaf58u));
  /* 11dc1c64 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1c66u);
  /* 11dc1c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1c6b je 0x11dc1c7b */
  if (C.zf) goto L_11dc1c7b;
  /* 11dc1c6d push 0x11dcae90 */
  push32((uint32_t)(0x11dcae90u));
  /* 11dc1c72 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1c74u);
  /* 11dc1c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1c79 jne 0x11dc1ce5 */
  if (!C.zf) goto L_11dc1ce5;
L_11dc1c7b:;
  /* 11dc1c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1c7d push 5 */
  push32((uint32_t)(0x5u));
  /* 11dc1c7f call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1c85u);
  /* 11dc1c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c88 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11dc1c8a:;
  /* 11dc1c8a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dc1c8f push edi */
  push32((uint32_t)(EDI));
  /* 11dc1c90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1c92 call dword ptr [0x11dc70f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f4))), 0x11dc1c98u);
  /* 11dc1c98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1c9b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc1c9c cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1c9f jl 0x11dc1c8a */
  if ((C.sf!=C.of)) goto L_11dc1c8a;
  /* 11dc1ca1 mov edi, dword ptr [0x11dc7188] */
  EDI = (r32((uint32_t)(0x11dc7188)));
  /* 11dc1ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1ca9 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1cabu);
  /* 11dc1cab push eax */
  push32((uint32_t)(EAX));
  /* 11dc1cac push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1cae push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1cb2 push 0x11dc8368 */
  push32((uint32_t)(0x11dc8368u));
  /* 11dc1cb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1cb9 call dword ptr [0x11dc715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc715c))), 0x11dc1cbfu);
  /* 11dc1cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1cc1 push 0x11dcaf28 */
  push32((uint32_t)(0x11dcaf28u));
  /* 11dc1cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1cc8 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1ccau);
  /* 11dc1cca push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1ccc push 0x11dcaf10 */
  push32((uint32_t)(0x11dcaf10u));
  /* 11dc1cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1cd3 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1cd5u);
  /* 11dc1cd5 push 0x11dc835c */
  push32((uint32_t)(0x11dc835cu));
  /* 11dc1cda call dword ptr [0x11dc711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc711c))), 0x11dc1ce0u);
  /* 11dc1ce0 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1ce3 jmp 0x11dc1ceb */
  goto L_11dc1ceb;
L_11dc1ce5:;
  /* 11dc1ce5 mov edi, dword ptr [0x11dc7188] */
  EDI = (r32((uint32_t)(0x11dc7188)));
L_11dc1ceb:;
  /* 11dc1ceb push 6 */
  push32((uint32_t)(0x6u));
  /* 11dc1ced call dword ptr [0x11dc70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f0))), 0x11dc1cf3u);
  /* 11dc1cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1cf6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1cf8 je 0x11dc1da2 */
  if (C.zf) goto L_11dc1da2;
  /* 11dc1cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1d00 push 0x11dcb040 */
  push32((uint32_t)(0x11dcb040u));
  /* 11dc1d05 call dword ptr [0x11dc7158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7158))), 0x11dc1d0bu);
  /* 11dc1d0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1d10 jne 0x11dc1d36 */
  if (!C.zf) goto L_11dc1d36;
  /* 11dc1d12 push 0x11dcaf50 */
  push32((uint32_t)(0x11dcaf50u));
  /* 11dc1d17 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc1d1du);
  /* 11dc1d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1d22 je 0x11dc1d36 */
  if (C.zf) goto L_11dc1d36;
  /* 11dc1d24 push 0x11dcae88 */
  push32((uint32_t)(0x11dcae88u));
  /* 11dc1d29 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc1d2fu);
  /* 11dc1d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1d34 jne 0x11dc1da2 */
  if (!C.zf) goto L_11dc1da2;
L_11dc1d36:;
  /* 11dc1d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1d38 push 6 */
  push32((uint32_t)(0x6u));
  /* 11dc1d3a call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1d40u);
  /* 11dc1d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1d43 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11dc1d45:;
  /* 11dc1d45 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dc1d4a push edi */
  push32((uint32_t)(EDI));
  /* 11dc1d4b push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1d4d call dword ptr [0x11dc70f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f4))), 0x11dc1d53u);
  /* 11dc1d53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1d56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc1d57 cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1d5a jl 0x11dc1d45 */
  if ((C.sf!=C.of)) goto L_11dc1d45;
  /* 11dc1d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1d5e call dword ptr [0x11dc7188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7188))), 0x11dc1d64u);
  /* 11dc1d64 push eax */
  push32((uint32_t)(EAX));
  /* 11dc1d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1d6b push 0x11dc8350 */
  push32((uint32_t)(0x11dc8350u));
  /* 11dc1d70 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1d72 call dword ptr [0x11dc715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc715c))), 0x11dc1d78u);
  /* 11dc1d78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1d7a push 0x11dcaf28 */
  push32((uint32_t)(0x11dcaf28u));
  /* 11dc1d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1d81 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1d83u);
  /* 11dc1d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1d85 push 0x11dcaf10 */
  push32((uint32_t)(0x11dcaf10u));
  /* 11dc1d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1d8c call esi */
  call_ind((uint32_t)(ESI), 0x11dc1d8eu);
  /* 11dc1d8e push 0x11dc8344 */
  push32((uint32_t)(0x11dc8344u));
  /* 11dc1d93 call dword ptr [0x11dc711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc711c))), 0x11dc1d99u);
  /* 11dc1d99 mov edi, dword ptr [0x11dc7188] */
  EDI = (r32((uint32_t)(0x11dc7188)));
  /* 11dc1d9f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc1da2:;
  /* 11dc1da2 push 7 */
  push32((uint32_t)(0x7u));
  /* 11dc1da4 call dword ptr [0x11dc70f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f0))), 0x11dc1daau);
  /* 11dc1daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1dad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1daf je 0x11dc1f12 */
  if (C.zf) goto L_11dc1f12;
  /* 11dc1db5 cmp dword ptr [0x11dcaf38], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaf38))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1dbf jge 0x11dc1f12 */
  if ((C.sf==C.of)) goto L_11dc1f12;
  /* 11dc1dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1dc7 push 7 */
  push32((uint32_t)(0x7u));
  /* 11dc1dc9 call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1dcfu);
  /* 11dc1dcf push 0x11dc8338 */
  push32((uint32_t)(0x11dc8338u));
  /* 11dc1dd4 call dword ptr [0x11dc711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc711c))), 0x11dc1ddau);
  /* 11dc1dda push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1ddc push 0x11dcae60 */
  push32((uint32_t)(0x11dcae60u));
  /* 11dc1de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1de3 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1de5u);
  /* 11dc1de5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1de7 push 0x11dcae08 */
  push32((uint32_t)(0x11dcae08u));
  /* 11dc1dec push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1dee call esi */
  call_ind((uint32_t)(ESI), 0x11dc1df0u);
  /* 11dc1df0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1df2 push 0x11dcaf30 */
  push32((uint32_t)(0x11dcaf30u));
  /* 11dc1df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1df9 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1dfbu);
  /* 11dc1dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1dfd push 0x11dcb030 */
  push32((uint32_t)(0x11dcb030u));
  /* 11dc1e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1e04 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1e06u);
  /* 11dc1e06 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11dc1e08 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1e0au);
  /* 11dc1e0a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1e0d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11dc1e0f call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1e11u);
  /* 11dc1e11 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11dc1e13 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1e15u);
  /* 11dc1e15 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11dc1e17 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1e19u);
  /* 11dc1e19 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11dc1e1b call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1e1du);
  /* 11dc1e1d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11dc1e1f call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1e21u);
  /* 11dc1e21 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11dc1e23 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1e25u);
  /* 11dc1e25 mov ebx, dword ptr [0x11dc7154] */
  EBX = (r32((uint32_t)(0x11dc7154)));
  /* 11dc1e2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1e2e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11dc1e30:;
  /* 11dc1e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1e32 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1e34u);
  /* 11dc1e34 mov ecx, 4 */
  ECX = (0x4u);
  /* 11dc1e39 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc1e3b lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11dc1e3e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11dc1e41 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11dc1e44 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11dc1e47 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc1e48 push esi */
  push32((uint32_t)(ESI));
  /* 11dc1e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1e4b call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1e4du);
  /* 11dc1e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1e50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc1e51 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1e54 jl 0x11dc1e30 */
  if ((C.sf!=C.of)) goto L_11dc1e30;
  /* 11dc1e56 mov ebp, dword ptr [0x11dc70f0] */
  EBP = (r32((uint32_t)(0x11dc70f0)));
  /* 11dc1e5c push 5 */
  push32((uint32_t)(0x5u));
  /* 11dc1e5e call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1e60u);
  /* 11dc1e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1e63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1e65 je 0x11dc1eb7 */
  if (C.zf) goto L_11dc1eb7;
  /* 11dc1e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1e69 push 5 */
  push32((uint32_t)(0x5u));
  /* 11dc1e6b call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1e71u);
  /* 11dc1e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1e74 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11dc1e76:;
  /* 11dc1e76 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dc1e7b push esi */
  push32((uint32_t)(ESI));
  /* 11dc1e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1e7e call dword ptr [0x11dc70f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f4))), 0x11dc1e84u);
  /* 11dc1e84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1e87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc1e88 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1e8b jl 0x11dc1e76 */
  if ((C.sf!=C.of)) goto L_11dc1e76;
  /* 11dc1e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1e8f call edi */
  call_ind((uint32_t)(EDI), 0x11dc1e91u);
  /* 11dc1e91 push eax */
  push32((uint32_t)(EAX));
  /* 11dc1e92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1e98 push 0x11dc8368 */
  push32((uint32_t)(0x11dc8368u));
  /* 11dc1e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1e9f call dword ptr [0x11dc715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc715c))), 0x11dc1ea5u);
  /* 11dc1ea5 mov ebx, dword ptr [0x11dc711c] */
  EBX = (r32((uint32_t)(0x11dc711c)));
  /* 11dc1eab push 0x11dc835c */
  push32((uint32_t)(0x11dc835cu));
  /* 11dc1eb0 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1eb2u);
  /* 11dc1eb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1eb5 jmp 0x11dc1ebd */
  goto L_11dc1ebd;
L_11dc1eb7:;
  /* 11dc1eb7 mov ebx, dword ptr [0x11dc711c] */
  EBX = (r32((uint32_t)(0x11dc711c)));
L_11dc1ebd:;
  /* 11dc1ebd push 6 */
  push32((uint32_t)(0x6u));
  /* 11dc1ebf call ebp */
  call_ind((uint32_t)(EBP), 0x11dc1ec1u);
  /* 11dc1ec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1ec4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1ec6 je 0x11dc1f18 */
  if (C.zf) goto L_11dc1f18;
  /* 11dc1ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1eca push 6 */
  push32((uint32_t)(0x6u));
  /* 11dc1ecc call dword ptr [0x11dc70fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70fc))), 0x11dc1ed2u);
  /* 11dc1ed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1ed5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11dc1ed7:;
  /* 11dc1ed7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11dc1edc push esi */
  push32((uint32_t)(ESI));
  /* 11dc1edd push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1edf call dword ptr [0x11dc70f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70f4))), 0x11dc1ee5u);
  /* 11dc1ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1ee8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc1ee9 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1eec jl 0x11dc1ed7 */
  if ((C.sf!=C.of)) goto L_11dc1ed7;
  /* 11dc1eee push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1ef0 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1ef2u);
  /* 11dc1ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11dc1ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1ef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc1ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1ef9 push 0x11dc8350 */
  push32((uint32_t)(0x11dc8350u));
  /* 11dc1efe push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1f00 call dword ptr [0x11dc715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc715c))), 0x11dc1f06u);
  /* 11dc1f06 push 0x11dc8344 */
  push32((uint32_t)(0x11dc8344u));
  /* 11dc1f0b call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1f0du);
  /* 11dc1f0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f10 jmp 0x11dc1f18 */
  goto L_11dc1f18;
L_11dc1f12:;
  /* 11dc1f12 mov ebx, dword ptr [0x11dc711c] */
  EBX = (r32((uint32_t)(0x11dc711c)));
L_11dc1f18:;
  /* 11dc1f18 mov esi, dword ptr [0x11dc7164] */
  ESI = (r32((uint32_t)(0x11dc7164)));
  /* 11dc1f1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc1f20 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1f22u);
  /* 11dc1f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1f27 je 0x11dc1f44 */
  if (C.zf) goto L_11dc1f44;
  /* 11dc1f29 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc1f2b call esi */
  call_ind((uint32_t)(ESI), 0x11dc1f2du);
  /* 11dc1f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1f32 je 0x11dc1f44 */
  if (C.zf) goto L_11dc1f44;
  /* 11dc1f34 push 0x11dc832c */
  push32((uint32_t)(0x11dc832cu));
  /* 11dc1f39 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1f3bu);
  /* 11dc1f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f3e call dword ptr [0x11dc7168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7168))), 0x11dc1f44u);
L_11dc1f44:;
  /* 11dc1f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1f46 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1f48u);
  /* 11dc1f48 mov esi, dword ptr [0x11dc7160] */
  ESI = (r32((uint32_t)(0x11dc7160)));
  /* 11dc1f4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc1f53 je 0x11dc1f61 */
  if (C.zf) goto L_11dc1f61;
  /* 11dc1f55 push 0x11dc8320 */
  push32((uint32_t)(0x11dc8320u));
  /* 11dc1f5a call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1f5cu);
  /* 11dc1f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f5f call esi */
  call_ind((uint32_t)(ESI), 0x11dc1f61u);
L_11dc1f61:;
  /* 11dc1f61 push 0x11dcaf80 */
  push32((uint32_t)(0x11dcaf80u));
  /* 11dc1f66 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc1f6cu);
  /* 11dc1f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1f71 jne 0x11dc1f8b */
  if (!C.zf) goto L_11dc1f8b;
  /* 11dc1f73 cmp dword ptr [0x11dcaf38], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaf38))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc1f7d jl 0x11dc1f8b */
  if ((C.sf!=C.of)) goto L_11dc1f8b;
  /* 11dc1f7f push 0x11dc8314 */
  push32((uint32_t)(0x11dc8314u));
  /* 11dc1f84 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1f86u);
  /* 11dc1f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f89 call esi */
  call_ind((uint32_t)(ESI), 0x11dc1f8bu);
L_11dc1f8b:;
  /* 11dc1f8b pop edi */
  EDI = (pop32());
  /* 11dc1f8c pop esi */
  ESI = (pop32());
  /* 11dc1f8d pop ebp */
  EBP = (pop32());
  /* 11dc1f8e pop ebx */
  EBX = (pop32());
  /* 11dc1f8f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1f92 ret  */
  ESPCHK(0x11dc1660u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fb0 @ 0x11dc1fb0 (59 bytes, 29 insns) */
void f_11dc1fb0(void) {
  FTRACE(0x11dc1fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc1fb0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc1fb1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc1fb5 push edi */
  push32((uint32_t)(EDI));
  /* 11dc1fb6 mov edi, dword ptr [0x11dc712c] */
  EDI = (r32((uint32_t)(0x11dc712c)));
  /* 11dc1fbc push esi */
  push32((uint32_t)(ESI));
  /* 11dc1fbd call edi */
  call_ind((uint32_t)(EDI), 0x11dc1fbfu);
  /* 11dc1fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1fc4 je 0x11dc1fdd */
  if (C.zf) goto L_11dc1fdd;
  /* 11dc1fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc1fc7 mov ebx, dword ptr [0x11dc70ec] */
  EBX = (r32((uint32_t)(0x11dc70ec)));
L_11dc1fcd:;
  /* 11dc1fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc1fcf push esi */
  push32((uint32_t)(ESI));
  /* 11dc1fd0 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc1fd2u);
  /* 11dc1fd2 push esi */
  push32((uint32_t)(ESI));
  /* 11dc1fd3 call edi */
  call_ind((uint32_t)(EDI), 0x11dc1fd5u);
  /* 11dc1fd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc1fda jne 0x11dc1fcd */
  if (!C.zf) goto L_11dc1fcd;
  /* 11dc1fdc pop ebx */
  EBX = (pop32());
L_11dc1fdd:;
  /* 11dc1fdd push esi */
  push32((uint32_t)(ESI));
  /* 11dc1fde call edi */
  call_ind((uint32_t)(EDI), 0x11dc1fe0u);
  /* 11dc1fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc1fe3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc1fe5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc1fe7 pop edi */
  EDI = (pop32());
  /* 11dc1fe8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc1fe9 pop esi */
  ESI = (pop32());
  /* 11dc1fea ret  */
  ESPCHK(0x11dc1fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff0 @ 0x11dc1ff0 (341 bytes, 116 insns) */
void f_11dc1ff0(void) {
  FTRACE(0x11dc1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc1ff0 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc1ff3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc1ff4 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc1ff5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc1ff7 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11dc1ff9 push esi */
  push32((uint32_t)(ESI));
  /* 11dc1ffa mov esi, dword ptr [esp + 0x50] */
  ESI = (r32((uint32_t)(ESP + 0x50)));
  /* 11dc1ffe push edi */
  push32((uint32_t)(EDI));
  /* 11dc1fff mov dword ptr [esp + 0x18], 0xffff */
  w32((uint32_t)(ESP + 0x18), (0xffffu));
  /* 11dc2007 mov byte ptr [esp + 0x13], bl */
  w8((uint32_t)(ESP + 0x13), (BL));
  /* 11dc200b mov dword ptr [esp + 0x14], ebp */
  w32((uint32_t)(ESP + 0x14), (EBP));
L_11dc200f:;
  /* 11dc200f cmp byte ptr [ebp + 0x11dc8030], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x11dc8030))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2016 jne 0x11dc210d */
  if (!C.zf) goto L_11dc210d;
  /* 11dc201c push ebp */
  push32((uint32_t)(EBP));
  /* 11dc201d call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc2023u);
  /* 11dc2023 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 11dc2027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc202a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc202c jle 0x11dc204f */
  if ((C.zf||C.sf!=C.of)) goto L_11dc204f;
  /* 11dc202e mov edi, dword ptr [esp + 0x58] */
  EDI = (r32((uint32_t)(ESP + 0x58)));
  /* 11dc2032 mov ebp, eax */
  EBP = (EAX);
L_11dc2034:;
  /* 11dc2034 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11dc2038 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc203a push eax */
  push32((uint32_t)(EAX));
  /* 11dc203b push edi */
  push32((uint32_t)(EDI));
  /* 11dc203c call dword ptr [0x11dc70d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d0))), 0x11dc2042u);
  /* 11dc2042 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2045 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2048 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 11dc2049 jne 0x11dc2034 */
  if (!C.zf) goto L_11dc2034;
  /* 11dc204b mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
L_11dc204f:;
  /* 11dc204f push esi */
  push32((uint32_t)(ESI));
  /* 11dc2050 call 0x11dc1fb0 */
  push32(0x11dc2055u); f_11dc1fb0();
  /* 11dc2055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2057 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2058 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2059 call dword ptr [0x11dc7140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7140))), 0x11dc205fu);
  /* 11dc205f push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2060 call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc2066u);
  /* 11dc2066 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2067 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc206du);
  /* 11dc206d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2072 je 0x11dc208a */
  if (C.zf) goto L_11dc208a;
  /* 11dc2074 mov ecx, dword ptr [esp + 0x60] */
  ECX = (r32((uint32_t)(ESP + 0x60)));
  /* 11dc2078 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11dc207a push esi */
  push32((uint32_t)(ESI));
  /* 11dc207b lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 11dc207f push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2080 push edx */
  push32((uint32_t)(EDX));
  /* 11dc2081 call dword ptr [0x11dc70e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70e0))), 0x11dc2087u);
  /* 11dc2087 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc208a:;
  /* 11dc208a push esi */
  push32((uint32_t)(ESI));
  /* 11dc208b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc208d call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc2093u);
  /* 11dc2093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2098 jle 0x11dc210d */
  if ((C.zf||C.sf!=C.of)) goto L_11dc210d;
L_11dc209a:;
  /* 11dc209a lea eax, [esp + 0x24] */
  EAX = ((uint32_t)(ESP + 0x24));
  /* 11dc209e push eax */
  push32((uint32_t)(EAX));
  /* 11dc209f push edi */
  push32((uint32_t)(EDI));
  /* 11dc20a0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc20a1 call dword ptr [0x11dc710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc710c))), 0x11dc20a7u);
  /* 11dc20a7 mov cx, word ptr [esp + 0x44] */
  CX = (r16((uint32_t)(ESP + 0x44)));
  /* 11dc20ac mov dx, word ptr [esp + 0x48] */
  DX = (r16((uint32_t)(ESP + 0x48)));
  /* 11dc20b1 mov ebp, dword ptr [0x11dc70e4] */
  EBP = (r32((uint32_t)(0x11dc70e4)));
  /* 11dc20b7 mov word ptr [esp + 0x28], cx */
  w16((uint32_t)(ESP + 0x28), (CX));
  /* 11dc20bc mov ecx, dword ptr [esp + 0x6c] */
  ECX = (r32((uint32_t)(ESP + 0x6c)));
  /* 11dc20c0 lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 11dc20c4 push eax */
  push32((uint32_t)(EAX));
  /* 11dc20c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc20c6 mov word ptr [esp + 0x32], dx */
  w16((uint32_t)(ESP + 0x32), (DX));
  /* 11dc20cb call ebp */
  call_ind((uint32_t)(EBP), 0x11dc20cdu);
  /* 11dc20cd mov ecx, dword ptr [esp + 0x2c] */
  ECX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11dc20d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc20d4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc20d6 jge 0x11dc20fa */
  if ((C.sf==C.of)) goto L_11dc20fa;
  /* 11dc20d8 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 11dc20dc lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 11dc20e0 push edx */
  push32((uint32_t)(EDX));
  /* 11dc20e1 push eax */
  push32((uint32_t)(EAX));
  /* 11dc20e2 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc20e4u);
  /* 11dc20e4 mov ebx, dword ptr [esp + 0x2c] */
  EBX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11dc20e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc20eb mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11dc20ef and ebx, 0xffff */
  { uint32_t _r=(EBX)&(0xffffu); EBX = (_r); fl_logic(_r,32); }
  /* 11dc20f5 mov byte ptr [esp + 0x13], 1 */
  w8((uint32_t)(ESP + 0x13), (0x1u));
L_11dc20fa:;
  /* 11dc20fa push esi */
  push32((uint32_t)(ESI));
  /* 11dc20fb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc20fc call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc2102u);
  /* 11dc2102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2105 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2107 jl 0x11dc209a */
  if ((C.sf!=C.of)) goto L_11dc209a;
  /* 11dc2109 mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
L_11dc210d:;
  /* 11dc210d inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11dc210e cmp ebp, 8 */
  { uint32_t _a=(EBP),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2111 mov dword ptr [esp + 0x14], ebp */
  w32((uint32_t)(ESP + 0x14), (EBP));
  /* 11dc2115 jl 0x11dc200f */
  if ((C.sf!=C.of)) goto L_11dc200f;
  /* 11dc211b push esi */
  push32((uint32_t)(ESI));
  /* 11dc211c call 0x11dc1fb0 */
  push32(0x11dc2121u); f_11dc1fb0();
  /* 11dc2121 mov al, byte ptr [esp + 0x17] */
  AL = (r8((uint32_t)(ESP + 0x17)));
  /* 11dc2125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2128 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc212a je 0x11dc213d */
  if (C.zf) goto L_11dc213d;
  /* 11dc212c push ebx */
  push32((uint32_t)(EBX));
  /* 11dc212d push esi */
  push32((uint32_t)(ESI));
  /* 11dc212e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2130 call dword ptr [0x11dc70dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70dc))), 0x11dc2136u);
  /* 11dc2136 mov al, byte ptr [esp + 0x1f] */
  AL = (r8((uint32_t)(ESP + 0x1f)));
  /* 11dc213a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc213d:;
  /* 11dc213d pop edi */
  EDI = (pop32());
  /* 11dc213e pop esi */
  ESI = (pop32());
  /* 11dc213f pop ebp */
  EBP = (pop32());
  /* 11dc2140 pop ebx */
  EBX = (pop32());
  /* 11dc2141 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2144 ret  */
  ESPCHK(0x11dc1ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002150 @ 0x11dc2150 (109 bytes, 44 insns) */
void f_11dc2150(void) {
  FTRACE(0x11dc2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2150 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2153 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2154 mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11dc2158 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2159 push esi */
  push32((uint32_t)(ESI));
  /* 11dc215a call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc2160u);
  /* 11dc2160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2165 je 0x11dc21b5 */
  if (C.zf) goto L_11dc21b5;
  /* 11dc2167 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11dc2169 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11dc216d push esi */
  push32((uint32_t)(ESI));
  /* 11dc216e push eax */
  push32((uint32_t)(EAX));
  /* 11dc216f call dword ptr [0x11dc70d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d4))), 0x11dc2175u);
  /* 11dc2175 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11dc2179 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11dc217d mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11dc2181 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11dc2185 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2186 push edx */
  push32((uint32_t)(EDX));
  /* 11dc2187 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2188 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2189 call 0x11dc1ff0 */
  push32(0x11dc218eu); f_11dc1ff0();
  /* 11dc218e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2191 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc2193 je 0x11dc21b5 */
  if (C.zf) goto L_11dc21b5;
  /* 11dc2195 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2197 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2198 call dword ptr [0x11dc718c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc718c))), 0x11dc219eu);
  /* 11dc219e mov ecx, dword ptr [esp + 0x2c] */
  ECX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11dc21a2 push edi */
  push32((uint32_t)(EDI));
  /* 11dc21a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc21a4 call dword ptr [0x11dc70d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d8))), 0x11dc21aau);
  /* 11dc21aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc21ad mov al, 1 */
  AL = (0x1u);
  /* 11dc21af pop edi */
  EDI = (pop32());
  /* 11dc21b0 pop esi */
  ESI = (pop32());
  /* 11dc21b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc21b4 ret  */
  ESPCHK(0x11dc2150u, _esp0);
  ESP += 4; return;
L_11dc21b5:;
  /* 11dc21b5 pop edi */
  EDI = (pop32());
  /* 11dc21b6 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc21b8 pop esi */
  ESI = (pop32());
  /* 11dc21b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc21bc ret  */
  ESPCHK(0x11dc2150u, _esp0);
  ESP += 4; return;
}

/* FUN_100021c0 @ 0x11dc21c0 (104 bytes, 42 insns) */
void f_11dc21c0(void) {
  FTRACE(0x11dc21c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc21c0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc21c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc21c4 push esi */
  push32((uint32_t)(ESI));
  /* 11dc21c5 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11dc21c9 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11dc21cb push esi */
  push32((uint32_t)(ESI));
  /* 11dc21cc call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc21d2u);
  /* 11dc21d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc21d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc21d7 je 0x11dc221b */
  if (C.zf) goto L_11dc221b;
  /* 11dc21d9 push edi */
  push32((uint32_t)(EDI));
  /* 11dc21da push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11dc21df lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11dc21e3 push esi */
  push32((uint32_t)(ESI));
  /* 11dc21e4 push eax */
  push32((uint32_t)(EAX));
  /* 11dc21e5 call dword ptr [0x11dc70d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d4))), 0x11dc21ebu);
  /* 11dc21eb mov edi, dword ptr [0x11dc7158] */
  EDI = (r32((uint32_t)(0x11dc7158)));
  /* 11dc21f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc21f4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11dc21f6:;
  /* 11dc21f6 cmp byte ptr [esi + 0x11dc8030], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x11dc8030))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc21fd jne 0x11dc2214 */
  if (!C.zf) goto L_11dc2214;
  /* 11dc21ff test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11dc2201 jne 0x11dc2212 */
  if (!C.zf) goto L_11dc2212;
  /* 11dc2203 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 11dc2207 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2208 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2209 call edi */
  call_ind((uint32_t)(EDI), 0x11dc220bu);
  /* 11dc220b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc220e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2210 je 0x11dc2214 */
  if (C.zf) goto L_11dc2214;
L_11dc2212:;
  /* 11dc2212 mov bl, 1 */
  BL = (0x1u);
L_11dc2214:;
  /* 11dc2214 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc2215 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2218 jl 0x11dc21f6 */
  if ((C.sf!=C.of)) goto L_11dc21f6;
  /* 11dc221a pop edi */
  EDI = (pop32());
L_11dc221b:;
  /* 11dc221b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc221d pop esi */
  ESI = (pop32());
  /* 11dc221e test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11dc2220 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11dc2223 pop ebx */
  EBX = (pop32());
  /* 11dc2224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2227 ret  */
  ESPCHK(0x11dc21c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002230 @ 0x11dc2230 (94 bytes, 36 insns) */
void f_11dc2230(void) {
  FTRACE(0x11dc2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2230 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2233 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2234 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc2238 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2239 mov edi, dword ptr [0x11dc712c] */
  EDI = (r32((uint32_t)(0x11dc712c)));
  /* 11dc223f push esi */
  push32((uint32_t)(ESI));
  /* 11dc2240 call edi */
  call_ind((uint32_t)(EDI), 0x11dc2242u);
  /* 11dc2242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2247 je 0x11dc2288 */
  if (C.zf) goto L_11dc2288;
  /* 11dc2249 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11dc224d push eax */
  push32((uint32_t)(EAX));
  /* 11dc224e call edi */
  call_ind((uint32_t)(EDI), 0x11dc2250u);
  /* 11dc2250 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2255 je 0x11dc2288 */
  if (C.zf) goto L_11dc2288;
  /* 11dc2257 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11dc225c lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 11dc2260 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2261 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2262 call dword ptr [0x11dc70d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d4))), 0x11dc2268u);
  /* 11dc2268 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc226a push esi */
  push32((uint32_t)(ESI));
  /* 11dc226b call dword ptr [0x11dc718c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc718c))), 0x11dc2271u);
  /* 11dc2271 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 11dc2275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2277 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 11dc227b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc227d push edx */
  push32((uint32_t)(EDX));
  /* 11dc227e push eax */
  push32((uint32_t)(EAX));
  /* 11dc227f call dword ptr [0x11dc70cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70cc))), 0x11dc2285u);
  /* 11dc2285 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc2288:;
  /* 11dc2288 pop edi */
  EDI = (pop32());
  /* 11dc2289 pop esi */
  ESI = (pop32());
  /* 11dc228a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc228d ret  */
  ESPCHK(0x11dc2230u, _esp0);
  ESP += 4; return;
}

/* FUN_10002290 @ 0x11dc2290 (317 bytes, 118 insns) */
void f_11dc2290(void) {
  FTRACE(0x11dc2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2290 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2291 mov ebp, esp */
  EBP = (ESP);
  /* 11dc2293 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc2299 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc229a mov ebx, dword ptr [0x11dc712c] */
  EBX = (r32((uint32_t)(0x11dc712c)));
  /* 11dc22a0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc22a1 push edi */
  push32((uint32_t)(EDI));
  /* 11dc22a2 push eax */
  push32((uint32_t)(EAX));
  /* 11dc22a3 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc22a5u);
  /* 11dc22a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc22a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc22aa je 0x11dc23c6 */
  if (C.zf) goto L_11dc23c6;
  /* 11dc22b0 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc22b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dc22b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc22b8 push edi */
  push32((uint32_t)(EDI));
  /* 11dc22b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc22ba call dword ptr [0x11dc70d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d0))), 0x11dc22c0u);
  /* 11dc22c0 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc22c3 push esi */
  push32((uint32_t)(ESI));
  /* 11dc22c4 call 0x11dc1fb0 */
  push32(0x11dc22c9u); f_11dc1fb0();
  /* 11dc22c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc22cb push esi */
  push32((uint32_t)(ESI));
  /* 11dc22cc push edi */
  push32((uint32_t)(EDI));
  /* 11dc22cd call dword ptr [0x11dc7140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7140))), 0x11dc22d3u);
  /* 11dc22d3 push edi */
  push32((uint32_t)(EDI));
  /* 11dc22d4 call dword ptr [0x11dc7194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7194))), 0x11dc22dau);
  /* 11dc22da push esi */
  push32((uint32_t)(ESI));
  /* 11dc22db call ebx */
  call_ind((uint32_t)(EBX), 0x11dc22ddu);
  /* 11dc22dd add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc22e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc22e2 je 0x11dc23c6 */
  if (C.zf) goto L_11dc23c6;
  /* 11dc22e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc22eb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11dc22ed lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11dc22f0 mov edi, 0xffff */
  EDI = (0xffffu);
  /* 11dc22f5 push edx */
  push32((uint32_t)(EDX));
  /* 11dc22f6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc22f7 mov dword ptr [ebp + 0x18], edi */
  w32((uint32_t)(EBP + 0x18), (EDI));
  /* 11dc22fa call dword ptr [0x11dc70d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d4))), 0x11dc2300u);
  /* 11dc2300 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2301 mov dword ptr [ebp + 0x14], 0 */
  w32((uint32_t)(EBP + 0x14), (0x0u));
  /* 11dc2308 call ebx */
  call_ind((uint32_t)(EBX), 0x11dc230au);
  /* 11dc230a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc230d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc230f jle 0x11dc238e */
  if ((C.zf||C.sf!=C.of)) goto L_11dc238e;
L_11dc2311:;
  /* 11dc2311 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc2314 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11dc2317 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2318 push edx */
  push32((uint32_t)(EDX));
  /* 11dc2319 push esi */
  push32((uint32_t)(ESI));
  /* 11dc231a call dword ptr [0x11dc710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc710c))), 0x11dc2320u);
  /* 11dc2320 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dc2323 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dc2326 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11dc2329 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc232e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2330 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dc2333 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dc2339 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc233c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc233e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dc2341 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11dc2344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc2347 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc234a jge 0x11dc234e */
  if ((C.sf==C.of)) goto L_11dc234e;
  /* 11dc234c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11dc234e:;
  /* 11dc234e mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc2351 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2354 jge 0x11dc2358 */
  if ((C.sf==C.of)) goto L_11dc2358;
  /* 11dc2356 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11dc2358:;
  /* 11dc2358 mov ecx, eax */
  ECX = (EAX);
  /* 11dc235a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc235c ja 0x11dc2360 */
  if ((!C.cf&&!C.zf)) goto L_11dc2360;
  /* 11dc235e mov ecx, ebx */
  ECX = (EBX);
L_11dc2360:;
  /* 11dc2360 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2362 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2364 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11dc2366 mov eax, ecx */
  EAX = (ECX);
  /* 11dc2368 cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc236b jge 0x11dc2379 */
  if ((C.sf==C.of)) goto L_11dc2379;
  /* 11dc236d mov edi, dword ptr [ebp - 0x38] */
  EDI = (r32((uint32_t)(EBP + -0x38)));
  /* 11dc2370 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
  /* 11dc2373 and edi, 0xffff */
  { uint32_t _r=(EDI)&(0xffffu); EDI = (_r); fl_logic(_r,32); }
L_11dc2379:;
  /* 11dc2379 mov ebx, dword ptr [ebp + 0x14] */
  EBX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc237c push esi */
  push32((uint32_t)(ESI));
  /* 11dc237d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc237e mov dword ptr [ebp + 0x14], ebx */
  w32((uint32_t)(EBP + 0x14), (EBX));
  /* 11dc2381 call dword ptr [0x11dc712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc712c))), 0x11dc2387u);
  /* 11dc2387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc238a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc238c jl 0x11dc2311 */
  if ((C.sf!=C.of)) goto L_11dc2311;
L_11dc238e:;
  /* 11dc238e push esi */
  push32((uint32_t)(ESI));
  /* 11dc238f call 0x11dc1fb0 */
  push32(0x11dc2394u); f_11dc1fb0();
  /* 11dc2394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2397 cmp edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc239d jge 0x11dc23ac */
  if ((C.sf==C.of)) goto L_11dc23ac;
  /* 11dc239f push edi */
  push32((uint32_t)(EDI));
  /* 11dc23a0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc23a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc23a3 call dword ptr [0x11dc70dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70dc))), 0x11dc23a9u);
  /* 11dc23a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc23ac:;
  /* 11dc23ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc23af push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc23b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc23b2 call dword ptr [0x11dc718c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc718c))), 0x11dc23b8u);
  /* 11dc23b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc23bb push esi */
  push32((uint32_t)(ESI));
  /* 11dc23bc push edx */
  push32((uint32_t)(EDX));
  /* 11dc23bd call dword ptr [0x11dc70d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70d8))), 0x11dc23c3u);
  /* 11dc23c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc23c6:;
  /* 11dc23c6 pop edi */
  EDI = (pop32());
  /* 11dc23c7 pop esi */
  ESI = (pop32());
  /* 11dc23c8 pop ebx */
  EBX = (pop32());
  /* 11dc23c9 mov esp, ebp */
  ESP = (EBP);
  /* 11dc23cb pop ebp */
  EBP = (pop32());
  /* 11dc23cc ret  */
  ESPCHK(0x11dc2290u, _esp0);
  ESP += 4; return;
}

/* FUN_100023d0 @ 0x11dc23d0 (217 bytes, 57 insns) */
void f_11dc23d0(void) {
  FTRACE(0x11dc23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc23d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc23d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc23d7 jne 0x11dc2465 */
  if (!C.zf) goto L_11dc2465;
  /* 11dc23dd call dword ptr [0x11dc70a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70a0))), 0x11dc23e3u);
  /* 11dc23e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc23e5 mov dword ptr [0x11dcb070], eax */
  w32((uint32_t)(0x11dcb070), (EAX));
  /* 11dc23ea call 0x11dc2fe0 */
  push32(0x11dc23efu); f_11dc2fe0();
  /* 11dc23ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc23f1 pop ecx */
  ECX = (pop32());
  /* 11dc23f2 je 0x11dc2430 */
  if (C.zf) goto L_11dc2430;
  /* 11dc23f4 mov eax, dword ptr [0x11dcb070] */
  EAX = (r32((uint32_t)(0x11dcb070)));
  /* 11dc23f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc23fb mov cl, byte ptr [0x11dcb071] */
  CL = (r8((uint32_t)(0x11dcb071)));
  /* 11dc2401 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc2406 shr dword ptr [0x11dcb070], 0x10 */
  w32((uint32_t)(0x11dcb070), (sh_shr((uint32_t)(r32((uint32_t)(0x11dcb070))), (0x10u)&0x1f, 32)));
  /* 11dc240d mov dword ptr [0x11dcb078], eax */
  w32((uint32_t)(0x11dcb078), (EAX));
  /* 11dc2412 mov dword ptr [0x11dcb07c], ecx */
  w32((uint32_t)(0x11dcb07c), (ECX));
  /* 11dc2418 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc241b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc241d mov dword ptr [0x11dcb074], eax */
  w32((uint32_t)(0x11dcb074), (EAX));
  /* 11dc2422 call 0x11dc2697 */
  push32(0x11dc2427u); f_11dc2697();
  /* 11dc2427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2429 jne 0x11dc2434 */
  if (!C.zf) goto L_11dc2434;
  /* 11dc242b call 0x11dc303d */
  push32(0x11dc2430u); f_11dc303d();
L_11dc2430:;
  /* 11dc2430 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc2432 jmp 0x11dc24a6 */
  goto L_11dc24a6;
L_11dc2434:;
  /* 11dc2434 call dword ptr [0x11dc709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc709c))), 0x11dc243au);
  /* 11dc243a mov dword ptr [0x11dcb738], eax */
  w32((uint32_t)(0x11dcb738), (EAX));
  /* 11dc243f call 0x11dc2d39 */
  push32(0x11dc2444u); f_11dc2d39();
  /* 11dc2444 mov dword ptr [0x11dcb05c], eax */
  w32((uint32_t)(0x11dcb05c), (EAX));
  /* 11dc2449 call 0x11dc2823 */
  push32(0x11dc244eu); f_11dc2823();
  /* 11dc244e call 0x11dc2aec */
  push32(0x11dc2453u); f_11dc2aec();
  /* 11dc2453 call 0x11dc2a33 */
  push32(0x11dc2458u); f_11dc2a33();
  /* 11dc2458 call 0x11dc2579 */
  push32(0x11dc245du); f_11dc2579();
  /* 11dc245d inc dword ptr [0x11dcb058] */
  { uint32_t _r=(r32((uint32_t)(0x11dcb058)))+1; w32((uint32_t)(0x11dcb058), (_r)); fl_inc(_r,32); }
  /* 11dc2463 jmp 0x11dc24a3 */
  goto L_11dc24a3;
L_11dc2465:;
  /* 11dc2465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc2467 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2469 jne 0x11dc2497 */
  if (!C.zf) goto L_11dc2497;
  /* 11dc246b cmp dword ptr [0x11dcb058], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb058))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2471 jle 0x11dc2430 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc2430;
  /* 11dc2473 dec dword ptr [0x11dcb058] */
  { uint32_t _r=(r32((uint32_t)(0x11dcb058)))-1; w32((uint32_t)(0x11dcb058), (_r)); fl_dec(_r,32); }
  /* 11dc2479 cmp dword ptr [0x11dcb0a8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb0a8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc247f jne 0x11dc2486 */
  if (!C.zf) goto L_11dc2486;
  /* 11dc2481 call 0x11dc25b7 */
  push32(0x11dc2486u); f_11dc25b7();
L_11dc2486:;
  /* 11dc2486 call 0x11dc29df */
  push32(0x11dc248bu); f_11dc29df();
  /* 11dc248b call 0x11dc26eb */
  push32(0x11dc2490u); f_11dc26eb();
  /* 11dc2490 call 0x11dc303d */
  push32(0x11dc2495u); f_11dc303d();
  /* 11dc2495 jmp 0x11dc24a3 */
  goto L_11dc24a3;
L_11dc2497:;
  /* 11dc2497 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc249a jne 0x11dc24a3 */
  if (!C.zf) goto L_11dc24a3;
  /* 11dc249c push ecx */
  push32((uint32_t)(ECX));
  /* 11dc249d call 0x11dc2783 */
  push32(0x11dc24a2u); f_11dc2783();
  /* 11dc24a2 pop ecx */
  ECX = (pop32());
L_11dc24a3:;
  /* 11dc24a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc24a5 pop eax */
  EAX = (pop32());
L_11dc24a6:;
  /* 11dc24a6 ret 0xc */
  ESPCHK(0x11dc23d0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11dc24a9 (157 bytes, 73 insns) */
void f_11dc24a9(void) {
  FTRACE(0x11dc24a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc24a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc24aa mov ebp, esp */
  EBP = (ESP);
  /* 11dc24ac push ebx */
  push32((uint32_t)(EBX));
  /* 11dc24ad mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc24b0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc24b1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc24b4 push edi */
  push32((uint32_t)(EDI));
  /* 11dc24b5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc24b8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc24ba jne 0x11dc24c5 */
  if (!C.zf) goto L_11dc24c5;
  /* 11dc24bc cmp dword ptr [0x11dcb058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc24c3 jmp 0x11dc24eb */
  goto L_11dc24eb;
L_11dc24c5:;
  /* 11dc24c5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc24c8 je 0x11dc24cf */
  if (C.zf) goto L_11dc24cf;
  /* 11dc24ca cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc24cd jne 0x11dc24f1 */
  if (!C.zf) goto L_11dc24f1;
L_11dc24cf:;
  /* 11dc24cf mov eax, dword ptr [0x11dcb73c] */
  EAX = (r32((uint32_t)(0x11dcb73c)));
  /* 11dc24d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc24d6 je 0x11dc24e1 */
  if (C.zf) goto L_11dc24e1;
  /* 11dc24d8 push edi */
  push32((uint32_t)(EDI));
  /* 11dc24d9 push esi */
  push32((uint32_t)(ESI));
  /* 11dc24da push ebx */
  push32((uint32_t)(EBX));
  /* 11dc24db call eax */
  call_ind((uint32_t)(EAX), 0x11dc24ddu);
  /* 11dc24dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc24df je 0x11dc24ed */
  if (C.zf) goto L_11dc24ed;
L_11dc24e1:;
  /* 11dc24e1 push edi */
  push32((uint32_t)(EDI));
  /* 11dc24e2 push esi */
  push32((uint32_t)(ESI));
  /* 11dc24e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc24e4 call 0x11dc23d0 */
  push32(0x11dc24e9u); f_11dc23d0();
  /* 11dc24e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11dc24eb:;
  /* 11dc24eb jne 0x11dc24f1 */
  if (!C.zf) goto L_11dc24f1;
L_11dc24ed:;
  /* 11dc24ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc24ef jmp 0x11dc253f */
  goto L_11dc253f;
L_11dc24f1:;
  /* 11dc24f1 push edi */
  push32((uint32_t)(EDI));
  /* 11dc24f2 push esi */
  push32((uint32_t)(ESI));
  /* 11dc24f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc24f4 call 0x11dc1000 */
  push32(0x11dc24f9u); f_11dc1000();
  /* 11dc24f9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc24fc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11dc24ff jne 0x11dc250d */
  if (!C.zf) goto L_11dc250d;
  /* 11dc2501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2503 jne 0x11dc253c */
  if (!C.zf) goto L_11dc253c;
  /* 11dc2505 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2506 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2507 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2508 call 0x11dc23d0 */
  push32(0x11dc250du); f_11dc23d0();
L_11dc250d:;
  /* 11dc250d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc250f je 0x11dc2516 */
  if (C.zf) goto L_11dc2516;
  /* 11dc2511 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2514 jne 0x11dc253c */
  if (!C.zf) goto L_11dc253c;
L_11dc2516:;
  /* 11dc2516 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2517 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2518 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2519 call 0x11dc23d0 */
  push32(0x11dc251eu); f_11dc23d0();
  /* 11dc251e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2520 jne 0x11dc2525 */
  if (!C.zf) goto L_11dc2525;
  /* 11dc2522 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11dc2525:;
  /* 11dc2525 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2529 je 0x11dc253c */
  if (C.zf) goto L_11dc253c;
  /* 11dc252b mov eax, dword ptr [0x11dcb73c] */
  EAX = (r32((uint32_t)(0x11dcb73c)));
  /* 11dc2530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2532 je 0x11dc253c */
  if (C.zf) goto L_11dc253c;
  /* 11dc2534 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2535 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2536 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2537 call eax */
  call_ind((uint32_t)(EAX), 0x11dc2539u);
  /* 11dc2539 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11dc253c:;
  /* 11dc253c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11dc253f:;
  /* 11dc253f pop edi */
  EDI = (pop32());
  /* 11dc2540 pop esi */
  ESI = (pop32());
  /* 11dc2541 pop ebx */
  EBX = (pop32());
  /* 11dc2542 pop ebp */
  EBP = (pop32());
  /* 11dc2543 ret 0xc */
  ESPCHK(0x11dc24a9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11dc2546 (48 bytes, 15 insns) */
void f_11dc2546(void) {
  FTRACE(0x11dc2546u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2546 mov eax, dword ptr [0x11dcb064] */
  EAX = (r32((uint32_t)(0x11dcb064)));
  /* 11dc254b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc254e je 0x11dc255d */
  if (C.zf) goto L_11dc255d;
  /* 11dc2550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2552 jne 0x11dc2562 */
  if (!C.zf) goto L_11dc2562;
  /* 11dc2554 cmp dword ptr [0x11dcb068], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb068))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc255b jne 0x11dc2562 */
  if (!C.zf) goto L_11dc2562;
L_11dc255d:;
  /* 11dc255d call 0x11dc30e5 */
  push32(0x11dc2562u); f_11dc30e5();
L_11dc2562:;
  /* 11dc2562 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dc2566 call 0x11dc311e */
  push32(0x11dc256bu); f_11dc311e();
  /* 11dc256b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11dc2570 call dword ptr [0x11dc83f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc83f8))), 0x11dc2576u);
  /* 11dc2576 pop ecx */
  ECX = (pop32());
  /* 11dc2577 pop ecx */
  ECX = (pop32());
  /* 11dc2578 ret  */
  ESPCHK(0x11dc2546u, _esp0);
  ESP += 4; return;
}

/* FUN_10002579 @ 0x11dc2579 (45 bytes, 12 insns) */
void f_11dc2579(void) {
  FTRACE(0x11dc2579u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2579 mov eax, dword ptr [0x11dcb734] */
  EAX = (r32((uint32_t)(0x11dcb734)));
  /* 11dc257e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2580 je 0x11dc2584 */
  if (C.zf) goto L_11dc2584;
  /* 11dc2582 call eax */
  call_ind((uint32_t)(EAX), 0x11dc2584u);
L_11dc2584:;
  /* 11dc2584 push 0x11dc8014 */
  push32((uint32_t)(0x11dc8014u));
  /* 11dc2589 push 0x11dc800c */
  push32((uint32_t)(0x11dc800cu));
  /* 11dc258e call 0x11dc267d */
  push32(0x11dc2593u); f_11dc267d();
  /* 11dc2593 push 0x11dc8008 */
  push32((uint32_t)(0x11dc8008u));
  /* 11dc2598 push 0x11dc8000 */
  push32((uint32_t)(0x11dc8000u));
  /* 11dc259d call 0x11dc267d */
  push32(0x11dc25a2u); f_11dc267d();
  /* 11dc25a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc25a5 ret  */
  ESPCHK(0x11dc2579u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11dc25a6 (17 bytes, 6 insns) */
void f_11dc25a6(void) {
  FTRACE(0x11dc25a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc25a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc25a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc25aa push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11dc25ae call 0x11dc25c6 */
  push32(0x11dc25b3u); f_11dc25c6();
  /* 11dc25b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc25b6 ret  */
  ESPCHK(0x11dc25a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100025b7 @ 0x11dc25b7 (15 bytes, 6 insns) */
void f_11dc25b7(void) {
  FTRACE(0x11dc25b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc25b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc25b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc25bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc25bd call 0x11dc25c6 */
  push32(0x11dc25c2u); f_11dc25c6();
  /* 11dc25c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc25c5 ret  */
  ESPCHK(0x11dc25b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100025c6 @ 0x11dc25c6 (163 bytes, 53 insns) */
void f_11dc25c6(void) {
  FTRACE(0x11dc25c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc25c6 push edi */
  push32((uint32_t)(EDI));
  /* 11dc25c7 call 0x11dc266b */
  push32(0x11dc25ccu); f_11dc266b();
  /* 11dc25cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc25ce pop edi */
  EDI = (pop32());
  /* 11dc25cf cmp dword ptr [0x11dcb0ac], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dcb0ac))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc25d5 jne 0x11dc25e8 */
  if (!C.zf) goto L_11dc25e8;
  /* 11dc25d7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11dc25db call dword ptr [0x11dc70ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70ac))), 0x11dc25e1u);
  /* 11dc25e1 push eax */
  push32((uint32_t)(EAX));
  /* 11dc25e2 call dword ptr [0x11dc70a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70a8))), 0x11dc25e8u);
L_11dc25e8:;
  /* 11dc25e8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc25ed push ebx */
  push32((uint32_t)(EBX));
  /* 11dc25ee mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11dc25f2 mov dword ptr [0x11dcb0a8], edi */
  w32((uint32_t)(0x11dcb0a8), (EDI));
  /* 11dc25f8 mov byte ptr [0x11dcb0a4], bl */
  w8((uint32_t)(0x11dcb0a4), (BL));
  /* 11dc25fe jne 0x11dc263c */
  if (!C.zf) goto L_11dc263c;
  /* 11dc2600 mov eax, dword ptr [0x11dcb730] */
  EAX = (r32((uint32_t)(0x11dcb730)));
  /* 11dc2605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2607 je 0x11dc262b */
  if (C.zf) goto L_11dc262b;
  /* 11dc2609 mov ecx, dword ptr [0x11dcb72c] */
  ECX = (r32((uint32_t)(0x11dcb72c)));
  /* 11dc260f push esi */
  push32((uint32_t)(ESI));
  /* 11dc2610 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11dc2613 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2615 jb 0x11dc262a */
  if (C.cf) goto L_11dc262a;
L_11dc2617:;
  /* 11dc2617 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc2619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc261b je 0x11dc261f */
  if (C.zf) goto L_11dc261f;
  /* 11dc261d call eax */
  call_ind((uint32_t)(EAX), 0x11dc261fu);
L_11dc261f:;
  /* 11dc261f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2622 cmp esi, dword ptr [0x11dcb730] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dcb730))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2628 jae 0x11dc2617 */
  if (!C.cf) goto L_11dc2617;
L_11dc262a:;
  /* 11dc262a pop esi */
  ESI = (pop32());
L_11dc262b:;
  /* 11dc262b push 0x11dc801c */
  push32((uint32_t)(0x11dc801cu));
  /* 11dc2630 push 0x11dc8018 */
  push32((uint32_t)(0x11dc8018u));
  /* 11dc2635 call 0x11dc267d */
  push32(0x11dc263au); f_11dc267d();
  /* 11dc263a pop ecx */
  ECX = (pop32());
  /* 11dc263b pop ecx */
  ECX = (pop32());
L_11dc263c:;
  /* 11dc263c push 0x11dc8024 */
  push32((uint32_t)(0x11dc8024u));
  /* 11dc2641 push 0x11dc8020 */
  push32((uint32_t)(0x11dc8020u));
  /* 11dc2646 call 0x11dc267d */
  push32(0x11dc264bu); f_11dc267d();
  /* 11dc264b pop ecx */
  ECX = (pop32());
  /* 11dc264c pop ecx */
  ECX = (pop32());
  /* 11dc264d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc264f pop ebx */
  EBX = (pop32());
  /* 11dc2650 je 0x11dc2659 */
  if (C.zf) goto L_11dc2659;
  /* 11dc2652 call 0x11dc2674 */
  push32(0x11dc2657u); f_11dc2674();
  /* 11dc2657 pop edi */
  EDI = (pop32());
  /* 11dc2658 ret  */
  ESPCHK(0x11dc25c6u, _esp0);
  ESP += 4; return;
L_11dc2659:;
  /* 11dc2659 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11dc265d mov dword ptr [0x11dcb0ac], edi */
  w32((uint32_t)(0x11dcb0ac), (EDI));
  /* 11dc2663 call dword ptr [0x11dc70a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70a4))), 0x11dc2669u);
  /* 11dc2669 pop edi */
  EDI = (pop32());
  /* 11dc266a ret  */
  ESPCHK(0x11dc25c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000266b @ 0x11dc266b (9 bytes, 4 insns) */
void f_11dc266b(void) {
  FTRACE(0x11dc266bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc266b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dc266d call 0x11dc3306 */
  push32(0x11dc2672u); f_11dc3306();
  /* 11dc2672 pop ecx */
  ECX = (pop32());
  /* 11dc2673 ret  */
  ESPCHK(0x11dc266bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002674 @ 0x11dc2674 (9 bytes, 4 insns) */
void f_11dc2674(void) {
  FTRACE(0x11dc2674u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2674 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dc2676 call 0x11dc3367 */
  push32(0x11dc267bu); f_11dc3367();
  /* 11dc267b pop ecx */
  ECX = (pop32());
  /* 11dc267c ret  */
  ESPCHK(0x11dc2674u, _esp0);
  ESP += 4; return;
}

/* FUN_1000267d @ 0x11dc267d (26 bytes, 12 insns) */
void f_11dc267d(void) {
  FTRACE(0x11dc267du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc267d push esi */
  push32((uint32_t)(ESI));
  /* 11dc267e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11dc2682:;
  /* 11dc2682 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2686 jae 0x11dc2695 */
  if (!C.cf) goto L_11dc2695;
  /* 11dc2688 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc268a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc268c je 0x11dc2690 */
  if (C.zf) goto L_11dc2690;
  /* 11dc268e call eax */
  call_ind((uint32_t)(EAX), 0x11dc2690u);
L_11dc2690:;
  /* 11dc2690 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2693 jmp 0x11dc2682 */
  goto L_11dc2682;
L_11dc2695:;
  /* 11dc2695 pop esi */
  ESI = (pop32());
  /* 11dc2696 ret  */
  ESPCHK(0x11dc267du, _esp0);
  ESP += 4; return;
}

/* FUN_10002697 @ 0x11dc2697 (84 bytes, 32 insns) */
void f_11dc2697(void) {
  FTRACE(0x11dc2697u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2697 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2698 call 0x11dc3271 */
  push32(0x11dc269du); f_11dc3271();
  /* 11dc269d call dword ptr [0x11dc70b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70b4))), 0x11dc26a3u);
  /* 11dc26a3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc26a6 mov dword ptr [0x11dc83fc], eax */
  w32((uint32_t)(0x11dc83fc), (EAX));
  /* 11dc26ab je 0x11dc26e7 */
  if (C.zf) goto L_11dc26e7;
  /* 11dc26ad push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11dc26af push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc26b1 call 0x11dc337c */
  push32(0x11dc26b6u); f_11dc337c();
  /* 11dc26b6 mov esi, eax */
  ESI = (EAX);
  /* 11dc26b8 pop ecx */
  ECX = (pop32());
  /* 11dc26b9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc26bb pop ecx */
  ECX = (pop32());
  /* 11dc26bc je 0x11dc26e7 */
  if (C.zf) goto L_11dc26e7;
  /* 11dc26be push esi */
  push32((uint32_t)(ESI));
  /* 11dc26bf push dword ptr [0x11dc83fc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc83fc))));
  /* 11dc26c5 call dword ptr [0x11dc7004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7004))), 0x11dc26cbu);
  /* 11dc26cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc26cd je 0x11dc26e7 */
  if (C.zf) goto L_11dc26e7;
  /* 11dc26cf push esi */
  push32((uint32_t)(ESI));
  /* 11dc26d0 call 0x11dc2709 */
  push32(0x11dc26d5u); f_11dc2709();
  /* 11dc26d5 pop ecx */
  ECX = (pop32());
  /* 11dc26d6 call dword ptr [0x11dc7000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7000))), 0x11dc26dcu);
  /* 11dc26dc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc26e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc26e2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dc26e4 pop eax */
  EAX = (pop32());
  /* 11dc26e5 pop esi */
  ESI = (pop32());
  /* 11dc26e6 ret  */
  ESPCHK(0x11dc2697u, _esp0);
  ESP += 4; return;
L_11dc26e7:;
  /* 11dc26e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc26e9 pop esi */
  ESI = (pop32());
  /* 11dc26ea ret  */
  ESPCHK(0x11dc2697u, _esp0);
  ESP += 4; return;
}

/* FUN_100026eb @ 0x11dc26eb (30 bytes, 8 insns) */
void f_11dc26eb(void) {
  FTRACE(0x11dc26ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc26eb call 0x11dc329a */
  push32(0x11dc26f0u); f_11dc329a();
  /* 11dc26f0 mov eax, dword ptr [0x11dc83fc] */
  EAX = (r32((uint32_t)(0x11dc83fc)));
  /* 11dc26f5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc26f8 je 0x11dc2708 */
  if (C.zf) goto L_11dc2708;
  /* 11dc26fa push eax */
  push32((uint32_t)(EAX));
  /* 11dc26fb call dword ptr [0x11dc70b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70b8))), 0x11dc2701u);
  /* 11dc2701 or dword ptr [0x11dc83fc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11dc83fc)))|(0xffffffffu); w32((uint32_t)(0x11dc83fc), (_r)); fl_logic(_r,32); }
L_11dc2708:;
  /* 11dc2708 ret  */
  ESPCHK(0x11dc26ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10002709 @ 0x11dc2709 (19 bytes, 4 insns) */
void f_11dc2709(void) {
  FTRACE(0x11dc2709u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2709 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc270d mov dword ptr [eax + 0x50], 0x11dc8578 */
  w32((uint32_t)(EAX + 0x50), (0x11dc8578u));
  /* 11dc2714 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11dc271b ret  */
  ESPCHK(0x11dc2709u, _esp0);
  ESP += 4; return;
}

/* FUN_1000271c @ 0x11dc271c (103 bytes, 38 insns) */
void f_11dc271c(void) {
  FTRACE(0x11dc271cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc271c push esi */
  push32((uint32_t)(ESI));
  /* 11dc271d push edi */
  push32((uint32_t)(EDI));
  /* 11dc271e call dword ptr [0x11dc70c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70c4))), 0x11dc2724u);
  /* 11dc2724 push dword ptr [0x11dc83fc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc83fc))));
  /* 11dc272a mov edi, eax */
  EDI = (EAX);
  /* 11dc272c call dword ptr [0x11dc70c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70c0))), 0x11dc2732u);
  /* 11dc2732 mov esi, eax */
  ESI = (EAX);
  /* 11dc2734 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2736 jne 0x11dc2777 */
  if (!C.zf) goto L_11dc2777;
  /* 11dc2738 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11dc273a push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc273c call 0x11dc337c */
  push32(0x11dc2741u); f_11dc337c();
  /* 11dc2741 mov esi, eax */
  ESI = (EAX);
  /* 11dc2743 pop ecx */
  ECX = (pop32());
  /* 11dc2744 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2746 pop ecx */
  ECX = (pop32());
  /* 11dc2747 je 0x11dc276f */
  if (C.zf) goto L_11dc276f;
  /* 11dc2749 push esi */
  push32((uint32_t)(ESI));
  /* 11dc274a push dword ptr [0x11dc83fc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc83fc))));
  /* 11dc2750 call dword ptr [0x11dc7004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7004))), 0x11dc2756u);
  /* 11dc2756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2758 je 0x11dc276f */
  if (C.zf) goto L_11dc276f;
  /* 11dc275a push esi */
  push32((uint32_t)(ESI));
  /* 11dc275b call 0x11dc2709 */
  push32(0x11dc2760u); f_11dc2709();
  /* 11dc2760 pop ecx */
  ECX = (pop32());
  /* 11dc2761 call dword ptr [0x11dc7000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7000))), 0x11dc2767u);
  /* 11dc2767 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc276b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dc276d jmp 0x11dc2777 */
  goto L_11dc2777;
L_11dc276f:;
  /* 11dc276f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dc2771 call 0x11dc2546 */
  push32(0x11dc2776u); f_11dc2546();
  /* 11dc2776 pop ecx */
  ECX = (pop32());
L_11dc2777:;
  /* 11dc2777 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2778 call dword ptr [0x11dc70bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70bc))), 0x11dc277eu);
  /* 11dc277e mov eax, esi */
  EAX = (ESI);
  /* 11dc2780 pop edi */
  EDI = (pop32());
  /* 11dc2781 pop esi */
  ESI = (pop32());
  /* 11dc2782 ret  */
  ESPCHK(0x11dc271cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002783 @ 0x11dc2783 (160 bytes, 62 insns) */
void f_11dc2783(void) {
  FTRACE(0x11dc2783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2783 mov eax, dword ptr [0x11dc83fc] */
  EAX = (r32((uint32_t)(0x11dc83fc)));
  /* 11dc2788 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc278b je 0x11dc2822 */
  if (C.zf) goto L_11dc2822;
  /* 11dc2791 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2792 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc2796 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2798 jne 0x11dc27a7 */
  if (!C.zf) goto L_11dc27a7;
  /* 11dc279a push eax */
  push32((uint32_t)(EAX));
  /* 11dc279b call dword ptr [0x11dc70c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70c0))), 0x11dc27a1u);
  /* 11dc27a1 mov esi, eax */
  ESI = (EAX);
  /* 11dc27a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc27a5 je 0x11dc2813 */
  if (C.zf) goto L_11dc2813;
L_11dc27a7:;
  /* 11dc27a7 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11dc27aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc27ac je 0x11dc27b5 */
  if (C.zf) goto L_11dc27b5;
  /* 11dc27ae push eax */
  push32((uint32_t)(EAX));
  /* 11dc27af call 0x11dc34b9 */
  push32(0x11dc27b4u); f_11dc34b9();
  /* 11dc27b4 pop ecx */
  ECX = (pop32());
L_11dc27b5:;
  /* 11dc27b5 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11dc27b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc27ba je 0x11dc27c3 */
  if (C.zf) goto L_11dc27c3;
  /* 11dc27bc push eax */
  push32((uint32_t)(EAX));
  /* 11dc27bd call 0x11dc34b9 */
  push32(0x11dc27c2u); f_11dc34b9();
  /* 11dc27c2 pop ecx */
  ECX = (pop32());
L_11dc27c3:;
  /* 11dc27c3 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11dc27c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc27c8 je 0x11dc27d1 */
  if (C.zf) goto L_11dc27d1;
  /* 11dc27ca push eax */
  push32((uint32_t)(EAX));
  /* 11dc27cb call 0x11dc34b9 */
  push32(0x11dc27d0u); f_11dc34b9();
  /* 11dc27d0 pop ecx */
  ECX = (pop32());
L_11dc27d1:;
  /* 11dc27d1 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11dc27d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc27d6 je 0x11dc27df */
  if (C.zf) goto L_11dc27df;
  /* 11dc27d8 push eax */
  push32((uint32_t)(EAX));
  /* 11dc27d9 call 0x11dc34b9 */
  push32(0x11dc27deu); f_11dc34b9();
  /* 11dc27de pop ecx */
  ECX = (pop32());
L_11dc27df:;
  /* 11dc27df mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11dc27e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc27e4 je 0x11dc27ed */
  if (C.zf) goto L_11dc27ed;
  /* 11dc27e6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc27e7 call 0x11dc34b9 */
  push32(0x11dc27ecu); f_11dc34b9();
  /* 11dc27ec pop ecx */
  ECX = (pop32());
L_11dc27ed:;
  /* 11dc27ed mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11dc27f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc27f2 je 0x11dc27fb */
  if (C.zf) goto L_11dc27fb;
  /* 11dc27f4 push eax */
  push32((uint32_t)(EAX));
  /* 11dc27f5 call 0x11dc34b9 */
  push32(0x11dc27fau); f_11dc34b9();
  /* 11dc27fa pop ecx */
  ECX = (pop32());
L_11dc27fb:;
  /* 11dc27fb mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11dc27fe cmp eax, 0x11dc8578 */
  { uint32_t _a=(EAX),_b=(0x11dc8578u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2803 je 0x11dc280c */
  if (C.zf) goto L_11dc280c;
  /* 11dc2805 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2806 call 0x11dc34b9 */
  push32(0x11dc280bu); f_11dc34b9();
  /* 11dc280b pop ecx */
  ECX = (pop32());
L_11dc280c:;
  /* 11dc280c push esi */
  push32((uint32_t)(ESI));
  /* 11dc280d call 0x11dc34b9 */
  push32(0x11dc2812u); f_11dc34b9();
  /* 11dc2812 pop ecx */
  ECX = (pop32());
L_11dc2813:;
  /* 11dc2813 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2815 push dword ptr [0x11dc83fc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc83fc))));
  /* 11dc281b call dword ptr [0x11dc7004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7004))), 0x11dc2821u);
  /* 11dc2821 pop esi */
  ESI = (pop32());
L_11dc2822:;
  /* 11dc2822 ret  */
  ESPCHK(0x11dc2783u, _esp0);
  ESP += 4; return;
}

/* FUN_10002823 @ 0x11dc2823 (444 bytes, 150 insns) */
void f_11dc2823(void) {
  FTRACE(0x11dc2823u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2823 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2824 mov ebp, esp */
  EBP = (ESP);
  /* 11dc2826 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2829 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc282a push esi */
  push32((uint32_t)(ESI));
  /* 11dc282b push edi */
  push32((uint32_t)(EDI));
  /* 11dc282c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11dc2831 call 0x11dc35a2 */
  push32(0x11dc2836u); f_11dc35a2();
  /* 11dc2836 mov esi, eax */
  ESI = (EAX);
  /* 11dc2838 pop ecx */
  ECX = (pop32());
  /* 11dc2839 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc283b jne 0x11dc2845 */
  if (!C.zf) goto L_11dc2845;
  /* 11dc283d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11dc283f call 0x11dc2546 */
  push32(0x11dc2844u); f_11dc2546();
  /* 11dc2844 pop ecx */
  ECX = (pop32());
L_11dc2845:;
  /* 11dc2845 mov dword ptr [0x11dcb620], esi */
  w32((uint32_t)(0x11dcb620), (ESI));
  /* 11dc284b mov dword ptr [0x11dcb720], 0x20 */
  w32((uint32_t)(0x11dcb720), (0x20u));
  /* 11dc2855 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11dc285b:;
  /* 11dc285b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc285d jae 0x11dc287d */
  if (!C.cf) goto L_11dc287d;
  /* 11dc285f and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dc2863 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11dc2866 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dc286a mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11dc286e mov eax, dword ptr [0x11dcb620] */
  EAX = (r32((uint32_t)(0x11dcb620)));
  /* 11dc2873 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2876 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc287b jmp 0x11dc285b */
  goto L_11dc285b;
L_11dc287d:;
  /* 11dc287d lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11dc2880 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2881 call dword ptr [0x11dc708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc708c))), 0x11dc2887u);
  /* 11dc2887 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dc288c je 0x11dc2963 */
  if (C.zf) goto L_11dc2963;
  /* 11dc2892 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dc2895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2897 je 0x11dc2963 */
  if (C.zf) goto L_11dc2963;
  /* 11dc289d mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11dc289f lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11dc28a2 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11dc28a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dc28a8 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11dc28ad cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc28af jl 0x11dc28b3 */
  if ((C.sf!=C.of)) goto L_11dc28b3;
  /* 11dc28b1 mov edi, eax */
  EDI = (EAX);
L_11dc28b3:;
  /* 11dc28b3 cmp dword ptr [0x11dcb720], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dcb720))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc28b9 jge 0x11dc2911 */
  if ((C.sf==C.of)) goto L_11dc2911;
  /* 11dc28bb mov esi, 0x11dcb624 */
  ESI = (0x11dcb624u);
L_11dc28c0:;
  /* 11dc28c0 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11dc28c5 call 0x11dc35a2 */
  push32(0x11dc28cau); f_11dc35a2();
  /* 11dc28ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc28cc pop ecx */
  ECX = (pop32());
  /* 11dc28cd je 0x11dc290b */
  if (C.zf) goto L_11dc290b;
  /* 11dc28cf add dword ptr [0x11dcb720], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb720))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11dcb720), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dc28d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dc28d8 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11dc28de:;
  /* 11dc28de cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc28e0 jae 0x11dc28fe */
  if (!C.cf) goto L_11dc28fe;
  /* 11dc28e2 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dc28e6 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11dc28e9 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dc28ed mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11dc28f1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11dc28f3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc28f6 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc28fc jmp 0x11dc28de */
  goto L_11dc28de;
L_11dc28fe:;
  /* 11dc28fe add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2901 cmp dword ptr [0x11dcb720], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dcb720))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2907 jl 0x11dc28c0 */
  if ((C.sf!=C.of)) goto L_11dc28c0;
  /* 11dc2909 jmp 0x11dc2911 */
  goto L_11dc2911;
L_11dc290b:;
  /* 11dc290b mov edi, dword ptr [0x11dcb720] */
  EDI = (r32((uint32_t)(0x11dcb720)));
L_11dc2911:;
  /* 11dc2911 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dc2913 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dc2915 jle 0x11dc2963 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc2963;
L_11dc2917:;
  /* 11dc2917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc291a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dc291c cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc291f je 0x11dc2959 */
  if (C.zf) goto L_11dc2959;
  /* 11dc2921 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11dc2923 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11dc2925 je 0x11dc2959 */
  if (C.zf) goto L_11dc2959;
  /* 11dc2927 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11dc2929 jne 0x11dc2936 */
  if (!C.zf) goto L_11dc2936;
  /* 11dc292b push ecx */
  push32((uint32_t)(ECX));
  /* 11dc292c call dword ptr [0x11dc7090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7090))), 0x11dc2932u);
  /* 11dc2932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2934 je 0x11dc2959 */
  if (C.zf) goto L_11dc2959;
L_11dc2936:;
  /* 11dc2936 mov ecx, esi */
  ECX = (ESI);
  /* 11dc2938 mov eax, esi */
  EAX = (ESI);
  /* 11dc293a sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11dc293d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc2940 mov ecx, dword ptr [ecx*4 + 0x11dcb620] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11dcb620)));
  /* 11dc2947 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11dc294a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11dc294d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc2950 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11dc2952 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dc2954 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11dc2956 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11dc2959:;
  /* 11dc2959 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dc295d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc295e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc295f cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2961 jl 0x11dc2917 */
  if ((C.sf!=C.of)) goto L_11dc2917;
L_11dc2963:;
  /* 11dc2963 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dc2965:;
  /* 11dc2965 mov ecx, dword ptr [0x11dcb620] */
  ECX = (r32((uint32_t)(0x11dcb620)));
  /* 11dc296b lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11dc296e cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2972 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11dc2975 jne 0x11dc29c4 */
  if (!C.zf) goto L_11dc29c4;
  /* 11dc2977 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc2979 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11dc297d jne 0x11dc2984 */
  if (!C.zf) goto L_11dc2984;
  /* 11dc297f push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11dc2981 pop eax */
  EAX = (pop32());
  /* 11dc2982 jmp 0x11dc298e */
  goto L_11dc298e;
L_11dc2984:;
  /* 11dc2984 mov eax, ebx */
  EAX = (EBX);
  /* 11dc2986 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dc2987 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc2989 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc298b add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dc298e:;
  /* 11dc298e push eax */
  push32((uint32_t)(EAX));
  /* 11dc298f call dword ptr [0x11dc70b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70b0))), 0x11dc2995u);
  /* 11dc2995 mov edi, eax */
  EDI = (EAX);
  /* 11dc2997 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc299a je 0x11dc29b3 */
  if (C.zf) goto L_11dc29b3;
  /* 11dc299c push edi */
  push32((uint32_t)(EDI));
  /* 11dc299d call dword ptr [0x11dc7090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7090))), 0x11dc29a3u);
  /* 11dc29a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc29a5 je 0x11dc29b3 */
  if (C.zf) goto L_11dc29b3;
  /* 11dc29a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc29ac mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dc29ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc29b1 jne 0x11dc29b9 */
  if (!C.zf) goto L_11dc29b9;
L_11dc29b3:;
  /* 11dc29b3 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dc29b7 jmp 0x11dc29c8 */
  goto L_11dc29c8;
L_11dc29b9:;
  /* 11dc29b9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc29bc jne 0x11dc29c8 */
  if (!C.zf) goto L_11dc29c8;
  /* 11dc29be or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11dc29c2 jmp 0x11dc29c8 */
  goto L_11dc29c8;
L_11dc29c4:;
  /* 11dc29c4 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11dc29c8:;
  /* 11dc29c8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc29c9 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc29cc jl 0x11dc2965 */
  if ((C.sf!=C.of)) goto L_11dc2965;
  /* 11dc29ce push dword ptr [0x11dcb720] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb720))));
  /* 11dc29d4 call dword ptr [0x11dc7098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7098))), 0x11dc29dau);
  /* 11dc29da pop edi */
  EDI = (pop32());
  /* 11dc29db pop esi */
  ESI = (pop32());
  /* 11dc29dc pop ebx */
  EBX = (pop32());
  /* 11dc29dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc29de ret  */
  ESPCHK(0x11dc2823u, _esp0);
  ESP += 4; return;
}

/* FUN_100029df @ 0x11dc29df (84 bytes, 33 insns) */
void f_11dc29df(void) {
  FTRACE(0x11dc29dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc29df push ebx */
  push32((uint32_t)(EBX));
  /* 11dc29e0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc29e1 push edi */
  push32((uint32_t)(EDI));
  /* 11dc29e2 mov esi, 0x11dcb620 */
  ESI = (0x11dcb620u);
L_11dc29e7:;
  /* 11dc29e7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc29e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc29eb je 0x11dc2a24 */
  if (C.zf) goto L_11dc2a24;
  /* 11dc29ed mov edi, eax */
  EDI = (EAX);
  /* 11dc29ef add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc29f4 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc29f6 jae 0x11dc2a19 */
  if (!C.cf) goto L_11dc2a19;
  /* 11dc29f8 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11dc29fb:;
  /* 11dc29fb cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc29ff je 0x11dc2a08 */
  if (C.zf) goto L_11dc2a08;
  /* 11dc2a01 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2a02 call dword ptr [0x11dc7094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7094))), 0x11dc2a08u);
L_11dc2a08:;
  /* 11dc2a08 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc2a0a add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2a0d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2a12 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2a15 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2a17 jb 0x11dc29fb */
  if (C.cf) goto L_11dc29fb;
L_11dc2a19:;
  /* 11dc2a19 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc2a1b call 0x11dc34b9 */
  push32(0x11dc2a20u); f_11dc34b9();
  /* 11dc2a20 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11dc2a23 pop ecx */
  ECX = (pop32());
L_11dc2a24:;
  /* 11dc2a24 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2a27 cmp esi, 0x11dcb720 */
  { uint32_t _a=(ESI),_b=(0x11dcb720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2a2d jl 0x11dc29e7 */
  if ((C.sf!=C.of)) goto L_11dc29e7;
  /* 11dc2a2f pop edi */
  EDI = (pop32());
  /* 11dc2a30 pop esi */
  ESI = (pop32());
  /* 11dc2a31 pop ebx */
  EBX = (pop32());
  /* 11dc2a32 ret  */
  ESPCHK(0x11dc29dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a33 @ 0x11dc2a33 (185 bytes, 71 insns) */
void f_11dc2a33(void) {
  FTRACE(0x11dc2a33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2a33 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2a34 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc2a36 cmp dword ptr [0x11dcb728], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb728))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2a3c push esi */
  push32((uint32_t)(ESI));
  /* 11dc2a3d push edi */
  push32((uint32_t)(EDI));
  /* 11dc2a3e jne 0x11dc2a45 */
  if (!C.zf) goto L_11dc2a45;
  /* 11dc2a40 call 0x11dc3c23 */
  push32(0x11dc2a45u); f_11dc3c23();
L_11dc2a45:;
  /* 11dc2a45 mov esi, dword ptr [0x11dcb05c] */
  ESI = (r32((uint32_t)(0x11dcb05c)));
  /* 11dc2a4b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11dc2a4d:;
  /* 11dc2a4d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc2a4f cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2a51 je 0x11dc2a65 */
  if (C.zf) goto L_11dc2a65;
  /* 11dc2a53 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2a55 je 0x11dc2a58 */
  if (C.zf) goto L_11dc2a58;
  /* 11dc2a57 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11dc2a58:;
  /* 11dc2a58 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2a59 call 0x11dc37d0 */
  push32(0x11dc2a5eu); f_11dc37d0();
  /* 11dc2a5e pop ecx */
  ECX = (pop32());
  /* 11dc2a5f lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11dc2a63 jmp 0x11dc2a4d */
  goto L_11dc2a4d;
L_11dc2a65:;
  /* 11dc2a65 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11dc2a6c push eax */
  push32((uint32_t)(EAX));
  /* 11dc2a6d call 0x11dc35a2 */
  push32(0x11dc2a72u); f_11dc35a2();
  /* 11dc2a72 mov esi, eax */
  ESI = (EAX);
  /* 11dc2a74 pop ecx */
  ECX = (pop32());
  /* 11dc2a75 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2a77 mov dword ptr [0x11dcb08c], esi */
  w32((uint32_t)(0x11dcb08c), (ESI));
  /* 11dc2a7d jne 0x11dc2a87 */
  if (!C.zf) goto L_11dc2a87;
  /* 11dc2a7f push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc2a81 call 0x11dc2546 */
  push32(0x11dc2a86u); f_11dc2546();
  /* 11dc2a86 pop ecx */
  ECX = (pop32());
L_11dc2a87:;
  /* 11dc2a87 mov edi, dword ptr [0x11dcb05c] */
  EDI = (r32((uint32_t)(0x11dcb05c)));
  /* 11dc2a8d cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2a8f je 0x11dc2aca */
  if (C.zf) goto L_11dc2aca;
  /* 11dc2a91 push ebp */
  push32((uint32_t)(EBP));
L_11dc2a92:;
  /* 11dc2a92 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2a93 call 0x11dc37d0 */
  push32(0x11dc2a98u); f_11dc37d0();
  /* 11dc2a98 mov ebp, eax */
  EBP = (EAX);
  /* 11dc2a9a pop ecx */
  ECX = (pop32());
  /* 11dc2a9b inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11dc2a9c cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2a9f je 0x11dc2ac3 */
  if (C.zf) goto L_11dc2ac3;
  /* 11dc2aa1 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2aa2 call 0x11dc35a2 */
  push32(0x11dc2aa7u); f_11dc35a2();
  /* 11dc2aa7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2aa9 pop ecx */
  ECX = (pop32());
  /* 11dc2aaa mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dc2aac jne 0x11dc2ab6 */
  if (!C.zf) goto L_11dc2ab6;
  /* 11dc2aae push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc2ab0 call 0x11dc2546 */
  push32(0x11dc2ab5u); f_11dc2546();
  /* 11dc2ab5 pop ecx */
  ECX = (pop32());
L_11dc2ab6:;
  /* 11dc2ab6 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2ab7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc2ab9 call 0x11dc36e0 */
  push32(0x11dc2abeu); f_11dc36e0();
  /* 11dc2abe pop ecx */
  ECX = (pop32());
  /* 11dc2abf add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2ac2 pop ecx */
  ECX = (pop32());
L_11dc2ac3:;
  /* 11dc2ac3 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2ac5 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2ac7 jne 0x11dc2a92 */
  if (!C.zf) goto L_11dc2a92;
  /* 11dc2ac9 pop ebp */
  EBP = (pop32());
L_11dc2aca:;
  /* 11dc2aca push dword ptr [0x11dcb05c] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb05c))));
  /* 11dc2ad0 call 0x11dc34b9 */
  push32(0x11dc2ad5u); f_11dc34b9();
  /* 11dc2ad5 pop ecx */
  ECX = (pop32());
  /* 11dc2ad6 mov dword ptr [0x11dcb05c], ebx */
  w32((uint32_t)(0x11dcb05c), (EBX));
  /* 11dc2adc mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11dc2ade pop edi */
  EDI = (pop32());
  /* 11dc2adf pop esi */
  ESI = (pop32());
  /* 11dc2ae0 mov dword ptr [0x11dcb724], 1 */
  w32((uint32_t)(0x11dcb724), (0x1u));
  /* 11dc2aea pop ebx */
  EBX = (pop32());
  /* 11dc2aeb ret  */
  ESPCHK(0x11dc2a33u, _esp0);
  ESP += 4; return;
}

/* FUN_10002aec @ 0x11dc2aec (153 bytes, 62 insns) */
void f_11dc2aec(void) {
  FTRACE(0x11dc2aecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2aec push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2aed mov ebp, esp */
  EBP = (ESP);
  /* 11dc2aef push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2af1 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2af2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc2af4 cmp dword ptr [0x11dcb728], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb728))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2afa push esi */
  push32((uint32_t)(ESI));
  /* 11dc2afb push edi */
  push32((uint32_t)(EDI));
  /* 11dc2afc jne 0x11dc2b03 */
  if (!C.zf) goto L_11dc2b03;
  /* 11dc2afe call 0x11dc3c23 */
  push32(0x11dc2b03u); f_11dc3c23();
L_11dc2b03:;
  /* 11dc2b03 mov esi, 0x11dcb0b0 */
  ESI = (0x11dcb0b0u);
  /* 11dc2b08 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11dc2b0d push esi */
  push32((uint32_t)(ESI));
  /* 11dc2b0e push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2b0f call dword ptr [0x11dc7084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7084))), 0x11dc2b15u);
  /* 11dc2b15 mov eax, dword ptr [0x11dcb738] */
  EAX = (r32((uint32_t)(0x11dcb738)));
  /* 11dc2b1a mov dword ptr [0x11dcb09c], esi */
  w32((uint32_t)(0x11dcb09c), (ESI));
  /* 11dc2b20 mov edi, esi */
  EDI = (ESI);
  /* 11dc2b22 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2b24 je 0x11dc2b28 */
  if (C.zf) goto L_11dc2b28;
  /* 11dc2b26 mov edi, eax */
  EDI = (EAX);
L_11dc2b28:;
  /* 11dc2b28 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11dc2b2b push eax */
  push32((uint32_t)(EAX));
  /* 11dc2b2c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11dc2b2f push eax */
  push32((uint32_t)(EAX));
  /* 11dc2b30 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2b31 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2b32 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2b33 call 0x11dc2b85 */
  push32(0x11dc2b38u); f_11dc2b85();
  /* 11dc2b38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dc2b3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc2b3e lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11dc2b41 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2b42 call 0x11dc35a2 */
  push32(0x11dc2b47u); f_11dc35a2();
  /* 11dc2b47 mov esi, eax */
  ESI = (EAX);
  /* 11dc2b49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2b4c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2b4e jne 0x11dc2b58 */
  if (!C.zf) goto L_11dc2b58;
  /* 11dc2b50 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc2b52 call 0x11dc2546 */
  push32(0x11dc2b57u); f_11dc2546();
  /* 11dc2b57 pop ecx */
  ECX = (pop32());
L_11dc2b58:;
  /* 11dc2b58 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11dc2b5b push eax */
  push32((uint32_t)(EAX));
  /* 11dc2b5c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11dc2b5f push eax */
  push32((uint32_t)(EAX));
  /* 11dc2b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc2b63 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11dc2b66 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2b67 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2b68 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2b69 call 0x11dc2b85 */
  push32(0x11dc2b6eu); f_11dc2b85();
  /* 11dc2b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc2b71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2b74 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dc2b75 mov dword ptr [0x11dcb084], esi */
  w32((uint32_t)(0x11dcb084), (ESI));
  /* 11dc2b7b pop edi */
  EDI = (pop32());
  /* 11dc2b7c pop esi */
  ESI = (pop32());
  /* 11dc2b7d mov dword ptr [0x11dcb080], eax */
  w32((uint32_t)(0x11dcb080), (EAX));
  /* 11dc2b82 pop ebx */
  EBX = (pop32());
  /* 11dc2b83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc2b84 ret  */
  ESPCHK(0x11dc2aecu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b85 @ 0x11dc2b85 (436 bytes, 187 insns) */
void f_11dc2b85(void) {
  FTRACE(0x11dc2b85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2b85 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2b86 mov ebp, esp */
  EBP = (ESP);
  /* 11dc2b88 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dc2b8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc2b8e push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2b8f push esi */
  push32((uint32_t)(ESI));
  /* 11dc2b90 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dc2b93 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc2b96 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2b97 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc2b9a mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11dc2ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc2ba3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dc2ba5 je 0x11dc2baf */
  if (C.zf) goto L_11dc2baf;
  /* 11dc2ba7 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11dc2ba9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2bac mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11dc2baf:;
  /* 11dc2baf cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2bb2 jne 0x11dc2bf8 */
  if (!C.zf) goto L_11dc2bf8;
L_11dc2bb4:;
  /* 11dc2bb4 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11dc2bb7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2bb8 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2bbb je 0x11dc2be6 */
  if (C.zf) goto L_11dc2be6;
  /* 11dc2bbd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc2bbf je 0x11dc2be6 */
  if (C.zf) goto L_11dc2be6;
  /* 11dc2bc1 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11dc2bc4 test byte ptr [edx + 0x11dcb501], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11dcb501)))&(0x4u); fl_logic(_r,8); }
  /* 11dc2bcb je 0x11dc2bd9 */
  if (C.zf) goto L_11dc2bd9;
  /* 11dc2bcd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2bcf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2bd1 je 0x11dc2bd9 */
  if (C.zf) goto L_11dc2bd9;
  /* 11dc2bd3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2bd5 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dc2bd7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc2bd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11dc2bd9:;
  /* 11dc2bd9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2bdb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2bdd je 0x11dc2bb4 */
  if (C.zf) goto L_11dc2bb4;
  /* 11dc2bdf mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2be1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dc2be3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc2be4 jmp 0x11dc2bb4 */
  goto L_11dc2bb4;
L_11dc2be6:;
  /* 11dc2be6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2be8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2bea je 0x11dc2bf0 */
  if (C.zf) goto L_11dc2bf0;
  /* 11dc2bec and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11dc2bef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dc2bf0:;
  /* 11dc2bf0 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2bf3 jne 0x11dc2c3b */
  if (!C.zf) goto L_11dc2c3b;
  /* 11dc2bf5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2bf6 jmp 0x11dc2c3b */
  goto L_11dc2c3b;
L_11dc2bf8:;
  /* 11dc2bf8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2bfa test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2bfc je 0x11dc2c03 */
  if (C.zf) goto L_11dc2c03;
  /* 11dc2bfe mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2c00 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dc2c02 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dc2c03:;
  /* 11dc2c03 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2c05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2c06 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11dc2c09 test byte ptr [ebx + 0x11dcb501], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11dcb501)))&(0x4u); fl_logic(_r,8); }
  /* 11dc2c10 je 0x11dc2c1e */
  if (C.zf) goto L_11dc2c1e;
  /* 11dc2c12 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2c14 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2c16 je 0x11dc2c1d */
  if (C.zf) goto L_11dc2c1d;
  /* 11dc2c18 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11dc2c1a mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11dc2c1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dc2c1d:;
  /* 11dc2c1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11dc2c1e:;
  /* 11dc2c1e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c21 je 0x11dc2c2c */
  if (C.zf) goto L_11dc2c2c;
  /* 11dc2c23 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc2c25 je 0x11dc2c30 */
  if (C.zf) goto L_11dc2c30;
  /* 11dc2c27 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c2a jne 0x11dc2bf8 */
  if (!C.zf) goto L_11dc2bf8;
L_11dc2c2c:;
  /* 11dc2c2c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc2c2e jne 0x11dc2c33 */
  if (!C.zf) goto L_11dc2c33;
L_11dc2c30:;
  /* 11dc2c30 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dc2c31 jmp 0x11dc2c3b */
  goto L_11dc2c3b;
L_11dc2c33:;
  /* 11dc2c33 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2c35 je 0x11dc2c3b */
  if (C.zf) goto L_11dc2c3b;
  /* 11dc2c37 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11dc2c3b:;
  /* 11dc2c3b and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11dc2c3f:;
  /* 11dc2c3f cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c42 je 0x11dc2d28 */
  if (C.zf) goto L_11dc2d28;
L_11dc2c48:;
  /* 11dc2c48 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2c4a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c4d je 0x11dc2c54 */
  if (C.zf) goto L_11dc2c54;
  /* 11dc2c4f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c52 jne 0x11dc2c57 */
  if (!C.zf) goto L_11dc2c57;
L_11dc2c54:;
  /* 11dc2c54 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2c55 jmp 0x11dc2c48 */
  goto L_11dc2c48;
L_11dc2c57:;
  /* 11dc2c57 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c5a je 0x11dc2d28 */
  if (C.zf) goto L_11dc2d28;
  /* 11dc2c60 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dc2c62 je 0x11dc2c6c */
  if (C.zf) goto L_11dc2c6c;
  /* 11dc2c64 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11dc2c66 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2c69 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11dc2c6c:;
  /* 11dc2c6c mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc2c6f inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11dc2c71:;
  /* 11dc2c71 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11dc2c78 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dc2c7a:;
  /* 11dc2c7a cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c7d jne 0x11dc2c83 */
  if (!C.zf) goto L_11dc2c83;
  /* 11dc2c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2c80 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc2c81 jmp 0x11dc2c7a */
  goto L_11dc2c7a;
L_11dc2c83:;
  /* 11dc2c83 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c86 jne 0x11dc2cb4 */
  if (!C.zf) goto L_11dc2cb4;
  /* 11dc2c88 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11dc2c8b jne 0x11dc2cb2 */
  if (!C.zf) goto L_11dc2cb2;
  /* 11dc2c8d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc2c8f cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2c92 je 0x11dc2ca1 */
  if (C.zf) goto L_11dc2ca1;
  /* 11dc2c94 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2c98 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11dc2c9b jne 0x11dc2ca1 */
  if (!C.zf) goto L_11dc2ca1;
  /* 11dc2c9d mov eax, edx */
  EAX = (EDX);
  /* 11dc2c9f jmp 0x11dc2ca4 */
  goto L_11dc2ca4;
L_11dc2ca1:;
  /* 11dc2ca1 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11dc2ca4:;
  /* 11dc2ca4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc2ca7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc2ca9 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2cac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11dc2caf mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11dc2cb2:;
  /* 11dc2cb2 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11dc2cb4:;
  /* 11dc2cb4 mov edx, ebx */
  EDX = (EBX);
  /* 11dc2cb6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dc2cb7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dc2cb9 je 0x11dc2cc9 */
  if (C.zf) goto L_11dc2cc9;
  /* 11dc2cbb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11dc2cbc:;
  /* 11dc2cbc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2cbe je 0x11dc2cc4 */
  if (C.zf) goto L_11dc2cc4;
  /* 11dc2cc0 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11dc2cc3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dc2cc4:;
  /* 11dc2cc4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2cc6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dc2cc7 jne 0x11dc2cbc */
  if (!C.zf) goto L_11dc2cbc;
L_11dc2cc9:;
  /* 11dc2cc9 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2ccb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc2ccd je 0x11dc2d19 */
  if (C.zf) goto L_11dc2d19;
  /* 11dc2ccf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2cd3 jne 0x11dc2cdf */
  if (!C.zf) goto L_11dc2cdf;
  /* 11dc2cd5 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2cd8 je 0x11dc2d19 */
  if (C.zf) goto L_11dc2d19;
  /* 11dc2cda cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2cdd je 0x11dc2d19 */
  if (C.zf) goto L_11dc2d19;
L_11dc2cdf:;
  /* 11dc2cdf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2ce3 je 0x11dc2d13 */
  if (C.zf) goto L_11dc2d13;
  /* 11dc2ce5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2ce7 je 0x11dc2d02 */
  if (C.zf) goto L_11dc2d02;
  /* 11dc2ce9 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11dc2cec test byte ptr [ebx + 0x11dcb501], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11dcb501)))&(0x4u); fl_logic(_r,8); }
  /* 11dc2cf3 je 0x11dc2cfb */
  if (C.zf) goto L_11dc2cfb;
  /* 11dc2cf5 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dc2cf7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc2cf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2cf9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11dc2cfb:;
  /* 11dc2cfb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11dc2cfd mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dc2cff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc2d00 jmp 0x11dc2d11 */
  goto L_11dc2d11;
L_11dc2d02:;
  /* 11dc2d02 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11dc2d05 test byte ptr [edx + 0x11dcb501], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11dcb501)))&(0x4u); fl_logic(_r,8); }
  /* 11dc2d0c je 0x11dc2d11 */
  if (C.zf) goto L_11dc2d11;
  /* 11dc2d0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2d0f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11dc2d11:;
  /* 11dc2d11 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11dc2d13:;
  /* 11dc2d13 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2d14 jmp 0x11dc2c71 */
  goto L_11dc2c71;
L_11dc2d19:;
  /* 11dc2d19 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc2d1b je 0x11dc2d21 */
  if (C.zf) goto L_11dc2d21;
  /* 11dc2d1d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11dc2d20 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dc2d21:;
  /* 11dc2d21 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11dc2d23 jmp 0x11dc2c3f */
  goto L_11dc2c3f;
L_11dc2d28:;
  /* 11dc2d28 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dc2d2a je 0x11dc2d2f */
  if (C.zf) goto L_11dc2d2f;
  /* 11dc2d2c and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11dc2d2f:;
  /* 11dc2d2f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc2d32 pop edi */
  EDI = (pop32());
  /* 11dc2d33 pop esi */
  ESI = (pop32());
  /* 11dc2d34 pop ebx */
  EBX = (pop32());
  /* 11dc2d35 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11dc2d37 pop ebp */
  EBP = (pop32());
  /* 11dc2d38 ret  */
  ESPCHK(0x11dc2b85u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d39 @ 0x11dc2d39 (306 bytes, 132 insns) */
void f_11dc2d39(void) {
  FTRACE(0x11dc2d39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11dc2d3b mov eax, dword ptr [0x11dcb1b4] */
  EAX = (r32((uint32_t)(0x11dcb1b4)));
  /* 11dc2d40 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2d41 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2d42 mov ebp, dword ptr [0x11dc707c] */
  EBP = (r32((uint32_t)(0x11dc707c)));
  /* 11dc2d48 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2d49 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2d4a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc2d4c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dc2d4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc2d50 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2d52 jne 0x11dc2d87 */
  if (!C.zf) goto L_11dc2d87;
  /* 11dc2d54 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc2d56u);
  /* 11dc2d56 mov esi, eax */
  ESI = (EAX);
  /* 11dc2d58 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2d5a je 0x11dc2d68 */
  if (C.zf) goto L_11dc2d68;
  /* 11dc2d5c mov dword ptr [0x11dcb1b4], 1 */
  w32((uint32_t)(0x11dcb1b4), (0x1u));
  /* 11dc2d66 jmp 0x11dc2d90 */
  goto L_11dc2d90;
L_11dc2d68:;
  /* 11dc2d68 call dword ptr [0x11dc7074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7074))), 0x11dc2d6eu);
  /* 11dc2d6e mov edi, eax */
  EDI = (EAX);
  /* 11dc2d70 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2d72 je 0x11dc2e62 */
  if (C.zf) goto L_11dc2e62;
  /* 11dc2d78 mov dword ptr [0x11dcb1b4], 2 */
  w32((uint32_t)(0x11dcb1b4), (0x2u));
  /* 11dc2d82 jmp 0x11dc2e16 */
  goto L_11dc2e16;
L_11dc2d87:;
  /* 11dc2d87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2d8a jne 0x11dc2e11 */
  if (!C.zf) goto L_11dc2e11;
L_11dc2d90:;
  /* 11dc2d90 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2d92 jne 0x11dc2da0 */
  if (!C.zf) goto L_11dc2da0;
  /* 11dc2d94 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc2d96u);
  /* 11dc2d96 mov esi, eax */
  ESI = (EAX);
  /* 11dc2d98 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2d9a je 0x11dc2e62 */
  if (C.zf) goto L_11dc2e62;
L_11dc2da0:;
  /* 11dc2da0 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dc2da3 mov eax, esi */
  EAX = (ESI);
  /* 11dc2da5 je 0x11dc2db5 */
  if (C.zf) goto L_11dc2db5;
L_11dc2da7:;
  /* 11dc2da7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2da8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2da9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dc2dac jne 0x11dc2da7 */
  if (!C.zf) goto L_11dc2da7;
  /* 11dc2dae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2daf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2db0 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dc2db3 jne 0x11dc2da7 */
  if (!C.zf) goto L_11dc2da7;
L_11dc2db5:;
  /* 11dc2db5 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2db7 mov edi, dword ptr [0x11dc7078] */
  EDI = (r32((uint32_t)(0x11dc7078)));
  /* 11dc2dbd sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11dc2dbf push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dc1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2dc2 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dc4 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2dc5 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dc7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dc8 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11dc2dcc call edi */
  call_ind((uint32_t)(EDI), 0x11dc2dceu);
  /* 11dc2dce mov ebp, eax */
  EBP = (EAX);
  /* 11dc2dd0 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2dd2 je 0x11dc2e06 */
  if (C.zf) goto L_11dc2e06;
  /* 11dc2dd4 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2dd5 call 0x11dc35a2 */
  push32(0x11dc2ddau); f_11dc35a2();
  /* 11dc2dda cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2ddc pop ecx */
  ECX = (pop32());
  /* 11dc2ddd mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11dc2de1 je 0x11dc2e06 */
  if (C.zf) goto L_11dc2e06;
  /* 11dc2de3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2de4 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2de5 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2de6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2de7 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11dc2deb push esi */
  push32((uint32_t)(ESI));
  /* 11dc2dec push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2ded push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2dee call edi */
  call_ind((uint32_t)(EDI), 0x11dc2df0u);
  /* 11dc2df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2df2 jne 0x11dc2e02 */
  if (!C.zf) goto L_11dc2e02;
  /* 11dc2df4 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11dc2df8 call 0x11dc34b9 */
  push32(0x11dc2dfdu); f_11dc34b9();
  /* 11dc2dfd pop ecx */
  ECX = (pop32());
  /* 11dc2dfe mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11dc2e02:;
  /* 11dc2e02 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11dc2e06:;
  /* 11dc2e06 push esi */
  push32((uint32_t)(ESI));
  /* 11dc2e07 call dword ptr [0x11dc7088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7088))), 0x11dc2e0du);
  /* 11dc2e0d mov eax, ebx */
  EAX = (EBX);
  /* 11dc2e0f jmp 0x11dc2e64 */
  goto L_11dc2e64;
L_11dc2e11:;
  /* 11dc2e11 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2e14 jne 0x11dc2e62 */
  if (!C.zf) goto L_11dc2e62;
L_11dc2e16:;
  /* 11dc2e16 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2e18 jne 0x11dc2e26 */
  if (!C.zf) goto L_11dc2e26;
  /* 11dc2e1a call dword ptr [0x11dc7074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7074))), 0x11dc2e20u);
  /* 11dc2e20 mov edi, eax */
  EDI = (EAX);
  /* 11dc2e22 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2e24 je 0x11dc2e62 */
  if (C.zf) goto L_11dc2e62;
L_11dc2e26:;
  /* 11dc2e26 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2e28 mov eax, edi */
  EAX = (EDI);
  /* 11dc2e2a je 0x11dc2e36 */
  if (C.zf) goto L_11dc2e36;
L_11dc2e2c:;
  /* 11dc2e2c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2e2d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2e2f jne 0x11dc2e2c */
  if (!C.zf) goto L_11dc2e2c;
  /* 11dc2e31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2e32 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2e34 jne 0x11dc2e2c */
  if (!C.zf) goto L_11dc2e2c;
L_11dc2e36:;
  /* 11dc2e36 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2e38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2e39 mov ebp, eax */
  EBP = (EAX);
  /* 11dc2e3b push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2e3c call 0x11dc35a2 */
  push32(0x11dc2e41u); f_11dc35a2();
  /* 11dc2e41 mov esi, eax */
  ESI = (EAX);
  /* 11dc2e43 pop ecx */
  ECX = (pop32());
  /* 11dc2e44 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2e46 jne 0x11dc2e4c */
  if (!C.zf) goto L_11dc2e4c;
  /* 11dc2e48 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dc2e4a jmp 0x11dc2e57 */
  goto L_11dc2e57;
L_11dc2e4c:;
  /* 11dc2e4c push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2e4d push edi */
  push32((uint32_t)(EDI));
  /* 11dc2e4e push esi */
  push32((uint32_t)(ESI));
  /* 11dc2e4f call 0x11dc3c40 */
  push32(0x11dc2e54u); f_11dc3c40();
  /* 11dc2e54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc2e57:;
  /* 11dc2e57 push edi */
  push32((uint32_t)(EDI));
  /* 11dc2e58 call dword ptr [0x11dc7080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7080))), 0x11dc2e5eu);
  /* 11dc2e5e mov eax, esi */
  EAX = (ESI);
  /* 11dc2e60 jmp 0x11dc2e64 */
  goto L_11dc2e64;
L_11dc2e62:;
  /* 11dc2e62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc2e64:;
  /* 11dc2e64 pop edi */
  EDI = (pop32());
  /* 11dc2e65 pop esi */
  ESI = (pop32());
  /* 11dc2e66 pop ebp */
  EBP = (pop32());
  /* 11dc2e67 pop ebx */
  EBX = (pop32());
  /* 11dc2e68 pop ecx */
  ECX = (pop32());
  /* 11dc2e69 pop ecx */
  ECX = (pop32());
  /* 11dc2e6a ret  */
  ESPCHK(0x11dc2d39u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e6b @ 0x11dc2e6b (45 bytes, 17 insns) */
void f_11dc2e6b(void) {
  FTRACE(0x11dc2e6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2e6b push esi */
  push32((uint32_t)(ESI));
  /* 11dc2e6c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc2e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2e72 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11dc2e75 call dword ptr [0x11dc706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc706c))), 0x11dc2e7bu);
  /* 11dc2e7b cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dc2e80 jne 0x11dc2e96 */
  if (!C.zf) goto L_11dc2e96;
  /* 11dc2e82 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11dc2e85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dc2e87 je 0x11dc2e96 */
  if (C.zf) goto L_11dc2e96;
  /* 11dc2e89 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2e8b mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11dc2e8e mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11dc2e90 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11dc2e93 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11dc2e96:;
  /* 11dc2e96 pop esi */
  ESI = (pop32());
  /* 11dc2e97 ret  */
  ESPCHK(0x11dc2e6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e98 @ 0x11dc2e98 (328 bytes, 115 insns) */
void f_11dc2e98(void) {
  FTRACE(0x11dc2e98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2e98 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc2e99 mov ebp, esp */
  EBP = (ESP);
  /* 11dc2e9b mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11dc2ea0 call 0x11dc4330 */
  push32(0x11dc2ea5u); f_11dc4330();
  /* 11dc2ea5 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11dc2eab push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2eac push eax */
  push32((uint32_t)(EAX));
  /* 11dc2ead mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11dc2eb7 call dword ptr [0x11dc7070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7070))), 0x11dc2ebdu);
  /* 11dc2ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2ebf je 0x11dc2edb */
  if (C.zf) goto L_11dc2edb;
  /* 11dc2ec1 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2ec8 jne 0x11dc2edb */
  if (!C.zf) goto L_11dc2edb;
  /* 11dc2eca cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2ed1 jb 0x11dc2edb */
  if (C.cf) goto L_11dc2edb;
  /* 11dc2ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc2ed5 pop eax */
  EAX = (pop32());
  /* 11dc2ed6 jmp 0x11dc2fdd */
  goto L_11dc2fdd;
L_11dc2edb:;
  /* 11dc2edb lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11dc2ee1 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11dc2ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2ee7 push 0x11dc71b8 */
  push32((uint32_t)(0x11dc71b8u));
  /* 11dc2eec call dword ptr [0x11dc7068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7068))), 0x11dc2ef2u);
  /* 11dc2ef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2ef4 je 0x11dc2fca */
  if (C.zf) goto L_11dc2fca;
  /* 11dc2efa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc2efc lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11dc2f02 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f08 je 0x11dc2f1d */
  if (C.zf) goto L_11dc2f1d;
L_11dc2f0a:;
  /* 11dc2f0a mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11dc2f0c cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f0e jl 0x11dc2f18 */
  if ((C.sf!=C.of)) goto L_11dc2f18;
  /* 11dc2f10 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f12 jg 0x11dc2f18 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc2f18;
  /* 11dc2f14 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc2f16 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11dc2f18:;
  /* 11dc2f18 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc2f19 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f1b jne 0x11dc2f0a */
  if (!C.zf) goto L_11dc2f0a;
L_11dc2f1d:;
  /* 11dc2f1d lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11dc2f23 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11dc2f25 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2f26 push 0x11dc71a0 */
  push32((uint32_t)(0x11dc71a0u));
  /* 11dc2f2b call 0x11dc42f0 */
  push32(0x11dc2f30u); f_11dc42f0();
  /* 11dc2f30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2f35 jne 0x11dc2f3f */
  if (!C.zf) goto L_11dc2f3f;
  /* 11dc2f37 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11dc2f3d jmp 0x11dc2f88 */
  goto L_11dc2f88;
L_11dc2f3f:;
  /* 11dc2f3f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11dc2f45 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11dc2f4a push eax */
  push32((uint32_t)(EAX));
  /* 11dc2f4b push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2f4c call dword ptr [0x11dc7084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7084))), 0x11dc2f52u);
  /* 11dc2f52 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f58 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11dc2f5e je 0x11dc2f73 */
  if (C.zf) goto L_11dc2f73;
L_11dc2f60:;
  /* 11dc2f60 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11dc2f62 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f64 jl 0x11dc2f6e */
  if ((C.sf!=C.of)) goto L_11dc2f6e;
  /* 11dc2f66 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f68 jg 0x11dc2f6e */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc2f6e;
  /* 11dc2f6a sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc2f6c mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11dc2f6e:;
  /* 11dc2f6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc2f6f cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f71 jne 0x11dc2f60 */
  if (!C.zf) goto L_11dc2f60;
L_11dc2f73:;
  /* 11dc2f73 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11dc2f79 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2f7a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11dc2f80 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2f81 call 0x11dc4270 */
  push32(0x11dc2f86u); f_11dc4270();
  /* 11dc2f86 pop ecx */
  ECX = (pop32());
  /* 11dc2f87 pop ecx */
  ECX = (pop32());
L_11dc2f88:;
  /* 11dc2f88 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2f8a je 0x11dc2fca */
  if (C.zf) goto L_11dc2fca;
  /* 11dc2f8c push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11dc2f8e push eax */
  push32((uint32_t)(EAX));
  /* 11dc2f8f call 0x11dc41b0 */
  push32(0x11dc2f94u); f_11dc41b0();
  /* 11dc2f94 pop ecx */
  ECX = (pop32());
  /* 11dc2f95 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2f97 pop ecx */
  ECX = (pop32());
  /* 11dc2f98 je 0x11dc2fca */
  if (C.zf) goto L_11dc2fca;
  /* 11dc2f9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc2f9b mov ecx, eax */
  ECX = (EAX);
  /* 11dc2f9d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2f9f je 0x11dc2faf */
  if (C.zf) goto L_11dc2faf;
L_11dc2fa1:;
  /* 11dc2fa1 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2fa4 jne 0x11dc2faa */
  if (!C.zf) goto L_11dc2faa;
  /* 11dc2fa6 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11dc2fa8 jmp 0x11dc2fab */
  goto L_11dc2fab;
L_11dc2faa:;
  /* 11dc2faa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11dc2fab:;
  /* 11dc2fab cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2fad jne 0x11dc2fa1 */
  if (!C.zf) goto L_11dc2fa1;
L_11dc2faf:;
  /* 11dc2faf push 0xa */
  push32((uint32_t)(0xau));
  /* 11dc2fb1 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc2fb2 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2fb3 call 0x11dc3f75 */
  push32(0x11dc2fb8u); f_11dc3f75();
  /* 11dc2fb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc2fbb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2fbe je 0x11dc2fdd */
  if (C.zf) goto L_11dc2fdd;
  /* 11dc2fc0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2fc3 je 0x11dc2fdd */
  if (C.zf) goto L_11dc2fdd;
  /* 11dc2fc5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2fc8 je 0x11dc2fdd */
  if (C.zf) goto L_11dc2fdd;
L_11dc2fca:;
  /* 11dc2fca lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11dc2fcd push eax */
  push32((uint32_t)(EAX));
  /* 11dc2fce call 0x11dc2e6b */
  push32(0x11dc2fd3u); f_11dc2e6b();
  /* 11dc2fd3 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc2fd7 pop ecx */
  ECX = (pop32());
  /* 11dc2fd8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc2fda add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dc2fdd:;
  /* 11dc2fdd pop ebx */
  EBX = (pop32());
  /* 11dc2fde leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc2fdf ret  */
  ESPCHK(0x11dc2e98u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x11dc2fe0 (93 bytes, 30 insns) */
void f_11dc2fe0(void) {
  FTRACE(0x11dc2fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc2fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc2fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc2fe4 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc2fe8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dc2fed sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11dc2ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11dc2ff1 call dword ptr [0x11dc705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc705c))), 0x11dc2ff7u);
  /* 11dc2ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc2ff9 mov dword ptr [0x11dcb608], eax */
  w32((uint32_t)(0x11dcb608), (EAX));
  /* 11dc2ffe je 0x11dc3036 */
  if (C.zf) goto L_11dc3036;
  /* 11dc3000 call 0x11dc2e98 */
  push32(0x11dc3005u); f_11dc2e98();
  /* 11dc3005 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3008 mov dword ptr [0x11dcb60c], eax */
  w32((uint32_t)(0x11dcb60c), (EAX));
  /* 11dc300d jne 0x11dc301c */
  if (!C.zf) goto L_11dc301c;
  /* 11dc300f push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11dc3014 call 0x11dc435f */
  push32(0x11dc3019u); f_11dc435f();
  /* 11dc3019 pop ecx */
  ECX = (pop32());
  /* 11dc301a jmp 0x11dc3026 */
  goto L_11dc3026;
L_11dc301c:;
  /* 11dc301c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc301f jne 0x11dc3039 */
  if (!C.zf) goto L_11dc3039;
  /* 11dc3021 call 0x11dc4bb0 */
  push32(0x11dc3026u); f_11dc4bb0();
L_11dc3026:;
  /* 11dc3026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3028 jne 0x11dc3039 */
  if (!C.zf) goto L_11dc3039;
  /* 11dc302a push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc3030 call dword ptr [0x11dc7060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7060))), 0x11dc3036u);
L_11dc3036:;
  /* 11dc3036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3038 ret  */
  ESPCHK(0x11dc2fe0u, _esp0);
  ESP += 4; return;
L_11dc3039:;
  /* 11dc3039 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc303b pop eax */
  EAX = (pop32());
  /* 11dc303c ret  */
  ESPCHK(0x11dc2fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000303d @ 0x11dc303d (168 bytes, 56 insns) */
void f_11dc303d(void) {
  FTRACE(0x11dc303du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc303d mov eax, dword ptr [0x11dcb60c] */
  EAX = (r32((uint32_t)(0x11dcb60c)));
  /* 11dc3042 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3043 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3046 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3047 jne 0x11dc30af */
  if (!C.zf) goto L_11dc30af;
  /* 11dc3049 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc304a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc304c cmp dword ptr [0x11dcb3c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb3c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3052 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc3053 mov ebp, dword ptr [0x11dc7054] */
  EBP = (r32((uint32_t)(0x11dc7054)));
  /* 11dc3059 jle 0x11dc309b */
  if ((C.zf||C.sf!=C.of)) goto L_11dc309b;
  /* 11dc305b mov eax, dword ptr [0x11dcb3cc] */
  EAX = (r32((uint32_t)(0x11dcb3cc)));
  /* 11dc3060 mov edi, dword ptr [0x11dc7064] */
  EDI = (r32((uint32_t)(0x11dc7064)));
  /* 11dc3066 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11dc3069:;
  /* 11dc3069 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11dc306e push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11dc3073 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc3075 call edi */
  call_ind((uint32_t)(EDI), 0x11dc3077u);
  /* 11dc3077 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dc307c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc307e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc3080 call edi */
  call_ind((uint32_t)(EDI), 0x11dc3082u);
  /* 11dc3082 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11dc3085 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3087 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc308d call ebp */
  call_ind((uint32_t)(EBP), 0x11dc308fu);
  /* 11dc308f add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3092 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc3093 cmp ebx, dword ptr [0x11dcb3c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dcb3c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3099 jl 0x11dc3069 */
  if ((C.sf!=C.of)) goto L_11dc3069;
L_11dc309b:;
  /* 11dc309b push dword ptr [0x11dcb3cc] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb3cc))));
  /* 11dc30a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc30a3 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc30a9 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc30abu);
  /* 11dc30ab pop ebp */
  EBP = (pop32());
  /* 11dc30ac pop ebx */
  EBX = (pop32());
  /* 11dc30ad jmp 0x11dc30d6 */
  goto L_11dc30d6;
L_11dc30af:;
  /* 11dc30af cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc30b2 jne 0x11dc30d6 */
  if (!C.zf) goto L_11dc30d6;
  /* 11dc30b4 mov edi, 0x11dc8700 */
  EDI = (0x11dc8700u);
  /* 11dc30b9 mov esi, edi */
  ESI = (EDI);
L_11dc30bb:;
  /* 11dc30bb mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11dc30be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc30c0 je 0x11dc30d0 */
  if (C.zf) goto L_11dc30d0;
  /* 11dc30c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dc30c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc30c9 push eax */
  push32((uint32_t)(EAX));
  /* 11dc30ca call dword ptr [0x11dc7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7064))), 0x11dc30d0u);
L_11dc30d0:;
  /* 11dc30d0 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11dc30d2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc30d4 jne 0x11dc30bb */
  if (!C.zf) goto L_11dc30bb;
L_11dc30d6:;
  /* 11dc30d6 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc30dc call dword ptr [0x11dc7060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7060))), 0x11dc30e2u);
  /* 11dc30e2 pop edi */
  EDI = (pop32());
  /* 11dc30e3 pop esi */
  ESI = (pop32());
  /* 11dc30e4 ret  */
  ESPCHK(0x11dc303du, _esp0);
  ESP += 4; return;
}

/* FUN_100030e5 @ 0x11dc30e5 (57 bytes, 18 insns) */
void f_11dc30e5(void) {
  FTRACE(0x11dc30e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc30e5 mov eax, dword ptr [0x11dcb064] */
  EAX = (r32((uint32_t)(0x11dcb064)));
  /* 11dc30ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc30ed je 0x11dc30fc */
  if (C.zf) goto L_11dc30fc;
  /* 11dc30ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc30f1 jne 0x11dc311d */
  if (!C.zf) goto L_11dc311d;
  /* 11dc30f3 cmp dword ptr [0x11dcb068], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb068))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc30fa jne 0x11dc311d */
  if (!C.zf) goto L_11dc311d;
L_11dc30fc:;
  /* 11dc30fc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11dc3101 call 0x11dc311e */
  push32(0x11dc3106u); f_11dc311e();
  /* 11dc3106 mov eax, dword ptr [0x11dcb1b8] */
  EAX = (r32((uint32_t)(0x11dcb1b8)));
  /* 11dc310b pop ecx */
  ECX = (pop32());
  /* 11dc310c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc310e je 0x11dc3112 */
  if (C.zf) goto L_11dc3112;
  /* 11dc3110 call eax */
  call_ind((uint32_t)(EAX), 0x11dc3112u);
L_11dc3112:;
  /* 11dc3112 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11dc3117 call 0x11dc311e */
  push32(0x11dc311cu); f_11dc311e();
  /* 11dc311c pop ecx */
  ECX = (pop32());
L_11dc311d:;
  /* 11dc311d ret  */
  ESPCHK(0x11dc30e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000311e @ 0x11dc311e (339 bytes, 100 insns) */
void f_11dc311e(void) {
  FTRACE(0x11dc311eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc311e push ebp */
  push32((uint32_t)(EBP));
  /* 11dc311f mov ebp, esp */
  EBP = (ESP);
  /* 11dc3121 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc312a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc312c mov eax, 0x11dc8428 */
  EAX = (0x11dc8428u);
L_11dc3131:;
  /* 11dc3131 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3133 je 0x11dc3140 */
  if (C.zf) goto L_11dc3140;
  /* 11dc3135 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3138 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc3139 cmp eax, 0x11dc84b8 */
  { uint32_t _a=(EAX),_b=(0x11dc84b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc313e jl 0x11dc3131 */
  if ((C.sf!=C.of)) goto L_11dc3131;
L_11dc3140:;
  /* 11dc3140 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3141 mov esi, ecx */
  ESI = (ECX);
  /* 11dc3143 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11dc3146 cmp edx, dword ptr [esi + 0x11dc8428] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11dc8428))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc314c jne 0x11dc326e */
  if (!C.zf) goto L_11dc326e;
  /* 11dc3152 mov eax, dword ptr [0x11dcb064] */
  EAX = (r32((uint32_t)(0x11dcb064)));
  /* 11dc3157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc315a je 0x11dc3248 */
  if (C.zf) goto L_11dc3248;
  /* 11dc3160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3162 jne 0x11dc3171 */
  if (!C.zf) goto L_11dc3171;
  /* 11dc3164 cmp dword ptr [0x11dcb068], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb068))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc316b je 0x11dc3248 */
  if (C.zf) goto L_11dc3248;
L_11dc3171:;
  /* 11dc3171 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3177 je 0x11dc326e */
  if (C.zf) goto L_11dc326e;
  /* 11dc317d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dc3183 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11dc3188 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3189 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc318b call dword ptr [0x11dc7084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7084))), 0x11dc3191u);
  /* 11dc3191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3193 jne 0x11dc31a8 */
  if (!C.zf) goto L_11dc31a8;
  /* 11dc3195 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dc319b push 0x11dc74a8 */
  push32((uint32_t)(0x11dc74a8u));
  /* 11dc31a0 push eax */
  push32((uint32_t)(EAX));
  /* 11dc31a1 call 0x11dc36e0 */
  push32(0x11dc31a6u); f_11dc36e0();
  /* 11dc31a6 pop ecx */
  ECX = (pop32());
  /* 11dc31a7 pop ecx */
  ECX = (pop32());
L_11dc31a8:;
  /* 11dc31a8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dc31ae push edi */
  push32((uint32_t)(EDI));
  /* 11dc31af push eax */
  push32((uint32_t)(EAX));
  /* 11dc31b0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11dc31b6 call 0x11dc37d0 */
  push32(0x11dc31bbu); f_11dc37d0();
  /* 11dc31bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc31bc pop ecx */
  ECX = (pop32());
  /* 11dc31bd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc31c0 jbe 0x11dc31eb */
  if ((C.cf||C.zf)) goto L_11dc31eb;
  /* 11dc31c2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dc31c8 push eax */
  push32((uint32_t)(EAX));
  /* 11dc31c9 call 0x11dc37d0 */
  push32(0x11dc31ceu); f_11dc37d0();
  /* 11dc31ce mov edi, eax */
  EDI = (EAX);
  /* 11dc31d0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11dc31d6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc31d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc31db add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc31dd push 0x11dc74a4 */
  push32((uint32_t)(0x11dc74a4u));
  /* 11dc31e2 push edi */
  push32((uint32_t)(EDI));
  /* 11dc31e3 call 0x11dc5260 */
  push32(0x11dc31e8u); f_11dc5260();
  /* 11dc31e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc31eb:;
  /* 11dc31eb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dc31f1 push 0x11dc7488 */
  push32((uint32_t)(0x11dc7488u));
  /* 11dc31f6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc31f7 call 0x11dc36e0 */
  push32(0x11dc31fcu); f_11dc36e0();
  /* 11dc31fc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dc3202 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3203 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3204 call 0x11dc36f0 */
  push32(0x11dc3209u); f_11dc36f0();
  /* 11dc3209 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dc320f push 0x11dc7484 */
  push32((uint32_t)(0x11dc7484u));
  /* 11dc3214 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3215 call 0x11dc36f0 */
  push32(0x11dc321au); f_11dc36f0();
  /* 11dc321a push dword ptr [esi + 0x11dc842c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11dc842c))));
  /* 11dc3220 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dc3226 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3227 call 0x11dc36f0 */
  push32(0x11dc322cu); f_11dc36f0();
  /* 11dc322c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11dc3231 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11dc3237 push 0x11dc745c */
  push32((uint32_t)(0x11dc745cu));
  /* 11dc323c push eax */
  push32((uint32_t)(EAX));
  /* 11dc323d call 0x11dc51d4 */
  push32(0x11dc3242u); f_11dc51d4();
  /* 11dc3242 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3245 pop edi */
  EDI = (pop32());
  /* 11dc3246 jmp 0x11dc326e */
  goto L_11dc326e;
L_11dc3248:;
  /* 11dc3248 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11dc324b lea esi, [esi + 0x11dc842c] */
  ESI = ((uint32_t)(ESI + 0x11dc842c));
  /* 11dc3251 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3253 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3254 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc3256 call 0x11dc37d0 */
  push32(0x11dc325bu); f_11dc37d0();
  /* 11dc325b pop ecx */
  ECX = (pop32());
  /* 11dc325c push eax */
  push32((uint32_t)(EAX));
  /* 11dc325d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc325f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11dc3261 call dword ptr [0x11dc70b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc70b0))), 0x11dc3267u);
  /* 11dc3267 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3268 call dword ptr [0x11dc7050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7050))), 0x11dc326eu);
L_11dc326e:;
  /* 11dc326e pop esi */
  ESI = (pop32());
  /* 11dc326f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3270 ret  */
  ESPCHK(0x11dc311eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003271 @ 0x11dc3271 (41 bytes, 12 insns) */
void f_11dc3271(void) {
  FTRACE(0x11dc3271u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3271 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3272 mov esi, dword ptr [0x11dc7058] */
  ESI = (r32((uint32_t)(0x11dc7058)));
  /* 11dc3278 push dword ptr [0x11dc84fc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84fc))));
  /* 11dc327e call esi */
  call_ind((uint32_t)(ESI), 0x11dc3280u);
  /* 11dc3280 push dword ptr [0x11dc84ec] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84ec))));
  /* 11dc3286 call esi */
  call_ind((uint32_t)(ESI), 0x11dc3288u);
  /* 11dc3288 push dword ptr [0x11dc84dc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84dc))));
  /* 11dc328e call esi */
  call_ind((uint32_t)(ESI), 0x11dc3290u);
  /* 11dc3290 push dword ptr [0x11dc84bc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84bc))));
  /* 11dc3296 call esi */
  call_ind((uint32_t)(ESI), 0x11dc3298u);
  /* 11dc3298 pop esi */
  ESI = (pop32());
  /* 11dc3299 ret  */
  ESPCHK(0x11dc3271u, _esp0);
  ESP += 4; return;
}

/* FUN_1000329a @ 0x11dc329a (108 bytes, 34 insns) */
void f_11dc329a(void) {
  FTRACE(0x11dc329au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc329a push esi */
  push32((uint32_t)(ESI));
  /* 11dc329b push edi */
  push32((uint32_t)(EDI));
  /* 11dc329c mov edi, dword ptr [0x11dc7094] */
  EDI = (r32((uint32_t)(0x11dc7094)));
  /* 11dc32a2 mov esi, 0x11dc84b8 */
  ESI = (0x11dc84b8u);
L_11dc32a7:;
  /* 11dc32a7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc32a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc32ab je 0x11dc32d8 */
  if (C.zf) goto L_11dc32d8;
  /* 11dc32ad cmp esi, 0x11dc84fc */
  { uint32_t _a=(ESI),_b=(0x11dc84fcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc32b3 je 0x11dc32d8 */
  if (C.zf) goto L_11dc32d8;
  /* 11dc32b5 cmp esi, 0x11dc84ec */
  { uint32_t _a=(ESI),_b=(0x11dc84ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc32bb je 0x11dc32d8 */
  if (C.zf) goto L_11dc32d8;
  /* 11dc32bd cmp esi, 0x11dc84dc */
  { uint32_t _a=(ESI),_b=(0x11dc84dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc32c3 je 0x11dc32d8 */
  if (C.zf) goto L_11dc32d8;
  /* 11dc32c5 cmp esi, 0x11dc84bc */
  { uint32_t _a=(ESI),_b=(0x11dc84bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc32cb je 0x11dc32d8 */
  if (C.zf) goto L_11dc32d8;
  /* 11dc32cd push eax */
  push32((uint32_t)(EAX));
  /* 11dc32ce call edi */
  call_ind((uint32_t)(EDI), 0x11dc32d0u);
  /* 11dc32d0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc32d2 call 0x11dc34b9 */
  push32(0x11dc32d7u); f_11dc34b9();
  /* 11dc32d7 pop ecx */
  ECX = (pop32());
L_11dc32d8:;
  /* 11dc32d8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc32db cmp esi, 0x11dc8578 */
  { uint32_t _a=(ESI),_b=(0x11dc8578u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc32e1 jl 0x11dc32a7 */
  if ((C.sf!=C.of)) goto L_11dc32a7;
  /* 11dc32e3 push dword ptr [0x11dc84dc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84dc))));
  /* 11dc32e9 call edi */
  call_ind((uint32_t)(EDI), 0x11dc32ebu);
  /* 11dc32eb push dword ptr [0x11dc84ec] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84ec))));
  /* 11dc32f1 call edi */
  call_ind((uint32_t)(EDI), 0x11dc32f3u);
  /* 11dc32f3 push dword ptr [0x11dc84fc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84fc))));
  /* 11dc32f9 call edi */
  call_ind((uint32_t)(EDI), 0x11dc32fbu);
  /* 11dc32fb push dword ptr [0x11dc84bc] */
  push32((uint32_t)(r32((uint32_t)(0x11dc84bc))));
  /* 11dc3301 call edi */
  call_ind((uint32_t)(EDI), 0x11dc3303u);
  /* 11dc3303 pop edi */
  EDI = (pop32());
  /* 11dc3304 pop esi */
  ESI = (pop32());
  /* 11dc3305 ret  */
  ESPCHK(0x11dc329au, _esp0);
  ESP += 4; return;
}

/* FUN_10003306 @ 0x11dc3306 (97 bytes, 37 insns) */
void f_11dc3306(void) {
  FTRACE(0x11dc3306u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3306 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc3307 mov ebp, esp */
  EBP = (ESP);
  /* 11dc3309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc330c push esi */
  push32((uint32_t)(ESI));
  /* 11dc330d cmp dword ptr [eax*4 + 0x11dc84b8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11dc84b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3315 lea esi, [eax*4 + 0x11dc84b8] */
  ESI = ((uint32_t)(EAX*4 + 0x11dc84b8));
  /* 11dc331c jne 0x11dc335c */
  if (!C.zf) goto L_11dc335c;
  /* 11dc331e push edi */
  push32((uint32_t)(EDI));
  /* 11dc331f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11dc3321 call 0x11dc35a2 */
  push32(0x11dc3326u); f_11dc35a2();
  /* 11dc3326 mov edi, eax */
  EDI = (EAX);
  /* 11dc3328 pop ecx */
  ECX = (pop32());
  /* 11dc3329 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dc332b jne 0x11dc3335 */
  if (!C.zf) goto L_11dc3335;
  /* 11dc332d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dc332f call 0x11dc2546 */
  push32(0x11dc3334u); f_11dc2546();
  /* 11dc3334 pop ecx */
  ECX = (pop32());
L_11dc3335:;
  /* 11dc3335 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dc3337 call 0x11dc3306 */
  push32(0x11dc333cu); f_11dc3306();
  /* 11dc333c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc333f pop ecx */
  ECX = (pop32());
  /* 11dc3340 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3341 jne 0x11dc334d */
  if (!C.zf) goto L_11dc334d;
  /* 11dc3343 call dword ptr [0x11dc7058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7058))), 0x11dc3349u);
  /* 11dc3349 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dc334b jmp 0x11dc3353 */
  goto L_11dc3353;
L_11dc334d:;
  /* 11dc334d call 0x11dc34b9 */
  push32(0x11dc3352u); f_11dc34b9();
  /* 11dc3352 pop ecx */
  ECX = (pop32());
L_11dc3353:;
  /* 11dc3353 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dc3355 call 0x11dc3367 */
  push32(0x11dc335au); f_11dc3367();
  /* 11dc335a pop ecx */
  ECX = (pop32());
  /* 11dc335b pop edi */
  EDI = (pop32());
L_11dc335c:;
  /* 11dc335c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11dc335e call dword ptr [0x11dc704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc704c))), 0x11dc3364u);
  /* 11dc3364 pop esi */
  ESI = (pop32());
  /* 11dc3365 pop ebp */
  EBP = (pop32());
  /* 11dc3366 ret  */
  ESPCHK(0x11dc3306u, _esp0);
  ESP += 4; return;
}

/* FUN_10003367 @ 0x11dc3367 (21 bytes, 7 insns) */
void f_11dc3367(void) {
  FTRACE(0x11dc3367u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3367 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc3368 mov ebp, esp */
  EBP = (ESP);
  /* 11dc336a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc336d push dword ptr [eax*4 + 0x11dc84b8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11dc84b8))));
  /* 11dc3374 call dword ptr [0x11dc7048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7048))), 0x11dc337au);
  /* 11dc337a pop ebp */
  EBP = (pop32());
  /* 11dc337b ret  */
  ESPCHK(0x11dc3367u, _esp0);
  ESP += 4; return;
}

/* FUN_1000337c @ 0x11dc337c (289 bytes, 98 insns) */
void f_11dc337c(void) {
  FTRACE(0x11dc337cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc337c push ebp */
  push32((uint32_t)(EBP));
  /* 11dc337d mov ebp, esp */
  EBP = (ESP);
  /* 11dc337f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dc3381 push 0x11dc74c0 */
  push32((uint32_t)(0x11dc74c0u));
  /* 11dc3386 push 0x11dc54d0 */
  push32((uint32_t)(0x11dc54d0u));
  /* 11dc338b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dc3391 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3392 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dc3399 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc339c push ebx */
  push32((uint32_t)(EBX));
  /* 11dc339d push esi */
  push32((uint32_t)(ESI));
  /* 11dc339e push edi */
  push32((uint32_t)(EDI));
  /* 11dc339f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc33a2 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dc33a6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11dc33a9 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11dc33ac cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc33af ja 0x11dc33c5 */
  if ((!C.cf&&!C.zf)) goto L_11dc33c5;
  /* 11dc33b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc33b3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc33b5 jne 0x11dc33ba */
  if (!C.zf) goto L_11dc33ba;
  /* 11dc33b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc33b9 pop esi */
  ESI = (pop32());
L_11dc33ba:;
  /* 11dc33ba add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc33bd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11dc33c0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11dc33c3 jmp 0x11dc33c7 */
  goto L_11dc33c7;
L_11dc33c5:;
  /* 11dc33c5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dc33c7:;
  /* 11dc33c7 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11dc33ca cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc33cd ja 0x11dc347b */
  if ((!C.cf&&!C.zf)) goto L_11dc347b;
  /* 11dc33d3 mov eax, dword ptr [0x11dcb60c] */
  EAX = (r32((uint32_t)(0x11dcb60c)));
  /* 11dc33d8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc33db jne 0x11dc341e */
  if (!C.zf) goto L_11dc341e;
  /* 11dc33dd mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dc33e0 cmp edi, dword ptr [0x11dcb3d0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11dcb3d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc33e6 ja 0x11dc3464 */
  if ((!C.cf&&!C.zf)) goto L_11dc3464;
  /* 11dc33e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc33ea call 0x11dc3306 */
  push32(0x11dc33efu); f_11dc3306();
  /* 11dc33ef pop ecx */
  ECX = (pop32());
  /* 11dc33f0 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11dc33f3 push edi */
  push32((uint32_t)(EDI));
  /* 11dc33f4 call 0x11dc46fb */
  push32(0x11dc33f9u); f_11dc46fb();
  /* 11dc33f9 pop ecx */
  ECX = (pop32());
  /* 11dc33fa mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dc33fd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc3401 call 0x11dc3415 */
  push32(0x11dc3406u); f_11dc3415();
  /* 11dc3406 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3409 je 0x11dc3469 */
  if (C.zf) goto L_11dc3469;
  /* 11dc340b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11dc340e jmp 0x11dc3458 */
  goto L_11dc3458;
  /* 11dc3410 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc3412 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc3415 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3417 call 0x11dc3367 */
  push32(0x11dc341cu); f_11dc3367();
  /* 11dc341c pop ecx */
  ECX = (pop32());
  /* 11dc341d ret  */
  ESPCHK(0x11dc337cu, _esp0);
  ESP += 4; return;
L_11dc341e:;
  /* 11dc341e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3421 jne 0x11dc3464 */
  if (!C.zf) goto L_11dc3464;
  /* 11dc3423 cmp esi, dword ptr [0x11dca724] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dca724))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3429 ja 0x11dc3464 */
  if ((!C.cf&&!C.zf)) goto L_11dc3464;
  /* 11dc342b push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc342d call 0x11dc3306 */
  push32(0x11dc3432u); f_11dc3306();
  /* 11dc3432 pop ecx */
  ECX = (pop32());
  /* 11dc3433 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dc343a mov eax, esi */
  EAX = (ESI);
  /* 11dc343c shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11dc343f push eax */
  push32((uint32_t)(EAX));
  /* 11dc3440 call 0x11dc4ea8 */
  push32(0x11dc3445u); f_11dc4ea8();
  /* 11dc3445 pop ecx */
  ECX = (pop32());
  /* 11dc3446 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dc3449 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc344d call 0x11dc349e */
  push32(0x11dc3452u); f_11dc349e();
  /* 11dc3452 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3455 je 0x11dc3469 */
  if (C.zf) goto L_11dc3469;
  /* 11dc3457 push esi */
  push32((uint32_t)(ESI));
L_11dc3458:;
  /* 11dc3458 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc3459 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11dc345c call 0x11dc5380 */
  push32(0x11dc3461u); f_11dc5380();
  /* 11dc3461 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc3464:;
  /* 11dc3464 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3467 jne 0x11dc34a7 */
  if (!C.zf) { jmp_ind(0x11dc34a7u); return; }
L_11dc3469:;
  /* 11dc3469 push esi */
  push32((uint32_t)(ESI));
  /* 11dc346a push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc346c push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc3472 call dword ptr [0x11dc7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7040))), 0x11dc3478u);
  /* 11dc3478 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11dc347b:;
  /* 11dc347b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc347e jne 0x11dc34a7 */
  if (!C.zf) { jmp_ind(0x11dc34a7u); return; }
  /* 11dc3480 cmp dword ptr [0x11dcb238], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb238))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3486 je 0x11dc34a7 */
  if (C.zf) { jmp_ind(0x11dc34a7u); return; }
  /* 11dc3488 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3489 call 0x11dc535e */
  push32(0x11dc348eu); f_11dc535e();
  /* 11dc348e pop ecx */
  ECX = (pop32());
  /* 11dc348f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3491 jne 0x11dc33c7 */
  if (!C.zf) goto L_11dc33c7;
  /* 11dc3497 jmp 0x11dc34aa */
  jmp_ind(0x11dc34aau); return;
  /* 11dc3499 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10003415 @ 0x11dc3415 (9 bytes, 4 insns) */
void f_11dc3415(void) {
  FTRACE(0x11dc3415u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3415 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3417 call 0x11dc3367 */
  push32(0x11dc341cu); f_11dc3367();
  /* 11dc341c pop ecx */
  ECX = (pop32());
  /* 11dc341d ret  */
  ESPCHK(0x11dc3415u, _esp0);
  ESP += 4; return;
}

/* FUN_1000349e @ 0x11dc349e (9 bytes, 4 insns) */
void f_11dc349e(void) {
  FTRACE(0x11dc349eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc349e push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc34a0 call 0x11dc3367 */
  push32(0x11dc34a5u); f_11dc3367();
  /* 11dc34a5 pop ecx */
  ECX = (pop32());
  /* 11dc34a6 ret  */
  ESPCHK(0x11dc349eu, _esp0);
  ESP += 4; return;
}

/* FUN_100034b9 @ 0x11dc34b9 (215 bytes, 76 insns) */
void f_11dc34b9(void) {
  FTRACE(0x11dc34b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc34b9 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc34ba mov ebp, esp */
  EBP = (ESP);
  /* 11dc34bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dc34be push 0x11dc74d8 */
  push32((uint32_t)(0x11dc74d8u));
  /* 11dc34c3 push 0x11dc54d0 */
  push32((uint32_t)(0x11dc54d0u));
  /* 11dc34c8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dc34ce push eax */
  push32((uint32_t)(EAX));
  /* 11dc34cf mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dc34d6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc34d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc34da push esi */
  push32((uint32_t)(ESI));
  /* 11dc34db push edi */
  push32((uint32_t)(EDI));
  /* 11dc34dc mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc34df test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc34e1 je 0x11dc3593 */
  if (C.zf) { jmp_ind(0x11dc3593u); return; }
  /* 11dc34e7 mov eax, dword ptr [0x11dcb60c] */
  EAX = (r32((uint32_t)(0x11dcb60c)));
  /* 11dc34ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc34ef jne 0x11dc352c */
  if (!C.zf) goto L_11dc352c;
  /* 11dc34f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc34f3 call 0x11dc3306 */
  push32(0x11dc34f8u); f_11dc3306();
  /* 11dc34f8 pop ecx */
  ECX = (pop32());
  /* 11dc34f9 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc34fd push esi */
  push32((uint32_t)(ESI));
  /* 11dc34fe call 0x11dc43a7 */
  push32(0x11dc3503u); f_11dc43a7();
  /* 11dc3503 pop ecx */
  ECX = (pop32());
  /* 11dc3504 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11dc3507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3509 je 0x11dc3514 */
  if (C.zf) goto L_11dc3514;
  /* 11dc350b push esi */
  push32((uint32_t)(ESI));
  /* 11dc350c push eax */
  push32((uint32_t)(EAX));
  /* 11dc350d call 0x11dc43d2 */
  push32(0x11dc3512u); f_11dc43d2();
  /* 11dc3512 pop ecx */
  ECX = (pop32());
  /* 11dc3513 pop ecx */
  ECX = (pop32());
L_11dc3514:;
  /* 11dc3514 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc3518 call 0x11dc3523 */
  push32(0x11dc351du); f_11dc3523();
  /* 11dc351d cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3521 jmp 0x11dc3574 */
  goto L_11dc3574;
  /* 11dc3523 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3525 call 0x11dc3367 */
  push32(0x11dc352au); f_11dc3367();
  /* 11dc352a pop ecx */
  ECX = (pop32());
  /* 11dc352b ret  */
  ESPCHK(0x11dc34b9u, _esp0);
  ESP += 4; return;
L_11dc352c:;
  /* 11dc352c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc352f jne 0x11dc3584 */
  if (!C.zf) goto L_11dc3584;
  /* 11dc3531 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3533 call 0x11dc3306 */
  push32(0x11dc3538u); f_11dc3306();
  /* 11dc3538 pop ecx */
  ECX = (pop32());
  /* 11dc3539 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dc3540 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11dc3543 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3544 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11dc3547 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3548 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3549 call 0x11dc4e0c */
  push32(0x11dc354eu); f_11dc4e0c();
  /* 11dc354e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3551 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dc3554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3556 je 0x11dc3567 */
  if (C.zf) goto L_11dc3567;
  /* 11dc3558 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3559 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11dc355c push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11dc355f call 0x11dc4e63 */
  push32(0x11dc3564u); f_11dc4e63();
  /* 11dc3564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc3567:;
  /* 11dc3567 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc356b call 0x11dc357b */
  push32(0x11dc3570u); f_11dc357b();
  /* 11dc3570 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dc3574:;
  /* 11dc3574 jne 0x11dc3593 */
  if (!C.zf) { jmp_ind(0x11dc3593u); return; }
  /* 11dc3576 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc3579 jmp 0x11dc3585 */
  goto L_11dc3585;
  /* 11dc357b push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc357d call 0x11dc3367 */
  push32(0x11dc3582u); f_11dc3367();
  /* 11dc3582 pop ecx */
  ECX = (pop32());
  /* 11dc3583 ret  */
  ESPCHK(0x11dc34b9u, _esp0);
  ESP += 4; return;
L_11dc3584:;
  /* 11dc3584 push esi */
  push32((uint32_t)(ESI));
L_11dc3585:;
  /* 11dc3585 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3587 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc358f push esp */
  push32((uint32_t)(ESP));
}

/* FUN_10003523 @ 0x11dc3523 (9 bytes, 4 insns) */
void f_11dc3523(void) {
  FTRACE(0x11dc3523u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3523 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3525 call 0x11dc3367 */
  push32(0x11dc352au); f_11dc3367();
  /* 11dc352a pop ecx */
  ECX = (pop32());
  /* 11dc352b ret  */
  ESPCHK(0x11dc3523u, _esp0);
  ESP += 4; return;
}

/* FUN_1000357b @ 0x11dc357b (9 bytes, 4 insns) */
void f_11dc357b(void) {
  FTRACE(0x11dc357bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc357b push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc357d call 0x11dc3367 */
  push32(0x11dc3582u); f_11dc3367();
  /* 11dc3582 pop ecx */
  ECX = (pop32());
  /* 11dc3583 ret  */
  ESPCHK(0x11dc357bu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11dc35a2 (18 bytes, 6 insns) */
void f_11dc35a2(void) {
  FTRACE(0x11dc35a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc35a2 push dword ptr [0x11dcb238] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb238))));
  /* 11dc35a8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11dc35ac call 0x11dc35b4 */
  push32(0x11dc35b1u); f_11dc35b4();
  /* 11dc35b1 pop ecx */
  ECX = (pop32());
  /* 11dc35b2 pop ecx */
  ECX = (pop32());
  /* 11dc35b3 ret  */
  ESPCHK(0x11dc35a2u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11dc35b4 (44 bytes, 16 insns) */
void f_11dc35b4(void) {
  FTRACE(0x11dc35b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc35b4 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc35b9 ja 0x11dc35dd */
  if ((!C.cf&&!C.zf)) goto L_11dc35dd;
L_11dc35bb:;
  /* 11dc35bb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dc35bf call 0x11dc35e0 */
  push32(0x11dc35c4u); f_11dc35e0();
  /* 11dc35c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc35c6 pop ecx */
  ECX = (pop32());
  /* 11dc35c7 jne 0x11dc35df */
  if (!C.zf) goto L_11dc35df;
  /* 11dc35c9 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc35cd je 0x11dc35df */
  if (C.zf) goto L_11dc35df;
  /* 11dc35cf push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dc35d3 call 0x11dc535e */
  push32(0x11dc35d8u); f_11dc535e();
  /* 11dc35d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc35da pop ecx */
  ECX = (pop32());
  /* 11dc35db jne 0x11dc35bb */
  if (!C.zf) goto L_11dc35bb;
L_11dc35dd:;
  /* 11dc35dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc35df:;
  /* 11dc35df ret  */
  ESPCHK(0x11dc35b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x11dc35e0 (231 bytes, 81 insns) */
void f_11dc35e0(void) {
  FTRACE(0x11dc35e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc35e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc35e1 mov ebp, esp */
  EBP = (ESP);
  /* 11dc35e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dc35e5 push 0x11dc74f0 */
  push32((uint32_t)(0x11dc74f0u));
  /* 11dc35ea push 0x11dc54d0 */
  push32((uint32_t)(0x11dc54d0u));
  /* 11dc35ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dc35f5 push eax */
  push32((uint32_t)(EAX));
  /* 11dc35f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dc35fd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3600 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc3601 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3602 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3603 mov eax, dword ptr [0x11dcb60c] */
  EAX = (r32((uint32_t)(0x11dcb60c)));
  /* 11dc3608 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc360b jne 0x11dc3650 */
  if (!C.zf) goto L_11dc3650;
  /* 11dc360d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3610 cmp esi, dword ptr [0x11dcb3d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dcb3d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3616 ja 0x11dc36af */
  if ((!C.cf&&!C.zf)) goto L_11dc36af;
  /* 11dc361c push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc361e call 0x11dc3306 */
  push32(0x11dc3623u); f_11dc3306();
  /* 11dc3623 pop ecx */
  ECX = (pop32());
  /* 11dc3624 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc3628 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3629 call 0x11dc46fb */
  push32(0x11dc362eu); f_11dc46fb();
  /* 11dc362e pop ecx */
  ECX = (pop32());
  /* 11dc362f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11dc3632 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc3636 call 0x11dc3647 */
  push32(0x11dc363bu); f_11dc3647();
  /* 11dc363b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dc363e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3640 je 0x11dc36af */
  if (C.zf) goto L_11dc36af;
  /* 11dc3642 jmp 0x11dc36cd */
  jmp_ind(0x11dc36cdu); return;
  /* 11dc3647 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3649 call 0x11dc3367 */
  push32(0x11dc364eu); f_11dc3367();
  /* 11dc364e pop ecx */
  ECX = (pop32());
  /* 11dc364f ret  */
  ESPCHK(0x11dc35e0u, _esp0);
  ESP += 4; return;
L_11dc3650:;
  /* 11dc3650 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3653 jne 0x11dc36af */
  if (!C.zf) goto L_11dc36af;
  /* 11dc3655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc365a je 0x11dc3664 */
  if (C.zf) goto L_11dc3664;
  /* 11dc365c lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11dc365f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11dc3662 jmp 0x11dc3667 */
  goto L_11dc3667;
L_11dc3664:;
  /* 11dc3664 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dc3666 pop esi */
  ESI = (pop32());
L_11dc3667:;
  /* 11dc3667 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11dc366a cmp esi, dword ptr [0x11dca724] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dca724))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3670 ja 0x11dc36a0 */
  if ((!C.cf&&!C.zf)) goto L_11dc36a0;
  /* 11dc3672 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3674 call 0x11dc3306 */
  push32(0x11dc3679u); f_11dc3306();
  /* 11dc3679 pop ecx */
  ECX = (pop32());
  /* 11dc367a mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dc3681 mov eax, esi */
  EAX = (ESI);
  /* 11dc3683 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11dc3686 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3687 call 0x11dc4ea8 */
  push32(0x11dc368cu); f_11dc4ea8();
  /* 11dc368c pop ecx */
  ECX = (pop32());
  /* 11dc368d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11dc3690 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc3694 call 0x11dc36a6 */
  push32(0x11dc3699u); f_11dc36a6();
  /* 11dc3699 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dc369c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc369e jne 0x11dc36cd */
  if (!C.zf) { jmp_ind(0x11dc36cdu); return; }
L_11dc36a0:;
  /* 11dc36a0 push esi */
  push32((uint32_t)(ESI));
  /* 11dc36a1 jmp 0x11dc36bf */
  goto L_11dc36bf;
  /* 11dc36a3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc36a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc36a8 call 0x11dc3367 */
  push32(0x11dc36adu); f_11dc3367();
  /* 11dc36ad pop ecx */
  ECX = (pop32());
  /* 11dc36ae ret  */
  ESPCHK(0x11dc35e0u, _esp0);
  ESP += 4; return;
L_11dc36af:;
  /* 11dc36af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc36b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc36b4 jne 0x11dc36b9 */
  if (!C.zf) goto L_11dc36b9;
  /* 11dc36b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc36b8 pop eax */
  EAX = (pop32());
L_11dc36b9:;
  /* 11dc36b9 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc36bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11dc36be push eax */
  push32((uint32_t)(EAX));
L_11dc36bf:;
  /* 11dc36bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc36c1 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
}

/* FUN_10003647 @ 0x11dc3647 (9 bytes, 4 insns) */
void f_11dc3647(void) {
  FTRACE(0x11dc3647u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3647 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc3649 call 0x11dc3367 */
  push32(0x11dc364eu); f_11dc3367();
  /* 11dc364e pop ecx */
  ECX = (pop32());
  /* 11dc364f ret  */
  ESPCHK(0x11dc3647u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a6 @ 0x11dc36a6 (9 bytes, 4 insns) */
void f_11dc36a6(void) {
  FTRACE(0x11dc36a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc36a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dc36a8 call 0x11dc3367 */
  push32(0x11dc36adu); f_11dc3367();
  /* 11dc36ad pop ecx */
  ECX = (pop32());
  /* 11dc36ae ret  */
  ESPCHK(0x11dc36a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x11dc36e0 (7 bytes, 3 insns) */
void f_11dc36e0(void) {
  FTRACE(0x11dc36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc36e0 push edi */
  push32((uint32_t)(EDI));
  /* 11dc36e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc36e5 jmp 0x11dc3751 */
  jmp_ind(0x11dc3751u); return;
}

/* FUN_100036f0 @ 0x11dc36f0 (224 bytes, 84 insns) */
void f_11dc36f0(void) {
  FTRACE(0x11dc36f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc36f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc36f4 push edi */
  push32((uint32_t)(EDI));
  /* 11dc36f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dc36fb je 0x11dc370c */
  if (C.zf) goto L_11dc370c;
L_11dc36fd:;
  /* 11dc36fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11dc36ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc3700 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc3702 je 0x11dc373f */
  if (C.zf) goto L_11dc373f;
  /* 11dc3704 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dc370a jne 0x11dc36fd */
  if (!C.zf) goto L_11dc36fd;
L_11dc370c:;
  /* 11dc370c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dc370e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dc3713 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3715 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3718 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc371a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc371d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dc3722 je 0x11dc370c */
  if (C.zf) goto L_11dc370c;
  /* 11dc3724 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11dc3727 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc3729 je 0x11dc374e */
  if (C.zf) goto L_11dc374e;
  /* 11dc372b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dc372d je 0x11dc3749 */
  if (C.zf) goto L_11dc3749;
  /* 11dc372f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dc3734 je 0x11dc3744 */
  if (C.zf) goto L_11dc3744;
  /* 11dc3736 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dc373b je 0x11dc373f */
  if (C.zf) goto L_11dc373f;
  /* 11dc373d jmp 0x11dc370c */
  goto L_11dc370c;
L_11dc373f:;
  /* 11dc373f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11dc3742 jmp 0x11dc3751 */
  goto L_11dc3751;
L_11dc3744:;
  /* 11dc3744 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11dc3747 jmp 0x11dc3751 */
  goto L_11dc3751;
L_11dc3749:;
  /* 11dc3749 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11dc374c jmp 0x11dc3751 */
  goto L_11dc3751;
L_11dc374e:;
  /* 11dc374e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11dc3751:;
  /* 11dc3751 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dc3755 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dc375b je 0x11dc3776 */
  if (C.zf) goto L_11dc3776;
L_11dc375d:;
  /* 11dc375d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11dc375f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc3760 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc3762 je 0x11dc37c8 */
  if (C.zf) goto L_11dc37c8;
  /* 11dc3764 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11dc3766 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc3767 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dc376d jne 0x11dc375d */
  if (!C.zf) goto L_11dc375d;
  /* 11dc376f jmp 0x11dc3776 */
  goto L_11dc3776;
L_11dc3771:;
  /* 11dc3771 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dc3773 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dc3776:;
  /* 11dc3776 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dc377b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dc377d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc377f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3782 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3784 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dc3786 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3789 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dc378e je 0x11dc3771 */
  if (C.zf) goto L_11dc3771;
  /* 11dc3790 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc3792 je 0x11dc37c8 */
  if (C.zf) goto L_11dc37c8;
  /* 11dc3794 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11dc3796 je 0x11dc37bf */
  if (C.zf) goto L_11dc37bf;
  /* 11dc3798 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dc379e je 0x11dc37b2 */
  if (C.zf) goto L_11dc37b2;
  /* 11dc37a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dc37a6 je 0x11dc37aa */
  if (C.zf) goto L_11dc37aa;
  /* 11dc37a8 jmp 0x11dc3771 */
  goto L_11dc3771;
L_11dc37aa:;
  /* 11dc37aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dc37ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc37b0 pop edi */
  EDI = (pop32());
  /* 11dc37b1 ret  */
  ESPCHK(0x11dc36f0u, _esp0);
  ESP += 4; return;
L_11dc37b2:;
  /* 11dc37b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11dc37b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc37b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11dc37bd pop edi */
  EDI = (pop32());
  /* 11dc37be ret  */
  ESPCHK(0x11dc36f0u, _esp0);
  ESP += 4; return;
L_11dc37bf:;
  /* 11dc37bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11dc37c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc37c6 pop edi */
  EDI = (pop32());
  /* 11dc37c7 ret  */
  ESPCHK(0x11dc36f0u, _esp0);
  ESP += 4; return;
L_11dc37c8:;
  /* 11dc37c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11dc37ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc37ce pop edi */
  EDI = (pop32());
  /* 11dc37cf ret  */
  ESPCHK(0x11dc36f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11dc37d0 (123 bytes, 44 insns) */
void f_11dc37d0(void) {
  FTRACE(0x11dc37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc37d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc37d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dc37da je 0x11dc37f0 */
  if (C.zf) goto L_11dc37f0;
L_11dc37dc:;
  /* 11dc37dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11dc37de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc37df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc37e1 je 0x11dc3823 */
  if (C.zf) goto L_11dc3823;
  /* 11dc37e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11dc37e9 jne 0x11dc37dc */
  if (!C.zf) goto L_11dc37dc;
  /* 11dc37eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dc37f0:;
  /* 11dc37f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dc37f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dc37f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc37f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc37fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc37fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3801 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dc3806 je 0x11dc37f0 */
  if (C.zf) goto L_11dc37f0;
  /* 11dc3808 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11dc380b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc380d je 0x11dc3841 */
  if (C.zf) goto L_11dc3841;
  /* 11dc380f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dc3811 je 0x11dc3837 */
  if (C.zf) goto L_11dc3837;
  /* 11dc3813 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dc3818 je 0x11dc382d */
  if (C.zf) goto L_11dc382d;
  /* 11dc381a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dc381f je 0x11dc3823 */
  if (C.zf) goto L_11dc3823;
  /* 11dc3821 jmp 0x11dc37f0 */
  goto L_11dc37f0;
L_11dc3823:;
  /* 11dc3823 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11dc3826 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc382a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc382c ret  */
  ESPCHK(0x11dc37d0u, _esp0);
  ESP += 4; return;
L_11dc382d:;
  /* 11dc382d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11dc3830 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc3834 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3836 ret  */
  ESPCHK(0x11dc37d0u, _esp0);
  ESP += 4; return;
L_11dc3837:;
  /* 11dc3837 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11dc383a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc383e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3840 ret  */
  ESPCHK(0x11dc37d0u, _esp0);
  ESP += 4; return;
L_11dc3841:;
  /* 11dc3841 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11dc3844 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc3848 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc384a ret  */
  ESPCHK(0x11dc37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000384b @ 0x11dc384b (429 bytes, 143 insns) */
void f_11dc384b(void) {
  FTRACE(0x11dc384bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc384b push ebp */
  push32((uint32_t)(EBP));
  /* 11dc384c mov ebp, esp */
  EBP = (ESP);
  /* 11dc384e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3851 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc3852 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3853 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3854 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11dc3856 call 0x11dc3306 */
  push32(0x11dc385bu); f_11dc3306();
  /* 11dc385b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc385e call 0x11dc39f8 */
  push32(0x11dc3863u); f_11dc39f8();
  /* 11dc3863 mov ebx, eax */
  EBX = (EAX);
  /* 11dc3865 pop ecx */
  ECX = (pop32());
  /* 11dc3866 cmp ebx, dword ptr [0x11dcb3d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dcb3d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc386c pop ecx */
  ECX = (pop32());
  /* 11dc386d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc3870 jne 0x11dc3879 */
  if (!C.zf) goto L_11dc3879;
L_11dc3872:;
  /* 11dc3872 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dc3874 jmp 0x11dc39e9 */
  goto L_11dc39e9;
L_11dc3879:;
  /* 11dc3879 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc387b je 0x11dc39d7 */
  if (C.zf) goto L_11dc39d7;
  /* 11dc3881 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3883 mov eax, 0x11dc8608 */
  EAX = (0x11dc8608u);
L_11dc3888:;
  /* 11dc3888 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc388a je 0x11dc3900 */
  if (C.zf) goto L_11dc3900;
  /* 11dc388c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc388f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc3890 cmp eax, 0x11dc86f8 */
  { uint32_t _a=(EAX),_b=(0x11dc86f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3895 jl 0x11dc3888 */
  if ((C.sf!=C.of)) goto L_11dc3888;
  /* 11dc3897 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11dc389a push eax */
  push32((uint32_t)(EAX));
  /* 11dc389b push ebx */
  push32((uint32_t)(EBX));
  /* 11dc389c call dword ptr [0x11dc7044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7044))), 0x11dc38a2u);
  /* 11dc38a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc38a4 pop esi */
  ESI = (pop32());
  /* 11dc38a5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc38a7 jne 0x11dc39ce */
  if (!C.zf) goto L_11dc39ce;
  /* 11dc38ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dc38af and dword ptr [0x11dcb604], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dcb604)))&(0x0u); w32((uint32_t)(0x11dcb604), (_r)); fl_logic(_r,32); }
  /* 11dc38b6 pop ecx */
  ECX = (pop32());
  /* 11dc38b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc38b9 mov edi, 0x11dcb500 */
  EDI = (0x11dcb500u);
  /* 11dc38be cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc38c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dc38c3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dc38c4 mov dword ptr [0x11dcb3d4], ebx */
  w32((uint32_t)(0x11dcb3d4), (EBX));
  /* 11dc38ca jbe 0x11dc39bb */
  if ((C.cf||C.zf)) goto L_11dc39bb;
  /* 11dc38d0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc38d4 je 0x11dc3996 */
  if (C.zf) goto L_11dc3996;
  /* 11dc38da lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11dc38dd:;
  /* 11dc38dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11dc38df test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc38e1 je 0x11dc3996 */
  if (C.zf) goto L_11dc3996;
  /* 11dc38e7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11dc38eb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11dc38ee:;
  /* 11dc38ee cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc38f0 ja 0x11dc398a */
  if ((!C.cf&&!C.zf)) goto L_11dc398a;
  /* 11dc38f6 or byte ptr [eax + 0x11dcb501], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(0x4u); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc38fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc38fe jmp 0x11dc38ee */
  goto L_11dc38ee;
L_11dc3900:;
  /* 11dc3900 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc3904 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dc3906 pop ecx */
  ECX = (pop32());
  /* 11dc3907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3909 mov edi, 0x11dcb500 */
  EDI = (0x11dcb500u);
  /* 11dc390e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11dc3911 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dc3913 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11dc3916 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dc3917 lea ebx, [esi + 0x11dc8618] */
  EBX = ((uint32_t)(ESI + 0x11dc8618));
L_11dc391d:;
  /* 11dc391d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc3920 mov ecx, ebx */
  ECX = (EBX);
  /* 11dc3922 je 0x11dc3950 */
  if (C.zf) goto L_11dc3950;
L_11dc3924:;
  /* 11dc3924 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11dc3927 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc3929 je 0x11dc3950 */
  if (C.zf) goto L_11dc3950;
  /* 11dc392b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11dc392e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11dc3931 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3933 ja 0x11dc3949 */
  if ((!C.cf&&!C.zf)) goto L_11dc3949;
  /* 11dc3935 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc3938 mov dl, byte ptr [edx + 0x11dc8600] */
  DL = (r8((uint32_t)(EDX + 0x11dc8600)));
L_11dc393e:;
  /* 11dc393e or byte ptr [eax + 0x11dcb501], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(DL); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc3944 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc3945 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3947 jbe 0x11dc393e */
  if ((C.cf||C.zf)) goto L_11dc393e;
L_11dc3949:;
  /* 11dc3949 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc394a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc394b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc394e jne 0x11dc3924 */
  if (!C.zf) goto L_11dc3924;
L_11dc3950:;
  /* 11dc3950 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dc3953 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3956 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc395a jb 0x11dc391d */
  if (C.cf) goto L_11dc391d;
  /* 11dc395c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc395f mov dword ptr [0x11dcb3ec], 1 */
  w32((uint32_t)(0x11dcb3ec), (0x1u));
  /* 11dc3969 push eax */
  push32((uint32_t)(EAX));
  /* 11dc396a mov dword ptr [0x11dcb3d4], eax */
  w32((uint32_t)(0x11dcb3d4), (EAX));
  /* 11dc396f call 0x11dc3a42 */
  push32(0x11dc3974u); f_11dc3a42();
  /* 11dc3974 lea esi, [esi + 0x11dc860c] */
  ESI = ((uint32_t)(ESI + 0x11dc860c));
  /* 11dc397a mov edi, 0x11dcb3e0 */
  EDI = (0x11dcb3e0u);
  /* 11dc397f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11dc3980 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11dc3981 pop ecx */
  ECX = (pop32());
  /* 11dc3982 mov dword ptr [0x11dcb604], eax */
  w32((uint32_t)(0x11dcb604), (EAX));
  /* 11dc3987 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11dc3988 jmp 0x11dc39dc */
  goto L_11dc39dc;
L_11dc398a:;
  /* 11dc398a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc398b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc398c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc3990 jne 0x11dc38dd */
  if (!C.zf) goto L_11dc38dd;
L_11dc3996:;
  /* 11dc3996 mov eax, esi */
  EAX = (ESI);
L_11dc3998:;
  /* 11dc3998 or byte ptr [eax + 0x11dcb501], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(0x8u); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc399f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc39a0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc39a5 jb 0x11dc3998 */
  if (C.cf) goto L_11dc3998;
  /* 11dc39a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc39a8 call 0x11dc3a42 */
  push32(0x11dc39adu); f_11dc3a42();
  /* 11dc39ad pop ecx */
  ECX = (pop32());
  /* 11dc39ae mov dword ptr [0x11dcb604], eax */
  w32((uint32_t)(0x11dcb604), (EAX));
  /* 11dc39b3 mov dword ptr [0x11dcb3ec], esi */
  w32((uint32_t)(0x11dcb3ec), (ESI));
  /* 11dc39b9 jmp 0x11dc39c2 */
  goto L_11dc39c2;
L_11dc39bb:;
  /* 11dc39bb and dword ptr [0x11dcb3ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dcb3ec)))&(0x0u); w32((uint32_t)(0x11dcb3ec), (_r)); fl_logic(_r,32); }
L_11dc39c2:;
  /* 11dc39c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc39c4 mov edi, 0x11dcb3e0 */
  EDI = (0x11dcb3e0u);
  /* 11dc39c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dc39ca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dc39cb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dc39cc jmp 0x11dc39dc */
  goto L_11dc39dc;
L_11dc39ce:;
  /* 11dc39ce cmp dword ptr [0x11dcb220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc39d5 je 0x11dc39e6 */
  if (C.zf) goto L_11dc39e6;
L_11dc39d7:;
  /* 11dc39d7 call 0x11dc3a75 */
  push32(0x11dc39dcu); f_11dc3a75();
L_11dc39dc:;
  /* 11dc39dc call 0x11dc3a9e */
  push32(0x11dc39e1u); f_11dc3a9e();
  /* 11dc39e1 jmp 0x11dc3872 */
  goto L_11dc3872;
L_11dc39e6:;
  /* 11dc39e6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11dc39e9:;
  /* 11dc39e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11dc39eb call 0x11dc3367 */
  push32(0x11dc39f0u); f_11dc3367();
  /* 11dc39f0 pop ecx */
  ECX = (pop32());
  /* 11dc39f1 mov eax, esi */
  EAX = (ESI);
  /* 11dc39f3 pop edi */
  EDI = (pop32());
  /* 11dc39f4 pop esi */
  ESI = (pop32());
  /* 11dc39f5 pop ebx */
  EBX = (pop32());
  /* 11dc39f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc39f7 ret  */
  ESPCHK(0x11dc384bu, _esp0);
  ESP += 4; return;
}

/* FUN_100039f8 @ 0x11dc39f8 (74 bytes, 15 insns) */
void f_11dc39f8(void) {
  FTRACE(0x11dc39f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc39f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc39fc and dword ptr [0x11dcb220], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dcb220)))&(0x0u); w32((uint32_t)(0x11dcb220), (_r)); fl_logic(_r,32); }
  /* 11dc3a03 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3a06 jne 0x11dc3a18 */
  if (!C.zf) goto L_11dc3a18;
  /* 11dc3a08 mov dword ptr [0x11dcb220], 1 */
  w32((uint32_t)(0x11dcb220), (0x1u));
  /* 11dc3a12 jmp dword ptr [0x11dc7034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11dc7034)))); return;
L_11dc3a18:;
  /* 11dc3a18 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3a1b jne 0x11dc3a2d */
  if (!C.zf) goto L_11dc3a2d;
  /* 11dc3a1d mov dword ptr [0x11dcb220], 1 */
  w32((uint32_t)(0x11dcb220), (0x1u));
  /* 11dc3a27 jmp dword ptr [0x11dc7038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11dc7038)))); return;
L_11dc3a2d:;
  /* 11dc3a2d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3a30 jne 0x11dc3a41 */
  if (!C.zf) goto L_11dc3a41;
  /* 11dc3a32 mov eax, dword ptr [0x11dcb254] */
  EAX = (r32((uint32_t)(0x11dcb254)));
  /* 11dc3a37 mov dword ptr [0x11dcb220], 1 */
  w32((uint32_t)(0x11dcb220), (0x1u));
L_11dc3a41:;
  /* 11dc3a41 ret  */
  ESPCHK(0x11dc39f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a42 @ 0x11dc3a42 (51 bytes, 19 insns) */
void f_11dc3a42(void) {
  FTRACE(0x11dc3a42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3a42 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc3a46 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3a4b je 0x11dc3a6f */
  if (C.zf) goto L_11dc3a6f;
  /* 11dc3a4d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3a50 je 0x11dc3a69 */
  if (C.zf) goto L_11dc3a69;
  /* 11dc3a52 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3a55 je 0x11dc3a63 */
  if (C.zf) goto L_11dc3a63;
  /* 11dc3a57 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dc3a58 je 0x11dc3a5d */
  if (C.zf) goto L_11dc3a5d;
  /* 11dc3a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3a5c ret  */
  ESPCHK(0x11dc3a42u, _esp0);
  ESP += 4; return;
L_11dc3a5d:;
  /* 11dc3a5d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11dc3a62 ret  */
  ESPCHK(0x11dc3a42u, _esp0);
  ESP += 4; return;
L_11dc3a63:;
  /* 11dc3a63 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11dc3a68 ret  */
  ESPCHK(0x11dc3a42u, _esp0);
  ESP += 4; return;
L_11dc3a69:;
  /* 11dc3a69 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11dc3a6e ret  */
  ESPCHK(0x11dc3a42u, _esp0);
  ESP += 4; return;
L_11dc3a6f:;
  /* 11dc3a6f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11dc3a74 ret  */
  ESPCHK(0x11dc3a42u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a75 @ 0x11dc3a75 (41 bytes, 17 insns) */
void f_11dc3a75(void) {
  FTRACE(0x11dc3a75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3a75 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3a76 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11dc3a78 pop ecx */
  ECX = (pop32());
  /* 11dc3a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3a7b mov edi, 0x11dcb500 */
  EDI = (0x11dcb500u);
  /* 11dc3a80 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dc3a82 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dc3a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3a85 mov edi, 0x11dcb3e0 */
  EDI = (0x11dcb3e0u);
  /* 11dc3a8a mov dword ptr [0x11dcb3d4], eax */
  w32((uint32_t)(0x11dcb3d4), (EAX));
  /* 11dc3a8f mov dword ptr [0x11dcb3ec], eax */
  w32((uint32_t)(0x11dcb3ec), (EAX));
  /* 11dc3a94 mov dword ptr [0x11dcb604], eax */
  w32((uint32_t)(0x11dcb604), (EAX));
  /* 11dc3a99 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dc3a9a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dc3a9b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11dc3a9c pop edi */
  EDI = (pop32());
  /* 11dc3a9d ret  */
  ESPCHK(0x11dc3a75u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a9e @ 0x11dc3a9e (389 bytes, 124 insns) */
void f_11dc3a9e(void) {
  FTRACE(0x11dc3a9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3a9e push ebp */
  push32((uint32_t)(EBP));
  /* 11dc3a9f mov ebp, esp */
  EBP = (ESP);
  /* 11dc3aa1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3aa7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11dc3aaa push esi */
  push32((uint32_t)(ESI));
  /* 11dc3aab push eax */
  push32((uint32_t)(EAX));
  /* 11dc3aac push dword ptr [0x11dcb3d4] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb3d4))));
  /* 11dc3ab2 call dword ptr [0x11dc7044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7044))), 0x11dc3ab8u);
  /* 11dc3ab8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3abb jne 0x11dc3bd7 */
  if (!C.zf) goto L_11dc3bd7;
  /* 11dc3ac1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3ac3 mov esi, 0x100 */
  ESI = (0x100u);
L_11dc3ac8:;
  /* 11dc3ac8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11dc3acf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc3ad0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3ad2 jb 0x11dc3ac8 */
  if (C.cf) goto L_11dc3ac8;
  /* 11dc3ad4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11dc3ad7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11dc3ade test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc3ae0 je 0x11dc3b19 */
  if (C.zf) goto L_11dc3b19;
  /* 11dc3ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc3ae3 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3ae4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11dc3ae7:;
  /* 11dc3ae7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11dc3aea movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11dc3aed cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3aef ja 0x11dc3b0e */
  if ((!C.cf&&!C.zf)) goto L_11dc3b0e;
  /* 11dc3af1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3af3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11dc3afa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc3afb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11dc3b00 mov ebx, ecx */
  EBX = (ECX);
  /* 11dc3b02 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3b05 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dc3b07 mov ecx, ebx */
  ECX = (EBX);
  /* 11dc3b09 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11dc3b0c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11dc3b0e:;
  /* 11dc3b0e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc3b0f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc3b10 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11dc3b13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc3b15 jne 0x11dc3ae7 */
  if (!C.zf) goto L_11dc3ae7;
  /* 11dc3b17 pop edi */
  EDI = (pop32());
  /* 11dc3b18 pop ebx */
  EBX = (pop32());
L_11dc3b19:;
  /* 11dc3b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3b1b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11dc3b21 push dword ptr [0x11dcb604] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb604))));
  /* 11dc3b27 push dword ptr [0x11dcb3d4] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb3d4))));
  /* 11dc3b2d push eax */
  push32((uint32_t)(EAX));
  /* 11dc3b2e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11dc3b34 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3b35 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc3b38 call 0x11dc57f7 */
  push32(0x11dc3b3du); f_11dc57f7();
  /* 11dc3b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3b3f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11dc3b45 push dword ptr [0x11dcb3d4] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb3d4))));
  /* 11dc3b4b push esi */
  push32((uint32_t)(ESI));
  /* 11dc3b4c push eax */
  push32((uint32_t)(EAX));
  /* 11dc3b4d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11dc3b53 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3b54 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3b55 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3b56 push dword ptr [0x11dcb604] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb604))));
  /* 11dc3b5c call 0x11dc55a8 */
  push32(0x11dc3b61u); f_11dc55a8();
  /* 11dc3b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3b63 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11dc3b69 push dword ptr [0x11dcb3d4] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb3d4))));
  /* 11dc3b6f push esi */
  push32((uint32_t)(ESI));
  /* 11dc3b70 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3b71 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11dc3b77 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3b78 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3b79 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11dc3b7e push dword ptr [0x11dcb604] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb604))));
  /* 11dc3b84 call 0x11dc55a8 */
  push32(0x11dc3b89u); f_11dc55a8();
  /* 11dc3b89 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3b8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3b8e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11dc3b94:;
  /* 11dc3b94 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11dc3b97 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11dc3b9a je 0x11dc3bb2 */
  if (C.zf) goto L_11dc3bb2;
  /* 11dc3b9c or byte ptr [eax + 0x11dcb501], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(0x10u); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc3ba3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11dc3baa:;
  /* 11dc3baa mov byte ptr [eax + 0x11dcb400], dl */
  w8((uint32_t)(EAX + 0x11dcb400), (DL));
  /* 11dc3bb0 jmp 0x11dc3bce */
  goto L_11dc3bce;
L_11dc3bb2:;
  /* 11dc3bb2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11dc3bb5 je 0x11dc3bc7 */
  if (C.zf) goto L_11dc3bc7;
  /* 11dc3bb7 or byte ptr [eax + 0x11dcb501], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(0x20u); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc3bbe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11dc3bc5 jmp 0x11dc3baa */
  goto L_11dc3baa;
L_11dc3bc7:;
  /* 11dc3bc7 and byte ptr [eax + 0x11dcb400], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb400)))&(0x0u); w8((uint32_t)(EAX + 0x11dcb400), (_r)); fl_logic(_r,8); }
L_11dc3bce:;
  /* 11dc3bce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc3bcf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc3bd0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc3bd1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3bd3 jb 0x11dc3b94 */
  if (C.cf) goto L_11dc3b94;
  /* 11dc3bd5 jmp 0x11dc3c20 */
  goto L_11dc3c20;
L_11dc3bd7:;
  /* 11dc3bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3bd9 mov esi, 0x100 */
  ESI = (0x100u);
L_11dc3bde:;
  /* 11dc3bde cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3be1 jb 0x11dc3bfc */
  if (C.cf) goto L_11dc3bfc;
  /* 11dc3be3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3be6 ja 0x11dc3bfc */
  if ((!C.cf&&!C.zf)) goto L_11dc3bfc;
  /* 11dc3be8 or byte ptr [eax + 0x11dcb501], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(0x10u); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc3bef mov cl, al */
  CL = (AL);
  /* 11dc3bf1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11dc3bf4:;
  /* 11dc3bf4 mov byte ptr [eax + 0x11dcb400], cl */
  w8((uint32_t)(EAX + 0x11dcb400), (CL));
  /* 11dc3bfa jmp 0x11dc3c1b */
  goto L_11dc3c1b;
L_11dc3bfc:;
  /* 11dc3bfc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3bff jb 0x11dc3c14 */
  if (C.cf) goto L_11dc3c14;
  /* 11dc3c01 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3c04 ja 0x11dc3c14 */
  if ((!C.cf&&!C.zf)) goto L_11dc3c14;
  /* 11dc3c06 or byte ptr [eax + 0x11dcb501], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb501)))|(0x20u); w8((uint32_t)(EAX + 0x11dcb501), (_r)); fl_logic(_r,8); }
  /* 11dc3c0d mov cl, al */
  CL = (AL);
  /* 11dc3c0f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc3c12 jmp 0x11dc3bf4 */
  goto L_11dc3bf4;
L_11dc3c14:;
  /* 11dc3c14 and byte ptr [eax + 0x11dcb400], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dcb400)))&(0x0u); w8((uint32_t)(EAX + 0x11dcb400), (_r)); fl_logic(_r,8); }
L_11dc3c1b:;
  /* 11dc3c1b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc3c1c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3c1e jb 0x11dc3bde */
  if (C.cf) goto L_11dc3bde;
L_11dc3c20:;
  /* 11dc3c20 pop esi */
  ESI = (pop32());
  /* 11dc3c21 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3c22 ret  */
  ESPCHK(0x11dc3a9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c23 @ 0x11dc3c23 (28 bytes, 7 insns) */
void f_11dc3c23(void) {
  FTRACE(0x11dc3c23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3c23 cmp dword ptr [0x11dcb728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3c2a jne 0x11dc3c3e */
  if (!C.zf) goto L_11dc3c3e;
  /* 11dc3c2c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11dc3c2e call 0x11dc384b */
  push32(0x11dc3c33u); f_11dc384b();
  /* 11dc3c33 pop ecx */
  ECX = (pop32());
  /* 11dc3c34 mov dword ptr [0x11dcb728], 1 */
  w32((uint32_t)(0x11dcb728), (0x1u));
L_11dc3c3e:;
  /* 11dc3c3e ret  */
  ESPCHK(0x11dc3c23u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x11dc3c40 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11dc3c40(void) {
  FTRACE(0x11dc3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc3c41 mov ebp, esp */
  EBP = (ESP);
  /* 11dc3c43 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3c44 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc3c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc3c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3c4e mov eax, ecx */
  EAX = (ECX);
  /* 11dc3c50 mov edx, ecx */
  EDX = (ECX);
  /* 11dc3c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3c56 jbe 0x11dc3c60 */
  if ((C.cf||C.zf)) goto L_11dc3c60;
  /* 11dc3c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3c5a jb 0x11dc3dd8 */
  if (C.cf) goto L_11dc3dd8;
L_11dc3c60:;
  /* 11dc3c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dc3c66 jne 0x11dc3c7c */
  if (!C.zf) goto L_11dc3c7c;
  /* 11dc3c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3c71 jb 0x11dc3c9c */
  if (C.cf) goto L_11dc3c9c;
  /* 11dc3c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3c75 jmp dword ptr [edx*4 + 0x11dc3d88] */
  switch (EDX) {
    case 0: goto L_11dc3d98;
    case 1: goto L_11dc3da0;
    case 2: goto L_11dc3dac;
    case 3: goto L_11dc3dc0;
    default: x86_unimpl("switch@0x11dc3c75 out of table"); return;
  }
L_11dc3c7c:;
  /* 11dc3c7c mov eax, edi */
  EAX = (EDI);
  /* 11dc3c7e mov edx, 3 */
  EDX = (0x3u);
  /* 11dc3c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3c86 jb 0x11dc3c94 */
  if (C.cf) goto L_11dc3c94;
  /* 11dc3c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3c8d jmp dword ptr [eax*4 + 0x11dc3ca0] */
  switch (EAX) {
    case 1: goto L_11dc3cb0;
    case 2: goto L_11dc3cdc;
    case 3: goto L_11dc3d00;
    default: x86_unimpl("switch@0x11dc3c8d out of table"); return;
  }
L_11dc3c94:;
  /* 11dc3c94 jmp dword ptr [ecx*4 + 0x11dc3d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11dc3d98)))); return;
  /* 11dc3c9b nop  */
  /* nop */
L_11dc3c9c:;
  /* 11dc3c9c jmp dword ptr [ecx*4 + 0x11dc3d1c] */
  switch (ECX) {
    case 0: goto L_11dc3d7f;
    case 1: goto L_11dc3d6c;
    case 2: goto L_11dc3d64;
    case 3: goto L_11dc3d5c;
    case 4: goto L_11dc3d54;
    case 5: goto L_11dc3d4c;
    case 6: goto L_11dc3d44;
    case 7: goto L_11dc3d3c;
    default: x86_unimpl("switch@0x11dc3c9c out of table"); return;
  }
  /* 11dc3ca3 nop  */
  /* nop */
L_11dc3cb0:;
  /* 11dc3cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc3cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc3cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc3cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc3cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc3cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc3cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3cce jb 0x11dc3c9c */
  if (C.cf) goto L_11dc3c9c;
  /* 11dc3cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3cd2 jmp dword ptr [edx*4 + 0x11dc3d88] */
  switch (EDX) {
    case 0: goto L_11dc3d98;
    case 1: goto L_11dc3da0;
    case 2: goto L_11dc3dac;
    case 3: goto L_11dc3dc0;
    default: x86_unimpl("switch@0x11dc3cd2 out of table"); return;
  }
  /* 11dc3cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc3cdc:;
  /* 11dc3cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc3ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc3ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc3ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc3ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3cf4 jb 0x11dc3c9c */
  if (C.cf) goto L_11dc3c9c;
  /* 11dc3cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3cf8 jmp dword ptr [edx*4 + 0x11dc3d88] */
  switch (EDX) {
    case 0: goto L_11dc3d98;
    case 1: goto L_11dc3da0;
    case 2: goto L_11dc3dac;
    case 3: goto L_11dc3dc0;
    default: x86_unimpl("switch@0x11dc3cf8 out of table"); return;
  }
  /* 11dc3cff nop  */
  /* nop */
L_11dc3d00:;
  /* 11dc3d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc3d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc3d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc3d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc3d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3d0e jb 0x11dc3c9c */
  if (C.cf) goto L_11dc3c9c;
  /* 11dc3d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3d12 jmp dword ptr [edx*4 + 0x11dc3d88] */
  switch (EDX) {
    case 0: goto L_11dc3d98;
    case 1: goto L_11dc3da0;
    case 2: goto L_11dc3dac;
    case 3: goto L_11dc3dc0;
    default: x86_unimpl("switch@0x11dc3d12 out of table"); return;
  }
  /* 11dc3d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc3d3c:;
  /* 11dc3d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11dc3d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11dc3d44:;
  /* 11dc3d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11dc3d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11dc3d4c:;
  /* 11dc3d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11dc3d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11dc3d54:;
  /* 11dc3d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11dc3d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11dc3d5c:;
  /* 11dc3d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11dc3d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11dc3d64:;
  /* 11dc3d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11dc3d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11dc3d6c:;
  /* 11dc3d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11dc3d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11dc3d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dc3d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dc3d7f:;
  /* 11dc3d7f jmp dword ptr [edx*4 + 0x11dc3d88] */
  switch (EDX) {
    case 0: goto L_11dc3d98;
    case 1: goto L_11dc3da0;
    case 2: goto L_11dc3dac;
    case 3: goto L_11dc3dc0;
    default: x86_unimpl("switch@0x11dc3d7f out of table"); return;
  }
  /* 11dc3d86 mov edi, edi */
  EDI = (EDI);
L_11dc3d98:;
  /* 11dc3d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3d9b pop esi */
  ESI = (pop32());
  /* 11dc3d9c pop edi */
  EDI = (pop32());
  /* 11dc3d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3d9e ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3d9f nop  */
  /* nop */
L_11dc3da0:;
  /* 11dc3da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc3da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc3da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3da7 pop esi */
  ESI = (pop32());
  /* 11dc3da8 pop edi */
  EDI = (pop32());
  /* 11dc3da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3daa ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3dab nop  */
  /* nop */
L_11dc3dac:;
  /* 11dc3dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc3dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc3db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc3db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc3db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3db9 pop esi */
  ESI = (pop32());
  /* 11dc3dba pop edi */
  EDI = (pop32());
  /* 11dc3dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3dbc ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc3dc0:;
  /* 11dc3dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc3dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc3dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc3dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc3dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc3dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc3dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3dd3 pop esi */
  ESI = (pop32());
  /* 11dc3dd4 pop edi */
  EDI = (pop32());
  /* 11dc3dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3dd6 ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3dd7 nop  */
  /* nop */
L_11dc3dd8:;
  /* 11dc3dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11dc3ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11dc3de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dc3de6 jne 0x11dc3e0c */
  if (!C.zf) goto L_11dc3e0c;
  /* 11dc3de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3df1 jb 0x11dc3e00 */
  if (C.cf) goto L_11dc3e00;
  /* 11dc3df3 std  */
  C.df=1;
  /* 11dc3df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3df6 cld  */
  C.df=0;
  /* 11dc3df7 jmp dword ptr [edx*4 + 0x11dc3f20] */
  switch (EDX) {
    case 0: goto L_11dc3f30;
    case 1: goto L_11dc3f38;
    case 2: goto L_11dc3f48;
    case 3: goto L_11dc3f5c;
    default: x86_unimpl("switch@0x11dc3df7 out of table"); return;
  }
  /* 11dc3dfe mov edi, edi */
  EDI = (EDI);
L_11dc3e00:;
  /* 11dc3e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc3e02 jmp dword ptr [ecx*4 + 0x11dc3ed0] */
  switch (ECX) {
    case 0: goto L_11dc3f17;
    default: x86_unimpl("switch@0x11dc3e02 out of table"); return;
  }
  /* 11dc3e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc3e0c:;
  /* 11dc3e0c mov eax, edi */
  EAX = (EDI);
  /* 11dc3e0e mov edx, 3 */
  EDX = (0x3u);
  /* 11dc3e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3e16 jb 0x11dc3e24 */
  if (C.cf) goto L_11dc3e24;
  /* 11dc3e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc3e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3e1d jmp dword ptr [eax*4 + 0x11dc3e28] */
  switch (EAX) {
    case 1: goto L_11dc3e38;
    case 2: goto L_11dc3e58;
    case 3: goto L_11dc3e80;
    default: x86_unimpl("switch@0x11dc3e1d out of table"); return;
  }
L_11dc3e24:;
  /* 11dc3e24 jmp dword ptr [ecx*4 + 0x11dc3f20] */
  switch (ECX) {
    case 0: goto L_11dc3f30;
    case 1: goto L_11dc3f38;
    case 2: goto L_11dc3f48;
    case 3: goto L_11dc3f5c;
    default: x86_unimpl("switch@0x11dc3e24 out of table"); return;
  }
  /* 11dc3e2b nop  */
  /* nop */
L_11dc3e38:;
  /* 11dc3e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc3e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc3e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dc3e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11dc3e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3e48 jb 0x11dc3e00 */
  if (C.cf) goto L_11dc3e00;
  /* 11dc3e4a std  */
  C.df=1;
  /* 11dc3e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3e4d cld  */
  C.df=0;
  /* 11dc3e4e jmp dword ptr [edx*4 + 0x11dc3f20] */
  switch (EDX) {
    case 0: goto L_11dc3f30;
    case 1: goto L_11dc3f38;
    case 2: goto L_11dc3f48;
    case 3: goto L_11dc3f5c;
    default: x86_unimpl("switch@0x11dc3e4e out of table"); return;
  }
  /* 11dc3e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc3e58:;
  /* 11dc3e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc3e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc3e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc3e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc3e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3e72 jb 0x11dc3e00 */
  if (C.cf) goto L_11dc3e00;
  /* 11dc3e74 std  */
  C.df=1;
  /* 11dc3e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3e77 cld  */
  C.df=0;
  /* 11dc3e78 jmp dword ptr [edx*4 + 0x11dc3f20] */
  switch (EDX) {
    case 0: goto L_11dc3f30;
    case 1: goto L_11dc3f38;
    case 2: goto L_11dc3f48;
    case 3: goto L_11dc3f5c;
    default: x86_unimpl("switch@0x11dc3e78 out of table"); return;
  }
  /* 11dc3e7f nop  */
  /* nop */
L_11dc3e80:;
  /* 11dc3e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc3e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc3e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc3e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc3e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc3e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc3e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc3e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc3e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3ea0 jb 0x11dc3e00 */
  if (C.cf) goto L_11dc3e00;
  /* 11dc3ea6 std  */
  C.df=1;
  /* 11dc3ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc3ea9 cld  */
  C.df=0;
  /* 11dc3eaa jmp dword ptr [edx*4 + 0x11dc3f20] */
  switch (EDX) {
    case 0: goto L_11dc3f30;
    case 1: goto L_11dc3f38;
    case 2: goto L_11dc3f48;
    case 3: goto L_11dc3f5c;
    default: x86_unimpl("switch@0x11dc3eaa out of table"); return;
  }
  /* 11dc3eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11dc3eb4 aam 0x3e */
  x86_unimpl("aam @ 0x11dc3eb4");
  /* 11dc3eb6 fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3eb8 fdivr qword ptr [esi] */
  FPU_ST(0) = (rf64((uint32_t)(ESI))) / FPU_ST(0);
  /* 11dc3eba fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3ebc in al, 0x3e */
  x86_unimpl("in @ 0x11dc3ebc");
  /* 11dc3ebe fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3ec0 in al, dx */
  x86_unimpl("in @ 0x11dc3ec0");
  /* 11dc3ec1 fcom qword ptr ds:[ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3ec4 hlt  */
  x86_unimpl("hlt @ 0x11dc3ec4");
  /* 11dc3ec5 fcom qword ptr ds:[ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3ec8 cld  */
  C.df=0;
  /* 11dc3ec9 fcom qword ptr ds:[ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3ecc add al, 0x3f */
  { uint32_t _a=(AL),_b=(0x3fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dc3ece fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc3ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11dc3ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11dc3edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11dc3ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11dc3ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11dc3ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11dc3eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11dc3ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11dc3ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11dc3ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11dc3efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11dc3f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11dc3f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11dc3f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11dc3f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dc3f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dc3f17:;
  /* 11dc3f17 jmp dword ptr [edx*4 + 0x11dc3f20] */
  switch (EDX) {
    case 0: goto L_11dc3f30;
    case 1: goto L_11dc3f38;
    case 2: goto L_11dc3f48;
    case 3: goto L_11dc3f5c;
    default: x86_unimpl("switch@0x11dc3f17 out of table"); return;
  }
  /* 11dc3f1e mov edi, edi */
  EDI = (EDI);
L_11dc3f30:;
  /* 11dc3f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3f33 pop esi */
  ESI = (pop32());
  /* 11dc3f34 pop edi */
  EDI = (pop32());
  /* 11dc3f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3f36 ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3f37 nop  */
  /* nop */
L_11dc3f38:;
  /* 11dc3f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc3f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc3f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3f41 pop esi */
  ESI = (pop32());
  /* 11dc3f42 pop edi */
  EDI = (pop32());
  /* 11dc3f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3f44 ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc3f48:;
  /* 11dc3f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc3f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc3f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc3f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc3f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3f57 pop esi */
  ESI = (pop32());
  /* 11dc3f58 pop edi */
  EDI = (pop32());
  /* 11dc3f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3f5a ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
  /* 11dc3f5b nop  */
  /* nop */
L_11dc3f5c:;
  /* 11dc3f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc3f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc3f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc3f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc3f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc3f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc3f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3f71 pop esi */
  ESI = (pop32());
  /* 11dc3f72 pop edi */
  EDI = (pop32());
  /* 11dc3f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc3f74 ret  */
  ESPCHK(0x11dc3c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f75 @ 0x11dc3f75 (23 bytes, 7 insns) */
void f_11dc3f75(void) {
  FTRACE(0x11dc3f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc3f77 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11dc3f7b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11dc3f7f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11dc3f83 call 0x11dc3f8c */
  push32(0x11dc3f88u); f_11dc3f8c();
  /* 11dc3f88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc3f8b ret  */
  ESPCHK(0x11dc3f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f8c @ 0x11dc3f8c (517 bytes, 195 insns) */
void f_11dc3f8c(void) {
  FTRACE(0x11dc3f8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc3f8c push ebp */
  push32((uint32_t)(EBP));
  /* 11dc3f8d mov ebp, esp */
  EBP = (ESP);
  /* 11dc3f8f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc3f92 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc3f93 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dc3f97 push esi */
  push32((uint32_t)(ESI));
  /* 11dc3f98 push edi */
  push32((uint32_t)(EDI));
  /* 11dc3f99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc3f9c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11dc3f9e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11dc3fa1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11dc3fa4:;
  /* 11dc3fa4 cmp dword ptr [0x11dcaab4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaab4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3fab jle 0x11dc3fbc */
  if ((C.zf||C.sf!=C.of)) goto L_11dc3fbc;
  /* 11dc3fad movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11dc3fb0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc3fb2 push eax */
  push32((uint32_t)(EAX));
  /* 11dc3fb3 call 0x11dc5a84 */
  push32(0x11dc3fb8u); f_11dc5a84();
  /* 11dc3fb8 pop ecx */
  ECX = (pop32());
  /* 11dc3fb9 pop ecx */
  ECX = (pop32());
  /* 11dc3fba jmp 0x11dc3fcb */
  goto L_11dc3fcb;
L_11dc3fbc:;
  /* 11dc3fbc mov ecx, dword ptr [0x11dca8a8] */
  ECX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc3fc2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11dc3fc5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11dc3fc8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11dc3fcb:;
  /* 11dc3fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3fcd je 0x11dc3fd4 */
  if (C.zf) goto L_11dc3fd4;
  /* 11dc3fcf mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11dc3fd1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc3fd2 jmp 0x11dc3fa4 */
  goto L_11dc3fa4;
L_11dc3fd4:;
  /* 11dc3fd4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc3fd7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11dc3fda jne 0x11dc3fe2 */
  if (!C.zf) goto L_11dc3fe2;
  /* 11dc3fdc or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11dc3fe0 jmp 0x11dc3fe7 */
  goto L_11dc3fe7;
L_11dc3fe2:;
  /* 11dc3fe2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc3fe5 jne 0x11dc3fed */
  if (!C.zf) goto L_11dc3fed;
L_11dc3fe7:;
  /* 11dc3fe7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11dc3fe9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc3fea mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11dc3fed:;
  /* 11dc3fed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc3ff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc3ff2 jl 0x11dc4181 */
  if ((C.sf!=C.of)) goto L_11dc4181;
  /* 11dc3ff8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc3ffb je 0x11dc4181 */
  if (C.zf) goto L_11dc4181;
  /* 11dc4001 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4004 jg 0x11dc4181 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc4181;
  /* 11dc400a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dc400c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc400e pop ecx */
  ECX = (pop32());
  /* 11dc400f jne 0x11dc4035 */
  if (!C.zf) goto L_11dc4035;
  /* 11dc4011 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4014 je 0x11dc401f */
  if (C.zf) goto L_11dc401f;
  /* 11dc4016 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11dc401d jmp 0x11dc4051 */
  goto L_11dc4051;
L_11dc401f:;
  /* 11dc401f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc4021 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4023 je 0x11dc4032 */
  if (C.zf) goto L_11dc4032;
  /* 11dc4025 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4027 je 0x11dc4032 */
  if (C.zf) goto L_11dc4032;
  /* 11dc4029 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11dc4030 jmp 0x11dc4051 */
  goto L_11dc4051;
L_11dc4032:;
  /* 11dc4032 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11dc4035:;
  /* 11dc4035 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4038 jne 0x11dc4051 */
  if (!C.zf) goto L_11dc4051;
  /* 11dc403a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc403d jne 0x11dc4051 */
  if (!C.zf) goto L_11dc4051;
  /* 11dc403f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc4041 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4043 je 0x11dc4049 */
  if (C.zf) goto L_11dc4049;
  /* 11dc4045 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4047 jne 0x11dc4051 */
  if (!C.zf) goto L_11dc4051;
L_11dc4049:;
  /* 11dc4049 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc404c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc404d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc404e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11dc4051:;
  /* 11dc4051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4054 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc4056 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11dc4059 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11dc405e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11dc4061:;
  /* 11dc4061 cmp dword ptr [0x11dcaab4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaab4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4068 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11dc406b jle 0x11dc4079 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc4079;
  /* 11dc406d push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc406f push esi */
  push32((uint32_t)(ESI));
  /* 11dc4070 call 0x11dc5a84 */
  push32(0x11dc4075u); f_11dc5a84();
  /* 11dc4075 pop ecx */
  ECX = (pop32());
  /* 11dc4076 pop ecx */
  ECX = (pop32());
  /* 11dc4077 jmp 0x11dc4084 */
  goto L_11dc4084;
L_11dc4079:;
  /* 11dc4079 mov eax, dword ptr [0x11dca8a8] */
  EAX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc407e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11dc4081 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11dc4084:;
  /* 11dc4084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4086 je 0x11dc4090 */
  if (C.zf) goto L_11dc4090;
  /* 11dc4088 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11dc408b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc408e jmp 0x11dc40c2 */
  goto L_11dc40c2;
L_11dc4090:;
  /* 11dc4090 cmp dword ptr [0x11dcaab4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaab4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4097 jle 0x11dc40a4 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc40a4;
  /* 11dc4099 push edi */
  push32((uint32_t)(EDI));
  /* 11dc409a push esi */
  push32((uint32_t)(ESI));
  /* 11dc409b call 0x11dc5a84 */
  push32(0x11dc40a0u); f_11dc5a84();
  /* 11dc40a0 pop ecx */
  ECX = (pop32());
  /* 11dc40a1 pop ecx */
  ECX = (pop32());
  /* 11dc40a2 jmp 0x11dc40af */
  goto L_11dc40af;
L_11dc40a4:;
  /* 11dc40a4 mov eax, dword ptr [0x11dca8a8] */
  EAX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc40a9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11dc40ad and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11dc40af:;
  /* 11dc40af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc40b1 je 0x11dc40fd */
  if (C.zf) goto L_11dc40fd;
  /* 11dc40b3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11dc40b6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc40b7 call 0x11dc5949 */
  push32(0x11dc40bcu); f_11dc5949();
  /* 11dc40bc pop ecx */
  ECX = (pop32());
  /* 11dc40bd mov ecx, eax */
  ECX = (EAX);
  /* 11dc40bf sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11dc40c2:;
  /* 11dc40c2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc40c5 jae 0x11dc40fd */
  if (!C.cf) goto L_11dc40fd;
  /* 11dc40c7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11dc40ca or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11dc40ce cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc40d1 jb 0x11dc40e7 */
  if (C.cf) goto L_11dc40e7;
  /* 11dc40d3 jne 0x11dc40e1 */
  if (!C.zf) goto L_11dc40e1;
  /* 11dc40d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc40d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc40da div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11dc40dd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc40df jbe 0x11dc40e7 */
  if ((C.cf||C.zf)) goto L_11dc40e7;
L_11dc40e1:;
  /* 11dc40e1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11dc40e5 jmp 0x11dc40f0 */
  goto L_11dc40f0;
L_11dc40e7:;
  /* 11dc40e7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dc40eb add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc40ed mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11dc40f0:;
  /* 11dc40f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc40f3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dc40f6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11dc40f8 jmp 0x11dc4061 */
  goto L_11dc4061;
L_11dc40fd:;
  /* 11dc40fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc4100 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11dc4103 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc4106 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11dc4108 jne 0x11dc411a */
  if (!C.zf) goto L_11dc411a;
  /* 11dc410a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc410c je 0x11dc4114 */
  if (C.zf) goto L_11dc4114;
  /* 11dc410e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4111 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dc4114:;
  /* 11dc4114 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4118 jmp 0x11dc4165 */
  goto L_11dc4165;
L_11dc411a:;
  /* 11dc411a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11dc411c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11dc4121 jne 0x11dc413e */
  if (!C.zf) goto L_11dc413e;
  /* 11dc4123 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11dc4125 jne 0x11dc4165 */
  if (!C.zf) goto L_11dc4165;
  /* 11dc4127 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc412a je 0x11dc4135 */
  if (C.zf) goto L_11dc4135;
  /* 11dc412c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4133 ja 0x11dc413e */
  if ((!C.cf&&!C.zf)) goto L_11dc413e;
L_11dc4135:;
  /* 11dc4135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4137 jne 0x11dc4165 */
  if (!C.zf) goto L_11dc4165;
  /* 11dc4139 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc413c jbe 0x11dc4165 */
  if ((C.cf||C.zf)) goto L_11dc4165;
L_11dc413e:;
  /* 11dc413e call 0x11dc5940 */
  push32(0x11dc4143u); f_11dc5940();
  /* 11dc4143 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11dc4147 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11dc414d je 0x11dc4155 */
  if (C.zf) goto L_11dc4155;
  /* 11dc414f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4153 jmp 0x11dc4165 */
  goto L_11dc4165;
L_11dc4155:;
  /* 11dc4155 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dc4158 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11dc415a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11dc415c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc415e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc4160 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4162 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11dc4165:;
  /* 11dc4165 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc4167 je 0x11dc416e */
  if (C.zf) goto L_11dc416e;
  /* 11dc4169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc416c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11dc416e:;
  /* 11dc416e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11dc4172 je 0x11dc417c */
  if (C.zf) goto L_11dc417c;
  /* 11dc4174 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dc4177 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc4179 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11dc417c:;
  /* 11dc417c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dc417f jmp 0x11dc418c */
  goto L_11dc418c;
L_11dc4181:;
  /* 11dc4181 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc4184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4186 je 0x11dc418a */
  if (C.zf) goto L_11dc418a;
  /* 11dc4188 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11dc418a:;
  /* 11dc418a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc418c:;
  /* 11dc418c pop edi */
  EDI = (pop32());
  /* 11dc418d pop esi */
  ESI = (pop32());
  /* 11dc418e pop ebx */
  EBX = (pop32());
  /* 11dc418f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc4190 ret  */
  ESPCHK(0x11dc3f8cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11dc41b0 (193 bytes, 90 insns) */
void f_11dc41b0(void) {
  FTRACE(0x11dc41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc41b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc41b2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11dc41b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc41b7 mov ebx, eax */
  EBX = (EAX);
  /* 11dc41b9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc41bc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc41c0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11dc41c6 je 0x11dc41db */
  if (C.zf) goto L_11dc41db;
L_11dc41c8:;
  /* 11dc41c8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11dc41ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc41cb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc41cd je 0x11dc41a0 */
  if (C.zf) { jmp_ind(0x11dc41a0u); return; }
  /* 11dc41cf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11dc41d1 je 0x11dc4224 */
  if (C.zf) goto L_11dc4224;
  /* 11dc41d3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11dc41d9 jne 0x11dc41c8 */
  if (!C.zf) goto L_11dc41c8;
L_11dc41db:;
  /* 11dc41db or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc41dd push edi */
  push32((uint32_t)(EDI));
  /* 11dc41de mov eax, ebx */
  EAX = (EBX);
  /* 11dc41e0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11dc41e3 push esi */
  push32((uint32_t)(ESI));
  /* 11dc41e4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11dc41e6:;
  /* 11dc41e6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11dc41e8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11dc41ed mov eax, ecx */
  EAX = (ECX);
  /* 11dc41ef mov esi, edi */
  ESI = (EDI);
  /* 11dc41f1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc41f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc41f5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc41f7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dc41fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc41fd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dc41ff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4201 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4204 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11dc420a jne 0x11dc4228 */
  if (!C.zf) goto L_11dc4228;
  /* 11dc420c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4211 je 0x11dc41e6 */
  if (C.zf) goto L_11dc41e6;
  /* 11dc4213 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4218 jne 0x11dc4222 */
  if (!C.zf) goto L_11dc4222;
  /* 11dc421a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11dc4220 jne 0x11dc41e6 */
  if (!C.zf) goto L_11dc41e6;
L_11dc4222:;
  /* 11dc4222 pop esi */
  ESI = (pop32());
  /* 11dc4223 pop edi */
  EDI = (pop32());
L_11dc4224:;
  /* 11dc4224 pop ebx */
  EBX = (pop32());
  /* 11dc4225 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4227 ret  */
  ESPCHK(0x11dc41b0u, _esp0);
  ESP += 4; return;
L_11dc4228:;
  /* 11dc4228 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11dc422b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc422d je 0x11dc4265 */
  if (C.zf) goto L_11dc4265;
  /* 11dc422f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc4231 je 0x11dc4222 */
  if (C.zf) goto L_11dc4222;
  /* 11dc4233 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4235 je 0x11dc425e */
  if (C.zf) goto L_11dc425e;
  /* 11dc4237 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dc4239 je 0x11dc4222 */
  if (C.zf) goto L_11dc4222;
  /* 11dc423b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11dc423e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4240 je 0x11dc4257 */
  if (C.zf) goto L_11dc4257;
  /* 11dc4242 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc4244 je 0x11dc4222 */
  if (C.zf) goto L_11dc4222;
  /* 11dc4246 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4248 je 0x11dc4250 */
  if (C.zf) goto L_11dc4250;
  /* 11dc424a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dc424c je 0x11dc4222 */
  if (C.zf) goto L_11dc4222;
  /* 11dc424e jmp 0x11dc41e6 */
  goto L_11dc41e6;
L_11dc4250:;
  /* 11dc4250 pop esi */
  ESI = (pop32());
  /* 11dc4251 pop edi */
  EDI = (pop32());
  /* 11dc4252 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11dc4255 pop ebx */
  EBX = (pop32());
  /* 11dc4256 ret  */
  ESPCHK(0x11dc41b0u, _esp0);
  ESP += 4; return;
L_11dc4257:;
  /* 11dc4257 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11dc425a pop esi */
  ESI = (pop32());
  /* 11dc425b pop edi */
  EDI = (pop32());
  /* 11dc425c pop ebx */
  EBX = (pop32());
  /* 11dc425d ret  */
  ESPCHK(0x11dc41b0u, _esp0);
  ESP += 4; return;
L_11dc425e:;
  /* 11dc425e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11dc4261 pop esi */
  ESI = (pop32());
  /* 11dc4262 pop edi */
  EDI = (pop32());
  /* 11dc4263 pop ebx */
  EBX = (pop32());
  /* 11dc4264 ret  */
  ESPCHK(0x11dc41b0u, _esp0);
  ESP += 4; return;
L_11dc4265:;
  /* 11dc4265 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11dc4268 pop esi */
  ESI = (pop32());
  /* 11dc4269 pop edi */
  EDI = (pop32());
  /* 11dc426a pop ebx */
  EBX = (pop32());
  /* 11dc426b ret  */
  ESPCHK(0x11dc41b0u, _esp0);
  ESP += 4; return;
  /* 11dc426c int3  */
  x86_unimpl("int3 @ 0x11dc426c");
  /* 11dc426d int3  */
  x86_unimpl("int3 @ 0x11dc426d");
  /* 11dc426e int3  */
  x86_unimpl("int3 @ 0x11dc426e");
  /* 11dc426f int3  */
  x86_unimpl("int3 @ 0x11dc426f");
}

/* _strstr @ 0x11dc4270 (128 bytes, 66 insns) */
void f_11dc4270(void) {
  FTRACE(0x11dc4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4270 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc4274 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4275 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4276 push esi */
  push32((uint32_t)(ESI));
  /* 11dc4277 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11dc4279 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc427d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc427f je 0x11dc42ea */
  if (C.zf) goto L_11dc42ea;
  /* 11dc4281 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11dc4284 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11dc4286 je 0x11dc42d7 */
  if (C.zf) goto L_11dc42d7;
L_11dc4288:;
  /* 11dc4288 mov esi, edi */
  ESI = (EDI);
  /* 11dc428a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11dc428e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11dc4290 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc4291 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4293 je 0x11dc42aa */
  if (C.zf) goto L_11dc42aa;
  /* 11dc4295 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc4297 je 0x11dc42a4 */
  if (C.zf) goto L_11dc42a4;
L_11dc4299:;
  /* 11dc4299 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc429b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11dc429c:;
  /* 11dc429c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc429e je 0x11dc42aa */
  if (C.zf) goto L_11dc42aa;
  /* 11dc42a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc42a2 jne 0x11dc4299 */
  if (!C.zf) goto L_11dc4299;
L_11dc42a4:;
  /* 11dc42a4 pop esi */
  ESI = (pop32());
  /* 11dc42a5 pop ebx */
  EBX = (pop32());
  /* 11dc42a6 pop edi */
  EDI = (pop32());
  /* 11dc42a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc42a9 ret  */
  ESPCHK(0x11dc4270u, _esp0);
  ESP += 4; return;
L_11dc42aa:;
  /* 11dc42aa mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc42ac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc42ad cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc42af jne 0x11dc429c */
  if (!C.zf) goto L_11dc429c;
  /* 11dc42b1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11dc42b4:;
  /* 11dc42b4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11dc42b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11dc42b9 je 0x11dc42e3 */
  if (C.zf) goto L_11dc42e3;
  /* 11dc42bb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc42bd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc42c0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc42c2 jne 0x11dc4288 */
  if (!C.zf) goto L_11dc4288;
  /* 11dc42c4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11dc42c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc42c9 je 0x11dc42e3 */
  if (C.zf) goto L_11dc42e3;
  /* 11dc42cb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11dc42ce add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc42d1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc42d3 je 0x11dc42b4 */
  if (C.zf) goto L_11dc42b4;
  /* 11dc42d5 jmp 0x11dc4288 */
  goto L_11dc4288;
L_11dc42d7:;
  /* 11dc42d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc42d9 pop esi */
  ESI = (pop32());
  /* 11dc42da pop ebx */
  EBX = (pop32());
  /* 11dc42db pop edi */
  EDI = (pop32());
  /* 11dc42dc mov al, dl */
  AL = (DL);
  /* 11dc42de jmp 0x11dc41b6 */
  jmp_ind(0x11dc41b6u); return;
L_11dc42e3:;
  /* 11dc42e3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11dc42e6 pop esi */
  ESI = (pop32());
  /* 11dc42e7 pop ebx */
  EBX = (pop32());
  /* 11dc42e8 pop edi */
  EDI = (pop32());
  /* 11dc42e9 ret  */
  ESPCHK(0x11dc4270u, _esp0);
  ESP += 4; return;
L_11dc42ea:;
  /* 11dc42ea mov eax, edi */
  EAX = (EDI);
  /* 11dc42ec pop esi */
  ESI = (pop32());
  /* 11dc42ed pop ebx */
  EBX = (pop32());
  /* 11dc42ee pop edi */
  EDI = (pop32());
  /* 11dc42ef ret  */
  ESPCHK(0x11dc4270u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11dc42f0 (56 bytes, 31 insns) */
void f_11dc42f0(void) {
  FTRACE(0x11dc42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc42f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc42f1 mov ebp, esp */
  EBP = (ESP);
  /* 11dc42f3 push edi */
  push32((uint32_t)(EDI));
  /* 11dc42f4 push esi */
  push32((uint32_t)(ESI));
  /* 11dc42f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc42f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc42f9 jecxz 0x11dc4321 */
  x86_unimpl("jecxz @ 0x11dc42f9");
  /* 11dc42fb mov ebx, ecx */
  EBX = (ECX);
  /* 11dc42fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4300 mov esi, edi */
  ESI = (EDI);
  /* 11dc4302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4304 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11dc4306 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc4308 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc430a mov edi, esi */
  EDI = (ESI);
  /* 11dc430c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc430f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11dc4311 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11dc4314 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4316 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4319 ja 0x11dc431f */
  if ((!C.cf&&!C.zf)) goto L_11dc431f;
  /* 11dc431b je 0x11dc4321 */
  if (C.zf) goto L_11dc4321;
  /* 11dc431d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc431e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11dc431f:;
  /* 11dc431f not ecx */
  ECX = (~(ECX));
L_11dc4321:;
  /* 11dc4321 mov eax, ecx */
  EAX = (ECX);
  /* 11dc4323 pop ebx */
  EBX = (pop32());
  /* 11dc4324 pop esi */
  ESI = (pop32());
  /* 11dc4325 pop edi */
  EDI = (pop32());
  /* 11dc4326 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc4327 ret  */
  ESPCHK(0x11dc42f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x11dc4330 (47 bytes, 17 insns) */
void f_11dc4330(void) {
  FTRACE(0x11dc4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4330 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4331 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4336 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11dc433a jb 0x11dc4350 */
  if (C.cf) goto L_11dc4350;
L_11dc433c:;
  /* 11dc433c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4342 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4347 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11dc4349 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc434e jae 0x11dc433c */
  if (!C.cf) goto L_11dc433c;
L_11dc4350:;
  /* 11dc4350 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4352 mov eax, esp */
  EAX = (ESP);
  /* 11dc4354 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11dc4356 mov esp, ecx */
  ESP = (ECX);
  /* 11dc4358 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dc435a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dc435d push eax */
  push32((uint32_t)(EAX));
  /* 11dc435e ret  */
  ESPCHK(0x11dc4330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000435f @ 0x11dc435f (72 bytes, 17 insns) */
void f_11dc435f(void) {
  FTRACE(0x11dc435fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc435f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11dc4364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4366 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc436c call dword ptr [0x11dc7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7040))), 0x11dc4372u);
  /* 11dc4372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4374 mov dword ptr [0x11dcb3cc], eax */
  w32((uint32_t)(0x11dcb3cc), (EAX));
  /* 11dc4379 jne 0x11dc437c */
  if (!C.zf) goto L_11dc437c;
  /* 11dc437b ret  */
  ESPCHK(0x11dc435fu, _esp0);
  ESP += 4; return;
L_11dc437c:;
  /* 11dc437c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc4380 and dword ptr [0x11dcb3c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dcb3c4)))&(0x0u); w32((uint32_t)(0x11dcb3c4), (_r)); fl_logic(_r,32); }
  /* 11dc4387 and dword ptr [0x11dcb3c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dcb3c8)))&(0x0u); w32((uint32_t)(0x11dcb3c8), (_r)); fl_logic(_r,32); }
  /* 11dc438e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc4390 mov dword ptr [0x11dcb3c0], eax */
  w32((uint32_t)(0x11dcb3c0), (EAX));
  /* 11dc4395 mov dword ptr [0x11dcb3d0], ecx */
  w32((uint32_t)(0x11dcb3d0), (ECX));
  /* 11dc439b mov dword ptr [0x11dcb3b8], 0x10 */
  w32((uint32_t)(0x11dcb3b8), (0x10u));
  /* 11dc43a5 pop eax */
  EAX = (pop32());
  /* 11dc43a6 ret  */
  ESPCHK(0x11dc435fu, _esp0);
  ESP += 4; return;
}

/* FUN_100043a7 @ 0x11dc43a7 (43 bytes, 14 insns) */
void f_11dc43a7(void) {
  FTRACE(0x11dc43a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc43a7 mov eax, dword ptr [0x11dcb3c8] */
  EAX = (r32((uint32_t)(0x11dcb3c8)));
  /* 11dc43ac lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11dc43af mov eax, dword ptr [0x11dcb3cc] */
  EAX = (r32((uint32_t)(0x11dcb3cc)));
  /* 11dc43b4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11dc43b7:;
  /* 11dc43b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc43b9 jae 0x11dc43cf */
  if (!C.cf) goto L_11dc43cf;
  /* 11dc43bb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc43bf sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc43c2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc43c8 jb 0x11dc43d1 */
  if (C.cf) goto L_11dc43d1;
  /* 11dc43ca add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc43cd jmp 0x11dc43b7 */
  goto L_11dc43b7;
L_11dc43cf:;
  /* 11dc43cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc43d1:;
  /* 11dc43d1 ret  */
  ESPCHK(0x11dc43a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100043d2 @ 0x11dc43d2 (809 bytes, 265 insns) */
void f_11dc43d2(void) {
  FTRACE(0x11dc43d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc43d2 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc43d3 mov ebp, esp */
  EBP = (ESP);
  /* 11dc43d5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc43d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc43db push ebx */
  push32((uint32_t)(EBX));
  /* 11dc43dc push esi */
  push32((uint32_t)(ESI));
  /* 11dc43dd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc43e0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dc43e3 push edi */
  push32((uint32_t)(EDI));
  /* 11dc43e4 mov edi, esi */
  EDI = (ESI);
  /* 11dc43e6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc43e9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc43ec shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11dc43ef mov ecx, edi */
  ECX = (EDI);
  /* 11dc43f1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dc43f7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11dc43fe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11dc4401 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11dc4403 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc4404 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11dc4407 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dc440a jne 0x11dc46f6 */
  if (!C.zf) goto L_11dc46f6;
  /* 11dc4410 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11dc4413 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11dc4416 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11dc4419 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11dc441c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11dc441f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dc4422 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11dc4425 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11dc4428 jne 0x11dc44a8 */
  if (!C.zf) goto L_11dc44a8;
  /* 11dc442a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11dc442d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc442e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4431 jbe 0x11dc4436 */
  if ((C.cf||C.zf)) goto L_11dc4436;
  /* 11dc4433 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dc4435 pop edx */
  EDX = (pop32());
L_11dc4436:;
  /* 11dc4436 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11dc4439 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc443c jne 0x11dc448a */
  if (!C.zf) goto L_11dc448a;
  /* 11dc443e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4441 jae 0x11dc4461 */
  if (!C.cf) goto L_11dc4461;
  /* 11dc4443 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc4448 mov ecx, edx */
  ECX = (EDX);
  /* 11dc444a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc444c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11dc4450 not ebx */
  EBX = (~(EBX));
  /* 11dc4452 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dc4456 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11dc4458 jne 0x11dc4482 */
  if (!C.zf) goto L_11dc4482;
  /* 11dc445a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc445d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dc445f jmp 0x11dc4482 */
  goto L_11dc4482;
L_11dc4461:;
  /* 11dc4461 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11dc4464 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc4469 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc446b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11dc446f not ebx */
  EBX = (~(EBX));
  /* 11dc4471 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11dc4478 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11dc447a jne 0x11dc4482 */
  if (!C.zf) goto L_11dc4482;
  /* 11dc447c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc447f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11dc4482:;
  /* 11dc4482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc4485 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc4488 jmp 0x11dc448d */
  goto L_11dc448d;
L_11dc448a:;
  /* 11dc448a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11dc448d:;
  /* 11dc448d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11dc4490 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11dc4493 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4496 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11dc4499 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc449c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dc449f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dc44a2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dc44a5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11dc44a8:;
  /* 11dc44a8 mov edx, ecx */
  EDX = (ECX);
  /* 11dc44aa sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11dc44ad dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc44ae cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc44b1 jbe 0x11dc44b6 */
  if ((C.cf||C.zf)) goto L_11dc44b6;
  /* 11dc44b3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dc44b5 pop edx */
  EDX = (pop32());
L_11dc44b6:;
  /* 11dc44b6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dc44b9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11dc44bc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11dc44bf jne 0x11dc4559 */
  if (!C.zf) goto L_11dc4559;
  /* 11dc44c5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc44c8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dc44cb sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11dc44ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dc44d0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11dc44d3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dc44d4 pop esi */
  ESI = (pop32());
  /* 11dc44d5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc44d7 jbe 0x11dc44db */
  if ((C.cf||C.zf)) goto L_11dc44db;
  /* 11dc44d9 mov ebx, esi */
  EBX = (ESI);
L_11dc44db:;
  /* 11dc44db add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc44de mov edx, ecx */
  EDX = (ECX);
  /* 11dc44e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dc44e3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11dc44e6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc44e7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc44e9 jbe 0x11dc44ed */
  if ((C.cf||C.zf)) goto L_11dc44ed;
  /* 11dc44eb mov edx, esi */
  EDX = (ESI);
L_11dc44ed:;
  /* 11dc44ed cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc44ef je 0x11dc4554 */
  if (C.zf) goto L_11dc4554;
  /* 11dc44f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc44f4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11dc44f7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc44fa jne 0x11dc453c */
  if (!C.zf) goto L_11dc453c;
  /* 11dc44fc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc44ff jae 0x11dc451d */
  if (!C.cf) goto L_11dc451d;
  /* 11dc4501 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11dc4506 mov ecx, ebx */
  ECX = (EBX);
  /* 11dc4508 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11dc450a not esi */
  ESI = (~(ESI));
  /* 11dc450c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dc4510 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11dc4514 jne 0x11dc453c */
  if (!C.zf) goto L_11dc453c;
  /* 11dc4516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4519 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dc451b jmp 0x11dc453c */
  goto L_11dc453c;
L_11dc451d:;
  /* 11dc451d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11dc4520 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11dc4525 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11dc4527 not esi */
  ESI = (~(ESI));
  /* 11dc4529 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11dc4530 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11dc4534 jne 0x11dc453c */
  if (!C.zf) goto L_11dc453c;
  /* 11dc4536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4539 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11dc453c:;
  /* 11dc453c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc453f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11dc4542 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dc4545 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11dc4548 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc454b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11dc454e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dc4551 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11dc4554:;
  /* 11dc4554 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc4557 jmp 0x11dc455c */
  goto L_11dc455c;
L_11dc4559:;
  /* 11dc4559 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11dc455c:;
  /* 11dc455c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4560 jne 0x11dc456a */
  if (!C.zf) goto L_11dc456a;
  /* 11dc4562 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4564 je 0x11dc45eb */
  if (C.zf) goto L_11dc45eb;
L_11dc456a:;
  /* 11dc456a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dc456d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11dc4571 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11dc4574 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11dc4577 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11dc457a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11dc457d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4580 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11dc4583 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4586 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4589 jne 0x11dc45eb */
  if (!C.zf) goto L_11dc45eb;
  /* 11dc458b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11dc458f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4592 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11dc4595 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dc4597 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11dc459b jae 0x11dc45c2 */
  if (!C.cf) goto L_11dc45c2;
  /* 11dc459d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc45a1 jne 0x11dc45b1 */
  if (!C.zf) goto L_11dc45b1;
  /* 11dc45a3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc45a8 mov ecx, edx */
  ECX = (EDX);
  /* 11dc45aa shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc45ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc45af or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11dc45b1:;
  /* 11dc45b1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc45b6 mov ecx, edx */
  ECX = (EDX);
  /* 11dc45b8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc45ba lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11dc45be or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11dc45c0 jmp 0x11dc45eb */
  goto L_11dc45eb;
L_11dc45c2:;
  /* 11dc45c2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc45c6 jne 0x11dc45d8 */
  if (!C.zf) goto L_11dc45d8;
  /* 11dc45c8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11dc45cb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc45d0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc45d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc45d5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11dc45d8:;
  /* 11dc45d8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11dc45db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dc45e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dc45e2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11dc45e9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11dc45eb:;
  /* 11dc45eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc45ee mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dc45f0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11dc45f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dc45f7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11dc45f9 jne 0x11dc46f6 */
  if (!C.zf) goto L_11dc46f6;
  /* 11dc45ff mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc4604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4606 je 0x11dc46e8 */
  if (C.zf) goto L_11dc46e8;
  /* 11dc460c mov ecx, dword ptr [0x11dcb3bc] */
  ECX = (r32((uint32_t)(0x11dcb3bc)));
  /* 11dc4612 mov esi, dword ptr [0x11dc7064] */
  ESI = (r32((uint32_t)(0x11dc7064)));
  /* 11dc4618 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11dc461b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc461e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11dc4623 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11dc4628 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4629 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc462a call esi */
  call_ind((uint32_t)(ESI), 0x11dc462cu);
  /* 11dc462c mov ecx, dword ptr [0x11dcb3bc] */
  ECX = (r32((uint32_t)(0x11dcb3bc)));
  /* 11dc4632 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc4637 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dc463c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dc463e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4641 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc4646 mov ecx, dword ptr [0x11dcb3bc] */
  ECX = (r32((uint32_t)(0x11dcb3bc)));
  /* 11dc464c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dc464f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11dc4657 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc465c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dc465f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11dc4662 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc4667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dc466a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc466e jne 0x11dc4679 */
  if (!C.zf) goto L_11dc4679;
  /* 11dc4670 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc4674 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
L_11dc4679:;
  /* 11dc4679 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc467d jne 0x11dc46e8 */
  if (!C.zf) goto L_11dc46e8;
  /* 11dc467f push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4680 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4682 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11dc4685 call esi */
  call_ind((uint32_t)(ESI), 0x11dc4687u);
  /* 11dc4687 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc468c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11dc468f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4691 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4697 call dword ptr [0x11dc7054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7054))), 0x11dc469du);
  /* 11dc469d mov eax, dword ptr [0x11dcb3c8] */
  EAX = (r32((uint32_t)(0x11dcb3c8)));
  /* 11dc46a2 mov edx, dword ptr [0x11dcb3cc] */
  EDX = (r32((uint32_t)(0x11dcb3cc)));
  /* 11dc46a8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dc46ab shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11dc46ae mov ecx, eax */
  ECX = (EAX);
  /* 11dc46b0 mov eax, dword ptr [0x11dcb3c4] */
  EAX = (r32((uint32_t)(0x11dcb3c4)));
  /* 11dc46b5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc46b7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11dc46bb push ecx */
  push32((uint32_t)(ECX));
  /* 11dc46bc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11dc46bf push ecx */
  push32((uint32_t)(ECX));
  /* 11dc46c0 push eax */
  push32((uint32_t)(EAX));
  /* 11dc46c1 call 0x11dc5b00 */
  push32(0x11dc46c6u); f_11dc5b00();
  /* 11dc46c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc46c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc46cc dec dword ptr [0x11dcb3c8] */
  { uint32_t _r=(r32((uint32_t)(0x11dcb3c8)))-1; w32((uint32_t)(0x11dcb3c8), (_r)); fl_dec(_r,32); }
  /* 11dc46d2 cmp eax, dword ptr [0x11dcb3c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dcb3c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc46d8 jbe 0x11dc46de */
  if ((C.cf||C.zf)) goto L_11dc46de;
  /* 11dc46da sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11dc46de:;
  /* 11dc46de mov eax, dword ptr [0x11dcb3cc] */
  EAX = (r32((uint32_t)(0x11dcb3cc)));
  /* 11dc46e3 mov dword ptr [0x11dcb3c0], eax */
  w32((uint32_t)(0x11dcb3c0), (EAX));
L_11dc46e8:;
  /* 11dc46e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc46eb mov dword ptr [0x11dcb3bc], edi */
  w32((uint32_t)(0x11dcb3bc), (EDI));
  /* 11dc46f1 mov dword ptr [0x11dcb3c4], eax */
  w32((uint32_t)(0x11dcb3c4), (EAX));
L_11dc46f6:;
  /* 11dc46f6 pop edi */
  EDI = (pop32());
  /* 11dc46f7 pop esi */
  ESI = (pop32());
  /* 11dc46f8 pop ebx */
  EBX = (pop32());
  /* 11dc46f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc46fa ret  */
  ESPCHK(0x11dc43d2u, _esp0);
  ESP += 4; return;
}

/* FUN_100046fb @ 0x11dc46fb (777 bytes, 275 insns) */
void f_11dc46fb(void) {
  FTRACE(0x11dc46fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc46fb push ebp */
  push32((uint32_t)(EBP));
  /* 11dc46fc mov ebp, esp */
  EBP = (ESP);
  /* 11dc46fe sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4701 mov eax, dword ptr [0x11dcb3c8] */
  EAX = (r32((uint32_t)(0x11dcb3c8)));
  /* 11dc4706 mov edx, dword ptr [0x11dcb3cc] */
  EDX = (r32((uint32_t)(0x11dcb3cc)));
  /* 11dc470c push ebx */
  push32((uint32_t)(EBX));
  /* 11dc470d push esi */
  push32((uint32_t)(ESI));
  /* 11dc470e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dc4711 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4712 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11dc4715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4718 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11dc471b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11dc471e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4721 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11dc4724 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11dc4727 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc4728 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc472b jge 0x11dc473b */
  if ((C.sf==C.of)) goto L_11dc473b;
  /* 11dc472d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11dc4730 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11dc4732 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4736 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11dc4739 jmp 0x11dc474b */
  goto L_11dc474b;
L_11dc473b:;
  /* 11dc473b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc473e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4741 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11dc4743 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11dc4745 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11dc4748 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11dc474b:;
  /* 11dc474b mov eax, dword ptr [0x11dcb3c0] */
  EAX = (r32((uint32_t)(0x11dcb3c0)));
  /* 11dc4750 mov ebx, eax */
  EBX = (EAX);
  /* 11dc4752 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4754 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc4757 jae 0x11dc4772 */
  if (!C.cf) goto L_11dc4772;
L_11dc4759:;
  /* 11dc4759 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11dc475c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11dc475e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4761 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc4763 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4765 jne 0x11dc4772 */
  if (!C.zf) goto L_11dc4772;
  /* 11dc4767 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc476a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc476d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc4770 jb 0x11dc4759 */
  if (C.cf) goto L_11dc4759;
L_11dc4772:;
  /* 11dc4772 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4775 jne 0x11dc47f0 */
  if (!C.zf) goto L_11dc47f0;
  /* 11dc4777 mov ebx, edx */
  EBX = (EDX);
L_11dc4779:;
  /* 11dc4779 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc477b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc477e jae 0x11dc4795 */
  if (!C.cf) goto L_11dc4795;
  /* 11dc4780 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11dc4783 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11dc4785 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4788 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc478a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dc478c jne 0x11dc4793 */
  if (!C.zf) goto L_11dc4793;
  /* 11dc478e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4791 jmp 0x11dc4779 */
  goto L_11dc4779;
L_11dc4793:;
  /* 11dc4793 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dc4795:;
  /* 11dc4795 jne 0x11dc47f0 */
  if (!C.zf) goto L_11dc47f0;
L_11dc4797:;
  /* 11dc4797 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc479a jae 0x11dc47ad */
  if (!C.cf) goto L_11dc47ad;
  /* 11dc479c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc47a0 jne 0x11dc47aa */
  if (!C.zf) goto L_11dc47aa;
  /* 11dc47a2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc47a5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc47a8 jmp 0x11dc4797 */
  goto L_11dc4797;
L_11dc47aa:;
  /* 11dc47aa cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dc47ad:;
  /* 11dc47ad jne 0x11dc47d5 */
  if (!C.zf) goto L_11dc47d5;
  /* 11dc47af mov ebx, edx */
  EBX = (EDX);
L_11dc47b1:;
  /* 11dc47b1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc47b3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc47b6 jae 0x11dc47c5 */
  if (!C.cf) goto L_11dc47c5;
  /* 11dc47b8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc47bc jne 0x11dc47c3 */
  if (!C.zf) goto L_11dc47c3;
  /* 11dc47be add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc47c1 jmp 0x11dc47b1 */
  goto L_11dc47b1;
L_11dc47c3:;
  /* 11dc47c3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dc47c5:;
  /* 11dc47c5 jne 0x11dc47d5 */
  if (!C.zf) goto L_11dc47d5;
  /* 11dc47c7 call 0x11dc4a04 */
  push32(0x11dc47ccu); f_11dc4a04();
  /* 11dc47cc mov ebx, eax */
  EBX = (EAX);
  /* 11dc47ce test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc47d0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc47d3 je 0x11dc47e9 */
  if (C.zf) goto L_11dc47e9;
L_11dc47d5:;
  /* 11dc47d5 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc47d6 call 0x11dc4ab5 */
  push32(0x11dc47dbu); f_11dc4ab5();
  /* 11dc47db pop ecx */
  ECX = (pop32());
  /* 11dc47dc mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11dc47df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dc47e1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11dc47e4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc47e7 jne 0x11dc47f0 */
  if (!C.zf) goto L_11dc47f0;
L_11dc47e9:;
  /* 11dc47e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc47eb jmp 0x11dc49ff */
  goto L_11dc49ff;
L_11dc47f0:;
  /* 11dc47f0 mov dword ptr [0x11dcb3c0], ebx */
  w32((uint32_t)(0x11dcb3c0), (EBX));
  /* 11dc47f6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11dc47f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11dc47fb cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc47fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dc4801 je 0x11dc4817 */
  if (C.zf) goto L_11dc4817;
  /* 11dc4803 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11dc480a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11dc480e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4811 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc4813 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4815 jne 0x11dc484e */
  if (!C.zf) goto L_11dc484e;
L_11dc4817:;
  /* 11dc4817 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11dc481d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11dc4820 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11dc4823 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11dc4826 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc482a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11dc482d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11dc482f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11dc4832 jne 0x11dc484b */
  if (!C.zf) goto L_11dc484b;
L_11dc4834:;
  /* 11dc4834 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11dc483a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dc483d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11dc4840 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4843 mov edi, esi */
  EDI = (ESI);
  /* 11dc4845 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11dc4847 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11dc4849 je 0x11dc4834 */
  if (C.zf) goto L_11dc4834;
L_11dc484b:;
  /* 11dc484b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11dc484e:;
  /* 11dc484e mov ecx, edx */
  ECX = (EDX);
  /* 11dc4850 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc4852 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dc4858 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11dc485f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11dc4862 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11dc4866 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4868 jne 0x11dc4877 */
  if (!C.zf) goto L_11dc4877;
  /* 11dc486a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11dc4871 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11dc4873 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11dc4876 pop edi */
  EDI = (pop32());
L_11dc4877:;
  /* 11dc4877 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dc4879 jl 0x11dc4880 */
  if ((C.sf!=C.of)) goto L_11dc4880;
  /* 11dc487b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11dc487d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc487e jmp 0x11dc4877 */
  goto L_11dc4877;
L_11dc4880:;
  /* 11dc4880 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dc4883 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11dc4887 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11dc4889 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc488c mov esi, ecx */
  ESI = (ECX);
  /* 11dc488e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dc4891 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11dc4894 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dc4895 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4898 jle 0x11dc489d */
  if ((C.zf||C.sf!=C.of)) goto L_11dc489d;
  /* 11dc489a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dc489c pop esi */
  ESI = (pop32());
L_11dc489d:;
  /* 11dc489d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc489f je 0x11dc49b2 */
  if (C.zf) goto L_11dc49b2;
  /* 11dc48a5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dc48a8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc48ab jne 0x11dc490e */
  if (!C.zf) goto L_11dc490e;
  /* 11dc48ad cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc48b0 jge 0x11dc48dd */
  if ((C.sf==C.of)) goto L_11dc48dd;
  /* 11dc48b2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc48b7 mov ecx, edi */
  ECX = (EDI);
  /* 11dc48b9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc48bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc48be lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11dc48c2 not ebx */
  EBX = (~(EBX));
  /* 11dc48c4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11dc48c7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11dc48cb mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11dc48cf dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11dc48d1 jne 0x11dc490b */
  if (!C.zf) goto L_11dc490b;
  /* 11dc48d3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc48d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dc48d9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11dc48db jmp 0x11dc490e */
  goto L_11dc490e;
L_11dc48dd:;
  /* 11dc48dd lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11dc48e0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11dc48e5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11dc48e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc48ea lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11dc48ee lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11dc48f5 not ebx */
  EBX = (~(EBX));
  /* 11dc48f7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11dc48f9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11dc48fb mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11dc48fe jne 0x11dc490b */
  if (!C.zf) goto L_11dc490b;
  /* 11dc4900 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4903 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dc4906 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc4909 jmp 0x11dc490e */
  goto L_11dc490e;
L_11dc490b:;
  /* 11dc490b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11dc490e:;
  /* 11dc490e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dc4911 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11dc4914 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4918 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11dc491b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dc491e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11dc4921 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11dc4924 je 0x11dc49be */
  if (C.zf) goto L_11dc49be;
  /* 11dc492a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dc492d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11dc4931 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11dc4934 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11dc4937 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11dc493a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11dc493d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dc4940 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11dc4943 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dc4946 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4949 jne 0x11dc49af */
  if (!C.zf) goto L_11dc49af;
  /* 11dc494b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11dc494f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4952 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11dc4955 jge 0x11dc4980 */
  if ((C.sf==C.of)) goto L_11dc4980;
  /* 11dc4957 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dc4959 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc495d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11dc4961 jne 0x11dc496e */
  if (!C.zf) goto L_11dc496e;
  /* 11dc4963 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dc4968 mov ecx, esi */
  ECX = (ESI);
  /* 11dc496a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dc496c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11dc496e:;
  /* 11dc496e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dc4973 mov ecx, esi */
  ECX = (ESI);
  /* 11dc4975 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dc4977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc497a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dc497e jmp 0x11dc49af */
  goto L_11dc49af;
L_11dc4980:;
  /* 11dc4980 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dc4982 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc4986 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11dc498a jne 0x11dc4999 */
  if (!C.zf) goto L_11dc4999;
  /* 11dc498c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11dc498f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11dc4994 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11dc4996 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11dc4999:;
  /* 11dc4999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc499c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11dc49a3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11dc49a6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11dc49ab shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11dc49ad or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11dc49af:;
  /* 11dc49af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11dc49b2:;
  /* 11dc49b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dc49b4 je 0x11dc49c1 */
  if (C.zf) goto L_11dc49c1;
  /* 11dc49b6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11dc49b8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11dc49bc jmp 0x11dc49c1 */
  goto L_11dc49c1;
L_11dc49be:;
  /* 11dc49be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11dc49c1:;
  /* 11dc49c1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11dc49c4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc49c6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11dc49c9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11dc49cb mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11dc49cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11dc49d2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11dc49d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dc49d6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11dc49d9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dc49db jne 0x11dc49f7 */
  if (!C.zf) goto L_11dc49f7;
  /* 11dc49dd cmp ebx, dword ptr [0x11dcb3c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dcb3c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc49e3 jne 0x11dc49f7 */
  if (!C.zf) goto L_11dc49f7;
  /* 11dc49e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc49e8 cmp ecx, dword ptr [0x11dcb3bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dcb3bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc49ee jne 0x11dc49f7 */
  if (!C.zf) goto L_11dc49f7;
  /* 11dc49f0 and dword ptr [0x11dcb3c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dcb3c4)))&(0x0u); w32((uint32_t)(0x11dcb3c4), (_r)); fl_logic(_r,32); }
L_11dc49f7:;
  /* 11dc49f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc49fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dc49fc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11dc49ff:;
  /* 11dc49ff pop edi */
  EDI = (pop32());
  /* 11dc4a00 pop esi */
  ESI = (pop32());
  /* 11dc4a01 pop ebx */
  EBX = (pop32());
  /* 11dc4a02 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc4a03 ret  */
  ESPCHK(0x11dc46fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a04 @ 0x11dc4a04 (177 bytes, 53 insns) */
void f_11dc4a04(void) {
  FTRACE(0x11dc4a04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4a04 mov eax, dword ptr [0x11dcb3c8] */
  EAX = (r32((uint32_t)(0x11dcb3c8)));
  /* 11dc4a09 mov ecx, dword ptr [0x11dcb3b8] */
  ECX = (r32((uint32_t)(0x11dcb3b8)));
  /* 11dc4a0f push esi */
  push32((uint32_t)(ESI));
  /* 11dc4a10 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4a11 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc4a13 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4a15 jne 0x11dc4a47 */
  if (!C.zf) goto L_11dc4a47;
  /* 11dc4a17 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11dc4a1b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11dc4a1e push eax */
  push32((uint32_t)(EAX));
  /* 11dc4a1f push dword ptr [0x11dcb3cc] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb3cc))));
  /* 11dc4a25 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4a26 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4a2c call dword ptr [0x11dc702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc702c))), 0x11dc4a32u);
  /* 11dc4a32 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4a34 je 0x11dc4a97 */
  if (C.zf) goto L_11dc4a97;
  /* 11dc4a36 add dword ptr [0x11dcb3b8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb3b8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11dcb3b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dc4a3d mov dword ptr [0x11dcb3cc], eax */
  w32((uint32_t)(0x11dcb3cc), (EAX));
  /* 11dc4a42 mov eax, dword ptr [0x11dcb3c8] */
  EAX = (r32((uint32_t)(0x11dcb3c8)));
L_11dc4a47:;
  /* 11dc4a47 mov ecx, dword ptr [0x11dcb3cc] */
  ECX = (r32((uint32_t)(0x11dcb3cc)));
  /* 11dc4a4d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11dc4a52 push 8 */
  push32((uint32_t)(0x8u));
  /* 11dc4a54 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11dc4a57 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4a5d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11dc4a60 call dword ptr [0x11dc7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7040))), 0x11dc4a66u);
  /* 11dc4a66 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4a68 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11dc4a6b je 0x11dc4a97 */
  if (C.zf) goto L_11dc4a97;
  /* 11dc4a6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc4a6f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11dc4a74 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11dc4a79 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4a7a call dword ptr [0x11dc703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc703c))), 0x11dc4a80u);
  /* 11dc4a80 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4a82 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11dc4a85 jne 0x11dc4a9b */
  if (!C.zf) goto L_11dc4a9b;
  /* 11dc4a87 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11dc4a8a push edi */
  push32((uint32_t)(EDI));
  /* 11dc4a8b push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4a91 call dword ptr [0x11dc7054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7054))), 0x11dc4a97u);
L_11dc4a97:;
  /* 11dc4a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4a99 jmp 0x11dc4ab2 */
  goto L_11dc4ab2;
L_11dc4a9b:;
  /* 11dc4a9b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4a9f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11dc4aa1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11dc4aa4 inc dword ptr [0x11dcb3c8] */
  { uint32_t _r=(r32((uint32_t)(0x11dcb3c8)))+1; w32((uint32_t)(0x11dcb3c8), (_r)); fl_inc(_r,32); }
  /* 11dc4aaa mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11dc4aad or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11dc4ab0 mov eax, esi */
  EAX = (ESI);
L_11dc4ab2:;
  /* 11dc4ab2 pop edi */
  EDI = (pop32());
  /* 11dc4ab3 pop esi */
  ESI = (pop32());
  /* 11dc4ab4 ret  */
  ESPCHK(0x11dc4a04u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab5 @ 0x11dc4ab5 (251 bytes, 85 insns) */
void f_11dc4ab5(void) {
  FTRACE(0x11dc4ab5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4ab5 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc4ab6 mov ebp, esp */
  EBP = (ESP);
  /* 11dc4ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4ab9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4abc push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4abd push esi */
  push32((uint32_t)(ESI));
  /* 11dc4abe push edi */
  push32((uint32_t)(EDI));
  /* 11dc4abf mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11dc4ac2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dc4ac5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11dc4ac7:;
  /* 11dc4ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4ac9 jl 0x11dc4ad0 */
  if ((C.sf!=C.of)) goto L_11dc4ad0;
  /* 11dc4acb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11dc4acd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc4ace jmp 0x11dc4ac7 */
  goto L_11dc4ac7;
L_11dc4ad0:;
  /* 11dc4ad0 mov eax, ebx */
  EAX = (EBX);
  /* 11dc4ad2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11dc4ad4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dc4ada pop edx */
  EDX = (pop32());
  /* 11dc4adb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11dc4ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dc4ae5:;
  /* 11dc4ae5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11dc4ae8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11dc4aeb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4aee dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc4aef jne 0x11dc4ae5 */
  if (!C.zf) goto L_11dc4ae5;
  /* 11dc4af1 mov edi, ebx */
  EDI = (EBX);
  /* 11dc4af3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc4af5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11dc4af8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4afb push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dc4b00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dc4b05 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4b06 call dword ptr [0x11dc703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc703c))), 0x11dc4b0cu);
  /* 11dc4b0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4b0e jne 0x11dc4b18 */
  if (!C.zf) goto L_11dc4b18;
  /* 11dc4b10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4b13 jmp 0x11dc4bab */
  goto L_11dc4bab;
L_11dc4b18:;
  /* 11dc4b18 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11dc4b1e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4b20 ja 0x11dc4b5e */
  if ((!C.cf&&!C.zf)) goto L_11dc4b5e;
  /* 11dc4b22 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11dc4b25:;
  /* 11dc4b25 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4b29 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11dc4b30 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11dc4b36 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11dc4b3d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dc4b3f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11dc4b45 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dc4b48 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11dc4b52 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4b57 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11dc4b5a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4b5c jbe 0x11dc4b25 */
  if ((C.cf||C.zf)) goto L_11dc4b25;
L_11dc4b5e:;
  /* 11dc4b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc4b61 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11dc4b64 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc4b6b pop edi */
  EDI = (pop32());
  /* 11dc4b6c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dc4b6f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11dc4b72 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11dc4b75 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11dc4b78 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11dc4b7b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11dc4b80 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11dc4b87 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11dc4b8a mov cl, al */
  CL = (AL);
  /* 11dc4b8c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11dc4b8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc4b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4b93 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11dc4b96 jne 0x11dc4b9b */
  if (!C.zf) goto L_11dc4b9b;
  /* 11dc4b98 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11dc4b9b:;
  /* 11dc4b9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11dc4ba0 mov ecx, ebx */
  ECX = (EBX);
  /* 11dc4ba2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11dc4ba4 not edx */
  EDX = (~(EDX));
  /* 11dc4ba6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11dc4ba9 mov eax, ebx */
  EAX = (EBX);
L_11dc4bab:;
  /* 11dc4bab pop edi */
  EDI = (pop32());
  /* 11dc4bac pop esi */
  ESI = (pop32());
  /* 11dc4bad pop ebx */
  EBX = (pop32());
  /* 11dc4bae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc4baf ret  */
  ESPCHK(0x11dc4ab5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb0 @ 0x11dc4bb0 (324 bytes, 102 insns) */
void f_11dc4bb0(void) {
  FTRACE(0x11dc4bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4bb0 cmp dword ptr [0x11dc8710], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11dc8710))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4bb7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4bb8 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc4bb9 push esi */
  push32((uint32_t)(ESI));
  /* 11dc4bba push edi */
  push32((uint32_t)(EDI));
  /* 11dc4bbb jne 0x11dc4bc4 */
  if (!C.zf) goto L_11dc4bc4;
  /* 11dc4bbd mov esi, 0x11dc8700 */
  ESI = (0x11dc8700u);
  /* 11dc4bc2 jmp 0x11dc4be1 */
  goto L_11dc4be1;
L_11dc4bc4:;
  /* 11dc4bc4 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11dc4bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4bcb push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4bd1 call dword ptr [0x11dc7040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7040))), 0x11dc4bd7u);
  /* 11dc4bd7 mov esi, eax */
  ESI = (EAX);
  /* 11dc4bd9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc4bdb je 0x11dc4ced */
  if (C.zf) goto L_11dc4ced;
L_11dc4be1:;
  /* 11dc4be1 mov ebp, dword ptr [0x11dc703c] */
  EBP = (r32((uint32_t)(0x11dc703c)));
  /* 11dc4be7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc4be9 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11dc4bee push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11dc4bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4bf5 call ebp */
  call_ind((uint32_t)(EBP), 0x11dc4bf7u);
  /* 11dc4bf7 mov edi, eax */
  EDI = (EAX);
  /* 11dc4bf9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11dc4bfb je 0x11dc4cd6 */
  if (C.zf) goto L_11dc4cd6;
  /* 11dc4c01 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc4c03 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11dc4c08 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dc4c0d push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4c0e push edi */
  push32((uint32_t)(EDI));
  /* 11dc4c0f call ebp */
  call_ind((uint32_t)(EBP), 0x11dc4c11u);
  /* 11dc4c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4c13 je 0x11dc4cc8 */
  if (C.zf) goto L_11dc4cc8;
  /* 11dc4c19 mov eax, 0x11dc8700 */
  EAX = (0x11dc8700u);
  /* 11dc4c1e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4c20 jne 0x11dc4c40 */
  if (!C.zf) goto L_11dc4c40;
  /* 11dc4c22 cmp dword ptr [0x11dc8700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dc8700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4c29 jne 0x11dc4c30 */
  if (!C.zf) goto L_11dc4c30;
  /* 11dc4c2b mov dword ptr [0x11dc8700], eax */
  w32((uint32_t)(0x11dc8700), (EAX));
L_11dc4c30:;
  /* 11dc4c30 cmp dword ptr [0x11dc8704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dc8704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4c37 jne 0x11dc4c55 */
  if (!C.zf) goto L_11dc4c55;
  /* 11dc4c39 mov dword ptr [0x11dc8704], eax */
  w32((uint32_t)(0x11dc8704), (EAX));
  /* 11dc4c3e jmp 0x11dc4c55 */
  goto L_11dc4c55;
L_11dc4c40:;
  /* 11dc4c40 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11dc4c42 mov eax, dword ptr [0x11dc8704] */
  EAX = (r32((uint32_t)(0x11dc8704)));
  /* 11dc4c47 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11dc4c4a mov dword ptr [0x11dc8704], esi */
  w32((uint32_t)(0x11dc8704), (ESI));
  /* 11dc4c50 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4c53 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11dc4c55:;
  /* 11dc4c55 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11dc4c5b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11dc4c61 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11dc4c64 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11dc4c67 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11dc4c6a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11dc4c6d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11dc4c70 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11dc4c72 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11dc4c77:;
  /* 11dc4c77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc4c79 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4c7c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11dc4c7f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc4c80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc4c82 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc4c83 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11dc4c84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11dc4c86 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dc4c89 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4c8c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4c92 jl 0x11dc4c77 */
  if ((C.sf!=C.of)) goto L_11dc4c77;
  /* 11dc4c94 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4c97 push edi */
  push32((uint32_t)(EDI));
  /* 11dc4c98 call 0x11dc5380 */
  push32(0x11dc4c9du); f_11dc5380();
  /* 11dc4c9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc4ca0:;
  /* 11dc4ca0 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11dc4ca3 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4ca5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4ca7 jae 0x11dc4cc4 */
  if (!C.cf) goto L_11dc4cc4;
  /* 11dc4ca9 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11dc4cb0 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11dc4cb3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11dc4cb5 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11dc4cbc add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4cc2 jmp 0x11dc4ca0 */
  goto L_11dc4ca0;
L_11dc4cc4:;
  /* 11dc4cc4 mov eax, esi */
  EAX = (ESI);
  /* 11dc4cc6 jmp 0x11dc4cef */
  goto L_11dc4cef;
L_11dc4cc8:;
  /* 11dc4cc8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dc4ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4ccf push edi */
  push32((uint32_t)(EDI));
  /* 11dc4cd0 call dword ptr [0x11dc7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7064))), 0x11dc4cd6u);
L_11dc4cd6:;
  /* 11dc4cd6 cmp esi, 0x11dc8700 */
  { uint32_t _a=(ESI),_b=(0x11dc8700u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4cdc je 0x11dc4ced */
  if (C.zf) goto L_11dc4ced;
  /* 11dc4cde push esi */
  push32((uint32_t)(ESI));
  /* 11dc4cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4ce1 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4ce7 call dword ptr [0x11dc7054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7054))), 0x11dc4cedu);
L_11dc4ced:;
  /* 11dc4ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc4cef:;
  /* 11dc4cef pop edi */
  EDI = (pop32());
  /* 11dc4cf0 pop esi */
  ESI = (pop32());
  /* 11dc4cf1 pop ebp */
  EBP = (pop32());
  /* 11dc4cf2 pop ebx */
  EBX = (pop32());
  /* 11dc4cf3 ret  */
  ESPCHK(0x11dc4bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf4 @ 0x11dc4cf4 (86 bytes, 27 insns) */
void f_11dc4cf4(void) {
  FTRACE(0x11dc4cf4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4cf4 push esi */
  push32((uint32_t)(ESI));
  /* 11dc4cf5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc4cf9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11dc4cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4d00 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11dc4d03 call dword ptr [0x11dc7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7064))), 0x11dc4d09u);
  /* 11dc4d09 cmp dword ptr [0x11dca720], esi */
  { uint32_t _a=(r32((uint32_t)(0x11dca720))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4d0f jne 0x11dc4d19 */
  if (!C.zf) goto L_11dc4d19;
  /* 11dc4d11 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4d14 mov dword ptr [0x11dca720], eax */
  w32((uint32_t)(0x11dca720), (EAX));
L_11dc4d19:;
  /* 11dc4d19 cmp esi, 0x11dc8700 */
  { uint32_t _a=(ESI),_b=(0x11dc8700u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4d1f je 0x11dc4d41 */
  if (C.zf) goto L_11dc4d41;
  /* 11dc4d21 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4d24 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11dc4d26 push esi */
  push32((uint32_t)(ESI));
  /* 11dc4d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4d29 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dc4d2b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc4d2d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4d30 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dc4d33 push dword ptr [0x11dcb608] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb608))));
  /* 11dc4d39 call dword ptr [0x11dc7054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7054))), 0x11dc4d3fu);
  /* 11dc4d3f pop esi */
  ESI = (pop32());
  /* 11dc4d40 ret  */
  ESPCHK(0x11dc4cf4u, _esp0);
  ESP += 4; return;
L_11dc4d41:;
  /* 11dc4d41 or dword ptr [0x11dc8710], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11dc8710)))|(0xffffffffu); w32((uint32_t)(0x11dc8710), (_r)); fl_logic(_r,32); }
  /* 11dc4d48 pop esi */
  ESI = (pop32());
  /* 11dc4d49 ret  */
  ESPCHK(0x11dc4cf4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d4a @ 0x11dc4d4a (194 bytes, 66 insns) */
void f_11dc4d4a(void) {
  FTRACE(0x11dc4d4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4d4a push ebp */
  push32((uint32_t)(EBP));
  /* 11dc4d4b mov ebp, esp */
  EBP = (ESP);
  /* 11dc4d4d push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4d4e push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4d4f push esi */
  push32((uint32_t)(ESI));
  /* 11dc4d50 mov esi, dword ptr [0x11dc8704] */
  ESI = (r32((uint32_t)(0x11dc8704)));
  /* 11dc4d56 push edi */
  push32((uint32_t)(EDI));
L_11dc4d57:;
  /* 11dc4d57 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4d5b je 0x11dc4df5 */
  if (C.zf) goto L_11dc4df5;
  /* 11dc4d61 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc4d65 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11dc4d6b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11dc4d70:;
  /* 11dc4d70 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4d76 jne 0x11dc4db1 */
  if (!C.zf) goto L_11dc4db1;
  /* 11dc4d78 mov eax, ebx */
  EAX = (EBX);
  /* 11dc4d7a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11dc4d7f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4d82 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dc4d87 push eax */
  push32((uint32_t)(EAX));
  /* 11dc4d88 call dword ptr [0x11dc7064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7064))), 0x11dc4d8eu);
  /* 11dc4d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4d90 je 0x11dc4db1 */
  if (C.zf) goto L_11dc4db1;
  /* 11dc4d92 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11dc4d95 dec dword ptr [0x11dcb224] */
  { uint32_t _r=(r32((uint32_t)(0x11dcb224)))-1; w32((uint32_t)(0x11dcb224), (_r)); fl_dec(_r,32); }
  /* 11dc4d9b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11dc4d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4da0 je 0x11dc4da6 */
  if (C.zf) goto L_11dc4da6;
  /* 11dc4da2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4da4 jbe 0x11dc4da9 */
  if ((C.cf||C.zf)) goto L_11dc4da9;
L_11dc4da6:;
  /* 11dc4da6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11dc4da9:;
  /* 11dc4da9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dc4dac dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11dc4daf je 0x11dc4dbe */
  if (C.zf) goto L_11dc4dbe;
L_11dc4db1:;
  /* 11dc4db1 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4db7 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4dba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc4dbc jge 0x11dc4d70 */
  if ((C.sf==C.of)) goto L_11dc4d70;
L_11dc4dbe:;
  /* 11dc4dbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4dc2 mov ecx, esi */
  ECX = (ESI);
  /* 11dc4dc4 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11dc4dc7 je 0x11dc4df5 */
  if (C.zf) goto L_11dc4df5;
  /* 11dc4dc9 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4dcd jne 0x11dc4df5 */
  if (!C.zf) goto L_11dc4df5;
  /* 11dc4dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc4dd1 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11dc4dd4 pop edx */
  EDX = (pop32());
L_11dc4dd5:;
  /* 11dc4dd5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4dd8 jne 0x11dc4de6 */
  if (!C.zf) goto L_11dc4de6;
  /* 11dc4dda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc4ddb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4dde cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4de4 jl 0x11dc4dd5 */
  if ((C.sf!=C.of)) goto L_11dc4dd5;
L_11dc4de6:;
  /* 11dc4de6 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4dec jne 0x11dc4df5 */
  if (!C.zf) goto L_11dc4df5;
  /* 11dc4dee push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4def call 0x11dc4cf4 */
  push32(0x11dc4df4u); f_11dc4cf4();
  /* 11dc4df4 pop ecx */
  ECX = (pop32());
L_11dc4df5:;
  /* 11dc4df5 cmp esi, dword ptr [0x11dc8704] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dc8704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4dfb je 0x11dc4e07 */
  if (C.zf) goto L_11dc4e07;
  /* 11dc4dfd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e01 jg 0x11dc4d57 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc4d57;
L_11dc4e07:;
  /* 11dc4e07 pop edi */
  EDI = (pop32());
  /* 11dc4e08 pop esi */
  ESI = (pop32());
  /* 11dc4e09 pop ebx */
  EBX = (pop32());
  /* 11dc4e0a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc4e0b ret  */
  ESPCHK(0x11dc4d4au, _esp0);
  ESP += 4; return;
}

/* FUN_10004e0c @ 0x11dc4e0c (87 bytes, 34 insns) */
void f_11dc4e0c(void) {
  FTRACE(0x11dc4e0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4e0c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc4e10 mov edx, 0x11dc8700 */
  EDX = (0x11dc8700u);
  /* 11dc4e15 push esi */
  push32((uint32_t)(ESI));
  /* 11dc4e16 mov ecx, edx */
  ECX = (EDX);
L_11dc4e18:;
  /* 11dc4e18 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e1b jbe 0x11dc4e22 */
  if ((C.cf||C.zf)) goto L_11dc4e22;
  /* 11dc4e1d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e20 jb 0x11dc4e2a */
  if (C.cf) goto L_11dc4e2a;
L_11dc4e22:;
  /* 11dc4e22 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11dc4e24 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e26 je 0x11dc4e5f */
  if (C.zf) goto L_11dc4e5f;
  /* 11dc4e28 jmp 0x11dc4e18 */
  goto L_11dc4e18;
L_11dc4e2a:;
  /* 11dc4e2a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11dc4e2c jne 0x11dc4e5f */
  if (!C.zf) goto L_11dc4e5f;
  /* 11dc4e2e mov esi, eax */
  ESI = (EAX);
  /* 11dc4e30 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11dc4e35 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11dc4e3b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e3d jb 0x11dc4e5f */
  if (C.cf) goto L_11dc4e5f;
  /* 11dc4e3f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11dc4e43 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11dc4e45 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc4e49 mov ecx, eax */
  ECX = (EAX);
  /* 11dc4e4b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11dc4e50 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4e52 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11dc4e54 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4e56 pop esi */
  ESI = (pop32());
  /* 11dc4e57 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11dc4e5a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11dc4e5e ret  */
  ESPCHK(0x11dc4e0cu, _esp0);
  ESP += 4; return;
L_11dc4e5f:;
  /* 11dc4e5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc4e61 pop esi */
  ESI = (pop32());
  /* 11dc4e62 ret  */
  ESPCHK(0x11dc4e0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004e63 @ 0x11dc4e63 (69 bytes, 19 insns) */
void f_11dc4e63(void) {
  FTRACE(0x11dc4e63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4e63 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc4e67 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc4e6b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4e6e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11dc4e71 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11dc4e75 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dc4e79 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11dc4e7c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dc4e7e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11dc4e81 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e87 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11dc4e8e jne 0x11dc4ea7 */
  if (!C.zf) goto L_11dc4ea7;
  /* 11dc4e90 inc dword ptr [0x11dcb224] */
  { uint32_t _r=(r32((uint32_t)(0x11dcb224)))+1; w32((uint32_t)(0x11dcb224), (_r)); fl_inc(_r,32); }
  /* 11dc4e96 cmp dword ptr [0x11dcb224], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb224))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4e9d jne 0x11dc4ea7 */
  if (!C.zf) goto L_11dc4ea7;
  /* 11dc4e9f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dc4ea1 call 0x11dc4d4a */
  push32(0x11dc4ea6u); f_11dc4d4a();
  /* 11dc4ea6 pop ecx */
  ECX = (pop32());
L_11dc4ea7:;
  /* 11dc4ea7 ret  */
  ESPCHK(0x11dc4e63u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea8 @ 0x11dc4ea8 (520 bytes, 180 insns) */
void f_11dc4ea8(void) {
  FTRACE(0x11dc4ea8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc4ea8 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc4ea9 mov ebp, esp */
  EBP = (ESP);
  /* 11dc4eab push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4eac push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4ead push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4eae push esi */
  push32((uint32_t)(ESI));
  /* 11dc4eaf mov esi, dword ptr [0x11dca720] */
  ESI = (r32((uint32_t)(0x11dca720)));
  /* 11dc4eb5 push edi */
  push32((uint32_t)(EDI));
L_11dc4eb6:;
  /* 11dc4eb6 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11dc4eb9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4ebc je 0x11dc4f61 */
  if (C.zf) goto L_11dc4f61;
  /* 11dc4ec2 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11dc4ec5 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11dc4ecb mov eax, edi */
  EAX = (EDI);
  /* 11dc4ecd sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4ecf sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4ed2 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11dc4ed5 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11dc4ed8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4eda cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4edc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dc4edf jae 0x11dc4f1b */
  if (!C.cf) goto L_11dc4f1b;
L_11dc4ee1:;
  /* 11dc4ee1 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11dc4ee3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc4ee6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4ee8 jl 0x11dc4f04 */
  if ((C.sf!=C.of)) goto L_11dc4f04;
  /* 11dc4eea cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4eed jbe 0x11dc4f04 */
  if ((C.cf||C.zf)) goto L_11dc4f04;
  /* 11dc4eef push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc4ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11dc4ef2 call 0x11dc50b0 */
  push32(0x11dc4ef7u); f_11dc50b0();
  /* 11dc4ef7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4efc jne 0x11dc4f73 */
  if (!C.zf) goto L_11dc4f73;
  /* 11dc4efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc4f01 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11dc4f04:;
  /* 11dc4f04 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4f07 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11dc4f0d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4f12 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dc4f17 jb 0x11dc4ee1 */
  if (C.cf) goto L_11dc4ee1;
  /* 11dc4f19 jmp 0x11dc4f1e */
  goto L_11dc4f1e;
L_11dc4f1b:;
  /* 11dc4f1b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11dc4f1e:;
  /* 11dc4f1e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11dc4f21 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11dc4f24 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11dc4f27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dc4f2a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dc4f2f jae 0x11dc4f64 */
  if (!C.cf) goto L_11dc4f64;
L_11dc4f31:;
  /* 11dc4f31 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11dc4f33 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f35 jl 0x11dc4f50 */
  if ((C.sf!=C.of)) goto L_11dc4f50;
  /* 11dc4f37 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f3a jbe 0x11dc4f50 */
  if ((C.cf||C.zf)) goto L_11dc4f50;
  /* 11dc4f3c push ebx */
  push32((uint32_t)(EBX));
  /* 11dc4f3d push eax */
  push32((uint32_t)(EAX));
  /* 11dc4f3e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11dc4f41 call 0x11dc50b0 */
  push32(0x11dc4f46u); f_11dc50b0();
  /* 11dc4f46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc4f4b jne 0x11dc4f73 */
  if (!C.zf) goto L_11dc4f73;
  /* 11dc4f4d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11dc4f50:;
  /* 11dc4f50 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dc4f57 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4f5a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f5d jb 0x11dc4f31 */
  if (C.cf) goto L_11dc4f31;
  /* 11dc4f5f jmp 0x11dc4f64 */
  goto L_11dc4f64;
L_11dc4f61:;
  /* 11dc4f61 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11dc4f64:;
  /* 11dc4f64 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11dc4f66 cmp esi, dword ptr [0x11dca720] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dca720))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f6c je 0x11dc4f83 */
  if (C.zf) goto L_11dc4f83;
  /* 11dc4f6e jmp 0x11dc4eb6 */
  goto L_11dc4eb6;
L_11dc4f73:;
  /* 11dc4f73 mov dword ptr [0x11dca720], esi */
  w32((uint32_t)(0x11dca720), (ESI));
  /* 11dc4f79 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc4f7b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11dc4f7e jmp 0x11dc50ab */
  goto L_11dc50ab;
L_11dc4f83:;
  /* 11dc4f83 mov eax, 0x11dc8700 */
  EAX = (0x11dc8700u);
  /* 11dc4f88 mov edi, eax */
  EDI = (EAX);
L_11dc4f8a:;
  /* 11dc4f8a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f8e je 0x11dc4f96 */
  if (C.zf) goto L_11dc4f96;
  /* 11dc4f90 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f94 jne 0x11dc4fa2 */
  if (!C.zf) goto L_11dc4fa2;
L_11dc4f96:;
  /* 11dc4f96 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11dc4f98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4f9a je 0x11dc5077 */
  if (C.zf) goto L_11dc5077;
  /* 11dc4fa0 jmp 0x11dc4f8a */
  goto L_11dc4f8a;
L_11dc4fa2:;
  /* 11dc4fa2 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11dc4fa5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc4fa9 mov esi, ebx */
  ESI = (EBX);
  /* 11dc4fab mov eax, ebx */
  EAX = (EBX);
  /* 11dc4fad sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4faf sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc4fb2 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11dc4fb5 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11dc4fb8 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4fbb cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4fbe jne 0x11dc4fd1 */
  if (!C.zf) goto L_11dc4fd1;
L_11dc4fc0:;
  /* 11dc4fc0 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4fc4 jge 0x11dc4fd1 */
  if ((C.sf==C.of)) goto L_11dc4fd1;
  /* 11dc4fc6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc4fc9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11dc4fcc cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4fcf je 0x11dc4fc0 */
  if (C.zf) goto L_11dc4fc0;
L_11dc4fd1:;
  /* 11dc4fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc4fd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dc4fd6 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11dc4fd9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dc4fde push eax */
  push32((uint32_t)(EAX));
  /* 11dc4fdf push esi */
  push32((uint32_t)(ESI));
  /* 11dc4fe0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dc4fe3 call dword ptr [0x11dc703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc703c))), 0x11dc4fe9u);
  /* 11dc4fe9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc4feb jne 0x11dc50a9 */
  if (!C.zf) goto L_11dc50a9;
  /* 11dc4ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc4ff3 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11dc4ff6 push esi */
  push32((uint32_t)(ESI));
  /* 11dc4ff7 call 0x11dc5380 */
  push32(0x11dc4ffcu); f_11dc5380();
  /* 11dc4ffc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc4fff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dc5004 mov ecx, ebx */
  ECX = (EBX);
  /* 11dc5006 jle 0x11dc5038 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc5038;
  /* 11dc5008 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11dc500b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dc500e:;
  /* 11dc500e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11dc5015 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11dc5018 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11dc501b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11dc5020 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11dc5022 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11dc5024 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11dc502b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5030 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5033 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11dc5036 jne 0x11dc500e */
  if (!C.zf) goto L_11dc500e;
L_11dc5038:;
  /* 11dc5038 mov dword ptr [0x11dca720], edi */
  w32((uint32_t)(0x11dca720), (EDI));
  /* 11dc503e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11dc5044:;
  /* 11dc5044 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5046 jae 0x11dc5054 */
  if (!C.cf) goto L_11dc5054;
  /* 11dc5048 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc504b je 0x11dc5052 */
  if (C.zf) goto L_11dc5052;
  /* 11dc504d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5050 jmp 0x11dc5044 */
  goto L_11dc5044;
L_11dc5052:;
  /* 11dc5052 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11dc5054:;
  /* 11dc5054 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5056 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5058 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11dc505b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc505e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11dc5061 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11dc5064 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc5066 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc5069 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11dc506d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11dc5073 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11dc5075 jmp 0x11dc50ab */
  goto L_11dc50ab;
L_11dc5077:;
  /* 11dc5077 call 0x11dc4bb0 */
  push32(0x11dc507cu); f_11dc4bb0();
  /* 11dc507c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc507e je 0x11dc50a9 */
  if (C.zf) goto L_11dc50a9;
  /* 11dc5080 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dc5083 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11dc5086 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11dc508a mov dword ptr [0x11dca720], eax */
  w32((uint32_t)(0x11dca720), (EAX));
  /* 11dc508f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11dc5091 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11dc5096 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5098 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11dc509b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11dc509e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc50a1 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11dc50a7 jmp 0x11dc50ab */
  goto L_11dc50ab;
L_11dc50a9:;
  /* 11dc50a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc50ab:;
  /* 11dc50ab pop edi */
  EDI = (pop32());
  /* 11dc50ac pop esi */
  ESI = (pop32());
  /* 11dc50ad pop ebx */
  EBX = (pop32());
  /* 11dc50ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc50af ret  */
  ESPCHK(0x11dc4ea8u, _esp0);
  ESP += 4; return;
}

/* FUN_100050b0 @ 0x11dc50b0 (292 bytes, 125 insns) */
void f_11dc50b0(void) {
  FTRACE(0x11dc50b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc50b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc50b1 mov ebp, esp */
  EBP = (ESP);
  /* 11dc50b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc50b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc50b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc50ba push ebx */
  push32((uint32_t)(EBX));
  /* 11dc50bb push esi */
  push32((uint32_t)(ESI));
  /* 11dc50bc mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11dc50bf push edi */
  push32((uint32_t)(EDI));
  /* 11dc50c0 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11dc50c2 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11dc50c8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc50ca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11dc50cd mov eax, edi */
  EAX = (EDI);
  /* 11dc50cf mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11dc50d2 jb 0x11dc50f5 */
  if (C.cf) goto L_11dc50f5;
  /* 11dc50d4 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11dc50d7 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11dc50d9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc50db jae 0x11dc50e4 */
  if (!C.cf) goto L_11dc50e4;
  /* 11dc50dd add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11dc50df sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc50e2 jmp 0x11dc50ed */
  goto L_11dc50ed;
L_11dc50e4:;
  /* 11dc50e4 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc50e8 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11dc50eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11dc50ed:;
  /* 11dc50ed lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11dc50f0 jmp 0x11dc51c3 */
  goto L_11dc51c3;
L_11dc50f5:;
  /* 11dc50f5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc50f7 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc50fa je 0x11dc50fe */
  if (C.zf) goto L_11dc50fe;
  /* 11dc50fc mov eax, esi */
  EAX = (ESI);
L_11dc50fe:;
  /* 11dc50fe lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11dc5101 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5103 jae 0x11dc5148 */
  if (!C.cf) goto L_11dc5148;
L_11dc5105:;
  /* 11dc5105 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11dc5107 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11dc5109 jne 0x11dc513b */
  if (!C.zf) goto L_11dc513b;
  /* 11dc510b push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc510d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11dc5110 pop esi */
  ESI = (pop32());
L_11dc5111:;
  /* 11dc5111 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5114 jne 0x11dc511a */
  if (!C.zf) goto L_11dc511a;
  /* 11dc5116 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc5117 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5118 jmp 0x11dc5111 */
  goto L_11dc5111;
L_11dc511a:;
  /* 11dc511a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc511c jae 0x11dc516c */
  if (!C.cf) goto L_11dc516c;
  /* 11dc511e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5121 jne 0x11dc5128 */
  if (!C.zf) goto L_11dc5128;
  /* 11dc5123 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11dc5126 jmp 0x11dc5134 */
  goto L_11dc5134;
L_11dc5128:;
  /* 11dc5128 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc512b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc512e jb 0x11dc51cd */
  if (C.cf) goto L_11dc51cd;
L_11dc5134:;
  /* 11dc5134 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11dc5137 mov eax, ebx */
  EAX = (EBX);
  /* 11dc5139 jmp 0x11dc5140 */
  goto L_11dc5140;
L_11dc513b:;
  /* 11dc513b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11dc513e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dc5140:;
  /* 11dc5140 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11dc5143 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5146 jb 0x11dc5105 */
  if (C.cf) goto L_11dc5105;
L_11dc5148:;
  /* 11dc5148 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11dc514b:;
  /* 11dc514b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc514d jae 0x11dc51cd */
  if (!C.cf) goto L_11dc51cd;
  /* 11dc514f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11dc5152 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5155 jae 0x11dc51cd */
  if (!C.cf) goto L_11dc51cd;
  /* 11dc5157 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5159 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc515b jne 0x11dc519d */
  if (!C.zf) goto L_11dc519d;
  /* 11dc515d push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc515f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11dc5162 pop eax */
  EAX = (pop32());
L_11dc5163:;
  /* 11dc5163 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5166 jne 0x11dc518d */
  if (!C.zf) goto L_11dc518d;
  /* 11dc5168 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11dc5169 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc516a jmp 0x11dc5163 */
  goto L_11dc5163;
L_11dc516c:;
  /* 11dc516c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11dc516f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5172 jae 0x11dc517d */
  if (!C.cf) goto L_11dc517d;
  /* 11dc5174 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5176 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11dc5178 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11dc517b jmp 0x11dc5186 */
  goto L_11dc5186;
L_11dc517d:;
  /* 11dc517d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc5181 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11dc5184 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11dc5186:;
  /* 11dc5186 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11dc5188 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc518b jmp 0x11dc51c3 */
  goto L_11dc51c3;
L_11dc518d:;
  /* 11dc518d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc518f jae 0x11dc51a4 */
  if (!C.cf) goto L_11dc51a4;
  /* 11dc5191 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11dc5194 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5197 jb 0x11dc51cd */
  if (C.cf) goto L_11dc51cd;
  /* 11dc5199 mov esi, ebx */
  ESI = (EBX);
  /* 11dc519b jmp 0x11dc514b */
  goto L_11dc514b;
L_11dc519d:;
  /* 11dc519d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11dc51a0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc51a2 jmp 0x11dc514b */
  goto L_11dc514b;
L_11dc51a4:;
  /* 11dc51a4 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11dc51a7 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc51aa jae 0x11dc51b5 */
  if (!C.cf) goto L_11dc51b5;
  /* 11dc51ac sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc51ae mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11dc51b0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11dc51b3 jmp 0x11dc51be */
  goto L_11dc51be;
L_11dc51b5:;
  /* 11dc51b5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11dc51b9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11dc51bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11dc51be:;
  /* 11dc51be mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11dc51c0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11dc51c3:;
  /* 11dc51c3 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dc51c6 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11dc51c9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc51cb jmp 0x11dc51cf */
  goto L_11dc51cf;
L_11dc51cd:;
  /* 11dc51cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc51cf:;
  /* 11dc51cf pop edi */
  EDI = (pop32());
  /* 11dc51d0 pop esi */
  ESI = (pop32());
  /* 11dc51d1 pop ebx */
  EBX = (pop32());
  /* 11dc51d2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc51d3 ret  */
  ESPCHK(0x11dc50b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d4 @ 0x11dc51d4 (137 bytes, 50 insns) */
void f_11dc51d4(void) {
  FTRACE(0x11dc51d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc51d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc51d5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc51d7 cmp dword ptr [0x11dcb228], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb228))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc51dd push esi */
  push32((uint32_t)(ESI));
  /* 11dc51de push edi */
  push32((uint32_t)(EDI));
  /* 11dc51df jne 0x11dc5223 */
  if (!C.zf) goto L_11dc5223;
  /* 11dc51e1 push 0x11dc7538 */
  push32((uint32_t)(0x11dc7538u));
  /* 11dc51e6 call dword ptr [0x11dc7024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7024))), 0x11dc51ecu);
  /* 11dc51ec mov edi, eax */
  EDI = (EAX);
  /* 11dc51ee cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc51f0 je 0x11dc5259 */
  if (C.zf) goto L_11dc5259;
  /* 11dc51f2 mov esi, dword ptr [0x11dc7030] */
  ESI = (r32((uint32_t)(0x11dc7030)));
  /* 11dc51f8 push 0x11dc752c */
  push32((uint32_t)(0x11dc752cu));
  /* 11dc51fd push edi */
  push32((uint32_t)(EDI));
  /* 11dc51fe call esi */
  call_ind((uint32_t)(ESI), 0x11dc5200u);
  /* 11dc5200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5202 mov dword ptr [0x11dcb228], eax */
  w32((uint32_t)(0x11dcb228), (EAX));
  /* 11dc5207 je 0x11dc5259 */
  if (C.zf) goto L_11dc5259;
  /* 11dc5209 push 0x11dc751c */
  push32((uint32_t)(0x11dc751cu));
  /* 11dc520e push edi */
  push32((uint32_t)(EDI));
  /* 11dc520f call esi */
  call_ind((uint32_t)(ESI), 0x11dc5211u);
  /* 11dc5211 push 0x11dc7508 */
  push32((uint32_t)(0x11dc7508u));
  /* 11dc5216 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5217 mov dword ptr [0x11dcb22c], eax */
  w32((uint32_t)(0x11dcb22c), (EAX));
  /* 11dc521c call esi */
  call_ind((uint32_t)(ESI), 0x11dc521eu);
  /* 11dc521e mov dword ptr [0x11dcb230], eax */
  w32((uint32_t)(0x11dcb230), (EAX));
L_11dc5223:;
  /* 11dc5223 mov eax, dword ptr [0x11dcb22c] */
  EAX = (r32((uint32_t)(0x11dcb22c)));
  /* 11dc5228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc522a je 0x11dc5242 */
  if (C.zf) goto L_11dc5242;
  /* 11dc522c call eax */
  call_ind((uint32_t)(EAX), 0x11dc522eu);
  /* 11dc522e mov ebx, eax */
  EBX = (EAX);
  /* 11dc5230 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc5232 je 0x11dc5242 */
  if (C.zf) goto L_11dc5242;
  /* 11dc5234 mov eax, dword ptr [0x11dcb230] */
  EAX = (r32((uint32_t)(0x11dcb230)));
  /* 11dc5239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc523b je 0x11dc5242 */
  if (C.zf) goto L_11dc5242;
  /* 11dc523d push ebx */
  push32((uint32_t)(EBX));
  /* 11dc523e call eax */
  call_ind((uint32_t)(EAX), 0x11dc5240u);
  /* 11dc5240 mov ebx, eax */
  EBX = (EAX);
L_11dc5242:;
  /* 11dc5242 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11dc5246 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11dc524a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11dc524e push ebx */
  push32((uint32_t)(EBX));
  /* 11dc524f call dword ptr [0x11dcb228] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dcb228))), 0x11dc5255u);
L_11dc5255:;
  /* 11dc5255 pop edi */
  EDI = (pop32());
  /* 11dc5256 pop esi */
  ESI = (pop32());
  /* 11dc5257 pop ebx */
  EBX = (pop32());
  /* 11dc5258 ret  */
  ESPCHK(0x11dc51d4u, _esp0);
  ESP += 4; return;
L_11dc5259:;
  /* 11dc5259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc525b jmp 0x11dc5255 */
  goto L_11dc5255;
}

/* _strncpy @ 0x11dc5260 (254 bytes, 109 insns) */
void f_11dc5260(void) {
  FTRACE(0x11dc5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5260 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dc5264 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5265 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dc5267 je 0x11dc52e3 */
  if (C.zf) goto L_11dc52e3;
  /* 11dc5269 push esi */
  push32((uint32_t)(ESI));
  /* 11dc526a push ebx */
  push32((uint32_t)(EBX));
  /* 11dc526b mov ebx, ecx */
  EBX = (ECX);
  /* 11dc526d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11dc5271 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11dc5277 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc527b jne 0x11dc5284 */
  if (!C.zf) goto L_11dc5284;
  /* 11dc527d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5280 jne 0x11dc52f1 */
  if (!C.zf) goto L_11dc52f1;
  /* 11dc5282 jmp 0x11dc52a5 */
  goto L_11dc52a5;
L_11dc5284:;
  /* 11dc5284 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5287 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5289 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc528a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc528b je 0x11dc52b2 */
  if (C.zf) goto L_11dc52b2;
  /* 11dc528d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc528f je 0x11dc52ba */
  if (C.zf) goto L_11dc52ba;
  /* 11dc5291 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11dc5297 jne 0x11dc5284 */
  if (!C.zf) goto L_11dc5284;
  /* 11dc5299 mov ebx, ecx */
  EBX = (ECX);
  /* 11dc529b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc529e jne 0x11dc52f1 */
  if (!C.zf) goto L_11dc52f1;
L_11dc52a0:;
  /* 11dc52a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11dc52a3 je 0x11dc52b2 */
  if (C.zf) goto L_11dc52b2;
L_11dc52a5:;
  /* 11dc52a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc52a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc52a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc52aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc52ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11dc52ad je 0x11dc52de */
  if (C.zf) goto L_11dc52de;
  /* 11dc52af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dc52b0 jne 0x11dc52a5 */
  if (!C.zf) goto L_11dc52a5;
L_11dc52b2:;
  /* 11dc52b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc52b6 pop ebx */
  EBX = (pop32());
  /* 11dc52b7 pop esi */
  ESI = (pop32());
  /* 11dc52b8 pop edi */
  EDI = (pop32());
  /* 11dc52b9 ret  */
  ESPCHK(0x11dc5260u, _esp0);
  ESP += 4; return;
L_11dc52ba:;
  /* 11dc52ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dc52c0 je 0x11dc52d4 */
  if (C.zf) goto L_11dc52d4;
L_11dc52c2:;
  /* 11dc52c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc52c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc52c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc52c6 je 0x11dc5356 */
  if (C.zf) goto L_11dc5356;
  /* 11dc52cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dc52d2 jne 0x11dc52c2 */
  if (!C.zf) goto L_11dc52c2;
L_11dc52d4:;
  /* 11dc52d4 mov ebx, ecx */
  EBX = (ECX);
  /* 11dc52d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc52d9 jne 0x11dc5347 */
  if (!C.zf) goto L_11dc5347;
L_11dc52db:;
  /* 11dc52db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc52dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11dc52de:;
  /* 11dc52de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11dc52df jne 0x11dc52db */
  if (!C.zf) goto L_11dc52db;
  /* 11dc52e1 pop ebx */
  EBX = (pop32());
  /* 11dc52e2 pop esi */
  ESI = (pop32());
L_11dc52e3:;
  /* 11dc52e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc52e7 pop edi */
  EDI = (pop32());
  /* 11dc52e8 ret  */
  ESPCHK(0x11dc5260u, _esp0);
  ESP += 4; return;
L_11dc52e9:;
  /* 11dc52e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dc52eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc52ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc52ef je 0x11dc52a0 */
  if (C.zf) goto L_11dc52a0;
L_11dc52f1:;
  /* 11dc52f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11dc52f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11dc52f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc52fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dc52fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc52ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11dc5301 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5304 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11dc5309 je 0x11dc52e9 */
  if (C.zf) goto L_11dc52e9;
  /* 11dc530b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11dc530d je 0x11dc533b */
  if (C.zf) goto L_11dc533b;
  /* 11dc530f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11dc5311 je 0x11dc5331 */
  if (C.zf) goto L_11dc5331;
  /* 11dc5313 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11dc5319 je 0x11dc5327 */
  if (C.zf) goto L_11dc5327;
  /* 11dc531b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11dc5321 jne 0x11dc52e9 */
  if (!C.zf) goto L_11dc52e9;
  /* 11dc5323 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dc5325 jmp 0x11dc533f */
  goto L_11dc533f;
L_11dc5327:;
  /* 11dc5327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dc532d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dc532f jmp 0x11dc533f */
  goto L_11dc533f;
L_11dc5331:;
  /* 11dc5331 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5337 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11dc5339 jmp 0x11dc533f */
  goto L_11dc533f;
L_11dc533b:;
  /* 11dc533b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc533d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11dc533f:;
  /* 11dc533f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5344 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc5345 je 0x11dc5351 */
  if (C.zf) goto L_11dc5351;
L_11dc5347:;
  /* 11dc5347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc5349:;
  /* 11dc5349 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11dc534b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc534e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc534f jne 0x11dc5349 */
  if (!C.zf) goto L_11dc5349;
L_11dc5351:;
  /* 11dc5351 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11dc5354 jne 0x11dc52db */
  if (!C.zf) goto L_11dc52db;
L_11dc5356:;
  /* 11dc5356 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc535a pop ebx */
  EBX = (pop32());
  /* 11dc535b pop esi */
  ESI = (pop32());
  /* 11dc535c pop edi */
  EDI = (pop32());
  /* 11dc535d ret  */
  ESPCHK(0x11dc5260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000535e @ 0x11dc535e (27 bytes, 13 insns) */
void f_11dc535e(void) {
  FTRACE(0x11dc535eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc535e mov eax, dword ptr [0x11dcb234] */
  EAX = (r32((uint32_t)(0x11dcb234)));
  /* 11dc5363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5365 je 0x11dc5376 */
  if (C.zf) goto L_11dc5376;
  /* 11dc5367 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11dc536b call eax */
  call_ind((uint32_t)(EAX), 0x11dc536du);
  /* 11dc536d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc536f pop ecx */
  ECX = (pop32());
  /* 11dc5370 je 0x11dc5376 */
  if (C.zf) goto L_11dc5376;
  /* 11dc5372 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc5374 pop eax */
  EAX = (pop32());
  /* 11dc5375 ret  */
  ESPCHK(0x11dc535eu, _esp0);
  ESP += 4; return;
L_11dc5376:;
  /* 11dc5376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5378 ret  */
  ESPCHK(0x11dc535eu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11dc5380 (88 bytes, 40 insns) */
void f_11dc5380(void) {
  FTRACE(0x11dc5380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5380 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11dc5384 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc5388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dc538a je 0x11dc53d3 */
  if (C.zf) goto L_11dc53d3;
  /* 11dc538c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc538e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11dc5392 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5393 mov edi, ecx */
  EDI = (ECX);
  /* 11dc5395 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5398 jb 0x11dc53c7 */
  if (C.cf) goto L_11dc53c7;
  /* 11dc539a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc539c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11dc539f je 0x11dc53a9 */
  if (C.zf) goto L_11dc53a9;
  /* 11dc53a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11dc53a3:;
  /* 11dc53a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc53a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc53a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc53a7 jne 0x11dc53a3 */
  if (!C.zf) goto L_11dc53a3;
L_11dc53a9:;
  /* 11dc53a9 mov ecx, eax */
  ECX = (EAX);
  /* 11dc53ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc53ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc53b0 mov ecx, eax */
  ECX = (EAX);
  /* 11dc53b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11dc53b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc53b7 mov ecx, edx */
  ECX = (EDX);
  /* 11dc53b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dc53bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc53bf je 0x11dc53c7 */
  if (C.zf) goto L_11dc53c7;
  /* 11dc53c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dc53c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dc53c5 je 0x11dc53cd */
  if (C.zf) goto L_11dc53cd;
L_11dc53c7:;
  /* 11dc53c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc53c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc53ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11dc53cb jne 0x11dc53c7 */
  if (!C.zf) goto L_11dc53c7;
L_11dc53cd:;
  /* 11dc53cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc53d1 pop edi */
  EDI = (pop32());
  /* 11dc53d2 ret  */
  ESPCHK(0x11dc5380u, _esp0);
  ESP += 4; return;
L_11dc53d3:;
  /* 11dc53d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc53d7 ret  */
  ESPCHK(0x11dc5380u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11dc53d8 (32 bytes, 18 insns) */
void f_11dc53d8(void) {
  FTRACE(0x11dc53d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc53d8 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc53d9 mov ebp, esp */
  EBP = (ESP);
  /* 11dc53db push ebx */
  push32((uint32_t)(EBX));
  /* 11dc53dc push esi */
  push32((uint32_t)(ESI));
  /* 11dc53dd push edi */
  push32((uint32_t)(EDI));
  /* 11dc53de push ebp */
  push32((uint32_t)(EBP));
  /* 11dc53df push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc53e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc53e3 push 0x11dc53f0 */
  push32((uint32_t)(0x11dc53f0u));
  /* 11dc53e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc53eb call 0x11dc6314 */
  push32(0x11dc53f0u); f_11dc6314();
  /* 11dc53f0 pop ebp */
  EBP = (pop32());
  /* 11dc53f1 pop edi */
  EDI = (pop32());
  /* 11dc53f2 pop esi */
  ESI = (pop32());
  /* 11dc53f3 pop ebx */
  EBX = (pop32());
  /* 11dc53f4 mov esp, ebp */
  ESP = (EBP);
  /* 11dc53f6 pop ebp */
  EBP = (pop32());
  /* 11dc53f7 ret  */
  ESPCHK(0x11dc53d8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11dc541a (104 bytes, 33 insns) */
void f_11dc541a(void) {
  FTRACE(0x11dc541au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc541a push ebx */
  push32((uint32_t)(EBX));
  /* 11dc541b push esi */
  push32((uint32_t)(ESI));
  /* 11dc541c push edi */
  push32((uint32_t)(EDI));
  /* 11dc541d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc5421 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5422 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11dc5424 push 0x11dc53f8 */
  push32((uint32_t)(0x11dc53f8u));
  /* 11dc5429 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11dc5430 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11dc5437:;
  /* 11dc5437 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11dc543b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dc543e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11dc5441 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5444 je 0x11dc5474 */
  if (C.zf) goto L_11dc5474;
  /* 11dc5446 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc544a je 0x11dc5474 */
  if (C.zf) goto L_11dc5474;
  /* 11dc544c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11dc544f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11dc5452 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11dc5456 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11dc5459 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc545e jne 0x11dc5472 */
  if (!C.zf) goto L_11dc5472;
  /* 11dc5460 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11dc5465 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11dc5469 call 0x11dc54ae */
  push32(0x11dc546eu); f_11dc54ae();
  /* 11dc546e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11dc5472u);
L_11dc5472:;
  /* 11dc5472 jmp 0x11dc5437 */
  goto L_11dc5437;
L_11dc5474:;
  /* 11dc5474 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11dc547b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc547e pop edi */
  EDI = (pop32());
  /* 11dc547f pop esi */
  ESI = (pop32());
  /* 11dc5480 pop ebx */
  EBX = (pop32());
  /* 11dc5481 ret  */
  ESPCHK(0x11dc541au, _esp0);
  ESP += 4; return;
}

/* FUN_100054ae @ 0x11dc54ae (24 bytes, 10 insns) */
void f_11dc54ae(void) {
  FTRACE(0x11dc54aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc54ae push ebx */
  push32((uint32_t)(EBX));
  /* 11dc54af push ecx */
  push32((uint32_t)(ECX));
  /* 11dc54b0 mov ebx, 0x11dca730 */
  EBX = (0x11dca730u);
  /* 11dc54b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc54b8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11dc54bb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11dc54be mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11dc54c1 pop ecx */
  ECX = (pop32());
  /* 11dc54c2 pop ebx */
  EBX = (pop32());
  /* 11dc54c3 ret 4 */
  ESPCHK(0x11dc54aeu, _esp0);
  ESP += 8; return;
}

/* FUN_1000558d @ 0x11dc558d (27 bytes, 11 insns) */
void f_11dc558d(void) {
  FTRACE(0x11dc558du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc558d push ebp */
  push32((uint32_t)(EBP));
  /* 11dc558e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc5592 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11dc5594 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11dc5597 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5598 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dc559b push eax */
  push32((uint32_t)(EAX));
  /* 11dc559c call 0x11dc541a */
  push32(0x11dc55a1u); f_11dc541a();
  /* 11dc55a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc55a4 pop ebp */
  EBP = (pop32());
  /* 11dc55a5 ret 4 */
  ESPCHK(0x11dc558du, _esp0);
  ESP += 8; return;
}

/* FUN_100055a8 @ 0x11dc55a8 (511 bytes, 193 insns) */
void f_11dc55a8(void) {
  FTRACE(0x11dc55a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc55a8 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc55a9 mov ebp, esp */
  EBP = (ESP);
  /* 11dc55ab push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dc55ad push 0x11dc7550 */
  push32((uint32_t)(0x11dc7550u));
  /* 11dc55b2 push 0x11dc54d0 */
  push32((uint32_t)(0x11dc54d0u));
  /* 11dc55b7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dc55bd push eax */
  push32((uint32_t)(EAX));
  /* 11dc55be mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dc55c5 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc55c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc55c9 push esi */
  push32((uint32_t)(ESI));
  /* 11dc55ca push edi */
  push32((uint32_t)(EDI));
  /* 11dc55cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dc55ce xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc55d0 cmp dword ptr [0x11dcb25c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dcb25c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc55d6 jne 0x11dc561e */
  if (!C.zf) goto L_11dc561e;
  /* 11dc55d8 push edi */
  push32((uint32_t)(EDI));
  /* 11dc55d9 push edi */
  push32((uint32_t)(EDI));
  /* 11dc55da push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc55dc pop ebx */
  EBX = (pop32());
  /* 11dc55dd push ebx */
  push32((uint32_t)(EBX));
  /* 11dc55de push 0x11dc7548 */
  push32((uint32_t)(0x11dc7548u));
  /* 11dc55e3 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11dc55e8 push esi */
  push32((uint32_t)(ESI));
  /* 11dc55e9 push edi */
  push32((uint32_t)(EDI));
  /* 11dc55ea call dword ptr [0x11dc7014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7014))), 0x11dc55f0u);
  /* 11dc55f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc55f2 je 0x11dc55fc */
  if (C.zf) goto L_11dc55fc;
  /* 11dc55f4 mov dword ptr [0x11dcb25c], ebx */
  w32((uint32_t)(0x11dcb25c), (EBX));
  /* 11dc55fa jmp 0x11dc561e */
  goto L_11dc561e;
L_11dc55fc:;
  /* 11dc55fc push edi */
  push32((uint32_t)(EDI));
  /* 11dc55fd push edi */
  push32((uint32_t)(EDI));
  /* 11dc55fe push ebx */
  push32((uint32_t)(EBX));
  /* 11dc55ff push 0x11dc7544 */
  push32((uint32_t)(0x11dc7544u));
  /* 11dc5604 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5605 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5606 call dword ptr [0x11dc7018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7018))), 0x11dc560cu);
  /* 11dc560c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc560e je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc5614 mov dword ptr [0x11dcb25c], 2 */
  w32((uint32_t)(0x11dcb25c), (0x2u));
L_11dc561e:;
  /* 11dc561e cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5621 jle 0x11dc5633 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc5633;
  /* 11dc5623 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dc5626 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc5629 call 0x11dc57cc */
  push32(0x11dc562eu); f_11dc57cc();
  /* 11dc562e pop ecx */
  ECX = (pop32());
  /* 11dc562f pop ecx */
  ECX = (pop32());
  /* 11dc5630 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11dc5633:;
  /* 11dc5633 mov eax, dword ptr [0x11dcb25c] */
  EAX = (r32((uint32_t)(0x11dcb25c)));
  /* 11dc5638 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc563b jne 0x11dc565a */
  if (!C.zf) goto L_11dc565a;
  /* 11dc563d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11dc5640 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dc5643 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dc5646 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc5649 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc564c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc564f call dword ptr [0x11dc7018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7018))), 0x11dc5655u);
  /* 11dc5655 jmp 0x11dc5738 */
  goto L_11dc5738;
L_11dc565a:;
  /* 11dc565a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc565d jne 0x11dc5736 */
  if (!C.zf) goto L_11dc5736;
  /* 11dc5663 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5666 jne 0x11dc5670 */
  if (!C.zf) goto L_11dc5670;
  /* 11dc5668 mov eax, dword ptr [0x11dcb254] */
  EAX = (r32((uint32_t)(0x11dcb254)));
  /* 11dc566d mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11dc5670:;
  /* 11dc5670 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5671 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5672 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dc5675 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc5678 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dc567b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc567d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc567f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5682 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc5683 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5684 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11dc5687 call dword ptr [0x11dc7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7028))), 0x11dc568du);
  /* 11dc568d mov ebx, eax */
  EBX = (EAX);
  /* 11dc568f mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11dc5692 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5694 je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc569a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11dc569d lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11dc56a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc56a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11dc56a5 call 0x11dc4330 */
  push32(0x11dc56aau); f_11dc4330();
  /* 11dc56aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dc56ad mov eax, esp */
  EAX = (ESP);
  /* 11dc56af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dc56b2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc56b6 jmp 0x11dc56cb */
  goto L_11dc56cb;
  /* 11dc56b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc56ba pop eax */
  EAX = (pop32());
  /* 11dc56bb ret  */
  ESPCHK(0x11dc55a8u, _esp0);
  ESP += 4; return;
  /* 11dc56bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dc56bf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc56c1 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11dc56c4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc56c8 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11dc56cb:;
  /* 11dc56cb cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc56ce je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc56d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc56d1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dc56d4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dc56d7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc56da push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc56dc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11dc56df call dword ptr [0x11dc7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7028))), 0x11dc56e5u);
  /* 11dc56e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc56e7 je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc56e9 push edi */
  push32((uint32_t)(EDI));
  /* 11dc56ea push edi */
  push32((uint32_t)(EDI));
  /* 11dc56eb push ebx */
  push32((uint32_t)(EBX));
  /* 11dc56ec push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dc56ef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc56f2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc56f5 call dword ptr [0x11dc7014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7014))), 0x11dc56fbu);
  /* 11dc56fb mov esi, eax */
  ESI = (EAX);
  /* 11dc56fd mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11dc5700 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5702 je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc5704 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11dc5708 je 0x11dc574a */
  if (C.zf) goto L_11dc574a;
  /* 11dc570a cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc570d je 0x11dc57c5 */
  if (C.zf) goto L_11dc57c5;
  /* 11dc5713 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5716 jg 0x11dc5736 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc5736;
  /* 11dc5718 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11dc571b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dc571e push ebx */
  push32((uint32_t)(EBX));
  /* 11dc571f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dc5722 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc5725 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc5728 call dword ptr [0x11dc7014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7014))), 0x11dc572eu);
  /* 11dc572e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5730 jne 0x11dc57c5 */
  if (!C.zf) goto L_11dc57c5;
L_11dc5736:;
  /* 11dc5736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc5738:;
  /* 11dc5738 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11dc573b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dc573e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dc5745 pop edi */
  EDI = (pop32());
  /* 11dc5746 pop esi */
  ESI = (pop32());
  /* 11dc5747 pop ebx */
  EBX = (pop32());
  /* 11dc5748 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5749 ret  */
  ESPCHK(0x11dc55a8u, _esp0);
  ESP += 4; return;
L_11dc574a:;
  /* 11dc574a mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dc5751 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11dc5754 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5757 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11dc5759 call 0x11dc4330 */
  push32(0x11dc575eu); f_11dc4330();
  /* 11dc575e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dc5761 mov ebx, esp */
  EBX = (ESP);
  /* 11dc5763 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11dc5766 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc576a jmp 0x11dc577e */
  goto L_11dc577e;
  /* 11dc576c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc576e pop eax */
  EAX = (pop32());
  /* 11dc576f ret  */
  ESPCHK(0x11dc55a8u, _esp0);
  ESP += 4; return;
  /* 11dc5770 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dc5773 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11dc5775 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc5777 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc577b mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11dc577e:;
  /* 11dc577e cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5780 je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc5782 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5783 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc5784 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11dc5787 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11dc578a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc578d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc5790 call dword ptr [0x11dc7014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7014))), 0x11dc5796u);
  /* 11dc5796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5798 je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
  /* 11dc579a cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc579d push edi */
  push32((uint32_t)(EDI));
  /* 11dc579e push edi */
  push32((uint32_t)(EDI));
  /* 11dc579f jne 0x11dc57a5 */
  if (!C.zf) goto L_11dc57a5;
  /* 11dc57a1 push edi */
  push32((uint32_t)(EDI));
  /* 11dc57a2 push edi */
  push32((uint32_t)(EDI));
  /* 11dc57a3 jmp 0x11dc57ab */
  goto L_11dc57ab;
L_11dc57a5:;
  /* 11dc57a5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11dc57a8 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11dc57ab:;
  /* 11dc57ab push esi */
  push32((uint32_t)(ESI));
  /* 11dc57ac push ebx */
  push32((uint32_t)(EBX));
  /* 11dc57ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11dc57b2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11dc57b5 call dword ptr [0x11dc7078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7078))), 0x11dc57bbu);
  /* 11dc57bb mov esi, eax */
  ESI = (EAX);
  /* 11dc57bd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc57bf je 0x11dc5736 */
  if (C.zf) goto L_11dc5736;
L_11dc57c5:;
  /* 11dc57c5 mov eax, esi */
  EAX = (ESI);
  /* 11dc57c7 jmp 0x11dc5738 */
  goto L_11dc5738;
}

/* FUN_100057cc @ 0x11dc57cc (43 bytes, 20 insns) */
void f_11dc57cc(void) {
  FTRACE(0x11dc57ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc57cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc57d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11dc57d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dc57d6 push esi */
  push32((uint32_t)(ESI));
  /* 11dc57d7 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11dc57da je 0x11dc57e9 */
  if (C.zf) goto L_11dc57e9;
L_11dc57dc:;
  /* 11dc57dc cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc57df je 0x11dc57e9 */
  if (C.zf) goto L_11dc57e9;
  /* 11dc57e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc57e2 mov esi, ecx */
  ESI = (ECX);
  /* 11dc57e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc57e5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11dc57e7 jne 0x11dc57dc */
  if (!C.zf) goto L_11dc57dc;
L_11dc57e9:;
  /* 11dc57e9 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc57ec pop esi */
  ESI = (pop32());
  /* 11dc57ed jne 0x11dc57f4 */
  if (!C.zf) goto L_11dc57f4;
  /* 11dc57ef sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc57f3 ret  */
  ESPCHK(0x11dc57ccu, _esp0);
  ESP += 4; return;
L_11dc57f4:;
  /* 11dc57f4 mov eax, edx */
  EAX = (EDX);
  /* 11dc57f6 ret  */
  ESPCHK(0x11dc57ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100057f7 @ 0x11dc57f7 (318 bytes, 123 insns) */
void f_11dc57f7(void) {
  FTRACE(0x11dc57f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc57f7 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc57f8 mov ebp, esp */
  EBP = (ESP);
  /* 11dc57fa push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dc57fc push 0x11dc7568 */
  push32((uint32_t)(0x11dc7568u));
  /* 11dc5801 push 0x11dc54d0 */
  push32((uint32_t)(0x11dc54d0u));
  /* 11dc5806 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dc580c push eax */
  push32((uint32_t)(EAX));
  /* 11dc580d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dc5814 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5817 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc5818 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5819 push edi */
  push32((uint32_t)(EDI));
  /* 11dc581a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dc581d mov eax, dword ptr [0x11dcb260] */
  EAX = (r32((uint32_t)(0x11dcb260)));
  /* 11dc5822 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc5824 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5826 jne 0x11dc5866 */
  if (!C.zf) goto L_11dc5866;
  /* 11dc5828 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11dc582b push eax */
  push32((uint32_t)(EAX));
  /* 11dc582c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc582e pop esi */
  ESI = (pop32());
  /* 11dc582f push esi */
  push32((uint32_t)(ESI));
  /* 11dc5830 push 0x11dc7548 */
  push32((uint32_t)(0x11dc7548u));
  /* 11dc5835 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5836 call dword ptr [0x11dc700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc700c))), 0x11dc583cu);
  /* 11dc583c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc583e je 0x11dc5844 */
  if (C.zf) goto L_11dc5844;
  /* 11dc5840 mov eax, esi */
  EAX = (ESI);
  /* 11dc5842 jmp 0x11dc5861 */
  goto L_11dc5861;
L_11dc5844:;
  /* 11dc5844 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11dc5847 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5848 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5849 push 0x11dc7544 */
  push32((uint32_t)(0x11dc7544u));
  /* 11dc584e push esi */
  push32((uint32_t)(ESI));
  /* 11dc584f push ebx */
  push32((uint32_t)(EBX));
  /* 11dc5850 call dword ptr [0x11dc701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc701c))), 0x11dc5856u);
  /* 11dc5856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5858 je 0x11dc592c */
  if (C.zf) goto L_11dc592c;
  /* 11dc585e push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc5860 pop eax */
  EAX = (pop32());
L_11dc5861:;
  /* 11dc5861 mov dword ptr [0x11dcb260], eax */
  w32((uint32_t)(0x11dcb260), (EAX));
L_11dc5866:;
  /* 11dc5866 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5869 jne 0x11dc588f */
  if (!C.zf) goto L_11dc588f;
  /* 11dc586b mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dc586e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5870 jne 0x11dc5877 */
  if (!C.zf) goto L_11dc5877;
  /* 11dc5872 mov eax, dword ptr [0x11dcb244] */
  EAX = (r32((uint32_t)(0x11dcb244)));
L_11dc5877:;
  /* 11dc5877 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dc587a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc587d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc5880 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc5883 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5884 call dword ptr [0x11dc701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc701c))), 0x11dc588au);
  /* 11dc588a jmp 0x11dc592e */
  goto L_11dc592e;
L_11dc588f:;
  /* 11dc588f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5892 jne 0x11dc592c */
  if (!C.zf) goto L_11dc592c;
  /* 11dc5898 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc589b jne 0x11dc58a5 */
  if (!C.zf) goto L_11dc58a5;
  /* 11dc589d mov eax, dword ptr [0x11dcb254] */
  EAX = (r32((uint32_t)(0x11dcb254)));
  /* 11dc58a2 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11dc58a5:;
  /* 11dc58a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc58a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc58a7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc58aa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc58ad mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dc58b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc58b2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc58b4 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc58b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11dc58b8 push eax */
  push32((uint32_t)(EAX));
  /* 11dc58b9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dc58bc call dword ptr [0x11dc7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7028))), 0x11dc58c2u);
  /* 11dc58c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dc58c5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc58c7 je 0x11dc592c */
  if (C.zf) goto L_11dc592c;
  /* 11dc58c9 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11dc58cc lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11dc58cf mov eax, edi */
  EAX = (EDI);
  /* 11dc58d1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc58d4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11dc58d6 call 0x11dc4330 */
  push32(0x11dc58dbu); f_11dc4330();
  /* 11dc58db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dc58de mov esi, esp */
  ESI = (ESP);
  /* 11dc58e0 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11dc58e3 push edi */
  push32((uint32_t)(EDI));
  /* 11dc58e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc58e5 push esi */
  push32((uint32_t)(ESI));
  /* 11dc58e6 call 0x11dc5380 */
  push32(0x11dc58ebu); f_11dc5380();
  /* 11dc58eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc58ee jmp 0x11dc58fb */
  goto L_11dc58fb;
  /* 11dc58f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc58f2 pop eax */
  EAX = (pop32());
  /* 11dc58f3 ret  */
  ESPCHK(0x11dc57f7u, _esp0);
  ESP += 4; return;
  /* 11dc58f4 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dc58f7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc58f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11dc58fb:;
  /* 11dc58fb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11dc58ff cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5901 je 0x11dc592c */
  if (C.zf) goto L_11dc592c;
  /* 11dc5903 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11dc5906 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5907 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dc590a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11dc590d push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc590f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11dc5912 call dword ptr [0x11dc7028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7028))), 0x11dc5918u);
  /* 11dc5918 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc591a je 0x11dc592c */
  if (C.zf) goto L_11dc592c;
  /* 11dc591c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11dc591f push eax */
  push32((uint32_t)(EAX));
  /* 11dc5920 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5921 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dc5924 call dword ptr [0x11dc700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc700c))), 0x11dc592au);
  /* 11dc592a jmp 0x11dc592e */
  goto L_11dc592e;
L_11dc592c:;
  /* 11dc592c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dc592e:;
  /* 11dc592e lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11dc5931 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dc5934 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dc593b pop edi */
  EDI = (pop32());
  /* 11dc593c pop esi */
  ESI = (pop32());
  /* 11dc593d pop ebx */
  EBX = (pop32());
  /* 11dc593e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc593f ret  */
  ESPCHK(0x11dc57f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x11dc5940 (9 bytes, 3 insns) */
void f_11dc5940(void) {
  FTRACE(0x11dc5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5940 call 0x11dc271c */
  push32(0x11dc5945u); f_11dc271c();
  /* 11dc5945 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5948 ret  */
  ESPCHK(0x11dc5940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005949 @ 0x11dc5949 (111 bytes, 44 insns) */
void f_11dc5949(void) {
  FTRACE(0x11dc5949u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5949 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc594a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc594c cmp dword ptr [0x11dcb244], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb244))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5952 jne 0x11dc5967 */
  if (!C.zf) goto L_11dc5967;
  /* 11dc5954 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dc5958 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc595b jl 0x11dc59b6 */
  if ((C.sf!=C.of)) goto L_11dc59b6;
  /* 11dc595d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5960 jg 0x11dc59b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc59b6;
  /* 11dc5962 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5965 pop ebx */
  EBX = (pop32());
  /* 11dc5966 ret  */
  ESPCHK(0x11dc5949u, _esp0);
  ESP += 4; return;
L_11dc5967:;
  /* 11dc5967 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5968 mov esi, 0x11dcb3b4 */
  ESI = (0x11dcb3b4u);
  /* 11dc596d push edi */
  push32((uint32_t)(EDI));
  /* 11dc596e push esi */
  push32((uint32_t)(ESI));
  /* 11dc596f call dword ptr [0x11dc7010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dc7010))), 0x11dc5975u);
  /* 11dc5975 cmp dword ptr [0x11dcb3b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dcb3b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc597b mov edi, dword ptr [0x11dc7008] */
  EDI = (r32((uint32_t)(0x11dc7008)));
  /* 11dc5981 je 0x11dc5991 */
  if (C.zf) goto L_11dc5991;
  /* 11dc5983 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5984 call edi */
  call_ind((uint32_t)(EDI), 0x11dc5986u);
  /* 11dc5986 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11dc5988 call 0x11dc3306 */
  push32(0x11dc598du); f_11dc3306();
  /* 11dc598d pop ecx */
  ECX = (pop32());
  /* 11dc598e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc5990 pop ebx */
  EBX = (pop32());
L_11dc5991:;
  /* 11dc5991 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11dc5995 call 0x11dc59b8 */
  push32(0x11dc599au); f_11dc59b8();
  /* 11dc599a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11dc599c pop ecx */
  ECX = (pop32());
  /* 11dc599d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11dc59a1 je 0x11dc59ad */
  if (C.zf) goto L_11dc59ad;
  /* 11dc59a3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11dc59a5 call 0x11dc3367 */
  push32(0x11dc59aau); f_11dc3367();
  /* 11dc59aa pop ecx */
  ECX = (pop32());
  /* 11dc59ab jmp 0x11dc59b0 */
  goto L_11dc59b0;
L_11dc59ad:;
  /* 11dc59ad push esi */
  push32((uint32_t)(ESI));
  /* 11dc59ae call edi */
  call_ind((uint32_t)(EDI), 0x11dc59b0u);
L_11dc59b0:;
  /* 11dc59b0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dc59b4 pop edi */
  EDI = (pop32());
  /* 11dc59b5 pop esi */
  ESI = (pop32());
L_11dc59b6:;
  /* 11dc59b6 pop ebx */
  EBX = (pop32());
  /* 11dc59b7 ret  */
  ESPCHK(0x11dc5949u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b8 @ 0x11dc59b8 (204 bytes, 71 insns) */
void f_11dc59b8(void) {
  FTRACE(0x11dc59b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc59b8 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc59b9 mov ebp, esp */
  EBP = (ESP);
  /* 11dc59bb push ecx */
  push32((uint32_t)(ECX));
  /* 11dc59bc cmp dword ptr [0x11dcb244], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc59c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc59c4 jne 0x11dc59e3 */
  if (!C.zf) goto L_11dc59e3;
  /* 11dc59c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc59c9 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc59cc jl 0x11dc5a81 */
  if ((C.sf!=C.of)) goto L_11dc5a81;
  /* 11dc59d2 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc59d5 jg 0x11dc5a81 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc5a81;
  /* 11dc59db sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc59de jmp 0x11dc5a81 */
  goto L_11dc5a81;
L_11dc59e3:;
  /* 11dc59e3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc59e6 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc59ec jge 0x11dc5a16 */
  if ((C.sf==C.of)) goto L_11dc5a16;
  /* 11dc59ee cmp dword ptr [0x11dcaab4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11dcaab4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc59f5 jle 0x11dc5a03 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc5a03;
  /* 11dc59f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc59f9 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc59fa call 0x11dc5a84 */
  push32(0x11dc59ffu); f_11dc5a84();
  /* 11dc59ff pop ecx */
  ECX = (pop32());
  /* 11dc5a00 pop ecx */
  ECX = (pop32());
  /* 11dc5a01 jmp 0x11dc5a0e */
  goto L_11dc5a0e;
L_11dc5a03:;
  /* 11dc5a03 mov eax, dword ptr [0x11dca8a8] */
  EAX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc5a08 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11dc5a0b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11dc5a0e:;
  /* 11dc5a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5a10 jne 0x11dc5a16 */
  if (!C.zf) goto L_11dc5a16;
L_11dc5a12:;
  /* 11dc5a12 mov eax, ebx */
  EAX = (EBX);
  /* 11dc5a14 jmp 0x11dc5a81 */
  goto L_11dc5a81;
L_11dc5a16:;
  /* 11dc5a16 mov edx, dword ptr [0x11dca8a8] */
  EDX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc5a1c mov eax, ebx */
  EAX = (EBX);
  /* 11dc5a1e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc5a21 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11dc5a24 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11dc5a29 je 0x11dc5a39 */
  if (C.zf) goto L_11dc5a39;
  /* 11dc5a2b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11dc5a2f mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11dc5a32 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11dc5a35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc5a37 jmp 0x11dc5a42 */
  goto L_11dc5a42;
L_11dc5a39:;
  /* 11dc5a39 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11dc5a3d mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11dc5a40 push 1 */
  push32((uint32_t)(0x1u));
L_11dc5a42:;
  /* 11dc5a42 pop eax */
  EAX = (pop32());
  /* 11dc5a43 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11dc5a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc5a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc5a4a push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc5a4c push ecx */
  push32((uint32_t)(ECX));
  /* 11dc5a4d push eax */
  push32((uint32_t)(EAX));
  /* 11dc5a4e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11dc5a51 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5a52 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11dc5a57 push dword ptr [0x11dcb244] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb244))));
  /* 11dc5a5d call 0x11dc55a8 */
  push32(0x11dc5a62u); f_11dc55a8();
  /* 11dc5a62 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5a67 je 0x11dc5a12 */
  if (C.zf) goto L_11dc5a12;
  /* 11dc5a69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5a6c jne 0x11dc5a74 */
  if (!C.zf) goto L_11dc5a74;
  /* 11dc5a6e movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11dc5a72 jmp 0x11dc5a81 */
  goto L_11dc5a81;
L_11dc5a74:;
  /* 11dc5a74 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11dc5a78 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11dc5a7c shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc5a7f or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11dc5a81:;
  /* 11dc5a81 pop ebx */
  EBX = (pop32());
  /* 11dc5a82 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5a83 ret  */
  ESPCHK(0x11dc59b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a84 @ 0x11dc5a84 (117 bytes, 46 insns) */
void f_11dc5a84(void) {
  FTRACE(0x11dc5a84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5a84 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc5a85 mov ebp, esp */
  EBP = (ESP);
  /* 11dc5a87 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc5a88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5a8b lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11dc5a8e cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5a94 ja 0x11dc5aa2 */
  if ((!C.cf&&!C.zf)) goto L_11dc5aa2;
  /* 11dc5a96 mov ecx, dword ptr [0x11dca8a8] */
  ECX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc5a9c movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11dc5aa0 jmp 0x11dc5af4 */
  goto L_11dc5af4;
L_11dc5aa2:;
  /* 11dc5aa2 mov ecx, eax */
  ECX = (EAX);
  /* 11dc5aa4 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5aa5 mov esi, dword ptr [0x11dca8a8] */
  ESI = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc5aab sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11dc5aae movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11dc5ab1 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11dc5ab6 pop esi */
  ESI = (pop32());
  /* 11dc5ab7 je 0x11dc5ac7 */
  if (C.zf) goto L_11dc5ac7;
  /* 11dc5ab9 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11dc5abd mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11dc5ac0 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11dc5ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc5ac5 jmp 0x11dc5ad0 */
  goto L_11dc5ad0;
L_11dc5ac7:;
  /* 11dc5ac7 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11dc5acb mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11dc5ace push 1 */
  push32((uint32_t)(0x1u));
L_11dc5ad0:;
  /* 11dc5ad0 pop eax */
  EAX = (pop32());
  /* 11dc5ad1 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11dc5ad4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc5ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc5ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc5ada push ecx */
  push32((uint32_t)(ECX));
  /* 11dc5adb push eax */
  push32((uint32_t)(EAX));
  /* 11dc5adc lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11dc5adf push eax */
  push32((uint32_t)(EAX));
  /* 11dc5ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc5ae2 call 0x11dc57f7 */
  push32(0x11dc5ae7u); f_11dc57f7();
  /* 11dc5ae7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc5aec jne 0x11dc5af0 */
  if (!C.zf) goto L_11dc5af0;
  /* 11dc5aee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5aef ret  */
  ESPCHK(0x11dc5a84u, _esp0);
  ESP += 4; return;
L_11dc5af0:;
  /* 11dc5af0 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11dc5af4:;
  /* 11dc5af4 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5af7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5af8 ret  */
  ESPCHK(0x11dc5a84u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x11dc5b00 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11dc5b00(void) {
  FTRACE(0x11dc5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc5b01 mov ebp, esp */
  EBP = (ESP);
  /* 11dc5b03 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5b04 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5b05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc5b08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc5b0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5b0e mov eax, ecx */
  EAX = (ECX);
  /* 11dc5b10 mov edx, ecx */
  EDX = (ECX);
  /* 11dc5b12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5b14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5b16 jbe 0x11dc5b20 */
  if ((C.cf||C.zf)) goto L_11dc5b20;
  /* 11dc5b18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5b1a jb 0x11dc5c98 */
  if (C.cf) goto L_11dc5c98;
L_11dc5b20:;
  /* 11dc5b20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dc5b26 jne 0x11dc5b3c */
  if (!C.zf) goto L_11dc5b3c;
  /* 11dc5b28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5b2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5b2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5b31 jb 0x11dc5b5c */
  if (C.cf) goto L_11dc5b5c;
  /* 11dc5b33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5b35 jmp dword ptr [edx*4 + 0x11dc5c48] */
  switch (EDX) {
    case 0: goto L_11dc5c58;
    case 1: goto L_11dc5c60;
    case 2: goto L_11dc5c6c;
    case 3: goto L_11dc5c80;
    default: x86_unimpl("switch@0x11dc5b35 out of table"); return;
  }
L_11dc5b3c:;
  /* 11dc5b3c mov eax, edi */
  EAX = (EDI);
  /* 11dc5b3e mov edx, 3 */
  EDX = (0x3u);
  /* 11dc5b43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5b46 jb 0x11dc5b54 */
  if (C.cf) goto L_11dc5b54;
  /* 11dc5b48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5b4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5b4d jmp dword ptr [eax*4 + 0x11dc5b60] */
  switch (EAX) {
    case 1: goto L_11dc5b70;
    case 2: goto L_11dc5b9c;
    case 3: goto L_11dc5bc0;
    default: x86_unimpl("switch@0x11dc5b4d out of table"); return;
  }
L_11dc5b54:;
  /* 11dc5b54 jmp dword ptr [ecx*4 + 0x11dc5c58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11dc5c58)))); return;
  /* 11dc5b5b nop  */
  /* nop */
L_11dc5b5c:;
  /* 11dc5b5c jmp dword ptr [ecx*4 + 0x11dc5bdc] */
  switch (ECX) {
    case 0: goto L_11dc5c3f;
    case 1: goto L_11dc5c2c;
    case 2: goto L_11dc5c24;
    case 3: goto L_11dc5c1c;
    case 4: goto L_11dc5c14;
    case 5: goto L_11dc5c0c;
    case 6: goto L_11dc5c04;
    case 7: goto L_11dc5bfc;
    default: x86_unimpl("switch@0x11dc5b5c out of table"); return;
  }
  /* 11dc5b63 nop  */
  /* nop */
L_11dc5b70:;
  /* 11dc5b70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5b72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5b74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5b76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc5b79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc5b7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc5b7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5b82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc5b85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5b88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5b8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5b8e jb 0x11dc5b5c */
  if (C.cf) goto L_11dc5b5c;
  /* 11dc5b90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5b92 jmp dword ptr [edx*4 + 0x11dc5c48] */
  switch (EDX) {
    case 0: goto L_11dc5c58;
    case 1: goto L_11dc5c60;
    case 2: goto L_11dc5c6c;
    case 3: goto L_11dc5c80;
    default: x86_unimpl("switch@0x11dc5b92 out of table"); return;
  }
  /* 11dc5b99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5b9c:;
  /* 11dc5b9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5b9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5ba0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5ba2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc5ba5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5ba8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc5bab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5bae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5bb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5bb4 jb 0x11dc5b5c */
  if (C.cf) goto L_11dc5b5c;
  /* 11dc5bb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5bb8 jmp dword ptr [edx*4 + 0x11dc5c48] */
  switch (EDX) {
    case 0: goto L_11dc5c58;
    case 1: goto L_11dc5c60;
    case 2: goto L_11dc5c6c;
    case 3: goto L_11dc5c80;
    default: x86_unimpl("switch@0x11dc5bb8 out of table"); return;
  }
  /* 11dc5bbf nop  */
  /* nop */
L_11dc5bc0:;
  /* 11dc5bc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5bc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5bc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5bc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5bc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5bca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc5bcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5bce jb 0x11dc5b5c */
  if (C.cf) goto L_11dc5b5c;
  /* 11dc5bd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5bd2 jmp dword ptr [edx*4 + 0x11dc5c48] */
  switch (EDX) {
    case 0: goto L_11dc5c58;
    case 1: goto L_11dc5c60;
    case 2: goto L_11dc5c6c;
    case 3: goto L_11dc5c80;
    default: x86_unimpl("switch@0x11dc5bd2 out of table"); return;
  }
  /* 11dc5bd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5bfc:;
  /* 11dc5bfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11dc5c00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11dc5c04:;
  /* 11dc5c04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11dc5c08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11dc5c0c:;
  /* 11dc5c0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11dc5c10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11dc5c14:;
  /* 11dc5c14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11dc5c18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11dc5c1c:;
  /* 11dc5c1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11dc5c20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11dc5c24:;
  /* 11dc5c24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11dc5c28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11dc5c2c:;
  /* 11dc5c2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11dc5c30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11dc5c34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dc5c3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5c3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dc5c3f:;
  /* 11dc5c3f jmp dword ptr [edx*4 + 0x11dc5c48] */
  switch (EDX) {
    case 0: goto L_11dc5c58;
    case 1: goto L_11dc5c60;
    case 2: goto L_11dc5c6c;
    case 3: goto L_11dc5c80;
    default: x86_unimpl("switch@0x11dc5c3f out of table"); return;
  }
  /* 11dc5c46 mov edi, edi */
  EDI = (EDI);
L_11dc5c58:;
  /* 11dc5c58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5c5b pop esi */
  ESI = (pop32());
  /* 11dc5c5c pop edi */
  EDI = (pop32());
  /* 11dc5c5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5c5e ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5c5f nop  */
  /* nop */
L_11dc5c60:;
  /* 11dc5c60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5c62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5c67 pop esi */
  ESI = (pop32());
  /* 11dc5c68 pop edi */
  EDI = (pop32());
  /* 11dc5c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5c6a ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5c6b nop  */
  /* nop */
L_11dc5c6c:;
  /* 11dc5c6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5c6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5c70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc5c73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc5c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5c79 pop esi */
  ESI = (pop32());
  /* 11dc5c7a pop edi */
  EDI = (pop32());
  /* 11dc5c7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5c7c ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5c7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5c80:;
  /* 11dc5c80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5c82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11dc5c84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc5c87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc5c8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc5c8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc5c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5c93 pop esi */
  ESI = (pop32());
  /* 11dc5c94 pop edi */
  EDI = (pop32());
  /* 11dc5c95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5c96 ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5c97 nop  */
  /* nop */
L_11dc5c98:;
  /* 11dc5c98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11dc5c9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11dc5ca0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11dc5ca6 jne 0x11dc5ccc */
  if (!C.zf) goto L_11dc5ccc;
  /* 11dc5ca8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5cab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5cae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5cb1 jb 0x11dc5cc0 */
  if (C.cf) goto L_11dc5cc0;
  /* 11dc5cb3 std  */
  C.df=1;
  /* 11dc5cb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5cb6 cld  */
  C.df=0;
  /* 11dc5cb7 jmp dword ptr [edx*4 + 0x11dc5de0] */
  switch (EDX) {
    case 0: goto L_11dc5df0;
    case 1: goto L_11dc5df8;
    case 2: goto L_11dc5e08;
    case 3: goto L_11dc5e1c;
    default: x86_unimpl("switch@0x11dc5cb7 out of table"); return;
  }
  /* 11dc5cbe mov edi, edi */
  EDI = (EDI);
L_11dc5cc0:;
  /* 11dc5cc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc5cc2 jmp dword ptr [ecx*4 + 0x11dc5d90] */
  switch (ECX) {
    case 0: goto L_11dc5dd7;
    default: x86_unimpl("switch@0x11dc5cc2 out of table"); return;
  }
  /* 11dc5cc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5ccc:;
  /* 11dc5ccc mov eax, edi */
  EAX = (EDI);
  /* 11dc5cce mov edx, 3 */
  EDX = (0x3u);
  /* 11dc5cd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5cd6 jb 0x11dc5ce4 */
  if (C.cf) goto L_11dc5ce4;
  /* 11dc5cd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5cdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5cdd jmp dword ptr [eax*4 + 0x11dc5ce8] */
  switch (EAX) {
    case 1: goto L_11dc5cf8;
    case 2: goto L_11dc5d18;
    case 3: goto L_11dc5d40;
    default: x86_unimpl("switch@0x11dc5cdd out of table"); return;
  }
L_11dc5ce4:;
  /* 11dc5ce4 jmp dword ptr [ecx*4 + 0x11dc5de0] */
  switch (ECX) {
    case 0: goto L_11dc5df0;
    case 1: goto L_11dc5df8;
    case 2: goto L_11dc5e08;
    case 3: goto L_11dc5e1c;
    default: x86_unimpl("switch@0x11dc5ce4 out of table"); return;
  }
  /* 11dc5ceb nop  */
  /* nop */
L_11dc5cf8:;
  /* 11dc5cf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc5cfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5cfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc5d00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dc5d01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5d04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11dc5d05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5d08 jb 0x11dc5cc0 */
  if (C.cf) goto L_11dc5cc0;
  /* 11dc5d0a std  */
  C.df=1;
  /* 11dc5d0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5d0d cld  */
  C.df=0;
  /* 11dc5d0e jmp dword ptr [edx*4 + 0x11dc5de0] */
  switch (EDX) {
    case 0: goto L_11dc5df0;
    case 1: goto L_11dc5df8;
    case 2: goto L_11dc5e08;
    case 3: goto L_11dc5e1c;
    default: x86_unimpl("switch@0x11dc5d0e out of table"); return;
  }
  /* 11dc5d15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5d18:;
  /* 11dc5d18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc5d1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5d1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc5d20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc5d23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5d26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc5d29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5d2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5d2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5d32 jb 0x11dc5cc0 */
  if (C.cf) goto L_11dc5cc0;
  /* 11dc5d34 std  */
  C.df=1;
  /* 11dc5d35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5d37 cld  */
  C.df=0;
  /* 11dc5d38 jmp dword ptr [edx*4 + 0x11dc5de0] */
  switch (EDX) {
    case 0: goto L_11dc5df0;
    case 1: goto L_11dc5df8;
    case 2: goto L_11dc5e08;
    case 3: goto L_11dc5e1c;
    default: x86_unimpl("switch@0x11dc5d38 out of table"); return;
  }
  /* 11dc5d3f nop  */
  /* nop */
L_11dc5d40:;
  /* 11dc5d40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc5d43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11dc5d45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc5d48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc5d4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc5d4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc5d51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dc5d54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc5d57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5d5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5d5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5d60 jb 0x11dc5cc0 */
  if (C.cf) goto L_11dc5cc0;
  /* 11dc5d66 std  */
  C.df=1;
  /* 11dc5d67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11dc5d69 cld  */
  C.df=0;
  /* 11dc5d6a jmp dword ptr [edx*4 + 0x11dc5de0] */
  switch (EDX) {
    case 0: goto L_11dc5df0;
    case 1: goto L_11dc5df8;
    case 2: goto L_11dc5e08;
    case 3: goto L_11dc5e1c;
    default: x86_unimpl("switch@0x11dc5d6a out of table"); return;
  }
  /* 11dc5d71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11dc5d74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11dc5d75 pop ebp */
  EBP = (pop32());
  /* 11dc5d76 fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc5d78 pushfd  */
  x86_unimpl("pushfd @ 0x11dc5d78");
  /* 11dc5d79 pop ebp */
  EBP = (pop32());
  /* 11dc5d7a fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc5d7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11dc5d7d pop ebp */
  EBP = (pop32());
  /* 11dc5d7e fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc5d80 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11dc5d81 pop ebp */
  EBP = (pop32());
  /* 11dc5d82 fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc5d84 mov ah, 0x5d */
  AH = (0x5du);
  /* 11dc5d86 fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc5d88 mov esp, 0xc411dc5d */
  ESP = (0xc411dc5du);
  /* 11dc5d8d pop ebp */
  EBP = (pop32());
  /* 11dc5d8e fcom qword ptr [ecx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ECX)));
  /* 11dc5d94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11dc5d98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11dc5d9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11dc5da0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11dc5da4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11dc5da8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11dc5dac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11dc5db0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11dc5db4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11dc5db8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11dc5dbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11dc5dc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11dc5dc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11dc5dc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11dc5dcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11dc5dd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5dd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11dc5dd7:;
  /* 11dc5dd7 jmp dword ptr [edx*4 + 0x11dc5de0] */
  switch (EDX) {
    case 0: goto L_11dc5df0;
    case 1: goto L_11dc5df8;
    case 2: goto L_11dc5e08;
    case 3: goto L_11dc5e1c;
    default: x86_unimpl("switch@0x11dc5dd7 out of table"); return;
  }
  /* 11dc5dde mov edi, edi */
  EDI = (EDI);
L_11dc5df0:;
  /* 11dc5df0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5df3 pop esi */
  ESI = (pop32());
  /* 11dc5df4 pop edi */
  EDI = (pop32());
  /* 11dc5df5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5df6 ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5df7 nop  */
  /* nop */
L_11dc5df8:;
  /* 11dc5df8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc5dfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc5dfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5e01 pop esi */
  ESI = (pop32());
  /* 11dc5e02 pop edi */
  EDI = (pop32());
  /* 11dc5e03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5e04 ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5e05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5e08:;
  /* 11dc5e08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc5e0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc5e0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc5e11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc5e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5e17 pop esi */
  ESI = (pop32());
  /* 11dc5e18 pop edi */
  EDI = (pop32());
  /* 11dc5e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5e1a ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
  /* 11dc5e1b nop  */
  /* nop */
L_11dc5e1c:;
  /* 11dc5e1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11dc5e1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11dc5e22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11dc5e25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11dc5e28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11dc5e2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11dc5e2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5e31 pop esi */
  ESI = (pop32());
  /* 11dc5e32 pop edi */
  EDI = (pop32());
  /* 11dc5e33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5e34 ret  */
  ESPCHK(0x11dc5b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x11dc5ed0 (62 bytes, 35 insns) */
void f_11dc5ed0(void) {
  FTRACE(0x11dc5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11dc5ed3 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5ed6 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5ed9 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5eda push eax */
  push32((uint32_t)(EAX));
  /* 11dc5edb push eax */
  push32((uint32_t)(EAX));
  /* 11dc5edc push eax */
  push32((uint32_t)(EAX));
  /* 11dc5edd push eax */
  push32((uint32_t)(EAX));
  /* 11dc5ede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc5ee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5ee4:;
  /* 11dc5ee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11dc5ee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc5ee8 je 0x11dc5ef1 */
  if (C.zf) goto L_11dc5ef1;
  /* 11dc5eea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc5eeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11dc5eeb");
  /* 11dc5eef jmp 0x11dc5ee4 */
  goto L_11dc5ee4;
L_11dc5ef1:;
  /* 11dc5ef1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5ef4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dc5ef7 nop  */
  /* nop */
L_11dc5ef8:;
  /* 11dc5ef8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11dc5ef9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5efb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc5efd je 0x11dc5f06 */
  if (C.zf) goto L_11dc5f06;
  /* 11dc5eff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5f00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11dc5f00");
  /* 11dc5f04 jae 0x11dc5ef8 */
  if (!C.cf) goto L_11dc5ef8;
L_11dc5f06:;
  /* 11dc5f06 mov eax, ecx */
  EAX = (ECX);
  /* 11dc5f08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5f0b pop esi */
  ESI = (pop32());
  /* 11dc5f0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5f0d ret  */
  ESPCHK(0x11dc5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11dc5f10 (58 bytes, 32 insns) */
void f_11dc5f10(void) {
  FTRACE(0x11dc5f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc5f11 mov ebp, esp */
  EBP = (ESP);
  /* 11dc5f13 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc5f16 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f17 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f18 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f19 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f1a push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f1b push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f1c push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f1d push eax */
  push32((uint32_t)(EAX));
  /* 11dc5f1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc5f21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc5f24:;
  /* 11dc5f24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11dc5f26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc5f28 je 0x11dc5f31 */
  if (C.zf) goto L_11dc5f31;
  /* 11dc5f2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dc5f2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11dc5f2b");
  /* 11dc5f2f jmp 0x11dc5f24 */
  goto L_11dc5f24;
L_11dc5f31:;
  /* 11dc5f31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11dc5f34:;
  /* 11dc5f34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5f36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc5f38 je 0x11dc5f44 */
  if (C.zf) goto L_11dc5f44;
  /* 11dc5f3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5f3b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11dc5f3b");
  /* 11dc5f3f jae 0x11dc5f34 */
  if (!C.cf) goto L_11dc5f34;
  /* 11dc5f41 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11dc5f44:;
  /* 11dc5f44 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5f47 pop esi */
  ESI = (pop32());
  /* 11dc5f48 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc5f49 ret  */
  ESPCHK(0x11dc5f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x11dc5f50 (208 bytes, 85 insns) */
void f_11dc5f50(void) {
  FTRACE(0x11dc5f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc5f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc5f51 mov ebp, esp */
  EBP = (ESP);
  /* 11dc5f53 push edi */
  push32((uint32_t)(EDI));
  /* 11dc5f54 push esi */
  push32((uint32_t)(ESI));
  /* 11dc5f55 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc5f56 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc5f59 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc5f5c lea eax, [0x11dcb23c] */
  EAX = ((uint32_t)(0x11dcb23c));
  /* 11dc5f62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5f66 jne 0x11dc5fa3 */
  if (!C.zf) goto L_11dc5fa3;
  /* 11dc5f68 mov al, 0xff */
  AL = (0xffu);
  /* 11dc5f6a mov edi, edi */
  EDI = (EDI);
L_11dc5f6c:;
  /* 11dc5f6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc5f6e je 0x11dc5f9e */
  if (C.zf) goto L_11dc5f9e;
  /* 11dc5f70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5f72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5f73 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11dc5f75 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc5f76 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5f78 je 0x11dc5f6c */
  if (C.zf) goto L_11dc5f6c;
  /* 11dc5f7a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc5f7c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5f7e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc5f80 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11dc5f83 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dc5f85 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dc5f87 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11dc5f89 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc5f8b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5f8d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc5f8f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11dc5f92 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dc5f94 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dc5f96 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5f98 je 0x11dc5f6c */
  if (C.zf) goto L_11dc5f6c;
  /* 11dc5f9a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11dc5f9c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11dc5f9e:;
  /* 11dc5f9e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11dc5fa1 jmp 0x11dc601b */
  goto L_11dc601b;
L_11dc5fa3:;
  /* 11dc5fa3 lock inc dword ptr [0x11dcb3b4] */
  x86_unimpl("lock inc @ 0x11dc5fa3");
  /* 11dc5faa cmp dword ptr [0x11dcb3b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb3b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc5fb1 jg 0x11dc5fb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc5fb7;
  /* 11dc5fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc5fb5 jmp 0x11dc5fcc */
  goto L_11dc5fcc;
L_11dc5fb7:;
  /* 11dc5fb7 lock dec dword ptr [0x11dcb3b4] */
  x86_unimpl("lock dec @ 0x11dc5fb7");
  /* 11dc5fbe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11dc5fc0 call 0x11dc3306 */
  push32(0x11dc5fc5u); f_11dc3306();
  /* 11dc5fc5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11dc5fcc:;
  /* 11dc5fcc mov eax, 0xff */
  EAX = (0xffu);
  /* 11dc5fd1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc5fd3 nop  */
  /* nop */
L_11dc5fd4:;
  /* 11dc5fd4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc5fd6 je 0x11dc5fff */
  if (C.zf) goto L_11dc5fff;
  /* 11dc5fd8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc5fda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc5fdb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11dc5fdd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc5fde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5fe0 je 0x11dc5fd4 */
  if (C.zf) goto L_11dc5fd4;
  /* 11dc5fe2 push eax */
  push32((uint32_t)(EAX));
  /* 11dc5fe3 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc5fe4 call 0x11dc6215 */
  push32(0x11dc5fe9u); f_11dc6215();
  /* 11dc5fe9 mov ebx, eax */
  EBX = (EAX);
  /* 11dc5feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5fee call 0x11dc6215 */
  push32(0x11dc5ff3u); f_11dc6215();
  /* 11dc5ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc5ff6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc5ff8 je 0x11dc5fd4 */
  if (C.zf) goto L_11dc5fd4;
  /* 11dc5ffa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dc5ffc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11dc5fff:;
  /* 11dc5fff mov ebx, eax */
  EBX = (EAX);
  /* 11dc6001 pop eax */
  EAX = (pop32());
  /* 11dc6002 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc6004 jne 0x11dc600f */
  if (!C.zf) goto L_11dc600f;
  /* 11dc6006 lock dec dword ptr [0x11dcb3b4] */
  x86_unimpl("lock dec @ 0x11dc6006");
  /* 11dc600d jmp 0x11dc6019 */
  goto L_11dc6019;
L_11dc600f:;
  /* 11dc600f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11dc6011 call 0x11dc3367 */
  push32(0x11dc6016u); f_11dc3367();
  /* 11dc6016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dc6019:;
  /* 11dc6019 mov eax, ebx */
  EAX = (EBX);
L_11dc601b:;
  /* 11dc601b pop ebx */
  EBX = (pop32());
  /* 11dc601c pop esi */
  ESI = (pop32());
  /* 11dc601d pop edi */
  EDI = (pop32());
  /* 11dc601e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc601f ret  */
  ESPCHK(0x11dc5f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x11dc6020 (257 bytes, 103 insns) */
void f_11dc6020(void) {
  FTRACE(0x11dc6020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc6020 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc6021 mov ebp, esp */
  EBP = (ESP);
  /* 11dc6023 push edi */
  push32((uint32_t)(EDI));
  /* 11dc6024 push esi */
  push32((uint32_t)(ESI));
  /* 11dc6025 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc6026 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dc6029 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc602b je 0x11dc611a */
  if (C.zf) goto L_11dc611a;
  /* 11dc6031 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc6034 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dc6037 lea eax, [0x11dcb23c] */
  EAX = ((uint32_t)(0x11dcb23c));
  /* 11dc603d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc6041 jne 0x11dc6091 */
  if (!C.zf) goto L_11dc6091;
  /* 11dc6043 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11dc6045 mov bl, 0x5a */
  BL = (0x5au);
  /* 11dc6047 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11dc6049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11dc604c:;
  /* 11dc604c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11dc604e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11dc6050 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11dc6052 je 0x11dc6075 */
  if (C.zf) goto L_11dc6075;
  /* 11dc6054 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11dc6056 je 0x11dc6075 */
  if (C.zf) goto L_11dc6075;
  /* 11dc6058 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc6059 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc605a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc605c jb 0x11dc6064 */
  if (C.cf) goto L_11dc6064;
  /* 11dc605e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc6060 ja 0x11dc6064 */
  if ((!C.cf&&!C.zf)) goto L_11dc6064;
  /* 11dc6062 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11dc6064:;
  /* 11dc6064 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc6066 jb 0x11dc606e */
  if (C.cf) goto L_11dc606e;
  /* 11dc6068 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc606a ja 0x11dc606e */
  if ((!C.cf&&!C.zf)) goto L_11dc606e;
  /* 11dc606c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11dc606e:;
  /* 11dc606e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc6070 jne 0x11dc607f */
  if (!C.zf) goto L_11dc607f;
  /* 11dc6072 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc6073 jne 0x11dc604c */
  if (!C.zf) goto L_11dc604c;
L_11dc6075:;
  /* 11dc6075 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc6077 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11dc6079 je 0x11dc611a */
  if (C.zf) goto L_11dc611a;
L_11dc607f:;
  /* 11dc607f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11dc6084 jb 0x11dc611a */
  if (C.cf) goto L_11dc611a;
  /* 11dc608a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dc608c jmp 0x11dc611a */
  goto L_11dc611a;
L_11dc6091:;
  /* 11dc6091 lock inc dword ptr [0x11dcb3b4] */
  x86_unimpl("lock inc @ 0x11dc6091");
  /* 11dc6098 cmp dword ptr [0x11dcb3b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb3b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc609f jg 0x11dc60a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc60a5;
  /* 11dc60a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc60a3 jmp 0x11dc60be */
  goto L_11dc60be;
L_11dc60a5:;
  /* 11dc60a5 lock dec dword ptr [0x11dcb3b4] */
  x86_unimpl("lock dec @ 0x11dc60a5");
  /* 11dc60ac mov ebx, ecx */
  EBX = (ECX);
  /* 11dc60ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11dc60b0 call 0x11dc3306 */
  push32(0x11dc60b5u); f_11dc3306();
  /* 11dc60b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11dc60bc mov ecx, ebx */
  ECX = (EBX);
L_11dc60be:;
  /* 11dc60be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc60c0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc60c2 mov edi, edi */
  EDI = (EDI);
L_11dc60c4:;
  /* 11dc60c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11dc60c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc60c8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11dc60ca je 0x11dc60ef */
  if (C.zf) goto L_11dc60ef;
  /* 11dc60cc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11dc60ce je 0x11dc60ef */
  if (C.zf) goto L_11dc60ef;
  /* 11dc60d0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dc60d1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11dc60d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc60d3 push eax */
  push32((uint32_t)(EAX));
  /* 11dc60d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc60d5 call 0x11dc6215 */
  push32(0x11dc60dau); f_11dc6215();
  /* 11dc60da mov ebx, eax */
  EBX = (EAX);
  /* 11dc60dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc60df call 0x11dc6215 */
  push32(0x11dc60e4u); f_11dc6215();
  /* 11dc60e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc60e7 pop ecx */
  ECX = (pop32());
  /* 11dc60e8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc60ea jne 0x11dc60f5 */
  if (!C.zf) goto L_11dc60f5;
  /* 11dc60ec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11dc60ed jne 0x11dc60c4 */
  if (!C.zf) goto L_11dc60c4;
L_11dc60ef:;
  /* 11dc60ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dc60f1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc60f3 je 0x11dc60fe */
  if (C.zf) goto L_11dc60fe;
L_11dc60f5:;
  /* 11dc60f5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11dc60fa jb 0x11dc60fe */
  if (C.cf) goto L_11dc60fe;
  /* 11dc60fc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11dc60fe:;
  /* 11dc60fe pop eax */
  EAX = (pop32());
  /* 11dc60ff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dc6101 jne 0x11dc610c */
  if (!C.zf) goto L_11dc610c;
  /* 11dc6103 lock dec dword ptr [0x11dcb3b4] */
  x86_unimpl("lock dec @ 0x11dc6103");
  /* 11dc610a jmp 0x11dc611a */
  goto L_11dc611a;
L_11dc610c:;
  /* 11dc610c mov ebx, ecx */
  EBX = (ECX);
  /* 11dc610e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11dc6110 call 0x11dc3367 */
  push32(0x11dc6115u); f_11dc3367();
  /* 11dc6115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc6118 mov ecx, ebx */
  ECX = (EBX);
L_11dc611a:;
  /* 11dc611a mov eax, ecx */
  EAX = (ECX);
  /* 11dc611c pop ebx */
  EBX = (pop32());
  /* 11dc611d pop esi */
  ESI = (pop32());
  /* 11dc611e pop edi */
  EDI = (pop32());
  /* 11dc611f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc6120 ret  */
  ESPCHK(0x11dc6020u, _esp0);
  ESP += 4; return;
}

/* FUN_10006215 @ 0x11dc6215 (203 bytes, 78 insns) */
void f_11dc6215(void) {
  FTRACE(0x11dc6215u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc6215 push ebp */
  push32((uint32_t)(EBP));
  /* 11dc6216 mov ebp, esp */
  EBP = (ESP);
  /* 11dc6218 push ecx */
  push32((uint32_t)(ECX));
  /* 11dc6219 cmp dword ptr [0x11dcb244], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dcb244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc6220 push ebx */
  push32((uint32_t)(EBX));
  /* 11dc6221 push esi */
  push32((uint32_t)(ESI));
  /* 11dc6222 push edi */
  push32((uint32_t)(EDI));
  /* 11dc6223 jne 0x11dc6242 */
  if (!C.zf) goto L_11dc6242;
  /* 11dc6225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc6228 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc622b jl 0x11dc62db */
  if ((C.sf!=C.of)) goto L_11dc62db;
  /* 11dc6231 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc6234 jg 0x11dc62db */
  if ((!C.zf&&C.sf==C.of)) goto L_11dc62db;
  /* 11dc623a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc623d jmp 0x11dc62db */
  goto L_11dc62db;
L_11dc6242:;
  /* 11dc6242 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dc6245 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11dc624a push 1 */
  push32((uint32_t)(0x1u));
  /* 11dc624c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc624e pop esi */
  ESI = (pop32());
  /* 11dc624f jge 0x11dc6276 */
  if ((C.sf==C.of)) goto L_11dc6276;
  /* 11dc6251 cmp dword ptr [0x11dcaab4], esi */
  { uint32_t _a=(r32((uint32_t)(0x11dcaab4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc6257 jle 0x11dc6264 */
  if ((C.zf||C.sf!=C.of)) goto L_11dc6264;
  /* 11dc6259 push esi */
  push32((uint32_t)(ESI));
  /* 11dc625a push ebx */
  push32((uint32_t)(EBX));
  /* 11dc625b call 0x11dc5a84 */
  push32(0x11dc6260u); f_11dc5a84();
  /* 11dc6260 pop ecx */
  ECX = (pop32());
  /* 11dc6261 pop ecx */
  ECX = (pop32());
  /* 11dc6262 jmp 0x11dc626e */
  goto L_11dc626e;
L_11dc6264:;
  /* 11dc6264 mov eax, dword ptr [0x11dca8a8] */
  EAX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc6269 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11dc626c and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11dc626e:;
  /* 11dc626e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc6270 jne 0x11dc6276 */
  if (!C.zf) goto L_11dc6276;
L_11dc6272:;
  /* 11dc6272 mov eax, ebx */
  EAX = (EBX);
  /* 11dc6274 jmp 0x11dc62db */
  goto L_11dc62db;
L_11dc6276:;
  /* 11dc6276 mov edx, dword ptr [0x11dca8a8] */
  EDX = (r32((uint32_t)(0x11dca8a8)));
  /* 11dc627c mov eax, ebx */
  EAX = (EBX);
  /* 11dc627e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc6281 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11dc6284 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11dc6289 je 0x11dc629a */
  if (C.zf) goto L_11dc629a;
  /* 11dc628b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11dc628f push 2 */
  push32((uint32_t)(0x2u));
  /* 11dc6291 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11dc6294 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11dc6297 pop eax */
  EAX = (pop32());
  /* 11dc6298 jmp 0x11dc62a3 */
  goto L_11dc62a3;
L_11dc629a:;
  /* 11dc629a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11dc629e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11dc62a1 mov eax, esi */
  EAX = (ESI);
L_11dc62a3:;
  /* 11dc62a3 push esi */
  push32((uint32_t)(ESI));
  /* 11dc62a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dc62a6 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11dc62a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dc62ab push ecx */
  push32((uint32_t)(ECX));
  /* 11dc62ac push eax */
  push32((uint32_t)(EAX));
  /* 11dc62ad lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11dc62b0 push eax */
  push32((uint32_t)(EAX));
  /* 11dc62b1 push edi */
  push32((uint32_t)(EDI));
  /* 11dc62b2 push dword ptr [0x11dcb244] */
  push32((uint32_t)(r32((uint32_t)(0x11dcb244))));
  /* 11dc62b8 call 0x11dc55a8 */
  push32(0x11dc62bdu); f_11dc55a8();
  /* 11dc62bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dc62c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dc62c2 je 0x11dc6272 */
  if (C.zf) goto L_11dc6272;
  /* 11dc62c4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dc62c6 jne 0x11dc62ce */
  if (!C.zf) goto L_11dc62ce;
  /* 11dc62c8 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11dc62cc jmp 0x11dc62db */
  goto L_11dc62db;
L_11dc62ce:;
  /* 11dc62ce movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11dc62d2 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11dc62d6 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dc62d9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11dc62db:;
  /* 11dc62db pop edi */
  EDI = (pop32());
  /* 11dc62dc pop esi */
  ESI = (pop32());
  /* 11dc62dd pop ebx */
  EBX = (pop32());
  /* 11dc62de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dc62df ret  */
  ESPCHK(0x11dc6215u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11dc6314 (6 bytes, 1 insns) */
void f_11dc6314(void) {
  FTRACE(0x11dc6314u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dc6314 jmp dword ptr [0x11dc7020] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11dc7020)))); return;
}

