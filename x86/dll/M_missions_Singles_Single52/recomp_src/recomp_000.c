#include "recomp.h"

/* FUN_10001020 @ 0x118d1020 (133 bytes, 54 insns) */
void f_118d1020(void) {
  FTRACE(0x118d1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1020 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1021 push esi */
  push32((uint32_t)(ESI));
  /* 118d1022 mov esi, dword ptr [0x118d818c] */
  ESI = (r32((uint32_t)(0x118d818c)));
  /* 118d1028 push edi */
  push32((uint32_t)(EDI));
  /* 118d1029 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d102b push 0x118dc000 */
  push32((uint32_t)(0x118dc000u));
  /* 118d1030 call esi */
  call_ind((uint32_t)(ESI), 0x118d1032u);
  /* 118d1032 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1034 push 0x118dc000 */
  push32((uint32_t)(0x118dc000u));
  /* 118d1039 mov edi, eax */
  EDI = (EAX);
  /* 118d103b call esi */
  call_ind((uint32_t)(ESI), 0x118d103du);
  /* 118d103d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1040 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1042 jge 0x118d1050 */
  if ((C.sf==C.of)) goto L_118d1050;
  /* 118d1044 mov esi, 1 */
  ESI = (0x1u);
  /* 118d1049 mov edi, 2 */
  EDI = (0x2u);
  /* 118d104e jmp 0x118d105a */
  goto L_118d105a;
L_118d1050:;
  /* 118d1050 mov esi, 2 */
  ESI = (0x2u);
  /* 118d1055 mov edi, 1 */
  EDI = (0x1u);
L_118d105a:;
  /* 118d105a mov ebx, dword ptr [0x118d8184] */
  EBX = (r32((uint32_t)(0x118d8184)));
  /* 118d1060 push esi */
  push32((uint32_t)(ESI));
  /* 118d1061 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1063u);
  /* 118d1063 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1066 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1068 jne 0x118d107a */
  if (!C.zf) goto L_118d107a;
  /* 118d106a mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d106e push esi */
  push32((uint32_t)(ESI));
  /* 118d106f push 4 */
  push32((uint32_t)(0x4u));
  /* 118d1071 call 0x118d1a10 */
  push32(0x118d1076u); f_118d1a10();
  /* 118d1076 pop edi */
  EDI = (pop32());
  /* 118d1077 pop esi */
  ESI = (pop32());
  /* 118d1078 pop ebx */
  EBX = (pop32());
  /* 118d1079 ret  */
  ESPCHK(0x118d1020u, _esp0);
  ESP += 4; return;
L_118d107a:;
  /* 118d107a push edi */
  push32((uint32_t)(EDI));
  /* 118d107b call ebx */
  call_ind((uint32_t)(EBX), 0x118d107du);
  /* 118d107d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1080 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1082 jne 0x118d1094 */
  if (!C.zf) goto L_118d1094;
  /* 118d1084 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d1088 push edi */
  push32((uint32_t)(EDI));
  /* 118d1089 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d108b call 0x118d1a10 */
  push32(0x118d1090u); f_118d1a10();
  /* 118d1090 pop edi */
  EDI = (pop32());
  /* 118d1091 pop esi */
  ESI = (pop32());
  /* 118d1092 pop ebx */
  EBX = (pop32());
  /* 118d1093 ret  */
  ESPCHK(0x118d1020u, _esp0);
  ESP += 4; return;
L_118d1094:;
  /* 118d1094 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d1098 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d109a push 4 */
  push32((uint32_t)(0x4u));
  /* 118d109c call 0x118d1a10 */
  push32(0x118d10a1u); f_118d1a10();
  /* 118d10a1 pop edi */
  EDI = (pop32());
  /* 118d10a2 pop esi */
  ESI = (pop32());
  /* 118d10a3 pop ebx */
  EBX = (pop32());
  /* 118d10a4 ret  */
  ESPCHK(0x118d1020u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x118d10b0 (642 bytes, 157 insns) */
void f_118d10b0(void) {
  FTRACE(0x118d10b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d10b0 push esi */
  push32((uint32_t)(ESI));
  /* 118d10b1 push edi */
  push32((uint32_t)(EDI));
  /* 118d10b2 push 0x68 */
  push32((uint32_t)(0x68u));
  /* 118d10b4 push 0x118dbf98 */
  push32((uint32_t)(0x118dbf98u));
  /* 118d10b9 call dword ptr [0x118d8170] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8170))), 0x118d10bfu);
  /* 118d10bf mov edi, dword ptr [0x118d8174] */
  EDI = (r32((uint32_t)(0x118d8174)));
  /* 118d10c5 push 0x118d921c */
  push32((uint32_t)(0x118d921cu));
  /* 118d10ca push 0x118dbf88 */
  push32((uint32_t)(0x118dbf88u));
  /* 118d10cf call edi */
  call_ind((uint32_t)(EDI), 0x118d10d1u);
  /* 118d10d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d10d4 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d10d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d10db call 0x118d1b20 */
  push32(0x118d10e0u); f_118d1b20();
  /* 118d10e0 push 0x118d920c */
  push32((uint32_t)(0x118d920cu));
  /* 118d10e5 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d10ea call 0x118d1b30 */
  push32(0x118d10efu); f_118d1b30();
  /* 118d10ef push 0x118d91fc */
  push32((uint32_t)(0x118d91fcu));
  /* 118d10f4 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d10f9 call 0x118d1b30 */
  push32(0x118d10feu); f_118d1b30();
  /* 118d10fe push 0x118d91ec */
  push32((uint32_t)(0x118d91ecu));
  /* 118d1103 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d1108 call 0x118d1b30 */
  push32(0x118d110du); f_118d1b30();
  /* 118d110d push 0x118d91dc */
  push32((uint32_t)(0x118d91dcu));
  /* 118d1112 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d1117 call 0x118d1b60 */
  push32(0x118d111cu); f_118d1b60();
  /* 118d111c push 0x118d91cc */
  push32((uint32_t)(0x118d91ccu));
  /* 118d1121 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d1126 call 0x118d1b80 */
  push32(0x118d112bu); f_118d1b80();
  /* 118d112b push 0x118d91b8 */
  push32((uint32_t)(0x118d91b8u));
  /* 118d1130 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d1135 call 0x118d1ba0 */
  push32(0x118d113au); f_118d1ba0();
  /* 118d113a push 0x118d91a4 */
  push32((uint32_t)(0x118d91a4u));
  /* 118d113f mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d1144 call 0x118d1bc0 */
  push32(0x118d1149u); f_118d1bc0();
  /* 118d1149 mov esi, dword ptr [0x118d816c] */
  ESI = (r32((uint32_t)(0x118d816c)));
  /* 118d114f push 0x118d919c */
  push32((uint32_t)(0x118d919cu));
  /* 118d1154 push 0x118dc020 */
  push32((uint32_t)(0x118dc020u));
  /* 118d1159 call esi */
  call_ind((uint32_t)(ESI), 0x118d115bu);
  /* 118d115b push 0x118d9194 */
  push32((uint32_t)(0x118d9194u));
  /* 118d1160 push 0x118dc028 */
  push32((uint32_t)(0x118dc028u));
  /* 118d1165 call esi */
  call_ind((uint32_t)(ESI), 0x118d1167u);
  /* 118d1167 push 0x118d918c */
  push32((uint32_t)(0x118d918cu));
  /* 118d116c push 0x118dc030 */
  push32((uint32_t)(0x118dc030u));
  /* 118d1171 call esi */
  call_ind((uint32_t)(ESI), 0x118d1173u);
  /* 118d1173 push 0x118d9184 */
  push32((uint32_t)(0x118d9184u));
  /* 118d1178 push 0x118dc010 */
  push32((uint32_t)(0x118dc010u));
  /* 118d117d call esi */
  call_ind((uint32_t)(ESI), 0x118d117fu);
  /* 118d117f push 0x118d917c */
  push32((uint32_t)(0x118d917cu));
  /* 118d1184 push 0x118dc018 */
  push32((uint32_t)(0x118dc018u));
  /* 118d1189 call esi */
  call_ind((uint32_t)(ESI), 0x118d118bu);
  /* 118d118b push 0x118d916c */
  push32((uint32_t)(0x118d916cu));
  /* 118d1190 push 0x118dc008 */
  push32((uint32_t)(0x118dc008u));
  /* 118d1195 call edi */
  call_ind((uint32_t)(EDI), 0x118d1197u);
  /* 118d1197 mov esi, dword ptr [0x118d817c] */
  ESI = (r32((uint32_t)(0x118d817c)));
  /* 118d119d push 0x118d9158 */
  push32((uint32_t)(0x118d9158u));
  /* 118d11a2 push 0x118dc000 */
  push32((uint32_t)(0x118dc000u));
  /* 118d11a7 call esi */
  call_ind((uint32_t)(ESI), 0x118d11a9u);
  /* 118d11a9 push 0x118d914c */
  push32((uint32_t)(0x118d914cu));
  /* 118d11ae push 0x118dbf78 */
  push32((uint32_t)(0x118dbf78u));
  /* 118d11b3 call esi */
  call_ind((uint32_t)(ESI), 0x118d11b5u);
  /* 118d11b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d11b8 push 0x118d913c */
  push32((uint32_t)(0x118d913cu));
  /* 118d11bd push 0x118dbf90 */
  push32((uint32_t)(0x118dbf90u));
  /* 118d11c2 call esi */
  call_ind((uint32_t)(ESI), 0x118d11c4u);
  /* 118d11c4 push 0x118d9130 */
  push32((uint32_t)(0x118d9130u));
  /* 118d11c9 push 0x118dc130 */
  push32((uint32_t)(0x118dc130u));
  /* 118d11ce call esi */
  call_ind((uint32_t)(ESI), 0x118d11d0u);
  /* 118d11d0 mov esi, dword ptr [0x118d8180] */
  ESI = (r32((uint32_t)(0x118d8180)));
  /* 118d11d6 push 0x118d9128 */
  push32((uint32_t)(0x118d9128u));
  /* 118d11db push 0x118dbf80 */
  push32((uint32_t)(0x118dbf80u));
  /* 118d11e0 call esi */
  call_ind((uint32_t)(ESI), 0x118d11e2u);
  /* 118d11e2 push 0x118d9120 */
  push32((uint32_t)(0x118d9120u));
  /* 118d11e7 push 0x118dc128 */
  push32((uint32_t)(0x118dc128u));
  /* 118d11ec call esi */
  call_ind((uint32_t)(ESI), 0x118d11eeu);
  /* 118d11ee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d11f1 mov ecx, 0x118dc038 */
  ECX = (0x118dc038u);
  /* 118d11f6 push 0x118d9110 */
  push32((uint32_t)(0x118d9110u));
  /* 118d11fb call 0x118d1960 */
  push32(0x118d1200u); f_118d1960();
  /* 118d1200 push 0x118d9100 */
  push32((uint32_t)(0x118d9100u));
  /* 118d1205 mov ecx, 0x118dc038 */
  ECX = (0x118dc038u);
  /* 118d120a call 0x118d1980 */
  push32(0x118d120fu); f_118d1980();
  /* 118d120f push 0x118d90f0 */
  push32((uint32_t)(0x118d90f0u));
  /* 118d1214 mov ecx, 0x118dc038 */
  ECX = (0x118dc038u);
  /* 118d1219 call 0x118d19c0 */
  push32(0x118d121eu); f_118d19c0();
  /* 118d121e push 0x118d90e4 */
  push32((uint32_t)(0x118d90e4u));
  /* 118d1223 mov ecx, 0x118dc038 */
  ECX = (0x118dc038u);
  /* 118d1228 call 0x118d19f0 */
  push32(0x118d122du); f_118d19f0();
  /* 118d122d push 0x118d90d8 */
  push32((uint32_t)(0x118d90d8u));
  /* 118d1232 mov ecx, 0x118dc038 */
  ECX = (0x118dc038u);
  /* 118d1237 call 0x118d19a0 */
  push32(0x118d123cu); f_118d19a0();
  /* 118d123c push 0x118d90c8 */
  push32((uint32_t)(0x118d90c8u));
  /* 118d1241 mov ecx, 0x118dc088 */
  ECX = (0x118dc088u);
  /* 118d1246 call 0x118d1960 */
  push32(0x118d124bu); f_118d1960();
  /* 118d124b push 0x118d90b8 */
  push32((uint32_t)(0x118d90b8u));
  /* 118d1250 mov ecx, 0x118dc088 */
  ECX = (0x118dc088u);
  /* 118d1255 call 0x118d1980 */
  push32(0x118d125au); f_118d1980();
  /* 118d125a push 0x118d90a8 */
  push32((uint32_t)(0x118d90a8u));
  /* 118d125f mov ecx, 0x118dc088 */
  ECX = (0x118dc088u);
  /* 118d1264 call 0x118d19c0 */
  push32(0x118d1269u); f_118d19c0();
  /* 118d1269 push 0x118d909c */
  push32((uint32_t)(0x118d909cu));
  /* 118d126e mov ecx, 0x118dc088 */
  ECX = (0x118dc088u);
  /* 118d1273 call 0x118d19f0 */
  push32(0x118d1278u); f_118d19f0();
  /* 118d1278 push 0x118d9090 */
  push32((uint32_t)(0x118d9090u));
  /* 118d127d mov ecx, 0x118dc088 */
  ECX = (0x118dc088u);
  /* 118d1282 call 0x118d19a0 */
  push32(0x118d1287u); f_118d19a0();
  /* 118d1287 push 0x118d9080 */
  push32((uint32_t)(0x118d9080u));
  /* 118d128c mov ecx, 0x118dc0d8 */
  ECX = (0x118dc0d8u);
  /* 118d1291 call 0x118d1960 */
  push32(0x118d1296u); f_118d1960();
  /* 118d1296 push 0x118d9070 */
  push32((uint32_t)(0x118d9070u));
  /* 118d129b mov ecx, 0x118dc0d8 */
  ECX = (0x118dc0d8u);
  /* 118d12a0 call 0x118d1980 */
  push32(0x118d12a5u); f_118d1980();
  /* 118d12a5 push 0x118d9060 */
  push32((uint32_t)(0x118d9060u));
  /* 118d12aa mov ecx, 0x118dc0d8 */
  ECX = (0x118dc0d8u);
  /* 118d12af call 0x118d19c0 */
  push32(0x118d12b4u); f_118d19c0();
  /* 118d12b4 push 0x118d9054 */
  push32((uint32_t)(0x118d9054u));
  /* 118d12b9 mov ecx, 0x118dc0d8 */
  ECX = (0x118dc0d8u);
  /* 118d12be call 0x118d19f0 */
  push32(0x118d12c3u); f_118d19f0();
  /* 118d12c3 push 0x118d9048 */
  push32((uint32_t)(0x118d9048u));
  /* 118d12c8 mov ecx, 0x118dc0d8 */
  ECX = (0x118dc0d8u);
  /* 118d12cd call 0x118d19a0 */
  push32(0x118d12d2u); f_118d19a0();
  /* 118d12d2 mov esi, dword ptr [0x118d8178] */
  ESI = (r32((uint32_t)(0x118d8178)));
  /* 118d12d8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 118d12da push 1 */
  push32((uint32_t)(0x1u));
  /* 118d12dc call esi */
  call_ind((uint32_t)(ESI), 0x118d12deu);
  /* 118d12de push 0xe */
  push32((uint32_t)(0xeu));
  /* 118d12e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d12e2 call esi */
  call_ind((uint32_t)(ESI), 0x118d12e4u);
  /* 118d12e4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 118d12e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d12e8 call esi */
  call_ind((uint32_t)(ESI), 0x118d12eau);
  /* 118d12ea push 0xe */
  push32((uint32_t)(0xeu));
  /* 118d12ec push 4 */
  push32((uint32_t)(0x4u));
  /* 118d12ee call esi */
  call_ind((uint32_t)(ESI), 0x118d12f0u);
  /* 118d12f0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 118d12f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d12f4 call esi */
  call_ind((uint32_t)(ESI), 0x118d12f6u);
  /* 118d12f6 mov esi, dword ptr [0x118d8188] */
  ESI = (r32((uint32_t)(0x118d8188)));
  /* 118d12fc push 0x118d9040 */
  push32((uint32_t)(0x118d9040u));
  /* 118d1301 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1303 call esi */
  call_ind((uint32_t)(ESI), 0x118d1305u);
  /* 118d1305 push 0x118d9040 */
  push32((uint32_t)(0x118d9040u));
  /* 118d130a push 2 */
  push32((uint32_t)(0x2u));
  /* 118d130c call esi */
  call_ind((uint32_t)(ESI), 0x118d130eu);
  /* 118d130e push 0x118d9040 */
  push32((uint32_t)(0x118d9040u));
  /* 118d1313 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1315 call esi */
  call_ind((uint32_t)(ESI), 0x118d1317u);
  /* 118d1317 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d131a push 0x118d9038 */
  push32((uint32_t)(0x118d9038u));
  /* 118d131f push 4 */
  push32((uint32_t)(0x4u));
  /* 118d1321 call esi */
  call_ind((uint32_t)(ESI), 0x118d1323u);
  /* 118d1323 push 0x118d9030 */
  push32((uint32_t)(0x118d9030u));
  /* 118d1328 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d132a call esi */
  call_ind((uint32_t)(ESI), 0x118d132cu);
  /* 118d132c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d132f pop edi */
  EDI = (pop32());
  /* 118d1330 pop esi */
  ESI = (pop32());
  /* 118d1331 ret  */
  ESPCHK(0x118d10b0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x118d1340 (1553 bytes, 530 insns) */
void f_118d1340(void) {
  FTRACE(0x118d1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1340 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1341 push ebp */
  push32((uint32_t)(EBP));
  /* 118d1342 push esi */
  push32((uint32_t)(ESI));
  /* 118d1343 push edi */
  push32((uint32_t)(EDI));
  /* 118d1344 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1346 call dword ptr [0x118d8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8120))), 0x118d134cu);
  /* 118d134c mov edi, dword ptr [0x118d8118] */
  EDI = (r32((uint32_t)(0x118d8118)));
  /* 118d1352 mov esi, dword ptr [0x118d8128] */
  ESI = (r32((uint32_t)(0x118d8128)));
  /* 118d1358 mov ebp, dword ptr [0x118d812c] */
  EBP = (r32((uint32_t)(0x118d812c)));
  /* 118d135e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1361 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1363 je 0x118d161a */
  if (C.zf) goto L_118d161a;
  /* 118d1369 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d136b push 0 */
  push32((uint32_t)(0x0u));
  /* 118d136d call dword ptr [0x118d8124] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8124))), 0x118d1373u);
  /* 118d1373 push 0x118d92bc */
  push32((uint32_t)(0x118d92bcu));
  /* 118d1378 call dword ptr [0x118d8134] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8134))), 0x118d137eu);
  /* 118d137e mov ebx, dword ptr [0x118d8138] */
  EBX = (r32((uint32_t)(0x118d8138)));
  /* 118d1384 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 118d1386 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1388u);
  /* 118d1388 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 118d138a call ebx */
  call_ind((uint32_t)(EBX), 0x118d138cu);
  /* 118d138c push 0 */
  push32((uint32_t)(0x0u));
  /* 118d138e push 0x118dc008 */
  push32((uint32_t)(0x118dc008u));
  /* 118d1393 call dword ptr [0x118d8130] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8130))), 0x118d1399u);
  /* 118d1399 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d139b push 3 */
  push32((uint32_t)(0x3u));
  /* 118d139d call dword ptr [0x118d8140] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8140))), 0x118d13a3u);
  /* 118d13a3 mov ebx, dword ptr [0x118d8144] */
  EBX = (r32((uint32_t)(0x118d8144)));
  /* 118d13a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13ab push 0x118dbf78 */
  push32((uint32_t)(0x118dbf78u));
  /* 118d13b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13b2 call ebx */
  call_ind((uint32_t)(EBX), 0x118d13b4u);
  /* 118d13b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13b6 push 0x118dc130 */
  push32((uint32_t)(0x118dc130u));
  /* 118d13bb push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13bd call ebx */
  call_ind((uint32_t)(EBX), 0x118d13bfu);
  /* 118d13bf push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13c1 push 0x118dbf90 */
  push32((uint32_t)(0x118dbf90u));
  /* 118d13c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13c8 call ebx */
  call_ind((uint32_t)(EBX), 0x118d13cau);
  /* 118d13ca mov ebx, dword ptr [0x118d813c] */
  EBX = (r32((uint32_t)(0x118d813c)));
  /* 118d13d0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d13d3 push 0x118dbf80 */
  push32((uint32_t)(0x118dbf80u));
  /* 118d13d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13da call ebx */
  call_ind((uint32_t)(EBX), 0x118d13dcu);
  /* 118d13dc push 0x118dc128 */
  push32((uint32_t)(0x118dc128u));
  /* 118d13e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13e3 call ebx */
  call_ind((uint32_t)(EBX), 0x118d13e5u);
  /* 118d13e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d13e7 call edi */
  call_ind((uint32_t)(EDI), 0x118d13e9u);
  /* 118d13e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d13ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d13ee jne 0x118d142f */
  if (!C.zf) goto L_118d142f;
  /* 118d13f0 mov ebx, dword ptr [0x118d814c] */
  EBX = (r32((uint32_t)(0x118d814c)));
  /* 118d13f6 push eax */
  push32((uint32_t)(EAX));
  /* 118d13f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d13f9 push 0x118dc020 */
  push32((uint32_t)(0x118dc020u));
  /* 118d13fe call ebx */
  call_ind((uint32_t)(EBX), 0x118d1400u);
  /* 118d1400 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1402 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1404 push 0x118dc028 */
  push32((uint32_t)(0x118dc028u));
  /* 118d1409 call ebx */
  call_ind((uint32_t)(EBX), 0x118d140bu);
  /* 118d140b push 2 */
  push32((uint32_t)(0x2u));
  /* 118d140d push 2 */
  push32((uint32_t)(0x2u));
  /* 118d140f push 0x118dc030 */
  push32((uint32_t)(0x118dc030u));
  /* 118d1414 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1416u);
  /* 118d1416 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1418 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d141a push 0x118dc010 */
  push32((uint32_t)(0x118dc010u));
  /* 118d141f call ebx */
  call_ind((uint32_t)(EBX), 0x118d1421u);
  /* 118d1421 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d1423 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1425 push 0x118dc018 */
  push32((uint32_t)(0x118dc018u));
  /* 118d142a call ebx */
  call_ind((uint32_t)(EBX), 0x118d142cu);
  /* 118d142c add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d142f:;
  /* 118d142f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1431 call edi */
  call_ind((uint32_t)(EDI), 0x118d1433u);
  /* 118d1433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1436 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1439 jne 0x118d1480 */
  if (!C.zf) goto L_118d1480;
  /* 118d143b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1440 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1442 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1444 call esi */
  call_ind((uint32_t)(ESI), 0x118d1446u);
  /* 118d1446 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d144b push 0 */
  push32((uint32_t)(0x0u));
  /* 118d144d push 0 */
  push32((uint32_t)(0x0u));
  /* 118d144f call esi */
  call_ind((uint32_t)(ESI), 0x118d1451u);
  /* 118d1451 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1456 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1458 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d145a call esi */
  call_ind((uint32_t)(ESI), 0x118d145cu);
  /* 118d145c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1461 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1463 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1465 call esi */
  call_ind((uint32_t)(ESI), 0x118d1467u);
  /* 118d1467 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d146c push 4 */
  push32((uint32_t)(0x4u));
  /* 118d146e push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1470 call esi */
  call_ind((uint32_t)(ESI), 0x118d1472u);
  /* 118d1472 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1477 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d1479 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d147b call esi */
  call_ind((uint32_t)(ESI), 0x118d147du);
  /* 118d147d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d1480:;
  /* 118d1480 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1482 call edi */
  call_ind((uint32_t)(EDI), 0x118d1484u);
  /* 118d1484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1487 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d148a jne 0x118d14d1 */
  if (!C.zf) goto L_118d14d1;
  /* 118d148c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 118d1491 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1493 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1495 call esi */
  call_ind((uint32_t)(ESI), 0x118d1497u);
  /* 118d1497 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 118d149c push 0 */
  push32((uint32_t)(0x0u));
  /* 118d149e push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14a0 call esi */
  call_ind((uint32_t)(ESI), 0x118d14a2u);
  /* 118d14a2 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 118d14a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d14a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14ab call esi */
  call_ind((uint32_t)(ESI), 0x118d14adu);
  /* 118d14ad push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 118d14b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d14b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14b6 call esi */
  call_ind((uint32_t)(ESI), 0x118d14b8u);
  /* 118d14b8 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 118d14bd push 4 */
  push32((uint32_t)(0x4u));
  /* 118d14bf push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14c1 call esi */
  call_ind((uint32_t)(ESI), 0x118d14c3u);
  /* 118d14c3 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 118d14c8 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d14ca push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14cc call esi */
  call_ind((uint32_t)(ESI), 0x118d14ceu);
  /* 118d14ce add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d14d1:;
  /* 118d14d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14d3 call edi */
  call_ind((uint32_t)(EDI), 0x118d14d5u);
  /* 118d14d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d14d8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d14db jne 0x118d1521 */
  if (!C.zf) goto L_118d1521;
  /* 118d14dd push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118d14e2 push eax */
  push32((uint32_t)(EAX));
  /* 118d14e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14e5 call esi */
  call_ind((uint32_t)(ESI), 0x118d14e7u);
  /* 118d14e7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118d14ec push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14ee push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14f0 call esi */
  call_ind((uint32_t)(ESI), 0x118d14f2u);
  /* 118d14f2 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118d14f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d14f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d14fb call esi */
  call_ind((uint32_t)(ESI), 0x118d14fdu);
  /* 118d14fd push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118d1502 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1504 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1506 call esi */
  call_ind((uint32_t)(ESI), 0x118d1508u);
  /* 118d1508 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118d150d push 4 */
  push32((uint32_t)(0x4u));
  /* 118d150f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1511 call esi */
  call_ind((uint32_t)(ESI), 0x118d1513u);
  /* 118d1513 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118d1518 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d151a push 0 */
  push32((uint32_t)(0x0u));
  /* 118d151c call esi */
  call_ind((uint32_t)(ESI), 0x118d151eu);
  /* 118d151e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d1521:;
  /* 118d1521 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1523 call edi */
  call_ind((uint32_t)(EDI), 0x118d1525u);
  /* 118d1525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1528 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d1529 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d152e push eax */
  push32((uint32_t)(EAX));
  /* 118d152f call 0x118d1b10 */
  push32(0x118d1534u); f_118d1b10();
  /* 118d1534 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1536 call edi */
  call_ind((uint32_t)(EDI), 0x118d1538u);
  /* 118d1538 mov ecx, 8 */
  ECX = (0x8u);
  /* 118d153d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d153f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118d1542 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d1545 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d1548 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118d154b push eax */
  push32((uint32_t)(EAX));
  /* 118d154c push 2 */
  push32((uint32_t)(0x2u));
  /* 118d154e call ebp */
  call_ind((uint32_t)(EBP), 0x118d1550u);
  /* 118d1550 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1555 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1557 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1559 call esi */
  call_ind((uint32_t)(ESI), 0x118d155bu);
  /* 118d155b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1560 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1562 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1564 call esi */
  call_ind((uint32_t)(ESI), 0x118d1566u);
  /* 118d1566 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d156b push 2 */
  push32((uint32_t)(0x2u));
  /* 118d156d push 1 */
  push32((uint32_t)(0x1u));
  /* 118d156f call esi */
  call_ind((uint32_t)(ESI), 0x118d1571u);
  /* 118d1571 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1576 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1578 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d157a call esi */
  call_ind((uint32_t)(ESI), 0x118d157cu);
  /* 118d157c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d1581 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d1583 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1585 call esi */
  call_ind((uint32_t)(ESI), 0x118d1587u);
  /* 118d1587 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d158a push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 118d158f push 5 */
  push32((uint32_t)(0x5u));
  /* 118d1591 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1593 call esi */
  call_ind((uint32_t)(ESI), 0x118d1595u);
  /* 118d1595 mov ebx, dword ptr [0x118d8150] */
  EBX = (r32((uint32_t)(0x118d8150)));
  /* 118d159b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d159d push 2 */
  push32((uint32_t)(0x2u));
  /* 118d159f push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d15a3 push 0x118d92b0 */
  push32((uint32_t)(0x118d92b0u));
  /* 118d15a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d15aa call ebx */
  call_ind((uint32_t)(EBX), 0x118d15acu);
  /* 118d15ac push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d15b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d15b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15b5 call esi */
  call_ind((uint32_t)(ESI), 0x118d15b7u);
  /* 118d15b7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d15bc push 0 */
  push32((uint32_t)(0x0u));
  /* 118d15be push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15c0 call esi */
  call_ind((uint32_t)(ESI), 0x118d15c2u);
  /* 118d15c2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d15c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15cb call esi */
  call_ind((uint32_t)(ESI), 0x118d15cdu);
  /* 118d15cd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d15d0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d15d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d15d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15d9 call esi */
  call_ind((uint32_t)(ESI), 0x118d15dbu);
  /* 118d15db push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 118d15e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d15e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15e4 call esi */
  call_ind((uint32_t)(ESI), 0x118d15e6u);
  /* 118d15e6 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 118d15eb push 5 */
  push32((uint32_t)(0x5u));
  /* 118d15ed push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15ef call esi */
  call_ind((uint32_t)(ESI), 0x118d15f1u);
  /* 118d15f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d15f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d15f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d15f9 push 0x118d92b0 */
  push32((uint32_t)(0x118d92b0u));
  /* 118d15fe push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1600 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1602u);
  /* 118d1602 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 118d1607 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1609 call ebp */
  call_ind((uint32_t)(EBP), 0x118d160bu);
  /* 118d160b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d160e push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 118d1613 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1615 call ebp */
  call_ind((uint32_t)(EBP), 0x118d1617u);
  /* 118d1617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d161a:;
  /* 118d161a call dword ptr [0x118d8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8148))), 0x118d1620u);
  /* 118d1620 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d1622 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1627 push 8 */
  push32((uint32_t)(0x8u));
  /* 118d1629 setg bl */
  BL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 118d162c call dword ptr [0x118d8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8120))), 0x118d1632u);
  /* 118d1632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1635 test al, bl */
  { uint32_t _r=(AL)&(BL); fl_logic(_r,8); }
  /* 118d1637 je 0x118d1740 */
  if (C.zf) goto L_118d1740;
  /* 118d163d mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d1642 call 0x118d1da0 */
  push32(0x118d1647u); f_118d1da0();
  /* 118d1647 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1649 je 0x118d16b4 */
  if (C.zf) goto L_118d16b4;
  /* 118d164b mov ebx, dword ptr [0x118d8124] */
  EBX = (r32((uint32_t)(0x118d8124)));
  /* 118d1651 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1653 push 8 */
  push32((uint32_t)(0x8u));
  /* 118d1655 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1657u);
  /* 118d1657 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1659 call edi */
  call_ind((uint32_t)(EDI), 0x118d165bu);
  /* 118d165b mov ecx, 4 */
  ECX = (0x4u);
  /* 118d1660 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1663 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d1665 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118d1668 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d166b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 118d166e shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d1671 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1672 push 0x118d92a4 */
  push32((uint32_t)(0x118d92a4u));
  /* 118d1677 call dword ptr [0x118d8158] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8158))), 0x118d167du);
  /* 118d167d push 0 */
  push32((uint32_t)(0x0u));
  /* 118d167f call edi */
  call_ind((uint32_t)(EDI), 0x118d1681u);
  /* 118d1681 mov ecx, 4 */
  ECX = (0x4u);
  /* 118d1686 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d1688 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118d168b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d168e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118d1691 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 118d1694 push edx */
  push32((uint32_t)(EDX));
  /* 118d1695 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1697 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1699 call dword ptr [0x118d815c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d815c))), 0x118d169fu);
  /* 118d169f push 0x42 */
  push32((uint32_t)(0x42u));
  /* 118d16a1 call dword ptr [0x118d8138] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8138))), 0x118d16a7u);
  /* 118d16a7 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 118d16a9 call dword ptr [0x118d8154] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8154))), 0x118d16afu);
  /* 118d16af add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d16b2 jmp 0x118d16ba */
  goto L_118d16ba;
L_118d16b4:;
  /* 118d16b4 mov ebx, dword ptr [0x118d8124] */
  EBX = (r32((uint32_t)(0x118d8124)));
L_118d16ba:;
  /* 118d16ba push 0x118dbf88 */
  push32((uint32_t)(0x118dbf88u));
  /* 118d16bf mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d16c4 call 0x118d1cc0 */
  push32(0x118d16c9u); f_118d1cc0();
  /* 118d16c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d16cb call dword ptr [0x118d8164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8164))), 0x118d16d1u);
  /* 118d16d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d16d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d16d6 je 0x118d1746 */
  if (C.zf) goto L_118d1746;
  /* 118d16d8 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d16dd call 0x118d1d60 */
  push32(0x118d16e2u); f_118d1d60();
  /* 118d16e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d16e4 je 0x118d1746 */
  if (C.zf) goto L_118d1746;
  /* 118d16e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d16e8 call edi */
  call_ind((uint32_t)(EDI), 0x118d16eau);
  /* 118d16ea mov ecx, 8 */
  ECX = (0x8u);
  /* 118d16ef sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d16f1 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 118d16f4 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118d16f7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d16fa shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118d16fd push eax */
  push32((uint32_t)(EAX));
  /* 118d16fe push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1700 call ebp */
  call_ind((uint32_t)(EBP), 0x118d1702u);
  /* 118d1702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1705 mov ecx, 0x118dbf98 */
  ECX = (0x118dbf98u);
  /* 118d170a push 1 */
  push32((uint32_t)(0x1u));
  /* 118d170c call 0x118d1be0 */
  push32(0x118d1711u); f_118d1be0();
  /* 118d1711 push 7 */
  push32((uint32_t)(0x7u));
  /* 118d1713 call dword ptr [0x118d8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8120))), 0x118d1719u);
  /* 118d1719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d171c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d171e je 0x118d1746 */
  if (C.zf) goto L_118d1746;
  /* 118d1720 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1722 push 7 */
  push32((uint32_t)(0x7u));
  /* 118d1724 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1726u);
  /* 118d1726 mov edi, dword ptr [0x118d8134] */
  EDI = (r32((uint32_t)(0x118d8134)));
  /* 118d172c push 0x118d9298 */
  push32((uint32_t)(0x118d9298u));
  /* 118d1731 call edi */
  call_ind((uint32_t)(EDI), 0x118d1733u);
  /* 118d1733 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 118d1735 call dword ptr [0x118d8154] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8154))), 0x118d173bu);
  /* 118d173b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d173e jmp 0x118d174c */
  goto L_118d174c;
L_118d1740:;
  /* 118d1740 mov ebx, dword ptr [0x118d8124] */
  EBX = (r32((uint32_t)(0x118d8124)));
L_118d1746:;
  /* 118d1746 mov edi, dword ptr [0x118d8134] */
  EDI = (r32((uint32_t)(0x118d8134)));
L_118d174c:;
  /* 118d174c push 1 */
  push32((uint32_t)(0x1u));
  /* 118d174e call dword ptr [0x118d8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8120))), 0x118d1754u);
  /* 118d1754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1757 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1759 je 0x118d1797 */
  if (C.zf) goto L_118d1797;
  /* 118d175b mov ecx, 0x118dc038 */
  ECX = (0x118dc038u);
  /* 118d1760 call 0x118d1a70 */
  push32(0x118d1765u); f_118d1a70();
  /* 118d1765 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1767 call dword ptr [0x118d8164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8164))), 0x118d176du);
  /* 118d176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1770 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1772 je 0x118d1797 */
  if (C.zf) goto L_118d1797;
  /* 118d1774 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1776 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1778 call ebx */
  call_ind((uint32_t)(EBX), 0x118d177au);
  /* 118d177a push 0x118dc038 */
  push32((uint32_t)(0x118dc038u));
  /* 118d177f call 0x118d1020 */
  push32(0x118d1784u); f_118d1020();
  /* 118d1784 push 0x118d928c */
  push32((uint32_t)(0x118d928cu));
  /* 118d1789 call edi */
  call_ind((uint32_t)(EDI), 0x118d178bu);
  /* 118d178b push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 118d1790 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1792 call ebp */
  call_ind((uint32_t)(EBP), 0x118d1794u);
  /* 118d1794 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d1797:;
  /* 118d1797 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1799 call dword ptr [0x118d8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8120))), 0x118d179fu);
  /* 118d179f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d17a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d17a4 je 0x118d17f1 */
  if (C.zf) goto L_118d17f1;
  /* 118d17a6 mov ecx, 0x118dc088 */
  ECX = (0x118dc088u);
  /* 118d17ab call 0x118d1a70 */
  push32(0x118d17b0u); f_118d1a70();
  /* 118d17b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d17b2 call dword ptr [0x118d8164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8164))), 0x118d17b8u);
  /* 118d17b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d17bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d17bd je 0x118d17f1 */
  if (C.zf) goto L_118d17f1;
  /* 118d17bf push 1 */
  push32((uint32_t)(0x1u));
  /* 118d17c1 call dword ptr [0x118d8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8120))), 0x118d17c7u);
  /* 118d17c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d17ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d17cc jne 0x118d17f1 */
  if (!C.zf) goto L_118d17f1;
  /* 118d17ce push 0 */
  push32((uint32_t)(0x0u));
  /* 118d17d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d17d2 call ebx */
  call_ind((uint32_t)(EBX), 0x118d17d4u);
  /* 118d17d4 push 0x118dc088 */
  push32((uint32_t)(0x118dc088u));
  /* 118d17d9 call 0x118d1020 */
  push32(0x118d17deu); f_118d1020();
  /* 118d17de push 0x118d9280 */
  push32((uint32_t)(0x118d9280u));
  /* 118d17e3 call edi */
  call_ind((uint32_t)(EDI), 0x118d17e5u);
  /* 118d17e5 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 118d17ea push 0 */
  push32((uint32_t)(0x0u));
  /* 118d17ec call ebp */
  call_ind((uint32_t)(EBP), 0x118d17eeu);
  /* 118d17ee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d17f1:;
  /* 118d17f1 mov ebp, dword ptr [0x118d8120] */
  EBP = (r32((uint32_t)(0x118d8120)));
  /* 118d17f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d17f9 call ebp */
  call_ind((uint32_t)(EBP), 0x118d17fbu);
  /* 118d17fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d17fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1800 je 0x118d1840 */
  if (C.zf) goto L_118d1840;
  /* 118d1802 mov ecx, 0x118dc0d8 */
  ECX = (0x118dc0d8u);
  /* 118d1807 call 0x118d1a70 */
  push32(0x118d180cu); f_118d1a70();
  /* 118d180c push 0 */
  push32((uint32_t)(0x0u));
  /* 118d180e call dword ptr [0x118d8164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8164))), 0x118d1814u);
  /* 118d1814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1817 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1819 je 0x118d1840 */
  if (C.zf) goto L_118d1840;
  /* 118d181b push 2 */
  push32((uint32_t)(0x2u));
  /* 118d181d call ebp */
  call_ind((uint32_t)(EBP), 0x118d181fu);
  /* 118d181f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1822 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1824 jne 0x118d1840 */
  if (!C.zf) goto L_118d1840;
  /* 118d1826 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1828 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d182a call ebx */
  call_ind((uint32_t)(EBX), 0x118d182cu);
  /* 118d182c push 0x118dc0d8 */
  push32((uint32_t)(0x118dc0d8u));
  /* 118d1831 call 0x118d1020 */
  push32(0x118d1836u); f_118d1020();
  /* 118d1836 push 0x118d9274 */
  push32((uint32_t)(0x118d9274u));
  /* 118d183b call edi */
  call_ind((uint32_t)(EDI), 0x118d183du);
  /* 118d183d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d1840:;
  /* 118d1840 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d1842 call ebp */
  call_ind((uint32_t)(EBP), 0x118d1844u);
  /* 118d1844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1847 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1849 je 0x118d18c4 */
  if (C.zf) goto L_118d18c4;
  /* 118d184b push 1 */
  push32((uint32_t)(0x1u));
  /* 118d184d call dword ptr [0x118d8164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8164))), 0x118d1853u);
  /* 118d1853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1856 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1858 je 0x118d18c4 */
  if (C.zf) goto L_118d18c4;
  /* 118d185a push 0 */
  push32((uint32_t)(0x0u));
  /* 118d185c push 4 */
  push32((uint32_t)(0x4u));
  /* 118d185e call ebx */
  call_ind((uint32_t)(EBX), 0x118d1860u);
  /* 118d1860 push 0x118d9264 */
  push32((uint32_t)(0x118d9264u));
  /* 118d1865 call edi */
  call_ind((uint32_t)(EDI), 0x118d1867u);
  /* 118d1867 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118d186c push 3 */
  push32((uint32_t)(0x3u));
  /* 118d186e push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1870 call esi */
  call_ind((uint32_t)(ESI), 0x118d1872u);
  /* 118d1872 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118d1877 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1879 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d187b call esi */
  call_ind((uint32_t)(ESI), 0x118d187du);
  /* 118d187d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118d1882 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d1884 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1886 call esi */
  call_ind((uint32_t)(ESI), 0x118d1888u);
  /* 118d1888 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118d188d push 1 */
  push32((uint32_t)(0x1u));
  /* 118d188f push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1891 call esi */
  call_ind((uint32_t)(ESI), 0x118d1893u);
  /* 118d1893 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118d1898 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d189a push 3 */
  push32((uint32_t)(0x3u));
  /* 118d189c call esi */
  call_ind((uint32_t)(ESI), 0x118d189eu);
  /* 118d189e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d18a1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118d18a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d18a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d18aa call esi */
  call_ind((uint32_t)(ESI), 0x118d18acu);
  /* 118d18ac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d18ae push 2 */
  push32((uint32_t)(0x2u));
  /* 118d18b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d18b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d18b4 push 0x118d92b0 */
  push32((uint32_t)(0x118d92b0u));
  /* 118d18b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d18bb call dword ptr [0x118d8150] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8150))), 0x118d18c1u);
  /* 118d18c1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d18c4:;
  /* 118d18c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d18c6 call ebp */
  call_ind((uint32_t)(EBP), 0x118d18c8u);
  /* 118d18c8 mov esi, dword ptr [0x118d8184] */
  ESI = (r32((uint32_t)(0x118d8184)));
  /* 118d18ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d18d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d18d3 je 0x118d18f0 */
  if (C.zf) goto L_118d18f0;
  /* 118d18d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d18d7 call esi */
  call_ind((uint32_t)(ESI), 0x118d18d9u);
  /* 118d18d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d18dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d18de je 0x118d18f0 */
  if (C.zf) goto L_118d18f0;
  /* 118d18e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d18e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 118d18e4 call ebx */
  call_ind((uint32_t)(EBX), 0x118d18e6u);
  /* 118d18e6 push 0x118d9254 */
  push32((uint32_t)(0x118d9254u));
  /* 118d18eb call edi */
  call_ind((uint32_t)(EDI), 0x118d18edu);
  /* 118d18ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d18f0:;
  /* 118d18f0 push 6 */
  push32((uint32_t)(0x6u));
  /* 118d18f2 call ebp */
  call_ind((uint32_t)(EBP), 0x118d18f4u);
  /* 118d18f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d18f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d18f9 je 0x118d1916 */
  if (C.zf) goto L_118d1916;
  /* 118d18fb push 2 */
  push32((uint32_t)(0x2u));
  /* 118d18fd call esi */
  call_ind((uint32_t)(ESI), 0x118d18ffu);
  /* 118d18ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1902 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1904 je 0x118d1916 */
  if (C.zf) goto L_118d1916;
  /* 118d1906 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1908 push 6 */
  push32((uint32_t)(0x6u));
  /* 118d190a call ebx */
  call_ind((uint32_t)(EBX), 0x118d190cu);
  /* 118d190c push 0x118d9244 */
  push32((uint32_t)(0x118d9244u));
  /* 118d1911 call edi */
  call_ind((uint32_t)(EDI), 0x118d1913u);
  /* 118d1913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d1916:;
  /* 118d1916 push 3 */
  push32((uint32_t)(0x3u));
  /* 118d1918 call esi */
  call_ind((uint32_t)(ESI), 0x118d191au);
  /* 118d191a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d191d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d191f je 0x118d1931 */
  if (C.zf) goto L_118d1931;
  /* 118d1921 push 0x118d9234 */
  push32((uint32_t)(0x118d9234u));
  /* 118d1926 call edi */
  call_ind((uint32_t)(EDI), 0x118d1928u);
  /* 118d1928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d192b call dword ptr [0x118d8168] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8168))), 0x118d1931u);
L_118d1931:;
  /* 118d1931 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1933 call esi */
  call_ind((uint32_t)(ESI), 0x118d1935u);
  /* 118d1935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1938 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d193a je 0x118d194c */
  if (C.zf) goto L_118d194c;
  /* 118d193c push 0x118d9224 */
  push32((uint32_t)(0x118d9224u));
  /* 118d1941 call edi */
  call_ind((uint32_t)(EDI), 0x118d1943u);
  /* 118d1943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1946 call dword ptr [0x118d8160] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8160))), 0x118d194cu);
L_118d194c:;
  /* 118d194c pop edi */
  EDI = (pop32());
  /* 118d194d pop esi */
  ESI = (pop32());
  /* 118d194e pop ebp */
  EBP = (pop32());
  /* 118d194f pop ebx */
  EBX = (pop32());
  /* 118d1950 ret  */
  ESPCHK(0x118d1340u, _esp0);
  ESP += 4; return;
}

/* FUN_10001960 @ 0x118d1960 (18 bytes, 6 insns) */
void f_118d1960(void) {
  FTRACE(0x118d1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1960 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1964 push eax */
  push32((uint32_t)(EAX));
  /* 118d1965 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1966 call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d196cu);
  /* 118d196c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d196f ret 4 */
  ESPCHK(0x118d1960u, _esp0);
  ESP += 8; return;
}

/* FUN_10001980 @ 0x118d1980 (21 bytes, 7 insns) */
void f_118d1980(void) {
  FTRACE(0x118d1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1980 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1984 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1987 push eax */
  push32((uint32_t)(EAX));
  /* 118d1988 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1989 call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d198fu);
  /* 118d198f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1992 ret 4 */
  ESPCHK(0x118d1980u, _esp0);
  ESP += 8; return;
}

/* FUN_100019a0 @ 0x118d19a0 (21 bytes, 7 insns) */
void f_118d19a0(void) {
  FTRACE(0x118d19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d19a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d19a4 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d19a7 push eax */
  push32((uint32_t)(EAX));
  /* 118d19a8 push ecx */
  push32((uint32_t)(ECX));
  /* 118d19a9 call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d19afu);
  /* 118d19af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d19b2 ret 4 */
  ESPCHK(0x118d19a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100019c0 @ 0x118d19c0 (45 bytes, 18 insns) */
void f_118d19c0(void) {
  FTRACE(0x118d19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d19c0 push esi */
  push32((uint32_t)(ESI));
  /* 118d19c1 mov esi, ecx */
  ESI = (ECX);
  /* 118d19c3 push edi */
  push32((uint32_t)(EDI));
  /* 118d19c4 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 118d19c8 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 118d19cb push edi */
  push32((uint32_t)(EDI));
  /* 118d19cc push eax */
  push32((uint32_t)(EAX));
  /* 118d19cd call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d19d3u);
  /* 118d19d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d19d6 add esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d19d9 push edi */
  push32((uint32_t)(EDI));
  /* 118d19da push 0x118d92c4 */
  push32((uint32_t)(0x118d92c4u));
  /* 118d19df push esi */
  push32((uint32_t)(ESI));
  /* 118d19e0 call 0x118d1dc0 */
  push32(0x118d19e5u); f_118d1dc0();
  /* 118d19e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d19e8 pop edi */
  EDI = (pop32());
  /* 118d19e9 pop esi */
  ESI = (pop32());
  /* 118d19ea ret 4 */
  ESPCHK(0x118d19c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100019f0 @ 0x118d19f0 (21 bytes, 7 insns) */
void f_118d19f0(void) {
  FTRACE(0x118d19f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d19f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d19f4 add ecx, 0x48 */
  { uint32_t _a=(ECX),_b=(0x48u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d19f7 push eax */
  push32((uint32_t)(EAX));
  /* 118d19f8 push ecx */
  push32((uint32_t)(ECX));
  /* 118d19f9 call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d19ffu);
  /* 118d19ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1a02 ret 4 */
  ESPCHK(0x118d19f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001a10 @ 0x118d1a10 (81 bytes, 33 insns) */
void f_118d1a10(void) {
  FTRACE(0x118d1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1a10 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1a11 push esi */
  push32((uint32_t)(ESI));
  /* 118d1a12 mov esi, ecx */
  ESI = (ECX);
  /* 118d1a14 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a15 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 118d1a18 push eax */
  push32((uint32_t)(EAX));
  /* 118d1a19 call dword ptr [0x118d8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8110))), 0x118d1a1fu);
  /* 118d1a1f mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 118d1a23 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a24 call dword ptr [0x118d8114] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8114))), 0x118d1a2au);
  /* 118d1a2a mov ebx, dword ptr [0x118d8130] */
  EBX = (r32((uint32_t)(0x118d8130)));
  /* 118d1a30 lea ecx, [esi + 0x48] */
  ECX = ((uint32_t)(ESI + 0x48));
  /* 118d1a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1a35 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1a36 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1a38u);
  /* 118d1a38 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a39 call dword ptr [0x118d810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d810c))), 0x118d1a3fu);
  /* 118d1a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1a41 push esi */
  push32((uint32_t)(ESI));
  /* 118d1a42 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1a44u);
  /* 118d1a44 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1a49 push esi */
  push32((uint32_t)(ESI));
  /* 118d1a4a call ebx */
  call_ind((uint32_t)(EBX), 0x118d1a4cu);
  /* 118d1a4c mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 118d1a50 push edx */
  push32((uint32_t)(EDX));
  /* 118d1a51 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a52 call dword ptr [0x118d811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d811c))), 0x118d1a58u);
  /* 118d1a58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1a5b pop edi */
  EDI = (pop32());
  /* 118d1a5c pop esi */
  ESI = (pop32());
  /* 118d1a5d pop ebx */
  EBX = (pop32());
  /* 118d1a5e ret 8 */
  ESPCHK(0x118d1a10u, _esp0);
  ESP += 12; return;
}

/* FUN_10001a70 @ 0x118d1a70 (80 bytes, 34 insns) */
void f_118d1a70(void) {
  FTRACE(0x118d1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1a70 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d1a73 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1a74 push esi */
  push32((uint32_t)(ESI));
  /* 118d1a75 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a76 lea edi, [ecx + 0x18] */
  EDI = ((uint32_t)(ECX + 0x18));
  /* 118d1a79 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a7a call dword ptr [0x118d80f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80f8))), 0x118d1a80u);
  /* 118d1a80 mov ebx, eax */
  EBX = (EAX);
  /* 118d1a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1a85 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d1a87 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d1a89 jle 0x118d1ab9 */
  if ((C.zf||C.sf!=C.of)) goto L_118d1ab9;
  /* 118d1a8b push ebp */
  push32((uint32_t)(EBP));
  /* 118d1a8c mov ebp, dword ptr [0x118d8104] */
  EBP = (r32((uint32_t)(0x118d8104)));
L_118d1a92:;
  /* 118d1a92 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 118d1a96 push eax */
  push32((uint32_t)(EAX));
  /* 118d1a97 push esi */
  push32((uint32_t)(ESI));
  /* 118d1a98 push edi */
  push32((uint32_t)(EDI));
  /* 118d1a99 call ebp */
  call_ind((uint32_t)(EBP), 0x118d1a9bu);
  /* 118d1a9b mov cx, word ptr [esp + 0x22] */
  CX = (r16((uint32_t)(ESP + 0x22)));
  /* 118d1aa0 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 118d1aa4 push edx */
  push32((uint32_t)(EDX));
  /* 118d1aa5 mov word ptr [esp + 0x24], cx */
  w16((uint32_t)(ESP + 0x24), (CX));
  /* 118d1aaa call dword ptr [0x118d8108] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8108))), 0x118d1ab0u);
  /* 118d1ab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1ab3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d1ab4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1ab6 jl 0x118d1a92 */
  if ((C.sf!=C.of)) goto L_118d1a92;
  /* 118d1ab8 pop ebp */
  EBP = (pop32());
L_118d1ab9:;
  /* 118d1ab9 pop edi */
  EDI = (pop32());
  /* 118d1aba pop esi */
  ESI = (pop32());
  /* 118d1abb pop ebx */
  EBX = (pop32());
  /* 118d1abc add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1abf ret  */
  ESPCHK(0x118d1a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ac0 @ 0x118d1ac0 (75 bytes, 30 insns) */
void f_118d1ac0(void) {
  FTRACE(0x118d1ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1ac0 push esi */
  push32((uint32_t)(ESI));
  /* 118d1ac1 mov esi, ecx */
  ESI = (ECX);
  /* 118d1ac3 push edi */
  push32((uint32_t)(EDI));
  /* 118d1ac4 mov edi, dword ptr [0x118d8100] */
  EDI = (r32((uint32_t)(0x118d8100)));
  /* 118d1aca lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118d1acd push eax */
  push32((uint32_t)(EAX));
  /* 118d1ace call edi */
  call_ind((uint32_t)(EDI), 0x118d1ad0u);
  /* 118d1ad0 lea ecx, [esi + 0x34] */
  ECX = ((uint32_t)(ESI + 0x34));
  /* 118d1ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1ad4 call edi */
  call_ind((uint32_t)(EDI), 0x118d1ad6u);
  /* 118d1ad6 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 118d1ad9 push edx */
  push32((uint32_t)(EDX));
  /* 118d1ada call edi */
  call_ind((uint32_t)(EDI), 0x118d1adcu);
  /* 118d1adc lea eax, [esi + 0x44] */
  EAX = ((uint32_t)(ESI + 0x44));
  /* 118d1adf push eax */
  push32((uint32_t)(EAX));
  /* 118d1ae0 call edi */
  call_ind((uint32_t)(EDI), 0x118d1ae2u);
  /* 118d1ae2 lea ecx, [esi + 0x4c] */
  ECX = ((uint32_t)(ESI + 0x4c));
  /* 118d1ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1ae6 call edi */
  call_ind((uint32_t)(EDI), 0x118d1ae8u);
  /* 118d1ae8 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 118d1aeb mov dword ptr [esi + 0x54], 1 */
  w32((uint32_t)(ESI + 0x54), (0x1u));
  /* 118d1af2 push edx */
  push32((uint32_t)(EDX));
  /* 118d1af3 mov dword ptr [esi + 0x58], 0xfa0 */
  w32((uint32_t)(ESI + 0x58), (0xfa0u));
  /* 118d1afa mov dword ptr [esi + 0x5c], 0 */
  w32((uint32_t)(ESI + 0x5c), (0x0u));
  /* 118d1b01 call edi */
  call_ind((uint32_t)(EDI), 0x118d1b03u);
  /* 118d1b03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b06 mov eax, esi */
  EAX = (ESI);
  /* 118d1b08 pop edi */
  EDI = (pop32());
  /* 118d1b09 pop esi */
  ESI = (pop32());
  /* 118d1b0a ret  */
  ESPCHK(0x118d1ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b10 @ 0x118d1b10 (10 bytes, 3 insns) */
void f_118d1b10(void) {
  FTRACE(0x118d1b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1b10 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1b14 mov dword ptr [ecx + 0x54], eax */
  w32((uint32_t)(ECX + 0x54), (EAX));
  /* 118d1b17 ret 4 */
  ESPCHK(0x118d1b10u, _esp0);
  ESP += 8; return;
}

/* FUN_10001b20 @ 0x118d1b20 (9 bytes, 3 insns) */
void f_118d1b20(void) {
  FTRACE(0x118d1b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1b20 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1b24 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118d1b26 ret 4 */
  ESPCHK(0x118d1b20u, _esp0);
  ESP += 8; return;
}

/* FUN_10001b30 @ 0x118d1b30 (47 bytes, 17 insns) */
void f_118d1b30(void) {
  FTRACE(0x118d1b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1b30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1b34 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d1b37 push esi */
  push32((uint32_t)(ESI));
  /* 118d1b38 mov esi, ecx */
  ESI = (ECX);
  /* 118d1b3a lea ecx, [esp + 4] */
  ECX = ((uint32_t)(ESP + 0x4));
  /* 118d1b3e push eax */
  push32((uint32_t)(EAX));
  /* 118d1b3f push ecx */
  push32((uint32_t)(ECX));
  /* 118d1b40 call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d1b46u);
  /* 118d1b46 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b49 lea edx, [esp + 0xc] */
  EDX = ((uint32_t)(ESP + 0xc));
  /* 118d1b4d push esi */
  push32((uint32_t)(ESI));
  /* 118d1b4e push edx */
  push32((uint32_t)(EDX));
  /* 118d1b4f call dword ptr [0x118d80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80fc))), 0x118d1b55u);
  /* 118d1b55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b58 pop esi */
  ESI = (pop32());
  /* 118d1b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b5c ret 4 */
  ESPCHK(0x118d1b30u, _esp0);
  ESP += 8; return;
}

/* FUN_10001b60 @ 0x118d1b60 (21 bytes, 7 insns) */
void f_118d1b60(void) {
  FTRACE(0x118d1b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1b60 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1b64 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b67 push eax */
  push32((uint32_t)(EAX));
  /* 118d1b68 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1b69 call dword ptr [0x118d8174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8174))), 0x118d1b6fu);
  /* 118d1b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b72 ret 4 */
  ESPCHK(0x118d1b60u, _esp0);
  ESP += 8; return;
}

/* FUN_10001b80 @ 0x118d1b80 (21 bytes, 7 insns) */
void f_118d1b80(void) {
  FTRACE(0x118d1b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1b80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1b84 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b87 push eax */
  push32((uint32_t)(EAX));
  /* 118d1b88 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1b89 call dword ptr [0x118d816c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d816c))), 0x118d1b8fu);
  /* 118d1b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1b92 ret 4 */
  ESPCHK(0x118d1b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ba0 @ 0x118d1ba0 (21 bytes, 7 insns) */
void f_118d1ba0(void) {
  FTRACE(0x118d1ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1ba0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1ba4 add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1ba7 push eax */
  push32((uint32_t)(EAX));
  /* 118d1ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1ba9 call dword ptr [0x118d817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d817c))), 0x118d1bafu);
  /* 118d1baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1bb2 ret 4 */
  ESPCHK(0x118d1ba0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001bc0 @ 0x118d1bc0 (21 bytes, 7 insns) */
void f_118d1bc0(void) {
  FTRACE(0x118d1bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1bc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d1bc4 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1bc7 push eax */
  push32((uint32_t)(EAX));
  /* 118d1bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1bc9 call dword ptr [0x118d817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d817c))), 0x118d1bcfu);
  /* 118d1bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1bd2 ret 4 */
  ESPCHK(0x118d1bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001be0 @ 0x118d1be0 (212 bytes, 85 insns) */
void f_118d1be0(void) {
  FTRACE(0x118d1be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1be0 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1be1 mov ebx, dword ptr [0x118d80e0] */
  EBX = (r32((uint32_t)(0x118d80e0)));
  /* 118d1be7 push esi */
  push32((uint32_t)(ESI));
  /* 118d1be8 mov esi, ecx */
  ESI = (ECX);
  /* 118d1bea push edi */
  push32((uint32_t)(EDI));
  /* 118d1beb lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118d1bee push eax */
  push32((uint32_t)(EAX));
  /* 118d1bef call ebx */
  call_ind((uint32_t)(EBX), 0x118d1bf1u);
  /* 118d1bf1 mov edi, dword ptr [0x118d8148] */
  EDI = (r32((uint32_t)(0x118d8148)));
  /* 118d1bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1bfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1bfc jne 0x118d1c1c */
  if (!C.zf) goto L_118d1c1c;
  /* 118d1bfe lea eax, [esi + 0x3c] */
  EAX = ((uint32_t)(ESI + 0x3c));
  /* 118d1c01 push eax */
  push32((uint32_t)(EAX));
  /* 118d1c02 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1c04u);
  /* 118d1c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1c09 jne 0x118d1c1c */
  if (!C.zf) goto L_118d1c1c;
  /* 118d1c0b lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 118d1c0e push ecx */
  push32((uint32_t)(ECX));
  /* 118d1c0f call dword ptr [0x118d80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80f0))), 0x118d1c15u);
  /* 118d1c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1c1a jne 0x118d1c27 */
  if (!C.zf) goto L_118d1c27;
L_118d1c1c:;
  /* 118d1c1c call edi */
  call_ind((uint32_t)(EDI), 0x118d1c1eu);
  /* 118d1c1e cmp eax, dword ptr [esi + 0x5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1c21 jle 0x118d1cae */
  if ((C.zf||C.sf!=C.of)) goto L_118d1cae;
L_118d1c27:;
  /* 118d1c27 push ebp */
  push32((uint32_t)(EBP));
  /* 118d1c28 call edi */
  call_ind((uint32_t)(EDI), 0x118d1c2au);
  /* 118d1c2a mov ebx, dword ptr [esi + 0x58] */
  EBX = (r32((uint32_t)(ESI + 0x58)));
  /* 118d1c2d mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118d1c2f add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c31 push edx */
  push32((uint32_t)(EDX));
  /* 118d1c32 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 118d1c35 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118d1c38 push eax */
  push32((uint32_t)(EAX));
  /* 118d1c39 call dword ptr [0x118d80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80f4))), 0x118d1c3fu);
  /* 118d1c3f mov edi, eax */
  EDI = (EAX);
  /* 118d1c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d1c45 mov eax, 0x55555556 */
  EAX = (0x55555556u);
  /* 118d1c4a imul edi, dword ptr [esi + 0x54] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI + 0x54)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d1c4e imul edi */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EDI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 118d1c50 mov ecx, edx */
  ECX = (EDX);
  /* 118d1c52 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 118d1c55 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c57 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d1c59 jle 0x118d1c77 */
  if ((C.zf||C.sf!=C.of)) goto L_118d1c77;
  /* 118d1c5b lea ebp, [esi + 0x1c] */
  EBP = ((uint32_t)(ESI + 0x1c));
  /* 118d1c5e mov ebx, edx */
  EBX = (EDX);
L_118d1c60:;
  /* 118d1c60 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118d1c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1c65 push eax */
  push32((uint32_t)(EAX));
  /* 118d1c66 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118d1c69 push ebp */
  push32((uint32_t)(EBP));
  /* 118d1c6a push eax */
  push32((uint32_t)(EAX));
  /* 118d1c6b call dword ptr [0x118d80ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80ec))), 0x118d1c71u);
  /* 118d1c71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c74 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d1c75 jne 0x118d1c60 */
  if (!C.zf) goto L_118d1c60;
L_118d1c77:;
  /* 118d1c77 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d1c79 jle 0x118d1c95 */
  if ((C.zf||C.sf!=C.of)) goto L_118d1c95;
  /* 118d1c7b lea ebx, [esi + 0x3c] */
  EBX = ((uint32_t)(ESI + 0x3c));
  /* 118d1c7e lea ebp, [esi + 0x24] */
  EBP = ((uint32_t)(ESI + 0x24));
L_118d1c81:;
  /* 118d1c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1c83 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1c84 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118d1c87 push ebp */
  push32((uint32_t)(EBP));
  /* 118d1c88 push eax */
  push32((uint32_t)(EAX));
  /* 118d1c89 call dword ptr [0x118d80ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80ec))), 0x118d1c8fu);
  /* 118d1c8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1c92 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118d1c93 jne 0x118d1c81 */
  if (!C.zf) goto L_118d1c81;
L_118d1c95:;
  /* 118d1c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1c97 call dword ptr [0x118d8118] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8118))), 0x118d1c9du);
  /* 118d1c9d imul eax, dword ptr [esp + 0x18] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x18)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d1ca2 mov ecx, dword ptr [esi + 0x54] */
  ECX = (r32((uint32_t)(ESI + 0x54)));
  /* 118d1ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1ca8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1caa mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 118d1cad pop ebp */
  EBP = (pop32());
L_118d1cae:;
  /* 118d1cae pop edi */
  EDI = (pop32());
  /* 118d1caf pop esi */
  ESI = (pop32());
  /* 118d1cb0 pop ebx */
  EBX = (pop32());
  /* 118d1cb1 ret 4 */
  ESPCHK(0x118d1be0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001cc0 @ 0x118d1cc0 (116 bytes, 48 insns) */
void f_118d1cc0(void) {
  FTRACE(0x118d1cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1cc0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d1cc3 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 118d1cc7 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1cc8 push ebp */
  push32((uint32_t)(EBP));
  /* 118d1cc9 push esi */
  push32((uint32_t)(ESI));
  /* 118d1cca push edi */
  push32((uint32_t)(EDI));
  /* 118d1ccb mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 118d1ccf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 118d1cd4 push edi */
  push32((uint32_t)(EDI));
  /* 118d1cd5 mov esi, ecx */
  ESI = (ECX);
  /* 118d1cd7 push eax */
  push32((uint32_t)(EAX));
  /* 118d1cd8 call dword ptr [0x118d80dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80dc))), 0x118d1cdeu);
  /* 118d1cde mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118d1ce0 mov ebx, dword ptr [0x118d8114] */
  EBX = (r32((uint32_t)(0x118d8114)));
  /* 118d1ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1ce7 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1ce9u);
  /* 118d1ce9 mov ebp, dword ptr [0x118d8130] */
  EBP = (r32((uint32_t)(0x118d8130)));
  /* 118d1cef lea edx, [esi + 0x4c] */
  EDX = ((uint32_t)(ESI + 0x4c));
  /* 118d1cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1cf4 push edx */
  push32((uint32_t)(EDX));
  /* 118d1cf5 call ebp */
  call_ind((uint32_t)(EBP), 0x118d1cf7u);
  /* 118d1cf7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1cfc call 0x118d1e12 */
  push32(0x118d1d01u); f_118d1e12();
  /* 118d1d01 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118d1d03 push eax */
  push32((uint32_t)(EAX));
  /* 118d1d04 lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 118d1d08 push eax */
  push32((uint32_t)(EAX));
  /* 118d1d09 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1d0a call dword ptr [0x118d80e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80e4))), 0x118d1d10u);
  /* 118d1d10 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118d1d12 push edx */
  push32((uint32_t)(EDX));
  /* 118d1d13 call ebx */
  call_ind((uint32_t)(EBX), 0x118d1d15u);
  /* 118d1d15 lea eax, [esi + 0x44] */
  EAX = ((uint32_t)(ESI + 0x44));
  /* 118d1d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1d1a push eax */
  push32((uint32_t)(EAX));
  /* 118d1d1b call ebp */
  call_ind((uint32_t)(EBP), 0x118d1d1du);
  /* 118d1d1d mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118d1d1f push edi */
  push32((uint32_t)(EDI));
  /* 118d1d20 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1d21 call dword ptr [0x118d80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80e8))), 0x118d1d27u);
  /* 118d1d27 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1d2a pop edi */
  EDI = (pop32());
  /* 118d1d2b pop esi */
  ESI = (pop32());
  /* 118d1d2c pop ebp */
  EBP = (pop32());
  /* 118d1d2d pop ebx */
  EBX = (pop32());
  /* 118d1d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1d31 ret 4 */
  ESPCHK(0x118d1cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d40 @ 0x118d1d40 (20 bytes, 6 insns) */
void f_118d1d40(void) {
  FTRACE(0x118d1d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1d40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d1d44 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d1d45 jne 0x118d1d4c */
  if (!C.zf) goto L_118d1d4c;
  /* 118d1d47 call 0x118d10b0 */
  push32(0x118d1d4cu); f_118d10b0();
L_118d1d4c:;
  /* 118d1d4c mov eax, 1 */
  EAX = (0x1u);
  /* 118d1d51 ret 0xc */
  ESPCHK(0x118d1d40u, _esp0);
  ESP += 16; return;
}

/* FUN_10001d60 @ 0x118d1d60 (59 bytes, 28 insns) */
void f_118d1d60(void) {
  FTRACE(0x118d1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1d60 push esi */
  push32((uint32_t)(ESI));
  /* 118d1d61 mov esi, ecx */
  ESI = (ECX);
  /* 118d1d63 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118d1d66 push eax */
  push32((uint32_t)(EAX));
  /* 118d1d67 call dword ptr [0x118d80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80f0))), 0x118d1d6du);
  /* 118d1d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1d70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d1d72 je 0x118d1d97 */
  if (C.zf) goto L_118d1d97;
  /* 118d1d74 lea ecx, [esi + 0x44] */
  ECX = ((uint32_t)(ESI + 0x44));
  /* 118d1d77 push edi */
  push32((uint32_t)(EDI));
  /* 118d1d78 mov edi, dword ptr [0x118d80fc] */
  EDI = (r32((uint32_t)(0x118d80fc)));
  /* 118d1d7e lea edx, [esi + 0x34] */
  EDX = ((uint32_t)(ESI + 0x34));
  /* 118d1d81 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1d82 push edx */
  push32((uint32_t)(EDX));
  /* 118d1d83 call edi */
  call_ind((uint32_t)(EDI), 0x118d1d85u);
  /* 118d1d85 lea eax, [esi + 0x4c] */
  EAX = ((uint32_t)(ESI + 0x4c));
  /* 118d1d88 add esi, 0x3c */
  { uint32_t _a=(ESI),_b=(0x3cu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1d8b push eax */
  push32((uint32_t)(EAX));
  /* 118d1d8c push esi */
  push32((uint32_t)(ESI));
  /* 118d1d8d call edi */
  call_ind((uint32_t)(EDI), 0x118d1d8fu);
  /* 118d1d8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1d92 mov al, 1 */
  AL = (0x1u);
  /* 118d1d94 pop edi */
  EDI = (pop32());
  /* 118d1d95 pop esi */
  ESI = (pop32());
  /* 118d1d96 ret  */
  ESPCHK(0x118d1d60u, _esp0);
  ESP += 4; return;
L_118d1d97:;
  /* 118d1d97 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118d1d99 pop esi */
  ESI = (pop32());
  /* 118d1d9a ret  */
  ESPCHK(0x118d1d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001da0 @ 0x118d1da0 (19 bytes, 7 insns) */
void f_118d1da0(void) {
  FTRACE(0x118d1da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1da0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1da3 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1da4 call dword ptr [0x118d80e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80e0))), 0x118d1daau);
  /* 118d1daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1daf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118d1db2 ret  */
  ESPCHK(0x118d1da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dc0 @ 0x118d1dc0 (82 bytes, 32 insns) */
void f_118d1dc0(void) {
  FTRACE(0x118d1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 118d1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 118d1dc3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d1dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d1dc9 push esi */
  push32((uint32_t)(ESI));
  /* 118d1dca mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118d1dcd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118d1dd0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d1dd3 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 118d1dda push eax */
  push32((uint32_t)(EAX));
  /* 118d1ddb lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118d1dde push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d1de1 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 118d1de8 push eax */
  push32((uint32_t)(EAX));
  /* 118d1de9 call 0x118d20f5 */
  push32(0x118d1deeu); f_118d20f5();
  /* 118d1dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1df1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 118d1df4 mov esi, eax */
  ESI = (EAX);
  /* 118d1df6 js 0x118d1e00 */
  if (C.sf) goto L_118d1e00;
  /* 118d1df8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118d1dfb and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 118d1dfe jmp 0x118d1e0d */
  goto L_118d1e0d;
L_118d1e00:;
  /* 118d1e00 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118d1e03 push eax */
  push32((uint32_t)(EAX));
  /* 118d1e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d1e06 call 0x118d1fdd */
  push32(0x118d1e0bu); f_118d1fdd();
  /* 118d1e0b pop ecx */
  ECX = (pop32());
  /* 118d1e0c pop ecx */
  ECX = (pop32());
L_118d1e0d:;
  /* 118d1e0d mov eax, esi */
  EAX = (ESI);
  /* 118d1e0f pop esi */
  ESI = (pop32());
  /* 118d1e10 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d1e11 ret  */
  ESPCHK(0x118d1dc0u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x118d1e12 (34 bytes, 9 insns) */
void f_118d1e12(void) {
  FTRACE(0x118d1e12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1e12 call 0x118d2984 */
  push32(0x118d1e17u); f_118d2984();
  /* 118d1e17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118d1e1a imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d1e20 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1e26 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 118d1e29 mov eax, ecx */
  EAX = (ECX);
  /* 118d1e2b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118d1e2e and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d1e33 ret  */
  ESPCHK(0x118d1e12u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e34 @ 0x118d1e34 (217 bytes, 57 insns) */
void f_118d1e34(void) {
  FTRACE(0x118d1e34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1e34 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d1e38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1e3b jne 0x118d1ec9 */
  if (!C.zf) goto L_118d1ec9;
  /* 118d1e41 call dword ptr [0x118d8084] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8084))), 0x118d1e47u);
  /* 118d1e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1e49 mov dword ptr [0x118dc150], eax */
  w32((uint32_t)(0x118dc150), (EAX));
  /* 118d1e4e call 0x118d3366 */
  push32(0x118d1e53u); f_118d3366();
  /* 118d1e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1e55 pop ecx */
  ECX = (pop32());
  /* 118d1e56 je 0x118d1e94 */
  if (C.zf) goto L_118d1e94;
  /* 118d1e58 mov eax, dword ptr [0x118dc150] */
  EAX = (r32((uint32_t)(0x118dc150)));
  /* 118d1e5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d1e5f mov cl, byte ptr [0x118dc151] */
  CL = (r8((uint32_t)(0x118dc151)));
  /* 118d1e65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d1e6a shr dword ptr [0x118dc150], 0x10 */
  w32((uint32_t)(0x118dc150), (sh_shr((uint32_t)(r32((uint32_t)(0x118dc150))), (0x10u)&0x1f, 32)));
  /* 118d1e71 mov dword ptr [0x118dc158], eax */
  w32((uint32_t)(0x118dc158), (EAX));
  /* 118d1e76 mov dword ptr [0x118dc15c], ecx */
  w32((uint32_t)(0x118dc15c), (ECX));
  /* 118d1e7c shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d1e7f add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d1e81 mov dword ptr [0x118dc154], eax */
  w32((uint32_t)(0x118dc154), (EAX));
  /* 118d1e86 call 0x118d28ff */
  push32(0x118d1e8bu); f_118d28ff();
  /* 118d1e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1e8d jne 0x118d1e98 */
  if (!C.zf) goto L_118d1e98;
  /* 118d1e8f call 0x118d33c3 */
  push32(0x118d1e94u); f_118d33c3();
L_118d1e94:;
  /* 118d1e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d1e96 jmp 0x118d1f0a */
  goto L_118d1f0a;
L_118d1e98:;
  /* 118d1e98 call dword ptr [0x118d8080] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8080))), 0x118d1e9eu);
  /* 118d1e9e mov dword ptr [0x118dd838], eax */
  w32((uint32_t)(0x118dd838), (EAX));
  /* 118d1ea3 call 0x118d30bf */
  push32(0x118d1ea8u); f_118d30bf();
  /* 118d1ea8 mov dword ptr [0x118dc13c], eax */
  w32((uint32_t)(0x118dc13c), (EAX));
  /* 118d1ead call 0x118d2ba9 */
  push32(0x118d1eb2u); f_118d2ba9();
  /* 118d1eb2 call 0x118d2e72 */
  push32(0x118d1eb7u); f_118d2e72();
  /* 118d1eb7 call 0x118d2db9 */
  push32(0x118d1ebcu); f_118d2db9();
  /* 118d1ebc call 0x118d2a8b */
  push32(0x118d1ec1u); f_118d2a8b();
  /* 118d1ec1 inc dword ptr [0x118dc138] */
  { uint32_t _r=(r32((uint32_t)(0x118dc138)))+1; w32((uint32_t)(0x118dc138), (_r)); fl_inc(_r,32); }
  /* 118d1ec7 jmp 0x118d1f07 */
  goto L_118d1f07;
L_118d1ec9:;
  /* 118d1ec9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d1ecb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1ecd jne 0x118d1efb */
  if (!C.zf) goto L_118d1efb;
  /* 118d1ecf cmp dword ptr [0x118dc138], ecx */
  { uint32_t _a=(r32((uint32_t)(0x118dc138))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1ed5 jle 0x118d1e94 */
  if ((C.zf||C.sf!=C.of)) goto L_118d1e94;
  /* 118d1ed7 dec dword ptr [0x118dc138] */
  { uint32_t _r=(r32((uint32_t)(0x118dc138)))-1; w32((uint32_t)(0x118dc138), (_r)); fl_dec(_r,32); }
  /* 118d1edd cmp dword ptr [0x118dc188], ecx */
  { uint32_t _a=(r32((uint32_t)(0x118dc188))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1ee3 jne 0x118d1eea */
  if (!C.zf) goto L_118d1eea;
  /* 118d1ee5 call 0x118d2ac9 */
  push32(0x118d1eeau); f_118d2ac9();
L_118d1eea:;
  /* 118d1eea call 0x118d2d65 */
  push32(0x118d1eefu); f_118d2d65();
  /* 118d1eef call 0x118d2953 */
  push32(0x118d1ef4u); f_118d2953();
  /* 118d1ef4 call 0x118d33c3 */
  push32(0x118d1ef9u); f_118d33c3();
  /* 118d1ef9 jmp 0x118d1f07 */
  goto L_118d1f07;
L_118d1efb:;
  /* 118d1efb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1efe jne 0x118d1f07 */
  if (!C.zf) goto L_118d1f07;
  /* 118d1f00 push ecx */
  push32((uint32_t)(ECX));
  /* 118d1f01 call 0x118d29eb */
  push32(0x118d1f06u); f_118d29eb();
  /* 118d1f06 pop ecx */
  ECX = (pop32());
L_118d1f07:;
  /* 118d1f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d1f09 pop eax */
  EAX = (pop32());
L_118d1f0a:;
  /* 118d1f0a ret 0xc */
  ESPCHK(0x118d1e34u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x118d1f0d (157 bytes, 73 insns) */
void f_118d1f0d(void) {
  FTRACE(0x118d1f0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1f0d push ebp */
  push32((uint32_t)(EBP));
  /* 118d1f0e mov ebp, esp */
  EBP = (ESP);
  /* 118d1f10 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f11 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d1f14 push esi */
  push32((uint32_t)(ESI));
  /* 118d1f15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d1f18 push edi */
  push32((uint32_t)(EDI));
  /* 118d1f19 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118d1f1c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d1f1e jne 0x118d1f29 */
  if (!C.zf) goto L_118d1f29;
  /* 118d1f20 cmp dword ptr [0x118dc138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1f27 jmp 0x118d1f4f */
  goto L_118d1f4f;
L_118d1f29:;
  /* 118d1f29 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1f2c je 0x118d1f33 */
  if (C.zf) goto L_118d1f33;
  /* 118d1f2e cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1f31 jne 0x118d1f55 */
  if (!C.zf) goto L_118d1f55;
L_118d1f33:;
  /* 118d1f33 mov eax, dword ptr [0x118dd83c] */
  EAX = (r32((uint32_t)(0x118dd83c)));
  /* 118d1f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1f3a je 0x118d1f45 */
  if (C.zf) goto L_118d1f45;
  /* 118d1f3c push edi */
  push32((uint32_t)(EDI));
  /* 118d1f3d push esi */
  push32((uint32_t)(ESI));
  /* 118d1f3e push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f3f call eax */
  call_ind((uint32_t)(EAX), 0x118d1f41u);
  /* 118d1f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1f43 je 0x118d1f51 */
  if (C.zf) goto L_118d1f51;
L_118d1f45:;
  /* 118d1f45 push edi */
  push32((uint32_t)(EDI));
  /* 118d1f46 push esi */
  push32((uint32_t)(ESI));
  /* 118d1f47 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f48 call 0x118d1e34 */
  push32(0x118d1f4du); f_118d1e34();
  /* 118d1f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_118d1f4f:;
  /* 118d1f4f jne 0x118d1f55 */
  if (!C.zf) goto L_118d1f55;
L_118d1f51:;
  /* 118d1f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d1f53 jmp 0x118d1fa3 */
  goto L_118d1fa3;
L_118d1f55:;
  /* 118d1f55 push edi */
  push32((uint32_t)(EDI));
  /* 118d1f56 push esi */
  push32((uint32_t)(ESI));
  /* 118d1f57 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f58 call 0x118d1d40 */
  push32(0x118d1f5du); f_118d1d40();
  /* 118d1f5d cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1f60 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118d1f63 jne 0x118d1f71 */
  if (!C.zf) goto L_118d1f71;
  /* 118d1f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1f67 jne 0x118d1fa0 */
  if (!C.zf) goto L_118d1fa0;
  /* 118d1f69 push edi */
  push32((uint32_t)(EDI));
  /* 118d1f6a push eax */
  push32((uint32_t)(EAX));
  /* 118d1f6b push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f6c call 0x118d1e34 */
  push32(0x118d1f71u); f_118d1e34();
L_118d1f71:;
  /* 118d1f71 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d1f73 je 0x118d1f7a */
  if (C.zf) goto L_118d1f7a;
  /* 118d1f75 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1f78 jne 0x118d1fa0 */
  if (!C.zf) goto L_118d1fa0;
L_118d1f7a:;
  /* 118d1f7a push edi */
  push32((uint32_t)(EDI));
  /* 118d1f7b push esi */
  push32((uint32_t)(ESI));
  /* 118d1f7c push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f7d call 0x118d1e34 */
  push32(0x118d1f82u); f_118d1e34();
  /* 118d1f82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1f84 jne 0x118d1f89 */
  if (!C.zf) goto L_118d1f89;
  /* 118d1f86 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_118d1f89:;
  /* 118d1f89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1f8d je 0x118d1fa0 */
  if (C.zf) goto L_118d1fa0;
  /* 118d1f8f mov eax, dword ptr [0x118dd83c] */
  EAX = (r32((uint32_t)(0x118dd83c)));
  /* 118d1f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1f96 je 0x118d1fa0 */
  if (C.zf) goto L_118d1fa0;
  /* 118d1f98 push edi */
  push32((uint32_t)(EDI));
  /* 118d1f99 push esi */
  push32((uint32_t)(ESI));
  /* 118d1f9a push ebx */
  push32((uint32_t)(EBX));
  /* 118d1f9b call eax */
  call_ind((uint32_t)(EAX), 0x118d1f9du);
  /* 118d1f9d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_118d1fa0:;
  /* 118d1fa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_118d1fa3:;
  /* 118d1fa3 pop edi */
  EDI = (pop32());
  /* 118d1fa4 pop esi */
  ESI = (pop32());
  /* 118d1fa5 pop ebx */
  EBX = (pop32());
  /* 118d1fa6 pop ebp */
  EBP = (pop32());
  /* 118d1fa7 ret 0xc */
  ESPCHK(0x118d1f0du, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x118d1faa (48 bytes, 15 insns) */
void f_118d1faa(void) {
  FTRACE(0x118d1faau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1faa mov eax, dword ptr [0x118dc144] */
  EAX = (r32((uint32_t)(0x118dc144)));
  /* 118d1faf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1fb2 je 0x118d1fc1 */
  if (C.zf) goto L_118d1fc1;
  /* 118d1fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d1fb6 jne 0x118d1fc6 */
  if (!C.zf) goto L_118d1fc6;
  /* 118d1fb8 cmp dword ptr [0x118dc148], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dc148))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d1fbf jne 0x118d1fc6 */
  if (!C.zf) goto L_118d1fc6;
L_118d1fc1:;
  /* 118d1fc1 call 0x118d346b */
  push32(0x118d1fc6u); f_118d346b();
L_118d1fc6:;
  /* 118d1fc6 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118d1fca call 0x118d34a4 */
  push32(0x118d1fcfu); f_118d34a4();
  /* 118d1fcf push 0xff */
  push32((uint32_t)(0xffu));
  /* 118d1fd4 call dword ptr [0x118d92c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d92c8))), 0x118d1fdau);
  /* 118d1fda pop ecx */
  ECX = (pop32());
  /* 118d1fdb pop ecx */
  ECX = (pop32());
  /* 118d1fdc ret  */
  ESPCHK(0x118d1faau, _esp0);
  ESP += 4; return;
}

/* FUN_10001fdd @ 0x118d1fdd (280 bytes, 106 insns) */
void f_118d1fdd(void) {
  FTRACE(0x118d1fddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d1fdd push ebp */
  push32((uint32_t)(EBP));
  /* 118d1fde mov ebp, esp */
  EBP = (ESP);
  /* 118d1fe0 push ebx */
  push32((uint32_t)(EBX));
  /* 118d1fe1 push esi */
  push32((uint32_t)(ESI));
  /* 118d1fe2 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d1fe5 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118d1fe8 mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 118d1feb test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 118d1fed je 0x118d20e9 */
  if (C.zf) goto L_118d20e9;
  /* 118d1ff3 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 118d1ff5 jne 0x118d20e9 */
  if (!C.zf) goto L_118d20e9;
  /* 118d1ffb test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118d1ffd je 0x118d2015 */
  if (C.zf) goto L_118d2015;
  /* 118d1fff and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d2003 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 118d2005 je 0x118d20e9 */
  if (C.zf) goto L_118d20e9;
  /* 118d200b mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 118d200e and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 118d2010 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118d2012 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_118d2015:;
  /* 118d2015 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118d2018 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d201c and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d2020 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 118d2022 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 118d2024 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 118d2028 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118d202b jne 0x118d204f */
  if (!C.zf) goto L_118d204f;
  /* 118d202d cmp esi, 0x118d93b0 */
  { uint32_t _a=(ESI),_b=(0x118d93b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2033 je 0x118d203d */
  if (C.zf) goto L_118d203d;
  /* 118d2035 cmp esi, 0x118d93d0 */
  { uint32_t _a=(ESI),_b=(0x118d93d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d203b jne 0x118d2048 */
  if (!C.zf) goto L_118d2048;
L_118d203d:;
  /* 118d203d push ebx */
  push32((uint32_t)(EBX));
  /* 118d203e call 0x118d3903 */
  push32(0x118d2043u); f_118d3903();
  /* 118d2043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2045 pop ecx */
  ECX = (pop32());
  /* 118d2046 jne 0x118d204f */
  if (!C.zf) goto L_118d204f;
L_118d2048:;
  /* 118d2048 push esi */
  push32((uint32_t)(ESI));
  /* 118d2049 call 0x118d38bf */
  push32(0x118d204eu); f_118d38bf();
  /* 118d204e pop ecx */
  ECX = (pop32());
L_118d204f:;
  /* 118d204f test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 118d2055 push edi */
  push32((uint32_t)(EDI));
  /* 118d2056 je 0x118d20bf */
  if (C.zf) goto L_118d20bf;
  /* 118d2058 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118d205b mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 118d205d sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d205f lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 118d2062 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118d2064 mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 118d2067 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d2068 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d206a mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 118d206d jle 0x118d207f */
  if ((C.zf||C.sf!=C.of)) goto L_118d207f;
  /* 118d206f push edi */
  push32((uint32_t)(EDI));
  /* 118d2070 push eax */
  push32((uint32_t)(EAX));
  /* 118d2071 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2072 call 0x118d36cf */
  push32(0x118d2077u); f_118d36cf();
  /* 118d2077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d207a mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118d207d jmp 0x118d20b5 */
  goto L_118d20b5;
L_118d207f:;
  /* 118d207f cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2082 je 0x118d209d */
  if (C.zf) goto L_118d209d;
  /* 118d2084 mov ecx, ebx */
  ECX = (EBX);
  /* 118d2086 mov eax, ebx */
  EAX = (EBX);
  /* 118d2088 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d208b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d208e mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d2095 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d2098 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 118d209b jmp 0x118d20a2 */
  goto L_118d20a2;
L_118d209d:;
  /* 118d209d mov eax, 0x118d92d8 */
  EAX = (0x118d92d8u);
L_118d20a2:;
  /* 118d20a2 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 118d20a6 je 0x118d20b5 */
  if (C.zf) goto L_118d20b5;
  /* 118d20a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d20aa push 0 */
  push32((uint32_t)(0x0u));
  /* 118d20ac push ebx */
  push32((uint32_t)(EBX));
  /* 118d20ad call 0x118d35f7 */
  push32(0x118d20b2u); f_118d35f7();
  /* 118d20b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d20b5:;
  /* 118d20b5 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118d20b8 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 118d20bb mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118d20bd jmp 0x118d20d3 */
  goto L_118d20d3;
L_118d20bf:;
  /* 118d20bf push 1 */
  push32((uint32_t)(0x1u));
  /* 118d20c1 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118d20c4 pop edi */
  EDI = (pop32());
  /* 118d20c5 push edi */
  push32((uint32_t)(EDI));
  /* 118d20c6 push eax */
  push32((uint32_t)(EAX));
  /* 118d20c7 push ebx */
  push32((uint32_t)(EBX));
  /* 118d20c8 call 0x118d36cf */
  push32(0x118d20cdu); f_118d36cf();
  /* 118d20cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d20d0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_118d20d3:;
  /* 118d20d3 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d20d6 pop edi */
  EDI = (pop32());
  /* 118d20d7 je 0x118d20df */
  if (C.zf) goto L_118d20df;
  /* 118d20d9 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d20dd jmp 0x118d20ee */
  goto L_118d20ee;
L_118d20df:;
  /* 118d20df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d20e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d20e7 jmp 0x118d20f1 */
  goto L_118d20f1;
L_118d20e9:;
  /* 118d20e9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 118d20eb mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_118d20ee:;
  /* 118d20ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118d20f1:;
  /* 118d20f1 pop esi */
  ESI = (pop32());
  /* 118d20f2 pop ebx */
  EBX = (pop32());
  /* 118d20f3 pop ebp */
  EBP = (pop32());
  /* 118d20f4 ret  */
  ESPCHK(0x118d1fddu, _esp0);
  ESP += 4; return;
}

/* FUN_100020f5 @ 0x118d20f5 (1825 bytes, 595 insns) [1 switch table(s)] */
void f_118d20f5(void) {
  FTRACE(0x118d20f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d20f5 push ebp */
  push32((uint32_t)(EBP));
  /* 118d20f6 mov ebp, esp */
  EBP = (ESP);
  /* 118d20f8 sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d20fe push ebx */
  push32((uint32_t)(EBX));
  /* 118d20ff push esi */
  push32((uint32_t)(ESI));
  /* 118d2100 push edi */
  push32((uint32_t)(EDI));
  /* 118d2101 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d2104 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d2106 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118d2108 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d2109 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 118d210b mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 118d210e mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 118d2111 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 118d2114 je 0x118d280e */
  if (C.zf) goto L_118d280e;
  /* 118d211a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d211d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d211f jmp 0x118d2129 */
  goto L_118d2129;
L_118d2121:;
  /* 118d2121 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d2124 mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 118d2127 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_118d2129:;
  /* 118d2129 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d212c jl 0x118d280e */
  if ((C.sf!=C.of)) goto L_118d280e;
  /* 118d2132 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2135 jl 0x118d214a */
  if ((C.sf!=C.of)) goto L_118d214a;
  /* 118d2137 cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d213a jg 0x118d214a */
  if ((!C.zf&&C.sf==C.of)) goto L_118d214a;
  /* 118d213c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d213f mov al, byte ptr [eax + 0x118d8178] */
  AL = (r8((uint32_t)(EAX + 0x118d8178)));
  /* 118d2145 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 118d2148 jmp 0x118d214c */
  goto L_118d214c;
L_118d214a:;
  /* 118d214a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d214c:;
  /* 118d214c movsx eax, byte ptr [esi + eax*8 + 0x118d8198] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x118d8198))));
  /* 118d2154 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118d2157 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d215a mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118d215d ja 0x118d27fd */
  if ((!C.cf&&!C.zf)) goto L_118d27fd;
  /* 118d2163 jmp dword ptr [eax*4 + 0x118d2816] */
  switch (EAX) {
    case 0: goto L_118d2294;
    case 1: goto L_118d216a;
    case 2: goto L_118d2185;
    case 3: goto L_118d21d1;
    case 4: goto L_118d2208;
    case 5: goto L_118d2210;
    case 6: goto L_118d2245;
    case 7: goto L_118d22d8;
    default: x86_unimpl("switch@0x118d2163 out of table"); return;
  }
L_118d216a:;
  /* 118d216a or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 118d216e mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 118d2171 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 118d2174 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 118d2177 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 118d217a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118d217d mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 118d2180 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2185:;
  /* 118d2185 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d2188 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d218b je 0x118d21c8 */
  if (C.zf) goto L_118d21c8;
  /* 118d218d sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2190 je 0x118d21bf */
  if (C.zf) goto L_118d21bf;
  /* 118d2192 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2195 je 0x118d21b6 */
  if (C.zf) goto L_118d21b6;
  /* 118d2197 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2198 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2199 je 0x118d21ad */
  if (C.zf) goto L_118d21ad;
  /* 118d219b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d219e jne 0x118d27fd */
  if (!C.zf) goto L_118d27fd;
  /* 118d21a4 or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d21a8 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d21ad:;
  /* 118d21ad or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d21b1 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d21b6:;
  /* 118d21b6 or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d21ba jmp 0x118d27fd */
  goto L_118d27fd;
L_118d21bf:;
  /* 118d21bf or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 118d21c3 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d21c8:;
  /* 118d21c8 or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d21cc jmp 0x118d27fd */
  goto L_118d27fd;
L_118d21d1:;
  /* 118d21d1 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d21d4 jne 0x118d21f9 */
  if (!C.zf) goto L_118d21f9;
  /* 118d21d6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d21d9 push eax */
  push32((uint32_t)(EAX));
  /* 118d21da call 0x118d28d4 */
  push32(0x118d21dfu); f_118d28d4();
  /* 118d21df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d21e1 pop ecx */
  ECX = (pop32());
  /* 118d21e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118d21e5 jge 0x118d27fd */
  if ((C.sf==C.of)) goto L_118d27fd;
  /* 118d21eb or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d21ef neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_118d21f1:;
  /* 118d21f1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118d21f4 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d21f9:;
  /* 118d21f9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118d21fc movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d21ff lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d2202 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 118d2206 jmp 0x118d21f1 */
  goto L_118d21f1;
L_118d2208:;
  /* 118d2208 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 118d220b jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2210:;
  /* 118d2210 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2213 jne 0x118d2233 */
  if (!C.zf) goto L_118d2233;
  /* 118d2215 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d2218 push eax */
  push32((uint32_t)(EAX));
  /* 118d2219 call 0x118d28d4 */
  push32(0x118d221eu); f_118d28d4();
  /* 118d221e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2220 pop ecx */
  ECX = (pop32());
  /* 118d2221 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118d2224 jge 0x118d27fd */
  if ((C.sf==C.of)) goto L_118d27fd;
  /* 118d222a or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 118d222e jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2233:;
  /* 118d2233 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118d2236 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d2239 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 118d223d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118d2240 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2245:;
  /* 118d2245 cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2248 je 0x118d2278 */
  if (C.zf) goto L_118d2278;
  /* 118d224a cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d224d je 0x118d226f */
  if (C.zf) goto L_118d226f;
  /* 118d224f cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2252 je 0x118d2266 */
  if (C.zf) goto L_118d2266;
  /* 118d2254 cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2257 jne 0x118d27fd */
  if (!C.zf) goto L_118d27fd;
  /* 118d225d or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118d2261 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2266:;
  /* 118d2266 or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d226a jmp 0x118d27fd */
  goto L_118d27fd;
L_118d226f:;
  /* 118d226f or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d2273 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2278:;
  /* 118d2278 cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d227b jne 0x118d2291 */
  if (!C.zf) goto L_118d2291;
  /* 118d227d cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2281 jne 0x118d2291 */
  if (!C.zf) goto L_118d2291;
  /* 118d2283 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d2284 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d2285 or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118d2289 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 118d228c jmp 0x118d27fd */
  goto L_118d27fd;
L_118d2291:;
  /* 118d2291 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_118d2294:;
  /* 118d2294 mov ecx, dword ptr [0x118d9628] */
  ECX = (r32((uint32_t)(0x118d9628)));
  /* 118d229a mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 118d229d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118d22a0 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118d22a5 je 0x118d22c0 */
  if (C.zf) goto L_118d22c0;
  /* 118d22a7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d22aa push eax */
  push32((uint32_t)(EAX));
  /* 118d22ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d22ae movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d22b1 push eax */
  push32((uint32_t)(EAX));
  /* 118d22b2 call 0x118d2836 */
  push32(0x118d22b7u); f_118d2836();
  /* 118d22b7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118d22b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d22bc inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d22bd mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_118d22c0:;
  /* 118d22c0 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d22c3 push eax */
  push32((uint32_t)(EAX));
  /* 118d22c4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d22c7 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d22ca push eax */
  push32((uint32_t)(EAX));
  /* 118d22cb call 0x118d2836 */
  push32(0x118d22d0u); f_118d2836();
  /* 118d22d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d22d3 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d22d8:;
  /* 118d22d8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d22db cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d22de jg 0x118d2500 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d2500;
  /* 118d22e4 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d22e7 jge 0x118d2383 */
  if ((C.sf==C.of)) goto L_118d2383;
  /* 118d22ed cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d22f0 jg 0x118d23e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d23e1;
  /* 118d22f6 je 0x118d2574 */
  if (C.zf) goto L_118d2574;
  /* 118d22fc sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d22ff je 0x118d23a4 */
  if (C.zf) goto L_118d23a4;
  /* 118d2305 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2306 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2307 je 0x118d2379 */
  if (C.zf) goto L_118d2379;
  /* 118d2309 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d230a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d230b je 0x118d2379 */
  if (C.zf) goto L_118d2379;
  /* 118d230d sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2310 jne 0x118d26ff */
  if (!C.zf) goto L_118d26ff;
  /* 118d2316 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 118d231c jne 0x118d2322 */
  if (!C.zf) goto L_118d2322;
  /* 118d231e or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_118d2322:;
  /* 118d2322 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 118d2325 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2328 jne 0x118d232f */
  if (!C.zf) goto L_118d232f;
  /* 118d232a mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_118d232f:;
  /* 118d232f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d2332 push eax */
  push32((uint32_t)(EAX));
  /* 118d2333 call 0x118d28d4 */
  push32(0x118d2338u); f_118d28d4();
  /* 118d2338 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 118d233e pop ecx */
  ECX = (pop32());
  /* 118d233f mov ecx, eax */
  ECX = (EAX);
  /* 118d2341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118d2344 je 0x118d2548 */
  if (C.zf) goto L_118d2548;
  /* 118d234a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d234c jne 0x118d2357 */
  if (!C.zf) goto L_118d2357;
  /* 118d234e mov ecx, dword ptr [0x118d92d0] */
  ECX = (r32((uint32_t)(0x118d92d0)));
  /* 118d2354 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118d2357:;
  /* 118d2357 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 118d235e mov eax, ecx */
  EAX = (ECX);
L_118d2360:;
  /* 118d2360 mov edx, esi */
  EDX = (ESI);
  /* 118d2362 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118d2363 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d2365 je 0x118d253f */
  if (C.zf) goto L_118d253f;
  /* 118d236b cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d236f je 0x118d253f */
  if (C.zf) goto L_118d253f;
  /* 118d2375 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2376 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2377 jmp 0x118d2360 */
  goto L_118d2360;
L_118d2379:;
  /* 118d2379 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 118d2380 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_118d2383:;
  /* 118d2383 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d2387 lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 118d238d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d238f mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 118d2392 jge 0x118d2467 */
  if ((C.sf==C.of)) goto L_118d2467;
  /* 118d2398 mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 118d239f jmp 0x118d2475 */
  goto L_118d2475;
L_118d23a4:;
  /* 118d23a4 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 118d23aa jne 0x118d23b0 */
  if (!C.zf) goto L_118d23b0;
  /* 118d23ac or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_118d23b0:;
  /* 118d23b0 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 118d23b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d23b9 push eax */
  push32((uint32_t)(EAX));
  /* 118d23ba je 0x118d23f7 */
  if (C.zf) goto L_118d23f7;
  /* 118d23bc call 0x118d28f1 */
  push32(0x118d23c1u); f_118d28f1();
  /* 118d23c1 push eax */
  push32((uint32_t)(EAX));
  /* 118d23c2 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 118d23c8 push eax */
  push32((uint32_t)(EAX));
  /* 118d23c9 call 0x118d3b0b */
  push32(0x118d23ceu); f_118d3b0b();
  /* 118d23ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d23d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118d23d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d23d6 jge 0x118d240a */
  if ((C.sf==C.of)) goto L_118d240a;
  /* 118d23d8 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 118d23df jmp 0x118d240a */
  goto L_118d240a;
L_118d23e1:;
  /* 118d23e1 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d23e4 je 0x118d2418 */
  if (C.zf) goto L_118d2418;
  /* 118d23e6 sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d23e9 je 0x118d23b0 */
  if (C.zf) goto L_118d23b0;
  /* 118d23eb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d23ec je 0x118d25da */
  if (C.zf) goto L_118d25da;
  /* 118d23f2 jmp 0x118d26ff */
  goto L_118d26ff;
L_118d23f7:;
  /* 118d23f7 call 0x118d28d4 */
  push32(0x118d23fcu); f_118d28d4();
  /* 118d23fc pop ecx */
  ECX = (pop32());
  /* 118d23fd mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 118d2403 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_118d240a:;
  /* 118d240a lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 118d2410 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118d2413 jmp 0x118d26ff */
  goto L_118d26ff;
L_118d2418:;
  /* 118d2418 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d241b push eax */
  push32((uint32_t)(EAX));
  /* 118d241c call 0x118d28d4 */
  push32(0x118d2421u); f_118d28d4();
  /* 118d2421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2423 pop ecx */
  ECX = (pop32());
  /* 118d2424 je 0x118d2459 */
  if (C.zf) goto L_118d2459;
  /* 118d2426 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118d2429 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d242b je 0x118d2459 */
  if (C.zf) goto L_118d2459;
  /* 118d242d test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 118d2431 je 0x118d244a */
  if (C.zf) goto L_118d244a;
  /* 118d2433 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 118d2436 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118d2438 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118d243b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118d243e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 118d2445 jmp 0x118d26ff */
  goto L_118d26ff;
L_118d244a:;
  /* 118d244a and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 118d244e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118d2451 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 118d2454 jmp 0x118d26fc */
  goto L_118d26fc;
L_118d2459:;
  /* 118d2459 mov eax, dword ptr [0x118d92cc] */
  EAX = (r32((uint32_t)(0x118d92cc)));
  /* 118d245e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118d2461 push eax */
  push32((uint32_t)(EAX));
  /* 118d2462 jmp 0x118d24f5 */
  goto L_118d24f5;
L_118d2467:;
  /* 118d2467 jne 0x118d2475 */
  if (!C.zf) goto L_118d2475;
  /* 118d2469 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d246c jne 0x118d2475 */
  if (!C.zf) goto L_118d2475;
  /* 118d246e mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_118d2475:;
  /* 118d2475 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d2478 push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 118d247b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d247e mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 118d2481 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 118d2484 mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 118d2487 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 118d248a mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 118d248d mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 118d2490 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d2493 push eax */
  push32((uint32_t)(EAX));
  /* 118d2494 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 118d249a push eax */
  push32((uint32_t)(EAX));
  /* 118d249b lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 118d249e push eax */
  push32((uint32_t)(EAX));
  /* 118d249f call dword ptr [0x118d9610] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d9610))), 0x118d24a5u);
  /* 118d24a5 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 118d24a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d24ab and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 118d24b1 je 0x118d24c7 */
  if (C.zf) goto L_118d24c7;
  /* 118d24b3 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d24b7 jne 0x118d24c7 */
  if (!C.zf) goto L_118d24c7;
  /* 118d24b9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 118d24bf push eax */
  push32((uint32_t)(EAX));
  /* 118d24c0 call dword ptr [0x118d961c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d961c))), 0x118d24c6u);
  /* 118d24c6 pop ecx */
  ECX = (pop32());
L_118d24c7:;
  /* 118d24c7 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d24ca jne 0x118d24de */
  if (!C.zf) goto L_118d24de;
  /* 118d24cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d24ce jne 0x118d24de */
  if (!C.zf) goto L_118d24de;
  /* 118d24d0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 118d24d6 push eax */
  push32((uint32_t)(EAX));
  /* 118d24d7 call dword ptr [0x118d9614] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d9614))), 0x118d24ddu);
  /* 118d24dd pop ecx */
  ECX = (pop32());
L_118d24de:;
  /* 118d24de cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d24e5 jne 0x118d24f4 */
  if (!C.zf) goto L_118d24f4;
  /* 118d24e7 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118d24eb lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 118d24f1 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_118d24f4:;
  /* 118d24f4 push edi */
  push32((uint32_t)(EDI));
L_118d24f5:;
  /* 118d24f5 call 0x118d3a90 */
  push32(0x118d24fau); f_118d3a90();
  /* 118d24fa pop ecx */
  ECX = (pop32());
  /* 118d24fb jmp 0x118d26fc */
  goto L_118d26fc;
L_118d2500:;
  /* 118d2500 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2503 je 0x118d25da */
  if (C.zf) goto L_118d25da;
  /* 118d2509 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d250c je 0x118d25b0 */
  if (C.zf) goto L_118d25b0;
  /* 118d2512 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2513 je 0x118d259d */
  if (C.zf) goto L_118d259d;
  /* 118d2519 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d251a je 0x118d256d */
  if (C.zf) goto L_118d256d;
  /* 118d251c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d251f je 0x118d2322 */
  if (C.zf) goto L_118d2322;
  /* 118d2525 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2526 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2527 je 0x118d25de */
  if (C.zf) goto L_118d25de;
  /* 118d252d sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2530 jne 0x118d26ff */
  if (!C.zf) goto L_118d26ff;
  /* 118d2536 mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 118d253d jmp 0x118d257b */
  goto L_118d257b;
L_118d253f:;
  /* 118d253f sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2541 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118d2543 jmp 0x118d26fc */
  goto L_118d26fc;
L_118d2548:;
  /* 118d2548 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d254a jne 0x118d2555 */
  if (!C.zf) goto L_118d2555;
  /* 118d254c mov ecx, dword ptr [0x118d92cc] */
  ECX = (r32((uint32_t)(0x118d92cc)));
  /* 118d2552 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118d2555:;
  /* 118d2555 mov eax, ecx */
  EAX = (ECX);
L_118d2557:;
  /* 118d2557 mov edx, esi */
  EDX = (ESI);
  /* 118d2559 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118d255a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d255c je 0x118d2566 */
  if (C.zf) goto L_118d2566;
  /* 118d255e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2561 je 0x118d2566 */
  if (C.zf) goto L_118d2566;
  /* 118d2563 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2564 jmp 0x118d2557 */
  goto L_118d2557;
L_118d2566:;
  /* 118d2566 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2568 jmp 0x118d26fc */
  goto L_118d26fc;
L_118d256d:;
  /* 118d256d mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_118d2574:;
  /* 118d2574 mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_118d257b:;
  /* 118d257b test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 118d257f mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 118d2586 je 0x118d25e5 */
  if (C.zf) goto L_118d25e5;
  /* 118d2588 mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 118d258b mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 118d258f add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118d2591 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 118d2598 mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 118d259b jmp 0x118d25e5 */
  goto L_118d25e5;
L_118d259d:;
  /* 118d259d test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 118d25a1 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 118d25a8 je 0x118d25e5 */
  if (C.zf) goto L_118d25e5;
  /* 118d25aa or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118d25ae jmp 0x118d25e5 */
  goto L_118d25e5;
L_118d25b0:;
  /* 118d25b0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d25b3 push eax */
  push32((uint32_t)(EAX));
  /* 118d25b4 call 0x118d28d4 */
  push32(0x118d25b9u); f_118d28d4();
  /* 118d25b9 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 118d25bd pop ecx */
  ECX = (pop32());
  /* 118d25be je 0x118d25c9 */
  if (C.zf) goto L_118d25c9;
  /* 118d25c0 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 118d25c4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 118d25c7 jmp 0x118d25ce */
  goto L_118d25ce;
L_118d25c9:;
  /* 118d25c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118d25cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_118d25ce:;
  /* 118d25ce mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 118d25d5 jmp 0x118d27fd */
  goto L_118d27fd;
L_118d25da:;
  /* 118d25da or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118d25de:;
  /* 118d25de mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_118d25e5:;
  /* 118d25e5 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 118d25e9 je 0x118d25f7 */
  if (C.zf) goto L_118d25f7;
  /* 118d25eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d25ee push eax */
  push32((uint32_t)(EAX));
  /* 118d25ef call 0x118d28e1 */
  push32(0x118d25f4u); f_118d28e1();
  /* 118d25f4 pop ecx */
  ECX = (pop32());
  /* 118d25f5 jmp 0x118d2638 */
  goto L_118d2638;
L_118d25f7:;
  /* 118d25f7 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 118d25fb je 0x118d261e */
  if (C.zf) goto L_118d261e;
  /* 118d25fd test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 118d2601 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d2604 push eax */
  push32((uint32_t)(EAX));
  /* 118d2605 je 0x118d2613 */
  if (C.zf) goto L_118d2613;
  /* 118d2607 call 0x118d28d4 */
  push32(0x118d260cu); f_118d28d4();
  /* 118d260c pop ecx */
  ECX = (pop32());
  /* 118d260d movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_118d2610:;
  /* 118d2610 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118d2611 jmp 0x118d2638 */
  goto L_118d2638;
L_118d2613:;
  /* 118d2613 call 0x118d28d4 */
  push32(0x118d2618u); f_118d28d4();
  /* 118d2618 pop ecx */
  ECX = (pop32());
  /* 118d2619 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 118d261c jmp 0x118d2610 */
  goto L_118d2610;
L_118d261e:;
  /* 118d261e test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 118d2622 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118d2625 push eax */
  push32((uint32_t)(EAX));
  /* 118d2626 je 0x118d2630 */
  if (C.zf) goto L_118d2630;
  /* 118d2628 call 0x118d28d4 */
  push32(0x118d262du); f_118d28d4();
  /* 118d262d pop ecx */
  ECX = (pop32());
  /* 118d262e jmp 0x118d2610 */
  goto L_118d2610;
L_118d2630:;
  /* 118d2630 call 0x118d28d4 */
  push32(0x118d2635u); f_118d28d4();
  /* 118d2635 pop ecx */
  ECX = (pop32());
  /* 118d2636 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_118d2638:;
  /* 118d2638 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 118d263c je 0x118d2659 */
  if (C.zf) goto L_118d2659;
  /* 118d263e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d2640 jg 0x118d2659 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d2659;
  /* 118d2642 jl 0x118d2648 */
  if ((C.sf!=C.of)) goto L_118d2648;
  /* 118d2644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2646 jae 0x118d2659 */
  if (!C.cf) goto L_118d2659;
L_118d2648:;
  /* 118d2648 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d264a adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d264d mov esi, eax */
  ESI = (EAX);
  /* 118d264f neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d2651 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 118d2655 mov edi, edx */
  EDI = (EDX);
  /* 118d2657 jmp 0x118d265d */
  goto L_118d265d;
L_118d2659:;
  /* 118d2659 mov esi, eax */
  ESI = (EAX);
  /* 118d265b mov edi, edx */
  EDI = (EDX);
L_118d265d:;
  /* 118d265d test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 118d2661 jne 0x118d2666 */
  if (!C.zf) goto L_118d2666;
  /* 118d2663 and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_118d2666:;
  /* 118d2666 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d266a jge 0x118d2675 */
  if ((C.sf==C.of)) goto L_118d2675;
  /* 118d266c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 118d2673 jmp 0x118d2679 */
  goto L_118d2679;
L_118d2675:;
  /* 118d2675 and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118d2679:;
  /* 118d2679 mov eax, esi */
  EAX = (ESI);
  /* 118d267b or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 118d267d jne 0x118d2683 */
  if (!C.zf) goto L_118d2683;
  /* 118d267f and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_118d2683:;
  /* 118d2683 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 118d2686 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118d2689:;
  /* 118d2689 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d268c dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 118d268f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2691 jg 0x118d2699 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d2699;
  /* 118d2693 mov eax, esi */
  EAX = (ESI);
  /* 118d2695 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 118d2697 je 0x118d26d4 */
  if (C.zf) goto L_118d26d4;
L_118d2699:;
  /* 118d2699 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d269c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118d269d push edx */
  push32((uint32_t)(EDX));
  /* 118d269e push eax */
  push32((uint32_t)(EAX));
  /* 118d269f push edi */
  push32((uint32_t)(EDI));
  /* 118d26a0 push esi */
  push32((uint32_t)(ESI));
  /* 118d26a1 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 118d26a4 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 118d26a7 call 0x118d3c40 */
  push32(0x118d26acu); f_118d3c40();
  /* 118d26ac push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 118d26af mov ebx, eax */
  EBX = (EAX);
  /* 118d26b1 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d26b4 push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 118d26b7 push edi */
  push32((uint32_t)(EDI));
  /* 118d26b8 push esi */
  push32((uint32_t)(ESI));
  /* 118d26b9 call 0x118d3bd0 */
  push32(0x118d26beu); f_118d3bd0();
  /* 118d26be cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d26c1 mov esi, eax */
  ESI = (EAX);
  /* 118d26c3 mov edi, edx */
  EDI = (EDX);
  /* 118d26c5 jle 0x118d26ca */
  if ((C.zf||C.sf!=C.of)) goto L_118d26ca;
  /* 118d26c7 add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_118d26ca:;
  /* 118d26ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d26cd dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 118d26d0 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 118d26d2 jmp 0x118d2689 */
  goto L_118d2689;
L_118d26d4:;
  /* 118d26d4 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 118d26d7 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d26da inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 118d26dd test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 118d26e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118d26e4 je 0x118d26ff */
  if (C.zf) goto L_118d26ff;
  /* 118d26e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d26e9 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d26ec jne 0x118d26f2 */
  if (!C.zf) goto L_118d26f2;
  /* 118d26ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d26f0 jne 0x118d26ff */
  if (!C.zf) goto L_118d26ff;
L_118d26f2:;
  /* 118d26f2 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 118d26f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d26f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d26f9 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_118d26fc:;
  /* 118d26fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118d26ff:;
  /* 118d26ff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2703 jne 0x118d27fd */
  if (!C.zf) goto L_118d27fd;
  /* 118d2709 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d270c test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 118d270f je 0x118d2737 */
  if (C.zf) goto L_118d2737;
  /* 118d2711 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 118d2714 je 0x118d271c */
  if (C.zf) goto L_118d271c;
  /* 118d2716 mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 118d271a jmp 0x118d2730 */
  goto L_118d2730;
L_118d271c:;
  /* 118d271c test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118d271f je 0x118d2727 */
  if (C.zf) goto L_118d2727;
  /* 118d2721 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 118d2725 jmp 0x118d2730 */
  goto L_118d2730;
L_118d2727:;
  /* 118d2727 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 118d272a je 0x118d2737 */
  if (C.zf) goto L_118d2737;
  /* 118d272c mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_118d2730:;
  /* 118d2730 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_118d2737:;
  /* 118d2737 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 118d273a sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d273d sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2740 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 118d2743 jne 0x118d2757 */
  if (!C.zf) goto L_118d2757;
  /* 118d2745 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d2748 push eax */
  push32((uint32_t)(EAX));
  /* 118d2749 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d274c push esi */
  push32((uint32_t)(ESI));
  /* 118d274d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118d274f call 0x118d286b */
  push32(0x118d2754u); f_118d286b();
  /* 118d2754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d2757:;
  /* 118d2757 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d275a push eax */
  push32((uint32_t)(EAX));
  /* 118d275b lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 118d275e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d2761 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118d2764 push eax */
  push32((uint32_t)(EAX));
  /* 118d2765 call 0x118d289c */
  push32(0x118d276au); f_118d289c();
  /* 118d276a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d276d test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 118d2770 je 0x118d2789 */
  if (C.zf) goto L_118d2789;
  /* 118d2772 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 118d2775 jne 0x118d2789 */
  if (!C.zf) goto L_118d2789;
  /* 118d2777 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d277a push eax */
  push32((uint32_t)(EAX));
  /* 118d277b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d277e push esi */
  push32((uint32_t)(ESI));
  /* 118d277f push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118d2781 call 0x118d286b */
  push32(0x118d2786u); f_118d286b();
  /* 118d2786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d2789:;
  /* 118d2789 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d278d je 0x118d27d0 */
  if (C.zf) goto L_118d27d0;
  /* 118d278f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2793 jle 0x118d27d0 */
  if ((C.zf||C.sf!=C.of)) goto L_118d27d0;
  /* 118d2795 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d2798 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d279b lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_118d279e:;
  /* 118d279e mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 118d27a1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d27a2 push eax */
  push32((uint32_t)(EAX));
  /* 118d27a3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 118d27a6 push eax */
  push32((uint32_t)(EAX));
  /* 118d27a7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d27a8 call 0x118d3b0b */
  push32(0x118d27adu); f_118d3b0b();
  /* 118d27ad pop ecx */
  ECX = (pop32());
  /* 118d27ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d27b0 pop ecx */
  ECX = (pop32());
  /* 118d27b1 jle 0x118d27e5 */
  if ((C.zf||C.sf!=C.of)) goto L_118d27e5;
  /* 118d27b3 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 118d27b6 push ecx */
  push32((uint32_t)(ECX));
  /* 118d27b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d27ba push eax */
  push32((uint32_t)(EAX));
  /* 118d27bb lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 118d27be push eax */
  push32((uint32_t)(EAX));
  /* 118d27bf call 0x118d289c */
  push32(0x118d27c4u); f_118d289c();
  /* 118d27c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d27c7 mov eax, edi */
  EAX = (EDI);
  /* 118d27c9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118d27ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d27cc jne 0x118d279e */
  if (!C.zf) goto L_118d279e;
  /* 118d27ce jmp 0x118d27e5 */
  goto L_118d27e5;
L_118d27d0:;
  /* 118d27d0 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d27d3 push eax */
  push32((uint32_t)(EAX));
  /* 118d27d4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d27d7 push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 118d27da push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 118d27dd call 0x118d289c */
  push32(0x118d27e2u); f_118d289c();
  /* 118d27e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d27e5:;
  /* 118d27e5 test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 118d27e9 je 0x118d27fd */
  if (C.zf) goto L_118d27fd;
  /* 118d27eb lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d27ee push eax */
  push32((uint32_t)(EAX));
  /* 118d27ef push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d27f2 push esi */
  push32((uint32_t)(ESI));
  /* 118d27f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118d27f5 call 0x118d286b */
  push32(0x118d27fau); f_118d286b();
  /* 118d27fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d27fd:;
  /* 118d27fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d2800 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118d2802 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d2803 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 118d2805 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 118d2808 jne 0x118d2121 */
  if (!C.zf) goto L_118d2121;
L_118d280e:;
  /* 118d280e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118d2811 pop edi */
  EDI = (pop32());
  /* 118d2812 pop esi */
  ESI = (pop32());
  /* 118d2813 pop ebx */
  EBX = (pop32());
  /* 118d2814 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d2815 ret  */
  ESPCHK(0x118d20f5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002836 @ 0x118d2836 (53 bytes, 25 insns) */
void f_118d2836(void) {
  FTRACE(0x118d2836u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2836 push ebp */
  push32((uint32_t)(EBP));
  /* 118d2837 mov ebp, esp */
  EBP = (ESP);
  /* 118d2839 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d283c dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 118d283f js 0x118d284f */
  if (C.sf) goto L_118d284f;
  /* 118d2841 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118d2843 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 118d2846 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 118d2848 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d284a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 118d284d jmp 0x118d285a */
  goto L_118d285a;
L_118d284f:;
  /* 118d284f push ecx */
  push32((uint32_t)(ECX));
  /* 118d2850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d2853 call 0x118d1fdd */
  push32(0x118d2858u); f_118d1fdd();
  /* 118d2858 pop ecx */
  ECX = (pop32());
  /* 118d2859 pop ecx */
  ECX = (pop32());
L_118d285a:;
  /* 118d285a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d285d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d2860 jne 0x118d2867 */
  if (!C.zf) goto L_118d2867;
  /* 118d2862 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d2865 pop ebp */
  EBP = (pop32());
  /* 118d2866 ret  */
  ESPCHK(0x118d2836u, _esp0);
  ESP += 4; return;
L_118d2867:;
  /* 118d2867 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 118d2869 pop ebp */
  EBP = (pop32());
  /* 118d286a ret  */
  ESPCHK(0x118d2836u, _esp0);
  ESP += 4; return;
}

/* FUN_1000286b @ 0x118d286b (49 bytes, 22 insns) */
void f_118d286b(void) {
  FTRACE(0x118d286bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d286b push esi */
  push32((uint32_t)(ESI));
  /* 118d286c push edi */
  push32((uint32_t)(EDI));
  /* 118d286d mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118d2871 mov eax, edi */
  EAX = (EDI);
  /* 118d2873 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118d2874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2876 jle 0x118d2899 */
  if ((C.zf||C.sf!=C.of)) goto L_118d2899;
  /* 118d2878 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_118d287c:;
  /* 118d287c push esi */
  push32((uint32_t)(ESI));
  /* 118d287d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d2881 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 118d2885 call 0x118d2836 */
  push32(0x118d288au); f_118d2836();
  /* 118d288a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d288d cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2890 je 0x118d2899 */
  if (C.zf) goto L_118d2899;
  /* 118d2892 mov eax, edi */
  EAX = (EDI);
  /* 118d2894 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118d2895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2897 jg 0x118d287c */
  if ((!C.zf&&C.sf==C.of)) goto L_118d287c;
L_118d2899:;
  /* 118d2899 pop edi */
  EDI = (pop32());
  /* 118d289a pop esi */
  ESI = (pop32());
  /* 118d289b ret  */
  ESPCHK(0x118d286bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000289c @ 0x118d289c (56 bytes, 27 insns) */
void f_118d289c(void) {
  FTRACE(0x118d289cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d289c push ebx */
  push32((uint32_t)(EBX));
  /* 118d289d mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d28a1 mov eax, ebx */
  EAX = (EBX);
  /* 118d28a3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d28a4 push esi */
  push32((uint32_t)(ESI));
  /* 118d28a5 push edi */
  push32((uint32_t)(EDI));
  /* 118d28a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d28a8 jle 0x118d28d0 */
  if ((C.zf||C.sf!=C.of)) goto L_118d28d0;
  /* 118d28aa mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 118d28ae mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_118d28b2:;
  /* 118d28b2 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 118d28b5 push edi */
  push32((uint32_t)(EDI));
  /* 118d28b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d28b7 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 118d28bb push eax */
  push32((uint32_t)(EAX));
  /* 118d28bc call 0x118d2836 */
  push32(0x118d28c1u); f_118d2836();
  /* 118d28c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d28c4 cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d28c7 je 0x118d28d0 */
  if (C.zf) goto L_118d28d0;
  /* 118d28c9 mov eax, ebx */
  EAX = (EBX);
  /* 118d28cb dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d28cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d28ce jg 0x118d28b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d28b2;
L_118d28d0:;
  /* 118d28d0 pop edi */
  EDI = (pop32());
  /* 118d28d1 pop esi */
  ESI = (pop32());
  /* 118d28d2 pop ebx */
  EBX = (pop32());
  /* 118d28d3 ret  */
  ESPCHK(0x118d289cu, _esp0);
  ESP += 4; return;
}

/* FUN_100028d4 @ 0x118d28d4 (13 bytes, 5 insns) */
void f_118d28d4(void) {
  FTRACE(0x118d28d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d28d4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d28d8 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d28db mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 118d28dd mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 118d28e0 ret  */
  ESPCHK(0x118d28d4u, _esp0);
  ESP += 4; return;
}

/* FUN_100028e1 @ 0x118d28e1 (16 bytes, 6 insns) */
void f_118d28e1(void) {
  FTRACE(0x118d28e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d28e1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d28e5 add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d28e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118d28ea mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 118d28ed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 118d28f0 ret  */
  ESPCHK(0x118d28e1u, _esp0);
  ESP += 4; return;
}

/* FUN_100028f1 @ 0x118d28f1 (14 bytes, 5 insns) */
void f_118d28f1(void) {
  FTRACE(0x118d28f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d28f1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d28f5 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d28f8 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 118d28fa mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 118d28fe ret  */
  ESPCHK(0x118d28f1u, _esp0);
  ESP += 4; return;
}

/* FUN_100028ff @ 0x118d28ff (84 bytes, 32 insns) */
void f_118d28ff(void) {
  FTRACE(0x118d28ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d28ff push esi */
  push32((uint32_t)(ESI));
  /* 118d2900 call 0x118d3df2 */
  push32(0x118d2905u); f_118d3df2();
  /* 118d2905 call dword ptr [0x118d8090] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8090))), 0x118d290bu);
  /* 118d290b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d290e mov dword ptr [0x118d92d4], eax */
  w32((uint32_t)(0x118d92d4), (EAX));
  /* 118d2913 je 0x118d294f */
  if (C.zf) goto L_118d294f;
  /* 118d2915 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118d2917 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d2919 call 0x118d3cb5 */
  push32(0x118d291eu); f_118d3cb5();
  /* 118d291e mov esi, eax */
  ESI = (EAX);
  /* 118d2920 pop ecx */
  ECX = (pop32());
  /* 118d2921 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2923 pop ecx */
  ECX = (pop32());
  /* 118d2924 je 0x118d294f */
  if (C.zf) goto L_118d294f;
  /* 118d2926 push esi */
  push32((uint32_t)(ESI));
  /* 118d2927 push dword ptr [0x118d92d4] */
  push32((uint32_t)(r32((uint32_t)(0x118d92d4))));
  /* 118d292d call dword ptr [0x118d808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d808c))), 0x118d2933u);
  /* 118d2933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2935 je 0x118d294f */
  if (C.zf) goto L_118d294f;
  /* 118d2937 push esi */
  push32((uint32_t)(ESI));
  /* 118d2938 call 0x118d2971 */
  push32(0x118d293du); f_118d2971();
  /* 118d293d pop ecx */
  ECX = (pop32());
  /* 118d293e call dword ptr [0x118d8088] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8088))), 0x118d2944u);
  /* 118d2944 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d2948 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d294a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d294c pop eax */
  EAX = (pop32());
  /* 118d294d pop esi */
  ESI = (pop32());
  /* 118d294e ret  */
  ESPCHK(0x118d28ffu, _esp0);
  ESP += 4; return;
L_118d294f:;
  /* 118d294f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d2951 pop esi */
  ESI = (pop32());
  /* 118d2952 ret  */
  ESPCHK(0x118d28ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10002953 @ 0x118d2953 (30 bytes, 8 insns) */
void f_118d2953(void) {
  FTRACE(0x118d2953u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2953 call 0x118d3e1b */
  push32(0x118d2958u); f_118d3e1b();
  /* 118d2958 mov eax, dword ptr [0x118d92d4] */
  EAX = (r32((uint32_t)(0x118d92d4)));
  /* 118d295d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2960 je 0x118d2970 */
  if (C.zf) goto L_118d2970;
  /* 118d2962 push eax */
  push32((uint32_t)(EAX));
  /* 118d2963 call dword ptr [0x118d8094] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8094))), 0x118d2969u);
  /* 118d2969 or dword ptr [0x118d92d4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x118d92d4)))|(0xffffffffu); w32((uint32_t)(0x118d92d4), (_r)); fl_logic(_r,32); }
L_118d2970:;
  /* 118d2970 ret  */
  ESPCHK(0x118d2953u, _esp0);
  ESP += 4; return;
}

/* FUN_10002971 @ 0x118d2971 (19 bytes, 4 insns) */
void f_118d2971(void) {
  FTRACE(0x118d2971u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2971 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d2975 mov dword ptr [eax + 0x50], 0x118d9900 */
  w32((uint32_t)(EAX + 0x50), (0x118d9900u));
  /* 118d297c mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 118d2983 ret  */
  ESPCHK(0x118d2971u, _esp0);
  ESP += 4; return;
}

/* FUN_10002984 @ 0x118d2984 (103 bytes, 38 insns) */
void f_118d2984(void) {
  FTRACE(0x118d2984u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2984 push esi */
  push32((uint32_t)(ESI));
  /* 118d2985 push edi */
  push32((uint32_t)(EDI));
  /* 118d2986 call dword ptr [0x118d80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a0))), 0x118d298cu);
  /* 118d298c push dword ptr [0x118d92d4] */
  push32((uint32_t)(r32((uint32_t)(0x118d92d4))));
  /* 118d2992 mov edi, eax */
  EDI = (EAX);
  /* 118d2994 call dword ptr [0x118d809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d809c))), 0x118d299au);
  /* 118d299a mov esi, eax */
  ESI = (EAX);
  /* 118d299c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d299e jne 0x118d29df */
  if (!C.zf) goto L_118d29df;
  /* 118d29a0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118d29a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d29a4 call 0x118d3cb5 */
  push32(0x118d29a9u); f_118d3cb5();
  /* 118d29a9 mov esi, eax */
  ESI = (EAX);
  /* 118d29ab pop ecx */
  ECX = (pop32());
  /* 118d29ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d29ae pop ecx */
  ECX = (pop32());
  /* 118d29af je 0x118d29d7 */
  if (C.zf) goto L_118d29d7;
  /* 118d29b1 push esi */
  push32((uint32_t)(ESI));
  /* 118d29b2 push dword ptr [0x118d92d4] */
  push32((uint32_t)(r32((uint32_t)(0x118d92d4))));
  /* 118d29b8 call dword ptr [0x118d808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d808c))), 0x118d29beu);
  /* 118d29be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d29c0 je 0x118d29d7 */
  if (C.zf) goto L_118d29d7;
  /* 118d29c2 push esi */
  push32((uint32_t)(ESI));
  /* 118d29c3 call 0x118d2971 */
  push32(0x118d29c8u); f_118d2971();
  /* 118d29c8 pop ecx */
  ECX = (pop32());
  /* 118d29c9 call dword ptr [0x118d8088] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8088))), 0x118d29cfu);
  /* 118d29cf or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d29d3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d29d5 jmp 0x118d29df */
  goto L_118d29df;
L_118d29d7:;
  /* 118d29d7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118d29d9 call 0x118d1faa */
  push32(0x118d29deu); f_118d1faa();
  /* 118d29de pop ecx */
  ECX = (pop32());
L_118d29df:;
  /* 118d29df push edi */
  push32((uint32_t)(EDI));
  /* 118d29e0 call dword ptr [0x118d8098] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8098))), 0x118d29e6u);
  /* 118d29e6 mov eax, esi */
  EAX = (ESI);
  /* 118d29e8 pop edi */
  EDI = (pop32());
  /* 118d29e9 pop esi */
  ESI = (pop32());
  /* 118d29ea ret  */
  ESPCHK(0x118d2984u, _esp0);
  ESP += 4; return;
}

/* FUN_100029eb @ 0x118d29eb (160 bytes, 62 insns) */
void f_118d29eb(void) {
  FTRACE(0x118d29ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d29eb mov eax, dword ptr [0x118d92d4] */
  EAX = (r32((uint32_t)(0x118d92d4)));
  /* 118d29f0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d29f3 je 0x118d2a8a */
  if (C.zf) goto L_118d2a8a;
  /* 118d29f9 push esi */
  push32((uint32_t)(ESI));
  /* 118d29fa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d29fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2a00 jne 0x118d2a0f */
  if (!C.zf) goto L_118d2a0f;
  /* 118d2a02 push eax */
  push32((uint32_t)(EAX));
  /* 118d2a03 call dword ptr [0x118d809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d809c))), 0x118d2a09u);
  /* 118d2a09 mov esi, eax */
  ESI = (EAX);
  /* 118d2a0b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2a0d je 0x118d2a7b */
  if (C.zf) goto L_118d2a7b;
L_118d2a0f:;
  /* 118d2a0f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 118d2a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a14 je 0x118d2a1d */
  if (C.zf) goto L_118d2a1d;
  /* 118d2a16 push eax */
  push32((uint32_t)(EAX));
  /* 118d2a17 call 0x118d3efd */
  push32(0x118d2a1cu); f_118d3efd();
  /* 118d2a1c pop ecx */
  ECX = (pop32());
L_118d2a1d:;
  /* 118d2a1d mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 118d2a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a22 je 0x118d2a2b */
  if (C.zf) goto L_118d2a2b;
  /* 118d2a24 push eax */
  push32((uint32_t)(EAX));
  /* 118d2a25 call 0x118d3efd */
  push32(0x118d2a2au); f_118d3efd();
  /* 118d2a2a pop ecx */
  ECX = (pop32());
L_118d2a2b:;
  /* 118d2a2b mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 118d2a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a30 je 0x118d2a39 */
  if (C.zf) goto L_118d2a39;
  /* 118d2a32 push eax */
  push32((uint32_t)(EAX));
  /* 118d2a33 call 0x118d3efd */
  push32(0x118d2a38u); f_118d3efd();
  /* 118d2a38 pop ecx */
  ECX = (pop32());
L_118d2a39:;
  /* 118d2a39 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 118d2a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a3e je 0x118d2a47 */
  if (C.zf) goto L_118d2a47;
  /* 118d2a40 push eax */
  push32((uint32_t)(EAX));
  /* 118d2a41 call 0x118d3efd */
  push32(0x118d2a46u); f_118d3efd();
  /* 118d2a46 pop ecx */
  ECX = (pop32());
L_118d2a47:;
  /* 118d2a47 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 118d2a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a4c je 0x118d2a55 */
  if (C.zf) goto L_118d2a55;
  /* 118d2a4e push eax */
  push32((uint32_t)(EAX));
  /* 118d2a4f call 0x118d3efd */
  push32(0x118d2a54u); f_118d3efd();
  /* 118d2a54 pop ecx */
  ECX = (pop32());
L_118d2a55:;
  /* 118d2a55 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 118d2a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a5a je 0x118d2a63 */
  if (C.zf) goto L_118d2a63;
  /* 118d2a5c push eax */
  push32((uint32_t)(EAX));
  /* 118d2a5d call 0x118d3efd */
  push32(0x118d2a62u); f_118d3efd();
  /* 118d2a62 pop ecx */
  ECX = (pop32());
L_118d2a63:;
  /* 118d2a63 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 118d2a66 cmp eax, 0x118d9900 */
  { uint32_t _a=(EAX),_b=(0x118d9900u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2a6b je 0x118d2a74 */
  if (C.zf) goto L_118d2a74;
  /* 118d2a6d push eax */
  push32((uint32_t)(EAX));
  /* 118d2a6e call 0x118d3efd */
  push32(0x118d2a73u); f_118d3efd();
  /* 118d2a73 pop ecx */
  ECX = (pop32());
L_118d2a74:;
  /* 118d2a74 push esi */
  push32((uint32_t)(ESI));
  /* 118d2a75 call 0x118d3efd */
  push32(0x118d2a7au); f_118d3efd();
  /* 118d2a7a pop ecx */
  ECX = (pop32());
L_118d2a7b:;
  /* 118d2a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 118d2a7d push dword ptr [0x118d92d4] */
  push32((uint32_t)(r32((uint32_t)(0x118d92d4))));
  /* 118d2a83 call dword ptr [0x118d808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d808c))), 0x118d2a89u);
  /* 118d2a89 pop esi */
  ESI = (pop32());
L_118d2a8a:;
  /* 118d2a8a ret  */
  ESPCHK(0x118d29ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a8b @ 0x118d2a8b (45 bytes, 12 insns) */
void f_118d2a8b(void) {
  FTRACE(0x118d2a8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2a8b mov eax, dword ptr [0x118dd834] */
  EAX = (r32((uint32_t)(0x118dd834)));
  /* 118d2a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2a92 je 0x118d2a96 */
  if (C.zf) goto L_118d2a96;
  /* 118d2a94 call eax */
  call_ind((uint32_t)(EAX), 0x118d2a96u);
L_118d2a96:;
  /* 118d2a96 push 0x118d9018 */
  push32((uint32_t)(0x118d9018u));
  /* 118d2a9b push 0x118d900c */
  push32((uint32_t)(0x118d900cu));
  /* 118d2aa0 call 0x118d2b8f */
  push32(0x118d2aa5u); f_118d2b8f();
  /* 118d2aa5 push 0x118d9008 */
  push32((uint32_t)(0x118d9008u));
  /* 118d2aaa push 0x118d9000 */
  push32((uint32_t)(0x118d9000u));
  /* 118d2aaf call 0x118d2b8f */
  push32(0x118d2ab4u); f_118d2b8f();
  /* 118d2ab4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2ab7 ret  */
  ESPCHK(0x118d2a8bu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x118d2ab8 (17 bytes, 6 insns) */
void f_118d2ab8(void) {
  FTRACE(0x118d2ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d2aba push 1 */
  push32((uint32_t)(0x1u));
  /* 118d2abc push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118d2ac0 call 0x118d2ad8 */
  push32(0x118d2ac5u); f_118d2ad8();
  /* 118d2ac5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2ac8 ret  */
  ESPCHK(0x118d2ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac9 @ 0x118d2ac9 (15 bytes, 6 insns) */
void f_118d2ac9(void) {
  FTRACE(0x118d2ac9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2ac9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d2acb push 0 */
  push32((uint32_t)(0x0u));
  /* 118d2acd push 0 */
  push32((uint32_t)(0x0u));
  /* 118d2acf call 0x118d2ad8 */
  push32(0x118d2ad4u); f_118d2ad8();
  /* 118d2ad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2ad7 ret  */
  ESPCHK(0x118d2ac9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad8 @ 0x118d2ad8 (163 bytes, 53 insns) */
void f_118d2ad8(void) {
  FTRACE(0x118d2ad8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2ad8 push edi */
  push32((uint32_t)(EDI));
  /* 118d2ad9 call 0x118d2b7d */
  push32(0x118d2adeu); f_118d2b7d();
  /* 118d2ade push 1 */
  push32((uint32_t)(0x1u));
  /* 118d2ae0 pop edi */
  EDI = (pop32());
  /* 118d2ae1 cmp dword ptr [0x118dc18c], edi */
  { uint32_t _a=(r32((uint32_t)(0x118dc18c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2ae7 jne 0x118d2afa */
  if (!C.zf) goto L_118d2afa;
  /* 118d2ae9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118d2aed call dword ptr [0x118d8004] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8004))), 0x118d2af3u);
  /* 118d2af3 push eax */
  push32((uint32_t)(EAX));
  /* 118d2af4 call dword ptr [0x118d8000] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8000))), 0x118d2afau);
L_118d2afa:;
  /* 118d2afa cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2aff push ebx */
  push32((uint32_t)(EBX));
  /* 118d2b00 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 118d2b04 mov dword ptr [0x118dc188], edi */
  w32((uint32_t)(0x118dc188), (EDI));
  /* 118d2b0a mov byte ptr [0x118dc184], bl */
  w8((uint32_t)(0x118dc184), (BL));
  /* 118d2b10 jne 0x118d2b4e */
  if (!C.zf) goto L_118d2b4e;
  /* 118d2b12 mov eax, dword ptr [0x118dd830] */
  EAX = (r32((uint32_t)(0x118dd830)));
  /* 118d2b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2b19 je 0x118d2b3d */
  if (C.zf) goto L_118d2b3d;
  /* 118d2b1b mov ecx, dword ptr [0x118dd82c] */
  ECX = (r32((uint32_t)(0x118dd82c)));
  /* 118d2b21 push esi */
  push32((uint32_t)(ESI));
  /* 118d2b22 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 118d2b25 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2b27 jb 0x118d2b3c */
  if (C.cf) goto L_118d2b3c;
L_118d2b29:;
  /* 118d2b29 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d2b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2b2d je 0x118d2b31 */
  if (C.zf) goto L_118d2b31;
  /* 118d2b2f call eax */
  call_ind((uint32_t)(EAX), 0x118d2b31u);
L_118d2b31:;
  /* 118d2b31 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2b34 cmp esi, dword ptr [0x118dd830] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dd830))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2b3a jae 0x118d2b29 */
  if (!C.cf) goto L_118d2b29;
L_118d2b3c:;
  /* 118d2b3c pop esi */
  ESI = (pop32());
L_118d2b3d:;
  /* 118d2b3d push 0x118d9024 */
  push32((uint32_t)(0x118d9024u));
  /* 118d2b42 push 0x118d901c */
  push32((uint32_t)(0x118d901cu));
  /* 118d2b47 call 0x118d2b8f */
  push32(0x118d2b4cu); f_118d2b8f();
  /* 118d2b4c pop ecx */
  ECX = (pop32());
  /* 118d2b4d pop ecx */
  ECX = (pop32());
L_118d2b4e:;
  /* 118d2b4e push 0x118d902c */
  push32((uint32_t)(0x118d902cu));
  /* 118d2b53 push 0x118d9028 */
  push32((uint32_t)(0x118d9028u));
  /* 118d2b58 call 0x118d2b8f */
  push32(0x118d2b5du); f_118d2b8f();
  /* 118d2b5d pop ecx */
  ECX = (pop32());
  /* 118d2b5e pop ecx */
  ECX = (pop32());
  /* 118d2b5f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d2b61 pop ebx */
  EBX = (pop32());
  /* 118d2b62 je 0x118d2b6b */
  if (C.zf) goto L_118d2b6b;
  /* 118d2b64 call 0x118d2b86 */
  push32(0x118d2b69u); f_118d2b86();
  /* 118d2b69 pop edi */
  EDI = (pop32());
  /* 118d2b6a ret  */
  ESPCHK(0x118d2ad8u, _esp0);
  ESP += 4; return;
L_118d2b6b:;
  /* 118d2b6b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118d2b6f mov dword ptr [0x118dc18c], edi */
  w32((uint32_t)(0x118dc18c), (EDI));
  /* 118d2b75 call dword ptr [0x118d80a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a4))), 0x118d2b7bu);
  /* 118d2b7b pop edi */
  EDI = (pop32());
  /* 118d2b7c ret  */
  ESPCHK(0x118d2ad8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b7d @ 0x118d2b7d (9 bytes, 4 insns) */
void f_118d2b7d(void) {
  FTRACE(0x118d2b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2b7d push 0xd */
  push32((uint32_t)(0xdu));
  /* 118d2b7f call 0x118d3e87 */
  push32(0x118d2b84u); f_118d3e87();
  /* 118d2b84 pop ecx */
  ECX = (pop32());
  /* 118d2b85 ret  */
  ESPCHK(0x118d2b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10002b86 @ 0x118d2b86 (9 bytes, 4 insns) */
void f_118d2b86(void) {
  FTRACE(0x118d2b86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2b86 push 0xd */
  push32((uint32_t)(0xdu));
  /* 118d2b88 call 0x118d3ee8 */
  push32(0x118d2b8du); f_118d3ee8();
  /* 118d2b8d pop ecx */
  ECX = (pop32());
  /* 118d2b8e ret  */
  ESPCHK(0x118d2b86u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b8f @ 0x118d2b8f (26 bytes, 12 insns) */
void f_118d2b8f(void) {
  FTRACE(0x118d2b8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2b8f push esi */
  push32((uint32_t)(ESI));
  /* 118d2b90 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_118d2b94:;
  /* 118d2b94 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2b98 jae 0x118d2ba7 */
  if (!C.cf) goto L_118d2ba7;
  /* 118d2b9a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d2b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2b9e je 0x118d2ba2 */
  if (C.zf) goto L_118d2ba2;
  /* 118d2ba0 call eax */
  call_ind((uint32_t)(EAX), 0x118d2ba2u);
L_118d2ba2:;
  /* 118d2ba2 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2ba5 jmp 0x118d2b94 */
  goto L_118d2b94;
L_118d2ba7:;
  /* 118d2ba7 pop esi */
  ESI = (pop32());
  /* 118d2ba8 ret  */
  ESPCHK(0x118d2b8fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba9 @ 0x118d2ba9 (444 bytes, 150 insns) */
void f_118d2ba9(void) {
  FTRACE(0x118d2ba9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2ba9 push ebp */
  push32((uint32_t)(EBP));
  /* 118d2baa mov ebp, esp */
  EBP = (ESP);
  /* 118d2bac sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2baf push ebx */
  push32((uint32_t)(EBX));
  /* 118d2bb0 push esi */
  push32((uint32_t)(ESI));
  /* 118d2bb1 push edi */
  push32((uint32_t)(EDI));
  /* 118d2bb2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 118d2bb7 call 0x118d3fe6 */
  push32(0x118d2bbcu); f_118d3fe6();
  /* 118d2bbc mov esi, eax */
  ESI = (EAX);
  /* 118d2bbe pop ecx */
  ECX = (pop32());
  /* 118d2bbf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2bc1 jne 0x118d2bcb */
  if (!C.zf) goto L_118d2bcb;
  /* 118d2bc3 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 118d2bc5 call 0x118d1faa */
  push32(0x118d2bcau); f_118d1faa();
  /* 118d2bca pop ecx */
  ECX = (pop32());
L_118d2bcb:;
  /* 118d2bcb mov dword ptr [0x118dd720], esi */
  w32((uint32_t)(0x118dd720), (ESI));
  /* 118d2bd1 mov dword ptr [0x118dd820], 0x20 */
  w32((uint32_t)(0x118dd820), (0x20u));
  /* 118d2bdb lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_118d2be1:;
  /* 118d2be1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2be3 jae 0x118d2c03 */
  if (!C.cf) goto L_118d2c03;
  /* 118d2be5 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118d2be9 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118d2bec and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 118d2bf0 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 118d2bf4 mov eax, dword ptr [0x118dd720] */
  EAX = (r32((uint32_t)(0x118dd720)));
  /* 118d2bf9 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2bfc add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2c01 jmp 0x118d2be1 */
  goto L_118d2be1;
L_118d2c03:;
  /* 118d2c03 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 118d2c06 push eax */
  push32((uint32_t)(EAX));
  /* 118d2c07 call dword ptr [0x118d80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80bc))), 0x118d2c0du);
  /* 118d2c0d cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d2c12 je 0x118d2ce9 */
  if (C.zf) goto L_118d2ce9;
  /* 118d2c18 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118d2c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2c1d je 0x118d2ce9 */
  if (C.zf) goto L_118d2ce9;
  /* 118d2c23 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 118d2c25 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 118d2c28 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 118d2c2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118d2c2e mov eax, 0x800 */
  EAX = (0x800u);
  /* 118d2c33 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2c35 jl 0x118d2c39 */
  if ((C.sf!=C.of)) goto L_118d2c39;
  /* 118d2c37 mov edi, eax */
  EDI = (EAX);
L_118d2c39:;
  /* 118d2c39 cmp dword ptr [0x118dd820], edi */
  { uint32_t _a=(r32((uint32_t)(0x118dd820))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2c3f jge 0x118d2c97 */
  if ((C.sf==C.of)) goto L_118d2c97;
  /* 118d2c41 mov esi, 0x118dd724 */
  ESI = (0x118dd724u);
L_118d2c46:;
  /* 118d2c46 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 118d2c4b call 0x118d3fe6 */
  push32(0x118d2c50u); f_118d3fe6();
  /* 118d2c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2c52 pop ecx */
  ECX = (pop32());
  /* 118d2c53 je 0x118d2c91 */
  if (C.zf) goto L_118d2c91;
  /* 118d2c55 add dword ptr [0x118dd820], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x118dd820))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x118dd820), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d2c5c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d2c5e lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_118d2c64:;
  /* 118d2c64 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2c66 jae 0x118d2c84 */
  if (!C.cf) goto L_118d2c84;
  /* 118d2c68 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 118d2c6c or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d2c6f and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118d2c73 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 118d2c77 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118d2c79 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2c7c add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2c82 jmp 0x118d2c64 */
  goto L_118d2c64;
L_118d2c84:;
  /* 118d2c84 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2c87 cmp dword ptr [0x118dd820], edi */
  { uint32_t _a=(r32((uint32_t)(0x118dd820))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2c8d jl 0x118d2c46 */
  if ((C.sf!=C.of)) goto L_118d2c46;
  /* 118d2c8f jmp 0x118d2c97 */
  goto L_118d2c97;
L_118d2c91:;
  /* 118d2c91 mov edi, dword ptr [0x118dd820] */
  EDI = (r32((uint32_t)(0x118dd820)));
L_118d2c97:;
  /* 118d2c97 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d2c99 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d2c9b jle 0x118d2ce9 */
  if ((C.zf||C.sf!=C.of)) goto L_118d2ce9;
L_118d2c9d:;
  /* 118d2c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d2ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118d2ca2 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2ca5 je 0x118d2cdf */
  if (C.zf) goto L_118d2cdf;
  /* 118d2ca7 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 118d2ca9 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118d2cab je 0x118d2cdf */
  if (C.zf) goto L_118d2cdf;
  /* 118d2cad test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118d2caf jne 0x118d2cbc */
  if (!C.zf) goto L_118d2cbc;
  /* 118d2cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 118d2cb2 call dword ptr [0x118d80b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80b8))), 0x118d2cb8u);
  /* 118d2cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2cba je 0x118d2cdf */
  if (C.zf) goto L_118d2cdf;
L_118d2cbc:;
  /* 118d2cbc mov ecx, esi */
  ECX = (ESI);
  /* 118d2cbe mov eax, esi */
  EAX = (ESI);
  /* 118d2cc0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d2cc3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d2cc6 mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d2ccd lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d2cd0 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 118d2cd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d2cd6 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 118d2cd8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118d2cda mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 118d2cdc mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_118d2cdf:;
  /* 118d2cdf add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d2ce3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d2ce4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d2ce5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2ce7 jl 0x118d2c9d */
  if ((C.sf!=C.of)) goto L_118d2c9d;
L_118d2ce9:;
  /* 118d2ce9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118d2ceb:;
  /* 118d2ceb mov ecx, dword ptr [0x118dd720] */
  ECX = (r32((uint32_t)(0x118dd720)));
  /* 118d2cf1 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 118d2cf4 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2cf8 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 118d2cfb jne 0x118d2d4a */
  if (!C.zf) goto L_118d2d4a;
  /* 118d2cfd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d2cff mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 118d2d03 jne 0x118d2d0a */
  if (!C.zf) goto L_118d2d0a;
  /* 118d2d05 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 118d2d07 pop eax */
  EAX = (pop32());
  /* 118d2d08 jmp 0x118d2d14 */
  goto L_118d2d14;
L_118d2d0a:;
  /* 118d2d0a mov eax, ebx */
  EAX = (EBX);
  /* 118d2d0c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2d0d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d2d0f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d2d11 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118d2d14:;
  /* 118d2d14 push eax */
  push32((uint32_t)(EAX));
  /* 118d2d15 call dword ptr [0x118d80b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80b4))), 0x118d2d1bu);
  /* 118d2d1b mov edi, eax */
  EDI = (EAX);
  /* 118d2d1d cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d20 je 0x118d2d39 */
  if (C.zf) goto L_118d2d39;
  /* 118d2d22 push edi */
  push32((uint32_t)(EDI));
  /* 118d2d23 call dword ptr [0x118d80b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80b8))), 0x118d2d29u);
  /* 118d2d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2d2b je 0x118d2d39 */
  if (C.zf) goto L_118d2d39;
  /* 118d2d2d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d2d32 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118d2d34 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d37 jne 0x118d2d3f */
  if (!C.zf) goto L_118d2d3f;
L_118d2d39:;
  /* 118d2d39 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118d2d3d jmp 0x118d2d4e */
  goto L_118d2d4e;
L_118d2d3f:;
  /* 118d2d3f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d42 jne 0x118d2d4e */
  if (!C.zf) goto L_118d2d4e;
  /* 118d2d44 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118d2d48 jmp 0x118d2d4e */
  goto L_118d2d4e;
L_118d2d4a:;
  /* 118d2d4a or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_118d2d4e:;
  /* 118d2d4e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d2d4f cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d52 jl 0x118d2ceb */
  if ((C.sf!=C.of)) goto L_118d2ceb;
  /* 118d2d54 push dword ptr [0x118dd820] */
  push32((uint32_t)(r32((uint32_t)(0x118dd820))));
  /* 118d2d5a call dword ptr [0x118d80b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80b0))), 0x118d2d60u);
  /* 118d2d60 pop edi */
  EDI = (pop32());
  /* 118d2d61 pop esi */
  ESI = (pop32());
  /* 118d2d62 pop ebx */
  EBX = (pop32());
  /* 118d2d63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d2d64 ret  */
  ESPCHK(0x118d2ba9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d65 @ 0x118d2d65 (84 bytes, 33 insns) */
void f_118d2d65(void) {
  FTRACE(0x118d2d65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2d65 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2d66 push esi */
  push32((uint32_t)(ESI));
  /* 118d2d67 push edi */
  push32((uint32_t)(EDI));
  /* 118d2d68 mov esi, 0x118dd720 */
  ESI = (0x118dd720u);
L_118d2d6d:;
  /* 118d2d6d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d2d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d2d71 je 0x118d2daa */
  if (C.zf) goto L_118d2daa;
  /* 118d2d73 mov edi, eax */
  EDI = (EAX);
  /* 118d2d75 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2d7a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d7c jae 0x118d2d9f */
  if (!C.cf) goto L_118d2d9f;
  /* 118d2d7e lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_118d2d81:;
  /* 118d2d81 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d85 je 0x118d2d8e */
  if (C.zf) goto L_118d2d8e;
  /* 118d2d87 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2d88 call dword ptr [0x118d80ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80ac))), 0x118d2d8eu);
L_118d2d8e:;
  /* 118d2d8e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d2d90 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2d93 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2d98 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2d9b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2d9d jb 0x118d2d81 */
  if (C.cf) goto L_118d2d81;
L_118d2d9f:;
  /* 118d2d9f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d2da1 call 0x118d3efd */
  push32(0x118d2da6u); f_118d3efd();
  /* 118d2da6 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118d2da9 pop ecx */
  ECX = (pop32());
L_118d2daa:;
  /* 118d2daa add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2dad cmp esi, 0x118dd820 */
  { uint32_t _a=(ESI),_b=(0x118dd820u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2db3 jl 0x118d2d6d */
  if ((C.sf!=C.of)) goto L_118d2d6d;
  /* 118d2db5 pop edi */
  EDI = (pop32());
  /* 118d2db6 pop esi */
  ESI = (pop32());
  /* 118d2db7 pop ebx */
  EBX = (pop32());
  /* 118d2db8 ret  */
  ESPCHK(0x118d2d65u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db9 @ 0x118d2db9 (185 bytes, 71 insns) */
void f_118d2db9(void) {
  FTRACE(0x118d2db9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2db9 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2dba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d2dbc cmp dword ptr [0x118dd828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dd828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2dc2 push esi */
  push32((uint32_t)(ESI));
  /* 118d2dc3 push edi */
  push32((uint32_t)(EDI));
  /* 118d2dc4 jne 0x118d2dcb */
  if (!C.zf) goto L_118d2dcb;
  /* 118d2dc6 call 0x118d45e8 */
  push32(0x118d2dcbu); f_118d45e8();
L_118d2dcb:;
  /* 118d2dcb mov esi, dword ptr [0x118dc13c] */
  ESI = (r32((uint32_t)(0x118dc13c)));
  /* 118d2dd1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118d2dd3:;
  /* 118d2dd3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d2dd5 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2dd7 je 0x118d2deb */
  if (C.zf) goto L_118d2deb;
  /* 118d2dd9 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2ddb je 0x118d2dde */
  if (C.zf) goto L_118d2dde;
  /* 118d2ddd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_118d2dde:;
  /* 118d2dde push esi */
  push32((uint32_t)(ESI));
  /* 118d2ddf call 0x118d3a90 */
  push32(0x118d2de4u); f_118d3a90();
  /* 118d2de4 pop ecx */
  ECX = (pop32());
  /* 118d2de5 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 118d2de9 jmp 0x118d2dd3 */
  goto L_118d2dd3;
L_118d2deb:;
  /* 118d2deb lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 118d2df2 push eax */
  push32((uint32_t)(EAX));
  /* 118d2df3 call 0x118d3fe6 */
  push32(0x118d2df8u); f_118d3fe6();
  /* 118d2df8 mov esi, eax */
  ESI = (EAX);
  /* 118d2dfa pop ecx */
  ECX = (pop32());
  /* 118d2dfb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2dfd mov dword ptr [0x118dc16c], esi */
  w32((uint32_t)(0x118dc16c), (ESI));
  /* 118d2e03 jne 0x118d2e0d */
  if (!C.zf) goto L_118d2e0d;
  /* 118d2e05 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d2e07 call 0x118d1faa */
  push32(0x118d2e0cu); f_118d1faa();
  /* 118d2e0c pop ecx */
  ECX = (pop32());
L_118d2e0d:;
  /* 118d2e0d mov edi, dword ptr [0x118dc13c] */
  EDI = (r32((uint32_t)(0x118dc13c)));
  /* 118d2e13 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2e15 je 0x118d2e50 */
  if (C.zf) goto L_118d2e50;
  /* 118d2e17 push ebp */
  push32((uint32_t)(EBP));
L_118d2e18:;
  /* 118d2e18 push edi */
  push32((uint32_t)(EDI));
  /* 118d2e19 call 0x118d3a90 */
  push32(0x118d2e1eu); f_118d3a90();
  /* 118d2e1e mov ebp, eax */
  EBP = (EAX);
  /* 118d2e20 pop ecx */
  ECX = (pop32());
  /* 118d2e21 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118d2e22 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2e25 je 0x118d2e49 */
  if (C.zf) goto L_118d2e49;
  /* 118d2e27 push ebp */
  push32((uint32_t)(EBP));
  /* 118d2e28 call 0x118d3fe6 */
  push32(0x118d2e2du); f_118d3fe6();
  /* 118d2e2d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2e2f pop ecx */
  ECX = (pop32());
  /* 118d2e30 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d2e32 jne 0x118d2e3c */
  if (!C.zf) goto L_118d2e3c;
  /* 118d2e34 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d2e36 call 0x118d1faa */
  push32(0x118d2e3bu); f_118d1faa();
  /* 118d2e3b pop ecx */
  ECX = (pop32());
L_118d2e3c:;
  /* 118d2e3c push edi */
  push32((uint32_t)(EDI));
  /* 118d2e3d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d2e3f call 0x118d4120 */
  push32(0x118d2e44u); f_118d4120();
  /* 118d2e44 pop ecx */
  ECX = (pop32());
  /* 118d2e45 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2e48 pop ecx */
  ECX = (pop32());
L_118d2e49:;
  /* 118d2e49 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2e4b cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2e4d jne 0x118d2e18 */
  if (!C.zf) goto L_118d2e18;
  /* 118d2e4f pop ebp */
  EBP = (pop32());
L_118d2e50:;
  /* 118d2e50 push dword ptr [0x118dc13c] */
  push32((uint32_t)(r32((uint32_t)(0x118dc13c))));
  /* 118d2e56 call 0x118d3efd */
  push32(0x118d2e5bu); f_118d3efd();
  /* 118d2e5b pop ecx */
  ECX = (pop32());
  /* 118d2e5c mov dword ptr [0x118dc13c], ebx */
  w32((uint32_t)(0x118dc13c), (EBX));
  /* 118d2e62 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 118d2e64 pop edi */
  EDI = (pop32());
  /* 118d2e65 pop esi */
  ESI = (pop32());
  /* 118d2e66 mov dword ptr [0x118dd824], 1 */
  w32((uint32_t)(0x118dd824), (0x1u));
  /* 118d2e70 pop ebx */
  EBX = (pop32());
  /* 118d2e71 ret  */
  ESPCHK(0x118d2db9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e72 @ 0x118d2e72 (153 bytes, 62 insns) */
void f_118d2e72(void) {
  FTRACE(0x118d2e72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2e72 push ebp */
  push32((uint32_t)(EBP));
  /* 118d2e73 mov ebp, esp */
  EBP = (ESP);
  /* 118d2e75 push ecx */
  push32((uint32_t)(ECX));
  /* 118d2e76 push ecx */
  push32((uint32_t)(ECX));
  /* 118d2e77 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2e78 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d2e7a cmp dword ptr [0x118dd828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dd828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2e80 push esi */
  push32((uint32_t)(ESI));
  /* 118d2e81 push edi */
  push32((uint32_t)(EDI));
  /* 118d2e82 jne 0x118d2e89 */
  if (!C.zf) goto L_118d2e89;
  /* 118d2e84 call 0x118d45e8 */
  push32(0x118d2e89u); f_118d45e8();
L_118d2e89:;
  /* 118d2e89 mov esi, 0x118dc190 */
  ESI = (0x118dc190u);
  /* 118d2e8e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118d2e93 push esi */
  push32((uint32_t)(ESI));
  /* 118d2e94 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2e95 call dword ptr [0x118d80a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a8))), 0x118d2e9bu);
  /* 118d2e9b mov eax, dword ptr [0x118dd838] */
  EAX = (r32((uint32_t)(0x118dd838)));
  /* 118d2ea0 mov dword ptr [0x118dc17c], esi */
  w32((uint32_t)(0x118dc17c), (ESI));
  /* 118d2ea6 mov edi, esi */
  EDI = (ESI);
  /* 118d2ea8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2eaa je 0x118d2eae */
  if (C.zf) goto L_118d2eae;
  /* 118d2eac mov edi, eax */
  EDI = (EAX);
L_118d2eae:;
  /* 118d2eae lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118d2eb1 push eax */
  push32((uint32_t)(EAX));
  /* 118d2eb2 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118d2eb5 push eax */
  push32((uint32_t)(EAX));
  /* 118d2eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2eb7 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2eb8 push edi */
  push32((uint32_t)(EDI));
  /* 118d2eb9 call 0x118d2f0b */
  push32(0x118d2ebeu); f_118d2f0b();
  /* 118d2ebe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d2ec1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d2ec4 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 118d2ec7 push eax */
  push32((uint32_t)(EAX));
  /* 118d2ec8 call 0x118d3fe6 */
  push32(0x118d2ecdu); f_118d3fe6();
  /* 118d2ecd mov esi, eax */
  ESI = (EAX);
  /* 118d2ecf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2ed2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d2ed4 jne 0x118d2ede */
  if (!C.zf) goto L_118d2ede;
  /* 118d2ed6 push 8 */
  push32((uint32_t)(0x8u));
  /* 118d2ed8 call 0x118d1faa */
  push32(0x118d2eddu); f_118d1faa();
  /* 118d2edd pop ecx */
  ECX = (pop32());
L_118d2ede:;
  /* 118d2ede lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118d2ee1 push eax */
  push32((uint32_t)(EAX));
  /* 118d2ee2 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118d2ee5 push eax */
  push32((uint32_t)(EAX));
  /* 118d2ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d2ee9 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 118d2eec push eax */
  push32((uint32_t)(EAX));
  /* 118d2eed push esi */
  push32((uint32_t)(ESI));
  /* 118d2eee push edi */
  push32((uint32_t)(EDI));
  /* 118d2eef call 0x118d2f0b */
  push32(0x118d2ef4u); f_118d2f0b();
  /* 118d2ef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d2ef7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2efa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2efb mov dword ptr [0x118dc164], esi */
  w32((uint32_t)(0x118dc164), (ESI));
  /* 118d2f01 pop edi */
  EDI = (pop32());
  /* 118d2f02 pop esi */
  ESI = (pop32());
  /* 118d2f03 mov dword ptr [0x118dc160], eax */
  w32((uint32_t)(0x118dc160), (EAX));
  /* 118d2f08 pop ebx */
  EBX = (pop32());
  /* 118d2f09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d2f0a ret  */
  ESPCHK(0x118d2e72u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f0b @ 0x118d2f0b (436 bytes, 187 insns) */
void f_118d2f0b(void) {
  FTRACE(0x118d2f0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d2f0b push ebp */
  push32((uint32_t)(EBP));
  /* 118d2f0c mov ebp, esp */
  EBP = (ESP);
  /* 118d2f0e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118d2f11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118d2f14 push ebx */
  push32((uint32_t)(EBX));
  /* 118d2f15 push esi */
  push32((uint32_t)(ESI));
  /* 118d2f16 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118d2f19 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118d2f1c push edi */
  push32((uint32_t)(EDI));
  /* 118d2f1d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d2f20 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 118d2f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d2f29 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d2f2b je 0x118d2f35 */
  if (C.zf) goto L_118d2f35;
  /* 118d2f2d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 118d2f2f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2f32 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_118d2f35:;
  /* 118d2f35 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2f38 jne 0x118d2f7e */
  if (!C.zf) goto L_118d2f7e;
L_118d2f3a:;
  /* 118d2f3a mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118d2f3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2f3e cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2f41 je 0x118d2f6c */
  if (C.zf) goto L_118d2f6c;
  /* 118d2f43 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d2f45 je 0x118d2f6c */
  if (C.zf) goto L_118d2f6c;
  /* 118d2f47 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 118d2f4a test byte ptr [edx + 0x118dc5e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x118dc5e1)))&(0x4u); fl_logic(_r,8); }
  /* 118d2f51 je 0x118d2f5f */
  if (C.zf) goto L_118d2f5f;
  /* 118d2f53 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d2f55 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2f57 je 0x118d2f5f */
  if (C.zf) goto L_118d2f5f;
  /* 118d2f59 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d2f5b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118d2f5d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d2f5e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118d2f5f:;
  /* 118d2f5f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d2f61 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2f63 je 0x118d2f3a */
  if (C.zf) goto L_118d2f3a;
  /* 118d2f65 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d2f67 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118d2f69 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d2f6a jmp 0x118d2f3a */
  goto L_118d2f3a;
L_118d2f6c:;
  /* 118d2f6c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d2f6e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2f70 je 0x118d2f76 */
  if (C.zf) goto L_118d2f76;
  /* 118d2f72 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 118d2f75 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118d2f76:;
  /* 118d2f76 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2f79 jne 0x118d2fc1 */
  if (!C.zf) goto L_118d2fc1;
  /* 118d2f7b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2f7c jmp 0x118d2fc1 */
  goto L_118d2fc1;
L_118d2f7e:;
  /* 118d2f7e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d2f80 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2f82 je 0x118d2f89 */
  if (C.zf) goto L_118d2f89;
  /* 118d2f84 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d2f86 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118d2f88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118d2f89:;
  /* 118d2f89 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d2f8b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2f8c movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 118d2f8f test byte ptr [ebx + 0x118dc5e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x118dc5e1)))&(0x4u); fl_logic(_r,8); }
  /* 118d2f96 je 0x118d2fa4 */
  if (C.zf) goto L_118d2fa4;
  /* 118d2f98 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d2f9a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2f9c je 0x118d2fa3 */
  if (C.zf) goto L_118d2fa3;
  /* 118d2f9e mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 118d2fa0 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 118d2fa2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118d2fa3:;
  /* 118d2fa3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118d2fa4:;
  /* 118d2fa4 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2fa7 je 0x118d2fb2 */
  if (C.zf) goto L_118d2fb2;
  /* 118d2fa9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d2fab je 0x118d2fb6 */
  if (C.zf) goto L_118d2fb6;
  /* 118d2fad cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2fb0 jne 0x118d2f7e */
  if (!C.zf) goto L_118d2f7e;
L_118d2fb2:;
  /* 118d2fb2 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d2fb4 jne 0x118d2fb9 */
  if (!C.zf) goto L_118d2fb9;
L_118d2fb6:;
  /* 118d2fb6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d2fb7 jmp 0x118d2fc1 */
  goto L_118d2fc1;
L_118d2fb9:;
  /* 118d2fb9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d2fbb je 0x118d2fc1 */
  if (C.zf) goto L_118d2fc1;
  /* 118d2fbd and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_118d2fc1:;
  /* 118d2fc1 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_118d2fc5:;
  /* 118d2fc5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2fc8 je 0x118d30ae */
  if (C.zf) goto L_118d30ae;
L_118d2fce:;
  /* 118d2fce mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d2fd0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2fd3 je 0x118d2fda */
  if (C.zf) goto L_118d2fda;
  /* 118d2fd5 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2fd8 jne 0x118d2fdd */
  if (!C.zf) goto L_118d2fdd;
L_118d2fda:;
  /* 118d2fda inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d2fdb jmp 0x118d2fce */
  goto L_118d2fce;
L_118d2fdd:;
  /* 118d2fdd cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d2fe0 je 0x118d30ae */
  if (C.zf) goto L_118d30ae;
  /* 118d2fe6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d2fe8 je 0x118d2ff2 */
  if (C.zf) goto L_118d2ff2;
  /* 118d2fea mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 118d2fec add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d2fef mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_118d2ff2:;
  /* 118d2ff2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118d2ff5 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_118d2ff7:;
  /* 118d2ff7 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 118d2ffe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118d3000:;
  /* 118d3000 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d3003 jne 0x118d3009 */
  if (!C.zf) goto L_118d3009;
  /* 118d3005 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3006 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d3007 jmp 0x118d3000 */
  goto L_118d3000;
L_118d3009:;
  /* 118d3009 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d300c jne 0x118d303a */
  if (!C.zf) goto L_118d303a;
  /* 118d300e test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118d3011 jne 0x118d3038 */
  if (!C.zf) goto L_118d3038;
  /* 118d3013 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d3015 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3018 je 0x118d3027 */
  if (C.zf) goto L_118d3027;
  /* 118d301a cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d301e lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 118d3021 jne 0x118d3027 */
  if (!C.zf) goto L_118d3027;
  /* 118d3023 mov eax, edx */
  EAX = (EDX);
  /* 118d3025 jmp 0x118d302a */
  goto L_118d302a;
L_118d3027:;
  /* 118d3027 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_118d302a:;
  /* 118d302a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d302d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d302f cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3032 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 118d3035 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_118d3038:;
  /* 118d3038 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_118d303a:;
  /* 118d303a mov edx, ebx */
  EDX = (EBX);
  /* 118d303c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d303d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d303f je 0x118d304f */
  if (C.zf) goto L_118d304f;
  /* 118d3041 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_118d3042:;
  /* 118d3042 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d3044 je 0x118d304a */
  if (C.zf) goto L_118d304a;
  /* 118d3046 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 118d3049 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118d304a:;
  /* 118d304a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d304c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d304d jne 0x118d3042 */
  if (!C.zf) goto L_118d3042;
L_118d304f:;
  /* 118d304f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d3051 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d3053 je 0x118d309f */
  if (C.zf) goto L_118d309f;
  /* 118d3055 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3059 jne 0x118d3065 */
  if (!C.zf) goto L_118d3065;
  /* 118d305b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d305e je 0x118d309f */
  if (C.zf) goto L_118d309f;
  /* 118d3060 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d3063 je 0x118d309f */
  if (C.zf) goto L_118d309f;
L_118d3065:;
  /* 118d3065 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3069 je 0x118d3099 */
  if (C.zf) goto L_118d3099;
  /* 118d306b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d306d je 0x118d3088 */
  if (C.zf) goto L_118d3088;
  /* 118d306f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 118d3072 test byte ptr [ebx + 0x118dc5e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x118dc5e1)))&(0x4u); fl_logic(_r,8); }
  /* 118d3079 je 0x118d3081 */
  if (C.zf) goto L_118d3081;
  /* 118d307b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118d307d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d307e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d307f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_118d3081:;
  /* 118d3081 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 118d3083 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118d3085 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d3086 jmp 0x118d3097 */
  goto L_118d3097;
L_118d3088:;
  /* 118d3088 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 118d308b test byte ptr [edx + 0x118dc5e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x118dc5e1)))&(0x4u); fl_logic(_r,8); }
  /* 118d3092 je 0x118d3097 */
  if (C.zf) goto L_118d3097;
  /* 118d3094 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3095 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_118d3097:;
  /* 118d3097 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_118d3099:;
  /* 118d3099 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d309a jmp 0x118d2ff7 */
  goto L_118d2ff7;
L_118d309f:;
  /* 118d309f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d30a1 je 0x118d30a7 */
  if (C.zf) goto L_118d30a7;
  /* 118d30a3 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 118d30a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118d30a7:;
  /* 118d30a7 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 118d30a9 jmp 0x118d2fc5 */
  goto L_118d2fc5;
L_118d30ae:;
  /* 118d30ae test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d30b0 je 0x118d30b5 */
  if (C.zf) goto L_118d30b5;
  /* 118d30b2 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_118d30b5:;
  /* 118d30b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118d30b8 pop edi */
  EDI = (pop32());
  /* 118d30b9 pop esi */
  ESI = (pop32());
  /* 118d30ba pop ebx */
  EBX = (pop32());
  /* 118d30bb inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 118d30bd pop ebp */
  EBP = (pop32());
  /* 118d30be ret  */
  ESPCHK(0x118d2f0bu, _esp0);
  ESP += 4; return;
}

/* FUN_100030bf @ 0x118d30bf (306 bytes, 132 insns) */
void f_118d30bf(void) {
  FTRACE(0x118d30bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d30bf push ecx */
  push32((uint32_t)(ECX));
  /* 118d30c0 push ecx */
  push32((uint32_t)(ECX));
  /* 118d30c1 mov eax, dword ptr [0x118dc294] */
  EAX = (r32((uint32_t)(0x118dc294)));
  /* 118d30c6 push ebx */
  push32((uint32_t)(EBX));
  /* 118d30c7 push ebp */
  push32((uint32_t)(EBP));
  /* 118d30c8 mov ebp, dword ptr [0x118d80c0] */
  EBP = (r32((uint32_t)(0x118d80c0)));
  /* 118d30ce push esi */
  push32((uint32_t)(ESI));
  /* 118d30cf push edi */
  push32((uint32_t)(EDI));
  /* 118d30d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d30d2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d30d4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d30d6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d30d8 jne 0x118d310d */
  if (!C.zf) goto L_118d310d;
  /* 118d30da call ebp */
  call_ind((uint32_t)(EBP), 0x118d30dcu);
  /* 118d30dc mov esi, eax */
  ESI = (EAX);
  /* 118d30de cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d30e0 je 0x118d30ee */
  if (C.zf) goto L_118d30ee;
  /* 118d30e2 mov dword ptr [0x118dc294], 1 */
  w32((uint32_t)(0x118dc294), (0x1u));
  /* 118d30ec jmp 0x118d3116 */
  goto L_118d3116;
L_118d30ee:;
  /* 118d30ee call dword ptr [0x118d80d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80d4))), 0x118d30f4u);
  /* 118d30f4 mov edi, eax */
  EDI = (EAX);
  /* 118d30f6 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d30f8 je 0x118d31e8 */
  if (C.zf) goto L_118d31e8;
  /* 118d30fe mov dword ptr [0x118dc294], 2 */
  w32((uint32_t)(0x118dc294), (0x2u));
  /* 118d3108 jmp 0x118d319c */
  goto L_118d319c;
L_118d310d:;
  /* 118d310d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3110 jne 0x118d3197 */
  if (!C.zf) goto L_118d3197;
L_118d3116:;
  /* 118d3116 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3118 jne 0x118d3126 */
  if (!C.zf) goto L_118d3126;
  /* 118d311a call ebp */
  call_ind((uint32_t)(EBP), 0x118d311cu);
  /* 118d311c mov esi, eax */
  ESI = (EAX);
  /* 118d311e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3120 je 0x118d31e8 */
  if (C.zf) goto L_118d31e8;
L_118d3126:;
  /* 118d3126 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d3129 mov eax, esi */
  EAX = (ESI);
  /* 118d312b je 0x118d313b */
  if (C.zf) goto L_118d313b;
L_118d312d:;
  /* 118d312d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d312e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d312f cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d3132 jne 0x118d312d */
  if (!C.zf) goto L_118d312d;
  /* 118d3134 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3135 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3136 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d3139 jne 0x118d312d */
  if (!C.zf) goto L_118d312d;
L_118d313b:;
  /* 118d313b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d313d mov edi, dword ptr [0x118d80d0] */
  EDI = (r32((uint32_t)(0x118d80d0)));
  /* 118d3143 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118d3145 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3146 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3147 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3148 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3149 push ebx */
  push32((uint32_t)(EBX));
  /* 118d314a push eax */
  push32((uint32_t)(EAX));
  /* 118d314b push esi */
  push32((uint32_t)(ESI));
  /* 118d314c push ebx */
  push32((uint32_t)(EBX));
  /* 118d314d push ebx */
  push32((uint32_t)(EBX));
  /* 118d314e mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 118d3152 call edi */
  call_ind((uint32_t)(EDI), 0x118d3154u);
  /* 118d3154 mov ebp, eax */
  EBP = (EAX);
  /* 118d3156 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3158 je 0x118d318c */
  if (C.zf) goto L_118d318c;
  /* 118d315a push ebp */
  push32((uint32_t)(EBP));
  /* 118d315b call 0x118d3fe6 */
  push32(0x118d3160u); f_118d3fe6();
  /* 118d3160 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3162 pop ecx */
  ECX = (pop32());
  /* 118d3163 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118d3167 je 0x118d318c */
  if (C.zf) goto L_118d318c;
  /* 118d3169 push ebx */
  push32((uint32_t)(EBX));
  /* 118d316a push ebx */
  push32((uint32_t)(EBX));
  /* 118d316b push ebp */
  push32((uint32_t)(EBP));
  /* 118d316c push eax */
  push32((uint32_t)(EAX));
  /* 118d316d push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 118d3171 push esi */
  push32((uint32_t)(ESI));
  /* 118d3172 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3173 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3174 call edi */
  call_ind((uint32_t)(EDI), 0x118d3176u);
  /* 118d3176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3178 jne 0x118d3188 */
  if (!C.zf) goto L_118d3188;
  /* 118d317a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118d317e call 0x118d3efd */
  push32(0x118d3183u); f_118d3efd();
  /* 118d3183 pop ecx */
  ECX = (pop32());
  /* 118d3184 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_118d3188:;
  /* 118d3188 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_118d318c:;
  /* 118d318c push esi */
  push32((uint32_t)(ESI));
  /* 118d318d call dword ptr [0x118d80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80cc))), 0x118d3193u);
  /* 118d3193 mov eax, ebx */
  EAX = (EBX);
  /* 118d3195 jmp 0x118d31ea */
  goto L_118d31ea;
L_118d3197:;
  /* 118d3197 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d319a jne 0x118d31e8 */
  if (!C.zf) goto L_118d31e8;
L_118d319c:;
  /* 118d319c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d319e jne 0x118d31ac */
  if (!C.zf) goto L_118d31ac;
  /* 118d31a0 call dword ptr [0x118d80d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80d4))), 0x118d31a6u);
  /* 118d31a6 mov edi, eax */
  EDI = (EAX);
  /* 118d31a8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d31aa je 0x118d31e8 */
  if (C.zf) goto L_118d31e8;
L_118d31ac:;
  /* 118d31ac cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d31ae mov eax, edi */
  EAX = (EDI);
  /* 118d31b0 je 0x118d31bc */
  if (C.zf) goto L_118d31bc;
L_118d31b2:;
  /* 118d31b2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d31b3 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d31b5 jne 0x118d31b2 */
  if (!C.zf) goto L_118d31b2;
  /* 118d31b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d31b8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d31ba jne 0x118d31b2 */
  if (!C.zf) goto L_118d31b2;
L_118d31bc:;
  /* 118d31bc sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d31be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d31bf mov ebp, eax */
  EBP = (EAX);
  /* 118d31c1 push ebp */
  push32((uint32_t)(EBP));
  /* 118d31c2 call 0x118d3fe6 */
  push32(0x118d31c7u); f_118d3fe6();
  /* 118d31c7 mov esi, eax */
  ESI = (EAX);
  /* 118d31c9 pop ecx */
  ECX = (pop32());
  /* 118d31ca cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d31cc jne 0x118d31d2 */
  if (!C.zf) goto L_118d31d2;
  /* 118d31ce xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d31d0 jmp 0x118d31dd */
  goto L_118d31dd;
L_118d31d2:;
  /* 118d31d2 push ebp */
  push32((uint32_t)(EBP));
  /* 118d31d3 push edi */
  push32((uint32_t)(EDI));
  /* 118d31d4 push esi */
  push32((uint32_t)(ESI));
  /* 118d31d5 call 0x118d4610 */
  push32(0x118d31dau); f_118d4610();
  /* 118d31da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d31dd:;
  /* 118d31dd push edi */
  push32((uint32_t)(EDI));
  /* 118d31de call dword ptr [0x118d80c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80c8))), 0x118d31e4u);
  /* 118d31e4 mov eax, esi */
  EAX = (ESI);
  /* 118d31e6 jmp 0x118d31ea */
  goto L_118d31ea;
L_118d31e8:;
  /* 118d31e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d31ea:;
  /* 118d31ea pop edi */
  EDI = (pop32());
  /* 118d31eb pop esi */
  ESI = (pop32());
  /* 118d31ec pop ebp */
  EBP = (pop32());
  /* 118d31ed pop ebx */
  EBX = (pop32());
  /* 118d31ee pop ecx */
  ECX = (pop32());
  /* 118d31ef pop ecx */
  ECX = (pop32());
  /* 118d31f0 ret  */
  ESPCHK(0x118d30bfu, _esp0);
  ESP += 4; return;
}

/* FUN_100031f1 @ 0x118d31f1 (45 bytes, 17 insns) */
void f_118d31f1(void) {
  FTRACE(0x118d31f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d31f1 push esi */
  push32((uint32_t)(ESI));
  /* 118d31f2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d31f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d31f8 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118d31fb call dword ptr [0x118d80c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80c4))), 0x118d3201u);
  /* 118d3201 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d3206 jne 0x118d321c */
  if (!C.zf) goto L_118d321c;
  /* 118d3208 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 118d320b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d320d je 0x118d321c */
  if (C.zf) goto L_118d321c;
  /* 118d320f add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3211 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 118d3214 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 118d3216 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 118d3219 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_118d321c:;
  /* 118d321c pop esi */
  ESI = (pop32());
  /* 118d321d ret  */
  ESPCHK(0x118d31f1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000321e @ 0x118d321e (328 bytes, 115 insns) */
void f_118d321e(void) {
  FTRACE(0x118d321eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d321e push ebp */
  push32((uint32_t)(EBP));
  /* 118d321f mov ebp, esp */
  EBP = (ESP);
  /* 118d3221 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 118d3226 call 0x118d4d00 */
  push32(0x118d322bu); f_118d4d00();
  /* 118d322b lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 118d3231 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3232 push eax */
  push32((uint32_t)(EAX));
  /* 118d3233 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 118d323d call dword ptr [0x118d8074] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8074))), 0x118d3243u);
  /* 118d3243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3245 je 0x118d3261 */
  if (C.zf) goto L_118d3261;
  /* 118d3247 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d324e jne 0x118d3261 */
  if (!C.zf) goto L_118d3261;
  /* 118d3250 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3257 jb 0x118d3261 */
  if (C.cf) goto L_118d3261;
  /* 118d3259 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d325b pop eax */
  EAX = (pop32());
  /* 118d325c jmp 0x118d3363 */
  goto L_118d3363;
L_118d3261:;
  /* 118d3261 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118d3267 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 118d326c push eax */
  push32((uint32_t)(EAX));
  /* 118d326d push 0x118d8224 */
  push32((uint32_t)(0x118d8224u));
  /* 118d3272 call dword ptr [0x118d8078] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8078))), 0x118d3278u);
  /* 118d3278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d327a je 0x118d3350 */
  if (C.zf) goto L_118d3350;
  /* 118d3280 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d3282 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 118d3288 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d328e je 0x118d32a3 */
  if (C.zf) goto L_118d32a3;
L_118d3290:;
  /* 118d3290 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118d3292 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d3294 jl 0x118d329e */
  if ((C.sf!=C.of)) goto L_118d329e;
  /* 118d3296 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d3298 jg 0x118d329e */
  if ((!C.zf&&C.sf==C.of)) goto L_118d329e;
  /* 118d329a sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d329c mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_118d329e:;
  /* 118d329e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d329f cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d32a1 jne 0x118d3290 */
  if (!C.zf) goto L_118d3290;
L_118d32a3:;
  /* 118d32a3 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118d32a9 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118d32ab push eax */
  push32((uint32_t)(EAX));
  /* 118d32ac push 0x118d820c */
  push32((uint32_t)(0x118d820cu));
  /* 118d32b1 call 0x118d4cc0 */
  push32(0x118d32b6u); f_118d4cc0();
  /* 118d32b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d32b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d32bb jne 0x118d32c5 */
  if (!C.zf) goto L_118d32c5;
  /* 118d32bd lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118d32c3 jmp 0x118d330e */
  goto L_118d330e;
L_118d32c5:;
  /* 118d32c5 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 118d32cb push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118d32d0 push eax */
  push32((uint32_t)(EAX));
  /* 118d32d1 push ebx */
  push32((uint32_t)(EBX));
  /* 118d32d2 call dword ptr [0x118d80a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a8))), 0x118d32d8u);
  /* 118d32d8 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d32de lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 118d32e4 je 0x118d32f9 */
  if (C.zf) goto L_118d32f9;
L_118d32e6:;
  /* 118d32e6 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118d32e8 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d32ea jl 0x118d32f4 */
  if ((C.sf!=C.of)) goto L_118d32f4;
  /* 118d32ec cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d32ee jg 0x118d32f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d32f4;
  /* 118d32f0 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d32f2 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_118d32f4:;
  /* 118d32f4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d32f5 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d32f7 jne 0x118d32e6 */
  if (!C.zf) goto L_118d32e6;
L_118d32f9:;
  /* 118d32f9 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 118d32ff push eax */
  push32((uint32_t)(EAX));
  /* 118d3300 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 118d3306 push eax */
  push32((uint32_t)(EAX));
  /* 118d3307 call 0x118d4c40 */
  push32(0x118d330cu); f_118d4c40();
  /* 118d330c pop ecx */
  ECX = (pop32());
  /* 118d330d pop ecx */
  ECX = (pop32());
L_118d330e:;
  /* 118d330e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3310 je 0x118d3350 */
  if (C.zf) goto L_118d3350;
  /* 118d3312 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 118d3314 push eax */
  push32((uint32_t)(EAX));
  /* 118d3315 call 0x118d4b80 */
  push32(0x118d331au); f_118d4b80();
  /* 118d331a pop ecx */
  ECX = (pop32());
  /* 118d331b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d331d pop ecx */
  ECX = (pop32());
  /* 118d331e je 0x118d3350 */
  if (C.zf) goto L_118d3350;
  /* 118d3320 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3321 mov ecx, eax */
  ECX = (EAX);
  /* 118d3323 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d3325 je 0x118d3335 */
  if (C.zf) goto L_118d3335;
L_118d3327:;
  /* 118d3327 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d332a jne 0x118d3330 */
  if (!C.zf) goto L_118d3330;
  /* 118d332c mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 118d332e jmp 0x118d3331 */
  goto L_118d3331;
L_118d3330:;
  /* 118d3330 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_118d3331:;
  /* 118d3331 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d3333 jne 0x118d3327 */
  if (!C.zf) goto L_118d3327;
L_118d3335:;
  /* 118d3335 push 0xa */
  push32((uint32_t)(0xau));
  /* 118d3337 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3338 push eax */
  push32((uint32_t)(EAX));
  /* 118d3339 call 0x118d4945 */
  push32(0x118d333eu); f_118d4945();
  /* 118d333e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3341 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3344 je 0x118d3363 */
  if (C.zf) goto L_118d3363;
  /* 118d3346 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3349 je 0x118d3363 */
  if (C.zf) goto L_118d3363;
  /* 118d334b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d334e je 0x118d3363 */
  if (C.zf) goto L_118d3363;
L_118d3350:;
  /* 118d3350 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118d3353 push eax */
  push32((uint32_t)(EAX));
  /* 118d3354 call 0x118d31f1 */
  push32(0x118d3359u); f_118d31f1();
  /* 118d3359 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d335d pop ecx */
  ECX = (pop32());
  /* 118d335e sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3360 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118d3363:;
  /* 118d3363 pop ebx */
  EBX = (pop32());
  /* 118d3364 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d3365 ret  */
  ESPCHK(0x118d321eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003366 @ 0x118d3366 (93 bytes, 30 insns) */
void f_118d3366(void) {
  FTRACE(0x118d3366u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d3368 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d336a cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d336e push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118d3373 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118d3376 push eax */
  push32((uint32_t)(EAX));
  /* 118d3377 call dword ptr [0x118d806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d806c))), 0x118d337du);
  /* 118d337d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d337f mov dword ptr [0x118dd704], eax */
  w32((uint32_t)(0x118dd704), (EAX));
  /* 118d3384 je 0x118d33bc */
  if (C.zf) goto L_118d33bc;
  /* 118d3386 call 0x118d321e */
  push32(0x118d338bu); f_118d321e();
  /* 118d338b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d338e mov dword ptr [0x118dd708], eax */
  w32((uint32_t)(0x118dd708), (EAX));
  /* 118d3393 jne 0x118d33a2 */
  if (!C.zf) goto L_118d33a2;
  /* 118d3395 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 118d339a call 0x118d4d2f */
  push32(0x118d339fu); f_118d4d2f();
  /* 118d339f pop ecx */
  ECX = (pop32());
  /* 118d33a0 jmp 0x118d33ac */
  goto L_118d33ac;
L_118d33a2:;
  /* 118d33a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d33a5 jne 0x118d33bf */
  if (!C.zf) goto L_118d33bf;
  /* 118d33a7 call 0x118d5580 */
  push32(0x118d33acu); f_118d5580();
L_118d33ac:;
  /* 118d33ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d33ae jne 0x118d33bf */
  if (!C.zf) goto L_118d33bf;
  /* 118d33b0 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d33b6 call dword ptr [0x118d807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d807c))), 0x118d33bcu);
L_118d33bc:;
  /* 118d33bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d33be ret  */
  ESPCHK(0x118d3366u, _esp0);
  ESP += 4; return;
L_118d33bf:;
  /* 118d33bf push 1 */
  push32((uint32_t)(0x1u));
  /* 118d33c1 pop eax */
  EAX = (pop32());
  /* 118d33c2 ret  */
  ESPCHK(0x118d3366u, _esp0);
  ESP += 4; return;
}

/* FUN_100033c3 @ 0x118d33c3 (168 bytes, 56 insns) */
void f_118d33c3(void) {
  FTRACE(0x118d33c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d33c3 mov eax, dword ptr [0x118dd708] */
  EAX = (r32((uint32_t)(0x118dd708)));
  /* 118d33c8 push esi */
  push32((uint32_t)(ESI));
  /* 118d33c9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d33cc push edi */
  push32((uint32_t)(EDI));
  /* 118d33cd jne 0x118d3435 */
  if (!C.zf) goto L_118d3435;
  /* 118d33cf push ebx */
  push32((uint32_t)(EBX));
  /* 118d33d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d33d2 cmp dword ptr [0x118dc4a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dc4a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d33d8 push ebp */
  push32((uint32_t)(EBP));
  /* 118d33d9 mov ebp, dword ptr [0x118d8070] */
  EBP = (r32((uint32_t)(0x118d8070)));
  /* 118d33df jle 0x118d3421 */
  if ((C.zf||C.sf!=C.of)) goto L_118d3421;
  /* 118d33e1 mov eax, dword ptr [0x118dc4ac] */
  EAX = (r32((uint32_t)(0x118dc4ac)));
  /* 118d33e6 mov edi, dword ptr [0x118d8068] */
  EDI = (r32((uint32_t)(0x118d8068)));
  /* 118d33ec lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_118d33ef:;
  /* 118d33ef push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 118d33f4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 118d33f9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d33fb call edi */
  call_ind((uint32_t)(EDI), 0x118d33fdu);
  /* 118d33fd push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118d3402 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d3404 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d3406 call edi */
  call_ind((uint32_t)(EDI), 0x118d3408u);
  /* 118d3408 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 118d340b push 0 */
  push32((uint32_t)(0x0u));
  /* 118d340d push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d3413 call ebp */
  call_ind((uint32_t)(EBP), 0x118d3415u);
  /* 118d3415 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3418 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d3419 cmp ebx, dword ptr [0x118dc4a8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x118dc4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d341f jl 0x118d33ef */
  if ((C.sf!=C.of)) goto L_118d33ef;
L_118d3421:;
  /* 118d3421 push dword ptr [0x118dc4ac] */
  push32((uint32_t)(r32((uint32_t)(0x118dc4ac))));
  /* 118d3427 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d3429 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d342f call ebp */
  call_ind((uint32_t)(EBP), 0x118d3431u);
  /* 118d3431 pop ebp */
  EBP = (pop32());
  /* 118d3432 pop ebx */
  EBX = (pop32());
  /* 118d3433 jmp 0x118d345c */
  goto L_118d345c;
L_118d3435:;
  /* 118d3435 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3438 jne 0x118d345c */
  if (!C.zf) goto L_118d345c;
  /* 118d343a mov edi, 0x118d9a90 */
  EDI = (0x118d9a90u);
  /* 118d343f mov esi, edi */
  ESI = (EDI);
L_118d3441:;
  /* 118d3441 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118d3444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3446 je 0x118d3456 */
  if (C.zf) goto L_118d3456;
  /* 118d3448 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118d344d push 0 */
  push32((uint32_t)(0x0u));
  /* 118d344f push eax */
  push32((uint32_t)(EAX));
  /* 118d3450 call dword ptr [0x118d8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8068))), 0x118d3456u);
L_118d3456:;
  /* 118d3456 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 118d3458 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d345a jne 0x118d3441 */
  if (!C.zf) goto L_118d3441;
L_118d345c:;
  /* 118d345c push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d3462 call dword ptr [0x118d807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d807c))), 0x118d3468u);
  /* 118d3468 pop edi */
  EDI = (pop32());
  /* 118d3469 pop esi */
  ESI = (pop32());
  /* 118d346a ret  */
  ESPCHK(0x118d33c3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000346b @ 0x118d346b (57 bytes, 18 insns) */
void f_118d346b(void) {
  FTRACE(0x118d346bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d346b mov eax, dword ptr [0x118dc144] */
  EAX = (r32((uint32_t)(0x118dc144)));
  /* 118d3470 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3473 je 0x118d3482 */
  if (C.zf) goto L_118d3482;
  /* 118d3475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3477 jne 0x118d34a3 */
  if (!C.zf) goto L_118d34a3;
  /* 118d3479 cmp dword ptr [0x118dc148], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dc148))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3480 jne 0x118d34a3 */
  if (!C.zf) goto L_118d34a3;
L_118d3482:;
  /* 118d3482 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 118d3487 call 0x118d34a4 */
  push32(0x118d348cu); f_118d34a4();
  /* 118d348c mov eax, dword ptr [0x118dc298] */
  EAX = (r32((uint32_t)(0x118dc298)));
  /* 118d3491 pop ecx */
  ECX = (pop32());
  /* 118d3492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3494 je 0x118d3498 */
  if (C.zf) goto L_118d3498;
  /* 118d3496 call eax */
  call_ind((uint32_t)(EAX), 0x118d3498u);
L_118d3498:;
  /* 118d3498 push 0xff */
  push32((uint32_t)(0xffu));
  /* 118d349d call 0x118d34a4 */
  push32(0x118d34a2u); f_118d34a4();
  /* 118d34a2 pop ecx */
  ECX = (pop32());
L_118d34a3:;
  /* 118d34a3 ret  */
  ESPCHK(0x118d346bu, _esp0);
  ESP += 4; return;
}

/* FUN_100034a4 @ 0x118d34a4 (339 bytes, 100 insns) */
void f_118d34a4(void) {
  FTRACE(0x118d34a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d34a4 push ebp */
  push32((uint32_t)(EBP));
  /* 118d34a5 mov ebp, esp */
  EBP = (ESP);
  /* 118d34a7 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d34ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d34b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d34b2 mov eax, 0x118d9300 */
  EAX = (0x118d9300u);
L_118d34b7:;
  /* 118d34b7 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d34b9 je 0x118d34c6 */
  if (C.zf) goto L_118d34c6;
  /* 118d34bb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d34be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d34bf cmp eax, 0x118d9390 */
  { uint32_t _a=(EAX),_b=(0x118d9390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d34c4 jl 0x118d34b7 */
  if ((C.sf!=C.of)) goto L_118d34b7;
L_118d34c6:;
  /* 118d34c6 push esi */
  push32((uint32_t)(ESI));
  /* 118d34c7 mov esi, ecx */
  ESI = (ECX);
  /* 118d34c9 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 118d34cc cmp edx, dword ptr [esi + 0x118d9300] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x118d9300))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d34d2 jne 0x118d35f4 */
  if (!C.zf) goto L_118d35f4;
  /* 118d34d8 mov eax, dword ptr [0x118dc144] */
  EAX = (r32((uint32_t)(0x118dc144)));
  /* 118d34dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d34e0 je 0x118d35ce */
  if (C.zf) goto L_118d35ce;
  /* 118d34e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d34e8 jne 0x118d34f7 */
  if (!C.zf) goto L_118d34f7;
  /* 118d34ea cmp dword ptr [0x118dc148], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dc148))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d34f1 je 0x118d35ce */
  if (C.zf) goto L_118d35ce;
L_118d34f7:;
  /* 118d34f7 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d34fd je 0x118d35f4 */
  if (C.zf) goto L_118d35f4;
  /* 118d3503 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118d3509 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118d350e push eax */
  push32((uint32_t)(EAX));
  /* 118d350f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d3511 call dword ptr [0x118d80a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a8))), 0x118d3517u);
  /* 118d3517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3519 jne 0x118d352e */
  if (!C.zf) goto L_118d352e;
  /* 118d351b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118d3521 push 0x118d8514 */
  push32((uint32_t)(0x118d8514u));
  /* 118d3526 push eax */
  push32((uint32_t)(EAX));
  /* 118d3527 call 0x118d4120 */
  push32(0x118d352cu); f_118d4120();
  /* 118d352c pop ecx */
  ECX = (pop32());
  /* 118d352d pop ecx */
  ECX = (pop32());
L_118d352e:;
  /* 118d352e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118d3534 push edi */
  push32((uint32_t)(EDI));
  /* 118d3535 push eax */
  push32((uint32_t)(EAX));
  /* 118d3536 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 118d353c call 0x118d3a90 */
  push32(0x118d3541u); f_118d3a90();
  /* 118d3541 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d3542 pop ecx */
  ECX = (pop32());
  /* 118d3543 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3546 jbe 0x118d3571 */
  if ((C.cf||C.zf)) goto L_118d3571;
  /* 118d3548 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118d354e push eax */
  push32((uint32_t)(EAX));
  /* 118d354f call 0x118d3a90 */
  push32(0x118d3554u); f_118d3a90();
  /* 118d3554 mov edi, eax */
  EDI = (EAX);
  /* 118d3556 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118d355c sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d355f push 3 */
  push32((uint32_t)(0x3u));
  /* 118d3561 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3563 push 0x118d8510 */
  push32((uint32_t)(0x118d8510u));
  /* 118d3568 push edi */
  push32((uint32_t)(EDI));
  /* 118d3569 call 0x118d5c30 */
  push32(0x118d356eu); f_118d5c30();
  /* 118d356e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d3571:;
  /* 118d3571 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118d3577 push 0x118d84f4 */
  push32((uint32_t)(0x118d84f4u));
  /* 118d357c push eax */
  push32((uint32_t)(EAX));
  /* 118d357d call 0x118d4120 */
  push32(0x118d3582u); f_118d4120();
  /* 118d3582 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118d3588 push edi */
  push32((uint32_t)(EDI));
  /* 118d3589 push eax */
  push32((uint32_t)(EAX));
  /* 118d358a call 0x118d4130 */
  push32(0x118d358fu); f_118d4130();
  /* 118d358f lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118d3595 push 0x118d84f0 */
  push32((uint32_t)(0x118d84f0u));
  /* 118d359a push eax */
  push32((uint32_t)(EAX));
  /* 118d359b call 0x118d4130 */
  push32(0x118d35a0u); f_118d4130();
  /* 118d35a0 push dword ptr [esi + 0x118d9304] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x118d9304))));
  /* 118d35a6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118d35ac push eax */
  push32((uint32_t)(EAX));
  /* 118d35ad call 0x118d4130 */
  push32(0x118d35b2u); f_118d4130();
  /* 118d35b2 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 118d35b7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118d35bd push 0x118d84c8 */
  push32((uint32_t)(0x118d84c8u));
  /* 118d35c2 push eax */
  push32((uint32_t)(EAX));
  /* 118d35c3 call 0x118d5ba4 */
  push32(0x118d35c8u); f_118d5ba4();
  /* 118d35c8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d35cb pop edi */
  EDI = (pop32());
  /* 118d35cc jmp 0x118d35f4 */
  goto L_118d35f4;
L_118d35ce:;
  /* 118d35ce lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118d35d1 lea esi, [esi + 0x118d9304] */
  ESI = ((uint32_t)(ESI + 0x118d9304));
  /* 118d35d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d35d9 push eax */
  push32((uint32_t)(EAX));
  /* 118d35da push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d35dc call 0x118d3a90 */
  push32(0x118d35e1u); f_118d3a90();
  /* 118d35e1 pop ecx */
  ECX = (pop32());
  /* 118d35e2 push eax */
  push32((uint32_t)(EAX));
  /* 118d35e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d35e5 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 118d35e7 call dword ptr [0x118d80b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80b4))), 0x118d35edu);
  /* 118d35ed push eax */
  push32((uint32_t)(EAX));
  /* 118d35ee call dword ptr [0x118d8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8060))), 0x118d35f4u);
L_118d35f4:;
  /* 118d35f4 pop esi */
  ESI = (pop32());
  /* 118d35f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d35f6 ret  */
  ESPCHK(0x118d34a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f7 @ 0x118d35f7 (101 bytes, 34 insns) */
void f_118d35f7(void) {
  FTRACE(0x118d35f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d35f7 push esi */
  push32((uint32_t)(ESI));
  /* 118d35f8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d35fc cmp esi, dword ptr [0x118dd820] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3602 jae 0x118d3644 */
  if (!C.cf) goto L_118d3644;
  /* 118d3604 mov ecx, esi */
  ECX = (ESI);
  /* 118d3606 mov eax, esi */
  EAX = (ESI);
  /* 118d3608 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d360b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d360e mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d3615 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d3618 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d361d je 0x118d3644 */
  if (C.zf) goto L_118d3644;
  /* 118d361f push edi */
  push32((uint32_t)(EDI));
  /* 118d3620 push esi */
  push32((uint32_t)(ESI));
  /* 118d3621 call 0x118d5e74 */
  push32(0x118d3626u); f_118d5e74();
  /* 118d3626 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d362a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d362e push esi */
  push32((uint32_t)(ESI));
  /* 118d362f call 0x118d365c */
  push32(0x118d3634u); f_118d365c();
  /* 118d3634 push esi */
  push32((uint32_t)(ESI));
  /* 118d3635 mov edi, eax */
  EDI = (EAX);
  /* 118d3637 call 0x118d5ed3 */
  push32(0x118d363cu); f_118d5ed3();
  /* 118d363c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d363f mov eax, edi */
  EAX = (EDI);
  /* 118d3641 pop edi */
  EDI = (pop32());
  /* 118d3642 pop esi */
  ESI = (pop32());
  /* 118d3643 ret  */
  ESPCHK(0x118d35f7u, _esp0);
  ESP += 4; return;
L_118d3644:;
  /* 118d3644 call 0x118d5da1 */
  push32(0x118d3649u); f_118d5da1();
  /* 118d3649 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d364f call 0x118d5daa */
  push32(0x118d3654u); f_118d5daa();
  /* 118d3654 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d3657 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d365a pop esi */
  ESI = (pop32());
  /* 118d365b ret  */
  ESPCHK(0x118d35f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000365c @ 0x118d365c (115 bytes, 41 insns) */
void f_118d365c(void) {
  FTRACE(0x118d365cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d365c push esi */
  push32((uint32_t)(ESI));
  /* 118d365d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d3661 push edi */
  push32((uint32_t)(EDI));
  /* 118d3662 push esi */
  push32((uint32_t)(ESI));
  /* 118d3663 call 0x118d5e32 */
  push32(0x118d3668u); f_118d5e32();
  /* 118d3668 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d366b pop ecx */
  ECX = (pop32());
  /* 118d366c jne 0x118d367b */
  if (!C.zf) goto L_118d367b;
  /* 118d366e call 0x118d5da1 */
  push32(0x118d3673u); f_118d5da1();
  /* 118d3673 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d3679 jmp 0x118d36a8 */
  goto L_118d36a8;
L_118d367b:;
  /* 118d367b push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 118d367f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d3681 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d3685 push eax */
  push32((uint32_t)(EAX));
  /* 118d3686 call dword ptr [0x118d805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d805c))), 0x118d368cu);
  /* 118d368c mov edi, eax */
  EDI = (EAX);
  /* 118d368e cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3691 jne 0x118d369b */
  if (!C.zf) goto L_118d369b;
  /* 118d3693 call dword ptr [0x118d80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a0))), 0x118d3699u);
  /* 118d3699 jmp 0x118d369d */
  goto L_118d369d;
L_118d369b:;
  /* 118d369b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d369d:;
  /* 118d369d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d369f je 0x118d36ad */
  if (C.zf) goto L_118d36ad;
  /* 118d36a1 push eax */
  push32((uint32_t)(EAX));
  /* 118d36a2 call 0x118d5d2e */
  push32(0x118d36a7u); f_118d5d2e();
  /* 118d36a7 pop ecx */
  ECX = (pop32());
L_118d36a8:;
  /* 118d36a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d36ab jmp 0x118d36cc */
  goto L_118d36cc;
L_118d36ad:;
  /* 118d36ad mov ecx, esi */
  ECX = (ESI);
  /* 118d36af and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 118d36b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d36b5 mov eax, esi */
  EAX = (ESI);
  /* 118d36b7 mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d36be lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d36c1 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 118d36c6 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 118d36ca mov eax, edi */
  EAX = (EDI);
L_118d36cc:;
  /* 118d36cc pop edi */
  EDI = (pop32());
  /* 118d36cd pop esi */
  ESI = (pop32());
  /* 118d36ce ret  */
  ESPCHK(0x118d365cu, _esp0);
  ESP += 4; return;
}

/* FUN_100036cf @ 0x118d36cf (101 bytes, 34 insns) */
void f_118d36cf(void) {
  FTRACE(0x118d36cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d36cf push esi */
  push32((uint32_t)(ESI));
  /* 118d36d0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d36d4 cmp esi, dword ptr [0x118dd820] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d36da jae 0x118d371c */
  if (!C.cf) goto L_118d371c;
  /* 118d36dc mov ecx, esi */
  ECX = (ESI);
  /* 118d36de mov eax, esi */
  EAX = (ESI);
  /* 118d36e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d36e3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d36e6 mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d36ed lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d36f0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118d36f5 je 0x118d371c */
  if (C.zf) goto L_118d371c;
  /* 118d36f7 push edi */
  push32((uint32_t)(EDI));
  /* 118d36f8 push esi */
  push32((uint32_t)(ESI));
  /* 118d36f9 call 0x118d5e74 */
  push32(0x118d36feu); f_118d5e74();
  /* 118d36fe push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d3702 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d3706 push esi */
  push32((uint32_t)(ESI));
  /* 118d3707 call 0x118d3734 */
  push32(0x118d370cu); f_118d3734();
  /* 118d370c push esi */
  push32((uint32_t)(ESI));
  /* 118d370d mov edi, eax */
  EDI = (EAX);
  /* 118d370f call 0x118d5ed3 */
  push32(0x118d3714u); f_118d5ed3();
  /* 118d3714 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3717 mov eax, edi */
  EAX = (EDI);
  /* 118d3719 pop edi */
  EDI = (pop32());
  /* 118d371a pop esi */
  ESI = (pop32());
  /* 118d371b ret  */
  ESPCHK(0x118d36cfu, _esp0);
  ESP += 4; return;
L_118d371c:;
  /* 118d371c call 0x118d5da1 */
  push32(0x118d3721u); f_118d5da1();
  /* 118d3721 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d3727 call 0x118d5daa */
  push32(0x118d372cu); f_118d5daa();
  /* 118d372c and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d372f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d3732 pop esi */
  ESI = (pop32());
  /* 118d3733 ret  */
  ESPCHK(0x118d36cfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003734 @ 0x118d3734 (395 bytes, 135 insns) */
void f_118d3734(void) {
  FTRACE(0x118d3734u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3734 push ebp */
  push32((uint32_t)(EBP));
  /* 118d3735 mov ebp, esp */
  EBP = (ESP);
  /* 118d3737 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d373d push ebx */
  push32((uint32_t)(EBX));
  /* 118d373e push esi */
  push32((uint32_t)(ESI));
  /* 118d373f push edi */
  push32((uint32_t)(EDI));
  /* 118d3740 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d3742 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3745 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 118d3748 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 118d374b jne 0x118d3754 */
  if (!C.zf) goto L_118d3754;
L_118d374d:;
  /* 118d374d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d374f jmp 0x118d38ba */
  goto L_118d38ba;
L_118d3754:;
  /* 118d3754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3757 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118d375a lea ebx, [eax*4 + 0x118dd720] */
  EBX = ((uint32_t)(EAX*4 + 0x118dd720));
  /* 118d3761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3764 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d3767 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118d376a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118d376c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118d376f test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 118d3774 je 0x118d3784 */
  if (C.zf) goto L_118d3784;
  /* 118d3776 push 2 */
  push32((uint32_t)(0x2u));
  /* 118d3778 push edi */
  push32((uint32_t)(EDI));
  /* 118d3779 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d377c call 0x118d365c */
  push32(0x118d3781u); f_118d365c();
  /* 118d3781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d3784:;
  /* 118d3784 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118d3786 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3788 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 118d378c je 0x118d3853 */
  if (C.zf) goto L_118d3853;
  /* 118d3792 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d3795 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3798 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118d379b mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 118d379e jbe 0x118d388e */
  if ((C.cf||C.zf)) goto L_118d388e;
L_118d37a4:;
  /* 118d37a4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_118d37aa:;
  /* 118d37aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d37ad sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d37b0 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d37b3 jae 0x118d37de */
  if (!C.cf) goto L_118d37de;
  /* 118d37b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d37b8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118d37bb mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 118d37bd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d37c0 jne 0x118d37c9 */
  if (!C.zf) goto L_118d37c9;
  /* 118d37c2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 118d37c5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 118d37c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118d37c9:;
  /* 118d37c9 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118d37cb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d37cc mov ecx, eax */
  ECX = (EAX);
  /* 118d37ce lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 118d37d4 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d37d6 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d37dc jl 0x118d37aa */
  if ((C.sf!=C.of)) goto L_118d37aa;
L_118d37de:;
  /* 118d37de mov edi, eax */
  EDI = (EAX);
  /* 118d37e0 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 118d37e6 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d37e8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118d37eb push 0 */
  push32((uint32_t)(0x0u));
  /* 118d37ed push eax */
  push32((uint32_t)(EAX));
  /* 118d37ee lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 118d37f4 push edi */
  push32((uint32_t)(EDI));
  /* 118d37f5 push eax */
  push32((uint32_t)(EAX));
  /* 118d37f6 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118d37f8 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 118d37fb call dword ptr [0x118d8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8060))), 0x118d3801u);
  /* 118d3801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3803 je 0x118d3848 */
  if (C.zf) goto L_118d3848;
  /* 118d3805 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d3808 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d380b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d380d jl 0x118d381a */
  if ((C.sf!=C.of)) goto L_118d381a;
  /* 118d380f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d3812 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3815 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3818 jb 0x118d37a4 */
  if (C.cf) goto L_118d37a4;
L_118d381a:;
  /* 118d381a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118d381c:;
  /* 118d381c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d381f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3821 jne 0x118d38b7 */
  if (!C.zf) goto L_118d38b7;
  /* 118d3827 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d382a je 0x118d388e */
  if (C.zf) goto L_118d388e;
  /* 118d382c push 5 */
  push32((uint32_t)(0x5u));
  /* 118d382e pop esi */
  ESI = (pop32());
  /* 118d382f cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3832 jne 0x118d3880 */
  if (!C.zf) goto L_118d3880;
  /* 118d3834 call 0x118d5da1 */
  push32(0x118d3839u); f_118d5da1();
  /* 118d3839 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118d383f call 0x118d5daa */
  push32(0x118d3844u); f_118d5daa();
  /* 118d3844 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 118d3846 jmp 0x118d3889 */
  goto L_118d3889;
L_118d3848:;
  /* 118d3848 call dword ptr [0x118d80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a0))), 0x118d384eu);
  /* 118d384e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118d3851 jmp 0x118d381a */
  goto L_118d381a;
L_118d3853:;
  /* 118d3853 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 118d3856 push edi */
  push32((uint32_t)(EDI));
  /* 118d3857 push ecx */
  push32((uint32_t)(ECX));
  /* 118d3858 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118d385b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d385e push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118d3860 call dword ptr [0x118d8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8060))), 0x118d3866u);
  /* 118d3866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3868 je 0x118d3875 */
  if (C.zf) goto L_118d3875;
  /* 118d386a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d386d mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 118d3870 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118d3873 jmp 0x118d381c */
  goto L_118d381c;
L_118d3875:;
  /* 118d3875 call dword ptr [0x118d80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80a0))), 0x118d387bu);
  /* 118d387b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118d387e jmp 0x118d381c */
  goto L_118d381c;
L_118d3880:;
  /* 118d3880 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d3883 call 0x118d5d2e */
  push32(0x118d3888u); f_118d5d2e();
  /* 118d3888 pop ecx */
  ECX = (pop32());
L_118d3889:;
  /* 118d3889 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d388c jmp 0x118d38ba */
  goto L_118d38ba;
L_118d388e:;
  /* 118d388e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118d3890 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 118d3895 je 0x118d38a3 */
  if (C.zf) goto L_118d38a3;
  /* 118d3897 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d389a cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d389d je 0x118d374d */
  if (C.zf) goto L_118d374d;
L_118d38a3:;
  /* 118d38a3 call 0x118d5da1 */
  push32(0x118d38a8u); f_118d5da1();
  /* 118d38a8 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 118d38ae call 0x118d5daa */
  push32(0x118d38b3u); f_118d5daa();
  /* 118d38b3 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 118d38b5 jmp 0x118d3889 */
  goto L_118d3889;
L_118d38b7:;
  /* 118d38b7 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118d38ba:;
  /* 118d38ba pop edi */
  EDI = (pop32());
  /* 118d38bb pop esi */
  ESI = (pop32());
  /* 118d38bc pop ebx */
  EBX = (pop32());
  /* 118d38bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d38be ret  */
  ESPCHK(0x118d3734u, _esp0);
  ESP += 4; return;
}

/* FUN_100038bf @ 0x118d38bf (68 bytes, 19 insns) */
void f_118d38bf(void) {
  FTRACE(0x118d38bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d38bf inc dword ptr [0x118dc29c] */
  { uint32_t _r=(r32((uint32_t)(0x118dc29c)))+1; w32((uint32_t)(0x118dc29c), (_r)); fl_inc(_r,32); }
  /* 118d38c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118d38ca call 0x118d3fe6 */
  push32(0x118d38cfu); f_118d3fe6();
  /* 118d38cf pop ecx */
  ECX = (pop32());
  /* 118d38d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d38d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d38d6 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118d38d9 je 0x118d38e8 */
  if (C.zf) goto L_118d38e8;
  /* 118d38db or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d38df mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 118d38e6 jmp 0x118d38f9 */
  goto L_118d38f9;
L_118d38e8:;
  /* 118d38e8 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 118d38ec lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 118d38ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118d38f2 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_118d38f9:;
  /* 118d38f9 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 118d38fc and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d3900 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118d3902 ret  */
  ESPCHK(0x118d38bfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003903 @ 0x118d3903 (41 bytes, 13 insns) */
void f_118d3903(void) {
  FTRACE(0x118d3903u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3903 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3907 cmp eax, dword ptr [0x118dd820] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118dd820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d390d jb 0x118d3912 */
  if (C.cf) goto L_118d3912;
  /* 118d390f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d3911 ret  */
  ESPCHK(0x118d3903u, _esp0);
  ESP += 4; return;
L_118d3912:;
  /* 118d3912 mov ecx, eax */
  ECX = (EAX);
  /* 118d3914 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118d3917 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118d391a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118d391d mov ecx, dword ptr [ecx*4 + 0x118dd720] */
  ECX = (r32((uint32_t)(ECX*4 + 0x118dd720)));
  /* 118d3924 mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 118d3928 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 118d392b ret  */
  ESPCHK(0x118d3903u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e8 @ 0x118d39e8 (47 bytes, 17 insns) */
void f_118d39e8(void) {
  FTRACE(0x118d39e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d39e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d39ec mov ecx, 0x118d9390 */
  ECX = (0x118d9390u);
  /* 118d39f1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d39f3 jb 0x118d3a0c */
  if (C.cf) goto L_118d3a0c;
  /* 118d39f5 cmp eax, 0x118d95f0 */
  { uint32_t _a=(EAX),_b=(0x118d95f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d39fa ja 0x118d3a0c */
  if ((!C.cf&&!C.zf)) goto L_118d3a0c;
  /* 118d39fc sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d39fe sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118d3a01 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a04 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a05 call 0x118d3e87 */
  push32(0x118d3a0au); f_118d3e87();
  /* 118d3a0a pop ecx */
  ECX = (pop32());
  /* 118d3a0b ret  */
  ESPCHK(0x118d39e8u, _esp0);
  ESP += 4; return;
L_118d3a0c:;
  /* 118d3a0c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a0f push eax */
  push32((uint32_t)(EAX));
  /* 118d3a10 call dword ptr [0x118d8064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8064))), 0x118d3a16u);
  /* 118d3a16 ret  */
  ESPCHK(0x118d39e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a17 @ 0x118d3a17 (35 bytes, 13 insns) */
void f_118d3a17(void) {
  FTRACE(0x118d3a17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3a17 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3a1b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3a1e jge 0x118d3a2b */
  if ((C.sf==C.of)) goto L_118d3a2b;
  /* 118d3a20 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a23 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a24 call 0x118d3e87 */
  push32(0x118d3a29u); f_118d3e87();
  /* 118d3a29 pop ecx */
  ECX = (pop32());
  /* 118d3a2a ret  */
  ESPCHK(0x118d3a17u, _esp0);
  ESP += 4; return;
L_118d3a2b:;
  /* 118d3a2b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d3a2f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a32 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a33 call dword ptr [0x118d8064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8064))), 0x118d3a39u);
  /* 118d3a39 ret  */
  ESPCHK(0x118d3a17u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a3a @ 0x118d3a3a (47 bytes, 17 insns) */
void f_118d3a3a(void) {
  FTRACE(0x118d3a3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3a3a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3a3e mov ecx, 0x118d9390 */
  ECX = (0x118d9390u);
  /* 118d3a43 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3a45 jb 0x118d3a5e */
  if (C.cf) goto L_118d3a5e;
  /* 118d3a47 cmp eax, 0x118d95f0 */
  { uint32_t _a=(EAX),_b=(0x118d95f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3a4c ja 0x118d3a5e */
  if ((!C.cf&&!C.zf)) goto L_118d3a5e;
  /* 118d3a4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3a50 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118d3a53 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a56 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a57 call 0x118d3ee8 */
  push32(0x118d3a5cu); f_118d3ee8();
  /* 118d3a5c pop ecx */
  ECX = (pop32());
  /* 118d3a5d ret  */
  ESPCHK(0x118d3a3au, _esp0);
  ESP += 4; return;
L_118d3a5e:;
  /* 118d3a5e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a61 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a62 call dword ptr [0x118d8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8054))), 0x118d3a68u);
  /* 118d3a68 ret  */
  ESPCHK(0x118d3a3au, _esp0);
  ESP += 4; return;
}

/* FUN_10003a69 @ 0x118d3a69 (35 bytes, 13 insns) */
void f_118d3a69(void) {
  FTRACE(0x118d3a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3a69 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3a6d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3a70 jge 0x118d3a7d */
  if ((C.sf==C.of)) goto L_118d3a7d;
  /* 118d3a72 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a75 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a76 call 0x118d3ee8 */
  push32(0x118d3a7bu); f_118d3ee8();
  /* 118d3a7b pop ecx */
  ECX = (pop32());
  /* 118d3a7c ret  */
  ESPCHK(0x118d3a69u, _esp0);
  ESP += 4; return;
L_118d3a7d:;
  /* 118d3a7d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d3a81 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3a84 push eax */
  push32((uint32_t)(EAX));
  /* 118d3a85 call dword ptr [0x118d8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8054))), 0x118d3a8bu);
  /* 118d3a8b ret  */
  ESPCHK(0x118d3a69u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x118d3a90 (123 bytes, 44 insns) */
void f_118d3a90(void) {
  FTRACE(0x118d3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3a90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3a94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118d3a9a je 0x118d3ab0 */
  if (C.zf) goto L_118d3ab0;
L_118d3a9c:;
  /* 118d3a9c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118d3a9e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d3a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d3aa1 je 0x118d3ae3 */
  if (C.zf) goto L_118d3ae3;
  /* 118d3aa3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118d3aa9 jne 0x118d3a9c */
  if (!C.zf) goto L_118d3a9c;
  /* 118d3aab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118d3ab0:;
  /* 118d3ab0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118d3ab2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118d3ab7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3ab9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d3abc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118d3abe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3ac1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118d3ac6 je 0x118d3ab0 */
  if (C.zf) goto L_118d3ab0;
  /* 118d3ac8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 118d3acb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d3acd je 0x118d3b01 */
  if (C.zf) goto L_118d3b01;
  /* 118d3acf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118d3ad1 je 0x118d3af7 */
  if (C.zf) goto L_118d3af7;
  /* 118d3ad3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 118d3ad8 je 0x118d3aed */
  if (C.zf) goto L_118d3aed;
  /* 118d3ada test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 118d3adf je 0x118d3ae3 */
  if (C.zf) goto L_118d3ae3;
  /* 118d3ae1 jmp 0x118d3ab0 */
  goto L_118d3ab0;
L_118d3ae3:;
  /* 118d3ae3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 118d3ae6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3aea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3aec ret  */
  ESPCHK(0x118d3a90u, _esp0);
  ESP += 4; return;
L_118d3aed:;
  /* 118d3aed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 118d3af0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3af4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3af6 ret  */
  ESPCHK(0x118d3a90u, _esp0);
  ESP += 4; return;
L_118d3af7:;
  /* 118d3af7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 118d3afa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3afe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3b00 ret  */
  ESPCHK(0x118d3a90u, _esp0);
  ESP += 4; return;
L_118d3b01:;
  /* 118d3b01 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 118d3b04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d3b08 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3b0a ret  */
  ESPCHK(0x118d3a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b0b @ 0x118d3b0b (89 bytes, 39 insns) */
void f_118d3b0b(void) {
  FTRACE(0x118d3b0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3b0b push ebp */
  push32((uint32_t)(EBP));
  /* 118d3b0c mov ebp, esp */
  EBP = (ESP);
  /* 118d3b0e push ebx */
  push32((uint32_t)(EBX));
  /* 118d3b0f push esi */
  push32((uint32_t)(ESI));
  /* 118d3b10 mov esi, 0x118dc494 */
  ESI = (0x118dc494u);
  /* 118d3b15 push edi */
  push32((uint32_t)(EDI));
  /* 118d3b16 push esi */
  push32((uint32_t)(ESI));
  /* 118d3b17 call dword ptr [0x118d8058] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8058))), 0x118d3b1du);
  /* 118d3b1d mov edi, dword ptr [0x118d8050] */
  EDI = (r32((uint32_t)(0x118d8050)));
  /* 118d3b23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d3b25 cmp dword ptr [0x118dc490], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dc490))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3b2b je 0x118d3b3b */
  if (C.zf) goto L_118d3b3b;
  /* 118d3b2d push esi */
  push32((uint32_t)(ESI));
  /* 118d3b2e call edi */
  call_ind((uint32_t)(EDI), 0x118d3b30u);
  /* 118d3b30 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d3b32 call 0x118d3e87 */
  push32(0x118d3b37u); f_118d3e87();
  /* 118d3b37 pop ecx */
  ECX = (pop32());
  /* 118d3b38 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d3b3a pop ebx */
  EBX = (pop32());
L_118d3b3b:;
  /* 118d3b3b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118d3b3e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d3b41 call 0x118d3b64 */
  push32(0x118d3b46u); f_118d3b64();
  /* 118d3b46 pop ecx */
  ECX = (pop32());
  /* 118d3b47 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118d3b4a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d3b4c pop ecx */
  ECX = (pop32());
  /* 118d3b4d je 0x118d3b59 */
  if (C.zf) goto L_118d3b59;
  /* 118d3b4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118d3b51 call 0x118d3ee8 */
  push32(0x118d3b56u); f_118d3ee8();
  /* 118d3b56 pop ecx */
  ECX = (pop32());
  /* 118d3b57 jmp 0x118d3b5c */
  goto L_118d3b5c;
L_118d3b59:;
  /* 118d3b59 push esi */
  push32((uint32_t)(ESI));
  /* 118d3b5a call edi */
  call_ind((uint32_t)(EDI), 0x118d3b5cu);
L_118d3b5c:;
  /* 118d3b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d3b5f pop edi */
  EDI = (pop32());
  /* 118d3b60 pop esi */
  ESI = (pop32());
  /* 118d3b61 pop ebx */
  EBX = (pop32());
  /* 118d3b62 pop ebp */
  EBP = (pop32());
  /* 118d3b63 ret  */
  ESPCHK(0x118d3b0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b64 @ 0x118d3b64 (105 bytes, 38 insns) */
void f_118d3b64(void) {
  FTRACE(0x118d3b64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3b64 push ebp */
  push32((uint32_t)(EBP));
  /* 118d3b65 mov ebp, esp */
  EBP = (ESP);
  /* 118d3b67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3b6c jne 0x118d3b70 */
  if (!C.zf) goto L_118d3b70;
  /* 118d3b6e pop ebp */
  EBP = (pop32());
  /* 118d3b6f ret  */
  ESPCHK(0x118d3b64u, _esp0);
  ESP += 4; return;
L_118d3b70:;
  /* 118d3b70 cmp dword ptr [0x118dc328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3b77 jne 0x118d3b8b */
  if (!C.zf) goto L_118d3b8b;
  /* 118d3b79 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 118d3b7d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118d3b82 ja 0x118d3bbd */
  if ((!C.cf&&!C.zf)) goto L_118d3bbd;
  /* 118d3b84 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d3b86 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118d3b88 pop eax */
  EAX = (pop32());
  /* 118d3b89 pop ebp */
  EBP = (pop32());
  /* 118d3b8a ret  */
  ESPCHK(0x118d3b64u, _esp0);
  ESP += 4; return;
L_118d3b8b:;
  /* 118d3b8b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 118d3b8e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 118d3b92 push ecx */
  push32((uint32_t)(ECX));
  /* 118d3b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d3b95 push dword ptr [0x118dbd34] */
  push32((uint32_t)(r32((uint32_t)(0x118dbd34))));
  /* 118d3b9b push eax */
  push32((uint32_t)(EAX));
  /* 118d3b9c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 118d3b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 118d3ba1 push eax */
  push32((uint32_t)(EAX));
  /* 118d3ba2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118d3ba7 push dword ptr [0x118dc338] */
  push32((uint32_t)(r32((uint32_t)(0x118dc338))));
  /* 118d3bad call dword ptr [0x118d80d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d80d0))), 0x118d3bb3u);
  /* 118d3bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3bb5 je 0x118d3bbd */
  if (C.zf) goto L_118d3bbd;
  /* 118d3bb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3bbb je 0x118d3bcb */
  if (C.zf) goto L_118d3bcb;
L_118d3bbd:;
  /* 118d3bbd call 0x118d5da1 */
  push32(0x118d3bc2u); f_118d5da1();
  /* 118d3bc2 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 118d3bc8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118d3bcb:;
  /* 118d3bcb pop ebp */
  EBP = (pop32());
  /* 118d3bcc ret  */
  ESPCHK(0x118d3b64u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x118d3bd0 (104 bytes, 43 insns) */
void f_118d3bd0(void) {
  FTRACE(0x118d3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3bd0 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3bd1 push esi */
  push32((uint32_t)(ESI));
  /* 118d3bd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 118d3bd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d3bd8 jne 0x118d3bf2 */
  if (!C.zf) goto L_118d3bf2;
  /* 118d3bda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 118d3bde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d3be2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d3be4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d3be6 mov ebx, eax */
  EBX = (EAX);
  /* 118d3be8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d3bec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d3bee mov edx, ebx */
  EDX = (EBX);
  /* 118d3bf0 jmp 0x118d3c33 */
  goto L_118d3c33;
L_118d3bf2:;
  /* 118d3bf2 mov ecx, eax */
  ECX = (EAX);
  /* 118d3bf4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 118d3bf8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d3bfc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_118d3c00:;
  /* 118d3c00 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118d3c02 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 118d3c04 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 118d3c06 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 118d3c08 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d3c0a jne 0x118d3c00 */
  if (!C.zf) goto L_118d3c00;
  /* 118d3c0c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d3c0e mov esi, eax */
  ESI = (EAX);
  /* 118d3c10 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118d3c14 mov ecx, eax */
  ECX = (EAX);
  /* 118d3c16 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118d3c1a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118d3c1c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3c1e jb 0x118d3c2e */
  if (C.cf) goto L_118d3c2e;
  /* 118d3c20 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3c24 ja 0x118d3c2e */
  if ((!C.cf&&!C.zf)) goto L_118d3c2e;
  /* 118d3c26 jb 0x118d3c2f */
  if (C.cf) goto L_118d3c2f;
  /* 118d3c28 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3c2c jbe 0x118d3c2f */
  if ((C.cf||C.zf)) goto L_118d3c2f;
L_118d3c2e:;
  /* 118d3c2e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_118d3c2f:;
  /* 118d3c2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d3c31 mov eax, esi */
  EAX = (ESI);
L_118d3c33:;
  /* 118d3c33 pop esi */
  ESI = (pop32());
  /* 118d3c34 pop ebx */
  EBX = (pop32());
  /* 118d3c35 ret 0x10 */
  ESPCHK(0x118d3bd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x118d3c40 (117 bytes, 44 insns) */
void f_118d3c40(void) {
  FTRACE(0x118d3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3c40 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3c41 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118d3c45 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d3c47 jne 0x118d3c61 */
  if (!C.zf) goto L_118d3c61;
  /* 118d3c49 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d3c4d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d3c51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d3c53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d3c55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d3c59 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d3c5b mov eax, edx */
  EAX = (EDX);
  /* 118d3c5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d3c5f jmp 0x118d3cb1 */
  goto L_118d3cb1;
L_118d3c61:;
  /* 118d3c61 mov ecx, eax */
  ECX = (EAX);
  /* 118d3c63 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d3c67 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d3c6b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_118d3c6f:;
  /* 118d3c6f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118d3c71 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 118d3c73 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 118d3c75 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 118d3c77 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d3c79 jne 0x118d3c6f */
  if (!C.zf) goto L_118d3c6f;
  /* 118d3c7b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d3c7d mov ecx, eax */
  ECX = (EAX);
  /* 118d3c7f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118d3c83 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 118d3c84 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118d3c88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3c8a jb 0x118d3c9a */
  if (C.cf) goto L_118d3c9a;
  /* 118d3c8c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3c90 ja 0x118d3c9a */
  if ((!C.cf&&!C.zf)) goto L_118d3c9a;
  /* 118d3c92 jb 0x118d3ca2 */
  if (C.cf) goto L_118d3ca2;
  /* 118d3c94 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3c98 jbe 0x118d3ca2 */
  if ((C.cf||C.zf)) goto L_118d3ca2;
L_118d3c9a:;
  /* 118d3c9a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3c9e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_118d3ca2:;
  /* 118d3ca2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3ca6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3caa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d3cac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d3cae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_118d3cb1:;
  /* 118d3cb1 pop ebx */
  EBX = (pop32());
  /* 118d3cb2 ret 0x10 */
  ESPCHK(0x118d3c40u, _esp0);
  ESP += 20; return;
}

/* FUN_10003cb5 @ 0x118d3cb5 (289 bytes, 98 insns) */
void f_118d3cb5(void) {
  FTRACE(0x118d3cb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3cb5 push ebp */
  push32((uint32_t)(EBP));
  /* 118d3cb6 mov ebp, esp */
  EBP = (ESP);
  /* 118d3cb8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d3cba push 0x118d8530 */
  push32((uint32_t)(0x118d8530u));
  /* 118d3cbf push 0x118d6230 */
  push32((uint32_t)(0x118d6230u));
  /* 118d3cc4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118d3cca push eax */
  push32((uint32_t)(EAX));
  /* 118d3ccb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118d3cd2 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3cd5 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3cd6 push esi */
  push32((uint32_t)(ESI));
  /* 118d3cd7 push edi */
  push32((uint32_t)(EDI));
  /* 118d3cd8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3cdb imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d3cdf mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118d3ce2 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 118d3ce5 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3ce8 ja 0x118d3cfe */
  if ((!C.cf&&!C.zf)) goto L_118d3cfe;
  /* 118d3cea xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d3cec cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3cee jne 0x118d3cf3 */
  if (!C.zf) goto L_118d3cf3;
  /* 118d3cf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d3cf2 pop esi */
  ESI = (pop32());
L_118d3cf3:;
  /* 118d3cf3 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3cf6 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118d3cf9 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118d3cfc jmp 0x118d3d00 */
  goto L_118d3d00;
L_118d3cfe:;
  /* 118d3cfe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118d3d00:;
  /* 118d3d00 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 118d3d03 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d06 ja 0x118d3db4 */
  if ((!C.cf&&!C.zf)) goto L_118d3db4;
  /* 118d3d0c mov eax, dword ptr [0x118dd708] */
  EAX = (r32((uint32_t)(0x118dd708)));
  /* 118d3d11 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d14 jne 0x118d3d57 */
  if (!C.zf) goto L_118d3d57;
  /* 118d3d16 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 118d3d19 cmp edi, dword ptr [0x118dc4b0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x118dc4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d1f ja 0x118d3d9d */
  if ((!C.cf&&!C.zf)) goto L_118d3d9d;
  /* 118d3d21 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3d23 call 0x118d3e87 */
  push32(0x118d3d28u); f_118d3e87();
  /* 118d3d28 pop ecx */
  ECX = (pop32());
  /* 118d3d29 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118d3d2c push edi */
  push32((uint32_t)(EDI));
  /* 118d3d2d call 0x118d50cb */
  push32(0x118d3d32u); f_118d50cb();
  /* 118d3d32 pop ecx */
  ECX = (pop32());
  /* 118d3d33 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118d3d36 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d3d3a call 0x118d3d4e */
  push32(0x118d3d3fu); f_118d3d4e();
  /* 118d3d3f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d42 je 0x118d3da2 */
  if (C.zf) goto L_118d3da2;
  /* 118d3d44 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118d3d47 jmp 0x118d3d91 */
  goto L_118d3d91;
  /* 118d3d49 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d3d4b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d3d4e push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3d50 call 0x118d3ee8 */
  push32(0x118d3d55u); f_118d3ee8();
  /* 118d3d55 pop ecx */
  ECX = (pop32());
  /* 118d3d56 ret  */
  ESPCHK(0x118d3cb5u, _esp0);
  ESP += 4; return;
L_118d3d57:;
  /* 118d3d57 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d5a jne 0x118d3d9d */
  if (!C.zf) goto L_118d3d9d;
  /* 118d3d5c cmp esi, dword ptr [0x118dbab4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dbab4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d62 ja 0x118d3d9d */
  if ((!C.cf&&!C.zf)) goto L_118d3d9d;
  /* 118d3d64 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3d66 call 0x118d3e87 */
  push32(0x118d3d6bu); f_118d3e87();
  /* 118d3d6b pop ecx */
  ECX = (pop32());
  /* 118d3d6c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118d3d73 mov eax, esi */
  EAX = (ESI);
  /* 118d3d75 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118d3d78 push eax */
  push32((uint32_t)(EAX));
  /* 118d3d79 call 0x118d5878 */
  push32(0x118d3d7eu); f_118d5878();
  /* 118d3d7e pop ecx */
  ECX = (pop32());
  /* 118d3d7f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118d3d82 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d3d86 call 0x118d3dd7 */
  push32(0x118d3d8bu); f_118d3dd7();
  /* 118d3d8b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3d8e je 0x118d3da2 */
  if (C.zf) goto L_118d3da2;
  /* 118d3d90 push esi */
  push32((uint32_t)(ESI));
L_118d3d91:;
  /* 118d3d91 push ebx */
  push32((uint32_t)(EBX));
  /* 118d3d92 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 118d3d95 call 0x118d60e0 */
  push32(0x118d3d9au); f_118d60e0();
  /* 118d3d9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d3d9d:;
  /* 118d3d9d cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3da0 jne 0x118d3de0 */
  if (!C.zf) { jmp_ind(0x118d3de0u); return; }
L_118d3da2:;
  /* 118d3da2 push esi */
  push32((uint32_t)(ESI));
  /* 118d3da3 push 8 */
  push32((uint32_t)(0x8u));
  /* 118d3da5 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d3dab call dword ptr [0x118d804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d804c))), 0x118d3db1u);
  /* 118d3db1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_118d3db4:;
  /* 118d3db4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3db7 jne 0x118d3de0 */
  if (!C.zf) { jmp_ind(0x118d3de0u); return; }
  /* 118d3db9 cmp dword ptr [0x118dc344], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dc344))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3dbf je 0x118d3de0 */
  if (C.zf) { jmp_ind(0x118d3de0u); return; }
  /* 118d3dc1 push esi */
  push32((uint32_t)(ESI));
  /* 118d3dc2 call 0x118d60b6 */
  push32(0x118d3dc7u); f_118d60b6();
  /* 118d3dc7 pop ecx */
  ECX = (pop32());
  /* 118d3dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3dca jne 0x118d3d00 */
  if (!C.zf) goto L_118d3d00;
  /* 118d3dd0 jmp 0x118d3de3 */
  jmp_ind(0x118d3de3u); return;
  /* 118d3dd2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10003d4e @ 0x118d3d4e (9 bytes, 4 insns) */
void f_118d3d4e(void) {
  FTRACE(0x118d3d4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3d4e push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3d50 call 0x118d3ee8 */
  push32(0x118d3d55u); f_118d3ee8();
  /* 118d3d55 pop ecx */
  ECX = (pop32());
  /* 118d3d56 ret  */
  ESPCHK(0x118d3d4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd7 @ 0x118d3dd7 (9 bytes, 4 insns) */
void f_118d3dd7(void) {
  FTRACE(0x118d3dd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3dd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3dd9 call 0x118d3ee8 */
  push32(0x118d3ddeu); f_118d3ee8();
  /* 118d3dde pop ecx */
  ECX = (pop32());
  /* 118d3ddf ret  */
  ESPCHK(0x118d3dd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df2 @ 0x118d3df2 (41 bytes, 12 insns) */
void f_118d3df2(void) {
  FTRACE(0x118d3df2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3df2 push esi */
  push32((uint32_t)(ESI));
  /* 118d3df3 mov esi, dword ptr [0x118d8048] */
  ESI = (r32((uint32_t)(0x118d8048)));
  /* 118d3df9 push dword ptr [0x118d9884] */
  push32((uint32_t)(r32((uint32_t)(0x118d9884))));
  /* 118d3dff call esi */
  call_ind((uint32_t)(ESI), 0x118d3e01u);
  /* 118d3e01 push dword ptr [0x118d9874] */
  push32((uint32_t)(r32((uint32_t)(0x118d9874))));
  /* 118d3e07 call esi */
  call_ind((uint32_t)(ESI), 0x118d3e09u);
  /* 118d3e09 push dword ptr [0x118d9864] */
  push32((uint32_t)(r32((uint32_t)(0x118d9864))));
  /* 118d3e0f call esi */
  call_ind((uint32_t)(ESI), 0x118d3e11u);
  /* 118d3e11 push dword ptr [0x118d9844] */
  push32((uint32_t)(r32((uint32_t)(0x118d9844))));
  /* 118d3e17 call esi */
  call_ind((uint32_t)(ESI), 0x118d3e19u);
  /* 118d3e19 pop esi */
  ESI = (pop32());
  /* 118d3e1a ret  */
  ESPCHK(0x118d3df2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e1b @ 0x118d3e1b (108 bytes, 34 insns) */
void f_118d3e1b(void) {
  FTRACE(0x118d3e1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3e1b push esi */
  push32((uint32_t)(ESI));
  /* 118d3e1c push edi */
  push32((uint32_t)(EDI));
  /* 118d3e1d mov edi, dword ptr [0x118d80ac] */
  EDI = (r32((uint32_t)(0x118d80ac)));
  /* 118d3e23 mov esi, 0x118d9840 */
  ESI = (0x118d9840u);
L_118d3e28:;
  /* 118d3e28 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d3e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3e2c je 0x118d3e59 */
  if (C.zf) goto L_118d3e59;
  /* 118d3e2e cmp esi, 0x118d9884 */
  { uint32_t _a=(ESI),_b=(0x118d9884u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3e34 je 0x118d3e59 */
  if (C.zf) goto L_118d3e59;
  /* 118d3e36 cmp esi, 0x118d9874 */
  { uint32_t _a=(ESI),_b=(0x118d9874u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3e3c je 0x118d3e59 */
  if (C.zf) goto L_118d3e59;
  /* 118d3e3e cmp esi, 0x118d9864 */
  { uint32_t _a=(ESI),_b=(0x118d9864u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3e44 je 0x118d3e59 */
  if (C.zf) goto L_118d3e59;
  /* 118d3e46 cmp esi, 0x118d9844 */
  { uint32_t _a=(ESI),_b=(0x118d9844u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3e4c je 0x118d3e59 */
  if (C.zf) goto L_118d3e59;
  /* 118d3e4e push eax */
  push32((uint32_t)(EAX));
  /* 118d3e4f call edi */
  call_ind((uint32_t)(EDI), 0x118d3e51u);
  /* 118d3e51 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d3e53 call 0x118d3efd */
  push32(0x118d3e58u); f_118d3efd();
  /* 118d3e58 pop ecx */
  ECX = (pop32());
L_118d3e59:;
  /* 118d3e59 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3e5c cmp esi, 0x118d9900 */
  { uint32_t _a=(ESI),_b=(0x118d9900u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3e62 jl 0x118d3e28 */
  if ((C.sf!=C.of)) goto L_118d3e28;
  /* 118d3e64 push dword ptr [0x118d9864] */
  push32((uint32_t)(r32((uint32_t)(0x118d9864))));
  /* 118d3e6a call edi */
  call_ind((uint32_t)(EDI), 0x118d3e6cu);
  /* 118d3e6c push dword ptr [0x118d9874] */
  push32((uint32_t)(r32((uint32_t)(0x118d9874))));
  /* 118d3e72 call edi */
  call_ind((uint32_t)(EDI), 0x118d3e74u);
  /* 118d3e74 push dword ptr [0x118d9884] */
  push32((uint32_t)(r32((uint32_t)(0x118d9884))));
  /* 118d3e7a call edi */
  call_ind((uint32_t)(EDI), 0x118d3e7cu);
  /* 118d3e7c push dword ptr [0x118d9844] */
  push32((uint32_t)(r32((uint32_t)(0x118d9844))));
  /* 118d3e82 call edi */
  call_ind((uint32_t)(EDI), 0x118d3e84u);
  /* 118d3e84 pop edi */
  EDI = (pop32());
  /* 118d3e85 pop esi */
  ESI = (pop32());
  /* 118d3e86 ret  */
  ESPCHK(0x118d3e1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e87 @ 0x118d3e87 (97 bytes, 37 insns) */
void f_118d3e87(void) {
  FTRACE(0x118d3e87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3e87 push ebp */
  push32((uint32_t)(EBP));
  /* 118d3e88 mov ebp, esp */
  EBP = (ESP);
  /* 118d3e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3e8d push esi */
  push32((uint32_t)(ESI));
  /* 118d3e8e cmp dword ptr [eax*4 + 0x118d9840], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x118d9840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3e96 lea esi, [eax*4 + 0x118d9840] */
  ESI = ((uint32_t)(EAX*4 + 0x118d9840));
  /* 118d3e9d jne 0x118d3edd */
  if (!C.zf) goto L_118d3edd;
  /* 118d3e9f push edi */
  push32((uint32_t)(EDI));
  /* 118d3ea0 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 118d3ea2 call 0x118d3fe6 */
  push32(0x118d3ea7u); f_118d3fe6();
  /* 118d3ea7 mov edi, eax */
  EDI = (EAX);
  /* 118d3ea9 pop ecx */
  ECX = (pop32());
  /* 118d3eaa test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d3eac jne 0x118d3eb6 */
  if (!C.zf) goto L_118d3eb6;
  /* 118d3eae push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118d3eb0 call 0x118d1faa */
  push32(0x118d3eb5u); f_118d1faa();
  /* 118d3eb5 pop ecx */
  ECX = (pop32());
L_118d3eb6:;
  /* 118d3eb6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118d3eb8 call 0x118d3e87 */
  push32(0x118d3ebdu); f_118d3e87();
  /* 118d3ebd cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3ec0 pop ecx */
  ECX = (pop32());
  /* 118d3ec1 push edi */
  push32((uint32_t)(EDI));
  /* 118d3ec2 jne 0x118d3ece */
  if (!C.zf) goto L_118d3ece;
  /* 118d3ec4 call dword ptr [0x118d8048] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8048))), 0x118d3ecau);
  /* 118d3eca mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118d3ecc jmp 0x118d3ed4 */
  goto L_118d3ed4;
L_118d3ece:;
  /* 118d3ece call 0x118d3efd */
  push32(0x118d3ed3u); f_118d3efd();
  /* 118d3ed3 pop ecx */
  ECX = (pop32());
L_118d3ed4:;
  /* 118d3ed4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118d3ed6 call 0x118d3ee8 */
  push32(0x118d3edbu); f_118d3ee8();
  /* 118d3edb pop ecx */
  ECX = (pop32());
  /* 118d3edc pop edi */
  EDI = (pop32());
L_118d3edd:;
  /* 118d3edd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118d3edf call dword ptr [0x118d8064] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8064))), 0x118d3ee5u);
  /* 118d3ee5 pop esi */
  ESI = (pop32());
  /* 118d3ee6 pop ebp */
  EBP = (pop32());
  /* 118d3ee7 ret  */
  ESPCHK(0x118d3e87u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ee8 @ 0x118d3ee8 (21 bytes, 7 insns) */
void f_118d3ee8(void) {
  FTRACE(0x118d3ee8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3ee8 push ebp */
  push32((uint32_t)(EBP));
  /* 118d3ee9 mov ebp, esp */
  EBP = (ESP);
  /* 118d3eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3eee push dword ptr [eax*4 + 0x118d9840] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x118d9840))));
  /* 118d3ef5 call dword ptr [0x118d8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8054))), 0x118d3efbu);
  /* 118d3efb pop ebp */
  EBP = (pop32());
  /* 118d3efc ret  */
  ESPCHK(0x118d3ee8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003efd @ 0x118d3efd (215 bytes, 75 insns) */
void f_118d3efd(void) {
  FTRACE(0x118d3efdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3efd push ebp */
  push32((uint32_t)(EBP));
  /* 118d3efe mov ebp, esp */
  EBP = (ESP);
  /* 118d3f00 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d3f02 push 0x118d8548 */
  push32((uint32_t)(0x118d8548u));
  /* 118d3f07 push 0x118d6230 */
  push32((uint32_t)(0x118d6230u));
  /* 118d3f0c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118d3f12 push eax */
  push32((uint32_t)(EAX));
  /* 118d3f13 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118d3f1a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d3f1d push ebx */
  push32((uint32_t)(EBX));
  /* 118d3f1e push esi */
  push32((uint32_t)(ESI));
  /* 118d3f1f push edi */
  push32((uint32_t)(EDI));
  /* 118d3f20 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d3f23 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d3f25 je 0x118d3fd7 */
  if (C.zf) { jmp_ind(0x118d3fd7u); return; }
  /* 118d3f2b mov eax, dword ptr [0x118dd708] */
  EAX = (r32((uint32_t)(0x118dd708)));
  /* 118d3f30 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3f33 jne 0x118d3f70 */
  if (!C.zf) goto L_118d3f70;
  /* 118d3f35 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3f37 call 0x118d3e87 */
  push32(0x118d3f3cu); f_118d3e87();
  /* 118d3f3c pop ecx */
  ECX = (pop32());
  /* 118d3f3d and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d3f41 push esi */
  push32((uint32_t)(ESI));
  /* 118d3f42 call 0x118d4d77 */
  push32(0x118d3f47u); f_118d4d77();
  /* 118d3f47 pop ecx */
  ECX = (pop32());
  /* 118d3f48 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118d3f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3f4d je 0x118d3f58 */
  if (C.zf) goto L_118d3f58;
  /* 118d3f4f push esi */
  push32((uint32_t)(ESI));
  /* 118d3f50 push eax */
  push32((uint32_t)(EAX));
  /* 118d3f51 call 0x118d4da2 */
  push32(0x118d3f56u); f_118d4da2();
  /* 118d3f56 pop ecx */
  ECX = (pop32());
  /* 118d3f57 pop ecx */
  ECX = (pop32());
L_118d3f58:;
  /* 118d3f58 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d3f5c call 0x118d3f67 */
  push32(0x118d3f61u); f_118d3f67();
  /* 118d3f61 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3f65 jmp 0x118d3fb8 */
  goto L_118d3fb8;
  /* 118d3f67 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3f69 call 0x118d3ee8 */
  push32(0x118d3f6eu); f_118d3ee8();
  /* 118d3f6e pop ecx */
  ECX = (pop32());
  /* 118d3f6f ret  */
  ESPCHK(0x118d3efdu, _esp0);
  ESP += 4; return;
L_118d3f70:;
  /* 118d3f70 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3f73 jne 0x118d3fc8 */
  if (!C.zf) goto L_118d3fc8;
  /* 118d3f75 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3f77 call 0x118d3e87 */
  push32(0x118d3f7cu); f_118d3e87();
  /* 118d3f7c pop ecx */
  ECX = (pop32());
  /* 118d3f7d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118d3f84 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118d3f87 push eax */
  push32((uint32_t)(EAX));
  /* 118d3f88 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118d3f8b push eax */
  push32((uint32_t)(EAX));
  /* 118d3f8c push esi */
  push32((uint32_t)(ESI));
  /* 118d3f8d call 0x118d57dc */
  push32(0x118d3f92u); f_118d57dc();
  /* 118d3f92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d3f95 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118d3f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d3f9a je 0x118d3fab */
  if (C.zf) goto L_118d3fab;
  /* 118d3f9c push eax */
  push32((uint32_t)(EAX));
  /* 118d3f9d push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 118d3fa0 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 118d3fa3 call 0x118d5833 */
  push32(0x118d3fa8u); f_118d5833();
  /* 118d3fa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d3fab:;
  /* 118d3fab or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d3faf call 0x118d3fbf */
  push32(0x118d3fb4u); f_118d3fbf();
  /* 118d3fb4 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118d3fb8:;
  /* 118d3fb8 jne 0x118d3fd7 */
  if (!C.zf) { jmp_ind(0x118d3fd7u); return; }
  /* 118d3fba push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d3fbd jmp 0x118d3fc9 */
  goto L_118d3fc9;
  /* 118d3fbf push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3fc1 call 0x118d3ee8 */
  push32(0x118d3fc6u); f_118d3ee8();
  /* 118d3fc6 pop ecx */
  ECX = (pop32());
  /* 118d3fc7 ret  */
  ESPCHK(0x118d3efdu, _esp0);
  ESP += 4; return;
L_118d3fc8:;
  /* 118d3fc8 push esi */
  push32((uint32_t)(ESI));
L_118d3fc9:;
  /* 118d3fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d3fcb push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
}

/* FUN_10003f67 @ 0x118d3f67 (9 bytes, 4 insns) */
void f_118d3f67(void) {
  FTRACE(0x118d3f67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3f67 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3f69 call 0x118d3ee8 */
  push32(0x118d3f6eu); f_118d3ee8();
  /* 118d3f6e pop ecx */
  ECX = (pop32());
  /* 118d3f6f ret  */
  ESPCHK(0x118d3f67u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fbf @ 0x118d3fbf (9 bytes, 4 insns) */
void f_118d3fbf(void) {
  FTRACE(0x118d3fbfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3fbf push 9 */
  push32((uint32_t)(0x9u));
  /* 118d3fc1 call 0x118d3ee8 */
  push32(0x118d3fc6u); f_118d3ee8();
  /* 118d3fc6 pop ecx */
  ECX = (pop32());
  /* 118d3fc7 ret  */
  ESPCHK(0x118d3fbfu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x118d3fe6 (18 bytes, 6 insns) */
void f_118d3fe6(void) {
  FTRACE(0x118d3fe6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3fe6 push dword ptr [0x118dc344] */
  push32((uint32_t)(r32((uint32_t)(0x118dc344))));
  /* 118d3fec push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118d3ff0 call 0x118d3ff8 */
  push32(0x118d3ff5u); f_118d3ff8();
  /* 118d3ff5 pop ecx */
  ECX = (pop32());
  /* 118d3ff6 pop ecx */
  ECX = (pop32());
  /* 118d3ff7 ret  */
  ESPCHK(0x118d3fe6u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x118d3ff8 (44 bytes, 16 insns) */
void f_118d3ff8(void) {
  FTRACE(0x118d3ff8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d3ff8 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d3ffd ja 0x118d4021 */
  if ((!C.cf&&!C.zf)) goto L_118d4021;
L_118d3fff:;
  /* 118d3fff push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118d4003 call 0x118d4024 */
  push32(0x118d4008u); f_118d4024();
  /* 118d4008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d400a pop ecx */
  ECX = (pop32());
  /* 118d400b jne 0x118d4023 */
  if (!C.zf) goto L_118d4023;
  /* 118d400d cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4011 je 0x118d4023 */
  if (C.zf) goto L_118d4023;
  /* 118d4013 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118d4017 call 0x118d60b6 */
  push32(0x118d401cu); f_118d60b6();
  /* 118d401c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d401e pop ecx */
  ECX = (pop32());
  /* 118d401f jne 0x118d3fff */
  if (!C.zf) goto L_118d3fff;
L_118d4021:;
  /* 118d4021 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d4023:;
  /* 118d4023 ret  */
  ESPCHK(0x118d3ff8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004024 @ 0x118d4024 (231 bytes, 81 insns) */
void f_118d4024(void) {
  FTRACE(0x118d4024u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4024 push ebp */
  push32((uint32_t)(EBP));
  /* 118d4025 mov ebp, esp */
  EBP = (ESP);
  /* 118d4027 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118d4029 push 0x118d8560 */
  push32((uint32_t)(0x118d8560u));
  /* 118d402e push 0x118d6230 */
  push32((uint32_t)(0x118d6230u));
  /* 118d4033 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118d4039 push eax */
  push32((uint32_t)(EAX));
  /* 118d403a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118d4041 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4044 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4045 push esi */
  push32((uint32_t)(ESI));
  /* 118d4046 push edi */
  push32((uint32_t)(EDI));
  /* 118d4047 mov eax, dword ptr [0x118dd708] */
  EAX = (r32((uint32_t)(0x118dd708)));
  /* 118d404c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d404f jne 0x118d4094 */
  if (!C.zf) goto L_118d4094;
  /* 118d4051 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4054 cmp esi, dword ptr [0x118dc4b0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dc4b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d405a ja 0x118d40f3 */
  if ((!C.cf&&!C.zf)) goto L_118d40f3;
  /* 118d4060 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d4062 call 0x118d3e87 */
  push32(0x118d4067u); f_118d3e87();
  /* 118d4067 pop ecx */
  ECX = (pop32());
  /* 118d4068 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d406c push esi */
  push32((uint32_t)(ESI));
  /* 118d406d call 0x118d50cb */
  push32(0x118d4072u); f_118d50cb();
  /* 118d4072 pop ecx */
  ECX = (pop32());
  /* 118d4073 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118d4076 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d407a call 0x118d408b */
  push32(0x118d407fu); f_118d408b();
  /* 118d407f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118d4082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4084 je 0x118d40f3 */
  if (C.zf) goto L_118d40f3;
  /* 118d4086 jmp 0x118d4111 */
  jmp_ind(0x118d4111u); return;
  /* 118d408b push 9 */
  push32((uint32_t)(0x9u));
  /* 118d408d call 0x118d3ee8 */
  push32(0x118d4092u); f_118d3ee8();
  /* 118d4092 pop ecx */
  ECX = (pop32());
  /* 118d4093 ret  */
  ESPCHK(0x118d4024u, _esp0);
  ESP += 4; return;
L_118d4094:;
  /* 118d4094 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4097 jne 0x118d40f3 */
  if (!C.zf) goto L_118d40f3;
  /* 118d4099 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d409c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d409e je 0x118d40a8 */
  if (C.zf) goto L_118d40a8;
  /* 118d40a0 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 118d40a3 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118d40a6 jmp 0x118d40ab */
  goto L_118d40ab;
L_118d40a8:;
  /* 118d40a8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118d40aa pop esi */
  ESI = (pop32());
L_118d40ab:;
  /* 118d40ab mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 118d40ae cmp esi, dword ptr [0x118dbab4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dbab4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d40b4 ja 0x118d40e4 */
  if ((!C.cf&&!C.zf)) goto L_118d40e4;
  /* 118d40b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118d40b8 call 0x118d3e87 */
  push32(0x118d40bdu); f_118d3e87();
  /* 118d40bd pop ecx */
  ECX = (pop32());
  /* 118d40be mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118d40c5 mov eax, esi */
  EAX = (ESI);
  /* 118d40c7 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118d40ca push eax */
  push32((uint32_t)(EAX));
  /* 118d40cb call 0x118d5878 */
  push32(0x118d40d0u); f_118d5878();
  /* 118d40d0 pop ecx */
  ECX = (pop32());
  /* 118d40d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118d40d4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d40d8 call 0x118d40ea */
  push32(0x118d40ddu); f_118d40ea();
  /* 118d40dd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118d40e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d40e2 jne 0x118d4111 */
  if (!C.zf) { jmp_ind(0x118d4111u); return; }
L_118d40e4:;
  /* 118d40e4 push esi */
  push32((uint32_t)(ESI));
  /* 118d40e5 jmp 0x118d4103 */
  goto L_118d4103;
  /* 118d40e7 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d40ea push 9 */
  push32((uint32_t)(0x9u));
  /* 118d40ec call 0x118d3ee8 */
  push32(0x118d40f1u); f_118d3ee8();
  /* 118d40f1 pop ecx */
  ECX = (pop32());
  /* 118d40f2 ret  */
  ESPCHK(0x118d4024u, _esp0);
  ESP += 4; return;
L_118d40f3:;
  /* 118d40f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d40f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d40f8 jne 0x118d40fd */
  if (!C.zf) goto L_118d40fd;
  /* 118d40fa push 1 */
  push32((uint32_t)(0x1u));
  /* 118d40fc pop eax */
  EAX = (pop32());
L_118d40fd:;
  /* 118d40fd add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4100 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 118d4102 push eax */
  push32((uint32_t)(EAX));
L_118d4103:;
  /* 118d4103 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d4105 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
}

/* FUN_1000408b @ 0x118d408b (9 bytes, 4 insns) */
void f_118d408b(void) {
  FTRACE(0x118d408bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d408b push 9 */
  push32((uint32_t)(0x9u));
  /* 118d408d call 0x118d3ee8 */
  push32(0x118d4092u); f_118d3ee8();
  /* 118d4092 pop ecx */
  ECX = (pop32());
  /* 118d4093 ret  */
  ESPCHK(0x118d408bu, _esp0);
  ESP += 4; return;
}

/* FUN_100040ea @ 0x118d40ea (9 bytes, 4 insns) */
void f_118d40ea(void) {
  FTRACE(0x118d40eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d40ea push 9 */
  push32((uint32_t)(0x9u));
  /* 118d40ec call 0x118d3ee8 */
  push32(0x118d40f1u); f_118d3ee8();
  /* 118d40f1 pop ecx */
  ECX = (pop32());
  /* 118d40f2 ret  */
  ESPCHK(0x118d40eau, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x118d4120 (7 bytes, 3 insns) */
void f_118d4120(void) {
  FTRACE(0x118d4120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4120 push edi */
  push32((uint32_t)(EDI));
  /* 118d4121 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d4125 jmp 0x118d4191 */
  jmp_ind(0x118d4191u); return;
}

/* FUN_10004130 @ 0x118d4130 (224 bytes, 84 insns) */
void f_118d4130(void) {
  FTRACE(0x118d4130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4130 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d4134 push edi */
  push32((uint32_t)(EDI));
  /* 118d4135 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118d413b je 0x118d414c */
  if (C.zf) goto L_118d414c;
L_118d413d:;
  /* 118d413d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 118d413f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d4140 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4142 je 0x118d417f */
  if (C.zf) goto L_118d417f;
  /* 118d4144 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118d414a jne 0x118d413d */
  if (!C.zf) goto L_118d413d;
L_118d414c:;
  /* 118d414c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118d414e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118d4153 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4155 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d4158 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118d415a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d415d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118d4162 je 0x118d414c */
  if (C.zf) goto L_118d414c;
  /* 118d4164 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 118d4167 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4169 je 0x118d418e */
  if (C.zf) goto L_118d418e;
  /* 118d416b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118d416d je 0x118d4189 */
  if (C.zf) goto L_118d4189;
  /* 118d416f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 118d4174 je 0x118d4184 */
  if (C.zf) goto L_118d4184;
  /* 118d4176 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 118d417b je 0x118d417f */
  if (C.zf) goto L_118d417f;
  /* 118d417d jmp 0x118d414c */
  goto L_118d414c;
L_118d417f:;
  /* 118d417f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 118d4182 jmp 0x118d4191 */
  goto L_118d4191;
L_118d4184:;
  /* 118d4184 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 118d4187 jmp 0x118d4191 */
  goto L_118d4191;
L_118d4189:;
  /* 118d4189 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 118d418c jmp 0x118d4191 */
  goto L_118d4191;
L_118d418e:;
  /* 118d418e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_118d4191:;
  /* 118d4191 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d4195 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118d419b je 0x118d41b6 */
  if (C.zf) goto L_118d41b6;
L_118d419d:;
  /* 118d419d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118d419f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d41a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d41a2 je 0x118d4208 */
  if (C.zf) goto L_118d4208;
  /* 118d41a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 118d41a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d41a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 118d41ad jne 0x118d419d */
  if (!C.zf) goto L_118d419d;
  /* 118d41af jmp 0x118d41b6 */
  goto L_118d41b6;
L_118d41b1:;
  /* 118d41b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118d41b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118d41b6:;
  /* 118d41b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118d41bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118d41bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d41bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d41c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118d41c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118d41c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d41c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118d41ce je 0x118d41b1 */
  if (C.zf) goto L_118d41b1;
  /* 118d41d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d41d2 je 0x118d4208 */
  if (C.zf) goto L_118d4208;
  /* 118d41d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 118d41d6 je 0x118d41ff */
  if (C.zf) goto L_118d41ff;
  /* 118d41d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 118d41de je 0x118d41f2 */
  if (C.zf) goto L_118d41f2;
  /* 118d41e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 118d41e6 je 0x118d41ea */
  if (C.zf) goto L_118d41ea;
  /* 118d41e8 jmp 0x118d41b1 */
  goto L_118d41b1;
L_118d41ea:;
  /* 118d41ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118d41ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d41f0 pop edi */
  EDI = (pop32());
  /* 118d41f1 ret  */
  ESPCHK(0x118d4130u, _esp0);
  ESP += 4; return;
L_118d41f2:;
  /* 118d41f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 118d41f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d41f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 118d41fd pop edi */
  EDI = (pop32());
  /* 118d41fe ret  */
  ESPCHK(0x118d4130u, _esp0);
  ESP += 4; return;
L_118d41ff:;
  /* 118d41ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 118d4202 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d4206 pop edi */
  EDI = (pop32());
  /* 118d4207 ret  */
  ESPCHK(0x118d4130u, _esp0);
  ESP += 4; return;
L_118d4208:;
  /* 118d4208 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 118d420a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d420e pop edi */
  EDI = (pop32());
  /* 118d420f ret  */
  ESPCHK(0x118d4130u, _esp0);
  ESP += 4; return;
}

/* FUN_10004210 @ 0x118d4210 (429 bytes, 143 insns) */
void f_118d4210(void) {
  FTRACE(0x118d4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4210 push ebp */
  push32((uint32_t)(EBP));
  /* 118d4211 mov ebp, esp */
  EBP = (ESP);
  /* 118d4213 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4216 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4217 push esi */
  push32((uint32_t)(ESI));
  /* 118d4218 push edi */
  push32((uint32_t)(EDI));
  /* 118d4219 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118d421b call 0x118d3e87 */
  push32(0x118d4220u); f_118d3e87();
  /* 118d4220 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118d4223 call 0x118d43bd */
  push32(0x118d4228u); f_118d43bd();
  /* 118d4228 mov ebx, eax */
  EBX = (EAX);
  /* 118d422a pop ecx */
  ECX = (pop32());
  /* 118d422b cmp ebx, dword ptr [0x118dc4b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x118dc4b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4231 pop ecx */
  ECX = (pop32());
  /* 118d4232 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d4235 jne 0x118d423e */
  if (!C.zf) goto L_118d423e;
L_118d4237:;
  /* 118d4237 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d4239 jmp 0x118d43ae */
  goto L_118d43ae;
L_118d423e:;
  /* 118d423e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d4240 je 0x118d439c */
  if (C.zf) goto L_118d439c;
  /* 118d4246 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d4248 mov eax, 0x118d9998 */
  EAX = (0x118d9998u);
L_118d424d:;
  /* 118d424d cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d424f je 0x118d42c5 */
  if (C.zf) goto L_118d42c5;
  /* 118d4251 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4254 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d4255 cmp eax, 0x118d9a88 */
  { uint32_t _a=(EAX),_b=(0x118d9a88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d425a jl 0x118d424d */
  if ((C.sf!=C.of)) goto L_118d424d;
  /* 118d425c lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 118d425f push eax */
  push32((uint32_t)(EAX));
  /* 118d4260 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4261 call dword ptr [0x118d8040] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8040))), 0x118d4267u);
  /* 118d4267 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d4269 pop esi */
  ESI = (pop32());
  /* 118d426a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d426c jne 0x118d4393 */
  if (!C.zf) goto L_118d4393;
  /* 118d4272 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118d4274 and dword ptr [0x118dc6e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x118dc6e4)))&(0x0u); w32((uint32_t)(0x118dc6e4), (_r)); fl_logic(_r,32); }
  /* 118d427b pop ecx */
  ECX = (pop32());
  /* 118d427c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d427e mov edi, 0x118dc5e0 */
  EDI = (0x118dc5e0u);
  /* 118d4283 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4286 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118d4288 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118d4289 mov dword ptr [0x118dc4b4], ebx */
  w32((uint32_t)(0x118dc4b4), (EBX));
  /* 118d428f jbe 0x118d4380 */
  if ((C.cf||C.zf)) goto L_118d4380;
  /* 118d4295 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4299 je 0x118d435b */
  if (C.zf) goto L_118d435b;
  /* 118d429f lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_118d42a2:;
  /* 118d42a2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118d42a4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d42a6 je 0x118d435b */
  if (C.zf) goto L_118d435b;
  /* 118d42ac movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 118d42b0 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_118d42b3:;
  /* 118d42b3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d42b5 ja 0x118d434f */
  if ((!C.cf&&!C.zf)) goto L_118d434f;
  /* 118d42bb or byte ptr [eax + 0x118dc5e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(0x4u); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d42c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d42c3 jmp 0x118d42b3 */
  goto L_118d42b3;
L_118d42c5:;
  /* 118d42c5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d42c9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118d42cb pop ecx */
  ECX = (pop32());
  /* 118d42cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d42ce mov edi, 0x118dc5e0 */
  EDI = (0x118dc5e0u);
  /* 118d42d3 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 118d42d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118d42d8 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118d42db stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118d42dc lea ebx, [esi + 0x118d99a8] */
  EBX = ((uint32_t)(ESI + 0x118d99a8));
L_118d42e2:;
  /* 118d42e2 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d42e5 mov ecx, ebx */
  ECX = (EBX);
  /* 118d42e7 je 0x118d4315 */
  if (C.zf) goto L_118d4315;
L_118d42e9:;
  /* 118d42e9 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118d42ec test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d42ee je 0x118d4315 */
  if (C.zf) goto L_118d4315;
  /* 118d42f0 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 118d42f3 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 118d42f6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d42f8 ja 0x118d430e */
  if ((!C.cf&&!C.zf)) goto L_118d430e;
  /* 118d42fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d42fd mov dl, byte ptr [edx + 0x118d9990] */
  DL = (r8((uint32_t)(EDX + 0x118d9990)));
L_118d4303:;
  /* 118d4303 or byte ptr [eax + 0x118dc5e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(DL); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d4309 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d430a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d430c jbe 0x118d4303 */
  if ((C.cf||C.zf)) goto L_118d4303;
L_118d430e:;
  /* 118d430e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d430f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d4310 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4313 jne 0x118d42e9 */
  if (!C.zf) goto L_118d42e9;
L_118d4315:;
  /* 118d4315 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118d4318 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d431b cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d431f jb 0x118d42e2 */
  if (C.cf) goto L_118d42e2;
  /* 118d4321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4324 mov dword ptr [0x118dc4cc], 1 */
  w32((uint32_t)(0x118dc4cc), (0x1u));
  /* 118d432e push eax */
  push32((uint32_t)(EAX));
  /* 118d432f mov dword ptr [0x118dc4b4], eax */
  w32((uint32_t)(0x118dc4b4), (EAX));
  /* 118d4334 call 0x118d4407 */
  push32(0x118d4339u); f_118d4407();
  /* 118d4339 lea esi, [esi + 0x118d999c] */
  ESI = ((uint32_t)(ESI + 0x118d999c));
  /* 118d433f mov edi, 0x118dc4c0 */
  EDI = (0x118dc4c0u);
  /* 118d4344 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118d4345 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118d4346 pop ecx */
  ECX = (pop32());
  /* 118d4347 mov dword ptr [0x118dc6e4], eax */
  w32((uint32_t)(0x118dc6e4), (EAX));
  /* 118d434c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118d434d jmp 0x118d43a1 */
  goto L_118d43a1;
L_118d434f:;
  /* 118d434f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d4350 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d4351 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4355 jne 0x118d42a2 */
  if (!C.zf) goto L_118d42a2;
L_118d435b:;
  /* 118d435b mov eax, esi */
  EAX = (ESI);
L_118d435d:;
  /* 118d435d or byte ptr [eax + 0x118dc5e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(0x8u); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d4364 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d4365 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d436a jb 0x118d435d */
  if (C.cf) goto L_118d435d;
  /* 118d436c push ebx */
  push32((uint32_t)(EBX));
  /* 118d436d call 0x118d4407 */
  push32(0x118d4372u); f_118d4407();
  /* 118d4372 pop ecx */
  ECX = (pop32());
  /* 118d4373 mov dword ptr [0x118dc6e4], eax */
  w32((uint32_t)(0x118dc6e4), (EAX));
  /* 118d4378 mov dword ptr [0x118dc4cc], esi */
  w32((uint32_t)(0x118dc4cc), (ESI));
  /* 118d437e jmp 0x118d4387 */
  goto L_118d4387;
L_118d4380:;
  /* 118d4380 and dword ptr [0x118dc4cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x118dc4cc)))&(0x0u); w32((uint32_t)(0x118dc4cc), (_r)); fl_logic(_r,32); }
L_118d4387:;
  /* 118d4387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4389 mov edi, 0x118dc4c0 */
  EDI = (0x118dc4c0u);
  /* 118d438e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118d438f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118d4390 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118d4391 jmp 0x118d43a1 */
  goto L_118d43a1;
L_118d4393:;
  /* 118d4393 cmp dword ptr [0x118dc300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dc300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d439a je 0x118d43ab */
  if (C.zf) goto L_118d43ab;
L_118d439c:;
  /* 118d439c call 0x118d443a */
  push32(0x118d43a1u); f_118d443a();
L_118d43a1:;
  /* 118d43a1 call 0x118d4463 */
  push32(0x118d43a6u); f_118d4463();
  /* 118d43a6 jmp 0x118d4237 */
  goto L_118d4237;
L_118d43ab:;
  /* 118d43ab or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_118d43ae:;
  /* 118d43ae push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118d43b0 call 0x118d3ee8 */
  push32(0x118d43b5u); f_118d3ee8();
  /* 118d43b5 pop ecx */
  ECX = (pop32());
  /* 118d43b6 mov eax, esi */
  EAX = (ESI);
  /* 118d43b8 pop edi */
  EDI = (pop32());
  /* 118d43b9 pop esi */
  ESI = (pop32());
  /* 118d43ba pop ebx */
  EBX = (pop32());
  /* 118d43bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d43bc ret  */
  ESPCHK(0x118d4210u, _esp0);
  ESP += 4; return;
}

/* FUN_100043bd @ 0x118d43bd (74 bytes, 15 insns) */
void f_118d43bd(void) {
  FTRACE(0x118d43bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d43bd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d43c1 and dword ptr [0x118dc300], 0 */
  { uint32_t _r=(r32((uint32_t)(0x118dc300)))&(0x0u); w32((uint32_t)(0x118dc300), (_r)); fl_logic(_r,32); }
  /* 118d43c8 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d43cb jne 0x118d43dd */
  if (!C.zf) goto L_118d43dd;
  /* 118d43cd mov dword ptr [0x118dc300], 1 */
  w32((uint32_t)(0x118dc300), (0x1u));
  /* 118d43d7 jmp dword ptr [0x118d8038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118d8038)))); return;
L_118d43dd:;
  /* 118d43dd cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d43e0 jne 0x118d43f2 */
  if (!C.zf) goto L_118d43f2;
  /* 118d43e2 mov dword ptr [0x118dc300], 1 */
  w32((uint32_t)(0x118dc300), (0x1u));
  /* 118d43ec jmp dword ptr [0x118d8044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118d8044)))); return;
L_118d43f2:;
  /* 118d43f2 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d43f5 jne 0x118d4406 */
  if (!C.zf) goto L_118d4406;
  /* 118d43f7 mov eax, dword ptr [0x118dc338] */
  EAX = (r32((uint32_t)(0x118dc338)));
  /* 118d43fc mov dword ptr [0x118dc300], 1 */
  w32((uint32_t)(0x118dc300), (0x1u));
L_118d4406:;
  /* 118d4406 ret  */
  ESPCHK(0x118d43bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10004407 @ 0x118d4407 (51 bytes, 19 insns) */
void f_118d4407(void) {
  FTRACE(0x118d4407u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4407 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d440b sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4410 je 0x118d4434 */
  if (C.zf) goto L_118d4434;
  /* 118d4412 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4415 je 0x118d442e */
  if (C.zf) goto L_118d442e;
  /* 118d4417 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d441a je 0x118d4428 */
  if (C.zf) goto L_118d4428;
  /* 118d441c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d441d je 0x118d4422 */
  if (C.zf) goto L_118d4422;
  /* 118d441f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4421 ret  */
  ESPCHK(0x118d4407u, _esp0);
  ESP += 4; return;
L_118d4422:;
  /* 118d4422 mov eax, 0x404 */
  EAX = (0x404u);
  /* 118d4427 ret  */
  ESPCHK(0x118d4407u, _esp0);
  ESP += 4; return;
L_118d4428:;
  /* 118d4428 mov eax, 0x412 */
  EAX = (0x412u);
  /* 118d442d ret  */
  ESPCHK(0x118d4407u, _esp0);
  ESP += 4; return;
L_118d442e:;
  /* 118d442e mov eax, 0x804 */
  EAX = (0x804u);
  /* 118d4433 ret  */
  ESPCHK(0x118d4407u, _esp0);
  ESP += 4; return;
L_118d4434:;
  /* 118d4434 mov eax, 0x411 */
  EAX = (0x411u);
  /* 118d4439 ret  */
  ESPCHK(0x118d4407u, _esp0);
  ESP += 4; return;
}

/* FUN_1000443a @ 0x118d443a (41 bytes, 17 insns) */
void f_118d443a(void) {
  FTRACE(0x118d443au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d443a push edi */
  push32((uint32_t)(EDI));
  /* 118d443b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118d443d pop ecx */
  ECX = (pop32());
  /* 118d443e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4440 mov edi, 0x118dc5e0 */
  EDI = (0x118dc5e0u);
  /* 118d4445 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118d4447 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118d4448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d444a mov edi, 0x118dc4c0 */
  EDI = (0x118dc4c0u);
  /* 118d444f mov dword ptr [0x118dc4b4], eax */
  w32((uint32_t)(0x118dc4b4), (EAX));
  /* 118d4454 mov dword ptr [0x118dc4cc], eax */
  w32((uint32_t)(0x118dc4cc), (EAX));
  /* 118d4459 mov dword ptr [0x118dc6e4], eax */
  w32((uint32_t)(0x118dc6e4), (EAX));
  /* 118d445e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118d445f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118d4460 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 118d4461 pop edi */
  EDI = (pop32());
  /* 118d4462 ret  */
  ESPCHK(0x118d443au, _esp0);
  ESP += 4; return;
}

/* FUN_10004463 @ 0x118d4463 (389 bytes, 124 insns) */
void f_118d4463(void) {
  FTRACE(0x118d4463u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4463 push ebp */
  push32((uint32_t)(EBP));
  /* 118d4464 mov ebp, esp */
  EBP = (ESP);
  /* 118d4466 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d446c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118d446f push esi */
  push32((uint32_t)(ESI));
  /* 118d4470 push eax */
  push32((uint32_t)(EAX));
  /* 118d4471 push dword ptr [0x118dc4b4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc4b4))));
  /* 118d4477 call dword ptr [0x118d8040] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8040))), 0x118d447du);
  /* 118d447d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4480 jne 0x118d459c */
  if (!C.zf) goto L_118d459c;
  /* 118d4486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4488 mov esi, 0x100 */
  ESI = (0x100u);
L_118d448d:;
  /* 118d448d mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 118d4494 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d4495 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4497 jb 0x118d448d */
  if (C.cf) goto L_118d448d;
  /* 118d4499 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 118d449c mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 118d44a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d44a5 je 0x118d44de */
  if (C.zf) goto L_118d44de;
  /* 118d44a7 push ebx */
  push32((uint32_t)(EBX));
  /* 118d44a8 push edi */
  push32((uint32_t)(EDI));
  /* 118d44a9 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_118d44ac:;
  /* 118d44ac movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 118d44af movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 118d44b2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d44b4 ja 0x118d44d3 */
  if ((!C.cf&&!C.zf)) goto L_118d44d3;
  /* 118d44b6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d44b8 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 118d44bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d44c0 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 118d44c5 mov ebx, ecx */
  EBX = (ECX);
  /* 118d44c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d44ca rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118d44cc mov ecx, ebx */
  ECX = (EBX);
  /* 118d44ce and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118d44d1 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_118d44d3:;
  /* 118d44d3 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d44d4 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d44d5 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 118d44d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d44da jne 0x118d44ac */
  if (!C.zf) goto L_118d44ac;
  /* 118d44dc pop edi */
  EDI = (pop32());
  /* 118d44dd pop ebx */
  EBX = (pop32());
L_118d44de:;
  /* 118d44de push 0 */
  push32((uint32_t)(0x0u));
  /* 118d44e0 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 118d44e6 push dword ptr [0x118dc6e4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc6e4))));
  /* 118d44ec push dword ptr [0x118dc4b4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc4b4))));
  /* 118d44f2 push eax */
  push32((uint32_t)(EAX));
  /* 118d44f3 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118d44f9 push esi */
  push32((uint32_t)(ESI));
  /* 118d44fa push eax */
  push32((uint32_t)(EAX));
  /* 118d44fb push 1 */
  push32((uint32_t)(0x1u));
  /* 118d44fd call 0x118d6557 */
  push32(0x118d4502u); f_118d6557();
  /* 118d4502 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d4504 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 118d450a push dword ptr [0x118dc4b4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc4b4))));
  /* 118d4510 push esi */
  push32((uint32_t)(ESI));
  /* 118d4511 push eax */
  push32((uint32_t)(EAX));
  /* 118d4512 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118d4518 push esi */
  push32((uint32_t)(ESI));
  /* 118d4519 push eax */
  push32((uint32_t)(EAX));
  /* 118d451a push esi */
  push32((uint32_t)(ESI));
  /* 118d451b push dword ptr [0x118dc6e4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc6e4))));
  /* 118d4521 call 0x118d6308 */
  push32(0x118d4526u); f_118d6308();
  /* 118d4526 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d4528 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 118d452e push dword ptr [0x118dc4b4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc4b4))));
  /* 118d4534 push esi */
  push32((uint32_t)(ESI));
  /* 118d4535 push eax */
  push32((uint32_t)(EAX));
  /* 118d4536 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118d453c push esi */
  push32((uint32_t)(ESI));
  /* 118d453d push eax */
  push32((uint32_t)(EAX));
  /* 118d453e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 118d4543 push dword ptr [0x118dc6e4] */
  push32((uint32_t)(r32((uint32_t)(0x118dc6e4))));
  /* 118d4549 call 0x118d6308 */
  push32(0x118d454eu); f_118d6308();
  /* 118d454e add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4551 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4553 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_118d4559:;
  /* 118d4559 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 118d455c test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 118d455f je 0x118d4577 */
  if (C.zf) goto L_118d4577;
  /* 118d4561 or byte ptr [eax + 0x118dc5e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(0x10u); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d4568 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_118d456f:;
  /* 118d456f mov byte ptr [eax + 0x118dc4e0], dl */
  w8((uint32_t)(EAX + 0x118dc4e0), (DL));
  /* 118d4575 jmp 0x118d4593 */
  goto L_118d4593;
L_118d4577:;
  /* 118d4577 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 118d457a je 0x118d458c */
  if (C.zf) goto L_118d458c;
  /* 118d457c or byte ptr [eax + 0x118dc5e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(0x20u); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d4583 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 118d458a jmp 0x118d456f */
  goto L_118d456f;
L_118d458c:;
  /* 118d458c and byte ptr [eax + 0x118dc4e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc4e0)))&(0x0u); w8((uint32_t)(EAX + 0x118dc4e0), (_r)); fl_logic(_r,8); }
L_118d4593:;
  /* 118d4593 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d4594 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d4595 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118d4596 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4598 jb 0x118d4559 */
  if (C.cf) goto L_118d4559;
  /* 118d459a jmp 0x118d45e5 */
  goto L_118d45e5;
L_118d459c:;
  /* 118d459c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d459e mov esi, 0x100 */
  ESI = (0x100u);
L_118d45a3:;
  /* 118d45a3 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d45a6 jb 0x118d45c1 */
  if (C.cf) goto L_118d45c1;
  /* 118d45a8 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d45ab ja 0x118d45c1 */
  if ((!C.cf&&!C.zf)) goto L_118d45c1;
  /* 118d45ad or byte ptr [eax + 0x118dc5e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(0x10u); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d45b4 mov cl, al */
  CL = (AL);
  /* 118d45b6 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_118d45b9:;
  /* 118d45b9 mov byte ptr [eax + 0x118dc4e0], cl */
  w8((uint32_t)(EAX + 0x118dc4e0), (CL));
  /* 118d45bf jmp 0x118d45e0 */
  goto L_118d45e0;
L_118d45c1:;
  /* 118d45c1 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d45c4 jb 0x118d45d9 */
  if (C.cf) goto L_118d45d9;
  /* 118d45c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d45c9 ja 0x118d45d9 */
  if ((!C.cf&&!C.zf)) goto L_118d45d9;
  /* 118d45cb or byte ptr [eax + 0x118dc5e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc5e1)))|(0x20u); w8((uint32_t)(EAX + 0x118dc5e1), (_r)); fl_logic(_r,8); }
  /* 118d45d2 mov cl, al */
  CL = (AL);
  /* 118d45d4 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118d45d7 jmp 0x118d45b9 */
  goto L_118d45b9;
L_118d45d9:;
  /* 118d45d9 and byte ptr [eax + 0x118dc4e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x118dc4e0)))&(0x0u); w8((uint32_t)(EAX + 0x118dc4e0), (_r)); fl_logic(_r,8); }
L_118d45e0:;
  /* 118d45e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d45e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d45e3 jb 0x118d45a3 */
  if (C.cf) goto L_118d45a3;
L_118d45e5:;
  /* 118d45e5 pop esi */
  ESI = (pop32());
  /* 118d45e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d45e7 ret  */
  ESPCHK(0x118d4463u, _esp0);
  ESP += 4; return;
}

/* FUN_100045e8 @ 0x118d45e8 (28 bytes, 7 insns) */
void f_118d45e8(void) {
  FTRACE(0x118d45e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d45e8 cmp dword ptr [0x118dd828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118dd828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d45ef jne 0x118d4603 */
  if (!C.zf) goto L_118d4603;
  /* 118d45f1 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 118d45f3 call 0x118d4210 */
  push32(0x118d45f8u); f_118d4210();
  /* 118d45f8 pop ecx */
  ECX = (pop32());
  /* 118d45f9 mov dword ptr [0x118dd828], 1 */
  w32((uint32_t)(0x118dd828), (0x1u));
L_118d4603:;
  /* 118d4603 ret  */
  ESPCHK(0x118d45e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004610 @ 0x118d4610 (664 bytes, 267 insns) [15 switch table(s)] */
void f_118d4610(void) {
  FTRACE(0x118d4610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4610 push ebp */
  push32((uint32_t)(EBP));
  /* 118d4611 mov ebp, esp */
  EBP = (ESP);
  /* 118d4613 push edi */
  push32((uint32_t)(EDI));
  /* 118d4614 push esi */
  push32((uint32_t)(ESI));
  /* 118d4615 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4618 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d461b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d461e mov eax, ecx */
  EAX = (ECX);
  /* 118d4620 mov edx, ecx */
  EDX = (ECX);
  /* 118d4622 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4624 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4626 jbe 0x118d4630 */
  if ((C.cf||C.zf)) goto L_118d4630;
  /* 118d4628 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d462a jb 0x118d47a8 */
  if (C.cf) goto L_118d47a8;
L_118d4630:;
  /* 118d4630 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118d4636 jne 0x118d464c */
  if (!C.zf) goto L_118d464c;
  /* 118d4638 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d463b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118d463e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4641 jb 0x118d466c */
  if (C.cf) goto L_118d466c;
  /* 118d4643 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d4645 jmp dword ptr [edx*4 + 0x118d4758] */
  switch (EDX) {
    case 0: goto L_118d4768;
    case 1: goto L_118d4770;
    case 2: goto L_118d477c;
    case 3: goto L_118d4790;
    default: x86_unimpl("switch@0x118d4645 out of table"); return;
  }
L_118d464c:;
  /* 118d464c mov eax, edi */
  EAX = (EDI);
  /* 118d464e mov edx, 3 */
  EDX = (0x3u);
  /* 118d4653 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4656 jb 0x118d4664 */
  if (C.cf) goto L_118d4664;
  /* 118d4658 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118d465b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d465d jmp dword ptr [eax*4 + 0x118d4670] */
  switch (EAX) {
    case 1: goto L_118d4680;
    case 2: goto L_118d46ac;
    case 3: goto L_118d46d0;
    default: x86_unimpl("switch@0x118d465d out of table"); return;
  }
L_118d4664:;
  /* 118d4664 jmp dword ptr [ecx*4 + 0x118d4768] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x118d4768)))); return;
  /* 118d466b nop  */
  /* nop */
L_118d466c:;
  /* 118d466c jmp dword ptr [ecx*4 + 0x118d46ec] */
  switch (ECX) {
    case 0: goto L_118d474f;
    case 1: goto L_118d473c;
    case 2: goto L_118d4734;
    case 3: goto L_118d472c;
    case 4: goto L_118d4724;
    case 5: goto L_118d471c;
    case 6: goto L_118d4714;
    case 7: goto L_118d470c;
    default: x86_unimpl("switch@0x118d466c out of table"); return;
  }
  /* 118d4673 nop  */
  /* nop */
L_118d4680:;
  /* 118d4680 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d4682 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4684 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d4686 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d4689 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d468c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d468f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d4692 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d4695 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4698 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d469b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d469e jb 0x118d466c */
  if (C.cf) goto L_118d466c;
  /* 118d46a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d46a2 jmp dword ptr [edx*4 + 0x118d4758] */
  switch (EDX) {
    case 0: goto L_118d4768;
    case 1: goto L_118d4770;
    case 2: goto L_118d477c;
    case 3: goto L_118d4790;
    default: x86_unimpl("switch@0x118d46a2 out of table"); return;
  }
  /* 118d46a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d46ac:;
  /* 118d46ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d46ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d46b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d46b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d46b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d46b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d46bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d46be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d46c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d46c4 jb 0x118d466c */
  if (C.cf) goto L_118d466c;
  /* 118d46c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d46c8 jmp dword ptr [edx*4 + 0x118d4758] */
  switch (EDX) {
    case 0: goto L_118d4768;
    case 1: goto L_118d4770;
    case 2: goto L_118d477c;
    case 3: goto L_118d4790;
    default: x86_unimpl("switch@0x118d46c8 out of table"); return;
  }
  /* 118d46cf nop  */
  /* nop */
L_118d46d0:;
  /* 118d46d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d46d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d46d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d46d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d46d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d46da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d46db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d46de jb 0x118d466c */
  if (C.cf) goto L_118d466c;
  /* 118d46e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d46e2 jmp dword ptr [edx*4 + 0x118d4758] */
  switch (EDX) {
    case 0: goto L_118d4768;
    case 1: goto L_118d4770;
    case 2: goto L_118d477c;
    case 3: goto L_118d4790;
    default: x86_unimpl("switch@0x118d46e2 out of table"); return;
  }
  /* 118d46e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d470c:;
  /* 118d470c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 118d4710 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_118d4714:;
  /* 118d4714 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 118d4718 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_118d471c:;
  /* 118d471c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 118d4720 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_118d4724:;
  /* 118d4724 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 118d4728 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_118d472c:;
  /* 118d472c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 118d4730 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_118d4734:;
  /* 118d4734 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 118d4738 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_118d473c:;
  /* 118d473c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 118d4740 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 118d4744 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118d474b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d474d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118d474f:;
  /* 118d474f jmp dword ptr [edx*4 + 0x118d4758] */
  switch (EDX) {
    case 0: goto L_118d4768;
    case 1: goto L_118d4770;
    case 2: goto L_118d477c;
    case 3: goto L_118d4790;
    default: x86_unimpl("switch@0x118d474f out of table"); return;
  }
  /* 118d4756 mov edi, edi */
  EDI = (EDI);
L_118d4768:;
  /* 118d4768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d476b pop esi */
  ESI = (pop32());
  /* 118d476c pop edi */
  EDI = (pop32());
  /* 118d476d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d476e ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d476f nop  */
  /* nop */
L_118d4770:;
  /* 118d4770 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d4774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4777 pop esi */
  ESI = (pop32());
  /* 118d4778 pop edi */
  EDI = (pop32());
  /* 118d4779 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d477a ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d477b nop  */
  /* nop */
L_118d477c:;
  /* 118d477c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d477e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d4780 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d4783 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d4786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4789 pop esi */
  ESI = (pop32());
  /* 118d478a pop edi */
  EDI = (pop32());
  /* 118d478b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d478c ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d478d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d4790:;
  /* 118d4790 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d4794 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d4797 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d479a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d479d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d47a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d47a3 pop esi */
  ESI = (pop32());
  /* 118d47a4 pop edi */
  EDI = (pop32());
  /* 118d47a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d47a6 ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d47a7 nop  */
  /* nop */
L_118d47a8:;
  /* 118d47a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 118d47ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 118d47b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118d47b6 jne 0x118d47dc */
  if (!C.zf) goto L_118d47dc;
  /* 118d47b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d47bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118d47be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d47c1 jb 0x118d47d0 */
  if (C.cf) goto L_118d47d0;
  /* 118d47c3 std  */
  C.df=1;
  /* 118d47c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d47c6 cld  */
  C.df=0;
  /* 118d47c7 jmp dword ptr [edx*4 + 0x118d48f0] */
  switch (EDX) {
    case 0: goto L_118d4900;
    case 1: goto L_118d4908;
    case 2: goto L_118d4918;
    case 3: goto L_118d492c;
    default: x86_unimpl("switch@0x118d47c7 out of table"); return;
  }
  /* 118d47ce mov edi, edi */
  EDI = (EDI);
L_118d47d0:;
  /* 118d47d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d47d2 jmp dword ptr [ecx*4 + 0x118d48a0] */
  switch (ECX) {
    case 0: goto L_118d48e7;
    default: x86_unimpl("switch@0x118d47d2 out of table"); return;
  }
  /* 118d47d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d47dc:;
  /* 118d47dc mov eax, edi */
  EAX = (EDI);
  /* 118d47de mov edx, 3 */
  EDX = (0x3u);
  /* 118d47e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d47e6 jb 0x118d47f4 */
  if (C.cf) goto L_118d47f4;
  /* 118d47e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118d47eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d47ed jmp dword ptr [eax*4 + 0x118d47f8] */
  switch (EAX) {
    case 1: goto L_118d4808;
    case 2: goto L_118d4828;
    case 3: goto L_118d4850;
    default: x86_unimpl("switch@0x118d47ed out of table"); return;
  }
L_118d47f4:;
  /* 118d47f4 jmp dword ptr [ecx*4 + 0x118d48f0] */
  switch (ECX) {
    case 0: goto L_118d4900;
    case 1: goto L_118d4908;
    case 2: goto L_118d4918;
    case 3: goto L_118d492c;
    default: x86_unimpl("switch@0x118d47f4 out of table"); return;
  }
  /* 118d47fb nop  */
  /* nop */
L_118d4808:;
  /* 118d4808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d480b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d480d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d4810 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118d4811 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d4814 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118d4815 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4818 jb 0x118d47d0 */
  if (C.cf) goto L_118d47d0;
  /* 118d481a std  */
  C.df=1;
  /* 118d481b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d481d cld  */
  C.df=0;
  /* 118d481e jmp dword ptr [edx*4 + 0x118d48f0] */
  switch (EDX) {
    case 0: goto L_118d4900;
    case 1: goto L_118d4908;
    case 2: goto L_118d4918;
    case 3: goto L_118d492c;
    default: x86_unimpl("switch@0x118d481e out of table"); return;
  }
  /* 118d4825 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d4828:;
  /* 118d4828 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d482b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d482d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d4830 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d4833 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d4836 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d4839 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d483c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d483f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4842 jb 0x118d47d0 */
  if (C.cf) goto L_118d47d0;
  /* 118d4844 std  */
  C.df=1;
  /* 118d4845 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d4847 cld  */
  C.df=0;
  /* 118d4848 jmp dword ptr [edx*4 + 0x118d48f0] */
  switch (EDX) {
    case 0: goto L_118d4900;
    case 1: goto L_118d4908;
    case 2: goto L_118d4918;
    case 3: goto L_118d492c;
    default: x86_unimpl("switch@0x118d4848 out of table"); return;
  }
  /* 118d484f nop  */
  /* nop */
L_118d4850:;
  /* 118d4850 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d4853 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d4855 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d4858 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d485b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d485e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d4861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d4864 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d4867 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d486a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d486d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4870 jb 0x118d47d0 */
  if (C.cf) goto L_118d47d0;
  /* 118d4876 std  */
  C.df=1;
  /* 118d4877 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118d4879 cld  */
  C.df=0;
  /* 118d487a jmp dword ptr [edx*4 + 0x118d48f0] */
  switch (EDX) {
    case 0: goto L_118d4900;
    case 1: goto L_118d4908;
    case 2: goto L_118d4918;
    case 3: goto L_118d492c;
    default: x86_unimpl("switch@0x118d487a out of table"); return;
  }
  /* 118d4881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 118d4884 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 118d4885 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d4886 lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d4888 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 118d4889 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d488a lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d488c mov ah, 0x48 */
  AH = (0x48u);
  /* 118d488e lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d4890 mov esp, 0xc4118d48 */
  ESP = (0xc4118d48u);
  /* 118d4895 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d4896 lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d4898 int3  */
  x86_unimpl("int3 @ 0x118d4898");
  /* 118d4899 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118d489a lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d489c aam 0x48 */
  x86_unimpl("aam @ 0x118d489c");
  /* 118d489e lea edx, [ecx] */
  EDX = ((uint32_t)(ECX));
  /* 118d48a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 118d48a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 118d48ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 118d48b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 118d48b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 118d48b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 118d48bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 118d48c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 118d48c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 118d48c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 118d48cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 118d48d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 118d48d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 118d48d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 118d48dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118d48e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d48e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118d48e7:;
  /* 118d48e7 jmp dword ptr [edx*4 + 0x118d48f0] */
  switch (EDX) {
    case 0: goto L_118d4900;
    case 1: goto L_118d4908;
    case 2: goto L_118d4918;
    case 3: goto L_118d492c;
    default: x86_unimpl("switch@0x118d48e7 out of table"); return;
  }
  /* 118d48ee mov edi, edi */
  EDI = (EDI);
L_118d4900:;
  /* 118d4900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4903 pop esi */
  ESI = (pop32());
  /* 118d4904 pop edi */
  EDI = (pop32());
  /* 118d4905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d4906 ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d4907 nop  */
  /* nop */
L_118d4908:;
  /* 118d4908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d490b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d490e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4911 pop esi */
  ESI = (pop32());
  /* 118d4912 pop edi */
  EDI = (pop32());
  /* 118d4913 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d4914 ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d4915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118d4918:;
  /* 118d4918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d491b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d491e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d4921 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d4924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4927 pop esi */
  ESI = (pop32());
  /* 118d4928 pop edi */
  EDI = (pop32());
  /* 118d4929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d492a ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
  /* 118d492b nop  */
  /* nop */
L_118d492c:;
  /* 118d492c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118d492f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118d4932 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118d4935 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118d4938 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d493b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118d493e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4941 pop esi */
  ESI = (pop32());
  /* 118d4942 pop edi */
  EDI = (pop32());
  /* 118d4943 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d4944 ret  */
  ESPCHK(0x118d4610u, _esp0);
  ESP += 4; return;
}

/* FUN_10004945 @ 0x118d4945 (23 bytes, 7 insns) */
void f_118d4945(void) {
  FTRACE(0x118d4945u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4945 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d4947 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118d494b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118d494f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118d4953 call 0x118d495c */
  push32(0x118d4958u); f_118d495c();
  /* 118d4958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d495b ret  */
  ESPCHK(0x118d4945u, _esp0);
  ESP += 4; return;
}

/* FUN_1000495c @ 0x118d495c (517 bytes, 195 insns) */
void f_118d495c(void) {
  FTRACE(0x118d495cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d495c push ebp */
  push32((uint32_t)(EBP));
  /* 118d495d mov ebp, esp */
  EBP = (ESP);
  /* 118d495f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4962 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4963 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118d4967 push esi */
  push32((uint32_t)(ESI));
  /* 118d4968 push edi */
  push32((uint32_t)(EDI));
  /* 118d4969 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d496c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118d496e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 118d4971 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_118d4974:;
  /* 118d4974 cmp dword ptr [0x118dbd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dbd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d497b jle 0x118d498c */
  if ((C.zf||C.sf!=C.of)) goto L_118d498c;
  /* 118d497d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118d4980 push 8 */
  push32((uint32_t)(0x8u));
  /* 118d4982 push eax */
  push32((uint32_t)(EAX));
  /* 118d4983 call 0x118d67db */
  push32(0x118d4988u); f_118d67db();
  /* 118d4988 pop ecx */
  ECX = (pop32());
  /* 118d4989 pop ecx */
  ECX = (pop32());
  /* 118d498a jmp 0x118d499b */
  goto L_118d499b;
L_118d498c:;
  /* 118d498c mov ecx, dword ptr [0x118d9628] */
  ECX = (r32((uint32_t)(0x118d9628)));
  /* 118d4992 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118d4995 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118d4998 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_118d499b:;
  /* 118d499b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d499d je 0x118d49a4 */
  if (C.zf) goto L_118d49a4;
  /* 118d499f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 118d49a1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d49a2 jmp 0x118d4974 */
  goto L_118d4974;
L_118d49a4:;
  /* 118d49a4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d49a7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 118d49aa jne 0x118d49b2 */
  if (!C.zf) goto L_118d49b2;
  /* 118d49ac or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 118d49b0 jmp 0x118d49b7 */
  goto L_118d49b7;
L_118d49b2:;
  /* 118d49b2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d49b5 jne 0x118d49bd */
  if (!C.zf) goto L_118d49bd;
L_118d49b7:;
  /* 118d49b7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 118d49b9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d49ba mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_118d49bd:;
  /* 118d49bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d49c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d49c2 jl 0x118d4b51 */
  if ((C.sf!=C.of)) goto L_118d4b51;
  /* 118d49c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d49cb je 0x118d4b51 */
  if (C.zf) goto L_118d4b51;
  /* 118d49d1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d49d4 jg 0x118d4b51 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d4b51;
  /* 118d49da push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118d49dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d49de pop ecx */
  ECX = (pop32());
  /* 118d49df jne 0x118d4a05 */
  if (!C.zf) goto L_118d4a05;
  /* 118d49e1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d49e4 je 0x118d49ef */
  if (C.zf) goto L_118d49ef;
  /* 118d49e6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 118d49ed jmp 0x118d4a21 */
  goto L_118d4a21;
L_118d49ef:;
  /* 118d49ef mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d49f1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d49f3 je 0x118d4a02 */
  if (C.zf) goto L_118d4a02;
  /* 118d49f5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d49f7 je 0x118d4a02 */
  if (C.zf) goto L_118d4a02;
  /* 118d49f9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 118d4a00 jmp 0x118d4a21 */
  goto L_118d4a21;
L_118d4a02:;
  /* 118d4a02 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_118d4a05:;
  /* 118d4a05 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4a08 jne 0x118d4a21 */
  if (!C.zf) goto L_118d4a21;
  /* 118d4a0a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4a0d jne 0x118d4a21 */
  if (!C.zf) goto L_118d4a21;
  /* 118d4a0f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4a11 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4a13 je 0x118d4a19 */
  if (C.zf) goto L_118d4a19;
  /* 118d4a15 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4a17 jne 0x118d4a21 */
  if (!C.zf) goto L_118d4a21;
L_118d4a19:;
  /* 118d4a19 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 118d4a1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d4a1d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d4a1e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_118d4a21:;
  /* 118d4a21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d4a24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d4a26 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d4a29 mov edi, 0x103 */
  EDI = (0x103u);
  /* 118d4a2e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118d4a31:;
  /* 118d4a31 cmp dword ptr [0x118dbd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dbd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4a38 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 118d4a3b jle 0x118d4a49 */
  if ((C.zf||C.sf!=C.of)) goto L_118d4a49;
  /* 118d4a3d push 4 */
  push32((uint32_t)(0x4u));
  /* 118d4a3f push esi */
  push32((uint32_t)(ESI));
  /* 118d4a40 call 0x118d67db */
  push32(0x118d4a45u); f_118d67db();
  /* 118d4a45 pop ecx */
  ECX = (pop32());
  /* 118d4a46 pop ecx */
  ECX = (pop32());
  /* 118d4a47 jmp 0x118d4a54 */
  goto L_118d4a54;
L_118d4a49:;
  /* 118d4a49 mov eax, dword ptr [0x118d9628] */
  EAX = (r32((uint32_t)(0x118d9628)));
  /* 118d4a4e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 118d4a51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118d4a54:;
  /* 118d4a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4a56 je 0x118d4a60 */
  if (C.zf) goto L_118d4a60;
  /* 118d4a58 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d4a5b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4a5e jmp 0x118d4a92 */
  goto L_118d4a92;
L_118d4a60:;
  /* 118d4a60 cmp dword ptr [0x118dbd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118dbd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4a67 jle 0x118d4a74 */
  if ((C.zf||C.sf!=C.of)) goto L_118d4a74;
  /* 118d4a69 push edi */
  push32((uint32_t)(EDI));
  /* 118d4a6a push esi */
  push32((uint32_t)(ESI));
  /* 118d4a6b call 0x118d67db */
  push32(0x118d4a70u); f_118d67db();
  /* 118d4a70 pop ecx */
  ECX = (pop32());
  /* 118d4a71 pop ecx */
  ECX = (pop32());
  /* 118d4a72 jmp 0x118d4a7f */
  goto L_118d4a7f;
L_118d4a74:;
  /* 118d4a74 mov eax, dword ptr [0x118d9628] */
  EAX = (r32((uint32_t)(0x118d9628)));
  /* 118d4a79 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 118d4a7d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_118d4a7f:;
  /* 118d4a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4a81 je 0x118d4acd */
  if (C.zf) goto L_118d4acd;
  /* 118d4a83 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118d4a86 push eax */
  push32((uint32_t)(EAX));
  /* 118d4a87 call 0x118d66a0 */
  push32(0x118d4a8cu); f_118d66a0();
  /* 118d4a8c pop ecx */
  ECX = (pop32());
  /* 118d4a8d mov ecx, eax */
  ECX = (EAX);
  /* 118d4a8f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_118d4a92:;
  /* 118d4a92 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4a95 jae 0x118d4acd */
  if (!C.cf) goto L_118d4acd;
  /* 118d4a97 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 118d4a9a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 118d4a9e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4aa1 jb 0x118d4ab7 */
  if (C.cf) goto L_118d4ab7;
  /* 118d4aa3 jne 0x118d4ab1 */
  if (!C.zf) goto L_118d4ab1;
  /* 118d4aa5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d4aa8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d4aaa div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118d4aad cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4aaf jbe 0x118d4ab7 */
  if ((C.cf||C.zf)) goto L_118d4ab7;
L_118d4ab1:;
  /* 118d4ab1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 118d4ab5 jmp 0x118d4ac0 */
  goto L_118d4ac0;
L_118d4ab7:;
  /* 118d4ab7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d4abb add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4abd mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_118d4ac0:;
  /* 118d4ac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d4ac3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118d4ac6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 118d4ac8 jmp 0x118d4a31 */
  goto L_118d4a31;
L_118d4acd:;
  /* 118d4acd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118d4ad0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118d4ad3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4ad6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118d4ad8 jne 0x118d4aea */
  if (!C.zf) goto L_118d4aea;
  /* 118d4ada test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d4adc je 0x118d4ae4 */
  if (C.zf) goto L_118d4ae4;
  /* 118d4ade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4ae1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118d4ae4:;
  /* 118d4ae4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118d4ae8 jmp 0x118d4b35 */
  goto L_118d4b35;
L_118d4aea:;
  /* 118d4aea test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 118d4aec mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 118d4af1 jne 0x118d4b0e */
  if (!C.zf) goto L_118d4b0e;
  /* 118d4af3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118d4af5 jne 0x118d4b35 */
  if (!C.zf) goto L_118d4b35;
  /* 118d4af7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 118d4afa je 0x118d4b05 */
  if (C.zf) goto L_118d4b05;
  /* 118d4afc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4b03 ja 0x118d4b0e */
  if ((!C.cf&&!C.zf)) goto L_118d4b0e;
L_118d4b05:;
  /* 118d4b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4b07 jne 0x118d4b35 */
  if (!C.zf) goto L_118d4b35;
  /* 118d4b09 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4b0c jbe 0x118d4b35 */
  if ((C.cf||C.zf)) goto L_118d4b35;
L_118d4b0e:;
  /* 118d4b0e call 0x118d5da1 */
  push32(0x118d4b13u); f_118d5da1();
  /* 118d4b13 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 118d4b17 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 118d4b1d je 0x118d4b25 */
  if (C.zf) goto L_118d4b25;
  /* 118d4b1f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118d4b23 jmp 0x118d4b35 */
  goto L_118d4b35;
L_118d4b25:;
  /* 118d4b25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118d4b28 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 118d4b2a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 118d4b2c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4b2e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d4b30 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4b32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118d4b35:;
  /* 118d4b35 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d4b37 je 0x118d4b3e */
  if (C.zf) goto L_118d4b3e;
  /* 118d4b39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d4b3c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_118d4b3e:;
  /* 118d4b3e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 118d4b42 je 0x118d4b4c */
  if (C.zf) goto L_118d4b4c;
  /* 118d4b44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d4b47 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d4b49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118d4b4c:;
  /* 118d4b4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d4b4f jmp 0x118d4b5c */
  goto L_118d4b5c;
L_118d4b51:;
  /* 118d4b51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4b56 je 0x118d4b5a */
  if (C.zf) goto L_118d4b5a;
  /* 118d4b58 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_118d4b5a:;
  /* 118d4b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d4b5c:;
  /* 118d4b5c pop edi */
  EDI = (pop32());
  /* 118d4b5d pop esi */
  ESI = (pop32());
  /* 118d4b5e pop ebx */
  EBX = (pop32());
  /* 118d4b5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d4b60 ret  */
  ESPCHK(0x118d495cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x118d4b80 (193 bytes, 90 insns) */
void f_118d4b80(void) {
  FTRACE(0x118d4b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4b82 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 118d4b86 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4b87 mov ebx, eax */
  EBX = (EAX);
  /* 118d4b89 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118d4b8c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d4b90 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118d4b96 je 0x118d4bab */
  if (C.zf) goto L_118d4bab;
L_118d4b98:;
  /* 118d4b98 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 118d4b9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d4b9b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4b9d je 0x118d4b70 */
  if (C.zf) { jmp_ind(0x118d4b70u); return; }
  /* 118d4b9f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 118d4ba1 je 0x118d4bf4 */
  if (C.zf) goto L_118d4bf4;
  /* 118d4ba3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118d4ba9 jne 0x118d4b98 */
  if (!C.zf) goto L_118d4b98;
L_118d4bab:;
  /* 118d4bab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 118d4bad push edi */
  push32((uint32_t)(EDI));
  /* 118d4bae mov eax, ebx */
  EAX = (EBX);
  /* 118d4bb0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 118d4bb3 push esi */
  push32((uint32_t)(ESI));
  /* 118d4bb4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_118d4bb6:;
  /* 118d4bb6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118d4bb8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 118d4bbd mov eax, ecx */
  EAX = (ECX);
  /* 118d4bbf mov esi, edi */
  ESI = (EDI);
  /* 118d4bc1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 118d4bc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4bc5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4bc7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118d4bca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d4bcd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118d4bcf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 118d4bd1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4bd4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 118d4bda jne 0x118d4bf8 */
  if (!C.zf) goto L_118d4bf8;
  /* 118d4bdc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 118d4be1 je 0x118d4bb6 */
  if (C.zf) goto L_118d4bb6;
  /* 118d4be3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 118d4be8 jne 0x118d4bf2 */
  if (!C.zf) goto L_118d4bf2;
  /* 118d4bea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 118d4bf0 jne 0x118d4bb6 */
  if (!C.zf) goto L_118d4bb6;
L_118d4bf2:;
  /* 118d4bf2 pop esi */
  ESI = (pop32());
  /* 118d4bf3 pop edi */
  EDI = (pop32());
L_118d4bf4:;
  /* 118d4bf4 pop ebx */
  EBX = (pop32());
  /* 118d4bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4bf7 ret  */
  ESPCHK(0x118d4b80u, _esp0);
  ESP += 4; return;
L_118d4bf8:;
  /* 118d4bf8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 118d4bfb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4bfd je 0x118d4c35 */
  if (C.zf) goto L_118d4c35;
  /* 118d4bff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4c01 je 0x118d4bf2 */
  if (C.zf) goto L_118d4bf2;
  /* 118d4c03 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c05 je 0x118d4c2e */
  if (C.zf) goto L_118d4c2e;
  /* 118d4c07 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118d4c09 je 0x118d4bf2 */
  if (C.zf) goto L_118d4bf2;
  /* 118d4c0b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118d4c0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c10 je 0x118d4c27 */
  if (C.zf) goto L_118d4c27;
  /* 118d4c12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4c14 je 0x118d4bf2 */
  if (C.zf) goto L_118d4bf2;
  /* 118d4c16 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c18 je 0x118d4c20 */
  if (C.zf) goto L_118d4c20;
  /* 118d4c1a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118d4c1c je 0x118d4bf2 */
  if (C.zf) goto L_118d4bf2;
  /* 118d4c1e jmp 0x118d4bb6 */
  goto L_118d4bb6;
L_118d4c20:;
  /* 118d4c20 pop esi */
  ESI = (pop32());
  /* 118d4c21 pop edi */
  EDI = (pop32());
  /* 118d4c22 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 118d4c25 pop ebx */
  EBX = (pop32());
  /* 118d4c26 ret  */
  ESPCHK(0x118d4b80u, _esp0);
  ESP += 4; return;
L_118d4c27:;
  /* 118d4c27 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 118d4c2a pop esi */
  ESI = (pop32());
  /* 118d4c2b pop edi */
  EDI = (pop32());
  /* 118d4c2c pop ebx */
  EBX = (pop32());
  /* 118d4c2d ret  */
  ESPCHK(0x118d4b80u, _esp0);
  ESP += 4; return;
L_118d4c2e:;
  /* 118d4c2e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 118d4c31 pop esi */
  ESI = (pop32());
  /* 118d4c32 pop edi */
  EDI = (pop32());
  /* 118d4c33 pop ebx */
  EBX = (pop32());
  /* 118d4c34 ret  */
  ESPCHK(0x118d4b80u, _esp0);
  ESP += 4; return;
L_118d4c35:;
  /* 118d4c35 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 118d4c38 pop esi */
  ESI = (pop32());
  /* 118d4c39 pop edi */
  EDI = (pop32());
  /* 118d4c3a pop ebx */
  EBX = (pop32());
  /* 118d4c3b ret  */
  ESPCHK(0x118d4b80u, _esp0);
  ESP += 4; return;
  /* 118d4c3c int3  */
  x86_unimpl("int3 @ 0x118d4c3c");
  /* 118d4c3d int3  */
  x86_unimpl("int3 @ 0x118d4c3d");
  /* 118d4c3e int3  */
  x86_unimpl("int3 @ 0x118d4c3e");
  /* 118d4c3f int3  */
  x86_unimpl("int3 @ 0x118d4c3f");
}

/* _strstr @ 0x118d4c40 (128 bytes, 66 insns) */
void f_118d4c40(void) {
  FTRACE(0x118d4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4c40 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d4c44 push edi */
  push32((uint32_t)(EDI));
  /* 118d4c45 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4c46 push esi */
  push32((uint32_t)(ESI));
  /* 118d4c47 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118d4c49 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118d4c4d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d4c4f je 0x118d4cba */
  if (C.zf) goto L_118d4cba;
  /* 118d4c51 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 118d4c54 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 118d4c56 je 0x118d4ca7 */
  if (C.zf) goto L_118d4ca7;
L_118d4c58:;
  /* 118d4c58 mov esi, edi */
  ESI = (EDI);
  /* 118d4c5a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 118d4c5e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118d4c60 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d4c61 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c63 je 0x118d4c7a */
  if (C.zf) goto L_118d4c7a;
  /* 118d4c65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4c67 je 0x118d4c74 */
  if (C.zf) goto L_118d4c74;
L_118d4c69:;
  /* 118d4c69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4c6b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118d4c6c:;
  /* 118d4c6c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c6e je 0x118d4c7a */
  if (C.zf) goto L_118d4c7a;
  /* 118d4c70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4c72 jne 0x118d4c69 */
  if (!C.zf) goto L_118d4c69;
L_118d4c74:;
  /* 118d4c74 pop esi */
  ESI = (pop32());
  /* 118d4c75 pop ebx */
  EBX = (pop32());
  /* 118d4c76 pop edi */
  EDI = (pop32());
  /* 118d4c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4c79 ret  */
  ESPCHK(0x118d4c40u, _esp0);
  ESP += 4; return;
L_118d4c7a:;
  /* 118d4c7a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4c7c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d4c7d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c7f jne 0x118d4c6c */
  if (!C.zf) goto L_118d4c6c;
  /* 118d4c81 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_118d4c84:;
  /* 118d4c84 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 118d4c87 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118d4c89 je 0x118d4cb3 */
  if (C.zf) goto L_118d4cb3;
  /* 118d4c8b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d4c8d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4c90 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4c92 jne 0x118d4c58 */
  if (!C.zf) goto L_118d4c58;
  /* 118d4c94 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 118d4c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d4c99 je 0x118d4cb3 */
  if (C.zf) goto L_118d4cb3;
  /* 118d4c9b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 118d4c9e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4ca1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4ca3 je 0x118d4c84 */
  if (C.zf) goto L_118d4c84;
  /* 118d4ca5 jmp 0x118d4c58 */
  goto L_118d4c58;
L_118d4ca7:;
  /* 118d4ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4ca9 pop esi */
  ESI = (pop32());
  /* 118d4caa pop ebx */
  EBX = (pop32());
  /* 118d4cab pop edi */
  EDI = (pop32());
  /* 118d4cac mov al, dl */
  AL = (DL);
  /* 118d4cae jmp 0x118d4b86 */
  jmp_ind(0x118d4b86u); return;
L_118d4cb3:;
  /* 118d4cb3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 118d4cb6 pop esi */
  ESI = (pop32());
  /* 118d4cb7 pop ebx */
  EBX = (pop32());
  /* 118d4cb8 pop edi */
  EDI = (pop32());
  /* 118d4cb9 ret  */
  ESPCHK(0x118d4c40u, _esp0);
  ESP += 4; return;
L_118d4cba:;
  /* 118d4cba mov eax, edi */
  EAX = (EDI);
  /* 118d4cbc pop esi */
  ESI = (pop32());
  /* 118d4cbd pop ebx */
  EBX = (pop32());
  /* 118d4cbe pop edi */
  EDI = (pop32());
  /* 118d4cbf ret  */
  ESPCHK(0x118d4c40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x118d4cc0 (56 bytes, 31 insns) */
void f_118d4cc0(void) {
  FTRACE(0x118d4cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 118d4cc1 mov ebp, esp */
  EBP = (ESP);
  /* 118d4cc3 push edi */
  push32((uint32_t)(EDI));
  /* 118d4cc4 push esi */
  push32((uint32_t)(ESI));
  /* 118d4cc5 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4cc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d4cc9 jecxz 0x118d4cf1 */
  x86_unimpl("jecxz @ 0x118d4cc9");
  /* 118d4ccb mov ebx, ecx */
  EBX = (ECX);
  /* 118d4ccd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4cd0 mov esi, edi */
  ESI = (EDI);
  /* 118d4cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d4cd4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 118d4cd6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118d4cd8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4cda mov edi, esi */
  EDI = (ESI);
  /* 118d4cdc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4cdf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 118d4ce1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 118d4ce4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118d4ce6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4ce9 ja 0x118d4cef */
  if ((!C.cf&&!C.zf)) goto L_118d4cef;
  /* 118d4ceb je 0x118d4cf1 */
  if (C.zf) goto L_118d4cf1;
  /* 118d4ced dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d4cee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_118d4cef:;
  /* 118d4cef not ecx */
  ECX = (~(ECX));
L_118d4cf1:;
  /* 118d4cf1 mov eax, ecx */
  EAX = (ECX);
  /* 118d4cf3 pop ebx */
  EBX = (pop32());
  /* 118d4cf4 pop esi */
  ESI = (pop32());
  /* 118d4cf5 pop edi */
  EDI = (pop32());
  /* 118d4cf6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d4cf7 ret  */
  ESPCHK(0x118d4cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d00 @ 0x118d4d00 (47 bytes, 17 insns) */
void f_118d4d00(void) {
  FTRACE(0x118d4d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4d00 push ecx */
  push32((uint32_t)(ECX));
  /* 118d4d01 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4d06 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 118d4d0a jb 0x118d4d20 */
  if (C.cf) goto L_118d4d20;
L_118d4d0c:;
  /* 118d4d0c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4d12 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4d17 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 118d4d19 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4d1e jae 0x118d4d0c */
  if (!C.cf) goto L_118d4d0c;
L_118d4d20:;
  /* 118d4d20 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4d22 mov eax, esp */
  EAX = (ESP);
  /* 118d4d24 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 118d4d26 mov esp, ecx */
  ESP = (ECX);
  /* 118d4d28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118d4d2a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118d4d2d push eax */
  push32((uint32_t)(EAX));
  /* 118d4d2e ret  */
  ESPCHK(0x118d4d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d2f @ 0x118d4d2f (72 bytes, 17 insns) */
void f_118d4d2f(void) {
  FTRACE(0x118d4d2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4d2f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 118d4d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d4d36 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d4d3c call dword ptr [0x118d804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d804c))), 0x118d4d42u);
  /* 118d4d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4d44 mov dword ptr [0x118dc4ac], eax */
  w32((uint32_t)(0x118dc4ac), (EAX));
  /* 118d4d49 jne 0x118d4d4c */
  if (!C.zf) goto L_118d4d4c;
  /* 118d4d4b ret  */
  ESPCHK(0x118d4d2fu, _esp0);
  ESP += 4; return;
L_118d4d4c:;
  /* 118d4d4c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d4d50 and dword ptr [0x118dc4a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x118dc4a4)))&(0x0u); w32((uint32_t)(0x118dc4a4), (_r)); fl_logic(_r,32); }
  /* 118d4d57 and dword ptr [0x118dc4a8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x118dc4a8)))&(0x0u); w32((uint32_t)(0x118dc4a8), (_r)); fl_logic(_r,32); }
  /* 118d4d5e push 1 */
  push32((uint32_t)(0x1u));
  /* 118d4d60 mov dword ptr [0x118dc4a0], eax */
  w32((uint32_t)(0x118dc4a0), (EAX));
  /* 118d4d65 mov dword ptr [0x118dc4b0], ecx */
  w32((uint32_t)(0x118dc4b0), (ECX));
  /* 118d4d6b mov dword ptr [0x118dc498], 0x10 */
  w32((uint32_t)(0x118dc498), (0x10u));
  /* 118d4d75 pop eax */
  EAX = (pop32());
  /* 118d4d76 ret  */
  ESPCHK(0x118d4d2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d77 @ 0x118d4d77 (43 bytes, 14 insns) */
void f_118d4d77(void) {
  FTRACE(0x118d4d77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4d77 mov eax, dword ptr [0x118dc4a8] */
  EAX = (r32((uint32_t)(0x118dc4a8)));
  /* 118d4d7c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 118d4d7f mov eax, dword ptr [0x118dc4ac] */
  EAX = (r32((uint32_t)(0x118dc4ac)));
  /* 118d4d84 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_118d4d87:;
  /* 118d4d87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4d89 jae 0x118d4d9f */
  if (!C.cf) goto L_118d4d9f;
  /* 118d4d8b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d4d8f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4d92 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4d98 jb 0x118d4da1 */
  if (C.cf) goto L_118d4da1;
  /* 118d4d9a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4d9d jmp 0x118d4d87 */
  goto L_118d4d87;
L_118d4d9f:;
  /* 118d4d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d4da1:;
  /* 118d4da1 ret  */
  ESPCHK(0x118d4d77u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da2 @ 0x118d4da2 (809 bytes, 265 insns) */
void f_118d4da2(void) {
  FTRACE(0x118d4da2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d4da2 push ebp */
  push32((uint32_t)(EBP));
  /* 118d4da3 mov ebp, esp */
  EBP = (ESP);
  /* 118d4da5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4da8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4dab push ebx */
  push32((uint32_t)(EBX));
  /* 118d4dac push esi */
  push32((uint32_t)(ESI));
  /* 118d4dad mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4db0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 118d4db3 push edi */
  push32((uint32_t)(EDI));
  /* 118d4db4 mov edi, esi */
  EDI = (ESI);
  /* 118d4db6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4db9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4dbc shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 118d4dbf mov ecx, edi */
  ECX = (EDI);
  /* 118d4dc1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d4dc7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 118d4dce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118d4dd1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118d4dd3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d4dd4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 118d4dd7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118d4dda jne 0x118d50c6 */
  if (!C.zf) goto L_118d50c6;
  /* 118d4de0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 118d4de3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 118d4de6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118d4de9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 118d4dec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118d4def mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d4df2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 118d4df5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 118d4df8 jne 0x118d4e78 */
  if (!C.zf) goto L_118d4e78;
  /* 118d4dfa sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 118d4dfd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d4dfe cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4e01 jbe 0x118d4e06 */
  if ((C.cf||C.zf)) goto L_118d4e06;
  /* 118d4e03 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118d4e05 pop edx */
  EDX = (pop32());
L_118d4e06:;
  /* 118d4e06 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118d4e09 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4e0c jne 0x118d4e5a */
  if (!C.zf) goto L_118d4e5a;
  /* 118d4e0e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4e11 jae 0x118d4e31 */
  if (!C.cf) goto L_118d4e31;
  /* 118d4e13 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d4e18 mov ecx, edx */
  ECX = (EDX);
  /* 118d4e1a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d4e1c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 118d4e20 not ebx */
  EBX = (~(EBX));
  /* 118d4e22 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118d4e26 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118d4e28 jne 0x118d4e52 */
  if (!C.zf) goto L_118d4e52;
  /* 118d4e2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4e2d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118d4e2f jmp 0x118d4e52 */
  goto L_118d4e52;
L_118d4e31:;
  /* 118d4e31 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 118d4e34 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d4e39 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d4e3b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 118d4e3f not ebx */
  EBX = (~(EBX));
  /* 118d4e41 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118d4e48 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118d4e4a jne 0x118d4e52 */
  if (!C.zf) goto L_118d4e52;
  /* 118d4e4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4e4f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118d4e52:;
  /* 118d4e52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d4e55 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4e58 jmp 0x118d4e5d */
  goto L_118d4e5d;
L_118d4e5a:;
  /* 118d4e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_118d4e5d:;
  /* 118d4e5d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 118d4e60 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 118d4e63 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4e66 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 118d4e69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4e6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118d4e6f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 118d4e72 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 118d4e75 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_118d4e78:;
  /* 118d4e78 mov edx, ecx */
  EDX = (ECX);
  /* 118d4e7a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 118d4e7d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d4e7e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4e81 jbe 0x118d4e86 */
  if ((C.cf||C.zf)) goto L_118d4e86;
  /* 118d4e83 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118d4e85 pop edx */
  EDX = (pop32());
L_118d4e86:;
  /* 118d4e86 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d4e89 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 118d4e8c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 118d4e8f jne 0x118d4f29 */
  if (!C.zf) goto L_118d4f29;
  /* 118d4e95 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d4e98 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 118d4e9b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 118d4e9e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118d4ea0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118d4ea3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d4ea4 pop esi */
  ESI = (pop32());
  /* 118d4ea5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4ea7 jbe 0x118d4eab */
  if ((C.cf||C.zf)) goto L_118d4eab;
  /* 118d4ea9 mov ebx, esi */
  EBX = (ESI);
L_118d4eab:;
  /* 118d4eab add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4eae mov edx, ecx */
  EDX = (ECX);
  /* 118d4eb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118d4eb3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 118d4eb6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d4eb7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4eb9 jbe 0x118d4ebd */
  if ((C.cf||C.zf)) goto L_118d4ebd;
  /* 118d4ebb mov edx, esi */
  EDX = (ESI);
L_118d4ebd:;
  /* 118d4ebd cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4ebf je 0x118d4f24 */
  if (C.zf) goto L_118d4f24;
  /* 118d4ec1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4ec4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 118d4ec7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4eca jne 0x118d4f0c */
  if (!C.zf) goto L_118d4f0c;
  /* 118d4ecc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4ecf jae 0x118d4eed */
  if (!C.cf) goto L_118d4eed;
  /* 118d4ed1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118d4ed6 mov ecx, ebx */
  ECX = (EBX);
  /* 118d4ed8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118d4eda not esi */
  ESI = (~(ESI));
  /* 118d4edc and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118d4ee0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 118d4ee4 jne 0x118d4f0c */
  if (!C.zf) goto L_118d4f0c;
  /* 118d4ee6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4ee9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118d4eeb jmp 0x118d4f0c */
  goto L_118d4f0c;
L_118d4eed:;
  /* 118d4eed lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 118d4ef0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118d4ef5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118d4ef7 not esi */
  ESI = (~(ESI));
  /* 118d4ef9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118d4f00 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 118d4f04 jne 0x118d4f0c */
  if (!C.zf) goto L_118d4f0c;
  /* 118d4f06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4f09 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118d4f0c:;
  /* 118d4f0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4f0f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 118d4f12 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 118d4f15 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 118d4f18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4f1b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 118d4f1e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 118d4f21 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_118d4f24:;
  /* 118d4f24 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118d4f27 jmp 0x118d4f2c */
  goto L_118d4f2c;
L_118d4f29:;
  /* 118d4f29 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118d4f2c:;
  /* 118d4f2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4f30 jne 0x118d4f3a */
  if (!C.zf) goto L_118d4f3a;
  /* 118d4f32 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4f34 je 0x118d4fbb */
  if (C.zf) goto L_118d4fbb;
L_118d4f3a:;
  /* 118d4f3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d4f3d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 118d4f41 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 118d4f44 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 118d4f47 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 118d4f4a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118d4f4d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118d4f50 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 118d4f53 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118d4f56 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4f59 jne 0x118d4fbb */
  if (!C.zf) goto L_118d4fbb;
  /* 118d4f5b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 118d4f5f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d4f62 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 118d4f65 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118d4f67 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 118d4f6b jae 0x118d4f92 */
  if (!C.cf) goto L_118d4f92;
  /* 118d4f6d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4f71 jne 0x118d4f81 */
  if (!C.zf) goto L_118d4f81;
  /* 118d4f73 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d4f78 mov ecx, edx */
  ECX = (EDX);
  /* 118d4f7a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d4f7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4f7f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_118d4f81:;
  /* 118d4f81 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d4f86 mov ecx, edx */
  ECX = (EDX);
  /* 118d4f88 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d4f8a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 118d4f8e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d4f90 jmp 0x118d4fbb */
  goto L_118d4fbb;
L_118d4f92:;
  /* 118d4f92 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d4f96 jne 0x118d4fa8 */
  if (!C.zf) goto L_118d4fa8;
  /* 118d4f98 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 118d4f9b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d4fa0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d4fa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d4fa5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118d4fa8:;
  /* 118d4fa8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 118d4fab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118d4fb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118d4fb2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 118d4fb9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_118d4fbb:;
  /* 118d4fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d4fbe mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d4fc0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 118d4fc4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118d4fc7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 118d4fc9 jne 0x118d50c6 */
  if (!C.zf) goto L_118d50c6;
  /* 118d4fcf mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d4fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d4fd6 je 0x118d50b8 */
  if (C.zf) goto L_118d50b8;
  /* 118d4fdc mov ecx, dword ptr [0x118dc49c] */
  ECX = (r32((uint32_t)(0x118dc49c)));
  /* 118d4fe2 mov esi, dword ptr [0x118d8068] */
  ESI = (r32((uint32_t)(0x118d8068)));
  /* 118d4fe8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 118d4feb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d4fee mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 118d4ff3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 118d4ff8 push ebx */
  push32((uint32_t)(EBX));
  /* 118d4ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 118d4ffa call esi */
  call_ind((uint32_t)(ESI), 0x118d4ffcu);
  /* 118d4ffc mov ecx, dword ptr [0x118dc49c] */
  ECX = (r32((uint32_t)(0x118dc49c)));
  /* 118d5002 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d5007 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118d500c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118d500e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118d5011 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d5016 mov ecx, dword ptr [0x118dc49c] */
  ECX = (r32((uint32_t)(0x118dc49c)));
  /* 118d501c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 118d501f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118d5027 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d502c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 118d502f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 118d5032 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d5037 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118d503a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d503e jne 0x118d5049 */
  if (!C.zf) goto L_118d5049;
  /* 118d5040 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d5044 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
L_118d5049:;
  /* 118d5049 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d504d jne 0x118d50b8 */
  if (!C.zf) goto L_118d50b8;
  /* 118d504f push ebx */
  push32((uint32_t)(EBX));
  /* 118d5050 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d5052 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 118d5055 call esi */
  call_ind((uint32_t)(ESI), 0x118d5057u);
  /* 118d5057 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d505c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 118d505f push 0 */
  push32((uint32_t)(0x0u));
  /* 118d5061 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d5067 call dword ptr [0x118d8070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8070))), 0x118d506du);
  /* 118d506d mov eax, dword ptr [0x118dc4a8] */
  EAX = (r32((uint32_t)(0x118dc4a8)));
  /* 118d5072 mov edx, dword ptr [0x118dc4ac] */
  EDX = (r32((uint32_t)(0x118dc4ac)));
  /* 118d5078 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d507b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118d507e mov ecx, eax */
  ECX = (EAX);
  /* 118d5080 mov eax, dword ptr [0x118dc4a4] */
  EAX = (r32((uint32_t)(0x118dc4a4)));
  /* 118d5085 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5087 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 118d508b push ecx */
  push32((uint32_t)(ECX));
  /* 118d508c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 118d508f push ecx */
  push32((uint32_t)(ECX));
  /* 118d5090 push eax */
  push32((uint32_t)(EAX));
  /* 118d5091 call 0x118d6850 */
  push32(0x118d5096u); f_118d6850();
  /* 118d5096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d5099 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d509c dec dword ptr [0x118dc4a8] */
  { uint32_t _r=(r32((uint32_t)(0x118dc4a8)))-1; w32((uint32_t)(0x118dc4a8), (_r)); fl_dec(_r,32); }
  /* 118d50a2 cmp eax, dword ptr [0x118dc4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118dc4a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d50a8 jbe 0x118d50ae */
  if ((C.cf||C.zf)) goto L_118d50ae;
  /* 118d50aa sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_118d50ae:;
  /* 118d50ae mov eax, dword ptr [0x118dc4ac] */
  EAX = (r32((uint32_t)(0x118dc4ac)));
  /* 118d50b3 mov dword ptr [0x118dc4a0], eax */
  w32((uint32_t)(0x118dc4a0), (EAX));
L_118d50b8:;
  /* 118d50b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d50bb mov dword ptr [0x118dc49c], edi */
  w32((uint32_t)(0x118dc49c), (EDI));
  /* 118d50c1 mov dword ptr [0x118dc4a4], eax */
  w32((uint32_t)(0x118dc4a4), (EAX));
L_118d50c6:;
  /* 118d50c6 pop edi */
  EDI = (pop32());
  /* 118d50c7 pop esi */
  ESI = (pop32());
  /* 118d50c8 pop ebx */
  EBX = (pop32());
  /* 118d50c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d50ca ret  */
  ESPCHK(0x118d4da2u, _esp0);
  ESP += 4; return;
}

/* FUN_100050cb @ 0x118d50cb (777 bytes, 275 insns) */
void f_118d50cb(void) {
  FTRACE(0x118d50cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d50cb push ebp */
  push32((uint32_t)(EBP));
  /* 118d50cc mov ebp, esp */
  EBP = (ESP);
  /* 118d50ce sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d50d1 mov eax, dword ptr [0x118dc4a8] */
  EAX = (r32((uint32_t)(0x118dc4a8)));
  /* 118d50d6 mov edx, dword ptr [0x118dc4ac] */
  EDX = (r32((uint32_t)(0x118dc4ac)));
  /* 118d50dc push ebx */
  push32((uint32_t)(EBX));
  /* 118d50dd push esi */
  push32((uint32_t)(ESI));
  /* 118d50de lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d50e1 push edi */
  push32((uint32_t)(EDI));
  /* 118d50e2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 118d50e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d50e8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118d50eb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 118d50ee and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 118d50f1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118d50f4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118d50f7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d50f8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d50fb jge 0x118d510b */
  if ((C.sf==C.of)) goto L_118d510b;
  /* 118d50fd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 118d5100 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118d5102 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118d5106 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 118d5109 jmp 0x118d511b */
  goto L_118d511b;
L_118d510b:;
  /* 118d510b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d510e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5111 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118d5113 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 118d5115 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 118d5118 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118d511b:;
  /* 118d511b mov eax, dword ptr [0x118dc4a0] */
  EAX = (r32((uint32_t)(0x118dc4a0)));
  /* 118d5120 mov ebx, eax */
  EBX = (EAX);
  /* 118d5122 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5124 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d5127 jae 0x118d5142 */
  if (!C.cf) goto L_118d5142;
L_118d5129:;
  /* 118d5129 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118d512c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 118d512e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118d5131 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 118d5133 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118d5135 jne 0x118d5142 */
  if (!C.zf) goto L_118d5142;
  /* 118d5137 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d513a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d513d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d5140 jb 0x118d5129 */
  if (C.cf) goto L_118d5129;
L_118d5142:;
  /* 118d5142 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5145 jne 0x118d51c0 */
  if (!C.zf) goto L_118d51c0;
  /* 118d5147 mov ebx, edx */
  EBX = (EDX);
L_118d5149:;
  /* 118d5149 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d514b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d514e jae 0x118d5165 */
  if (!C.cf) goto L_118d5165;
  /* 118d5150 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118d5153 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 118d5155 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118d5158 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 118d515a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118d515c jne 0x118d5163 */
  if (!C.zf) goto L_118d5163;
  /* 118d515e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5161 jmp 0x118d5149 */
  goto L_118d5149;
L_118d5163:;
  /* 118d5163 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118d5165:;
  /* 118d5165 jne 0x118d51c0 */
  if (!C.zf) goto L_118d51c0;
L_118d5167:;
  /* 118d5167 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d516a jae 0x118d517d */
  if (!C.cf) goto L_118d517d;
  /* 118d516c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5170 jne 0x118d517a */
  if (!C.zf) goto L_118d517a;
  /* 118d5172 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5175 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d5178 jmp 0x118d5167 */
  goto L_118d5167;
L_118d517a:;
  /* 118d517a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118d517d:;
  /* 118d517d jne 0x118d51a5 */
  if (!C.zf) goto L_118d51a5;
  /* 118d517f mov ebx, edx */
  EBX = (EDX);
L_118d5181:;
  /* 118d5181 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5183 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d5186 jae 0x118d5195 */
  if (!C.cf) goto L_118d5195;
  /* 118d5188 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d518c jne 0x118d5193 */
  if (!C.zf) goto L_118d5193;
  /* 118d518e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5191 jmp 0x118d5181 */
  goto L_118d5181;
L_118d5193:;
  /* 118d5193 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118d5195:;
  /* 118d5195 jne 0x118d51a5 */
  if (!C.zf) goto L_118d51a5;
  /* 118d5197 call 0x118d53d4 */
  push32(0x118d519cu); f_118d53d4();
  /* 118d519c mov ebx, eax */
  EBX = (EAX);
  /* 118d519e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d51a0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d51a3 je 0x118d51b9 */
  if (C.zf) goto L_118d51b9;
L_118d51a5:;
  /* 118d51a5 push ebx */
  push32((uint32_t)(EBX));
  /* 118d51a6 call 0x118d5485 */
  push32(0x118d51abu); f_118d5485();
  /* 118d51ab pop ecx */
  ECX = (pop32());
  /* 118d51ac mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 118d51af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118d51b1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 118d51b4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d51b7 jne 0x118d51c0 */
  if (!C.zf) goto L_118d51c0;
L_118d51b9:;
  /* 118d51b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d51bb jmp 0x118d53cf */
  goto L_118d53cf;
L_118d51c0:;
  /* 118d51c0 mov dword ptr [0x118dc4a0], ebx */
  w32((uint32_t)(0x118dc4a0), (EBX));
  /* 118d51c6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 118d51c9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 118d51cb cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d51ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118d51d1 je 0x118d51e7 */
  if (C.zf) goto L_118d51e7;
  /* 118d51d3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 118d51da mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 118d51de and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118d51e1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 118d51e3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118d51e5 jne 0x118d521e */
  if (!C.zf) goto L_118d521e;
L_118d51e7:;
  /* 118d51e7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 118d51ed mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 118d51f0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 118d51f3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 118d51f6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d51fa lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 118d51fd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 118d51ff mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118d5202 jne 0x118d521b */
  if (!C.zf) goto L_118d521b;
L_118d5204:;
  /* 118d5204 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 118d520a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118d520d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 118d5210 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5213 mov edi, esi */
  EDI = (ESI);
  /* 118d5215 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 118d5217 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 118d5219 je 0x118d5204 */
  if (C.zf) goto L_118d5204;
L_118d521b:;
  /* 118d521b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_118d521e:;
  /* 118d521e mov ecx, edx */
  ECX = (EDX);
  /* 118d5220 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d5222 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d5228 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 118d522f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118d5232 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 118d5236 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 118d5238 jne 0x118d5247 */
  if (!C.zf) goto L_118d5247;
  /* 118d523a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 118d5241 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118d5243 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 118d5246 pop edi */
  EDI = (pop32());
L_118d5247:;
  /* 118d5247 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d5249 jl 0x118d5250 */
  if ((C.sf!=C.of)) goto L_118d5250;
  /* 118d524b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118d524d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d524e jmp 0x118d5247 */
  goto L_118d5247;
L_118d5250:;
  /* 118d5250 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d5253 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 118d5257 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118d5259 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d525c mov esi, ecx */
  ESI = (ECX);
  /* 118d525e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118d5261 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118d5264 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118d5265 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5268 jle 0x118d526d */
  if ((C.zf||C.sf!=C.of)) goto L_118d526d;
  /* 118d526a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118d526c pop esi */
  ESI = (pop32());
L_118d526d:;
  /* 118d526d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d526f je 0x118d5382 */
  if (C.zf) goto L_118d5382;
  /* 118d5275 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118d5278 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d527b jne 0x118d52de */
  if (!C.zf) goto L_118d52de;
  /* 118d527d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5280 jge 0x118d52ad */
  if ((C.sf==C.of)) goto L_118d52ad;
  /* 118d5282 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d5287 mov ecx, edi */
  ECX = (EDI);
  /* 118d5289 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d528b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d528e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 118d5292 not ebx */
  EBX = (~(EBX));
  /* 118d5294 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 118d5297 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 118d529b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 118d529f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 118d52a1 jne 0x118d52db */
  if (!C.zf) goto L_118d52db;
  /* 118d52a3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d52a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118d52a9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 118d52ab jmp 0x118d52de */
  goto L_118d52de;
L_118d52ad:;
  /* 118d52ad lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 118d52b0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118d52b5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118d52b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d52ba lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 118d52be lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 118d52c5 not ebx */
  EBX = (~(EBX));
  /* 118d52c7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118d52c9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 118d52cb mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 118d52ce jne 0x118d52db */
  if (!C.zf) goto L_118d52db;
  /* 118d52d0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d52d3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118d52d6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d52d9 jmp 0x118d52de */
  goto L_118d52de;
L_118d52db:;
  /* 118d52db mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118d52de:;
  /* 118d52de mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 118d52e1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 118d52e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d52e8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 118d52eb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118d52ee mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 118d52f1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 118d52f4 je 0x118d538e */
  if (C.zf) goto L_118d538e;
  /* 118d52fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118d52fd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 118d5301 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 118d5304 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 118d5307 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 118d530a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 118d530d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118d5310 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 118d5313 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 118d5316 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5319 jne 0x118d537f */
  if (!C.zf) goto L_118d537f;
  /* 118d531b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 118d531f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5322 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 118d5325 jge 0x118d5350 */
  if ((C.sf==C.of)) goto L_118d5350;
  /* 118d5327 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118d5329 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d532d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 118d5331 jne 0x118d533e */
  if (!C.zf) goto L_118d533e;
  /* 118d5333 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118d5338 mov ecx, esi */
  ECX = (ESI);
  /* 118d533a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118d533c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_118d533e:;
  /* 118d533e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118d5343 mov ecx, esi */
  ECX = (ESI);
  /* 118d5345 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118d5347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d534a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118d534e jmp 0x118d537f */
  goto L_118d537f;
L_118d5350:;
  /* 118d5350 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118d5352 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d5356 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 118d535a jne 0x118d5369 */
  if (!C.zf) goto L_118d5369;
  /* 118d535c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118d535f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118d5364 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118d5366 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_118d5369:;
  /* 118d5369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d536c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 118d5373 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118d5376 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118d537b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118d537d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_118d537f:;
  /* 118d537f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_118d5382:;
  /* 118d5382 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d5384 je 0x118d5391 */
  if (C.zf) goto L_118d5391;
  /* 118d5386 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118d5388 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 118d538c jmp 0x118d5391 */
  goto L_118d5391;
L_118d538e:;
  /* 118d538e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_118d5391:;
  /* 118d5391 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 118d5394 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5396 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 118d5399 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118d539b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 118d539f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118d53a2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118d53a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d53a6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 118d53a9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118d53ab jne 0x118d53c7 */
  if (!C.zf) goto L_118d53c7;
  /* 118d53ad cmp ebx, dword ptr [0x118dc4a4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x118dc4a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d53b3 jne 0x118d53c7 */
  if (!C.zf) goto L_118d53c7;
  /* 118d53b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d53b8 cmp ecx, dword ptr [0x118dc49c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118dc49c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d53be jne 0x118d53c7 */
  if (!C.zf) goto L_118d53c7;
  /* 118d53c0 and dword ptr [0x118dc4a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x118dc4a4)))&(0x0u); w32((uint32_t)(0x118dc4a4), (_r)); fl_logic(_r,32); }
L_118d53c7:;
  /* 118d53c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d53ca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118d53cc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_118d53cf:;
  /* 118d53cf pop edi */
  EDI = (pop32());
  /* 118d53d0 pop esi */
  ESI = (pop32());
  /* 118d53d1 pop ebx */
  EBX = (pop32());
  /* 118d53d2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d53d3 ret  */
  ESPCHK(0x118d50cbu, _esp0);
  ESP += 4; return;
}

/* FUN_100053d4 @ 0x118d53d4 (177 bytes, 53 insns) */
void f_118d53d4(void) {
  FTRACE(0x118d53d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d53d4 mov eax, dword ptr [0x118dc4a8] */
  EAX = (r32((uint32_t)(0x118dc4a8)));
  /* 118d53d9 mov ecx, dword ptr [0x118dc498] */
  ECX = (r32((uint32_t)(0x118dc498)));
  /* 118d53df push esi */
  push32((uint32_t)(ESI));
  /* 118d53e0 push edi */
  push32((uint32_t)(EDI));
  /* 118d53e1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118d53e3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d53e5 jne 0x118d5417 */
  if (!C.zf) goto L_118d5417;
  /* 118d53e7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 118d53eb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118d53ee push eax */
  push32((uint32_t)(EAX));
  /* 118d53ef push dword ptr [0x118dc4ac] */
  push32((uint32_t)(r32((uint32_t)(0x118dc4ac))));
  /* 118d53f5 push edi */
  push32((uint32_t)(EDI));
  /* 118d53f6 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d53fc call dword ptr [0x118d803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d803c))), 0x118d5402u);
  /* 118d5402 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5404 je 0x118d5467 */
  if (C.zf) goto L_118d5467;
  /* 118d5406 add dword ptr [0x118dc498], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x118dc498))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x118dc498), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d540d mov dword ptr [0x118dc4ac], eax */
  w32((uint32_t)(0x118dc4ac), (EAX));
  /* 118d5412 mov eax, dword ptr [0x118dc4a8] */
  EAX = (r32((uint32_t)(0x118dc4a8)));
L_118d5417:;
  /* 118d5417 mov ecx, dword ptr [0x118dc4ac] */
  ECX = (r32((uint32_t)(0x118dc4ac)));
  /* 118d541d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 118d5422 push 8 */
  push32((uint32_t)(0x8u));
  /* 118d5424 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118d5427 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d542d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 118d5430 call dword ptr [0x118d804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d804c))), 0x118d5436u);
  /* 118d5436 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5438 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 118d543b je 0x118d5467 */
  if (C.zf) goto L_118d5467;
  /* 118d543d push 4 */
  push32((uint32_t)(0x4u));
  /* 118d543f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 118d5444 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 118d5449 push edi */
  push32((uint32_t)(EDI));
  /* 118d544a call dword ptr [0x118d8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8034))), 0x118d5450u);
  /* 118d5450 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5452 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118d5455 jne 0x118d546b */
  if (!C.zf) goto L_118d546b;
  /* 118d5457 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118d545a push edi */
  push32((uint32_t)(EDI));
  /* 118d545b push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d5461 call dword ptr [0x118d8070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8070))), 0x118d5467u);
L_118d5467:;
  /* 118d5467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5469 jmp 0x118d5482 */
  goto L_118d5482;
L_118d546b:;
  /* 118d546b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 118d546f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118d5471 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 118d5474 inc dword ptr [0x118dc4a8] */
  { uint32_t _r=(r32((uint32_t)(0x118dc4a8)))+1; w32((uint32_t)(0x118dc4a8), (_r)); fl_inc(_r,32); }
  /* 118d547a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118d547d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118d5480 mov eax, esi */
  EAX = (ESI);
L_118d5482:;
  /* 118d5482 pop edi */
  EDI = (pop32());
  /* 118d5483 pop esi */
  ESI = (pop32());
  /* 118d5484 ret  */
  ESPCHK(0x118d53d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005485 @ 0x118d5485 (251 bytes, 85 insns) */
void f_118d5485(void) {
  FTRACE(0x118d5485u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5485 push ebp */
  push32((uint32_t)(EBP));
  /* 118d5486 mov ebp, esp */
  EBP = (ESP);
  /* 118d5488 push ecx */
  push32((uint32_t)(ECX));
  /* 118d5489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d548c push ebx */
  push32((uint32_t)(EBX));
  /* 118d548d push esi */
  push32((uint32_t)(ESI));
  /* 118d548e push edi */
  push32((uint32_t)(EDI));
  /* 118d548f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 118d5492 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 118d5495 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118d5497:;
  /* 118d5497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5499 jl 0x118d54a0 */
  if ((C.sf!=C.of)) goto L_118d54a0;
  /* 118d549b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118d549d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d549e jmp 0x118d5497 */
  goto L_118d5497;
L_118d54a0:;
  /* 118d54a0 mov eax, ebx */
  EAX = (EBX);
  /* 118d54a2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118d54a4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d54aa pop edx */
  EDX = (pop32());
  /* 118d54ab lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 118d54b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118d54b5:;
  /* 118d54b5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 118d54b8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 118d54bb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d54be dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d54bf jne 0x118d54b5 */
  if (!C.zf) goto L_118d54b5;
  /* 118d54c1 mov edi, ebx */
  EDI = (EBX);
  /* 118d54c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d54c5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 118d54c8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d54cb push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118d54d0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118d54d5 push edi */
  push32((uint32_t)(EDI));
  /* 118d54d6 call dword ptr [0x118d8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8034))), 0x118d54dcu);
  /* 118d54dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d54de jne 0x118d54e8 */
  if (!C.zf) goto L_118d54e8;
  /* 118d54e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d54e3 jmp 0x118d557b */
  goto L_118d557b;
L_118d54e8:;
  /* 118d54e8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 118d54ee cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d54f0 ja 0x118d552e */
  if ((!C.cf&&!C.zf)) goto L_118d552e;
  /* 118d54f2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_118d54f5:;
  /* 118d54f5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 118d54f9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 118d5500 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 118d5506 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 118d550d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118d550f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 118d5515 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118d5518 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 118d5522 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5527 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 118d552a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d552c jbe 0x118d54f5 */
  if ((C.cf||C.zf)) goto L_118d54f5;
L_118d552e:;
  /* 118d552e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d5531 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 118d5534 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5539 push 1 */
  push32((uint32_t)(0x1u));
  /* 118d553b pop edi */
  EDI = (pop32());
  /* 118d553c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118d553f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118d5542 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 118d5545 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118d5548 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 118d554b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118d5550 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 118d5557 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 118d555a mov cl, al */
  CL = (AL);
  /* 118d555c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118d555e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d5560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d5563 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 118d5566 jne 0x118d556b */
  if (!C.zf) goto L_118d556b;
  /* 118d5568 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118d556b:;
  /* 118d556b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118d5570 mov ecx, ebx */
  ECX = (EBX);
  /* 118d5572 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118d5574 not edx */
  EDX = (~(EDX));
  /* 118d5576 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118d5579 mov eax, ebx */
  EAX = (EBX);
L_118d557b:;
  /* 118d557b pop edi */
  EDI = (pop32());
  /* 118d557c pop esi */
  ESI = (pop32());
  /* 118d557d pop ebx */
  EBX = (pop32());
  /* 118d557e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d557f ret  */
  ESPCHK(0x118d5485u, _esp0);
  ESP += 4; return;
}

/* FUN_10005580 @ 0x118d5580 (324 bytes, 102 insns) */
void f_118d5580(void) {
  FTRACE(0x118d5580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5580 cmp dword ptr [0x118d9aa0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x118d9aa0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5587 push ebx */
  push32((uint32_t)(EBX));
  /* 118d5588 push ebp */
  push32((uint32_t)(EBP));
  /* 118d5589 push esi */
  push32((uint32_t)(ESI));
  /* 118d558a push edi */
  push32((uint32_t)(EDI));
  /* 118d558b jne 0x118d5594 */
  if (!C.zf) goto L_118d5594;
  /* 118d558d mov esi, 0x118d9a90 */
  ESI = (0x118d9a90u);
  /* 118d5592 jmp 0x118d55b1 */
  goto L_118d55b1;
L_118d5594:;
  /* 118d5594 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 118d5599 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d559b push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d55a1 call dword ptr [0x118d804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d804c))), 0x118d55a7u);
  /* 118d55a7 mov esi, eax */
  ESI = (EAX);
  /* 118d55a9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118d55ab je 0x118d56bd */
  if (C.zf) goto L_118d56bd;
L_118d55b1:;
  /* 118d55b1 mov ebp, dword ptr [0x118d8034] */
  EBP = (r32((uint32_t)(0x118d8034)));
  /* 118d55b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d55b9 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 118d55be push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 118d55c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d55c5 call ebp */
  call_ind((uint32_t)(EBP), 0x118d55c7u);
  /* 118d55c7 mov edi, eax */
  EDI = (EAX);
  /* 118d55c9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118d55cb je 0x118d56a6 */
  if (C.zf) goto L_118d56a6;
  /* 118d55d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d55d3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 118d55d8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118d55dd push ebx */
  push32((uint32_t)(EBX));
  /* 118d55de push edi */
  push32((uint32_t)(EDI));
  /* 118d55df call ebp */
  call_ind((uint32_t)(EBP), 0x118d55e1u);
  /* 118d55e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d55e3 je 0x118d5698 */
  if (C.zf) goto L_118d5698;
  /* 118d55e9 mov eax, 0x118d9a90 */
  EAX = (0x118d9a90u);
  /* 118d55ee cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d55f0 jne 0x118d5610 */
  if (!C.zf) goto L_118d5610;
  /* 118d55f2 cmp dword ptr [0x118d9a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118d9a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d55f9 jne 0x118d5600 */
  if (!C.zf) goto L_118d5600;
  /* 118d55fb mov dword ptr [0x118d9a90], eax */
  w32((uint32_t)(0x118d9a90), (EAX));
L_118d5600:;
  /* 118d5600 cmp dword ptr [0x118d9a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118d9a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5607 jne 0x118d5625 */
  if (!C.zf) goto L_118d5625;
  /* 118d5609 mov dword ptr [0x118d9a94], eax */
  w32((uint32_t)(0x118d9a94), (EAX));
  /* 118d560e jmp 0x118d5625 */
  goto L_118d5625;
L_118d5610:;
  /* 118d5610 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118d5612 mov eax, dword ptr [0x118d9a94] */
  EAX = (r32((uint32_t)(0x118d9a94)));
  /* 118d5617 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118d561a mov dword ptr [0x118d9a94], esi */
  w32((uint32_t)(0x118d9a94), (ESI));
  /* 118d5620 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118d5623 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_118d5625:;
  /* 118d5625 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 118d562b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 118d5631 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 118d5634 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 118d5637 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 118d563a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 118d563d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118d5640 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 118d5642 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_118d5647:;
  /* 118d5647 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d5649 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d564c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 118d564f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d5650 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118d5652 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118d5653 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118d5654 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118d5656 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118d5659 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d565c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5662 jl 0x118d5647 */
  if ((C.sf!=C.of)) goto L_118d5647;
  /* 118d5664 push ebx */
  push32((uint32_t)(EBX));
  /* 118d5665 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d5667 push edi */
  push32((uint32_t)(EDI));
  /* 118d5668 call 0x118d60e0 */
  push32(0x118d566du); f_118d60e0();
  /* 118d566d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118d5670:;
  /* 118d5670 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118d5673 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5675 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5677 jae 0x118d5694 */
  if (!C.cf) goto L_118d5694;
  /* 118d5679 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 118d5680 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 118d5683 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118d5685 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 118d568c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5692 jmp 0x118d5670 */
  goto L_118d5670;
L_118d5694:;
  /* 118d5694 mov eax, esi */
  EAX = (ESI);
  /* 118d5696 jmp 0x118d56bf */
  goto L_118d56bf;
L_118d5698:;
  /* 118d5698 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118d569d push 0 */
  push32((uint32_t)(0x0u));
  /* 118d569f push edi */
  push32((uint32_t)(EDI));
  /* 118d56a0 call dword ptr [0x118d8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8068))), 0x118d56a6u);
L_118d56a6:;
  /* 118d56a6 cmp esi, 0x118d9a90 */
  { uint32_t _a=(ESI),_b=(0x118d9a90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d56ac je 0x118d56bd */
  if (C.zf) goto L_118d56bd;
  /* 118d56ae push esi */
  push32((uint32_t)(ESI));
  /* 118d56af push 0 */
  push32((uint32_t)(0x0u));
  /* 118d56b1 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d56b7 call dword ptr [0x118d8070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8070))), 0x118d56bdu);
L_118d56bd:;
  /* 118d56bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d56bf:;
  /* 118d56bf pop edi */
  EDI = (pop32());
  /* 118d56c0 pop esi */
  ESI = (pop32());
  /* 118d56c1 pop ebp */
  EBP = (pop32());
  /* 118d56c2 pop ebx */
  EBX = (pop32());
  /* 118d56c3 ret  */
  ESPCHK(0x118d5580u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c4 @ 0x118d56c4 (86 bytes, 27 insns) */
void f_118d56c4(void) {
  FTRACE(0x118d56c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d56c4 push esi */
  push32((uint32_t)(ESI));
  /* 118d56c5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118d56c9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118d56ce push 0 */
  push32((uint32_t)(0x0u));
  /* 118d56d0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118d56d3 call dword ptr [0x118d8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8068))), 0x118d56d9u);
  /* 118d56d9 cmp dword ptr [0x118dbab0], esi */
  { uint32_t _a=(r32((uint32_t)(0x118dbab0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d56df jne 0x118d56e9 */
  if (!C.zf) goto L_118d56e9;
  /* 118d56e1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118d56e4 mov dword ptr [0x118dbab0], eax */
  w32((uint32_t)(0x118dbab0), (EAX));
L_118d56e9:;
  /* 118d56e9 cmp esi, 0x118d9a90 */
  { uint32_t _a=(ESI),_b=(0x118d9a90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d56ef je 0x118d5711 */
  if (C.zf) goto L_118d5711;
  /* 118d56f1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118d56f4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118d56f6 push esi */
  push32((uint32_t)(ESI));
  /* 118d56f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d56f9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118d56fb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d56fd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118d5700 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118d5703 push dword ptr [0x118dd704] */
  push32((uint32_t)(r32((uint32_t)(0x118dd704))));
  /* 118d5709 call dword ptr [0x118d8070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8070))), 0x118d570fu);
  /* 118d570f pop esi */
  ESI = (pop32());
  /* 118d5710 ret  */
  ESPCHK(0x118d56c4u, _esp0);
  ESP += 4; return;
L_118d5711:;
  /* 118d5711 or dword ptr [0x118d9aa0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x118d9aa0)))|(0xffffffffu); w32((uint32_t)(0x118d9aa0), (_r)); fl_logic(_r,32); }
  /* 118d5718 pop esi */
  ESI = (pop32());
  /* 118d5719 ret  */
  ESPCHK(0x118d56c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000571a @ 0x118d571a (194 bytes, 66 insns) */
void f_118d571a(void) {
  FTRACE(0x118d571au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d571a push ebp */
  push32((uint32_t)(EBP));
  /* 118d571b mov ebp, esp */
  EBP = (ESP);
  /* 118d571d push ecx */
  push32((uint32_t)(ECX));
  /* 118d571e push ebx */
  push32((uint32_t)(EBX));
  /* 118d571f push esi */
  push32((uint32_t)(ESI));
  /* 118d5720 mov esi, dword ptr [0x118d9a94] */
  ESI = (r32((uint32_t)(0x118d9a94)));
  /* 118d5726 push edi */
  push32((uint32_t)(EDI));
L_118d5727:;
  /* 118d5727 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d572b je 0x118d57c5 */
  if (C.zf) goto L_118d57c5;
  /* 118d5731 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d5735 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 118d573b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_118d5740:;
  /* 118d5740 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5746 jne 0x118d5781 */
  if (!C.zf) goto L_118d5781;
  /* 118d5748 mov eax, ebx */
  EAX = (EBX);
  /* 118d574a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 118d574f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5752 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118d5757 push eax */
  push32((uint32_t)(EAX));
  /* 118d5758 call dword ptr [0x118d8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8068))), 0x118d575eu);
  /* 118d575e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5760 je 0x118d5781 */
  if (C.zf) goto L_118d5781;
  /* 118d5762 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 118d5765 dec dword ptr [0x118dc304] */
  { uint32_t _r=(r32((uint32_t)(0x118dc304)))-1; w32((uint32_t)(0x118dc304), (_r)); fl_dec(_r,32); }
  /* 118d576b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118d576e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5770 je 0x118d5776 */
  if (C.zf) goto L_118d5776;
  /* 118d5772 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5774 jbe 0x118d5779 */
  if ((C.cf||C.zf)) goto L_118d5779;
L_118d5776:;
  /* 118d5776 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_118d5779:;
  /* 118d5779 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118d577c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 118d577f je 0x118d578e */
  if (C.zf) goto L_118d578e;
L_118d5781:;
  /* 118d5781 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5787 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d578a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d578c jge 0x118d5740 */
  if ((C.sf==C.of)) goto L_118d5740;
L_118d578e:;
  /* 118d578e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5792 mov ecx, esi */
  ECX = (ESI);
  /* 118d5794 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 118d5797 je 0x118d57c5 */
  if (C.zf) goto L_118d57c5;
  /* 118d5799 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d579d jne 0x118d57c5 */
  if (!C.zf) goto L_118d57c5;
  /* 118d579f push 1 */
  push32((uint32_t)(0x1u));
  /* 118d57a1 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 118d57a4 pop edx */
  EDX = (pop32());
L_118d57a5:;
  /* 118d57a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57a8 jne 0x118d57b6 */
  if (!C.zf) goto L_118d57b6;
  /* 118d57aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118d57ab add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d57ae cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57b4 jl 0x118d57a5 */
  if ((C.sf!=C.of)) goto L_118d57a5;
L_118d57b6:;
  /* 118d57b6 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57bc jne 0x118d57c5 */
  if (!C.zf) goto L_118d57c5;
  /* 118d57be push ecx */
  push32((uint32_t)(ECX));
  /* 118d57bf call 0x118d56c4 */
  push32(0x118d57c4u); f_118d56c4();
  /* 118d57c4 pop ecx */
  ECX = (pop32());
L_118d57c5:;
  /* 118d57c5 cmp esi, dword ptr [0x118d9a94] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118d9a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57cb je 0x118d57d7 */
  if (C.zf) goto L_118d57d7;
  /* 118d57cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57d1 jg 0x118d5727 */
  if ((!C.zf&&C.sf==C.of)) goto L_118d5727;
L_118d57d7:;
  /* 118d57d7 pop edi */
  EDI = (pop32());
  /* 118d57d8 pop esi */
  ESI = (pop32());
  /* 118d57d9 pop ebx */
  EBX = (pop32());
  /* 118d57da leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d57db ret  */
  ESPCHK(0x118d571au, _esp0);
  ESP += 4; return;
}

/* FUN_100057dc @ 0x118d57dc (87 bytes, 34 insns) */
void f_118d57dc(void) {
  FTRACE(0x118d57dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d57dc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d57e0 mov edx, 0x118d9a90 */
  EDX = (0x118d9a90u);
  /* 118d57e5 push esi */
  push32((uint32_t)(ESI));
  /* 118d57e6 mov ecx, edx */
  ECX = (EDX);
L_118d57e8:;
  /* 118d57e8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57eb jbe 0x118d57f2 */
  if ((C.cf||C.zf)) goto L_118d57f2;
  /* 118d57ed cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57f0 jb 0x118d57fa */
  if (C.cf) goto L_118d57fa;
L_118d57f2:;
  /* 118d57f2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 118d57f4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d57f6 je 0x118d582f */
  if (C.zf) goto L_118d582f;
  /* 118d57f8 jmp 0x118d57e8 */
  goto L_118d57e8;
L_118d57fa:;
  /* 118d57fa test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 118d57fc jne 0x118d582f */
  if (!C.zf) goto L_118d582f;
  /* 118d57fe mov esi, eax */
  ESI = (EAX);
  /* 118d5800 mov edx, 0x100 */
  EDX = (0x100u);
  /* 118d5805 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 118d580b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d580d jb 0x118d582f */
  if (C.cf) goto L_118d582f;
  /* 118d580f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118d5813 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118d5815 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 118d5819 mov ecx, eax */
  ECX = (EAX);
  /* 118d581b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 118d5820 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5822 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118d5824 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5826 pop esi */
  ESI = (pop32());
  /* 118d5827 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118d582a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 118d582e ret  */
  ESPCHK(0x118d57dcu, _esp0);
  ESP += 4; return;
L_118d582f:;
  /* 118d582f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5831 pop esi */
  ESI = (pop32());
  /* 118d5832 ret  */
  ESPCHK(0x118d57dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10005833 @ 0x118d5833 (69 bytes, 19 insns) */
void f_118d5833(void) {
  FTRACE(0x118d5833u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5833 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118d5837 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d583b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d583e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 118d5841 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 118d5845 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d5849 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 118d584c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d584e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 118d5851 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5857 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 118d585e jne 0x118d5877 */
  if (!C.zf) goto L_118d5877;
  /* 118d5860 inc dword ptr [0x118dc304] */
  { uint32_t _r=(r32((uint32_t)(0x118dc304)))+1; w32((uint32_t)(0x118dc304), (_r)); fl_inc(_r,32); }
  /* 118d5866 cmp dword ptr [0x118dc304], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x118dc304))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d586d jne 0x118d5877 */
  if (!C.zf) goto L_118d5877;
  /* 118d586f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118d5871 call 0x118d571a */
  push32(0x118d5876u); f_118d571a();
  /* 118d5876 pop ecx */
  ECX = (pop32());
L_118d5877:;
  /* 118d5877 ret  */
  ESPCHK(0x118d5833u, _esp0);
  ESP += 4; return;
}

/* FUN_10005878 @ 0x118d5878 (520 bytes, 180 insns) */
void f_118d5878(void) {
  FTRACE(0x118d5878u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5878 push ebp */
  push32((uint32_t)(EBP));
  /* 118d5879 mov ebp, esp */
  EBP = (ESP);
  /* 118d587b push ecx */
  push32((uint32_t)(ECX));
  /* 118d587c push ecx */
  push32((uint32_t)(ECX));
  /* 118d587d push ebx */
  push32((uint32_t)(EBX));
  /* 118d587e push esi */
  push32((uint32_t)(ESI));
  /* 118d587f mov esi, dword ptr [0x118dbab0] */
  ESI = (r32((uint32_t)(0x118dbab0)));
  /* 118d5885 push edi */
  push32((uint32_t)(EDI));
L_118d5886:;
  /* 118d5886 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 118d5889 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d588c je 0x118d5931 */
  if (C.zf) goto L_118d5931;
  /* 118d5892 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 118d5895 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 118d589b mov eax, edi */
  EAX = (EDI);
  /* 118d589d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d589f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d58a2 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 118d58a5 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118d58a8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d58aa cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d58ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118d58af jae 0x118d58eb */
  if (!C.cf) goto L_118d58eb;
L_118d58b1:;
  /* 118d58b1 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 118d58b3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d58b6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d58b8 jl 0x118d58d4 */
  if ((C.sf!=C.of)) goto L_118d58d4;
  /* 118d58ba cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d58bd jbe 0x118d58d4 */
  if ((C.cf||C.zf)) goto L_118d58d4;
  /* 118d58bf push ebx */
  push32((uint32_t)(EBX));
  /* 118d58c0 push ecx */
  push32((uint32_t)(ECX));
  /* 118d58c1 push eax */
  push32((uint32_t)(EAX));
  /* 118d58c2 call 0x118d5a80 */
  push32(0x118d58c7u); f_118d5a80();
  /* 118d58c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d58ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d58cc jne 0x118d5943 */
  if (!C.zf) goto L_118d5943;
  /* 118d58ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d58d1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_118d58d4:;
  /* 118d58d4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d58d7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 118d58dd add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d58e2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d58e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118d58e7 jb 0x118d58b1 */
  if (C.cf) goto L_118d58b1;
  /* 118d58e9 jmp 0x118d58ee */
  goto L_118d58ee;
L_118d58eb:;
  /* 118d58eb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118d58ee:;
  /* 118d58ee mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118d58f1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 118d58f4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 118d58f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118d58fa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d58fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118d58ff jae 0x118d5934 */
  if (!C.cf) goto L_118d5934;
L_118d5901:;
  /* 118d5901 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118d5903 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5905 jl 0x118d5920 */
  if ((C.sf!=C.of)) goto L_118d5920;
  /* 118d5907 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d590a jbe 0x118d5920 */
  if ((C.cf||C.zf)) goto L_118d5920;
  /* 118d590c push ebx */
  push32((uint32_t)(EBX));
  /* 118d590d push eax */
  push32((uint32_t)(EAX));
  /* 118d590e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118d5911 call 0x118d5a80 */
  push32(0x118d5916u); f_118d5a80();
  /* 118d5916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d591b jne 0x118d5943 */
  if (!C.zf) goto L_118d5943;
  /* 118d591d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_118d5920:;
  /* 118d5920 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d5927 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d592a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d592d jb 0x118d5901 */
  if (C.cf) goto L_118d5901;
  /* 118d592f jmp 0x118d5934 */
  goto L_118d5934;
L_118d5931:;
  /* 118d5931 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_118d5934:;
  /* 118d5934 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 118d5936 cmp esi, dword ptr [0x118dbab0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x118dbab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d593c je 0x118d5953 */
  if (C.zf) goto L_118d5953;
  /* 118d593e jmp 0x118d5886 */
  goto L_118d5886;
L_118d5943:;
  /* 118d5943 mov dword ptr [0x118dbab0], esi */
  w32((uint32_t)(0x118dbab0), (ESI));
  /* 118d5949 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d594b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 118d594e jmp 0x118d5a7b */
  goto L_118d5a7b;
L_118d5953:;
  /* 118d5953 mov eax, 0x118d9a90 */
  EAX = (0x118d9a90u);
  /* 118d5958 mov edi, eax */
  EDI = (EAX);
L_118d595a:;
  /* 118d595a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d595e je 0x118d5966 */
  if (C.zf) goto L_118d5966;
  /* 118d5960 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5964 jne 0x118d5972 */
  if (!C.zf) goto L_118d5972;
L_118d5966:;
  /* 118d5966 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 118d5968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d596a je 0x118d5a47 */
  if (C.zf) goto L_118d5a47;
  /* 118d5970 jmp 0x118d595a */
  goto L_118d595a;
L_118d5972:;
  /* 118d5972 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 118d5975 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118d5979 mov esi, ebx */
  ESI = (EBX);
  /* 118d597b mov eax, ebx */
  EAX = (EBX);
  /* 118d597d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d597f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5982 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 118d5985 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 118d5988 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d598b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d598e jne 0x118d59a1 */
  if (!C.zf) goto L_118d59a1;
L_118d5990:;
  /* 118d5990 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5994 jge 0x118d59a1 */
  if ((C.sf==C.of)) goto L_118d59a1;
  /* 118d5996 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5999 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118d599c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d599f je 0x118d5990 */
  if (C.zf) goto L_118d5990;
L_118d59a1:;
  /* 118d59a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d59a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 118d59a6 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118d59a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118d59ae push eax */
  push32((uint32_t)(EAX));
  /* 118d59af push esi */
  push32((uint32_t)(ESI));
  /* 118d59b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118d59b3 call dword ptr [0x118d8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8034))), 0x118d59b9u);
  /* 118d59b9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d59bb jne 0x118d5a79 */
  if (!C.zf) goto L_118d5a79;
  /* 118d59c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118d59c3 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 118d59c6 push esi */
  push32((uint32_t)(ESI));
  /* 118d59c7 call 0x118d60e0 */
  push32(0x118d59ccu); f_118d60e0();
  /* 118d59cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118d59cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118d59d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118d59d4 mov ecx, ebx */
  ECX = (EBX);
  /* 118d59d6 jle 0x118d5a08 */
  if ((C.zf||C.sf!=C.of)) goto L_118d5a08;
  /* 118d59d8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118d59db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_118d59de:;
  /* 118d59de or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 118d59e5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 118d59e8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 118d59eb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 118d59f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118d59f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118d59f4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 118d59fb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5a00 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5a03 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118d5a06 jne 0x118d59de */
  if (!C.zf) goto L_118d59de;
L_118d5a08:;
  /* 118d5a08 mov dword ptr [0x118dbab0], edi */
  w32((uint32_t)(0x118dbab0), (EDI));
  /* 118d5a0e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_118d5a14:;
  /* 118d5a14 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5a16 jae 0x118d5a24 */
  if (!C.cf) goto L_118d5a24;
  /* 118d5a18 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5a1b je 0x118d5a22 */
  if (C.zf) goto L_118d5a22;
  /* 118d5a1d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5a20 jmp 0x118d5a14 */
  goto L_118d5a14;
L_118d5a22:;
  /* 118d5a22 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_118d5a24:;
  /* 118d5a24 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5a26 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5a28 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 118d5a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d5a2e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 118d5a31 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 118d5a34 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d5a36 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d5a39 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 118d5a3d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 118d5a43 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118d5a45 jmp 0x118d5a7b */
  goto L_118d5a7b;
L_118d5a47:;
  /* 118d5a47 call 0x118d5580 */
  push32(0x118d5a4cu); f_118d5580();
  /* 118d5a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5a4e je 0x118d5a79 */
  if (C.zf) goto L_118d5a79;
  /* 118d5a50 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118d5a53 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 118d5a56 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 118d5a5a mov dword ptr [0x118dbab0], eax */
  w32((uint32_t)(0x118dbab0), (EAX));
  /* 118d5a5f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118d5a61 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 118d5a66 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5a68 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 118d5a6b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 118d5a6e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d5a71 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 118d5a77 jmp 0x118d5a7b */
  goto L_118d5a7b;
L_118d5a79:;
  /* 118d5a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d5a7b:;
  /* 118d5a7b pop edi */
  EDI = (pop32());
  /* 118d5a7c pop esi */
  ESI = (pop32());
  /* 118d5a7d pop ebx */
  EBX = (pop32());
  /* 118d5a7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d5a7f ret  */
  ESPCHK(0x118d5878u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a80 @ 0x118d5a80 (292 bytes, 125 insns) */
void f_118d5a80(void) {
  FTRACE(0x118d5a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5a80 push ebp */
  push32((uint32_t)(EBP));
  /* 118d5a81 mov ebp, esp */
  EBP = (ESP);
  /* 118d5a83 push ecx */
  push32((uint32_t)(ECX));
  /* 118d5a84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118d5a87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118d5a8a push ebx */
  push32((uint32_t)(EBX));
  /* 118d5a8b push esi */
  push32((uint32_t)(ESI));
  /* 118d5a8c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 118d5a8f push edi */
  push32((uint32_t)(EDI));
  /* 118d5a90 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 118d5a92 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 118d5a98 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5a9a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118d5a9d mov eax, edi */
  EAX = (EDI);
  /* 118d5a9f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118d5aa2 jb 0x118d5ac5 */
  if (C.cf) goto L_118d5ac5;
  /* 118d5aa4 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 118d5aa7 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 118d5aa9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5aab jae 0x118d5ab4 */
  if (!C.cf) goto L_118d5ab4;
  /* 118d5aad add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118d5aaf sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d5ab2 jmp 0x118d5abd */
  goto L_118d5abd;
L_118d5ab4:;
  /* 118d5ab4 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d5ab8 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 118d5abb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118d5abd:;
  /* 118d5abd lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 118d5ac0 jmp 0x118d5b93 */
  goto L_118d5b93;
L_118d5ac5:;
  /* 118d5ac5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5ac7 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d5aca je 0x118d5ace */
  if (C.zf) goto L_118d5ace;
  /* 118d5acc mov eax, esi */
  EAX = (ESI);
L_118d5ace:;
  /* 118d5ace lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 118d5ad1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5ad3 jae 0x118d5b18 */
  if (!C.cf) goto L_118d5b18;
L_118d5ad5:;
  /* 118d5ad5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 118d5ad7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 118d5ad9 jne 0x118d5b0b */
  if (!C.zf) goto L_118d5b0b;
  /* 118d5adb push 1 */
  push32((uint32_t)(0x1u));
  /* 118d5add lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 118d5ae0 pop esi */
  ESI = (pop32());
L_118d5ae1:;
  /* 118d5ae1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d5ae4 jne 0x118d5aea */
  if (!C.zf) goto L_118d5aea;
  /* 118d5ae6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d5ae7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d5ae8 jmp 0x118d5ae1 */
  goto L_118d5ae1;
L_118d5aea:;
  /* 118d5aea cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5aec jae 0x118d5b3c */
  if (!C.cf) goto L_118d5b3c;
  /* 118d5aee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5af1 jne 0x118d5af8 */
  if (!C.zf) goto L_118d5af8;
  /* 118d5af3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118d5af6 jmp 0x118d5b04 */
  goto L_118d5b04;
L_118d5af8:;
  /* 118d5af8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d5afb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5afe jb 0x118d5b9d */
  if (C.cf) goto L_118d5b9d;
L_118d5b04:;
  /* 118d5b04 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 118d5b07 mov eax, ebx */
  EAX = (EBX);
  /* 118d5b09 jmp 0x118d5b10 */
  goto L_118d5b10;
L_118d5b0b:;
  /* 118d5b0b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 118d5b0e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118d5b10:;
  /* 118d5b10 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 118d5b13 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b16 jb 0x118d5ad5 */
  if (C.cf) goto L_118d5ad5;
L_118d5b18:;
  /* 118d5b18 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_118d5b1b:;
  /* 118d5b1b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b1d jae 0x118d5b9d */
  if (!C.cf) goto L_118d5b9d;
  /* 118d5b1f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 118d5b22 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b25 jae 0x118d5b9d */
  if (!C.cf) goto L_118d5b9d;
  /* 118d5b27 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d5b29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d5b2b jne 0x118d5b6d */
  if (!C.zf) goto L_118d5b6d;
  /* 118d5b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 118d5b2f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 118d5b32 pop eax */
  EAX = (pop32());
L_118d5b33:;
  /* 118d5b33 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118d5b36 jne 0x118d5b5d */
  if (!C.zf) goto L_118d5b5d;
  /* 118d5b38 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118d5b39 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118d5b3a jmp 0x118d5b33 */
  goto L_118d5b33;
L_118d5b3c:;
  /* 118d5b3c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 118d5b3f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b42 jae 0x118d5b4d */
  if (!C.cf) goto L_118d5b4d;
  /* 118d5b44 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5b46 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 118d5b48 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 118d5b4b jmp 0x118d5b56 */
  goto L_118d5b56;
L_118d5b4d:;
  /* 118d5b4d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d5b51 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 118d5b54 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_118d5b56:;
  /* 118d5b56 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118d5b58 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5b5b jmp 0x118d5b93 */
  goto L_118d5b93;
L_118d5b5d:;
  /* 118d5b5d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b5f jae 0x118d5b74 */
  if (!C.cf) goto L_118d5b74;
  /* 118d5b61 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118d5b64 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b67 jb 0x118d5b9d */
  if (C.cf) goto L_118d5b9d;
  /* 118d5b69 mov esi, ebx */
  ESI = (EBX);
  /* 118d5b6b jmp 0x118d5b1b */
  goto L_118d5b1b;
L_118d5b6d:;
  /* 118d5b6d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 118d5b70 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5b72 jmp 0x118d5b1b */
  goto L_118d5b1b;
L_118d5b74:;
  /* 118d5b74 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 118d5b77 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5b7a jae 0x118d5b85 */
  if (!C.cf) goto L_118d5b85;
  /* 118d5b7c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5b7e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 118d5b80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 118d5b83 jmp 0x118d5b8e */
  goto L_118d5b8e;
L_118d5b85:;
  /* 118d5b85 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 118d5b89 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 118d5b8c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118d5b8e:;
  /* 118d5b8e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 118d5b90 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_118d5b93:;
  /* 118d5b93 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118d5b96 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118d5b99 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118d5b9b jmp 0x118d5b9f */
  goto L_118d5b9f;
L_118d5b9d:;
  /* 118d5b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d5b9f:;
  /* 118d5b9f pop edi */
  EDI = (pop32());
  /* 118d5ba0 pop esi */
  ESI = (pop32());
  /* 118d5ba1 pop ebx */
  EBX = (pop32());
  /* 118d5ba2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118d5ba3 ret  */
  ESPCHK(0x118d5a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba4 @ 0x118d5ba4 (137 bytes, 50 insns) */
void f_118d5ba4(void) {
  FTRACE(0x118d5ba4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 118d5ba5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118d5ba7 cmp dword ptr [0x118dc308], ebx */
  { uint32_t _a=(r32((uint32_t)(0x118dc308))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5bad push esi */
  push32((uint32_t)(ESI));
  /* 118d5bae push edi */
  push32((uint32_t)(EDI));
  /* 118d5baf jne 0x118d5bf3 */
  if (!C.zf) goto L_118d5bf3;
  /* 118d5bb1 push 0x118d85a8 */
  push32((uint32_t)(0x118d85a8u));
  /* 118d5bb6 call dword ptr [0x118d8030] */
  call_ind((uint32_t)(r32((uint32_t)(0x118d8030))), 0x118d5bbcu);
  /* 118d5bbc mov edi, eax */
  EDI = (EAX);
  /* 118d5bbe cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118d5bc0 je 0x118d5c29 */
  if (C.zf) goto L_118d5c29;
  /* 118d5bc2 mov esi, dword ptr [0x118d802c] */
  ESI = (r32((uint32_t)(0x118d802c)));
  /* 118d5bc8 push 0x118d859c */
  push32((uint32_t)(0x118d859cu));
  /* 118d5bcd push edi */
  push32((uint32_t)(EDI));
  /* 118d5bce call esi */
  call_ind((uint32_t)(ESI), 0x118d5bd0u);
  /* 118d5bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5bd2 mov dword ptr [0x118dc308], eax */
  w32((uint32_t)(0x118dc308), (EAX));
  /* 118d5bd7 je 0x118d5c29 */
  if (C.zf) goto L_118d5c29;
  /* 118d5bd9 push 0x118d858c */
  push32((uint32_t)(0x118d858cu));
  /* 118d5bde push edi */
  push32((uint32_t)(EDI));
  /* 118d5bdf call esi */
  call_ind((uint32_t)(ESI), 0x118d5be1u);
  /* 118d5be1 push 0x118d8578 */
  push32((uint32_t)(0x118d8578u));
  /* 118d5be6 push edi */
  push32((uint32_t)(EDI));
  /* 118d5be7 mov dword ptr [0x118dc30c], eax */
  w32((uint32_t)(0x118dc30c), (EAX));
  /* 118d5bec call esi */
  call_ind((uint32_t)(ESI), 0x118d5beeu);
  /* 118d5bee mov dword ptr [0x118dc310], eax */
  w32((uint32_t)(0x118dc310), (EAX));
L_118d5bf3:;
  /* 118d5bf3 mov eax, dword ptr [0x118dc30c] */
  EAX = (r32((uint32_t)(0x118dc30c)));
  /* 118d5bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5bfa je 0x118d5c12 */
  if (C.zf) goto L_118d5c12;
  /* 118d5bfc call eax */
  call_ind((uint32_t)(EAX), 0x118d5bfeu);
  /* 118d5bfe mov ebx, eax */
  EBX = (EAX);
  /* 118d5c00 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118d5c02 je 0x118d5c12 */
  if (C.zf) goto L_118d5c12;
  /* 118d5c04 mov eax, dword ptr [0x118dc310] */
  EAX = (r32((uint32_t)(0x118dc310)));
  /* 118d5c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118d5c0b je 0x118d5c12 */
  if (C.zf) goto L_118d5c12;
  /* 118d5c0d push ebx */
  push32((uint32_t)(EBX));
  /* 118d5c0e call eax */
  call_ind((uint32_t)(EAX), 0x118d5c10u);
  /* 118d5c10 mov ebx, eax */
  EBX = (EAX);
L_118d5c12:;
  /* 118d5c12 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d5c16 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d5c1a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118d5c1e push ebx */
  push32((uint32_t)(EBX));
  /* 118d5c1f call dword ptr [0x118dc308] */
  call_ind((uint32_t)(r32((uint32_t)(0x118dc308))), 0x118d5c25u);
L_118d5c25:;
  /* 118d5c25 pop edi */
  EDI = (pop32());
  /* 118d5c26 pop esi */
  ESI = (pop32());
  /* 118d5c27 pop ebx */
  EBX = (pop32());
  /* 118d5c28 ret  */
  ESPCHK(0x118d5ba4u, _esp0);
  ESP += 4; return;
L_118d5c29:;
  /* 118d5c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5c2b jmp 0x118d5c25 */
  goto L_118d5c25;
}

/* _strncpy @ 0x118d5c30 (254 bytes, 109 insns) */
void f_118d5c30(void) {
  FTRACE(0x118d5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118d5c30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118d5c34 push edi */
  push32((uint32_t)(EDI));
  /* 118d5c35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118d5c37 je 0x118d5cb3 */
  if (C.zf) goto L_118d5cb3;
  /* 118d5c39 push esi */
  push32((uint32_t)(ESI));
  /* 118d5c3a push ebx */
  push32((uint32_t)(EBX));
  /* 118d5c3b mov ebx, ecx */
  EBX = (ECX);
  /* 118d5c3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 118d5c41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 118d5c47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118d5c4b jne 0x118d5c54 */
  if (!C.zf) goto L_118d5c54;
  /* 118d5c4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d5c50 jne 0x118d5cc1 */
  if (!C.zf) goto L_118d5cc1;
  /* 118d5c52 jmp 0x118d5c75 */
  goto L_118d5c75;
L_118d5c54:;
  /* 118d5c54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d5c56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d5c57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d5c59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d5c5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5c5b je 0x118d5c82 */
  if (C.zf) goto L_118d5c82;
  /* 118d5c5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d5c5f je 0x118d5c8a */
  if (C.zf) goto L_118d5c8a;
  /* 118d5c61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 118d5c67 jne 0x118d5c54 */
  if (!C.zf) goto L_118d5c54;
  /* 118d5c69 mov ebx, ecx */
  EBX = (ECX);
  /* 118d5c6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d5c6e jne 0x118d5cc1 */
  if (!C.zf) goto L_118d5cc1;
L_118d5c70:;
  /* 118d5c70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 118d5c73 je 0x118d5c82 */
  if (C.zf) goto L_118d5c82;
L_118d5c75:;
  /* 118d5c75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118d5c77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118d5c78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d5c7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d5c7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118d5c7d je 0x118d5cae */
  if (C.zf) goto L_118d5cae;
  /* 118d5c7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d5c80 jne 0x118d5c75 */
  if (!C.zf) goto L_118d5c75;
L_118d5c82:;
  /* 118d5c82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d5c86 pop ebx */
  EBX = (pop32());
  /* 118d5c87 pop esi */
  ESI = (pop32());
  /* 118d5c88 pop edi */
  EDI = (pop32());
  /* 118d5c89 ret  */
  ESPCHK(0x118d5c30u, _esp0);
  ESP += 4; return;
L_118d5c8a:;
  /* 118d5c8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118d5c90 je 0x118d5ca4 */
  if (C.zf) goto L_118d5ca4;
L_118d5c92:;
  /* 118d5c92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d5c94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118d5c95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5c96 je 0x118d5d26 */
  if (C.zf) goto L_118d5d26;
  /* 118d5c9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118d5ca2 jne 0x118d5c92 */
  if (!C.zf) goto L_118d5c92;
L_118d5ca4:;
  /* 118d5ca4 mov ebx, ecx */
  EBX = (ECX);
  /* 118d5ca6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118d5ca9 jne 0x118d5d17 */
  if (!C.zf) goto L_118d5d17;
L_118d5cab:;
  /* 118d5cab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118d5cad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_118d5cae:;
  /* 118d5cae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118d5caf jne 0x118d5cab */
  if (!C.zf) goto L_118d5cab;
  /* 118d5cb1 pop ebx */
  EBX = (pop32());
  /* 118d5cb2 pop esi */
  ESI = (pop32());
L_118d5cb3:;
  /* 118d5cb3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118d5cb7 pop edi */
  EDI = (pop32());
  /* 118d5cb8 ret  */
  ESPCHK(0x118d5c30u, _esp0);
  ESP += 4; return;
L_118d5cb9:;
  /* 118d5cb9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118d5cbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5cbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5cbf je 0x118d5c70 */
  if (C.zf) goto L_118d5c70;
L_118d5cc1:;
  /* 118d5cc1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118d5cc6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118d5cc8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5cca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118d5ccd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5ccf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 118d5cd1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5cd4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118d5cd9 je 0x118d5cb9 */
  if (C.zf) goto L_118d5cb9;
  /* 118d5cdb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118d5cdd je 0x118d5d0b */
  if (C.zf) goto L_118d5d0b;
  /* 118d5cdf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 118d5ce1 je 0x118d5d01 */
  if (C.zf) goto L_118d5d01;
  /* 118d5ce3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 118d5ce9 je 0x118d5cf7 */
  if (C.zf) goto L_118d5cf7;
  /* 118d5ceb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 118d5cf1 jne 0x118d5cb9 */
  if (!C.zf) goto L_118d5cb9;
  /* 118d5cf3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118d5cf5 jmp 0x118d5d0f */
  goto L_118d5d0f;
L_118d5cf7:;
  /* 118d5cf7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118d5cfd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118d5cff jmp 0x118d5d0f */
  goto L_118d5d0f;
L_118d5d01:;
  /* 118d5d01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 118d5d07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118d5d09 jmp 0x118d5d0f */
  goto L_118d5d0f;
L_118d5d0b:;
  /* 118d5d0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118d5d0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_118d5d0f:;
  /* 118d5d0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118d5d14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5d15 je 0x118d5d21 */
  if (C.zf) goto L_118d5d21;
L_118d5d17:;
  /* 118d5d17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118d5d19:;
  /* 118d5d19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118d5d1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118d5d1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118d5d1f jne 0x118d5d19 */
  if (!C.zf) goto L_118d5d19;
L_118d5d21:;
  /* 118d5d21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 118d5d24 jne 0x118d5cab */
  if (!C.zf) goto L_118d5cab;
L_118d5d26:;
  /* 118d5d26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118d5d2a pop ebx */
  EBX = (pop32());
  /* 118d5d2b pop esi */
  ESI = (pop32());
  /* 118d5d2c pop edi */
  EDI = (pop32());
  /* 118d5d2d ret  */
  ESPCHK(0x118d5c30u, _esp0);
  ESP += 4; return;
}

