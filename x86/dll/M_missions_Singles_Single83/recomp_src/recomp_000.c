#include "recomp.h"

/* FUN_10001000 @ 0x11de1000 (20 bytes, 6 insns) */
void f_11de1000(void) {
  FTRACE(0x11de1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de1005 jne 0x11de100c */
  if (!C.zf) goto L_11de100c;
  /* 11de1007 call 0x11de1020 */
  push32(0x11de100cu); f_11de1020();
L_11de100c:;
  /* 11de100c mov eax, 1 */
  EAX = (0x1u);
  /* 11de1011 ret 0xc */
  ESPCHK(0x11de1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11de1020 (793 bytes, 217 insns) */
void f_11de1020(void) {
  FTRACE(0x11de1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1020 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1021 mov ebx, dword ptr [0x11de815c] */
  EBX = (r32((uint32_t)(0x11de815c)));
  /* 11de1027 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1028 push esi */
  push32((uint32_t)(ESI));
  /* 11de1029 push edi */
  push32((uint32_t)(EDI));
  /* 11de102a push 8 */
  push32((uint32_t)(0x8u));
  /* 11de102c push 0x11de9030 */
  push32((uint32_t)(0x11de9030u));
  /* 11de1031 call ebx */
  call_ind((uint32_t)(EBX), 0x11de1033u);
  /* 11de1033 mov ebp, dword ptr [0x11de816c] */
  EBP = (r32((uint32_t)(0x11de816c)));
  /* 11de1039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de103c mov esi, 0x11debd70 */
  ESI = (0x11debd70u);
L_11de1041:;
  /* 11de1041 push esi */
  push32((uint32_t)(ESI));
  /* 11de1042 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1044u);
  /* 11de1044 add esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de104a cmp esi, 0x11debe12 */
  { uint32_t _a=(ESI),_b=(0x11debe12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1050 jl 0x11de1041 */
  if ((C.sf!=C.of)) goto L_11de1041;
  /* 11de1052 push 0xa2 */
  push32((uint32_t)(0xa2u));
  /* 11de1057 push 0x11debd70 */
  push32((uint32_t)(0x11debd70u));
  /* 11de105c call ebx */
  call_ind((uint32_t)(EBX), 0x11de105eu);
  /* 11de105e mov esi, dword ptr [0x11de8170] */
  ESI = (r32((uint32_t)(0x11de8170)));
  /* 11de1064 push 0x11de9224 */
  push32((uint32_t)(0x11de9224u));
  /* 11de1069 push 0x11debcc0 */
  push32((uint32_t)(0x11debcc0u));
  /* 11de106e call esi */
  call_ind((uint32_t)(ESI), 0x11de1070u);
  /* 11de1070 push 0x11debd68 */
  push32((uint32_t)(0x11debd68u));
  /* 11de1075 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1077u);
  /* 11de1077 push 0x11debd60 */
  push32((uint32_t)(0x11debd60u));
  /* 11de107c call ebp */
  call_ind((uint32_t)(EBP), 0x11de107eu);
  /* 11de107e push 8 */
  push32((uint32_t)(0x8u));
  /* 11de1080 push 0x11debd68 */
  push32((uint32_t)(0x11debd68u));
  /* 11de1085 call ebx */
  call_ind((uint32_t)(EBX), 0x11de1087u);
  /* 11de1087 push 8 */
  push32((uint32_t)(0x8u));
  /* 11de1089 push 0x11debd60 */
  push32((uint32_t)(0x11debd60u));
  /* 11de108e call ebx */
  call_ind((uint32_t)(EBX), 0x11de1090u);
  /* 11de1090 mov edi, dword ptr [0x11de8168] */
  EDI = (r32((uint32_t)(0x11de8168)));
  /* 11de1096 push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de109b push 0x11debd50 */
  push32((uint32_t)(0x11debd50u));
  /* 11de10a0 call edi */
  call_ind((uint32_t)(EDI), 0x11de10a2u);
  /* 11de10a2 push 0x11de9214 */
  push32((uint32_t)(0x11de9214u));
  /* 11de10a7 push 0x11debd58 */
  push32((uint32_t)(0x11debd58u));
  /* 11de10ac call edi */
  call_ind((uint32_t)(EDI), 0x11de10aeu);
  /* 11de10ae mov edi, dword ptr [0x11de8178] */
  EDI = (r32((uint32_t)(0x11de8178)));
  /* 11de10b4 push 0x11de9210 */
  push32((uint32_t)(0x11de9210u));
  /* 11de10b9 push 0x11debcc8 */
  push32((uint32_t)(0x11debcc8u));
  /* 11de10be call edi */
  call_ind((uint32_t)(EDI), 0x11de10c0u);
  /* 11de10c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de10c3 push 0x11de920c */
  push32((uint32_t)(0x11de920cu));
  /* 11de10c8 push 0x11debcd0 */
  push32((uint32_t)(0x11debcd0u));
  /* 11de10cd call edi */
  call_ind((uint32_t)(EDI), 0x11de10cfu);
  /* 11de10cf push 0x11de9208 */
  push32((uint32_t)(0x11de9208u));
  /* 11de10d4 push 0x11debcd8 */
  push32((uint32_t)(0x11debcd8u));
  /* 11de10d9 call edi */
  call_ind((uint32_t)(EDI), 0x11de10dbu);
  /* 11de10db push 0x11de9204 */
  push32((uint32_t)(0x11de9204u));
  /* 11de10e0 push 0x11debce0 */
  push32((uint32_t)(0x11debce0u));
  /* 11de10e5 call edi */
  call_ind((uint32_t)(EDI), 0x11de10e7u);
  /* 11de10e7 push 0x11de9200 */
  push32((uint32_t)(0x11de9200u));
  /* 11de10ec push 0x11debce8 */
  push32((uint32_t)(0x11debce8u));
  /* 11de10f1 call edi */
  call_ind((uint32_t)(EDI), 0x11de10f3u);
  /* 11de10f3 push 0x11de91fc */
  push32((uint32_t)(0x11de91fcu));
  /* 11de10f8 push 0x11debcf0 */
  push32((uint32_t)(0x11debcf0u));
  /* 11de10fd call edi */
  call_ind((uint32_t)(EDI), 0x11de10ffu);
  /* 11de10ff push 0x11de91f8 */
  push32((uint32_t)(0x11de91f8u));
  /* 11de1104 push 0x11debcf8 */
  push32((uint32_t)(0x11debcf8u));
  /* 11de1109 call edi */
  call_ind((uint32_t)(EDI), 0x11de110bu);
  /* 11de110b push 0x11de91f4 */
  push32((uint32_t)(0x11de91f4u));
  /* 11de1110 push 0x11debd00 */
  push32((uint32_t)(0x11debd00u));
  /* 11de1115 call edi */
  call_ind((uint32_t)(EDI), 0x11de1117u);
  /* 11de1117 push 0x11de91f0 */
  push32((uint32_t)(0x11de91f0u));
  /* 11de111c push 0x11debd08 */
  push32((uint32_t)(0x11debd08u));
  /* 11de1121 call edi */
  call_ind((uint32_t)(EDI), 0x11de1123u);
  /* 11de1123 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1126 push 0x11de91e8 */
  push32((uint32_t)(0x11de91e8u));
  /* 11de112b push 0x11debd10 */
  push32((uint32_t)(0x11debd10u));
  /* 11de1130 call edi */
  call_ind((uint32_t)(EDI), 0x11de1132u);
  /* 11de1132 push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de1137 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1139u);
  /* 11de1139 push 8 */
  push32((uint32_t)(0x8u));
  /* 11de113b push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de1140 call ebx */
  call_ind((uint32_t)(EBX), 0x11de1142u);
  /* 11de1142 push 0x11de91dc */
  push32((uint32_t)(0x11de91dcu));
  /* 11de1147 push 0x11debd38 */
  push32((uint32_t)(0x11debd38u));
  /* 11de114c call dword ptr [0x11de817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de817c))), 0x11de1152u);
  /* 11de1152 push 0x11de91d0 */
  push32((uint32_t)(0x11de91d0u));
  /* 11de1157 push 0x11debd30 */
  push32((uint32_t)(0x11debd30u));
  /* 11de115c call dword ptr [0x11de817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de817c))), 0x11de1162u);
  /* 11de1162 push 0x11de91c4 */
  push32((uint32_t)(0x11de91c4u));
  /* 11de1167 push 0x11debd28 */
  push32((uint32_t)(0x11debd28u));
  /* 11de116c call dword ptr [0x11de817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de817c))), 0x11de1172u);
  /* 11de1172 push 0x11de91b8 */
  push32((uint32_t)(0x11de91b8u));
  /* 11de1177 push 0x11debd20 */
  push32((uint32_t)(0x11debd20u));
  /* 11de117c call dword ptr [0x11de817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de817c))), 0x11de1182u);
  /* 11de1182 push 0x11de91a8 */
  push32((uint32_t)(0x11de91a8u));
  /* 11de1187 push 0x11debd40 */
  push32((uint32_t)(0x11debd40u));
  /* 11de118c call esi */
  call_ind((uint32_t)(ESI), 0x11de118eu);
  /* 11de118e push 0x11de919c */
  push32((uint32_t)(0x11de919cu));
  /* 11de1193 push 0x11debe18 */
  push32((uint32_t)(0x11debe18u));
  /* 11de1198 call edi */
  call_ind((uint32_t)(EDI), 0x11de119au);
  /* 11de119a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de119d push 0x11de9190 */
  push32((uint32_t)(0x11de9190u));
  /* 11de11a2 push 0x11debe20 */
  push32((uint32_t)(0x11debe20u));
  /* 11de11a7 call edi */
  call_ind((uint32_t)(EDI), 0x11de11a9u);
  /* 11de11a9 push 0x11de9184 */
  push32((uint32_t)(0x11de9184u));
  /* 11de11ae push 0x11debe28 */
  push32((uint32_t)(0x11debe28u));
  /* 11de11b3 call edi */
  call_ind((uint32_t)(EDI), 0x11de11b5u);
  /* 11de11b5 push 0x11de9178 */
  push32((uint32_t)(0x11de9178u));
  /* 11de11ba push 0x11debe30 */
  push32((uint32_t)(0x11debe30u));
  /* 11de11bf call edi */
  call_ind((uint32_t)(EDI), 0x11de11c1u);
  /* 11de11c1 push 0x11debd18 */
  push32((uint32_t)(0x11debd18u));
  /* 11de11c6 call ebp */
  call_ind((uint32_t)(EBP), 0x11de11c8u);
  /* 11de11c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11de11ca push 0x11debd18 */
  push32((uint32_t)(0x11debd18u));
  /* 11de11cf call ebx */
  call_ind((uint32_t)(EBX), 0x11de11d1u);
  /* 11de11d1 push 0x11de916c */
  push32((uint32_t)(0x11de916cu));
  /* 11de11d6 push 0x11debe38 */
  push32((uint32_t)(0x11debe38u));
  /* 11de11db call esi */
  call_ind((uint32_t)(ESI), 0x11de11ddu);
  /* 11de11dd push 0x11de915c */
  push32((uint32_t)(0x11de915cu));
  /* 11de11e2 push 0x11debe40 */
  push32((uint32_t)(0x11debe40u));
  /* 11de11e7 call esi */
  call_ind((uint32_t)(ESI), 0x11de11e9u);
  /* 11de11e9 push 0x11de914c */
  push32((uint32_t)(0x11de914cu));
  /* 11de11ee push 0x11debe48 */
  push32((uint32_t)(0x11debe48u));
  /* 11de11f3 call esi */
  call_ind((uint32_t)(ESI), 0x11de11f5u);
  /* 11de11f5 push 0x11de9140 */
  push32((uint32_t)(0x11de9140u));
  /* 11de11fa push 0x11debe50 */
  push32((uint32_t)(0x11debe50u));
  /* 11de11ff call esi */
  call_ind((uint32_t)(ESI), 0x11de1201u);
  /* 11de1201 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1204 push 0x11de9130 */
  push32((uint32_t)(0x11de9130u));
  /* 11de1209 push 0x11debe58 */
  push32((uint32_t)(0x11debe58u));
  /* 11de120e call esi */
  call_ind((uint32_t)(ESI), 0x11de1210u);
  /* 11de1210 push 0x11de9120 */
  push32((uint32_t)(0x11de9120u));
  /* 11de1215 push 0x11debe60 */
  push32((uint32_t)(0x11debe60u));
  /* 11de121a call esi */
  call_ind((uint32_t)(ESI), 0x11de121cu);
  /* 11de121c push 0x11de910c */
  push32((uint32_t)(0x11de910cu));
  /* 11de1221 push 0x11debe68 */
  push32((uint32_t)(0x11debe68u));
  /* 11de1226 call esi */
  call_ind((uint32_t)(ESI), 0x11de1228u);
  /* 11de1228 push 0x11de9100 */
  push32((uint32_t)(0x11de9100u));
  /* 11de122d push 0x11debe70 */
  push32((uint32_t)(0x11debe70u));
  /* 11de1232 call esi */
  call_ind((uint32_t)(ESI), 0x11de1234u);
  /* 11de1234 push 0x11de90f4 */
  push32((uint32_t)(0x11de90f4u));
  /* 11de1239 push 0x11debe78 */
  push32((uint32_t)(0x11debe78u));
  /* 11de123e call esi */
  call_ind((uint32_t)(ESI), 0x11de1240u);
  /* 11de1240 push 0x11de90e4 */
  push32((uint32_t)(0x11de90e4u));
  /* 11de1245 push 0x11debe80 */
  push32((uint32_t)(0x11debe80u));
  /* 11de124a call esi */
  call_ind((uint32_t)(ESI), 0x11de124cu);
  /* 11de124c push 0x11de90d8 */
  push32((uint32_t)(0x11de90d8u));
  /* 11de1251 push 0x11debe88 */
  push32((uint32_t)(0x11debe88u));
  /* 11de1256 call esi */
  call_ind((uint32_t)(ESI), 0x11de1258u);
  /* 11de1258 push 0x11de90c8 */
  push32((uint32_t)(0x11de90c8u));
  /* 11de125d push 0x11debe90 */
  push32((uint32_t)(0x11debe90u));
  /* 11de1262 call esi */
  call_ind((uint32_t)(ESI), 0x11de1264u);
  /* 11de1264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1267 push 0x11de90b8 */
  push32((uint32_t)(0x11de90b8u));
  /* 11de126c push 0x11debe98 */
  push32((uint32_t)(0x11debe98u));
  /* 11de1271 call esi */
  call_ind((uint32_t)(ESI), 0x11de1273u);
  /* 11de1273 push 0x11de90ac */
  push32((uint32_t)(0x11de90acu));
  /* 11de1278 push 0x11debea0 */
  push32((uint32_t)(0x11debea0u));
  /* 11de127d call esi */
  call_ind((uint32_t)(ESI), 0x11de127fu);
  /* 11de127f push 0x11de909c */
  push32((uint32_t)(0x11de909cu));
  /* 11de1284 push 0x11debea8 */
  push32((uint32_t)(0x11debea8u));
  /* 11de1289 call esi */
  call_ind((uint32_t)(ESI), 0x11de128bu);
  /* 11de128b push 0x11de908c */
  push32((uint32_t)(0x11de908cu));
  /* 11de1290 push 0x11debeb0 */
  push32((uint32_t)(0x11debeb0u));
  /* 11de1295 call esi */
  call_ind((uint32_t)(ESI), 0x11de1297u);
  /* 11de1297 push 0x11de9078 */
  push32((uint32_t)(0x11de9078u));
  /* 11de129c push 0x11debeb8 */
  push32((uint32_t)(0x11debeb8u));
  /* 11de12a1 call esi */
  call_ind((uint32_t)(ESI), 0x11de12a3u);
  /* 11de12a3 push 0x11de906c */
  push32((uint32_t)(0x11de906cu));
  /* 11de12a8 push 0x11debec0 */
  push32((uint32_t)(0x11debec0u));
  /* 11de12ad call esi */
  call_ind((uint32_t)(ESI), 0x11de12afu);
  /* 11de12af push 0x11de9060 */
  push32((uint32_t)(0x11de9060u));
  /* 11de12b4 push 0x11debec8 */
  push32((uint32_t)(0x11debec8u));
  /* 11de12b9 call esi */
  call_ind((uint32_t)(ESI), 0x11de12bbu);
  /* 11de12bb push 0x11de9050 */
  push32((uint32_t)(0x11de9050u));
  /* 11de12c0 push 0x11debed0 */
  push32((uint32_t)(0x11debed0u));
  /* 11de12c5 call esi */
  call_ind((uint32_t)(ESI), 0x11de12c7u);
  /* 11de12c7 mov esi, dword ptr [0x11de8174] */
  ESI = (r32((uint32_t)(0x11de8174)));
  /* 11de12cd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de12d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de12d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de12d4 call esi */
  call_ind((uint32_t)(ESI), 0x11de12d6u);
  /* 11de12d6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11de12d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de12da call esi */
  call_ind((uint32_t)(ESI), 0x11de12dcu);
  /* 11de12dc mov esi, dword ptr [0x11de8184] */
  ESI = (r32((uint32_t)(0x11de8184)));
  /* 11de12e2 push 0x11de9048 */
  push32((uint32_t)(0x11de9048u));
  /* 11de12e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de12e9 call esi */
  call_ind((uint32_t)(ESI), 0x11de12ebu);
  /* 11de12eb push 0x11de9040 */
  push32((uint32_t)(0x11de9040u));
  /* 11de12f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de12f2 call esi */
  call_ind((uint32_t)(ESI), 0x11de12f4u);
  /* 11de12f4 push 0x11de9038 */
  push32((uint32_t)(0x11de9038u));
  /* 11de12f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de12fb call esi */
  call_ind((uint32_t)(ESI), 0x11de12fdu);
  /* 11de12fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11de12ff call 0x11de1b7f */
  push32(0x11de1304u); f_11de1b7f();
  /* 11de1304 push eax */
  push32((uint32_t)(EAX));
  /* 11de1305 call 0x11de1b50 */
  push32(0x11de130au); f_11de1b50();
  /* 11de130a mov esi, dword ptr [0x11de8188] */
  ESI = (r32((uint32_t)(0x11de8188)));
  /* 11de1310 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11de1312 call esi */
  call_ind((uint32_t)(ESI), 0x11de1314u);
  /* 11de1314 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11de1316 call esi */
  call_ind((uint32_t)(ESI), 0x11de1318u);
  /* 11de1318 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11de131a call esi */
  call_ind((uint32_t)(ESI), 0x11de131cu);
  /* 11de131c push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11de131e call esi */
  call_ind((uint32_t)(ESI), 0x11de1320u);
  /* 11de1320 mov esi, dword ptr [0x11de8180] */
  ESI = (r32((uint32_t)(0x11de8180)));
  /* 11de1326 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1329 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11de132b call esi */
  call_ind((uint32_t)(ESI), 0x11de132du);
  /* 11de132d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11de132f call esi */
  call_ind((uint32_t)(ESI), 0x11de1331u);
  /* 11de1331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1334 pop edi */
  EDI = (pop32());
  /* 11de1335 pop esi */
  ESI = (pop32());
  /* 11de1336 pop ebp */
  EBP = (pop32());
  /* 11de1337 pop ebx */
  EBX = (pop32());
  /* 11de1338 ret  */
  ESPCHK(0x11de1020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11de1340 (1116 bytes, 354 insns) [1 switch table(s)] */
void f_11de1340(void) {
  FTRACE(0x11de1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1340 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1341 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1342 push esi */
  push32((uint32_t)(ESI));
  /* 11de1343 push edi */
  push32((uint32_t)(EDI));
  /* 11de1344 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1346 call dword ptr [0x11de8124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8124))), 0x11de134cu);
  /* 11de134c mov ebp, dword ptr [0x11de8128] */
  EBP = (r32((uint32_t)(0x11de8128)));
  /* 11de1352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1357 je 0x11de1473 */
  if (C.zf) goto L_11de1473;
  /* 11de135d push 0 */
  push32((uint32_t)(0x0u));
  /* 11de135f push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1361 call dword ptr [0x11de8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8120))), 0x11de1367u);
  /* 11de1367 mov edi, dword ptr [0x11de8130] */
  EDI = (r32((uint32_t)(0x11de8130)));
  /* 11de136d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1370 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11de1372:;
  /* 11de1372 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11de1377 push esi */
  push32((uint32_t)(ESI));
  /* 11de1378 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de137a call edi */
  call_ind((uint32_t)(EDI), 0x11de137cu);
  /* 11de137c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11de1381 push esi */
  push32((uint32_t)(ESI));
  /* 11de1382 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1384 call edi */
  call_ind((uint32_t)(EDI), 0x11de1386u);
  /* 11de1386 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11de138b push esi */
  push32((uint32_t)(ESI));
  /* 11de138c push 3 */
  push32((uint32_t)(0x3u));
  /* 11de138e call edi */
  call_ind((uint32_t)(EDI), 0x11de1390u);
  /* 11de1390 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1393 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de1394 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1397 jl 0x11de1372 */
  if ((C.sf!=C.of)) goto L_11de1372;
  /* 11de1399 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de139b call ebp */
  call_ind((uint32_t)(EBP), 0x11de139du);
  /* 11de139d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de13a0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de13a3 ja 0x11de1406 */
  if ((!C.cf&&!C.zf)) goto L_11de1406;
  /* 11de13a5 mov esi, dword ptr [0x11de8134] */
  ESI = (r32((uint32_t)(0x11de8134)));
  /* 11de13ab jmp dword ptr [eax*4 + 0x11de179c] */
  switch (EAX) {
    case 0: goto L_11de13b2;
    case 1: goto L_11de13c1;
    case 2: goto L_11de13d0;
    case 3: goto L_11de13eb;
    default: x86_unimpl("switch@0x11de13ab out of table"); return;
  }
L_11de13b2:;
  /* 11de13b2 push 0x11de92b8 */
  push32((uint32_t)(0x11de92b8u));
  /* 11de13b7 push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de13bc call esi */
  call_ind((uint32_t)(ESI), 0x11de13beu);
  /* 11de13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de13c1:;
  /* 11de13c1 push 0x11de92b0 */
  push32((uint32_t)(0x11de92b0u));
  /* 11de13c6 push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de13cb call esi */
  call_ind((uint32_t)(ESI), 0x11de13cdu);
  /* 11de13cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de13d0:;
  /* 11de13d0 push 0x11de92a8 */
  push32((uint32_t)(0x11de92a8u));
  /* 11de13d5 push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de13da call esi */
  call_ind((uint32_t)(ESI), 0x11de13dcu);
  /* 11de13dc push 0x11de92a0 */
  push32((uint32_t)(0x11de92a0u));
  /* 11de13e1 push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de13e6 call esi */
  call_ind((uint32_t)(ESI), 0x11de13e8u);
  /* 11de13e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de13eb:;
  /* 11de13eb push 0x11de9298 */
  push32((uint32_t)(0x11de9298u));
  /* 11de13f0 push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de13f5 call esi */
  call_ind((uint32_t)(ESI), 0x11de13f7u);
  /* 11de13f7 push 0x11de9290 */
  push32((uint32_t)(0x11de9290u));
  /* 11de13fc push 0x11de921c */
  push32((uint32_t)(0x11de921cu));
  /* 11de1401 call esi */
  call_ind((uint32_t)(ESI), 0x11de1403u);
  /* 11de1403 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1406:;
  /* 11de1406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1408 call ebp */
  call_ind((uint32_t)(EBP), 0x11de140au);
  /* 11de140a mov esi, dword ptr [0x11de812c] */
  ESI = (r32((uint32_t)(0x11de812c)));
  /* 11de1410 push eax */
  push32((uint32_t)(EAX));
  /* 11de1411 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1413 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1415 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1417 push 0x11de9284 */
  push32((uint32_t)(0x11de9284u));
  /* 11de141c push 2 */
  push32((uint32_t)(0x2u));
  /* 11de141e call esi */
  call_ind((uint32_t)(ESI), 0x11de1420u);
  /* 11de1420 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1422 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1424u);
  /* 11de1424 push eax */
  push32((uint32_t)(EAX));
  /* 11de1425 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1427 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1429 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de142b push 0x11de9278 */
  push32((uint32_t)(0x11de9278u));
  /* 11de1430 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de1432 call esi */
  call_ind((uint32_t)(ESI), 0x11de1434u);
  /* 11de1434 mov edi, dword ptr [0x11de813c] */
  EDI = (r32((uint32_t)(0x11de813c)));
  /* 11de143a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11de143f push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1441 call edi */
  call_ind((uint32_t)(EDI), 0x11de1443u);
  /* 11de1443 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1446 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1448 call ebp */
  call_ind((uint32_t)(EBP), 0x11de144au);
  /* 11de144a add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de144d lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11de1450 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11de1453 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11de1456 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11de1459 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de145c push eax */
  push32((uint32_t)(EAX));
  /* 11de145d push 2 */
  push32((uint32_t)(0x2u));
  /* 11de145f call edi */
  call_ind((uint32_t)(EDI), 0x11de1461u);
  /* 11de1461 mov ebx, dword ptr [0x11de8140] */
  EBX = (r32((uint32_t)(0x11de8140)));
  /* 11de1467 push 0x11de926c */
  push32((uint32_t)(0x11de926cu));
  /* 11de146c call ebx */
  call_ind((uint32_t)(EBX), 0x11de146eu);
  /* 11de146e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1471 jmp 0x11de147f */
  goto L_11de147f;
L_11de1473:;
  /* 11de1473 mov ebx, dword ptr [0x11de8140] */
  EBX = (r32((uint32_t)(0x11de8140)));
  /* 11de1479 mov edi, dword ptr [0x11de813c] */
  EDI = (r32((uint32_t)(0x11de813c)));
L_11de147f:;
  /* 11de147f push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11de1481 push 0x11debd70 */
  push32((uint32_t)(0x11debd70u));
  /* 11de1486 call 0x11de1820 */
  push32(0x11de148bu); f_11de1820();
  /* 11de148b mov esi, dword ptr [0x11de8138] */
  ESI = (r32((uint32_t)(0x11de8138)));
  /* 11de1491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1494 cmp eax, 0x12 */
  { uint32_t _a=(EAX),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1497 jge 0x11de14dd */
  if ((C.sf==C.of)) goto L_11de14dd;
  /* 11de1499 push 0x11debd68 */
  push32((uint32_t)(0x11debd68u));
  /* 11de149e call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de14a4u);
  /* 11de14a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de14a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de14a9 je 0x11de14cb */
  if (C.zf) goto L_11de14cb;
  /* 11de14ab push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11de14ad push 0x11debd70 */
  push32((uint32_t)(0x11debd70u));
  /* 11de14b2 call 0x11de1820 */
  push32(0x11de14b7u); f_11de1820();
  /* 11de14b7 lea ecx, [eax + eax*8 + 0x11debd70] */
  ECX = ((uint32_t)(EAX + EAX*8 + 0x11debd70));
  /* 11de14be push ecx */
  push32((uint32_t)(ECX));
  /* 11de14bf push 0x11debd68 */
  push32((uint32_t)(0x11debd68u));
  /* 11de14c4 call esi */
  call_ind((uint32_t)(ESI), 0x11de14c6u);
  /* 11de14c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de14c9 jmp 0x11de14dd */
  goto L_11de14dd;
L_11de14cb:;
  /* 11de14cb push 0x11debd68 */
  push32((uint32_t)(0x11debd68u));
  /* 11de14d0 push 0x11debd50 */
  push32((uint32_t)(0x11debd50u));
  /* 11de14d5 call 0x11de17f0 */
  push32(0x11de14dau); f_11de17f0();
  /* 11de14da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de14dd:;
  /* 11de14dd push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11de14df push 0x11debd70 */
  push32((uint32_t)(0x11debd70u));
  /* 11de14e4 call 0x11de1820 */
  push32(0x11de14e9u); f_11de1820();
  /* 11de14e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de14ec cmp eax, 0x12 */
  { uint32_t _a=(EAX),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de14ef jge 0x11de1535 */
  if ((C.sf==C.of)) goto L_11de1535;
  /* 11de14f1 push 0x11debd60 */
  push32((uint32_t)(0x11debd60u));
  /* 11de14f6 call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de14fcu);
  /* 11de14fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de14ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1501 je 0x11de1523 */
  if (C.zf) goto L_11de1523;
  /* 11de1503 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11de1505 push 0x11debd70 */
  push32((uint32_t)(0x11debd70u));
  /* 11de150a call 0x11de1820 */
  push32(0x11de150fu); f_11de1820();
  /* 11de150f lea edx, [eax + eax*8 + 0x11debd70] */
  EDX = ((uint32_t)(EAX + EAX*8 + 0x11debd70));
  /* 11de1516 push edx */
  push32((uint32_t)(EDX));
  /* 11de1517 push 0x11debd60 */
  push32((uint32_t)(0x11debd60u));
  /* 11de151c call esi */
  call_ind((uint32_t)(ESI), 0x11de151eu);
  /* 11de151e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1521 jmp 0x11de1535 */
  goto L_11de1535;
L_11de1523:;
  /* 11de1523 push 0x11debd60 */
  push32((uint32_t)(0x11debd60u));
  /* 11de1528 push 0x11debd58 */
  push32((uint32_t)(0x11debd58u));
  /* 11de152d call 0x11de17f0 */
  push32(0x11de1532u); f_11de17f0();
  /* 11de1532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1535:;
  /* 11de1535 mov esi, dword ptr [0x11de814c] */
  ESI = (r32((uint32_t)(0x11de814c)));
  /* 11de153b push 1 */
  push32((uint32_t)(0x1u));
  /* 11de153d call esi */
  call_ind((uint32_t)(ESI), 0x11de153fu);
  /* 11de153f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1542 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1544 je 0x11de15a8 */
  if (C.zf) goto L_11de15a8;
  /* 11de1546 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11de154b push 1 */
  push32((uint32_t)(0x1u));
  /* 11de154d call edi */
  call_ind((uint32_t)(EDI), 0x11de154fu);
  /* 11de154f mov edi, dword ptr [0x11de8144] */
  EDI = (r32((uint32_t)(0x11de8144)));
  /* 11de1555 mov ebx, dword ptr [0x11de8154] */
  EBX = (r32((uint32_t)(0x11de8154)));
  /* 11de155b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de155e mov esi, 0x11debd70 */
  ESI = (0x11debd70u);
L_11de1563:;
  /* 11de1563 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1565 push esi */
  push32((uint32_t)(ESI));
  /* 11de1566 call edi */
  call_ind((uint32_t)(EDI), 0x11de1568u);
  /* 11de1568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de156b push 0 */
  push32((uint32_t)(0x0u));
  /* 11de156d push 0 */
  push32((uint32_t)(0x0u));
  /* 11de156f call 0x11de1b5d */
  push32(0x11de1574u); f_11de1b5d();
  /* 11de1574 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11de1575 mov ecx, 0xa */
  ECX = (0xau);
  /* 11de157a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11de157c lea edx, [edx*8 + 0x11debcc8] */
  EDX = ((uint32_t)(EDX*8 + 0x11debcc8));
  /* 11de1583 push edx */
  push32((uint32_t)(EDX));
  /* 11de1584 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1586 call ebx */
  call_ind((uint32_t)(EBX), 0x11de1588u);
  /* 11de1588 add esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de158b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de158e cmp esi, 0x11debe12 */
  { uint32_t _a=(ESI),_b=(0x11debe12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1594 jl 0x11de1563 */
  if ((C.sf!=C.of)) goto L_11de1563;
  /* 11de1596 mov esi, dword ptr [0x11de814c] */
  ESI = (r32((uint32_t)(0x11de814c)));
  /* 11de159c mov ebx, dword ptr [0x11de8140] */
  EBX = (r32((uint32_t)(0x11de8140)));
  /* 11de15a2 mov edi, dword ptr [0x11de813c] */
  EDI = (r32((uint32_t)(0x11de813c)));
L_11de15a8:;
  /* 11de15a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de15aa call esi */
  call_ind((uint32_t)(ESI), 0x11de15acu);
  /* 11de15ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de15af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de15b1 je 0x11de1627 */
  if (C.zf) goto L_11de1627;
  /* 11de15b3 push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de15b8 call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de15beu);
  /* 11de15be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de15c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de15c3 jne 0x11de1627 */
  if (!C.zf) goto L_11de1627;
  /* 11de15c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11de15c7 call dword ptr [0x11de8124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8124))), 0x11de15cdu);
  /* 11de15cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de15d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de15d2 je 0x11de15e8 */
  if (C.zf) goto L_11de15e8;
  /* 11de15d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de15d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11de15d8 call dword ptr [0x11de8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8120))), 0x11de15deu);
  /* 11de15de push 0x11de9260 */
  push32((uint32_t)(0x11de9260u));
  /* 11de15e3 call ebx */
  call_ind((uint32_t)(EBX), 0x11de15e5u);
  /* 11de15e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de15e8:;
  /* 11de15e8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11de15ea call 0x11de1b5d */
  push32(0x11de15efu); f_11de1b5d();
  /* 11de15ef and eax, 0x80000003 */
  { uint32_t _r=(EAX)&(0x80000003u); EAX = (_r); fl_logic(_r,32); }
  /* 11de15f4 jns 0x11de15fb */
  if (!C.sf) goto L_11de15fb;
  /* 11de15f6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de15f7 or eax, 0xfffffffc */
  { uint32_t _r=(EAX)|(0xfffffffcu); EAX = (_r); fl_logic(_r,32); }
  /* 11de15fa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11de15fb:;
  /* 11de15fb lea eax, [eax*8 + 0x11debe18] */
  EAX = ((uint32_t)(EAX*8 + 0x11debe18));
  /* 11de1602 push eax */
  push32((uint32_t)(EAX));
  /* 11de1603 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1605 push 0x11debd40 */
  push32((uint32_t)(0x11debd40u));
  /* 11de160a push 0 */
  push32((uint32_t)(0x0u));
  /* 11de160c call ebp */
  call_ind((uint32_t)(EBP), 0x11de160eu);
  /* 11de160e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1611 lea ecx, [eax*8 + 0x11debd20] */
  ECX = ((uint32_t)(EAX*8 + 0x11debd20));
  /* 11de1618 push ecx */
  push32((uint32_t)(ECX));
  /* 11de1619 push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de161e call dword ptr [0x11de8158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8158))), 0x11de1624u);
  /* 11de1624 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1627:;
  /* 11de1627 push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de162c call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de1632u);
  /* 11de1632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1637 jne 0x11de1659 */
  if (!C.zf) goto L_11de1659;
  /* 11de1639 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de163b call esi */
  call_ind((uint32_t)(ESI), 0x11de163du);
  /* 11de163d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1640 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1642 je 0x11de1659 */
  if (C.zf) goto L_11de1659;
  /* 11de1644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1646 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1648u);
  /* 11de1648 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de164b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de1651 push eax */
  push32((uint32_t)(EAX));
  /* 11de1652 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1654 call edi */
  call_ind((uint32_t)(EDI), 0x11de1656u);
  /* 11de1656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1659:;
  /* 11de1659 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de165b push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de1660 call 0x11de1a80 */
  push32(0x11de1665u); f_11de1a80();
  /* 11de1665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1668 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de166a je 0x11de1693 */
  if (C.zf) goto L_11de1693;
  /* 11de166c push 1 */
  push32((uint32_t)(0x1u));
  /* 11de166e push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de1673 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11de1675 push 0x11debe38 */
  push32((uint32_t)(0x11debe38u));
  /* 11de167a push 0x11debd18 */
  push32((uint32_t)(0x11debd18u));
  /* 11de167f call 0x11de19c0 */
  push32(0x11de1684u); f_11de19c0();
  /* 11de1684 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1686 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de1688 call dword ptr [0x11de8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8120))), 0x11de168eu);
  /* 11de168e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1691 jmp 0x11de16be */
  goto L_11de16be;
L_11de1693:;
  /* 11de1693 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de1695 call dword ptr [0x11de8124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8124))), 0x11de169bu);
  /* 11de169b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de169e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de16a0 je 0x11de16be */
  if (C.zf) goto L_11de16be;
  /* 11de16a2 push 0x11debd18 */
  push32((uint32_t)(0x11debd18u));
  /* 11de16a7 push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de16ac call 0x11de1af0 */
  push32(0x11de16b1u); f_11de1af0();
  /* 11de16b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de16b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de16b5 call dword ptr [0x11de8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8120))), 0x11de16bbu);
  /* 11de16bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de16be:;
  /* 11de16be push 0x11debd48 */
  push32((uint32_t)(0x11debd48u));
  /* 11de16c3 call 0x11de1a30 */
  push32(0x11de16c8u); f_11de1a30();
  /* 11de16c8 mov ebp, dword ptr [0x11de8150] */
  EBP = (r32((uint32_t)(0x11de8150)));
  /* 11de16ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11de16d0 call ebp */
  call_ind((uint32_t)(EBP), 0x11de16d2u);
  /* 11de16d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de16d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de16d7 je 0x11de16e9 */
  if (C.zf) goto L_11de16e9;
  /* 11de16d9 push 0x11de9254 */
  push32((uint32_t)(0x11de9254u));
  /* 11de16de call ebx */
  call_ind((uint32_t)(EBX), 0x11de16e0u);
  /* 11de16e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de16e3 call dword ptr [0x11de8160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8160))), 0x11de16e9u);
L_11de16e9:;
  /* 11de16e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11de16eb call dword ptr [0x11de8124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8124))), 0x11de16f1u);
  /* 11de16f1 mov esi, dword ptr [0x11de8180] */
  ESI = (r32((uint32_t)(0x11de8180)));
  /* 11de16f7 mov edi, dword ptr [0x11de8188] */
  EDI = (r32((uint32_t)(0x11de8188)));
  /* 11de16fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1700 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1702 je 0x11de172b */
  if (C.zf) goto L_11de172b;
  /* 11de1704 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1706 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1708u);
  /* 11de1708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de170b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de170d je 0x11de172b */
  if (C.zf) goto L_11de172b;
  /* 11de170f push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1711 push 5 */
  push32((uint32_t)(0x5u));
  /* 11de1713 call dword ptr [0x11de8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8120))), 0x11de1719u);
  /* 11de1719 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11de171b call esi */
  call_ind((uint32_t)(ESI), 0x11de171du);
  /* 11de171d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11de171f call edi */
  call_ind((uint32_t)(EDI), 0x11de1721u);
  /* 11de1721 push 0x11de9248 */
  push32((uint32_t)(0x11de9248u));
  /* 11de1726 call ebx */
  call_ind((uint32_t)(EBX), 0x11de1728u);
  /* 11de1728 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de172b:;
  /* 11de172b push 5 */
  push32((uint32_t)(0x5u));
  /* 11de172d call dword ptr [0x11de8124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8124))), 0x11de1733u);
  /* 11de1733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1736 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1738 je 0x11de1761 */
  if (C.zf) goto L_11de1761;
  /* 11de173a push 3 */
  push32((uint32_t)(0x3u));
  /* 11de173c call ebp */
  call_ind((uint32_t)(EBP), 0x11de173eu);
  /* 11de173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1741 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1743 je 0x11de1761 */
  if (C.zf) goto L_11de1761;
  /* 11de1745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1747 push 5 */
  push32((uint32_t)(0x5u));
  /* 11de1749 call dword ptr [0x11de8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8120))), 0x11de174fu);
  /* 11de174f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11de1751 call esi */
  call_ind((uint32_t)(ESI), 0x11de1753u);
  /* 11de1753 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11de1755 call edi */
  call_ind((uint32_t)(EDI), 0x11de1757u);
  /* 11de1757 push 0x11de923c */
  push32((uint32_t)(0x11de923cu));
  /* 11de175c call ebx */
  call_ind((uint32_t)(EBX), 0x11de175eu);
  /* 11de175e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1761:;
  /* 11de1761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de1763 call ebp */
  call_ind((uint32_t)(EBP), 0x11de1765u);
  /* 11de1765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1768 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de176a je 0x11de1797 */
  if (C.zf) goto L_11de1797;
  /* 11de176c push 3 */
  push32((uint32_t)(0x3u));
  /* 11de176e call ebp */
  call_ind((uint32_t)(EBP), 0x11de1770u);
  /* 11de1770 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1773 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1775 je 0x11de1797 */
  if (C.zf) goto L_11de1797;
  /* 11de1777 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11de1779 call esi */
  call_ind((uint32_t)(ESI), 0x11de177bu);
  /* 11de177b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11de177d call edi */
  call_ind((uint32_t)(EDI), 0x11de177fu);
  /* 11de177f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11de1781 call esi */
  call_ind((uint32_t)(ESI), 0x11de1783u);
  /* 11de1783 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11de1785 call edi */
  call_ind((uint32_t)(EDI), 0x11de1787u);
  /* 11de1787 push 0x11de9230 */
  push32((uint32_t)(0x11de9230u));
  /* 11de178c call ebx */
  call_ind((uint32_t)(EBX), 0x11de178eu);
  /* 11de178e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1791 call dword ptr [0x11de8164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8164))), 0x11de1797u);
L_11de1797:;
  /* 11de1797 pop edi */
  EDI = (pop32());
  /* 11de1798 pop esi */
  ESI = (pop32());
  /* 11de1799 pop ebp */
  EBP = (pop32());
  /* 11de179a pop ebx */
  EBX = (pop32());
  /* 11de179b ret  */
  ESPCHK(0x11de1340u, _esp0);
  ESP += 4; return;
}

/* FUN_100017b0 @ 0x11de17b0 (59 bytes, 29 insns) */
void f_11de17b0(void) {
  FTRACE(0x11de17b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de17b0 push esi */
  push32((uint32_t)(ESI));
  /* 11de17b1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de17b5 push edi */
  push32((uint32_t)(EDI));
  /* 11de17b6 mov edi, dword ptr [0x11de8148] */
  EDI = (r32((uint32_t)(0x11de8148)));
  /* 11de17bc push esi */
  push32((uint32_t)(ESI));
  /* 11de17bd call edi */
  call_ind((uint32_t)(EDI), 0x11de17bfu);
  /* 11de17bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de17c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de17c4 je 0x11de17dd */
  if (C.zf) goto L_11de17dd;
  /* 11de17c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11de17c7 mov ebx, dword ptr [0x11de8114] */
  EBX = (r32((uint32_t)(0x11de8114)));
L_11de17cd:;
  /* 11de17cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11de17cf push esi */
  push32((uint32_t)(ESI));
  /* 11de17d0 call ebx */
  call_ind((uint32_t)(EBX), 0x11de17d2u);
  /* 11de17d2 push esi */
  push32((uint32_t)(ESI));
  /* 11de17d3 call edi */
  call_ind((uint32_t)(EDI), 0x11de17d5u);
  /* 11de17d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de17d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de17da jne 0x11de17cd */
  if (!C.zf) goto L_11de17cd;
  /* 11de17dc pop ebx */
  EBX = (pop32());
L_11de17dd:;
  /* 11de17dd push esi */
  push32((uint32_t)(ESI));
  /* 11de17de call edi */
  call_ind((uint32_t)(EDI), 0x11de17e0u);
  /* 11de17e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de17e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de17e5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de17e7 pop edi */
  EDI = (pop32());
  /* 11de17e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de17e9 pop esi */
  ESI = (pop32());
  /* 11de17ea ret  */
  ESPCHK(0x11de17b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100017f0 @ 0x11de17f0 (41 bytes, 15 insns) */
void f_11de17f0(void) {
  FTRACE(0x11de17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de17f0 push esi */
  push32((uint32_t)(ESI));
  /* 11de17f1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de17f5 push esi */
  push32((uint32_t)(ESI));
  /* 11de17f6 call dword ptr [0x11de8118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8118))), 0x11de17fcu);
  /* 11de17fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de17ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1801 je 0x11de1817 */
  if (C.zf) goto L_11de1817;
  /* 11de1803 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11de1807 push eax */
  push32((uint32_t)(EAX));
  /* 11de1808 push 0x11debcc0 */
  push32((uint32_t)(0x11debcc0u));
  /* 11de180d push esi */
  push32((uint32_t)(ESI));
  /* 11de180e call dword ptr [0x11de811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de811c))), 0x11de1814u);
  /* 11de1814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1817:;
  /* 11de1817 pop esi */
  ESI = (pop32());
  /* 11de1818 ret  */
  ESPCHK(0x11de17f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001820 @ 0x11de1820 (49 bytes, 25 insns) */
void f_11de1820(void) {
  FTRACE(0x11de1820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1820 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1821 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 11de1825 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1826 push esi */
  push32((uint32_t)(ESI));
  /* 11de1827 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de1829 push edi */
  push32((uint32_t)(EDI));
  /* 11de182a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de182c jle 0x11de184a */
  if ((C.zf||C.sf!=C.of)) goto L_11de184a;
  /* 11de182e mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11de1832 mov ebp, dword ptr [0x11de8148] */
  EBP = (r32((uint32_t)(0x11de8148)));
L_11de1838:;
  /* 11de1838 push edi */
  push32((uint32_t)(EDI));
  /* 11de1839 call ebp */
  call_ind((uint32_t)(EBP), 0x11de183bu);
  /* 11de183b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de183e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1840 je 0x11de184a */
  if (C.zf) goto L_11de184a;
  /* 11de1842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de1843 add edi, 9 */
  { uint32_t _a=(EDI),_b=(0x9u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1846 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1848 jl 0x11de1838 */
  if ((C.sf!=C.of)) goto L_11de1838;
L_11de184a:;
  /* 11de184a mov eax, esi */
  EAX = (ESI);
  /* 11de184c pop edi */
  EDI = (pop32());
  /* 11de184d pop esi */
  ESI = (pop32());
  /* 11de184e pop ebp */
  EBP = (pop32());
  /* 11de184f pop ebx */
  EBX = (pop32());
  /* 11de1850 ret  */
  ESPCHK(0x11de1820u, _esp0);
  ESP += 4; return;
}

/* FUN_10001860 @ 0x11de1860 (348 bytes, 119 insns) */
void f_11de1860(void) {
  FTRACE(0x11de1860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1860 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1863 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1864 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1865 push esi */
  push32((uint32_t)(ESI));
  /* 11de1866 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de1868 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de186a push edi */
  push32((uint32_t)(EDI));
  /* 11de186b mov edi, dword ptr [esp + 0x54] */
  EDI = (r32((uint32_t)(ESP + 0x54)));
  /* 11de186f mov dword ptr [esp + 0x18], esi */
  w32((uint32_t)(ESP + 0x18), (ESI));
  /* 11de1873 mov byte ptr [esp + 0x13], bl */
  w8((uint32_t)(ESP + 0x13), (BL));
  /* 11de1877 mov dword ptr [esp + 0x14], esi */
  w32((uint32_t)(ESP + 0x14), (ESI));
L_11de187b:;
  /* 11de187b cmp byte ptr [esi + 0x11de9030], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x11de9030))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de1882 jne 0x11de1984 */
  if (!C.zf) goto L_11de1984;
  /* 11de1888 push esi */
  push32((uint32_t)(ESI));
  /* 11de1889 call dword ptr [0x11de80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f0))), 0x11de188fu);
  /* 11de188f mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 11de1893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1898 jle 0x11de18bb */
  if ((C.zf||C.sf!=C.of)) goto L_11de18bb;
  /* 11de189a mov esi, dword ptr [esp + 0x58] */
  ESI = (r32((uint32_t)(ESP + 0x58)));
  /* 11de189e mov ebp, eax */
  EBP = (EAX);
L_11de18a0:;
  /* 11de18a0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11de18a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de18a6 push eax */
  push32((uint32_t)(EAX));
  /* 11de18a7 push esi */
  push32((uint32_t)(ESI));
  /* 11de18a8 call dword ptr [0x11de8100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8100))), 0x11de18aeu);
  /* 11de18ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de18b1 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de18b4 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 11de18b5 jne 0x11de18a0 */
  if (!C.zf) goto L_11de18a0;
  /* 11de18b7 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
L_11de18bb:;
  /* 11de18bb push edi */
  push32((uint32_t)(EDI));
  /* 11de18bc call 0x11de17b0 */
  push32(0x11de18c1u); f_11de17b0();
  /* 11de18c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de18c3 push edi */
  push32((uint32_t)(EDI));
  /* 11de18c4 push esi */
  push32((uint32_t)(ESI));
  /* 11de18c5 call dword ptr [0x11de8104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8104))), 0x11de18cbu);
  /* 11de18cb push esi */
  push32((uint32_t)(ESI));
  /* 11de18cc call dword ptr [0x11de80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f0))), 0x11de18d2u);
  /* 11de18d2 push edi */
  push32((uint32_t)(EDI));
  /* 11de18d3 call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de18d9u);
  /* 11de18d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de18dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de18de je 0x11de18f8 */
  if (C.zf) goto L_11de18f8;
  /* 11de18e0 mov ebp, dword ptr [esp + 0x60] */
  EBP = (r32((uint32_t)(ESP + 0x60)));
  /* 11de18e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11de18e6 push edi */
  push32((uint32_t)(EDI));
  /* 11de18e7 lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11de18eb push ebp */
  push32((uint32_t)(EBP));
  /* 11de18ec push ecx */
  push32((uint32_t)(ECX));
  /* 11de18ed call dword ptr [0x11de80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80fc))), 0x11de18f3u);
  /* 11de18f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de18f6 jmp 0x11de18fc */
  goto L_11de18fc;
L_11de18f8:;
  /* 11de18f8 mov ebp, dword ptr [esp + 0x60] */
  EBP = (r32((uint32_t)(ESP + 0x60)));
L_11de18fc:;
  /* 11de18fc push edi */
  push32((uint32_t)(EDI));
  /* 11de18fd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de18ff call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de1905u);
  /* 11de1905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de190a jle 0x11de1980 */
  if ((C.zf||C.sf!=C.of)) goto L_11de1980;
L_11de190c:;
  /* 11de190c lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 11de1910 push edx */
  push32((uint32_t)(EDX));
  /* 11de1911 push esi */
  push32((uint32_t)(ESI));
  /* 11de1912 push edi */
  push32((uint32_t)(EDI));
  /* 11de1913 call dword ptr [0x11de810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de810c))), 0x11de1919u);
  /* 11de1919 mov ax, word ptr [esp + 0x44] */
  AX = (r16((uint32_t)(ESP + 0x44)));
  /* 11de191e mov cx, word ptr [esp + 0x48] */
  CX = (r16((uint32_t)(ESP + 0x48)));
  /* 11de1923 mov word ptr [esp + 0x28], ax */
  w16((uint32_t)(ESP + 0x28), (AX));
  /* 11de1928 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11de192c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de192f mov word ptr [esp + 0x1e], cx */
  w16((uint32_t)(ESP + 0x1e), (CX));
  /* 11de1934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1936 je 0x11de194f */
  if (C.zf) goto L_11de194f;
  /* 11de1938 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 11de193c push edx */
  push32((uint32_t)(EDX));
  /* 11de193d push ebp */
  push32((uint32_t)(EBP));
  /* 11de193e call dword ptr [0x11de8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8110))), 0x11de1944u);
  /* 11de1944 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11de1948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de194b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de194d jge 0x11de1971 */
  if ((C.sf==C.of)) goto L_11de1971;
L_11de194f:;
  /* 11de194f lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 11de1953 push eax */
  push32((uint32_t)(EAX));
  /* 11de1954 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1955 call dword ptr [0x11de8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8110))), 0x11de195bu);
  /* 11de195b mov ebx, dword ptr [esp + 0x2c] */
  EBX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11de195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1962 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11de1966 and ebx, 0xffff */
  { uint32_t _r=(EBX)&(0xffffu); EBX = (_r); fl_logic(_r,32); }
  /* 11de196c mov byte ptr [esp + 0x13], 1 */
  w8((uint32_t)(ESP + 0x13), (0x1u));
L_11de1971:;
  /* 11de1971 push edi */
  push32((uint32_t)(EDI));
  /* 11de1972 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de1973 call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de1979u);
  /* 11de1979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de197c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de197e jl 0x11de190c */
  if ((C.sf!=C.of)) goto L_11de190c;
L_11de1980:;
  /* 11de1980 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
L_11de1984:;
  /* 11de1984 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de1985 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1988 mov dword ptr [esp + 0x14], esi */
  w32((uint32_t)(ESP + 0x14), (ESI));
  /* 11de198c jl 0x11de187b */
  if ((C.sf!=C.of)) goto L_11de187b;
  /* 11de1992 push edi */
  push32((uint32_t)(EDI));
  /* 11de1993 call 0x11de17b0 */
  push32(0x11de1998u); f_11de17b0();
  /* 11de1998 mov al, byte ptr [esp + 0x17] */
  AL = (r8((uint32_t)(ESP + 0x17)));
  /* 11de199c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de199f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de19a1 je 0x11de19b4 */
  if (C.zf) goto L_11de19b4;
  /* 11de19a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de19a4 push edi */
  push32((uint32_t)(EDI));
  /* 11de19a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de19a7 call dword ptr [0x11de8108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8108))), 0x11de19adu);
  /* 11de19ad mov al, byte ptr [esp + 0x1f] */
  AL = (r8((uint32_t)(ESP + 0x1f)));
  /* 11de19b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de19b4:;
  /* 11de19b4 pop edi */
  EDI = (pop32());
  /* 11de19b5 pop esi */
  ESI = (pop32());
  /* 11de19b6 pop ebp */
  EBP = (pop32());
  /* 11de19b7 pop ebx */
  EBX = (pop32());
  /* 11de19b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de19bb ret  */
  ESPCHK(0x11de1860u, _esp0);
  ESP += 4; return;
}

/* FUN_100019c0 @ 0x11de19c0 (109 bytes, 44 insns) */
void f_11de19c0(void) {
  FTRACE(0x11de19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de19c0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de19c3 push esi */
  push32((uint32_t)(ESI));
  /* 11de19c4 mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11de19c8 push edi */
  push32((uint32_t)(EDI));
  /* 11de19c9 push esi */
  push32((uint32_t)(ESI));
  /* 11de19ca call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de19d0u);
  /* 11de19d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de19d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de19d5 je 0x11de1a25 */
  if (C.zf) goto L_11de1a25;
  /* 11de19d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11de19d9 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11de19dd push esi */
  push32((uint32_t)(ESI));
  /* 11de19de push eax */
  push32((uint32_t)(EAX));
  /* 11de19df call dword ptr [0x11de80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f4))), 0x11de19e5u);
  /* 11de19e5 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11de19e9 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11de19ed mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11de19f1 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11de19f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11de19f6 push edx */
  push32((uint32_t)(EDX));
  /* 11de19f7 push eax */
  push32((uint32_t)(EAX));
  /* 11de19f8 push edi */
  push32((uint32_t)(EDI));
  /* 11de19f9 call 0x11de1860 */
  push32(0x11de19feu); f_11de1860();
  /* 11de19fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a01 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de1a03 je 0x11de1a25 */
  if (C.zf) goto L_11de1a25;
  /* 11de1a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1a07 push esi */
  push32((uint32_t)(ESI));
  /* 11de1a08 call dword ptr [0x11de8144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8144))), 0x11de1a0eu);
  /* 11de1a0e mov ecx, dword ptr [esp + 0x2c] */
  ECX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11de1a12 push edi */
  push32((uint32_t)(EDI));
  /* 11de1a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11de1a14 call dword ptr [0x11de80f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f8))), 0x11de1a1au);
  /* 11de1a1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a1d mov al, 1 */
  AL = (0x1u);
  /* 11de1a1f pop edi */
  EDI = (pop32());
  /* 11de1a20 pop esi */
  ESI = (pop32());
  /* 11de1a21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a24 ret  */
  ESPCHK(0x11de19c0u, _esp0);
  ESP += 4; return;
L_11de1a25:;
  /* 11de1a25 pop edi */
  EDI = (pop32());
  /* 11de1a26 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de1a28 pop esi */
  ESI = (pop32());
  /* 11de1a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a2c ret  */
  ESPCHK(0x11de19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a30 @ 0x11de1a30 (79 bytes, 30 insns) */
void f_11de1a30(void) {
  FTRACE(0x11de1a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1a30 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1a33 push esi */
  push32((uint32_t)(ESI));
  /* 11de1a34 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11de1a38 push esi */
  push32((uint32_t)(ESI));
  /* 11de1a39 call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de1a3fu);
  /* 11de1a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1a44 je 0x11de1a6d */
  if (C.zf) goto L_11de1a6d;
  /* 11de1a46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11de1a48 lea eax, [esp + 8] */
  EAX = ((uint32_t)(ESP + 0x8));
  /* 11de1a4c push esi */
  push32((uint32_t)(ESI));
  /* 11de1a4d push eax */
  push32((uint32_t)(EAX));
  /* 11de1a4e call dword ptr [0x11de80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f4))), 0x11de1a54u);
  /* 11de1a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1a56 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11de1a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1a5c push ecx */
  push32((uint32_t)(ECX));
  /* 11de1a5d call dword ptr [0x11de80ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80ec))), 0x11de1a63u);
  /* 11de1a63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a66 mov al, 1 */
  AL = (0x1u);
  /* 11de1a68 pop esi */
  ESI = (pop32());
  /* 11de1a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a6c ret  */
  ESPCHK(0x11de1a30u, _esp0);
  ESP += 4; return;
L_11de1a6d:;
  /* 11de1a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1a6f call dword ptr [0x11de80e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80e4))), 0x11de1a75u);
  /* 11de1a75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a78 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de1a7a pop esi */
  ESI = (pop32());
  /* 11de1a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a7e ret  */
  ESPCHK(0x11de1a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a80 @ 0x11de1a80 (104 bytes, 42 insns) */
void f_11de1a80(void) {
  FTRACE(0x11de1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1a80 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1a83 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1a84 push esi */
  push32((uint32_t)(ESI));
  /* 11de1a85 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11de1a89 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11de1a8b push esi */
  push32((uint32_t)(ESI));
  /* 11de1a8c call dword ptr [0x11de8148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8148))), 0x11de1a92u);
  /* 11de1a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1a97 je 0x11de1adb */
  if (C.zf) goto L_11de1adb;
  /* 11de1a99 push edi */
  push32((uint32_t)(EDI));
  /* 11de1a9a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11de1a9f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11de1aa3 push esi */
  push32((uint32_t)(ESI));
  /* 11de1aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11de1aa5 call dword ptr [0x11de80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f4))), 0x11de1aabu);
  /* 11de1aab mov edi, dword ptr [0x11de80e8] */
  EDI = (r32((uint32_t)(0x11de80e8)));
  /* 11de1ab1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1ab4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11de1ab6:;
  /* 11de1ab6 cmp byte ptr [esi + 0x11de9030], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x11de9030))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de1abd jne 0x11de1ad4 */
  if (!C.zf) goto L_11de1ad4;
  /* 11de1abf test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11de1ac1 jne 0x11de1ad2 */
  if (!C.zf) goto L_11de1ad2;
  /* 11de1ac3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 11de1ac7 push esi */
  push32((uint32_t)(ESI));
  /* 11de1ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 11de1ac9 call edi */
  call_ind((uint32_t)(EDI), 0x11de1acbu);
  /* 11de1acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1ad0 je 0x11de1ad4 */
  if (C.zf) goto L_11de1ad4;
L_11de1ad2:;
  /* 11de1ad2 mov bl, 1 */
  BL = (0x1u);
L_11de1ad4:;
  /* 11de1ad4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de1ad5 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1ad8 jl 0x11de1ab6 */
  if ((C.sf!=C.of)) goto L_11de1ab6;
  /* 11de1ada pop edi */
  EDI = (pop32());
L_11de1adb:;
  /* 11de1adb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de1add pop esi */
  ESI = (pop32());
  /* 11de1ade test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11de1ae0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11de1ae3 pop ebx */
  EBX = (pop32());
  /* 11de1ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1ae7 ret  */
  ESPCHK(0x11de1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af0 @ 0x11de1af0 (93 bytes, 37 insns) */
void f_11de1af0(void) {
  FTRACE(0x11de1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1af0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1af3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1af4 mov ebx, dword ptr [0x11de8148] */
  EBX = (r32((uint32_t)(0x11de8148)));
  /* 11de1afa push esi */
  push32((uint32_t)(ESI));
  /* 11de1afb push edi */
  push32((uint32_t)(EDI));
  /* 11de1afc mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11de1b00 push edi */
  push32((uint32_t)(EDI));
  /* 11de1b01 call ebx */
  call_ind((uint32_t)(EBX), 0x11de1b03u);
  /* 11de1b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1b08 je 0x11de1b46 */
  if (C.zf) goto L_11de1b46;
  /* 11de1b0a mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11de1b0e push esi */
  push32((uint32_t)(ESI));
  /* 11de1b0f call ebx */
  call_ind((uint32_t)(EBX), 0x11de1b11u);
  /* 11de1b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1b16 je 0x11de1b46 */
  if (C.zf) goto L_11de1b46;
  /* 11de1b18 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11de1b1d lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11de1b21 push esi */
  push32((uint32_t)(ESI));
  /* 11de1b22 push eax */
  push32((uint32_t)(EAX));
  /* 11de1b23 call dword ptr [0x11de80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80f4))), 0x11de1b29u);
  /* 11de1b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1b2b push edi */
  push32((uint32_t)(EDI));
  /* 11de1b2c call dword ptr [0x11de8144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8144))), 0x11de1b32u);
  /* 11de1b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1b34 lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11de1b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1b3a push ecx */
  push32((uint32_t)(ECX));
  /* 11de1b3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1b3d call dword ptr [0x11de8154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8154))), 0x11de1b43u);
  /* 11de1b43 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de1b46:;
  /* 11de1b46 pop edi */
  EDI = (pop32());
  /* 11de1b47 pop esi */
  ESI = (pop32());
  /* 11de1b48 pop ebx */
  EBX = (pop32());
  /* 11de1b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1b4c ret  */
  ESPCHK(0x11de1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x11de1b50 (13 bytes, 4 insns) */
void f_11de1b50(void) {
  FTRACE(0x11de1b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1b50 call 0x11de1e89 */
  push32(0x11de1b55u); f_11de1e89();
  /* 11de1b55 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de1b59 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11de1b5c ret  */
  ESPCHK(0x11de1b50u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11de1b5d (34 bytes, 9 insns) */
void f_11de1b5d(void) {
  FTRACE(0x11de1b5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1b5d call 0x11de1e89 */
  push32(0x11de1b62u); f_11de1e89();
  /* 11de1b62 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11de1b65 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de1b6b add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1b71 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11de1b74 mov eax, ecx */
  EAX = (ECX);
  /* 11de1b76 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11de1b79 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de1b7e ret  */
  ESPCHK(0x11de1b5du, _esp0);
  ESP += 4; return;
}

/* FUN_10001b7f @ 0x11de1b7f (220 bytes, 75 insns) */
void f_11de1b7f(void) {
  FTRACE(0x11de1b7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1b7f push ebp */
  push32((uint32_t)(EBP));
  /* 11de1b80 mov ebp, esp */
  EBP = (ESP);
  /* 11de1b82 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11de1b8b push eax */
  push32((uint32_t)(EAX));
  /* 11de1b8c call dword ptr [0x11de8084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8084))), 0x11de1b92u);
  /* 11de1b92 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11de1b95 push eax */
  push32((uint32_t)(EAX));
  /* 11de1b96 call dword ptr [0x11de8080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8080))), 0x11de1b9cu);
  /* 11de1b9c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11de1ba0 cmp ax, word ptr [0x11debef2] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11debef2))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de1ba7 jne 0x11de1be4 */
  if (!C.zf) goto L_11de1be4;
  /* 11de1ba9 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11de1bad cmp ax, word ptr [0x11debef0] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11debef0))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de1bb4 jne 0x11de1be4 */
  if (!C.zf) goto L_11de1be4;
  /* 11de1bb6 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11de1bba cmp ax, word ptr [0x11debeee] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11debeee))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de1bc1 jne 0x11de1be4 */
  if (!C.zf) goto L_11de1be4;
  /* 11de1bc3 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11de1bc7 cmp ax, word ptr [0x11debeea] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11debeea))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de1bce jne 0x11de1be4 */
  if (!C.zf) goto L_11de1be4;
  /* 11de1bd0 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11de1bd4 cmp ax, word ptr [0x11debee8] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11debee8))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de1bdb jne 0x11de1be4 */
  if (!C.zf) goto L_11de1be4;
  /* 11de1bdd mov eax, dword ptr [0x11debee0] */
  EAX = (r32((uint32_t)(0x11debee0)));
  /* 11de1be2 jmp 0x11de1c29 */
  goto L_11de1c29;
L_11de1be4:;
  /* 11de1be4 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11de1bea push eax */
  push32((uint32_t)(EAX));
  /* 11de1beb call dword ptr [0x11de807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de807c))), 0x11de1bf1u);
  /* 11de1bf1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1bf4 je 0x11de1c11 */
  if (C.zf) goto L_11de1c11;
  /* 11de1bf6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1bf9 jne 0x11de1c0d */
  if (!C.zf) goto L_11de1c0d;
  /* 11de1bfb cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de1c00 je 0x11de1c0d */
  if (C.zf) goto L_11de1c0d;
  /* 11de1c02 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1c06 je 0x11de1c0d */
  if (C.zf) goto L_11de1c0d;
  /* 11de1c08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1c0a pop eax */
  EAX = (pop32());
  /* 11de1c0b jmp 0x11de1c14 */
  goto L_11de1c14;
L_11de1c0d:;
  /* 11de1c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de1c0f jmp 0x11de1c14 */
  goto L_11de1c14;
L_11de1c11:;
  /* 11de1c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11de1c14:;
  /* 11de1c14 push esi */
  push32((uint32_t)(ESI));
  /* 11de1c15 push edi */
  push32((uint32_t)(EDI));
  /* 11de1c16 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11de1c19 mov edi, 0x11debee8 */
  EDI = (0x11debee8u);
  /* 11de1c1e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de1c1f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de1c20 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de1c21 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de1c22 pop edi */
  EDI = (pop32());
  /* 11de1c23 mov dword ptr [0x11debee0], eax */
  w32((uint32_t)(0x11debee0), (EAX));
  /* 11de1c28 pop esi */
  ESI = (pop32());
L_11de1c29:;
  /* 11de1c29 push eax */
  push32((uint32_t)(EAX));
  /* 11de1c2a movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11de1c2e push eax */
  push32((uint32_t)(EAX));
  /* 11de1c2f movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11de1c33 push eax */
  push32((uint32_t)(EAX));
  /* 11de1c34 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11de1c38 push eax */
  push32((uint32_t)(EAX));
  /* 11de1c39 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11de1c3d push eax */
  push32((uint32_t)(EAX));
  /* 11de1c3e movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11de1c42 push eax */
  push32((uint32_t)(EAX));
  /* 11de1c43 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11de1c47 push eax */
  push32((uint32_t)(EAX));
  /* 11de1c48 call 0x11de1f90 */
  push32(0x11de1c4du); f_11de1f90();
  /* 11de1c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de1c50 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1c53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11de1c55 je 0x11de1c59 */
  if (C.zf) goto L_11de1c59;
  /* 11de1c57 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11de1c59:;
  /* 11de1c59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de1c5a ret  */
  ESPCHK(0x11de1b7fu, _esp0);
  ESP += 4; return;
}

/* FUN_10001c5b @ 0x11de1c5b (217 bytes, 57 insns) */
void f_11de1c5b(void) {
  FTRACE(0x11de1c5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1c5b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de1c5f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1c62 jne 0x11de1cf0 */
  if (!C.zf) goto L_11de1cf0;
  /* 11de1c68 call dword ptr [0x11de808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de808c))), 0x11de1c6eu);
  /* 11de1c6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1c70 mov dword ptr [0x11debf10], eax */
  w32((uint32_t)(0x11debf10), (EAX));
  /* 11de1c75 call 0x11de292d */
  push32(0x11de1c7au); f_11de292d();
  /* 11de1c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1c7c pop ecx */
  ECX = (pop32());
  /* 11de1c7d je 0x11de1cbb */
  if (C.zf) goto L_11de1cbb;
  /* 11de1c7f mov eax, dword ptr [0x11debf10] */
  EAX = (r32((uint32_t)(0x11debf10)));
  /* 11de1c84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de1c86 mov cl, byte ptr [0x11debf11] */
  CL = (r8((uint32_t)(0x11debf11)));
  /* 11de1c8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de1c91 shr dword ptr [0x11debf10], 0x10 */
  w32((uint32_t)(0x11debf10), (sh_shr((uint32_t)(r32((uint32_t)(0x11debf10))), (0x10u)&0x1f, 32)));
  /* 11de1c98 mov dword ptr [0x11debf18], eax */
  w32((uint32_t)(0x11debf18), (EAX));
  /* 11de1c9d mov dword ptr [0x11debf1c], ecx */
  w32((uint32_t)(0x11debf1c), (ECX));
  /* 11de1ca3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de1ca6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1ca8 mov dword ptr [0x11debf14], eax */
  w32((uint32_t)(0x11debf14), (EAX));
  /* 11de1cad call 0x11de1e04 */
  push32(0x11de1cb2u); f_11de1e04();
  /* 11de1cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1cb4 jne 0x11de1cbf */
  if (!C.zf) goto L_11de1cbf;
  /* 11de1cb6 call 0x11de298a */
  push32(0x11de1cbbu); f_11de298a();
L_11de1cbb:;
  /* 11de1cbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de1cbd jmp 0x11de1d31 */
  goto L_11de1d31;
L_11de1cbf:;
  /* 11de1cbf call dword ptr [0x11de8088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8088))), 0x11de1cc5u);
  /* 11de1cc5 mov dword ptr [0x11dec5d8], eax */
  w32((uint32_t)(0x11dec5d8), (EAX));
  /* 11de1cca call 0x11de2686 */
  push32(0x11de1ccfu); f_11de2686();
  /* 11de1ccf mov dword ptr [0x11debefc], eax */
  w32((uint32_t)(0x11debefc), (EAX));
  /* 11de1cd4 call 0x11de2170 */
  push32(0x11de1cd9u); f_11de2170();
  /* 11de1cd9 call 0x11de2439 */
  push32(0x11de1cdeu); f_11de2439();
  /* 11de1cde call 0x11de2380 */
  push32(0x11de1ce3u); f_11de2380();
  /* 11de1ce3 call 0x11de2052 */
  push32(0x11de1ce8u); f_11de2052();
  /* 11de1ce8 inc dword ptr [0x11debef8] */
  { uint32_t _r=(r32((uint32_t)(0x11debef8)))+1; w32((uint32_t)(0x11debef8), (_r)); fl_inc(_r,32); }
  /* 11de1cee jmp 0x11de1d2e */
  goto L_11de1d2e;
L_11de1cf0:;
  /* 11de1cf0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de1cf2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1cf4 jne 0x11de1d22 */
  if (!C.zf) goto L_11de1d22;
  /* 11de1cf6 cmp dword ptr [0x11debef8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11debef8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1cfc jle 0x11de1cbb */
  if ((C.zf||C.sf!=C.of)) goto L_11de1cbb;
  /* 11de1cfe dec dword ptr [0x11debef8] */
  { uint32_t _r=(r32((uint32_t)(0x11debef8)))-1; w32((uint32_t)(0x11debef8), (_r)); fl_dec(_r,32); }
  /* 11de1d04 cmp dword ptr [0x11debf48], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11debf48))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d0a jne 0x11de1d11 */
  if (!C.zf) goto L_11de1d11;
  /* 11de1d0c call 0x11de2090 */
  push32(0x11de1d11u); f_11de2090();
L_11de1d11:;
  /* 11de1d11 call 0x11de232c */
  push32(0x11de1d16u); f_11de232c();
  /* 11de1d16 call 0x11de1e58 */
  push32(0x11de1d1bu); f_11de1e58();
  /* 11de1d1b call 0x11de298a */
  push32(0x11de1d20u); f_11de298a();
  /* 11de1d20 jmp 0x11de1d2e */
  goto L_11de1d2e;
L_11de1d22:;
  /* 11de1d22 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d25 jne 0x11de1d2e */
  if (!C.zf) goto L_11de1d2e;
  /* 11de1d27 push ecx */
  push32((uint32_t)(ECX));
  /* 11de1d28 call 0x11de1ef0 */
  push32(0x11de1d2du); f_11de1ef0();
  /* 11de1d2d pop ecx */
  ECX = (pop32());
L_11de1d2e:;
  /* 11de1d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1d30 pop eax */
  EAX = (pop32());
L_11de1d31:;
  /* 11de1d31 ret 0xc */
  ESPCHK(0x11de1c5bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11de1d34 (157 bytes, 73 insns) */
void f_11de1d34(void) {
  FTRACE(0x11de1d34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1d34 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1d35 mov ebp, esp */
  EBP = (ESP);
  /* 11de1d37 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1d38 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de1d3b push esi */
  push32((uint32_t)(ESI));
  /* 11de1d3c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de1d3f push edi */
  push32((uint32_t)(EDI));
  /* 11de1d40 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11de1d43 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1d45 jne 0x11de1d50 */
  if (!C.zf) goto L_11de1d50;
  /* 11de1d47 cmp dword ptr [0x11debef8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11debef8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d4e jmp 0x11de1d76 */
  goto L_11de1d76;
L_11de1d50:;
  /* 11de1d50 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d53 je 0x11de1d5a */
  if (C.zf) goto L_11de1d5a;
  /* 11de1d55 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d58 jne 0x11de1d7c */
  if (!C.zf) goto L_11de1d7c;
L_11de1d5a:;
  /* 11de1d5a mov eax, dword ptr [0x11dec5dc] */
  EAX = (r32((uint32_t)(0x11dec5dc)));
  /* 11de1d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1d61 je 0x11de1d6c */
  if (C.zf) goto L_11de1d6c;
  /* 11de1d63 push edi */
  push32((uint32_t)(EDI));
  /* 11de1d64 push esi */
  push32((uint32_t)(ESI));
  /* 11de1d65 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1d66 call eax */
  call_ind((uint32_t)(EAX), 0x11de1d68u);
  /* 11de1d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1d6a je 0x11de1d78 */
  if (C.zf) goto L_11de1d78;
L_11de1d6c:;
  /* 11de1d6c push edi */
  push32((uint32_t)(EDI));
  /* 11de1d6d push esi */
  push32((uint32_t)(ESI));
  /* 11de1d6e push ebx */
  push32((uint32_t)(EBX));
  /* 11de1d6f call 0x11de1c5b */
  push32(0x11de1d74u); f_11de1c5b();
  /* 11de1d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11de1d76:;
  /* 11de1d76 jne 0x11de1d7c */
  if (!C.zf) goto L_11de1d7c;
L_11de1d78:;
  /* 11de1d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de1d7a jmp 0x11de1dca */
  goto L_11de1dca;
L_11de1d7c:;
  /* 11de1d7c push edi */
  push32((uint32_t)(EDI));
  /* 11de1d7d push esi */
  push32((uint32_t)(ESI));
  /* 11de1d7e push ebx */
  push32((uint32_t)(EBX));
  /* 11de1d7f call 0x11de1000 */
  push32(0x11de1d84u); f_11de1000();
  /* 11de1d84 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d87 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11de1d8a jne 0x11de1d98 */
  if (!C.zf) goto L_11de1d98;
  /* 11de1d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1d8e jne 0x11de1dc7 */
  if (!C.zf) goto L_11de1dc7;
  /* 11de1d90 push edi */
  push32((uint32_t)(EDI));
  /* 11de1d91 push eax */
  push32((uint32_t)(EAX));
  /* 11de1d92 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1d93 call 0x11de1c5b */
  push32(0x11de1d98u); f_11de1c5b();
L_11de1d98:;
  /* 11de1d98 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1d9a je 0x11de1da1 */
  if (C.zf) goto L_11de1da1;
  /* 11de1d9c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1d9f jne 0x11de1dc7 */
  if (!C.zf) goto L_11de1dc7;
L_11de1da1:;
  /* 11de1da1 push edi */
  push32((uint32_t)(EDI));
  /* 11de1da2 push esi */
  push32((uint32_t)(ESI));
  /* 11de1da3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1da4 call 0x11de1c5b */
  push32(0x11de1da9u); f_11de1c5b();
  /* 11de1da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1dab jne 0x11de1db0 */
  if (!C.zf) goto L_11de1db0;
  /* 11de1dad and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11de1db0:;
  /* 11de1db0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1db4 je 0x11de1dc7 */
  if (C.zf) goto L_11de1dc7;
  /* 11de1db6 mov eax, dword ptr [0x11dec5dc] */
  EAX = (r32((uint32_t)(0x11dec5dc)));
  /* 11de1dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1dbd je 0x11de1dc7 */
  if (C.zf) goto L_11de1dc7;
  /* 11de1dbf push edi */
  push32((uint32_t)(EDI));
  /* 11de1dc0 push esi */
  push32((uint32_t)(ESI));
  /* 11de1dc1 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1dc2 call eax */
  call_ind((uint32_t)(EAX), 0x11de1dc4u);
  /* 11de1dc4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11de1dc7:;
  /* 11de1dc7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11de1dca:;
  /* 11de1dca pop edi */
  EDI = (pop32());
  /* 11de1dcb pop esi */
  ESI = (pop32());
  /* 11de1dcc pop ebx */
  EBX = (pop32());
  /* 11de1dcd pop ebp */
  EBP = (pop32());
  /* 11de1dce ret 0xc */
  ESPCHK(0x11de1d34u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11de1dd1 (48 bytes, 15 insns) */
void f_11de1dd1(void) {
  FTRACE(0x11de1dd1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1dd1 mov eax, dword ptr [0x11debf04] */
  EAX = (r32((uint32_t)(0x11debf04)));
  /* 11de1dd6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1dd9 je 0x11de1de8 */
  if (C.zf) goto L_11de1de8;
  /* 11de1ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1ddd jne 0x11de1ded */
  if (!C.zf) goto L_11de1ded;
  /* 11de1ddf cmp dword ptr [0x11debf08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debf08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1de6 jne 0x11de1ded */
  if (!C.zf) goto L_11de1ded;
L_11de1de8:;
  /* 11de1de8 call 0x11de2a32 */
  push32(0x11de1dedu); f_11de2a32();
L_11de1ded:;
  /* 11de1ded push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11de1df1 call 0x11de2a6b */
  push32(0x11de1df6u); f_11de2a6b();
  /* 11de1df6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11de1dfb call dword ptr [0x11de92c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de92c0))), 0x11de1e01u);
  /* 11de1e01 pop ecx */
  ECX = (pop32());
  /* 11de1e02 pop ecx */
  ECX = (pop32());
  /* 11de1e03 ret  */
  ESPCHK(0x11de1dd1u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e04 @ 0x11de1e04 (84 bytes, 32 insns) */
void f_11de1e04(void) {
  FTRACE(0x11de1e04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1e04 push esi */
  push32((uint32_t)(ESI));
  /* 11de1e05 call 0x11de2cfb */
  push32(0x11de1e0au); f_11de2cfb();
  /* 11de1e0a call dword ptr [0x11de8098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8098))), 0x11de1e10u);
  /* 11de1e10 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1e13 mov dword ptr [0x11de92c4], eax */
  w32((uint32_t)(0x11de92c4), (EAX));
  /* 11de1e18 je 0x11de1e54 */
  if (C.zf) goto L_11de1e54;
  /* 11de1e1a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11de1e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1e1e call 0x11de2bbe */
  push32(0x11de1e23u); f_11de2bbe();
  /* 11de1e23 mov esi, eax */
  ESI = (EAX);
  /* 11de1e25 pop ecx */
  ECX = (pop32());
  /* 11de1e26 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1e28 pop ecx */
  ECX = (pop32());
  /* 11de1e29 je 0x11de1e54 */
  if (C.zf) goto L_11de1e54;
  /* 11de1e2b push esi */
  push32((uint32_t)(ESI));
  /* 11de1e2c push dword ptr [0x11de92c4] */
  push32((uint32_t)(r32((uint32_t)(0x11de92c4))));
  /* 11de1e32 call dword ptr [0x11de8094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8094))), 0x11de1e38u);
  /* 11de1e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1e3a je 0x11de1e54 */
  if (C.zf) goto L_11de1e54;
  /* 11de1e3c push esi */
  push32((uint32_t)(ESI));
  /* 11de1e3d call 0x11de1e76 */
  push32(0x11de1e42u); f_11de1e76();
  /* 11de1e42 pop ecx */
  ECX = (pop32());
  /* 11de1e43 call dword ptr [0x11de8090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8090))), 0x11de1e49u);
  /* 11de1e49 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de1e4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1e4f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de1e51 pop eax */
  EAX = (pop32());
  /* 11de1e52 pop esi */
  ESI = (pop32());
  /* 11de1e53 ret  */
  ESPCHK(0x11de1e04u, _esp0);
  ESP += 4; return;
L_11de1e54:;
  /* 11de1e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de1e56 pop esi */
  ESI = (pop32());
  /* 11de1e57 ret  */
  ESPCHK(0x11de1e04u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e58 @ 0x11de1e58 (30 bytes, 8 insns) */
void f_11de1e58(void) {
  FTRACE(0x11de1e58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1e58 call 0x11de2d24 */
  push32(0x11de1e5du); f_11de2d24();
  /* 11de1e5d mov eax, dword ptr [0x11de92c4] */
  EAX = (r32((uint32_t)(0x11de92c4)));
  /* 11de1e62 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1e65 je 0x11de1e75 */
  if (C.zf) goto L_11de1e75;
  /* 11de1e67 push eax */
  push32((uint32_t)(EAX));
  /* 11de1e68 call dword ptr [0x11de809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de809c))), 0x11de1e6eu);
  /* 11de1e6e or dword ptr [0x11de92c4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11de92c4)))|(0xffffffffu); w32((uint32_t)(0x11de92c4), (_r)); fl_logic(_r,32); }
L_11de1e75:;
  /* 11de1e75 ret  */
  ESPCHK(0x11de1e58u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e76 @ 0x11de1e76 (19 bytes, 4 insns) */
void f_11de1e76(void) {
  FTRACE(0x11de1e76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1e76 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de1e7a mov dword ptr [eax + 0x50], 0x11de9440 */
  w32((uint32_t)(EAX + 0x50), (0x11de9440u));
  /* 11de1e81 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11de1e88 ret  */
  ESPCHK(0x11de1e76u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e89 @ 0x11de1e89 (103 bytes, 38 insns) */
void f_11de1e89(void) {
  FTRACE(0x11de1e89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1e89 push esi */
  push32((uint32_t)(ESI));
  /* 11de1e8a push edi */
  push32((uint32_t)(EDI));
  /* 11de1e8b call dword ptr [0x11de80a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80a8))), 0x11de1e91u);
  /* 11de1e91 push dword ptr [0x11de92c4] */
  push32((uint32_t)(r32((uint32_t)(0x11de92c4))));
  /* 11de1e97 mov edi, eax */
  EDI = (EAX);
  /* 11de1e99 call dword ptr [0x11de80a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80a4))), 0x11de1e9fu);
  /* 11de1e9f mov esi, eax */
  ESI = (EAX);
  /* 11de1ea1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1ea3 jne 0x11de1ee4 */
  if (!C.zf) goto L_11de1ee4;
  /* 11de1ea5 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11de1ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de1ea9 call 0x11de2bbe */
  push32(0x11de1eaeu); f_11de2bbe();
  /* 11de1eae mov esi, eax */
  ESI = (EAX);
  /* 11de1eb0 pop ecx */
  ECX = (pop32());
  /* 11de1eb1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1eb3 pop ecx */
  ECX = (pop32());
  /* 11de1eb4 je 0x11de1edc */
  if (C.zf) goto L_11de1edc;
  /* 11de1eb6 push esi */
  push32((uint32_t)(ESI));
  /* 11de1eb7 push dword ptr [0x11de92c4] */
  push32((uint32_t)(r32((uint32_t)(0x11de92c4))));
  /* 11de1ebd call dword ptr [0x11de8094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8094))), 0x11de1ec3u);
  /* 11de1ec3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1ec5 je 0x11de1edc */
  if (C.zf) goto L_11de1edc;
  /* 11de1ec7 push esi */
  push32((uint32_t)(ESI));
  /* 11de1ec8 call 0x11de1e76 */
  push32(0x11de1ecdu); f_11de1e76();
  /* 11de1ecd pop ecx */
  ECX = (pop32());
  /* 11de1ece call dword ptr [0x11de8090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8090))), 0x11de1ed4u);
  /* 11de1ed4 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de1ed8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de1eda jmp 0x11de1ee4 */
  goto L_11de1ee4;
L_11de1edc:;
  /* 11de1edc push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11de1ede call 0x11de1dd1 */
  push32(0x11de1ee3u); f_11de1dd1();
  /* 11de1ee3 pop ecx */
  ECX = (pop32());
L_11de1ee4:;
  /* 11de1ee4 push edi */
  push32((uint32_t)(EDI));
  /* 11de1ee5 call dword ptr [0x11de80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80a0))), 0x11de1eebu);
  /* 11de1eeb mov eax, esi */
  EAX = (ESI);
  /* 11de1eed pop edi */
  EDI = (pop32());
  /* 11de1eee pop esi */
  ESI = (pop32());
  /* 11de1eef ret  */
  ESPCHK(0x11de1e89u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ef0 @ 0x11de1ef0 (160 bytes, 62 insns) */
void f_11de1ef0(void) {
  FTRACE(0x11de1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1ef0 mov eax, dword ptr [0x11de92c4] */
  EAX = (r32((uint32_t)(0x11de92c4)));
  /* 11de1ef5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1ef8 je 0x11de1f8f */
  if (C.zf) goto L_11de1f8f;
  /* 11de1efe push esi */
  push32((uint32_t)(ESI));
  /* 11de1eff mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de1f03 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1f05 jne 0x11de1f14 */
  if (!C.zf) goto L_11de1f14;
  /* 11de1f07 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f08 call dword ptr [0x11de80a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80a4))), 0x11de1f0eu);
  /* 11de1f0e mov esi, eax */
  ESI = (EAX);
  /* 11de1f10 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de1f12 je 0x11de1f80 */
  if (C.zf) goto L_11de1f80;
L_11de1f14:;
  /* 11de1f14 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11de1f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1f19 je 0x11de1f22 */
  if (C.zf) goto L_11de1f22;
  /* 11de1f1b push eax */
  push32((uint32_t)(EAX));
  /* 11de1f1c call 0x11de2e06 */
  push32(0x11de1f21u); f_11de2e06();
  /* 11de1f21 pop ecx */
  ECX = (pop32());
L_11de1f22:;
  /* 11de1f22 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11de1f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1f27 je 0x11de1f30 */
  if (C.zf) goto L_11de1f30;
  /* 11de1f29 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f2a call 0x11de2e06 */
  push32(0x11de1f2fu); f_11de2e06();
  /* 11de1f2f pop ecx */
  ECX = (pop32());
L_11de1f30:;
  /* 11de1f30 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11de1f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1f35 je 0x11de1f3e */
  if (C.zf) goto L_11de1f3e;
  /* 11de1f37 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f38 call 0x11de2e06 */
  push32(0x11de1f3du); f_11de2e06();
  /* 11de1f3d pop ecx */
  ECX = (pop32());
L_11de1f3e:;
  /* 11de1f3e mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11de1f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1f43 je 0x11de1f4c */
  if (C.zf) goto L_11de1f4c;
  /* 11de1f45 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f46 call 0x11de2e06 */
  push32(0x11de1f4bu); f_11de2e06();
  /* 11de1f4b pop ecx */
  ECX = (pop32());
L_11de1f4c:;
  /* 11de1f4c mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11de1f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1f51 je 0x11de1f5a */
  if (C.zf) goto L_11de1f5a;
  /* 11de1f53 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f54 call 0x11de2e06 */
  push32(0x11de1f59u); f_11de2e06();
  /* 11de1f59 pop ecx */
  ECX = (pop32());
L_11de1f5a:;
  /* 11de1f5a mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11de1f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de1f5f je 0x11de1f68 */
  if (C.zf) goto L_11de1f68;
  /* 11de1f61 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f62 call 0x11de2e06 */
  push32(0x11de1f67u); f_11de2e06();
  /* 11de1f67 pop ecx */
  ECX = (pop32());
L_11de1f68:;
  /* 11de1f68 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11de1f6b cmp eax, 0x11de9440 */
  { uint32_t _a=(EAX),_b=(0x11de9440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1f70 je 0x11de1f79 */
  if (C.zf) goto L_11de1f79;
  /* 11de1f72 push eax */
  push32((uint32_t)(EAX));
  /* 11de1f73 call 0x11de2e06 */
  push32(0x11de1f78u); f_11de2e06();
  /* 11de1f78 pop ecx */
  ECX = (pop32());
L_11de1f79:;
  /* 11de1f79 push esi */
  push32((uint32_t)(ESI));
  /* 11de1f7a call 0x11de2e06 */
  push32(0x11de1f7fu); f_11de2e06();
  /* 11de1f7f pop ecx */
  ECX = (pop32());
L_11de1f80:;
  /* 11de1f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de1f82 push dword ptr [0x11de92c4] */
  push32((uint32_t)(r32((uint32_t)(0x11de92c4))));
  /* 11de1f88 call dword ptr [0x11de8094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8094))), 0x11de1f8eu);
  /* 11de1f8e pop esi */
  ESI = (pop32());
L_11de1f8f:;
  /* 11de1f8f ret  */
  ESPCHK(0x11de1ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x11de1f90 (194 bytes, 65 insns) */
void f_11de1f90(void) {
  FTRACE(0x11de1f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de1f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11de1f91 mov ebp, esp */
  EBP = (ESP);
  /* 11de1f93 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11de1f97 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de1f9a sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de1fa0 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1fa3 jl 0x11de204c */
  if ((C.sf!=C.of)) goto L_11de204c;
  /* 11de1fa9 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1faf jg 0x11de204c */
  if ((!C.zf&&C.sf==C.of)) goto L_11de204c;
  /* 11de1fb5 push esi */
  push32((uint32_t)(ESI));
  /* 11de1fb6 push edi */
  push32((uint32_t)(EDI));
  /* 11de1fb7 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de1fba mov esi, dword ptr [edi*4 + 0x11de95ac] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11de95ac)));
  /* 11de1fc1 add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1fc4 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11de1fc7 jne 0x11de1fcf */
  if (!C.zf) goto L_11de1fcf;
  /* 11de1fc9 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de1fcc jle 0x11de1fcf */
  if ((C.zf||C.sf!=C.of)) goto L_11de1fcf;
  /* 11de1fce inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de1fcf:;
  /* 11de1fcf call 0x11de2eef */
  push32(0x11de1fd4u); f_11de2eef();
  /* 11de1fd4 mov eax, ebx */
  EAX = (EBX);
  /* 11de1fd6 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11de1fd9 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de1fdf sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de1fe2 mov edx, esi */
  EDX = (ESI);
  /* 11de1fe4 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11de1fe7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1fe9 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11de1fec add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de1fee mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11de1ff1 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11de1ff4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de1ff7 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11de1ffa lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11de1ffd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de2000 add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2003 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de2006 add ecx, dword ptr [0x11de94c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11de94c8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de200c dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11de200d cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2011 mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11de2014 pop edi */
  EDI = (pop32());
  /* 11de2015 pop esi */
  ESI = (pop32());
  /* 11de2016 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11de201d mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11de2020 je 0x11de2042 */
  if (C.zf) goto L_11de2042;
  /* 11de2022 cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2026 jne 0x11de2048 */
  if (!C.zf) goto L_11de2048;
  /* 11de2028 cmp dword ptr [0x11de94cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11de94cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de202f je 0x11de2048 */
  if (C.zf) goto L_11de2048;
  /* 11de2031 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11de2034 push eax */
  push32((uint32_t)(EAX));
  /* 11de2035 call 0x11de31a4 */
  push32(0x11de203au); f_11de31a4();
  /* 11de203a pop ecx */
  ECX = (pop32());
  /* 11de203b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de203e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2040 je 0x11de2048 */
  if (C.zf) goto L_11de2048;
L_11de2042:;
  /* 11de2042 add ecx, dword ptr [0x11de94d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11de94d0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11de2048:;
  /* 11de2048 mov eax, ecx */
  EAX = (ECX);
  /* 11de204a jmp 0x11de204f */
  goto L_11de204f;
L_11de204c:;
  /* 11de204c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11de204f:;
  /* 11de204f pop ebx */
  EBX = (pop32());
  /* 11de2050 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de2051 ret  */
  ESPCHK(0x11de1f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002052 @ 0x11de2052 (45 bytes, 12 insns) */
void f_11de2052(void) {
  FTRACE(0x11de2052u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2052 mov eax, dword ptr [0x11dec5d4] */
  EAX = (r32((uint32_t)(0x11dec5d4)));
  /* 11de2057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2059 je 0x11de205d */
  if (C.zf) goto L_11de205d;
  /* 11de205b call eax */
  call_ind((uint32_t)(EAX), 0x11de205du);
L_11de205d:;
  /* 11de205d push 0x11de9010 */
  push32((uint32_t)(0x11de9010u));
  /* 11de2062 push 0x11de9008 */
  push32((uint32_t)(0x11de9008u));
  /* 11de2067 call 0x11de2156 */
  push32(0x11de206cu); f_11de2156();
  /* 11de206c push 0x11de9004 */
  push32((uint32_t)(0x11de9004u));
  /* 11de2071 push 0x11de9000 */
  push32((uint32_t)(0x11de9000u));
  /* 11de2076 call 0x11de2156 */
  push32(0x11de207bu); f_11de2156();
  /* 11de207b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de207e ret  */
  ESPCHK(0x11de2052u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11de207f (17 bytes, 6 insns) */
void f_11de207f(void) {
  FTRACE(0x11de207fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de207f push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2081 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de2083 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11de2087 call 0x11de209f */
  push32(0x11de208cu); f_11de209f();
  /* 11de208c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de208f ret  */
  ESPCHK(0x11de207fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x11de2090 (15 bytes, 6 insns) */
void f_11de2090(void) {
  FTRACE(0x11de2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2090 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de2092 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2096 call 0x11de209f */
  push32(0x11de209bu); f_11de209f();
  /* 11de209b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de209e ret  */
  ESPCHK(0x11de2090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000209f @ 0x11de209f (163 bytes, 53 insns) */
void f_11de209f(void) {
  FTRACE(0x11de209fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de209f push edi */
  push32((uint32_t)(EDI));
  /* 11de20a0 call 0x11de2144 */
  push32(0x11de20a5u); f_11de2144();
  /* 11de20a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de20a7 pop edi */
  EDI = (pop32());
  /* 11de20a8 cmp dword ptr [0x11debf4c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11debf4c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de20ae jne 0x11de20c1 */
  if (!C.zf) goto L_11de20c1;
  /* 11de20b0 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11de20b4 call dword ptr [0x11de80b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80b8))), 0x11de20bau);
  /* 11de20ba push eax */
  push32((uint32_t)(EAX));
  /* 11de20bb call dword ptr [0x11de80b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80b4))), 0x11de20c1u);
L_11de20c1:;
  /* 11de20c1 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de20c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11de20c7 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11de20cb mov dword ptr [0x11debf48], edi */
  w32((uint32_t)(0x11debf48), (EDI));
  /* 11de20d1 mov byte ptr [0x11debf44], bl */
  w8((uint32_t)(0x11debf44), (BL));
  /* 11de20d7 jne 0x11de2115 */
  if (!C.zf) goto L_11de2115;
  /* 11de20d9 mov eax, dword ptr [0x11dec5d0] */
  EAX = (r32((uint32_t)(0x11dec5d0)));
  /* 11de20de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de20e0 je 0x11de2104 */
  if (C.zf) goto L_11de2104;
  /* 11de20e2 mov ecx, dword ptr [0x11dec5cc] */
  ECX = (r32((uint32_t)(0x11dec5cc)));
  /* 11de20e8 push esi */
  push32((uint32_t)(ESI));
  /* 11de20e9 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11de20ec cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de20ee jb 0x11de2103 */
  if (C.cf) goto L_11de2103;
L_11de20f0:;
  /* 11de20f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de20f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de20f4 je 0x11de20f8 */
  if (C.zf) goto L_11de20f8;
  /* 11de20f6 call eax */
  call_ind((uint32_t)(EAX), 0x11de20f8u);
L_11de20f8:;
  /* 11de20f8 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de20fb cmp esi, dword ptr [0x11dec5d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dec5d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2101 jae 0x11de20f0 */
  if (!C.cf) goto L_11de20f0;
L_11de2103:;
  /* 11de2103 pop esi */
  ESI = (pop32());
L_11de2104:;
  /* 11de2104 push 0x11de9018 */
  push32((uint32_t)(0x11de9018u));
  /* 11de2109 push 0x11de9014 */
  push32((uint32_t)(0x11de9014u));
  /* 11de210e call 0x11de2156 */
  push32(0x11de2113u); f_11de2156();
  /* 11de2113 pop ecx */
  ECX = (pop32());
  /* 11de2114 pop ecx */
  ECX = (pop32());
L_11de2115:;
  /* 11de2115 push 0x11de9020 */
  push32((uint32_t)(0x11de9020u));
  /* 11de211a push 0x11de901c */
  push32((uint32_t)(0x11de901cu));
  /* 11de211f call 0x11de2156 */
  push32(0x11de2124u); f_11de2156();
  /* 11de2124 pop ecx */
  ECX = (pop32());
  /* 11de2125 pop ecx */
  ECX = (pop32());
  /* 11de2126 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de2128 pop ebx */
  EBX = (pop32());
  /* 11de2129 je 0x11de2132 */
  if (C.zf) goto L_11de2132;
  /* 11de212b call 0x11de214d */
  push32(0x11de2130u); f_11de214d();
  /* 11de2130 pop edi */
  EDI = (pop32());
  /* 11de2131 ret  */
  ESPCHK(0x11de209fu, _esp0);
  ESP += 4; return;
L_11de2132:;
  /* 11de2132 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11de2136 mov dword ptr [0x11debf4c], edi */
  w32((uint32_t)(0x11debf4c), (EDI));
  /* 11de213c call dword ptr [0x11de8000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8000))), 0x11de2142u);
  /* 11de2142 pop edi */
  EDI = (pop32());
  /* 11de2143 ret  */
  ESPCHK(0x11de209fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002144 @ 0x11de2144 (9 bytes, 4 insns) */
void f_11de2144(void) {
  FTRACE(0x11de2144u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2144 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11de2146 call 0x11de2d90 */
  push32(0x11de214bu); f_11de2d90();
  /* 11de214b pop ecx */
  ECX = (pop32());
  /* 11de214c ret  */
  ESPCHK(0x11de2144u, _esp0);
  ESP += 4; return;
}

/* FUN_1000214d @ 0x11de214d (9 bytes, 4 insns) */
void f_11de214d(void) {
  FTRACE(0x11de214du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de214d push 0xd */
  push32((uint32_t)(0xdu));
  /* 11de214f call 0x11de2df1 */
  push32(0x11de2154u); f_11de2df1();
  /* 11de2154 pop ecx */
  ECX = (pop32());
  /* 11de2155 ret  */
  ESPCHK(0x11de214du, _esp0);
  ESP += 4; return;
}

/* FUN_10002156 @ 0x11de2156 (26 bytes, 12 insns) */
void f_11de2156(void) {
  FTRACE(0x11de2156u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2156 push esi */
  push32((uint32_t)(ESI));
  /* 11de2157 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11de215b:;
  /* 11de215b cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de215f jae 0x11de216e */
  if (!C.cf) goto L_11de216e;
  /* 11de2161 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de2163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2165 je 0x11de2169 */
  if (C.zf) goto L_11de2169;
  /* 11de2167 call eax */
  call_ind((uint32_t)(EAX), 0x11de2169u);
L_11de2169:;
  /* 11de2169 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de216c jmp 0x11de215b */
  goto L_11de215b;
L_11de216e:;
  /* 11de216e pop esi */
  ESI = (pop32());
  /* 11de216f ret  */
  ESPCHK(0x11de2156u, _esp0);
  ESP += 4; return;
}

/* FUN_10002170 @ 0x11de2170 (444 bytes, 150 insns) */
void f_11de2170(void) {
  FTRACE(0x11de2170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2170 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2171 mov ebp, esp */
  EBP = (ESP);
  /* 11de2173 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2176 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2177 push esi */
  push32((uint32_t)(ESI));
  /* 11de2178 push edi */
  push32((uint32_t)(EDI));
  /* 11de2179 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11de217e call 0x11de34b1 */
  push32(0x11de2183u); f_11de34b1();
  /* 11de2183 mov esi, eax */
  ESI = (EAX);
  /* 11de2185 pop ecx */
  ECX = (pop32());
  /* 11de2186 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2188 jne 0x11de2192 */
  if (!C.zf) goto L_11de2192;
  /* 11de218a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11de218c call 0x11de1dd1 */
  push32(0x11de2191u); f_11de1dd1();
  /* 11de2191 pop ecx */
  ECX = (pop32());
L_11de2192:;
  /* 11de2192 mov dword ptr [0x11dec4c0], esi */
  w32((uint32_t)(0x11dec4c0), (ESI));
  /* 11de2198 mov dword ptr [0x11dec5c0], 0x20 */
  w32((uint32_t)(0x11dec5c0), (0x20u));
  /* 11de21a2 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11de21a8:;
  /* 11de21a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de21aa jae 0x11de21ca */
  if (!C.cf) goto L_11de21ca;
  /* 11de21ac and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11de21b0 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11de21b3 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11de21b7 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11de21bb mov eax, dword ptr [0x11dec4c0] */
  EAX = (r32((uint32_t)(0x11dec4c0)));
  /* 11de21c0 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de21c3 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de21c8 jmp 0x11de21a8 */
  goto L_11de21a8;
L_11de21ca:;
  /* 11de21ca lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11de21cd push eax */
  push32((uint32_t)(EAX));
  /* 11de21ce call dword ptr [0x11de80ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80ac))), 0x11de21d4u);
  /* 11de21d4 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de21d9 je 0x11de22b0 */
  if (C.zf) goto L_11de22b0;
  /* 11de21df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11de21e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de21e4 je 0x11de22b0 */
  if (C.zf) goto L_11de22b0;
  /* 11de21ea mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11de21ec lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11de21ef lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11de21f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11de21f5 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11de21fa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de21fc jl 0x11de2200 */
  if ((C.sf!=C.of)) goto L_11de2200;
  /* 11de21fe mov edi, eax */
  EDI = (EAX);
L_11de2200:;
  /* 11de2200 cmp dword ptr [0x11dec5c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2206 jge 0x11de225e */
  if ((C.sf==C.of)) goto L_11de225e;
  /* 11de2208 mov esi, 0x11dec4c4 */
  ESI = (0x11dec4c4u);
L_11de220d:;
  /* 11de220d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11de2212 call 0x11de34b1 */
  push32(0x11de2217u); f_11de34b1();
  /* 11de2217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2219 pop ecx */
  ECX = (pop32());
  /* 11de221a je 0x11de2258 */
  if (C.zf) goto L_11de2258;
  /* 11de221c add dword ptr [0x11dec5c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11dec5c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de2223 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de2225 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11de222b:;
  /* 11de222b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de222d jae 0x11de224b */
  if (!C.cf) goto L_11de224b;
  /* 11de222f and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11de2233 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11de2236 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11de223a mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11de223e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11de2240 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2243 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2249 jmp 0x11de222b */
  goto L_11de222b;
L_11de224b:;
  /* 11de224b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de224e cmp dword ptr [0x11dec5c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2254 jl 0x11de220d */
  if ((C.sf!=C.of)) goto L_11de220d;
  /* 11de2256 jmp 0x11de225e */
  goto L_11de225e;
L_11de2258:;
  /* 11de2258 mov edi, dword ptr [0x11dec5c0] */
  EDI = (r32((uint32_t)(0x11dec5c0)));
L_11de225e:;
  /* 11de225e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de2260 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de2262 jle 0x11de22b0 */
  if ((C.zf||C.sf!=C.of)) goto L_11de22b0;
L_11de2264:;
  /* 11de2264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de2267 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11de2269 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de226c je 0x11de22a6 */
  if (C.zf) goto L_11de22a6;
  /* 11de226e mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11de2270 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11de2272 je 0x11de22a6 */
  if (C.zf) goto L_11de22a6;
  /* 11de2274 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11de2276 jne 0x11de2283 */
  if (!C.zf) goto L_11de2283;
  /* 11de2278 push ecx */
  push32((uint32_t)(ECX));
  /* 11de2279 call dword ptr [0x11de80c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80c4))), 0x11de227fu);
  /* 11de227f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2281 je 0x11de22a6 */
  if (C.zf) goto L_11de22a6;
L_11de2283:;
  /* 11de2283 mov ecx, esi */
  ECX = (ESI);
  /* 11de2285 mov eax, esi */
  EAX = (ESI);
  /* 11de2287 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11de228a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11de228d mov ecx, dword ptr [ecx*4 + 0x11dec4c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11dec4c0)));
  /* 11de2294 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11de2297 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11de229a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de229d mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11de229f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11de22a1 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11de22a3 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11de22a6:;
  /* 11de22a6 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de22aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de22ab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de22ac cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de22ae jl 0x11de2264 */
  if ((C.sf!=C.of)) goto L_11de2264;
L_11de22b0:;
  /* 11de22b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11de22b2:;
  /* 11de22b2 mov ecx, dword ptr [0x11dec4c0] */
  ECX = (r32((uint32_t)(0x11dec4c0)));
  /* 11de22b8 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11de22bb cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de22bf lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11de22c2 jne 0x11de2311 */
  if (!C.zf) goto L_11de2311;
  /* 11de22c4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de22c6 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11de22ca jne 0x11de22d1 */
  if (!C.zf) goto L_11de22d1;
  /* 11de22cc push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11de22ce pop eax */
  EAX = (pop32());
  /* 11de22cf jmp 0x11de22db */
  goto L_11de22db;
L_11de22d1:;
  /* 11de22d1 mov eax, ebx */
  EAX = (EBX);
  /* 11de22d3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de22d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de22d6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de22d8 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11de22db:;
  /* 11de22db push eax */
  push32((uint32_t)(EAX));
  /* 11de22dc call dword ptr [0x11de80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80c0))), 0x11de22e2u);
  /* 11de22e2 mov edi, eax */
  EDI = (EAX);
  /* 11de22e4 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de22e7 je 0x11de2300 */
  if (C.zf) goto L_11de2300;
  /* 11de22e9 push edi */
  push32((uint32_t)(EDI));
  /* 11de22ea call dword ptr [0x11de80c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80c4))), 0x11de22f0u);
  /* 11de22f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de22f2 je 0x11de2300 */
  if (C.zf) goto L_11de2300;
  /* 11de22f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de22f9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11de22fb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de22fe jne 0x11de2306 */
  if (!C.zf) goto L_11de2306;
L_11de2300:;
  /* 11de2300 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11de2304 jmp 0x11de2315 */
  goto L_11de2315;
L_11de2306:;
  /* 11de2306 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2309 jne 0x11de2315 */
  if (!C.zf) goto L_11de2315;
  /* 11de230b or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11de230f jmp 0x11de2315 */
  goto L_11de2315;
L_11de2311:;
  /* 11de2311 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11de2315:;
  /* 11de2315 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de2316 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2319 jl 0x11de22b2 */
  if ((C.sf!=C.of)) goto L_11de22b2;
  /* 11de231b push dword ptr [0x11dec5c0] */
  push32((uint32_t)(r32((uint32_t)(0x11dec5c0))));
  /* 11de2321 call dword ptr [0x11de80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80bc))), 0x11de2327u);
  /* 11de2327 pop edi */
  EDI = (pop32());
  /* 11de2328 pop esi */
  ESI = (pop32());
  /* 11de2329 pop ebx */
  EBX = (pop32());
  /* 11de232a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de232b ret  */
  ESPCHK(0x11de2170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000232c @ 0x11de232c (84 bytes, 33 insns) */
void f_11de232c(void) {
  FTRACE(0x11de232cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de232c push ebx */
  push32((uint32_t)(EBX));
  /* 11de232d push esi */
  push32((uint32_t)(ESI));
  /* 11de232e push edi */
  push32((uint32_t)(EDI));
  /* 11de232f mov esi, 0x11dec4c0 */
  ESI = (0x11dec4c0u);
L_11de2334:;
  /* 11de2334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de2336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2338 je 0x11de2371 */
  if (C.zf) goto L_11de2371;
  /* 11de233a mov edi, eax */
  EDI = (EAX);
  /* 11de233c add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2343 jae 0x11de2366 */
  if (!C.cf) goto L_11de2366;
  /* 11de2345 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11de2348:;
  /* 11de2348 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de234c je 0x11de2355 */
  if (C.zf) goto L_11de2355;
  /* 11de234e push ebx */
  push32((uint32_t)(EBX));
  /* 11de234f call dword ptr [0x11de80c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80c8))), 0x11de2355u);
L_11de2355:;
  /* 11de2355 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de2357 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de235a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de235f add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2362 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2364 jb 0x11de2348 */
  if (C.cf) goto L_11de2348;
L_11de2366:;
  /* 11de2366 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de2368 call 0x11de2e06 */
  push32(0x11de236du); f_11de2e06();
  /* 11de236d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11de2370 pop ecx */
  ECX = (pop32());
L_11de2371:;
  /* 11de2371 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2374 cmp esi, 0x11dec5c0 */
  { uint32_t _a=(ESI),_b=(0x11dec5c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de237a jl 0x11de2334 */
  if ((C.sf!=C.of)) goto L_11de2334;
  /* 11de237c pop edi */
  EDI = (pop32());
  /* 11de237d pop esi */
  ESI = (pop32());
  /* 11de237e pop ebx */
  EBX = (pop32());
  /* 11de237f ret  */
  ESPCHK(0x11de232cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002380 @ 0x11de2380 (185 bytes, 71 insns) */
void f_11de2380(void) {
  FTRACE(0x11de2380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2380 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2381 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2383 cmp dword ptr [0x11dec5c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2389 push esi */
  push32((uint32_t)(ESI));
  /* 11de238a push edi */
  push32((uint32_t)(EDI));
  /* 11de238b jne 0x11de2392 */
  if (!C.zf) goto L_11de2392;
  /* 11de238d call 0x11de3b33 */
  push32(0x11de2392u); f_11de3b33();
L_11de2392:;
  /* 11de2392 mov esi, dword ptr [0x11debefc] */
  ESI = (r32((uint32_t)(0x11debefc)));
  /* 11de2398 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11de239a:;
  /* 11de239a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de239c cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de239e je 0x11de23b2 */
  if (C.zf) goto L_11de23b2;
  /* 11de23a0 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de23a2 je 0x11de23a5 */
  if (C.zf) goto L_11de23a5;
  /* 11de23a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11de23a5:;
  /* 11de23a5 push esi */
  push32((uint32_t)(ESI));
  /* 11de23a6 call 0x11de36e0 */
  push32(0x11de23abu); f_11de36e0();
  /* 11de23ab pop ecx */
  ECX = (pop32());
  /* 11de23ac lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11de23b0 jmp 0x11de239a */
  goto L_11de239a;
L_11de23b2:;
  /* 11de23b2 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11de23b9 push eax */
  push32((uint32_t)(EAX));
  /* 11de23ba call 0x11de34b1 */
  push32(0x11de23bfu); f_11de34b1();
  /* 11de23bf mov esi, eax */
  ESI = (EAX);
  /* 11de23c1 pop ecx */
  ECX = (pop32());
  /* 11de23c2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de23c4 mov dword ptr [0x11debf2c], esi */
  w32((uint32_t)(0x11debf2c), (ESI));
  /* 11de23ca jne 0x11de23d4 */
  if (!C.zf) goto L_11de23d4;
  /* 11de23cc push 9 */
  push32((uint32_t)(0x9u));
  /* 11de23ce call 0x11de1dd1 */
  push32(0x11de23d3u); f_11de1dd1();
  /* 11de23d3 pop ecx */
  ECX = (pop32());
L_11de23d4:;
  /* 11de23d4 mov edi, dword ptr [0x11debefc] */
  EDI = (r32((uint32_t)(0x11debefc)));
  /* 11de23da cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de23dc je 0x11de2417 */
  if (C.zf) goto L_11de2417;
  /* 11de23de push ebp */
  push32((uint32_t)(EBP));
L_11de23df:;
  /* 11de23df push edi */
  push32((uint32_t)(EDI));
  /* 11de23e0 call 0x11de36e0 */
  push32(0x11de23e5u); f_11de36e0();
  /* 11de23e5 mov ebp, eax */
  EBP = (EAX);
  /* 11de23e7 pop ecx */
  ECX = (pop32());
  /* 11de23e8 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11de23e9 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de23ec je 0x11de2410 */
  if (C.zf) goto L_11de2410;
  /* 11de23ee push ebp */
  push32((uint32_t)(EBP));
  /* 11de23ef call 0x11de34b1 */
  push32(0x11de23f4u); f_11de34b1();
  /* 11de23f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de23f6 pop ecx */
  ECX = (pop32());
  /* 11de23f7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de23f9 jne 0x11de2403 */
  if (!C.zf) goto L_11de2403;
  /* 11de23fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11de23fd call 0x11de1dd1 */
  push32(0x11de2402u); f_11de1dd1();
  /* 11de2402 pop ecx */
  ECX = (pop32());
L_11de2403:;
  /* 11de2403 push edi */
  push32((uint32_t)(EDI));
  /* 11de2404 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de2406 call 0x11de35f0 */
  push32(0x11de240bu); f_11de35f0();
  /* 11de240b pop ecx */
  ECX = (pop32());
  /* 11de240c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de240f pop ecx */
  ECX = (pop32());
L_11de2410:;
  /* 11de2410 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2412 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2414 jne 0x11de23df */
  if (!C.zf) goto L_11de23df;
  /* 11de2416 pop ebp */
  EBP = (pop32());
L_11de2417:;
  /* 11de2417 push dword ptr [0x11debefc] */
  push32((uint32_t)(r32((uint32_t)(0x11debefc))));
  /* 11de241d call 0x11de2e06 */
  push32(0x11de2422u); f_11de2e06();
  /* 11de2422 pop ecx */
  ECX = (pop32());
  /* 11de2423 mov dword ptr [0x11debefc], ebx */
  w32((uint32_t)(0x11debefc), (EBX));
  /* 11de2429 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11de242b pop edi */
  EDI = (pop32());
  /* 11de242c pop esi */
  ESI = (pop32());
  /* 11de242d mov dword ptr [0x11dec5c4], 1 */
  w32((uint32_t)(0x11dec5c4), (0x1u));
  /* 11de2437 pop ebx */
  EBX = (pop32());
  /* 11de2438 ret  */
  ESPCHK(0x11de2380u, _esp0);
  ESP += 4; return;
}

/* FUN_10002439 @ 0x11de2439 (153 bytes, 62 insns) */
void f_11de2439(void) {
  FTRACE(0x11de2439u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2439 push ebp */
  push32((uint32_t)(EBP));
  /* 11de243a mov ebp, esp */
  EBP = (ESP);
  /* 11de243c push ecx */
  push32((uint32_t)(ECX));
  /* 11de243d push ecx */
  push32((uint32_t)(ECX));
  /* 11de243e push ebx */
  push32((uint32_t)(EBX));
  /* 11de243f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2441 cmp dword ptr [0x11dec5c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2447 push esi */
  push32((uint32_t)(ESI));
  /* 11de2448 push edi */
  push32((uint32_t)(EDI));
  /* 11de2449 jne 0x11de2450 */
  if (!C.zf) goto L_11de2450;
  /* 11de244b call 0x11de3b33 */
  push32(0x11de2450u); f_11de3b33();
L_11de2450:;
  /* 11de2450 mov esi, 0x11debf50 */
  ESI = (0x11debf50u);
  /* 11de2455 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11de245a push esi */
  push32((uint32_t)(ESI));
  /* 11de245b push ebx */
  push32((uint32_t)(EBX));
  /* 11de245c call dword ptr [0x11de80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80cc))), 0x11de2462u);
  /* 11de2462 mov eax, dword ptr [0x11dec5d8] */
  EAX = (r32((uint32_t)(0x11dec5d8)));
  /* 11de2467 mov dword ptr [0x11debf3c], esi */
  w32((uint32_t)(0x11debf3c), (ESI));
  /* 11de246d mov edi, esi */
  EDI = (ESI);
  /* 11de246f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2471 je 0x11de2475 */
  if (C.zf) goto L_11de2475;
  /* 11de2473 mov edi, eax */
  EDI = (EAX);
L_11de2475:;
  /* 11de2475 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11de2478 push eax */
  push32((uint32_t)(EAX));
  /* 11de2479 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11de247c push eax */
  push32((uint32_t)(EAX));
  /* 11de247d push ebx */
  push32((uint32_t)(EBX));
  /* 11de247e push ebx */
  push32((uint32_t)(EBX));
  /* 11de247f push edi */
  push32((uint32_t)(EDI));
  /* 11de2480 call 0x11de24d2 */
  push32(0x11de2485u); f_11de24d2();
  /* 11de2485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de2488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de248b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11de248e push eax */
  push32((uint32_t)(EAX));
  /* 11de248f call 0x11de34b1 */
  push32(0x11de2494u); f_11de34b1();
  /* 11de2494 mov esi, eax */
  ESI = (EAX);
  /* 11de2496 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2499 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de249b jne 0x11de24a5 */
  if (!C.zf) goto L_11de24a5;
  /* 11de249d push 8 */
  push32((uint32_t)(0x8u));
  /* 11de249f call 0x11de1dd1 */
  push32(0x11de24a4u); f_11de1dd1();
  /* 11de24a4 pop ecx */
  ECX = (pop32());
L_11de24a5:;
  /* 11de24a5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11de24a8 push eax */
  push32((uint32_t)(EAX));
  /* 11de24a9 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11de24ac push eax */
  push32((uint32_t)(EAX));
  /* 11de24ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de24b0 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11de24b3 push eax */
  push32((uint32_t)(EAX));
  /* 11de24b4 push esi */
  push32((uint32_t)(ESI));
  /* 11de24b5 push edi */
  push32((uint32_t)(EDI));
  /* 11de24b6 call 0x11de24d2 */
  push32(0x11de24bbu); f_11de24d2();
  /* 11de24bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de24be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de24c1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de24c2 mov dword ptr [0x11debf24], esi */
  w32((uint32_t)(0x11debf24), (ESI));
  /* 11de24c8 pop edi */
  EDI = (pop32());
  /* 11de24c9 pop esi */
  ESI = (pop32());
  /* 11de24ca mov dword ptr [0x11debf20], eax */
  w32((uint32_t)(0x11debf20), (EAX));
  /* 11de24cf pop ebx */
  EBX = (pop32());
  /* 11de24d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de24d1 ret  */
  ESPCHK(0x11de2439u, _esp0);
  ESP += 4; return;
}

/* FUN_100024d2 @ 0x11de24d2 (436 bytes, 187 insns) */
void f_11de24d2(void) {
  FTRACE(0x11de24d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de24d2 push ebp */
  push32((uint32_t)(EBP));
  /* 11de24d3 mov ebp, esp */
  EBP = (ESP);
  /* 11de24d5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11de24d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de24db push ebx */
  push32((uint32_t)(EBX));
  /* 11de24dc push esi */
  push32((uint32_t)(ESI));
  /* 11de24dd and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11de24e0 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11de24e3 push edi */
  push32((uint32_t)(EDI));
  /* 11de24e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de24e7 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11de24ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de24f0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de24f2 je 0x11de24fc */
  if (C.zf) goto L_11de24fc;
  /* 11de24f4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11de24f6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de24f9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11de24fc:;
  /* 11de24fc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de24ff jne 0x11de2545 */
  if (!C.zf) goto L_11de2545;
L_11de2501:;
  /* 11de2501 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11de2504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2505 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2508 je 0x11de2533 */
  if (C.zf) goto L_11de2533;
  /* 11de250a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de250c je 0x11de2533 */
  if (C.zf) goto L_11de2533;
  /* 11de250e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11de2511 test byte ptr [edx + 0x11dec3a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11dec3a1)))&(0x4u); fl_logic(_r,8); }
  /* 11de2518 je 0x11de2526 */
  if (C.zf) goto L_11de2526;
  /* 11de251a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de251c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de251e je 0x11de2526 */
  if (C.zf) goto L_11de2526;
  /* 11de2520 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de2522 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11de2524 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de2525 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11de2526:;
  /* 11de2526 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de2528 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de252a je 0x11de2501 */
  if (C.zf) goto L_11de2501;
  /* 11de252c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de252e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11de2530 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de2531 jmp 0x11de2501 */
  goto L_11de2501;
L_11de2533:;
  /* 11de2533 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de2535 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2537 je 0x11de253d */
  if (C.zf) goto L_11de253d;
  /* 11de2539 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11de253c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de253d:;
  /* 11de253d cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2540 jne 0x11de2588 */
  if (!C.zf) goto L_11de2588;
  /* 11de2542 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2543 jmp 0x11de2588 */
  goto L_11de2588;
L_11de2545:;
  /* 11de2545 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de2547 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2549 je 0x11de2550 */
  if (C.zf) goto L_11de2550;
  /* 11de254b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de254d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11de254f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de2550:;
  /* 11de2550 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de2552 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2553 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11de2556 test byte ptr [ebx + 0x11dec3a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11dec3a1)))&(0x4u); fl_logic(_r,8); }
  /* 11de255d je 0x11de256b */
  if (C.zf) goto L_11de256b;
  /* 11de255f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de2561 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2563 je 0x11de256a */
  if (C.zf) goto L_11de256a;
  /* 11de2565 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11de2567 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11de2569 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de256a:;
  /* 11de256a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11de256b:;
  /* 11de256b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de256e je 0x11de2579 */
  if (C.zf) goto L_11de2579;
  /* 11de2570 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de2572 je 0x11de257d */
  if (C.zf) goto L_11de257d;
  /* 11de2574 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2577 jne 0x11de2545 */
  if (!C.zf) goto L_11de2545;
L_11de2579:;
  /* 11de2579 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de257b jne 0x11de2580 */
  if (!C.zf) goto L_11de2580;
L_11de257d:;
  /* 11de257d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de257e jmp 0x11de2588 */
  goto L_11de2588;
L_11de2580:;
  /* 11de2580 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2582 je 0x11de2588 */
  if (C.zf) goto L_11de2588;
  /* 11de2584 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11de2588:;
  /* 11de2588 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11de258c:;
  /* 11de258c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de258f je 0x11de2675 */
  if (C.zf) goto L_11de2675;
L_11de2595:;
  /* 11de2595 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de2597 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de259a je 0x11de25a1 */
  if (C.zf) goto L_11de25a1;
  /* 11de259c cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de259f jne 0x11de25a4 */
  if (!C.zf) goto L_11de25a4;
L_11de25a1:;
  /* 11de25a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de25a2 jmp 0x11de2595 */
  goto L_11de2595;
L_11de25a4:;
  /* 11de25a4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de25a7 je 0x11de2675 */
  if (C.zf) goto L_11de2675;
  /* 11de25ad test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de25af je 0x11de25b9 */
  if (C.zf) goto L_11de25b9;
  /* 11de25b1 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11de25b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de25b6 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11de25b9:;
  /* 11de25b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de25bc inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11de25be:;
  /* 11de25be mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11de25c5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11de25c7:;
  /* 11de25c7 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de25ca jne 0x11de25d0 */
  if (!C.zf) goto L_11de25d0;
  /* 11de25cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de25cd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de25ce jmp 0x11de25c7 */
  goto L_11de25c7;
L_11de25d0:;
  /* 11de25d0 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de25d3 jne 0x11de2601 */
  if (!C.zf) goto L_11de2601;
  /* 11de25d5 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11de25d8 jne 0x11de25ff */
  if (!C.zf) goto L_11de25ff;
  /* 11de25da xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de25dc cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de25df je 0x11de25ee */
  if (C.zf) goto L_11de25ee;
  /* 11de25e1 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de25e5 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11de25e8 jne 0x11de25ee */
  if (!C.zf) goto L_11de25ee;
  /* 11de25ea mov eax, edx */
  EAX = (EDX);
  /* 11de25ec jmp 0x11de25f1 */
  goto L_11de25f1;
L_11de25ee:;
  /* 11de25ee mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11de25f1:;
  /* 11de25f1 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de25f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11de25f6 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de25f9 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11de25fc mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11de25ff:;
  /* 11de25ff shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11de2601:;
  /* 11de2601 mov edx, ebx */
  EDX = (EBX);
  /* 11de2603 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11de2604 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11de2606 je 0x11de2616 */
  if (C.zf) goto L_11de2616;
  /* 11de2608 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11de2609:;
  /* 11de2609 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de260b je 0x11de2611 */
  if (C.zf) goto L_11de2611;
  /* 11de260d mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11de2610 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de2611:;
  /* 11de2611 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de2613 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11de2614 jne 0x11de2609 */
  if (!C.zf) goto L_11de2609;
L_11de2616:;
  /* 11de2616 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de2618 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de261a je 0x11de2666 */
  if (C.zf) goto L_11de2666;
  /* 11de261c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2620 jne 0x11de262c */
  if (!C.zf) goto L_11de262c;
  /* 11de2622 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2625 je 0x11de2666 */
  if (C.zf) goto L_11de2666;
  /* 11de2627 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de262a je 0x11de2666 */
  if (C.zf) goto L_11de2666;
L_11de262c:;
  /* 11de262c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2630 je 0x11de2660 */
  if (C.zf) goto L_11de2660;
  /* 11de2632 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2634 je 0x11de264f */
  if (C.zf) goto L_11de264f;
  /* 11de2636 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11de2639 test byte ptr [ebx + 0x11dec3a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11dec3a1)))&(0x4u); fl_logic(_r,8); }
  /* 11de2640 je 0x11de2648 */
  if (C.zf) goto L_11de2648;
  /* 11de2642 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11de2644 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de2645 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2646 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11de2648:;
  /* 11de2648 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11de264a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11de264c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de264d jmp 0x11de265e */
  goto L_11de265e;
L_11de264f:;
  /* 11de264f movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11de2652 test byte ptr [edx + 0x11dec3a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11dec3a1)))&(0x4u); fl_logic(_r,8); }
  /* 11de2659 je 0x11de265e */
  if (C.zf) goto L_11de265e;
  /* 11de265b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de265c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11de265e:;
  /* 11de265e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11de2660:;
  /* 11de2660 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2661 jmp 0x11de25be */
  goto L_11de25be;
L_11de2666:;
  /* 11de2666 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2668 je 0x11de266e */
  if (C.zf) goto L_11de266e;
  /* 11de266a and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11de266d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de266e:;
  /* 11de266e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11de2670 jmp 0x11de258c */
  goto L_11de258c;
L_11de2675:;
  /* 11de2675 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de2677 je 0x11de267c */
  if (C.zf) goto L_11de267c;
  /* 11de2679 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11de267c:;
  /* 11de267c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de267f pop edi */
  EDI = (pop32());
  /* 11de2680 pop esi */
  ESI = (pop32());
  /* 11de2681 pop ebx */
  EBX = (pop32());
  /* 11de2682 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11de2684 pop ebp */
  EBP = (pop32());
  /* 11de2685 ret  */
  ESPCHK(0x11de24d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002686 @ 0x11de2686 (306 bytes, 132 insns) */
void f_11de2686(void) {
  FTRACE(0x11de2686u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2686 push ecx */
  push32((uint32_t)(ECX));
  /* 11de2687 push ecx */
  push32((uint32_t)(ECX));
  /* 11de2688 mov eax, dword ptr [0x11dec054] */
  EAX = (r32((uint32_t)(0x11dec054)));
  /* 11de268d push ebx */
  push32((uint32_t)(EBX));
  /* 11de268e push ebp */
  push32((uint32_t)(EBP));
  /* 11de268f mov ebp, dword ptr [0x11de8078] */
  EBP = (r32((uint32_t)(0x11de8078)));
  /* 11de2695 push esi */
  push32((uint32_t)(ESI));
  /* 11de2696 push edi */
  push32((uint32_t)(EDI));
  /* 11de2697 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2699 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de269b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de269d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de269f jne 0x11de26d4 */
  if (!C.zf) goto L_11de26d4;
  /* 11de26a1 call ebp */
  call_ind((uint32_t)(EBP), 0x11de26a3u);
  /* 11de26a3 mov esi, eax */
  ESI = (EAX);
  /* 11de26a5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de26a7 je 0x11de26b5 */
  if (C.zf) goto L_11de26b5;
  /* 11de26a9 mov dword ptr [0x11dec054], 1 */
  w32((uint32_t)(0x11dec054), (0x1u));
  /* 11de26b3 jmp 0x11de26dd */
  goto L_11de26dd;
L_11de26b5:;
  /* 11de26b5 call dword ptr [0x11de80dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80dc))), 0x11de26bbu);
  /* 11de26bb mov edi, eax */
  EDI = (EAX);
  /* 11de26bd cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de26bf je 0x11de27af */
  if (C.zf) goto L_11de27af;
  /* 11de26c5 mov dword ptr [0x11dec054], 2 */
  w32((uint32_t)(0x11dec054), (0x2u));
  /* 11de26cf jmp 0x11de2763 */
  goto L_11de2763;
L_11de26d4:;
  /* 11de26d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de26d7 jne 0x11de275e */
  if (!C.zf) goto L_11de275e;
L_11de26dd:;
  /* 11de26dd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de26df jne 0x11de26ed */
  if (!C.zf) goto L_11de26ed;
  /* 11de26e1 call ebp */
  call_ind((uint32_t)(EBP), 0x11de26e3u);
  /* 11de26e3 mov esi, eax */
  ESI = (EAX);
  /* 11de26e5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de26e7 je 0x11de27af */
  if (C.zf) goto L_11de27af;
L_11de26ed:;
  /* 11de26ed cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de26f0 mov eax, esi */
  EAX = (ESI);
  /* 11de26f2 je 0x11de2702 */
  if (C.zf) goto L_11de2702;
L_11de26f4:;
  /* 11de26f4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de26f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de26f6 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de26f9 jne 0x11de26f4 */
  if (!C.zf) goto L_11de26f4;
  /* 11de26fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de26fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de26fd cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de2700 jne 0x11de26f4 */
  if (!C.zf) goto L_11de26f4;
L_11de2702:;
  /* 11de2702 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2704 mov edi, dword ptr [0x11de80d8] */
  EDI = (r32((uint32_t)(0x11de80d8)));
  /* 11de270a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11de270c push ebx */
  push32((uint32_t)(EBX));
  /* 11de270d push ebx */
  push32((uint32_t)(EBX));
  /* 11de270e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de270f push ebx */
  push32((uint32_t)(EBX));
  /* 11de2710 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2711 push eax */
  push32((uint32_t)(EAX));
  /* 11de2712 push esi */
  push32((uint32_t)(ESI));
  /* 11de2713 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2714 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2715 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11de2719 call edi */
  call_ind((uint32_t)(EDI), 0x11de271bu);
  /* 11de271b mov ebp, eax */
  EBP = (EAX);
  /* 11de271d cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de271f je 0x11de2753 */
  if (C.zf) goto L_11de2753;
  /* 11de2721 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2722 call 0x11de34b1 */
  push32(0x11de2727u); f_11de34b1();
  /* 11de2727 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2729 pop ecx */
  ECX = (pop32());
  /* 11de272a mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11de272e je 0x11de2753 */
  if (C.zf) goto L_11de2753;
  /* 11de2730 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2731 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2732 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2733 push eax */
  push32((uint32_t)(EAX));
  /* 11de2734 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11de2738 push esi */
  push32((uint32_t)(ESI));
  /* 11de2739 push ebx */
  push32((uint32_t)(EBX));
  /* 11de273a push ebx */
  push32((uint32_t)(EBX));
  /* 11de273b call edi */
  call_ind((uint32_t)(EDI), 0x11de273du);
  /* 11de273d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de273f jne 0x11de274f */
  if (!C.zf) goto L_11de274f;
  /* 11de2741 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11de2745 call 0x11de2e06 */
  push32(0x11de274au); f_11de2e06();
  /* 11de274a pop ecx */
  ECX = (pop32());
  /* 11de274b mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11de274f:;
  /* 11de274f mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11de2753:;
  /* 11de2753 push esi */
  push32((uint32_t)(ESI));
  /* 11de2754 call dword ptr [0x11de80d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80d4))), 0x11de275au);
  /* 11de275a mov eax, ebx */
  EAX = (EBX);
  /* 11de275c jmp 0x11de27b1 */
  goto L_11de27b1;
L_11de275e:;
  /* 11de275e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2761 jne 0x11de27af */
  if (!C.zf) goto L_11de27af;
L_11de2763:;
  /* 11de2763 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2765 jne 0x11de2773 */
  if (!C.zf) goto L_11de2773;
  /* 11de2767 call dword ptr [0x11de80dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80dc))), 0x11de276du);
  /* 11de276d mov edi, eax */
  EDI = (EAX);
  /* 11de276f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2771 je 0x11de27af */
  if (C.zf) goto L_11de27af;
L_11de2773:;
  /* 11de2773 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2775 mov eax, edi */
  EAX = (EDI);
  /* 11de2777 je 0x11de2783 */
  if (C.zf) goto L_11de2783;
L_11de2779:;
  /* 11de2779 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de277a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de277c jne 0x11de2779 */
  if (!C.zf) goto L_11de2779;
  /* 11de277e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de277f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2781 jne 0x11de2779 */
  if (!C.zf) goto L_11de2779;
L_11de2783:;
  /* 11de2783 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2785 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2786 mov ebp, eax */
  EBP = (EAX);
  /* 11de2788 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2789 call 0x11de34b1 */
  push32(0x11de278eu); f_11de34b1();
  /* 11de278e mov esi, eax */
  ESI = (EAX);
  /* 11de2790 pop ecx */
  ECX = (pop32());
  /* 11de2791 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2793 jne 0x11de2799 */
  if (!C.zf) goto L_11de2799;
  /* 11de2795 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de2797 jmp 0x11de27a4 */
  goto L_11de27a4;
L_11de2799:;
  /* 11de2799 push ebp */
  push32((uint32_t)(EBP));
  /* 11de279a push edi */
  push32((uint32_t)(EDI));
  /* 11de279b push esi */
  push32((uint32_t)(ESI));
  /* 11de279c call 0x11de3b50 */
  push32(0x11de27a1u); f_11de3b50();
  /* 11de27a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de27a4:;
  /* 11de27a4 push edi */
  push32((uint32_t)(EDI));
  /* 11de27a5 call dword ptr [0x11de80d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80d0))), 0x11de27abu);
  /* 11de27ab mov eax, esi */
  EAX = (ESI);
  /* 11de27ad jmp 0x11de27b1 */
  goto L_11de27b1;
L_11de27af:;
  /* 11de27af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de27b1:;
  /* 11de27b1 pop edi */
  EDI = (pop32());
  /* 11de27b2 pop esi */
  ESI = (pop32());
  /* 11de27b3 pop ebp */
  EBP = (pop32());
  /* 11de27b4 pop ebx */
  EBX = (pop32());
  /* 11de27b5 pop ecx */
  ECX = (pop32());
  /* 11de27b6 pop ecx */
  ECX = (pop32());
  /* 11de27b7 ret  */
  ESPCHK(0x11de2686u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b8 @ 0x11de27b8 (45 bytes, 17 insns) */
void f_11de27b8(void) {
  FTRACE(0x11de27b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de27b8 push esi */
  push32((uint32_t)(ESI));
  /* 11de27b9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de27bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11de27bf and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11de27c2 call dword ptr [0x11de8074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8074))), 0x11de27c8u);
  /* 11de27c8 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de27cd jne 0x11de27e3 */
  if (!C.zf) goto L_11de27e3;
  /* 11de27cf mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11de27d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11de27d4 je 0x11de27e3 */
  if (C.zf) goto L_11de27e3;
  /* 11de27d6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de27d8 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11de27db mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11de27dd mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11de27e0 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11de27e3:;
  /* 11de27e3 pop esi */
  ESI = (pop32());
  /* 11de27e4 ret  */
  ESPCHK(0x11de27b8u, _esp0);
  ESP += 4; return;
}

/* FUN_100027e5 @ 0x11de27e5 (328 bytes, 115 insns) */
void f_11de27e5(void) {
  FTRACE(0x11de27e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de27e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11de27e6 mov ebp, esp */
  EBP = (ESP);
  /* 11de27e8 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11de27ed call 0x11de4240 */
  push32(0x11de27f2u); f_11de4240();
  /* 11de27f2 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11de27f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11de27f9 push eax */
  push32((uint32_t)(EAX));
  /* 11de27fa mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11de2804 call dword ptr [0x11de806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de806c))), 0x11de280au);
  /* 11de280a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de280c je 0x11de2828 */
  if (C.zf) goto L_11de2828;
  /* 11de280e cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2815 jne 0x11de2828 */
  if (!C.zf) goto L_11de2828;
  /* 11de2817 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de281e jb 0x11de2828 */
  if (C.cf) goto L_11de2828;
  /* 11de2820 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de2822 pop eax */
  EAX = (pop32());
  /* 11de2823 jmp 0x11de292a */
  goto L_11de292a;
L_11de2828:;
  /* 11de2828 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11de282e push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11de2833 push eax */
  push32((uint32_t)(EAX));
  /* 11de2834 push 0x11de81a8 */
  push32((uint32_t)(0x11de81a8u));
  /* 11de2839 call dword ptr [0x11de80b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80b0))), 0x11de283fu);
  /* 11de283f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2841 je 0x11de2917 */
  if (C.zf) goto L_11de2917;
  /* 11de2847 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2849 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11de284f cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2855 je 0x11de286a */
  if (C.zf) goto L_11de286a;
L_11de2857:;
  /* 11de2857 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11de2859 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de285b jl 0x11de2865 */
  if ((C.sf!=C.of)) goto L_11de2865;
  /* 11de285d cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de285f jg 0x11de2865 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de2865;
  /* 11de2861 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de2863 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11de2865:;
  /* 11de2865 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de2866 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2868 jne 0x11de2857 */
  if (!C.zf) goto L_11de2857;
L_11de286a:;
  /* 11de286a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11de2870 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11de2872 push eax */
  push32((uint32_t)(EAX));
  /* 11de2873 push 0x11de8190 */
  push32((uint32_t)(0x11de8190u));
  /* 11de2878 call 0x11de4200 */
  push32(0x11de287du); f_11de4200();
  /* 11de287d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2882 jne 0x11de288c */
  if (!C.zf) goto L_11de288c;
  /* 11de2884 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11de288a jmp 0x11de28d5 */
  goto L_11de28d5;
L_11de288c:;
  /* 11de288c lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11de2892 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11de2897 push eax */
  push32((uint32_t)(EAX));
  /* 11de2898 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2899 call dword ptr [0x11de80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80cc))), 0x11de289fu);
  /* 11de289f cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28a5 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11de28ab je 0x11de28c0 */
  if (C.zf) goto L_11de28c0;
L_11de28ad:;
  /* 11de28ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11de28af cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28b1 jl 0x11de28bb */
  if ((C.sf!=C.of)) goto L_11de28bb;
  /* 11de28b3 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28b5 jg 0x11de28bb */
  if ((!C.zf&&C.sf==C.of)) goto L_11de28bb;
  /* 11de28b7 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de28b9 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11de28bb:;
  /* 11de28bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de28bc cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28be jne 0x11de28ad */
  if (!C.zf) goto L_11de28ad;
L_11de28c0:;
  /* 11de28c0 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11de28c6 push eax */
  push32((uint32_t)(EAX));
  /* 11de28c7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11de28cd push eax */
  push32((uint32_t)(EAX));
  /* 11de28ce call 0x11de4180 */
  push32(0x11de28d3u); f_11de4180();
  /* 11de28d3 pop ecx */
  ECX = (pop32());
  /* 11de28d4 pop ecx */
  ECX = (pop32());
L_11de28d5:;
  /* 11de28d5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de28d7 je 0x11de2917 */
  if (C.zf) goto L_11de2917;
  /* 11de28d9 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11de28db push eax */
  push32((uint32_t)(EAX));
  /* 11de28dc call 0x11de40c0 */
  push32(0x11de28e1u); f_11de40c0();
  /* 11de28e1 pop ecx */
  ECX = (pop32());
  /* 11de28e2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de28e4 pop ecx */
  ECX = (pop32());
  /* 11de28e5 je 0x11de2917 */
  if (C.zf) goto L_11de2917;
  /* 11de28e7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de28e8 mov ecx, eax */
  ECX = (EAX);
  /* 11de28ea cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28ec je 0x11de28fc */
  if (C.zf) goto L_11de28fc;
L_11de28ee:;
  /* 11de28ee cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28f1 jne 0x11de28f7 */
  if (!C.zf) goto L_11de28f7;
  /* 11de28f3 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11de28f5 jmp 0x11de28f8 */
  goto L_11de28f8;
L_11de28f7:;
  /* 11de28f7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11de28f8:;
  /* 11de28f8 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de28fa jne 0x11de28ee */
  if (!C.zf) goto L_11de28ee;
L_11de28fc:;
  /* 11de28fc push 0xa */
  push32((uint32_t)(0xau));
  /* 11de28fe push ebx */
  push32((uint32_t)(EBX));
  /* 11de28ff push eax */
  push32((uint32_t)(EAX));
  /* 11de2900 call 0x11de3e85 */
  push32(0x11de2905u); f_11de3e85();
  /* 11de2905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2908 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de290b je 0x11de292a */
  if (C.zf) goto L_11de292a;
  /* 11de290d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2910 je 0x11de292a */
  if (C.zf) goto L_11de292a;
  /* 11de2912 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2915 je 0x11de292a */
  if (C.zf) goto L_11de292a;
L_11de2917:;
  /* 11de2917 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11de291a push eax */
  push32((uint32_t)(EAX));
  /* 11de291b call 0x11de27b8 */
  push32(0x11de2920u); f_11de27b8();
  /* 11de2920 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de2924 pop ecx */
  ECX = (pop32());
  /* 11de2925 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2927 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11de292a:;
  /* 11de292a pop ebx */
  EBX = (pop32());
  /* 11de292b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de292c ret  */
  ESPCHK(0x11de27e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000292d @ 0x11de292d (93 bytes, 30 insns) */
void f_11de292d(void) {
  FTRACE(0x11de292du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de292d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de292f push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2931 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2935 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11de293a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11de293d push eax */
  push32((uint32_t)(EAX));
  /* 11de293e call dword ptr [0x11de8070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8070))), 0x11de2944u);
  /* 11de2944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2946 mov dword ptr [0x11dec4a8], eax */
  w32((uint32_t)(0x11dec4a8), (EAX));
  /* 11de294b je 0x11de2983 */
  if (C.zf) goto L_11de2983;
  /* 11de294d call 0x11de27e5 */
  push32(0x11de2952u); f_11de27e5();
  /* 11de2952 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2955 mov dword ptr [0x11dec4ac], eax */
  w32((uint32_t)(0x11dec4ac), (EAX));
  /* 11de295a jne 0x11de2969 */
  if (!C.zf) goto L_11de2969;
  /* 11de295c push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11de2961 call 0x11de426f */
  push32(0x11de2966u); f_11de426f();
  /* 11de2966 pop ecx */
  ECX = (pop32());
  /* 11de2967 jmp 0x11de2973 */
  goto L_11de2973;
L_11de2969:;
  /* 11de2969 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de296c jne 0x11de2986 */
  if (!C.zf) goto L_11de2986;
  /* 11de296e call 0x11de4db6 */
  push32(0x11de2973u); f_11de4db6();
L_11de2973:;
  /* 11de2973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2975 jne 0x11de2986 */
  if (!C.zf) goto L_11de2986;
  /* 11de2977 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de297d call dword ptr [0x11de8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8068))), 0x11de2983u);
L_11de2983:;
  /* 11de2983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de2985 ret  */
  ESPCHK(0x11de292du, _esp0);
  ESP += 4; return;
L_11de2986:;
  /* 11de2986 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de2988 pop eax */
  EAX = (pop32());
  /* 11de2989 ret  */
  ESPCHK(0x11de292du, _esp0);
  ESP += 4; return;
}

/* FUN_1000298a @ 0x11de298a (168 bytes, 56 insns) */
void f_11de298a(void) {
  FTRACE(0x11de298au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de298a mov eax, dword ptr [0x11dec4ac] */
  EAX = (r32((uint32_t)(0x11dec4ac)));
  /* 11de298f push esi */
  push32((uint32_t)(ESI));
  /* 11de2990 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2993 push edi */
  push32((uint32_t)(EDI));
  /* 11de2994 jne 0x11de29fc */
  if (!C.zf) goto L_11de29fc;
  /* 11de2996 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2997 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2999 cmp dword ptr [0x11dec264], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec264))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de299f push ebp */
  push32((uint32_t)(EBP));
  /* 11de29a0 mov ebp, dword ptr [0x11de805c] */
  EBP = (r32((uint32_t)(0x11de805c)));
  /* 11de29a6 jle 0x11de29e8 */
  if ((C.zf||C.sf!=C.of)) goto L_11de29e8;
  /* 11de29a8 mov eax, dword ptr [0x11dec268] */
  EAX = (r32((uint32_t)(0x11dec268)));
  /* 11de29ad mov edi, dword ptr [0x11de8060] */
  EDI = (r32((uint32_t)(0x11de8060)));
  /* 11de29b3 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11de29b6:;
  /* 11de29b6 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11de29bb push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11de29c0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de29c2 call edi */
  call_ind((uint32_t)(EDI), 0x11de29c4u);
  /* 11de29c4 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11de29c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de29cb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de29cd call edi */
  call_ind((uint32_t)(EDI), 0x11de29cfu);
  /* 11de29cf push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11de29d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de29d4 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de29da call ebp */
  call_ind((uint32_t)(EBP), 0x11de29dcu);
  /* 11de29dc add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de29df inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de29e0 cmp ebx, dword ptr [0x11dec264] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dec264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de29e6 jl 0x11de29b6 */
  if ((C.sf!=C.of)) goto L_11de29b6;
L_11de29e8:;
  /* 11de29e8 push dword ptr [0x11dec268] */
  push32((uint32_t)(r32((uint32_t)(0x11dec268))));
  /* 11de29ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11de29f0 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de29f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11de29f8u);
  /* 11de29f8 pop ebp */
  EBP = (pop32());
  /* 11de29f9 pop ebx */
  EBX = (pop32());
  /* 11de29fa jmp 0x11de2a23 */
  goto L_11de2a23;
L_11de29fc:;
  /* 11de29fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de29ff jne 0x11de2a23 */
  if (!C.zf) goto L_11de2a23;
  /* 11de2a01 mov edi, 0x11de96f0 */
  EDI = (0x11de96f0u);
  /* 11de2a06 mov esi, edi */
  ESI = (EDI);
L_11de2a08:;
  /* 11de2a08 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11de2a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2a0d je 0x11de2a1d */
  if (C.zf) goto L_11de2a1d;
  /* 11de2a0f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11de2a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2a16 push eax */
  push32((uint32_t)(EAX));
  /* 11de2a17 call dword ptr [0x11de8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8060))), 0x11de2a1du);
L_11de2a1d:;
  /* 11de2a1d mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11de2a1f cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2a21 jne 0x11de2a08 */
  if (!C.zf) goto L_11de2a08;
L_11de2a23:;
  /* 11de2a23 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de2a29 call dword ptr [0x11de8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8068))), 0x11de2a2fu);
  /* 11de2a2f pop edi */
  EDI = (pop32());
  /* 11de2a30 pop esi */
  ESI = (pop32());
  /* 11de2a31 ret  */
  ESPCHK(0x11de298au, _esp0);
  ESP += 4; return;
}

/* FUN_10002a32 @ 0x11de2a32 (57 bytes, 18 insns) */
void f_11de2a32(void) {
  FTRACE(0x11de2a32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2a32 mov eax, dword ptr [0x11debf04] */
  EAX = (r32((uint32_t)(0x11debf04)));
  /* 11de2a37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2a3a je 0x11de2a49 */
  if (C.zf) goto L_11de2a49;
  /* 11de2a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2a3e jne 0x11de2a6a */
  if (!C.zf) goto L_11de2a6a;
  /* 11de2a40 cmp dword ptr [0x11debf08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debf08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2a47 jne 0x11de2a6a */
  if (!C.zf) goto L_11de2a6a;
L_11de2a49:;
  /* 11de2a49 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11de2a4e call 0x11de2a6b */
  push32(0x11de2a53u); f_11de2a6b();
  /* 11de2a53 mov eax, dword ptr [0x11dec058] */
  EAX = (r32((uint32_t)(0x11dec058)));
  /* 11de2a58 pop ecx */
  ECX = (pop32());
  /* 11de2a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2a5b je 0x11de2a5f */
  if (C.zf) goto L_11de2a5f;
  /* 11de2a5d call eax */
  call_ind((uint32_t)(EAX), 0x11de2a5fu);
L_11de2a5f:;
  /* 11de2a5f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11de2a64 call 0x11de2a6b */
  push32(0x11de2a69u); f_11de2a6b();
  /* 11de2a69 pop ecx */
  ECX = (pop32());
L_11de2a6a:;
  /* 11de2a6a ret  */
  ESPCHK(0x11de2a32u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a6b @ 0x11de2a6b (339 bytes, 100 insns) */
void f_11de2a6b(void) {
  FTRACE(0x11de2a6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2a6b push ebp */
  push32((uint32_t)(EBP));
  /* 11de2a6c mov ebp, esp */
  EBP = (ESP);
  /* 11de2a6e sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2a74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de2a77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de2a79 mov eax, 0x11de92f0 */
  EAX = (0x11de92f0u);
L_11de2a7e:;
  /* 11de2a7e cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2a80 je 0x11de2a8d */
  if (C.zf) goto L_11de2a8d;
  /* 11de2a82 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2a85 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de2a86 cmp eax, 0x11de9380 */
  { uint32_t _a=(EAX),_b=(0x11de9380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2a8b jl 0x11de2a7e */
  if ((C.sf!=C.of)) goto L_11de2a7e;
L_11de2a8d:;
  /* 11de2a8d push esi */
  push32((uint32_t)(ESI));
  /* 11de2a8e mov esi, ecx */
  ESI = (ECX);
  /* 11de2a90 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11de2a93 cmp edx, dword ptr [esi + 0x11de92f0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11de92f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2a99 jne 0x11de2bbb */
  if (!C.zf) goto L_11de2bbb;
  /* 11de2a9f mov eax, dword ptr [0x11debf04] */
  EAX = (r32((uint32_t)(0x11debf04)));
  /* 11de2aa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2aa7 je 0x11de2b95 */
  if (C.zf) goto L_11de2b95;
  /* 11de2aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2aaf jne 0x11de2abe */
  if (!C.zf) goto L_11de2abe;
  /* 11de2ab1 cmp dword ptr [0x11debf08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debf08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2ab8 je 0x11de2b95 */
  if (C.zf) goto L_11de2b95;
L_11de2abe:;
  /* 11de2abe cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2ac4 je 0x11de2bbb */
  if (C.zf) goto L_11de2bbb;
  /* 11de2aca lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11de2ad0 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11de2ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11de2ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2ad8 call dword ptr [0x11de80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80cc))), 0x11de2adeu);
  /* 11de2ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2ae0 jne 0x11de2af5 */
  if (!C.zf) goto L_11de2af5;
  /* 11de2ae2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11de2ae8 push 0x11de8498 */
  push32((uint32_t)(0x11de8498u));
  /* 11de2aed push eax */
  push32((uint32_t)(EAX));
  /* 11de2aee call 0x11de35f0 */
  push32(0x11de2af3u); f_11de35f0();
  /* 11de2af3 pop ecx */
  ECX = (pop32());
  /* 11de2af4 pop ecx */
  ECX = (pop32());
L_11de2af5:;
  /* 11de2af5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11de2afb push edi */
  push32((uint32_t)(EDI));
  /* 11de2afc push eax */
  push32((uint32_t)(EAX));
  /* 11de2afd lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11de2b03 call 0x11de36e0 */
  push32(0x11de2b08u); f_11de36e0();
  /* 11de2b08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de2b09 pop ecx */
  ECX = (pop32());
  /* 11de2b0a cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2b0d jbe 0x11de2b38 */
  if ((C.cf||C.zf)) goto L_11de2b38;
  /* 11de2b0f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11de2b15 push eax */
  push32((uint32_t)(EAX));
  /* 11de2b16 call 0x11de36e0 */
  push32(0x11de2b1bu); f_11de36e0();
  /* 11de2b1b mov edi, eax */
  EDI = (EAX);
  /* 11de2b1d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11de2b23 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2b26 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de2b28 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2b2a push 0x11de8494 */
  push32((uint32_t)(0x11de8494u));
  /* 11de2b2f push edi */
  push32((uint32_t)(EDI));
  /* 11de2b30 call 0x11de5510 */
  push32(0x11de2b35u); f_11de5510();
  /* 11de2b35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de2b38:;
  /* 11de2b38 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11de2b3e push 0x11de8478 */
  push32((uint32_t)(0x11de8478u));
  /* 11de2b43 push eax */
  push32((uint32_t)(EAX));
  /* 11de2b44 call 0x11de35f0 */
  push32(0x11de2b49u); f_11de35f0();
  /* 11de2b49 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11de2b4f push edi */
  push32((uint32_t)(EDI));
  /* 11de2b50 push eax */
  push32((uint32_t)(EAX));
  /* 11de2b51 call 0x11de3600 */
  push32(0x11de2b56u); f_11de3600();
  /* 11de2b56 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11de2b5c push 0x11de8474 */
  push32((uint32_t)(0x11de8474u));
  /* 11de2b61 push eax */
  push32((uint32_t)(EAX));
  /* 11de2b62 call 0x11de3600 */
  push32(0x11de2b67u); f_11de3600();
  /* 11de2b67 push dword ptr [esi + 0x11de92f4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11de92f4))));
  /* 11de2b6d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11de2b73 push eax */
  push32((uint32_t)(EAX));
  /* 11de2b74 call 0x11de3600 */
  push32(0x11de2b79u); f_11de3600();
  /* 11de2b79 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11de2b7e lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11de2b84 push 0x11de844c */
  push32((uint32_t)(0x11de844cu));
  /* 11de2b89 push eax */
  push32((uint32_t)(EAX));
  /* 11de2b8a call 0x11de5483 */
  push32(0x11de2b8fu); f_11de5483();
  /* 11de2b8f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2b92 pop edi */
  EDI = (pop32());
  /* 11de2b93 jmp 0x11de2bbb */
  goto L_11de2bbb;
L_11de2b95:;
  /* 11de2b95 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11de2b98 lea esi, [esi + 0x11de92f4] */
  ESI = ((uint32_t)(ESI + 0x11de92f4));
  /* 11de2b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2ba0 push eax */
  push32((uint32_t)(EAX));
  /* 11de2ba1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de2ba3 call 0x11de36e0 */
  push32(0x11de2ba8u); f_11de36e0();
  /* 11de2ba8 pop ecx */
  ECX = (pop32());
  /* 11de2ba9 push eax */
  push32((uint32_t)(EAX));
  /* 11de2baa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de2bac push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11de2bae call dword ptr [0x11de80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80c0))), 0x11de2bb4u);
  /* 11de2bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11de2bb5 call dword ptr [0x11de8064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8064))), 0x11de2bbbu);
L_11de2bbb:;
  /* 11de2bbb pop esi */
  ESI = (pop32());
  /* 11de2bbc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de2bbd ret  */
  ESPCHK(0x11de2a6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002bbe @ 0x11de2bbe (289 bytes, 98 insns) */
void f_11de2bbe(void) {
  FTRACE(0x11de2bbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2bbe push ebp */
  push32((uint32_t)(EBP));
  /* 11de2bbf mov ebp, esp */
  EBP = (ESP);
  /* 11de2bc1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de2bc3 push 0x11de84b0 */
  push32((uint32_t)(0x11de84b0u));
  /* 11de2bc8 push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de2bcd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de2bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11de2bd4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de2bdb sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2bde push ebx */
  push32((uint32_t)(EBX));
  /* 11de2bdf push esi */
  push32((uint32_t)(ESI));
  /* 11de2be0 push edi */
  push32((uint32_t)(EDI));
  /* 11de2be1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de2be4 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de2be8 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11de2beb mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11de2bee cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2bf1 ja 0x11de2c07 */
  if ((!C.cf&&!C.zf)) goto L_11de2c07;
  /* 11de2bf3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2bf5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2bf7 jne 0x11de2bfc */
  if (!C.zf) goto L_11de2bfc;
  /* 11de2bf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de2bfb pop esi */
  ESI = (pop32());
L_11de2bfc:;
  /* 11de2bfc add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2bff and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de2c02 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11de2c05 jmp 0x11de2c09 */
  goto L_11de2c09;
L_11de2c07:;
  /* 11de2c07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11de2c09:;
  /* 11de2c09 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11de2c0c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c0f ja 0x11de2cbd */
  if ((!C.cf&&!C.zf)) goto L_11de2cbd;
  /* 11de2c15 mov eax, dword ptr [0x11dec4ac] */
  EAX = (r32((uint32_t)(0x11dec4ac)));
  /* 11de2c1a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c1d jne 0x11de2c60 */
  if (!C.zf) goto L_11de2c60;
  /* 11de2c1f mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11de2c22 cmp edi, dword ptr [0x11dec26c] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11dec26c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c28 ja 0x11de2ca6 */
  if ((!C.cf&&!C.zf)) goto L_11de2ca6;
  /* 11de2c2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2c2c call 0x11de2d90 */
  push32(0x11de2c31u); f_11de2d90();
  /* 11de2c31 pop ecx */
  ECX = (pop32());
  /* 11de2c32 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11de2c35 push edi */
  push32((uint32_t)(EDI));
  /* 11de2c36 call 0x11de460b */
  push32(0x11de2c3bu); f_11de460b();
  /* 11de2c3b pop ecx */
  ECX = (pop32());
  /* 11de2c3c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11de2c3f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de2c43 call 0x11de2c57 */
  push32(0x11de2c48u); f_11de2c57();
  /* 11de2c48 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c4b je 0x11de2cab */
  if (C.zf) goto L_11de2cab;
  /* 11de2c4d push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11de2c50 jmp 0x11de2c9a */
  goto L_11de2c9a;
  /* 11de2c52 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2c54 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de2c57 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2c59 call 0x11de2df1 */
  push32(0x11de2c5eu); f_11de2df1();
  /* 11de2c5e pop ecx */
  ECX = (pop32());
  /* 11de2c5f ret  */
  ESPCHK(0x11de2bbeu, _esp0);
  ESP += 4; return;
L_11de2c60:;
  /* 11de2c60 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c63 jne 0x11de2ca6 */
  if (!C.zf) goto L_11de2ca6;
  /* 11de2c65 cmp esi, dword ptr [0x11deb714] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11deb714))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c6b ja 0x11de2ca6 */
  if ((!C.cf&&!C.zf)) goto L_11de2ca6;
  /* 11de2c6d push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2c6f call 0x11de2d90 */
  push32(0x11de2c74u); f_11de2d90();
  /* 11de2c74 pop ecx */
  ECX = (pop32());
  /* 11de2c75 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11de2c7c mov eax, esi */
  EAX = (ESI);
  /* 11de2c7e shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11de2c81 push eax */
  push32((uint32_t)(EAX));
  /* 11de2c82 call 0x11de50ae */
  push32(0x11de2c87u); f_11de50ae();
  /* 11de2c87 pop ecx */
  ECX = (pop32());
  /* 11de2c88 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11de2c8b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de2c8f call 0x11de2ce0 */
  push32(0x11de2c94u); f_11de2ce0();
  /* 11de2c94 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2c97 je 0x11de2cab */
  if (C.zf) goto L_11de2cab;
  /* 11de2c99 push esi */
  push32((uint32_t)(ESI));
L_11de2c9a:;
  /* 11de2c9a push ebx */
  push32((uint32_t)(EBX));
  /* 11de2c9b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11de2c9e call 0x11de5630 */
  push32(0x11de2ca3u); f_11de5630();
  /* 11de2ca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de2ca6:;
  /* 11de2ca6 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2ca9 jne 0x11de2ce9 */
  if (!C.zf) { jmp_ind(0x11de2ce9u); return; }
L_11de2cab:;
  /* 11de2cab push esi */
  push32((uint32_t)(ESI));
  /* 11de2cac push 8 */
  push32((uint32_t)(0x8u));
  /* 11de2cae push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de2cb4 call dword ptr [0x11de8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8054))), 0x11de2cbau);
  /* 11de2cba mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11de2cbd:;
  /* 11de2cbd cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2cc0 jne 0x11de2ce9 */
  if (!C.zf) { jmp_ind(0x11de2ce9u); return; }
  /* 11de2cc2 cmp dword ptr [0x11dec194], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec194))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2cc8 je 0x11de2ce9 */
  if (C.zf) { jmp_ind(0x11de2ce9u); return; }
  /* 11de2cca push esi */
  push32((uint32_t)(ESI));
  /* 11de2ccb call 0x11de560e */
  push32(0x11de2cd0u); f_11de560e();
  /* 11de2cd0 pop ecx */
  ECX = (pop32());
  /* 11de2cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2cd3 jne 0x11de2c09 */
  if (!C.zf) goto L_11de2c09;
  /* 11de2cd9 jmp 0x11de2cec */
  jmp_ind(0x11de2cecu); return;
  /* 11de2cdb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10002c57 @ 0x11de2c57 (9 bytes, 4 insns) */
void f_11de2c57(void) {
  FTRACE(0x11de2c57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2c57 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2c59 call 0x11de2df1 */
  push32(0x11de2c5eu); f_11de2df1();
  /* 11de2c5e pop ecx */
  ECX = (pop32());
  /* 11de2c5f ret  */
  ESPCHK(0x11de2c57u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x11de2ce0 (9 bytes, 4 insns) */
void f_11de2ce0(void) {
  FTRACE(0x11de2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2ce0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2ce2 call 0x11de2df1 */
  push32(0x11de2ce7u); f_11de2df1();
  /* 11de2ce7 pop ecx */
  ECX = (pop32());
  /* 11de2ce8 ret  */
  ESPCHK(0x11de2ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cfb @ 0x11de2cfb (41 bytes, 12 insns) */
void f_11de2cfb(void) {
  FTRACE(0x11de2cfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2cfb push esi */
  push32((uint32_t)(ESI));
  /* 11de2cfc mov esi, dword ptr [0x11de8050] */
  ESI = (r32((uint32_t)(0x11de8050)));
  /* 11de2d02 push dword ptr [0x11de93c4] */
  push32((uint32_t)(r32((uint32_t)(0x11de93c4))));
  /* 11de2d08 call esi */
  call_ind((uint32_t)(ESI), 0x11de2d0au);
  /* 11de2d0a push dword ptr [0x11de93b4] */
  push32((uint32_t)(r32((uint32_t)(0x11de93b4))));
  /* 11de2d10 call esi */
  call_ind((uint32_t)(ESI), 0x11de2d12u);
  /* 11de2d12 push dword ptr [0x11de93a4] */
  push32((uint32_t)(r32((uint32_t)(0x11de93a4))));
  /* 11de2d18 call esi */
  call_ind((uint32_t)(ESI), 0x11de2d1au);
  /* 11de2d1a push dword ptr [0x11de9384] */
  push32((uint32_t)(r32((uint32_t)(0x11de9384))));
  /* 11de2d20 call esi */
  call_ind((uint32_t)(ESI), 0x11de2d22u);
  /* 11de2d22 pop esi */
  ESI = (pop32());
  /* 11de2d23 ret  */
  ESPCHK(0x11de2cfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d24 @ 0x11de2d24 (108 bytes, 34 insns) */
void f_11de2d24(void) {
  FTRACE(0x11de2d24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2d24 push esi */
  push32((uint32_t)(ESI));
  /* 11de2d25 push edi */
  push32((uint32_t)(EDI));
  /* 11de2d26 mov edi, dword ptr [0x11de80c8] */
  EDI = (r32((uint32_t)(0x11de80c8)));
  /* 11de2d2c mov esi, 0x11de9380 */
  ESI = (0x11de9380u);
L_11de2d31:;
  /* 11de2d31 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de2d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2d35 je 0x11de2d62 */
  if (C.zf) goto L_11de2d62;
  /* 11de2d37 cmp esi, 0x11de93c4 */
  { uint32_t _a=(ESI),_b=(0x11de93c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2d3d je 0x11de2d62 */
  if (C.zf) goto L_11de2d62;
  /* 11de2d3f cmp esi, 0x11de93b4 */
  { uint32_t _a=(ESI),_b=(0x11de93b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2d45 je 0x11de2d62 */
  if (C.zf) goto L_11de2d62;
  /* 11de2d47 cmp esi, 0x11de93a4 */
  { uint32_t _a=(ESI),_b=(0x11de93a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2d4d je 0x11de2d62 */
  if (C.zf) goto L_11de2d62;
  /* 11de2d4f cmp esi, 0x11de9384 */
  { uint32_t _a=(ESI),_b=(0x11de9384u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2d55 je 0x11de2d62 */
  if (C.zf) goto L_11de2d62;
  /* 11de2d57 push eax */
  push32((uint32_t)(EAX));
  /* 11de2d58 call edi */
  call_ind((uint32_t)(EDI), 0x11de2d5au);
  /* 11de2d5a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de2d5c call 0x11de2e06 */
  push32(0x11de2d61u); f_11de2e06();
  /* 11de2d61 pop ecx */
  ECX = (pop32());
L_11de2d62:;
  /* 11de2d62 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2d65 cmp esi, 0x11de9440 */
  { uint32_t _a=(ESI),_b=(0x11de9440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2d6b jl 0x11de2d31 */
  if ((C.sf!=C.of)) goto L_11de2d31;
  /* 11de2d6d push dword ptr [0x11de93a4] */
  push32((uint32_t)(r32((uint32_t)(0x11de93a4))));
  /* 11de2d73 call edi */
  call_ind((uint32_t)(EDI), 0x11de2d75u);
  /* 11de2d75 push dword ptr [0x11de93b4] */
  push32((uint32_t)(r32((uint32_t)(0x11de93b4))));
  /* 11de2d7b call edi */
  call_ind((uint32_t)(EDI), 0x11de2d7du);
  /* 11de2d7d push dword ptr [0x11de93c4] */
  push32((uint32_t)(r32((uint32_t)(0x11de93c4))));
  /* 11de2d83 call edi */
  call_ind((uint32_t)(EDI), 0x11de2d85u);
  /* 11de2d85 push dword ptr [0x11de9384] */
  push32((uint32_t)(r32((uint32_t)(0x11de9384))));
  /* 11de2d8b call edi */
  call_ind((uint32_t)(EDI), 0x11de2d8du);
  /* 11de2d8d pop edi */
  EDI = (pop32());
  /* 11de2d8e pop esi */
  ESI = (pop32());
  /* 11de2d8f ret  */
  ESPCHK(0x11de2d24u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d90 @ 0x11de2d90 (97 bytes, 37 insns) */
void f_11de2d90(void) {
  FTRACE(0x11de2d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2d91 mov ebp, esp */
  EBP = (ESP);
  /* 11de2d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de2d96 push esi */
  push32((uint32_t)(ESI));
  /* 11de2d97 cmp dword ptr [eax*4 + 0x11de9380], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11de9380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2d9f lea esi, [eax*4 + 0x11de9380] */
  ESI = ((uint32_t)(EAX*4 + 0x11de9380));
  /* 11de2da6 jne 0x11de2de6 */
  if (!C.zf) goto L_11de2de6;
  /* 11de2da8 push edi */
  push32((uint32_t)(EDI));
  /* 11de2da9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11de2dab call 0x11de34b1 */
  push32(0x11de2db0u); f_11de34b1();
  /* 11de2db0 mov edi, eax */
  EDI = (EAX);
  /* 11de2db2 pop ecx */
  ECX = (pop32());
  /* 11de2db3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de2db5 jne 0x11de2dbf */
  if (!C.zf) goto L_11de2dbf;
  /* 11de2db7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11de2db9 call 0x11de1dd1 */
  push32(0x11de2dbeu); f_11de1dd1();
  /* 11de2dbe pop ecx */
  ECX = (pop32());
L_11de2dbf:;
  /* 11de2dbf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11de2dc1 call 0x11de2d90 */
  push32(0x11de2dc6u); f_11de2d90();
  /* 11de2dc6 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2dc9 pop ecx */
  ECX = (pop32());
  /* 11de2dca push edi */
  push32((uint32_t)(EDI));
  /* 11de2dcb jne 0x11de2dd7 */
  if (!C.zf) goto L_11de2dd7;
  /* 11de2dcd call dword ptr [0x11de8050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8050))), 0x11de2dd3u);
  /* 11de2dd3 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11de2dd5 jmp 0x11de2ddd */
  goto L_11de2ddd;
L_11de2dd7:;
  /* 11de2dd7 call 0x11de2e06 */
  push32(0x11de2ddcu); f_11de2e06();
  /* 11de2ddc pop ecx */
  ECX = (pop32());
L_11de2ddd:;
  /* 11de2ddd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11de2ddf call 0x11de2df1 */
  push32(0x11de2de4u); f_11de2df1();
  /* 11de2de4 pop ecx */
  ECX = (pop32());
  /* 11de2de5 pop edi */
  EDI = (pop32());
L_11de2de6:;
  /* 11de2de6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de2de8 call dword ptr [0x11de8058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8058))), 0x11de2deeu);
  /* 11de2dee pop esi */
  ESI = (pop32());
  /* 11de2def pop ebp */
  EBP = (pop32());
  /* 11de2df0 ret  */
  ESPCHK(0x11de2d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002df1 @ 0x11de2df1 (21 bytes, 7 insns) */
void f_11de2df1(void) {
  FTRACE(0x11de2df1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2df1 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2df2 mov ebp, esp */
  EBP = (ESP);
  /* 11de2df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de2df7 push dword ptr [eax*4 + 0x11de9380] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11de9380))));
  /* 11de2dfe call dword ptr [0x11de804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de804c))), 0x11de2e04u);
  /* 11de2e04 pop ebp */
  EBP = (pop32());
  /* 11de2e05 ret  */
  ESPCHK(0x11de2df1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e06 @ 0x11de2e06 (215 bytes, 76 insns) */
void f_11de2e06(void) {
  FTRACE(0x11de2e06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2e06 push ebp */
  push32((uint32_t)(EBP));
  /* 11de2e07 mov ebp, esp */
  EBP = (ESP);
  /* 11de2e09 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de2e0b push 0x11de84c8 */
  push32((uint32_t)(0x11de84c8u));
  /* 11de2e10 push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de2e15 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de2e1b push eax */
  push32((uint32_t)(EAX));
  /* 11de2e1c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de2e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2e26 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2e27 push esi */
  push32((uint32_t)(ESI));
  /* 11de2e28 push edi */
  push32((uint32_t)(EDI));
  /* 11de2e29 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de2e2c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de2e2e je 0x11de2ee0 */
  if (C.zf) { jmp_ind(0x11de2ee0u); return; }
  /* 11de2e34 mov eax, dword ptr [0x11dec4ac] */
  EAX = (r32((uint32_t)(0x11dec4ac)));
  /* 11de2e39 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2e3c jne 0x11de2e79 */
  if (!C.zf) goto L_11de2e79;
  /* 11de2e3e push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2e40 call 0x11de2d90 */
  push32(0x11de2e45u); f_11de2d90();
  /* 11de2e45 pop ecx */
  ECX = (pop32());
  /* 11de2e46 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de2e4a push esi */
  push32((uint32_t)(ESI));
  /* 11de2e4b call 0x11de42b7 */
  push32(0x11de2e50u); f_11de42b7();
  /* 11de2e50 pop ecx */
  ECX = (pop32());
  /* 11de2e51 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11de2e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2e56 je 0x11de2e61 */
  if (C.zf) goto L_11de2e61;
  /* 11de2e58 push esi */
  push32((uint32_t)(ESI));
  /* 11de2e59 push eax */
  push32((uint32_t)(EAX));
  /* 11de2e5a call 0x11de42e2 */
  push32(0x11de2e5fu); f_11de42e2();
  /* 11de2e5f pop ecx */
  ECX = (pop32());
  /* 11de2e60 pop ecx */
  ECX = (pop32());
L_11de2e61:;
  /* 11de2e61 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de2e65 call 0x11de2e70 */
  push32(0x11de2e6au); f_11de2e70();
  /* 11de2e6a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2e6e jmp 0x11de2ec1 */
  goto L_11de2ec1;
  /* 11de2e70 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2e72 call 0x11de2df1 */
  push32(0x11de2e77u); f_11de2df1();
  /* 11de2e77 pop ecx */
  ECX = (pop32());
  /* 11de2e78 ret  */
  ESPCHK(0x11de2e06u, _esp0);
  ESP += 4; return;
L_11de2e79:;
  /* 11de2e79 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2e7c jne 0x11de2ed1 */
  if (!C.zf) goto L_11de2ed1;
  /* 11de2e7e push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2e80 call 0x11de2d90 */
  push32(0x11de2e85u); f_11de2d90();
  /* 11de2e85 pop ecx */
  ECX = (pop32());
  /* 11de2e86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11de2e8d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11de2e90 push eax */
  push32((uint32_t)(EAX));
  /* 11de2e91 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11de2e94 push eax */
  push32((uint32_t)(EAX));
  /* 11de2e95 push esi */
  push32((uint32_t)(ESI));
  /* 11de2e96 call 0x11de5012 */
  push32(0x11de2e9bu); f_11de5012();
  /* 11de2e9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2e9e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de2ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de2ea3 je 0x11de2eb4 */
  if (C.zf) goto L_11de2eb4;
  /* 11de2ea5 push eax */
  push32((uint32_t)(EAX));
  /* 11de2ea6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11de2ea9 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11de2eac call 0x11de5069 */
  push32(0x11de2eb1u); f_11de5069();
  /* 11de2eb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de2eb4:;
  /* 11de2eb4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de2eb8 call 0x11de2ec8 */
  push32(0x11de2ebdu); f_11de2ec8();
  /* 11de2ebd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11de2ec1:;
  /* 11de2ec1 jne 0x11de2ee0 */
  if (!C.zf) { jmp_ind(0x11de2ee0u); return; }
  /* 11de2ec3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de2ec6 jmp 0x11de2ed2 */
  goto L_11de2ed2;
  /* 11de2ec8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2eca call 0x11de2df1 */
  push32(0x11de2ecfu); f_11de2df1();
  /* 11de2ecf pop ecx */
  ECX = (pop32());
  /* 11de2ed0 ret  */
  ESPCHK(0x11de2e06u, _esp0);
  ESP += 4; return;
L_11de2ed1:;
  /* 11de2ed1 push esi */
  push32((uint32_t)(ESI));
L_11de2ed2:;
  /* 11de2ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de2ed4 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de2edc pop esp */
  ESP = (pop32());
}

/* FUN_10002e70 @ 0x11de2e70 (9 bytes, 4 insns) */
void f_11de2e70(void) {
  FTRACE(0x11de2e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2e70 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2e72 call 0x11de2df1 */
  push32(0x11de2e77u); f_11de2df1();
  /* 11de2e77 pop ecx */
  ECX = (pop32());
  /* 11de2e78 ret  */
  ESPCHK(0x11de2e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec8 @ 0x11de2ec8 (9 bytes, 4 insns) */
void f_11de2ec8(void) {
  FTRACE(0x11de2ec8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2ec8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de2eca call 0x11de2df1 */
  push32(0x11de2ecfu); f_11de2df1();
  /* 11de2ecf pop ecx */
  ECX = (pop32());
  /* 11de2ed0 ret  */
  ESPCHK(0x11de2ec8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eef @ 0x11de2eef (46 bytes, 13 insns) */
void f_11de2eef(void) {
  FTRACE(0x11de2eefu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2eef cmp dword ptr [0x11dec178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2ef6 jne 0x11de2f1c */
  if (!C.zf) goto L_11de2f1c;
  /* 11de2ef8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11de2efa call 0x11de2d90 */
  push32(0x11de2effu); f_11de2d90();
  /* 11de2eff cmp dword ptr [0x11dec178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2f06 pop ecx */
  ECX = (pop32());
  /* 11de2f07 jne 0x11de2f14 */
  if (!C.zf) goto L_11de2f14;
  /* 11de2f09 call 0x11de2f1d */
  push32(0x11de2f0eu); f_11de2f1d();
  /* 11de2f0e inc dword ptr [0x11dec178] */
  { uint32_t _r=(r32((uint32_t)(0x11dec178)))+1; w32((uint32_t)(0x11dec178), (_r)); fl_inc(_r,32); }
L_11de2f14:;
  /* 11de2f14 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11de2f16 call 0x11de2df1 */
  push32(0x11de2f1bu); f_11de2df1();
  /* 11de2f1b pop ecx */
  ECX = (pop32());
L_11de2f1c:;
  /* 11de2f1c ret  */
  ESPCHK(0x11de2eefu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f1d @ 0x11de2f1d (647 bytes, 207 insns) */
void f_11de2f1d(void) {
  FTRACE(0x11de2f1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de2f1d push ebp */
  push32((uint32_t)(EBP));
  /* 11de2f1e mov ebp, esp */
  EBP = (ESP);
  /* 11de2f20 push ecx */
  push32((uint32_t)(ECX));
  /* 11de2f21 push ecx */
  push32((uint32_t)(ECX));
  /* 11de2f22 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2f23 push esi */
  push32((uint32_t)(ESI));
  /* 11de2f24 push edi */
  push32((uint32_t)(EDI));
  /* 11de2f25 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11de2f27 pop edi */
  EDI = (pop32());
  /* 11de2f28 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de2f2a push edi */
  push32((uint32_t)(EDI));
  /* 11de2f2b mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11de2f2e call 0x11de2d90 */
  push32(0x11de2f33u); f_11de2d90();
  /* 11de2f33 or dword ptr [0x11de9570], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11de9570)))|(0xffffffffu); w32((uint32_t)(0x11de9570), (_r)); fl_logic(_r,32); }
  /* 11de2f3a or dword ptr [0x11de9560], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11de9560)))|(0xffffffffu); w32((uint32_t)(0x11de9560), (_r)); fl_logic(_r,32); }
  /* 11de2f41 mov dword ptr [0x11dec0c0], ebx */
  w32((uint32_t)(0x11dec0c0), (EBX));
  /* 11de2f47 mov dword ptr [esp], 0x11de8520 */
  w32((uint32_t)(ESP), (0x11de8520u));
  /* 11de2f4e call 0x11de5974 */
  push32(0x11de2f53u); f_11de5974();
  /* 11de2f53 mov esi, eax */
  ESI = (EAX);
  /* 11de2f55 pop ecx */
  ECX = (pop32());
  /* 11de2f56 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2f58 jne 0x11de305b */
  if (!C.zf) goto L_11de305b;
  /* 11de2f5e push edi */
  push32((uint32_t)(EDI));
  /* 11de2f5f call 0x11de2df1 */
  push32(0x11de2f64u); f_11de2df1();
  /* 11de2f64 mov dword ptr [esp], 0x11dec0c8 */
  w32((uint32_t)(ESP), (0x11dec0c8u));
  /* 11de2f6b call dword ptr [0x11de807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de807c))), 0x11de2f71u);
  /* 11de2f71 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2f74 je 0x11de319f */
  if (C.zf) goto L_11de319f;
  /* 11de2f7a mov eax, dword ptr [0x11dec0c8] */
  EAX = (r32((uint32_t)(0x11dec0c8)));
  /* 11de2f7f mov ecx, dword ptr [0x11dec11c] */
  ECX = (r32((uint32_t)(0x11dec11c)));
  /* 11de2f85 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de2f88 cmp word ptr [0x11dec10e], bx */
  { uint32_t _a=(r16((uint32_t)(0x11dec10e))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de2f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11de2f91 pop edx */
  EDX = (pop32());
  /* 11de2f92 mov dword ptr [0x11de94c8], eax */
  w32((uint32_t)(0x11de94c8), (EAX));
  /* 11de2f97 mov dword ptr [0x11dec0c0], edx */
  w32((uint32_t)(0x11dec0c0), (EDX));
  /* 11de2f9d je 0x11de2fab */
  if (C.zf) goto L_11de2fab;
  /* 11de2f9f mov esi, ecx */
  ESI = (ECX);
  /* 11de2fa1 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de2fa4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de2fa6 mov dword ptr [0x11de94c8], eax */
  w32((uint32_t)(0x11de94c8), (EAX));
L_11de2fab:;
  /* 11de2fab cmp word ptr [0x11dec162], bx */
  { uint32_t _a=(r16((uint32_t)(0x11dec162))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de2fb2 je 0x11de2fcf */
  if (C.zf) goto L_11de2fcf;
  /* 11de2fb4 mov eax, dword ptr [0x11dec170] */
  EAX = (r32((uint32_t)(0x11dec170)));
  /* 11de2fb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de2fbb je 0x11de2fcf */
  if (C.zf) goto L_11de2fcf;
  /* 11de2fbd sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de2fbf mov dword ptr [0x11de94cc], edx */
  w32((uint32_t)(0x11de94cc), (EDX));
  /* 11de2fc5 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de2fc8 mov dword ptr [0x11de94d0], eax */
  w32((uint32_t)(0x11de94d0), (EAX));
  /* 11de2fcd jmp 0x11de2fdb */
  goto L_11de2fdb;
L_11de2fcf:;
  /* 11de2fcf mov dword ptr [0x11de94cc], ebx */
  w32((uint32_t)(0x11de94cc), (EBX));
  /* 11de2fd5 mov dword ptr [0x11de94d0], ebx */
  w32((uint32_t)(0x11de94d0), (EBX));
L_11de2fdb:;
  /* 11de2fdb lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11de2fde mov esi, dword ptr [0x11de80d8] */
  ESI = (r32((uint32_t)(0x11de80d8)));
  /* 11de2fe4 push eax */
  push32((uint32_t)(EAX));
  /* 11de2fe5 push ebx */
  push32((uint32_t)(EBX));
  /* 11de2fe6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de2fe8 mov edi, 0x220 */
  EDI = (0x220u);
  /* 11de2fed push dword ptr [0x11de9554] */
  push32((uint32_t)(r32((uint32_t)(0x11de9554))));
  /* 11de2ff3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de2ff5 push 0x11dec0cc */
  push32((uint32_t)(0x11dec0ccu));
  /* 11de2ffa push edi */
  push32((uint32_t)(EDI));
  /* 11de2ffb push dword ptr [0x11dec1b0] */
  push32((uint32_t)(r32((uint32_t)(0x11dec1b0))));
  /* 11de3001 call esi */
  call_ind((uint32_t)(ESI), 0x11de3003u);
  /* 11de3003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3005 je 0x11de3017 */
  if (C.zf) goto L_11de3017;
  /* 11de3007 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de300a jne 0x11de3017 */
  if (!C.zf) goto L_11de3017;
  /* 11de300c mov eax, dword ptr [0x11de9554] */
  EAX = (r32((uint32_t)(0x11de9554)));
  /* 11de3011 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11de3015 jmp 0x11de301f */
  goto L_11de301f;
L_11de3017:;
  /* 11de3017 mov eax, dword ptr [0x11de9554] */
  EAX = (r32((uint32_t)(0x11de9554)));
  /* 11de301c and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11de301f:;
  /* 11de301f lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11de3022 push eax */
  push32((uint32_t)(EAX));
  /* 11de3023 push ebx */
  push32((uint32_t)(EBX));
  /* 11de3024 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de3026 push dword ptr [0x11de9558] */
  push32((uint32_t)(r32((uint32_t)(0x11de9558))));
  /* 11de302c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de302e push 0x11dec120 */
  push32((uint32_t)(0x11dec120u));
  /* 11de3033 push edi */
  push32((uint32_t)(EDI));
  /* 11de3034 push dword ptr [0x11dec1b0] */
  push32((uint32_t)(r32((uint32_t)(0x11dec1b0))));
  /* 11de303a call esi */
  call_ind((uint32_t)(ESI), 0x11de303cu);
  /* 11de303c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de303e je 0x11de318e */
  if (C.zf) goto L_11de318e;
  /* 11de3044 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3047 jne 0x11de318e */
  if (!C.zf) goto L_11de318e;
  /* 11de304d mov eax, dword ptr [0x11de9558] */
  EAX = (r32((uint32_t)(0x11de9558)));
  /* 11de3052 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11de3056 jmp 0x11de319f */
  goto L_11de319f;
L_11de305b:;
  /* 11de305b cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de305e je 0x11de3198 */
  if (C.zf) goto L_11de3198;
  /* 11de3064 mov eax, dword ptr [0x11dec174] */
  EAX = (r32((uint32_t)(0x11dec174)));
  /* 11de3069 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de306b je 0x11de307e */
  if (C.zf) goto L_11de307e;
  /* 11de306d push eax */
  push32((uint32_t)(EAX));
  /* 11de306e push esi */
  push32((uint32_t)(ESI));
  /* 11de306f call 0x11de58f0 */
  push32(0x11de3074u); f_11de58f0();
  /* 11de3074 pop ecx */
  ECX = (pop32());
  /* 11de3075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3077 pop ecx */
  ECX = (pop32());
  /* 11de3078 je 0x11de3198 */
  if (C.zf) goto L_11de3198;
L_11de307e:;
  /* 11de307e push dword ptr [0x11dec174] */
  push32((uint32_t)(r32((uint32_t)(0x11dec174))));
  /* 11de3084 call 0x11de2e06 */
  push32(0x11de3089u); f_11de2e06();
  /* 11de3089 push esi */
  push32((uint32_t)(ESI));
  /* 11de308a call 0x11de36e0 */
  push32(0x11de308fu); f_11de36e0();
  /* 11de308f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de3090 push eax */
  push32((uint32_t)(EAX));
  /* 11de3091 call 0x11de34b1 */
  push32(0x11de3096u); f_11de34b1();
  /* 11de3096 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3099 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de309b mov dword ptr [0x11dec174], eax */
  w32((uint32_t)(0x11dec174), (EAX));
  /* 11de30a0 je 0x11de3198 */
  if (C.zf) goto L_11de3198;
  /* 11de30a6 push esi */
  push32((uint32_t)(ESI));
  /* 11de30a7 push eax */
  push32((uint32_t)(EAX));
  /* 11de30a8 call 0x11de35f0 */
  push32(0x11de30adu); f_11de35f0();
  /* 11de30ad push edi */
  push32((uint32_t)(EDI));
  /* 11de30ae call 0x11de2df1 */
  push32(0x11de30b3u); f_11de2df1();
  /* 11de30b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de30b5 push esi */
  push32((uint32_t)(ESI));
  /* 11de30b6 push dword ptr [0x11de9554] */
  push32((uint32_t)(r32((uint32_t)(0x11de9554))));
  /* 11de30bc call 0x11de5510 */
  push32(0x11de30c1u); f_11de5510();
  /* 11de30c1 mov eax, dword ptr [0x11de9554] */
  EAX = (r32((uint32_t)(0x11de9554)));
  /* 11de30c6 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de30c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de30cc and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11de30d0 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de30d3 jne 0x11de30dd */
  if (!C.zf) goto L_11de30dd;
  /* 11de30d5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11de30dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de30dd:;
  /* 11de30dd push esi */
  push32((uint32_t)(ESI));
  /* 11de30de call 0x11de5858 */
  push32(0x11de30e3u); f_11de5858();
  /* 11de30e3 pop ecx */
  ECX = (pop32());
  /* 11de30e4 mov bl, 0x30 */
  BL = (0x30u);
  /* 11de30e6 mov ecx, eax */
  ECX = (EAX);
  /* 11de30e8 imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de30ee mov dword ptr [0x11de94c8], ecx */
  w32((uint32_t)(0x11de94c8), (ECX));
L_11de30f4:;
  /* 11de30f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de30f6 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de30f8 je 0x11de3102 */
  if (C.zf) goto L_11de3102;
  /* 11de30fa cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de30fc jl 0x11de3105 */
  if ((C.sf!=C.of)) goto L_11de3105;
  /* 11de30fe cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3100 jg 0x11de3105 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de3105;
L_11de3102:;
  /* 11de3102 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3103 jmp 0x11de30f4 */
  goto L_11de30f4;
L_11de3105:;
  /* 11de3105 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3108 jne 0x11de3158 */
  if (!C.zf) goto L_11de3158;
  /* 11de310a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de310b push esi */
  push32((uint32_t)(ESI));
  /* 11de310c call 0x11de5858 */
  push32(0x11de3111u); f_11de5858();
  /* 11de3111 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3114 pop ecx */
  ECX = (pop32());
  /* 11de3115 mov ecx, dword ptr [0x11de94c8] */
  ECX = (r32((uint32_t)(0x11de94c8)));
  /* 11de311b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de311d mov dword ptr [0x11de94c8], ecx */
  w32((uint32_t)(0x11de94c8), (ECX));
L_11de3123:;
  /* 11de3123 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3125 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3127 jl 0x11de3130 */
  if ((C.sf!=C.of)) goto L_11de3130;
  /* 11de3129 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de312b jg 0x11de3130 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de3130;
  /* 11de312d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de312e jmp 0x11de3123 */
  goto L_11de3123;
L_11de3130:;
  /* 11de3130 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3133 jne 0x11de3158 */
  if (!C.zf) goto L_11de3158;
  /* 11de3135 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3136 push esi */
  push32((uint32_t)(ESI));
  /* 11de3137 call 0x11de5858 */
  push32(0x11de313cu); f_11de5858();
  /* 11de313c pop ecx */
  ECX = (pop32());
  /* 11de313d mov ecx, dword ptr [0x11de94c8] */
  ECX = (r32((uint32_t)(0x11de94c8)));
  /* 11de3143 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3145 mov dword ptr [0x11de94c8], ecx */
  w32((uint32_t)(0x11de94c8), (ECX));
L_11de314b:;
  /* 11de314b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de314d cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de314f jl 0x11de3158 */
  if ((C.sf!=C.of)) goto L_11de3158;
  /* 11de3151 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3153 jg 0x11de3158 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de3158;
  /* 11de3155 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3156 jmp 0x11de314b */
  goto L_11de314b;
L_11de3158:;
  /* 11de3158 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de315c je 0x11de3166 */
  if (C.zf) goto L_11de3166;
  /* 11de315e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de3160 mov dword ptr [0x11de94c8], ecx */
  w32((uint32_t)(0x11de94c8), (ECX));
L_11de3166:;
  /* 11de3166 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11de3169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de316b mov dword ptr [0x11de94cc], eax */
  w32((uint32_t)(0x11de94cc), (EAX));
  /* 11de3170 je 0x11de318e */
  if (C.zf) goto L_11de318e;
  /* 11de3172 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de3174 push esi */
  push32((uint32_t)(ESI));
  /* 11de3175 push dword ptr [0x11de9558] */
  push32((uint32_t)(r32((uint32_t)(0x11de9558))));
  /* 11de317b call 0x11de5510 */
  push32(0x11de3180u); f_11de5510();
  /* 11de3180 mov eax, dword ptr [0x11de9558] */
  EAX = (r32((uint32_t)(0x11de9558)));
  /* 11de3185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3188 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11de318c jmp 0x11de319f */
  goto L_11de319f;
L_11de318e:;
  /* 11de318e mov eax, dword ptr [0x11de9558] */
  EAX = (r32((uint32_t)(0x11de9558)));
  /* 11de3193 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11de3196 jmp 0x11de319f */
  goto L_11de319f;
L_11de3198:;
  /* 11de3198 push edi */
  push32((uint32_t)(EDI));
  /* 11de3199 call 0x11de2df1 */
  push32(0x11de319eu); f_11de2df1();
  /* 11de319e pop ecx */
  ECX = (pop32());
L_11de319f:;
  /* 11de319f pop edi */
  EDI = (pop32());
  /* 11de31a0 pop esi */
  ESI = (pop32());
  /* 11de31a1 pop ebx */
  EBX = (pop32());
  /* 11de31a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de31a3 ret  */
  ESPCHK(0x11de2f1du, _esp0);
  ESP += 4; return;
}

/* FUN_100031a4 @ 0x11de31a4 (33 bytes, 12 insns) */
void f_11de31a4(void) {
  FTRACE(0x11de31a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de31a4 push esi */
  push32((uint32_t)(ESI));
  /* 11de31a5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11de31a7 call 0x11de2d90 */
  push32(0x11de31acu); f_11de2d90();
  /* 11de31ac push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11de31b0 call 0x11de31c5 */
  push32(0x11de31b5u); f_11de31c5();
  /* 11de31b5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11de31b7 mov esi, eax */
  ESI = (EAX);
  /* 11de31b9 call 0x11de2df1 */
  push32(0x11de31beu); f_11de2df1();
  /* 11de31be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de31c1 mov eax, esi */
  EAX = (ESI);
  /* 11de31c3 pop esi */
  ESI = (pop32());
  /* 11de31c4 ret  */
  ESPCHK(0x11de31a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c5 @ 0x11de31c5 (428 bytes, 149 insns) */
void f_11de31c5(void) {
  FTRACE(0x11de31c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de31c5 push ebx */
  push32((uint32_t)(EBX));
  /* 11de31c6 push esi */
  push32((uint32_t)(ESI));
  /* 11de31c7 push edi */
  push32((uint32_t)(EDI));
  /* 11de31c8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de31ca cmp dword ptr [0x11de94cc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11de94cc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de31d0 jne 0x11de31d9 */
  if (!C.zf) goto L_11de31d9;
L_11de31d2:;
  /* 11de31d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de31d4 jmp 0x11de3325 */
  goto L_11de3325;
L_11de31d9:;
  /* 11de31d9 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11de31dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11de31df pop ebx */
  EBX = (pop32());
  /* 11de31e0 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11de31e3 cmp eax, dword ptr [0x11de9560] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11de9560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de31e9 jne 0x11de31f7 */
  if (!C.zf) goto L_11de31f7;
  /* 11de31eb cmp eax, dword ptr [0x11de9570] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11de9570))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de31f1 je 0x11de32f9 */
  if (C.zf) goto L_11de32f9;
L_11de31f7:;
  /* 11de31f7 cmp dword ptr [0x11dec0c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dec0c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de31fd je 0x11de32cf */
  if (C.zf) goto L_11de32cf;
  /* 11de3203 movzx ecx, word ptr [0x11dec16e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec16e))));
  /* 11de320a push ecx */
  push32((uint32_t)(ECX));
  /* 11de320b cmp word ptr [0x11dec160], di */
  { uint32_t _a=(r16((uint32_t)(0x11dec160))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de3212 movzx ecx, word ptr [0x11dec16c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec16c))));
  /* 11de3219 push ecx */
  push32((uint32_t)(ECX));
  /* 11de321a movzx ecx, word ptr [0x11dec16a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec16a))));
  /* 11de3221 push ecx */
  push32((uint32_t)(ECX));
  /* 11de3222 movzx ecx, word ptr [0x11dec168] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec168))));
  /* 11de3229 push ecx */
  push32((uint32_t)(ECX));
  /* 11de322a jne 0x11de3249 */
  if (!C.zf) goto L_11de3249;
  /* 11de322c movzx ecx, word ptr [0x11dec164] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec164))));
  /* 11de3233 push edi */
  push32((uint32_t)(EDI));
  /* 11de3234 push ecx */
  push32((uint32_t)(ECX));
  /* 11de3235 movzx ecx, word ptr [0x11dec166] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec166))));
  /* 11de323c push ecx */
  push32((uint32_t)(ECX));
  /* 11de323d movzx ecx, word ptr [0x11dec162] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec162))));
  /* 11de3244 push ecx */
  push32((uint32_t)(ECX));
  /* 11de3245 push eax */
  push32((uint32_t)(EAX));
  /* 11de3246 push ebx */
  push32((uint32_t)(EBX));
  /* 11de3247 jmp 0x11de325d */
  goto L_11de325d;
L_11de3249:;
  /* 11de3249 movzx ecx, word ptr [0x11dec166] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec166))));
  /* 11de3250 push ecx */
  push32((uint32_t)(ECX));
  /* 11de3251 push edi */
  push32((uint32_t)(EDI));
  /* 11de3252 movzx ecx, word ptr [0x11dec162] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11dec162))));
  /* 11de3259 push edi */
  push32((uint32_t)(EDI));
  /* 11de325a push ecx */
  push32((uint32_t)(ECX));
  /* 11de325b push eax */
  push32((uint32_t)(EAX));
  /* 11de325c push edi */
  push32((uint32_t)(EDI));
L_11de325d:;
  /* 11de325d push ebx */
  push32((uint32_t)(EBX));
  /* 11de325e call 0x11de3371 */
  push32(0x11de3263u); f_11de3371();
  /* 11de3263 movzx eax, word ptr [0x11dec11a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec11a))));
  /* 11de326a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de326d cmp word ptr [0x11dec10c], di */
  { uint32_t _a=(r16((uint32_t)(0x11dec10c))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11de3274 push eax */
  push32((uint32_t)(EAX));
  /* 11de3275 movzx eax, word ptr [0x11dec118] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec118))));
  /* 11de327c push eax */
  push32((uint32_t)(EAX));
  /* 11de327d movzx eax, word ptr [0x11dec116] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec116))));
  /* 11de3284 push eax */
  push32((uint32_t)(EAX));
  /* 11de3285 movzx eax, word ptr [0x11dec114] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec114))));
  /* 11de328c push eax */
  push32((uint32_t)(EAX));
  /* 11de328d jne 0x11de32b7 */
  if (!C.zf) goto L_11de32b7;
  /* 11de328f movzx eax, word ptr [0x11dec110] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec110))));
  /* 11de3296 push edi */
  push32((uint32_t)(EDI));
  /* 11de3297 push eax */
  push32((uint32_t)(EAX));
  /* 11de3298 movzx eax, word ptr [0x11dec112] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec112))));
  /* 11de329f push eax */
  push32((uint32_t)(EAX));
  /* 11de32a0 movzx eax, word ptr [0x11dec10e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec10e))));
  /* 11de32a7 push eax */
  push32((uint32_t)(EAX));
  /* 11de32a8 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11de32ab push ebx */
  push32((uint32_t)(EBX));
L_11de32ac:;
  /* 11de32ac push edi */
  push32((uint32_t)(EDI));
  /* 11de32ad call 0x11de3371 */
  push32(0x11de32b2u); f_11de3371();
  /* 11de32b2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de32b5 jmp 0x11de32f9 */
  goto L_11de32f9;
L_11de32b7:;
  /* 11de32b7 movzx eax, word ptr [0x11dec112] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec112))));
  /* 11de32be push eax */
  push32((uint32_t)(EAX));
  /* 11de32bf push edi */
  push32((uint32_t)(EDI));
  /* 11de32c0 movzx eax, word ptr [0x11dec10e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11dec10e))));
  /* 11de32c7 push edi */
  push32((uint32_t)(EDI));
  /* 11de32c8 push eax */
  push32((uint32_t)(EAX));
  /* 11de32c9 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11de32cc push edi */
  push32((uint32_t)(EDI));
  /* 11de32cd jmp 0x11de32ac */
  goto L_11de32ac;
L_11de32cf:;
  /* 11de32cf push edi */
  push32((uint32_t)(EDI));
  /* 11de32d0 push edi */
  push32((uint32_t)(EDI));
  /* 11de32d1 push edi */
  push32((uint32_t)(EDI));
  /* 11de32d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de32d4 push edi */
  push32((uint32_t)(EDI));
  /* 11de32d5 push edi */
  push32((uint32_t)(EDI));
  /* 11de32d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11de32d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11de32d9 push eax */
  push32((uint32_t)(EAX));
  /* 11de32da push ebx */
  push32((uint32_t)(EBX));
  /* 11de32db push ebx */
  push32((uint32_t)(EBX));
  /* 11de32dc call 0x11de3371 */
  push32(0x11de32e1u); f_11de3371();
  /* 11de32e1 push edi */
  push32((uint32_t)(EDI));
  /* 11de32e2 push edi */
  push32((uint32_t)(EDI));
  /* 11de32e3 push edi */
  push32((uint32_t)(EDI));
  /* 11de32e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de32e6 push edi */
  push32((uint32_t)(EDI));
  /* 11de32e7 push edi */
  push32((uint32_t)(EDI));
  /* 11de32e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11de32ea push 0xa */
  push32((uint32_t)(0xau));
  /* 11de32ec push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11de32ef push ebx */
  push32((uint32_t)(EBX));
  /* 11de32f0 push edi */
  push32((uint32_t)(EDI));
  /* 11de32f1 call 0x11de3371 */
  push32(0x11de32f6u); f_11de3371();
  /* 11de32f6 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de32f9:;
  /* 11de32f9 mov edx, dword ptr [0x11de9564] */
  EDX = (r32((uint32_t)(0x11de9564)));
  /* 11de32ff mov eax, dword ptr [0x11de9574] */
  EAX = (r32((uint32_t)(0x11de9574)));
  /* 11de3304 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11de3307 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3309 jge 0x11de3329 */
  if ((C.sf==C.of)) goto L_11de3329;
  /* 11de330b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de330d jl 0x11de31d2 */
  if ((C.sf!=C.of)) goto L_11de31d2;
  /* 11de3313 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3315 jg 0x11de31d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de31d2;
  /* 11de331b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de331d jle 0x11de333d */
  if ((C.zf||C.sf!=C.of)) goto L_11de333d;
  /* 11de331f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3321 jge 0x11de333d */
  if ((C.sf==C.of)) goto L_11de333d;
L_11de3323:;
  /* 11de3323 mov eax, ebx */
  EAX = (EBX);
L_11de3325:;
  /* 11de3325 pop edi */
  EDI = (pop32());
  /* 11de3326 pop esi */
  ESI = (pop32());
  /* 11de3327 pop ebx */
  EBX = (pop32());
  /* 11de3328 ret  */
  ESPCHK(0x11de31c5u, _esp0);
  ESP += 4; return;
L_11de3329:;
  /* 11de3329 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de332b jl 0x11de3323 */
  if ((C.sf!=C.of)) goto L_11de3323;
  /* 11de332d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de332f jg 0x11de3323 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de3323;
  /* 11de3331 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3333 jle 0x11de333d */
  if ((C.zf||C.sf!=C.of)) goto L_11de333d;
  /* 11de3335 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3337 jl 0x11de31d2 */
  if ((C.sf!=C.of)) goto L_11de31d2;
L_11de333d:;
  /* 11de333d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11de3340 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3343 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3346 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3349 add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de334b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3351 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3353 jne 0x11de3364 */
  if (!C.zf) goto L_11de3364;
  /* 11de3355 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de3357 cmp eax, dword ptr [0x11de9568] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11de9568))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de335d setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11de3360:;
  /* 11de3360 mov eax, ecx */
  EAX = (ECX);
  /* 11de3362 jmp 0x11de3325 */
  goto L_11de3325;
L_11de3364:;
  /* 11de3364 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de3366 cmp eax, dword ptr [0x11de9578] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11de9578))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de336c setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11de336f jmp 0x11de3360 */
  goto L_11de3360;
}

/* FUN_10003371 @ 0x11de3371 (320 bytes, 101 insns) */
void f_11de3371(void) {
  FTRACE(0x11de3371u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3371 push ebp */
  push32((uint32_t)(EBP));
  /* 11de3372 mov ebp, esp */
  EBP = (ESP);
  /* 11de3374 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3378 push ebx */
  push32((uint32_t)(EBX));
  /* 11de3379 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de337c push esi */
  push32((uint32_t)(ESI));
  /* 11de337d jne 0x11de340c */
  if (!C.zf) goto L_11de340c;
  /* 11de3383 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de3386 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11de3389 and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11de338d mov esi, eax */
  ESI = (EAX);
  /* 11de338f jne 0x11de339c */
  if (!C.zf) goto L_11de339c;
  /* 11de3391 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11de3394 mov eax, dword ptr [esi + 0x11de9578] */
  EAX = (r32((uint32_t)(ESI + 0x11de9578)));
  /* 11de339a jmp 0x11de33a5 */
  goto L_11de33a5;
L_11de339c:;
  /* 11de339c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11de339f mov eax, dword ptr [esi + 0x11de95ac] */
  EAX = (r32((uint32_t)(ESI + 0x11de95ac)));
L_11de33a5:;
  /* 11de33a5 mov edx, ebx */
  EDX = (EBX);
  /* 11de33a7 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11de33aa imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de33b0 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11de33b3 push edi */
  push32((uint32_t)(EDI));
  /* 11de33b4 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de33b7 mov edi, ecx */
  EDI = (ECX);
  /* 11de33b9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11de33bb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de33bd lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11de33c4 pop edi */
  EDI = (pop32());
  /* 11de33c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11de33c6 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11de33c8 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11de33cb pop edi */
  EDI = (pop32());
  /* 11de33cc cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de33cf jg 0x11de33df */
  if ((!C.zf&&C.sf==C.of)) goto L_11de33df;
  /* 11de33d1 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de33d4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de33d6 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de33d9 lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11de33dd jmp 0x11de33e9 */
  goto L_11de33e9;
L_11de33df:;
  /* 11de33df imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de33e2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de33e4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de33e7 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11de33e9:;
  /* 11de33e9 cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de33ed jne 0x11de3427 */
  if (!C.zf) goto L_11de3427;
  /* 11de33ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de33f3 jne 0x11de33fd */
  if (!C.zf) goto L_11de33fd;
  /* 11de33f5 mov esi, dword ptr [esi + 0x11de957c] */
  ESI = (r32((uint32_t)(ESI + 0x11de957c)));
  /* 11de33fb jmp 0x11de3403 */
  goto L_11de3403;
L_11de33fd:;
  /* 11de33fd mov esi, dword ptr [esi + 0x11de95b0] */
  ESI = (r32((uint32_t)(ESI + 0x11de95b0)));
L_11de3403:;
  /* 11de3403 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3405 jle 0x11de3427 */
  if ((C.zf||C.sf!=C.of)) goto L_11de3427;
  /* 11de3407 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de340a jmp 0x11de3427 */
  goto L_11de3427;
L_11de340c:;
  /* 11de340c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de340f test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11de3412 jne 0x11de341d */
  if (!C.zf) goto L_11de341d;
  /* 11de3414 mov ecx, dword ptr [eax*4 + 0x11de9578] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11de9578)));
  /* 11de341b jmp 0x11de3424 */
  goto L_11de3424;
L_11de341d:;
  /* 11de341d mov ecx, dword ptr [eax*4 + 0x11de95ac] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11de95ac)));
L_11de3424:;
  /* 11de3424 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11de3427:;
  /* 11de3427 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de342b jne 0x11de3458 */
  if (!C.zf) goto L_11de3458;
  /* 11de342d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11de3430 mov dword ptr [0x11de9564], ecx */
  w32((uint32_t)(0x11de9564), (ECX));
  /* 11de3436 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3439 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de343c mov dword ptr [0x11de9560], ebx */
  w32((uint32_t)(0x11de9560), (EBX));
  /* 11de3442 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3445 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3448 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de344e add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3451 mov dword ptr [0x11de9568], eax */
  w32((uint32_t)(0x11de9568), (EAX));
  /* 11de3456 jmp 0x11de34ad */
  goto L_11de34ad;
L_11de3458:;
  /* 11de3458 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11de345b mov dword ptr [0x11de9574], ecx */
  w32((uint32_t)(0x11de9574), (ECX));
  /* 11de3461 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3464 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3467 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de346a add eax, dword ptr [0x11de94d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11de94d0))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3470 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3473 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3479 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de347c mov dword ptr [0x11de9578], eax */
  w32((uint32_t)(0x11de9578), (EAX));
  /* 11de3481 jns 0x11de3490 */
  if (!C.sf) goto L_11de3490;
  /* 11de3483 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3488 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de3489 mov dword ptr [0x11de9578], eax */
  w32((uint32_t)(0x11de9578), (EAX));
  /* 11de348e jmp 0x11de34a1 */
  goto L_11de34a1;
L_11de3490:;
  /* 11de3490 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11de3495 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3497 jl 0x11de34a7 */
  if ((C.sf!=C.of)) goto L_11de34a7;
  /* 11de3499 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de349b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de349c mov dword ptr [0x11de9578], eax */
  w32((uint32_t)(0x11de9578), (EAX));
L_11de34a1:;
  /* 11de34a1 mov dword ptr [0x11de9574], ecx */
  w32((uint32_t)(0x11de9574), (ECX));
L_11de34a7:;
  /* 11de34a7 mov dword ptr [0x11de9570], ebx */
  w32((uint32_t)(0x11de9570), (EBX));
L_11de34ad:;
  /* 11de34ad pop esi */
  ESI = (pop32());
  /* 11de34ae pop ebx */
  EBX = (pop32());
  /* 11de34af pop ebp */
  EBP = (pop32());
  /* 11de34b0 ret  */
  ESPCHK(0x11de3371u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11de34b1 (18 bytes, 6 insns) */
void f_11de34b1(void) {
  FTRACE(0x11de34b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de34b1 push dword ptr [0x11dec194] */
  push32((uint32_t)(r32((uint32_t)(0x11dec194))));
  /* 11de34b7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11de34bb call 0x11de34c3 */
  push32(0x11de34c0u); f_11de34c3();
  /* 11de34c0 pop ecx */
  ECX = (pop32());
  /* 11de34c1 pop ecx */
  ECX = (pop32());
  /* 11de34c2 ret  */
  ESPCHK(0x11de34b1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11de34c3 (44 bytes, 16 insns) */
void f_11de34c3(void) {
  FTRACE(0x11de34c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de34c3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de34c8 ja 0x11de34ec */
  if ((!C.cf&&!C.zf)) goto L_11de34ec;
L_11de34ca:;
  /* 11de34ca push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11de34ce call 0x11de34ef */
  push32(0x11de34d3u); f_11de34ef();
  /* 11de34d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de34d5 pop ecx */
  ECX = (pop32());
  /* 11de34d6 jne 0x11de34ee */
  if (!C.zf) goto L_11de34ee;
  /* 11de34d8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de34dc je 0x11de34ee */
  if (C.zf) goto L_11de34ee;
  /* 11de34de push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11de34e2 call 0x11de560e */
  push32(0x11de34e7u); f_11de560e();
  /* 11de34e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de34e9 pop ecx */
  ECX = (pop32());
  /* 11de34ea jne 0x11de34ca */
  if (!C.zf) goto L_11de34ca;
L_11de34ec:;
  /* 11de34ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de34ee:;
  /* 11de34ee ret  */
  ESPCHK(0x11de34c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100034ef @ 0x11de34ef (231 bytes, 81 insns) */
void f_11de34ef(void) {
  FTRACE(0x11de34efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de34ef push ebp */
  push32((uint32_t)(EBP));
  /* 11de34f0 mov ebp, esp */
  EBP = (ESP);
  /* 11de34f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de34f4 push 0x11de8528 */
  push32((uint32_t)(0x11de8528u));
  /* 11de34f9 push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de34fe mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de3504 push eax */
  push32((uint32_t)(EAX));
  /* 11de3505 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de350c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de350f push ebx */
  push32((uint32_t)(EBX));
  /* 11de3510 push esi */
  push32((uint32_t)(ESI));
  /* 11de3511 push edi */
  push32((uint32_t)(EDI));
  /* 11de3512 mov eax, dword ptr [0x11dec4ac] */
  EAX = (r32((uint32_t)(0x11dec4ac)));
  /* 11de3517 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de351a jne 0x11de355f */
  if (!C.zf) goto L_11de355f;
  /* 11de351c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de351f cmp esi, dword ptr [0x11dec26c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dec26c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3525 ja 0x11de35be */
  if ((!C.cf&&!C.zf)) goto L_11de35be;
  /* 11de352b push 9 */
  push32((uint32_t)(0x9u));
  /* 11de352d call 0x11de2d90 */
  push32(0x11de3532u); f_11de2d90();
  /* 11de3532 pop ecx */
  ECX = (pop32());
  /* 11de3533 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de3537 push esi */
  push32((uint32_t)(ESI));
  /* 11de3538 call 0x11de460b */
  push32(0x11de353du); f_11de460b();
  /* 11de353d pop ecx */
  ECX = (pop32());
  /* 11de353e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11de3541 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de3545 call 0x11de3556 */
  push32(0x11de354au); f_11de3556();
  /* 11de354a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11de354d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de354f je 0x11de35be */
  if (C.zf) goto L_11de35be;
  /* 11de3551 jmp 0x11de35dc */
  jmp_ind(0x11de35dcu); return;
  /* 11de3556 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de3558 call 0x11de2df1 */
  push32(0x11de355du); f_11de2df1();
  /* 11de355d pop ecx */
  ECX = (pop32());
  /* 11de355e ret  */
  ESPCHK(0x11de34efu, _esp0);
  ESP += 4; return;
L_11de355f:;
  /* 11de355f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3562 jne 0x11de35be */
  if (!C.zf) goto L_11de35be;
  /* 11de3564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3569 je 0x11de3573 */
  if (C.zf) goto L_11de3573;
  /* 11de356b lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11de356e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de3571 jmp 0x11de3576 */
  goto L_11de3576;
L_11de3573:;
  /* 11de3573 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11de3575 pop esi */
  ESI = (pop32());
L_11de3576:;
  /* 11de3576 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11de3579 cmp esi, dword ptr [0x11deb714] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11deb714))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de357f ja 0x11de35af */
  if ((!C.cf&&!C.zf)) goto L_11de35af;
  /* 11de3581 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de3583 call 0x11de2d90 */
  push32(0x11de3588u); f_11de2d90();
  /* 11de3588 pop ecx */
  ECX = (pop32());
  /* 11de3589 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11de3590 mov eax, esi */
  EAX = (ESI);
  /* 11de3592 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11de3595 push eax */
  push32((uint32_t)(EAX));
  /* 11de3596 call 0x11de50ae */
  push32(0x11de359bu); f_11de50ae();
  /* 11de359b pop ecx */
  ECX = (pop32());
  /* 11de359c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11de359f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de35a3 call 0x11de35b5 */
  push32(0x11de35a8u); f_11de35b5();
  /* 11de35a8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11de35ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de35ad jne 0x11de35dc */
  if (!C.zf) { jmp_ind(0x11de35dcu); return; }
L_11de35af:;
  /* 11de35af push esi */
  push32((uint32_t)(ESI));
  /* 11de35b0 jmp 0x11de35ce */
  goto L_11de35ce;
  /* 11de35b2 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de35b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de35b7 call 0x11de2df1 */
  push32(0x11de35bcu); f_11de2df1();
  /* 11de35bc pop ecx */
  ECX = (pop32());
  /* 11de35bd ret  */
  ESPCHK(0x11de34efu, _esp0);
  ESP += 4; return;
L_11de35be:;
  /* 11de35be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de35c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de35c3 jne 0x11de35c8 */
  if (!C.zf) goto L_11de35c8;
  /* 11de35c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de35c7 pop eax */
  EAX = (pop32());
L_11de35c8:;
  /* 11de35c8 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de35cb and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11de35cd push eax */
  push32((uint32_t)(EAX));
L_11de35ce:;
  /* 11de35ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11de35d0 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
}

/* FUN_10003556 @ 0x11de3556 (9 bytes, 4 insns) */
void f_11de3556(void) {
  FTRACE(0x11de3556u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3556 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de3558 call 0x11de2df1 */
  push32(0x11de355du); f_11de2df1();
  /* 11de355d pop ecx */
  ECX = (pop32());
  /* 11de355e ret  */
  ESPCHK(0x11de3556u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b5 @ 0x11de35b5 (9 bytes, 4 insns) */
void f_11de35b5(void) {
  FTRACE(0x11de35b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de35b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de35b7 call 0x11de2df1 */
  push32(0x11de35bcu); f_11de2df1();
  /* 11de35bc pop ecx */
  ECX = (pop32());
  /* 11de35bd ret  */
  ESPCHK(0x11de35b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f0 @ 0x11de35f0 (7 bytes, 3 insns) */
void f_11de35f0(void) {
  FTRACE(0x11de35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de35f0 push edi */
  push32((uint32_t)(EDI));
  /* 11de35f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de35f5 jmp 0x11de3661 */
  jmp_ind(0x11de3661u); return;
}

/* FUN_10003600 @ 0x11de3600 (224 bytes, 84 insns) */
void f_11de3600(void) {
  FTRACE(0x11de3600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3600 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de3604 push edi */
  push32((uint32_t)(EDI));
  /* 11de3605 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11de360b je 0x11de361c */
  if (C.zf) goto L_11de361c;
L_11de360d:;
  /* 11de360d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11de360f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de3610 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de3612 je 0x11de364f */
  if (C.zf) goto L_11de364f;
  /* 11de3614 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11de361a jne 0x11de360d */
  if (!C.zf) goto L_11de360d;
L_11de361c:;
  /* 11de361c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11de361e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11de3623 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3625 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de3628 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11de362a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de362d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11de3632 je 0x11de361c */
  if (C.zf) goto L_11de361c;
  /* 11de3634 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11de3637 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de3639 je 0x11de365e */
  if (C.zf) goto L_11de365e;
  /* 11de363b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11de363d je 0x11de3659 */
  if (C.zf) goto L_11de3659;
  /* 11de363f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11de3644 je 0x11de3654 */
  if (C.zf) goto L_11de3654;
  /* 11de3646 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11de364b je 0x11de364f */
  if (C.zf) goto L_11de364f;
  /* 11de364d jmp 0x11de361c */
  goto L_11de361c;
L_11de364f:;
  /* 11de364f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11de3652 jmp 0x11de3661 */
  goto L_11de3661;
L_11de3654:;
  /* 11de3654 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11de3657 jmp 0x11de3661 */
  goto L_11de3661;
L_11de3659:;
  /* 11de3659 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11de365c jmp 0x11de3661 */
  goto L_11de3661;
L_11de365e:;
  /* 11de365e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11de3661:;
  /* 11de3661 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11de3665 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11de366b je 0x11de3686 */
  if (C.zf) goto L_11de3686;
L_11de366d:;
  /* 11de366d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11de366f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de3670 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de3672 je 0x11de36d8 */
  if (C.zf) goto L_11de36d8;
  /* 11de3674 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11de3676 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de3677 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11de367d jne 0x11de366d */
  if (!C.zf) goto L_11de366d;
  /* 11de367f jmp 0x11de3686 */
  goto L_11de3686;
L_11de3681:;
  /* 11de3681 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11de3683 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11de3686:;
  /* 11de3686 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11de368b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11de368d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de368f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de3692 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11de3694 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11de3696 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3699 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11de369e je 0x11de3681 */
  if (C.zf) goto L_11de3681;
  /* 11de36a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de36a2 je 0x11de36d8 */
  if (C.zf) goto L_11de36d8;
  /* 11de36a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11de36a6 je 0x11de36cf */
  if (C.zf) goto L_11de36cf;
  /* 11de36a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11de36ae je 0x11de36c2 */
  if (C.zf) goto L_11de36c2;
  /* 11de36b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11de36b6 je 0x11de36ba */
  if (C.zf) goto L_11de36ba;
  /* 11de36b8 jmp 0x11de3681 */
  goto L_11de3681;
L_11de36ba:;
  /* 11de36ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11de36bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de36c0 pop edi */
  EDI = (pop32());
  /* 11de36c1 ret  */
  ESPCHK(0x11de3600u, _esp0);
  ESP += 4; return;
L_11de36c2:;
  /* 11de36c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11de36c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de36c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11de36cd pop edi */
  EDI = (pop32());
  /* 11de36ce ret  */
  ESPCHK(0x11de3600u, _esp0);
  ESP += 4; return;
L_11de36cf:;
  /* 11de36cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11de36d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de36d6 pop edi */
  EDI = (pop32());
  /* 11de36d7 ret  */
  ESPCHK(0x11de3600u, _esp0);
  ESP += 4; return;
L_11de36d8:;
  /* 11de36d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11de36da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de36de pop edi */
  EDI = (pop32());
  /* 11de36df ret  */
  ESPCHK(0x11de3600u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11de36e0 (123 bytes, 44 insns) */
void f_11de36e0(void) {
  FTRACE(0x11de36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de36e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de36e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11de36ea je 0x11de3700 */
  if (C.zf) goto L_11de3700;
L_11de36ec:;
  /* 11de36ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11de36ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de36ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de36f1 je 0x11de3733 */
  if (C.zf) goto L_11de3733;
  /* 11de36f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11de36f9 jne 0x11de36ec */
  if (!C.zf) goto L_11de36ec;
  /* 11de36fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11de3700:;
  /* 11de3700 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11de3702 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11de3707 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3709 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de370c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11de370e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3711 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11de3716 je 0x11de3700 */
  if (C.zf) goto L_11de3700;
  /* 11de3718 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11de371b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de371d je 0x11de3751 */
  if (C.zf) goto L_11de3751;
  /* 11de371f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11de3721 je 0x11de3747 */
  if (C.zf) goto L_11de3747;
  /* 11de3723 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11de3728 je 0x11de373d */
  if (C.zf) goto L_11de373d;
  /* 11de372a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11de372f je 0x11de3733 */
  if (C.zf) goto L_11de3733;
  /* 11de3731 jmp 0x11de3700 */
  goto L_11de3700;
L_11de3733:;
  /* 11de3733 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11de3736 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de373a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de373c ret  */
  ESPCHK(0x11de36e0u, _esp0);
  ESP += 4; return;
L_11de373d:;
  /* 11de373d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11de3740 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de3744 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3746 ret  */
  ESPCHK(0x11de36e0u, _esp0);
  ESP += 4; return;
L_11de3747:;
  /* 11de3747 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11de374a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de374e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3750 ret  */
  ESPCHK(0x11de36e0u, _esp0);
  ESP += 4; return;
L_11de3751:;
  /* 11de3751 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11de3754 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de3758 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de375a ret  */
  ESPCHK(0x11de36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000375b @ 0x11de375b (429 bytes, 143 insns) */
void f_11de375b(void) {
  FTRACE(0x11de375bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de375b push ebp */
  push32((uint32_t)(EBP));
  /* 11de375c mov ebp, esp */
  EBP = (ESP);
  /* 11de375e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3761 push ebx */
  push32((uint32_t)(EBX));
  /* 11de3762 push esi */
  push32((uint32_t)(ESI));
  /* 11de3763 push edi */
  push32((uint32_t)(EDI));
  /* 11de3764 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11de3766 call 0x11de2d90 */
  push32(0x11de376bu); f_11de2d90();
  /* 11de376b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de376e call 0x11de3908 */
  push32(0x11de3773u); f_11de3908();
  /* 11de3773 mov ebx, eax */
  EBX = (EAX);
  /* 11de3775 pop ecx */
  ECX = (pop32());
  /* 11de3776 cmp ebx, dword ptr [0x11dec270] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dec270))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de377c pop ecx */
  ECX = (pop32());
  /* 11de377d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de3780 jne 0x11de3789 */
  if (!C.zf) goto L_11de3789;
L_11de3782:;
  /* 11de3782 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de3784 jmp 0x11de38f9 */
  goto L_11de38f9;
L_11de3789:;
  /* 11de3789 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de378b je 0x11de38e7 */
  if (C.zf) goto L_11de38e7;
  /* 11de3791 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3793 mov eax, 0x11de95f8 */
  EAX = (0x11de95f8u);
L_11de3798:;
  /* 11de3798 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de379a je 0x11de3810 */
  if (C.zf) goto L_11de3810;
  /* 11de379c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de379f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de37a0 cmp eax, 0x11de96e8 */
  { uint32_t _a=(EAX),_b=(0x11de96e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de37a5 jl 0x11de3798 */
  if ((C.sf!=C.of)) goto L_11de3798;
  /* 11de37a7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11de37aa push eax */
  push32((uint32_t)(EAX));
  /* 11de37ab push ebx */
  push32((uint32_t)(EBX));
  /* 11de37ac call dword ptr [0x11de8044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8044))), 0x11de37b2u);
  /* 11de37b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de37b4 pop esi */
  ESI = (pop32());
  /* 11de37b5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de37b7 jne 0x11de38de */
  if (!C.zf) goto L_11de38de;
  /* 11de37bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11de37bf and dword ptr [0x11dec4a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dec4a4)))&(0x0u); w32((uint32_t)(0x11dec4a4), (_r)); fl_logic(_r,32); }
  /* 11de37c6 pop ecx */
  ECX = (pop32());
  /* 11de37c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de37c9 mov edi, 0x11dec3a0 */
  EDI = (0x11dec3a0u);
  /* 11de37ce cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de37d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11de37d3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11de37d4 mov dword ptr [0x11dec270], ebx */
  w32((uint32_t)(0x11dec270), (EBX));
  /* 11de37da jbe 0x11de38cb */
  if ((C.cf||C.zf)) goto L_11de38cb;
  /* 11de37e0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de37e4 je 0x11de38a6 */
  if (C.zf) goto L_11de38a6;
  /* 11de37ea lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11de37ed:;
  /* 11de37ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11de37ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de37f1 je 0x11de38a6 */
  if (C.zf) goto L_11de38a6;
  /* 11de37f7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11de37fb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11de37fe:;
  /* 11de37fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3800 ja 0x11de389a */
  if ((!C.cf&&!C.zf)) goto L_11de389a;
  /* 11de3806 or byte ptr [eax + 0x11dec3a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(0x4u); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de380d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de380e jmp 0x11de37fe */
  goto L_11de37fe;
L_11de3810:;
  /* 11de3810 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de3814 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11de3816 pop ecx */
  ECX = (pop32());
  /* 11de3817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de3819 mov edi, 0x11dec3a0 */
  EDI = (0x11dec3a0u);
  /* 11de381e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11de3821 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11de3823 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11de3826 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11de3827 lea ebx, [esi + 0x11de9608] */
  EBX = ((uint32_t)(ESI + 0x11de9608));
L_11de382d:;
  /* 11de382d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3830 mov ecx, ebx */
  ECX = (EBX);
  /* 11de3832 je 0x11de3860 */
  if (C.zf) goto L_11de3860;
L_11de3834:;
  /* 11de3834 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11de3837 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de3839 je 0x11de3860 */
  if (C.zf) goto L_11de3860;
  /* 11de383b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11de383e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11de3841 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3843 ja 0x11de3859 */
  if ((!C.cf&&!C.zf)) goto L_11de3859;
  /* 11de3845 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de3848 mov dl, byte ptr [edx + 0x11de95f0] */
  DL = (r8((uint32_t)(EDX + 0x11de95f0)));
L_11de384e:;
  /* 11de384e or byte ptr [eax + 0x11dec3a1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(DL); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de3854 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de3855 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3857 jbe 0x11de384e */
  if ((C.cf||C.zf)) goto L_11de384e;
L_11de3859:;
  /* 11de3859 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de385a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de385b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de385e jne 0x11de3834 */
  if (!C.zf) goto L_11de3834;
L_11de3860:;
  /* 11de3860 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11de3863 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3866 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de386a jb 0x11de382d */
  if (C.cf) goto L_11de382d;
  /* 11de386c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de386f mov dword ptr [0x11dec28c], 1 */
  w32((uint32_t)(0x11dec28c), (0x1u));
  /* 11de3879 push eax */
  push32((uint32_t)(EAX));
  /* 11de387a mov dword ptr [0x11dec270], eax */
  w32((uint32_t)(0x11dec270), (EAX));
  /* 11de387f call 0x11de3952 */
  push32(0x11de3884u); f_11de3952();
  /* 11de3884 lea esi, [esi + 0x11de95fc] */
  ESI = ((uint32_t)(ESI + 0x11de95fc));
  /* 11de388a mov edi, 0x11dec280 */
  EDI = (0x11dec280u);
  /* 11de388f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de3890 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de3891 pop ecx */
  ECX = (pop32());
  /* 11de3892 mov dword ptr [0x11dec4a4], eax */
  w32((uint32_t)(0x11dec4a4), (EAX));
  /* 11de3897 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11de3898 jmp 0x11de38ec */
  goto L_11de38ec;
L_11de389a:;
  /* 11de389a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de389b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de389c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de38a0 jne 0x11de37ed */
  if (!C.zf) goto L_11de37ed;
L_11de38a6:;
  /* 11de38a6 mov eax, esi */
  EAX = (ESI);
L_11de38a8:;
  /* 11de38a8 or byte ptr [eax + 0x11dec3a1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(0x8u); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de38af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de38b0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de38b5 jb 0x11de38a8 */
  if (C.cf) goto L_11de38a8;
  /* 11de38b7 push ebx */
  push32((uint32_t)(EBX));
  /* 11de38b8 call 0x11de3952 */
  push32(0x11de38bdu); f_11de3952();
  /* 11de38bd pop ecx */
  ECX = (pop32());
  /* 11de38be mov dword ptr [0x11dec4a4], eax */
  w32((uint32_t)(0x11dec4a4), (EAX));
  /* 11de38c3 mov dword ptr [0x11dec28c], esi */
  w32((uint32_t)(0x11dec28c), (ESI));
  /* 11de38c9 jmp 0x11de38d2 */
  goto L_11de38d2;
L_11de38cb:;
  /* 11de38cb and dword ptr [0x11dec28c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dec28c)))&(0x0u); w32((uint32_t)(0x11dec28c), (_r)); fl_logic(_r,32); }
L_11de38d2:;
  /* 11de38d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de38d4 mov edi, 0x11dec280 */
  EDI = (0x11dec280u);
  /* 11de38d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11de38da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11de38db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11de38dc jmp 0x11de38ec */
  goto L_11de38ec;
L_11de38de:;
  /* 11de38de cmp dword ptr [0x11dec17c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec17c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de38e5 je 0x11de38f6 */
  if (C.zf) goto L_11de38f6;
L_11de38e7:;
  /* 11de38e7 call 0x11de3985 */
  push32(0x11de38ecu); f_11de3985();
L_11de38ec:;
  /* 11de38ec call 0x11de39ae */
  push32(0x11de38f1u); f_11de39ae();
  /* 11de38f1 jmp 0x11de3782 */
  goto L_11de3782;
L_11de38f6:;
  /* 11de38f6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11de38f9:;
  /* 11de38f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11de38fb call 0x11de2df1 */
  push32(0x11de3900u); f_11de2df1();
  /* 11de3900 pop ecx */
  ECX = (pop32());
  /* 11de3901 mov eax, esi */
  EAX = (ESI);
  /* 11de3903 pop edi */
  EDI = (pop32());
  /* 11de3904 pop esi */
  ESI = (pop32());
  /* 11de3905 pop ebx */
  EBX = (pop32());
  /* 11de3906 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3907 ret  */
  ESPCHK(0x11de375bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003908 @ 0x11de3908 (74 bytes, 15 insns) */
void f_11de3908(void) {
  FTRACE(0x11de3908u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3908 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de390c and dword ptr [0x11dec17c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dec17c)))&(0x0u); w32((uint32_t)(0x11dec17c), (_r)); fl_logic(_r,32); }
  /* 11de3913 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3916 jne 0x11de3928 */
  if (!C.zf) goto L_11de3928;
  /* 11de3918 mov dword ptr [0x11dec17c], 1 */
  w32((uint32_t)(0x11dec17c), (0x1u));
  /* 11de3922 jmp dword ptr [0x11de8048] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11de8048)))); return;
L_11de3928:;
  /* 11de3928 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de392b jne 0x11de393d */
  if (!C.zf) goto L_11de393d;
  /* 11de392d mov dword ptr [0x11dec17c], 1 */
  w32((uint32_t)(0x11dec17c), (0x1u));
  /* 11de3937 jmp dword ptr [0x11de8040] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11de8040)))); return;
L_11de393d:;
  /* 11de393d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3940 jne 0x11de3951 */
  if (!C.zf) goto L_11de3951;
  /* 11de3942 mov eax, dword ptr [0x11dec1b0] */
  EAX = (r32((uint32_t)(0x11dec1b0)));
  /* 11de3947 mov dword ptr [0x11dec17c], 1 */
  w32((uint32_t)(0x11dec17c), (0x1u));
L_11de3951:;
  /* 11de3951 ret  */
  ESPCHK(0x11de3908u, _esp0);
  ESP += 4; return;
}

/* FUN_10003952 @ 0x11de3952 (51 bytes, 19 insns) */
void f_11de3952(void) {
  FTRACE(0x11de3952u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3952 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de3956 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de395b je 0x11de397f */
  if (C.zf) goto L_11de397f;
  /* 11de395d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3960 je 0x11de3979 */
  if (C.zf) goto L_11de3979;
  /* 11de3962 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3965 je 0x11de3973 */
  if (C.zf) goto L_11de3973;
  /* 11de3967 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de3968 je 0x11de396d */
  if (C.zf) goto L_11de396d;
  /* 11de396a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de396c ret  */
  ESPCHK(0x11de3952u, _esp0);
  ESP += 4; return;
L_11de396d:;
  /* 11de396d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11de3972 ret  */
  ESPCHK(0x11de3952u, _esp0);
  ESP += 4; return;
L_11de3973:;
  /* 11de3973 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11de3978 ret  */
  ESPCHK(0x11de3952u, _esp0);
  ESP += 4; return;
L_11de3979:;
  /* 11de3979 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11de397e ret  */
  ESPCHK(0x11de3952u, _esp0);
  ESP += 4; return;
L_11de397f:;
  /* 11de397f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11de3984 ret  */
  ESPCHK(0x11de3952u, _esp0);
  ESP += 4; return;
}

/* FUN_10003985 @ 0x11de3985 (41 bytes, 17 insns) */
void f_11de3985(void) {
  FTRACE(0x11de3985u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3985 push edi */
  push32((uint32_t)(EDI));
  /* 11de3986 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11de3988 pop ecx */
  ECX = (pop32());
  /* 11de3989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de398b mov edi, 0x11dec3a0 */
  EDI = (0x11dec3a0u);
  /* 11de3990 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11de3992 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11de3993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de3995 mov edi, 0x11dec280 */
  EDI = (0x11dec280u);
  /* 11de399a mov dword ptr [0x11dec270], eax */
  w32((uint32_t)(0x11dec270), (EAX));
  /* 11de399f mov dword ptr [0x11dec28c], eax */
  w32((uint32_t)(0x11dec28c), (EAX));
  /* 11de39a4 mov dword ptr [0x11dec4a4], eax */
  w32((uint32_t)(0x11dec4a4), (EAX));
  /* 11de39a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11de39aa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11de39ab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11de39ac pop edi */
  EDI = (pop32());
  /* 11de39ad ret  */
  ESPCHK(0x11de3985u, _esp0);
  ESP += 4; return;
}

/* FUN_100039ae @ 0x11de39ae (389 bytes, 124 insns) */
void f_11de39ae(void) {
  FTRACE(0x11de39aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de39ae push ebp */
  push32((uint32_t)(EBP));
  /* 11de39af mov ebp, esp */
  EBP = (ESP);
  /* 11de39b1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de39b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11de39ba push esi */
  push32((uint32_t)(ESI));
  /* 11de39bb push eax */
  push32((uint32_t)(EAX));
  /* 11de39bc push dword ptr [0x11dec270] */
  push32((uint32_t)(r32((uint32_t)(0x11dec270))));
  /* 11de39c2 call dword ptr [0x11de8044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8044))), 0x11de39c8u);
  /* 11de39c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de39cb jne 0x11de3ae7 */
  if (!C.zf) goto L_11de3ae7;
  /* 11de39d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de39d3 mov esi, 0x100 */
  ESI = (0x100u);
L_11de39d8:;
  /* 11de39d8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11de39df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de39e0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de39e2 jb 0x11de39d8 */
  if (C.cf) goto L_11de39d8;
  /* 11de39e4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11de39e7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11de39ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de39f0 je 0x11de3a29 */
  if (C.zf) goto L_11de3a29;
  /* 11de39f2 push ebx */
  push32((uint32_t)(EBX));
  /* 11de39f3 push edi */
  push32((uint32_t)(EDI));
  /* 11de39f4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11de39f7:;
  /* 11de39f7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11de39fa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11de39fd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de39ff ja 0x11de3a1e */
  if ((!C.cf&&!C.zf)) goto L_11de3a1e;
  /* 11de3a01 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3a03 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11de3a0a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de3a0b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11de3a10 mov ebx, ecx */
  EBX = (ECX);
  /* 11de3a12 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3a15 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11de3a17 mov ecx, ebx */
  ECX = (EBX);
  /* 11de3a19 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11de3a1c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11de3a1e:;
  /* 11de3a1e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de3a1f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de3a20 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11de3a23 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de3a25 jne 0x11de39f7 */
  if (!C.zf) goto L_11de39f7;
  /* 11de3a27 pop edi */
  EDI = (pop32());
  /* 11de3a28 pop ebx */
  EBX = (pop32());
L_11de3a29:;
  /* 11de3a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de3a2b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11de3a31 push dword ptr [0x11dec4a4] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a4))));
  /* 11de3a37 push dword ptr [0x11dec270] */
  push32((uint32_t)(r32((uint32_t)(0x11dec270))));
  /* 11de3a3d push eax */
  push32((uint32_t)(EAX));
  /* 11de3a3e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11de3a44 push esi */
  push32((uint32_t)(ESI));
  /* 11de3a45 push eax */
  push32((uint32_t)(EAX));
  /* 11de3a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de3a48 call 0x11de5c40 */
  push32(0x11de3a4du); f_11de5c40();
  /* 11de3a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11de3a4f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11de3a55 push dword ptr [0x11dec270] */
  push32((uint32_t)(r32((uint32_t)(0x11dec270))));
  /* 11de3a5b push esi */
  push32((uint32_t)(ESI));
  /* 11de3a5c push eax */
  push32((uint32_t)(EAX));
  /* 11de3a5d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11de3a63 push esi */
  push32((uint32_t)(ESI));
  /* 11de3a64 push eax */
  push32((uint32_t)(EAX));
  /* 11de3a65 push esi */
  push32((uint32_t)(ESI));
  /* 11de3a66 push dword ptr [0x11dec4a4] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a4))));
  /* 11de3a6c call 0x11de59f1 */
  push32(0x11de3a71u); f_11de59f1();
  /* 11de3a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de3a73 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11de3a79 push dword ptr [0x11dec270] */
  push32((uint32_t)(r32((uint32_t)(0x11dec270))));
  /* 11de3a7f push esi */
  push32((uint32_t)(ESI));
  /* 11de3a80 push eax */
  push32((uint32_t)(EAX));
  /* 11de3a81 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11de3a87 push esi */
  push32((uint32_t)(ESI));
  /* 11de3a88 push eax */
  push32((uint32_t)(EAX));
  /* 11de3a89 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11de3a8e push dword ptr [0x11dec4a4] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a4))));
  /* 11de3a94 call 0x11de59f1 */
  push32(0x11de3a99u); f_11de59f1();
  /* 11de3a99 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de3a9e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11de3aa4:;
  /* 11de3aa4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11de3aa7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11de3aaa je 0x11de3ac2 */
  if (C.zf) goto L_11de3ac2;
  /* 11de3aac or byte ptr [eax + 0x11dec3a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(0x10u); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de3ab3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11de3aba:;
  /* 11de3aba mov byte ptr [eax + 0x11dec2a0], dl */
  w8((uint32_t)(EAX + 0x11dec2a0), (DL));
  /* 11de3ac0 jmp 0x11de3ade */
  goto L_11de3ade;
L_11de3ac2:;
  /* 11de3ac2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11de3ac5 je 0x11de3ad7 */
  if (C.zf) goto L_11de3ad7;
  /* 11de3ac7 or byte ptr [eax + 0x11dec3a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(0x20u); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de3ace mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11de3ad5 jmp 0x11de3aba */
  goto L_11de3aba;
L_11de3ad7:;
  /* 11de3ad7 and byte ptr [eax + 0x11dec2a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec2a0)))&(0x0u); w8((uint32_t)(EAX + 0x11dec2a0), (_r)); fl_logic(_r,8); }
L_11de3ade:;
  /* 11de3ade inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de3adf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de3ae0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de3ae1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3ae3 jb 0x11de3aa4 */
  if (C.cf) goto L_11de3aa4;
  /* 11de3ae5 jmp 0x11de3b30 */
  goto L_11de3b30;
L_11de3ae7:;
  /* 11de3ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de3ae9 mov esi, 0x100 */
  ESI = (0x100u);
L_11de3aee:;
  /* 11de3aee cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3af1 jb 0x11de3b0c */
  if (C.cf) goto L_11de3b0c;
  /* 11de3af3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3af6 ja 0x11de3b0c */
  if ((!C.cf&&!C.zf)) goto L_11de3b0c;
  /* 11de3af8 or byte ptr [eax + 0x11dec3a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(0x10u); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de3aff mov cl, al */
  CL = (AL);
  /* 11de3b01 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11de3b04:;
  /* 11de3b04 mov byte ptr [eax + 0x11dec2a0], cl */
  w8((uint32_t)(EAX + 0x11dec2a0), (CL));
  /* 11de3b0a jmp 0x11de3b2b */
  goto L_11de3b2b;
L_11de3b0c:;
  /* 11de3b0c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b0f jb 0x11de3b24 */
  if (C.cf) goto L_11de3b24;
  /* 11de3b11 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b14 ja 0x11de3b24 */
  if ((!C.cf&&!C.zf)) goto L_11de3b24;
  /* 11de3b16 or byte ptr [eax + 0x11dec3a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))|(0x20u); w8((uint32_t)(EAX + 0x11dec3a1), (_r)); fl_logic(_r,8); }
  /* 11de3b1d mov cl, al */
  CL = (AL);
  /* 11de3b1f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de3b22 jmp 0x11de3b04 */
  goto L_11de3b04;
L_11de3b24:;
  /* 11de3b24 and byte ptr [eax + 0x11dec2a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec2a0)))&(0x0u); w8((uint32_t)(EAX + 0x11dec2a0), (_r)); fl_logic(_r,8); }
L_11de3b2b:;
  /* 11de3b2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de3b2c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b2e jb 0x11de3aee */
  if (C.cf) goto L_11de3aee;
L_11de3b30:;
  /* 11de3b30 pop esi */
  ESI = (pop32());
  /* 11de3b31 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3b32 ret  */
  ESPCHK(0x11de39aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b33 @ 0x11de3b33 (28 bytes, 7 insns) */
void f_11de3b33(void) {
  FTRACE(0x11de3b33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3b33 cmp dword ptr [0x11dec5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b3a jne 0x11de3b4e */
  if (!C.zf) goto L_11de3b4e;
  /* 11de3b3c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11de3b3e call 0x11de375b */
  push32(0x11de3b43u); f_11de375b();
  /* 11de3b43 pop ecx */
  ECX = (pop32());
  /* 11de3b44 mov dword ptr [0x11dec5c8], 1 */
  w32((uint32_t)(0x11dec5c8), (0x1u));
L_11de3b4e:;
  /* 11de3b4e ret  */
  ESPCHK(0x11de3b33u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x11de3b50 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11de3b50(void) {
  FTRACE(0x11de3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11de3b51 mov ebp, esp */
  EBP = (ESP);
  /* 11de3b53 push edi */
  push32((uint32_t)(EDI));
  /* 11de3b54 push esi */
  push32((uint32_t)(ESI));
  /* 11de3b55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de3b58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de3b5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3b5e mov eax, ecx */
  EAX = (ECX);
  /* 11de3b60 mov edx, ecx */
  EDX = (ECX);
  /* 11de3b62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3b64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b66 jbe 0x11de3b70 */
  if ((C.cf||C.zf)) goto L_11de3b70;
  /* 11de3b68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b6a jb 0x11de3ce8 */
  if (C.cf) goto L_11de3ce8;
L_11de3b70:;
  /* 11de3b70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11de3b76 jne 0x11de3b8c */
  if (!C.zf) goto L_11de3b8c;
  /* 11de3b78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3b7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11de3b7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3b81 jb 0x11de3bac */
  if (C.cf) goto L_11de3bac;
  /* 11de3b83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3b85 jmp dword ptr [edx*4 + 0x11de3c98] */
  switch (EDX) {
    case 0: goto L_11de3ca8;
    case 1: goto L_11de3cb0;
    case 2: goto L_11de3cbc;
    case 3: goto L_11de3cd0;
    default: x86_unimpl("switch@0x11de3b85 out of table"); return;
  }
L_11de3b8c:;
  /* 11de3b8c mov eax, edi */
  EAX = (EDI);
  /* 11de3b8e mov edx, 3 */
  EDX = (0x3u);
  /* 11de3b93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3b96 jb 0x11de3ba4 */
  if (C.cf) goto L_11de3ba4;
  /* 11de3b98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11de3b9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3b9d jmp dword ptr [eax*4 + 0x11de3bb0] */
  switch (EAX) {
    case 1: goto L_11de3bc0;
    case 2: goto L_11de3bec;
    case 3: goto L_11de3c10;
    default: x86_unimpl("switch@0x11de3b9d out of table"); return;
  }
L_11de3ba4:;
  /* 11de3ba4 jmp dword ptr [ecx*4 + 0x11de3ca8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11de3ca8)))); return;
  /* 11de3bab nop  */
  /* nop */
L_11de3bac:;
  /* 11de3bac jmp dword ptr [ecx*4 + 0x11de3c2c] */
  switch (ECX) {
    case 0: goto L_11de3c8f;
    case 1: goto L_11de3c7c;
    case 2: goto L_11de3c74;
    case 3: goto L_11de3c6c;
    case 4: goto L_11de3c64;
    case 5: goto L_11de3c5c;
    case 6: goto L_11de3c54;
    case 7: goto L_11de3c4c;
    default: x86_unimpl("switch@0x11de3bac out of table"); return;
  }
  /* 11de3bb3 nop  */
  /* nop */
L_11de3bc0:;
  /* 11de3bc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3bc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3bc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de3bc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3bc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de3bcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de3bcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3bd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de3bd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3bd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3bdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3bde jb 0x11de3bac */
  if (C.cf) goto L_11de3bac;
  /* 11de3be0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3be2 jmp dword ptr [edx*4 + 0x11de3c98] */
  switch (EDX) {
    case 0: goto L_11de3ca8;
    case 1: goto L_11de3cb0;
    case 2: goto L_11de3cbc;
    case 3: goto L_11de3cd0;
    default: x86_unimpl("switch@0x11de3be2 out of table"); return;
  }
  /* 11de3be9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de3bec:;
  /* 11de3bec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3bee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3bf0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de3bf2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3bf5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3bf8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de3bfb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3bfe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3c01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3c04 jb 0x11de3bac */
  if (C.cf) goto L_11de3bac;
  /* 11de3c06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3c08 jmp dword ptr [edx*4 + 0x11de3c98] */
  switch (EDX) {
    case 0: goto L_11de3ca8;
    case 1: goto L_11de3cb0;
    case 2: goto L_11de3cbc;
    case 3: goto L_11de3cd0;
    default: x86_unimpl("switch@0x11de3c08 out of table"); return;
  }
  /* 11de3c0f nop  */
  /* nop */
L_11de3c10:;
  /* 11de3c10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3c12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3c14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de3c16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3c17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de3c1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3c1e jb 0x11de3bac */
  if (C.cf) goto L_11de3bac;
  /* 11de3c20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3c22 jmp dword ptr [edx*4 + 0x11de3c98] */
  switch (EDX) {
    case 0: goto L_11de3ca8;
    case 1: goto L_11de3cb0;
    case 2: goto L_11de3cbc;
    case 3: goto L_11de3cd0;
    default: x86_unimpl("switch@0x11de3c22 out of table"); return;
  }
  /* 11de3c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de3c4c:;
  /* 11de3c4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11de3c50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11de3c54:;
  /* 11de3c54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11de3c58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11de3c5c:;
  /* 11de3c5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11de3c60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11de3c64:;
  /* 11de3c64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11de3c68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11de3c6c:;
  /* 11de3c6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11de3c70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11de3c74:;
  /* 11de3c74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11de3c78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11de3c7c:;
  /* 11de3c7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11de3c80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11de3c84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11de3c8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3c8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11de3c8f:;
  /* 11de3c8f jmp dword ptr [edx*4 + 0x11de3c98] */
  switch (EDX) {
    case 0: goto L_11de3ca8;
    case 1: goto L_11de3cb0;
    case 2: goto L_11de3cbc;
    case 3: goto L_11de3cd0;
    default: x86_unimpl("switch@0x11de3c8f out of table"); return;
  }
  /* 11de3c96 mov edi, edi */
  EDI = (EDI);
L_11de3ca8:;
  /* 11de3ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3cab pop esi */
  ESI = (pop32());
  /* 11de3cac pop edi */
  EDI = (pop32());
  /* 11de3cad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3cae ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3caf nop  */
  /* nop */
L_11de3cb0:;
  /* 11de3cb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3cb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de3cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3cb7 pop esi */
  ESI = (pop32());
  /* 11de3cb8 pop edi */
  EDI = (pop32());
  /* 11de3cb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3cba ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3cbb nop  */
  /* nop */
L_11de3cbc:;
  /* 11de3cbc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3cbe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de3cc0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3cc3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de3cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3cc9 pop esi */
  ESI = (pop32());
  /* 11de3cca pop edi */
  EDI = (pop32());
  /* 11de3ccb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3ccc ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3ccd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de3cd0:;
  /* 11de3cd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3cd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de3cd4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3cd7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de3cda mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de3cdd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de3ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3ce3 pop esi */
  ESI = (pop32());
  /* 11de3ce4 pop edi */
  EDI = (pop32());
  /* 11de3ce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3ce6 ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3ce7 nop  */
  /* nop */
L_11de3ce8:;
  /* 11de3ce8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11de3cec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11de3cf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11de3cf6 jne 0x11de3d1c */
  if (!C.zf) goto L_11de3d1c;
  /* 11de3cf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3cfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11de3cfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3d01 jb 0x11de3d10 */
  if (C.cf) goto L_11de3d10;
  /* 11de3d03 std  */
  C.df=1;
  /* 11de3d04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3d06 cld  */
  C.df=0;
  /* 11de3d07 jmp dword ptr [edx*4 + 0x11de3e30] */
  switch (EDX) {
    case 0: goto L_11de3e40;
    case 1: goto L_11de3e48;
    case 2: goto L_11de3e58;
    case 3: goto L_11de3e6c;
    default: x86_unimpl("switch@0x11de3d07 out of table"); return;
  }
  /* 11de3d0e mov edi, edi */
  EDI = (EDI);
L_11de3d10:;
  /* 11de3d10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de3d12 jmp dword ptr [ecx*4 + 0x11de3de0] */
  switch (ECX) {
    case 0: goto L_11de3e27;
    default: x86_unimpl("switch@0x11de3d12 out of table"); return;
  }
  /* 11de3d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de3d1c:;
  /* 11de3d1c mov eax, edi */
  EAX = (EDI);
  /* 11de3d1e mov edx, 3 */
  EDX = (0x3u);
  /* 11de3d23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3d26 jb 0x11de3d34 */
  if (C.cf) goto L_11de3d34;
  /* 11de3d28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11de3d2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3d2d jmp dword ptr [eax*4 + 0x11de3d38] */
  switch (EAX) {
    case 1: goto L_11de3d48;
    case 2: goto L_11de3d68;
    case 3: goto L_11de3d90;
    default: x86_unimpl("switch@0x11de3d2d out of table"); return;
  }
L_11de3d34:;
  /* 11de3d34 jmp dword ptr [ecx*4 + 0x11de3e30] */
  switch (ECX) {
    case 0: goto L_11de3e40;
    case 1: goto L_11de3e48;
    case 2: goto L_11de3e58;
    case 3: goto L_11de3e6c;
    default: x86_unimpl("switch@0x11de3d34 out of table"); return;
  }
  /* 11de3d3b nop  */
  /* nop */
L_11de3d48:;
  /* 11de3d48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de3d4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3d4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de3d50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11de3d51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3d54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11de3d55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3d58 jb 0x11de3d10 */
  if (C.cf) goto L_11de3d10;
  /* 11de3d5a std  */
  C.df=1;
  /* 11de3d5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3d5d cld  */
  C.df=0;
  /* 11de3d5e jmp dword ptr [edx*4 + 0x11de3e30] */
  switch (EDX) {
    case 0: goto L_11de3e40;
    case 1: goto L_11de3e48;
    case 2: goto L_11de3e58;
    case 3: goto L_11de3e6c;
    default: x86_unimpl("switch@0x11de3d5e out of table"); return;
  }
  /* 11de3d65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de3d68:;
  /* 11de3d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de3d6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3d6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de3d70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de3d73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3d76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de3d79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3d7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3d7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3d82 jb 0x11de3d10 */
  if (C.cf) goto L_11de3d10;
  /* 11de3d84 std  */
  C.df=1;
  /* 11de3d85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3d87 cld  */
  C.df=0;
  /* 11de3d88 jmp dword ptr [edx*4 + 0x11de3e30] */
  switch (EDX) {
    case 0: goto L_11de3e40;
    case 1: goto L_11de3e48;
    case 2: goto L_11de3e58;
    case 3: goto L_11de3e6c;
    default: x86_unimpl("switch@0x11de3d88 out of table"); return;
  }
  /* 11de3d8f nop  */
  /* nop */
L_11de3d90:;
  /* 11de3d90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de3d93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3d95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de3d98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de3d9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de3d9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3da1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de3da4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de3da7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3daa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3dad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3db0 jb 0x11de3d10 */
  if (C.cf) goto L_11de3d10;
  /* 11de3db6 std  */
  C.df=1;
  /* 11de3db7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de3db9 cld  */
  C.df=0;
  /* 11de3dba jmp dword ptr [edx*4 + 0x11de3e30] */
  switch (EDX) {
    case 0: goto L_11de3e40;
    case 1: goto L_11de3e48;
    case 2: goto L_11de3e58;
    case 3: goto L_11de3e6c;
    default: x86_unimpl("switch@0x11de3dba out of table"); return;
  }
  /* 11de3dc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11de3dc4 in al, 0x3d */
  x86_unimpl("in @ 0x11de3dc4");
  /* 11de3dc6 ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de3dc6");
  /* 11de3dc8 in al, dx */
  x86_unimpl("in @ 0x11de3dc8");
  /* 11de3dc9 cmp eax, 0x3df411de */
  { uint32_t _a=(EAX),_b=(0x3df411deu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3dce ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de3dce");
  /* 11de3dd0 cld  */
  C.df=0;
  /* 11de3dd1 cmp eax, 0x3e0411de */
  { uint32_t _a=(EAX),_b=(0x3e0411deu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3dd6 ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de3dd6");
  /* 11de3dd8 or al, 0x3e */
  { uint32_t _r=(AL)|(0x3eu); AL = (_r); fl_logic(_r,8); }
  /* 11de3dda ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de3dda");
  /* 11de3ddc adc al, 0x3e */
  { uint32_t _a=(AL),_b=(0x3eu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de3dde ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de3dde");
  /* 11de3de4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11de3de8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11de3dec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11de3df0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11de3df4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11de3df8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11de3dfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11de3e00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11de3e04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11de3e08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11de3e0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11de3e10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11de3e14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11de3e18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11de3e1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11de3e23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3e25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11de3e27:;
  /* 11de3e27 jmp dword ptr [edx*4 + 0x11de3e30] */
  switch (EDX) {
    case 0: goto L_11de3e40;
    case 1: goto L_11de3e48;
    case 2: goto L_11de3e58;
    case 3: goto L_11de3e6c;
    default: x86_unimpl("switch@0x11de3e27 out of table"); return;
  }
  /* 11de3e2e mov edi, edi */
  EDI = (EDI);
L_11de3e40:;
  /* 11de3e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3e43 pop esi */
  ESI = (pop32());
  /* 11de3e44 pop edi */
  EDI = (pop32());
  /* 11de3e45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3e46 ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3e47 nop  */
  /* nop */
L_11de3e48:;
  /* 11de3e48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de3e4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de3e4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3e51 pop esi */
  ESI = (pop32());
  /* 11de3e52 pop edi */
  EDI = (pop32());
  /* 11de3e53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3e54 ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de3e58:;
  /* 11de3e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de3e5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de3e5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de3e61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de3e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3e67 pop esi */
  ESI = (pop32());
  /* 11de3e68 pop edi */
  EDI = (pop32());
  /* 11de3e69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3e6a ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
  /* 11de3e6b nop  */
  /* nop */
L_11de3e6c:;
  /* 11de3e6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de3e6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de3e72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de3e75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de3e78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3e7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de3e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3e81 pop esi */
  ESI = (pop32());
  /* 11de3e82 pop edi */
  EDI = (pop32());
  /* 11de3e83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de3e84 ret  */
  ESPCHK(0x11de3b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e85 @ 0x11de3e85 (23 bytes, 7 insns) */
void f_11de3e85(void) {
  FTRACE(0x11de3e85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de3e87 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11de3e8b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11de3e8f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11de3e93 call 0x11de3e9c */
  push32(0x11de3e98u); f_11de3e9c();
  /* 11de3e98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3e9b ret  */
  ESPCHK(0x11de3e85u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e9c @ 0x11de3e9c (517 bytes, 195 insns) */
void f_11de3e9c(void) {
  FTRACE(0x11de3e9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de3e9c push ebp */
  push32((uint32_t)(EBP));
  /* 11de3e9d mov ebp, esp */
  EBP = (ESP);
  /* 11de3e9f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3ea2 push ebx */
  push32((uint32_t)(EBX));
  /* 11de3ea3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11de3ea7 push esi */
  push32((uint32_t)(ESI));
  /* 11de3ea8 push edi */
  push32((uint32_t)(EDI));
  /* 11de3ea9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de3eac mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11de3eae lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11de3eb1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11de3eb4:;
  /* 11de3eb4 cmp dword ptr [0x11debaa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3ebb jle 0x11de3ecc */
  if ((C.zf||C.sf!=C.of)) goto L_11de3ecc;
  /* 11de3ebd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11de3ec0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11de3ec2 push eax */
  push32((uint32_t)(EAX));
  /* 11de3ec3 call 0x11de5ecd */
  push32(0x11de3ec8u); f_11de5ecd();
  /* 11de3ec8 pop ecx */
  ECX = (pop32());
  /* 11de3ec9 pop ecx */
  ECX = (pop32());
  /* 11de3eca jmp 0x11de3edb */
  goto L_11de3edb;
L_11de3ecc:;
  /* 11de3ecc mov ecx, dword ptr [0x11deb898] */
  ECX = (r32((uint32_t)(0x11deb898)));
  /* 11de3ed2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11de3ed5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11de3ed8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11de3edb:;
  /* 11de3edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3edd je 0x11de3ee4 */
  if (C.zf) goto L_11de3ee4;
  /* 11de3edf mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11de3ee1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3ee2 jmp 0x11de3eb4 */
  goto L_11de3eb4;
L_11de3ee4:;
  /* 11de3ee4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3ee7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11de3eea jne 0x11de3ef2 */
  if (!C.zf) goto L_11de3ef2;
  /* 11de3eec or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11de3ef0 jmp 0x11de3ef7 */
  goto L_11de3ef7;
L_11de3ef2:;
  /* 11de3ef2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3ef5 jne 0x11de3efd */
  if (!C.zf) goto L_11de3efd;
L_11de3ef7:;
  /* 11de3ef7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11de3ef9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3efa mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11de3efd:;
  /* 11de3efd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de3f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3f02 jl 0x11de4091 */
  if ((C.sf!=C.of)) goto L_11de4091;
  /* 11de3f08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3f0b je 0x11de4091 */
  if (C.zf) goto L_11de4091;
  /* 11de3f11 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3f14 jg 0x11de4091 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de4091;
  /* 11de3f1a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11de3f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3f1e pop ecx */
  ECX = (pop32());
  /* 11de3f1f jne 0x11de3f45 */
  if (!C.zf) goto L_11de3f45;
  /* 11de3f21 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3f24 je 0x11de3f2f */
  if (C.zf) goto L_11de3f2f;
  /* 11de3f26 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11de3f2d jmp 0x11de3f61 */
  goto L_11de3f61;
L_11de3f2f:;
  /* 11de3f2f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3f31 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3f33 je 0x11de3f42 */
  if (C.zf) goto L_11de3f42;
  /* 11de3f35 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3f37 je 0x11de3f42 */
  if (C.zf) goto L_11de3f42;
  /* 11de3f39 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11de3f40 jmp 0x11de3f61 */
  goto L_11de3f61;
L_11de3f42:;
  /* 11de3f42 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11de3f45:;
  /* 11de3f45 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3f48 jne 0x11de3f61 */
  if (!C.zf) goto L_11de3f61;
  /* 11de3f4a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3f4d jne 0x11de3f61 */
  if (!C.zf) goto L_11de3f61;
  /* 11de3f4f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de3f51 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3f53 je 0x11de3f59 */
  if (C.zf) goto L_11de3f59;
  /* 11de3f55 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de3f57 jne 0x11de3f61 */
  if (!C.zf) goto L_11de3f61;
L_11de3f59:;
  /* 11de3f59 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de3f5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3f5d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de3f5e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11de3f61:;
  /* 11de3f61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de3f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3f66 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11de3f69 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11de3f6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11de3f71:;
  /* 11de3f71 cmp dword ptr [0x11debaa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3f78 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11de3f7b jle 0x11de3f89 */
  if ((C.zf||C.sf!=C.of)) goto L_11de3f89;
  /* 11de3f7d push 4 */
  push32((uint32_t)(0x4u));
  /* 11de3f7f push esi */
  push32((uint32_t)(ESI));
  /* 11de3f80 call 0x11de5ecd */
  push32(0x11de3f85u); f_11de5ecd();
  /* 11de3f85 pop ecx */
  ECX = (pop32());
  /* 11de3f86 pop ecx */
  ECX = (pop32());
  /* 11de3f87 jmp 0x11de3f94 */
  goto L_11de3f94;
L_11de3f89:;
  /* 11de3f89 mov eax, dword ptr [0x11deb898] */
  EAX = (r32((uint32_t)(0x11deb898)));
  /* 11de3f8e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11de3f91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11de3f94:;
  /* 11de3f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3f96 je 0x11de3fa0 */
  if (C.zf) goto L_11de3fa0;
  /* 11de3f98 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11de3f9b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de3f9e jmp 0x11de3fd2 */
  goto L_11de3fd2;
L_11de3fa0:;
  /* 11de3fa0 cmp dword ptr [0x11debaa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3fa7 jle 0x11de3fb4 */
  if ((C.zf||C.sf!=C.of)) goto L_11de3fb4;
  /* 11de3fa9 push edi */
  push32((uint32_t)(EDI));
  /* 11de3faa push esi */
  push32((uint32_t)(ESI));
  /* 11de3fab call 0x11de5ecd */
  push32(0x11de3fb0u); f_11de5ecd();
  /* 11de3fb0 pop ecx */
  ECX = (pop32());
  /* 11de3fb1 pop ecx */
  ECX = (pop32());
  /* 11de3fb2 jmp 0x11de3fbf */
  goto L_11de3fbf;
L_11de3fb4:;
  /* 11de3fb4 mov eax, dword ptr [0x11deb898] */
  EAX = (r32((uint32_t)(0x11deb898)));
  /* 11de3fb9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11de3fbd and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11de3fbf:;
  /* 11de3fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de3fc1 je 0x11de400d */
  if (C.zf) goto L_11de400d;
  /* 11de3fc3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11de3fc6 push eax */
  push32((uint32_t)(EAX));
  /* 11de3fc7 call 0x11de5d92 */
  push32(0x11de3fccu); f_11de5d92();
  /* 11de3fcc pop ecx */
  ECX = (pop32());
  /* 11de3fcd mov ecx, eax */
  ECX = (EAX);
  /* 11de3fcf sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11de3fd2:;
  /* 11de3fd2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3fd5 jae 0x11de400d */
  if (!C.cf) goto L_11de400d;
  /* 11de3fd7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11de3fda or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11de3fde cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3fe1 jb 0x11de3ff7 */
  if (C.cf) goto L_11de3ff7;
  /* 11de3fe3 jne 0x11de3ff1 */
  if (!C.zf) goto L_11de3ff1;
  /* 11de3fe5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de3fe8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11de3fea div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11de3fed cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de3fef jbe 0x11de3ff7 */
  if ((C.cf||C.zf)) goto L_11de3ff7;
L_11de3ff1:;
  /* 11de3ff1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11de3ff5 jmp 0x11de4000 */
  goto L_11de4000;
L_11de3ff7:;
  /* 11de3ff7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de3ffb add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de3ffd mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11de4000:;
  /* 11de4000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4003 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11de4006 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11de4008 jmp 0x11de3f71 */
  goto L_11de3f71;
L_11de400d:;
  /* 11de400d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de4010 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11de4013 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4016 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11de4018 jne 0x11de402a */
  if (!C.zf) goto L_11de402a;
  /* 11de401a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de401c je 0x11de4024 */
  if (C.zf) goto L_11de4024;
  /* 11de401e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4021 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11de4024:;
  /* 11de4024 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11de4028 jmp 0x11de4075 */
  goto L_11de4075;
L_11de402a:;
  /* 11de402a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11de402c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11de4031 jne 0x11de404e */
  if (!C.zf) goto L_11de404e;
  /* 11de4033 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11de4035 jne 0x11de4075 */
  if (!C.zf) goto L_11de4075;
  /* 11de4037 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11de403a je 0x11de4045 */
  if (C.zf) goto L_11de4045;
  /* 11de403c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4043 ja 0x11de404e */
  if ((!C.cf&&!C.zf)) goto L_11de404e;
L_11de4045:;
  /* 11de4045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4047 jne 0x11de4075 */
  if (!C.zf) goto L_11de4075;
  /* 11de4049 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de404c jbe 0x11de4075 */
  if ((C.cf||C.zf)) goto L_11de4075;
L_11de404e:;
  /* 11de404e call 0x11de5d89 */
  push32(0x11de4053u); f_11de5d89();
  /* 11de4053 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11de4057 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11de405d je 0x11de4065 */
  if (C.zf) goto L_11de4065;
  /* 11de405f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11de4063 jmp 0x11de4075 */
  goto L_11de4075;
L_11de4065:;
  /* 11de4065 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de4068 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11de406a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11de406c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de406e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de4070 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4072 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11de4075:;
  /* 11de4075 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de4077 je 0x11de407e */
  if (C.zf) goto L_11de407e;
  /* 11de4079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de407c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11de407e:;
  /* 11de407e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11de4082 je 0x11de408c */
  if (C.zf) goto L_11de408c;
  /* 11de4084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de4087 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de4089 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11de408c:;
  /* 11de408c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de408f jmp 0x11de409c */
  goto L_11de409c;
L_11de4091:;
  /* 11de4091 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4096 je 0x11de409a */
  if (C.zf) goto L_11de409a;
  /* 11de4098 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11de409a:;
  /* 11de409a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de409c:;
  /* 11de409c pop edi */
  EDI = (pop32());
  /* 11de409d pop esi */
  ESI = (pop32());
  /* 11de409e pop ebx */
  EBX = (pop32());
  /* 11de409f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de40a0 ret  */
  ESPCHK(0x11de3e9cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11de40c0 (193 bytes, 90 insns) */
void f_11de40c0(void) {
  FTRACE(0x11de40c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de40c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de40c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11de40c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11de40c7 mov ebx, eax */
  EBX = (EAX);
  /* 11de40c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de40cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de40d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11de40d6 je 0x11de40eb */
  if (C.zf) goto L_11de40eb;
L_11de40d8:;
  /* 11de40d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11de40da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de40db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de40dd je 0x11de40b0 */
  if (C.zf) { jmp_ind(0x11de40b0u); return; }
  /* 11de40df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11de40e1 je 0x11de4134 */
  if (C.zf) goto L_11de4134;
  /* 11de40e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11de40e9 jne 0x11de40d8 */
  if (!C.zf) goto L_11de40d8;
L_11de40eb:;
  /* 11de40eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11de40ed push edi */
  push32((uint32_t)(EDI));
  /* 11de40ee mov eax, ebx */
  EAX = (EBX);
  /* 11de40f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11de40f3 push esi */
  push32((uint32_t)(ESI));
  /* 11de40f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11de40f6:;
  /* 11de40f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11de40f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11de40fd mov eax, ecx */
  EAX = (ECX);
  /* 11de40ff mov esi, edi */
  ESI = (EDI);
  /* 11de4101 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11de4103 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4105 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4107 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11de410a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de410d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11de410f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11de4111 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4114 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11de411a jne 0x11de4138 */
  if (!C.zf) goto L_11de4138;
  /* 11de411c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11de4121 je 0x11de40f6 */
  if (C.zf) goto L_11de40f6;
  /* 11de4123 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11de4128 jne 0x11de4132 */
  if (!C.zf) goto L_11de4132;
  /* 11de412a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11de4130 jne 0x11de40f6 */
  if (!C.zf) goto L_11de40f6;
L_11de4132:;
  /* 11de4132 pop esi */
  ESI = (pop32());
  /* 11de4133 pop edi */
  EDI = (pop32());
L_11de4134:;
  /* 11de4134 pop ebx */
  EBX = (pop32());
  /* 11de4135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de4137 ret  */
  ESPCHK(0x11de40c0u, _esp0);
  ESP += 4; return;
L_11de4138:;
  /* 11de4138 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11de413b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de413d je 0x11de4175 */
  if (C.zf) goto L_11de4175;
  /* 11de413f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de4141 je 0x11de4132 */
  if (C.zf) goto L_11de4132;
  /* 11de4143 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4145 je 0x11de416e */
  if (C.zf) goto L_11de416e;
  /* 11de4147 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11de4149 je 0x11de4132 */
  if (C.zf) goto L_11de4132;
  /* 11de414b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11de414e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4150 je 0x11de4167 */
  if (C.zf) goto L_11de4167;
  /* 11de4152 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de4154 je 0x11de4132 */
  if (C.zf) goto L_11de4132;
  /* 11de4156 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4158 je 0x11de4160 */
  if (C.zf) goto L_11de4160;
  /* 11de415a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11de415c je 0x11de4132 */
  if (C.zf) goto L_11de4132;
  /* 11de415e jmp 0x11de40f6 */
  goto L_11de40f6;
L_11de4160:;
  /* 11de4160 pop esi */
  ESI = (pop32());
  /* 11de4161 pop edi */
  EDI = (pop32());
  /* 11de4162 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11de4165 pop ebx */
  EBX = (pop32());
  /* 11de4166 ret  */
  ESPCHK(0x11de40c0u, _esp0);
  ESP += 4; return;
L_11de4167:;
  /* 11de4167 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11de416a pop esi */
  ESI = (pop32());
  /* 11de416b pop edi */
  EDI = (pop32());
  /* 11de416c pop ebx */
  EBX = (pop32());
  /* 11de416d ret  */
  ESPCHK(0x11de40c0u, _esp0);
  ESP += 4; return;
L_11de416e:;
  /* 11de416e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11de4171 pop esi */
  ESI = (pop32());
  /* 11de4172 pop edi */
  EDI = (pop32());
  /* 11de4173 pop ebx */
  EBX = (pop32());
  /* 11de4174 ret  */
  ESPCHK(0x11de40c0u, _esp0);
  ESP += 4; return;
L_11de4175:;
  /* 11de4175 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11de4178 pop esi */
  ESI = (pop32());
  /* 11de4179 pop edi */
  EDI = (pop32());
  /* 11de417a pop ebx */
  EBX = (pop32());
  /* 11de417b ret  */
  ESPCHK(0x11de40c0u, _esp0);
  ESP += 4; return;
  /* 11de417c int3  */
  x86_unimpl("int3 @ 0x11de417c");
  /* 11de417d int3  */
  x86_unimpl("int3 @ 0x11de417d");
  /* 11de417e int3  */
  x86_unimpl("int3 @ 0x11de417e");
  /* 11de417f int3  */
  x86_unimpl("int3 @ 0x11de417f");
}

/* _strstr @ 0x11de4180 (128 bytes, 66 insns) */
void f_11de4180(void) {
  FTRACE(0x11de4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4180 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de4184 push edi */
  push32((uint32_t)(EDI));
  /* 11de4185 push ebx */
  push32((uint32_t)(EBX));
  /* 11de4186 push esi */
  push32((uint32_t)(ESI));
  /* 11de4187 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11de4189 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11de418d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de418f je 0x11de41fa */
  if (C.zf) goto L_11de41fa;
  /* 11de4191 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11de4194 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11de4196 je 0x11de41e7 */
  if (C.zf) goto L_11de41e7;
L_11de4198:;
  /* 11de4198 mov esi, edi */
  ESI = (EDI);
  /* 11de419a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11de419e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11de41a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de41a1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de41a3 je 0x11de41ba */
  if (C.zf) goto L_11de41ba;
  /* 11de41a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de41a7 je 0x11de41b4 */
  if (C.zf) goto L_11de41b4;
L_11de41a9:;
  /* 11de41a9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de41ab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11de41ac:;
  /* 11de41ac cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de41ae je 0x11de41ba */
  if (C.zf) goto L_11de41ba;
  /* 11de41b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de41b2 jne 0x11de41a9 */
  if (!C.zf) goto L_11de41a9;
L_11de41b4:;
  /* 11de41b4 pop esi */
  ESI = (pop32());
  /* 11de41b5 pop ebx */
  EBX = (pop32());
  /* 11de41b6 pop edi */
  EDI = (pop32());
  /* 11de41b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de41b9 ret  */
  ESPCHK(0x11de4180u, _esp0);
  ESP += 4; return;
L_11de41ba:;
  /* 11de41ba mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de41bc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de41bd cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de41bf jne 0x11de41ac */
  if (!C.zf) goto L_11de41ac;
  /* 11de41c1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11de41c4:;
  /* 11de41c4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11de41c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11de41c9 je 0x11de41f3 */
  if (C.zf) goto L_11de41f3;
  /* 11de41cb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de41cd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de41d0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de41d2 jne 0x11de4198 */
  if (!C.zf) goto L_11de4198;
  /* 11de41d4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11de41d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de41d9 je 0x11de41f3 */
  if (C.zf) goto L_11de41f3;
  /* 11de41db mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11de41de add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de41e1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de41e3 je 0x11de41c4 */
  if (C.zf) goto L_11de41c4;
  /* 11de41e5 jmp 0x11de4198 */
  goto L_11de4198;
L_11de41e7:;
  /* 11de41e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de41e9 pop esi */
  ESI = (pop32());
  /* 11de41ea pop ebx */
  EBX = (pop32());
  /* 11de41eb pop edi */
  EDI = (pop32());
  /* 11de41ec mov al, dl */
  AL = (DL);
  /* 11de41ee jmp 0x11de40c6 */
  jmp_ind(0x11de40c6u); return;
L_11de41f3:;
  /* 11de41f3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11de41f6 pop esi */
  ESI = (pop32());
  /* 11de41f7 pop ebx */
  EBX = (pop32());
  /* 11de41f8 pop edi */
  EDI = (pop32());
  /* 11de41f9 ret  */
  ESPCHK(0x11de4180u, _esp0);
  ESP += 4; return;
L_11de41fa:;
  /* 11de41fa mov eax, edi */
  EAX = (EDI);
  /* 11de41fc pop esi */
  ESI = (pop32());
  /* 11de41fd pop ebx */
  EBX = (pop32());
  /* 11de41fe pop edi */
  EDI = (pop32());
  /* 11de41ff ret  */
  ESPCHK(0x11de4180u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11de4200 (56 bytes, 31 insns) */
void f_11de4200(void) {
  FTRACE(0x11de4200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4200 push ebp */
  push32((uint32_t)(EBP));
  /* 11de4201 mov ebp, esp */
  EBP = (ESP);
  /* 11de4203 push edi */
  push32((uint32_t)(EDI));
  /* 11de4204 push esi */
  push32((uint32_t)(ESI));
  /* 11de4205 push ebx */
  push32((uint32_t)(EBX));
  /* 11de4206 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4209 jecxz 0x11de4231 */
  x86_unimpl("jecxz @ 0x11de4209");
  /* 11de420b mov ebx, ecx */
  EBX = (ECX);
  /* 11de420d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4210 mov esi, edi */
  ESI = (EDI);
  /* 11de4212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de4214 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11de4216 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de4218 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de421a mov edi, esi */
  EDI = (ESI);
  /* 11de421c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de421f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11de4221 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11de4224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de4226 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4229 ja 0x11de422f */
  if ((!C.cf&&!C.zf)) goto L_11de422f;
  /* 11de422b je 0x11de4231 */
  if (C.zf) goto L_11de4231;
  /* 11de422d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de422e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11de422f:;
  /* 11de422f not ecx */
  ECX = (~(ECX));
L_11de4231:;
  /* 11de4231 mov eax, ecx */
  EAX = (ECX);
  /* 11de4233 pop ebx */
  EBX = (pop32());
  /* 11de4234 pop esi */
  ESI = (pop32());
  /* 11de4235 pop edi */
  EDI = (pop32());
  /* 11de4236 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de4237 ret  */
  ESPCHK(0x11de4200u, _esp0);
  ESP += 4; return;
}

/* FUN_10004240 @ 0x11de4240 (47 bytes, 17 insns) */
void f_11de4240(void) {
  FTRACE(0x11de4240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4240 push ecx */
  push32((uint32_t)(ECX));
  /* 11de4241 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4246 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11de424a jb 0x11de4260 */
  if (C.cf) goto L_11de4260;
L_11de424c:;
  /* 11de424c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4252 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4257 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11de4259 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de425e jae 0x11de424c */
  if (!C.cf) goto L_11de424c;
L_11de4260:;
  /* 11de4260 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4262 mov eax, esp */
  EAX = (ESP);
  /* 11de4264 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11de4266 mov esp, ecx */
  ESP = (ECX);
  /* 11de4268 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11de426a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11de426d push eax */
  push32((uint32_t)(EAX));
  /* 11de426e ret  */
  ESPCHK(0x11de4240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000426f @ 0x11de426f (72 bytes, 17 insns) */
void f_11de426f(void) {
  FTRACE(0x11de426fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de426f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11de4274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4276 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de427c call dword ptr [0x11de8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8054))), 0x11de4282u);
  /* 11de4282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4284 mov dword ptr [0x11dec268], eax */
  w32((uint32_t)(0x11dec268), (EAX));
  /* 11de4289 jne 0x11de428c */
  if (!C.zf) goto L_11de428c;
  /* 11de428b ret  */
  ESPCHK(0x11de426fu, _esp0);
  ESP += 4; return;
L_11de428c:;
  /* 11de428c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de4290 and dword ptr [0x11dec260], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dec260)))&(0x0u); w32((uint32_t)(0x11dec260), (_r)); fl_logic(_r,32); }
  /* 11de4297 and dword ptr [0x11dec264], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dec264)))&(0x0u); w32((uint32_t)(0x11dec264), (_r)); fl_logic(_r,32); }
  /* 11de429e push 1 */
  push32((uint32_t)(0x1u));
  /* 11de42a0 mov dword ptr [0x11dec25c], eax */
  w32((uint32_t)(0x11dec25c), (EAX));
  /* 11de42a5 mov dword ptr [0x11dec26c], ecx */
  w32((uint32_t)(0x11dec26c), (ECX));
  /* 11de42ab mov dword ptr [0x11dec254], 0x10 */
  w32((uint32_t)(0x11dec254), (0x10u));
  /* 11de42b5 pop eax */
  EAX = (pop32());
  /* 11de42b6 ret  */
  ESPCHK(0x11de426fu, _esp0);
  ESP += 4; return;
}

/* FUN_100042b7 @ 0x11de42b7 (43 bytes, 14 insns) */
void f_11de42b7(void) {
  FTRACE(0x11de42b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de42b7 mov eax, dword ptr [0x11dec264] */
  EAX = (r32((uint32_t)(0x11dec264)));
  /* 11de42bc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11de42bf mov eax, dword ptr [0x11dec268] */
  EAX = (r32((uint32_t)(0x11dec268)));
  /* 11de42c4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11de42c7:;
  /* 11de42c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de42c9 jae 0x11de42df */
  if (!C.cf) goto L_11de42df;
  /* 11de42cb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de42cf sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de42d2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de42d8 jb 0x11de42e1 */
  if (C.cf) goto L_11de42e1;
  /* 11de42da add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de42dd jmp 0x11de42c7 */
  goto L_11de42c7;
L_11de42df:;
  /* 11de42df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de42e1:;
  /* 11de42e1 ret  */
  ESPCHK(0x11de42b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e2 @ 0x11de42e2 (809 bytes, 265 insns) */
void f_11de42e2(void) {
  FTRACE(0x11de42e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de42e2 push ebp */
  push32((uint32_t)(EBP));
  /* 11de42e3 mov ebp, esp */
  EBP = (ESP);
  /* 11de42e5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de42e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de42eb push ebx */
  push32((uint32_t)(EBX));
  /* 11de42ec push esi */
  push32((uint32_t)(ESI));
  /* 11de42ed mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de42f0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11de42f3 push edi */
  push32((uint32_t)(EDI));
  /* 11de42f4 mov edi, esi */
  EDI = (ESI);
  /* 11de42f6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de42f9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de42fc shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11de42ff mov ecx, edi */
  ECX = (EDI);
  /* 11de4301 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de4307 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11de430e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11de4311 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11de4313 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de4314 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11de4317 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11de431a jne 0x11de4606 */
  if (!C.zf) goto L_11de4606;
  /* 11de4320 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11de4323 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11de4326 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11de4329 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11de432c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11de432f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11de4332 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11de4335 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11de4338 jne 0x11de43b8 */
  if (!C.zf) goto L_11de43b8;
  /* 11de433a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11de433d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de433e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4341 jbe 0x11de4346 */
  if ((C.cf||C.zf)) goto L_11de4346;
  /* 11de4343 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de4345 pop edx */
  EDX = (pop32());
L_11de4346:;
  /* 11de4346 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de4349 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de434c jne 0x11de439a */
  if (!C.zf) goto L_11de439a;
  /* 11de434e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4351 jae 0x11de4371 */
  if (!C.cf) goto L_11de4371;
  /* 11de4353 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4358 mov ecx, edx */
  ECX = (EDX);
  /* 11de435a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de435c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11de4360 not ebx */
  EBX = (~(EBX));
  /* 11de4362 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11de4366 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11de4368 jne 0x11de4392 */
  if (!C.zf) goto L_11de4392;
  /* 11de436a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de436d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11de436f jmp 0x11de4392 */
  goto L_11de4392;
L_11de4371:;
  /* 11de4371 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11de4374 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4379 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de437b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11de437f not ebx */
  EBX = (~(EBX));
  /* 11de4381 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11de4388 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11de438a jne 0x11de4392 */
  if (!C.zf) goto L_11de4392;
  /* 11de438c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de438f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de4392:;
  /* 11de4392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4395 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4398 jmp 0x11de439d */
  goto L_11de439d;
L_11de439a:;
  /* 11de439a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11de439d:;
  /* 11de439d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11de43a0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de43a3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de43a6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11de43a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de43ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11de43af mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11de43b2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11de43b5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11de43b8:;
  /* 11de43b8 mov edx, ecx */
  EDX = (ECX);
  /* 11de43ba sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11de43bd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de43be cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de43c1 jbe 0x11de43c6 */
  if ((C.cf||C.zf)) goto L_11de43c6;
  /* 11de43c3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de43c5 pop edx */
  EDX = (pop32());
L_11de43c6:;
  /* 11de43c6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de43c9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11de43cc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11de43cf jne 0x11de4469 */
  if (!C.zf) goto L_11de4469;
  /* 11de43d5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de43d8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de43db sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11de43de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de43e0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11de43e3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11de43e4 pop esi */
  ESI = (pop32());
  /* 11de43e5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de43e7 jbe 0x11de43eb */
  if ((C.cf||C.zf)) goto L_11de43eb;
  /* 11de43e9 mov ebx, esi */
  EBX = (ESI);
L_11de43eb:;
  /* 11de43eb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de43ee mov edx, ecx */
  EDX = (ECX);
  /* 11de43f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11de43f3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11de43f6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de43f7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de43f9 jbe 0x11de43fd */
  if ((C.cf||C.zf)) goto L_11de43fd;
  /* 11de43fb mov edx, esi */
  EDX = (ESI);
L_11de43fd:;
  /* 11de43fd cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de43ff je 0x11de4464 */
  if (C.zf) goto L_11de4464;
  /* 11de4401 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4404 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11de4407 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de440a jne 0x11de444c */
  if (!C.zf) goto L_11de444c;
  /* 11de440c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de440f jae 0x11de442d */
  if (!C.cf) goto L_11de442d;
  /* 11de4411 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11de4416 mov ecx, ebx */
  ECX = (EBX);
  /* 11de4418 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11de441a not esi */
  ESI = (~(ESI));
  /* 11de441c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11de4420 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11de4424 jne 0x11de444c */
  if (!C.zf) goto L_11de444c;
  /* 11de4426 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4429 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11de442b jmp 0x11de444c */
  goto L_11de444c;
L_11de442d:;
  /* 11de442d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11de4430 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11de4435 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11de4437 not esi */
  ESI = (~(ESI));
  /* 11de4439 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11de4440 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11de4444 jne 0x11de444c */
  if (!C.zf) goto L_11de444c;
  /* 11de4446 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4449 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de444c:;
  /* 11de444c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de444f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11de4452 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11de4455 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11de4458 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de445b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11de445e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11de4461 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11de4464:;
  /* 11de4464 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4467 jmp 0x11de446c */
  goto L_11de446c;
L_11de4469:;
  /* 11de4469 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11de446c:;
  /* 11de446c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4470 jne 0x11de447a */
  if (!C.zf) goto L_11de447a;
  /* 11de4472 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4474 je 0x11de44fb */
  if (C.zf) goto L_11de44fb;
L_11de447a:;
  /* 11de447a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11de447d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11de4481 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11de4484 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11de4487 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11de448a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11de448d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4490 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11de4493 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4496 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4499 jne 0x11de44fb */
  if (!C.zf) goto L_11de44fb;
  /* 11de449b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11de449f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de44a2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11de44a5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11de44a7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11de44ab jae 0x11de44d2 */
  if (!C.cf) goto L_11de44d2;
  /* 11de44ad cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de44b1 jne 0x11de44c1 */
  if (!C.zf) goto L_11de44c1;
  /* 11de44b3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de44b8 mov ecx, edx */
  ECX = (EDX);
  /* 11de44ba shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de44bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de44bf or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11de44c1:;
  /* 11de44c1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de44c6 mov ecx, edx */
  ECX = (EDX);
  /* 11de44c8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de44ca lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11de44ce or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11de44d0 jmp 0x11de44fb */
  goto L_11de44fb;
L_11de44d2:;
  /* 11de44d2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de44d6 jne 0x11de44e8 */
  if (!C.zf) goto L_11de44e8;
  /* 11de44d8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11de44db mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de44e0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de44e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de44e5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de44e8:;
  /* 11de44e8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11de44eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11de44f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11de44f2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11de44f9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11de44fb:;
  /* 11de44fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de44fe mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de4500 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11de4504 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11de4507 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11de4509 jne 0x11de4606 */
  if (!C.zf) goto L_11de4606;
  /* 11de450f mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de4514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4516 je 0x11de45f8 */
  if (C.zf) goto L_11de45f8;
  /* 11de451c mov ecx, dword ptr [0x11dec258] */
  ECX = (r32((uint32_t)(0x11dec258)));
  /* 11de4522 mov esi, dword ptr [0x11de8060] */
  ESI = (r32((uint32_t)(0x11de8060)));
  /* 11de4528 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11de452b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de452e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11de4533 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11de4538 push ebx */
  push32((uint32_t)(EBX));
  /* 11de4539 push ecx */
  push32((uint32_t)(ECX));
  /* 11de453a call esi */
  call_ind((uint32_t)(ESI), 0x11de453cu);
  /* 11de453c mov ecx, dword ptr [0x11dec258] */
  ECX = (r32((uint32_t)(0x11dec258)));
  /* 11de4542 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de4547 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11de454c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11de454e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11de4551 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de4556 mov ecx, dword ptr [0x11dec258] */
  ECX = (r32((uint32_t)(0x11dec258)));
  /* 11de455c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11de455f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11de4567 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de456c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11de456f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11de4572 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de4577 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11de457a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de457e jne 0x11de4589 */
  if (!C.zf) goto L_11de4589;
  /* 11de4580 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de4584 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
L_11de4589:;
  /* 11de4589 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de458d jne 0x11de45f8 */
  if (!C.zf) goto L_11de45f8;
  /* 11de458f push ebx */
  push32((uint32_t)(EBX));
  /* 11de4590 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4592 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11de4595 call esi */
  call_ind((uint32_t)(ESI), 0x11de4597u);
  /* 11de4597 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de459c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11de459f push 0 */
  push32((uint32_t)(0x0u));
  /* 11de45a1 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de45a7 call dword ptr [0x11de805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de805c))), 0x11de45adu);
  /* 11de45ad mov eax, dword ptr [0x11dec264] */
  EAX = (r32((uint32_t)(0x11dec264)));
  /* 11de45b2 mov edx, dword ptr [0x11dec268] */
  EDX = (r32((uint32_t)(0x11dec268)));
  /* 11de45b8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11de45bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de45be mov ecx, eax */
  ECX = (EAX);
  /* 11de45c0 mov eax, dword ptr [0x11dec260] */
  EAX = (r32((uint32_t)(0x11dec260)));
  /* 11de45c5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de45c7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11de45cb push ecx */
  push32((uint32_t)(ECX));
  /* 11de45cc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11de45cf push ecx */
  push32((uint32_t)(ECX));
  /* 11de45d0 push eax */
  push32((uint32_t)(EAX));
  /* 11de45d1 call 0x11de5f50 */
  push32(0x11de45d6u); f_11de5f50();
  /* 11de45d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de45d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de45dc dec dword ptr [0x11dec264] */
  { uint32_t _r=(r32((uint32_t)(0x11dec264)))-1; w32((uint32_t)(0x11dec264), (_r)); fl_dec(_r,32); }
  /* 11de45e2 cmp eax, dword ptr [0x11dec260] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11dec260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de45e8 jbe 0x11de45ee */
  if ((C.cf||C.zf)) goto L_11de45ee;
  /* 11de45ea sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11de45ee:;
  /* 11de45ee mov eax, dword ptr [0x11dec268] */
  EAX = (r32((uint32_t)(0x11dec268)));
  /* 11de45f3 mov dword ptr [0x11dec25c], eax */
  w32((uint32_t)(0x11dec25c), (EAX));
L_11de45f8:;
  /* 11de45f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de45fb mov dword ptr [0x11dec258], edi */
  w32((uint32_t)(0x11dec258), (EDI));
  /* 11de4601 mov dword ptr [0x11dec260], eax */
  w32((uint32_t)(0x11dec260), (EAX));
L_11de4606:;
  /* 11de4606 pop edi */
  EDI = (pop32());
  /* 11de4607 pop esi */
  ESI = (pop32());
  /* 11de4608 pop ebx */
  EBX = (pop32());
  /* 11de4609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de460a ret  */
  ESPCHK(0x11de42e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000460b @ 0x11de460b (777 bytes, 275 insns) */
void f_11de460b(void) {
  FTRACE(0x11de460bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de460b push ebp */
  push32((uint32_t)(EBP));
  /* 11de460c mov ebp, esp */
  EBP = (ESP);
  /* 11de460e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4611 mov eax, dword ptr [0x11dec264] */
  EAX = (r32((uint32_t)(0x11dec264)));
  /* 11de4616 mov edx, dword ptr [0x11dec268] */
  EDX = (r32((uint32_t)(0x11dec268)));
  /* 11de461c push ebx */
  push32((uint32_t)(EBX));
  /* 11de461d push esi */
  push32((uint32_t)(ESI));
  /* 11de461e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11de4621 push edi */
  push32((uint32_t)(EDI));
  /* 11de4622 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11de4625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4628 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11de462b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11de462e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11de4631 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11de4634 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11de4637 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de4638 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de463b jge 0x11de464b */
  if ((C.sf==C.of)) goto L_11de464b;
  /* 11de463d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11de4640 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11de4642 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11de4646 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11de4649 jmp 0x11de465b */
  goto L_11de465b;
L_11de464b:;
  /* 11de464b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de464e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de4651 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11de4653 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11de4655 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11de4658 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11de465b:;
  /* 11de465b mov eax, dword ptr [0x11dec25c] */
  EAX = (r32((uint32_t)(0x11dec25c)));
  /* 11de4660 mov ebx, eax */
  EBX = (EAX);
  /* 11de4662 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4664 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de4667 jae 0x11de4682 */
  if (!C.cf) goto L_11de4682;
L_11de4669:;
  /* 11de4669 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de466c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11de466e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11de4671 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11de4673 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11de4675 jne 0x11de4682 */
  if (!C.zf) goto L_11de4682;
  /* 11de4677 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de467a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de467d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de4680 jb 0x11de4669 */
  if (C.cf) goto L_11de4669;
L_11de4682:;
  /* 11de4682 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4685 jne 0x11de4700 */
  if (!C.zf) goto L_11de4700;
  /* 11de4687 mov ebx, edx */
  EBX = (EDX);
L_11de4689:;
  /* 11de4689 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de468b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de468e jae 0x11de46a5 */
  if (!C.cf) goto L_11de46a5;
  /* 11de4690 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de4693 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11de4695 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11de4698 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11de469a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11de469c jne 0x11de46a3 */
  if (!C.zf) goto L_11de46a3;
  /* 11de469e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de46a1 jmp 0x11de4689 */
  goto L_11de4689;
L_11de46a3:;
  /* 11de46a3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11de46a5:;
  /* 11de46a5 jne 0x11de4700 */
  if (!C.zf) goto L_11de4700;
L_11de46a7:;
  /* 11de46a7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de46aa jae 0x11de46bd */
  if (!C.cf) goto L_11de46bd;
  /* 11de46ac cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de46b0 jne 0x11de46ba */
  if (!C.zf) goto L_11de46ba;
  /* 11de46b2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de46b5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de46b8 jmp 0x11de46a7 */
  goto L_11de46a7;
L_11de46ba:;
  /* 11de46ba cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11de46bd:;
  /* 11de46bd jne 0x11de46e5 */
  if (!C.zf) goto L_11de46e5;
  /* 11de46bf mov ebx, edx */
  EBX = (EDX);
L_11de46c1:;
  /* 11de46c1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de46c3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de46c6 jae 0x11de46d5 */
  if (!C.cf) goto L_11de46d5;
  /* 11de46c8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de46cc jne 0x11de46d3 */
  if (!C.zf) goto L_11de46d3;
  /* 11de46ce add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de46d1 jmp 0x11de46c1 */
  goto L_11de46c1;
L_11de46d3:;
  /* 11de46d3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11de46d5:;
  /* 11de46d5 jne 0x11de46e5 */
  if (!C.zf) goto L_11de46e5;
  /* 11de46d7 call 0x11de4914 */
  push32(0x11de46dcu); f_11de4914();
  /* 11de46dc mov ebx, eax */
  EBX = (EAX);
  /* 11de46de test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de46e0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de46e3 je 0x11de46f9 */
  if (C.zf) goto L_11de46f9;
L_11de46e5:;
  /* 11de46e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11de46e6 call 0x11de49c5 */
  push32(0x11de46ebu); f_11de49c5();
  /* 11de46eb pop ecx */
  ECX = (pop32());
  /* 11de46ec mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11de46ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11de46f1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11de46f4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de46f7 jne 0x11de4700 */
  if (!C.zf) goto L_11de4700;
L_11de46f9:;
  /* 11de46f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de46fb jmp 0x11de490f */
  goto L_11de490f;
L_11de4700:;
  /* 11de4700 mov dword ptr [0x11dec25c], ebx */
  w32((uint32_t)(0x11dec25c), (EBX));
  /* 11de4706 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11de4709 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11de470b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de470e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11de4711 je 0x11de4727 */
  if (C.zf) goto L_11de4727;
  /* 11de4713 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11de471a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11de471e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11de4721 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11de4723 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11de4725 jne 0x11de475e */
  if (!C.zf) goto L_11de475e;
L_11de4727:;
  /* 11de4727 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11de472d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11de4730 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11de4733 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11de4736 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de473a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11de473d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11de473f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11de4742 jne 0x11de475b */
  if (!C.zf) goto L_11de475b;
L_11de4744:;
  /* 11de4744 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11de474a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11de474d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11de4750 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4753 mov edi, esi */
  EDI = (ESI);
  /* 11de4755 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11de4757 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11de4759 je 0x11de4744 */
  if (C.zf) goto L_11de4744;
L_11de475b:;
  /* 11de475b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11de475e:;
  /* 11de475e mov ecx, edx */
  ECX = (EDX);
  /* 11de4760 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de4762 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de4768 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11de476f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11de4772 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11de4776 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11de4778 jne 0x11de4787 */
  if (!C.zf) goto L_11de4787;
  /* 11de477a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11de4781 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11de4783 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11de4786 pop edi */
  EDI = (pop32());
L_11de4787:;
  /* 11de4787 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11de4789 jl 0x11de4790 */
  if ((C.sf!=C.of)) goto L_11de4790;
  /* 11de478b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11de478d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de478e jmp 0x11de4787 */
  goto L_11de4787;
L_11de4790:;
  /* 11de4790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11de4793 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11de4797 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11de4799 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de479c mov esi, ecx */
  ESI = (ECX);
  /* 11de479e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11de47a1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11de47a4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11de47a5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de47a8 jle 0x11de47ad */
  if ((C.zf||C.sf!=C.of)) goto L_11de47ad;
  /* 11de47aa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de47ac pop esi */
  ESI = (pop32());
L_11de47ad:;
  /* 11de47ad cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de47af je 0x11de48c2 */
  if (C.zf) goto L_11de48c2;
  /* 11de47b5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11de47b8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de47bb jne 0x11de481e */
  if (!C.zf) goto L_11de481e;
  /* 11de47bd cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de47c0 jge 0x11de47ed */
  if ((C.sf==C.of)) goto L_11de47ed;
  /* 11de47c2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de47c7 mov ecx, edi */
  ECX = (EDI);
  /* 11de47c9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de47cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de47ce lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11de47d2 not ebx */
  EBX = (~(EBX));
  /* 11de47d4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11de47d7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11de47db mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11de47df dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11de47e1 jne 0x11de481b */
  if (!C.zf) goto L_11de481b;
  /* 11de47e3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de47e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11de47e9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11de47eb jmp 0x11de481e */
  goto L_11de481e;
L_11de47ed:;
  /* 11de47ed lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11de47f0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de47f5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de47f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de47fa lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11de47fe lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11de4805 not ebx */
  EBX = (~(EBX));
  /* 11de4807 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11de4809 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11de480b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11de480e jne 0x11de481b */
  if (!C.zf) goto L_11de481b;
  /* 11de4810 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4813 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11de4816 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de4819 jmp 0x11de481e */
  goto L_11de481e;
L_11de481b:;
  /* 11de481b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11de481e:;
  /* 11de481e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11de4821 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11de4824 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4828 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11de482b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11de482e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11de4831 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11de4834 je 0x11de48ce */
  if (C.zf) goto L_11de48ce;
  /* 11de483a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11de483d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11de4841 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11de4844 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11de4847 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11de484a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11de484d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11de4850 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11de4853 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11de4856 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4859 jne 0x11de48bf */
  if (!C.zf) goto L_11de48bf;
  /* 11de485b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11de485f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4862 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11de4865 jge 0x11de4890 */
  if ((C.sf==C.of)) goto L_11de4890;
  /* 11de4867 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11de4869 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de486d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11de4871 jne 0x11de487e */
  if (!C.zf) goto L_11de487e;
  /* 11de4873 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11de4878 mov ecx, esi */
  ECX = (ESI);
  /* 11de487a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11de487c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11de487e:;
  /* 11de487e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11de4883 mov ecx, esi */
  ECX = (ESI);
  /* 11de4885 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11de4887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de488a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11de488e jmp 0x11de48bf */
  goto L_11de48bf;
L_11de4890:;
  /* 11de4890 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11de4892 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4896 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11de489a jne 0x11de48a9 */
  if (!C.zf) goto L_11de48a9;
  /* 11de489c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11de489f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11de48a4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11de48a6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11de48a9:;
  /* 11de48a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de48ac lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11de48b3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11de48b6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11de48bb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11de48bd or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11de48bf:;
  /* 11de48bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11de48c2:;
  /* 11de48c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11de48c4 je 0x11de48d1 */
  if (C.zf) goto L_11de48d1;
  /* 11de48c6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11de48c8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11de48cc jmp 0x11de48d1 */
  goto L_11de48d1;
L_11de48ce:;
  /* 11de48ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11de48d1:;
  /* 11de48d1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11de48d4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de48d6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11de48d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11de48db mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11de48df mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11de48e2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11de48e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11de48e6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11de48e9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11de48eb jne 0x11de4907 */
  if (!C.zf) goto L_11de4907;
  /* 11de48ed cmp ebx, dword ptr [0x11dec260] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11dec260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de48f3 jne 0x11de4907 */
  if (!C.zf) goto L_11de4907;
  /* 11de48f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de48f8 cmp ecx, dword ptr [0x11dec258] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11dec258))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de48fe jne 0x11de4907 */
  if (!C.zf) goto L_11de4907;
  /* 11de4900 and dword ptr [0x11dec260], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11dec260)))&(0x0u); w32((uint32_t)(0x11dec260), (_r)); fl_logic(_r,32); }
L_11de4907:;
  /* 11de4907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de490a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11de490c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11de490f:;
  /* 11de490f pop edi */
  EDI = (pop32());
  /* 11de4910 pop esi */
  ESI = (pop32());
  /* 11de4911 pop ebx */
  EBX = (pop32());
  /* 11de4912 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de4913 ret  */
  ESPCHK(0x11de460bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004914 @ 0x11de4914 (177 bytes, 53 insns) */
void f_11de4914(void) {
  FTRACE(0x11de4914u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4914 mov eax, dword ptr [0x11dec264] */
  EAX = (r32((uint32_t)(0x11dec264)));
  /* 11de4919 mov ecx, dword ptr [0x11dec254] */
  ECX = (r32((uint32_t)(0x11dec254)));
  /* 11de491f push esi */
  push32((uint32_t)(ESI));
  /* 11de4920 push edi */
  push32((uint32_t)(EDI));
  /* 11de4921 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de4923 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4925 jne 0x11de4957 */
  if (!C.zf) goto L_11de4957;
  /* 11de4927 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11de492b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de492e push eax */
  push32((uint32_t)(EAX));
  /* 11de492f push dword ptr [0x11dec268] */
  push32((uint32_t)(r32((uint32_t)(0x11dec268))));
  /* 11de4935 push edi */
  push32((uint32_t)(EDI));
  /* 11de4936 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de493c call dword ptr [0x11de8038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8038))), 0x11de4942u);
  /* 11de4942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4944 je 0x11de49a7 */
  if (C.zf) goto L_11de49a7;
  /* 11de4946 add dword ptr [0x11dec254], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11dec254))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11dec254), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de494d mov dword ptr [0x11dec268], eax */
  w32((uint32_t)(0x11dec268), (EAX));
  /* 11de4952 mov eax, dword ptr [0x11dec264] */
  EAX = (r32((uint32_t)(0x11dec264)));
L_11de4957:;
  /* 11de4957 mov ecx, dword ptr [0x11dec268] */
  ECX = (r32((uint32_t)(0x11dec268)));
  /* 11de495d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11de4962 push 8 */
  push32((uint32_t)(0x8u));
  /* 11de4964 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11de4967 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de496d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11de4970 call dword ptr [0x11de8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8054))), 0x11de4976u);
  /* 11de4976 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4978 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11de497b je 0x11de49a7 */
  if (C.zf) goto L_11de49a7;
  /* 11de497d push 4 */
  push32((uint32_t)(0x4u));
  /* 11de497f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11de4984 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11de4989 push edi */
  push32((uint32_t)(EDI));
  /* 11de498a call dword ptr [0x11de803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de803c))), 0x11de4990u);
  /* 11de4990 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4992 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11de4995 jne 0x11de49ab */
  if (!C.zf) goto L_11de49ab;
  /* 11de4997 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11de499a push edi */
  push32((uint32_t)(EDI));
  /* 11de499b push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de49a1 call dword ptr [0x11de805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de805c))), 0x11de49a7u);
L_11de49a7:;
  /* 11de49a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de49a9 jmp 0x11de49c2 */
  goto L_11de49c2;
L_11de49ab:;
  /* 11de49ab or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11de49af mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11de49b1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11de49b4 inc dword ptr [0x11dec264] */
  { uint32_t _r=(r32((uint32_t)(0x11dec264)))+1; w32((uint32_t)(0x11dec264), (_r)); fl_inc(_r,32); }
  /* 11de49ba mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11de49bd or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11de49c0 mov eax, esi */
  EAX = (ESI);
L_11de49c2:;
  /* 11de49c2 pop edi */
  EDI = (pop32());
  /* 11de49c3 pop esi */
  ESI = (pop32());
  /* 11de49c4 ret  */
  ESPCHK(0x11de4914u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c5 @ 0x11de49c5 (251 bytes, 85 insns) */
void f_11de49c5(void) {
  FTRACE(0x11de49c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de49c5 push ebp */
  push32((uint32_t)(EBP));
  /* 11de49c6 mov ebp, esp */
  EBP = (ESP);
  /* 11de49c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11de49c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de49cc push ebx */
  push32((uint32_t)(EBX));
  /* 11de49cd push esi */
  push32((uint32_t)(ESI));
  /* 11de49ce push edi */
  push32((uint32_t)(EDI));
  /* 11de49cf mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11de49d2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11de49d5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11de49d7:;
  /* 11de49d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de49d9 jl 0x11de49e0 */
  if ((C.sf!=C.of)) goto L_11de49e0;
  /* 11de49db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11de49dd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de49de jmp 0x11de49d7 */
  goto L_11de49d7;
L_11de49e0:;
  /* 11de49e0 mov eax, ebx */
  EAX = (EBX);
  /* 11de49e2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de49e4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de49ea pop edx */
  EDX = (pop32());
  /* 11de49eb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11de49f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11de49f5:;
  /* 11de49f5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11de49f8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11de49fb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de49fe dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de49ff jne 0x11de49f5 */
  if (!C.zf) goto L_11de49f5;
  /* 11de4a01 mov edi, ebx */
  EDI = (EBX);
  /* 11de4a03 push 4 */
  push32((uint32_t)(0x4u));
  /* 11de4a05 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11de4a08 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4a0b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11de4a10 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11de4a15 push edi */
  push32((uint32_t)(EDI));
  /* 11de4a16 call dword ptr [0x11de803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de803c))), 0x11de4a1cu);
  /* 11de4a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4a1e jne 0x11de4a28 */
  if (!C.zf) goto L_11de4a28;
  /* 11de4a20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de4a23 jmp 0x11de4abb */
  goto L_11de4abb;
L_11de4a28:;
  /* 11de4a28 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11de4a2e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4a30 ja 0x11de4a6e */
  if ((!C.cf&&!C.zf)) goto L_11de4a6e;
  /* 11de4a32 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11de4a35:;
  /* 11de4a35 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11de4a39 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11de4a40 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11de4a46 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11de4a4d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11de4a4f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11de4a55 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11de4a58 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11de4a62 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4a67 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11de4a6a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4a6c jbe 0x11de4a35 */
  if ((C.cf||C.zf)) goto L_11de4a35;
L_11de4a6e:;
  /* 11de4a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4a71 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11de4a74 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4a79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de4a7b pop edi */
  EDI = (pop32());
  /* 11de4a7c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11de4a7f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11de4a82 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11de4a85 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11de4a88 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11de4a8b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11de4a90 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11de4a97 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11de4a9a mov cl, al */
  CL = (AL);
  /* 11de4a9c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11de4a9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de4aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4aa3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11de4aa6 jne 0x11de4aab */
  if (!C.zf) goto L_11de4aab;
  /* 11de4aa8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11de4aab:;
  /* 11de4aab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11de4ab0 mov ecx, ebx */
  ECX = (EBX);
  /* 11de4ab2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11de4ab4 not edx */
  EDX = (~(EDX));
  /* 11de4ab6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11de4ab9 mov eax, ebx */
  EAX = (EBX);
L_11de4abb:;
  /* 11de4abb pop edi */
  EDI = (pop32());
  /* 11de4abc pop esi */
  ESI = (pop32());
  /* 11de4abd pop ebx */
  EBX = (pop32());
  /* 11de4abe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de4abf ret  */
  ESPCHK(0x11de49c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x11de4ac0 (758 bytes, 259 insns) */
void f_11de4ac0(void) {
  FTRACE(0x11de4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11de4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11de4ac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4ac6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4ac9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4acc push ebx */
  push32((uint32_t)(EBX));
  /* 11de4acd push esi */
  push32((uint32_t)(ESI));
  /* 11de4ace push edi */
  push32((uint32_t)(EDI));
  /* 11de4acf mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4ad2 mov edx, edi */
  EDX = (EDI);
  /* 11de4ad4 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11de4ad7 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4ada mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11de4add and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de4ae0 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11de4ae3 mov ecx, edx */
  ECX = (EDX);
  /* 11de4ae5 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de4aeb lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11de4af2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11de4af5 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11de4af8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de4af9 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4afb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11de4afe mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11de4b02 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11de4b06 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11de4b09 jle 0x11de4c6e */
  if ((C.zf||C.sf!=C.of)) goto L_11de4c6e;
  /* 11de4b0f test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11de4b12 jne 0x11de4c67 */
  if (!C.zf) goto L_11de4c67;
  /* 11de4b18 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4b1a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4b1c jg 0x11de4c67 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de4c67;
  /* 11de4b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4b25 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11de4b28 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de4b29 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4b2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11de4b2f jbe 0x11de4b37 */
  if ((C.cf||C.zf)) goto L_11de4b37;
  /* 11de4b31 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de4b33 pop ecx */
  ECX = (pop32());
  /* 11de4b34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11de4b37:;
  /* 11de4b37 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11de4b3a cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4b3d jne 0x11de4b87 */
  if (!C.zf) goto L_11de4b87;
  /* 11de4b3f cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4b42 jae 0x11de4b63 */
  if (!C.cf) goto L_11de4b63;
  /* 11de4b44 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4b49 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de4b4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de4b4e lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11de4b52 not ebx */
  EBX = (~(EBX));
  /* 11de4b54 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11de4b58 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11de4b5a jne 0x11de4b87 */
  if (!C.zf) goto L_11de4b87;
  /* 11de4b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4b5f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11de4b61 jmp 0x11de4b87 */
  goto L_11de4b87;
L_11de4b63:;
  /* 11de4b63 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4b66 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4b6b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de4b6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11de4b70 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11de4b74 not ebx */
  EBX = (~(EBX));
  /* 11de4b76 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11de4b7d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11de4b7f jne 0x11de4b87 */
  if (!C.zf) goto L_11de4b87;
  /* 11de4b81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4b84 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de4b87:;
  /* 11de4b87 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11de4b8a mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11de4b8d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11de4b90 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11de4b93 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11de4b96 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11de4b99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4b9c sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4b9e add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de4ba1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4ba5 jle 0x11de4c55 */
  if ((C.zf||C.sf!=C.of)) goto L_11de4c55;
  /* 11de4bab mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4bae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4bb1 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11de4bb4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11de4bb5 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11de4bb9 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4bbc jbe 0x11de4bc1 */
  if ((C.cf||C.zf)) goto L_11de4bc1;
  /* 11de4bbe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de4bc0 pop edi */
  EDI = (pop32());
L_11de4bc1:;
  /* 11de4bc1 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11de4bc4 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11de4bc7 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11de4bca mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de4bcd mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11de4bd0 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4bd3 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11de4bd6 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11de4bd9 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11de4bdc mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11de4bdf mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11de4be2 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4be5 jne 0x11de4c43 */
  if (!C.zf) goto L_11de4c43;
  /* 11de4be7 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11de4beb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4bee mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11de4bf1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11de4bf3 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11de4bf7 jae 0x11de4c1a */
  if (!C.cf) goto L_11de4c1a;
  /* 11de4bf9 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4bfd jne 0x11de4c0d */
  if (!C.zf) goto L_11de4c0d;
  /* 11de4bff mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4c04 mov ecx, edi */
  ECX = (EDI);
  /* 11de4c06 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de4c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4c0b or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11de4c0d:;
  /* 11de4c0d lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11de4c11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11de4c16 mov ecx, edi */
  ECX = (EDI);
  /* 11de4c18 jmp 0x11de4c3f */
  goto L_11de4c3f;
L_11de4c1a:;
  /* 11de4c1a cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4c1e jne 0x11de4c30 */
  if (!C.zf) goto L_11de4c30;
  /* 11de4c20 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11de4c23 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4c28 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de4c2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4c2d or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de4c30:;
  /* 11de4c30 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11de4c37 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11de4c3a mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11de4c3f:;
  /* 11de4c3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11de4c41 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11de4c43:;
  /* 11de4c43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4c49 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11de4c4d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11de4c4f mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11de4c53 jmp 0x11de4c58 */
  goto L_11de4c58;
L_11de4c55:;
  /* 11de4c55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11de4c58:;
  /* 11de4c58 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11de4c5b mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11de4c5e mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11de4c62 jmp 0x11de4dae */
  goto L_11de4dae;
L_11de4c67:;
  /* 11de4c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de4c69 jmp 0x11de4db1 */
  goto L_11de4db1;
L_11de4c6e:;
  /* 11de4c6e jge 0x11de4dae */
  if ((C.sf==C.of)) goto L_11de4dae;
  /* 11de4c74 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de4c77 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de4c7a lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11de4c7d mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11de4c80 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11de4c84 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4c87 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11de4c8a sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11de4c8d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11de4c8e mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11de4c91 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4c94 jbe 0x11de4c99 */
  if ((C.cf||C.zf)) goto L_11de4c99;
  /* 11de4c96 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de4c98 pop esi */
  ESI = (pop32());
L_11de4c99:;
  /* 11de4c99 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11de4c9d jne 0x11de4d28 */
  if (!C.zf) goto L_11de4d28;
  /* 11de4ca3 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11de4ca6 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11de4ca9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11de4caa cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4cad jbe 0x11de4cb2 */
  if ((C.cf||C.zf)) goto L_11de4cb2;
  /* 11de4caf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de4cb1 pop esi */
  ESI = (pop32());
L_11de4cb2:;
  /* 11de4cb2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11de4cb5 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4cb8 jne 0x11de4d01 */
  if (!C.zf) goto L_11de4d01;
  /* 11de4cba cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4cbd jae 0x11de4cdd */
  if (!C.cf) goto L_11de4cdd;
  /* 11de4cbf mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4cc4 mov ecx, esi */
  ECX = (ESI);
  /* 11de4cc6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de4cc8 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11de4ccc not ebx */
  EBX = (~(EBX));
  /* 11de4cce and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11de4cd2 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11de4cd4 jne 0x11de4cfe */
  if (!C.zf) goto L_11de4cfe;
  /* 11de4cd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4cd9 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11de4cdb jmp 0x11de4cfe */
  goto L_11de4cfe;
L_11de4cdd:;
  /* 11de4cdd lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11de4ce0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11de4ce5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11de4ce7 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11de4ceb not ebx */
  EBX = (~(EBX));
  /* 11de4ced and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11de4cf4 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11de4cf6 jne 0x11de4cfe */
  if (!C.zf) goto L_11de4cfe;
  /* 11de4cf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4cfb and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de4cfe:;
  /* 11de4cfe mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11de4d01:;
  /* 11de4d01 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11de4d04 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11de4d07 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11de4d0a mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11de4d0d mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11de4d10 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11de4d13 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4d16 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4d19 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11de4d1c sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11de4d1f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11de4d20 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4d23 jbe 0x11de4d28 */
  if ((C.cf||C.zf)) goto L_11de4d28;
  /* 11de4d25 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11de4d27 pop esi */
  ESI = (pop32());
L_11de4d28:;
  /* 11de4d28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11de4d2b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11de4d2f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11de4d32 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11de4d35 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11de4d38 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11de4d3b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de4d3e mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11de4d41 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11de4d44 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4d47 jne 0x11de4da5 */
  if (!C.zf) goto L_11de4da5;
  /* 11de4d49 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11de4d4d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4d50 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11de4d53 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11de4d55 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11de4d59 jae 0x11de4d7c */
  if (!C.cf) goto L_11de4d7c;
  /* 11de4d5b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4d5f jne 0x11de4d6f */
  if (!C.zf) goto L_11de4d6f;
  /* 11de4d61 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11de4d66 mov ecx, esi */
  ECX = (ESI);
  /* 11de4d68 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11de4d6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4d6d or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11de4d6f:;
  /* 11de4d6f lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11de4d73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11de4d78 mov ecx, esi */
  ECX = (ESI);
  /* 11de4d7a jmp 0x11de4da1 */
  goto L_11de4da1;
L_11de4d7c:;
  /* 11de4d7c cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de4d80 jne 0x11de4d92 */
  if (!C.zf) goto L_11de4d92;
  /* 11de4d82 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11de4d85 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11de4d8a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11de4d8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de4d8f or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11de4d92:;
  /* 11de4d92 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11de4d99 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11de4d9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11de4da1:;
  /* 11de4da1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11de4da3 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11de4da5:;
  /* 11de4da5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de4da8 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11de4daa mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11de4dae:;
  /* 11de4dae push 1 */
  push32((uint32_t)(0x1u));
  /* 11de4db0 pop eax */
  EAX = (pop32());
L_11de4db1:;
  /* 11de4db1 pop edi */
  EDI = (pop32());
  /* 11de4db2 pop esi */
  ESI = (pop32());
  /* 11de4db3 pop ebx */
  EBX = (pop32());
  /* 11de4db4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de4db5 ret  */
  ESPCHK(0x11de4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db6 @ 0x11de4db6 (324 bytes, 102 insns) */
void f_11de4db6(void) {
  FTRACE(0x11de4db6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4db6 cmp dword ptr [0x11de9700], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11de9700))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4dbd push ebx */
  push32((uint32_t)(EBX));
  /* 11de4dbe push ebp */
  push32((uint32_t)(EBP));
  /* 11de4dbf push esi */
  push32((uint32_t)(ESI));
  /* 11de4dc0 push edi */
  push32((uint32_t)(EDI));
  /* 11de4dc1 jne 0x11de4dca */
  if (!C.zf) goto L_11de4dca;
  /* 11de4dc3 mov esi, 0x11de96f0 */
  ESI = (0x11de96f0u);
  /* 11de4dc8 jmp 0x11de4de7 */
  goto L_11de4de7;
L_11de4dca:;
  /* 11de4dca push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11de4dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4dd1 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de4dd7 call dword ptr [0x11de8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8054))), 0x11de4dddu);
  /* 11de4ddd mov esi, eax */
  ESI = (EAX);
  /* 11de4ddf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de4de1 je 0x11de4ef3 */
  if (C.zf) goto L_11de4ef3;
L_11de4de7:;
  /* 11de4de7 mov ebp, dword ptr [0x11de803c] */
  EBP = (r32((uint32_t)(0x11de803c)));
  /* 11de4ded push 4 */
  push32((uint32_t)(0x4u));
  /* 11de4def push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11de4df4 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11de4df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4dfb call ebp */
  call_ind((uint32_t)(EBP), 0x11de4dfdu);
  /* 11de4dfd mov edi, eax */
  EDI = (EAX);
  /* 11de4dff test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de4e01 je 0x11de4edc */
  if (C.zf) goto L_11de4edc;
  /* 11de4e07 push 4 */
  push32((uint32_t)(0x4u));
  /* 11de4e09 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11de4e0e push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11de4e13 push ebx */
  push32((uint32_t)(EBX));
  /* 11de4e14 push edi */
  push32((uint32_t)(EDI));
  /* 11de4e15 call ebp */
  call_ind((uint32_t)(EBP), 0x11de4e17u);
  /* 11de4e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4e19 je 0x11de4ece */
  if (C.zf) goto L_11de4ece;
  /* 11de4e1f mov eax, 0x11de96f0 */
  EAX = (0x11de96f0u);
  /* 11de4e24 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4e26 jne 0x11de4e46 */
  if (!C.zf) goto L_11de4e46;
  /* 11de4e28 cmp dword ptr [0x11de96f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11de96f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4e2f jne 0x11de4e36 */
  if (!C.zf) goto L_11de4e36;
  /* 11de4e31 mov dword ptr [0x11de96f0], eax */
  w32((uint32_t)(0x11de96f0), (EAX));
L_11de4e36:;
  /* 11de4e36 cmp dword ptr [0x11de96f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11de96f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4e3d jne 0x11de4e5b */
  if (!C.zf) goto L_11de4e5b;
  /* 11de4e3f mov dword ptr [0x11de96f4], eax */
  w32((uint32_t)(0x11de96f4), (EAX));
  /* 11de4e44 jmp 0x11de4e5b */
  goto L_11de4e5b;
L_11de4e46:;
  /* 11de4e46 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de4e48 mov eax, dword ptr [0x11de96f4] */
  EAX = (r32((uint32_t)(0x11de96f4)));
  /* 11de4e4d mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11de4e50 mov dword ptr [0x11de96f4], esi */
  w32((uint32_t)(0x11de96f4), (ESI));
  /* 11de4e56 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4e59 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11de4e5b:;
  /* 11de4e5b lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11de4e61 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11de4e67 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11de4e6a lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11de4e6d mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11de4e70 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11de4e73 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11de4e76 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11de4e78 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11de4e7d:;
  /* 11de4e7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11de4e7f cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4e82 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11de4e85 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de4e86 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de4e88 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de4e89 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11de4e8a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11de4e8c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11de4e8f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4e92 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4e98 jl 0x11de4e7d */
  if ((C.sf!=C.of)) goto L_11de4e7d;
  /* 11de4e9a push ebx */
  push32((uint32_t)(EBX));
  /* 11de4e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4e9d push edi */
  push32((uint32_t)(EDI));
  /* 11de4e9e call 0x11de5630 */
  push32(0x11de4ea3u); f_11de5630();
  /* 11de4ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de4ea6:;
  /* 11de4ea6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11de4ea9 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4eab cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4ead jae 0x11de4eca */
  if (!C.cf) goto L_11de4eca;
  /* 11de4eaf or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11de4eb6 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11de4eb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11de4ebb mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11de4ec2 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4ec8 jmp 0x11de4ea6 */
  goto L_11de4ea6;
L_11de4eca:;
  /* 11de4eca mov eax, esi */
  EAX = (ESI);
  /* 11de4ecc jmp 0x11de4ef5 */
  goto L_11de4ef5;
L_11de4ece:;
  /* 11de4ece push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11de4ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4ed5 push edi */
  push32((uint32_t)(EDI));
  /* 11de4ed6 call dword ptr [0x11de8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8060))), 0x11de4edcu);
L_11de4edc:;
  /* 11de4edc cmp esi, 0x11de96f0 */
  { uint32_t _a=(ESI),_b=(0x11de96f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4ee2 je 0x11de4ef3 */
  if (C.zf) goto L_11de4ef3;
  /* 11de4ee4 push esi */
  push32((uint32_t)(ESI));
  /* 11de4ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4ee7 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de4eed call dword ptr [0x11de805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de805c))), 0x11de4ef3u);
L_11de4ef3:;
  /* 11de4ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de4ef5:;
  /* 11de4ef5 pop edi */
  EDI = (pop32());
  /* 11de4ef6 pop esi */
  ESI = (pop32());
  /* 11de4ef7 pop ebp */
  EBP = (pop32());
  /* 11de4ef8 pop ebx */
  EBX = (pop32());
  /* 11de4ef9 ret  */
  ESPCHK(0x11de4db6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004efa @ 0x11de4efa (86 bytes, 27 insns) */
void f_11de4efa(void) {
  FTRACE(0x11de4efau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4efa push esi */
  push32((uint32_t)(ESI));
  /* 11de4efb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de4eff push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11de4f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4f06 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11de4f09 call dword ptr [0x11de8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8060))), 0x11de4f0fu);
  /* 11de4f0f cmp dword ptr [0x11deb710], esi */
  { uint32_t _a=(r32((uint32_t)(0x11deb710))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4f15 jne 0x11de4f1f */
  if (!C.zf) goto L_11de4f1f;
  /* 11de4f17 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4f1a mov dword ptr [0x11deb710], eax */
  w32((uint32_t)(0x11deb710), (EAX));
L_11de4f1f:;
  /* 11de4f1f cmp esi, 0x11de96f0 */
  { uint32_t _a=(ESI),_b=(0x11de96f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4f25 je 0x11de4f47 */
  if (C.zf) goto L_11de4f47;
  /* 11de4f27 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4f2a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11de4f2c push esi */
  push32((uint32_t)(ESI));
  /* 11de4f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11de4f2f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11de4f31 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de4f33 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4f36 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11de4f39 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de4f3f call dword ptr [0x11de805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de805c))), 0x11de4f45u);
  /* 11de4f45 pop esi */
  ESI = (pop32());
  /* 11de4f46 ret  */
  ESPCHK(0x11de4efau, _esp0);
  ESP += 4; return;
L_11de4f47:;
  /* 11de4f47 or dword ptr [0x11de9700], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11de9700)))|(0xffffffffu); w32((uint32_t)(0x11de9700), (_r)); fl_logic(_r,32); }
  /* 11de4f4e pop esi */
  ESI = (pop32());
  /* 11de4f4f ret  */
  ESPCHK(0x11de4efau, _esp0);
  ESP += 4; return;
}

/* FUN_10004f50 @ 0x11de4f50 (194 bytes, 66 insns) */
void f_11de4f50(void) {
  FTRACE(0x11de4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11de4f51 mov ebp, esp */
  EBP = (ESP);
  /* 11de4f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11de4f54 push ebx */
  push32((uint32_t)(EBX));
  /* 11de4f55 push esi */
  push32((uint32_t)(ESI));
  /* 11de4f56 mov esi, dword ptr [0x11de96f4] */
  ESI = (r32((uint32_t)(0x11de96f4)));
  /* 11de4f5c push edi */
  push32((uint32_t)(EDI));
L_11de4f5d:;
  /* 11de4f5d cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4f61 je 0x11de4ffb */
  if (C.zf) goto L_11de4ffb;
  /* 11de4f67 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de4f6b lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11de4f71 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11de4f76:;
  /* 11de4f76 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4f7c jne 0x11de4fb7 */
  if (!C.zf) goto L_11de4fb7;
  /* 11de4f7e mov eax, ebx */
  EAX = (EBX);
  /* 11de4f80 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11de4f85 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4f88 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11de4f8d push eax */
  push32((uint32_t)(EAX));
  /* 11de4f8e call dword ptr [0x11de8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8060))), 0x11de4f94u);
  /* 11de4f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4f96 je 0x11de4fb7 */
  if (C.zf) goto L_11de4fb7;
  /* 11de4f98 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11de4f9b dec dword ptr [0x11dec180] */
  { uint32_t _r=(r32((uint32_t)(0x11dec180)))-1; w32((uint32_t)(0x11dec180), (_r)); fl_dec(_r,32); }
  /* 11de4fa1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11de4fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de4fa6 je 0x11de4fac */
  if (C.zf) goto L_11de4fac;
  /* 11de4fa8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4faa jbe 0x11de4faf */
  if ((C.cf||C.zf)) goto L_11de4faf;
L_11de4fac:;
  /* 11de4fac mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11de4faf:;
  /* 11de4faf inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11de4fb2 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11de4fb5 je 0x11de4fc4 */
  if (C.zf) goto L_11de4fc4;
L_11de4fb7:;
  /* 11de4fb7 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4fbd sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de4fc0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de4fc2 jge 0x11de4f76 */
  if ((C.sf==C.of)) goto L_11de4f76;
L_11de4fc4:;
  /* 11de4fc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4fc8 mov ecx, esi */
  ECX = (ESI);
  /* 11de4fca mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11de4fcd je 0x11de4ffb */
  if (C.zf) goto L_11de4ffb;
  /* 11de4fcf cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4fd3 jne 0x11de4ffb */
  if (!C.zf) goto L_11de4ffb;
  /* 11de4fd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de4fd7 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11de4fda pop edx */
  EDX = (pop32());
L_11de4fdb:;
  /* 11de4fdb cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4fde jne 0x11de4fec */
  if (!C.zf) goto L_11de4fec;
  /* 11de4fe0 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de4fe1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de4fe4 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4fea jl 0x11de4fdb */
  if ((C.sf!=C.of)) goto L_11de4fdb;
L_11de4fec:;
  /* 11de4fec cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de4ff2 jne 0x11de4ffb */
  if (!C.zf) goto L_11de4ffb;
  /* 11de4ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11de4ff5 call 0x11de4efa */
  push32(0x11de4ffau); f_11de4efa();
  /* 11de4ffa pop ecx */
  ECX = (pop32());
L_11de4ffb:;
  /* 11de4ffb cmp esi, dword ptr [0x11de96f4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11de96f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5001 je 0x11de500d */
  if (C.zf) goto L_11de500d;
  /* 11de5003 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5007 jg 0x11de4f5d */
  if ((!C.zf&&C.sf==C.of)) goto L_11de4f5d;
L_11de500d:;
  /* 11de500d pop edi */
  EDI = (pop32());
  /* 11de500e pop esi */
  ESI = (pop32());
  /* 11de500f pop ebx */
  EBX = (pop32());
  /* 11de5010 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5011 ret  */
  ESPCHK(0x11de4f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005012 @ 0x11de5012 (87 bytes, 34 insns) */
void f_11de5012(void) {
  FTRACE(0x11de5012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5012 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de5016 mov edx, 0x11de96f0 */
  EDX = (0x11de96f0u);
  /* 11de501b push esi */
  push32((uint32_t)(ESI));
  /* 11de501c mov ecx, edx */
  ECX = (EDX);
L_11de501e:;
  /* 11de501e cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5021 jbe 0x11de5028 */
  if ((C.cf||C.zf)) goto L_11de5028;
  /* 11de5023 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5026 jb 0x11de5030 */
  if (C.cf) goto L_11de5030;
L_11de5028:;
  /* 11de5028 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11de502a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de502c je 0x11de5065 */
  if (C.zf) goto L_11de5065;
  /* 11de502e jmp 0x11de501e */
  goto L_11de501e;
L_11de5030:;
  /* 11de5030 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11de5032 jne 0x11de5065 */
  if (!C.zf) goto L_11de5065;
  /* 11de5034 mov esi, eax */
  ESI = (EAX);
  /* 11de5036 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11de503b and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11de5041 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5043 jb 0x11de5065 */
  if (C.cf) goto L_11de5065;
  /* 11de5045 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11de5049 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11de504b mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11de504f mov ecx, eax */
  ECX = (EAX);
  /* 11de5051 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11de5056 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5058 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11de505a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de505c pop esi */
  ESI = (pop32());
  /* 11de505d sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11de5060 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11de5064 ret  */
  ESPCHK(0x11de5012u, _esp0);
  ESP += 4; return;
L_11de5065:;
  /* 11de5065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de5067 pop esi */
  ESI = (pop32());
  /* 11de5068 ret  */
  ESPCHK(0x11de5012u, _esp0);
  ESP += 4; return;
}

/* FUN_10005069 @ 0x11de5069 (69 bytes, 19 insns) */
void f_11de5069(void) {
  FTRACE(0x11de5069u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5069 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de506d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de5071 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5074 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11de5077 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11de507b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11de507f movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11de5082 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de5084 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11de5087 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de508d mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11de5094 jne 0x11de50ad */
  if (!C.zf) goto L_11de50ad;
  /* 11de5096 inc dword ptr [0x11dec180] */
  { uint32_t _r=(r32((uint32_t)(0x11dec180)))+1; w32((uint32_t)(0x11dec180), (_r)); fl_inc(_r,32); }
  /* 11de509c cmp dword ptr [0x11dec180], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11dec180))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de50a3 jne 0x11de50ad */
  if (!C.zf) goto L_11de50ad;
  /* 11de50a5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11de50a7 call 0x11de4f50 */
  push32(0x11de50acu); f_11de4f50();
  /* 11de50ac pop ecx */
  ECX = (pop32());
L_11de50ad:;
  /* 11de50ad ret  */
  ESPCHK(0x11de5069u, _esp0);
  ESP += 4; return;
}

/* FUN_100050ae @ 0x11de50ae (520 bytes, 180 insns) */
void f_11de50ae(void) {
  FTRACE(0x11de50aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de50ae push ebp */
  push32((uint32_t)(EBP));
  /* 11de50af mov ebp, esp */
  EBP = (ESP);
  /* 11de50b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11de50b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11de50b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de50b4 push esi */
  push32((uint32_t)(ESI));
  /* 11de50b5 mov esi, dword ptr [0x11deb710] */
  ESI = (r32((uint32_t)(0x11deb710)));
  /* 11de50bb push edi */
  push32((uint32_t)(EDI));
L_11de50bc:;
  /* 11de50bc mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11de50bf cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de50c2 je 0x11de5167 */
  if (C.zf) goto L_11de5167;
  /* 11de50c8 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11de50cb lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11de50d1 mov eax, edi */
  EAX = (EDI);
  /* 11de50d3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de50d5 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de50d8 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11de50db shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11de50de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de50e0 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de50e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11de50e5 jae 0x11de5121 */
  if (!C.cf) goto L_11de5121;
L_11de50e7:;
  /* 11de50e7 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11de50e9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de50ec cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de50ee jl 0x11de510a */
  if ((C.sf!=C.of)) goto L_11de510a;
  /* 11de50f0 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de50f3 jbe 0x11de510a */
  if ((C.cf||C.zf)) goto L_11de510a;
  /* 11de50f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11de50f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11de50f7 push eax */
  push32((uint32_t)(EAX));
  /* 11de50f8 call 0x11de52b6 */
  push32(0x11de50fdu); f_11de52b6();
  /* 11de50fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5102 jne 0x11de5179 */
  if (!C.zf) goto L_11de5179;
  /* 11de5104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de5107 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11de510a:;
  /* 11de510a add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de510d lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11de5113 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5118 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de511a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11de511d jb 0x11de50e7 */
  if (C.cf) goto L_11de50e7;
  /* 11de511f jmp 0x11de5124 */
  goto L_11de5124;
L_11de5121:;
  /* 11de5121 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11de5124:;
  /* 11de5124 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11de5127 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11de512a lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11de512d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11de5130 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5132 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11de5135 jae 0x11de516a */
  if (!C.cf) goto L_11de516a;
L_11de5137:;
  /* 11de5137 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11de5139 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de513b jl 0x11de5156 */
  if ((C.sf!=C.of)) goto L_11de5156;
  /* 11de513d cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5140 jbe 0x11de5156 */
  if ((C.cf||C.zf)) goto L_11de5156;
  /* 11de5142 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5143 push eax */
  push32((uint32_t)(EAX));
  /* 11de5144 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11de5147 call 0x11de52b6 */
  push32(0x11de514cu); f_11de52b6();
  /* 11de514c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de514f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5151 jne 0x11de5179 */
  if (!C.zf) goto L_11de5179;
  /* 11de5153 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11de5156:;
  /* 11de5156 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de515d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5160 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5163 jb 0x11de5137 */
  if (C.cf) goto L_11de5137;
  /* 11de5165 jmp 0x11de516a */
  goto L_11de516a;
L_11de5167:;
  /* 11de5167 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11de516a:;
  /* 11de516a mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11de516c cmp esi, dword ptr [0x11deb710] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11deb710))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5172 je 0x11de5189 */
  if (C.zf) goto L_11de5189;
  /* 11de5174 jmp 0x11de50bc */
  goto L_11de50bc;
L_11de5179:;
  /* 11de5179 mov dword ptr [0x11deb710], esi */
  w32((uint32_t)(0x11deb710), (ESI));
  /* 11de517f sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de5181 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11de5184 jmp 0x11de52b1 */
  goto L_11de52b1;
L_11de5189:;
  /* 11de5189 mov eax, 0x11de96f0 */
  EAX = (0x11de96f0u);
  /* 11de518e mov edi, eax */
  EDI = (EAX);
L_11de5190:;
  /* 11de5190 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5194 je 0x11de519c */
  if (C.zf) goto L_11de519c;
  /* 11de5196 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de519a jne 0x11de51a8 */
  if (!C.zf) goto L_11de51a8;
L_11de519c:;
  /* 11de519c mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11de519e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de51a0 je 0x11de527d */
  if (C.zf) goto L_11de527d;
  /* 11de51a6 jmp 0x11de5190 */
  goto L_11de5190;
L_11de51a8:;
  /* 11de51a8 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11de51ab and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de51af mov esi, ebx */
  ESI = (EBX);
  /* 11de51b1 mov eax, ebx */
  EAX = (EBX);
  /* 11de51b3 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de51b5 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de51b8 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11de51bb shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11de51be add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de51c1 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de51c4 jne 0x11de51d7 */
  if (!C.zf) goto L_11de51d7;
L_11de51c6:;
  /* 11de51c6 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de51ca jge 0x11de51d7 */
  if ((C.sf==C.of)) goto L_11de51d7;
  /* 11de51cc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de51cf inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11de51d2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de51d5 je 0x11de51c6 */
  if (C.zf) goto L_11de51c6;
L_11de51d7:;
  /* 11de51d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de51da push 4 */
  push32((uint32_t)(0x4u));
  /* 11de51dc shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11de51df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11de51e4 push eax */
  push32((uint32_t)(EAX));
  /* 11de51e5 push esi */
  push32((uint32_t)(ESI));
  /* 11de51e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11de51e9 call dword ptr [0x11de803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de803c))), 0x11de51efu);
  /* 11de51ef cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de51f1 jne 0x11de52af */
  if (!C.zf) goto L_11de52af;
  /* 11de51f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de51f9 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11de51fc push esi */
  push32((uint32_t)(ESI));
  /* 11de51fd call 0x11de5630 */
  push32(0x11de5202u); f_11de5630();
  /* 11de5202 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de5205 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5208 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11de520a mov ecx, ebx */
  ECX = (EBX);
  /* 11de520c jle 0x11de523e */
  if ((C.zf||C.sf!=C.of)) goto L_11de523e;
  /* 11de520e lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11de5211 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11de5214:;
  /* 11de5214 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11de521b lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11de521e mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11de5221 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11de5226 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11de5228 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11de522a mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11de5231 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5236 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5239 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11de523c jne 0x11de5214 */
  if (!C.zf) goto L_11de5214;
L_11de523e:;
  /* 11de523e mov dword ptr [0x11deb710], edi */
  w32((uint32_t)(0x11deb710), (EDI));
  /* 11de5244 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11de524a:;
  /* 11de524a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de524c jae 0x11de525a */
  if (!C.cf) goto L_11de525a;
  /* 11de524e cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5251 je 0x11de5258 */
  if (C.zf) goto L_11de5258;
  /* 11de5253 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5256 jmp 0x11de524a */
  goto L_11de524a;
L_11de5258:;
  /* 11de5258 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11de525a:;
  /* 11de525a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de525c and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11de525e mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11de5261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de5264 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11de5267 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11de526a sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de526c sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de526f lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11de5273 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11de5279 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11de527b jmp 0x11de52b1 */
  goto L_11de52b1;
L_11de527d:;
  /* 11de527d call 0x11de4db6 */
  push32(0x11de5282u); f_11de4db6();
  /* 11de5282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5284 je 0x11de52af */
  if (C.zf) goto L_11de52af;
  /* 11de5286 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11de5289 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11de528c lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11de5290 mov dword ptr [0x11deb710], eax */
  w32((uint32_t)(0x11deb710), (EAX));
  /* 11de5295 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11de5297 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11de529c sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de529e mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11de52a1 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11de52a4 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de52a7 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11de52ad jmp 0x11de52b1 */
  goto L_11de52b1;
L_11de52af:;
  /* 11de52af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de52b1:;
  /* 11de52b1 pop edi */
  EDI = (pop32());
  /* 11de52b2 pop esi */
  ESI = (pop32());
  /* 11de52b3 pop ebx */
  EBX = (pop32());
  /* 11de52b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de52b5 ret  */
  ESPCHK(0x11de50aeu, _esp0);
  ESP += 4; return;
}

/* FUN_100052b6 @ 0x11de52b6 (292 bytes, 125 insns) */
void f_11de52b6(void) {
  FTRACE(0x11de52b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de52b6 push ebp */
  push32((uint32_t)(EBP));
  /* 11de52b7 mov ebp, esp */
  EBP = (ESP);
  /* 11de52b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11de52ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de52bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de52c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11de52c1 push esi */
  push32((uint32_t)(ESI));
  /* 11de52c2 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11de52c5 push edi */
  push32((uint32_t)(EDI));
  /* 11de52c6 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11de52c8 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11de52ce cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de52d0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11de52d3 mov eax, edi */
  EAX = (EDI);
  /* 11de52d5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11de52d8 jb 0x11de52fb */
  if (C.cf) goto L_11de52fb;
  /* 11de52da lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11de52dd mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11de52df cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de52e1 jae 0x11de52ea */
  if (!C.cf) goto L_11de52ea;
  /* 11de52e3 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de52e5 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de52e8 jmp 0x11de52f3 */
  goto L_11de52f3;
L_11de52ea:;
  /* 11de52ea and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de52ee lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11de52f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11de52f3:;
  /* 11de52f3 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11de52f6 jmp 0x11de53c9 */
  goto L_11de53c9;
L_11de52fb:;
  /* 11de52fb add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de52fd cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5300 je 0x11de5304 */
  if (C.zf) goto L_11de5304;
  /* 11de5302 mov eax, esi */
  EAX = (ESI);
L_11de5304:;
  /* 11de5304 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11de5307 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5309 jae 0x11de534e */
  if (!C.cf) goto L_11de534e;
L_11de530b:;
  /* 11de530b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11de530d test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11de530f jne 0x11de5341 */
  if (!C.zf) goto L_11de5341;
  /* 11de5311 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5313 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11de5316 pop esi */
  ESI = (pop32());
L_11de5317:;
  /* 11de5317 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de531a jne 0x11de5320 */
  if (!C.zf) goto L_11de5320;
  /* 11de531c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de531d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de531e jmp 0x11de5317 */
  goto L_11de5317;
L_11de5320:;
  /* 11de5320 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5322 jae 0x11de5372 */
  if (!C.cf) goto L_11de5372;
  /* 11de5324 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5327 jne 0x11de532e */
  if (!C.zf) goto L_11de532e;
  /* 11de5329 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11de532c jmp 0x11de533a */
  goto L_11de533a;
L_11de532e:;
  /* 11de532e sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de5331 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5334 jb 0x11de53d3 */
  if (C.cf) goto L_11de53d3;
L_11de533a:;
  /* 11de533a mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11de533d mov eax, ebx */
  EAX = (EBX);
  /* 11de533f jmp 0x11de5346 */
  goto L_11de5346;
L_11de5341:;
  /* 11de5341 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11de5344 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11de5346:;
  /* 11de5346 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11de5349 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de534c jb 0x11de530b */
  if (C.cf) goto L_11de530b;
L_11de534e:;
  /* 11de534e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11de5351:;
  /* 11de5351 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5353 jae 0x11de53d3 */
  if (!C.cf) goto L_11de53d3;
  /* 11de5355 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11de5358 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de535b jae 0x11de53d3 */
  if (!C.cf) goto L_11de53d3;
  /* 11de535d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de535f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de5361 jne 0x11de53a3 */
  if (!C.zf) goto L_11de53a3;
  /* 11de5363 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5365 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11de5368 pop eax */
  EAX = (pop32());
L_11de5369:;
  /* 11de5369 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de536c jne 0x11de5393 */
  if (!C.zf) goto L_11de5393;
  /* 11de536e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11de536f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de5370 jmp 0x11de5369 */
  goto L_11de5369;
L_11de5372:;
  /* 11de5372 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11de5375 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5378 jae 0x11de5383 */
  if (!C.cf) goto L_11de5383;
  /* 11de537a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de537c mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11de537e mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11de5381 jmp 0x11de538c */
  goto L_11de538c;
L_11de5383:;
  /* 11de5383 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de5387 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11de538a mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11de538c:;
  /* 11de538c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11de538e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5391 jmp 0x11de53c9 */
  goto L_11de53c9;
L_11de5393:;
  /* 11de5393 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5395 jae 0x11de53aa */
  if (!C.cf) goto L_11de53aa;
  /* 11de5397 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11de539a cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de539d jb 0x11de53d3 */
  if (C.cf) goto L_11de53d3;
  /* 11de539f mov esi, ebx */
  ESI = (EBX);
  /* 11de53a1 jmp 0x11de5351 */
  goto L_11de5351;
L_11de53a3:;
  /* 11de53a3 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11de53a6 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de53a8 jmp 0x11de5351 */
  goto L_11de5351;
L_11de53aa:;
  /* 11de53aa lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11de53ad cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de53b0 jae 0x11de53bb */
  if (!C.cf) goto L_11de53bb;
  /* 11de53b2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de53b4 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11de53b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11de53b9 jmp 0x11de53c4 */
  goto L_11de53c4;
L_11de53bb:;
  /* 11de53bb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de53bf lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11de53c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11de53c4:;
  /* 11de53c4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11de53c6 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11de53c9:;
  /* 11de53c9 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11de53cc shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11de53cf sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de53d1 jmp 0x11de53d5 */
  goto L_11de53d5;
L_11de53d3:;
  /* 11de53d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de53d5:;
  /* 11de53d5 pop edi */
  EDI = (pop32());
  /* 11de53d6 pop esi */
  ESI = (pop32());
  /* 11de53d7 pop ebx */
  EBX = (pop32());
  /* 11de53d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de53d9 ret  */
  ESPCHK(0x11de52b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100053da @ 0x11de53da (169 bytes, 69 insns) */
void f_11de53da(void) {
  FTRACE(0x11de53dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de53da push ebp */
  push32((uint32_t)(EBP));
  /* 11de53db mov ebp, esp */
  EBP = (ESP);
  /* 11de53dd push ecx */
  push32((uint32_t)(ECX));
  /* 11de53de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de53e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11de53e2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de53e5 push esi */
  push32((uint32_t)(ESI));
  /* 11de53e6 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11de53e9 push edi */
  push32((uint32_t)(EDI));
  /* 11de53ea mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de53ed and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de53f1 mov eax, ebx */
  EAX = (EBX);
  /* 11de53f3 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de53f6 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11de53f9 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de53fc lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11de5400 jbe 0x11de5414 */
  if ((C.cf||C.zf)) goto L_11de5414;
  /* 11de5402 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de5405 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5407 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11de5409 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11de540b mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11de5412 jmp 0x11de5474 */
  goto L_11de5474;
L_11de5414:;
  /* 11de5414 jae 0x11de547b */
  if (!C.cf) goto L_11de547b;
  /* 11de5416 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11de5419 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11de541c lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11de5422 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5424 jb 0x11de547b */
  if (C.cf) goto L_11de547b;
  /* 11de5426 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11de5429:;
  /* 11de5429 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de542b jae 0x11de5437 */
  if (!C.cf) goto L_11de5437;
  /* 11de542d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5430 jne 0x11de5435 */
  if (!C.zf) goto L_11de5435;
  /* 11de5432 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de5433 jmp 0x11de5429 */
  goto L_11de5429;
L_11de5435:;
  /* 11de5435 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11de5437:;
  /* 11de5437 jne 0x11de547b */
  if (!C.zf) goto L_11de547b;
  /* 11de5439 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11de543c mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11de543e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11de5440 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5442 ja 0x11de546f */
  if ((!C.cf&&!C.zf)) goto L_11de546f;
  /* 11de5444 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5446 jbe 0x11de546f */
  if ((C.cf||C.zf)) goto L_11de546f;
  /* 11de5448 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11de544e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5450 jae 0x11de5466 */
  if (!C.cf) goto L_11de5466;
  /* 11de5452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de5454 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11de5456 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5458 jne 0x11de5461 */
  if (!C.zf) goto L_11de5461;
L_11de545a:;
  /* 11de545a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de545b cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de545f je 0x11de545a */
  if (C.zf) goto L_11de545a;
L_11de5461:;
  /* 11de5461 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11de5464 jmp 0x11de546f */
  goto L_11de546f;
L_11de5466:;
  /* 11de5466 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11de546a lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11de546d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11de546f:;
  /* 11de546f sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5472 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11de5474:;
  /* 11de5474 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11de547b:;
  /* 11de547b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11de547e pop edi */
  EDI = (pop32());
  /* 11de547f pop esi */
  ESI = (pop32());
  /* 11de5480 pop ebx */
  EBX = (pop32());
  /* 11de5481 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5482 ret  */
  ESPCHK(0x11de53dau, _esp0);
  ESP += 4; return;
}

/* FUN_10005483 @ 0x11de5483 (137 bytes, 50 insns) */
void f_11de5483(void) {
  FTRACE(0x11de5483u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5483 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5484 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de5486 cmp dword ptr [0x11dec184], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec184))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de548c push esi */
  push32((uint32_t)(ESI));
  /* 11de548d push edi */
  push32((uint32_t)(EDI));
  /* 11de548e jne 0x11de54d2 */
  if (!C.zf) goto L_11de54d2;
  /* 11de5490 push 0x11de8570 */
  push32((uint32_t)(0x11de8570u));
  /* 11de5495 call dword ptr [0x11de802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de802c))), 0x11de549bu);
  /* 11de549b mov edi, eax */
  EDI = (EAX);
  /* 11de549d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de549f je 0x11de5508 */
  if (C.zf) goto L_11de5508;
  /* 11de54a1 mov esi, dword ptr [0x11de8030] */
  ESI = (r32((uint32_t)(0x11de8030)));
  /* 11de54a7 push 0x11de8564 */
  push32((uint32_t)(0x11de8564u));
  /* 11de54ac push edi */
  push32((uint32_t)(EDI));
  /* 11de54ad call esi */
  call_ind((uint32_t)(ESI), 0x11de54afu);
  /* 11de54af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de54b1 mov dword ptr [0x11dec184], eax */
  w32((uint32_t)(0x11dec184), (EAX));
  /* 11de54b6 je 0x11de5508 */
  if (C.zf) goto L_11de5508;
  /* 11de54b8 push 0x11de8554 */
  push32((uint32_t)(0x11de8554u));
  /* 11de54bd push edi */
  push32((uint32_t)(EDI));
  /* 11de54be call esi */
  call_ind((uint32_t)(ESI), 0x11de54c0u);
  /* 11de54c0 push 0x11de8540 */
  push32((uint32_t)(0x11de8540u));
  /* 11de54c5 push edi */
  push32((uint32_t)(EDI));
  /* 11de54c6 mov dword ptr [0x11dec188], eax */
  w32((uint32_t)(0x11dec188), (EAX));
  /* 11de54cb call esi */
  call_ind((uint32_t)(ESI), 0x11de54cdu);
  /* 11de54cd mov dword ptr [0x11dec18c], eax */
  w32((uint32_t)(0x11dec18c), (EAX));
L_11de54d2:;
  /* 11de54d2 mov eax, dword ptr [0x11dec188] */
  EAX = (r32((uint32_t)(0x11dec188)));
  /* 11de54d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de54d9 je 0x11de54f1 */
  if (C.zf) goto L_11de54f1;
  /* 11de54db call eax */
  call_ind((uint32_t)(EAX), 0x11de54ddu);
  /* 11de54dd mov ebx, eax */
  EBX = (EAX);
  /* 11de54df test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de54e1 je 0x11de54f1 */
  if (C.zf) goto L_11de54f1;
  /* 11de54e3 mov eax, dword ptr [0x11dec18c] */
  EAX = (r32((uint32_t)(0x11dec18c)));
  /* 11de54e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de54ea je 0x11de54f1 */
  if (C.zf) goto L_11de54f1;
  /* 11de54ec push ebx */
  push32((uint32_t)(EBX));
  /* 11de54ed call eax */
  call_ind((uint32_t)(EAX), 0x11de54efu);
  /* 11de54ef mov ebx, eax */
  EBX = (EAX);
L_11de54f1:;
  /* 11de54f1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11de54f5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11de54f9 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11de54fd push ebx */
  push32((uint32_t)(EBX));
  /* 11de54fe call dword ptr [0x11dec184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11dec184))), 0x11de5504u);
L_11de5504:;
  /* 11de5504 pop edi */
  EDI = (pop32());
  /* 11de5505 pop esi */
  ESI = (pop32());
  /* 11de5506 pop ebx */
  EBX = (pop32());
  /* 11de5507 ret  */
  ESPCHK(0x11de5483u, _esp0);
  ESP += 4; return;
L_11de5508:;
  /* 11de5508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de550a jmp 0x11de5504 */
  goto L_11de5504;
}

/* _strncpy @ 0x11de5510 (254 bytes, 109 insns) */
void f_11de5510(void) {
  FTRACE(0x11de5510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5510 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11de5514 push edi */
  push32((uint32_t)(EDI));
  /* 11de5515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11de5517 je 0x11de5593 */
  if (C.zf) goto L_11de5593;
  /* 11de5519 push esi */
  push32((uint32_t)(ESI));
  /* 11de551a push ebx */
  push32((uint32_t)(EBX));
  /* 11de551b mov ebx, ecx */
  EBX = (ECX);
  /* 11de551d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11de5521 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11de5527 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11de552b jne 0x11de5534 */
  if (!C.zf) goto L_11de5534;
  /* 11de552d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de5530 jne 0x11de55a1 */
  if (!C.zf) goto L_11de55a1;
  /* 11de5532 jmp 0x11de5555 */
  goto L_11de5555;
L_11de5534:;
  /* 11de5534 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de5536 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de5537 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de5539 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de553a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de553b je 0x11de5562 */
  if (C.zf) goto L_11de5562;
  /* 11de553d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de553f je 0x11de556a */
  if (C.zf) goto L_11de556a;
  /* 11de5541 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11de5547 jne 0x11de5534 */
  if (!C.zf) goto L_11de5534;
  /* 11de5549 mov ebx, ecx */
  EBX = (ECX);
  /* 11de554b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de554e jne 0x11de55a1 */
  if (!C.zf) goto L_11de55a1;
L_11de5550:;
  /* 11de5550 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11de5553 je 0x11de5562 */
  if (C.zf) goto L_11de5562;
L_11de5555:;
  /* 11de5555 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de5557 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de5558 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de555a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de555b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de555d je 0x11de558e */
  if (C.zf) goto L_11de558e;
  /* 11de555f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11de5560 jne 0x11de5555 */
  if (!C.zf) goto L_11de5555;
L_11de5562:;
  /* 11de5562 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11de5566 pop ebx */
  EBX = (pop32());
  /* 11de5567 pop esi */
  ESI = (pop32());
  /* 11de5568 pop edi */
  EDI = (pop32());
  /* 11de5569 ret  */
  ESPCHK(0x11de5510u, _esp0);
  ESP += 4; return;
L_11de556a:;
  /* 11de556a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11de5570 je 0x11de5584 */
  if (C.zf) goto L_11de5584;
L_11de5572:;
  /* 11de5572 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de5574 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de5575 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de5576 je 0x11de5606 */
  if (C.zf) goto L_11de5606;
  /* 11de557c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11de5582 jne 0x11de5572 */
  if (!C.zf) goto L_11de5572;
L_11de5584:;
  /* 11de5584 mov ebx, ecx */
  EBX = (ECX);
  /* 11de5586 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de5589 jne 0x11de55f7 */
  if (!C.zf) goto L_11de55f7;
L_11de558b:;
  /* 11de558b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de558d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11de558e:;
  /* 11de558e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11de558f jne 0x11de558b */
  if (!C.zf) goto L_11de558b;
  /* 11de5591 pop ebx */
  EBX = (pop32());
  /* 11de5592 pop esi */
  ESI = (pop32());
L_11de5593:;
  /* 11de5593 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de5597 pop edi */
  EDI = (pop32());
  /* 11de5598 ret  */
  ESPCHK(0x11de5510u, _esp0);
  ESP += 4; return;
L_11de5599:;
  /* 11de5599 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11de559b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de559e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de559f je 0x11de5550 */
  if (C.zf) goto L_11de5550;
L_11de55a1:;
  /* 11de55a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11de55a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de55a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de55aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de55ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11de55af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11de55b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de55b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11de55b9 je 0x11de5599 */
  if (C.zf) goto L_11de5599;
  /* 11de55bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11de55bd je 0x11de55eb */
  if (C.zf) goto L_11de55eb;
  /* 11de55bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11de55c1 je 0x11de55e1 */
  if (C.zf) goto L_11de55e1;
  /* 11de55c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11de55c9 je 0x11de55d7 */
  if (C.zf) goto L_11de55d7;
  /* 11de55cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11de55d1 jne 0x11de5599 */
  if (!C.zf) goto L_11de5599;
  /* 11de55d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11de55d5 jmp 0x11de55ef */
  goto L_11de55ef;
L_11de55d7:;
  /* 11de55d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11de55dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11de55df jmp 0x11de55ef */
  goto L_11de55ef;
L_11de55e1:;
  /* 11de55e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11de55e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11de55e9 jmp 0x11de55ef */
  goto L_11de55ef;
L_11de55eb:;
  /* 11de55eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11de55ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11de55ef:;
  /* 11de55ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de55f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de55f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de55f5 je 0x11de5601 */
  if (C.zf) goto L_11de5601;
L_11de55f7:;
  /* 11de55f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de55f9:;
  /* 11de55f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11de55fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de55fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de55ff jne 0x11de55f9 */
  if (!C.zf) goto L_11de55f9;
L_11de5601:;
  /* 11de5601 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11de5604 jne 0x11de558b */
  if (!C.zf) goto L_11de558b;
L_11de5606:;
  /* 11de5606 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11de560a pop ebx */
  EBX = (pop32());
  /* 11de560b pop esi */
  ESI = (pop32());
  /* 11de560c pop edi */
  EDI = (pop32());
  /* 11de560d ret  */
  ESPCHK(0x11de5510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000560e @ 0x11de560e (27 bytes, 13 insns) */
void f_11de560e(void) {
  FTRACE(0x11de560eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de560e mov eax, dword ptr [0x11dec190] */
  EAX = (r32((uint32_t)(0x11dec190)));
  /* 11de5613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5615 je 0x11de5626 */
  if (C.zf) goto L_11de5626;
  /* 11de5617 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11de561b call eax */
  call_ind((uint32_t)(EAX), 0x11de561du);
  /* 11de561d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de561f pop ecx */
  ECX = (pop32());
  /* 11de5620 je 0x11de5626 */
  if (C.zf) goto L_11de5626;
  /* 11de5622 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5624 pop eax */
  EAX = (pop32());
  /* 11de5625 ret  */
  ESPCHK(0x11de560eu, _esp0);
  ESP += 4; return;
L_11de5626:;
  /* 11de5626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de5628 ret  */
  ESPCHK(0x11de560eu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11de5630 (88 bytes, 40 insns) */
void f_11de5630(void) {
  FTRACE(0x11de5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5630 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11de5634 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de5638 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11de563a je 0x11de5683 */
  if (C.zf) goto L_11de5683;
  /* 11de563c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de563e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11de5642 push edi */
  push32((uint32_t)(EDI));
  /* 11de5643 mov edi, ecx */
  EDI = (ECX);
  /* 11de5645 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5648 jb 0x11de5677 */
  if (C.cf) goto L_11de5677;
  /* 11de564a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de564c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11de564f je 0x11de5659 */
  if (C.zf) goto L_11de5659;
  /* 11de5651 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11de5653:;
  /* 11de5653 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de5655 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de5656 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de5657 jne 0x11de5653 */
  if (!C.zf) goto L_11de5653;
L_11de5659:;
  /* 11de5659 mov ecx, eax */
  ECX = (EAX);
  /* 11de565b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de565e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5660 mov ecx, eax */
  ECX = (EAX);
  /* 11de5662 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11de5665 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5667 mov ecx, edx */
  ECX = (EDX);
  /* 11de5669 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11de566c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de566f je 0x11de5677 */
  if (C.zf) goto L_11de5677;
  /* 11de5671 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11de5673 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11de5675 je 0x11de567d */
  if (C.zf) goto L_11de567d;
L_11de5677:;
  /* 11de5677 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de5679 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de567a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11de567b jne 0x11de5677 */
  if (!C.zf) goto L_11de5677;
L_11de567d:;
  /* 11de567d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de5681 pop edi */
  EDI = (pop32());
  /* 11de5682 ret  */
  ESPCHK(0x11de5630u, _esp0);
  ESP += 4; return;
L_11de5683:;
  /* 11de5683 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de5687 ret  */
  ESPCHK(0x11de5630u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11de5688 (32 bytes, 18 insns) */
void f_11de5688(void) {
  FTRACE(0x11de5688u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5688 push ebp */
  push32((uint32_t)(EBP));
  /* 11de5689 mov ebp, esp */
  EBP = (ESP);
  /* 11de568b push ebx */
  push32((uint32_t)(EBX));
  /* 11de568c push esi */
  push32((uint32_t)(ESI));
  /* 11de568d push edi */
  push32((uint32_t)(EDI));
  /* 11de568e push ebp */
  push32((uint32_t)(EBP));
  /* 11de568f push 0 */
  push32((uint32_t)(0x0u));
  /* 11de5691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de5693 push 0x11de56a0 */
  push32((uint32_t)(0x11de56a0u));
  /* 11de5698 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de569b call 0x11de7040 */
  push32(0x11de56a0u); f_11de7040();
  /* 11de56a0 pop ebp */
  EBP = (pop32());
  /* 11de56a1 pop edi */
  EDI = (pop32());
  /* 11de56a2 pop esi */
  ESI = (pop32());
  /* 11de56a3 pop ebx */
  EBX = (pop32());
  /* 11de56a4 mov esp, ebp */
  ESP = (EBP);
  /* 11de56a6 pop ebp */
  EBP = (pop32());
  /* 11de56a7 ret  */
  ESPCHK(0x11de5688u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11de56ca (104 bytes, 33 insns) */
void f_11de56ca(void) {
  FTRACE(0x11de56cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de56ca push ebx */
  push32((uint32_t)(EBX));
  /* 11de56cb push esi */
  push32((uint32_t)(ESI));
  /* 11de56cc push edi */
  push32((uint32_t)(EDI));
  /* 11de56cd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11de56d1 push eax */
  push32((uint32_t)(EAX));
  /* 11de56d2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11de56d4 push 0x11de56a8 */
  push32((uint32_t)(0x11de56a8u));
  /* 11de56d9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11de56e0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11de56e7:;
  /* 11de56e7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11de56eb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11de56ee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11de56f1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de56f4 je 0x11de5724 */
  if (C.zf) goto L_11de5724;
  /* 11de56f6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de56fa je 0x11de5724 */
  if (C.zf) goto L_11de5724;
  /* 11de56fc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11de56ff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11de5702 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11de5706 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11de5709 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de570e jne 0x11de5722 */
  if (!C.zf) goto L_11de5722;
  /* 11de5710 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11de5715 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11de5719 call 0x11de575e */
  push32(0x11de571eu); f_11de575e();
  /* 11de571e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11de5722u);
L_11de5722:;
  /* 11de5722 jmp 0x11de56e7 */
  goto L_11de56e7;
L_11de5724:;
  /* 11de5724 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11de572b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de572e pop edi */
  EDI = (pop32());
  /* 11de572f pop esi */
  ESI = (pop32());
  /* 11de5730 pop ebx */
  EBX = (pop32());
  /* 11de5731 ret  */
  ESPCHK(0x11de56cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000575e @ 0x11de575e (24 bytes, 10 insns) */
void f_11de575e(void) {
  FTRACE(0x11de575eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de575e push ebx */
  push32((uint32_t)(EBX));
  /* 11de575f push ecx */
  push32((uint32_t)(ECX));
  /* 11de5760 mov ebx, 0x11deb720 */
  EBX = (0x11deb720u);
  /* 11de5765 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de5768 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11de576b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11de576e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11de5771 pop ecx */
  ECX = (pop32());
  /* 11de5772 pop ebx */
  EBX = (pop32());
  /* 11de5773 ret 4 */
  ESPCHK(0x11de575eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000583d @ 0x11de583d (27 bytes, 11 insns) */
void f_11de583d(void) {
  FTRACE(0x11de583du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de583d push ebp */
  push32((uint32_t)(EBP));
  /* 11de583e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de5842 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11de5844 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11de5847 push eax */
  push32((uint32_t)(EAX));
  /* 11de5848 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11de584b push eax */
  push32((uint32_t)(EAX));
  /* 11de584c call 0x11de56ca */
  push32(0x11de5851u); f_11de56ca();
  /* 11de5851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5854 pop ebp */
  EBP = (pop32());
  /* 11de5855 ret 4 */
  ESPCHK(0x11de583du, _esp0);
  ESP += 8; return;
}

/* FUN_10005858 @ 0x11de5858 (139 bytes, 59 insns) */
void f_11de5858(void) {
  FTRACE(0x11de5858u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5858 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5859 push ebp */
  push32((uint32_t)(EBP));
  /* 11de585a push esi */
  push32((uint32_t)(ESI));
  /* 11de585b push edi */
  push32((uint32_t)(EDI));
  /* 11de585c mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11de5860:;
  /* 11de5860 cmp dword ptr [0x11debaa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5867 jle 0x11de5878 */
  if ((C.zf||C.sf!=C.of)) goto L_11de5878;
  /* 11de5869 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de586c push 8 */
  push32((uint32_t)(0x8u));
  /* 11de586e push eax */
  push32((uint32_t)(EAX));
  /* 11de586f call 0x11de5ecd */
  push32(0x11de5874u); f_11de5ecd();
  /* 11de5874 pop ecx */
  ECX = (pop32());
  /* 11de5875 pop ecx */
  ECX = (pop32());
  /* 11de5876 jmp 0x11de5887 */
  goto L_11de5887;
L_11de5878:;
  /* 11de5878 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de587b mov ecx, dword ptr [0x11deb898] */
  ECX = (r32((uint32_t)(0x11deb898)));
  /* 11de5881 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11de5884 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11de5887:;
  /* 11de5887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5889 je 0x11de588e */
  if (C.zf) goto L_11de588e;
  /* 11de588b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de588c jmp 0x11de5860 */
  goto L_11de5860;
L_11de588e:;
  /* 11de588e movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de5891 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de5892 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5895 mov ebp, esi */
  EBP = (ESI);
  /* 11de5897 je 0x11de589e */
  if (C.zf) goto L_11de589e;
  /* 11de5899 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de589c jne 0x11de58a2 */
  if (!C.zf) goto L_11de58a2;
L_11de589e:;
  /* 11de589e movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de58a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11de58a2:;
  /* 11de58a2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11de58a4:;
  /* 11de58a4 cmp dword ptr [0x11debaa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de58ab jle 0x11de58b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11de58b9;
  /* 11de58ad push 4 */
  push32((uint32_t)(0x4u));
  /* 11de58af push esi */
  push32((uint32_t)(ESI));
  /* 11de58b0 call 0x11de5ecd */
  push32(0x11de58b5u); f_11de5ecd();
  /* 11de58b5 pop ecx */
  ECX = (pop32());
  /* 11de58b6 pop ecx */
  ECX = (pop32());
  /* 11de58b7 jmp 0x11de58c4 */
  goto L_11de58c4;
L_11de58b9:;
  /* 11de58b9 mov eax, dword ptr [0x11deb898] */
  EAX = (r32((uint32_t)(0x11deb898)));
  /* 11de58be mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11de58c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11de58c4:;
  /* 11de58c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de58c6 je 0x11de58d5 */
  if (C.zf) goto L_11de58d5;
  /* 11de58c8 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11de58cb lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11de58cf movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de58d2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de58d3 jmp 0x11de58a4 */
  goto L_11de58a4;
L_11de58d5:;
  /* 11de58d5 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de58d8 mov eax, ebx */
  EAX = (EBX);
  /* 11de58da jne 0x11de58de */
  if (!C.zf) goto L_11de58de;
  /* 11de58dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11de58de:;
  /* 11de58de pop edi */
  EDI = (pop32());
  /* 11de58df pop esi */
  ESI = (pop32());
  /* 11de58e0 pop ebp */
  EBP = (pop32());
  /* 11de58e1 pop ebx */
  EBX = (pop32());
  /* 11de58e2 ret  */
  ESPCHK(0x11de5858u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11de58f0 (129 bytes, 56 insns) */
void f_11de58f0(void) {
  FTRACE(0x11de58f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de58f0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de58f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de58f8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11de58fe jne 0x11de593c */
  if (!C.zf) goto L_11de593c;
L_11de5900:;
  /* 11de5900 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11de5902 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5904 jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de5906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de5908 je 0x11de5930 */
  if (C.zf) goto L_11de5930;
  /* 11de590a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de590d jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de590f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11de5911 je 0x11de5930 */
  if (C.zf) goto L_11de5930;
  /* 11de5913 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11de5916 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5919 jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de591b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de591d je 0x11de5930 */
  if (C.zf) goto L_11de5930;
  /* 11de591f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5922 jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de5924 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5927 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de592a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11de592c jne 0x11de5900 */
  if (!C.zf) goto L_11de5900;
  /* 11de592e mov edi, edi */
  EDI = (EDI);
L_11de5930:;
  /* 11de5930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de5932 ret  */
  ESPCHK(0x11de58f0u, _esp0);
  ESP += 4; return;
  /* 11de5933 nop  */
  /* nop */
L_11de5934:;
  /* 11de5934 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5936 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11de5938 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de5939 ret  */
  ESPCHK(0x11de58f0u, _esp0);
  ESP += 4; return;
  /* 11de593a mov edi, edi */
  EDI = (EDI);
L_11de593c:;
  /* 11de593c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11de5942 je 0x11de5958 */
  if (C.zf) goto L_11de5958;
  /* 11de5944 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11de5946 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de5947 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5949 jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de594b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de594c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de594e je 0x11de5930 */
  if (C.zf) goto L_11de5930;
  /* 11de5950 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11de5956 je 0x11de5900 */
  if (C.zf) goto L_11de5900;
L_11de5958:;
  /* 11de5958 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11de595b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de595e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5960 jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de5962 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de5964 je 0x11de5930 */
  if (C.zf) goto L_11de5930;
  /* 11de5966 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5969 jne 0x11de5934 */
  if (!C.zf) goto L_11de5934;
  /* 11de596b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11de596d je 0x11de5930 */
  if (C.zf) goto L_11de5930;
  /* 11de596f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5972 jmp 0x11de5900 */
  goto L_11de5900;
}

/* FUN_10005974 @ 0x11de5974 (125 bytes, 51 insns) */
void f_11de5974(void) {
  FTRACE(0x11de5974u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5974 cmp dword ptr [0x11dec5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de597b push ebx */
  push32((uint32_t)(EBX));
  /* 11de597c push esi */
  push32((uint32_t)(ESI));
  /* 11de597d mov esi, dword ptr [0x11debf2c] */
  ESI = (r32((uint32_t)(0x11debf2c)));
  /* 11de5983 push edi */
  push32((uint32_t)(EDI));
  /* 11de5984 je 0x11de59eb */
  if (C.zf) goto L_11de59eb;
  /* 11de5986 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de5988 jne 0x11de59a5 */
  if (!C.zf) goto L_11de59a5;
  /* 11de598a cmp dword ptr [0x11debf34], esi */
  { uint32_t _a=(r32((uint32_t)(0x11debf34))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5990 je 0x11de59eb */
  if (C.zf) goto L_11de59eb;
  /* 11de5992 call 0x11de6303 */
  push32(0x11de5997u); f_11de6303();
  /* 11de5997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5999 jne 0x11de59eb */
  if (!C.zf) goto L_11de59eb;
  /* 11de599b mov esi, dword ptr [0x11debf2c] */
  ESI = (r32((uint32_t)(0x11debf2c)));
  /* 11de59a1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de59a3 je 0x11de59eb */
  if (C.zf) goto L_11de59eb;
L_11de59a5:;
  /* 11de59a5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11de59a9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de59ab je 0x11de59eb */
  if (C.zf) goto L_11de59eb;
  /* 11de59ad push ebx */
  push32((uint32_t)(EBX));
  /* 11de59ae call 0x11de36e0 */
  push32(0x11de59b3u); f_11de36e0();
  /* 11de59b3 pop ecx */
  ECX = (pop32());
  /* 11de59b4 mov edi, eax */
  EDI = (EAX);
L_11de59b6:;
  /* 11de59b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de59b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de59ba je 0x11de59eb */
  if (C.zf) goto L_11de59eb;
  /* 11de59bc push eax */
  push32((uint32_t)(EAX));
  /* 11de59bd call 0x11de36e0 */
  push32(0x11de59c2u); f_11de36e0();
  /* 11de59c2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de59c4 pop ecx */
  ECX = (pop32());
  /* 11de59c5 jbe 0x11de59de */
  if ((C.cf||C.zf)) goto L_11de59de;
  /* 11de59c7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de59c9 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de59cd jne 0x11de59de */
  if (!C.zf) goto L_11de59de;
  /* 11de59cf push edi */
  push32((uint32_t)(EDI));
  /* 11de59d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11de59d1 push eax */
  push32((uint32_t)(EAX));
  /* 11de59d2 call 0x11de62c4 */
  push32(0x11de59d7u); f_11de62c4();
  /* 11de59d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de59da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de59dc je 0x11de59e3 */
  if (C.zf) goto L_11de59e3;
L_11de59de:;
  /* 11de59de add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de59e1 jmp 0x11de59b6 */
  goto L_11de59b6;
L_11de59e3:;
  /* 11de59e3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de59e5 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11de59e9 jmp 0x11de59ed */
  goto L_11de59ed;
L_11de59eb:;
  /* 11de59eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de59ed:;
  /* 11de59ed pop edi */
  EDI = (pop32());
  /* 11de59ee pop esi */
  ESI = (pop32());
  /* 11de59ef pop ebx */
  EBX = (pop32());
  /* 11de59f0 ret  */
  ESPCHK(0x11de5974u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f1 @ 0x11de59f1 (511 bytes, 193 insns) */
void f_11de59f1(void) {
  FTRACE(0x11de59f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de59f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11de59f2 mov ebp, esp */
  EBP = (ESP);
  /* 11de59f4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de59f6 push 0x11de8588 */
  push32((uint32_t)(0x11de8588u));
  /* 11de59fb push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de5a00 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de5a06 push eax */
  push32((uint32_t)(EAX));
  /* 11de5a07 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de5a0e sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5a11 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5a12 push esi */
  push32((uint32_t)(ESI));
  /* 11de5a13 push edi */
  push32((uint32_t)(EDI));
  /* 11de5a14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de5a17 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de5a19 cmp dword ptr [0x11dec1b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dec1b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5a1f jne 0x11de5a67 */
  if (!C.zf) goto L_11de5a67;
  /* 11de5a21 push edi */
  push32((uint32_t)(EDI));
  /* 11de5a22 push edi */
  push32((uint32_t)(EDI));
  /* 11de5a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5a25 pop ebx */
  EBX = (pop32());
  /* 11de5a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5a27 push 0x11de8580 */
  push32((uint32_t)(0x11de8580u));
  /* 11de5a2c mov esi, 0x100 */
  ESI = (0x100u);
  /* 11de5a31 push esi */
  push32((uint32_t)(ESI));
  /* 11de5a32 push edi */
  push32((uint32_t)(EDI));
  /* 11de5a33 call dword ptr [0x11de8028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8028))), 0x11de5a39u);
  /* 11de5a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5a3b je 0x11de5a45 */
  if (C.zf) goto L_11de5a45;
  /* 11de5a3d mov dword ptr [0x11dec1b8], ebx */
  w32((uint32_t)(0x11dec1b8), (EBX));
  /* 11de5a43 jmp 0x11de5a67 */
  goto L_11de5a67;
L_11de5a45:;
  /* 11de5a45 push edi */
  push32((uint32_t)(EDI));
  /* 11de5a46 push edi */
  push32((uint32_t)(EDI));
  /* 11de5a47 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5a48 push 0x11de857c */
  push32((uint32_t)(0x11de857cu));
  /* 11de5a4d push esi */
  push32((uint32_t)(ESI));
  /* 11de5a4e push edi */
  push32((uint32_t)(EDI));
  /* 11de5a4f call dword ptr [0x11de8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8020))), 0x11de5a55u);
  /* 11de5a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5a57 je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5a5d mov dword ptr [0x11dec1b8], 2 */
  w32((uint32_t)(0x11dec1b8), (0x2u));
L_11de5a67:;
  /* 11de5a67 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5a6a jle 0x11de5a7c */
  if ((C.zf||C.sf!=C.of)) goto L_11de5a7c;
  /* 11de5a6c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11de5a6f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5a72 call 0x11de5c15 */
  push32(0x11de5a77u); f_11de5c15();
  /* 11de5a77 pop ecx */
  ECX = (pop32());
  /* 11de5a78 pop ecx */
  ECX = (pop32());
  /* 11de5a79 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11de5a7c:;
  /* 11de5a7c mov eax, dword ptr [0x11dec1b8] */
  EAX = (r32((uint32_t)(0x11dec1b8)));
  /* 11de5a81 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5a84 jne 0x11de5aa3 */
  if (!C.zf) goto L_11de5aa3;
  /* 11de5a86 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de5a89 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de5a8c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11de5a8f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5a92 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5a95 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de5a98 call dword ptr [0x11de8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8020))), 0x11de5a9eu);
  /* 11de5a9e jmp 0x11de5b81 */
  goto L_11de5b81;
L_11de5aa3:;
  /* 11de5aa3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5aa6 jne 0x11de5b7f */
  if (!C.zf) goto L_11de5b7f;
  /* 11de5aac cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5aaf jne 0x11de5ab9 */
  if (!C.zf) goto L_11de5ab9;
  /* 11de5ab1 mov eax, dword ptr [0x11dec1b0] */
  EAX = (r32((uint32_t)(0x11dec1b0)));
  /* 11de5ab6 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11de5ab9:;
  /* 11de5ab9 push edi */
  push32((uint32_t)(EDI));
  /* 11de5aba push edi */
  push32((uint32_t)(EDI));
  /* 11de5abb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11de5abe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5ac1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11de5ac4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de5ac6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5ac8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11de5acb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de5acc push eax */
  push32((uint32_t)(EAX));
  /* 11de5acd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de5ad0 call dword ptr [0x11de8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8024))), 0x11de5ad6u);
  /* 11de5ad6 mov ebx, eax */
  EBX = (EAX);
  /* 11de5ad8 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11de5adb cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5add je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5ae3 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11de5ae6 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11de5ae9 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5aec and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11de5aee call 0x11de4240 */
  push32(0x11de5af3u); f_11de4240();
  /* 11de5af3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de5af6 mov eax, esp */
  EAX = (ESP);
  /* 11de5af8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de5afb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de5aff jmp 0x11de5b14 */
  goto L_11de5b14;
  /* 11de5b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5b03 pop eax */
  EAX = (pop32());
  /* 11de5b04 ret  */
  ESPCHK(0x11de59f1u, _esp0);
  ESP += 4; return;
  /* 11de5b05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11de5b08 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de5b0a mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11de5b0d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de5b11 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11de5b14:;
  /* 11de5b14 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5b17 je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5b19 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5b1a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de5b1d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11de5b20 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5b25 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de5b28 call dword ptr [0x11de8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8024))), 0x11de5b2eu);
  /* 11de5b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5b30 je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5b32 push edi */
  push32((uint32_t)(EDI));
  /* 11de5b33 push edi */
  push32((uint32_t)(EDI));
  /* 11de5b34 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5b35 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de5b38 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5b3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de5b3e call dword ptr [0x11de8028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8028))), 0x11de5b44u);
  /* 11de5b44 mov esi, eax */
  ESI = (EAX);
  /* 11de5b46 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11de5b49 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5b4b je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5b4d test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11de5b51 je 0x11de5b93 */
  if (C.zf) goto L_11de5b93;
  /* 11de5b53 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5b56 je 0x11de5c0e */
  if (C.zf) goto L_11de5c0e;
  /* 11de5b5c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5b5f jg 0x11de5b7f */
  if ((!C.zf&&C.sf==C.of)) goto L_11de5b7f;
  /* 11de5b61 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de5b64 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de5b67 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5b68 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de5b6b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5b6e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de5b71 call dword ptr [0x11de8028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8028))), 0x11de5b77u);
  /* 11de5b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5b79 jne 0x11de5c0e */
  if (!C.zf) goto L_11de5c0e;
L_11de5b7f:;
  /* 11de5b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de5b81:;
  /* 11de5b81 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11de5b84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11de5b87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11de5b8e pop edi */
  EDI = (pop32());
  /* 11de5b8f pop esi */
  ESI = (pop32());
  /* 11de5b90 pop ebx */
  EBX = (pop32());
  /* 11de5b91 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5b92 ret  */
  ESPCHK(0x11de59f1u, _esp0);
  ESP += 4; return;
L_11de5b93:;
  /* 11de5b93 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11de5b9a lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11de5b9d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5ba0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11de5ba2 call 0x11de4240 */
  push32(0x11de5ba7u); f_11de4240();
  /* 11de5ba7 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de5baa mov ebx, esp */
  EBX = (ESP);
  /* 11de5bac mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11de5baf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de5bb3 jmp 0x11de5bc7 */
  goto L_11de5bc7;
  /* 11de5bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5bb7 pop eax */
  EAX = (pop32());
  /* 11de5bb8 ret  */
  ESPCHK(0x11de59f1u, _esp0);
  ESP += 4; return;
  /* 11de5bb9 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11de5bbc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de5bbe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de5bc0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de5bc4 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11de5bc7:;
  /* 11de5bc7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5bc9 je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5bcb push esi */
  push32((uint32_t)(ESI));
  /* 11de5bcc push ebx */
  push32((uint32_t)(EBX));
  /* 11de5bcd push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11de5bd0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de5bd3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5bd6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de5bd9 call dword ptr [0x11de8028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8028))), 0x11de5bdfu);
  /* 11de5bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5be1 je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
  /* 11de5be3 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5be6 push edi */
  push32((uint32_t)(EDI));
  /* 11de5be7 push edi */
  push32((uint32_t)(EDI));
  /* 11de5be8 jne 0x11de5bee */
  if (!C.zf) goto L_11de5bee;
  /* 11de5bea push edi */
  push32((uint32_t)(EDI));
  /* 11de5beb push edi */
  push32((uint32_t)(EDI));
  /* 11de5bec jmp 0x11de5bf4 */
  goto L_11de5bf4;
L_11de5bee:;
  /* 11de5bee push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de5bf1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11de5bf4:;
  /* 11de5bf4 push esi */
  push32((uint32_t)(ESI));
  /* 11de5bf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5bf6 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11de5bfb push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de5bfe call dword ptr [0x11de80d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de80d8))), 0x11de5c04u);
  /* 11de5c04 mov esi, eax */
  ESI = (EAX);
  /* 11de5c06 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5c08 je 0x11de5b7f */
  if (C.zf) goto L_11de5b7f;
L_11de5c0e:;
  /* 11de5c0e mov eax, esi */
  EAX = (ESI);
  /* 11de5c10 jmp 0x11de5b81 */
  goto L_11de5b81;
}

/* FUN_10005c15 @ 0x11de5c15 (43 bytes, 20 insns) */
void f_11de5c15(void) {
  FTRACE(0x11de5c15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5c15 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de5c19 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11de5c1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11de5c1f push esi */
  push32((uint32_t)(ESI));
  /* 11de5c20 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11de5c23 je 0x11de5c32 */
  if (C.zf) goto L_11de5c32;
L_11de5c25:;
  /* 11de5c25 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5c28 je 0x11de5c32 */
  if (C.zf) goto L_11de5c32;
  /* 11de5c2a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de5c2b mov esi, ecx */
  ESI = (ECX);
  /* 11de5c2d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de5c2e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de5c30 jne 0x11de5c25 */
  if (!C.zf) goto L_11de5c25;
L_11de5c32:;
  /* 11de5c32 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de5c35 pop esi */
  ESI = (pop32());
  /* 11de5c36 jne 0x11de5c3d */
  if (!C.zf) goto L_11de5c3d;
  /* 11de5c38 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5c3c ret  */
  ESPCHK(0x11de5c15u, _esp0);
  ESP += 4; return;
L_11de5c3d:;
  /* 11de5c3d mov eax, edx */
  EAX = (EDX);
  /* 11de5c3f ret  */
  ESPCHK(0x11de5c15u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c40 @ 0x11de5c40 (318 bytes, 123 insns) */
void f_11de5c40(void) {
  FTRACE(0x11de5c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11de5c41 mov ebp, esp */
  EBP = (ESP);
  /* 11de5c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de5c45 push 0x11de85a0 */
  push32((uint32_t)(0x11de85a0u));
  /* 11de5c4a push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de5c4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de5c55 push eax */
  push32((uint32_t)(EAX));
  /* 11de5c56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de5c5d sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5c60 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5c61 push esi */
  push32((uint32_t)(ESI));
  /* 11de5c62 push edi */
  push32((uint32_t)(EDI));
  /* 11de5c63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de5c66 mov eax, dword ptr [0x11dec1bc] */
  EAX = (r32((uint32_t)(0x11dec1bc)));
  /* 11de5c6b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de5c6d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5c6f jne 0x11de5caf */
  if (!C.zf) goto L_11de5caf;
  /* 11de5c71 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11de5c74 push eax */
  push32((uint32_t)(EAX));
  /* 11de5c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5c77 pop esi */
  ESI = (pop32());
  /* 11de5c78 push esi */
  push32((uint32_t)(ESI));
  /* 11de5c79 push 0x11de8580 */
  push32((uint32_t)(0x11de8580u));
  /* 11de5c7e push esi */
  push32((uint32_t)(ESI));
  /* 11de5c7f call dword ptr [0x11de8014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8014))), 0x11de5c85u);
  /* 11de5c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5c87 je 0x11de5c8d */
  if (C.zf) goto L_11de5c8d;
  /* 11de5c89 mov eax, esi */
  EAX = (ESI);
  /* 11de5c8b jmp 0x11de5caa */
  goto L_11de5caa;
L_11de5c8d:;
  /* 11de5c8d lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11de5c90 push eax */
  push32((uint32_t)(EAX));
  /* 11de5c91 push esi */
  push32((uint32_t)(ESI));
  /* 11de5c92 push 0x11de857c */
  push32((uint32_t)(0x11de857cu));
  /* 11de5c97 push esi */
  push32((uint32_t)(ESI));
  /* 11de5c98 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5c99 call dword ptr [0x11de8018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8018))), 0x11de5c9fu);
  /* 11de5c9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5ca1 je 0x11de5d75 */
  if (C.zf) goto L_11de5d75;
  /* 11de5ca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de5ca9 pop eax */
  EAX = (pop32());
L_11de5caa:;
  /* 11de5caa mov dword ptr [0x11dec1bc], eax */
  w32((uint32_t)(0x11dec1bc), (EAX));
L_11de5caf:;
  /* 11de5caf cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5cb2 jne 0x11de5cd8 */
  if (!C.zf) goto L_11de5cd8;
  /* 11de5cb4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11de5cb7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5cb9 jne 0x11de5cc0 */
  if (!C.zf) goto L_11de5cc0;
  /* 11de5cbb mov eax, dword ptr [0x11dec1a0] */
  EAX = (r32((uint32_t)(0x11dec1a0)));
L_11de5cc0:;
  /* 11de5cc0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11de5cc3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5cc6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5cc9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de5ccc push eax */
  push32((uint32_t)(EAX));
  /* 11de5ccd call dword ptr [0x11de8018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8018))), 0x11de5cd3u);
  /* 11de5cd3 jmp 0x11de5d77 */
  goto L_11de5d77;
L_11de5cd8:;
  /* 11de5cd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5cdb jne 0x11de5d75 */
  if (!C.zf) goto L_11de5d75;
  /* 11de5ce1 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5ce4 jne 0x11de5cee */
  if (!C.zf) goto L_11de5cee;
  /* 11de5ce6 mov eax, dword ptr [0x11dec1b0] */
  EAX = (r32((uint32_t)(0x11dec1b0)));
  /* 11de5ceb mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11de5cee:;
  /* 11de5cee push ebx */
  push32((uint32_t)(EBX));
  /* 11de5cef push ebx */
  push32((uint32_t)(EBX));
  /* 11de5cf0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5cf3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5cf6 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11de5cf9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de5cfb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5cfd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11de5d00 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de5d01 push eax */
  push32((uint32_t)(EAX));
  /* 11de5d02 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de5d05 call dword ptr [0x11de8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8024))), 0x11de5d0bu);
  /* 11de5d0b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11de5d0e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5d10 je 0x11de5d75 */
  if (C.zf) goto L_11de5d75;
  /* 11de5d12 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11de5d15 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11de5d18 mov eax, edi */
  EAX = (EDI);
  /* 11de5d1a add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5d1d and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11de5d1f call 0x11de4240 */
  push32(0x11de5d24u); f_11de4240();
  /* 11de5d24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de5d27 mov esi, esp */
  ESI = (ESP);
  /* 11de5d29 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11de5d2c push edi */
  push32((uint32_t)(EDI));
  /* 11de5d2d push ebx */
  push32((uint32_t)(EBX));
  /* 11de5d2e push esi */
  push32((uint32_t)(ESI));
  /* 11de5d2f call 0x11de5630 */
  push32(0x11de5d34u); f_11de5630();
  /* 11de5d34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5d37 jmp 0x11de5d44 */
  goto L_11de5d44;
  /* 11de5d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5d3b pop eax */
  EAX = (pop32());
  /* 11de5d3c ret  */
  ESPCHK(0x11de5c40u, _esp0);
  ESP += 4; return;
  /* 11de5d3d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11de5d40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de5d42 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11de5d44:;
  /* 11de5d44 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de5d48 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5d4a je 0x11de5d75 */
  if (C.zf) goto L_11de5d75;
  /* 11de5d4c push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11de5d4f push esi */
  push32((uint32_t)(ESI));
  /* 11de5d50 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de5d53 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de5d56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5d58 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de5d5b call dword ptr [0x11de8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8024))), 0x11de5d61u);
  /* 11de5d61 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5d63 je 0x11de5d75 */
  if (C.zf) goto L_11de5d75;
  /* 11de5d65 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11de5d68 push eax */
  push32((uint32_t)(EAX));
  /* 11de5d69 push esi */
  push32((uint32_t)(ESI));
  /* 11de5d6a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de5d6d call dword ptr [0x11de8014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8014))), 0x11de5d73u);
  /* 11de5d73 jmp 0x11de5d77 */
  goto L_11de5d77;
L_11de5d75:;
  /* 11de5d75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de5d77:;
  /* 11de5d77 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11de5d7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11de5d7d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11de5d84 pop edi */
  EDI = (pop32());
  /* 11de5d85 pop esi */
  ESI = (pop32());
  /* 11de5d86 pop ebx */
  EBX = (pop32());
  /* 11de5d87 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5d88 ret  */
  ESPCHK(0x11de5c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d89 @ 0x11de5d89 (9 bytes, 3 insns) */
void f_11de5d89(void) {
  FTRACE(0x11de5d89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5d89 call 0x11de1e89 */
  push32(0x11de5d8eu); f_11de1e89();
  /* 11de5d8e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5d91 ret  */
  ESPCHK(0x11de5d89u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d92 @ 0x11de5d92 (111 bytes, 44 insns) */
void f_11de5d92(void) {
  FTRACE(0x11de5d92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5d92 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5d93 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de5d95 cmp dword ptr [0x11dec1a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec1a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5d9b jne 0x11de5db0 */
  if (!C.zf) goto L_11de5db0;
  /* 11de5d9d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11de5da1 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5da4 jl 0x11de5dff */
  if ((C.sf!=C.of)) goto L_11de5dff;
  /* 11de5da6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5da9 jg 0x11de5dff */
  if ((!C.zf&&C.sf==C.of)) goto L_11de5dff;
  /* 11de5dab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5dae pop ebx */
  EBX = (pop32());
  /* 11de5daf ret  */
  ESPCHK(0x11de5d92u, _esp0);
  ESP += 4; return;
L_11de5db0:;
  /* 11de5db0 push esi */
  push32((uint32_t)(ESI));
  /* 11de5db1 mov esi, 0x11dec250 */
  ESI = (0x11dec250u);
  /* 11de5db6 push edi */
  push32((uint32_t)(EDI));
  /* 11de5db7 push esi */
  push32((uint32_t)(ESI));
  /* 11de5db8 call dword ptr [0x11de800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de800c))), 0x11de5dbeu);
  /* 11de5dbe cmp dword ptr [0x11dec24c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec24c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5dc4 mov edi, dword ptr [0x11de801c] */
  EDI = (r32((uint32_t)(0x11de801c)));
  /* 11de5dca je 0x11de5dda */
  if (C.zf) goto L_11de5dda;
  /* 11de5dcc push esi */
  push32((uint32_t)(ESI));
  /* 11de5dcd call edi */
  call_ind((uint32_t)(EDI), 0x11de5dcfu);
  /* 11de5dcf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11de5dd1 call 0x11de2d90 */
  push32(0x11de5dd6u); f_11de2d90();
  /* 11de5dd6 pop ecx */
  ECX = (pop32());
  /* 11de5dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5dd9 pop ebx */
  EBX = (pop32());
L_11de5dda:;
  /* 11de5dda push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11de5dde call 0x11de5e01 */
  push32(0x11de5de3u); f_11de5e01();
  /* 11de5de3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de5de5 pop ecx */
  ECX = (pop32());
  /* 11de5de6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11de5dea je 0x11de5df6 */
  if (C.zf) goto L_11de5df6;
  /* 11de5dec push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11de5dee call 0x11de2df1 */
  push32(0x11de5df3u); f_11de2df1();
  /* 11de5df3 pop ecx */
  ECX = (pop32());
  /* 11de5df4 jmp 0x11de5df9 */
  goto L_11de5df9;
L_11de5df6:;
  /* 11de5df6 push esi */
  push32((uint32_t)(ESI));
  /* 11de5df7 call edi */
  call_ind((uint32_t)(EDI), 0x11de5df9u);
L_11de5df9:;
  /* 11de5df9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11de5dfd pop edi */
  EDI = (pop32());
  /* 11de5dfe pop esi */
  ESI = (pop32());
L_11de5dff:;
  /* 11de5dff pop ebx */
  EBX = (pop32());
  /* 11de5e00 ret  */
  ESPCHK(0x11de5d92u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e01 @ 0x11de5e01 (204 bytes, 71 insns) */
void f_11de5e01(void) {
  FTRACE(0x11de5e01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5e01 push ebp */
  push32((uint32_t)(EBP));
  /* 11de5e02 mov ebp, esp */
  EBP = (ESP);
  /* 11de5e04 push ecx */
  push32((uint32_t)(ECX));
  /* 11de5e05 cmp dword ptr [0x11dec1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5e0c push ebx */
  push32((uint32_t)(EBX));
  /* 11de5e0d jne 0x11de5e2c */
  if (!C.zf) goto L_11de5e2c;
  /* 11de5e0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de5e12 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5e15 jl 0x11de5eca */
  if ((C.sf!=C.of)) goto L_11de5eca;
  /* 11de5e1b cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5e1e jg 0x11de5eca */
  if ((!C.zf&&C.sf==C.of)) goto L_11de5eca;
  /* 11de5e24 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5e27 jmp 0x11de5eca */
  goto L_11de5eca;
L_11de5e2c:;
  /* 11de5e2c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de5e2f cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5e35 jge 0x11de5e5f */
  if ((C.sf==C.of)) goto L_11de5e5f;
  /* 11de5e37 cmp dword ptr [0x11debaa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5e3e jle 0x11de5e4c */
  if ((C.zf||C.sf!=C.of)) goto L_11de5e4c;
  /* 11de5e40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11de5e42 push ebx */
  push32((uint32_t)(EBX));
  /* 11de5e43 call 0x11de5ecd */
  push32(0x11de5e48u); f_11de5ecd();
  /* 11de5e48 pop ecx */
  ECX = (pop32());
  /* 11de5e49 pop ecx */
  ECX = (pop32());
  /* 11de5e4a jmp 0x11de5e57 */
  goto L_11de5e57;
L_11de5e4c:;
  /* 11de5e4c mov eax, dword ptr [0x11deb898] */
  EAX = (r32((uint32_t)(0x11deb898)));
  /* 11de5e51 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11de5e54 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11de5e57:;
  /* 11de5e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5e59 jne 0x11de5e5f */
  if (!C.zf) goto L_11de5e5f;
L_11de5e5b:;
  /* 11de5e5b mov eax, ebx */
  EAX = (EBX);
  /* 11de5e5d jmp 0x11de5eca */
  goto L_11de5eca;
L_11de5e5f:;
  /* 11de5e5f mov edx, dword ptr [0x11deb898] */
  EDX = (r32((uint32_t)(0x11deb898)));
  /* 11de5e65 mov eax, ebx */
  EAX = (EBX);
  /* 11de5e67 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de5e6a movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11de5e6d test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11de5e72 je 0x11de5e82 */
  if (C.zf) goto L_11de5e82;
  /* 11de5e74 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11de5e78 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11de5e7b mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11de5e7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11de5e80 jmp 0x11de5e8b */
  goto L_11de5e8b;
L_11de5e82:;
  /* 11de5e82 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11de5e86 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11de5e89 push 1 */
  push32((uint32_t)(0x1u));
L_11de5e8b:;
  /* 11de5e8b pop eax */
  EAX = (pop32());
  /* 11de5e8c lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11de5e8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de5e93 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de5e95 push ecx */
  push32((uint32_t)(ECX));
  /* 11de5e96 push eax */
  push32((uint32_t)(EAX));
  /* 11de5e97 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11de5e9a push eax */
  push32((uint32_t)(EAX));
  /* 11de5e9b push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11de5ea0 push dword ptr [0x11dec1a0] */
  push32((uint32_t)(r32((uint32_t)(0x11dec1a0))));
  /* 11de5ea6 call 0x11de59f1 */
  push32(0x11de5eabu); f_11de59f1();
  /* 11de5eab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5eb0 je 0x11de5e5b */
  if (C.zf) goto L_11de5e5b;
  /* 11de5eb2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5eb5 jne 0x11de5ebd */
  if (!C.zf) goto L_11de5ebd;
  /* 11de5eb7 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11de5ebb jmp 0x11de5eca */
  goto L_11de5eca;
L_11de5ebd:;
  /* 11de5ebd movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11de5ec1 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11de5ec5 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de5ec8 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11de5eca:;
  /* 11de5eca pop ebx */
  EBX = (pop32());
  /* 11de5ecb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5ecc ret  */
  ESPCHK(0x11de5e01u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ecd @ 0x11de5ecd (117 bytes, 46 insns) */
void f_11de5ecd(void) {
  FTRACE(0x11de5ecdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5ecd push ebp */
  push32((uint32_t)(EBP));
  /* 11de5ece mov ebp, esp */
  EBP = (ESP);
  /* 11de5ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11de5ed1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de5ed4 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11de5ed7 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5edd ja 0x11de5eeb */
  if ((!C.cf&&!C.zf)) goto L_11de5eeb;
  /* 11de5edf mov ecx, dword ptr [0x11deb898] */
  ECX = (r32((uint32_t)(0x11deb898)));
  /* 11de5ee5 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11de5ee9 jmp 0x11de5f3d */
  goto L_11de5f3d;
L_11de5eeb:;
  /* 11de5eeb mov ecx, eax */
  ECX = (EAX);
  /* 11de5eed push esi */
  push32((uint32_t)(ESI));
  /* 11de5eee mov esi, dword ptr [0x11deb898] */
  ESI = (r32((uint32_t)(0x11deb898)));
  /* 11de5ef4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11de5ef7 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11de5efa test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11de5eff pop esi */
  ESI = (pop32());
  /* 11de5f00 je 0x11de5f10 */
  if (C.zf) goto L_11de5f10;
  /* 11de5f02 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11de5f06 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11de5f09 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11de5f0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11de5f0e jmp 0x11de5f19 */
  goto L_11de5f19;
L_11de5f10:;
  /* 11de5f10 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11de5f14 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11de5f17 push 1 */
  push32((uint32_t)(0x1u));
L_11de5f19:;
  /* 11de5f19 pop eax */
  EAX = (pop32());
  /* 11de5f1a lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11de5f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11de5f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de5f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11de5f24 push eax */
  push32((uint32_t)(EAX));
  /* 11de5f25 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11de5f28 push eax */
  push32((uint32_t)(EAX));
  /* 11de5f29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de5f2b call 0x11de5c40 */
  push32(0x11de5f30u); f_11de5c40();
  /* 11de5f30 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de5f35 jne 0x11de5f39 */
  if (!C.zf) goto L_11de5f39;
  /* 11de5f37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5f38 ret  */
  ESPCHK(0x11de5ecdu, _esp0);
  ESP += 4; return;
L_11de5f39:;
  /* 11de5f39 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11de5f3d:;
  /* 11de5f3d and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11de5f40 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de5f41 ret  */
  ESPCHK(0x11de5ecdu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x11de5f50 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11de5f50(void) {
  FTRACE(0x11de5f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de5f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11de5f51 mov ebp, esp */
  EBP = (ESP);
  /* 11de5f53 push edi */
  push32((uint32_t)(EDI));
  /* 11de5f54 push esi */
  push32((uint32_t)(ESI));
  /* 11de5f55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de5f58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de5f5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de5f5e mov eax, ecx */
  EAX = (ECX);
  /* 11de5f60 mov edx, ecx */
  EDX = (ECX);
  /* 11de5f62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5f64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5f66 jbe 0x11de5f70 */
  if ((C.cf||C.zf)) goto L_11de5f70;
  /* 11de5f68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5f6a jb 0x11de60e8 */
  if (C.cf) goto L_11de60e8;
L_11de5f70:;
  /* 11de5f70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11de5f76 jne 0x11de5f8c */
  if (!C.zf) goto L_11de5f8c;
  /* 11de5f78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de5f7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11de5f7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5f81 jb 0x11de5fac */
  if (C.cf) goto L_11de5fac;
  /* 11de5f83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de5f85 jmp dword ptr [edx*4 + 0x11de6098] */
  switch (EDX) {
    case 0: goto L_11de60a8;
    case 1: goto L_11de60b0;
    case 2: goto L_11de60bc;
    case 3: goto L_11de60d0;
    default: x86_unimpl("switch@0x11de5f85 out of table"); return;
  }
L_11de5f8c:;
  /* 11de5f8c mov eax, edi */
  EAX = (EDI);
  /* 11de5f8e mov edx, 3 */
  EDX = (0x3u);
  /* 11de5f93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de5f96 jb 0x11de5fa4 */
  if (C.cf) goto L_11de5fa4;
  /* 11de5f98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11de5f9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5f9d jmp dword ptr [eax*4 + 0x11de5fb0] */
  switch (EAX) {
    case 1: goto L_11de5fc0;
    case 2: goto L_11de5fec;
    case 3: goto L_11de6010;
    default: x86_unimpl("switch@0x11de5f9d out of table"); return;
  }
L_11de5fa4:;
  /* 11de5fa4 jmp dword ptr [ecx*4 + 0x11de60a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11de60a8)))); return;
  /* 11de5fab nop  */
  /* nop */
L_11de5fac:;
  /* 11de5fac jmp dword ptr [ecx*4 + 0x11de602c] */
  switch (ECX) {
    case 0: goto L_11de608f;
    case 1: goto L_11de607c;
    case 2: goto L_11de6074;
    case 3: goto L_11de606c;
    case 4: goto L_11de6064;
    case 5: goto L_11de605c;
    case 6: goto L_11de6054;
    case 7: goto L_11de604c;
    default: x86_unimpl("switch@0x11de5fac out of table"); return;
  }
  /* 11de5fb3 nop  */
  /* nop */
L_11de5fc0:;
  /* 11de5fc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de5fc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de5fc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de5fc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de5fc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de5fcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de5fcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de5fd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de5fd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5fd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5fdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de5fde jb 0x11de5fac */
  if (C.cf) goto L_11de5fac;
  /* 11de5fe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de5fe2 jmp dword ptr [edx*4 + 0x11de6098] */
  switch (EDX) {
    case 0: goto L_11de60a8;
    case 1: goto L_11de60b0;
    case 2: goto L_11de60bc;
    case 3: goto L_11de60d0;
    default: x86_unimpl("switch@0x11de5fe2 out of table"); return;
  }
  /* 11de5fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de5fec:;
  /* 11de5fec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de5fee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de5ff0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de5ff2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de5ff5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de5ff8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de5ffb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de5ffe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6001 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6004 jb 0x11de5fac */
  if (C.cf) goto L_11de5fac;
  /* 11de6006 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de6008 jmp dword ptr [edx*4 + 0x11de6098] */
  switch (EDX) {
    case 0: goto L_11de60a8;
    case 1: goto L_11de60b0;
    case 2: goto L_11de60bc;
    case 3: goto L_11de60d0;
    default: x86_unimpl("switch@0x11de6008 out of table"); return;
  }
  /* 11de600f nop  */
  /* nop */
L_11de6010:;
  /* 11de6010 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de6012 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de6014 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de6016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6017 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de601a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de601b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de601e jb 0x11de5fac */
  if (C.cf) goto L_11de5fac;
  /* 11de6020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de6022 jmp dword ptr [edx*4 + 0x11de6098] */
  switch (EDX) {
    case 0: goto L_11de60a8;
    case 1: goto L_11de60b0;
    case 2: goto L_11de60bc;
    case 3: goto L_11de60d0;
    default: x86_unimpl("switch@0x11de6022 out of table"); return;
  }
  /* 11de6029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de604c:;
  /* 11de604c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11de6050 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11de6054:;
  /* 11de6054 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11de6058 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11de605c:;
  /* 11de605c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11de6060 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11de6064:;
  /* 11de6064 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11de6068 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11de606c:;
  /* 11de606c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11de6070 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11de6074:;
  /* 11de6074 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11de6078 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11de607c:;
  /* 11de607c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11de6080 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11de6084 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11de608b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de608d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11de608f:;
  /* 11de608f jmp dword ptr [edx*4 + 0x11de6098] */
  switch (EDX) {
    case 0: goto L_11de60a8;
    case 1: goto L_11de60b0;
    case 2: goto L_11de60bc;
    case 3: goto L_11de60d0;
    default: x86_unimpl("switch@0x11de608f out of table"); return;
  }
  /* 11de6096 mov edi, edi */
  EDI = (EDI);
L_11de60a8:;
  /* 11de60a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de60ab pop esi */
  ESI = (pop32());
  /* 11de60ac pop edi */
  EDI = (pop32());
  /* 11de60ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de60ae ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de60af nop  */
  /* nop */
L_11de60b0:;
  /* 11de60b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de60b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de60b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de60b7 pop esi */
  ESI = (pop32());
  /* 11de60b8 pop edi */
  EDI = (pop32());
  /* 11de60b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de60ba ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de60bb nop  */
  /* nop */
L_11de60bc:;
  /* 11de60bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de60be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de60c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de60c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de60c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de60c9 pop esi */
  ESI = (pop32());
  /* 11de60ca pop edi */
  EDI = (pop32());
  /* 11de60cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de60cc ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de60cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de60d0:;
  /* 11de60d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de60d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11de60d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de60d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de60da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de60dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de60e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de60e3 pop esi */
  ESI = (pop32());
  /* 11de60e4 pop edi */
  EDI = (pop32());
  /* 11de60e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de60e6 ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de60e7 nop  */
  /* nop */
L_11de60e8:;
  /* 11de60e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11de60ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11de60f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11de60f6 jne 0x11de611c */
  if (!C.zf) goto L_11de611c;
  /* 11de60f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de60fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11de60fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6101 jb 0x11de6110 */
  if (C.cf) goto L_11de6110;
  /* 11de6103 std  */
  C.df=1;
  /* 11de6104 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de6106 cld  */
  C.df=0;
  /* 11de6107 jmp dword ptr [edx*4 + 0x11de6230] */
  switch (EDX) {
    case 0: goto L_11de6240;
    case 1: goto L_11de6248;
    case 2: goto L_11de6258;
    case 3: goto L_11de626c;
    default: x86_unimpl("switch@0x11de6107 out of table"); return;
  }
  /* 11de610e mov edi, edi */
  EDI = (EDI);
L_11de6110:;
  /* 11de6110 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de6112 jmp dword ptr [ecx*4 + 0x11de61e0] */
  switch (ECX) {
    case 0: goto L_11de6227;
    default: x86_unimpl("switch@0x11de6112 out of table"); return;
  }
  /* 11de6119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de611c:;
  /* 11de611c mov eax, edi */
  EAX = (EDI);
  /* 11de611e mov edx, 3 */
  EDX = (0x3u);
  /* 11de6123 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6126 jb 0x11de6134 */
  if (C.cf) goto L_11de6134;
  /* 11de6128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11de612b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de612d jmp dword ptr [eax*4 + 0x11de6138] */
  switch (EAX) {
    case 1: goto L_11de6148;
    case 2: goto L_11de6168;
    case 3: goto L_11de6190;
    default: x86_unimpl("switch@0x11de612d out of table"); return;
  }
L_11de6134:;
  /* 11de6134 jmp dword ptr [ecx*4 + 0x11de6230] */
  switch (ECX) {
    case 0: goto L_11de6240;
    case 1: goto L_11de6248;
    case 2: goto L_11de6258;
    case 3: goto L_11de626c;
    default: x86_unimpl("switch@0x11de6134 out of table"); return;
  }
  /* 11de613b nop  */
  /* nop */
L_11de6148:;
  /* 11de6148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de614b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de614d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de6150 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11de6151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de6154 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11de6155 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6158 jb 0x11de6110 */
  if (C.cf) goto L_11de6110;
  /* 11de615a std  */
  C.df=1;
  /* 11de615b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de615d cld  */
  C.df=0;
  /* 11de615e jmp dword ptr [edx*4 + 0x11de6230] */
  switch (EDX) {
    case 0: goto L_11de6240;
    case 1: goto L_11de6248;
    case 2: goto L_11de6258;
    case 3: goto L_11de626c;
    default: x86_unimpl("switch@0x11de615e out of table"); return;
  }
  /* 11de6165 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de6168:;
  /* 11de6168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de616b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de616d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de6170 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de6173 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de6176 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de6179 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de617c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de617f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6182 jb 0x11de6110 */
  if (C.cf) goto L_11de6110;
  /* 11de6184 std  */
  C.df=1;
  /* 11de6185 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de6187 cld  */
  C.df=0;
  /* 11de6188 jmp dword ptr [edx*4 + 0x11de6230] */
  switch (EDX) {
    case 0: goto L_11de6240;
    case 1: goto L_11de6248;
    case 2: goto L_11de6258;
    case 3: goto L_11de626c;
    default: x86_unimpl("switch@0x11de6188 out of table"); return;
  }
  /* 11de618f nop  */
  /* nop */
L_11de6190:;
  /* 11de6190 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de6193 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11de6195 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de6198 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de619b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de619e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de61a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11de61a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de61a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de61aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de61ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de61b0 jb 0x11de6110 */
  if (C.cf) goto L_11de6110;
  /* 11de61b6 std  */
  C.df=1;
  /* 11de61b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11de61b9 cld  */
  C.df=0;
  /* 11de61ba jmp dword ptr [edx*4 + 0x11de6230] */
  switch (EDX) {
    case 0: goto L_11de6240;
    case 1: goto L_11de6248;
    case 2: goto L_11de6258;
    case 3: goto L_11de626c;
    default: x86_unimpl("switch@0x11de61ba out of table"); return;
  }
  /* 11de61c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11de61c4 in al, 0x61 */
  x86_unimpl("in @ 0x11de61c4");
  /* 11de61c6 ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61c6");
  /* 11de61c8 in al, dx */
  x86_unimpl("in @ 0x11de61c8");
  /* 11de61c9 popal  */
  x86_unimpl("popal @ 0x11de61c9");
  /* 11de61ca ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61ca");
  /* 11de61cc hlt  */
  x86_unimpl("hlt @ 0x11de61cc");
  /* 11de61cd popal  */
  x86_unimpl("popal @ 0x11de61cd");
  /* 11de61ce ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61ce");
  /* 11de61d0 cld  */
  C.df=0;
  /* 11de61d1 popal  */
  x86_unimpl("popal @ 0x11de61d1");
  /* 11de61d2 ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61d2");
  /* 11de61d4 add al, 0x62 */
  { uint32_t _a=(AL),_b=(0x62u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de61d6 ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61d6");
  /* 11de61d8 or al, 0x62 */
  { uint32_t _r=(AL)|(0x62u); AL = (_r); fl_logic(_r,8); }
  /* 11de61da ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61da");
  /* 11de61dc adc al, 0x62 */
  { uint32_t _a=(AL),_b=(0x62u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de61de ficom word ptr [ecx] */
  x86_unimpl("ficom @ 0x11de61de");
  /* 11de61e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11de61e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11de61ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11de61f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11de61f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11de61f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11de61fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11de6200 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11de6204 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11de6208 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11de620c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11de6210 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11de6214 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11de6218 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11de621c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11de6223 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6225 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11de6227:;
  /* 11de6227 jmp dword ptr [edx*4 + 0x11de6230] */
  switch (EDX) {
    case 0: goto L_11de6240;
    case 1: goto L_11de6248;
    case 2: goto L_11de6258;
    case 3: goto L_11de626c;
    default: x86_unimpl("switch@0x11de6227 out of table"); return;
  }
  /* 11de622e mov edi, edi */
  EDI = (EDI);
L_11de6240:;
  /* 11de6240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6243 pop esi */
  ESI = (pop32());
  /* 11de6244 pop edi */
  EDI = (pop32());
  /* 11de6245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de6246 ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de6247 nop  */
  /* nop */
L_11de6248:;
  /* 11de6248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de624b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de624e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6251 pop esi */
  ESI = (pop32());
  /* 11de6252 pop edi */
  EDI = (pop32());
  /* 11de6253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de6254 ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de6255 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de6258:;
  /* 11de6258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de625b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de625e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de6261 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de6264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6267 pop esi */
  ESI = (pop32());
  /* 11de6268 pop edi */
  EDI = (pop32());
  /* 11de6269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de626a ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
  /* 11de626b nop  */
  /* nop */
L_11de626c:;
  /* 11de626c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11de626f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11de6272 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11de6275 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11de6278 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de627b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11de627e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6281 pop esi */
  ESI = (pop32());
  /* 11de6282 pop edi */
  EDI = (pop32());
  /* 11de6283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de6284 ret  */
  ESPCHK(0x11de5f50u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11de62c4 (63 bytes, 24 insns) */
void f_11de62c4(void) {
  FTRACE(0x11de62c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de62c4 push ebp */
  push32((uint32_t)(EBP));
  /* 11de62c5 mov ebp, esp */
  EBP = (ESP);
  /* 11de62c7 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de62cb jne 0x11de62d1 */
  if (!C.zf) goto L_11de62d1;
  /* 11de62cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de62cf pop ebp */
  EBP = (pop32());
  /* 11de62d0 ret  */
  ESPCHK(0x11de62c4u, _esp0);
  ESP += 4; return;
L_11de62d1:;
  /* 11de62d1 push dword ptr [0x11dec270] */
  push32((uint32_t)(r32((uint32_t)(0x11dec270))));
  /* 11de62d7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de62da push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de62dd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de62e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de62e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de62e5 push dword ptr [0x11dec4a4] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a4))));
  /* 11de62eb call 0x11de6371 */
  push32(0x11de62f0u); f_11de6371();
  /* 11de62f0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de62f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de62f5 jne 0x11de62fe */
  if (!C.zf) goto L_11de62fe;
  /* 11de62f7 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11de62fc pop ebp */
  EBP = (pop32());
  /* 11de62fd ret  */
  ESPCHK(0x11de62c4u, _esp0);
  ESP += 4; return;
L_11de62fe:;
  /* 11de62fe add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6301 pop ebp */
  EBP = (pop32());
  /* 11de6302 ret  */
  ESPCHK(0x11de62c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006303 @ 0x11de6303 (110 bytes, 58 insns) */
void f_11de6303(void) {
  FTRACE(0x11de6303u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6303 push ecx */
  push32((uint32_t)(ECX));
  /* 11de6304 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6305 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6306 push esi */
  push32((uint32_t)(ESI));
  /* 11de6307 mov esi, dword ptr [0x11debf34] */
  ESI = (r32((uint32_t)(0x11debf34)));
  /* 11de630d push edi */
  push32((uint32_t)(EDI));
  /* 11de630e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de6310 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de6312 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6314 je 0x11de6364 */
  if (C.zf) goto L_11de6364;
  /* 11de6316 mov ebx, dword ptr [0x11de80d8] */
  EBX = (r32((uint32_t)(0x11de80d8)));
L_11de631c:;
  /* 11de631c push edi */
  push32((uint32_t)(EDI));
  /* 11de631d push edi */
  push32((uint32_t)(EDI));
  /* 11de631e push edi */
  push32((uint32_t)(EDI));
  /* 11de631f push edi */
  push32((uint32_t)(EDI));
  /* 11de6320 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de6322 push eax */
  push32((uint32_t)(EAX));
  /* 11de6323 push edi */
  push32((uint32_t)(EDI));
  /* 11de6324 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de6326 call ebx */
  call_ind((uint32_t)(EBX), 0x11de6328u);
  /* 11de6328 mov ebp, eax */
  EBP = (EAX);
  /* 11de632a cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de632c je 0x11de636c */
  if (C.zf) goto L_11de636c;
  /* 11de632e push ebp */
  push32((uint32_t)(EBP));
  /* 11de632f call 0x11de34b1 */
  push32(0x11de6334u); f_11de34b1();
  /* 11de6334 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6336 pop ecx */
  ECX = (pop32());
  /* 11de6337 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11de633b je 0x11de636c */
  if (C.zf) goto L_11de636c;
  /* 11de633d push edi */
  push32((uint32_t)(EDI));
  /* 11de633e push edi */
  push32((uint32_t)(EDI));
  /* 11de633f push ebp */
  push32((uint32_t)(EBP));
  /* 11de6340 push eax */
  push32((uint32_t)(EAX));
  /* 11de6341 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de6343 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11de6345 push edi */
  push32((uint32_t)(EDI));
  /* 11de6346 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de6348 call ebx */
  call_ind((uint32_t)(EBX), 0x11de634au);
  /* 11de634a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de634c je 0x11de636c */
  if (C.zf) goto L_11de636c;
  /* 11de634e push edi */
  push32((uint32_t)(EDI));
  /* 11de634f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11de6353 call 0x11de65ee */
  push32(0x11de6358u); f_11de65ee();
  /* 11de6358 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de635b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de635e pop ecx */
  ECX = (pop32());
  /* 11de635f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6361 pop ecx */
  ECX = (pop32());
  /* 11de6362 jne 0x11de631c */
  if (!C.zf) goto L_11de631c;
L_11de6364:;
  /* 11de6364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de6366:;
  /* 11de6366 pop edi */
  EDI = (pop32());
  /* 11de6367 pop esi */
  ESI = (pop32());
  /* 11de6368 pop ebp */
  EBP = (pop32());
  /* 11de6369 pop ebx */
  EBX = (pop32());
  /* 11de636a pop ecx */
  ECX = (pop32());
  /* 11de636b ret  */
  ESPCHK(0x11de6303u, _esp0);
  ESP += 4; return;
L_11de636c:;
  /* 11de636c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11de636f jmp 0x11de6366 */
  goto L_11de6366;
}

/* FUN_10006371 @ 0x11de6371 (597 bytes, 239 insns) */
void f_11de6371(void) {
  FTRACE(0x11de6371u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6371 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6372 mov ebp, esp */
  EBP = (ESP);
  /* 11de6374 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de6376 push 0x11de85b0 */
  push32((uint32_t)(0x11de85b0u));
  /* 11de637b push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de6380 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de6386 push eax */
  push32((uint32_t)(EAX));
  /* 11de6387 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de638e sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de6391 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6392 push esi */
  push32((uint32_t)(ESI));
  /* 11de6393 push edi */
  push32((uint32_t)(EDI));
  /* 11de6394 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de6397 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de6399 cmp dword ptr [0x11dec1cc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11dec1cc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de639f push 1 */
  push32((uint32_t)(0x1u));
  /* 11de63a1 pop edi */
  EDI = (pop32());
  /* 11de63a2 jne 0x11de63e4 */
  if (!C.zf) goto L_11de63e4;
  /* 11de63a4 push edi */
  push32((uint32_t)(EDI));
  /* 11de63a5 mov eax, 0x11de8580 */
  EAX = (0x11de8580u);
  /* 11de63aa push eax */
  push32((uint32_t)(EAX));
  /* 11de63ab push edi */
  push32((uint32_t)(EDI));
  /* 11de63ac push eax */
  push32((uint32_t)(EAX));
  /* 11de63ad push ebx */
  push32((uint32_t)(EBX));
  /* 11de63ae push ebx */
  push32((uint32_t)(EBX));
  /* 11de63af call dword ptr [0x11de8008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8008))), 0x11de63b5u);
  /* 11de63b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de63b7 je 0x11de63c1 */
  if (C.zf) goto L_11de63c1;
  /* 11de63b9 mov dword ptr [0x11dec1cc], edi */
  w32((uint32_t)(0x11dec1cc), (EDI));
  /* 11de63bf jmp 0x11de63e4 */
  goto L_11de63e4;
L_11de63c1:;
  /* 11de63c1 push edi */
  push32((uint32_t)(EDI));
  /* 11de63c2 mov eax, 0x11de857c */
  EAX = (0x11de857cu);
  /* 11de63c7 push eax */
  push32((uint32_t)(EAX));
  /* 11de63c8 push edi */
  push32((uint32_t)(EDI));
  /* 11de63c9 push eax */
  push32((uint32_t)(EAX));
  /* 11de63ca push ebx */
  push32((uint32_t)(EBX));
  /* 11de63cb push ebx */
  push32((uint32_t)(EBX));
  /* 11de63cc call dword ptr [0x11de8010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8010))), 0x11de63d2u);
  /* 11de63d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de63d4 je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de63da mov dword ptr [0x11dec1cc], 2 */
  w32((uint32_t)(0x11dec1cc), (0x2u));
L_11de63e4:;
  /* 11de63e4 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11de63e7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de63e9 jle 0x11de63fb */
  if ((C.zf||C.sf!=C.of)) goto L_11de63fb;
  /* 11de63eb push esi */
  push32((uint32_t)(ESI));
  /* 11de63ec push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de63ef call 0x11de5c15 */
  push32(0x11de63f4u); f_11de5c15();
  /* 11de63f4 pop ecx */
  ECX = (pop32());
  /* 11de63f5 pop ecx */
  ECX = (pop32());
  /* 11de63f6 mov esi, eax */
  ESI = (EAX);
  /* 11de63f8 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11de63fb:;
  /* 11de63fb cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de63fe jle 0x11de6410 */
  if ((C.zf||C.sf!=C.of)) goto L_11de6410;
  /* 11de6400 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de6403 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de6406 call 0x11de5c15 */
  push32(0x11de640bu); f_11de5c15();
  /* 11de640b pop ecx */
  ECX = (pop32());
  /* 11de640c pop ecx */
  ECX = (pop32());
  /* 11de640d mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11de6410:;
  /* 11de6410 mov eax, dword ptr [0x11dec1cc] */
  EAX = (r32((uint32_t)(0x11dec1cc)));
  /* 11de6415 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6418 jne 0x11de6435 */
  if (!C.zf) goto L_11de6435;
  /* 11de641a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de641d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de6420 push esi */
  push32((uint32_t)(ESI));
  /* 11de6421 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de6424 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de6427 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de642a call dword ptr [0x11de8010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8010))), 0x11de6430u);
  /* 11de6430 jmp 0x11de65dc */
  goto L_11de65dc;
L_11de6435:;
  /* 11de6435 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6437 jne 0x11de65da */
  if (!C.zf) goto L_11de65da;
  /* 11de643d cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6440 jne 0x11de644a */
  if (!C.zf) goto L_11de644a;
  /* 11de6442 mov eax, dword ptr [0x11dec1b0] */
  EAX = (r32((uint32_t)(0x11dec1b0)));
  /* 11de6447 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11de644a:;
  /* 11de644a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de644c je 0x11de6457 */
  if (C.zf) goto L_11de6457;
  /* 11de644e cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6451 jne 0x11de64ef */
  if (!C.zf) goto L_11de64ef;
L_11de6457:;
  /* 11de6457 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de645a jne 0x11de6464 */
  if (!C.zf) goto L_11de6464;
L_11de645c:;
  /* 11de645c push 2 */
  push32((uint32_t)(0x2u));
L_11de645e:;
  /* 11de645e pop eax */
  EAX = (pop32());
  /* 11de645f jmp 0x11de65dc */
  goto L_11de65dc;
L_11de6464:;
  /* 11de6464 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6467 jle 0x11de6470 */
  if ((C.zf||C.sf!=C.of)) goto L_11de6470;
L_11de6469:;
  /* 11de6469 mov eax, edi */
  EAX = (EDI);
  /* 11de646b jmp 0x11de65dc */
  goto L_11de65dc;
L_11de6470:;
  /* 11de6470 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6472 jg 0x11de64b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de64b5;
  /* 11de6474 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11de6477 push eax */
  push32((uint32_t)(EAX));
  /* 11de6478 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de647b call dword ptr [0x11de8044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8044))), 0x11de6481u);
  /* 11de6481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6483 je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de6489 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de648b jle 0x11de64b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11de64b9;
  /* 11de648d cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6491 jb 0x11de64b5 */
  if (C.cf) goto L_11de64b5;
  /* 11de6493 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11de6496 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6499 je 0x11de64b5 */
  if (C.zf) goto L_11de64b5;
L_11de649b:;
  /* 11de649b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11de649e cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64a0 je 0x11de64b5 */
  if (C.zf) goto L_11de64b5;
  /* 11de64a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de64a5 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11de64a7 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64a9 jb 0x11de64af */
  if (C.cf) goto L_11de64af;
  /* 11de64ab cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64ad jbe 0x11de645c */
  if ((C.cf||C.zf)) goto L_11de645c;
L_11de64af:;
  /* 11de64af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de64b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de64b1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64b3 jne 0x11de649b */
  if (!C.zf) goto L_11de649b;
L_11de64b5:;
  /* 11de64b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de64b7 jmp 0x11de645e */
  goto L_11de645e;
L_11de64b9:;
  /* 11de64b9 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de64bc jle 0x11de64ef */
  if ((C.zf||C.sf!=C.of)) goto L_11de64ef;
  /* 11de64be cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de64c2 jb 0x11de6469 */
  if (C.cf) goto L_11de6469;
  /* 11de64c4 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11de64c7 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64ca je 0x11de6469 */
  if (C.zf) goto L_11de6469;
L_11de64cc:;
  /* 11de64cc mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11de64cf cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64d1 je 0x11de6469 */
  if (C.zf) goto L_11de6469;
  /* 11de64d3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11de64d6 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11de64d8 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64da jb 0x11de64e4 */
  if (C.cf) goto L_11de64e4;
  /* 11de64dc cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64de jbe 0x11de645c */
  if ((C.cf||C.zf)) goto L_11de645c;
L_11de64e4:;
  /* 11de64e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de64e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de64e6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de64e8 jne 0x11de64cc */
  if (!C.zf) goto L_11de64cc;
  /* 11de64ea jmp 0x11de6469 */
  goto L_11de6469;
L_11de64ef:;
  /* 11de64ef push ebx */
  push32((uint32_t)(EBX));
  /* 11de64f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11de64f1 push esi */
  push32((uint32_t)(ESI));
  /* 11de64f2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de64f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de64f7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de64fa call dword ptr [0x11de8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8024))), 0x11de6500u);
  /* 11de6500 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11de6503 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6505 je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de650b mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11de650e add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6510 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6513 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11de6515 call 0x11de4240 */
  push32(0x11de651au); f_11de4240();
  /* 11de651a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de651d mov eax, esp */
  EAX = (ESP);
  /* 11de651f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de6522 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de6526 jmp 0x11de653e */
  goto L_11de653e;
  /* 11de6528 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de652a pop eax */
  EAX = (pop32());
  /* 11de652b ret  */
  ESPCHK(0x11de6371u, _esp0);
  ESP += 4; return;
  /* 11de652c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11de652f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de6531 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11de6534 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de6538 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11de653b push 1 */
  push32((uint32_t)(0x1u));
  /* 11de653d pop edi */
  EDI = (pop32());
L_11de653e:;
  /* 11de653e cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6541 je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de6547 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11de654a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de654d push esi */
  push32((uint32_t)(ESI));
  /* 11de654e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11de6551 push edi */
  push32((uint32_t)(EDI));
  /* 11de6552 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de6555 mov esi, dword ptr [0x11de8024] */
  ESI = (r32((uint32_t)(0x11de8024)));
  /* 11de655b call esi */
  call_ind((uint32_t)(ESI), 0x11de655du);
  /* 11de655d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de655f je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de6561 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6562 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6563 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de6566 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de6569 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de656b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de656e call esi */
  call_ind((uint32_t)(ESI), 0x11de6570u);
  /* 11de6570 mov esi, eax */
  ESI = (EAX);
  /* 11de6572 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11de6575 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6577 je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de6579 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11de657c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11de657f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6582 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11de6584 call 0x11de4240 */
  push32(0x11de6589u); f_11de4240();
  /* 11de6589 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11de658c mov edi, esp */
  EDI = (ESP);
  /* 11de658e mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11de6591 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de6595 jmp 0x11de65a9 */
  goto L_11de65a9;
  /* 11de6597 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de6599 pop eax */
  EAX = (pop32());
  /* 11de659a ret  */
  ESPCHK(0x11de6371u, _esp0);
  ESP += 4; return;
  /* 11de659b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11de659e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de65a0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de65a2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de65a6 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11de65a9:;
  /* 11de65a9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de65ab je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de65ad push esi */
  push32((uint32_t)(ESI));
  /* 11de65ae push edi */
  push32((uint32_t)(EDI));
  /* 11de65af push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11de65b2 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11de65b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de65b7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11de65ba call dword ptr [0x11de8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8024))), 0x11de65c0u);
  /* 11de65c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de65c2 je 0x11de65da */
  if (C.zf) goto L_11de65da;
  /* 11de65c4 push esi */
  push32((uint32_t)(ESI));
  /* 11de65c5 push edi */
  push32((uint32_t)(EDI));
  /* 11de65c6 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11de65c9 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de65cc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de65cf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de65d2 call dword ptr [0x11de8008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8008))), 0x11de65d8u);
  /* 11de65d8 jmp 0x11de65dc */
  goto L_11de65dc;
L_11de65da:;
  /* 11de65da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11de65dc:;
  /* 11de65dc lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11de65df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11de65e2 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11de65e9 pop edi */
  EDI = (pop32());
  /* 11de65ea pop esi */
  ESI = (pop32());
  /* 11de65eb pop ebx */
  EBX = (pop32());
  /* 11de65ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de65ed ret  */
  ESPCHK(0x11de6371u, _esp0);
  ESP += 4; return;
}

/* FUN_100065ee @ 0x11de65ee (391 bytes, 155 insns) */
void f_11de65ee(void) {
  FTRACE(0x11de65eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de65ee push ebp */
  push32((uint32_t)(EBP));
  /* 11de65ef mov ebp, esp */
  EBP = (ESP);
  /* 11de65f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11de65f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11de65f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de65f4 push esi */
  push32((uint32_t)(ESI));
  /* 11de65f5 push edi */
  push32((uint32_t)(EDI));
  /* 11de65f6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de65f8 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de65fb je 0x11de6652 */
  if (C.zf) goto L_11de6652;
  /* 11de65fd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11de65ff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de6602 call 0x11de6be9 */
  push32(0x11de6607u); f_11de6be9();
  /* 11de6607 mov esi, eax */
  ESI = (EAX);
  /* 11de6609 pop ecx */
  ECX = (pop32());
  /* 11de660a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de660c pop ecx */
  ECX = (pop32());
  /* 11de660d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11de6610 je 0x11de6652 */
  if (C.zf) goto L_11de6652;
  /* 11de6612 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6615 je 0x11de6652 */
  if (C.zf) goto L_11de6652;
  /* 11de6617 mov eax, dword ptr [0x11debf2c] */
  EAX = (r32((uint32_t)(0x11debf2c)));
  /* 11de661c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de661e cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6621 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11de6624 cmp eax, dword ptr [0x11debf30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11debf30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de662a jne 0x11de6638 */
  if (!C.zf) goto L_11de6638;
  /* 11de662c push eax */
  push32((uint32_t)(EAX));
  /* 11de662d call 0x11de67cd */
  push32(0x11de6632u); f_11de67cd();
  /* 11de6632 pop ecx */
  ECX = (pop32());
  /* 11de6633 mov dword ptr [0x11debf2c], eax */
  w32((uint32_t)(0x11debf2c), (EAX));
L_11de6638:;
  /* 11de6638 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de663a jne 0x11de6690 */
  if (!C.zf) goto L_11de6690;
  /* 11de663c cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de663f je 0x11de665a */
  if (C.zf) goto L_11de665a;
  /* 11de6641 cmp dword ptr [0x11debf34], edi */
  { uint32_t _a=(r32((uint32_t)(0x11debf34))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6647 je 0x11de665a */
  if (C.zf) goto L_11de665a;
  /* 11de6649 call 0x11de6303 */
  push32(0x11de664eu); f_11de6303();
  /* 11de664e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6650 je 0x11de6690 */
  if (C.zf) goto L_11de6690;
L_11de6652:;
  /* 11de6652 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11de6655:;
  /* 11de6655 pop edi */
  EDI = (pop32());
  /* 11de6656 pop esi */
  ESI = (pop32());
  /* 11de6657 pop ebx */
  EBX = (pop32());
  /* 11de6658 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de6659 ret  */
  ESPCHK(0x11de65eeu, _esp0);
  ESP += 4; return;
L_11de665a:;
  /* 11de665a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de665c jne 0x11de676e */
  if (!C.zf) goto L_11de676e;
  /* 11de6662 push 4 */
  push32((uint32_t)(0x4u));
  /* 11de6664 call 0x11de34b1 */
  push32(0x11de6669u); f_11de34b1();
  /* 11de6669 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de666b pop ecx */
  ECX = (pop32());
  /* 11de666c mov dword ptr [0x11debf2c], eax */
  w32((uint32_t)(0x11debf2c), (EAX));
  /* 11de6671 je 0x11de6652 */
  if (C.zf) goto L_11de6652;
  /* 11de6673 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11de6675 cmp dword ptr [0x11debf34], edi */
  { uint32_t _a=(r32((uint32_t)(0x11debf34))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de667b jne 0x11de6690 */
  if (!C.zf) goto L_11de6690;
  /* 11de667d push 4 */
  push32((uint32_t)(0x4u));
  /* 11de667f call 0x11de34b1 */
  push32(0x11de6684u); f_11de34b1();
  /* 11de6684 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6686 pop ecx */
  ECX = (pop32());
  /* 11de6687 mov dword ptr [0x11debf34], eax */
  w32((uint32_t)(0x11debf34), (EAX));
  /* 11de668c je 0x11de6652 */
  if (C.zf) goto L_11de6652;
  /* 11de668e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11de6690:;
  /* 11de6690 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de6693 mov edi, dword ptr [0x11debf2c] */
  EDI = (r32((uint32_t)(0x11debf2c)));
  /* 11de6699 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11de669c push esi */
  push32((uint32_t)(ESI));
  /* 11de669d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de66a0 call 0x11de6775 */
  push32(0x11de66a5u); f_11de6775();
  /* 11de66a5 mov esi, eax */
  ESI = (EAX);
  /* 11de66a7 pop ecx */
  ECX = (pop32());
  /* 11de66a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de66aa pop ecx */
  ECX = (pop32());
  /* 11de66ab jl 0x11de66f0 */
  if ((C.sf!=C.of)) goto L_11de66f0;
  /* 11de66ad cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de66b0 je 0x11de66f0 */
  if (C.zf) goto L_11de66f0;
  /* 11de66b2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de66b4 je 0x11de66e8 */
  if (C.zf) goto L_11de66e8;
  /* 11de66b6 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11de66b9 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11de66bc call 0x11de2e06 */
  push32(0x11de66c1u); f_11de2e06();
  /* 11de66c1 pop ecx */
  ECX = (pop32());
L_11de66c2:;
  /* 11de66c2 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de66c5 je 0x11de66d2 */
  if (C.zf) goto L_11de66d2;
  /* 11de66c7 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11de66ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de66cb mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11de66cd add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de66d0 jmp 0x11de66c2 */
  goto L_11de66c2;
L_11de66d2:;
  /* 11de66d2 mov eax, esi */
  EAX = (ESI);
  /* 11de66d4 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de66d7 push eax */
  push32((uint32_t)(EAX));
  /* 11de66d8 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11de66db call 0x11de68ba */
  push32(0x11de66e0u); f_11de68ba();
  /* 11de66e0 pop ecx */
  ECX = (pop32());
  /* 11de66e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de66e3 pop ecx */
  ECX = (pop32());
  /* 11de66e4 je 0x11de6722 */
  if (C.zf) goto L_11de6722;
  /* 11de66e6 jmp 0x11de671d */
  goto L_11de671d;
L_11de66e8:;
  /* 11de66e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de66eb mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11de66ee jmp 0x11de6722 */
  goto L_11de6722;
L_11de66f0:;
  /* 11de66f0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11de66f2 jne 0x11de676e */
  if (!C.zf) goto L_11de676e;
  /* 11de66f4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de66f6 jge 0x11de66fa */
  if ((C.sf==C.of)) goto L_11de66fa;
  /* 11de66f8 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11de66fa:;
  /* 11de66fa lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11de6701 push eax */
  push32((uint32_t)(EAX));
  /* 11de6702 push edi */
  push32((uint32_t)(EDI));
  /* 11de6703 call 0x11de68ba */
  push32(0x11de6708u); f_11de68ba();
  /* 11de6708 pop ecx */
  ECX = (pop32());
  /* 11de6709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de670b pop ecx */
  ECX = (pop32());
  /* 11de670c je 0x11de6652 */
  if (C.zf) goto L_11de6652;
  /* 11de6712 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6715 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11de6718 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11de671d:;
  /* 11de671d mov dword ptr [0x11debf2c], eax */
  w32((uint32_t)(0x11debf2c), (EAX));
L_11de6722:;
  /* 11de6722 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6726 je 0x11de676e */
  if (C.zf) goto L_11de676e;
  /* 11de6728 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de672b call 0x11de36e0 */
  push32(0x11de6730u); f_11de36e0();
  /* 11de6730 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de6731 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de6732 push eax */
  push32((uint32_t)(EAX));
  /* 11de6733 call 0x11de34b1 */
  push32(0x11de6738u); f_11de34b1();
  /* 11de6738 mov esi, eax */
  ESI = (EAX);
  /* 11de673a pop ecx */
  ECX = (pop32());
  /* 11de673b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de673d pop ecx */
  ECX = (pop32());
  /* 11de673e je 0x11de676e */
  if (C.zf) goto L_11de676e;
  /* 11de6740 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de6743 push esi */
  push32((uint32_t)(ESI));
  /* 11de6744 call 0x11de35f0 */
  push32(0x11de6749u); f_11de35f0();
  /* 11de6749 mov eax, esi */
  EAX = (ESI);
  /* 11de674b pop ecx */
  ECX = (pop32());
  /* 11de674c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de674f pop ecx */
  ECX = (pop32());
  /* 11de6750 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6753 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11de6756 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de6757 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de6759 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de675b not ebx */
  EBX = (~(EBX));
  /* 11de675d and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11de675f push ebx */
  push32((uint32_t)(EBX));
  /* 11de6760 push esi */
  push32((uint32_t)(ESI));
  /* 11de6761 call dword ptr [0x11de8004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8004))), 0x11de6767u);
  /* 11de6767 push esi */
  push32((uint32_t)(ESI));
  /* 11de6768 call 0x11de2e06 */
  push32(0x11de676du); f_11de2e06();
  /* 11de676d pop ecx */
  ECX = (pop32());
L_11de676e:;
  /* 11de676e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6770 jmp 0x11de6655 */
  goto L_11de6655;
}

/* FUN_10006775 @ 0x11de6775 (88 bytes, 35 insns) */
void f_11de6775(void) {
  FTRACE(0x11de6775u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6775 push esi */
  push32((uint32_t)(ESI));
  /* 11de6776 mov esi, dword ptr [0x11debf2c] */
  ESI = (r32((uint32_t)(0x11debf2c)));
  /* 11de677c push edi */
  push32((uint32_t)(EDI));
  /* 11de677d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de677f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6781 je 0x11de67b0 */
  if (C.zf) goto L_11de67b0;
  /* 11de6783 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11de6787:;
  /* 11de6787 push edi */
  push32((uint32_t)(EDI));
  /* 11de6788 push eax */
  push32((uint32_t)(EAX));
  /* 11de6789 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11de678d call 0x11de62c4 */
  push32(0x11de6792u); f_11de62c4();
  /* 11de6792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6797 jne 0x11de67a6 */
  if (!C.zf) goto L_11de67a6;
  /* 11de6799 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11de679b mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11de679e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de67a0 je 0x11de67c0 */
  if (C.zf) goto L_11de67c0;
  /* 11de67a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de67a4 je 0x11de67c0 */
  if (C.zf) goto L_11de67c0;
L_11de67a6:;
  /* 11de67a6 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11de67a9 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de67ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de67ae jne 0x11de6787 */
  if (!C.zf) goto L_11de6787;
L_11de67b0:;
  /* 11de67b0 mov eax, esi */
  EAX = (ESI);
  /* 11de67b2 sub eax, dword ptr [0x11debf2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11debf2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de67b8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de67bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11de67bd:;
  /* 11de67bd pop edi */
  EDI = (pop32());
  /* 11de67be pop esi */
  ESI = (pop32());
  /* 11de67bf ret  */
  ESPCHK(0x11de6775u, _esp0);
  ESP += 4; return;
L_11de67c0:;
  /* 11de67c0 mov eax, esi */
  EAX = (ESI);
  /* 11de67c2 sub eax, dword ptr [0x11debf2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11debf2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de67c8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11de67cb jmp 0x11de67bd */
  goto L_11de67bd;
}

/* FUN_100067cd @ 0x11de67cd (103 bytes, 49 insns) */
void f_11de67cd(void) {
  FTRACE(0x11de67cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de67cd push edi */
  push32((uint32_t)(EDI));
  /* 11de67ce mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de67d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de67d4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de67d6 jne 0x11de67dc */
  if (!C.zf) goto L_11de67dc;
  /* 11de67d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de67da pop edi */
  EDI = (pop32());
  /* 11de67db ret  */
  ESPCHK(0x11de67cdu, _esp0);
  ESP += 4; return;
L_11de67dc:;
  /* 11de67dc cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de67df lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11de67e2 je 0x11de67ee */
  if (C.zf) goto L_11de67ee;
L_11de67e4:;
  /* 11de67e4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11de67e6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de67e7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de67ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11de67ec jne 0x11de67e4 */
  if (!C.zf) goto L_11de67e4;
L_11de67ee:;
  /* 11de67ee push ebx */
  push32((uint32_t)(EBX));
  /* 11de67ef push ebp */
  push32((uint32_t)(EBP));
  /* 11de67f0 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11de67f7 push esi */
  push32((uint32_t)(ESI));
  /* 11de67f8 push eax */
  push32((uint32_t)(EAX));
  /* 11de67f9 call 0x11de34b1 */
  push32(0x11de67feu); f_11de34b1();
  /* 11de67fe mov esi, eax */
  ESI = (EAX);
  /* 11de6800 pop ecx */
  ECX = (pop32());
  /* 11de6801 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de6803 mov ebp, esi */
  EBP = (ESI);
  /* 11de6805 jne 0x11de680f */
  if (!C.zf) goto L_11de680f;
  /* 11de6807 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6809 call 0x11de1dd1 */
  push32(0x11de680eu); f_11de1dd1();
  /* 11de680e pop ecx */
  ECX = (pop32());
L_11de680f:;
  /* 11de680f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11de6811 mov ebx, edi */
  EBX = (EDI);
L_11de6813:;
  /* 11de6813 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6815 je 0x11de682a */
  if (C.zf) goto L_11de682a;
  /* 11de6817 push eax */
  push32((uint32_t)(EAX));
  /* 11de6818 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de681b call 0x11de6c80 */
  push32(0x11de6820u); f_11de6c80();
  /* 11de6820 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11de6822 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11de6824 pop ecx */
  ECX = (pop32());
  /* 11de6825 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6828 jmp 0x11de6813 */
  goto L_11de6813;
L_11de682a:;
  /* 11de682a and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11de682d mov eax, ebp */
  EAX = (EBP);
  /* 11de682f pop esi */
  ESI = (pop32());
  /* 11de6830 pop ebp */
  EBP = (pop32());
  /* 11de6831 pop ebx */
  EBX = (pop32());
  /* 11de6832 pop edi */
  EDI = (pop32());
  /* 11de6833 ret  */
  ESPCHK(0x11de67cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x11de6840 (62 bytes, 35 insns) */
void f_11de6840(void) {
  FTRACE(0x11de6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6840 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6841 mov ebp, esp */
  EBP = (ESP);
  /* 11de6843 push esi */
  push32((uint32_t)(ESI));
  /* 11de6844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6846 push eax */
  push32((uint32_t)(EAX));
  /* 11de6847 push eax */
  push32((uint32_t)(EAX));
  /* 11de6848 push eax */
  push32((uint32_t)(EAX));
  /* 11de6849 push eax */
  push32((uint32_t)(EAX));
  /* 11de684a push eax */
  push32((uint32_t)(EAX));
  /* 11de684b push eax */
  push32((uint32_t)(EAX));
  /* 11de684c push eax */
  push32((uint32_t)(EAX));
  /* 11de684d push eax */
  push32((uint32_t)(EAX));
  /* 11de684e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6851 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de6854:;
  /* 11de6854 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11de6856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de6858 je 0x11de6861 */
  if (C.zf) goto L_11de6861;
  /* 11de685a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de685b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11de685b");
  /* 11de685f jmp 0x11de6854 */
  goto L_11de6854;
L_11de6861:;
  /* 11de6861 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6864 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11de6867 nop  */
  /* nop */
L_11de6868:;
  /* 11de6868 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11de6869 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de686b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de686d je 0x11de6876 */
  if (C.zf) goto L_11de6876;
  /* 11de686f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6870 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11de6870");
  /* 11de6874 jae 0x11de6868 */
  if (!C.cf) goto L_11de6868;
L_11de6876:;
  /* 11de6876 mov eax, ecx */
  EAX = (ECX);
  /* 11de6878 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de687b pop esi */
  ESI = (pop32());
  /* 11de687c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de687d ret  */
  ESPCHK(0x11de6840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x11de6880 (58 bytes, 32 insns) */
void f_11de6880(void) {
  FTRACE(0x11de6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6880 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6881 mov ebp, esp */
  EBP = (ESP);
  /* 11de6883 push esi */
  push32((uint32_t)(ESI));
  /* 11de6884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6886 push eax */
  push32((uint32_t)(EAX));
  /* 11de6887 push eax */
  push32((uint32_t)(EAX));
  /* 11de6888 push eax */
  push32((uint32_t)(EAX));
  /* 11de6889 push eax */
  push32((uint32_t)(EAX));
  /* 11de688a push eax */
  push32((uint32_t)(EAX));
  /* 11de688b push eax */
  push32((uint32_t)(EAX));
  /* 11de688c push eax */
  push32((uint32_t)(EAX));
  /* 11de688d push eax */
  push32((uint32_t)(EAX));
  /* 11de688e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6891 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de6894:;
  /* 11de6894 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11de6896 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de6898 je 0x11de68a1 */
  if (C.zf) goto L_11de68a1;
  /* 11de689a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11de689b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11de689b");
  /* 11de689f jmp 0x11de6894 */
  goto L_11de6894;
L_11de68a1:;
  /* 11de68a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11de68a4:;
  /* 11de68a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de68a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de68a8 je 0x11de68b4 */
  if (C.zf) goto L_11de68b4;
  /* 11de68aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de68ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11de68ab");
  /* 11de68af jae 0x11de68a4 */
  if (!C.cf) goto L_11de68a4;
  /* 11de68b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11de68b4:;
  /* 11de68b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de68b7 pop esi */
  ESI = (pop32());
  /* 11de68b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de68b9 ret  */
  ESPCHK(0x11de6880u, _esp0);
  ESP += 4; return;
}

